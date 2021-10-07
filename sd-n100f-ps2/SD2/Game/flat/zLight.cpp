typedef struct _xEnt;
typedef struct _xEnv;
typedef struct RxPipeline;
typedef struct _xVec3;
typedef struct xAnimSingle;
typedef struct RwLLLink;
typedef struct _xEntShadow;
typedef struct RxClusterDefinition;
typedef struct RxPipelineNode;
typedef struct zVolumeAsset;
typedef struct iLight;
typedef enum RxClusterValidityReq;
typedef struct RxPipelineRequiresCluster;
typedef struct _zLight;
typedef struct RpLight;
typedef struct RpWorldSector;
typedef struct iEnv;
typedef struct RwRaster;
typedef struct _tagPartition;
typedef struct xAnimTable;
typedef struct zLightAsset;
typedef struct RpWorld;
typedef struct xAnimEffect;
typedef enum RwTextureFilterMode;
typedef struct xBase;
typedef struct xAnimTransition;
typedef struct xQCData;
typedef struct RxPipelineCluster;
typedef struct _xMat4x3;
typedef struct RwObject;
typedef struct rxHeapBlockHeader;
typedef struct RpGeometry;
typedef enum RxClusterValid;
typedef struct RpVertexNormal;
typedef struct xAnimState;
typedef struct RpAtomic;
typedef struct p2LinkAsset;
typedef struct RwV3d;
typedef struct rxHeapFreeBlock;
typedef struct RwTexDictionary;
typedef struct RpMorphTarget;
typedef struct RwRGBA;
typedef struct _xBBox;
typedef struct RwFrame;
typedef struct _tagPartSpace;
typedef struct _xQuat;
typedef struct RwResEntry;
typedef struct RpSector;
typedef struct RwLinkList;
typedef struct RpMaterialList;
typedef struct RxNodeDefinition;
typedef struct RxPacket;
typedef struct RpMaterial;
typedef struct _xEntFrame;
typedef struct RwBBox;
typedef struct RpClump;
typedef struct rxReq;
typedef struct RpPolygon;
typedef struct p2EntAsset;
typedef struct RwTexCoords;
typedef struct RwTexture;
typedef struct _xRot;
typedef struct RpTriangle;
typedef struct RxPipelineNodeTopSortData;
typedef struct RxOutputSpec;
typedef enum RxClusterForcePresent;
typedef struct xMemPool;
typedef struct _zVolume;
typedef struct RxClusterRef;
typedef struct xAnimActiveEffect;
typedef enum RxNodeDefEditable;
typedef struct _xScene;
typedef struct iShadowCache;
typedef struct xAnimPlay;
typedef struct RxIoSpec;
typedef struct RpCollSector;
typedef struct RpMeshHeader;
typedef struct xAnimFile;
typedef struct RxNodeMethods;
typedef struct p2BaseAsset;
typedef struct xModelInstance;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xAnimTransitionList;
typedef struct RwSurfaceProperties;
typedef struct RwMatrixTag;
typedef struct xSerial;
typedef struct _iCollis;
typedef struct _xBound;
typedef struct RxHeap;
typedef struct xModelPool;
typedef struct RxCluster;
typedef struct _xSphere;
typedef struct RpInterpolator;
typedef struct RwSphere;
typedef struct _xFColor;
typedef struct _tagPartLink;
typedef struct _xEntCollis;
typedef struct _xCylinder;
typedef enum rxEmbeddedPacketState;
typedef enum RwTextureAddressMode;
typedef struct _xBox;
typedef struct RxPipelineNodeParam;
typedef struct RwObjectHasFrame;
typedef struct _xCollis;
typedef struct xSurface;
typedef enum RpWorldRenderOrder;
typedef struct xFFX;
typedef struct RwRGBAReal;

