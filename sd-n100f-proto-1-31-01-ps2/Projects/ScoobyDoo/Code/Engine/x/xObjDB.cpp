typedef struct tagXStreamMDSDirectory;
typedef struct iObjRuntime;
typedef struct _rxHeapSuperBlockDescriptor;
typedef struct _rwResEntryTag;
typedef struct iConditionResource;
typedef struct xTrigger;
typedef struct _RxHeap;
typedef struct iTriggerResource;
typedef struct _rxHeapBlockHeader;
typedef struct tagP2VERTEX;
typedef struct iConditionRuntime;
typedef struct tagXAnim;
typedef struct _RpCollSector;
typedef enum _RxClusterValidityReq;
typedef struct _rxHeapFreeBlock;
typedef struct _RxPipelineNodeTopSortData;
typedef struct tagiAnimResource;
typedef struct _RpSector;
typedef struct xRule;
typedef struct tagP2MeshVertex;
typedef struct _xActor;
typedef struct _RxPipelineNode;
typedef struct xEntryPoint;
typedef struct _xObj;
typedef struct _RxClusterDefinition;
typedef struct tagiAnimRuntime;
typedef struct tagP2Weight;
typedef enum _RwTextureFilterMode;
typedef struct _RxPipelineNodeParam;
typedef struct _RxPipelineCluster;
typedef struct tagxStateLink;
typedef struct iEntryPointResource;
typedef enum _rxEmbeddedPacketState;
typedef struct tagiFloorTri;
typedef struct _RwLLLink;
typedef struct iRuleResource;
typedef struct _iEntryPointRuntime;
typedef struct tagxActorDBData;
typedef struct _iTexResource;
typedef struct xScene;
typedef struct _p2Geom;
typedef struct _RxNodeDefinition;
typedef enum _RxClusterValid;
typedef struct _RpMaterialList;
typedef struct _iRenderEffects;
typedef struct _RwSurfaceProperties;
typedef struct _FCinfo;
typedef struct _RpMaterial;
typedef struct XStreamHeader;
typedef struct _RpWorldSector;
typedef struct tagXAnimTrigger;
typedef struct Vector3D;
typedef struct _xModel;
typedef struct _RpClump;
typedef struct xCamera;
typedef struct _RwV3d;
typedef struct xLight;
typedef struct tagxStateThread;
typedef struct Vector4D;
typedef struct _RpPolygon;
typedef struct _RxPipeline;
typedef struct iLightResource;
typedef struct tagxState;
typedef struct xMarker;
typedef struct p2Camera;
typedef struct _RxPipelineRequiresCluster;
typedef struct tagiFloor;
typedef struct tagxObjDBData;
typedef struct _iLightRuntime;
typedef struct tagXAnimControl;
typedef struct tagiMesh;
typedef struct _RpVertexNormal;
typedef struct _RwTexCoords;
typedef struct xAction;
typedef struct _RwTexDictionary;
typedef struct iActorRuntime;
typedef struct _rxReq;
typedef struct _RwRGBA;
typedef struct tagxStateMgr;
typedef struct iMarkerResource;
typedef struct tagXStreamDirectoryEntry;
typedef struct _RwObject;
typedef struct tagiModelResource;
typedef struct xCondition;
typedef struct xNavPoint;
typedef struct p2CameraVersion;
typedef struct _RxOutputSpec;
typedef struct _iVFXResource;
typedef struct tagP2Mesh;
typedef struct tagxPhysicsObject;
typedef struct _iTexRuntime;
typedef struct tagiAnimFrame;
typedef struct _tagiEnvRuntime;
typedef struct _RpMeshHeader;
typedef struct _RwBBox;
typedef struct _RwTexture;
typedef struct _RxClusterRef;
typedef struct xNavLink;
typedef struct _RpWorld;
typedef struct _RwRaster;
typedef struct _iSFXResource;
typedef struct tagiModelRuntime;
typedef struct _RxIoSpec;
typedef struct iCameraResource;
typedef struct _xTex;
typedef struct _RxNodeMethods;
typedef enum _RxClusterForcePresent;
typedef struct _RxPacket;
typedef enum _RxNodeDefEditable;
typedef struct iActionRuntime;
typedef struct _RxClusterUnion;
typedef enum _rpWorldRenderOrder;
typedef enum _RwTextureAddressMode;
typedef struct _RxCluster;
typedef struct _RwLinkList;
typedef struct iActionResource;
typedef struct _tagxEnv;
typedef struct _PVRheader;
typedef struct iDisplayCamera;
typedef struct tagxPadAction;

typedef void(*type_0)(int32, int32, int32, int32);
typedef int32(*type_1)(int32);
typedef int32(*type_8)(int32);
typedef void(*type_9)(int32, int32, int32, int32, int32, int32, int32);
typedef void(*type_11)(_rwResEntryTag*);
typedef void(*type_13)(int32, int32, int32, int32);
typedef int32(*type_15)(int32);
typedef int32(*type_17)(_RxPipelineNode*, _RxPipelineNodeParam*);
typedef void(*type_19)(int32, int32, int32, int32);
typedef void(*type_20)(int32, int32);
typedef int32(*type_23)(int32);
typedef int32(*type_24)(_RxNodeDefinition*);
typedef void(*type_29)(int32, int32);
typedef int32(*type_30)(int32);
typedef void(*type_31)(_RxNodeDefinition*);
typedef _RpWorldSector*(*type_35)(_RpWorldSector*);
typedef void(*type_37)(int32, int32);
typedef int32(*type_38)(_RxPipelineNode*);
typedef void(*type_42)(_RxPipelineNode*);
typedef int32(*type_43)(int32, int32);
typedef _RpClump*(*type_44)(_RpClump*, void*);
typedef int32(*type_46)(int32, int32);
typedef void(*type_50)(int32, int32, int32, int32, int32);
typedef int32(*type_51)(int32, int32);
typedef int32(*type_53)(_RxPipelineNode*, _RxPipeline*);
typedef int32(*type_54)(int32, int32, int32);
typedef int32(*type_59)(int32, int32);
typedef int32(*type_63)(int32, int32, int32, int32);
typedef uint32(*type_64)(_RxPipelineNode*, uint32, uint32, void*);
typedef void(*type_68)(int32, int32, int32, int32);
typedef int32(*type_70)(int32, int32, int32);
typedef void(*type_73)(int32, int32);
typedef int32(*type_76)(int32, int32);
typedef void(*type_77)(_xActor*, int32, tagXAnim*, tagXAnimTrigger*);
typedef int32(*type_83)(int32, int32);
typedef void(*type_91)(int32, int32, int32, int32, int32);
typedef int32(*type_94)(int32, int32, int32, int32);
typedef void(*type_96)(int32, int32);
typedef void(*type_98)(int32);
typedef void(*type_100)(int32, int32);
typedef int32(*type_106)(int32, int32, int32);
typedef void(*type_107)(int32, int32, int32, int32);
typedef int32(*type_108)(int32);
typedef void(*type_114)(int32, int32, int32);
typedef void(*type_116)(int32, int32, int32);
typedef void(*type_117)(int32, int32, int32);
typedef void(*type_121)(int32, int32);
typedef void(*type_123)(int32, int32);
typedef int32(*type_125)(int32);
typedef void(*type_126)(int32, int32, int32, int32, int32, int32, int32);

