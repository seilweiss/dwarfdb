typedef struct tagXStreamMDSDirectory;
typedef struct _xActor;
typedef struct _rxHeapSuperBlockDescriptor;
typedef struct tagiAnimRuntime;
typedef struct _rwResEntryTag;
typedef struct tagP2Weight;
typedef struct tagxStateLink;
typedef struct _RxHeap;
typedef struct _rxHeapBlockHeader;
typedef struct iTriggerResource;
typedef struct xAction;
typedef struct _RwLLLink;
typedef struct xTrigger;
typedef enum _RxClusterValidityReq;
typedef struct _rxHeapFreeBlock;
typedef struct _RxPipelineNodeTopSortData;
typedef struct iMarkerResource;
typedef struct _RpMaterialList;
typedef struct _iLightRuntime;
typedef struct _RxPipelineNode;
typedef struct _RxClusterDefinition;
typedef struct _FCinfo;
typedef struct _RpMaterial;
typedef struct xMarker;
typedef enum _RwTextureFilterMode;
typedef struct _RxPipelineNodeParam;
typedef struct _RxPipelineCluster;
typedef struct xCondition;
typedef struct _RpWorldSector;
typedef enum _rxEmbeddedPacketState;
typedef struct tagXAnimTrigger;
typedef struct _RpClump;
typedef struct Vector3D;
typedef struct tagP2VERTEX;
typedef struct p2CameraVersion;
typedef struct iActorRuntime;
typedef struct tagiAnimResource;
typedef struct _RxNodeDefinition;
typedef struct tagxStateThread;
typedef enum _RxClusterValid;
typedef struct _RpPolygon;
typedef struct Vector4D;
typedef struct _RwSurfaceProperties;
typedef struct tagxState;
typedef struct _RxPipeline;
typedef struct _RwV3d;
typedef struct iLightResource;
typedef struct XStreamHeader;
typedef struct tagXAnimControl;
typedef struct tagiMesh;
typedef struct _RpVertexNormal;
typedef struct _tagiEnvRuntime;
typedef struct _RwTexCoords;
typedef struct _RpWorld;
typedef struct iConditionRuntime;
typedef struct _RwRGBA;
typedef struct xCamera;
typedef struct _RxPipelineRequiresCluster;
typedef struct tagxStateMgr;
typedef struct tagiFloorTri;
typedef struct iCameraResource;
typedef struct _RwTexDictionary;
typedef struct tagP2MeshVertex;
typedef struct _rxReq;
typedef struct _iVFXResource;
typedef struct tagXStreamDirectoryEntry;
typedef struct tagxPhysicsObject;
typedef struct _RwObject;
typedef struct iEntryPointResource;
typedef struct _RpCollSector;
typedef struct tagiAnimFrame;
typedef struct _RpMeshHeader;
typedef struct iActionRuntime;
typedef struct xNavLink;
typedef struct _RxOutputSpec;
typedef struct tagXAnim;
typedef struct _iSFXResource;
typedef struct _RwBBox;
typedef struct _RwTexture;
typedef struct _RxClusterRef;
typedef struct _iRenderEffects;
typedef struct p2Camera;
typedef struct xEntryPoint;
typedef struct iActionResource;
typedef struct _RwRaster;
typedef struct _tagxEnv;
typedef struct _RxIoSpec;
typedef struct xNavPoint;
typedef struct tagiFloor;
typedef struct _RxNodeMethods;
typedef struct iDisplayCamera;
typedef struct xScene;
typedef enum _RxClusterForcePresent;
typedef struct _RpSector;
typedef struct _RxPacket;
typedef enum _rpWorldRenderOrder;
typedef enum _RxNodeDefEditable;
typedef struct iConditionResource;
typedef struct _RxClusterUnion;
typedef struct xRule;
typedef enum _RwTextureAddressMode;
typedef struct _p2Geom;
typedef struct _RxCluster;
typedef struct _RwLinkList;
typedef struct iRuleResource;
typedef struct _iEntryPointRuntime;
typedef struct tagP2Mesh;
typedef struct xLight;
typedef struct tagxPadAction;

