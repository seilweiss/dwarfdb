typedef enum _RxClusterValidityReq;
typedef struct _RxPipeline;
typedef struct _RwRaster;
typedef struct Vector3D;
typedef struct xNavPoint;
typedef struct _RpSector;
typedef struct xTrigger;
typedef struct _RxClusterDefinition;
typedef struct _RxOutputSpec;
typedef struct _RxPipelineNode;
typedef struct tagiFloorTri;
typedef struct _rxHeapSuperBlockDescriptor;
typedef enum _rpWorldRenderOrder;
typedef struct _rwResEntryTag;
typedef struct p2Camera;
typedef struct _RxHeap;
typedef struct _rxHeapBlockHeader;
typedef struct tagXStreamMDSDirectory;
typedef struct _rxHeapFreeBlock;
typedef struct iActionRuntime;
typedef struct _RpPolygon;
typedef struct _RxPipelineNodeTopSortData;
typedef struct xNavLink;
typedef struct xAction;
typedef struct xMarker;
typedef struct _RxPipelineNodeParam;
typedef struct _RxPipelineCluster;
typedef enum _rxEmbeddedPacketState;
typedef struct iDisplayCamera;
typedef enum _RwTextureFilterMode;
typedef struct _RpWorldSector;
typedef struct xEntryPoint;
typedef struct iTriggerResource;
typedef struct iActionResource;
typedef struct _RxNodeDefinition;
typedef enum _RxClusterValid;
typedef struct _tagxEnv;
typedef struct _RwSurfaceProperties;
typedef struct _tagiEnvRuntime;
typedef struct _RpMeshHeader;
typedef struct _RpWorld;
typedef struct tagiFloor;
typedef struct _RwV3d;
typedef struct tagFile;
typedef struct XStreamHeader;
typedef struct xScene;
typedef struct _RpCollSector;
typedef struct _RxPipelineRequiresCluster;
typedef struct xRule;
typedef struct iConditionResource;
typedef struct _RwLLLink;
typedef struct _rxReq;
typedef struct _RwTexDictionary;
typedef struct _XDG;
typedef struct iConditionRuntime;
typedef struct _RwObject;
typedef struct _RpMaterialList;
typedef struct tagXStreamDirectoryEntry;
typedef struct _RpMaterial;
typedef struct _iEntryPointRuntime;
typedef struct iEntryPointResource;
typedef struct iRuleResource;
typedef struct _RxClusterRef;
typedef struct _RpVertexNormal;
typedef struct _RwTexture;
typedef struct _RwBBox;
typedef struct _RwTexCoords;
typedef struct xCamera;
typedef struct _RxIoSpec;
typedef struct iMarkerResource;
typedef struct xLight;
typedef struct _RwRGBA;
typedef struct _iLightRuntime;
typedef struct XStream;
typedef struct iLightResource;
typedef struct _RxNodeMethods;
typedef struct p2CameraVersion;
typedef enum _RxClusterForcePresent;
typedef struct _RxPacket;
typedef struct xMessage;
typedef enum _RxNodeDefEditable;
typedef struct xCondition;
typedef struct _RxClusterUnion;
typedef struct _RxCluster;
typedef enum _RwTextureAddressMode;
typedef struct _RwLinkList;
typedef struct iCameraResource;
typedef struct PerfTimes;

typedef void(*type_2)(_rwResEntryTag*);
typedef int32(*type_5)(_RxPipelineNode*, _RxPipelineNodeParam*);
typedef _RpWorldSector*(*type_6)(_RpWorldSector*);
typedef int32(*type_7)(_RxNodeDefinition*);
typedef void(*type_8)(_RxNodeDefinition*);
typedef int32(*type_11)(_RxPipelineNode*);
typedef void(*type_14)(_RxPipelineNode*);
typedef int32(*type_17)(_RxPipelineNode*, _RxPipeline*);
typedef uint32(*type_21)(_RxPipelineNode*, uint32, uint32, void*);

