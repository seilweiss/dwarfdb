typedef struct _RxClusterDefinition;
typedef struct _RwRaster;
typedef struct xLight;
typedef struct _RxOutputSpec;
typedef struct _RxPipelineNode;
typedef struct Vector3D;
typedef struct iConditionResource;
typedef struct _RxPipeline;
typedef struct _rxHeapSuperBlockDescriptor;
typedef struct _RwV3d;
typedef struct _rwResEntryTag;
typedef struct iLightResource;
typedef struct xSearch;
typedef struct _RxHeap;
typedef struct _rxHeapBlockHeader;
typedef struct iTriggerResource;
typedef struct xEntryPoint;
typedef struct _RpVertexNormal;
typedef struct xRule;
typedef struct xNavPoint;
typedef struct _iLightRuntime;
typedef struct iConditionRuntime;
typedef enum _RxClusterValidityReq;
typedef struct _rxHeapFreeBlock;
typedef struct xSearchPoint;
typedef struct _RwTexCoords;
typedef struct _RxPipelineNodeTopSortData;
typedef struct xScene;
typedef struct _RwV2d;
typedef struct _RwRGBA;
typedef struct xTrigger;
typedef struct tagxPhysicsObject;
typedef struct tagiFloorTri;
typedef struct _RxPipelineNodeParam;
typedef struct _RxPipelineCluster;
typedef enum _rxEmbeddedPacketState;
typedef struct iRuleResource;
typedef struct xMarker;
typedef struct tagXStreamMDSDirectory;
typedef struct _RxNodeDefinition;
typedef enum _RxClusterValid;
typedef struct iMarkerResource;
typedef struct _RwSurfaceProperties;
typedef struct xNavLink;
typedef struct _RpCollSector;
typedef struct p2Camera;
typedef struct _iEntryPointRuntime;
typedef enum _RwTextureFilterMode;
typedef struct _RpMeshHeader;
typedef struct _tagiEnvRuntime;
typedef struct tagiFloor;
typedef struct _RxPipelineRequiresCluster;
typedef struct _RpWorld;
typedef struct xCamera;
typedef struct xAction;
typedef struct iCameraResource;
typedef struct _RwTexDictionary;
typedef struct _rxReq;
typedef struct XStreamHeader;
typedef struct xCondition;
typedef struct _RpMaterial;
typedef struct _RwObject;
typedef struct p2CameraVersion;
typedef struct _RwTexture;
typedef struct xListItem;
typedef struct xPathfinder;
typedef struct _RpSector;
typedef struct _RxClusterRef;
typedef enum _rpWorldRenderOrder;
typedef struct tagXStreamDirectoryEntry;
typedef struct _RwLLLink;
typedef struct _RpPolygon;
typedef struct _RxIoSpec;
typedef struct _tagxEnv;
typedef struct _RxNodeMethods;
typedef struct iEntryPointResource;
typedef enum _RxClusterForcePresent;
typedef struct _RpWorldSector;
typedef struct _RwBBox;
typedef struct xList;
typedef struct _RxPacket;
typedef enum _RxNodeDefEditable;
typedef struct xLine2D;
typedef struct iActionRuntime;
typedef struct _RxClusterUnion;
typedef struct _RxCluster;
typedef struct iActionResource;
typedef struct _RwLinkList;
typedef struct _RpMaterialList;
typedef struct iDisplayCamera;
typedef enum _RwTextureAddressMode;

typedef void(*type_1)(_rwResEntryTag*);
typedef int32(*type_3)(_RxPipelineNode*, _RxPipelineNodeParam*);
typedef int32(*type_6)(_RxNodeDefinition*);
typedef void(*type_9)(_RxNodeDefinition*);
typedef int32(*type_13)(_RxPipelineNode*);
typedef void(*type_14)(_RxPipelineNode*);
typedef int32(*type_16)(_RxPipelineNode*, _RxPipeline*);
typedef uint32(*type_18)(_RxPipelineNode*, uint32, uint32, void*);
typedef _RpWorldSector*(*type_25)(_RpWorldSector*);

typedef iTriggerResource* type_0[20];
typedef iTriggerResource* type_2[20];
typedef iTriggerResource* type_4[20];
typedef uint16 type_5[3];
typedef iTriggerResource* type_7[20];
typedef tagXStreamDirectoryEntry type_8[1000];
typedef _RwV2d type_10[2];
typedef iTriggerResource* type_11[20];
typedef uint32 type_12[4];
typedef _RwV2d type_15[2];
typedef float32 type_17[3];
typedef uint8 type_19[3];
typedef _RxCluster type_20[1];
typedef int8 type_21[2048];
typedef iLightResource type_22[2];
typedef xSearch type_23[4];
typedef uint16 type_24[3];
typedef iTriggerResource* type_26[20];
typedef int8 type_27[32];
typedef Vector3D type_28[4];
typedef iTriggerResource* type_29[20];
typedef _RwV2d type_30[2];
typedef int8 type_31[32];
typedef p2CameraVersion type_32[5];
typedef _RwV2d type_33[2];
typedef iTriggerResource* type_34[20];
typedef int8 type_35[128];
typedef iTriggerResource* type_36[20];
typedef iTriggerResource* type_37[20];
typedef xSearchPoint type_38[150];
typedef xSearchPoint type_39[150][4];
typedef iTriggerResource* type_40[20];
typedef Vector3D type_41[4];
typedef iTriggerResource* type_42[20];

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

