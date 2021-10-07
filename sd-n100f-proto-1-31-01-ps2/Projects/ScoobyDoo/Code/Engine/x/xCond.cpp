typedef struct iConditionRuntime;
typedef struct _rxHeapSuperBlockDescriptor;
typedef struct tagiFloorTri;
typedef struct _rwResEntryTag;
typedef struct _RxHeap;
typedef struct _rxHeapBlockHeader;
typedef struct xCondition;
typedef enum _RxClusterValidityReq;
typedef struct _rxHeapFreeBlock;
typedef struct _RpMaterial;
typedef struct _RxPipelineNodeTopSortData;
typedef struct _RpVertexNormal;
typedef struct xTrigger;
typedef struct xNavLink;
typedef struct _RwTexture;
typedef struct _RxPipelineNode;
typedef struct _RxClusterDefinition;
typedef enum _RwTextureFilterMode;
typedef struct _RxPipelineNodeParam;
typedef struct _RxPipelineCluster;
typedef enum _rxEmbeddedPacketState;
typedef struct _RxPipeline;
typedef struct _iEntryPointRuntime;
typedef struct p2Camera;
typedef struct _RxNodeDefinition;
typedef enum _RxClusterValid;
typedef struct iConditionResource;
typedef struct xScene;
typedef struct _RpSector;
typedef struct tagiFloor;
typedef struct xNavPoint;
typedef struct _RwSurfaceProperties;
typedef struct iActionRuntime;
typedef struct xMarker;
typedef struct XStreamHeader;
typedef enum _rpWorldRenderOrder;
typedef struct xAction;
typedef struct Vector3D;
typedef struct _RwV3d;
typedef struct xEntryPoint;
typedef struct _RpPolygon;
typedef struct iMarkerResource;
typedef struct _tagxEnv;
typedef struct _iLightRuntime;
typedef struct _RxPipelineRequiresCluster;
typedef struct _tagiEnvRuntime;
typedef struct iActionResource;
typedef struct p2CameraVersion;
typedef struct _RwTexDictionary;
typedef struct _RpWorldSector;
typedef struct _rxReq;
typedef struct iTriggerResource;
typedef struct iLightResource;
typedef struct tagXStreamDirectoryEntry;
typedef struct _RpMeshHeader;
typedef struct _RwObject;
typedef struct _RpWorld;
typedef struct _RpCollSector;
typedef struct _RxOutputSpec;
typedef struct _RwBBox;
typedef struct _RxClusterRef;
typedef struct iEntryPointResource;
typedef struct _RwLLLink;
typedef struct _RwRaster;
typedef struct _RpMaterialList;
typedef struct _RxIoSpec;
typedef struct iCameraResource;
typedef struct _RwRGBA;
typedef struct xRule;
typedef struct _RxNodeMethods;
typedef struct iRuleResource;
typedef struct xCamera;
typedef enum _RxClusterForcePresent;
typedef struct xLight;
typedef struct _RxPacket;
typedef enum _RxNodeDefEditable;
typedef struct _RwTexCoords;
typedef struct _RxClusterUnion;
typedef enum _RwTextureAddressMode;
typedef struct iDisplayCamera;
typedef struct _RxCluster;
typedef struct _RwLinkList;
typedef struct tagXStreamMDSDirectory;

typedef void(*type_2)(_rwResEntryTag*);
typedef int32(*type_3)(_RxPipelineNode*, _RxPipelineNodeParam*);
typedef int32(*type_4)(_RxNodeDefinition*);
typedef void(*type_5)(_RxNodeDefinition*);
typedef int32(*type_7)(_RxPipelineNode*);
typedef void(*type_9)(_RxPipelineNode*);
typedef int32(*type_12)(_RxPipelineNode*, _RxPipeline*);
typedef _RpWorldSector*(*type_13)(_RpWorldSector*);
typedef uint32(*type_17)(_RxPipelineNode*, uint32, uint32, void*);

