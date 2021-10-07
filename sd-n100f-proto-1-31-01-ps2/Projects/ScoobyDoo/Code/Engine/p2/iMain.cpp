typedef struct _rxHeapSuperBlockDescriptor;
typedef struct _RpVertexNormal;
typedef struct _rwResEntryTag;
typedef struct xNavLink;
typedef struct _xActor;
typedef struct tagxActorDBData;
typedef struct _RxHeap;
typedef struct iActionResource;
typedef struct _rxHeapBlockHeader;
typedef struct _RwTexture;
typedef struct xTrigger;
typedef struct tagXAnimTrigger;
typedef struct tagFile;
typedef enum _RxClusterValidityReq;
typedef struct _rxHeapFreeBlock;
typedef struct tagxStateThread;
typedef struct p2Camera;
typedef struct _RxPipeline;
typedef struct _RxPipelineNodeTopSortData;
typedef struct tag_xCameraControl;
typedef struct Platform;
typedef struct _RwV2d;
typedef struct tagxState;
typedef struct tagP2Weight;
typedef struct _RxPipelineNode;
typedef struct _RxClusterDefinition;
typedef struct _RpSector;
typedef enum _RwTextureFilterMode;
typedef struct tagXAnimControl;
typedef struct xNavPoint;
typedef struct _RxPipelineNodeParam;
typedef struct _RxPipelineCluster;
typedef struct tagiAnimResource;
typedef enum _rxEmbeddedPacketState;
typedef struct _RwFrame;
typedef struct xMarker;
typedef struct _Env;
typedef struct Vector3D;
typedef enum _rpWorldRenderOrder;
typedef struct iActionRuntime;
typedef struct iTriggerResource;
typedef struct _RxNodeDefinition;
typedef enum _RxClusterValid;
typedef struct iDisplayCamera;
typedef struct _RwSurfaceProperties;
typedef enum _RwCameraProjection;
typedef struct _RpPolygon;
typedef struct xEntryPoint;
typedef struct XStreamHeader;
typedef struct _tagxEnv;
typedef struct iConditionResource;
typedef struct _RwV3d;
typedef struct _tagiEnvRuntime;
typedef struct _RwObjectHasFrame;
typedef struct tagiFloor;
typedef struct iConditionRuntime;
typedef struct _p2Geom;
typedef struct _RpWorldSector;
typedef struct _RxPipelineRequiresCluster;
typedef struct tagxPhysicsObject;
typedef struct xRule;
typedef struct RWInfo;
typedef struct _FCinfo;
typedef struct _RpMeshHeader;
typedef struct tagP2Mesh;
typedef struct tagiFloorTri;
typedef struct _iVFXResource;
typedef struct _RwTexDictionary;
typedef struct AppCamera;
typedef struct tagiAnimFrame;
typedef struct iRuleResource;
typedef struct _rxReq;
typedef struct _RpWorld;
typedef struct tagXAnim;
typedef struct RwSkel;
typedef struct iActorRuntime;
typedef struct _RpClump;
typedef struct RsMouse;
typedef struct Vector4D;
typedef struct Camera;
typedef struct tagXStreamDirectoryEntry;
typedef struct _RwObject;
typedef struct tagxStateMgr;
typedef struct _iSFXResource;
typedef struct _RpCollSector;
typedef struct _RwCamera;
typedef struct _RwRaster;
typedef struct PsMouse;
typedef struct _RxOutputSpec;
typedef struct _iEntryPointRuntime;
typedef struct iEntryPointResource;
typedef struct _RwLLLink;
typedef struct tagxStateLink;
typedef struct _RpMaterialList;
typedef struct tagiAnimRuntime;
typedef struct _RwBBox;
typedef struct _RxClusterRef;
typedef struct tagP2VERTEX;
typedef struct xScene;
typedef struct xAction;
typedef struct _RpMaterial;
typedef struct iMarkerResource;
typedef struct tagP2MeshVertex;
typedef struct _RxIoSpec;
typedef struct xCamera;
typedef struct _RwRGBA;
typedef struct xCondition;
typedef struct xLight;
typedef struct _iLightRuntime;
typedef struct _RxNodeMethods;
typedef struct _RwFrustumPlane;
typedef struct iLightResource;
typedef struct p2CameraVersion;
typedef enum _RxClusterForcePresent;
typedef struct _RwMatrix;
typedef struct _RxPacket;
typedef struct _RwTexCoords;
typedef enum _RxNodeDefEditable;
typedef struct _RxClusterUnion;
typedef struct tagiMesh;
typedef enum _RwTextureAddressMode;
typedef struct _RxCluster;
typedef struct _RwPlane;
typedef struct _RwLinkList;
typedef struct iCameraResource;
typedef struct _iRenderEffects;
typedef struct tagxPadAction;
typedef struct tagXStreamMDSDirectory;

