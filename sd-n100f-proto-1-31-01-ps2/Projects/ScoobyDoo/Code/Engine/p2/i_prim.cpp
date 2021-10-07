typedef struct tagXStreamMDSDirectory;
typedef struct _rxHeapSuperBlockDescriptor;
typedef struct xTrigger;
typedef struct _RpSector;
typedef struct _LineRec;
typedef struct _rwResEntryTag;
typedef struct _RxHeap;
typedef struct _rxHeapBlockHeader;
typedef struct iTriggerResource;
typedef enum _rpWorldRenderOrder;
typedef enum _RxClusterValidityReq;
typedef struct xNavPoint;
typedef struct _rxHeapFreeBlock;
typedef struct _RwSky2DVertex;
typedef struct iDisplayCamera;
typedef struct xMarker;
typedef struct iActionResource;
typedef struct _RxPipelineNodeTopSortData;
typedef struct iActionRuntime;
typedef struct _RpPolygon;
typedef struct _RxPipelineNode;
typedef struct _RxClusterDefinition;
typedef struct _RxObjSpace3DVertex;
typedef enum _RwTextureFilterMode;
typedef struct xEntryPoint;
typedef struct _RxPipelineNodeParam;
typedef struct _RxPipelineCluster;
typedef enum _rxEmbeddedPacketState;
typedef struct _tagxEnv;
typedef struct _tagiEnvRuntime;
typedef struct iConditionResource;
typedef struct _RxNodeDefinition;
typedef enum _RxClusterValid;
typedef struct _class_0;
typedef struct _RpWorldSector;
typedef struct xRule;
typedef struct tagiFloor;
typedef struct _RwSurfaceProperties;
typedef struct iConditionRuntime;
typedef struct XStreamHeader;
typedef struct Vector3D;
typedef struct _RpMeshHeader;
typedef struct _RwV3d;
typedef struct _RpWorld;
typedef struct tagiFloorTri;
typedef struct _RxPipelineRequiresCluster;
typedef struct iRuleResource;
typedef struct xColor;
typedef struct _RpCollSector;
typedef struct _class_1;
typedef struct _RwTexDictionary;
typedef struct _RxPipeline;
typedef struct _rxReq;
typedef struct p2Camera;
typedef struct _iEntryPointRuntime;
typedef struct tagXStreamDirectoryEntry;
typedef struct _RwLLLink;
typedef struct _RwObject;
typedef struct _RpMaterialList;
typedef struct iEntryPointResource;
typedef struct _RwRGBAReal;
typedef struct iMarkerResource;
typedef struct xScene;
typedef struct _RpMaterial;
typedef struct _RxOutputSpec;
typedef struct xAction;
typedef struct _RwBBox;
typedef struct _RwTexture;
typedef struct _RxClusterRef;
typedef struct _iLightRuntime;
typedef struct xCamera;
typedef struct xLight;
typedef struct p2CameraVersion;
typedef struct _RwRaster;
typedef struct xCondition;
typedef struct _RpVertexNormal;
typedef struct iLightResource;
typedef struct _RxIoSpec;
typedef struct _RwTexCoords;
typedef struct _RwRGBA;
typedef struct xNavLink;
typedef struct _RxNodeMethods;
typedef struct _RwSky2DVertexFields;
typedef enum _RxClusterForcePresent;
typedef struct _RxPacket;
typedef enum _RxNodeDefEditable;
typedef struct _RxClusterUnion;
typedef enum _RwTextureAddressMode;
typedef struct _RxCluster;
typedef struct _RwLinkList;
typedef struct iCameraResource;
typedef struct _RwSky2DVertexAlignmentOverlay;

typedef void(*type_1)(_rwResEntryTag*);
typedef int32(*type_3)(_RxPipelineNode*, _RxPipelineNodeParam*);
typedef int32(*type_6)(_RxNodeDefinition*);
typedef _RpWorldSector*(*type_8)(_RpWorldSector*);
typedef void(*type_9)(_RxNodeDefinition*);
typedef int32(*type_12)(_RxPipelineNode*);
typedef void(*type_15)(_RxPipelineNode*);
typedef int32(*type_18)(_RxPipelineNode*, _RxPipeline*);
typedef uint32(*type_23)(_RxPipelineNode*, uint32, uint32, void*);