typedef uint16 type_0[3];
typedef tagXStreamDirectoryEntry type_1[1000];
typedef uint32 type_6[4];
typedef uint16 type_8[3];
typedef float32 type_10[3];
typedef iTriggerResource* type_11[20];
typedef int8 type_14[2048];
typedef iTriggerResource* type_15[20];
typedef iLightResource type_16[2];
typedef iTriggerResource* type_18[20];
typedef iTriggerResource* type_19[20];
typedef _RxCluster type_20[1];
typedef iTriggerResource* type_21[20];
typedef iTriggerResource* type_22[20];
typedef int8 type_23[32];
typedef int8 type_24[32];
typedef iTriggerResource* type_25[20];
typedef p2CameraVersion type_26[5];
typedef Vector3D type_27[4];
typedef int8 type_28[128];
typedef iTriggerResource* type_29[20];
typedef iTriggerResource* type_30[20];
typedef iTriggerResource* type_31[20];
typedef iTriggerResource* type_32[20];
typedef iTriggerResource* type_33[20];
typedef Vector3D type_34[4];

struct iConditionRuntime
{
	xCondition* m_operand;
	uint16 m_match;
	uint16 m_trigger;
};

struct _rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	_rxHeapSuperBlockDescriptor* next;
};

struct tagiFloorTri
{
	uint16 m_v[3];
	uint16 m_n;
};

struct _rwResEntryTag
{
	_RwLLLink link;
	int32 size;
	void* owner;
	_rwResEntryTag** ownerRef;
	void(*destroyNotify)(_rwResEntryTag*);
};

struct _RxHeap
{
	uint32 superBlockSize;
	_rxHeapSuperBlockDescriptor* head;
	_rxHeapBlockHeader* headBlock;
	_rxHeapFreeBlock* freeBlocks;
	uint32 entriesAlloced;
	uint32 entriesUsed;
};

struct _rxHeapBlockHeader
{
	_rxHeapBlockHeader* prev;
	_rxHeapBlockHeader* next;
	uint32 size;
	_rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
};

struct xCondition
{
	iConditionResource* m_resource;
	iConditionRuntime* m_runtime;
};

enum _RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct _rxHeapFreeBlock
{
	uint32 size;
	_rxHeapBlockHeader* ptr;
};

struct _RpMaterial
{
	_RwTexture* texture;
	_RwRGBA color;
	_RxPipeline* pipeline;
	_RwSurfaceProperties surfaceProps;
	int16 refCount;
	int16 pad;
};

struct _RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	_rxReq* req;
	void* initialisationData;
	uint32 initialisationDataSize;
};

struct _RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

struct xTrigger
{
	iTriggerResource* m_resource;
};

struct xNavLink
{
	uint8 m_flags;
	uint8 m_countLocked;
	uint8 m_countOccupied;
	uint8 m_unused2;
	uint32 m_unused;
	float32 m_distance;
	Vector3D m_dir;
	xNavPoint* m_linkTo;
	xNavPoint* m_linkFrom;
};

struct _RwTexture
{
	_RwRaster* raster;
	_RwTexDictionary* dict;
	_RwLLLink lInDictionary;
	int8 name[32];
	int8 mask[32];
	int32 refCount;
	_RwTextureFilterMode filtering;
	_RwTextureAddressMode addressingU;
	_RwTextureAddressMode addressingV;
};

struct _RxPipelineNode
{
	_RxNodeDefinition* nodeDef;
	uint32 numOutputs;
	uint32* outputs;
	_RxPipelineCluster** slotClusterRefs;
	uint32* slotsContinue;
	void* privateData;
	uint32* inputToClusterSlot;
	_RxPipelineNodeTopSortData* topSortData;
};

struct _RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

enum _RwTextureFilterMode
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

struct _RxPipelineNodeParam
{
	void* dataParam;
	_RxHeap* heap;
};

