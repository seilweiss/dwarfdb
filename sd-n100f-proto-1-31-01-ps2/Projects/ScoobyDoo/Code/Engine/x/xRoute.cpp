typedef struct xNavPoint;
typedef struct tagXStreamMDSDirectory;
typedef struct _rxHeapSuperBlockDescriptor;
typedef struct xRoute;
typedef struct _rwResEntryTag;
typedef struct _RpMeshHeader;
typedef struct xRouteTargetTrigger;
typedef struct _tagiEnvRuntime;
typedef struct _RxHeap;
typedef struct _rxHeapBlockHeader;
typedef struct xTrigger;
typedef struct p2Camera;
typedef struct Vector3D;
typedef struct _RxPipeline;
typedef struct _iEntryPointRuntime;
typedef struct xSearchPoint;
typedef enum _RxClusterValidityReq;
typedef struct _rxHeapFreeBlock;
typedef struct _RpWorld;
typedef struct iRuleResource;
typedef struct xRouteUseage;
typedef struct _RxPipelineNodeTopSortData;
typedef struct xCamera;
typedef struct tagiFloor;
typedef struct _RxPipelineNode;
typedef struct _RxClusterDefinition;
typedef struct iCameraResource;
typedef struct _RwTexDictionary;
typedef struct xListItem;
typedef enum _RwTextureFilterMode;
typedef struct _RxPipelineNodeParam;
typedef struct iMarkerResource;
typedef struct _RxPipelineCluster;
typedef enum _rxEmbeddedPacketState;
typedef struct xAction;
typedef struct _class_0;
typedef struct xCondition;
typedef struct xRouteTargetNavPoint;
typedef struct _RxNodeDefinition;
typedef enum _RxClusterValid;
typedef struct _RpMaterial;
typedef struct _RpVertexNormal;
typedef struct _iLightRuntime;
typedef struct _RwSurfaceProperties;
typedef struct _RwTexture;
typedef struct p2CameraVersion;
typedef struct XStreamHeader;
typedef struct _RwV3d;
typedef struct xSearch;
typedef struct iLightResource;
typedef struct _RpSector;
typedef struct _RxPipelineRequiresCluster;
typedef struct xRouteTargetMarker;
typedef struct xMarker;
typedef enum _rpWorldRenderOrder;
typedef struct xEntryPoint;
typedef struct iConditionRuntime;
typedef struct _RpPolygon;
typedef struct _rxReq;
typedef struct _tagxEnv;
typedef struct tagiFloorTri;
typedef struct tagXStreamDirectoryEntry;
typedef struct _RwObject;
typedef struct xNavLink;
typedef struct xRouteTarget;
typedef struct xScene;
typedef struct _RpWorldSector;
typedef struct iEntryPointResource;
typedef struct _RxOutputSpec;
typedef struct iTriggerResource;
typedef struct _RwBBox;
typedef struct _RxClusterRef;
typedef struct iActionRuntime;
typedef struct _class_1;
typedef struct _RwRaster;
typedef struct _RwLLLink;
typedef struct _RpCollSector;
typedef struct _RxIoSpec;
typedef struct _RwRGBA;
typedef struct iActionResource;
typedef struct _RxNodeMethods;
typedef enum _RxClusterForcePresent;
typedef struct _RpMaterialList;
typedef struct _RxPacket;
typedef enum _RxNodeDefEditable;
typedef struct iDisplayCamera;
typedef struct xRouteTargetActor;
typedef struct _RxClusterUnion;
typedef struct xLight;
typedef enum _RwTextureAddressMode;
typedef struct xRouteUseageOneShot;
typedef struct iConditionResource;
typedef struct _RxCluster;
typedef struct _RwLinkList;
typedef struct _RwTexCoords;
typedef struct xRule;
typedef struct xList;
typedef struct xRouteTargetObject;
typedef struct xRouteUseagePatrol;