typedef uint32(*type_1)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_3)(_xEnt*, _xVec3*);
typedef void(*type_5)(RxPipelineNode*);
typedef xBase*(*type_7)(uint32);
typedef RpClump*(*type_9)(RpClump*, void*);
typedef int8*(*type_10)(xBase*);
typedef RpWorldSector*(*type_12)(RpWorldSector*);
typedef int8*(*type_13)(uint32);
typedef int32(*type_14)(RxPipelineNode*, RxPipeline*);
typedef int32(*type_15)(xBase*, xBase*, uint32, float32*, xBase*);
typedef void(*type_19)(_xEnt*, _xScene*, float32, _xEntCollis*);
typedef uint32(*type_22)(xAnimTransition*, xAnimSingle*, void*);
typedef uint32(*type_23)(RxPipelineNode*, uint32, uint32, void*);
typedef RpAtomic*(*type_26)(RpAtomic*);
typedef int32(*type_27)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int32(*type_28)(RxNodeDefinition*);
typedef void(*type_29)(RxNodeDefinition*);
typedef void(*type_31)(RwResEntry*);
typedef int32(*type_32)(RxPipelineNode*);
typedef void(*type_36)(_zLight*, float32);
typedef void(*type_40)(_zLight*);
typedef void(*type_43)(xMemPool*, void*);
typedef int32(*type_45)(xBase*, xBase*, uint32, float32*, xBase*);
typedef void(*type_47)(_xEnt*, _xScene*, float32);
typedef void(*type_48)(_xEnt*, _xVec3*);
typedef void(*type_49)(_xEnt*, _xScene*, float32, _xEntFrame*);
typedef void(*type_51)(_xEnt*);
typedef void(*type_56)(_xEnt*);
typedef uint32(*type_60)(_xEnt*, _xEnt*, _xScene*, float32, _xCollis*);
typedef RwObjectHasFrame*(*type_63)(RwObjectHasFrame*);

typedef uint8 type_0[3];
typedef uint8 type_2[8];
typedef uint8 type_4[8];
typedef _zLight* type_6[32];
typedef uint8 type_8[8];
typedef _xVec3 type_11[32];
typedef float32 type_16[32];
typedef _xCollis type_17[18];
typedef _zLight* type_18[32];
typedef RxCluster type_20[1];
typedef RpLight* type_21[2];
typedef RwFrame* type_24[2];
typedef uint32 type_25[4];
typedef _zLight* type_30[32];
typedef uint8 type_33[3];
typedef float32 type_34[4];
typedef uint16 type_35[3];
typedef float32 type_37[2];
typedef uint8 type_38[3];
typedef uint16 type_39[3];
typedef int8 type_41[32];
typedef int8 type_42[32];
typedef _xVec3 type_44[4];
typedef void(*type_46)(_zLight*)[18];
typedef void(*type_50)(_zLight*, float32)[18];
typedef float32 type_52[4];
typedef RwTexCoords* type_53[8];
typedef float32 type_54[4];
typedef uint8 type_55[2];
typedef RwTexCoords* type_57[8];
typedef uint8 type_58[2];
typedef float32 type_59[4];
typedef _xVec3 type_61[2];
typedef _xQuat type_62[2];
typedef uint8 type_64[8];

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

