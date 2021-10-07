typedef struct _rxHeapSuperBlockDescriptor;
typedef struct tagxPad;
typedef struct _rwResEntryTag;
typedef struct xNavPoint;
typedef struct _RxHeap;
typedef struct iActionResource;
typedef struct _rxHeapBlockHeader;
typedef struct iTriggerResource;
typedef struct _RpMeshHeader;
typedef struct xScene;
typedef enum _RxClusterValidityReq;
typedef struct iActionRuntime;
typedef struct _RpWorld;
typedef struct _rxHeapFreeBlock;
typedef struct xFontBox_t;
typedef struct _RxPipelineNodeTopSortData;
typedef struct iDisplayCamera;
typedef struct _RpCollSector;
typedef struct _RxPipelineNode;
typedef struct _RxClusterDefinition;
typedef enum _RwTextureFilterMode;
typedef struct _RxPipelineNodeParam;
typedef struct _RxPipelineCluster;
typedef enum _rxEmbeddedPacketState;
typedef struct iConditionResource;
typedef struct xTrigger;
typedef struct _RpSector;
typedef struct iConditionRuntime;
typedef struct _RxNodeDefinition;
typedef enum _RxClusterValid;
typedef struct _RwSurfaceProperties;
typedef struct _RwLLLink;
typedef struct xEntryPoint;
typedef struct _tagNativePadData;
typedef struct XStreamHeader;
typedef struct _RpMaterialList;
typedef struct iEntryPointResource;
typedef struct Vector3D;
typedef struct _RwV3d;
typedef struct xRule;
typedef struct _iEntryPointRuntime;
typedef struct iRuleResource;
typedef struct _RpMaterial;
typedef struct _RpWorldSector;
typedef struct tagiFloorTri;
typedef struct _RxPipelineRequiresCluster;
typedef struct _XBUTTON;
typedef struct _RpPolygon;
typedef struct xCamera;
typedef struct _RxPipeline;
typedef struct _RwTexDictionary;
typedef struct xLight;
typedef struct _rxReq;
typedef struct _RpVertexNormal;
typedef struct iLightResource;
typedef struct _RwTexCoords;
typedef struct tagXStreamDirectoryEntry;
typedef struct _RwObject;
typedef struct _iLightRuntime;
typedef struct _RwRGBA;
typedef struct __xScrFxMgr;
typedef struct p2Camera;
typedef struct tagiFloor;
typedef struct xAction;
typedef struct _RxOutputSpec;
typedef struct xMarker;
typedef struct _RwTexture;
typedef struct _RwBBox;
typedef struct _RxClusterRef;
typedef struct xCondition;
typedef struct iMarkerResource;
typedef struct tagPadMgrData;
typedef struct _RwRaster;
typedef struct _RxIoSpec;
typedef struct xNavLink;
typedef struct p2CameraVersion;
typedef struct _tagiEnvRuntime;
typedef struct _RxNodeMethods;
typedef enum _RxClusterForcePresent;
typedef struct _RxPacket;
typedef struct iCameraResource;
typedef enum _RxNodeDefEditable;
typedef struct _RxClusterUnion;
typedef enum _RwTextureAddressMode;
typedef struct _RxCluster;
typedef struct _RwLinkList;
typedef enum _rpWorldRenderOrder;
typedef struct _tagxEnv;
typedef struct tagXStreamMDSDirectory;

typedef _RpWorldSector*(*type_0)(_RpWorldSector*);
typedef void(*type_3)(_rwResEntryTag*);
typedef int32(*type_6)(_RxPipelineNode*, _RxPipelineNodeParam*);
typedef int32(*type_8)(_RxNodeDefinition*);
typedef void(*type_11)(_RxNodeDefinition*);
typedef int32(*type_15)(_RxPipelineNode*);
typedef void(*type_18)(_RxPipelineNode*);
typedef int32(*type_19)(int32);
typedef int32(*type_22)(_RxPipelineNode*, _RxPipeline*);
typedef uint32(*type_26)(_RxPipelineNode*, uint32, uint32, void*);
typedef void(*type_42)(tagxPad*, uint32, uint32);