typedef void(*type_1)(_rwResEntryTag*);
typedef int32(*type_2)(_RxPipelineNode*, _RxPipelineNodeParam*);
typedef int32(*type_3)(_RxNodeDefinition*);
typedef void(*type_4)(_RxNodeDefinition*);
typedef int32(*type_7)(_RxPipelineNode*);
typedef void(*type_8)(_RxPipelineNode*);
typedef int32(*type_10)(_RxPipelineNode*, _RxPipeline*);
typedef uint32(*type_13)(_RxPipelineNode*, uint32, uint32, void*);
typedef _RpWorldSector*(*type_15)(_RpWorldSector*);

typedef tagXStreamDirectoryEntry type_0[1000];
typedef uint32 type_5[4];
typedef float32 type_6[3];
typedef iLightResource type_9[2];
typedef int8 type_11[2048];
typedef uint16 type_12[3];
typedef iTriggerResource* type_14[20];
typedef uint8 type_16[2];
typedef iTriggerResource* type_17[20];
typedef _RxCluster type_18[1];
typedef Vector3D type_19[4];
typedef uint8 type_20[3];
typedef iTriggerResource* type_21[20];
typedef p2CameraVersion type_22[5];
typedef int8 type_23[32];
typedef iTriggerResource* type_24[20];
typedef int8 type_25[32];
typedef iTriggerResource* type_26[20];
typedef int8 type_27[128];
typedef iTriggerResource* type_28[20];
typedef iTriggerResource* type_29[20];
typedef Vector3D type_30[4];
typedef iTriggerResource* type_31[20];
typedef iTriggerResource* type_32[20];
typedef iTriggerResource* type_33[20];
typedef uint16 type_34[3];
typedef iTriggerResource* type_35[20];
typedef iTriggerResource* type_36[20];

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

struct tagXStreamMDSDirectory
{
	uint32 count;
	tagXStreamDirectoryEntry directory[1000];
};

struct _rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	_rxHeapSuperBlockDescriptor* next;
};

struct xRoute
{
	int32 m_physType;
	int32 m_flags;
	int32 m_status;
	xScene* m_scene;
	Vector3D m_pointA;
	Vector3D m_pointB;
	xNavPoint* m_npA;
	xNavPoint* m_npB;
	xList m_list;
	xSearch* m_search;
	xRouteTarget m_target;
	xRouteUseage m_useage;
};

struct _rwResEntryTag
{
	_RwLLLink link;
	int32 size;
	void* owner;
	_rwResEntryTag** ownerRef;
	void(*destroyNotify)(_rwResEntryTag*);
};

struct _RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct xRouteTargetTrigger
{
	int32 m_id;
};

