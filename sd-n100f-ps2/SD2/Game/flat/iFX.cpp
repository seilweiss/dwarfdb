typedef struct rxHeapSuperBlockDescriptor;
typedef struct xAnimPlay;
typedef struct _xCollis;
typedef struct RxPipelineNode;
typedef struct RwLLLink;
typedef struct RpWorldSector;
typedef struct p2EntAsset;
typedef struct RxPipelineNodeParam;
typedef struct xMemPool;
typedef struct _xVec3;
typedef struct RpGeometry;
typedef struct _xEnt;
typedef struct RxPipelineNodeTopSortData;
typedef struct xAnimFile;
typedef struct _xBound;
typedef struct _xScene;
typedef struct RwMatrixTag;
typedef struct xAnimSingle;
typedef struct _xEntFrame;
typedef struct xAnimEffect;
typedef struct RwRaster;
typedef struct RxNodeDefinition;
typedef struct RwRGBAReal;
typedef struct _xRot;
typedef struct RpWorld;
typedef struct xAnimTransitionList;
typedef struct RxPipelineCluster;
typedef struct xAnimTable;
typedef struct RpVertexNormal;
typedef struct rxHeapBlockHeader;
typedef struct RpAtomic;
typedef struct RpMaterialList;
typedef struct RpMorphTarget;
typedef struct xModelPool;
typedef struct RwV3d;
typedef struct rxHeapFreeBlock;
typedef struct RwObject;
typedef struct RwTexDictionary;
typedef struct RpSector;
typedef struct xAnimActiveEffect;
typedef struct RpMaterial;
typedef struct _xEntCollis;
typedef struct xModelInstance;
typedef struct RxClusterDefinition;
typedef enum RxClusterValidityReq;
typedef struct RwResEntry;
typedef struct RxPipelineRequiresCluster;
typedef struct RwLinkList;
typedef struct RxPipeline;
typedef enum RwTextureFilterMode;
typedef struct _xEnv;
typedef struct RpClump;
typedef struct RwRGBA;
typedef struct RpPolygon;
typedef struct RwBBox;
typedef struct RpLight;
typedef enum RxClusterValid;
typedef struct RwTexCoords;
typedef struct p2LinkAsset;
typedef struct RwTexture;
typedef struct xAnimTransition;
typedef struct RpTriangle;
typedef struct _xSphere;
typedef struct xAnimState;
typedef struct RxPacket;
typedef struct _xCylinder;
typedef struct RwFrame;
typedef struct RpCollSector;
typedef struct rxReq;
typedef struct xSurface;
typedef struct _xBox;
typedef struct RpMeshHeader;
typedef struct xQCData;
typedef struct RxOutputSpec;
typedef struct xFFX;
typedef struct RwSurfaceProperties;
typedef enum RxClusterForcePresent;
typedef struct RxClusterRef;
typedef struct _xBBox;
typedef struct RxPS2DMASessionRecord;
typedef enum RxNodeDefEditable;
typedef struct _xEntShadow;
typedef struct xBase;
typedef enum RxPS2ObjectType;
typedef struct RpInterpolator;
typedef struct RxIoSpec;
typedef struct RwSphere;
typedef struct iEnv;
typedef struct RxNodeMethods;
typedef struct _iCollis;
typedef struct RxObjUnion;
typedef struct RxHeap;
typedef struct p2BaseAsset;
typedef struct RxCluster;
typedef struct _xMat4x3;
typedef struct RwObjectHasFrame;
typedef struct iShadowCache;
typedef enum RpWorldRenderOrder;
typedef enum RwTextureAddressMode;
typedef enum rxEmbeddedPacketState;
typedef struct _xQuat;
typedef enum RwFrustumTestResult;
typedef enum RxSkyTransTypeFlags;
typedef enum iFXWarbModes;

typedef int8*(*type_0)(xBase*);
typedef RwObjectHasFrame*(*type_1)(RwObjectHasFrame*);
typedef RpClump*(*type_3)(RpClump*, void*);
typedef int32(*type_4)(RxPipelineNode*, RxPipelineNodeParam*);
typedef RpWorldSector*(*type_5)(RpWorldSector*);
typedef int8*(*type_6)(uint32);
typedef void(*type_7)(_xEnt*, _xScene*, float32, _xEntFrame*);
typedef int32(*type_8)(RxNodeDefinition*);
typedef void(*type_9)(xMemPool*, void*);
typedef void(*type_10)(RxNodeDefinition*);
typedef void(*type_12)(_xEnt*, _xScene*, float32);
typedef int32(*type_14)(RxPipelineNode*);
typedef void(*type_15)(_xEnt*);
typedef RpAtomic*(*type_16)(RpAtomic*);
typedef void(*type_18)(RxPipelineNode*);
typedef void(*type_19)(_xEnt*);
typedef void(*type_20)(_xEnt*, _xScene*, float32, _xEntCollis*);
typedef uint32(*type_21)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_22)(_xEnt*, _xVec3*);
typedef int32(*type_24)(RxPipelineNode*, RxPipeline*);
typedef uint32(*type_26)(_xEnt*, _xEnt*, _xScene*, float32, _xCollis*);
typedef void(*type_30)(RwResEntry*);
typedef uint32(*type_31)(RxPipelineNode*, uint32, uint32, void*);
typedef uint32(*type_35)(xAnimTransition*, xAnimSingle*, void*);
typedef int32(*type_37)(void**, uint32);
typedef void(*type_39)(_xEnt*, _xVec3*);
typedef xBase*(*type_47)(uint32);
typedef int32(*type_54)(xBase*, xBase*, uint32, float32*, xBase*);

