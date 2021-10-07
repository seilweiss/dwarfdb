typedef struct xAnimActiveEffect;
typedef struct RxOutputSpec;
typedef enum rxEmbeddedPacketState;
typedef struct RxPacket;
typedef struct _xEntFrame;
typedef struct xSndVol;
typedef struct _xCollis;
typedef struct RwTexture;
typedef struct RwObjectHasFrame;
typedef struct xAnimPlay;
typedef struct RpAtomic;
typedef struct RxPipeline;
typedef enum RwTextureAddressMode;
typedef struct _xEnt;
typedef struct RxPipelineNode;
typedef struct _xScene;
typedef struct xModelPool;
typedef struct RpTriangle;
typedef struct RpInterpolator;
typedef struct xAnimFile;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct RpWorldSector;
typedef struct RwRGBA;
typedef struct xModelInstance;
typedef struct ADPCM_FILENAME_INFO;
typedef struct RxPipelineNodeParam;
typedef struct RxPipelineNodeTopSortData;
typedef struct RwTexCoords;
typedef struct xAnimTransitionList;
typedef struct _xEntCollis;
typedef struct RpPolygon;
typedef struct RxNodeDefinition;
typedef struct xSndVoiceInfo;
typedef struct RpMeshHeader;
typedef struct xAnimTransition;
typedef struct RwV3d;
typedef struct RxPipelineCluster;
typedef struct RwRaster;
typedef struct RwResEntry;
typedef struct RpVertexNormal;
typedef struct _xVec3;
typedef struct RpMorphTarget;
typedef struct xAnimSingle;
typedef struct rxHeapBlockHeader;
typedef struct RwLLLink;
typedef struct _xMat4x3;
typedef struct rxHeapFreeBlock;
typedef struct RwRGBAReal;
typedef struct xAnimState;
typedef struct _xEnv;
typedef struct iSndFileInfo;
typedef struct iSndCutsceneCallbackInfo;
typedef struct RxClusterDefinition;
typedef struct p2LinkAsset;
typedef enum RxClusterValidityReq;
typedef struct RwTexDictionary;
typedef struct RxPipelineRequiresCluster;
typedef struct RpClump;
typedef struct xMemPool;
typedef struct VAGheader;
typedef struct _xQuat;
typedef enum RpWorldRenderOrder;
typedef struct SndInfo;
typedef struct xAnimEffect;
typedef enum RwTextureFilterMode;
typedef struct RwBBox;
typedef struct RwObject;
typedef struct RpCollSector;
typedef enum RxClusterValid;
typedef struct iSndVol;
typedef struct xAnimTable;
typedef struct SIPLoadInfo;
typedef struct xSndGlobals;
typedef struct xSurface;
typedef struct _xRot;
typedef struct SndBlockHdr;
typedef struct xQCData;
typedef struct RwLinkList;
typedef struct RpWorld;
typedef struct xFFX;
typedef struct RpGeometry;
typedef struct _xBBox;
typedef struct RwFrame;
typedef struct rxReq;
typedef struct RpMaterialList;
typedef struct _xEntShadow;
typedef struct xBase;
typedef struct RpSector;
typedef struct RpMaterial;
typedef struct iEnv;
typedef enum RxClusterForcePresent;
typedef struct sceSifDmaData;
typedef struct RxClusterRef;
typedef enum RxNodeDefEditable;
typedef struct iSndInfo;
typedef struct SndBlockEntry;
typedef struct _iCollis;
typedef struct p2BaseAsset;
typedef struct RpLight;
typedef struct RxIoSpec;
typedef struct _xSphere;
typedef struct RxNodeMethods;
typedef struct iShadowCache;
typedef struct RwSurfaceProperties;
typedef struct _xCylinder;
typedef struct RxHeap;
typedef struct RwMatrixTag;
typedef struct RxCluster;
typedef struct p2EntAsset;
typedef struct _xBox;
typedef struct st_xST_XASSETINFO;
typedef struct RwSphere;
typedef struct _xBound;

typedef int8*(*type_1)(uint32);
typedef void(*type_3)(_xEnt*, _xScene*, float32, _xEntFrame*);
typedef RwObjectHasFrame*(*type_5)(RwObjectHasFrame*);
typedef void(*type_6)(_xEnt*, _xScene*, float32);
typedef int32(*type_7)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_9)(_xEnt*);
typedef void(*type_11)(_xEnt*);
typedef int32(*type_12)(RxNodeDefinition*);
typedef void(*type_13)(_xEnt*, _xScene*, float32, _xEntCollis*);
typedef void(*type_14)(RxNodeDefinition*);
typedef void(*type_15)(_xEnt*, _xVec3*);
typedef int32(*type_18)(RxPipelineNode*);
typedef uint32(*type_19)(_xEnt*, _xEnt*, _xScene*, float32, _xCollis*);
typedef void(*type_21)(RxPipelineNode*);
typedef void(*type_24)(iSndCutsceneCallbackInfo*);
typedef int32(*type_25)(RxPipelineNode*, RxPipeline*);
typedef void(*type_26)(xMemPool*, void*);
typedef RpClump*(*type_27)(RpClump*, void*);
typedef void(*type_28)(_xEnt*, _xVec3*);
typedef void(*type_29)(iSndCutsceneCallbackInfo*);
typedef uint32(*type_32)(RxPipelineNode*, uint32, uint32, void*);
typedef RpWorldSector*(*type_37)(RpWorldSector*);
typedef void(*type_39)(RwResEntry*);
typedef uint32(*type_41)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef xBase*(*type_46)(uint32);
typedef int8*(*type_50)(xBase*);
typedef RpAtomic*(*type_51)(RpAtomic*);
typedef int32(*type_54)(xBase*, xBase*, uint32, float32*, xBase*);
typedef uint32(*type_57)(xAnimTransition*, xAnimSingle*, void*);

typedef uint32 type_0[3];
typedef int8 type_2[16];
typedef uint8 type_4[48];
typedef RwTexCoords* type_8[8];
typedef int8 type_10[32];
typedef RwTexCoords* type_16[8];
typedef float32 type_17[4];
typedef float32 type_20[4];
typedef uint8 type_22[2];
typedef ADPCM_FILENAME_INFO type_23[351];
typedef RxCluster type_30[1];
typedef int8 type_31[32];
typedef _xVec3 type_33[2];
typedef float32 type_34[4];
typedef uint32 type_35[4];
typedef _xQuat type_36[2];
typedef _xCollis type_38[18];
typedef int8 type_40[16];
typedef int8 type_42[32];
typedef uint8 type_43[8];
typedef int32 type_44[48];
typedef int8 type_45[32];
typedef xSndVoiceInfo type_47[48];
typedef uint8 type_48[8];
typedef SIPLoadInfo type_49[8];
typedef uint8 type_52[8];
typedef uint8 type_53[8];
typedef int8 type_55[32];
typedef uint8 type_56[3];
typedef RpLight* type_58[2];
typedef int8 type_59[1];
typedef RwFrame* type_60[2];
typedef iSndFileInfo type_61[351];
typedef uint16 type_62[3];
typedef uint16 type_63[3];
typedef int8* type_64[3];
typedef _xVec3 type_65[4];
typedef int8 type_66[4];
typedef float32 type_67[2];
typedef int8 type_68[32];
typedef int8 type_69[32];
typedef int8 type_70[32][8];
typedef uint8 type_71[3];
typedef uint8 type_72[3];

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
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

