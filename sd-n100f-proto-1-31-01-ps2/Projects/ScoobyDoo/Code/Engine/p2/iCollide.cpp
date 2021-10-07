typedef struct iDisplayCamera;
typedef enum _RxClusterValidityReq;
typedef struct iTriggerResource;
typedef struct iActionRuntime;
typedef struct _rxHeapFreeBlock;
typedef struct _RxPipelineNodeTopSortData;
typedef enum _rpWorldRenderOrder;
typedef struct _rwResEntryTag;
typedef struct _RwSphere;
typedef struct _RxPipelineNode;
typedef struct _RxClusterDefinition;
typedef struct _RxPipelineNodeParam;
typedef struct _RxPipelineCluster;
typedef enum _rxEmbeddedPacketState;
typedef struct _RpPolygon;
typedef struct iConditionResource;
typedef struct xTrigger;
typedef struct iConditionRuntime;
typedef struct _RxNodeDefinition;
typedef enum _RxClusterValid;
typedef enum _RpIntersectType;
typedef struct _rxHeapBlockHeader;
typedef struct _RwSurfaceProperties;
typedef struct xRule;
typedef struct _RpWorldSector;
typedef struct _RpCollisionTriangle;
typedef struct _RpIntersection;
typedef struct xEntryPoint;
typedef struct _RwV3d;
typedef struct tagiFloorTri;
typedef struct iEntryPointResource;
typedef struct iRuleResource;
typedef struct _iEntryPointRuntime;
typedef struct _RpMeshHeader;
typedef struct _RpWorld;
typedef enum _RwTextureFilterMode;
typedef struct xScene;
typedef struct _RxPipelineRequiresCluster;
typedef struct _RpCollSector;
typedef struct _RxPipeline;
typedef struct xCamera;
typedef struct _rxReq;
typedef struct _RpSector;
typedef struct xLight;
typedef struct Vector3D;
typedef struct _RpIntersectData;
typedef struct _RwObject;
typedef struct p2Camera;
typedef struct tagiFloor;
typedef struct iLightResource;
typedef struct _RwLLLink;
typedef struct _iLightRuntime;
typedef struct _RpMaterialList;
typedef struct xAction;
typedef struct _RxOutputSpec;
typedef struct _RpMaterial;
typedef struct iMarkerResource;
typedef struct xNavLink;
typedef struct _RwTexDictionary;
typedef struct _RxClusterRef;
typedef struct xMarker;
typedef struct xCondition;
typedef struct p2CameraVersion;
typedef struct _RxIoSpec;
typedef struct _RpVertexNormal;
typedef struct _RwRGBA;
typedef struct _rxHeapSuperBlockDescriptor;
typedef struct _RwTexCoords;
typedef struct tagCollideInfo;
typedef struct _tagiEnvRuntime;
typedef struct _RxNodeMethods;
typedef enum _RxClusterForcePresent;
typedef struct xNavPoint;
typedef struct _RwBBox;
typedef struct _RxHeap;
typedef struct _RwTexture;
typedef struct _RxPacket;
typedef struct iCameraResource;
typedef struct _RwRaster;
typedef enum _RxNodeDefEditable;
typedef struct _RwLine;
typedef struct _RxClusterUnion;
typedef struct _RxCluster;
typedef struct _RwLinkList;
typedef struct _tagxEnv;
typedef struct iActionResource;
typedef enum _RwTextureAddressMode;

typedef void(*type_1)(_rwResEntryTag*);
typedef int32(*type_3)(_RxPipelineNode*, _RxPipelineNodeParam*);
typedef int32(*type_6)(_RxNodeDefinition*);
typedef void(*type_9)(_RxNodeDefinition*);
typedef _RpWorldSector*(*type_10)(_RpWorldSector*);
typedef int32(*type_13)(_RxPipelineNode*);
typedef _RpCollisionTriangle*(*type_14)(_RpIntersection*, _RpWorldSector*, _RpCollisionTriangle*, float32, void*);
typedef void(*type_17)(_RxPipelineNode*);
typedef int32(*type_19)(_RxPipelineNode*, _RxPipeline*);
typedef uint32(*type_22)(_RxPipelineNode*, uint32, uint32, void*);
typedef _RpCollisionTriangle*(*type_24)(_RpIntersection*, _RpWorldSector*, _RpCollisionTriangle*, float32, void*);
typedef _RpCollisionTriangle*(*type_30)(_RpIntersection*, _RpWorldSector*, _RpCollisionTriangle*, float32, void*);

