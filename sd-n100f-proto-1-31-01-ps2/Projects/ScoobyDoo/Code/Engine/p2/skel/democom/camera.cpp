typedef struct _RpMeshHeader;
typedef struct iTriggerResource;
typedef struct _RwRaster;
typedef struct _RxClusterDefinition;
typedef struct xAction;
typedef struct _RxPipeline;
typedef struct xEntryPoint;
typedef struct _RwV3d;
typedef struct _RwFrame;
typedef struct _RwMatrix;
typedef struct _RxOutputSpec;
typedef struct iEntryPointResource;
typedef struct iMarkerResource;
typedef struct Camera;
typedef struct _iEntryPointRuntime;
typedef struct _iLightRuntime;
typedef struct xScene;
typedef struct _RwCamera;
typedef struct _RxPipelineCluster;
typedef struct xCondition;
typedef struct _RxClusterRef;
typedef struct _RwTexture;
typedef struct p2CameraVersion;
typedef enum _RxClusterValid;
typedef struct _rxHeapFreeBlock;
typedef struct _RwBBox;
typedef struct _RwLLLink;
typedef struct xNavLink;
typedef struct xCamera;
typedef struct _RpVertexNormal;
typedef struct _RxIoSpec;
typedef struct _RwTexDictionary;
typedef struct _RpMaterial;
typedef struct xLight;
typedef struct _RxPipelineNode;
typedef struct iLightResource;
typedef struct _tagiEnvRuntime;
typedef struct _RwRGBA;
typedef struct _rxHeapSuperBlockDescriptor;
typedef enum _RwVideoModeFlag;
typedef struct _RxNodeDefinition;
typedef struct _RpWorld;
typedef struct Vector3D;
typedef struct _RxNodeMethods;
typedef struct iConditionRuntime;
typedef enum _RxClusterForcePresent;
typedef struct _RpSector;
typedef struct xTrigger;
typedef struct _RxHeap;
typedef struct _RwFrustumPlane;
typedef struct tagiFloorTri;
typedef struct _RxPacket;
typedef enum _rpWorldRenderOrder;
typedef struct _RxPipelineRequiresCluster;
typedef enum _RxNodeDefEditable;
typedef struct xMarker;
typedef struct _rxHeapBlockHeader;
typedef struct xNavPoint;
typedef struct _RpPolygon;
typedef struct _RxClusterUnion;
typedef struct _RxPipelineNodeTopSortData;
typedef struct _RwRect;
typedef enum _RwTextureAddressMode;
typedef struct iCameraResource;
typedef struct _RxCluster;
typedef struct iActionRuntime;
typedef struct _RwPlane;
typedef struct _RwLinkList;
typedef struct _RwVideoMode;
typedef struct _RpWorldSector;
typedef struct _rxReq;
typedef struct _RwTexCoords;
typedef struct p2Camera;
typedef struct iActionResource;
typedef struct _tagxEnv;
typedef struct _RpCollSector;
typedef enum _RxClusterValidityReq;
typedef struct _rwResEntryTag;
typedef struct iDisplayCamera;
typedef struct _RpMaterialList;
typedef struct _RwV2d;
typedef struct iConditionResource;
typedef struct _RxPipelineNodeParam;
typedef enum _RwTextureFilterMode;
typedef enum _rxEmbeddedPacketState;
typedef struct xRule;
typedef struct _RwSurfaceProperties;
typedef struct tagiFloor;
typedef enum _RwCameraProjection;
typedef struct iRuleResource;
typedef struct _RwObjectHasFrame;
typedef struct tagCollideInfo;
typedef struct _RwObject;

typedef uint32(*type_1)(_RxPipelineNode*, uint32, uint32, void*);
typedef int32(*type_3)(_RxPipelineNode*, _RxPipelineNodeParam*);
typedef int32(*type_4)(_RxNodeDefinition*);
typedef void(*type_6)(_RxNodeDefinition*);
typedef int32(*type_8)(_RxPipelineNode*);
typedef _RwCamera*(*type_11)(_RwCamera*);
typedef void(*type_12)(_RxPipelineNode*);
typedef int32(*type_13)(_RxPipelineNode*, _RxPipeline*);
typedef _RwCamera*(*type_16)(_RwCamera*);
typedef _RpWorldSector*(*type_25)(_RpWorldSector*);
typedef void(*type_28)(_rwResEntryTag*);
typedef _RwObjectHasFrame*(*type_35)(_RwObjectHasFrame*);

