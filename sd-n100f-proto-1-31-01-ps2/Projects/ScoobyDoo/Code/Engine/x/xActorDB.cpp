typedef struct _RxClusterDefinition;
typedef struct _tagxEnv;
typedef struct _RwRaster;
typedef struct _RxOutputSpec;
typedef struct _RxPipelineNode;
typedef struct _xActor;
typedef struct tagiSkelRuntime;
typedef struct _rxHeapSuperBlockDescriptor;
typedef enum _rpWorldRenderOrder;
typedef struct _rwResEntryTag;
typedef struct _tagiEnvRuntime;
typedef struct xNavPoint;
typedef struct _RxHeap;
typedef struct p2Camera;
typedef struct _rxHeapBlockHeader;
typedef struct tagiJointRuntime;
typedef struct tagP2Mesh;
typedef enum _RxClusterValidityReq;
typedef struct tagiFloor;
typedef struct _rxHeapFreeBlock;
typedef struct _RpPolygon;
typedef struct tagxState;
typedef struct _FCinfo;
typedef struct xNavLink;
typedef struct _RxPipelineNodeTopSortData;
typedef struct iActionResource;
typedef struct iDisplayCamera;
typedef struct iActorRuntime;
typedef struct iTriggerResource;
typedef struct iActionRuntime;
typedef struct xScene;
typedef struct tagXAnimControl;
typedef struct _p2Geom;
typedef struct _RxPipelineNodeParam;
typedef struct _RxPipelineCluster;
typedef enum _rxEmbeddedPacketState;
typedef struct _RpWorldSector;
typedef struct xSkel;
typedef struct tagiModelRuntime;
typedef struct tagXStreamMDSDirectory;
typedef struct _RxNodeDefinition;
typedef enum _RxClusterValid;
typedef struct tagiSkelResource;
typedef struct iConditionResource;
typedef struct _RwSurfaceProperties;
typedef struct xTrigger;
typedef struct tagxPadAction;
typedef struct tagiAnimFrame;
typedef struct _RpMeshHeader;
typedef struct iConditionRuntime;
typedef struct _RpClump;
typedef struct _RpWorld;
typedef struct xMessage;
typedef struct _RwV3d;
typedef enum _RwTextureFilterMode;
typedef struct _RpCollSector;
typedef struct xEntryPoint;
typedef struct charstate;
typedef struct tagP2VERTEX;
typedef struct tagXAnim;
typedef struct _RxPipelineRequiresCluster;
typedef struct iEntryPointResource;
typedef struct tagiFloorTri;
typedef struct tagiModelResource;
typedef struct xRule;
typedef struct iRuleResource;
typedef struct tagiAnimResource;
typedef struct _iEntryPointRuntime;
typedef struct _RpSector;
typedef struct _xModel;
typedef struct tagP2MeshVertex;
typedef struct tagiAnimRuntime;
typedef struct tagP2Weight;
typedef struct tagxStateLink;
typedef struct _RxPipeline;
typedef struct tagxActorDBData;
typedef struct _RwLLLink;
typedef struct _rxReq;
typedef struct tagxActorDBMemMgr;
typedef struct XStreamHeader;
typedef struct Vector3D;
typedef struct _RpMaterialList;
typedef struct _RwObject;
typedef struct tagiJointResource;
typedef struct xCamera;
typedef struct xLight;
typedef struct _RpMaterial;
typedef struct tagXAnimTrigger;
typedef struct iLightResource;
typedef struct _iLightRuntime;
typedef struct _RwTexDictionary;
typedef struct tagxStateThread;
typedef struct Vector4D;
typedef struct xAction;
typedef struct _RxClusterRef;
typedef struct _RpVertexNormal;
typedef struct tagiMesh;
typedef struct tagXStreamDirectoryEntry;
typedef struct _RwTexCoords;
typedef struct xMarker;
typedef struct _RwRGBA;
typedef struct _RxIoSpec;
typedef struct iMarkerResource;
typedef struct xCondition;
typedef struct tagxStateMgr;
typedef struct tagxPhysicsObject;
typedef struct _RwTexture;
typedef struct _RxNodeMethods;
typedef struct p2CameraVersion;
typedef enum _RxClusterForcePresent;
typedef struct _RwBBox;
typedef struct _iVFXResource;
typedef struct _RxPacket;
typedef enum _RxNodeDefEditable;
typedef struct iCameraResource;
typedef struct _RxClusterUnion;
typedef struct _iSFXResource;
typedef struct _RxCluster;
typedef struct _RwLinkList;
typedef struct _iRenderEffects;
typedef struct tagMATRIX;
typedef enum _RwTextureAddressMode;

typedef void(*type_6)(_rwResEntryTag*);
typedef int32(*type_11)(_RxPipelineNode*, _RxPipelineNodeParam*);
typedef _RpWorldSector*(*type_15)(_RpWorldSector*);
typedef int32(*type_16)(_RxNodeDefinition*);
typedef void(*type_21)(_RxNodeDefinition*);
typedef void(*type_22)();
typedef int32(*type_29)(_RxPipelineNode*);
typedef void(*type_33)(_RxPipelineNode*);
typedef void(*type_36)(_xActor*, int32, tagXAnim*, tagXAnimTrigger*);
typedef int32(*type_39)(_RxPipelineNode*, _RxPipeline*);
typedef uint32(*type_46)(_RxPipelineNode*, uint32, uint32, void*);
typedef _RpClump*(*type_51)(_RpClump*, void*);