typedef p2CameraVersion type_0[5];
typedef Vector3D type_1[4];
typedef tagXStreamDirectoryEntry type_3[1000];
typedef uint16 type_4[3];
typedef Vector3D type_9[4];
typedef uint32 type_10[4];
typedef iTriggerResource* type_12[20];
typedef int8 type_13[256];
typedef iTriggerResource* type_15[20];
typedef iTriggerResource* type_16[20];
typedef int16 type_18[51];
typedef iTriggerResource* type_19[20];
typedef int8 type_20[2048];
typedef iTriggerResource* type_22[20];
typedef int32 type_23[11];
typedef _XDG type_24[5];
typedef iTriggerResource* type_25[20];
typedef _RxCluster type_26[1];
typedef iTriggerResource* type_27[20];
typedef uint16 type_28[3];
typedef iTriggerResource* type_29[20];
typedef int8 type_30[32];
typedef int8 type_31[32];
typedef iTriggerResource* type_32[20];
typedef float32 type_33[3];
typedef uint8 type_34[14400];
typedef iTriggerResource* type_35[20];
typedef int8 type_36[128];
typedef iTriggerResource* type_37[20];
typedef iLightResource type_38[2];
typedef int8 type_39[128];
typedef iTriggerResource* type_40[20];
typedef uint32 type_41[5];

enum _RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
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

struct Vector3D
{
	float32 x;
	float32 y;
	float32 z;
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

struct _RpSector
{
	int32 type;
};

struct xTrigger
{
	iTriggerResource* m_resource;
};

struct _RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
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

struct tagiFloorTri
{
	uint16 m_v[3];
	uint16 m_n;
};

struct _rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	_rxHeapSuperBlockDescriptor* next;
};

enum _rpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct _rwResEntryTag
{
	_RwLLLink link;
	int32 size;
	void* owner;
	_rwResEntryTag** ownerRef;
	void(*destroyNotify)(_rwResEntryTag*);
};

