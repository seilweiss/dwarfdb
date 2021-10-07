typedef struct iTriggerResource;
typedef enum _RxClusterValidityReq;
typedef struct _RwRaster;
typedef struct _RpMaterialList;
typedef struct xNavPoint;
typedef struct iActorRuntime;
typedef struct _FCinfo;
typedef struct _RxClusterDefinition;
typedef struct _iVFXResource;
typedef struct _RxOutputSpec;
typedef struct _RxPipelineNode;
typedef struct _RpMaterial;
typedef struct xCamera;
typedef struct _rxHeapSuperBlockDescriptor;
typedef struct tagxPhysicsObject;
typedef struct tagP2VERTEX;
typedef struct _rwResEntryTag;
typedef struct Vector3D;
typedef struct tagXAnimControl;
typedef struct _RpWorldSector;
typedef struct xLight;
typedef struct _RxHeap;
typedef struct _RpClump;
typedef struct _rxHeapBlockHeader;
typedef struct iRuleResource;
typedef struct tagiAnimFrame;
typedef struct _iEntryPointRuntime;
typedef struct iLightResource;
typedef struct _rxHeapFreeBlock;
typedef struct _xActor;
typedef struct Vector4D;
typedef struct _RxPipelineNodeTopSortData;
typedef struct _iLightRuntime;
typedef struct _RxPipeline;
typedef struct p2Camera;
typedef struct _RpPolygon;
typedef struct tagiFloor;
typedef struct tagXAnim;
typedef struct _iSFXResource;
typedef struct _RwV3d;
typedef struct tagiMesh;
typedef struct tagXAnimTrigger;
typedef struct xAction;
typedef struct xTrigger;
typedef struct _RpVertexNormal;
typedef struct tagxPadAction;
typedef struct _RxPipelineNodeParam;
typedef struct _RxPipelineCluster;
typedef enum _rxEmbeddedPacketState;
typedef struct xNavLink;
typedef struct _RwTexCoords;
typedef struct tagxStateMgr;
typedef struct _RxNodeDefinition;
typedef struct _RwRGBA;
typedef enum _RxClusterValid;
typedef struct xMarker;
typedef struct _RwSurfaceProperties;
typedef struct xCondition;
typedef struct iMarkerResource;
typedef struct tagiAnimRuntime;
typedef struct tagP2MeshVertex;
typedef struct tagxStateLink;
typedef struct tagxState;
typedef struct tagMATRIX;
typedef struct tagXStreamMDSDirectory;
typedef struct p2CameraVersion;
typedef enum _RwTextureFilterMode;
typedef struct _RxPipelineRequiresCluster;
typedef struct _tagiEnvRuntime;
typedef struct _RpCollSector;
typedef struct _RpWorld;
typedef struct _RpMeshHeader;
typedef struct iConditionRuntime;
typedef struct _rxReq;
typedef struct iCameraResource;
typedef struct _RwTexDictionary;
typedef struct tagiFloorTri;
typedef struct _RwObject;
typedef struct tagP2Weight;
typedef struct _iRenderEffects;
typedef struct XStreamHeader;
typedef struct iActionRuntime;
typedef struct iEntryPointResource;
typedef struct _RwTexture;
typedef struct _RxClusterRef;
typedef struct _RwLLLink;
typedef struct _RpSector;
typedef struct _RxIoSpec;
typedef enum _rpWorldRenderOrder;
typedef struct xEntryPoint;
typedef struct tagXStreamDirectoryEntry;
typedef struct iActionResource;
typedef struct _tagxEnv;
typedef struct tagiAnimResource;
typedef struct _RxNodeMethods;
typedef enum _RxClusterForcePresent;
typedef struct _RxPacket;
typedef struct _RwBBox;
typedef struct _p2Geom;
typedef struct xScene;
typedef enum _RxNodeDefEditable;
typedef struct iDisplayCamera;
typedef struct tagP2Mesh;
typedef struct _RxClusterUnion;
typedef struct iConditionResource;
typedef struct tagxStateThread;
typedef struct _RxCluster;
typedef struct _RwLinkList;
typedef struct xRule;
typedef enum _RwTextureAddressMode;