typedef void(*type_12)(_rwResEntryTag*);
typedef int32(*type_14)(_RxPipelineNode*, _RxPipelineNodeParam*);
typedef int32(*type_19)(_RxNodeDefinition*);
typedef void(*type_25)(_RxNodeDefinition*);
typedef int32(*type_31)(_RxPipelineNode*);
typedef void(*type_34)(_RxPipelineNode*);
typedef _RwObjectHasFrame*(*type_35)(_RwObjectHasFrame*);
typedef _RpWorldSector*(*type_37)(_RpWorldSector*);
typedef int32(*type_44)(_RxPipelineNode*, _RxPipeline*);
typedef void(*type_46)(_xActor*, int32, tagXAnim*, tagXAnimTrigger*);
typedef uint32(*type_53)(_RxPipelineNode*, uint32, uint32, void*);
typedef _RwCamera*(*type_62)(_RwCamera*);
typedef _RwCamera*(*type_68)(_RwCamera*);
typedef _RpClump*(*type_74)(_RpClump*, void*);

typedef p2CameraVersion type_0[5];
typedef _xActor* type_1[13];
typedef uint8 type_2[4];
typedef uint32 type_3[30];
typedef tagXStreamDirectoryEntry type_4[1000];
typedef Vector3D type_5[5];
typedef uint8 type_6[4];
typedef _xActor type_7[1];
typedef int8 type_8[256];
typedef uint8 type_9[14400];
typedef _xActor type_10[4];
typedef uint8 type_11[4];
typedef _xActor type_13[4];
typedef _xActor type_15[1];
typedef _xActor type_16[4];
typedef _RwFrustumPlane type_17[6];
typedef _xActor type_18[4];
typedef int8 type_20[32];
typedef _xActor type_21[4];
typedef int8 type_22[32];
typedef tagxState* type_23[10];
typedef _RwV3d type_24[8];
typedef _xActor type_26[4];
typedef Vector3D type_27[4];
typedef uint16 type_28[3];
typedef _xActor type_29[1];
typedef uint32 type_30[4];
typedef _xActor type_32[4];
typedef _xActor type_33[4];
typedef iTriggerResource* type_36[20];
typedef _xActor type_38[4];
typedef int8 type_39[640];
typedef _xActor type_40[1];
typedef uint16 type_41[3];
typedef uint16 type_42[3];
typedef iTriggerResource* type_43[20];
typedef _xActor type_45[1];
typedef int8 type_47[2048];
typedef _xActor type_48[1];
typedef iTriggerResource* type_49[20];
typedef _xActor type_50[1];
typedef _xActor type_51[1];
typedef int8 type_52[51];
typedef iTriggerResource* type_54[20];
typedef _xActor type_55[1];
typedef uint8 type_56[3];
typedef _xActor type_57[1];
typedef iTriggerResource* type_58[20];
typedef _xActor type_59[1];
typedef _xActor type_60[4];
typedef _RxCluster type_61[1];
typedef iTriggerResource* type_63[20];
typedef int32 type_64[7];
typedef _xActor type_65[4];
typedef tagxStateThread type_66[7];
typedef _xActor type_67[4];
typedef iTriggerResource* type_69[20];
typedef int8 type_70[32];
typedef _xActor type_71[1];
typedef int8 type_72[32];
typedef _xActor type_73[1];
typedef iTriggerResource* type_75[20];
typedef _Env type_76[10];
typedef _xActor type_77[1];
typedef int8 type_78[128];
typedef _xActor type_79[4];
typedef iTriggerResource* type_80[20];
typedef float32 type_81[3];
typedef _xActor type_82[1];
typedef _xActor type_83[4];
typedef uint8 type_84[3];
typedef iTriggerResource* type_85[20];
typedef _xActor type_86[4];
typedef _xActor type_87[2];
typedef iTriggerResource* type_88[20];
typedef iLightResource type_89[2];
typedef _xActor type_90[1];
typedef _xActor type_91[1];
typedef uint8 type_92[4];
typedef iTriggerResource* type_93[20];
typedef _xActor type_94[1];
typedef _xActor type_95[4];
typedef _xActor type_96[4];
typedef _xActor type_97[1];
typedef _xActor type_98[1];
typedef _xActor* type_99[40];
typedef Vector3D type_100[4];
typedef int8 type_101[40];

