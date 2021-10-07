typedef struct tagXStreamMDSDirectory;
typedef struct _iVFXResource;
typedef struct _rxHeapSuperBlockDescriptor;
typedef struct tagXAnimTrigger;
typedef struct Vector3D;
typedef struct _rwResEntryTag;
typedef struct _RxHeap;
typedef struct _iSFXResource;
typedef struct _rxHeapBlockHeader;
typedef struct xEntryPoint;
typedef struct xScene;
typedef struct _tagxEnv;
typedef enum _RxClusterValidityReq;
typedef struct iLightResource;
typedef struct _rxHeapFreeBlock;
typedef struct tagxStateMgr;
typedef struct tagP2Weight;
typedef struct iConditionResource;
typedef struct _RxPipelineNodeTopSortData;
typedef struct _tagiEnvRuntime;
typedef struct xNavPoint;
typedef struct _RpWorldSector;
typedef struct xRule;
typedef struct _xActor;
typedef struct tagXAnimControl;
typedef struct iTriggerResource;
typedef struct iActorRuntime;
typedef struct _RxPipelineNode;
typedef struct _RxClusterDefinition;
typedef struct tagiFloor;
typedef struct iConditionRuntime;
typedef enum _RwTextureFilterMode;
typedef struct _RxPipelineNodeParam;
typedef struct _RxPipelineCluster;
typedef enum _rxEmbeddedPacketState;
typedef struct _RpMeshHeader;
typedef struct tagxState;
typedef struct tagxStateLink;
typedef struct tagiAnimRuntime;
typedef struct _RpWorld;
typedef struct _RxNodeDefinition;
typedef enum _RxClusterValid;
typedef struct tagiFloorTri;
typedef struct _RwSurfaceProperties;
typedef struct iRuleResource;
typedef struct _RpCollSector;
typedef struct tagXAnim;
typedef struct _xObj;
typedef struct XStreamHeader;
typedef struct _RwV3d;
typedef struct xTrigger;
typedef struct _RpSector;
typedef struct p2Camera;
typedef struct _RxPipelineRequiresCluster;
typedef struct _iEntryPointRuntime;
typedef struct _RwLLLink;
typedef struct _FCinfo;
typedef struct _RpMaterialList;
typedef struct _iRenderEffects;
typedef struct iEntryPointResource;
typedef struct _RwTexDictionary;
typedef struct _RxPipeline;
typedef struct _RpMaterial;
typedef struct iMarkerResource;
typedef struct _rxReq;
typedef struct _RpClump;
typedef struct Vector4D;
typedef struct xAction;
typedef struct tagXStreamDirectoryEntry;
typedef struct _RwObject;
typedef struct _RpPolygon;
typedef struct _iLightRuntime;
typedef struct iCameraResource;
typedef struct tagP2Mesh;
typedef struct xCamera;
typedef struct p2CameraVersion;
typedef struct _RxOutputSpec;
typedef struct iObjRuntime;
typedef struct xLight;
typedef struct _RpVertexNormal;
typedef struct xCondition;
typedef struct _RwTexCoords;
typedef struct tagP2VERTEX;
typedef struct tagiAnimFrame;
typedef struct tagxObjDBData;
typedef struct _RwRGBA;
typedef struct _p2Geom;
typedef struct _RwBBox;
typedef struct _RwTexture;
typedef struct tagxActorDBData;
typedef struct _RxClusterRef;
typedef struct xNavLink;
typedef struct tagP2MeshVertex;
typedef struct _RwRaster;
typedef struct XStream;
typedef struct tagiAnimResource;
typedef struct _RxIoSpec;
typedef struct xMarker;
typedef struct _RxNodeMethods;
typedef enum _RxClusterForcePresent;
typedef struct _RxPacket;
typedef struct tagxStateThread;
typedef enum _RxNodeDefEditable;
typedef struct tagiMesh;
typedef struct _RxClusterUnion;
typedef struct iActionRuntime;
typedef enum _RwTextureAddressMode;
typedef struct _RxCluster;
typedef struct _RwLinkList;
typedef struct iActionResource;
typedef struct tag_xCameraControl;
typedef struct tagxPhysicsObject;
typedef enum _rpWorldRenderOrder;
typedef struct iDisplayCamera;
typedef struct tagxPadAction;

typedef void(*type_1)(_xActor*, int32, tagXAnim*, tagXAnimTrigger*);
typedef int32(*type_2)();
typedef void(*type_7)(int32, int32);
typedef void(*type_9)(_rwResEntryTag*);
typedef _RpWorldSector*(*type_11)(_RpWorldSector*);
typedef int32(*type_14)(_RxPipelineNode*, _RxPipelineNodeParam*);
typedef void(*type_17)(int32, int32, int32, int32, int32);
typedef int32(*type_18)(_RxNodeDefinition*);
typedef void(*type_24)(_RxNodeDefinition*);
typedef void(*type_27)(int32, int32, int32);
typedef int32(*type_32)(_RxPipelineNode*);
typedef void(*type_34)(int32, int32, int32);
typedef void(*type_37)(_RxPipelineNode*);
typedef void(*type_43)(int32, int32, int32);
typedef int32(*type_44)(_RxPipelineNode*, _RxPipeline*);
typedef void(*type_54)(int32, int32);
typedef _RpClump*(*type_57)(_RpClump*, void*);
typedef uint32(*type_58)(_RxPipelineNode*, uint32, uint32, void*);
typedef void(*type_59)(int32, int32);
typedef void(*type_63)(int32, int32);
typedef void(*type_66)(int32, int32);
typedef int32(*type_71)(int32);
typedef int32(*type_75)(int32);
typedef int32(*type_82)(int32, int32);
typedef void(*type_89)(int32, int32);
typedef void(*type_93)(int32, int32);
typedef void(*type_99)(int32, int32, int32);
typedef void(*type_103)(int32, int32, int32);
typedef int32(*type_106)();
typedef void(*type_107)(int32, int32);

typedef _xActor type_0[4];
typedef Vector3D type_3[4];
typedef uint16 type_4[3];
typedef tagXStreamDirectoryEntry type_5[1000];
typedef _xActor type_6[4];
typedef _xActor type_8[4];
typedef _xActor type_10[1];
typedef uint8 type_12[3];
typedef _xActor type_13[1];
typedef _xActor type_15[1];
typedef iTriggerResource* type_16[20];
typedef _xActor type_19[4];
typedef _xActor type_20[1];
typedef iTriggerResource* type_21[20];
typedef uint16 type_22[3];
typedef int32 type_23[7];
typedef uint8 type_25[4];
typedef _xActor type_26[4];
typedef tagxStateThread type_28[7];
typedef _xActor type_29[4];
typedef iTriggerResource* type_30[20];
typedef uint32 type_31[4];
typedef _xActor type_33[2];
typedef _xActor type_35[1];
typedef iTriggerResource* type_36[20];
typedef _xActor type_38[1];
typedef uint16 type_39[3];
typedef _xActor type_40[1];
typedef iTriggerResource* type_41[20];
typedef uint8 type_42[4];
typedef _xActor type_45[4];
typedef uint8 type_46[3];
typedef uint8 type_47[4];
typedef int8 type_48[2048];
typedef iTriggerResource* type_49[20];
typedef _xActor type_50[4];
typedef uint8 type_51[4];
typedef _xActor type_52[1];
typedef Vector3D type_53[5];
typedef iTriggerResource* type_55[20];
typedef _xActor type_56[1];
typedef _xActor* type_60[40];
typedef int8 type_61[40];
typedef iTriggerResource* type_62[20];
typedef float32 type_64[3];
typedef _xActor* type_65[13];
typedef _xObj type_67[32];
typedef _RxCluster type_68[1];
typedef iTriggerResource* type_69[20];
typedef _xActor type_70[1];
typedef _xActor type_72[4];
typedef _xActor type_73[4];
typedef iTriggerResource* type_74[20];
typedef iLightResource type_76[2];
typedef int8 type_77[32];
typedef _xActor type_78[1];
typedef int8 type_79[32];
typedef _xActor type_80[4];
typedef iTriggerResource* type_81[20];
typedef _xActor type_83[4];
typedef _xActor type_84[4];
typedef int8 type_85[128];
typedef iTriggerResource* type_86[20];
typedef _xActor type_87[4];
typedef _xActor type_88[1];
typedef _xActor type_90[4];
typedef Vector3D type_91[4];
typedef _xActor type_92[4];
typedef _xActor type_94[4];
typedef p2CameraVersion type_95[5];
typedef _xActor type_96[1];
typedef tagxState* type_97[10];
typedef _xActor type_98[1];
typedef _xActor type_100[1];
typedef _xActor type_101[1];
typedef _xActor type_102[1];
typedef _xActor type_104[1];
typedef _xActor type_105[1];
typedef _xActor type_108[1];

struct tagXStreamMDSDirectory
{
	uint32 count;
	tagXStreamDirectoryEntry directory[1000];
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

struct _rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	_rxHeapSuperBlockDescriptor* next;
};

struct tagXAnimTrigger
{
	uint16 m_frame;
	uint16 m_type;
	uint32 m_data;
};

