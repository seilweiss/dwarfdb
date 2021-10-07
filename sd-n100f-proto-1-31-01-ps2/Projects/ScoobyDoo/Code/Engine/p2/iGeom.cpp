typedef struct xNavLink;
typedef struct iActionRuntime;
typedef struct Vector3D;
typedef struct iDisplayCamera;
typedef struct _p2Geom;
typedef struct _iRenderEffects;
typedef struct _RxClusterDefinition;
typedef struct _RwRaster;
typedef struct _RxOutputSpec;
typedef struct _RxPipelineNode;
typedef struct iTriggerResource;
typedef struct _xActor;
typedef struct tagXAnimControl;
typedef struct _rxHeapSuperBlockDescriptor;
typedef struct xNavPoint;
typedef struct tagP2MeshVertex;
typedef struct _rwResEntryTag;
typedef struct _xObj;
typedef struct tagxPhysicsObject;
typedef struct tagXStreamMDSDirectory;
typedef struct _RxHeap;
typedef struct _rxHeapBlockHeader;
typedef struct xParCmd;
typedef struct _RpWorldSector;
typedef enum _RxClusterValidityReq;
typedef struct tagP2VERTEX;
typedef struct tagP2Mesh;
typedef struct _rxHeapFreeBlock;
typedef struct iConditionResource;
typedef struct xTrigger;
typedef struct _RxPipelineNodeTopSortData;
typedef struct iConditionRuntime;
typedef struct tagiJointResource;
typedef struct tagiAnimFrame;
typedef struct _RpClump;
typedef struct _RpMeshHeader;
typedef struct _RxPipelineNodeParam;
typedef enum _RwTextureFilterMode;
typedef struct _RxPipelineCluster;
typedef struct _RpWorld;
typedef enum _rxEmbeddedPacketState;
typedef struct tagiJointRuntime;
typedef struct xEntryPoint;
typedef struct xRule;
typedef struct iEntryPointResource;
typedef struct _RpCollSector;
typedef struct _RxNodeDefinition;
typedef struct tagiFloorTri;
typedef enum _RxClusterValid;
typedef struct tagXAnim;
typedef struct iRuleResource;
typedef struct _iEntryPointRuntime;
typedef struct _RwSurfaceProperties;
typedef struct xScene;
typedef struct tagiAnimResource;
typedef struct _RpSector;
typedef struct iObjRuntime;
typedef struct tagiAnimRuntime;
typedef struct XStreamHeader;
typedef struct tagP2Weight;
typedef struct _RwV3d;
typedef struct xPar;
typedef struct tagxStateLink;
typedef struct tagxParSys;
typedef struct _RwLLLink;
typedef struct xCamera;
typedef struct tagxActorDBData;
typedef struct _RpMaterialList;
typedef struct _RxPipelineRequiresCluster;
typedef struct xLight;
typedef struct iLightResource;
typedef struct _RpMaterial;
typedef struct _FCinfo;
typedef struct tagiFloor;
typedef struct p2Camera;
typedef struct _iLightRuntime;
typedef struct tagXAnimTrigger;
typedef struct _RwTexDictionary;
typedef struct _RxPipeline;
typedef struct tagParCmdList;
typedef struct _rxReq;
typedef struct _xModel;
typedef struct xAction;
typedef struct tagxStateThread;
typedef struct _RpPolygon;
typedef struct _RwObject;
typedef struct Vector4D;
typedef struct xSkel;
typedef struct tagxState;
typedef struct tagXStreamDirectoryEntry;
typedef struct _RpVertexNormal;
typedef struct tagiMesh;
typedef struct iMarkerResource;
typedef struct xMarker;
typedef struct _RwTexCoords;
typedef struct xCondition;
typedef struct iActorRuntime;
typedef struct _RwRGBA;
typedef struct tagxStateMgr;
typedef struct p2CameraVersion;
typedef struct _RxClusterRef;
typedef struct _RwTexture;
typedef struct _RwBBox;
typedef struct tagiSkelResource;
typedef struct tagiModelResource;
typedef struct _tagiEnvRuntime;
typedef struct _iVFXResource;
typedef struct _RxIoSpec;
typedef struct iCamera;
typedef struct iCameraResource;
typedef struct _RxNodeMethods;
typedef enum _RxClusterForcePresent;
typedef struct _iSFXResource;
typedef struct _RxPacket;
typedef struct tagiSkelRuntime;
typedef struct tagiModelRuntime;
typedef enum _RxNodeDefEditable;
typedef struct _RxClusterUnion;
typedef struct tagMATRIX;
typedef enum _RwTextureAddressMode;
typedef struct _RxCluster;
typedef struct _RwLinkList;
typedef struct iActionResource;
typedef struct _tagxEnv;
typedef struct tagxPadAction;
typedef enum _rpWorldRenderOrder;