struct _RxPipelineCluster
{
	_RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

enum _rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

struct _RxPipeline
{
	int32 locked;
	uint32 numNodes;
	_RxPipelineNode* nodes;
	void* nodesBlock;
	uint32 packetNumClusterSlots;
	_rxEmbeddedPacketState embeddedPacketState;
	_RxPacket* embeddedPacket;
	uint32 numInputRequirements;
	_RxPipelineRequiresCluster* inputRequirements;
	uint32* superBlock;
	uint32 entryPoint;
};

struct _iEntryPointRuntime
{
	uint32 m_enabled;
};

struct p2Camera
{
	Vector3D m_pos;
	Vector3D m_rot;
	float32 m_fov;
};

struct _RxNodeDefinition
{
	int8* name;
	_RxNodeMethods nodeMethods;
	_RxIoSpec io;
	uint32 pipelineNodePrivateDataSize;
	_RxNodeDefEditable editable;
	int32 InputPipesCnt;
};

enum _RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct iConditionResource
{
	uint8 m_osFlags;
	uint8 m_onFlags;
	uint8 m_whoFlags;
	uint8 m_operator;
	uint8 m_cmdType;
	uint8 m_cmd;
	uint16 pad;
	uint32 m_cmdParameter;
};

struct xScene
{
	uint32 m_sceneId;
	uint32 m_cameraCount;
	xCamera* m_camera;
	iDisplayCamera m_displayCamera;
	uint32 m_lightCount;
	xLight* m_light;
	uint32 m_triggerCount;
	xTrigger* m_trigger;
	uint32 m_triggerNoWalkCount;
	xTrigger** m_triggerNoWalk;
	uint32* m_triggerNoWalkFloorMask;
	uint32 m_triggerWalkCount;
	xTrigger** m_triggerWalk;
	uint32 m_triggerGenericCount;
	xTrigger** m_triggerGeneric;
	uint32* m_triggerGenericFloorMask;
	uint32* m_triggerGenericGameEventFlags;
	uint32 m_triggerConditionCount;
	xCondition* m_triggerCondition;
	uint32 m_triggerEffectCount;
	xTrigger** m_triggerEffect;
	uint32 m_triggerMaterialCount;
	xTrigger** m_triggerMaterial;
	uint32 m_markerCount;
	xMarker* m_marker;
	uint32 m_entryPointCount;
	xEntryPoint* m_entryPoint;
	uint32 m_navPointCount;
	xNavPoint* m_navPoint;
	tagiFloor* m_floor;
	int32 m_cullPlayerCount;
	iTriggerResource* m_cullPlayer[20];
	int32 m_cullNPCCount;
	iTriggerResource* m_cullNPC[20];
	int32 m_cullRTObjCount;
	iTriggerResource* m_cullRTObj[20];
	int32 m_cullVFXCount;
	iTriggerResource* m_cullVFX[20];
	int32 m_cullSFXCount;
	iTriggerResource* m_cullSFX[20];
	int32 m_cullLightCount;
	iTriggerResource* m_cullLight[20];
	int32 m_visPlayerCount;
	iTriggerResource* m_visPlayer[20];
	int32 m_visNPCCount;
	iTriggerResource* m_visNPC[20];
	int32 m_visRTObjCount;
	iTriggerResource* m_visRTObj[20];
	int32 m_visVFXCount;
	iTriggerResource* m_visVFX[20];
	int32 m_visSFXCount;
	iTriggerResource* m_visSFX[20];
	int32 m_visLightCount;
	iTriggerResource* m_visLight[20];
	Vector3D m_ambientLight;
	Vector3D m_sunColor;
	Vector3D m_sunDir;
	_tagxEnv m_env;
};

struct _RpSector
{
	int32 type;
};

struct tagiFloor
{
	float32 m_x1;
	float32 m_y1;
	float32 m_z1;
	float32 m_x2;
	float32 m_y2;
	float32 m_z2;
	uint32 m_unit;
	float32 m_w;
	float32 m_h;
	uint32 m_vCount;
	uint32 m_nCount;
	uint32 m_tCount;
	Vector3D* m_v;
	Vector3D* m_n;
	tagiFloorTri* m_t;
	uint32* m_tmask;
};

struct xNavPoint
{
	uint32 m_linkCount;
	xNavLink* m_link;
	Vector3D m_pos;
	float32 m_cost;
	float32 m_heuristic;
	float32 m_f;
	xNavPoint* m_parent;
	uint16 m_flags;
	uint16 m_occupiedCount;
	uint32 m_unused;
};

struct _RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

struct iActionRuntime
{
	xAction* m_and;
};

struct xMarker
{
	iMarkerResource* m_resource;
	void** m_runtime;
};

struct XStreamHeader
{
	uint32 id;
	uint32 versionID;
	uint8 month;
	uint8 day;
	uint8 hour;
	uint8 minute;
	uint32 mdsOffset;
	uint32 mdsLength;
	tagXStreamMDSDirectory directory;
	int8 safety[2048];
};

enum _rpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct xAction
{
	iActionResource* m_resource;
	iActionRuntime* m_runtime;
};

struct Vector3D
{
	float32 x;
	float32 y;
	float32 z;
};

struct _RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct xEntryPoint
{
	iEntryPointResource* m_resource;
	_iEntryPointRuntime* m_runtime;
};

struct _RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
};

