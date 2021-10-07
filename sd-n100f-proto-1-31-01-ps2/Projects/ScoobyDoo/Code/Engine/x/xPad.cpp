typedef struct iTriggerResource;
typedef struct _rxHeapSuperBlockDescriptor;
typedef struct _rwResEntryTag;
typedef struct xNavPoint;
typedef struct _RxHeap;
typedef struct _rxHeapBlockHeader;
typedef struct tagiAnimFrame;
typedef struct _RpMeshHeader;
typedef struct _RpClump;
typedef struct tagP2Mesh;
typedef enum _RxClusterValidityReq;
typedef struct _RpWorld;
typedef struct _rxHeapFreeBlock;
typedef struct tagxPlayer;
typedef struct _RxPipelineNodeTopSortData;
typedef struct iConditionResource;
typedef struct xTrigger;
typedef struct _RpCollSector;
typedef struct _RxPipelineNode;
typedef struct iConditionRuntime;
typedef struct _RxClusterDefinition;
typedef struct tagP2VERTEX;
typedef struct tagXAnim;
typedef enum _RwTextureFilterMode;
typedef struct _RxPipelineNodeParam;
typedef struct _RxPipelineCluster;
typedef enum _rxEmbeddedPacketState;
typedef struct tagiAnimResource;
typedef struct _RpSector;
typedef struct xRule;
typedef struct tagP2MeshVertex;
typedef struct xEntryPoint;
typedef struct _RxNodeDefinition;
typedef enum _RxClusterValid;
typedef struct tagiAnimRuntime;
typedef struct tagP2Weight;
typedef struct tagiFloorTri;
typedef struct iEntryPointResource;
typedef struct tagxStateLink;
typedef struct _RwSurfaceProperties;
typedef struct iRuleResource;
typedef struct _RwLLLink;
typedef struct _iEntryPointRuntime;
typedef struct XStreamHeader;
typedef struct _RpMaterialList;
typedef struct xScene;
typedef struct _tagNativePadData;
typedef struct Vector3D;
typedef struct _RwV3d;
typedef struct _xActor;
typedef struct tagxPad;
typedef struct tagxPadAction;
typedef struct _RpMaterial;
typedef struct _FCinfo;
typedef struct _RpWorldSector;
typedef struct tagXAnimTrigger;
typedef struct _RxPipelineRequiresCluster;
typedef struct xCamera;
typedef struct xLight;
typedef struct tagxStateThread;
typedef struct _RpPolygon;
typedef struct Vector4D;
typedef struct p2Camera;
typedef struct _RxPipeline;
typedef struct _RwTexDictionary;
typedef struct iLightResource;
typedef struct tagiFloor;
typedef struct tagxState;
typedef struct _iLightRuntime;
typedef struct _rxReq;
typedef struct _RpVertexNormal;
typedef struct tagXAnimControl;
typedef struct tagiMesh;
typedef struct _RwTexCoords;
typedef struct xAction;
typedef struct tagXStreamDirectoryEntry;
typedef struct _RwObject;
typedef struct iActorRuntime;
typedef struct _RwRGBA;
typedef struct _XBUTTON;
typedef struct tagxStateMgr;
typedef struct iMarkerResource;
typedef struct _RxOutputSpec;
typedef struct xMarker;
typedef struct xCondition;
typedef struct p2CameraVersion;
typedef struct _RwTexture;
typedef struct _RwBBox;
typedef struct _RxClusterRef;
typedef struct _iVFXResource;
typedef struct tagxPhysicsObject;
typedef struct tagPadMgrData;
typedef struct _RwRaster;
typedef struct _tagiEnvRuntime;
typedef struct _RxIoSpec;
typedef struct xNavLink;
typedef struct _iSFXResource;
typedef struct iCameraResource;
typedef struct _RxNodeMethods;
typedef enum _RxClusterForcePresent;
typedef struct _iRenderEffects;
typedef struct _RxPacket;
typedef enum _RxNodeDefEditable;
typedef struct _RxClusterUnion;
typedef struct tag_xCameraControl;
typedef struct iActionRuntime;
typedef enum _RwTextureAddressMode;
typedef struct _RxCluster;
typedef struct _RwLinkList;
typedef enum _rpWorldRenderOrder;
typedef struct iActionResource;
typedef struct _tagxEnv;
typedef struct _p2Geom;
typedef struct iDisplayCamera;
typedef struct tagXStreamMDSDirectory;

