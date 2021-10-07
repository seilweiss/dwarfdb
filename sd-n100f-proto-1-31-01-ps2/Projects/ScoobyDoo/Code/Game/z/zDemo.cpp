typedef struct iConditionResource;
typedef struct _rwResEntryTag;
typedef struct xTrigger;
typedef struct _RwRaster;
typedef struct AppCamera;
typedef struct iTriggerResource;
typedef struct iConditionRuntime;
typedef struct _RwV3d;
typedef struct _RxClusterRef;
typedef struct xAnimMgr;
typedef struct _RxPacket;
typedef enum _RxClusterValidityReq;
typedef struct _anon0;
typedef struct tagP2MeshVertex;
typedef struct zDemo;
typedef struct xEntryPoint;
typedef struct tagXStreamMDSDirectory;
typedef struct __vector_pod;
typedef struct xNavPoint;
typedef struct xRule;
typedef struct _RxClusterDefinition;
typedef struct RsMouse;
typedef struct _RxOutputSpec;
typedef struct _RxPipelineNode;
typedef struct _RpSkinFrame;
typedef struct tagiFloorTri;
typedef struct iEntryPointResource;
typedef struct _rxHeapSuperBlockDescriptor;
typedef struct _RpWorld;
typedef struct zCharacter;
typedef struct iRuleResource;
typedef struct _iEntryPointRuntime;
typedef struct _RpCollSector;
typedef struct xFSMData;
typedef struct xModule;
typedef struct Vector3D;
typedef struct _RxHeap;
typedef struct _rxHeapBlockHeader;
typedef struct compile_assert;
typedef struct _RpMeshHeader;
typedef struct xScene;
typedef struct _rxHeapFreeBlock;
typedef struct _RxPipeline;
typedef struct PsMouse;
typedef struct _RxPipelineNodeTopSortData;
typedef struct _RwV2d;
typedef struct iAnimData;
typedef struct xGameObjMgr;
typedef enum _RwTextureFilterMode;
typedef struct xCamera;
typedef struct _RxPipelineNodeParam;
typedef struct _RxPipelineCluster;
typedef struct _anon1;
typedef struct _RpSkinAnim;
typedef enum _rxEmbeddedPacketState;
typedef struct _iRenderEffects;
typedef struct xLight;
typedef struct _RwFrame;
typedef struct xNavLink;
typedef struct _RxNodeDefinition;
typedef enum _RxClusterValid;
typedef struct iLightResource;
typedef struct tagiFloor;
typedef enum _RwCameraProjection;
typedef struct __vector_imp_0;
typedef struct tagP2Weight;
typedef struct _iLightRuntime;
typedef struct _RwSurfaceProperties;
typedef struct p2Camera;
typedef struct XStreamHeader;
typedef struct _RpVertexNormal;
typedef struct _RpMaterial;
typedef struct xAction;
typedef struct xGameObj;
typedef struct _RwObjectHasFrame;
typedef struct _RwTexture;
typedef struct _RwMatrix;
typedef struct _RxPipelineRequiresCluster;
typedef struct xMarker;
typedef struct iMarkerResource;
typedef struct _RpSector;
typedef struct xCondition;
typedef struct _RwTexDictionary;
typedef enum _rpWorldRenderOrder;
typedef struct p2CameraVersion;
typedef struct _rxReq;
typedef struct Vector4D;
typedef struct tagXStreamDirectoryEntry;
typedef struct __vector_imp_1;
typedef struct _RpPolygon;
typedef struct _RwObject;
typedef struct RwSkel;
typedef struct vector_0;
typedef struct _tagiEnvRuntime;
typedef struct _FCinfo;
typedef struct _p2Geom;
typedef struct xColor;
typedef struct _RwCamera;
typedef struct _RpWorldSector;
typedef struct _class;
typedef struct tagP2Mesh;
typedef struct iCameraResource;
typedef struct _RwBBox;
typedef struct RWInfo;
typedef struct tagxPhysicsObject;
typedef struct _RpClump;
typedef struct Platform;
typedef struct vector_1;
typedef struct _RwLLLink;
typedef struct compressed_pair_imp;
typedef struct _RxIoSpec;
typedef struct Camera;
typedef struct _RtQuat;
typedef struct tagP2VERTEX;
typedef struct _RwRGBA;
typedef struct iActionRuntime;
typedef struct _RwFrustumPlane;
typedef struct xAnimData;
typedef struct _RxNodeMethods;
typedef enum _RxClusterForcePresent;
typedef struct _RpMaterialList;
typedef struct iActionResource;
typedef enum _RxNodeDefEditable;
typedef struct _tagxEnv;
typedef struct xGameCharacter;
typedef struct _RxClusterUnion;
typedef enum _RwTextureAddressMode;
typedef struct _RxCluster;
typedef struct _RwPlane;
typedef struct _RwLinkList;
typedef struct compressed_pair;
typedef struct iDisplayCamera;
typedef struct iAnimInstance;
typedef struct tagiMesh;
typedef struct _RwTexCoords;
typedef struct allocator;