typedef iTriggerResource* type_1[20];
typedef tagXStreamDirectoryEntry type_2[1000];
typedef iTriggerResource* type_4[20];
typedef int32 type_5[15];
typedef iTriggerResource* type_7[20];
typedef Vector3D type_9[4];
typedef iTriggerResource* type_10[20];
typedef iTriggerResource* type_12[20];
typedef _XBUTTON type_13[16];
typedef uint32 type_14[4];
typedef iTriggerResource* type_16[20];
typedef uint16 type_17[3];
typedef iTriggerResource* type_20[20];
typedef uint8 type_21[6];
typedef iTriggerResource* type_23[20];
typedef int8 type_24[2048];
typedef iTriggerResource* type_25[20];
typedef iTriggerResource* type_27[20];
typedef iTriggerResource* type_28[20];
typedef _RxCluster type_29[1];
typedef <unknown fundamental type (0xa510)> type_30[16];
typedef <unknown fundamental type (0xa510)> type_31[16][2];
typedef iTriggerResource* type_32[20];
typedef int8 type_33[32];
typedef float32 type_34[3];
typedef tagxPad type_35[2];
typedef int8 type_36[32];
typedef uint16 type_37[16];
typedef int8 type_38[128];
typedef iLightResource type_39[2];
typedef uint16 type_40[16];
typedef uint8 type_41[4];
typedef uint8 type_43[12];
typedef uint8 type_44[12];
typedef p2CameraVersion type_45[5];
typedef Vector3D type_46[4];
typedef uint8 type_47[32];
typedef uint8 type_48[32][2];
typedef uint16 type_49[3];
typedef int32 type_50[2];

struct _rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	_rxHeapSuperBlockDescriptor* next;
};

struct tagxPad
{
	ulong32 m_lastTime;
	ulong32 m_currentTime;
	uint8 m_active;
	uint8 m_playerNumber;
	uint8 m_controllerNumber;
	uint8 m_deviceType;
	int32 m_padHandle;
	void* m_funcInit;
	void* m_funcMapper;
	void* m_funcAction;
	_tagNativePadData* m_pad;
	_XBUTTON m_xbutton[16];
	uint8 m_analogActive;
	int8 m_analogXValue;
	int8 m_analogYValue;
	int32 m_shock : 3;
	uint8 m_vib[6];
};

