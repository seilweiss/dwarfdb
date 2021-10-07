typedef struct iConditionRuntime;
typedef struct tagXStreamMDSDirectory;
typedef struct _rxHeapSuperBlockDescriptor;
typedef struct xScene;
typedef struct xTrigger;
typedef struct _rwResEntryTag;
typedef struct xMarker;
typedef struct tagP2MeshVertex;
typedef struct tagiJointResource;
typedef struct _RxHeap;
typedef struct tagiModelRuntime;
typedef struct _rxHeapBlockHeader;
typedef struct xCondition;
typedef struct iMarkerResource;
typedef enum _RxClusterValidityReq;
typedef struct iTriggerResource;
typedef struct _rxHeapFreeBlock;
typedef struct XStream;
typedef struct iDisplayCamera;
typedef struct _RxPipelineNodeTopSortData;
typedef struct xLight;
typedef struct _RxPipelineNode;
typedef struct _RxClusterDefinition;
typedef struct xNavPoint;
typedef struct _iGeomInfo;
typedef enum _RwTextureFilterMode;
typedef struct _RxPipelineNodeParam;
typedef struct _RxPipelineCluster;
typedef struct _iWAV;
typedef enum _rxEmbeddedPacketState;
typedef struct xNavLink;
typedef struct _RpCollSector;
typedef struct tagiSkelRuntime;
typedef struct _tagiEnvRuntime;
typedef struct _RpMeshHeader;
typedef struct tagiModelResource;
typedef struct _RxNodeDefinition;
typedef enum _RxClusterValid;
typedef struct _RxPipeline;
typedef struct tagiJointRuntime;
typedef struct _RpWorld;
typedef struct xCamera;
typedef struct _RwSurfaceProperties;
typedef struct iActionRuntime;
typedef struct iCameraResource;
typedef struct XStreamHeader;
typedef struct xRule;
typedef struct tagP2Weight;
typedef struct _RwTexDictionary;
typedef struct xAction;
typedef struct Vector3D;
typedef struct _iTexResource;
typedef struct tagXAnim;
typedef struct _RwV3d;
typedef struct tagiAnimFrame;
typedef struct tagiFloorTri;
typedef struct xSkel;
typedef struct _RxPipelineRequiresCluster;
typedef struct iActionResource;
typedef struct tagiAnimResource;
typedef struct _RpMaterial;
typedef struct tagiSkelResource;
typedef struct _RpVertexNormal;
typedef struct tagiAnimRuntime;
typedef struct _RwTexture;
typedef struct iRuleResource;
typedef struct _rxReq;
typedef struct p2Camera;
typedef struct _iEntryPointRuntime;
typedef struct Vector4D;
typedef struct tagXStreamDirectoryEntry;
typedef struct _RwObject;
typedef struct _i3DObjInfo;
typedef struct _RpSector;
typedef enum _rpWorldRenderOrder;
typedef struct iConditionResource;
typedef struct tagiFloor;
typedef struct _FCinfo;
typedef struct xEntryPoint;
typedef struct _RxOutputSpec;
typedef struct tagP2Mesh;
typedef struct _tagxEnv;
typedef struct _RpPolygon;
typedef struct iEntryPointResource;
typedef struct _RwBBox;
typedef struct _RxClusterRef;
typedef struct _iLightRuntime;
typedef struct _RpWorldSector;
typedef struct iLightResource;
typedef struct p2CameraVersion;
typedef struct _RwRaster;
typedef struct _RwLLLink;
typedef struct _xTex;
typedef struct _iTexRuntime;
typedef struct _RxIoSpec;
typedef struct tagXAnimSet;
typedef struct _RwRGBA;
typedef struct _RxNodeMethods;
typedef struct tagP2VERTEX;
typedef struct tagMATRIX;
typedef enum _RxClusterForcePresent;
typedef struct _iSFX;
typedef struct _RxPacket;
typedef struct _xModel;
typedef struct _iVFXResource;
typedef enum _RxNodeDefEditable;
typedef struct _xSndMgrData;
typedef struct _RxClusterUnion;
typedef struct _iSFXResource;
typedef enum _RwTextureAddressMode;
typedef struct _RpMaterialList;
typedef struct _RxCluster;
typedef struct _RwLinkList;
typedef struct _RwTexCoords;
typedef struct tagiMesh;
typedef struct _PVRheader;

typedef void(*type_6)(_rwResEntryTag*);
typedef int32(*type_12)(_RxPipelineNode*, _RxPipelineNodeParam*);
typedef int32(*type_15)(_RxNodeDefinition*);
typedef void(*type_16)(_RxNodeDefinition*);
typedef int32(*type_18)(_RxPipelineNode*);
typedef void(*type_21)(_RxPipelineNode*);
typedef int32(*type_25)(_RxPipelineNode*, _RxPipeline*);
typedef uint32(*type_31)(_RxPipelineNode*, uint32, uint32, void*);
typedef _RpWorldSector*(*type_35)(_RpWorldSector*);

typedef uint32 type_0[5];
typedef tagXAnimSet type_1[0];
typedef tagXStreamDirectoryEntry type_2[1000];
typedef iTriggerResource* type_3[20];
typedef uint32 type_4[5];
typedef tagXAnimSet type_5[0];
typedef uint32 type_7[5];
typedef iTriggerResource* type_8[20];
typedef tagXAnimSet type_9[0];
typedef uint8 type_10[3];
typedef _iWAV* type_11[5];
typedef tagXAnimSet type_13[0];
typedef Vector3D type_14[4];
typedef uint32 type_17[4];
typedef uint32 type_19[3];
typedef uint16 type_20[3];
typedef _xModel type_22[0];
typedef int8 type_23[32];
typedef _xModel type_24[0];
typedef _xModel type_26[0];
typedef int8 type_27[2048];
typedef _xModel type_28[0];
typedef _iGeomInfo type_29[64];
typedef _xModel type_30[0];
typedef uint16 type_32[3];
typedef uint16 type_33[3];
typedef _RxCluster type_34[1];
typedef iTriggerResource* type_36[20];
typedef float32 type_37[3];
typedef int8 type_38[32];
typedef iTriggerResource* type_39[20];
typedef int8 type_40[32];
typedef xSkel type_41[0];
typedef iTriggerResource* type_42[20];
typedef xSkel type_43[0];
typedef int8 type_44[128];
typedef iLightResource type_45[2];
typedef iTriggerResource* type_46[20];
typedef xSkel type_47[0];
typedef xSkel type_48[0];
typedef _iSFX type_49[64];
typedef iTriggerResource* type_50[20];
typedef _iWAV type_51[96];
typedef iTriggerResource* type_52[20];
typedef iTriggerResource* type_53[20];
typedef uint8 type_54[3];
typedef uint32 type_55[2];
typedef iTriggerResource* type_56[20];
typedef p2CameraVersion type_57[5];
typedef Vector3D type_58[4];
typedef xScene* type_59[2];
typedef iTriggerResource* type_60[20];
typedef iTriggerResource* type_61[20];

