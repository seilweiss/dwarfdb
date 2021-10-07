typedef struct _rxHeapSuperBlockDescriptor;
typedef struct _rwResEntryTag;
typedef struct iObjRuntime;
typedef struct tagP2Weight;
typedef struct xScene;
typedef struct _RxHeap;
typedef struct _rxHeapBlockHeader;
typedef struct _RwLLLink;
typedef struct iTriggerResource;
typedef enum _RxClusterValidityReq;
typedef struct _rxHeapFreeBlock;
typedef struct _RxPipelineNodeTopSortData;
typedef struct _p2Geom;
typedef struct _RpMaterialList;
typedef struct xCamera;
typedef struct _RxPipelineNode;
typedef struct _RxClusterDefinition;
typedef struct _iEntryPointRuntime;
typedef struct _FCinfo;
typedef enum _RwTextureFilterMode;
typedef struct _RpMaterial;
typedef struct _RxPipelineNodeParam;
typedef struct xLight;
typedef struct _RxPipelineCluster;
typedef struct _RpWorldSector;
typedef enum _rxEmbeddedPacketState;
typedef struct iRuleResource;
typedef struct _RpClump;
typedef struct Vector3D;
typedef struct tagP2VERTEX;
typedef struct p2Camera;
typedef struct iLightResource;
typedef struct tagiFloor;
typedef struct _RxNodeDefinition;
typedef struct _iLightRuntime;
typedef enum _RxClusterValid;
typedef struct _RpPolygon;
typedef struct Vector4D;
typedef struct _RwSurfaceProperties;
typedef struct _RxPipeline;
typedef struct _xObj;
typedef struct xAction;
typedef struct _RwV3d;
typedef struct xTrigger;
typedef struct XStreamHeader;
typedef struct tagiMesh;
typedef struct _RpVertexNormal;
typedef struct _RwTexCoords;
typedef struct iMarkerResource;
typedef struct _RwRGBA;
typedef struct xMarker;
typedef struct xCondition;
typedef struct _RxPipelineRequiresCluster;
typedef struct p2CameraVersion;
typedef struct _RwTexDictionary;
typedef struct tagP2MeshVertex;
typedef struct _rxReq;
typedef struct _tagiEnvRuntime;
typedef struct tagXStreamDirectoryEntry;
typedef struct tagxPhysicsObject;
typedef struct _RwObject;
typedef struct _RpCollSector;
typedef struct _RpWorld;
typedef struct iConditionRuntime;
typedef struct _RpMeshHeader;
typedef struct tagiFloorTri;
typedef struct iCameraResource;
typedef struct xNavLink;
typedef struct _RxOutputSpec;
typedef struct _RwTexture;
typedef struct _RwBBox;
typedef struct _RxClusterRef;
typedef struct _iRenderEffects;
typedef struct _RwRaster;
typedef struct iEntryPointResource;
typedef struct _RxIoSpec;
typedef struct iActionRuntime;
typedef struct xNavPoint;
typedef struct _RxNodeMethods;
typedef enum _RxClusterForcePresent;
typedef struct _RpSector;
typedef struct _RxPacket;
typedef struct xEntryPoint;
typedef struct iActionResource;
typedef struct _tagxEnv;
typedef enum _rpWorldRenderOrder;
typedef enum _RxNodeDefEditable;
typedef struct _RxClusterUnion;
typedef struct iDisplayCamera;
typedef enum _RwTextureAddressMode;
typedef struct _RxCluster;
typedef struct _RwLinkList;
typedef struct tagP2Mesh;
typedef struct iConditionResource;
typedef struct xRule;
typedef struct tagXStreamMDSDirectory;

typedef void(*type_3)(_rwResEntryTag*);
typedef int32(*type_5)(_RxPipelineNode*, _RxPipelineNodeParam*);
typedef _RpWorldSector*(*type_7)(_RpWorldSector*);
typedef int32(*type_8)(_RxNodeDefinition*);
typedef void(*type_10)(_RxNodeDefinition*);
typedef _RpClump*(*type_11)(_RpClump*, void*);
typedef int32(*type_14)(_RxPipelineNode*);
typedef void(*type_16)(_RxPipelineNode*);
typedef int32(*type_19)(_RxPipelineNode*, _RxPipeline*);
typedef uint32(*type_22)(_RxPipelineNode*, uint32, uint32, void*);

