typedef struct xTrigger;
typedef struct _rxHeapSuperBlockDescriptor;
typedef struct _iVFXResource;
typedef struct _rwResEntryTag;
typedef struct tagXAnimTrigger;
typedef enum _rpWorldRenderOrder;
typedef struct _RxHeap;
typedef struct _rxHeapBlockHeader;
typedef struct iTriggerResource;
typedef struct xNavPoint;
typedef struct _iSFXResource;
typedef struct _xObj;
typedef enum _RxClusterValidityReq;
typedef struct iDisplayCamera;
typedef struct iActionResource;
typedef struct _rxHeapFreeBlock;
typedef struct tagxStateMgr;
typedef struct xMarker;
typedef struct _xActor;
typedef struct tagP2Weight;
typedef struct _RxPipelineNodeTopSortData;
typedef struct xLookMgr;
typedef struct _RpPolygon;
typedef struct iActionRuntime;
typedef struct xLook;
typedef struct tagXAnimControl;
typedef struct _RxPipelineNode;
typedef struct iActorRuntime;
typedef struct _RxClusterDefinition;
typedef enum _RwTextureFilterMode;
typedef struct xEntryPoint;
typedef struct _RxPipelineNodeParam;
typedef struct _RxPipelineCluster;
typedef enum _rxEmbeddedPacketState;
typedef struct _tagxEnv;
typedef struct tagxPhysicsObject;
typedef struct tagxState;
typedef struct iConditionResource;
typedef struct _RpWorldSector;
typedef struct tagxStateLink;
typedef struct tagiAnimRuntime;
typedef struct _tagiEnvRuntime;
typedef struct _RxNodeDefinition;
typedef enum _RxClusterValid;
typedef struct xRule;
typedef struct tagiFloor;
typedef struct iConditionRuntime;
typedef struct _RwSurfaceProperties;
typedef struct tagXAnim;
typedef struct XStreamHeader;
typedef struct _RpMeshHeader;
typedef struct _RpWorld;
typedef struct Vector3D;
typedef struct _RwV3d;
typedef struct tagiFloorTri;
typedef struct iRuleResource;
typedef struct _RpCollSector;
typedef struct _RxPipelineRequiresCluster;
typedef struct _FCinfo;
typedef struct _RpSector;
typedef struct _iRenderEffects;
typedef struct _RwTexDictionary;
typedef struct _RxPipeline;
typedef struct _rxReq;
typedef struct _RwLLLink;
typedef struct _iEntryPointRuntime;
typedef struct p2Camera;
typedef struct Vector4D;
typedef struct tagXStreamDirectoryEntry;
typedef struct _RpMaterialList;
typedef struct _RwObject;
typedef struct iEntryPointResource;
typedef struct _RpMaterial;
typedef struct _RpClump;
typedef struct tagP2Mesh;
typedef struct iMarkerResource;
typedef struct iObjRuntime;
typedef struct _RxOutputSpec;
typedef struct xScene;
typedef struct xAction;
typedef struct tagP2VERTEX;
typedef struct tagiAnimFrame;
typedef struct _p2Geom;
typedef struct _iLightRuntime;
typedef struct _RwTexture;
typedef struct _RwBBox;
typedef struct _RxClusterRef;
typedef struct xCamera;
typedef struct p2CameraVersion;
typedef struct xCondition;
typedef struct xLight;
typedef struct _RpVertexNormal;
typedef struct tagP2MeshVertex;
typedef struct _RwRaster;
typedef struct tagiAnimResource;
typedef struct _RwTexCoords;
typedef struct iLightResource;
typedef struct _RxIoSpec;
typedef struct _RwRGBA;
typedef struct xNavLink;
typedef struct _RxNodeMethods;
typedef enum _RxClusterForcePresent;
typedef struct tagxActorDBData;
typedef struct _RxPacket;
typedef struct tagxStateThread;
typedef enum _RxNodeDefEditable;
typedef struct tagiMesh;
typedef struct _RxClusterUnion;
typedef enum _RwTextureAddressMode;
typedef struct _RxCluster;
typedef struct _RwLinkList;
typedef struct iCameraResource;
typedef struct tagxLookTarget;
typedef struct tagxPadAction;
typedef struct tagXStreamMDSDirectory;

