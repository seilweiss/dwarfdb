typedef struct RxPipelineNodeParam;
typedef struct RpVertexNormal;
typedef struct _xEnt;
typedef struct xAnimSingle;
typedef struct RxNodeDefinition;
typedef struct RpMaterialList;
typedef struct RpAtomic;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct RpMorphTarget;
typedef struct _xBox;
typedef struct rxHeapBlockHeader;
typedef struct RpMaterial;
typedef struct RxPipelineNode;
typedef struct _iCollis;
typedef struct RpSector;
typedef struct rxHeapFreeBlock;
typedef struct xAnimTable;
typedef struct RpGeometry;
typedef struct p2LinkAsset;
typedef struct _xEnv;
typedef struct RwResEntry;
typedef struct xAnimEffect;
typedef struct RxClusterDefinition;
typedef struct _xEntShadow;
typedef struct RwObjectHasFrame;
typedef enum RxClusterValidityReq;
typedef struct RwV3d;
typedef struct RxPipelineRequiresCluster;
typedef struct xAnimTransition;
typedef struct RwLLLink;
typedef struct _xSphere;
typedef struct RxPipeline;
typedef struct RwRGBAReal;
typedef struct _xCollis;
typedef struct _xVec3;
typedef struct RpClump;
typedef struct _xMat3x3;
typedef struct iEnv;
typedef struct xAnimState;
typedef struct RpPolygon;
typedef struct iShadowCache;
typedef struct RpLight;
typedef struct RpWorld;
typedef struct RxPipelineCluster;
typedef struct xModelInstance;
typedef enum RxClusterValid;
typedef struct RpTriangle;
typedef struct p2EntAsset;
typedef struct _xMat4x3;
typedef enum RwTextureFilterMode;
typedef struct xModelPool;
typedef struct p2BaseAsset;
typedef struct _xIsect;
typedef struct RwObject;
typedef struct RwRaster;
typedef struct RwFrame;
typedef struct xAnimPlay;
typedef struct _xBound;
typedef struct _xScene;
typedef struct RxPacket;
typedef struct _xEntFrame;
typedef struct RwRGBA;
typedef struct RpCollSector;
typedef struct xBase;
typedef struct RwLinkList;
typedef struct rxReq;
typedef struct RpMeshHeader;
typedef struct RwTexDictionary;
typedef struct _xQuat;
typedef struct RwTexture;
typedef struct RwMatrixTag;
typedef struct xMemPool;
typedef struct xAnimActiveEffect;
typedef struct RxPipelineNodeTopSortData;
typedef struct RxOutputSpec;
typedef struct _xEntCollis;
typedef enum RxClusterForcePresent;
typedef struct RwTexCoords;
typedef struct RwBBox;
typedef struct RxClusterRef;
typedef struct RpWorldSector;
typedef enum RxNodeDefEditable;
typedef struct RpInterpolator;
typedef struct xAnimFile;
typedef struct _xRot;
typedef struct RxIoSpec;
typedef struct xAnimTransitionList;
typedef struct RxNodeMethods;
typedef struct RxHeap;
typedef struct RxCluster;
typedef struct RwSurfaceProperties;
typedef enum RpWorldRenderOrder;
typedef struct xSurface;
typedef enum rxEmbeddedPacketState;
typedef struct xQCData;
typedef struct xFFX;
typedef struct RwSphere;
typedef struct _xBBox;
typedef enum RwTextureAddressMode;
typedef enum _xCollsIdx;
typedef struct _xCylinder;

typedef uint32(*type_0)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_1)(RxNodeDefinition*);
typedef RpAtomic*(*type_3)(RpAtomic*);
typedef int32(*type_4)(RxPipelineNode*);
typedef int32(*type_5)(xBase*, xBase*, uint32, float32*, xBase*);
typedef void(*type_6)(RxPipelineNode*);
typedef xBase*(*type_7)(uint32);
typedef int8*(*type_8)(xBase*);
typedef int8*(*type_9)(uint32);
typedef int32(*type_10)(RxPipelineNode*, RxPipeline*);
typedef RwObjectHasFrame*(*type_11)(RwObjectHasFrame*);
typedef uint32(*type_12)(xAnimTransition*, xAnimSingle*, void*);
typedef RpWorldSector*(*type_15)(RpWorldSector*);
typedef uint32(*type_18)(RxPipelineNode*, uint32, uint32, void*);
typedef int32(*type_21)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int32(*type_23)(RxNodeDefinition*);
typedef void(*type_25)(_xEnt*, _xScene*, float32, _xEntFrame*);
typedef void(*type_27)(_xEnt*, _xScene*, float32);
typedef void(*type_28)(RwResEntry*);
typedef void(*type_29)(_xEnt*);
typedef void(*type_30)(_xEnt*);
typedef void(*type_31)(xMemPool*, void*);
typedef void(*type_32)(_xEnt*, _xScene*, float32, _xEntCollis*);
typedef void(*type_34)(_xEnt*, _xVec3*);
typedef uint32(*type_35)(_xEnt*, _xEnt*, _xScene*, float32, _xCollis*);
typedef void(*type_41)(_xEnt*, _xVec3*);
typedef RpClump*(*type_45)(RpClump*, void*);