typedef _xActor type_0[4];
typedef _xActor type_1[1];
typedef uint8 type_2[4];
typedef _xActor type_3[4];
typedef _xActor type_4[4];
typedef uint8 type_5[3];
typedef uint16 type_7[3];
typedef iTriggerResource* type_8[20];
typedef _xActor type_9[2];
typedef uint16 type_10[3];
typedef _xActor type_12[1];
typedef iTriggerResource* type_13[20];
typedef _xActor type_14[1];
typedef _xActor type_17[1];
typedef iTriggerResource* type_18[20];
typedef tagXStreamDirectoryEntry type_19[1000];
typedef _xActor type_20[4];
typedef _xActor type_23[4];
typedef Vector3D type_24[4];
typedef Vector3D type_25[5];
typedef iTriggerResource* type_26[20];
typedef _xActor type_27[1];
typedef uint32 type_28[4];
typedef _xActor type_30[1];
typedef iTriggerResource* type_31[20];
typedef _xActor* type_32[40];
typedef uint16 type_34[3];
typedef int8 type_35[40];
typedef iTriggerResource* type_37[20];
typedef _xActor* type_38[13];
typedef _xActor type_40[1];
typedef iTriggerResource* type_41[20];
typedef _xActor type_42[4];
typedef _xActor type_43[4];
typedef iTriggerResource* type_44[20];
typedef _xActor type_45[1];
typedef _xActor type_47[4];
typedef _xActor type_48[4];
typedef iTriggerResource* type_49[20];
typedef _xActor type_50[4];
typedef _xActor type_52[4];
typedef _RxCluster type_53[1];
typedef iTriggerResource* type_54[20];
typedef int8 type_55[2048];
typedef _xActor type_56[1];
typedef iTriggerResource* type_57[20];
typedef _xActor type_58[4];
typedef tagxState* type_59[10];
typedef _xActor type_60[4];
typedef float32 type_61[3];
typedef iTriggerResource* type_62[20];
typedef _xActor type_63[4];
typedef _xActor type_64[1];
typedef _xActor type_65[1];
typedef _xActor type_66[1];
typedef iLightResource type_67[2];
typedef int8 type_68[32];
typedef _xActor type_69[1];
typedef int8 type_70[32];
typedef _xActor type_71[1];
typedef _xActor type_72[1];
typedef _xActor type_73[1];
typedef uint8 type_74[3];
typedef _xActor type_75[1];
typedef int8 type_76[128];
typedef _xActor type_77[4];
typedef charstate type_78[40];
typedef uint8 type_79[4];
typedef _xActor type_80[4];
typedef uint8 type_81[4];
typedef _xActor type_82[4];
typedef uint8 type_83[4];
typedef _xActor type_84[1];
typedef _xActor type_85[1];
typedef int32 type_86[7];
typedef _xActor type_87[1];
typedef Vector3D type_88[4];
typedef tagxStateThread type_89[7];
typedef p2CameraVersion type_90[5];