typedef uint8 type_2[3];
typedef _xVec3 type_11[2];
typedef _xQuat type_13[2];
typedef float32 type_17[8];
typedef float32 type_23[2];
typedef float32 type_25[2];
typedef RxCluster type_27[1];
typedef uint16 type_28[3];
typedef float32 type_29[2];
typedef uint32 type_32[4];
typedef float32 type_33[2];
typedef uint16 type_34[3];
typedef void* type_36[32];
typedef int8 type_38[32];
typedef int8 type_40[32];
typedef float32 type_41[4];
typedef float32 type_42[4];
typedef _xCollis type_43[18];
typedef uint8 type_44[8];
typedef float32 type_45[2];
typedef uint8 type_46[8];
typedef float32 type_48[2];
typedef uint8 type_49[8];
typedef RwTexCoords* type_50[8];
typedef float32 type_51[8];
typedef uint8 type_52[8];
typedef float32 type_53[2];
typedef float32 type_55[2];
typedef RwTexCoords* type_56[8];
typedef float32 type_57[2];
typedef uint8 type_58[3];
typedef RpLight* type_59[2];
typedef RwFrame* type_60[2];
typedef float32 type_61[4];
typedef float32 type_62[4];
typedef float32 type_63[4];
typedef _xVec3 type_64[4];
typedef uint8 type_65[2];

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
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

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
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

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
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