struct _rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	_rxHeapSuperBlockDescriptor* next;
};

struct _RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

struct _rwResEntryTag
{
	_RwLLLink link;
	int32 size;
	void* owner;
	_rwResEntryTag** ownerRef;
	void(*destroyNotify)(_rwResEntryTag*);
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

struct _RxHeap
{
	uint32 superBlockSize;
	_rxHeapSuperBlockDescriptor* head;
	_rxHeapBlockHeader* headBlock;
	_rxHeapFreeBlock* freeBlocks;
	uint32 entriesAlloced;
	uint32 entriesUsed;
};

struct iActionResource
{
	uint8 m_cmdType;
	uint8 m_cmd;
	uint16 pad;
	uint32 m_cmdParameter;
};

struct _rxHeapBlockHeader
{
	_rxHeapBlockHeader* prev;
	_rxHeapBlockHeader* next;
	uint32 size;
	_rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
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

struct xTrigger
{
	iTriggerResource* m_resource;
};

struct tagXAnimTrigger
{
	uint16 m_frame;
	uint16 m_type;
	uint32 m_data;
};

struct tagFile
{
	int8 m_name[256];
	int32 m_state;
	int32 m_desc;
	uint32 m_fpos;
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

struct tagxStateThread
{
	tagxState* m_state;
	tagXAnimControl* m_animCtl;
	int32 m_deferredWaiting;
	tagxPadAction m_deferred;
	int32 m_rbp;
	tagxState* m_ring[10];
};

struct p2Camera
{
	Vector3D m_pos;
	Vector3D m_rot;
	float32 m_fov;
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

struct _RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	_rxReq* req;
	void* initialisationData;
	uint32 initialisationDataSize;
};

struct tag_xCameraControl
{
	int32 m_sceneID;
	int32 m_camera;
	int32 m_version;
	int32 m_command;
	int32 m_startLoc;
	int32 m_startFrame;
	int32 m_speed;
	int32 m_endLoc;
	int32 m_endFrame;
	int32 m_actualFrame;
	int32 m_animFrame;
};

struct Platform
{
	int32 quit;
};

struct _RwV2d
{
	float32 x;
	float32 y;
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

struct tagP2Weight
{
	uint16 m_joint0;
	uint16 m_joint1;
	float32 m_weight0;
	float32 m_weight1;
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

struct _RpSector
{
	int32 type;
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

enum _rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
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

struct xMarker
{
	iMarkerResource* m_resource;
	void** m_runtime;
};

struct _Env
{
	int8 m_name[32];
	int8 m_value[32];
};

struct Vector3D
{
	float32 x;
	float32 y;
	float32 z;
};

enum _rpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct iActionRuntime
{
	xAction* m_and;
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

struct iDisplayCamera
{
	Vector3D m_pos;
	Vector3D m_rot;
	float32 m_fov;
};

struct _RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

enum _RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
};

struct _RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
};

struct xEntryPoint
{
	iEntryPointResource* m_resource;
	_iEntryPointRuntime* m_runtime;
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

struct _tagxEnv
{
	_tagiEnvRuntime* m_runtime;
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

struct _RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct _tagiEnvRuntime
{
	_RpWorld* world;
	Vector3D world_origin;
	_RwTexDictionary* tex_dict;
};

struct _RwObjectHasFrame
{
	_RwObject object;
	_RwLLLink lFrame;
	_RwObjectHasFrame*(*sync)(_RwObjectHasFrame*);
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

struct iConditionRuntime
{
	xCondition* m_operand;
	uint16 m_match;
	uint16 m_trigger;
};

struct _p2Geom
{
	uint32 m_meshCount;
	tagP2Mesh* m_mesh;
	_iRenderEffects effects;
	_RpClump* m_clump;
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

struct xRule
{
	iRuleResource* m_resource;
	void* m_runtime;
};

struct RWInfo
{
	AppCamera* m_camera;
	RwSkel* m_skel;
};

struct _FCinfo
{
	uint16 nidx[3];
};

struct _RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
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

struct tagiFloorTri
{
	uint16 m_v[3];
	uint16 m_n;
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

struct _RwTexDictionary
{
	_RwObject object;
	_RwLinkList texturesInDict;
	_RwLLLink lInInstance;
};

struct AppCamera : Camera
{
	_RwRaster* backdrop;
	float32 cameraDistance;
	_RwV2d offset;
	_RpWorld* world;
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

struct iRuleResource
{
	uint32 m_actionCount;
	xAction* m_action;
	uint32 m_conditionCount;
	xCondition* m_condition;
};

struct _rxReq
{
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

struct tagXAnim
{
	tagiAnimResource* m_resource;
	tagiAnimRuntime* m_runtime;
};

struct RwSkel
{
	int8* appName;
	int32 maximumWidth;
	int32 maximumHeight;
	RsMouse* mouse;
	Platform* ps;
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

struct _RpClump
{
	_RwObject object;
	_RwLinkList atomicList;
	_RwLLLink inWorldLink;
	_RpClump*(*callback)(_RpClump*, void*);
	uint16 renderFrame;
};

struct RsMouse
{
	_RwV2d pos;
	_RwRaster* raster;
	PsMouse* psmouse;
	int32 draw;
};

struct Vector4D
{
	float32 x;
	float32 y;
	float32 z;
	float32 t;
};

struct Camera
{
	_RwCamera* camera;
	int32 m_Preset;
	float32 m_TetherLength;
	float32 m_TetherHeightPerc;
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

struct _RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
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

struct PsMouse
{
};

struct _RxOutputSpec
{
	int8* name;
	_RxClusterValid* outputClusters;
	_RxClusterValid allOtherClusters;
};

struct _iEntryPointRuntime
{
	uint32 m_enabled;
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

struct _RwLLLink
{
	_RwLLLink* next;
	_RwLLLink* prev;
};

struct tagxStateLink
{
	uint8 m_command;
	uint8 m_flags;
	uint16 m_state;
};

struct _RpMaterialList
{
	_RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct tagiAnimRuntime
{
	void* m_sfx;
	void* m_vfx;
};

struct _RwBBox
{
	_RwV3d sup;
	_RwV3d inf;
};

struct _RxClusterRef
{
	_RxClusterDefinition* clusterDef;
	_RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct tagP2VERTEX
{
	float32 x;
	float32 y;
	float32 z;
	float32 tu;
	float32 tv;
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

struct xAction
{
	iActionResource* m_resource;
	iActionRuntime* m_runtime;
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

struct iMarkerResource
{
	Vector3D m_pos;
};

struct tagP2MeshVertex
{
	float32 m_x;
	float32 m_y;
	float32 m_z;
};

struct _RxIoSpec
{
	uint32 numClustersOfInterest;
	_RxClusterRef* clustersOfInterest;
	_RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	_RxOutputSpec* outputs;
};

struct xCamera
{
	iCameraResource* m_resource;
	void** m_runtime;
};

struct _RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct xCondition
{
	iConditionResource* m_resource;
	iConditionRuntime* m_runtime;
};

struct xLight
{
	iLightResource* m_resource;
	_iLightRuntime* m_runtime;
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

struct _RwFrustumPlane
{
	_RwPlane plane;
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
};

struct iLightResource
{
	uint32 m_type;
	Vector3D m_pos;
	Vector3D m_rot;
	Vector3D m_color;
	int32 m_fov;
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

struct tagiMesh
{
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

struct iCameraResource
{
	uint16 m_plateOffset;
	uint16 m_versions;
	p2CameraVersion m_version[5];
	uint32 m_frameCount;
	p2Camera* m_cameras;
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

struct tagXStreamMDSDirectory
{
	uint32 count;
	tagXStreamDirectoryEntry directory[1000];
};

int8 dbfont_chars[51];
int32 gQuit;
uint32 texX;
uint32 texY;
int32 requestCartRestore;
uint32 _vsync_count;
uint32 gReadTimeout;
uint32 gScreenSaver;
uint32 gLastDoorCheck;
float32 bgz;
int32 gHaveRenderedCharactersAlready;
int32 envCount;
_Env environment[10];
uint8 screen_dump;
uint32 frametime;
uint32 afr_ct;
uint32 afr_ticks[30];
uint32 afr;
uint32 turbo;
ulong32 p2render_t0;
uint32 gTimeDelta;
uint32 gTimeLastFrame;
uint32 gTime;
ulong32 gTimerValue;
float32 deltaFrame;
ulong32 lastTimerValue;
int32 gBootState;
RWInfo gRWInfo;
xScene* xScene_current;
int32 g_scenePendingCamera;
tag_xCameraControl gCamera;
int32 gCartTime;
float32 gTimeSec;
uint32 g_scenePendingScene;
Vector3D g_scenePendingAng;
int32 gPlayerType;
tagxActorDBData* gadb;
int32 g_scenePendingMarker;
uint8 gCartBuffer[14400];
uint32 gSoftReset;
int32 g_sceneSwapPending;
int8 vAssertBuf2[128];
XStreamHeader currentHeader;
int32 gDebugDrawDebugInfo;

void p2MainDoLevelSwap();
void iMainKill();
void iMainInitGame();
int32 iMain();
void iMainNextFrame();
void iMainRender();
int8* iInitEnvGet(int8* name);
void iInitEnvRead();
void iInitEnvRead();
void p2Render();
void iRenderFlip();
void iRenderEnd();
int32 iRenderBegin();
void p2SetCameraPos(_RwCamera* cam, float32 x, float32 y, float32 z);

// p2MainDoLevelSwap__Fv
// Start address: 0x383e90
void p2MainDoLevelSwap()
{
	// Line 724, Address: 0x383e90, Func Offset: 0
	// Line 736, Address: 0x383e98, Func Offset: 0x8
	// Line 738, Address: 0x383ea0, Func Offset: 0x10
	// Line 740, Address: 0x383ea8, Func Offset: 0x18
	// Line 742, Address: 0x383eb0, Func Offset: 0x20
	// Line 745, Address: 0x383eb8, Func Offset: 0x28
	// Line 749, Address: 0x383ec0, Func Offset: 0x30
	// Line 751, Address: 0x383ec8, Func Offset: 0x38
	// Line 752, Address: 0x383ed0, Func Offset: 0x40
	// Line 757, Address: 0x383ed8, Func Offset: 0x48
	// Line 759, Address: 0x383ee0, Func Offset: 0x50
	// Line 760, Address: 0x383ee8, Func Offset: 0x58
	// Line 765, Address: 0x383ef0, Func Offset: 0x60
	// Line 771, Address: 0x383ef8, Func Offset: 0x68
	// Line 772, Address: 0x383f04, Func Offset: 0x74
	// Line 773, Address: 0x383f10, Func Offset: 0x80
	// Line 774, Address: 0x383f18, Func Offset: 0x88
	// Line 779, Address: 0x383f1c, Func Offset: 0x8c
	// Line 780, Address: 0x383f24, Func Offset: 0x94
	// Line 782, Address: 0x383f30, Func Offset: 0xa0
	// Line 783, Address: 0x383f3c, Func Offset: 0xac
	// Line 784, Address: 0x383f44, Func Offset: 0xb4
	// Line 786, Address: 0x383f48, Func Offset: 0xb8
	// Line 787, Address: 0x383f50, Func Offset: 0xc0
	// Func End, Address: 0x383f60, Func Offset: 0xd0
}

// iMainKill__Fv
// Start address: 0x383f60
void iMainKill()
{
	// Line 718, Address: 0x383f60, Func Offset: 0
	// Line 719, Address: 0x383f68, Func Offset: 0x8
	// Line 720, Address: 0x383f70, Func Offset: 0x10
	// Line 721, Address: 0x383f80, Func Offset: 0x20
	// Func End, Address: 0x383f90, Func Offset: 0x30
}

// iMainInitGame__Fv
// Start address: 0x383f90
void iMainInitGame()
{
	// Line 697, Address: 0x383f90, Func Offset: 0
	// Line 699, Address: 0x383f98, Func Offset: 0x8
	// Line 702, Address: 0x383fa4, Func Offset: 0x14
	// Line 705, Address: 0x384024, Func Offset: 0x94
	// Line 708, Address: 0x38402c, Func Offset: 0x9c
	// Line 709, Address: 0x384038, Func Offset: 0xa8
	// Line 710, Address: 0x384040, Func Offset: 0xb0
	// Line 714, Address: 0x384044, Func Offset: 0xb4
	// Line 716, Address: 0x38404c, Func Offset: 0xbc
	// Func End, Address: 0x38405c, Func Offset: 0xcc
}

// iMain__Fv
// Start address: 0x384060
int32 iMain()
{
	// Line 673, Address: 0x384060, Func Offset: 0
	// Line 675, Address: 0x384068, Func Offset: 0x8
	// Line 676, Address: 0x384078, Func Offset: 0x18
	// Line 678, Address: 0x384080, Func Offset: 0x20
	// Line 680, Address: 0x384088, Func Offset: 0x28
	// Line 683, Address: 0x384094, Func Offset: 0x34
	// Line 687, Address: 0x38409c, Func Offset: 0x3c
	// Line 688, Address: 0x3840a8, Func Offset: 0x48
	// Line 689, Address: 0x3840b4, Func Offset: 0x54
	// Line 690, Address: 0x3840bc, Func Offset: 0x5c
	// Line 693, Address: 0x3840c0, Func Offset: 0x60
	// Line 694, Address: 0x3840c4, Func Offset: 0x64
	// Func End, Address: 0x3840d4, Func Offset: 0x74
}

// iMainNextFrame__FUl
// Start address: 0x3840e0
void iMainNextFrame()
{
	// Line 643, Address: 0x3840e0, Func Offset: 0
	// Line 664, Address: 0x3840e8, Func Offset: 0x8
	// Line 666, Address: 0x3840f0, Func Offset: 0x10
	// Line 670, Address: 0x3840f8, Func Offset: 0x18
	// Func End, Address: 0x384108, Func Offset: 0x28
}

// iMainRender__Fv
// Start address: 0x384110
void iMainRender()
{
	uint32 t1;
	uint32 t0;
	// Line 469, Address: 0x384110, Func Offset: 0
	// Line 471, Address: 0x384120, Func Offset: 0x10
	// Line 478, Address: 0x384124, Func Offset: 0x14
	// Line 489, Address: 0x38412c, Func Offset: 0x1c
	// Line 490, Address: 0x384138, Func Offset: 0x28
	// Line 498, Address: 0x384194, Func Offset: 0x84
	// Line 507, Address: 0x384198, Func Offset: 0x88
	// Line 510, Address: 0x3841d0, Func Offset: 0xc0
	// Line 515, Address: 0x3841e4, Func Offset: 0xd4
	// Line 520, Address: 0x3841ec, Func Offset: 0xdc
	// Line 522, Address: 0x3841fc, Func Offset: 0xec
	// Line 529, Address: 0x384210, Func Offset: 0x100
	// Line 538, Address: 0x384244, Func Offset: 0x134
	// Line 539, Address: 0x384250, Func Offset: 0x140
	// Line 540, Address: 0x384260, Func Offset: 0x150
	// Line 550, Address: 0x384268, Func Offset: 0x158
	// Line 553, Address: 0x384294, Func Offset: 0x184
	// Line 554, Address: 0x3842a4, Func Offset: 0x194
	// Line 561, Address: 0x3842b4, Func Offset: 0x1a4
	// Line 562, Address: 0x3842bc, Func Offset: 0x1ac
	// Line 563, Address: 0x3842c4, Func Offset: 0x1b4
	// Line 564, Address: 0x3842cc, Func Offset: 0x1bc
	// Line 565, Address: 0x3842d8, Func Offset: 0x1c8
	// Line 567, Address: 0x3842e8, Func Offset: 0x1d8
	// Line 572, Address: 0x3842f0, Func Offset: 0x1e0
	// Line 578, Address: 0x3842fc, Func Offset: 0x1ec
	// Line 633, Address: 0x384304, Func Offset: 0x1f4
	// Line 636, Address: 0x384310, Func Offset: 0x200
	// Line 637, Address: 0x384318, Func Offset: 0x208
	// Func End, Address: 0x384330, Func Offset: 0x220
}

// iInitEnvGet__FPc
// Start address: 0x384330
int8* iInitEnvGet(int8* name)
{
	int32 env;
	// Line 420, Address: 0x384330, Func Offset: 0
	// Line 424, Address: 0x384344, Func Offset: 0x14
	// Line 426, Address: 0x384350, Func Offset: 0x20
	// Line 428, Address: 0x384374, Func Offset: 0x44
	// Line 430, Address: 0x384390, Func Offset: 0x60
	// Line 432, Address: 0x3843a4, Func Offset: 0x74
	// Line 434, Address: 0x3843b8, Func Offset: 0x88
	// Line 435, Address: 0x3843bc, Func Offset: 0x8c
	// Func End, Address: 0x3843d4, Func Offset: 0xa4
}

// iInitEnvRead__FPci
// Start address: 0x3843e0
void iInitEnvRead()
{
	// Line 415, Address: 0x3843e0, Func Offset: 0
	// Line 416, Address: 0x3843e8, Func Offset: 0x8
	// Line 417, Address: 0x3843f0, Func Offset: 0x10
	// Func End, Address: 0x384400, Func Offset: 0x20
}

// iInitEnvRead__Fv
// Start address: 0x384400
void iInitEnvRead()
{
	uint32 numBytesRead;
	int8 buffer[640];
	int8* b;
	uint32 size;
	int16 err;
	int8* eol;
	int8* eq;
	tagFile ini;
	// Line 347, Address: 0x384400, Func Offset: 0
	// Line 371, Address: 0x384414, Func Offset: 0x14
	// Line 372, Address: 0x384430, Func Offset: 0x30
	// Line 374, Address: 0x3844d0, Func Offset: 0xd0
	// Line 375, Address: 0x3844e8, Func Offset: 0xe8
	// Line 377, Address: 0x384588, Func Offset: 0x188
	// Line 378, Address: 0x384598, Func Offset: 0x198
	// Line 380, Address: 0x384638, Func Offset: 0x238
	// Line 382, Address: 0x384648, Func Offset: 0x248
	// Line 383, Address: 0x384668, Func Offset: 0x268
	// Line 385, Address: 0x384708, Func Offset: 0x308
	// Line 387, Address: 0x384714, Func Offset: 0x314
	// Line 388, Address: 0x384718, Func Offset: 0x318
	// Line 389, Address: 0x38471c, Func Offset: 0x31c
	// Line 391, Address: 0x384724, Func Offset: 0x324
	// Line 393, Address: 0x3847d0, Func Offset: 0x3d0
	// Line 394, Address: 0x3847e4, Func Offset: 0x3e4
	// Line 396, Address: 0x384888, Func Offset: 0x488
	// Line 397, Address: 0x38489c, Func Offset: 0x49c
	// Line 398, Address: 0x3848a4, Func Offset: 0x4a4
	// Line 400, Address: 0x3848a8, Func Offset: 0x4a8
	// Line 401, Address: 0x3848ac, Func Offset: 0x4ac
	// Line 402, Address: 0x3848cc, Func Offset: 0x4cc
	// Line 404, Address: 0x3848f0, Func Offset: 0x4f0
	// Line 406, Address: 0x3848fc, Func Offset: 0x4fc
	// Line 409, Address: 0x384904, Func Offset: 0x504
	// Line 410, Address: 0x384908, Func Offset: 0x508
	// Line 411, Address: 0x384918, Func Offset: 0x518
	// Func End, Address: 0x384934, Func Offset: 0x534
}

// p2Render__Fv
// Start address: 0x384940
void p2Render()
{
	// Line 264, Address: 0x384940, Func Offset: 0
	// Line 265, Address: 0x384948, Func Offset: 0x8
	// Line 270, Address: 0x384954, Func Offset: 0x14
	// Line 273, Address: 0x384960, Func Offset: 0x20
	// Line 274, Address: 0x384968, Func Offset: 0x28
	// Line 277, Address: 0x384970, Func Offset: 0x30
	// Line 280, Address: 0x384978, Func Offset: 0x38
	// Line 284, Address: 0x384980, Func Offset: 0x40
	// Line 288, Address: 0x384990, Func Offset: 0x50
	// Line 290, Address: 0x3849a0, Func Offset: 0x60
	// Line 294, Address: 0x3849b0, Func Offset: 0x70
	// Line 296, Address: 0x3849b8, Func Offset: 0x78
	// Line 299, Address: 0x3849c0, Func Offset: 0x80
	// Line 301, Address: 0x3849c8, Func Offset: 0x88
	// Line 304, Address: 0x3849d0, Func Offset: 0x90
	// Line 306, Address: 0x3849d8, Func Offset: 0x98
	// Line 310, Address: 0x3849e0, Func Offset: 0xa0
	// Line 316, Address: 0x3849f0, Func Offset: 0xb0
	// Func End, Address: 0x384a00, Func Offset: 0xc0
}

// iRenderFlip__Fv
// Start address: 0x384a00
void iRenderFlip()
{
	// Line 245, Address: 0x384a00, Func Offset: 0
	// Line 247, Address: 0x384a08, Func Offset: 0x8
	// Line 248, Address: 0x384a2c, Func Offset: 0x2c
	// Func End, Address: 0x384a3c, Func Offset: 0x3c
}

// iRenderEnd__Fv
// Start address: 0x384a40
void iRenderEnd()
{
	// Line 233, Address: 0x384a40, Func Offset: 0
	// Line 234, Address: 0x384a48, Func Offset: 0x8
	// Line 237, Address: 0x384a50, Func Offset: 0x10
	// Line 240, Address: 0x384a58, Func Offset: 0x18
	// Line 242, Address: 0x384a6c, Func Offset: 0x2c
	// Func End, Address: 0x384a7c, Func Offset: 0x3c
}

// iRenderBegin__Fv
// Start address: 0x384a80
int32 iRenderBegin()
{
	_RwRGBA BKGColor;
	// Line 222, Address: 0x384a80, Func Offset: 0
	// Line 223, Address: 0x384a88, Func Offset: 0x8
	// Line 226, Address: 0x384a94, Func Offset: 0x14
	// Line 229, Address: 0x384ab0, Func Offset: 0x30
	// Line 230, Address: 0x384ad0, Func Offset: 0x50
	// Func End, Address: 0x384ae0, Func Offset: 0x60
}

// p2SetCameraPos__FP9_RwCamerafff
// Start address: 0x384ae0
void p2SetCameraPos(_RwCamera* cam, float32 x, float32 y, float32 z)
{
	_RwFrame* f;
	_RwMatrix* m;
	_RwV3d* new_pos;
	// Line 126, Address: 0x384ae0, Func Offset: 0
	// Line 131, Address: 0x384b08, Func Offset: 0x28
	// Line 132, Address: 0x384b14, Func Offset: 0x34
	// Line 134, Address: 0x384b1c, Func Offset: 0x3c
	// Line 135, Address: 0x384b2c, Func Offset: 0x4c
	// Line 137, Address: 0x384b34, Func Offset: 0x54
	// Line 139, Address: 0x384b40, Func Offset: 0x60
	// Line 140, Address: 0x384b44, Func Offset: 0x64
	// Line 141, Address: 0x384b48, Func Offset: 0x68
	// Line 143, Address: 0x384b4c, Func Offset: 0x6c
	// Line 144, Address: 0x384b58, Func Offset: 0x78
	// Line 147, Address: 0x384b64, Func Offset: 0x84
	// Func End, Address: 0x384b88, Func Offset: 0xa8
}

