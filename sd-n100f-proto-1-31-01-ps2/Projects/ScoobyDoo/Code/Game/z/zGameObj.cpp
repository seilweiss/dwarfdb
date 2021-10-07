typedef struct _RxClusterDefinition;
typedef struct _RwRaster;
typedef struct _RxOutputSpec;
typedef struct _RxPipelineNode;
typedef struct _rxHeapSuperBlockDescriptor;
typedef struct _rwResEntryTag;
typedef struct iTriggerResource;
typedef struct xTrigger;
typedef struct _RxHeap;
typedef struct _rxHeapBlockHeader;
typedef struct Vector3D;
typedef struct xMarker;
typedef struct iConditionRuntime;
typedef enum _RxClusterValidityReq;
typedef struct _rxHeapFreeBlock;
typedef struct _FCinfo;
typedef struct _RwMatrix;
typedef struct _RxPipelineNodeTopSortData;
typedef struct tagiFloorTri;
typedef struct iMarkerResource;
typedef struct xCondition;
typedef struct _RxPipelineNodeParam;
typedef struct _RxPipelineCluster;
typedef enum _rxEmbeddedPacketState;
typedef struct _RpCollSector;
typedef struct iEntryPointResource;
typedef struct _RwFrame;
typedef struct _RpMeshHeader;
typedef struct xNavPoint;
typedef struct _tagiEnvRuntime;
typedef struct tagXStreamMDSDirectory;
typedef struct _p2Geom;
typedef struct _RxPipeline;
typedef struct _RxNodeDefinition;
typedef struct xFSMData;
typedef enum _RxClusterValid;
typedef struct _RwSurfaceProperties;
typedef struct _RpWorld;
typedef struct zGameObj;
typedef struct iCameraResource;
typedef struct xCamera;
typedef struct xGameObj;
typedef struct tagP2Mesh;
typedef struct iActionRuntime;
typedef struct _RwTexDictionary;
typedef struct _RwV3d;
typedef enum _RwTextureFilterMode;
typedef struct _RpClump;
typedef struct xAction;
typedef struct tagP2VERTEX;
typedef struct _RxPipelineRequiresCluster;
typedef struct _RpMaterial;
typedef struct _RpVertexNormal;
typedef struct tagP2MeshVertex;
typedef struct xNavLink;
typedef struct p2Camera;
typedef struct _RwTexture;
typedef struct iActionResource;
typedef struct tagP2Weight;
typedef struct _rxReq;
typedef struct XStreamHeader;
typedef struct _RwObject;
typedef struct _anon0;
typedef struct _RpSector;
typedef struct xScene;
typedef struct iDisplayCamera;
typedef enum _rpWorldRenderOrder;
typedef struct _RpPolygon;
typedef struct xEntryPoint;
typedef struct _tagxEnv;
typedef struct Vector4D;
typedef struct _RxClusterRef;
typedef struct iConditionResource;
typedef struct tagiMesh;
typedef struct xRule;
typedef struct tagXStreamDirectoryEntry;
typedef struct tagiFloor;
typedef struct _RwLLLink;
typedef struct _RpWorldSector;
typedef struct _RxIoSpec;
typedef struct _RwRGBA;
typedef struct _RxNodeMethods;
typedef struct tagxPhysicsObject;
typedef struct iRuleResource;
typedef enum _RxClusterForcePresent;
typedef struct _RwBBox;
typedef struct _RxPacket;
typedef enum _RxNodeDefEditable;
typedef struct _iEntryPointRuntime;
typedef struct _RxClusterUnion;
typedef struct _RpMaterialList;
typedef struct _RxCluster;
typedef struct _RwLinkList;
typedef struct _iLightRuntime;
typedef struct _iRenderEffects;
typedef struct p2CameraVersion;
typedef struct xLight;
typedef struct _RwTexCoords;
typedef enum _RwTextureAddressMode;
typedef struct iLightResource;

typedef _RpClump*(*type_0)(_RpClump*, void*);
typedef void(*type_4)(_rwResEntryTag*);
typedef int32(*type_6)(_RxPipelineNode*, _RxPipelineNodeParam*);
typedef int32(*type_8)(_RxNodeDefinition*);
typedef void(*type_10)(_RxNodeDefinition*);
typedef int32(*type_13)(_RxPipelineNode*);
typedef void(*type_15)(_RxPipelineNode*);
typedef int32(*type_16)(_RxPipelineNode*, _RxPipeline*);
typedef uint32(*type_17)(_RxPipelineNode*, uint32, uint32, void*);
typedef _RpWorldSector*(*type_22)(_RpWorldSector*);