typedef _RpWorldSector*(*type_3)(_RpWorldSector*);
typedef void(*type_5)(_rwResEntryTag*);
typedef void(*type_6)(int32, int32, int32, int32, int32, int32, int32);
typedef void(*type_9)(_xActor*, int32, tagXAnim*, tagXAnimTrigger*);
typedef _RpClump*(*type_10)(_RpClump*, void*);
typedef int32(*type_11)(_RxPipelineNode*, _RxPipelineNodeParam*);
typedef int32(*type_14)(_RxNodeDefinition*);
typedef void(*type_15)(int32, int32, int32, int32, int32, int32, int32);
typedef void(*type_17)(_RxNodeDefinition*);
typedef void(*type_20)(int32, int32, int32);
typedef int32(*type_21)(_RxPipelineNode*);
typedef void(*type_25)(_RxPipelineNode*);
typedef void(*type_28)(int32, int32, int32, int32, int32, int32, int32);
typedef int32(*type_30)(_RxPipelineNode*, _RxPipeline*);
typedef void(*type_32)(int32, int32, int32, int32, int32, int32, int32);
typedef uint32(*type_33)(_RxPipelineNode*, uint32, uint32, void*);

typedef uint16 type_0[3];
typedef iTriggerResource* type_1[20];
typedef iTriggerResource* type_2[20];
typedef iTriggerResource* type_4[20];
typedef uint8 type_7[4];
typedef iTriggerResource* type_8[20];
typedef uint8 type_12[3];
typedef iTriggerResource* type_13[20];
typedef iTriggerResource* type_16[20];
typedef iTriggerResource* type_18[20];
typedef uint32 type_19[4];
typedef float32 type_22[3];
typedef tagXStreamDirectoryEntry type_23[1000];
typedef int32 type_24[7];
typedef Vector3D type_26[5];
typedef tagxStateThread type_27[7];
typedef iLightResource type_29[2];
typedef uint8 type_31[3];
typedef uint8 type_34[4];
typedef uint8 type_35[4];
typedef uint8 type_36[4];
typedef _RxCluster type_37[1];
typedef p2CameraVersion type_38[5];
typedef Vector3D type_39[4];
typedef int8 type_40[2048];
typedef uint16 type_41[3];
typedef uint16 type_42[3];
typedef iTriggerResource* type_43[20];
typedef int8 type_44[32];
typedef iTriggerResource* type_45[20];
typedef int8 type_46[32];
typedef iTriggerResource* type_47[20];
typedef Vector3D type_48[4];
typedef iTriggerResource* type_49[20];
typedef int8 type_50[128];
typedef iTriggerResource* type_51[20];
typedef tagxState* type_52[10];

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

enum _RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
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