struct _xVec3
{
	float32 x;
	float32 y;
	float32 z;
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

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
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

struct RxNodeDefinition
{
	int8* name;
	RxNodeMethods nodeMethods;
	RxIoSpec io;
	uint32 pipelineNodePrivateDataSize;
	RxNodeDefEditable editable;
	int32 InputPipesCnt;
};

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

struct _xRot
{
	_xVec3 axis;
	float32 angle;
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

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
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

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
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

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
};

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct RpSector
{
	int32 type;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
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

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct RwLinkList
{
	RwLLLink link;
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

struct _xEnv
{
	iEnv* geom;
	iEnv ienv;
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

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
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

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct RwTexCoords
{
	float32 u;
	float32 v;
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

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
};

struct _xSphere
{
	_xVec3 center;
	float32 r;
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

struct _xCylinder
{
	_xVec3 center;
	float32 r;
	float32 h;
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

struct RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
};

struct rxReq
{
};

struct xSurface
{
};

struct _xBox
{
	_xVec3 upper;
	_xVec3 lower;
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct xQCData
{
	uint32 xmask;
	uint32 ymask;
	uint32 zmask;
};

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct xFFX
{
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct _xBBox
{
	_xVec3 center;
	_xBox box;
};

struct RxPS2DMASessionRecord
{
	RxPS2ObjectType objType;
	RxObjUnion sourceObject;
	RwFrustumTestResult inFrustum;
	uint16 serialNum;
	uint8 vu1CodeIndex;
	uint8 primType;
	RxSkyTransTypeFlags transType;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct _xEntShadow
{
	_xVec3 pos;
	_xVec3 vec;
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

enum RxPS2ObjectType
{
	rxOBJTYPE_WORLDSECTOR,
	rxOBJTYPE_ATOMIC,
	rxOBJTYPE_IM3D,
	rxOBJTYPEFORCEENUMSIZEINT = 0x7fffffff
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

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
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

struct _iCollis
{
	int32 unknown;
};

struct RxObjUnion
{
	union
	{
		RpWorldSector* worldSector;
		RpAtomic* atomic;
		void* agnostic;
	};
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

struct p2BaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
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

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
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

enum RwTextureAddressMode
{
	rwTEXTUREADDRESSNATEXTUREADDRESS,
	rwTEXTUREADDRESSWRAP,
	rwTEXTUREADDRESSMIRROR,
	rwTEXTUREADDRESSCLAMP,
	rwTEXTUREADDRESSBORDER,
	rwTEXTUREADDRESSMODEFORCEENUMSIZEINT = 0x7fffffff
};

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

struct _xQuat
{
	_xVec3 v;
	float32 s;
};

enum RwFrustumTestResult
{
	rwSPHEREOUTSIDE,
	rwSPHEREBOUNDARY,
	rwSPHEREINSIDE,
	rwFRUSTUMTESTRESULTFORCEENUMSIZEINT = 0x7fffffff
};

enum RxSkyTransTypeFlags
{
	rxSKYTRANSTYPENATRANSTYPE,
	rxSKYTRANSTYPEFOG,
	rxSKYTRANSTYPECLIP,
	rxSKYTRANSTYPELIST = 0x4,
	rxSKYTRANSTYPEISO = 0x8,
	rxSKYTRANSTYPELINE = 0x10,
	rxSKYTRANSTYPECULL = 0x20,
	rxSKYTRANSTYPEFLAGSFORCEENUMSIZEINT = 0x7fffffff
};

enum iFXWarbModes
{
	IFX_WARB_NONE,
	IFX_WARB_WATER_WAVE,
	IFX_WARB_WATER_RIPPLE,
	IFX_WARB_DAN1,
	IFX_WARB_DAN2,
	IFX_WARB_TREE,
	IFX_WARB_WEB
};

float32 sinRangePoint5[8];
float32 xFXWarbleParam[8];
_xEnt* warbEnt;
float32 warbc[4];
_xVec3* vbuf;
_xVec3* nbuf;
uint32 warbMode;
float32 warbTime;
uint32 gActiveHeap;
long32 FXanimUVPRS;
int32(*iFXanimUVInstanceCallBack)(void**, uint32);
RxClusterDefinition RxClPS2normal;
RxClusterDefinition RxClPS2rgba;
RxClusterDefinition RxClPS2uv;
RxClusterDefinition RxClPS2xyz;
float32 xFXanimUVScale[2];
float32 xFXanimUVTrans[2];
float32 xFXanimUVRotMat1[2];
float32 xFXanimUVRotMat0[2];
float32 xFXanimUV2PScale[2];
float32 xFXanimUV2PTrans[2];
float32 xFXanimUV2PRotMat1[2];
float32 xFXanimUV2PRotMat0[2];
<unknown fundamental type (0xa510)>* sweLocalPacket;
RwTexture* xFXanimUV2PTexture;

void iFXwarb(_xVec3* orig_verts, RpGeometry* geom);
void iFXWarbUpdate(float32 dt);
void iFXWarbSetParams(uint32 mode, float32* val);
void iFXWarbInit(void* vp_ent, iFXWarbModes warb_mode);
RxPipeline* iFXanimUVCreatePipe();
RxPipeline* iFXanimUVManagerNodeSetup(RxPipeline* lockedPipe);
int32 iFXanimUVInstanceCallBack(void** clusterData);

// iFXwarb__FP6_xVec3P6_xVec3P10RpGeometry
// Start address: 0x24c6d0
void iFXwarb(_xVec3* orig_verts, RpGeometry* geom)
{
	float32 b;
	float32 a;
	float32 x;
	float32 percent;
	float32 mul;
	float32 b;
	float32 a;
	float32 x;
	float32 mul;
	float32 ooy;
	float32 b;
	float32 a;
	float32 x;
	float32 b;
	float32 a;
	float32 x;
	float32 b;
	float32 a;
	float32 y;
	float32 x;
	float32 b;
	float32 a;
	float32 y;
	float32 x;
	_xVec3* nv;
	_xVec3* ov;
	float32 t;
	int32 i;
	float32 maxy;
	float32 miny;
	// Line 566, Address: 0x24c6d0, Func Offset: 0
	// Line 568, Address: 0x24c718, Func Offset: 0x48
	// Line 572, Address: 0x24c720, Func Offset: 0x50
	// Line 576, Address: 0x24c734, Func Offset: 0x64
	// Line 580, Address: 0x24c744, Func Offset: 0x74
	// Line 586, Address: 0x24c748, Func Offset: 0x78
	// Line 578, Address: 0x24c74c, Func Offset: 0x7c
	// Line 580, Address: 0x24c750, Func Offset: 0x80
	// Line 586, Address: 0x24c754, Func Offset: 0x84
	// Line 589, Address: 0x24c79c, Func Offset: 0xcc
	// Line 591, Address: 0x24c7a4, Func Offset: 0xd4
	// Line 592, Address: 0x24c7a8, Func Offset: 0xd8
	// Line 591, Address: 0x24c7ac, Func Offset: 0xdc
	// Line 592, Address: 0x24c7b0, Func Offset: 0xe0
	// Line 591, Address: 0x24c7b4, Func Offset: 0xe4
	// Line 592, Address: 0x24c7b8, Func Offset: 0xe8
	// Line 591, Address: 0x24c7bc, Func Offset: 0xec
	// Line 592, Address: 0x24c7c0, Func Offset: 0xf0
	// Line 595, Address: 0x24c7c4, Func Offset: 0xf4
	// Line 618, Address: 0x24c7ec, Func Offset: 0x11c
	// Line 620, Address: 0x24c810, Func Offset: 0x140
	// Line 618, Address: 0x24c818, Func Offset: 0x148
	// Line 620, Address: 0x24c824, Func Offset: 0x154
	// Line 621, Address: 0x24c838, Func Offset: 0x168
	// Line 626, Address: 0x24c860, Func Offset: 0x190
	// Line 627, Address: 0x24c868, Func Offset: 0x198
	// Line 629, Address: 0x24c888, Func Offset: 0x1b8
	// Line 630, Address: 0x24c890, Func Offset: 0x1c0
	// Line 629, Address: 0x24c894, Func Offset: 0x1c4
	// Line 630, Address: 0x24c898, Func Offset: 0x1c8
	// Line 633, Address: 0x24c89c, Func Offset: 0x1cc
	// Line 652, Address: 0x24c8c4, Func Offset: 0x1f4
	// Line 653, Address: 0x24c8d4, Func Offset: 0x204
	// Line 652, Address: 0x24c8d8, Func Offset: 0x208
	// Line 653, Address: 0x24c8dc, Func Offset: 0x20c
	// Line 652, Address: 0x24c8e0, Func Offset: 0x210
	// Line 653, Address: 0x24c8e8, Func Offset: 0x218
	// Line 654, Address: 0x24c900, Func Offset: 0x230
	// Line 661, Address: 0x24c930, Func Offset: 0x260
	// Line 663, Address: 0x24c938, Func Offset: 0x268
	// Line 667, Address: 0x24c948, Func Offset: 0x278
	// Line 679, Address: 0x24c970, Func Offset: 0x2a0
	// Line 690, Address: 0x24c980, Func Offset: 0x2b0
	// Line 679, Address: 0x24c984, Func Offset: 0x2b4
	// Line 690, Address: 0x24c988, Func Offset: 0x2b8
	// Line 679, Address: 0x24c98c, Func Offset: 0x2bc
	// Line 690, Address: 0x24c994, Func Offset: 0x2c4
	// Line 691, Address: 0x24c9a8, Func Offset: 0x2d8
	// Line 693, Address: 0x24c9d8, Func Offset: 0x308
	// Line 695, Address: 0x24c9e0, Func Offset: 0x310
	// Line 699, Address: 0x24c9f0, Func Offset: 0x320
	// Line 711, Address: 0x24ca18, Func Offset: 0x348
	// Line 712, Address: 0x24ca28, Func Offset: 0x358
	// Line 711, Address: 0x24ca2c, Func Offset: 0x35c
	// Line 712, Address: 0x24ca30, Func Offset: 0x360
	// Line 711, Address: 0x24ca34, Func Offset: 0x364
	// Line 712, Address: 0x24ca3c, Func Offset: 0x36c
	// Line 713, Address: 0x24ca50, Func Offset: 0x380
	// Line 718, Address: 0x24ca58, Func Offset: 0x388
	// Line 720, Address: 0x24ca5c, Func Offset: 0x38c
	// Line 722, Address: 0x24ca6c, Func Offset: 0x39c
	// Line 723, Address: 0x24ca80, Func Offset: 0x3b0
	// Line 724, Address: 0x24ca90, Func Offset: 0x3c0
	// Line 726, Address: 0x24caa4, Func Offset: 0x3d4
	// Line 727, Address: 0x24caa8, Func Offset: 0x3d8
	// Line 730, Address: 0x24caac, Func Offset: 0x3dc
	// Line 726, Address: 0x24cab0, Func Offset: 0x3e0
	// Line 727, Address: 0x24cab4, Func Offset: 0x3e4
	// Line 726, Address: 0x24cab8, Func Offset: 0x3e8
	// Line 727, Address: 0x24cad8, Func Offset: 0x408
	// Line 730, Address: 0x24caf0, Func Offset: 0x420
	// Line 732, Address: 0x24caf8, Func Offset: 0x428
	// Line 734, Address: 0x24cb0c, Func Offset: 0x43c
	// Line 736, Address: 0x24cb10, Func Offset: 0x440
	// Line 740, Address: 0x24cb7c, Func Offset: 0x4ac
	// Line 752, Address: 0x24cba4, Func Offset: 0x4d4
	// Line 753, Address: 0x24cbc4, Func Offset: 0x4f4
	// Line 755, Address: 0x24cbcc, Func Offset: 0x4fc
	// Line 757, Address: 0x24cbd0, Func Offset: 0x500
	// Line 759, Address: 0x24cbd4, Func Offset: 0x504
	// Line 757, Address: 0x24cbd8, Func Offset: 0x508
	// Line 758, Address: 0x24cbe0, Func Offset: 0x510
	// Line 759, Address: 0x24cbe8, Func Offset: 0x518
	// Line 758, Address: 0x24cbec, Func Offset: 0x51c
	// Line 759, Address: 0x24cbf0, Func Offset: 0x520
	// Line 761, Address: 0x24cc08, Func Offset: 0x538
	// Line 766, Address: 0x24cc10, Func Offset: 0x540
	// Line 768, Address: 0x24cc14, Func Offset: 0x544
	// Line 770, Address: 0x24cc24, Func Offset: 0x554
	// Line 771, Address: 0x24cc38, Func Offset: 0x568
	// Line 772, Address: 0x24cc48, Func Offset: 0x578
	// Line 774, Address: 0x24cc5c, Func Offset: 0x58c
	// Line 780, Address: 0x24cc80, Func Offset: 0x5b0
	// Line 775, Address: 0x24cc88, Func Offset: 0x5b8
	// Line 776, Address: 0x24cc94, Func Offset: 0x5c4
	// Line 780, Address: 0x24cca0, Func Offset: 0x5d0
	// Line 782, Address: 0x24cca8, Func Offset: 0x5d8
	// Line 786, Address: 0x24cccc, Func Offset: 0x5fc
	// Line 788, Address: 0x24cce0, Func Offset: 0x610
	// Line 792, Address: 0x24ccec, Func Offset: 0x61c
	// Line 804, Address: 0x24cd14, Func Offset: 0x644
	// Line 805, Address: 0x24cd24, Func Offset: 0x654
	// Line 807, Address: 0x24cd2c, Func Offset: 0x65c
	// Line 809, Address: 0x24cd30, Func Offset: 0x660
	// Line 811, Address: 0x24cd34, Func Offset: 0x664
	// Line 809, Address: 0x24cd38, Func Offset: 0x668
	// Line 810, Address: 0x24cd40, Func Offset: 0x670
	// Line 811, Address: 0x24cd48, Func Offset: 0x678
	// Line 810, Address: 0x24cd4c, Func Offset: 0x67c
	// Line 811, Address: 0x24cd50, Func Offset: 0x680
	// Line 816, Address: 0x24cd68, Func Offset: 0x698
	// Line 818, Address: 0x24cd74, Func Offset: 0x6a4
	// Func End, Address: 0x24cdbc, Func Offset: 0x6ec
}

// iFXWarbUpdate__Ff
// Start address: 0x24cdc0
void iFXWarbUpdate(float32 dt)
{
	// Line 451, Address: 0x24cdc0, Func Offset: 0
	// Line 452, Address: 0x24cdcc, Func Offset: 0xc
	// Line 454, Address: 0x24cdd0, Func Offset: 0x10
	// Line 452, Address: 0x24cdd4, Func Offset: 0x14
	// Line 454, Address: 0x24cddc, Func Offset: 0x1c
	// Line 457, Address: 0x24cde8, Func Offset: 0x28
	// Line 458, Address: 0x24cdf0, Func Offset: 0x30
	// Line 459, Address: 0x24ce0c, Func Offset: 0x4c
	// Line 461, Address: 0x24ce14, Func Offset: 0x54
	// Func End, Address: 0x24ce24, Func Offset: 0x64
}

// iFXWarbSetParams__FUiPf
// Start address: 0x24ce30
void iFXWarbSetParams(uint32 mode, float32* val)
{
	// Line 436, Address: 0x24ce30, Func Offset: 0
	// Line 439, Address: 0x24ce38, Func Offset: 0x8
	// Line 440, Address: 0x24ce40, Func Offset: 0x10
	// Line 441, Address: 0x24ce44, Func Offset: 0x14
	// Line 442, Address: 0x24ce48, Func Offset: 0x18
	// Line 445, Address: 0x24ce4c, Func Offset: 0x1c
	// Line 446, Address: 0x24ce54, Func Offset: 0x24
	// Line 447, Address: 0x24ce64, Func Offset: 0x34
	// Func End, Address: 0x24ce70, Func Offset: 0x40
}

// iFXWarbInit__FPv12iFXWarbModes
// Start address: 0x24ce70
void iFXWarbInit(void* vp_ent, iFXWarbModes warb_mode)
{
	float32 coeffs[4];
	_xVec3* verts;
	RpGeometry* geom;
	_xEnt* ent;
	// Line 378, Address: 0x24ce70, Func Offset: 0
	// Line 379, Address: 0x24ce88, Func Offset: 0x18
	// Line 381, Address: 0x24ce8c, Func Offset: 0x1c
	// Line 384, Address: 0x24ce94, Func Offset: 0x24
	// Line 389, Address: 0x24ce98, Func Offset: 0x28
	// Line 384, Address: 0x24ce9c, Func Offset: 0x2c
	// Line 386, Address: 0x24cea4, Func Offset: 0x34
	// Line 389, Address: 0x24cea8, Func Offset: 0x38
	// Line 386, Address: 0x24ceac, Func Offset: 0x3c
	// Line 389, Address: 0x24ceb0, Func Offset: 0x40
	// Line 390, Address: 0x24cec4, Func Offset: 0x54
	// Line 389, Address: 0x24cec8, Func Offset: 0x58
	// Line 390, Address: 0x24ced0, Func Offset: 0x60
	// Line 397, Address: 0x24cedc, Func Offset: 0x6c
	// Line 399, Address: 0x24cef4, Func Offset: 0x84
	// Line 400, Address: 0x24cefc, Func Offset: 0x8c
	// Line 405, Address: 0x24cf04, Func Offset: 0x94
	// Line 406, Address: 0x24cf18, Func Offset: 0xa8
	// Line 408, Address: 0x24cf48, Func Offset: 0xd8
	// Line 409, Address: 0x24cf4c, Func Offset: 0xdc
	// Line 410, Address: 0x24cf50, Func Offset: 0xe0
	// Func End, Address: 0x24cf6c, Func Offset: 0xfc
}

// iFXanimUVCreatePipe__Fv
// Start address: 0x24cf70
RxPipeline* iFXanimUVCreatePipe()
{
	RxPipeline* lockedPipe;
	RxPipeline* newPipe;
	// Line 345, Address: 0x24cf70, Func Offset: 0
	// Line 349, Address: 0x24cf7c, Func Offset: 0xc
	// Line 350, Address: 0x24cf84, Func Offset: 0x14
	// Line 352, Address: 0x24cf8c, Func Offset: 0x1c
	// Line 354, Address: 0x24cf98, Func Offset: 0x28
	// Line 355, Address: 0x24cfa0, Func Offset: 0x30
	// Line 358, Address: 0x24cfac, Func Offset: 0x3c
	// Line 359, Address: 0x24cfb0, Func Offset: 0x40
	// Func End, Address: 0x24cfc0, Func Offset: 0x50
}

// iFXanimUVManagerNodeSetup__FP10RxPipeline
// Start address: 0x24cfc0
RxPipeline* iFXanimUVManagerNodeSetup(RxPipeline* lockedPipe)
{
	RxPipelineNode* managerNode;
	RxNodeDefinition* manager;
	void* VUCodeArray[32];
	// Line 249, Address: 0x24cfc0, Func Offset: 0
	// Line 260, Address: 0x24cfd8, Func Offset: 0x18
	// Line 262, Address: 0x24cfe4, Func Offset: 0x24
	// Line 265, Address: 0x24cfec, Func Offset: 0x2c
	// Line 269, Address: 0x24cff4, Func Offset: 0x34
	// Line 274, Address: 0x24d004, Func Offset: 0x44
	// Line 280, Address: 0x24d01c, Func Offset: 0x5c
	// Line 283, Address: 0x24d030, Func Offset: 0x70
	// Line 286, Address: 0x24d044, Func Offset: 0x84
	// Line 289, Address: 0x24d058, Func Offset: 0x98
	// Line 293, Address: 0x24d06c, Func Offset: 0xac
	// Line 299, Address: 0x24d080, Func Offset: 0xc0
	// Line 302, Address: 0x24d088, Func Offset: 0xc8
	// Line 308, Address: 0x24d0a0, Func Offset: 0xe0
	// Line 312, Address: 0x24d0ac, Func Offset: 0xec
	// Line 316, Address: 0x24d0bc, Func Offset: 0xfc
	// Line 317, Address: 0x24d0d0, Func Offset: 0x110
	// Line 318, Address: 0x24d0d4, Func Offset: 0x114
	// Line 319, Address: 0x24d0d8, Func Offset: 0x118
	// Line 320, Address: 0x24d0dc, Func Offset: 0x11c
	// Line 321, Address: 0x24d0e0, Func Offset: 0x120
	// Line 322, Address: 0x24d0e4, Func Offset: 0x124
	// Line 337, Address: 0x24d0e8, Func Offset: 0x128
	// Line 339, Address: 0x24d0f4, Func Offset: 0x134
	// Line 340, Address: 0x24d0f8, Func Offset: 0x138
	// Func End, Address: 0x24d110, Func Offset: 0x150
}

// iFXanimUVInstanceCallBack__FPPvUi
// Start address: 0x24d110
int32 iFXanimUVInstanceCallBack(void** clusterData)
{
	<unknown fundamental type (0xa510)> ___ltmp;
	<unknown fundamental type (0xa510)> ___ltmp;
	<unknown fundamental type (0xa510)> ___ltmp;
	<unknown fundamental type (0xa510)> ___ltmp;
	<unknown fundamental type (0xa510)> ___ltmp;
	<unknown fundamental type (0xa510)> ___ltmp;
	<unknown fundamental type (0xa510)> ___ltmp;
	<unknown fundamental type (0xa510)> ___ltmp;
	<unknown fundamental type (0xa510)> ___ltmp;
	<unknown fundamental type (0xa510)> ___ltmp;
	<unknown fundamental type (0xa510)> ___ltmp;
	<unknown fundamental type (0xa510)> ___ltmp;
	<unknown fundamental type (0xa510)> ___ltmp;
	<unknown fundamental type (0xa510)> ltmp;
	uint64 tmp1;
	uint64 tmp;
	uint32 fogSwitch;
	uint32 primSwitch;
	RxPS2DMASessionRecord* dmaSesRec;
	// Line 64, Address: 0x24d110, Func Offset: 0
	// Line 73, Address: 0x24d128, Func Offset: 0x18
	// Line 66, Address: 0x24d12c, Func Offset: 0x1c
	// Line 76, Address: 0x24d130, Func Offset: 0x20
	// Line 79, Address: 0x24d140, Func Offset: 0x30
	// Line 83, Address: 0x24d144, Func Offset: 0x34
	// Line 86, Address: 0x24d150, Func Offset: 0x40
	// Line 90, Address: 0x24d154, Func Offset: 0x44
	// Line 93, Address: 0x24d160, Func Offset: 0x50
	// Line 97, Address: 0x24d16c, Func Offset: 0x5c
	// Line 109, Address: 0x24d17c, Func Offset: 0x6c
	// Line 107, Address: 0x24d18c, Func Offset: 0x7c
	// Line 109, Address: 0x24d190, Func Offset: 0x80
	// Line 107, Address: 0x24d194, Func Offset: 0x84
	// Line 109, Address: 0x24d198, Func Offset: 0x88
	// Line 112, Address: 0x24d19c, Func Offset: 0x8c
	// Line 129, Address: 0x24d1a0, Func Offset: 0x90
	// Line 113, Address: 0x24d1bc, Func Offset: 0xac
	// Line 129, Address: 0x24d1c0, Func Offset: 0xb0
	// Line 113, Address: 0x24d1c4, Func Offset: 0xb4
	// Line 129, Address: 0x24d1c8, Func Offset: 0xb8
	// Line 113, Address: 0x24d1e4, Func Offset: 0xd4
	// Line 129, Address: 0x24d1ec, Func Offset: 0xdc
	// Line 133, Address: 0x24d1f0, Func Offset: 0xe0
	// Line 113, Address: 0x24d1f4, Func Offset: 0xe4
	// Line 134, Address: 0x24d1fc, Func Offset: 0xec
	// Line 135, Address: 0x24d204, Func Offset: 0xf4
	// Line 136, Address: 0x24d208, Func Offset: 0xf8
	// Line 142, Address: 0x24d20c, Func Offset: 0xfc
	// Line 143, Address: 0x24d210, Func Offset: 0x100
	// Line 136, Address: 0x24d214, Func Offset: 0x104
	// Line 142, Address: 0x24d224, Func Offset: 0x114
	// Line 143, Address: 0x24d228, Func Offset: 0x118
	// Line 144, Address: 0x24d22c, Func Offset: 0x11c
	// Line 145, Address: 0x24d230, Func Offset: 0x120
	// Line 148, Address: 0x24d234, Func Offset: 0x124
	// Line 150, Address: 0x24d238, Func Offset: 0x128
	// Line 145, Address: 0x24d23c, Func Offset: 0x12c
	// Line 148, Address: 0x24d24c, Func Offset: 0x13c
	// Line 150, Address: 0x24d250, Func Offset: 0x140
	// Line 151, Address: 0x24d254, Func Offset: 0x144
	// Line 152, Address: 0x24d258, Func Offset: 0x148
	// Line 157, Address: 0x24d25c, Func Offset: 0x14c
	// Line 158, Address: 0x24d260, Func Offset: 0x150
	// Line 152, Address: 0x24d264, Func Offset: 0x154
	// Line 157, Address: 0x24d274, Func Offset: 0x164
	// Line 158, Address: 0x24d278, Func Offset: 0x168
	// Line 159, Address: 0x24d27c, Func Offset: 0x16c
	// Line 160, Address: 0x24d280, Func Offset: 0x170
	// Line 163, Address: 0x24d284, Func Offset: 0x174
	// Line 165, Address: 0x24d288, Func Offset: 0x178
	// Line 160, Address: 0x24d28c, Func Offset: 0x17c
	// Line 163, Address: 0x24d29c, Func Offset: 0x18c
	// Line 165, Address: 0x24d2a0, Func Offset: 0x190
	// Line 166, Address: 0x24d2a4, Func Offset: 0x194
	// Line 167, Address: 0x24d2a8, Func Offset: 0x198
	// Line 171, Address: 0x24d2bc, Func Offset: 0x1ac
	// Line 178, Address: 0x24d2f8, Func Offset: 0x1e8
	// Line 179, Address: 0x24d308, Func Offset: 0x1f8
	// Line 178, Address: 0x24d318, Func Offset: 0x208
	// Line 179, Address: 0x24d31c, Func Offset: 0x20c
	// Line 186, Address: 0x24d320, Func Offset: 0x210
	// Line 182, Address: 0x24d324, Func Offset: 0x214
	// Line 183, Address: 0x24d328, Func Offset: 0x218
	// Line 186, Address: 0x24d32c, Func Offset: 0x21c
	// Line 179, Address: 0x24d330, Func Offset: 0x220
	// Line 180, Address: 0x24d338, Func Offset: 0x228
	// Line 181, Address: 0x24d340, Func Offset: 0x230
	// Line 182, Address: 0x24d34c, Func Offset: 0x23c
	// Line 183, Address: 0x24d350, Func Offset: 0x240
	// Line 184, Address: 0x24d354, Func Offset: 0x244
	// Line 186, Address: 0x24d35c, Func Offset: 0x24c
	// Line 187, Address: 0x24d360, Func Offset: 0x250
	// Line 188, Address: 0x24d374, Func Offset: 0x264
	// Line 189, Address: 0x24d378, Func Offset: 0x268
	// Line 191, Address: 0x24d38c, Func Offset: 0x27c
	// Line 193, Address: 0x24d3a4, Func Offset: 0x294
	// Line 195, Address: 0x24d3b8, Func Offset: 0x2a8
	// Line 197, Address: 0x24d3c0, Func Offset: 0x2b0
	// Line 198, Address: 0x24d3c4, Func Offset: 0x2b4
	// Line 199, Address: 0x24d3c8, Func Offset: 0x2b8
	// Line 200, Address: 0x24d3cc, Func Offset: 0x2bc
	// Line 201, Address: 0x24d3e0, Func Offset: 0x2d0
	// Line 202, Address: 0x24d3f4, Func Offset: 0x2e4
	// Line 203, Address: 0x24d408, Func Offset: 0x2f8
	// Line 208, Address: 0x24d41c, Func Offset: 0x30c
	// Line 207, Address: 0x24d424, Func Offset: 0x314
	// Line 208, Address: 0x24d428, Func Offset: 0x318
	// Line 209, Address: 0x24d42c, Func Offset: 0x31c
	// Line 210, Address: 0x24d430, Func Offset: 0x320
	// Line 213, Address: 0x24d434, Func Offset: 0x324
	// Line 218, Address: 0x24d444, Func Offset: 0x334
	// Line 210, Address: 0x24d448, Func Offset: 0x338
	// Line 219, Address: 0x24d458, Func Offset: 0x348
	// Line 220, Address: 0x24d45c, Func Offset: 0x34c
	// Line 221, Address: 0x24d460, Func Offset: 0x350
	// Line 222, Address: 0x24d470, Func Offset: 0x360
	// Line 220, Address: 0x24d474, Func Offset: 0x364
	// Line 223, Address: 0x24d484, Func Offset: 0x374
	// Line 224, Address: 0x24d488, Func Offset: 0x378
	// Line 225, Address: 0x24d48c, Func Offset: 0x37c
	// Line 226, Address: 0x24d490, Func Offset: 0x380
	// Line 224, Address: 0x24d494, Func Offset: 0x384
	// Line 227, Address: 0x24d4a4, Func Offset: 0x394
	// Line 228, Address: 0x24d4a8, Func Offset: 0x398
	// Line 229, Address: 0x24d4ac, Func Offset: 0x39c
	// Line 230, Address: 0x24d4b4, Func Offset: 0x3a4
	// Line 228, Address: 0x24d4b8, Func Offset: 0x3a8
	// Line 231, Address: 0x24d4c8, Func Offset: 0x3b8
	// Line 232, Address: 0x24d4cc, Func Offset: 0x3bc
	// Line 235, Address: 0x24d4d0, Func Offset: 0x3c0
	// Line 236, Address: 0x24d4d8, Func Offset: 0x3c8
	// Line 232, Address: 0x24d4dc, Func Offset: 0x3cc
	// Line 236, Address: 0x24d4ec, Func Offset: 0x3dc
	// Line 237, Address: 0x24d4f0, Func Offset: 0x3e0
	// Line 240, Address: 0x24d4f4, Func Offset: 0x3e4
	// Line 237, Address: 0x24d4fc, Func Offset: 0x3ec
	// Line 240, Address: 0x24d508, Func Offset: 0x3f8
	// Line 243, Address: 0x24d510, Func Offset: 0x400
	// Line 242, Address: 0x24d524, Func Offset: 0x414
	// Line 243, Address: 0x24d528, Func Offset: 0x418
	// Func End, Address: 0x24d530, Func Offset: 0x420
}

