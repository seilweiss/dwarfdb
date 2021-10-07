typedef struct _RxClusterDefinition;
typedef struct _RwRaster;
typedef struct xTrigger;
typedef struct _RxOutputSpec;
typedef struct _RxPipelineNode;
typedef struct _rxHeapSuperBlockDescriptor;
typedef struct xNavPoint;
typedef struct xLine2D;
typedef struct _rwResEntryTag;
typedef struct _RpWorld;
typedef struct _RwV2d;
typedef struct _RxHeap;
typedef struct xCamera;
typedef struct _rxHeapBlockHeader;
typedef struct iCameraResource;
typedef enum _RxClusterValidityReq;
typedef struct _rxHeapFreeBlock;
typedef struct _RwTexDictionary;
typedef struct iActionRuntime;
typedef struct _RxPipelineNodeTopSortData;
typedef struct xAction;
typedef struct iTriggerResource;
typedef struct xCondition;
typedef struct _RxPipelineNodeParam;
typedef struct _RxPipelineCluster;
typedef struct Vector3D;
typedef struct _RpMaterial;
typedef enum _rxEmbeddedPacketState;
typedef struct _RpVertexNormal;
typedef struct xNavLink;
typedef struct p2Camera;
typedef struct _RwTexture;
typedef struct tagXStreamMDSDirectory;
typedef struct _RxNodeDefinition;
typedef struct iActionResource;
typedef enum _RxClusterValid;
typedef struct _RwSurfaceProperties;
typedef struct _RxPipeline;
typedef struct _RpSector;
typedef struct _RwV3d;
typedef enum _RwTextureFilterMode;
typedef enum _rpWorldRenderOrder;
typedef struct iDisplayCamera;
typedef struct xMarker;
typedef struct _RxPipelineRequiresCluster;
typedef struct xEntryPoint;
typedef struct _RpPolygon;
typedef struct _tagxEnv;
typedef struct _tagiEnvRuntime;
typedef struct iConditionResource;
typedef struct _rxReq;
typedef struct XStreamHeader;
typedef struct xRule;
typedef struct tagiFloor;
typedef struct _RpWorldSector;
typedef struct _RwObject;
typedef struct iConditionRuntime;
typedef struct xScene;
typedef struct _RpMeshHeader;
typedef struct tagiFloorTri;
typedef struct iRuleResource;
typedef struct _RpCollSector;
typedef struct _RxClusterRef;
typedef struct tagXStreamDirectoryEntry;
typedef struct _RwLLLink;
typedef struct _iEntryPointRuntime;
typedef struct _RxIoSpec;
typedef struct iEntryPointResource;
typedef struct _RwRGBA;
typedef struct _RpMaterialList;
typedef struct iMarkerResource;
typedef struct _RxNodeMethods;
typedef enum _RxClusterForcePresent;
typedef struct _RwBBox;
typedef struct _RxPacket;
typedef struct _iLightRuntime;
typedef enum _RxNodeDefEditable;
typedef struct xLight;
typedef struct p2CameraVersion;
typedef struct iLightResource;
typedef struct _RxClusterUnion;
typedef struct _RwTexCoords;
typedef struct _RxCluster;
typedef struct _RwLinkList;
typedef enum _RwTextureAddressMode;

typedef void(*type_1)(_rwResEntryTag*);
typedef int32(*type_3)(_RxPipelineNode*, _RxPipelineNodeParam*);
typedef int32(*type_4)(_RxNodeDefinition*);
typedef void(*type_6)(_RxNodeDefinition*);
typedef int32(*type_8)(_RxPipelineNode*);
typedef void(*type_9)(_RxPipelineNode*);
typedef int32(*type_12)(_RxPipelineNode*, _RxPipeline*);
typedef _RpWorldSector*(*type_13)(_RpWorldSector*);
typedef uint32(*type_15)(_RxPipelineNode*, uint32, uint32, void*);