struct p2Camera
{
	Vector3D m_pos;
	Vector3D m_rot;
	float32 m_fov;
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

struct tagXStreamMDSDirectory
{
	uint32 count;
	tagXStreamDirectoryEntry directory[1000];
};

struct _rxHeapFreeBlock
{
	uint32 size;
	_rxHeapBlockHeader* ptr;
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

struct _RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	_rxReq* req;
	void* initialisationData;
	uint32 initialisationDataSize;
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

struct xAction
{
	iActionResource* m_resource;
	iActionRuntime* m_runtime;
};

struct xMarker
{
	iMarkerResource* m_resource;
	void** m_runtime;
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

struct iDisplayCamera
{
	Vector3D m_pos;
	Vector3D m_rot;
	float32 m_fov;
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

struct xEntryPoint
{
	iEntryPointResource* m_resource;
	_iEntryPointRuntime* m_runtime;
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

struct iActionResource
{
	uint8 m_cmdType;
	uint8 m_cmd;
	uint16 pad;
	uint32 m_cmdParameter;
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

struct _tagxEnv
{
	_tagiEnvRuntime* m_runtime;
};

struct _RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

struct _tagiEnvRuntime
{
	_RpWorld* world;
	Vector3D world_origin;
	_RwTexDictionary* tex_dict;
};

struct _RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
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

struct _RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct tagFile
{
	int8 m_name[256];
	int32 m_state;
	int32 m_desc;
	uint32 m_fpos;
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

struct _RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
};

struct _RxPipelineRequiresCluster
{
	_RxClusterDefinition* clusterDef;
	_RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct xRule
{
	iRuleResource* m_resource;
	void* m_runtime;
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

struct _RwLLLink
{
	_RwLLLink* next;
	_RwLLLink* prev;
};

struct _rxReq
{
};

struct _RwTexDictionary
{
	_RwObject object;
	_RwLinkList texturesInDict;
	_RwLLLink lInInstance;
};

struct _XDG
{
	uint16 idx;
	int16 value[51];
	float32 mult;
	uint32 graphcolor;
	int32 tickmin;
	int32 tickmax;
	int32 tickstep;
	uint32 tickcolor;
	uint32 flags;
};

struct iConditionRuntime
{
	xCondition* m_operand;
	uint16 m_match;
	uint16 m_trigger;
};

struct _RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct _RpMaterialList
{
	_RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct tagXStreamDirectoryEntry
{
	uint32 id;
	uint32 type;
	uint32 offset;
	uint32 length;
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

struct _iEntryPointRuntime
{
	uint32 m_enabled;
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

struct iRuleResource
{
	uint32 m_actionCount;
	xAction* m_action;
	uint32 m_conditionCount;
	xCondition* m_condition;
};

struct _RxClusterRef
{
	_RxClusterDefinition* clusterDef;
	_RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct _RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
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

struct _RwTexCoords
{
	float32 u;
	float32 v;
};

struct xCamera
{
	iCameraResource* m_resource;
	void** m_runtime;
};

struct _RxIoSpec
{
	uint32 numClustersOfInterest;
	_RxClusterRef* clustersOfInterest;
	_RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	_RxOutputSpec* outputs;
};

struct iMarkerResource
{
	Vector3D m_pos;
};

struct xLight
{
	iLightResource* m_resource;
	_iLightRuntime* m_runtime;
};

struct _RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
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

struct XStream
{
	uint32 id;
	int32 currentOffset;
	uint32* data;
	uint32 length;
	uint32 offset;
	uint32 done;
	uint32 assetID;
	tagXStreamDirectoryEntry* dir;
	uint32 count;
	uint32 index;
};

struct iLightResource
{
	uint32 m_type;
	Vector3D m_pos;
	Vector3D m_rot;
	Vector3D m_color;
	int32 m_fov;
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

struct xMessage
{
	uint32 flags;
	int32 senderType;
	int32 senderId;
	int32 recipientType;
	int32 recipientId;
	uint32 message;
	uint32 data1;
	uint32 data2;
	uint32 data3;
	uint32 data4;
	float32 deliveryTime;
};

enum _RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct xCondition
{
	iConditionResource* m_resource;
	iConditionRuntime* m_runtime;
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

enum _RwTextureAddressMode
{
	rwTEXTUREADDRESSNATEXTUREADDRESS,
	rwTEXTUREADDRESSWRAP,
	rwTEXTUREADDRESSMIRROR,
	rwTEXTUREADDRESSCLAMP,
	rwTEXTUREADDRESSBORDER,
	rwTEXTUREADDRESSMODEFORCEENUMSIZEINT = 0x7fffffff
};

struct _RwLinkList
{
	_RwLLLink link;
};

struct iCameraResource
{
	uint16 m_plateOffset;
	uint16 m_versions;
	p2CameraVersion m_version[5];
	uint32 m_frameCount;
	p2Camera* m_cameras;
};

struct PerfTimes
{
	ulong32 total;
	ulong32 lasttotal;
	ulong32 console;
	ulong32 sound;
	ulong32 anim;
	ulong32 animPost;
	ulong32 actor;
	ulong32 obj;
	ulong32 script;
	ulong32 scriptPF;
	ulong32 particle;
	ulong32 path;
	ulong32 route;
	ulong32 gui;
	ulong32 cart;
	ulong32 gstate;
	ulong32 msg;
	ulong32 x1;
	ulong32 x2;
	ulong32 x3;
	ulong32 scrfx;
	ulong32 fmv;
	ulong32 xidle;
	ulong32 xsceneidle;
	ulong32 camera;
	ulong32 decode;
	ulong32 main0V;
	ulong32 plate;
};

int32 jmpret;
uint8 gCartBuffer[14400];
uint32 gDebugGraph;
_XDG dg[5];
uint32 dg_colors[5];
uint32 interpreterMethod;
uint32 interpreterMethodInterface;
int32 veryFirstTime;
int32 goIntoStartMenu;
xScene* xScene_current;
PerfTimes g_perfTimes;
ulong32 gTimerValue;
uint32 gTime;
int32 gGameState;
uint32 g_scenePendingScene;
int8 vAssertBuf2[128];
XStreamHeader currentHeader;
int32 debugThread;
int32 debugCallFlag;
int32 debugOpFlag;
int32 jumpBuffer[11];
int32 gBootState;

void xShutdown();
void xIdle();
void xInitGame();
void xMainReInitializeInterpreter();
void xInit();

// xShutdown__Fv
// Start address: 0x358710
void xShutdown()
{
	// Line 999, Address: 0x358710, Func Offset: 0
	// Func End, Address: 0x358718, Func Offset: 0x8
}

// xIdle__Fv
// Start address: 0x358720
void xIdle()
{
	int32 count;
	int8 init;
	// Line 791, Address: 0x358720, Func Offset: 0
	// Line 812, Address: 0x358728, Func Offset: 0x8
	// Line 813, Address: 0x358738, Func Offset: 0x18
	// Line 814, Address: 0x358744, Func Offset: 0x24
	// Line 835, Address: 0x358760, Func Offset: 0x40
	// Line 836, Address: 0x35876c, Func Offset: 0x4c
	// Line 837, Address: 0x35877c, Func Offset: 0x5c
	// Line 838, Address: 0x358784, Func Offset: 0x64
	// Line 846, Address: 0x3587a0, Func Offset: 0x80
	// Line 847, Address: 0x3587ac, Func Offset: 0x8c
	// Line 848, Address: 0x3587bc, Func Offset: 0x9c
	// Line 849, Address: 0x3587c4, Func Offset: 0xa4
	// Line 854, Address: 0x3587e0, Func Offset: 0xc0
	// Line 855, Address: 0x3587ec, Func Offset: 0xcc
	// Line 856, Address: 0x3587fc, Func Offset: 0xdc
	// Line 857, Address: 0x358804, Func Offset: 0xe4
	// Line 862, Address: 0x358820, Func Offset: 0x100
	// Line 863, Address: 0x358830, Func Offset: 0x110
	// Line 864, Address: 0x35883c, Func Offset: 0x11c
	// Line 866, Address: 0x358844, Func Offset: 0x124
	// Line 870, Address: 0x358860, Func Offset: 0x140
	// Line 871, Address: 0x358870, Func Offset: 0x150
	// Line 872, Address: 0x35887c, Func Offset: 0x15c
	// Line 876, Address: 0x358898, Func Offset: 0x178
	// Line 877, Address: 0x3588a8, Func Offset: 0x188
	// Line 878, Address: 0x3588b0, Func Offset: 0x190
	// Line 882, Address: 0x3588cc, Func Offset: 0x1ac
	// Line 883, Address: 0x3588dc, Func Offset: 0x1bc
	// Line 884, Address: 0x3588e8, Func Offset: 0x1c8
	// Line 885, Address: 0x3588f4, Func Offset: 0x1d4
	// Line 887, Address: 0x3588fc, Func Offset: 0x1dc
	// Line 889, Address: 0x358908, Func Offset: 0x1e8
	// Line 894, Address: 0x358924, Func Offset: 0x204
	// Line 895, Address: 0x358930, Func Offset: 0x210
	// Line 896, Address: 0x358940, Func Offset: 0x220
	// Line 897, Address: 0x358948, Func Offset: 0x228
	// Line 898, Address: 0x358950, Func Offset: 0x230
	// Line 904, Address: 0x35896c, Func Offset: 0x24c
	// Line 905, Address: 0x358978, Func Offset: 0x258
	// Line 906, Address: 0x358988, Func Offset: 0x268
	// Line 907, Address: 0x358990, Func Offset: 0x270
	// Line 912, Address: 0x3589ac, Func Offset: 0x28c
	// Line 913, Address: 0x3589b8, Func Offset: 0x298
	// Line 914, Address: 0x3589c8, Func Offset: 0x2a8
	// Line 915, Address: 0x3589d0, Func Offset: 0x2b0
	// Line 920, Address: 0x3589ec, Func Offset: 0x2cc
	// Line 921, Address: 0x3589fc, Func Offset: 0x2dc
	// Line 922, Address: 0x358a08, Func Offset: 0x2e8
	// Line 925, Address: 0x358a24, Func Offset: 0x304
	// Line 926, Address: 0x358a34, Func Offset: 0x314
	// Line 927, Address: 0x358a3c, Func Offset: 0x31c
	// Line 930, Address: 0x358a58, Func Offset: 0x338
	// Line 931, Address: 0x358a68, Func Offset: 0x348
	// Line 932, Address: 0x358a70, Func Offset: 0x350
	// Line 935, Address: 0x358a8c, Func Offset: 0x36c
	// Line 936, Address: 0x358a9c, Func Offset: 0x37c
	// Line 937, Address: 0x358aa4, Func Offset: 0x384
	// Line 940, Address: 0x358ac0, Func Offset: 0x3a0
	// Line 941, Address: 0x358ad0, Func Offset: 0x3b0
	// Line 942, Address: 0x358ad8, Func Offset: 0x3b8
	// Line 952, Address: 0x358af4, Func Offset: 0x3d4
	// Line 956, Address: 0x358b10, Func Offset: 0x3f0
	// Line 957, Address: 0x358b28, Func Offset: 0x408
	// Line 959, Address: 0x358b38, Func Offset: 0x418
	// Line 961, Address: 0x358b44, Func Offset: 0x424
	// Line 964, Address: 0x358b4c, Func Offset: 0x42c
	// Line 972, Address: 0x358b58, Func Offset: 0x438
	// Line 973, Address: 0x358b68, Func Offset: 0x448
	// Func End, Address: 0x358b78, Func Offset: 0x458
}

// xInitGame__Fi
// Start address: 0x358b80
void xInitGame()
{
	xMessage messageToSend;
	int8* assetName;
	int32 tick;
	float32 mult;
	uint32 lastId;
	uint32 sceneId;
	int32 sceneNumber;
	XStream stream;
	// Line 299, Address: 0x358b80, Func Offset: 0
	// Line 313, Address: 0x358b9c, Func Offset: 0x1c
	// Line 316, Address: 0x358ba4, Func Offset: 0x24
	// Line 317, Address: 0x358bac, Func Offset: 0x2c
	// Line 318, Address: 0x358bb4, Func Offset: 0x34
	// Line 328, Address: 0x358bbc, Func Offset: 0x3c
	// Line 329, Address: 0x358bc8, Func Offset: 0x48
	// Line 378, Address: 0x358bdc, Func Offset: 0x5c
	// Line 379, Address: 0x358be8, Func Offset: 0x68
	// Line 380, Address: 0x358bec, Func Offset: 0x6c
	// Line 382, Address: 0x358c1c, Func Offset: 0x9c
	// Line 384, Address: 0x358c4c, Func Offset: 0xcc
	// Line 386, Address: 0x358c7c, Func Offset: 0xfc
	// Line 388, Address: 0x358cac, Func Offset: 0x12c
	// Line 393, Address: 0x358cdc, Func Offset: 0x15c
	// Line 412, Address: 0x358ce4, Func Offset: 0x164
	// Line 413, Address: 0x358cfc, Func Offset: 0x17c
	// Line 415, Address: 0x358d1c, Func Offset: 0x19c
	// Line 416, Address: 0x358d34, Func Offset: 0x1b4
	// Line 418, Address: 0x358d54, Func Offset: 0x1d4
	// Line 419, Address: 0x358d6c, Func Offset: 0x1ec
	// Line 481, Address: 0x358d8c, Func Offset: 0x20c
	// Line 483, Address: 0x358d98, Func Offset: 0x218
	// Line 485, Address: 0x358dac, Func Offset: 0x22c
	// Line 487, Address: 0x358e4c, Func Offset: 0x2cc
	// Line 488, Address: 0x358e50, Func Offset: 0x2d0
	// Line 490, Address: 0x358e54, Func Offset: 0x2d4
	// Line 491, Address: 0x358e68, Func Offset: 0x2e8
	// Line 493, Address: 0x358e74, Func Offset: 0x2f4
	// Line 495, Address: 0x358e8c, Func Offset: 0x30c
	// Line 498, Address: 0x358e94, Func Offset: 0x314
	// Line 499, Address: 0x358e9c, Func Offset: 0x31c
	// Line 501, Address: 0x358ea4, Func Offset: 0x324
	// Line 582, Address: 0x358eb0, Func Offset: 0x330
	// Line 592, Address: 0x358eb8, Func Offset: 0x338
	// Line 600, Address: 0x358ec4, Func Offset: 0x344
	// Line 613, Address: 0x358ed0, Func Offset: 0x350
	// Line 614, Address: 0x358ee4, Func Offset: 0x364
	// Line 615, Address: 0x358ee8, Func Offset: 0x368
	// Line 618, Address: 0x358ef4, Func Offset: 0x374
	// Line 621, Address: 0x358f00, Func Offset: 0x380
	// Line 624, Address: 0x358f0c, Func Offset: 0x38c
	// Line 626, Address: 0x358f18, Func Offset: 0x398
	// Line 650, Address: 0x358f20, Func Offset: 0x3a0
	// Line 651, Address: 0x358f28, Func Offset: 0x3a8
	// Line 652, Address: 0x358f30, Func Offset: 0x3b0
	// Line 653, Address: 0x358f38, Func Offset: 0x3b8
	// Line 654, Address: 0x358f40, Func Offset: 0x3c0
	// Line 657, Address: 0x358f48, Func Offset: 0x3c8
	// Line 659, Address: 0x358f50, Func Offset: 0x3d0
	// Line 667, Address: 0x358f58, Func Offset: 0x3d8
	// Line 668, Address: 0x358f64, Func Offset: 0x3e4
	// Line 676, Address: 0x358f6c, Func Offset: 0x3ec
	// Line 677, Address: 0x358f88, Func Offset: 0x408
	// Line 678, Address: 0x358f8c, Func Offset: 0x40c
	// Line 681, Address: 0x358f98, Func Offset: 0x418
	// Line 684, Address: 0x358fa4, Func Offset: 0x424
	// Line 687, Address: 0x358fb0, Func Offset: 0x430
	// Line 691, Address: 0x358fbc, Func Offset: 0x43c
	// Line 697, Address: 0x358fc4, Func Offset: 0x444
	// Line 727, Address: 0x358fd0, Func Offset: 0x450
	// Line 743, Address: 0x358fd8, Func Offset: 0x458
	// Line 744, Address: 0x358fdc, Func Offset: 0x45c
	// Line 746, Address: 0x358fe0, Func Offset: 0x460
	// Line 757, Address: 0x358fe8, Func Offset: 0x468
	// Line 758, Address: 0x358ff4, Func Offset: 0x474
	// Line 762, Address: 0x359000, Func Offset: 0x480
	// Line 763, Address: 0x359008, Func Offset: 0x488
	// Line 767, Address: 0x359014, Func Offset: 0x494
	// Line 768, Address: 0x35901c, Func Offset: 0x49c
	// Line 769, Address: 0x359020, Func Offset: 0x4a0
	// Line 771, Address: 0x35902c, Func Offset: 0x4ac
	// Line 776, Address: 0x359034, Func Offset: 0x4b4
	// Line 777, Address: 0x359050, Func Offset: 0x4d0
	// Line 779, Address: 0x35906c, Func Offset: 0x4ec
	// Line 780, Address: 0x359074, Func Offset: 0x4f4
	// Func End, Address: 0x359098, Func Offset: 0x518
}

// xMainReInitializeInterpreter__Fv
// Start address: 0x3590a0
void xMainReInitializeInterpreter()
{
	// Line 224, Address: 0x3590a0, Func Offset: 0
	// Line 225, Address: 0x3590a8, Func Offset: 0x8
	// Line 226, Address: 0x3590ac, Func Offset: 0xc
	// Line 228, Address: 0x3590b0, Func Offset: 0x10
	// Line 229, Address: 0x3590b8, Func Offset: 0x18
	// Line 230, Address: 0x3590c0, Func Offset: 0x20
	// Line 231, Address: 0x3590c8, Func Offset: 0x28
	// Line 232, Address: 0x3590d0, Func Offset: 0x30
	// Line 233, Address: 0x3590d8, Func Offset: 0x38
	// Line 234, Address: 0x3590e0, Func Offset: 0x40
	// Line 235, Address: 0x3590e8, Func Offset: 0x48
	// Line 236, Address: 0x3590f0, Func Offset: 0x50
	// Line 237, Address: 0x3590f8, Func Offset: 0x58
	// Line 238, Address: 0x359100, Func Offset: 0x60
	// Func End, Address: 0x359110, Func Offset: 0x70
}

// xInit__Fv
// Start address: 0x359110
void xInit()
{
	int8 tmp[128];
	// Line 117, Address: 0x359110, Func Offset: 0
	// Line 120, Address: 0x359118, Func Offset: 0x8
	// Line 130, Address: 0x359120, Func Offset: 0x10
	// Line 134, Address: 0x359128, Func Offset: 0x18
	// Line 135, Address: 0x359134, Func Offset: 0x24
	// Line 140, Address: 0x35913c, Func Offset: 0x2c
	// Line 141, Address: 0x359150, Func Offset: 0x40
	// Line 145, Address: 0x35915c, Func Offset: 0x4c
	// Line 148, Address: 0x359168, Func Offset: 0x58
	// Line 149, Address: 0x359170, Func Offset: 0x60
	// Line 150, Address: 0x359178, Func Offset: 0x68
	// Line 151, Address: 0x359180, Func Offset: 0x70
	// Line 152, Address: 0x359188, Func Offset: 0x78
	// Line 153, Address: 0x359190, Func Offset: 0x80
	// Line 154, Address: 0x359198, Func Offset: 0x88
	// Line 155, Address: 0x3591a0, Func Offset: 0x90
	// Line 156, Address: 0x3591a8, Func Offset: 0x98
	// Line 157, Address: 0x3591b0, Func Offset: 0xa0
	// Line 158, Address: 0x3591b8, Func Offset: 0xa8
	// Line 159, Address: 0x3591c0, Func Offset: 0xb0
	// Line 160, Address: 0x3591c8, Func Offset: 0xb8
	// Line 161, Address: 0x3591d0, Func Offset: 0xc0
	// Line 162, Address: 0x3591d8, Func Offset: 0xc8
	// Line 165, Address: 0x3591e0, Func Offset: 0xd0
	// Line 170, Address: 0x3591e8, Func Offset: 0xd8
	// Line 173, Address: 0x3591f4, Func Offset: 0xe4
	// Line 174, Address: 0x3591fc, Func Offset: 0xec
	// Line 177, Address: 0x359204, Func Offset: 0xf4
	// Line 180, Address: 0x35920c, Func Offset: 0xfc
	// Line 182, Address: 0x359214, Func Offset: 0x104
	// Line 184, Address: 0x35921c, Func Offset: 0x10c
	// Line 190, Address: 0x359224, Func Offset: 0x114
	// Line 191, Address: 0x35923c, Func Offset: 0x12c
	// Line 197, Address: 0x359250, Func Offset: 0x140
	// Func End, Address: 0x359260, Func Offset: 0x150
}