typedef uint16 type_0[3];
typedef tagXStreamDirectoryEntry type_1[1000];
typedef iTriggerResource* type_2[20];
typedef iTriggerResource* type_4[20];
typedef iTriggerResource* type_6[20];
typedef iTriggerResource* type_9[20];
typedef iTriggerResource* type_12[20];
typedef uint32 type_13[4];
typedef iTriggerResource* type_15[20];
typedef float32 type_17[3];
typedef iTriggerResource* type_18[20];
typedef int8 type_20[2048];
typedef iLightResource type_21[2];
typedef _RxCluster type_23[1];
typedef uint8 type_24[4];
typedef uint8 type_25[4];
typedef int8 type_26[32];
typedef uint8 type_27[4];
typedef int8 type_28[32];
typedef float32 type_29[16];
typedef p2CameraVersion type_30[5];
typedef Vector3D type_31[4];
typedef int8 type_32[128];
typedef uint16 type_33[3];
typedef uint16 type_34[3];
typedef iTriggerResource* type_35[20];
typedef iTriggerResource* type_36[20];
typedef Vector3D type_37[4];
typedef iTriggerResource* type_38[20];
typedef iTriggerResource* type_39[20];
typedef iTriggerResource* type_40[20];

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

struct iObjRuntime
{
	int16 m_flag;
	int16 m_pad;
	_p2Geom* m_geom;
	float32 m_bradius;
	tagxPhysicsObject m_phys;
};