typedef _xActor type_2[4];
typedef iTriggerResource* type_3[20];
typedef Vector3D type_4[5];
typedef Vector3D type_5[4];
typedef tagXStreamDirectoryEntry type_6[1000];
typedef _xActor type_7[1];
typedef _xActor type_10[1];
typedef iTriggerResource* type_12[20];
typedef _xActor* type_14[40];
typedef int8 type_16[40];
typedef iTriggerResource* type_18[20];
typedef _xActor* type_21[13];
typedef uint16 type_22[3];
typedef _xActor type_25[1];
typedef iTriggerResource* type_26[20];
typedef uint32 type_27[3];
typedef _xActor type_28[4];
typedef _xActor type_32[4];
typedef iTriggerResource* type_33[20];
typedef _xActor type_34[1];
typedef uint32 type_36[4];
typedef _xActor type_39[4];
typedef iTriggerResource* type_40[20];
typedef _xActor type_41[4];
typedef _xActor type_45[4];
typedef _xObj type_47[32];
typedef iTriggerResource* type_48[20];
typedef _xActor type_49[4];
typedef _xActor type_52[1];
typedef iTriggerResource* type_55[20];
typedef tagxState* type_56[10];
typedef _xActor type_57[4];
typedef int8 type_58[2048];
typedef _xActor type_60[4];
typedef iTriggerResource* type_61[20];
typedef _xActor type_62[4];
typedef _xActor type_65[1];
typedef float32 type_66[3];
typedef iTriggerResource* type_67[20];
typedef _xActor type_69[1];
typedef _xActor type_71[1];
typedef _xActor type_72[1];
typedef _RxCluster type_74[1];
typedef _xActor type_75[1];
typedef iLightResource type_78[2];
typedef _xActor type_79[1];
typedef uint8 type_80[3];
typedef _xActor type_81[1];
typedef int8 type_82[32];
typedef int8 type_84[32];
typedef _xActor type_85[1];
typedef _xActor type_86[4];
typedef uint8 type_87[4];
typedef uint8 type_88[4];
typedef _xActor type_89[4];
typedef int8 type_90[128];
typedef uint8 type_92[4];
typedef _xActor type_93[4];
typedef _xActor type_95[1];
typedef int32 type_97[7];
typedef _xActor type_99[1];
typedef tagxStateThread type_101[7];
typedef _xActor type_102[1];
typedef Vector3D type_103[4];
typedef p2CameraVersion type_104[5];
typedef _xActor type_105[4];
typedef uint8 type_109[4];
typedef _xActor type_110[1];
typedef _xActor type_111[4];
typedef uint8 type_112[3];
typedef uint16 type_113[3];
typedef _xActor type_115[4];
typedef uint16 type_118[3];
typedef _xActor type_119[2];
typedef _xActor type_120[1];
typedef iTriggerResource* type_122[20];
typedef _xActor type_124[1];
typedef _xActor type_127[1];
typedef iTriggerResource* type_128[20];
typedef _xActor type_129[4];

struct tagXStreamMDSDirectory
{
	uint32 count;
	tagXStreamDirectoryEntry directory[1000];
};

