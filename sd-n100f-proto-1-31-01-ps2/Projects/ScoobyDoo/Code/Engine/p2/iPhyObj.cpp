typedef struct _RxPipelineNode;
typedef struct tagxState;
typedef struct _RxPipeline;
typedef struct xTrigger;
typedef struct xNavLink;
typedef struct tagP2MeshVertex;
typedef struct tagXAnimControl;
typedef struct _xActor;
typedef struct tagiAnimResource;
typedef struct _RxPipelineRequiresCluster;
typedef struct tagxPhysicsObject;
typedef struct _RxClusterDefinition;
typedef struct _RpSector;
typedef struct Vector3D;
typedef enum _RwTextureFilterMode;
typedef struct _xObj;
typedef struct xMarker;
typedef struct xSpan;
typedef struct iConditionRuntime;
typedef enum _rpWorldRenderOrder;
typedef struct _rxReq;
typedef struct xNavPoint;
typedef struct tagiFloorTri;
typedef struct XStreamHeader;
typedef struct xCondition;
typedef struct xEntryPoint;
typedef struct _RpPolygon;
typedef struct _tagxEnv;
typedef struct _RwObject;
typedef struct _tagiEnvRuntime;
typedef struct iEntryPointResource;
typedef struct tagiFloor;
typedef struct _RxOutputSpec;
typedef struct _RpWorldSector;
typedef struct tagP2Weight;
typedef struct Vector4D;
typedef struct iTriggerResource;
typedef struct iCameraResource;
typedef struct _iVFXResource;
typedef struct tagiAnimFrame;
typedef struct _RxPipelineCluster;
typedef struct iActionRuntime;
typedef struct _RpMeshHeader;
typedef struct _RxClusterRef;
typedef struct tagXAnim;
typedef struct _RwTexDictionary;
typedef struct tagXAnimTrigger;
typedef struct _RpWorld;
typedef struct iActorRuntime;
typedef struct tagXStreamDirectoryEntry;
typedef enum _RxClusterValid;
typedef struct _rxHeapFreeBlock;
typedef struct xAction;
typedef struct _iSFXResource;
typedef struct _RwLLLink;
typedef struct _RxIoSpec;
typedef struct tagxStateMgr;
typedef struct _RpCollSector;
typedef struct p2Camera;
typedef struct _RwBBox;
typedef struct iActionResource;
typedef struct _RwRGBA;
typedef struct _rxHeapSuperBlockDescriptor;
typedef struct xSpanBuffer;
typedef struct _RxNodeDefinition;
typedef struct _RxNodeMethods;
typedef enum _RxClusterForcePresent;
typedef struct tagxStateLink;
typedef struct xLine2D;
typedef struct tagiAnimRuntime;
typedef struct _RxHeap;
typedef struct _RxPacket;
typedef struct _RpMaterialList;
typedef struct _iEntryPointRuntime;
typedef struct _FCinfo;
typedef struct _RwTexture;
typedef struct iDisplayCamera;
typedef struct xScene;
typedef enum _RxNodeDefEditable;
typedef struct _RpMaterial;
typedef struct _rxHeapBlockHeader;
typedef struct _RwRaster;
typedef struct _RpClump;
typedef struct _RxClusterUnion;
typedef struct _RxPipelineNodeTopSortData;
typedef struct _iRenderEffects;
typedef struct xCamera;
typedef struct iConditionResource;
typedef struct xLight;
typedef struct _RwV3d;
typedef struct _RxCluster;
typedef struct iLightResource;
typedef struct xRule;
typedef struct _RwLinkList;
typedef struct tagP2Mesh;
typedef struct _iLightRuntime;
typedef struct _RpVertexNormal;
typedef struct _RwTexCoords;
typedef struct iObjRuntime;
typedef struct tagP2VERTEX;
typedef struct tagxObjDBData;
typedef struct _rwResEntryTag;
typedef struct iRuleResource;
typedef struct _p2Geom;
typedef struct tagxActorDBData;
typedef enum _RxClusterValidityReq;
typedef struct iMarkerResource;
typedef enum _RwTextureAddressMode;
typedef struct _RwV2d;
typedef struct tagxPadAction;
typedef struct _RxPipelineNodeParam;
typedef enum _rxEmbeddedPacketState;
typedef struct tagiMesh;
typedef struct tagXStreamMDSDirectory;
typedef struct p2CameraVersion;
typedef struct _RwSurfaceProperties;
typedef struct tagxStateThread;

typedef int32(*type_3)(_RxPipelineNode*);
typedef void(*type_6)(_RxPipelineNode*);
typedef int32(*type_11)(_RxPipelineNode*, _RxPipeline*);
typedef uint32(*type_18)(_RxPipelineNode*, uint32, uint32, void*);
typedef int32(*type_20)(_RxPipelineNode*, _RxPipelineNodeParam*);
typedef _RpWorldSector*(*type_23)(_RpWorldSector*);
typedef int32(*type_24)(_RxNodeDefinition*);
typedef void(*type_27)(_RxNodeDefinition*);
typedef void(*type_29)(_xActor*, int32, tagXAnim*, tagXAnimTrigger*);
typedef _RpClump*(*type_67)(_RpClump*, void*);
typedef void(*type_86)(_rwResEntryTag*);