struct xSndVol
{
	float32 volL;
	float32 volR;
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

enum RwTextureAddressMode
{
	rwTEXTUREADDRESSNATEXTUREADDRESS,
	rwTEXTUREADDRESSWRAP,
	rwTEXTUREADDRESSMIRROR,
	rwTEXTUREADDRESSCLAMP,
	rwTEXTUREADDRESSBORDER,
	rwTEXTUREADDRESSMODEFORCEENUMSIZEINT = 0x7fffffff
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

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
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

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
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

struct ADPCM_FILENAME_INFO
{
	int8 Filename[32];
	int32 hip_idx;
	int32 Pitch;
	int32 LoopInfo;
	int32 ID;
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

struct RwTexCoords
{
	float32 u;
	float32 v;
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

struct RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
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

struct xSndVoiceInfo
{
	uint32 assetID;
	uint32 sndID;
	uint32 parentID;
	_xVec3* parentPos;
	int32 internalID;
	uint16 flags;
	uint16 priority;
	float32 vol;
	float32 pitch;
	uint32 sample_rate;
	uint32 deadct;
	_xVec3 pos;
	float32 radius2;
	iSndInfo ps;
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
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

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
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

struct _xVec3
{
	float32 x;
	float32 y;
	float32 z;
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

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
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

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
};

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
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

struct _xEnv
{
	iEnv* geom;
	iEnv ienv;
};

struct iSndFileInfo
{
	uint32 assetID;
	uint16 flags;
	uint16 freq;
	uint32 lsn;
	uint16 offset;
	uint16 ID;
	uint32 size;
	uint32 hip_idx;
};

struct iSndCutsceneCallbackInfo
{
	uint32 addr;
	uint32 id;
	uint32 seek;
	uint32 size;
};

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
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

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
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

struct VAGheader
{
	int8 id[4];
	uint32 version;
	uint32 reserved;
	uint32 data_size;
	uint32 frequency;
	uint32 reserved2[3];
	int8 name[16];
};

struct _xQuat
{
	_xVec3 v;
	float32 s;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct SndInfo
{
	uint32 num_effects;
	uint32 num_streams;
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

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct iSndVol
{
	int16 volL;
	int16 volR;
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

struct SIPLoadInfo
{
	uint32 HIPhash;
	uint32 SPUaddr;
	uint32 EEinfo_max;
};

struct xSndGlobals
{
	uint32 stereo;
	uint32 SndCount;
	xSndVol mastervol;
	xSndVol streamvol;
	xSndVol fxvol;
	xSndVoiceInfo voice[48];
	_xVec3 right;
	_xVec3 up;
	_xVec3 at;
	_xVec3 pos;
	float32 radius2;
	_xVec3 nearpos;
	_xVec3 farpos;
	uint32 suspendCD;
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

struct _xRot
{
	_xVec3 axis;
	float32 angle;
};

struct SndBlockHdr
{
	uint32 SPUaddr;
	int8 HIPname[16];
	uint32 sector;
	uint16 offset;
	uint16 index;
	uint16 num_effects;
	uint16 num_streams;
};

struct xQCData
{
	uint32 xmask;
	uint32 ymask;
	uint32 zmask;
};

struct RwLinkList
{
	RwLLLink link;
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

struct xFFX
{
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

struct rxReq
{
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
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

struct RpSector
{
	int32 type;
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

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct sceSifDmaData
{
	uint32 data;
	uint32 addr;
	uint32 size;
	uint32 mode;
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

struct iSndInfo
{
	uint32 flags;
	iSndVol vol;
	uint32 pitch;
};

struct SndBlockEntry
{
	struct
	{
		uint32 offset : 18;
		uint32 size : 14;
	};
};

struct _iCollis
{
	int32 unknown;
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

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

struct _xSphere
{
	_xVec3 center;
	float32 r;
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

struct iShadowCache
{
	_xVec3 pos;
	_xVec3 right;
	_xVec3 corner[4];
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

struct _xCylinder
{
	_xVec3 center;
	float32 r;
	float32 h;
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

struct _xBox
{
	_xVec3 upper;
	_xVec3 lower;
};

struct st_xST_XASSETINFO
{
	uint32 aid;
	uint32 sector;
	uint32 plus_offset;
	uint32 size;
	void* mempos;
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
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

ADPCM_FILENAME_INFO ADPCM_FileNames[351];
int8 HIP[32][8];
uint32 HIPct;
iSndFileInfo EEinfo[351];
uint32 EEinfo_max;
uint32 SPUaddr;
uint32 sfx_total;
uint32 first_time;
int32 EXTERNAL_NewRequestCheck;
uint32 FILE_SIZE;
uint32 EXTERNAL_TotalFiles;
int32 EXTERNAL_LOAD_FLAG;
int32 did;
int32 previous;
SIPLoadInfo LastLoaded[8];
void(*sCutsceneCallback)(iSndCutsceneCallbackInfo*);
xSndGlobals gSnd;
uint8 SOUND_SPUKeyStatus[48];
int32 SOUND_IOP_REQUEST_LOAD;
uint32 SOUND_IOP_DATA_SIZE;
uint32 SOUND_IOP_DATA_SEEK;
uint32 SOUND_IOP_DATA_ID;
uint32 SOUND_IOP_DATA_ADDRESS;
uint32 SOUND_IOP_DATA_CHECK;
int32 DVD;
int32 SOUND_STREAM_CD_ACCESS_CHAN;
int32 SOUND_STREAM_CD_ACCESS;
int32 SOUND_CD_STATUS;
int32 SOUND_SFX_TRANSFER_END;
int32 SOUND_STREAM_STATUS[48];

void iSndCutsceneMode(void(*callback)(iSndCutsceneCallbackInfo*));
void iSndWaitForDeadSounds();
void iSndSetPitch(uint32 snd, float32 pitch);
void iSndStop(uint32 snd);
void iSndPause(uint32 snd, uint32 pause);
uint32 iSndFindFreeVoice(uint32 priority, uint32 flags);
void iSndStartStereo(uint32 id1, uint32 id2, float32 pitch);
uint32 iSndIsReady(uint32 id);
uint32 iSndPlay(xSndVoiceInfo* vp);
uint32 iSndIsPlaying(uint32 assetID, uint32 parid);
uint32 iSndIsPlaying(uint32 assetID);
void iSndUpdate();
iSndVol iSndCalcVol(xSndVoiceInfo* vp);
void iSndExit();
void iSndInit2();
void iSndLoadFaster();
void iSndInit();
void iSndSuspendCD(uint32 suspend);
iSndFileInfo* iSndLookup(uint32 id);
int32 TransferDataToIOP(uint32 source, uint32 dest, uint32 size);

// iSndCutsceneMode__FPFP24iSndCutsceneCallbackInfo_v
// Start address: 0x19da50
void iSndCutsceneMode(void(*callback)(iSndCutsceneCallbackInfo*))
{
	// Line 2221, Address: 0x19da50, Func Offset: 0
	// Line 2224, Address: 0x19da60, Func Offset: 0x10
	// Line 2225, Address: 0x19da68, Func Offset: 0x18
	// Line 2226, Address: 0x19da6c, Func Offset: 0x1c
	// Func End, Address: 0x19da7c, Func Offset: 0x2c
}

// iSndWaitForDeadSounds__Fv
// Start address: 0x19da80
void iSndWaitForDeadSounds()
{
	int32 ret;
	xSndVoiceInfo* vp;
	ulong32 zombies;
	int32 numdelay;
	int32 i;
	// Line 2170, Address: 0x19da80, Func Offset: 0
	// Line 2172, Address: 0x19daa4, Func Offset: 0x24
	// Line 2174, Address: 0x19dab0, Func Offset: 0x30
	// Line 2175, Address: 0x19dab4, Func Offset: 0x34
	// Line 2176, Address: 0x19dab8, Func Offset: 0x38
	// Line 2177, Address: 0x19dac0, Func Offset: 0x40
	// Line 2178, Address: 0x19dad4, Func Offset: 0x54
	// Line 2179, Address: 0x19dae4, Func Offset: 0x64
	// Line 2180, Address: 0x19daf4, Func Offset: 0x74
	// Line 2183, Address: 0x19db00, Func Offset: 0x80
	// Line 2184, Address: 0x19db10, Func Offset: 0x90
	// Line 2187, Address: 0x19db18, Func Offset: 0x98
	// Line 2188, Address: 0x19db28, Func Offset: 0xa8
	// Line 2189, Address: 0x19db34, Func Offset: 0xb4
	// Line 2190, Address: 0x19db3c, Func Offset: 0xbc
	// Line 2191, Address: 0x19db40, Func Offset: 0xc0
	// Line 2192, Address: 0x19db4c, Func Offset: 0xcc
	// Line 2194, Address: 0x19db58, Func Offset: 0xd8
	// Line 2195, Address: 0x19db68, Func Offset: 0xe8
	// Line 2196, Address: 0x19db70, Func Offset: 0xf0
	// Line 2197, Address: 0x19db7c, Func Offset: 0xfc
	// Line 2198, Address: 0x19db80, Func Offset: 0x100
	// Line 2199, Address: 0x19db88, Func Offset: 0x108
	// Line 2202, Address: 0x19db90, Func Offset: 0x110
	// Line 2204, Address: 0x19dbac, Func Offset: 0x12c
	// Line 2207, Address: 0x19dbb8, Func Offset: 0x138
	// Line 2208, Address: 0x19dbc0, Func Offset: 0x140
	// Line 2209, Address: 0x19dbc8, Func Offset: 0x148
	// Line 2214, Address: 0x19dbd8, Func Offset: 0x158
	// Func End, Address: 0x19dbfc, Func Offset: 0x17c
}

// iSndSetPitch__FUif
// Start address: 0x19dc00
void iSndSetPitch(uint32 snd, float32 pitch)
{
	int32 i;
	// Line 2146, Address: 0x19dc00, Func Offset: 0
	// Line 2151, Address: 0x19dc18, Func Offset: 0x18
	// Line 2152, Address: 0x19dc20, Func Offset: 0x20
	// Line 2153, Address: 0x19dc3c, Func Offset: 0x3c
	// Line 2154, Address: 0x19dc40, Func Offset: 0x40
	// Line 2155, Address: 0x19dc50, Func Offset: 0x50
	// Line 2159, Address: 0x19dc5c, Func Offset: 0x5c
	// Line 2161, Address: 0x19dcec, Func Offset: 0xec
	// Line 2162, Address: 0x19dcf8, Func Offset: 0xf8
	// Func End, Address: 0x19dd0c, Func Offset: 0x10c
}

// iSndStop__FUi
// Start address: 0x19dd10
void iSndStop(uint32 snd)
{
	int32 i;
	// Line 2046, Address: 0x19dd10, Func Offset: 0
	// Line 2050, Address: 0x19dd30, Func Offset: 0x20
	// Line 2051, Address: 0x19dd38, Func Offset: 0x28
	// Line 2052, Address: 0x19dd54, Func Offset: 0x44
	// Line 2053, Address: 0x19dd58, Func Offset: 0x48
	// Line 2054, Address: 0x19dd68, Func Offset: 0x58
	// Line 2059, Address: 0x19dd74, Func Offset: 0x64
	// Line 2060, Address: 0x19dd94, Func Offset: 0x84
	// Line 2062, Address: 0x19dd9c, Func Offset: 0x8c
	// Line 2063, Address: 0x19dda4, Func Offset: 0x94
	// Line 2064, Address: 0x19ddac, Func Offset: 0x9c
	// Line 2066, Address: 0x19ddb4, Func Offset: 0xa4
	// Line 2069, Address: 0x19ddbc, Func Offset: 0xac
	// Line 2071, Address: 0x19ddd0, Func Offset: 0xc0
	// Line 2072, Address: 0x19dde4, Func Offset: 0xd4
	// Line 2073, Address: 0x19ddf8, Func Offset: 0xe8
	// Line 2075, Address: 0x19de04, Func Offset: 0xf4
	// Func End, Address: 0x19de20, Func Offset: 0x110
}

// iSndPause__FUiUi
// Start address: 0x19de20
void iSndPause(uint32 snd, uint32 pause)
{
	int32 i;
	// Line 2030, Address: 0x19de20, Func Offset: 0
	// Line 2034, Address: 0x19de2c, Func Offset: 0xc
	// Line 2035, Address: 0x19de34, Func Offset: 0x14
	// Line 2037, Address: 0x19de50, Func Offset: 0x30
	// Line 2038, Address: 0x19de60, Func Offset: 0x40
	// Line 2041, Address: 0x19de6c, Func Offset: 0x4c
	// Line 2042, Address: 0x19de74, Func Offset: 0x54
	// Func End, Address: 0x19de80, Func Offset: 0x60
}

// iSndFindFreeVoice__FUiUi
// Start address: 0x19de80
uint32 iSndFindFreeVoice(uint32 priority, uint32 flags)
{
	int32 R;
	int32 L;
	int32 volR;
	xSndVoiceInfo* vp;
	int32 bestvol;
	uint32 bestpri;
	uint32 best;
	uint32 vhi;
	uint32 vlo;
	uint32 i;
	// Line 1952, Address: 0x19de80, Func Offset: 0
	// Line 1956, Address: 0x19dea4, Func Offset: 0x24
	// Line 1952, Address: 0x19dea8, Func Offset: 0x28
	// Line 1956, Address: 0x19deac, Func Offset: 0x2c
	// Line 1961, Address: 0x19deb0, Func Offset: 0x30
	// Line 1952, Address: 0x19deb4, Func Offset: 0x34
	// Line 1955, Address: 0x19debc, Func Offset: 0x3c
	// Line 1961, Address: 0x19dec0, Func Offset: 0x40
	// Line 1962, Address: 0x19dec8, Func Offset: 0x48
	// Line 1964, Address: 0x19decc, Func Offset: 0x4c
	// Line 1965, Address: 0x19ded4, Func Offset: 0x54
	// Line 1966, Address: 0x19ded8, Func Offset: 0x58
	// Line 1970, Address: 0x19dedc, Func Offset: 0x5c
	// Line 1971, Address: 0x19def4, Func Offset: 0x74
	// Line 1973, Address: 0x19df00, Func Offset: 0x80
	// Line 1975, Address: 0x19df10, Func Offset: 0x90
	// Line 1979, Address: 0x19df18, Func Offset: 0x98
	// Line 1985, Address: 0x19df24, Func Offset: 0xa4
	// Line 1996, Address: 0x19df34, Func Offset: 0xb4
	// Line 1998, Address: 0x19df38, Func Offset: 0xb8
	// Line 1999, Address: 0x19df40, Func Offset: 0xc0
	// Line 2001, Address: 0x19df4c, Func Offset: 0xcc
	// Line 2003, Address: 0x19df54, Func Offset: 0xd4
	// Line 2007, Address: 0x19df60, Func Offset: 0xe0
	// Line 2008, Address: 0x19df64, Func Offset: 0xe4
	// Line 2006, Address: 0x19df68, Func Offset: 0xe8
	// Line 2009, Address: 0x19df6c, Func Offset: 0xec
	// Line 2012, Address: 0x19df80, Func Offset: 0x100
	// Line 2013, Address: 0x19df8c, Func Offset: 0x10c
	// Line 2017, Address: 0x19df94, Func Offset: 0x114
	// Line 2018, Address: 0x19dfa0, Func Offset: 0x120
	// Line 2022, Address: 0x19dfa8, Func Offset: 0x128
	// Line 2024, Address: 0x19dfc0, Func Offset: 0x140
	// Line 2025, Address: 0x19dfcc, Func Offset: 0x14c
	// Line 2026, Address: 0x19dfd0, Func Offset: 0x150
	// Func End, Address: 0x19e000, Func Offset: 0x180
}

// iSndStartStereo__FUiUif
// Start address: 0x19e000
void iSndStartStereo(uint32 id1, uint32 id2, float32 pitch)
{
	uint32 v2;
	uint32 v1;
	// Line 1920, Address: 0x19e000, Func Offset: 0
	// Line 1925, Address: 0x19e02c, Func Offset: 0x2c
	// Line 1926, Address: 0x19e034, Func Offset: 0x34
	// Line 1928, Address: 0x19e050, Func Offset: 0x50
	// Line 1929, Address: 0x19e060, Func Offset: 0x60
	// Line 1934, Address: 0x19e070, Func Offset: 0x70
	// Line 1935, Address: 0x19e08c, Func Offset: 0x8c
	// Line 1936, Address: 0x19e090, Func Offset: 0x90
	// Line 1937, Address: 0x19e0a0, Func Offset: 0xa0
	// Line 1942, Address: 0x19e0ac, Func Offset: 0xac
	// Line 1944, Address: 0x19e140, Func Offset: 0x140
	// Line 1943, Address: 0x19e148, Func Offset: 0x148
	// Line 1944, Address: 0x19e14c, Func Offset: 0x14c
	// Line 1943, Address: 0x19e150, Func Offset: 0x150
	// Line 1944, Address: 0x19e154, Func Offset: 0x154
	// Line 1946, Address: 0x19e158, Func Offset: 0x158
	// Line 1944, Address: 0x19e15c, Func Offset: 0x15c
	// Line 1946, Address: 0x19e160, Func Offset: 0x160
	// Line 1947, Address: 0x19e168, Func Offset: 0x168
	// Func End, Address: 0x19e18c, Func Offset: 0x18c
}

// iSndIsReady__FUi
// Start address: 0x19e190
uint32 iSndIsReady(uint32 id)
{
	uint32 v;
	// Line 1895, Address: 0x19e190, Func Offset: 0
	// Line 1899, Address: 0x19e19c, Func Offset: 0xc
	// Line 1900, Address: 0x19e1a4, Func Offset: 0x14
	// Line 1902, Address: 0x19e1c0, Func Offset: 0x30
	// Line 1903, Address: 0x19e1d0, Func Offset: 0x40
	// Line 1904, Address: 0x19e1dc, Func Offset: 0x4c
	// Line 1907, Address: 0x19e1e4, Func Offset: 0x54
	// Line 1908, Address: 0x19e1fc, Func Offset: 0x6c
	// Line 1909, Address: 0x19e208, Func Offset: 0x78
	// Line 1913, Address: 0x19e20c, Func Offset: 0x7c
	// Func End, Address: 0x19e218, Func Offset: 0x88
}

// iSndPlay__FP13xSndVoiceInfo
// Start address: 0x19e220
uint32 iSndPlay(xSndVoiceInfo* vp)
{
	uint32 voice;
	uint32 i;
	// Line 1834, Address: 0x19e220, Func Offset: 0
	// Line 1840, Address: 0x19e240, Func Offset: 0x20
	// Line 1841, Address: 0x19e254, Func Offset: 0x34
	// Line 1842, Address: 0x19e25c, Func Offset: 0x3c
	// Line 1844, Address: 0x19e268, Func Offset: 0x48
	// Line 1846, Address: 0x19e278, Func Offset: 0x58
	// Line 1848, Address: 0x19e288, Func Offset: 0x68
	// Line 1851, Address: 0x19e298, Func Offset: 0x78
	// Line 1852, Address: 0x19e2a0, Func Offset: 0x80
	// Line 1856, Address: 0x19e2b0, Func Offset: 0x90
	// Line 1860, Address: 0x19e2c4, Func Offset: 0xa4
	// Line 1857, Address: 0x19e2d4, Func Offset: 0xb4
	// Line 1860, Address: 0x19e2dc, Func Offset: 0xbc
	// Line 1864, Address: 0x19e350, Func Offset: 0x130
	// Line 1861, Address: 0x19e368, Func Offset: 0x148
	// Line 1865, Address: 0x19e36c, Func Offset: 0x14c
	// Line 1864, Address: 0x19e370, Func Offset: 0x150
	// Line 1865, Address: 0x19e378, Func Offset: 0x158
	// Line 1866, Address: 0x19e384, Func Offset: 0x164
	// Line 1868, Address: 0x19e38c, Func Offset: 0x16c
	// Line 1870, Address: 0x19e3b4, Func Offset: 0x194
	// Line 1872, Address: 0x19e3bc, Func Offset: 0x19c
	// Line 1871, Address: 0x19e3c0, Func Offset: 0x1a0
	// Line 1872, Address: 0x19e3cc, Func Offset: 0x1ac
	// Line 1874, Address: 0x19e3d4, Func Offset: 0x1b4
	// Line 1879, Address: 0x19e408, Func Offset: 0x1e8
	// Line 1881, Address: 0x19e414, Func Offset: 0x1f4
	// Line 1882, Address: 0x19e41c, Func Offset: 0x1fc
	// Func End, Address: 0x19e440, Func Offset: 0x220
}

// iSndIsPlaying__FUiUi
// Start address: 0x19e440
uint32 iSndIsPlaying(uint32 assetID, uint32 parid)
{
	uint32 i;
	// Line 1821, Address: 0x19e444, Func Offset: 0x4
	// Line 1822, Address: 0x19e44c, Func Offset: 0xc
	// Line 1823, Address: 0x19e460, Func Offset: 0x20
	// Line 1824, Address: 0x19e46c, Func Offset: 0x2c
	// Line 1826, Address: 0x19e47c, Func Offset: 0x3c
	// Line 1827, Address: 0x19e484, Func Offset: 0x44
	// Line 1829, Address: 0x19e494, Func Offset: 0x54
	// Line 1830, Address: 0x19e498, Func Offset: 0x58
	// Func End, Address: 0x19e4a0, Func Offset: 0x60
}

// iSndIsPlaying__FUi
// Start address: 0x19e4a0
uint32 iSndIsPlaying(uint32 assetID)
{
	uint32 i;
	// Line 1807, Address: 0x19e4a4, Func Offset: 0x4
	// Line 1808, Address: 0x19e4ac, Func Offset: 0xc
	// Line 1810, Address: 0x19e4b8, Func Offset: 0x18
	// Line 1813, Address: 0x19e4c8, Func Offset: 0x28
	// Line 1814, Address: 0x19e4d0, Func Offset: 0x30
	// Line 1816, Address: 0x19e4e0, Func Offset: 0x40
	// Line 1817, Address: 0x19e4e4, Func Offset: 0x44
	// Func End, Address: 0x19e4ec, Func Offset: 0x4c
}

// iSndUpdate__Ff
// Start address: 0x19e4f0
void iSndUpdate()
{
	iSndCutsceneCallbackInfo info;
	iSndVol nvol;
	iSndVol nvol;
	_xEnt* ent;
	xSndVoiceInfo* vp;
	int32 i;
	// Line 1522, Address: 0x19e4f0, Func Offset: 0
	// Line 1528, Address: 0x19e504, Func Offset: 0x14
	// Line 1529, Address: 0x19e514, Func Offset: 0x24
	// Line 1538, Address: 0x19e51c, Func Offset: 0x2c
	// Line 1534, Address: 0x19e520, Func Offset: 0x30
	// Line 1538, Address: 0x19e538, Func Offset: 0x48
	// Line 1541, Address: 0x19e544, Func Offset: 0x54
	// Line 1546, Address: 0x19e550, Func Offset: 0x60
	// Line 1549, Address: 0x19e568, Func Offset: 0x78
	// Line 1552, Address: 0x19e574, Func Offset: 0x84
	// Line 1553, Address: 0x19e580, Func Offset: 0x90
	// Line 1554, Address: 0x19e598, Func Offset: 0xa8
	// Line 1557, Address: 0x19e5ac, Func Offset: 0xbc
	// Line 1562, Address: 0x19e5b0, Func Offset: 0xc0
	// Line 1565, Address: 0x19e5d4, Func Offset: 0xe4
	// Line 1568, Address: 0x19e5e0, Func Offset: 0xf0
	// Line 1570, Address: 0x19e5ec, Func Offset: 0xfc
	// Line 1575, Address: 0x19e5f0, Func Offset: 0x100
	// Line 1568, Address: 0x19e5f8, Func Offset: 0x108
	// Line 1575, Address: 0x19e5fc, Func Offset: 0x10c
	// Line 1641, Address: 0x19e604, Func Offset: 0x114
	// Line 1642, Address: 0x19e608, Func Offset: 0x118
	// Line 1644, Address: 0x19e60c, Func Offset: 0x11c
	// Line 1649, Address: 0x19e630, Func Offset: 0x140
	// Line 1651, Address: 0x19e638, Func Offset: 0x148
	// Line 1655, Address: 0x19e644, Func Offset: 0x154
	// Line 1656, Address: 0x19e650, Func Offset: 0x160
	// Line 1657, Address: 0x19e664, Func Offset: 0x174
	// Line 1661, Address: 0x19e66c, Func Offset: 0x17c
	// Line 1663, Address: 0x19e678, Func Offset: 0x188
	// Line 1665, Address: 0x19e688, Func Offset: 0x198
	// Line 1666, Address: 0x19e6a4, Func Offset: 0x1b4
	// Line 1668, Address: 0x19e6ac, Func Offset: 0x1bc
	// Line 1674, Address: 0x19e6b8, Func Offset: 0x1c8
	// Line 1675, Address: 0x19e6e8, Func Offset: 0x1f8
	// Line 1676, Address: 0x19e6f4, Func Offset: 0x204
	// Line 1677, Address: 0x19e6fc, Func Offset: 0x20c
	// Line 1681, Address: 0x19e708, Func Offset: 0x218
	// Line 1682, Address: 0x19e734, Func Offset: 0x244
	// Line 1685, Address: 0x19e740, Func Offset: 0x250
	// Line 1687, Address: 0x19e750, Func Offset: 0x260
	// Line 1689, Address: 0x19e760, Func Offset: 0x270
	// Line 1690, Address: 0x19e770, Func Offset: 0x280
	// Line 1694, Address: 0x19e778, Func Offset: 0x288
	// Line 1706, Address: 0x19e798, Func Offset: 0x2a8
	// Line 1708, Address: 0x19e79c, Func Offset: 0x2ac
	// Line 1709, Address: 0x19e7a8, Func Offset: 0x2b8
	// Line 1710, Address: 0x19e7ac, Func Offset: 0x2bc
	// Line 1706, Address: 0x19e7b0, Func Offset: 0x2c0
	// Line 1708, Address: 0x19e7b4, Func Offset: 0x2c4
	// Line 1709, Address: 0x19e7cc, Func Offset: 0x2dc
	// Line 1710, Address: 0x19e7d0, Func Offset: 0x2e0
	// Line 1711, Address: 0x19e7d4, Func Offset: 0x2e4
	// Line 1715, Address: 0x19e7e0, Func Offset: 0x2f0
	// Line 1717, Address: 0x19e7e4, Func Offset: 0x2f4
	// Line 1720, Address: 0x19e7ec, Func Offset: 0x2fc
	// Line 1722, Address: 0x19e7f8, Func Offset: 0x308
	// Line 1723, Address: 0x19e800, Func Offset: 0x310
	// Line 1725, Address: 0x19e808, Func Offset: 0x318
	// Line 1727, Address: 0x19e814, Func Offset: 0x324
	// Line 1729, Address: 0x19e820, Func Offset: 0x330
	// Func End, Address: 0x19e838, Func Offset: 0x348
}

// iSndCalcVol__FP13xSndVoiceInfo
// Start address: 0x19e840
iSndVol iSndCalcVol(xSndVoiceInfo* vp)
{
	float32 volscale;
	float32 pan;
	_xVec3 to;
	float32 volR;
	float32 volL;
	iSndVol nvol;
	// Line 1353, Address: 0x19e840, Func Offset: 0
	// Line 1358, Address: 0x19e864, Func Offset: 0x24
	// Line 1362, Address: 0x19e878, Func Offset: 0x38
	// Line 1364, Address: 0x19e888, Func Offset: 0x48
	// Line 1362, Address: 0x19e88c, Func Offset: 0x4c
	// Line 1364, Address: 0x19e894, Func Offset: 0x54
	// Line 1362, Address: 0x19e898, Func Offset: 0x58
	// Line 1363, Address: 0x19e8c0, Func Offset: 0x80
	// Line 1364, Address: 0x19e8d8, Func Offset: 0x98
	// Line 1378, Address: 0x19e8e0, Func Offset: 0xa0
	// Line 1379, Address: 0x19e928, Func Offset: 0xe8
	// Line 1380, Address: 0x19e934, Func Offset: 0xf4
	// Line 1385, Address: 0x19e944, Func Offset: 0x104
	// Line 1388, Address: 0x19e968, Func Offset: 0x128
	// Line 1389, Address: 0x19e978, Func Offset: 0x138
	// Line 1390, Address: 0x19e984, Func Offset: 0x144
	// Line 1392, Address: 0x19e988, Func Offset: 0x148
	// Line 1393, Address: 0x19e990, Func Offset: 0x150
	// Line 1411, Address: 0x19e994, Func Offset: 0x154
	// Line 1412, Address: 0x19e99c, Func Offset: 0x15c
	// Line 1416, Address: 0x19e9a4, Func Offset: 0x164
	// Line 1418, Address: 0x19e9b4, Func Offset: 0x174
	// Line 1419, Address: 0x19e9c0, Func Offset: 0x180
	// Line 1418, Address: 0x19e9c4, Func Offset: 0x184
	// Line 1420, Address: 0x19e9c8, Func Offset: 0x188
	// Line 1421, Address: 0x19e9d0, Func Offset: 0x190
	// Line 1422, Address: 0x19e9d8, Func Offset: 0x198
	// Line 1421, Address: 0x19e9dc, Func Offset: 0x19c
	// Line 1422, Address: 0x19e9e0, Func Offset: 0x1a0
	// Line 1426, Address: 0x19e9e4, Func Offset: 0x1a4
	// Line 1427, Address: 0x19e9f0, Func Offset: 0x1b0
	// Line 1426, Address: 0x19e9f4, Func Offset: 0x1b4
	// Line 1431, Address: 0x19e9f8, Func Offset: 0x1b8
	// Line 1432, Address: 0x19ea04, Func Offset: 0x1c4
	// Line 1442, Address: 0x19ea18, Func Offset: 0x1d8
	// Line 1443, Address: 0x19eaf8, Func Offset: 0x2b8
	// Line 1442, Address: 0x19eafc, Func Offset: 0x2bc
	// Line 1443, Address: 0x19eb34, Func Offset: 0x2f4
	// Line 1444, Address: 0x19eb44, Func Offset: 0x304
	// Func End, Address: 0x19eb6c, Func Offset: 0x32c
}

// iSndExit__Fv
// Start address: 0x19eb70
void iSndExit()
{
	// Line 1348, Address: 0x19eb70, Func Offset: 0
	// Func End, Address: 0x19eb78, Func Offset: 0x8
}

// iSndInit2__Fv
// Start address: 0x19eb80
void iSndInit2()
{
	long32 t1;
	long32 t0;
	int32 i;
	// Line 1115, Address: 0x19eb80, Func Offset: 0
	// Line 1119, Address: 0x19eb94, Func Offset: 0x14
	// Line 1120, Address: 0x19eba4, Func Offset: 0x24
	// Line 1121, Address: 0x19eba8, Func Offset: 0x28
	// Line 1122, Address: 0x19ebb0, Func Offset: 0x30
	// Line 1123, Address: 0x19ebc4, Func Offset: 0x44
	// Line 1124, Address: 0x19ebc8, Func Offset: 0x48
	// Line 1127, Address: 0x19ebd4, Func Offset: 0x54
	// Line 1128, Address: 0x19ebdc, Func Offset: 0x5c
	// Line 1129, Address: 0x19ebe4, Func Offset: 0x64
	// Line 1130, Address: 0x19ebf0, Func Offset: 0x70
	// Line 1131, Address: 0x19ec18, Func Offset: 0x98
	// Line 1139, Address: 0x19ec8c, Func Offset: 0x10c
	// Line 1142, Address: 0x19ec94, Func Offset: 0x114
	// Line 1143, Address: 0x19ec9c, Func Offset: 0x11c
	// Line 1144, Address: 0x19ecb4, Func Offset: 0x134
	// Line 1145, Address: 0x19ecc4, Func Offset: 0x144
	// Line 1150, Address: 0x19eccc, Func Offset: 0x14c
	// Line 1151, Address: 0x19ecd8, Func Offset: 0x158
	// Line 1183, Address: 0x19ece0, Func Offset: 0x160
	// Func End, Address: 0x19ecf8, Func Offset: 0x178
}

// iSndLoadFaster__Fv
// Start address: 0x19ed00
void iSndLoadFaster()
{
	int8 hipname[32];
	int32 hip_idx;
	uint32 assetID;
	uint32 predicted_sector;
	uint32 first_offset;
	uint32 offset;
	SndBlockEntry* ep;
	SndBlockHdr* hdr;
	st_xST_XASSETINFO xinfo;
	uint32 data;
	int8* hipname;
	iSndFileInfo* ip;
	uint16* cmdbuf;
	VAGheader* vp;
	SndInfo* p;
	int32 sip;
	int32 i;
	uint32 sz;
	// Line 621, Address: 0x19ed00, Func Offset: 0
	// Line 631, Address: 0x19ed28, Func Offset: 0x28
	// Line 634, Address: 0x19ed34, Func Offset: 0x34
	// Line 640, Address: 0x19ed50, Func Offset: 0x50
	// Line 643, Address: 0x19ed5c, Func Offset: 0x5c
	// Line 644, Address: 0x19ed68, Func Offset: 0x68
	// Line 649, Address: 0x19ed6c, Func Offset: 0x6c
	// Line 650, Address: 0x19ed70, Func Offset: 0x70
	// Line 643, Address: 0x19ed78, Func Offset: 0x78
	// Line 647, Address: 0x19ed7c, Func Offset: 0x7c
	// Line 644, Address: 0x19ed84, Func Offset: 0x84
	// Line 647, Address: 0x19ed88, Func Offset: 0x88
	// Line 650, Address: 0x19ed98, Func Offset: 0x98
	// Line 648, Address: 0x19ed9c, Func Offset: 0x9c
	// Line 650, Address: 0x19eda0, Func Offset: 0xa0
	// Line 652, Address: 0x19edc8, Func Offset: 0xc8
	// Line 658, Address: 0x19edcc, Func Offset: 0xcc
	// Line 659, Address: 0x19ede4, Func Offset: 0xe4
	// Line 664, Address: 0x19ede8, Func Offset: 0xe8
	// Line 663, Address: 0x19edec, Func Offset: 0xec
	// Line 681, Address: 0x19edf0, Func Offset: 0xf0
	// Line 685, Address: 0x19edf4, Func Offset: 0xf4
	// Line 664, Address: 0x19edf8, Func Offset: 0xf8
	// Line 683, Address: 0x19edfc, Func Offset: 0xfc
	// Line 664, Address: 0x19ee00, Func Offset: 0x100
	// Line 665, Address: 0x19ee04, Func Offset: 0x104
	// Line 666, Address: 0x19ee08, Func Offset: 0x108
	// Line 667, Address: 0x19ee0c, Func Offset: 0x10c
	// Line 668, Address: 0x19ee10, Func Offset: 0x110
	// Line 670, Address: 0x19ee18, Func Offset: 0x118
	// Line 671, Address: 0x19ee20, Func Offset: 0x120
	// Line 685, Address: 0x19ee24, Func Offset: 0x124
	// Line 689, Address: 0x19ee2c, Func Offset: 0x12c
	// Line 690, Address: 0x19ee40, Func Offset: 0x140
	// Line 691, Address: 0x19ee70, Func Offset: 0x170
	// Line 692, Address: 0x19eea0, Func Offset: 0x1a0
	// Line 695, Address: 0x19eed0, Func Offset: 0x1d0
	// Line 698, Address: 0x19eed4, Func Offset: 0x1d4
	// Line 702, Address: 0x19eee0, Func Offset: 0x1e0
	// Line 703, Address: 0x19eef8, Func Offset: 0x1f8
	// Line 705, Address: 0x19ef00, Func Offset: 0x200
	// Line 704, Address: 0x19ef04, Func Offset: 0x204
	// Line 706, Address: 0x19ef0c, Func Offset: 0x20c
	// Line 707, Address: 0x19ef18, Func Offset: 0x218
	// Line 708, Address: 0x19ef20, Func Offset: 0x220
	// Line 709, Address: 0x19ef30, Func Offset: 0x230
	// Line 721, Address: 0x19ef34, Func Offset: 0x234
	// Line 723, Address: 0x19ef38, Func Offset: 0x238
	// Line 726, Address: 0x19ef50, Func Offset: 0x250
	// Line 733, Address: 0x19ef58, Func Offset: 0x258
	// Line 730, Address: 0x19ef60, Func Offset: 0x260
	// Line 733, Address: 0x19ef64, Func Offset: 0x264
	// Line 730, Address: 0x19ef78, Func Offset: 0x278
	// Line 733, Address: 0x19ef80, Func Offset: 0x280
	// Line 735, Address: 0x19ef88, Func Offset: 0x288
	// Line 730, Address: 0x19ef90, Func Offset: 0x290
	// Line 733, Address: 0x19ef98, Func Offset: 0x298
	// Line 730, Address: 0x19efa4, Func Offset: 0x2a4
	// Line 735, Address: 0x19efb0, Func Offset: 0x2b0
	// Line 744, Address: 0x19efb8, Func Offset: 0x2b8
	// Line 735, Address: 0x19efbc, Func Offset: 0x2bc
	// Line 738, Address: 0x19efd4, Func Offset: 0x2d4
	// Line 742, Address: 0x19efdc, Func Offset: 0x2dc
	// Line 743, Address: 0x19efe0, Func Offset: 0x2e0
	// Line 738, Address: 0x19efe4, Func Offset: 0x2e4
	// Line 742, Address: 0x19efec, Func Offset: 0x2ec
	// Line 743, Address: 0x19effc, Func Offset: 0x2fc
	// Line 744, Address: 0x19f000, Func Offset: 0x300
	// Line 745, Address: 0x19f004, Func Offset: 0x304
	// Line 746, Address: 0x19f010, Func Offset: 0x310
	// Line 747, Address: 0x19f018, Func Offset: 0x318
	// Line 748, Address: 0x19f024, Func Offset: 0x324
	// Line 749, Address: 0x19f030, Func Offset: 0x330
	// Line 750, Address: 0x19f03c, Func Offset: 0x33c
	// Line 754, Address: 0x19f044, Func Offset: 0x344
	// Line 755, Address: 0x19f05c, Func Offset: 0x35c
	// Line 757, Address: 0x19f064, Func Offset: 0x364
	// Line 759, Address: 0x19f068, Func Offset: 0x368
	// Line 757, Address: 0x19f074, Func Offset: 0x374
	// Line 759, Address: 0x19f07c, Func Offset: 0x37c
	// Line 764, Address: 0x19f090, Func Offset: 0x390
	// Line 778, Address: 0x19f0b0, Func Offset: 0x3b0
	// Line 779, Address: 0x19f0b4, Func Offset: 0x3b4
	// Line 778, Address: 0x19f0b8, Func Offset: 0x3b8
	// Line 779, Address: 0x19f0c8, Func Offset: 0x3c8
	// Line 780, Address: 0x19f0d0, Func Offset: 0x3d0
	// Line 781, Address: 0x19f0d4, Func Offset: 0x3d4
	// Line 783, Address: 0x19f0f0, Func Offset: 0x3f0
	// Line 787, Address: 0x19f0f8, Func Offset: 0x3f8
	// Line 788, Address: 0x19f110, Func Offset: 0x410
	// Line 790, Address: 0x19f118, Func Offset: 0x418
	// Line 794, Address: 0x19f124, Func Offset: 0x424
	// Line 790, Address: 0x19f128, Func Offset: 0x428
	// Line 791, Address: 0x19f134, Func Offset: 0x434
	// Line 794, Address: 0x19f148, Func Offset: 0x448
	// Line 797, Address: 0x19f150, Func Offset: 0x450
	// Line 798, Address: 0x19f164, Func Offset: 0x464
	// Line 799, Address: 0x19f194, Func Offset: 0x494
	// Line 800, Address: 0x19f1c4, Func Offset: 0x4c4
	// Line 801, Address: 0x19f1f4, Func Offset: 0x4f4
	// Line 806, Address: 0x19f1f8, Func Offset: 0x4f8
	// Line 810, Address: 0x19f204, Func Offset: 0x504
	// Line 813, Address: 0x19f214, Func Offset: 0x514
	// Line 814, Address: 0x19f21c, Func Offset: 0x51c
	// Line 816, Address: 0x19f234, Func Offset: 0x534
	// Line 818, Address: 0x19f248, Func Offset: 0x548
	// Line 819, Address: 0x19f254, Func Offset: 0x554
	// Line 820, Address: 0x19f268, Func Offset: 0x568
	// Line 822, Address: 0x19f274, Func Offset: 0x574
	// Line 825, Address: 0x19f278, Func Offset: 0x578
	// Line 826, Address: 0x19f27c, Func Offset: 0x57c
	// Line 827, Address: 0x19f280, Func Offset: 0x580
	// Line 825, Address: 0x19f284, Func Offset: 0x584
	// Line 826, Address: 0x19f294, Func Offset: 0x594
	// Line 827, Address: 0x19f298, Func Offset: 0x598
	// Line 828, Address: 0x19f29c, Func Offset: 0x59c
	// Line 829, Address: 0x19f2a8, Func Offset: 0x5a8
	// Line 830, Address: 0x19f2b0, Func Offset: 0x5b0
	// Line 831, Address: 0x19f2b8, Func Offset: 0x5b8
	// Line 832, Address: 0x19f2c0, Func Offset: 0x5c0
	// Line 833, Address: 0x19f2c8, Func Offset: 0x5c8
	// Line 834, Address: 0x19f2d0, Func Offset: 0x5d0
	// Line 835, Address: 0x19f2d4, Func Offset: 0x5d4
	// Line 836, Address: 0x19f2ec, Func Offset: 0x5ec
	// Line 839, Address: 0x19f2f4, Func Offset: 0x5f4
	// Line 837, Address: 0x19f2f8, Func Offset: 0x5f8
	// Line 839, Address: 0x19f2fc, Func Offset: 0x5fc
	// Line 837, Address: 0x19f308, Func Offset: 0x608
	// Line 839, Address: 0x19f310, Func Offset: 0x610
	// Line 850, Address: 0x19f324, Func Offset: 0x624
	// Line 851, Address: 0x19f328, Func Offset: 0x628
	// Line 852, Address: 0x19f32c, Func Offset: 0x62c
	// Line 851, Address: 0x19f330, Func Offset: 0x630
	// Line 852, Address: 0x19f338, Func Offset: 0x638
	// Line 1091, Address: 0x19f350, Func Offset: 0x650
	// Line 1094, Address: 0x19f35c, Func Offset: 0x65c
	// Line 1097, Address: 0x19f368, Func Offset: 0x668
	// Line 1098, Address: 0x19f370, Func Offset: 0x670
	// Line 1102, Address: 0x19f384, Func Offset: 0x684
	// Line 1103, Address: 0x19f390, Func Offset: 0x690
	// Line 1104, Address: 0x19f39c, Func Offset: 0x69c
	// Line 1107, Address: 0x19f3b0, Func Offset: 0x6b0
	// Line 1108, Address: 0x19f3d0, Func Offset: 0x6d0
	// Line 1109, Address: 0x19f3d8, Func Offset: 0x6d8
	// Line 1110, Address: 0x19f3e0, Func Offset: 0x6e0
	// Func End, Address: 0x19f410, Func Offset: 0x710
}

// iSndInit__Fv
// Start address: 0x19f410
void iSndInit()
{
	int32 i;
	int8* module[3];
	int8 empty[1];
	// Line 550, Address: 0x19f410, Func Offset: 0
	// Line 560, Address: 0x19f424, Func Offset: 0x14
	// Line 550, Address: 0x19f428, Func Offset: 0x18
	// Line 560, Address: 0x19f42c, Func Offset: 0x1c
	// Line 561, Address: 0x19f434, Func Offset: 0x24
	// Line 562, Address: 0x19f440, Func Offset: 0x30
	// Line 576, Address: 0x19f44c, Func Offset: 0x3c
	// Line 577, Address: 0x19f458, Func Offset: 0x48
	// Line 578, Address: 0x19f460, Func Offset: 0x50
	// Line 579, Address: 0x19f470, Func Offset: 0x60
	// Line 580, Address: 0x19f488, Func Offset: 0x78
	// Line 583, Address: 0x19f498, Func Offset: 0x88
	// Line 584, Address: 0x19f4a0, Func Offset: 0x90
	// Line 585, Address: 0x19f4a8, Func Offset: 0x98
	// Line 588, Address: 0x19f4b0, Func Offset: 0xa0
	// Line 591, Address: 0x19f4c0, Func Offset: 0xb0
	// Line 593, Address: 0x19f4c8, Func Offset: 0xb8
	// Line 594, Address: 0x19f4d0, Func Offset: 0xc0
	// Func End, Address: 0x19f4ec, Func Offset: 0xdc
}

// iSndSuspendCD__FUi
// Start address: 0x19f4f0
void iSndSuspendCD(uint32 suspend)
{
	// Line 524, Address: 0x19f4f0, Func Offset: 0
	// Line 527, Address: 0x19f51c, Func Offset: 0x2c
	// Line 528, Address: 0x19f524, Func Offset: 0x34
	// Line 529, Address: 0x19f52c, Func Offset: 0x3c
	// Line 530, Address: 0x19f53c, Func Offset: 0x4c
	// Line 531, Address: 0x19f54c, Func Offset: 0x5c
	// Line 533, Address: 0x19f55c, Func Offset: 0x6c
	// Line 534, Address: 0x19f568, Func Offset: 0x78
	// Line 535, Address: 0x19f570, Func Offset: 0x80
	// Line 538, Address: 0x19f580, Func Offset: 0x90
	// Line 537, Address: 0x19f584, Func Offset: 0x94
	// Line 538, Address: 0x19f588, Func Offset: 0x98
	// Line 539, Address: 0x19f594, Func Offset: 0xa4
	// Line 542, Address: 0x19f5a0, Func Offset: 0xb0
	// Line 545, Address: 0x19f5a8, Func Offset: 0xb8
	// Line 546, Address: 0x19f5c4, Func Offset: 0xd4
	// Func End, Address: 0x19f5e4, Func Offset: 0xf4
}

// iSndLookup__FUi
// Start address: 0x19f5f0
iSndFileInfo* iSndLookup(uint32 id)
{
	iSndFileInfo* eep;
	uint32 i;
	// Line 514, Address: 0x19f5f0, Func Offset: 0
	// Line 513, Address: 0x19f5f4, Func Offset: 0x4
	// Line 514, Address: 0x19f5fc, Func Offset: 0xc
	// Line 515, Address: 0x19f604, Func Offset: 0x14
	// Line 516, Address: 0x19f610, Func Offset: 0x20
	// Line 517, Address: 0x19f618, Func Offset: 0x28
	// Line 518, Address: 0x19f62c, Func Offset: 0x3c
	// Line 519, Address: 0x19f630, Func Offset: 0x40
	// Func End, Address: 0x19f638, Func Offset: 0x48
}

// TransferDataToIOP__FUiUiUi
// Start address: 0x19f640
int32 TransferDataToIOP(uint32 source, uint32 dest, uint32 size)
{
	sceSifDmaData JDMA;
	// Line 371, Address: 0x19f640, Func Offset: 0
	// Line 374, Address: 0x19f664, Func Offset: 0x24
	// Line 375, Address: 0x19f670, Func Offset: 0x30
	// Line 377, Address: 0x19f684, Func Offset: 0x44
	// Line 378, Address: 0x19f6a0, Func Offset: 0x60
	// Line 379, Address: 0x19f6a8, Func Offset: 0x68
	// Line 380, Address: 0x19f6ac, Func Offset: 0x6c
	// Line 381, Address: 0x19f6b0, Func Offset: 0x70
	// Line 383, Address: 0x19f6b4, Func Offset: 0x74
	// Line 385, Address: 0x19f6c8, Func Offset: 0x88
	// Line 386, Address: 0x19f6d4, Func Offset: 0x94
	// Line 388, Address: 0x19f6dc, Func Offset: 0x9c
	// Line 389, Address: 0x19f6e0, Func Offset: 0xa0
	// Func End, Address: 0x19f700, Func Offset: 0xc0
}

