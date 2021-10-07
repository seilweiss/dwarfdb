typedef struct tagParCmd_Accelerate;
typedef struct _rxHeapSuperBlockDescriptor;
typedef struct xCondition;
typedef struct tagXAnim;
typedef struct _rwResEntryTag;
typedef struct tagxStateLink;
typedef struct xAction;
typedef struct tagP2Weight;
typedef struct _RpVertexNormal;
typedef struct xParCmd;
typedef struct _RxHeap;
typedef struct _rxHeapBlockHeader;
typedef struct xNavPoint;
typedef struct xPar;
typedef struct tagParCmd_Friction;
typedef struct tagxParSys;
typedef struct tagiAnimResource;
typedef struct xTrigger;
typedef enum _RxClusterValidityReq;
typedef struct tagParCmd_Emitter;
typedef struct tagParCmd_Texture;
typedef struct _RpMaterial;
typedef struct _rxHeapFreeBlock;
typedef struct tagiAnimRuntime;
typedef struct _RxPipelineNodeTopSortData;
typedef struct _iRenderEffects;
typedef struct xNavLink;
typedef struct tagParCmd_RandomDisplace;
typedef struct tagParCmd_KillOld;
typedef struct iActorRuntime;
typedef struct _RwTexture;
typedef struct xScene;
typedef struct iActionResource;
typedef struct _RxPipelineNode;
typedef struct _RxClusterDefinition;
typedef struct _FCinfo;
typedef struct p2Camera;
typedef struct tagParCmd_KillBox;
typedef struct _RxPipelineNodeParam;
typedef struct _RxPipelineCluster;
typedef struct _RxPipeline;
typedef struct _RpSector;
typedef enum _rxEmbeddedPacketState;
typedef struct tagXStreamMDSDirectory;
typedef struct Vector3D;
typedef struct tagP2VERTEX;
typedef struct tagxStateThread;
typedef struct xMarker;
typedef struct _RxNodeDefinition;
typedef enum _rpWorldRenderOrder;
typedef enum _RxClusterValid;
typedef struct tagxState;
typedef struct tagXAnimTrigger;
typedef struct Vector4D;
typedef struct tagParCmd_OrbitPoint;
typedef struct _RwSurfaceProperties;
typedef struct tagXAnimControl;
typedef struct _xActor;
typedef struct xEntryPoint;
typedef struct iTriggerResource;
typedef struct _RpPolygon;
typedef struct tagiMesh;
typedef struct iActionRuntime;
typedef struct tagParCmd_RotMove;
typedef struct iDisplayCamera;
typedef struct tagParCmd_Move;
typedef struct _tagxEnv;
typedef struct tagxPadAction;
typedef struct _RwV3d;
typedef enum _RwTextureFilterMode;
typedef struct tagxActorDBData;
typedef struct _tagiEnvRuntime;
typedef struct tagParCmd_KillInvis;
typedef struct tagiFloor;
typedef struct iConditionResource;
typedef struct _RxPipelineRequiresCluster;
typedef struct _RpWorldSector;
typedef struct iConditionRuntime;
typedef struct XStreamHeader;
typedef struct tagP2MeshVertex;
typedef struct xRule;
typedef struct _RpMeshHeader;
typedef struct tagParCmd_ModulateColor;
typedef struct _rxReq;
typedef struct _p2Geom;
typedef struct _RpWorld;
typedef struct tagxPhysicsObject;
typedef struct tagParCmd_LimitVelocity;
typedef struct _RwObject;
typedef struct _RpCollSector;
typedef struct iRuleResource;
typedef struct tagiFloorTri;
typedef struct tagP2Mesh;
typedef struct tagParCmd_Jet;
typedef struct tagParCmd_KillSlow;
typedef struct tagParCmd_SpawnVFX;
typedef struct _RxOutputSpec;
typedef struct _RpClump;
typedef struct _RwTexDictionary;
typedef struct _iVFXResource;
typedef struct tagiAnimFrame;
typedef struct tagxStateMgr;
typedef struct _RwLLLink;
typedef struct tagXStreamDirectoryEntry;
typedef struct tagParCmd_Bounce;
typedef struct iEntryPointResource;
typedef struct _RxClusterRef;
typedef struct _iSFXResource;
typedef struct _iEntryPointRuntime;
typedef struct _RpMaterialList;
typedef struct _RxIoSpec;
typedef struct _RwRGBA;
typedef struct iMarkerResource;
typedef struct xCamera;
typedef struct _RwBBox;
typedef struct _RxNodeMethods;
typedef struct xLight;
typedef struct tagParCmdList;
typedef enum _RxClusterForcePresent;
typedef struct iLightResource;
typedef struct _iLightRuntime;
typedef struct _RwRaster;
typedef struct _RxPacket;
typedef struct _RwTexCoords;
typedef struct p2CameraVersion;
typedef enum _RxNodeDefEditable;
typedef struct _RxClusterUnion;
typedef struct tagParCmd_KillPlane;
typedef struct _RxCluster;
typedef struct _RwLinkList;
typedef enum _RwTextureAddressMode;
typedef struct tagParCmd_Turbulence;
typedef struct iCameraResource;

typedef void(*type_7)(_rwResEntryTag*);
typedef int32(*type_11)(_RxPipelineNode*, _RxPipelineNodeParam*);
typedef int32(*type_17)(_RxNodeDefinition*);
typedef void(*type_21)(_RxNodeDefinition*);
typedef int32(*type_26)(_RxPipelineNode*);
typedef void(*type_32)(_RxPipelineNode*);
typedef _RpWorldSector*(*type_34)(_RpWorldSector*);
typedef int32(*type_38)(_RxPipelineNode*, _RxPipeline*);
typedef void(*type_47)(_xActor*, int32, tagXAnim*, tagXAnimTrigger*);
typedef uint32(*type_48)(_RxPipelineNode*, uint32, uint32, void*);
typedef _RpClump*(*type_72)(_RpClump*, void*);
typedef void(*type_110)(xParCmd*, tagxParSys*, uint32);

typedef void(*type_0)(xParCmd*, tagxParSys*, uint32)[38];
typedef _xActor type_1[1];
typedef Vector3D type_2[4];
typedef uint8 type_3[3];
typedef _xActor type_4[1];
typedef p2CameraVersion type_5[5];
typedef _xActor type_6[1];
typedef _xActor type_8[4];
typedef uint8 type_9[4];
typedef uint8 type_10[3];
typedef _xActor type_12[4];
typedef uint8 type_13[4];
typedef _xActor type_14[1];
typedef tagXStreamDirectoryEntry type_15[1000];
typedef uint8 type_16[4];
typedef Vector3D type_18[5];
typedef _xActor type_19[1];
typedef _xActor* type_20[40];
typedef int8 type_22[40];
typedef _xActor* type_23[13];
typedef uint16 type_24[3];
typedef uint32 type_25[4];
typedef uint8 type_27[3];
typedef tagxState* type_28[10];
typedef _xActor type_29[1];
typedef Vector3D type_30[4];
typedef _xActor type_31[4];
typedef iTriggerResource* type_33[20];
typedef _xActor type_35[4];
typedef _xActor type_36[1];
typedef _xActor type_37[4];
typedef iTriggerResource* type_39[20];
typedef uint8 type_40[2];
typedef _xActor type_41[4];
typedef _xActor type_42[4];
typedef iTriggerResource* type_43[20];
typedef uint8 type_44[3];
typedef _xActor type_45[4];
typedef uint16 type_46[3];
typedef _xActor type_49[1];
typedef iTriggerResource* type_50[20];
typedef uint8 type_51[2];
typedef _xActor type_52[4];
typedef int8 type_53[2048];
typedef iTriggerResource* type_54[20];
typedef _xActor type_55[4];
typedef _xActor type_56[4];
typedef _RxCluster type_57[1];
typedef uint8 type_58[3];
typedef iTriggerResource* type_59[20];
typedef _xActor type_60[1];
typedef uint8 type_61[3];
typedef _xActor type_62[1];
typedef _xActor type_63[1];
typedef uint8 type_64[3];
typedef iTriggerResource* type_65[20];
typedef _xActor type_66[1];
typedef int32 type_67[7];
typedef iTriggerResource* type_68[20];
typedef _xActor type_69[1];
typedef uint8 type_70[2];
typedef tagxStateThread type_71[7];
typedef _xActor type_73[1];
typedef uint8 type_74[4];
typedef Vector3D type_75[2];
typedef _xActor type_76[1];
typedef iTriggerResource* type_77[20];
typedef uint8 type_78[4];
typedef uint8 type_79[3];
typedef _xActor type_80[1];
typedef int8 type_81[32];
typedef float32 type_82[3];
typedef int8 type_83[32];
typedef _xActor type_84[4];
typedef iTriggerResource* type_85[20];
typedef uint8 type_86[3];
typedef _xActor type_87[4];
typedef uint8 type_88[2];
typedef uint16 type_89[3];
typedef int8 type_90[128];
typedef uint8 type_91[4];
typedef _xActor type_92[4];
typedef iTriggerResource* type_93[20];
typedef int8 type_94[4];
typedef _xActor type_95[1];
typedef iLightResource type_96[2];
typedef uint8 type_97[4];
typedef _xActor type_98[1];
typedef uint8 type_99[2];
typedef iTriggerResource* type_100[20];
typedef uint8 type_101[2];
typedef uint8 type_102[3];
typedef float32 type_103[32];
typedef float32 type_104[32][32];
typedef uint8 type_105[3];
typedef uint8 type_106[4];
typedef _xActor type_107[1];
typedef uint8 type_108[3];
typedef _xActor type_109[4];
typedef _xActor type_111[1];
typedef float32 type_112[2];
typedef _xActor type_113[4];
typedef float32 type_114[2];
typedef uint8 type_115[4];
typedef uint8 type_116[2];
typedef _xActor type_117[4];
typedef _xActor type_118[2];

