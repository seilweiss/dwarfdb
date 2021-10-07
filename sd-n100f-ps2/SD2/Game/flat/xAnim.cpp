typedef struct xAnimEffect;
typedef struct RxPipelineNodeParam;
typedef struct xAnimTransition;
typedef struct xAnimFile;
typedef struct xAnimState;
typedef struct RxPipelineNodeTopSortData;
typedef struct RwObjectHasFrame;
typedef struct xAnimPlay;
typedef struct xAnimSingle;
typedef struct _reent;
typedef struct RxNodeDefinition;
typedef struct _xQuat;
typedef struct _Bigint;
typedef struct RwMatrixTag;
typedef struct RxPipelineCluster;
typedef struct xAnimActiveEffect;
typedef struct xAnimTable;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct rxHeapBlockHeader;
typedef struct RpGeometry;
typedef struct RwLLLink;
typedef struct RxPipelineNode;
typedef struct rxHeapFreeBlock;
typedef struct _xVec3;
typedef struct RpMaterialList;
typedef struct RpAtomic;
typedef struct RwRaster;
typedef struct tm;
typedef struct xModelPool;
typedef struct xAnimTransitionList;
typedef struct xMemPool;
typedef struct RxClusterDefinition;
typedef struct RpMorphTarget;
typedef enum RxClusterValidityReq;
typedef struct RxPipelineRequiresCluster;
typedef struct RpMaterial;
typedef struct RxPipeline;
typedef struct xModelInstance;
typedef struct _class_0;
typedef struct RwResEntry;
typedef struct _class_1;
typedef struct RwV3d;
typedef enum RwTextureFilterMode;
typedef struct RwTexDictionary;
typedef struct RwObject;
typedef enum RxClusterValid;
typedef struct RpClump;
typedef struct _glue;
typedef struct RwRGBA;
typedef struct RpTriangle;
typedef struct RwLinkList;
typedef struct RxPacket;
typedef struct __sFILE;
typedef struct RwTexture;
typedef struct rxReq;
typedef struct _class_2;
typedef struct RwTexCoords;
typedef struct RxOutputSpec;
typedef struct RpMeshHeader;
typedef enum RxClusterForcePresent;
typedef struct RxClusterRef;
typedef enum RxNodeDefEditable;
typedef struct RxIoSpec;
typedef struct RpInterpolator;
typedef struct RxNodeMethods;
typedef struct _atexit;
typedef struct RwSurfaceProperties;
typedef struct RxHeap;
typedef struct RxCluster;
typedef struct RwSphere;
typedef enum rxEmbeddedPacketState;
typedef enum RwTextureAddressMode;
typedef struct __sbuf;

typedef int32(*type_0)(RxPipelineNode*, RxPipelineNodeParam*);
typedef uint32(*type_1)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_2)(_reent*);
typedef uint32(*type_3)(xAnimTransition*, xAnimSingle*, void*);
typedef RwObjectHasFrame*(*type_4)(RwObjectHasFrame*);
typedef RpClump*(*type_5)(RpClump*, void*);
typedef int32(*type_6)(RxNodeDefinition*);
typedef void(*type_8)(RxNodeDefinition*);
typedef int32(*type_10)(RxPipelineNode*);
typedef void(*type_12)(RxPipelineNode*);
typedef RpAtomic*(*type_13)(RpAtomic*);
typedef void(*type_15)(xMemPool*, void*);
typedef int32(*type_16)(RxPipelineNode*, RxPipeline*);
typedef int32(*type_17)(void*, int8*, int32);
typedef uint32(*type_20)(RxPipelineNode*, uint32, uint32, void*);
typedef int32(*type_22)(void*, int8*, int32);
typedef void(*type_23)(xMemPool*, void*);
typedef long32(*type_27)(void*, long32, int32);
typedef void(*type_29)(RwResEntry*);
typedef int32(*type_32)(void*);
typedef void(*type_57)(int32);
typedef void(*type_62)();

typedef _xVec3 type_7[2];
typedef _xQuat type_9[2];
typedef float32 type_11[2];
typedef float32 type_14[2];
typedef RxCluster type_18[1];
typedef int8 type_19[26];
typedef uint32 type_21[4];
typedef float32 type_24[4];
typedef uint16 type_25[3];
typedef float32 type_26[4];
typedef float32 type_28[4];
typedef float32 type_30[4];
typedef float32 type_31[4];
typedef uint8* type_33[30];
typedef float32 type_34[4];
typedef float32 type_35[4];
typedef uint32 type_36[30];
typedef int8 type_37[32];
typedef float32 type_38[4];
typedef int8 type_39[32];
typedef float32 type_40[4];
typedef float32 type_41[4];
typedef uint8 type_42[3];
typedef float32 type_43[4];
typedef uint8 type_44[2];
typedef uint8 type_45[1];
typedef float32 type_46[4];
typedef float32 type_47[4];
typedef float32 type_48[2];
typedef uint32 type_49[1];
typedef _xVec3 type_50[2];
typedef RwTexCoords* type_51[8];
typedef _xVec3 type_52[2];
typedef _xQuat type_53[2];
typedef _xVec3 type_54[2];
typedef _xQuat type_55[2];
typedef _xQuat type_56[2];
typedef float32 type_58[2];
typedef float32 type_59[2];
typedef __sFILE type_60[3];
typedef uint32 type_61[2];
typedef _xVec3 type_63[2];
typedef void(*type_64)()[32];
typedef uint32 type_65[2];
typedef _xVec3 type_66[2];
typedef _xQuat type_67[2];
typedef int8 type_68[25];
typedef _xQuat type_69[2];
typedef float32 type_70[2];
typedef float32 type_71[2];

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
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

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
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

