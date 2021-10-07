typedef struct _rxHeapSuperBlockDescriptor;
typedef struct _rwResEntryTag;
typedef enum p2CartActions;
typedef struct _RxHeap;
typedef struct xEntryPoint;
typedef struct _rxHeapBlockHeader;
typedef struct _tagxEnv;
typedef enum _RxClusterValidityReq;
typedef struct iConditionResource;
typedef struct _RpWorldSector;
typedef struct _rxHeapFreeBlock;
typedef struct _RxPipelineNodeTopSortData;
typedef struct _tagiEnvRuntime;
typedef struct xNavPoint;
typedef struct xRule;
typedef struct iConditionRuntime;
typedef struct _RxPipelineNode;
typedef struct _RxClusterDefinition;
typedef struct tagiFloor;
typedef enum _RwTextureFilterMode;
typedef struct _RpMeshHeader;
typedef struct _RxPipelineNodeParam;
typedef struct _RxPipelineCluster;
typedef enum _rxEmbeddedPacketState;
typedef enum p2CartStatus;
typedef struct _RpWorld;
typedef struct iTriggerResource;
typedef struct tagiFloorTri;
typedef struct _RxNodeDefinition;
typedef enum _RxClusterValid;
typedef struct iRuleResource;
typedef struct _RpCollSector;
typedef struct _RwSurfaceProperties;
typedef struct XStreamHeader;
typedef struct _RpSector;
typedef struct Vector3D;
typedef struct xScene;
typedef struct _RwV3d;
typedef struct xTrigger;
typedef struct _RwLLLink;
typedef struct _iEntryPointRuntime;
typedef struct p2Camera;
typedef struct _RxPipelineRequiresCluster;
typedef struct tagiCartControl;
typedef struct _RpMaterialList;
typedef struct iEntryPointResource;
typedef struct _RpMaterial;
typedef struct _RwTexDictionary;
typedef struct _RxPipeline;
typedef struct iMarkerResource;
typedef struct _rxReq;
typedef struct xAction;
typedef struct tagXStreamDirectoryEntry;
typedef struct _RwObject;
typedef struct _RpPolygon;
typedef struct _iLightRuntime;
typedef struct p2CameraVersion;
typedef struct xCamera;
typedef struct _RpVertexNormal;
typedef struct xCondition;
typedef struct _RxOutputSpec;
typedef struct xLight;
typedef struct _RwTexCoords;
typedef struct iLightResource;
typedef struct _RwRGBA;
typedef struct _RwTexture;
typedef struct xNavLink;
typedef struct _RwBBox;
typedef struct _RxClusterRef;
typedef struct _RwRaster;
typedef struct _RxIoSpec;
typedef struct xMarker;
typedef struct _RxNodeMethods;
typedef enum _RxClusterForcePresent;
typedef struct tagxCartControl;
typedef struct _RxPacket;
typedef enum _RxNodeDefEditable;
typedef struct iCameraResource;
typedef struct _RxClusterUnion;
typedef struct iActionRuntime;
typedef enum _RwTextureAddressMode;
typedef struct _RxCluster;
typedef struct _RwLinkList;
typedef struct iActionResource;
typedef struct tag_xCameraControl;
typedef enum _rpWorldRenderOrder;
typedef struct iDisplayCamera;
typedef struct tagXStreamMDSDirectory;

typedef void(*type_3)(_rwResEntryTag*);
typedef _RpWorldSector*(*type_4)(_RpWorldSector*);
typedef int32(*type_5)(_RxPipelineNode*, _RxPipelineNodeParam*);
typedef int32(*type_7)(_RxNodeDefinition*);
typedef void(*type_10)(_RxNodeDefinition*);
typedef int32(*type_13)(_RxPipelineNode*);
typedef void(*type_15)(_RxPipelineNode*);
typedef int32(*type_17)(_RxPipelineNode*, _RxPipeline*);
typedef uint32(*type_25)(_RxPipelineNode*, uint32, uint32, void*);

typedef Vector3D type_0[4];
typedef uint16 type_1[3];
typedef tagXStreamDirectoryEntry type_2[1000];
typedef iTriggerResource* type_6[20];
typedef uint16 type_8[3];
typedef iTriggerResource* type_9[20];
typedef iTriggerResource* type_11[20];
typedef uint32 type_12[4];
typedef iTriggerResource* type_14[20];
typedef iTriggerResource* type_16[20];
typedef int8 type_18[2048];
typedef int8 type_19[32];
typedef iTriggerResource* type_20[20];
typedef int32 type_21[8];
typedef iTriggerResource* type_22[20];
typedef int8 type_23[16];
typedef int8 type_24[16][24];
typedef int8 type_26[36];
typedef int8 type_27[36][24];
typedef iTriggerResource* type_28[20];
typedef float32 type_29[3];
typedef _RxCluster type_30[1];
typedef iTriggerResource* type_31[20];
typedef int32 type_32[2];
typedef int32 type_33[2][17];
typedef iTriggerResource* type_34[20];
typedef iLightResource type_35[2];
typedef int8 type_36[32];
typedef int8 type_37[32];
typedef iTriggerResource* type_38[20];
typedef int8 type_39[128];
typedef iTriggerResource* type_40[20];
typedef Vector3D type_41[4];
typedef p2CameraVersion type_42[5];
typedef uint8 type_43[12];
typedef uint8 type_44[32];

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