typedef void(*type_0)(_xActor*, int32, tagXAnim*, tagXAnimTrigger*);
typedef void(*type_5)(_rwResEntryTag*);
typedef int32(*type_10)(_RxPipelineNode*, _RxPipelineNodeParam*);
typedef int32(*type_13)(_RxNodeDefinition*);
typedef _RpWorldSector*(*type_15)(_RpWorldSector*);
typedef void(*type_17)(_RxNodeDefinition*);
typedef int32(*type_25)(_RxPipelineNode*);
typedef void(*type_30)(_RxPipelineNode*);
typedef int32(*type_36)(_RxPipelineNode*, _RxPipeline*);
typedef uint32(*type_50)(_RxPipelineNode*, uint32, uint32, void*);
typedef _RpClump*(*type_57)(_RpClump*, void*);

typedef _xActor type_1[1];
typedef tagXStreamDirectoryEntry type_2[1000];
typedef _xActor type_3[1];
typedef _xActor type_4[1];
typedef _xActor type_6[1];
typedef Vector3D type_7[4];
typedef uint8 type_8[3];
typedef uint16 type_9[3];
typedef _xActor type_11[1];
typedef _xActor type_12[1];
typedef _xActor type_14[4];
typedef _xActor type_16[4];
typedef int32 type_18[7];
typedef uint8 type_19[4];
typedef _xActor type_20[4];
typedef iTriggerResource* type_21[20];
typedef tagxStateThread type_22[7];
typedef _xActor type_23[1];
typedef uint32 type_24[4];
typedef _xActor type_26[1];
typedef uint16 type_27[3];
typedef iTriggerResource* type_28[20];
typedef _xActor type_29[1];
typedef _xActor type_31[4];
typedef uint16 type_32[3];
typedef iTriggerResource* type_33[20];
typedef _xActor type_34[1];
typedef uint8 type_35[4];
typedef _xActor type_37[4];
typedef iTriggerResource* type_38[20];
typedef uint8 type_39[3];
typedef uint8 type_40[4];
typedef int8 type_41[2048];
typedef _xActor type_42[4];
typedef uint8 type_43[4];
typedef _xActor type_44[2];
typedef Vector3D type_45[5];
typedef iTriggerResource* type_46[20];
typedef int8 type_47[128];
typedef _xActor type_48[1];
typedef int8 type_49[128];
typedef _xActor type_51[1];
typedef iTriggerResource* type_52[20];
typedef _xActor type_53[1];
typedef xLook type_54[16];
typedef iTriggerResource* type_55[20];
typedef _xActor type_56[4];
typedef _RxCluster type_58[1];
typedef _xActor type_59[4];
typedef iTriggerResource* type_60[20];
typedef _xActor type_61[1];
typedef float32 type_62[3];
typedef _xActor type_63[1];
typedef int8 type_64[32];
typedef _xActor* type_65[40];
typedef iTriggerResource* type_66[20];
typedef int8 type_67[32];
typedef int8 type_68[40];
typedef _xActor* type_69[13];
typedef iTriggerResource* type_70[20];
typedef iLightResource type_71[2];
typedef int8 type_72[128];
typedef _xActor type_73[1];
typedef iTriggerResource* type_74[20];
typedef _xActor type_75[4];
typedef _xActor type_76[4];
typedef _xActor type_77[1];
typedef iTriggerResource* type_78[20];
typedef _xActor type_79[4];
typedef _xActor type_80[4];
typedef _xActor type_81[4];
typedef tagxState* type_82[10];
typedef _xActor type_83[4];
typedef Vector3D type_84[4];
typedef _xActor type_85[1];
typedef p2CameraVersion type_86[5];
typedef _xActor type_87[4];
typedef _xActor type_88[4];
typedef _xActor type_89[4];
typedef _xActor type_90[1];
typedef _xActor type_91[1];