typedef void(*type_2)(_rwResEntryTag*);
typedef int32(*type_4)(_RxPipelineNode*, _RxPipelineNodeParam*);
typedef _RpWorldSector*(*type_7)(_RpWorldSector*);
typedef int32(*type_8)(_RxNodeDefinition*);
typedef void(*type_10)(_RxNodeDefinition*);
typedef _RpClump*(*type_11)(_RpClump*, void*);
typedef int32(*type_13)(_RxPipelineNode*);
typedef void(*type_16)(_RxPipelineNode*);
typedef int32(*type_17)(_RxPipelineNode*, _RxPipeline*);
typedef uint32(*type_19)(_RxPipelineNode*, uint32, uint32, void*);
typedef void(*type_20)(_xActor*, int32, tagXAnim*, tagXAnimTrigger*);

typedef iTriggerResource* type_0[20];
typedef tagXStreamDirectoryEntry type_1[1000];
typedef iTriggerResource* type_3[20];
typedef iTriggerResource* type_5[20];
typedef float32 type_6[3];
typedef iTriggerResource* type_9[20];
typedef uint32 type_12[4];
typedef iLightResource type_14[2];
typedef tagxState* type_15[10];
typedef int8 type_18[2048];
typedef Vector3D type_21[4];
typedef p2CameraVersion type_22[5];
typedef uint8 type_23[3];
typedef _RxCluster type_24[1];
typedef uint8 type_25[4];
typedef uint8 type_26[4];
typedef int8 type_27[32];
typedef uint8 type_28[4];
typedef int8 type_29[32];
typedef uint16 type_30[20];
typedef iTriggerResource* type_31[20];
typedef int32 type_32[7];
typedef int8 type_33[128];
typedef tagxStateThread type_34[7];
typedef int8 type_35[51];
typedef iTriggerResource* type_36[20];
typedef Vector3D type_37[4];
typedef uint8 type_38[4];
typedef iTriggerResource* type_39[20];
typedef uint8 type_40[3];
typedef uint16 type_41[3];
typedef iTriggerResource* type_42[20];
typedef float32 type_43[16];
typedef uint16 type_44[3];
typedef iTriggerResource* type_45[20];
typedef uint16 type_46[3];
typedef iTriggerResource* type_47[20];
typedef iTriggerResource* type_48[20];
typedef Vector3D type_49[5];
typedef iTriggerResource* type_50[20];

struct tagXStreamMDSDirectory
{
	uint32 count;
	tagXStreamDirectoryEntry directory[1000];
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

struct _rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	_rxHeapSuperBlockDescriptor* next;
};

struct tagiAnimRuntime
{
	void* m_sfx;
	void* m_vfx;
};

