typedef struct tagXStreamMDSDirectory;
typedef struct _rxHeapSuperBlockDescriptor;
typedef struct tagxPhysicsObject;
typedef struct _rwResEntryTag;
typedef struct Vector3D;
typedef struct tagMATRIX;
typedef struct _class_0;
typedef struct xCondition;
typedef struct _RpClump;
typedef struct _RxPipeline;
typedef struct _RpPolygon;
typedef struct _RxHeap;
typedef struct iTriggerResource;
typedef struct tagXAnim;
typedef struct _rxHeapBlockHeader;
typedef struct iMarkerResource;
typedef struct _xActor;
typedef struct Vector4D;
typedef struct xRouteTargetNavPoint;
typedef struct p2CameraVersion;
typedef struct _RwV3d;
typedef enum _RxClusterValidityReq;
typedef struct _rxHeapFreeBlock;
typedef struct iActorRuntime;
typedef struct xTrigger;
typedef struct iObjRuntime;
typedef struct tagiAnimResource;
typedef struct _RpVertexNormal;
typedef struct _RxPipelineNodeTopSortData;
typedef struct tagiMesh;
typedef struct tagxObjDBData;
typedef struct tagiAnimRuntime;
typedef struct _RwTexCoords;
typedef struct _RxPipelineNode;
typedef struct _RxClusterDefinition;
typedef struct tagxStateLink;
typedef struct xRoute;
typedef struct iLightResource;
typedef enum _RwTextureFilterMode;
typedef struct _RwRGBA;
typedef struct _RxPipelineNodeParam;
typedef struct _tagiEnvRuntime;
typedef struct _RxPipelineCluster;
typedef struct tagxStateMgr;
typedef enum _rxEmbeddedPacketState;
typedef struct _RpWorld;
typedef struct xCamera;
typedef struct _RxNodeDefinition;
typedef struct iConditionRuntime;
typedef enum _RxClusterValid;
typedef struct xRouteTargetMarker;
typedef struct _RwSurfaceProperties;
typedef struct iCameraResource;
typedef struct _RwTexDictionary;
typedef struct tagiFloorTri;
typedef struct tagP2MeshVertex;
typedef struct tagXAnimTrigger;
typedef struct XStreamHeader;
typedef struct xNavPoint;
typedef struct tagxStateThread;
typedef struct _xObj;
typedef struct _RpCollSector;
typedef struct tagxState;
typedef struct xNavLink;
typedef struct _RpMeshHeader;
typedef struct _RxPipelineRequiresCluster;
typedef struct tagXAnimControl;
typedef struct iEntryPointResource;
typedef struct xRouteTarget;
typedef struct xSearchPoint;
typedef struct xScene;
typedef struct iActionRuntime;
typedef struct _iRenderEffects;
typedef struct _rxReq;
typedef struct xAction;
typedef struct xMarker;
typedef struct tagXStreamDirectoryEntry;
typedef struct _RwObject;
typedef struct tagP2Weight;
typedef struct _RpMaterial;
typedef struct xListItem;
typedef struct _class_1;
typedef struct xEntryPoint;
typedef struct p2Camera;
typedef struct _iVFXResource;
typedef struct iActionResource;
typedef struct xSearch;
typedef struct _tagxEnv;
typedef struct _RxOutputSpec;
typedef struct _RwTexture;
typedef struct tagiAnimFrame;
typedef struct tagiFloor;
typedef struct _RwBBox;
typedef struct _RxClusterRef;
typedef struct _RpSector;
typedef struct _iSFXResource;
typedef struct iDisplayCamera;
typedef struct _RwRaster;
typedef enum _rpWorldRenderOrder;
typedef struct _RwLLLink;
typedef struct _RxIoSpec;
typedef struct tagxPadAction;
typedef struct xList;
typedef struct _FCinfo;
typedef struct iConditionResource;
typedef struct _p2Geom;
typedef struct _RxNodeMethods;
typedef struct xRouteTargetActor;
typedef enum _RxClusterForcePresent;
typedef struct _RpWorldSector;
typedef struct _RxPacket;
typedef struct tagP2Mesh;
typedef struct xRouteUseageOneShot;
typedef struct xRule;
typedef enum _RxNodeDefEditable;
typedef struct iRuleResource;
typedef struct _iEntryPointRuntime;
typedef struct _RxClusterUnion;
typedef struct xRouteTargetObject;
typedef enum _RwTextureAddressMode;
typedef struct tagP2VERTEX;
typedef struct _RxCluster;
typedef struct xRouteUseagePatrol;
typedef struct _RwLinkList;
typedef struct xLight;
typedef struct tagxActorDBData;
typedef struct _iLightRuntime;
typedef struct xRouteTargetTrigger;
typedef struct _RpMaterialList;
typedef struct xRouteUseage;

typedef _RpWorldSector*(*type_0)(_RpWorldSector*);
typedef _RpClump*(*type_5)(_RpClump*, void*);
typedef void(*type_8)(_rwResEntryTag*);
typedef int32(*type_13)(_RxPipelineNode*, _RxPipelineNodeParam*);
typedef int32(*type_17)(_RxNodeDefinition*);
typedef void(*type_19)(_RxNodeDefinition*);
typedef int32(*type_23)(_RxPipelineNode*);
typedef void(*type_26)(_RxPipelineNode*);
typedef int32(*type_31)(_RxPipelineNode*, _RxPipeline*);
typedef uint32(*type_43)(_RxPipelineNode*, uint32, uint32, void*);
typedef void(*type_49)(_xActor*, int32, tagXAnim*, tagXAnimTrigger*);

