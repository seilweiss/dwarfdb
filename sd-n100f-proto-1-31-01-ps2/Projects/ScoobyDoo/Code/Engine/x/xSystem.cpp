typedef struct _RpSector;
typedef struct _rxHeapSuperBlockDescriptor;
typedef struct _rwResEntryTag;
typedef struct iTriggerResource;
typedef struct xNavPoint;
typedef struct _RxHeap;
typedef struct _rxHeapBlockHeader;
typedef struct iDisplayCamera;
typedef struct xMarker;
typedef struct iActionResource;
typedef enum _RxClusterValidityReq;
typedef enum _rpWorldRenderOrder;
typedef struct _rxHeapFreeBlock;
typedef struct _RxPipelineNodeTopSortData;
typedef struct iActionRuntime;
typedef struct _RpPolygon;
typedef struct xEntryPoint;
typedef struct _RxPipelineNode;
typedef struct _RxClusterDefinition;
typedef struct _tagxEnv;
typedef struct _RxPipelineNodeParam;
typedef struct _RxPipelineCluster;
typedef enum _rxEmbeddedPacketState;
typedef struct tagXStreamMDSDirectory;
typedef struct _tagiEnvRuntime;
typedef struct iConditionResource;
typedef struct xRule;
typedef struct _RxNodeDefinition;
typedef enum _RxClusterValid;
typedef struct tagiFloor;
typedef struct _RpWorldSector;
typedef struct iConditionRuntime;
typedef struct _RwSurfaceProperties;
typedef struct _RpMeshHeader;
typedef struct _RwV3d;
typedef enum _RwTextureFilterMode;
typedef struct tagiFloorTri;
typedef struct _RpWorld;
typedef struct iRuleResource;
typedef struct _RxPipelineRequiresCluster;
typedef struct _RpCollSector;
typedef struct xTrigger;
typedef struct XStreamHeader;
typedef struct Vector3D;
typedef struct _RxPipeline;
typedef struct p2Camera;
typedef struct _rxReq;
typedef struct _iEntryPointRuntime;
typedef struct _RwLLLink;
typedef struct _RwObject;
typedef struct iEntryPointResource;
typedef struct _RpMaterialList;
typedef struct iMarkerResource;
typedef struct xScene;
typedef struct _RpMaterial;
typedef struct xAction;
typedef struct _RxOutputSpec;
typedef struct _RwTexDictionary;
typedef struct _iLightRuntime;
typedef struct tagXStreamDirectoryEntry;
typedef struct xCamera;
typedef struct _RxClusterRef;
typedef struct xLight;
typedef struct p2CameraVersion;
typedef struct xCondition;
typedef struct iLightResource;
typedef struct _RpVertexNormal;
typedef struct _RxIoSpec;
typedef struct _RwTexCoords;
typedef struct xNavLink;
typedef struct _RwRGBA;
typedef struct _RwBBox;
typedef struct _RxNodeMethods;
typedef struct _RwTexture;
typedef enum _RxClusterForcePresent;
typedef struct _RwRaster;
typedef struct _RxPacket;
typedef enum _RxNodeDefEditable;
typedef struct _RxClusterUnion;
typedef struct _RxCluster;
typedef struct iCameraResource;
typedef struct _RwLinkList;
typedef enum _RwTextureAddressMode;