enum p2CartActions
{
	I_CART_IDLE,
	I_CART_WRITE,
	I_CART_READ,
	I_CART_FORMAT
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

struct xEntryPoint
{
	iEntryPointResource* m_resource;
	_iEntryPointRuntime* m_runtime;
};

struct _rxHeapBlockHeader
{
	_rxHeapBlockHeader* prev;
	_rxHeapBlockHeader* next;
	uint32 size;
	_rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
};

struct _tagxEnv
{
	_tagiEnvRuntime* m_runtime;
};

enum _RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
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

struct _tagiEnvRuntime
{
	_RpWorld* world;
	Vector3D world_origin;
	_RwTexDictionary* tex_dict;
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

struct xRule
{
	iRuleResource* m_resource;
	void* m_runtime;
};

struct iConditionRuntime
{
	xCondition* m_operand;
	uint16 m_match;
	uint16 m_trigger;
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

struct _RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
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

enum p2CartStatus
{
	I_CART_WRITE_BEGIN,
	I_CART_WRITE_WRITE,
	I_CART_WRITE_END,
	I_CART_READ_BEGIN,
	I_CART_READ_READ,
	I_CART_READ_END
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

struct tagiFloorTri
{
	uint16 m_v[3];
	uint16 m_n;
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

struct _RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
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

struct _RpSector
{
	int32 type;
};

struct Vector3D
{
	float32 x;
	float32 y;
	float32 z;
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

struct _RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct xTrigger
{
	iTriggerResource* m_resource;
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

struct p2Camera
{
	Vector3D m_pos;
	Vector3D m_rot;
	float32 m_fov;
};

struct _RxPipelineRequiresCluster
{
	_RxClusterDefinition* clusterDef;
	_RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct tagiCartControl
{
	int32 port;
	p2CartActions action;
	p2CartStatus state;
	int32 firstOp;
	int32 retry;
	int8 name[32];
	int32 status[8];
	int32 count;
	int8 names[16][24];
	int8 descs[36][24];
};

struct _RpMaterialList
{
	_RpMaterial** materials;
	int32 numMaterials;
	int32 space;
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

struct _RpMaterial
{
	_RwTexture* texture;
	_RwRGBA color;
	_RxPipeline* pipeline;
	_RwSurfaceProperties surfaceProps;
	int16 refCount;
	int16 pad;
};

struct _RwTexDictionary
{
	_RwObject object;
	_RwLinkList texturesInDict;
	_RwLLLink lInInstance;
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

struct iMarkerResource
{
	Vector3D m_pos;
};

struct _rxReq
{
};

struct xAction
{
	iActionResource* m_resource;
	iActionRuntime* m_runtime;
};

struct tagXStreamDirectoryEntry
{
	uint32 id;
	uint32 type;
	uint32 offset;
	uint32 length;
};

struct _RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct _RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
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

struct xCamera
{
	iCameraResource* m_resource;
	void** m_runtime;
};

struct _RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

struct xCondition
{
	iConditionResource* m_resource;
	iConditionRuntime* m_runtime;
};

struct _RxOutputSpec
{
	int8* name;
	_RxClusterValid* outputClusters;
	_RxClusterValid allOtherClusters;
};

struct xLight
{
	iLightResource* m_resource;
	_iLightRuntime* m_runtime;
};

struct _RwTexCoords
{
	float32 u;
	float32 v;
};

struct iLightResource
{
	uint32 m_type;
	Vector3D m_pos;
	Vector3D m_rot;
	Vector3D m_color;
	int32 m_fov;
};

struct _RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
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

struct _RxIoSpec
{
	uint32 numClustersOfInterest;
	_RxClusterRef* clustersOfInterest;
	_RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	_RxOutputSpec* outputs;
};

struct xMarker
{
	iMarkerResource* m_resource;
	void** m_runtime;
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

struct tagxCartControl
{
	uint8 state;
	uint8 cart;
	uint8 slot;
	uint8 done;
	uint8 ok;
	uint8 wrongDisk;
	uint8 formatError;
	uint8 pad;
	uint8 saveID[12];
	uint8 description[32];
	tagiCartControl platform;
	uint8* dataBuffer;
	uint8* compressionBuffer;
	uint16 dataBufferSize;
	uint16 compressionBufferSize;
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

struct iCameraResource
{
	uint16 m_plateOffset;
	uint16 m_versions;
	p2CameraVersion m_version[5];
	uint32 m_frameCount;
	p2Camera* m_cameras;
};

struct _RxClusterUnion
{
	union
	{
		_RxClusterDefinition* clusterDef;
		_RxPipelineCluster* clusterRef;
	};
};

struct iActionRuntime
{
	xAction* m_and;
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

struct iActionResource
{
	uint8 m_cmdType;
	uint8 m_cmd;
	uint16 pad;
	uint32 m_cmdParameter;
};

struct tag_xCameraControl
{
	int32 m_sceneID;
	int32 m_camera;
	int32 m_version;
	int32 m_command;
	int32 m_startLoc;
	int32 m_startFrame;
	int32 m_speed;
	int32 m_endLoc;
	int32 m_endFrame;
	int32 m_actualFrame;
	int32 m_animFrame;
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

struct tagXStreamMDSDirectory
{
	uint32 count;
	tagXStreamDirectoryEntry directory[1000];
};

tagxCartControl gCartControl;
int32 gCartTime;
int32 xCartDescriptionTable[2][17];
uint32 interpreterMethodSave;
uint32 interpreterMethodRestore;
int32 restoreDiskInfo;
uint8* restoreDataBuffer;
xScene* xScene_current;
float32 gTimeSec;
int32 requestCartRestore;
int8 vAssertBuf2[128];
XStreamHeader currentHeader;
tag_xCameraControl gCamera;

void xCartSlotInfo(int32 cart, int32 slot, int32 addr);
int32 xCartError();
int32 xCartFormat();
int32 xCartIsCardPresent();
int32 xCartGetCardFreeBlocks(int32 slot);
int32 xCartCountValidCardSlots();
int32 xCartCheckValidSlot(int32 slot);
int32 xCartCountValidSlots(int32 cart);
int32 xCartDeleteGame(int32 slot);
int32 xCartSaveGameDone();
int32 xCartSaveGame(int32 slot);
int32 xCartLoadGameDone();
int32 xCartLoadGame(int32 slot);
int32 xCartAccessCardDone();
int32 xCartAccessCard(int32 cart);
void xCartIdle();
void xCartRestoreComplete();
void xCartSave(int32 write);
void xCartSavePlayer(uint8* buffer, int32 size);
void xCartBeep();
void xCartEnd();
void xCartBegin();
void xCartReInitializeInterpreter();
int32 xCartInit();

// xCartSlotInfo__Fiii
// Start address: 0x361aa0
void xCartSlotInfo(int32 cart, int32 slot, int32 addr)
{
	// Line 1234, Address: 0x361aa0, Func Offset: 0
	// Line 1235, Address: 0x361aa8, Func Offset: 0x8
	// Line 1236, Address: 0x361ab0, Func Offset: 0x10
	// Func End, Address: 0x361ac0, Func Offset: 0x20
}

// xCartError__Fv
// Start address: 0x361ac0
int32 xCartError()
{
	// Line 1180, Address: 0x361ac0, Func Offset: 0
	// Line 1184, Address: 0x361ac8, Func Offset: 0x8
	// Line 1185, Address: 0x361ad8, Func Offset: 0x18
	// Line 1186, Address: 0x361ae8, Func Offset: 0x28
	// Line 1189, Address: 0x361af4, Func Offset: 0x34
	// Line 1190, Address: 0x361b04, Func Offset: 0x44
	// Line 1191, Address: 0x361b14, Func Offset: 0x54
	// Line 1194, Address: 0x361b20, Func Offset: 0x60
	// Line 1195, Address: 0x361b30, Func Offset: 0x70
	// Line 1196, Address: 0x361b40, Func Offset: 0x80
	// Line 1199, Address: 0x361b4c, Func Offset: 0x8c
	// Line 1201, Address: 0x361b80, Func Offset: 0xc0
	// Line 1202, Address: 0x361b90, Func Offset: 0xd0
	// Line 1203, Address: 0x361ba0, Func Offset: 0xe0
	// Line 1209, Address: 0x361bac, Func Offset: 0xec
	// Line 1210, Address: 0x361bbc, Func Offset: 0xfc
	// Line 1211, Address: 0x361bc0, Func Offset: 0x100
	// Func End, Address: 0x361bd0, Func Offset: 0x110
}

// xCartFormat__Fv
// Start address: 0x361bd0
int32 xCartFormat()
{
	int32 result;
	// Line 1152, Address: 0x361bd0, Func Offset: 0
	// Line 1155, Address: 0x361bdc, Func Offset: 0xc
	// Line 1157, Address: 0x361c10, Func Offset: 0x40
	// Line 1158, Address: 0x361c20, Func Offset: 0x50
	// Line 1159, Address: 0x361c2c, Func Offset: 0x5c
	// Line 1161, Address: 0x361c40, Func Offset: 0x70
	// Line 1162, Address: 0x361c48, Func Offset: 0x78
	// Line 1164, Address: 0x361c50, Func Offset: 0x80
	// Line 1165, Address: 0x361c54, Func Offset: 0x84
	// Func End, Address: 0x361c68, Func Offset: 0x98
}

// xCartIsCardPresent__Fv
// Start address: 0x361c70
int32 xCartIsCardPresent()
{
	// Line 1137, Address: 0x361c70, Func Offset: 0
	// Line 1138, Address: 0x361c78, Func Offset: 0x8
	// Line 1139, Address: 0x361c80, Func Offset: 0x10
	// Func End, Address: 0x361c90, Func Offset: 0x20
}

// xCartGetCardFreeBlocks__Fi
// Start address: 0x361c90
int32 xCartGetCardFreeBlocks(int32 slot)
{
	// Line 1127, Address: 0x361c90, Func Offset: 0
	// Line 1128, Address: 0x361c98, Func Offset: 0x8
	// Line 1129, Address: 0x361ca0, Func Offset: 0x10
	// Func End, Address: 0x361cb0, Func Offset: 0x20
}

// xCartCountValidCardSlots__Fi
// Start address: 0x361cb0
int32 xCartCountValidCardSlots()
{
	// Line 1115, Address: 0x361cb0, Func Offset: 0
	// Line 1116, Address: 0x361cb8, Func Offset: 0x8
	// Line 1117, Address: 0x361cc0, Func Offset: 0x10
	// Func End, Address: 0x361cd0, Func Offset: 0x20
}

// xCartCheckValidSlot__Fi
// Start address: 0x361cd0
int32 xCartCheckValidSlot(int32 slot)
{
	// Line 1101, Address: 0x361cd0, Func Offset: 0
	// Line 1102, Address: 0x361cd8, Func Offset: 0x8
	// Line 1103, Address: 0x361ce0, Func Offset: 0x10
	// Func End, Address: 0x361cf0, Func Offset: 0x20
}

// xCartCountValidSlots__Fi
// Start address: 0x361cf0
int32 xCartCountValidSlots(int32 cart)
{
	// Line 1088, Address: 0x361cf0, Func Offset: 0
	// Line 1089, Address: 0x361cf8, Func Offset: 0x8
	// Line 1090, Address: 0x361d00, Func Offset: 0x10
	// Func End, Address: 0x361d10, Func Offset: 0x20
}

// xCartDeleteGame__Fi
// Start address: 0x361d10
int32 xCartDeleteGame(int32 slot)
{
	// Line 1053, Address: 0x361d10, Func Offset: 0
	// Line 1054, Address: 0x361d20, Func Offset: 0x10
	// Line 1056, Address: 0x361d50, Func Offset: 0x40
	// Line 1058, Address: 0x361d5c, Func Offset: 0x4c
	// Line 1059, Address: 0x361d60, Func Offset: 0x50
	// Func End, Address: 0x361d74, Func Offset: 0x64
}

// xCartSaveGameDone__Fi
// Start address: 0x361d80
int32 xCartSaveGameDone()
{
	// Line 1029, Address: 0x361d80, Func Offset: 0
	// Line 1030, Address: 0x361d88, Func Offset: 0x8
	// Line 1032, Address: 0x361d98, Func Offset: 0x18
	// Line 1034, Address: 0x361dc8, Func Offset: 0x48
	// Line 1035, Address: 0x361dd8, Func Offset: 0x58
	// Line 1037, Address: 0x361de4, Func Offset: 0x64
	// Line 1039, Address: 0x361e18, Func Offset: 0x98
	// Line 1040, Address: 0x361e1c, Func Offset: 0x9c
	// Func End, Address: 0x361e2c, Func Offset: 0xac
}

// xCartSaveGame__Fi
// Start address: 0x361e30
int32 xCartSaveGame(int32 slot)
{
	int32 hour;
	int32 min;
	int32 sec;
	uint32 sceneId;
	int8* unknown;
	int8 init;
	// Line 970, Address: 0x361e30, Func Offset: 0
	// Line 977, Address: 0x361e4c, Func Offset: 0x1c
	// Line 979, Address: 0x361e80, Func Offset: 0x50
	// Line 986, Address: 0x361e94, Func Offset: 0x64
	// Line 996, Address: 0x361ea8, Func Offset: 0x78
	// Line 997, Address: 0x361ecc, Func Offset: 0x9c
	// Line 998, Address: 0x361ef0, Func Offset: 0xc0
	// Line 999, Address: 0x361f00, Func Offset: 0xd0
	// Line 1001, Address: 0x361f28, Func Offset: 0xf8
	// Line 1007, Address: 0x361fe0, Func Offset: 0x1b0
	// Line 1008, Address: 0x361ff0, Func Offset: 0x1c0
	// Line 1011, Address: 0x3620c4, Func Offset: 0x294
	// Line 1013, Address: 0x3620d4, Func Offset: 0x2a4
	// Line 1015, Address: 0x3620e0, Func Offset: 0x2b0
	// Line 1017, Address: 0x3620ec, Func Offset: 0x2bc
	// Line 1018, Address: 0x3620f0, Func Offset: 0x2c0
	// Func End, Address: 0x362110, Func Offset: 0x2e0
}

// xCartLoadGameDone__Fi
// Start address: 0x362110
int32 xCartLoadGameDone()
{
	// Line 922, Address: 0x362110, Func Offset: 0
	// Line 924, Address: 0x362138, Func Offset: 0x28
	// Line 926, Address: 0x362144, Func Offset: 0x34
	// Line 927, Address: 0x362148, Func Offset: 0x38
	// Func End, Address: 0x362150, Func Offset: 0x40
}

// xCartLoadGame__Fi
// Start address: 0x362150
int32 xCartLoadGame(int32 slot)
{
	// Line 902, Address: 0x362150, Func Offset: 0
	// Line 903, Address: 0x362160, Func Offset: 0x10
	// Line 905, Address: 0x362190, Func Offset: 0x40
	// Line 907, Address: 0x36219c, Func Offset: 0x4c
	// Line 909, Address: 0x3621a8, Func Offset: 0x58
	// Line 910, Address: 0x3621ac, Func Offset: 0x5c
	// Func End, Address: 0x3621c0, Func Offset: 0x70
}

// xCartAccessCardDone__Fi
// Start address: 0x3621c0
int32 xCartAccessCardDone()
{
	// Line 882, Address: 0x3621c0, Func Offset: 0
	// Line 883, Address: 0x3621c8, Func Offset: 0x8
	// Line 884, Address: 0x3621d8, Func Offset: 0x18
	// Line 886, Address: 0x3621e4, Func Offset: 0x24
	// Line 888, Address: 0x362218, Func Offset: 0x58
	// Line 889, Address: 0x36221c, Func Offset: 0x5c
	// Func End, Address: 0x36222c, Func Offset: 0x6c
}

// xCartAccessCard__Fi
// Start address: 0x362230
int32 xCartAccessCard(int32 cart)
{
	// Line 861, Address: 0x362230, Func Offset: 0
	// Line 862, Address: 0x362240, Func Offset: 0x10
	// Line 863, Address: 0x362250, Func Offset: 0x20
	// Line 865, Address: 0x36225c, Func Offset: 0x2c
	// Line 867, Address: 0x362290, Func Offset: 0x60
	// Line 869, Address: 0x362298, Func Offset: 0x68
	// Line 870, Address: 0x3622a4, Func Offset: 0x74
	// Func End, Address: 0x3622b8, Func Offset: 0x88
}

// xCartIdle__Fv
// Start address: 0x3622c0
void xCartIdle()
{
	// Line 765, Address: 0x3622c0, Func Offset: 0
	// Line 770, Address: 0x3622c8, Func Offset: 0x8
	// Line 776, Address: 0x3622d8, Func Offset: 0x18
	// Line 782, Address: 0x3622e0, Func Offset: 0x20
	// Line 789, Address: 0x362310, Func Offset: 0x50
	// Line 790, Address: 0x36231c, Func Offset: 0x5c
	// Line 791, Address: 0x362324, Func Offset: 0x64
	// Line 792, Address: 0x36232c, Func Offset: 0x6c
	// Line 799, Address: 0x362334, Func Offset: 0x74
	// Line 800, Address: 0x362340, Func Offset: 0x80
	// Line 801, Address: 0x362348, Func Offset: 0x88
	// Line 802, Address: 0x362354, Func Offset: 0x94
	// Line 809, Address: 0x36235c, Func Offset: 0x9c
	// Line 810, Address: 0x362368, Func Offset: 0xa8
	// Line 811, Address: 0x362370, Func Offset: 0xb0
	// Line 812, Address: 0x3623d4, Func Offset: 0x114
	// Line 819, Address: 0x3623dc, Func Offset: 0x11c
	// Line 821, Address: 0x3623ec, Func Offset: 0x12c
	// Line 823, Address: 0x3623f8, Func Offset: 0x138
	// Line 831, Address: 0x362400, Func Offset: 0x140
	// Line 833, Address: 0x362410, Func Offset: 0x150
	// Line 834, Address: 0x362420, Func Offset: 0x160
	// Line 835, Address: 0x362428, Func Offset: 0x168
	// Line 837, Address: 0x362434, Func Offset: 0x174
	// Line 844, Address: 0x36243c, Func Offset: 0x17c
	// Line 846, Address: 0x36244c, Func Offset: 0x18c
	// Line 850, Address: 0x362458, Func Offset: 0x198
	// Func End, Address: 0x362468, Func Offset: 0x1a8
}

// xCartRestoreComplete__Fv
// Start address: 0x362470
void xCartRestoreComplete()
{
	uint8* buffer;
	uint16 size;
	int32 nextDisk;
	int32 time;
	int32 tmp;
	int32 dataSize;
	uint32 cameraId;
	uint32 sceneId;
	int32 dataUsed;
	uint8* dataPointer;
	// Line 546, Address: 0x362470, Func Offset: 0
	// Line 558, Address: 0x362484, Func Offset: 0x14
	// Line 562, Address: 0x362488, Func Offset: 0x18
	// Line 575, Address: 0x3624a8, Func Offset: 0x38
	// Line 577, Address: 0x3624b4, Func Offset: 0x44
	// Line 579, Address: 0x3624d4, Func Offset: 0x64
	// Line 581, Address: 0x362578, Func Offset: 0x108
	// Line 588, Address: 0x36257c, Func Offset: 0x10c
	// Line 589, Address: 0x362584, Func Offset: 0x114
	// Line 595, Address: 0x362588, Func Offset: 0x118
	// Line 596, Address: 0x36258c, Func Offset: 0x11c
	// Line 597, Address: 0x362590, Func Offset: 0x120
	// Line 603, Address: 0x362594, Func Offset: 0x124
	// Line 605, Address: 0x3625a8, Func Offset: 0x138
	// Line 607, Address: 0x3625b8, Func Offset: 0x148
	// Line 608, Address: 0x3625c4, Func Offset: 0x154
	// Line 609, Address: 0x3625cc, Func Offset: 0x15c
	// Line 610, Address: 0x3625d4, Func Offset: 0x164
	// Line 612, Address: 0x3625dc, Func Offset: 0x16c
	// Line 613, Address: 0x3625e0, Func Offset: 0x170
	// Line 614, Address: 0x3625e4, Func Offset: 0x174
	// Line 616, Address: 0x3625f0, Func Offset: 0x180
	// Line 618, Address: 0x362600, Func Offset: 0x190
	// Line 619, Address: 0x36260c, Func Offset: 0x19c
	// Line 620, Address: 0x362614, Func Offset: 0x1a4
	// Line 621, Address: 0x36261c, Func Offset: 0x1ac
	// Line 628, Address: 0x362624, Func Offset: 0x1b4
	// Line 629, Address: 0x362628, Func Offset: 0x1b8
	// Line 630, Address: 0x36262c, Func Offset: 0x1bc
	// Line 631, Address: 0x362630, Func Offset: 0x1c0
	// Line 633, Address: 0x36263c, Func Offset: 0x1cc
	// Line 635, Address: 0x36264c, Func Offset: 0x1dc
	// Line 636, Address: 0x362658, Func Offset: 0x1e8
	// Line 637, Address: 0x362660, Func Offset: 0x1f0
	// Line 638, Address: 0x362668, Func Offset: 0x1f8
	// Line 641, Address: 0x362670, Func Offset: 0x200
	// Line 642, Address: 0x362674, Func Offset: 0x204
	// Line 643, Address: 0x362678, Func Offset: 0x208
	// Line 644, Address: 0x36267c, Func Offset: 0x20c
	// Line 646, Address: 0x362688, Func Offset: 0x218
	// Line 648, Address: 0x362698, Func Offset: 0x228
	// Line 649, Address: 0x3626a4, Func Offset: 0x234
	// Line 650, Address: 0x3626ac, Func Offset: 0x23c
	// Line 651, Address: 0x3626b4, Func Offset: 0x244
	// Line 684, Address: 0x3626bc, Func Offset: 0x24c
	// Line 697, Address: 0x3626e0, Func Offset: 0x270
	// Line 699, Address: 0x3626f0, Func Offset: 0x280
	// Line 700, Address: 0x362718, Func Offset: 0x2a8
	// Line 706, Address: 0x36271c, Func Offset: 0x2ac
	// Line 727, Address: 0x362724, Func Offset: 0x2b4
	// Line 729, Address: 0x362730, Func Offset: 0x2c0
	// Line 731, Address: 0x362750, Func Offset: 0x2e0
	// Line 732, Address: 0x362760, Func Offset: 0x2f0
	// Line 733, Address: 0x362764, Func Offset: 0x2f4
	// Line 734, Address: 0x362770, Func Offset: 0x300
	// Line 735, Address: 0x36277c, Func Offset: 0x30c
	// Line 736, Address: 0x362784, Func Offset: 0x314
	// Line 738, Address: 0x362790, Func Offset: 0x320
	// Line 739, Address: 0x36279c, Func Offset: 0x32c
	// Line 741, Address: 0x3627b0, Func Offset: 0x340
	// Line 755, Address: 0x3627b8, Func Offset: 0x348
	// Line 757, Address: 0x3627c8, Func Offset: 0x358
	// Line 758, Address: 0x3627d0, Func Offset: 0x360
	// Line 759, Address: 0x3627dc, Func Offset: 0x36c
	// Line 760, Address: 0x3627e8, Func Offset: 0x378
	// Line 762, Address: 0x3627f4, Func Offset: 0x384
	// Func End, Address: 0x362810, Func Offset: 0x3a0
}

// xCartSave__Fi
// Start address: 0x362810
void xCartSave(int32 write)
{
	uint32 dataSize;
	uint16 compressionBufferSize;
	uint16 dataBufferSize;
	int32 dataUsed;
	uint8* sizePointer;
	uint8* dataPointer;
	uint8* compressionBuffer;
	uint32* javaBuffer;
	// Line 328, Address: 0x362810, Func Offset: 0
	// Line 341, Address: 0x362828, Func Offset: 0x18
	// Line 348, Address: 0x362850, Func Offset: 0x40
	// Line 350, Address: 0x36285c, Func Offset: 0x4c
	// Line 352, Address: 0x36287c, Func Offset: 0x6c
	// Line 354, Address: 0x362920, Func Offset: 0x110
	// Line 355, Address: 0x362934, Func Offset: 0x124
	// Line 357, Address: 0x362944, Func Offset: 0x134
	// Line 358, Address: 0x3629ec, Func Offset: 0x1dc
	// Line 360, Address: 0x362a8c, Func Offset: 0x27c
	// Line 361, Address: 0x362aa0, Func Offset: 0x290
	// Line 362, Address: 0x362aac, Func Offset: 0x29c
	// Line 364, Address: 0x362abc, Func Offset: 0x2ac
	// Line 366, Address: 0x362acc, Func Offset: 0x2bc
	// Line 367, Address: 0x362ad8, Func Offset: 0x2c8
	// Line 368, Address: 0x362ae0, Func Offset: 0x2d0
	// Line 369, Address: 0x362ae8, Func Offset: 0x2d8
	// Line 372, Address: 0x362af0, Func Offset: 0x2e0
	// Line 373, Address: 0x362af4, Func Offset: 0x2e4
	// Line 374, Address: 0x362af8, Func Offset: 0x2e8
	// Line 375, Address: 0x362afc, Func Offset: 0x2ec
	// Line 377, Address: 0x362b0c, Func Offset: 0x2fc
	// Line 380, Address: 0x362b1c, Func Offset: 0x30c
	// Line 381, Address: 0x362b28, Func Offset: 0x318
	// Line 382, Address: 0x362b30, Func Offset: 0x320
	// Line 383, Address: 0x362b38, Func Offset: 0x328
	// Line 391, Address: 0x362b40, Func Offset: 0x330
	// Line 392, Address: 0x362b4c, Func Offset: 0x33c
	// Line 393, Address: 0x362b50, Func Offset: 0x340
	// Line 394, Address: 0x362b54, Func Offset: 0x344
	// Line 396, Address: 0x362b64, Func Offset: 0x354
	// Line 398, Address: 0x362b74, Func Offset: 0x364
	// Line 399, Address: 0x362b80, Func Offset: 0x370
	// Line 400, Address: 0x362b88, Func Offset: 0x378
	// Line 401, Address: 0x362b90, Func Offset: 0x380
	// Line 409, Address: 0x362b98, Func Offset: 0x388
	// Line 410, Address: 0x362ba4, Func Offset: 0x394
	// Line 411, Address: 0x362ba8, Func Offset: 0x398
	// Line 412, Address: 0x362bac, Func Offset: 0x39c
	// Line 414, Address: 0x362bbc, Func Offset: 0x3ac
	// Line 416, Address: 0x362bcc, Func Offset: 0x3bc
	// Line 417, Address: 0x362bd8, Func Offset: 0x3c8
	// Line 418, Address: 0x362be0, Func Offset: 0x3d0
	// Line 419, Address: 0x362be8, Func Offset: 0x3d8
	// Line 423, Address: 0x362bf0, Func Offset: 0x3e0
	// Line 424, Address: 0x362bfc, Func Offset: 0x3ec
	// Line 425, Address: 0x362c00, Func Offset: 0x3f0
	// Line 426, Address: 0x362c04, Func Offset: 0x3f4
	// Line 428, Address: 0x362c14, Func Offset: 0x404
	// Line 430, Address: 0x362c24, Func Offset: 0x414
	// Line 431, Address: 0x362c30, Func Offset: 0x420
	// Line 432, Address: 0x362c38, Func Offset: 0x428
	// Line 433, Address: 0x362c40, Func Offset: 0x430
	// Line 440, Address: 0x362c48, Func Offset: 0x438
	// Line 442, Address: 0x362c4c, Func Offset: 0x43c
	// Line 444, Address: 0x362c50, Func Offset: 0x440
	// Line 445, Address: 0x362c58, Func Offset: 0x448
	// Line 450, Address: 0x362c68, Func Offset: 0x458
	// Line 460, Address: 0x362c84, Func Offset: 0x474
	// Line 461, Address: 0x362c90, Func Offset: 0x480
	// Line 463, Address: 0x362ca0, Func Offset: 0x490
	// Line 465, Address: 0x362cb0, Func Offset: 0x4a0
	// Line 466, Address: 0x362cbc, Func Offset: 0x4ac
	// Line 467, Address: 0x362cc4, Func Offset: 0x4b4
	// Line 468, Address: 0x362ccc, Func Offset: 0x4bc
	// Line 472, Address: 0x362cd4, Func Offset: 0x4c4
	// Line 477, Address: 0x362cdc, Func Offset: 0x4cc
	// Line 479, Address: 0x362ce4, Func Offset: 0x4d4
	// Line 484, Address: 0x362ce8, Func Offset: 0x4d8
	// Line 488, Address: 0x362cf0, Func Offset: 0x4e0
	// Func End, Address: 0x362d0c, Func Offset: 0x4fc
}

// xCartSavePlayer__FPUci
// Start address: 0x362d10
void xCartSavePlayer(uint8* buffer, int32 size)
{
	int32 dataSize;
	uint32* javaBuffer;
	// Line 223, Address: 0x362d10, Func Offset: 0
	// Line 228, Address: 0x362d24, Func Offset: 0x14
	// Line 230, Address: 0x362d28, Func Offset: 0x18
	// Line 231, Address: 0x362d30, Func Offset: 0x20
	// Line 236, Address: 0x362d34, Func Offset: 0x24
	// Line 250, Address: 0x362d70, Func Offset: 0x60
	// Line 251, Address: 0x362e18, Func Offset: 0x108
	// Func End, Address: 0x362e30, Func Offset: 0x120
}

// xCartBeep__Fv
// Start address: 0x362e30
void xCartBeep()
{
	// Line 208, Address: 0x362e30, Func Offset: 0
	// Line 209, Address: 0x362e38, Func Offset: 0x8
	// Line 210, Address: 0x362e44, Func Offset: 0x14
	// Func End, Address: 0x362e54, Func Offset: 0x24
}

// xCartEnd__Fv
// Start address: 0x362e60
void xCartEnd()
{
	// Line 196, Address: 0x362e60, Func Offset: 0
	// Line 198, Address: 0x362e68, Func Offset: 0x8
	// Line 200, Address: 0x362e78, Func Offset: 0x18
	// Line 202, Address: 0x362e88, Func Offset: 0x28
	// Line 204, Address: 0x362e90, Func Offset: 0x30
	// Line 205, Address: 0x362e98, Func Offset: 0x38
	// Func End, Address: 0x362ea8, Func Offset: 0x48
}

// xCartBegin__Fv
// Start address: 0x362eb0
void xCartBegin()
{
	// Line 183, Address: 0x362eb0, Func Offset: 0
	// Line 185, Address: 0x362eb8, Func Offset: 0x8
	// Line 187, Address: 0x362ec8, Func Offset: 0x18
	// Line 189, Address: 0x362ed8, Func Offset: 0x28
	// Line 190, Address: 0x362ee0, Func Offset: 0x30
	// Line 191, Address: 0x362eec, Func Offset: 0x3c
	// Line 192, Address: 0x362ef4, Func Offset: 0x44
	// Line 193, Address: 0x362efc, Func Offset: 0x4c
	// Func End, Address: 0x362f0c, Func Offset: 0x5c
}

// xCartReInitializeInterpreter__Fv
// Start address: 0x362f10
void xCartReInitializeInterpreter()
{
	// Line 167, Address: 0x362f10, Func Offset: 0
	// Line 168, Address: 0x362f14, Func Offset: 0x4
	// Line 169, Address: 0x362f18, Func Offset: 0x8
	// Func End, Address: 0x362f20, Func Offset: 0x10
}

// xCartInit__Fv
// Start address: 0x362f20
int32 xCartInit()
{
	// Line 102, Address: 0x362f20, Func Offset: 0
	// Line 107, Address: 0x362f28, Func Offset: 0x8
	// Line 109, Address: 0x362f34, Func Offset: 0x14
	// Line 110, Address: 0x362f4c, Func Offset: 0x2c
	// Line 112, Address: 0x362f64, Func Offset: 0x44
	// Line 113, Address: 0x36300c, Func Offset: 0xec
	// Line 118, Address: 0x3630b4, Func Offset: 0x194
	// Line 130, Address: 0x3630bc, Func Offset: 0x19c
	// Line 133, Address: 0x3630cc, Func Offset: 0x1ac
	// Line 136, Address: 0x3630d4, Func Offset: 0x1b4
	// Line 137, Address: 0x3630d8, Func Offset: 0x1b8
	// Func End, Address: 0x3630e8, Func Offset: 0x1c8
}