struct iObjRuntime
{
	int16 m_flag;
	int16 m_pad;
	_p2Geom* m_geom;
	float32 m_bradius;
	tagxPhysicsObject m_phys;
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

struct xTrigger
{
	iTriggerResource* m_resource;
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

struct _rxHeapBlockHeader
{
	_rxHeapBlockHeader* prev;
	_rxHeapBlockHeader* next;
	uint32 size;
	_rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
};

struct tagP2VERTEX
{
	float32 x;
	float32 y;
	float32 z;
	float32 tu;
	float32 tv;
};

struct iConditionRuntime
{
	xCondition* m_operand;
	uint16 m_match;
	uint16 m_trigger;
};

struct tagXAnim
{
	tagiAnimResource* m_resource;
	tagiAnimRuntime* m_runtime;
};

struct _RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
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

struct xRule
{
	iRuleResource* m_resource;
	void* m_runtime;
};

struct tagP2MeshVertex
{
	float32 m_x;
	float32 m_y;
	float32 m_z;
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

struct xEntryPoint
{
	iEntryPointResource* m_resource;
	_iEntryPointRuntime* m_runtime;
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

struct _RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
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

enum _rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

struct tagiFloorTri
{
	uint16 m_v[3];
	uint16 m_n;
};

struct _RwLLLink
{
	_RwLLLink* next;
	_RwLLLink* prev;
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

struct _iTexResource
{
	uint32 m_assetID;
	uint32 pad[3];
	_PVRheader header;
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

struct _p2Geom
{
	uint32 m_meshCount;
	tagP2Mesh* m_mesh;
	_iRenderEffects effects;
	_RpClump* m_clump;
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

struct _RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
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

struct _xModel
{
	tagiModelResource* m_resource;
	tagiModelRuntime* m_runtime;
};

struct _RpClump
{
	_RwObject object;
	_RwLinkList atomicList;
	_RwLLLink inWorldLink;
	_RpClump*(*callback)(_RpClump*, void*);
	uint16 renderFrame;
};

struct xCamera
{
	iCameraResource* m_resource;
	void** m_runtime;
};

struct _RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct xLight
{
	iLightResource* m_resource;
	_iLightRuntime* m_runtime;
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

struct _RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
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

struct iLightResource
{
	uint32 m_type;
	Vector3D m_pos;
	Vector3D m_rot;
	Vector3D m_color;
	int32 m_fov;
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

struct xMarker
{
	iMarkerResource* m_resource;
	void** m_runtime;
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

struct tagxObjDBData
{
	_xObj m_o[32];
	int32 m_staticObjects;
	int32 m_staticAssets;
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

struct _RwTexCoords
{
	float32 u;
	float32 v;
};

struct xAction
{
	iActionResource* m_resource;
	iActionRuntime* m_runtime;
};

struct _RwTexDictionary
{
	_RwObject object;
	_RwLinkList texturesInDict;
	_RwLLLink lInInstance;
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

struct _rxReq
{
};

struct _RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
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

struct iMarkerResource
{
	Vector3D m_pos;
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

struct tagiModelResource
{
	uint32 m_assetID;
	int32 m_meshCount;
	tagP2Mesh* m_mesh;
};

struct xCondition
{
	iConditionResource* m_resource;
	iConditionRuntime* m_runtime;
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

struct _iTexRuntime
{
	void* surface;
	uint32 m_flags;
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

struct _tagiEnvRuntime
{
	_RpWorld* world;
	Vector3D world_origin;
	_RwTexDictionary* tex_dict;
};

struct _RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
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

struct tagiModelRuntime
{
	int32 placeholder;
};

struct _RxIoSpec
{
	uint32 numClustersOfInterest;
	_RxClusterRef* clustersOfInterest;
	_RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	_RxOutputSpec* outputs;
};

struct iCameraResource
{
	uint16 m_plateOffset;
	uint16 m_versions;
	p2CameraVersion m_version[5];
	uint32 m_frameCount;
	p2Camera* m_cameras;
};

struct _xTex
{
	_iTexResource* m_resource;
	_iTexRuntime* m_runtime;
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

enum _RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct iActionRuntime
{
	xAction* m_and;
};

struct _RxClusterUnion
{
	union
	{
		_RxClusterDefinition* clusterDef;
		_RxPipelineCluster* clusterRef;
	};
};

enum _rpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
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

struct _tagxEnv
{
	_tagiEnvRuntime* m_runtime;
};

struct _PVRheader
{
	uint32 id;
	uint32 nTextureDataSize;
	uint32 nTextureType;
	uint16 nWidth;
	uint16 nHeight;
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

tagxObjDBData gObjDBData;
tagxObjDBData* godb;
uint32 interpreterMethod;
int8 vAssertBuf2[128];
XStreamHeader currentHeader;
float32 g_DEGTORAD;
tagxActorDBData* gadb;
xScene* xScene_current;
float32 g_RADTODEG;
float32 g_PI_DIV_2;
int32 g_RTObjModelCount;
void(*objEffectSetFlag)(int32, int32, int32, int32);
void(*objEffectReflect)(int32, int32, int32, int32, int32, int32, int32);
int32(*objEffectFadeDone)(int32);
void(*objEffectFadeStart)(int32, int32, int32);
void(*objEffectFadeInfo)(int32, int32, int32, int32, int32, int32, int32);
void(*xObjDBEventSendAll)(int32, int32, int32, int32, int32);
void(*objSetCollisionFlags)(int32, int32);
void(*objFace)(int32, int32);
void(*objTurn)(int32, int32);
int32(*objIsVisible)(int32, int32, int32);
int32(*objInFOV)(int32, int32, int32);
int32(*objInTrigger)(int32, int32);
int32(*objIsFacingActor)(int32, int32, int32, int32);
int32(*objGetFlags)(int32);
int32(*objGetRotY)(int32);
int32(*objGetPositionZ)(int32);
int32(*objGetPositionY)(int32);
int32(*objGetPositionX)(int32);
int32(*objGetAngle)(int32);
int32(*objMoveForward)(int32, int32);
int32(*objMoveStrafe)(int32, int32);
void(*objFaceActor)(int32, int32, int32);
int32(*objDistanceToActor)(int32, int32, int32);
void(*objDestroy)(int32);
void(*objSetType)(int32, int32);
void(*objSetTexture)(int32, int32);
void(*objSetup)(int32, int32, int32, int32, int32);
int32(*objCreate)(int32, int32, int32, int32);
void(*objSetBRadius)(int32, int32);
void(*objTranslatePosition)(int32, int32, int32, int32);
void(*objSetPosition)(int32, int32, int32, int32);
void(*objSetPositionNavigationPoint)(int32, int32);
void(*objSetPositionMarker)(int32, int32, int32);
void(*objSetPositionActor)(int32, int32, int32, int32);
void(*objSetOrientation)(int32, int32, int32, int32);
void(*objSetVisible)(int32, int32);
int32(*objFlagsSet)(int32, int32);
int32(*objFlagsSub)(int32, int32);
int32(*objFlagsAdd)(int32, int32);

void objSetCollisionFlags(int32 objID, int32 flags);
void objFace(int32 objID, int32 degrees);
void objTurn(int32 objID, int32 degDelta);
int32 objIsVisible(int32 objID, int32 targetActorID);
int32 objInFOV(int32 objID, int32 targetObjectType, int32 targetActorID);
int32 objInTrigger(int32 objID, int32 triggerID);
int32 objIsFacingActor(int32 objID, int32 targetActorID, int32 delta);
int32 objGetAngle(int32 objID);
int32 objMoveForward(int32 objID, int32 amount);
int32 objMoveStrafe(int32 objID, int32 amount);
void objFaceActor(int32 objID, int32 targetActorID);
int32 objDistanceToActor(int32 objID, int32 targetActorID);
void objSetTexture(int32 objID, int32 textureID);
void objSetType(int32 objID, int32 objType);
void objDestroy(int32 objID);
void objSetup(int32 objID, int32 objType, int32 modelID, int32 skeletonID, int32 textureID);
int32 objCreate(int32 objType, int32 modelID, int32 skeletonID, int32 textureID);
void objSetBRadius(int32 objID, int32 bradius);
void objTranslatePosition(int32 objID, int32 x, int32 y, int32 z);
int32 objGetFlags(int32 id);
int32 objGetRotY(int32 id);
int32 objGetPositionZ(int32 id);
int32 objGetPositionY(int32 id);
int32 objGetPositionX(int32 id);
void objSetPosition(int32 objID, int32 x, int32 y, int32 z);
void objSetPositionNavigationPoint(int32 objID, int32 navID);
void objSetPositionMarker(int32 objID, int32 markerID, int32 mapToFloor);
void objSetPositionActor(int32 objID, int32 toObjectType, int32 toActorID, int32 smartDrop);
void objSetOrientation(int32 objID, int32 x, int32 y, int32 z);
void objSetVisible(int32 id, int32 visible);
void xObjDBSetPositionActor(int32 objID, int32 toActorType, int32 toActorID, int32 smartDrop);
void xObjDBIdle();
void xObjDBEventSendAll();
void xObjDBSetup(int32 objectType, int32 id, uint32 modelID, uint32 textureID);
void xObjDBDraw();
void xObjDBSetLevelReset();
void xObjDBLevelReset();
void xObjDBReInitializeInterpreter();
void objEffectSetFlag(int32 objID, int32 flag, int32 mode);
void objEffectReflect(int32 objID, int32 mode, int32 r, int32 g, int32 b);
void objEffectFadeInfo(int32 objID, int32 r, int32 g, int32 b, int32 mode, int32 idx);
void objEffectFadeStart(int32 objID, int32 flag, int32 time);
int32 objEffectFadeDone(int32 objID);
_iRenderEffects* objGetRenderEffectsPtr(int32 objID);
int32 objFlagsSet(int32 objID, int32 flags);
int32 objFlagsSub(int32 objID, int32 flags);
int32 objFlagsAdd(int32 objID, int32 flags);
void xObjDBInitialize();

// objSetCollisionFlags__Fii
// Start address: 0x34daa0
void objSetCollisionFlags(int32 objID, int32 flags)
{
	iObjRuntime* r;
	_xObj* a;
	// Line 1488, Address: 0x34daa0, Func Offset: 0
	// Line 1493, Address: 0x34dab8, Func Offset: 0x18
	// Line 1494, Address: 0x34db58, Func Offset: 0xb8
	// Line 1496, Address: 0x34dbfc, Func Offset: 0x15c
	// Line 1497, Address: 0x34dc10, Func Offset: 0x170
	// Line 1499, Address: 0x34dcb0, Func Offset: 0x210
	// Line 1500, Address: 0x34dcb4, Func Offset: 0x214
	// Line 1502, Address: 0x34dd54, Func Offset: 0x2b4
	// Line 1503, Address: 0x34dd58, Func Offset: 0x2b8
	// Func End, Address: 0x34dd70, Func Offset: 0x2d0
}

// objFace__Fii
// Start address: 0x34dd70
void objFace(int32 objID, int32 degrees)
{
	iObjRuntime* r;
	_xObj* a;
	// Line 1470, Address: 0x34dd70, Func Offset: 0
	// Line 1475, Address: 0x34dd88, Func Offset: 0x18
	// Line 1476, Address: 0x34de28, Func Offset: 0xb8
	// Line 1478, Address: 0x34decc, Func Offset: 0x15c
	// Line 1479, Address: 0x34dee0, Func Offset: 0x170
	// Line 1481, Address: 0x34df80, Func Offset: 0x210
	// Line 1482, Address: 0x34df84, Func Offset: 0x214
	// Line 1484, Address: 0x34e024, Func Offset: 0x2b4
	// Line 1485, Address: 0x34e040, Func Offset: 0x2d0
	// Func End, Address: 0x34e058, Func Offset: 0x2e8
}

// objTurn__Fii
// Start address: 0x34e060
void objTurn(int32 objID, int32 degDelta)
{
	iObjRuntime* r;
	_xObj* a;
	// Line 1452, Address: 0x34e060, Func Offset: 0
	// Line 1457, Address: 0x34e078, Func Offset: 0x18
	// Line 1458, Address: 0x34e118, Func Offset: 0xb8
	// Line 1460, Address: 0x34e1bc, Func Offset: 0x15c
	// Line 1461, Address: 0x34e1d0, Func Offset: 0x170
	// Line 1463, Address: 0x34e270, Func Offset: 0x210
	// Line 1464, Address: 0x34e274, Func Offset: 0x214
	// Line 1466, Address: 0x34e314, Func Offset: 0x2b4
	// Line 1467, Address: 0x34e338, Func Offset: 0x2d8
	// Func End, Address: 0x34e350, Func Offset: 0x2f0
}

// objIsVisible__Fiii
// Start address: 0x34e350
int32 objIsVisible(int32 objID, int32 targetActorID)
{
	iObjRuntime* br;
	_xObj* b;
	iObjRuntime* ar;
	_xObj* a;
	// Line 1423, Address: 0x34e350, Func Offset: 0
	// Line 1429, Address: 0x34e368, Func Offset: 0x18
	// Line 1430, Address: 0x34e408, Func Offset: 0xb8
	// Line 1431, Address: 0x34e4ac, Func Offset: 0x15c
	// Line 1432, Address: 0x34e54c, Func Offset: 0x1fc
	// Line 1434, Address: 0x34e5f0, Func Offset: 0x2a0
	// Line 1435, Address: 0x34e604, Func Offset: 0x2b4
	// Line 1437, Address: 0x34e6a4, Func Offset: 0x354
	// Line 1438, Address: 0x34e6a8, Func Offset: 0x358
	// Line 1440, Address: 0x34e748, Func Offset: 0x3f8
	// Line 1441, Address: 0x34e75c, Func Offset: 0x40c
	// Line 1443, Address: 0x34e7fc, Func Offset: 0x4ac
	// Line 1444, Address: 0x34e800, Func Offset: 0x4b0
	// Line 1448, Address: 0x34e8a0, Func Offset: 0x550
	// Line 1449, Address: 0x34e8b0, Func Offset: 0x560
	// Func End, Address: 0x34e8c8, Func Offset: 0x578
}

// objInFOV__Fiii
// Start address: 0x34e8d0
int32 objInFOV(int32 objID, int32 targetObjectType, int32 targetActorID)
{
	_xObj* b;
	_xActor* a;
	// Line 1402, Address: 0x34e8d0, Func Offset: 0
	// Line 1406, Address: 0x34e8f0, Func Offset: 0x20
	// Line 1407, Address: 0x34e990, Func Offset: 0xc0
	// Line 1408, Address: 0x34ea34, Func Offset: 0x164
	// Line 1409, Address: 0x34ead4, Func Offset: 0x204
	// Line 1411, Address: 0x34eb78, Func Offset: 0x2a8
	// Line 1412, Address: 0x34eb8c, Func Offset: 0x2bc
	// Line 1414, Address: 0x34ec2c, Func Offset: 0x35c
	// Line 1415, Address: 0x34ec4c, Func Offset: 0x37c
	// Line 1419, Address: 0x34ecec, Func Offset: 0x41c
	// Line 1420, Address: 0x34ecf0, Func Offset: 0x420
	// Func End, Address: 0x34ed0c, Func Offset: 0x43c
}

// objInTrigger__Fii
// Start address: 0x34ed10
int32 objInTrigger(int32 objID, int32 triggerID)
{
	iObjRuntime* r;
	_xObj* a;
	// Line 1380, Address: 0x34ed10, Func Offset: 0
	// Line 1384, Address: 0x34ed28, Func Offset: 0x18
	// Line 1385, Address: 0x34edc8, Func Offset: 0xb8
	// Line 1387, Address: 0x34ee6c, Func Offset: 0x15c
	// Line 1388, Address: 0x34ee80, Func Offset: 0x170
	// Line 1390, Address: 0x34ef20, Func Offset: 0x210
	// Line 1391, Address: 0x34ef24, Func Offset: 0x214
	// Line 1393, Address: 0x34efc4, Func Offset: 0x2b4
	// Line 1394, Address: 0x34f068, Func Offset: 0x358
	// Line 1395, Address: 0x34f108, Func Offset: 0x3f8
	// Line 1396, Address: 0x34f1b4, Func Offset: 0x4a4
	// Line 1398, Address: 0x34f254, Func Offset: 0x544
	// Line 1399, Address: 0x34f270, Func Offset: 0x560
	// Func End, Address: 0x34f288, Func Offset: 0x578
}

// objIsFacingActor__Fiiii
// Start address: 0x34f290
int32 objIsFacingActor(int32 objID, int32 targetActorID, int32 delta)
{
	float32 ang;
	int32 anglem;
	int32 angle2;
	int32 angle1;
	Vector3D v;
	iObjRuntime* ar;
	_xObj* b;
	_xObj* a;
	// Line 1299, Address: 0x34f290, Func Offset: 0
	// Line 1307, Address: 0x34f2b4, Func Offset: 0x24
	// Line 1308, Address: 0x34f354, Func Offset: 0xc4
	// Line 1309, Address: 0x34f3f8, Func Offset: 0x168
	// Line 1310, Address: 0x34f498, Func Offset: 0x208
	// Line 1312, Address: 0x34f53c, Func Offset: 0x2ac
	// Line 1313, Address: 0x34f550, Func Offset: 0x2c0
	// Line 1315, Address: 0x34f5f0, Func Offset: 0x360
	// Line 1316, Address: 0x34f5f4, Func Offset: 0x364
	// Line 1318, Address: 0x34f694, Func Offset: 0x404
	// Line 1319, Address: 0x34f6a8, Func Offset: 0x418
	// Line 1322, Address: 0x34f748, Func Offset: 0x4b8
	// Line 1323, Address: 0x34f760, Func Offset: 0x4d0
	// Line 1325, Address: 0x34f76c, Func Offset: 0x4dc
	// Line 1326, Address: 0x34f780, Func Offset: 0x4f0
	// Line 1334, Address: 0x34f78c, Func Offset: 0x4fc
	// Line 1336, Address: 0x34f7a4, Func Offset: 0x514
	// Line 1337, Address: 0x34f7ac, Func Offset: 0x51c
	// Line 1339, Address: 0x34f7b0, Func Offset: 0x520
	// Line 1340, Address: 0x34f7cc, Func Offset: 0x53c
	// Line 1341, Address: 0x34f7d0, Func Offset: 0x540
	// Line 1343, Address: 0x34f7d4, Func Offset: 0x544
	// Line 1344, Address: 0x34f7dc, Func Offset: 0x54c
	// Line 1345, Address: 0x34f7f8, Func Offset: 0x568
	// Line 1346, Address: 0x34f800, Func Offset: 0x570
	// Line 1347, Address: 0x34f820, Func Offset: 0x590
	// Line 1348, Address: 0x34f828, Func Offset: 0x598
	// Line 1350, Address: 0x34f848, Func Offset: 0x5b8
	// Line 1351, Address: 0x34f850, Func Offset: 0x5c0
	// Line 1352, Address: 0x34f870, Func Offset: 0x5e0
	// Line 1353, Address: 0x34f878, Func Offset: 0x5e8
	// Line 1354, Address: 0x34f898, Func Offset: 0x608
	// Line 1355, Address: 0x34f8a0, Func Offset: 0x610
	// Line 1359, Address: 0x34f8c0, Func Offset: 0x630
	// Line 1361, Address: 0x34f8cc, Func Offset: 0x63c
	// Line 1364, Address: 0x34f8e4, Func Offset: 0x654
	// Line 1370, Address: 0x34f8f0, Func Offset: 0x660
	// Line 1371, Address: 0x34f8fc, Func Offset: 0x66c
	// Line 1372, Address: 0x34f908, Func Offset: 0x678
	// Line 1373, Address: 0x34f914, Func Offset: 0x684
	// Line 1376, Address: 0x34f920, Func Offset: 0x690
	// Line 1377, Address: 0x34f924, Func Offset: 0x694
	// Func End, Address: 0x34f944, Func Offset: 0x6b4
}

// objGetAngle__Fi
// Start address: 0x34f950
int32 objGetAngle(int32 objID)
{
	iObjRuntime* r;
	_xObj* a;
	// Line 1279, Address: 0x34f950, Func Offset: 0
	// Line 1283, Address: 0x34f960, Func Offset: 0x10
	// Line 1284, Address: 0x34fa00, Func Offset: 0xb0
	// Line 1286, Address: 0x34faa4, Func Offset: 0x154
	// Line 1287, Address: 0x34fab8, Func Offset: 0x168
	// Line 1289, Address: 0x34fb58, Func Offset: 0x208
	// Line 1290, Address: 0x34fb5c, Func Offset: 0x20c
	// Line 1292, Address: 0x34fbfc, Func Offset: 0x2ac
	// Line 1293, Address: 0x34fc14, Func Offset: 0x2c4
	// Func End, Address: 0x34fc28, Func Offset: 0x2d8
}

// objMoveForward__Fii
// Start address: 0x34fc30
int32 objMoveForward(int32 objID, int32 amount)
{
	Vector3D d;
	iObjRuntime* r;
	_xObj* a;
	// Line 1245, Address: 0x34fc30, Func Offset: 0
	// Line 1250, Address: 0x34fc48, Func Offset: 0x18
	// Line 1251, Address: 0x34fce8, Func Offset: 0xb8
	// Line 1253, Address: 0x34fd8c, Func Offset: 0x15c
	// Line 1254, Address: 0x34fda0, Func Offset: 0x170
	// Line 1256, Address: 0x34fe40, Func Offset: 0x210
	// Line 1257, Address: 0x34fe44, Func Offset: 0x214
	// Line 1259, Address: 0x34fee4, Func Offset: 0x2b4
	// Line 1260, Address: 0x34fee8, Func Offset: 0x2b8
	// Line 1261, Address: 0x34feec, Func Offset: 0x2bc
	// Line 1263, Address: 0x34ff0c, Func Offset: 0x2dc
	// Line 1265, Address: 0x34ff20, Func Offset: 0x2f0
	// Line 1266, Address: 0x34ff30, Func Offset: 0x300
	// Line 1267, Address: 0x34ff40, Func Offset: 0x310
	// Line 1271, Address: 0x34ff50, Func Offset: 0x320
	// Line 1272, Address: 0x34ff54, Func Offset: 0x324
	// Func End, Address: 0x34ff6c, Func Offset: 0x33c
}

// objMoveStrafe__Fii
// Start address: 0x34ff70
int32 objMoveStrafe(int32 objID, int32 amount)
{
	Vector3D rot;
	Vector3D d;
	iObjRuntime* r;
	_xObj* a;
	// Line 1195, Address: 0x34ff70, Func Offset: 0
	// Line 1201, Address: 0x34ff88, Func Offset: 0x18
	// Line 1202, Address: 0x34ff90, Func Offset: 0x20
	// Line 1204, Address: 0x34ff9c, Func Offset: 0x2c
	// Line 1205, Address: 0x35003c, Func Offset: 0xcc
	// Line 1207, Address: 0x3500e0, Func Offset: 0x170
	// Line 1208, Address: 0x3500f4, Func Offset: 0x184
	// Line 1210, Address: 0x350194, Func Offset: 0x224
	// Line 1211, Address: 0x350198, Func Offset: 0x228
	// Line 1213, Address: 0x350238, Func Offset: 0x2c8
	// Line 1214, Address: 0x350240, Func Offset: 0x2d0
	// Line 1215, Address: 0x350248, Func Offset: 0x2d8
	// Line 1217, Address: 0x350250, Func Offset: 0x2e0
	// Line 1218, Address: 0x350258, Func Offset: 0x2e8
	// Line 1220, Address: 0x350274, Func Offset: 0x304
	// Line 1222, Address: 0x350288, Func Offset: 0x318
	// Line 1223, Address: 0x35028c, Func Offset: 0x31c
	// Line 1224, Address: 0x350290, Func Offset: 0x320
	// Line 1226, Address: 0x3502b0, Func Offset: 0x340
	// Line 1230, Address: 0x3502c4, Func Offset: 0x354
	// Line 1232, Address: 0x3502cc, Func Offset: 0x35c
	// Line 1233, Address: 0x3502d8, Func Offset: 0x368
	// Line 1234, Address: 0x3502e4, Func Offset: 0x374
	// Line 1236, Address: 0x3502f0, Func Offset: 0x380
	// Line 1237, Address: 0x350300, Func Offset: 0x390
	// Line 1238, Address: 0x350310, Func Offset: 0x3a0
	// Line 1240, Address: 0x350320, Func Offset: 0x3b0
	// Line 1242, Address: 0x350324, Func Offset: 0x3b4
	// Func End, Address: 0x35033c, Func Offset: 0x3cc
}

// objFaceActor__Fiii
// Start address: 0x350340
void objFaceActor(int32 objID, int32 targetActorID)
{
	Vector3D d;
	iObjRuntime* br;
	_xObj* b;
	iObjRuntime* ar;
	_xObj* a;
	// Line 1164, Address: 0x350340, Func Offset: 0
	// Line 1171, Address: 0x350358, Func Offset: 0x18
	// Line 1172, Address: 0x3503f8, Func Offset: 0xb8
	// Line 1173, Address: 0x35049c, Func Offset: 0x15c
	// Line 1174, Address: 0x35053c, Func Offset: 0x1fc
	// Line 1176, Address: 0x3505e0, Func Offset: 0x2a0
	// Line 1177, Address: 0x3505f4, Func Offset: 0x2b4
	// Line 1179, Address: 0x350694, Func Offset: 0x354
	// Line 1180, Address: 0x350698, Func Offset: 0x358
	// Line 1182, Address: 0x350738, Func Offset: 0x3f8
	// Line 1183, Address: 0x35074c, Func Offset: 0x40c
	// Line 1185, Address: 0x3507ec, Func Offset: 0x4ac
	// Line 1186, Address: 0x3507f0, Func Offset: 0x4b0
	// Line 1189, Address: 0x350890, Func Offset: 0x550
	// Line 1190, Address: 0x3508a4, Func Offset: 0x564
	// Line 1192, Address: 0x3508b4, Func Offset: 0x574
	// Func End, Address: 0x3508cc, Func Offset: 0x58c
}

// objDistanceToActor__Fiii
// Start address: 0x3508d0
int32 objDistanceToActor(int32 objID, int32 targetActorID)
{
	int32 mag;
	Vector3D d;
	iObjRuntime* br;
	_xObj* b;
	iObjRuntime* ar;
	_xObj* a;
	// Line 1130, Address: 0x3508d0, Func Offset: 0
	// Line 1138, Address: 0x3508e8, Func Offset: 0x18
	// Line 1139, Address: 0x350988, Func Offset: 0xb8
	// Line 1140, Address: 0x350a2c, Func Offset: 0x15c
	// Line 1141, Address: 0x350acc, Func Offset: 0x1fc
	// Line 1143, Address: 0x350b70, Func Offset: 0x2a0
	// Line 1144, Address: 0x350b84, Func Offset: 0x2b4
	// Line 1146, Address: 0x350c24, Func Offset: 0x354
	// Line 1147, Address: 0x350c28, Func Offset: 0x358
	// Line 1149, Address: 0x350cc8, Func Offset: 0x3f8
	// Line 1150, Address: 0x350cdc, Func Offset: 0x40c
	// Line 1152, Address: 0x350d7c, Func Offset: 0x4ac
	// Line 1153, Address: 0x350d80, Func Offset: 0x4b0
	// Line 1156, Address: 0x350e20, Func Offset: 0x550
	// Line 1158, Address: 0x350e34, Func Offset: 0x564
	// Line 1161, Address: 0x350e58, Func Offset: 0x588
	// Func End, Address: 0x350e70, Func Offset: 0x5a0
}

// objSetTexture__Fii
// Start address: 0x350e70
void objSetTexture(int32 objID, int32 textureID)
{
	_xTex* t;
	iObjRuntime* r;
	_xObj* a;
	// Line 1108, Address: 0x350e70, Func Offset: 0
	// Line 1113, Address: 0x350e8c, Func Offset: 0x1c
	// Line 1114, Address: 0x350f2c, Func Offset: 0xbc
	// Line 1116, Address: 0x350fd0, Func Offset: 0x160
	// Line 1117, Address: 0x350fe4, Func Offset: 0x174
	// Line 1119, Address: 0x351084, Func Offset: 0x214
	// Line 1120, Address: 0x351088, Func Offset: 0x218
	// Line 1122, Address: 0x351128, Func Offset: 0x2b8
	// Line 1123, Address: 0x351134, Func Offset: 0x2c4
	// Line 1124, Address: 0x35113c, Func Offset: 0x2cc
	// Line 1126, Address: 0x351154, Func Offset: 0x2e4
	// Line 1127, Address: 0x35116c, Func Offset: 0x2fc
	// Func End, Address: 0x351188, Func Offset: 0x318
}

// objSetType__Fii
// Start address: 0x351190
void objSetType(int32 objID, int32 objType)
{
	_xObj* a;
	// Line 1081, Address: 0x351190, Func Offset: 0
	// Line 1084, Address: 0x3511ac, Func Offset: 0x1c
	// Line 1085, Address: 0x35124c, Func Offset: 0xbc
	// Line 1087, Address: 0x3512f0, Func Offset: 0x160
	// Line 1088, Address: 0x351304, Func Offset: 0x174
	// Line 1091, Address: 0x3513a4, Func Offset: 0x214
	// Line 1094, Address: 0x3513c0, Func Offset: 0x230
	// Line 1095, Address: 0x3513c4, Func Offset: 0x234
	// Func End, Address: 0x3513e0, Func Offset: 0x250
}

// objDestroy__Fi
// Start address: 0x3513e0
void objDestroy(int32 objID)
{
	// Line 1064, Address: 0x3513e0, Func Offset: 0
	// Line 1065, Address: 0x3513f0, Func Offset: 0x10
	// Line 1066, Address: 0x351588, Func Offset: 0x1a8
	// Func End, Address: 0x35159c, Func Offset: 0x1bc
}

// objSetup__Fiiiii
// Start address: 0x3515a0
void objSetup(int32 objID, int32 objType, int32 modelID, int32 skeletonID, int32 textureID)
{
	// Line 1051, Address: 0x3515a0, Func Offset: 0
	// Line 1052, Address: 0x3515ac, Func Offset: 0xc
	// Line 1053, Address: 0x3515bc, Func Offset: 0x1c
	// Func End, Address: 0x3515cc, Func Offset: 0x2c
}

// objCreate__Fiiii
// Start address: 0x3515d0
int32 objCreate(int32 objType, int32 modelID, int32 skeletonID, int32 textureID)
{
	// Line 1033, Address: 0x3515d0, Func Offset: 0
	// Line 1034, Address: 0x3515e8, Func Offset: 0x18
	// Line 1035, Address: 0x351684, Func Offset: 0xb4
	// Func End, Address: 0x351698, Func Offset: 0xc8
}

// objSetBRadius__Fii
// Start address: 0x3516a0
void objSetBRadius(int32 objID, int32 bradius)
{
	iObjRuntime* r;
	_xObj* a;
	// Line 1014, Address: 0x3516a0, Func Offset: 0
	// Line 1018, Address: 0x3516b8, Func Offset: 0x18
	// Line 1019, Address: 0x351758, Func Offset: 0xb8
	// Line 1020, Address: 0x3517fc, Func Offset: 0x15c
	// Line 1022, Address: 0x3518b4, Func Offset: 0x214
	// Line 1023, Address: 0x3518c8, Func Offset: 0x228
	// Line 1025, Address: 0x351968, Func Offset: 0x2c8
	// Line 1026, Address: 0x35196c, Func Offset: 0x2cc
	// Line 1028, Address: 0x351a0c, Func Offset: 0x36c
	// Line 1029, Address: 0x351a2c, Func Offset: 0x38c
	// Func End, Address: 0x351a44, Func Offset: 0x3a4
}

// objTranslatePosition__Fiiii
// Start address: 0x351a50
void objTranslatePosition(int32 objID, int32 x, int32 y, int32 z)
{
	// Line 1004, Address: 0x351a50, Func Offset: 0
	// Line 1005, Address: 0x351a78, Func Offset: 0x28
	// Line 1006, Address: 0x351b18, Func Offset: 0xc8
	// Line 1007, Address: 0x351bbc, Func Offset: 0x16c
	// Line 1009, Address: 0x351c74, Func Offset: 0x224
	// Line 1010, Address: 0x351cec, Func Offset: 0x29c
	// Func End, Address: 0x351d0c, Func Offset: 0x2bc
}

// objGetFlags__Fi
// Start address: 0x351d10
int32 objGetFlags(int32 id)
{
	// Line 995, Address: 0x351d10, Func Offset: 0
	// Line 996, Address: 0x351d20, Func Offset: 0x10
	// Line 997, Address: 0x351dc0, Func Offset: 0xb0
	// Line 998, Address: 0x351e64, Func Offset: 0x154
	// Line 1000, Address: 0x351f1c, Func Offset: 0x20c
	// Line 1001, Address: 0x351f38, Func Offset: 0x228
	// Func End, Address: 0x351f4c, Func Offset: 0x23c
}

// objGetRotY__Fi
// Start address: 0x351f50
int32 objGetRotY(int32 id)
{
	// Line 976, Address: 0x351f50, Func Offset: 0
	// Line 977, Address: 0x351f60, Func Offset: 0x10
	// Line 978, Address: 0x352000, Func Offset: 0xb0
	// Line 979, Address: 0x3520a4, Func Offset: 0x154
	// Line 981, Address: 0x35215c, Func Offset: 0x20c
	// Line 982, Address: 0x35218c, Func Offset: 0x23c
	// Func End, Address: 0x3521a0, Func Offset: 0x250
}

// objGetPositionZ__Fi
// Start address: 0x3521a0
int32 objGetPositionZ(int32 id)
{
	// Line 957, Address: 0x3521a0, Func Offset: 0
	// Line 958, Address: 0x3521b0, Func Offset: 0x10
	// Line 959, Address: 0x352250, Func Offset: 0xb0
	// Line 960, Address: 0x3522f4, Func Offset: 0x154
	// Line 962, Address: 0x3523ac, Func Offset: 0x20c
	// Line 963, Address: 0x3523dc, Func Offset: 0x23c
	// Func End, Address: 0x3523f0, Func Offset: 0x250
}

// objGetPositionY__Fi
// Start address: 0x3523f0
int32 objGetPositionY(int32 id)
{
	// Line 937, Address: 0x3523f0, Func Offset: 0
	// Line 938, Address: 0x352400, Func Offset: 0x10
	// Line 939, Address: 0x3524a0, Func Offset: 0xb0
	// Line 940, Address: 0x352544, Func Offset: 0x154
	// Line 942, Address: 0x3525fc, Func Offset: 0x20c
	// Line 943, Address: 0x35262c, Func Offset: 0x23c
	// Func End, Address: 0x352640, Func Offset: 0x250
}

// objGetPositionX__Fi
// Start address: 0x352640
int32 objGetPositionX(int32 id)
{
	// Line 916, Address: 0x352640, Func Offset: 0
	// Line 917, Address: 0x352650, Func Offset: 0x10
	// Line 918, Address: 0x3526f0, Func Offset: 0xb0
	// Line 919, Address: 0x352794, Func Offset: 0x154
	// Line 922, Address: 0x35284c, Func Offset: 0x20c
	// Line 923, Address: 0x35287c, Func Offset: 0x23c
	// Func End, Address: 0x352890, Func Offset: 0x250
}

// objSetPosition__Fiiii
// Start address: 0x352890
void objSetPosition(int32 objID, int32 x, int32 y, int32 z)
{
	// Line 896, Address: 0x352890, Func Offset: 0
	// Line 897, Address: 0x3528b8, Func Offset: 0x28
	// Line 898, Address: 0x352958, Func Offset: 0xc8
	// Line 899, Address: 0x3529fc, Func Offset: 0x16c
	// Line 901, Address: 0x352ab4, Func Offset: 0x224
	// Line 902, Address: 0x352b24, Func Offset: 0x294
	// Func End, Address: 0x352b44, Func Offset: 0x2b4
}

// objSetPositionNavigationPoint__Fii
// Start address: 0x352b50
void objSetPositionNavigationPoint(int32 objID, int32 navID)
{
	// Line 891, Address: 0x352b50, Func Offset: 0
	// Line 892, Address: 0x352b68, Func Offset: 0x18
	// Line 893, Address: 0x352d24, Func Offset: 0x1d4
	// Func End, Address: 0x352d3c, Func Offset: 0x1ec
}

// objSetPositionMarker__Fiii
// Start address: 0x352d40
void objSetPositionMarker(int32 objID, int32 markerID, int32 mapToFloor)
{
	xMarker* marker;
	// Line 856, Address: 0x352d40, Func Offset: 0
	// Line 857, Address: 0x352d60, Func Offset: 0x20
	// Line 859, Address: 0x352e18, Func Offset: 0xd8
	// Line 862, Address: 0x352eb8, Func Offset: 0x178
	// Line 864, Address: 0x352ecc, Func Offset: 0x18c
	// Line 866, Address: 0x352edc, Func Offset: 0x19c
	// Line 869, Address: 0x352ee8, Func Offset: 0x1a8
	// Line 871, Address: 0x352f10, Func Offset: 0x1d0
	// Line 874, Address: 0x352f40, Func Offset: 0x200
	// Line 878, Address: 0x352f48, Func Offset: 0x208
	// Line 879, Address: 0x352f70, Func Offset: 0x230
	// Line 881, Address: 0x352f98, Func Offset: 0x258
	// Line 885, Address: 0x352fcc, Func Offset: 0x28c
	// Line 887, Address: 0x352fd4, Func Offset: 0x294
	// Line 888, Address: 0x352fe8, Func Offset: 0x2a8
	// Func End, Address: 0x353004, Func Offset: 0x2c4
}

// objSetPositionActor__Fiiii
// Start address: 0x353010
void objSetPositionActor(int32 objID, int32 toObjectType, int32 toActorID, int32 smartDrop)
{
	// Line 851, Address: 0x353010, Func Offset: 0
	// Line 852, Address: 0x353018, Func Offset: 0x8
	// Line 853, Address: 0x353020, Func Offset: 0x10
	// Func End, Address: 0x353030, Func Offset: 0x20
}

// objSetOrientation__Fiiii
// Start address: 0x353030
void objSetOrientation(int32 objID, int32 x, int32 y, int32 z)
{
	// Line 842, Address: 0x353030, Func Offset: 0
	// Line 843, Address: 0x353058, Func Offset: 0x28
	// Line 844, Address: 0x3530f8, Func Offset: 0xc8
	// Line 845, Address: 0x35319c, Func Offset: 0x16c
	// Line 847, Address: 0x353254, Func Offset: 0x224
	// Line 848, Address: 0x3532b8, Func Offset: 0x288
	// Func End, Address: 0x3532d8, Func Offset: 0x2a8
}

// objSetVisible__Fii
// Start address: 0x3532e0
void objSetVisible(int32 id, int32 visible)
{
	// Line 819, Address: 0x3532e0, Func Offset: 0
	// Line 820, Address: 0x3532f8, Func Offset: 0x18
	// Line 821, Address: 0x353398, Func Offset: 0xb8
	// Line 822, Address: 0x35343c, Func Offset: 0x15c
	// Line 824, Address: 0x3534f4, Func Offset: 0x214
	// Line 827, Address: 0x3534fc, Func Offset: 0x21c
	// Line 828, Address: 0x353524, Func Offset: 0x244
	// Line 829, Address: 0x35354c, Func Offset: 0x26c
	// Line 830, Address: 0x353568, Func Offset: 0x288
	// Line 834, Address: 0x353570, Func Offset: 0x290
	// Line 835, Address: 0x353598, Func Offset: 0x2b8
	// Line 836, Address: 0x3535c0, Func Offset: 0x2e0
	// Line 839, Address: 0x3535dc, Func Offset: 0x2fc
	// Func End, Address: 0x3535f4, Func Offset: 0x314
}

// xObjDBSetPositionActor__Fiiii
// Start address: 0x353600
void xObjDBSetPositionActor(int32 objID, int32 toActorType, int32 toActorID, int32 smartDrop)
{
	xNavPoint* nav;
	// Line 779, Address: 0x353600, Func Offset: 0
	// Line 782, Address: 0x353628, Func Offset: 0x28
	// Line 783, Address: 0x3536c8, Func Offset: 0xc8
	// Line 784, Address: 0x35376c, Func Offset: 0x16c
	// Line 785, Address: 0x35380c, Func Offset: 0x20c
	// Line 787, Address: 0x3538b0, Func Offset: 0x2b0
	// Line 791, Address: 0x3538bc, Func Offset: 0x2bc
	// Line 792, Address: 0x353914, Func Offset: 0x314
	// Line 794, Address: 0x35391c, Func Offset: 0x31c
	// Line 795, Address: 0x353924, Func Offset: 0x324
	// Line 796, Address: 0x35394c, Func Offset: 0x34c
	// Line 797, Address: 0x353968, Func Offset: 0x368
	// Line 801, Address: 0x353970, Func Offset: 0x370
	// Line 806, Address: 0x353980, Func Offset: 0x380
	// Line 812, Address: 0x353a14, Func Offset: 0x414
	// Func End, Address: 0x353a34, Func Offset: 0x434
}

// xObjDBIdle__Fv
// Start address: 0x353a40
void xObjDBIdle()
{
	iObjRuntime* r;
	_xObj* a;
	int32 i;
	// Line 665, Address: 0x353a40, Func Offset: 0
	// Line 674, Address: 0x353a50, Func Offset: 0x10
	// Line 676, Address: 0x353a5c, Func Offset: 0x1c
	// Line 677, Address: 0x353a7c, Func Offset: 0x3c
	// Line 678, Address: 0x353a98, Func Offset: 0x58
	// Line 682, Address: 0x353aac, Func Offset: 0x6c
	// Line 685, Address: 0x353ab8, Func Offset: 0x78
	// Line 686, Address: 0x353ad0, Func Offset: 0x90
	// Line 688, Address: 0x353ad8, Func Offset: 0x98
	// Line 689, Address: 0x353ae4, Func Offset: 0xa4
	// Line 690, Address: 0x353ae8, Func Offset: 0xa8
	// Line 691, Address: 0x353aec, Func Offset: 0xac
	// Line 717, Address: 0x353af0, Func Offset: 0xb0
	// Line 718, Address: 0x353b04, Func Offset: 0xc4
	// Func End, Address: 0x353b1c, Func Offset: 0xdc
}

// xObjDBEventSendAll__Fiiiii
// Start address: 0x353b20
void xObjDBEventSendAll()
{
	// Line 623, Address: 0x353b20, Func Offset: 0
	// Func End, Address: 0x353b28, Func Offset: 0x8
}

// xObjDBSetup__FiiUiUiUi
// Start address: 0x353b30
void xObjDBSetup(int32 objectType, int32 id, uint32 modelID, uint32 textureID)
{
	_xTex* t;
	_xModel* model;
	iObjRuntime* r;
	_xObj* a;
	// Line 451, Address: 0x353b30, Func Offset: 0
	// Line 457, Address: 0x353b60, Func Offset: 0x30
	// Line 458, Address: 0x353c00, Func Offset: 0xd0
	// Line 461, Address: 0x353ca4, Func Offset: 0x174
	// Line 465, Address: 0x353cb8, Func Offset: 0x188
	// Line 468, Address: 0x353cbc, Func Offset: 0x18c
	// Line 471, Address: 0x353cc0, Func Offset: 0x190
	// Line 473, Address: 0x353ccc, Func Offset: 0x19c
	// Line 474, Address: 0x353cf0, Func Offset: 0x1c0
	// Line 476, Address: 0x353d94, Func Offset: 0x264
	// Line 477, Address: 0x353dbc, Func Offset: 0x28c
	// Line 480, Address: 0x353e64, Func Offset: 0x334
	// Line 482, Address: 0x353e70, Func Offset: 0x340
	// Line 483, Address: 0x353e74, Func Offset: 0x344
	// Line 486, Address: 0x353f14, Func Offset: 0x3e4
	// Line 487, Address: 0x353f24, Func Offset: 0x3f4
	// Line 489, Address: 0x353f30, Func Offset: 0x400
	// Line 490, Address: 0x353f48, Func Offset: 0x418
	// Line 496, Address: 0x353ff0, Func Offset: 0x4c0
	// Line 499, Address: 0x354000, Func Offset: 0x4d0
	// Line 500, Address: 0x354010, Func Offset: 0x4e0
	// Line 502, Address: 0x354018, Func Offset: 0x4e8
	// Line 504, Address: 0x354030, Func Offset: 0x500
	// Line 508, Address: 0x354040, Func Offset: 0x510
	// Line 509, Address: 0x35405c, Func Offset: 0x52c
	// Line 513, Address: 0x354078, Func Offset: 0x548
	// Line 517, Address: 0x354080, Func Offset: 0x550
	// Func End, Address: 0x3540a8, Func Offset: 0x578
}

// xObjDBDraw__Fv
// Start address: 0x3540b0
void xObjDBDraw()
{
	iObjRuntime* r;
	int32 i;
	// Line 369, Address: 0x3540b0, Func Offset: 0
	// Line 373, Address: 0x3540bc, Func Offset: 0xc
	// Line 376, Address: 0x3540c8, Func Offset: 0x18
	// Line 377, Address: 0x3540e0, Func Offset: 0x30
	// Line 380, Address: 0x3540e8, Func Offset: 0x38
	// Line 383, Address: 0x3540f8, Func Offset: 0x48
	// Line 385, Address: 0x354114, Func Offset: 0x64
	// Line 386, Address: 0x354118, Func Offset: 0x68
	// Line 387, Address: 0x35412c, Func Offset: 0x7c
	// Func End, Address: 0x354140, Func Offset: 0x90
}

// xObjDBSetLevelReset__Fv
// Start address: 0x354140
void xObjDBSetLevelReset()
{
	int32 i;
	// Line 345, Address: 0x354140, Func Offset: 0
	// Line 348, Address: 0x35414c, Func Offset: 0xc
	// Line 353, Address: 0x35416c, Func Offset: 0x2c
	// Line 355, Address: 0x354180, Func Offset: 0x40
	// Line 356, Address: 0x354188, Func Offset: 0x48
	// Line 357, Address: 0x354194, Func Offset: 0x54
	// Func End, Address: 0x35419c, Func Offset: 0x5c
}

// xObjDBLevelReset__Fv
// Start address: 0x3541a0
void xObjDBLevelReset()
{
	int32 i;
	// Line 312, Address: 0x3541a0, Func Offset: 0
	// Line 313, Address: 0x3541ac, Func Offset: 0xc
	// Line 315, Address: 0x3541bc, Func Offset: 0x1c
	// Line 318, Address: 0x3541c8, Func Offset: 0x28
	// Line 320, Address: 0x3541d8, Func Offset: 0x38
	// Line 322, Address: 0x3541f8, Func Offset: 0x58
	// Line 327, Address: 0x35420c, Func Offset: 0x6c
	// Line 328, Address: 0x354224, Func Offset: 0x84
	// Line 329, Address: 0x354228, Func Offset: 0x88
	// Line 330, Address: 0x35423c, Func Offset: 0x9c
	// Line 332, Address: 0x354240, Func Offset: 0xa0
	// Line 333, Address: 0x35424c, Func Offset: 0xac
	// Func End, Address: 0x354260, Func Offset: 0xc0
}

// xObjDBReInitializeInterpreter__Fv
// Start address: 0x354260
void xObjDBReInitializeInterpreter()
{
	// Line 287, Address: 0x354260, Func Offset: 0
	// Line 288, Address: 0x354264, Func Offset: 0x4
	// Func End, Address: 0x35426c, Func Offset: 0xc
}

// objEffectSetFlag__Fiiii
// Start address: 0x354270
void objEffectSetFlag(int32 objID, int32 flag, int32 mode)
{
	// Line 270, Address: 0x354270, Func Offset: 0
	// Line 271, Address: 0x354288, Func Offset: 0x18
	// Line 272, Address: 0x3542a8, Func Offset: 0x38
	// Func End, Address: 0x3542c0, Func Offset: 0x50
}

// objEffectReflect__Fiiiiiii
// Start address: 0x3542c0
void objEffectReflect(int32 objID, int32 mode, int32 r, int32 g, int32 b)
{
	// Line 264, Address: 0x3542c0, Func Offset: 0
	// Line 265, Address: 0x3542e8, Func Offset: 0x28
	// Line 266, Address: 0x35430c, Func Offset: 0x4c
	// Func End, Address: 0x35432c, Func Offset: 0x6c
}

// objEffectFadeInfo__Fiiiiiii
// Start address: 0x354330
void objEffectFadeInfo(int32 objID, int32 r, int32 g, int32 b, int32 mode, int32 idx)
{
	// Line 258, Address: 0x354330, Func Offset: 0
	// Line 259, Address: 0x354360, Func Offset: 0x30
	// Line 260, Address: 0x354388, Func Offset: 0x58
	// Func End, Address: 0x3543ac, Func Offset: 0x7c
}

// objEffectFadeStart__Fiii
// Start address: 0x3543b0
void objEffectFadeStart(int32 objID, int32 flag, int32 time)
{
	// Line 235, Address: 0x3543b0, Func Offset: 0
	// Line 236, Address: 0x3543c8, Func Offset: 0x18
	// Line 237, Address: 0x3543e4, Func Offset: 0x34
	// Func End, Address: 0x3543fc, Func Offset: 0x4c
}

// objEffectFadeDone__Fi
// Start address: 0x354400
int32 objEffectFadeDone(int32 objID)
{
	// Line 229, Address: 0x354400, Func Offset: 0
	// Line 230, Address: 0x354408, Func Offset: 0x8
	// Line 231, Address: 0x35441c, Func Offset: 0x1c
	// Func End, Address: 0x35442c, Func Offset: 0x2c
}

// objGetRenderEffectsPtr__Fi
// Start address: 0x354430
_iRenderEffects* objGetRenderEffectsPtr(int32 objID)
{
	iObjRuntime* r;
	_xObj* o;
	_iRenderEffects* effects;
	// Line 208, Address: 0x354430, Func Offset: 0
	// Line 213, Address: 0x354440, Func Offset: 0x10
	// Line 214, Address: 0x3544e0, Func Offset: 0xb0
	// Line 216, Address: 0x354584, Func Offset: 0x154
	// Line 217, Address: 0x354598, Func Offset: 0x168
	// Line 219, Address: 0x354638, Func Offset: 0x208
	// Line 220, Address: 0x35463c, Func Offset: 0x20c
	// Line 222, Address: 0x3546dc, Func Offset: 0x2ac
	// Line 225, Address: 0x3546e4, Func Offset: 0x2b4
	// Func End, Address: 0x3546f8, Func Offset: 0x2c8
}

// objFlagsSet__Fii
// Start address: 0x354700
int32 objFlagsSet(int32 objID, int32 flags)
{
	iObjRuntime* r;
	_xObj* o;
	// Line 188, Address: 0x354700, Func Offset: 0
	// Line 192, Address: 0x354718, Func Offset: 0x18
	// Line 193, Address: 0x3547b8, Func Offset: 0xb8
	// Line 195, Address: 0x35485c, Func Offset: 0x15c
	// Line 196, Address: 0x354870, Func Offset: 0x170
	// Line 198, Address: 0x354910, Func Offset: 0x210
	// Line 199, Address: 0x354914, Func Offset: 0x214
	// Line 202, Address: 0x3549b4, Func Offset: 0x2b4
	// Line 203, Address: 0x3549b8, Func Offset: 0x2b8
	// Line 204, Address: 0x3549bc, Func Offset: 0x2bc
	// Func End, Address: 0x3549d4, Func Offset: 0x2d4
}

// objFlagsSub__Fii
// Start address: 0x3549e0
int32 objFlagsSub(int32 objID, int32 flags)
{
	iObjRuntime* r;
	_xObj* o;
	// Line 165, Address: 0x3549e0, Func Offset: 0
	// Line 169, Address: 0x3549f8, Func Offset: 0x18
	// Line 170, Address: 0x354a98, Func Offset: 0xb8
	// Line 172, Address: 0x354b3c, Func Offset: 0x15c
	// Line 173, Address: 0x354b50, Func Offset: 0x170
	// Line 175, Address: 0x354bf0, Func Offset: 0x210
	// Line 176, Address: 0x354bf4, Func Offset: 0x214
	// Line 178, Address: 0x354c94, Func Offset: 0x2b4
	// Line 180, Address: 0x354cb0, Func Offset: 0x2d0
	// Line 181, Address: 0x354cb4, Func Offset: 0x2d4
	// Func End, Address: 0x354ccc, Func Offset: 0x2ec
}

// objFlagsAdd__Fii
// Start address: 0x354cd0
int32 objFlagsAdd(int32 objID, int32 flags)
{
	iObjRuntime* r;
	_xObj* o;
	// Line 141, Address: 0x354cd0, Func Offset: 0
	// Line 145, Address: 0x354ce8, Func Offset: 0x18
	// Line 146, Address: 0x354d88, Func Offset: 0xb8
	// Line 148, Address: 0x354e2c, Func Offset: 0x15c
	// Line 149, Address: 0x354e40, Func Offset: 0x170
	// Line 151, Address: 0x354ee0, Func Offset: 0x210
	// Line 152, Address: 0x354ee4, Func Offset: 0x214
	// Line 154, Address: 0x354f84, Func Offset: 0x2b4
	// Line 156, Address: 0x354f90, Func Offset: 0x2c0
	// Line 158, Address: 0x354f94, Func Offset: 0x2c4
	// Func End, Address: 0x354fac, Func Offset: 0x2dc
}

// xObjDBInitialize__Fv
// Start address: 0x354fb0
void xObjDBInitialize()
{
	int32 i;
	// Line 72, Address: 0x354fb0, Func Offset: 0
	// Line 76, Address: 0x354fb8, Func Offset: 0x8
	// Line 78, Address: 0x354fc4, Func Offset: 0x14
	// Line 80, Address: 0x354fdc, Func Offset: 0x2c
	// Line 82, Address: 0x354ff4, Func Offset: 0x44
	// Line 83, Address: 0x35500c, Func Offset: 0x5c
	// Line 84, Address: 0x355028, Func Offset: 0x78
	// Line 86, Address: 0x35503c, Func Offset: 0x8c
	// Line 89, Address: 0x355044, Func Offset: 0x94
	// Line 90, Address: 0x355060, Func Offset: 0xb0
	// Line 91, Address: 0x35507c, Func Offset: 0xcc
	// Line 92, Address: 0x355098, Func Offset: 0xe8
	// Line 93, Address: 0x3550b4, Func Offset: 0x104
	// Line 94, Address: 0x3550d0, Func Offset: 0x120
	// Line 95, Address: 0x3550ec, Func Offset: 0x13c
	// Line 96, Address: 0x355108, Func Offset: 0x158
	// Line 97, Address: 0x355124, Func Offset: 0x174
	// Line 98, Address: 0x355140, Func Offset: 0x190
	// Line 99, Address: 0x35515c, Func Offset: 0x1ac
	// Line 100, Address: 0x355178, Func Offset: 0x1c8
	// Line 101, Address: 0x355194, Func Offset: 0x1e4
	// Line 102, Address: 0x3551b0, Func Offset: 0x200
	// Line 103, Address: 0x3551cc, Func Offset: 0x21c
	// Line 104, Address: 0x3551e8, Func Offset: 0x238
	// Line 105, Address: 0x355204, Func Offset: 0x254
	// Line 106, Address: 0x355220, Func Offset: 0x270
	// Line 107, Address: 0x35523c, Func Offset: 0x28c
	// Line 108, Address: 0x355258, Func Offset: 0x2a8
	// Line 109, Address: 0x355274, Func Offset: 0x2c4
	// Line 110, Address: 0x355290, Func Offset: 0x2e0
	// Line 111, Address: 0x3552ac, Func Offset: 0x2fc
	// Line 112, Address: 0x3552c8, Func Offset: 0x318
	// Line 113, Address: 0x3552e4, Func Offset: 0x334
	// Line 114, Address: 0x355300, Func Offset: 0x350
	// Line 115, Address: 0x35531c, Func Offset: 0x36c
	// Line 116, Address: 0x355338, Func Offset: 0x388
	// Line 117, Address: 0x355354, Func Offset: 0x3a4
	// Line 118, Address: 0x355370, Func Offset: 0x3c0
	// Line 119, Address: 0x35538c, Func Offset: 0x3dc
	// Line 120, Address: 0x3553a8, Func Offset: 0x3f8
	// Line 121, Address: 0x3553c4, Func Offset: 0x414
	// Line 123, Address: 0x3553e0, Func Offset: 0x430
	// Line 127, Address: 0x3553fc, Func Offset: 0x44c
	// Line 128, Address: 0x355418, Func Offset: 0x468
	// Line 129, Address: 0x355434, Func Offset: 0x484
	// Line 131, Address: 0x355450, Func Offset: 0x4a0
	// Line 132, Address: 0x35546c, Func Offset: 0x4bc
	// Line 133, Address: 0x355488, Func Offset: 0x4d8
	// Func End, Address: 0x355498, Func Offset: 0x4e8
}

