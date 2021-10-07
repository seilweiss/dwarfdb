typedef struct _RxClusterDefinition;
typedef struct iConditionResource;
typedef struct _RwRaster;
typedef struct xRule;
typedef struct _RxOutputSpec;
typedef struct _RxPipelineNode;
typedef struct tagiAnimFrame;
typedef struct _RpWorldSector;
typedef struct _rxHeapSuperBlockDescriptor;
typedef struct _rwResEntryTag;
typedef struct iConditionRuntime;
typedef struct _iSFX;
typedef struct tagXAnim;
typedef struct tagP2MeshVertex;
typedef struct _iVFXResource;
typedef struct tagXAnimTrigger;
typedef struct _RxHeap;
typedef struct _rxHeapBlockHeader;
typedef struct _RpClump;
typedef struct iTriggerResource;
typedef struct iMarkerResource;
typedef enum _RxClusterValidityReq;
typedef struct _RpMeshHeader;
typedef struct _iSFXResource;
typedef struct _rxHeapFreeBlock;
typedef struct _RpWorld;
typedef struct iActorRuntime;
typedef struct _RxPipelineNodeTopSortData;
typedef struct tagxStateMgr;
typedef struct tagiFloorTri;
typedef struct xTrigger;
typedef struct _xSndMgrData;
typedef struct _xActor;
typedef struct iRuleResource;
typedef struct tagXAnimControl;
typedef struct _RxPipelineNodeParam;
typedef struct _RpCollSector;
typedef struct _RxPipelineCluster;
typedef enum _rxEmbeddedPacketState;
typedef struct xEntryPoint;
typedef struct _RpSector;
typedef struct tagxState;
typedef struct _RxNodeDefinition;
typedef enum _RxClusterValid;
typedef struct tagxStateLink;
typedef struct iEntryPointResource;
typedef struct tagiAnimRuntime;
typedef struct tagXStreamMDSDirectory;
typedef struct _RwSurfaceProperties;
typedef struct _iEntryPointRuntime;
typedef struct tagxPadAction;
typedef struct p2Camera;
typedef struct _RwLLLink;
typedef struct xScene;
typedef struct tagP2Weight;
typedef struct _RpMaterialList;
typedef struct _RwV3d;
typedef struct tagiFloor;
typedef struct _RpMaterial;
typedef enum _RwTextureFilterMode;
typedef struct xCamera;
typedef struct _RxPipelineRequiresCluster;
typedef struct xAction;
typedef struct xLight;
typedef struct iLightResource;
typedef struct _iLightRuntime;
typedef struct _RxPipeline;
typedef struct _RpPolygon;
typedef struct _rxReq;
typedef struct p2CameraVersion;
typedef struct xCondition;
typedef struct XStreamHeader;
typedef struct _RpVertexNormal;
typedef struct _RwObject;
typedef struct Vector3D;
typedef struct _RwTexCoords;
typedef struct _RwRGBA;
typedef struct xNavLink;
typedef struct xMarker;
typedef struct _FCinfo;
typedef struct _iWAV;
typedef struct _RwTexDictionary;
typedef struct _RxClusterRef;
typedef struct Vector4D;
typedef struct tagXStreamDirectoryEntry;
typedef struct _tagiEnvRuntime;
typedef struct _RxIoSpec;
typedef struct tagiAnimResource;
typedef struct tagP2Mesh;
typedef struct xNavPoint;
typedef struct iCameraResource;
typedef struct _RxNodeMethods;
typedef struct tagP2VERTEX;
typedef enum _RxClusterForcePresent;
typedef struct _iRenderEffects;
typedef struct _RwTexture;
typedef struct _RwBBox;
typedef struct _RxPacket;
typedef struct iActionRuntime;
typedef enum _RxNodeDefEditable;
typedef struct tagxStateThread;
typedef struct _RxClusterUnion;
typedef struct iActionResource;
typedef struct _RxCluster;
typedef struct _RwLinkList;
typedef struct tagxActorDBData;
typedef enum _rpWorldRenderOrder;
typedef struct _tagxEnv;
typedef struct iDisplayCamera;
typedef struct tagiMesh;
typedef struct _p2Geom;
typedef struct tagxPhysicsObject;
typedef enum _RwTextureAddressMode;

