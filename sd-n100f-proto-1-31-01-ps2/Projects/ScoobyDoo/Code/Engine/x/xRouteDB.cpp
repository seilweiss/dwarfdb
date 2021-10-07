typedef struct _RxClusterDefinition;
typedef struct _RwRaster;
typedef struct _RxOutputSpec;
typedef struct _RxPipelineNode;
typedef struct xTrigger;
typedef struct _class_0;
typedef struct _rxHeapSuperBlockDescriptor;
typedef struct xNavPoint;
typedef struct _rwResEntryTag;
typedef struct _RpWorld;
typedef struct xSearch;
typedef struct xRouteDB;
typedef struct _RxHeap;
typedef struct xCamera;
typedef struct _rxHeapBlockHeader;
typedef struct iCameraResource;
typedef struct _FCinfo;
typedef struct tagP2Mesh;
typedef struct tagxActorDBData;
typedef enum _RxClusterValidityReq;
typedef struct _rxHeapFreeBlock;
typedef struct Vector3D;
typedef struct _RwTexDictionary;
typedef struct iActionRuntime;
typedef struct tagP2VERTEX;
typedef struct _RxPipelineNodeTopSortData;
typedef struct xRoute;
typedef struct _RpClump;
typedef struct tagiAnimFrame;
typedef struct xAction;
typedef struct iObjRuntime;
typedef struct Vector4D;
typedef struct xCondition;
typedef struct _RxPipelineNodeParam;
typedef struct iActorRuntime;
typedef struct _xActor;
typedef struct _RxPipelineCluster;
typedef struct tagXAnim;
typedef struct _RpMaterial;
typedef enum _rxEmbeddedPacketState;
typedef struct _RpVertexNormal;
typedef struct tagiMesh;
typedef struct _xObj;
typedef struct tagiAnimResource;
typedef struct tagxStateMgr;
typedef struct xNavLink;
typedef struct p2Camera;
typedef struct _RwTexture;
typedef struct tagXStreamMDSDirectory;
typedef struct _RxNodeDefinition;
typedef struct iActionResource;
typedef enum _RxClusterValid;
typedef struct tagiAnimRuntime;
typedef struct tagxStateLink;
typedef struct _RwSurfaceProperties;
typedef struct _RxPipeline;
typedef struct tagxPadAction;
typedef struct xRouteTargetActor;
typedef struct _RpSector;
typedef struct _RwV3d;
typedef struct iTriggerResource;
typedef enum _RwTextureFilterMode;
typedef struct tagxPhysicsObject;
typedef enum _rpWorldRenderOrder;
typedef struct iDisplayCamera;
typedef struct xMarker;
typedef struct tagP2MeshVertex;
typedef struct xRouteUseageOneShot;
typedef struct tagXAnimTrigger;
typedef struct _RxPipelineRequiresCluster;
typedef struct xListItem;
typedef struct tagxStateThread;
typedef struct xEntryPoint;
typedef struct _RpPolygon;
typedef struct _tagxEnv;
typedef struct tagxState;
typedef struct xScene;
typedef struct _tagiEnvRuntime;
typedef struct tagXAnimControl;
typedef struct iConditionResource;
typedef struct _rxReq;
typedef struct XStreamHeader;
typedef struct xRouteTargetObject;
typedef struct xRule;
typedef struct tagiFloor;
typedef struct _RpWorldSector;
typedef struct _RwObject;
typedef struct iConditionRuntime;
typedef struct xRouteUseagePatrol;
typedef struct _RpMeshHeader;
typedef struct xSearchPoint;
typedef struct tagiFloorTri;
typedef struct tagP2Weight;
typedef struct tagxObjDBData;
typedef struct iRuleResource;
typedef struct xRouteTargetTrigger;
typedef struct xList;
typedef struct _RpCollSector;
typedef struct _RxClusterRef;
typedef struct tagXStreamDirectoryEntry;
typedef struct xRouteUseage;
typedef struct _RwLLLink;
typedef struct _iVFXResource;
typedef struct _iEntryPointRuntime;
typedef struct _RxIoSpec;
typedef struct iEntryPointResource;
typedef struct _class_1;
typedef struct _RwRGBA;
typedef struct xRouteTargetNavPoint;
typedef struct _RpMaterialList;
typedef struct _iSFXResource;
typedef struct iMarkerResource;
typedef struct _RxNodeMethods;
typedef enum _RxClusterForcePresent;
typedef struct _RwBBox;
typedef struct _RxPacket;
typedef struct _iRenderEffects;
typedef struct _iLightRuntime;
typedef enum _RxNodeDefEditable;
typedef struct xLight;
typedef struct p2CameraVersion;
typedef struct xRouteTargetMarker;
typedef struct iLightResource;
typedef struct _RxClusterUnion;
typedef struct _RwTexCoords;
typedef struct _RxCluster;
typedef struct _RwLinkList;
typedef struct xRouteTarget;
typedef enum _RwTextureAddressMode;
typedef struct _p2Geom;

typedef void(*type_6)(_rwResEntryTag*);
typedef int32(*type_9)(_RxPipelineNode*, _RxPipelineNodeParam*);
typedef int32(*type_12)(_RxNodeDefinition*);
typedef void(*type_16)(_RxNodeDefinition*);
typedef int32(*type_20)(_RxPipelineNode*);
typedef void(*type_22)(_RxPipelineNode*);
typedef int32(*type_28)(_RxPipelineNode*, _RxPipeline*);
typedef _RpWorldSector*(*type_31)(_RpWorldSector*);
typedef uint32(*type_37)(_RxPipelineNode*, uint32, uint32, void*);
typedef void(*type_53)(_xActor*, int32, tagXAnim*, tagXAnimTrigger*);
typedef _RpClump*(*type_68)(_RpClump*, void*);

