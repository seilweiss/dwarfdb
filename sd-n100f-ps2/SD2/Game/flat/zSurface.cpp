typedef struct RxClusterDefinition;
typedef struct _xEnt;
typedef struct xBase;
typedef struct RwRaster;
typedef struct xAnimEffect;
typedef struct rxHeapFreeBlock;
typedef struct zSurfTextureAnim;
typedef struct RpAtomic;
typedef struct xAnimActiveEffect;
typedef struct xSurface;
typedef struct RwTexDictionary;
typedef struct RpVertexNormal;
typedef struct RpMorphTarget;
typedef struct RxNodeMethods;
typedef struct RpMaterialList;
typedef struct xMemPool;
typedef struct rxReq;
typedef struct RwFrame;
typedef struct xModelPool;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct _xCollis;
typedef struct RpSector;
typedef struct zSurfaceProps;
typedef struct _xEntShadow;
typedef struct RpMaterial;
typedef struct _xEnv;
typedef struct RpGeometry;
typedef struct RwSurfaceProperties;
typedef struct xModelInstance;
typedef struct xAnimSingle;
typedef struct zMaterialMapAsset;
typedef struct RxNodeDefinition;
typedef struct RwResEntry;
typedef struct RwMatrixTag;
typedef struct RxHeap;
typedef struct RwV3d;
typedef struct RwLLLink;
typedef struct xSerial;
typedef struct RxCluster;
typedef struct xAnimTable;
typedef struct RpClump;
typedef struct RxClusterRef;
typedef struct rxHeapBlockHeader;
typedef struct iShadowCache;
typedef struct xAnimTransition;
typedef enum RxClusterValidityReq;
typedef struct RxPipelineCluster;
typedef struct RpLight;
typedef struct zSurfacePropTexAnim;
typedef struct RpPolygon;
typedef struct RwSphere;
typedef struct p2EntAsset;
typedef struct _zGroup;
typedef struct RpTriangle;
typedef struct RxOutputSpec;
typedef enum rxEmbeddedPacketState;
typedef struct _xMat4x3;
typedef struct xAnimState;
typedef struct RxPacket;
typedef struct iEnv;
typedef struct RxPipeline;
typedef struct _xSphere;
typedef enum RwTextureAddressMode;
typedef struct RxPipelineNode;
typedef struct zGroupAsset;
typedef struct _xBound;
typedef struct _xScene;
typedef struct _xEntFrame;
typedef struct _xCylinder;
typedef struct RxPipelineNodeParam;
typedef struct zSurfColorFX;
typedef struct RxPipelineNodeTopSortData;
typedef struct RpWorld;
typedef struct RpCollSector;
typedef struct zSurfacePropUVFX;
typedef struct _xBox;
typedef struct RpMeshHeader;
typedef struct p2LinkAsset;
typedef struct _xEntCollis;
typedef struct RwTexture;
typedef struct RwObjectHasFrame;
typedef struct RwRGBAReal;
typedef struct p2BaseAsset;
typedef struct _xVec3;
typedef struct zSurfUVFX;
typedef struct RwRGBA;
typedef struct RxPipelineRequiresCluster;
typedef struct RpInterpolator;
typedef struct RwTexCoords;
typedef struct xAnimPlay;
typedef struct RpWorldSector;
typedef struct zSurfAsset;
typedef struct zMaterialMapEntry;
typedef enum RwTextureFilterMode;
typedef struct xAnimFile;
typedef struct RwObject;
typedef enum RxClusterValid;
typedef struct xAnimTransitionList;
typedef struct zSurfMatFX;
typedef struct RwLinkList;
typedef struct xFFX;
typedef enum RpWorldRenderOrder;
typedef struct _xQuat;
typedef struct xQCData;
typedef struct _iCollis;
typedef struct RwBBox;
typedef struct _xBBox;
typedef enum RxClusterForcePresent;
typedef enum RxNodeDefEditable;
typedef struct _xRot;
typedef struct RxIoSpec;

typedef RpAtomic*(*type_3)(RpAtomic*);
typedef uint32(*type_6)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef xBase*(*type_9)(uint32);
typedef int8*(*type_10)(xBase*);
typedef int8*(*type_13)(uint32);
typedef RpWorldSector*(*type_15)(RpWorldSector*);
typedef uint32(*type_16)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_20)(_xEnt*, _xScene*, float32, _xEntFrame*);
typedef int32(*type_21)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int32(*type_22)(xBase*, xBase*, uint32, float32*, xBase*);
typedef void(*type_23)(_xEnt*, _xScene*, float32);
typedef int32(*type_24)(RxNodeDefinition*);
typedef void(*type_25)(_xEnt*);
typedef void(*type_26)(RxNodeDefinition*);
typedef void(*type_29)(xMemPool*, void*);
typedef void(*type_30)(_xEnt*);
typedef int32(*type_31)(RxPipelineNode*);
typedef void(*type_32)(_xEnt*, _xScene*, float32, _xEntCollis*);
typedef void(*type_34)(_xEnt*, _xVec3*);
typedef void(*type_35)(RxPipelineNode*);
typedef RwObjectHasFrame*(*type_36)(RwObjectHasFrame*);
typedef uint32(*type_38)(_xEnt*, _xEnt*, _xScene*, float32, _xCollis*);
typedef int32(*type_39)(RxPipelineNode*, RxPipeline*);
typedef int32(*type_40)(xBase*, xBase*, uint32, float32*, xBase*);
typedef uint32(*type_44)(RxPipelineNode*, uint32, uint32, void*);
typedef void(*type_46)(_xEnt*, _xVec3*);
typedef void(*type_49)(RwResEntry*);
typedef RpClump*(*type_53)(RpClump*, void*);