typedef _xActor type_1[4];
typedef iTriggerResource* type_2[20];
typedef _xActor type_3[4];
typedef tagXStreamDirectoryEntry type_4[1000];
typedef _xActor type_6[4];
typedef float32 type_7[3];
typedef iTriggerResource* type_9[20];
typedef _xActor type_10[4];
typedef _xObj type_11[32];
typedef _xActor type_12[1];
typedef _xActor type_14[4];
typedef _xActor type_15[4];
typedef iLightResource type_16[2];
typedef _xActor type_18[4];
typedef _xActor type_20[1];
typedef _xActor type_21[1];
typedef uint32 type_22[4];
typedef _xActor type_24[1];
typedef _xActor type_25[1];
typedef _xActor type_27[1];
typedef _xActor type_28[1];
typedef _xActor type_29[1];
typedef uint8 type_30[2];
typedef tagxState* type_32[10];
typedef _xActor type_33[1];
typedef p2CameraVersion type_34[5];
typedef int8 type_35[2048];
typedef uint8 type_36[4];
typedef Vector3D type_37[4];
typedef _xActor type_38[4];
typedef uint8 type_39[4];
typedef _xActor type_40[4];
typedef uint8 type_41[4];
typedef _xActor type_42[4];
typedef _xActor type_44[1];
typedef _xActor type_45[1];
typedef _xActor type_46[1];
typedef _RxCluster type_47[1];
typedef iTriggerResource* type_48[20];
typedef _xActor type_50[4];
typedef uint8 type_51[4];
typedef _xActor type_52[1];
typedef uint8 type_53[3];
typedef iTriggerResource* type_54[20];
typedef _xActor type_55[4];
typedef int8 type_56[32];
typedef int8 type_57[32];
typedef _xActor type_58[4];
typedef Vector3D type_59[4];
typedef iTriggerResource* type_60[20];
typedef uint16 type_61[3];
typedef _xActor type_62[2];
typedef uint16 type_63[3];
typedef _xActor type_64[1];
typedef int8 type_65[128];
typedef iTriggerResource* type_66[20];
typedef _xActor type_67[1];
typedef _xActor type_68[1];
typedef int32 type_69[7];
typedef iTriggerResource* type_70[20];
typedef _xActor type_71[4];
typedef tagxStateThread type_72[7];
typedef uint16 type_73[3];
typedef _xActor type_74[4];
typedef Vector3D type_75[5];
typedef iTriggerResource* type_76[20];
typedef _xActor type_77[1];
typedef _xActor type_78[1];
typedef iTriggerResource* type_79[20];
typedef uint8 type_80[3];
typedef _xActor* type_81[40];
typedef uint8 type_82[3];
typedef int8 type_83[40];
typedef iTriggerResource* type_84[20];
typedef _xActor* type_85[13];
typedef _xActor type_86[1];
typedef iTriggerResource* type_87[20];
typedef _xActor type_88[4];
typedef _xActor type_89[4];
typedef iTriggerResource* type_90[20];
typedef _xActor type_91[1];

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

struct _rwResEntryTag
{
	_RwLLLink link;
	int32 size;
	void* owner;
	_rwResEntryTag** ownerRef;
	void(*destroyNotify)(_rwResEntryTag*);
};