typedef iTriggerResource* type_1[20];
typedef iLightResource type_2[2];
typedef iTriggerResource* type_3[20];
typedef uint16 type_5[3];
typedef iTriggerResource* type_7[20];
typedef tagXStreamDirectoryEntry type_9[1000];
typedef Vector3D type_11[4];
typedef uint32 type_12[4];
typedef p2CameraVersion type_14[5];
typedef Vector3D type_18[4];
typedef uint16 type_19[3];
typedef _RxCluster type_20[1];
typedef int8 type_21[2048];
typedef iTriggerResource* type_23[20];
typedef iTriggerResource* type_24[20];
typedef uint16 type_25[3];
typedef iTriggerResource* type_26[20];
typedef int8 type_27[32];
typedef iTriggerResource* type_28[20];
typedef int8 type_29[32];
typedef iTriggerResource* type_30[20];
typedef int8 type_31[128];
typedef iTriggerResource* type_32[20];
typedef iTriggerResource* type_33[20];
typedef uint8 type_34[4];
typedef iTriggerResource* type_35[20];
typedef uint8 type_36[4];
typedef float32 type_37[3];
typedef uint8 type_38[4];
typedef iTriggerResource* type_39[20];

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

struct xTrigger
{
	iTriggerResource* m_resource;
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

struct Vector3D
{
	float32 x;
	float32 y;
	float32 z;
};

struct xMarker
{
	iMarkerResource* m_resource;
	void** m_runtime;
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

struct _FCinfo
{
	uint16 nidx[3];
};

struct _RwMatrix
{
	_RwV3d right;
	uint32 flags;
	_RwV3d up;
	uint32 pad1;
	_RwV3d at;
	uint32 pad2;
	_RwV3d pos;
	uint32 pad3;
};

struct _RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	_rxReq* req;
	void* initialisationData;
	uint32 initialisationDataSize;
};

struct tagiFloorTri
{
	uint16 m_v[3];
	uint16 m_n;
};

struct iMarkerResource
{
	Vector3D m_pos;
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

enum _rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

struct _RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
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

struct _RwFrame
{
	_RwObject object;
	_RwMatrix modelling;
	_RwMatrix ltm;
	_RwLLLink inDirtyListLink;
	_RwLinkList objectList;
	_RwFrame* child;
	_RwFrame* next;
	_RwFrame* root;
};

struct _RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
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

struct _tagiEnvRuntime
{
	_RpWorld* world;
	Vector3D world_origin;
	_RwTexDictionary* tex_dict;
};

struct tagXStreamMDSDirectory
{
	uint32 count;
	tagXStreamDirectoryEntry directory[1000];
};

struct _p2Geom
{
	uint32 m_meshCount;
	tagP2Mesh* m_mesh;
	_iRenderEffects effects;
	_RpClump* m_clump;
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

struct _RxNodeDefinition
{
	int8* name;
	_RxNodeMethods nodeMethods;
	_RxIoSpec io;
	uint32 pipelineNodePrivateDataSize;
	_RxNodeDefEditable editable;
	int32 InputPipesCnt;
};

struct xFSMData
{
	uint16 m_fsmType;
	uint16 m_fsmState;
	uint16 m_fsmNextState;
	int32 m_fsmForceChange;
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

struct zGameObj : xGameObj
{