typedef tagXStreamDirectoryEntry type_0[1000];
typedef Vector3D type_2[4];
typedef uint16 type_4[3];
typedef int8 type_5[256];
typedef int8 type_7[51];
typedef iTriggerResource* type_10[20];
typedef uint32 type_11[4];
typedef iTriggerResource* type_13[20];
typedef uint16 type_14[3];
typedef iTriggerResource* type_16[20];
typedef _RwSky2DVertex type_17[4];
typedef iTriggerResource* type_19[20];
typedef uint16 type_20[5];
typedef int8 type_21[2048];
typedef iTriggerResource* type_22[20];
typedef iTriggerResource* type_24[20];
typedef int8 type_25[1430];
typedef iTriggerResource* type_26[20];
typedef _RxCluster type_27[1];
typedef iTriggerResource* type_28[20];
typedef float32 type_29[3];
typedef int8 type_30[32];
typedef iTriggerResource* type_31[20];
typedef int8 type_32[32];
typedef uint16 type_33[4000];
typedef iTriggerResource* type_34[20];
typedef int8 type_35[128];
typedef iLightResource type_36[2];
typedef iTriggerResource* type_37[20];
typedef iTriggerResource* type_38[20];
typedef Vector3D type_39[4];
typedef p2CameraVersion type_40[5];
typedef <unknown fundamental type (0xa510)> type_41[4];

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

struct xTrigger
{
	iTriggerResource* m_resource;
};

struct _RpSector
{
	int32 type;
};

