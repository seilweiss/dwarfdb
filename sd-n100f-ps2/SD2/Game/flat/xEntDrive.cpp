typedef struct RpWorld;
typedef struct xFFX;
typedef struct RwLLLink;
typedef struct RpGeometry;
typedef struct RwObjectHasFrame;
typedef struct _xBBox;
typedef struct RxClusterDefinition;
typedef struct RxPipelineNode;
typedef struct xAnimSingle;
typedef enum RxClusterValidityReq;
typedef struct _xEnt;
typedef struct RxPipelineRequiresCluster;
typedef struct _xEntDrive;
typedef struct RpVertexNormal;
typedef struct RxPipeline;
typedef struct iEnv;
typedef struct xBase;
typedef struct _xEntShadow;
typedef struct RpAtomic;
typedef struct RpMaterialList;
typedef struct RpMorphTarget;
typedef struct xAnimTable;
typedef struct RpMaterial;
typedef struct RpSector;
typedef struct _xEntFrame;
typedef enum RwTextureFilterMode;
typedef struct xAnimEffect;
typedef struct _xMat3x3;
typedef struct RxPipelineCluster;
typedef struct rxHeapBlockHeader;
typedef struct RwObject;
typedef struct RwResEntry;
typedef struct xAnimTransition;
typedef enum RxClusterValid;
typedef struct RwV3d;
typedef struct xModelInstance;
typedef struct p2BaseAsset;
typedef struct RpLight;
typedef struct xAnimState;
typedef struct rxHeapFreeBlock;
typedef struct RwRGBA;
typedef struct RwFrame;
typedef struct RpClump;
typedef struct p2LinkAsset;
typedef struct RwRaster;
typedef struct xModelPool;
typedef struct RpPolygon;
typedef struct RwLinkList;
typedef struct RxNodeDefinition;
typedef struct RxPacket;
typedef struct RpTriangle;
typedef struct xAnimPlay;
typedef struct _xMat4x3;
typedef struct iShadowCache;
typedef struct rxReq;
typedef struct RwTexDictionary;
typedef struct p2EntAsset;
typedef struct RwTexCoords;
typedef struct _xQuat;
typedef struct RxPipelineNodeTopSortData;
typedef struct RxOutputSpec;
typedef struct RwMatrixTag;
typedef enum RxClusterForcePresent;
typedef struct RpCollSector;
typedef struct RwBBox;
typedef struct RxClusterRef;
typedef struct RpMeshHeader;
typedef enum RxNodeDefEditable;
typedef struct _xBound;
typedef struct xAnimActiveEffect;
typedef struct _xScene;
typedef struct _xVec3;
typedef struct xMemPool;
typedef struct RwTexture;
typedef struct RxIoSpec;
typedef struct _iCollis;
typedef struct _xRot;
typedef struct RxNodeMethods;
typedef struct xAnimFile;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct RpWorldSector;
typedef struct RwSurfaceProperties;
typedef struct RpInterpolator;
typedef struct xAnimTransitionList;
typedef struct _xEntCollis;
typedef struct RxHeap;
typedef struct RxCluster;
typedef struct RwSphere;
typedef struct _xCollis;
typedef enum rxEmbeddedPacketState;
typedef enum RwTextureAddressMode;
typedef struct _xSphere;
typedef enum RpWorldRenderOrder;
typedef struct RxPipelineNodeParam;
typedef struct _xCylinder;
typedef struct xSurface;
typedef struct _xEnv;
typedef struct xQCData;
typedef struct _xBox;
typedef struct RwRGBAReal;

typedef int8*(*type_0)(uint32);
typedef uint32(*type_1)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_3)(RxPipelineNode*);
typedef RwObjectHasFrame*(*type_6)(RwObjectHasFrame*);
typedef RpAtomic*(*type_7)(RpAtomic*);
typedef int32(*type_9)(RxPipelineNode*, RxPipeline*);
typedef int32(*type_10)(xBase*, xBase*, uint32, float32*, xBase*);
typedef uint32(*type_14)(RxPipelineNode*, uint32, uint32, void*);
typedef uint32(*type_16)(xAnimTransition*, xAnimSingle*, void*);
typedef int32(*type_18)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int32(*type_19)(RxNodeDefinition*);
typedef void(*type_20)(RxNodeDefinition*);
typedef RpWorldSector*(*type_22)(RpWorldSector*);
typedef void(*type_23)(RwResEntry*);
typedef int32(*type_24)(RxPipelineNode*);
typedef xBase*(*type_26)(uint32);
typedef int8*(*type_28)(xBase*);
typedef void(*type_31)(_xEnt*, _xScene*, float32, _xEntFrame*);
typedef void(*type_32)(xMemPool*, void*);
typedef void(*type_33)(_xEnt*, _xScene*, float32);
typedef void(*type_34)(_xEnt*);
typedef void(*type_38)(_xEnt*);
typedef void(*type_39)(_xEnt*, _xScene*, float32, _xEntCollis*);
typedef void(*type_40)(_xEnt*, _xVec3*);
typedef uint32(*type_43)(_xEnt*, _xEnt*, _xScene*, float32, _xCollis*);
typedef void(*type_46)(_xEnt*, _xVec3*);
typedef RpClump*(*type_47)(RpClump*, void*);