typedef uint8 type_2[3];
typedef uint16 type_13[3];
typedef RxCluster type_14[1];
typedef _xVec3 type_16[4];
typedef uint16 type_17[3];
typedef RpLight* type_19[2];
typedef uint32 type_20[4];
typedef RwFrame* type_22[2];
typedef uint8 type_24[3];
typedef float32 type_26[2];
typedef RwTexCoords* type_33[8];
typedef RwTexCoords* type_36[8];
typedef int8 type_37[32];
typedef float32 type_38[4];
typedef int8 type_39[32];
typedef float32 type_40[4];
typedef uint8 type_42[2];
typedef float32 type_43[4];
typedef _xCollis type_44[18];
typedef uint8 type_46[8];
typedef _xVec3 type_47[2];
typedef uint8 type_48[8];
typedef _xQuat type_49[2];
typedef uint8 type_50[8];
typedef uint8 type_51[8];

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
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

struct RxNodeDefinition
{
	int8* name;
	RxNodeMethods nodeMethods;
	RxIoSpec io;
	uint32 pipelineNodePrivateDataSize;
	RxNodeDefEditable editable;
	int32 InputPipesCnt;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
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

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct _xBox
{
	_xVec3 upper;
	_xVec3 lower;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
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

struct _iCollis
{
	int32 unknown;
};

struct RpSector
{
	int32 type;
};

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
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

struct p2LinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	float32 param[4];
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
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

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
};

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct _xEntShadow
{
	_xVec3 pos;
	_xVec3 vec;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
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

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct _xSphere
{
	_xVec3 center;
	float32 r;
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

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
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

struct _xVec3
{
	float32 x;
	float32 y;
	float32 z;
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

struct _xMat3x3
{
	_xVec3 right;
	int32 flags;
	_xVec3 up;
	uint32 pad1;
	_xVec3 at;
	uint32 pad2;
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

struct RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
};

struct iShadowCache
{
	_xVec3 pos;
	_xVec3 right;
	_xVec3 corner[4];
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

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
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

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
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

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
};

struct p2BaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
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

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
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

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
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

struct RwLinkList
{
	RwLLLink link;
};

struct rxReq
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

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct _xQuat
{
	_xVec3 v;
	float32 s;
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

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct RwTexCoords
{
	float32 u;
	float32 v;
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

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
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

struct _xRot
{
	_xVec3 axis;
	float32 angle;
};

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
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

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct xSurface
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

struct xQCData
{
	uint32 xmask;
	uint32 ymask;
	uint32 zmask;
};

struct xFFX
{
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
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

enum _xCollsIdx
{
	k_XCOLLS_IDX_FLOOR,
	k_XCOLLS_IDX_CEIL,
	k_XCOLLS_IDX_FRONT,
	k_XCOLLS_IDX_LEFT,
	k_XCOLLS_IDX_REAR,
	k_XCOLLS_IDX_RIGHT,
	k_XCOLLS_IDX_COUNT
};

struct _xCylinder
{
	_xVec3 center;
	float32 r;
	float32 h;
};

int8* g_xCollis_FMT;
_xVec3 g_O3;

uint32 xSphereHitsOBB(_xSphere* a, _xBox* b, _xMat4x3* m, _xCollis* coll);
uint32 xSphereHitsBox(_xSphere* a, _xBox* b, _xCollis* coll);
uint32 xSphereHitsSphere(_xSphere* a, _xSphere* b, _xCollis* coll);
void xCollideInit(_xScene* sc);
_xCollsIdx xCollideGetCollsIdx(_xVec3* tohit, _xMat3x3* mat);

// xSphereHitsOBB__FPC8_xSpherePC5_xBoxPC8_xMat4x3P8_xCollis
// Start address: 0x12f3d0
uint32 xSphereHitsOBB(_xSphere* a, _xBox* b, _xMat4x3* m, _xCollis* coll)
{
	_xMat3x3 mnormal;
	_xSphere mxa;
	// Line 175, Address: 0x12f3d0, Func Offset: 0
	// Line 189, Address: 0x12f3ec, Func Offset: 0x1c
	// Line 194, Address: 0x12f420, Func Offset: 0x50
	// Line 196, Address: 0x12f42c, Func Offset: 0x5c
	// Line 197, Address: 0x12f46c, Func Offset: 0x9c
	// Line 199, Address: 0x12f470, Func Offset: 0xa0
	// Line 197, Address: 0x12f47c, Func Offset: 0xac
	// Line 199, Address: 0x12f488, Func Offset: 0xb8
	// Line 201, Address: 0x12f490, Func Offset: 0xc0
	// Line 202, Address: 0x12f4a0, Func Offset: 0xd0
	// Line 205, Address: 0x12f4a8, Func Offset: 0xd8
	// Line 206, Address: 0x12f4b0, Func Offset: 0xe0
	// Line 208, Address: 0x12f4bc, Func Offset: 0xec
	// Line 209, Address: 0x12f4cc, Func Offset: 0xfc
	// Line 211, Address: 0x12f4d8, Func Offset: 0x108
	// Line 212, Address: 0x12f4e8, Func Offset: 0x118
	// Line 214, Address: 0x12f4f4, Func Offset: 0x124
	// Line 215, Address: 0x12f504, Func Offset: 0x134
	// Line 217, Address: 0x12f510, Func Offset: 0x140
	// Line 219, Address: 0x12f514, Func Offset: 0x144
	// Line 217, Address: 0x12f518, Func Offset: 0x148
	// Line 220, Address: 0x12f520, Func Offset: 0x150
	// Func End, Address: 0x12f540, Func Offset: 0x170
}

// xSphereHitsBox__FPC8_xSpherePC5_xBoxP8_xCollis
// Start address: 0x12f540
uint32 xSphereHitsBox(_xSphere* a, _xBox* b, _xCollis* coll)
{
	float32 scale;
	_xIsect isx;
	// Line 132, Address: 0x12f540, Func Offset: 0
	// Line 138, Address: 0x12f554, Func Offset: 0x14
	// Line 140, Address: 0x12f564, Func Offset: 0x24
	// Line 141, Address: 0x12f584, Func Offset: 0x44
	// Line 142, Address: 0x12f58c, Func Offset: 0x4c
	// Line 141, Address: 0x12f590, Func Offset: 0x50
	// Line 142, Address: 0x12f594, Func Offset: 0x54
	// Line 145, Address: 0x12f59c, Func Offset: 0x5c
	// Line 146, Address: 0x12f5b0, Func Offset: 0x70
	// Line 150, Address: 0x12f5bc, Func Offset: 0x7c
	// Line 152, Address: 0x12f5c4, Func Offset: 0x84
	// Line 153, Address: 0x12f5d4, Func Offset: 0x94
	// Line 155, Address: 0x12f5ec, Func Offset: 0xac
	// Line 156, Address: 0x12f5fc, Func Offset: 0xbc
	// Line 157, Address: 0x12f618, Func Offset: 0xd8
	// Line 158, Address: 0x12f630, Func Offset: 0xf0
	// Line 160, Address: 0x12f638, Func Offset: 0xf8
	// Line 161, Address: 0x12f63c, Func Offset: 0xfc
	// Line 160, Address: 0x12f640, Func Offset: 0x100
	// Line 161, Address: 0x12f644, Func Offset: 0x104
	// Line 164, Address: 0x12f664, Func Offset: 0x124
	// Line 165, Address: 0x12f674, Func Offset: 0x134
	// Line 167, Address: 0x12f67c, Func Offset: 0x13c
	// Line 168, Address: 0x12f68c, Func Offset: 0x14c
	// Line 171, Address: 0x12f6bc, Func Offset: 0x17c
	// Line 172, Address: 0x12f6c0, Func Offset: 0x180
	// Line 171, Address: 0x12f6c4, Func Offset: 0x184
	// Line 173, Address: 0x12f6cc, Func Offset: 0x18c
	// Func End, Address: 0x12f6dc, Func Offset: 0x19c
}

// xSphereHitsSphere__FPC8_xSpherePC8_xSphereP8_xCollis
// Start address: 0x12f6e0
uint32 xSphereHitsSphere(_xSphere* a, _xSphere* b, _xCollis* coll)
{
	float32 scale;
	float32 scale;
	_xIsect isx;
	// Line 85, Address: 0x12f6e0, Func Offset: 0
	// Line 91, Address: 0x12f6f8, Func Offset: 0x18
	// Line 92, Address: 0x12f708, Func Offset: 0x28
	// Line 93, Address: 0x12f728, Func Offset: 0x48
	// Line 94, Address: 0x12f730, Func Offset: 0x50
	// Line 93, Address: 0x12f734, Func Offset: 0x54
	// Line 94, Address: 0x12f738, Func Offset: 0x58
	// Line 97, Address: 0x12f740, Func Offset: 0x60
	// Line 98, Address: 0x12f754, Func Offset: 0x74
	// Line 102, Address: 0x12f760, Func Offset: 0x80
	// Line 104, Address: 0x12f770, Func Offset: 0x90
	// Line 105, Address: 0x12f780, Func Offset: 0xa0
	// Line 106, Address: 0x12f79c, Func Offset: 0xbc
	// Line 107, Address: 0x12f7b4, Func Offset: 0xd4
	// Line 108, Address: 0x12f7bc, Func Offset: 0xdc
	// Line 109, Address: 0x12f7c0, Func Offset: 0xe0
	// Line 108, Address: 0x12f7c4, Func Offset: 0xe4
	// Line 109, Address: 0x12f7cc, Func Offset: 0xec
	// Line 112, Address: 0x12f7ec, Func Offset: 0x10c
	// Line 113, Address: 0x12f7fc, Func Offset: 0x11c
	// Line 114, Address: 0x12f818, Func Offset: 0x138
	// Line 115, Address: 0x12f830, Func Offset: 0x150
	// Line 117, Address: 0x12f838, Func Offset: 0x158
	// Line 118, Address: 0x12f83c, Func Offset: 0x15c
	// Line 117, Address: 0x12f840, Func Offset: 0x160
	// Line 118, Address: 0x12f848, Func Offset: 0x168
	// Line 121, Address: 0x12f868, Func Offset: 0x188
	// Line 122, Address: 0x12f878, Func Offset: 0x198
	// Line 124, Address: 0x12f880, Func Offset: 0x1a0
	// Line 125, Address: 0x12f890, Func Offset: 0x1b0
	// Line 128, Address: 0x12f8c0, Func Offset: 0x1e0
	// Line 129, Address: 0x12f8c4, Func Offset: 0x1e4
	// Line 128, Address: 0x12f8c8, Func Offset: 0x1e8
	// Line 130, Address: 0x12f8d0, Func Offset: 0x1f0
	// Func End, Address: 0x12f8e4, Func Offset: 0x204
}

// xCollideInit__FP7_xScene
// Start address: 0x12f8f0
void xCollideInit(_xScene* sc)
{
	// Line 76, Address: 0x12f8f0, Func Offset: 0
	// Func End, Address: 0x12f8f8, Func Offset: 0x8
}

// xCollideGetCollsIdx__FPC6_xVec3PC8_xMat3x3
// Start address: 0x12f900
_xCollsIdx xCollideGetCollsIdx(_xVec3* tohit, _xMat3x3* mat)
{
	float32 local_z;
	float32 local_x;
	// Line 33, Address: 0x12f900, Func Offset: 0
	// Line 35, Address: 0x12f928, Func Offset: 0x28
	// Line 41, Address: 0x12f94c, Func Offset: 0x4c
	// Line 42, Address: 0x12f954, Func Offset: 0x54
	// Line 44, Address: 0x12f95c, Func Offset: 0x5c
	// Line 41, Address: 0x12f960, Func Offset: 0x60
	// Line 44, Address: 0x12f968, Func Offset: 0x68
	// Line 42, Address: 0x12f96c, Func Offset: 0x6c
	// Line 44, Address: 0x12f970, Func Offset: 0x70
	// Line 45, Address: 0x12f978, Func Offset: 0x78
	// Line 47, Address: 0x12f988, Func Offset: 0x88
	// Line 53, Address: 0x12f9a4, Func Offset: 0xa4
	// Line 59, Address: 0x12f9c0, Func Offset: 0xc0
	// Line 61, Address: 0x12f9d0, Func Offset: 0xd0
	// Line 67, Address: 0x12f9f0, Func Offset: 0xf0
	// Line 73, Address: 0x12fa08, Func Offset: 0x108
	// Func End, Address: 0x12fa10, Func Offset: 0x110
}