typedef void(*type_1)(int32, int32);
typedef _RpWorldSector*(*type_2)(_RpWorldSector*);
typedef void(*type_5)(_xActor*, int32, tagXAnim*, tagXAnimTrigger*);
typedef void(*type_8)(_rwResEntryTag*);
typedef int32(*type_14)(_RxPipelineNode*, _RxPipelineNodeParam*);
typedef int32(*type_20)(_RxNodeDefinition*);
typedef void(*type_23)(int32);
typedef void(*type_24)(_RxNodeDefinition*);
typedef int32(*type_32)(_RxPipelineNode*);
typedef void(*type_36)(int32, int32, int32, int32);
typedef void(*type_38)(_RxPipelineNode*);
typedef void(*type_42)(int32, int32);
typedef _RpClump*(*type_43)(_RpClump*, void*);
typedef int32(*type_45)(_RxPipelineNode*, _RxPipeline*);
typedef void(*type_48)(int32);
typedef int32(*type_56)(int32);
typedef uint32(*type_57)(_RxPipelineNode*, uint32, uint32, void*);
typedef int32(*type_67)(int32, int32, int32, int32, int32);
typedef void(*type_74)(int32, int32);
typedef int32(*type_77)(int32, int32);
typedef void(*type_78)(int32, int32);
typedef void(*type_85)(int32);
typedef int32(*type_86)(int32, int32, int32);
typedef int32(*type_91)();
typedef void(*type_95)(int32, uint32);
typedef void(*type_99)(int32);
typedef void(*type_101)(int32, uint32);
typedef int32(*type_103)();
typedef void(*type_107)(int32, uint32);
typedef int32(*type_110)(int32);
typedef int32(*type_115)(int32);

typedef _xActor type_0[4];
typedef _xActor type_3[4];
typedef iTriggerResource* type_4[20];
typedef _xActor type_6[1];
typedef _xActor type_7[4];
typedef iTriggerResource* type_9[20];
typedef _xActor type_10[4];
typedef uint16 type_11[3];
typedef _iSFX type_12[64];
typedef _xActor type_13[4];
typedef iTriggerResource* type_15[20];
typedef _iWAV type_16[96];
typedef _xActor type_17[1];
typedef uint8 type_18[3];
typedef _xActor type_19[1];
typedef iTriggerResource* type_21[20];
typedef _xActor type_22[1];
typedef tagXStreamDirectoryEntry type_25[1000];
typedef _xActor type_26[1];
typedef int32 type_27[7];
typedef iTriggerResource* type_28[20];
typedef _xActor type_29[1];
typedef tagxStateThread type_30[7];
typedef uint32 type_31[4];
typedef _xActor type_33[1];
typedef uint32 type_34[2];
typedef iTriggerResource* type_35[20];
typedef _xActor type_37[1];
typedef _xActor type_39[1];
typedef iTriggerResource* type_40[20];
typedef _xActor type_41[4];
typedef _xActor type_44[4];
typedef iTriggerResource* type_46[20];
typedef _xActor type_47[4];
typedef uint8 type_49[3];
typedef uint32 type_50[5];
typedef _xActor type_51[1];
typedef float32 type_52[3];
typedef iTriggerResource* type_53[20];
typedef uint32 type_54[5];
typedef _xActor type_55[1];
typedef uint32 type_58[5];
typedef _xActor type_59[1];
typedef iTriggerResource* type_60[20];
typedef uint16 type_61[3];
typedef _xActor type_62[4];
typedef _iWAV* type_63[5];
typedef _xActor type_64[1];
typedef iLightResource type_65[2];
typedef iTriggerResource* type_66[20];
typedef _xActor type_68[4];
typedef _RxCluster type_69[1];
typedef uint8 type_70[4];
typedef int8 type_71[2048];
typedef _xActor type_72[4];
typedef _xActor type_73[2];
typedef _xActor type_75[1];
typedef _xActor type_76[1];
typedef _xActor type_79[1];
typedef _xActor type_80[4];
typedef int8 type_81[32];
typedef Vector3D type_82[4];
typedef uint8 type_83[4];
typedef _xActor type_84[4];
typedef uint8 type_87[4];
typedef p2CameraVersion type_88[5];
typedef _xActor type_89[1];
typedef uint8 type_90[4];
typedef Vector3D type_92[5];
typedef _xActor type_93[1];
typedef int8 type_94[32];
typedef _xActor* type_96[40];
typedef int8 type_97[32];
typedef int8 type_98[40];
typedef _xActor* type_100[13];
typedef int8 type_102[128];
typedef _xActor type_104[1];
typedef tagxState* type_105[10];
typedef _xActor type_106[4];
typedef _xActor type_108[4];
typedef _xActor type_109[1];
typedef _xActor type_111[4];
typedef Vector3D type_112[4];
typedef uint16 type_113[3];
typedef _xActor type_114[4];
typedef iTriggerResource* type_116[20];