struct _tagiEnvRuntime
{
	_RpWorld* world;
	Vector3D world_origin;
	_RwTexDictionary* tex_dict;
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

struct xTrigger
{
	iTriggerResource* m_resource;
};

struct p2Camera
{
	Vector3D m_pos;
	Vector3D m_rot;
	float32 m_fov;
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

struct _iEntryPointRuntime
{
	uint32 m_enabled;
};

struct xSearchPoint
{
	int8 m_searchID;
	uint8 m_depth;
	uint16 m_pad;
	float32 m_f;
	float32 m_cost;
	float32 m_heuristic;
	xNavPoint* m_np;
	xSearchPoint* m_parent;
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

struct xRouteUseage
{
	int32 m_type;
	int32 m_dir;
	_class_0 u;
};

struct _RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	_rxReq* req;
	void* initialisationData;
	uint32 initialisationDataSize;
};

struct xCamera
{
	iCameraResource* m_resource;
	void** m_runtime;
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

struct iCameraResource
{
	uint16 m_plateOffset;
	uint16 m_versions;
	p2CameraVersion m_version[5];
	uint32 m_frameCount;
	p2Camera* m_cameras;
};

struct _RwTexDictionary
{
	_RwObject object;
	_RwLinkList texturesInDict;
	_RwLLLink lInInstance;
};

struct xListItem
{
	void* m_item;
	xListItem* m_next;
	xListItem* m_prev;
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

struct iMarkerResource
{
	Vector3D m_pos;
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

struct xAction
{
	iActionResource* m_resource;
	iActionRuntime* m_runtime;
};

struct _class_0
{
	union
	{
		xRouteUseagePatrol m_patrol;
		xRouteUseageOneShot m_oneShot;
	};
};

struct xCondition
{
	iConditionResource* m_resource;
	iConditionRuntime* m_runtime;
};

struct xRouteTargetNavPoint
{
	int32 m_id;
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

struct _RpMaterial
{
	_RwTexture* texture;
	_RwRGBA color;
	_RxPipeline* pipeline;
	_RwSurfaceProperties surfaceProps;
	int16 refCount;
	int16 pad;
};

struct _RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
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

struct _RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
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

struct _RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct xSearch
{
	int8 m_id;
	uint8 m_method;
	uint8 m_status;
	uint8 m_flags;
	uint32 m_startTime;
	xNavPoint* m_start;
	uint32 m_finishTime;
	xNavPoint* m_finish;
	xNavPoint* m_goal;
	xSearchPoint* m_finishSearchPoint;
	uint32 m_passes;
	xList m_open;
	xList m_closed;
	int8 m_waitForSearch;
	uint8 m_pad[3];
};

struct iLightResource
{
	uint32 m_type;
	Vector3D m_pos;
	Vector3D m_rot;
	Vector3D m_color;
	int32 m_fov;
};

struct _RpSector
{
	int32 type;
};

struct _RxPipelineRequiresCluster
{
	_RxClusterDefinition* clusterDef;
	_RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct xRouteTargetMarker
{
	int32 m_id;
};

struct xMarker
{
	iMarkerResource* m_resource;
	void** m_runtime;
};

enum _rpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct xEntryPoint
{
	iEntryPointResource* m_resource;
	_iEntryPointRuntime* m_runtime;
};

struct iConditionRuntime
{
	xCondition* m_operand;
	uint16 m_match;
	uint16 m_trigger;
};

struct _RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
};

struct _rxReq
{
};

struct _tagxEnv
{
	_tagiEnvRuntime* m_runtime;
};

struct tagiFloorTri
{
	uint16 m_v[3];
	uint16 m_n;
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

struct xRouteTarget
{
	int8 m_type;
	uint8 m_hasLOSToTarget;
	uint8 m_pad2[2];
	Vector3D m_pos;
	float32 m_rerouteThreshold;
	_class_1 t;
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

struct _RxOutputSpec
{
	int8* name;
	_RxClusterValid* outputClusters;
	_RxClusterValid allOtherClusters;
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

struct iActionRuntime
{
	xAction* m_and;
};

struct _class_1
{
	union
	{
		xRouteTargetActor m_actor;
		xRouteTargetObject m_object;
		xRouteTargetTrigger m_trigger;
		xRouteTargetNavPoint m_navPoint;
		xRouteTargetMarker m_marker;
	};
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

struct _RwLLLink
{
	_RwLLLink* next;
	_RwLLLink* prev;
};

struct _RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
};

struct _RxIoSpec
{
	uint32 numClustersOfInterest;
	_RxClusterRef* clustersOfInterest;
	_RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	_RxOutputSpec* outputs;
};

struct _RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct iActionResource
{
	uint8 m_cmdType;
	uint8 m_cmd;
	uint16 pad;
	uint32 m_cmdParameter;
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

struct _RpMaterialList
{
	_RpMaterial** materials;
	int32 numMaterials;
	int32 space;
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

struct iDisplayCamera
{
	Vector3D m_pos;
	Vector3D m_rot;
	float32 m_fov;
};

struct xRouteTargetActor
{
	int32 m_type;
	int32 m_id;
};

struct _RxClusterUnion
{
	union
	{
		_RxClusterDefinition* clusterDef;
		_RxPipelineCluster* clusterRef;
	};
};

struct xLight
{
	iLightResource* m_resource;
	_iLightRuntime* m_runtime;
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

struct xRouteUseageOneShot
{
	int32 m_unused;
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

struct _RwTexCoords
{
	float32 u;
	float32 v;
};

struct xRule
{
	iRuleResource* m_resource;
	void* m_runtime;
};

struct xList
{
	xListItem* m_head;
	xListItem* m_tail;
};

struct xRouteTargetObject
{
	int32 m_id;
};

struct xRouteUseagePatrol
{
	int32 m_patrolDir;
};

int8 vAssertBuf2[128];
XStreamHeader currentHeader;

void xRouteClearPath(xRoute* r);
void xRouteOccupyPath(xRoute* r);
void xRouteBuildSearchRoute(xRoute* r, xSearchPoint* p);
void xRouteBuildSearchRouteAB(xRoute* r, xSearch* s, Vector3D* a, Vector3D* b);
void xRouteDestroyRoute(xRoute* r);
void xRouteDraw(xRoute* r);
xNavPoint* xRouteGetNextNavPoint(xRoute* r, xNavPoint* p);
void xRouteSetState(xRoute* r, int32 newState);
void xRouteInit(xRoute* r);

// xRouteClearPath__FP6xRoute
// Start address: 0x33f050
void xRouteClearPath(xRoute* r)
{
	xListItem* i;
	// Line 671, Address: 0x33f050, Func Offset: 0
	// Line 674, Address: 0x33f060, Func Offset: 0x10
	// Line 677, Address: 0x33f100, Func Offset: 0xb0
	// Line 680, Address: 0x33f110, Func Offset: 0xc0
	// Line 682, Address: 0x33f12c, Func Offset: 0xdc
	// Line 686, Address: 0x33f130, Func Offset: 0xe0
	// Line 689, Address: 0x33f138, Func Offset: 0xe8
	// Line 690, Address: 0x33f144, Func Offset: 0xf4
	// Line 692, Address: 0x33f158, Func Offset: 0x108
	// Line 693, Address: 0x33f160, Func Offset: 0x110
	// Line 694, Address: 0x33f168, Func Offset: 0x118
	// Func End, Address: 0x33f17c, Func Offset: 0x12c
}

// xRouteOccupyPath__FP6xRoute
// Start address: 0x33f180
void xRouteOccupyPath(xRoute* r)
{
	xListItem* i;
	// Line 634, Address: 0x33f180, Func Offset: 0
	// Line 637, Address: 0x33f190, Func Offset: 0x10
	// Line 640, Address: 0x33f230, Func Offset: 0xb0
	// Line 643, Address: 0x33f240, Func Offset: 0xc0
	// Line 645, Address: 0x33f24c, Func Offset: 0xcc
	// Line 649, Address: 0x33f250, Func Offset: 0xd0
	// Line 652, Address: 0x33f258, Func Offset: 0xd8
	// Line 653, Address: 0x33f264, Func Offset: 0xe4
	// Line 655, Address: 0x33f278, Func Offset: 0xf8
	// Line 656, Address: 0x33f280, Func Offset: 0x100
	// Line 658, Address: 0x33f288, Func Offset: 0x108
	// Func End, Address: 0x33f29c, Func Offset: 0x11c
}

// xRouteBuildSearchRoute__FP6xRouteP12xSearchPoint
// Start address: 0x33f2a0
void xRouteBuildSearchRoute(xRoute* r, xSearchPoint* p)
{
	// Line 597, Address: 0x33f2a0, Func Offset: 0
	// Line 598, Address: 0x33f2b8, Func Offset: 0x18
	// Line 600, Address: 0x33f35c, Func Offset: 0xbc
	// Line 602, Address: 0x33f364, Func Offset: 0xc4
	// Line 604, Address: 0x33f408, Func Offset: 0x168
	// Line 607, Address: 0x33f414, Func Offset: 0x174
	// Line 609, Address: 0x33f430, Func Offset: 0x190
	// Line 611, Address: 0x33f438, Func Offset: 0x198
	// Line 614, Address: 0x33f448, Func Offset: 0x1a8
	// Line 615, Address: 0x33f454, Func Offset: 0x1b4
	// Line 617, Address: 0x33f470, Func Offset: 0x1d0
	// Line 618, Address: 0x33f478, Func Offset: 0x1d8
	// Line 621, Address: 0x33f480, Func Offset: 0x1e0
	// Func End, Address: 0x33f498, Func Offset: 0x1f8
}

// xRouteBuildSearchRouteAB__FP6xRouteP7xSearchP8Vector3DP8Vector3D
// Start address: 0x33f4a0
void xRouteBuildSearchRouteAB(xRoute* r, xSearch* s, Vector3D* a, Vector3D* b)
{
	// Line 539, Address: 0x33f4a0, Func Offset: 0
	// Line 540, Address: 0x33f4c0, Func Offset: 0x20
	// Line 541, Address: 0x33f4d8, Func Offset: 0x38
	// Line 543, Address: 0x33f4f0, Func Offset: 0x50
	// Line 547, Address: 0x33f500, Func Offset: 0x60
	// Line 548, Address: 0x33f518, Func Offset: 0x78
	// Line 549, Address: 0x33f530, Func Offset: 0x90
	// Func End, Address: 0x33f54c, Func Offset: 0xac
}

// xRouteDestroyRoute__FP6xRoute
// Start address: 0x33f550
void xRouteDestroyRoute(xRoute* r)
{
	// Line 485, Address: 0x33f550, Func Offset: 0
	// Line 486, Address: 0x33f564, Func Offset: 0x14
	// Line 488, Address: 0x33f670, Func Offset: 0x120
	// Line 491, Address: 0x33f67c, Func Offset: 0x12c
	// Line 492, Address: 0x33f68c, Func Offset: 0x13c
	// Line 496, Address: 0x33f690, Func Offset: 0x140
	// Line 498, Address: 0x33f69c, Func Offset: 0x14c
	// Line 500, Address: 0x33f6a8, Func Offset: 0x158
	// Line 503, Address: 0x33f74c, Func Offset: 0x1fc
	// Line 504, Address: 0x33f750, Func Offset: 0x200
	// Func End, Address: 0x33f768, Func Offset: 0x218
}

// xRouteDraw__FP6xRoute
// Start address: 0x33f770
void xRouteDraw(xRoute* r)
{
	xNavPoint* b;
	xNavPoint* a;
	Vector3D posb;
	Vector3D posa;
	xListItem* i;
	float32 shift;
	Vector3D lastPoint;
	// Line 386, Address: 0x33f770, Func Offset: 0
	// Line 387, Address: 0x33f788, Func Offset: 0x18
	// Line 393, Address: 0x33f7a4, Func Offset: 0x34
	// Line 396, Address: 0x33f7b0, Func Offset: 0x40
	// Line 399, Address: 0x33f7bc, Func Offset: 0x4c
	// Line 400, Address: 0x33f7d8, Func Offset: 0x68
	// Line 403, Address: 0x33f7e0, Func Offset: 0x70
	// Line 405, Address: 0x33f7ec, Func Offset: 0x7c
	// Line 406, Address: 0x33f7f0, Func Offset: 0x80
	// Line 408, Address: 0x33f7f8, Func Offset: 0x88
	// Line 413, Address: 0x33f804, Func Offset: 0x94
	// Line 414, Address: 0x33f808, Func Offset: 0x98
	// Line 415, Address: 0x33f810, Func Offset: 0xa0
	// Line 416, Address: 0x33f828, Func Offset: 0xb8
	// Line 417, Address: 0x33f82c, Func Offset: 0xbc
	// Line 419, Address: 0x33f838, Func Offset: 0xc8
	// Line 421, Address: 0x33f844, Func Offset: 0xd4
	// Line 422, Address: 0x33f85c, Func Offset: 0xec
	// Line 423, Address: 0x33f860, Func Offset: 0xf0
	// Line 425, Address: 0x33f86c, Func Offset: 0xfc
	// Line 427, Address: 0x33f878, Func Offset: 0x108
	// Line 429, Address: 0x33f894, Func Offset: 0x124
	// Line 431, Address: 0x33f8a0, Func Offset: 0x130
	// Line 432, Address: 0x33f8bc, Func Offset: 0x14c
	// Line 434, Address: 0x33f8c0, Func Offset: 0x150
	// Line 435, Address: 0x33f8d8, Func Offset: 0x168
	// Line 438, Address: 0x33f8e0, Func Offset: 0x170
	// Line 440, Address: 0x33f8ec, Func Offset: 0x17c
	// Line 444, Address: 0x33f908, Func Offset: 0x198
	// Line 445, Address: 0x33f910, Func Offset: 0x1a0
	// Line 446, Address: 0x33f918, Func Offset: 0x1a8
	// Line 449, Address: 0x33f920, Func Offset: 0x1b0
	// Line 452, Address: 0x33f93c, Func Offset: 0x1cc
	// Func End, Address: 0x33f958, Func Offset: 0x1e8
}

// xRouteGetNextNavPoint__FP6xRouteP9xNavPoint
// Start address: 0x33f960
xNavPoint* xRouteGetNextNavPoint(xRoute* r, xNavPoint* p)
{
	xListItem* i;
	// Line 291, Address: 0x33f960, Func Offset: 0
	// Line 293, Address: 0x33f96c, Func Offset: 0xc
	// Line 296, Address: 0x33f970, Func Offset: 0x10
	// Line 297, Address: 0x33f978, Func Offset: 0x18
	// Line 302, Address: 0x33f984, Func Offset: 0x24
	// Line 305, Address: 0x33f990, Func Offset: 0x30
	// Line 309, Address: 0x33f9b8, Func Offset: 0x58
	// Line 310, Address: 0x33f9c0, Func Offset: 0x60
	// Line 312, Address: 0x33f9c8, Func Offset: 0x68
	// Line 313, Address: 0x33f9cc, Func Offset: 0x6c
	// Func End, Address: 0x33f9d4, Func Offset: 0x74
}

// xRouteSetState__FP6xRoutei
// Start address: 0x33f9e0
void xRouteSetState(xRoute* r, int32 newState)
{
	// Line 89, Address: 0x33f9e0, Func Offset: 0
	// Line 90, Address: 0x33f9f8, Func Offset: 0x18
	// Line 93, Address: 0x33fa98, Func Offset: 0xb8
	// Line 95, Address: 0x33fa9c, Func Offset: 0xbc
	// Func End, Address: 0x33fab4, Func Offset: 0xd4
}

// xRouteInit__FP6xRoute
// Start address: 0x33fac0
void xRouteInit(xRoute* r)
{
	// Line 44, Address: 0x33fac0, Func Offset: 0
	// Line 45, Address: 0x33fac8, Func Offset: 0x8
	// Line 46, Address: 0x33facc, Func Offset: 0xc
	// Line 47, Address: 0x33fad0, Func Offset: 0x10
	// Line 48, Address: 0x33fad4, Func Offset: 0x14
	// Line 50, Address: 0x33fadc, Func Offset: 0x1c
	// Line 52, Address: 0x33fae8, Func Offset: 0x28
	// Func End, Address: 0x33faf8, Func Offset: 0x38
}