typedef uint8 type_2[8];
typedef uint8 type_4[8];
typedef uint8 type_5[8];
typedef uint8 type_8[8];
typedef RxCluster type_11[1];
typedef RpLight* type_12[2];
typedef uint8 type_13[3];
typedef RwFrame* type_15[2];
typedef uint32 type_17[4];
typedef uint16 type_21[3];
typedef uint16 type_25[3];
typedef _xVec3 type_27[4];
typedef float32 type_29[2];
typedef uint8 type_30[3];
typedef RwTexCoords* type_35[8];
typedef int8 type_36[32];
typedef int8 type_37[32];
typedef RwTexCoords* type_41[8];
typedef float32 type_42[4];
typedef float32 type_44[4];
typedef uint8 type_45[2];
typedef _xVec3 type_48[2];
typedef float32 type_49[4];
typedef _xQuat type_50[2];
typedef _xCollis type_51[18];

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

struct xFFX
{
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
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

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
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

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
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

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
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

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
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

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	p2LinkAsset* link;
	int32(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*);
};

struct _xEntShadow
{
	_xVec3 pos;
	_xVec3 vec;
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

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
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

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
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

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
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

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
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

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
};

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
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

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLLLink inWorldLink;
	RpClump*(*callback)(RpClump*, void*);
	uint16 renderFrame;
	uint16 pad;
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

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
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

