typedef struct iActorRuntime;
typedef struct _RxClusterDefinition;
typedef struct _RwRaster;
typedef struct _RxOutputSpec;
typedef struct _RxPipelineNode;
typedef struct _rxHeapSuperBlockDescriptor;
typedef enum _rpWorldRenderOrder;
typedef struct _rwResEntryTag;
typedef struct xRouteUseageOneShot;
typedef struct _xActor;
typedef struct iTriggerResource;
typedef struct xAction;
typedef struct _RxHeap;
typedef struct _rxHeapBlockHeader;
typedef struct xTrigger;
typedef struct iMarkerResource;
typedef enum _RxClusterValidityReq;
typedef struct _RpPolygon;
typedef struct _rxHeapFreeBlock;
typedef struct tagxState;
typedef struct _FCinfo;
typedef struct xNavLink;
typedef struct tagxPhysicsObject;
typedef struct _RxPipelineNodeTopSortData;
typedef struct _RwV2d;
typedef struct _iLightRuntime;
typedef struct _xObj;
typedef struct xMarker;
typedef struct xNavPoint;
typedef struct xSearchPoint;
typedef struct tagXAnimControl;
typedef struct xCondition;
typedef struct _p2Geom;
typedef struct _RxPipelineNodeParam;
typedef struct _RxPipelineCluster;
typedef struct xRouteTargetObject;
typedef enum _rxEmbeddedPacketState;
typedef struct p2CameraVersion;
typedef struct _RpWorldSector;
typedef struct xRouteUseagePatrol;
typedef struct _RxNodeDefinition;
typedef enum _RxClusterValid;
typedef struct tagP2Mesh;
typedef struct iLightResource;
typedef struct tagXStreamMDSDirectory;
typedef struct _RwSurfaceProperties;
typedef struct tagxPadAction;
typedef struct tagiAnimFrame;
typedef struct _RpMeshHeader;
typedef struct _iTexRuntime;
typedef struct _tagiEnvRuntime;
typedef struct _RpClump;
typedef struct _RpWorld;
typedef struct _RwV3d;
typedef struct Vector3D;
typedef struct xRouteTargetTrigger;
typedef struct iConditionRuntime;
typedef struct xCamera;
typedef struct _RpCollSector;
typedef struct tagP2VERTEX;
typedef struct tagXAnim;
typedef enum _RwTextureFilterMode;
typedef struct _RwTexDictionary;
typedef struct tagiFloorTri;
typedef struct iCameraResource;
typedef struct _RxPipelineRequiresCluster;
typedef struct iObjRuntime;
typedef struct xRouteUseage;
typedef struct _xTex;
typedef struct tagiAnimResource;
typedef struct _RpSector;
typedef struct tagP2MeshVertex;
typedef struct tagiAnimRuntime;
typedef struct tagP2Weight;
typedef struct tagxStateLink;
typedef struct _RxPipeline;
typedef struct tagxActorDBData;
typedef struct _RwLLLink;
typedef struct xSearch;
typedef struct _rxReq;
typedef struct _class_0;
typedef struct _RpMaterialList;
typedef struct iEntryPointResource;
typedef struct XStreamHeader;
typedef struct _iTexResource;
typedef struct xRouteTargetNavPoint;
typedef struct _RwObject;
typedef struct _RpMaterial;
typedef struct tagxObjDBData;
typedef struct iActionRuntime;
typedef struct tagXAnimTrigger;
typedef struct xListItem;
typedef struct tagxStateThread;
typedef struct Vector4D;
typedef struct xRouteTargetMarker;
typedef struct _RxClusterRef;
typedef struct _RpVertexNormal;
typedef struct xEntryPoint;
typedef struct p2Camera;
typedef struct tagiMesh;
typedef struct iActionResource;
typedef struct _iRenderEffects;
typedef struct _tagxEnv;
typedef struct _RwTexCoords;
typedef struct tagXStreamDirectoryEntry;
typedef struct _RwRGBA;
typedef struct _RxIoSpec;
typedef struct tagxStateMgr;
typedef struct xRoute;
typedef struct tagiFloor;
typedef struct xList;
typedef struct iDisplayCamera;
typedef struct _RxNodeMethods;
typedef struct xRouteTarget;
typedef struct _PVRheader;
typedef struct xScene;
typedef enum _RxClusterForcePresent;
typedef struct _iVFXResource;
typedef struct _RwTexture;
typedef struct _RwBBox;
typedef struct _RxPacket;
typedef enum _RxNodeDefEditable;
typedef struct iConditionResource;
typedef struct _RxClusterUnion;
typedef struct _class_1;
typedef struct _iSFXResource;
typedef struct xRule;
typedef struct _RxCluster;
typedef struct _RwLinkList;
typedef struct iRuleResource;
typedef struct _iEntryPointRuntime;
typedef struct xLight;
typedef enum _RwTextureAddressMode;
typedef struct xRouteTargetActor;

typedef void(*type_0)(int32, int32, int32);
typedef int32(*type_2)(int32, int32, int32);
typedef void(*type_5)(int32, int32, int32);
typedef void(*type_7)(int32, int32, int32, int32);
typedef int32(*type_8)(int32, int32);
typedef void(*type_9)(int32, int32, int32);
typedef int32(*type_11)(int32, int32, int32, int32);
typedef void(*type_15)(int32, int32, int32, int32, int32);
typedef void(*type_16)(_rwResEntryTag*);
typedef int32(*type_17)(int32, int32, int32);
typedef void(*type_18)(int32, int32, int32);
typedef int32(*type_20)(int32, int32);
typedef void(*type_22)(int32, int32, int32);
typedef int32(*type_24)(_RxPipelineNode*, _RxPipelineNodeParam*);
typedef int32(*type_27)(int32, int32, int32, int32);
typedef void(*type_28)(int32, int32, int32);
typedef int32(*type_30)(int32, int32);
typedef int32(*type_31)(int32, int32, int32);
typedef void(*type_33)(int32, int32, int32);
typedef _RpWorldSector*(*type_34)(_RpWorldSector*);
typedef int32(*type_35)(_RxNodeDefinition*);
typedef int32(*type_38)(int32, int32, int32);
typedef int32(*type_40)(int32, int32);
typedef void(*type_41)(_RxNodeDefinition*);
typedef void(*type_44)(int32, int32, int32, int32);
typedef int32(*type_45)(int32, int32, int32, int32);
typedef void(*type_49)(int32, int32, int32, int32, int32);
typedef int32(*type_51)(_RxPipelineNode*);
typedef int32(*type_52)(int32, int32, int32);
typedef int32(*type_53)(int32, int32);
typedef void(*type_55)(int32, int32, int32);
typedef void(*type_57)(_RxPipelineNode*);
typedef int32(*type_59)(int32, int32, int32, int32, int32);
typedef int32(*type_60)(int32, int32, int32);
typedef int32(*type_61)(int32, int32, int32);
typedef void(*type_62)(int32, int32, int32, int32);
typedef void(*type_64)(int32, int32, int32);
typedef int32(*type_65)(_RxPipelineNode*, _RxPipeline*);
typedef int32(*type_67)(int32, int32, int32);
typedef int32(*type_68)(int32, int32, int32);
typedef int32(*type_69)(int32, int32, int32, int32);
typedef void(*type_71)(int32, int32, int32, int32);
typedef int32(*type_72)(int32, int32);
typedef int32(*type_76)(int32, int32, int32);
typedef int32(*type_77)(int32, int32, int32);
typedef uint32(*type_78)(_RxPipelineNode*, uint32, uint32, void*);
typedef int32(*type_80)(int32, int32, int32, int32);
typedef void(*type_82)(int32, int32, int32, int32);
typedef int32(*type_85)(int32, int32, int32, int32);
typedef int32(*type_86)(int32, int32);
typedef void(*type_88)(int32, int32, int32);
typedef int32(*type_89)(int32, int32, int32);
typedef _RpClump*(*type_90)(_RpClump*, void*);
typedef int32(*type_91)(int32, int32);
typedef int32(*type_94)(int32, int32, int32, int32);
typedef int32(*type_97)(int32, int32, int32);
typedef void(*type_98)(int32, int32, int32);
typedef int32(*type_100)(int32, int32);
typedef int32(*type_101)(int32, int32, int32);
typedef int32(*type_104)(int32, int32, int32, int32);
typedef void(*type_105)(int32, int32, int32);
typedef int32(*type_106)(int32, int32, int32);
typedef void(*type_109)(int32);
typedef int32(*type_111)(int32, int32, int32);
typedef int32(*type_115)(int32, int32, int32);
typedef void(*type_116)(int32);
typedef int32(*type_117)(int32, int32);
typedef void(*type_119)(int32, int32, int32, int32, int32);
typedef int32(*type_124)(int32, int32, int32, int32);
typedef int32(*type_126)(int32, int32, int32);
typedef void(*type_127)(int32, int32, int32);
typedef void(*type_129)(int32, int32, int32, int32);
typedef int32(*type_130)(int32, int32, int32, int32);
typedef void(*type_131)(int32, int32, int32);
typedef void(*type_133)(_xActor*, int32, tagXAnim*, tagXAnimTrigger*);
typedef int32(*type_137)(int32, int32, int32, int32);
typedef int32(*type_139)(int32, int32, int32);
typedef void(*type_142)(int32, int32, int32);
typedef int32(*type_143)(int32, int32, int32);
typedef void(*type_144)(int32, int32, int32);
typedef int32(*type_145)(int32, int32, int32, int32);
typedef void(*type_149)(int32, int32, int32, int32, int32, int32, int32);
typedef int32(*type_152)(int32, int32, int32);
typedef void(*type_154)(int32, int32);
typedef int32(*type_157)(int32, int32, int32);
typedef int32(*type_159)(int32, int32, int32, int32);
typedef void(*type_160)(int32, int32, int32, int32);
typedef void(*type_164)(int32, int32, int32, int32, int32);
typedef int32(*type_166)(int32, int32, int32, int32);
typedef void(*type_167)(int32, int32, int32, int32, int32, int32, int32);
typedef int32(*type_169)(int32, int32, int32, int32);
typedef void(*type_172)(int32, int32, int32);
typedef int32(*type_173)(int32, int32, int32, int32);
typedef int32(*type_174)(int32, int32, int32);

typedef _xActor type_1[4];
typedef _xActor type_3[1];
typedef iTriggerResource* type_4[20];
typedef uint8 type_6[4];
typedef _xActor type_10[4];
typedef _xActor type_12[4];
typedef uint8 type_13[3];
typedef iTriggerResource* type_14[20];
typedef uint16 type_19[3];
typedef _xActor type_21[2];
typedef uint16 type_23[3];
typedef iTriggerResource* type_25[20];
typedef _xActor type_26[1];
typedef _xActor type_29[1];
typedef float32 type_32[3];
typedef iTriggerResource* type_36[20];
typedef _xActor type_37[1];
typedef _xActor type_39[4];
typedef tagXStreamDirectoryEntry type_42[1000];
typedef _xActor type_43[4];
typedef Vector3D type_46[5];
typedef _xActor type_47[1];
typedef uint32 type_48[4];
typedef iLightResource type_50[2];
typedef _xActor type_54[1];
typedef _xActor* type_56[40];
typedef int8 type_58[40];
typedef _xActor* type_63[13];
typedef _xActor type_66[1];
typedef _xActor type_70[4];
typedef _xActor type_73[4];
typedef _xObj type_74[32];
typedef _xActor type_75[1];
typedef _xActor type_79[4];
typedef Vector3D type_81[4];
typedef p2CameraVersion type_83[5];
typedef _xActor type_84[4];
typedef _xActor type_87[4];
typedef _xActor type_92[4];
typedef _RxCluster type_93[1];
typedef _xActor type_95[1];
typedef int8 type_96[2048];
typedef _xActor type_99[4];
typedef tagxState* type_102[10];
typedef _xActor type_103[4];
typedef _xActor type_107[4];
typedef iTriggerResource* type_108[20];
typedef uint8 type_110[3];
typedef _xActor type_112[1];
typedef _xActor type_113[1];
typedef iTriggerResource* type_114[20];
typedef uint8 type_118[2];
typedef _xActor type_120[1];
typedef Vector3D type_121[4];
typedef _xActor type_122[1];
typedef iTriggerResource* type_123[20];
typedef _xActor type_125[1];
typedef int8 type_128[32];
typedef _xActor type_132[1];
typedef iTriggerResource* type_134[20];
typedef int8 type_135[32];
typedef _xActor type_136[1];
typedef uint8 type_138[3];
typedef _xActor type_140[1];
typedef iTriggerResource* type_141[20];
typedef uint16 type_146[3];
typedef int8 type_147[128];
typedef _xActor type_148[4];
typedef uint8 type_150[4];
typedef _xActor type_151[4];
typedef iTriggerResource* type_153[20];
typedef uint8 type_155[4];
typedef _xActor type_156[4];
typedef uint32 type_158[3];
typedef uint8 type_161[4];
typedef _xActor type_162[1];
typedef iTriggerResource* type_163[20];
typedef _xActor type_165[1];
typedef int32 type_168[7];
typedef _xActor type_170[1];
typedef iTriggerResource* type_171[20];
typedef tagxStateThread type_175[7];

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