typedef void(*type_8)(_rwResEntryTag*);
typedef int32(*type_10)(_RxPipelineNode*, _RxPipelineNodeParam*);
typedef int32(*type_13)(_RxNodeDefinition*);
typedef void(*type_17)(_RxNodeDefinition*);
typedef int32(*type_21)(_RxPipelineNode*);
typedef void(*type_23)(_RxPipelineNode*);
typedef _RwObjectHasFrame*(*type_24)(_RwObjectHasFrame*);
typedef int32(*type_29)(_RxPipelineNode*, _RxPipeline*);
typedef uint32(*type_34)(_RxPipelineNode*, uint32, uint32, void*);
typedef _RpWorldSector*(*type_35)(_RpWorldSector*);
typedef _RwCamera*(*type_36)(_RwCamera*);
typedef _RwCamera*(*type_39)(_RwCamera*);
typedef _RpClump*(*type_47)(_RpClump*, void*);

typedef iTriggerResource* type_0[20];
typedef Vector3D type_1[4];
typedef iTriggerResource* type_2[20];
typedef iTriggerResource* type_3[20];
typedef tagXStreamDirectoryEntry type_4[1000];
typedef uint16 type_5[3];
typedef iTriggerResource* type_6[20];
typedef int8 type_7[32];
typedef iTriggerResource* type_9[20];
typedef _RwFrustumPlane type_11[6];
typedef iTriggerResource* type_12[20];
typedef uint8 type_14[4];
typedef _RwV3d type_15[8];
typedef uint8 type_16[4];
typedef iTriggerResource* type_18[20];
typedef uint8 type_19[4];
typedef uint32 type_20[4];
typedef iTriggerResource* type_22[20];
typedef int8 type_25[51];
typedef iTriggerResource* type_26[20];
typedef float32 type_27[3];
typedef iTriggerResource* type_28[20];
typedef int8 type_30[2048];
typedef uint16 type_31[3];
typedef uint16 type_32[3];
typedef iLightResource type_33[2];
typedef _RxCluster type_37[1];
typedef zCharacter* type_38[40];
typedef zCharacter* type_40[41];
typedef int8 type_41[32];
typedef int8 type_42[32];
typedef int8 type_43[128];
typedef p2CameraVersion type_44[5];
typedef Vector3D type_45[4];
typedef iTriggerResource* type_46[20];
typedef iTriggerResource* type_48[20];
typedef float32 type_49[123];

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

struct _rwResEntryTag
{
	_RwLLLink link;
	int32 size;
	void* owner;
	_rwResEntryTag** ownerRef;
	void(*destroyNotify)(_rwResEntryTag*);
};