struct _rwResEntryTag
{
	_RwLLLink link;
	int32 size;
	void* owner;
	_rwResEntryTag** ownerRef;
	void(*destroyNotify)(_rwResEntryTag*);
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

struct xAction
{
	iActionResource* m_resource;
	iActionRuntime* m_runtime;
};

struct _RwLLLink
{
	_RwLLLink* next;
	_RwLLLink* prev;
};

struct xTrigger
{
	iTriggerResource* m_resource;
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

struct _RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	_rxReq* req;
	void* initialisationData;
	uint32 initialisationDataSize;
};

struct iMarkerResource
{
	Vector3D m_pos;
};

struct _RpMaterialList
{
	_RpMaterial** materials;
	int32 numMaterials;
	int32 space;
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

struct _FCinfo
{
	uint16 nidx[3];
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

struct xMarker
{
	iMarkerResource* m_resource;
	void** m_runtime;
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

struct xCondition
{
	iConditionResource* m_resource;
	iConditionRuntime* m_runtime;
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

enum _rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

struct tagXAnimTrigger
{
	uint16 m_frame;
	uint16 m_type;
	uint32 m_data;
};

struct _RpClump
{
	_RwObject object;
	_RwLinkList atomicList;
	_RwLLLink inWorldLink;
	_RpClump*(*callback)(_RpClump*, void*);
	uint16 renderFrame;
};

struct Vector3D
{
	float32 x;
	float32 y;
	float32 z;
};

struct tagP2VERTEX
{
	float32 x;
	float32 y;
	float32 z;
	float32 tu;
	float32 tv;
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

struct _RxNodeDefinition
{
	int8* name;
	_RxNodeMethods nodeMethods;
	_RxIoSpec io;
	uint32 pipelineNodePrivateDataSize;
	_RxNodeDefEditable editable;
	int32 InputPipesCnt;
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

enum _RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
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

struct _RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
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

struct _RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct iLightResource
{
	uint32 m_type;
	Vector3D m_pos;
	Vector3D m_rot;
	Vector3D m_color;
	int32 m_fov;
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

struct _RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

struct _tagiEnvRuntime
{
	_RpWorld* world;
	Vector3D world_origin;
	_RwTexDictionary* tex_dict;
};

struct _RwTexCoords
{
	float32 u;
	float32 v;
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

struct iConditionRuntime
{
	xCondition* m_operand;
	uint16 m_match;
	uint16 m_trigger;
};

struct _RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct xCamera
{
	iCameraResource* m_resource;
	void** m_runtime;
};

struct _RxPipelineRequiresCluster
{
	_RxClusterDefinition* clusterDef;
	_RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
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

struct _RwTexDictionary
{
	_RwObject object;
	_RwLinkList texturesInDict;
	_RwLLLink lInInstance;
};

struct tagP2MeshVertex
{
	float32 m_x;
	float32 m_y;
	float32 m_z;
};

struct _rxReq
{
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

struct tagXStreamDirectoryEntry
{
	uint32 id;
	uint32 type;
	uint32 offset;
	uint32 length;
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

struct _RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
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

struct iActionRuntime
{
	xAction* m_and;
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

struct _RxOutputSpec
{
	int8* name;
	_RxClusterValid* outputClusters;
	_RxClusterValid allOtherClusters;
};

struct tagXAnim
{
	tagiAnimResource* m_resource;
	tagiAnimRuntime* m_runtime;
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

struct _RxClusterRef
{
	_RxClusterDefinition* clusterDef;
	_RxClusterForcePresent forcePresent;
	uint32 reserved;
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

struct p2Camera
{
	Vector3D m_pos;
	Vector3D m_rot;
	float32 m_fov;
};

struct xEntryPoint
{
	iEntryPointResource* m_resource;
	_iEntryPointRuntime* m_runtime;
};

struct iActionResource
{
	uint8 m_cmdType;
	uint8 m_cmd;
	uint16 pad;
	uint32 m_cmdParameter;
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

struct _tagxEnv
{
	_tagiEnvRuntime* m_runtime;
};

struct _RxIoSpec
{
	uint32 numClustersOfInterest;
	_RxClusterRef* clustersOfInterest;
	_RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	_RxOutputSpec* outputs;
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

struct xRule
{
	iRuleResource* m_resource;
	void* m_runtime;
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

struct xLight
{
	iLightResource* m_resource;
	_iLightRuntime* m_runtime;
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

int8 dbfont_chars[51];
int32 g_textureCount;
uint16 g_tpageInfo[20];
float32 gActorShadowHeight;
xScene* xScene_current;
int32 gPlayerType;
int8 vAssertBuf2[128];
XStreamHeader currentHeader;

void iActorDraw(_xActor* act);
void iActorGeometryControl(_xActor* a, int32 partNumber, int32 flag);
void iActorInitialize(_xActor* a);

// iActorDraw__FP7_xActor
// Start address: 0x38df00
void iActorDraw(_xActor* act)
{
	Vector3D pos;
	float32 m[16];
	_p2Geom* geom;
	float32* fp;
	tagxPhysicsObject* p;
	iActorRuntime* r;
	// Line 64, Address: 0x38df00, Func Offset: 0
	// Line 66, Address: 0x38df18, Func Offset: 0x18
	// Line 73, Address: 0x38df1c, Func Offset: 0x1c
	// Line 76, Address: 0x38df24, Func Offset: 0x24
	// Line 78, Address: 0x38df28, Func Offset: 0x28
	// Line 86, Address: 0x38df4c, Func Offset: 0x4c
	// Line 87, Address: 0x38df54, Func Offset: 0x54
	// Line 88, Address: 0x38df64, Func Offset: 0x64
	// Line 89, Address: 0x38df6c, Func Offset: 0x6c
	// Line 92, Address: 0x38df78, Func Offset: 0x78
	// Line 94, Address: 0x38df88, Func Offset: 0x88
	// Line 95, Address: 0x38dfa0, Func Offset: 0xa0
	// Line 99, Address: 0x38dfa8, Func Offset: 0xa8
	// Line 105, Address: 0x38dfc0, Func Offset: 0xc0
	// Line 106, Address: 0x38dfcc, Func Offset: 0xcc
	// Line 107, Address: 0x38dfdc, Func Offset: 0xdc
	// Line 108, Address: 0x38dfec, Func Offset: 0xec
	// Line 111, Address: 0x38dffc, Func Offset: 0xfc
	// Line 112, Address: 0x38e020, Func Offset: 0x120
	// Line 113, Address: 0x38e024, Func Offset: 0x124
	// Line 114, Address: 0x38e02c, Func Offset: 0x12c
	// Line 115, Address: 0x38e034, Func Offset: 0x134
	// Line 117, Address: 0x38e03c, Func Offset: 0x13c
	// Line 121, Address: 0x38e048, Func Offset: 0x148
	// Line 122, Address: 0x38e04c, Func Offset: 0x14c
	// Line 123, Address: 0x38e05c, Func Offset: 0x15c
	// Func End, Address: 0x38e078, Func Offset: 0x178
}

// iActorGeometryControl__FP7_xActorii
// Start address: 0x38e080
void iActorGeometryControl(_xActor* a, int32 partNumber, int32 flag)
{
	// Line 51, Address: 0x38e080, Func Offset: 0
	// Line 52, Address: 0x38e0a0, Func Offset: 0x20
	// Line 53, Address: 0x38e140, Func Offset: 0xc0
	// Line 56, Address: 0x38e1e4, Func Offset: 0x164
	// Line 57, Address: 0x38e1fc, Func Offset: 0x17c
	// Func End, Address: 0x38e218, Func Offset: 0x198
}

// iActorInitialize__FP7_xActor
// Start address: 0x38e220
void iActorInitialize(_xActor* a)
{
	int32 i;
	iActorRuntime* r;
	// Line 17, Address: 0x38e220, Func Offset: 0
	// Line 22, Address: 0x38e22c, Func Offset: 0xc
	// Line 23, Address: 0x38e230, Func Offset: 0x10
	// Line 25, Address: 0x38e2d0, Func Offset: 0xb0
	// Line 27, Address: 0x38e2d4, Func Offset: 0xb4
	// Line 28, Address: 0x38e2dc, Func Offset: 0xbc
	// Line 33, Address: 0x38e2e0, Func Offset: 0xc0
	// Line 35, Address: 0x38e2e4, Func Offset: 0xc4
	// Line 37, Address: 0x38e2f0, Func Offset: 0xd0
	// Line 38, Address: 0x38e2fc, Func Offset: 0xdc
	// Line 40, Address: 0x38e318, Func Offset: 0xf8
	// Line 42, Address: 0x38e324, Func Offset: 0x104
	// Func End, Address: 0x38e338, Func Offset: 0x118
}