struct Vector3D
{
	float32 x;
	float32 y;
	float32 z;
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

struct _class_0
{
	union
	{
		xRouteUseagePatrol m_patrol;
		xRouteUseageOneShot m_oneShot;
	};
};

struct xCondition
{
	iConditionResource* m_resource;
	iConditionRuntime* m_runtime;
};

struct _RpClump
{
	_RwObject object;
	_RwLinkList atomicList;
	_RwLLLink inWorldLink;
	_RpClump*(*callback)(_RpClump*, void*);
	uint16 renderFrame;
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

struct _RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
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

struct tagXAnim
{
	tagiAnimResource* m_resource;
	tagiAnimRuntime* m_runtime;
};

struct _rxHeapBlockHeader
{
	_rxHeapBlockHeader* prev;
	_rxHeapBlockHeader* next;
	uint32 size;
	_rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
};

struct iMarkerResource
{
	Vector3D m_pos;
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

struct Vector4D
{
	float32 x;
	float32 y;
	float32 z;
	float32 t;
};

struct xRouteTargetNavPoint
{
	int32 m_id;
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

struct _RwV3d
{
	float32 x;
	float32 y;
	float32 z;
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

struct xTrigger
{
	iTriggerResource* m_resource;
};

struct iObjRuntime
{
	int16 m_flag;
	int16 m_pad;
	_p2Geom* m_geom;
	float32 m_bradius;
	tagxPhysicsObject m_phys;
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

struct _RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

struct _RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	_rxReq* req;
	void* initialisationData;
	uint32 initialisationDataSize;
};

struct tagiMesh
{
};

struct tagxObjDBData
{
	_xObj m_o[32];
	int32 m_staticObjects;
	int32 m_staticAssets;
};

struct tagiAnimRuntime
{
	void* m_sfx;
	void* m_vfx;
};

struct _RwTexCoords
{
	float32 u;
	float32 v;
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

struct tagxStateLink
{
	uint8 m_command;
	uint8 m_flags;
	uint16 m_state;
};

struct xRoute
{
	int32 m_physType;
	int32 m_flags;
	int32 m_status;
	xScene* m_scene;
	Vector3D m_pointA;
	Vector3D m_pointB;
	xNavPoint* m_npA;
	xNavPoint* m_npB;
	xList m_list;
	xSearch* m_search;
	xRouteTarget m_target;
	xRouteUseage m_useage;
};

struct iLightResource
{
	uint32 m_type;
	Vector3D m_pos;
	Vector3D m_rot;
	Vector3D m_color;
	int32 m_fov;
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

struct _RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct _RxPipelineNodeParam
{
	void* dataParam;
	_RxHeap* heap;
};

struct _tagiEnvRuntime
{
	_RpWorld* world;
	Vector3D world_origin;
	_RwTexDictionary* tex_dict;
};

struct _RxPipelineCluster
{
	_RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
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

enum _rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
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

struct _RxNodeDefinition
{
	int8* name;
	_RxNodeMethods nodeMethods;
	_RxIoSpec io;
	uint32 pipelineNodePrivateDataSize;
	_RxNodeDefEditable editable;
	int32 InputPipesCnt;
};

struct iConditionRuntime
{
	xCondition* m_operand;
	uint16 m_match;
	uint16 m_trigger;
};

enum _RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct xRouteTargetMarker
{
	int32 m_id;
};

struct _RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
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

struct tagiFloorTri
{
	uint16 m_v[3];
	uint16 m_n;
};

struct tagP2MeshVertex
{
	float32 m_x;
	float32 m_y;
	float32 m_z;
};

struct tagXAnimTrigger
{
	uint16 m_frame;
	uint16 m_type;
	uint32 m_data;
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

struct tagxStateThread
{
	tagxState* m_state;
	tagXAnimControl* m_animCtl;
	int32 m_deferredWaiting;
	tagxPadAction m_deferred;
	int32 m_rbp;
	tagxState* m_ring[10];
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

struct _RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
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

struct _RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct _RxPipelineRequiresCluster
{
	_RxClusterDefinition* clusterDef;
	_RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
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

struct xRouteTarget
{
	int8 m_type;
	uint8 m_hasLOSToTarget;
	uint8 m_pad2[2];
	Vector3D m_pos;
	float32 m_rerouteThreshold;
	_class_1 t;
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

struct iActionRuntime
{
	xAction* m_and;
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

struct _rxReq
{
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

struct tagP2Weight
{
	uint16 m_joint0;
	uint16 m_joint1;
	float32 m_weight0;
	float32 m_weight1;
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

struct xListItem
{
	void* m_item;
	xListItem* m_next;
	xListItem* m_prev;
};

struct _class_1
{
	union
	{
		xRouteTargetActor m_actor;
		xRouteTargetObject m_object;
		xRouteTargetTrigger m_trigger;
		xRouteTargetNavPoint m_navPoint;
		xRouteTargetMarker m_marker;
	};
};

struct xEntryPoint
{
	iEntryPointResource* m_resource;
	_iEntryPointRuntime* m_runtime;
};

struct p2Camera
{
	Vector3D m_pos;
	Vector3D m_rot;
	float32 m_fov;
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

struct iActionResource
{
	uint8 m_cmdType;
	uint8 m_cmd;
	uint16 pad;
	uint32 m_cmdParameter;
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

struct _tagxEnv
{
	_tagiEnvRuntime* m_runtime;
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

struct tagiAnimFrame
{
	float32* m_tx;
	float32* m_ty;
	float32* m_tz;
	float32* m_rx;
	float32* m_ry;
	float32* m_rz;
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

struct _RpSector
{
	int32 type;
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

struct iDisplayCamera
{
	Vector3D m_pos;
	Vector3D m_rot;
	float32 m_fov;
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

enum _rpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct _RwLLLink
{
	_RwLLLink* next;
	_RwLLLink* prev;
};

struct _RxIoSpec
{
	uint32 numClustersOfInterest;
	_RxClusterRef* clustersOfInterest;
	_RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	_RxOutputSpec* outputs;
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

struct xList
{
	xListItem* m_head;
	xListItem* m_tail;
};

struct _FCinfo
{
	uint16 nidx[3];
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

struct _p2Geom
{
	uint32 m_meshCount;
	tagP2Mesh* m_mesh;
	_iRenderEffects effects;
	_RpClump* m_clump;
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

struct xRouteTargetActor
{
	int32 m_type;
	int32 m_id;
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

struct xRouteUseageOneShot
{
	int32 m_unused;
};

struct xRule
{
	iRuleResource* m_resource;
	void* m_runtime;
};

enum _RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
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

struct _RxClusterUnion
{
	union
	{
		_RxClusterDefinition* clusterDef;
		_RxPipelineCluster* clusterRef;
	};
};

struct xRouteTargetObject
{
	int32 m_id;
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

struct tagP2VERTEX
{
	float32 x;
	float32 y;
	float32 z;
	float32 tu;
	float32 tv;
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

struct xRouteUseagePatrol
{
	int32 m_patrolDir;
};

struct _RwLinkList
{
	_RwLLLink link;
};

struct xLight
{
	iLightResource* m_resource;
	_iLightRuntime* m_runtime;
};

struct tagxActorDBData
{
	_xActor m_ash[1];
	_xActor m_skullBat[4];
	_xActor m_deadite[4];
	_xActor m_treeBoss[1];
	_xActor m_skeleton[4];
	_xActor m_troopKnife[4];
	_xActor m_troopClaw[4];
	_xActor m_troopRange[4];
	_xActor m_troopLeaderBoss[1];
	_xActor m_hellbillyFat[4];
	_xActor m_hellbillyThin[4];
	_xActor m_demonPig[4];
	_xActor m_matriarchBoss[1];
	_xActor m_grandma[1];
	_xActor m_allard[1];
	_xActor m_deadAshBoss[1];
	_xActor m_annieZombieBoss[1];
	_xActor m_badAsh[1];
	_xActor m_jenny[1];
	_xActor m_evilHand[1];
	_xActor m_warriorCultist[4];
	_xActor m_guildMember[4];
	_xActor m_merchant[4];
	_xActor m_alzeez[1];
	_xActor m_wizardBoss[1];
	_xActor m_mudGolemBoss[1];
	_xActor m_armorySkeleton[4];
	_xActor m_armoryBoss[1];
	_xActor m_invisibleMen[4];
	_xActor m_netherPet[4];
	_xActor m_elderBeast[2];
	_xActor m_cthulhuBoss[1];
	_xActor m_treeArm[1];
	_xActor m_headlessSkeleton[1];
	_xActor m_netherPet2[4];
	_xActor m_netherPet3[4];
	_xActor m_captain[1];
	_xActor m_pumpKeeper[1];
	_xActor* m_p[40];
	int8 m_plimit[40];
	_xActor* m_active[13];
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

struct xRouteTargetTrigger
{
	int32 m_id;
};

struct _RpMaterialList
{
	_RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct xRouteUseage
{
	int32 m_type;
	int32 m_dir;
	_class_0 u;
};

uint32 interpreterMethod;
float32 g_DEGTORAD;
uint32 g_currentPlayerRotateSpeed;
int8 vAssertBuf2[128];
XStreamHeader currentHeader;
xScene* xScene_current;
int32 gPlayerType;
tagxObjDBData* godb;
tagxActorDBData* gadb;
int32 gBootState;

void xActorCalloutFlyBack(_xActor* a);
void xActorCalloutFlyFast(_xActor* a);
void xActorCalloutFlySlow(_xActor* a);
void xActorCalloutRunBack();
void xActorCalloutRun();
void xActorCalloutWalkBack();
void xActorCalloutWalk();
void xActorCalloutRotateCounterClockwise(_xActor* a);
void xActorCalloutRotateClockwise(_xActor* a);
void xActorGetMatrix(_xActor* a, tagMATRIX* actorMatrix);
void xActorSetOrientation(_xActor* a, float32 rx, float32 ry, float32 rz);
void xActorSetLookat(_xActor* a);
void xActorAdjustOrientation(_xActor* a, float32 rx, float32 ry, float32 rz);
void xActorSetPosition(_xActor* a, float32 x, float32 y, float32 z);
int32 xActorActorInFOV(_xActor* a, _xActor* b);
void xActorDraw(_xActor* a);
void xActorIdle(_xActor* obj);
void xActorIdleRoute(_xActor* actor);
void xActorIdleAdvanceRoute(_xActor* actor, xRoute* r);
int32 xActorConsoleMgr(_xActor* actor, int32 count, tagxPadAction* actions, int32 remap);
void xActorDestroy();
void xActorInitialize(_xActor* a);
void xActorReInitializeInterpreter();

// xActorCalloutFlyBack__FP7_xActor
// Start address: 0x369390
void xActorCalloutFlyBack(_xActor* a)
{
	tagxPhysicsObject* phys;
	// Line 1243, Address: 0x369390, Func Offset: 0
	// Line 1244, Address: 0x3693a0, Func Offset: 0x10
	// Line 1245, Address: 0x3693a4, Func Offset: 0x14
	// Line 1247, Address: 0x3693c0, Func Offset: 0x30
	// Func End, Address: 0x3693c8, Func Offset: 0x38
}

// xActorCalloutFlyFast__FP7_xActor
// Start address: 0x3693d0
void xActorCalloutFlyFast(_xActor* a)
{
	tagxPhysicsObject* phys;
	// Line 1233, Address: 0x3693d0, Func Offset: 0
	// Line 1234, Address: 0x3693e0, Func Offset: 0x10
	// Line 1235, Address: 0x3693e4, Func Offset: 0x14
	// Line 1237, Address: 0x369400, Func Offset: 0x30
	// Func End, Address: 0x369408, Func Offset: 0x38
}

// xActorCalloutFlySlow__FP7_xActor
// Start address: 0x369410
void xActorCalloutFlySlow(_xActor* a)
{
	tagxPhysicsObject* phys;
	// Line 1223, Address: 0x369410, Func Offset: 0
	// Line 1224, Address: 0x369420, Func Offset: 0x10
	// Line 1225, Address: 0x369424, Func Offset: 0x14
	// Line 1227, Address: 0x369440, Func Offset: 0x30
	// Func End, Address: 0x369448, Func Offset: 0x38
}

// xActorCalloutRunBack__FP7_xActor
// Start address: 0x369450
void xActorCalloutRunBack()
{
	// Line 1217, Address: 0x369450, Func Offset: 0
	// Func End, Address: 0x369458, Func Offset: 0x8
}

// xActorCalloutRun__FP7_xActor
// Start address: 0x369460
void xActorCalloutRun()
{
	// Line 1213, Address: 0x369460, Func Offset: 0
	// Func End, Address: 0x369468, Func Offset: 0x8
}

// xActorCalloutWalkBack__FP7_xActor
// Start address: 0x369470
void xActorCalloutWalkBack()
{
	// Line 1209, Address: 0x369470, Func Offset: 0
	// Func End, Address: 0x369478, Func Offset: 0x8
}

// xActorCalloutWalk__FP7_xActor
// Start address: 0x369480
void xActorCalloutWalk()
{
	// Line 1205, Address: 0x369480, Func Offset: 0
	// Func End, Address: 0x369488, Func Offset: 0x8
}

// xActorCalloutRotateCounterClockwise__FP7_xActor
// Start address: 0x369490
void xActorCalloutRotateCounterClockwise(_xActor* a)
{
	// Line 1199, Address: 0x369490, Func Offset: 0
	// Line 1200, Address: 0x3694a8, Func Offset: 0x18
	// Line 1201, Address: 0x36956c, Func Offset: 0xdc
	// Func End, Address: 0x36958c, Func Offset: 0xfc
}

// xActorCalloutRotateClockwise__FP7_xActor
// Start address: 0x369590
void xActorCalloutRotateClockwise(_xActor* a)
{
	// Line 1194, Address: 0x369590, Func Offset: 0
	// Line 1195, Address: 0x3695a8, Func Offset: 0x18
	// Line 1196, Address: 0x369668, Func Offset: 0xd8
	// Func End, Address: 0x369688, Func Offset: 0xf8
}

// xActorGetMatrix__FP7_xActorP9tagMATRIX
// Start address: 0x369690
void xActorGetMatrix(_xActor* a, tagMATRIX* actorMatrix)
{
	tagxPhysicsObject* p;
	tagMATRIX ms;
	tagMATRIX m1;
	tagMATRIX matrix;
	tagMATRIX mz;
	tagMATRIX my;
	tagMATRIX mx;
	iActorRuntime* r;
	// Line 1145, Address: 0x369690, Func Offset: 0
	// Line 1148, Address: 0x3696a8, Func Offset: 0x18
	// Line 1150, Address: 0x369748, Func Offset: 0xb8
	// Line 1151, Address: 0x36974c, Func Offset: 0xbc
	// Line 1158, Address: 0x369754, Func Offset: 0xc4
	// Line 1160, Address: 0x369758, Func Offset: 0xc8
	// Line 1161, Address: 0x369768, Func Offset: 0xd8
	// Line 1162, Address: 0x369778, Func Offset: 0xe8
	// Line 1165, Address: 0x369788, Func Offset: 0xf8
	// Line 1166, Address: 0x3697ac, Func Offset: 0x11c
	// Line 1167, Address: 0x3697c0, Func Offset: 0x130
	// Line 1168, Address: 0x3697d4, Func Offset: 0x144
	// Line 1183, Address: 0x3697e8, Func Offset: 0x158
	// Line 1184, Address: 0x3697f0, Func Offset: 0x160
	// Line 1185, Address: 0x369800, Func Offset: 0x170
	// Line 1189, Address: 0x369808, Func Offset: 0x178
	// Line 1191, Address: 0x36981c, Func Offset: 0x18c
	// Func End, Address: 0x369834, Func Offset: 0x1a4
}

// xActorSetOrientation__FP7_xActorfff
// Start address: 0x369840
void xActorSetOrientation(_xActor* a, float32 rx, float32 ry, float32 rz)
{
	iActorRuntime* r;
	// Line 1054, Address: 0x369840, Func Offset: 0
	// Line 1055, Address: 0x369864, Func Offset: 0x24
	// Line 1057, Address: 0x369868, Func Offset: 0x28
	// Line 1058, Address: 0x369878, Func Offset: 0x38
	// Line 1059, Address: 0x369888, Func Offset: 0x48
	// Line 1061, Address: 0x369898, Func Offset: 0x58
	// Line 1079, Address: 0x3698b0, Func Offset: 0x70
	// Func End, Address: 0x3698d0, Func Offset: 0x90
}

// xActorSetLookat__FP7_xActorf
// Start address: 0x3698d0
void xActorSetLookat(_xActor* a)
{
	float32 ry;
	iActorRuntime* r;
	// Line 1012, Address: 0x3698d0, Func Offset: 0
	// Line 1013, Address: 0x3698e8, Func Offset: 0x18
	// Line 1014, Address: 0x3698ec, Func Offset: 0x1c
	// Line 1033, Address: 0x3698f0, Func Offset: 0x20
	// Line 1038, Address: 0x369944, Func Offset: 0x74
	// Func End, Address: 0x369964, Func Offset: 0x94
}

// xActorAdjustOrientation__FP7_xActorfff
// Start address: 0x369970
void xActorAdjustOrientation(_xActor* a, float32 rx, float32 ry, float32 rz)
{
	iActorRuntime* r;
	// Line 991, Address: 0x369970, Func Offset: 0
	// Line 992, Address: 0x369988, Func Offset: 0x18
	// Line 993, Address: 0x36998c, Func Offset: 0x1c
	// Line 997, Address: 0x3699f0, Func Offset: 0x80
	// Func End, Address: 0x369a10, Func Offset: 0xa0
}

// xActorSetPosition__FP7_xActorfff
// Start address: 0x369a10
void xActorSetPosition(_xActor* a, float32 x, float32 y, float32 z)
{
	iActorRuntime* r;
	// Line 964, Address: 0x369a10, Func Offset: 0
	// Line 965, Address: 0x369a20, Func Offset: 0x10
	// Line 969, Address: 0x369a24, Func Offset: 0x14
	// Line 974, Address: 0x369a30, Func Offset: 0x20
	// Line 975, Address: 0x369a3c, Func Offset: 0x2c
	// Func End, Address: 0x369a50, Func Offset: 0x40
}

// xActorActorInFOV__FP7_xActorP7_xActor
// Start address: 0x369a50
int32 xActorActorInFOV(_xActor* a, _xActor* b)
{
	// Line 870, Address: 0x369a50, Func Offset: 0
	// Line 874, Address: 0x369a68, Func Offset: 0x18
	// Line 875, Address: 0x369cc8, Func Offset: 0x278
	// Func End, Address: 0x369ce4, Func Offset: 0x294
}

// xActorDraw__FP7_xActor
// Start address: 0x369cf0
void xActorDraw(_xActor* a)
{
	// Line 828, Address: 0x369cf0, Func Offset: 0
	// Line 829, Address: 0x369cf8, Func Offset: 0x8
	// Line 830, Address: 0x369d00, Func Offset: 0x10
	// Func End, Address: 0x369d10, Func Offset: 0x20
}

// xActorIdle__FP7_xActor
// Start address: 0x369d10
void xActorIdle(_xActor* obj)
{
	iActorRuntime* aa;
	int32 t;
	tagXAnimControl* active;
	tagxPhysicsObject* phys;
	tagXAnim* anim;
	Vector3D rot;
	Vector3D trans3;
	Vector3D trans2;
	// Line 697, Address: 0x369d10, Func Offset: 0
	// Line 709, Address: 0x369d28, Func Offset: 0x18
	// Line 713, Address: 0x369d2c, Func Offset: 0x1c
	// Line 715, Address: 0x369d3c, Func Offset: 0x2c
	// Line 720, Address: 0x369d54, Func Offset: 0x44
	// Line 724, Address: 0x369d74, Func Offset: 0x64
	// Line 727, Address: 0x369d7c, Func Offset: 0x6c
	// Line 728, Address: 0x369d8c, Func Offset: 0x7c
	// Line 745, Address: 0x369d9c, Func Offset: 0x8c
	// Line 754, Address: 0x369da8, Func Offset: 0x98
	// Line 763, Address: 0x369db8, Func Offset: 0xa8
	// Line 765, Address: 0x369dc0, Func Offset: 0xb0
	// Line 766, Address: 0x369dcc, Func Offset: 0xbc
	// Line 767, Address: 0x369de4, Func Offset: 0xd4
	// Line 768, Address: 0x369e04, Func Offset: 0xf4
	// Line 769, Address: 0x369e2c, Func Offset: 0x11c
	// Line 770, Address: 0x369e44, Func Offset: 0x134
	// Line 774, Address: 0x369e4c, Func Offset: 0x13c
	// Line 776, Address: 0x369e60, Func Offset: 0x150
	// Line 778, Address: 0x369e6c, Func Offset: 0x15c
	// Line 779, Address: 0x369e88, Func Offset: 0x178
	// Line 782, Address: 0x369e90, Func Offset: 0x180
	// Line 784, Address: 0x369f30, Func Offset: 0x220
	// Line 785, Address: 0x369f34, Func Offset: 0x224
	// Line 787, Address: 0x369f3c, Func Offset: 0x22c
	// Line 788, Address: 0x369fdc, Func Offset: 0x2cc
	// Line 789, Address: 0x36a07c, Func Offset: 0x36c
	// Line 791, Address: 0x36a11c, Func Offset: 0x40c
	// Line 793, Address: 0x36a144, Func Offset: 0x434
	// Line 794, Address: 0x36a160, Func Offset: 0x450
	// Line 802, Address: 0x36a17c, Func Offset: 0x46c
	// Line 804, Address: 0x36a194, Func Offset: 0x484
	// Line 814, Address: 0x36a1ac, Func Offset: 0x49c
	// Func End, Address: 0x36a1c8, Func Offset: 0x4b8
}

// xActorIdleRoute__FP7_xActori
// Start address: 0x36a1d0
void xActorIdleRoute(_xActor* actor)
{
	float32 mag;
	_xActor* target_actor;
	_xObj* target_obj;
	xNavPoint* nextNav;
	Vector3D v;
	iActorRuntime* a;
	tagxPhysicsObject* p;
	xRoute* r;
	// Line 559, Address: 0x36a1d0, Func Offset: 0
	// Line 568, Address: 0x36a1ec, Func Offset: 0x1c
	// Line 571, Address: 0x36a28c, Func Offset: 0xbc
	// Line 574, Address: 0x36a290, Func Offset: 0xc0
	// Line 578, Address: 0x36a2a0, Func Offset: 0xd0
	// Line 579, Address: 0x36a2b0, Func Offset: 0xe0
	// Line 585, Address: 0x36a350, Func Offset: 0x180
	// Line 589, Address: 0x36a360, Func Offset: 0x190
	// Line 593, Address: 0x36a364, Func Offset: 0x194
	// Line 605, Address: 0x36a390, Func Offset: 0x1c0
	// Line 608, Address: 0x36a3b8, Func Offset: 0x1e8
	// Line 612, Address: 0x36a3d0, Func Offset: 0x200
	// Line 615, Address: 0x36a3d4, Func Offset: 0x204
	// Line 616, Address: 0x36a3ec, Func Offset: 0x21c
	// Line 620, Address: 0x36a41c, Func Offset: 0x24c
	// Line 622, Address: 0x36a4c0, Func Offset: 0x2f0
	// Line 624, Address: 0x36a4d0, Func Offset: 0x300
	// Line 625, Address: 0x36a4e8, Func Offset: 0x318
	// Line 626, Address: 0x36a504, Func Offset: 0x334
	// Line 628, Address: 0x36a520, Func Offset: 0x350
	// Line 629, Address: 0x36a52c, Func Offset: 0x35c
	// Line 651, Address: 0x36a534, Func Offset: 0x364
	// Line 654, Address: 0x36a54c, Func Offset: 0x37c
	// Line 658, Address: 0x36a564, Func Offset: 0x394
	// Line 660, Address: 0x36a568, Func Offset: 0x398
	// Line 663, Address: 0x36a594, Func Offset: 0x3c4
	// Line 665, Address: 0x36a5a4, Func Offset: 0x3d4
	// Line 666, Address: 0x36a5bc, Func Offset: 0x3ec
	// Line 667, Address: 0x36a5d8, Func Offset: 0x408
	// Line 668, Address: 0x36a5f4, Func Offset: 0x424
	// Line 669, Address: 0x36a600, Func Offset: 0x430
	// Line 678, Address: 0x36a608, Func Offset: 0x438
	// Line 679, Address: 0x36a618, Func Offset: 0x448
	// Func End, Address: 0x36a638, Func Offset: 0x468
}

// xActorIdleAdvanceRoute__FP7_xActorP6xRoute
// Start address: 0x36a640
void xActorIdleAdvanceRoute(_xActor* actor, xRoute* r)
{
	int32 id;
	float32 ang;
	xNavPoint* cnp;
	tagxPhysicsObject* p;
	Vector3D* cpos;
	iActorRuntime* a;
	Vector3D v;
	Vector3D posb;
	Vector3D posa;
	xNavPoint* np;
	// Line 187, Address: 0x36a640, Func Offset: 0
	// Line 198, Address: 0x36a674, Func Offset: 0x34
	// Line 201, Address: 0x36a678, Func Offset: 0x38
	// Line 205, Address: 0x36a67c, Func Offset: 0x3c
	// Line 207, Address: 0x36a680, Func Offset: 0x40
	// Line 209, Address: 0x36a720, Func Offset: 0xe0
	// Line 211, Address: 0x36a730, Func Offset: 0xf0
	// Line 214, Address: 0x36a778, Func Offset: 0x138
	// Line 215, Address: 0x36a77c, Func Offset: 0x13c
	// Line 216, Address: 0x36a7b4, Func Offset: 0x174
	// Line 219, Address: 0x36a7bc, Func Offset: 0x17c
	// Line 220, Address: 0x36a7c0, Func Offset: 0x180
	// Line 221, Address: 0x36a7ec, Func Offset: 0x1ac
	// Line 224, Address: 0x36a7f4, Func Offset: 0x1b4
	// Line 225, Address: 0x36a80c, Func Offset: 0x1cc
	// Line 228, Address: 0x36a814, Func Offset: 0x1d4
	// Line 229, Address: 0x36a82c, Func Offset: 0x1ec
	// Line 232, Address: 0x36a834, Func Offset: 0x1f4
	// Line 233, Address: 0x36a878, Func Offset: 0x238
	// Line 236, Address: 0x36a880, Func Offset: 0x240
	// Line 239, Address: 0x36a918, Func Offset: 0x2d8
	// Line 243, Address: 0x36a930, Func Offset: 0x2f0
	// Line 246, Address: 0x36a944, Func Offset: 0x304
	// Line 248, Address: 0x36a954, Func Offset: 0x314
	// Line 249, Address: 0x36a96c, Func Offset: 0x32c
	// Line 250, Address: 0x36a9c8, Func Offset: 0x388
	// Line 252, Address: 0x36a9dc, Func Offset: 0x39c
	// Line 255, Address: 0x36a9e4, Func Offset: 0x3a4
	// Line 258, Address: 0x36a9f0, Func Offset: 0x3b0
	// Line 263, Address: 0x36aa4c, Func Offset: 0x40c
	// Line 265, Address: 0x36aa80, Func Offset: 0x440
	// Line 266, Address: 0x36aa88, Func Offset: 0x448
	// Line 268, Address: 0x36aa94, Func Offset: 0x454
	// Line 271, Address: 0x36aa9c, Func Offset: 0x45c
	// Line 273, Address: 0x36ab40, Func Offset: 0x500
	// Line 276, Address: 0x36ab48, Func Offset: 0x508
	// Line 277, Address: 0x36ab5c, Func Offset: 0x51c
	// Line 279, Address: 0x36ab64, Func Offset: 0x524
	// Line 280, Address: 0x36ab7c, Func Offset: 0x53c
	// Line 284, Address: 0x36ab84, Func Offset: 0x544
	// Line 286, Address: 0x36ab9c, Func Offset: 0x55c
	// Line 290, Address: 0x36aba4, Func Offset: 0x564
	// Line 291, Address: 0x36aba8, Func Offset: 0x568
	// Line 329, Address: 0x36abc0, Func Offset: 0x580
	// Line 338, Address: 0x36abd8, Func Offset: 0x598
	// Line 341, Address: 0x36abec, Func Offset: 0x5ac
	// Line 376, Address: 0x36ac20, Func Offset: 0x5e0
	// Line 377, Address: 0x36ac28, Func Offset: 0x5e8
	// Line 380, Address: 0x36ac3c, Func Offset: 0x5fc
	// Line 382, Address: 0x36ac44, Func Offset: 0x604
	// Line 383, Address: 0x36ac4c, Func Offset: 0x60c
	// Line 384, Address: 0x36ac58, Func Offset: 0x618
	// Line 398, Address: 0x36ac60, Func Offset: 0x620
	// Line 400, Address: 0x36ac6c, Func Offset: 0x62c
	// Line 401, Address: 0x36acc8, Func Offset: 0x688
	// Line 402, Address: 0x36accc, Func Offset: 0x68c
	// Func End, Address: 0x36ad00, Func Offset: 0x6c0
}

// xActorConsoleMgr__FP7_xActoriP13tagxPadActioni
// Start address: 0x36ad00
int32 xActorConsoleMgr(_xActor* actor, int32 count, tagxPadAction* actions, int32 remap)
{
	int32 validAction;
	tagXAnimControl* active;
	tagxPadAction* a;
	int32 i;
	// Line 121, Address: 0x36ad00, Func Offset: 0
	// Line 126, Address: 0x36ad28, Func Offset: 0x28
	// Line 130, Address: 0x36ad2c, Func Offset: 0x2c
	// Line 131, Address: 0x36ad34, Func Offset: 0x34
	// Line 139, Address: 0x36ad4c, Func Offset: 0x4c
	// Line 141, Address: 0x36ad58, Func Offset: 0x58
	// Line 143, Address: 0x36ad7c, Func Offset: 0x7c
	// Line 144, Address: 0x36ad88, Func Offset: 0x88
	// Line 147, Address: 0x36ad90, Func Offset: 0x90
	// Line 149, Address: 0x36ada0, Func Offset: 0xa0
	// Line 151, Address: 0x36adac, Func Offset: 0xac
	// Line 154, Address: 0x36adb4, Func Offset: 0xb4
	// Line 155, Address: 0x36add0, Func Offset: 0xd0
	// Line 158, Address: 0x36add4, Func Offset: 0xd4
	// Line 159, Address: 0x36add8, Func Offset: 0xd8
	// Line 163, Address: 0x36adec, Func Offset: 0xec
	// Line 164, Address: 0x36adf0, Func Offset: 0xf0
	// Func End, Address: 0x36ae14, Func Offset: 0x114
}

// xActorDestroy__FP7_xActor
// Start address: 0x36ae20
void xActorDestroy()
{
	// Line 102, Address: 0x36ae20, Func Offset: 0
	// Func End, Address: 0x36ae28, Func Offset: 0x8
}

// xActorInitialize__FP7_xActor
// Start address: 0x36ae30
void xActorInitialize(_xActor* a)
{
	// Line 65, Address: 0x36ae30, Func Offset: 0
	// Line 66, Address: 0x36ae40, Func Offset: 0x10
	// Line 68, Address: 0x36ae4c, Func Offset: 0x1c
	// Line 69, Address: 0x36ae5c, Func Offset: 0x2c
	// Line 71, Address: 0x36ae70, Func Offset: 0x40
	// Line 73, Address: 0x36ae7c, Func Offset: 0x4c
	// Line 76, Address: 0x36ae84, Func Offset: 0x54
	// Line 83, Address: 0x36ae8c, Func Offset: 0x5c
	// Line 84, Address: 0x36aea0, Func Offset: 0x70
	// Func End, Address: 0x36aeb4, Func Offset: 0x84
}

// xActorReInitializeInterpreter__Fv
// Start address: 0x36aec0
void xActorReInitializeInterpreter()
{
	// Line 48, Address: 0x36aec0, Func Offset: 0
	// Line 49, Address: 0x36aec4, Func Offset: 0x4
	// Func End, Address: 0x36aecc, Func Offset: 0xc
}