typedef uint8 type_0[3];
typedef _xActor type_1[4];
typedef _xActor type_2[1];
typedef _xActor type_3[4];
typedef Vector3D type_4[4];
typedef _xActor type_5[4];
typedef p2CameraVersion type_7[5];
typedef _xActor type_8[4];
typedef _xActor type_10[4];
typedef _xActor type_11[1];
typedef _xActor type_13[4];
typedef tagXStreamDirectoryEntry type_14[1000];
typedef _xActor type_15[4];
typedef _xActor type_17[4];
typedef uint32 type_18[4];
typedef _xActor type_19[1];
typedef _xActor type_21[1];
typedef _xActor type_23[1];
typedef Vector3D type_24[4];
typedef _xActor type_25[1];
typedef _xActor type_26[1];
typedef uint16 type_27[3];
typedef _xActor type_29[1];
typedef _xActor type_30[1];
typedef _xActor type_32[1];
typedef iTriggerResource* type_33[20];
typedef xRoute type_34[16];
typedef tagxState* type_35[10];
typedef _xActor type_36[4];
typedef iTriggerResource* type_38[20];
typedef _xActor type_39[4];
typedef uint16 type_40[3];
typedef xRoute* type_41[16];
typedef _xActor type_42[4];
typedef _xObj type_43[32];
typedef _xActor type_44[1];
typedef iTriggerResource* type_45[20];
typedef _RxCluster type_46[1];
typedef int8 type_47[2048];
typedef _xActor type_48[1];
typedef iTriggerResource* type_49[20];
typedef _xActor type_50[1];
typedef _xActor type_51[4];
typedef uint8 type_52[4];
typedef iTriggerResource* type_54[20];
typedef _xActor type_55[1];
typedef _xActor type_56[4];
typedef iTriggerResource* type_57[20];
typedef _xActor type_58[4];
typedef _xActor type_59[2];
typedef uint8 type_60[3];
typedef uint16 type_61[3];
typedef iTriggerResource* type_62[20];
typedef _xActor type_63[1];
typedef int8 type_64[32];
typedef _xActor type_65[1];
typedef int8 type_66[32];
typedef uint8 type_67[4];
typedef iTriggerResource* type_69[20];
typedef _xActor type_70[1];
typedef uint8 type_71[4];
typedef float32 type_72[3];
typedef _xActor type_73[4];
typedef uint8 type_74[4];
typedef int32 type_75[7];
typedef Vector3D type_76[5];
typedef iTriggerResource* type_77[20];
typedef _xActor type_78[4];
typedef tagxStateThread type_79[7];
typedef int8 type_80[128];
typedef _xActor type_81[1];
typedef iTriggerResource* type_82[20];
typedef _xActor type_83[1];
typedef iLightResource type_84[2];
typedef _xActor* type_85[40];
typedef iTriggerResource* type_86[20];
typedef int8 type_87[40];
typedef _xActor* type_88[13];
typedef uint8 type_89[2];
typedef iTriggerResource* type_90[20];
typedef _xActor type_91[1];
typedef uint8 type_92[3];
typedef _xActor type_93[4];

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

struct xTrigger
{
	iTriggerResource* m_resource;
};

struct _class_0
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

struct _rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	_rxHeapSuperBlockDescriptor* next;
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