struct _RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct _tagxEnv
{
	_tagiEnvRuntime* m_runtime;
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

struct tagiSkelRuntime
{
	tagiJointRuntime* m_joints;
};

struct _rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	_rxHeapSuperBlockDescriptor* next;
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

struct _RxHeap
{
	uint32 superBlockSize;
	_rxHeapSuperBlockDescriptor* head;
	_rxHeapBlockHeader* headBlock;
	_rxHeapFreeBlock* freeBlocks;
	uint32 entriesAlloced;
	uint32 entriesUsed;
};

struct p2Camera
{
	Vector3D m_pos;
	Vector3D m_rot;
	float32 m_fov;
};

struct _rxHeapBlockHeader
{
	_rxHeapBlockHeader* prev;
	_rxHeapBlockHeader* next;
	uint32 size;
	_rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
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

struct _rxHeapFreeBlock
{
	uint32 size;
	_rxHeapBlockHeader* ptr;
};

struct _RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
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

struct _FCinfo
{
	uint16 nidx[3];
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

struct _RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	_rxReq* req;
	void* initialisationData;
	uint32 initialisationDataSize;
};

struct iActionResource
{
	uint8 m_cmdType;
	uint8 m_cmd;
	uint16 pad;
	uint32 m_cmdParameter;
};

struct iDisplayCamera
{
	Vector3D m_pos;
	Vector3D m_rot;
	float32 m_fov;
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

struct _p2Geom
{
	uint32 m_meshCount;
	tagP2Mesh* m_mesh;
	_iRenderEffects effects;
	_RpClump* m_clump;
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

struct xSkel
{
	tagiSkelResource* m_resource;
	tagiSkelRuntime* m_runtime;
};

struct tagiModelRuntime
{
	int32 placeholder;
};

struct tagXStreamMDSDirectory
{
	uint32 count;
	tagXStreamDirectoryEntry directory[1000];
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

struct tagiSkelResource
{
	uint32 m_assetID;
	uint32 m_jointCount;
	tagiJointResource* m_joints;
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

struct _RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

struct xTrigger
{
	iTriggerResource* m_resource;
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

struct iConditionRuntime
{
	xCondition* m_operand;
	uint16 m_match;
	uint16 m_trigger;
};

struct _RpClump
{
	_RwObject object;
	_RwLinkList atomicList;
	_RwLLLink inWorldLink;
	_RpClump*(*callback)(_RpClump*, void*);
	uint16 renderFrame;
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

struct xMessage
{
	uint32 flags;
	int32 senderType;
	int32 senderId;
	int32 recipientType;
	int32 recipientId;
	uint32 message;
	uint32 data1;
	uint32 data2;
	uint32 data3;
	uint32 data4;
	float32 deliveryTime;
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

struct _RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
};

struct xEntryPoint
{
	iEntryPointResource* m_resource;
	_iEntryPointRuntime* m_runtime;
};

struct charstate
{
	tagxState* m_states;
	int32 m_animationBasedMovement;
	void(*m_triggerHandler)(_xActor*, int32, tagXAnim*, tagXAnimTrigger*);
	int32 m_initialized;
	void(*m_initFunction)();
	void(*m_resetFunction)();
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

struct _RxPipelineRequiresCluster
{
	_RxClusterDefinition* clusterDef;
	_RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
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

struct tagiFloorTri
{
	uint16 m_v[3];
	uint16 m_n;
};

struct tagiModelResource
{
	uint32 m_assetID;
	int32 m_meshCount;
	tagP2Mesh* m_mesh;
};

struct xRule
{
	iRuleResource* m_resource;
	void* m_runtime;
};

struct iRuleResource
{
	uint32 m_actionCount;
	xAction* m_action;
	uint32 m_conditionCount;
	xCondition* m_condition;
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

struct _iEntryPointRuntime
{
	uint32 m_enabled;
};

struct _RpSector
{
	int32 type;
};

struct _xModel
{
	tagiModelResource* m_resource;
	tagiModelRuntime* m_runtime;
};

struct tagP2MeshVertex
{
	float32 m_x;
	float32 m_y;
	float32 m_z;
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

struct tagxStateLink
{
	uint8 m_command;
	uint8 m_flags;
	uint16 m_state;
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

struct _RwLLLink
{
	_RwLLLink* next;
	_RwLLLink* prev;
};

struct _rxReq
{
};

struct tagxActorDBMemMgr
{
	_xActor* usedBy;
	_xModel model;
	xSkel skeleton;
	iActorRuntime actor;
	tagxStateMgr state;
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

struct Vector3D
{
	float32 x;
	float32 y;
	float32 z;
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

struct tagiJointResource
{
	tagMATRIX m_orientMatrix;
	Vector3D m_home;
	uint32 m_parent;
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

struct _RpMaterial
{
	_RwTexture* texture;
	_RwRGBA color;
	_RxPipeline* pipeline;
	_RwSurfaceProperties surfaceProps;
	int16 refCount;
	int16 pad;
};

struct tagXAnimTrigger
{
	uint16 m_frame;
	uint16 m_type;
	uint32 m_data;
};

struct iLightResource
{
	uint32 m_type;
	Vector3D m_pos;
	Vector3D m_rot;
	Vector3D m_color;
	int32 m_fov;
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

struct _RwTexDictionary
{
	_RwObject object;
	_RwLinkList texturesInDict;
	_RwLLLink lInInstance;
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

struct _RxClusterRef
{
	_RxClusterDefinition* clusterDef;
	_RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct _RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

struct tagiMesh
{
};

struct tagXStreamDirectoryEntry
{
	uint32 id;
	uint32 type;
	uint32 offset;
	uint32 length;
};

struct _RwTexCoords
{
	float32 u;
	float32 v;
};

struct xMarker
{
	iMarkerResource* m_resource;
	void** m_runtime;
};

struct _RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct _RxIoSpec
{
	uint32 numClustersOfInterest;
	_RxClusterRef* clustersOfInterest;
	_RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	_RxOutputSpec* outputs;
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

struct iCameraResource
{
	uint16 m_plateOffset;
	uint16 m_versions;
	p2CameraVersion m_version[5];
	uint32 m_frameCount;
	p2Camera* m_cameras;
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

enum _RwTextureAddressMode
{
	rwTEXTUREADDRESSNATEXTUREADDRESS,
	rwTEXTUREADDRESSWRAP,
	rwTEXTUREADDRESSMIRROR,
	rwTEXTUREADDRESSCLAMP,
	rwTEXTUREADDRESSBORDER,
	rwTEXTUREADDRESSMODEFORCEENUMSIZEINT = 0x7fffffff
};

tagxActorDBData gActorDBData;
tagxActorDBData* gadb;
charstate* sinfo;
charstate charState[40];
int32 padActionMethodIndex;
int32 gLOSOld;
int8 vAssertBuf2[128];
XStreamHeader currentHeader;
xScene* xScene_current;
int32 gDebugDrawDebugInfo;

void xActorDBSetPositionActor(int32 objectType, int32 actorID, int32 toObjectType, int32 toActorID);
void xActorDBSetPositionNavigationPoint(int32 objectType, int32 actorID, int32 navID);
void xActorDBSetPosition(int32 objectType, int32 actorID, Vector3D* p);
_xActor* xActorDBGetActor(int32 objectType, int32 actorID);
int32 xActorDBConsoleAction(int32 objectType, int32 actorID, int32 action);
void xActorDBSetRoute(int32 objectType, int32 actorID, int32 routeID);
void xActorDBIdle();
void xActorDBDebugRoute();
void xActorDBDebug();
void xActorDBSlide(_xActor* a);
void xActorDBPadActionSendRemap(int32 type, int32 id, int32 count, tagxPadAction* actions);
void xActorDBDestroy(int32 objectType, int32 id);
void xActorDBSetup(int32 type, int32 id, uint32 modelType, uint32 skeletonType, uint32 textureType);
int32 xActorDBCreate(int32 type, uint32 modelType, uint32 skeletonType, uint32 textureType);
void xActorDBActiveRemove(_xActor* a);
void xActorDBDraw();
void xActorDBReInitializeInterpreter();
void xActorDBFullReset();
void xActorDBLevelReset();
void xActorDBInitialize();

// xActorDBSetPositionActor__Fiiii
// Start address: 0x3667e0
void xActorDBSetPositionActor(int32 objectType, int32 actorID, int32 toObjectType, int32 toActorID)
{
	// Line 1764, Address: 0x3667e0, Func Offset: 0
	// Line 1765, Address: 0x366808, Func Offset: 0x28
	// Line 1766, Address: 0x3668a8, Func Offset: 0xc8
	// Line 1767, Address: 0x366958, Func Offset: 0x178
	// Line 1768, Address: 0x3669f8, Func Offset: 0x218
	// Line 1770, Address: 0x366aa8, Func Offset: 0x2c8
	// Line 1775, Address: 0x366b48, Func Offset: 0x368
	// Func End, Address: 0x366b68, Func Offset: 0x388
}

// xActorDBSetPositionNavigationPoint__Fiii
// Start address: 0x366b70
void xActorDBSetPositionNavigationPoint(int32 objectType, int32 actorID, int32 navID)
{
	xNavPoint* nav;
	// Line 1745, Address: 0x366b70, Func Offset: 0
	// Line 1748, Address: 0x366b90, Func Offset: 0x20
	// Line 1750, Address: 0x366c34, Func Offset: 0xc4
	// Line 1752, Address: 0x366c48, Func Offset: 0xd8
	// Line 1753, Address: 0x366c68, Func Offset: 0xf8
	// Line 1754, Address: 0x366c9c, Func Offset: 0x12c
	// Line 1756, Address: 0x366ca4, Func Offset: 0x134
	// Line 1757, Address: 0x366cb8, Func Offset: 0x148
	// Func End, Address: 0x366cd4, Func Offset: 0x164
}

// xActorDBSetPosition__FiiP8Vector3D
// Start address: 0x366ce0
void xActorDBSetPosition(int32 objectType, int32 actorID, Vector3D* p)
{
	// Line 1704, Address: 0x366ce0, Func Offset: 0
	// Line 1705, Address: 0x366d00, Func Offset: 0x20
	// Line 1706, Address: 0x366da0, Func Offset: 0xc0
	// Line 1708, Address: 0x366e50, Func Offset: 0x170
	// Line 1709, Address: 0x366e84, Func Offset: 0x1a4
	// Func End, Address: 0x366ea0, Func Offset: 0x1c0
}

// xActorDBGetActor__Fii
// Start address: 0x366ea0
_xActor* xActorDBGetActor(int32 objectType, int32 actorID)
{
	// Line 1689, Address: 0x366ea0, Func Offset: 0
	// Line 1690, Address: 0x366eb8, Func Offset: 0x18
	// Line 1692, Address: 0x366ec0, Func Offset: 0x20
	// Line 1693, Address: 0x366f70, Func Offset: 0xd0
	// Line 1695, Address: 0x366f98, Func Offset: 0xf8
	// Line 1696, Address: 0x366f9c, Func Offset: 0xfc
	// Func End, Address: 0x366fb4, Func Offset: 0x114
}

// xActorDBConsoleAction__Fiii
// Start address: 0x366fc0
int32 xActorDBConsoleAction(int32 objectType, int32 actorID, int32 action)
{
	tagxPadAction a;
	// Line 1646, Address: 0x366fc0, Func Offset: 0
	// Line 1650, Address: 0x366fe0, Func Offset: 0x20
	// Line 1651, Address: 0x367080, Func Offset: 0xc0
	// Line 1653, Address: 0x367130, Func Offset: 0x170
	// Line 1654, Address: 0x367134, Func Offset: 0x174
	// Line 1655, Address: 0x367168, Func Offset: 0x1a8
	// Func End, Address: 0x367184, Func Offset: 0x1c4
}

// xActorDBSetRoute__Fiii
// Start address: 0x367190
void xActorDBSetRoute(int32 objectType, int32 actorID, int32 routeID)
{
	iActorRuntime* r;
	// Line 1592, Address: 0x367190, Func Offset: 0
	// Line 1596, Address: 0x3671b4, Func Offset: 0x24
	// Line 1597, Address: 0x367254, Func Offset: 0xc4
	// Line 1600, Address: 0x367304, Func Offset: 0x174
	// Line 1601, Address: 0x367328, Func Offset: 0x198
	// Line 1603, Address: 0x3673c8, Func Offset: 0x238
	// Line 1604, Address: 0x3673cc, Func Offset: 0x23c
	// Line 1606, Address: 0x3673d0, Func Offset: 0x240
	// Line 1609, Address: 0x3673dc, Func Offset: 0x24c
	// Line 1611, Address: 0x367408, Func Offset: 0x278
	// Line 1614, Address: 0x367410, Func Offset: 0x280
	// Line 1629, Address: 0x36743c, Func Offset: 0x2ac
	// Func End, Address: 0x36745c, Func Offset: 0x2cc
}

// xActorDBIdle__Fv
// Start address: 0x367460
void xActorDBIdle()
{
	xMessage theMessage;
	iActorRuntime* r;
	_xActor* a;
	int32 i;
	// Line 1435, Address: 0x367460, Func Offset: 0
	// Line 1448, Address: 0x367474, Func Offset: 0x14
	// Line 1450, Address: 0x367480, Func Offset: 0x20
	// Line 1451, Address: 0x367490, Func Offset: 0x30
	// Line 1453, Address: 0x367498, Func Offset: 0x38
	// Line 1455, Address: 0x3674b4, Func Offset: 0x54
	// Line 1458, Address: 0x3674c0, Func Offset: 0x60
	// Line 1465, Address: 0x3674d4, Func Offset: 0x74
	// Line 1467, Address: 0x3674e0, Func Offset: 0x80
	// Line 1468, Address: 0x3674f0, Func Offset: 0x90
	// Line 1471, Address: 0x3674f8, Func Offset: 0x98
	// Line 1475, Address: 0x367524, Func Offset: 0xc4
	// Line 1476, Address: 0x367528, Func Offset: 0xc8
	// Line 1479, Address: 0x367530, Func Offset: 0xd0
	// Line 1482, Address: 0x36753c, Func Offset: 0xdc
	// Line 1483, Address: 0x367540, Func Offset: 0xe0
	// Line 1484, Address: 0x367544, Func Offset: 0xe4
	// Line 1486, Address: 0x367548, Func Offset: 0xe8
	// Line 1488, Address: 0x367568, Func Offset: 0x108
	// Line 1491, Address: 0x367574, Func Offset: 0x114
	// Line 1499, Address: 0x3675ac, Func Offset: 0x14c
	// Line 1500, Address: 0x3675b4, Func Offset: 0x154
	// Line 1501, Address: 0x3675bc, Func Offset: 0x15c
	// Line 1502, Address: 0x3675c0, Func Offset: 0x160
	// Line 1503, Address: 0x3675c4, Func Offset: 0x164
	// Line 1505, Address: 0x3675cc, Func Offset: 0x16c
	// Line 1577, Address: 0x3675d8, Func Offset: 0x178
	// Line 1582, Address: 0x3675e4, Func Offset: 0x184
	// Line 1583, Address: 0x3675e8, Func Offset: 0x188
	// Line 1584, Address: 0x3675fc, Func Offset: 0x19c
	// Func End, Address: 0x367618, Func Offset: 0x1b8
}

// xActorDBDebugRoute__Fi
// Start address: 0x367620
void xActorDBDebugRoute()
{
	// Line 1420, Address: 0x367620, Func Offset: 0
	// Func End, Address: 0x367628, Func Offset: 0x8
}

// xActorDBDebug__Fv
// Start address: 0x367630
void xActorDBDebug()
{
	// Line 1356, Address: 0x367630, Func Offset: 0
	// Func End, Address: 0x367638, Func Offset: 0x8
}

// xActorDBSlide__FP7_xActor
// Start address: 0x367640
void xActorDBSlide(_xActor* a)
{
	int32 oldApplyVel;
	int32 flip;
	Vector3D tmp;
	Vector3D vhn;
	Vector3D d;
	tagxPhysicsObject* o;
	iActorRuntime* r;
	// Line 1230, Address: 0x367640, Func Offset: 0
	// Line 1236, Address: 0x367654, Func Offset: 0x14
	// Line 1237, Address: 0x3676f4, Func Offset: 0xb4
	// Line 1239, Address: 0x3676f8, Func Offset: 0xb8
	// Line 1240, Address: 0x367798, Func Offset: 0x158
	// Line 1245, Address: 0x36779c, Func Offset: 0x15c
	// Line 1246, Address: 0x3677a4, Func Offset: 0x164
	// Line 1248, Address: 0x3677ac, Func Offset: 0x16c
	// Line 1252, Address: 0x3677b4, Func Offset: 0x174
	// Line 1255, Address: 0x3677c8, Func Offset: 0x188
	// Line 1258, Address: 0x3677d8, Func Offset: 0x198
	// Line 1259, Address: 0x3677dc, Func Offset: 0x19c
	// Line 1261, Address: 0x36784c, Func Offset: 0x20c
	// Line 1263, Address: 0x367850, Func Offset: 0x210
	// Line 1265, Address: 0x3678c0, Func Offset: 0x280
	// Line 1267, Address: 0x3678c4, Func Offset: 0x284
	// Line 1268, Address: 0x3678cc, Func Offset: 0x28c
	// Line 1272, Address: 0x3678d8, Func Offset: 0x298
	// Line 1274, Address: 0x3678e4, Func Offset: 0x2a4
	// Line 1275, Address: 0x3678f8, Func Offset: 0x2b8
	// Line 1282, Address: 0x367930, Func Offset: 0x2f0
	// Line 1285, Address: 0x367950, Func Offset: 0x310
	// Line 1287, Address: 0x367958, Func Offset: 0x318
	// Line 1289, Address: 0x367974, Func Offset: 0x334
	// Line 1291, Address: 0x367980, Func Offset: 0x340
	// Line 1292, Address: 0x367990, Func Offset: 0x350
	// Line 1293, Address: 0x367994, Func Offset: 0x354
	// Line 1294, Address: 0x367998, Func Offset: 0x358
	// Line 1295, Address: 0x36799c, Func Offset: 0x35c
	// Func End, Address: 0x3679b4, Func Offset: 0x374
}

// xActorDBPadActionSendRemap__FiiiP13tagxPadAction
// Start address: 0x3679c0
void xActorDBPadActionSendRemap(int32 type, int32 id, int32 count, tagxPadAction* actions)
{
	uint32 remappedAction;
	int32 i;
	iActorRuntime* r;
	tagXAnimControl* active;
	tagxPhysicsObject* phys;
	_xActor* actor;
	tagXAnim* anim;
	tagxPadAction* a;
	// Line 1021, Address: 0x3679c0, Func Offset: 0
	// Line 1032, Address: 0x3679ec, Func Offset: 0x2c
	// Line 1033, Address: 0x367a8c, Func Offset: 0xcc
	// Line 1035, Address: 0x367b3c, Func Offset: 0x17c
	// Line 1036, Address: 0x367b48, Func Offset: 0x188
	// Line 1042, Address: 0x367b68, Func Offset: 0x1a8
	// Line 1048, Address: 0x367b74, Func Offset: 0x1b4
	// Line 1055, Address: 0x367bac, Func Offset: 0x1ec
	// Line 1057, Address: 0x367bcc, Func Offset: 0x20c
	// Line 1058, Address: 0x367be4, Func Offset: 0x224
	// Line 1059, Address: 0x367be8, Func Offset: 0x228
	// Line 1060, Address: 0x367bfc, Func Offset: 0x23c
	// Func End, Address: 0x367c20, Func Offset: 0x260
}

// xActorDBDestroy__Fii
// Start address: 0x367c20
void xActorDBDestroy(int32 objectType, int32 id)
{
	_xActor* a;
	iActorRuntime* r;
	// Line 972, Address: 0x367c20, Func Offset: 0
	// Line 976, Address: 0x367c38, Func Offset: 0x18
	// Line 977, Address: 0x367cd8, Func Offset: 0xb8
	// Line 980, Address: 0x367d88, Func Offset: 0x168
	// Line 983, Address: 0x367da8, Func Offset: 0x188
	// Line 985, Address: 0x367e98, Func Offset: 0x278
	// Line 986, Address: 0x367e9c, Func Offset: 0x27c
	// Line 988, Address: 0x367ea4, Func Offset: 0x284
	// Line 990, Address: 0x367eb0, Func Offset: 0x290
	// Line 1002, Address: 0x367eb4, Func Offset: 0x294
	// Func End, Address: 0x367ecc, Func Offset: 0x2ac
}

// xActorDBSetup__FiiUiUiUi
// Start address: 0x367ed0
void xActorDBSetup(int32 type, int32 id, uint32 modelType, uint32 skeletonType, uint32 textureType)
{
	tagxActorDBMemMgr* mem;
	xSkel* skeleton;
	_xModel* model;
	iActorRuntime* r;
	_xActor* a;
	// Line 841, Address: 0x367ed0, Func Offset: 0
	// Line 849, Address: 0x367f10, Func Offset: 0x40
	// Line 850, Address: 0x367fb0, Func Offset: 0xe0
	// Line 853, Address: 0x368060, Func Offset: 0x190
	// Line 855, Address: 0x368080, Func Offset: 0x1b0
	// Line 856, Address: 0x368124, Func Offset: 0x254
	// Line 891, Address: 0x3681c8, Func Offset: 0x2f8
	// Line 892, Address: 0x3681e8, Func Offset: 0x318
	// Line 893, Address: 0x3681ec, Func Offset: 0x31c
	// Line 894, Address: 0x3681f0, Func Offset: 0x320
	// Line 895, Address: 0x3681f8, Func Offset: 0x328
	// Line 896, Address: 0x368200, Func Offset: 0x330
	// Line 899, Address: 0x368204, Func Offset: 0x334
	// Line 901, Address: 0x368210, Func Offset: 0x340
	// Line 902, Address: 0x368214, Func Offset: 0x344
	// Line 906, Address: 0x368218, Func Offset: 0x348
	// Line 918, Address: 0x368224, Func Offset: 0x354
	// Line 919, Address: 0x36823c, Func Offset: 0x36c
	// Line 924, Address: 0x36824c, Func Offset: 0x37c
	// Line 925, Address: 0x368264, Func Offset: 0x394
	// Line 930, Address: 0x368274, Func Offset: 0x3a4
	// Line 933, Address: 0x368290, Func Offset: 0x3c0
	// Line 934, Address: 0x3682ac, Func Offset: 0x3dc
	// Line 936, Address: 0x3682bc, Func Offset: 0x3ec
	// Line 937, Address: 0x3682cc, Func Offset: 0x3fc
	// Line 939, Address: 0x3682dc, Func Offset: 0x40c
	// Line 941, Address: 0x3682e8, Func Offset: 0x418
	// Line 945, Address: 0x36830c, Func Offset: 0x43c
	// Line 948, Address: 0x36831c, Func Offset: 0x44c
	// Line 950, Address: 0x368328, Func Offset: 0x458
	// Line 953, Address: 0x36833c, Func Offset: 0x46c
	// Func End, Address: 0x368370, Func Offset: 0x4a0
}

// xActorDBCreate__FiUiUiUi
// Start address: 0x368370
int32 xActorDBCreate(int32 type, uint32 modelType, uint32 skeletonType, uint32 textureType)
{
	int32 a;
	// Line 801, Address: 0x368370, Func Offset: 0
	// Line 804, Address: 0x36839c, Func Offset: 0x2c
	// Line 807, Address: 0x36844c, Func Offset: 0xdc
	// Line 809, Address: 0x368458, Func Offset: 0xe8
	// Line 812, Address: 0x368484, Func Offset: 0x114
	// Line 815, Address: 0x3684a0, Func Offset: 0x130
	// Line 818, Address: 0x368568, Func Offset: 0x1f8
	// Line 819, Address: 0x368678, Func Offset: 0x308
	// Line 820, Address: 0x368684, Func Offset: 0x314
	// Line 823, Address: 0x3686a0, Func Offset: 0x330
	// Line 824, Address: 0x3686a4, Func Offset: 0x334
	// Func End, Address: 0x3686c8, Func Offset: 0x358
}

// xActorDBActiveRemove__FP7_xActor
// Start address: 0x3686d0
void xActorDBActiveRemove(_xActor* a)
{
	int32 i;
	// Line 773, Address: 0x3686d0, Func Offset: 0
	// Line 776, Address: 0x3686e0, Func Offset: 0x10
	// Line 777, Address: 0x368780, Func Offset: 0xb0
	// Line 779, Address: 0x36878c, Func Offset: 0xbc
	// Line 781, Address: 0x3687a4, Func Offset: 0xd4
	// Line 782, Address: 0x3687b4, Func Offset: 0xe4
	// Line 784, Address: 0x3687bc, Func Offset: 0xec
	// Line 786, Address: 0x3687cc, Func Offset: 0xfc
	// Func End, Address: 0x3687e0, Func Offset: 0x110
}

// xActorDBDraw__Fv
// Start address: 0x3687e0
void xActorDBDraw()
{
	_xActor* a;
	int32 i;
	// Line 732, Address: 0x3687e0, Func Offset: 0
	// Line 735, Address: 0x3687ec, Func Offset: 0xc
	// Line 737, Address: 0x3687f8, Func Offset: 0x18
	// Line 739, Address: 0x368808, Func Offset: 0x28
	// Line 741, Address: 0x368810, Func Offset: 0x30
	// Line 742, Address: 0x368830, Func Offset: 0x50
	// Line 744, Address: 0x368838, Func Offset: 0x58
	// Line 745, Address: 0x36884c, Func Offset: 0x6c
	// Func End, Address: 0x368860, Func Offset: 0x80
}

// xActorDBReInitializeInterpreter__Fv
// Start address: 0x368860
void xActorDBReInitializeInterpreter()
{
	// Line 705, Address: 0x368860, Func Offset: 0
	// Line 706, Address: 0x368864, Func Offset: 0x4
	// Func End, Address: 0x36886c, Func Offset: 0xc
}

// xActorDBFullReset__Fv
// Start address: 0x368870
void xActorDBFullReset()
{
	int32 i;
	// Line 672, Address: 0x368870, Func Offset: 0
	// Line 681, Address: 0x36887c, Func Offset: 0xc
	// Line 683, Address: 0x368888, Func Offset: 0x18
	// Line 685, Address: 0x3688ac, Func Offset: 0x3c
	// Line 686, Address: 0x3688d0, Func Offset: 0x60
	// Line 688, Address: 0x3688f8, Func Offset: 0x88
	// Line 689, Address: 0x368914, Func Offset: 0xa4
	// Line 690, Address: 0x368918, Func Offset: 0xa8
	// Line 691, Address: 0x36892c, Func Offset: 0xbc
	// Func End, Address: 0x368940, Func Offset: 0xd0
}

// xActorDBLevelReset__Fv
// Start address: 0x368940
void xActorDBLevelReset()
{
	int32 i;
	// Line 642, Address: 0x368940, Func Offset: 0
	// Line 651, Address: 0x36894c, Func Offset: 0xc
	// Line 653, Address: 0x368958, Func Offset: 0x18
	// Line 655, Address: 0x36897c, Func Offset: 0x3c
	// Line 656, Address: 0x3689a0, Func Offset: 0x60
	// Line 658, Address: 0x3689c8, Func Offset: 0x88
	// Line 659, Address: 0x3689e4, Func Offset: 0xa4
	// Line 660, Address: 0x3689e8, Func Offset: 0xa8
	// Line 661, Address: 0x3689fc, Func Offset: 0xbc
	// Func End, Address: 0x368a10, Func Offset: 0xd0
}

// xActorDBInitialize__Fv
// Start address: 0x368a10
void xActorDBInitialize()
{
	int32 a;
	int32 i;
	// Line 416, Address: 0x368a10, Func Offset: 0
	// Line 419, Address: 0x368a1c, Func Offset: 0xc
	// Line 421, Address: 0x368a28, Func Offset: 0x18
	// Line 424, Address: 0x368a50, Func Offset: 0x40
	// Line 425, Address: 0x368a64, Func Offset: 0x54
	// Line 426, Address: 0x368a74, Func Offset: 0x64
	// Line 428, Address: 0x368a7c, Func Offset: 0x6c
	// Line 429, Address: 0x368a8c, Func Offset: 0x7c
	// Line 430, Address: 0x368a98, Func Offset: 0x88
	// Line 432, Address: 0x368aa0, Func Offset: 0x90
	// Line 433, Address: 0x368ab8, Func Offset: 0xa8
	// Line 434, Address: 0x368ac8, Func Offset: 0xb8
	// Line 436, Address: 0x368ad0, Func Offset: 0xc0
	// Line 437, Address: 0x368ae0, Func Offset: 0xd0
	// Line 438, Address: 0x368aec, Func Offset: 0xdc
	// Line 440, Address: 0x368af4, Func Offset: 0xe4
	// Line 441, Address: 0x368b0c, Func Offset: 0xfc
	// Line 442, Address: 0x368b1c, Func Offset: 0x10c
	// Line 444, Address: 0x368b24, Func Offset: 0x114
	// Line 445, Address: 0x368b3c, Func Offset: 0x12c
	// Line 446, Address: 0x368b4c, Func Offset: 0x13c
	// Line 448, Address: 0x368b54, Func Offset: 0x144
	// Line 449, Address: 0x368b6c, Func Offset: 0x15c
	// Line 450, Address: 0x368b7c, Func Offset: 0x16c
	// Line 452, Address: 0x368b84, Func Offset: 0x174
	// Line 453, Address: 0x368b9c, Func Offset: 0x18c
	// Line 454, Address: 0x368bac, Func Offset: 0x19c
	// Line 456, Address: 0x368bb4, Func Offset: 0x1a4
	// Line 457, Address: 0x368bcc, Func Offset: 0x1bc
	// Line 458, Address: 0x368bdc, Func Offset: 0x1cc
	// Line 460, Address: 0x368be4, Func Offset: 0x1d4
	// Line 461, Address: 0x368bfc, Func Offset: 0x1ec
	// Line 462, Address: 0x368c0c, Func Offset: 0x1fc
	// Line 464, Address: 0x368c14, Func Offset: 0x204
	// Line 465, Address: 0x368c2c, Func Offset: 0x21c
	// Line 466, Address: 0x368c3c, Func Offset: 0x22c
	// Line 468, Address: 0x368c44, Func Offset: 0x234
	// Line 469, Address: 0x368c5c, Func Offset: 0x24c
	// Line 470, Address: 0x368c6c, Func Offset: 0x25c
	// Line 472, Address: 0x368c74, Func Offset: 0x264
	// Line 473, Address: 0x368c8c, Func Offset: 0x27c
	// Line 474, Address: 0x368c9c, Func Offset: 0x28c
	// Line 476, Address: 0x368ca4, Func Offset: 0x294
	// Line 477, Address: 0x368cbc, Func Offset: 0x2ac
	// Line 478, Address: 0x368ccc, Func Offset: 0x2bc
	// Line 480, Address: 0x368cd4, Func Offset: 0x2c4
	// Line 481, Address: 0x368cec, Func Offset: 0x2dc
	// Line 482, Address: 0x368cfc, Func Offset: 0x2ec
	// Line 484, Address: 0x368d04, Func Offset: 0x2f4
	// Line 485, Address: 0x368d1c, Func Offset: 0x30c
	// Line 486, Address: 0x368d2c, Func Offset: 0x31c
	// Line 488, Address: 0x368d34, Func Offset: 0x324
	// Line 489, Address: 0x368d4c, Func Offset: 0x33c
	// Line 490, Address: 0x368d5c, Func Offset: 0x34c
	// Line 492, Address: 0x368d64, Func Offset: 0x354
	// Line 493, Address: 0x368d7c, Func Offset: 0x36c
	// Line 494, Address: 0x368d8c, Func Offset: 0x37c
	// Line 496, Address: 0x368d94, Func Offset: 0x384
	// Line 497, Address: 0x368dac, Func Offset: 0x39c
	// Line 498, Address: 0x368dbc, Func Offset: 0x3ac
	// Line 500, Address: 0x368dc4, Func Offset: 0x3b4
	// Line 501, Address: 0x368ddc, Func Offset: 0x3cc
	// Line 502, Address: 0x368dec, Func Offset: 0x3dc
	// Line 504, Address: 0x368df4, Func Offset: 0x3e4
	// Line 505, Address: 0x368e0c, Func Offset: 0x3fc
	// Line 506, Address: 0x368e1c, Func Offset: 0x40c
	// Line 508, Address: 0x368e24, Func Offset: 0x414
	// Line 509, Address: 0x368e3c, Func Offset: 0x42c
	// Line 510, Address: 0x368e4c, Func Offset: 0x43c
	// Line 512, Address: 0x368e54, Func Offset: 0x444
	// Line 513, Address: 0x368e6c, Func Offset: 0x45c
	// Line 514, Address: 0x368e7c, Func Offset: 0x46c
	// Line 516, Address: 0x368e84, Func Offset: 0x474
	// Line 517, Address: 0x368e9c, Func Offset: 0x48c
	// Line 518, Address: 0x368eac, Func Offset: 0x49c
	// Line 520, Address: 0x368eb4, Func Offset: 0x4a4
	// Line 521, Address: 0x368ecc, Func Offset: 0x4bc
	// Line 522, Address: 0x368edc, Func Offset: 0x4cc
	// Line 524, Address: 0x368ee4, Func Offset: 0x4d4
	// Line 525, Address: 0x368efc, Func Offset: 0x4ec
	// Line 526, Address: 0x368f0c, Func Offset: 0x4fc
	// Line 528, Address: 0x368f14, Func Offset: 0x504
	// Line 529, Address: 0x368f2c, Func Offset: 0x51c
	// Line 530, Address: 0x368f3c, Func Offset: 0x52c
	// Line 532, Address: 0x368f44, Func Offset: 0x534
	// Line 533, Address: 0x368f5c, Func Offset: 0x54c
	// Line 534, Address: 0x368f6c, Func Offset: 0x55c
	// Line 536, Address: 0x368f74, Func Offset: 0x564
	// Line 537, Address: 0x368f8c, Func Offset: 0x57c
	// Line 538, Address: 0x368f9c, Func Offset: 0x58c
	// Line 540, Address: 0x368fa4, Func Offset: 0x594
	// Line 541, Address: 0x368fbc, Func Offset: 0x5ac
	// Line 542, Address: 0x368fcc, Func Offset: 0x5bc
	// Line 544, Address: 0x368fd4, Func Offset: 0x5c4
	// Line 545, Address: 0x368fec, Func Offset: 0x5dc
	// Line 546, Address: 0x368ffc, Func Offset: 0x5ec
	// Line 548, Address: 0x369004, Func Offset: 0x5f4
	// Line 549, Address: 0x36901c, Func Offset: 0x60c
	// Line 550, Address: 0x36902c, Func Offset: 0x61c
	// Line 552, Address: 0x369034, Func Offset: 0x624
	// Line 553, Address: 0x36904c, Func Offset: 0x63c
	// Line 554, Address: 0x36905c, Func Offset: 0x64c
	// Line 556, Address: 0x369064, Func Offset: 0x654
	// Line 557, Address: 0x36907c, Func Offset: 0x66c
	// Line 558, Address: 0x36908c, Func Offset: 0x67c
	// Line 560, Address: 0x369094, Func Offset: 0x684
	// Line 561, Address: 0x3690ac, Func Offset: 0x69c
	// Line 562, Address: 0x3690bc, Func Offset: 0x6ac
	// Line 564, Address: 0x3690c4, Func Offset: 0x6b4
	// Line 565, Address: 0x3690dc, Func Offset: 0x6cc
	// Line 566, Address: 0x3690ec, Func Offset: 0x6dc
	// Line 568, Address: 0x3690f4, Func Offset: 0x6e4
	// Line 569, Address: 0x36910c, Func Offset: 0x6fc
	// Line 570, Address: 0x36911c, Func Offset: 0x70c
	// Line 572, Address: 0x369124, Func Offset: 0x714
	// Line 573, Address: 0x36913c, Func Offset: 0x72c
	// Line 574, Address: 0x36914c, Func Offset: 0x73c
	// Line 576, Address: 0x369154, Func Offset: 0x744
	// Line 577, Address: 0x36916c, Func Offset: 0x75c
	// Line 578, Address: 0x36917c, Func Offset: 0x76c
	// Line 580, Address: 0x369184, Func Offset: 0x774
	// Line 581, Address: 0x36919c, Func Offset: 0x78c
	// Line 582, Address: 0x3691ac, Func Offset: 0x79c
	// Line 584, Address: 0x3691b4, Func Offset: 0x7a4
	// Line 586, Address: 0x36924c, Func Offset: 0x83c
	// Line 587, Address: 0x369250, Func Offset: 0x840
	// Line 593, Address: 0x369264, Func Offset: 0x854
	// Line 595, Address: 0x369270, Func Offset: 0x860
	// Line 597, Address: 0x36927c, Func Offset: 0x86c
	// Line 599, Address: 0x3692a0, Func Offset: 0x890
	// Line 601, Address: 0x3692c4, Func Offset: 0x8b4
	// Line 602, Address: 0x3692e8, Func Offset: 0x8d8
	// Line 603, Address: 0x36930c, Func Offset: 0x8fc
	// Line 604, Address: 0x369328, Func Offset: 0x918
	// Line 607, Address: 0x36933c, Func Offset: 0x92c
	// Line 609, Address: 0x369348, Func Offset: 0x938
	// Line 610, Address: 0x369358, Func Offset: 0x948
	// Line 613, Address: 0x36936c, Func Offset: 0x95c
	// Line 616, Address: 0x369374, Func Offset: 0x964
	// Func End, Address: 0x369388, Func Offset: 0x978
}