struct xTrigger
{
	iTriggerResource* m_resource;
};

struct _rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	_rxHeapSuperBlockDescriptor* next;
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

struct _rwResEntryTag
{
	_RwLLLink link;
	int32 size;
	void* owner;
	_rwResEntryTag** ownerRef;
	void(*destroyNotify)(_rwResEntryTag*);
};

struct tagXAnimTrigger
{
	uint16 m_frame;
	uint16 m_type;
	uint32 m_data;
};

enum _rpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
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

struct _xObj
{
	void* m_resource;
	iObjRuntime* m_runtime;
	uint32 m_modelID;
	void* m_texture;
	int16 m_objType;
	int16 m_objID;
};

enum _RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct iDisplayCamera
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

struct _rxHeapFreeBlock
{
	uint32 size;
	_rxHeapBlockHeader* ptr;
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

struct xMarker
{
	iMarkerResource* m_resource;
	void** m_runtime;
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

struct tagP2Weight
{
	uint16 m_joint0;
	uint16 m_joint1;
	float32 m_weight0;
	float32 m_weight1;
};

struct _RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	_rxReq* req;
	void* initialisationData;
	uint32 initialisationDataSize;
};

struct xLookMgr
{
	uint8 m_hasInterest;
	uint8 m_lastSlot;
	uint16 m_pad;
	Vector3D m_lastPoint;
	tagxPhysicsObject* m_lookFrom;
	Vector3D m_lookFromP;
	float32 m_lastLookDelta;
	float32 m_lastLookDeltaY;
	xLook m_look[16];
};

struct _RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
};

struct iActionRuntime
{
	xAction* m_and;
};