typedef _RpWorldSector*(*type_0)(_RpWorldSector*);
typedef void(*type_5)(_rwResEntryTag*);
typedef int32(*type_9)(_RxPipelineNode*, _RxPipelineNodeParam*);
typedef int32(*type_12)(_RxNodeDefinition*);
typedef void(*type_15)(_RxNodeDefinition*);
typedef int32(*type_19)(_RxPipelineNode*);
typedef int32(*type_20)(tagxPad*, tagxPadAction*, int32);
typedef void(*type_21)(tagxPad*, int32, tagxPadAction*);
typedef void(*type_23)(_RxPipelineNode*);
typedef void(*type_24)(tagxPad*);
typedef _RpClump*(*type_28)(_RpClump*, void*);
typedef int32(*type_29)(_RxPipelineNode*, _RxPipeline*);
typedef uint32(*type_34)(_RxPipelineNode*, uint32, uint32, void*);
typedef void(*type_39)(tagxPad*);
typedef void(*type_44)(_xActor*, int32, tagXAnim*, tagXAnimTrigger*);

typedef iTriggerResource* type_1[20];
typedef tagXStreamDirectoryEntry type_2[1000];
typedef tagxPadAction type_3[33];
typedef tagxPadAction type_4[33][4];
typedef Vector3D type_6[4];
typedef iTriggerResource* type_7[20];
typedef Vector3D type_8[5];
typedef int32 type_10[4];
typedef iTriggerResource* type_11[20];
typedef iTriggerResource* type_13[20];
typedef uint16 type_14[3];
typedef iTriggerResource* type_16[20];
typedef _XBUTTON type_17[16];
typedef uint32 type_18[4];
typedef iTriggerResource* type_22[20];
typedef iTriggerResource* type_25[20];
typedef tagxPlayer type_26[0];
typedef uint8 type_27[6];
typedef iTriggerResource* type_30[20];
typedef int8 type_31[2048];
typedef iTriggerResource* type_32[20];
typedef tagxState* type_33[10];
typedef iTriggerResource* type_35[20];
typedef float32 type_36[3];
typedef iTriggerResource* type_37[20];
typedef _RxCluster type_38[1];
typedef int8 type_40[32];
typedef iLightResource type_41[2];
typedef tagxPad type_42[2];
typedef int8 type_43[32];
typedef uint8 type_45[3];
typedef int8 type_46[128];
typedef uint8 type_47[4];
typedef uint8 type_48[4];
typedef uint8 type_49[4];
typedef uint8 type_50[12];
typedef uint8 type_51[4];
typedef uint8 type_52[12];
typedef int32 type_53[7];
typedef tagxStateThread type_54[7];
typedef p2CameraVersion type_55[5];
typedef Vector3D type_56[4];
typedef uint8 type_57[4];
typedef uint16 type_58[3];
typedef uint8 type_59[3];
typedef uint16 type_60[3];
typedef iTriggerResource* type_61[20];

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