typedef _xActor type_0[1];
typedef uint32 type_1[4];
typedef _xActor type_2[1];
typedef _xActor type_4[1];
typedef _xActor type_5[1];
typedef _xActor type_7[1];
typedef iLightResource type_8[2];
typedef _xActor type_9[1];
typedef tagxState* type_10[10];
typedef _xActor type_12[1];
typedef _xActor type_13[1];
typedef _xActor type_14[4];
typedef _RwV2d type_15[2];
typedef uint16 type_16[3];
typedef _xActor type_17[4];
typedef _xActor type_19[4];
typedef iTriggerResource* type_21[20];
typedef _xActor type_22[1];
typedef _xActor type_25[1];
typedef Vector3D type_26[4];
typedef iTriggerResource* type_28[20];
typedef _RxCluster type_30[1];
typedef _xActor type_31[1];
typedef int8 type_32[2048];
typedef p2CameraVersion type_33[5];
typedef _xActor type_34[4];
typedef iTriggerResource* type_35[20];
typedef _xActor type_36[1];
typedef _xActor type_37[4];
typedef iTriggerResource* type_38[20];
typedef _xActor type_39[4];
typedef uint8 type_40[3];
typedef uint8 type_41[4];
typedef _xActor type_42[2];
typedef _RwV2d type_43[2];
typedef iTriggerResource* type_44[20];
typedef xSpan type_45[1];
typedef _xActor type_46[1];
typedef _RwV2d type_47[2];
typedef int8 type_48[128];
typedef _RwV2d type_49[2];
typedef _xActor type_50[1];
typedef int32 type_51[7];
typedef uint16 type_52[3];
typedef iTriggerResource* type_53[20];
typedef _xActor type_54[1];
typedef tagxStateThread type_55[7];
typedef _xActor type_56[4];
typedef Vector3D type_57[4];
typedef iTriggerResource* type_58[20];
typedef _xActor type_59[4];
typedef int8 type_60[32];
typedef uint8 type_61[4];
typedef _xActor type_62[1];
typedef int8 type_63[32];
typedef iTriggerResource* type_64[20];
typedef uint8 type_65[4];
typedef _xActor type_66[1];
typedef uint8 type_68[4];
typedef _xActor* type_69[40];
typedef Vector3D type_70[5];
typedef iTriggerResource* type_71[20];
typedef int8 type_72[40];
typedef uint8 type_73[3];
typedef _xActor* type_74[13];
typedef _xObj type_75[32];
typedef iTriggerResource* type_76[20];
typedef uint16 type_77[3];
typedef _xActor type_78[1];
typedef iTriggerResource* type_79[20];
typedef _xActor type_80[4];
typedef _xActor type_81[4];
typedef iTriggerResource* type_82[20];
typedef _xActor type_83[1];
typedef _xActor type_84[4];
typedef _xActor type_85[4];
typedef _xActor type_87[4];
typedef _xActor type_88[4];
typedef _xActor type_89[1];
typedef _xActor type_90[4];
typedef _xActor type_91[4];
typedef tagXStreamDirectoryEntry type_92[1000];
typedef _xActor type_93[4];
typedef float32 type_94[3];

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

