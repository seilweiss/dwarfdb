typedef struct tagParCmd_SpawnVFX;
typedef struct tagParCmdList;
typedef struct _rxHeapSuperBlockDescriptor;
typedef struct _rwResEntryTag;
typedef struct _iTexResource;
typedef struct tagParCmd_Accelerate;
typedef struct xNavLink;
typedef struct tagParCmd_Bounce;
typedef struct tagParCmd_Emitter;
typedef struct tagiFloor;
typedef struct _RpPolygon;
typedef struct xParCmd;
typedef struct _RxHeap;
typedef struct xPar;
typedef struct _rxHeapBlockHeader;
typedef struct _iTexRuntime;
typedef struct tagParCmd_Texture;
typedef struct tagParCmd_KillOld;
typedef struct tagParCmd_Move;
typedef enum _RxClusterValidityReq;
typedef struct iActionResource;
typedef struct _rxHeapFreeBlock;
typedef struct iDisplayCamera;
typedef struct _RxPipelineNodeTopSortData;
typedef struct _RpWorldSector;
typedef struct iTriggerResource;
typedef struct iActionRuntime;
typedef struct tagxParSys;
typedef struct _RxPipelineNode;
typedef struct _RxClusterDefinition;
typedef struct xNavPoint;
typedef struct _RxPipelineNodeParam;
typedef struct _RxPipelineCluster;
typedef enum _rxEmbeddedPacketState;
typedef struct tagXStreamMDSDirectory;
typedef struct _RpWorld;
typedef struct iConditionResource;
typedef struct tagParCmd_KillInvis;
typedef struct _RxNodeDefinition;
typedef enum _RxClusterValid;
typedef struct xTrigger;
typedef struct _RpMeshHeader;
typedef struct tagParCmd_RotMove;
typedef struct iConditionRuntime;
typedef struct _RwSurfaceProperties;
typedef struct tagParCmd_KillPlane;
typedef struct xRule;
typedef struct tagParCmd_RandomDisplace;
typedef struct _RpCollSector;
typedef struct _RwV3d;
typedef struct _RpSector;
typedef enum _RwTextureFilterMode;
typedef struct xEntryPoint;
typedef struct tagiFloorTri;
typedef struct iEntryPointResource;
typedef struct iRuleResource;
typedef struct _iEntryPointRuntime;
typedef struct _PVRheader;
typedef struct _RwLLLink;
typedef struct _RxPipelineRequiresCluster;
typedef struct xScene;
typedef struct tagParCmd_Jet;
typedef struct XStreamHeader;
typedef struct Vector3D;
typedef struct _RxPipeline;
typedef struct _RpMaterialList;
typedef struct _rxReq;
typedef struct _iParRingMode;
typedef struct xCamera;
typedef struct _RpMaterial;
typedef struct _RwObject;
typedef struct xLight;
typedef struct p2Camera;
typedef struct iLightResource;
typedef struct _iLightRuntime;
typedef struct _RxOutputSpec;
typedef struct _RwTexDictionary;
typedef struct xAction;
typedef struct _RpVertexNormal;
typedef struct iMarkerResource;
typedef struct tagXStreamDirectoryEntry;
typedef struct _RwTexCoords;
typedef struct _RxClusterRef;
typedef struct xMarker;
typedef struct _RwRGBA;
typedef struct xCondition;
typedef struct p2CameraVersion;
typedef struct _RxIoSpec;
typedef struct tagParCmd_OrbitPoint;
typedef struct _RwBBox;
typedef struct _RxNodeMethods;
typedef struct _RwTexture;
typedef struct _tagiEnvRuntime;
typedef enum _RxClusterForcePresent;
typedef struct _xTex;
typedef struct _RwRaster;
typedef struct _RxPacket;
typedef struct iCameraResource;
typedef enum _RxNodeDefEditable;
typedef struct _RxClusterUnion;
typedef struct _iParSphereMode;
typedef struct _RxCluster;
typedef struct _RwLinkList;
typedef struct tagParCmd_Turbulence;
typedef enum _RwTextureAddressMode;
typedef enum _rpWorldRenderOrder;
typedef struct _tagxEnv;

typedef void(*type_4)(tagxParSys*);
typedef void(*type_8)(_rwResEntryTag*);
typedef _RpWorldSector*(*type_12)(_RpWorldSector*);
typedef void(*type_13)(tagxParSys*);
typedef int32(*type_15)(_RxPipelineNode*, _RxPipelineNodeParam*);
typedef void(*type_17)(tagxParSys*);
typedef int32(*type_21)(_RxNodeDefinition*);
typedef void(*type_23)(tagxParSys*);
typedef void(*type_24)(_RxNodeDefinition*);
typedef int32(*type_27)(_RxPipelineNode*);
typedef void(*type_28)(tagxParSys*);
typedef void(*type_32)(_RxPipelineNode*);
typedef void(*type_34)(tagxParSys*);
typedef int32(*type_36)(_RxPipelineNode*, _RxPipeline*);
typedef void(*type_38)(tagxParSys*);
typedef uint32(*type_42)(_RxPipelineNode*, uint32, uint32, void*);
typedef void(*type_68)(tagxParSys*);
typedef void(*type_76)(tagxParSys*);
typedef void(*type_79)(tagxParSys*);

typedef Vector3D type_0[3];
typedef uint8 type_1[3];
typedef xParCmd* type_2[37];
typedef uint8 type_3[2];
typedef float32 type_5[2];
typedef iTriggerResource* type_6[20];
typedef uint16 type_7[3];
typedef _iParSphereMode type_9[7];
typedef float32 type_10[2];
typedef uint8 type_11[3];
typedef iTriggerResource* type_14[20];
typedef void(*type_16)(tagxParSys*)[37];
typedef Vector3D type_18[4];
typedef tagXStreamDirectoryEntry type_19[1000];
typedef uint8 type_20[3];
typedef iTriggerResource* type_22[20];
typedef iTriggerResource* type_25[20];
typedef uint32 type_26[4];
typedef iTriggerResource* type_29[20];
typedef uint16 type_30[3];
typedef uint8 type_31[3];
typedef iTriggerResource* type_33[20];
typedef int8 type_35[51];
typedef iTriggerResource* type_37[20];
typedef float32 type_39[16];
typedef iTriggerResource* type_40[20];
typedef float32 type_41[256];
typedef iTriggerResource* type_43[20];
typedef uint32 type_44[3];
typedef int8 type_45[2048];
typedef iTriggerResource* type_46[20];
typedef _RxCluster type_47[1];
typedef uint32 type_48[3];
typedef iTriggerResource* type_49[20];
typedef float32 type_50[3];
typedef uint8 type_51[3];
typedef iTriggerResource* type_52[20];
typedef Vector3D type_53[3];
typedef _xTex* type_54[37];
typedef iLightResource type_55[2];
typedef _iParRingMode type_56[14];
typedef float32 type_57[32];
typedef int8 type_58[32];
typedef float32 type_59[32][32];
typedef uint8 type_60[4];
typedef int8 type_61[32];
typedef uint8 type_62[4];
typedef uint8 type_63[3];
typedef uint8 type_64[3];
typedef uint8 type_65[2];
typedef int8 type_66[128];
typedef tagxParSys type_67[37];
typedef uint8 type_69[2];
typedef uint32 type_70[3];
typedef uint8 type_71[3];
typedef uint8 type_72[2];
typedef Vector3D type_73[4];
typedef p2CameraVersion type_74[5];
typedef uint8 type_75[4];
typedef int8 type_77[4];
typedef uint8 type_78[4];
typedef uint8 type_80[4];

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