typedef int32(*type_0)();
typedef void(*type_1)(_rwResEntryTag*);
typedef int32(*type_3)(_RxPipelineNode*, _RxPipelineNodeParam*);
typedef int32(*type_6)(_RxNodeDefinition*);
typedef void(*type_7)(int32, int32, int32, int32, int32);
typedef _RpWorldSector*(*type_8)(_RpWorldSector*);
typedef void(*type_9)(_RxNodeDefinition*);
typedef int32(*type_11)();
typedef int32(*type_13)(_RxPipelineNode*);
typedef void(*type_15)(int32, int32, int32, int32);
typedef void(*type_17)(_RxPipelineNode*);
typedef int32(*type_19)(int32, int32);
typedef int32(*type_21)(_RxPipelineNode*, _RxPipeline*);
typedef void(*type_22)();
typedef int32(*type_24)();
typedef uint32(*type_25)(_RxPipelineNode*, uint32, uint32, void*);
typedef void(*type_27)(int32, int32, int32, int32, int32);
typedef void(*type_30)();
typedef int32(*type_43)(int32);
typedef int32(*type_45)(int32, int32);
typedef void(*type_46)(int32, int8*);
typedef void(*type_48)(int32);
typedef int32(*type_49)();
typedef void(*type_50)(int8*);

typedef Vector3D type_2[4];
typedef uint16 type_4[3];
typedef tagXStreamDirectoryEntry type_5[1000];
typedef iTriggerResource* type_10[20];
typedef uint32 type_12[4];
typedef iTriggerResource* type_14[20];
typedef uint16 type_16[3];
typedef iTriggerResource* type_18[20];
typedef iTriggerResource* type_20[20];
typedef iTriggerResource* type_23[20];
typedef iTriggerResource* type_26[20];
typedef iTriggerResource* type_28[20];
typedef int8 type_29[2048];
typedef _RxCluster type_31[1];
typedef iTriggerResource* type_32[20];
typedef float32 type_33[3];
typedef iTriggerResource* type_34[20];
typedef iTriggerResource* type_35[20];
typedef iLightResource type_36[2];
typedef iTriggerResource* type_37[20];
typedef int32 type_38[64];
typedef int8 type_39[32];
typedef iTriggerResource* type_40[20];
typedef int8 type_41[32];
typedef int8 type_42[128];
typedef Vector3D type_44[4];
typedef p2CameraVersion type_47[5];

struct _RpSector
{
	int32 type;
};

struct _rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	_rxHeapSuperBlockDescriptor* next;
};

struct _rwResEntryTag
{
	_RwLLLink link;
	int32 size;
	void* owner;
	_rwResEntryTag** ownerRef;
	void(*destroyNotify)(_rwResEntryTag*);
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

struct iDisplayCamera
{
	Vector3D m_pos;
	Vector3D m_rot;
	float32 m_fov;
};

struct xMarker
{
	iMarkerResource* m_resource;
	void** m_runtime;
};

struct iActionResource
{
	uint8 m_cmdType;
	uint8 m_cmd;
	uint16 pad;
	uint32 m_cmdParameter;
};

enum _RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

enum _rpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct _rxHeapFreeBlock
{
	uint32 size;
	_rxHeapBlockHeader* ptr;
};

struct _RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	_rxReq* req;
	void* initialisationData;
	uint32 initialisationDataSize;
};

struct iActionRuntime
{
	xAction* m_and;
};

struct _RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
};