struct _RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
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

struct xRule
{
	iRuleResource* m_resource;
	void* m_runtime;
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

struct tagiAnimFrame
{
	float32* m_tx;
	float32* m_ty;
	float32* m_tz;
	float32* m_rx;
	float32* m_ry;
	float32* m_rz;
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

struct _rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	_rxHeapSuperBlockDescriptor* next;
};

struct _rwResEntryTag
{
	_RwLLLink link;
	int32 size;
	void* owner;
	_rwResEntryTag** ownerRef;
	void(*destroyNotify)(_rwResEntryTag*);
};

struct iConditionRuntime
{
	xCondition* m_operand;
	uint16 m_match;
	uint16 m_trigger;
};

struct _iSFX
{
	int32 m_idx;
	int32 m_wavIdx;
	uint32 m_flags;
	uint32 m_soundPriority;
	void* m_callback;
	uint32 m_callbackData;
	Vector3D m_position;
	Vector3D m_velocity;
	float32 m_radius;
	uint16 m_playChunk;
	uint16 m_playChunkCount;
	uint32 m_volC[2];
	uint32 m_vol;
	uint32 m_pan;
	int16 m_loopCount;
	uint16 m_freq;
	uint16 m_pitch;
	uint16 m_userRef;
};

struct tagXAnim
{
	tagiAnimResource* m_resource;
	tagiAnimRuntime* m_runtime;
};

struct tagP2MeshVertex
{
	float32 m_x;
	float32 m_y;
	float32 m_z;
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

struct tagXAnimTrigger
{
	uint16 m_frame;
	uint16 m_type;
	uint32 m_data;
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

struct _RpClump
{
	_RwObject object;
	_RwLinkList atomicList;
	_RwLLLink inWorldLink;
	_RpClump*(*callback)(_RpClump*, void*);
	uint16 renderFrame;
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

struct _RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
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

struct _rxHeapFreeBlock
{
	uint32 size;
	_rxHeapBlockHeader* ptr;
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

struct _RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	_rxReq* req;
	void* initialisationData;
	uint32 initialisationDataSize;
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

struct xTrigger
{
	iTriggerResource* m_resource;
};

struct _xSndMgrData
{
	_iSFX m_voice[64];
	_iWAV m_id[96];
	Vector3D m_listenPos;
	Vector3D m_listenRot;
	uint8 m_masterVolume;
	uint8 m_isPaused;
	uint8 m_inStereo;
	uint8 m_pad;
	float32 m_listenRad;
	uint16 m_pad2;
	uint8 m_listenTouch;
	uint8 m_initialized;
	uint16 m_lastRef;
	uint8 m_paused;
	uint8 m_activeBank;
	uint32 m_bankMaxAddr[5];
	uint32 m_bankMinAddr[5];
	uint32 m_bankIdxAddr[5];
	_iWAV* m_bankList[5];
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

struct iRuleResource
{
	uint32 m_actionCount;
	xAction* m_action;
	uint32 m_conditionCount;
	xCondition* m_condition;
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

struct _RxPipelineNodeParam
{
	void* dataParam;
	_RxHeap* heap;
};

struct _RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
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

struct xEntryPoint
{
	iEntryPointResource* m_resource;
	_iEntryPointRuntime* m_runtime;
};

struct _RpSector
{
	int32 type;
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

struct tagxStateLink
{
	uint8 m_command;
	uint8 m_flags;
	uint16 m_state;
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

struct tagiAnimRuntime
{
	void* m_sfx;
	void* m_vfx;
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

struct _iEntryPointRuntime
{
	uint32 m_enabled;
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

struct p2Camera
{
	Vector3D m_pos;
	Vector3D m_rot;
	float32 m_fov;
};

struct _RwLLLink
{
	_RwLLLink* next;
	_RwLLLink* prev;
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

struct tagP2Weight
{
	uint16 m_joint0;
	uint16 m_joint1;
	float32 m_weight0;
	float32 m_weight1;
};

struct _RpMaterialList
{
	_RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct _RwV3d
{
	float32 x;
	float32 y;
	float32 z;
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

struct _RpMaterial
{
	_RwTexture* texture;
	_RwRGBA color;
	_RxPipeline* pipeline;
	_RwSurfaceProperties surfaceProps;
	int16 refCount;
	int16 pad;
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

struct _RxPipelineRequiresCluster
{
	_RxClusterDefinition* clusterDef;
	_RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct xAction
{
	iActionResource* m_resource;
	iActionRuntime* m_runtime;
};

struct xLight
{
	iLightResource* m_resource;
	_iLightRuntime* m_runtime;
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

struct _rxReq
{
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

struct _RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct Vector3D
{
	float32 x;
	float32 y;
	float32 z;
};

struct _RwTexCoords
{
	float32 u;
	float32 v;
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

struct xMarker
{
	iMarkerResource* m_resource;
	void** m_runtime;
};

struct _FCinfo
{
	uint16 nidx[3];
};

struct _iWAV
{
	uint8 m_used;
	uint8 m_bank;
	uint16 m_pad;
	int32 m_idx;
	int8 m_name[32];
	uint32 m_assetID;
	uint32 m_size;
	uint32 m_samples;
	uint32 m_age;
	uint32 m_addr;
	uint32 m_sramsize;
	uint32 m_freq;
	uint32 m_type;
	uint32 m_locked;
	uint32 m_pitch;
	_iWAV* m_next;
};

struct _RwTexDictionary
{
	_RwObject object;
	_RwLinkList texturesInDict;
	_RwLLLink lInInstance;
};

struct _RxClusterRef
{
	_RxClusterDefinition* clusterDef;
	_RxClusterForcePresent forcePresent;
	uint32 reserved;
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

struct _tagiEnvRuntime
{
	_RpWorld* world;
	Vector3D world_origin;
	_RwTexDictionary* tex_dict;
};

struct _RxIoSpec
{
	uint32 numClustersOfInterest;
	_RxClusterRef* clustersOfInterest;
	_RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	_RxOutputSpec* outputs;
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

struct iCameraResource
{
	uint16 m_plateOffset;
	uint16 m_versions;
	p2CameraVersion m_version[5];
	uint32 m_frameCount;
	p2Camera* m_cameras;
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

struct tagP2VERTEX
{
	float32 x;
	float32 y;
	float32 z;
	float32 tu;
	float32 tv;
};

enum _RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
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

struct iActionRuntime
{
	xAction* m_and;
};

enum _RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
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

struct _RxClusterUnion
{
	union
	{
		_RxClusterDefinition* clusterDef;
		_RxPipelineCluster* clusterRef;
	};
};

struct iActionResource
{
	uint8 m_cmdType;
	uint8 m_cmd;
	uint16 pad;
	uint32 m_cmdParameter;
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

enum _rpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct _tagxEnv
{
	_tagiEnvRuntime* m_runtime;
};

struct iDisplayCamera
{
	Vector3D m_pos;
	Vector3D m_rot;
	float32 m_fov;
};

struct tagiMesh
{
};

struct _p2Geom
{
	uint32 m_meshCount;
	tagP2Mesh* m_mesh;
	_iRenderEffects effects;
	_RpClump* m_clump;
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

enum _RwTextureAddressMode
{
	rwTEXTUREADDRESSNATEXTUREADDRESS,
	rwTEXTUREADDRESSWRAP,
	rwTEXTUREADDRESSMIRROR,
	rwTEXTUREADDRESSCLAMP,
	rwTEXTUREADDRESSBORDER,
	rwTEXTUREADDRESSMODEFORCEENUMSIZEINT = 0x7fffffff
};

_xSndMgrData gSndMgr;
int8 vAssertBuf2[128];
XStreamHeader currentHeader;
xScene* xScene_current;
tagxActorDBData* gadb;
void(*xSndMgrScriptSetStereo)(int32);
int32(*xSndMgrScriptGetStereo)();
int32(*xSndMgrScriptGetMasterVolume)();
void(*xSndMgrScriptSetMasterVolume)(int32);
void(*xSndMgrScriptVoiceSetVolume)(int32, int32);
void(*xSndMgrScriptVoiceSetFrequency)(int32, int32);
int32(*xSndMgrScriptGetSNDID)(int32);
void(*xSndMgrScriptStopSound)(int32);
void(*xSndMgrScriptSetVoicePositionMarker)(int32, int32);
void(*xSndMgrScriptSetVoicePosition)(int32, int32, int32, int32);
void(*xSndMgrScriptSetVoiceRadius)(int32, int32);
void(*xSndMgrScriptSetListenerRadius)(int32);
void(*xSndMgrAddVoiceFlags)(int32, uint32);
void(*xSndMgrSubVoiceFlags)(int32, uint32);
void(*xSndMgrSetVoiceFlags)(int32, uint32);
int32(*xSndMgrScriptPlaySoundVolLoop)(int32, int32, int32);
int32(*xSndMgrScriptPlaySoundVol)(int32, int32);
int32(*xSndMgrIsSoundIDDone)(int32);
int32(*xSndMgrIsSoundDone)(int32);
int32(*xSndMgrScriptActorPlaySound)(int32, int32, int32, int32, int32);

void xSndMgrScriptSetStereo(int32 stereoOn);
int32 xSndMgrScriptGetStereo();
int32 xSndMgrScriptGetMasterVolume();
void xSndMgrScriptSetMasterVolume(int32 volume);
void xSndMgrScriptVoiceSetVolume(int32 voice);
void xSndMgrScriptVoiceSetFrequency(int32 voice, int32 frequency);
int32 xSndMgrScriptGetSNDID(int32 assetID);
void xSndMgrScriptStopSound(int32 soundVoice);
void xSndMgrScriptSetVoicePositionMarker(int32 voice, int32 markerID);
void xSndMgrScriptSetVoicePosition(int32 voice, int32 x, int32 y, int32 z);
void xSndMgrScriptSetVoiceRadius(int32 voice, int32 r);
void xSndMgrScriptSetListenerRadius(int32 radius);
void xSndMgrAddVoiceFlags(int32 voice, uint32 flags);
void xSndMgrSubVoiceFlags(int32 voice, uint32 flags);
void xSndMgrSetVoiceFlags(int32 voice, uint32 flags);
int32 xSndMgrScriptPlaySoundVolLoop(int32 soundID, int32 soundVol, int32 loopCount);
int32 xSndMgrScriptPlaySoundVol(int32 soundID, int32 soundVol);
int32 xSndMgrIsSoundIDDone(int32 soundID);
int32 xSndMgrIsSoundDone(int32 soundVoice);
int32 xSndMgrScriptActorPlaySound(int32 actorType, int32 actorID, int32 soundID, int32 soundVol, int32 soundFreq);
void xSndMgrRegisterExternals();

// xSndMgrScriptSetStereo__Fi
// Start address: 0x3eb8e0
void xSndMgrScriptSetStereo(int32 stereoOn)
{
	// Line 441, Address: 0x3eb8e0, Func Offset: 0
	// Line 442, Address: 0x3eb8f0, Func Offset: 0x10
	// Line 443, Address: 0x3eb904, Func Offset: 0x24
	// Line 447, Address: 0x3eb90c, Func Offset: 0x2c
	// Func End, Address: 0x3eb920, Func Offset: 0x40
}

// xSndMgrScriptGetStereo__Fv
// Start address: 0x3eb920
int32 xSndMgrScriptGetStereo()
{
	// Line 428, Address: 0x3eb920, Func Offset: 0
	// Line 429, Address: 0x3eb928, Func Offset: 0x8
	// Func End, Address: 0x3eb930, Func Offset: 0x10
}

// xSndMgrScriptGetMasterVolume__Fv
// Start address: 0x3eb930
int32 xSndMgrScriptGetMasterVolume()
{
	// Line 415, Address: 0x3eb930, Func Offset: 0
	// Line 416, Address: 0x3eb938, Func Offset: 0x8
	// Func End, Address: 0x3eb940, Func Offset: 0x10
}

// xSndMgrScriptSetMasterVolume__Fi
// Start address: 0x3eb940
void xSndMgrScriptSetMasterVolume(int32 volume)
{
	// Line 393, Address: 0x3eb940, Func Offset: 0
	// Line 395, Address: 0x3eb950, Func Offset: 0x10
	// Line 396, Address: 0x3eb9f0, Func Offset: 0xb0
	// Line 398, Address: 0x3eba94, Func Offset: 0x154
	// Line 399, Address: 0x3ebaa8, Func Offset: 0x168
	// Line 402, Address: 0x3ebab0, Func Offset: 0x170
	// Line 403, Address: 0x3ebab8, Func Offset: 0x178
	// Func End, Address: 0x3ebacc, Func Offset: 0x18c
}

// xSndMgrScriptVoiceSetVolume__Fii
// Start address: 0x3ebad0
void xSndMgrScriptVoiceSetVolume(int32 voice)
{
	// Line 373, Address: 0x3ebad0, Func Offset: 0
	// Line 374, Address: 0x3ebae0, Func Offset: 0x10
	// Line 375, Address: 0x3ebb80, Func Offset: 0xb0
	// Line 381, Address: 0x3ebc24, Func Offset: 0x154
	// Func End, Address: 0x3ebc38, Func Offset: 0x168
}

// xSndMgrScriptVoiceSetFrequency__Fii
// Start address: 0x3ebc40
void xSndMgrScriptVoiceSetFrequency(int32 voice, int32 frequency)
{
	// Line 356, Address: 0x3ebc40, Func Offset: 0
	// Line 357, Address: 0x3ebc58, Func Offset: 0x18
	// Line 359, Address: 0x3ebc64, Func Offset: 0x24
	// Line 360, Address: 0x3ebc78, Func Offset: 0x38
	// Line 363, Address: 0x3ebc80, Func Offset: 0x40
	// Line 364, Address: 0x3ebd20, Func Offset: 0xe0
	// Line 366, Address: 0x3ebdc4, Func Offset: 0x184
	// Line 367, Address: 0x3ebdd4, Func Offset: 0x194
	// Func End, Address: 0x3ebdec, Func Offset: 0x1ac
}

// xSndMgrScriptGetSNDID__Fi
// Start address: 0x3ebdf0
int32 xSndMgrScriptGetSNDID(int32 assetID)
{
	// Line 339, Address: 0x3ebdf0, Func Offset: 0
	// Line 344, Address: 0x3ebdf8, Func Offset: 0x8
	// Line 345, Address: 0x3ebe00, Func Offset: 0x10
	// Func End, Address: 0x3ebe10, Func Offset: 0x20
}

// xSndMgrScriptStopSound__Fi
// Start address: 0x3ebe10
void xSndMgrScriptStopSound(int32 soundVoice)
{
	// Line 328, Address: 0x3ebe10, Func Offset: 0
	// Line 329, Address: 0x3ebe18, Func Offset: 0x8
	// Line 330, Address: 0x3ebe20, Func Offset: 0x10
	// Func End, Address: 0x3ebe30, Func Offset: 0x20
}

// xSndMgrScriptSetVoicePositionMarker__Fii
// Start address: 0x3ebe30
void xSndMgrScriptSetVoicePositionMarker(int32 voice, int32 markerID)
{
	iMarkerResource* r;
	// Line 300, Address: 0x3ebe30, Func Offset: 0
	// Line 301, Address: 0x3ebe48, Func Offset: 0x18
	// Line 302, Address: 0x3ebee8, Func Offset: 0xb8
	// Line 304, Address: 0x3ebf8c, Func Offset: 0x15c
	// Line 306, Address: 0x3ec02c, Func Offset: 0x1fc
	// Line 308, Address: 0x3ec038, Func Offset: 0x208
	// Line 310, Address: 0x3ec04c, Func Offset: 0x21c
	// Line 312, Address: 0x3ec068, Func Offset: 0x238
	// Line 313, Address: 0x3ec07c, Func Offset: 0x24c
	// Line 315, Address: 0x3ec11c, Func Offset: 0x2ec
	// Line 321, Address: 0x3ec134, Func Offset: 0x304
	// Func End, Address: 0x3ec14c, Func Offset: 0x31c
}

// xSndMgrScriptSetVoicePosition__Fiiii
// Start address: 0x3ec150
void xSndMgrScriptSetVoicePosition(int32 voice, int32 x, int32 y, int32 z)
{
	// Line 285, Address: 0x3ec150, Func Offset: 0
	// Line 286, Address: 0x3ec178, Func Offset: 0x28
	// Line 287, Address: 0x3ec218, Func Offset: 0xc8
	// Line 289, Address: 0x3ec2bc, Func Offset: 0x16c
	// Line 290, Address: 0x3ec324, Func Offset: 0x1d4
	// Func End, Address: 0x3ec344, Func Offset: 0x1f4
}

// xSndMgrScriptSetVoiceRadius__Fii
// Start address: 0x3ec350
void xSndMgrScriptSetVoiceRadius(int32 voice, int32 r)
{
	// Line 270, Address: 0x3ec350, Func Offset: 0
	// Line 271, Address: 0x3ec368, Func Offset: 0x18
	// Line 272, Address: 0x3ec408, Func Offset: 0xb8
	// Line 275, Address: 0x3ec4ac, Func Offset: 0x15c
	// Line 276, Address: 0x3ec4dc, Func Offset: 0x18c
	// Func End, Address: 0x3ec4f4, Func Offset: 0x1a4
}

// xSndMgrScriptSetListenerRadius__Fi
// Start address: 0x3ec500
void xSndMgrScriptSetListenerRadius(int32 radius)
{
	// Line 259, Address: 0x3ec500, Func Offset: 0
	// Line 260, Address: 0x3ec508, Func Offset: 0x8
	// Line 261, Address: 0x3ec538, Func Offset: 0x38
	// Func End, Address: 0x3ec548, Func Offset: 0x48
}

// xSndMgrAddVoiceFlags__FiUi
// Start address: 0x3ec550
void xSndMgrAddVoiceFlags(int32 voice, uint32 flags)
{
	// Line 241, Address: 0x3ec550, Func Offset: 0
	// Line 242, Address: 0x3ec568, Func Offset: 0x18
	// Line 244, Address: 0x3ec574, Func Offset: 0x24
	// Line 245, Address: 0x3ec614, Func Offset: 0xc4
	// Line 247, Address: 0x3ec6b8, Func Offset: 0x168
	// Line 250, Address: 0x3ec6dc, Func Offset: 0x18c
	// Func End, Address: 0x3ec6f4, Func Offset: 0x1a4
}

// xSndMgrSubVoiceFlags__FiUi
// Start address: 0x3ec700
void xSndMgrSubVoiceFlags(int32 voice, uint32 flags)
{
	// Line 220, Address: 0x3ec700, Func Offset: 0
	// Line 221, Address: 0x3ec718, Func Offset: 0x18
	// Line 223, Address: 0x3ec724, Func Offset: 0x24
	// Line 224, Address: 0x3ec7c4, Func Offset: 0xc4
	// Line 226, Address: 0x3ec868, Func Offset: 0x168
	// Line 228, Address: 0x3ec8b4, Func Offset: 0x1b4
	// Func End, Address: 0x3ec8cc, Func Offset: 0x1cc
}

// xSndMgrSetVoiceFlags__FiUi
// Start address: 0x3ec8d0
void xSndMgrSetVoiceFlags(int32 voice, uint32 flags)
{
	// Line 193, Address: 0x3ec8d0, Func Offset: 0
	// Line 194, Address: 0x3ec8e8, Func Offset: 0x18
	// Line 196, Address: 0x3ec8f4, Func Offset: 0x24
	// Line 197, Address: 0x3ec994, Func Offset: 0xc4
	// Line 204, Address: 0x3eca38, Func Offset: 0x168
	// Line 207, Address: 0x3eca54, Func Offset: 0x184
	// Func End, Address: 0x3eca6c, Func Offset: 0x19c
}

// xSndMgrScriptPlaySoundVolLoop__Fiii
// Start address: 0x3eca70
int32 xSndMgrScriptPlaySoundVolLoop(int32 soundID, int32 soundVol, int32 loopCount)
{
	// Line 178, Address: 0x3eca70, Func Offset: 0
	// Line 179, Address: 0x3eca78, Func Offset: 0x8
	// Line 180, Address: 0x3eca80, Func Offset: 0x10
	// Func End, Address: 0x3eca90, Func Offset: 0x20
}

// xSndMgrScriptPlaySoundVol__Fii
// Start address: 0x3eca90
int32 xSndMgrScriptPlaySoundVol(int32 soundID, int32 soundVol)
{
	// Line 168, Address: 0x3eca90, Func Offset: 0
	// Line 169, Address: 0x3eca98, Func Offset: 0x8
	// Line 170, Address: 0x3ecaa0, Func Offset: 0x10
	// Func End, Address: 0x3ecab0, Func Offset: 0x20
}

// xSndMgrIsSoundIDDone__Fi
// Start address: 0x3ecab0
int32 xSndMgrIsSoundIDDone(int32 soundID)
{
	int32 i;
	// Line 136, Address: 0x3ecab0, Func Offset: 0
	// Line 139, Address: 0x3ecac0, Func Offset: 0x10
	// Line 140, Address: 0x3ecad0, Func Offset: 0x20
	// Line 142, Address: 0x3ecadc, Func Offset: 0x2c
	// Line 143, Address: 0x3ecae8, Func Offset: 0x38
	// Line 145, Address: 0x3ecaf4, Func Offset: 0x44
	// Line 146, Address: 0x3ecb94, Func Offset: 0xe4
	// Line 148, Address: 0x3ecc38, Func Offset: 0x188
	// Line 150, Address: 0x3ecc44, Func Offset: 0x194
	// Line 152, Address: 0x3ecc68, Func Offset: 0x1b8
	// Line 155, Address: 0x3eccb8, Func Offset: 0x208
	// Line 158, Address: 0x3eccc4, Func Offset: 0x214
	// Line 160, Address: 0x3eccd4, Func Offset: 0x224
	// Line 161, Address: 0x3eccd8, Func Offset: 0x228
	// Func End, Address: 0x3eccec, Func Offset: 0x23c
}

// xSndMgrIsSoundDone__Fi
// Start address: 0x3eccf0
int32 xSndMgrIsSoundDone(int32 soundVoice)
{
	_iSFX* sp;
	// Line 98, Address: 0x3eccf0, Func Offset: 0
	// Line 101, Address: 0x3ecd00, Func Offset: 0x10
	// Line 102, Address: 0x3ecd10, Func Offset: 0x20
	// Line 104, Address: 0x3ecd1c, Func Offset: 0x2c
	// Line 105, Address: 0x3ecd28, Func Offset: 0x38
	// Line 108, Address: 0x3ecd34, Func Offset: 0x44
	// Line 109, Address: 0x3ecdd4, Func Offset: 0xe4
	// Line 112, Address: 0x3ece78, Func Offset: 0x188
	// Line 114, Address: 0x3ece90, Func Offset: 0x1a0
	// Line 116, Address: 0x3eceb0, Func Offset: 0x1c0
	// Line 118, Address: 0x3ecebc, Func Offset: 0x1cc
	// Line 119, Address: 0x3ecec0, Func Offset: 0x1d0
	// Func End, Address: 0x3eced4, Func Offset: 0x1e4
}

// xSndMgrScriptActorPlaySound__Fiiiii
// Start address: 0x3ecee0
int32 xSndMgrScriptActorPlaySound(int32 actorType, int32 actorID, int32 soundID, int32 soundVol, int32 soundFreq)
{
	iActorRuntime* ar;
	_xActor* a;
	// Line 71, Address: 0x3ecee0, Func Offset: 0
	// Line 75, Address: 0x3ecf10, Func Offset: 0x30
	// Line 76, Address: 0x3ecfb0, Func Offset: 0xd0
	// Line 78, Address: 0x3ed060, Func Offset: 0x180
	// Line 79, Address: 0x3ed070, Func Offset: 0x190
	// Line 80, Address: 0x3ed074, Func Offset: 0x194
	// Line 83, Address: 0x3ed114, Func Offset: 0x234
	// Line 84, Address: 0x3ed12c, Func Offset: 0x24c
	// Func End, Address: 0x3ed150, Func Offset: 0x270
}

// xSndMgrRegisterExternals__Fv
// Start address: 0x3ed150
void xSndMgrRegisterExternals()
{
	// Line 29, Address: 0x3ed150, Func Offset: 0
	// Line 31, Address: 0x3ed158, Func Offset: 0x8
	// Line 32, Address: 0x3ed174, Func Offset: 0x24
	// Line 33, Address: 0x3ed190, Func Offset: 0x40
	// Line 34, Address: 0x3ed1ac, Func Offset: 0x5c
	// Line 35, Address: 0x3ed1c8, Func Offset: 0x78
	// Line 36, Address: 0x3ed1e4, Func Offset: 0x94
	// Line 37, Address: 0x3ed200, Func Offset: 0xb0
	// Line 38, Address: 0x3ed21c, Func Offset: 0xcc
	// Line 39, Address: 0x3ed238, Func Offset: 0xe8
	// Line 40, Address: 0x3ed254, Func Offset: 0x104
	// Line 41, Address: 0x3ed270, Func Offset: 0x120
	// Line 42, Address: 0x3ed28c, Func Offset: 0x13c
	// Line 43, Address: 0x3ed2a8, Func Offset: 0x158
	// Line 44, Address: 0x3ed2c4, Func Offset: 0x174
	// Line 45, Address: 0x3ed2e0, Func Offset: 0x190
	// Line 46, Address: 0x3ed2fc, Func Offset: 0x1ac
	// Line 47, Address: 0x3ed318, Func Offset: 0x1c8
	// Line 48, Address: 0x3ed334, Func Offset: 0x1e4
	// Line 49, Address: 0x3ed350, Func Offset: 0x200
	// Line 50, Address: 0x3ed36c, Func Offset: 0x21c
	// Line 52, Address: 0x3ed388, Func Offset: 0x238
	// Func End, Address: 0x3ed398, Func Offset: 0x248
}