struct xLight
{
	iLightResource* m_resource;
	_iLightRuntime* m_runtime;
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

struct Vector3D
{
	float32 x;
	float32 y;
	float32 z;
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

struct _rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	_rxHeapSuperBlockDescriptor* next;
};

struct _RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct _rwResEntryTag
{
	_RwLLLink link;
	int32 size;
	void* owner;
	_rwResEntryTag** ownerRef;
	void(*destroyNotify)(_rwResEntryTag*);
};

struct iLightResource
{
	uint32 m_type;
	Vector3D m_pos;
	Vector3D m_rot;
	Vector3D m_color;
	int32 m_fov;
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

struct xEntryPoint
{
	iEntryPointResource* m_resource;
	_iEntryPointRuntime* m_runtime;
};

struct _RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

struct xRule
{
	iRuleResource* m_resource;
	void* m_runtime;
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

struct iConditionRuntime
{
	xCondition* m_operand;
	uint16 m_match;
	uint16 m_trigger;
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

struct _RwTexCoords
{
	float32 u;
	float32 v;
};

struct _RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	_rxReq* req;
	void* initialisationData;
	uint32 initialisationDataSize;
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

struct _RwV2d
{
	float32 x;
	float32 y;
};

struct _RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct xTrigger
{
	iTriggerResource* m_resource;
};

struct tagxPhysicsObject
{
	Vector3D m_ang;
	Vector3D m_angVel;
	Vector3D m_pos;
	Vector3D m_vel;
	Vector3D m_acc;
	Vector3D m_vel_inst;
	Vector3D m_scale;
	Vector3D m_motion;
	float32 m_cbradius;
	uint8 m_flag;
	uint8 m_hitResult;
	uint16 m_shadow_radius;
	uint8 m_type;
	uint8 m_hitFlags;
	uint16 m_hitTriggerNoWalkID;
	Vector3D m_hitVector;
	uint8 m_hitActorType;
	uint8 m_hitTriggerWalkID;
	uint8 m_hitActorID;
	uint8 m_hitObjectID;
	float32 m_floorHeight;
	uint32 m_floorIdx;
	uint32 m_floorMask;
};

struct tagiFloorTri
{
	uint16 m_v[3];
	uint16 m_n;
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

struct iRuleResource
{
	uint32 m_actionCount;
	xAction* m_action;
	uint32 m_conditionCount;
	xCondition* m_condition;
};

struct xMarker
{
	iMarkerResource* m_resource;
	void** m_runtime;
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

enum _RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct iMarkerResource
{
	Vector3D m_pos;
};

struct _RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
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

struct _RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
};

struct p2Camera
{
	Vector3D m_pos;
	Vector3D m_rot;
	float32 m_fov;
};

struct _iEntryPointRuntime
{
	uint32 m_enabled;
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

struct _tagiEnvRuntime
{
	_RpWorld* world;
	Vector3D world_origin;
	_RwTexDictionary* tex_dict;
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

struct _RxPipelineRequiresCluster
{
	_RxClusterDefinition* clusterDef;
	_RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
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

struct xCamera
{
	iCameraResource* m_resource;
	void** m_runtime;
};

struct xAction
{
	iActionResource* m_resource;
	iActionRuntime* m_runtime;
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

struct xCondition
{
	iConditionResource* m_resource;
	iConditionRuntime* m_runtime;
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

struct _RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
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

struct xListItem
{
	void* m_item;
	xListItem* m_next;
	xListItem* m_prev;
};

struct xPathfinder
{
	xSearch m_search[4];
	xScene* m_scene;
	xList m_open;
	xList m_closed;
};

struct _RpSector
{
	int32 type;
};

struct _RxClusterRef
{
	_RxClusterDefinition* clusterDef;
	_RxClusterForcePresent forcePresent;
	uint32 reserved;
};

enum _rpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
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

struct _RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
};

struct _RxIoSpec
{
	uint32 numClustersOfInterest;
	_RxClusterRef* clustersOfInterest;
	_RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	_RxOutputSpec* outputs;
};

struct _tagxEnv
{
	_tagiEnvRuntime* m_runtime;
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

enum _RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
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

struct _RwBBox
{
	_RwV3d sup;
	_RwV3d inf;
};

struct xList
{
	xListItem* m_head;
	xListItem* m_tail;
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

struct xLine2D
{
	_RwV2d m_p[2];
	_RwV2d m_i[2];
	int32 m_iCount;
};

struct iActionRuntime
{
	xAction* m_and;
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

struct iActionResource
{
	uint8 m_cmdType;
	uint8 m_cmd;
	uint16 pad;
	uint32 m_cmdParameter;
};

struct _RwLinkList
{
	_RwLLLink link;
};

struct _RpMaterialList
{
	_RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct iDisplayCamera
{
	Vector3D m_pos;
	Vector3D m_rot;
	float32 m_fov;
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

xPathfinder gPathfinder;
xPathfinder* pf;
xSearchPoint gSP[150][4];
xNavPoint* startPt;
int32 gDebugLOSFast;
int32 gDebugLOSCounter;
int8 vAssertBuf2[128];
XStreamHeader currentHeader;
xScene* xScene_current;
uint32 gTime;

int32 xPathfinderAStarGenerateSuccessors(xSearch* s, xSearchPoint* parent);
void xPathfinderSetScene(xScene* s);
xNavPoint* xPathfinderFindLOSNearestNotInPortal(Vector3D* p, int32 physObj);
int32 xPathfinderNavPointInPortal(xNavPoint* nav);
xNavPoint* xPathfinderFindLOSNearest(Vector3D* p, int32 physObj);
int32 xPathfinderLineOfSight(Vector3D* a, Vector3D* b, int32 physObjectType);
int32 xPathfinderLineOfSightPhysObj(tagxPhysicsObject* po, Vector3D* b);
void xPathfinderIdle();
void xPathfinderSearchIdle(xSearch* s);
void xPathfinderSearchStart(int8 id);
void xPathfinderSearchFree(int8 id);
void xPathfinderSearchRestart(int8 id);
xSearch* xPathfinderSearchGetPtr(int8 id);
int8 xPathfinderSearchNew();
void xPathfinderInit(xScene* scene);

// xPathfinderAStarGenerateSuccessors__FP7xSearchP12xSearchPoint
// Start address: 0x340be0
int32 xPathfinderAStarGenerateSuccessors(xSearch* s, xSearchPoint* parent)
{
	xSearchPoint* tmp;
	xSearchPoint* tmp;
	float32 f;
	float32 heuristic;
	float32 cost;
	uint32 i;
	xSearchPoint* sp;
	xNavPoint* node;
	xNavLink* link;
	// Line 1078, Address: 0x340be0, Func Offset: 0
	// Line 1085, Address: 0x340c10, Func Offset: 0x30
	// Line 1086, Address: 0x340cb0, Func Offset: 0xd0
	// Line 1087, Address: 0x340d50, Func Offset: 0x170
	// Line 1088, Address: 0x340df8, Func Offset: 0x218
	// Line 1091, Address: 0x340e9c, Func Offset: 0x2bc
	// Line 1095, Address: 0x340ea8, Func Offset: 0x2c8
	// Line 1098, Address: 0x340eb8, Func Offset: 0x2d8
	// Line 1119, Address: 0x340ebc, Func Offset: 0x2dc
	// Line 1125, Address: 0x340f60, Func Offset: 0x380
	// Line 1128, Address: 0x340f6c, Func Offset: 0x38c
	// Line 1129, Address: 0x340f78, Func Offset: 0x398
	// Line 1130, Address: 0x340f90, Func Offset: 0x3b0
	// Line 1134, Address: 0x340f94, Func Offset: 0x3b4
	// Line 1137, Address: 0x340ff8, Func Offset: 0x418
	// Line 1139, Address: 0x3410a0, Func Offset: 0x4c0
	// Line 1143, Address: 0x3410b8, Func Offset: 0x4d8
	// Line 1146, Address: 0x341168, Func Offset: 0x588
	// Line 1154, Address: 0x34117c, Func Offset: 0x59c
	// Line 1155, Address: 0x34118c, Func Offset: 0x5ac
	// Line 1157, Address: 0x34122c, Func Offset: 0x64c
	// Line 1159, Address: 0x341234, Func Offset: 0x654
	// Line 1163, Address: 0x34124c, Func Offset: 0x66c
	// Line 1166, Address: 0x341300, Func Offset: 0x720
	// Line 1175, Address: 0x341314, Func Offset: 0x734
	// Line 1176, Address: 0x341324, Func Offset: 0x744
	// Line 1179, Address: 0x3413c4, Func Offset: 0x7e4
	// Line 1183, Address: 0x3413c8, Func Offset: 0x7e8
	// Line 1184, Address: 0x3413cc, Func Offset: 0x7ec
	// Line 1185, Address: 0x3413d0, Func Offset: 0x7f0
	// Line 1186, Address: 0x3413d4, Func Offset: 0x7f4
	// Line 1188, Address: 0x3413d8, Func Offset: 0x7f8
	// Line 1190, Address: 0x3413f0, Func Offset: 0x810
	// Line 1195, Address: 0x3413fc, Func Offset: 0x81c
	// Line 1197, Address: 0x34140c, Func Offset: 0x82c
	// Line 1199, Address: 0x341430, Func Offset: 0x850
	// Line 1201, Address: 0x341434, Func Offset: 0x854
	// Func End, Address: 0x341464, Func Offset: 0x884
}

// xPathfinderSetScene__FP6xScene
// Start address: 0x341470
void xPathfinderSetScene(xScene* s)
{
	xSearchPoint* p;
	uint32 j;
	uint32 i;
	// Line 1008, Address: 0x341470, Func Offset: 0
	// Line 1012, Address: 0x341484, Func Offset: 0x14
	// Line 1014, Address: 0x341494, Func Offset: 0x24
	// Line 1016, Address: 0x34149c, Func Offset: 0x2c
	// Line 1018, Address: 0x3414a8, Func Offset: 0x38
	// Line 1021, Address: 0x341698, Func Offset: 0x228
	// Line 1024, Address: 0x3416a4, Func Offset: 0x234
	// Line 1027, Address: 0x3416d4, Func Offset: 0x264
	// Line 1028, Address: 0x3416d8, Func Offset: 0x268
	// Line 1029, Address: 0x3416dc, Func Offset: 0x26c
	// Line 1031, Address: 0x3416e0, Func Offset: 0x270
	// Line 1032, Address: 0x3416f0, Func Offset: 0x280
	// Line 1034, Address: 0x341718, Func Offset: 0x2a8
	// Line 1035, Address: 0x341720, Func Offset: 0x2b0
	// Line 1036, Address: 0x341734, Func Offset: 0x2c4
	// Line 1038, Address: 0x341744, Func Offset: 0x2d4
	// Func End, Address: 0x34175c, Func Offset: 0x2ec
}

// xPathfinderFindLOSNearestNotInPortal__FP8Vector3Di
// Start address: 0x341760
xNavPoint* xPathfinderFindLOSNearestNotInPortal(Vector3D* p, int32 physObj)
{
	float32 bestDistance;
	xNavPoint* best;
	float32 idxDistance;
	xNavPoint* idx;
	uint32 i;
	// Line 954, Address: 0x341760, Func Offset: 0
	// Line 958, Address: 0x34178c, Func Offset: 0x2c
	// Line 959, Address: 0x341790, Func Offset: 0x30
	// Line 961, Address: 0x341794, Func Offset: 0x34
	// Line 964, Address: 0x3417a0, Func Offset: 0x40
	// Line 967, Address: 0x3417c4, Func Offset: 0x64
	// Line 969, Address: 0x3417d8, Func Offset: 0x78
	// Line 970, Address: 0x3417ec, Func Offset: 0x8c
	// Line 972, Address: 0x3417f4, Func Offset: 0x94
	// Line 975, Address: 0x341804, Func Offset: 0xa4
	// Line 977, Address: 0x341824, Func Offset: 0xc4
	// Line 978, Address: 0x341828, Func Offset: 0xc8
	// Line 981, Address: 0x34182c, Func Offset: 0xcc
	// Line 984, Address: 0x341834, Func Offset: 0xd4
	// Line 985, Address: 0x341838, Func Offset: 0xd8
	// Line 987, Address: 0x34183c, Func Offset: 0xdc
	// Line 988, Address: 0x341840, Func Offset: 0xe0
	// Line 990, Address: 0x341860, Func Offset: 0x100
	// Line 992, Address: 0x341868, Func Offset: 0x108
	// Line 995, Address: 0x341878, Func Offset: 0x118
	// Line 997, Address: 0x34187c, Func Offset: 0x11c
	// Func End, Address: 0x3418a8, Func Offset: 0x148
}

// xPathfinderNavPointInPortal__FP9xNavPoint
// Start address: 0x3418b0
int32 xPathfinderNavPointInPortal(xNavPoint* nav)
{
	xEntryPoint* e;
	uint32 pmask;
	uint32 maskHi;
	uint32 maskLo;
	uint32 mask;
	Vector3D* ppos;
	uint32 i;
	// Line 895, Address: 0x3418b0, Func Offset: 0
	// Line 900, Address: 0x3418cc, Func Offset: 0x1c
	// Line 901, Address: 0x34196c, Func Offset: 0xbc
	// Line 903, Address: 0x341a10, Func Offset: 0x160
	// Line 906, Address: 0x341a14, Func Offset: 0x164
	// Line 907, Address: 0x341a30, Func Offset: 0x180
	// Line 908, Address: 0x341a38, Func Offset: 0x188
	// Line 910, Address: 0x341a3c, Func Offset: 0x18c
	// Line 912, Address: 0x341a48, Func Offset: 0x198
	// Line 914, Address: 0x341a58, Func Offset: 0x1a8
	// Line 916, Address: 0x341a68, Func Offset: 0x1b8
	// Line 918, Address: 0x341a70, Func Offset: 0x1c0
	// Line 920, Address: 0x341a7c, Func Offset: 0x1cc
	// Line 925, Address: 0x341a8c, Func Offset: 0x1dc
	// Line 927, Address: 0x341aa0, Func Offset: 0x1f0
	// Line 929, Address: 0x341ab8, Func Offset: 0x208
	// Line 935, Address: 0x341ac4, Func Offset: 0x214
	// Line 937, Address: 0x341adc, Func Offset: 0x22c
	// Line 938, Address: 0x341ae0, Func Offset: 0x230
	// Func End, Address: 0x341b00, Func Offset: 0x250
}

// xPathfinderFindLOSNearest__FP8Vector3Di
// Start address: 0x341b00
xNavPoint* xPathfinderFindLOSNearest(Vector3D* p, int32 physObj)
{
	float32 bestDistance;
	xNavPoint* best;
	float32 idxDistance;
	xNavPoint* idx;
	uint32 i;
	// Line 855, Address: 0x341b00, Func Offset: 0
	// Line 859, Address: 0x341b2c, Func Offset: 0x2c
	// Line 860, Address: 0x341b30, Func Offset: 0x30
	// Line 862, Address: 0x341b34, Func Offset: 0x34
	// Line 864, Address: 0x341b40, Func Offset: 0x40
	// Line 865, Address: 0x341b64, Func Offset: 0x64
	// Line 866, Address: 0x341b78, Func Offset: 0x78
	// Line 868, Address: 0x341b80, Func Offset: 0x80
	// Line 871, Address: 0x341b90, Func Offset: 0x90
	// Line 878, Address: 0x341bb0, Func Offset: 0xb0
	// Line 879, Address: 0x341bb4, Func Offset: 0xb4
	// Line 882, Address: 0x341bb8, Func Offset: 0xb8
	// Line 885, Address: 0x341bc0, Func Offset: 0xc0
	// Line 886, Address: 0x341bc4, Func Offset: 0xc4
	// Line 888, Address: 0x341bc8, Func Offset: 0xc8
	// Line 890, Address: 0x341be8, Func Offset: 0xe8
	// Line 892, Address: 0x341bec, Func Offset: 0xec
	// Func End, Address: 0x341c18, Func Offset: 0x118
}

// xPathfinderLineOfSight__FP8Vector3DP8Vector3Di
// Start address: 0x341c20
int32 xPathfinderLineOfSight(Vector3D* a, Vector3D* b, int32 physObjectType)
{
	uint32 him;
	uint32 lom;
	uint32* maskp;
	uint32 mask;
	uint32 lineFloorMaskLo;
	uint32 lineFloorMaskHi;
	uint32 lineFloorMask;
	xLine2D line;
	_RwV2d hitVector[2];
	uint32 i;
	xTrigger* idx;
	// Line 596, Address: 0x341c20, Func Offset: 0
	// Line 610, Address: 0x341c48, Func Offset: 0x28
	// Line 611, Address: 0x341c6c, Func Offset: 0x4c
	// Line 613, Address: 0x341c8c, Func Offset: 0x6c
	// Line 615, Address: 0x341c98, Func Offset: 0x78
	// Line 621, Address: 0x341ca8, Func Offset: 0x88
	// Line 623, Address: 0x341cc4, Func Offset: 0xa4
	// Line 631, Address: 0x341cd0, Func Offset: 0xb0
	// Line 635, Address: 0x341cdc, Func Offset: 0xbc
	// Line 636, Address: 0x341cf4, Func Offset: 0xd4
	// Line 637, Address: 0x341d0c, Func Offset: 0xec
	// Line 638, Address: 0x341d24, Func Offset: 0x104
	// Line 641, Address: 0x341d30, Func Offset: 0x110
	// Line 642, Address: 0x341d38, Func Offset: 0x118
	// Line 643, Address: 0x341d40, Func Offset: 0x120
	// Line 644, Address: 0x341d48, Func Offset: 0x128
	// Line 646, Address: 0x341d50, Func Offset: 0x130
	// Line 647, Address: 0x341d64, Func Offset: 0x144
	// Line 648, Address: 0x341d6c, Func Offset: 0x14c
	// Line 662, Address: 0x341d70, Func Offset: 0x150
	// Line 664, Address: 0x341d7c, Func Offset: 0x15c
	// Line 666, Address: 0x341d88, Func Offset: 0x168
	// Line 667, Address: 0x341da0, Func Offset: 0x180
	// Line 671, Address: 0x341da4, Func Offset: 0x184
	// Line 673, Address: 0x341db0, Func Offset: 0x190
	// Line 677, Address: 0x341dc0, Func Offset: 0x1a0
	// Line 681, Address: 0x341dd4, Func Offset: 0x1b4
	// Line 683, Address: 0x341dec, Func Offset: 0x1cc
	// Line 685, Address: 0x341df8, Func Offset: 0x1d8
	// Line 687, Address: 0x341e0c, Func Offset: 0x1ec
	// Line 688, Address: 0x341e14, Func Offset: 0x1f4
	// Line 690, Address: 0x341e20, Func Offset: 0x200
	// Line 692, Address: 0x341e34, Func Offset: 0x214
	// Line 693, Address: 0x341e3c, Func Offset: 0x21c
	// Line 695, Address: 0x341e48, Func Offset: 0x228
	// Line 699, Address: 0x341e5c, Func Offset: 0x23c
	// Line 702, Address: 0x341e60, Func Offset: 0x240
	// Line 703, Address: 0x341e64, Func Offset: 0x244
	// Line 704, Address: 0x341e80, Func Offset: 0x260
	// Line 708, Address: 0x341e8c, Func Offset: 0x26c
	// Line 710, Address: 0x341eb0, Func Offset: 0x290
	// Line 711, Address: 0x341eb4, Func Offset: 0x294
	// Func End, Address: 0x341ed8, Func Offset: 0x2b8
}

// xPathfinderLineOfSightPhysObj__FP17tagxPhysicsObjectP8Vector3D
// Start address: 0x341ee0
int32 xPathfinderLineOfSightPhysObj(tagxPhysicsObject* po, Vector3D* b)
{
	Vector3D pos;
	// Line 565, Address: 0x341ee0, Func Offset: 0
	// Line 568, Address: 0x341ee8, Func Offset: 0x8
	// Line 569, Address: 0x341f00, Func Offset: 0x20
	// Line 571, Address: 0x341f10, Func Offset: 0x30
	// Line 572, Address: 0x341f20, Func Offset: 0x40
	// Func End, Address: 0x341f30, Func Offset: 0x50
}

// xPathfinderIdle__Fv
// Start address: 0x341f30
void xPathfinderIdle()
{
	int32 i;
	// Line 526, Address: 0x341f30, Func Offset: 0
	// Line 530, Address: 0x341f3c, Func Offset: 0xc
	// Line 532, Address: 0x341f48, Func Offset: 0x18
	// Line 540, Address: 0x341f90, Func Offset: 0x60
	// Line 550, Address: 0x341fb4, Func Offset: 0x84
	// Line 551, Address: 0x341fb8, Func Offset: 0x88
	// Line 552, Address: 0x341fcc, Func Offset: 0x9c
	// Func End, Address: 0x341fe0, Func Offset: 0xb0
}

// xPathfinderSearchIdle__FP7xSearch
// Start address: 0x341fe0
void xPathfinderSearchIdle(xSearch* s)
{
	xListItem* best;
	xListItem* idx;
	xSearchPoint* node;
	// Line 360, Address: 0x341fe0, Func Offset: 0
	// Line 367, Address: 0x341ff8, Func Offset: 0x18
	// Line 370, Address: 0x342098, Func Offset: 0xb8
	// Line 375, Address: 0x3420a8, Func Offset: 0xc8
	// Line 376, Address: 0x3420b0, Func Offset: 0xd0
	// Line 380, Address: 0x3420b8, Func Offset: 0xd8
	// Line 385, Address: 0x3420c0, Func Offset: 0xe0
	// Line 388, Address: 0x3420c8, Func Offset: 0xe8
	// Line 390, Address: 0x3420cc, Func Offset: 0xec
	// Line 392, Address: 0x3420d4, Func Offset: 0xf4
	// Line 395, Address: 0x3420f4, Func Offset: 0x114
	// Line 398, Address: 0x3420f8, Func Offset: 0x118
	// Line 399, Address: 0x342100, Func Offset: 0x120
	// Line 402, Address: 0x342108, Func Offset: 0x128
	// Line 404, Address: 0x342110, Func Offset: 0x130
	// Line 405, Address: 0x3421b4, Func Offset: 0x1d4
	// Line 406, Address: 0x3421c8, Func Offset: 0x1e8
	// Line 407, Address: 0x34226c, Func Offset: 0x28c
	// Line 409, Address: 0x342274, Func Offset: 0x294
	// Line 411, Address: 0x342278, Func Offset: 0x298
	// Line 415, Address: 0x342318, Func Offset: 0x338
	// Line 418, Address: 0x342328, Func Offset: 0x348
	// Line 458, Address: 0x34232c, Func Offset: 0x34c
	// Line 459, Address: 0x342338, Func Offset: 0x358
	// Line 462, Address: 0x342344, Func Offset: 0x364
	// Line 464, Address: 0x34234c, Func Offset: 0x36c
	// Line 470, Address: 0x342354, Func Offset: 0x374
	// Line 474, Address: 0x34235c, Func Offset: 0x37c
	// Line 477, Address: 0x342374, Func Offset: 0x394
	// Line 478, Address: 0x34243c, Func Offset: 0x45c
	// Line 483, Address: 0x342444, Func Offset: 0x464
	// Line 485, Address: 0x34245c, Func Offset: 0x47c
	// Line 486, Address: 0x342524, Func Offset: 0x544
	// Line 489, Address: 0x34252c, Func Offset: 0x54c
	// Line 492, Address: 0x342538, Func Offset: 0x558
	// Func End, Address: 0x342554, Func Offset: 0x574
}

// xPathfinderSearchStart__FSc
// Start address: 0x342560
void xPathfinderSearchStart(int8 id)
{
	xSearchPoint* p;
	xSearch* s;
	// Line 273, Address: 0x342560, Func Offset: 0
	// Line 277, Address: 0x342574, Func Offset: 0x14
	// Line 279, Address: 0x342588, Func Offset: 0x28
	// Line 280, Address: 0x342598, Func Offset: 0x38
	// Line 284, Address: 0x3425a0, Func Offset: 0x40
	// Line 285, Address: 0x34264c, Func Offset: 0xec
	// Line 288, Address: 0x3426f4, Func Offset: 0x194
	// Line 291, Address: 0x342718, Func Offset: 0x1b8
	// Line 294, Address: 0x3427c0, Func Offset: 0x260
	// Line 295, Address: 0x342864, Func Offset: 0x304
	// Line 299, Address: 0x342908, Func Offset: 0x3a8
	// Line 303, Address: 0x342910, Func Offset: 0x3b0
	// Line 305, Address: 0x342914, Func Offset: 0x3b4
	// Line 306, Address: 0x3429c0, Func Offset: 0x460
	// Line 309, Address: 0x342a6c, Func Offset: 0x50c
	// Line 313, Address: 0x342a80, Func Offset: 0x520
	// Line 316, Address: 0x342aec, Func Offset: 0x58c
	// Line 317, Address: 0x342af0, Func Offset: 0x590
	// Line 318, Address: 0x342af4, Func Offset: 0x594
	// Line 319, Address: 0x342af8, Func Offset: 0x598
	// Line 320, Address: 0x342b10, Func Offset: 0x5b0
	// Line 323, Address: 0x342b20, Func Offset: 0x5c0
	// Line 325, Address: 0x342b38, Func Offset: 0x5d8
	// Line 326, Address: 0x342c00, Func Offset: 0x6a0
	// Line 331, Address: 0x342c08, Func Offset: 0x6a8
	// Line 336, Address: 0x342c1c, Func Offset: 0x6bc
	// Line 339, Address: 0x342c24, Func Offset: 0x6c4
	// Line 346, Address: 0x342c2c, Func Offset: 0x6cc
	// Func End, Address: 0x342c44, Func Offset: 0x6e4
}

// xPathfinderSearchFree__FSc
// Start address: 0x342c50
void xPathfinderSearchFree(int8 id)
{
	// Line 242, Address: 0x342c50, Func Offset: 0
	// Line 243, Address: 0x342c60, Func Offset: 0x10
	// Line 247, Address: 0x342c74, Func Offset: 0x24
	// Line 248, Address: 0x342d20, Func Offset: 0xd0
	// Line 251, Address: 0x342dc8, Func Offset: 0x178
	// Line 252, Address: 0x342df8, Func Offset: 0x1a8
	// Line 255, Address: 0x342e28, Func Offset: 0x1d8
	// Line 260, Address: 0x342e50, Func Offset: 0x200
	// Func End, Address: 0x342e64, Func Offset: 0x214
}

// xPathfinderSearchRestart__FSc
// Start address: 0x342e70
void xPathfinderSearchRestart(int8 id)
{
	int32 i;
	// Line 186, Address: 0x342e70, Func Offset: 0
	// Line 189, Address: 0x342e80, Func Offset: 0x10
	// Line 193, Address: 0x342e94, Func Offset: 0x24
	// Line 194, Address: 0x342f40, Func Offset: 0xd0
	// Line 197, Address: 0x342fe8, Func Offset: 0x178
	// Line 198, Address: 0x343018, Func Offset: 0x1a8
	// Line 202, Address: 0x343048, Func Offset: 0x1d8
	// Line 204, Address: 0x343074, Func Offset: 0x204
	// Line 206, Address: 0x343080, Func Offset: 0x210
	// Line 208, Address: 0x343090, Func Offset: 0x220
	// Line 210, Address: 0x3430bc, Func Offset: 0x24c
	// Line 211, Address: 0x3430e4, Func Offset: 0x274
	// Line 214, Address: 0x3430ec, Func Offset: 0x27c
	// Line 226, Address: 0x343100, Func Offset: 0x290
	// Func End, Address: 0x343114, Func Offset: 0x2a4
}

// xPathfinderSearchGetPtr__FSc
// Start address: 0x343120
xSearch* xPathfinderSearchGetPtr(int8 id)
{
	// Line 161, Address: 0x343120, Func Offset: 0
	// Line 162, Address: 0x343130, Func Offset: 0x10
	// Line 163, Address: 0x343144, Func Offset: 0x24
	// Line 166, Address: 0x343150, Func Offset: 0x30
	// Line 167, Address: 0x3431fc, Func Offset: 0xdc
	// Line 169, Address: 0x3432a4, Func Offset: 0x184
	// Line 170, Address: 0x3432c8, Func Offset: 0x1a8
	// Func End, Address: 0x3432dc, Func Offset: 0x1bc
}

// xPathfinderSearchNew__Fv
// Start address: 0x3432e0
int8 xPathfinderSearchNew()
{
	int32 i;
	// Line 127, Address: 0x3432e0, Func Offset: 0
	// Line 129, Address: 0x3432ec, Func Offset: 0xc
	// Line 131, Address: 0x343314, Func Offset: 0x34
	// Line 132, Address: 0x343338, Func Offset: 0x58
	// Line 133, Address: 0x34335c, Func Offset: 0x7c
	// Line 134, Address: 0x34337c, Func Offset: 0x9c
	// Line 135, Address: 0x34339c, Func Offset: 0xbc
	// Line 136, Address: 0x3433bc, Func Offset: 0xdc
	// Line 137, Address: 0x3433dc, Func Offset: 0xfc
	// Line 138, Address: 0x3433fc, Func Offset: 0x11c
	// Line 139, Address: 0x34341c, Func Offset: 0x13c
	// Line 140, Address: 0x34343c, Func Offset: 0x15c
	// Line 144, Address: 0x34345c, Func Offset: 0x17c
	// Line 146, Address: 0x343464, Func Offset: 0x184
	// Line 148, Address: 0x343474, Func Offset: 0x194
	// Line 149, Address: 0x343478, Func Offset: 0x198
	// Func End, Address: 0x343480, Func Offset: 0x1a0
}

// xPathfinderInit__FP6xScene
// Start address: 0x343480
void xPathfinderInit(xScene* scene)
{
	int32 j;
	int32 i;
	// Line 54, Address: 0x343480, Func Offset: 0
	// Line 61, Address: 0x34348c, Func Offset: 0xc
	// Line 65, Address: 0x343494, Func Offset: 0x14
	// Line 67, Address: 0x3434a0, Func Offset: 0x20
	// Line 68, Address: 0x3434c0, Func Offset: 0x40
	// Line 69, Address: 0x3434e0, Func Offset: 0x60
	// Line 70, Address: 0x343500, Func Offset: 0x80
	// Line 71, Address: 0x343520, Func Offset: 0xa0
	// Line 72, Address: 0x343540, Func Offset: 0xc0
	// Line 73, Address: 0x343560, Func Offset: 0xe0
	// Line 74, Address: 0x343580, Func Offset: 0x100
	// Line 75, Address: 0x3435a0, Func Offset: 0x120
	// Line 76, Address: 0x3435c0, Func Offset: 0x140
	// Line 77, Address: 0x3435e0, Func Offset: 0x160
	// Line 79, Address: 0x343604, Func Offset: 0x184
	// Line 80, Address: 0x34362c, Func Offset: 0x1ac
	// Line 83, Address: 0x343654, Func Offset: 0x1d4
	// Line 85, Address: 0x343660, Func Offset: 0x1e0
	// Line 86, Address: 0x343694, Func Offset: 0x214
	// Line 87, Address: 0x3436c8, Func Offset: 0x248
	// Line 88, Address: 0x3436fc, Func Offset: 0x27c
	// Line 89, Address: 0x343730, Func Offset: 0x2b0
	// Line 90, Address: 0x343764, Func Offset: 0x2e4
	// Line 91, Address: 0x343774, Func Offset: 0x2f4
	// Line 92, Address: 0x343784, Func Offset: 0x304
	// Func End, Address: 0x343798, Func Offset: 0x318
}