struct Vector3D
{
	float32 x;
	float32 y;
	float32 z;
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

struct _rxHeapBlockHeader
{
	_rxHeapBlockHeader* prev;
	_rxHeapBlockHeader* next;
	uint32 size;
	_rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
};

struct xEntryPoint
{
	iEntryPointResource* m_resource;
	_iEntryPointRuntime* m_runtime;
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

struct _tagxEnv
{
	_tagiEnvRuntime* m_runtime;
};

enum _RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct iLightResource
{
	uint32 m_type;
	Vector3D m_pos;
	Vector3D m_rot;
	Vector3D m_color;
	int32 m_fov;
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

struct tagP2Weight
{
	uint16 m_joint0;
	uint16 m_joint1;
	float32 m_weight0;
	float32 m_weight1;
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

struct _RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	_rxReq* req;
	void* initialisationData;
	uint32 initialisationDataSize;
};

struct _tagiEnvRuntime
{
	_RpWorld* world;
	Vector3D world_origin;
	_RwTexDictionary* tex_dict;
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

struct _RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
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

struct tagiFloorTri
{
	uint16 m_v[3];
	uint16 m_n;
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

struct _RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
};

struct tagXAnim
{
	tagiAnimResource* m_resource;
	tagiAnimRuntime* m_runtime;
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

struct _RpSector
{
	int32 type;
};

struct p2Camera
{
	Vector3D m_pos;
	Vector3D m_rot;
	float32 m_fov;
};

struct _RxPipelineRequiresCluster
{
	_RxClusterDefinition* clusterDef;
	_RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct _iEntryPointRuntime
{
	uint32 m_enabled;
};

struct _RwLLLink
{
	_RwLLLink* next;
	_RwLLLink* prev;
};

struct _FCinfo
{
	uint16 nidx[3];
};

struct _RpMaterialList
{
	_RpMaterial** materials;
	int32 numMaterials;
	int32 space;
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

struct _rxReq
{
};

struct _RpClump
{
	_RwObject object;
	_RwLinkList atomicList;
	_RwLLLink inWorldLink;
	_RpClump*(*callback)(_RpClump*, void*);
	uint16 renderFrame;
};

struct Vector4D
{
	float32 x;
	float32 y;
	float32 z;
	float32 t;
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

struct _RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
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

struct iCameraResource
{
	uint16 m_plateOffset;
	uint16 m_versions;
	p2CameraVersion m_version[5];
	uint32 m_frameCount;
	p2Camera* m_cameras;
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

struct _RxOutputSpec
{
	int8* name;
	_RxClusterValid* outputClusters;
	_RxClusterValid allOtherClusters;
};

struct iObjRuntime
{
	int16 m_flag;
	int16 m_pad;
	_p2Geom* m_geom;
	float32 m_bradius;
	tagxPhysicsObject m_phys;
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

struct xCondition
{
	iConditionResource* m_resource;
	iConditionRuntime* m_runtime;
};

struct _RwTexCoords
{
	float32 u;
	float32 v;
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

struct tagxObjDBData
{
	_xObj m_o[32];
	int32 m_staticObjects;
	int32 m_staticAssets;
};

struct _RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct _p2Geom
{
	uint32 m_meshCount;
	tagP2Mesh* m_mesh;
	_iRenderEffects effects;
	_RpClump* m_clump;
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

struct _RxClusterRef
{
	_RxClusterDefinition* clusterDef;
	_RxClusterForcePresent forcePresent;
	uint32 reserved;
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

struct _RxIoSpec
{
	uint32 numClustersOfInterest;
	_RxClusterRef* clustersOfInterest;
	_RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	_RxOutputSpec* outputs;
};

struct xMarker
{
	iMarkerResource* m_resource;
	void** m_runtime;
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

struct iActionResource
{
	uint8 m_cmdType;
	uint8 m_cmd;
	uint16 pad;
	uint32 m_cmdParameter;
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

enum _rpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct iDisplayCamera
{
	Vector3D m_pos;
	Vector3D m_rot;
	float32 m_fov;
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

int32 theGlobalTriggerNumber;
int32 theGlobalTriggerDisplay;
int32 gLastCameraIndex;
int32 nextCameraCounter;
int32 sDisableCameraChange;
int32 sLastRejectedCameraIndex;
int32 sLastRejectedCameraCommand;
int32 sLastRejectedCameraVersion;
int32 sLastRejectedCameraStart;
int32 sLastRejectedCameraEnd;
int32 sLastEvaluateCamera;
int32 g_sceneSwapPending;
uint32 g_scenePendingScene;
int32 g_scenePendingCamera;
int32 g_scenePendingMarker;
Vector3D g_scenePendingAng;
int32 gDebugLight;
uint32 interpreterMethod;
int32 sDefaultCameraChangeInProgress;
int32 sDefaultCameraCommand;
int32 sDefaultCameraIndex;
int32 sDefaultCameraVersion;
int32 sDefaultCameraStart;
int32 sDefaultCameraEnd;
uint8 gDisableCameraTriggers;
int8 vAssertBuf2[128];
XStreamHeader currentHeader;
tag_xCameraControl gCamera;
xScene* xScene_current;
int32 gBossBattle;
int32 gGameState;
int32 gDebugDrawDebugInfo;
int32 gPlayerType;
tagxActorDBData* gadb;
int32 gPlayerID;
tagxObjDBData* godb;
int32 g_DNPCAnimationsCount;
int32 g_DNPCSkeletonCount;
int32 g_DNPCModelCount;
int32 g_BossAnimationsCount;
int32 g_BossSkeletonCount;
int32 g_BossModelCount;
uint8 gAudioStatus;
int32 gDebugGameEventCounter;
int32(*xSceneScriptIsNPCInVisArea)(int32, int32);
int32(*xSceneScriptIsNPCMarkerVisible)(int32);
int32(*xSceneScriptIsObjMarkerVisible)(int32);
int32(*xSceneScriptGetMarkerCount)();
int32(*xSceneScriptGetNavPointCount)();
void(*xSceneScriptEntryPointEnable)(int32, int32);
void(*xSceneScriptTriggerEnable)(int32, int32);
void(*xSceneScriptLightSetSunDirection)(int32, int32);
void(*xSceneScriptLightSetSunColor)(int32, int32, int32);
void(*xSceneScriptLightSetAmbient)(int32, int32, int32);
void(*xSceneScriptLightSetColor)(int32, int32, int32, int32, int32);
void(*xSceneScriptLightSetPositionMarker)(int32, int32, int32);
void(*xSceneScriptLightSetRange)(int32, int32, int32);
void(*xSceneScriptLightSetFalloff)(int32, int32, int32);
void(*xSceneScriptLightSetEnable)(int32, int32);
void(*xSceneScriptLightSetWeight)(int32, int32);
void(*xSceneScriptLightSetFrameSpeed)(int32, int32);
void(*xSceneScriptLightSetSpeed)(int32, int32);
void(*xSceneScriptLightSetMode)(int32, int32);

void xSceneAnimateCamera();
void xSceneControlCamera(int32 cmd, int32 theCamera, int32 version, int32 start, int32 end);
void xSceneScriptControlCamera(int32 cmd, int32 theCamera, int32 version, int32 start, int32 end);
void xSceneSetCamera(int32 c, int32 v);
int32 xSceneVFXVisible(xScene* s, Vector3D* p);
int32 xSceneRTObjVisible(xScene* s, Vector3D* p);
int32 xSceneNPCVisible(xScene* s, Vector3D* p);
int32 xSceneLightVisible(xScene* s, Vector3D* p);
int32 xScenePlayerVisible(xScene* s, Vector3D* p);
void xSceneEvaluateTriggers(xScene* s);
void xSceneCheckTriggerHitPlayer(xScene* s);
int32 xSceneGetTriggerMaterials(xScene* s, Vector3D* p, uint8* mat, uint32 maxMat);
void xSceneDebugLights(xScene* s);
void xSceneDebugDrawTriggers(xScene* s);
void xSceneDebugDrawEntryPoints(xEntryPoint* e);
void xSceneCheckEntryHitPlayer(xScene* s);
void xSceneActivate();
void xSceneSwitch(xScene* s, uint32 sceneID, uint32 cameraID, uint32 markerID, Vector3D* ang);
void xSceneIdle(xScene* s);
void xSceneDebugDrawGeom(int32 type, Vector3D* v, int32 red, int32 green, int32 blue);
void xSceneInit(xScene* s, uint32 sceneId);
void xSceneScriptEntryPointEnable(int32 id, int32 state);
void xSceneScriptTriggerEnable(int32 id, int32 state);
void xSceneScriptLightSetSunColor(int32 r, int32 g, int32 b);
void xSceneScriptLightSetSunDirection(int32 m1, int32 m2);
void xSceneScriptLightSetAmbient(int32 r, int32 g, int32 b);
void xSceneScriptLightSetColor(int32 idx, int32 r, int32 g, int32 b, int32 anchorIdx);
void xSceneScriptLightSetPositionMarker(int32 idx, int32 midx, int32 anchorIdx);
void xSceneScriptLightSetRange(int32 idx, int32 range, int32 anchorIdx);
void xSceneScriptLightSetFalloff(int32 idx, int32 falloff, int32 anchorIdx);
void xSceneScriptLightSetEnable(int32 idx, int32 enabled);
void xSceneScriptLightSetFrameSpeed(int32 idx, int32 rate);
void xSceneScriptLightSetSpeed(int32 idx, int32 speed);
void xSceneScriptLightSetWeight(int32 idx, int32 weight);
void xSceneScriptLightSetMode(int32 idx, int32 mode);
int32 xSceneScriptIsNPCMarkerVisible(int32 markerID);
int32 xSceneScriptIsNPCInVisArea(int32 type, int32 id);
int32 xSceneScriptIsObjMarkerVisible(int32 markerID);
int32 xSceneScriptGetMarkerCount();
int32 xSceneScriptGetNavPointCount();
void xSceneReInitializeInterpreter();
void xSceneRegisterScriptCalls();

// xSceneAnimateCamera__Fv
// Start address: 0x332d80
void xSceneAnimateCamera()
{
	int32 nextFrame;
	iCameraResource* cam;
	// Line 2942, Address: 0x332d80, Func Offset: 0
	// Line 2948, Address: 0x332d8c, Func Offset: 0xc
	// Line 2956, Address: 0x332da0, Func Offset: 0x20
	// Line 2959, Address: 0x332dac, Func Offset: 0x2c
	// Line 2962, Address: 0x332db8, Func Offset: 0x38
	// Line 2964, Address: 0x332dcc, Func Offset: 0x4c
	// Line 2967, Address: 0x332dd8, Func Offset: 0x58
	// Line 2969, Address: 0x332de4, Func Offset: 0x64
	// Line 2973, Address: 0x332e2c, Func Offset: 0xac
	// Line 2974, Address: 0x332e40, Func Offset: 0xc0
	// Line 2976, Address: 0x332e48, Func Offset: 0xc8
	// Line 2979, Address: 0x332e50, Func Offset: 0xd0
	// Line 2980, Address: 0x332e64, Func Offset: 0xe4
	// Line 2982, Address: 0x332e6c, Func Offset: 0xec
	// Line 2986, Address: 0x332e74, Func Offset: 0xf4
	// Line 2987, Address: 0x332e7c, Func Offset: 0xfc
	// Line 2990, Address: 0x332e84, Func Offset: 0x104
	// Line 2993, Address: 0x332f1c, Func Offset: 0x19c
	// Line 2994, Address: 0x332f24, Func Offset: 0x1a4
	// Line 2996, Address: 0x332f34, Func Offset: 0x1b4
	// Func End, Address: 0x332f48, Func Offset: 0x1c8
}

// xSceneControlCamera__Fiiiii
// Start address: 0x332f50
void xSceneControlCamera(int32 cmd, int32 theCamera, int32 version, int32 start, int32 end)
{
	tag_xCameraControl next;
	int32 nextFrame;
	int32 nextSpeed;
	int32 nextEnd;
	int32 nextStart;
	iCameraResource* cam;
	// Line 2715, Address: 0x332f50, Func Offset: 0
	// Line 2717, Address: 0x332f90, Func Offset: 0x40
	// Line 2718, Address: 0x332f98, Func Offset: 0x48
	// Line 2719, Address: 0x332f9c, Func Offset: 0x4c
	// Line 2725, Address: 0x332fa0, Func Offset: 0x50
	// Line 2738, Address: 0x332fac, Func Offset: 0x5c
	// Line 2747, Address: 0x333000, Func Offset: 0xb0
	// Line 2748, Address: 0x333014, Func Offset: 0xc4
	// Line 2750, Address: 0x3330b4, Func Offset: 0x164
	// Line 2751, Address: 0x3330bc, Func Offset: 0x16c
	// Line 2752, Address: 0x3330c0, Func Offset: 0x170
	// Line 2753, Address: 0x3330c4, Func Offset: 0x174
	// Line 2754, Address: 0x3330c8, Func Offset: 0x178
	// Line 2788, Address: 0x3330cc, Func Offset: 0x17c
	// Line 2790, Address: 0x3330e4, Func Offset: 0x194
	// Line 2793, Address: 0x333118, Func Offset: 0x1c8
	// Line 2794, Address: 0x333124, Func Offset: 0x1d4
	// Line 2795, Address: 0x333130, Func Offset: 0x1e0
	// Line 2796, Address: 0x33313c, Func Offset: 0x1ec
	// Line 2799, Address: 0x333144, Func Offset: 0x1f4
	// Line 2800, Address: 0x333150, Func Offset: 0x200
	// Line 2801, Address: 0x33315c, Func Offset: 0x20c
	// Line 2802, Address: 0x333168, Func Offset: 0x218
	// Line 2805, Address: 0x333170, Func Offset: 0x220
	// Line 2806, Address: 0x33317c, Func Offset: 0x22c
	// Line 2807, Address: 0x333188, Func Offset: 0x238
	// Line 2808, Address: 0x333194, Func Offset: 0x244
	// Line 2811, Address: 0x33319c, Func Offset: 0x24c
	// Line 2812, Address: 0x3331a8, Func Offset: 0x258
	// Line 2813, Address: 0x3331b4, Func Offset: 0x264
	// Line 2815, Address: 0x3331c0, Func Offset: 0x270
	// Line 2818, Address: 0x3331c8, Func Offset: 0x278
	// Line 2821, Address: 0x3331fc, Func Offset: 0x2ac
	// Line 2822, Address: 0x333208, Func Offset: 0x2b8
	// Line 2823, Address: 0x333214, Func Offset: 0x2c4
	// Line 2826, Address: 0x33321c, Func Offset: 0x2cc
	// Line 2827, Address: 0x333228, Func Offset: 0x2d8
	// Line 2828, Address: 0x333234, Func Offset: 0x2e4
	// Line 2831, Address: 0x33323c, Func Offset: 0x2ec
	// Line 2832, Address: 0x333248, Func Offset: 0x2f8
	// Line 2833, Address: 0x333254, Func Offset: 0x304
	// Line 2836, Address: 0x33325c, Func Offset: 0x30c
	// Line 2837, Address: 0x333268, Func Offset: 0x318
	// Line 2841, Address: 0x333278, Func Offset: 0x328
	// Line 2850, Address: 0x33327c, Func Offset: 0x32c
	// Line 2858, Address: 0x3332a8, Func Offset: 0x358
	// Line 2861, Address: 0x3332c0, Func Offset: 0x370
	// Line 2867, Address: 0x3332f4, Func Offset: 0x3a4
	// Line 2871, Address: 0x333300, Func Offset: 0x3b0
	// Line 2874, Address: 0x333308, Func Offset: 0x3b8
	// Line 2877, Address: 0x33333c, Func Offset: 0x3ec
	// Line 2878, Address: 0x333348, Func Offset: 0x3f8
	// Line 2881, Address: 0x333350, Func Offset: 0x400
	// Line 2882, Address: 0x33335c, Func Offset: 0x40c
	// Line 2885, Address: 0x333364, Func Offset: 0x414
	// Line 2886, Address: 0x333370, Func Offset: 0x420
	// Line 2889, Address: 0x333378, Func Offset: 0x428
	// Line 2894, Address: 0x333388, Func Offset: 0x438
	// Line 2896, Address: 0x3333a0, Func Offset: 0x450
	// Line 2899, Address: 0x3333a4, Func Offset: 0x454
	// Line 2900, Address: 0x3333a8, Func Offset: 0x458
	// Line 2901, Address: 0x3333ac, Func Offset: 0x45c
	// Line 2902, Address: 0x3333b0, Func Offset: 0x460
	// Line 2903, Address: 0x3333b4, Func Offset: 0x464
	// Line 2904, Address: 0x3333b8, Func Offset: 0x468
	// Line 2909, Address: 0x3333cc, Func Offset: 0x47c
	// Line 2924, Address: 0x3333d8, Func Offset: 0x488
	// Line 2926, Address: 0x3333e4, Func Offset: 0x494
	// Line 2927, Address: 0x3333e8, Func Offset: 0x498
	// Func End, Address: 0x33341c, Func Offset: 0x4cc
}

// xSceneScriptControlCamera__Fiiiii
// Start address: 0x333420
void xSceneScriptControlCamera(int32 cmd, int32 theCamera, int32 version, int32 start, int32 end)
{
	// Line 2664, Address: 0x333420, Func Offset: 0
	// Line 2670, Address: 0x333430, Func Offset: 0x10
	// Line 2672, Address: 0x33343c, Func Offset: 0x1c
	// Line 2673, Address: 0x333440, Func Offset: 0x20
	// Line 2674, Address: 0x333444, Func Offset: 0x24
	// Line 2675, Address: 0x333448, Func Offset: 0x28
	// Line 2676, Address: 0x33344c, Func Offset: 0x2c
	// Line 2677, Address: 0x333450, Func Offset: 0x30
	// Line 2680, Address: 0x333458, Func Offset: 0x38
	// Line 2681, Address: 0x33345c, Func Offset: 0x3c
	// Line 2682, Address: 0x333460, Func Offset: 0x40
	// Line 2683, Address: 0x333464, Func Offset: 0x44
	// Line 2684, Address: 0x333468, Func Offset: 0x48
	// Line 2686, Address: 0x33346c, Func Offset: 0x4c
	// Line 2687, Address: 0x333474, Func Offset: 0x54
	// Line 2688, Address: 0x3334cc, Func Offset: 0xac
	// Line 2690, Address: 0x3334d0, Func Offset: 0xb0
	// Line 2695, Address: 0x3334ec, Func Offset: 0xcc
	// Func End, Address: 0x333500, Func Offset: 0xe0
}

// xSceneSetCamera__Fii
// Start address: 0x333500
void xSceneSetCamera(int32 c, int32 v)
{
	// Line 2623, Address: 0x333500, Func Offset: 0
	// Line 2628, Address: 0x333510, Func Offset: 0x10
	// Line 2629, Address: 0x333518, Func Offset: 0x18
	// Line 2630, Address: 0x33351c, Func Offset: 0x1c
	// Line 2631, Address: 0x333520, Func Offset: 0x20
	// Line 2632, Address: 0x333528, Func Offset: 0x28
	// Line 2634, Address: 0x333530, Func Offset: 0x30
	// Line 2635, Address: 0x333538, Func Offset: 0x38
	// Line 2636, Address: 0x333590, Func Offset: 0x90
	// Line 2638, Address: 0x333594, Func Offset: 0x94
	// Line 2641, Address: 0x3335b0, Func Offset: 0xb0
	// Func End, Address: 0x3335c4, Func Offset: 0xc4
}

// xSceneVFXVisible__FP6xSceneP8Vector3D
// Start address: 0x3335d0
int32 xSceneVFXVisible(xScene* s, Vector3D* p)
{
	uint32 mask;
	iTriggerResource* t;
	uint32 pmasklo;
	uint32 pmaskhi;
	uint32 pmask;
	int32 i;
	int32 vis;
	// Line 2338, Address: 0x3335d0, Func Offset: 0
	// Line 2348, Address: 0x3335f4, Func Offset: 0x24
	// Line 2349, Address: 0x33360c, Func Offset: 0x3c
	// Line 2350, Address: 0x333614, Func Offset: 0x44
	// Line 2353, Address: 0x333618, Func Offset: 0x48
	// Line 2355, Address: 0x333624, Func Offset: 0x54
	// Line 2356, Address: 0x333630, Func Offset: 0x60
	// Line 2358, Address: 0x333634, Func Offset: 0x64
	// Line 2359, Address: 0x333640, Func Offset: 0x70
	// Line 2360, Address: 0x333650, Func Offset: 0x80
	// Line 2361, Address: 0x333668, Func Offset: 0x98
	// Line 2362, Address: 0x333674, Func Offset: 0xa4
	// Line 2365, Address: 0x333688, Func Offset: 0xb8
	// Line 2367, Address: 0x333694, Func Offset: 0xc4
	// Line 2368, Address: 0x3336a0, Func Offset: 0xd0
	// Line 2370, Address: 0x3336a4, Func Offset: 0xd4
	// Line 2371, Address: 0x3336b0, Func Offset: 0xe0
	// Line 2372, Address: 0x3336c0, Func Offset: 0xf0
	// Line 2373, Address: 0x3336d8, Func Offset: 0x108
	// Line 2374, Address: 0x3336e4, Func Offset: 0x114
	// Line 2377, Address: 0x3336f8, Func Offset: 0x128
	// Line 2378, Address: 0x3336fc, Func Offset: 0x12c
	// Func End, Address: 0x333720, Func Offset: 0x150
}

// xSceneRTObjVisible__FP6xSceneP8Vector3D
// Start address: 0x333720
int32 xSceneRTObjVisible(xScene* s, Vector3D* p)
{
	uint32 mask;
	iTriggerResource* t;
	uint32 pmasklo;
	uint32 pmaskhi;
	uint32 pmask;
	int32 i;
	int32 vis;
	// Line 2285, Address: 0x333720, Func Offset: 0
	// Line 2295, Address: 0x333744, Func Offset: 0x24
	// Line 2296, Address: 0x33375c, Func Offset: 0x3c
	// Line 2297, Address: 0x333764, Func Offset: 0x44
	// Line 2300, Address: 0x333768, Func Offset: 0x48
	// Line 2302, Address: 0x333774, Func Offset: 0x54
	// Line 2303, Address: 0x333780, Func Offset: 0x60
	// Line 2305, Address: 0x333784, Func Offset: 0x64
	// Line 2306, Address: 0x333790, Func Offset: 0x70
	// Line 2307, Address: 0x3337a0, Func Offset: 0x80
	// Line 2308, Address: 0x3337b8, Func Offset: 0x98
	// Line 2309, Address: 0x3337c4, Func Offset: 0xa4
	// Line 2312, Address: 0x3337d8, Func Offset: 0xb8
	// Line 2314, Address: 0x3337e4, Func Offset: 0xc4
	// Line 2315, Address: 0x3337f0, Func Offset: 0xd0
	// Line 2317, Address: 0x3337f4, Func Offset: 0xd4
	// Line 2318, Address: 0x333800, Func Offset: 0xe0
	// Line 2319, Address: 0x333810, Func Offset: 0xf0
	// Line 2320, Address: 0x333828, Func Offset: 0x108
	// Line 2321, Address: 0x333834, Func Offset: 0x114
	// Line 2323, Address: 0x333848, Func Offset: 0x128
	// Line 2324, Address: 0x33384c, Func Offset: 0x12c
	// Func End, Address: 0x333870, Func Offset: 0x150
}

// xSceneNPCVisible__FP6xSceneP8Vector3D
// Start address: 0x333870
int32 xSceneNPCVisible(xScene* s, Vector3D* p)
{
	uint32 mask;
	iTriggerResource* t;
	uint32 pmasklo;
	uint32 pmaskhi;
	uint32 pmask;
	int32 i;
	int32 vis;
	// Line 2232, Address: 0x333870, Func Offset: 0
	// Line 2242, Address: 0x333894, Func Offset: 0x24
	// Line 2243, Address: 0x3338ac, Func Offset: 0x3c
	// Line 2244, Address: 0x3338b4, Func Offset: 0x44
	// Line 2247, Address: 0x3338b8, Func Offset: 0x48
	// Line 2249, Address: 0x3338c4, Func Offset: 0x54
	// Line 2250, Address: 0x3338d0, Func Offset: 0x60
	// Line 2252, Address: 0x3338d4, Func Offset: 0x64
	// Line 2253, Address: 0x3338e0, Func Offset: 0x70
	// Line 2254, Address: 0x3338f0, Func Offset: 0x80
	// Line 2255, Address: 0x333908, Func Offset: 0x98
	// Line 2256, Address: 0x333914, Func Offset: 0xa4
	// Line 2259, Address: 0x333928, Func Offset: 0xb8
	// Line 2261, Address: 0x333934, Func Offset: 0xc4
	// Line 2262, Address: 0x333940, Func Offset: 0xd0
	// Line 2264, Address: 0x333944, Func Offset: 0xd4
	// Line 2265, Address: 0x333950, Func Offset: 0xe0
	// Line 2266, Address: 0x333960, Func Offset: 0xf0
	// Line 2267, Address: 0x333978, Func Offset: 0x108
	// Line 2268, Address: 0x333984, Func Offset: 0x114
	// Line 2270, Address: 0x333998, Func Offset: 0x128
	// Line 2271, Address: 0x33399c, Func Offset: 0x12c
	// Func End, Address: 0x3339c0, Func Offset: 0x150
}

// xSceneLightVisible__FP6xSceneP8Vector3D
// Start address: 0x3339c0
int32 xSceneLightVisible(xScene* s, Vector3D* p)
{
	uint32 mask;
	iTriggerResource* t;
	uint32 pmasklo;
	uint32 pmaskhi;
	uint32 pmask;
	int32 i;
	int32 vis;
	// Line 2178, Address: 0x3339c0, Func Offset: 0
	// Line 2188, Address: 0x3339e4, Func Offset: 0x24
	// Line 2189, Address: 0x3339fc, Func Offset: 0x3c
	// Line 2190, Address: 0x333a04, Func Offset: 0x44
	// Line 2193, Address: 0x333a08, Func Offset: 0x48
	// Line 2195, Address: 0x333a14, Func Offset: 0x54
	// Line 2196, Address: 0x333a20, Func Offset: 0x60
	// Line 2198, Address: 0x333a24, Func Offset: 0x64
	// Line 2199, Address: 0x333a30, Func Offset: 0x70
	// Line 2200, Address: 0x333a40, Func Offset: 0x80
	// Line 2201, Address: 0x333a58, Func Offset: 0x98
	// Line 2202, Address: 0x333a64, Func Offset: 0xa4
	// Line 2205, Address: 0x333a78, Func Offset: 0xb8
	// Line 2207, Address: 0x333a84, Func Offset: 0xc4
	// Line 2208, Address: 0x333a90, Func Offset: 0xd0
	// Line 2210, Address: 0x333a94, Func Offset: 0xd4
	// Line 2211, Address: 0x333aa0, Func Offset: 0xe0
	// Line 2212, Address: 0x333ab0, Func Offset: 0xf0
	// Line 2213, Address: 0x333ac8, Func Offset: 0x108
	// Line 2214, Address: 0x333ad4, Func Offset: 0x114
	// Line 2216, Address: 0x333ae8, Func Offset: 0x128
	// Line 2217, Address: 0x333aec, Func Offset: 0x12c
	// Func End, Address: 0x333b10, Func Offset: 0x150
}

// xScenePlayerVisible__FP6xSceneP8Vector3D
// Start address: 0x333b10
int32 xScenePlayerVisible(xScene* s, Vector3D* p)
{
	uint32 mask;
	iTriggerResource* t;
	uint32 pmasklo;
	uint32 pmaskhi;
	uint32 pmask;
	int32 i;
	int32 vis;
	// Line 2123, Address: 0x333b10, Func Offset: 0
	// Line 2134, Address: 0x333b34, Func Offset: 0x24
	// Line 2135, Address: 0x333b4c, Func Offset: 0x3c
	// Line 2136, Address: 0x333b54, Func Offset: 0x44
	// Line 2139, Address: 0x333b58, Func Offset: 0x48
	// Line 2141, Address: 0x333b64, Func Offset: 0x54
	// Line 2142, Address: 0x333b70, Func Offset: 0x60
	// Line 2144, Address: 0x333b74, Func Offset: 0x64
	// Line 2145, Address: 0x333b80, Func Offset: 0x70
	// Line 2146, Address: 0x333b90, Func Offset: 0x80
	// Line 2147, Address: 0x333ba8, Func Offset: 0x98
	// Line 2148, Address: 0x333bb4, Func Offset: 0xa4
	// Line 2151, Address: 0x333bc8, Func Offset: 0xb8
	// Line 2153, Address: 0x333bd4, Func Offset: 0xc4
	// Line 2154, Address: 0x333be0, Func Offset: 0xd0
	// Line 2156, Address: 0x333be4, Func Offset: 0xd4
	// Line 2157, Address: 0x333bf0, Func Offset: 0xe0
	// Line 2158, Address: 0x333c00, Func Offset: 0xf0
	// Line 2159, Address: 0x333c18, Func Offset: 0x108
	// Line 2160, Address: 0x333c24, Func Offset: 0x114
	// Line 2163, Address: 0x333c38, Func Offset: 0x128
	// Line 2164, Address: 0x333c3c, Func Offset: 0x12c
	// Func End, Address: 0x333c60, Func Offset: 0x150
}

// xSceneEvaluateTriggers__FP6xScene
// Start address: 0x333c60
void xSceneEvaluateTriggers(xScene* s)
{
	uint32 tflags;
	int32 camerachange;
	xTrigger* t;
	uint32 i;
	// Line 2054, Address: 0x333c60, Func Offset: 0
	// Line 2059, Address: 0x333c78, Func Offset: 0x18
	// Line 2062, Address: 0x333d18, Func Offset: 0xb8
	// Line 2067, Address: 0x333d2c, Func Offset: 0xcc
	// Line 2071, Address: 0x333d38, Func Offset: 0xd8
	// Line 2073, Address: 0x333d44, Func Offset: 0xe4
	// Line 2077, Address: 0x333d58, Func Offset: 0xf8
	// Line 2079, Address: 0x333d64, Func Offset: 0x104
	// Line 2085, Address: 0x333d90, Func Offset: 0x130
	// Line 2087, Address: 0x333d9c, Func Offset: 0x13c
	// Line 2095, Address: 0x333dc8, Func Offset: 0x168
	// Line 2098, Address: 0x333dd4, Func Offset: 0x174
	// Line 2099, Address: 0x333dec, Func Offset: 0x18c
	// Line 2102, Address: 0x333dfc, Func Offset: 0x19c
	// Line 2103, Address: 0x333e0c, Func Offset: 0x1ac
	// Line 2104, Address: 0x333e14, Func Offset: 0x1b4
	// Line 2105, Address: 0x333e18, Func Offset: 0x1b8
	// Line 2107, Address: 0x333e30, Func Offset: 0x1d0
	// Func End, Address: 0x333e4c, Func Offset: 0x1ec
}

// xSceneCheckTriggerHitPlayer__FP6xScene
// Start address: 0x333e50
void xSceneCheckTriggerHitPlayer(xScene* s)
{
	iActorRuntime* r;
	uint32* maskp;
	uint32 mask;
	uint32 pmasklo;
	uint32 pmaskhi;
	uint32 pmask;
	Vector3D p;
	uint32 i;
	// Line 1993, Address: 0x333e50, Func Offset: 0
	// Line 2002, Address: 0x333e70, Func Offset: 0x20
	// Line 2003, Address: 0x333f10, Func Offset: 0xc0
	// Line 2006, Address: 0x333fc8, Func Offset: 0x178
	// Line 2007, Address: 0x333fe0, Func Offset: 0x190
	// Line 2011, Address: 0x333fe8, Func Offset: 0x198
	// Line 2014, Address: 0x334000, Func Offset: 0x1b0
	// Line 2015, Address: 0x334018, Func Offset: 0x1c8
	// Line 2016, Address: 0x334020, Func Offset: 0x1d0
	// Line 2019, Address: 0x334024, Func Offset: 0x1d4
	// Line 2022, Address: 0x334028, Func Offset: 0x1d8
	// Line 2024, Address: 0x334034, Func Offset: 0x1e4
	// Line 2026, Address: 0x334038, Func Offset: 0x1e8
	// Line 2028, Address: 0x334044, Func Offset: 0x1f4
	// Line 2031, Address: 0x334054, Func Offset: 0x204
	// Line 2033, Address: 0x334058, Func Offset: 0x208
	// Line 2036, Address: 0x334068, Func Offset: 0x218
	// Line 2038, Address: 0x334080, Func Offset: 0x230
	// Func End, Address: 0x3340a4, Func Offset: 0x254
}

// xSceneGetTriggerMaterials__FP6xSceneP8Vector3DPUcUi
// Start address: 0x3340b0
int32 xSceneGetTriggerMaterials(xScene* s, Vector3D* p, uint8* mat, uint32 maxMat)
{
	uint8 val;
	uint32 flags;
	uint32 mask;
	uint32 count;
	uint32 pmasklo;
	uint32 pmaskhi;
	uint32 pmask;
	xTrigger* t;
	uint32 i;
	// Line 1898, Address: 0x3340b0, Func Offset: 0
	// Line 1904, Address: 0x3340ec, Func Offset: 0x3c
	// Line 1907, Address: 0x3340f0, Func Offset: 0x40
	// Line 1908, Address: 0x334190, Func Offset: 0xe0
	// Line 1910, Address: 0x334234, Func Offset: 0x184
	// Line 1913, Address: 0x334240, Func Offset: 0x190
	// Line 1914, Address: 0x334258, Func Offset: 0x1a8
	// Line 1915, Address: 0x334260, Func Offset: 0x1b0
	// Line 1918, Address: 0x334264, Func Offset: 0x1b4
	// Line 1920, Address: 0x334270, Func Offset: 0x1c0
	// Line 1921, Address: 0x334280, Func Offset: 0x1d0
	// Line 1923, Address: 0x334288, Func Offset: 0x1d8
	// Line 1925, Address: 0x334294, Func Offset: 0x1e4
	// Line 1927, Address: 0x3342a4, Func Offset: 0x1f4
	// Line 1931, Address: 0x3342bc, Func Offset: 0x20c
	// Line 1933, Address: 0x3342cc, Func Offset: 0x21c
	// Line 1936, Address: 0x3342d4, Func Offset: 0x224
	// Line 1937, Address: 0x3342e4, Func Offset: 0x234
	// Line 1939, Address: 0x3342ec, Func Offset: 0x23c
	// Line 1940, Address: 0x3342f8, Func Offset: 0x248
	// Line 1942, Address: 0x334304, Func Offset: 0x254
	// Line 1944, Address: 0x334308, Func Offset: 0x258
	// Line 1945, Address: 0x334318, Func Offset: 0x268
	// Line 1947, Address: 0x334320, Func Offset: 0x270
	// Line 1948, Address: 0x33432c, Func Offset: 0x27c
	// Line 1952, Address: 0x334338, Func Offset: 0x288
	// Line 1953, Address: 0x334344, Func Offset: 0x294
	// Line 1955, Address: 0x33434c, Func Offset: 0x29c
	// Line 1956, Address: 0x334358, Func Offset: 0x2a8
	// Line 1958, Address: 0x334364, Func Offset: 0x2b4
	// Line 1960, Address: 0x334368, Func Offset: 0x2b8
	// Line 1961, Address: 0x33436c, Func Offset: 0x2bc
	// Line 1963, Address: 0x334374, Func Offset: 0x2c4
	// Line 1964, Address: 0x334380, Func Offset: 0x2d0
	// Line 1970, Address: 0x33438c, Func Offset: 0x2dc
	// Line 1971, Address: 0x334390, Func Offset: 0x2e0
	// Line 1975, Address: 0x3343a8, Func Offset: 0x2f8
	// Line 1977, Address: 0x3343b4, Func Offset: 0x304
	// Line 1978, Address: 0x3343bc, Func Offset: 0x30c
	// Line 1979, Address: 0x3343d0, Func Offset: 0x320
	// Line 1980, Address: 0x3343d4, Func Offset: 0x324
	// Func End, Address: 0x334408, Func Offset: 0x358
}

// xSceneDebugLights__FP6xScene
// Start address: 0x334410
void xSceneDebugLights(xScene* s)
{
	Vector3D b;
	Vector3D a;
	uint32 i;
	// Line 1830, Address: 0x334410, Func Offset: 0
	// Line 1832, Address: 0x334424, Func Offset: 0x14
	// Line 1834, Address: 0x334430, Func Offset: 0x20
	// Line 1839, Address: 0x33443c, Func Offset: 0x2c
	// Line 1840, Address: 0x334454, Func Offset: 0x44
	// Line 1841, Address: 0x33446c, Func Offset: 0x5c
	// Line 1843, Address: 0x334484, Func Offset: 0x74
	// Line 1847, Address: 0x33449c, Func Offset: 0x8c
	// Line 1848, Address: 0x3344cc, Func Offset: 0xbc
	// Line 1849, Address: 0x3344fc, Func Offset: 0xec
	// Line 1850, Address: 0x33452c, Func Offset: 0x11c
	// Line 1851, Address: 0x33453c, Func Offset: 0x12c
	// Line 1852, Address: 0x334540, Func Offset: 0x130
	// Line 1853, Address: 0x334544, Func Offset: 0x134
	// Line 1854, Address: 0x334554, Func Offset: 0x144
	// Line 1856, Address: 0x334570, Func Offset: 0x160
	// Func End, Address: 0x334588, Func Offset: 0x178
}

// xSceneDebugDrawTriggers__FP6xScene
// Start address: 0x334590
void xSceneDebugDrawTriggers(xScene* s)
{
	int32 b;
	int32 g;
	int32 r;
	Vector3D* v;
	xTrigger* t;
	uint32 i;
	// Line 1748, Address: 0x334590, Func Offset: 0
	// Line 1753, Address: 0x3345a4, Func Offset: 0x14
	// Line 1756, Address: 0x3345b0, Func Offset: 0x20
	// Line 1757, Address: 0x3345bc, Func Offset: 0x2c
	// Line 1759, Address: 0x3345c4, Func Offset: 0x34
	// Line 1761, Address: 0x3345cc, Func Offset: 0x3c
	// Line 1766, Address: 0x3345d8, Func Offset: 0x48
	// Line 1767, Address: 0x3345dc, Func Offset: 0x4c
	// Line 1768, Address: 0x3345e0, Func Offset: 0x50
	// Line 1769, Address: 0x3345e4, Func Offset: 0x54
	// Line 1771, Address: 0x334614, Func Offset: 0x84
	// Line 1772, Address: 0x334618, Func Offset: 0x88
	// Line 1773, Address: 0x33461c, Func Offset: 0x8c
	// Line 1774, Address: 0x334620, Func Offset: 0x90
	// Line 1775, Address: 0x334624, Func Offset: 0x94
	// Line 1777, Address: 0x33462c, Func Offset: 0x9c
	// Line 1778, Address: 0x334630, Func Offset: 0xa0
	// Line 1779, Address: 0x334634, Func Offset: 0xa4
	// Line 1780, Address: 0x334638, Func Offset: 0xa8
	// Line 1782, Address: 0x334640, Func Offset: 0xb0
	// Line 1783, Address: 0x334644, Func Offset: 0xb4
	// Line 1784, Address: 0x334648, Func Offset: 0xb8
	// Line 1785, Address: 0x33464c, Func Offset: 0xbc
	// Line 1787, Address: 0x334654, Func Offset: 0xc4
	// Line 1788, Address: 0x334658, Func Offset: 0xc8
	// Line 1789, Address: 0x33465c, Func Offset: 0xcc
	// Line 1790, Address: 0x334660, Func Offset: 0xd0
	// Line 1792, Address: 0x334668, Func Offset: 0xd8
	// Line 1793, Address: 0x33466c, Func Offset: 0xdc
	// Line 1794, Address: 0x334670, Func Offset: 0xe0
	// Line 1795, Address: 0x334674, Func Offset: 0xe4
	// Line 1797, Address: 0x33467c, Func Offset: 0xec
	// Line 1798, Address: 0x334680, Func Offset: 0xf0
	// Line 1799, Address: 0x334684, Func Offset: 0xf4
	// Line 1803, Address: 0x334688, Func Offset: 0xf8
	// Line 1806, Address: 0x3346a0, Func Offset: 0x110
	// Line 1807, Address: 0x3346b0, Func Offset: 0x120
	// Line 1808, Address: 0x3346b8, Func Offset: 0x128
	// Line 1811, Address: 0x3346c8, Func Offset: 0x138
	// Line 1814, Address: 0x3346d8, Func Offset: 0x148
	// Line 1815, Address: 0x3346f0, Func Offset: 0x160
	// Func End, Address: 0x334708, Func Offset: 0x178
}

// xSceneDebugDrawEntryPoints__FP11xEntryPoint
// Start address: 0x334710
void xSceneDebugDrawEntryPoints(xEntryPoint* e)
{
	int32 b;
	int32 g;
	int32 r;
	// Line 1706, Address: 0x334710, Func Offset: 0
	// Line 1707, Address: 0x334718, Func Offset: 0x8
	// Line 1709, Address: 0x334724, Func Offset: 0x14
	// Line 1711, Address: 0x334730, Func Offset: 0x20
	// Line 1714, Address: 0x334754, Func Offset: 0x44
	// Line 1715, Address: 0x334758, Func Offset: 0x48
	// Line 1716, Address: 0x33475c, Func Offset: 0x4c
	// Line 1717, Address: 0x334760, Func Offset: 0x50
	// Line 1719, Address: 0x334768, Func Offset: 0x58
	// Line 1720, Address: 0x33476c, Func Offset: 0x5c
	// Line 1721, Address: 0x334770, Func Offset: 0x60
	// Line 1725, Address: 0x334774, Func Offset: 0x64
	// Line 1727, Address: 0x334784, Func Offset: 0x74
	// Line 1728, Address: 0x334788, Func Offset: 0x78
	// Line 1729, Address: 0x33478c, Func Offset: 0x7c
	// Line 1732, Address: 0x334790, Func Offset: 0x80
	// Line 1734, Address: 0x3347ac, Func Offset: 0x9c
	// Func End, Address: 0x3347bc, Func Offset: 0xac
}

// xSceneCheckEntryHitPlayer__FP6xScene
// Start address: 0x3347c0
void xSceneCheckEntryHitPlayer(xScene* s)
{
	xEntryPoint* e;
	iActorRuntime* r;
	uint32 pmask;
	uint32 maskHi;
	uint32 maskLo;
	uint32 mask;
	Vector3D* ppos;
	uint32 i;
	// Line 1635, Address: 0x3347c0, Func Offset: 0
	// Line 1641, Address: 0x3347e8, Func Offset: 0x28
	// Line 1642, Address: 0x334888, Func Offset: 0xc8
	// Line 1644, Address: 0x33492c, Func Offset: 0x16c
	// Line 1645, Address: 0x334958, Func Offset: 0x198
	// Line 1648, Address: 0x334960, Func Offset: 0x1a0
	// Line 1652, Address: 0x334990, Func Offset: 0x1d0
	// Line 1653, Address: 0x3349ac, Func Offset: 0x1ec
	// Line 1654, Address: 0x3349b4, Func Offset: 0x1f4
	// Line 1657, Address: 0x3349b8, Func Offset: 0x1f8
	// Line 1659, Address: 0x3349c4, Func Offset: 0x204
	// Line 1661, Address: 0x3349d0, Func Offset: 0x210
	// Line 1663, Address: 0x3349d8, Func Offset: 0x218
	// Line 1665, Address: 0x3349e4, Func Offset: 0x224
	// Line 1670, Address: 0x3349f4, Func Offset: 0x234
	// Line 1672, Address: 0x334a08, Func Offset: 0x248
	// Line 1674, Address: 0x334a24, Func Offset: 0x264
	// Line 1677, Address: 0x334a48, Func Offset: 0x288
	// Line 1678, Address: 0x334a74, Func Offset: 0x2b4
	// Line 1680, Address: 0x334a7c, Func Offset: 0x2bc
	// Line 1690, Address: 0x334b38, Func Offset: 0x378
	// Line 1692, Address: 0x334b44, Func Offset: 0x384
	// Line 1693, Address: 0x334b58, Func Offset: 0x398
	// Func End, Address: 0x334b84, Func Offset: 0x3c4
}

// xSceneActivate__Fv
// Start address: 0x334b90
void xSceneActivate()
{
	uint8* resetPointer;
	int32 i;
	int32 t;
	XStream stream;
	// Line 1336, Address: 0x334b90, Func Offset: 0
	// Line 1341, Address: 0x334ba4, Func Offset: 0x14
	// Line 1346, Address: 0x334ba8, Func Offset: 0x18
	// Line 1352, Address: 0x334be0, Func Offset: 0x50
	// Line 1368, Address: 0x334be4, Func Offset: 0x54
	// Line 1371, Address: 0x334bf0, Func Offset: 0x60
	// Line 1374, Address: 0x334bfc, Func Offset: 0x6c
	// Line 1376, Address: 0x334c08, Func Offset: 0x78
	// Line 1378, Address: 0x334c34, Func Offset: 0xa4
	// Line 1379, Address: 0x334c5c, Func Offset: 0xcc
	// Line 1380, Address: 0x334c60, Func Offset: 0xd0
	// Line 1381, Address: 0x334c80, Func Offset: 0xf0
	// Line 1389, Address: 0x334c94, Func Offset: 0x104
	// Line 1390, Address: 0x334c9c, Func Offset: 0x10c
	// Line 1391, Address: 0x334ca4, Func Offset: 0x114
	// Line 1392, Address: 0x334cb4, Func Offset: 0x124
	// Line 1393, Address: 0x334cbc, Func Offset: 0x12c
	// Line 1394, Address: 0x334cc4, Func Offset: 0x134
	// Line 1395, Address: 0x334ccc, Func Offset: 0x13c
	// Line 1396, Address: 0x334cd4, Func Offset: 0x144
	// Line 1397, Address: 0x334cdc, Func Offset: 0x14c
	// Line 1399, Address: 0x334ce4, Func Offset: 0x154
	// Line 1400, Address: 0x334cec, Func Offset: 0x15c
	// Line 1401, Address: 0x334cf4, Func Offset: 0x164
	// Line 1410, Address: 0x334cfc, Func Offset: 0x16c
	// Line 1411, Address: 0x334d00, Func Offset: 0x170
	// Line 1412, Address: 0x334d04, Func Offset: 0x174
	// Line 1414, Address: 0x334d08, Func Offset: 0x178
	// Line 1415, Address: 0x334d0c, Func Offset: 0x17c
	// Line 1416, Address: 0x334d10, Func Offset: 0x180
	// Line 1448, Address: 0x334d14, Func Offset: 0x184
	// Line 1454, Address: 0x334d20, Func Offset: 0x190
	// Line 1457, Address: 0x334d2c, Func Offset: 0x19c
	// Line 1460, Address: 0x334d38, Func Offset: 0x1a8
	// Line 1462, Address: 0x334d44, Func Offset: 0x1b4
	// Line 1465, Address: 0x334d74, Func Offset: 0x1e4
	// Line 1467, Address: 0x334d9c, Func Offset: 0x20c
	// Line 1468, Address: 0x334db4, Func Offset: 0x224
	// Line 1470, Address: 0x334dd8, Func Offset: 0x248
	// Line 1471, Address: 0x334df8, Func Offset: 0x268
	// Line 1473, Address: 0x334e0c, Func Offset: 0x27c
	// Line 1475, Address: 0x334e18, Func Offset: 0x288
	// Line 1477, Address: 0x334e3c, Func Offset: 0x2ac
	// Line 1478, Address: 0x334e50, Func Offset: 0x2c0
	// Line 1480, Address: 0x334e68, Func Offset: 0x2d8
	// Line 1490, Address: 0x334e7c, Func Offset: 0x2ec
	// Line 1492, Address: 0x334e84, Func Offset: 0x2f4
	// Line 1494, Address: 0x334e90, Func Offset: 0x300
	// Line 1497, Address: 0x334e9c, Func Offset: 0x30c
	// Line 1501, Address: 0x334ea4, Func Offset: 0x314
	// Line 1508, Address: 0x334eb0, Func Offset: 0x320
	// Line 1510, Address: 0x334ebc, Func Offset: 0x32c
	// Line 1512, Address: 0x334ec8, Func Offset: 0x338
	// Line 1518, Address: 0x334ed4, Func Offset: 0x344
	// Line 1527, Address: 0x334edc, Func Offset: 0x34c
	// Line 1529, Address: 0x334eec, Func Offset: 0x35c
	// Line 1538, Address: 0x334f00, Func Offset: 0x370
	// Line 1548, Address: 0x334f34, Func Offset: 0x3a4
	// Line 1551, Address: 0x334f40, Func Offset: 0x3b0
	// Line 1554, Address: 0x334f4c, Func Offset: 0x3bc
	// Line 1556, Address: 0x334f58, Func Offset: 0x3c8
	// Line 1558, Address: 0x334f84, Func Offset: 0x3f4
	// Line 1559, Address: 0x334fac, Func Offset: 0x41c
	// Line 1560, Address: 0x334fb0, Func Offset: 0x420
	// Line 1561, Address: 0x334fd0, Func Offset: 0x440
	// Line 1565, Address: 0x334fe4, Func Offset: 0x454
	// Line 1607, Address: 0x334fec, Func Offset: 0x45c
	// Line 1609, Address: 0x334ff4, Func Offset: 0x464
	// Line 1618, Address: 0x334ffc, Func Offset: 0x46c
	// Line 1619, Address: 0x335004, Func Offset: 0x474
	// Line 1620, Address: 0x335010, Func Offset: 0x480
	// Line 1621, Address: 0x3350b4, Func Offset: 0x524
	// Func End, Address: 0x3350d0, Func Offset: 0x540
}

// xSceneSwitch__FP6xSceneUiUiUiP8Vector3D
// Start address: 0x3350d0
void xSceneSwitch(xScene* s, uint32 sceneID, uint32 cameraID, uint32 markerID, Vector3D* ang)
{
	// Line 1272, Address: 0x3350d0, Func Offset: 0
	// Line 1273, Address: 0x3350f8, Func Offset: 0x28
	// Line 1274, Address: 0x335198, Func Offset: 0xc8
	// Line 1276, Address: 0x335238, Func Offset: 0x168
	// Line 1277, Address: 0x335248, Func Offset: 0x178
	// Line 1279, Address: 0x335250, Func Offset: 0x180
	// Line 1281, Address: 0x335260, Func Offset: 0x190
	// Line 1283, Address: 0x335300, Func Offset: 0x230
	// Line 1284, Address: 0x3353a4, Func Offset: 0x2d4
	// Line 1285, Address: 0x33545c, Func Offset: 0x38c
	// Line 1290, Address: 0x33548c, Func Offset: 0x3bc
	// Line 1291, Address: 0x335498, Func Offset: 0x3c8
	// Line 1293, Address: 0x3354ac, Func Offset: 0x3dc
	// Line 1297, Address: 0x3354b0, Func Offset: 0x3e0
	// Line 1302, Address: 0x3354b8, Func Offset: 0x3e8
	// Line 1303, Address: 0x3354c4, Func Offset: 0x3f4
	// Line 1314, Address: 0x3354cc, Func Offset: 0x3fc
	// Line 1315, Address: 0x3354d4, Func Offset: 0x404
	// Line 1316, Address: 0x3354d8, Func Offset: 0x408
	// Line 1317, Address: 0x3354dc, Func Offset: 0x40c
	// Line 1318, Address: 0x3354e0, Func Offset: 0x410
	// Line 1321, Address: 0x335504, Func Offset: 0x434
	// Line 1322, Address: 0x33550c, Func Offset: 0x43c
	// Func End, Address: 0x33552c, Func Offset: 0x45c
}

// xSceneIdle__FP6xScene
// Start address: 0x335530
void xSceneIdle(xScene* s)
{
	xCondition* c;
	uint32 i;
	xCondition* cend;
	// Line 1143, Address: 0x335530, Func Offset: 0
	// Line 1152, Address: 0x335544, Func Offset: 0x14
	// Line 1156, Address: 0x3355e4, Func Offset: 0xb4
	// Line 1157, Address: 0x3355f0, Func Offset: 0xc0
	// Line 1165, Address: 0x3355fc, Func Offset: 0xcc
	// Line 1167, Address: 0x335608, Func Offset: 0xd8
	// Line 1168, Address: 0x335624, Func Offset: 0xf4
	// Line 1169, Address: 0x335638, Func Offset: 0x108
	// Line 1176, Address: 0x335650, Func Offset: 0x120
	// Line 1177, Address: 0x335654, Func Offset: 0x124
	// Line 1178, Address: 0x335660, Func Offset: 0x130
	// Line 1182, Address: 0x33569c, Func Offset: 0x16c
	// Line 1183, Address: 0x3356a8, Func Offset: 0x178
	// Line 1184, Address: 0x3356b4, Func Offset: 0x184
	// Line 1185, Address: 0x3356c4, Func Offset: 0x194
	// Line 1186, Address: 0x3356d4, Func Offset: 0x1a4
	// Line 1188, Address: 0x3356d8, Func Offset: 0x1a8
	// Line 1190, Address: 0x3356e4, Func Offset: 0x1b4
	// Line 1201, Address: 0x3356e8, Func Offset: 0x1b8
	// Line 1202, Address: 0x3356f4, Func Offset: 0x1c4
	// Line 1203, Address: 0x335700, Func Offset: 0x1d0
	// Line 1207, Address: 0x33570c, Func Offset: 0x1dc
	// Line 1210, Address: 0x335718, Func Offset: 0x1e8
	// Line 1217, Address: 0x33571c, Func Offset: 0x1ec
	// Line 1229, Address: 0x335724, Func Offset: 0x1f4
	// Func End, Address: 0x33573c, Func Offset: 0x20c
}

// xSceneDebugDrawGeom__FiP8Vector3Diii
// Start address: 0x335740
void xSceneDebugDrawGeom(int32 type, Vector3D* v, int32 red, int32 green, int32 blue)
{
	Vector3D a;
	Vector3D c;
	Vector3D b;
	Vector3D a;
	Vector3D d;
	Vector3D c;
	Vector3D b;
	Vector3D a;
	Vector3D d;
	Vector3D c;
	Vector3D b;
	Vector3D a;
	// Line 1038, Address: 0x335740, Func Offset: 0
	// Line 1039, Address: 0x335770, Func Offset: 0x30
	// Line 1040, Address: 0x335784, Func Offset: 0x44
	// Line 1047, Address: 0x33578c, Func Offset: 0x4c
	// Line 1048, Address: 0x335794, Func Offset: 0x54
	// Line 1049, Address: 0x33579c, Func Offset: 0x5c
	// Line 1051, Address: 0x3357bc, Func Offset: 0x7c
	// Line 1052, Address: 0x3357c4, Func Offset: 0x84
	// Line 1053, Address: 0x3357cc, Func Offset: 0x8c
	// Line 1055, Address: 0x3357ec, Func Offset: 0xac
	// Line 1056, Address: 0x3357f4, Func Offset: 0xb4
	// Line 1057, Address: 0x3357fc, Func Offset: 0xbc
	// Line 1059, Address: 0x33581c, Func Offset: 0xdc
	// Line 1060, Address: 0x335824, Func Offset: 0xe4
	// Line 1061, Address: 0x33582c, Func Offset: 0xec
	// Line 1063, Address: 0x33584c, Func Offset: 0x10c
	// Line 1064, Address: 0x33585c, Func Offset: 0x11c
	// Line 1065, Address: 0x33586c, Func Offset: 0x12c
	// Line 1066, Address: 0x33587c, Func Offset: 0x13c
	// Line 1067, Address: 0x33588c, Func Offset: 0x14c
	// Line 1068, Address: 0x335894, Func Offset: 0x154
	// Line 1076, Address: 0x3358a0, Func Offset: 0x160
	// Line 1077, Address: 0x3358a8, Func Offset: 0x168
	// Line 1078, Address: 0x3358b0, Func Offset: 0x170
	// Line 1080, Address: 0x3358d0, Func Offset: 0x190
	// Line 1081, Address: 0x3358d8, Func Offset: 0x198
	// Line 1082, Address: 0x3358e0, Func Offset: 0x1a0
	// Line 1084, Address: 0x335900, Func Offset: 0x1c0
	// Line 1085, Address: 0x335908, Func Offset: 0x1c8
	// Line 1086, Address: 0x335910, Func Offset: 0x1d0
	// Line 1088, Address: 0x335930, Func Offset: 0x1f0
	// Line 1089, Address: 0x335938, Func Offset: 0x1f8
	// Line 1090, Address: 0x335940, Func Offset: 0x200
	// Line 1092, Address: 0x335960, Func Offset: 0x220
	// Line 1093, Address: 0x335970, Func Offset: 0x230
	// Line 1094, Address: 0x335980, Func Offset: 0x240
	// Line 1095, Address: 0x335990, Func Offset: 0x250
	// Line 1096, Address: 0x3359a0, Func Offset: 0x260
	// Line 1097, Address: 0x3359a8, Func Offset: 0x268
	// Line 1103, Address: 0x3359b4, Func Offset: 0x274
	// Line 1104, Address: 0x3359bc, Func Offset: 0x27c
	// Line 1105, Address: 0x3359c4, Func Offset: 0x284
	// Line 1107, Address: 0x3359e4, Func Offset: 0x2a4
	// Line 1108, Address: 0x3359ec, Func Offset: 0x2ac
	// Line 1109, Address: 0x3359f4, Func Offset: 0x2b4
	// Line 1111, Address: 0x335a14, Func Offset: 0x2d4
	// Line 1112, Address: 0x335a1c, Func Offset: 0x2dc
	// Line 1113, Address: 0x335a24, Func Offset: 0x2e4
	// Line 1115, Address: 0x335a44, Func Offset: 0x304
	// Line 1116, Address: 0x335a54, Func Offset: 0x314
	// Line 1117, Address: 0x335a64, Func Offset: 0x324
	// Line 1118, Address: 0x335a74, Func Offset: 0x334
	// Line 1119, Address: 0x335a7c, Func Offset: 0x33c
	// Line 1123, Address: 0x335a88, Func Offset: 0x348
	// Line 1124, Address: 0x335a90, Func Offset: 0x350
	// Line 1125, Address: 0x335a94, Func Offset: 0x354
	// Line 1127, Address: 0x335a9c, Func Offset: 0x35c
	// Line 1129, Address: 0x335ab8, Func Offset: 0x378
	// Func End, Address: 0x335adc, Func Offset: 0x39c
}

// xSceneInit__FP6xSceneUi
// Start address: 0x335ae0
void xSceneInit(xScene* s, uint32 sceneId)
{
	int32 cmd;
	int32 onflags;
	xTrigger* t;
	xEntryPoint* idx;
	xTrigger* trigger;
	Vector3D d;
	xRule* r;
	xCondition* c;
	uint32 idxMaterial;
	uint32 idxEffect;
	uint32 idxGeneric;
	uint32 idxWalk;
	uint32 idxNoWalk;
	uint32 k;
	uint32 j;
	uint32 i;
	// Line 582, Address: 0x335ae0, Func Offset: 0
	// Line 587, Address: 0x335b14, Func Offset: 0x34
	// Line 589, Address: 0x335bb4, Func Offset: 0xd4
	// Line 590, Address: 0x335bb8, Func Offset: 0xd8
	// Line 591, Address: 0x335bbc, Func Offset: 0xdc
	// Line 593, Address: 0x335bc4, Func Offset: 0xe4
	// Line 595, Address: 0x335bcc, Func Offset: 0xec
	// Line 598, Address: 0x335bd4, Func Offset: 0xf4
	// Line 599, Address: 0x335be0, Func Offset: 0x100
	// Line 600, Address: 0x335bec, Func Offset: 0x10c
	// Line 605, Address: 0x335bf8, Func Offset: 0x118
	// Line 606, Address: 0x335bfc, Func Offset: 0x11c
	// Line 607, Address: 0x335c00, Func Offset: 0x120
	// Line 608, Address: 0x335c04, Func Offset: 0x124
	// Line 609, Address: 0x335c08, Func Offset: 0x128
	// Line 615, Address: 0x335c0c, Func Offset: 0x12c
	// Line 616, Address: 0x335c10, Func Offset: 0x130
	// Line 617, Address: 0x335c14, Func Offset: 0x134
	// Line 618, Address: 0x335c18, Func Offset: 0x138
	// Line 619, Address: 0x335c1c, Func Offset: 0x13c
	// Line 624, Address: 0x335c20, Func Offset: 0x140
	// Line 632, Address: 0x335c24, Func Offset: 0x144
	// Line 633, Address: 0x335c28, Func Offset: 0x148
	// Line 639, Address: 0x335c2c, Func Offset: 0x14c
	// Line 640, Address: 0x335c30, Func Offset: 0x150
	// Line 641, Address: 0x335c34, Func Offset: 0x154
	// Line 642, Address: 0x335c38, Func Offset: 0x158
	// Line 643, Address: 0x335c3c, Func Offset: 0x15c
	// Line 644, Address: 0x335c40, Func Offset: 0x160
	// Line 646, Address: 0x335c44, Func Offset: 0x164
	// Line 647, Address: 0x335c48, Func Offset: 0x168
	// Line 648, Address: 0x335c4c, Func Offset: 0x16c
	// Line 649, Address: 0x335c50, Func Offset: 0x170
	// Line 650, Address: 0x335c54, Func Offset: 0x174
	// Line 651, Address: 0x335c58, Func Offset: 0x178
	// Line 657, Address: 0x335c5c, Func Offset: 0x17c
	// Line 661, Address: 0x335c68, Func Offset: 0x188
	// Line 665, Address: 0x335c88, Func Offset: 0x1a8
	// Line 667, Address: 0x335c94, Func Offset: 0x1b4
	// Line 670, Address: 0x335cf0, Func Offset: 0x210
	// Line 672, Address: 0x335d54, Func Offset: 0x274
	// Line 673, Address: 0x335d80, Func Offset: 0x2a0
	// Line 674, Address: 0x335dac, Func Offset: 0x2cc
	// Line 677, Address: 0x335dd8, Func Offset: 0x2f8
	// Line 678, Address: 0x335e30, Func Offset: 0x350
	// Line 681, Address: 0x335e48, Func Offset: 0x368
	// Line 682, Address: 0x335e7c, Func Offset: 0x39c
	// Line 687, Address: 0x335e90, Func Offset: 0x3b0
	// Line 688, Address: 0x335e98, Func Offset: 0x3b8
	// Line 692, Address: 0x335ea0, Func Offset: 0x3c0
	// Line 695, Address: 0x335eac, Func Offset: 0x3cc
	// Line 699, Address: 0x335ec8, Func Offset: 0x3e8
	// Line 701, Address: 0x335ed4, Func Offset: 0x3f4
	// Line 702, Address: 0x335f04, Func Offset: 0x424
	// Line 703, Address: 0x335f18, Func Offset: 0x438
	// Line 707, Address: 0x335f30, Func Offset: 0x450
	// Line 709, Address: 0x335f3c, Func Offset: 0x45c
	// Line 721, Address: 0x335f48, Func Offset: 0x468
	// Line 724, Address: 0x335ff0, Func Offset: 0x510
	// Line 727, Address: 0x335ffc, Func Offset: 0x51c
	// Line 730, Address: 0x336044, Func Offset: 0x564
	// Line 731, Address: 0x336050, Func Offset: 0x570
	// Line 733, Address: 0x336058, Func Offset: 0x578
	// Line 734, Address: 0x336064, Func Offset: 0x584
	// Line 736, Address: 0x33606c, Func Offset: 0x58c
	// Line 737, Address: 0x336078, Func Offset: 0x598
	// Line 739, Address: 0x336080, Func Offset: 0x5a0
	// Line 740, Address: 0x33608c, Func Offset: 0x5ac
	// Line 742, Address: 0x336094, Func Offset: 0x5b4
	// Line 748, Address: 0x3360a0, Func Offset: 0x5c0
	// Line 750, Address: 0x3360ac, Func Offset: 0x5cc
	// Line 753, Address: 0x3360bc, Func Offset: 0x5dc
	// Line 755, Address: 0x3360c8, Func Offset: 0x5e8
	// Line 757, Address: 0x3360d8, Func Offset: 0x5f8
	// Line 758, Address: 0x3360fc, Func Offset: 0x61c
	// Line 760, Address: 0x3361a0, Func Offset: 0x6c0
	// Line 761, Address: 0x3361ac, Func Offset: 0x6cc
	// Line 763, Address: 0x3361c4, Func Offset: 0x6e4
	// Line 764, Address: 0x336268, Func Offset: 0x788
	// Line 765, Address: 0x336284, Func Offset: 0x7a4
	// Line 768, Address: 0x33628c, Func Offset: 0x7ac
	// Line 769, Address: 0x336294, Func Offset: 0x7b4
	// Line 770, Address: 0x336298, Func Offset: 0x7b8
	// Line 773, Address: 0x3362b4, Func Offset: 0x7d4
	// Line 776, Address: 0x3362c0, Func Offset: 0x7e0
	// Line 778, Address: 0x3362e0, Func Offset: 0x800
	// Line 779, Address: 0x3362fc, Func Offset: 0x81c
	// Line 782, Address: 0x336310, Func Offset: 0x830
	// Line 786, Address: 0x3363b8, Func Offset: 0x8d8
	// Line 788, Address: 0x3363c4, Func Offset: 0x8e4
	// Line 790, Address: 0x3363d0, Func Offset: 0x8f0
	// Line 791, Address: 0x3363f4, Func Offset: 0x914
	// Line 792, Address: 0x336498, Func Offset: 0x9b8
	// Line 793, Address: 0x3364a4, Func Offset: 0x9c4
	// Line 798, Address: 0x3364b8, Func Offset: 0x9d8
	// Line 799, Address: 0x3364bc, Func Offset: 0x9dc
	// Line 800, Address: 0x3364c0, Func Offset: 0x9e0
	// Line 801, Address: 0x3364c4, Func Offset: 0x9e4
	// Line 802, Address: 0x3364c8, Func Offset: 0x9e8
	// Line 804, Address: 0x3364cc, Func Offset: 0x9ec
	// Line 805, Address: 0x3364d8, Func Offset: 0x9f8
	// Line 807, Address: 0x3364fc, Func Offset: 0xa1c
	// Line 808, Address: 0x336508, Func Offset: 0xa28
	// Line 810, Address: 0x33652c, Func Offset: 0xa4c
	// Line 812, Address: 0x336538, Func Offset: 0xa58
	// Line 813, Address: 0x33655c, Func Offset: 0xa7c
	// Line 816, Address: 0x336580, Func Offset: 0xaa0
	// Line 818, Address: 0x33658c, Func Offset: 0xaac
	// Line 819, Address: 0x3365b0, Func Offset: 0xad0
	// Line 820, Address: 0x3365d4, Func Offset: 0xaf4
	// Line 823, Address: 0x3365f8, Func Offset: 0xb18
	// Line 824, Address: 0x336604, Func Offset: 0xb24
	// Line 830, Address: 0x336628, Func Offset: 0xb48
	// Line 832, Address: 0x336634, Func Offset: 0xb54
	// Line 834, Address: 0x336640, Func Offset: 0xb60
	// Line 836, Address: 0x3366e8, Func Offset: 0xc08
	// Line 839, Address: 0x336730, Func Offset: 0xc50
	// Line 840, Address: 0x3367d8, Func Offset: 0xcf8
	// Line 841, Address: 0x3367ec, Func Offset: 0xd0c
	// Line 844, Address: 0x3367f4, Func Offset: 0xd14
	// Line 845, Address: 0x3368a0, Func Offset: 0xdc0
	// Line 846, Address: 0x3368b8, Func Offset: 0xdd8
	// Line 847, Address: 0x3368cc, Func Offset: 0xdec
	// Line 850, Address: 0x3368d4, Func Offset: 0xdf4
	// Line 851, Address: 0x336980, Func Offset: 0xea0
	// Line 852, Address: 0x3369a0, Func Offset: 0xec0
	// Line 855, Address: 0x3369a8, Func Offset: 0xec8
	// Line 856, Address: 0x336a50, Func Offset: 0xf70
	// Line 858, Address: 0x336a68, Func Offset: 0xf88
	// Line 862, Address: 0x336a78, Func Offset: 0xf98
	// Line 865, Address: 0x336a84, Func Offset: 0xfa4
	// Line 866, Address: 0x336b38, Func Offset: 0x1058
	// Line 870, Address: 0x336b44, Func Offset: 0x1064
	// Line 871, Address: 0x336b64, Func Offset: 0x1084
	// Line 873, Address: 0x336b6c, Func Offset: 0x108c
	// Line 874, Address: 0x336b78, Func Offset: 0x1098
	// Line 876, Address: 0x336b90, Func Offset: 0x10b0
	// Line 877, Address: 0x336b9c, Func Offset: 0x10bc
	// Line 879, Address: 0x336bb8, Func Offset: 0x10d8
	// Line 880, Address: 0x336bc4, Func Offset: 0x10e4
	// Line 882, Address: 0x336be0, Func Offset: 0x1100
	// Line 884, Address: 0x336c14, Func Offset: 0x1134
	// Line 886, Address: 0x336c44, Func Offset: 0x1164
	// Line 887, Address: 0x336c6c, Func Offset: 0x118c
	// Line 889, Address: 0x336c74, Func Offset: 0x1194
	// Line 890, Address: 0x336c8c, Func Offset: 0x11ac
	// Line 891, Address: 0x336c94, Func Offset: 0x11b4
	// Line 893, Address: 0x336ca0, Func Offset: 0x11c0
	// Line 899, Address: 0x336cb8, Func Offset: 0x11d8
	// Line 900, Address: 0x336d60, Func Offset: 0x1280
	// Line 902, Address: 0x336d68, Func Offset: 0x1288
	// Line 904, Address: 0x336d94, Func Offset: 0x12b4
	// Line 905, Address: 0x336dac, Func Offset: 0x12cc
	// Line 906, Address: 0x336dc0, Func Offset: 0x12e0
	// Line 909, Address: 0x336dc8, Func Offset: 0x12e8
	// Line 910, Address: 0x336e78, Func Offset: 0x1398
	// Line 913, Address: 0x336e98, Func Offset: 0x13b8
	// Line 916, Address: 0x336eb0, Func Offset: 0x13d0
	// Line 917, Address: 0x336f54, Func Offset: 0x1474
	// Line 918, Address: 0x336ff8, Func Offset: 0x1518
	// Line 919, Address: 0x3370a0, Func Offset: 0x15c0
	// Line 920, Address: 0x337144, Func Offset: 0x1664
	// Line 923, Address: 0x3371ec, Func Offset: 0x170c
	// Line 924, Address: 0x3371f8, Func Offset: 0x1718
	// Line 927, Address: 0x337204, Func Offset: 0x1724
	// Line 928, Address: 0x33720c, Func Offset: 0x172c
	// Func End, Address: 0x337240, Func Offset: 0x1760
}

// xSceneScriptEntryPointEnable__Fii
// Start address: 0x337240
void xSceneScriptEntryPointEnable(int32 id, int32 state)
{
	// Line 556, Address: 0x337240, Func Offset: 0
	// Line 557, Address: 0x337258, Func Offset: 0x18
	// Line 560, Address: 0x3372fc, Func Offset: 0xbc
	// Line 561, Address: 0x337318, Func Offset: 0xd8
	// Line 563, Address: 0x337320, Func Offset: 0xe0
	// Line 564, Address: 0x337338, Func Offset: 0xf8
	// Func End, Address: 0x337350, Func Offset: 0x110
}

// xSceneScriptTriggerEnable__Fii
// Start address: 0x337350
void xSceneScriptTriggerEnable(int32 id, int32 state)
{
	// Line 533, Address: 0x337350, Func Offset: 0
	// Line 534, Address: 0x337368, Func Offset: 0x18
	// Line 537, Address: 0x33740c, Func Offset: 0xbc
	// Line 538, Address: 0x337428, Func Offset: 0xd8
	// Line 541, Address: 0x337430, Func Offset: 0xe0
	// Line 542, Address: 0x337448, Func Offset: 0xf8
	// Func End, Address: 0x337460, Func Offset: 0x110
}

// xSceneScriptLightSetSunColor__Fiii
// Start address: 0x337460
void xSceneScriptLightSetSunColor(int32 r, int32 g, int32 b)
{
	// Line 514, Address: 0x337460, Func Offset: 0
	// Line 515, Address: 0x337480, Func Offset: 0x20
	// Line 517, Address: 0x337524, Func Offset: 0xc4
	// Line 518, Address: 0x337548, Func Offset: 0xe8
	// Line 519, Address: 0x33756c, Func Offset: 0x10c
	// Line 520, Address: 0x337590, Func Offset: 0x130
	// Func End, Address: 0x3375ac, Func Offset: 0x14c
}

// xSceneScriptLightSetSunDirection__Fii
// Start address: 0x3375b0
void xSceneScriptLightSetSunDirection(int32 m1, int32 m2)
{
	// Line 489, Address: 0x3375b0, Func Offset: 0
	// Line 490, Address: 0x3375c8, Func Offset: 0x18
	// Line 492, Address: 0x33766c, Func Offset: 0xbc
	// Line 493, Address: 0x33770c, Func Offset: 0x15c
	// Line 495, Address: 0x3377ac, Func Offset: 0x1fc
	// Line 496, Address: 0x337858, Func Offset: 0x2a8
	// Line 499, Address: 0x337904, Func Offset: 0x354
	// Line 500, Address: 0x337940, Func Offset: 0x390
	// Line 501, Address: 0x33797c, Func Offset: 0x3cc
	// Line 502, Address: 0x3379b8, Func Offset: 0x408
	// Line 503, Address: 0x3379d0, Func Offset: 0x420
	// Func End, Address: 0x3379e8, Func Offset: 0x438
}

// xSceneScriptLightSetAmbient__Fiii
// Start address: 0x3379f0
void xSceneScriptLightSetAmbient(int32 r, int32 g, int32 b)
{
	// Line 472, Address: 0x3379f0, Func Offset: 0
	// Line 473, Address: 0x337a10, Func Offset: 0x20
	// Line 475, Address: 0x337ab4, Func Offset: 0xc4
	// Line 476, Address: 0x337ad8, Func Offset: 0xe8
	// Line 477, Address: 0x337afc, Func Offset: 0x10c
	// Line 478, Address: 0x337b20, Func Offset: 0x130
	// Func End, Address: 0x337b3c, Func Offset: 0x14c
}

// xSceneScriptLightSetColor__Fiiiii
// Start address: 0x337b40
void xSceneScriptLightSetColor(int32 idx, int32 r, int32 g, int32 b, int32 anchorIdx)
{
	iLightResource* rsrc;
	// Line 443, Address: 0x337b40, Func Offset: 0
	// Line 445, Address: 0x337b70, Func Offset: 0x30
	// Line 446, Address: 0x337c14, Func Offset: 0xd4
	// Line 448, Address: 0x337cb4, Func Offset: 0x174
	// Line 450, Address: 0x337d60, Func Offset: 0x220
	// Line 451, Address: 0x337d6c, Func Offset: 0x22c
	// Line 452, Address: 0x337d8c, Func Offset: 0x24c
	// Line 453, Address: 0x337d98, Func Offset: 0x258
	// Line 455, Address: 0x337db8, Func Offset: 0x278
	// Line 457, Address: 0x337dd0, Func Offset: 0x290
	// Line 458, Address: 0x337df0, Func Offset: 0x2b0
	// Line 459, Address: 0x337e10, Func Offset: 0x2d0
	// Line 461, Address: 0x337e30, Func Offset: 0x2f0
	// Func End, Address: 0x337e54, Func Offset: 0x314
}

// xSceneScriptLightSetPositionMarker__Fiii
// Start address: 0x337e60
void xSceneScriptLightSetPositionMarker(int32 idx, int32 midx, int32 anchorIdx)
{
	iLightResource* r;
	// Line 412, Address: 0x337e60, Func Offset: 0
	// Line 415, Address: 0x337e80, Func Offset: 0x20
	// Line 416, Address: 0x337f24, Func Offset: 0xc4
	// Line 418, Address: 0x337fc4, Func Offset: 0x164
	// Line 419, Address: 0x338070, Func Offset: 0x210
	// Line 421, Address: 0x33811c, Func Offset: 0x2bc
	// Line 422, Address: 0x338128, Func Offset: 0x2c8
	// Line 423, Address: 0x338148, Func Offset: 0x2e8
	// Line 424, Address: 0x338154, Func Offset: 0x2f4
	// Line 426, Address: 0x338174, Func Offset: 0x314
	// Line 428, Address: 0x33818c, Func Offset: 0x32c
	// Line 429, Address: 0x3381a8, Func Offset: 0x348
	// Line 430, Address: 0x3381c4, Func Offset: 0x364
	// Line 432, Address: 0x3381e0, Func Offset: 0x380
	// Func End, Address: 0x3381fc, Func Offset: 0x39c
}

// xSceneScriptLightSetRange__Fiii
// Start address: 0x338200
void xSceneScriptLightSetRange(int32 idx, int32 range, int32 anchorIdx)
{
	iLightResource* r;
	// Line 382, Address: 0x338200, Func Offset: 0
	// Line 385, Address: 0x338220, Func Offset: 0x20
	// Line 386, Address: 0x3382c4, Func Offset: 0xc4
	// Line 388, Address: 0x338364, Func Offset: 0x164
	// Line 390, Address: 0x338410, Func Offset: 0x210
	// Line 391, Address: 0x33841c, Func Offset: 0x21c
	// Line 392, Address: 0x33843c, Func Offset: 0x23c
	// Line 393, Address: 0x338448, Func Offset: 0x248
	// Line 395, Address: 0x338468, Func Offset: 0x268
	// Line 397, Address: 0x338480, Func Offset: 0x280
	// Line 398, Address: 0x3384a0, Func Offset: 0x2a0
	// Line 399, Address: 0x3384a4, Func Offset: 0x2a4
	// Line 401, Address: 0x3384a8, Func Offset: 0x2a8
	// Func End, Address: 0x3384c4, Func Offset: 0x2c4
}

// xSceneScriptLightSetFalloff__Fiii
// Start address: 0x3384d0
void xSceneScriptLightSetFalloff(int32 idx, int32 falloff, int32 anchorIdx)
{
	// Line 361, Address: 0x3384d0, Func Offset: 0
	// Line 362, Address: 0x3384f0, Func Offset: 0x20
	// Line 363, Address: 0x338594, Func Offset: 0xc4
	// Line 364, Address: 0x338634, Func Offset: 0x164
	// Line 366, Address: 0x3386d4, Func Offset: 0x204
	// Line 367, Address: 0x338780, Func Offset: 0x2b0
	// Line 369, Address: 0x338824, Func Offset: 0x354
	// Line 371, Address: 0x338860, Func Offset: 0x390
	// Func End, Address: 0x33887c, Func Offset: 0x3ac
}

// xSceneScriptLightSetEnable__Fii
// Start address: 0x338880
void xSceneScriptLightSetEnable(int32 idx, int32 enabled)
{
	// Line 344, Address: 0x338880, Func Offset: 0
	// Line 345, Address: 0x338898, Func Offset: 0x18
	// Line 346, Address: 0x33893c, Func Offset: 0xbc
	// Line 348, Address: 0x3389dc, Func Offset: 0x15c
	// Line 349, Address: 0x3389f0, Func Offset: 0x170
	// Line 350, Address: 0x338a08, Func Offset: 0x188
	// Func End, Address: 0x338a20, Func Offset: 0x1a0
}

// xSceneScriptLightSetFrameSpeed__Fii
// Start address: 0x338a20
void xSceneScriptLightSetFrameSpeed(int32 idx, int32 rate)
{
	// Line 324, Address: 0x338a20, Func Offset: 0
	// Line 325, Address: 0x338a38, Func Offset: 0x18
	// Line 326, Address: 0x338adc, Func Offset: 0xbc
	// Line 328, Address: 0x338b7c, Func Offset: 0x15c
	// Line 330, Address: 0x338b90, Func Offset: 0x170
	// Line 331, Address: 0x338ba8, Func Offset: 0x188
	// Line 333, Address: 0x338bc0, Func Offset: 0x1a0
	// Func End, Address: 0x338bd8, Func Offset: 0x1b8
}

// xSceneScriptLightSetSpeed__Fii
// Start address: 0x338be0
void xSceneScriptLightSetSpeed(int32 idx, int32 speed)
{
	// Line 308, Address: 0x338be0, Func Offset: 0
	// Line 309, Address: 0x338bf8, Func Offset: 0x18
	// Line 310, Address: 0x338c9c, Func Offset: 0xbc
	// Line 312, Address: 0x338d3c, Func Offset: 0x15c
	// Line 313, Address: 0x338d50, Func Offset: 0x170
	// Line 314, Address: 0x338d84, Func Offset: 0x1a4
	// Func End, Address: 0x338d9c, Func Offset: 0x1bc
}

// xSceneScriptLightSetWeight__Fii
// Start address: 0x338da0
void xSceneScriptLightSetWeight(int32 idx, int32 weight)
{
	// Line 290, Address: 0x338da0, Func Offset: 0
	// Line 291, Address: 0x338db8, Func Offset: 0x18
	// Line 292, Address: 0x338e5c, Func Offset: 0xbc
	// Line 294, Address: 0x338efc, Func Offset: 0x15c
	// Line 295, Address: 0x338f10, Func Offset: 0x170
	// Line 297, Address: 0x338f44, Func Offset: 0x1a4
	// Func End, Address: 0x338f5c, Func Offset: 0x1bc
}

// xSceneScriptLightSetMode__Fii
// Start address: 0x338f60
void xSceneScriptLightSetMode(int32 idx, int32 mode)
{
	// Line 274, Address: 0x338f60, Func Offset: 0
	// Line 275, Address: 0x338f78, Func Offset: 0x18
	// Line 276, Address: 0x33901c, Func Offset: 0xbc
	// Line 278, Address: 0x3390bc, Func Offset: 0x15c
	// Line 279, Address: 0x3390d0, Func Offset: 0x170
	// Line 280, Address: 0x3390e8, Func Offset: 0x188
	// Func End, Address: 0x339100, Func Offset: 0x1a0
}

// xSceneScriptIsNPCMarkerVisible__Fi
// Start address: 0x339100
int32 xSceneScriptIsNPCMarkerVisible(int32 markerID)
{
	// Line 256, Address: 0x339100, Func Offset: 0
	// Line 257, Address: 0x339110, Func Offset: 0x10
	// Line 258, Address: 0x3391b0, Func Offset: 0xb0
	// Line 259, Address: 0x339254, Func Offset: 0x154
	// Line 260, Address: 0x339300, Func Offset: 0x200
	// Line 262, Address: 0x3393b4, Func Offset: 0x2b4
	// Line 263, Address: 0x3393d4, Func Offset: 0x2d4
	// Func End, Address: 0x3393e8, Func Offset: 0x2e8
}

// xSceneScriptIsNPCInVisArea__Fii
// Start address: 0x3393f0
int32 xSceneScriptIsNPCInVisArea(int32 type, int32 id)
{
	_xActor* a;
	Vector3D pos;
	// Line 226, Address: 0x3393f0, Func Offset: 0
	// Line 230, Address: 0x3393fc, Func Offset: 0xc
	// Line 231, Address: 0x339408, Func Offset: 0x18
	// Line 233, Address: 0x3394a8, Func Offset: 0xb8
	// Line 235, Address: 0x3394b0, Func Offset: 0xc0
	// Line 236, Address: 0x3394cc, Func Offset: 0xdc
	// Line 238, Address: 0x3394e0, Func Offset: 0xf0
	// Line 241, Address: 0x3394f8, Func Offset: 0x108
	// Line 242, Address: 0x3394fc, Func Offset: 0x10c
	// Func End, Address: 0x339510, Func Offset: 0x120
}

// xSceneScriptIsObjMarkerVisible__Fi
// Start address: 0x339510
int32 xSceneScriptIsObjMarkerVisible(int32 markerID)
{
	// Line 213, Address: 0x339510, Func Offset: 0
	// Line 214, Address: 0x339520, Func Offset: 0x10
	// Line 215, Address: 0x3395c0, Func Offset: 0xb0
	// Line 216, Address: 0x339664, Func Offset: 0x154
	// Line 217, Address: 0x339710, Func Offset: 0x200
	// Line 219, Address: 0x3397c4, Func Offset: 0x2b4
	// Line 220, Address: 0x3397e4, Func Offset: 0x2d4
	// Func End, Address: 0x3397f8, Func Offset: 0x2e8
}

// xSceneScriptGetMarkerCount__Fv
// Start address: 0x339800
int32 xSceneScriptGetMarkerCount()
{
	// Line 194, Address: 0x339800, Func Offset: 0
	// Line 195, Address: 0x339808, Func Offset: 0x8
	// Line 197, Address: 0x3398ac, Func Offset: 0xac
	// Line 198, Address: 0x3398b4, Func Offset: 0xb4
	// Func End, Address: 0x3398c4, Func Offset: 0xc4
}

// xSceneScriptGetNavPointCount__Fv
// Start address: 0x3398d0
int32 xSceneScriptGetNavPointCount()
{
	// Line 178, Address: 0x3398d0, Func Offset: 0
	// Line 179, Address: 0x3398d8, Func Offset: 0x8
	// Line 181, Address: 0x33997c, Func Offset: 0xac
	// Line 182, Address: 0x339984, Func Offset: 0xb4
	// Func End, Address: 0x339994, Func Offset: 0xc4
}

// xSceneReInitializeInterpreter__Fv
// Start address: 0x3399a0
void xSceneReInitializeInterpreter()
{
	// Line 164, Address: 0x3399a0, Func Offset: 0
	// Line 165, Address: 0x3399a4, Func Offset: 0x4
	// Func End, Address: 0x3399ac, Func Offset: 0xc
}

// xSceneRegisterScriptCalls__Fv
// Start address: 0x3399b0
void xSceneRegisterScriptCalls()
{
	// Line 125, Address: 0x3399b0, Func Offset: 0
	// Line 126, Address: 0x3399b8, Func Offset: 0x8
	// Line 127, Address: 0x3399d4, Func Offset: 0x24
	// Line 128, Address: 0x3399f0, Func Offset: 0x40
	// Line 129, Address: 0x339a0c, Func Offset: 0x5c
	// Line 130, Address: 0x339a28, Func Offset: 0x78
	// Line 132, Address: 0x339a44, Func Offset: 0x94
	// Line 133, Address: 0x339a60, Func Offset: 0xb0
	// Line 134, Address: 0x339a7c, Func Offset: 0xcc
	// Line 135, Address: 0x339a98, Func Offset: 0xe8
	// Line 136, Address: 0x339ab4, Func Offset: 0x104
	// Line 137, Address: 0x339ad0, Func Offset: 0x120
	// Line 138, Address: 0x339aec, Func Offset: 0x13c
	// Line 140, Address: 0x339b08, Func Offset: 0x158
	// Line 141, Address: 0x339b24, Func Offset: 0x174
	// Line 143, Address: 0x339b40, Func Offset: 0x190
	// Line 144, Address: 0x339b5c, Func Offset: 0x1ac
	// Line 145, Address: 0x339b78, Func Offset: 0x1c8
	// Line 146, Address: 0x339b94, Func Offset: 0x1e4
	// Line 147, Address: 0x339bb0, Func Offset: 0x200
	// Line 148, Address: 0x339bcc, Func Offset: 0x21c
	// Func End, Address: 0x339bdc, Func Offset: 0x22c
}