struct tagParCmd_Accelerate
{
	uint8 m_free;
	uint8 m_pad[3];
	Vector3D m_acc;
	uint32 m_freq;
	uint32 m_freqTime;
};

struct _rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	_rxHeapSuperBlockDescriptor* next;
};

struct xCondition
{
	iConditionResource* m_resource;
	iConditionRuntime* m_runtime;
};

struct tagXAnim
{
	tagiAnimResource* m_resource;
	tagiAnimRuntime* m_runtime;
};

struct _rwResEntryTag
{
	_RwLLLink link;
	int32 size;
	void* owner;
	_rwResEntryTag** ownerRef;
	void(*destroyNotify)(_rwResEntryTag*);
};

struct tagxStateLink
{
	uint8 m_command;
	uint8 m_flags;
	uint16 m_state;
};

struct xAction
{
	iActionResource* m_resource;
	iActionRuntime* m_runtime;
};

struct tagP2Weight
{
	uint16 m_joint0;
	uint16 m_joint1;
	float32 m_weight0;
	float32 m_weight1;
};

struct _RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

struct xParCmd
{
	uint8 m_tag;
	uint8 m_flag;
	int16 m_count;
	void* m_method;
	void* m_data;
	xParCmd* m_next;
	xParCmd* m_prev;
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

struct xPar
{
	xPar* m_next;
	xPar* m_prev;
	Vector3D m_pos;
	Vector3D m_vel;
	Vector3D m_acc;
	float32 m_size;
	float32 m_sizeVel;
	int16 m_lifetime;
	uint8 m_flag;
	uint8 m_mode;
	uint8 m_c[4];
	int8 m_cvel[4];
	uint8 m_c1[4];
	uint8 m_c2[4];
	uint8 m_rotdeg[3];
	uint8 m_texIdx;
	float32 m_uva[2];
	float32 m_uvb[2];
};

struct tagParCmd_Friction
{
	uint8 m_free;
	uint8 m_pad[3];
	Vector3D m_friction;
};

struct tagxParSys
{
	uint32 m_idx;
	xPar* m_root;
	xPar* m_dead;
	int32 m_num_of_particles;
	tagParCmdList* m_cmd;
	uint8 m_alive;
	uint8 m_killWhenDead;
	uint8 m_active;
	uint8 m_visible;
	uint8 m_culled;
	uint8 m_deadGlobalPool;
	uint8 m_pad[2];
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

struct tagParCmd_Emitter
{
	uint8 m_free;
	uint16 m_emitLifeRandom;
	uint8 m_emitMode;
	int32 m_emitType;
	int32 m_emitAmount;
	int32 m_emitAmountRangeMin;
	int32 m_emitAmountRangeMax;
	uint8 m_emitCVel[4];
	uint8 m_emitColor[4];
	float32 m_emitSize;
	float32 m_emitSizeRangeMin;
	float32 m_emitSizeRangeMax;
	float32 m_emitSizeVel;
	Vector3D m_emitVel;
	Vector3D m_emitVelVar;
	Vector3D m_origin;
	Vector3D m_p1;
	Vector3D m_p2;
	xParCmd* m_cmdTex;
	uint16 m_delayCount;
	uint16 m_delay;
};

struct tagParCmd_Texture
{
	float32 m_x1;
	float32 m_y1;
	float32 m_x2;
	float32 m_y2;
	int8 m_texBirth;
	uint8 m_texType;
	uint8 m_texAnim;
	uint8 m_texDir;
	Vector3D m_minVel;
	int16 m_animCount;
	int16 m_animWait;
	float32 m_unitW;
	float32 m_unitH;
	float32 m_unitRW;
	uint8 m_pad;
	uint8 m_unitCount;
	uint8 m_columns;
	uint8 m_rows;
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

struct _rxHeapFreeBlock
{
	uint32 size;
	_rxHeapBlockHeader* ptr;
};

struct tagiAnimRuntime
{
	void* m_sfx;
	void* m_vfx;
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

struct tagParCmd_RandomDisplace
{
	uint8 m_free;
	uint8 m_minAge;
	uint8 m_delayCount;
	uint8 m_delay;
	Vector3D m_vel;
};

struct tagParCmd_KillOld
{
	uint8 m_free;
	uint8 m_pad[3];
	int32 m_ageLimit;
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

struct iActionResource
{
	uint8 m_cmdType;
	uint8 m_cmd;
	uint16 pad;
	uint32 m_cmdParameter;
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

struct p2Camera
{
	Vector3D m_pos;
	Vector3D m_rot;
	float32 m_fov;
};

struct tagParCmd_KillBox
{
	uint8 m_free;
	uint8 m_pad[2];
	uint8 m_killOut;
	Vector3D m_p[2];
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

struct _RpSector
{
	int32 type;
};

enum _rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

struct tagXStreamMDSDirectory
{
	uint32 count;
	tagXStreamDirectoryEntry directory[1000];
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

struct tagxStateThread
{
	tagxState* m_state;
	tagXAnimControl* m_animCtl;
	int32 m_deferredWaiting;
	tagxPadAction m_deferred;
	int32 m_rbp;
	tagxState* m_ring[10];
};

struct xMarker
{
	iMarkerResource* m_resource;
	void** m_runtime;
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

enum _rpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

enum _RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
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

struct tagXAnimTrigger
{
	uint16 m_frame;
	uint16 m_type;
	uint32 m_data;
};

struct Vector4D
{
	float32 x;
	float32 y;
	float32 z;
	float32 t;
};

struct tagParCmd_OrbitPoint
{
	uint8 m_free;
	uint8 m_pad[3];
	Vector3D m_center;
	float32 m_gravity;
	float32 m_epsilon;
	float32 m_maxRadiusSqr;
};

struct _RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
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

struct xEntryPoint
{
	iEntryPointResource* m_resource;
	_iEntryPointRuntime* m_runtime;
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

struct _RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
};

struct tagiMesh
{
};

struct iActionRuntime
{
	xAction* m_and;
};

struct tagParCmd_RotMove
{
	uint8 m_free;
	uint8 m_rotadjust[3];
};

struct iDisplayCamera
{
	Vector3D m_pos;
	Vector3D m_rot;
	float32 m_fov;
};

struct tagParCmd_Move
{
	uint8 m_free;
	uint8 m_pad[3];
	int32 m_dt;
};

struct _tagxEnv
{
	_tagiEnvRuntime* m_runtime;
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

struct _tagiEnvRuntime
{
	_RpWorld* world;
	Vector3D world_origin;
	_RwTexDictionary* tex_dict;
};

struct tagParCmd_KillInvis
{
	uint8 m_free;
	uint8 m_pad;
	int16 m_ageMin;
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

struct _RxPipelineRequiresCluster
{
	_RxClusterDefinition* clusterDef;
	_RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
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

struct iConditionRuntime
{
	xCondition* m_operand;
	uint16 m_match;
	uint16 m_trigger;
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

struct tagP2MeshVertex
{
	float32 m_x;
	float32 m_y;
	float32 m_z;
};

struct xRule
{
	iRuleResource* m_resource;
	void* m_runtime;
};

struct _RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct tagParCmd_ModulateColor
{
	uint8 m_free;
	uint8 m_pad[2];
	uint8 m_flags;
	int16 m_ageMin;
	int16 m_ageMax;
};

struct _rxReq
{
};

struct _p2Geom
{
	uint32 m_meshCount;
	tagP2Mesh* m_mesh;
	_iRenderEffects effects;
	_RpClump* m_clump;
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

struct tagParCmd_LimitVelocity
{
	uint8 m_free;
	uint8 m_pad[3];
	Vector3D m_maxVelocity;
};

struct _RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct _RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
};

struct iRuleResource
{
	uint32 m_actionCount;
	xAction* m_action;
	uint32 m_conditionCount;
	xCondition* m_condition;
};

struct tagiFloorTri
{
	uint16 m_v[3];
	uint16 m_n;
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

struct tagParCmd_Jet
{
	uint8 m_free;
	uint8 m_pad[3];
	Vector3D m_center;
	Vector3D m_acc;
	float32 m_gravity;
	float32 m_epsilon;
	float32 m_maxRadiusSqr;
};

struct tagParCmd_KillSlow
{
	uint8 m_free;
	uint8 m_pad[2];
	uint8 m_velAbs;
	Vector3D m_velMin;
};

struct tagParCmd_SpawnVFX
{
	uint8 m_free;
	uint8 m_vfxType;
	uint8 m_mode;
	uint8 m_delay;
	uint8 m_delayCount;
	uint8 m_spawnProbability;
	uint16 m_maxAge;
	uint8 m_displace[3];
	uint8 m_pad;
};

struct _RxOutputSpec
{
	int8* name;
	_RxClusterValid* outputClusters;
	_RxClusterValid allOtherClusters;
};

struct _RpClump
{
	_RwObject object;
	_RwLinkList atomicList;
	_RwLLLink inWorldLink;
	_RpClump*(*callback)(_RpClump*, void*);
	uint16 renderFrame;
};

struct _RwTexDictionary
{
	_RwObject object;
	_RwLinkList texturesInDict;
	_RwLLLink lInInstance;
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

struct _RwLLLink
{
	_RwLLLink* next;
	_RwLLLink* prev;
};

struct tagXStreamDirectoryEntry
{
	uint32 id;
	uint32 type;
	uint32 offset;
	uint32 length;
};

struct tagParCmd_Bounce
{
	uint8 m_free;
	uint8 m_pad[2];
	uint8 m_noStatic;
	Vector3D m_plane;
	Vector3D m_dampVelPercent;
	uint32 m_sndAssetID;
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

struct _RxClusterRef
{
	_RxClusterDefinition* clusterDef;
	_RxClusterForcePresent forcePresent;
	uint32 reserved;
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

struct _iEntryPointRuntime
{
	uint32 m_enabled;
};

struct _RpMaterialList
{
	_RpMaterial** materials;
	int32 numMaterials;
	int32 space;
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

struct iMarkerResource
{
	Vector3D m_pos;
};

struct xCamera
{
	iCameraResource* m_resource;
	void** m_runtime;
};

struct _RwBBox
{
	_RwV3d sup;
	_RwV3d inf;
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

struct xLight
{
	iLightResource* m_resource;
	_iLightRuntime* m_runtime;
};

struct tagParCmdList
{
	int32 m_numCmd;
	xParCmd* m_cmd;
	xParCmd* m_lastCmd;
	tagParCmdList* m_prev;
	tagParCmdList* m_next;
};

enum _RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
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

struct _RwTexCoords
{
	float32 u;
	float32 v;
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

enum _RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct _RxClusterUnion
{
	union
	{
		_RxClusterDefinition* clusterDef;
		_RxPipelineCluster* clusterRef;
	};
};

struct tagParCmd_KillPlane
{
	uint8 m_free;
	uint8 m_pad[2];
	uint8 m_killBelow;
	Vector3D m_plane;
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

enum _RwTextureAddressMode
{
	rwTEXTUREADDRESSNATEXTUREADDRESS,
	rwTEXTUREADDRESSWRAP,
	rwTEXTUREADDRESSMIRROR,
	rwTEXTUREADDRESSCLAMP,
	rwTEXTUREADDRESSBORDER,
	rwTEXTUREADDRESSMODEFORCEENUMSIZEINT = 0x7fffffff
};

struct tagParCmd_Turbulence
{
	uint8 m_free;
	uint8 m_pad[2];
	uint8 m_dirSinCos;
	float32 m_ageMin;
	float32 m_ageMax;
	float32 m_lift;
	float32 m_max_swirl_radius;
	float32 m_currentSpin;
	float32 m_spinRate;
};

struct iCameraResource
{
	uint16 m_plateOffset;
	uint16 m_versions;
	p2CameraVersion m_version[5];
	uint32 m_frameCount;
	p2Camera* m_cameras;
};

void(*gParCmdExeTable)(xParCmd*, tagxParSys*, uint32)[38];
int8 vAssertBuf2[128];
XStreamHeader currentHeader;
xScene* xScene_current;
float32 gFloorQuickHeight[32][32];
tagxActorDBData* gadb;
float32 g_2_PI;

void ParCmdExec_SpawnVFX(xParCmd* cmd, tagxParSys* ps);
void ParCmdExec_Emitter(xParCmd* cmd, tagxParSys* ps);
void ParCmdExec_KillInvis(xParCmd* cmd, tagxParSys* ps);
void ParCmdExec_KillOld(xParCmd* cmd, tagxParSys* ps);
void ParCmdExec_KillSlow(xParCmd* cmd, tagxParSys* ps);
void ParCmdExec_KillPlane(xParCmd* cmd, tagxParSys* ps);
void ParCmdExec_KillBox(xParCmd* cmd, tagxParSys* ps);
void ParCmdExec_Texture(xParCmd* cmd, tagxParSys* ps);
void ParCmdExecHelper_TextureBirth(xParCmd* cmd, xPar* p);
void ParCmdExec_RotMove(xParCmd* cmd, tagxParSys* ps);
void ParCmdExec_Accelerate(xParCmd* cmd, tagxParSys* ps, uint32 dt);
void ParCmdExec_Move(xParCmd* cmd, tagxParSys* ps, uint32 dt);
void ParCmdExec_RandomDisplace(xParCmd* cmd, tagxParSys* ps, uint32 dt);
void ParCmdExec_OrbitPoint(xParCmd* cmd, tagxParSys* ps, uint32 dt);
void ParCmdExec_Turbulence(xParCmd* cmd, tagxParSys* ps, uint32 dt);
void ParCmdExec_Jet(xParCmd* cmd, tagxParSys* ps, uint32 dt);
void ParCmdExec_Friction(xParCmd* cmd, tagxParSys* ps, uint32 dt);
void ParCmdExec_Bounce(xParCmd* cmd, tagxParSys* ps);
void ParCmdExec_LimitVelocity(xParCmd* cmd, tagxParSys* ps);

// ParCmdExec_SpawnVFX__FP7xParCmdP10tagxParSysUi
// Start address: 0x3460a0
void ParCmdExec_SpawnVFX(xParCmd* cmd, tagxParSys* ps)
{
	Vector3D a;
	xPar* p;
	tagParCmd_SpawnVFX* d;
	// Line 1642, Address: 0x3460a0, Func Offset: 0
	// Line 1646, Address: 0x3460bc, Func Offset: 0x1c
	// Line 1647, Address: 0x34615c, Func Offset: 0xbc
	// Line 1649, Address: 0x3461fc, Func Offset: 0x15c
	// Line 1650, Address: 0x346200, Func Offset: 0x160
	// Line 1652, Address: 0x346204, Func Offset: 0x164
	// Line 1654, Address: 0x34620c, Func Offset: 0x16c
	// Line 1656, Address: 0x34621c, Func Offset: 0x17c
	// Line 1658, Address: 0x346228, Func Offset: 0x188
	// Line 1659, Address: 0x346234, Func Offset: 0x194
	// Line 1660, Address: 0x346238, Func Offset: 0x198
	// Line 1663, Address: 0x346240, Func Offset: 0x1a0
	// Line 1666, Address: 0x346248, Func Offset: 0x1a8
	// Line 1668, Address: 0x346258, Func Offset: 0x1b8
	// Line 1670, Address: 0x34626c, Func Offset: 0x1cc
	// Line 1671, Address: 0x346270, Func Offset: 0x1d0
	// Line 1674, Address: 0x346278, Func Offset: 0x1d8
	// Line 1676, Address: 0x346288, Func Offset: 0x1e8
	// Line 1678, Address: 0x346298, Func Offset: 0x1f8
	// Line 1680, Address: 0x3462b0, Func Offset: 0x210
	// Line 1682, Address: 0x3462b8, Func Offset: 0x218
	// Line 1684, Address: 0x3462c8, Func Offset: 0x228
	// Line 1686, Address: 0x3462d4, Func Offset: 0x234
	// Line 1688, Address: 0x3462ec, Func Offset: 0x24c
	// Line 1689, Address: 0x3462f4, Func Offset: 0x254
	// Line 1691, Address: 0x346304, Func Offset: 0x264
	// Line 1693, Address: 0x346320, Func Offset: 0x280
	// Line 1701, Address: 0x346330, Func Offset: 0x290
	// Line 1702, Address: 0x346364, Func Offset: 0x2c4
	// Line 1703, Address: 0x346398, Func Offset: 0x2f8
	// Line 1705, Address: 0x3463cc, Func Offset: 0x32c
	// Line 1706, Address: 0x3463e4, Func Offset: 0x344
	// Line 1709, Address: 0x3463ec, Func Offset: 0x34c
	// Line 1712, Address: 0x346404, Func Offset: 0x364
	// Line 1713, Address: 0x34640c, Func Offset: 0x36c
	// Line 1715, Address: 0x34641c, Func Offset: 0x37c
	// Line 1716, Address: 0x346434, Func Offset: 0x394
	// Line 1718, Address: 0x346438, Func Offset: 0x398
	// Line 1719, Address: 0x346440, Func Offset: 0x3a0
	// Line 1720, Address: 0x346448, Func Offset: 0x3a8
	// Func End, Address: 0x346464, Func Offset: 0x3c4
}

// ParCmdExec_Emitter__FP7xParCmdP10tagxParSysUi
// Start address: 0x346470
void ParCmdExec_Emitter(xParCmd* cmd, tagxParSys* ps)
{
	xPar* tmp;
	float32 rnd;
	int32 emitCount;
	int32 j;
	tagParCmd_Emitter* d;
	// Line 1479, Address: 0x346470, Func Offset: 0
	// Line 1485, Address: 0x346498, Func Offset: 0x28
	// Line 1486, Address: 0x346538, Func Offset: 0xc8
	// Line 1488, Address: 0x3465d8, Func Offset: 0x168
	// Line 1489, Address: 0x3465dc, Func Offset: 0x16c
	// Line 1491, Address: 0x3465e0, Func Offset: 0x170
	// Line 1492, Address: 0x3465e8, Func Offset: 0x178
	// Line 1494, Address: 0x346604, Func Offset: 0x194
	// Line 1499, Address: 0x346610, Func Offset: 0x1a0
	// Line 1501, Address: 0x34661c, Func Offset: 0x1ac
	// Line 1502, Address: 0x346628, Func Offset: 0x1b8
	// Line 1504, Address: 0x346630, Func Offset: 0x1c0
	// Line 1506, Address: 0x346638, Func Offset: 0x1c8
	// Line 1507, Address: 0x346648, Func Offset: 0x1d8
	// Line 1509, Address: 0x346650, Func Offset: 0x1e0
	// Line 1512, Address: 0x346668, Func Offset: 0x1f8
	// Line 1513, Address: 0x346684, Func Offset: 0x214
	// Line 1514, Address: 0x3466d8, Func Offset: 0x268
	// Line 1515, Address: 0x3466f4, Func Offset: 0x284
	// Line 1516, Address: 0x346748, Func Offset: 0x2d8
	// Line 1517, Address: 0x346764, Func Offset: 0x2f4
	// Line 1528, Address: 0x3467b8, Func Offset: 0x348
	// Line 1529, Address: 0x3467c0, Func Offset: 0x350
	// Line 1530, Address: 0x3467c4, Func Offset: 0x354
	// Line 1531, Address: 0x3467c8, Func Offset: 0x358
	// Line 1533, Address: 0x3467cc, Func Offset: 0x35c
	// Line 1534, Address: 0x3467e8, Func Offset: 0x378
	// Line 1536, Address: 0x34683c, Func Offset: 0x3cc
	// Line 1538, Address: 0x346848, Func Offset: 0x3d8
	// Line 1540, Address: 0x346850, Func Offset: 0x3e0
	// Line 1541, Address: 0x346858, Func Offset: 0x3e8
	// Line 1542, Address: 0x346860, Func Offset: 0x3f0
	// Line 1543, Address: 0x346868, Func Offset: 0x3f8
	// Line 1545, Address: 0x346870, Func Offset: 0x400
	// Line 1546, Address: 0x346878, Func Offset: 0x408
	// Line 1547, Address: 0x346880, Func Offset: 0x410
	// Line 1548, Address: 0x346888, Func Offset: 0x418
	// Line 1551, Address: 0x346890, Func Offset: 0x420
	// Line 1554, Address: 0x3468bc, Func Offset: 0x44c
	// Line 1556, Address: 0x3468c8, Func Offset: 0x458
	// Line 1557, Address: 0x3468cc, Func Offset: 0x45c
	// Line 1558, Address: 0x3468d0, Func Offset: 0x460
	// Line 1559, Address: 0x3468d8, Func Offset: 0x468
	// Line 1560, Address: 0x3468e0, Func Offset: 0x470
	// Line 1563, Address: 0x3468e8, Func Offset: 0x478
	// Line 1566, Address: 0x3468f8, Func Offset: 0x488
	// Line 1571, Address: 0x346930, Func Offset: 0x4c0
	// Line 1572, Address: 0x346960, Func Offset: 0x4f0
	// Line 1573, Address: 0x346974, Func Offset: 0x504
	// Line 1574, Address: 0x346988, Func Offset: 0x518
	// Line 1582, Address: 0x34699c, Func Offset: 0x52c
	// Line 1587, Address: 0x3469a4, Func Offset: 0x534
	// Line 1588, Address: 0x3469f0, Func Offset: 0x580
	// Line 1589, Address: 0x346a3c, Func Offset: 0x5cc
	// Line 1597, Address: 0x346a88, Func Offset: 0x618
	// Line 1601, Address: 0x346a90, Func Offset: 0x620
	// Line 1602, Address: 0x346adc, Func Offset: 0x66c
	// Line 1603, Address: 0x346ae4, Func Offset: 0x674
	// Line 1610, Address: 0x346b30, Func Offset: 0x6c0
	// Line 1614, Address: 0x346b38, Func Offset: 0x6c8
	// Line 1623, Address: 0x346b50, Func Offset: 0x6e0
	// Line 1624, Address: 0x346b64, Func Offset: 0x6f4
	// Func End, Address: 0x346b8c, Func Offset: 0x71c
}

// ParCmdExec_KillInvis__FP7xParCmdP10tagxParSysUi
// Start address: 0x346b90
void ParCmdExec_KillInvis(xParCmd* cmd, tagxParSys* ps)
{
	xPar* p;
	tagParCmd_KillInvis* d;
	// Line 1442, Address: 0x346b90, Func Offset: 0
	// Line 1446, Address: 0x346ba8, Func Offset: 0x18
	// Line 1447, Address: 0x346c48, Func Offset: 0xb8
	// Line 1449, Address: 0x346ce8, Func Offset: 0x158
	// Line 1451, Address: 0x346cec, Func Offset: 0x15c
	// Line 1452, Address: 0x346cf0, Func Offset: 0x160
	// Line 1454, Address: 0x346cf8, Func Offset: 0x168
	// Line 1457, Address: 0x346d08, Func Offset: 0x178
	// Line 1458, Address: 0x346d1c, Func Offset: 0x18c
	// Line 1459, Address: 0x346d24, Func Offset: 0x194
	// Line 1461, Address: 0x346d28, Func Offset: 0x198
	// Line 1462, Address: 0x346d30, Func Offset: 0x1a0
	// Line 1463, Address: 0x346d38, Func Offset: 0x1a8
	// Func End, Address: 0x346d50, Func Offset: 0x1c0
}

// ParCmdExec_KillOld__FP7xParCmdP10tagxParSysUi
// Start address: 0x346d50
void ParCmdExec_KillOld(xParCmd* cmd, tagxParSys* ps)
{
	xPar* p;
	tagParCmd_KillOld* d;
	// Line 1412, Address: 0x346d50, Func Offset: 0
	// Line 1416, Address: 0x346d68, Func Offset: 0x18
	// Line 1417, Address: 0x346e08, Func Offset: 0xb8
	// Line 1419, Address: 0x346ea8, Func Offset: 0x158
	// Line 1421, Address: 0x346eac, Func Offset: 0x15c
	// Line 1422, Address: 0x346eb0, Func Offset: 0x160
	// Line 1424, Address: 0x346eb8, Func Offset: 0x168
	// Line 1425, Address: 0x346ecc, Func Offset: 0x17c
	// Line 1426, Address: 0x346ed8, Func Offset: 0x188
	// Line 1427, Address: 0x346ee0, Func Offset: 0x190
	// Line 1428, Address: 0x346ee8, Func Offset: 0x198
	// Func End, Address: 0x346f00, Func Offset: 0x1b0
}

// ParCmdExec_KillSlow__FP7xParCmdP10tagxParSysUi
// Start address: 0x346f00
void ParCmdExec_KillSlow(xParCmd* cmd, tagxParSys* ps)
{
	xPar* p;
	tagParCmd_KillSlow* d;
	// Line 1368, Address: 0x346f00, Func Offset: 0
	// Line 1372, Address: 0x346f18, Func Offset: 0x18
	// Line 1373, Address: 0x346fb8, Func Offset: 0xb8
	// Line 1375, Address: 0x347058, Func Offset: 0x158
	// Line 1377, Address: 0x34705c, Func Offset: 0x15c
	// Line 1378, Address: 0x347060, Func Offset: 0x160
	// Line 1380, Address: 0x347068, Func Offset: 0x168
	// Line 1381, Address: 0x347080, Func Offset: 0x180
	// Line 1382, Address: 0x347090, Func Offset: 0x190
	// Line 1383, Address: 0x3470a8, Func Offset: 0x1a8
	// Line 1384, Address: 0x3470b8, Func Offset: 0x1b8
	// Line 1385, Address: 0x3470d0, Func Offset: 0x1d0
	// Line 1386, Address: 0x3470e0, Func Offset: 0x1e0
	// Line 1388, Address: 0x3470f0, Func Offset: 0x1f0
	// Line 1389, Address: 0x34710c, Func Offset: 0x20c
	// Line 1390, Address: 0x34711c, Func Offset: 0x21c
	// Line 1391, Address: 0x347138, Func Offset: 0x238
	// Line 1392, Address: 0x347148, Func Offset: 0x248
	// Line 1393, Address: 0x347164, Func Offset: 0x264
	// Line 1394, Address: 0x34716c, Func Offset: 0x26c
	// Line 1396, Address: 0x347170, Func Offset: 0x270
	// Line 1397, Address: 0x347178, Func Offset: 0x278
	// Line 1398, Address: 0x347180, Func Offset: 0x280
	// Func End, Address: 0x347198, Func Offset: 0x298
}

// ParCmdExec_KillPlane__FP7xParCmdP10tagxParSysUi
// Start address: 0x3471a0
void ParCmdExec_KillPlane(xParCmd* cmd, tagxParSys* ps)
{
	float32 zow;
	float32 xow;
	uint32 zbit;
	uint32 xbit;
	int16 plane;
	tagiFloor* f;
	xPar* p;
	tagParCmd_KillPlane* d;
	// Line 1232, Address: 0x3471a0, Func Offset: 0
	// Line 1246, Address: 0x3471c4, Func Offset: 0x24
	// Line 1247, Address: 0x347264, Func Offset: 0xc4
	// Line 1249, Address: 0x347304, Func Offset: 0x164
	// Line 1252, Address: 0x347308, Func Offset: 0x168
	// Line 1255, Address: 0x34730c, Func Offset: 0x16c
	// Line 1258, Address: 0x347314, Func Offset: 0x174
	// Line 1259, Address: 0x347324, Func Offset: 0x184
	// Line 1262, Address: 0x34733c, Func Offset: 0x19c
	// Line 1264, Address: 0x347348, Func Offset: 0x1a8
	// Line 1271, Address: 0x347350, Func Offset: 0x1b0
	// Line 1272, Address: 0x34736c, Func Offset: 0x1cc
	// Line 1274, Address: 0x347384, Func Offset: 0x1e4
	// Line 1275, Address: 0x347398, Func Offset: 0x1f8
	// Line 1277, Address: 0x3473a8, Func Offset: 0x208
	// Line 1279, Address: 0x3473d4, Func Offset: 0x234
	// Line 1283, Address: 0x347428, Func Offset: 0x288
	// Line 1284, Address: 0x347450, Func Offset: 0x2b0
	// Line 1286, Address: 0x347458, Func Offset: 0x2b8
	// Line 1287, Address: 0x347460, Func Offset: 0x2c0
	// Line 1288, Address: 0x347468, Func Offset: 0x2c8
	// Line 1298, Address: 0x347470, Func Offset: 0x2d0
	// Line 1299, Address: 0x34748c, Func Offset: 0x2ec
	// Line 1301, Address: 0x3474a4, Func Offset: 0x304
	// Line 1302, Address: 0x3474b8, Func Offset: 0x318
	// Line 1304, Address: 0x3474c8, Func Offset: 0x328
	// Line 1306, Address: 0x3474f4, Func Offset: 0x354
	// Line 1309, Address: 0x347548, Func Offset: 0x3a8
	// Line 1310, Address: 0x347570, Func Offset: 0x3d0
	// Line 1312, Address: 0x347578, Func Offset: 0x3d8
	// Line 1313, Address: 0x347580, Func Offset: 0x3e0
	// Line 1353, Address: 0x347588, Func Offset: 0x3e8
	// Func End, Address: 0x3475ac, Func Offset: 0x40c
}

// ParCmdExec_KillBox__FP7xParCmdP10tagxParSysUi
// Start address: 0x3475b0
void ParCmdExec_KillBox(xParCmd* cmd, tagxParSys* ps)
{
	Vector3D* v;
	xPar* p;
	tagParCmd_KillBox* d;
	// Line 1167, Address: 0x3475b0, Func Offset: 0
	// Line 1171, Address: 0x3475c8, Func Offset: 0x18
	// Line 1172, Address: 0x347668, Func Offset: 0xb8
	// Line 1174, Address: 0x347708, Func Offset: 0x158
	// Line 1175, Address: 0x34770c, Func Offset: 0x15c
	// Line 1177, Address: 0x347710, Func Offset: 0x160
	// Line 1179, Address: 0x347714, Func Offset: 0x164
	// Line 1181, Address: 0x347720, Func Offset: 0x170
	// Line 1183, Address: 0x347728, Func Offset: 0x178
	// Line 1194, Address: 0x3477b8, Func Offset: 0x208
	// Line 1196, Address: 0x3477c0, Func Offset: 0x210
	// Line 1197, Address: 0x3477c8, Func Offset: 0x218
	// Line 1198, Address: 0x3477d0, Func Offset: 0x220
	// Line 1203, Address: 0x3477d8, Func Offset: 0x228
	// Line 1210, Address: 0x347868, Func Offset: 0x2b8
	// Line 1212, Address: 0x347870, Func Offset: 0x2c0
	// Line 1213, Address: 0x347878, Func Offset: 0x2c8
	// Line 1215, Address: 0x347880, Func Offset: 0x2d0
	// Func End, Address: 0x347898, Func Offset: 0x2e8
}

// ParCmdExec_Texture__FP7xParCmdP10tagxParSysUi
// Start address: 0x3478a0
void ParCmdExec_Texture(xParCmd* cmd, tagxParSys* ps)
{
	float32 col;
	float32 row;
	float32 col;
	float32 row;
	float32 col;
	float32 row;
	float32 col;
	float32 row;
	xPar* p;
	tagParCmd_Texture* d;
	// Line 1012, Address: 0x3478a0, Func Offset: 0
	// Line 1016, Address: 0x3478bc, Func Offset: 0x1c
	// Line 1017, Address: 0x34795c, Func Offset: 0xbc
	// Line 1019, Address: 0x3479fc, Func Offset: 0x15c
	// Line 1022, Address: 0x347a00, Func Offset: 0x160
	// Line 1026, Address: 0x347a0c, Func Offset: 0x16c
	// Line 1028, Address: 0x347a18, Func Offset: 0x178
	// Line 1030, Address: 0x347a24, Func Offset: 0x184
	// Line 1031, Address: 0x347a30, Func Offset: 0x190
	// Line 1033, Address: 0x347a38, Func Offset: 0x198
	// Line 1036, Address: 0x347a40, Func Offset: 0x1a0
	// Line 1038, Address: 0x347a44, Func Offset: 0x1a4
	// Line 1040, Address: 0x347a54, Func Offset: 0x1b4
	// Line 1045, Address: 0x347a5c, Func Offset: 0x1bc
	// Line 1046, Address: 0x347a68, Func Offset: 0x1c8
	// Line 1047, Address: 0x347a7c, Func Offset: 0x1dc
	// Line 1050, Address: 0x347a80, Func Offset: 0x1e0
	// Line 1051, Address: 0x347aa8, Func Offset: 0x208
	// Line 1054, Address: 0x347ad0, Func Offset: 0x230
	// Line 1055, Address: 0x347ae4, Func Offset: 0x244
	// Line 1058, Address: 0x347af8, Func Offset: 0x258
	// Line 1059, Address: 0x347b1c, Func Offset: 0x27c
	// Line 1062, Address: 0x347b40, Func Offset: 0x2a0
	// Line 1063, Address: 0x347b48, Func Offset: 0x2a8
	// Line 1064, Address: 0x347b50, Func Offset: 0x2b0
	// Line 1065, Address: 0x347b58, Func Offset: 0x2b8
	// Line 1067, Address: 0x347b68, Func Offset: 0x2c8
	// Line 1071, Address: 0x347b70, Func Offset: 0x2d0
	// Line 1077, Address: 0x347c30, Func Offset: 0x390
	// Line 1078, Address: 0x347c3c, Func Offset: 0x39c
	// Line 1079, Address: 0x347c50, Func Offset: 0x3b0
	// Line 1082, Address: 0x347c58, Func Offset: 0x3b8
	// Line 1083, Address: 0x347c80, Func Offset: 0x3e0
	// Line 1086, Address: 0x347ca8, Func Offset: 0x408
	// Line 1087, Address: 0x347cbc, Func Offset: 0x41c
	// Line 1090, Address: 0x347cd0, Func Offset: 0x430
	// Line 1091, Address: 0x347cf4, Func Offset: 0x454
	// Line 1094, Address: 0x347d18, Func Offset: 0x478
	// Line 1095, Address: 0x347d20, Func Offset: 0x480
	// Line 1096, Address: 0x347d28, Func Offset: 0x488
	// Line 1097, Address: 0x347d30, Func Offset: 0x490
	// Line 1099, Address: 0x347d40, Func Offset: 0x4a0
	// Line 1104, Address: 0x347d48, Func Offset: 0x4a8
	// Line 1105, Address: 0x347d54, Func Offset: 0x4b4
	// Line 1107, Address: 0x347d68, Func Offset: 0x4c8
	// Line 1110, Address: 0x347d78, Func Offset: 0x4d8
	// Line 1111, Address: 0x347da0, Func Offset: 0x500
	// Line 1114, Address: 0x347dc8, Func Offset: 0x528
	// Line 1115, Address: 0x347ddc, Func Offset: 0x53c
	// Line 1118, Address: 0x347df0, Func Offset: 0x550
	// Line 1119, Address: 0x347e14, Func Offset: 0x574
	// Line 1122, Address: 0x347e38, Func Offset: 0x598
	// Line 1123, Address: 0x347e40, Func Offset: 0x5a0
	// Line 1124, Address: 0x347e48, Func Offset: 0x5a8
	// Line 1126, Address: 0x347e50, Func Offset: 0x5b0
	// Line 1128, Address: 0x347e60, Func Offset: 0x5c0
	// Line 1133, Address: 0x347e68, Func Offset: 0x5c8
	// Line 1134, Address: 0x347f10, Func Offset: 0x670
	// Line 1137, Address: 0x347f20, Func Offset: 0x680
	// Line 1138, Address: 0x347f48, Func Offset: 0x6a8
	// Line 1141, Address: 0x347f70, Func Offset: 0x6d0
	// Line 1142, Address: 0x347f84, Func Offset: 0x6e4
	// Line 1145, Address: 0x347f98, Func Offset: 0x6f8
	// Line 1146, Address: 0x347fbc, Func Offset: 0x71c
	// Line 1149, Address: 0x347fe0, Func Offset: 0x740
	// Line 1150, Address: 0x347fe8, Func Offset: 0x748
	// Line 1152, Address: 0x347ff0, Func Offset: 0x750
	// Func End, Address: 0x34800c, Func Offset: 0x76c
}

// ParCmdExecHelper_TextureBirth__FP7xParCmdP4xPar
// Start address: 0x348010
void ParCmdExecHelper_TextureBirth(xParCmd* cmd, xPar* p)
{
	float32 col;
	float32 row;
	tagParCmd_Texture* d;
	// Line 959, Address: 0x348010, Func Offset: 0
	// Line 963, Address: 0x348028, Func Offset: 0x18
	// Line 964, Address: 0x3480c8, Func Offset: 0xb8
	// Line 966, Address: 0x348168, Func Offset: 0x158
	// Line 968, Address: 0x34816c, Func Offset: 0x15c
	// Line 970, Address: 0x348178, Func Offset: 0x168
	// Line 972, Address: 0x348188, Func Offset: 0x178
	// Line 973, Address: 0x348230, Func Offset: 0x220
	// Line 974, Address: 0x348240, Func Offset: 0x230
	// Line 978, Address: 0x348248, Func Offset: 0x238
	// Line 980, Address: 0x3482e0, Func Offset: 0x2d0
	// Line 983, Address: 0x3482e8, Func Offset: 0x2d8
	// Line 987, Address: 0x3482f0, Func Offset: 0x2e0
	// Line 988, Address: 0x348318, Func Offset: 0x308
	// Line 991, Address: 0x348340, Func Offset: 0x330
	// Line 992, Address: 0x348354, Func Offset: 0x344
	// Line 995, Address: 0x348368, Func Offset: 0x358
	// Line 996, Address: 0x34838c, Func Offset: 0x37c
	// Line 998, Address: 0x3483b0, Func Offset: 0x3a0
	// Func End, Address: 0x3483c8, Func Offset: 0x3b8
}

// ParCmdExec_RotMove__FP7xParCmdP10tagxParSysUi
// Start address: 0x3483d0
void ParCmdExec_RotMove(xParCmd* cmd, tagxParSys* ps)
{
	xPar* p;
	tagParCmd_RotMove* d;
	// Line 923, Address: 0x3483d0, Func Offset: 0
	// Line 927, Address: 0x3483e8, Func Offset: 0x18
	// Line 928, Address: 0x348488, Func Offset: 0xb8
	// Line 930, Address: 0x348528, Func Offset: 0x158
	// Line 933, Address: 0x34852c, Func Offset: 0x15c
	// Line 934, Address: 0x348530, Func Offset: 0x160
	// Line 936, Address: 0x348538, Func Offset: 0x168
	// Line 937, Address: 0x348548, Func Offset: 0x178
	// Line 938, Address: 0x348558, Func Offset: 0x188
	// Line 940, Address: 0x348568, Func Offset: 0x198
	// Line 941, Address: 0x348570, Func Offset: 0x1a0
	// Line 942, Address: 0x348578, Func Offset: 0x1a8
	// Func End, Address: 0x348590, Func Offset: 0x1c0
}

// ParCmdExec_Accelerate__FP7xParCmdP10tagxParSysUi
// Start address: 0x348590
void ParCmdExec_Accelerate(xParCmd* cmd, tagxParSys* ps, uint32 dt)
{
	float32 daz;
	float32 day;
	float32 dax;
	xPar* p;
	tagParCmd_Accelerate* d;
	// Line 866, Address: 0x348590, Func Offset: 0
	// Line 871, Address: 0x3485b0, Func Offset: 0x20
	// Line 872, Address: 0x348650, Func Offset: 0xc0
	// Line 874, Address: 0x3486f0, Func Offset: 0x160
	// Line 876, Address: 0x3486f4, Func Offset: 0x164
	// Line 878, Address: 0x348700, Func Offset: 0x170
	// Line 879, Address: 0x34870c, Func Offset: 0x17c
	// Line 882, Address: 0x348720, Func Offset: 0x190
	// Line 885, Address: 0x348730, Func Offset: 0x1a0
	// Line 887, Address: 0x34873c, Func Offset: 0x1ac
	// Line 888, Address: 0x348740, Func Offset: 0x1b0
	// Line 889, Address: 0x348744, Func Offset: 0x1b4
	// Line 890, Address: 0x348748, Func Offset: 0x1b8
	// Line 893, Address: 0x348750, Func Offset: 0x1c0
	// Line 894, Address: 0x348790, Func Offset: 0x200
	// Line 895, Address: 0x3487d0, Func Offset: 0x240
	// Line 898, Address: 0x348810, Func Offset: 0x280
	// Line 899, Address: 0x348814, Func Offset: 0x284
	// Line 901, Address: 0x34881c, Func Offset: 0x28c
	// Line 902, Address: 0x348828, Func Offset: 0x298
	// Line 903, Address: 0x348834, Func Offset: 0x2a4
	// Line 905, Address: 0x348840, Func Offset: 0x2b0
	// Line 906, Address: 0x348848, Func Offset: 0x2b8
	// Line 907, Address: 0x348850, Func Offset: 0x2c0
	// Func End, Address: 0x34886c, Func Offset: 0x2dc
}

// ParCmdExec_Move__FP7xParCmdP10tagxParSysUi
// Start address: 0x348870
void ParCmdExec_Move(xParCmd* cmd, tagxParSys* ps, uint32 dt)
{
	float32 t;
	xPar* p;
	tagParCmd_Move* d;
	// Line 811, Address: 0x348870, Func Offset: 0
	// Line 816, Address: 0x348890, Func Offset: 0x20
	// Line 817, Address: 0x348930, Func Offset: 0xc0
	// Line 819, Address: 0x3489d0, Func Offset: 0x160
	// Line 821, Address: 0x3489d4, Func Offset: 0x164
	// Line 822, Address: 0x3489e0, Func Offset: 0x170
	// Line 824, Address: 0x3489f0, Func Offset: 0x180
	// Line 826, Address: 0x348a28, Func Offset: 0x1b8
	// Line 828, Address: 0x348a2c, Func Offset: 0x1bc
	// Line 830, Address: 0x348a34, Func Offset: 0x1c4
	// Line 832, Address: 0x348a40, Func Offset: 0x1d0
	// Line 834, Address: 0x348a50, Func Offset: 0x1e0
	// Line 835, Address: 0x348a54, Func Offset: 0x1e4
	// Line 839, Address: 0x348a5c, Func Offset: 0x1ec
	// Line 840, Address: 0x348a70, Func Offset: 0x200
	// Line 841, Address: 0x348a84, Func Offset: 0x214
	// Line 849, Address: 0x348a98, Func Offset: 0x228
	// Line 850, Address: 0x348aa0, Func Offset: 0x230
	// Line 851, Address: 0x348aa8, Func Offset: 0x238
	// Func End, Address: 0x348ac4, Func Offset: 0x254
}

// ParCmdExec_RandomDisplace__FP7xParCmdP10tagxParSysUi
// Start address: 0x348ad0
void ParCmdExec_RandomDisplace(xParCmd* cmd, tagxParSys* ps, uint32 dt)
{
	float32 t;
	xPar* p;
	tagParCmd_RandomDisplace* d;
	// Line 753, Address: 0x348ad0, Func Offset: 0
	// Line 759, Address: 0x348afc, Func Offset: 0x2c
	// Line 760, Address: 0x348b9c, Func Offset: 0xcc
	// Line 762, Address: 0x348c3c, Func Offset: 0x16c
	// Line 765, Address: 0x348c40, Func Offset: 0x170
	// Line 767, Address: 0x348c48, Func Offset: 0x178
	// Line 769, Address: 0x348c4c, Func Offset: 0x17c
	// Line 771, Address: 0x348c58, Func Offset: 0x188
	// Line 772, Address: 0x348c64, Func Offset: 0x194
	// Line 774, Address: 0x348c6c, Func Offset: 0x19c
	// Line 776, Address: 0x348c74, Func Offset: 0x1a4
	// Line 777, Address: 0x348c80, Func Offset: 0x1b0
	// Line 778, Address: 0x348c90, Func Offset: 0x1c0
	// Line 779, Address: 0x348ca0, Func Offset: 0x1d0
	// Line 781, Address: 0x348cbc, Func Offset: 0x1ec
	// Line 784, Address: 0x348cc4, Func Offset: 0x1f4
	// Line 787, Address: 0x348cd8, Func Offset: 0x208
	// Line 788, Address: 0x348d20, Func Offset: 0x250
	// Line 789, Address: 0x348d68, Func Offset: 0x298
	// Line 794, Address: 0x348db0, Func Offset: 0x2e0
	// Line 795, Address: 0x348db8, Func Offset: 0x2e8
	// Line 796, Address: 0x348dc0, Func Offset: 0x2f0
	// Func End, Address: 0x348de8, Func Offset: 0x318
}

// ParCmdExec_OrbitPoint__FP7xParCmdP10tagxParSysUi
// Start address: 0x348df0
void ParCmdExec_OrbitPoint(xParCmd* cmd, tagxParSys* ps, uint32 dt)
{
	float32 oorSqr;
	float32 rSqr;
	iActorRuntime* r;
	_xActor* a;
	int32 i;
	float32 mdt;
	float32 t;
	xPar* p;
	tagParCmd_OrbitPoint* d;
	// Line 662, Address: 0x348df0, Func Offset: 0
	// Line 670, Address: 0x348e28, Func Offset: 0x38
	// Line 671, Address: 0x348ec8, Func Offset: 0xd8
	// Line 674, Address: 0x348f68, Func Offset: 0x178
	// Line 677, Address: 0x348f6c, Func Offset: 0x17c
	// Line 679, Address: 0x348fa4, Func Offset: 0x1b4
	// Line 686, Address: 0x348fac, Func Offset: 0x1bc
	// Line 689, Address: 0x348fb8, Func Offset: 0x1c8
	// Line 690, Address: 0x348fc8, Func Offset: 0x1d8
	// Line 693, Address: 0x348fd0, Func Offset: 0x1e0
	// Line 696, Address: 0x348ffc, Func Offset: 0x20c
	// Line 697, Address: 0x349000, Func Offset: 0x210
	// Line 699, Address: 0x349008, Func Offset: 0x218
	// Line 700, Address: 0x349020, Func Offset: 0x230
	// Line 703, Address: 0x349044, Func Offset: 0x254
	// Line 704, Address: 0x349048, Func Offset: 0x258
	// Line 710, Address: 0x349050, Func Offset: 0x260
	// Line 711, Address: 0x34905c, Func Offset: 0x26c
	// Line 712, Address: 0x349068, Func Offset: 0x278
	// Line 716, Address: 0x349074, Func Offset: 0x284
	// Line 718, Address: 0x349084, Func Offset: 0x294
	// Line 720, Address: 0x349098, Func Offset: 0x2a8
	// Line 723, Address: 0x3490b4, Func Offset: 0x2c4
	// Line 724, Address: 0x3490c4, Func Offset: 0x2d4
	// Line 725, Address: 0x3490d4, Func Offset: 0x2e4
	// Line 726, Address: 0x3490e4, Func Offset: 0x2f4
	// Line 728, Address: 0x3490e8, Func Offset: 0x2f8
	// Line 729, Address: 0x3490f0, Func Offset: 0x300
	// Line 735, Address: 0x3490f8, Func Offset: 0x308
	// Line 739, Address: 0x34910c, Func Offset: 0x31c
	// Func End, Address: 0x349140, Func Offset: 0x350
}

// ParCmdExec_Turbulence__FP7xParCmdP10tagxParSysUi
// Start address: 0x349140
void ParCmdExec_Turbulence(xParCmd* cmd, tagxParSys* ps, uint32 dt)
{
	float32 zcos;
	float32 xsin;
	float32 ysin;
	float32 t;
	xPar* p;
	tagParCmd_Turbulence* d;
	// Line 592, Address: 0x349140, Func Offset: 0
	// Line 602, Address: 0x349168, Func Offset: 0x28
	// Line 603, Address: 0x349208, Func Offset: 0xc8
	// Line 606, Address: 0x3492a8, Func Offset: 0x168
	// Line 609, Address: 0x3492ac, Func Offset: 0x16c
	// Line 612, Address: 0x3492b4, Func Offset: 0x174
	// Line 613, Address: 0x3492c4, Func Offset: 0x184
	// Line 615, Address: 0x3492dc, Func Offset: 0x19c
	// Line 617, Address: 0x3492f0, Func Offset: 0x1b0
	// Line 621, Address: 0x349300, Func Offset: 0x1c0
	// Line 623, Address: 0x34930c, Func Offset: 0x1cc
	// Line 624, Address: 0x349354, Func Offset: 0x214
	// Line 625, Address: 0x34939c, Func Offset: 0x25c
	// Line 628, Address: 0x3493a4, Func Offset: 0x264
	// Line 629, Address: 0x3493ec, Func Offset: 0x2ac
	// Line 632, Address: 0x349434, Func Offset: 0x2f4
	// Line 634, Address: 0x349458, Func Offset: 0x318
	// Line 635, Address: 0x34945c, Func Offset: 0x31c
	// Line 640, Address: 0x349464, Func Offset: 0x324
	// Line 643, Address: 0x3494ac, Func Offset: 0x36c
	// Line 644, Address: 0x3494b8, Func Offset: 0x378
	// Line 645, Address: 0x3494c4, Func Offset: 0x384
	// Line 647, Address: 0x3494d0, Func Offset: 0x390
	// Line 648, Address: 0x3494d8, Func Offset: 0x398
	// Line 653, Address: 0x3494e0, Func Offset: 0x3a0
	// Func End, Address: 0x349504, Func Offset: 0x3c4
}

// ParCmdExec_Jet__FP7xParCmdP10tagxParSysUi
// Start address: 0x349510
void ParCmdExec_Jet(xParCmd* cmd, tagxParSys* ps, uint32 dt)
{
	float32 oorSqr;
	float32 rSqr;
	iActorRuntime* r;
	_xActor* a;
	int32 i;
	float32 mdt;
	float32 t;
	xPar* p;
	tagParCmd_Jet* d;
	// Line 504, Address: 0x349510, Func Offset: 0
	// Line 512, Address: 0x349544, Func Offset: 0x34
	// Line 513, Address: 0x3495e4, Func Offset: 0xd4
	// Line 516, Address: 0x349684, Func Offset: 0x174
	// Line 519, Address: 0x349688, Func Offset: 0x178
	// Line 521, Address: 0x3496c0, Func Offset: 0x1b0
	// Line 527, Address: 0x3496c8, Func Offset: 0x1b8
	// Line 530, Address: 0x3496d4, Func Offset: 0x1c4
	// Line 531, Address: 0x3496e4, Func Offset: 0x1d4
	// Line 534, Address: 0x3496ec, Func Offset: 0x1dc
	// Line 537, Address: 0x349718, Func Offset: 0x208
	// Line 538, Address: 0x34971c, Func Offset: 0x20c
	// Line 540, Address: 0x349724, Func Offset: 0x214
	// Line 541, Address: 0x34973c, Func Offset: 0x22c
	// Line 545, Address: 0x34974c, Func Offset: 0x23c
	// Line 546, Address: 0x349750, Func Offset: 0x240
	// Line 552, Address: 0x349758, Func Offset: 0x248
	// Line 553, Address: 0x349764, Func Offset: 0x254
	// Line 554, Address: 0x349770, Func Offset: 0x260
	// Line 558, Address: 0x34977c, Func Offset: 0x26c
	// Line 560, Address: 0x34978c, Func Offset: 0x27c
	// Line 563, Address: 0x3497a0, Func Offset: 0x290
	// Line 566, Address: 0x3497c0, Func Offset: 0x2b0
	// Line 567, Address: 0x3497fc, Func Offset: 0x2ec
	// Line 570, Address: 0x349838, Func Offset: 0x328
	// Line 571, Address: 0x349850, Func Offset: 0x340
	// Line 572, Address: 0x349864, Func Offset: 0x354
	// Line 573, Address: 0x34987c, Func Offset: 0x36c
	// Line 575, Address: 0x349880, Func Offset: 0x370
	// Line 576, Address: 0x349888, Func Offset: 0x378
	// Line 581, Address: 0x349890, Func Offset: 0x380
	// Line 584, Address: 0x3498a4, Func Offset: 0x394
	// Func End, Address: 0x3498d4, Func Offset: 0x3c4
}

// ParCmdExec_Friction__FP7xParCmdP10tagxParSysUi
// Start address: 0x3498e0
void ParCmdExec_Friction(xParCmd* cmd, tagxParSys* ps, uint32 dt)
{
	float32 t;
	xPar* p;
	tagParCmd_Friction* d;
	// Line 435, Address: 0x3498e0, Func Offset: 0
	// Line 441, Address: 0x349900, Func Offset: 0x20
	// Line 442, Address: 0x3499a0, Func Offset: 0xc0
	// Line 445, Address: 0x349a40, Func Offset: 0x160
	// Line 448, Address: 0x349a44, Func Offset: 0x164
	// Line 450, Address: 0x349a4c, Func Offset: 0x16c
	// Line 451, Address: 0x349a8c, Func Offset: 0x1ac
	// Line 452, Address: 0x349acc, Func Offset: 0x1ec
	// Line 454, Address: 0x349b0c, Func Offset: 0x22c
	// Line 455, Address: 0x349b10, Func Offset: 0x230
	// Line 457, Address: 0x349b18, Func Offset: 0x238
	// Line 459, Address: 0x349b30, Func Offset: 0x250
	// Line 460, Address: 0x349b44, Func Offset: 0x264
	// Line 461, Address: 0x349b58, Func Offset: 0x278
	// Line 462, Address: 0x349b70, Func Offset: 0x290
	// Line 464, Address: 0x349b84, Func Offset: 0x2a4
	// Line 465, Address: 0x349b88, Func Offset: 0x2a8
	// Line 466, Address: 0x349b90, Func Offset: 0x2b0
	// Line 468, Address: 0x349ba8, Func Offset: 0x2c8
	// Line 469, Address: 0x349bbc, Func Offset: 0x2dc
	// Line 470, Address: 0x349bd0, Func Offset: 0x2f0
	// Line 471, Address: 0x349be8, Func Offset: 0x308
	// Line 473, Address: 0x349bfc, Func Offset: 0x31c
	// Line 474, Address: 0x349c00, Func Offset: 0x320
	// Line 475, Address: 0x349c08, Func Offset: 0x328
	// Line 477, Address: 0x349c20, Func Offset: 0x340
	// Line 478, Address: 0x349c34, Func Offset: 0x354
	// Line 479, Address: 0x349c48, Func Offset: 0x368
	// Line 480, Address: 0x349c60, Func Offset: 0x380
	// Line 482, Address: 0x349c74, Func Offset: 0x394
	// Line 485, Address: 0x349c78, Func Offset: 0x398
	// Line 486, Address: 0x349c80, Func Offset: 0x3a0
	// Line 487, Address: 0x349c88, Func Offset: 0x3a8
	// Func End, Address: 0x349ca4, Func Offset: 0x3c4
}

// ParCmdExec_Bounce__FP7xParCmdP10tagxParSysUi
// Start address: 0x349cb0
void ParCmdExec_Bounce(xParCmd* cmd, tagxParSys* ps)
{
	float32 zow;
	float32 xow;
	uint32 zbit;
	uint32 xbit;
	int16 plane;
	tagiFloor* f;
	xPar* p;
	tagParCmd_Bounce* d;
	// Line 225, Address: 0x349cb0, Func Offset: 0
	// Line 237, Address: 0x349cd8, Func Offset: 0x28
	// Line 238, Address: 0x349d78, Func Offset: 0xc8
	// Line 240, Address: 0x349e18, Func Offset: 0x168
	// Line 241, Address: 0x349e1c, Func Offset: 0x16c
	// Line 244, Address: 0x349e20, Func Offset: 0x170
	// Line 247, Address: 0x349e28, Func Offset: 0x178
	// Line 248, Address: 0x349e38, Func Offset: 0x188
	// Line 251, Address: 0x349e54, Func Offset: 0x1a4
	// Line 259, Address: 0x349e5c, Func Offset: 0x1ac
	// Line 260, Address: 0x349e78, Func Offset: 0x1c8
	// Line 262, Address: 0x349e90, Func Offset: 0x1e0
	// Line 263, Address: 0x349ea0, Func Offset: 0x1f0
	// Line 265, Address: 0x349eb0, Func Offset: 0x200
	// Line 267, Address: 0x349edc, Func Offset: 0x22c
	// Line 269, Address: 0x349f08, Func Offset: 0x258
	// Line 270, Address: 0x349f0c, Func Offset: 0x25c
	// Line 271, Address: 0x349f44, Func Offset: 0x294
	// Line 273, Address: 0x349f50, Func Offset: 0x2a0
	// Line 275, Address: 0x349f58, Func Offset: 0x2a8
	// Line 280, Address: 0x349f8c, Func Offset: 0x2dc
	// Line 283, Address: 0x349f9c, Func Offset: 0x2ec
	// Line 294, Address: 0x349fa8, Func Offset: 0x2f8
	// Line 297, Address: 0x349fec, Func Offset: 0x33c
	// Line 298, Address: 0x349ff0, Func Offset: 0x340
	// Line 299, Address: 0x349ffc, Func Offset: 0x34c
	// Line 302, Address: 0x34a008, Func Offset: 0x358
	// Line 304, Address: 0x34a028, Func Offset: 0x378
	// Line 305, Address: 0x34a044, Func Offset: 0x394
	// Line 306, Address: 0x34a088, Func Offset: 0x3d8
	// Line 307, Address: 0x34a08c, Func Offset: 0x3dc
	// Line 309, Address: 0x34a090, Func Offset: 0x3e0
	// Line 311, Address: 0x34a0b0, Func Offset: 0x400
	// Line 312, Address: 0x34a0cc, Func Offset: 0x41c
	// Line 314, Address: 0x34a0d0, Func Offset: 0x420
	// Line 316, Address: 0x34a0f0, Func Offset: 0x440
	// Line 317, Address: 0x34a10c, Func Offset: 0x45c
	// Line 318, Address: 0x34a150, Func Offset: 0x4a0
	// Line 339, Address: 0x34a154, Func Offset: 0x4a4
	// Line 342, Address: 0x34a158, Func Offset: 0x4a8
	// Line 343, Address: 0x34a160, Func Offset: 0x4b0
	// Line 419, Address: 0x34a168, Func Offset: 0x4b8
	// Func End, Address: 0x34a190, Func Offset: 0x4e0
}

// ParCmdExec_LimitVelocity__FP7xParCmdP10tagxParSysUi
// Start address: 0x34a190
void ParCmdExec_LimitVelocity(xParCmd* cmd, tagxParSys* ps)
{
	float32 mz;
	float32 my;
	float32 mx;
	xPar* p;
	tagParCmd_LimitVelocity* d;
	// Line 111, Address: 0x34a190, Func Offset: 0
	// Line 116, Address: 0x34a1a8, Func Offset: 0x18
	// Line 117, Address: 0x34a248, Func Offset: 0xb8
	// Line 119, Address: 0x34a2e8, Func Offset: 0x158
	// Line 121, Address: 0x34a2ec, Func Offset: 0x15c
	// Line 123, Address: 0x34a2f0, Func Offset: 0x160
	// Line 124, Address: 0x34a2f4, Func Offset: 0x164
	// Line 125, Address: 0x34a2f8, Func Offset: 0x168
	// Line 127, Address: 0x34a2fc, Func Offset: 0x16c
	// Line 129, Address: 0x34a304, Func Offset: 0x174
	// Line 130, Address: 0x34a318, Func Offset: 0x188
	// Line 132, Address: 0x34a320, Func Offset: 0x190
	// Line 133, Address: 0x34a334, Func Offset: 0x1a4
	// Line 135, Address: 0x34a338, Func Offset: 0x1a8
	// Line 136, Address: 0x34a34c, Func Offset: 0x1bc
	// Line 139, Address: 0x34a350, Func Offset: 0x1c0
	// Line 140, Address: 0x34a358, Func Offset: 0x1c8
	// Line 141, Address: 0x34a360, Func Offset: 0x1d0
	// Func End, Address: 0x34a378, Func Offset: 0x1e8
}