struct xRouteUseageOneShot
{
	int32 m_unused;
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

struct xAction
{
	iActionResource* m_resource;
	iActionRuntime* m_runtime;
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

struct xTrigger
{
	iTriggerResource* m_resource;
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

struct _RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
};

struct _rxHeapFreeBlock
{
	uint32 size;
	_rxHeapBlockHeader* ptr;
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

struct _RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	_rxReq* req;
	void* initialisationData;
	uint32 initialisationDataSize;
};

struct _RwV2d
{
	float32 x;
	float32 y;
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

struct xCondition
{
	iConditionResource* m_resource;
	iConditionRuntime* m_runtime;
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

struct xRouteTargetObject
{
	int32 m_id;
};

enum _rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
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

struct xRouteUseagePatrol
{
	int32 m_patrolDir;
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

struct iLightResource
{
	uint32 m_type;
	Vector3D m_pos;
	Vector3D m_rot;
	Vector3D m_color;
	int32 m_fov;
};

struct tagXStreamMDSDirectory
{
	uint32 count;
	tagXStreamDirectoryEntry directory[1000];
};

struct _RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
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

struct _iTexRuntime
{
	void* surface;
	uint32 m_flags;
};

struct _tagiEnvRuntime
{
	_RpWorld* world;
	Vector3D world_origin;
	_RwTexDictionary* tex_dict;
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

struct _RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct Vector3D
{
	float32 x;
	float32 y;
	float32 z;
};

struct xRouteTargetTrigger
{
	int32 m_id;
};

struct iConditionRuntime
{
	xCondition* m_operand;
	uint16 m_match;
	uint16 m_trigger;
};

struct xCamera
{
	iCameraResource* m_resource;
	void** m_runtime;
};

struct _RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
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

struct iCameraResource
{
	uint16 m_plateOffset;
	uint16 m_versions;
	p2CameraVersion m_version[5];
	uint32 m_frameCount;
	p2Camera* m_cameras;
};

struct _RxPipelineRequiresCluster
{
	_RxClusterDefinition* clusterDef;
	_RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct iObjRuntime
{
	int16 m_flag;
	int16 m_pad;
	_p2Geom* m_geom;
	float32 m_bradius;
	tagxPhysicsObject m_phys;
};

struct xRouteUseage
{
	int32 m_type;
	int32 m_dir;
	_class_0 u;
};

struct _xTex
{
	_iTexResource* m_resource;
	_iTexRuntime* m_runtime;
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

struct _rxReq
{
};

struct _class_0
{
	union
	{
		xRouteUseagePatrol m_patrol;
		xRouteUseageOneShot m_oneShot;
	};
};

struct _RpMaterialList
{
	_RpMaterial** materials;
	int32 numMaterials;
	int32 space;
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

struct _iTexResource
{
	uint32 m_assetID;
	uint32 pad[3];
	_PVRheader header;
};

struct xRouteTargetNavPoint
{
	int32 m_id;
};

struct _RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
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

struct tagxObjDBData
{
	_xObj m_o[32];
	int32 m_staticObjects;
	int32 m_staticAssets;
};

struct iActionRuntime
{
	xAction* m_and;
};

struct tagXAnimTrigger
{
	uint16 m_frame;
	uint16 m_type;
	uint32 m_data;
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

struct Vector4D
{
	float32 x;
	float32 y;
	float32 z;
	float32 t;
};

struct xRouteTargetMarker
{
	int32 m_id;
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

struct tagiMesh
{
};

struct iActionResource
{
	uint8 m_cmdType;
	uint8 m_cmd;
	uint16 pad;
	uint32 m_cmdParameter;
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

struct _tagxEnv
{
	_tagiEnvRuntime* m_runtime;
};

struct _RwTexCoords
{
	float32 u;
	float32 v;
};

struct tagXStreamDirectoryEntry
{
	uint32 id;
	uint32 type;
	uint32 offset;
	uint32 length;
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

struct xList
{
	xListItem* m_head;
	xListItem* m_tail;
};

struct iDisplayCamera
{
	Vector3D m_pos;
	Vector3D m_rot;
	float32 m_fov;
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

struct xRouteTarget
{
	int8 m_type;
	uint8 m_hasLOSToTarget;
	uint8 m_pad2[2];
	Vector3D m_pos;
	float32 m_rerouteThreshold;
	_class_1 t;
};

struct _PVRheader
{
	uint32 id;
	uint32 nTextureDataSize;
	uint32 nTextureType;
	uint16 nWidth;
	uint16 nHeight;
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

enum _RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
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

struct _RxClusterUnion
{
	union
	{
		_RxClusterDefinition* clusterDef;
		_RxPipelineCluster* clusterRef;
	};
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

struct xRule
{
	iRuleResource* m_resource;
	void* m_runtime;
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

struct xLight
{
	iLightResource* m_resource;
	_iLightRuntime* m_runtime;
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

struct xRouteTargetActor
{
	int32 m_type;
	int32 m_id;
};

int8 vAssertBuf2[128];
XStreamHeader currentHeader;
tagxActorDBData* gadb;
float32 g_DEGTORAD;
xScene* xScene_current;
tagxObjDBData* godb;
float32 g_RADTODEG;
float32 g_2_PI;
float32 g_PI;
float32 g_PI_DIV_2;
void(*actorEffectSetFlag)(int32, int32, int32, int32);
void(*actorEffectReflect)(int32, int32, int32, int32, int32, int32, int32);
int32(*actorEffectFadeDone)(int32, int32);
void(*actorEffectFadeStart)(int32, int32, int32, int32);
void(*actorEffectFadeInfo)(int32, int32, int32, int32, int32, int32, int32);
int32(*actorFlagsGet)(int32, int32);
int32(*actorFlagsSet)(int32, int32, int32);
int32(*actorFlagsSub)(int32, int32, int32);
int32(*actorFlagsAdd)(int32, int32, int32);
void(*actorSetPartVisible)(int32, int32, int32, int32, int32);
void(*actorChangeSFXAction)(int32);
void(*actorChangeVFXAction)(int32);
void(*actorSetPositionActor)(int32, int32, int32, int32);
void(*actorSetPositionNavigationPoint)(int32, int32, int32);
void(*actorSetPositionMarkerAbsolute)(int32, int32, int32);
void(*actorSetPositionMarker)(int32, int32, int32);
void(*actorSetPosition)(int32, int32, int32, int32, int32);
void(*actorSetPositionFloorHeight)(int32, int32, int32);
void(*actorRecordObjectSpot)(int32, int32, int32, int32);
void(*actorRecordNavPointSpot)(int32, int32, int32, int32);
void(*actorRecordMarkerSpot)(int32, int32, int32, int32);
void(*actorRecordActorSpot)(int32, int32, int32, int32, int32);
void(*actorMoveAwayFromActor)(int32, int32, int32, int32, int32);
int32(*actorDistanceBetweenSpots3D)(int32, int32, int32, int32);
int32(*actorDistanceBetweenSpots)(int32, int32, int32, int32);
int32(*actorDistanceToRecordedPosition3D)(int32, int32, int32);
int32(*actorDistanceToRecordedPosition)(int32, int32, int32);
int32(*actorDistanceToMarker3D)(int32, int32, int32);
int32(*actorDistanceToMarker)(int32, int32, int32);
int32(*actorDistanceToNavPoint3D)(int32, int32, int32);
int32(*actorDistanceToNavPoint)(int32, int32, int32);
int32(*actorDistanceToObj3D)(int32, int32, int32);
int32(*actorDistanceToObj)(int32, int32, int32);
int32(*actorDistanceToActor3D)(int32, int32, int32, int32);
int32(*actorDistanceToActor)(int32, int32, int32, int32);
int32(*actorIsVisible)(int32, int32, int32, int32);
int32(*actorInFOV)(int32, int32, int32, int32);
int32(*actorMoveVertical)(int32, int32, int32);
int32(*actorMoveForward)(int32, int32, int32);
int32(*actorMoveStrafe)(int32, int32, int32);
int32(*actorGetPickupObject)(int32, int32, int32);
void(*actorFaceObject)(int32, int32, int32);
void(*actorFacePosition)(int32, int32, int32);
void(*actorFaceNavPoint)(int32, int32, int32);
void(*actorFaceMarker)(int32, int32, int32);
void(*actorFaceActor)(int32, int32, int32, int32);
void(*actorFace)(int32, int32, int32);
int32(*actorIsFacingObj)(int32, int32, int32, int32);
int32(*actorIsFacingPosition)(int32, int32, int32, int32);
int32(*actorIsFacingNavPoint)(int32, int32, int32, int32);
int32(*actorIsFacingMarker)(int32, int32, int32, int32);
int32(*actorIsFacingActor)(int32, int32, int32, int32, int32);
int32(*actorHaveLOSToObject)(int32, int32, int32);
int32(*actorHaveLOSToActor)(int32, int32, int32, int32);
int32(*actorHaveLOSToNavPoint)(int32, int32, int32);
int32(*actorHaveLOSToSpot)(int32, int32, int32);
int32(*actorHaveLOSToMarker)(int32, int32, int32);
int32(*actorHaveLOSToDir)(int32, int32, int32, int32);
int32(*actorGetFlags)(int32, int32);
int32(*actorGetRotY)(int32, int32);
int32(*actorGetPositionZ)(int32, int32);
int32(*actorGetPositionY)(int32, int32);
int32(*actorGetPositionX)(int32, int32);
int32(*actorGetNearestNavPoint)(int32, int32, int32, int32);
int32(*actorGetNearestMarker)(int32, int32, int32, int32);
void(*actorTurn)(int32, int32, int32);
int32(*actorGetRelativeMarkerAngle)(int32, int32, int32);
int32(*actorGetRelativeAngle)(int32, int32, int32, int32);
int32(*actorGetAngle)(int32, int32);
void(*actorSetCollisionFlags)(int32, int32, int32);
int32(*actorInEntryPoint)(int32, int32, int32);
int32(*actorInTrigger)(int32, int32, int32);
int32(*xActorDBConsoleAction)(int32, int32, int32);
int32(*actorRoutePosition)(int32, int32);
int32(*actorRouteStatus)(int32, int32);
void(*xActorDBSetRoute)(int32, int32, int32);
void(*actorSetTexture)(int32, int32, int32);
int32(*actorCreate)(int32, int32, int32, int32);
void(*actorDestroy)(int32, int32);
void(*actorSetBRadius)(int32, int32, int32);
void(*actorSetAttrSight)(int32, int32, int32);
void(*actorSetAttrFOV)(int32, int32, int32);
void(*actorSetVisible)(int32, int32, int32);

void actorSetPartVisible(int32 actorType, int32 actorID, int32 partID, int32 makeVisible, int32 hideOtherParts);
void actorChangeSFXAction();
void actorChangeVFXAction();
void xActorDebugGetActorType(int32 type, int8* string);
int32 actorFlagsGet(int32 actorType, int32 actorID);
int32 actorFlagsSet(int32 actorType, int32 actorID, int32 flags);
int32 actorFlagsSub(int32 actorType, int32 actorID, int32 flags);
int32 actorFlagsAdd(int32 actorType, int32 actorID, int32 flags);
void actorSetCollisionFlags(int32 actorType, int32 actorID, int32 flags);
void actorFace(int32 objectType, int32 actorID, int32 degrees);
void actorTurn(int32 objectType, int32 actorID, int32 degDelta);
int32 actorIsVisible(int32 objectType, int32 actorID, int32 targetObjectType, int32 targetActorID);
int32 actorInFOV(int32 objectType, int32 actorID, int32 targetObjectType, int32 targetActorID);
int32 actorInTrigger(int32 objectType, int32 actorID, int32 triggerID);
int32 actorInEntryPoint(int32 objectType, int32 actorID, int32 entryPointID);
void actorRecordObjectSpot(int32 actorType, int32 actorID, int32 objID, int32 memPosIndex);
void actorRecordNavPointSpot(int32 actorType, int32 actorID, int32 navID, int32 memPosIndex);
void actorRecordMarkerSpot(int32 actorType, int32 actorID, int32 markerID, int32 memPosIndex);
void actorRecordActorSpot(int32 objectType, int32 actorID, int32 targetObjectType, int32 targetActorID, int32 memoryPosIndex);
int32 actorGetNearestMarker(int32 actorType, int32 actorID, int32 minDistance, int32 maxDistance);
int32 actorGetNearestNavPoint(int32 actorType, int32 actorID, int32 minDistance, int32 maxDistance);
int32 actorGetPickupObject(int32 actorType, int32 actorID, int32 whichOne);
int32 actorGetRelativeMarkerAngle(int32 objectType, int32 actorID, int32 markerID);
int32 actorGetRelativeAngle(int32 objectType, int32 actorID, int32 targetObjectType, int32 targetActorID);
int32 actorIsFacingObj(int32 objectType, int32 actorID, int32 objID, int32 delta);
int32 actorIsFacingActor(int32 objectType, int32 actorID, int32 targetObjectType, int32 targetActorID, int32 delta);
int32 actorIsFacingPosition(int32 actorType, int32 actorID, int32 posID, int32 delta);
int32 actorIsFacingNavPoint(int32 actorType, int32 actorID, int32 navID, int32 delta);
int32 actorIsFacingMarker(int32 actorType, int32 actorID, int32 markerID, int32 delta);
int32 actorHaveLOSToNavPoint(int32 actorType, int32 actorID, int32 navID);
int32 actorHaveLOSToObject(int32 actorType, int32 actorID, int32 objID);
int32 actorHaveLOSToSpot(int32 actorType, int32 actorID, int32 spotID);
int32 actorHaveLOSToActor(int32 actorType, int32 actorID, int32 targetActorType, int32 targetActorID);
int32 actorHaveLOSToMarker(int32 actorType, int32 actorID, int32 markerID);
int32 actorHaveLOSToDir(int32 actorType, int32 actorID, int32 deltaX, int32 deltaZ);
int32 actorGetAngle(int32 objectType, int32 actorID);
int32 actorMoveVertical(int32 actorType, int32 actorID, int32 amount);
void actorMoveAwayFromActor(int32 type, int32 id, int32 fromType, int32 fromID, int32 distance);
int32 actorMoveForward(int32 objectType, int32 actorID, int32 amount);
int32 actorMoveStrafe(int32 objectType, int32 actorID, int32 amount);
void actorFaceActor(int32 actorType, int32 actorID, int32 targetObjectType, int32 targetActorID);
void actorFacePosition(int32 actorType, int32 actorID, int32 posID);
void actorFaceObject(int32 actorType, int32 actorID, int32 objID);
void actorFaceNavPoint(int32 actorType, int32 actorID, int32 navID);
void actorFaceMarker(int32 actorType, int32 actorID, int32 markerID);
int32 actorDistanceToNavPoint3D(int32 actorType, int32 actorID, int32 navID);
int32 actorDistanceToNavPoint(int32 actorType, int32 actorID, int32 navID);
int32 actorDistanceToMarker3D(int32 actorType, int32 actorID, int32 markerID);
int32 actorDistanceToMarker(int32 actorType, int32 actorID, int32 markerID);
int32 actorDistanceToRecordedPosition3D(int32 objectType, int32 actorID, int32 recordedIndex);
int32 actorDistanceToRecordedPosition(int32 objectType, int32 actorID, int32 recordedIndex);
int32 actorDistanceBetweenSpots(int32 actorType, int32 actorID, int32 spot1, int32 spot2);
int32 actorDistanceBetweenSpots3D(int32 actorType, int32 actorID, int32 spot1, int32 spot2);
int32 actorDistanceToObj3D(int32 objectType, int32 actorID, int32 objID);
int32 actorDistanceToObj(int32 objectType, int32 actorID, int32 objID);
int32 actorDistanceToActor3D(int32 objectType, int32 actorID, int32 targetObjectType, int32 targetActorID);
int32 actorDistanceToActor(int32 objectType, int32 actorID, int32 targetObjectType, int32 targetActorID);
void actorDestroy(int32 objectType, int32 actorID);
void actorSetTexture(int32 actorType, int32 actorID, int32 textureID);
int32 actorCreate(int32 objectType, int32 modelID, int32 skeletonID, int32 textureID);
void actorSetBRadius(int32 objectType, int32 actorID, int32 bradius);
void actorSetAttrSight(int32 objectType, int32 actorID, int32 sight);
void actorSetAttrFOV(int32 objectType, int32 actorID, int32 fov);
void actorSetPositionFloorHeight(int32 actorType, int32 actorID, int32 y);
void actorSetPosition(int32 objectType, int32 actorID, int32 x, int32 y, int32 z);
void actorSetPositionNavigationPoint(int32 objectType, int32 actorID, int32 navID);
void actorSetPositionMarkerAbsolute(int32 objectType, int32 actorID, int32 markerID);
void actorSetPositionMarker(int32 objectType, int32 actorID, int32 markerID);
int32 actorRoutePosition(int32 objectType, int32 actorID);
int32 actorRouteStatus(int32 actorType, int32 actorID);
void actorSetPositionActor(int32 objectType, int32 actorID, int32 toObjectType, int32 toActorID);
int32 actorGetFlags(int32 type, int32 id);
int32 actorGetRotY(int32 type, int32 id);
int32 actorGetPositionZ(int32 type, int32 id);
int32 actorGetPositionY(int32 type, int32 id);
int32 actorGetPositionX(int32 type, int32 id);
void actorSetVisible(int32 type, int32 id, int32 visible);
void actorEffectSetFlag(int32 actorType, int32 actorID, int32 flag, int32 mode);
void actorEffectReflect(int32 actorType, int32 actorID, int32 r, int32 g, int32 b, int32 mode);
void actorEffectFadeInfo(int32 actorType, int32 actorID, int32 r, int32 g, int32 b, int32 mode, int32 idx);
void actorEffectFadeStart(int32 actorType, int32 actorID, int32 flag, int32 time);
int32 actorEffectFadeDone(int32 actorType, int32 actorID);
void xActorDBScriptRegister();

// actorSetPartVisible__Fiiiii
// Start address: 0x3d7e60
void actorSetPartVisible(int32 actorType, int32 actorID, int32 partID, int32 makeVisible, int32 hideOtherParts)
{
	iActorRuntime* r;
	_xActor* a;
	// Line 2790, Address: 0x3d7e60, Func Offset: 0
	// Line 2795, Address: 0x3d7e90, Func Offset: 0x30
	// Line 2796, Address: 0x3d7f30, Func Offset: 0xd0
	// Line 2798, Address: 0x3d7fe0, Func Offset: 0x180
	// Line 2799, Address: 0x3d8000, Func Offset: 0x1a0
	// Line 2801, Address: 0x3d80a0, Func Offset: 0x240
	// Line 2802, Address: 0x3d80a4, Func Offset: 0x244
	// Line 2805, Address: 0x3d8144, Func Offset: 0x2e4
	// Line 2806, Address: 0x3d814c, Func Offset: 0x2ec
	// Line 2807, Address: 0x3d8160, Func Offset: 0x300
	// Line 2809, Address: 0x3d8174, Func Offset: 0x314
	// Func End, Address: 0x3d8198, Func Offset: 0x338
}

// actorChangeSFXAction__Fi
// Start address: 0x3d81a0
void actorChangeSFXAction()
{
	// Line 2780, Address: 0x3d81a0, Func Offset: 0
	// Line 2781, Address: 0x3d81a8, Func Offset: 0x8
	// Line 2782, Address: 0x3d81b8, Func Offset: 0x18
	// Func End, Address: 0x3d81c8, Func Offset: 0x28
}

// actorChangeVFXAction__Fi
// Start address: 0x3d81d0
void actorChangeVFXAction()
{
	// Line 2771, Address: 0x3d81d0, Func Offset: 0
	// Line 2772, Address: 0x3d81d8, Func Offset: 0x8
	// Line 2773, Address: 0x3d81e8, Func Offset: 0x18
	// Func End, Address: 0x3d81f8, Func Offset: 0x28
}

// xActorDebugGetActorType__FiPc
// Start address: 0x3d8200
void xActorDebugGetActorType(int32 type, int8* string)
{
	// Line 2639, Address: 0x3d8200, Func Offset: 0
	// Line 2640, Address: 0x3d8208, Func Offset: 0x8
	// Line 2643, Address: 0x3d8230, Func Offset: 0x30
	// Line 2644, Address: 0x3d8244, Func Offset: 0x44
	// Line 2646, Address: 0x3d824c, Func Offset: 0x4c
	// Line 2647, Address: 0x3d8260, Func Offset: 0x60
	// Line 2649, Address: 0x3d8268, Func Offset: 0x68
	// Line 2650, Address: 0x3d827c, Func Offset: 0x7c
	// Line 2652, Address: 0x3d8284, Func Offset: 0x84
	// Line 2653, Address: 0x3d8298, Func Offset: 0x98
	// Line 2655, Address: 0x3d82a0, Func Offset: 0xa0
	// Line 2656, Address: 0x3d82b4, Func Offset: 0xb4
	// Line 2658, Address: 0x3d82bc, Func Offset: 0xbc
	// Line 2659, Address: 0x3d82d0, Func Offset: 0xd0
	// Line 2661, Address: 0x3d82d8, Func Offset: 0xd8
	// Line 2662, Address: 0x3d82ec, Func Offset: 0xec
	// Line 2664, Address: 0x3d82f4, Func Offset: 0xf4
	// Line 2665, Address: 0x3d8308, Func Offset: 0x108
	// Line 2667, Address: 0x3d8310, Func Offset: 0x110
	// Line 2668, Address: 0x3d8324, Func Offset: 0x124
	// Line 2670, Address: 0x3d832c, Func Offset: 0x12c
	// Line 2671, Address: 0x3d8340, Func Offset: 0x140
	// Line 2673, Address: 0x3d8348, Func Offset: 0x148
	// Line 2674, Address: 0x3d835c, Func Offset: 0x15c
	// Line 2676, Address: 0x3d8364, Func Offset: 0x164
	// Line 2677, Address: 0x3d8378, Func Offset: 0x178
	// Line 2679, Address: 0x3d8380, Func Offset: 0x180
	// Line 2680, Address: 0x3d8394, Func Offset: 0x194
	// Line 2682, Address: 0x3d839c, Func Offset: 0x19c
	// Line 2683, Address: 0x3d83b0, Func Offset: 0x1b0
	// Line 2685, Address: 0x3d83b8, Func Offset: 0x1b8
	// Line 2686, Address: 0x3d83cc, Func Offset: 0x1cc
	// Line 2688, Address: 0x3d83d4, Func Offset: 0x1d4
	// Line 2689, Address: 0x3d83e8, Func Offset: 0x1e8
	// Line 2691, Address: 0x3d83f0, Func Offset: 0x1f0
	// Line 2692, Address: 0x3d8404, Func Offset: 0x204
	// Line 2694, Address: 0x3d840c, Func Offset: 0x20c
	// Line 2695, Address: 0x3d8420, Func Offset: 0x220
	// Line 2697, Address: 0x3d8428, Func Offset: 0x228
	// Line 2698, Address: 0x3d843c, Func Offset: 0x23c
	// Line 2700, Address: 0x3d8444, Func Offset: 0x244
	// Line 2701, Address: 0x3d8458, Func Offset: 0x258
	// Line 2703, Address: 0x3d8460, Func Offset: 0x260
	// Line 2704, Address: 0x3d8474, Func Offset: 0x274
	// Line 2706, Address: 0x3d847c, Func Offset: 0x27c
	// Line 2707, Address: 0x3d8490, Func Offset: 0x290
	// Line 2709, Address: 0x3d8498, Func Offset: 0x298
	// Line 2710, Address: 0x3d84ac, Func Offset: 0x2ac
	// Line 2712, Address: 0x3d84b4, Func Offset: 0x2b4
	// Line 2713, Address: 0x3d84c8, Func Offset: 0x2c8
	// Line 2715, Address: 0x3d84d0, Func Offset: 0x2d0
	// Line 2716, Address: 0x3d84e4, Func Offset: 0x2e4
	// Line 2718, Address: 0x3d84ec, Func Offset: 0x2ec
	// Line 2719, Address: 0x3d8500, Func Offset: 0x300
	// Line 2721, Address: 0x3d8508, Func Offset: 0x308
	// Line 2722, Address: 0x3d851c, Func Offset: 0x31c
	// Line 2724, Address: 0x3d8524, Func Offset: 0x324
	// Line 2725, Address: 0x3d8538, Func Offset: 0x338
	// Line 2727, Address: 0x3d8540, Func Offset: 0x340
	// Line 2728, Address: 0x3d8554, Func Offset: 0x354
	// Line 2730, Address: 0x3d855c, Func Offset: 0x35c
	// Line 2731, Address: 0x3d8570, Func Offset: 0x370
	// Line 2733, Address: 0x3d8578, Func Offset: 0x378
	// Line 2734, Address: 0x3d858c, Func Offset: 0x38c
	// Line 2736, Address: 0x3d8594, Func Offset: 0x394
	// Line 2737, Address: 0x3d85a8, Func Offset: 0x3a8
	// Line 2739, Address: 0x3d85b0, Func Offset: 0x3b0
	// Line 2740, Address: 0x3d85c4, Func Offset: 0x3c4
	// Line 2742, Address: 0x3d85cc, Func Offset: 0x3cc
	// Line 2743, Address: 0x3d85e0, Func Offset: 0x3e0
	// Line 2745, Address: 0x3d85e8, Func Offset: 0x3e8
	// Line 2746, Address: 0x3d85fc, Func Offset: 0x3fc
	// Line 2748, Address: 0x3d8604, Func Offset: 0x404
	// Line 2749, Address: 0x3d8618, Func Offset: 0x418
	// Line 2751, Address: 0x3d8620, Func Offset: 0x420
	// Line 2752, Address: 0x3d8634, Func Offset: 0x434
	// Line 2754, Address: 0x3d863c, Func Offset: 0x43c
	// Line 2755, Address: 0x3d8650, Func Offset: 0x450
	// Line 2757, Address: 0x3d8658, Func Offset: 0x458
	// Line 2758, Address: 0x3d866c, Func Offset: 0x46c
	// Line 2760, Address: 0x3d8674, Func Offset: 0x474
	// Line 2763, Address: 0x3d8688, Func Offset: 0x488
	// Func End, Address: 0x3d8698, Func Offset: 0x498
}

// actorFlagsGet__Fii
// Start address: 0x3d86a0
int32 actorFlagsGet(int32 actorType, int32 actorID)
{
	_xActor* a;
	// Line 2620, Address: 0x3d86a0, Func Offset: 0
	// Line 2623, Address: 0x3d86b8, Func Offset: 0x18
	// Line 2624, Address: 0x3d8758, Func Offset: 0xb8
	// Line 2626, Address: 0x3d8808, Func Offset: 0x168
	// Line 2627, Address: 0x3d8828, Func Offset: 0x188
	// Line 2629, Address: 0x3d88c8, Func Offset: 0x228
	// Line 2630, Address: 0x3d88cc, Func Offset: 0x22c
	// Func End, Address: 0x3d88e4, Func Offset: 0x244
}

// actorFlagsSet__Fiii
// Start address: 0x3d88f0
int32 actorFlagsSet(int32 actorType, int32 actorID, int32 flags)
{
	_xActor* a;
	// Line 2601, Address: 0x3d88f0, Func Offset: 0
	// Line 2605, Address: 0x3d8910, Func Offset: 0x20
	// Line 2606, Address: 0x3d89b0, Func Offset: 0xc0
	// Line 2608, Address: 0x3d8a60, Func Offset: 0x170
	// Line 2609, Address: 0x3d8a80, Func Offset: 0x190
	// Line 2611, Address: 0x3d8b20, Func Offset: 0x230
	// Line 2612, Address: 0x3d8b24, Func Offset: 0x234
	// Line 2613, Address: 0x3d8b28, Func Offset: 0x238
	// Func End, Address: 0x3d8b44, Func Offset: 0x254
}

// actorFlagsSub__Fiii
// Start address: 0x3d8b50
int32 actorFlagsSub(int32 actorType, int32 actorID, int32 flags)
{
	_xActor* a;
	// Line 2578, Address: 0x3d8b50, Func Offset: 0
	// Line 2582, Address: 0x3d8b70, Func Offset: 0x20
	// Line 2583, Address: 0x3d8c10, Func Offset: 0xc0
	// Line 2585, Address: 0x3d8cc0, Func Offset: 0x170
	// Line 2586, Address: 0x3d8ce0, Func Offset: 0x190
	// Line 2588, Address: 0x3d8d80, Func Offset: 0x230
	// Line 2590, Address: 0x3d8d9c, Func Offset: 0x24c
	// Line 2591, Address: 0x3d8da8, Func Offset: 0x258
	// Line 2593, Address: 0x3d8db4, Func Offset: 0x264
	// Line 2594, Address: 0x3d8db8, Func Offset: 0x268
	// Func End, Address: 0x3d8dd4, Func Offset: 0x284
}

// actorFlagsAdd__Fiii
// Start address: 0x3d8de0
int32 actorFlagsAdd(int32 actorType, int32 actorID, int32 flags)
{
	_xActor* a;
	// Line 2554, Address: 0x3d8de0, Func Offset: 0
	// Line 2558, Address: 0x3d8e00, Func Offset: 0x20
	// Line 2559, Address: 0x3d8ea0, Func Offset: 0xc0
	// Line 2561, Address: 0x3d8f50, Func Offset: 0x170
	// Line 2562, Address: 0x3d8f70, Func Offset: 0x190
	// Line 2564, Address: 0x3d9010, Func Offset: 0x230
	// Line 2566, Address: 0x3d901c, Func Offset: 0x23c
	// Line 2567, Address: 0x3d9028, Func Offset: 0x248
	// Line 2569, Address: 0x3d9034, Func Offset: 0x254
	// Line 2571, Address: 0x3d9038, Func Offset: 0x258
	// Func End, Address: 0x3d9054, Func Offset: 0x274
}

// actorSetCollisionFlags__Fiii
// Start address: 0x3d9060
void actorSetCollisionFlags(int32 actorType, int32 actorID, int32 flags)
{
	iActorRuntime* r;
	_xActor* a;
	// Line 2530, Address: 0x3d9060, Func Offset: 0
	// Line 2535, Address: 0x3d9080, Func Offset: 0x20
	// Line 2536, Address: 0x3d9120, Func Offset: 0xc0
	// Line 2538, Address: 0x3d91d0, Func Offset: 0x170
	// Line 2539, Address: 0x3d91f0, Func Offset: 0x190
	// Line 2541, Address: 0x3d9290, Func Offset: 0x230
	// Line 2542, Address: 0x3d9294, Func Offset: 0x234
	// Line 2545, Address: 0x3d9334, Func Offset: 0x2d4
	// Line 2546, Address: 0x3d9338, Func Offset: 0x2d8
	// Func End, Address: 0x3d9354, Func Offset: 0x2f4
}

// actorFace__Fiii
// Start address: 0x3d9360
void actorFace(int32 objectType, int32 actorID, int32 degrees)
{
	iActorRuntime* r;
	_xActor* a;
	// Line 2508, Address: 0x3d9360, Func Offset: 0
	// Line 2513, Address: 0x3d9380, Func Offset: 0x20
	// Line 2514, Address: 0x3d9420, Func Offset: 0xc0
	// Line 2516, Address: 0x3d94d0, Func Offset: 0x170
	// Line 2517, Address: 0x3d94f0, Func Offset: 0x190
	// Line 2519, Address: 0x3d9590, Func Offset: 0x230
	// Line 2520, Address: 0x3d9594, Func Offset: 0x234
	// Line 2522, Address: 0x3d9634, Func Offset: 0x2d4
	// Line 2523, Address: 0x3d9658, Func Offset: 0x2f8
	// Func End, Address: 0x3d9674, Func Offset: 0x314
}

// actorTurn__Fiii
// Start address: 0x3d9680
void actorTurn(int32 objectType, int32 actorID, int32 degDelta)
{
	iActorRuntime* r;
	_xActor* a;
	// Line 2486, Address: 0x3d9680, Func Offset: 0
	// Line 2491, Address: 0x3d96a0, Func Offset: 0x20
	// Line 2492, Address: 0x3d9740, Func Offset: 0xc0
	// Line 2494, Address: 0x3d97f0, Func Offset: 0x170
	// Line 2495, Address: 0x3d9810, Func Offset: 0x190
	// Line 2497, Address: 0x3d98b0, Func Offset: 0x230
	// Line 2498, Address: 0x3d98b4, Func Offset: 0x234
	// Line 2500, Address: 0x3d9954, Func Offset: 0x2d4
	// Line 2501, Address: 0x3d9980, Func Offset: 0x300
	// Func End, Address: 0x3d999c, Func Offset: 0x31c
}

// actorIsVisible__Fiiii
// Start address: 0x3d99a0
int32 actorIsVisible(int32 objectType, int32 actorID, int32 targetObjectType, int32 targetActorID)
{
	iActorRuntime* br;
	_xActor* b;
	iActorRuntime* ar;
	_xActor* a;
	// Line 2453, Address: 0x3d99a0, Func Offset: 0
	// Line 2459, Address: 0x3d99c8, Func Offset: 0x28
	// Line 2460, Address: 0x3d9a68, Func Offset: 0xc8
	// Line 2461, Address: 0x3d9b18, Func Offset: 0x178
	// Line 2462, Address: 0x3d9bb8, Func Offset: 0x218
	// Line 2464, Address: 0x3d9c68, Func Offset: 0x2c8
	// Line 2465, Address: 0x3d9c88, Func Offset: 0x2e8
	// Line 2467, Address: 0x3d9d28, Func Offset: 0x388
	// Line 2468, Address: 0x3d9d2c, Func Offset: 0x38c
	// Line 2470, Address: 0x3d9dcc, Func Offset: 0x42c
	// Line 2471, Address: 0x3d9dec, Func Offset: 0x44c
	// Line 2473, Address: 0x3d9e8c, Func Offset: 0x4ec
	// Line 2474, Address: 0x3d9e90, Func Offset: 0x4f0
	// Line 2478, Address: 0x3d9f30, Func Offset: 0x590
	// Line 2479, Address: 0x3d9f40, Func Offset: 0x5a0
	// Func End, Address: 0x3d9f60, Func Offset: 0x5c0
}

// actorInFOV__Fiiii
// Start address: 0x3d9f60
int32 actorInFOV(int32 objectType, int32 actorID, int32 targetObjectType, int32 targetActorID)
{
	_xActor* b;
	_xActor* a;
	// Line 2429, Address: 0x3d9f60, Func Offset: 0
	// Line 2433, Address: 0x3d9f88, Func Offset: 0x28
	// Line 2434, Address: 0x3da028, Func Offset: 0xc8
	// Line 2435, Address: 0x3da0d8, Func Offset: 0x178
	// Line 2436, Address: 0x3da178, Func Offset: 0x218
	// Line 2438, Address: 0x3da228, Func Offset: 0x2c8
	// Line 2439, Address: 0x3da248, Func Offset: 0x2e8
	// Line 2441, Address: 0x3da2e8, Func Offset: 0x388
	// Line 2442, Address: 0x3da308, Func Offset: 0x3a8
	// Line 2445, Address: 0x3da3a8, Func Offset: 0x448
	// Line 2446, Address: 0x3da3b8, Func Offset: 0x458
	// Func End, Address: 0x3da3d8, Func Offset: 0x478
}

// actorInTrigger__Fiii
// Start address: 0x3da3e0
int32 actorInTrigger(int32 objectType, int32 actorID, int32 triggerID)
{
	iActorRuntime* r;
	_xActor* a;
	// Line 2404, Address: 0x3da3e0, Func Offset: 0
	// Line 2408, Address: 0x3da400, Func Offset: 0x20
	// Line 2409, Address: 0x3da4a0, Func Offset: 0xc0
	// Line 2411, Address: 0x3da550, Func Offset: 0x170
	// Line 2412, Address: 0x3da570, Func Offset: 0x190
	// Line 2414, Address: 0x3da610, Func Offset: 0x230
	// Line 2415, Address: 0x3da614, Func Offset: 0x234
	// Line 2417, Address: 0x3da6b4, Func Offset: 0x2d4
	// Line 2418, Address: 0x3da758, Func Offset: 0x378
	// Line 2419, Address: 0x3da804, Func Offset: 0x424
	// Line 2421, Address: 0x3da8a4, Func Offset: 0x4c4
	// Line 2422, Address: 0x3da8c0, Func Offset: 0x4e0
	// Func End, Address: 0x3da8dc, Func Offset: 0x4fc
}

// actorInEntryPoint__Fiii
// Start address: 0x3da8e0
int32 actorInEntryPoint(int32 objectType, int32 actorID, int32 entryPointID)
{
	iActorRuntime* r;
	_xActor* a;
	// Line 2379, Address: 0x3da8e0, Func Offset: 0
	// Line 2383, Address: 0x3da900, Func Offset: 0x20
	// Line 2384, Address: 0x3da9a0, Func Offset: 0xc0
	// Line 2386, Address: 0x3daa50, Func Offset: 0x170
	// Line 2387, Address: 0x3daa70, Func Offset: 0x190
	// Line 2389, Address: 0x3dab10, Func Offset: 0x230
	// Line 2390, Address: 0x3dab14, Func Offset: 0x234
	// Line 2392, Address: 0x3dabb4, Func Offset: 0x2d4
	// Line 2393, Address: 0x3dac58, Func Offset: 0x378
	// Line 2394, Address: 0x3dad04, Func Offset: 0x424
	// Line 2396, Address: 0x3dada4, Func Offset: 0x4c4
	// Line 2397, Address: 0x3dadc0, Func Offset: 0x4e0
	// Func End, Address: 0x3daddc, Func Offset: 0x4fc
}

// actorRecordObjectSpot__Fiiii
// Start address: 0x3dade0
void actorRecordObjectSpot(int32 actorType, int32 actorID, int32 objID, int32 memPosIndex)
{
	_xObj* b;
	_xActor* a;
	// Line 2353, Address: 0x3dade0, Func Offset: 0
	// Line 2357, Address: 0x3dae08, Func Offset: 0x28
	// Line 2358, Address: 0x3daeac, Func Offset: 0xcc
	// Line 2360, Address: 0x3daf4c, Func Offset: 0x16c
	// Line 2361, Address: 0x3dafec, Func Offset: 0x20c
	// Line 2363, Address: 0x3db09c, Func Offset: 0x2bc
	// Line 2364, Address: 0x3db0bc, Func Offset: 0x2dc
	// Line 2365, Address: 0x3db15c, Func Offset: 0x37c
	// Line 2367, Address: 0x3db200, Func Offset: 0x420
	// Line 2368, Address: 0x3db214, Func Offset: 0x434
	// Line 2369, Address: 0x3db2b4, Func Offset: 0x4d4
	// Line 2371, Address: 0x3db358, Func Offset: 0x578
	// Line 2372, Address: 0x3db388, Func Offset: 0x5a8
	// Func End, Address: 0x3db3a8, Func Offset: 0x5c8
}

// actorRecordNavPointSpot__Fiiii
// Start address: 0x3db3b0
void actorRecordNavPointSpot(int32 actorType, int32 actorID, int32 navID, int32 memPosIndex)
{
	_xActor* a;
	// Line 2322, Address: 0x3db3b0, Func Offset: 0
	// Line 2325, Address: 0x3db3d8, Func Offset: 0x28
	// Line 2326, Address: 0x3db47c, Func Offset: 0xcc
	// Line 2328, Address: 0x3db51c, Func Offset: 0x16c
	// Line 2329, Address: 0x3db5bc, Func Offset: 0x20c
	// Line 2331, Address: 0x3db66c, Func Offset: 0x2bc
	// Line 2332, Address: 0x3db710, Func Offset: 0x360
	// Line 2334, Address: 0x3db7bc, Func Offset: 0x40c
	// Line 2335, Address: 0x3db7dc, Func Offset: 0x42c
	// Line 2337, Address: 0x3db87c, Func Offset: 0x4cc
	// Line 2338, Address: 0x3db8c8, Func Offset: 0x518
	// Func End, Address: 0x3db8e8, Func Offset: 0x538
}

// actorRecordMarkerSpot__Fiiii
// Start address: 0x3db8f0
void actorRecordMarkerSpot(int32 actorType, int32 actorID, int32 markerID, int32 memPosIndex)
{
	_xActor* a;
	// Line 2292, Address: 0x3db8f0, Func Offset: 0
	// Line 2295, Address: 0x3db918, Func Offset: 0x28
	// Line 2296, Address: 0x3db9bc, Func Offset: 0xcc
	// Line 2298, Address: 0x3dba5c, Func Offset: 0x16c
	// Line 2299, Address: 0x3dbafc, Func Offset: 0x20c
	// Line 2301, Address: 0x3dbbac, Func Offset: 0x2bc
	// Line 2302, Address: 0x3dbc50, Func Offset: 0x360
	// Line 2304, Address: 0x3dbcfc, Func Offset: 0x40c
	// Line 2305, Address: 0x3dbd1c, Func Offset: 0x42c
	// Line 2307, Address: 0x3dbdbc, Func Offset: 0x4cc
	// Line 2308, Address: 0x3dbdfc, Func Offset: 0x50c
	// Func End, Address: 0x3dbe1c, Func Offset: 0x52c
}

// actorRecordActorSpot__Fiiiii
// Start address: 0x3dbe20
void actorRecordActorSpot(int32 objectType, int32 actorID, int32 targetObjectType, int32 targetActorID, int32 memoryPosIndex)
{
	_xActor* b;
	_xActor* a;
	// Line 2258, Address: 0x3dbe20, Func Offset: 0
	// Line 2262, Address: 0x3dbe50, Func Offset: 0x30
	// Line 2263, Address: 0x3dbef0, Func Offset: 0xd0
	// Line 2264, Address: 0x3dbfa0, Func Offset: 0x180
	// Line 2265, Address: 0x3dc040, Func Offset: 0x220
	// Line 2267, Address: 0x3dc0f0, Func Offset: 0x2d0
	// Line 2268, Address: 0x3dc110, Func Offset: 0x2f0
	// Line 2270, Address: 0x3dc1b0, Func Offset: 0x390
	// Line 2271, Address: 0x3dc1d0, Func Offset: 0x3b0
	// Line 2273, Address: 0x3dc270, Func Offset: 0x450
	// Line 2274, Address: 0x3dc314, Func Offset: 0x4f4
	// Line 2277, Address: 0x3dc3b4, Func Offset: 0x594
	// Line 2278, Address: 0x3dc3e4, Func Offset: 0x5c4
	// Func End, Address: 0x3dc408, Func Offset: 0x5e8
}

// actorGetNearestMarker__Fiiii
// Start address: 0x3dc410
int32 actorGetNearestMarker(int32 actorType, int32 actorID, int32 minDistance, int32 maxDistance)
{
	float32 max;
	float32 min;
	xMarker* m;
	float32 sqrMag;
	float32 nearestSqrMag;
	Vector3D d;
	Vector3D pos;
	int32 nearest;
	int32 i;
	_xActor* a;
	// Line 2190, Address: 0x3dc410, Func Offset: 0
	// Line 2192, Address: 0x3dc448, Func Offset: 0x38
	// Line 2195, Address: 0x3dc44c, Func Offset: 0x3c
	// Line 2200, Address: 0x3dc450, Func Offset: 0x40
	// Line 2201, Address: 0x3dc4f0, Func Offset: 0xe0
	// Line 2204, Address: 0x3dc5a0, Func Offset: 0x190
	// Line 2205, Address: 0x3dc5c0, Func Offset: 0x1b0
	// Line 2207, Address: 0x3dc660, Func Offset: 0x250
	// Line 2209, Address: 0x3dc704, Func Offset: 0x2f4
	// Line 2211, Address: 0x3dc714, Func Offset: 0x304
	// Line 2212, Address: 0x3dc71c, Func Offset: 0x30c
	// Line 2214, Address: 0x3dc738, Func Offset: 0x328
	// Line 2215, Address: 0x3dc754, Func Offset: 0x344
	// Line 2217, Address: 0x3dc758, Func Offset: 0x348
	// Line 2218, Address: 0x3dc778, Func Offset: 0x368
	// Line 2222, Address: 0x3dc77c, Func Offset: 0x36c
	// Line 2224, Address: 0x3dc788, Func Offset: 0x378
	// Line 2225, Address: 0x3dc79c, Func Offset: 0x38c
	// Line 2228, Address: 0x3dc7a8, Func Offset: 0x398
	// Line 2231, Address: 0x3dc7c8, Func Offset: 0x3b8
	// Line 2233, Address: 0x3dc7d4, Func Offset: 0x3c4
	// Line 2234, Address: 0x3dc7d8, Func Offset: 0x3c8
	// Line 2235, Address: 0x3dc7dc, Func Offset: 0x3cc
	// Line 2237, Address: 0x3dc7e4, Func Offset: 0x3d4
	// Line 2239, Address: 0x3dc7f4, Func Offset: 0x3e4
	// Line 2240, Address: 0x3dc7f8, Func Offset: 0x3e8
	// Line 2244, Address: 0x3dc7fc, Func Offset: 0x3ec
	// Line 2245, Address: 0x3dc81c, Func Offset: 0x40c
	// Line 2247, Address: 0x3dc820, Func Offset: 0x410
	// Line 2248, Address: 0x3dc824, Func Offset: 0x414
	// Func End, Address: 0x3dc854, Func Offset: 0x444
}

// actorGetNearestNavPoint__Fiiii
// Start address: 0x3dc860
int32 actorGetNearestNavPoint(int32 actorType, int32 actorID, int32 minDistance, int32 maxDistance)
{
	float32 max;
	float32 min;
	xNavPoint* n;
	float32 sqrMag;
	float32 nearestSqrMag;
	Vector3D d;
	Vector3D pos;
	int32 nearest;
	int32 i;
	_xActor* a;
	// Line 2117, Address: 0x3dc860, Func Offset: 0
	// Line 2119, Address: 0x3dc898, Func Offset: 0x38
	// Line 2122, Address: 0x3dc89c, Func Offset: 0x3c
	// Line 2127, Address: 0x3dc8a0, Func Offset: 0x40
	// Line 2128, Address: 0x3dc940, Func Offset: 0xe0
	// Line 2131, Address: 0x3dc9f0, Func Offset: 0x190
	// Line 2132, Address: 0x3dca10, Func Offset: 0x1b0
	// Line 2134, Address: 0x3dcab0, Func Offset: 0x250
	// Line 2136, Address: 0x3dcb54, Func Offset: 0x2f4
	// Line 2138, Address: 0x3dcb64, Func Offset: 0x304
	// Line 2139, Address: 0x3dcb6c, Func Offset: 0x30c
	// Line 2141, Address: 0x3dcb88, Func Offset: 0x328
	// Line 2142, Address: 0x3dcba4, Func Offset: 0x344
	// Line 2144, Address: 0x3dcba8, Func Offset: 0x348
	// Line 2145, Address: 0x3dcbc8, Func Offset: 0x368
	// Line 2149, Address: 0x3dcbcc, Func Offset: 0x36c
	// Line 2151, Address: 0x3dcbd8, Func Offset: 0x378
	// Line 2152, Address: 0x3dcbec, Func Offset: 0x38c
	// Line 2155, Address: 0x3dcc04, Func Offset: 0x3a4
	// Line 2158, Address: 0x3dcc24, Func Offset: 0x3c4
	// Line 2160, Address: 0x3dcc30, Func Offset: 0x3d0
	// Line 2161, Address: 0x3dcc34, Func Offset: 0x3d4
	// Line 2162, Address: 0x3dcc38, Func Offset: 0x3d8
	// Line 2164, Address: 0x3dcc40, Func Offset: 0x3e0
	// Line 2166, Address: 0x3dcc50, Func Offset: 0x3f0
	// Line 2167, Address: 0x3dcc54, Func Offset: 0x3f4
	// Line 2171, Address: 0x3dcc58, Func Offset: 0x3f8
	// Line 2172, Address: 0x3dcc74, Func Offset: 0x414
	// Line 2174, Address: 0x3dcc78, Func Offset: 0x418
	// Line 2175, Address: 0x3dcc7c, Func Offset: 0x41c
	// Func End, Address: 0x3dccac, Func Offset: 0x44c
}

// actorGetPickupObject__Fiii
// Start address: 0x3dccb0
int32 actorGetPickupObject(int32 actorType, int32 actorID, int32 whichOne)
{
	int32 distance;
	_xObj* obj;
	_xActor* a;
	int32 count;
	int32 i;
	// Line 2057, Address: 0x3dccb0, Func Offset: 0
	// Line 2059, Address: 0x3dccd4, Func Offset: 0x24
	// Line 2063, Address: 0x3dccd8, Func Offset: 0x28
	// Line 2064, Address: 0x3dcd78, Func Offset: 0xc8
	// Line 2067, Address: 0x3dce28, Func Offset: 0x178
	// Line 2068, Address: 0x3dce48, Func Offset: 0x198
	// Line 2070, Address: 0x3dcee8, Func Offset: 0x238
	// Line 2074, Address: 0x3dcef4, Func Offset: 0x244
	// Line 2076, Address: 0x3dcf08, Func Offset: 0x258
	// Line 2078, Address: 0x3dcf14, Func Offset: 0x264
	// Line 2082, Address: 0x3dcf28, Func Offset: 0x278
	// Line 2084, Address: 0x3dcf3c, Func Offset: 0x28c
	// Line 2086, Address: 0x3dcf48, Func Offset: 0x298
	// Line 2089, Address: 0x3dcfa0, Func Offset: 0x2f0
	// Line 2090, Address: 0x3dcfa8, Func Offset: 0x2f8
	// Line 2092, Address: 0x3dcfb4, Func Offset: 0x304
	// Line 2097, Address: 0x3dcfb8, Func Offset: 0x308
	// Line 2099, Address: 0x3dcfcc, Func Offset: 0x31c
	// Line 2100, Address: 0x3dcfd0, Func Offset: 0x320
	// Func End, Address: 0x3dcff0, Func Offset: 0x340
}

// actorGetRelativeMarkerAngle__Fiii
// Start address: 0x3dcff0
int32 actorGetRelativeMarkerAngle(int32 objectType, int32 actorID, int32 markerID)
{
	float32 ang;
	int32 anglem;
	Vector3D v;
	iActorRuntime* ar;
	_xActor* a;
	// Line 2018, Address: 0x3dcff0, Func Offset: 0
	// Line 2026, Address: 0x3dd010, Func Offset: 0x20
	// Line 2027, Address: 0x3dd0b0, Func Offset: 0xc0
	// Line 2029, Address: 0x3dd160, Func Offset: 0x170
	// Line 2030, Address: 0x3dd180, Func Offset: 0x190
	// Line 2032, Address: 0x3dd220, Func Offset: 0x230
	// Line 2033, Address: 0x3dd224, Func Offset: 0x234
	// Line 2035, Address: 0x3dd2c4, Func Offset: 0x2d4
	// Line 2036, Address: 0x3dd2e8, Func Offset: 0x2f8
	// Line 2038, Address: 0x3dd2f4, Func Offset: 0x304
	// Line 2041, Address: 0x3dd308, Func Offset: 0x318
	// Func End, Address: 0x3dd324, Func Offset: 0x334
}

// actorGetRelativeAngle__Fiiii
// Start address: 0x3dd330
int32 actorGetRelativeAngle(int32 objectType, int32 actorID, int32 targetObjectType, int32 targetActorID)
{
	float32 ang;
	int32 anglem;
	Vector3D v;
	iActorRuntime* ar;
	_xActor* b;
	_xActor* a;
	// Line 1979, Address: 0x3dd330, Func Offset: 0
	// Line 1988, Address: 0x3dd358, Func Offset: 0x28
	// Line 1989, Address: 0x3dd3f8, Func Offset: 0xc8
	// Line 1990, Address: 0x3dd4a8, Func Offset: 0x178
	// Line 1991, Address: 0x3dd548, Func Offset: 0x218
	// Line 1993, Address: 0x3dd5f8, Func Offset: 0x2c8
	// Line 1994, Address: 0x3dd618, Func Offset: 0x2e8
	// Line 1996, Address: 0x3dd6b8, Func Offset: 0x388
	// Line 1997, Address: 0x3dd6bc, Func Offset: 0x38c
	// Line 1999, Address: 0x3dd75c, Func Offset: 0x42c
	// Line 2000, Address: 0x3dd77c, Func Offset: 0x44c
	// Line 2003, Address: 0x3dd81c, Func Offset: 0x4ec
	// Line 2004, Address: 0x3dd834, Func Offset: 0x504
	// Line 2006, Address: 0x3dd840, Func Offset: 0x510
	// Line 2009, Address: 0x3dd854, Func Offset: 0x524
	// Func End, Address: 0x3dd874, Func Offset: 0x544
}

// actorIsFacingObj__Fiiii
// Start address: 0x3dd880
int32 actorIsFacingObj(int32 objectType, int32 actorID, int32 objID, int32 delta)
{
	iActorRuntime* ar;
	_xObj* b;
	_xActor* a;
	// Line 1948, Address: 0x3dd880, Func Offset: 0
	// Line 1954, Address: 0x3dd8ac, Func Offset: 0x2c
	// Line 1955, Address: 0x3dd94c, Func Offset: 0xcc
	// Line 1956, Address: 0x3dd9fc, Func Offset: 0x17c
	// Line 1957, Address: 0x3dda9c, Func Offset: 0x21c
	// Line 1959, Address: 0x3ddb40, Func Offset: 0x2c0
	// Line 1960, Address: 0x3ddb60, Func Offset: 0x2e0
	// Line 1962, Address: 0x3ddc00, Func Offset: 0x380
	// Line 1963, Address: 0x3ddc04, Func Offset: 0x384
	// Line 1965, Address: 0x3ddca4, Func Offset: 0x424
	// Line 1966, Address: 0x3ddcb8, Func Offset: 0x438
	// Line 1969, Address: 0x3ddd58, Func Offset: 0x4d8
	// Line 1971, Address: 0x3dde50, Func Offset: 0x5d0
	// Func End, Address: 0x3dde74, Func Offset: 0x5f4
}

// actorIsFacingActor__Fiiiii
// Start address: 0x3dde80
int32 actorIsFacingActor(int32 objectType, int32 actorID, int32 targetObjectType, int32 targetActorID, int32 delta)
{
	iActorRuntime* ar;
	_xActor* b;
	_xActor* a;
	// Line 1918, Address: 0x3dde80, Func Offset: 0
	// Line 1924, Address: 0x3ddeb4, Func Offset: 0x34
	// Line 1925, Address: 0x3ddf54, Func Offset: 0xd4
	// Line 1926, Address: 0x3de004, Func Offset: 0x184
	// Line 1927, Address: 0x3de0a4, Func Offset: 0x224
	// Line 1929, Address: 0x3de154, Func Offset: 0x2d4
	// Line 1930, Address: 0x3de174, Func Offset: 0x2f4
	// Line 1932, Address: 0x3de214, Func Offset: 0x394
	// Line 1933, Address: 0x3de218, Func Offset: 0x398
	// Line 1935, Address: 0x3de2b8, Func Offset: 0x438
	// Line 1936, Address: 0x3de2d8, Func Offset: 0x458
	// Line 1938, Address: 0x3de378, Func Offset: 0x4f8
	// Line 1939, Address: 0x3de470, Func Offset: 0x5f0
	// Func End, Address: 0x3de498, Func Offset: 0x618
}

// actorIsFacingPosition__Fiiii
// Start address: 0x3de4a0
int32 actorIsFacingPosition(int32 actorType, int32 actorID, int32 posID, int32 delta)
{
	iActorRuntime* ar;
	_xActor* a;
	// Line 1892, Address: 0x3de4a0, Func Offset: 0
	// Line 1897, Address: 0x3de4cc, Func Offset: 0x2c
	// Line 1898, Address: 0x3de56c, Func Offset: 0xcc
	// Line 1899, Address: 0x3de61c, Func Offset: 0x17c
	// Line 1900, Address: 0x3de6c0, Func Offset: 0x220
	// Line 1902, Address: 0x3de760, Func Offset: 0x2c0
	// Line 1903, Address: 0x3de780, Func Offset: 0x2e0
	// Line 1905, Address: 0x3de820, Func Offset: 0x380
	// Line 1906, Address: 0x3de824, Func Offset: 0x384
	// Line 1908, Address: 0x3de8c4, Func Offset: 0x424
	// Line 1909, Address: 0x3de9cc, Func Offset: 0x52c
	// Func End, Address: 0x3de9f0, Func Offset: 0x550
}

// actorIsFacingNavPoint__Fiiii
// Start address: 0x3de9f0
int32 actorIsFacingNavPoint(int32 actorType, int32 actorID, int32 navID, int32 delta)
{
	iActorRuntime* ar;
	_xActor* a;
	// Line 1862, Address: 0x3de9f0, Func Offset: 0
	// Line 1867, Address: 0x3dea1c, Func Offset: 0x2c
	// Line 1868, Address: 0x3deabc, Func Offset: 0xcc
	// Line 1869, Address: 0x3deb6c, Func Offset: 0x17c
	// Line 1870, Address: 0x3dec0c, Func Offset: 0x21c
	// Line 1872, Address: 0x3decb8, Func Offset: 0x2c8
	// Line 1873, Address: 0x3decd8, Func Offset: 0x2e8
	// Line 1875, Address: 0x3ded78, Func Offset: 0x388
	// Line 1876, Address: 0x3ded7c, Func Offset: 0x38c
	// Line 1878, Address: 0x3dee1c, Func Offset: 0x42c
	// Line 1879, Address: 0x3def30, Func Offset: 0x540
	// Func End, Address: 0x3def54, Func Offset: 0x564
}

// actorIsFacingMarker__Fiiii
// Start address: 0x3def60
int32 actorIsFacingMarker(int32 actorType, int32 actorID, int32 markerID, int32 delta)
{
	iActorRuntime* ar;
	_xActor* a;
	// Line 1834, Address: 0x3def60, Func Offset: 0
	// Line 1839, Address: 0x3def8c, Func Offset: 0x2c
	// Line 1840, Address: 0x3df02c, Func Offset: 0xcc
	// Line 1841, Address: 0x3df0dc, Func Offset: 0x17c
	// Line 1842, Address: 0x3df17c, Func Offset: 0x21c
	// Line 1844, Address: 0x3df228, Func Offset: 0x2c8
	// Line 1845, Address: 0x3df248, Func Offset: 0x2e8
	// Line 1847, Address: 0x3df2e8, Func Offset: 0x388
	// Line 1848, Address: 0x3df2ec, Func Offset: 0x38c
	// Line 1850, Address: 0x3df38c, Func Offset: 0x42c
	// Line 1851, Address: 0x3df490, Func Offset: 0x530
	// Func End, Address: 0x3df4b4, Func Offset: 0x554
}

// actorHaveLOSToNavPoint__Fiii
// Start address: 0x3df4c0
int32 actorHaveLOSToNavPoint(int32 actorType, int32 actorID, int32 navID)
{
	iActorRuntime* ar;
	_xActor* a;
	// Line 1727, Address: 0x3df4c0, Func Offset: 0
	// Line 1732, Address: 0x3df4e0, Func Offset: 0x20
	// Line 1733, Address: 0x3df580, Func Offset: 0xc0
	// Line 1734, Address: 0x3df630, Func Offset: 0x170
	// Line 1735, Address: 0x3df6d0, Func Offset: 0x210
	// Line 1737, Address: 0x3df77c, Func Offset: 0x2bc
	// Line 1738, Address: 0x3df79c, Func Offset: 0x2dc
	// Line 1740, Address: 0x3df83c, Func Offset: 0x37c
	// Line 1741, Address: 0x3df840, Func Offset: 0x380
	// Line 1743, Address: 0x3df8e0, Func Offset: 0x420
	// Line 1744, Address: 0x3dfa54, Func Offset: 0x594
	// Func End, Address: 0x3dfa70, Func Offset: 0x5b0
}

// actorHaveLOSToObject__Fiii
// Start address: 0x3dfa70
int32 actorHaveLOSToObject(int32 actorType, int32 actorID, int32 objID)
{
	_xObj* b;
	iActorRuntime* ar;
	_xActor* a;
	// Line 1693, Address: 0x3dfa70, Func Offset: 0
	// Line 1698, Address: 0x3dfa90, Func Offset: 0x20
	// Line 1699, Address: 0x3dfb30, Func Offset: 0xc0
	// Line 1701, Address: 0x3dfbe0, Func Offset: 0x170
	// Line 1702, Address: 0x3dfc00, Func Offset: 0x190
	// Line 1704, Address: 0x3dfca0, Func Offset: 0x230
	// Line 1705, Address: 0x3dfca4, Func Offset: 0x234
	// Line 1707, Address: 0x3dfd44, Func Offset: 0x2d4
	// Line 1708, Address: 0x3dfd58, Func Offset: 0x2e8
	// Line 1710, Address: 0x3dfdf8, Func Offset: 0x388
	// Line 1711, Address: 0x3dff50, Func Offset: 0x4e0
	// Func End, Address: 0x3dff6c, Func Offset: 0x4fc
}

// actorHaveLOSToSpot__Fiii
// Start address: 0x3dff70
int32 actorHaveLOSToSpot(int32 actorType, int32 actorID, int32 spotID)
{
	iActorRuntime* ar;
	_xActor* a;
	// Line 1661, Address: 0x3dff70, Func Offset: 0
	// Line 1666, Address: 0x3dff90, Func Offset: 0x20
	// Line 1667, Address: 0x3e0030, Func Offset: 0xc0
	// Line 1668, Address: 0x3e00e0, Func Offset: 0x170
	// Line 1669, Address: 0x3e0184, Func Offset: 0x214
	// Line 1671, Address: 0x3e0224, Func Offset: 0x2b4
	// Line 1672, Address: 0x3e0244, Func Offset: 0x2d4
	// Line 1674, Address: 0x3e02e4, Func Offset: 0x374
	// Line 1675, Address: 0x3e02e8, Func Offset: 0x378
	// Line 1677, Address: 0x3e0388, Func Offset: 0x418
	// Line 1678, Address: 0x3e04fc, Func Offset: 0x58c
	// Func End, Address: 0x3e0518, Func Offset: 0x5a8
}

// actorHaveLOSToActor__Fiiii
// Start address: 0x3e0520
int32 actorHaveLOSToActor(int32 actorType, int32 actorID, int32 targetActorType, int32 targetActorID)
{
	iActorRuntime* br;
	_xActor* b;
	iActorRuntime* ar;
	_xActor* a;
	// Line 1621, Address: 0x3e0520, Func Offset: 0
	// Line 1627, Address: 0x3e0548, Func Offset: 0x28
	// Line 1628, Address: 0x3e05e8, Func Offset: 0xc8
	// Line 1629, Address: 0x3e0698, Func Offset: 0x178
	// Line 1630, Address: 0x3e0738, Func Offset: 0x218
	// Line 1632, Address: 0x3e07e8, Func Offset: 0x2c8
	// Line 1633, Address: 0x3e0808, Func Offset: 0x2e8
	// Line 1635, Address: 0x3e08a8, Func Offset: 0x388
	// Line 1636, Address: 0x3e08ac, Func Offset: 0x38c
	// Line 1638, Address: 0x3e094c, Func Offset: 0x42c
	// Line 1639, Address: 0x3e096c, Func Offset: 0x44c
	// Line 1641, Address: 0x3e0a0c, Func Offset: 0x4ec
	// Line 1642, Address: 0x3e0a10, Func Offset: 0x4f0
	// Line 1645, Address: 0x3e0ab0, Func Offset: 0x590
	// Line 1646, Address: 0x3e0c04, Func Offset: 0x6e4
	// Func End, Address: 0x3e0c24, Func Offset: 0x704
}

// actorHaveLOSToMarker__Fiii
// Start address: 0x3e0c30
int32 actorHaveLOSToMarker(int32 actorType, int32 actorID, int32 markerID)
{
	iActorRuntime* ar;
	_xActor* a;
	// Line 1588, Address: 0x3e0c30, Func Offset: 0
	// Line 1593, Address: 0x3e0c50, Func Offset: 0x20
	// Line 1594, Address: 0x3e0cf0, Func Offset: 0xc0
	// Line 1595, Address: 0x3e0da0, Func Offset: 0x170
	// Line 1596, Address: 0x3e0e40, Func Offset: 0x210
	// Line 1598, Address: 0x3e0eec, Func Offset: 0x2bc
	// Line 1599, Address: 0x3e0f0c, Func Offset: 0x2dc
	// Line 1601, Address: 0x3e0fac, Func Offset: 0x37c
	// Line 1602, Address: 0x3e0fb0, Func Offset: 0x380
	// Line 1604, Address: 0x3e1050, Func Offset: 0x420
	// Line 1605, Address: 0x3e11b4, Func Offset: 0x584
	// Func End, Address: 0x3e11d0, Func Offset: 0x5a0
}

// actorHaveLOSToDir__Fiiii
// Start address: 0x3e11d0
int32 actorHaveLOSToDir(int32 actorType, int32 actorID, int32 deltaX, int32 deltaZ)
{
	Vector3D rot;
	Vector3D d;
	Vector3D pos;
	iActorRuntime* r;
	_xActor* a;
	// Line 1526, Address: 0x3e11d0, Func Offset: 0
	// Line 1531, Address: 0x3e11f8, Func Offset: 0x28
	// Line 1532, Address: 0x3e1298, Func Offset: 0xc8
	// Line 1534, Address: 0x3e1348, Func Offset: 0x178
	// Line 1535, Address: 0x3e1368, Func Offset: 0x198
	// Line 1537, Address: 0x3e1408, Func Offset: 0x238
	// Line 1538, Address: 0x3e140c, Func Offset: 0x23c
	// Line 1540, Address: 0x3e14ac, Func Offset: 0x2dc
	// Line 1542, Address: 0x3e14c4, Func Offset: 0x2f4
	// Line 1548, Address: 0x3e14d4, Func Offset: 0x304
	// Line 1550, Address: 0x3e14d8, Func Offset: 0x308
	// Line 1551, Address: 0x3e14f8, Func Offset: 0x328
	// Line 1552, Address: 0x3e14fc, Func Offset: 0x32c
	// Line 1555, Address: 0x3e151c, Func Offset: 0x34c
	// Line 1556, Address: 0x3e1524, Func Offset: 0x354
	// Line 1557, Address: 0x3e152c, Func Offset: 0x35c
	// Line 1558, Address: 0x3e1534, Func Offset: 0x364
	// Line 1561, Address: 0x3e1548, Func Offset: 0x378
	// Line 1562, Address: 0x3e1558, Func Offset: 0x388
	// Line 1563, Address: 0x3e1568, Func Offset: 0x398
	// Line 1564, Address: 0x3e1578, Func Offset: 0x3a8
	// Line 1567, Address: 0x3e1580, Func Offset: 0x3b0
	// Line 1568, Address: 0x3e15a8, Func Offset: 0x3d8
	// Line 1572, Address: 0x3e15d0, Func Offset: 0x400
	// Line 1573, Address: 0x3e1680, Func Offset: 0x4b0
	// Func End, Address: 0x3e16a0, Func Offset: 0x4d0
}

// actorGetAngle__Fii
// Start address: 0x3e16a0
int32 actorGetAngle(int32 objectType, int32 actorID)
{
	iActorRuntime* r;
	_xActor* a;
	// Line 1476, Address: 0x3e16a0, Func Offset: 0
	// Line 1481, Address: 0x3e16b8, Func Offset: 0x18
	// Line 1482, Address: 0x3e1758, Func Offset: 0xb8
	// Line 1484, Address: 0x3e1808, Func Offset: 0x168
	// Line 1485, Address: 0x3e1828, Func Offset: 0x188
	// Line 1487, Address: 0x3e18c8, Func Offset: 0x228
	// Line 1488, Address: 0x3e18cc, Func Offset: 0x22c
	// Line 1490, Address: 0x3e196c, Func Offset: 0x2cc
	// Line 1491, Address: 0x3e1984, Func Offset: 0x2e4
	// Func End, Address: 0x3e199c, Func Offset: 0x2fc
}

// actorMoveVertical__Fiii
// Start address: 0x3e19a0
int32 actorMoveVertical(int32 actorType, int32 actorID, int32 amount)
{
	iActorRuntime* r;
	_xActor* a;
	// Line 1449, Address: 0x3e19a0, Func Offset: 0
	// Line 1453, Address: 0x3e19c0, Func Offset: 0x20
	// Line 1454, Address: 0x3e1a60, Func Offset: 0xc0
	// Line 1456, Address: 0x3e1b10, Func Offset: 0x170
	// Line 1458, Address: 0x3e1b30, Func Offset: 0x190
	// Line 1459, Address: 0x3e1b34, Func Offset: 0x194
	// Line 1461, Address: 0x3e1bd4, Func Offset: 0x234
	// Line 1463, Address: 0x3e1bfc, Func Offset: 0x25c
	// Line 1464, Address: 0x3e1c00, Func Offset: 0x260
	// Func End, Address: 0x3e1c1c, Func Offset: 0x27c
}

// actorMoveAwayFromActor__Fiiiii
// Start address: 0x3e1c20
void actorMoveAwayFromActor(int32 type, int32 id, int32 fromType, int32 fromID, int32 distance)
{
	float32 ang;
	Vector3D rot;
	Vector3D m;
	Vector3D dm;
	Vector3D d;
	iActorRuntime* br;
	_xActor* b;
	iActorRuntime* ar;
	_xActor* a;
	// Line 1370, Address: 0x3e1c20, Func Offset: 0
	// Line 1378, Address: 0x3e1c50, Func Offset: 0x30
	// Line 1379, Address: 0x3e1cf0, Func Offset: 0xd0
	// Line 1380, Address: 0x3e1da0, Func Offset: 0x180
	// Line 1381, Address: 0x3e1e40, Func Offset: 0x220
	// Line 1383, Address: 0x3e1ef0, Func Offset: 0x2d0
	// Line 1384, Address: 0x3e1f10, Func Offset: 0x2f0
	// Line 1385, Address: 0x3e1f14, Func Offset: 0x2f4
	// Line 1387, Address: 0x3e1fb4, Func Offset: 0x394
	// Line 1388, Address: 0x3e1fd4, Func Offset: 0x3b4
	// Line 1389, Address: 0x3e1fd8, Func Offset: 0x3b8
	// Line 1393, Address: 0x3e2078, Func Offset: 0x458
	// Line 1398, Address: 0x3e208c, Func Offset: 0x46c
	// Line 1401, Address: 0x3e209c, Func Offset: 0x47c
	// Line 1404, Address: 0x3e20c4, Func Offset: 0x4a4
	// Line 1407, Address: 0x3e20d8, Func Offset: 0x4b8
	// Line 1410, Address: 0x3e20e8, Func Offset: 0x4c8
	// Line 1413, Address: 0x3e20f4, Func Offset: 0x4d4
	// Line 1414, Address: 0x3e20f8, Func Offset: 0x4d8
	// Line 1415, Address: 0x3e20fc, Func Offset: 0x4dc
	// Line 1417, Address: 0x3e211c, Func Offset: 0x4fc
	// Line 1418, Address: 0x3e2120, Func Offset: 0x500
	// Line 1419, Address: 0x3e2128, Func Offset: 0x508
	// Line 1420, Address: 0x3e212c, Func Offset: 0x50c
	// Line 1422, Address: 0x3e2140, Func Offset: 0x520
	// Line 1423, Address: 0x3e2150, Func Offset: 0x530
	// Line 1424, Address: 0x3e2160, Func Offset: 0x540
	// Line 1425, Address: 0x3e2170, Func Offset: 0x550
	// Line 1428, Address: 0x3e2178, Func Offset: 0x558
	// Line 1429, Address: 0x3e2188, Func Offset: 0x568
	// Line 1430, Address: 0x3e2198, Func Offset: 0x578
	// Line 1435, Address: 0x3e21a8, Func Offset: 0x588
	// Func End, Address: 0x3e21cc, Func Offset: 0x5ac
}

// actorMoveForward__Fiii
// Start address: 0x3e21d0
int32 actorMoveForward(int32 objectType, int32 actorID, int32 amount)
{
	Vector3D rot;
	Vector3D d;
	iActorRuntime* r;
	_xActor* a;
	// Line 1316, Address: 0x3e21d0, Func Offset: 0
	// Line 1321, Address: 0x3e21f0, Func Offset: 0x20
	// Line 1322, Address: 0x3e2290, Func Offset: 0xc0
	// Line 1324, Address: 0x3e2340, Func Offset: 0x170
	// Line 1326, Address: 0x3e2360, Func Offset: 0x190
	// Line 1327, Address: 0x3e2364, Func Offset: 0x194
	// Line 1329, Address: 0x3e2404, Func Offset: 0x234
	// Line 1332, Address: 0x3e2414, Func Offset: 0x244
	// Line 1333, Address: 0x3e2418, Func Offset: 0x248
	// Line 1334, Address: 0x3e241c, Func Offset: 0x24c
	// Line 1336, Address: 0x3e243c, Func Offset: 0x26c
	// Line 1337, Address: 0x3e2444, Func Offset: 0x274
	// Line 1338, Address: 0x3e244c, Func Offset: 0x27c
	// Line 1339, Address: 0x3e2454, Func Offset: 0x284
	// Line 1341, Address: 0x3e2468, Func Offset: 0x298
	// Line 1342, Address: 0x3e2478, Func Offset: 0x2a8
	// Line 1343, Address: 0x3e2488, Func Offset: 0x2b8
	// Line 1344, Address: 0x3e2498, Func Offset: 0x2c8
	// Line 1346, Address: 0x3e24a0, Func Offset: 0x2d0
	// Line 1349, Address: 0x3e24c8, Func Offset: 0x2f8
	// Line 1350, Address: 0x3e24cc, Func Offset: 0x2fc
	// Func End, Address: 0x3e24e8, Func Offset: 0x318
}

// actorMoveStrafe__Fiii
// Start address: 0x3e24f0
int32 actorMoveStrafe(int32 objectType, int32 actorID, int32 amount)
{
	Vector3D rot;
	Vector3D d;
	iActorRuntime* r;
	_xActor* a;
	// Line 1245, Address: 0x3e24f0, Func Offset: 0
	// Line 1251, Address: 0x3e2510, Func Offset: 0x20
	// Line 1252, Address: 0x3e2518, Func Offset: 0x28
	// Line 1254, Address: 0x3e2524, Func Offset: 0x34
	// Line 1255, Address: 0x3e25c4, Func Offset: 0xd4
	// Line 1257, Address: 0x3e2674, Func Offset: 0x184
	// Line 1258, Address: 0x3e2694, Func Offset: 0x1a4
	// Line 1260, Address: 0x3e2734, Func Offset: 0x244
	// Line 1261, Address: 0x3e2738, Func Offset: 0x248
	// Line 1263, Address: 0x3e27d8, Func Offset: 0x2e8
	// Line 1266, Address: 0x3e27e8, Func Offset: 0x2f8
	// Line 1267, Address: 0x3e27ec, Func Offset: 0x2fc
	// Line 1268, Address: 0x3e27f4, Func Offset: 0x304
	// Line 1270, Address: 0x3e27f8, Func Offset: 0x308
	// Line 1271, Address: 0x3e2800, Func Offset: 0x310
	// Line 1273, Address: 0x3e2820, Func Offset: 0x330
	// Line 1275, Address: 0x3e283c, Func Offset: 0x34c
	// Line 1276, Address: 0x3e2840, Func Offset: 0x350
	// Line 1277, Address: 0x3e2844, Func Offset: 0x354
	// Line 1279, Address: 0x3e2864, Func Offset: 0x374
	// Line 1284, Address: 0x3e2878, Func Offset: 0x388
	// Line 1286, Address: 0x3e2880, Func Offset: 0x390
	// Line 1287, Address: 0x3e288c, Func Offset: 0x39c
	// Line 1288, Address: 0x3e2898, Func Offset: 0x3a8
	// Line 1291, Address: 0x3e28a4, Func Offset: 0x3b4
	// Line 1292, Address: 0x3e28b4, Func Offset: 0x3c4
	// Line 1293, Address: 0x3e28c4, Func Offset: 0x3d4
	// Line 1295, Address: 0x3e28d4, Func Offset: 0x3e4
	// Line 1297, Address: 0x3e28dc, Func Offset: 0x3ec
	// Line 1300, Address: 0x3e2904, Func Offset: 0x414
	// Line 1302, Address: 0x3e2908, Func Offset: 0x418
	// Func End, Address: 0x3e2924, Func Offset: 0x434
}

// actorFaceActor__Fiiii
// Start address: 0x3e2930
void actorFaceActor(int32 actorType, int32 actorID, int32 targetObjectType, int32 targetActorID)
{
	Vector3D d;
	iActorRuntime* br;
	_xActor* b;
	iActorRuntime* ar;
	_xActor* a;
	// Line 1215, Address: 0x3e2930, Func Offset: 0
	// Line 1222, Address: 0x3e2958, Func Offset: 0x28
	// Line 1223, Address: 0x3e29f8, Func Offset: 0xc8
	// Line 1224, Address: 0x3e2aa8, Func Offset: 0x178
	// Line 1225, Address: 0x3e2b48, Func Offset: 0x218
	// Line 1227, Address: 0x3e2bf8, Func Offset: 0x2c8
	// Line 1228, Address: 0x3e2c18, Func Offset: 0x2e8
	// Line 1229, Address: 0x3e2c1c, Func Offset: 0x2ec
	// Line 1231, Address: 0x3e2cbc, Func Offset: 0x38c
	// Line 1232, Address: 0x3e2cdc, Func Offset: 0x3ac
	// Line 1233, Address: 0x3e2ce0, Func Offset: 0x3b0
	// Line 1236, Address: 0x3e2d80, Func Offset: 0x450
	// Line 1237, Address: 0x3e2d94, Func Offset: 0x464
	// Line 1238, Address: 0x3e2db0, Func Offset: 0x480
	// Func End, Address: 0x3e2dd0, Func Offset: 0x4a0
}

// actorFacePosition__Fiii
// Start address: 0x3e2dd0
void actorFacePosition(int32 actorType, int32 actorID, int32 posID)
{
	Vector3D d;
	iActorRuntime* ar;
	_xActor* a;
	// Line 1187, Address: 0x3e2dd0, Func Offset: 0
	// Line 1192, Address: 0x3e2df0, Func Offset: 0x20
	// Line 1193, Address: 0x3e2e90, Func Offset: 0xc0
	// Line 1195, Address: 0x3e2f40, Func Offset: 0x170
	// Line 1196, Address: 0x3e2f60, Func Offset: 0x190
	// Line 1197, Address: 0x3e2f64, Func Offset: 0x194
	// Line 1199, Address: 0x3e3004, Func Offset: 0x234
	// Line 1200, Address: 0x3e30a8, Func Offset: 0x2d8
	// Line 1203, Address: 0x3e3148, Func Offset: 0x378
	// Line 1204, Address: 0x3e3170, Func Offset: 0x3a0
	// Line 1205, Address: 0x3e318c, Func Offset: 0x3bc
	// Func End, Address: 0x3e31a8, Func Offset: 0x3d8
}

// actorFaceObject__Fiii
// Start address: 0x3e31b0
void actorFaceObject(int32 actorType, int32 actorID, int32 objID)
{
	_xObj* b;
	Vector3D d;
	iActorRuntime* ar;
	_xActor* a;
	// Line 1156, Address: 0x3e31b0, Func Offset: 0
	// Line 1162, Address: 0x3e31d0, Func Offset: 0x20
	// Line 1163, Address: 0x3e3270, Func Offset: 0xc0
	// Line 1164, Address: 0x3e3320, Func Offset: 0x170
	// Line 1165, Address: 0x3e33c0, Func Offset: 0x210
	// Line 1167, Address: 0x3e3464, Func Offset: 0x2b4
	// Line 1168, Address: 0x3e3484, Func Offset: 0x2d4
	// Line 1169, Address: 0x3e3488, Func Offset: 0x2d8
	// Line 1171, Address: 0x3e3528, Func Offset: 0x378
	// Line 1172, Address: 0x3e353c, Func Offset: 0x38c
	// Line 1174, Address: 0x3e35e0, Func Offset: 0x430
	// Line 1175, Address: 0x3e35f8, Func Offset: 0x448
	// Line 1176, Address: 0x3e3614, Func Offset: 0x464
	// Func End, Address: 0x3e3630, Func Offset: 0x480
}

// actorFaceNavPoint__Fiii
// Start address: 0x3e3630
void actorFaceNavPoint(int32 actorType, int32 actorID, int32 navID)
{
	Vector3D d;
	iActorRuntime* ar;
	_xActor* a;
	// Line 1130, Address: 0x3e3630, Func Offset: 0
	// Line 1135, Address: 0x3e3650, Func Offset: 0x20
	// Line 1136, Address: 0x3e36f0, Func Offset: 0xc0
	// Line 1138, Address: 0x3e37a0, Func Offset: 0x170
	// Line 1139, Address: 0x3e37c0, Func Offset: 0x190
	// Line 1140, Address: 0x3e37c4, Func Offset: 0x194
	// Line 1142, Address: 0x3e3864, Func Offset: 0x234
	// Line 1143, Address: 0x3e3898, Func Offset: 0x268
	// Line 1144, Address: 0x3e38b4, Func Offset: 0x284
	// Func End, Address: 0x3e38d0, Func Offset: 0x2a0
}

// actorFaceMarker__Fiii
// Start address: 0x3e38d0
void actorFaceMarker(int32 actorType, int32 actorID, int32 markerID)
{
	Vector3D d;
	iActorRuntime* ar;
	_xActor* a;
	// Line 1104, Address: 0x3e38d0, Func Offset: 0
	// Line 1109, Address: 0x3e38f0, Func Offset: 0x20
	// Line 1110, Address: 0x3e3990, Func Offset: 0xc0
	// Line 1112, Address: 0x3e3a40, Func Offset: 0x170
	// Line 1113, Address: 0x3e3a60, Func Offset: 0x190
	// Line 1114, Address: 0x3e3a64, Func Offset: 0x194
	// Line 1116, Address: 0x3e3b04, Func Offset: 0x234
	// Line 1117, Address: 0x3e3b28, Func Offset: 0x258
	// Line 1118, Address: 0x3e3b44, Func Offset: 0x274
	// Func End, Address: 0x3e3b60, Func Offset: 0x290
}

// actorDistanceToNavPoint3D__Fiii
// Start address: 0x3e3b60
int32 actorDistanceToNavPoint3D(int32 actorType, int32 actorID, int32 navID)
{
	int32 mag;
	Vector3D d;
	iActorRuntime* ar;
	_xActor* a;
	// Line 1069, Address: 0x3e3b60, Func Offset: 0
	// Line 1075, Address: 0x3e3b80, Func Offset: 0x20
	// Line 1076, Address: 0x3e3c20, Func Offset: 0xc0
	// Line 1078, Address: 0x3e3cd0, Func Offset: 0x170
	// Line 1079, Address: 0x3e3cf0, Func Offset: 0x190
	// Line 1081, Address: 0x3e3d90, Func Offset: 0x230
	// Line 1082, Address: 0x3e3d94, Func Offset: 0x234
	// Line 1085, Address: 0x3e3e34, Func Offset: 0x2d4
	// Line 1086, Address: 0x3e3ed8, Func Offset: 0x378
	// Line 1088, Address: 0x3e3f84, Func Offset: 0x424
	// Line 1090, Address: 0x3e3fb8, Func Offset: 0x458
	// Line 1093, Address: 0x3e3fdc, Func Offset: 0x47c
	// Func End, Address: 0x3e3ff8, Func Offset: 0x498
}

// actorDistanceToNavPoint__Fiii
// Start address: 0x3e4000
int32 actorDistanceToNavPoint(int32 actorType, int32 actorID, int32 navID)
{
	int32 mag;
	_RwV2d vb;
	_RwV2d va;
	_RwV2d d;
	iActorRuntime* ar;
	_xActor* a;
	// Line 1027, Address: 0x3e4000, Func Offset: 0
	// Line 1033, Address: 0x3e4020, Func Offset: 0x20
	// Line 1034, Address: 0x3e40c0, Func Offset: 0xc0
	// Line 1036, Address: 0x3e4170, Func Offset: 0x170
	// Line 1037, Address: 0x3e4190, Func Offset: 0x190
	// Line 1039, Address: 0x3e4230, Func Offset: 0x230
	// Line 1040, Address: 0x3e4234, Func Offset: 0x234
	// Line 1043, Address: 0x3e42d4, Func Offset: 0x2d4
	// Line 1044, Address: 0x3e4378, Func Offset: 0x378
	// Line 1046, Address: 0x3e4424, Func Offset: 0x424
	// Line 1047, Address: 0x3e444c, Func Offset: 0x44c
	// Line 1049, Address: 0x3e4474, Func Offset: 0x474
	// Line 1050, Address: 0x3e447c, Func Offset: 0x47c
	// Line 1052, Address: 0x3e4484, Func Offset: 0x484
	// Line 1054, Address: 0x3e4498, Func Offset: 0x498
	// Line 1057, Address: 0x3e44bc, Func Offset: 0x4bc
	// Func End, Address: 0x3e44d8, Func Offset: 0x4d8
}

// actorDistanceToMarker3D__Fiii
// Start address: 0x3e44e0
int32 actorDistanceToMarker3D(int32 actorType, int32 actorID, int32 markerID)
{
	int32 mag;
	Vector3D d;
	iActorRuntime* ar;
	_xActor* a;
	// Line 991, Address: 0x3e44e0, Func Offset: 0
	// Line 997, Address: 0x3e4500, Func Offset: 0x20
	// Line 998, Address: 0x3e45a0, Func Offset: 0xc0
	// Line 1000, Address: 0x3e4650, Func Offset: 0x170
	// Line 1001, Address: 0x3e4670, Func Offset: 0x190
	// Line 1003, Address: 0x3e4710, Func Offset: 0x230
	// Line 1004, Address: 0x3e4714, Func Offset: 0x234
	// Line 1007, Address: 0x3e47b4, Func Offset: 0x2d4
	// Line 1008, Address: 0x3e4858, Func Offset: 0x378
	// Line 1010, Address: 0x3e4904, Func Offset: 0x424
	// Line 1012, Address: 0x3e4928, Func Offset: 0x448
	// Line 1015, Address: 0x3e494c, Func Offset: 0x46c
	// Func End, Address: 0x3e4968, Func Offset: 0x488
}

// actorDistanceToMarker__Fiii
// Start address: 0x3e4970
int32 actorDistanceToMarker(int32 actorType, int32 actorID, int32 markerID)
{
	int32 mag;
	_RwV2d vb;
	_RwV2d va;
	_RwV2d d;
	iActorRuntime* ar;
	_xActor* a;
	// Line 949, Address: 0x3e4970, Func Offset: 0
	// Line 955, Address: 0x3e4990, Func Offset: 0x20
	// Line 956, Address: 0x3e4a30, Func Offset: 0xc0
	// Line 958, Address: 0x3e4ae0, Func Offset: 0x170
	// Line 959, Address: 0x3e4b00, Func Offset: 0x190
	// Line 961, Address: 0x3e4ba0, Func Offset: 0x230
	// Line 962, Address: 0x3e4ba4, Func Offset: 0x234
	// Line 965, Address: 0x3e4c44, Func Offset: 0x2d4
	// Line 966, Address: 0x3e4ce8, Func Offset: 0x378
	// Line 968, Address: 0x3e4d94, Func Offset: 0x424
	// Line 969, Address: 0x3e4db0, Func Offset: 0x440
	// Line 971, Address: 0x3e4dcc, Func Offset: 0x45c
	// Line 972, Address: 0x3e4dd4, Func Offset: 0x464
	// Line 974, Address: 0x3e4ddc, Func Offset: 0x46c
	// Line 976, Address: 0x3e4df0, Func Offset: 0x480
	// Line 979, Address: 0x3e4e14, Func Offset: 0x4a4
	// Func End, Address: 0x3e4e30, Func Offset: 0x4c0
}

// actorDistanceToRecordedPosition3D__Fiii
// Start address: 0x3e4e30
int32 actorDistanceToRecordedPosition3D(int32 objectType, int32 actorID, int32 recordedIndex)
{
	int32 mag;
	Vector3D d;
	iActorRuntime* ar;
	_xActor* a;
	// Line 915, Address: 0x3e4e30, Func Offset: 0
	// Line 921, Address: 0x3e4e50, Func Offset: 0x20
	// Line 922, Address: 0x3e4ef0, Func Offset: 0xc0
	// Line 924, Address: 0x3e4fa0, Func Offset: 0x170
	// Line 925, Address: 0x3e4fc0, Func Offset: 0x190
	// Line 927, Address: 0x3e5060, Func Offset: 0x230
	// Line 928, Address: 0x3e5064, Func Offset: 0x234
	// Line 930, Address: 0x3e5104, Func Offset: 0x2d4
	// Line 932, Address: 0x3e512c, Func Offset: 0x2fc
	// Line 935, Address: 0x3e5150, Func Offset: 0x320
	// Func End, Address: 0x3e516c, Func Offset: 0x33c
}

// actorDistanceToRecordedPosition__Fiii
// Start address: 0x3e5170
int32 actorDistanceToRecordedPosition(int32 objectType, int32 actorID, int32 recordedIndex)
{
	int32 mag;
	_RwV2d vb;
	_RwV2d va;
	_RwV2d d;
	iActorRuntime* ar;
	_xActor* a;
	// Line 882, Address: 0x3e5170, Func Offset: 0
	// Line 888, Address: 0x3e5190, Func Offset: 0x20
	// Line 889, Address: 0x3e5230, Func Offset: 0xc0
	// Line 891, Address: 0x3e52e0, Func Offset: 0x170
	// Line 892, Address: 0x3e5300, Func Offset: 0x190
	// Line 894, Address: 0x3e53a0, Func Offset: 0x230
	// Line 895, Address: 0x3e53a4, Func Offset: 0x234
	// Line 897, Address: 0x3e5444, Func Offset: 0x2d4
	// Line 898, Address: 0x3e5460, Func Offset: 0x2f0
	// Line 900, Address: 0x3e547c, Func Offset: 0x30c
	// Line 901, Address: 0x3e5484, Func Offset: 0x314
	// Line 903, Address: 0x3e548c, Func Offset: 0x31c
	// Line 905, Address: 0x3e54a0, Func Offset: 0x330
	// Line 908, Address: 0x3e54c4, Func Offset: 0x354
	// Func End, Address: 0x3e54e0, Func Offset: 0x370
}

// actorDistanceBetweenSpots__Fiiii
// Start address: 0x3e54e0
int32 actorDistanceBetweenSpots(int32 actorType, int32 actorID, int32 spot1, int32 spot2)
{
	int32 mag;
	_RwV2d vb;
	_RwV2d va;
	_RwV2d d;
	iActorRuntime* ar;
	_xActor* a;
	// Line 846, Address: 0x3e54e0, Func Offset: 0
	// Line 852, Address: 0x3e5508, Func Offset: 0x28
	// Line 853, Address: 0x3e55a8, Func Offset: 0xc8
	// Line 855, Address: 0x3e5658, Func Offset: 0x178
	// Line 856, Address: 0x3e5678, Func Offset: 0x198
	// Line 858, Address: 0x3e5718, Func Offset: 0x238
	// Line 859, Address: 0x3e571c, Func Offset: 0x23c
	// Line 862, Address: 0x3e57bc, Func Offset: 0x2dc
	// Line 863, Address: 0x3e57d4, Func Offset: 0x2f4
	// Line 865, Address: 0x3e57ec, Func Offset: 0x30c
	// Line 866, Address: 0x3e5804, Func Offset: 0x324
	// Line 868, Address: 0x3e581c, Func Offset: 0x33c
	// Line 870, Address: 0x3e5830, Func Offset: 0x350
	// Line 873, Address: 0x3e5854, Func Offset: 0x374
	// Func End, Address: 0x3e5874, Func Offset: 0x394
}

// actorDistanceBetweenSpots3D__Fiiii
// Start address: 0x3e5880
int32 actorDistanceBetweenSpots3D(int32 actorType, int32 actorID, int32 spot1, int32 spot2)
{
	int32 mag;
	Vector3D d;
	iActorRuntime* ar;
	_xActor* a;
	// Line 819, Address: 0x3e5880, Func Offset: 0
	// Line 825, Address: 0x3e58a8, Func Offset: 0x28
	// Line 826, Address: 0x3e5948, Func Offset: 0xc8
	// Line 828, Address: 0x3e59f8, Func Offset: 0x178
	// Line 829, Address: 0x3e5a18, Func Offset: 0x198
	// Line 831, Address: 0x3e5ab8, Func Offset: 0x238
	// Line 832, Address: 0x3e5abc, Func Offset: 0x23c
	// Line 834, Address: 0x3e5b5c, Func Offset: 0x2dc
	// Line 836, Address: 0x3e5b90, Func Offset: 0x310
	// Line 839, Address: 0x3e5bb4, Func Offset: 0x334
	// Func End, Address: 0x3e5bd4, Func Offset: 0x354
}

// actorDistanceToObj3D__Fiii
// Start address: 0x3e5be0
int32 actorDistanceToObj3D(int32 objectType, int32 actorID, int32 objID)
{
	int32 mag;
	Vector3D d;
	iObjRuntime* br;
	_xObj* b;
	iActorRuntime* ar;
	_xActor* a;
	// Line 782, Address: 0x3e5be0, Func Offset: 0
	// Line 790, Address: 0x3e5c00, Func Offset: 0x20
	// Line 791, Address: 0x3e5ca0, Func Offset: 0xc0
	// Line 792, Address: 0x3e5d50, Func Offset: 0x170
	// Line 793, Address: 0x3e5df0, Func Offset: 0x210
	// Line 795, Address: 0x3e5e94, Func Offset: 0x2b4
	// Line 796, Address: 0x3e5eb4, Func Offset: 0x2d4
	// Line 798, Address: 0x3e5f54, Func Offset: 0x374
	// Line 799, Address: 0x3e5f58, Func Offset: 0x378
	// Line 801, Address: 0x3e5ff8, Func Offset: 0x418
	// Line 802, Address: 0x3e600c, Func Offset: 0x42c
	// Line 804, Address: 0x3e60ac, Func Offset: 0x4cc
	// Line 805, Address: 0x3e60b0, Func Offset: 0x4d0
	// Line 807, Address: 0x3e6150, Func Offset: 0x570
	// Line 809, Address: 0x3e6164, Func Offset: 0x584
	// Line 812, Address: 0x3e6188, Func Offset: 0x5a8
	// Func End, Address: 0x3e61a4, Func Offset: 0x5c4
}

// actorDistanceToObj__Fiii
// Start address: 0x3e61b0
int32 actorDistanceToObj(int32 objectType, int32 actorID, int32 objID)
{
	int32 mag;
	_RwV2d vb;
	_RwV2d va;
	_RwV2d d;
	iObjRuntime* br;
	_xObj* b;
	iActorRuntime* ar;
	_xActor* a;
	// Line 739, Address: 0x3e61b0, Func Offset: 0
	// Line 747, Address: 0x3e61d0, Func Offset: 0x20
	// Line 748, Address: 0x3e6270, Func Offset: 0xc0
	// Line 749, Address: 0x3e6320, Func Offset: 0x170
	// Line 750, Address: 0x3e63c0, Func Offset: 0x210
	// Line 752, Address: 0x3e6464, Func Offset: 0x2b4
	// Line 753, Address: 0x3e6484, Func Offset: 0x2d4
	// Line 755, Address: 0x3e6524, Func Offset: 0x374
	// Line 756, Address: 0x3e6528, Func Offset: 0x378
	// Line 758, Address: 0x3e65c8, Func Offset: 0x418
	// Line 759, Address: 0x3e65dc, Func Offset: 0x42c
	// Line 761, Address: 0x3e667c, Func Offset: 0x4cc
	// Line 762, Address: 0x3e6680, Func Offset: 0x4d0
	// Line 764, Address: 0x3e6720, Func Offset: 0x570
	// Line 765, Address: 0x3e6728, Func Offset: 0x578
	// Line 767, Address: 0x3e6730, Func Offset: 0x580
	// Line 768, Address: 0x3e6738, Func Offset: 0x588
	// Line 770, Address: 0x3e6740, Func Offset: 0x590
	// Line 772, Address: 0x3e6754, Func Offset: 0x5a4
	// Line 775, Address: 0x3e6778, Func Offset: 0x5c8
	// Func End, Address: 0x3e6794, Func Offset: 0x5e4
}

// actorDistanceToActor3D__Fiiii
// Start address: 0x3e67a0
int32 actorDistanceToActor3D(int32 objectType, int32 actorID, int32 targetObjectType, int32 targetActorID)
{
	float32 mag;
	Vector3D d;
	iActorRuntime* br;
	_xActor* b;
	iActorRuntime* ar;
	_xActor* a;
	// Line 697, Address: 0x3e67a0, Func Offset: 0
	// Line 705, Address: 0x3e67c8, Func Offset: 0x28
	// Line 706, Address: 0x3e6868, Func Offset: 0xc8
	// Line 707, Address: 0x3e6918, Func Offset: 0x178
	// Line 708, Address: 0x3e69b8, Func Offset: 0x218
	// Line 710, Address: 0x3e6a68, Func Offset: 0x2c8
	// Line 711, Address: 0x3e6a88, Func Offset: 0x2e8
	// Line 713, Address: 0x3e6b28, Func Offset: 0x388
	// Line 714, Address: 0x3e6b2c, Func Offset: 0x38c
	// Line 716, Address: 0x3e6bcc, Func Offset: 0x42c
	// Line 717, Address: 0x3e6bec, Func Offset: 0x44c
	// Line 719, Address: 0x3e6c8c, Func Offset: 0x4ec
	// Line 720, Address: 0x3e6c90, Func Offset: 0x4f0
	// Line 723, Address: 0x3e6d30, Func Offset: 0x590
	// Line 725, Address: 0x3e6d44, Func Offset: 0x5a4
	// Line 727, Address: 0x3e6d50, Func Offset: 0x5b0
	// Line 728, Address: 0x3e6d64, Func Offset: 0x5c4
	// Line 731, Address: 0x3e6d8c, Func Offset: 0x5ec
	// Line 732, Address: 0x3e6da4, Func Offset: 0x604
	// Func End, Address: 0x3e6dc4, Func Offset: 0x624
}

// actorDistanceToActor__Fiiii
// Start address: 0x3e6dd0
int32 actorDistanceToActor(int32 objectType, int32 actorID, int32 targetObjectType, int32 targetActorID)
{
	float32 mag;
	_RwV2d vb;
	_RwV2d va;
	_RwV2d d;
	iActorRuntime* br;
	_xActor* b;
	iActorRuntime* ar;
	_xActor* a;
	// Line 648, Address: 0x3e6dd0, Func Offset: 0
	// Line 656, Address: 0x3e6df8, Func Offset: 0x28
	// Line 657, Address: 0x3e6e98, Func Offset: 0xc8
	// Line 658, Address: 0x3e6f48, Func Offset: 0x178
	// Line 659, Address: 0x3e6fe8, Func Offset: 0x218
	// Line 661, Address: 0x3e7098, Func Offset: 0x2c8
	// Line 662, Address: 0x3e70b8, Func Offset: 0x2e8
	// Line 664, Address: 0x3e7158, Func Offset: 0x388
	// Line 665, Address: 0x3e715c, Func Offset: 0x38c
	// Line 667, Address: 0x3e71fc, Func Offset: 0x42c
	// Line 668, Address: 0x3e721c, Func Offset: 0x44c
	// Line 670, Address: 0x3e72bc, Func Offset: 0x4ec
	// Line 671, Address: 0x3e72c0, Func Offset: 0x4f0
	// Line 673, Address: 0x3e7360, Func Offset: 0x590
	// Line 674, Address: 0x3e7368, Func Offset: 0x598
	// Line 676, Address: 0x3e7370, Func Offset: 0x5a0
	// Line 677, Address: 0x3e7378, Func Offset: 0x5a8
	// Line 679, Address: 0x3e7380, Func Offset: 0x5b0
	// Line 681, Address: 0x3e7394, Func Offset: 0x5c4
	// Line 683, Address: 0x3e73a0, Func Offset: 0x5d0
	// Line 684, Address: 0x3e73b4, Func Offset: 0x5e4
	// Line 687, Address: 0x3e73dc, Func Offset: 0x60c
	// Line 688, Address: 0x3e73f4, Func Offset: 0x624
	// Func End, Address: 0x3e7414, Func Offset: 0x644
}

// actorDestroy__Fii
// Start address: 0x3e7420
void actorDestroy(int32 objectType, int32 actorID)
{
	// Line 636, Address: 0x3e7420, Func Offset: 0
	// Line 637, Address: 0x3e7428, Func Offset: 0x8
	// Line 638, Address: 0x3e7430, Func Offset: 0x10
	// Func End, Address: 0x3e7440, Func Offset: 0x20
}

// actorSetTexture__Fiii
// Start address: 0x3e7440
void actorSetTexture(int32 actorType, int32 actorID, int32 textureID)
{
	_xTex* t;
	iActorRuntime* r;
	_xActor* a;
	// Line 610, Address: 0x3e7440, Func Offset: 0
	// Line 615, Address: 0x3e7464, Func Offset: 0x24
	// Line 616, Address: 0x3e7504, Func Offset: 0xc4
	// Line 618, Address: 0x3e75b4, Func Offset: 0x174
	// Line 619, Address: 0x3e75d4, Func Offset: 0x194
	// Line 621, Address: 0x3e7674, Func Offset: 0x234
	// Line 622, Address: 0x3e7678, Func Offset: 0x238
	// Line 624, Address: 0x3e7718, Func Offset: 0x2d8
	// Line 625, Address: 0x3e7724, Func Offset: 0x2e4
	// Line 626, Address: 0x3e772c, Func Offset: 0x2ec
	// Line 628, Address: 0x3e7744, Func Offset: 0x304
	// Line 629, Address: 0x3e7760, Func Offset: 0x320
	// Func End, Address: 0x3e7780, Func Offset: 0x340
}

// actorCreate__Fiiii
// Start address: 0x3e7780
int32 actorCreate(int32 objectType, int32 modelID, int32 skeletonID, int32 textureID)
{
	// Line 591, Address: 0x3e7780, Func Offset: 0
	// Line 592, Address: 0x3e77a8, Func Offset: 0x28
	// Line 594, Address: 0x3e7848, Func Offset: 0xc8
	// Line 595, Address: 0x3e7860, Func Offset: 0xe0
	// Func End, Address: 0x3e7880, Func Offset: 0x100
}

// actorSetBRadius__Fiii
// Start address: 0x3e7880
void actorSetBRadius(int32 objectType, int32 actorID, int32 bradius)
{
	iActorRuntime* r;
	_xActor* a;
	// Line 568, Address: 0x3e7880, Func Offset: 0
	// Line 572, Address: 0x3e78a0, Func Offset: 0x20
	// Line 573, Address: 0x3e7940, Func Offset: 0xc0
	// Line 574, Address: 0x3e79e0, Func Offset: 0x160
	// Line 576, Address: 0x3e7a90, Func Offset: 0x210
	// Line 577, Address: 0x3e7ab0, Func Offset: 0x230
	// Line 579, Address: 0x3e7b50, Func Offset: 0x2d0
	// Line 580, Address: 0x3e7b54, Func Offset: 0x2d4
	// Line 582, Address: 0x3e7bf4, Func Offset: 0x374
	// Line 583, Address: 0x3e7c14, Func Offset: 0x394
	// Func End, Address: 0x3e7c30, Func Offset: 0x3b0
}

// actorSetAttrSight__Fiii
// Start address: 0x3e7c30
void actorSetAttrSight(int32 objectType, int32 actorID, int32 sight)
{
	iActorRuntime* r;
	_xActor* a;
	// Line 541, Address: 0x3e7c30, Func Offset: 0
	// Line 545, Address: 0x3e7c50, Func Offset: 0x20
	// Line 546, Address: 0x3e7cf0, Func Offset: 0xc0
	// Line 547, Address: 0x3e7d90, Func Offset: 0x160
	// Line 549, Address: 0x3e7e40, Func Offset: 0x210
	// Line 550, Address: 0x3e7e60, Func Offset: 0x230
	// Line 552, Address: 0x3e7f00, Func Offset: 0x2d0
	// Line 553, Address: 0x3e7f04, Func Offset: 0x2d4
	// Line 557, Address: 0x3e7fa4, Func Offset: 0x374
	// Line 559, Address: 0x3e7fc4, Func Offset: 0x394
	// Line 560, Address: 0x3e7fc8, Func Offset: 0x398
	// Func End, Address: 0x3e7fe4, Func Offset: 0x3b4
}

// actorSetAttrFOV__Fiii
// Start address: 0x3e7ff0
void actorSetAttrFOV(int32 objectType, int32 actorID, int32 fov)
{
	iActorRuntime* r;
	_xActor* a;
	// Line 517, Address: 0x3e7ff0, Func Offset: 0
	// Line 521, Address: 0x3e8010, Func Offset: 0x20
	// Line 522, Address: 0x3e80b0, Func Offset: 0xc0
	// Line 523, Address: 0x3e8150, Func Offset: 0x160
	// Line 525, Address: 0x3e8200, Func Offset: 0x210
	// Line 526, Address: 0x3e8220, Func Offset: 0x230
	// Line 528, Address: 0x3e82c0, Func Offset: 0x2d0
	// Line 529, Address: 0x3e82c4, Func Offset: 0x2d4
	// Line 531, Address: 0x3e8364, Func Offset: 0x374
	// Line 533, Address: 0x3e8368, Func Offset: 0x378
	// Line 534, Address: 0x3e8384, Func Offset: 0x394
	// Func End, Address: 0x3e83a0, Func Offset: 0x3b0
}

// actorSetPositionFloorHeight__Fiii
// Start address: 0x3e83a0
void actorSetPositionFloorHeight(int32 actorType, int32 actorID, int32 y)
{
	tagxPhysicsObject* p;
	// Line 497, Address: 0x3e83a0, Func Offset: 0
	// Line 500, Address: 0x3e83c0, Func Offset: 0x20
	// Line 501, Address: 0x3e8460, Func Offset: 0xc0
	// Line 502, Address: 0x3e8500, Func Offset: 0x160
	// Line 505, Address: 0x3e85b0, Func Offset: 0x210
	// Line 507, Address: 0x3e8674, Func Offset: 0x2d4
	// Line 508, Address: 0x3e8698, Func Offset: 0x2f8
	// Line 509, Address: 0x3e86e4, Func Offset: 0x344
	// Func End, Address: 0x3e8700, Func Offset: 0x360
}

// actorSetPosition__Fiiiii
// Start address: 0x3e8700
void actorSetPosition(int32 objectType, int32 actorID, int32 x, int32 y, int32 z)
{
	// Line 482, Address: 0x3e8700, Func Offset: 0
	// Line 483, Address: 0x3e8730, Func Offset: 0x30
	// Line 484, Address: 0x3e87d0, Func Offset: 0xd0
	// Line 487, Address: 0x3e8880, Func Offset: 0x180
	// Line 489, Address: 0x3e88fc, Func Offset: 0x1fc
	// Func End, Address: 0x3e8920, Func Offset: 0x220
}

// actorSetPositionNavigationPoint__Fiii
// Start address: 0x3e8920
void actorSetPositionNavigationPoint(int32 objectType, int32 actorID, int32 navID)
{
	// Line 469, Address: 0x3e8920, Func Offset: 0
	// Line 470, Address: 0x3e8940, Func Offset: 0x20
	// Line 471, Address: 0x3e89e0, Func Offset: 0xc0
	// Line 472, Address: 0x3e8a80, Func Offset: 0x160
	// Line 474, Address: 0x3e8b20, Func Offset: 0x200
	// Line 475, Address: 0x3e8b34, Func Offset: 0x214
	// Func End, Address: 0x3e8b50, Func Offset: 0x230
}

// actorSetPositionMarkerAbsolute__Fiii
// Start address: 0x3e8b50
void actorSetPositionMarkerAbsolute(int32 objectType, int32 actorID, int32 markerID)
{
	xMarker* marker;
	// Line 447, Address: 0x3e8b50, Func Offset: 0
	// Line 448, Address: 0x3e8b70, Func Offset: 0x20
	// Line 449, Address: 0x3e8c10, Func Offset: 0xc0
	// Line 450, Address: 0x3e8cb0, Func Offset: 0x160
	// Line 454, Address: 0x3e8d50, Func Offset: 0x200
	// Line 456, Address: 0x3e8d64, Func Offset: 0x214
	// Line 457, Address: 0x3e8d74, Func Offset: 0x224
	// Line 458, Address: 0x3e8d88, Func Offset: 0x238
	// Line 461, Address: 0x3e8d90, Func Offset: 0x240
	// Line 463, Address: 0x3e8dac, Func Offset: 0x25c
	// Func End, Address: 0x3e8dc8, Func Offset: 0x278
}

// actorSetPositionMarker__Fiii
// Start address: 0x3e8dd0
void actorSetPositionMarker(int32 objectType, int32 actorID, int32 markerID)
{
	iActorRuntime* r;
	xMarker* marker;
	// Line 405, Address: 0x3e8dd0, Func Offset: 0
	// Line 406, Address: 0x3e8df0, Func Offset: 0x20
	// Line 407, Address: 0x3e8e90, Func Offset: 0xc0
	// Line 408, Address: 0x3e8f30, Func Offset: 0x160
	// Line 410, Address: 0x3e8fd0, Func Offset: 0x200
	// Line 412, Address: 0x3e8fe4, Func Offset: 0x214
	// Line 414, Address: 0x3e8ff4, Func Offset: 0x224
	// Line 433, Address: 0x3e9000, Func Offset: 0x230
	// Line 437, Address: 0x3e903c, Func Offset: 0x26c
	// Line 439, Address: 0x3e9044, Func Offset: 0x274
	// Line 440, Address: 0x3e9058, Func Offset: 0x288
	// Func End, Address: 0x3e9074, Func Offset: 0x2a4
}

// actorRoutePosition__Fii
// Start address: 0x3e9080
int32 actorRoutePosition(int32 objectType, int32 actorID)
{
	// Line 389, Address: 0x3e9080, Func Offset: 0
	// Line 391, Address: 0x3e9098, Func Offset: 0x18
	// Line 392, Address: 0x3e9138, Func Offset: 0xb8
	// Line 394, Address: 0x3e91e8, Func Offset: 0x168
	// Line 395, Address: 0x3e921c, Func Offset: 0x19c
	// Line 397, Address: 0x3e924c, Func Offset: 0x1cc
	// Line 398, Address: 0x3e9250, Func Offset: 0x1d0
	// Func End, Address: 0x3e9268, Func Offset: 0x1e8
}

// actorRouteStatus__Fii
// Start address: 0x3e9270
int32 actorRouteStatus(int32 actorType, int32 actorID)
{
	xRoute* route;
	iActorRuntime* r;
	// Line 357, Address: 0x3e9270, Func Offset: 0
	// Line 360, Address: 0x3e9288, Func Offset: 0x18
	// Line 361, Address: 0x3e9328, Func Offset: 0xb8
	// Line 364, Address: 0x3e93d8, Func Offset: 0x168
	// Line 366, Address: 0x3e93fc, Func Offset: 0x18c
	// Line 368, Address: 0x3e940c, Func Offset: 0x19c
	// Line 369, Address: 0x3e941c, Func Offset: 0x1ac
	// Line 371, Address: 0x3e94bc, Func Offset: 0x24c
	// Line 376, Address: 0x3e94c8, Func Offset: 0x258
	// Line 377, Address: 0x3e94cc, Func Offset: 0x25c
	// Func End, Address: 0x3e94e4, Func Offset: 0x274
}

// actorSetPositionActor__Fiiii
// Start address: 0x3e94f0
void actorSetPositionActor(int32 objectType, int32 actorID, int32 toObjectType, int32 toActorID)
{
	// Line 339, Address: 0x3e94f0, Func Offset: 0
	// Line 340, Address: 0x3e9518, Func Offset: 0x28
	// Line 341, Address: 0x3e95b8, Func Offset: 0xc8
	// Line 342, Address: 0x3e9658, Func Offset: 0x168
	// Line 343, Address: 0x3e96f8, Func Offset: 0x208
	// Line 345, Address: 0x3e9798, Func Offset: 0x2a8
	// Line 346, Address: 0x3e97b0, Func Offset: 0x2c0
	// Func End, Address: 0x3e97d0, Func Offset: 0x2e0
}

// actorGetFlags__Fii
// Start address: 0x3e97d0
int32 actorGetFlags(int32 type, int32 id)
{
	// Line 326, Address: 0x3e97d0, Func Offset: 0
	// Line 327, Address: 0x3e97e8, Func Offset: 0x18
	// Line 328, Address: 0x3e9888, Func Offset: 0xb8
	// Line 329, Address: 0x3e9928, Func Offset: 0x158
	// Line 331, Address: 0x3e99d8, Func Offset: 0x208
	// Line 332, Address: 0x3e99fc, Func Offset: 0x22c
	// Func End, Address: 0x3e9a14, Func Offset: 0x244
}

// actorGetRotY__Fii
// Start address: 0x3e9a20
int32 actorGetRotY(int32 type, int32 id)
{
	// Line 306, Address: 0x3e9a20, Func Offset: 0
	// Line 307, Address: 0x3e9a38, Func Offset: 0x18
	// Line 308, Address: 0x3e9ad8, Func Offset: 0xb8
	// Line 309, Address: 0x3e9b78, Func Offset: 0x158
	// Line 311, Address: 0x3e9c28, Func Offset: 0x208
	// Line 312, Address: 0x3e9c64, Func Offset: 0x244
	// Func End, Address: 0x3e9c7c, Func Offset: 0x25c
}

// actorGetPositionZ__Fii
// Start address: 0x3e9c80
int32 actorGetPositionZ(int32 type, int32 id)
{
	// Line 286, Address: 0x3e9c80, Func Offset: 0
	// Line 287, Address: 0x3e9c98, Func Offset: 0x18
	// Line 288, Address: 0x3e9d38, Func Offset: 0xb8
	// Line 289, Address: 0x3e9dd8, Func Offset: 0x158
	// Line 291, Address: 0x3e9e88, Func Offset: 0x208
	// Line 292, Address: 0x3e9ec4, Func Offset: 0x244
	// Func End, Address: 0x3e9edc, Func Offset: 0x25c
}

// actorGetPositionY__Fii
// Start address: 0x3e9ee0
int32 actorGetPositionY(int32 type, int32 id)
{
	// Line 265, Address: 0x3e9ee0, Func Offset: 0
	// Line 266, Address: 0x3e9ef8, Func Offset: 0x18
	// Line 267, Address: 0x3e9f98, Func Offset: 0xb8
	// Line 268, Address: 0x3ea038, Func Offset: 0x158
	// Line 270, Address: 0x3ea0e8, Func Offset: 0x208
	// Line 271, Address: 0x3ea124, Func Offset: 0x244
	// Func End, Address: 0x3ea13c, Func Offset: 0x25c
}

// actorGetPositionX__Fii
// Start address: 0x3ea140
int32 actorGetPositionX(int32 type, int32 id)
{
	// Line 244, Address: 0x3ea140, Func Offset: 0
	// Line 245, Address: 0x3ea158, Func Offset: 0x18
	// Line 246, Address: 0x3ea1f8, Func Offset: 0xb8
	// Line 247, Address: 0x3ea298, Func Offset: 0x158
	// Line 249, Address: 0x3ea348, Func Offset: 0x208
	// Line 250, Address: 0x3ea384, Func Offset: 0x244
	// Func End, Address: 0x3ea39c, Func Offset: 0x25c
}

// actorSetVisible__Fiii
// Start address: 0x3ea3a0
void actorSetVisible(int32 type, int32 id, int32 visible)
{
	// Line 214, Address: 0x3ea3a0, Func Offset: 0
	// Line 215, Address: 0x3ea3c0, Func Offset: 0x20
	// Line 216, Address: 0x3ea460, Func Offset: 0xc0
	// Line 218, Address: 0x3ea510, Func Offset: 0x170
	// Line 220, Address: 0x3ea51c, Func Offset: 0x17c
	// Line 222, Address: 0x3ea544, Func Offset: 0x1a4
	// Line 223, Address: 0x3ea570, Func Offset: 0x1d0
	// Line 226, Address: 0x3ea578, Func Offset: 0x1d8
	// Line 227, Address: 0x3ea5a0, Func Offset: 0x200
	// Line 229, Address: 0x3ea5fc, Func Offset: 0x25c
	// Func End, Address: 0x3ea618, Func Offset: 0x278
}

// actorEffectSetFlag__Fiiii
// Start address: 0x3ea620
void actorEffectSetFlag(int32 actorType, int32 actorID, int32 flag, int32 mode)
{
	// Line 202, Address: 0x3ea620, Func Offset: 0
	// Line 203, Address: 0x3ea648, Func Offset: 0x28
	// Line 204, Address: 0x3ea7d0, Func Offset: 0x1b0
	// Func End, Address: 0x3ea7f0, Func Offset: 0x1d0
}

// actorEffectReflect__Fiiiiiii
// Start address: 0x3ea7f0
void actorEffectReflect(int32 actorType, int32 actorID, int32 r, int32 g, int32 b, int32 mode)
{
	// Line 196, Address: 0x3ea7f0, Func Offset: 0
	// Line 197, Address: 0x3ea828, Func Offset: 0x38
	// Line 198, Address: 0x3ea9b8, Func Offset: 0x1c8
	// Func End, Address: 0x3ea9e0, Func Offset: 0x1f0
}

// actorEffectFadeInfo__Fiiiiiii
// Start address: 0x3ea9e0
void actorEffectFadeInfo(int32 actorType, int32 actorID, int32 r, int32 g, int32 b, int32 mode, int32 idx)
{
	// Line 188, Address: 0x3ea9e0, Func Offset: 0
	// Line 189, Address: 0x3eaa20, Func Offset: 0x40
	// Line 191, Address: 0x3eabb4, Func Offset: 0x1d4
	// Func End, Address: 0x3eabe0, Func Offset: 0x200
}

// actorEffectFadeStart__Fiiii
// Start address: 0x3eabe0
void actorEffectFadeStart(int32 actorType, int32 actorID, int32 flag, int32 time)
{
	// Line 168, Address: 0x3eabe0, Func Offset: 0
	// Line 169, Address: 0x3eac08, Func Offset: 0x28
	// Line 170, Address: 0x3ead90, Func Offset: 0x1b0
	// Func End, Address: 0x3eadb0, Func Offset: 0x1d0
}

// actorEffectFadeDone__Fii
// Start address: 0x3eadb0
int32 actorEffectFadeDone(int32 actorType, int32 actorID)
{
	// Line 163, Address: 0x3eadb0, Func Offset: 0
	// Line 164, Address: 0x3eadc8, Func Offset: 0x18
	// Line 165, Address: 0x3eaf48, Func Offset: 0x198
	// Func End, Address: 0x3eaf60, Func Offset: 0x1b0
}

// xActorDBScriptRegister__Fv
// Start address: 0x3eaf60
void xActorDBScriptRegister()
{
	// Line 28, Address: 0x3eaf60, Func Offset: 0
	// Line 31, Address: 0x3eaf68, Func Offset: 0x8
	// Line 32, Address: 0x3eaf84, Func Offset: 0x24
	// Line 33, Address: 0x3eafa0, Func Offset: 0x40
	// Line 34, Address: 0x3eafbc, Func Offset: 0x5c
	// Line 36, Address: 0x3eafd8, Func Offset: 0x78
	// Line 38, Address: 0x3eaff4, Func Offset: 0x94
	// Line 39, Address: 0x3eb010, Func Offset: 0xb0
	// Line 40, Address: 0x3eb02c, Func Offset: 0xcc
	// Line 41, Address: 0x3eb048, Func Offset: 0xe8
	// Line 42, Address: 0x3eb064, Func Offset: 0x104
	// Line 44, Address: 0x3eb080, Func Offset: 0x120
	// Line 45, Address: 0x3eb09c, Func Offset: 0x13c
	// Line 46, Address: 0x3eb0b8, Func Offset: 0x158
	// Line 47, Address: 0x3eb0d4, Func Offset: 0x174
	// Line 50, Address: 0x3eb0f0, Func Offset: 0x190
	// Line 51, Address: 0x3eb10c, Func Offset: 0x1ac
	// Line 52, Address: 0x3eb128, Func Offset: 0x1c8
	// Line 53, Address: 0x3eb144, Func Offset: 0x1e4
	// Line 54, Address: 0x3eb160, Func Offset: 0x200
	// Line 57, Address: 0x3eb17c, Func Offset: 0x21c
	// Line 58, Address: 0x3eb198, Func Offset: 0x238
	// Line 59, Address: 0x3eb1b4, Func Offset: 0x254
	// Line 60, Address: 0x3eb1d0, Func Offset: 0x270
	// Line 61, Address: 0x3eb1ec, Func Offset: 0x28c
	// Line 62, Address: 0x3eb208, Func Offset: 0x2a8
	// Line 63, Address: 0x3eb224, Func Offset: 0x2c4
	// Line 68, Address: 0x3eb240, Func Offset: 0x2e0
	// Line 69, Address: 0x3eb25c, Func Offset: 0x2fc
	// Line 70, Address: 0x3eb278, Func Offset: 0x318
	// Line 71, Address: 0x3eb294, Func Offset: 0x334
	// Line 72, Address: 0x3eb2b0, Func Offset: 0x350
	// Line 73, Address: 0x3eb2cc, Func Offset: 0x36c
	// Line 75, Address: 0x3eb2e8, Func Offset: 0x388
	// Line 76, Address: 0x3eb304, Func Offset: 0x3a4
	// Line 77, Address: 0x3eb320, Func Offset: 0x3c0
	// Line 78, Address: 0x3eb33c, Func Offset: 0x3dc
	// Line 79, Address: 0x3eb358, Func Offset: 0x3f8
	// Line 81, Address: 0x3eb374, Func Offset: 0x414
	// Line 82, Address: 0x3eb390, Func Offset: 0x430
	// Line 83, Address: 0x3eb3ac, Func Offset: 0x44c
	// Line 84, Address: 0x3eb3c8, Func Offset: 0x468
	// Line 85, Address: 0x3eb3e4, Func Offset: 0x484
	// Line 86, Address: 0x3eb400, Func Offset: 0x4a0
	// Line 87, Address: 0x3eb41c, Func Offset: 0x4bc
	// Line 89, Address: 0x3eb438, Func Offset: 0x4d8
	// Line 90, Address: 0x3eb454, Func Offset: 0x4f4
	// Line 91, Address: 0x3eb470, Func Offset: 0x510
	// Line 93, Address: 0x3eb48c, Func Offset: 0x52c
	// Line 94, Address: 0x3eb4a8, Func Offset: 0x548
	// Line 96, Address: 0x3eb4c4, Func Offset: 0x564
	// Line 97, Address: 0x3eb4e0, Func Offset: 0x580
	// Line 98, Address: 0x3eb4fc, Func Offset: 0x59c
	// Line 99, Address: 0x3eb518, Func Offset: 0x5b8
	// Line 100, Address: 0x3eb534, Func Offset: 0x5d4
	// Line 101, Address: 0x3eb550, Func Offset: 0x5f0
	// Line 102, Address: 0x3eb56c, Func Offset: 0x60c
	// Line 103, Address: 0x3eb588, Func Offset: 0x628
	// Line 106, Address: 0x3eb5a4, Func Offset: 0x644
	// Line 107, Address: 0x3eb5c0, Func Offset: 0x660
	// Line 108, Address: 0x3eb5dc, Func Offset: 0x67c
	// Line 109, Address: 0x3eb5f8, Func Offset: 0x698
	// Line 111, Address: 0x3eb614, Func Offset: 0x6b4
	// Line 112, Address: 0x3eb630, Func Offset: 0x6d0
	// Line 113, Address: 0x3eb64c, Func Offset: 0x6ec
	// Line 115, Address: 0x3eb668, Func Offset: 0x708
	// Line 116, Address: 0x3eb684, Func Offset: 0x724
	// Line 117, Address: 0x3eb6a0, Func Offset: 0x740
	// Line 118, Address: 0x3eb6bc, Func Offset: 0x75c
	// Line 120, Address: 0x3eb6d8, Func Offset: 0x778
	// Line 121, Address: 0x3eb6f4, Func Offset: 0x794
	// Line 122, Address: 0x3eb710, Func Offset: 0x7b0
	// Line 123, Address: 0x3eb72c, Func Offset: 0x7cc
	// Line 124, Address: 0x3eb748, Func Offset: 0x7e8
	// Line 125, Address: 0x3eb764, Func Offset: 0x804
	// Line 127, Address: 0x3eb780, Func Offset: 0x820
	// Line 128, Address: 0x3eb79c, Func Offset: 0x83c
	// Line 129, Address: 0x3eb7b8, Func Offset: 0x858
	// Line 131, Address: 0x3eb7d4, Func Offset: 0x874
	// Line 132, Address: 0x3eb7f0, Func Offset: 0x890
	// Line 133, Address: 0x3eb80c, Func Offset: 0x8ac
	// Line 134, Address: 0x3eb828, Func Offset: 0x8c8
	// Line 139, Address: 0x3eb844, Func Offset: 0x8e4
	// Line 140, Address: 0x3eb860, Func Offset: 0x900
	// Line 141, Address: 0x3eb87c, Func Offset: 0x91c
	// Line 142, Address: 0x3eb898, Func Offset: 0x938
	// Line 143, Address: 0x3eb8b4, Func Offset: 0x954
	// Line 144, Address: 0x3eb8d0, Func Offset: 0x970
	// Func End, Address: 0x3eb8e0, Func Offset: 0x980
}