struct tagP2Weight
{
	uint16 m_joint0;
	uint16 m_joint1;
	float32 m_weight0;
	float32 m_weight1;
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

struct _RwLLLink
{
	_RwLLLink* next;
	_RwLLLink* prev;
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

struct _RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	_rxReq* req;
	void* initialisationData;
	uint32 initialisationDataSize;
};

struct _p2Geom
{
	uint32 m_meshCount;
	tagP2Mesh* m_mesh;
	_iRenderEffects effects;
	_RpClump* m_clump;
};

struct _RpMaterialList
{
	_RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct xCamera
{
	iCameraResource* m_resource;
	void** m_runtime;
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

struct _iEntryPointRuntime
{
	uint32 m_enabled;
};

struct _FCinfo
{
	uint16 nidx[3];
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

struct _RpMaterial
{
	_RwTexture* texture;
	_RwRGBA color;
	_RxPipeline* pipeline;
	_RwSurfaceProperties surfaceProps;
	int16 refCount;
	int16 pad;
};

struct _RxPipelineNodeParam
{
	void* dataParam;
	_RxHeap* heap;
};

struct xLight
{
	iLightResource* m_resource;
	_iLightRuntime* m_runtime;
};

struct _RxPipelineCluster
{
	_RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
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

struct _RpClump
{
	_RwObject object;
	_RwLinkList atomicList;
	_RwLLLink inWorldLink;
	_RpClump*(*callback)(_RpClump*, void*);
	uint16 renderFrame;
};

struct Vector3D
{
	float32 x;
	float32 y;
	float32 z;
};

struct tagP2VERTEX
{
	float32 x;
	float32 y;
	float32 z;
	float32 tu;
	float32 tv;
};

struct p2Camera
{
	Vector3D m_pos;
	Vector3D m_rot;
	float32 m_fov;
};

struct iLightResource
{
	uint32 m_type;
	Vector3D m_pos;
	Vector3D m_rot;
	Vector3D m_color;
	int32 m_fov;
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

struct _RxNodeDefinition
{
	int8* name;
	_RxNodeMethods nodeMethods;
	_RxIoSpec io;
	uint32 pipelineNodePrivateDataSize;
	_RxNodeDefEditable editable;
	int32 InputPipesCnt;
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

enum _RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct _RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
};

struct Vector4D
{
	float32 x;
	float32 y;
	float32 z;
	float32 t;
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

struct _xObj
{
	void* m_resource;
	iObjRuntime* m_runtime;
	uint32 m_modelID;
	void* m_texture;
	int16 m_objType;
	int16 m_objID;
};

struct xAction
{
	iActionResource* m_resource;
	iActionRuntime* m_runtime;
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

struct tagiMesh
{
};

struct _RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

struct _RwTexCoords
{
	float32 u;
	float32 v;
};

struct iMarkerResource
{
	Vector3D m_pos;
};

struct _RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
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

struct _RxPipelineRequiresCluster
{
	_RxClusterDefinition* clusterDef;
	_RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
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

struct _RwTexDictionary
{
	_RwObject object;
	_RwLinkList texturesInDict;
	_RwLLLink lInInstance;
};

struct tagP2MeshVertex
{
	float32 m_x;
	float32 m_y;
	float32 m_z;
};

struct _rxReq
{
};

struct _tagiEnvRuntime
{
	_RpWorld* world;
	Vector3D world_origin;
	_RwTexDictionary* tex_dict;
};

struct tagXStreamDirectoryEntry
{
	uint32 id;
	uint32 type;
	uint32 offset;
	uint32 length;
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

struct _RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct _RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
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

struct iConditionRuntime
{
	xCondition* m_operand;
	uint16 m_match;
	uint16 m_trigger;
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

struct iCameraResource
{
	uint16 m_plateOffset;
	uint16 m_versions;
	p2CameraVersion m_version[5];
	uint32 m_frameCount;
	p2Camera* m_cameras;
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

struct _RxOutputSpec
{
	int8* name;
	_RxClusterValid* outputClusters;
	_RxClusterValid allOtherClusters;
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

struct _RxIoSpec
{
	uint32 numClustersOfInterest;
	_RxClusterRef* clustersOfInterest;
	_RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	_RxOutputSpec* outputs;
};

struct iActionRuntime
{
	xAction* m_and;
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

struct _RpSector
{
	int32 type;
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

struct xEntryPoint
{
	iEntryPointResource* m_resource;
	_iEntryPointRuntime* m_runtime;
};

struct iActionResource
{
	uint8 m_cmdType;
	uint8 m_cmd;
	uint16 pad;
	uint32 m_cmdParameter;
};

struct _tagxEnv
{
	_tagiEnvRuntime* m_runtime;
};

enum _rpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
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

struct tagXStreamMDSDirectory
{
	uint32 count;
	tagXStreamDirectoryEntry directory[1000];
};

float32 gObjShadowHeight;
int32 gObjHackRenderTranslucent;
int8 vAssertBuf2[128];
XStreamHeader currentHeader;
xScene* xScene_current;

void iObjDraw(_xObj* obj);
void iObjInitialize(_xObj* a);

// iObjDraw__FP5_xObj
// Start address: 0x380e90
void iObjDraw(_xObj* obj)
{
	tagxPhysicsObject* p;
	float32* fp;
	float32 m[16];
	iObjRuntime* r;
	Vector3D pos;
	// Line 73, Address: 0x380e90, Func Offset: 0
	// Line 79, Address: 0x380ea8, Func Offset: 0x18
	// Line 83, Address: 0x380eac, Func Offset: 0x1c
	// Line 87, Address: 0x380eb4, Func Offset: 0x24
	// Line 91, Address: 0x380eb8, Func Offset: 0x28
	// Line 92, Address: 0x380ec0, Func Offset: 0x30
	// Line 94, Address: 0x380ec8, Func Offset: 0x38
	// Line 96, Address: 0x380ed8, Func Offset: 0x48
	// Line 101, Address: 0x380efc, Func Offset: 0x6c
	// Line 102, Address: 0x380f0c, Func Offset: 0x7c
	// Line 104, Address: 0x380f14, Func Offset: 0x84
	// Line 106, Address: 0x380f1c, Func Offset: 0x8c
	// Line 108, Address: 0x380f34, Func Offset: 0xa4
	// Line 110, Address: 0x380f40, Func Offset: 0xb0
	// Line 111, Address: 0x380f50, Func Offset: 0xc0
	// Line 114, Address: 0x380f84, Func Offset: 0xf4
	// Line 115, Address: 0x380f90, Func Offset: 0x100
	// Line 116, Address: 0x380fa0, Func Offset: 0x110
	// Line 117, Address: 0x380fb0, Func Offset: 0x120
	// Line 119, Address: 0x380fc0, Func Offset: 0x130
	// Line 121, Address: 0x380fc4, Func Offset: 0x134
	// Line 122, Address: 0x380fcc, Func Offset: 0x13c
	// Line 123, Address: 0x380fd4, Func Offset: 0x144
	// Line 125, Address: 0x380fdc, Func Offset: 0x14c
	// Line 132, Address: 0x380fe8, Func Offset: 0x158
	// Line 135, Address: 0x38103c, Func Offset: 0x1ac
	// Line 136, Address: 0x381044, Func Offset: 0x1b4
	// Line 138, Address: 0x38104c, Func Offset: 0x1bc
	// Line 139, Address: 0x381054, Func Offset: 0x1c4
	// Line 141, Address: 0x38105c, Func Offset: 0x1cc
	// Line 142, Address: 0x381064, Func Offset: 0x1d4
	// Line 144, Address: 0x38106c, Func Offset: 0x1dc
	// Line 145, Address: 0x381074, Func Offset: 0x1e4
	// Line 147, Address: 0x38107c, Func Offset: 0x1ec
	// Line 148, Address: 0x381084, Func Offset: 0x1f4
	// Line 150, Address: 0x38108c, Func Offset: 0x1fc
	// Line 151, Address: 0x381094, Func Offset: 0x204
	// Line 153, Address: 0x38109c, Func Offset: 0x20c
	// Line 157, Address: 0x3810a0, Func Offset: 0x210
	// Line 158, Address: 0x381140, Func Offset: 0x2b0
	// Line 159, Address: 0x3811e4, Func Offset: 0x354
	// Line 160, Address: 0x38128c, Func Offset: 0x3fc
	// Line 161, Address: 0x381330, Func Offset: 0x4a0
	// Line 167, Address: 0x38135c, Func Offset: 0x4cc
	// Line 168, Address: 0x381368, Func Offset: 0x4d8
	// Line 169, Address: 0x381378, Func Offset: 0x4e8
	// Line 170, Address: 0x381388, Func Offset: 0x4f8
	// Line 171, Address: 0x381398, Func Offset: 0x508
	// Line 172, Address: 0x3813c4, Func Offset: 0x534
	// Line 174, Address: 0x3813c8, Func Offset: 0x538
	// Line 175, Address: 0x3813d0, Func Offset: 0x540
	// Line 176, Address: 0x3813d8, Func Offset: 0x548
	// Line 178, Address: 0x3813e0, Func Offset: 0x550
	// Line 183, Address: 0x3813ec, Func Offset: 0x55c
	// Line 184, Address: 0x3813f8, Func Offset: 0x568
	// Line 186, Address: 0x381414, Func Offset: 0x584
	// Func End, Address: 0x381430, Func Offset: 0x5a0
}

// iObjInitialize__FP5_xObj
// Start address: 0x381430
void iObjInitialize(_xObj* a)
{
	iObjRuntime* r;
	// Line 44, Address: 0x381430, Func Offset: 0
	// Line 46, Address: 0x38143c, Func Offset: 0xc
	// Line 48, Address: 0x381440, Func Offset: 0x10
	// Line 50, Address: 0x38144c, Func Offset: 0x1c
	// Line 52, Address: 0x381458, Func Offset: 0x28
	// Line 56, Address: 0x381460, Func Offset: 0x30
	// Func End, Address: 0x381474, Func Offset: 0x44
}