struct iMarkerResource
{
	Vector3D m_pos;
};

struct _tagxEnv
{
	_tagiEnvRuntime* m_runtime;
};

struct _iLightRuntime
{
	uint8 m_enabled;
	uint8 m_dir;
	uint8 m_mode;
	float32 m_falloff[3];
	float32 m_weight;
	int16 m_frameSpeed;
	int16 m_frameCount;
	float32 m_speed;
	iLightResource m_anchor[2];
};

struct _RxPipelineRequiresCluster
{
	_RxClusterDefinition* clusterDef;
	_RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct _tagiEnvRuntime
{
	_RpWorld* world;
	Vector3D world_origin;
	_RwTexDictionary* tex_dict;
};

struct iActionResource
{
	uint8 m_cmdType;
	uint8 m_cmd;
	uint16 pad;
	uint32 m_cmdParameter;
};

struct p2CameraVersion
{
	uint16 m_introStart;
	uint16 m_loopStart;
	uint16 m_loopEnd;
	uint16 m_exitEnd;
	uint16 m_flashFrame;
	uint8 m_introRate;
	uint8 m_loopRate;
	uint8 m_exitRate;
	uint8 m_flashRate;
	uint16 m_flags;
};

struct _RwTexDictionary
{
	_RwObject object;
	_RwLinkList texturesInDict;
	_RwLLLink lInInstance;
};

struct _RpWorldSector
{
	int32 type;
	_RpPolygon* polygons;
	_RwV3d* vertices;
	_RpVertexNormal* normals;
	_RwTexCoords* vertexTexCoords;
	_RwRGBA* preLitLum;
	_rwResEntryTag* repEntry;
	_RwLinkList collAtomicsInWorldSector;
	_RwLinkList noCollAtomicsInWorldSector;
	_RwLinkList lightsInWorldSector;
	_RwBBox boundingBox;
	_RpCollSector* colSectorRoot;
	_RpMeshHeader* mesh;
	_RxPipeline* pipeline;
	uint16 matListWindowBase;
	uint16 numVertices;
	uint16 numPolygons;
};

struct _rxReq
{
};

struct iTriggerResource
{
	uint8 m_type;
	uint8 m_geomType;
	uint8 m_enabled;
	uint8 pad;
	Vector3D m_p[4];
	uint32 m_ruleCount;
	xRule* m_rule;
	uint32 m_floorMask;
	uint32 m_flags;
	uint32 m_cameraLink;
};

struct iLightResource
{
	uint32 m_type;
	Vector3D m_pos;
	Vector3D m_rot;
	Vector3D m_color;
	int32 m_fov;
};

struct tagXStreamDirectoryEntry
{
	uint32 id;
	uint32 type;
	uint32 offset;
	uint32 length;
};

struct _RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct _RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct _RpWorld
{
	_RwObject object;
	_rpWorldRenderOrder renderOrder;
	_RpMaterialList matList;
	_RpSector* rootSector;
	int32 numClumpsInWorld;
	_RwLLLink* currentClumpLink;
	_RwLinkList clumpList;
	_RwLinkList lightList;
	_RwLinkList directionalLightList;
	_RwV3d worldOrigin;
	_RwBBox boundingBox;
	_RwSurfaceProperties surfaceProps;
	_RpWorldSector*(*renderCallBack)(_RpWorldSector*);
	_RxPipeline* pipeline;
};

struct _RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
};