struct xTrigger
{
	iTriggerResource* m_resource;
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

struct AppCamera : Camera
{
	_RwRaster* backdrop;
	float32 cameraDistance;
	_RwV2d offset;
	_RpWorld* world;
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

struct iConditionRuntime
{
	xCondition* m_operand;
	uint16 m_match;
	uint16 m_trigger;
};

struct _RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct _RxClusterRef
{
	_RxClusterDefinition* clusterDef;
	_RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct xAnimMgr : xModule
{
	vector_0 anims;
	vector_1 ress;
	uint32 ID_counter;

	void nextFrame();
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

enum _RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct _anon0
{
};

struct tagP2MeshVertex
{
	float32 m_x;
	float32 m_y;
	float32 m_z;
};

struct zDemo : xModule
{
	zCharacter* m_chars;
	zCharacter* m_snacks[40];
	zCharacter* m_grass[41];
	int32 m_lastCamera;

	void* __ct();
	void render();
	void SnackCollisionTest();
	void nextFrame();
	void restart();
	void init();
};

struct xEntryPoint
{
	iEntryPointResource* m_resource;
	_iEntryPointRuntime* m_runtime;
};

struct tagXStreamMDSDirectory
{
	uint32 count;
	tagXStreamDirectoryEntry directory[1000];
};

struct __vector_pod
{
	compressed_pair capacity_;
	uint32 size_;
	uint32* data_;
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

struct xRule
{
	iRuleResource* m_resource;
	void* m_runtime;
};

struct _RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct RsMouse
{
	_RwV2d pos;
	_RwRaster* raster;
	PsMouse* psmouse;
	int32 draw;
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

struct _RpSkinFrame
{
	_RtQuat q;
	_RwV3d t;
	float32 time;
	_RpSkinFrame* prevFrame;
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

struct _rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	_rxHeapSuperBlockDescriptor* next;
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

struct zCharacter : xGameCharacter
{
	int32 chris_hack_value;
	int32 snack_delay;
	int32 m_currentState;
	int32 m_jumping;
	int32 m_doublejumping;
	float32 m_gradient;
	int32 m_player;
	uint32 current_animation_ID;
	xAnimData* current_anim;
	int32 m_health;
	float32 m_storedHeight;
	int32 m_resetTimer;
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

struct _RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
};

struct xFSMData
{
	uint16 m_fsmType;
	uint16 m_fsmState;
	uint16 m_fsmNextState;
	int32 m_fsmForceChange;
};

struct xModule
{
	int32 m_type;
	int8 m_name[32];
	int32 m_init;
	int32 m_state;
};

struct Vector3D
{
	float32 x;
	float32 y;
	float32 z;
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

struct compile_assert
{
};

struct _RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
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

struct _rxHeapFreeBlock
{
	uint32 size;
	_rxHeapBlockHeader* ptr;
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

struct PsMouse
{
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

struct iAnimData
{
	_RpSkinAnim* skin_anim;
	int8* m_name;
	float32 duration;
};

struct xGameObjMgr : xModule
{
	xGameObj* m_list;

	xGameObj* gameObjCreate(uint32 type);
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

struct xCamera
{
	iCameraResource* m_resource;
	void** m_runtime;
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

struct _anon1
{
};

struct _RpSkinAnim
{
	int32 numFrames;
	int32 flags;
	float32 duration;
	_RpSkinFrame* pFrames;
};

enum _rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
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

struct xLight
{
	iLightResource* m_resource;
	_iLightRuntime* m_runtime;
};

struct _RwFrame
{
	_RwObject object;
	_RwMatrix modelling;
	_RwMatrix ltm;
	_RwLLLink inDirtyListLink;
	_RwLinkList objectList;
	_RwFrame* child;
	_RwFrame* next;
	_RwFrame* root;
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

enum _RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
};

struct __vector_imp_0 : __vector_pod, compile_assert
{
};

struct tagP2Weight
{
	uint16 m_joint0;
	uint16 m_joint1;
	float32 m_weight0;
	float32 m_weight1;
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

struct _RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

struct p2Camera
{
	Vector3D m_pos;
	Vector3D m_rot;
	float32 m_fov;
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

struct _RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
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

struct xAction
{
	iActionResource* m_resource;
	iActionRuntime* m_runtime;
};

struct xGameObj
{
	uint32 m_objFlags;
	uint32 m_objID;
	uint32 m_objType;
	xFSMData m_fsmData;
	_p2Geom m_geom;
	xGameObj* m_next;
	xGameObj* m_prev;
	tagxPhysicsObject m_phys;
};

struct _RwObjectHasFrame
{
	_RwObject object;
	_RwLLLink lFrame;
	_RwObjectHasFrame*(*sync)(_RwObjectHasFrame*);
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

struct _RwMatrix
{
	_RwV3d right;
	uint32 flags;
	_RwV3d up;
	uint32 pad1;
	_RwV3d at;
	uint32 pad2;
	_RwV3d pos;
	uint32 pad3;
};

struct _RxPipelineRequiresCluster
{
	_RxClusterDefinition* clusterDef;
	_RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct xMarker
{
	iMarkerResource* m_resource;
	void** m_runtime;
};

struct iMarkerResource
{
	Vector3D m_pos;
};

struct _RpSector
{
	int32 type;
};

struct xCondition
{
	iConditionResource* m_resource;
	iConditionRuntime* m_runtime;
};

struct _RwTexDictionary
{
	_RwObject object;
	_RwLinkList texturesInDict;
	_RwLLLink lInInstance;
};

enum _rpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
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

struct _rxReq
{
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

struct __vector_imp_1 : __vector_pod, compile_assert
{
};

struct _RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
};

struct _RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct RwSkel
{
	int8* appName;
	int32 maximumWidth;
	int32 maximumHeight;
	RsMouse* mouse;
	Platform* ps;
};

struct vector_0 : __vector_imp_0
{
};

struct _tagiEnvRuntime
{
	_RpWorld* world;
	Vector3D world_origin;
	_RwTexDictionary* tex_dict;
};

struct _FCinfo
{
	uint16 nidx[3];
};

struct _p2Geom
{
	uint32 m_meshCount;
	tagP2Mesh* m_mesh;
	_iRenderEffects effects;
	_RpClump* m_clump;
};

struct xColor
{
	union
	{
		_class byte;
		uint32 value;
	};
};

struct _RwCamera
{
	_RwObjectHasFrame object;
	_RwCameraProjection projectionType;
	_RwCamera*(*beginUpdate)(_RwCamera*);
	_RwCamera*(*endUpdate)(_RwCamera*);
	_RwMatrix viewMatrix;
	_RwRaster* frameBuffer;
	_RwRaster* zBuffer;
	_RwV2d viewWindow;
	_RwV2d recipViewWindow;
	_RwV2d viewOffset;
	float32 nearPlane;
	float32 farPlane;
	float32 fogPlane;
	float32 zScale;
	float32 zShift;
	uint16 renderFrame;
	_RwFrustumPlane frustumPlanes[6];
	_RwBBox frustumBoundBox;
	_RwV3d frustumCorners[8];
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

struct _class
{
	uint8 bAlpha;
	uint8 bBlue;
	uint8 bGreen;
	uint8 bRed;
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

struct iCameraResource
{
	uint16 m_plateOffset;
	uint16 m_versions;
	p2CameraVersion m_version[5];
	uint32 m_frameCount;
	p2Camera* m_cameras;
};

struct _RwBBox
{
	_RwV3d sup;
	_RwV3d inf;
};

struct RWInfo
{
	AppCamera* m_camera;
	RwSkel* m_skel;
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

struct _RpClump
{
	_RwObject object;
	_RwLinkList atomicList;
	_RwLLLink inWorldLink;
	_RpClump*(*callback)(_RpClump*, void*);
	uint16 renderFrame;
};

struct Platform
{
	int32 quit;
};

struct vector_1 : __vector_imp_1
{
};

struct _RwLLLink
{
	_RwLLLink* next;
	_RwLLLink* prev;
};

struct compressed_pair_imp : allocator
{
	uint32 second_;
};

struct _RxIoSpec
{
	uint32 numClustersOfInterest;
	_RxClusterRef* clustersOfInterest;
	_RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	_RxOutputSpec* outputs;
};

struct Camera
{
	_RwCamera* camera;
	int32 m_Preset;
	float32 m_TetherLength;
	float32 m_TetherHeightPerc;
};

struct _RtQuat
{
	_RwV3d imag;
	float32 real;
};

struct tagP2VERTEX
{
	float32 x;
	float32 y;
	float32 z;
	float32 tu;
	float32 tv;
};

struct _RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct iActionRuntime
{
	xAction* m_and;
};

struct _RwFrustumPlane
{
	_RwPlane plane;
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
};

struct xAnimData : iAnimInstance
{
	uint32 m_assetID;
	uint32 m_ID;
	iAnimData* m_resource;
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

struct _RpMaterialList
{
	_RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct iActionResource
{
	uint8 m_cmdType;
	uint8 m_cmd;
	uint16 pad;
	uint32 m_cmdParameter;
};

enum _RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct _tagxEnv
{
	_tagiEnvRuntime* m_runtime;
};

struct xGameCharacter : xGameObj
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

struct _RwPlane
{
	_RwV3d normal;
	float32 distance;
};

struct _RwLinkList
{
	_RwLLLink link;
};

struct compressed_pair : compressed_pair_imp
{
};

struct iDisplayCamera
{
	Vector3D m_pos;
	Vector3D m_rot;
	float32 m_fov;
};

struct iAnimInstance
{
	float32 time;
};

struct tagiMesh
{
};

struct _RwTexCoords
{
	float32 u;
	float32 v;
};

struct allocator
{
};

int8 dbfont_chars[51];
zDemo* m_globalDemo;
zCharacter* gVillain;
zCharacter* gPlayer;
uint32 anim_ID_idle;
uint32 anim_ID_jump;
uint32 anim_ID_ouch;
uint32 anim_ID_run;
uint32 anim_ID_walk;
uint32 anim_ID_extra_scratch;
uint32 anim_ID_idle_scared;
uint32 anim_ID_walk_back;
uint32 anim_ID_snack1;
uint32 anim_ID_grass1;
zCharacter* bad_guy;
uint32 bad_guy_anim_ID;
uint32 bad_guy_idle_ID;
_anon0 __vt__5zDemo;
RWInfo gRWInfo;
int8 vAssertBuf2[128];
XStreamHeader currentHeader;
_anon1 __vt__7xModule;
xColor line_color;
xScene* xScene_current;
Vector3D* gBSPOffset;
xAnimMgr* gAnimMgr;
xGameObjMgr* gGameObjMgr;

void PadButtonCircle();
void PadButtonCross();
void zDemoQuickReset();
void zDemoPlayerLostLife();
void PadRightStick(float32 x, float32 y);
void PadLeftStick(float32 x, float32 y);
void* __ct();
void render();
void SnackCollisionTest();
void nextFrame();
void restart();
void kill();
void init();

// PadButtonCircle__Fv
// Start address: 0x3ed750
void PadButtonCircle()
{
	// Line 499, Address: 0x3ed750, Func Offset: 0
	// Line 500, Address: 0x3ed758, Func Offset: 0x8
	// Line 501, Address: 0x3ed768, Func Offset: 0x18
	// Func End, Address: 0x3ed778, Func Offset: 0x28
}

// PadButtonCross__Fv
// Start address: 0x3ed780
void PadButtonCross()
{
	// Line 493, Address: 0x3ed780, Func Offset: 0
	// Line 494, Address: 0x3ed788, Func Offset: 0x8
	// Line 495, Address: 0x3ed794, Func Offset: 0x14
	// Func End, Address: 0x3ed7a4, Func Offset: 0x24
}

// zDemoQuickReset__Fv
// Start address: 0x3ed7b0
void zDemoQuickReset()
{
	// Line 479, Address: 0x3ed7b0, Func Offset: 0
	// Line 480, Address: 0x3ed7b8, Func Offset: 0x8
	// Line 483, Address: 0x3ed85c, Func Offset: 0xac
	// Line 486, Address: 0x3ed870, Func Offset: 0xc0
	// Line 488, Address: 0x3ed884, Func Offset: 0xd4
	// Func End, Address: 0x3ed894, Func Offset: 0xe4
}

// zDemoPlayerLostLife__Fv
// Start address: 0x3ed8a0
void zDemoPlayerLostLife()
{
	// Line 465, Address: 0x3ed8a0, Func Offset: 0
	// Line 466, Address: 0x3ed8a8, Func Offset: 0x8
	// Line 469, Address: 0x3ed94c, Func Offset: 0xac
	// Line 472, Address: 0x3ed960, Func Offset: 0xc0
	// Line 473, Address: 0x3ed970, Func Offset: 0xd0
	// Func End, Address: 0x3ed980, Func Offset: 0xe0
}

// PadRightStick__Fff
// Start address: 0x3ed980
void PadRightStick(float32 x, float32 y)
{
	// Line 456, Address: 0x3ed980, Func Offset: 0
	// Line 457, Address: 0x3ed990, Func Offset: 0x10
	// Line 458, Address: 0x3ed9a0, Func Offset: 0x20
	// Line 459, Address: 0x3ed9b4, Func Offset: 0x34
	// Func End, Address: 0x3ed9c8, Func Offset: 0x48
}

// PadLeftStick__Fff
// Start address: 0x3ed9d0
void PadLeftStick(float32 x, float32 y)
{
	// Line 448, Address: 0x3ed9d0, Func Offset: 0
	// Line 449, Address: 0x3ed9e0, Func Offset: 0x10
	// Line 450, Address: 0x3ed9ec, Func Offset: 0x1c
	// Line 451, Address: 0x3ed9fc, Func Offset: 0x2c
	// Func End, Address: 0x3eda10, Func Offset: 0x40
}

// __ct__5zDemoFv
// Start address: 0x3eda10
void* zDemo::__ct()
{
	// Line 438, Address: 0x3eda10, Func Offset: 0
	// Line 439, Address: 0x3eda28, Func Offset: 0x18
	// Line 440, Address: 0x3eda2c, Func Offset: 0x1c
	// Line 441, Address: 0x3eda30, Func Offset: 0x20
	// Line 442, Address: 0x3eda34, Func Offset: 0x24
	// Func End, Address: 0x3eda40, Func Offset: 0x30
}

// render__5zDemoFv
// Start address: 0x3eda40
void zDemo::render()
{
	float32 scale;
	// Line 412, Address: 0x3eda40, Func Offset: 0
	// Line 416, Address: 0x3eda54, Func Offset: 0x14
	// Line 425, Address: 0x3eda5c, Func Offset: 0x1c
	// Line 427, Address: 0x3eda74, Func Offset: 0x34
	// Line 428, Address: 0x3eda94, Func Offset: 0x54
	// Line 430, Address: 0x3edaa4, Func Offset: 0x64
	// Line 433, Address: 0x3edae0, Func Offset: 0xa0
	// Func End, Address: 0x3edaf8, Func Offset: 0xb8
}

// SnackCollisionTest__5zDemoFv
// Start address: 0x3edb00
void zDemo::SnackCollisionTest()
{
	_RwV3d* pos;
	_RwMatrix* m;
	_RwFrame* f;
	_RwV3d* pos;
	_RwMatrix* m;
	_RwFrame* f;
	int32 i;
	_RwV3d* snack_pos;
	float32 dist;
	float32 z;
	float32 y;
	float32 x;
	_RwV3d* ch;
	// Line 340, Address: 0x3edb00, Func Offset: 0
	// Line 341, Address: 0x3edb20, Func Offset: 0x20
	// Line 346, Address: 0x3edb30, Func Offset: 0x30
	// Line 352, Address: 0x3edb48, Func Offset: 0x48
	// Line 354, Address: 0x3edb54, Func Offset: 0x54
	// Line 357, Address: 0x3edb6c, Func Offset: 0x6c
	// Line 358, Address: 0x3edb84, Func Offset: 0x84
	// Line 361, Address: 0x3edb9c, Func Offset: 0x9c
	// Line 362, Address: 0x3edbb8, Func Offset: 0xb8
	// Line 363, Address: 0x3edbc8, Func Offset: 0xc8
	// Line 364, Address: 0x3edbd4, Func Offset: 0xd4
	// Line 365, Address: 0x3edbe8, Func Offset: 0xe8
	// Line 366, Address: 0x3edbf4, Func Offset: 0xf4
	// Line 367, Address: 0x3edc00, Func Offset: 0x100
	// Line 371, Address: 0x3edc08, Func Offset: 0x108
	// Line 372, Address: 0x3edc24, Func Offset: 0x124
	// Line 373, Address: 0x3edc34, Func Offset: 0x134
	// Line 374, Address: 0x3edc40, Func Offset: 0x140
	// Line 375, Address: 0x3edc5c, Func Offset: 0x15c
	// Line 376, Address: 0x3edc68, Func Offset: 0x168
	// Line 378, Address: 0x3edc74, Func Offset: 0x174
	// Line 382, Address: 0x3edc7c, Func Offset: 0x17c
	// Line 384, Address: 0x3edc90, Func Offset: 0x190
	// Line 385, Address: 0x3edc9c, Func Offset: 0x19c
	// Line 386, Address: 0x3edca8, Func Offset: 0x1a8
	// Line 387, Address: 0x3edcb4, Func Offset: 0x1b4
	// Line 389, Address: 0x3edcc4, Func Offset: 0x1c4
	// Line 392, Address: 0x3edce0, Func Offset: 0x1e0
	// Line 399, Address: 0x3edcf8, Func Offset: 0x1f8
	// Line 400, Address: 0x3edd0c, Func Offset: 0x20c
	// Line 401, Address: 0x3edd20, Func Offset: 0x220
	// Line 404, Address: 0x3edd48, Func Offset: 0x248
	// Line 405, Address: 0x3edd5c, Func Offset: 0x25c
	// Func End, Address: 0x3edd80, Func Offset: 0x280
}

// nextFrame__5zDemoFv
// Start address: 0x3edd80
void zDemo::nextFrame()
{
	// Line 298, Address: 0x3edd80, Func Offset: 0
	// Line 301, Address: 0x3edd94, Func Offset: 0x14
	// Line 303, Address: 0x3edd9c, Func Offset: 0x1c
	// Line 306, Address: 0x3edda8, Func Offset: 0x28
	// Line 309, Address: 0x3edddc, Func Offset: 0x5c
	// Line 312, Address: 0x3edde8, Func Offset: 0x68
	// Line 314, Address: 0x3ede60, Func Offset: 0xe0
	// Func End, Address: 0x3ede78, Func Offset: 0xf8
}

// restart__5zDemoFv
// Start address: 0x3ede80
void zDemo::restart()
{
	_RwV3d* pos;
	_RwMatrix* m;
	_RwFrame* f;
	int32 i;
	// Line 265, Address: 0x3ede80, Func Offset: 0
	// Line 267, Address: 0x3ede9c, Func Offset: 0x1c
	// Line 269, Address: 0x3edea8, Func Offset: 0x28
	// Line 274, Address: 0x3edebc, Func Offset: 0x3c
	// Line 276, Address: 0x3edec8, Func Offset: 0x48
	// Line 279, Address: 0x3edee0, Func Offset: 0x60
	// Line 282, Address: 0x3edef0, Func Offset: 0x70
	// Line 283, Address: 0x3edf0c, Func Offset: 0x8c
	// Line 284, Address: 0x3edf1c, Func Offset: 0x9c
	// Line 285, Address: 0x3edf28, Func Offset: 0xa8
	// Line 286, Address: 0x3edf3c, Func Offset: 0xbc
	// Line 287, Address: 0x3edf48, Func Offset: 0xc8
	// Line 288, Address: 0x3edf54, Func Offset: 0xd4
	// Line 289, Address: 0x3edf58, Func Offset: 0xd8
	// Line 290, Address: 0x3edf6c, Func Offset: 0xec
	// Func End, Address: 0x3edf8c, Func Offset: 0x10c
}

// kill__5zDemoFv
// Start address: 0x3edf90
void zDemo::kill()
{
	// Line 259, Address: 0x3edf90, Func Offset: 0
	// Func End, Address: 0x3edf98, Func Offset: 0x8
}

// init__5zDemoFv
// Start address: 0x3edfa0
void zDemo::init()
{
	int32 i;
	int32 i;
	float32 grass_pos[123];
	Vector3D bad_pos;
	int32 healthIndex;
	int8 init;
	// Line 89, Address: 0x3edfa0, Func Offset: 0
	// Line 92, Address: 0x3edfc8, Func Offset: 0x28
	// Line 93, Address: 0x3ee06c, Func Offset: 0xcc
	// Line 97, Address: 0x3ee114, Func Offset: 0x174
	// Line 98, Address: 0x3ee130, Func Offset: 0x190
	// Line 110, Address: 0x3ee140, Func Offset: 0x1a0
	// Line 111, Address: 0x3ee160, Func Offset: 0x1c0
	// Line 112, Address: 0x3ee180, Func Offset: 0x1e0
	// Line 113, Address: 0x3ee1a0, Func Offset: 0x200
	// Line 114, Address: 0x3ee1c0, Func Offset: 0x220
	// Line 115, Address: 0x3ee1e0, Func Offset: 0x240
	// Line 116, Address: 0x3ee200, Func Offset: 0x260
	// Line 117, Address: 0x3ee220, Func Offset: 0x280
	// Line 118, Address: 0x3ee240, Func Offset: 0x2a0
	// Line 131, Address: 0x3ee25c, Func Offset: 0x2bc
	// Line 134, Address: 0x3ee280, Func Offset: 0x2e0
	// Line 137, Address: 0x3ee288, Func Offset: 0x2e8
	// Line 138, Address: 0x3ee2a8, Func Offset: 0x308
	// Line 140, Address: 0x3ee2b8, Func Offset: 0x318
	// Line 141, Address: 0x3ee2d8, Func Offset: 0x338
	// Line 142, Address: 0x3ee2f8, Func Offset: 0x358
	// Line 148, Address: 0x3ee314, Func Offset: 0x374
	// Line 152, Address: 0x3ee338, Func Offset: 0x398
	// Line 153, Address: 0x3ee360, Func Offset: 0x3c0
	// Line 155, Address: 0x3ee36c, Func Offset: 0x3cc
	// Line 156, Address: 0x3ee380, Func Offset: 0x3e0
	// Line 157, Address: 0x3ee394, Func Offset: 0x3f4
	// Line 158, Address: 0x3ee3a8, Func Offset: 0x408
	// Line 161, Address: 0x3ee3c0, Func Offset: 0x420
	// Line 207, Address: 0x3ee404, Func Offset: 0x464
	// Line 211, Address: 0x3ee424, Func Offset: 0x484
	// Line 213, Address: 0x3ee430, Func Offset: 0x490
	// Line 214, Address: 0x3ee454, Func Offset: 0x4b4
	// Line 216, Address: 0x3ee46c, Func Offset: 0x4cc
	// Line 220, Address: 0x3ee490, Func Offset: 0x4f0
	// Line 221, Address: 0x3ee4bc, Func Offset: 0x51c
	// Line 223, Address: 0x3ee4d4, Func Offset: 0x534
	// Line 226, Address: 0x3ee548, Func Offset: 0x5a8
	// Line 227, Address: 0x3ee55c, Func Offset: 0x5bc
	// Line 232, Address: 0x3ee56c, Func Offset: 0x5cc
	// Line 236, Address: 0x3ee58c, Func Offset: 0x5ec
	// Line 238, Address: 0x3ee598, Func Offset: 0x5f8
	// Line 241, Address: 0x3ee5bc, Func Offset: 0x61c
	// Line 242, Address: 0x3ee5d4, Func Offset: 0x634
	// Line 244, Address: 0x3ee5f8, Func Offset: 0x658
	// Line 245, Address: 0x3ee624, Func Offset: 0x684
	// Line 247, Address: 0x3ee63c, Func Offset: 0x69c
	// Line 248, Address: 0x3ee7c8, Func Offset: 0x828
	// Line 249, Address: 0x3ee7e8, Func Offset: 0x848
	// Line 250, Address: 0x3ee7fc, Func Offset: 0x85c
	// Line 251, Address: 0x3ee80c, Func Offset: 0x86c
	// Func End, Address: 0x3ee838, Func Offset: 0x898
}