struct _LineRec
{
	_RxObjSpace3DVertex a;
	_RxObjSpace3DVertex b;
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

enum _rpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

enum _RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
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

struct _rxHeapFreeBlock
{
	uint32 size;
	_rxHeapBlockHeader* ptr;
};

struct _RwSky2DVertex
{
	_RwSky2DVertexAlignmentOverlay u;
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

struct _RxObjSpace3DVertex
{
	_RwV3d objVertex;
	_class_0 c;
	_RwV3d objNormal;
	float32 u;
	float32 v;
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

struct xEntryPoint
{
	iEntryPointResource* m_resource;
	_iEntryPointRuntime* m_runtime;
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

struct _class_0
{
	union
	{
		_RwRGBA preLitColor;
		_RwRGBA color;
	};
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

struct _RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

struct iConditionRuntime
{
	xCondition* m_operand;
	uint16 m_match;
	uint16 m_trigger;
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

struct iRuleResource
{
	uint32 m_actionCount;
	xAction* m_action;
	uint32 m_conditionCount;
	xCondition* m_condition;
};

struct xColor
{
	union
	{
		_class_1 byte;
		uint32 value;
	};
};

struct _RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
};

struct _class_1
{
	uint8 bAlpha;
	uint8 bBlue;
	uint8 bGreen;
	uint8 bRed;
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

struct _rxReq
{
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

struct _RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
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

struct _RxOutputSpec
{
	int8* name;
	_RxClusterValid* outputClusters;
	_RxClusterValid allOtherClusters;
};

struct xAction
{
	iActionResource* m_resource;
	iActionRuntime* m_runtime;
};

struct _RwBBox
{
	_RwV3d sup;
	_RwV3d inf;
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

struct _RxClusterRef
{
	_RxClusterDefinition* clusterDef;
	_RxClusterForcePresent forcePresent;
	uint32 reserved;
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

struct xCamera
{
	iCameraResource* m_resource;
	void** m_runtime;
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

struct xCondition
{
	iConditionResource* m_resource;
	iConditionRuntime* m_runtime;
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

struct _RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
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

struct _RwSky2DVertexFields
{
	_RwV3d scrVertex;
	float32 camVertex_z;
	float32 u;
	float32 v;
	float32 recipZ;
	float32 pad1;
	_RwRGBAReal color;
	_RwV3d objNormal;
	float32 pad2;
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

struct iCameraResource
{
	uint16 m_plateOffset;
	uint16 m_versions;
	p2CameraVersion m_version[5];
	uint32 m_frameCount;
	p2Camera* m_cameras;
};

struct _RwSky2DVertexAlignmentOverlay
{
	union
	{
		_RwSky2DVertexFields els;
		<unknown fundamental type (0xa510)> qWords[4];
	};
};

int8 dbfont_chars[51];
_LineRec* lines;
uint32 num_lines;
uint16 sLineVertIndex[4000];
xColor line_color;
float32 line_width;
float32 line_z_bias;
Vector3D origin;
int8 _dbfbuf[256];
int8 dbfont_buf[1430];
int8* dbfp;
int32 sDBFontInit;
float32 dbfont_z;
uint32 dumpit;
float32 dbfont_dx;
float32 dbfont_dy;
uint32 dpy;
uint32 dpx;
xScene* xScene_current;
int8 vAssertBuf2[128];
XStreamHeader currentHeader;

void p2PrimDrawHealthBar(float32 x0, float32 y0, float32 x1, float32 y1);
void DBFontFlush();
void DBFontExit();
void RenderLines();
void DrawLineSC(float32 ax, float32 ay, float32 az, float32 bx, float32 by, float32 bz);
void DrawLine(float32 ax, float32 ay, float32 az, float32 bx, float32 by, float32 bz);
void iPrimDrawPoly(Vector3D* vert0, Vector3D* vert1, Vector3D* vert2);
void ResetLines();
void InitLines();

// p2PrimDrawHealthBar__Fffff
// Start address: 0x38e340
void p2PrimDrawHealthBar(float32 x0, float32 y0, float32 x1, float32 y1)
{
	uint16 index[5];
	_RwSky2DVertex vert[4];
	// Line 656, Address: 0x38e340, Func Offset: 0
	// Line 658, Address: 0x38e348, Func Offset: 0x8
	// Line 662, Address: 0x38e364, Func Offset: 0x24
	// Line 663, Address: 0x38e368, Func Offset: 0x28
	// Line 665, Address: 0x38e36c, Func Offset: 0x2c
	// Line 666, Address: 0x38e370, Func Offset: 0x30
	// Line 668, Address: 0x38e374, Func Offset: 0x34
	// Line 669, Address: 0x38e378, Func Offset: 0x38
	// Line 671, Address: 0x38e37c, Func Offset: 0x3c
	// Line 672, Address: 0x38e380, Func Offset: 0x40
	// Line 675, Address: 0x38e384, Func Offset: 0x44
	// Line 677, Address: 0x38e484, Func Offset: 0x144
	// Line 679, Address: 0x38e584, Func Offset: 0x244
	// Line 681, Address: 0x38e684, Func Offset: 0x344
	// Line 690, Address: 0x38e784, Func Offset: 0x444
	// Line 694, Address: 0x38e794, Func Offset: 0x454
	// Line 699, Address: 0x38e7a4, Func Offset: 0x464
	// Line 702, Address: 0x38e7c0, Func Offset: 0x480
	// Line 703, Address: 0x38e7d0, Func Offset: 0x490
	// Func End, Address: 0x38e7e0, Func Offset: 0x4a0
}

// DBFontFlush__Fv
// Start address: 0x38e7e0
void DBFontFlush()
{
	// Line 649, Address: 0x38e7e0, Func Offset: 0
	// Func End, Address: 0x38e7e8, Func Offset: 0x8
}

// DBFontExit__Fv
// Start address: 0x38e7f0
void DBFontExit()
{
	// Line 454, Address: 0x38e7f0, Func Offset: 0
	// Func End, Address: 0x38e7f8, Func Offset: 0x8
}

// RenderLines__Fv
// Start address: 0x38e800
void RenderLines()
{
	Vector3D* offset;
	_LineRec* l;
	// Line 178, Address: 0x38e800, Func Offset: 0
	// Line 211, Address: 0x38e80c, Func Offset: 0xc
	// Line 255, Address: 0x38e810, Func Offset: 0x10
	// Line 258, Address: 0x38e81c, Func Offset: 0x1c
	// Line 260, Address: 0x38e824, Func Offset: 0x24
	// Line 263, Address: 0x38e848, Func Offset: 0x48
	// Line 264, Address: 0x38e864, Func Offset: 0x64
	// Line 271, Address: 0x38e86c, Func Offset: 0x6c
	// Line 272, Address: 0x38e870, Func Offset: 0x70
	// Func End, Address: 0x38e884, Func Offset: 0x84
}

// DrawLineSC__Fffffff
// Start address: 0x38e890
void DrawLineSC(float32 ax, float32 ay, float32 az, float32 bx, float32 by, float32 bz)
{
	_LineRec* l;
	// Line 141, Address: 0x38e890, Func Offset: 0
	// Line 142, Address: 0x38e898, Func Offset: 0x8
	// Line 143, Address: 0x38e8b4, Func Offset: 0x24
	// Line 144, Address: 0x38e8d0, Func Offset: 0x40
	// Line 145, Address: 0x38e8ec, Func Offset: 0x5c
	// Line 146, Address: 0x38e908, Func Offset: 0x78
	// Line 147, Address: 0x38e924, Func Offset: 0x94
	// Line 149, Address: 0x38e940, Func Offset: 0xb0
	// Line 150, Address: 0x38e958, Func Offset: 0xc8
	// Line 151, Address: 0x38e978, Func Offset: 0xe8
	// Line 153, Address: 0x38e998, Func Offset: 0x108
	// Line 154, Address: 0x38e9a4, Func Offset: 0x114
	// Line 155, Address: 0x38ea4c, Func Offset: 0x1bc
	// Func End, Address: 0x38ea5c, Func Offset: 0x1cc
}

// DrawLine__Fffffff
// Start address: 0x38ea60
void DrawLine(float32 ax, float32 ay, float32 az, float32 bx, float32 by, float32 bz)
{
	_LineRec* l;
	// Line 107, Address: 0x38ea60, Func Offset: 0
	// Line 108, Address: 0x38ea68, Func Offset: 0x8
	// Line 109, Address: 0x38ea94, Func Offset: 0x34
	// Line 110, Address: 0x38eac0, Func Offset: 0x60
	// Line 111, Address: 0x38eaec, Func Offset: 0x8c
	// Line 112, Address: 0x38eb18, Func Offset: 0xb8
	// Line 113, Address: 0x38eb44, Func Offset: 0xe4
	// Line 115, Address: 0x38eb70, Func Offset: 0x110
	// Line 116, Address: 0x38eb88, Func Offset: 0x128
	// Line 117, Address: 0x38eba8, Func Offset: 0x148
	// Line 119, Address: 0x38ebc8, Func Offset: 0x168
	// Line 120, Address: 0x38ebd4, Func Offset: 0x174
	// Line 121, Address: 0x38ec7c, Func Offset: 0x21c
	// Func End, Address: 0x38ec8c, Func Offset: 0x22c
}

// iPrimDrawPoly__FPC8Vector3DPC8Vector3DPC8Vector3D
// Start address: 0x38ec90
void iPrimDrawPoly(Vector3D* vert0, Vector3D* vert1, Vector3D* vert2)
{
	Vector3D* offset;
	// Line 69, Address: 0x38ec90, Func Offset: 0
	// Line 92, Address: 0x38ecb0, Func Offset: 0x20
	// Line 93, Address: 0x38ecc0, Func Offset: 0x30
	// Line 94, Address: 0x38ecd0, Func Offset: 0x40
	// Line 104, Address: 0x38ece0, Func Offset: 0x50
	// Func End, Address: 0x38ecfc, Func Offset: 0x6c
}

// ResetLines__Fv
// Start address: 0x38ed00
void ResetLines()
{
	// Line 64, Address: 0x38ed00, Func Offset: 0
	// Line 65, Address: 0x38ed04, Func Offset: 0x4
	// Func End, Address: 0x38ed0c, Func Offset: 0xc
}

// InitLines__Fv
// Start address: 0x38ed10
void InitLines()
{
	int32 i;
	// Line 45, Address: 0x38ed10, Func Offset: 0
	// Line 48, Address: 0x38ed18, Func Offset: 0x8
	// Line 49, Address: 0x38ed40, Func Offset: 0x30
	// Line 52, Address: 0x38ede4, Func Offset: 0xd4
	// Line 54, Address: 0x38edec, Func Offset: 0xdc
	// Line 56, Address: 0x38edf0, Func Offset: 0xe0
	// Line 58, Address: 0x38edfc, Func Offset: 0xec
	// Line 59, Address: 0x38ee10, Func Offset: 0x100
	// Line 60, Address: 0x38ee24, Func Offset: 0x114
	// Func End, Address: 0x38ee34, Func Offset: 0x124
}