struct tagParCmdList
{
	int32 m_numCmd;
	xParCmd* m_cmd;
	xParCmd* m_lastCmd;
	tagParCmdList* m_prev;
	tagParCmdList* m_next;
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

struct _iTexResource
{
	uint32 m_assetID;
	uint32 pad[3];
	_PVRheader header;
};

struct tagParCmd_Accelerate
{
	uint8 m_free;
	uint8 m_pad[3];
	Vector3D m_acc;
	uint32 m_freq;
	uint32 m_freqTime;
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

struct tagParCmd_Bounce
{
	uint8 m_free;
	uint8 m_pad[2];
	uint8 m_noStatic;
	Vector3D m_plane;
	Vector3D m_dampVelPercent;
	uint32 m_sndAssetID;
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

struct _RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
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

struct _rxHeapBlockHeader
{
	_rxHeapBlockHeader* prev;
	_rxHeapBlockHeader* next;
	uint32 size;
	_rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
};

struct _iTexRuntime
{
	void* surface;
	uint32 m_flags;
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

struct tagParCmd_KillOld
{
	uint8 m_free;
	uint8 m_pad[3];
	int32 m_ageLimit;
};

struct tagParCmd_Move
{
	uint8 m_free;
	uint8 m_pad[3];
	int32 m_dt;
};

enum _RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct iActionResource
{
	uint8 m_cmdType;
	uint8 m_cmd;
	uint16 pad;
	uint32 m_cmdParameter;
};

struct _rxHeapFreeBlock
{
	uint32 size;
	_rxHeapBlockHeader* ptr;
};

struct iDisplayCamera
{
	Vector3D m_pos;
	Vector3D m_rot;
	float32 m_fov;
};

struct _RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	_rxReq* req;
	void* initialisationData;
	uint32 initialisationDataSize;
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

struct iActionRuntime
{
	xAction* m_and;
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

struct tagParCmd_KillInvis
{
	uint8 m_free;
	uint8 m_pad;
	int16 m_ageMin;
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

struct xTrigger
{
	iTriggerResource* m_resource;
};

struct _RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct tagParCmd_RotMove
{
	uint8 m_free;
	uint8 m_rotadjust[3];
};

struct iConditionRuntime
{
	xCondition* m_operand;
	uint16 m_match;
	uint16 m_trigger;
};

struct _RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

struct tagParCmd_KillPlane
{
	uint8 m_free;
	uint8 m_pad[2];
	uint8 m_killBelow;
	Vector3D m_plane;
};

struct xRule
{
	iRuleResource* m_resource;
	void* m_runtime;
};

struct tagParCmd_RandomDisplace
{
	uint8 m_free;
	uint8 m_minAge;
	uint8 m_delayCount;
	uint8 m_delay;
	Vector3D m_vel;
};

struct _RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
};

struct _RwV3d
{
	float32 x;
	float32 y;
	float32 z;
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

struct xEntryPoint
{
	iEntryPointResource* m_resource;
	_iEntryPointRuntime* m_runtime;
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

struct _PVRheader
{
	uint32 id;
	uint32 nTextureDataSize;
	uint32 nTextureType;
	uint16 nWidth;
	uint16 nHeight;
};

struct _RwLLLink
{
	_RwLLLink* next;
	_RwLLLink* prev;
};

struct _RxPipelineRequiresCluster
{
	_RxClusterDefinition* clusterDef;
	_RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
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

struct Vector3D
{
	float32 x;
	float32 y;
	float32 z;
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

struct _RpMaterialList
{
	_RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct _rxReq
{
};

struct _iParRingMode
{
	float32 ring_radius;
	float32 ring_radius_delta;
	float32 ring_tilt;
	float32 ring_tilt_delta;
	float32 ring_height;
	float32 ring_height_delta;
	uint32 ring_color[3];
	int8 ring_abr;
	int8 ring_flat;
	int8 ring_segs;
	int8 pad;
};

struct xCamera
{
	iCameraResource* m_resource;
	void** m_runtime;
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

struct _RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct xLight
{
	iLightResource* m_resource;
	_iLightRuntime* m_runtime;
};

struct p2Camera
{
	Vector3D m_pos;
	Vector3D m_rot;
	float32 m_fov;
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

struct _RxOutputSpec
{
	int8* name;
	_RxClusterValid* outputClusters;
	_RxClusterValid allOtherClusters;
};

struct _RwTexDictionary
{
	_RwObject object;
	_RwLinkList texturesInDict;
	_RwLLLink lInInstance;
};

struct xAction
{
	iActionResource* m_resource;
	iActionRuntime* m_runtime;
};

struct _RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
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

struct _RwTexCoords
{
	float32 u;
	float32 v;
};

struct _RxClusterRef
{
	_RxClusterDefinition* clusterDef;
	_RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct xMarker
{
	iMarkerResource* m_resource;
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

struct _RxIoSpec
{
	uint32 numClustersOfInterest;
	_RxClusterRef* clustersOfInterest;
	_RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	_RxOutputSpec* outputs;
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

struct _tagiEnvRuntime
{
	_RpWorld* world;
	Vector3D world_origin;
	_RwTexDictionary* tex_dict;
};

enum _RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct _xTex
{
	_iTexResource* m_resource;
	_iTexRuntime* m_runtime;
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

struct iCameraResource
{
	uint16 m_plateOffset;
	uint16 m_versions;
	p2CameraVersion m_version[5];
	uint32 m_frameCount;
	p2Camera* m_cameras;
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

struct _iParSphereMode
{
	float32 sphere_radius;
	float32 sphere_radius_delta;
	uint32 sphere_color[3];
	int32 sphere_fade;
	int8 sphere_abr;
	uint8 sphere_segs;
	int8 sphere_tex;
	uint8 sphere_hemi;
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

enum _RwTextureAddressMode
{
	rwTEXTUREADDRESSNATEXTUREADDRESS,
	rwTEXTUREADDRESSWRAP,
	rwTEXTUREADDRESSMIRROR,
	rwTEXTUREADDRESSCLAMP,
	rwTEXTUREADDRESSBORDER,
	rwTEXTUREADDRESSMODEFORCEENUMSIZEINT = 0x7fffffff
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

int8 dbfont_chars[51];
void(*gParDrawFunc)(tagxParSys*)[37];
_xTex* gParTex[37];
int32 gColorTableInit;
float32 gColorTable[256];
_iParRingMode sRingInfo[14];
_iParSphereMode sSphereMode[7];
tagParCmd_Jet* gJet;
int8 vAssertBuf2[128];
XStreamHeader currentHeader;
xParCmd* gParEmitter[37];
float32 g_DEGTORAD;
float32 g_EPSILON;
float32 CY;
float32 CX;
float32 proj_fovr;
float32 SCALE;
float32 proj_farnear;
float32 matrix_sp[16];
xScene* xScene_current;
float32 gFloorQuickHeight[32][32];
float32 g_2_PI;
float32 g_PI_DIV_2;
float32 g_PI;
tagxParSys gParSys[37];
void(*iParMgrRenderParSys_TwoTriStrip)(tagxParSys*);
void(*iParMgrRenderParSys_Twinkle)(tagxParSys*);
void(*iParMgrRenderParSys_Sprite)(tagxParSys*);
void(*iParMgrRenderParSys_DrawRegionRain)(tagxParSys*);
void(*iParMgrRenderParSys_DrawBulletStreak)(tagxParSys*);
void(*iParMgrRenderParSys_DrawFlatPoly)(tagxParSys*);
void(*iParMgrRenderParSys_DrawLight)(tagxParSys*);
void(*iParMgrRenderParSys_ExpandingSphere)(tagxParSys*);
void(*iParMgrRenderParSys_ExpandingRing)(tagxParSys*);

void iParIniVFXDaggerAttack(tagParCmdList* list);
void iParIniVFXFireBall(tagParCmdList* list);
void iParIniVFXSplash(tagParCmdList* list);
void iParIniVFXEnergyBlow(tagParCmdList* list);
void iParIniVFXEnergySuck(tagParCmdList* list);
void iParIniVFXMoltenLeadPour(tagParCmdList* list);
void iParIniVFXWaterPour(tagParCmdList* list);
void iParIniVFXLightShaft(tagParCmdList* list);
void iParIniVFXExpandingRing(tagParCmdList* list);
void iParIniVFXExpandingSphere(tagParCmdList* list);
void iParIniVFXTwinkle(tagParCmdList* list);
void iParIniVFXLight(tagParCmdList* list);
void iParIniVFXFootprint(tagParCmdList* list);
void iParIniVFXBreath(tagParCmdList* list);
void iParIniVFXSpark(tagParCmdList* list);
void iParIniVFXRegionFog(tagParCmdList* list);
void iParIniVFXRegionLeaves(tagParCmdList* list);
void iParIniVFXRegionDust(tagParCmdList* list);
void iParIniVFXRegionRain(tagParCmdList* list);
void iParIniVFXRainSplatter(tagParCmdList* list);
void iParIniVFXMagicPortal(tagParCmdList* list);
void iParIniVFXBloodPool(tagParCmdList* list);
void iParIniVFXBlackVomit(tagParCmdList* list);
void iParIniVFXExplodingEarth(tagParCmdList* list);
void iParIniVFXBloodSlash(tagParCmdList* list);
void iParIniVFXBloodDrip(tagParCmdList* list);
void iParIniVFXBloodSpurt(tagParCmdList* list);
void iParIniVFXFire(tagParCmdList* list);
void iParIniVFXMuzzleFlash(tagParCmdList* list);
void iParIniVFXBoneFragment(tagParCmdList* list);
void iParIniVFXShellEject(tagParCmdList* list);
void iParIniVFXBulletStreak(tagParCmdList* list);
void iParIniVFXGroundPuff(tagParCmdList* list);
void iParIniVFXSmoke(tagParCmdList* list);
void iParMgrRenderParSys_Twinkle(tagxParSys* ps);
void iParMgrRenderParSys_Sprite(tagxParSys* ps);
void iParMgrRenderParSys_DrawLight(tagxParSys* ps);
void iParMgrRenderParSys_ExpandingSphere(tagxParSys* ps);
void iParMgrRenderParSys_ExpandingRing(tagxParSys* ps);
void iParMgrRenderParSys_DrawFlatPoly(tagxParSys* ps);
void iParMgrRenderParSys_DrawRegionRain(tagxParSys* ps);
void iParMgrRenderParSys_DrawBulletStreak(tagxParSys* ps);
void iParMgrRenderParSys_TwoTriStrip(tagxParSys* ps);
void iParComputeUnitInfo(tagParCmd_Texture* d);
void iParMgrRender();
void iParMgrInit();

// iParIniVFXDaggerAttack__FP10tagxParSysP13tagParCmdList
// Start address: 0x371ab0
void iParIniVFXDaggerAttack(tagParCmdList* list)
{
	tagParCmd_KillOld* d;
	tagParCmd_Texture* d;
	tagParCmd_Emitter* d;
	xParCmd* cmd;
	// Line 5192, Address: 0x371ab0, Func Offset: 0
	// Line 5195, Address: 0x371ac8, Func Offset: 0x18
	// Line 5196, Address: 0x371ae4, Func Offset: 0x34
	// Line 5199, Address: 0x371aec, Func Offset: 0x3c
	// Line 5201, Address: 0x371af0, Func Offset: 0x40
	// Line 5202, Address: 0x371b90, Func Offset: 0xe0
	// Line 5204, Address: 0x371ba4, Func Offset: 0xf4
	// Line 5205, Address: 0x371ba8, Func Offset: 0xf8
	// Line 5206, Address: 0x371bac, Func Offset: 0xfc
	// Line 5207, Address: 0x371bb4, Func Offset: 0x104
	// Line 5208, Address: 0x371bbc, Func Offset: 0x10c
	// Line 5209, Address: 0x371bc4, Func Offset: 0x114
	// Line 5210, Address: 0x371bcc, Func Offset: 0x11c
	// Line 5211, Address: 0x371bd4, Func Offset: 0x124
	// Line 5212, Address: 0x371bdc, Func Offset: 0x12c
	// Line 5213, Address: 0x371be8, Func Offset: 0x138
	// Line 5214, Address: 0x371c00, Func Offset: 0x150
	// Line 5217, Address: 0x371c18, Func Offset: 0x168
	// Line 5218, Address: 0x371c2c, Func Offset: 0x17c
	// Line 5221, Address: 0x371c34, Func Offset: 0x184
	// Line 5223, Address: 0x371c38, Func Offset: 0x188
	// Line 5224, Address: 0x371cd8, Func Offset: 0x228
	// Line 5225, Address: 0x371cdc, Func Offset: 0x22c
	// Line 5226, Address: 0x371ce4, Func Offset: 0x234
	// Line 5227, Address: 0x371cec, Func Offset: 0x23c
	// Line 5228, Address: 0x371cf4, Func Offset: 0x244
	// Line 5229, Address: 0x371cfc, Func Offset: 0x24c
	// Line 5230, Address: 0x371d04, Func Offset: 0x254
	// Line 5231, Address: 0x371d08, Func Offset: 0x258
	// Line 5232, Address: 0x371d10, Func Offset: 0x260
	// Line 5233, Address: 0x371d14, Func Offset: 0x264
	// Line 5236, Address: 0x371d18, Func Offset: 0x268
	// Line 5239, Address: 0x371d24, Func Offset: 0x274
	// Line 5241, Address: 0x371d38, Func Offset: 0x288
	// Line 5257, Address: 0x371d48, Func Offset: 0x298
	// Line 5258, Address: 0x371d5c, Func Offset: 0x2ac
	// Line 5261, Address: 0x371d64, Func Offset: 0x2b4
	// Line 5263, Address: 0x371d68, Func Offset: 0x2b8
	// Line 5264, Address: 0x371e08, Func Offset: 0x358
	// Line 5266, Address: 0x371e10, Func Offset: 0x360
	// Func End, Address: 0x371e2c, Func Offset: 0x37c
}

// iParIniVFXFireBall__FP10tagxParSysP13tagParCmdList
// Start address: 0x371e30
void iParIniVFXFireBall(tagParCmdList* list)
{
	tagParCmd_SpawnVFX* d;
	tagParCmd_SpawnVFX* d;
	tagParCmd_SpawnVFX* d;
	tagParCmd_KillPlane* d;
	tagParCmd_Move* d;
	tagParCmd_Accelerate* d;
	tagParCmd_Texture* d;
	tagParCmd_Emitter* d;
	xParCmd* cmd;
	// Line 5038, Address: 0x371e30, Func Offset: 0
	// Line 5041, Address: 0x371e48, Func Offset: 0x18
	// Line 5042, Address: 0x371e64, Func Offset: 0x34
	// Line 5045, Address: 0x371e6c, Func Offset: 0x3c
	// Line 5047, Address: 0x371e70, Func Offset: 0x40
	// Line 5048, Address: 0x371f10, Func Offset: 0xe0
	// Line 5050, Address: 0x371f24, Func Offset: 0xf4
	// Line 5051, Address: 0x371f28, Func Offset: 0xf8
	// Line 5052, Address: 0x371f2c, Func Offset: 0xfc
	// Line 5053, Address: 0x371f34, Func Offset: 0x104
	// Line 5054, Address: 0x371f3c, Func Offset: 0x10c
	// Line 5055, Address: 0x371f44, Func Offset: 0x114
	// Line 5056, Address: 0x371f4c, Func Offset: 0x11c
	// Line 5057, Address: 0x371f54, Func Offset: 0x124
	// Line 5058, Address: 0x371f5c, Func Offset: 0x12c
	// Line 5059, Address: 0x371f60, Func Offset: 0x130
	// Line 5060, Address: 0x371f64, Func Offset: 0x134
	// Line 5061, Address: 0x371f68, Func Offset: 0x138
	// Line 5062, Address: 0x371f6c, Func Offset: 0x13c
	// Line 5063, Address: 0x371f70, Func Offset: 0x140
	// Line 5064, Address: 0x371f78, Func Offset: 0x148
	// Line 5065, Address: 0x371f80, Func Offset: 0x150
	// Line 5066, Address: 0x371f88, Func Offset: 0x158
	// Line 5067, Address: 0x371f8c, Func Offset: 0x15c
	// Line 5068, Address: 0x371f94, Func Offset: 0x164
	// Line 5069, Address: 0x371f98, Func Offset: 0x168
	// Line 5070, Address: 0x371fa4, Func Offset: 0x174
	// Line 5071, Address: 0x371fac, Func Offset: 0x17c
	// Line 5072, Address: 0x371fb8, Func Offset: 0x188
	// Line 5073, Address: 0x371fd0, Func Offset: 0x1a0
	// Line 5076, Address: 0x371fe8, Func Offset: 0x1b8
	// Line 5077, Address: 0x371ffc, Func Offset: 0x1cc
	// Line 5080, Address: 0x372004, Func Offset: 0x1d4
	// Line 5082, Address: 0x372008, Func Offset: 0x1d8
	// Line 5083, Address: 0x3720a8, Func Offset: 0x278
	// Line 5084, Address: 0x3720ac, Func Offset: 0x27c
	// Line 5085, Address: 0x3720b4, Func Offset: 0x284
	// Line 5086, Address: 0x3720bc, Func Offset: 0x28c
	// Line 5087, Address: 0x3720c4, Func Offset: 0x294
	// Line 5088, Address: 0x3720c8, Func Offset: 0x298
	// Line 5089, Address: 0x3720d0, Func Offset: 0x2a0
	// Line 5090, Address: 0x3720d8, Func Offset: 0x2a8
	// Line 5091, Address: 0x3720e0, Func Offset: 0x2b0
	// Line 5092, Address: 0x3720e4, Func Offset: 0x2b4
	// Line 5094, Address: 0x3720e8, Func Offset: 0x2b8
	// Line 5097, Address: 0x3720f4, Func Offset: 0x2c4
	// Line 5099, Address: 0x372108, Func Offset: 0x2d8
	// Line 5103, Address: 0x372118, Func Offset: 0x2e8
	// Line 5104, Address: 0x37212c, Func Offset: 0x2fc
	// Line 5107, Address: 0x372134, Func Offset: 0x304
	// Line 5109, Address: 0x372138, Func Offset: 0x308
	// Line 5110, Address: 0x3721d8, Func Offset: 0x3a8
	// Line 5111, Address: 0x3721dc, Func Offset: 0x3ac
	// Line 5112, Address: 0x3721e8, Func Offset: 0x3b8
	// Line 5113, Address: 0x3721ec, Func Offset: 0x3bc
	// Line 5114, Address: 0x3721f0, Func Offset: 0x3c0
	// Line 5118, Address: 0x3721f4, Func Offset: 0x3c4
	// Line 5119, Address: 0x372208, Func Offset: 0x3d8
	// Line 5122, Address: 0x372210, Func Offset: 0x3e0
	// Line 5124, Address: 0x372214, Func Offset: 0x3e4
	// Line 5125, Address: 0x3722b4, Func Offset: 0x484
	// Line 5129, Address: 0x3722b8, Func Offset: 0x488
	// Line 5130, Address: 0x3722cc, Func Offset: 0x49c
	// Line 5133, Address: 0x3722d4, Func Offset: 0x4a4
	// Line 5135, Address: 0x3722d8, Func Offset: 0x4a8
	// Line 5136, Address: 0x372378, Func Offset: 0x548
	// Line 5137, Address: 0x372380, Func Offset: 0x550
	// Line 5138, Address: 0x372384, Func Offset: 0x554
	// Line 5139, Address: 0x372388, Func Offset: 0x558
	// Line 5142, Address: 0x37238c, Func Offset: 0x55c
	// Line 5143, Address: 0x3723a0, Func Offset: 0x570
	// Line 5146, Address: 0x3723a8, Func Offset: 0x578
	// Line 5148, Address: 0x3723ac, Func Offset: 0x57c
	// Line 5149, Address: 0x37244c, Func Offset: 0x61c
	// Line 5150, Address: 0x372454, Func Offset: 0x624
	// Line 5151, Address: 0x372458, Func Offset: 0x628
	// Line 5152, Address: 0x372460, Func Offset: 0x630
	// Line 5157, Address: 0x372464, Func Offset: 0x634
	// Line 5158, Address: 0x372478, Func Offset: 0x648
	// Line 5161, Address: 0x372480, Func Offset: 0x650
	// Line 5163, Address: 0x372484, Func Offset: 0x654
	// Line 5164, Address: 0x372524, Func Offset: 0x6f4
	// Line 5165, Address: 0x37252c, Func Offset: 0x6fc
	// Line 5166, Address: 0x372534, Func Offset: 0x704
	// Line 5167, Address: 0x37253c, Func Offset: 0x70c
	// Line 5171, Address: 0x372540, Func Offset: 0x710
	// Line 5172, Address: 0x372554, Func Offset: 0x724
	// Line 5175, Address: 0x37255c, Func Offset: 0x72c
	// Line 5177, Address: 0x372560, Func Offset: 0x730
	// Line 5178, Address: 0x372600, Func Offset: 0x7d0
	// Line 5179, Address: 0x372608, Func Offset: 0x7d8
	// Line 5181, Address: 0x37260c, Func Offset: 0x7dc
	// Func End, Address: 0x372628, Func Offset: 0x7f8
}

// iParIniVFXSplash__FP10tagxParSysP13tagParCmdList
// Start address: 0x372630
void iParIniVFXSplash(tagParCmdList* list)
{
	tagParCmd_KillOld* d;
	tagParCmd_Move* d;
	tagParCmd_Texture* d;
	tagParCmd_Emitter* d;
	xParCmd* cmd;
	// Line 4955, Address: 0x372630, Func Offset: 0
	// Line 4958, Address: 0x372648, Func Offset: 0x18
	// Line 4959, Address: 0x372664, Func Offset: 0x34
	// Line 4962, Address: 0x37266c, Func Offset: 0x3c
	// Line 4964, Address: 0x372670, Func Offset: 0x40
	// Line 4965, Address: 0x372710, Func Offset: 0xe0
	// Line 4967, Address: 0x372724, Func Offset: 0xf4
	// Line 4968, Address: 0x372728, Func Offset: 0xf8
	// Line 4969, Address: 0x37272c, Func Offset: 0xfc
	// Line 4970, Address: 0x372734, Func Offset: 0x104
	// Line 4971, Address: 0x37273c, Func Offset: 0x10c
	// Line 4972, Address: 0x372744, Func Offset: 0x114
	// Line 4973, Address: 0x37274c, Func Offset: 0x11c
	// Line 4974, Address: 0x372754, Func Offset: 0x124
	// Line 4975, Address: 0x37275c, Func Offset: 0x12c
	// Line 4976, Address: 0x372768, Func Offset: 0x138
	// Line 4977, Address: 0x372780, Func Offset: 0x150
	// Line 4980, Address: 0x372798, Func Offset: 0x168
	// Line 4981, Address: 0x3727ac, Func Offset: 0x17c
	// Line 4984, Address: 0x3727b4, Func Offset: 0x184
	// Line 4986, Address: 0x3727b8, Func Offset: 0x188
	// Line 4987, Address: 0x372858, Func Offset: 0x228
	// Line 4988, Address: 0x37285c, Func Offset: 0x22c
	// Line 4989, Address: 0x372860, Func Offset: 0x230
	// Line 4990, Address: 0x372864, Func Offset: 0x234
	// Line 4991, Address: 0x372868, Func Offset: 0x238
	// Line 4992, Address: 0x372870, Func Offset: 0x240
	// Line 4993, Address: 0x372878, Func Offset: 0x248
	// Line 4994, Address: 0x37287c, Func Offset: 0x24c
	// Line 4995, Address: 0x372884, Func Offset: 0x254
	// Line 4996, Address: 0x372888, Func Offset: 0x258
	// Line 4998, Address: 0x37288c, Func Offset: 0x25c
	// Line 5001, Address: 0x372898, Func Offset: 0x268
	// Line 5003, Address: 0x3728ac, Func Offset: 0x27c
	// Line 5007, Address: 0x3728bc, Func Offset: 0x28c
	// Line 5008, Address: 0x3728d0, Func Offset: 0x2a0
	// Line 5011, Address: 0x3728d8, Func Offset: 0x2a8
	// Line 5013, Address: 0x3728dc, Func Offset: 0x2ac
	// Line 5014, Address: 0x37297c, Func Offset: 0x34c
	// Line 5018, Address: 0x372980, Func Offset: 0x350
	// Line 5019, Address: 0x372994, Func Offset: 0x364
	// Line 5022, Address: 0x37299c, Func Offset: 0x36c
	// Line 5024, Address: 0x3729a0, Func Offset: 0x370
	// Line 5025, Address: 0x372a40, Func Offset: 0x410
	// Line 5027, Address: 0x372a48, Func Offset: 0x418
	// Func End, Address: 0x372a64, Func Offset: 0x434
}

// iParIniVFXEnergyBlow__FP10tagxParSysP13tagParCmdList
// Start address: 0x372a70
void iParIniVFXEnergyBlow(tagParCmdList* list)
{
	tagParCmd_KillOld* d;
	tagParCmd_Move* d;
	tagParCmd_Texture* d;
	tagParCmd_Emitter* d;
	xParCmd* cmd;
	// Line 4872, Address: 0x372a70, Func Offset: 0
	// Line 4875, Address: 0x372a88, Func Offset: 0x18
	// Line 4876, Address: 0x372aa4, Func Offset: 0x34
	// Line 4879, Address: 0x372aac, Func Offset: 0x3c
	// Line 4881, Address: 0x372ab0, Func Offset: 0x40
	// Line 4882, Address: 0x372b50, Func Offset: 0xe0
	// Line 4884, Address: 0x372b64, Func Offset: 0xf4
	// Line 4885, Address: 0x372b68, Func Offset: 0xf8
	// Line 4886, Address: 0x372b6c, Func Offset: 0xfc
	// Line 4887, Address: 0x372b74, Func Offset: 0x104
	// Line 4888, Address: 0x372b7c, Func Offset: 0x10c
	// Line 4889, Address: 0x372b84, Func Offset: 0x114
	// Line 4890, Address: 0x372b8c, Func Offset: 0x11c
	// Line 4891, Address: 0x372b94, Func Offset: 0x124
	// Line 4892, Address: 0x372b9c, Func Offset: 0x12c
	// Line 4893, Address: 0x372ba8, Func Offset: 0x138
	// Line 4894, Address: 0x372bc0, Func Offset: 0x150
	// Line 4897, Address: 0x372bd8, Func Offset: 0x168
	// Line 4898, Address: 0x372bec, Func Offset: 0x17c
	// Line 4901, Address: 0x372bf4, Func Offset: 0x184
	// Line 4903, Address: 0x372bf8, Func Offset: 0x188
	// Line 4904, Address: 0x372c98, Func Offset: 0x228
	// Line 4905, Address: 0x372c9c, Func Offset: 0x22c
	// Line 4906, Address: 0x372ca0, Func Offset: 0x230
	// Line 4907, Address: 0x372ca4, Func Offset: 0x234
	// Line 4908, Address: 0x372ca8, Func Offset: 0x238
	// Line 4909, Address: 0x372cb0, Func Offset: 0x240
	// Line 4910, Address: 0x372cb8, Func Offset: 0x248
	// Line 4911, Address: 0x372cbc, Func Offset: 0x24c
	// Line 4912, Address: 0x372cc4, Func Offset: 0x254
	// Line 4913, Address: 0x372cc8, Func Offset: 0x258
	// Line 4915, Address: 0x372ccc, Func Offset: 0x25c
	// Line 4918, Address: 0x372cd8, Func Offset: 0x268
	// Line 4920, Address: 0x372cec, Func Offset: 0x27c
	// Line 4924, Address: 0x372cfc, Func Offset: 0x28c
	// Line 4925, Address: 0x372d10, Func Offset: 0x2a0
	// Line 4928, Address: 0x372d18, Func Offset: 0x2a8
	// Line 4930, Address: 0x372d1c, Func Offset: 0x2ac
	// Line 4931, Address: 0x372dbc, Func Offset: 0x34c
	// Line 4935, Address: 0x372dc0, Func Offset: 0x350
	// Line 4936, Address: 0x372dd4, Func Offset: 0x364
	// Line 4939, Address: 0x372ddc, Func Offset: 0x36c
	// Line 4941, Address: 0x372de0, Func Offset: 0x370
	// Line 4942, Address: 0x372e80, Func Offset: 0x410
	// Line 4944, Address: 0x372e88, Func Offset: 0x418
	// Func End, Address: 0x372ea4, Func Offset: 0x434
}

// iParIniVFXEnergySuck__FP10tagxParSysP13tagParCmdList
// Start address: 0x372eb0
void iParIniVFXEnergySuck(tagParCmdList* list)
{
	tagParCmd_KillOld* d;
	tagParCmd_Move* d;
	tagParCmd_Texture* d;
	tagParCmd_Emitter* d;
	xParCmd* cmd;
	// Line 4789, Address: 0x372eb0, Func Offset: 0
	// Line 4792, Address: 0x372ec8, Func Offset: 0x18
	// Line 4793, Address: 0x372ee4, Func Offset: 0x34
	// Line 4796, Address: 0x372eec, Func Offset: 0x3c
	// Line 4798, Address: 0x372ef0, Func Offset: 0x40
	// Line 4799, Address: 0x372f90, Func Offset: 0xe0
	// Line 4801, Address: 0x372fa4, Func Offset: 0xf4
	// Line 4802, Address: 0x372fa8, Func Offset: 0xf8
	// Line 4803, Address: 0x372fac, Func Offset: 0xfc
	// Line 4804, Address: 0x372fb4, Func Offset: 0x104
	// Line 4805, Address: 0x372fbc, Func Offset: 0x10c
	// Line 4806, Address: 0x372fc4, Func Offset: 0x114
	// Line 4807, Address: 0x372fcc, Func Offset: 0x11c
	// Line 4808, Address: 0x372fd4, Func Offset: 0x124
	// Line 4809, Address: 0x372fdc, Func Offset: 0x12c
	// Line 4810, Address: 0x372fe8, Func Offset: 0x138
	// Line 4811, Address: 0x373000, Func Offset: 0x150
	// Line 4814, Address: 0x373018, Func Offset: 0x168
	// Line 4815, Address: 0x37302c, Func Offset: 0x17c
	// Line 4818, Address: 0x373034, Func Offset: 0x184
	// Line 4820, Address: 0x373038, Func Offset: 0x188
	// Line 4821, Address: 0x3730d8, Func Offset: 0x228
	// Line 4822, Address: 0x3730dc, Func Offset: 0x22c
	// Line 4823, Address: 0x3730e0, Func Offset: 0x230
	// Line 4824, Address: 0x3730e4, Func Offset: 0x234
	// Line 4825, Address: 0x3730e8, Func Offset: 0x238
	// Line 4826, Address: 0x3730f0, Func Offset: 0x240
	// Line 4827, Address: 0x3730f8, Func Offset: 0x248
	// Line 4828, Address: 0x3730fc, Func Offset: 0x24c
	// Line 4829, Address: 0x373104, Func Offset: 0x254
	// Line 4830, Address: 0x373108, Func Offset: 0x258
	// Line 4832, Address: 0x37310c, Func Offset: 0x25c
	// Line 4835, Address: 0x373118, Func Offset: 0x268
	// Line 4837, Address: 0x37312c, Func Offset: 0x27c
	// Line 4841, Address: 0x37313c, Func Offset: 0x28c
	// Line 4842, Address: 0x373150, Func Offset: 0x2a0
	// Line 4845, Address: 0x373158, Func Offset: 0x2a8
	// Line 4847, Address: 0x37315c, Func Offset: 0x2ac
	// Line 4848, Address: 0x3731fc, Func Offset: 0x34c
	// Line 4852, Address: 0x373200, Func Offset: 0x350
	// Line 4853, Address: 0x373214, Func Offset: 0x364
	// Line 4856, Address: 0x37321c, Func Offset: 0x36c
	// Line 4858, Address: 0x373220, Func Offset: 0x370
	// Line 4859, Address: 0x3732c0, Func Offset: 0x410
	// Line 4861, Address: 0x3732c8, Func Offset: 0x418
	// Func End, Address: 0x3732e4, Func Offset: 0x434
}

// iParIniVFXMoltenLeadPour__FP10tagxParSysP13tagParCmdList
// Start address: 0x3732f0
void iParIniVFXMoltenLeadPour(tagParCmdList* list)
{
	tagParCmd_KillOld* d;
	tagParCmd_Move* d;
	tagParCmd_Texture* d;
	tagParCmd_Emitter* d;
	xParCmd* cmd;
	// Line 4706, Address: 0x3732f0, Func Offset: 0
	// Line 4709, Address: 0x373308, Func Offset: 0x18
	// Line 4710, Address: 0x373324, Func Offset: 0x34
	// Line 4713, Address: 0x37332c, Func Offset: 0x3c
	// Line 4715, Address: 0x373330, Func Offset: 0x40
	// Line 4716, Address: 0x3733d0, Func Offset: 0xe0
	// Line 4718, Address: 0x3733e4, Func Offset: 0xf4
	// Line 4719, Address: 0x3733e8, Func Offset: 0xf8
	// Line 4720, Address: 0x3733ec, Func Offset: 0xfc
	// Line 4721, Address: 0x3733f4, Func Offset: 0x104
	// Line 4722, Address: 0x3733fc, Func Offset: 0x10c
	// Line 4723, Address: 0x373404, Func Offset: 0x114
	// Line 4724, Address: 0x37340c, Func Offset: 0x11c
	// Line 4725, Address: 0x373414, Func Offset: 0x124
	// Line 4726, Address: 0x37341c, Func Offset: 0x12c
	// Line 4727, Address: 0x373428, Func Offset: 0x138
	// Line 4728, Address: 0x373440, Func Offset: 0x150
	// Line 4731, Address: 0x373458, Func Offset: 0x168
	// Line 4732, Address: 0x37346c, Func Offset: 0x17c
	// Line 4735, Address: 0x373474, Func Offset: 0x184
	// Line 4737, Address: 0x373478, Func Offset: 0x188
	// Line 4738, Address: 0x373518, Func Offset: 0x228
	// Line 4739, Address: 0x37351c, Func Offset: 0x22c
	// Line 4740, Address: 0x373520, Func Offset: 0x230
	// Line 4741, Address: 0x373524, Func Offset: 0x234
	// Line 4742, Address: 0x373528, Func Offset: 0x238
	// Line 4743, Address: 0x373530, Func Offset: 0x240
	// Line 4744, Address: 0x373538, Func Offset: 0x248
	// Line 4745, Address: 0x37353c, Func Offset: 0x24c
	// Line 4746, Address: 0x373544, Func Offset: 0x254
	// Line 4747, Address: 0x373548, Func Offset: 0x258
	// Line 4749, Address: 0x37354c, Func Offset: 0x25c
	// Line 4752, Address: 0x373558, Func Offset: 0x268
	// Line 4754, Address: 0x37356c, Func Offset: 0x27c
	// Line 4758, Address: 0x37357c, Func Offset: 0x28c
	// Line 4759, Address: 0x373590, Func Offset: 0x2a0
	// Line 4762, Address: 0x373598, Func Offset: 0x2a8
	// Line 4764, Address: 0x37359c, Func Offset: 0x2ac
	// Line 4765, Address: 0x37363c, Func Offset: 0x34c
	// Line 4769, Address: 0x373640, Func Offset: 0x350
	// Line 4770, Address: 0x373654, Func Offset: 0x364
	// Line 4773, Address: 0x37365c, Func Offset: 0x36c
	// Line 4775, Address: 0x373660, Func Offset: 0x370
	// Line 4776, Address: 0x373700, Func Offset: 0x410
	// Line 4778, Address: 0x373708, Func Offset: 0x418
	// Func End, Address: 0x373724, Func Offset: 0x434
}

// iParIniVFXWaterPour__FP10tagxParSysP13tagParCmdList
// Start address: 0x373730
void iParIniVFXWaterPour(tagParCmdList* list)
{
	tagParCmd_KillOld* d;
	tagParCmd_Move* d;
	tagParCmd_Texture* d;
	tagParCmd_Emitter* d;
	xParCmd* cmd;
	// Line 4622, Address: 0x373730, Func Offset: 0
	// Line 4625, Address: 0x373748, Func Offset: 0x18
	// Line 4626, Address: 0x373764, Func Offset: 0x34
	// Line 4629, Address: 0x37376c, Func Offset: 0x3c
	// Line 4631, Address: 0x373770, Func Offset: 0x40
	// Line 4632, Address: 0x373810, Func Offset: 0xe0
	// Line 4634, Address: 0x373824, Func Offset: 0xf4
	// Line 4635, Address: 0x373828, Func Offset: 0xf8
	// Line 4636, Address: 0x37382c, Func Offset: 0xfc
	// Line 4637, Address: 0x373834, Func Offset: 0x104
	// Line 4638, Address: 0x37383c, Func Offset: 0x10c
	// Line 4639, Address: 0x373844, Func Offset: 0x114
	// Line 4640, Address: 0x37384c, Func Offset: 0x11c
	// Line 4641, Address: 0x373854, Func Offset: 0x124
	// Line 4642, Address: 0x37385c, Func Offset: 0x12c
	// Line 4643, Address: 0x373868, Func Offset: 0x138
	// Line 4644, Address: 0x373880, Func Offset: 0x150
	// Line 4647, Address: 0x373898, Func Offset: 0x168
	// Line 4648, Address: 0x3738ac, Func Offset: 0x17c
	// Line 4651, Address: 0x3738b4, Func Offset: 0x184
	// Line 4653, Address: 0x3738b8, Func Offset: 0x188
	// Line 4654, Address: 0x373958, Func Offset: 0x228
	// Line 4655, Address: 0x37395c, Func Offset: 0x22c
	// Line 4656, Address: 0x373960, Func Offset: 0x230
	// Line 4657, Address: 0x373964, Func Offset: 0x234
	// Line 4658, Address: 0x373968, Func Offset: 0x238
	// Line 4659, Address: 0x373970, Func Offset: 0x240
	// Line 4660, Address: 0x373978, Func Offset: 0x248
	// Line 4661, Address: 0x37397c, Func Offset: 0x24c
	// Line 4662, Address: 0x373984, Func Offset: 0x254
	// Line 4663, Address: 0x373988, Func Offset: 0x258
	// Line 4665, Address: 0x37398c, Func Offset: 0x25c
	// Line 4668, Address: 0x373998, Func Offset: 0x268
	// Line 4670, Address: 0x3739ac, Func Offset: 0x27c
	// Line 4675, Address: 0x3739bc, Func Offset: 0x28c
	// Line 4676, Address: 0x3739d0, Func Offset: 0x2a0
	// Line 4679, Address: 0x3739d8, Func Offset: 0x2a8
	// Line 4681, Address: 0x3739dc, Func Offset: 0x2ac
	// Line 4682, Address: 0x373a7c, Func Offset: 0x34c
	// Line 4686, Address: 0x373a80, Func Offset: 0x350
	// Line 4687, Address: 0x373a94, Func Offset: 0x364
	// Line 4690, Address: 0x373a9c, Func Offset: 0x36c
	// Line 4692, Address: 0x373aa0, Func Offset: 0x370
	// Line 4693, Address: 0x373b40, Func Offset: 0x410
	// Line 4695, Address: 0x373b48, Func Offset: 0x418
	// Func End, Address: 0x373b64, Func Offset: 0x434
}

// iParIniVFXLightShaft__FP10tagxParSysP13tagParCmdList
// Start address: 0x373b70
void iParIniVFXLightShaft(tagParCmdList* list)
{
	tagParCmd_KillOld* d;
	tagParCmd_Move* d;
	tagParCmd_Texture* d;
	tagParCmd_Emitter* d;
	xParCmd* cmd;
	// Line 4539, Address: 0x373b70, Func Offset: 0
	// Line 4542, Address: 0x373b88, Func Offset: 0x18
	// Line 4543, Address: 0x373ba4, Func Offset: 0x34
	// Line 4546, Address: 0x373bac, Func Offset: 0x3c
	// Line 4548, Address: 0x373bb0, Func Offset: 0x40
	// Line 4549, Address: 0x373c50, Func Offset: 0xe0
	// Line 4551, Address: 0x373c64, Func Offset: 0xf4
	// Line 4552, Address: 0x373c68, Func Offset: 0xf8
	// Line 4553, Address: 0x373c6c, Func Offset: 0xfc
	// Line 4554, Address: 0x373c74, Func Offset: 0x104
	// Line 4555, Address: 0x373c7c, Func Offset: 0x10c
	// Line 4556, Address: 0x373c84, Func Offset: 0x114
	// Line 4557, Address: 0x373c8c, Func Offset: 0x11c
	// Line 4558, Address: 0x373c94, Func Offset: 0x124
	// Line 4559, Address: 0x373c9c, Func Offset: 0x12c
	// Line 4560, Address: 0x373ca8, Func Offset: 0x138
	// Line 4561, Address: 0x373cc0, Func Offset: 0x150
	// Line 4564, Address: 0x373cd8, Func Offset: 0x168
	// Line 4565, Address: 0x373cec, Func Offset: 0x17c
	// Line 4568, Address: 0x373cf4, Func Offset: 0x184
	// Line 4570, Address: 0x373cf8, Func Offset: 0x188
	// Line 4571, Address: 0x373d98, Func Offset: 0x228
	// Line 4572, Address: 0x373d9c, Func Offset: 0x22c
	// Line 4573, Address: 0x373da0, Func Offset: 0x230
	// Line 4574, Address: 0x373da4, Func Offset: 0x234
	// Line 4575, Address: 0x373da8, Func Offset: 0x238
	// Line 4576, Address: 0x373db0, Func Offset: 0x240
	// Line 4577, Address: 0x373db8, Func Offset: 0x248
	// Line 4578, Address: 0x373dbc, Func Offset: 0x24c
	// Line 4579, Address: 0x373dc4, Func Offset: 0x254
	// Line 4580, Address: 0x373dc8, Func Offset: 0x258
	// Line 4582, Address: 0x373dcc, Func Offset: 0x25c
	// Line 4585, Address: 0x373dd8, Func Offset: 0x268
	// Line 4587, Address: 0x373dec, Func Offset: 0x27c
	// Line 4591, Address: 0x373dfc, Func Offset: 0x28c
	// Line 4592, Address: 0x373e10, Func Offset: 0x2a0
	// Line 4595, Address: 0x373e18, Func Offset: 0x2a8
	// Line 4597, Address: 0x373e1c, Func Offset: 0x2ac
	// Line 4598, Address: 0x373ebc, Func Offset: 0x34c
	// Line 4602, Address: 0x373ec0, Func Offset: 0x350
	// Line 4603, Address: 0x373ed4, Func Offset: 0x364
	// Line 4606, Address: 0x373edc, Func Offset: 0x36c
	// Line 4608, Address: 0x373ee0, Func Offset: 0x370
	// Line 4609, Address: 0x373f80, Func Offset: 0x410
	// Line 4611, Address: 0x373f88, Func Offset: 0x418
	// Func End, Address: 0x373fa4, Func Offset: 0x434
}

// iParIniVFXExpandingRing__FP10tagxParSysP13tagParCmdList
// Start address: 0x373fb0
void iParIniVFXExpandingRing(tagParCmdList* list)
{
	tagParCmd_KillOld* d;
	tagParCmd_Texture* d;
	tagParCmd_Emitter* d;
	xParCmd* cmd;
	// Line 4453, Address: 0x373fb0, Func Offset: 0
	// Line 4456, Address: 0x373fc8, Func Offset: 0x18
	// Line 4457, Address: 0x373fe4, Func Offset: 0x34
	// Line 4460, Address: 0x373fec, Func Offset: 0x3c
	// Line 4462, Address: 0x373ff0, Func Offset: 0x40
	// Line 4463, Address: 0x374090, Func Offset: 0xe0
	// Line 4465, Address: 0x3740a4, Func Offset: 0xf4
	// Line 4466, Address: 0x3740a8, Func Offset: 0xf8
	// Line 4467, Address: 0x3740ac, Func Offset: 0xfc
	// Line 4468, Address: 0x3740b4, Func Offset: 0x104
	// Line 4469, Address: 0x3740bc, Func Offset: 0x10c
	// Line 4470, Address: 0x3740c4, Func Offset: 0x114
	// Line 4471, Address: 0x3740cc, Func Offset: 0x11c
	// Line 4472, Address: 0x3740d4, Func Offset: 0x124
	// Line 4473, Address: 0x3740dc, Func Offset: 0x12c
	// Line 4474, Address: 0x3740e0, Func Offset: 0x130
	// Line 4475, Address: 0x3740f8, Func Offset: 0x148
	// Line 4478, Address: 0x374110, Func Offset: 0x160
	// Line 4479, Address: 0x374124, Func Offset: 0x174
	// Line 4482, Address: 0x37412c, Func Offset: 0x17c
	// Line 4484, Address: 0x374130, Func Offset: 0x180
	// Line 4485, Address: 0x3741d0, Func Offset: 0x220
	// Line 4486, Address: 0x3741d4, Func Offset: 0x224
	// Line 4487, Address: 0x3741d8, Func Offset: 0x228
	// Line 4488, Address: 0x3741dc, Func Offset: 0x22c
	// Line 4489, Address: 0x3741e0, Func Offset: 0x230
	// Line 4490, Address: 0x3741e8, Func Offset: 0x238
	// Line 4491, Address: 0x3741f0, Func Offset: 0x240
	// Line 4492, Address: 0x3741f4, Func Offset: 0x244
	// Line 4493, Address: 0x3741fc, Func Offset: 0x24c
	// Line 4494, Address: 0x374200, Func Offset: 0x250
	// Line 4496, Address: 0x374204, Func Offset: 0x254
	// Line 4499, Address: 0x374210, Func Offset: 0x260
	// Line 4501, Address: 0x374224, Func Offset: 0x274
	// Line 4518, Address: 0x374234, Func Offset: 0x284
	// Line 4519, Address: 0x374248, Func Offset: 0x298
	// Line 4522, Address: 0x374250, Func Offset: 0x2a0
	// Line 4524, Address: 0x374254, Func Offset: 0x2a4
	// Line 4525, Address: 0x3742f4, Func Offset: 0x344
	// Line 4527, Address: 0x3742fc, Func Offset: 0x34c
	// Func End, Address: 0x374318, Func Offset: 0x368
}

// iParIniVFXExpandingSphere__FP10tagxParSysP13tagParCmdList
// Start address: 0x374320
void iParIniVFXExpandingSphere(tagParCmdList* list)
{
	tagParCmd_KillOld* d;
	tagParCmd_Move* d;
	tagParCmd_Texture* d;
	tagParCmd_Emitter* d;
	xParCmd* cmd;
	// Line 4368, Address: 0x374320, Func Offset: 0
	// Line 4371, Address: 0x374338, Func Offset: 0x18
	// Line 4372, Address: 0x374354, Func Offset: 0x34
	// Line 4375, Address: 0x37435c, Func Offset: 0x3c
	// Line 4377, Address: 0x374360, Func Offset: 0x40
	// Line 4378, Address: 0x374400, Func Offset: 0xe0
	// Line 4380, Address: 0x374414, Func Offset: 0xf4
	// Line 4381, Address: 0x374418, Func Offset: 0xf8
	// Line 4382, Address: 0x37441c, Func Offset: 0xfc
	// Line 4383, Address: 0x374424, Func Offset: 0x104
	// Line 4384, Address: 0x37442c, Func Offset: 0x10c
	// Line 4385, Address: 0x374434, Func Offset: 0x114
	// Line 4386, Address: 0x37443c, Func Offset: 0x11c
	// Line 4387, Address: 0x374444, Func Offset: 0x124
	// Line 4388, Address: 0x37444c, Func Offset: 0x12c
	// Line 4389, Address: 0x374458, Func Offset: 0x138
	// Line 4390, Address: 0x374470, Func Offset: 0x150
	// Line 4393, Address: 0x374488, Func Offset: 0x168
	// Line 4394, Address: 0x37449c, Func Offset: 0x17c
	// Line 4397, Address: 0x3744a4, Func Offset: 0x184
	// Line 4399, Address: 0x3744a8, Func Offset: 0x188
	// Line 4400, Address: 0x374548, Func Offset: 0x228
	// Line 4401, Address: 0x37454c, Func Offset: 0x22c
	// Line 4402, Address: 0x374550, Func Offset: 0x230
	// Line 4403, Address: 0x374554, Func Offset: 0x234
	// Line 4404, Address: 0x374558, Func Offset: 0x238
	// Line 4405, Address: 0x374560, Func Offset: 0x240
	// Line 4406, Address: 0x374568, Func Offset: 0x248
	// Line 4407, Address: 0x37456c, Func Offset: 0x24c
	// Line 4408, Address: 0x374574, Func Offset: 0x254
	// Line 4409, Address: 0x374578, Func Offset: 0x258
	// Line 4411, Address: 0x37457c, Func Offset: 0x25c
	// Line 4414, Address: 0x374588, Func Offset: 0x268
	// Line 4416, Address: 0x37459c, Func Offset: 0x27c
	// Line 4421, Address: 0x3745ac, Func Offset: 0x28c
	// Line 4422, Address: 0x3745c0, Func Offset: 0x2a0
	// Line 4425, Address: 0x3745c8, Func Offset: 0x2a8
	// Line 4427, Address: 0x3745cc, Func Offset: 0x2ac
	// Line 4428, Address: 0x37466c, Func Offset: 0x34c
	// Line 4432, Address: 0x374670, Func Offset: 0x350
	// Line 4433, Address: 0x374684, Func Offset: 0x364
	// Line 4436, Address: 0x37468c, Func Offset: 0x36c
	// Line 4438, Address: 0x374690, Func Offset: 0x370
	// Line 4439, Address: 0x374730, Func Offset: 0x410
	// Line 4441, Address: 0x374738, Func Offset: 0x418
	// Func End, Address: 0x374754, Func Offset: 0x434
}

// iParIniVFXTwinkle__FP10tagxParSysP13tagParCmdList
// Start address: 0x374760
void iParIniVFXTwinkle(tagParCmdList* list)
{
	tagParCmd_KillOld* d;
	tagParCmd_Move* d;
	tagParCmd_Texture* d;
	tagParCmd_Emitter* d;
	xParCmd* cmd;
	// Line 4279, Address: 0x374760, Func Offset: 0
	// Line 4282, Address: 0x374778, Func Offset: 0x18
	// Line 4283, Address: 0x374794, Func Offset: 0x34
	// Line 4286, Address: 0x37479c, Func Offset: 0x3c
	// Line 4288, Address: 0x3747a0, Func Offset: 0x40
	// Line 4289, Address: 0x374840, Func Offset: 0xe0
	// Line 4291, Address: 0x374854, Func Offset: 0xf4
	// Line 4292, Address: 0x374858, Func Offset: 0xf8
	// Line 4293, Address: 0x37485c, Func Offset: 0xfc
	// Line 4294, Address: 0x374864, Func Offset: 0x104
	// Line 4295, Address: 0x37486c, Func Offset: 0x10c
	// Line 4296, Address: 0x374874, Func Offset: 0x114
	// Line 4297, Address: 0x37487c, Func Offset: 0x11c
	// Line 4298, Address: 0x374884, Func Offset: 0x124
	// Line 4299, Address: 0x37488c, Func Offset: 0x12c
	// Line 4300, Address: 0x374894, Func Offset: 0x134
	// Line 4301, Address: 0x37489c, Func Offset: 0x13c
	// Line 4302, Address: 0x3748a4, Func Offset: 0x144
	// Line 4303, Address: 0x3748ac, Func Offset: 0x14c
	// Line 4304, Address: 0x3748b0, Func Offset: 0x150
	// Line 4305, Address: 0x3748b8, Func Offset: 0x158
	// Line 4306, Address: 0x3748d0, Func Offset: 0x170
	// Line 4309, Address: 0x3748e8, Func Offset: 0x188
	// Line 4310, Address: 0x3748fc, Func Offset: 0x19c
	// Line 4313, Address: 0x374904, Func Offset: 0x1a4
	// Line 4315, Address: 0x374908, Func Offset: 0x1a8
	// Line 4316, Address: 0x3749a8, Func Offset: 0x248
	// Line 4317, Address: 0x3749ac, Func Offset: 0x24c
	// Line 4318, Address: 0x3749b0, Func Offset: 0x250
	// Line 4319, Address: 0x3749b4, Func Offset: 0x254
	// Line 4321, Address: 0x3749b8, Func Offset: 0x258
	// Line 4322, Address: 0x3749c0, Func Offset: 0x260
	// Line 4323, Address: 0x3749c8, Func Offset: 0x268
	// Line 4324, Address: 0x3749d0, Func Offset: 0x270
	// Line 4325, Address: 0x3749d8, Func Offset: 0x278
	// Line 4326, Address: 0x3749dc, Func Offset: 0x27c
	// Line 4328, Address: 0x3749e0, Func Offset: 0x280
	// Line 4331, Address: 0x3749ec, Func Offset: 0x28c
	// Line 4333, Address: 0x374a00, Func Offset: 0x2a0
	// Line 4337, Address: 0x374a10, Func Offset: 0x2b0
	// Line 4338, Address: 0x374a24, Func Offset: 0x2c4
	// Line 4341, Address: 0x374a2c, Func Offset: 0x2cc
	// Line 4343, Address: 0x374a30, Func Offset: 0x2d0
	// Line 4344, Address: 0x374ad0, Func Offset: 0x370
	// Line 4348, Address: 0x374ad4, Func Offset: 0x374
	// Line 4349, Address: 0x374ae8, Func Offset: 0x388
	// Line 4352, Address: 0x374af0, Func Offset: 0x390
	// Line 4354, Address: 0x374af4, Func Offset: 0x394
	// Line 4355, Address: 0x374b94, Func Offset: 0x434
	// Line 4357, Address: 0x374b9c, Func Offset: 0x43c
	// Func End, Address: 0x374bb8, Func Offset: 0x458
}

// iParIniVFXLight__FP10tagxParSysP13tagParCmdList
// Start address: 0x374bc0
void iParIniVFXLight(tagParCmdList* list)
{
	tagParCmd_KillOld* d;
	tagParCmd_Move* d;
	tagParCmd_Texture* d;
	tagParCmd_Emitter* d;
	xParCmd* cmd;
	// Line 4182, Address: 0x374bc0, Func Offset: 0
	// Line 4185, Address: 0x374bd8, Func Offset: 0x18
	// Line 4186, Address: 0x374bf4, Func Offset: 0x34
	// Line 4189, Address: 0x374bfc, Func Offset: 0x3c
	// Line 4191, Address: 0x374c00, Func Offset: 0x40
	// Line 4192, Address: 0x374ca0, Func Offset: 0xe0
	// Line 4193, Address: 0x374ca4, Func Offset: 0xe4
	// Line 4194, Address: 0x374ca8, Func Offset: 0xe8
	// Line 4195, Address: 0x374cac, Func Offset: 0xec
	// Line 4196, Address: 0x374cb4, Func Offset: 0xf4
	// Line 4197, Address: 0x374cbc, Func Offset: 0xfc
	// Line 4198, Address: 0x374cc4, Func Offset: 0x104
	// Line 4199, Address: 0x374ccc, Func Offset: 0x10c
	// Line 4200, Address: 0x374cd4, Func Offset: 0x114
	// Line 4201, Address: 0x374cdc, Func Offset: 0x11c
	// Line 4202, Address: 0x374ce0, Func Offset: 0x120
	// Line 4203, Address: 0x374ce4, Func Offset: 0x124
	// Line 4204, Address: 0x374ce8, Func Offset: 0x128
	// Line 4205, Address: 0x374cf0, Func Offset: 0x130
	// Line 4206, Address: 0x374cf4, Func Offset: 0x134
	// Line 4207, Address: 0x374cf8, Func Offset: 0x138
	// Line 4208, Address: 0x374cfc, Func Offset: 0x13c
	// Line 4209, Address: 0x374d08, Func Offset: 0x148
	// Line 4210, Address: 0x374d14, Func Offset: 0x154
	// Line 4211, Address: 0x374d18, Func Offset: 0x158
	// Line 4212, Address: 0x374d1c, Func Offset: 0x15c
	// Line 4213, Address: 0x374d20, Func Offset: 0x160
	// Line 4214, Address: 0x374d24, Func Offset: 0x164
	// Line 4215, Address: 0x374d28, Func Offset: 0x168
	// Line 4216, Address: 0x374d2c, Func Offset: 0x16c
	// Line 4217, Address: 0x374d44, Func Offset: 0x184
	// Line 4220, Address: 0x374d5c, Func Offset: 0x19c
	// Line 4221, Address: 0x374d70, Func Offset: 0x1b0
	// Line 4224, Address: 0x374d78, Func Offset: 0x1b8
	// Line 4226, Address: 0x374d7c, Func Offset: 0x1bc
	// Line 4227, Address: 0x374e1c, Func Offset: 0x25c
	// Line 4228, Address: 0x374e20, Func Offset: 0x260
	// Line 4229, Address: 0x374e24, Func Offset: 0x264
	// Line 4230, Address: 0x374e28, Func Offset: 0x268
	// Line 4232, Address: 0x374e2c, Func Offset: 0x26c
	// Line 4233, Address: 0x374e34, Func Offset: 0x274
	// Line 4234, Address: 0x374e3c, Func Offset: 0x27c
	// Line 4235, Address: 0x374e44, Func Offset: 0x284
	// Line 4236, Address: 0x374e4c, Func Offset: 0x28c
	// Line 4237, Address: 0x374e50, Func Offset: 0x290
	// Line 4239, Address: 0x374e54, Func Offset: 0x294
	// Line 4242, Address: 0x374e60, Func Offset: 0x2a0
	// Line 4244, Address: 0x374e74, Func Offset: 0x2b4
	// Line 4248, Address: 0x374e84, Func Offset: 0x2c4
	// Line 4249, Address: 0x374e98, Func Offset: 0x2d8
	// Line 4252, Address: 0x374ea0, Func Offset: 0x2e0
	// Line 4254, Address: 0x374ea4, Func Offset: 0x2e4
	// Line 4255, Address: 0x374f44, Func Offset: 0x384
	// Line 4259, Address: 0x374f48, Func Offset: 0x388
	// Line 4260, Address: 0x374f5c, Func Offset: 0x39c
	// Line 4263, Address: 0x374f64, Func Offset: 0x3a4
	// Line 4265, Address: 0x374f68, Func Offset: 0x3a8
	// Line 4266, Address: 0x375008, Func Offset: 0x448
	// Line 4268, Address: 0x375010, Func Offset: 0x450
	// Func End, Address: 0x37502c, Func Offset: 0x46c
}

// iParIniVFXFootprint__FP10tagxParSysP13tagParCmdList
// Start address: 0x375030
void iParIniVFXFootprint(tagParCmdList* list)
{
	tagParCmd_KillOld* d;
	tagParCmd_Move* d;
	tagParCmd_Texture* d;
	tagParCmd_Emitter* d;
	xParCmd* cmd;
	// Line 4083, Address: 0x375030, Func Offset: 0
	// Line 4087, Address: 0x375048, Func Offset: 0x18
	// Line 4088, Address: 0x375064, Func Offset: 0x34
	// Line 4091, Address: 0x37506c, Func Offset: 0x3c
	// Line 4093, Address: 0x375070, Func Offset: 0x40
	// Line 4094, Address: 0x375110, Func Offset: 0xe0
	// Line 4095, Address: 0x375114, Func Offset: 0xe4
	// Line 4096, Address: 0x375118, Func Offset: 0xe8
	// Line 4097, Address: 0x37511c, Func Offset: 0xec
	// Line 4098, Address: 0x375124, Func Offset: 0xf4
	// Line 4099, Address: 0x37512c, Func Offset: 0xfc
	// Line 4100, Address: 0x375134, Func Offset: 0x104
	// Line 4101, Address: 0x37513c, Func Offset: 0x10c
	// Line 4102, Address: 0x375144, Func Offset: 0x114
	// Line 4103, Address: 0x37514c, Func Offset: 0x11c
	// Line 4104, Address: 0x375150, Func Offset: 0x120
	// Line 4105, Address: 0x375154, Func Offset: 0x124
	// Line 4106, Address: 0x375158, Func Offset: 0x128
	// Line 4107, Address: 0x375160, Func Offset: 0x130
	// Line 4108, Address: 0x375164, Func Offset: 0x134
	// Line 4109, Address: 0x375168, Func Offset: 0x138
	// Line 4110, Address: 0x37516c, Func Offset: 0x13c
	// Line 4111, Address: 0x375178, Func Offset: 0x148
	// Line 4112, Address: 0x37517c, Func Offset: 0x14c
	// Line 4113, Address: 0x375180, Func Offset: 0x150
	// Line 4114, Address: 0x375184, Func Offset: 0x154
	// Line 4115, Address: 0x375188, Func Offset: 0x158
	// Line 4116, Address: 0x37518c, Func Offset: 0x15c
	// Line 4117, Address: 0x375190, Func Offset: 0x160
	// Line 4118, Address: 0x375194, Func Offset: 0x164
	// Line 4119, Address: 0x3751ac, Func Offset: 0x17c
	// Line 4122, Address: 0x3751c4, Func Offset: 0x194
	// Line 4123, Address: 0x3751d8, Func Offset: 0x1a8
	// Line 4126, Address: 0x3751e0, Func Offset: 0x1b0
	// Line 4128, Address: 0x3751e4, Func Offset: 0x1b4
	// Line 4129, Address: 0x375284, Func Offset: 0x254
	// Line 4130, Address: 0x375288, Func Offset: 0x258
	// Line 4131, Address: 0x37528c, Func Offset: 0x25c
	// Line 4132, Address: 0x375290, Func Offset: 0x260
	// Line 4133, Address: 0x375294, Func Offset: 0x264
	// Line 4134, Address: 0x37529c, Func Offset: 0x26c
	// Line 4135, Address: 0x3752a4, Func Offset: 0x274
	// Line 4136, Address: 0x3752a8, Func Offset: 0x278
	// Line 4137, Address: 0x3752b0, Func Offset: 0x280
	// Line 4138, Address: 0x3752b4, Func Offset: 0x284
	// Line 4140, Address: 0x3752b8, Func Offset: 0x288
	// Line 4143, Address: 0x3752c4, Func Offset: 0x294
	// Line 4145, Address: 0x3752d8, Func Offset: 0x2a8
	// Line 4150, Address: 0x3752e8, Func Offset: 0x2b8
	// Line 4151, Address: 0x3752fc, Func Offset: 0x2cc
	// Line 4154, Address: 0x375304, Func Offset: 0x2d4
	// Line 4156, Address: 0x375308, Func Offset: 0x2d8
	// Line 4157, Address: 0x3753a8, Func Offset: 0x378
	// Line 4161, Address: 0x3753ac, Func Offset: 0x37c
	// Line 4162, Address: 0x3753c0, Func Offset: 0x390
	// Line 4165, Address: 0x3753c8, Func Offset: 0x398
	// Line 4167, Address: 0x3753cc, Func Offset: 0x39c
	// Line 4168, Address: 0x37546c, Func Offset: 0x43c
	// Line 4170, Address: 0x375474, Func Offset: 0x444
	// Func End, Address: 0x375490, Func Offset: 0x460
}

// iParIniVFXBreath__FP10tagxParSysP13tagParCmdList
// Start address: 0x375490
void iParIniVFXBreath(tagParCmdList* list)
{
	tagParCmd_KillOld* d;
	tagParCmd_Move* d;
	tagParCmd_Texture* d;
	tagParCmd_Emitter* d;
	xParCmd* cmd;
	// Line 3989, Address: 0x375490, Func Offset: 0
	// Line 3993, Address: 0x3754a8, Func Offset: 0x18
	// Line 3994, Address: 0x3754c4, Func Offset: 0x34
	// Line 3997, Address: 0x3754cc, Func Offset: 0x3c
	// Line 3999, Address: 0x3754d0, Func Offset: 0x40
	// Line 4000, Address: 0x375570, Func Offset: 0xe0
	// Line 4001, Address: 0x375574, Func Offset: 0xe4
	// Line 4002, Address: 0x375578, Func Offset: 0xe8
	// Line 4003, Address: 0x37557c, Func Offset: 0xec
	// Line 4004, Address: 0x375584, Func Offset: 0xf4
	// Line 4005, Address: 0x37558c, Func Offset: 0xfc
	// Line 4006, Address: 0x375594, Func Offset: 0x104
	// Line 4007, Address: 0x37559c, Func Offset: 0x10c
	// Line 4008, Address: 0x3755a4, Func Offset: 0x114
	// Line 4009, Address: 0x3755ac, Func Offset: 0x11c
	// Line 4010, Address: 0x3755b0, Func Offset: 0x120
	// Line 4011, Address: 0x3755b4, Func Offset: 0x124
	// Line 4012, Address: 0x3755b8, Func Offset: 0x128
	// Line 4013, Address: 0x3755c0, Func Offset: 0x130
	// Line 4014, Address: 0x3755c8, Func Offset: 0x138
	// Line 4015, Address: 0x3755cc, Func Offset: 0x13c
	// Line 4016, Address: 0x3755d0, Func Offset: 0x140
	// Line 4017, Address: 0x3755d4, Func Offset: 0x144
	// Line 4018, Address: 0x3755e0, Func Offset: 0x150
	// Line 4019, Address: 0x3755e4, Func Offset: 0x154
	// Line 4020, Address: 0x3755f0, Func Offset: 0x160
	// Line 4021, Address: 0x3755f4, Func Offset: 0x164
	// Line 4022, Address: 0x3755f8, Func Offset: 0x168
	// Line 4023, Address: 0x3755fc, Func Offset: 0x16c
	// Line 4024, Address: 0x375600, Func Offset: 0x170
	// Line 4025, Address: 0x375618, Func Offset: 0x188
	// Line 4028, Address: 0x375630, Func Offset: 0x1a0
	// Line 4029, Address: 0x375644, Func Offset: 0x1b4
	// Line 4032, Address: 0x37564c, Func Offset: 0x1bc
	// Line 4034, Address: 0x375650, Func Offset: 0x1c0
	// Line 4035, Address: 0x3756f0, Func Offset: 0x260
	// Line 4036, Address: 0x3756f4, Func Offset: 0x264
	// Line 4037, Address: 0x3756f8, Func Offset: 0x268
	// Line 4038, Address: 0x375700, Func Offset: 0x270
	// Line 4039, Address: 0x375708, Func Offset: 0x278
	// Line 4040, Address: 0x375710, Func Offset: 0x280
	// Line 4041, Address: 0x375718, Func Offset: 0x288
	// Line 4042, Address: 0x375720, Func Offset: 0x290
	// Line 4043, Address: 0x375728, Func Offset: 0x298
	// Line 4044, Address: 0x37572c, Func Offset: 0x29c
	// Line 4046, Address: 0x375730, Func Offset: 0x2a0
	// Line 4049, Address: 0x37573c, Func Offset: 0x2ac
	// Line 4051, Address: 0x375750, Func Offset: 0x2c0
	// Line 4056, Address: 0x375760, Func Offset: 0x2d0
	// Line 4057, Address: 0x375774, Func Offset: 0x2e4
	// Line 4060, Address: 0x37577c, Func Offset: 0x2ec
	// Line 4062, Address: 0x375780, Func Offset: 0x2f0
	// Line 4063, Address: 0x375820, Func Offset: 0x390
	// Line 4067, Address: 0x375824, Func Offset: 0x394
	// Line 4068, Address: 0x375838, Func Offset: 0x3a8
	// Line 4071, Address: 0x375840, Func Offset: 0x3b0
	// Line 4073, Address: 0x375844, Func Offset: 0x3b4
	// Line 4074, Address: 0x3758e4, Func Offset: 0x454
	// Line 4076, Address: 0x3758ec, Func Offset: 0x45c
	// Func End, Address: 0x375908, Func Offset: 0x478
}

// iParIniVFXSpark__FP10tagxParSysP13tagParCmdList
// Start address: 0x375910
void iParIniVFXSpark(tagParCmdList* list)
{
	tagParCmd_KillOld* d;
	tagParCmd_Bounce* d;
	tagParCmd_Move* d;
	tagParCmd_Accelerate* d;
	tagParCmd_Texture* d;
	tagParCmd_Emitter* d;
	xParCmd* cmd;
	// Line 3862, Address: 0x375910, Func Offset: 0
	// Line 3865, Address: 0x375928, Func Offset: 0x18
	// Line 3866, Address: 0x375944, Func Offset: 0x34
	// Line 3869, Address: 0x37594c, Func Offset: 0x3c
	// Line 3871, Address: 0x375950, Func Offset: 0x40
	// Line 3872, Address: 0x3759f0, Func Offset: 0xe0
	// Line 3873, Address: 0x3759f4, Func Offset: 0xe4
	// Line 3874, Address: 0x3759f8, Func Offset: 0xe8
	// Line 3875, Address: 0x3759fc, Func Offset: 0xec
	// Line 3876, Address: 0x375a04, Func Offset: 0xf4
	// Line 3877, Address: 0x375a0c, Func Offset: 0xfc
	// Line 3878, Address: 0x375a14, Func Offset: 0x104
	// Line 3879, Address: 0x375a1c, Func Offset: 0x10c
	// Line 3880, Address: 0x375a24, Func Offset: 0x114
	// Line 3881, Address: 0x375a2c, Func Offset: 0x11c
	// Line 3882, Address: 0x375a30, Func Offset: 0x120
	// Line 3883, Address: 0x375a34, Func Offset: 0x124
	// Line 3884, Address: 0x375a38, Func Offset: 0x128
	// Line 3885, Address: 0x375a3c, Func Offset: 0x12c
	// Line 3886, Address: 0x375a40, Func Offset: 0x130
	// Line 3887, Address: 0x375a44, Func Offset: 0x134
	// Line 3888, Address: 0x375a48, Func Offset: 0x138
	// Line 3889, Address: 0x375a50, Func Offset: 0x140
	// Line 3890, Address: 0x375a54, Func Offset: 0x144
	// Line 3891, Address: 0x375a58, Func Offset: 0x148
	// Line 3892, Address: 0x375a5c, Func Offset: 0x14c
	// Line 3893, Address: 0x375a60, Func Offset: 0x150
	// Line 3894, Address: 0x375a6c, Func Offset: 0x15c
	// Line 3895, Address: 0x375a78, Func Offset: 0x168
	// Line 3896, Address: 0x375a84, Func Offset: 0x174
	// Line 3897, Address: 0x375a9c, Func Offset: 0x18c
	// Line 3900, Address: 0x375ab4, Func Offset: 0x1a4
	// Line 3901, Address: 0x375ac8, Func Offset: 0x1b8
	// Line 3904, Address: 0x375ad0, Func Offset: 0x1c0
	// Line 3906, Address: 0x375ad4, Func Offset: 0x1c4
	// Line 3907, Address: 0x375b74, Func Offset: 0x264
	// Line 3908, Address: 0x375b78, Func Offset: 0x268
	// Line 3909, Address: 0x375b80, Func Offset: 0x270
	// Line 3910, Address: 0x375b88, Func Offset: 0x278
	// Line 3911, Address: 0x375b90, Func Offset: 0x280
	// Line 3912, Address: 0x375b98, Func Offset: 0x288
	// Line 3913, Address: 0x375ba0, Func Offset: 0x290
	// Line 3914, Address: 0x375ba8, Func Offset: 0x298
	// Line 3915, Address: 0x375bb0, Func Offset: 0x2a0
	// Line 3916, Address: 0x375bb4, Func Offset: 0x2a4
	// Line 3918, Address: 0x375bb8, Func Offset: 0x2a8
	// Line 3921, Address: 0x375bc4, Func Offset: 0x2b4
	// Line 3923, Address: 0x375bd8, Func Offset: 0x2c8
	// Line 3928, Address: 0x375be8, Func Offset: 0x2d8
	// Line 3929, Address: 0x375bfc, Func Offset: 0x2ec
	// Line 3932, Address: 0x375c04, Func Offset: 0x2f4
	// Line 3934, Address: 0x375c08, Func Offset: 0x2f8
	// Line 3935, Address: 0x375ca8, Func Offset: 0x398
	// Line 3936, Address: 0x375cac, Func Offset: 0x39c
	// Line 3937, Address: 0x375cb8, Func Offset: 0x3a8
	// Line 3938, Address: 0x375cbc, Func Offset: 0x3ac
	// Line 3939, Address: 0x375cc0, Func Offset: 0x3b0
	// Line 3943, Address: 0x375cc4, Func Offset: 0x3b4
	// Line 3944, Address: 0x375cd8, Func Offset: 0x3c8
	// Line 3947, Address: 0x375ce0, Func Offset: 0x3d0
	// Line 3949, Address: 0x375ce4, Func Offset: 0x3d4
	// Line 3950, Address: 0x375d84, Func Offset: 0x474
	// Line 3954, Address: 0x375d88, Func Offset: 0x478
	// Line 3955, Address: 0x375d9c, Func Offset: 0x48c
	// Line 3958, Address: 0x375da4, Func Offset: 0x494
	// Line 3960, Address: 0x375da8, Func Offset: 0x498
	// Line 3961, Address: 0x375e48, Func Offset: 0x538
	// Line 3962, Address: 0x375e4c, Func Offset: 0x53c
	// Line 3963, Address: 0x375e50, Func Offset: 0x540
	// Line 3964, Address: 0x375e54, Func Offset: 0x544
	// Line 3966, Address: 0x375e58, Func Offset: 0x548
	// Line 3967, Address: 0x375e60, Func Offset: 0x550
	// Line 3968, Address: 0x375e68, Func Offset: 0x558
	// Line 3973, Address: 0x375e70, Func Offset: 0x560
	// Line 3974, Address: 0x375e84, Func Offset: 0x574
	// Line 3977, Address: 0x375e8c, Func Offset: 0x57c
	// Line 3979, Address: 0x375e90, Func Offset: 0x580
	// Line 3980, Address: 0x375f30, Func Offset: 0x620
	// Line 3982, Address: 0x375f38, Func Offset: 0x628
	// Func End, Address: 0x375f54, Func Offset: 0x644
}

// iParIniVFXRegionFog__FP10tagxParSysP13tagParCmdList
// Start address: 0x375f60
void iParIniVFXRegionFog(tagParCmdList* list)
{
	tagParCmd_KillOld* d;
	tagParCmd_Bounce* d;
	tagParCmd_Move* d;
	tagParCmd_Accelerate* d;
	tagParCmd_Texture* d;
	tagParCmd_Emitter* d;
	xParCmd* cmd;
	// Line 3718, Address: 0x375f60, Func Offset: 0
	// Line 3721, Address: 0x375f78, Func Offset: 0x18
	// Line 3722, Address: 0x375f94, Func Offset: 0x34
	// Line 3725, Address: 0x375f9c, Func Offset: 0x3c
	// Line 3727, Address: 0x375fa0, Func Offset: 0x40
	// Line 3728, Address: 0x376040, Func Offset: 0xe0
	// Line 3730, Address: 0x376054, Func Offset: 0xf4
	// Line 3731, Address: 0x37605c, Func Offset: 0xfc
	// Line 3732, Address: 0x376060, Func Offset: 0x100
	// Line 3733, Address: 0x376068, Func Offset: 0x108
	// Line 3734, Address: 0x376070, Func Offset: 0x110
	// Line 3735, Address: 0x376078, Func Offset: 0x118
	// Line 3736, Address: 0x376080, Func Offset: 0x120
	// Line 3737, Address: 0x376088, Func Offset: 0x128
	// Line 3738, Address: 0x376090, Func Offset: 0x130
	// Line 3739, Address: 0x376094, Func Offset: 0x134
	// Line 3740, Address: 0x376098, Func Offset: 0x138
	// Line 3741, Address: 0x37609c, Func Offset: 0x13c
	// Line 3742, Address: 0x3760a4, Func Offset: 0x144
	// Line 3743, Address: 0x3760a8, Func Offset: 0x148
	// Line 3744, Address: 0x3760b0, Func Offset: 0x150
	// Line 3745, Address: 0x3760b8, Func Offset: 0x158
	// Line 3746, Address: 0x3760c0, Func Offset: 0x160
	// Line 3747, Address: 0x3760c4, Func Offset: 0x164
	// Line 3748, Address: 0x3760c8, Func Offset: 0x168
	// Line 3749, Address: 0x3760cc, Func Offset: 0x16c
	// Line 3750, Address: 0x3760d4, Func Offset: 0x174
	// Line 3751, Address: 0x3760d8, Func Offset: 0x178
	// Line 3752, Address: 0x3760e0, Func Offset: 0x180
	// Line 3753, Address: 0x3760f8, Func Offset: 0x198
	// Line 3754, Address: 0x376110, Func Offset: 0x1b0
	// Line 3755, Address: 0x376114, Func Offset: 0x1b4
	// Line 3756, Address: 0x376118, Func Offset: 0x1b8
	// Line 3759, Address: 0x376120, Func Offset: 0x1c0
	// Line 3760, Address: 0x376134, Func Offset: 0x1d4
	// Line 3763, Address: 0x37613c, Func Offset: 0x1dc
	// Line 3765, Address: 0x376140, Func Offset: 0x1e0
	// Line 3766, Address: 0x3761e0, Func Offset: 0x280
	// Line 3767, Address: 0x3761e4, Func Offset: 0x284
	// Line 3768, Address: 0x3761ec, Func Offset: 0x28c
	// Line 3769, Address: 0x3761f4, Func Offset: 0x294
	// Line 3770, Address: 0x3761f8, Func Offset: 0x298
	// Line 3771, Address: 0x376200, Func Offset: 0x2a0
	// Line 3772, Address: 0x376208, Func Offset: 0x2a8
	// Line 3773, Address: 0x376210, Func Offset: 0x2b0
	// Line 3775, Address: 0x376218, Func Offset: 0x2b8
	// Line 3776, Address: 0x37621c, Func Offset: 0x2bc
	// Line 3778, Address: 0x376220, Func Offset: 0x2c0
	// Line 3780, Address: 0x37622c, Func Offset: 0x2cc
	// Line 3782, Address: 0x376240, Func Offset: 0x2e0
	// Line 3786, Address: 0x376250, Func Offset: 0x2f0
	// Line 3787, Address: 0x376264, Func Offset: 0x304
	// Line 3790, Address: 0x37626c, Func Offset: 0x30c
	// Line 3792, Address: 0x376270, Func Offset: 0x310
	// Line 3793, Address: 0x376310, Func Offset: 0x3b0
	// Line 3794, Address: 0x37631c, Func Offset: 0x3bc
	// Line 3795, Address: 0x376328, Func Offset: 0x3c8
	// Line 3796, Address: 0x376334, Func Offset: 0x3d4
	// Line 3797, Address: 0x376338, Func Offset: 0x3d8
	// Line 3816, Address: 0x37633c, Func Offset: 0x3dc
	// Line 3817, Address: 0x376350, Func Offset: 0x3f0
	// Line 3820, Address: 0x376358, Func Offset: 0x3f8
	// Line 3822, Address: 0x37635c, Func Offset: 0x3fc
	// Line 3823, Address: 0x3763fc, Func Offset: 0x49c
	// Line 3828, Address: 0x376400, Func Offset: 0x4a0
	// Line 3829, Address: 0x376414, Func Offset: 0x4b4
	// Line 3832, Address: 0x37641c, Func Offset: 0x4bc
	// Line 3834, Address: 0x376420, Func Offset: 0x4c0
	// Line 3835, Address: 0x3764c0, Func Offset: 0x560
	// Line 3836, Address: 0x3764c8, Func Offset: 0x568
	// Line 3837, Address: 0x3764cc, Func Offset: 0x56c
	// Line 3838, Address: 0x3764d0, Func Offset: 0x570
	// Line 3840, Address: 0x3764d4, Func Offset: 0x574
	// Line 3841, Address: 0x3764dc, Func Offset: 0x57c
	// Line 3842, Address: 0x3764e0, Func Offset: 0x580
	// Line 3846, Address: 0x3764e8, Func Offset: 0x588
	// Line 3847, Address: 0x3764fc, Func Offset: 0x59c
	// Line 3850, Address: 0x376504, Func Offset: 0x5a4
	// Line 3852, Address: 0x376508, Func Offset: 0x5a8
	// Line 3853, Address: 0x3765a8, Func Offset: 0x648
	// Line 3855, Address: 0x3765b0, Func Offset: 0x650
	// Func End, Address: 0x3765cc, Func Offset: 0x66c
}

// iParIniVFXRegionLeaves__FP10tagxParSysP13tagParCmdList
// Start address: 0x3765d0
void iParIniVFXRegionLeaves(tagParCmdList* list)
{
	tagParCmd_KillOld* d;
	tagParCmd_Bounce* d;
	tagParCmd_Move* d;
	tagParCmd_Turbulence* d;
	tagParCmd_Jet* d;
	tagParCmd_Accelerate* d;
	tagParCmd_Texture* d;
	tagParCmd_Emitter* d;
	xParCmd* cmd;
	// Line 3539, Address: 0x3765d0, Func Offset: 0
	// Line 3542, Address: 0x3765e8, Func Offset: 0x18
	// Line 3543, Address: 0x376604, Func Offset: 0x34
	// Line 3546, Address: 0x37660c, Func Offset: 0x3c
	// Line 3548, Address: 0x376610, Func Offset: 0x40
	// Line 3549, Address: 0x3766b0, Func Offset: 0xe0
	// Line 3551, Address: 0x3766c4, Func Offset: 0xf4
	// Line 3552, Address: 0x3766cc, Func Offset: 0xfc
	// Line 3553, Address: 0x3766d0, Func Offset: 0x100
	// Line 3554, Address: 0x3766d8, Func Offset: 0x108
	// Line 3555, Address: 0x3766e0, Func Offset: 0x110
	// Line 3556, Address: 0x3766e8, Func Offset: 0x118
	// Line 3557, Address: 0x3766f0, Func Offset: 0x120
	// Line 3558, Address: 0x3766f8, Func Offset: 0x128
	// Line 3559, Address: 0x376700, Func Offset: 0x130
	// Line 3560, Address: 0x376704, Func Offset: 0x134
	// Line 3561, Address: 0x376708, Func Offset: 0x138
	// Line 3562, Address: 0x37670c, Func Offset: 0x13c
	// Line 3563, Address: 0x376710, Func Offset: 0x140
	// Line 3564, Address: 0x376718, Func Offset: 0x148
	// Line 3565, Address: 0x37671c, Func Offset: 0x14c
	// Line 3566, Address: 0x376720, Func Offset: 0x150
	// Line 3567, Address: 0x376724, Func Offset: 0x154
	// Line 3568, Address: 0x376728, Func Offset: 0x158
	// Line 3569, Address: 0x376730, Func Offset: 0x160
	// Line 3570, Address: 0x376734, Func Offset: 0x164
	// Line 3571, Address: 0x37673c, Func Offset: 0x16c
	// Line 3572, Address: 0x376754, Func Offset: 0x184
	// Line 3573, Address: 0x37676c, Func Offset: 0x19c
	// Line 3576, Address: 0x376774, Func Offset: 0x1a4
	// Line 3577, Address: 0x376788, Func Offset: 0x1b8
	// Line 3580, Address: 0x376790, Func Offset: 0x1c0
	// Line 3582, Address: 0x376794, Func Offset: 0x1c4
	// Line 3583, Address: 0x376834, Func Offset: 0x264
	// Line 3584, Address: 0x376838, Func Offset: 0x268
	// Line 3585, Address: 0x376840, Func Offset: 0x270
	// Line 3586, Address: 0x376848, Func Offset: 0x278
	// Line 3588, Address: 0x376850, Func Offset: 0x280
	// Line 3589, Address: 0x37685c, Func Offset: 0x28c
	// Line 3590, Address: 0x376868, Func Offset: 0x298
	// Line 3591, Address: 0x376874, Func Offset: 0x2a4
	// Line 3592, Address: 0x37687c, Func Offset: 0x2ac
	// Line 3593, Address: 0x376884, Func Offset: 0x2b4
	// Line 3594, Address: 0x37688c, Func Offset: 0x2bc
	// Line 3595, Address: 0x376894, Func Offset: 0x2c4
	// Line 3596, Address: 0x37689c, Func Offset: 0x2cc
	// Line 3612, Address: 0x3768a4, Func Offset: 0x2d4
	// Line 3614, Address: 0x3768b0, Func Offset: 0x2e0
	// Line 3616, Address: 0x3768c4, Func Offset: 0x2f4
	// Line 3620, Address: 0x3768d4, Func Offset: 0x304
	// Line 3621, Address: 0x3768e8, Func Offset: 0x318
	// Line 3624, Address: 0x3768f0, Func Offset: 0x320
	// Line 3626, Address: 0x3768f4, Func Offset: 0x324
	// Line 3627, Address: 0x376994, Func Offset: 0x3c4
	// Line 3628, Address: 0x376998, Func Offset: 0x3c8
	// Line 3629, Address: 0x3769a4, Func Offset: 0x3d4
	// Line 3630, Address: 0x3769a8, Func Offset: 0x3d8
	// Line 3631, Address: 0x3769ac, Func Offset: 0x3dc
	// Line 3635, Address: 0x3769b0, Func Offset: 0x3e0
	// Line 3636, Address: 0x3769c4, Func Offset: 0x3f4
	// Line 3639, Address: 0x3769cc, Func Offset: 0x3fc
	// Line 3641, Address: 0x3769d0, Func Offset: 0x400
	// Line 3642, Address: 0x376a70, Func Offset: 0x4a0
	// Line 3643, Address: 0x376a74, Func Offset: 0x4a4
	// Line 3644, Address: 0x376a78, Func Offset: 0x4a8
	// Line 3645, Address: 0x376a7c, Func Offset: 0x4ac
	// Line 3646, Address: 0x376a88, Func Offset: 0x4b8
	// Line 3647, Address: 0x376a94, Func Offset: 0x4c4
	// Line 3648, Address: 0x376aa0, Func Offset: 0x4d0
	// Line 3649, Address: 0x376aa8, Func Offset: 0x4d8
	// Line 3650, Address: 0x376ab4, Func Offset: 0x4e4
	// Line 3651, Address: 0x376ac0, Func Offset: 0x4f0
	// Line 3656, Address: 0x376ac4, Func Offset: 0x4f4
	// Line 3657, Address: 0x376ad8, Func Offset: 0x508
	// Line 3660, Address: 0x376ae0, Func Offset: 0x510
	// Line 3662, Address: 0x376ae4, Func Offset: 0x514
	// Line 3663, Address: 0x376b84, Func Offset: 0x5b4
	// Line 3664, Address: 0x376b88, Func Offset: 0x5b8
	// Line 3665, Address: 0x376ba0, Func Offset: 0x5d0
	// Line 3666, Address: 0x376ba4, Func Offset: 0x5d4
	// Line 3667, Address: 0x376bac, Func Offset: 0x5dc
	// Line 3668, Address: 0x376bb4, Func Offset: 0x5e4
	// Line 3673, Address: 0x376bbc, Func Offset: 0x5ec
	// Line 3674, Address: 0x376bd0, Func Offset: 0x600
	// Line 3677, Address: 0x376bd8, Func Offset: 0x608
	// Line 3679, Address: 0x376bdc, Func Offset: 0x60c
	// Line 3680, Address: 0x376c7c, Func Offset: 0x6ac
	// Line 3684, Address: 0x376c80, Func Offset: 0x6b0
	// Line 3685, Address: 0x376c94, Func Offset: 0x6c4
	// Line 3688, Address: 0x376c9c, Func Offset: 0x6cc
	// Line 3690, Address: 0x376ca0, Func Offset: 0x6d0
	// Line 3691, Address: 0x376d40, Func Offset: 0x770
	// Line 3692, Address: 0x376d48, Func Offset: 0x778
	// Line 3693, Address: 0x376d4c, Func Offset: 0x77c
	// Line 3694, Address: 0x376d50, Func Offset: 0x780
	// Line 3696, Address: 0x376d54, Func Offset: 0x784
	// Line 3697, Address: 0x376d58, Func Offset: 0x788
	// Line 3698, Address: 0x376d5c, Func Offset: 0x78c
	// Line 3702, Address: 0x376d60, Func Offset: 0x790
	// Line 3703, Address: 0x376d74, Func Offset: 0x7a4
	// Line 3706, Address: 0x376d7c, Func Offset: 0x7ac
	// Line 3708, Address: 0x376d80, Func Offset: 0x7b0
	// Line 3709, Address: 0x376e20, Func Offset: 0x850
	// Line 3711, Address: 0x376e28, Func Offset: 0x858
	// Func End, Address: 0x376e44, Func Offset: 0x874
}

// iParIniVFXRegionDust__FP10tagxParSysP13tagParCmdList
// Start address: 0x376e50
void iParIniVFXRegionDust(tagParCmdList* list)
{
	tagParCmd_KillOld* d;
	tagParCmd_OrbitPoint* d;
	tagParCmd_RandomDisplace* d;
	tagParCmd_Move* d;
	tagParCmd_Texture* d;
	tagParCmd_Emitter* d;
	xParCmd* cmd;
	// Line 3420, Address: 0x376e50, Func Offset: 0
	// Line 3423, Address: 0x376e68, Func Offset: 0x18
	// Line 3424, Address: 0x376e84, Func Offset: 0x34
	// Line 3427, Address: 0x376e8c, Func Offset: 0x3c
	// Line 3429, Address: 0x376e90, Func Offset: 0x40
	// Line 3430, Address: 0x376f30, Func Offset: 0xe0
	// Line 3432, Address: 0x376f44, Func Offset: 0xf4
	// Line 3433, Address: 0x376f4c, Func Offset: 0xfc
	// Line 3434, Address: 0x376f50, Func Offset: 0x100
	// Line 3435, Address: 0x376f58, Func Offset: 0x108
	// Line 3436, Address: 0x376f60, Func Offset: 0x110
	// Line 3437, Address: 0x376f68, Func Offset: 0x118
	// Line 3438, Address: 0x376f70, Func Offset: 0x120
	// Line 3439, Address: 0x376f78, Func Offset: 0x128
	// Line 3440, Address: 0x376f80, Func Offset: 0x130
	// Line 3441, Address: 0x376f84, Func Offset: 0x134
	// Line 3442, Address: 0x376f88, Func Offset: 0x138
	// Line 3443, Address: 0x376f8c, Func Offset: 0x13c
	// Line 3444, Address: 0x376f94, Func Offset: 0x144
	// Line 3445, Address: 0x376f98, Func Offset: 0x148
	// Line 3446, Address: 0x376fa0, Func Offset: 0x150
	// Line 3447, Address: 0x376fb8, Func Offset: 0x168
	// Line 3451, Address: 0x376fd0, Func Offset: 0x180
	// Line 3452, Address: 0x376fe4, Func Offset: 0x194
	// Line 3455, Address: 0x376fec, Func Offset: 0x19c
	// Line 3457, Address: 0x376ff0, Func Offset: 0x1a0
	// Line 3458, Address: 0x377090, Func Offset: 0x240
	// Line 3459, Address: 0x377094, Func Offset: 0x244
	// Line 3460, Address: 0x377098, Func Offset: 0x248
	// Line 3461, Address: 0x37709c, Func Offset: 0x24c
	// Line 3463, Address: 0x3770a0, Func Offset: 0x250
	// Line 3464, Address: 0x3770a8, Func Offset: 0x258
	// Line 3465, Address: 0x3770b0, Func Offset: 0x260
	// Line 3466, Address: 0x3770b8, Func Offset: 0x268
	// Line 3467, Address: 0x3770c0, Func Offset: 0x270
	// Line 3468, Address: 0x3770c4, Func Offset: 0x274
	// Line 3470, Address: 0x3770c8, Func Offset: 0x278
	// Line 3472, Address: 0x3770d4, Func Offset: 0x284
	// Line 3474, Address: 0x3770e8, Func Offset: 0x298
	// Line 3479, Address: 0x3770f8, Func Offset: 0x2a8
	// Line 3480, Address: 0x37710c, Func Offset: 0x2bc
	// Line 3483, Address: 0x377114, Func Offset: 0x2c4
	// Line 3485, Address: 0x377118, Func Offset: 0x2c8
	// Line 3486, Address: 0x3771b8, Func Offset: 0x368
	// Line 3490, Address: 0x3771bc, Func Offset: 0x36c
	// Line 3491, Address: 0x3771d0, Func Offset: 0x380
	// Line 3494, Address: 0x3771d8, Func Offset: 0x388
	// Line 3495, Address: 0x3771dc, Func Offset: 0x38c
	// Line 3496, Address: 0x37727c, Func Offset: 0x42c
	// Line 3497, Address: 0x377288, Func Offset: 0x438
	// Line 3498, Address: 0x377294, Func Offset: 0x444
	// Line 3499, Address: 0x3772a0, Func Offset: 0x450
	// Line 3500, Address: 0x3772a4, Func Offset: 0x454
	// Line 3501, Address: 0x3772a8, Func Offset: 0x458
	// Line 3505, Address: 0x3772ac, Func Offset: 0x45c
	// Line 3506, Address: 0x3772c0, Func Offset: 0x470
	// Line 3509, Address: 0x3772c8, Func Offset: 0x478
	// Line 3511, Address: 0x3772cc, Func Offset: 0x47c
	// Line 3512, Address: 0x37736c, Func Offset: 0x51c
	// Line 3513, Address: 0x377378, Func Offset: 0x528
	// Line 3514, Address: 0x37737c, Func Offset: 0x52c
	// Line 3515, Address: 0x377384, Func Offset: 0x534
	// Line 3516, Address: 0x377388, Func Offset: 0x538
	// Line 3517, Address: 0x377394, Func Offset: 0x544
	// Line 3522, Address: 0x37739c, Func Offset: 0x54c
	// Line 3523, Address: 0x3773b0, Func Offset: 0x560
	// Line 3526, Address: 0x3773b8, Func Offset: 0x568
	// Line 3528, Address: 0x3773bc, Func Offset: 0x56c
	// Line 3529, Address: 0x37745c, Func Offset: 0x60c
	// Line 3531, Address: 0x377464, Func Offset: 0x614
	// Func End, Address: 0x377480, Func Offset: 0x630
}

// iParIniVFXRegionRain__FP10tagxParSysP13tagParCmdList
// Start address: 0x377480
void iParIniVFXRegionRain(tagParCmdList* list)
{
	tagParCmd_SpawnVFX* d;
	tagParCmd_KillPlane* d;
	tagParCmd_KillOld* d;
	tagParCmd_KillInvis* d;
	tagParCmd_Move* d;
	tagParCmd_Accelerate* d;
	tagParCmd_Texture* d;
	tagParCmd_Emitter* d;
	xParCmd* cmd;
	// Line 3269, Address: 0x377480, Func Offset: 0
	// Line 3272, Address: 0x377498, Func Offset: 0x18
	// Line 3273, Address: 0x3774b4, Func Offset: 0x34
	// Line 3276, Address: 0x3774bc, Func Offset: 0x3c
	// Line 3278, Address: 0x3774c0, Func Offset: 0x40
	// Line 3279, Address: 0x377560, Func Offset: 0xe0
	// Line 3280, Address: 0x377564, Func Offset: 0xe4
	// Line 3281, Address: 0x37756c, Func Offset: 0xec
	// Line 3282, Address: 0x377570, Func Offset: 0xf0
	// Line 3283, Address: 0x377578, Func Offset: 0xf8
	// Line 3284, Address: 0x377580, Func Offset: 0x100
	// Line 3285, Address: 0x377588, Func Offset: 0x108
	// Line 3286, Address: 0x377590, Func Offset: 0x110
	// Line 3287, Address: 0x377598, Func Offset: 0x118
	// Line 3288, Address: 0x3775a0, Func Offset: 0x120
	// Line 3289, Address: 0x3775a4, Func Offset: 0x124
	// Line 3290, Address: 0x3775a8, Func Offset: 0x128
	// Line 3291, Address: 0x3775ac, Func Offset: 0x12c
	// Line 3292, Address: 0x3775b4, Func Offset: 0x134
	// Line 3293, Address: 0x3775b8, Func Offset: 0x138
	// Line 3294, Address: 0x3775bc, Func Offset: 0x13c
	// Line 3295, Address: 0x3775c0, Func Offset: 0x140
	// Line 3296, Address: 0x3775c4, Func Offset: 0x144
	// Line 3297, Address: 0x3775cc, Func Offset: 0x14c
	// Line 3298, Address: 0x3775d8, Func Offset: 0x158
	// Line 3299, Address: 0x3775dc, Func Offset: 0x15c
	// Line 3300, Address: 0x3775e0, Func Offset: 0x160
	// Line 3301, Address: 0x3775e4, Func Offset: 0x164
	// Line 3302, Address: 0x3775e8, Func Offset: 0x168
	// Line 3303, Address: 0x3775ec, Func Offset: 0x16c
	// Line 3304, Address: 0x3775f0, Func Offset: 0x170
	// Line 3305, Address: 0x3775f4, Func Offset: 0x174
	// Line 3306, Address: 0x37760c, Func Offset: 0x18c
	// Line 3309, Address: 0x377624, Func Offset: 0x1a4
	// Line 3310, Address: 0x377638, Func Offset: 0x1b8
	// Line 3313, Address: 0x377640, Func Offset: 0x1c0
	// Line 3315, Address: 0x377644, Func Offset: 0x1c4
	// Line 3316, Address: 0x3776e4, Func Offset: 0x264
	// Line 3317, Address: 0x3776e8, Func Offset: 0x268
	// Line 3318, Address: 0x3776ec, Func Offset: 0x26c
	// Line 3319, Address: 0x3776f0, Func Offset: 0x270
	// Line 3320, Address: 0x3776f4, Func Offset: 0x274
	// Line 3321, Address: 0x3776fc, Func Offset: 0x27c
	// Line 3322, Address: 0x377704, Func Offset: 0x284
	// Line 3323, Address: 0x37770c, Func Offset: 0x28c
	// Line 3325, Address: 0x377714, Func Offset: 0x294
	// Line 3326, Address: 0x37771c, Func Offset: 0x29c
	// Line 3327, Address: 0x377724, Func Offset: 0x2a4
	// Line 3328, Address: 0x37772c, Func Offset: 0x2ac
	// Line 3329, Address: 0x377734, Func Offset: 0x2b4
	// Line 3330, Address: 0x377738, Func Offset: 0x2b8
	// Line 3332, Address: 0x37773c, Func Offset: 0x2bc
	// Line 3335, Address: 0x377748, Func Offset: 0x2c8
	// Line 3337, Address: 0x37775c, Func Offset: 0x2dc
	// Line 3341, Address: 0x37776c, Func Offset: 0x2ec
	// Line 3342, Address: 0x377780, Func Offset: 0x300
	// Line 3345, Address: 0x377788, Func Offset: 0x308
	// Line 3347, Address: 0x37778c, Func Offset: 0x30c
	// Line 3348, Address: 0x37782c, Func Offset: 0x3ac
	// Line 3349, Address: 0x377830, Func Offset: 0x3b0
	// Line 3350, Address: 0x37783c, Func Offset: 0x3bc
	// Line 3351, Address: 0x377840, Func Offset: 0x3c0
	// Line 3352, Address: 0x377844, Func Offset: 0x3c4
	// Line 3357, Address: 0x377848, Func Offset: 0x3c8
	// Line 3358, Address: 0x37785c, Func Offset: 0x3dc
	// Line 3361, Address: 0x377864, Func Offset: 0x3e4
	// Line 3363, Address: 0x377868, Func Offset: 0x3e8
	// Line 3364, Address: 0x377908, Func Offset: 0x488
	// Line 3368, Address: 0x37790c, Func Offset: 0x48c
	// Line 3369, Address: 0x377920, Func Offset: 0x4a0
	// Line 3372, Address: 0x377928, Func Offset: 0x4a8
	// Line 3374, Address: 0x37792c, Func Offset: 0x4ac
	// Line 3375, Address: 0x3779cc, Func Offset: 0x54c
	// Line 3379, Address: 0x3779d4, Func Offset: 0x554
	// Line 3380, Address: 0x3779e8, Func Offset: 0x568
	// Line 3383, Address: 0x3779f0, Func Offset: 0x570
	// Line 3385, Address: 0x3779f4, Func Offset: 0x574
	// Line 3386, Address: 0x377a94, Func Offset: 0x614
	// Line 3389, Address: 0x377a9c, Func Offset: 0x61c
	// Line 3390, Address: 0x377ab0, Func Offset: 0x630
	// Line 3393, Address: 0x377ab8, Func Offset: 0x638
	// Line 3395, Address: 0x377abc, Func Offset: 0x63c
	// Line 3396, Address: 0x377b5c, Func Offset: 0x6dc
	// Line 3397, Address: 0x377b64, Func Offset: 0x6e4
	// Line 3398, Address: 0x377b68, Func Offset: 0x6e8
	// Line 3399, Address: 0x377b6c, Func Offset: 0x6ec
	// Line 3403, Address: 0x377b70, Func Offset: 0x6f0
	// Line 3404, Address: 0x377b84, Func Offset: 0x704
	// Line 3407, Address: 0x377b8c, Func Offset: 0x70c
	// Line 3409, Address: 0x377b90, Func Offset: 0x710
	// Line 3410, Address: 0x377c30, Func Offset: 0x7b0
	// Line 3411, Address: 0x377c38, Func Offset: 0x7b8
	// Line 3413, Address: 0x377c40, Func Offset: 0x7c0
	// Func End, Address: 0x377c5c, Func Offset: 0x7dc
}

// iParIniVFXRainSplatter__FP10tagxParSysP13tagParCmdList
// Start address: 0x377c60
void iParIniVFXRainSplatter(tagParCmdList* list)
{
	tagParCmd_KillOld* d;
	tagParCmd_Move* d;
	tagParCmd_Texture* d;
	tagParCmd_Emitter* d;
	xParCmd* cmd;
	// Line 3173, Address: 0x377c60, Func Offset: 0
	// Line 3177, Address: 0x377c78, Func Offset: 0x18
	// Line 3178, Address: 0x377c94, Func Offset: 0x34
	// Line 3181, Address: 0x377c9c, Func Offset: 0x3c
	// Line 3183, Address: 0x377ca0, Func Offset: 0x40
	// Line 3184, Address: 0x377d40, Func Offset: 0xe0
	// Line 3185, Address: 0x377d44, Func Offset: 0xe4
	// Line 3186, Address: 0x377d48, Func Offset: 0xe8
	// Line 3187, Address: 0x377d4c, Func Offset: 0xec
	// Line 3188, Address: 0x377d54, Func Offset: 0xf4
	// Line 3189, Address: 0x377d5c, Func Offset: 0xfc
	// Line 3190, Address: 0x377d64, Func Offset: 0x104
	// Line 3191, Address: 0x377d6c, Func Offset: 0x10c
	// Line 3192, Address: 0x377d74, Func Offset: 0x114
	// Line 3193, Address: 0x377d7c, Func Offset: 0x11c
	// Line 3194, Address: 0x377d80, Func Offset: 0x120
	// Line 3195, Address: 0x377d84, Func Offset: 0x124
	// Line 3196, Address: 0x377d88, Func Offset: 0x128
	// Line 3197, Address: 0x377d90, Func Offset: 0x130
	// Line 3198, Address: 0x377d94, Func Offset: 0x134
	// Line 3199, Address: 0x377d98, Func Offset: 0x138
	// Line 3200, Address: 0x377d9c, Func Offset: 0x13c
	// Line 3201, Address: 0x377da0, Func Offset: 0x140
	// Line 3202, Address: 0x377dac, Func Offset: 0x14c
	// Line 3203, Address: 0x377db8, Func Offset: 0x158
	// Line 3204, Address: 0x377dc4, Func Offset: 0x164
	// Line 3205, Address: 0x377dc8, Func Offset: 0x168
	// Line 3206, Address: 0x377dcc, Func Offset: 0x16c
	// Line 3207, Address: 0x377dd0, Func Offset: 0x170
	// Line 3208, Address: 0x377dd4, Func Offset: 0x174
	// Line 3209, Address: 0x377dd8, Func Offset: 0x178
	// Line 3210, Address: 0x377ddc, Func Offset: 0x17c
	// Line 3211, Address: 0x377df4, Func Offset: 0x194
	// Line 3214, Address: 0x377e0c, Func Offset: 0x1ac
	// Line 3215, Address: 0x377e20, Func Offset: 0x1c0
	// Line 3218, Address: 0x377e28, Func Offset: 0x1c8
	// Line 3220, Address: 0x377e2c, Func Offset: 0x1cc
	// Line 3221, Address: 0x377ecc, Func Offset: 0x26c
	// Line 3222, Address: 0x377ed0, Func Offset: 0x270
	// Line 3223, Address: 0x377ed8, Func Offset: 0x278
	// Line 3224, Address: 0x377ee0, Func Offset: 0x280
	// Line 3225, Address: 0x377ee4, Func Offset: 0x284
	// Line 3226, Address: 0x377eec, Func Offset: 0x28c
	// Line 3227, Address: 0x377ef4, Func Offset: 0x294
	// Line 3228, Address: 0x377efc, Func Offset: 0x29c
	// Line 3229, Address: 0x377f04, Func Offset: 0x2a4
	// Line 3230, Address: 0x377f08, Func Offset: 0x2a8
	// Line 3232, Address: 0x377f0c, Func Offset: 0x2ac
	// Line 3235, Address: 0x377f18, Func Offset: 0x2b8
	// Line 3237, Address: 0x377f2c, Func Offset: 0x2cc
	// Line 3242, Address: 0x377f3c, Func Offset: 0x2dc
	// Line 3243, Address: 0x377f50, Func Offset: 0x2f0
	// Line 3246, Address: 0x377f58, Func Offset: 0x2f8
	// Line 3248, Address: 0x377f5c, Func Offset: 0x2fc
	// Line 3249, Address: 0x377ffc, Func Offset: 0x39c
	// Line 3253, Address: 0x378000, Func Offset: 0x3a0
	// Line 3254, Address: 0x378014, Func Offset: 0x3b4
	// Line 3257, Address: 0x37801c, Func Offset: 0x3bc
	// Line 3259, Address: 0x378020, Func Offset: 0x3c0
	// Line 3260, Address: 0x3780c0, Func Offset: 0x460
	// Line 3262, Address: 0x3780c8, Func Offset: 0x468
	// Func End, Address: 0x3780e4, Func Offset: 0x484
}

// iParIniVFXMagicPortal__FP10tagxParSysP13tagParCmdList
// Start address: 0x3780f0
void iParIniVFXMagicPortal(tagParCmdList* list)
{
	tagParCmd_KillOld* d;
	tagParCmd_SpawnVFX* d;
	tagParCmd_Move* d;
	tagParCmd_RotMove* d;
	tagParCmd_Texture* d;
	tagParCmd_Emitter* d;
	xParCmd* cmd;
	// Line 3051, Address: 0x3780f0, Func Offset: 0
	// Line 3055, Address: 0x378108, Func Offset: 0x18
	// Line 3056, Address: 0x378124, Func Offset: 0x34
	// Line 3059, Address: 0x37812c, Func Offset: 0x3c
	// Line 3061, Address: 0x378130, Func Offset: 0x40
	// Line 3062, Address: 0x3781d0, Func Offset: 0xe0
	// Line 3063, Address: 0x3781d4, Func Offset: 0xe4
	// Line 3064, Address: 0x3781d8, Func Offset: 0xe8
	// Line 3065, Address: 0x3781dc, Func Offset: 0xec
	// Line 3066, Address: 0x3781e4, Func Offset: 0xf4
	// Line 3067, Address: 0x3781ec, Func Offset: 0xfc
	// Line 3068, Address: 0x3781f4, Func Offset: 0x104
	// Line 3069, Address: 0x3781fc, Func Offset: 0x10c
	// Line 3070, Address: 0x378204, Func Offset: 0x114
	// Line 3071, Address: 0x37820c, Func Offset: 0x11c
	// Line 3072, Address: 0x378214, Func Offset: 0x124
	// Line 3073, Address: 0x378218, Func Offset: 0x128
	// Line 3074, Address: 0x37821c, Func Offset: 0x12c
	// Line 3075, Address: 0x378224, Func Offset: 0x134
	// Line 3076, Address: 0x378228, Func Offset: 0x138
	// Line 3077, Address: 0x37822c, Func Offset: 0x13c
	// Line 3078, Address: 0x378230, Func Offset: 0x140
	// Line 3079, Address: 0x37823c, Func Offset: 0x14c
	// Line 3080, Address: 0x378248, Func Offset: 0x158
	// Line 3081, Address: 0x37824c, Func Offset: 0x15c
	// Line 3082, Address: 0x378250, Func Offset: 0x160
	// Line 3083, Address: 0x378254, Func Offset: 0x164
	// Line 3084, Address: 0x378258, Func Offset: 0x168
	// Line 3085, Address: 0x37825c, Func Offset: 0x16c
	// Line 3086, Address: 0x378260, Func Offset: 0x170
	// Line 3087, Address: 0x378278, Func Offset: 0x188
	// Line 3090, Address: 0x378290, Func Offset: 0x1a0
	// Line 3091, Address: 0x3782a4, Func Offset: 0x1b4
	// Line 3094, Address: 0x3782ac, Func Offset: 0x1bc
	// Line 3096, Address: 0x3782b0, Func Offset: 0x1c0
	// Line 3097, Address: 0x378350, Func Offset: 0x260
	// Line 3098, Address: 0x378354, Func Offset: 0x264
	// Line 3099, Address: 0x378358, Func Offset: 0x268
	// Line 3100, Address: 0x37835c, Func Offset: 0x26c
	// Line 3101, Address: 0x378360, Func Offset: 0x270
	// Line 3102, Address: 0x378364, Func Offset: 0x274
	// Line 3103, Address: 0x37836c, Func Offset: 0x27c
	// Line 3104, Address: 0x378370, Func Offset: 0x280
	// Line 3105, Address: 0x378378, Func Offset: 0x288
	// Line 3106, Address: 0x37837c, Func Offset: 0x28c
	// Line 3109, Address: 0x378380, Func Offset: 0x290
	// Line 3112, Address: 0x37838c, Func Offset: 0x29c
	// Line 3114, Address: 0x3783a0, Func Offset: 0x2b0
	// Line 3118, Address: 0x3783b0, Func Offset: 0x2c0
	// Line 3119, Address: 0x3783c4, Func Offset: 0x2d4
	// Line 3122, Address: 0x3783cc, Func Offset: 0x2dc
	// Line 3124, Address: 0x3783d0, Func Offset: 0x2e0
	// Line 3126, Address: 0x378470, Func Offset: 0x380
	// Line 3127, Address: 0x378474, Func Offset: 0x384
	// Line 3128, Address: 0x37847c, Func Offset: 0x38c
	// Line 3132, Address: 0x378480, Func Offset: 0x390
	// Line 3133, Address: 0x378494, Func Offset: 0x3a4
	// Line 3136, Address: 0x37849c, Func Offset: 0x3ac
	// Line 3138, Address: 0x3784a0, Func Offset: 0x3b0
	// Line 3139, Address: 0x378540, Func Offset: 0x450
	// Line 3143, Address: 0x378544, Func Offset: 0x454
	// Line 3144, Address: 0x378558, Func Offset: 0x468
	// Line 3147, Address: 0x378560, Func Offset: 0x470
	// Line 3149, Address: 0x378564, Func Offset: 0x474
	// Line 3150, Address: 0x378604, Func Offset: 0x514
	// Line 3151, Address: 0x37860c, Func Offset: 0x51c
	// Line 3152, Address: 0x378614, Func Offset: 0x524
	// Line 3153, Address: 0x37861c, Func Offset: 0x52c
	// Line 3157, Address: 0x378620, Func Offset: 0x530
	// Line 3158, Address: 0x378634, Func Offset: 0x544
	// Line 3161, Address: 0x37863c, Func Offset: 0x54c
	// Line 3163, Address: 0x378640, Func Offset: 0x550
	// Line 3164, Address: 0x3786e0, Func Offset: 0x5f0
	// Line 3166, Address: 0x3786e8, Func Offset: 0x5f8
	// Func End, Address: 0x378704, Func Offset: 0x614
}

// iParIniVFXBloodPool__FP10tagxParSysP13tagParCmdList
// Start address: 0x378710
void iParIniVFXBloodPool(tagParCmdList* list)
{
	tagParCmd_KillOld* d;
	tagParCmd_Move* d;
	tagParCmd_Texture* d;
	tagParCmd_Emitter* d;
	xParCmd* cmd;
	// Line 2951, Address: 0x378710, Func Offset: 0
	// Line 2955, Address: 0x378728, Func Offset: 0x18
	// Line 2956, Address: 0x378744, Func Offset: 0x34
	// Line 2959, Address: 0x37874c, Func Offset: 0x3c
	// Line 2961, Address: 0x378750, Func Offset: 0x40
	// Line 2962, Address: 0x3787f0, Func Offset: 0xe0
	// Line 2963, Address: 0x3787f4, Func Offset: 0xe4
	// Line 2964, Address: 0x3787f8, Func Offset: 0xe8
	// Line 2965, Address: 0x3787fc, Func Offset: 0xec
	// Line 2966, Address: 0x378804, Func Offset: 0xf4
	// Line 2967, Address: 0x37880c, Func Offset: 0xfc
	// Line 2968, Address: 0x378814, Func Offset: 0x104
	// Line 2969, Address: 0x37881c, Func Offset: 0x10c
	// Line 2970, Address: 0x378824, Func Offset: 0x114
	// Line 2971, Address: 0x37882c, Func Offset: 0x11c
	// Line 2972, Address: 0x378830, Func Offset: 0x120
	// Line 2973, Address: 0x378834, Func Offset: 0x124
	// Line 2974, Address: 0x378838, Func Offset: 0x128
	// Line 2975, Address: 0x378840, Func Offset: 0x130
	// Line 2976, Address: 0x378844, Func Offset: 0x134
	// Line 2977, Address: 0x378848, Func Offset: 0x138
	// Line 2978, Address: 0x37884c, Func Offset: 0x13c
	// Line 2979, Address: 0x378850, Func Offset: 0x140
	// Line 2980, Address: 0x37885c, Func Offset: 0x14c
	// Line 2981, Address: 0x378868, Func Offset: 0x158
	// Line 2982, Address: 0x378874, Func Offset: 0x164
	// Line 2983, Address: 0x378878, Func Offset: 0x168
	// Line 2984, Address: 0x37887c, Func Offset: 0x16c
	// Line 2985, Address: 0x378880, Func Offset: 0x170
	// Line 2986, Address: 0x378884, Func Offset: 0x174
	// Line 2987, Address: 0x378888, Func Offset: 0x178
	// Line 2988, Address: 0x37888c, Func Offset: 0x17c
	// Line 2989, Address: 0x3788a4, Func Offset: 0x194
	// Line 2993, Address: 0x3788bc, Func Offset: 0x1ac
	// Line 2994, Address: 0x3788d0, Func Offset: 0x1c0
	// Line 2997, Address: 0x3788d8, Func Offset: 0x1c8
	// Line 2999, Address: 0x3788dc, Func Offset: 0x1cc
	// Line 3000, Address: 0x37897c, Func Offset: 0x26c
	// Line 3001, Address: 0x378980, Func Offset: 0x270
	// Line 3002, Address: 0x378984, Func Offset: 0x274
	// Line 3003, Address: 0x37898c, Func Offset: 0x27c
	// Line 3004, Address: 0x378994, Func Offset: 0x284
	// Line 3005, Address: 0x37899c, Func Offset: 0x28c
	// Line 3006, Address: 0x3789a4, Func Offset: 0x294
	// Line 3007, Address: 0x3789a8, Func Offset: 0x298
	// Line 3008, Address: 0x3789b0, Func Offset: 0x2a0
	// Line 3009, Address: 0x3789b4, Func Offset: 0x2a4
	// Line 3011, Address: 0x3789b8, Func Offset: 0x2a8
	// Line 3014, Address: 0x3789c4, Func Offset: 0x2b4
	// Line 3016, Address: 0x3789d8, Func Offset: 0x2c8
	// Line 3021, Address: 0x3789e8, Func Offset: 0x2d8
	// Line 3022, Address: 0x3789fc, Func Offset: 0x2ec
	// Line 3025, Address: 0x378a04, Func Offset: 0x2f4
	// Line 3027, Address: 0x378a08, Func Offset: 0x2f8
	// Line 3028, Address: 0x378aa8, Func Offset: 0x398
	// Line 3033, Address: 0x378aac, Func Offset: 0x39c
	// Line 3034, Address: 0x378ac0, Func Offset: 0x3b0
	// Line 3037, Address: 0x378ac8, Func Offset: 0x3b8
	// Line 3039, Address: 0x378acc, Func Offset: 0x3bc
	// Line 3040, Address: 0x378b6c, Func Offset: 0x45c
	// Line 3042, Address: 0x378b74, Func Offset: 0x464
	// Func End, Address: 0x378b90, Func Offset: 0x480
}

// iParIniVFXBlackVomit__FP10tagxParSysP13tagParCmdList
// Start address: 0x378b90
void iParIniVFXBlackVomit(tagParCmdList* list)
{
	tagParCmd_SpawnVFX* d;
	tagParCmd_KillOld* d;
	tagParCmd_RandomDisplace* d;
	tagParCmd_Bounce* d;
	tagParCmd_Move* d;
	tagParCmd_Accelerate* d;
	tagParCmd_Texture* d;
	tagParCmd_Emitter* d;
	xParCmd* cmd;
	// Line 2772, Address: 0x378b90, Func Offset: 0
	// Line 2775, Address: 0x378ba8, Func Offset: 0x18
	// Line 2776, Address: 0x378bc4, Func Offset: 0x34
	// Line 2779, Address: 0x378bcc, Func Offset: 0x3c
	// Line 2781, Address: 0x378bd0, Func Offset: 0x40
	// Line 2782, Address: 0x378c70, Func Offset: 0xe0
	// Line 2783, Address: 0x378c74, Func Offset: 0xe4
	// Line 2784, Address: 0x378c78, Func Offset: 0xe8
	// Line 2785, Address: 0x378c7c, Func Offset: 0xec
	// Line 2786, Address: 0x378c84, Func Offset: 0xf4
	// Line 2787, Address: 0x378c8c, Func Offset: 0xfc
	// Line 2788, Address: 0x378c94, Func Offset: 0x104
	// Line 2789, Address: 0x378c9c, Func Offset: 0x10c
	// Line 2790, Address: 0x378ca4, Func Offset: 0x114
	// Line 2791, Address: 0x378cac, Func Offset: 0x11c
	// Line 2792, Address: 0x378cb4, Func Offset: 0x124
	// Line 2793, Address: 0x378cb8, Func Offset: 0x128
	// Line 2794, Address: 0x378cbc, Func Offset: 0x12c
	// Line 2796, Address: 0x378cc4, Func Offset: 0x134
	// Line 2797, Address: 0x378cc8, Func Offset: 0x138
	// Line 2798, Address: 0x378ccc, Func Offset: 0x13c
	// Line 2799, Address: 0x378cd0, Func Offset: 0x140
	// Line 2800, Address: 0x378cd8, Func Offset: 0x148
	// Line 2801, Address: 0x378ce0, Func Offset: 0x150
	// Line 2802, Address: 0x378ce8, Func Offset: 0x158
	// Line 2803, Address: 0x378cf0, Func Offset: 0x160
	// Line 2805, Address: 0x378cf8, Func Offset: 0x168
	// Line 2806, Address: 0x378cfc, Func Offset: 0x16c
	// Line 2807, Address: 0x378d00, Func Offset: 0x170
	// Line 2808, Address: 0x378d04, Func Offset: 0x174
	// Line 2809, Address: 0x378d0c, Func Offset: 0x17c
	// Line 2810, Address: 0x378d14, Func Offset: 0x184
	// Line 2811, Address: 0x378d18, Func Offset: 0x188
	// Line 2812, Address: 0x378d1c, Func Offset: 0x18c
	// Line 2813, Address: 0x378d20, Func Offset: 0x190
	// Line 2814, Address: 0x378d2c, Func Offset: 0x19c
	// Line 2815, Address: 0x378d34, Func Offset: 0x1a4
	// Line 2816, Address: 0x378d40, Func Offset: 0x1b0
	// Line 2817, Address: 0x378d58, Func Offset: 0x1c8
	// Line 2820, Address: 0x378d70, Func Offset: 0x1e0
	// Line 2821, Address: 0x378d84, Func Offset: 0x1f4
	// Line 2824, Address: 0x378d8c, Func Offset: 0x1fc
	// Line 2826, Address: 0x378d90, Func Offset: 0x200
	// Line 2827, Address: 0x378e30, Func Offset: 0x2a0
	// Line 2828, Address: 0x378e34, Func Offset: 0x2a4
	// Line 2829, Address: 0x378e38, Func Offset: 0x2a8
	// Line 2830, Address: 0x378e3c, Func Offset: 0x2ac
	// Line 2831, Address: 0x378e44, Func Offset: 0x2b4
	// Line 2832, Address: 0x378e4c, Func Offset: 0x2bc
	// Line 2833, Address: 0x378e54, Func Offset: 0x2c4
	// Line 2834, Address: 0x378e5c, Func Offset: 0x2cc
	// Line 2835, Address: 0x378e64, Func Offset: 0x2d4
	// Line 2836, Address: 0x378e68, Func Offset: 0x2d8
	// Line 2838, Address: 0x378e6c, Func Offset: 0x2dc
	// Line 2839, Address: 0x378e70, Func Offset: 0x2e0
	// Line 2840, Address: 0x378e78, Func Offset: 0x2e8
	// Line 2841, Address: 0x378e80, Func Offset: 0x2f0
	// Line 2842, Address: 0x378e88, Func Offset: 0x2f8
	// Line 2843, Address: 0x378e90, Func Offset: 0x300
	// Line 2844, Address: 0x378e98, Func Offset: 0x308
	// Line 2845, Address: 0x378ea0, Func Offset: 0x310
	// Line 2846, Address: 0x378ea8, Func Offset: 0x318
	// Line 2847, Address: 0x378eac, Func Offset: 0x31c
	// Line 2848, Address: 0x378eb0, Func Offset: 0x320
	// Line 2851, Address: 0x378ebc, Func Offset: 0x32c
	// Line 2853, Address: 0x378ed0, Func Offset: 0x340
	// Line 2858, Address: 0x378ee0, Func Offset: 0x350
	// Line 2859, Address: 0x378ef4, Func Offset: 0x364
	// Line 2862, Address: 0x378efc, Func Offset: 0x36c
	// Line 2864, Address: 0x378f00, Func Offset: 0x370
	// Line 2865, Address: 0x378fa0, Func Offset: 0x410
	// Line 2866, Address: 0x378fa4, Func Offset: 0x414
	// Line 2867, Address: 0x378fb0, Func Offset: 0x420
	// Line 2868, Address: 0x378fb4, Func Offset: 0x424
	// Line 2869, Address: 0x378fb8, Func Offset: 0x428
	// Line 2873, Address: 0x378fbc, Func Offset: 0x42c
	// Line 2874, Address: 0x378fd0, Func Offset: 0x440
	// Line 2877, Address: 0x378fd8, Func Offset: 0x448
	// Line 2879, Address: 0x378fdc, Func Offset: 0x44c
	// Line 2880, Address: 0x37907c, Func Offset: 0x4ec
	// Line 2884, Address: 0x379080, Func Offset: 0x4f0
	// Line 2885, Address: 0x379094, Func Offset: 0x504
	// Line 2888, Address: 0x37909c, Func Offset: 0x50c
	// Line 2890, Address: 0x3790a0, Func Offset: 0x510
	// Line 2891, Address: 0x379140, Func Offset: 0x5b0
	// Line 2892, Address: 0x379144, Func Offset: 0x5b4
	// Line 2893, Address: 0x379148, Func Offset: 0x5b8
	// Line 2894, Address: 0x37914c, Func Offset: 0x5bc
	// Line 2896, Address: 0x379150, Func Offset: 0x5c0
	// Line 2897, Address: 0x379158, Func Offset: 0x5c8
	// Line 2898, Address: 0x379160, Func Offset: 0x5d0
	// Line 2903, Address: 0x379168, Func Offset: 0x5d8
	// Line 2904, Address: 0x37917c, Func Offset: 0x5ec
	// Line 2908, Address: 0x379184, Func Offset: 0x5f4
	// Line 2909, Address: 0x379188, Func Offset: 0x5f8
	// Line 2911, Address: 0x379228, Func Offset: 0x698
	// Line 2912, Address: 0x379234, Func Offset: 0x6a4
	// Line 2913, Address: 0x379240, Func Offset: 0x6b0
	// Line 2914, Address: 0x37924c, Func Offset: 0x6bc
	// Line 2915, Address: 0x379250, Func Offset: 0x6c0
	// Line 2916, Address: 0x379254, Func Offset: 0x6c4
	// Line 2921, Address: 0x37925c, Func Offset: 0x6cc
	// Line 2922, Address: 0x379270, Func Offset: 0x6e0
	// Line 2925, Address: 0x379278, Func Offset: 0x6e8
	// Line 2927, Address: 0x37927c, Func Offset: 0x6ec
	// Line 2928, Address: 0x37931c, Func Offset: 0x78c
	// Line 2932, Address: 0x379324, Func Offset: 0x794
	// Line 2933, Address: 0x379338, Func Offset: 0x7a8
	// Line 2936, Address: 0x379340, Func Offset: 0x7b0
	// Line 2938, Address: 0x379344, Func Offset: 0x7b4
	// Line 2939, Address: 0x3793e4, Func Offset: 0x854
	// Line 2940, Address: 0x3793ec, Func Offset: 0x85c
	// Line 2941, Address: 0x3793f4, Func Offset: 0x864
	// Line 2942, Address: 0x3793fc, Func Offset: 0x86c
	// Line 2944, Address: 0x379400, Func Offset: 0x870
	// Func End, Address: 0x37941c, Func Offset: 0x88c
}

// iParIniVFXExplodingEarth__FP10tagxParSysP13tagParCmdList
// Start address: 0x379420
void iParIniVFXExplodingEarth(tagParCmdList* list)
{
	tagParCmd_SpawnVFX* d;
	tagParCmd_KillOld* d;
	tagParCmd_Bounce* d;
	tagParCmd_Move* d;
	tagParCmd_Accelerate* d;
	tagParCmd_Texture* d;
	tagParCmd_Emitter* d;
	xParCmd* cmd;
	// Line 2626, Address: 0x379420, Func Offset: 0
	// Line 2629, Address: 0x379438, Func Offset: 0x18
	// Line 2630, Address: 0x379454, Func Offset: 0x34
	// Line 2631, Address: 0x3794f4, Func Offset: 0xd4
	// Line 2632, Address: 0x379598, Func Offset: 0x178
	// Line 2635, Address: 0x3795a0, Func Offset: 0x180
	// Line 2637, Address: 0x3795a4, Func Offset: 0x184
	// Line 2638, Address: 0x379644, Func Offset: 0x224
	// Line 2639, Address: 0x379648, Func Offset: 0x228
	// Line 2640, Address: 0x37964c, Func Offset: 0x22c
	// Line 2641, Address: 0x379650, Func Offset: 0x230
	// Line 2642, Address: 0x379654, Func Offset: 0x234
	// Line 2643, Address: 0x379658, Func Offset: 0x238
	// Line 2644, Address: 0x379660, Func Offset: 0x240
	// Line 2645, Address: 0x379668, Func Offset: 0x248
	// Line 2646, Address: 0x379670, Func Offset: 0x250
	// Line 2647, Address: 0x379678, Func Offset: 0x258
	// Line 2648, Address: 0x37967c, Func Offset: 0x25c
	// Line 2649, Address: 0x379680, Func Offset: 0x260
	// Line 2650, Address: 0x379684, Func Offset: 0x264
	// Line 2651, Address: 0x379688, Func Offset: 0x268
	// Line 2652, Address: 0x37968c, Func Offset: 0x26c
	// Line 2653, Address: 0x379690, Func Offset: 0x270
	// Line 2654, Address: 0x379694, Func Offset: 0x274
	// Line 2655, Address: 0x37969c, Func Offset: 0x27c
	// Line 2656, Address: 0x3796a4, Func Offset: 0x284
	// Line 2657, Address: 0x3796ac, Func Offset: 0x28c
	// Line 2658, Address: 0x3796b0, Func Offset: 0x290
	// Line 2659, Address: 0x3796b4, Func Offset: 0x294
	// Line 2660, Address: 0x3796b8, Func Offset: 0x298
	// Line 2661, Address: 0x3796bc, Func Offset: 0x29c
	// Line 2662, Address: 0x3796c8, Func Offset: 0x2a8
	// Line 2663, Address: 0x3796d0, Func Offset: 0x2b0
	// Line 2664, Address: 0x3796dc, Func Offset: 0x2bc
	// Line 2665, Address: 0x3796f4, Func Offset: 0x2d4
	// Line 2669, Address: 0x37970c, Func Offset: 0x2ec
	// Line 2670, Address: 0x379720, Func Offset: 0x300
	// Line 2673, Address: 0x379728, Func Offset: 0x308
	// Line 2675, Address: 0x37972c, Func Offset: 0x30c
	// Line 2676, Address: 0x3797cc, Func Offset: 0x3ac
	// Line 2677, Address: 0x3797d0, Func Offset: 0x3b0
	// Line 2678, Address: 0x3797d4, Func Offset: 0x3b4
	// Line 2679, Address: 0x3797d8, Func Offset: 0x3b8
	// Line 2680, Address: 0x3797dc, Func Offset: 0x3bc
	// Line 2681, Address: 0x3797e0, Func Offset: 0x3c0
	// Line 2682, Address: 0x3797e8, Func Offset: 0x3c8
	// Line 2683, Address: 0x3797f0, Func Offset: 0x3d0
	// Line 2684, Address: 0x3797f8, Func Offset: 0x3d8
	// Line 2685, Address: 0x3797fc, Func Offset: 0x3dc
	// Line 2687, Address: 0x379800, Func Offset: 0x3e0
	// Line 2690, Address: 0x37980c, Func Offset: 0x3ec
	// Line 2692, Address: 0x379820, Func Offset: 0x400
	// Line 2697, Address: 0x379830, Func Offset: 0x410
	// Line 2698, Address: 0x379844, Func Offset: 0x424
	// Line 2701, Address: 0x37984c, Func Offset: 0x42c
	// Line 2703, Address: 0x379850, Func Offset: 0x430
	// Line 2704, Address: 0x3798f0, Func Offset: 0x4d0
	// Line 2705, Address: 0x3798f4, Func Offset: 0x4d4
	// Line 2706, Address: 0x379900, Func Offset: 0x4e0
	// Line 2707, Address: 0x379904, Func Offset: 0x4e4
	// Line 2708, Address: 0x379908, Func Offset: 0x4e8
	// Line 2712, Address: 0x37990c, Func Offset: 0x4ec
	// Line 2713, Address: 0x379920, Func Offset: 0x500
	// Line 2716, Address: 0x379928, Func Offset: 0x508
	// Line 2718, Address: 0x37992c, Func Offset: 0x50c
	// Line 2719, Address: 0x3799cc, Func Offset: 0x5ac
	// Line 2723, Address: 0x3799d0, Func Offset: 0x5b0
	// Line 2724, Address: 0x3799e4, Func Offset: 0x5c4
	// Line 2727, Address: 0x3799ec, Func Offset: 0x5cc
	// Line 2729, Address: 0x3799f0, Func Offset: 0x5d0
	// Line 2730, Address: 0x379a90, Func Offset: 0x670
	// Line 2731, Address: 0x379a94, Func Offset: 0x674
	// Line 2732, Address: 0x379a98, Func Offset: 0x678
	// Line 2733, Address: 0x379a9c, Func Offset: 0x67c
	// Line 2735, Address: 0x379aa0, Func Offset: 0x680
	// Line 2736, Address: 0x379aa8, Func Offset: 0x688
	// Line 2737, Address: 0x379ab0, Func Offset: 0x690
	// Line 2742, Address: 0x379ab8, Func Offset: 0x698
	// Line 2743, Address: 0x379acc, Func Offset: 0x6ac
	// Line 2746, Address: 0x379ad4, Func Offset: 0x6b4
	// Line 2748, Address: 0x379ad8, Func Offset: 0x6b8
	// Line 2749, Address: 0x379b78, Func Offset: 0x758
	// Line 2753, Address: 0x379b80, Func Offset: 0x760
	// Line 2754, Address: 0x379b94, Func Offset: 0x774
	// Line 2757, Address: 0x379b9c, Func Offset: 0x77c
	// Line 2759, Address: 0x379ba0, Func Offset: 0x780
	// Line 2760, Address: 0x379c40, Func Offset: 0x820
	// Line 2761, Address: 0x379c48, Func Offset: 0x828
	// Line 2762, Address: 0x379c4c, Func Offset: 0x82c
	// Line 2763, Address: 0x379c54, Func Offset: 0x834
	// Line 2765, Address: 0x379c58, Func Offset: 0x838
	// Func End, Address: 0x379c74, Func Offset: 0x854
}

// iParIniVFXBloodSlash__FP10tagxParSysP13tagParCmdList
// Start address: 0x379c80
void iParIniVFXBloodSlash(tagParCmdList* list)
{
	tagParCmd_SpawnVFX* d;
	tagParCmd_KillPlane* d;
	tagParCmd_Move* d;
	tagParCmd_Accelerate* d;
	tagParCmd_Texture* d;
	tagParCmd_Emitter* d;
	xParCmd* cmd;
	// Line 2501, Address: 0x379c80, Func Offset: 0
	// Line 2504, Address: 0x379c98, Func Offset: 0x18
	// Line 2505, Address: 0x379cb4, Func Offset: 0x34
	// Line 2508, Address: 0x379cbc, Func Offset: 0x3c
	// Line 2510, Address: 0x379cc0, Func Offset: 0x40
	// Line 2511, Address: 0x379d60, Func Offset: 0xe0
	// Line 2512, Address: 0x379d64, Func Offset: 0xe4
	// Line 2513, Address: 0x379d68, Func Offset: 0xe8
	// Line 2514, Address: 0x379d6c, Func Offset: 0xec
	// Line 2515, Address: 0x379d70, Func Offset: 0xf0
	// Line 2516, Address: 0x379d74, Func Offset: 0xf4
	// Line 2517, Address: 0x379d7c, Func Offset: 0xfc
	// Line 2518, Address: 0x379d84, Func Offset: 0x104
	// Line 2519, Address: 0x379d8c, Func Offset: 0x10c
	// Line 2520, Address: 0x379d94, Func Offset: 0x114
	// Line 2521, Address: 0x379d98, Func Offset: 0x118
	// Line 2522, Address: 0x379d9c, Func Offset: 0x11c
	// Line 2523, Address: 0x379da0, Func Offset: 0x120
	// Line 2524, Address: 0x379da8, Func Offset: 0x128
	// Line 2525, Address: 0x379dac, Func Offset: 0x12c
	// Line 2526, Address: 0x379db0, Func Offset: 0x130
	// Line 2527, Address: 0x379db4, Func Offset: 0x134
	// Line 2528, Address: 0x379db8, Func Offset: 0x138
	// Line 2529, Address: 0x379dc0, Func Offset: 0x140
	// Line 2530, Address: 0x379dc8, Func Offset: 0x148
	// Line 2531, Address: 0x379dd0, Func Offset: 0x150
	// Line 2532, Address: 0x379dd4, Func Offset: 0x154
	// Line 2533, Address: 0x379dd8, Func Offset: 0x158
	// Line 2534, Address: 0x379ddc, Func Offset: 0x15c
	// Line 2535, Address: 0x379de8, Func Offset: 0x168
	// Line 2536, Address: 0x379df4, Func Offset: 0x174
	// Line 2537, Address: 0x379e00, Func Offset: 0x180
	// Line 2538, Address: 0x379e18, Func Offset: 0x198
	// Line 2542, Address: 0x379e30, Func Offset: 0x1b0
	// Line 2543, Address: 0x379e44, Func Offset: 0x1c4
	// Line 2546, Address: 0x379e4c, Func Offset: 0x1cc
	// Line 2548, Address: 0x379e50, Func Offset: 0x1d0
	// Line 2549, Address: 0x379ef0, Func Offset: 0x270
	// Line 2550, Address: 0x379ef4, Func Offset: 0x274
	// Line 2551, Address: 0x379ef8, Func Offset: 0x278
	// Line 2552, Address: 0x379f00, Func Offset: 0x280
	// Line 2553, Address: 0x379f08, Func Offset: 0x288
	// Line 2554, Address: 0x379f10, Func Offset: 0x290
	// Line 2555, Address: 0x379f18, Func Offset: 0x298
	// Line 2556, Address: 0x379f1c, Func Offset: 0x29c
	// Line 2557, Address: 0x379f24, Func Offset: 0x2a4
	// Line 2558, Address: 0x379f28, Func Offset: 0x2a8
	// Line 2560, Address: 0x379f2c, Func Offset: 0x2ac
	// Line 2563, Address: 0x379f38, Func Offset: 0x2b8
	// Line 2565, Address: 0x379f4c, Func Offset: 0x2cc
	// Line 2569, Address: 0x379f5c, Func Offset: 0x2dc
	// Line 2570, Address: 0x379f70, Func Offset: 0x2f0
	// Line 2573, Address: 0x379f78, Func Offset: 0x2f8
	// Line 2575, Address: 0x379f7c, Func Offset: 0x2fc
	// Line 2576, Address: 0x37a01c, Func Offset: 0x39c
	// Line 2577, Address: 0x37a020, Func Offset: 0x3a0
	// Line 2578, Address: 0x37a02c, Func Offset: 0x3ac
	// Line 2579, Address: 0x37a030, Func Offset: 0x3b0
	// Line 2580, Address: 0x37a034, Func Offset: 0x3b4
	// Line 2584, Address: 0x37a038, Func Offset: 0x3b8
	// Line 2585, Address: 0x37a04c, Func Offset: 0x3cc
	// Line 2588, Address: 0x37a054, Func Offset: 0x3d4
	// Line 2590, Address: 0x37a058, Func Offset: 0x3d8
	// Line 2591, Address: 0x37a0f8, Func Offset: 0x478
	// Line 2595, Address: 0x37a0fc, Func Offset: 0x47c
	// Line 2596, Address: 0x37a110, Func Offset: 0x490
	// Line 2599, Address: 0x37a118, Func Offset: 0x498
	// Line 2601, Address: 0x37a11c, Func Offset: 0x49c
	// Line 2602, Address: 0x37a1bc, Func Offset: 0x53c
	// Line 2603, Address: 0x37a1c4, Func Offset: 0x544
	// Line 2604, Address: 0x37a1c8, Func Offset: 0x548
	// Line 2605, Address: 0x37a1cc, Func Offset: 0x54c
	// Line 2610, Address: 0x37a1d0, Func Offset: 0x550
	// Line 2611, Address: 0x37a1e4, Func Offset: 0x564
	// Line 2614, Address: 0x37a1ec, Func Offset: 0x56c
	// Line 2616, Address: 0x37a1f0, Func Offset: 0x570
	// Line 2617, Address: 0x37a290, Func Offset: 0x610
	// Line 2618, Address: 0x37a298, Func Offset: 0x618
	// Line 2620, Address: 0x37a2a0, Func Offset: 0x620
	// Func End, Address: 0x37a2bc, Func Offset: 0x63c
}

// iParIniVFXBloodDrip__FP10tagxParSysP13tagParCmdList
// Start address: 0x37a2c0
void iParIniVFXBloodDrip(tagParCmdList* list)
{
	tagParCmd_SpawnVFX* d;
	tagParCmd_KillPlane* d;
	tagParCmd_Move* d;
	tagParCmd_Accelerate* d;
	tagParCmd_Texture* d;
	tagParCmd_Emitter* d;
	xParCmd* cmd;
	// Line 2373, Address: 0x37a2c0, Func Offset: 0
	// Line 2376, Address: 0x37a2d8, Func Offset: 0x18
	// Line 2377, Address: 0x37a2f4, Func Offset: 0x34
	// Line 2380, Address: 0x37a2fc, Func Offset: 0x3c
	// Line 2382, Address: 0x37a300, Func Offset: 0x40
	// Line 2383, Address: 0x37a3a0, Func Offset: 0xe0
	// Line 2384, Address: 0x37a3a4, Func Offset: 0xe4
	// Line 2385, Address: 0x37a3a8, Func Offset: 0xe8
	// Line 2386, Address: 0x37a3ac, Func Offset: 0xec
	// Line 2387, Address: 0x37a3b4, Func Offset: 0xf4
	// Line 2388, Address: 0x37a3bc, Func Offset: 0xfc
	// Line 2389, Address: 0x37a3c4, Func Offset: 0x104
	// Line 2390, Address: 0x37a3cc, Func Offset: 0x10c
	// Line 2391, Address: 0x37a3d4, Func Offset: 0x114
	// Line 2392, Address: 0x37a3dc, Func Offset: 0x11c
	// Line 2393, Address: 0x37a3e0, Func Offset: 0x120
	// Line 2394, Address: 0x37a3e4, Func Offset: 0x124
	// Line 2395, Address: 0x37a3e8, Func Offset: 0x128
	// Line 2396, Address: 0x37a3f0, Func Offset: 0x130
	// Line 2397, Address: 0x37a3f4, Func Offset: 0x134
	// Line 2398, Address: 0x37a3f8, Func Offset: 0x138
	// Line 2399, Address: 0x37a3fc, Func Offset: 0x13c
	// Line 2400, Address: 0x37a400, Func Offset: 0x140
	// Line 2401, Address: 0x37a404, Func Offset: 0x144
	// Line 2402, Address: 0x37a40c, Func Offset: 0x14c
	// Line 2403, Address: 0x37a414, Func Offset: 0x154
	// Line 2404, Address: 0x37a418, Func Offset: 0x158
	// Line 2405, Address: 0x37a41c, Func Offset: 0x15c
	// Line 2406, Address: 0x37a420, Func Offset: 0x160
	// Line 2407, Address: 0x37a42c, Func Offset: 0x16c
	// Line 2408, Address: 0x37a430, Func Offset: 0x170
	// Line 2409, Address: 0x37a43c, Func Offset: 0x17c
	// Line 2410, Address: 0x37a454, Func Offset: 0x194
	// Line 2413, Address: 0x37a46c, Func Offset: 0x1ac
	// Line 2414, Address: 0x37a480, Func Offset: 0x1c0
	// Line 2417, Address: 0x37a488, Func Offset: 0x1c8
	// Line 2419, Address: 0x37a48c, Func Offset: 0x1cc
	// Line 2420, Address: 0x37a52c, Func Offset: 0x26c
	// Line 2421, Address: 0x37a530, Func Offset: 0x270
	// Line 2422, Address: 0x37a534, Func Offset: 0x274
	// Line 2423, Address: 0x37a53c, Func Offset: 0x27c
	// Line 2424, Address: 0x37a544, Func Offset: 0x284
	// Line 2425, Address: 0x37a54c, Func Offset: 0x28c
	// Line 2426, Address: 0x37a554, Func Offset: 0x294
	// Line 2427, Address: 0x37a55c, Func Offset: 0x29c
	// Line 2428, Address: 0x37a564, Func Offset: 0x2a4
	// Line 2429, Address: 0x37a568, Func Offset: 0x2a8
	// Line 2431, Address: 0x37a56c, Func Offset: 0x2ac
	// Line 2434, Address: 0x37a578, Func Offset: 0x2b8
	// Line 2436, Address: 0x37a58c, Func Offset: 0x2cc
	// Line 2441, Address: 0x37a59c, Func Offset: 0x2dc
	// Line 2442, Address: 0x37a5b0, Func Offset: 0x2f0
	// Line 2445, Address: 0x37a5b8, Func Offset: 0x2f8
	// Line 2447, Address: 0x37a5bc, Func Offset: 0x2fc
	// Line 2448, Address: 0x37a65c, Func Offset: 0x39c
	// Line 2449, Address: 0x37a660, Func Offset: 0x3a0
	// Line 2450, Address: 0x37a66c, Func Offset: 0x3ac
	// Line 2451, Address: 0x37a670, Func Offset: 0x3b0
	// Line 2452, Address: 0x37a674, Func Offset: 0x3b4
	// Line 2456, Address: 0x37a678, Func Offset: 0x3b8
	// Line 2457, Address: 0x37a68c, Func Offset: 0x3cc
	// Line 2460, Address: 0x37a694, Func Offset: 0x3d4
	// Line 2462, Address: 0x37a698, Func Offset: 0x3d8
	// Line 2463, Address: 0x37a738, Func Offset: 0x478
	// Line 2467, Address: 0x37a73c, Func Offset: 0x47c
	// Line 2468, Address: 0x37a750, Func Offset: 0x490
	// Line 2471, Address: 0x37a758, Func Offset: 0x498
	// Line 2473, Address: 0x37a75c, Func Offset: 0x49c
	// Line 2474, Address: 0x37a7fc, Func Offset: 0x53c
	// Line 2475, Address: 0x37a804, Func Offset: 0x544
	// Line 2476, Address: 0x37a808, Func Offset: 0x548
	// Line 2477, Address: 0x37a80c, Func Offset: 0x54c
	// Line 2482, Address: 0x37a810, Func Offset: 0x550
	// Line 2483, Address: 0x37a824, Func Offset: 0x564
	// Line 2486, Address: 0x37a82c, Func Offset: 0x56c
	// Line 2488, Address: 0x37a830, Func Offset: 0x570
	// Line 2489, Address: 0x37a8d0, Func Offset: 0x610
	// Line 2490, Address: 0x37a8d8, Func Offset: 0x618
	// Line 2492, Address: 0x37a8e0, Func Offset: 0x620
	// Func End, Address: 0x37a8fc, Func Offset: 0x63c
}

// iParIniVFXBloodSpurt__FP10tagxParSysP13tagParCmdList
// Start address: 0x37a900
void iParIniVFXBloodSpurt(tagParCmdList* list)
{
	tagParCmd_SpawnVFX* d;
	tagParCmd_KillPlane* d;
	tagParCmd_Move* d;
	tagParCmd_Accelerate* d;
	tagParCmd_Texture* d;
	tagParCmd_Emitter* d;
	xParCmd* cmd;
	// Line 2244, Address: 0x37a900, Func Offset: 0
	// Line 2247, Address: 0x37a918, Func Offset: 0x18
	// Line 2248, Address: 0x37a934, Func Offset: 0x34
	// Line 2251, Address: 0x37a93c, Func Offset: 0x3c
	// Line 2253, Address: 0x37a940, Func Offset: 0x40
	// Line 2254, Address: 0x37a9e0, Func Offset: 0xe0
	// Line 2255, Address: 0x37a9e4, Func Offset: 0xe4
	// Line 2256, Address: 0x37a9e8, Func Offset: 0xe8
	// Line 2257, Address: 0x37a9ec, Func Offset: 0xec
	// Line 2258, Address: 0x37a9f0, Func Offset: 0xf0
	// Line 2259, Address: 0x37a9f4, Func Offset: 0xf4
	// Line 2260, Address: 0x37a9fc, Func Offset: 0xfc
	// Line 2261, Address: 0x37aa04, Func Offset: 0x104
	// Line 2262, Address: 0x37aa0c, Func Offset: 0x10c
	// Line 2263, Address: 0x37aa14, Func Offset: 0x114
	// Line 2264, Address: 0x37aa18, Func Offset: 0x118
	// Line 2265, Address: 0x37aa1c, Func Offset: 0x11c
	// Line 2266, Address: 0x37aa20, Func Offset: 0x120
	// Line 2267, Address: 0x37aa28, Func Offset: 0x128
	// Line 2268, Address: 0x37aa2c, Func Offset: 0x12c
	// Line 2269, Address: 0x37aa30, Func Offset: 0x130
	// Line 2270, Address: 0x37aa34, Func Offset: 0x134
	// Line 2271, Address: 0x37aa38, Func Offset: 0x138
	// Line 2272, Address: 0x37aa40, Func Offset: 0x140
	// Line 2273, Address: 0x37aa48, Func Offset: 0x148
	// Line 2274, Address: 0x37aa50, Func Offset: 0x150
	// Line 2275, Address: 0x37aa54, Func Offset: 0x154
	// Line 2276, Address: 0x37aa58, Func Offset: 0x158
	// Line 2277, Address: 0x37aa5c, Func Offset: 0x15c
	// Line 2278, Address: 0x37aa68, Func Offset: 0x168
	// Line 2279, Address: 0x37aa74, Func Offset: 0x174
	// Line 2280, Address: 0x37aa80, Func Offset: 0x180
	// Line 2281, Address: 0x37aa98, Func Offset: 0x198
	// Line 2285, Address: 0x37aab0, Func Offset: 0x1b0
	// Line 2286, Address: 0x37aac4, Func Offset: 0x1c4
	// Line 2289, Address: 0x37aacc, Func Offset: 0x1cc
	// Line 2291, Address: 0x37aad0, Func Offset: 0x1d0
	// Line 2292, Address: 0x37ab70, Func Offset: 0x270
	// Line 2293, Address: 0x37ab74, Func Offset: 0x274
	// Line 2294, Address: 0x37ab7c, Func Offset: 0x27c
	// Line 2295, Address: 0x37ab84, Func Offset: 0x284
	// Line 2296, Address: 0x37ab8c, Func Offset: 0x28c
	// Line 2297, Address: 0x37ab94, Func Offset: 0x294
	// Line 2298, Address: 0x37ab9c, Func Offset: 0x29c
	// Line 2299, Address: 0x37aba0, Func Offset: 0x2a0
	// Line 2300, Address: 0x37aba8, Func Offset: 0x2a8
	// Line 2301, Address: 0x37abb0, Func Offset: 0x2b0
	// Line 2303, Address: 0x37abb8, Func Offset: 0x2b8
	// Line 2306, Address: 0x37abc4, Func Offset: 0x2c4
	// Line 2308, Address: 0x37abd8, Func Offset: 0x2d8
	// Line 2313, Address: 0x37abe8, Func Offset: 0x2e8
	// Line 2314, Address: 0x37abfc, Func Offset: 0x2fc
	// Line 2317, Address: 0x37ac04, Func Offset: 0x304
	// Line 2319, Address: 0x37ac08, Func Offset: 0x308
	// Line 2320, Address: 0x37aca8, Func Offset: 0x3a8
	// Line 2321, Address: 0x37acac, Func Offset: 0x3ac
	// Line 2322, Address: 0x37acb8, Func Offset: 0x3b8
	// Line 2323, Address: 0x37acbc, Func Offset: 0x3bc
	// Line 2324, Address: 0x37acc0, Func Offset: 0x3c0
	// Line 2328, Address: 0x37acc4, Func Offset: 0x3c4
	// Line 2329, Address: 0x37acd8, Func Offset: 0x3d8
	// Line 2332, Address: 0x37ace0, Func Offset: 0x3e0
	// Line 2334, Address: 0x37ace4, Func Offset: 0x3e4
	// Line 2335, Address: 0x37ad84, Func Offset: 0x484
	// Line 2339, Address: 0x37ad88, Func Offset: 0x488
	// Line 2340, Address: 0x37ad9c, Func Offset: 0x49c
	// Line 2343, Address: 0x37ada4, Func Offset: 0x4a4
	// Line 2345, Address: 0x37ada8, Func Offset: 0x4a8
	// Line 2346, Address: 0x37ae48, Func Offset: 0x548
	// Line 2347, Address: 0x37ae50, Func Offset: 0x550
	// Line 2348, Address: 0x37ae54, Func Offset: 0x554
	// Line 2349, Address: 0x37ae58, Func Offset: 0x558
	// Line 2354, Address: 0x37ae5c, Func Offset: 0x55c
	// Line 2355, Address: 0x37ae70, Func Offset: 0x570
	// Line 2358, Address: 0x37ae78, Func Offset: 0x578
	// Line 2360, Address: 0x37ae7c, Func Offset: 0x57c
	// Line 2361, Address: 0x37af1c, Func Offset: 0x61c
	// Line 2362, Address: 0x37af24, Func Offset: 0x624
	// Line 2364, Address: 0x37af2c, Func Offset: 0x62c
	// Func End, Address: 0x37af48, Func Offset: 0x648
}

// iParIniVFXFire__FP10tagxParSysP13tagParCmdList
// Start address: 0x37af50
void iParIniVFXFire(tagParCmdList* list)
{
	tagParCmd_KillOld* d;
	tagParCmd_Move* d;
	tagParCmd_Texture* d;
	tagParCmd_Emitter* d;
	xParCmd* cmd;
	// Line 2149, Address: 0x37af50, Func Offset: 0
	// Line 2153, Address: 0x37af68, Func Offset: 0x18
	// Line 2154, Address: 0x37af84, Func Offset: 0x34
	// Line 2157, Address: 0x37af8c, Func Offset: 0x3c
	// Line 2159, Address: 0x37af90, Func Offset: 0x40
	// Line 2160, Address: 0x37b030, Func Offset: 0xe0
	// Line 2161, Address: 0x37b034, Func Offset: 0xe4
	// Line 2162, Address: 0x37b038, Func Offset: 0xe8
	// Line 2163, Address: 0x37b03c, Func Offset: 0xec
	// Line 2164, Address: 0x37b044, Func Offset: 0xf4
	// Line 2165, Address: 0x37b04c, Func Offset: 0xfc
	// Line 2166, Address: 0x37b054, Func Offset: 0x104
	// Line 2167, Address: 0x37b05c, Func Offset: 0x10c
	// Line 2168, Address: 0x37b064, Func Offset: 0x114
	// Line 2169, Address: 0x37b06c, Func Offset: 0x11c
	// Line 2170, Address: 0x37b070, Func Offset: 0x120
	// Line 2171, Address: 0x37b074, Func Offset: 0x124
	// Line 2172, Address: 0x37b078, Func Offset: 0x128
	// Line 2173, Address: 0x37b07c, Func Offset: 0x12c
	// Line 2174, Address: 0x37b080, Func Offset: 0x130
	// Line 2175, Address: 0x37b084, Func Offset: 0x134
	// Line 2176, Address: 0x37b088, Func Offset: 0x138
	// Line 2177, Address: 0x37b090, Func Offset: 0x140
	// Line 2178, Address: 0x37b094, Func Offset: 0x144
	// Line 2179, Address: 0x37b098, Func Offset: 0x148
	// Line 2180, Address: 0x37b09c, Func Offset: 0x14c
	// Line 2181, Address: 0x37b0a0, Func Offset: 0x150
	// Line 2182, Address: 0x37b0a4, Func Offset: 0x154
	// Line 2183, Address: 0x37b0a8, Func Offset: 0x158
	// Line 2184, Address: 0x37b0ac, Func Offset: 0x15c
	// Line 2185, Address: 0x37b0c4, Func Offset: 0x174
	// Line 2189, Address: 0x37b0dc, Func Offset: 0x18c
	// Line 2190, Address: 0x37b0f0, Func Offset: 0x1a0
	// Line 2193, Address: 0x37b0f8, Func Offset: 0x1a8
	// Line 2195, Address: 0x37b0fc, Func Offset: 0x1ac
	// Line 2196, Address: 0x37b19c, Func Offset: 0x24c
	// Line 2197, Address: 0x37b1a0, Func Offset: 0x250
	// Line 2198, Address: 0x37b1a8, Func Offset: 0x258
	// Line 2199, Address: 0x37b1b0, Func Offset: 0x260
	// Line 2200, Address: 0x37b1b8, Func Offset: 0x268
	// Line 2201, Address: 0x37b1c0, Func Offset: 0x270
	// Line 2202, Address: 0x37b1c8, Func Offset: 0x278
	// Line 2203, Address: 0x37b1d0, Func Offset: 0x280
	// Line 2204, Address: 0x37b1d8, Func Offset: 0x288
	// Line 2205, Address: 0x37b1dc, Func Offset: 0x28c
	// Line 2207, Address: 0x37b1e0, Func Offset: 0x290
	// Line 2210, Address: 0x37b1ec, Func Offset: 0x29c
	// Line 2212, Address: 0x37b200, Func Offset: 0x2b0
	// Line 2217, Address: 0x37b210, Func Offset: 0x2c0
	// Line 2218, Address: 0x37b224, Func Offset: 0x2d4
	// Line 2221, Address: 0x37b22c, Func Offset: 0x2dc
	// Line 2223, Address: 0x37b230, Func Offset: 0x2e0
	// Line 2224, Address: 0x37b2d0, Func Offset: 0x380
	// Line 2228, Address: 0x37b2d4, Func Offset: 0x384
	// Line 2229, Address: 0x37b2e8, Func Offset: 0x398
	// Line 2232, Address: 0x37b2f0, Func Offset: 0x3a0
	// Line 2234, Address: 0x37b2f4, Func Offset: 0x3a4
	// Line 2235, Address: 0x37b394, Func Offset: 0x444
	// Line 2237, Address: 0x37b39c, Func Offset: 0x44c
	// Func End, Address: 0x37b3b8, Func Offset: 0x468
}

// iParIniVFXMuzzleFlash__FP10tagxParSysP13tagParCmdList
// Start address: 0x37b3c0
void iParIniVFXMuzzleFlash(tagParCmdList* list)
{
	tagParCmd_KillOld* d;
	tagParCmd_Move* d;
	tagParCmd_Texture* d;
	tagParCmd_Emitter* d;
	xParCmd* cmd;
	// Line 2054, Address: 0x37b3c0, Func Offset: 0
	// Line 2058, Address: 0x37b3d8, Func Offset: 0x18
	// Line 2059, Address: 0x37b3f4, Func Offset: 0x34
	// Line 2062, Address: 0x37b3fc, Func Offset: 0x3c
	// Line 2064, Address: 0x37b400, Func Offset: 0x40
	// Line 2065, Address: 0x37b4a0, Func Offset: 0xe0
	// Line 2066, Address: 0x37b4a4, Func Offset: 0xe4
	// Line 2067, Address: 0x37b4a8, Func Offset: 0xe8
	// Line 2068, Address: 0x37b4ac, Func Offset: 0xec
	// Line 2069, Address: 0x37b4b4, Func Offset: 0xf4
	// Line 2070, Address: 0x37b4bc, Func Offset: 0xfc
	// Line 2071, Address: 0x37b4c4, Func Offset: 0x104
	// Line 2072, Address: 0x37b4cc, Func Offset: 0x10c
	// Line 2073, Address: 0x37b4d4, Func Offset: 0x114
	// Line 2074, Address: 0x37b4dc, Func Offset: 0x11c
	// Line 2075, Address: 0x37b4e0, Func Offset: 0x120
	// Line 2076, Address: 0x37b4e4, Func Offset: 0x124
	// Line 2077, Address: 0x37b4e8, Func Offset: 0x128
	// Line 2078, Address: 0x37b4f0, Func Offset: 0x130
	// Line 2079, Address: 0x37b4f4, Func Offset: 0x134
	// Line 2080, Address: 0x37b4f8, Func Offset: 0x138
	// Line 2081, Address: 0x37b4fc, Func Offset: 0x13c
	// Line 2082, Address: 0x37b504, Func Offset: 0x144
	// Line 2083, Address: 0x37b50c, Func Offset: 0x14c
	// Line 2084, Address: 0x37b510, Func Offset: 0x150
	// Line 2085, Address: 0x37b514, Func Offset: 0x154
	// Line 2086, Address: 0x37b518, Func Offset: 0x158
	// Line 2087, Address: 0x37b51c, Func Offset: 0x15c
	// Line 2088, Address: 0x37b520, Func Offset: 0x160
	// Line 2089, Address: 0x37b524, Func Offset: 0x164
	// Line 2090, Address: 0x37b53c, Func Offset: 0x17c
	// Line 2093, Address: 0x37b554, Func Offset: 0x194
	// Line 2094, Address: 0x37b568, Func Offset: 0x1a8
	// Line 2097, Address: 0x37b570, Func Offset: 0x1b0
	// Line 2099, Address: 0x37b574, Func Offset: 0x1b4
	// Line 2100, Address: 0x37b614, Func Offset: 0x254
	// Line 2101, Address: 0x37b618, Func Offset: 0x258
	// Line 2102, Address: 0x37b61c, Func Offset: 0x25c
	// Line 2103, Address: 0x37b620, Func Offset: 0x260
	// Line 2104, Address: 0x37b624, Func Offset: 0x264
	// Line 2105, Address: 0x37b62c, Func Offset: 0x26c
	// Line 2106, Address: 0x37b634, Func Offset: 0x274
	// Line 2107, Address: 0x37b63c, Func Offset: 0x27c
	// Line 2108, Address: 0x37b644, Func Offset: 0x284
	// Line 2109, Address: 0x37b648, Func Offset: 0x288
	// Line 2111, Address: 0x37b64c, Func Offset: 0x28c
	// Line 2114, Address: 0x37b658, Func Offset: 0x298
	// Line 2116, Address: 0x37b66c, Func Offset: 0x2ac
	// Line 2121, Address: 0x37b67c, Func Offset: 0x2bc
	// Line 2122, Address: 0x37b690, Func Offset: 0x2d0
	// Line 2125, Address: 0x37b698, Func Offset: 0x2d8
	// Line 2127, Address: 0x37b69c, Func Offset: 0x2dc
	// Line 2128, Address: 0x37b73c, Func Offset: 0x37c
	// Line 2133, Address: 0x37b740, Func Offset: 0x380
	// Line 2134, Address: 0x37b754, Func Offset: 0x394
	// Line 2137, Address: 0x37b75c, Func Offset: 0x39c
	// Line 2139, Address: 0x37b760, Func Offset: 0x3a0
	// Line 2140, Address: 0x37b800, Func Offset: 0x440
	// Line 2142, Address: 0x37b808, Func Offset: 0x448
	// Func End, Address: 0x37b824, Func Offset: 0x464
}

// iParIniVFXBoneFragment__FP10tagxParSysP13tagParCmdList
// Start address: 0x37b830
void iParIniVFXBoneFragment(tagParCmdList* list)
{
	tagParCmd_KillOld* d;
	tagParCmd_Bounce* d;
	tagParCmd_Move* d;
	tagParCmd_RotMove* d;
	tagParCmd_Accelerate* d;
	tagParCmd_Texture* d;
	tagParCmd_Emitter* d;
	xParCmd* cmd;
	// Line 1913, Address: 0x37b830, Func Offset: 0
	// Line 1916, Address: 0x37b848, Func Offset: 0x18
	// Line 1917, Address: 0x37b864, Func Offset: 0x34
	// Line 1920, Address: 0x37b86c, Func Offset: 0x3c
	// Line 1922, Address: 0x37b870, Func Offset: 0x40
	// Line 1923, Address: 0x37b910, Func Offset: 0xe0
	// Line 1924, Address: 0x37b914, Func Offset: 0xe4
	// Line 1925, Address: 0x37b918, Func Offset: 0xe8
	// Line 1926, Address: 0x37b91c, Func Offset: 0xec
	// Line 1927, Address: 0x37b924, Func Offset: 0xf4
	// Line 1928, Address: 0x37b92c, Func Offset: 0xfc
	// Line 1929, Address: 0x37b934, Func Offset: 0x104
	// Line 1930, Address: 0x37b93c, Func Offset: 0x10c
	// Line 1931, Address: 0x37b944, Func Offset: 0x114
	// Line 1932, Address: 0x37b94c, Func Offset: 0x11c
	// Line 1933, Address: 0x37b950, Func Offset: 0x120
	// Line 1934, Address: 0x37b954, Func Offset: 0x124
	// Line 1935, Address: 0x37b958, Func Offset: 0x128
	// Line 1936, Address: 0x37b95c, Func Offset: 0x12c
	// Line 1937, Address: 0x37b960, Func Offset: 0x130
	// Line 1938, Address: 0x37b964, Func Offset: 0x134
	// Line 1939, Address: 0x37b968, Func Offset: 0x138
	// Line 1940, Address: 0x37b974, Func Offset: 0x144
	// Line 1941, Address: 0x37b978, Func Offset: 0x148
	// Line 1942, Address: 0x37b97c, Func Offset: 0x14c
	// Line 1943, Address: 0x37b980, Func Offset: 0x150
	// Line 1944, Address: 0x37b984, Func Offset: 0x154
	// Line 1945, Address: 0x37b990, Func Offset: 0x160
	// Line 1946, Address: 0x37b99c, Func Offset: 0x16c
	// Line 1947, Address: 0x37b9a8, Func Offset: 0x178
	// Line 1948, Address: 0x37b9c0, Func Offset: 0x190
	// Line 1951, Address: 0x37b9d8, Func Offset: 0x1a8
	// Line 1952, Address: 0x37b9ec, Func Offset: 0x1bc
	// Line 1955, Address: 0x37b9f4, Func Offset: 0x1c4
	// Line 1957, Address: 0x37b9f8, Func Offset: 0x1c8
	// Line 1958, Address: 0x37ba98, Func Offset: 0x268
	// Line 1959, Address: 0x37ba9c, Func Offset: 0x26c
	// Line 1960, Address: 0x37baa0, Func Offset: 0x270
	// Line 1961, Address: 0x37baa8, Func Offset: 0x278
	// Line 1962, Address: 0x37bab0, Func Offset: 0x280
	// Line 1963, Address: 0x37bab8, Func Offset: 0x288
	// Line 1964, Address: 0x37bac0, Func Offset: 0x290
	// Line 1965, Address: 0x37bac8, Func Offset: 0x298
	// Line 1966, Address: 0x37bad0, Func Offset: 0x2a0
	// Line 1967, Address: 0x37bad4, Func Offset: 0x2a4
	// Line 1969, Address: 0x37bad8, Func Offset: 0x2a8
	// Line 1972, Address: 0x37bae4, Func Offset: 0x2b4
	// Line 1974, Address: 0x37baf8, Func Offset: 0x2c8
	// Line 1979, Address: 0x37bb08, Func Offset: 0x2d8
	// Line 1980, Address: 0x37bb1c, Func Offset: 0x2ec
	// Line 1983, Address: 0x37bb24, Func Offset: 0x2f4
	// Line 1985, Address: 0x37bb28, Func Offset: 0x2f8
	// Line 1986, Address: 0x37bbc8, Func Offset: 0x398
	// Line 1987, Address: 0x37bbcc, Func Offset: 0x39c
	// Line 1988, Address: 0x37bbd8, Func Offset: 0x3a8
	// Line 1989, Address: 0x37bbdc, Func Offset: 0x3ac
	// Line 1990, Address: 0x37bbe0, Func Offset: 0x3b0
	// Line 1994, Address: 0x37bbe4, Func Offset: 0x3b4
	// Line 1995, Address: 0x37bbf8, Func Offset: 0x3c8
	// Line 1998, Address: 0x37bc00, Func Offset: 0x3d0
	// Line 2001, Address: 0x37bc04, Func Offset: 0x3d4
	// Line 2002, Address: 0x37bca4, Func Offset: 0x474
	// Line 2003, Address: 0x37bcac, Func Offset: 0x47c
	// Line 2004, Address: 0x37bcb4, Func Offset: 0x484
	// Line 2008, Address: 0x37bcbc, Func Offset: 0x48c
	// Line 2009, Address: 0x37bcd0, Func Offset: 0x4a0
	// Line 2012, Address: 0x37bcd8, Func Offset: 0x4a8
	// Line 2014, Address: 0x37bcdc, Func Offset: 0x4ac
	// Line 2015, Address: 0x37bd7c, Func Offset: 0x54c
	// Line 2019, Address: 0x37bd80, Func Offset: 0x550
	// Line 2020, Address: 0x37bd94, Func Offset: 0x564
	// Line 2023, Address: 0x37bd9c, Func Offset: 0x56c
	// Line 2025, Address: 0x37bda0, Func Offset: 0x570
	// Line 2026, Address: 0x37be40, Func Offset: 0x610
	// Line 2027, Address: 0x37be44, Func Offset: 0x614
	// Line 2028, Address: 0x37be48, Func Offset: 0x618
	// Line 2029, Address: 0x37be4c, Func Offset: 0x61c
	// Line 2031, Address: 0x37be50, Func Offset: 0x620
	// Line 2032, Address: 0x37be58, Func Offset: 0x628
	// Line 2033, Address: 0x37be60, Func Offset: 0x630
	// Line 2038, Address: 0x37be68, Func Offset: 0x638
	// Line 2039, Address: 0x37be7c, Func Offset: 0x64c
	// Line 2042, Address: 0x37be84, Func Offset: 0x654
	// Line 2044, Address: 0x37be88, Func Offset: 0x658
	// Line 2045, Address: 0x37bf28, Func Offset: 0x6f8
	// Line 2047, Address: 0x37bf30, Func Offset: 0x700
	// Func End, Address: 0x37bf4c, Func Offset: 0x71c
}

// iParIniVFXShellEject__FP10tagxParSysP13tagParCmdList
// Start address: 0x37bf50
void iParIniVFXShellEject(tagParCmdList* list)
{
	tagParCmd_Bounce* d;
	tagParCmd_Move* d;
	tagParCmd_Jet* d;
	tagParCmd_Accelerate* d;
	tagParCmd_Texture* d;
	tagParCmd_Emitter* d;
	xParCmd* cmd;
	// Line 1764, Address: 0x37bf50, Func Offset: 0
	// Line 1767, Address: 0x37bf68, Func Offset: 0x18
	// Line 1768, Address: 0x37bf84, Func Offset: 0x34
	// Line 1771, Address: 0x37bf8c, Func Offset: 0x3c
	// Line 1773, Address: 0x37bf90, Func Offset: 0x40
	// Line 1774, Address: 0x37c030, Func Offset: 0xe0
	// Line 1775, Address: 0x37c034, Func Offset: 0xe4
	// Line 1776, Address: 0x37c038, Func Offset: 0xe8
	// Line 1777, Address: 0x37c03c, Func Offset: 0xec
	// Line 1778, Address: 0x37c044, Func Offset: 0xf4
	// Line 1779, Address: 0x37c04c, Func Offset: 0xfc
	// Line 1780, Address: 0x37c054, Func Offset: 0x104
	// Line 1781, Address: 0x37c05c, Func Offset: 0x10c
	// Line 1782, Address: 0x37c064, Func Offset: 0x114
	// Line 1783, Address: 0x37c06c, Func Offset: 0x11c
	// Line 1784, Address: 0x37c070, Func Offset: 0x120
	// Line 1785, Address: 0x37c074, Func Offset: 0x124
	// Line 1786, Address: 0x37c078, Func Offset: 0x128
	// Line 1787, Address: 0x37c07c, Func Offset: 0x12c
	// Line 1788, Address: 0x37c080, Func Offset: 0x130
	// Line 1789, Address: 0x37c084, Func Offset: 0x134
	// Line 1790, Address: 0x37c088, Func Offset: 0x138
	// Line 1791, Address: 0x37c090, Func Offset: 0x140
	// Line 1792, Address: 0x37c094, Func Offset: 0x144
	// Line 1793, Address: 0x37c098, Func Offset: 0x148
	// Line 1794, Address: 0x37c09c, Func Offset: 0x14c
	// Line 1795, Address: 0x37c0a0, Func Offset: 0x150
	// Line 1796, Address: 0x37c0ac, Func Offset: 0x15c
	// Line 1797, Address: 0x37c0b8, Func Offset: 0x168
	// Line 1798, Address: 0x37c0c4, Func Offset: 0x174
	// Line 1799, Address: 0x37c0dc, Func Offset: 0x18c
	// Line 1803, Address: 0x37c0f4, Func Offset: 0x1a4
	// Line 1804, Address: 0x37c108, Func Offset: 0x1b8
	// Line 1807, Address: 0x37c110, Func Offset: 0x1c0
	// Line 1809, Address: 0x37c114, Func Offset: 0x1c4
	// Line 1810, Address: 0x37c1b4, Func Offset: 0x264
	// Line 1811, Address: 0x37c1b8, Func Offset: 0x268
	// Line 1812, Address: 0x37c1bc, Func Offset: 0x26c
	// Line 1813, Address: 0x37c1c0, Func Offset: 0x270
	// Line 1814, Address: 0x37c1c4, Func Offset: 0x274
	// Line 1815, Address: 0x37c1cc, Func Offset: 0x27c
	// Line 1816, Address: 0x37c1d4, Func Offset: 0x284
	// Line 1817, Address: 0x37c1dc, Func Offset: 0x28c
	// Line 1818, Address: 0x37c1e4, Func Offset: 0x294
	// Line 1819, Address: 0x37c1e8, Func Offset: 0x298
	// Line 1821, Address: 0x37c1ec, Func Offset: 0x29c
	// Line 1824, Address: 0x37c1f8, Func Offset: 0x2a8
	// Line 1826, Address: 0x37c20c, Func Offset: 0x2bc
	// Line 1831, Address: 0x37c21c, Func Offset: 0x2cc
	// Line 1832, Address: 0x37c230, Func Offset: 0x2e0
	// Line 1835, Address: 0x37c238, Func Offset: 0x2e8
	// Line 1837, Address: 0x37c23c, Func Offset: 0x2ec
	// Line 1838, Address: 0x37c2dc, Func Offset: 0x38c
	// Line 1839, Address: 0x37c2e0, Func Offset: 0x390
	// Line 1840, Address: 0x37c2ec, Func Offset: 0x39c
	// Line 1841, Address: 0x37c2f0, Func Offset: 0x3a0
	// Line 1842, Address: 0x37c2f4, Func Offset: 0x3a4
	// Line 1846, Address: 0x37c2f8, Func Offset: 0x3a8
	// Line 1847, Address: 0x37c30c, Func Offset: 0x3bc
	// Line 1850, Address: 0x37c314, Func Offset: 0x3c4
	// Line 1852, Address: 0x37c318, Func Offset: 0x3c8
	// Line 1853, Address: 0x37c3b8, Func Offset: 0x468
	// Line 1854, Address: 0x37c3bc, Func Offset: 0x46c
	// Line 1855, Address: 0x37c3c0, Func Offset: 0x470
	// Line 1856, Address: 0x37c3c4, Func Offset: 0x474
	// Line 1857, Address: 0x37c3d0, Func Offset: 0x480
	// Line 1858, Address: 0x37c3dc, Func Offset: 0x48c
	// Line 1859, Address: 0x37c3e8, Func Offset: 0x498
	// Line 1860, Address: 0x37c3f0, Func Offset: 0x4a0
	// Line 1861, Address: 0x37c3fc, Func Offset: 0x4ac
	// Line 1864, Address: 0x37c408, Func Offset: 0x4b8
	// Line 1865, Address: 0x37c41c, Func Offset: 0x4cc
	// Line 1868, Address: 0x37c424, Func Offset: 0x4d4
	// Line 1870, Address: 0x37c428, Func Offset: 0x4d8
	// Line 1871, Address: 0x37c4c8, Func Offset: 0x578
	// Line 1875, Address: 0x37c4cc, Func Offset: 0x57c
	// Line 1876, Address: 0x37c4e0, Func Offset: 0x590
	// Line 1879, Address: 0x37c4e8, Func Offset: 0x598
	// Line 1881, Address: 0x37c4ec, Func Offset: 0x59c
	// Line 1882, Address: 0x37c58c, Func Offset: 0x63c
	// Line 1883, Address: 0x37c594, Func Offset: 0x644
	// Line 1884, Address: 0x37c598, Func Offset: 0x648
	// Line 1885, Address: 0x37c59c, Func Offset: 0x64c
	// Line 1887, Address: 0x37c5a0, Func Offset: 0x650
	// Line 1888, Address: 0x37c5a8, Func Offset: 0x658
	// Line 1889, Address: 0x37c5b0, Func Offset: 0x660
	// Line 1905, Address: 0x37c5b8, Func Offset: 0x668
	// Func End, Address: 0x37c5d4, Func Offset: 0x684
}

// iParIniVFXBulletStreak__FP10tagxParSysP13tagParCmdList
// Start address: 0x37c5e0
void iParIniVFXBulletStreak(tagParCmdList* list)
{
	tagParCmd_SpawnVFX* d;
	tagParCmd_KillOld* d;
	tagParCmd_Move* d;
	tagParCmd_Texture* d;
	tagParCmd_Emitter* d;
	xParCmd* cmd;
	// Line 1650, Address: 0x37c5e0, Func Offset: 0
	// Line 1654, Address: 0x37c5f8, Func Offset: 0x18
	// Line 1655, Address: 0x37c614, Func Offset: 0x34
	// Line 1658, Address: 0x37c61c, Func Offset: 0x3c
	// Line 1660, Address: 0x37c620, Func Offset: 0x40
	// Line 1661, Address: 0x37c6c0, Func Offset: 0xe0
	// Line 1662, Address: 0x37c6c4, Func Offset: 0xe4
	// Line 1663, Address: 0x37c6c8, Func Offset: 0xe8
	// Line 1664, Address: 0x37c6cc, Func Offset: 0xec
	// Line 1665, Address: 0x37c6d4, Func Offset: 0xf4
	// Line 1666, Address: 0x37c6dc, Func Offset: 0xfc
	// Line 1667, Address: 0x37c6e4, Func Offset: 0x104
	// Line 1668, Address: 0x37c6ec, Func Offset: 0x10c
	// Line 1669, Address: 0x37c6f4, Func Offset: 0x114
	// Line 1670, Address: 0x37c6fc, Func Offset: 0x11c
	// Line 1671, Address: 0x37c700, Func Offset: 0x120
	// Line 1672, Address: 0x37c704, Func Offset: 0x124
	// Line 1673, Address: 0x37c708, Func Offset: 0x128
	// Line 1674, Address: 0x37c710, Func Offset: 0x130
	// Line 1675, Address: 0x37c714, Func Offset: 0x134
	// Line 1676, Address: 0x37c718, Func Offset: 0x138
	// Line 1677, Address: 0x37c71c, Func Offset: 0x13c
	// Line 1678, Address: 0x37c728, Func Offset: 0x148
	// Line 1679, Address: 0x37c72c, Func Offset: 0x14c
	// Line 1680, Address: 0x37c730, Func Offset: 0x150
	// Line 1681, Address: 0x37c734, Func Offset: 0x154
	// Line 1682, Address: 0x37c738, Func Offset: 0x158
	// Line 1683, Address: 0x37c73c, Func Offset: 0x15c
	// Line 1684, Address: 0x37c740, Func Offset: 0x160
	// Line 1685, Address: 0x37c744, Func Offset: 0x164
	// Line 1686, Address: 0x37c75c, Func Offset: 0x17c
	// Line 1690, Address: 0x37c774, Func Offset: 0x194
	// Line 1691, Address: 0x37c788, Func Offset: 0x1a8
	// Line 1694, Address: 0x37c790, Func Offset: 0x1b0
	// Line 1696, Address: 0x37c794, Func Offset: 0x1b4
	// Line 1697, Address: 0x37c834, Func Offset: 0x254
	// Line 1698, Address: 0x37c838, Func Offset: 0x258
	// Line 1699, Address: 0x37c840, Func Offset: 0x260
	// Line 1700, Address: 0x37c848, Func Offset: 0x268
	// Line 1701, Address: 0x37c850, Func Offset: 0x270
	// Line 1702, Address: 0x37c858, Func Offset: 0x278
	// Line 1703, Address: 0x37c860, Func Offset: 0x280
	// Line 1704, Address: 0x37c868, Func Offset: 0x288
	// Line 1705, Address: 0x37c870, Func Offset: 0x290
	// Line 1706, Address: 0x37c874, Func Offset: 0x294
	// Line 1708, Address: 0x37c878, Func Offset: 0x298
	// Line 1711, Address: 0x37c884, Func Offset: 0x2a4
	// Line 1713, Address: 0x37c898, Func Offset: 0x2b8
	// Line 1718, Address: 0x37c8a8, Func Offset: 0x2c8
	// Line 1719, Address: 0x37c8bc, Func Offset: 0x2dc
	// Line 1722, Address: 0x37c8c4, Func Offset: 0x2e4
	// Line 1724, Address: 0x37c8c8, Func Offset: 0x2e8
	// Line 1725, Address: 0x37c968, Func Offset: 0x388
	// Line 1730, Address: 0x37c96c, Func Offset: 0x38c
	// Line 1731, Address: 0x37c980, Func Offset: 0x3a0
	// Line 1734, Address: 0x37c988, Func Offset: 0x3a8
	// Line 1736, Address: 0x37c98c, Func Offset: 0x3ac
	// Line 1737, Address: 0x37ca2c, Func Offset: 0x44c
	// Line 1741, Address: 0x37ca34, Func Offset: 0x454
	// Line 1742, Address: 0x37ca48, Func Offset: 0x468
	// Line 1745, Address: 0x37ca50, Func Offset: 0x470
	// Line 1747, Address: 0x37ca54, Func Offset: 0x474
	// Line 1748, Address: 0x37caf4, Func Offset: 0x514
	// Line 1749, Address: 0x37cafc, Func Offset: 0x51c
	// Line 1750, Address: 0x37cb04, Func Offset: 0x524
	// Line 1751, Address: 0x37cb08, Func Offset: 0x528
	// Line 1752, Address: 0x37cb10, Func Offset: 0x530
	// Line 1754, Address: 0x37cb18, Func Offset: 0x538
	// Func End, Address: 0x37cb34, Func Offset: 0x554
}

// iParIniVFXGroundPuff__FP10tagxParSysP13tagParCmdList
// Start address: 0x37cb40
void iParIniVFXGroundPuff(tagParCmdList* list)
{
	tagParCmd_KillOld* d;
	tagParCmd_Move* d;
	tagParCmd_Accelerate* d;
	tagParCmd_Texture* d;
	tagParCmd_Emitter* d;
	xParCmd* cmd;
	// Line 1538, Address: 0x37cb40, Func Offset: 0
	// Line 1542, Address: 0x37cb58, Func Offset: 0x18
	// Line 1543, Address: 0x37cb74, Func Offset: 0x34
	// Line 1546, Address: 0x37cb7c, Func Offset: 0x3c
	// Line 1548, Address: 0x37cb80, Func Offset: 0x40
	// Line 1549, Address: 0x37cc20, Func Offset: 0xe0
	// Line 1550, Address: 0x37cc24, Func Offset: 0xe4
	// Line 1551, Address: 0x37cc28, Func Offset: 0xe8
	// Line 1552, Address: 0x37cc2c, Func Offset: 0xec
	// Line 1553, Address: 0x37cc34, Func Offset: 0xf4
	// Line 1554, Address: 0x37cc3c, Func Offset: 0xfc
	// Line 1555, Address: 0x37cc44, Func Offset: 0x104
	// Line 1556, Address: 0x37cc4c, Func Offset: 0x10c
	// Line 1557, Address: 0x37cc54, Func Offset: 0x114
	// Line 1558, Address: 0x37cc5c, Func Offset: 0x11c
	// Line 1559, Address: 0x37cc60, Func Offset: 0x120
	// Line 1560, Address: 0x37cc64, Func Offset: 0x124
	// Line 1561, Address: 0x37cc68, Func Offset: 0x128
	// Line 1562, Address: 0x37cc70, Func Offset: 0x130
	// Line 1563, Address: 0x37cc74, Func Offset: 0x134
	// Line 1564, Address: 0x37cc78, Func Offset: 0x138
	// Line 1566, Address: 0x37cc7c, Func Offset: 0x13c
	// Line 1567, Address: 0x37cc80, Func Offset: 0x140
	// Line 1568, Address: 0x37cc88, Func Offset: 0x148
	// Line 1569, Address: 0x37cc90, Func Offset: 0x150
	// Line 1571, Address: 0x37cc98, Func Offset: 0x158
	// Line 1572, Address: 0x37cc9c, Func Offset: 0x15c
	// Line 1573, Address: 0x37cca8, Func Offset: 0x168
	// Line 1574, Address: 0x37ccac, Func Offset: 0x16c
	// Line 1575, Address: 0x37ccb0, Func Offset: 0x170
	// Line 1576, Address: 0x37ccb4, Func Offset: 0x174
	// Line 1577, Address: 0x37ccb8, Func Offset: 0x178
	// Line 1578, Address: 0x37ccd0, Func Offset: 0x190
	// Line 1581, Address: 0x37cce8, Func Offset: 0x1a8
	// Line 1582, Address: 0x37ccfc, Func Offset: 0x1bc
	// Line 1585, Address: 0x37cd04, Func Offset: 0x1c4
	// Line 1587, Address: 0x37cd08, Func Offset: 0x1c8
	// Line 1588, Address: 0x37cda8, Func Offset: 0x268
	// Line 1589, Address: 0x37cdac, Func Offset: 0x26c
	// Line 1590, Address: 0x37cdb0, Func Offset: 0x270
	// Line 1591, Address: 0x37cdb8, Func Offset: 0x278
	// Line 1592, Address: 0x37cdc0, Func Offset: 0x280
	// Line 1593, Address: 0x37cdc8, Func Offset: 0x288
	// Line 1594, Address: 0x37cdd0, Func Offset: 0x290
	// Line 1595, Address: 0x37cdd8, Func Offset: 0x298
	// Line 1596, Address: 0x37cde0, Func Offset: 0x2a0
	// Line 1597, Address: 0x37cde4, Func Offset: 0x2a4
	// Line 1599, Address: 0x37cdec, Func Offset: 0x2ac
	// Line 1602, Address: 0x37cdf8, Func Offset: 0x2b8
	// Line 1604, Address: 0x37ce0c, Func Offset: 0x2cc
	// Line 1608, Address: 0x37ce1c, Func Offset: 0x2dc
	// Line 1609, Address: 0x37ce30, Func Offset: 0x2f0
	// Line 1612, Address: 0x37ce38, Func Offset: 0x2f8
	// Line 1614, Address: 0x37ce3c, Func Offset: 0x2fc
	// Line 1615, Address: 0x37cedc, Func Offset: 0x39c
	// Line 1616, Address: 0x37cee8, Func Offset: 0x3a8
	// Line 1617, Address: 0x37cef4, Func Offset: 0x3b4
	// Line 1618, Address: 0x37cf00, Func Offset: 0x3c0
	// Line 1619, Address: 0x37cf04, Func Offset: 0x3c4
	// Line 1623, Address: 0x37cf08, Func Offset: 0x3c8
	// Line 1624, Address: 0x37cf1c, Func Offset: 0x3dc
	// Line 1627, Address: 0x37cf24, Func Offset: 0x3e4
	// Line 1629, Address: 0x37cf28, Func Offset: 0x3e8
	// Line 1630, Address: 0x37cfc8, Func Offset: 0x488
	// Line 1634, Address: 0x37cfcc, Func Offset: 0x48c
	// Line 1635, Address: 0x37cfe0, Func Offset: 0x4a0
	// Line 1638, Address: 0x37cfe8, Func Offset: 0x4a8
	// Line 1640, Address: 0x37cfec, Func Offset: 0x4ac
	// Line 1641, Address: 0x37d08c, Func Offset: 0x54c
	// Line 1643, Address: 0x37d094, Func Offset: 0x554
	// Func End, Address: 0x37d0b0, Func Offset: 0x570
}

// iParIniVFXSmoke__FP10tagxParSysP13tagParCmdList
// Start address: 0x37d0b0
void iParIniVFXSmoke(tagParCmdList* list)
{
	tagParCmd_KillOld* d;
	tagParCmd_Move* d;
	tagParCmd_Texture* d;
	tagParCmd_Emitter* d;
	xParCmd* cmd;
	// Line 1440, Address: 0x37d0b0, Func Offset: 0
	// Line 1444, Address: 0x37d0c8, Func Offset: 0x18
	// Line 1445, Address: 0x37d0e4, Func Offset: 0x34
	// Line 1448, Address: 0x37d0ec, Func Offset: 0x3c
	// Line 1450, Address: 0x37d0f0, Func Offset: 0x40
	// Line 1451, Address: 0x37d190, Func Offset: 0xe0
	// Line 1452, Address: 0x37d194, Func Offset: 0xe4
	// Line 1453, Address: 0x37d198, Func Offset: 0xe8
	// Line 1454, Address: 0x37d19c, Func Offset: 0xec
	// Line 1455, Address: 0x37d1a4, Func Offset: 0xf4
	// Line 1456, Address: 0x37d1ac, Func Offset: 0xfc
	// Line 1457, Address: 0x37d1b4, Func Offset: 0x104
	// Line 1458, Address: 0x37d1bc, Func Offset: 0x10c
	// Line 1459, Address: 0x37d1c4, Func Offset: 0x114
	// Line 1460, Address: 0x37d1cc, Func Offset: 0x11c
	// Line 1461, Address: 0x37d1d4, Func Offset: 0x124
	// Line 1462, Address: 0x37d1dc, Func Offset: 0x12c
	// Line 1463, Address: 0x37d1e4, Func Offset: 0x134
	// Line 1464, Address: 0x37d1ec, Func Offset: 0x13c
	// Line 1465, Address: 0x37d1f4, Func Offset: 0x144
	// Line 1466, Address: 0x37d1f8, Func Offset: 0x148
	// Line 1467, Address: 0x37d1fc, Func Offset: 0x14c
	// Line 1468, Address: 0x37d200, Func Offset: 0x150
	// Line 1469, Address: 0x37d204, Func Offset: 0x154
	// Line 1470, Address: 0x37d20c, Func Offset: 0x15c
	// Line 1471, Address: 0x37d214, Func Offset: 0x164
	// Line 1473, Address: 0x37d21c, Func Offset: 0x16c
	// Line 1474, Address: 0x37d220, Func Offset: 0x170
	// Line 1475, Address: 0x37d22c, Func Offset: 0x17c
	// Line 1476, Address: 0x37d230, Func Offset: 0x180
	// Line 1477, Address: 0x37d234, Func Offset: 0x184
	// Line 1478, Address: 0x37d238, Func Offset: 0x188
	// Line 1479, Address: 0x37d23c, Func Offset: 0x18c
	// Line 1480, Address: 0x37d254, Func Offset: 0x1a4
	// Line 1483, Address: 0x37d26c, Func Offset: 0x1bc
	// Line 1484, Address: 0x37d280, Func Offset: 0x1d0
	// Line 1487, Address: 0x37d288, Func Offset: 0x1d8
	// Line 1489, Address: 0x37d28c, Func Offset: 0x1dc
	// Line 1490, Address: 0x37d32c, Func Offset: 0x27c
	// Line 1491, Address: 0x37d330, Func Offset: 0x280
	// Line 1492, Address: 0x37d338, Func Offset: 0x288
	// Line 1493, Address: 0x37d340, Func Offset: 0x290
	// Line 1494, Address: 0x37d348, Func Offset: 0x298
	// Line 1495, Address: 0x37d350, Func Offset: 0x2a0
	// Line 1496, Address: 0x37d358, Func Offset: 0x2a8
	// Line 1497, Address: 0x37d360, Func Offset: 0x2b0
	// Line 1499, Address: 0x37d368, Func Offset: 0x2b8
	// Line 1500, Address: 0x37d36c, Func Offset: 0x2bc
	// Line 1502, Address: 0x37d374, Func Offset: 0x2c4
	// Line 1505, Address: 0x37d380, Func Offset: 0x2d0
	// Line 1507, Address: 0x37d394, Func Offset: 0x2e4
	// Line 1511, Address: 0x37d3a4, Func Offset: 0x2f4
	// Line 1512, Address: 0x37d3b8, Func Offset: 0x308
	// Line 1515, Address: 0x37d3c0, Func Offset: 0x310
	// Line 1517, Address: 0x37d3c4, Func Offset: 0x314
	// Line 1518, Address: 0x37d464, Func Offset: 0x3b4
	// Line 1522, Address: 0x37d468, Func Offset: 0x3b8
	// Line 1523, Address: 0x37d47c, Func Offset: 0x3cc
	// Line 1526, Address: 0x37d484, Func Offset: 0x3d4
	// Line 1528, Address: 0x37d488, Func Offset: 0x3d8
	// Line 1529, Address: 0x37d528, Func Offset: 0x478
	// Line 1531, Address: 0x37d530, Func Offset: 0x480
	// Func End, Address: 0x37d54c, Func Offset: 0x49c
}

// iParMgrRenderParSys_Twinkle__FP10tagxParSys
// Start address: 0x37d550
void iParMgrRenderParSys_Twinkle(tagxParSys* ps)
{
	float32 dy;
	float32 dx;
	float32 z;
	float32 y;
	float32 x;
	xPar* idx;
	// Line 1392, Address: 0x37d550, Func Offset: 0
	// Line 1393, Address: 0x37d55c, Func Offset: 0xc
	// Line 1396, Address: 0x37d560, Func Offset: 0x10
	// Line 1404, Address: 0x37d568, Func Offset: 0x18
	// Line 1406, Address: 0x37d580, Func Offset: 0x30
	// Line 1407, Address: 0x37d584, Func Offset: 0x34
	// Line 1410, Address: 0x37d58c, Func Offset: 0x3c
	// Line 1414, Address: 0x37d604, Func Offset: 0xb4
	// Line 1415, Address: 0x37d618, Func Offset: 0xc8
	// Line 1416, Address: 0x37d634, Func Offset: 0xe4
	// Line 1425, Address: 0x37d638, Func Offset: 0xe8
	// Line 1426, Address: 0x37d640, Func Offset: 0xf0
	// Line 1429, Address: 0x37d648, Func Offset: 0xf8
	// Func End, Address: 0x37d65c, Func Offset: 0x10c
}

// iParMgrRenderParSys_Sprite__FP10tagxParSys
// Start address: 0x37d660
void iParMgrRenderParSys_Sprite(tagxParSys* ps)
{
	Vector3D v[3];
	float32 z;
	float32 y;
	float32 x;
	xPar* idx;
	// Line 1321, Address: 0x37d660, Func Offset: 0
	// Line 1322, Address: 0x37d66c, Func Offset: 0xc
	// Line 1324, Address: 0x37d670, Func Offset: 0x10
	// Line 1354, Address: 0x37d678, Func Offset: 0x18
	// Line 1355, Address: 0x37d688, Func Offset: 0x28
	// Line 1367, Address: 0x37d698, Func Offset: 0x38
	// Line 1368, Address: 0x37d6a0, Func Offset: 0x40
	// Line 1369, Address: 0x37d6a8, Func Offset: 0x48
	// Line 1371, Address: 0x37d6b0, Func Offset: 0x50
	// Line 1372, Address: 0x37d6c0, Func Offset: 0x60
	// Line 1373, Address: 0x37d6d0, Func Offset: 0x70
	// Line 1375, Address: 0x37d6e0, Func Offset: 0x80
	// Line 1376, Address: 0x37d6f0, Func Offset: 0x90
	// Line 1377, Address: 0x37d700, Func Offset: 0xa0
	// Line 1379, Address: 0x37d710, Func Offset: 0xb0
	// Line 1382, Address: 0x37d724, Func Offset: 0xc4
	// Line 1383, Address: 0x37d72c, Func Offset: 0xcc
	// Line 1385, Address: 0x37d738, Func Offset: 0xd8
	// Func End, Address: 0x37d74c, Func Offset: 0xec
}

// iParMgrRenderParSys_DrawLight__FP10tagxParSys
// Start address: 0x37d750
void iParMgrRenderParSys_DrawLight(tagxParSys* ps)
{
	float32 plane;
	int32 zbit;
	int32 xbit;
	float32 a;
	float32 b;
	float32 g;
	float32 r;
	float32 hsize;
	tagiFloor* f;
	float32 zow;
	float32 xow;
	xPar* idx;
	// Line 1228, Address: 0x37d750, Func Offset: 0
	// Line 1230, Address: 0x37d76c, Func Offset: 0x1c
	// Line 1234, Address: 0x37d770, Func Offset: 0x20
	// Line 1235, Address: 0x37d814, Func Offset: 0xc4
	// Line 1237, Address: 0x37d8bc, Func Offset: 0x16c
	// Line 1241, Address: 0x37d8c4, Func Offset: 0x174
	// Line 1242, Address: 0x37d8d4, Func Offset: 0x184
	// Line 1244, Address: 0x37d8f0, Func Offset: 0x1a0
	// Line 1254, Address: 0x37d8f8, Func Offset: 0x1a8
	// Line 1256, Address: 0x37d910, Func Offset: 0x1c0
	// Line 1257, Address: 0x37d914, Func Offset: 0x1c4
	// Line 1261, Address: 0x37d91c, Func Offset: 0x1cc
	// Line 1262, Address: 0x37d938, Func Offset: 0x1e8
	// Line 1264, Address: 0x37d954, Func Offset: 0x204
	// Line 1265, Address: 0x37d968, Func Offset: 0x218
	// Line 1267, Address: 0x37d978, Func Offset: 0x228
	// Line 1268, Address: 0x37d994, Func Offset: 0x244
	// Line 1270, Address: 0x37d998, Func Offset: 0x248
	// Line 1272, Address: 0x37d9a0, Func Offset: 0x250
	// Line 1275, Address: 0x37d9a8, Func Offset: 0x258
	// Line 1278, Address: 0x37da14, Func Offset: 0x2c4
	// Line 1280, Address: 0x37da34, Func Offset: 0x2e4
	// Line 1281, Address: 0x37da38, Func Offset: 0x2e8
	// Line 1283, Address: 0x37da40, Func Offset: 0x2f0
	// Line 1285, Address: 0x37da48, Func Offset: 0x2f8
	// Line 1287, Address: 0x37da50, Func Offset: 0x300
	// Line 1289, Address: 0x37da58, Func Offset: 0x308
	// Line 1291, Address: 0x37da60, Func Offset: 0x310
	// Line 1293, Address: 0x37da68, Func Offset: 0x318
	// Line 1297, Address: 0x37da70, Func Offset: 0x320
	// Line 1298, Address: 0x37dab4, Func Offset: 0x364
	// Line 1299, Address: 0x37daf8, Func Offset: 0x3a8
	// Line 1309, Address: 0x37db3c, Func Offset: 0x3ec
	// Line 1310, Address: 0x37db44, Func Offset: 0x3f4
	// Line 1313, Address: 0x37db50, Func Offset: 0x400
	// Func End, Address: 0x37db74, Func Offset: 0x424
}

// iParMgrRenderParSys_ExpandingSphere__FP10tagxParSys
// Start address: 0x37db80
void iParMgrRenderParSys_ExpandingSphere(tagxParSys* ps)
{
	float32 ca3;
	float32 sa3;
	float32 ca2;
	float32 sa2;
	float32 ca1;
	float32 sa1;
	float32 r2;
	float32 r1;
	float32 a3;
	float32 a2;
	float32 a1;
	float32 h2;
	float32 h1;
	float32 radius;
	float32 alpha;
	float32 blue;
	float32 green;
	float32 red;
	_iParSphereMode* o;
	xPar* p;
	uint32 j;
	int32 i;
	// Line 1098, Address: 0x37db80, Func Offset: 0
	// Line 1115, Address: 0x37dbc8, Func Offset: 0x48
	// Line 1116, Address: 0x37dbcc, Func Offset: 0x4c
	// Line 1121, Address: 0x37dbd4, Func Offset: 0x54
	// Line 1123, Address: 0x37dbec, Func Offset: 0x6c
	// Line 1124, Address: 0x37dbf0, Func Offset: 0x70
	// Line 1127, Address: 0x37dbf8, Func Offset: 0x78
	// Line 1128, Address: 0x37dca0, Func Offset: 0x120
	// Line 1135, Address: 0x37dcbc, Func Offset: 0x13c
	// Line 1136, Address: 0x37dccc, Func Offset: 0x14c
	// Line 1137, Address: 0x37dd74, Func Offset: 0x1f4
	// Line 1138, Address: 0x37de1c, Func Offset: 0x29c
	// Line 1139, Address: 0x37dec4, Func Offset: 0x344
	// Line 1140, Address: 0x37decc, Func Offset: 0x34c
	// Line 1141, Address: 0x37df38, Func Offset: 0x3b8
	// Line 1142, Address: 0x37dfa4, Func Offset: 0x424
	// Line 1144, Address: 0x37e010, Func Offset: 0x490
	// Line 1145, Address: 0x37e020, Func Offset: 0x4a0
	// Line 1146, Address: 0x37e030, Func Offset: 0x4b0
	// Line 1147, Address: 0x37e040, Func Offset: 0x4c0
	// Line 1148, Address: 0x37e050, Func Offset: 0x4d0
	// Line 1149, Address: 0x37e060, Func Offset: 0x4e0
	// Line 1152, Address: 0x37e070, Func Offset: 0x4f0
	// Line 1154, Address: 0x37e0a4, Func Offset: 0x524
	// Line 1156, Address: 0x37e0b0, Func Offset: 0x530
	// Line 1157, Address: 0x37e114, Func Offset: 0x594
	// Line 1163, Address: 0x37e17c, Func Offset: 0x5fc
	// Line 1164, Address: 0x37e1a4, Func Offset: 0x624
	// Line 1165, Address: 0x37e1cc, Func Offset: 0x64c
	// Line 1166, Address: 0x37e1f4, Func Offset: 0x674
	// Line 1167, Address: 0x37e218, Func Offset: 0x698
	// Line 1168, Address: 0x37e220, Func Offset: 0x6a0
	// Line 1169, Address: 0x37e228, Func Offset: 0x6a8
	// Line 1170, Address: 0x37e230, Func Offset: 0x6b0
	// Line 1172, Address: 0x37e238, Func Offset: 0x6b8
	// Line 1173, Address: 0x37e23c, Func Offset: 0x6bc
	// Line 1174, Address: 0x37e244, Func Offset: 0x6c4
	// Line 1175, Address: 0x37e24c, Func Offset: 0x6cc
	// Line 1176, Address: 0x37e250, Func Offset: 0x6d0
	// Line 1177, Address: 0x37e258, Func Offset: 0x6d8
	// Line 1179, Address: 0x37e260, Func Offset: 0x6e0
	// Line 1187, Address: 0x37e26c, Func Offset: 0x6ec
	// Line 1189, Address: 0x37e314, Func Offset: 0x794
	// Line 1190, Address: 0x37e33c, Func Offset: 0x7bc
	// Line 1192, Address: 0x37e360, Func Offset: 0x7e0
	// Line 1193, Address: 0x37e36c, Func Offset: 0x7ec
	// Line 1194, Address: 0x37e374, Func Offset: 0x7f4
	// Line 1195, Address: 0x37e380, Func Offset: 0x800
	// Line 1196, Address: 0x37e38c, Func Offset: 0x80c
	// Line 1197, Address: 0x37e394, Func Offset: 0x814
	// Line 1200, Address: 0x37e3a0, Func Offset: 0x820
	// Line 1201, Address: 0x37e3e4, Func Offset: 0x864
	// Line 1202, Address: 0x37e428, Func Offset: 0x8a8
	// Line 1203, Address: 0x37e46c, Func Offset: 0x8ec
	// Line 1211, Address: 0x37e4b0, Func Offset: 0x930
	// Line 1212, Address: 0x37e4bc, Func Offset: 0x93c
	// Line 1213, Address: 0x37e4c8, Func Offset: 0x948
	// Line 1214, Address: 0x37e4e0, Func Offset: 0x960
	// Line 1216, Address: 0x37e52c, Func Offset: 0x9ac
	// Line 1217, Address: 0x37e534, Func Offset: 0x9b4
	// Line 1218, Address: 0x37e540, Func Offset: 0x9c0
	// Func End, Address: 0x37e590, Func Offset: 0xa10
}

// iParMgrRenderParSys_ExpandingRing__FP10tagxParSys
// Start address: 0x37e590
void iParMgrRenderParSys_ExpandingRing(tagxParSys* ps)
{
	float32 cosval;
	float32 sinval;
	float32 angle;
	float32 tilt;
	float32 height;
	float32 oradius;
	float32 radius;
	float32 alpha;
	float32 blue;
	float32 green;
	float32 red;
	_iParRingMode* m;
	xPar* p;
	int32 i;
	// Line 894, Address: 0x37e590, Func Offset: 0
	// Line 907, Address: 0x37e5dc, Func Offset: 0x4c
	// Line 908, Address: 0x37e5e0, Func Offset: 0x50
	// Line 914, Address: 0x37e5e8, Func Offset: 0x58
	// Line 916, Address: 0x37e600, Func Offset: 0x70
	// Line 917, Address: 0x37e604, Func Offset: 0x74
	// Line 919, Address: 0x37e60c, Func Offset: 0x7c
	// Line 921, Address: 0x37e6b8, Func Offset: 0x128
	// Line 925, Address: 0x37e6d4, Func Offset: 0x144
	// Line 926, Address: 0x37e708, Func Offset: 0x178
	// Line 928, Address: 0x37e73c, Func Offset: 0x1ac
	// Line 929, Address: 0x37e76c, Func Offset: 0x1dc
	// Line 930, Address: 0x37e7d4, Func Offset: 0x244
	// Line 932, Address: 0x37e81c, Func Offset: 0x28c
	// Line 933, Address: 0x37e820, Func Offset: 0x290
	// Line 934, Address: 0x37e824, Func Offset: 0x294
	// Line 935, Address: 0x37e830, Func Offset: 0x2a0
	// Line 936, Address: 0x37e834, Func Offset: 0x2a4
	// Line 937, Address: 0x37e83c, Func Offset: 0x2ac
	// Line 939, Address: 0x37e848, Func Offset: 0x2b8
	// Line 943, Address: 0x37e854, Func Offset: 0x2c4
	// Line 945, Address: 0x37e898, Func Offset: 0x308
	// Line 946, Address: 0x37e8c0, Func Offset: 0x330
	// Line 948, Address: 0x37e8e4, Func Offset: 0x354
	// Line 949, Address: 0x37e8f4, Func Offset: 0x364
	// Line 950, Address: 0x37e8f8, Func Offset: 0x368
	// Line 951, Address: 0x37e908, Func Offset: 0x378
	// Line 952, Address: 0x37e918, Func Offset: 0x388
	// Line 953, Address: 0x37e924, Func Offset: 0x394
	// Line 955, Address: 0x37e934, Func Offset: 0x3a4
	// Line 956, Address: 0x37e9e8, Func Offset: 0x458
	// Line 957, Address: 0x37ea9c, Func Offset: 0x50c
	// Line 958, Address: 0x37eb50, Func Offset: 0x5c0
	// Line 959, Address: 0x37eb58, Func Offset: 0x5c8
	// Line 960, Address: 0x37eb60, Func Offset: 0x5d0
	// Line 963, Address: 0x37eb68, Func Offset: 0x5d8
	// Line 964, Address: 0x37ebac, Func Offset: 0x61c
	// Line 965, Address: 0x37ebf0, Func Offset: 0x660
	// Line 966, Address: 0x37ec34, Func Offset: 0x6a4
	// Line 983, Address: 0x37ec78, Func Offset: 0x6e8
	// Line 984, Address: 0x37ec84, Func Offset: 0x6f4
	// Line 985, Address: 0x37ec90, Func Offset: 0x700
	// Line 987, Address: 0x37eca8, Func Offset: 0x718
	// Line 988, Address: 0x37ecb0, Func Offset: 0x720
	// Line 990, Address: 0x37ecb8, Func Offset: 0x728
	// Func End, Address: 0x37ed0c, Func Offset: 0x77c
}

// iParMgrRenderParSys_DrawFlatPoly__FP10tagxParSys
// Start address: 0x37ed10
void iParMgrRenderParSys_DrawFlatPoly(tagxParSys* ps)
{
	float32 a;
	float32 b;
	float32 g;
	float32 r;
	float32 hsize;
	xPar* idx;
	// Line 580, Address: 0x37ed10, Func Offset: 0
	// Line 582, Address: 0x37ed1c, Func Offset: 0xc
	// Line 585, Address: 0x37ed20, Func Offset: 0x10
	// Line 593, Address: 0x37ed28, Func Offset: 0x18
	// Line 595, Address: 0x37ed40, Func Offset: 0x30
	// Line 596, Address: 0x37ed44, Func Offset: 0x34
	// Line 599, Address: 0x37ed4c, Func Offset: 0x3c
	// Line 601, Address: 0x37ed50, Func Offset: 0x40
	// Line 602, Address: 0x37ed58, Func Offset: 0x48
	// Line 603, Address: 0x37ed5c, Func Offset: 0x4c
	// Line 606, Address: 0x37ed64, Func Offset: 0x54
	// Line 609, Address: 0x37edd0, Func Offset: 0xc0
	// Line 611, Address: 0x37edf0, Func Offset: 0xe0
	// Line 612, Address: 0x37edf4, Func Offset: 0xe4
	// Line 614, Address: 0x37edfc, Func Offset: 0xec
	// Line 615, Address: 0x37ee04, Func Offset: 0xf4
	// Line 616, Address: 0x37ee08, Func Offset: 0xf8
	// Line 618, Address: 0x37ee10, Func Offset: 0x100
	// Line 619, Address: 0x37ee18, Func Offset: 0x108
	// Line 620, Address: 0x37ee1c, Func Offset: 0x10c
	// Line 622, Address: 0x37ee24, Func Offset: 0x114
	// Line 623, Address: 0x37ee2c, Func Offset: 0x11c
	// Line 624, Address: 0x37ee30, Func Offset: 0x120
	// Line 628, Address: 0x37ee38, Func Offset: 0x128
	// Line 629, Address: 0x37ee7c, Func Offset: 0x16c
	// Line 630, Address: 0x37eec0, Func Offset: 0x1b0
	// Line 640, Address: 0x37ef04, Func Offset: 0x1f4
	// Line 641, Address: 0x37ef0c, Func Offset: 0x1fc
	// Line 644, Address: 0x37ef18, Func Offset: 0x208
	// Func End, Address: 0x37ef2c, Func Offset: 0x21c
}

// iParMgrRenderParSys_DrawRegionRain__FP10tagxParSys
// Start address: 0x37ef30
void iParMgrRenderParSys_DrawRegionRain(tagxParSys* ps)
{
	Vector3D v[3];
	float32 a;
	float32 b;
	float32 g;
	float32 r;
	xPar* idx;
	// Line 456, Address: 0x37ef30, Func Offset: 0
	// Line 457, Address: 0x37ef3c, Func Offset: 0xc
	// Line 465, Address: 0x37ef40, Func Offset: 0x10
	// Line 475, Address: 0x37ef48, Func Offset: 0x18
	// Line 476, Address: 0x37ef58, Func Offset: 0x28
	// Line 488, Address: 0x37ef68, Func Offset: 0x38
	// Line 489, Address: 0x37ef70, Func Offset: 0x40
	// Line 490, Address: 0x37ef78, Func Offset: 0x48
	// Line 492, Address: 0x37ef80, Func Offset: 0x50
	// Line 493, Address: 0x37ef98, Func Offset: 0x68
	// Line 494, Address: 0x37efb8, Func Offset: 0x88
	// Line 496, Address: 0x37efd0, Func Offset: 0xa0
	// Line 497, Address: 0x37efe8, Func Offset: 0xb8
	// Line 498, Address: 0x37f000, Func Offset: 0xd0
	// Line 500, Address: 0x37f018, Func Offset: 0xe8
	// Line 512, Address: 0x37f02c, Func Offset: 0xfc
	// Line 513, Address: 0x37f034, Func Offset: 0x104
	// Line 516, Address: 0x37f040, Func Offset: 0x110
	// Func End, Address: 0x37f054, Func Offset: 0x124
}

// iParMgrRenderParSys_DrawBulletStreak__FP10tagxParSys
// Start address: 0x37f060
void iParMgrRenderParSys_DrawBulletStreak(tagxParSys* ps)
{
	float32 a;
	float32 b;
	float32 g;
	float32 r;
	xPar* idx;
	// Line 394, Address: 0x37f060, Func Offset: 0
	// Line 395, Address: 0x37f06c, Func Offset: 0xc
	// Line 400, Address: 0x37f070, Func Offset: 0x10
	// Line 407, Address: 0x37f078, Func Offset: 0x18
	// Line 409, Address: 0x37f090, Func Offset: 0x30
	// Line 410, Address: 0x37f094, Func Offset: 0x34
	// Line 414, Address: 0x37f09c, Func Offset: 0x3c
	// Line 415, Address: 0x37f114, Func Offset: 0xb4
	// Line 417, Address: 0x37f134, Func Offset: 0xd4
	// Line 418, Address: 0x37f138, Func Offset: 0xd8
	// Line 421, Address: 0x37f140, Func Offset: 0xe0
	// Line 422, Address: 0x37f14c, Func Offset: 0xec
	// Line 423, Address: 0x37f158, Func Offset: 0xf8
	// Line 425, Address: 0x37f164, Func Offset: 0x104
	// Line 426, Address: 0x37f17c, Func Offset: 0x11c
	// Line 427, Address: 0x37f194, Func Offset: 0x134
	// Line 430, Address: 0x37f198, Func Offset: 0x138
	// Line 431, Address: 0x37f1dc, Func Offset: 0x17c
	// Line 442, Address: 0x37f220, Func Offset: 0x1c0
	// Line 443, Address: 0x37f228, Func Offset: 0x1c8
	// Line 447, Address: 0x37f230, Func Offset: 0x1d0
	// Func End, Address: 0x37f244, Func Offset: 0x1e4
}

// iParMgrRenderParSys_TwoTriStrip__FP10tagxParSys
// Start address: 0x37f250
void iParMgrRenderParSys_TwoTriStrip(tagxParSys* ps)
{
	float32 a;
	float32 b;
	float32 g;
	float32 r;
	float32 hsize;
	xPar* idx;
	// Line 324, Address: 0x37f250, Func Offset: 0
	// Line 326, Address: 0x37f260, Func Offset: 0x10
	// Line 331, Address: 0x37f264, Func Offset: 0x14
	// Line 333, Address: 0x37f26c, Func Offset: 0x1c
	// Line 339, Address: 0x37f280, Func Offset: 0x30
	// Line 341, Address: 0x37f298, Func Offset: 0x48
	// Line 342, Address: 0x37f29c, Func Offset: 0x4c
	// Line 345, Address: 0x37f2a4, Func Offset: 0x54
	// Line 346, Address: 0x37f2ac, Func Offset: 0x5c
	// Line 347, Address: 0x37f2b4, Func Offset: 0x64
	// Line 351, Address: 0x37f2b8, Func Offset: 0x68
	// Line 352, Address: 0x37f324, Func Offset: 0xd4
	// Line 354, Address: 0x37f344, Func Offset: 0xf4
	// Line 355, Address: 0x37f348, Func Offset: 0xf8
	// Line 358, Address: 0x37f350, Func Offset: 0x100
	// Line 359, Address: 0x37f358, Func Offset: 0x108
	// Line 360, Address: 0x37f360, Func Offset: 0x110
	// Line 362, Address: 0x37f364, Func Offset: 0x114
	// Line 363, Address: 0x37f368, Func Offset: 0x118
	// Line 364, Address: 0x37f370, Func Offset: 0x120
	// Line 366, Address: 0x37f374, Func Offset: 0x124
	// Line 367, Address: 0x37f37c, Func Offset: 0x12c
	// Line 368, Address: 0x37f384, Func Offset: 0x134
	// Line 370, Address: 0x37f388, Func Offset: 0x138
	// Line 371, Address: 0x37f3cc, Func Offset: 0x17c
	// Line 372, Address: 0x37f410, Func Offset: 0x1c0
	// Line 383, Address: 0x37f454, Func Offset: 0x204
	// Line 384, Address: 0x37f45c, Func Offset: 0x20c
	// Line 387, Address: 0x37f468, Func Offset: 0x218
	// Func End, Address: 0x37f480, Func Offset: 0x230
}

// iParComputeUnitInfo__FP17tagParCmd_Texture
// Start address: 0x37f480
void iParComputeUnitInfo(tagParCmd_Texture* d)
{
	// Line 221, Address: 0x37f480, Func Offset: 0
	// Line 222, Address: 0x37f490, Func Offset: 0x10
	// Line 224, Address: 0x37f530, Func Offset: 0xb0
	// Line 227, Address: 0x37f55c, Func Offset: 0xdc
	// Line 228, Address: 0x37f564, Func Offset: 0xe4
	// Line 229, Address: 0x37f56c, Func Offset: 0xec
	// Line 230, Address: 0x37f574, Func Offset: 0xf4
	// Line 232, Address: 0x37f57c, Func Offset: 0xfc
	// Line 233, Address: 0x37f584, Func Offset: 0x104
	// Line 234, Address: 0x37f58c, Func Offset: 0x10c
	// Line 235, Address: 0x37f594, Func Offset: 0x114
	// Line 238, Address: 0x37f59c, Func Offset: 0x11c
	// Line 239, Address: 0x37f5a4, Func Offset: 0x124
	// Line 240, Address: 0x37f5ac, Func Offset: 0x12c
	// Line 241, Address: 0x37f5b4, Func Offset: 0x134
	// Line 244, Address: 0x37f5bc, Func Offset: 0x13c
	// Line 245, Address: 0x37f5c4, Func Offset: 0x144
	// Line 246, Address: 0x37f5cc, Func Offset: 0x14c
	// Line 247, Address: 0x37f5d4, Func Offset: 0x154
	// Line 250, Address: 0x37f5dc, Func Offset: 0x15c
	// Line 251, Address: 0x37f5e4, Func Offset: 0x164
	// Line 252, Address: 0x37f5ec, Func Offset: 0x16c
	// Line 253, Address: 0x37f5f4, Func Offset: 0x174
	// Line 256, Address: 0x37f5fc, Func Offset: 0x17c
	// Line 257, Address: 0x37f604, Func Offset: 0x184
	// Line 258, Address: 0x37f60c, Func Offset: 0x18c
	// Line 259, Address: 0x37f614, Func Offset: 0x194
	// Line 262, Address: 0x37f61c, Func Offset: 0x19c
	// Line 263, Address: 0x37f624, Func Offset: 0x1a4
	// Line 264, Address: 0x37f62c, Func Offset: 0x1ac
	// Line 265, Address: 0x37f634, Func Offset: 0x1b4
	// Line 268, Address: 0x37f63c, Func Offset: 0x1bc
	// Line 269, Address: 0x37f644, Func Offset: 0x1c4
	// Line 270, Address: 0x37f64c, Func Offset: 0x1cc
	// Line 271, Address: 0x37f654, Func Offset: 0x1d4
	// Line 274, Address: 0x37f65c, Func Offset: 0x1dc
	// Line 275, Address: 0x37f664, Func Offset: 0x1e4
	// Line 276, Address: 0x37f66c, Func Offset: 0x1ec
	// Line 277, Address: 0x37f674, Func Offset: 0x1f4
	// Line 280, Address: 0x37f67c, Func Offset: 0x1fc
	// Line 281, Address: 0x37f684, Func Offset: 0x204
	// Line 282, Address: 0x37f68c, Func Offset: 0x20c
	// Line 283, Address: 0x37f694, Func Offset: 0x214
	// Line 286, Address: 0x37f69c, Func Offset: 0x21c
	// Line 287, Address: 0x37f6a4, Func Offset: 0x224
	// Line 288, Address: 0x37f6ac, Func Offset: 0x22c
	// Line 289, Address: 0x37f6b4, Func Offset: 0x234
	// Line 292, Address: 0x37f6bc, Func Offset: 0x23c
	// Line 293, Address: 0x37f6c4, Func Offset: 0x244
	// Line 294, Address: 0x37f6cc, Func Offset: 0x24c
	// Line 295, Address: 0x37f6d4, Func Offset: 0x254
	// Line 298, Address: 0x37f6dc, Func Offset: 0x25c
	// Line 299, Address: 0x37f6e4, Func Offset: 0x264
	// Line 300, Address: 0x37f6ec, Func Offset: 0x26c
	// Line 301, Address: 0x37f6f4, Func Offset: 0x274
	// Line 304, Address: 0x37f6fc, Func Offset: 0x27c
	// Line 305, Address: 0x37f710, Func Offset: 0x290
	// Line 310, Address: 0x37f718, Func Offset: 0x298
	// Line 311, Address: 0x37f728, Func Offset: 0x2a8
	// Line 312, Address: 0x37f774, Func Offset: 0x2f4
	// Line 313, Address: 0x37f7cc, Func Offset: 0x34c
	// Func End, Address: 0x37f7e0, Func Offset: 0x360
}

// iParMgrRender__Fv
// Start address: 0x37f7e0
void iParMgrRender()
{
	float32 m[16];
	int32 i;
	// Line 183, Address: 0x37f7e0, Func Offset: 0
	// Line 191, Address: 0x37f7ec, Func Offset: 0xc
	// Line 194, Address: 0x37f7f8, Func Offset: 0x18
	// Line 196, Address: 0x37f81c, Func Offset: 0x3c
	// Line 200, Address: 0x37f838, Func Offset: 0x58
	// Line 201, Address: 0x37f844, Func Offset: 0x64
	// Line 203, Address: 0x37f850, Func Offset: 0x70
	// Line 205, Address: 0x37f884, Func Offset: 0xa4
	// Line 207, Address: 0x37f888, Func Offset: 0xa8
	// Line 208, Address: 0x37f89c, Func Offset: 0xbc
	// Func End, Address: 0x37f8b0, Func Offset: 0xd0
}

// iParMgrInit__Fv
// Start address: 0x37f8b0
void iParMgrInit()
{
	uint32 assetID;
	int32 i;
	// Line 73, Address: 0x37f8b0, Func Offset: 0
	// Line 79, Address: 0x37f8bc, Func Offset: 0xc
	// Line 81, Address: 0x37f8c8, Func Offset: 0x18
	// Line 82, Address: 0x37f8d0, Func Offset: 0x20
	// Line 83, Address: 0x37f8ec, Func Offset: 0x3c
	// Line 86, Address: 0x37f8fc, Func Offset: 0x4c
	// Line 89, Address: 0x37f908, Func Offset: 0x58
	// Line 90, Address: 0x37f914, Func Offset: 0x64
	// Line 92, Address: 0x37f954, Func Offset: 0xa4
	// Line 97, Address: 0x37f95c, Func Offset: 0xac
	// Line 100, Address: 0x37f968, Func Offset: 0xb8
	// Line 103, Address: 0x37f990, Func Offset: 0xe0
	// Line 104, Address: 0x37f9ac, Func Offset: 0xfc
	// Line 107, Address: 0x37f9b4, Func Offset: 0x104
	// Line 108, Address: 0x37f9d0, Func Offset: 0x120
	// Line 111, Address: 0x37f9d8, Func Offset: 0x128
	// Line 112, Address: 0x37f9f4, Func Offset: 0x144
	// Line 115, Address: 0x37f9fc, Func Offset: 0x14c
	// Line 116, Address: 0x37fa18, Func Offset: 0x168
	// Line 119, Address: 0x37fa20, Func Offset: 0x170
	// Line 120, Address: 0x37fa3c, Func Offset: 0x18c
	// Line 125, Address: 0x37fa44, Func Offset: 0x194
	// Line 126, Address: 0x37fa60, Func Offset: 0x1b0
	// Line 129, Address: 0x37fa68, Func Offset: 0x1b8
	// Line 130, Address: 0x37fa84, Func Offset: 0x1d4
	// Line 146, Address: 0x37fa8c, Func Offset: 0x1dc
	// Line 147, Address: 0x37faa8, Func Offset: 0x1f8
	// Line 152, Address: 0x37fab0, Func Offset: 0x200
	// Line 153, Address: 0x37facc, Func Offset: 0x21c
	// Line 157, Address: 0x37fad4, Func Offset: 0x224
	// Line 158, Address: 0x37faf0, Func Offset: 0x240
	// Line 162, Address: 0x37faf8, Func Offset: 0x248
	// Line 163, Address: 0x37fb14, Func Offset: 0x264
	// Line 168, Address: 0x37fb1c, Func Offset: 0x26c
	// Line 171, Address: 0x37fb38, Func Offset: 0x288
	// Line 172, Address: 0x37fb4c, Func Offset: 0x29c
	// Func End, Address: 0x37fb60, Func Offset: 0x2b0
}