	void render();
	void nextFrame();
	void restart();
	void kill();
	void init(int8* filename);
	void init();
	void* __dt();
	void* __ct();
};

struct iCameraResource
{
	uint16 m_plateOffset;
	uint16 m_versions;
	p2CameraVersion m_version[5];
	uint32 m_frameCount;
	p2Camera* m_cameras;
};

struct xCamera
{
	iCameraResource* m_resource;
	void** m_runtime;
};

struct xGameObj
{
	uint32 m_objFlags;
	uint32 m_objID;
	uint32 m_objType;
	xFSMData m_fsmData;
	_p2Geom m_geom;
	xGameObj* m_next;
	xGameObj* m_prev;
	tagxPhysicsObject m_phys;
};

struct tagP2Mesh
{
	int32 m_vertexCount;
	tagP2VERTEX* m_vertex;
	tagP2VERTEX* m_neutralPose0;
	tagP2MeshVertex* m_neutralPose1;
	tagP2Weight* m_joints;
	int32 m_indexCount;
	uint16* m_index;
	int32 m_visible;
	_FCinfo* fc;
	Vector3D* fnorm;
	Vector3D* m_vnorm;
	Vector4D* m_vtnorm;
	tagiMesh* m_next;
	int32 m_normalsBuilt;
};

struct iActionRuntime
{
	xAction* m_and;
};

struct _RwTexDictionary
{
	_RwObject object;
	_RwLinkList texturesInDict;
	_RwLLLink lInInstance;
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

struct _RpClump
{
	_RwObject object;
	_RwLinkList atomicList;
	_RwLLLink inWorldLink;
	_RpClump*(*callback)(_RpClump*, void*);
	uint16 renderFrame;
};

struct xAction
{
	iActionResource* m_resource;
	iActionRuntime* m_runtime;
};

struct tagP2VERTEX
{
	float32 x;
	float32 y;
	float32 z;
	float32 tu;
	float32 tv;
};

struct _RxPipelineRequiresCluster
{
	_RxClusterDefinition* clusterDef;
	_RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
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

struct tagP2MeshVertex
{
	float32 m_x;
	float32 m_y;
	float32 m_z;
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

struct iActionResource
{
	uint8 m_cmdType;
	uint8 m_cmd;
	uint16 pad;
	uint32 m_cmdParameter;
};

struct tagP2Weight
{
	uint16 m_joint0;
	uint16 m_joint1;
	float32 m_weight0;
	float32 m_weight1;
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

struct _RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct _anon0
{
};

struct _RpSector
{
	int32 type;
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

struct iDisplayCamera
{
	Vector3D m_pos;
	Vector3D m_rot;
	float32 m_fov;
};

enum _rpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
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

struct _tagxEnv
{
	_tagiEnvRuntime* m_runtime;
};

struct Vector4D
{
	float32 x;
	float32 y;
	float32 z;
	float32 t;
};

struct _RxClusterRef
{
	_RxClusterDefinition* clusterDef;
	_RxClusterForcePresent forcePresent;
	uint32 reserved;
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

struct tagiMesh
{
};

struct xRule
{
	iRuleResource* m_resource;
	void* m_runtime;
};

struct tagXStreamDirectoryEntry
{
	uint32 id;
	uint32 type;
	uint32 offset;
	uint32 length;
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

struct _RwLLLink
{
	_RwLLLink* next;
	_RwLLLink* prev;
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

struct iRuleResource
{
	uint32 m_actionCount;
	xAction* m_action;
	uint32 m_conditionCount;
	xCondition* m_condition;
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

enum _RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct _iEntryPointRuntime
{
	uint32 m_enabled;
};

struct _RxClusterUnion
{
	union
	{
		_RxClusterDefinition* clusterDef;
		_RxPipelineCluster* clusterRef;
	};
};

struct _RpMaterialList
{
	_RpMaterial** materials;
	int32 numMaterials;
	int32 space;
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

struct _iRenderEffects
{
	uint32 flags;
	uint8 colorA[4];
	uint8 colorB[4];
	uint8 litcolor[4];
	int8 abr;
	int8 abrB;
	uint8 fadetime;
	uint8 fadectr;
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

enum _RwTextureAddressMode
{
	rwTEXTUREADDRESSNATEXTUREADDRESS,
	rwTEXTUREADDRESSWRAP,
	rwTEXTUREADDRESSMIRROR,
	rwTEXTUREADDRESSCLAMP,
	rwTEXTUREADDRESSBORDER,
	rwTEXTUREADDRESSMODEFORCEENUMSIZEINT = 0x7fffffff
};

struct iLightResource
{
	uint32 m_type;
	Vector3D m_pos;
	Vector3D m_rot;
	Vector3D m_color;
	int32 m_fov;
};

_anon0 __vt__8zGameObj;
int8 vAssertBuf2[128];
XStreamHeader currentHeader;
float32 g_RADTODEG;
xScene* xScene_current;

void render();
void nextFrame();
void restart();
void kill();
void init(int8* filename);
void init();
void* __dt();
void* __ct();

// render__8zGameObjFv
// Start address: 0x404a90
void zGameObj::render()
{
	// Line 112, Address: 0x404a90, Func Offset: 0
	// Line 113, Address: 0x404aa0, Func Offset: 0x10
	// Line 114, Address: 0x404b44, Func Offset: 0xb4
	// Line 115, Address: 0x404b50, Func Offset: 0xc0
	// Func End, Address: 0x404b64, Func Offset: 0xd4
}

// nextFrame__8zGameObjFv
// Start address: 0x404b70
void zGameObj::nextFrame()
{
	_RwV3d p;
	Vector3D* pos;
	_RwMatrix* m;
	_RwFrame* f;
	_RwV3d up;
	// Line 89, Address: 0x404b70, Func Offset: 0
	// Line 91, Address: 0x404b88, Func Offset: 0x18
	// Line 92, Address: 0x404ba4, Func Offset: 0x34
	// Line 93, Address: 0x404bb4, Func Offset: 0x44
	// Line 97, Address: 0x404bc4, Func Offset: 0x54
	// Line 98, Address: 0x404bcc, Func Offset: 0x5c
	// Line 99, Address: 0x404bd4, Func Offset: 0x64
	// Line 102, Address: 0x404bdc, Func Offset: 0x6c
	// Line 103, Address: 0x404c04, Func Offset: 0x94
	// Line 104, Address: 0x404c18, Func Offset: 0xa8
	// Line 105, Address: 0x404c24, Func Offset: 0xb4
	// Line 107, Address: 0x404c30, Func Offset: 0xc0
	// Func End, Address: 0x404c4c, Func Offset: 0xdc
}

// restart__8zGameObjFv
// Start address: 0x404c50
void zGameObj::restart()
{
	// Line 85, Address: 0x404c50, Func Offset: 0
	// Func End, Address: 0x404c58, Func Offset: 0x8
}

// kill__8zGameObjFv
// Start address: 0x404c60
void zGameObj::kill()
{
	// Line 78, Address: 0x404c60, Func Offset: 0
	// Func End, Address: 0x404c68, Func Offset: 0x8
}

// init__8zGameObjFPc
// Start address: 0x404c70
void zGameObj::init(int8* filename)
{
	// Line 65, Address: 0x404c70, Func Offset: 0
	// Line 67, Address: 0x404c80, Func Offset: 0x10
	// Line 69, Address: 0x404c90, Func Offset: 0x20
	// Line 70, Address: 0x404ca4, Func Offset: 0x34
	// Func End, Address: 0x404cb8, Func Offset: 0x48
}

// init__8zGameObjFv
// Start address: 0x404cc0
void zGameObj::init()
{
	// Line 37, Address: 0x404cc0, Func Offset: 0
	// Line 38, Address: 0x404cd0, Func Offset: 0x10
	// Line 42, Address: 0x404d74, Func Offset: 0xb4
	// Line 44, Address: 0x404d80, Func Offset: 0xc0
	// Line 45, Address: 0x404d90, Func Offset: 0xd0
	// Line 46, Address: 0x404da0, Func Offset: 0xe0
	// Line 47, Address: 0x404db0, Func Offset: 0xf0
	// Line 48, Address: 0x404db4, Func Offset: 0xf4
	// Line 49, Address: 0x404db8, Func Offset: 0xf8
	// Line 50, Address: 0x404dbc, Func Offset: 0xfc
	// Func End, Address: 0x404dd0, Func Offset: 0x110
}

// __dt__8zGameObjFv
// Start address: 0x404dd0
void* zGameObj::__dt()
{
	// Line 31, Address: 0x404dd0, Func Offset: 0
	// Line 32, Address: 0x404e14, Func Offset: 0x44
	// Func End, Address: 0x404e28, Func Offset: 0x58
}

// __ct__8zGameObjFv
// Start address: 0x404e30
void* zGameObj::__ct()
{
	// Line 26, Address: 0x404e30, Func Offset: 0
	// Line 27, Address: 0x404e58, Func Offset: 0x28
	// Func End, Address: 0x404e70, Func Offset: 0x40
}