struct _reent
{
	int32 _errno;
	__sFILE* _stdin;
	__sFILE* _stdout;
	__sFILE* _stderr;
	int32 _inc;
	int8 _emergency[25];
	int32 _current_category;
	int8* _current_locale;
	int32 __sdidinit;
	void(*__cleanup)(_reent*);
	_Bigint* _result;
	int32 _result_k;
	_Bigint* _p5s;
	_Bigint** _freelist;
	int32 _cvtlen;
	int8* _cvtbuf;
	_class_0 _new;
	_atexit* _atexit;
	_atexit _atexit0;
	void(*_sig_func)(int32);
	_glue __sglue;
	__sFILE __sf[3];
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

struct _xQuat
{
	_xVec3 v;
	float32 s;
};

struct _Bigint
{
	_Bigint* _next;
	int32 _k;
	int32 _maxwds;
	int32 _sign;
	int32 _wds;
	uint32 _x[1];
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

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
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

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
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

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
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

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
};

struct _xVec3
{
	float32 x;
	float32 y;
	float32 z;
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

struct tm
{
	int32 tm_sec;
	int32 tm_min;
	int32 tm_hour;
	int32 tm_mday;
	int32 tm_mon;
	int32 tm_year;
	int32 tm_wday;
	int32 tm_yday;
	int32 tm_isdst;
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
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

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
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

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	int16 refCount;
	int16 pad;
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

struct _class_0
{
	union
	{
		_class_1 _reent;
		_class_2 _unused;
	};
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
};

struct _class_1
{
	uint32 _unused_rand;
	int8* _strtok_last;
	int8 _asctime_buf[26];
	tm _localtime_buf;
	int32 _gamma_signgam;
	uint64 _rand_next;
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
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

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
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

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLLLink inWorldLink;
	RpClump*(*callback)(RpClump*, void*);
	uint16 renderFrame;
	uint16 pad;
};

struct _glue
{
	_glue* _next;
	int32 _niobs;
	__sFILE* _iobs;
};

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
};

struct RwLinkList
{
	RwLLLink link;
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

struct __sFILE
{
	uint8* _p;
	int32 _r;
	int32 _w;
	int16 _flags;
	int16 _file;
	__sbuf _bf;
	int32 _lbfsize;
	void* _cookie;
	int32(*_read)(void*, int8*, int32);
	int32(*_write)(void*, int8*, int32);
	long32(*_seek)(void*, long32, int32);
	int32(*_close)(void*);
	__sbuf _ub;
	uint8* _up;
	int32 _ur;
	uint8 _ubuf[3];
	uint8 _nbuf[1];
	__sbuf _lb;
	int32 _blksize;
	int32 _offset;
	_reent* _data;
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

struct rxReq
{
};

struct _class_2
{
	uint8* _nextf[30];
	uint32 _nmalloc[30];
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

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
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

struct _atexit
{
	_atexit* _next;
	int32 _ind;
	void(*_fns)()[32];
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

struct __sbuf
{
	uint8* _base;
	int32 _size;
};

xMemPool sxAnimTempTranPool;
uint32 gxAnimUseGrowAlloc;
void(*xAnimPoolCB)(xMemPool*, void*);
uint32 gActiveHeap;
uint8* giAnimScratch;
_reent* _impure_ptr;

void xAnimPoolFree(xAnimPlay* play);
xAnimPlay* xAnimPoolAlloc(xMemPool* pool, void* object, xAnimTable* table, xModelInstance* modelInst);
void xAnimPoolInit(xMemPool* pool, uint32 count, uint32 singles, uint32 blendFlags, uint32 effectMax);
void xAnimPoolCB(xMemPool* pool, void* data);
void xAnimPlayEval(xAnimPlay* play);
void xAnimPlayUpdate(xAnimPlay* play, float32 timeDelta);
void xAnimPlayStartTransition(xAnimPlay* play, xAnimTransition* transition);
void xAnimPlayChooseTransition(xAnimPlay* play);
void xAnimPlaySetup(xAnimPlay* play, void* object, xAnimTable* table, xModelInstance* modelInst);
void SingleUpdate(xAnimSingle* single, float32 timeDelta, _xVec3* tran, _xQuat* quat, float32* yaw);
void xAnimPlaySetState(xAnimSingle* single, xAnimState* state, float32 startTime);
void LoopUpdate(xAnimSingle* single, _xVec3* tran, _xQuat* quat, float32* yaw);
void CalcLastAndDeltas(xAnimSingle* single, _xVec3* tran, _xQuat* quat, float32* yaw, uint32 lastOnly);
void EffectSingleStop(xAnimSingle* single);
void EffectSingleLoop(xAnimSingle* single);
void EffectSingleRun(xAnimSingle* single);
void EffectSingleDuration(xAnimSingle* single);
void EffectSingleStart(xAnimSingle* single);
xAnimState* xAnimTableGetState(xAnimTable* table, int8* name);
void xAnimTableRemoveEffectByCB(xAnimTable* table, uint32(*callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*));
xAnimState* xAnimTableGetStateID(xAnimTable* table, uint32 ID);
xAnimState* xAnimTableAddFileID(xAnimTable* table, xAnimFile* file, uint32 stateID);
void xAnimTableAddFile(xAnimTable* table, xAnimFile* file, int8* states);
xAnimTransition* xAnimTableNewTransition(xAnimTable* table, int8* source, int8* dest, uint32(*conditional)(xAnimTransition*, xAnimSingle*, void*), uint32(*callback)(xAnimTransition*, xAnimSingle*, void*), uint32 flags, uint32 userFlags, float32 srcTime, float32 destTime, uint16 priority, uint16 queuePriority, float32 blendRecip, uint16* blendOffset);
void xAnimTableAddTransition(xAnimTable* table, xAnimTransition* tran, int8* source);
xAnimState* xAnimTableNewState(xAnimTable* table, int8* name, uint32 flags, uint32 userFlags, float32 speed, float32* boneBlend, float32* timeSnap, float32 fadeRecip, uint16* fadeOffset);
xAnimTable* xAnimTableNew(int8* name, xAnimTable** linkedList);
xAnimEffect* xAnimStateNewEffect(xAnimState* state, uint32 flags, float32 startTime, float32 endTime, uint32(*callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*), uint32 userDataSize);
void xAnimFileEval(xAnimFile* data, float32 time, float32* bilinear, uint32 flags, _xVec3* tran, _xQuat* quat, float32* yaw);
void xAnimFileSetPoses(xAnimFile* data, void* startPose, float32 startTime, void* endPose, float32 endTime);
void xAnimFileSetTime(xAnimFile* data, float32 duration, float32 timeOffset);
void xAnimFileSetPhysics(xAnimFile* data, void* rawData);
xAnimFile* xAnimFileNew(void* rawData, int8* name, uint32 flags, xAnimFile** linkedList);
xAnimFile* xAnimFileNewBilinear(void** rawData, int8* name, uint32 flags, xAnimFile** linkedList, uint32 numX, uint32 numY);
void CalcPhys(xAnimFile* af);
void CalcPhysFromKeys(xAnimFile* af, float32* rootStart, float32* rootEnd, float32* physStart, float32* physEnd);
xAnimTransition* xAnimTempTransitionAlloc();
void xAnimTempTransitionInit(uint32 count);
void xAnimInit();

// xAnimPoolFree__FP9xAnimPlay
// Start address: 0x116f80
void xAnimPoolFree(xAnimPlay* play)
{
	uint32 i;
	// Line 2073, Address: 0x116f80, Func Offset: 0
	// Line 2077, Address: 0x116f98, Func Offset: 0x18
	// Line 2078, Address: 0x116fa4, Func Offset: 0x24
	// Line 2079, Address: 0x116fb0, Func Offset: 0x30
	// Line 2080, Address: 0x116fc4, Func Offset: 0x44
	// Line 2081, Address: 0x116fcc, Func Offset: 0x4c
	// Line 2080, Address: 0x116fd0, Func Offset: 0x50
	// Line 2082, Address: 0x116fd4, Func Offset: 0x54
	// Line 2084, Address: 0x116fe8, Func Offset: 0x68
	// Line 2085, Address: 0x116ff4, Func Offset: 0x74
	// Func End, Address: 0x11700c, Func Offset: 0x8c
}

// xAnimPoolAlloc__FP8xMemPoolPvP10xAnimTableP14xModelInstance
// Start address: 0x117010
xAnimPlay* xAnimPoolAlloc(xMemPool* pool, void* object, xAnimTable* table, xModelInstance* modelInst)
{
	xAnimPlay* play;
	// Line 2066, Address: 0x117010, Func Offset: 0
	// Line 2067, Address: 0x117030, Func Offset: 0x20
	// Line 2068, Address: 0x11703c, Func Offset: 0x2c
	// Line 2069, Address: 0x117050, Func Offset: 0x40
	// Line 2070, Address: 0x117054, Func Offset: 0x44
	// Func End, Address: 0x117070, Func Offset: 0x60
}

// xAnimPoolInit__FP8xMemPoolUiUiUiUi
// Start address: 0x117070
void xAnimPoolInit(xMemPool* pool, uint32 count, uint32 singles, uint32 blendFlags, uint32 effectMax)
{
	xAnimActiveEffect* curract;
	xAnimSingle* currsingle;
	xAnimPlay* play;
	void* buffer;
	uint32 i;
	uint32 size;
	// Line 1995, Address: 0x117070, Func Offset: 0
	// Line 1999, Address: 0x117090, Func Offset: 0x20
	// Line 2007, Address: 0x11709c, Func Offset: 0x2c
	// Line 1995, Address: 0x117158, Func Offset: 0xe8
	// Line 2007, Address: 0x11715c, Func Offset: 0xec
	// Line 2008, Address: 0x117194, Func Offset: 0x124
	// Line 2007, Address: 0x117198, Func Offset: 0x128
	// Line 2008, Address: 0x11719c, Func Offset: 0x12c
	// Line 2019, Address: 0x1171a4, Func Offset: 0x134
	// Line 2017, Address: 0x1171ac, Func Offset: 0x13c
	// Line 2014, Address: 0x1171b0, Func Offset: 0x140
	// Line 2018, Address: 0x1171b4, Func Offset: 0x144
	// Line 2019, Address: 0x1171b8, Func Offset: 0x148
	// Line 2022, Address: 0x1171bc, Func Offset: 0x14c
	// Line 2019, Address: 0x1171c0, Func Offset: 0x150
	// Line 2022, Address: 0x1171c4, Func Offset: 0x154
	// Line 2023, Address: 0x1171d0, Func Offset: 0x160
	// Line 2024, Address: 0x1171e4, Func Offset: 0x174
	// Line 2025, Address: 0x1171f0, Func Offset: 0x180
	// Line 2027, Address: 0x1171f4, Func Offset: 0x184
	// Line 2028, Address: 0x1171fc, Func Offset: 0x18c
	// Line 2030, Address: 0x117208, Func Offset: 0x198
	// Line 2035, Address: 0x117218, Func Offset: 0x1a8
	// Line 2037, Address: 0x117224, Func Offset: 0x1b4
	// Line 2039, Address: 0x11722c, Func Offset: 0x1bc
	// Line 2041, Address: 0x117238, Func Offset: 0x1c8
	// Line 2042, Address: 0x117240, Func Offset: 0x1d0
	// Line 2044, Address: 0x117244, Func Offset: 0x1d4
	// Line 2045, Address: 0x11724c, Func Offset: 0x1dc
	// Line 2047, Address: 0x117250, Func Offset: 0x1e0
	// Line 2048, Address: 0x117254, Func Offset: 0x1e4
	// Line 2049, Address: 0x117264, Func Offset: 0x1f4
	// Line 2055, Address: 0x117278, Func Offset: 0x208
	// Line 2060, Address: 0x11727c, Func Offset: 0x20c
	// Line 2062, Address: 0x1172a4, Func Offset: 0x234
	// Func End, Address: 0x1172cc, Func Offset: 0x25c
}

// xAnimPoolCB__FP8xMemPoolPv
// Start address: 0x1172d0
void xAnimPoolCB(xMemPool* pool, void* data)
{
	xAnimActiveEffect* curract;
	xAnimSingle* currsingle;
	xAnimSingle* clonesingle;
	xAnimPlay* play;
	xAnimPlay* clone;
	int32 i;
	// Line 1930, Address: 0x1172d0, Func Offset: 0
	// Line 1932, Address: 0x1172d4, Func Offset: 0x4
	// Line 1940, Address: 0x1172d8, Func Offset: 0x8
	// Line 1935, Address: 0x1172e0, Func Offset: 0x10
	// Line 1936, Address: 0x1172e8, Func Offset: 0x18
	// Line 1937, Address: 0x1172ec, Func Offset: 0x1c
	// Line 1940, Address: 0x1172fc, Func Offset: 0x2c
	// Line 1941, Address: 0x117304, Func Offset: 0x34
	// Line 1942, Address: 0x117310, Func Offset: 0x40
	// Line 1943, Address: 0x117324, Func Offset: 0x54
	// Line 1944, Address: 0x117330, Func Offset: 0x60
	// Line 1945, Address: 0x117334, Func Offset: 0x64
	// Line 1947, Address: 0x117338, Func Offset: 0x68
	// Line 1948, Address: 0x117340, Func Offset: 0x70
	// Line 1949, Address: 0x11734c, Func Offset: 0x7c
	// Line 1948, Address: 0x117350, Func Offset: 0x80
	// Line 1950, Address: 0x117354, Func Offset: 0x84
	// Line 1955, Address: 0x117368, Func Offset: 0x98
	// Line 1957, Address: 0x117370, Func Offset: 0xa0
	// Line 1958, Address: 0x117374, Func Offset: 0xa4
	// Line 1957, Address: 0x117378, Func Offset: 0xa8
	// Line 1960, Address: 0x11737c, Func Offset: 0xac
	// Line 1961, Address: 0x117388, Func Offset: 0xb8
	// Line 1962, Address: 0x117390, Func Offset: 0xc0
	// Line 1963, Address: 0x11739c, Func Offset: 0xcc
	// Line 1964, Address: 0x1173a0, Func Offset: 0xd0
	// Line 1965, Address: 0x1173a8, Func Offset: 0xd8
	// Line 1966, Address: 0x1173b0, Func Offset: 0xe0
	// Line 1967, Address: 0x1173b4, Func Offset: 0xe4
	// Line 1970, Address: 0x1173b8, Func Offset: 0xe8
	// Line 1971, Address: 0x1173bc, Func Offset: 0xec
	// Line 1972, Address: 0x1173cc, Func Offset: 0xfc
	// Line 1979, Address: 0x1173e0, Func Offset: 0x110
	// Func End, Address: 0x1173e8, Func Offset: 0x118
}

// xAnimPlayEval__FP9xAnimPlay
// Start address: 0x1173f0
void xAnimPlayEval(xAnimPlay* play)
{
	uint16* blendO;
	float32 blendR;
	float32 blendF;
	xAnimSingle* si;
	_xVec3* tranblend;
	_xQuat* quatblend;
	_xVec3* tranresult;
	_xQuat* quatresult;
	uint32 bone;
	uint32 i;
	// Line 1844, Address: 0x1173f0, Func Offset: 0
	// Line 1850, Address: 0x117424, Func Offset: 0x34
	// Line 1846, Address: 0x117428, Func Offset: 0x38
	// Line 1850, Address: 0x117438, Func Offset: 0x48
	// Line 1846, Address: 0x11743c, Func Offset: 0x4c
	// Line 1847, Address: 0x117440, Func Offset: 0x50
	// Line 1850, Address: 0x117444, Func Offset: 0x54
	// Line 1855, Address: 0x11744c, Func Offset: 0x5c
	// Line 1852, Address: 0x117450, Func Offset: 0x60
	// Line 1855, Address: 0x117454, Func Offset: 0x64
	// Line 1858, Address: 0x117518, Func Offset: 0x128
	// Line 1859, Address: 0x11752c, Func Offset: 0x13c
	// Line 1860, Address: 0x117538, Func Offset: 0x148
	// Line 1862, Address: 0x117554, Func Offset: 0x164
	// Line 1863, Address: 0x117558, Func Offset: 0x168
	// Line 1864, Address: 0x11755c, Func Offset: 0x16c
	// Line 1866, Address: 0x117618, Func Offset: 0x228
	// Line 1867, Address: 0x11764c, Func Offset: 0x25c
	// Line 1870, Address: 0x117658, Func Offset: 0x268
	// Line 1871, Address: 0x11765c, Func Offset: 0x26c
	// Line 1872, Address: 0x117660, Func Offset: 0x270
	// Line 1875, Address: 0x117668, Func Offset: 0x278
	// Line 1874, Address: 0x11766c, Func Offset: 0x27c
	// Line 1875, Address: 0x117670, Func Offset: 0x280
	// Line 1876, Address: 0x117674, Func Offset: 0x284
	// Line 1878, Address: 0x11767c, Func Offset: 0x28c
	// Line 1880, Address: 0x117680, Func Offset: 0x290
	// Line 1883, Address: 0x117694, Func Offset: 0x2a4
	// Line 1887, Address: 0x1176d0, Func Offset: 0x2e0
	// Line 1888, Address: 0x1176e8, Func Offset: 0x2f8
	// Line 1891, Address: 0x1176f0, Func Offset: 0x300
	// Line 1888, Address: 0x1176fc, Func Offset: 0x30c
	// Line 1889, Address: 0x117704, Func Offset: 0x314
	// Line 1890, Address: 0x117714, Func Offset: 0x324
	// Line 1891, Address: 0x117720, Func Offset: 0x330
	// Line 1892, Address: 0x117738, Func Offset: 0x348
	// Line 1894, Address: 0x117750, Func Offset: 0x360
	// Line 1897, Address: 0x117758, Func Offset: 0x368
	// Line 1901, Address: 0x117794, Func Offset: 0x3a4
	// Line 1897, Address: 0x117798, Func Offset: 0x3a8
	// Line 1904, Address: 0x1177a4, Func Offset: 0x3b4
	// Line 1905, Address: 0x1177c4, Func Offset: 0x3d4
	// Line 1912, Address: 0x1177c8, Func Offset: 0x3d8
	// Line 1908, Address: 0x1177cc, Func Offset: 0x3dc
	// Line 1912, Address: 0x1177d0, Func Offset: 0x3e0
	// Line 1908, Address: 0x1177d4, Func Offset: 0x3e4
	// Line 1909, Address: 0x1177f4, Func Offset: 0x404
	// Line 1912, Address: 0x117814, Func Offset: 0x424
	// Line 1913, Address: 0x117828, Func Offset: 0x438
	// Func End, Address: 0x117860, Func Offset: 0x470
}

// xAnimPlayUpdate__FP9xAnimPlayf
// Start address: 0x117860
void xAnimPlayUpdate(xAnimPlay* play, float32 timeDelta)
{
	float32 tempYaw[2];
	_xQuat tempQuat[2];
	_xVec3 tempTranslate[2];
	uint32 i;
	// Line 1819, Address: 0x117860, Func Offset: 0
	// Line 1826, Address: 0x117880, Func Offset: 0x20
	// Line 1828, Address: 0x11788c, Func Offset: 0x2c
	// Line 1833, Address: 0x1178ac, Func Offset: 0x4c
	// Line 1834, Address: 0x1178b4, Func Offset: 0x54
	// Line 1839, Address: 0x11792c, Func Offset: 0xcc
	// Line 1834, Address: 0x117930, Func Offset: 0xd0
	// Line 1840, Address: 0x117934, Func Offset: 0xd4
	// Line 1841, Address: 0x117948, Func Offset: 0xe8
	// Func End, Address: 0x117964, Func Offset: 0x104
}

// xAnimPlayStartTransition__FP9xAnimPlayP15xAnimTransition
// Start address: 0x117970
void xAnimPlayStartTransition(xAnimPlay* play, xAnimTransition* transition)
{
	xAnimSingle* bl;
	xAnimSingle* single;
	// Line 1744, Address: 0x117970, Func Offset: 0
	// Line 1749, Address: 0x117984, Func Offset: 0x14
	// Line 1753, Address: 0x117988, Func Offset: 0x18
	// Line 1749, Address: 0x117994, Func Offset: 0x24
	// Line 1753, Address: 0x117998, Func Offset: 0x28
	// Line 1749, Address: 0x11799c, Func Offset: 0x2c
	// Line 1753, Address: 0x1179b4, Func Offset: 0x44
	// Line 1757, Address: 0x1179e0, Func Offset: 0x70
	// Line 1761, Address: 0x1179e8, Func Offset: 0x78
	// Line 1762, Address: 0x1179fc, Func Offset: 0x8c
	// Line 1763, Address: 0x117a04, Func Offset: 0x94
	// Line 1764, Address: 0x117a08, Func Offset: 0x98
	// Line 1767, Address: 0x117a0c, Func Offset: 0x9c
	// Line 1770, Address: 0x117a34, Func Offset: 0xc4
	// Line 1771, Address: 0x117a3c, Func Offset: 0xcc
	// Line 1773, Address: 0x117a60, Func Offset: 0xf0
	// Line 1775, Address: 0x117a68, Func Offset: 0xf8
	// Line 1778, Address: 0x117a74, Func Offset: 0x104
	// Line 1790, Address: 0x117ae8, Func Offset: 0x178
	// Line 1791, Address: 0x117afc, Func Offset: 0x18c
	// Line 1795, Address: 0x117b04, Func Offset: 0x194
	// Line 1796, Address: 0x117b28, Func Offset: 0x1b8
	// Line 1795, Address: 0x117b2c, Func Offset: 0x1bc
	// Line 1796, Address: 0x117b30, Func Offset: 0x1c0
	// Line 1800, Address: 0x117b38, Func Offset: 0x1c8
	// Line 1810, Address: 0x117be4, Func Offset: 0x274
	// Line 1800, Address: 0x117bf8, Func Offset: 0x288
	// Line 1803, Address: 0x117bfc, Func Offset: 0x28c
	// Line 1810, Address: 0x117c18, Func Offset: 0x2a8
	// Line 1811, Address: 0x117c20, Func Offset: 0x2b0
	// Line 1814, Address: 0x117c28, Func Offset: 0x2b8
	// Line 1815, Address: 0x117c34, Func Offset: 0x2c4
	// Line 1816, Address: 0x117c48, Func Offset: 0x2d8
	// Func End, Address: 0x117c60, Func Offset: 0x2f0
}

// xAnimPlayChooseTransition__FP9xAnimPlay
// Start address: 0x117c60
void xAnimPlayChooseTransition(xAnimPlay* play)
{
	uint32 index;
	xAnimTransitionList* curr;
	xAnimTransition** found;
	void* object;
	uint32 i;
	// Line 1709, Address: 0x117c60, Func Offset: 0
	// Line 1713, Address: 0x117c80, Func Offset: 0x20
	// Line 1711, Address: 0x117c84, Func Offset: 0x24
	// Line 1712, Address: 0x117c88, Func Offset: 0x28
	// Line 1713, Address: 0x117c90, Func Offset: 0x30
	// Line 1716, Address: 0x117ca0, Func Offset: 0x40
	// Line 1717, Address: 0x117cac, Func Offset: 0x4c
	// Line 1718, Address: 0x117cc0, Func Offset: 0x60
	// Line 1719, Address: 0x117cc4, Func Offset: 0x64
	// Line 1721, Address: 0x117cd0, Func Offset: 0x70
	// Line 1723, Address: 0x117cf0, Func Offset: 0x90
	// Line 1727, Address: 0x117d00, Func Offset: 0xa0
	// Line 1728, Address: 0x117d28, Func Offset: 0xc8
	// Line 1729, Address: 0x117d2c, Func Offset: 0xcc
	// Line 1730, Address: 0x117d30, Func Offset: 0xd0
	// Line 1731, Address: 0x117d34, Func Offset: 0xd4
	// Line 1732, Address: 0x117d3c, Func Offset: 0xdc
	// Line 1731, Address: 0x117d40, Func Offset: 0xe0
	// Line 1733, Address: 0x117d44, Func Offset: 0xe4
	// Line 1736, Address: 0x117d58, Func Offset: 0xf8
	// Line 1737, Address: 0x117d64, Func Offset: 0x104
	// Line 1738, Address: 0x117d98, Func Offset: 0x138
	// Line 1739, Address: 0x117da4, Func Offset: 0x144
	// Line 1738, Address: 0x117da8, Func Offset: 0x148
	// Line 1740, Address: 0x117db0, Func Offset: 0x150
	// Line 1741, Address: 0x117dc8, Func Offset: 0x168
	// Func End, Address: 0x117dec, Func Offset: 0x18c
}

// xAnimPlaySetup__FP9xAnimPlayPvP10xAnimTableP14xModelInstance
// Start address: 0x117df0
void xAnimPlaySetup(xAnimPlay* play, void* object, xAnimTable* table, xModelInstance* modelInst)
{
	int32 i;
	// Line 1673, Address: 0x117df0, Func Offset: 0
	// Line 1675, Address: 0x117e04, Func Offset: 0x14
	// Line 1678, Address: 0x117e14, Func Offset: 0x24
	// Line 1675, Address: 0x117e18, Func Offset: 0x28
	// Line 1676, Address: 0x117e1c, Func Offset: 0x2c
	// Line 1677, Address: 0x117e20, Func Offset: 0x30
	// Line 1678, Address: 0x117e24, Func Offset: 0x34
	// Line 1679, Address: 0x117e30, Func Offset: 0x40
	// Line 1680, Address: 0x117e40, Func Offset: 0x50
	// Line 1681, Address: 0x117e44, Func Offset: 0x54
	// Line 1684, Address: 0x117e48, Func Offset: 0x58
	// Line 1685, Address: 0x117e4c, Func Offset: 0x5c
	// Line 1689, Address: 0x117e58, Func Offset: 0x68
	// Line 1690, Address: 0x117e64, Func Offset: 0x74
	// Line 1694, Address: 0x117e74, Func Offset: 0x84
	// Line 1696, Address: 0x117e7c, Func Offset: 0x8c
	// Line 1699, Address: 0x117e9c, Func Offset: 0xac
	// Line 1700, Address: 0x117ea8, Func Offset: 0xb8
	// Line 1701, Address: 0x117eb4, Func Offset: 0xc4
	// Line 1702, Address: 0x117ed4, Func Offset: 0xe4
	// Line 1705, Address: 0x117ee8, Func Offset: 0xf8
	// Line 1706, Address: 0x117ef8, Func Offset: 0x108
	// Func End, Address: 0x117f10, Func Offset: 0x120
}

// SingleUpdate__FP11xAnimSinglefP6_xVec3P6_xQuatPfUi
// Start address: 0x117f10
void SingleUpdate(xAnimSingle* single, float32 timeDelta, _xVec3* tran, _xQuat* quat, float32* yaw)
{
	float32 lerp;
	float32 recip;
	xAnimTransitionList* curr;
	float32 timeCmp;
	float32 timeCmp;
	float32 duration;
	void* object;
	float32 singleTime;
	float32 blendDelta;
	float32 tranDelta;
	xAnimSingle* bl;
	float32 partialYaw[2];
	float32 blendYaw[2];
	_xQuat partialQuat[2];
	_xQuat blendQuat[2];
	_xVec3 partialTran[2];
	_xVec3 blendTran[2];
	xAnimTransition* foundTransition;
	uint32 firstStep;
	uint32 foundBlendstop;
	// Line 1324, Address: 0x117f10, Func Offset: 0
	// Line 1335, Address: 0x117f54, Func Offset: 0x44
	// Line 1331, Address: 0x117f58, Func Offset: 0x48
	// Line 1325, Address: 0x117f70, Func Offset: 0x60
	// Line 1326, Address: 0x117f78, Func Offset: 0x68
	// Line 1330, Address: 0x117f7c, Func Offset: 0x6c
	// Line 1335, Address: 0x117f80, Func Offset: 0x70
	// Line 1339, Address: 0x117f88, Func Offset: 0x78
	// Line 1342, Address: 0x117f8c, Func Offset: 0x7c
	// Line 1339, Address: 0x117f98, Func Offset: 0x88
	// Line 1342, Address: 0x117f9c, Func Offset: 0x8c
	// Line 1343, Address: 0x117fac, Func Offset: 0x9c
	// Line 1344, Address: 0x117fc0, Func Offset: 0xb0
	// Line 1348, Address: 0x117fc8, Func Offset: 0xb8
	// Line 1349, Address: 0x117fd0, Func Offset: 0xc0
	// Line 1352, Address: 0x117fd8, Func Offset: 0xc8
	// Line 1349, Address: 0x117fdc, Func Offset: 0xcc
	// Line 1352, Address: 0x117fe0, Func Offset: 0xd0
	// Line 1354, Address: 0x117ff4, Func Offset: 0xe4
	// Line 1355, Address: 0x118014, Func Offset: 0x104
	// Line 1356, Address: 0x11802c, Func Offset: 0x11c
	// Line 1358, Address: 0x118034, Func Offset: 0x124
	// Line 1362, Address: 0x11803c, Func Offset: 0x12c
	// Line 1363, Address: 0x118040, Func Offset: 0x130
	// Line 1362, Address: 0x118044, Func Offset: 0x134
	// Line 1363, Address: 0x118048, Func Offset: 0x138
	// Line 1365, Address: 0x118050, Func Offset: 0x140
	// Line 1369, Address: 0x11806c, Func Offset: 0x15c
	// Line 1370, Address: 0x118080, Func Offset: 0x170
	// Line 1374, Address: 0x1180a4, Func Offset: 0x194
	// Line 1373, Address: 0x1180a8, Func Offset: 0x198
	// Line 1374, Address: 0x1180ac, Func Offset: 0x19c
	// Line 1376, Address: 0x1180b0, Func Offset: 0x1a0
	// Line 1374, Address: 0x1180b8, Func Offset: 0x1a8
	// Line 1375, Address: 0x1180c0, Func Offset: 0x1b0
	// Line 1376, Address: 0x1180c4, Func Offset: 0x1b4
	// Line 1378, Address: 0x1180d4, Func Offset: 0x1c4
	// Line 1382, Address: 0x118100, Func Offset: 0x1f0
	// Line 1381, Address: 0x118104, Func Offset: 0x1f4
	// Line 1382, Address: 0x118108, Func Offset: 0x1f8
	// Line 1384, Address: 0x11810c, Func Offset: 0x1fc
	// Line 1382, Address: 0x118114, Func Offset: 0x204
	// Line 1383, Address: 0x11811c, Func Offset: 0x20c
	// Line 1384, Address: 0x118120, Func Offset: 0x210
	// Line 1387, Address: 0x118130, Func Offset: 0x220
	// Line 1391, Address: 0x118138, Func Offset: 0x228
	// Line 1393, Address: 0x118140, Func Offset: 0x230
	// Line 1392, Address: 0x118144, Func Offset: 0x234
	// Line 1398, Address: 0x118148, Func Offset: 0x238
	// Line 1401, Address: 0x118150, Func Offset: 0x240
	// Line 1411, Address: 0x118164, Func Offset: 0x254
	// Line 1412, Address: 0x118168, Func Offset: 0x258
	// Line 1411, Address: 0x11816c, Func Offset: 0x25c
	// Line 1412, Address: 0x118174, Func Offset: 0x264
	// Line 1414, Address: 0x118198, Func Offset: 0x288
	// Line 1420, Address: 0x1181c0, Func Offset: 0x2b0
	// Line 1421, Address: 0x1181c8, Func Offset: 0x2b8
	// Line 1424, Address: 0x118200, Func Offset: 0x2f0
	// Line 1425, Address: 0x118208, Func Offset: 0x2f8
	// Line 1427, Address: 0x118228, Func Offset: 0x318
	// Line 1431, Address: 0x118234, Func Offset: 0x324
	// Line 1432, Address: 0x118248, Func Offset: 0x338
	// Line 1434, Address: 0x118250, Func Offset: 0x340
	// Line 1432, Address: 0x118258, Func Offset: 0x348
	// Line 1433, Address: 0x118260, Func Offset: 0x350
	// Line 1434, Address: 0x118264, Func Offset: 0x354
	// Line 1435, Address: 0x118274, Func Offset: 0x364
	// Line 1436, Address: 0x11827c, Func Offset: 0x36c
	// Line 1437, Address: 0x118280, Func Offset: 0x370
	// Line 1444, Address: 0x118284, Func Offset: 0x374
	// Line 1447, Address: 0x1182a0, Func Offset: 0x390
	// Line 1449, Address: 0x1182c0, Func Offset: 0x3b0
	// Line 1451, Address: 0x1182e4, Func Offset: 0x3d4
	// Line 1452, Address: 0x1182f4, Func Offset: 0x3e4
	// Line 1453, Address: 0x1182f8, Func Offset: 0x3e8
	// Line 1454, Address: 0x118314, Func Offset: 0x404
	// Line 1455, Address: 0x11832c, Func Offset: 0x41c
	// Line 1464, Address: 0x118340, Func Offset: 0x430
	// Line 1465, Address: 0x118348, Func Offset: 0x438
	// Line 1469, Address: 0x118350, Func Offset: 0x440
	// Line 1470, Address: 0x118358, Func Offset: 0x448
	// Line 1471, Address: 0x118360, Func Offset: 0x450
	// Line 1473, Address: 0x118364, Func Offset: 0x454
	// Line 1474, Address: 0x118388, Func Offset: 0x478
	// Line 1475, Address: 0x118390, Func Offset: 0x480
	// Line 1477, Address: 0x11839c, Func Offset: 0x48c
	// Line 1478, Address: 0x1183c0, Func Offset: 0x4b0
	// Line 1480, Address: 0x1183c8, Func Offset: 0x4b8
	// Line 1482, Address: 0x1183d4, Func Offset: 0x4c4
	// Line 1487, Address: 0x1183dc, Func Offset: 0x4cc
	// Line 1490, Address: 0x1183e0, Func Offset: 0x4d0
	// Line 1493, Address: 0x1183e8, Func Offset: 0x4d8
	// Line 1494, Address: 0x1183f0, Func Offset: 0x4e0
	// Line 1495, Address: 0x1183f8, Func Offset: 0x4e8
	// Line 1497, Address: 0x1183fc, Func Offset: 0x4ec
	// Line 1496, Address: 0x118400, Func Offset: 0x4f0
	// Line 1498, Address: 0x118404, Func Offset: 0x4f4
	// Line 1500, Address: 0x118408, Func Offset: 0x4f8
	// Line 1503, Address: 0x118430, Func Offset: 0x520
	// Line 1504, Address: 0x11843c, Func Offset: 0x52c
	// Line 1506, Address: 0x118460, Func Offset: 0x550
	// Line 1510, Address: 0x118468, Func Offset: 0x558
	// Line 1509, Address: 0x11846c, Func Offset: 0x55c
	// Line 1510, Address: 0x118470, Func Offset: 0x560
	// Line 1523, Address: 0x1184e4, Func Offset: 0x5d4
	// Line 1524, Address: 0x1184f8, Func Offset: 0x5e8
	// Line 1527, Address: 0x118500, Func Offset: 0x5f0
	// Line 1528, Address: 0x118528, Func Offset: 0x618
	// Line 1527, Address: 0x11852c, Func Offset: 0x61c
	// Line 1528, Address: 0x118530, Func Offset: 0x620
	// Line 1532, Address: 0x118538, Func Offset: 0x628
	// Line 1542, Address: 0x1185ec, Func Offset: 0x6dc
	// Line 1532, Address: 0x118600, Func Offset: 0x6f0
	// Line 1535, Address: 0x118604, Func Offset: 0x6f4
	// Line 1542, Address: 0x118620, Func Offset: 0x710
	// Line 1543, Address: 0x118628, Func Offset: 0x718
	// Line 1546, Address: 0x118630, Func Offset: 0x720
	// Line 1547, Address: 0x11863c, Func Offset: 0x72c
	// Line 1550, Address: 0x118650, Func Offset: 0x740
	// Line 1551, Address: 0x118654, Func Offset: 0x744
	// Line 1558, Address: 0x118658, Func Offset: 0x748
	// Line 1559, Address: 0x118660, Func Offset: 0x750
	// Line 1558, Address: 0x118664, Func Offset: 0x754
	// Line 1559, Address: 0x118670, Func Offset: 0x760
	// Line 1560, Address: 0x118684, Func Offset: 0x774
	// Line 1562, Address: 0x118690, Func Offset: 0x780
	// Line 1563, Address: 0x1186a8, Func Offset: 0x798
	// Line 1564, Address: 0x1186bc, Func Offset: 0x7ac
	// Line 1565, Address: 0x1186c4, Func Offset: 0x7b4
	// Line 1567, Address: 0x118700, Func Offset: 0x7f0
	// Line 1569, Address: 0x11870c, Func Offset: 0x7fc
	// Line 1570, Address: 0x118714, Func Offset: 0x804
	// Line 1571, Address: 0x11872c, Func Offset: 0x81c
	// Line 1572, Address: 0x118740, Func Offset: 0x830
	// Line 1573, Address: 0x118748, Func Offset: 0x838
	// Line 1575, Address: 0x118788, Func Offset: 0x878
	// Line 1580, Address: 0x118794, Func Offset: 0x884
	// Line 1581, Address: 0x1187c0, Func Offset: 0x8b0
	// Line 1582, Address: 0x118800, Func Offset: 0x8f0
	// Line 1583, Address: 0x118840, Func Offset: 0x930
	// Line 1585, Address: 0x118870, Func Offset: 0x960
	// Line 1586, Address: 0x1188d4, Func Offset: 0x9c4
	// Line 1587, Address: 0x1188e4, Func Offset: 0x9d4
	// Line 1593, Address: 0x1188e8, Func Offset: 0x9d8
	// Line 1595, Address: 0x1188f0, Func Offset: 0x9e0
	// Line 1598, Address: 0x1188f4, Func Offset: 0x9e4
	// Line 1595, Address: 0x1188f8, Func Offset: 0x9e8
	// Line 1596, Address: 0x11890c, Func Offset: 0x9fc
	// Line 1597, Address: 0x11892c, Func Offset: 0xa1c
	// Line 1599, Address: 0x118930, Func Offset: 0xa20
	// Line 1601, Address: 0x118938, Func Offset: 0xa28
	// Line 1604, Address: 0x118940, Func Offset: 0xa30
	// Line 1601, Address: 0x11894c, Func Offset: 0xa3c
	// Line 1602, Address: 0x118954, Func Offset: 0xa44
	// Line 1603, Address: 0x118964, Func Offset: 0xa54
	// Line 1604, Address: 0x118970, Func Offset: 0xa60
	// Line 1605, Address: 0x118978, Func Offset: 0xa68
	// Line 1608, Address: 0x118988, Func Offset: 0xa78
	// Line 1611, Address: 0x118998, Func Offset: 0xa88
	// Line 1614, Address: 0x1189d8, Func Offset: 0xac8
	// Line 1615, Address: 0x1189e4, Func Offset: 0xad4
	// Line 1616, Address: 0x1189f8, Func Offset: 0xae8
	// Line 1617, Address: 0x118a00, Func Offset: 0xaf0
	// Line 1618, Address: 0x118a08, Func Offset: 0xaf8
	// Line 1619, Address: 0x118a30, Func Offset: 0xb20
	// Line 1624, Address: 0x118a3c, Func Offset: 0xb2c
	// Line 1625, Address: 0x118a48, Func Offset: 0xb38
	// Line 1628, Address: 0x118a58, Func Offset: 0xb48
	// Line 1629, Address: 0x118a60, Func Offset: 0xb50
	// Line 1630, Address: 0x118a64, Func Offset: 0xb54
	// Line 1629, Address: 0x118a68, Func Offset: 0xb58
	// Line 1630, Address: 0x118a6c, Func Offset: 0xb5c
	// Line 1629, Address: 0x118a70, Func Offset: 0xb60
	// Line 1630, Address: 0x118a78, Func Offset: 0xb68
	// Line 1631, Address: 0x118a8c, Func Offset: 0xb7c
	// Line 1634, Address: 0x118a94, Func Offset: 0xb84
	// Line 1631, Address: 0x118aa0, Func Offset: 0xb90
	// Line 1632, Address: 0x118ab0, Func Offset: 0xba0
	// Line 1633, Address: 0x118ac8, Func Offset: 0xbb8
	// Line 1634, Address: 0x118adc, Func Offset: 0xbcc
	// Line 1635, Address: 0x118ae4, Func Offset: 0xbd4
	// Line 1636, Address: 0x118aec, Func Offset: 0xbdc
	// Line 1637, Address: 0x118b04, Func Offset: 0xbf4
	// Line 1640, Address: 0x118b24, Func Offset: 0xc14
	// Func End, Address: 0x118b6c, Func Offset: 0xc5c
}

// xAnimPlaySetState__FP11xAnimSingleP10xAnimStatef
// Start address: 0x118b70
void xAnimPlaySetState(xAnimSingle* single, xAnimState* state, float32 startTime)
{
	// Line 1238, Address: 0x118b70, Func Offset: 0
	// Line 1240, Address: 0x118b8c, Func Offset: 0x1c
	// Line 1241, Address: 0x118b94, Func Offset: 0x24
	// Line 1242, Address: 0x118ba0, Func Offset: 0x30
	// Line 1243, Address: 0x118ba8, Func Offset: 0x38
	// Line 1247, Address: 0x118bb0, Func Offset: 0x40
	// Line 1250, Address: 0x118bb8, Func Offset: 0x48
	// Line 1253, Address: 0x118c00, Func Offset: 0x90
	// Line 1257, Address: 0x118c04, Func Offset: 0x94
	// Line 1253, Address: 0x118c08, Func Offset: 0x98
	// Line 1254, Address: 0x118c0c, Func Offset: 0x9c
	// Line 1255, Address: 0x118c10, Func Offset: 0xa0
	// Line 1256, Address: 0x118c14, Func Offset: 0xa4
	// Line 1257, Address: 0x118c18, Func Offset: 0xa8
	// Line 1263, Address: 0x118c28, Func Offset: 0xb8
	// Line 1266, Address: 0x118c30, Func Offset: 0xc0
	// Line 1267, Address: 0x118c40, Func Offset: 0xd0
	// Line 1268, Address: 0x118c50, Func Offset: 0xe0
	// Line 1270, Address: 0x118c54, Func Offset: 0xe4
	// Line 1271, Address: 0x118c58, Func Offset: 0xe8
	// Line 1272, Address: 0x118c84, Func Offset: 0x114
	// Line 1273, Address: 0x118c88, Func Offset: 0x118
	// Func End, Address: 0x118ca0, Func Offset: 0x130
}

// LoopUpdate__FP11xAnimSingleP6_xVec3P6_xQuatPf
// Start address: 0x118ca0
void LoopUpdate(xAnimSingle* single, _xVec3* tran, _xQuat* quat, float32* yaw)
{
	float32 partialYaw[2];
	_xQuat partialQuat[2];
	_xVec3 partialTran[2];
	float32 duration;
	// Line 1203, Address: 0x118ca0, Func Offset: 0
	// Line 1204, Address: 0x118cc0, Func Offset: 0x20
	// Line 1210, Address: 0x118cc4, Func Offset: 0x24
	// Line 1204, Address: 0x118cd4, Func Offset: 0x34
	// Line 1210, Address: 0x118cdc, Func Offset: 0x3c
	// Line 1217, Address: 0x118cec, Func Offset: 0x4c
	// Line 1218, Address: 0x118d04, Func Offset: 0x64
	// Line 1222, Address: 0x118d0c, Func Offset: 0x6c
	// Line 1223, Address: 0x118d28, Func Offset: 0x88
	// Line 1224, Address: 0x118d2c, Func Offset: 0x8c
	// Line 1223, Address: 0x118d38, Func Offset: 0x98
	// Line 1224, Address: 0x118d3c, Func Offset: 0x9c
	// Line 1227, Address: 0x118d48, Func Offset: 0xa8
	// Line 1230, Address: 0x118d50, Func Offset: 0xb0
	// Line 1227, Address: 0x118d5c, Func Offset: 0xbc
	// Line 1228, Address: 0x118d64, Func Offset: 0xc4
	// Line 1229, Address: 0x118d74, Func Offset: 0xd4
	// Line 1230, Address: 0x118d80, Func Offset: 0xe0
	// Line 1231, Address: 0x118d88, Func Offset: 0xe8
	// Line 1232, Address: 0x118d94, Func Offset: 0xf4
	// Line 1233, Address: 0x118d9c, Func Offset: 0xfc
	// Line 1235, Address: 0x118da4, Func Offset: 0x104
	// Func End, Address: 0x118dc8, Func Offset: 0x128
}

// CalcLastAndDeltas__FP11xAnimSingleP6_xVec3P6_xQuatPfUi
// Start address: 0x118dd0
void CalcLastAndDeltas(xAnimSingle* single, _xVec3* tran, _xQuat* quat, float32* yaw, uint32 lastOnly)
{
	_xQuat lastQ;
	_xQuat tempQ[2];
	_xVec3 tempV[2];
	float32 tempYaw[2];
	// Line 1146, Address: 0x118dd0, Func Offset: 0
	// Line 1152, Address: 0x118dec, Func Offset: 0x1c
	// Line 1155, Address: 0x118e24, Func Offset: 0x54
	// Line 1158, Address: 0x118e2c, Func Offset: 0x5c
	// Line 1170, Address: 0x118e34, Func Offset: 0x64
	// Line 1158, Address: 0x118e40, Func Offset: 0x70
	// Line 1159, Address: 0x118e48, Func Offset: 0x78
	// Line 1160, Address: 0x118e58, Func Offset: 0x88
	// Line 1166, Address: 0x118e68, Func Offset: 0x98
	// Line 1167, Address: 0x118e74, Func Offset: 0xa4
	// Line 1168, Address: 0x118e80, Func Offset: 0xb0
	// Line 1169, Address: 0x118e8c, Func Offset: 0xbc
	// Line 1170, Address: 0x118e90, Func Offset: 0xc0
	// Line 1172, Address: 0x118e98, Func Offset: 0xc8
	// Line 1173, Address: 0x118ea0, Func Offset: 0xd0
	// Line 1172, Address: 0x118eb0, Func Offset: 0xe0
	// Line 1173, Address: 0x118eb4, Func Offset: 0xe4
	// Line 1172, Address: 0x118eb8, Func Offset: 0xe8
	// Line 1173, Address: 0x118ebc, Func Offset: 0xec
	// Line 1174, Address: 0x118eec, Func Offset: 0x11c
	// Line 1176, Address: 0x118f2c, Func Offset: 0x15c
	// Line 1178, Address: 0x118f3c, Func Offset: 0x16c
	// Line 1179, Address: 0x118f54, Func Offset: 0x184
	// Line 1180, Address: 0x118f74, Func Offset: 0x1a4
	// Line 1185, Address: 0x118f7c, Func Offset: 0x1ac
	// Line 1186, Address: 0x118f94, Func Offset: 0x1c4
	// Line 1187, Address: 0x118fb4, Func Offset: 0x1e4
	// Line 1188, Address: 0x118fbc, Func Offset: 0x1ec
	// Func End, Address: 0x118fdc, Func Offset: 0x20c
}

// EffectSingleStop__FP11xAnimSingle
// Start address: 0x118fe0
void EffectSingleStop(xAnimSingle* single)
{
	xAnimActiveEffect tempActive;
	xAnimEffect* effect;
	uint32 i;
	// Line 1110, Address: 0x118fe0, Func Offset: 0
	// Line 1112, Address: 0x118ff4, Func Offset: 0x14
	// Line 1113, Address: 0x119020, Func Offset: 0x40
	// Line 1117, Address: 0x119028, Func Offset: 0x48
	// Line 1119, Address: 0x119034, Func Offset: 0x54
	// Line 1120, Address: 0x119044, Func Offset: 0x64
	// Line 1121, Address: 0x119064, Func Offset: 0x84
	// Line 1122, Address: 0x119090, Func Offset: 0xb0
	// Line 1125, Address: 0x119098, Func Offset: 0xb8
	// Line 1127, Address: 0x11909c, Func Offset: 0xbc
	// Line 1128, Address: 0x1190a4, Func Offset: 0xc4
	// Line 1131, Address: 0x1190b8, Func Offset: 0xd8
	// Line 1132, Address: 0x1190bc, Func Offset: 0xdc
	// Line 1133, Address: 0x1190dc, Func Offset: 0xfc
	// Line 1134, Address: 0x1190ec, Func Offset: 0x10c
	// Line 1137, Address: 0x119108, Func Offset: 0x128
	// Line 1138, Address: 0x11910c, Func Offset: 0x12c
	// Line 1139, Address: 0x119118, Func Offset: 0x138
	// Line 1140, Address: 0x11911c, Func Offset: 0x13c
	// Func End, Address: 0x119134, Func Offset: 0x154
}

// EffectSingleLoop__FP11xAnimSingle
// Start address: 0x119140
void EffectSingleLoop(xAnimSingle* single)
{
	xAnimEffect* effect;
	uint32 count;
	uint32 index;
	xAnimActiveEffect* alist;
	// Line 1073, Address: 0x119140, Func Offset: 0
	// Line 1075, Address: 0x119158, Func Offset: 0x18
	// Line 1078, Address: 0x119160, Func Offset: 0x20
	// Line 1079, Address: 0x119164, Func Offset: 0x24
	// Line 1081, Address: 0x119168, Func Offset: 0x28
	// Line 1082, Address: 0x119170, Func Offset: 0x30
	// Line 1084, Address: 0x119180, Func Offset: 0x40
	// Line 1085, Address: 0x11919c, Func Offset: 0x5c
	// Line 1092, Address: 0x119208, Func Offset: 0xc8
	// Line 1093, Address: 0x119210, Func Offset: 0xd0
	// Line 1094, Address: 0x119214, Func Offset: 0xd4
	// Line 1096, Address: 0x119218, Func Offset: 0xd8
	// Line 1101, Address: 0x119230, Func Offset: 0xf0
	// Line 1102, Address: 0x119234, Func Offset: 0xf4
	// Line 1103, Address: 0x119240, Func Offset: 0x100
	// Line 1104, Address: 0x119248, Func Offset: 0x108
	// Line 1105, Address: 0x119268, Func Offset: 0x128
	// Line 1106, Address: 0x11926c, Func Offset: 0x12c
	// Func End, Address: 0x119288, Func Offset: 0x148
}

// EffectSingleRun__FP11xAnimSingle
// Start address: 0x119290
void EffectSingleRun(xAnimSingle* single)
{
	uint32 flags;
	float32 time;
	xAnimActiveEffect tempActive;
	xAnimEffect* effect;
	// Line 1037, Address: 0x119290, Func Offset: 0
	// Line 1038, Address: 0x1192ac, Func Offset: 0x1c
	// Line 1040, Address: 0x1192b0, Func Offset: 0x20
	// Line 1043, Address: 0x1192b4, Func Offset: 0x24
	// Line 1044, Address: 0x1192bc, Func Offset: 0x2c
	// Line 1045, Address: 0x1192c0, Func Offset: 0x30
	// Line 1047, Address: 0x1192cc, Func Offset: 0x3c
	// Line 1050, Address: 0x119330, Func Offset: 0xa0
	// Line 1051, Address: 0x119334, Func Offset: 0xa4
	// Line 1052, Address: 0x119354, Func Offset: 0xc4
	// Line 1053, Address: 0x119360, Func Offset: 0xd0
	// Line 1054, Address: 0x119374, Func Offset: 0xe4
	// Line 1055, Address: 0x119390, Func Offset: 0x100
	// Line 1056, Address: 0x119398, Func Offset: 0x108
	// Line 1058, Address: 0x1193e4, Func Offset: 0x154
	// Line 1061, Address: 0x1193f4, Func Offset: 0x164
	// Line 1066, Address: 0x119448, Func Offset: 0x1b8
	// Line 1067, Address: 0x119450, Func Offset: 0x1c0
	// Line 1068, Address: 0x119470, Func Offset: 0x1e0
	// Line 1069, Address: 0x119474, Func Offset: 0x1e4
	// Func End, Address: 0x119494, Func Offset: 0x204
}

// EffectSingleDuration__FP11xAnimSingle
// Start address: 0x1194a0
void EffectSingleDuration(xAnimSingle* single)
{
	uint32 count;
	uint32 index;
	xAnimActiveEffect* alist;
	float32 time;
	// Line 1009, Address: 0x1194a0, Func Offset: 0
	// Line 1010, Address: 0x1194bc, Func Offset: 0x1c
	// Line 1011, Address: 0x1194c0, Func Offset: 0x20
	// Line 1012, Address: 0x1194c4, Func Offset: 0x24
	// Line 1014, Address: 0x1194cc, Func Offset: 0x2c
	// Line 1017, Address: 0x1194d4, Func Offset: 0x34
	// Line 1019, Address: 0x1194f8, Func Offset: 0x58
	// Line 1020, Address: 0x119514, Func Offset: 0x74
	// Line 1027, Address: 0x119580, Func Offset: 0xe0
	// Line 1028, Address: 0x119588, Func Offset: 0xe8
	// Line 1029, Address: 0x1195a4, Func Offset: 0x104
	// Line 1030, Address: 0x1195a8, Func Offset: 0x108
	// Line 1032, Address: 0x1195ac, Func Offset: 0x10c
	// Line 1033, Address: 0x1195c8, Func Offset: 0x128
	// Func End, Address: 0x1195e8, Func Offset: 0x148
}

// EffectSingleStart__FP11xAnimSingle
// Start address: 0x1195f0
void EffectSingleStart(xAnimSingle* single)
{
	uint32 flags;
	float32 time;
	xAnimActiveEffect tempActive;
	xAnimEffect* effect;
	// Line 962, Address: 0x1195f0, Func Offset: 0
	// Line 965, Address: 0x119604, Func Offset: 0x14
	// Line 967, Address: 0x119608, Func Offset: 0x18
	// Line 965, Address: 0x11960c, Func Offset: 0x1c
	// Line 969, Address: 0x119610, Func Offset: 0x20
	// Line 971, Address: 0x119618, Func Offset: 0x28
	// Line 972, Address: 0x11961c, Func Offset: 0x2c
	// Line 974, Address: 0x119628, Func Offset: 0x38
	// Line 977, Address: 0x119630, Func Offset: 0x40
	// Line 978, Address: 0x119634, Func Offset: 0x44
	// Line 979, Address: 0x119658, Func Offset: 0x68
	// Line 980, Address: 0x119668, Func Offset: 0x78
	// Line 981, Address: 0x11967c, Func Offset: 0x8c
	// Line 982, Address: 0x119698, Func Offset: 0xa8
	// Line 983, Address: 0x1196a0, Func Offset: 0xb0
	// Line 985, Address: 0x1196ec, Func Offset: 0xfc
	// Line 988, Address: 0x119700, Func Offset: 0x110
	// Line 991, Address: 0x11974c, Func Offset: 0x15c
	// Line 995, Address: 0x11977c, Func Offset: 0x18c
	// Line 996, Address: 0x119780, Func Offset: 0x190
	// Line 997, Address: 0x1197a4, Func Offset: 0x1b4
	// Line 1001, Address: 0x1197f8, Func Offset: 0x208
	// Line 1002, Address: 0x119800, Func Offset: 0x210
	// Line 1004, Address: 0x119820, Func Offset: 0x230
	// Line 1005, Address: 0x119824, Func Offset: 0x234
	// Func End, Address: 0x11983c, Func Offset: 0x24c
}

// xAnimTableGetState__FP10xAnimTablePc
// Start address: 0x119840
xAnimState* xAnimTableGetState(xAnimTable* table, int8* name)
{
	// Line 897, Address: 0x119840, Func Offset: 0
	// Line 898, Address: 0x119850, Func Offset: 0x10
	// Line 899, Address: 0x11988c, Func Offset: 0x4c
	// Line 898, Address: 0x119894, Func Offset: 0x54
	// Line 899, Address: 0x119898, Func Offset: 0x58
	// Func End, Address: 0x1198a0, Func Offset: 0x60
}

// xAnimTableRemoveEffectByCB__FP10xAnimTablePFUiP17xAnimActiveEffectP11xAnimSinglePv_Ui
// Start address: 0x1198a0
void xAnimTableRemoveEffectByCB(xAnimTable* table, uint32(*callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*))
{
	xAnimState* curr;
	// Line 888, Address: 0x1198a0, Func Offset: 0
	// Line 889, Address: 0x1198a4, Func Offset: 0x4
	// Line 890, Address: 0x1198ac, Func Offset: 0xc
	// Line 891, Address: 0x119908, Func Offset: 0x68
	// Line 892, Address: 0x11990c, Func Offset: 0x6c
	// Line 893, Address: 0x119918, Func Offset: 0x78
	// Func End, Address: 0x119920, Func Offset: 0x80
}

// xAnimTableGetStateID__FP10xAnimTableUi
// Start address: 0x119920
xAnimState* xAnimTableGetStateID(xAnimTable* table, uint32 ID)
{
	xAnimState* curr;
	// Line 877, Address: 0x119920, Func Offset: 0
	// Line 878, Address: 0x119924, Func Offset: 0x4
	// Line 879, Address: 0x11992c, Func Offset: 0xc
	// Line 880, Address: 0x119938, Func Offset: 0x18
	// Line 881, Address: 0x119940, Func Offset: 0x20
	// Line 882, Address: 0x119944, Func Offset: 0x24
	// Line 883, Address: 0x119950, Func Offset: 0x30
	// Line 884, Address: 0x119954, Func Offset: 0x34
	// Func End, Address: 0x11995c, Func Offset: 0x3c
}

// xAnimTableAddFileID__FP10xAnimTableP9xAnimFileUi
// Start address: 0x119960
xAnimState* xAnimTableAddFileID(xAnimTable* table, xAnimFile* file, uint32 stateID)
{
	// Line 858, Address: 0x119960, Func Offset: 0
	// Line 859, Address: 0x119994, Func Offset: 0x34
	// Line 860, Address: 0x11999c, Func Offset: 0x3c
	// Line 863, Address: 0x1199a0, Func Offset: 0x40
	// Line 864, Address: 0x1199b0, Func Offset: 0x50
	// Line 865, Address: 0x1199c8, Func Offset: 0x68
	// Line 866, Address: 0x1199d0, Func Offset: 0x70
	// Line 873, Address: 0x1199ec, Func Offset: 0x8c
	// Func End, Address: 0x1199f4, Func Offset: 0x94
}

// xAnimTableAddFile__FP10xAnimTableP9xAnimFilePc
// Start address: 0x119a00
void xAnimTableAddFile(xAnimTable* table, xAnimFile* file, int8* states)
{
	int8* stateName;
	uint8* buffer;
	// Line 832, Address: 0x119a00, Func Offset: 0
	// Line 833, Address: 0x119a14, Func Offset: 0x14
	// Line 836, Address: 0x119a1c, Func Offset: 0x1c
	// Line 837, Address: 0x119a38, Func Offset: 0x38
	// Line 838, Address: 0x119a40, Func Offset: 0x40
	// Line 839, Address: 0x119a80, Func Offset: 0x80
	// Line 840, Address: 0x119a88, Func Offset: 0x88
	// Line 843, Address: 0x119a8c, Func Offset: 0x8c
	// Line 844, Address: 0x119a9c, Func Offset: 0x9c
	// Line 845, Address: 0x119ab4, Func Offset: 0xb4
	// Line 846, Address: 0x119abc, Func Offset: 0xbc
	// Line 852, Address: 0x119ad8, Func Offset: 0xd8
	// Line 853, Address: 0x119af0, Func Offset: 0xf0
	// Line 854, Address: 0x119af8, Func Offset: 0xf8
	// Func End, Address: 0x119b10, Func Offset: 0x110
}

// xAnimTableNewTransition__FP10xAnimTablePcPcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
// Start address: 0x119b10
xAnimTransition* xAnimTableNewTransition(xAnimTable* table, int8* source, int8* dest, uint32(*conditional)(xAnimTransition*, xAnimSingle*, void*), uint32(*callback)(xAnimTransition*, xAnimSingle*, void*), uint32 flags, uint32 userFlags, float32 srcTime, float32 destTime, uint16 priority, uint16 queuePriority, float32 blendRecip, uint16* blendOffset)
{
	xAnimTransition* tran;
	// Line 809, Address: 0x119b10, Func Offset: 0
	// Line 810, Address: 0x119b44, Func Offset: 0x34
	// Line 812, Address: 0x119b98, Func Offset: 0x88
	// Line 815, Address: 0x119b9c, Func Offset: 0x8c
	// Line 810, Address: 0x119ba0, Func Offset: 0x90
	// Line 812, Address: 0x119ba4, Func Offset: 0x94
	// Line 815, Address: 0x119ba8, Func Offset: 0x98
	// Line 816, Address: 0x119be8, Func Offset: 0xd8
	// Line 817, Address: 0x119bec, Func Offset: 0xdc
	// Line 818, Address: 0x119bf0, Func Offset: 0xe0
	// Line 819, Address: 0x119bf4, Func Offset: 0xe4
	// Line 820, Address: 0x119bf8, Func Offset: 0xe8
	// Line 821, Address: 0x119bfc, Func Offset: 0xec
	// Line 822, Address: 0x119c00, Func Offset: 0xf0
	// Line 823, Address: 0x119c04, Func Offset: 0xf4
	// Line 824, Address: 0x119c0c, Func Offset: 0xfc
	// Line 825, Address: 0x119d1c, Func Offset: 0x20c
	// Line 827, Address: 0x119d20, Func Offset: 0x210
	// Line 828, Address: 0x119d34, Func Offset: 0x224
	// Line 829, Address: 0x119d38, Func Offset: 0x228
	// Func End, Address: 0x119d70, Func Offset: 0x260
}

// xAnimTableAddTransition__FP10xAnimTableP15xAnimTransitionPc
// Start address: 0x119d70
void xAnimTableAddTransition(xAnimTable* table, xAnimTransition* tran, int8* source)
{
	xAnimTransitionList* curr;
	xAnimTransitionList* tlist;
	int8* stateName;
	uint32 flags;
	uint32 allocCount;
	uint32 stateCount;
	uint32 i;
	xAnimState** stateList;
	uint8* buffer;
	// Line 729, Address: 0x119d70, Func Offset: 0
	// Line 737, Address: 0x119d9c, Func Offset: 0x2c
	// Line 732, Address: 0x119da0, Func Offset: 0x30
	// Line 744, Address: 0x119da8, Func Offset: 0x38
	// Line 732, Address: 0x119dbc, Func Offset: 0x4c
	// Line 739, Address: 0x119dc0, Func Offset: 0x50
	// Line 744, Address: 0x119dc4, Func Offset: 0x54
	// Line 745, Address: 0x119dd0, Func Offset: 0x60
	// Line 746, Address: 0x119dd8, Func Offset: 0x68
	// Line 747, Address: 0x119e18, Func Offset: 0xa8
	// Line 748, Address: 0x119e20, Func Offset: 0xb0
	// Line 749, Address: 0x119e28, Func Offset: 0xb8
	// Line 750, Address: 0x119e90, Func Offset: 0x120
	// Line 753, Address: 0x119e9c, Func Offset: 0x12c
	// Line 754, Address: 0x119ea4, Func Offset: 0x134
	// Line 755, Address: 0x119ee0, Func Offset: 0x170
	// Line 756, Address: 0x119eec, Func Offset: 0x17c
	// Line 757, Address: 0x119ef0, Func Offset: 0x180
	// Line 760, Address: 0x119ef4, Func Offset: 0x184
	// Line 761, Address: 0x119ef8, Func Offset: 0x188
	// Line 762, Address: 0x119f10, Func Offset: 0x1a0
	// Line 764, Address: 0x119f18, Func Offset: 0x1a8
	// Line 765, Address: 0x119f20, Func Offset: 0x1b0
	// Line 768, Address: 0x119f50, Func Offset: 0x1e0
	// Line 769, Address: 0x119f5c, Func Offset: 0x1ec
	// Line 770, Address: 0x119f68, Func Offset: 0x1f8
	// Line 775, Address: 0x119fc8, Func Offset: 0x258
	// Line 778, Address: 0x119fe4, Func Offset: 0x274
	// Line 779, Address: 0x119fec, Func Offset: 0x27c
	// Line 781, Address: 0x119ffc, Func Offset: 0x28c
	// Line 782, Address: 0x11a000, Func Offset: 0x290
	// Line 783, Address: 0x11a004, Func Offset: 0x294
	// Line 786, Address: 0x11a008, Func Offset: 0x298
	// Line 787, Address: 0x11a010, Func Offset: 0x2a0
	// Line 788, Address: 0x11a014, Func Offset: 0x2a4
	// Line 789, Address: 0x11a020, Func Offset: 0x2b0
	// Line 790, Address: 0x11a028, Func Offset: 0x2b8
	// Line 792, Address: 0x11a02c, Func Offset: 0x2bc
	// Line 793, Address: 0x11a030, Func Offset: 0x2c0
	// Line 795, Address: 0x11a040, Func Offset: 0x2d0
	// Line 796, Address: 0x11a048, Func Offset: 0x2d8
	// Line 797, Address: 0x11a060, Func Offset: 0x2f0
	// Line 798, Address: 0x11a064, Func Offset: 0x2f4
	// Line 799, Address: 0x11a068, Func Offset: 0x2f8
	// Line 798, Address: 0x11a07c, Func Offset: 0x30c
	// Line 800, Address: 0x11a080, Func Offset: 0x310
	// Line 799, Address: 0x11a084, Func Offset: 0x314
	// Line 798, Address: 0x11a08c, Func Offset: 0x31c
	// Line 799, Address: 0x11a090, Func Offset: 0x320
	// Line 800, Address: 0x11a094, Func Offset: 0x324
	// Line 799, Address: 0x11a098, Func Offset: 0x328
	// Line 800, Address: 0x11a140, Func Offset: 0x3d0
	// Line 799, Address: 0x11a144, Func Offset: 0x3d4
	// Line 800, Address: 0x11a148, Func Offset: 0x3d8
	// Line 801, Address: 0x11a168, Func Offset: 0x3f8
	// Line 800, Address: 0x11a170, Func Offset: 0x400
	// Line 801, Address: 0x11a184, Func Offset: 0x414
	// Line 802, Address: 0x11a18c, Func Offset: 0x41c
	// Line 803, Address: 0x11a190, Func Offset: 0x420
	// Func End, Address: 0x11a1c0, Func Offset: 0x450
}

// xAnimTableNewState__FP10xAnimTablePcUiUifPfPffPUs
// Start address: 0x11a1c0
xAnimState* xAnimTableNewState(xAnimTable* table, int8* name, uint32 flags, uint32 userFlags, float32 speed, float32* boneBlend, float32* timeSnap, float32 fadeRecip, uint16* fadeOffset)
{
	xAnimState* state;
	// Line 695, Address: 0x11a1c0, Func Offset: 0
	// Line 698, Address: 0x11a1f0, Func Offset: 0x30
	// Line 699, Address: 0x11a240, Func Offset: 0x80
	// Line 700, Address: 0x11a24c, Func Offset: 0x8c
	// Line 702, Address: 0x11a250, Func Offset: 0x90
	// Line 703, Address: 0x11a258, Func Offset: 0x98
	// Line 704, Address: 0x11a260, Func Offset: 0xa0
	// Line 712, Address: 0x11a268, Func Offset: 0xa8
	// Line 713, Address: 0x11a278, Func Offset: 0xb8
	// Line 714, Address: 0x11a27c, Func Offset: 0xbc
	// Line 715, Address: 0x11a280, Func Offset: 0xc0
	// Line 716, Address: 0x11a284, Func Offset: 0xc4
	// Line 717, Address: 0x11a288, Func Offset: 0xc8
	// Line 718, Address: 0x11a28c, Func Offset: 0xcc
	// Line 719, Address: 0x11a290, Func Offset: 0xd0
	// Line 720, Address: 0x11a294, Func Offset: 0xd4
	// Line 722, Address: 0x11a298, Func Offset: 0xd8
	// Line 723, Address: 0x11a3ac, Func Offset: 0x1ec
	// Line 725, Address: 0x11a3b0, Func Offset: 0x1f0
	// Line 726, Address: 0x11a3b4, Func Offset: 0x1f4
	// Func End, Address: 0x11a3e8, Func Offset: 0x228
}

// xAnimTableNew__FPcPP10xAnimTable
// Start address: 0x11a3f0
xAnimTable* xAnimTableNew(int8* name, xAnimTable** linkedList)
{
	xAnimTable* table;
	// Line 676, Address: 0x11a3f0, Func Offset: 0
	// Line 678, Address: 0x11a404, Func Offset: 0x14
	// Line 679, Address: 0x11a414, Func Offset: 0x24
	// Line 680, Address: 0x11a41c, Func Offset: 0x2c
	// Line 682, Address: 0x11a424, Func Offset: 0x34
	// Line 683, Address: 0x11a42c, Func Offset: 0x3c
	// Line 685, Address: 0x11a430, Func Offset: 0x40
	// Line 686, Address: 0x11a434, Func Offset: 0x44
	// Line 687, Address: 0x11a438, Func Offset: 0x48
	// Line 688, Address: 0x11a43c, Func Offset: 0x4c
	// Line 689, Address: 0x11a440, Func Offset: 0x50
	// Line 691, Address: 0x11a444, Func Offset: 0x54
	// Func End, Address: 0x11a458, Func Offset: 0x68
}

// xAnimStateNewEffect__FP10xAnimStateUiffPFUiP17xAnimActiveEffectP11xAnimSinglePv_UiUi
// Start address: 0x11a460
xAnimEffect* xAnimStateNewEffect(xAnimState* state, uint32 flags, float32 startTime, float32 endTime, uint32(*callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*), uint32 userDataSize)
{
	xAnimEffect* effect;
	xAnimEffect** prev;
	xAnimEffect* curr;
	// Line 621, Address: 0x11a460, Func Offset: 0
	// Line 622, Address: 0x11a47c, Func Offset: 0x1c
	// Line 623, Address: 0x11a4b8, Func Offset: 0x58
	// Line 624, Address: 0x11a4bc, Func Offset: 0x5c
	// Line 625, Address: 0x11a4c0, Func Offset: 0x60
	// Line 626, Address: 0x11a4c4, Func Offset: 0x64
	// Line 630, Address: 0x11a4c8, Func Offset: 0x68
	// Line 631, Address: 0x11a4cc, Func Offset: 0x6c
	// Line 633, Address: 0x11a4d4, Func Offset: 0x74
	// Line 634, Address: 0x11a4dc, Func Offset: 0x7c
	// Line 635, Address: 0x11a500, Func Offset: 0xa0
	// Line 636, Address: 0x11a504, Func Offset: 0xa4
	// Line 639, Address: 0x11a508, Func Offset: 0xa8
	// Func End, Address: 0x11a528, Func Offset: 0xc8
}

// xAnimFileEval__FP9xAnimFilefPfUiP6_xVec3P6_xQuatPf
// Start address: 0x11a530
void xAnimFileEval(xAnimFile* data, float32 time, float32* bilinear, uint32 flags, _xVec3* tran, _xQuat* quat, float32* yaw)
{
	float32* fptr;
	_xVec3* t1;
	_xQuat* q1;
	_xVec3* t0;
	_xQuat* q0;
	uint32 biplus[2];
	uint32 biindex[2];
	float32 tmpf;
	float32 bilerp[2];
	_xQuat tempQ;
	float32 tmpyaw;
	uint32 fileflags;
	uint32 numBones;
	int32 i;
	// Line 453, Address: 0x11a530, Func Offset: 0
	// Line 465, Address: 0x11a570, Func Offset: 0x40
	// Line 464, Address: 0x11a574, Func Offset: 0x44
	// Line 465, Address: 0x11a580, Func Offset: 0x50
	// Line 466, Address: 0x11a5d8, Func Offset: 0xa8
	// Line 469, Address: 0x11a628, Func Offset: 0xf8
	// Line 470, Address: 0x11a634, Func Offset: 0x104
	// Line 471, Address: 0x11a644, Func Offset: 0x114
	// Line 472, Address: 0x11a650, Func Offset: 0x120
	// Line 473, Address: 0x11a664, Func Offset: 0x134
	// Line 474, Address: 0x11a6d4, Func Offset: 0x1a4
	// Line 475, Address: 0x11a6dc, Func Offset: 0x1ac
	// Line 476, Address: 0x11a6e0, Func Offset: 0x1b0
	// Line 477, Address: 0x11a6e4, Func Offset: 0x1b4
	// Line 478, Address: 0x11a6e8, Func Offset: 0x1b8
	// Line 479, Address: 0x11a6ec, Func Offset: 0x1bc
	// Line 480, Address: 0x11a6f0, Func Offset: 0x1c0
	// Line 481, Address: 0x11a6f4, Func Offset: 0x1c4
	// Line 482, Address: 0x11a6fc, Func Offset: 0x1cc
	// Line 485, Address: 0x11a704, Func Offset: 0x1d4
	// Line 489, Address: 0x11a70c, Func Offset: 0x1dc
	// Line 490, Address: 0x11a730, Func Offset: 0x200
	// Line 491, Address: 0x11a74c, Func Offset: 0x21c
	// Line 494, Address: 0x11a758, Func Offset: 0x228
	// Line 495, Address: 0x11a770, Func Offset: 0x240
	// Line 496, Address: 0x11a774, Func Offset: 0x244
	// Line 500, Address: 0x11a778, Func Offset: 0x248
	// Line 505, Address: 0x11a790, Func Offset: 0x260
	// Line 506, Address: 0x11a7a0, Func Offset: 0x270
	// Line 507, Address: 0x11a820, Func Offset: 0x2f0
	// Line 508, Address: 0x11a828, Func Offset: 0x2f8
	// Line 509, Address: 0x11a82c, Func Offset: 0x2fc
	// Line 510, Address: 0x11a83c, Func Offset: 0x30c
	// Line 511, Address: 0x11a854, Func Offset: 0x324
	// Line 510, Address: 0x11a858, Func Offset: 0x328
	// Line 511, Address: 0x11a85c, Func Offset: 0x32c
	// Line 510, Address: 0x11a860, Func Offset: 0x330
	// Line 511, Address: 0x11a86c, Func Offset: 0x33c
	// Line 518, Address: 0x11a874, Func Offset: 0x344
	// Line 514, Address: 0x11a878, Func Offset: 0x348
	// Line 518, Address: 0x11a87c, Func Offset: 0x34c
	// Line 514, Address: 0x11a888, Func Offset: 0x358
	// Line 518, Address: 0x11a88c, Func Offset: 0x35c
	// Line 525, Address: 0x11a8ac, Func Offset: 0x37c
	// Line 521, Address: 0x11a8b8, Func Offset: 0x388
	// Line 525, Address: 0x11a8bc, Func Offset: 0x38c
	// Line 522, Address: 0x11a8d4, Func Offset: 0x3a4
	// Line 525, Address: 0x11a8d8, Func Offset: 0x3a8
	// Line 526, Address: 0x11a8f0, Func Offset: 0x3c0
	// Line 527, Address: 0x11a928, Func Offset: 0x3f8
	// Line 529, Address: 0x11a95c, Func Offset: 0x42c
	// Line 530, Address: 0x11a998, Func Offset: 0x468
	// Line 531, Address: 0x11a9d0, Func Offset: 0x4a0
	// Line 533, Address: 0x11aa04, Func Offset: 0x4d4
	// Line 535, Address: 0x11aa3c, Func Offset: 0x50c
	// Line 538, Address: 0x11aa5c, Func Offset: 0x52c
	// Line 539, Address: 0x11aa98, Func Offset: 0x568
	// Line 540, Address: 0x11aad0, Func Offset: 0x5a0
	// Line 542, Address: 0x11ab04, Func Offset: 0x5d4
	// Line 545, Address: 0x11ab20, Func Offset: 0x5f0
	// Line 546, Address: 0x11ab58, Func Offset: 0x628
	// Line 547, Address: 0x11ab90, Func Offset: 0x660
	// Line 549, Address: 0x11abc4, Func Offset: 0x694
	// Line 551, Address: 0x11abcc, Func Offset: 0x69c
	// Line 554, Address: 0x11ac04, Func Offset: 0x6d4
	// Line 556, Address: 0x11ac0c, Func Offset: 0x6dc
	// Line 560, Address: 0x11ac28, Func Offset: 0x6f8
	// Line 566, Address: 0x11ac34, Func Offset: 0x704
	// Line 567, Address: 0x11ac40, Func Offset: 0x710
	// Line 568, Address: 0x11ac54, Func Offset: 0x724
	// Line 569, Address: 0x11acd4, Func Offset: 0x7a4
	// Line 571, Address: 0x11acdc, Func Offset: 0x7ac
	// Line 574, Address: 0x11ace0, Func Offset: 0x7b0
	// Line 575, Address: 0x11acec, Func Offset: 0x7bc
	// Line 577, Address: 0x11ad00, Func Offset: 0x7d0
	// Line 579, Address: 0x11ad04, Func Offset: 0x7d4
	// Line 581, Address: 0x11ad20, Func Offset: 0x7f0
	// Line 583, Address: 0x11ad30, Func Offset: 0x800
	// Line 584, Address: 0x11ad38, Func Offset: 0x808
	// Line 585, Address: 0x11ad5c, Func Offset: 0x82c
	// Line 586, Address: 0x11ad60, Func Offset: 0x830
	// Line 584, Address: 0x11ad68, Func Offset: 0x838
	// Line 586, Address: 0x11ad6c, Func Offset: 0x83c
	// Line 589, Address: 0x11ad74, Func Offset: 0x844
	// Line 591, Address: 0x11ad80, Func Offset: 0x850
	// Line 592, Address: 0x11ad94, Func Offset: 0x864
	// Line 593, Address: 0x11ada0, Func Offset: 0x870
	// Line 594, Address: 0x11ada8, Func Offset: 0x878
	// Line 596, Address: 0x11ae34, Func Offset: 0x904
	// Line 600, Address: 0x11ae54, Func Offset: 0x924
	// Line 609, Address: 0x11ae5c, Func Offset: 0x92c
	// Line 600, Address: 0x11ae68, Func Offset: 0x938
	// Line 601, Address: 0x11ae70, Func Offset: 0x940
	// Line 602, Address: 0x11ae80, Func Offset: 0x950
	// Line 605, Address: 0x11ae90, Func Offset: 0x960
	// Line 606, Address: 0x11ae9c, Func Offset: 0x96c
	// Line 607, Address: 0x11aea8, Func Offset: 0x978
	// Line 608, Address: 0x11aeb4, Func Offset: 0x984
	// Line 609, Address: 0x11aeb8, Func Offset: 0x988
	// Line 611, Address: 0x11aec0, Func Offset: 0x990
	// Line 613, Address: 0x11aed0, Func Offset: 0x9a0
	// Func End, Address: 0x11af0c, Func Offset: 0x9dc
}

// xAnimFileSetPoses__FP9xAnimFilePvfPvf
// Start address: 0x11af10
void xAnimFileSetPoses(xAnimFile* data, void* startPose, float32 startTime, void* endPose, float32 endTime)
{
	_xQuat tempQ;
	float32 physEnd[4];
	float32 physStart[4];
	float32 poseEnd[4];
	float32 poseStart[4];
	float32 rootEnd[4];
	float32 rootStart[4];
	void* root;
	int32 i;
	// Line 416, Address: 0x11af10, Func Offset: 0
	// Line 418, Address: 0x11af3c, Func Offset: 0x2c
	// Line 421, Address: 0x11af70, Func Offset: 0x60
	// Line 425, Address: 0x11af74, Func Offset: 0x64
	// Line 421, Address: 0x11af84, Func Offset: 0x74
	// Line 425, Address: 0x11af88, Func Offset: 0x78
	// Line 426, Address: 0x11af90, Func Offset: 0x80
	// Line 428, Address: 0x11b028, Func Offset: 0x118
	// Line 429, Address: 0x11b048, Func Offset: 0x138
	// Line 431, Address: 0x11b0d8, Func Offset: 0x1c8
	// Line 432, Address: 0x11b0f0, Func Offset: 0x1e0
	// Line 434, Address: 0x11b180, Func Offset: 0x270
	// Line 435, Address: 0x11b198, Func Offset: 0x288
	// Line 438, Address: 0x11b228, Func Offset: 0x318
	// Line 443, Address: 0x11b244, Func Offset: 0x334
	// Line 439, Address: 0x11b248, Func Offset: 0x338
	// Line 443, Address: 0x11b250, Func Offset: 0x340
	// Line 439, Address: 0x11b254, Func Offset: 0x344
	// Line 440, Address: 0x11b25c, Func Offset: 0x34c
	// Line 443, Address: 0x11b26c, Func Offset: 0x35c
	// Line 444, Address: 0x11b27c, Func Offset: 0x36c
	// Line 445, Address: 0x11b28c, Func Offset: 0x37c
	// Line 446, Address: 0x11b29c, Func Offset: 0x38c
	// Line 447, Address: 0x11b2a0, Func Offset: 0x390
	// Line 445, Address: 0x11b2a8, Func Offset: 0x398
	// Line 447, Address: 0x11b2bc, Func Offset: 0x3ac
	// Line 448, Address: 0x11b2c4, Func Offset: 0x3b4
	// Line 449, Address: 0x11b2dc, Func Offset: 0x3cc
	// Func End, Address: 0x11b30c, Func Offset: 0x3fc
}

// xAnimFileSetTime__FP9xAnimFileff
// Start address: 0x11b310
void xAnimFileSetTime(xAnimFile* data, float32 duration, float32 timeOffset)
{
	float32 rawDuration;
	// Line 389, Address: 0x11b310, Func Offset: 0
	// Line 390, Address: 0x11b324, Func Offset: 0x14
	// Line 391, Address: 0x11b35c, Func Offset: 0x4c
	// Line 392, Address: 0x11b380, Func Offset: 0x70
	// Line 395, Address: 0x11b384, Func Offset: 0x74
	// Line 396, Address: 0x11b388, Func Offset: 0x78
	// Line 397, Address: 0x11b398, Func Offset: 0x88
	// Line 398, Address: 0x11b39c, Func Offset: 0x8c
	// Line 400, Address: 0x11b3b8, Func Offset: 0xa8
	// Line 401, Address: 0x11b3c4, Func Offset: 0xb4
	// Func End, Address: 0x11b3dc, Func Offset: 0xcc
}

// xAnimFileSetPhysics__FP9xAnimFilePv
// Start address: 0x11b3e0
void xAnimFileSetPhysics(xAnimFile* data, void* rawData)
{
	// Line 384, Address: 0x11b3e0, Func Offset: 0
	// Func End, Address: 0x11b3e8, Func Offset: 0x8
}

// xAnimFileNew__FPvPcUiPP9xAnimFile
// Start address: 0x11b3f0
xAnimFile* xAnimFileNew(void* rawData, int8* name, uint32 flags, xAnimFile** linkedList)
{
	// Line 376, Address: 0x11b3f0, Func Offset: 0
	// Line 378, Address: 0x11b3fc, Func Offset: 0xc
	// Line 379, Address: 0x11b40c, Func Offset: 0x1c
	// Func End, Address: 0x11b418, Func Offset: 0x28
}

// xAnimFileNewBilinear__FPPvPcUiPP9xAnimFileUiUi
// Start address: 0x11b420
xAnimFile* xAnimFileNewBilinear(void** rawData, int8* name, uint32 flags, xAnimFile** linkedList, uint32 numX, uint32 numY)
{
	xAnimFile* afile;
	int32 i;
	// Line 335, Address: 0x11b420, Func Offset: 0
	// Line 337, Address: 0x11b444, Func Offset: 0x24
	// Line 343, Address: 0x11b494, Func Offset: 0x74
	// Line 344, Address: 0x11b4ac, Func Offset: 0x8c
	// Line 347, Address: 0x11b4b0, Func Offset: 0x90
	// Line 348, Address: 0x11b4c8, Func Offset: 0xa8
	// Line 350, Address: 0x11b4cc, Func Offset: 0xac
	// Line 351, Address: 0x11b4d4, Func Offset: 0xb4
	// Line 353, Address: 0x11b4dc, Func Offset: 0xbc
	// Line 354, Address: 0x11b4e4, Func Offset: 0xc4
	// Line 357, Address: 0x11b4ec, Func Offset: 0xcc
	// Line 358, Address: 0x11b4f4, Func Offset: 0xd4
	// Line 359, Address: 0x11b514, Func Offset: 0xf4
	// Line 358, Address: 0x11b5ac, Func Offset: 0x18c
	// Line 359, Address: 0x11b5b4, Func Offset: 0x194
	// Line 362, Address: 0x11b5e0, Func Offset: 0x1c0
	// Line 363, Address: 0x11b5f0, Func Offset: 0x1d0
	// Line 364, Address: 0x11b5f4, Func Offset: 0x1d4
	// Line 366, Address: 0x11b66c, Func Offset: 0x24c
	// Line 367, Address: 0x11b68c, Func Offset: 0x26c
	// Line 368, Address: 0x11b690, Func Offset: 0x270
	// Line 371, Address: 0x11b694, Func Offset: 0x274
	// Line 372, Address: 0x11b6a0, Func Offset: 0x280
	// Line 373, Address: 0x11b6a4, Func Offset: 0x284
	// Func End, Address: 0x11b6cc, Func Offset: 0x2ac
}

// CalcPhys__FP9xAnimFile
// Start address: 0x11b6d0
void CalcPhys(xAnimFile* af)
{
	_xQuat tempQ;
	float32 physEnd[4];
	float32 physStart[4];
	float32 rootZero[4];
	float32 rootEnd[4];
	float32 rootStart[4];
	void* root;
	int32 i;
	// Line 256, Address: 0x11b6d0, Func Offset: 0
	// Line 258, Address: 0x11b6ec, Func Offset: 0x1c
	// Line 261, Address: 0x11b6f8, Func Offset: 0x28
	// Line 263, Address: 0x11b708, Func Offset: 0x38
	// Line 264, Address: 0x11b70c, Func Offset: 0x3c
	// Line 266, Address: 0x11b724, Func Offset: 0x54
	// Line 269, Address: 0x11b72c, Func Offset: 0x5c
	// Line 274, Address: 0x11b730, Func Offset: 0x60
	// Line 269, Address: 0x11b740, Func Offset: 0x70
	// Line 274, Address: 0x11b744, Func Offset: 0x74
	// Line 275, Address: 0x11b74c, Func Offset: 0x7c
	// Line 277, Address: 0x11b7e4, Func Offset: 0x114
	// Line 278, Address: 0x11b7fc, Func Offset: 0x12c
	// Line 280, Address: 0x11b88c, Func Offset: 0x1bc
	// Line 281, Address: 0x11b8ac, Func Offset: 0x1dc
	// Line 284, Address: 0x11b93c, Func Offset: 0x26c
	// Line 285, Address: 0x11b954, Func Offset: 0x284
	// Line 288, Address: 0x11b96c, Func Offset: 0x29c
	// Line 290, Address: 0x11b970, Func Offset: 0x2a0
	// Line 293, Address: 0x11b978, Func Offset: 0x2a8
	// Line 295, Address: 0x11b988, Func Offset: 0x2b8
	// Line 297, Address: 0x11b994, Func Offset: 0x2c4
	// Line 295, Address: 0x11b998, Func Offset: 0x2c8
	// Line 297, Address: 0x11b9a0, Func Offset: 0x2d0
	// Line 298, Address: 0x11b9a8, Func Offset: 0x2d8
	// Line 299, Address: 0x11b9e8, Func Offset: 0x318
	// Line 300, Address: 0x11ba24, Func Offset: 0x354
	// Line 301, Address: 0x11ba28, Func Offset: 0x358
	// Line 299, Address: 0x11ba30, Func Offset: 0x360
	// Line 301, Address: 0x11ba40, Func Offset: 0x370
	// Line 304, Address: 0x11ba48, Func Offset: 0x378
	// Line 305, Address: 0x11ba60, Func Offset: 0x390
	// Func End, Address: 0x11ba80, Func Offset: 0x3b0
}

// CalcPhysFromKeys__FP9xAnimFilePfPfPfPf
// Start address: 0x11ba80
void CalcPhysFromKeys(xAnimFile* af, float32* rootStart, float32* rootEnd, float32* physStart, float32* physEnd)
{
	float32* temp;
	float32* temp;
	float32 delta;
	int32 i;
	// Line 200, Address: 0x11ba80, Func Offset: 0
	// Line 201, Address: 0x11ba90, Func Offset: 0x10
	// Line 202, Address: 0x11ba9c, Func Offset: 0x1c
	// Line 206, Address: 0x11baa8, Func Offset: 0x28
	// Line 207, Address: 0x11bab4, Func Offset: 0x34
	// Line 208, Address: 0x11bab8, Func Offset: 0x38
	// Line 212, Address: 0x11bac0, Func Offset: 0x40
	// Line 215, Address: 0x11bad8, Func Offset: 0x58
	// Line 220, Address: 0x11bae0, Func Offset: 0x60
	// Line 223, Address: 0x11bafc, Func Offset: 0x7c
	// Line 227, Address: 0x11bb00, Func Offset: 0x80
	// Line 223, Address: 0x11bb04, Func Offset: 0x84
	// Line 226, Address: 0x11bb08, Func Offset: 0x88
	// Line 227, Address: 0x11bb10, Func Offset: 0x90
	// Line 228, Address: 0x11bb18, Func Offset: 0x98
	// Line 229, Address: 0x11bb58, Func Offset: 0xd8
	// Line 231, Address: 0x11bb98, Func Offset: 0x118
	// Line 233, Address: 0x11bbac, Func Offset: 0x12c
	// Line 236, Address: 0x11bbb4, Func Offset: 0x134
	// Line 237, Address: 0x11bbbc, Func Offset: 0x13c
	// Line 236, Address: 0x11bbc0, Func Offset: 0x140
	// Line 237, Address: 0x11bbc4, Func Offset: 0x144
	// Line 238, Address: 0x11bbcc, Func Offset: 0x14c
	// Line 239, Address: 0x11bc14, Func Offset: 0x194
	// Line 240, Address: 0x11bc54, Func Offset: 0x1d4
	// Line 243, Address: 0x11bc58, Func Offset: 0x1d8
	// Line 244, Address: 0x11bc68, Func Offset: 0x1e8
	// Line 243, Address: 0x11bc6c, Func Offset: 0x1ec
	// Line 244, Address: 0x11bc74, Func Offset: 0x1f4
	// Line 245, Address: 0x11bc7c, Func Offset: 0x1fc
	// Line 246, Address: 0x11bcb8, Func Offset: 0x238
	// Line 248, Address: 0x11bcf8, Func Offset: 0x278
	// Line 250, Address: 0x11bd08, Func Offset: 0x288
	// Line 248, Address: 0x11bd10, Func Offset: 0x290
	// Line 250, Address: 0x11bd20, Func Offset: 0x2a0
	// Line 252, Address: 0x11bd28, Func Offset: 0x2a8
	// Func End, Address: 0x11bd30, Func Offset: 0x2b0
}

// xAnimTempTransitionAlloc__Fv
// Start address: 0x11bd30
xAnimTransition* xAnimTempTransitionAlloc()
{
	xAnimTransition* tran;
	// Line 71, Address: 0x11bd30, Func Offset: 0
	// Line 73, Address: 0x11bd34, Func Offset: 0x4
	// Line 71, Address: 0x11bd38, Func Offset: 0x8
	// Line 73, Address: 0x11bd3c, Func Offset: 0xc
	// Line 74, Address: 0x11bd44, Func Offset: 0x14
	// Line 76, Address: 0x11bd4c, Func Offset: 0x1c
	// Func End, Address: 0x11bd58, Func Offset: 0x28
}

// xAnimTempTransitionInit__FUi
// Start address: 0x11bd60
void xAnimTempTransitionInit(uint32 count)
{
	// Line 65, Address: 0x11bd60, Func Offset: 0
	// Line 67, Address: 0x11bd64, Func Offset: 0x4
	// Line 65, Address: 0x11bd68, Func Offset: 0x8
	// Line 67, Address: 0x11bd6c, Func Offset: 0xc
	// Line 65, Address: 0x11bd70, Func Offset: 0x10
	// Line 67, Address: 0x11bd74, Func Offset: 0x14
	// Line 68, Address: 0x11bdb4, Func Offset: 0x54
	// Func End, Address: 0x11bdc4, Func Offset: 0x64
}

// xAnimInit__Fv
// Start address: 0x11bdd0
void xAnimInit()
{
	// Line 49, Address: 0x11bdd0, Func Offset: 0
	// Line 57, Address: 0x11bdd8, Func Offset: 0x8
	// Line 60, Address: 0x11bde0, Func Offset: 0x10
	// Line 61, Address: 0x11bdf4, Func Offset: 0x24
	// Func End, Address: 0x11be00, Func Offset: 0x30
}