typedef _RpWorldSector*(*type_11)(_RpWorldSector*);
typedef void(*type_12)(_rwResEntryTag*);
typedef int32(*type_18)(_RxPipelineNode*, _RxPipelineNodeParam*);
typedef int32(*type_23)(_RxNodeDefinition*);
typedef void(*type_27)(_RxNodeDefinition*);
typedef int32(*type_33)(_RxPipelineNode*);
typedef void(*type_36)(_RxPipelineNode*);
typedef int32(*type_43)(_RxPipelineNode*, _RxPipeline*);
typedef _RpClump*(*type_48)(_RpClump*, void*);
typedef uint32(*type_51)(_RxPipelineNode*, uint32, uint32, void*);
typedef void(*type_75)(_xActor*, int32, tagXAnim*, tagXAnimTrigger*);

typedef uint8 type_0[3];
typedef _xActor type_1[4];
typedef uint16 type_2[3];
typedef uint16 type_3[3];
typedef _xActor type_4[4];
typedef iTriggerResource* type_5[20];
typedef tagxParSys type_6[37];
typedef _xActor type_7[2];
typedef _xActor type_8[1];
typedef tagXStreamDirectoryEntry type_9[1000];
typedef iTriggerResource* type_10[20];
typedef Vector3D type_13[4];
typedef _xActor type_14[1];
typedef Vector4D type_15[20];
typedef _xActor type_16[1];
typedef iTriggerResource* type_17[20];
typedef _xActor type_19[4];
typedef Vector3D type_20[5];
typedef _xActor type_21[4];
typedef iTriggerResource* type_22[20];
typedef _xActor type_24[1];
typedef uint16 type_25[3];
typedef _xActor type_26[1];
typedef iTriggerResource* type_28[20];
typedef _xActor* type_29[40];
typedef int8 type_30[51];
typedef uint32 type_31[4];
typedef int8 type_32[40];
typedef iTriggerResource* type_34[20];
typedef _xActor* type_35[13];
typedef _xActor type_37[1];
typedef iTriggerResource* type_38[20];
typedef _xActor type_39[4];
typedef float32 type_40[20];
typedef _xActor type_41[4];
typedef iTriggerResource* type_42[20];
typedef _xActor type_44[1];
typedef _xActor type_45[4];
typedef iTriggerResource* type_46[20];
typedef int8 type_47[2048];
typedef _xActor type_49[4];
typedef _xActor type_50[4];
typedef iTriggerResource* type_52[20];
typedef _xActor type_53[4];
typedef float32 type_54[4];
typedef uint8 type_55[2];
typedef _xActor type_56[1];
typedef tagxState* type_57[10];
typedef float32 type_58[3];
typedef iTriggerResource* type_59[20];
typedef _xActor type_60[4];
typedef _RxCluster type_61[1];
typedef _xActor type_62[4];
typedef _xActor type_63[4];
typedef _xActor type_64[1];
typedef uint8 type_65[4];
typedef iLightResource type_66[2];
typedef int8 type_67[32];
typedef _xActor type_68[1];
typedef int8 type_69[4];
typedef int8 type_70[32];
typedef _xActor type_71[1];
typedef uint8 type_72[4];
typedef _xActor type_73[1];
typedef uint8 type_74[4];
typedef _xActor type_76[1];
typedef uint8 type_77[3];
typedef Vector3D type_78[20];
typedef int8 type_79[128];
typedef _xActor type_80[1];
typedef uint8 type_81[3];
typedef float32 type_82[20];
typedef _xActor type_83[1];
typedef float32 type_84[2];
typedef _xActor type_85[1];
typedef uint8 type_86[4];
typedef float32 type_87[2];
typedef float32 type_88[16];
typedef _xActor type_89[4];
typedef uint8 type_90[4];
typedef uint8 type_91[4];
typedef _xActor type_92[4];
typedef p2CameraVersion type_93[5];
typedef _xActor type_94[4];
typedef Vector3D type_95[4];
typedef _xActor type_96[1];
typedef int32 type_97[7];
typedef _xActor type_98[1];
typedef tagxStateThread type_99[7];
typedef _xActor type_100[1];
typedef _xActor type_101[4];
typedef uint8 type_102[4];
typedef _xActor type_103[1];
typedef iTriggerResource* type_104[20];

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

struct iActionRuntime
{
	xAction* m_and;
};