typedef iTriggerResource* type_0[20];
typedef iTriggerResource* type_2[20];
typedef iTriggerResource* type_5[20];
typedef _RxCluster type_7[1];
typedef float32 type_9[3];
typedef iTriggerResource* type_10[20];
typedef iTriggerResource* type_14[20];
typedef int8 type_15[32];
typedef int8 type_17[32];
typedef iLightResource type_18[2];
typedef iTriggerResource* type_19[20];
typedef iTriggerResource* type_20[20];
typedef iTriggerResource* type_21[20];
typedef float32 type_22[10];
typedef uint16 type_23[3];
typedef iTriggerResource* type_24[20];
typedef Vector3D type_26[4];
typedef p2CameraVersion type_27[5];
typedef Vector3D type_29[4];
typedef _RwFrustumPlane type_30[6];
typedef _RwV3d type_31[8];
typedef uint16 type_32[3];
typedef uint32 type_33[4];
typedef iTriggerResource* type_34[20];
typedef iTriggerResource* type_36[20];
typedef iTriggerResource* type_37[20];

struct _RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
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

struct _RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct xAction
{
	iActionResource* m_resource;
	iActionRuntime* m_runtime;
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

struct _RxOutputSpec
{
	int8* name;
	_RxClusterValid* outputClusters;
	_RxClusterValid allOtherClusters;
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

struct iMarkerResource
{
	Vector3D m_pos;
};

struct Camera
{
	_RwCamera* camera;
	int32 m_Preset;
	float32 m_TetherLength;
	float32 m_TetherHeightPerc;