typedef _xQuat type_0[2];
typedef zSurfUVFX type_1[2];
typedef uint8 type_2[3];
typedef uint8 type_4[3];
typedef int8 type_5[32];
typedef int8 type_7[32];
typedef zMaterialMapAsset* type_8[1];
typedef float32 type_11[4];
typedef uint8 type_12[3];
typedef _xVec3 type_14[4];
typedef uint16 type_17[3];
typedef uint16 type_18[3];
typedef uint8 type_19[3];
typedef float32 type_27[2];
typedef RpLight* type_28[2];
typedef RwFrame* type_33[2];
typedef RwTexCoords* type_37[8];
typedef RxCluster type_41[1];
typedef RwTexCoords* type_42[8];
typedef zSurfacePropTexAnim type_43[2];
typedef uint32 type_45[4];
typedef zSurfacePropUVFX type_47[2];
typedef float32 type_48[4];
typedef float32 type_50[4];
typedef _xCollis type_51[18];
typedef uint8 type_52[2];
typedef uint8 type_54[8];
typedef uint8 type_55[8];
typedef uint8 type_56[8];
typedef uint8 type_57[8];
typedef _xVec3 type_58[2];
typedef zSurfTextureAnim type_59[2];

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
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

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	p2LinkAsset* link;
	int32(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*);
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

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
};

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
};