struct RxNodeDefinition
{
	int8* name;
	RxNodeMethods nodeMethods;
	RxIoSpec io;
	uint32 pipelineNodePrivateDataSize;
	RxNodeDefEditable editable;
	int32 InputPipesCnt;
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

struct iShadowCache
{
	_xVec3 pos;
	_xVec3 right;
	_xVec3 corner[4];
};

struct rxReq
{
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
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

struct RwTexCoords
{
	float32 u;
	float32 v;
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

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
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

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
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

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
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

struct _xVec3
{
	float32 x;
	float32 y;
	float32 z;
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

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

struct _iCollis
{
	int32 unknown;
};

struct _xRot
{
	_xVec3 axis;
	float32 angle;
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

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
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

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
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

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
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

struct _xSphere
{
	_xVec3 center;
	float32 r;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
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

struct xSurface
{
};

struct _xEnv
{
	iEnv* geom;
	iEnv ienv;
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

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};


void xEntDriveUpdate(_xEntDrive* drv, float32 dt);
void xEntDriveDismount(_xEntDrive* drv, float32 dmt);
void xEntDriveMount(_xEntDrive* drv, _xEnt* driver, float32 mt);
void xEntDriveInit(_xEntDrive* drv, _xEnt* driven);

// xEntDriveUpdate__FP10_xEntDriveP7_xScenef
// Start address: 0x195c50
void xEntDriveUpdate(_xEntDrive* drv, float32 dt)
{
	_xVec3 newq;
	_xMat3x3 rot;
	_xVec3 euler;
	// Line 104, Address: 0x195c50, Func Offset: 0
	// Line 107, Address: 0x195c60, Func Offset: 0x10
	// Line 114, Address: 0x195c78, Func Offset: 0x28
	// Line 116, Address: 0x195c94, Func Offset: 0x44
	// Line 120, Address: 0x195ca4, Func Offset: 0x54
	// Line 123, Address: 0x195ca8, Func Offset: 0x58
	// Line 124, Address: 0x195cb0, Func Offset: 0x60
	// Line 127, Address: 0x195cc0, Func Offset: 0x70
	// Line 129, Address: 0x195cdc, Func Offset: 0x8c
	// Line 131, Address: 0x195cec, Func Offset: 0x9c
	// Line 133, Address: 0x195cf4, Func Offset: 0xa4
	// Line 134, Address: 0x195cfc, Func Offset: 0xac
	// Line 138, Address: 0x195d18, Func Offset: 0xc8
	// Line 142, Address: 0x195d48, Func Offset: 0xf8
	// Line 146, Address: 0x195d74, Func Offset: 0x124
	// Line 147, Address: 0x195d84, Func Offset: 0x134
	// Line 148, Address: 0x195da0, Func Offset: 0x150
	// Line 149, Address: 0x195db4, Func Offset: 0x164
	// Line 153, Address: 0x195dbc, Func Offset: 0x16c
	// Line 154, Address: 0x195dd8, Func Offset: 0x188
	// Line 155, Address: 0x195e28, Func Offset: 0x1d8
	// Line 156, Address: 0x195e60, Func Offset: 0x210
	// Line 157, Address: 0x195e90, Func Offset: 0x240
	// Line 159, Address: 0x195ec8, Func Offset: 0x278
	// Line 160, Address: 0x195ee4, Func Offset: 0x294
	// Line 161, Address: 0x195f34, Func Offset: 0x2e4
	// Line 162, Address: 0x195f6c, Func Offset: 0x31c
	// Line 163, Address: 0x195f9c, Func Offset: 0x34c
	// Line 167, Address: 0x195fd4, Func Offset: 0x384
	// Line 168, Address: 0x195fd8, Func Offset: 0x388
	// Line 167, Address: 0x195fdc, Func Offset: 0x38c
	// Line 168, Address: 0x195ff8, Func Offset: 0x3a8
	// Line 169, Address: 0x19600c, Func Offset: 0x3bc
	// Line 171, Address: 0x196050, Func Offset: 0x400
	// Line 172, Address: 0x19606c, Func Offset: 0x41c
	// Line 174, Address: 0x1960b0, Func Offset: 0x460
	// Func End, Address: 0x1960c4, Func Offset: 0x474
}

// xEntDriveDismount__FP10_xEntDrivef
// Start address: 0x1960d0
void xEntDriveDismount(_xEntDrive* drv, float32 dmt)
{
	// Line 82, Address: 0x1960d0, Func Offset: 0
	// Line 85, Address: 0x1960d8, Func Offset: 0x8
	// Line 89, Address: 0x1960e4, Func Offset: 0x14
	// Line 90, Address: 0x1960e8, Func Offset: 0x18
	// Line 91, Address: 0x1960f0, Func Offset: 0x20
	// Line 92, Address: 0x1960f4, Func Offset: 0x24
	// Line 93, Address: 0x196100, Func Offset: 0x30
	// Line 94, Address: 0x196104, Func Offset: 0x34
	// Line 95, Address: 0x196108, Func Offset: 0x38
	// Line 96, Address: 0x19610c, Func Offset: 0x3c
	// Line 98, Address: 0x196110, Func Offset: 0x40
	// Line 100, Address: 0x196130, Func Offset: 0x60
	// Line 101, Address: 0x196174, Func Offset: 0xa4
	// Func End, Address: 0x196180, Func Offset: 0xb0
}

// xEntDriveMount__FP10_xEntDriveP5_xEntf
// Start address: 0x196180
void xEntDriveMount(_xEntDrive* drv, _xEnt* driver, float32 mt)
{
	_xVec3 euler;
	// Line 45, Address: 0x196180, Func Offset: 0
	// Line 52, Address: 0x19618c, Func Offset: 0xc
	// Line 54, Address: 0x1961b4, Func Offset: 0x34
	// Line 55, Address: 0x1961b8, Func Offset: 0x38
	// Line 57, Address: 0x1961bc, Func Offset: 0x3c
	// Line 55, Address: 0x1961c8, Func Offset: 0x48
	// Line 56, Address: 0x1961cc, Func Offset: 0x4c
	// Line 57, Address: 0x1961d0, Func Offset: 0x50
	// Line 58, Address: 0x1961e0, Func Offset: 0x60
	// Line 59, Address: 0x1961e4, Func Offset: 0x64
	// Line 60, Address: 0x1961e8, Func Offset: 0x68
	// Line 62, Address: 0x1961ec, Func Offset: 0x6c
	// Line 63, Address: 0x1961f4, Func Offset: 0x74
	// Line 64, Address: 0x1961f8, Func Offset: 0x78
	// Line 65, Address: 0x1961fc, Func Offset: 0x7c
	// Line 66, Address: 0x196200, Func Offset: 0x80
	// Line 69, Address: 0x196204, Func Offset: 0x84
	// Line 72, Address: 0x196214, Func Offset: 0x94
	// Line 73, Address: 0x196224, Func Offset: 0xa4
	// Line 76, Address: 0x19622c, Func Offset: 0xac
	// Line 78, Address: 0x196230, Func Offset: 0xb0
	// Line 76, Address: 0x196238, Func Offset: 0xb8
	// Line 78, Address: 0x196254, Func Offset: 0xd4
	// Line 79, Address: 0x196290, Func Offset: 0x110
	// Func End, Address: 0x1962a0, Func Offset: 0x120
}

// xEntDriveInit__FP10_xEntDriveP5_xEnt
// Start address: 0x1962a0
void xEntDriveInit(_xEntDrive* drv, _xEnt* driven)
{
	// Line 32, Address: 0x1962a0, Func Offset: 0
	// Line 33, Address: 0x1962a4, Func Offset: 0x4
	// Line 34, Address: 0x1962a8, Func Offset: 0x8
	// Line 35, Address: 0x1962ac, Func Offset: 0xc
	// Line 36, Address: 0x1962b0, Func Offset: 0x10
	// Line 37, Address: 0x1962b4, Func Offset: 0x14
	// Line 38, Address: 0x1962b8, Func Offset: 0x18
	// Line 39, Address: 0x1962bc, Func Offset: 0x1c
	// Line 40, Address: 0x1962c0, Func Offset: 0x20
	// Line 42, Address: 0x1962c4, Func Offset: 0x24
	// Func End, Address: 0x1962cc, Func Offset: 0x2c
}