struct _rwResEntryTag
{
	_RwLLLink link;
	int32 size;
	void* owner;
	_rwResEntryTag** ownerRef;
	void(*destroyNotify)(_rwResEntryTag*);
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

struct iActionResource
{
	uint8 m_cmdType;
	uint8 m_cmd;
	uint16 pad;
	uint32 m_cmdParameter;
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

struct _RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
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

enum _RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct iActionRuntime
{
	xAction* m_and;
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

struct _rxHeapFreeBlock
{
	uint32 size;
	_rxHeapBlockHeader* ptr;
};

struct xFontBox_t
{
	uint32 flags;
	float32 x;
	float32 y;
	float32 w;
	float32 h;
	uint32 font;
	uint32 color;
	uint32 saved_color;
	float32 x_spacing;
	float32 y_spacing;
	float32 depth;
	float32 inset_left;
	float32 inset_right;
	float32 inset_top;
	float32 inset_bottom;
	int8* text;
	uint32 backdrop_color;
};

struct _RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	_rxReq* req;
	void* initialisationData;
	uint32 initialisationDataSize;
};

struct iDisplayCamera
{
	Vector3D m_pos;
	Vector3D m_rot;
	float32 m_fov;
};

struct _RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
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

struct xTrigger
{
	iTriggerResource* m_resource;
};

struct _RpSector
{
	int32 type;
};

struct iConditionRuntime
{
	xCondition* m_operand;
	uint16 m_match;
	uint16 m_trigger;
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

struct _RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

struct _RwLLLink
{
	_RwLLLink* next;
	_RwLLLink* prev;
};

struct xEntryPoint
{
	iEntryPointResource* m_resource;
	_iEntryPointRuntime* m_runtime;
};

struct _tagNativePadData
{
	uint8 status;
	struct
	{
		uint32 id : 4;
		uint32 size : 4;
	};
	uint16 buttons;
	uint8 analog[4];
	uint8 pressure[12];
	uint8 reserved[12];
	uint16 last_buttons;
	uint16 pressed;
	uint16 released;
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

struct xRule
{
	iRuleResource* m_resource;
	void* m_runtime;
};

struct _iEntryPointRuntime
{
	uint32 m_enabled;
};

struct iRuleResource
{
	uint32 m_actionCount;
	xAction* m_action;
	uint32 m_conditionCount;
	xCondition* m_condition;
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

struct tagiFloorTri
{
	uint16 m_v[3];
	uint16 m_n;
};

struct _RxPipelineRequiresCluster
{
	_RxClusterDefinition* clusterDef;
	_RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct _XBUTTON
{
	uint32 m_id;
	uint32 m_nativeID;
	uint32 m_nativeJoyID;
	struct
	{
		uint32 m_down : 13;
		uint32 m_last_down : 13;
		uint32 m_pressed : 1;
		uint32 m_last_pressed : 1;
		uint32 m_released : 1;
		uint32 m_last_released : 1;
		uint32 unused : 2;
	};
};

struct _RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
};

struct xCamera
{
	iCameraResource* m_resource;
	void** m_runtime;
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

struct _RwTexDictionary
{
	_RwObject object;
	_RwLinkList texturesInDict;
	_RwLLLink lInInstance;
};

struct xLight
{
	iLightResource* m_resource;
	_iLightRuntime* m_runtime;
};

struct _rxReq
{
};

struct _RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

struct iLightResource
{
	uint32 m_type;
	Vector3D m_pos;
	Vector3D m_rot;
	Vector3D m_color;
	int32 m_fov;
};

struct _RwTexCoords
{
	float32 u;
	float32 v;
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

struct _RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct __xScrFxMgr
{
	uint16 m_letterbox;
	uint8 m_startFadeOut;
	uint8 m_doneFadeOut;
	uint8 m_startFadeIn;
	uint8 m_doneFadeIn;
	uint16 m_fadeOutCounter;
	uint16 m_fadeInCounter;
	int16 shake;
};

struct p2Camera
{
	Vector3D m_pos;
	Vector3D m_rot;
	float32 m_fov;
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

struct xMarker
{
	iMarkerResource* m_resource;
	void** m_runtime;
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

struct xCondition
{
	iConditionResource* m_resource;
	iConditionRuntime* m_runtime;
};

struct iMarkerResource
{
	Vector3D m_pos;
};

struct tagPadMgrData
{
	uint16 m_initialized;
	uint16 m_numControllers;
	tagxPad m_pad[2];
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

struct _tagiEnvRuntime
{
	_RpWorld* world;
	Vector3D world_origin;
	_RwTexDictionary* tex_dict;
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

struct iCameraResource
{
	uint16 m_plateOffset;
	uint16 m_versions;
	p2CameraVersion m_version[5];
	uint32 m_frameCount;
	p2Camera* m_cameras;
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

enum _rpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct _tagxEnv
{
	_tagiEnvRuntime* m_runtime;
};

struct tagXStreamMDSDirectory
{
	uint32 count;
	tagXStreamDirectoryEntry directory[1000];
};

<unknown fundamental type (0xa510)> sPadDMA[16][2];
uint8 sPadData[32][2];
uint32 gLastInputTime;
int32 sNumPads;
uint32 gSoftReset;
int32 accTable[15];
uint16 sPadMapping_Debug[16];
uint16 sPadMapping_Game[16];
uint32 g_currentPlayerRotateSpeed;
uint32 g_maxPlayerRotateSpeed;
ulong32 gTimerValue;
xScene* xScene_current;
__xScrFxMgr gScrFx;
int32 g_sceneSwapPending;
int8 vAssertBuf2[128];
XStreamHeader currentHeader;
float32 gTimeSec;
int32(*checkRumbleAbility)(int32);
void(*p2PadSetVibration)(tagxPad*, uint32, uint32);
tagPadMgrData console;

void iPadInitFunc_Game(tagxPad* p);
int32 iConsoleMgrRead(tagxPad* pad, int32 numPads, ulong32 theTime);
void iConsoleMgrIdle();
int16 iConsoleMgrInit(int32 maxControllers, tagxPad* pad);
void iConsoleMgrRegisterScriptCalls();
int32 checkRumbleAbility(int32 port);
void p2PadSetVibration(tagxPad* pad, uint32 act0, uint32 act1);

// iPadInitFunc_Game__FP7tagxPad
// Start address: 0x37fb60
void iPadInitFunc_Game(tagxPad* p)
{
	int32 i;
	// Line 820, Address: 0x37fb60, Func Offset: 0
	// Line 821, Address: 0x37fb6c, Func Offset: 0xc
	// Line 822, Address: 0x37fb8c, Func Offset: 0x2c
	// Line 823, Address: 0x37fb9c, Func Offset: 0x3c
	// Func End, Address: 0x37fba4, Func Offset: 0x44
}

// iConsoleMgrRead__FP7tagxPadiUl
// Start address: 0x37fbb0
int32 iConsoleMgrRead(tagxPad* pad, int32 numPads, ulong32 theTime)
{
	_XBUTTON* b;
	_XBUTTON* b;
	_tagNativePadData* dp;
	tagxPad* pp;
	_tagNativePadData* dp;
	tagxPad* pp;
	int32 startErrorTime;
	int32 allowMessages;
	uint32 db;
	xFontBox_t* box;
	_tagNativePadData* dp;
	tagxPad* pp;
	int32 last_ry;
	int32 last_rx;
	int32 last_ly;
	int32 last_lx;
	int32 controllerCount;
	int32 j;
	int32 i;
	uint32 buttons_held;
	int32 firstRead;
	int32 readIndexMap[2];
	int32 killRumble;
	int8 init;
	int8 init;
	// Line 297, Address: 0x37fbb0, Func Offset: 0
	// Line 298, Address: 0x37fbe8, Func Offset: 0x38
	// Line 299, Address: 0x37fc00, Func Offset: 0x50
	// Line 309, Address: 0x37fc18, Func Offset: 0x68
	// Line 310, Address: 0x37fc1c, Func Offset: 0x6c
	// Line 311, Address: 0x37fc28, Func Offset: 0x78
	// Line 312, Address: 0x37fc54, Func Offset: 0xa4
	// Line 318, Address: 0x37fc58, Func Offset: 0xa8
	// Line 320, Address: 0x37fc60, Func Offset: 0xb0
	// Line 324, Address: 0x37fc74, Func Offset: 0xc4
	// Line 326, Address: 0x37fc80, Func Offset: 0xd0
	// Line 327, Address: 0x37fc94, Func Offset: 0xe4
	// Line 358, Address: 0x37fca8, Func Offset: 0xf8
	// Line 360, Address: 0x37fcb0, Func Offset: 0x100
	// Line 361, Address: 0x37fcbc, Func Offset: 0x10c
	// Line 363, Address: 0x37fcd0, Func Offset: 0x120
	// Line 368, Address: 0x37fd58, Func Offset: 0x1a8
	// Line 370, Address: 0x37fd68, Func Offset: 0x1b8
	// Line 371, Address: 0x37fd70, Func Offset: 0x1c0
	// Line 372, Address: 0x37fd74, Func Offset: 0x1c4
	// Line 373, Address: 0x37fd78, Func Offset: 0x1c8
	// Line 377, Address: 0x37fd80, Func Offset: 0x1d0
	// Line 380, Address: 0x37fe28, Func Offset: 0x278
	// Line 381, Address: 0x37fe34, Func Offset: 0x284
	// Line 385, Address: 0x37fe38, Func Offset: 0x288
	// Line 386, Address: 0x37fe6c, Func Offset: 0x2bc
	// Line 387, Address: 0x37fea0, Func Offset: 0x2f0
	// Line 388, Address: 0x37fed4, Func Offset: 0x324
	// Line 390, Address: 0x37fee4, Func Offset: 0x334
	// Line 398, Address: 0x37ff18, Func Offset: 0x368
	// Line 407, Address: 0x37ff20, Func Offset: 0x370
	// Line 412, Address: 0x37ff7c, Func Offset: 0x3cc
	// Line 413, Address: 0x37ff80, Func Offset: 0x3d0
	// Line 415, Address: 0x37ff88, Func Offset: 0x3d8
	// Line 420, Address: 0x37ffc8, Func Offset: 0x418
	// Line 421, Address: 0x37ffd4, Func Offset: 0x424
	// Line 422, Address: 0x37ffdc, Func Offset: 0x42c
	// Line 425, Address: 0x37ffe8, Func Offset: 0x438
	// Line 428, Address: 0x37fff4, Func Offset: 0x444
	// Line 434, Address: 0x38002c, Func Offset: 0x47c
	// Line 435, Address: 0x380064, Func Offset: 0x4b4
	// Line 436, Address: 0x380074, Func Offset: 0x4c4
	// Line 437, Address: 0x380088, Func Offset: 0x4d8
	// Line 443, Address: 0x38009c, Func Offset: 0x4ec
	// Line 444, Address: 0x3800b4, Func Offset: 0x504
	// Line 445, Address: 0x3800c8, Func Offset: 0x518
	// Line 447, Address: 0x3800d0, Func Offset: 0x520
	// Line 448, Address: 0x3800e4, Func Offset: 0x534
	// Line 451, Address: 0x3800e8, Func Offset: 0x538
	// Line 453, Address: 0x3800ec, Func Offset: 0x53c
	// Line 454, Address: 0x3800f8, Func Offset: 0x548
	// Line 455, Address: 0x380124, Func Offset: 0x574
	// Line 458, Address: 0x380128, Func Offset: 0x578
	// Line 460, Address: 0x38013c, Func Offset: 0x58c
	// Line 462, Address: 0x380148, Func Offset: 0x598
	// Line 463, Address: 0x380158, Func Offset: 0x5a8
	// Line 464, Address: 0x38015c, Func Offset: 0x5ac
	// Line 465, Address: 0x380160, Func Offset: 0x5b0
	// Line 467, Address: 0x380174, Func Offset: 0x5c4
	// Line 526, Address: 0x3801a8, Func Offset: 0x5f8
	// Line 529, Address: 0x3801b4, Func Offset: 0x604
	// Line 532, Address: 0x3801c0, Func Offset: 0x610
	// Line 544, Address: 0x3801f8, Func Offset: 0x648
	// Line 559, Address: 0x380214, Func Offset: 0x664
	// Line 561, Address: 0x380220, Func Offset: 0x670
	// Line 562, Address: 0x38026c, Func Offset: 0x6bc
	// Line 563, Address: 0x3802a0, Func Offset: 0x6f0
	// Line 567, Address: 0x3802b4, Func Offset: 0x704
	// Line 568, Address: 0x3802c0, Func Offset: 0x710
	// Line 569, Address: 0x3802ec, Func Offset: 0x73c
	// Line 572, Address: 0x3802f0, Func Offset: 0x740
	// Line 573, Address: 0x380300, Func Offset: 0x750
	// Line 576, Address: 0x38030c, Func Offset: 0x75c
	// Line 578, Address: 0x380314, Func Offset: 0x764
	// Line 579, Address: 0x380334, Func Offset: 0x784
	// Line 580, Address: 0x380350, Func Offset: 0x7a0
	// Line 581, Address: 0x38036c, Func Offset: 0x7bc
	// Line 582, Address: 0x380388, Func Offset: 0x7d8
	// Line 583, Address: 0x3803a4, Func Offset: 0x7f4
	// Line 584, Address: 0x3803bc, Func Offset: 0x80c
	// Line 585, Address: 0x3803cc, Func Offset: 0x81c
	// Line 612, Address: 0x3803d4, Func Offset: 0x824
	// Line 615, Address: 0x3803e0, Func Offset: 0x830
	// Line 617, Address: 0x3803ec, Func Offset: 0x83c
	// Line 618, Address: 0x380410, Func Offset: 0x860
	// Line 619, Address: 0x380438, Func Offset: 0x888
	// Line 622, Address: 0x380460, Func Offset: 0x8b0
	// Line 625, Address: 0x3804a8, Func Offset: 0x8f8
	// Line 626, Address: 0x3804c8, Func Offset: 0x918
	// Line 634, Address: 0x3804d0, Func Offset: 0x920
	// Line 636, Address: 0x3804d8, Func Offset: 0x928
	// Line 638, Address: 0x380504, Func Offset: 0x954
	// Line 641, Address: 0x38050c, Func Offset: 0x95c
	// Line 642, Address: 0x380520, Func Offset: 0x970
	// Line 643, Address: 0x380544, Func Offset: 0x994
	// Line 645, Address: 0x38054c, Func Offset: 0x99c
	// Line 646, Address: 0x380564, Func Offset: 0x9b4
	// Line 647, Address: 0x380568, Func Offset: 0x9b8
	// Line 648, Address: 0x380584, Func Offset: 0x9d4
	// Line 649, Address: 0x3805ac, Func Offset: 0x9fc
	// Line 650, Address: 0x3805bc, Func Offset: 0xa0c
	// Line 651, Address: 0x3805e8, Func Offset: 0xa38
	// Line 653, Address: 0x3805fc, Func Offset: 0xa4c
	// Line 655, Address: 0x380604, Func Offset: 0xa54
	// Line 656, Address: 0x380618, Func Offset: 0xa68
	// Line 657, Address: 0x380644, Func Offset: 0xa94
	// Line 659, Address: 0x38064c, Func Offset: 0xa9c
	// Line 662, Address: 0x380654, Func Offset: 0xaa4
	// Line 665, Address: 0x38065c, Func Offset: 0xaac
	// Line 666, Address: 0x380670, Func Offset: 0xac0
	// Line 667, Address: 0x380694, Func Offset: 0xae4
	// Line 669, Address: 0x38069c, Func Offset: 0xaec
	// Line 670, Address: 0x3806b4, Func Offset: 0xb04
	// Line 671, Address: 0x3806b8, Func Offset: 0xb08
	// Line 672, Address: 0x3806d4, Func Offset: 0xb24
	// Line 673, Address: 0x3806fc, Func Offset: 0xb4c
	// Line 674, Address: 0x38070c, Func Offset: 0xb5c
	// Line 675, Address: 0x380738, Func Offset: 0xb88
	// Line 677, Address: 0x38074c, Func Offset: 0xb9c
	// Line 679, Address: 0x380754, Func Offset: 0xba4
	// Line 680, Address: 0x380768, Func Offset: 0xbb8
	// Line 681, Address: 0x380794, Func Offset: 0xbe4
	// Line 683, Address: 0x38079c, Func Offset: 0xbec
	// Line 686, Address: 0x3807a4, Func Offset: 0xbf4
	// Line 689, Address: 0x3807ac, Func Offset: 0xbfc
	// Line 690, Address: 0x3807d8, Func Offset: 0xc28
	// Line 691, Address: 0x3807f4, Func Offset: 0xc44
	// Line 693, Address: 0x38081c, Func Offset: 0xc6c
	// Line 696, Address: 0x380824, Func Offset: 0xc74
	// Line 697, Address: 0x380850, Func Offset: 0xca0
	// Line 698, Address: 0x38086c, Func Offset: 0xcbc
	// Line 700, Address: 0x380894, Func Offset: 0xce4
	// Line 703, Address: 0x38089c, Func Offset: 0xcec
	// Line 708, Address: 0x3808c8, Func Offset: 0xd18
	// Line 709, Address: 0x3808e4, Func Offset: 0xd34
	// Line 712, Address: 0x380900, Func Offset: 0xd50
	// Line 714, Address: 0x380914, Func Offset: 0xd64
	// Line 716, Address: 0x380924, Func Offset: 0xd74
	// Line 717, Address: 0x380940, Func Offset: 0xd90
	// Line 722, Address: 0x380958, Func Offset: 0xda8
	// Line 724, Address: 0x38096c, Func Offset: 0xdbc
	// Line 726, Address: 0x38097c, Func Offset: 0xdcc
	// Line 727, Address: 0x380994, Func Offset: 0xde4
	// Line 730, Address: 0x3809b0, Func Offset: 0xe00
	// Line 731, Address: 0x3809c4, Func Offset: 0xe14
	// Line 733, Address: 0x3809dc, Func Offset: 0xe2c
	// Line 734, Address: 0x3809e0, Func Offset: 0xe30
	// Func End, Address: 0x380a14, Func Offset: 0xe64
}

// iConsoleMgrIdle__FUl
// Start address: 0x380a20
void iConsoleMgrIdle()
{
	// Line 274, Address: 0x380a20, Func Offset: 0
	// Func End, Address: 0x380a28, Func Offset: 0x8
}

// iConsoleMgrInit__FiP7tagxPad
// Start address: 0x380a30
int16 iConsoleMgrInit(int32 maxControllers, tagxPad* pad)
{
	tagxPad* p;
	int32 i;
	// Line 194, Address: 0x380a30, Func Offset: 0
	// Line 204, Address: 0x380a48, Func Offset: 0x18
	// Line 205, Address: 0x380a4c, Func Offset: 0x1c
	// Line 207, Address: 0x380af8, Func Offset: 0xc8
	// Line 208, Address: 0x380b04, Func Offset: 0xd4
	// Line 210, Address: 0x380b1c, Func Offset: 0xec
	// Line 212, Address: 0x380b3c, Func Offset: 0x10c
	// Line 214, Address: 0x380b50, Func Offset: 0x120
	// Line 215, Address: 0x380b5c, Func Offset: 0x12c
	// Line 217, Address: 0x380b74, Func Offset: 0x144
	// Line 218, Address: 0x380b88, Func Offset: 0x158
	// Line 220, Address: 0x380ba0, Func Offset: 0x170
	// Line 221, Address: 0x380bac, Func Offset: 0x17c
	// Line 223, Address: 0x380bc4, Func Offset: 0x194
	// Line 224, Address: 0x380bc8, Func Offset: 0x198
	// Line 225, Address: 0x380bcc, Func Offset: 0x19c
	// Line 227, Address: 0x380be0, Func Offset: 0x1b0
	// Line 228, Address: 0x380be4, Func Offset: 0x1b4
	// Func End, Address: 0x380c00, Func Offset: 0x1d0
}

// iConsoleMgrRegisterScriptCalls__Fv
// Start address: 0x380c00
void iConsoleMgrRegisterScriptCalls()
{
	// Line 146, Address: 0x380c00, Func Offset: 0
	// Line 147, Address: 0x380c08, Func Offset: 0x8
	// Line 148, Address: 0x380c24, Func Offset: 0x24
	// Line 149, Address: 0x380c40, Func Offset: 0x40
	// Func End, Address: 0x380c50, Func Offset: 0x50
}

// checkRumbleAbility__Fi
// Start address: 0x380c50
int32 checkRumbleAbility(int32 port)
{
	// Line 131, Address: 0x380c50, Func Offset: 0
	// Line 132, Address: 0x380c60, Func Offset: 0x10
	// Line 136, Address: 0x380d0c, Func Offset: 0xbc
	// Line 137, Address: 0x380d54, Func Offset: 0x104
	// Func End, Address: 0x380d68, Func Offset: 0x118
}

// p2PadSetVibration__FP7tagxPadUiUi
// Start address: 0x380d70
void p2PadSetVibration(tagxPad* pad, uint32 act0, uint32 act1)
{
	int32 slot;
	int32 port;
	// Line 95, Address: 0x380d70, Func Offset: 0
	// Line 99, Address: 0x380d98, Func Offset: 0x28
	// Line 101, Address: 0x380da0, Func Offset: 0x30
	// Line 105, Address: 0x380da8, Func Offset: 0x38
	// Line 109, Address: 0x380dc0, Func Offset: 0x50
	// Line 110, Address: 0x380dd0, Func Offset: 0x60
	// Line 114, Address: 0x380dd4, Func Offset: 0x64
	// Line 116, Address: 0x380de4, Func Offset: 0x74
	// Line 117, Address: 0x380e3c, Func Offset: 0xcc
	// Line 121, Address: 0x380e50, Func Offset: 0xe0
	// Line 122, Address: 0x380e54, Func Offset: 0xe4
	// Line 123, Address: 0x380e58, Func Offset: 0xe8
	// Line 125, Address: 0x380e6c, Func Offset: 0xfc
	// Func End, Address: 0x380e90, Func Offset: 0x120
}