struct xEntryPoint
{
	iEntryPointResource* m_resource;
	_iEntryPointRuntime* m_runtime;
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

struct _tagxEnv
{
	_tagiEnvRuntime* m_runtime;
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

struct tagXStreamMDSDirectory
{
	uint32 count;
	tagXStreamDirectoryEntry directory[1000];
};

struct _tagiEnvRuntime
{
	_RpWorld* world;
	Vector3D world_origin;
	_RwTexDictionary* tex_dict;
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

struct xRule
{
	iRuleResource* m_resource;
	void* m_runtime;
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

struct iConditionRuntime
{
	xCondition* m_operand;
	uint16 m_match;
	uint16 m_trigger;
};

struct _RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

struct _RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct _RwV3d
{
	float32 x;
	float32 y;
	float32 z;
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

struct tagiFloorTri
{
	uint16 m_v[3];
	uint16 m_n;
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

struct iRuleResource
{
	uint32 m_actionCount;
	xAction* m_action;
	uint32 m_conditionCount;
	xCondition* m_condition;
};

struct _RxPipelineRequiresCluster
{
	_RxClusterDefinition* clusterDef;
	_RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct _RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
};

struct xTrigger
{
	iTriggerResource* m_resource;
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

struct Vector3D
{
	float32 x;
	float32 y;
	float32 z;
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

struct p2Camera
{
	Vector3D m_pos;
	Vector3D m_rot;
	float32 m_fov;
};

struct _rxReq
{
};

struct _iEntryPointRuntime
{
	uint32 m_enabled;
};

struct _RwLLLink
{
	_RwLLLink* next;
	_RwLLLink* prev;
};

struct _RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
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

struct _RpMaterialList
{
	_RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct iMarkerResource
{
	Vector3D m_pos;
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

struct _RpMaterial
{
	_RwTexture* texture;
	_RwRGBA color;
	_RxPipeline* pipeline;
	_RwSurfaceProperties surfaceProps;
	int16 refCount;
	int16 pad;
};

struct xAction
{
	iActionResource* m_resource;
	iActionRuntime* m_runtime;
};

struct _RxOutputSpec
{
	int8* name;
	_RxClusterValid* outputClusters;
	_RxClusterValid allOtherClusters;
};

struct _RwTexDictionary
{
	_RwObject object;
	_RwLinkList texturesInDict;
	_RwLLLink lInInstance;
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

struct tagXStreamDirectoryEntry
{
	uint32 id;
	uint32 type;
	uint32 offset;
	uint32 length;
};

struct xCamera
{
	iCameraResource* m_resource;
	void** m_runtime;
};

struct _RxClusterRef
{
	_RxClusterDefinition* clusterDef;
	_RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct xLight
{
	iLightResource* m_resource;
	_iLightRuntime* m_runtime;
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

struct xCondition
{
	iConditionResource* m_resource;
	iConditionRuntime* m_runtime;
};

struct iLightResource
{
	uint32 m_type;
	Vector3D m_pos;
	Vector3D m_rot;
	Vector3D m_color;
	int32 m_fov;
};

struct _RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

struct _RxIoSpec
{
	uint32 numClustersOfInterest;
	_RxClusterRef* clustersOfInterest;
	_RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	_RxOutputSpec* outputs;
};

struct _RwTexCoords
{
	float32 u;
	float32 v;
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

struct _RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct _RwBBox
{
	_RwV3d sup;
	_RwV3d inf;
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

enum _RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
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

struct _RxClusterUnion
{
	union
	{
		_RxClusterDefinition* clusterDef;
		_RxPipelineCluster* clusterRef;
	};
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

struct iCameraResource
{
	uint16 m_plateOffset;
	uint16 m_versions;
	p2CameraVersion m_version[5];
	uint32 m_frameCount;
	p2Camera* m_cameras;
};

struct _RwLinkList
{
	_RwLLLink link;
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

uint32 xRnd_seed;
uint32 gScriptSoftReset;
int32 sFastRandomInit;
int32 sFastRandom[64];
int32 sFastRandomIdx;
ulong32 gTimerValue;
int32(*scriptCheckSoftReset)();
void(*scriptReboot)();
int32(*scriptSwitchToDisk)(int32, int32);
void(*scriptSceneSwitch)(int32, int32, int32, int32);
void(*scriptControlCamera)(int32, int32, int32, int32, int32);
int32(*scriptIsPrivateInterpreter)();
void(*scriptSystemAbort)();
int32(*scriptPlatform)();
void(*scriptDebugPrintStringInt)(int32, int8*);
void(*scriptDebugPrintString)(int8*);
void(*scriptDebugPrintInt)(int32);
void(*arraycopy)(int32, int32, int32, int32, int32);
int32(*xFastRandomRange)(int32, int32);
int32(*xTimeGetMSecScript)();
int32(*xFastRandom)(int32);
int32 g_scenePendingMarker;
int32 g_scenePendingCamera;
uint32 g_scenePendingScene;
int32 g_sceneSwapPending;
xScene* xScene_current;
float32 g_DEGTORAD;
int8 vAssertBuf2[128];
XStreamHeader currentHeader;

int32 xRnd(int32 range);
int32 xFastRandomRange(int32 min, int32 max);
int32 xFastRandom(int32 max);
int32 xRandomRange(int32 min, int32 max);
int32 xRandom(int32 max);
int32 xTimeGetMSecScript();
void xSystemInit();
void arraycopy(int32 src, int32 srcp, int32 dst, int32 dstp, int32 length);
int32 scriptCheckSoftReset();
void scriptReboot();
int32 scriptSwitchToDisk();
void scriptSceneSwitch(int32 sceneID, int32 cameraID, int32 markerID, int32 ry);
void scriptControlCamera(int32 cmd, int32 camera, int32 version, int32 start, int32 end);
void scriptSystemAbort();
int32 scriptPlatform();
void scriptDebugPrintStringInt(int32 num, int8* value);
void scriptDebugPrintString(int8* value);
void scriptDebugPrintInt(int32 value);
int32 scriptIsPrivateInterpreter();

// xRnd__Fi
// Start address: 0x32e510
int32 xRnd(int32 range)
{
	int32 test;
	// Line 446, Address: 0x32e510, Func Offset: 0
	// Line 447, Address: 0x32e518, Func Offset: 0x8
	// Line 449, Address: 0x32e524, Func Offset: 0x14
	// Line 450, Address: 0x32e53c, Func Offset: 0x2c
	// Line 451, Address: 0x32e574, Func Offset: 0x64
	// Line 452, Address: 0x32e594, Func Offset: 0x84
	// Func End, Address: 0x32e59c, Func Offset: 0x8c
}

// xFastRandomRange__Fii
// Start address: 0x32e5a0
int32 xFastRandomRange(int32 min, int32 max)
{
	// Line 432, Address: 0x32e5a0, Func Offset: 0
	// Line 433, Address: 0x32e6ac, Func Offset: 0x10c
	// Func End, Address: 0x32e6b4, Func Offset: 0x114
}

// xFastRandom__Fi
// Start address: 0x32e6c0
int32 xFastRandom(int32 max)
{
	int32 i;
	// Line 405, Address: 0x32e6c0, Func Offset: 0
	// Line 406, Address: 0x32e6c8, Func Offset: 0x8
	// Line 408, Address: 0x32e6d4, Func Offset: 0x14
	// Line 411, Address: 0x32e6e0, Func Offset: 0x20
	// Line 413, Address: 0x32e6ec, Func Offset: 0x2c
	// Line 414, Address: 0x32e704, Func Offset: 0x44
	// Line 415, Address: 0x32e750, Func Offset: 0x90
	// Line 417, Address: 0x32e764, Func Offset: 0xa4
	// Line 420, Address: 0x32e76c, Func Offset: 0xac
	// Line 423, Address: 0x32e784, Func Offset: 0xc4
	// Line 424, Address: 0x32e788, Func Offset: 0xc8
	// Line 427, Address: 0x32e78c, Func Offset: 0xcc
	// Line 428, Address: 0x32e7c4, Func Offset: 0x104
	// Func End, Address: 0x32e7cc, Func Offset: 0x10c
}

// xRandomRange__Fii
// Start address: 0x32e7d0
int32 xRandomRange(int32 min, int32 max)
{
	int32 num;
	// Line 391, Address: 0x32e7d0, Func Offset: 0
	// Line 392, Address: 0x32e85c, Func Offset: 0x8c
	// Line 393, Address: 0x32e860, Func Offset: 0x90
	// Func End, Address: 0x32e868, Func Offset: 0x98
}

// xRandom__Fi
// Start address: 0x32e870
int32 xRandom(int32 max)
{
	// Line 374, Address: 0x32e870, Func Offset: 0
	// Line 375, Address: 0x32e8f4, Func Offset: 0x84
	// Func End, Address: 0x32e8fc, Func Offset: 0x8c
}

// xTimeGetMSecScript__Fv
// Start address: 0x32e900
int32 xTimeGetMSecScript()
{
	// Line 360, Address: 0x32e900, Func Offset: 0
	// Line 361, Address: 0x32e908, Func Offset: 0x8
	// Func End, Address: 0x32e910, Func Offset: 0x10
}

// xSystemInit__Fv
// Start address: 0x32e910
void xSystemInit()
{
	// Line 327, Address: 0x32e910, Func Offset: 0
	// Line 328, Address: 0x32e918, Func Offset: 0x8
	// Line 330, Address: 0x32e920, Func Offset: 0x10
	// Line 331, Address: 0x32e93c, Func Offset: 0x2c
	// Line 332, Address: 0x32e958, Func Offset: 0x48
	// Line 333, Address: 0x32e974, Func Offset: 0x64
	// Line 335, Address: 0x32e990, Func Offset: 0x80
	// Line 336, Address: 0x32e9ac, Func Offset: 0x9c
	// Line 337, Address: 0x32e9c8, Func Offset: 0xb8
	// Line 340, Address: 0x32e9e4, Func Offset: 0xd4
	// Line 341, Address: 0x32ea00, Func Offset: 0xf0
	// Line 342, Address: 0x32ea1c, Func Offset: 0x10c
	// Line 344, Address: 0x32ea38, Func Offset: 0x128
	// Line 345, Address: 0x32ea54, Func Offset: 0x144
	// Line 346, Address: 0x32ea70, Func Offset: 0x160
	// Line 347, Address: 0x32ea8c, Func Offset: 0x17c
	// Line 348, Address: 0x32eaa8, Func Offset: 0x198
	// Line 349, Address: 0x32eac4, Func Offset: 0x1b4
	// Func End, Address: 0x32ead4, Func Offset: 0x1c4
}

// arraycopy__Fiiiii
// Start address: 0x32eae0
void arraycopy(int32 src, int32 srcp, int32 dst, int32 dstp, int32 length)
{
	int32 unitSize;
	// Line 309, Address: 0x32eae0, Func Offset: 0
	// Line 310, Address: 0x32eae8, Func Offset: 0x8
	// Line 311, Address: 0x32eaec, Func Offset: 0xc
	// Line 312, Address: 0x32eb0c, Func Offset: 0x2c
	// Func End, Address: 0x32eb1c, Func Offset: 0x3c
}

// scriptCheckSoftReset__Fv
// Start address: 0x32eb20
int32 scriptCheckSoftReset()
{
	// Line 296, Address: 0x32eb20, Func Offset: 0
	// Line 298, Address: 0x32eb24, Func Offset: 0x4
	// Func End, Address: 0x32eb2c, Func Offset: 0xc
}

// scriptReboot__Fv
// Start address: 0x32eb30
void scriptReboot()
{
	// Line 259, Address: 0x32eb30, Func Offset: 0
	// Line 260, Address: 0x32eb38, Func Offset: 0x8
	// Line 262, Address: 0x32eb48, Func Offset: 0x18
	// Line 269, Address: 0x32eb50, Func Offset: 0x20
	// Line 270, Address: 0x32eb58, Func Offset: 0x28
	// Line 271, Address: 0x32eb64, Func Offset: 0x34
	// Line 272, Address: 0x32eb68, Func Offset: 0x38
	// Line 273, Address: 0x32eb70, Func Offset: 0x40
	// Func End, Address: 0x32eb80, Func Offset: 0x50
}

// scriptSwitchToDisk__Fii
// Start address: 0x32eb80
int32 scriptSwitchToDisk()
{
	// Line 240, Address: 0x32eb80, Func Offset: 0
	// Line 242, Address: 0x32eb84, Func Offset: 0x4
	// Func End, Address: 0x32eb8c, Func Offset: 0xc
}

// scriptSceneSwitch__Fiiii
// Start address: 0x32eb90
void scriptSceneSwitch(int32 sceneID, int32 cameraID, int32 markerID, int32 ry)
{
	Vector3D ang;
	// Line 214, Address: 0x32eb90, Func Offset: 0
	// Line 217, Address: 0x32eba4, Func Offset: 0x14
	// Line 218, Address: 0x32eba8, Func Offset: 0x18
	// Line 219, Address: 0x32ebc4, Func Offset: 0x34
	// Line 222, Address: 0x32ebc8, Func Offset: 0x38
	// Line 223, Address: 0x32ebe4, Func Offset: 0x54
	// Func End, Address: 0x32ebf4, Func Offset: 0x64
}

// scriptControlCamera__Fiiiii
// Start address: 0x32ec00
void scriptControlCamera(int32 cmd, int32 camera, int32 version, int32 start, int32 end)
{
	// Line 186, Address: 0x32ec00, Func Offset: 0
	// Line 187, Address: 0x32ec08, Func Offset: 0x8
	// Line 197, Address: 0x32ec10, Func Offset: 0x10
	// Func End, Address: 0x32ec20, Func Offset: 0x20
}

// scriptSystemAbort__Fv
// Start address: 0x32ec20
void scriptSystemAbort()
{
	// Line 157, Address: 0x32ec20, Func Offset: 0
	// Line 161, Address: 0x32ec28, Func Offset: 0x8
	// Line 164, Address: 0x32ec30, Func Offset: 0x10
	// Line 167, Address: 0x32ecc8, Func Offset: 0xa8
	// Line 170, Address: 0x32ecd4, Func Offset: 0xb4
	// Func End, Address: 0x32ece4, Func Offset: 0xc4
}

// scriptPlatform__Fv
// Start address: 0x32ecf0
int32 scriptPlatform()
{
	// Line 129, Address: 0x32ecf0, Func Offset: 0
	// Line 148, Address: 0x32ecf4, Func Offset: 0x4
	// Func End, Address: 0x32ecfc, Func Offset: 0xc
}

// scriptDebugPrintStringInt__FiPCc
// Start address: 0x32ed00
void scriptDebugPrintStringInt(int32 num, int8* value)
{
	// Line 99, Address: 0x32ed00, Func Offset: 0
	// Line 100, Address: 0x32ed0c, Func Offset: 0xc
	// Line 101, Address: 0x32ed20, Func Offset: 0x20
	// Func End, Address: 0x32ed30, Func Offset: 0x30
}

// scriptDebugPrintString__FPCc
// Start address: 0x32ed30
void scriptDebugPrintString(int8* value)
{
	// Line 81, Address: 0x32ed30, Func Offset: 0
	// Line 82, Address: 0x32ed3c, Func Offset: 0xc
	// Line 83, Address: 0x32ed4c, Func Offset: 0x1c
	// Func End, Address: 0x32ed5c, Func Offset: 0x2c
}

// scriptDebugPrintInt__Fi
// Start address: 0x32ed60
void scriptDebugPrintInt(int32 value)
{
	// Line 66, Address: 0x32ed60, Func Offset: 0
	// Line 67, Address: 0x32ed6c, Func Offset: 0xc
	// Line 68, Address: 0x32ed80, Func Offset: 0x20
	// Func End, Address: 0x32ed90, Func Offset: 0x30
}

// scriptIsPrivateInterpreter__Fv
// Start address: 0x32ed90
int32 scriptIsPrivateInterpreter()
{
	// Line 51, Address: 0x32ed90, Func Offset: 0
	// Line 52, Address: 0x32ed94, Func Offset: 0x4
	// Func End, Address: 0x32ed9c, Func Offset: 0xc
}