struct _rwResEntryTag
{
	_RwLLLink link;
	int32 size;
	void* owner;
	_rwResEntryTag** ownerRef;
	void(*destroyNotify)(_rwResEntryTag*);
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

struct xRouteDB
{
	xRoute* m_route[16];
	xScene* m_scene;
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

struct xCamera
{
	iCameraResource* m_resource;
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

struct iCameraResource
{
	uint16 m_plateOffset;
	uint16 m_versions;
	p2CameraVersion m_version[5];
	uint32 m_frameCount;
	p2Camera* m_cameras;
};

struct _FCinfo
{
	uint16 nidx[3];
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

struct _rxHeapFreeBlock
{
	uint32 size;
	_rxHeapBlockHeader* ptr;
};

struct Vector3D
{
	float32 x;
	float32 y;
	float32 z;
};

struct _RwTexDictionary
{
	_RwObject object;
	_RwLinkList texturesInDict;
	_RwLLLink lInInstance;
};

struct iActionRuntime
{
	xAction* m_and;
};

struct tagP2VERTEX
{
	float32 x;
	float32 y;
	float32 z;
	float32 tu;
	float32 tv;
};

struct _RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	_rxReq* req;
	void* initialisationData;
	uint32 initialisationDataSize;
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

struct _RpClump
{
	_RwObject object;
	_RwLinkList atomicList;
	_RwLLLink inWorldLink;
	_RpClump*(*callback)(_RpClump*, void*);
	uint16 renderFrame;
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

struct xAction
{
	iActionResource* m_resource;
	iActionRuntime* m_runtime;
};

struct iObjRuntime
{
	int16 m_flag;
	int16 m_pad;
	_p2Geom* m_geom;
	float32 m_bradius;
	tagxPhysicsObject m_phys;
};

struct Vector4D
{
	float32 x;
	float32 y;
	float32 z;
	float32 t;
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

struct _RxPipelineCluster
{
	_RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

struct tagXAnim
{
	tagiAnimResource* m_resource;
	tagiAnimRuntime* m_runtime;
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

enum _rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
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

struct _xObj
{
	void* m_resource;
	iObjRuntime* m_runtime;
	uint32 m_modelID;
	void* m_texture;
	int16 m_objType;
	int16 m_objID;
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

struct iActionResource
{
	uint8 m_cmdType;
	uint8 m_cmd;
	uint16 pad;
	uint32 m_cmdParameter;
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

struct xRouteTargetActor
{
	int32 m_type;
	int32 m_id;
};

struct _RpSector
{
	int32 type;
};

struct _RwV3d
{
	float32 x;
	float32 y;
	float32 z;
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

struct xRouteUseageOneShot
{
	int32 m_unused;
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

struct xListItem
{
	void* m_item;
	xListItem* m_next;
	xListItem* m_prev;
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

struct _tagiEnvRuntime
{
	_RpWorld* world;
	Vector3D world_origin;
	_RwTexDictionary* tex_dict;
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

struct xRouteTargetObject
{
	int32 m_id;
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

struct _RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct iConditionRuntime
{
	xCondition* m_operand;
	uint16 m_match;
	uint16 m_trigger;
};

struct xRouteUseagePatrol
{
	int32 m_patrolDir;
};

struct _RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
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

struct tagiFloorTri
{
	uint16 m_v[3];
	uint16 m_n;
};

struct tagP2Weight
{
	uint16 m_joint0;
	uint16 m_joint1;
	float32 m_weight0;
	float32 m_weight1;
};

struct tagxObjDBData
{
	_xObj m_o[32];
	int32 m_staticObjects;
	int32 m_staticAssets;
};

struct iRuleResource
{
	uint32 m_actionCount;
	xAction* m_action;
	uint32 m_conditionCount;
	xCondition* m_condition;
};

struct xRouteTargetTrigger
{
	int32 m_id;
};

struct xList
{
	xListItem* m_head;
	xListItem* m_tail;
};

struct _RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
};

struct _RxClusterRef
{
	_RxClusterDefinition* clusterDef;
	_RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct tagXStreamDirectoryEntry
{
	uint32 id;
	uint32 type;
	uint32 offset;
	uint32 length;
};

struct xRouteUseage
{
	int32 m_type;
	int32 m_dir;
	_class_1 u;
};

struct _RwLLLink
{
	_RwLLLink* next;
	_RwLLLink* prev;
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

struct _iEntryPointRuntime
{
	uint32 m_enabled;
};

struct _RxIoSpec
{
	uint32 numClustersOfInterest;
	_RxClusterRef* clustersOfInterest;
	_RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	_RxOutputSpec* outputs;
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

struct _class_1
{
	union
	{
		xRouteUseagePatrol m_patrol;
		xRouteUseageOneShot m_oneShot;
	};
};

struct _RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct xRouteTargetNavPoint
{
	int32 m_id;
};

struct _RpMaterialList
{
	_RpMaterial** materials;
	int32 numMaterials;
	int32 space;
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

struct iMarkerResource
{
	Vector3D m_pos;
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

enum _RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct xLight
{
	iLightResource* m_resource;
	_iLightRuntime* m_runtime;
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

struct xRouteTargetMarker
{
	int32 m_id;
};

struct iLightResource
{
	uint32 m_type;
	Vector3D m_pos;
	Vector3D m_rot;
	Vector3D m_color;
	int32 m_fov;
};

struct _RxClusterUnion
{
	union
	{
		_RxClusterDefinition* clusterDef;
		_RxPipelineCluster* clusterRef;
	};
};

struct _RwTexCoords
{
	float32 u;
	float32 v;
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

struct xRouteTarget
{
	int8 m_type;
	uint8 m_hasLOSToTarget;
	uint8 m_pad2[2];
	Vector3D m_pos;
	float32 m_rerouteThreshold;
	_class_0 t;
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

struct _p2Geom
{
	uint32 m_meshCount;
	tagP2Mesh* m_mesh;
	_iRenderEffects effects;
	_RpClump* m_clump;
};

xRouteDB g_routeDB;
xRouteDB* db;
xRoute gRouteArray[16];
int8 vAssertBuf2[128];
XStreamHeader currentHeader;
xScene* xScene_current;
tagxActorDBData* gadb;
tagxObjDBData* godb;
int32 gPlayerID;
int32 gPlayerType;

void xRouteDBSetRouteUseage(int32 id, int32 useageType);
int32 xRouteDBRouteStatus(int32 id);
void xRouteDBRouteDraw(int32 routeID);
int32 xRouteDBRouteCreate();
void xRouteDBRouteDestroy(int32 routeID);
int32 xRouteDBRouteRebuild(xRoute* r);
int32 xRouteDBRouteBuild(Vector3D* pa, Vector3D* pb, int32 physType);
int32 xRouteDBRouteToNavigationPoint(int32 objectType, int32 actorID, int32 index);
int32 xRouteDBRouteMarkerToMarker(int32 ma, int32 mb);
int32 xRouteDBRouteNavToNav(int32 na, int32 nb);
int32 xRouteDBRouteToMemoryPosition(int32 objectType, int32 actorID, int32 index);
int32 xRouteDBRouteToRTObj(int32 actorType, int32 actorID, int32 objIndex);
int32 xRouteDBRouteToMarker(int32 objectType, int32 actorID, int32 index);
int32 xRouteDBRouteToActor(int32 fromObjectType, int32 fromActorID, int32 toObjectType, int32 toActorID);
int32 xRouteDBRouteToPlayer(int32 objectID, int32 actorID);
void xRouteDBRouteAppend(int32 routeID, int32 routeAppendID);
void xRouteDBIdle();
void xRouteDBSetScene(xScene* scene);
xRoute* xRouteDBGetRoutePtr(int32 id);
void xRouteDBInit();

// xRouteDBSetRouteUseage__Fii
// Start address: 0x33a5d0
void xRouteDBSetRouteUseage(int32 id, int32 useageType)
{
	xRoute* r;
	// Line 1092, Address: 0x33a5d0, Func Offset: 0
	// Line 1094, Address: 0x33a5e8, Func Offset: 0x18
	// Line 1097, Address: 0x33a5f4, Func Offset: 0x24
	// Line 1098, Address: 0x33a694, Func Offset: 0xc4
	// Line 1100, Address: 0x33a738, Func Offset: 0x168
	// Line 1101, Address: 0x33a748, Func Offset: 0x178
	// Line 1103, Address: 0x33a7e8, Func Offset: 0x218
	// Line 1105, Address: 0x33a7ec, Func Offset: 0x21c
	// Line 1108, Address: 0x33a808, Func Offset: 0x238
	// Line 1109, Address: 0x33a80c, Func Offset: 0x23c
	// Line 1112, Address: 0x33a814, Func Offset: 0x244
	// Line 1115, Address: 0x33a818, Func Offset: 0x248
	// Func End, Address: 0x33a830, Func Offset: 0x260
}

// xRouteDBRouteStatus__Fi
// Start address: 0x33a830
int32 xRouteDBRouteStatus(int32 id)
{
	// Line 1066, Address: 0x33a830, Func Offset: 0
	// Line 1068, Address: 0x33a840, Func Offset: 0x10
	// Line 1069, Address: 0x33a84c, Func Offset: 0x1c
	// Line 1071, Address: 0x33a858, Func Offset: 0x28
	// Line 1072, Address: 0x33a8f8, Func Offset: 0xc8
	// Line 1074, Address: 0x33a99c, Func Offset: 0x16c
	// Line 1076, Address: 0x33aa4c, Func Offset: 0x21c
	// Line 1077, Address: 0x33aa64, Func Offset: 0x234
	// Func End, Address: 0x33aa78, Func Offset: 0x248
}

// xRouteDBRouteDraw__Fi
// Start address: 0x33aa80
void xRouteDBRouteDraw(int32 routeID)
{
	xRoute* r;
	// Line 1041, Address: 0x33aa80, Func Offset: 0
	// Line 1043, Address: 0x33aa88, Func Offset: 0x8
	// Line 1045, Address: 0x33aa90, Func Offset: 0x10
	// Line 1048, Address: 0x33aaa0, Func Offset: 0x20
	// Line 1049, Address: 0x33aaa8, Func Offset: 0x28
	// Line 1050, Address: 0x33aab8, Func Offset: 0x38
	// Line 1053, Address: 0x33aac0, Func Offset: 0x40
	// Func End, Address: 0x33aad0, Func Offset: 0x50
}

// xRouteDBRouteCreate__Fv
// Start address: 0x33aad0
int32 xRouteDBRouteCreate()
{
	int32 i;
	// Line 1004, Address: 0x33aad0, Func Offset: 0
	// Line 1006, Address: 0x33aadc, Func Offset: 0xc
	// Line 1008, Address: 0x33aae8, Func Offset: 0x18
	// Line 1010, Address: 0x33ab04, Func Offset: 0x34
	// Line 1012, Address: 0x33ab20, Func Offset: 0x50
	// Line 1013, Address: 0x33ab34, Func Offset: 0x64
	// Line 1014, Address: 0x33ab48, Func Offset: 0x78
	// Line 1015, Address: 0x33ab5c, Func Offset: 0x8c
	// Line 1016, Address: 0x33ab70, Func Offset: 0xa0
	// Line 1018, Address: 0x33ab84, Func Offset: 0xb4
	// Line 1023, Address: 0x33ac38, Func Offset: 0x168
	// Line 1025, Address: 0x33ac44, Func Offset: 0x174
	// Line 1027, Address: 0x33ac54, Func Offset: 0x184
	// Line 1028, Address: 0x33ac64, Func Offset: 0x194
	// Line 1029, Address: 0x33ac68, Func Offset: 0x198
	// Func End, Address: 0x33ac7c, Func Offset: 0x1ac
}

// xRouteDBRouteDestroy__Fi
// Start address: 0x33ac80
void xRouteDBRouteDestroy(int32 routeID)
{
	// Line 976, Address: 0x33ac80, Func Offset: 0
	// Line 977, Address: 0x33ac90, Func Offset: 0x10
	// Line 979, Address: 0x33ac98, Func Offset: 0x18
	// Line 987, Address: 0x33ad3c, Func Offset: 0xbc
	// Line 990, Address: 0x33ad54, Func Offset: 0xd4
	// Func End, Address: 0x33ad68, Func Offset: 0xe8
}

// xRouteDBRouteRebuild__FP6xRoute
// Start address: 0x33ad70
int32 xRouteDBRouteRebuild(xRoute* r)
{
	xListItem* anchor;
	xListItem* idx;
	int32 routeID;
	// Line 866, Address: 0x33ad70, Func Offset: 0
	// Line 869, Address: 0x33ad88, Func Offset: 0x18
	// Line 873, Address: 0x33ae28, Func Offset: 0xb8
	// Line 874, Address: 0x33ae54, Func Offset: 0xe4
	// Line 875, Address: 0x33aef8, Func Offset: 0x188
	// Line 880, Address: 0x33af00, Func Offset: 0x190
	// Line 883, Address: 0x33af1c, Func Offset: 0x1ac
	// Line 886, Address: 0x33af28, Func Offset: 0x1b8
	// Line 887, Address: 0x33af2c, Func Offset: 0x1bc
	// Line 889, Address: 0x33af30, Func Offset: 0x1c0
	// Line 890, Address: 0x33af40, Func Offset: 0x1d0
	// Line 893, Address: 0x33af4c, Func Offset: 0x1dc
	// Line 894, Address: 0x33af60, Func Offset: 0x1f0
	// Line 898, Address: 0x33af74, Func Offset: 0x204
	// Line 901, Address: 0x33af8c, Func Offset: 0x21c
	// Line 904, Address: 0x33af98, Func Offset: 0x228
	// Line 905, Address: 0x33afa4, Func Offset: 0x234
	// Line 906, Address: 0x33afb4, Func Offset: 0x244
	// Line 907, Address: 0x33afc0, Func Offset: 0x250
	// Line 911, Address: 0x33afd0, Func Offset: 0x260
	// Line 912, Address: 0x33afe0, Func Offset: 0x270
	// Line 920, Address: 0x33afe8, Func Offset: 0x278
	// Line 922, Address: 0x33afec, Func Offset: 0x27c
	// Line 925, Address: 0x33aff4, Func Offset: 0x284
	// Line 931, Address: 0x33b004, Func Offset: 0x294
	// Line 933, Address: 0x33b00c, Func Offset: 0x29c
	// Line 934, Address: 0x33b0b8, Func Offset: 0x348
	// Line 938, Address: 0x33b0cc, Func Offset: 0x35c
	// Line 944, Address: 0x33b0dc, Func Offset: 0x36c
	// Line 945, Address: 0x33b0ec, Func Offset: 0x37c
	// Line 948, Address: 0x33b0f8, Func Offset: 0x388
	// Line 949, Address: 0x33b100, Func Offset: 0x390
	// Line 954, Address: 0x33b108, Func Offset: 0x398
	// Line 958, Address: 0x33b114, Func Offset: 0x3a4
	// Line 959, Address: 0x33b124, Func Offset: 0x3b4
	// Line 963, Address: 0x33b1c8, Func Offset: 0x458
	// Line 964, Address: 0x33b1cc, Func Offset: 0x45c
	// Func End, Address: 0x33b1e8, Func Offset: 0x478
}

// xRouteDBRouteBuild__FP8Vector3DP8Vector3Di
// Start address: 0x33b1f0
int32 xRouteDBRouteBuild(Vector3D* pa, Vector3D* pb, int32 physType)
{
	xRoute* r;
	int32 routeID;
	// Line 797, Address: 0x33b1f0, Func Offset: 0
	// Line 801, Address: 0x33b218, Func Offset: 0x28
	// Line 803, Address: 0x33b2bc, Func Offset: 0xcc
	// Line 804, Address: 0x33b2c8, Func Offset: 0xd8
	// Line 806, Address: 0x33b2d0, Func Offset: 0xe0
	// Line 808, Address: 0x33b2e0, Func Offset: 0xf0
	// Line 809, Address: 0x33b2f8, Func Offset: 0x108
	// Line 810, Address: 0x33b310, Func Offset: 0x120
	// Line 813, Address: 0x33b314, Func Offset: 0x124
	// Line 816, Address: 0x33b330, Func Offset: 0x140
	// Line 817, Address: 0x33b334, Func Offset: 0x144
	// Line 819, Address: 0x33b338, Func Offset: 0x148
	// Line 820, Address: 0x33b340, Func Offset: 0x150
	// Line 821, Address: 0x33b350, Func Offset: 0x160
	// Line 824, Address: 0x33b35c, Func Offset: 0x16c
	// Line 826, Address: 0x33b360, Func Offset: 0x170
	// Line 827, Address: 0x33b374, Func Offset: 0x184
	// Line 829, Address: 0x33b388, Func Offset: 0x198
	// Line 833, Address: 0x33b3a0, Func Offset: 0x1b0
	// Line 834, Address: 0x33b3ac, Func Offset: 0x1bc
	// Line 835, Address: 0x33b3bc, Func Offset: 0x1cc
	// Line 836, Address: 0x33b3c8, Func Offset: 0x1d8
	// Line 840, Address: 0x33b3d8, Func Offset: 0x1e8
	// Line 841, Address: 0x33b3e8, Func Offset: 0x1f8
	// Line 846, Address: 0x33b3f0, Func Offset: 0x200
	// Line 847, Address: 0x33b400, Func Offset: 0x210
	// Line 851, Address: 0x33b4a4, Func Offset: 0x2b4
	// Line 852, Address: 0x33b4a8, Func Offset: 0x2b8
	// Func End, Address: 0x33b4cc, Func Offset: 0x2dc
}

// xRouteDBRouteToNavigationPoint__Fiii
// Start address: 0x33b4d0
int32 xRouteDBRouteToNavigationPoint(int32 objectType, int32 actorID, int32 index)
{
	xRoute* r;
	Vector3D posa;
	_xActor* actor;
	int32 routeID;
	// Line 748, Address: 0x33b4d0, Func Offset: 0
	// Line 749, Address: 0x33b4f4, Func Offset: 0x24
	// Line 751, Address: 0x33b4f8, Func Offset: 0x28
	// Line 753, Address: 0x33b59c, Func Offset: 0xcc
	// Line 754, Address: 0x33b5b0, Func Offset: 0xe0
	// Line 759, Address: 0x33b5b8, Func Offset: 0xe8
	// Line 760, Address: 0x33b5d4, Func Offset: 0x104
	// Line 762, Address: 0x33b5e8, Func Offset: 0x118
	// Line 764, Address: 0x33b694, Func Offset: 0x1c4
	// Line 767, Address: 0x33b6d0, Func Offset: 0x200
	// Line 769, Address: 0x33b6dc, Func Offset: 0x20c
	// Line 772, Address: 0x33b8e0, Func Offset: 0x410
	// Line 773, Address: 0x33b8e8, Func Offset: 0x418
	// Line 774, Address: 0x33b920, Func Offset: 0x450
	// Line 775, Address: 0x33b924, Func Offset: 0x454
	// Line 780, Address: 0x33b92c, Func Offset: 0x45c
	// Line 781, Address: 0x33b930, Func Offset: 0x460
	// Func End, Address: 0x33b950, Func Offset: 0x480
}

// xRouteDBRouteMarkerToMarker__Fii
// Start address: 0x33b950
int32 xRouteDBRouteMarkerToMarker(int32 ma, int32 mb)
{
	xRoute* r;
	xMarker* marker2;
	xMarker* marker1;
	int32 routeID;
	// Line 702, Address: 0x33b950, Func Offset: 0
	// Line 703, Address: 0x33b96c, Func Offset: 0x1c
	// Line 707, Address: 0x33b970, Func Offset: 0x20
	// Line 709, Address: 0x33ba14, Func Offset: 0xc4
	// Line 710, Address: 0x33bac0, Func Offset: 0x170
	// Line 712, Address: 0x33bb6c, Func Offset: 0x21c
	// Line 713, Address: 0x33bb7c, Func Offset: 0x22c
	// Line 715, Address: 0x33bb8c, Func Offset: 0x23c
	// Line 717, Address: 0x33bb9c, Func Offset: 0x24c
	// Line 720, Address: 0x33bbb4, Func Offset: 0x264
	// Line 722, Address: 0x33bbc0, Func Offset: 0x270
	// Line 725, Address: 0x33bdc4, Func Offset: 0x474
	// Line 726, Address: 0x33bdcc, Func Offset: 0x47c
	// Line 727, Address: 0x33bde8, Func Offset: 0x498
	// Line 728, Address: 0x33bdf0, Func Offset: 0x4a0
	// Line 732, Address: 0x33bdf4, Func Offset: 0x4a4
	// Line 733, Address: 0x33bdf8, Func Offset: 0x4a8
	// Func End, Address: 0x33be14, Func Offset: 0x4c4
}

// xRouteDBRouteNavToNav__Fii
// Start address: 0x33be20
int32 xRouteDBRouteNavToNav(int32 na, int32 nb)
{
	xRoute* r;
	int32 routeID;
	// Line 665, Address: 0x33be20, Func Offset: 0
	// Line 668, Address: 0x33be38, Func Offset: 0x18
	// Line 670, Address: 0x33bedc, Func Offset: 0xbc
	// Line 671, Address: 0x33bf88, Func Offset: 0x168
	// Line 673, Address: 0x33c034, Func Offset: 0x214
	// Line 676, Address: 0x33c08c, Func Offset: 0x26c
	// Line 678, Address: 0x33c098, Func Offset: 0x278
	// Line 681, Address: 0x33c29c, Func Offset: 0x47c
	// Line 682, Address: 0x33c2a4, Func Offset: 0x484
	// Line 683, Address: 0x33c2dc, Func Offset: 0x4bc
	// Line 684, Address: 0x33c2e0, Func Offset: 0x4c0
	// Line 687, Address: 0x33c2e8, Func Offset: 0x4c8
	// Line 688, Address: 0x33c2ec, Func Offset: 0x4cc
	// Func End, Address: 0x33c304, Func Offset: 0x4e4
}

// xRouteDBRouteToMemoryPosition__Fiii
// Start address: 0x33c310
int32 xRouteDBRouteToMemoryPosition(int32 objectType, int32 actorID, int32 index)
{
	xRoute* r;
	Vector3D posa;
	_xActor* actor;
	int32 routeID;
	// Line 620, Address: 0x33c310, Func Offset: 0
	// Line 621, Address: 0x33c334, Func Offset: 0x24
	// Line 623, Address: 0x33c338, Func Offset: 0x28
	// Line 624, Address: 0x33c3dc, Func Offset: 0xcc
	// Line 626, Address: 0x33c480, Func Offset: 0x170
	// Line 627, Address: 0x33c494, Func Offset: 0x184
	// Line 632, Address: 0x33c49c, Func Offset: 0x18c
	// Line 633, Address: 0x33c4b8, Func Offset: 0x1a8
	// Line 635, Address: 0x33c4cc, Func Offset: 0x1bc
	// Line 637, Address: 0x33c578, Func Offset: 0x268
	// Line 638, Address: 0x33c5a8, Func Offset: 0x298
	// Line 640, Address: 0x33c5b4, Func Offset: 0x2a4
	// Line 643, Address: 0x33c7b8, Func Offset: 0x4a8
	// Line 644, Address: 0x33c7c0, Func Offset: 0x4b0
	// Line 645, Address: 0x33c7ec, Func Offset: 0x4dc
	// Line 650, Address: 0x33c7f4, Func Offset: 0x4e4
	// Line 651, Address: 0x33c7f8, Func Offset: 0x4e8
	// Func End, Address: 0x33c818, Func Offset: 0x508
}

// xRouteDBRouteToRTObj__Fiii
// Start address: 0x33c820
int32 xRouteDBRouteToRTObj(int32 actorType, int32 actorID, int32 objIndex)
{
	xRoute* r;
	Vector3D posa;
	_xObj* obj;
	int32 routeID;
	// Line 573, Address: 0x33c820, Func Offset: 0
	// Line 578, Address: 0x33c844, Func Offset: 0x24
	// Line 579, Address: 0x33c8e4, Func Offset: 0xc4
	// Line 581, Address: 0x33c988, Func Offset: 0x168
	// Line 584, Address: 0x33c99c, Func Offset: 0x17c
	// Line 587, Address: 0x33ca68, Func Offset: 0x248
	// Line 588, Address: 0x33caa4, Func Offset: 0x284
	// Line 590, Address: 0x33cad8, Func Offset: 0x2b8
	// Line 593, Address: 0x33cb18, Func Offset: 0x2f8
	// Line 595, Address: 0x33cb24, Func Offset: 0x304
	// Line 598, Address: 0x33cd28, Func Offset: 0x508
	// Line 599, Address: 0x33cd30, Func Offset: 0x510
	// Line 600, Address: 0x33cd4c, Func Offset: 0x52c
	// Line 601, Address: 0x33cd54, Func Offset: 0x534
	// Line 603, Address: 0x33cd58, Func Offset: 0x538
	// Line 604, Address: 0x33cd5c, Func Offset: 0x53c
	// Func End, Address: 0x33cd7c, Func Offset: 0x55c
}

// xRouteDBRouteToMarker__Fiii
// Start address: 0x33cd80
int32 xRouteDBRouteToMarker(int32 objectType, int32 actorID, int32 index)
{
	xRoute* r;
	Vector3D posa;
	xMarker* marker;
	int32 routeID;
	// Line 517, Address: 0x33cd80, Func Offset: 0
	// Line 518, Address: 0x33cda8, Func Offset: 0x28
	// Line 519, Address: 0x33cdac, Func Offset: 0x2c
	// Line 521, Address: 0x33cdb0, Func Offset: 0x30
	// Line 522, Address: 0x33ce50, Func Offset: 0xd0
	// Line 524, Address: 0x33cefc, Func Offset: 0x17c
	// Line 527, Address: 0x33cf18, Func Offset: 0x198
	// Line 530, Address: 0x33cf28, Func Offset: 0x1a8
	// Line 531, Address: 0x33cfcc, Func Offset: 0x24c
	// Line 535, Address: 0x33cfd4, Func Offset: 0x254
	// Line 538, Address: 0x33d0a0, Func Offset: 0x320
	// Line 539, Address: 0x33d0dc, Func Offset: 0x35c
	// Line 541, Address: 0x33d110, Func Offset: 0x390
	// Line 544, Address: 0x33d14c, Func Offset: 0x3cc
	// Line 546, Address: 0x33d158, Func Offset: 0x3d8
	// Line 549, Address: 0x33d35c, Func Offset: 0x5dc
	// Line 550, Address: 0x33d364, Func Offset: 0x5e4
	// Line 551, Address: 0x33d380, Func Offset: 0x600
	// Line 552, Address: 0x33d388, Func Offset: 0x608
	// Line 556, Address: 0x33d38c, Func Offset: 0x60c
	// Line 557, Address: 0x33d390, Func Offset: 0x610
	// Func End, Address: 0x33d3b4, Func Offset: 0x634
}

// xRouteDBRouteToActor__Fiiii
// Start address: 0x33d3c0
int32 xRouteDBRouteToActor(int32 fromObjectType, int32 fromActorID, int32 toObjectType, int32 toActorID)
{
	xRoute* r;
	_xActor* to_actor;
	_xActor* from_actor;
	int32 routeID;
	Vector3D posa;
	// Line 467, Address: 0x33d3c0, Func Offset: 0
	// Line 469, Address: 0x33d3e4, Func Offset: 0x24
	// Line 471, Address: 0x33d3e8, Func Offset: 0x28
	// Line 473, Address: 0x33d3f8, Func Offset: 0x38
	// Line 474, Address: 0x33d404, Func Offset: 0x44
	// Line 476, Address: 0x33d418, Func Offset: 0x58
	// Line 478, Address: 0x33d428, Func Offset: 0x68
	// Line 482, Address: 0x33d4d4, Func Offset: 0x114
	// Line 483, Address: 0x33d4f0, Func Offset: 0x130
	// Line 485, Address: 0x33d504, Func Offset: 0x144
	// Line 486, Address: 0x33d524, Func Offset: 0x164
	// Line 488, Address: 0x33d530, Func Offset: 0x170
	// Line 491, Address: 0x33d734, Func Offset: 0x374
	// Line 492, Address: 0x33d73c, Func Offset: 0x37c
	// Line 493, Address: 0x33d758, Func Offset: 0x398
	// Line 494, Address: 0x33d760, Func Offset: 0x3a0
	// Line 495, Address: 0x33d764, Func Offset: 0x3a4
	// Line 500, Address: 0x33d768, Func Offset: 0x3a8
	// Line 501, Address: 0x33d76c, Func Offset: 0x3ac
	// Func End, Address: 0x33d790, Func Offset: 0x3d0
}

// xRouteDBRouteToPlayer__Fii
// Start address: 0x33d790
int32 xRouteDBRouteToPlayer(int32 objectID, int32 actorID)
{
	int32 routeID;
	// Line 439, Address: 0x33d790, Func Offset: 0
	// Line 440, Address: 0x33d7ac, Func Offset: 0x1c
	// Line 442, Address: 0x33d7b0, Func Offset: 0x20
	// Line 445, Address: 0x33d854, Func Offset: 0xc4
	// Line 447, Address: 0x33d860, Func Offset: 0xd0
	// Line 450, Address: 0x33d87c, Func Offset: 0xec
	// Line 451, Address: 0x33d880, Func Offset: 0xf0
	// Func End, Address: 0x33d89c, Func Offset: 0x10c
}

// xRouteDBRouteAppend__Fii
// Start address: 0x33d8a0
void xRouteDBRouteAppend(int32 routeID, int32 routeAppendID)
{
	xRoute* rb;
	xRoute* ra;
	// Line 381, Address: 0x33d8a0, Func Offset: 0
	// Line 385, Address: 0x33d8b8, Func Offset: 0x18
	// Line 388, Address: 0x33d8d0, Func Offset: 0x30
	// Line 389, Address: 0x33d8e0, Func Offset: 0x40
	// Line 393, Address: 0x33d8e8, Func Offset: 0x48
	// Line 394, Address: 0x33d8f8, Func Offset: 0x58
	// Line 396, Address: 0x33d908, Func Offset: 0x68
	// Line 397, Address: 0x33d9a8, Func Offset: 0x108
	// Line 400, Address: 0x33da48, Func Offset: 0x1a8
	// Line 402, Address: 0x33da58, Func Offset: 0x1b8
	// Line 403, Address: 0x33da6c, Func Offset: 0x1cc
	// Line 406, Address: 0x33da74, Func Offset: 0x1d4
	// Line 408, Address: 0x33da84, Func Offset: 0x1e4
	// Line 409, Address: 0x33da98, Func Offset: 0x1f8
	// Line 413, Address: 0x33daa0, Func Offset: 0x200
	// Line 417, Address: 0x33dab0, Func Offset: 0x210
	// Line 418, Address: 0x33db18, Func Offset: 0x278
	// Line 419, Address: 0x33db20, Func Offset: 0x280
	// Line 422, Address: 0x33db38, Func Offset: 0x298
	// Line 425, Address: 0x33dbfc, Func Offset: 0x35c
	// Func End, Address: 0x33dc18, Func Offset: 0x378
}

// xRouteDBIdle__Fv
// Start address: 0x33dc20
void xRouteDBIdle()
{
	xSearch* s;
	xRoute* r;
	int8 sid;
	int32 i;
	// Line 175, Address: 0x33dc20, Func Offset: 0
	// Line 180, Address: 0x33dc34, Func Offset: 0x14
	// Line 182, Address: 0x33dc40, Func Offset: 0x20
	// Line 183, Address: 0x33dc50, Func Offset: 0x30
	// Line 185, Address: 0x33dc58, Func Offset: 0x38
	// Line 187, Address: 0x33dc64, Func Offset: 0x44
	// Line 190, Address: 0x33dc90, Func Offset: 0x70
	// Line 194, Address: 0x33dd38, Func Offset: 0x118
	// Line 195, Address: 0x33dd44, Func Offset: 0x124
	// Line 196, Address: 0x33ddec, Func Offset: 0x1cc
	// Line 199, Address: 0x33ddf4, Func Offset: 0x1d4
	// Line 202, Address: 0x33de98, Func Offset: 0x278
	// Line 203, Address: 0x33dea8, Func Offset: 0x288
	// Line 205, Address: 0x33deb4, Func Offset: 0x294
	// Line 208, Address: 0x33df58, Func Offset: 0x338
	// Line 209, Address: 0x33df68, Func Offset: 0x348
	// Line 212, Address: 0x33e010, Func Offset: 0x3f0
	// Line 213, Address: 0x33e01c, Func Offset: 0x3fc
	// Line 216, Address: 0x33e028, Func Offset: 0x408
	// Line 217, Address: 0x33e034, Func Offset: 0x414
	// Line 220, Address: 0x33e048, Func Offset: 0x428
	// Line 221, Address: 0x33e058, Func Offset: 0x438
	// Line 223, Address: 0x33e05c, Func Offset: 0x43c
	// Line 224, Address: 0x33e06c, Func Offset: 0x44c
	// Line 227, Address: 0x33e074, Func Offset: 0x454
	// Line 230, Address: 0x33e120, Func Offset: 0x500
	// Line 239, Address: 0x33e130, Func Offset: 0x510
	// Line 244, Address: 0x33e138, Func Offset: 0x518
	// Line 247, Address: 0x33e1e0, Func Offset: 0x5c0
	// Line 253, Address: 0x33e1f4, Func Offset: 0x5d4
	// Line 256, Address: 0x33e23c, Func Offset: 0x61c
	// Line 260, Address: 0x33e24c, Func Offset: 0x62c
	// Line 263, Address: 0x33e264, Func Offset: 0x644
	// Line 264, Address: 0x33e274, Func Offset: 0x654
	// Line 267, Address: 0x33e278, Func Offset: 0x658
	// Line 268, Address: 0x33e284, Func Offset: 0x664
	// Line 271, Address: 0x33e28c, Func Offset: 0x66c
	// Line 272, Address: 0x33e29c, Func Offset: 0x67c
	// Line 275, Address: 0x33e2a4, Func Offset: 0x684
	// Line 276, Address: 0x33e2b4, Func Offset: 0x694
	// Line 279, Address: 0x33e2bc, Func Offset: 0x69c
	// Line 281, Address: 0x33e354, Func Offset: 0x734
	// Line 284, Address: 0x33e35c, Func Offset: 0x73c
	// Line 286, Address: 0x33e3f4, Func Offset: 0x7d4
	// Line 289, Address: 0x33e3fc, Func Offset: 0x7dc
	// Line 290, Address: 0x33e414, Func Offset: 0x7f4
	// Line 301, Address: 0x33e4ac, Func Offset: 0x88c
	// Line 305, Address: 0x33e4b4, Func Offset: 0x894
	// Line 306, Address: 0x33e558, Func Offset: 0x938
	// Line 311, Address: 0x33e560, Func Offset: 0x940
	// Line 317, Address: 0x33e608, Func Offset: 0x9e8
	// Line 318, Address: 0x33e618, Func Offset: 0x9f8
	// Line 320, Address: 0x33e62c, Func Offset: 0xa0c
	// Line 322, Address: 0x33e63c, Func Offset: 0xa1c
	// Line 324, Address: 0x33e6e0, Func Offset: 0xac0
	// Line 325, Address: 0x33e6f0, Func Offset: 0xad0
	// Line 329, Address: 0x33e6f8, Func Offset: 0xad8
	// Line 331, Address: 0x33e708, Func Offset: 0xae8
	// Line 337, Address: 0x33e710, Func Offset: 0xaf0
	// Line 338, Address: 0x33e7c0, Func Offset: 0xba0
	// Line 340, Address: 0x33e870, Func Offset: 0xc50
	// Line 341, Address: 0x33e884, Func Offset: 0xc64
	// Line 342, Address: 0x33e928, Func Offset: 0xd08
	// Line 345, Address: 0x33e948, Func Offset: 0xd28
	// Line 347, Address: 0x33e950, Func Offset: 0xd30
	// Line 349, Address: 0x33e960, Func Offset: 0xd40
	// Line 350, Address: 0x33ea08, Func Offset: 0xde8
	// Line 353, Address: 0x33ea18, Func Offset: 0xdf8
	// Line 356, Address: 0x33ea20, Func Offset: 0xe00
	// Line 357, Address: 0x33eac4, Func Offset: 0xea4
	// Line 360, Address: 0x33eacc, Func Offset: 0xeac
	// Line 365, Address: 0x33eae4, Func Offset: 0xec4
	// Line 366, Address: 0x33eafc, Func Offset: 0xedc
	// Func End, Address: 0x33eb18, Func Offset: 0xef8
}

// xRouteDBSetScene__FP6xScene
// Start address: 0x33eb20
void xRouteDBSetScene(xScene* scene)
{
	xRoute* r;
	int32 i;
	// Line 113, Address: 0x33eb20, Func Offset: 0
	// Line 117, Address: 0x33eb34, Func Offset: 0x14
	// Line 119, Address: 0x33eb44, Func Offset: 0x24
	// Line 121, Address: 0x33eb4c, Func Offset: 0x2c
	// Line 123, Address: 0x33eb58, Func Offset: 0x38
	// Line 124, Address: 0x33eb68, Func Offset: 0x48
	// Line 126, Address: 0x33eb70, Func Offset: 0x50
	// Line 128, Address: 0x33eb7c, Func Offset: 0x5c
	// Line 134, Address: 0x33eba8, Func Offset: 0x88
	// Line 135, Address: 0x33ec50, Func Offset: 0x130
	// Line 139, Address: 0x33ec5c, Func Offset: 0x13c
	// Line 141, Address: 0x33ec60, Func Offset: 0x140
	// Line 152, Address: 0x33ec68, Func Offset: 0x148
	// Line 158, Address: 0x33ec80, Func Offset: 0x160
	// Line 160, Address: 0x33ec8c, Func Offset: 0x16c
	// Line 161, Address: 0x33ec98, Func Offset: 0x178
	// Line 162, Address: 0x33ed3c, Func Offset: 0x21c
	// Line 163, Address: 0x33ed40, Func Offset: 0x220
	// Line 165, Address: 0x33ed50, Func Offset: 0x230
	// Line 166, Address: 0x33ed64, Func Offset: 0x244
	// Func End, Address: 0x33ed7c, Func Offset: 0x25c
}

// xRouteDBGetRoutePtr__Fi
// Start address: 0x33ed80
xRoute* xRouteDBGetRoutePtr(int32 id)
{
	// Line 95, Address: 0x33ed80, Func Offset: 0
	// Line 96, Address: 0x33ed90, Func Offset: 0x10
	// Line 97, Address: 0x33ee30, Func Offset: 0xb0
	// Line 99, Address: 0x33eed4, Func Offset: 0x154
	// Line 100, Address: 0x33ef84, Func Offset: 0x204
	// Line 101, Address: 0x33ef94, Func Offset: 0x214
	// Func End, Address: 0x33efa8, Func Offset: 0x228
}

// xRouteDBInit__Fv
// Start address: 0x33efb0
void xRouteDBInit()
{
	int32 i;
	// Line 46, Address: 0x33efb0, Func Offset: 0
	// Line 49, Address: 0x33efbc, Func Offset: 0xc
	// Line 51, Address: 0x33efc4, Func Offset: 0x14
	// Line 53, Address: 0x33efcc, Func Offset: 0x1c
	// Line 55, Address: 0x33efd8, Func Offset: 0x28
	// Line 56, Address: 0x33f008, Func Offset: 0x58
	// Line 57, Address: 0x33f020, Func Offset: 0x70
	// Line 60, Address: 0x33f034, Func Offset: 0x84
	// Line 63, Address: 0x33f03c, Func Offset: 0x8c
	// Func End, Address: 0x33f050, Func Offset: 0xa0
}