struct xTrigger
{
	iTriggerResource* m_resource;
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

struct _RxPipelineRequiresCluster
{
	_RxClusterDefinition* clusterDef;
	_RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
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

struct _RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct _RpSector
{
	int32 type;
};

struct Vector3D
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

struct _xObj
{
	void* m_resource;
	iObjRuntime* m_runtime;
	uint32 m_modelID;
	void* m_texture;
	int16 m_objType;
	int16 m_objID;
};

struct xMarker
{
	iMarkerResource* m_resource;
	void** m_runtime;
};

struct xSpan
{
	float32 m_a;
	float32 m_b;
	float32 m_a2;
	float32 m_b2;
	int32 m_userData;
	xSpan* m_next;
	xSpan* m_prev;
};

struct iConditionRuntime
{
	xCondition* m_operand;
	uint16 m_match;
	uint16 m_trigger;
};

enum _rpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct _rxReq
{
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

struct tagiFloorTri
{
	uint16 m_v[3];
	uint16 m_n;
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

struct xCondition
{
	iConditionResource* m_resource;
	iConditionRuntime* m_runtime;
};

struct xEntryPoint
{
	iEntryPointResource* m_resource;
	_iEntryPointRuntime* m_runtime;
};

struct _RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
};

struct _tagxEnv
{
	_tagiEnvRuntime* m_runtime;
};

struct _RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct _tagiEnvRuntime
{
	_RpWorld* world;
	Vector3D world_origin;
	_RwTexDictionary* tex_dict;
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

struct _RxOutputSpec
{
	int8* name;
	_RxClusterValid* outputClusters;
	_RxClusterValid allOtherClusters;
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

struct tagP2Weight
{
	uint16 m_joint0;
	uint16 m_joint1;
	float32 m_weight0;
	float32 m_weight1;
};

struct Vector4D
{
	float32 x;
	float32 y;
	float32 z;
	float32 t;
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

struct iCameraResource
{
	uint16 m_plateOffset;
	uint16 m_versions;
	p2CameraVersion m_version[5];
	uint32 m_frameCount;
	p2Camera* m_cameras;
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

struct tagiAnimFrame
{
	float32* m_tx;
	float32* m_ty;
	float32* m_tz;
	float32* m_rx;
	float32* m_ry;
	float32* m_rz;
};

struct _RxPipelineCluster
{
	_RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

struct iActionRuntime
{
	xAction* m_and;
};

struct _RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct _RxClusterRef
{
	_RxClusterDefinition* clusterDef;
	_RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct tagXAnim
{
	tagiAnimResource* m_resource;
	tagiAnimRuntime* m_runtime;
};

struct _RwTexDictionary
{
	_RwObject object;
	_RwLinkList texturesInDict;
	_RwLLLink lInInstance;
};

struct tagXAnimTrigger
{
	uint16 m_frame;
	uint16 m_type;
	uint32 m_data;
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

struct tagXStreamDirectoryEntry
{
	uint32 id;
	uint32 type;
	uint32 offset;
	uint32 length;
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

struct xAction
{
	iActionResource* m_resource;
	iActionRuntime* m_runtime;
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

struct _RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
};

struct p2Camera
{
	Vector3D m_pos;
	Vector3D m_rot;
	float32 m_fov;
};

struct _RwBBox
{
	_RwV3d sup;
	_RwV3d inf;
};

struct iActionResource
{
	uint8 m_cmdType;
	uint8 m_cmd;
	uint16 pad;
	uint32 m_cmdParameter;
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

struct xSpanBuffer
{
	xSpan* m_head;
	xSpan* m_tail;
	xSpan m_span[1];
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

struct tagxStateLink
{
	uint8 m_command;
	uint8 m_flags;
	uint16 m_state;
};

struct xLine2D
{
	_RwV2d m_p[2];
	_RwV2d m_i[2];
	int32 m_iCount;
};

struct tagiAnimRuntime
{
	void* m_sfx;
	void* m_vfx;
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

struct _RpMaterialList
{
	_RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct _iEntryPointRuntime
{
	uint32 m_enabled;
};

struct _FCinfo
{
	uint16 nidx[3];
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

struct iDisplayCamera
{
	Vector3D m_pos;
	Vector3D m_rot;
	float32 m_fov;
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

enum _RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
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

struct _rxHeapBlockHeader
{
	_rxHeapBlockHeader* prev;
	_rxHeapBlockHeader* next;
	uint32 size;
	_rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
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

struct _RpClump
{
	_RwObject object;
	_RwLinkList atomicList;
	_RwLLLink inWorldLink;
	_RpClump*(*callback)(_RpClump*, void*);
	uint16 renderFrame;
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

struct xCamera
{
	iCameraResource* m_resource;
	void** m_runtime;
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

struct xLight
{
	iLightResource* m_resource;
	_iLightRuntime* m_runtime;
};

struct _RwV3d
{
	float32 x;
	float32 y;
	float32 z;
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

struct iLightResource
{
	uint32 m_type;
	Vector3D m_pos;
	Vector3D m_rot;
	Vector3D m_color;
	int32 m_fov;
};

struct xRule
{
	iRuleResource* m_resource;
	void* m_runtime;
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

struct iObjRuntime
{
	int16 m_flag;
	int16 m_pad;
	_p2Geom* m_geom;
	float32 m_bradius;
	tagxPhysicsObject m_phys;
};

struct tagP2VERTEX
{
	float32 x;
	float32 y;
	float32 z;
	float32 tu;
	float32 tv;
};

struct tagxObjDBData
{
	_xObj m_o[32];
	int32 m_staticObjects;
	int32 m_staticAssets;
};

struct _rwResEntryTag
{
	_RwLLLink link;
	int32 size;
	void* owner;
	_rwResEntryTag** ownerRef;
	void(*destroyNotify)(_rwResEntryTag*);
};

struct iRuleResource
{
	uint32 m_actionCount;
	xAction* m_action;
	uint32 m_conditionCount;
	xCondition* m_condition;
};

struct _p2Geom
{
	uint32 m_meshCount;
	tagP2Mesh* m_mesh;
	_iRenderEffects effects;
	_RpClump* m_clump;
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

enum _RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct iMarkerResource
{
	Vector3D m_pos;
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

struct _RwV2d
{
	float32 x;
	float32 y;
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

struct _RxPipelineNodeParam
{
	void* dataParam;
	_RxHeap* heap;
};

enum _rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

struct tagiMesh
{
};

struct tagXStreamMDSDirectory
{
	uint32 count;
	tagXStreamDirectoryEntry directory[1000];
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

struct _RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
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

uint32 bonk_threshold;
int32 bonk_shift;
xScene* xScene_current;
tagxObjDBData* godb;
int8 vAssertBuf2[128];
XStreamHeader currentHeader;
tagxActorDBData* gadb;

uint32 iPhysicsTrace2D_OBJECT(tagxPhysicsObject* o, Vector3D* a, Vector3D* b, Vector3D* c, float32* ct);
uint32 iPhysicsTrace2D_ACTOR(tagxPhysicsObject* o, Vector3D* a, Vector3D* b, Vector3D* c, float32* ct);
uint32 iPhysicsTrace2D_NOWALKTRIGGER(tagxPhysicsObject* o, Vector3D* a, Vector3D* b, Vector3D* c, float32* ct);
uint32 iPhysicsTrace2D_WALKTRIGGER(tagxPhysicsObject* o, Vector3D* a, Vector3D* b, Vector3D* c, float32* ct);
uint32 iPhysicsTrace2D(tagxPhysicsObject* o, Vector3D* a, Vector3D* b, Vector3D* c, float32* ct);
void iPhysicsObjectInitialize(tagxPhysicsObject* p);

// iPhysicsTrace2D_OBJECT__FP17tagxPhysicsObjectP8Vector3DP8Vector3DP8Vector3DPf
// Start address: 0x370570
uint32 iPhysicsTrace2D_OBJECT(tagxPhysicsObject* o, Vector3D* a, Vector3D* b, Vector3D* c, float32* ct)
{
	Vector3D sc;
	Vector3D sb;
	Vector3D sa;
	float32 bradSquared;
	float32 newDistSquared;
	float32 distSquared;
	uint32 lineFloorMaskLo;
	uint32 lineFloorMaskHi;
	uint32 lineFloorMask;
	xLine2D line;
	int32 i;
	int32 hit;
	iObjRuntime* r;
	// Line 856, Address: 0x370570, Func Offset: 0
	// Line 869, Address: 0x3705ac, Func Offset: 0x3c
	// Line 873, Address: 0x370650, Func Offset: 0xe0
	// Line 874, Address: 0x370658, Func Offset: 0xe8
	// Line 875, Address: 0x370660, Func Offset: 0xf0
	// Line 876, Address: 0x370668, Func Offset: 0xf8
	// Line 878, Address: 0x370670, Func Offset: 0x100
	// Line 879, Address: 0x370684, Func Offset: 0x114
	// Line 880, Address: 0x37068c, Func Offset: 0x11c
	// Line 883, Address: 0x370690, Func Offset: 0x120
	// Line 887, Address: 0x37069c, Func Offset: 0x12c
	// Line 888, Address: 0x3706b4, Func Offset: 0x144
	// Line 892, Address: 0x3706bc, Func Offset: 0x14c
	// Line 896, Address: 0x3706dc, Func Offset: 0x16c
	// Line 899, Address: 0x3706f8, Func Offset: 0x188
	// Line 902, Address: 0x370714, Func Offset: 0x1a4
	// Line 904, Address: 0x370720, Func Offset: 0x1b0
	// Line 908, Address: 0x370740, Func Offset: 0x1d0
	// Line 910, Address: 0x370750, Func Offset: 0x1e0
	// Line 914, Address: 0x370760, Func Offset: 0x1f0
	// Line 919, Address: 0x370798, Func Offset: 0x228
	// Line 923, Address: 0x3707f0, Func Offset: 0x280
	// Line 926, Address: 0x37080c, Func Offset: 0x29c
	// Line 934, Address: 0x37081c, Func Offset: 0x2ac
	// Line 948, Address: 0x37082c, Func Offset: 0x2bc
	// Line 949, Address: 0x370838, Func Offset: 0x2c8
	// Line 950, Address: 0x370840, Func Offset: 0x2d0
	// Line 951, Address: 0x370848, Func Offset: 0x2d8
	// Line 952, Address: 0x370850, Func Offset: 0x2e0
	// Line 958, Address: 0x370854, Func Offset: 0x2e4
	// Line 959, Address: 0x370858, Func Offset: 0x2e8
	// Line 962, Address: 0x37085c, Func Offset: 0x2ec
	// Line 963, Address: 0x370868, Func Offset: 0x2f8
	// Line 964, Address: 0x37086c, Func Offset: 0x2fc
	// Line 966, Address: 0x370878, Func Offset: 0x308
	// Line 967, Address: 0x370880, Func Offset: 0x310
	// Line 968, Address: 0x370888, Func Offset: 0x318
	// Line 969, Address: 0x370890, Func Offset: 0x320
	// Line 971, Address: 0x3708a4, Func Offset: 0x334
	// Line 972, Address: 0x3708ac, Func Offset: 0x33c
	// Line 973, Address: 0x3708b0, Func Offset: 0x340
	// Line 974, Address: 0x3708b8, Func Offset: 0x348
	// Line 983, Address: 0x3708c4, Func Offset: 0x354
	// Line 1007, Address: 0x3708d4, Func Offset: 0x364
	// Line 1008, Address: 0x3708dc, Func Offset: 0x36c
	// Func End, Address: 0x37090c, Func Offset: 0x39c
}

// iPhysicsTrace2D_ACTOR__FP17tagxPhysicsObjectP8Vector3DP8Vector3DP8Vector3DPf
// Start address: 0x370910
uint32 iPhysicsTrace2D_ACTOR(tagxPhysicsObject* o, Vector3D* a, Vector3D* b, Vector3D* c, float32* ct)
{
	Vector3D sc;
	Vector3D sb;
	Vector3D sa;
	float32 bradSquared;
	float32 newDistSquared;
	float32 distSquared;
	_xActor* actor;
	int32 i;
	int32 hit;
	iActorRuntime* r;
	// Line 707, Address: 0x370910, Func Offset: 0
	// Line 721, Address: 0x37093c, Func Offset: 0x2c
	// Line 731, Address: 0x3709e0, Func Offset: 0xd0
	// Line 733, Address: 0x3709ec, Func Offset: 0xdc
	// Line 734, Address: 0x3709fc, Func Offset: 0xec
	// Line 737, Address: 0x370a04, Func Offset: 0xf4
	// Line 738, Address: 0x370a08, Func Offset: 0xf8
	// Line 741, Address: 0x370a20, Func Offset: 0x110
	// Line 745, Address: 0x370a3c, Func Offset: 0x12c
	// Line 748, Address: 0x370a58, Func Offset: 0x148
	// Line 751, Address: 0x370a68, Func Offset: 0x158
	// Line 755, Address: 0x370a74, Func Offset: 0x164
	// Line 760, Address: 0x370aac, Func Offset: 0x19c
	// Line 764, Address: 0x370b04, Func Offset: 0x1f4
	// Line 767, Address: 0x370b20, Func Offset: 0x210
	// Line 774, Address: 0x370b30, Func Offset: 0x220
	// Line 788, Address: 0x370b40, Func Offset: 0x230
	// Line 789, Address: 0x370b4c, Func Offset: 0x23c
	// Line 790, Address: 0x370b54, Func Offset: 0x244
	// Line 791, Address: 0x370b5c, Func Offset: 0x24c
	// Line 792, Address: 0x370b64, Func Offset: 0x254
	// Line 793, Address: 0x370b6c, Func Offset: 0x25c
	// Line 794, Address: 0x370b74, Func Offset: 0x264
	// Line 800, Address: 0x370b78, Func Offset: 0x268
	// Line 801, Address: 0x370b7c, Func Offset: 0x26c
	// Line 804, Address: 0x370b80, Func Offset: 0x270
	// Line 805, Address: 0x370b88, Func Offset: 0x278
	// Line 806, Address: 0x370b8c, Func Offset: 0x27c
	// Line 808, Address: 0x370b94, Func Offset: 0x284
	// Line 809, Address: 0x370b9c, Func Offset: 0x28c
	// Line 810, Address: 0x370ba4, Func Offset: 0x294
	// Line 811, Address: 0x370bac, Func Offset: 0x29c
	// Line 813, Address: 0x370bc0, Func Offset: 0x2b0
	// Line 814, Address: 0x370bc8, Func Offset: 0x2b8
	// Line 815, Address: 0x370bcc, Func Offset: 0x2bc
	// Line 816, Address: 0x370bd4, Func Offset: 0x2c4
	// Line 826, Address: 0x370be0, Func Offset: 0x2d0
	// Line 848, Address: 0x370bf4, Func Offset: 0x2e4
	// Line 849, Address: 0x370bfc, Func Offset: 0x2ec
	// Func End, Address: 0x370c20, Func Offset: 0x310
}

// iPhysicsTrace2D_NOWALKTRIGGER__FP17tagxPhysicsObjectP8Vector3DP8Vector3DP8Vector3DPf
// Start address: 0x370c20
uint32 iPhysicsTrace2D_NOWALKTRIGGER(tagxPhysicsObject* o, Vector3D* a, Vector3D* b, Vector3D* c, float32* ct)
{
	uint32* maskp;
	uint32 mask;
	uint32 lineFloorMaskLo;
	uint32 lineFloorMaskHi;
	uint32 lineFloorMask;
	_RwV2d lineHitVector[2];
	int32 hittrigger;
	int32 j;
	int32 i;
	int32 hit;
	xTrigger* idx;
	xLine2D line;
	// Line 504, Address: 0x370c20, Func Offset: 0
	// Line 507, Address: 0x370c70, Func Offset: 0x50
	// Line 518, Address: 0x370c74, Func Offset: 0x54
	// Line 524, Address: 0x370d18, Func Offset: 0xf8
	// Line 525, Address: 0x370d20, Func Offset: 0x100
	// Line 526, Address: 0x370d28, Func Offset: 0x108
	// Line 527, Address: 0x370d30, Func Offset: 0x110
	// Line 533, Address: 0x370d38, Func Offset: 0x118
	// Line 534, Address: 0x370d4c, Func Offset: 0x12c
	// Line 535, Address: 0x370d54, Func Offset: 0x134
	// Line 537, Address: 0x370d58, Func Offset: 0x138
	// Line 539, Address: 0x370d60, Func Offset: 0x140
	// Line 541, Address: 0x370d6c, Func Offset: 0x14c
	// Line 543, Address: 0x370d70, Func Offset: 0x150
	// Line 545, Address: 0x370d7c, Func Offset: 0x15c
	// Line 547, Address: 0x370d8c, Func Offset: 0x16c
	// Line 549, Address: 0x370da0, Func Offset: 0x180
	// Line 553, Address: 0x370db0, Func Offset: 0x190
	// Line 555, Address: 0x370dc8, Func Offset: 0x1a8
	// Line 557, Address: 0x370dd8, Func Offset: 0x1b8
	// Line 559, Address: 0x370dec, Func Offset: 0x1cc
	// Line 560, Address: 0x370df4, Func Offset: 0x1d4
	// Line 562, Address: 0x370e04, Func Offset: 0x1e4
	// Line 564, Address: 0x370e18, Func Offset: 0x1f8
	// Line 565, Address: 0x370e20, Func Offset: 0x200
	// Line 567, Address: 0x370e30, Func Offset: 0x210
	// Line 570, Address: 0x370e44, Func Offset: 0x224
	// Line 573, Address: 0x370e48, Func Offset: 0x228
	// Line 574, Address: 0x370e4c, Func Offset: 0x22c
	// Line 576, Address: 0x370e64, Func Offset: 0x244
	// Line 579, Address: 0x370e70, Func Offset: 0x250
	// Line 581, Address: 0x370e78, Func Offset: 0x258
	// Line 582, Address: 0x370e7c, Func Offset: 0x25c
	// Line 583, Address: 0x370e80, Func Offset: 0x260
	// Line 584, Address: 0x370e8c, Func Offset: 0x26c
	// Line 585, Address: 0x370e98, Func Offset: 0x278
	// Line 586, Address: 0x370e9c, Func Offset: 0x27c
	// Line 587, Address: 0x370ea0, Func Offset: 0x280
	// Line 592, Address: 0x370ea8, Func Offset: 0x288
	// Line 594, Address: 0x370ec0, Func Offset: 0x2a0
	// Line 596, Address: 0x370edc, Func Offset: 0x2bc
	// Line 597, Address: 0x370ee0, Func Offset: 0x2c0
	// Line 598, Address: 0x370ee4, Func Offset: 0x2c4
	// Line 599, Address: 0x370ef0, Func Offset: 0x2d0
	// Line 600, Address: 0x370efc, Func Offset: 0x2dc
	// Line 602, Address: 0x370f00, Func Offset: 0x2e0
	// Line 605, Address: 0x370f08, Func Offset: 0x2e8
	// Line 607, Address: 0x370f24, Func Offset: 0x304
	// Line 608, Address: 0x370f28, Func Offset: 0x308
	// Line 609, Address: 0x370f2c, Func Offset: 0x30c
	// Line 610, Address: 0x370f38, Func Offset: 0x318
	// Line 611, Address: 0x370f44, Func Offset: 0x324
	// Line 615, Address: 0x370f48, Func Offset: 0x328
	// Line 616, Address: 0x370f60, Func Offset: 0x340
	// Line 671, Address: 0x371004, Func Offset: 0x3e4
	// Line 673, Address: 0x371024, Func Offset: 0x404
	// Line 676, Address: 0x37102c, Func Offset: 0x40c
	// Line 677, Address: 0x371038, Func Offset: 0x418
	// Line 679, Address: 0x37103c, Func Offset: 0x41c
	// Line 680, Address: 0x371044, Func Offset: 0x424
	// Line 682, Address: 0x37104c, Func Offset: 0x42c
	// Line 683, Address: 0x371074, Func Offset: 0x454
	// Line 685, Address: 0x37109c, Func Offset: 0x47c
	// Line 686, Address: 0x3710a0, Func Offset: 0x480
	// Line 687, Address: 0x3710a4, Func Offset: 0x484
	// Line 699, Address: 0x3710a8, Func Offset: 0x488
	// Line 700, Address: 0x3710ac, Func Offset: 0x48c
	// Func End, Address: 0x3710f0, Func Offset: 0x4d0
}

// iPhysicsTrace2D_WALKTRIGGER__FP17tagxPhysicsObjectP8Vector3DP8Vector3DP8Vector3DPf
// Start address: 0x3710f0
uint32 iPhysicsTrace2D_WALKTRIGGER(tagxPhysicsObject* o, Vector3D* a, Vector3D* b, Vector3D* c, float32* ct)
{
	Vector3D p2d;
	Vector3D p2d;
	uint32 mask;
	uint32 lineFloorMaskLo;
	uint32 lineFloorMaskHi;
	uint32 lineFloorMask;
	_RwV2d lineHitVector[2];
	uint32 i;
	int32 vis;
	xSpan* span;
	xSpanBuffer sb;
	xTrigger* idx;
	xTrigger* end;
	xTrigger* start;
	xLine2D line;
	// Line 181, Address: 0x3710f0, Func Offset: 0
	// Line 195, Address: 0x371138, Func Offset: 0x48
	// Line 197, Address: 0x37114c, Func Offset: 0x5c
	// Line 203, Address: 0x371158, Func Offset: 0x68
	// Line 204, Address: 0x371160, Func Offset: 0x70
	// Line 205, Address: 0x371168, Func Offset: 0x78
	// Line 206, Address: 0x371174, Func Offset: 0x84
	// Line 211, Address: 0x371180, Func Offset: 0x90
	// Line 212, Address: 0x371184, Func Offset: 0x94
	// Line 215, Address: 0x371188, Func Offset: 0x98
	// Line 216, Address: 0x37119c, Func Offset: 0xac
	// Line 217, Address: 0x3711a4, Func Offset: 0xb4
	// Line 223, Address: 0x3711a8, Func Offset: 0xb8
	// Line 225, Address: 0x3711b4, Func Offset: 0xc4
	// Line 226, Address: 0x3711c8, Func Offset: 0xd8
	// Line 228, Address: 0x3711d0, Func Offset: 0xe0
	// Line 230, Address: 0x3711dc, Func Offset: 0xec
	// Line 232, Address: 0x3711ec, Func Offset: 0xfc
	// Line 236, Address: 0x3711fc, Func Offset: 0x10c
	// Line 238, Address: 0x371204, Func Offset: 0x114
	// Line 239, Address: 0x37120c, Func Offset: 0x11c
	// Line 240, Address: 0x371210, Func Offset: 0x120
	// Line 241, Address: 0x371218, Func Offset: 0x128
	// Line 243, Address: 0x371234, Func Offset: 0x144
	// Line 247, Address: 0x371238, Func Offset: 0x148
	// Line 249, Address: 0x371240, Func Offset: 0x150
	// Line 250, Address: 0x371248, Func Offset: 0x158
	// Line 251, Address: 0x37124c, Func Offset: 0x15c
	// Line 252, Address: 0x371254, Func Offset: 0x164
	// Line 254, Address: 0x371270, Func Offset: 0x180
	// Line 257, Address: 0x371274, Func Offset: 0x184
	// Line 259, Address: 0x371278, Func Offset: 0x188
	// Line 264, Address: 0x371288, Func Offset: 0x198
	// Line 269, Address: 0x3712a8, Func Offset: 0x1b8
	// Line 272, Address: 0x3712b8, Func Offset: 0x1c8
	// Line 273, Address: 0x3712c0, Func Offset: 0x1d0
	// Line 274, Address: 0x3712c8, Func Offset: 0x1d8
	// Line 275, Address: 0x3712d0, Func Offset: 0x1e0
	// Line 277, Address: 0x3712d8, Func Offset: 0x1e8
	// Line 278, Address: 0x3712e0, Func Offset: 0x1f0
	// Line 283, Address: 0x3712ec, Func Offset: 0x1fc
	// Line 286, Address: 0x3712f0, Func Offset: 0x200
	// Line 287, Address: 0x3712f4, Func Offset: 0x204
	// Line 288, Address: 0x3712f8, Func Offset: 0x208
	// Line 289, Address: 0x3712fc, Func Offset: 0x20c
	// Line 293, Address: 0x371308, Func Offset: 0x218
	// Line 296, Address: 0x371310, Func Offset: 0x220
	// Line 301, Address: 0x37131c, Func Offset: 0x22c
	// Line 302, Address: 0x371324, Func Offset: 0x234
	// Line 303, Address: 0x371328, Func Offset: 0x238
	// Line 304, Address: 0x371330, Func Offset: 0x240
	// Line 307, Address: 0x37134c, Func Offset: 0x25c
	// Line 309, Address: 0x371358, Func Offset: 0x268
	// Line 310, Address: 0x371360, Func Offset: 0x270
	// Line 311, Address: 0x371364, Func Offset: 0x274
	// Line 312, Address: 0x37136c, Func Offset: 0x27c
	// Line 315, Address: 0x371388, Func Offset: 0x298
	// Line 321, Address: 0x371394, Func Offset: 0x2a4
	// Line 322, Address: 0x3713a0, Func Offset: 0x2b0
	// Line 323, Address: 0x3713a8, Func Offset: 0x2b8
	// Line 324, Address: 0x3713b0, Func Offset: 0x2c0
	// Line 325, Address: 0x3713bc, Func Offset: 0x2cc
	// Line 328, Address: 0x3713c8, Func Offset: 0x2d8
	// Line 330, Address: 0x3713d4, Func Offset: 0x2e4
	// Line 331, Address: 0x3713e8, Func Offset: 0x2f8
	// Line 333, Address: 0x3713f0, Func Offset: 0x300
	// Line 335, Address: 0x3713fc, Func Offset: 0x30c
	// Line 337, Address: 0x37140c, Func Offset: 0x31c
	// Line 339, Address: 0x371420, Func Offset: 0x330
	// Line 341, Address: 0x371424, Func Offset: 0x334
	// Line 344, Address: 0x371440, Func Offset: 0x350
	// Line 346, Address: 0x371450, Func Offset: 0x360
	// Line 354, Address: 0x371470, Func Offset: 0x380
	// Line 361, Address: 0x37148c, Func Offset: 0x39c
	// Line 362, Address: 0x371490, Func Offset: 0x3a0
	// Line 364, Address: 0x371498, Func Offset: 0x3a8
	// Line 366, Address: 0x3714b0, Func Offset: 0x3c0
	// Line 372, Address: 0x3714cc, Func Offset: 0x3dc
	// Line 373, Address: 0x3714d4, Func Offset: 0x3e4
	// Line 374, Address: 0x3714e0, Func Offset: 0x3f0
	// Line 375, Address: 0x3714e8, Func Offset: 0x3f8
	// Line 376, Address: 0x3714f0, Func Offset: 0x400
	// Line 377, Address: 0x371518, Func Offset: 0x428
	// Line 379, Address: 0x371540, Func Offset: 0x450
	// Line 380, Address: 0x37154c, Func Offset: 0x45c
	// Line 382, Address: 0x371558, Func Offset: 0x468
	// Line 385, Address: 0x371560, Func Offset: 0x470
	// Line 387, Address: 0x371564, Func Offset: 0x474
	// Line 389, Address: 0x37157c, Func Offset: 0x48c
	// Line 395, Address: 0x371598, Func Offset: 0x4a8
	// Line 396, Address: 0x3715a0, Func Offset: 0x4b0
	// Line 397, Address: 0x3715ac, Func Offset: 0x4bc
	// Line 398, Address: 0x3715b4, Func Offset: 0x4c4
	// Line 399, Address: 0x3715bc, Func Offset: 0x4cc
	// Line 400, Address: 0x3715e4, Func Offset: 0x4f4
	// Line 402, Address: 0x37160c, Func Offset: 0x51c
	// Line 403, Address: 0x371618, Func Offset: 0x528
	// Line 405, Address: 0x371624, Func Offset: 0x534
	// Line 408, Address: 0x37162c, Func Offset: 0x53c
	// Line 409, Address: 0x371634, Func Offset: 0x544
	// Line 410, Address: 0x371640, Func Offset: 0x550
	// Line 411, Address: 0x371648, Func Offset: 0x558
	// Line 412, Address: 0x371650, Func Offset: 0x560
	// Line 413, Address: 0x371658, Func Offset: 0x568
	// Line 415, Address: 0x371660, Func Offset: 0x570
	// Line 416, Address: 0x37166c, Func Offset: 0x57c
	// Line 420, Address: 0x371678, Func Offset: 0x588
	// Line 423, Address: 0x371680, Func Offset: 0x590
	// Line 424, Address: 0x37168c, Func Offset: 0x59c
	// Line 425, Address: 0x371694, Func Offset: 0x5a4
	// Line 426, Address: 0x37169c, Func Offset: 0x5ac
	// Line 427, Address: 0x3716a4, Func Offset: 0x5b4
	// Line 430, Address: 0x3716ac, Func Offset: 0x5bc
	// Line 431, Address: 0x3716b4, Func Offset: 0x5c4
	// Line 434, Address: 0x3716b8, Func Offset: 0x5c8
	// Line 436, Address: 0x3716c8, Func Offset: 0x5d8
	// Line 437, Address: 0x3716cc, Func Offset: 0x5dc
	// Line 438, Address: 0x3716d0, Func Offset: 0x5e0
	// Line 441, Address: 0x3716d4, Func Offset: 0x5e4
	// Line 443, Address: 0x3716e0, Func Offset: 0x5f0
	// Line 444, Address: 0x3716e8, Func Offset: 0x5f8
	// Func End, Address: 0x371724, Func Offset: 0x634
}

// iPhysicsTrace2D__FP17tagxPhysicsObjectP8Vector3DP8Vector3DP8Vector3DPf
// Start address: 0x371730
uint32 iPhysicsTrace2D(tagxPhysicsObject* o, Vector3D* a, Vector3D* b, Vector3D* c, float32* ct)
{
	// Line 109, Address: 0x371730, Func Offset: 0
	// Line 110, Address: 0x371760, Func Offset: 0x30
	// Line 114, Address: 0x371764, Func Offset: 0x34
	// Line 116, Address: 0x371770, Func Offset: 0x40
	// Line 117, Address: 0x371774, Func Offset: 0x44
	// Line 122, Address: 0x371780, Func Offset: 0x50
	// Line 124, Address: 0x371790, Func Offset: 0x60
	// Line 127, Address: 0x3717bc, Func Offset: 0x8c
	// Line 129, Address: 0x3717cc, Func Offset: 0x9c
	// Line 133, Address: 0x3717f8, Func Offset: 0xc8
	// Line 135, Address: 0x371808, Func Offset: 0xd8
	// Line 137, Address: 0x371824, Func Offset: 0xf4
	// Line 143, Address: 0x371850, Func Offset: 0x120
	// Line 145, Address: 0x371860, Func Offset: 0x130
	// Line 147, Address: 0x37188c, Func Offset: 0x15c
	// Line 150, Address: 0x37189c, Func Offset: 0x16c
	// Line 152, Address: 0x3718b8, Func Offset: 0x188
	// Line 161, Address: 0x3718e4, Func Offset: 0x1b4
	// Line 163, Address: 0x371910, Func Offset: 0x1e0
	// Line 173, Address: 0x37193c, Func Offset: 0x20c
	// Line 174, Address: 0x371944, Func Offset: 0x214
	// Func End, Address: 0x371968, Func Offset: 0x238
}

// iPhysicsObjectInitialize__FP17tagxPhysicsObject
// Start address: 0x371970
void iPhysicsObjectInitialize(tagxPhysicsObject* p)
{
	// Line 46, Address: 0x371970, Func Offset: 0
	// Line 47, Address: 0x371980, Func Offset: 0x10
	// Line 48, Address: 0x371a20, Func Offset: 0xb0
	// Line 50, Address: 0x371a28, Func Offset: 0xb8
	// Line 52, Address: 0x371a30, Func Offset: 0xc0
	// Line 53, Address: 0x371a34, Func Offset: 0xc4
	// Line 54, Address: 0x371a38, Func Offset: 0xc8
	// Line 56, Address: 0x371a3c, Func Offset: 0xcc
	// Line 57, Address: 0x371a40, Func Offset: 0xd0
	// Line 58, Address: 0x371a44, Func Offset: 0xd4
	// Line 60, Address: 0x371a48, Func Offset: 0xd8
	// Line 61, Address: 0x371a4c, Func Offset: 0xdc
	// Line 62, Address: 0x371a50, Func Offset: 0xe0
	// Line 64, Address: 0x371a54, Func Offset: 0xe4
	// Line 65, Address: 0x371a58, Func Offset: 0xe8
	// Line 66, Address: 0x371a5c, Func Offset: 0xec
	// Line 68, Address: 0x371a60, Func Offset: 0xf0
	// Line 69, Address: 0x371a68, Func Offset: 0xf8
	// Line 70, Address: 0x371a70, Func Offset: 0x100
	// Line 74, Address: 0x371a78, Func Offset: 0x108
	// Line 75, Address: 0x371a7c, Func Offset: 0x10c
	// Line 76, Address: 0x371a80, Func Offset: 0x110
	// Line 78, Address: 0x371a84, Func Offset: 0x114
	// Line 79, Address: 0x371a88, Func Offset: 0x118
	// Line 80, Address: 0x371a8c, Func Offset: 0x11c
	// Line 82, Address: 0x371a90, Func Offset: 0x120
	// Line 83, Address: 0x371a94, Func Offset: 0x124
	// Line 84, Address: 0x371a98, Func Offset: 0x128
	// Line 86, Address: 0x371a9c, Func Offset: 0x12c
	// Func End, Address: 0x371ab0, Func Offset: 0x140
}