struct xLook
{
	uint16 m_decay;
	uint16 m_decayCount;
	uint8 m_priority;
	uint8 m_flag;
	uint16 m_wait;
	float32 m_distance;
	tagxLookTarget m_t;
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

struct tagxStateLink
{
	uint8 m_command;
	uint8 m_flags;
	uint16 m_state;
};

struct tagiAnimRuntime
{
	void* m_sfx;
	void* m_vfx;
};

struct _tagiEnvRuntime
{
	_RpWorld* world;
	Vector3D world_origin;
	_RwTexDictionary* tex_dict;
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

struct iConditionRuntime
{
	xCondition* m_operand;
	uint16 m_match;
	uint16 m_trigger;
};

struct _RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

struct tagXAnim
{
	tagiAnimResource* m_resource;
	tagiAnimRuntime* m_runtime;
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

struct tagiFloorTri
{
	uint16 m_v[3];
	uint16 m_n;
};

struct iRuleResource
{
	uint32 m_actionCount;
	xAction* m_action;
	uint32 m_conditionCount;
	xCondition* m_condition;
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

struct _FCinfo
{
	uint16 nidx[3];
};

struct _RpSector
{
	int32 type;
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

struct _RwLLLink
{
	_RwLLLink* next;
	_RwLLLink* prev;
};

struct _iEntryPointRuntime
{
	uint32 m_enabled;
};

struct p2Camera
{
	Vector3D m_pos;
	Vector3D m_rot;
	float32 m_fov;
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

struct _RpMaterialList
{
	_RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct _RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
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

struct _RpMaterial
{
	_RwTexture* texture;
	_RwRGBA color;
	_RxPipeline* pipeline;
	_RwSurfaceProperties surfaceProps;
	int16 refCount;
	int16 pad;
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

struct iMarkerResource
{
	Vector3D m_pos;
};

struct iObjRuntime
{
	int16 m_flag;
	int16 m_pad;
	_p2Geom* m_geom;
	float32 m_bradius;
	tagxPhysicsObject m_phys;
};

struct _RxOutputSpec
{
	int8* name;
	_RxClusterValid* outputClusters;
	_RxClusterValid allOtherClusters;
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

struct tagiAnimFrame
{
	float32* m_tx;
	float32* m_ty;
	float32* m_tz;
	float32* m_rx;
	float32* m_ry;
	float32* m_rz;
};

struct _p2Geom
{
	uint32 m_meshCount;
	tagP2Mesh* m_mesh;
	_iRenderEffects effects;
	_RpClump* m_clump;
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

struct xCamera
{
	iCameraResource* m_resource;
	void** m_runtime;
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

struct xCondition
{
	iConditionResource* m_resource;
	iConditionRuntime* m_runtime;
};

struct xLight
{
	iLightResource* m_resource;
	_iLightRuntime* m_runtime;
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

struct _RwTexCoords
{
	float32 u;
	float32 v;
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

enum _RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
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

struct tagxStateThread
{
	tagxState* m_state;
	tagXAnimControl* m_animCtl;
	int32 m_deferredWaiting;
	tagxPadAction m_deferred;
	int32 m_rbp;
	tagxState* m_ring[10];
};

enum _RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct tagiMesh
{
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

struct tagxLookTarget
{
	union
	{
		_xActor* m_actor;
		_xObj* m_obj;
		xMarker* m_marker;
		Vector3D* m_vectorp;
	};
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

struct tagXStreamMDSDirectory
{
	uint32 count;
	tagXStreamDirectoryEntry directory[1000];
};

xLookMgr gLookMgr;
int8 vAssertBuf2[128];
XStreamHeader currentHeader;
tagxActorDBData* gadb;
float32 g_DEGTORAD;
float32 g_PI_DIV_4;
float32 g_2_PI;
float32 g_PI;
float32 g_PI_DIV_2;
xScene* xScene_current;

void xLookActor(_xActor* a);
void xLookActorRemove(_xActor* a);
void xLookObj(_xObj* o);
void xLookObjRemove(_xObj* o);
xLook* xLookGetSlot(uint8 priority, uint16 duration, float32 distance, int32 addFlag);
void xLookLevelReset();
void xLookDebug();
void xLookInit();

// xLookActor__FP7_xActor
// Start address: 0x396c70
void xLookActor(_xActor* a)
{
	float32 distance;
	uint16 duration;
	uint8 priority;
	xLook* look;
	// Line 975, Address: 0x396c70, Func Offset: 0
	// Line 982, Address: 0x396c90, Func Offset: 0x20
	// Line 985, Address: 0x396d30, Func Offset: 0xc0
	// Line 987, Address: 0x396d3c, Func Offset: 0xcc
	// Line 988, Address: 0x396d4c, Func Offset: 0xdc
	// Line 990, Address: 0x396d54, Func Offset: 0xe4
	// Line 991, Address: 0x396d58, Func Offset: 0xe8
	// Line 992, Address: 0x396d5c, Func Offset: 0xec
	// Line 994, Address: 0x396d64, Func Offset: 0xf4
	// Line 995, Address: 0x396db8, Func Offset: 0x148
	// Line 997, Address: 0x396dc0, Func Offset: 0x150
	// Line 998, Address: 0x396ddc, Func Offset: 0x16c
	// Line 1000, Address: 0x396de4, Func Offset: 0x174
	// Line 1002, Address: 0x396de8, Func Offset: 0x178
	// Line 1005, Address: 0x396df0, Func Offset: 0x180
	// Line 1007, Address: 0x396e00, Func Offset: 0x190
	// Line 1011, Address: 0x396e08, Func Offset: 0x198
	// Line 1014, Address: 0x396eb8, Func Offset: 0x248
	// Func End, Address: 0x396edc, Func Offset: 0x26c
}

// xLookActorRemove__FP7_xActor
// Start address: 0x396ee0
void xLookActorRemove(_xActor* a)
{
	xLook* look;
	int32 i;
	// Line 951, Address: 0x396ee0, Func Offset: 0
	// Line 956, Address: 0x396ef4, Func Offset: 0x14
	// Line 958, Address: 0x396f98, Func Offset: 0xb8
	// Line 960, Address: 0x396fa0, Func Offset: 0xc0
	// Line 962, Address: 0x396fac, Func Offset: 0xcc
	// Line 964, Address: 0x396fc0, Func Offset: 0xe0
	// Line 966, Address: 0x396fcc, Func Offset: 0xec
	// Line 967, Address: 0x397084, Func Offset: 0x1a4
	// Line 970, Address: 0x39708c, Func Offset: 0x1ac
	// Line 972, Address: 0x3970a4, Func Offset: 0x1c4
	// Func End, Address: 0x3970bc, Func Offset: 0x1dc
}

// xLookObj__FP5_xObj
// Start address: 0x3970c0
void xLookObj(_xObj* o)
{
	float32 distance;
	uint16 duration;
	uint8 priority;
	xLook* look;
	// Line 927, Address: 0x3970c0, Func Offset: 0
	// Line 930, Address: 0x3970e0, Func Offset: 0x20
	// Line 931, Address: 0x3970e4, Func Offset: 0x24
	// Line 932, Address: 0x3970f8, Func Offset: 0x38
	// Line 934, Address: 0x397130, Func Offset: 0x70
	// Line 936, Address: 0x3971d0, Func Offset: 0x110
	// Line 937, Address: 0x3972c8, Func Offset: 0x208
	// Line 939, Address: 0x3972d0, Func Offset: 0x210
	// Line 940, Address: 0x3972ec, Func Offset: 0x22c
	// Line 941, Address: 0x3972f4, Func Offset: 0x234
	// Line 942, Address: 0x3972f8, Func Offset: 0x238
	// Line 945, Address: 0x397300, Func Offset: 0x240
	// Line 948, Address: 0x3973b0, Func Offset: 0x2f0
	// Func End, Address: 0x3973d4, Func Offset: 0x314
}

// xLookObjRemove__FP5_xObj
// Start address: 0x3973e0
void xLookObjRemove(_xObj* o)
{
	xLook* look;
	int32 i;
	// Line 902, Address: 0x3973e0, Func Offset: 0
	// Line 907, Address: 0x3973ec, Func Offset: 0xc
	// Line 909, Address: 0x3973f4, Func Offset: 0x14
	// Line 911, Address: 0x397400, Func Offset: 0x20
	// Line 913, Address: 0x397414, Func Offset: 0x34
	// Line 915, Address: 0x397420, Func Offset: 0x40
	// Line 916, Address: 0x3974d4, Func Offset: 0xf4
	// Line 919, Address: 0x3974dc, Func Offset: 0xfc
	// Line 921, Address: 0x3974f4, Func Offset: 0x114
	// Func End, Address: 0x397508, Func Offset: 0x128
}

// xLookGetSlot__FUcUsfi
// Start address: 0x397510
xLook* xLookGetSlot(uint8 priority, uint16 duration, float32 distance, int32 addFlag)
{
	uint8 flag;
	xLookMgr* mgr;
	uint32 equalIndex;
	uint32 lowestIndex;
	uint32 i;
	xLook* idx;
	xLook* look;
	// Line 682, Address: 0x397510, Func Offset: 0
	// Line 684, Address: 0x39753c, Func Offset: 0x2c
	// Line 685, Address: 0x397540, Func Offset: 0x30
	// Line 686, Address: 0x397544, Func Offset: 0x34
	// Line 690, Address: 0x39754c, Func Offset: 0x3c
	// Line 693, Address: 0x397550, Func Offset: 0x40
	// Line 695, Address: 0x39755c, Func Offset: 0x4c
	// Line 698, Address: 0x397560, Func Offset: 0x50
	// Line 701, Address: 0x39756c, Func Offset: 0x5c
	// Line 702, Address: 0x397570, Func Offset: 0x60
	// Line 705, Address: 0x397578, Func Offset: 0x68
	// Line 708, Address: 0x397588, Func Offset: 0x78
	// Line 711, Address: 0x39759c, Func Offset: 0x8c
	// Line 714, Address: 0x3975a8, Func Offset: 0x98
	// Line 715, Address: 0x3975ac, Func Offset: 0x9c
	// Line 719, Address: 0x3975b4, Func Offset: 0xa4
	// Line 722, Address: 0x3975d0, Func Offset: 0xc0
	// Line 731, Address: 0x3975d4, Func Offset: 0xc4
	// Line 732, Address: 0x3975d8, Func Offset: 0xc8
	// Line 735, Address: 0x3975f0, Func Offset: 0xe0
	// Line 738, Address: 0x3975f8, Func Offset: 0xe8
	// Line 740, Address: 0x397604, Func Offset: 0xf4
	// Line 741, Address: 0x397610, Func Offset: 0x100
	// Line 744, Address: 0x3976b8, Func Offset: 0x1a8
	// Line 749, Address: 0x3976c4, Func Offset: 0x1b4
	// Line 752, Address: 0x3976cc, Func Offset: 0x1bc
	// Line 753, Address: 0x397774, Func Offset: 0x264
	// Line 755, Address: 0x39781c, Func Offset: 0x30c
	// Line 757, Address: 0x3978d0, Func Offset: 0x3c0
	// Line 758, Address: 0x3978d8, Func Offset: 0x3c8
	// Line 761, Address: 0x397988, Func Offset: 0x478
	// Line 764, Address: 0x39798c, Func Offset: 0x47c
	// Func End, Address: 0x3979b0, Func Offset: 0x4a0
}

// xLookLevelReset__Fv
// Start address: 0x3979b0
void xLookLevelReset()
{
	xLookMgr* mgr;
	xLook* look;
	int32 i;
	// Line 645, Address: 0x3979b0, Func Offset: 0
	// Line 649, Address: 0x3979c4, Func Offset: 0x14
	// Line 651, Address: 0x3979cc, Func Offset: 0x1c
	// Line 653, Address: 0x3979d0, Func Offset: 0x20
	// Line 655, Address: 0x3979dc, Func Offset: 0x2c
	// Line 656, Address: 0x397a94, Func Offset: 0xe4
	// Line 658, Address: 0x397aac, Func Offset: 0xfc
	// Line 659, Address: 0x397ab0, Func Offset: 0x100
	// Line 661, Address: 0x397ab8, Func Offset: 0x108
	// Line 662, Address: 0x397abc, Func Offset: 0x10c
	// Line 663, Address: 0x397ac0, Func Offset: 0x110
	// Line 665, Address: 0x397ac4, Func Offset: 0x114
	// Line 667, Address: 0x397ad4, Func Offset: 0x124
	// Line 668, Address: 0x397ad8, Func Offset: 0x128
	// Line 669, Address: 0x397adc, Func Offset: 0x12c
	// Line 671, Address: 0x397ae0, Func Offset: 0x130
	// Line 672, Address: 0x397ae4, Func Offset: 0x134
	// Line 675, Address: 0x397ae8, Func Offset: 0x138
	// Func End, Address: 0x397b04, Func Offset: 0x154
}

// xLookDebug__Fv
// Start address: 0x397b10
void xLookDebug()
{
	Vector3D d;
	float32 distance;
	Vector3D b;
	Vector3D a;
	int8 name[128];
	int8 str[128];
	int32 hasLookAt;
	xLook* lookAt;
	float32 lookAtDistance;
	int32 good;
	int32 priority;
	Vector3D p;
	xLook* look;
	int32 i;
	// Line 68, Address: 0x397b10, Func Offset: 0
	// Line 83, Address: 0x397b24, Func Offset: 0x14
	// Line 90, Address: 0x397b34, Func Offset: 0x24
	// Line 91, Address: 0x397b88, Func Offset: 0x78
	// Line 93, Address: 0x397be4, Func Offset: 0xd4
	// Line 95, Address: 0x397bec, Func Offset: 0xdc
	// Line 97, Address: 0x397bfc, Func Offset: 0xec
	// Line 98, Address: 0x397c08, Func Offset: 0xf8
	// Line 99, Address: 0x397c14, Func Offset: 0x104
	// Line 100, Address: 0x397c20, Func Offset: 0x110
	// Line 101, Address: 0x397c2c, Func Offset: 0x11c
	// Line 102, Address: 0x397c38, Func Offset: 0x128
	// Line 103, Address: 0x397c44, Func Offset: 0x134
	// Line 104, Address: 0x397c60, Func Offset: 0x150
	// Line 105, Address: 0x397c68, Func Offset: 0x158
	// Line 108, Address: 0x397c84, Func Offset: 0x174
	// Line 110, Address: 0x397c90, Func Offset: 0x180
	// Line 112, Address: 0x397ca0, Func Offset: 0x190
	// Line 113, Address: 0x397ca4, Func Offset: 0x194
	// Line 115, Address: 0x397cb4, Func Offset: 0x1a4
	// Line 117, Address: 0x397cc4, Func Offset: 0x1b4
	// Line 119, Address: 0x397cdc, Func Offset: 0x1cc
	// Line 121, Address: 0x397cfc, Func Offset: 0x1ec
	// Line 122, Address: 0x397d24, Func Offset: 0x214
	// Line 125, Address: 0x397d28, Func Offset: 0x218
	// Line 126, Address: 0x397d30, Func Offset: 0x220
	// Line 128, Address: 0x397d40, Func Offset: 0x230
	// Line 130, Address: 0x397d54, Func Offset: 0x244
	// Line 132, Address: 0x397d74, Func Offset: 0x264
	// Line 133, Address: 0x397d88, Func Offset: 0x278
	// Line 135, Address: 0x397da4, Func Offset: 0x294
	// Line 137, Address: 0x397da8, Func Offset: 0x298
	// Line 138, Address: 0x397db0, Func Offset: 0x2a0
	// Line 140, Address: 0x397dc0, Func Offset: 0x2b0
	// Line 142, Address: 0x397de0, Func Offset: 0x2d0
	// Line 143, Address: 0x397e1c, Func Offset: 0x30c
	// Line 144, Address: 0x397e20, Func Offset: 0x310
	// Line 145, Address: 0x397e28, Func Offset: 0x318
	// Line 147, Address: 0x397e38, Func Offset: 0x328
	// Line 148, Address: 0x397e54, Func Offset: 0x344
	// Line 150, Address: 0x397e58, Func Offset: 0x348
	// Line 153, Address: 0x397e70, Func Offset: 0x360
	// Line 158, Address: 0x397e78, Func Offset: 0x368
	// Line 159, Address: 0x397e94, Func Offset: 0x384
	// Line 165, Address: 0x397ea0, Func Offset: 0x390
	// Line 167, Address: 0x397ed0, Func Offset: 0x3c0
	// Line 169, Address: 0x397edc, Func Offset: 0x3cc
	// Line 170, Address: 0x397ee0, Func Offset: 0x3d0
	// Line 173, Address: 0x397ef4, Func Offset: 0x3e4
	// Func End, Address: 0x397f10, Func Offset: 0x400
}

// xLookInit__Fv
// Start address: 0x397f10
void xLookInit()
{
	// Line 34, Address: 0x397f10, Func Offset: 0
	// Line 36, Address: 0x397f18, Func Offset: 0x8
	// Line 37, Address: 0x397f30, Func Offset: 0x20
	// Line 40, Address: 0x397f3c, Func Offset: 0x2c
	// Func End, Address: 0x397f4c, Func Offset: 0x3c
}