struct _rxHeapBlockHeader
{
	_rxHeapBlockHeader* prev;
	_rxHeapBlockHeader* next;
	uint32 size;
	_rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
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

struct _RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct _RpClump
{
	_RwObject object;
	_RwLinkList atomicList;
	_RwLLLink inWorldLink;
	_RpClump*(*callback)(_RpClump*, void*);
	uint16 renderFrame;
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

enum _RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
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

struct tagxPlayer
{
	int8 m_move;
	int8 m_rotate;
	uint8 m_run;
	uint8 m_turnSpeed;
	uint8 m_rightWeapon;
	uint8 m_leftWeapon;
	uint16 pad2;
	_xActor* m_actor;
};

struct _RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	_rxReq* req;
	void* initialisationData;
	uint32 initialisationDataSize;
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

struct iConditionRuntime
{
	xCondition* m_operand;
	uint16 m_match;
	uint16 m_trigger;
};

struct _RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct tagP2VERTEX
{
	float32 x;
	float32 y;
	float32 z;
	float32 tu;
	float32 tv;
};

struct tagXAnim
{
	tagiAnimResource* m_resource;
	tagiAnimRuntime* m_runtime;
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

struct _RpSector
{
	int32 type;
};

struct xRule
{
	iRuleResource* m_resource;
	void* m_runtime;
};

struct tagP2MeshVertex
{
	float32 m_x;
	float32 m_y;
	float32 m_z;
};

struct xEntryPoint
{
	iEntryPointResource* m_resource;
	_iEntryPointRuntime* m_runtime;
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

struct tagiAnimRuntime
{
	void* m_sfx;
	void* m_vfx;
};

struct tagP2Weight
{
	uint16 m_joint0;
	uint16 m_joint1;
	float32 m_weight0;
	float32 m_weight1;
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

struct tagxStateLink
{
	uint8 m_command;
	uint8 m_flags;
	uint16 m_state;
};

struct _RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

struct iRuleResource
{
	uint32 m_actionCount;
	xAction* m_action;
	uint32 m_conditionCount;
	xCondition* m_condition;
};

struct _RwLLLink
{
	_RwLLLink* next;
	_RwLLLink* prev;
};

struct _iEntryPointRuntime
{
	uint32 m_enabled;
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

struct _xActor
{
	void* m_resource;
	iActorRuntime* m_runtime;
	uint32 m_flags;
	tagxStateMgr* m_state;
	uint16 m_objectType;
	uint16 m_actorID;
	void* m_texture;
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

struct tagxPadAction
{
	uint32 m_action;
	uint16 m_button;
	uint16 m_status;
	uint8 pad;
	uint8 m_analogActive;
	int8 m_analogXValue;
	int8 m_analogYValue;
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

struct _FCinfo
{
	uint16 nidx[3];
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

struct tagXAnimTrigger
{
	uint16 m_frame;
	uint16 m_type;
	uint32 m_data;
};

struct _RxPipelineRequiresCluster
{
	_RxClusterDefinition* clusterDef;
	_RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
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

struct tagxStateThread
{
	tagxState* m_state;
	tagXAnimControl* m_animCtl;
	int32 m_deferredWaiting;
	tagxPadAction m_deferred;
	int32 m_rbp;
	tagxState* m_ring[10];
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

struct p2Camera
{
	Vector3D m_pos;
	Vector3D m_rot;
	float32 m_fov;
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

struct tagxState
{
	uint32 m_assetID;
	int32 m_animState;
	uint8* m_activeJoints;
	int16 m_calloutNumber;
	uint8 m_enterEvent;
	uint8 m_exitEvent;
	int32 m_linkCount;
	tagxStateLink* m_links;
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

struct tagXAnimControl
{
	uint16 m_active;
	uint8 m_state;
	uint8 m_chainState;
	tagXAnimControl* m_chainFrom;
	tagXAnim* m_anim;
	void* m_char;
	int16 m_prevFrame;
	int16 m_frame;
	int16 m_incr;
	int16 m_doneHandled;
	uint8* m_activeJoints;
	Vector3D m_startPosition;
	tagXAnimControl* m_next;
	uint8 m_startEvent;
	uint8 m_endEvent;
	uint8 m_loopEvent;
	uint8 pad;
};

struct tagiMesh
{
};

struct _RwTexCoords
{
	float32 u;
	float32 v;
};

struct xAction
{
	iActionResource* m_resource;
	iActionRuntime* m_runtime;
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

struct iActorRuntime
{
	tagXAnimControl* m_active;
	int32 m_available;
	float32 m_fovr;
	float32 m_bradius;
	uint8 m_onMaterial[4];
	int32 m_routeID;
	int32 m_routePosition;
	xNavPoint* m_routeNavPoint;
	int32 m_health;
	int32 m_sightFOV;
	int32 m_sight;
	int32 m_quiet;
	int32 m_canFly;
	int32 m_canStrafe;
	Vector3D m_memPosition[5];
	int32 m_groupID;
	int32 m_groupIgnore;
	_p2Geom m_geom;
	void* m_skeleton;
	void* m_data;
	tagxPhysicsObject m_phys;
	float32 m_lookat;
	int32 m_haveSpottedAsh;
};

struct _RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
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

struct tagxStateMgr
{
	int32 m_animationBasedMovement;
	int32 m_player;
	tagxState* m_states;
	tagxState* m_current;
	void(*m_triggerFunc)(_xActor*, int32, tagXAnim*, tagXAnimTrigger*);
	int32 m_threadActive[7];
	tagxStateThread m_thread[7];
};

struct iMarkerResource
{
	Vector3D m_pos;
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

struct _tagiEnvRuntime
{
	_RpWorld* world;
	Vector3D world_origin;
	_RwTexDictionary* tex_dict;
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

struct iCameraResource
{
	uint16 m_plateOffset;
	uint16 m_versions;
	p2CameraVersion m_version[5];
	uint32 m_frameCount;
	p2Camera* m_cameras;
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

struct tag_xCameraControl
{
	int32 m_sceneID;
	int32 m_camera;
	int32 m_version;
	int32 m_command;
	int32 m_startLoc;
	int32 m_startFrame;
	int32 m_speed;
	int32 m_endLoc;
	int32 m_endFrame;
	int32 m_actualFrame;
	int32 m_animFrame;
};

struct iActionRuntime
{
	xAction* m_and;
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

struct _p2Geom
{
	uint32 m_meshCount;
	tagP2Mesh* m_mesh;
	_iRenderEffects effects;
	_RpClump* m_clump;
};

struct iDisplayCamera
{
	Vector3D m_pos;
	Vector3D m_rot;
	float32 m_fov;
};

struct tagXStreamMDSDirectory
{
	uint32 count;
	tagXStreamDirectoryEntry directory[1000];
};

tagPadMgrData console;
int32 debugOpFlag;
int32 debugCallFlag;
int8 vAssertBuf2[128];
XStreamHeader currentHeader;
int32 gDebugMaskMode;
int32 gDebugShadowMode;
int32 gDebugDrawDebugInfo;
tag_xCameraControl gCamera;
xScene* xScene_current;
tagxPlayer g_Players[0];
void(*iPadInitFunc_Game)(tagxPad*);

int32 xPadButtonPressed(int32 pad, int32 whichXPAD_BUTTON);
void xConsoleMgrIdle(ulong32 theTime);
void(*)(tagxPad*, int32, tagxPadAction*) xPadMgrGetFuncPtrAction(int32 controller);
void xPadMgrAssignFuncPtrAction(int32 controller, void(*action)(tagxPad*, int32, tagxPadAction*));
int32(*)(tagxPad*, tagxPadAction*, int32) xPadMgrGetFuncPtrMapper(int32 controller);
void xPadMgrAssignFuncPtrMapper(int32 controller, int32(*mapper)(tagxPad*, tagxPadAction*, int32));
int16 xConsoleMgrInit(int32 maxControllers);
void xConsoleMgrRegisterScriptCalls();

// xPadButtonPressed__Fii
// Start address: 0x34c290
int32 xPadButtonPressed(int32 pad, int32 whichXPAD_BUTTON)
{
	_XBUTTON* b;
	// Line 483, Address: 0x34c290, Func Offset: 0
	// Line 486, Address: 0x34c2a8, Func Offset: 0x18
	// Line 487, Address: 0x34c348, Func Offset: 0xb8
	// Line 489, Address: 0x34c3f4, Func Offset: 0x164
	// Line 491, Address: 0x34c41c, Func Offset: 0x18c
	// Line 492, Address: 0x34c428, Func Offset: 0x198
	// Func End, Address: 0x34c440, Func Offset: 0x1b0
}

// xConsoleMgrIdle__FUl
// Start address: 0x34c440
void xConsoleMgrIdle(ulong32 theTime)
{
	int32 canGoOn;
	tagxPadAction* ca;
	tagxPadAction* ta;
	int32 k;
	int32 j;
	_xActor* a;
	tagxPlayer* p;
	int32 newCount;
	int32 i;
	int32 actionCount[4];
	tagxPadAction actionQueue[33][4];
	// Line 251, Address: 0x34c440, Func Offset: 0
	// Line 261, Address: 0x34c454, Func Offset: 0x14
	// Line 262, Address: 0x34c500, Func Offset: 0xc0
	// Line 268, Address: 0x34c5ac, Func Offset: 0x16c
	// Line 269, Address: 0x34c5b8, Func Offset: 0x178
	// Line 270, Address: 0x34c5f4, Func Offset: 0x1b4
	// Line 271, Address: 0x34c600, Func Offset: 0x1c0
	// Line 275, Address: 0x34c610, Func Offset: 0x1d0
	// Line 278, Address: 0x34c62c, Func Offset: 0x1ec
	// Line 281, Address: 0x34c638, Func Offset: 0x1f8
	// Line 286, Address: 0x34c65c, Func Offset: 0x21c
	// Line 289, Address: 0x34c668, Func Offset: 0x228
	// Line 291, Address: 0x34c694, Func Offset: 0x254
	// Line 295, Address: 0x34c744, Func Offset: 0x304
	// Line 298, Address: 0x34c760, Func Offset: 0x320
	// Line 306, Address: 0x34c77c, Func Offset: 0x33c
	// Line 307, Address: 0x34c788, Func Offset: 0x348
	// Line 311, Address: 0x34c7a8, Func Offset: 0x368
	// Line 313, Address: 0x34c7b4, Func Offset: 0x374
	// Line 314, Address: 0x34c7e4, Func Offset: 0x3a4
	// Line 317, Address: 0x34c7f4, Func Offset: 0x3b4
	// Line 319, Address: 0x34c800, Func Offset: 0x3c0
	// Line 320, Address: 0x34c830, Func Offset: 0x3f0
	// Line 323, Address: 0x34c840, Func Offset: 0x400
	// Line 324, Address: 0x34c850, Func Offset: 0x410
	// Line 325, Address: 0x34c860, Func Offset: 0x420
	// Line 326, Address: 0x34c868, Func Offset: 0x428
	// Line 328, Address: 0x34c870, Func Offset: 0x430
	// Line 329, Address: 0x34c888, Func Offset: 0x448
	// Line 332, Address: 0x34c890, Func Offset: 0x450
	// Line 333, Address: 0x34c8b8, Func Offset: 0x478
	// Line 336, Address: 0x34c8e4, Func Offset: 0x4a4
	// Line 337, Address: 0x34c8e8, Func Offset: 0x4a8
	// Line 338, Address: 0x34c8f4, Func Offset: 0x4b4
	// Line 339, Address: 0x34c934, Func Offset: 0x4f4
	// Line 340, Address: 0x34c93c, Func Offset: 0x4fc
	// Line 341, Address: 0x34cc14, Func Offset: 0x7d4
	// Line 342, Address: 0x34cc18, Func Offset: 0x7d8
	// Line 343, Address: 0x34cc1c, Func Offset: 0x7dc
	// Line 344, Address: 0x34cc20, Func Offset: 0x7e0
	// Line 345, Address: 0x34cc48, Func Offset: 0x808
	// Line 346, Address: 0x34cc5c, Func Offset: 0x81c
	// Line 347, Address: 0x34cc60, Func Offset: 0x820
	// Line 350, Address: 0x34cc7c, Func Offset: 0x83c
	// Line 351, Address: 0x34cc88, Func Offset: 0x848
	// Line 352, Address: 0x34cc8c, Func Offset: 0x84c
	// Line 353, Address: 0x34cc94, Func Offset: 0x854
	// Line 354, Address: 0x34ccc0, Func Offset: 0x880
	// Line 361, Address: 0x34cd14, Func Offset: 0x8d4
	// Line 364, Address: 0x34cd18, Func Offset: 0x8d8
	// Line 365, Address: 0x34cd8c, Func Offset: 0x94c
	// Line 366, Address: 0x34cda8, Func Offset: 0x968
	// Line 367, Address: 0x34cdc4, Func Offset: 0x984
	// Line 370, Address: 0x34ce30, Func Offset: 0x9f0
	// Line 371, Address: 0x34ce58, Func Offset: 0xa18
	// Line 372, Address: 0x34ce74, Func Offset: 0xa34
	// Func End, Address: 0x34ce8c, Func Offset: 0xa4c
}

// xPadMgrGetFuncPtrAction__Fi
// Start address: 0x34ce90
void(*)(tagxPad*, int32, tagxPadAction*) xPadMgrGetFuncPtrAction(int32 controller)
{
	// Line 195, Address: 0x34ce90, Func Offset: 0
	// Line 196, Address: 0x34cea0, Func Offset: 0x10
	// Line 197, Address: 0x34cf40, Func Offset: 0xb0
	// Line 198, Address: 0x34cf64, Func Offset: 0xd4
	// Func End, Address: 0x34cf78, Func Offset: 0xe8
}

// xPadMgrAssignFuncPtrAction__FiPFP7tagxPadiP13tagxPadAction_v
// Start address: 0x34cf80
void xPadMgrAssignFuncPtrAction(int32 controller, void(*action)(tagxPad*, int32, tagxPadAction*))
{
	// Line 189, Address: 0x34cf80, Func Offset: 0
	// Line 190, Address: 0x34cf98, Func Offset: 0x18
	// Line 191, Address: 0x34d038, Func Offset: 0xb8
	// Line 192, Address: 0x34d05c, Func Offset: 0xdc
	// Func End, Address: 0x34d074, Func Offset: 0xf4
}

// xPadMgrGetFuncPtrMapper__Fi
// Start address: 0x34d080
int32(*)(tagxPad*, tagxPadAction*, int32) xPadMgrGetFuncPtrMapper(int32 controller)
{
	// Line 167, Address: 0x34d080, Func Offset: 0
	// Line 168, Address: 0x34d090, Func Offset: 0x10
	// Line 169, Address: 0x34d130, Func Offset: 0xb0
	// Line 170, Address: 0x34d154, Func Offset: 0xd4
	// Func End, Address: 0x34d168, Func Offset: 0xe8
}

// xPadMgrAssignFuncPtrMapper__FiPFP7tagxPadP13tagxPadActioni_i
// Start address: 0x34d170
void xPadMgrAssignFuncPtrMapper(int32 controller, int32(*mapper)(tagxPad*, tagxPadAction*, int32))
{
	// Line 161, Address: 0x34d170, Func Offset: 0
	// Line 162, Address: 0x34d188, Func Offset: 0x18
	// Line 163, Address: 0x34d228, Func Offset: 0xb8
	// Line 164, Address: 0x34d24c, Func Offset: 0xdc
	// Func End, Address: 0x34d264, Func Offset: 0xf4
}

// xConsoleMgrInit__Fi
// Start address: 0x34d270
int16 xConsoleMgrInit(int32 maxControllers)
{
	int32 i;
	// Line 52, Address: 0x34d270, Func Offset: 0
	// Line 57, Address: 0x34d284, Func Offset: 0x14
	// Line 59, Address: 0x34d290, Func Offset: 0x20
	// Line 60, Address: 0x34d2b8, Func Offset: 0x48
	// Line 61, Address: 0x34d2e0, Func Offset: 0x70
	// Line 62, Address: 0x34d308, Func Offset: 0x98
	// Line 63, Address: 0x34d330, Func Offset: 0xc0
	// Line 64, Address: 0x34d358, Func Offset: 0xe8
	// Line 65, Address: 0x34d380, Func Offset: 0x110
	// Line 66, Address: 0x34d3a8, Func Offset: 0x138
	// Line 67, Address: 0x34d3d0, Func Offset: 0x160
	// Line 68, Address: 0x34d3f8, Func Offset: 0x188
	// Line 69, Address: 0x34d420, Func Offset: 0x1b0
	// Line 70, Address: 0x34d448, Func Offset: 0x1d8
	// Line 71, Address: 0x34d470, Func Offset: 0x200
	// Line 72, Address: 0x34d498, Func Offset: 0x228
	// Line 73, Address: 0x34d4c0, Func Offset: 0x250
	// Line 74, Address: 0x34d4e4, Func Offset: 0x274
	// Line 76, Address: 0x34d508, Func Offset: 0x298
	// Line 79, Address: 0x34d51c, Func Offset: 0x2ac
	// Line 81, Address: 0x34d528, Func Offset: 0x2b8
	// Line 85, Address: 0x34d544, Func Offset: 0x2d4
	// Line 90, Address: 0x34d614, Func Offset: 0x3a4
	// Line 91, Address: 0x34d6dc, Func Offset: 0x46c
	// Line 103, Address: 0x34d6e4, Func Offset: 0x474
	// Line 105, Address: 0x34d7b4, Func Offset: 0x544
	// Line 109, Address: 0x34d7bc, Func Offset: 0x54c
	// Line 110, Address: 0x34d88c, Func Offset: 0x61c
	// Line 111, Address: 0x34d954, Func Offset: 0x6e4
	// Line 114, Address: 0x34da1c, Func Offset: 0x7ac
	// Line 115, Address: 0x34da20, Func Offset: 0x7b0
	// Line 118, Address: 0x34da34, Func Offset: 0x7c4
	// Line 119, Address: 0x34da48, Func Offset: 0x7d8
	// Line 120, Address: 0x34da54, Func Offset: 0x7e4
	// Line 122, Address: 0x34da5c, Func Offset: 0x7ec
	// Line 123, Address: 0x34da60, Func Offset: 0x7f0
	// Func End, Address: 0x34da78, Func Offset: 0x808
}

// xConsoleMgrRegisterScriptCalls__Fv
// Start address: 0x34da80
void xConsoleMgrRegisterScriptCalls()
{
	// Line 47, Address: 0x34da80, Func Offset: 0
	// Line 48, Address: 0x34da88, Func Offset: 0x8
	// Line 49, Address: 0x34da90, Func Offset: 0x10
	// Func End, Address: 0x34daa0, Func Offset: 0x20
}