struct Vector3D
{
	float32 x;
	float32 y;
	float32 z;
};

struct iDisplayCamera
{
	Vector3D m_pos;
	Vector3D m_rot;
	float32 m_fov;
};

struct _p2Geom
{
	uint32 m_meshCount;
	tagP2Mesh* m_mesh;
	_iRenderEffects effects;
	_RpClump* m_clump;
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

struct tagP2MeshVertex
{
	float32 m_x;
	float32 m_y;
	float32 m_z;
};

struct _rwResEntryTag
{
	_RwLLLink link;
	int32 size;
	void* owner;
	_rwResEntryTag** ownerRef;
	void(*destroyNotify)(_rwResEntryTag*);
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

struct tagXStreamMDSDirectory
{
	uint32 count;
	tagXStreamDirectoryEntry directory[1000];
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

enum _RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct tagP2VERTEX
{
	float32 x;
	float32 y;
	float32 z;
	float32 tu;
	float32 tv;
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

struct _rxHeapFreeBlock
{
	uint32 size;
	_rxHeapBlockHeader* ptr;
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

struct _RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	_rxReq* req;
	void* initialisationData;
	uint32 initialisationDataSize;
};

struct iConditionRuntime
{
	xCondition* m_operand;
	uint16 m_match;
	uint16 m_trigger;
};

struct tagiJointResource
{
	tagMATRIX m_orientMatrix;
	Vector3D m_home;
	uint32 m_parent;
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

struct _RpClump
{
	_RwObject object;
	_RwLinkList atomicList;
	_RwLLLink inWorldLink;
	_RpClump*(*callback)(_RpClump*, void*);
	uint16 renderFrame;
};

struct _RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct _RxPipelineNodeParam
{
	void* dataParam;
	_RxHeap* heap;
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

struct _RxPipelineCluster
{
	_RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
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

enum _rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
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

struct xEntryPoint
{
	iEntryPointResource* m_resource;
	_iEntryPointRuntime* m_runtime;
};

struct xRule
{
	iRuleResource* m_resource;
	void* m_runtime;
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

struct _RxNodeDefinition
{
	int8* name;
	_RxNodeMethods nodeMethods;
	_RxIoSpec io;
	uint32 pipelineNodePrivateDataSize;
	_RxNodeDefEditable editable;
	int32 InputPipesCnt;
};

struct tagiFloorTri
{
	uint16 m_v[3];
	uint16 m_n;
};

enum _RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct tagXAnim
{
	tagiAnimResource* m_resource;
	tagiAnimRuntime* m_runtime;
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

struct _RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
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

struct iObjRuntime
{
	int16 m_flag;
	int16 m_pad;
	_p2Geom* m_geom;
	float32 m_bradius;
	tagxPhysicsObject m_phys;
};

struct tagiAnimRuntime
{
	void* m_sfx;
	void* m_vfx;
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

struct tagP2Weight
{
	uint16 m_joint0;
	uint16 m_joint1;
	float32 m_weight0;
	float32 m_weight1;
};

struct _RwV3d
{
	float32 x;
	float32 y;
	float32 z;
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

struct tagxStateLink
{
	uint8 m_command;
	uint8 m_flags;
	uint16 m_state;
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

struct _RwLLLink
{
	_RwLLLink* next;
	_RwLLLink* prev;
};

struct xCamera
{
	iCameraResource* m_resource;
	void** m_runtime;
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

struct _RpMaterialList
{
	_RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct _RxPipelineRequiresCluster
{
	_RxClusterDefinition* clusterDef;
	_RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
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

struct _RpMaterial
{
	_RwTexture* texture;
	_RwRGBA color;
	_RxPipeline* pipeline;
	_RwSurfaceProperties surfaceProps;
	int16 refCount;
	int16 pad;
};

struct _FCinfo
{
	uint16 nidx[3];
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

struct p2Camera
{
	Vector3D m_pos;
	Vector3D m_rot;
	float32 m_fov;
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

struct tagXAnimTrigger
{
	uint16 m_frame;
	uint16 m_type;
	uint32 m_data;
};

struct _RwTexDictionary
{
	_RwObject object;
	_RwLinkList texturesInDict;
	_RwLLLink lInInstance;
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

struct tagParCmdList
{
	int32 m_numCmd;
	xParCmd* m_cmd;
	xParCmd* m_lastCmd;
	tagParCmdList* m_prev;
	tagParCmdList* m_next;
};

struct _rxReq
{
};

struct _xModel
{
	tagiModelResource* m_resource;
	tagiModelRuntime* m_runtime;
};

struct xAction
{
	iActionResource* m_resource;
	iActionRuntime* m_runtime;
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

struct Vector4D
{
	float32 x;
	float32 y;
	float32 z;
	float32 t;
};

struct xSkel
{
	tagiSkelResource* m_resource;
	tagiSkelRuntime* m_runtime;
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

struct tagXStreamDirectoryEntry
{
	uint32 id;
	uint32 type;
	uint32 offset;
	uint32 length;
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

struct iMarkerResource
{
	Vector3D m_pos;
};

struct xMarker
{
	iMarkerResource* m_resource;
	void** m_runtime;
};

struct _RwTexCoords
{
	float32 u;
	float32 v;
};

struct xCondition
{
	iConditionResource* m_resource;
	iConditionRuntime* m_runtime;
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

struct _RxClusterRef
{
	_RxClusterDefinition* clusterDef;
	_RxClusterForcePresent forcePresent;
	uint32 reserved;
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

struct tagiSkelResource
{
	uint32 m_assetID;
	uint32 m_jointCount;
	tagiJointResource* m_joints;
};

struct tagiModelResource
{
	uint32 m_assetID;
	int32 m_meshCount;
	tagP2Mesh* m_mesh;
};

struct _tagiEnvRuntime
{
	_RpWorld* world;
	Vector3D world_origin;
	_RwTexDictionary* tex_dict;
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

struct _RxIoSpec
{
	uint32 numClustersOfInterest;
	_RxClusterRef* clustersOfInterest;
	_RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	_RxOutputSpec* outputs;
};

struct iCamera
{
	int32 roll;
	Vector3D look_at;
	Vector3D look_from;
	Vector3D pos;
	Vector3D view;
	Vector3D up;
	Vector3D target_pos;
	float32 m[16];
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

enum _RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
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

struct tagiSkelRuntime
{
	tagiJointRuntime* m_joints;
};

struct tagiModelRuntime
{
	int32 placeholder;
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

enum _rpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

int8 dbfont_chars[51];
int32 ignorePass;
float32 pass0ShadowCol;
float32 pass0AlphaCol;
float32 pass1ShadowCol;
float32 pass1AlphaCol;
int32 realshadow;
Vector3D sunlight;
int32 debugAmbient;
Vector3D debuglight;
Vector3D debuglightoffset;
Vector3D debuglightcolor;
int32 shadeGeom;
Vector3D wlight;
float32 lightShadeFactor[20];
Vector4D light[20];
float32 lightDelta[20];
Vector3D lightColor[20];
int32 lightCount;
Vector3D ambient;
uint8 show_skeleton;
uint8 show_rots;
int32 razNormalXform;
int32 razNormalize;
int32 razNormalHome;
uint32 see_mesh;
uint32 see_face;
float32 zclip;
int8 vAssertBuf2[128];
XStreamHeader currentHeader;
uint8 debug_mode;
xScene* xScene_current;
tagxParSys gParSys[37];
tagxActorDBData* gadb;
iCamera icamera;
float32 g_DEGTORAD;

void iGeomGetJointWorldPos(xSkel* skel, int32 jointIndex, Vector3D* p);
void iEffectReflect();
void iEffectSetFlag(_iRenderEffects* effects, int32 flag, int32 onoff);
int32 iEffectDone(_iRenderEffects* effects);
void iEffectFadeStart(_iRenderEffects* effects, int32 flag, int32 time);
void iEffectFadeInfo(_iRenderEffects* fx, int32 r, int32 g, int32 b, int32 mode, int32 idx);
void iGeomInitRenderEffects(_p2Geom* geom);
void iMeshDraw();
void p2GeomDrawScreenBoxARGB();
void p2GeomDrawScreenBox();
void p2GeomDrawScreen();
void iGeomSetUVUsingMeshPart(uint32 destModelID, int32 destPartID, uint32 modelID, int32 partID);
void iGeomCalcBoundingBox(uint32 modelID, int32 partID, Vector3D* a, Vector3D* b);
void iGeomSetMeshVisibility(void* data, int32 number, int32 visible);
void p2GeomDraw();
void p2GeomDrawShadow(_p2Geom* geom, _xActor* actor, _xObj* obj);
void iGeomAssign(_xActor* actor, _xModel* model);

// iGeomGetJointWorldPos__FP5xSkeliP8Vector3D
// Start address: 0x3865a0
void iGeomGetJointWorldPos(xSkel* skel, int32 jointIndex, Vector3D* p)
{
	tagiJointRuntime* joint;
	// Line 2748, Address: 0x3865a0, Func Offset: 0
	// Line 2751, Address: 0x3865c0, Func Offset: 0x20
	// Line 2752, Address: 0x386660, Func Offset: 0xc0
	// Line 2754, Address: 0x386700, Func Offset: 0x160
	// Line 2755, Address: 0x3867a4, Func Offset: 0x204
	// Line 2756, Address: 0x386844, Func Offset: 0x2a4
	// Line 2758, Address: 0x3868f0, Func Offset: 0x350
	// Line 2759, Address: 0x386994, Func Offset: 0x3f4
	// Line 2761, Address: 0x3869b4, Func Offset: 0x414
	// Line 2762, Address: 0x3869bc, Func Offset: 0x41c
	// Line 2763, Address: 0x3869c4, Func Offset: 0x424
	// Line 2764, Address: 0x3869cc, Func Offset: 0x42c
	// Func End, Address: 0x3869e8, Func Offset: 0x448
}

// iEffectReflect__FP15_iRenderEffectsiiii
// Start address: 0x3869f0
void iEffectReflect()
{
	// Line 2733, Address: 0x3869f0, Func Offset: 0
	// Func End, Address: 0x3869f8, Func Offset: 0x8
}

// iEffectSetFlag__FP15_iRenderEffectsii
// Start address: 0x386a00
void iEffectSetFlag(_iRenderEffects* effects, int32 flag, int32 onoff)
{
	// Line 2724, Address: 0x386a00, Func Offset: 0
	// Line 2725, Address: 0x386a08, Func Offset: 0x8
	// Line 2727, Address: 0x386a1c, Func Offset: 0x1c
	// Line 2728, Address: 0x386a2c, Func Offset: 0x2c
	// Func End, Address: 0x386a34, Func Offset: 0x34
}

// iEffectDone__FP15_iRenderEffects
// Start address: 0x386a40
int32 iEffectDone(_iRenderEffects* effects)
{
	// Line 2716, Address: 0x386a40, Func Offset: 0
	// Line 2717, Address: 0x386a50, Func Offset: 0x10
	// Line 2719, Address: 0x386af0, Func Offset: 0xb0
	// Line 2720, Address: 0x386b00, Func Offset: 0xc0
	// Func End, Address: 0x386b14, Func Offset: 0xd4
}

// iEffectFadeStart__FP15_iRenderEffectsii
// Start address: 0x386b20
void iEffectFadeStart(_iRenderEffects* effects, int32 flag, int32 time)
{
	// Line 2707, Address: 0x386b20, Func Offset: 0
	// Line 2708, Address: 0x386b40, Func Offset: 0x20
	// Line 2710, Address: 0x386be0, Func Offset: 0xc0
	// Line 2711, Address: 0x386bec, Func Offset: 0xcc
	// Line 2712, Address: 0x386bf0, Func Offset: 0xd0
	// Line 2713, Address: 0x386bf4, Func Offset: 0xd4
	// Func End, Address: 0x386c10, Func Offset: 0xf0
}

// iEffectFadeInfo__FP15_iRenderEffectsiiiii
// Start address: 0x386c10
void iEffectFadeInfo(_iRenderEffects* fx, int32 r, int32 g, int32 b, int32 mode, int32 idx)
{
	uint8* color;
	// Line 2672, Address: 0x386c10, Func Offset: 0
	// Line 2675, Address: 0x386c48, Func Offset: 0x38
	// Line 2676, Address: 0x386ce8, Func Offset: 0xd8
	// Line 2677, Address: 0x386d94, Func Offset: 0x184
	// Line 2679, Address: 0x386e44, Func Offset: 0x234
	// Line 2681, Address: 0x386e5c, Func Offset: 0x24c
	// Line 2682, Address: 0x386e64, Func Offset: 0x254
	// Line 2683, Address: 0x386e68, Func Offset: 0x258
	// Line 2684, Address: 0x386e70, Func Offset: 0x260
	// Line 2685, Address: 0x386e80, Func Offset: 0x270
	// Line 2686, Address: 0x386e88, Func Offset: 0x278
	// Line 2690, Address: 0x386e8c, Func Offset: 0x27c
	// Line 2691, Address: 0x386ea8, Func Offset: 0x298
	// Line 2692, Address: 0x386ec4, Func Offset: 0x2b4
	// Line 2695, Address: 0x386ee0, Func Offset: 0x2d0
	// Line 2696, Address: 0x386ee4, Func Offset: 0x2d4
	// Line 2697, Address: 0x386ee8, Func Offset: 0x2d8
	// Line 2700, Address: 0x386eec, Func Offset: 0x2dc
	// Line 2701, Address: 0x386efc, Func Offset: 0x2ec
	// Line 2704, Address: 0x386f24, Func Offset: 0x314
	// Func End, Address: 0x386f4c, Func Offset: 0x33c
}

// iGeomInitRenderEffects__FP7_p2Geom
// Start address: 0x386f50
void iGeomInitRenderEffects(_p2Geom* geom)
{
	_iRenderEffects* fx;
	// Line 2649, Address: 0x386f50, Func Offset: 0
	// Line 2650, Address: 0x386f58, Func Offset: 0x8
	// Line 2652, Address: 0x386f5c, Func Offset: 0xc
	// Line 2654, Address: 0x386f60, Func Offset: 0x10
	// Line 2655, Address: 0x386f68, Func Offset: 0x18
	// Line 2656, Address: 0x386f70, Func Offset: 0x20
	// Line 2658, Address: 0x386f78, Func Offset: 0x28
	// Line 2659, Address: 0x386f80, Func Offset: 0x30
	// Line 2661, Address: 0x386f88, Func Offset: 0x38
	// Line 2662, Address: 0x386f8c, Func Offset: 0x3c
	// Line 2665, Address: 0x386f90, Func Offset: 0x40
	// Line 2666, Address: 0x386fa0, Func Offset: 0x50
	// Line 2669, Address: 0x386fbc, Func Offset: 0x6c
	// Func End, Address: 0x386fcc, Func Offset: 0x7c
}

// iMeshDraw__FiP9tagP2MeshP5_xTexP7_p2Geom
// Start address: 0x386fd0
void iMeshDraw()
{
	// Line 2645, Address: 0x386fd0, Func Offset: 0
	// Func End, Address: 0x386fd8, Func Offset: 0x8
}

// p2GeomDrawScreenBoxARGB__Fiiiiiiii
// Start address: 0x386fe0
void p2GeomDrawScreenBoxARGB()
{
	// Line 2366, Address: 0x386fe0, Func Offset: 0
	// Func End, Address: 0x386fe8, Func Offset: 0x8
}

// p2GeomDrawScreenBox__Fiiiiiii
// Start address: 0x386ff0
void p2GeomDrawScreenBox()
{
	// Line 2304, Address: 0x386ff0, Func Offset: 0
	// Func End, Address: 0x386ff8, Func Offset: 0x8
}

// p2GeomDrawScreen__FPvP9tagP2Meshiiss
// Start address: 0x387000
void p2GeomDrawScreen()
{
	// Line 2232, Address: 0x387000, Func Offset: 0
	// Func End, Address: 0x387008, Func Offset: 0x8
}

// iGeomSetUVUsingMeshPart__FUiiUii
// Start address: 0x387010
void iGeomSetUVUsingMeshPart(uint32 destModelID, int32 destPartID, uint32 modelID, int32 partID)
{
	int32 i;
	tagP2Mesh* dest;
	tagP2Mesh* source;
	int32 destCount;
	int32 sourceCount;
	// Line 2049, Address: 0x387010, Func Offset: 0
	// Line 2057, Address: 0x387034, Func Offset: 0x24
	// Line 2058, Address: 0x387048, Func Offset: 0x38
	// Line 2060, Address: 0x38705c, Func Offset: 0x4c
	// Line 2064, Address: 0x387064, Func Offset: 0x54
	// Line 2065, Address: 0x387104, Func Offset: 0xf4
	// Line 2067, Address: 0x3871a4, Func Offset: 0x194
	// Line 2068, Address: 0x38724c, Func Offset: 0x23c
	// Line 2070, Address: 0x3872f4, Func Offset: 0x2e4
	// Line 2071, Address: 0x387304, Func Offset: 0x2f4
	// Line 2073, Address: 0x387314, Func Offset: 0x304
	// Line 2077, Address: 0x3873bc, Func Offset: 0x3ac
	// Line 2079, Address: 0x3873c8, Func Offset: 0x3b8
	// Line 2080, Address: 0x3873f8, Func Offset: 0x3e8
	// Line 2081, Address: 0x387428, Func Offset: 0x418
	// Line 2084, Address: 0x387440, Func Offset: 0x430
	// Func End, Address: 0x387460, Func Offset: 0x450
}

// iGeomCalcBoundingBox__FUiiP8Vector3DP8Vector3D
// Start address: 0x387460
void iGeomCalcBoundingBox(uint32 modelID, int32 partID, Vector3D* a, Vector3D* b)
{
	int32 partCount;
	tagP2VERTEX* v;
	tagP2Mesh* mesh;
	int32 j;
	int32 start;
	int32 i;
	// Line 1969, Address: 0x387460, Func Offset: 0
	// Line 1979, Address: 0x3874a0, Func Offset: 0x40
	// Line 1980, Address: 0x3874ac, Func Offset: 0x4c
	// Line 1981, Address: 0x3874b8, Func Offset: 0x58
	// Line 1983, Address: 0x3874c4, Func Offset: 0x64
	// Line 1984, Address: 0x3874d0, Func Offset: 0x70
	// Line 1985, Address: 0x3874dc, Func Offset: 0x7c
	// Line 1989, Address: 0x3874e8, Func Offset: 0x88
	// Line 1993, Address: 0x3874f8, Func Offset: 0x98
	// Line 1994, Address: 0x387598, Func Offset: 0x138
	// Line 1999, Address: 0x387640, Func Offset: 0x1e0
	// Line 2001, Address: 0x38764c, Func Offset: 0x1ec
	// Line 2003, Address: 0x387660, Func Offset: 0x200
	// Line 2004, Address: 0x387700, Func Offset: 0x2a0
	// Line 2006, Address: 0x387704, Func Offset: 0x2a4
	// Line 2008, Address: 0x387710, Func Offset: 0x2b0
	// Line 2009, Address: 0x387730, Func Offset: 0x2d0
	// Line 2011, Address: 0x387750, Func Offset: 0x2f0
	// Line 2012, Address: 0x387770, Func Offset: 0x310
	// Line 2014, Address: 0x387790, Func Offset: 0x330
	// Line 2015, Address: 0x3877b0, Func Offset: 0x350
	// Line 2016, Address: 0x3877d0, Func Offset: 0x370
	// Line 2017, Address: 0x3877d4, Func Offset: 0x374
	// Line 2020, Address: 0x3877e8, Func Offset: 0x388
	// Line 2021, Address: 0x3877ec, Func Offset: 0x38c
	// Line 2024, Address: 0x387800, Func Offset: 0x3a0
	// Line 2025, Address: 0x387804, Func Offset: 0x3a4
	// Line 2026, Address: 0x387808, Func Offset: 0x3a8
	// Line 2028, Address: 0x38780c, Func Offset: 0x3ac
	// Line 2029, Address: 0x387810, Func Offset: 0x3b0
	// Line 2030, Address: 0x387814, Func Offset: 0x3b4
	// Line 2032, Address: 0x387818, Func Offset: 0x3b8
	// Func End, Address: 0x387854, Func Offset: 0x3f4
}

// iGeomSetMeshVisibility__FPvii
// Start address: 0x387860
void iGeomSetMeshVisibility(void* data, int32 number, int32 visible)
{
	int32 i;
	tagP2Mesh* mesh;
	_p2Geom* geom;
	// Line 1928, Address: 0x387860, Func Offset: 0
	// Line 1929, Address: 0x387884, Func Offset: 0x24
	// Line 1931, Address: 0x387888, Func Offset: 0x28
	// Line 1932, Address: 0x387890, Func Offset: 0x30
	// Line 1934, Address: 0x387894, Func Offset: 0x34
	// Line 1936, Address: 0x38789c, Func Offset: 0x3c
	// Line 1938, Address: 0x3878b4, Func Offset: 0x54
	// Line 1939, Address: 0x3878c0, Func Offset: 0x60
	// Line 1940, Address: 0x387960, Func Offset: 0x100
	// Line 1941, Address: 0x387964, Func Offset: 0x104
	// Line 1942, Address: 0x387968, Func Offset: 0x108
	// Line 1943, Address: 0x387980, Func Offset: 0x120
	// Line 1944, Address: 0x387988, Func Offset: 0x128
	// Line 1945, Address: 0x387994, Func Offset: 0x134
	// Line 1946, Address: 0x387a38, Func Offset: 0x1d8
	// Line 1947, Address: 0x387a3c, Func Offset: 0x1dc
	// Line 1949, Address: 0x387a4c, Func Offset: 0x1ec
	// Line 1950, Address: 0x387aec, Func Offset: 0x28c
	// Line 1955, Address: 0x387af0, Func Offset: 0x290
	// Func End, Address: 0x387b14, Func Offset: 0x2b4
}

// p2GeomDraw__FP7_p2GeomPvP7_xActor
// Start address: 0x387b20
void p2GeomDraw()
{
	// Line 1924, Address: 0x387b20, Func Offset: 0
	// Func End, Address: 0x387b28, Func Offset: 0x8
}

// p2GeomDrawShadow__FP7_p2GeomPvP7_xActorP5_xObj
// Start address: 0x387b30
void p2GeomDrawShadow(_p2Geom* geom, _xActor* actor, _xObj* obj)
{
	tagxPhysicsObject* p;
	Vector3D a;
	tagMATRIX sm;
	Vector3D gp2;
	Vector3D gp1;
	Vector3D gp0;
	float32 gplane[4];
	float32 alphaCol;
	float32 shadowcol;
	float32 objmatrix[16];
	float32 world[16];
	float32 result[16];
	float32 m[16];
	Vector3D origin;
	tagP2Mesh* mesh;
	uint32 i;
	// Line 818, Address: 0x387b30, Func Offset: 0
	// Line 828, Address: 0x387b48, Func Offset: 0x18
	// Line 836, Address: 0x387b64, Func Offset: 0x34
	// Line 837, Address: 0x387b80, Func Offset: 0x50
	// Line 838, Address: 0x387b9c, Func Offset: 0x6c
	// Line 845, Address: 0x387bb8, Func Offset: 0x88
	// Line 847, Address: 0x387c60, Func Offset: 0x130
	// Line 851, Address: 0x387c70, Func Offset: 0x140
	// Line 853, Address: 0x387c7c, Func Offset: 0x14c
	// Line 854, Address: 0x387c88, Func Offset: 0x158
	// Line 855, Address: 0x387c94, Func Offset: 0x164
	// Line 856, Address: 0x387ca0, Func Offset: 0x170
	// Line 859, Address: 0x387ca8, Func Offset: 0x178
	// Line 860, Address: 0x387cb0, Func Offset: 0x180
	// Line 861, Address: 0x387cb8, Func Offset: 0x188
	// Line 863, Address: 0x387cc0, Func Offset: 0x190
	// Line 865, Address: 0x387ccc, Func Offset: 0x19c
	// Line 866, Address: 0x387cf4, Func Offset: 0x1c4
	// Line 867, Address: 0x387d1c, Func Offset: 0x1ec
	// Line 868, Address: 0x387d44, Func Offset: 0x214
	// Line 870, Address: 0x387d58, Func Offset: 0x228
	// Line 871, Address: 0x387d74, Func Offset: 0x244
	// Line 872, Address: 0x387d80, Func Offset: 0x250
	// Line 878, Address: 0x387d9c, Func Offset: 0x26c
	// Line 881, Address: 0x387dbc, Func Offset: 0x28c
	// Line 882, Address: 0x387dc8, Func Offset: 0x298
	// Line 883, Address: 0x387dd8, Func Offset: 0x2a8
	// Line 885, Address: 0x387dfc, Func Offset: 0x2cc
	// Line 886, Address: 0x387e14, Func Offset: 0x2e4
	// Line 887, Address: 0x387e24, Func Offset: 0x2f4
	// Line 888, Address: 0x387e30, Func Offset: 0x300
	// Line 892, Address: 0x387e40, Func Offset: 0x310
	// Line 895, Address: 0x387e58, Func Offset: 0x328
	// Line 898, Address: 0x387e70, Func Offset: 0x340
	// Line 899, Address: 0x387e7c, Func Offset: 0x34c
	// Line 900, Address: 0x387e8c, Func Offset: 0x35c
	// Line 903, Address: 0x387ea0, Func Offset: 0x370
	// Line 906, Address: 0x387eac, Func Offset: 0x37c
	// Line 910, Address: 0x387ec4, Func Offset: 0x394
	// Line 912, Address: 0x387ed0, Func Offset: 0x3a0
	// Line 913, Address: 0x387edc, Func Offset: 0x3ac
	// Line 917, Address: 0x387ee4, Func Offset: 0x3b4
	// Line 920, Address: 0x387ef0, Func Offset: 0x3c0
	// Line 921, Address: 0x387f08, Func Offset: 0x3d8
	// Line 1078, Address: 0x387f14, Func Offset: 0x3e4
	// Line 1080, Address: 0x387f20, Func Offset: 0x3f0
	// Func End, Address: 0x387f38, Func Offset: 0x408
}

// iGeomAssign__FP7_xActorP7_xModel
// Start address: 0x387f40
void iGeomAssign(_xActor* actor, _xModel* model)
{
	_p2Geom* geom;
	iActorRuntime* r;
	// Line 514, Address: 0x387f40, Func Offset: 0
	// Line 519, Address: 0x387f44, Func Offset: 0x4
	// Line 520, Address: 0x387f50, Func Offset: 0x10
	// Line 523, Address: 0x387f5c, Func Offset: 0x1c
	// Line 525, Address: 0x387f68, Func Offset: 0x28
	// Func End, Address: 0x387f70, Func Offset: 0x30
}