struct iConditionRuntime
{
	xCondition* m_operand;
	uint16 m_match;
	uint16 m_trigger;
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

struct xTrigger
{
	iTriggerResource* m_resource;
};

struct _rwResEntryTag
{
	_RwLLLink link;
	int32 size;
	void* owner;
	_rwResEntryTag** ownerRef;
	void(*destroyNotify)(_rwResEntryTag*);
};

struct xMarker
{
	iMarkerResource* m_resource;
	void** m_runtime;
};

struct tagP2MeshVertex
{
	float32 m_x;
	float32 m_y;
	float32 m_z;
};

struct tagiJointResource
{
	tagMATRIX m_orientMatrix;
	Vector3D m_home;
	uint32 m_parent;
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

struct tagiModelRuntime
{
	int32 placeholder;
};

struct _rxHeapBlockHeader
{
	_rxHeapBlockHeader* prev;
	_rxHeapBlockHeader* next;
	uint32 size;
	_rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
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

struct _rxHeapFreeBlock
{
	uint32 size;
	_rxHeapBlockHeader* ptr;
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

struct iDisplayCamera
{
	Vector3D m_pos;
	Vector3D m_rot;
	float32 m_fov;
};

struct _RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	_rxReq* req;
	void* initialisationData;
	uint32 initialisationDataSize;
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

struct _RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
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

struct _iGeomInfo
{
	uint32 vertexCount;
	uint32 jointAssignmentCount;
	uint32 facesCount;
	void* p2vertex;
	void* normals;
	void* vertex;
	void* assignments;
	void* faces;
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

struct _iWAV
{
	uint8 m_used;
	uint8 m_bank;
	uint16 m_pad;
	int32 m_idx;
	int8 m_name[32];
	uint32 m_assetID;
	uint32 m_size;
	uint32 m_samples;
	uint32 m_age;
	uint32 m_addr;
	uint32 m_sramsize;
	uint32 m_freq;
	uint32 m_type;
	uint32 m_locked;
	uint32 m_pitch;
	_iWAV* m_next;
};

enum _rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
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

struct tagiSkelRuntime
{
	tagiJointRuntime* m_joints;
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

struct tagiModelResource
{
	uint32 m_assetID;
	int32 m_meshCount;
	tagP2Mesh* m_mesh;
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

struct tagiJointRuntime
{
	float32 m_tx;
	float32 m_ty;
	float32 m_tz;
	float32 m_rx;
	float32 m_ry;
	float32 m_rz;
	Vector3D m_worldHome;
	tagMATRIX m_localMatrix;
	tagMATRIX m_worldMatrix;
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

struct _RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

struct iActionRuntime
{
	xAction* m_and;
};

struct iCameraResource
{
	uint16 m_plateOffset;
	uint16 m_versions;
	p2CameraVersion m_version[5];
	uint32 m_frameCount;
	p2Camera* m_cameras;
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

struct xRule
{
	iRuleResource* m_resource;
	void* m_runtime;
};

struct tagP2Weight
{
	uint16 m_joint0;
	uint16 m_joint1;
	float32 m_weight0;
	float32 m_weight1;
};

struct _RwTexDictionary
{
	_RwObject object;
	_RwLinkList texturesInDict;
	_RwLLLink lInInstance;
};

struct xAction
{
	iActionResource* m_resource;
	iActionRuntime* m_runtime;
};

struct Vector3D
{
	float32 x;
	float32 y;
	float32 z;
};

struct _iTexResource
{
	uint32 m_assetID;
	uint32 pad[3];
	_PVRheader header;
};

struct tagXAnim
{
	tagiAnimResource* m_resource;
	tagiAnimRuntime* m_runtime;
};

struct _RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct tagiAnimFrame
{
	float32* m_tx;
	float32* m_ty;
	float32* m_tz;
	float32* m_rx;
	float32* m_ry;
	float32* m_rz;
};

struct tagiFloorTri
{
	uint16 m_v[3];
	uint16 m_n;
};

struct xSkel
{
	tagiSkelResource* m_resource;
	tagiSkelRuntime* m_runtime;
};

struct _RxPipelineRequiresCluster
{
	_RxClusterDefinition* clusterDef;
	_RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct iActionResource
{
	uint8 m_cmdType;
	uint8 m_cmd;
	uint16 pad;
	uint32 m_cmdParameter;
};

struct tagiAnimResource
{
	uint32 m_assetID;
	uint32 m_flags;
	uint16 m_loopStart;
	uint16 m_loopEnd;
	uint16 m_introStart;
	uint16 m_introEnd;
	uint16 m_exitStart;
	uint16 m_exitEnd;
	uint16 m_frameCount;
	uint16 m_jointCount;
	uint16 m_vfxCount;
	uint16 m_sfxCount;
	tagiAnimFrame* m_joints;
	_iVFXResource* m_vfx;
	_iSFXResource* m_sfx;
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

struct tagiSkelResource
{
	uint32 m_assetID;
	uint32 m_jointCount;
	tagiJointResource* m_joints;
};

struct _RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

struct tagiAnimRuntime
{
	void* m_sfx;
	void* m_vfx;
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

struct iRuleResource
{
	uint32 m_actionCount;
	xAction* m_action;
	uint32 m_conditionCount;
	xCondition* m_condition;
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

struct Vector4D
{
	float32 x;
	float32 y;
	float32 z;
	float32 t;
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

struct _i3DObjInfo
{
	uint32 count;
	_iGeomInfo geom[64];
	tagP2Mesh* meshBuffer;
};

struct _RpSector
{
	int32 type;
};

enum _rpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
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

struct _FCinfo
{
	uint16 nidx[3];
};

struct xEntryPoint
{
	iEntryPointResource* m_resource;
	_iEntryPointRuntime* m_runtime;
};

struct _RxOutputSpec
{
	int8* name;
	_RxClusterValid* outputClusters;
	_RxClusterValid allOtherClusters;
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

struct _tagxEnv
{
	_tagiEnvRuntime* m_runtime;
};

struct _RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
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

struct iLightResource
{
	uint32 m_type;
	Vector3D m_pos;
	Vector3D m_rot;
	Vector3D m_color;
	int32 m_fov;
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

struct _RwLLLink
{
	_RwLLLink* next;
	_RwLLLink* prev;
};

struct _xTex
{
	_iTexResource* m_resource;
	_iTexRuntime* m_runtime;
};

struct _iTexRuntime
{
	void* surface;
	uint32 m_flags;
};

struct _RxIoSpec
{
	uint32 numClustersOfInterest;
	_RxClusterRef* clustersOfInterest;
	_RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	_RxOutputSpec* outputs;
};

struct tagXAnimSet
{
	uint32 m_assetID;
	uint32 m_animationCount;
	tagXAnim* m_animations;
	uint32 m_readyCount;
	tagXAnim* m_ready;
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

struct tagP2VERTEX
{
	float32 x;
	float32 y;
	float32 z;
	float32 tu;
	float32 tv;
};

struct tagMATRIX
{
	float32 _11;
	float32 _12;
	float32 _13;
	float32 _14;
	float32 _21;
	float32 _22;
	float32 _23;
	float32 _24;
	float32 _31;
	float32 _32;
	float32 _33;
	float32 _34;
	float32 _41;
	float32 _42;
	float32 _43;
	float32 _44;
};

enum _RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct _iSFX
{
	int32 m_idx;
	int32 m_wavIdx;
	uint32 m_flags;
	uint32 m_soundPriority;
	void* m_callback;
	uint32 m_callbackData;
	Vector3D m_position;
	Vector3D m_velocity;
	float32 m_radius;
	uint16 m_playChunk;
	uint16 m_playChunkCount;
	uint32 m_volC[2];
	uint32 m_vol;
	uint32 m_pan;
	int16 m_loopCount;
	uint16 m_freq;
	uint16 m_pitch;
	uint16 m_userRef;
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

struct _xModel
{
	tagiModelResource* m_resource;
	tagiModelRuntime* m_runtime;
};

struct _iVFXResource
{
	uint16 m_frame;
	uint8 m_id;
	uint8 m_valid;
	uint32 m_joint;
	Vector3D m_a;
	Vector3D m_b;
	uint8 m_flag;
	uint8 m_pad[3];
};

enum _RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct _xSndMgrData
{
	_iSFX m_voice[64];
	_iWAV m_id[96];
	Vector3D m_listenPos;
	Vector3D m_listenRot;
	uint8 m_masterVolume;
	uint8 m_isPaused;
	uint8 m_inStereo;
	uint8 m_pad;
	float32 m_listenRad;
	uint16 m_pad2;
	uint8 m_listenTouch;
	uint8 m_initialized;
	uint16 m_lastRef;
	uint8 m_paused;
	uint8 m_activeBank;
	uint32 m_bankMaxAddr[5];
	uint32 m_bankMinAddr[5];
	uint32 m_bankIdxAddr[5];
	_iWAV* m_bankList[5];
};

struct _RxClusterUnion
{
	union
	{
		_RxClusterDefinition* clusterDef;
		_RxPipelineCluster* clusterRef;
	};
};

struct _iSFXResource
{
	uint32 m_id;
	uint32 m_joint;
	uint8 m_frame;
	uint8 m_vol;
	uint8 m_freq;
	uint8 m_valid;
	uint32 m_sndID;
	uint8 m_flag;
	uint8 m_pad[3];
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

struct _RwTexCoords
{
	float32 u;
	float32 v;
};

struct tagiMesh
{
};

struct _PVRheader
{
	uint32 id;
	uint32 nTextureDataSize;
	uint32 nTextureType;
	uint16 nWidth;
	uint16 nHeight;
};

int32 g_BossAnimationsCount;
tagXAnimSet g_BossAnimations[0];
int8 vAssertBuf2[128];
XStreamHeader currentHeader;
int32 g_BossSkeletonCount;
xSkel g_BossSkeleton[0];
int32 g_BossModelCount;
_xModel g_BossModel[0];
int32 g_RTObjModelCount;
_xModel g_RTObjModel[0];
_xSndMgrData gSndMgr;
xScene* xScene_current;
xScene* xScene_preload;
xScene* xScene_sceneBuffer[2];
int32 g_DNPCAnimationsCount;
tagXAnimSet g_DNPCAnimations[0];
int32 g_DNPCSkeletonCount;
xSkel g_DNPCSkeleton[0];
int32 g_DNPCModelCount;
_xModel g_DNPCModel[0];
int32 g_SNPCAnimationsCount;
tagXAnimSet g_SNPCAnimations[0];
int32 g_SNPCSkeletonCount;
xSkel g_SNPCSkeleton[0];
int32 g_SNPCModelCount;
_xModel g_SNPCModel[0];
int32 g_AshAnimationsCount;
tagXAnimSet g_AshAnimations[0];
int32 g_AshSkeletonCount;
xSkel g_AshSkeleton[0];
int32 g_AshModelCount;
_xModel g_AshModel[0];

void iEnvTextInit(XStream* stream);
void iCharBossAnimAllInit(XStream* stream);
void iCharBossAnimReadyInit(XStream* stream);
void iCharBossSkeletonInstance(uint32 assetID, void* resource, void* runtime);
void iCharBossSkeletonInit(XStream* stream);
void iCharBossGeometryInstance();
void iCharBossGeometryInit(XStream* stream);
void iCharTextureInit(XStream* s);
void iEnvPlateInit(XStream* s);
void iEnvFrameInit();
void iSpriteInit();
void iEnvColormapInit();
void iCharColormapInit();
void iCharRTObjGeometryInstance();
void iCharRTObjGeometryInit(XStream* stream);
void iCharRTObjTextureInit(XStream* s);
void iEnvMIDIDataInit();
void iEnvLightListInit();
void iEnvScriptInit();
void iCharRTObjAnimReadyInit();
void iCharRTObjAnimAllInit();
void iCharMIDIDataInit();
void iCharSoundBankInit(XStream* s);
void iEnvSoundBankInit(XStream* stream);
void iEnvSceneInit(XStream* stream);
void iCharDNPCAnimAllInit(XStream* stream);
void iCharDNPCAnimReadyInit(XStream* stream);
void iCharDNPCSkeletonInstance(uint32 assetID, void* resource, void* runtime);
void iCharDNPCSkeletonInit(XStream* stream);
void iCharDNPCGeometryInstance();
void iCharDNPCGeometryInit(XStream* stream);
void iCharSNPCAnimAllInit(XStream* stream);
void iCharSNPCAnimReadyInit(XStream* stream);
void iCharSNPCSkeletonInstance(uint32 assetID, void* resource, void* runtime);
void iCharSNPCSkeletonInit(XStream* stream);
void iCharSNPCGeometryInstance();
void iCharSNPCGeometryInit(XStream* stream);
void iCharAshAnimAllInit(XStream* stream);
void iCharAshAnimReadyInit(XStream* stream);
void iCharAshSkeletonInstance(uint32 assetID, void* resource, void* runtime);
void iCharAshSkeletonInit(XStream* stream);
void iCharAshGeometryInstance();
void iCharAshGeometryInit(XStream* stream);
void iGetAnimations(XStream* stream, uint32* count, tagXAnim** anims);
void iGet3DObjInfo(XStream* stream, _i3DObjInfo* info);

// iEnvTextInit__FP7XStream
// Start address: 0x38af30
void iEnvTextInit(XStream* stream)
{
	// Line 1300, Address: 0x38af30, Func Offset: 0
	// Line 1301, Address: 0x38af38, Func Offset: 0x8
	// Line 1302, Address: 0x38af48, Func Offset: 0x18
	// Func End, Address: 0x38af58, Func Offset: 0x28
}

// iCharBossAnimAllInit__FP7XStream
// Start address: 0x38af60
void iCharBossAnimAllInit(XStream* stream)
{
	// Line 1284, Address: 0x38af60, Func Offset: 0
	// Line 1285, Address: 0x38af70, Func Offset: 0x10
	// Line 1287, Address: 0x38b018, Func Offset: 0xb8
	// Line 1290, Address: 0x38b064, Func Offset: 0x104
	// Line 1291, Address: 0x38b070, Func Offset: 0x110
	// Func End, Address: 0x38b084, Func Offset: 0x124
}

// iCharBossAnimReadyInit__FP7XStream
// Start address: 0x38b090
void iCharBossAnimReadyInit(XStream* stream)
{
	// Line 1270, Address: 0x38b090, Func Offset: 0
	// Line 1271, Address: 0x38b0a0, Func Offset: 0x10
	// Line 1273, Address: 0x38b148, Func Offset: 0xb8
	// Line 1275, Address: 0x38b194, Func Offset: 0x104
	// Func End, Address: 0x38b1a8, Func Offset: 0x118
}

// iCharBossSkeletonInstance__FUiPvPvPv
// Start address: 0x38b1b0
void iCharBossSkeletonInstance(uint32 assetID, void* resource, void* runtime)
{
	// Line 1257, Address: 0x38b1b0, Func Offset: 0
	// Line 1258, Address: 0x38b1c0, Func Offset: 0x10
	// Line 1261, Address: 0x38b1e0, Func Offset: 0x30
	// Func End, Address: 0x38b1f4, Func Offset: 0x44
}

// iCharBossSkeletonInit__FP7XStream
// Start address: 0x38b200
void iCharBossSkeletonInit(XStream* stream)
{
	// Line 1250, Address: 0x38b200, Func Offset: 0
	// Line 1251, Address: 0x38b21c, Func Offset: 0x1c
	// Line 1253, Address: 0x38b240, Func Offset: 0x40
	// Line 1254, Address: 0x38b24c, Func Offset: 0x4c
	// Func End, Address: 0x38b254, Func Offset: 0x54
}

// iCharBossGeometryInstance__FUiPvPvPv
// Start address: 0x38b260
void iCharBossGeometryInstance()
{
	// Line 1240, Address: 0x38b260, Func Offset: 0
	// Func End, Address: 0x38b268, Func Offset: 0x8
}

// iCharBossGeometryInit__FP7XStream
// Start address: 0x38b270
void iCharBossGeometryInit(XStream* stream)
{
	_i3DObjInfo info;
	// Line 1221, Address: 0x38b270, Func Offset: 0
	// Line 1224, Address: 0x38b280, Func Offset: 0x10
	// Line 1226, Address: 0x38b290, Func Offset: 0x20
	// Line 1228, Address: 0x38b338, Func Offset: 0xc8
	// Line 1229, Address: 0x38b370, Func Offset: 0x100
	// Line 1231, Address: 0x38b3a8, Func Offset: 0x138
	// Line 1232, Address: 0x38b3c8, Func Offset: 0x158
	// Line 1233, Address: 0x38b3e8, Func Offset: 0x178
	// Line 1235, Address: 0x38b408, Func Offset: 0x198
	// Line 1236, Address: 0x38b414, Func Offset: 0x1a4
	// Func End, Address: 0x38b428, Func Offset: 0x1b8
}

// iCharTextureInit__FP7XStream
// Start address: 0x38b430
void iCharTextureInit(XStream* s)
{
	_xTex* next;
	// Line 1194, Address: 0x38b430, Func Offset: 0
	// Line 1199, Address: 0x38b444, Func Offset: 0x14
	// Line 1200, Address: 0x38b468, Func Offset: 0x38
	// Line 1201, Address: 0x38b48c, Func Offset: 0x5c
	// Line 1203, Address: 0x38b494, Func Offset: 0x64
	// Line 1205, Address: 0x38b4b8, Func Offset: 0x88
	// Line 1207, Address: 0x38b4cc, Func Offset: 0x9c
	// Line 1208, Address: 0x38b4e0, Func Offset: 0xb0
	// Line 1212, Address: 0x38b4ec, Func Offset: 0xbc
	// Func End, Address: 0x38b504, Func Offset: 0xd4
}

// iEnvPlateInit__FP7XStream
// Start address: 0x38b510
void iEnvPlateInit(XStream* s)
{
	// Line 1189, Address: 0x38b510, Func Offset: 0
	// Line 1190, Address: 0x38b518, Func Offset: 0x8
	// Line 1191, Address: 0x38b520, Func Offset: 0x10
	// Func End, Address: 0x38b530, Func Offset: 0x20
}

// iEnvFrameInit__FP7XStream
// Start address: 0x38b530
void iEnvFrameInit()
{
	// Line 1186, Address: 0x38b530, Func Offset: 0
	// Func End, Address: 0x38b5e0, Func Offset: 0xb0
}

// iSpriteInit__FP7XStream
// Start address: 0x38b5e0
void iSpriteInit()
{
	// Line 1185, Address: 0x38b5e0, Func Offset: 0
	// Func End, Address: 0x38b690, Func Offset: 0xb0
}

// iEnvColormapInit__FP7XStream
// Start address: 0x38b690
void iEnvColormapInit()
{
	// Line 1184, Address: 0x38b690, Func Offset: 0
	// Func End, Address: 0x38b740, Func Offset: 0xb0
}

// iCharColormapInit__FP7XStream
// Start address: 0x38b740
void iCharColormapInit()
{
	// Line 1183, Address: 0x38b740, Func Offset: 0
	// Func End, Address: 0x38b7f0, Func Offset: 0xb0
}

// iCharRTObjGeometryInstance__FUiPvPvPv
// Start address: 0x38b7f0
void iCharRTObjGeometryInstance()
{
	// Line 1177, Address: 0x38b7f0, Func Offset: 0
	// Func End, Address: 0x38b7f8, Func Offset: 0x8
}

// iCharRTObjGeometryInit__FP7XStream
// Start address: 0x38b800
void iCharRTObjGeometryInit(XStream* stream)
{
	_i3DObjInfo info;
	// Line 1157, Address: 0x38b800, Func Offset: 0
	// Line 1163, Address: 0x38b810, Func Offset: 0x10
	// Line 1166, Address: 0x38b820, Func Offset: 0x20
	// Line 1168, Address: 0x38b858, Func Offset: 0x58
	// Line 1169, Address: 0x38b878, Func Offset: 0x78
	// Line 1170, Address: 0x38b898, Func Offset: 0x98
	// Line 1172, Address: 0x38b8b8, Func Offset: 0xb8
	// Line 1173, Address: 0x38b8c4, Func Offset: 0xc4
	// Func End, Address: 0x38b8d8, Func Offset: 0xd8
}

// iCharRTObjTextureInit__FP7XStream
// Start address: 0x38b8e0
void iCharRTObjTextureInit(XStream* s)
{
	_xTex* next;
	// Line 1133, Address: 0x38b8e0, Func Offset: 0
	// Line 1137, Address: 0x38b8f4, Func Offset: 0x14
	// Line 1138, Address: 0x38b918, Func Offset: 0x38
	// Line 1140, Address: 0x38b9b8, Func Offset: 0xd8
	// Line 1141, Address: 0x38b9dc, Func Offset: 0xfc
	// Line 1142, Address: 0x38ba80, Func Offset: 0x1a0
	// Line 1144, Address: 0x38ba88, Func Offset: 0x1a8
	// Line 1146, Address: 0x38baac, Func Offset: 0x1cc
	// Line 1148, Address: 0x38bac0, Func Offset: 0x1e0
	// Line 1149, Address: 0x38bad4, Func Offset: 0x1f4
	// Line 1153, Address: 0x38bae0, Func Offset: 0x200
	// Func End, Address: 0x38baf8, Func Offset: 0x218
}

// iEnvMIDIDataInit__FP7XStream
// Start address: 0x38bb00
void iEnvMIDIDataInit()
{
	// Line 1129, Address: 0x38bb00, Func Offset: 0
	// Func End, Address: 0x38bbb0, Func Offset: 0xb0
}

// iEnvLightListInit__FP7XStream
// Start address: 0x38bbb0
void iEnvLightListInit()
{
	// Line 1128, Address: 0x38bbb0, Func Offset: 0
	// Func End, Address: 0x38bc60, Func Offset: 0xb0
}

// iEnvScriptInit__FP7XStream
// Start address: 0x38bc60
void iEnvScriptInit()
{
	// Line 1127, Address: 0x38bc60, Func Offset: 0
	// Func End, Address: 0x38bd10, Func Offset: 0xb0
}

// iCharRTObjAnimReadyInit__FP7XStream
// Start address: 0x38bd10
void iCharRTObjAnimReadyInit()
{
	// Line 1126, Address: 0x38bd10, Func Offset: 0
	// Func End, Address: 0x38bdc0, Func Offset: 0xb0
}

// iCharRTObjAnimAllInit__FP7XStream
// Start address: 0x38bdc0
void iCharRTObjAnimAllInit()
{
	// Line 1125, Address: 0x38bdc0, Func Offset: 0
	// Func End, Address: 0x38be70, Func Offset: 0xb0
}

// iCharMIDIDataInit__FP7XStream
// Start address: 0x38be70
void iCharMIDIDataInit()
{
	// Line 1124, Address: 0x38be70, Func Offset: 0
	// Func End, Address: 0x38bf20, Func Offset: 0xb0
}

// iCharSoundBankInit__FP7XStream
// Start address: 0x38bf20
void iCharSoundBankInit(XStream* s)
{
	uint32 i;
	uint8* sample;
	uint8* base;
	uint32* u32ptr;
	int32 soundID;
	uint16 nextRate;
	uint16 nextSize;
	uint32 nextOffset;
	uint32 nextID;
	uint32 count;
	// Line 1012, Address: 0x38bf20, Func Offset: 0
	// Line 1031, Address: 0x38bf48, Func Offset: 0x28
	// Line 1032, Address: 0x38bf4c, Func Offset: 0x2c
	// Line 1033, Address: 0x38bf50, Func Offset: 0x30
	// Line 1036, Address: 0x38bf58, Func Offset: 0x38
	// Line 1038, Address: 0x38bf64, Func Offset: 0x44
	// Line 1039, Address: 0x38bf6c, Func Offset: 0x4c
	// Line 1041, Address: 0x38bf74, Func Offset: 0x54
	// Line 1042, Address: 0x38bf78, Func Offset: 0x58
	// Line 1043, Address: 0x38bf7c, Func Offset: 0x5c
	// Line 1045, Address: 0x38bf80, Func Offset: 0x60
	// Line 1047, Address: 0x38bf84, Func Offset: 0x64
	// Line 1048, Address: 0x38bf94, Func Offset: 0x74
	// Line 1051, Address: 0x38bfa0, Func Offset: 0x80
	// Line 1052, Address: 0x38bfb4, Func Offset: 0x94
	// Line 1054, Address: 0x38bfc0, Func Offset: 0xa0
	// Line 1055, Address: 0x38bfd8, Func Offset: 0xb8
	// Line 1058, Address: 0x38bfe0, Func Offset: 0xc0
	// Line 1059, Address: 0x38c004, Func Offset: 0xe4
	// Line 1061, Address: 0x38c01c, Func Offset: 0xfc
	// Line 1062, Address: 0x38c020, Func Offset: 0x100
	// Line 1063, Address: 0x38c034, Func Offset: 0x114
	// Func End, Address: 0x38c064, Func Offset: 0x144
}

// iEnvSoundBankInit__FP7XStream
// Start address: 0x38c070
void iEnvSoundBankInit(XStream* stream)
{
	uint32 i;
	uint8* sample;
	uint8* base;
	uint32* u32ptr;
	int32 soundID;
	uint16 nextRate;
	uint16 nextSize;
	uint32 nextOffset;
	uint32 nextID;
	uint32 count;
	// Line 957, Address: 0x38c070, Func Offset: 0
	// Line 969, Address: 0x38c098, Func Offset: 0x28
	// Line 970, Address: 0x38c09c, Func Offset: 0x2c
	// Line 971, Address: 0x38c0a0, Func Offset: 0x30
	// Line 980, Address: 0x38c0a8, Func Offset: 0x38
	// Line 982, Address: 0x38c0b4, Func Offset: 0x44
	// Line 983, Address: 0x38c0bc, Func Offset: 0x4c
	// Line 985, Address: 0x38c0c4, Func Offset: 0x54
	// Line 986, Address: 0x38c0c8, Func Offset: 0x58
	// Line 987, Address: 0x38c0cc, Func Offset: 0x5c
	// Line 989, Address: 0x38c0d0, Func Offset: 0x60
	// Line 992, Address: 0x38c0d4, Func Offset: 0x64
	// Line 993, Address: 0x38c0e4, Func Offset: 0x74
	// Line 996, Address: 0x38c0f0, Func Offset: 0x80
	// Line 997, Address: 0x38c104, Func Offset: 0x94
	// Line 999, Address: 0x38c110, Func Offset: 0xa0
	// Line 1000, Address: 0x38c128, Func Offset: 0xb8
	// Line 1003, Address: 0x38c130, Func Offset: 0xc0
	// Line 1004, Address: 0x38c154, Func Offset: 0xe4
	// Line 1007, Address: 0x38c16c, Func Offset: 0xfc
	// Line 1008, Address: 0x38c170, Func Offset: 0x100
	// Line 1009, Address: 0x38c184, Func Offset: 0x114
	// Func End, Address: 0x38c1b4, Func Offset: 0x144
}

// iEnvSceneInit__FP7XStream
// Start address: 0x38c1c0
void iEnvSceneInit(XStream* stream)
{
	int32 offset;
	int32 i;
	xNavLink* xnavlink;
	xNavPoint* xnavpoint;
	xLight* xlight;
	xMarker* xmarker;
	xCamera* xcamera;
	xEntryPoint* xentryPoint;
	xCondition* xcondition;
	xAction* xaction;
	xRule* xrule;
	xTrigger* xtrigger;
	xLight* lightBuffer;
	xEntryPoint* entryPointBuffer;
	xMarker* markerBuffer;
	xCamera* cameraBuffer;
	xCondition* conditionBuffer;
	xAction* actionBuffer;
	xRule* ruleBuffer;
	iLightResource* light;
	iEntryPointResource* entryPoint;
	iMarkerResource* marker;
	iCameraResource* camera;
	iConditionResource* condition;
	iActionResource* action;
	iRuleResource* rule;
	iTriggerResource* trigger;
	uint8* lightPointer;
	uint8* markerPointer;
	uint8* cameraPointer;
	uint8* navLinkPointer;
	uint8* navPointPointer;
	uint8* entryPointPointer;
	uint8* conditionPointer;
	uint8* actionPointer;
	uint8* rulePointer;
	uint8* triggerPointer;
	uint8* floorPointer;
	uint8* pU8;
	uint32* pU32;
	int32 lightOffset;
	int32 lightCount;
	int32 markerOffset;
	int32 markerCount;
	int32 cameraOffset;
	int32 cameraCount;
	int32 navLinkOffset;
	int32 navLinkCount;
	int32 navPointOffset;
	int32 navPointCount;
	int32 entryPointOffset;
	int32 entryPointCount;
	int32 conditionOffset;
	int32 conditionCount;
	int32 actionOffset;
	int32 actionCount;
	int32 ruleOffset;
	int32 ruleCount;
	int32 triggerOffset;
	int32 triggerCount;
	int32 floorOffset;
	int32 floorSize;
	// Line 575, Address: 0x38c1c0, Func Offset: 0
	// Line 649, Address: 0x38c1f0, Func Offset: 0x30
	// Line 650, Address: 0x38c218, Func Offset: 0x58
	// Line 652, Address: 0x38c244, Func Offset: 0x84
	// Line 653, Address: 0x38c250, Func Offset: 0x90
	// Line 659, Address: 0x38c25c, Func Offset: 0x9c
	// Line 660, Address: 0x38c264, Func Offset: 0xa4
	// Line 662, Address: 0x38c26c, Func Offset: 0xac
	// Line 663, Address: 0x38c274, Func Offset: 0xb4
	// Line 664, Address: 0x38c27c, Func Offset: 0xbc
	// Line 668, Address: 0x38c280, Func Offset: 0xc0
	// Line 669, Address: 0x38c28c, Func Offset: 0xcc
	// Line 670, Address: 0x38c294, Func Offset: 0xd4
	// Line 674, Address: 0x38c298, Func Offset: 0xd8
	// Line 675, Address: 0x38c2a4, Func Offset: 0xe4
	// Line 676, Address: 0x38c2ac, Func Offset: 0xec
	// Line 680, Address: 0x38c2b0, Func Offset: 0xf0
	// Line 681, Address: 0x38c2bc, Func Offset: 0xfc
	// Line 682, Address: 0x38c2c4, Func Offset: 0x104
	// Line 686, Address: 0x38c2cc, Func Offset: 0x10c
	// Line 687, Address: 0x38c2d8, Func Offset: 0x118
	// Line 688, Address: 0x38c2e0, Func Offset: 0x120
	// Line 692, Address: 0x38c2e8, Func Offset: 0x128
	// Line 693, Address: 0x38c2f4, Func Offset: 0x134
	// Line 694, Address: 0x38c2fc, Func Offset: 0x13c
	// Line 698, Address: 0x38c300, Func Offset: 0x140
	// Line 699, Address: 0x38c30c, Func Offset: 0x14c
	// Line 700, Address: 0x38c314, Func Offset: 0x154
	// Line 704, Address: 0x38c31c, Func Offset: 0x15c
	// Line 705, Address: 0x38c328, Func Offset: 0x168
	// Line 706, Address: 0x38c330, Func Offset: 0x170
	// Line 710, Address: 0x38c334, Func Offset: 0x174
	// Line 711, Address: 0x38c340, Func Offset: 0x180
	// Line 712, Address: 0x38c348, Func Offset: 0x188
	// Line 716, Address: 0x38c34c, Func Offset: 0x18c
	// Line 717, Address: 0x38c358, Func Offset: 0x198
	// Line 718, Address: 0x38c360, Func Offset: 0x1a0
	// Line 722, Address: 0x38c368, Func Offset: 0x1a8
	// Line 723, Address: 0x38c374, Func Offset: 0x1b4
	// Line 724, Address: 0x38c378, Func Offset: 0x1b8
	// Line 734, Address: 0x38c37c, Func Offset: 0x1bc
	// Line 736, Address: 0x38c388, Func Offset: 0x1c8
	// Line 737, Address: 0x38c3b0, Func Offset: 0x1f0
	// Line 738, Address: 0x38c3c4, Func Offset: 0x204
	// Line 742, Address: 0x38c3cc, Func Offset: 0x20c
	// Line 750, Address: 0x38c3d4, Func Offset: 0x214
	// Line 754, Address: 0x38c400, Func Offset: 0x240
	// Line 756, Address: 0x38c40c, Func Offset: 0x24c
	// Line 760, Address: 0x38c434, Func Offset: 0x274
	// Line 764, Address: 0x38c45c, Func Offset: 0x29c
	// Line 768, Address: 0x38c484, Func Offset: 0x2c4
	// Line 772, Address: 0x38c4ac, Func Offset: 0x2ec
	// Line 776, Address: 0x38c4d4, Func Offset: 0x314
	// Line 781, Address: 0x38c4fc, Func Offset: 0x33c
	// Line 788, Address: 0x38c520, Func Offset: 0x360
	// Line 789, Address: 0x38c52c, Func Offset: 0x36c
	// Line 796, Address: 0x38c534, Func Offset: 0x374
	// Line 797, Address: 0x38c53c, Func Offset: 0x37c
	// Line 799, Address: 0x38c548, Func Offset: 0x388
	// Line 801, Address: 0x38c54c, Func Offset: 0x38c
	// Line 802, Address: 0x38c550, Func Offset: 0x390
	// Line 803, Address: 0x38c55c, Func Offset: 0x39c
	// Line 811, Address: 0x38c578, Func Offset: 0x3b8
	// Line 813, Address: 0x38c584, Func Offset: 0x3c4
	// Line 815, Address: 0x38c588, Func Offset: 0x3c8
	// Line 816, Address: 0x38c58c, Func Offset: 0x3cc
	// Line 818, Address: 0x38c598, Func Offset: 0x3d8
	// Line 819, Address: 0x38c59c, Func Offset: 0x3dc
	// Line 820, Address: 0x38c5a8, Func Offset: 0x3e8
	// Line 828, Address: 0x38c5c8, Func Offset: 0x408
	// Line 830, Address: 0x38c5d4, Func Offset: 0x414
	// Line 831, Address: 0x38c5dc, Func Offset: 0x41c
	// Line 839, Address: 0x38c600, Func Offset: 0x440
	// Line 841, Address: 0x38c60c, Func Offset: 0x44c
	// Line 842, Address: 0x38c614, Func Offset: 0x454
	// Line 849, Address: 0x38c638, Func Offset: 0x478
	// Line 850, Address: 0x38c63c, Func Offset: 0x47c
	// Line 852, Address: 0x38c648, Func Offset: 0x488
	// Line 853, Address: 0x38c64c, Func Offset: 0x48c
	// Line 855, Address: 0x38c668, Func Offset: 0x4a8
	// Line 856, Address: 0x38c674, Func Offset: 0x4b4
	// Line 863, Address: 0x38c680, Func Offset: 0x4c0
	// Line 864, Address: 0x38c684, Func Offset: 0x4c4
	// Line 866, Address: 0x38c690, Func Offset: 0x4d0
	// Line 867, Address: 0x38c694, Func Offset: 0x4d4
	// Line 868, Address: 0x38c6a0, Func Offset: 0x4e0
	// Line 870, Address: 0x38c6b8, Func Offset: 0x4f8
	// Line 871, Address: 0x38c6c4, Func Offset: 0x504
	// Line 874, Address: 0x38c6d0, Func Offset: 0x510
	// Line 876, Address: 0x38c6dc, Func Offset: 0x51c
	// Line 877, Address: 0x38c6e0, Func Offset: 0x520
	// Line 879, Address: 0x38c700, Func Offset: 0x540
	// Line 880, Address: 0x38c704, Func Offset: 0x544
	// Line 881, Address: 0x38c724, Func Offset: 0x564
	// Line 893, Address: 0x38c740, Func Offset: 0x580
	// Line 895, Address: 0x38c74c, Func Offset: 0x58c
	// Line 896, Address: 0x38c750, Func Offset: 0x590
	// Line 901, Address: 0x38c75c, Func Offset: 0x59c
	// Line 905, Address: 0x38c760, Func Offset: 0x5a0
	// Line 908, Address: 0x38c768, Func Offset: 0x5a8
	// Line 910, Address: 0x38c780, Func Offset: 0x5c0
	// Line 912, Address: 0x38c798, Func Offset: 0x5d8
	// Line 919, Address: 0x38c7a4, Func Offset: 0x5e4
	// Line 922, Address: 0x38c7b0, Func Offset: 0x5f0
	// Line 923, Address: 0x38c7b4, Func Offset: 0x5f4
	// Line 925, Address: 0x38c7c0, Func Offset: 0x600
	// Line 926, Address: 0x38c7c8, Func Offset: 0x608
	// Line 928, Address: 0x38c7f0, Func Offset: 0x630
	// Line 935, Address: 0x38c7fc, Func Offset: 0x63c
	// Line 938, Address: 0x38c808, Func Offset: 0x648
	// Line 939, Address: 0x38c80c, Func Offset: 0x64c
	// Line 941, Address: 0x38c818, Func Offset: 0x658
	// Line 942, Address: 0x38c81c, Func Offset: 0x65c
	// Line 944, Address: 0x38c838, Func Offset: 0x678
	// Line 951, Address: 0x38c840, Func Offset: 0x680
	// Line 952, Address: 0x38c854, Func Offset: 0x694
	// Func End, Address: 0x38c888, Func Offset: 0x6c8
}

// iCharDNPCAnimAllInit__FP7XStream
// Start address: 0x38c890
void iCharDNPCAnimAllInit(XStream* stream)
{
	// Line 540, Address: 0x38c890, Func Offset: 0
	// Line 541, Address: 0x38c8a0, Func Offset: 0x10
	// Line 543, Address: 0x38c948, Func Offset: 0xb8
	// Line 546, Address: 0x38c994, Func Offset: 0x104
	// Line 547, Address: 0x38c9a0, Func Offset: 0x110
	// Func End, Address: 0x38c9b4, Func Offset: 0x124
}

// iCharDNPCAnimReadyInit__FP7XStream
// Start address: 0x38c9c0
void iCharDNPCAnimReadyInit(XStream* stream)
{
	// Line 526, Address: 0x38c9c0, Func Offset: 0
	// Line 527, Address: 0x38c9d0, Func Offset: 0x10
	// Line 529, Address: 0x38ca78, Func Offset: 0xb8
	// Line 531, Address: 0x38cac4, Func Offset: 0x104
	// Func End, Address: 0x38cad8, Func Offset: 0x118
}

// iCharDNPCSkeletonInstance__FUiPvPvPv
// Start address: 0x38cae0
void iCharDNPCSkeletonInstance(uint32 assetID, void* resource, void* runtime)
{
	// Line 513, Address: 0x38cae0, Func Offset: 0
	// Line 514, Address: 0x38caf0, Func Offset: 0x10
	// Line 517, Address: 0x38cb10, Func Offset: 0x30
	// Func End, Address: 0x38cb24, Func Offset: 0x44
}

// iCharDNPCSkeletonInit__FP7XStream
// Start address: 0x38cb30
void iCharDNPCSkeletonInit(XStream* stream)
{
	// Line 506, Address: 0x38cb30, Func Offset: 0
	// Line 507, Address: 0x38cb4c, Func Offset: 0x1c
	// Line 509, Address: 0x38cb70, Func Offset: 0x40
	// Line 510, Address: 0x38cb7c, Func Offset: 0x4c
	// Func End, Address: 0x38cb84, Func Offset: 0x54
}

// iCharDNPCGeometryInstance__FUiPvPvPv
// Start address: 0x38cb90
void iCharDNPCGeometryInstance()
{
	// Line 496, Address: 0x38cb90, Func Offset: 0
	// Func End, Address: 0x38cb98, Func Offset: 0x8
}

// iCharDNPCGeometryInit__FP7XStream
// Start address: 0x38cba0
void iCharDNPCGeometryInit(XStream* stream)
{
	_i3DObjInfo info;
	// Line 477, Address: 0x38cba0, Func Offset: 0
	// Line 480, Address: 0x38cbb0, Func Offset: 0x10
	// Line 482, Address: 0x38cbc0, Func Offset: 0x20
	// Line 484, Address: 0x38cc68, Func Offset: 0xc8
	// Line 485, Address: 0x38cca0, Func Offset: 0x100
	// Line 487, Address: 0x38ccd8, Func Offset: 0x138
	// Line 488, Address: 0x38ccf8, Func Offset: 0x158
	// Line 489, Address: 0x38cd18, Func Offset: 0x178
	// Line 491, Address: 0x38cd38, Func Offset: 0x198
	// Line 492, Address: 0x38cd44, Func Offset: 0x1a4
	// Func End, Address: 0x38cd58, Func Offset: 0x1b8
}

// iCharSNPCAnimAllInit__FP7XStream
// Start address: 0x38cd60
void iCharSNPCAnimAllInit(XStream* stream)
{
	// Line 460, Address: 0x38cd60, Func Offset: 0
	// Line 461, Address: 0x38cd70, Func Offset: 0x10
	// Line 463, Address: 0x38ce18, Func Offset: 0xb8
	// Line 467, Address: 0x38ce64, Func Offset: 0x104
	// Line 468, Address: 0x38ce70, Func Offset: 0x110
	// Func End, Address: 0x38ce84, Func Offset: 0x124
}

// iCharSNPCAnimReadyInit__FP7XStream
// Start address: 0x38ce90
void iCharSNPCAnimReadyInit(XStream* stream)
{
	// Line 445, Address: 0x38ce90, Func Offset: 0
	// Line 446, Address: 0x38cea0, Func Offset: 0x10
	// Line 448, Address: 0x38cf48, Func Offset: 0xb8
	// Line 451, Address: 0x38cf94, Func Offset: 0x104
	// Func End, Address: 0x38cfa8, Func Offset: 0x118
}

// iCharSNPCSkeletonInstance__FUiPvPvPv
// Start address: 0x38cfb0
void iCharSNPCSkeletonInstance(uint32 assetID, void* resource, void* runtime)
{
	// Line 431, Address: 0x38cfb0, Func Offset: 0
	// Line 433, Address: 0x38cfc0, Func Offset: 0x10
	// Line 436, Address: 0x38cfe0, Func Offset: 0x30
	// Func End, Address: 0x38cff4, Func Offset: 0x44
}

// iCharSNPCSkeletonInit__FP7XStream
// Start address: 0x38d000
void iCharSNPCSkeletonInit(XStream* stream)
{
	// Line 425, Address: 0x38d000, Func Offset: 0
	// Line 426, Address: 0x38d01c, Func Offset: 0x1c
	// Line 428, Address: 0x38d040, Func Offset: 0x40
	// Line 429, Address: 0x38d04c, Func Offset: 0x4c
	// Func End, Address: 0x38d054, Func Offset: 0x54
}

// iCharSNPCGeometryInstance__FUiPvPvPv
// Start address: 0x38d060
void iCharSNPCGeometryInstance()
{
	// Line 415, Address: 0x38d060, Func Offset: 0
	// Func End, Address: 0x38d068, Func Offset: 0x8
}

// iCharSNPCGeometryInit__FP7XStream
// Start address: 0x38d070
void iCharSNPCGeometryInit(XStream* stream)
{
	_i3DObjInfo info;
	// Line 396, Address: 0x38d070, Func Offset: 0
	// Line 399, Address: 0x38d080, Func Offset: 0x10
	// Line 401, Address: 0x38d090, Func Offset: 0x20
	// Line 403, Address: 0x38d138, Func Offset: 0xc8
	// Line 404, Address: 0x38d170, Func Offset: 0x100
	// Line 406, Address: 0x38d1a8, Func Offset: 0x138
	// Line 407, Address: 0x38d1c8, Func Offset: 0x158
	// Line 408, Address: 0x38d1e8, Func Offset: 0x178
	// Line 410, Address: 0x38d208, Func Offset: 0x198
	// Line 411, Address: 0x38d214, Func Offset: 0x1a4
	// Func End, Address: 0x38d228, Func Offset: 0x1b8
}

// iCharAshAnimAllInit__FP7XStream
// Start address: 0x38d230
void iCharAshAnimAllInit(XStream* stream)
{
	// Line 379, Address: 0x38d230, Func Offset: 0
	// Line 380, Address: 0x38d240, Func Offset: 0x10
	// Line 382, Address: 0x38d2e4, Func Offset: 0xb4
	// Line 386, Address: 0x38d330, Func Offset: 0x100
	// Line 387, Address: 0x38d33c, Func Offset: 0x10c
	// Func End, Address: 0x38d350, Func Offset: 0x120
}

// iCharAshAnimReadyInit__FP7XStream
// Start address: 0x38d350
void iCharAshAnimReadyInit(XStream* stream)
{
	// Line 364, Address: 0x38d350, Func Offset: 0
	// Line 365, Address: 0x38d360, Func Offset: 0x10
	// Line 367, Address: 0x38d404, Func Offset: 0xb4
	// Line 370, Address: 0x38d450, Func Offset: 0x100
	// Func End, Address: 0x38d464, Func Offset: 0x114
}

// iCharAshSkeletonInstance__FUiPvPvPv
// Start address: 0x38d470
void iCharAshSkeletonInstance(uint32 assetID, void* resource, void* runtime)
{
	// Line 351, Address: 0x38d470, Func Offset: 0
	// Line 352, Address: 0x38d480, Func Offset: 0x10
	// Line 355, Address: 0x38d4a0, Func Offset: 0x30
	// Func End, Address: 0x38d4b4, Func Offset: 0x44
}

// iCharAshSkeletonInit__FP7XStream
// Start address: 0x38d4c0
void iCharAshSkeletonInit(XStream* stream)
{
	// Line 344, Address: 0x38d4c0, Func Offset: 0
	// Line 345, Address: 0x38d4dc, Func Offset: 0x1c
	// Line 347, Address: 0x38d500, Func Offset: 0x40
	// Line 348, Address: 0x38d50c, Func Offset: 0x4c
	// Func End, Address: 0x38d514, Func Offset: 0x54
}

// iCharAshGeometryInstance__FUiPvPvPv
// Start address: 0x38d520
void iCharAshGeometryInstance()
{
	// Line 334, Address: 0x38d520, Func Offset: 0
	// Func End, Address: 0x38d528, Func Offset: 0x8
}

// iCharAshGeometryInit__FP7XStream
// Start address: 0x38d530
void iCharAshGeometryInit(XStream* stream)
{
	_i3DObjInfo info;
	// Line 315, Address: 0x38d530, Func Offset: 0
	// Line 318, Address: 0x38d540, Func Offset: 0x10
	// Line 320, Address: 0x38d550, Func Offset: 0x20
	// Line 322, Address: 0x38d5f4, Func Offset: 0xc4
	// Line 323, Address: 0x38d62c, Func Offset: 0xfc
	// Line 325, Address: 0x38d664, Func Offset: 0x134
	// Line 326, Address: 0x38d684, Func Offset: 0x154
	// Line 327, Address: 0x38d6a4, Func Offset: 0x174
	// Line 329, Address: 0x38d6c4, Func Offset: 0x194
	// Line 330, Address: 0x38d6d0, Func Offset: 0x1a0
	// Func End, Address: 0x38d6e4, Func Offset: 0x1b4
}

// iGetAnimations__FP7XStreamPUiPP8tagXAnim
// Start address: 0x38d6f0
void iGetAnimations(XStream* stream, uint32* count, tagXAnim** anims)
{
	tagiAnimFrame* joint;
	tagiAnimResource* ar;
	float32* data;
	int32 frameCount;
	int32 a;
	uint32 j;
	tagXAnim* xa;
	int32 animCount;
	uint32* pCount;
	// Line 202, Address: 0x38d6f0, Func Offset: 0
	// Line 203, Address: 0x38d720, Func Offset: 0x30
	// Line 210, Address: 0x38d724, Func Offset: 0x34
	// Line 211, Address: 0x38d72c, Func Offset: 0x3c
	// Line 213, Address: 0x38d734, Func Offset: 0x44
	// Line 214, Address: 0x38d738, Func Offset: 0x48
	// Line 216, Address: 0x38d75c, Func Offset: 0x6c
	// Line 217, Address: 0x38d760, Func Offset: 0x70
	// Line 219, Address: 0x38d76c, Func Offset: 0x7c
	// Line 220, Address: 0x38d770, Func Offset: 0x80
	// Line 222, Address: 0x38d774, Func Offset: 0x84
	// Line 223, Address: 0x38d778, Func Offset: 0x88
	// Line 232, Address: 0x38d77c, Func Offset: 0x8c
	// Line 240, Address: 0x38d7a0, Func Offset: 0xb0
	// Line 241, Address: 0x38d7b0, Func Offset: 0xc0
	// Line 242, Address: 0x38d7bc, Func Offset: 0xcc
	// Line 243, Address: 0x38d7c8, Func Offset: 0xd8
	// Line 244, Address: 0x38d7d4, Func Offset: 0xe4
	// Line 247, Address: 0x38d7e0, Func Offset: 0xf0
	// Line 249, Address: 0x38d7ec, Func Offset: 0xfc
	// Line 251, Address: 0x38d800, Func Offset: 0x110
	// Line 252, Address: 0x38d808, Func Offset: 0x118
	// Line 253, Address: 0x38d80c, Func Offset: 0x11c
	// Line 255, Address: 0x38d814, Func Offset: 0x124
	// Line 256, Address: 0x38d818, Func Offset: 0x128
	// Line 258, Address: 0x38d820, Func Offset: 0x130
	// Line 259, Address: 0x38d824, Func Offset: 0x134
	// Line 260, Address: 0x38d82c, Func Offset: 0x13c
	// Line 262, Address: 0x38d830, Func Offset: 0x140
	// Line 263, Address: 0x38d834, Func Offset: 0x144
	// Line 265, Address: 0x38d83c, Func Offset: 0x14c
	// Line 266, Address: 0x38d840, Func Offset: 0x150
	// Line 268, Address: 0x38d848, Func Offset: 0x158
	// Line 269, Address: 0x38d84c, Func Offset: 0x15c
	// Line 270, Address: 0x38d854, Func Offset: 0x164
	// Line 276, Address: 0x38d868, Func Offset: 0x178
	// Line 277, Address: 0x38d86c, Func Offset: 0x17c
	// Line 283, Address: 0x38d880, Func Offset: 0x190
	// Line 284, Address: 0x38d884, Func Offset: 0x194
	// Line 287, Address: 0x38d898, Func Offset: 0x1a8
	// Line 291, Address: 0x38d8a4, Func Offset: 0x1b4
	// Line 294, Address: 0x38d8dc, Func Offset: 0x1ec
	// Line 296, Address: 0x38d900, Func Offset: 0x210
	// Line 301, Address: 0x38d928, Func Offset: 0x238
	// Line 304, Address: 0x38d940, Func Offset: 0x250
	// Line 306, Address: 0x38d954, Func Offset: 0x264
	// Func End, Address: 0x38d984, Func Offset: 0x294
}

// iGet3DObjInfo__FP7XStreamP11_i3DObjInfo
// Start address: 0x38d990
void iGet3DObjInfo(XStream* stream, _i3DObjInfo* info)
{
	uint8* gData;
	int32 softSkin;
	_iGeomInfo* geom;
	tagP2Mesh* next;
	tagP2Mesh* curr;
	tagP2Mesh* meshBuffer;
	uint32* ptr;
	uint32 i;
	int8* data;
	// Line 96, Address: 0x38d990, Func Offset: 0
	// Line 107, Address: 0x38d9b0, Func Offset: 0x20
	// Line 109, Address: 0x38d9b4, Func Offset: 0x24
	// Line 112, Address: 0x38d9bc, Func Offset: 0x2c
	// Line 113, Address: 0x38d9c8, Func Offset: 0x38
	// Line 114, Address: 0x38d9d4, Func Offset: 0x44
	// Line 118, Address: 0x38d9dc, Func Offset: 0x4c
	// Line 120, Address: 0x38d9e8, Func Offset: 0x58
	// Line 121, Address: 0x38d9ec, Func Offset: 0x5c
	// Line 123, Address: 0x38d9f0, Func Offset: 0x60
	// Line 124, Address: 0x38d9f8, Func Offset: 0x68
	// Line 126, Address: 0x38d9fc, Func Offset: 0x6c
	// Line 127, Address: 0x38da04, Func Offset: 0x74
	// Line 129, Address: 0x38da08, Func Offset: 0x78
	// Line 130, Address: 0x38da10, Func Offset: 0x80
	// Line 138, Address: 0x38da14, Func Offset: 0x84
	// Line 139, Address: 0x38da18, Func Offset: 0x88
	// Line 145, Address: 0x38da2c, Func Offset: 0x9c
	// Line 146, Address: 0x38da30, Func Offset: 0xa0
	// Line 148, Address: 0x38da44, Func Offset: 0xb4
	// Line 150, Address: 0x38da4c, Func Offset: 0xbc
	// Line 151, Address: 0x38da50, Func Offset: 0xc0
	// Line 152, Address: 0x38da64, Func Offset: 0xd4
	// Line 155, Address: 0x38da6c, Func Offset: 0xdc
	// Line 158, Address: 0x38da70, Func Offset: 0xe0
	// Line 159, Address: 0x38da74, Func Offset: 0xe4
	// Line 161, Address: 0x38da7c, Func Offset: 0xec
	// Line 162, Address: 0x38da90, Func Offset: 0x100
	// Line 165, Address: 0x38da98, Func Offset: 0x108
	// Line 166, Address: 0x38daa4, Func Offset: 0x114
	// Line 168, Address: 0x38daa8, Func Offset: 0x118
	// Line 169, Address: 0x38daac, Func Offset: 0x11c
	// Line 171, Address: 0x38dac0, Func Offset: 0x130
	// Line 173, Address: 0x38dae4, Func Offset: 0x154
	// Line 174, Address: 0x38daf0, Func Offset: 0x160
	// Line 175, Address: 0x38db00, Func Offset: 0x170
	// Line 176, Address: 0x38db10, Func Offset: 0x180
	// Line 177, Address: 0x38db14, Func Offset: 0x184
	// Line 178, Address: 0x38db1c, Func Offset: 0x18c
	// Line 180, Address: 0x38db20, Func Offset: 0x190
	// Line 186, Address: 0x38db2c, Func Offset: 0x19c
	// Line 194, Address: 0x38db58, Func Offset: 0x1c8
	// Line 195, Address: 0x38db60, Func Offset: 0x1d0
	// Line 197, Address: 0x38db78, Func Offset: 0x1e8
	// Line 198, Address: 0x38db7c, Func Offset: 0x1ec
	// Func End, Address: 0x38dba0, Func Offset: 0x210
}