	void AdjustHeight(float32 adjust);
	void AdjustTether(float32 adjust);
	void NextPresetPos();
	void* __ct(int32 width, int32 height, int32 zBuffer);
	void* __dt();
	void SetTarget(_RwV3d* dp, _RwV3d* target_vec);
	void CameraPan(_RwV3d* pos, float32 angle);
	void CameraTilt(_RwV3d* pos, float32 angle);
	void CameraMove(_RwV3d* v);
	void CameraSize(_RwRect* rect, float32 viewWindow, float32 aspectRatio);
};

struct _iEntryPointRuntime
{
	uint32 m_enabled;
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

struct _RwCamera
{
	_RwObjectHasFrame object;
	_RwCameraProjection projectionType;
	_RwCamera*(*beginUpdate)(_RwCamera*);
	_RwCamera*(*endUpdate)(_RwCamera*);
	_RwMatrix viewMatrix;
	_RwRaster* frameBuffer;
	_RwRaster* zBuffer;
	_RwV2d viewWindow;
	_RwV2d recipViewWindow;
	_RwV2d viewOffset;
	float32 nearPlane;
	float32 farPlane;
	float32 fogPlane;
	float32 zScale;
	float32 zShift;
	uint16 renderFrame;
	_RwFrustumPlane frustumPlanes[6];
	_RwBBox frustumBoundBox;
	_RwV3d frustumCorners[8];
};

struct _RxPipelineCluster
{
	_RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

struct xCondition
{
	iConditionResource* m_resource;
	iConditionRuntime* m_runtime;
};

struct _RxClusterRef
{
	_RxClusterDefinition* clusterDef;
	_RxClusterForcePresent forcePresent;
	uint32 reserved;
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

enum _RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct _rxHeapFreeBlock
{
	uint32 size;
	_rxHeapBlockHeader* ptr;
};

struct _RwBBox
{
	_RwV3d sup;
	_RwV3d inf;
};

struct _RwLLLink
{
	_RwLLLink* next;
	_RwLLLink* prev;
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

struct _RxIoSpec
{
	uint32 numClustersOfInterest;
	_RxClusterRef* clustersOfInterest;
	_RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	_RxOutputSpec* outputs;
};

struct _RwTexDictionary
{
	_RwObject object;
	_RwLinkList texturesInDict;
	_RwLLLink lInInstance;
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

struct xLight
{
	iLightResource* m_resource;
	_iLightRuntime* m_runtime;
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

struct iLightResource
{
	uint32 m_type;
	Vector3D m_pos;
	Vector3D m_rot;
	Vector3D m_color;
	int32 m_fov;
};

struct _tagiEnvRuntime
{
	_RpWorld* world;
	Vector3D world_origin;
	_RwTexDictionary* tex_dict;
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

enum _RwVideoModeFlag
{
	rwVIDEOMODEEXCLUSIVE = 0x1,
	rwVIDEOMODEINTERLACE,
	rwVIDEOMODEFFINTERLACE = 0x4,
	rwVIDEOMODEFSAA0 = 0x8,
	rwVIDEOMODEFSAA1 = 0x10,
	rwVIDEOMODEforceEnumSize = 0x7fffffff,
	rwVIDEOMODEFLAGFORCEENUMSIZEINT = 0x7fffffff
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

struct Vector3D
{
	float32 x;
	float32 y;
	float32 z;
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

struct iConditionRuntime
{
	xCondition* m_operand;
	uint16 m_match;
	uint16 m_trigger;
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

struct _RwFrustumPlane
{
	_RwPlane plane;
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
};

struct tagiFloorTri
{
	uint16 m_v[3];
	uint16 m_n;
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

enum _rpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct _RxPipelineRequiresCluster
{
	_RxClusterDefinition* clusterDef;
	_RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

enum _RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct xMarker
{
	iMarkerResource* m_resource;
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

struct _RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
};

struct _RxClusterUnion
{
	union
	{
		_RxClusterDefinition* clusterDef;
		_RxPipelineCluster* clusterRef;
	};
};

struct _RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	_rxReq* req;
	void* initialisationData;
	uint32 initialisationDataSize;
};

struct _RwRect
{
	int32 x;
	int32 y;
	int32 w;
	int32 h;
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

struct iCameraResource
{
	uint16 m_plateOffset;
	uint16 m_versions;
	p2CameraVersion m_version[5];
	uint32 m_frameCount;
	p2Camera* m_cameras;
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

struct iActionRuntime
{
	xAction* m_and;
};

struct _RwPlane
{
	_RwV3d normal;
	float32 distance;
};

struct _RwLinkList
{
	_RwLLLink link;
};

struct _RwVideoMode
{
	int32 width;
	int32 height;
	int32 depth;
	_RwVideoModeFlag flags;
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

struct _rxReq
{
};

struct _RwTexCoords
{
	float32 u;
	float32 v;
};

struct p2Camera
{
	Vector3D m_pos;
	Vector3D m_rot;
	float32 m_fov;
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

struct _RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
};

enum _RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct _rwResEntryTag
{
	_RwLLLink link;
	int32 size;
	void* owner;
	_rwResEntryTag** ownerRef;
	void(*destroyNotify)(_rwResEntryTag*);
};

struct iDisplayCamera
{
	Vector3D m_pos;
	Vector3D m_rot;
	float32 m_fov;
};

struct _RpMaterialList
{
	_RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct _RwV2d
{
	float32 x;
	float32 y;
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

struct _RxPipelineNodeParam
{
	void* dataParam;
	_RxHeap* heap;
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

enum _rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

struct xRule
{
	iRuleResource* m_resource;
	void* m_runtime;
};

struct _RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
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

enum _RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
};

struct iRuleResource
{
	uint32 m_actionCount;
	xAction* m_action;
	uint32 m_conditionCount;
	xCondition* m_condition;
};

struct _RwObjectHasFrame
{
	_RwObject object;
	_RwLLLink lFrame;
	_RwObjectHasFrame*(*sync)(_RwObjectHasFrame*);
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

struct _RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

Camera* g_GlobalCamera;
xScene* xScene_current;

void AdjustHeight(float32 adjust);
void AdjustTether(float32 adjust);
void NextPresetPos();
void* __ct(int32 width, int32 height, int32 zBuffer);
void* __dt();
void SetTarget(_RwV3d* dp, _RwV3d* target_vec);
void CameraPan(_RwV3d* pos, float32 angle);
void CameraTilt(_RwV3d* pos, float32 angle);
void CameraMove(_RwV3d* v);
void CameraSize(_RwRect* rect, float32 viewWindow, float32 aspectRatio);
void MatrixLookAt(_RwMatrix* view, _RwV3d* tp);

// AdjustHeight__6CameraFf
// Start address: 0x2071b0
void Camera::AdjustHeight(float32 adjust)
{
	// Line 684, Address: 0x2071b0, Func Offset: 0
	// Line 685, Address: 0x2071cc, Func Offset: 0x1c
	// Line 686, Address: 0x2071e8, Func Offset: 0x38
	// Line 687, Address: 0x207204, Func Offset: 0x54
	// Line 689, Address: 0x207220, Func Offset: 0x70
	// Line 691, Address: 0x207228, Func Offset: 0x78
	// Line 693, Address: 0x207248, Func Offset: 0x98
	// Line 694, Address: 0x207268, Func Offset: 0xb8
	// Line 695, Address: 0x20727c, Func Offset: 0xcc
	// Line 696, Address: 0x20729c, Func Offset: 0xec
	// Line 698, Address: 0x2072a4, Func Offset: 0xf4
	// Func End, Address: 0x2072ac, Func Offset: 0xfc
}

// AdjustTether__6CameraFf
// Start address: 0x2072b0
void Camera::AdjustTether(float32 adjust)
{
	// Line 666, Address: 0x2072b0, Func Offset: 0
	// Line 667, Address: 0x2072cc, Func Offset: 0x1c
	// Line 668, Address: 0x2072e8, Func Offset: 0x38
	// Line 669, Address: 0x207304, Func Offset: 0x54
	// Line 671, Address: 0x207320, Func Offset: 0x70
	// Line 673, Address: 0x207328, Func Offset: 0x78
	// Line 676, Address: 0x207344, Func Offset: 0x94
	// Line 677, Address: 0x207360, Func Offset: 0xb0
	// Line 678, Address: 0x207370, Func Offset: 0xc0
	// Line 679, Address: 0x207390, Func Offset: 0xe0
	// Line 680, Address: 0x207398, Func Offset: 0xe8
	// Func End, Address: 0x2073a0, Func Offset: 0xf0
}

// NextPresetPos__6CameraFv
// Start address: 0x2073a0
void Camera::NextPresetPos()
{
	// Line 656, Address: 0x2073a0, Func Offset: 0
	// Line 657, Address: 0x2073ac, Func Offset: 0xc
	// Line 658, Address: 0x2073bc, Func Offset: 0x1c
	// Line 659, Address: 0x2073c8, Func Offset: 0x28
	// Line 660, Address: 0x2073d4, Func Offset: 0x34
	// Line 661, Address: 0x2073d8, Func Offset: 0x38
	// Func End, Address: 0x2073e0, Func Offset: 0x40
}

// __ct__6CameraFiii
// Start address: 0x2073e0
void* Camera::__ct(int32 width, int32 height, int32 zBuffer)
{
	_RwRect rect;
	// Line 561, Address: 0x2073e0, Func Offset: 0
	// Line 564, Address: 0x20740c, Func Offset: 0x2c
	// Line 565, Address: 0x207410, Func Offset: 0x30
	// Line 566, Address: 0x207414, Func Offset: 0x34
	// Line 567, Address: 0x207418, Func Offset: 0x38
	// Line 569, Address: 0x20741c, Func Offset: 0x3c
	// Line 570, Address: 0x207424, Func Offset: 0x44
	// Line 573, Address: 0x20742c, Func Offset: 0x4c
	// Line 575, Address: 0x207438, Func Offset: 0x58
	// Line 577, Address: 0x207444, Func Offset: 0x64
	// Line 578, Address: 0x20745c, Func Offset: 0x7c
	// Line 581, Address: 0x207484, Func Offset: 0xa4
	// Line 585, Address: 0x2074c0, Func Offset: 0xe0
	// Line 587, Address: 0x2074c8, Func Offset: 0xe8
	// Line 591, Address: 0x2074f0, Func Offset: 0x110
	// Line 598, Address: 0x20752c, Func Offset: 0x14c
	// Line 608, Address: 0x2075b0, Func Offset: 0x1d0
	// Line 609, Address: 0x2075b4, Func Offset: 0x1d4
	// Line 611, Address: 0x2075ec, Func Offset: 0x20c
	// Line 613, Address: 0x2075f0, Func Offset: 0x210
	// Line 617, Address: 0x2075fc, Func Offset: 0x21c
	// Func End, Address: 0x207624, Func Offset: 0x244
}

// __dt__6CameraFv
// Start address: 0x207630
void* Camera::__dt()
{
	_RwRaster* parentRaster;
	_RwRaster* parentRaster;
	_RwFrame* frame;
	_RwRaster* raster;
	// Line 502, Address: 0x207630, Func Offset: 0
	// Line 504, Address: 0x20765c, Func Offset: 0x2c
	// Line 511, Address: 0x207668, Func Offset: 0x38
	// Line 512, Address: 0x207678, Func Offset: 0x48
	// Line 514, Address: 0x207688, Func Offset: 0x58
	// Line 515, Address: 0x207698, Func Offset: 0x68
	// Line 520, Address: 0x2076a0, Func Offset: 0x70
	// Line 522, Address: 0x2076b0, Func Offset: 0x80
	// Line 524, Address: 0x2076bc, Func Offset: 0x8c
	// Line 526, Address: 0x2076cc, Func Offset: 0x9c
	// Line 530, Address: 0x2076d8, Func Offset: 0xa8
	// Line 531, Address: 0x2076e8, Func Offset: 0xb8
	// Line 536, Address: 0x2076f0, Func Offset: 0xc0
	// Line 538, Address: 0x207700, Func Offset: 0xd0
	// Line 540, Address: 0x20770c, Func Offset: 0xdc
	// Line 542, Address: 0x20771c, Func Offset: 0xec
	// Line 545, Address: 0x207728, Func Offset: 0xf8
	// Line 546, Address: 0x207734, Func Offset: 0x104
	// Line 548, Address: 0x207738, Func Offset: 0x108
	// Line 551, Address: 0x207740, Func Offset: 0x110
	// Line 556, Address: 0x20774c, Func Offset: 0x11c
	// Line 558, Address: 0x20776c, Func Offset: 0x13c
	// Func End, Address: 0x207790, Func Offset: 0x160
}

// SetTarget__6CameraFP6_RwV3dP6_RwV3d
// Start address: 0x207790
void Camera::SetTarget(_RwV3d* dp, _RwV3d* target_vec)
{
	int32 height;
	float32 presets[10];
	int32 tether;
	float32 scale;
	tagCollideInfo collision;
	_RwMatrix* cameraMatrix;
	_RwFrame* cameraFrame;
	float32 dist;
	_RwV3d look_at_pos;
	_RwV3d* orig_pos;
	// Line 350, Address: 0x207790, Func Offset: 0
	// Line 360, Address: 0x2077cc, Func Offset: 0x3c
	// Line 362, Address: 0x2077dc, Func Offset: 0x4c
	// Line 363, Address: 0x2077f8, Func Offset: 0x68
	// Line 364, Address: 0x207814, Func Offset: 0x84
	// Line 365, Address: 0x207830, Func Offset: 0xa0
	// Line 368, Address: 0x207838, Func Offset: 0xa8
	// Line 369, Address: 0x207840, Func Offset: 0xb0
	// Line 370, Address: 0x207848, Func Offset: 0xb8
	// Line 374, Address: 0x207850, Func Offset: 0xc0
	// Line 375, Address: 0x20785c, Func Offset: 0xcc
	// Line 378, Address: 0x20786c, Func Offset: 0xdc
	// Line 381, Address: 0x2078f8, Func Offset: 0x168
	// Line 382, Address: 0x207910, Func Offset: 0x180
	// Line 383, Address: 0x207928, Func Offset: 0x198
	// Line 386, Address: 0x207940, Func Offset: 0x1b0
	// Line 392, Address: 0x207950, Func Offset: 0x1c0
	// Line 393, Address: 0x207964, Func Offset: 0x1d4
	// Line 394, Address: 0x207970, Func Offset: 0x1e0
	// Line 395, Address: 0x207978, Func Offset: 0x1e8
	// Line 396, Address: 0x207980, Func Offset: 0x1f0
	// Line 399, Address: 0x207988, Func Offset: 0x1f8
	// Line 400, Address: 0x2079a0, Func Offset: 0x210
	// Line 402, Address: 0x207a04, Func Offset: 0x274
	// Line 403, Address: 0x207a08, Func Offset: 0x278
	// Line 404, Address: 0x207a0c, Func Offset: 0x27c
	// Line 405, Address: 0x207a10, Func Offset: 0x280
	// Line 408, Address: 0x207a18, Func Offset: 0x288
	// Line 413, Address: 0x207a2c, Func Offset: 0x29c
	// Line 414, Address: 0x207a30, Func Offset: 0x2a0
	// Line 415, Address: 0x207a34, Func Offset: 0x2a4
	// Line 418, Address: 0x207a38, Func Offset: 0x2a8
	// Line 423, Address: 0x207a50, Func Offset: 0x2c0
	// Line 425, Address: 0x207a6c, Func Offset: 0x2dc
	// Line 426, Address: 0x207a8c, Func Offset: 0x2fc
	// Line 433, Address: 0x207aa0, Func Offset: 0x310
	// Line 435, Address: 0x207ab0, Func Offset: 0x320
	// Line 436, Address: 0x207ac8, Func Offset: 0x338
	// Line 437, Address: 0x207b28, Func Offset: 0x398
	// Line 440, Address: 0x207b3c, Func Offset: 0x3ac
	// Line 441, Address: 0x207b40, Func Offset: 0x3b0
	// Line 442, Address: 0x207b44, Func Offset: 0x3b4
	// Line 445, Address: 0x207b48, Func Offset: 0x3b8
	// Line 446, Address: 0x207b50, Func Offset: 0x3c0
	// Line 447, Address: 0x207b58, Func Offset: 0x3c8
	// Line 451, Address: 0x207b60, Func Offset: 0x3d0
	// Line 455, Address: 0x207bb0, Func Offset: 0x420
	// Line 459, Address: 0x207bc0, Func Offset: 0x430
	// Line 460, Address: 0x207bc8, Func Offset: 0x438
	// Line 467, Address: 0x207bec, Func Offset: 0x45c
	// Line 469, Address: 0x207c0c, Func Offset: 0x47c
	// Line 470, Address: 0x207c28, Func Offset: 0x498
	// Line 471, Address: 0x207c44, Func Offset: 0x4b4
	// Line 472, Address: 0x207c54, Func Offset: 0x4c4
	// Line 473, Address: 0x207c5c, Func Offset: 0x4cc
	// Line 475, Address: 0x207c7c, Func Offset: 0x4ec
	// Line 476, Address: 0x207c98, Func Offset: 0x508
	// Line 477, Address: 0x207cb4, Func Offset: 0x524
	// Line 480, Address: 0x207cc4, Func Offset: 0x534
	// Line 481, Address: 0x207cd0, Func Offset: 0x540
	// Line 483, Address: 0x207cf0, Func Offset: 0x560
	// Line 484, Address: 0x207d0c, Func Offset: 0x57c
	// Line 485, Address: 0x207d28, Func Offset: 0x598
	// Line 486, Address: 0x207d38, Func Offset: 0x5a8
	// Line 487, Address: 0x207d40, Func Offset: 0x5b0
	// Line 489, Address: 0x207d60, Func Offset: 0x5d0
	// Line 490, Address: 0x207d7c, Func Offset: 0x5ec
	// Line 491, Address: 0x207d98, Func Offset: 0x608
	// Line 497, Address: 0x207da8, Func Offset: 0x618
	// Func End, Address: 0x207de0, Func Offset: 0x650
}

// CameraPan__6CameraFPC6_RwV3df
// Start address: 0x207de0
void Camera::CameraPan(_RwV3d* pos, float32 angle)
{
	_RwV3d up;
	_RwV3d camPos;
	_RwMatrix* cameraMatrix;
	_RwFrame* cameraFrame;
	_RwV3d invCamPos;
	// Line 287, Address: 0x207de0, Func Offset: 0
	// Line 289, Address: 0x207e00, Func Offset: 0x20
	// Line 291, Address: 0x207e10, Func Offset: 0x30
	// Line 297, Address: 0x207e20, Func Offset: 0x40
	// Line 299, Address: 0x207e58, Func Offset: 0x78
	// Line 302, Address: 0x207e70, Func Offset: 0x90
	// Line 306, Address: 0x207e84, Func Offset: 0xa4
	// Line 307, Address: 0x207e8c, Func Offset: 0xac
	// Line 308, Address: 0x207e94, Func Offset: 0xb4
	// Line 311, Address: 0x207eac, Func Offset: 0xcc
	// Line 312, Address: 0x207ec0, Func Offset: 0xe0
	// Func End, Address: 0x207ee0, Func Offset: 0x100
}

// CameraTilt__6CameraFPC6_RwV3df
// Start address: 0x207ee0
void Camera::CameraTilt(_RwV3d* pos, float32 angle)
{
	_RwV3d camPos;
	_RwMatrix* cameraMatrix;
	_RwFrame* cameraFrame;
	_RwV3d invCamPos;
	// Line 260, Address: 0x207ee0, Func Offset: 0
	// Line 262, Address: 0x207f00, Func Offset: 0x20
	// Line 264, Address: 0x207f10, Func Offset: 0x30
	// Line 269, Address: 0x207f20, Func Offset: 0x40
	// Line 271, Address: 0x207f58, Func Offset: 0x78
	// Line 274, Address: 0x207f70, Func Offset: 0x90
	// Line 278, Address: 0x207f84, Func Offset: 0xa4
	// Line 282, Address: 0x207fa8, Func Offset: 0xc8
	// Line 283, Address: 0x207fbc, Func Offset: 0xdc
	// Func End, Address: 0x207fdc, Func Offset: 0xfc
}

// CameraMove__6CameraFP6_RwV3d
// Start address: 0x207fe0
void Camera::CameraMove(_RwV3d* v)
{
	_RwV3d* right;
	_RwV3d* up;
	_RwV3d* at;
	_RwMatrix* cameraMatrix;
	_RwV3d offset;
	// Line 236, Address: 0x207fe0, Func Offset: 0
	// Line 239, Address: 0x208004, Func Offset: 0x24
	// Line 242, Address: 0x208020, Func Offset: 0x40
	// Line 244, Address: 0x208030, Func Offset: 0x50
	// Line 246, Address: 0x208040, Func Offset: 0x60
	// Line 249, Address: 0x20804c, Func Offset: 0x6c
	// Line 250, Address: 0x208078, Func Offset: 0x98
	// Line 251, Address: 0x2080a4, Func Offset: 0xc4
	// Line 254, Address: 0x2080d0, Func Offset: 0xf0
	// Line 256, Address: 0x2080f0, Func Offset: 0x110
	// Func End, Address: 0x208114, Func Offset: 0x134
}

// CameraSize__6CameraFP7_RwRectff
// Start address: 0x208120
void Camera::CameraSize(_RwRect* rect, float32 viewWindow, float32 aspectRatio)
{
	_RwRaster* subRaster;
	_RwRect r;
	_RwVideoMode videoMode;
	_RwV2d vw;
	// Line 165, Address: 0x208120, Func Offset: 0
	// Line 166, Address: 0x20814c, Func Offset: 0x2c
	// Line 174, Address: 0x208158, Func Offset: 0x38
	// Line 177, Address: 0x208170, Func Offset: 0x50
	// Line 182, Address: 0x208178, Func Offset: 0x58
	// Line 184, Address: 0x208188, Func Offset: 0x68
	// Line 185, Address: 0x208190, Func Offset: 0x70
	// Line 186, Address: 0x208198, Func Offset: 0x78
	// Line 189, Address: 0x2081a0, Func Offset: 0x80
	// Line 190, Address: 0x2081bc, Func Offset: 0x9c
	// Line 192, Address: 0x2081d8, Func Offset: 0xb8
	// Line 193, Address: 0x2081e0, Func Offset: 0xc0
	// Line 196, Address: 0x2081e4, Func Offset: 0xc4
	// Line 199, Address: 0x2081f4, Func Offset: 0xd4
	// Line 200, Address: 0x2081f8, Func Offset: 0xd8
	// Line 201, Address: 0x20820c, Func Offset: 0xec
	// Line 206, Address: 0x208214, Func Offset: 0xf4
	// Line 208, Address: 0x208228, Func Offset: 0x108
	// Line 209, Address: 0x20822c, Func Offset: 0x10c
	// Line 210, Address: 0x208250, Func Offset: 0x130
	// Line 213, Address: 0x208258, Func Offset: 0x138
	// Line 214, Address: 0x208274, Func Offset: 0x154
	// Line 217, Address: 0x208278, Func Offset: 0x158
	// Line 218, Address: 0x208288, Func Offset: 0x168
	// Line 220, Address: 0x208290, Func Offset: 0x170
	// Line 224, Address: 0x2082b0, Func Offset: 0x190
	// Line 225, Address: 0x2082c0, Func Offset: 0x1a0
	// Line 227, Address: 0x2082c8, Func Offset: 0x1a8
	// Line 230, Address: 0x2082e8, Func Offset: 0x1c8
	// Line 232, Address: 0x2082f8, Func Offset: 0x1d8
	// Func End, Address: 0x20831c, Func Offset: 0x1fc
}

// MatrixLookAt__FP9_RwMatrixP6_RwV3d
// Start address: 0x208320
void MatrixLookAt(_RwMatrix* view, _RwV3d* tp)
{
	_RwV3d* t;
	_RwV3d* cp;
	// Line 112, Address: 0x208320, Func Offset: 0
	// Line 118, Address: 0x20835c, Func Offset: 0x3c
	// Line 119, Address: 0x208360, Func Offset: 0x40
	// Line 120, Address: 0x208368, Func Offset: 0x48
	// Line 123, Address: 0x20836c, Func Offset: 0x4c
	// Line 124, Address: 0x208378, Func Offset: 0x58
	// Line 125, Address: 0x20839c, Func Offset: 0x7c
	// Line 130, Address: 0x2083fc, Func Offset: 0xdc
	// Line 131, Address: 0x208444, Func Offset: 0x124
	// Line 135, Address: 0x2084a4, Func Offset: 0x184
	// Line 136, Address: 0x2084ec, Func Offset: 0x1cc
	// Line 139, Address: 0x20854c, Func Offset: 0x22c
	// Line 140, Address: 0x208558, Func Offset: 0x238
	// Line 141, Address: 0x20855c, Func Offset: 0x23c
	// Line 142, Address: 0x208560, Func Offset: 0x240
	// Line 145, Address: 0x208564, Func Offset: 0x244
	// Line 146, Address: 0x208570, Func Offset: 0x250
	// Line 147, Address: 0x208574, Func Offset: 0x254
	// Line 148, Address: 0x208578, Func Offset: 0x258
	// Line 150, Address: 0x20857c, Func Offset: 0x25c
	// Line 151, Address: 0x208588, Func Offset: 0x268
	// Line 152, Address: 0x20858c, Func Offset: 0x26c
	// Line 153, Address: 0x208590, Func Offset: 0x270
	// Line 157, Address: 0x208594, Func Offset: 0x274
	// Line 159, Address: 0x2085a0, Func Offset: 0x280
	// Func End, Address: 0x2085dc, Func Offset: 0x2bc
}