struct zSurfTextureAnim
{
	uint16 pad;
	uint16 mode;
	uint32 group;
	float32 speed;
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

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
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

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
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

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
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

struct rxReq
{
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

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
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

struct RpSector
{
	int32 type;
};

struct zSurfaceProps
{
	zSurfAsset* asset;
	uint32 texanim_flags;
	zSurfacePropTexAnim texanim[2];
	uint32 uvfx_flags;
	zSurfacePropUVFX uvfx[2];
};

struct _xEntShadow
{
	_xVec3 pos;
	_xVec3 vec;
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

struct _xEnv
{
	iEnv* geom;
	iEnv ienv;
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

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
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

struct zMaterialMapAsset
{
	uint32 id;
	uint32 count;
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

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
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

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct xSerial
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

struct xAnimTable
{
	xAnimTable* Next;
	int8* Name;
	xAnimTransition* TransitionList;
	xAnimState* StateList;
	uint32 AnimIndex;
	uint32 MorphIndex;
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

struct iShadowCache
{
	_xVec3 pos;
	_xVec3 right;
	_xVec3 corner[4];
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

struct zSurfacePropTexAnim
{
	uint16 mode;
	float32 speed;
	float32 frame;
	uint32 group;
	int32 group_idx;
	xBase* group_ptr;
};

struct RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
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

struct _zGroup : xBase
{
	zGroupAsset* asset;
};

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
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

struct zGroupAsset : p2BaseAsset
{
	uint16 itemCount;
	uint16 groupFlags;
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

struct _xCylinder
{
	_xVec3 center;
	float32 r;
	float32 h;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct zSurfColorFX
{
	uint16 flags;
	uint16 mode;
	float32 speed;
};

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
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

struct RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
};

struct zSurfacePropUVFX
{
	int32 mode;
	float32 rot;
	float32 rot_spd;
	_xVec3 trans;
	_xVec3 trans_spd;
	_xVec3 scale;
	_xVec3 scale_spd;
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

struct p2LinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	float32 param[4];
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
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

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
};

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

struct p2BaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct _xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct zSurfUVFX
{
	int32 mode;
	float32 rot;
	float32 rot_spd;
	_xVec3 trans;
	_xVec3 trans_spd;
	_xVec3 scale;
	_xVec3 scale_spd;
};

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
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

struct zSurfAsset : p2BaseAsset
{
	uint8 game_damage_type;
	uint8 game_sticky;
	uint8 game_damage_flags;
	uint8 surf_type;
	uint8 phys_pad;
	uint8 sld_start;
	uint8 sld_stop;
	uint8 phys_flags;
	float32 friction;
	zSurfMatFX matfx;
	zSurfColorFX colorfx;
	uint32 texture_anim_flags;
	zSurfTextureAnim texture_anim[2];
	uint32 uvfx_flags;
	zSurfUVFX uvfx[2];
	uint8 on;
	uint8 surf_pad[3];
};

struct zMaterialMapEntry
{
	uint32 surfaceAssetID;
	uint32 materialIndex;
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

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct zSurfMatFX
{
	uint32 flags;
	uint32 bumpmapID;
	uint32 envmapID;
	float32 shininess;
	float32 bumpiness;
	uint32 dualmapID;
};

struct RwLinkList
{
	RwLLLink link;
};

struct xFFX
{
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct _xQuat
{
	_xVec3 v;
	float32 s;
};

struct xQCData
{
	uint32 xmask;
	uint32 ymask;
	uint32 zmask;
};

struct _iCollis
{
	int32 unknown;
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct _xBBox
{
	_xVec3 center;
	_xBox box;
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
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

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

zSurfaceProps* zsps;
int32 sMapperCount;
zMaterialMapAsset* sMapper[1];
xSurface sDef_surf;
zSurfaceProps sDef_surf_props;
zSurfAsset sDef_surf_asset;
uint32 gFrameCount;
int32(*zSurfaceEventCB)(xBase*, xBase*, uint32, float32*, xBase*);
uint32 gActiveHeap;

void zSurfaceGetName(int32 type, int8* buffer);
int32 zSurfaceEventCB(xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget);
void zSurfaceUpdate(xBase* to, float32 dt);
void zSurfaceSetup(xSurface* s);
void zSurfaceLoad(xSurface* ent, xSerial* s);
void zSurfaceSave(xSurface* ent, xSerial* s);
float32 zSurfaceGetDamping(xSurface* surf, float32 min_vel);
int32 zSurfaceGetSlickness(xSurface* surf);
float32 zSurfaceGetFriction(xSurface* surf);
uint32 zSurfaceGetStandOn(xSurface* surf);
uint32 zSurfaceGetSticky(xSurface* surf);
uint32 zSurfaceGetDamagePassthrough(xSurface* surf);
int32 zSurfaceGetDamageType(xSurface* surf);
uint32 zSurfaceGetMatchOrient(xSurface* surf);
float32 zSurfaceGetSlideStopAngle(xSurface* surf);
float32 zSurfaceGetSlideStartAngle(xSurface* surf);
uint32 zSurfaceGetStep(xSurface* surf);
uint32 zSurfaceGetSlide(xSurface* surf);
xSurface* zSurfaceGetSurface(_xCollis* coll);
xSurface* zSurfaceGetSurface(uint32 mat_id);
void zSurfaceExit();
void zSurfaceRegisterMapper(uint32 assetId);
void zSurfaceInit();

// zSurfaceGetName__FiPc
// Start address: 0x1a3f60
void zSurfaceGetName(int32 type, int8* buffer)
{
	// Line 809, Address: 0x1a3f60, Func Offset: 0
	// Line 811, Address: 0x1a3f68, Func Offset: 0x8
	// Line 814, Address: 0x1a3f90, Func Offset: 0x30
	// Line 815, Address: 0x1a3fa0, Func Offset: 0x40
	// Line 817, Address: 0x1a3fa8, Func Offset: 0x48
	// Line 818, Address: 0x1a3fb8, Func Offset: 0x58
	// Line 820, Address: 0x1a3fc0, Func Offset: 0x60
	// Line 821, Address: 0x1a3fd0, Func Offset: 0x70
	// Line 823, Address: 0x1a3fd8, Func Offset: 0x78
	// Line 824, Address: 0x1a3fe8, Func Offset: 0x88
	// Line 826, Address: 0x1a3ff0, Func Offset: 0x90
	// Line 827, Address: 0x1a4000, Func Offset: 0xa0
	// Line 829, Address: 0x1a4008, Func Offset: 0xa8
	// Line 830, Address: 0x1a4018, Func Offset: 0xb8
	// Line 832, Address: 0x1a4020, Func Offset: 0xc0
	// Line 833, Address: 0x1a4030, Func Offset: 0xd0
	// Line 835, Address: 0x1a4038, Func Offset: 0xd8
	// Line 836, Address: 0x1a4048, Func Offset: 0xe8
	// Line 838, Address: 0x1a4050, Func Offset: 0xf0
	// Line 839, Address: 0x1a4060, Func Offset: 0x100
	// Line 841, Address: 0x1a4068, Func Offset: 0x108
	// Line 842, Address: 0x1a4078, Func Offset: 0x118
	// Line 844, Address: 0x1a4080, Func Offset: 0x120
	// Line 845, Address: 0x1a4090, Func Offset: 0x130
	// Line 847, Address: 0x1a4098, Func Offset: 0x138
	// Line 848, Address: 0x1a40a8, Func Offset: 0x148
	// Line 850, Address: 0x1a40b0, Func Offset: 0x150
	// Line 851, Address: 0x1a40c0, Func Offset: 0x160
	// Line 853, Address: 0x1a40c8, Func Offset: 0x168
	// Line 854, Address: 0x1a40d8, Func Offset: 0x178
	// Line 856, Address: 0x1a40e0, Func Offset: 0x180
	// Line 857, Address: 0x1a40f0, Func Offset: 0x190
	// Line 859, Address: 0x1a40f8, Func Offset: 0x198
	// Line 860, Address: 0x1a4108, Func Offset: 0x1a8
	// Line 862, Address: 0x1a4110, Func Offset: 0x1b0
	// Line 863, Address: 0x1a4120, Func Offset: 0x1c0
	// Line 865, Address: 0x1a4128, Func Offset: 0x1c8
	// Line 866, Address: 0x1a4138, Func Offset: 0x1d8
	// Line 868, Address: 0x1a4140, Func Offset: 0x1e0
	// Line 869, Address: 0x1a4150, Func Offset: 0x1f0
	// Line 871, Address: 0x1a4158, Func Offset: 0x1f8
	// Line 872, Address: 0x1a4168, Func Offset: 0x208
	// Line 874, Address: 0x1a4170, Func Offset: 0x210
	// Line 875, Address: 0x1a4180, Func Offset: 0x220
	// Line 877, Address: 0x1a4188, Func Offset: 0x228
	// Line 878, Address: 0x1a4198, Func Offset: 0x238
	// Line 880, Address: 0x1a41a0, Func Offset: 0x240
	// Line 887, Address: 0x1a41b0, Func Offset: 0x250
	// Func End, Address: 0x1a41bc, Func Offset: 0x25c
}

// zSurfaceEventCB__FP5xBaseP5xBaseUiPfP5xBase
// Start address: 0x1a41c0
int32 zSurfaceEventCB(xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget)
{
	zSurfaceProps* p;
	zSurfaceProps* p;
	zSurfaceProps* p;
	zSurfaceProps* p;
	zSurfaceProps* p;
	zSurfaceProps* p;
	xSurface* t;
	// Line 632, Address: 0x1a41c0, Func Offset: 0
	// Line 639, Address: 0x1a41cc, Func Offset: 0xc
	// Line 644, Address: 0x1a424c, Func Offset: 0x8c
	// Line 648, Address: 0x1a4254, Func Offset: 0x94
	// Line 651, Address: 0x1a425c, Func Offset: 0x9c
	// Line 653, Address: 0x1a4268, Func Offset: 0xa8
	// Line 656, Address: 0x1a4270, Func Offset: 0xb0
	// Line 659, Address: 0x1a4278, Func Offset: 0xb8
	// Line 661, Address: 0x1a4290, Func Offset: 0xd0
	// Line 664, Address: 0x1a4298, Func Offset: 0xd8
	// Line 668, Address: 0x1a42a4, Func Offset: 0xe4
	// Line 669, Address: 0x1a42c0, Func Offset: 0x100
	// Line 671, Address: 0x1a42d0, Func Offset: 0x110
	// Line 673, Address: 0x1a42d8, Func Offset: 0x118
	// Line 677, Address: 0x1a42e0, Func Offset: 0x120
	// Line 682, Address: 0x1a42ec, Func Offset: 0x12c
	// Line 685, Address: 0x1a42fc, Func Offset: 0x13c
	// Line 686, Address: 0x1a4318, Func Offset: 0x158
	// Line 688, Address: 0x1a432c, Func Offset: 0x16c
	// Line 691, Address: 0x1a4338, Func Offset: 0x178
	// Line 694, Address: 0x1a4340, Func Offset: 0x180
	// Line 698, Address: 0x1a434c, Func Offset: 0x18c
	// Line 700, Address: 0x1a4368, Func Offset: 0x1a8
	// Line 701, Address: 0x1a4378, Func Offset: 0x1b8
	// Line 704, Address: 0x1a4380, Func Offset: 0x1c0
	// Line 707, Address: 0x1a4390, Func Offset: 0x1d0
	// Line 710, Address: 0x1a4398, Func Offset: 0x1d8
	// Line 713, Address: 0x1a43a4, Func Offset: 0x1e4
	// Line 715, Address: 0x1a43c0, Func Offset: 0x200
	// Line 717, Address: 0x1a43d0, Func Offset: 0x210
	// Line 718, Address: 0x1a43dc, Func Offset: 0x21c
	// Line 723, Address: 0x1a43e4, Func Offset: 0x224
	// Line 726, Address: 0x1a43ec, Func Offset: 0x22c
	// Line 728, Address: 0x1a43fc, Func Offset: 0x23c
	// Line 729, Address: 0x1a4408, Func Offset: 0x248
	// Line 736, Address: 0x1a4410, Func Offset: 0x250
	// Line 748, Address: 0x1a4418, Func Offset: 0x258
	// Line 751, Address: 0x1a4424, Func Offset: 0x264
	// Line 761, Address: 0x1a442c, Func Offset: 0x26c
	// Line 770, Address: 0x1a4468, Func Offset: 0x2a8
	// Line 774, Address: 0x1a4470, Func Offset: 0x2b0
	// Line 776, Address: 0x1a448c, Func Offset: 0x2cc
	// Line 778, Address: 0x1a4490, Func Offset: 0x2d0
	// Line 781, Address: 0x1a4498, Func Offset: 0x2d8
	// Line 786, Address: 0x1a449c, Func Offset: 0x2dc
	// Line 788, Address: 0x1a44a4, Func Offset: 0x2e4
	// Line 793, Address: 0x1a44b0, Func Offset: 0x2f0
	// Line 794, Address: 0x1a44cc, Func Offset: 0x30c
	// Line 796, Address: 0x1a44d8, Func Offset: 0x318
	// Line 804, Address: 0x1a44e0, Func Offset: 0x320
	// Line 803, Address: 0x1a44e8, Func Offset: 0x328
	// Line 804, Address: 0x1a44ec, Func Offset: 0x32c
	// Func End, Address: 0x1a44f4, Func Offset: 0x334
}

// zSurfaceUpdate__FP5xBaseP7_xScenef
// Start address: 0x1a4500
void zSurfaceUpdate(xBase* to, float32 dt)
{
	int32 max;
	_zGroup* g;
	zSurfaceProps* moprops;
	int32 j;
	// Line 471, Address: 0x1a4500, Func Offset: 0
	// Line 478, Address: 0x1a451c, Func Offset: 0x1c
	// Line 484, Address: 0x1a4524, Func Offset: 0x24
	// Line 486, Address: 0x1a4530, Func Offset: 0x30
	// Line 491, Address: 0x1a4568, Func Offset: 0x68
	// Line 505, Address: 0x1a4580, Func Offset: 0x80
	// Line 506, Address: 0x1a45d8, Func Offset: 0xd8
	// Line 509, Address: 0x1a4630, Func Offset: 0x130
	// Line 510, Address: 0x1a4688, Func Offset: 0x188
	// Line 512, Address: 0x1a46dc, Func Offset: 0x1dc
	// Line 516, Address: 0x1a46e4, Func Offset: 0x1e4
	// Line 517, Address: 0x1a46f4, Func Offset: 0x1f4
	// Line 518, Address: 0x1a46fc, Func Offset: 0x1fc
	// Line 519, Address: 0x1a4738, Func Offset: 0x238
	// Line 520, Address: 0x1a4740, Func Offset: 0x240
	// Line 524, Address: 0x1a4774, Func Offset: 0x274
	// Line 523, Address: 0x1a4778, Func Offset: 0x278
	// Line 524, Address: 0x1a4780, Func Offset: 0x280
	// Line 523, Address: 0x1a4794, Func Offset: 0x294
	// Line 524, Address: 0x1a4798, Func Offset: 0x298
	// Line 523, Address: 0x1a47a4, Func Offset: 0x2a4
	// Line 524, Address: 0x1a47a8, Func Offset: 0x2a8
	// Line 526, Address: 0x1a47ac, Func Offset: 0x2ac
	// Line 527, Address: 0x1a47b4, Func Offset: 0x2b4
	// Line 528, Address: 0x1a47f0, Func Offset: 0x2f0
	// Line 529, Address: 0x1a47f8, Func Offset: 0x2f8
	// Line 532, Address: 0x1a482c, Func Offset: 0x32c
	// Line 533, Address: 0x1a4834, Func Offset: 0x334
	// Line 534, Address: 0x1a4870, Func Offset: 0x370
	// Line 535, Address: 0x1a4878, Func Offset: 0x378
	// Line 539, Address: 0x1a48ac, Func Offset: 0x3ac
	// Line 538, Address: 0x1a48b0, Func Offset: 0x3b0
	// Line 539, Address: 0x1a48b8, Func Offset: 0x3b8
	// Line 538, Address: 0x1a48cc, Func Offset: 0x3cc
	// Line 539, Address: 0x1a48d0, Func Offset: 0x3d0
	// Line 538, Address: 0x1a48dc, Func Offset: 0x3dc
	// Line 539, Address: 0x1a48e0, Func Offset: 0x3e0
	// Line 542, Address: 0x1a48e4, Func Offset: 0x3e4
	// Line 543, Address: 0x1a48ec, Func Offset: 0x3ec
	// Line 544, Address: 0x1a4928, Func Offset: 0x428
	// Line 545, Address: 0x1a4930, Func Offset: 0x430
	// Line 547, Address: 0x1a4964, Func Offset: 0x464
	// Line 548, Address: 0x1a496c, Func Offset: 0x46c
	// Line 549, Address: 0x1a49a8, Func Offset: 0x4a8
	// Line 550, Address: 0x1a49b0, Func Offset: 0x4b0
	// Line 553, Address: 0x1a49e4, Func Offset: 0x4e4
	// Line 554, Address: 0x1a49e8, Func Offset: 0x4e8
	// Line 561, Address: 0x1a49f8, Func Offset: 0x4f8
	// Line 564, Address: 0x1a4a00, Func Offset: 0x500
	// Line 567, Address: 0x1a4a38, Func Offset: 0x538
	// Line 569, Address: 0x1a4a3c, Func Offset: 0x53c
	// Line 571, Address: 0x1a4a44, Func Offset: 0x544
	// Line 573, Address: 0x1a4a50, Func Offset: 0x550
	// Line 576, Address: 0x1a4a58, Func Offset: 0x558
	// Line 578, Address: 0x1a4a64, Func Offset: 0x564
	// Line 579, Address: 0x1a4a68, Func Offset: 0x568
	// Line 578, Address: 0x1a4a6c, Func Offset: 0x56c
	// Line 579, Address: 0x1a4a70, Func Offset: 0x570
	// Line 578, Address: 0x1a4a74, Func Offset: 0x574
	// Line 579, Address: 0x1a4a7c, Func Offset: 0x57c
	// Line 581, Address: 0x1a4a8c, Func Offset: 0x58c
	// Line 582, Address: 0x1a4aa8, Func Offset: 0x5a8
	// Line 584, Address: 0x1a4ab8, Func Offset: 0x5b8
	// Line 585, Address: 0x1a4ac0, Func Offset: 0x5c0
	// Line 587, Address: 0x1a4acc, Func Offset: 0x5cc
	// Line 588, Address: 0x1a4ad0, Func Offset: 0x5d0
	// Line 587, Address: 0x1a4ad4, Func Offset: 0x5d4
	// Line 588, Address: 0x1a4ad8, Func Offset: 0x5d8
	// Line 587, Address: 0x1a4adc, Func Offset: 0x5dc
	// Line 588, Address: 0x1a4ae4, Func Offset: 0x5e4
	// Line 590, Address: 0x1a4af4, Func Offset: 0x5f4
	// Line 591, Address: 0x1a4b10, Func Offset: 0x610
	// Line 593, Address: 0x1a4b20, Func Offset: 0x620
	// Line 594, Address: 0x1a4b28, Func Offset: 0x628
	// Line 596, Address: 0x1a4b34, Func Offset: 0x634
	// Line 597, Address: 0x1a4b38, Func Offset: 0x638
	// Line 596, Address: 0x1a4b3c, Func Offset: 0x63c
	// Line 597, Address: 0x1a4b40, Func Offset: 0x640
	// Line 596, Address: 0x1a4b44, Func Offset: 0x644
	// Line 597, Address: 0x1a4b4c, Func Offset: 0x64c
	// Line 599, Address: 0x1a4b5c, Func Offset: 0x65c
	// Line 600, Address: 0x1a4b78, Func Offset: 0x678
	// Line 602, Address: 0x1a4b8c, Func Offset: 0x68c
	// Line 606, Address: 0x1a4b90, Func Offset: 0x690
	// Line 607, Address: 0x1a4b98, Func Offset: 0x698
	// Line 609, Address: 0x1a4bb8, Func Offset: 0x6b8
	// Line 610, Address: 0x1a4bc0, Func Offset: 0x6c0
	// Line 614, Address: 0x1a4bdc, Func Offset: 0x6dc
	// Line 615, Address: 0x1a4be0, Func Offset: 0x6e0
	// Line 618, Address: 0x1a4bf0, Func Offset: 0x6f0
	// Func End, Address: 0x1a4c10, Func Offset: 0x710
}

// zSurfaceSetup__FP8xSurface
// Start address: 0x1a4c10
void zSurfaceSetup(xSurface* s)
{
	int32 i;
	zSurfaceProps* pp;
	// Line 434, Address: 0x1a4c10, Func Offset: 0
	// Line 437, Address: 0x1a4c20, Func Offset: 0x10
	// Line 439, Address: 0x1a4c24, Func Offset: 0x14
	// Line 444, Address: 0x1a4c2c, Func Offset: 0x1c
	// Line 446, Address: 0x1a4c30, Func Offset: 0x20
	// Line 448, Address: 0x1a4c3c, Func Offset: 0x2c
	// Line 457, Address: 0x1a4c48, Func Offset: 0x38
	// Line 460, Address: 0x1a4c58, Func Offset: 0x48
	// Func End, Address: 0x1a4c6c, Func Offset: 0x5c
}

// zSurfaceLoad__FP8xSurfaceP7xSerial
// Start address: 0x1a4c70
void zSurfaceLoad(xSurface* ent, xSerial* s)
{
	// Line 427, Address: 0x1a4c70, Func Offset: 0
	// Func End, Address: 0x1a4c78, Func Offset: 0x8
}

// zSurfaceSave__FP8xSurfaceP7xSerial
// Start address: 0x1a4c80
void zSurfaceSave(xSurface* ent, xSerial* s)
{
	// Line 408, Address: 0x1a4c80, Func Offset: 0
	// Func End, Address: 0x1a4c88, Func Offset: 0x8
}

// zSurfaceGetDamping__FPC8xSurfacef
// Start address: 0x1a4c90
float32 zSurfaceGetDamping(xSurface* surf, float32 min_vel)
{
	// Line 373, Address: 0x1a4c90, Func Offset: 0
	// Func End, Address: 0x1a4c98, Func Offset: 0x8
}

// zSurfaceGetSlickness__FPC8xSurface
// Start address: 0x1a4ca0
int32 zSurfaceGetSlickness(xSurface* surf)
{
	// Line 366, Address: 0x1a4ca0, Func Offset: 0
	// Line 367, Address: 0x1a4cc0, Func Offset: 0x20
	// Func End, Address: 0x1a4cc8, Func Offset: 0x28
}

// zSurfaceGetFriction__FPC8xSurface
// Start address: 0x1a4cd0
float32 zSurfaceGetFriction(xSurface* surf)
{
	// Line 360, Address: 0x1a4cd0, Func Offset: 0
	// Func End, Address: 0x1a4cd8, Func Offset: 0x8
}

// zSurfaceGetStandOn__FPC8xSurface
// Start address: 0x1a4ce0
uint32 zSurfaceGetStandOn(xSurface* surf)
{
	// Line 349, Address: 0x1a4ce0, Func Offset: 0
	// Line 353, Address: 0x1a4d04, Func Offset: 0x24
	// Func End, Address: 0x1a4d0c, Func Offset: 0x2c
}

// zSurfaceGetSticky__FPC8xSurface
// Start address: 0x1a4d10
uint32 zSurfaceGetSticky(xSurface* surf)
{
	// Line 336, Address: 0x1a4d10, Func Offset: 0
	// Line 340, Address: 0x1a4d28, Func Offset: 0x18
	// Func End, Address: 0x1a4d30, Func Offset: 0x20
}

// zSurfaceGetDamagePassthrough__FPC8xSurface
// Start address: 0x1a4d30
uint32 zSurfaceGetDamagePassthrough(xSurface* surf)
{
	// Line 323, Address: 0x1a4d30, Func Offset: 0
	// Line 327, Address: 0x1a4d48, Func Offset: 0x18
	// Func End, Address: 0x1a4d50, Func Offset: 0x20
}

// zSurfaceGetDamageType__FPC8xSurface
// Start address: 0x1a4d50
int32 zSurfaceGetDamageType(xSurface* surf)
{
	// Line 310, Address: 0x1a4d50, Func Offset: 0
	// Line 314, Address: 0x1a4d68, Func Offset: 0x18
	// Func End, Address: 0x1a4d70, Func Offset: 0x20
}

// zSurfaceGetMatchOrient__FPC8xSurface
// Start address: 0x1a4d70
uint32 zSurfaceGetMatchOrient(xSurface* surf)
{
	// Line 297, Address: 0x1a4d70, Func Offset: 0
	// Line 301, Address: 0x1a4d88, Func Offset: 0x18
	// Func End, Address: 0x1a4d90, Func Offset: 0x20
}

// zSurfaceGetSlideStopAngle__FPC8xSurface
// Start address: 0x1a4d90
float32 zSurfaceGetSlideStopAngle(xSurface* surf)
{
	// Line 284, Address: 0x1a4d90, Func Offset: 0
	// Line 288, Address: 0x1a4e0c, Func Offset: 0x7c
	// Func End, Address: 0x1a4e14, Func Offset: 0x84
}

// zSurfaceGetSlideStartAngle__FPC8xSurface
// Start address: 0x1a4e20
float32 zSurfaceGetSlideStartAngle(xSurface* surf)
{
	// Line 271, Address: 0x1a4e20, Func Offset: 0
	// Line 275, Address: 0x1a4e9c, Func Offset: 0x7c
	// Func End, Address: 0x1a4ea4, Func Offset: 0x84
}

// zSurfaceGetStep__FPC8xSurface
// Start address: 0x1a4eb0
uint32 zSurfaceGetStep(xSurface* surf)
{
	// Line 258, Address: 0x1a4eb0, Func Offset: 0
	// Line 262, Address: 0x1a4ec8, Func Offset: 0x18
	// Func End, Address: 0x1a4ed0, Func Offset: 0x20
}

// zSurfaceGetSlide__FPC8xSurface
// Start address: 0x1a4ed0
uint32 zSurfaceGetSlide(xSurface* surf)
{
	// Line 245, Address: 0x1a4ed0, Func Offset: 0
	// Line 249, Address: 0x1a4ee8, Func Offset: 0x18
	// Func End, Address: 0x1a4ef0, Func Offset: 0x20
}

// zSurfaceGetSurface__FPC8_xCollis
// Start address: 0x1a4ef0
xSurface* zSurfaceGetSurface(_xCollis* coll)
{
	xSurface* surf;
	// Line 219, Address: 0x1a4ef0, Func Offset: 0
	// Line 222, Address: 0x1a4ef8, Func Offset: 0x8
	// Line 223, Address: 0x1a4f08, Func Offset: 0x18
	// Line 226, Address: 0x1a4f14, Func Offset: 0x24
	// Line 227, Address: 0x1a4f1c, Func Offset: 0x2c
	// Line 231, Address: 0x1a4f24, Func Offset: 0x34
	// Line 236, Address: 0x1a4f38, Func Offset: 0x48
	// Func End, Address: 0x1a4f44, Func Offset: 0x54
}

// zSurfaceGetSurface__FUi
// Start address: 0x1a4f50
xSurface* zSurfaceGetSurface(uint32 mat_id)
{
	xSurface* surf;
	uint16 j;
	uint16 nsurfs;
	zMaterialMapEntry* entry;
	uint16 i;
	zMaterialMapAsset* mapper;
	int32 map;
	// Line 184, Address: 0x1a4f50, Func Offset: 0
	// Line 185, Address: 0x1a4f80, Func Offset: 0x30
	// Line 187, Address: 0x1a4f90, Func Offset: 0x40
	// Line 189, Address: 0x1a4f94, Func Offset: 0x44
	// Line 193, Address: 0x1a4f9c, Func Offset: 0x4c
	// Line 195, Address: 0x1a4fa8, Func Offset: 0x58
	// Line 196, Address: 0x1a4fb4, Func Offset: 0x64
	// Line 202, Address: 0x1a4fc0, Func Offset: 0x70
	// Line 203, Address: 0x1a4fc8, Func Offset: 0x78
	// Line 204, Address: 0x1a4fd0, Func Offset: 0x80
	// Line 205, Address: 0x1a4fe0, Func Offset: 0x90
	// Line 207, Address: 0x1a4fe8, Func Offset: 0x98
	// Line 210, Address: 0x1a5000, Func Offset: 0xb0
	// Line 207, Address: 0x1a5004, Func Offset: 0xb4
	// Line 210, Address: 0x1a5008, Func Offset: 0xb8
	// Line 211, Address: 0x1a5024, Func Offset: 0xd4
	// Line 210, Address: 0x1a5028, Func Offset: 0xd8
	// Line 212, Address: 0x1a502c, Func Offset: 0xdc
	// Line 215, Address: 0x1a5040, Func Offset: 0xf0
	// Line 216, Address: 0x1a5044, Func Offset: 0xf4
	// Func End, Address: 0x1a5074, Func Offset: 0x124
}

// zSurfaceExit__Fv
// Start address: 0x1a5080
void zSurfaceExit()
{
	// Line 168, Address: 0x1a5080, Func Offset: 0
	// Line 169, Address: 0x1a5088, Func Offset: 0x8
	// Line 171, Address: 0x1a5090, Func Offset: 0x10
	// Line 172, Address: 0x1a5094, Func Offset: 0x14
	// Func End, Address: 0x1a50a0, Func Offset: 0x20
}

// zSurfaceRegisterMapper__FUi
// Start address: 0x1a50a0
void zSurfaceRegisterMapper(uint32 assetId)
{
	// Line 140, Address: 0x1a50a0, Func Offset: 0
	// Line 144, Address: 0x1a50ac, Func Offset: 0xc
	// Line 146, Address: 0x1a50c4, Func Offset: 0x24
	// Line 149, Address: 0x1a50e0, Func Offset: 0x40
	// Line 162, Address: 0x1a50ec, Func Offset: 0x4c
	// Line 165, Address: 0x1a50f8, Func Offset: 0x58
	// Func End, Address: 0x1a5108, Func Offset: 0x68
}

// zSurfaceInit__Fv
// Start address: 0x1a5110
void zSurfaceInit()
{
	int32 j;
	zSurfaceProps* moprops;
	xSurface* surf;
	zSurfAsset* asset;
	uint16 i;
	uint16 nsurfs;
	uint32 size;
	// Line 46, Address: 0x1a5110, Func Offset: 0
	// Line 48, Address: 0x1a512c, Func Offset: 0x1c
	// Line 46, Address: 0x1a5130, Func Offset: 0x20
	// Line 48, Address: 0x1a5134, Func Offset: 0x24
	// Line 50, Address: 0x1a5144, Func Offset: 0x34
	// Line 52, Address: 0x1a514c, Func Offset: 0x3c
	// Line 53, Address: 0x1a5154, Func Offset: 0x44
	// Line 56, Address: 0x1a517c, Func Offset: 0x6c
	// Line 58, Address: 0x1a5188, Func Offset: 0x78
	// Line 60, Address: 0x1a5190, Func Offset: 0x80
	// Line 63, Address: 0x1a5194, Func Offset: 0x84
	// Line 58, Address: 0x1a519c, Func Offset: 0x8c
	// Line 63, Address: 0x1a51a0, Func Offset: 0x90
	// Line 60, Address: 0x1a51a8, Func Offset: 0x98
	// Line 63, Address: 0x1a51ac, Func Offset: 0x9c
	// Line 68, Address: 0x1a51b8, Func Offset: 0xa8
	// Line 69, Address: 0x1a51c8, Func Offset: 0xb8
	// Line 70, Address: 0x1a51d4, Func Offset: 0xc4
	// Line 72, Address: 0x1a51dc, Func Offset: 0xcc
	// Line 74, Address: 0x1a51e0, Func Offset: 0xd0
	// Line 76, Address: 0x1a51ec, Func Offset: 0xdc
	// Line 77, Address: 0x1a51f0, Func Offset: 0xe0
	// Line 81, Address: 0x1a51f8, Func Offset: 0xe8
	// Line 76, Address: 0x1a5204, Func Offset: 0xf4
	// Line 77, Address: 0x1a5208, Func Offset: 0xf8
	// Line 79, Address: 0x1a5214, Func Offset: 0x104
	// Line 80, Address: 0x1a521c, Func Offset: 0x10c
	// Line 81, Address: 0x1a5224, Func Offset: 0x114
	// Line 91, Address: 0x1a5228, Func Offset: 0x118
	// Line 94, Address: 0x1a522c, Func Offset: 0x11c
	// Line 91, Address: 0x1a5230, Func Offset: 0x120
	// Line 83, Address: 0x1a5234, Func Offset: 0x124
	// Line 84, Address: 0x1a523c, Func Offset: 0x12c
	// Line 85, Address: 0x1a5244, Func Offset: 0x134
	// Line 86, Address: 0x1a524c, Func Offset: 0x13c
	// Line 88, Address: 0x1a5250, Func Offset: 0x140
	// Line 91, Address: 0x1a5258, Func Offset: 0x148
	// Line 92, Address: 0x1a526c, Func Offset: 0x15c
	// Line 94, Address: 0x1a5270, Func Offset: 0x160
	// Line 95, Address: 0x1a5284, Func Offset: 0x174
	// Line 97, Address: 0x1a5288, Func Offset: 0x178
	// Line 103, Address: 0x1a528c, Func Offset: 0x17c
	// Line 102, Address: 0x1a5294, Func Offset: 0x184
	// Line 97, Address: 0x1a529c, Func Offset: 0x18c
	// Line 98, Address: 0x1a52a0, Func Offset: 0x190
	// Line 99, Address: 0x1a52a8, Func Offset: 0x198
	// Line 100, Address: 0x1a52c0, Func Offset: 0x1b0
	// Line 101, Address: 0x1a52d8, Func Offset: 0x1c8
	// Line 102, Address: 0x1a52f0, Func Offset: 0x1e0
	// Line 103, Address: 0x1a530c, Func Offset: 0x1fc
	// Line 104, Address: 0x1a5314, Func Offset: 0x204
	// Line 103, Address: 0x1a5318, Func Offset: 0x208
	// Line 104, Address: 0x1a531c, Func Offset: 0x20c
	// Line 105, Address: 0x1a5330, Func Offset: 0x220
	// Line 106, Address: 0x1a5338, Func Offset: 0x228
	// Line 110, Address: 0x1a533c, Func Offset: 0x22c
	// Line 112, Address: 0x1a538c, Func Offset: 0x27c
	// Func End, Address: 0x1a53b4, Func Offset: 0x2a4
}