struct _RxOutputSpec
{
	int8* name;
	_RxClusterValid* outputClusters;
	_RxClusterValid allOtherClusters;
};

struct _RwBBox
{
	_RwV3d sup;
	_RwV3d inf;
};

struct _RxClusterRef
{
	_RxClusterDefinition* clusterDef;
	_RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct iEntryPointResource
{
	uint8 m_type;
	uint8 m_geomType;
	uint8 m_nextCameraID;
	uint8 m_nextMarkerID;
	Vector3D m_p[4];
	uint32 m_floorMask;
	uint32 m_nextSceneAssetID;
	Vector3D m_nextAng;
};

struct _RwLLLink
{
	_RwLLLink* next;
	_RwLLLink* prev;
};

struct _RwRaster
{
	_RwRaster* parent;
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

struct _RpMaterialList
{
	_RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct _RxIoSpec
{
	uint32 numClustersOfInterest;
	_RxClusterRef* clustersOfInterest;
	_RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	_RxOutputSpec* outputs;
};

struct iCameraResource
{
	uint16 m_plateOffset;
	uint16 m_versions;
	p2CameraVersion m_version[5];
	uint32 m_frameCount;
	p2Camera* m_cameras;
};

struct _RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct xRule
{
	iRuleResource* m_resource;
	void* m_runtime;
};

struct _RxNodeMethods
{
	int32(*nodeBody)(_RxPipelineNode*, _RxPipelineNodeParam*);
	int32(*nodeInit)(_RxNodeDefinition*);
	void(*nodeTerm)(_RxNodeDefinition*);
	int32(*pipelineNodeInit)(_RxPipelineNode*);
	void(*pipelineNodeTerm)(_RxPipelineNode*);
	int32(*pipelineNodeConfig)(_RxPipelineNode*, _RxPipeline*);
	uint32(*configMsgHandler)(_RxPipelineNode*, uint32, uint32, void*);
};

struct iRuleResource
{
	uint32 m_actionCount;
	xAction* m_action;
	uint32 m_conditionCount;
	xCondition* m_condition;
};

struct xCamera
{
	iCameraResource* m_resource;
	void** m_runtime;
};

enum _RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct xLight
{
	iLightResource* m_resource;
	_iLightRuntime* m_runtime;
};

struct _RxPacket
{
	uint16 flags;
	uint16 numClusters;
	_RxPipeline* pipeline;
	uint32* inputToClusterSlot;
	uint32* slotsContinue;
	_RxPipelineCluster** slotClusterRefs;
	_RxCluster clusters[1];
};

enum _RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct _RwTexCoords
{
	float32 u;
	float32 v;
};

struct _RxClusterUnion
{
	union
	{
		_RxClusterDefinition* clusterDef;
		_RxPipelineCluster* clusterRef;
	};
};

enum _RwTextureAddressMode
{
	rwTEXTUREADDRESSNATEXTUREADDRESS,
	rwTEXTUREADDRESSWRAP,
	rwTEXTUREADDRESSMIRROR,
	rwTEXTUREADDRESSCLAMP,
	rwTEXTUREADDRESSBORDER,
	rwTEXTUREADDRESSMODEFORCEENUMSIZEINT = 0x7fffffff
};

struct iDisplayCamera
{
	Vector3D m_pos;
	Vector3D m_rot;
	float32 m_fov;
};

struct _RxCluster
{
	uint16 flags;
	uint16 stride;
	void* data;
	void* currentData;
	uint32 numAlloced;
	uint32 numUsed;
	_RxClusterUnion clusterUnion;
	uint32 attributes;
};

struct _RwLinkList
{
	_RwLLLink link;
};

struct tagXStreamMDSDirectory
{
	uint32 count;
	tagXStreamDirectoryEntry directory[1000];
};

xScene* xScene_current;
int8 vAssertBuf2[128];
XStreamHeader currentHeader;

void xConditionGameEventBase(xCondition* c, uint32 eventType, uint32 eventCmd, uint32 eventData);
void xConditionGameEvent(xCondition* c, uint32 eventWho, uint32 eventType, uint32 eventCmd, uint32 eventData);
int32 xConditionEvaluate(xCondition* c);
void xConditionInitRuntime(iConditionRuntime* c);

// xConditionGameEventBase__FP10xConditionUiUiUiUi
// Start address: 0x360cd0
void xConditionGameEventBase(xCondition* c, uint32 eventType, uint32 eventCmd, uint32 eventData)
{
	iConditionResource* r;
	// Line 210, Address: 0x360cd0, Func Offset: 0
	// Line 213, Address: 0x360cf8, Func Offset: 0x28
	// Line 214, Address: 0x360d98, Func Offset: 0xc8
	// Line 216, Address: 0x360e3c, Func Offset: 0x16c
	// Line 219, Address: 0x360e40, Func Offset: 0x170
	// Line 222, Address: 0x360e68, Func Offset: 0x198
	// Line 223, Address: 0x360e74, Func Offset: 0x1a4
	// Line 227, Address: 0x360e7c, Func Offset: 0x1ac
	// Line 228, Address: 0x360e8c, Func Offset: 0x1bc
	// Line 232, Address: 0x360e94, Func Offset: 0x1c4
	// Line 233, Address: 0x360ea4, Func Offset: 0x1d4
	// Line 237, Address: 0x360eac, Func Offset: 0x1dc
	// Line 238, Address: 0x360ebc, Func Offset: 0x1ec
	// Line 242, Address: 0x360ec4, Func Offset: 0x1f4
	// Line 243, Address: 0x360ed4, Func Offset: 0x204
	// Line 248, Address: 0x360edc, Func Offset: 0x20c
	// Line 256, Address: 0x360ee4, Func Offset: 0x214
	// Line 259, Address: 0x360f10, Func Offset: 0x240
	// Line 262, Address: 0x360f30, Func Offset: 0x260
	// Line 263, Address: 0x360f38, Func Offset: 0x268
	// Line 266, Address: 0x360f40, Func Offset: 0x270
	// Line 267, Address: 0x360f4c, Func Offset: 0x27c
	// Line 273, Address: 0x360f54, Func Offset: 0x284
	// Line 276, Address: 0x360f74, Func Offset: 0x2a4
	// Line 277, Address: 0x360f80, Func Offset: 0x2b0
	// Line 280, Address: 0x360f88, Func Offset: 0x2b8
	// Line 281, Address: 0x360f94, Func Offset: 0x2c4
	// Line 287, Address: 0x360f9c, Func Offset: 0x2cc
	// Line 290, Address: 0x360fc8, Func Offset: 0x2f8
	// Line 291, Address: 0x360fd4, Func Offset: 0x304
	// Line 295, Address: 0x360fdc, Func Offset: 0x30c
	// Line 296, Address: 0x360fe8, Func Offset: 0x318
	// Line 299, Address: 0x360ff0, Func Offset: 0x320
	// Line 300, Address: 0x360ffc, Func Offset: 0x32c
	// Line 306, Address: 0x361004, Func Offset: 0x334
	// Line 309, Address: 0x361024, Func Offset: 0x354
	// Line 310, Address: 0x361030, Func Offset: 0x360
	// Line 313, Address: 0x361038, Func Offset: 0x368
	// Line 314, Address: 0x361044, Func Offset: 0x374
	// Line 320, Address: 0x36104c, Func Offset: 0x37c
	// Line 323, Address: 0x361060, Func Offset: 0x390
	// Line 324, Address: 0x36106c, Func Offset: 0x39c
	// Line 330, Address: 0x361074, Func Offset: 0x3a4
	// Line 333, Address: 0x361094, Func Offset: 0x3c4
	// Line 334, Address: 0x3610a0, Func Offset: 0x3d0
	// Line 337, Address: 0x3610a8, Func Offset: 0x3d8
	// Line 338, Address: 0x3610b4, Func Offset: 0x3e4
	// Line 343, Address: 0x3610bc, Func Offset: 0x3ec
	// Line 346, Address: 0x3610dc, Func Offset: 0x40c
	// Line 347, Address: 0x3610e8, Func Offset: 0x418
	// Line 350, Address: 0x3610f0, Func Offset: 0x420
	// Line 358, Address: 0x3610fc, Func Offset: 0x42c
	// Line 361, Address: 0x361104, Func Offset: 0x434
	// Line 366, Address: 0x361110, Func Offset: 0x440
	// Line 368, Address: 0x36111c, Func Offset: 0x44c
	// Line 369, Address: 0x3611d0, Func Offset: 0x500
	// Line 370, Address: 0x3611f4, Func Offset: 0x524
	// Func End, Address: 0x361214, Func Offset: 0x544
}

// xConditionGameEvent__FP10xConditionUiUiUiUi
// Start address: 0x361220
void xConditionGameEvent(xCondition* c, uint32 eventWho, uint32 eventType, uint32 eventCmd, uint32 eventData)
{
	iConditionResource* r;
	int32 dataMatch;
	int32 cmdMatch;
	int32 typeMatch;
	int32 whoMatch;
	int32 osMatch;
	// Line 75, Address: 0x361220, Func Offset: 0
	// Line 77, Address: 0x361260, Func Offset: 0x40
	// Line 78, Address: 0x361264, Func Offset: 0x44
	// Line 79, Address: 0x361268, Func Offset: 0x48
	// Line 84, Address: 0x36126c, Func Offset: 0x4c
	// Line 86, Address: 0x36130c, Func Offset: 0xec
	// Line 87, Address: 0x361310, Func Offset: 0xf0
	// Line 90, Address: 0x3613b0, Func Offset: 0x190
	// Line 92, Address: 0x3613bc, Func Offset: 0x19c
	// Line 95, Address: 0x3613d0, Func Offset: 0x1b0
	// Line 98, Address: 0x3613e4, Func Offset: 0x1c4
	// Line 104, Address: 0x3613ec, Func Offset: 0x1cc
	// Line 105, Address: 0x3613f8, Func Offset: 0x1d8
	// Line 106, Address: 0x361408, Func Offset: 0x1e8
	// Line 109, Address: 0x361428, Func Offset: 0x208
	// Line 114, Address: 0x361430, Func Offset: 0x210
	// Line 117, Address: 0x361440, Func Offset: 0x220
	// Line 120, Address: 0x361468, Func Offset: 0x248
	// Line 121, Address: 0x361478, Func Offset: 0x258
	// Line 122, Address: 0x361484, Func Offset: 0x264
	// Line 123, Address: 0x361494, Func Offset: 0x274
	// Line 124, Address: 0x361498, Func Offset: 0x278
	// Line 127, Address: 0x3614a0, Func Offset: 0x280
	// Line 128, Address: 0x3614b0, Func Offset: 0x290
	// Line 129, Address: 0x3614bc, Func Offset: 0x29c
	// Line 130, Address: 0x3614cc, Func Offset: 0x2ac
	// Line 138, Address: 0x3614d0, Func Offset: 0x2b0
	// Line 141, Address: 0x3614e4, Func Offset: 0x2c4
	// Line 142, Address: 0x3614e8, Func Offset: 0x2c8
	// Line 145, Address: 0x3614f0, Func Offset: 0x2d0
	// Line 147, Address: 0x361500, Func Offset: 0x2e0
	// Line 148, Address: 0x36151c, Func Offset: 0x2fc
	// Line 150, Address: 0x36152c, Func Offset: 0x30c
	// Line 152, Address: 0x36154c, Func Offset: 0x32c
	// Line 160, Address: 0x361554, Func Offset: 0x334
	// Line 163, Address: 0x361568, Func Offset: 0x348
	// Line 166, Address: 0x361594, Func Offset: 0x374
	// Line 167, Address: 0x3615a4, Func Offset: 0x384
	// Line 168, Address: 0x3615a8, Func Offset: 0x388
	// Line 171, Address: 0x3615b0, Func Offset: 0x390
	// Line 172, Address: 0x3615c0, Func Offset: 0x3a0
	// Line 173, Address: 0x3615c4, Func Offset: 0x3a4
	// Line 176, Address: 0x3615cc, Func Offset: 0x3ac
	// Line 177, Address: 0x3615dc, Func Offset: 0x3bc
	// Line 189, Address: 0x3615e0, Func Offset: 0x3c0
	// Line 194, Address: 0x3615f8, Func Offset: 0x3d8
	// Line 196, Address: 0x361604, Func Offset: 0x3e4
	// Line 197, Address: 0x3616b8, Func Offset: 0x498
	// Line 202, Address: 0x3616dc, Func Offset: 0x4bc
	// Line 203, Address: 0x3616e8, Func Offset: 0x4c8
	// Line 205, Address: 0x3616f8, Func Offset: 0x4d8
	// Line 207, Address: 0x361718, Func Offset: 0x4f8
	// Func End, Address: 0x36174c, Func Offset: 0x52c
}

// xConditionEvaluate__FP10xCondition
// Start address: 0x361750
int32 xConditionEvaluate(xCondition* c)
{
	xCondition* idx;
	int32 isTrue;
	// Line 34, Address: 0x361750, Func Offset: 0
	// Line 36, Address: 0x36175c, Func Offset: 0xc
	// Line 38, Address: 0x361760, Func Offset: 0x10
	// Line 39, Address: 0x361800, Func Offset: 0xb0
	// Line 41, Address: 0x3618a4, Func Offset: 0x154
	// Line 43, Address: 0x3618ac, Func Offset: 0x15c
	// Line 45, Address: 0x3618b4, Func Offset: 0x164
	// Line 47, Address: 0x3618c0, Func Offset: 0x170
	// Line 49, Address: 0x3618d0, Func Offset: 0x180
	// Line 52, Address: 0x36190c, Func Offset: 0x1bc
	// Line 53, Address: 0x361930, Func Offset: 0x1e0
	// Line 56, Address: 0x361938, Func Offset: 0x1e8
	// Line 57, Address: 0x36195c, Func Offset: 0x20c
	// Line 60, Address: 0x361964, Func Offset: 0x214
	// Line 66, Address: 0x36198c, Func Offset: 0x23c
	// Line 67, Address: 0x361990, Func Offset: 0x240
	// Line 69, Address: 0x36199c, Func Offset: 0x24c
	// Line 72, Address: 0x3619a8, Func Offset: 0x258
	// Func End, Address: 0x3619bc, Func Offset: 0x26c
}

// xConditionInitRuntime__FP17iConditionRuntime
// Start address: 0x3619c0
void xConditionInitRuntime(iConditionRuntime* c)
{
	// Line 25, Address: 0x3619c0, Func Offset: 0
	// Line 26, Address: 0x3619d0, Func Offset: 0x10
	// Line 28, Address: 0x361a70, Func Offset: 0xb0
	// Line 29, Address: 0x361a74, Func Offset: 0xb4
	// Line 30, Address: 0x361a78, Func Offset: 0xb8
	// Line 31, Address: 0x361a80, Func Offset: 0xc0
	// Func End, Address: 0x361a94, Func Offset: 0xd4
}