struct _xEnv
{
	iEnv* geom;
	iEnv ienv;
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

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct _xEntShadow
{
	_xVec3 pos;
	_xVec3 vec;
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

struct zVolumeAsset : p2BaseAsset
{
	uint32 flags;
	_xBound bound;
	float32 rot;
	float32 xpivot;
	float32 zpivot;
};

struct iLight
{
	uint32 type;
	RpLight* hw;
	_xSphere sph;
	float32 radius_sq;
	_xFColor color;
	_xVec3 dir;
	float32 coneangle;
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

struct _zLight : xBase
{
	uint32 flags;
	zLightAsset* tasset;
	iLight light;
	xBase* attached_to;
	int32 true_idx;
	float32* reg;
	int32 effect_idx;
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

struct _tagPartition
{
	_xVec3 min;
	_xVec3 max;
	_xVec3 space_dim;
	int32 total_x;
	int32 total_y;
	int32 total_z;
	_tagPartSpace* space;
	_tagPartSpace global;
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

struct zLightAsset : p2BaseAsset
{
	uint8 lightType;
	uint8 lightEffect;
	uint8 lightPad[2];
	uint32 lightFlags;
	float32 lightColor[4];
	_xVec3 lightDir;
	float32 lightConeAngle;
	_xSphere lightSphere;
	uint32 attachID;
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

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
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

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	p2LinkAsset* link;
	int32(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*);
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

struct xQCData
{
	uint32 xmask;
	uint32 ymask;
	uint32 zmask;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
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

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
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

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
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

struct p2LinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	float32 param[4];
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
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

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct _xBBox
{
	_xVec3 center;
	_xBox box;
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

struct _tagPartSpace
{
	int32 total;
	_tagPartLink head;
};

struct _xQuat
{
	_xVec3 v;
	float32 s;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
};

struct RpSector
{
	int32 type;
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

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	int16 refCount;
	int16 pad;
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

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
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

struct rxReq
{
};

struct RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
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

struct _xRot
{
	_xVec3 axis;
	float32 angle;
};

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
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

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
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

struct _zVolume : xBase
{
	zVolumeAsset* asset;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
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

struct iShadowCache
{
	_xVec3 pos;
	_xVec3 right;
	_xVec3 corner[4];
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

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
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

struct p2BaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
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

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
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

struct xSerial
{
};

struct _iCollis
{
	int32 unknown;
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

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
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

struct RpInterpolator
{
	int32 flags;
	int16 startMorphTarget;
	int16 endMorphTarget;
	float32 time;
	float32 recipTime;
	float32 position;
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
};

struct _xFColor
{
	float32 r;
	float32 g;
	float32 b;
	float32 a;
};

struct _tagPartLink
{
	void* data;
	_tagPartLink* next;
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

struct _xCylinder
{
	_xVec3 center;
	float32 r;
	float32 h;
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

struct _xBox
{
	_xVec3 upper;
	_xVec3 lower;
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

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct xFFX
{
};

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

_zLight* sLight[32];
int32 sLightTotal;
_tagPartition sLightPart;
_zVolume* sPartitionVolume;
int32 gNumTemporaryLights;
_zLight* gTemporaryLights[32];
void(*sEffectFuncs)(_zLight*, float32)[18];
void(*sEffectInitFuncs)(_zLight*)[18];
_xVec3 sDefaultShadowVec;
RpWorld* gLightWorld;
uint32 gActiveHeap;
int32(*zLightEventCB)(xBase*, xBase*, uint32, float32*, xBase*);

void zLightOn(_zLight* zl, int32 on);
void zLightSetVolume(_zVolume* vol);
void zLightRemoveLocal();
void zLightRemoveLocalEnv();
void zLightAddLocal(_xEnt* ent);
void zLightAddLocalEnv();
void zLightUpdate(xBase* to, float32 dt);
int32 zLightEventCB(xBase* to, uint32 toEvent);
void zLightLoad(_zLight* ent, xSerial* s);
void zLightSave(_zLight* ent, xSerial* s);
void zLightDestroyAll();
void zLightResolveLinks();
void zLightInit(xBase* b, zLightAsset* tasset);
void zLightInit(void* b, void* tasset);
void zLightResetAll(_xEnv* env);

// zLightOn__FP7_zLighti
// Start address: 0x1cc740
void zLightOn(_zLight* zl, int32 on)
{
	// Line 856, Address: 0x1cc740, Func Offset: 0
	// Line 858, Address: 0x1cc748, Func Offset: 0x8
	// Line 859, Address: 0x1cc750, Func Offset: 0x10
	// Line 862, Address: 0x1cc758, Func Offset: 0x18
	// Line 864, Address: 0x1cc768, Func Offset: 0x28
	// Func End, Address: 0x1cc770, Func Offset: 0x30
}

// zLightSetVolume__FP8_zVolume
// Start address: 0x1cc770
void zLightSetVolume(_zVolume* vol)
{
	uint32 lp_id;
	// Line 818, Address: 0x1cc770, Func Offset: 0
	// Line 819, Address: 0x1cc780, Func Offset: 0x10
	// Line 823, Address: 0x1cc788, Func Offset: 0x18
	// Line 827, Address: 0x1cc790, Func Offset: 0x20
	// Line 828, Address: 0x1cc798, Func Offset: 0x28
	// Line 832, Address: 0x1cc7a4, Func Offset: 0x34
	// Line 835, Address: 0x1cc7a8, Func Offset: 0x38
	// Func End, Address: 0x1cc7b8, Func Offset: 0x48
}

// zLightRemoveLocal__Fv
// Start address: 0x1cc7c0
void zLightRemoveLocal()
{
	int32 i;
	// Line 803, Address: 0x1cc7c0, Func Offset: 0
	// Line 804, Address: 0x1cc7d8, Func Offset: 0x18
	// Line 806, Address: 0x1cc7e8, Func Offset: 0x28
	// Line 807, Address: 0x1cc7f8, Func Offset: 0x38
	// Line 808, Address: 0x1cc810, Func Offset: 0x50
	// Line 809, Address: 0x1cc814, Func Offset: 0x54
	// Func End, Address: 0x1cc82c, Func Offset: 0x6c
}

// zLightRemoveLocalEnv__Fv
// Start address: 0x1cc830
void zLightRemoveLocalEnv()
{
	RwLLLink* link;
	int32 i;
	// Line 793, Address: 0x1cc830, Func Offset: 0
	// Line 795, Address: 0x1cc840, Func Offset: 0x10
	// Line 797, Address: 0x1cc844, Func Offset: 0x14
	// Line 795, Address: 0x1cc848, Func Offset: 0x18
	// Line 796, Address: 0x1cc84c, Func Offset: 0x1c
	// Line 797, Address: 0x1cc864, Func Offset: 0x34
	// Line 799, Address: 0x1cc878, Func Offset: 0x48
	// Func End, Address: 0x1cc880, Func Offset: 0x50
}

// zLightAddLocal__FP5_xEnt
// Start address: 0x1cc880
void zLightAddLocal(_xEnt* ent)
{
	float32 w;
	int32 i;
	_xVec3 single_light_pos;
	_xVec3 single_light_vec;
	float32 dist;
	float32 z;
	float32 y;
	float32 x;
	iLight* light;
	float32 z;
	float32 y;
	float32 x;
	iLight* light;
	uint32 test_flags;
	_zLight* zlight;
	_tagPartLink* link;
	_tagPartSpace* space;
	int32 true_idx;
	int32 xi;
	int32 zi;
	int32 zend;
	int32 xend;
	int32 zstart;
	int32 xstart;
	int32 vz;
	int32 vx;
	_xVec3 default_light_pos;
	int32 shadow_light_total;
	float32 shadow_dist[32];
	_xVec3 shadow_vec[32];
	_zLight* shadow_light[32];
	// Line 548, Address: 0x1cc880, Func Offset: 0
	// Line 552, Address: 0x1cc8b0, Func Offset: 0x30
	// Line 555, Address: 0x1cc8b4, Func Offset: 0x34
	// Line 557, Address: 0x1cc8b8, Func Offset: 0x38
	// Line 556, Address: 0x1cc8c0, Func Offset: 0x40
	// Line 555, Address: 0x1cc8c4, Func Offset: 0x44
	// Line 556, Address: 0x1cc8c8, Func Offset: 0x48
	// Line 555, Address: 0x1cc8d4, Func Offset: 0x54
	// Line 556, Address: 0x1cc8d8, Func Offset: 0x58
	// Line 557, Address: 0x1cc8e4, Func Offset: 0x64
	// Line 562, Address: 0x1cc8f4, Func Offset: 0x74
	// Line 564, Address: 0x1cc900, Func Offset: 0x80
	// Line 568, Address: 0x1cc914, Func Offset: 0x94
	// Line 569, Address: 0x1cc920, Func Offset: 0xa0
	// Line 568, Address: 0x1cc928, Func Offset: 0xa8
	// Line 569, Address: 0x1cc940, Func Offset: 0xc0
	// Line 575, Address: 0x1cc960, Func Offset: 0xe0
	// Line 578, Address: 0x1cc984, Func Offset: 0x104
	// Line 593, Address: 0x1cc9bc, Func Offset: 0x13c
	// Line 596, Address: 0x1cca08, Func Offset: 0x188
	// Line 599, Address: 0x1cca28, Func Offset: 0x1a8
	// Line 600, Address: 0x1cca3c, Func Offset: 0x1bc
	// Line 602, Address: 0x1cca48, Func Offset: 0x1c8
	// Line 605, Address: 0x1cca5c, Func Offset: 0x1dc
	// Line 608, Address: 0x1cca60, Func Offset: 0x1e0
	// Line 613, Address: 0x1cca68, Func Offset: 0x1e8
	// Line 616, Address: 0x1cca6c, Func Offset: 0x1ec
	// Line 620, Address: 0x1cca7c, Func Offset: 0x1fc
	// Line 624, Address: 0x1ccac8, Func Offset: 0x248
	// Line 625, Address: 0x1ccacc, Func Offset: 0x24c
	// Line 628, Address: 0x1ccad4, Func Offset: 0x254
	// Line 629, Address: 0x1ccad8, Func Offset: 0x258
	// Line 632, Address: 0x1ccae0, Func Offset: 0x260
	// Line 633, Address: 0x1ccae4, Func Offset: 0x264
	// Line 639, Address: 0x1ccaec, Func Offset: 0x26c
	// Line 642, Address: 0x1ccaf4, Func Offset: 0x274
	// Line 647, Address: 0x1ccb08, Func Offset: 0x288
	// Line 646, Address: 0x1ccb10, Func Offset: 0x290
	// Line 648, Address: 0x1ccb18, Func Offset: 0x298
	// Line 652, Address: 0x1ccb20, Func Offset: 0x2a0
	// Line 647, Address: 0x1ccb24, Func Offset: 0x2a4
	// Line 646, Address: 0x1ccb28, Func Offset: 0x2a8
	// Line 648, Address: 0x1ccb2c, Func Offset: 0x2ac
	// Line 652, Address: 0x1ccb30, Func Offset: 0x2b0
	// Line 662, Address: 0x1ccb5c, Func Offset: 0x2dc
	// Line 665, Address: 0x1ccb68, Func Offset: 0x2e8
	// Line 668, Address: 0x1ccb70, Func Offset: 0x2f0
	// Line 669, Address: 0x1ccb84, Func Offset: 0x304
	// Line 674, Address: 0x1ccb90, Func Offset: 0x310
	// Line 679, Address: 0x1ccba4, Func Offset: 0x324
	// Line 680, Address: 0x1ccbac, Func Offset: 0x32c
	// Line 681, Address: 0x1ccbb4, Func Offset: 0x334
	// Line 682, Address: 0x1ccbbc, Func Offset: 0x33c
	// Line 679, Address: 0x1ccbc0, Func Offset: 0x340
	// Line 680, Address: 0x1ccbc4, Func Offset: 0x344
	// Line 685, Address: 0x1ccbc8, Func Offset: 0x348
	// Line 681, Address: 0x1ccbcc, Func Offset: 0x34c
	// Line 682, Address: 0x1ccbd0, Func Offset: 0x350
	// Line 685, Address: 0x1ccbe8, Func Offset: 0x368
	// Line 694, Address: 0x1ccbf8, Func Offset: 0x378
	// Line 695, Address: 0x1ccbfc, Func Offset: 0x37c
	// Line 696, Address: 0x1ccc00, Func Offset: 0x380
	// Line 698, Address: 0x1ccc04, Func Offset: 0x384
	// Line 699, Address: 0x1ccc08, Func Offset: 0x388
	// Line 700, Address: 0x1ccc58, Func Offset: 0x3d8
	// Line 711, Address: 0x1ccc64, Func Offset: 0x3e4
	// Line 712, Address: 0x1ccc74, Func Offset: 0x3f4
	// Line 713, Address: 0x1ccc78, Func Offset: 0x3f8
	// Line 714, Address: 0x1ccc9c, Func Offset: 0x41c
	// Line 720, Address: 0x1cccbc, Func Offset: 0x43c
	// Line 723, Address: 0x1cccc8, Func Offset: 0x448
	// Line 724, Address: 0x1cccdc, Func Offset: 0x45c
	// Line 723, Address: 0x1ccce4, Func Offset: 0x464
	// Line 724, Address: 0x1ccce8, Func Offset: 0x468
	// Line 723, Address: 0x1cccec, Func Offset: 0x46c
	// Line 724, Address: 0x1cccf0, Func Offset: 0x470
	// Line 727, Address: 0x1ccd00, Func Offset: 0x480
	// Line 732, Address: 0x1ccd10, Func Offset: 0x490
	// Line 734, Address: 0x1ccd1c, Func Offset: 0x49c
	// Line 736, Address: 0x1ccd20, Func Offset: 0x4a0
	// Line 741, Address: 0x1ccd24, Func Offset: 0x4a4
	// Line 740, Address: 0x1ccd28, Func Offset: 0x4a8
	// Line 734, Address: 0x1ccd34, Func Offset: 0x4b4
	// Line 736, Address: 0x1ccd50, Func Offset: 0x4d0
	// Line 734, Address: 0x1ccd54, Func Offset: 0x4d4
	// Line 736, Address: 0x1ccd58, Func Offset: 0x4d8
	// Line 740, Address: 0x1ccd5c, Func Offset: 0x4dc
	// Line 736, Address: 0x1ccd60, Func Offset: 0x4e0
	// Line 740, Address: 0x1ccd64, Func Offset: 0x4e4
	// Line 736, Address: 0x1ccd70, Func Offset: 0x4f0
	// Line 740, Address: 0x1ccd78, Func Offset: 0x4f8
	// Line 741, Address: 0x1ccd80, Func Offset: 0x500
	// Line 737, Address: 0x1ccd84, Func Offset: 0x504
	// Line 741, Address: 0x1ccd88, Func Offset: 0x508
	// Line 737, Address: 0x1ccd8c, Func Offset: 0x50c
	// Line 738, Address: 0x1ccda0, Func Offset: 0x520
	// Line 740, Address: 0x1ccdac, Func Offset: 0x52c
	// Line 738, Address: 0x1ccdb4, Func Offset: 0x534
	// Line 740, Address: 0x1ccdbc, Func Offset: 0x53c
	// Line 741, Address: 0x1ccde4, Func Offset: 0x564
	// Line 743, Address: 0x1ccdf0, Func Offset: 0x570
	// Line 744, Address: 0x1ccdf8, Func Offset: 0x578
	// Line 745, Address: 0x1ccdfc, Func Offset: 0x57c
	// Line 743, Address: 0x1cce00, Func Offset: 0x580
	// Line 744, Address: 0x1cce14, Func Offset: 0x594
	// Line 745, Address: 0x1cce20, Func Offset: 0x5a0
	// Line 747, Address: 0x1cce30, Func Offset: 0x5b0
	// Line 750, Address: 0x1cce40, Func Offset: 0x5c0
	// Line 751, Address: 0x1cce48, Func Offset: 0x5c8
	// Line 750, Address: 0x1cce50, Func Offset: 0x5d0
	// Line 751, Address: 0x1cce60, Func Offset: 0x5e0
	// Line 750, Address: 0x1cce68, Func Offset: 0x5e8
	// Line 752, Address: 0x1cce7c, Func Offset: 0x5fc
	// Line 750, Address: 0x1cce84, Func Offset: 0x604
	// Line 751, Address: 0x1cce88, Func Offset: 0x608
	// Line 752, Address: 0x1cce8c, Func Offset: 0x60c
	// Line 751, Address: 0x1cce90, Func Offset: 0x610
	// Line 752, Address: 0x1cce94, Func Offset: 0x614
	// Line 751, Address: 0x1cce98, Func Offset: 0x618
	// Line 752, Address: 0x1ccea0, Func Offset: 0x620
	// Line 750, Address: 0x1ccea4, Func Offset: 0x624
	// Line 752, Address: 0x1ccea8, Func Offset: 0x628
	// Line 751, Address: 0x1cceac, Func Offset: 0x62c
	// Line 750, Address: 0x1cceb0, Func Offset: 0x630
	// Line 752, Address: 0x1cceb4, Func Offset: 0x634
	// Line 751, Address: 0x1cceb8, Func Offset: 0x638
	// Line 752, Address: 0x1ccebc, Func Offset: 0x63c
	// Line 753, Address: 0x1ccec0, Func Offset: 0x640
	// Line 750, Address: 0x1ccec4, Func Offset: 0x644
	// Line 753, Address: 0x1ccecc, Func Offset: 0x64c
	// Line 750, Address: 0x1cced0, Func Offset: 0x650
	// Line 753, Address: 0x1ccedc, Func Offset: 0x65c
	// Line 750, Address: 0x1ccee0, Func Offset: 0x660
	// Line 753, Address: 0x1ccee4, Func Offset: 0x664
	// Line 758, Address: 0x1ccee8, Func Offset: 0x668
	// Line 761, Address: 0x1ccef0, Func Offset: 0x670
	// Line 767, Address: 0x1ccf00, Func Offset: 0x680
	// Line 766, Address: 0x1ccf0c, Func Offset: 0x68c
	// Line 767, Address: 0x1ccf20, Func Offset: 0x6a0
	// Line 766, Address: 0x1ccf24, Func Offset: 0x6a4
	// Line 767, Address: 0x1ccf34, Func Offset: 0x6b4
	// Line 769, Address: 0x1ccf3c, Func Offset: 0x6bc
	// Line 766, Address: 0x1ccf40, Func Offset: 0x6c0
	// Line 769, Address: 0x1ccf58, Func Offset: 0x6d8
	// Line 767, Address: 0x1ccf5c, Func Offset: 0x6dc
	// Line 769, Address: 0x1ccf64, Func Offset: 0x6e4
	// Line 767, Address: 0x1ccf6c, Func Offset: 0x6ec
	// Line 769, Address: 0x1ccf70, Func Offset: 0x6f0
	// Line 766, Address: 0x1ccf74, Func Offset: 0x6f4
	// Line 769, Address: 0x1ccf78, Func Offset: 0x6f8
	// Line 767, Address: 0x1ccf7c, Func Offset: 0x6fc
	// Line 766, Address: 0x1ccf80, Func Offset: 0x700
	// Line 769, Address: 0x1ccf84, Func Offset: 0x704
	// Line 767, Address: 0x1ccf88, Func Offset: 0x708
	// Line 769, Address: 0x1ccf8c, Func Offset: 0x70c
	// Line 770, Address: 0x1ccf90, Func Offset: 0x710
	// Line 766, Address: 0x1ccf94, Func Offset: 0x714
	// Line 770, Address: 0x1ccf9c, Func Offset: 0x71c
	// Line 766, Address: 0x1ccfa0, Func Offset: 0x720
	// Line 770, Address: 0x1ccfa8, Func Offset: 0x728
	// Line 766, Address: 0x1ccfac, Func Offset: 0x72c
	// Line 770, Address: 0x1ccfb0, Func Offset: 0x730
	// Line 774, Address: 0x1ccfb8, Func Offset: 0x738
	// Line 788, Address: 0x1ccfd0, Func Offset: 0x750
	// Func End, Address: 0x1cd000, Func Offset: 0x780
}

// zLightAddLocalEnv__Fv
// Start address: 0x1cd000
void zLightAddLocalEnv()
{
	iLight* light;
	_zLight* zlight;
	int32 i;
	// Line 510, Address: 0x1cd000, Func Offset: 0
	// Line 512, Address: 0x1cd034, Func Offset: 0x34
	// Line 514, Address: 0x1cd04c, Func Offset: 0x4c
	// Line 517, Address: 0x1cd050, Func Offset: 0x50
	// Line 520, Address: 0x1cd060, Func Offset: 0x60
	// Line 524, Address: 0x1cd074, Func Offset: 0x74
	// Line 527, Address: 0x1cd080, Func Offset: 0x80
	// Line 528, Address: 0x1cd0c4, Func Offset: 0xc4
	// Line 529, Address: 0x1cd0d4, Func Offset: 0xd4
	// Line 532, Address: 0x1cd0e4, Func Offset: 0xe4
	// Line 533, Address: 0x1cd0f8, Func Offset: 0xf8
	// Func End, Address: 0x1cd124, Func Offset: 0x124
}

// zLightUpdate__FP5xBaseP7_xScenef
// Start address: 0x1cd130
void zLightUpdate(xBase* to, float32 dt)
{
	_xVec3 pos;
	_zLight* t;
	// Line 471, Address: 0x1cd130, Func Offset: 0
	// Line 480, Address: 0x1cd144, Func Offset: 0x14
	// Line 483, Address: 0x1cd158, Func Offset: 0x28
	// Line 487, Address: 0x1cd164, Func Offset: 0x34
	// Line 488, Address: 0x1cd168, Func Offset: 0x38
	// Line 487, Address: 0x1cd170, Func Offset: 0x40
	// Line 488, Address: 0x1cd174, Func Offset: 0x44
	// Line 489, Address: 0x1cd178, Func Offset: 0x48
	// Line 487, Address: 0x1cd17c, Func Offset: 0x4c
	// Line 488, Address: 0x1cd198, Func Offset: 0x68
	// Line 489, Address: 0x1cd1a0, Func Offset: 0x70
	// Line 492, Address: 0x1cd1a8, Func Offset: 0x78
	// Line 495, Address: 0x1cd1ac, Func Offset: 0x7c
	// Line 492, Address: 0x1cd1b8, Func Offset: 0x88
	// Line 495, Address: 0x1cd1cc, Func Offset: 0x9c
	// Line 501, Address: 0x1cd1dc, Func Offset: 0xac
	// Line 503, Address: 0x1cd1fc, Func Offset: 0xcc
	// Line 505, Address: 0x1cd204, Func Offset: 0xd4
	// Func End, Address: 0x1cd21c, Func Offset: 0xec
}

// zLightEventCB__FP5xBaseP5xBaseUiPfP5xBase
// Start address: 0x1cd220
int32 zLightEventCB(xBase* to, uint32 toEvent)
{
	_zLight* t;
	// Line 434, Address: 0x1cd220, Func Offset: 0
	// Line 441, Address: 0x1cd22c, Func Offset: 0xc
	// Line 444, Address: 0x1cd254, Func Offset: 0x34
	// Line 445, Address: 0x1cd25c, Func Offset: 0x3c
	// Line 448, Address: 0x1cd264, Func Offset: 0x44
	// Line 449, Address: 0x1cd270, Func Offset: 0x50
	// Line 452, Address: 0x1cd278, Func Offset: 0x58
	// Line 457, Address: 0x1cd2e4, Func Offset: 0xc4
	// Line 456, Address: 0x1cd2ec, Func Offset: 0xcc
	// Line 457, Address: 0x1cd2f0, Func Offset: 0xd0
	// Func End, Address: 0x1cd2f8, Func Offset: 0xd8
}

// zLightLoad__FP7_zLightP7xSerial
// Start address: 0x1cd300
void zLightLoad(_zLight* ent, xSerial* s)
{
	// Line 415, Address: 0x1cd300, Func Offset: 0
	// Func End, Address: 0x1cd308, Func Offset: 0x8
}

// zLightSave__FP7_zLightP7xSerial
// Start address: 0x1cd310
void zLightSave(_zLight* ent, xSerial* s)
{
	// Line 396, Address: 0x1cd310, Func Offset: 0
	// Func End, Address: 0x1cd318, Func Offset: 0x8
}

// zLightDestroyAll__Fv
// Start address: 0x1cd320
void zLightDestroyAll()
{
	int32 i;
	int32 total;
	// Line 347, Address: 0x1cd320, Func Offset: 0
	// Line 348, Address: 0x1cd338, Func Offset: 0x18
	// Line 349, Address: 0x1cd340, Func Offset: 0x20
	// Line 351, Address: 0x1cd354, Func Offset: 0x34
	// Line 352, Address: 0x1cd360, Func Offset: 0x40
	// Line 353, Address: 0x1cd364, Func Offset: 0x44
	// Line 352, Address: 0x1cd36c, Func Offset: 0x4c
	// Line 353, Address: 0x1cd374, Func Offset: 0x54
	// Line 354, Address: 0x1cd380, Func Offset: 0x60
	// Line 355, Address: 0x1cd384, Func Offset: 0x64
	// Func End, Address: 0x1cd3a0, Func Offset: 0x80
}

// zLightResolveLinks__Fv
// Start address: 0x1cd3a0
void zLightResolveLinks()
{
	_zLight* zl;
	int32 i;
	// Line 331, Address: 0x1cd3a0, Func Offset: 0
	// Line 332, Address: 0x1cd3bc, Func Offset: 0x1c
	// Line 334, Address: 0x1cd3cc, Func Offset: 0x2c
	// Line 338, Address: 0x1cd3d0, Func Offset: 0x30
	// Line 339, Address: 0x1cd3e0, Func Offset: 0x40
	// Line 341, Address: 0x1cd3f0, Func Offset: 0x50
	// Line 342, Address: 0x1cd3fc, Func Offset: 0x5c
	// Line 343, Address: 0x1cd410, Func Offset: 0x70
	// Func End, Address: 0x1cd42c, Func Offset: 0x8c
}

// zLightInit__FP5xBaseP11zLightAsset
// Start address: 0x1cd430
void zLightInit(xBase* b, zLightAsset* tasset)
{
	uint32 itype;
	_zLight* t;
	// Line 188, Address: 0x1cd430, Func Offset: 0
	// Line 192, Address: 0x1cd444, Func Offset: 0x14
	// Line 202, Address: 0x1cd44c, Func Offset: 0x1c
	// Line 203, Address: 0x1cd458, Func Offset: 0x28
	// Line 205, Address: 0x1cd45c, Func Offset: 0x2c
	// Line 206, Address: 0x1cd468, Func Offset: 0x38
	// Line 208, Address: 0x1cd478, Func Offset: 0x48
	// Line 212, Address: 0x1cd47c, Func Offset: 0x4c
	// Line 220, Address: 0x1cd4b0, Func Offset: 0x80
	// Line 234, Address: 0x1cd4b4, Func Offset: 0x84
	// Line 237, Address: 0x1cd4c8, Func Offset: 0x98
	// Line 255, Address: 0x1cd4d8, Func Offset: 0xa8
	// Line 237, Address: 0x1cd4e0, Func Offset: 0xb0
	// Line 240, Address: 0x1cd4f8, Func Offset: 0xc8
	// Line 241, Address: 0x1cd500, Func Offset: 0xd0
	// Line 242, Address: 0x1cd508, Func Offset: 0xd8
	// Line 243, Address: 0x1cd510, Func Offset: 0xe0
	// Line 246, Address: 0x1cd518, Func Offset: 0xe8
	// Line 247, Address: 0x1cd520, Func Offset: 0xf0
	// Line 248, Address: 0x1cd528, Func Offset: 0xf8
	// Line 249, Address: 0x1cd530, Func Offset: 0x100
	// Line 250, Address: 0x1cd538, Func Offset: 0x108
	// Line 253, Address: 0x1cd540, Func Offset: 0x110
	// Line 255, Address: 0x1cd548, Func Offset: 0x118
	// Line 259, Address: 0x1cd550, Func Offset: 0x120
	// Line 260, Address: 0x1cd554, Func Offset: 0x124
	// Line 261, Address: 0x1cd568, Func Offset: 0x138
	// Line 264, Address: 0x1cd574, Func Offset: 0x144
	// Line 266, Address: 0x1cd584, Func Offset: 0x154
	// Line 267, Address: 0x1cd594, Func Offset: 0x164
	// Line 268, Address: 0x1cd5d0, Func Offset: 0x1a0
	// Line 271, Address: 0x1cd5d8, Func Offset: 0x1a8
	// Line 276, Address: 0x1cd5dc, Func Offset: 0x1ac
	// Line 326, Address: 0x1cd5f4, Func Offset: 0x1c4
	// Func End, Address: 0x1cd608, Func Offset: 0x1d8
}

// zLightInit__FPvPv
// Start address: 0x1cd610
void zLightInit(void* b, void* tasset)
{
	// Line 185, Address: 0x1cd610, Func Offset: 0
	// Func End, Address: 0x1cd618, Func Offset: 0x8
}

// zLightResetAll__FP5_xEnv
// Start address: 0x1cd620
void zLightResetAll(_xEnv* env)
{
	// Line 152, Address: 0x1cd620, Func Offset: 0
	// Line 156, Address: 0x1cd630, Func Offset: 0x10
	// Line 160, Address: 0x1cd644, Func Offset: 0x24
	// Line 161, Address: 0x1cd650, Func Offset: 0x30
	// Line 163, Address: 0x1cd670, Func Offset: 0x50
	// Line 164, Address: 0x1cd68c, Func Offset: 0x6c
	// Line 171, Address: 0x1cd6a0, Func Offset: 0x80
	// Func End, Address: 0x1cd6b0, Func Offset: 0x90
}