typedef iTriggerResource* type_0[20];
typedef iTriggerResource* type_2[20];
typedef Vector3D type_4[4];
typedef iTriggerResource* type_5[20];
typedef uint16 type_7[3];
typedef iTriggerResource* type_8[20];
typedef iTriggerResource* type_11[20];
typedef uint32 type_12[4];
typedef uint16 type_15[3];
typedef iTriggerResource* type_16[20];
typedef iTriggerResource* type_18[20];
typedef iTriggerResource* type_20[20];
typedef iTriggerResource* type_21[20];
typedef iTriggerResource* type_23[20];
typedef _RxCluster type_25[1];
typedef iTriggerResource* type_26[20];
typedef float32 type_27[3];
typedef iTriggerResource* type_28[20];
typedef iLightResource type_29[2];
typedef int8 type_31[32];
typedef int8 type_32[32];
typedef _RwV3d* type_33[3];
typedef Vector3D type_34[4];
typedef p2CameraVersion type_35[5];

struct iDisplayCamera
{
	Vector3D m_pos;
	Vector3D m_rot;
	float32 m_fov;
};

enum _RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
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

struct iActionRuntime
{
	xAction* m_and;
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

struct _RwSphere
{
	_RwV3d center;
	float32 radius;
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

struct _RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
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

enum _RpIntersectType
{
	rpINTERSECTNONE,
	rpINTERSECTLINE,
	rpINTERSECTPOINT,
	rpINTERSECTSPHERE,
	rpINTERSECTBOX,
	rpINTERSECTATOMIC,
	rpINTERSECTTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct _rxHeapBlockHeader
{
	_rxHeapBlockHeader* prev;
	_rxHeapBlockHeader* next;
	uint32 size;
	_rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
};

struct _RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

struct xRule
{
	iRuleResource* m_resource;
	void* m_runtime;
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

struct _RpCollisionTriangle
{
	_RwV3d normal;
	_RwV3d point;
	int32 index;
	_RwV3d* vertices[3];
};

struct _RpIntersection
{
	_RpIntersectData t;
	_RpIntersectType type;
};

struct xEntryPoint
{
	iEntryPointResource* m_resource;
	_iEntryPointRuntime* m_runtime;
};

struct _RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct tagiFloorTri
{
	uint16 m_v[3];
	uint16 m_n;
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

struct _iEntryPointRuntime
{
	uint32 m_enabled;
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

struct xCamera
{
	iCameraResource* m_resource;
	void** m_runtime;
};

struct _rxReq
{
};

struct _RpSector
{
	int32 type;
};

struct xLight
{
	iLightResource* m_resource;
	_iLightRuntime* m_runtime;
};

struct Vector3D
{
	float32 x;
	float32 y;
	float32 z;
};

struct _RpIntersectData
{
	union
	{
		_RwLine line;
		_RwV3d point;
		_RwSphere sphere;
		_RwBBox box;
		void* object;
	};
};

struct _RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
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

struct iLightResource
{
	uint32 m_type;
	Vector3D m_pos;
	Vector3D m_rot;
	Vector3D m_color;
	int32 m_fov;
};

struct _RwLLLink
{
	_RwLLLink* next;
	_RwLLLink* prev;
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

struct _RpMaterialList
{
	_RpMaterial** materials;
	int32 numMaterials;
	int32 space;
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

struct _RpMaterial
{
	_RwTexture* texture;
	_RwRGBA color;
	_RxPipeline* pipeline;
	_RwSurfaceProperties surfaceProps;
	int16 refCount;
	int16 pad;
};

struct iMarkerResource
{
	Vector3D m_pos;
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

struct _RwTexDictionary
{
	_RwObject object;
	_RwLinkList texturesInDict;
	_RwLLLink lInInstance;
};

struct _RxClusterRef
{
	_RxClusterDefinition* clusterDef;
	_RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct xMarker
{
	iMarkerResource* m_resource;
	void** m_runtime;
};

struct xCondition
{
	iConditionResource* m_resource;
	iConditionRuntime* m_runtime;
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

struct _RxIoSpec
{
	uint32 numClustersOfInterest;
	_RxClusterRef* clustersOfInterest;
	_RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	_RxOutputSpec* outputs;
};

struct _RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

struct _RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct _rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	_rxHeapSuperBlockDescriptor* next;
};

struct _RwTexCoords
{
	float32 u;
	float32 v;
};

struct tagCollideInfo
{
	_tagxEnv* env;
	Vector3D orig;
	Vector3D direction;
	float32 max_dist;
	uint32 flags;
	Vector3D hit_pos;
	float32 hit_distance;
	Vector3D hit_normal;
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

struct _RwBBox
{
	_RwV3d sup;
	_RwV3d inf;
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

enum _RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct _RwLine
{
	_RwV3d start;
	_RwV3d end;
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

struct _RwLinkList
{
	_RwLLLink link;
};

struct _tagxEnv
{
	_tagiEnvRuntime* m_runtime;
};

struct iActionResource
{
	uint8 m_cmdType;
	uint8 m_cmd;
	uint16 pad;
	uint32 m_cmdParameter;
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

int32 mCollideResult;
_RpCollisionTriangle*(*WorldColCallback)(_RpIntersection*, _RpWorldSector*, _RpCollisionTriangle*, float32, void*);
Vector3D* gBSPOffset;
xScene* xScene_current;
_RpCollisionTriangle*(*iSphereCastCallback)(_RpIntersection*, _RpWorldSector*, _RpCollisionTriangle*, float32, void*);
_RpCollisionTriangle*(*iRayCastCallback)(_RpIntersection*, _RpWorldSector*, _RpCollisionTriangle*, float32, void*);

int32 iRayCastfrompoint(tagCollideInfo* info);
_RpCollisionTriangle* iRayCastCallback(_RpCollisionTriangle* triangle, float32 distance, void* info_data);

// iRayCastfrompoint__FP14tagCollideInfo
// Start address: 0x4005b0
int32 iRayCastfrompoint(tagCollideInfo* info)
{
	_RwLine* ray;
	_RpIntersection intersection;
	_RpWorld* World;
	// Line 94, Address: 0x4005b0, Func Offset: 0
	// Line 96, Address: 0x4005bc, Func Offset: 0xc
	// Line 98, Address: 0x4005c8, Func Offset: 0x18
	// Line 101, Address: 0x4005d0, Func Offset: 0x20
	// Line 102, Address: 0x4005d4, Func Offset: 0x24
	// Line 103, Address: 0x4005dc, Func Offset: 0x2c
	// Line 104, Address: 0x4005e4, Func Offset: 0x34
	// Line 105, Address: 0x4005ec, Func Offset: 0x3c
	// Line 106, Address: 0x400604, Func Offset: 0x54
	// Line 107, Address: 0x40061c, Func Offset: 0x6c
	// Line 123, Address: 0x400634, Func Offset: 0x84
	// Line 127, Address: 0x400638, Func Offset: 0x88
	// Line 130, Address: 0x40064c, Func Offset: 0x9c
	// Line 131, Address: 0x400650, Func Offset: 0xa0
	// Func End, Address: 0x400660, Func Offset: 0xb0
}

// iRayCastCallback__FP15_RpIntersectionP14_RpWorldSectorP20_RpCollisionTrianglefPv
// Start address: 0x400660
_RpCollisionTriangle* iRayCastCallback(_RpCollisionTriangle* triangle, float32 distance, void* info_data)
{
	tagCollideInfo* info;
	// Line 44, Address: 0x400660, Func Offset: 0
	// Line 49, Address: 0x400668, Func Offset: 0x8
	// Line 53, Address: 0x400688, Func Offset: 0x28
	// Line 56, Address: 0x40068c, Func Offset: 0x2c
	// Line 57, Address: 0x4006a0, Func Offset: 0x40
	// Line 58, Address: 0x4006b4, Func Offset: 0x54
	// Line 62, Address: 0x4006c8, Func Offset: 0x68
	// Line 63, Address: 0x4006d0, Func Offset: 0x70
	// Line 64, Address: 0x4006d8, Func Offset: 0x78
	// Line 77, Address: 0x4006e0, Func Offset: 0x80
	// Line 80, Address: 0x4006ec, Func Offset: 0x8c
	// Line 83, Address: 0x4006f4, Func Offset: 0x94
	// Line 84, Address: 0x4006f8, Func Offset: 0x98
	// Func End, Address: 0x400700, Func Offset: 0xa0
}