typedef Vector3D type_0[4];
typedef p2CameraVersion type_2[5];
typedef tagXStreamDirectoryEntry type_5[1000];
typedef uint32 type_7[4];
typedef Vector3D type_10[4];
typedef uint16 type_11[3];
typedef iTriggerResource* type_14[20];
typedef iTriggerResource* type_16[20];
typedef uint16 type_17[3];
typedef iTriggerResource* type_18[20];
typedef _RxCluster type_19[1];
typedef int8 type_20[2048];
typedef iTriggerResource* type_21[20];
typedef iTriggerResource* type_22[20];
typedef iTriggerResource* type_23[20];
typedef iTriggerResource* type_24[20];
typedef int8 type_25[32];
typedef int8 type_26[32];
typedef _RwV2d type_27[2];
typedef iTriggerResource* type_28[20];
typedef _RwV2d type_29[2];
typedef float32 type_30[3];
typedef iTriggerResource* type_31[20];
typedef xTrigger* type_32[16];
typedef int8 type_33[128];
typedef iTriggerResource* type_34[20];
typedef iLightResource type_35[2];
typedef iTriggerResource* type_36[20];
typedef iTriggerResource* type_37[20];

struct _RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
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

struct xTrigger
{
	iTriggerResource* m_resource;
};

struct _RxOutputSpec
{
	int8* name;
	_RxClusterValid* outputClusters;
	_RxClusterValid allOtherClusters;
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

struct _rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	_rxHeapSuperBlockDescriptor* next;
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

struct xLine2D
{
	_RwV2d m_p[2];
	_RwV2d m_i[2];
	int32 m_iCount;
};

struct _rwResEntryTag
{
	_RwLLLink link;
	int32 size;
	void* owner;
	_rwResEntryTag** ownerRef;
	void(*destroyNotify)(_rwResEntryTag*);
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

struct _RwV2d
{
	float32 x;
	float32 y;
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

struct xCamera
{
	iCameraResource* m_resource;
	void** m_runtime;
};

struct _rxHeapBlockHeader
{
	_rxHeapBlockHeader* prev;
	_rxHeapBlockHeader* next;
	uint32 size;
	_rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
};

struct iCameraResource
{
	uint16 m_plateOffset;
	uint16 m_versions;
	p2CameraVersion m_version[5];
	uint32 m_frameCount;
	p2Camera* m_cameras;
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

struct _RwTexDictionary
{
	_RwObject object;
	_RwLinkList texturesInDict;
	_RwLLLink lInInstance;
};

struct iActionRuntime
{
	xAction* m_and;
};

struct _RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	_rxReq* req;
	void* initialisationData;
	uint32 initialisationDataSize;
};

struct xAction
{
	iActionResource* m_resource;
	iActionRuntime* m_runtime;
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

struct xCondition
{
	iConditionResource* m_resource;
	iConditionRuntime* m_runtime;
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

struct Vector3D
{
	float32 x;
	float32 y;
	float32 z;
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

enum _rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

struct _RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
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

struct p2Camera
{
	Vector3D m_pos;
	Vector3D m_rot;
	float32 m_fov;
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

struct tagXStreamMDSDirectory
{
	uint32 count;
	tagXStreamDirectoryEntry directory[1000];
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

struct iActionResource
{
	uint8 m_cmdType;
	uint8 m_cmd;
	uint16 pad;
	uint32 m_cmdParameter;
};

enum _RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct _RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
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

struct _RpSector
{
	int32 type;
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

enum _rpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
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

struct _RxPipelineRequiresCluster
{
	_RxClusterDefinition* clusterDef;
	_RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
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

struct _tagxEnv
{
	_tagiEnvRuntime* m_runtime;
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

struct _rxReq
{
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

struct xRule
{
	iRuleResource* m_resource;
	void* m_runtime;
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

struct _RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct iConditionRuntime
{
	xCondition* m_operand;
	uint16 m_match;
	uint16 m_trigger;
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

struct _RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct tagiFloorTri
{
	uint16 m_v[3];
	uint16 m_n;
};

struct iRuleResource
{
	uint32 m_actionCount;
	xAction* m_action;
	uint32 m_conditionCount;
	xCondition* m_condition;
};

struct _RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
};

struct _RxClusterRef
{
	_RxClusterDefinition* clusterDef;
	_RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct tagXStreamDirectoryEntry
{
	uint32 id;
	uint32 type;
	uint32 offset;
	uint32 length;
};

struct _RwLLLink
{
	_RwLLLink* next;
	_RwLLLink* prev;
};

struct _iEntryPointRuntime
{
	uint32 m_enabled;
};

struct _RxIoSpec
{
	uint32 numClustersOfInterest;
	_RxClusterRef* clustersOfInterest;
	_RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	_RxOutputSpec* outputs;
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

struct _RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
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

enum _RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct _RwBBox
{
	_RwV3d sup;
	_RwV3d inf;
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

enum _RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
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

struct iLightResource
{
	uint32 m_type;
	Vector3D m_pos;
	Vector3D m_rot;
	Vector3D m_color;
	int32 m_fov;
};

struct _RxClusterUnion
{
	union
	{
		_RxClusterDefinition* clusterDef;
		_RxPipelineCluster* clusterRef;
	};
};

struct _RwTexCoords
{
	float32 u;
	float32 v;
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

enum _RwTextureAddressMode
{
	rwTEXTUREADDRESSNATEXTUREADDRESS,
	rwTEXTUREADDRESSWRAP,
	rwTEXTUREADDRESSMIRROR,
	rwTEXTUREADDRESSCLAMP,
	rwTEXTUREADDRESSBORDER,
	rwTEXTUREADDRESSMODEFORCEENUMSIZEINT = 0x7fffffff
};

xTrigger* sPlayerTrigger[16];
int32 theGlobalRuleNumber;
int32 gDebugGameEventCounter;
int8 vAssertBuf2[128];
XStreamHeader currentHeader;
int32 theGlobalTriggerNumber;
xScene* xScene_current;
int32 theGlobalTriggerDisplay;

int32 xTriggerPlayerExistTrigger(xTrigger* t, int32* freeSlot);
void xTriggerPlayerInit();
int32 xTriggerIntersectLine(xTrigger* t, xLine2D* line, _RwV2d* hitVector);
int32 xTriggerCircleIntersectLine(xTrigger* trig, xLine2D* l, _RwV2d* hitVector);
int32 xTriggerTriIntersectLine(xTrigger* t, xLine2D* l, _RwV2d* hitVector);
int32 xTriggerPolyIntersectLine(xTrigger* t, xLine2D* l, _RwV2d* hitVector);
int32 xTriggerRectIntersectLine(xTrigger* t, xLine2D* l, _RwV2d* hitVector);
int32 xTriggerResourceIntersectPoint(iTriggerResource* t, Vector3D* point);
int32 xTriggerIntersectPoint(xTrigger* t, Vector3D* point);
void xTriggerHitPlayer(int32 genericTrigIndex, Vector3D* playerPoint);
void xTriggerGameEvent(xTrigger* t, uint32 eventWho, uint32 eventType, uint32 eventCmd, uint32 eventData);
void xTriggerEvaluate(xTrigger* t);

// xTriggerPlayerExistTrigger__FP8xTriggerPi
// Start address: 0x32c0d0
int32 xTriggerPlayerExistTrigger(xTrigger* t, int32* freeSlot)
{
	xTrigger* val;
	int32 freeidx;
	int32 i;
	// Line 627, Address: 0x32c0d0, Func Offset: 0
	// Line 628, Address: 0x32c0ec, Func Offset: 0x1c
	// Line 631, Address: 0x32c0f0, Func Offset: 0x20
	// Line 632, Address: 0x32c190, Func Offset: 0xc0
	// Line 634, Address: 0x32c230, Func Offset: 0x160
	// Line 636, Address: 0x32c23c, Func Offset: 0x16c
	// Line 637, Address: 0x32c250, Func Offset: 0x180
	// Line 639, Address: 0x32c258, Func Offset: 0x188
	// Line 641, Address: 0x32c264, Func Offset: 0x194
	// Line 644, Address: 0x32c278, Func Offset: 0x1a8
	// Line 645, Address: 0x32c27c, Func Offset: 0x1ac
	// Line 646, Address: 0x32c280, Func Offset: 0x1b0
	// Line 649, Address: 0x32c294, Func Offset: 0x1c4
	// Line 650, Address: 0x32c2a0, Func Offset: 0x1d0
	// Line 652, Address: 0x32c2a4, Func Offset: 0x1d4
	// Line 653, Address: 0x32c2a8, Func Offset: 0x1d8
	// Func End, Address: 0x32c2c4, Func Offset: 0x1f4
}

// xTriggerPlayerInit__Fv
// Start address: 0x32c2d0
void xTriggerPlayerInit()
{
	uint32 i;
	// Line 608, Address: 0x32c2d0, Func Offset: 0
	// Line 609, Address: 0x32c2dc, Func Offset: 0xc
	// Line 611, Address: 0x32c304, Func Offset: 0x34
	// Func End, Address: 0x32c30c, Func Offset: 0x3c
}

// xTriggerIntersectLine__FP8xTriggerP7xLine2DP6_RwV2d
// Start address: 0x32c310
int32 xTriggerIntersectLine(xTrigger* t, xLine2D* line, _RwV2d* hitVector)
{
	int32 intersect;
	// Line 532, Address: 0x32c310, Func Offset: 0
	// Line 536, Address: 0x32c330, Func Offset: 0x20
	// Line 538, Address: 0x32c3d4, Func Offset: 0xc4
	// Line 541, Address: 0x32c404, Func Offset: 0xf4
	// Line 549, Address: 0x32c418, Func Offset: 0x108
	// Line 552, Address: 0x32c420, Func Offset: 0x110
	// Line 553, Address: 0x32c424, Func Offset: 0x114
	// Line 556, Address: 0x32c42c, Func Offset: 0x11c
	// Line 565, Address: 0x32c440, Func Offset: 0x130
	// Line 568, Address: 0x32c448, Func Offset: 0x138
	// Line 569, Address: 0x32c44c, Func Offset: 0x13c
	// Line 572, Address: 0x32c454, Func Offset: 0x144
	// Line 573, Address: 0x32c468, Func Offset: 0x158
	// Line 576, Address: 0x32c470, Func Offset: 0x160
	// Line 584, Address: 0x32c484, Func Offset: 0x174
	// Line 586, Address: 0x32c48c, Func Offset: 0x17c
	// Line 587, Address: 0x32c524, Func Offset: 0x214
	// Line 592, Address: 0x32c528, Func Offset: 0x218
	// Func End, Address: 0x32c544, Func Offset: 0x234
}

// xTriggerCircleIntersectLine__FP8xTriggerP7xLine2DP6_RwV2d
// Start address: 0x32c550
int32 xTriggerCircleIntersectLine(xTrigger* trig, xLine2D* l, _RwV2d* hitVector)
{
	Vector3D ep;
	Vector3D sp;
	int32 _ein;
	int32 _sin;
	float32 t2;
	float32 t1;
	_RwV2d center;
	_RwV2d ray_dir;
	_RwV2d ray;
	int32 intersect;
	float32 radius;
	iTriggerResource* r;
	// Line 456, Address: 0x32c550, Func Offset: 0
	// Line 462, Address: 0x32c574, Func Offset: 0x24
	// Line 463, Address: 0x32c578, Func Offset: 0x28
	// Line 470, Address: 0x32c584, Func Offset: 0x34
	// Line 471, Address: 0x32c58c, Func Offset: 0x3c
	// Line 473, Address: 0x32c594, Func Offset: 0x44
	// Line 474, Address: 0x32c5a4, Func Offset: 0x54
	// Line 476, Address: 0x32c5b4, Func Offset: 0x64
	// Line 477, Address: 0x32c5bc, Func Offset: 0x6c
	// Line 479, Address: 0x32c5c4, Func Offset: 0x74
	// Line 480, Address: 0x32c600, Func Offset: 0xb0
	// Line 483, Address: 0x32c60c, Func Offset: 0xbc
	// Line 484, Address: 0x32c684, Func Offset: 0x134
	// Line 487, Address: 0x32c690, Func Offset: 0x140
	// Line 488, Address: 0x32c6a0, Func Offset: 0x150
	// Line 489, Address: 0x32c6a4, Func Offset: 0x154
	// Line 491, Address: 0x32c6b4, Func Offset: 0x164
	// Line 492, Address: 0x32c6c4, Func Offset: 0x174
	// Line 493, Address: 0x32c6c8, Func Offset: 0x178
	// Line 496, Address: 0x32c6d8, Func Offset: 0x188
	// Line 497, Address: 0x32c6ec, Func Offset: 0x19c
	// Line 499, Address: 0x32c6fc, Func Offset: 0x1ac
	// Line 501, Address: 0x32c70c, Func Offset: 0x1bc
	// Line 503, Address: 0x32c714, Func Offset: 0x1c4
	// Line 504, Address: 0x32c72c, Func Offset: 0x1dc
	// Line 507, Address: 0x32c744, Func Offset: 0x1f4
	// Line 508, Address: 0x32c758, Func Offset: 0x208
	// Line 510, Address: 0x32c76c, Func Offset: 0x21c
	// Line 512, Address: 0x32c774, Func Offset: 0x224
	// Line 514, Address: 0x32c790, Func Offset: 0x240
	// Line 515, Address: 0x32c7a8, Func Offset: 0x258
	// Line 517, Address: 0x32c7c0, Func Offset: 0x270
	// Line 518, Address: 0x32c7d4, Func Offset: 0x284
	// Line 519, Address: 0x32c7e8, Func Offset: 0x298
	// Line 521, Address: 0x32c7f0, Func Offset: 0x2a0
	// Line 522, Address: 0x32c7f4, Func Offset: 0x2a4
	// Func End, Address: 0x32c814, Func Offset: 0x2c4
}

// xTriggerTriIntersectLine__FP8xTriggerP7xLine2DP6_RwV2d
// Start address: 0x32c820
int32 xTriggerTriIntersectLine(xTrigger* t, xLine2D* l, _RwV2d* hitVector)
{
	iTriggerResource* r;
	xLine2D triLine;
	int32 intersect;
	int32 i;
	// Line 422, Address: 0x32c820, Func Offset: 0
	// Line 424, Address: 0x32c844, Func Offset: 0x24
	// Line 426, Address: 0x32c848, Func Offset: 0x28
	// Line 428, Address: 0x32c84c, Func Offset: 0x2c
	// Line 430, Address: 0x32c858, Func Offset: 0x38
	// Line 431, Address: 0x32c870, Func Offset: 0x50
	// Line 433, Address: 0x32c888, Func Offset: 0x68
	// Line 435, Address: 0x32c894, Func Offset: 0x74
	// Line 436, Address: 0x32c89c, Func Offset: 0x7c
	// Line 437, Address: 0x32c8a4, Func Offset: 0x84
	// Line 440, Address: 0x32c8ac, Func Offset: 0x8c
	// Line 441, Address: 0x32c8c4, Func Offset: 0xa4
	// Line 442, Address: 0x32c8dc, Func Offset: 0xbc
	// Line 444, Address: 0x32c8e0, Func Offset: 0xc0
	// Line 446, Address: 0x32c900, Func Offset: 0xe0
	// Line 447, Address: 0x32c918, Func Offset: 0xf8
	// Line 448, Address: 0x32c930, Func Offset: 0x110
	// Line 449, Address: 0x32c934, Func Offset: 0x114
	// Line 450, Address: 0x32c938, Func Offset: 0x118
	// Line 452, Address: 0x32c94c, Func Offset: 0x12c
	// Line 453, Address: 0x32c950, Func Offset: 0x130
	// Func End, Address: 0x32c974, Func Offset: 0x154
}

// xTriggerPolyIntersectLine__FP8xTriggerP7xLine2DP6_RwV2d
// Start address: 0x32c980
int32 xTriggerPolyIntersectLine(xTrigger* t, xLine2D* l, _RwV2d* hitVector)
{
	iTriggerResource* r;
	xLine2D triLine;
	int32 intersect;
	int32 i;
	// Line 388, Address: 0x32c980, Func Offset: 0
	// Line 390, Address: 0x32c9a4, Func Offset: 0x24
	// Line 392, Address: 0x32c9a8, Func Offset: 0x28
	// Line 394, Address: 0x32c9ac, Func Offset: 0x2c
	// Line 396, Address: 0x32c9b8, Func Offset: 0x38
	// Line 397, Address: 0x32c9d0, Func Offset: 0x50
	// Line 399, Address: 0x32c9e8, Func Offset: 0x68
	// Line 401, Address: 0x32c9f4, Func Offset: 0x74
	// Line 402, Address: 0x32c9fc, Func Offset: 0x7c
	// Line 403, Address: 0x32ca04, Func Offset: 0x84
	// Line 406, Address: 0x32ca0c, Func Offset: 0x8c
	// Line 407, Address: 0x32ca24, Func Offset: 0xa4
	// Line 408, Address: 0x32ca3c, Func Offset: 0xbc
	// Line 410, Address: 0x32ca40, Func Offset: 0xc0
	// Line 412, Address: 0x32ca60, Func Offset: 0xe0
	// Line 413, Address: 0x32ca78, Func Offset: 0xf8
	// Line 414, Address: 0x32ca90, Func Offset: 0x110
	// Line 415, Address: 0x32ca94, Func Offset: 0x114
	// Line 416, Address: 0x32ca98, Func Offset: 0x118
	// Line 418, Address: 0x32caac, Func Offset: 0x12c
	// Line 419, Address: 0x32cab0, Func Offset: 0x130
	// Func End, Address: 0x32cad4, Func Offset: 0x154
}

// xTriggerRectIntersectLine__FP8xTriggerP7xLine2DP6_RwV2d
// Start address: 0x32cae0
int32 xTriggerRectIntersectLine(xTrigger* t, xLine2D* l, _RwV2d* hitVector)
{
	iTriggerResource* r;
	xLine2D triLine;
	int32 intersect;
	// Line 326, Address: 0x32cae0, Func Offset: 0
	// Line 327, Address: 0x32cb00, Func Offset: 0x20
	// Line 329, Address: 0x32cb04, Func Offset: 0x24
	// Line 335, Address: 0x32cb08, Func Offset: 0x28
	// Line 336, Address: 0x32cba8, Func Offset: 0xc8
	// Line 337, Address: 0x32cc48, Func Offset: 0x168
	// Line 339, Address: 0x32cce8, Func Offset: 0x208
	// Line 340, Address: 0x32ccf0, Func Offset: 0x210
	// Line 341, Address: 0x32ccf8, Func Offset: 0x218
	// Line 342, Address: 0x32cd00, Func Offset: 0x220
	// Line 343, Address: 0x32cd08, Func Offset: 0x228
	// Line 345, Address: 0x32cd28, Func Offset: 0x248
	// Line 346, Address: 0x32cd40, Func Offset: 0x260
	// Line 347, Address: 0x32cd58, Func Offset: 0x278
	// Line 350, Address: 0x32cd5c, Func Offset: 0x27c
	// Line 351, Address: 0x32cd64, Func Offset: 0x284
	// Line 352, Address: 0x32cd6c, Func Offset: 0x28c
	// Line 353, Address: 0x32cd74, Func Offset: 0x294
	// Line 354, Address: 0x32cd7c, Func Offset: 0x29c
	// Line 356, Address: 0x32cd9c, Func Offset: 0x2bc
	// Line 357, Address: 0x32cdb4, Func Offset: 0x2d4
	// Line 358, Address: 0x32cdcc, Func Offset: 0x2ec
	// Line 361, Address: 0x32cdd0, Func Offset: 0x2f0
	// Line 362, Address: 0x32cdd8, Func Offset: 0x2f8
	// Line 363, Address: 0x32cde0, Func Offset: 0x300
	// Line 364, Address: 0x32cde8, Func Offset: 0x308
	// Line 365, Address: 0x32cdf0, Func Offset: 0x310
	// Line 367, Address: 0x32ce10, Func Offset: 0x330
	// Line 368, Address: 0x32ce28, Func Offset: 0x348
	// Line 369, Address: 0x32ce40, Func Offset: 0x360
	// Line 372, Address: 0x32ce44, Func Offset: 0x364
	// Line 373, Address: 0x32ce4c, Func Offset: 0x36c
	// Line 374, Address: 0x32ce54, Func Offset: 0x374
	// Line 375, Address: 0x32ce5c, Func Offset: 0x37c
	// Line 376, Address: 0x32ce64, Func Offset: 0x384
	// Line 378, Address: 0x32ce84, Func Offset: 0x3a4
	// Line 379, Address: 0x32ce9c, Func Offset: 0x3bc
	// Line 380, Address: 0x32ceb4, Func Offset: 0x3d4
	// Line 383, Address: 0x32ceb8, Func Offset: 0x3d8
	// Line 384, Address: 0x32cebc, Func Offset: 0x3dc
	// Func End, Address: 0x32cedc, Func Offset: 0x3fc
}

// xTriggerResourceIntersectPoint__FP16iTriggerResourceP8Vector3D
// Start address: 0x32cee0
int32 xTriggerResourceIntersectPoint(iTriggerResource* t, Vector3D* point)
{
	Vector3D tmp;
	Vector3D* v;
	int32 intersect;
	// Line 272, Address: 0x32cee0, Func Offset: 0
	// Line 273, Address: 0x32cef4, Func Offset: 0x14
	// Line 274, Address: 0x32cef8, Func Offset: 0x18
	// Line 277, Address: 0x32cefc, Func Offset: 0x1c
	// Line 280, Address: 0x32cf28, Func Offset: 0x48
	// Line 281, Address: 0x32cf40, Func Offset: 0x60
	// Line 284, Address: 0x32cf48, Func Offset: 0x68
	// Line 285, Address: 0x32cf64, Func Offset: 0x84
	// Line 288, Address: 0x32cf6c, Func Offset: 0x8c
	// Line 289, Address: 0x32cf8c, Func Offset: 0xac
	// Line 296, Address: 0x32cf94, Func Offset: 0xb4
	// Line 297, Address: 0x32cfd4, Func Offset: 0xf4
	// Line 300, Address: 0x32cfd8, Func Offset: 0xf8
	// Line 304, Address: 0x32cfe0, Func Offset: 0x100
	// Line 310, Address: 0x32d070, Func Offset: 0x190
	// Line 312, Address: 0x32d074, Func Offset: 0x194
	// Line 314, Address: 0x32d07c, Func Offset: 0x19c
	// Line 315, Address: 0x32d090, Func Offset: 0x1b0
	// Line 316, Address: 0x32d128, Func Offset: 0x248
	// Line 321, Address: 0x32d12c, Func Offset: 0x24c
	// Line 322, Address: 0x32d130, Func Offset: 0x250
	// Func End, Address: 0x32d14c, Func Offset: 0x26c
}

// xTriggerIntersectPoint__FP8xTriggerP8Vector3D
// Start address: 0x32d150
int32 xTriggerIntersectPoint(xTrigger* t, Vector3D* point)
{
	Vector3D tmp;
	Vector3D* v;
	int32 intersect;
	// Line 217, Address: 0x32d150, Func Offset: 0
	// Line 218, Address: 0x32d174, Func Offset: 0x24
	// Line 219, Address: 0x32d178, Func Offset: 0x28
	// Line 221, Address: 0x32d180, Func Offset: 0x30
	// Line 223, Address: 0x32d224, Func Offset: 0xd4
	// Line 226, Address: 0x32d254, Func Offset: 0x104
	// Line 227, Address: 0x32d26c, Func Offset: 0x11c
	// Line 230, Address: 0x32d274, Func Offset: 0x124
	// Line 231, Address: 0x32d290, Func Offset: 0x140
	// Line 234, Address: 0x32d298, Func Offset: 0x148
	// Line 235, Address: 0x32d2b8, Func Offset: 0x168
	// Line 243, Address: 0x32d2c0, Func Offset: 0x170
	// Line 244, Address: 0x32d300, Func Offset: 0x1b0
	// Line 248, Address: 0x32d304, Func Offset: 0x1b4
	// Line 252, Address: 0x32d30c, Func Offset: 0x1bc
	// Line 258, Address: 0x32d39c, Func Offset: 0x24c
	// Line 260, Address: 0x32d3a0, Func Offset: 0x250
	// Line 262, Address: 0x32d3a8, Func Offset: 0x258
	// Line 263, Address: 0x32d440, Func Offset: 0x2f0
	// Line 268, Address: 0x32d444, Func Offset: 0x2f4
	// Line 269, Address: 0x32d448, Func Offset: 0x2f8
	// Func End, Address: 0x32d46c, Func Offset: 0x31c
}

// xTriggerHitPlayer__FiP8Vector3D
// Start address: 0x32d470
void xTriggerHitPlayer(int32 genericTrigIndex, Vector3D* playerPoint)
{
	uint32 tflags;
	xTrigger* t;
	uint32 i;
	// Line 136, Address: 0x32d470, Func Offset: 0
	// Line 143, Address: 0x32d494, Func Offset: 0x24
	// Line 146, Address: 0x32d4a8, Func Offset: 0x38
	// Line 150, Address: 0x32d4b8, Func Offset: 0x48
	// Line 154, Address: 0x32d4d0, Func Offset: 0x60
	// Line 157, Address: 0x32d4d8, Func Offset: 0x68
	// Line 161, Address: 0x32d4ec, Func Offset: 0x7c
	// Line 163, Address: 0x32d4f8, Func Offset: 0x88
	// Line 165, Address: 0x32d518, Func Offset: 0xa8
	// Line 170, Address: 0x32d6ec, Func Offset: 0x27c
	// Line 171, Address: 0x32d6f0, Func Offset: 0x280
	// Line 173, Address: 0x32d70c, Func Offset: 0x29c
	// Line 175, Address: 0x32d8b4, Func Offset: 0x444
	// Line 177, Address: 0x32d8c0, Func Offset: 0x450
	// Line 185, Address: 0x32da7c, Func Offset: 0x60c
	// Line 188, Address: 0x32da84, Func Offset: 0x614
	// Line 191, Address: 0x32db8c, Func Offset: 0x71c
	// Line 193, Address: 0x32dba0, Func Offset: 0x730
	// Line 195, Address: 0x32dbac, Func Offset: 0x73c
	// Line 202, Address: 0x32dd64, Func Offset: 0x8f4
	// Line 203, Address: 0x32dd68, Func Offset: 0x8f8
	// Func End, Address: 0x32dd90, Func Offset: 0x920
}

// xTriggerGameEvent__FP8xTriggerUiUiUiUi
// Start address: 0x32dd90
void xTriggerGameEvent(xTrigger* t, uint32 eventWho, uint32 eventType, uint32 eventCmd, uint32 eventData)
{
	uint32 i;
	// Line 102, Address: 0x32dd90, Func Offset: 0
	// Line 105, Address: 0x32ddc4, Func Offset: 0x34
	// Line 106, Address: 0x32de64, Func Offset: 0xd4
	// Line 109, Address: 0x32df08, Func Offset: 0x178
	// Line 114, Address: 0x32df14, Func Offset: 0x184
	// Line 116, Address: 0x32df20, Func Offset: 0x190
	// Line 118, Address: 0x32df24, Func Offset: 0x194
	// Line 119, Address: 0x32df34, Func Offset: 0x1a4
	// Line 120, Address: 0x32df60, Func Offset: 0x1d0
	// Line 122, Address: 0x32df7c, Func Offset: 0x1ec
	// Func End, Address: 0x32dfa4, Func Offset: 0x214
}

// xTriggerEvaluate__FP8xTrigger
// Start address: 0x32dfb0
void xTriggerEvaluate(xTrigger* t)
{
	uint32 i;
	// Line 69, Address: 0x32dfb0, Func Offset: 0
	// Line 73, Address: 0x32dfc4, Func Offset: 0x14
	// Line 75, Address: 0x32dfd0, Func Offset: 0x20
	// Line 76, Address: 0x32dfe0, Func Offset: 0x30
	// Line 77, Address: 0x32dff8, Func Offset: 0x48
	// Line 78, Address: 0x32e014, Func Offset: 0x64
	// Func End, Address: 0x32e02c, Func Offset: 0x7c
}