struct _RpMaterialList
{
	_RpMaterial** materials;
	int32 numMaterials;
	int32 space;
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

struct _FCinfo
{
	uint16 nidx[3];
};

struct _RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
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

struct _RpMaterial
{
	_RwTexture* texture;
	_RwRGBA color;
	_RxPipeline* pipeline;
	_RwSurfaceProperties surfaceProps;
	int16 refCount;
	int16 pad;
};

struct xCamera
{
	iCameraResource* m_resource;
	void** m_runtime;
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

struct tagP2VERTEX
{
	float32 x;
	float32 y;
	float32 z;
	float32 tu;
	float32 tv;
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

struct xLight
{
	iLightResource* m_resource;
	_iLightRuntime* m_runtime;
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

struct _RpClump
{
	_RwObject object;
	_RwLinkList atomicList;
	_RwLLLink inWorldLink;
	_RpClump*(*callback)(_RpClump*, void*);
	uint16 renderFrame;
};

struct _rxHeapBlockHeader
{
	_rxHeapBlockHeader* prev;
	_rxHeapBlockHeader* next;
	uint32 size;
	_rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
};

struct iRuleResource
{
	uint32 m_actionCount;
	xAction* m_action;
	uint32 m_conditionCount;
	xCondition* m_condition;
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

struct _iEntryPointRuntime
{
	uint32 m_enabled;
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

struct _RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	_rxReq* req;
	void* initialisationData;
	uint32 initialisationDataSize;
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

struct p2Camera
{
	Vector3D m_pos;
	Vector3D m_rot;
	float32 m_fov;
};

struct _RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
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

struct _RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct tagiMesh
{
};

struct tagXAnimTrigger
{
	uint16 m_frame;
	uint16 m_type;
	uint32 m_data;
};

struct xAction
{
	iActionResource* m_resource;
	iActionRuntime* m_runtime;
};

struct xTrigger
{
	iTriggerResource* m_resource;
};

struct _RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
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

struct _RwTexCoords
{
	float32 u;
	float32 v;
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

struct _RxNodeDefinition
{
	int8* name;
	_RxNodeMethods nodeMethods;
	_RxIoSpec io;
	uint32 pipelineNodePrivateDataSize;
	_RxNodeDefEditable editable;
	int32 InputPipesCnt;
};

struct _RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

enum _RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct xMarker
{
	iMarkerResource* m_resource;
	void** m_runtime;
};

struct _RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
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

struct tagiAnimRuntime
{
	void* m_sfx;
	void* m_vfx;
};

struct tagP2MeshVertex
{
	float32 m_x;
	float32 m_y;
	float32 m_z;
};

struct tagxStateLink
{
	uint8 m_command;
	uint8 m_flags;
	uint16 m_state;
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

struct _RxPipelineRequiresCluster
{
	_RxClusterDefinition* clusterDef;
	_RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct _tagiEnvRuntime
{
	_RpWorld* world;
	Vector3D world_origin;
	_RwTexDictionary* tex_dict;
};

struct _RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
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

struct _rxReq
{
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

struct iActionRuntime
{
	xAction* m_and;
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

struct _RwLLLink
{
	_RwLLLink* next;
	_RwLLLink* prev;
};

struct _RpSector
{
	int32 type;
};

struct _RxIoSpec
{
	uint32 numClustersOfInterest;
	_RxClusterRef* clustersOfInterest;
	_RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	_RxOutputSpec* outputs;
};

enum _rpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct xEntryPoint
{
	iEntryPointResource* m_resource;
	_iEntryPointRuntime* m_runtime;
};

struct tagXStreamDirectoryEntry
{
	uint32 id;
	uint32 type;
	uint32 offset;
	uint32 length;
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

struct _RwBBox
{
	_RwV3d sup;
	_RwV3d inf;
};

struct _p2Geom
{
	uint32 m_meshCount;
	tagP2Mesh* m_mesh;
	_iRenderEffects effects;
	_RpClump* m_clump;
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

struct iDisplayCamera
{
	Vector3D m_pos;
	Vector3D m_rot;
	float32 m_fov;
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

struct _RxClusterUnion
{
	union
	{
		_RxClusterDefinition* clusterDef;
		_RxPipelineCluster* clusterRef;
	};
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

struct tagxStateThread
{
	tagxState* m_state;
	tagXAnimControl* m_animCtl;
	int32 m_deferredWaiting;
	tagxPadAction m_deferred;
	int32 m_rbp;
	tagxState* m_ring[10];
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

int8 vAssertBuf2[128];
XStreamHeader currentHeader;
xScene* xScene_current;
void(*xScriptParMgrSpawnActorJointRnd)(int32, int32, int32, int32, int32, int32, int32);
void(*xScriptParMgrSpawnActorJoint)(int32, int32, int32, int32, int32, int32, int32);
void(*xScriptParMgrSpawnActorOffset)(int32, int32, int32, int32, int32, int32, int32);
void(*xScriptParMgrSpawnMarkerOffset)(int32, int32, int32, int32, int32, int32, int32);
void(*xScriptParMgrSpawnMarker)(int32, int32, int32);

void xScriptParMgrSpawnActorJoint(int32 vfxType, int32 actorType, int32 actorID, int32 joint, int32 offX, int32 offY, int32 offZ);
void xScriptParMgrSpawnActorJointRnd(int32 vfxType, int32 actorType, int32 actorID, int32 joint, int32 count, int32 scale, int32 mode);
void xScriptParMgrSpawnActorOffset(int32 vfxType, int32 actorType, int32 actorID, int32 offX, int32 offY, int32 offZ, int32 mode);
void xScriptParMgrSpawnMarkerOffset(int32 vfxType, int32 markerA, int32 markerB, int32 offX, int32 offY, int32 offZ, int32 mode);
void xScriptParMgrSpawnMarker(int32 vfxType, int32 markerA, int32 markerB);
void xParMgrRegisterExternals();

// xScriptParMgrSpawnActorJoint__Fiiiiiii
// Start address: 0x3f0f80
void xScriptParMgrSpawnActorJoint(int32 vfxType, int32 actorType, int32 actorID, int32 joint, int32 offX, int32 offY, int32 offZ)
{
	tagMATRIX m;
	Vector3D posB;
	Vector3D posA;
	iActorRuntime* r;
	_xActor* a;
	// Line 268, Address: 0x3f0f80, Func Offset: 0
	// Line 275, Address: 0x3f0fc0, Func Offset: 0x40
	// Line 276, Address: 0x3f1060, Func Offset: 0xe0
	// Line 279, Address: 0x3f1104, Func Offset: 0x184
	// Line 280, Address: 0x3f1118, Func Offset: 0x198
	// Line 282, Address: 0x3f11b8, Func Offset: 0x238
	// Line 283, Address: 0x3f11bc, Func Offset: 0x23c
	// Line 289, Address: 0x3f125c, Func Offset: 0x2dc
	// Line 295, Address: 0x3f126c, Func Offset: 0x2ec
	// Line 297, Address: 0x3f1280, Func Offset: 0x300
	// Line 298, Address: 0x3f12a8, Func Offset: 0x328
	// Line 299, Address: 0x3f12d0, Func Offset: 0x350
	// Line 306, Address: 0x3f12f8, Func Offset: 0x378
	// Line 309, Address: 0x3f130c, Func Offset: 0x38c
	// Line 312, Address: 0x3f1324, Func Offset: 0x3a4
	// Line 314, Address: 0x3f133c, Func Offset: 0x3bc
	// Func End, Address: 0x3f1368, Func Offset: 0x3e8
}

// xScriptParMgrSpawnActorJointRnd__Fiiiiiii
// Start address: 0x3f1370
void xScriptParMgrSpawnActorJointRnd(int32 vfxType, int32 actorType, int32 actorID, int32 joint, int32 count, int32 scale, int32 mode)
{
	Vector3D posB;
	Vector3D posA;
	Vector3D pos;
	iActorRuntime* r;
	_xActor* a;
	tagMATRIX m;
	int32 hscale;
	int32 i;
	// Line 218, Address: 0x3f1370, Func Offset: 0
	// Line 220, Address: 0x3f13b4, Func Offset: 0x44
	// Line 228, Address: 0x3f13b8, Func Offset: 0x48
	// Line 229, Address: 0x3f1458, Func Offset: 0xe8
	// Line 230, Address: 0x3f14fc, Func Offset: 0x18c
	// Line 233, Address: 0x3f159c, Func Offset: 0x22c
	// Line 234, Address: 0x3f15b0, Func Offset: 0x240
	// Line 236, Address: 0x3f1650, Func Offset: 0x2e0
	// Line 237, Address: 0x3f1654, Func Offset: 0x2e4
	// Line 240, Address: 0x3f16f4, Func Offset: 0x384
	// Line 247, Address: 0x3f1704, Func Offset: 0x394
	// Line 251, Address: 0x3f1718, Func Offset: 0x3a8
	// Line 253, Address: 0x3f1724, Func Offset: 0x3b4
	// Line 254, Address: 0x3f173c, Func Offset: 0x3cc
	// Line 255, Address: 0x3f1774, Func Offset: 0x404
	// Line 256, Address: 0x3f17ac, Func Offset: 0x43c
	// Line 259, Address: 0x3f17e4, Func Offset: 0x474
	// Line 260, Address: 0x3f17f8, Func Offset: 0x488
	// Line 263, Address: 0x3f1810, Func Offset: 0x4a0
	// Line 264, Address: 0x3f182c, Func Offset: 0x4bc
	// Line 265, Address: 0x3f183c, Func Offset: 0x4cc
	// Func End, Address: 0x3f186c, Func Offset: 0x4fc
}

// xScriptParMgrSpawnActorOffset__Fiiiiiii
// Start address: 0x3f1870
void xScriptParMgrSpawnActorOffset(int32 vfxType, int32 actorType, int32 actorID, int32 offX, int32 offY, int32 offZ, int32 mode)
{
	float32 flr;
	Vector3D posB;
	Vector3D posA;
	iActorRuntime* r;
	_xActor* a;
	// Line 153, Address: 0x3f1870, Func Offset: 0
	// Line 161, Address: 0x3f18b0, Func Offset: 0x40
	// Line 162, Address: 0x3f1950, Func Offset: 0xe0
	// Line 165, Address: 0x3f19f4, Func Offset: 0x184
	// Line 166, Address: 0x3f1a08, Func Offset: 0x198
	// Line 168, Address: 0x3f1aa8, Func Offset: 0x238
	// Line 169, Address: 0x3f1aac, Func Offset: 0x23c
	// Line 171, Address: 0x3f1b4c, Func Offset: 0x2dc
	// Line 174, Address: 0x3f1b50, Func Offset: 0x2e0
	// Line 175, Address: 0x3f1b68, Func Offset: 0x2f8
	// Line 176, Address: 0x3f1b90, Func Offset: 0x320
	// Line 177, Address: 0x3f1bbc, Func Offset: 0x34c
	// Line 179, Address: 0x3f1be4, Func Offset: 0x374
	// Line 183, Address: 0x3f1bfc, Func Offset: 0x38c
	// Line 184, Address: 0x3f1c14, Func Offset: 0x3a4
	// Line 185, Address: 0x3f1c2c, Func Offset: 0x3bc
	// Line 189, Address: 0x3f1c34, Func Offset: 0x3c4
	// Line 190, Address: 0x3f1c4c, Func Offset: 0x3dc
	// Line 191, Address: 0x3f1c74, Func Offset: 0x404
	// Line 192, Address: 0x3f1ca0, Func Offset: 0x430
	// Line 195, Address: 0x3f1cc8, Func Offset: 0x458
	// Line 197, Address: 0x3f1ce4, Func Offset: 0x474
	// Func End, Address: 0x3f1d10, Func Offset: 0x4a0
}

// xScriptParMgrSpawnMarkerOffset__Fiiiiiii
// Start address: 0x3f1d10
void xScriptParMgrSpawnMarkerOffset(int32 vfxType, int32 markerA, int32 markerB, int32 offX, int32 offY, int32 offZ, int32 mode)
{
	Vector3D b;
	Vector3D a;
	// Line 107, Address: 0x3f1d10, Func Offset: 0
	// Line 110, Address: 0x3f1d50, Func Offset: 0x40
	// Line 111, Address: 0x3f1df0, Func Offset: 0xe0
	// Line 113, Address: 0x3f1e94, Func Offset: 0x184
	// Line 114, Address: 0x3f1f34, Func Offset: 0x224
	// Line 115, Address: 0x3f1fd4, Func Offset: 0x2c4
	// Line 116, Address: 0x3f2080, Func Offset: 0x370
	// Line 118, Address: 0x3f212c, Func Offset: 0x41c
	// Line 119, Address: 0x3f2158, Func Offset: 0x448
	// Line 121, Address: 0x3f2184, Func Offset: 0x474
	// Line 122, Address: 0x3f21ac, Func Offset: 0x49c
	// Line 124, Address: 0x3f21d4, Func Offset: 0x4c4
	// Line 125, Address: 0x3f21fc, Func Offset: 0x4ec
	// Line 127, Address: 0x3f2224, Func Offset: 0x514
	// Line 128, Address: 0x3f224c, Func Offset: 0x53c
	// Line 130, Address: 0x3f2274, Func Offset: 0x564
	// Line 131, Address: 0x3f2290, Func Offset: 0x580
	// Func End, Address: 0x3f22bc, Func Offset: 0x5ac
}

// xScriptParMgrSpawnMarker__Fiii
// Start address: 0x3f22c0
void xScriptParMgrSpawnMarker(int32 vfxType, int32 markerA, int32 markerB)
{
	Vector3D* b;
	Vector3D* a;
	// Line 72, Address: 0x3f22c0, Func Offset: 0
	// Line 75, Address: 0x3f22e0, Func Offset: 0x20
	// Line 76, Address: 0x3f2380, Func Offset: 0xc0
	// Line 78, Address: 0x3f2424, Func Offset: 0x164
	// Line 79, Address: 0x3f24c4, Func Offset: 0x204
	// Line 80, Address: 0x3f2564, Func Offset: 0x2a4
	// Line 81, Address: 0x3f2610, Func Offset: 0x350
	// Line 83, Address: 0x3f26bc, Func Offset: 0x3fc
	// Line 84, Address: 0x3f26d0, Func Offset: 0x410
	// Line 86, Address: 0x3f26e4, Func Offset: 0x424
	// Line 87, Address: 0x3f26f4, Func Offset: 0x434
	// Func End, Address: 0x3f2710, Func Offset: 0x450
}

// xParMgrRegisterExternals__Fv
// Start address: 0x3f2710
void xParMgrRegisterExternals()
{
	// Line 42, Address: 0x3f2710, Func Offset: 0
	// Line 48, Address: 0x3f2718, Func Offset: 0x8
	// Line 49, Address: 0x3f2734, Func Offset: 0x24
	// Line 50, Address: 0x3f2750, Func Offset: 0x40
	// Line 51, Address: 0x3f276c, Func Offset: 0x5c
	// Line 52, Address: 0x3f2788, Func Offset: 0x78
	// Line 55, Address: 0x3f27a4, Func Offset: 0x94
	// Func End, Address: 0x3f27b4, Func Offset: 0xa4
}

