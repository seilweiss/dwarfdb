typedef struct iDisplayCamera;
typedef struct _RwTexCoords;
typedef struct _rxHeapSuperBlockDescriptor;
typedef struct _RwFrame;
typedef struct _RpClump;
typedef struct _tagxEnv;
typedef struct iTriggerResource;
typedef struct _RpSkinAnim;
typedef struct compressed_pair_imp;
typedef struct _RwTexture;
typedef struct _RxClusterRef;
typedef struct _RxPacket;
typedef enum _RwTextureAddressMode;
typedef struct zCharacter;
typedef struct iConditionResource;
typedef enum _RxClusterValidityReq;
typedef struct _RxPipeline;
typedef struct _RwRaster;
typedef struct xTrigger;
typedef struct __vector_imp_0;
typedef enum _RpAnimType;
typedef struct _RpSector;
typedef struct iConditionRuntime;
typedef struct _RxClusterDefinition;
typedef struct _RxOutputSpec;
typedef struct _RxPipelineNode;
typedef struct _rwResEntryTag;
typedef struct _RwStreamFile;
typedef struct Vector3D;
typedef struct compile_assert;
typedef enum _rpWorldRenderOrder;
typedef struct _RpSkinFrame;
typedef struct _RxHeap;
typedef struct _rxHeapBlockHeader;
typedef struct xEntryPoint;
typedef struct xRule;
typedef struct _rxHeapFreeBlock;
typedef struct _FCinfo;
typedef struct iEntryPointResource;
typedef struct _RxPipelineNodeTopSortData;
typedef struct _RpPolygon;
typedef struct iRuleResource;
typedef struct _RwMatrix;
typedef struct _iEntryPointRuntime;
typedef struct _RtQuat;
typedef struct tagiFloorTri;
typedef struct _RpTriangle;
typedef struct xScene;
typedef struct xAnimMgr;
typedef struct _RxPipelineNodeParam;
typedef struct _RwRGBA;
typedef struct _RxPipelineCluster;
typedef enum _rxEmbeddedPacketState;
typedef struct _p2Geom;
typedef struct _RwV3d;
typedef struct _RpWorldSector;
typedef struct tagxPhysicsObject;
typedef struct _rpAtomic;
typedef struct _RxNodeDefinition;
typedef struct xAnimData;
typedef enum _RxClusterValid;
typedef struct tagXStreamMDSDirectory;
typedef struct xCamera;
typedef struct _RpMeshHeader;
typedef struct _RpSkinBoneInfo;
typedef struct tagP2Mesh;
typedef struct _RwSurfaceProperties;
typedef struct __vector_imp_1;
typedef struct xLight;
typedef struct _RpMorphTarget;
typedef struct compressed_pair;
typedef struct vector_0;
typedef struct iLightResource;
typedef struct _rpInterpolator;
typedef struct _RpWorld;
typedef struct _RwObjectHasFrame;
typedef struct _iLightRuntime;
typedef struct p2Camera;
typedef enum _RwTextureFilterMode;
typedef struct tagiFloor;
typedef struct allocator;
typedef struct tagP2VERTEX;
typedef struct xAction;
typedef struct _RpCollSector;
typedef struct _RxPipelineRequiresCluster;
typedef struct _RpAnimSequence;
typedef struct _RpSkinSkeleton;
typedef struct tagP2MeshVertex;
typedef struct tagP2Weight;
typedef struct iMarkerResource;
typedef struct vector_1;
typedef struct xGameObj;
typedef struct xMarker;
typedef struct xCondition;
typedef struct _rxReq;
typedef struct _RwLLLink;
typedef struct __vector_pod;
typedef struct XStreamHeader;
typedef struct xGameCharacter;
typedef struct iAnimData;
typedef struct _RwObject;
typedef struct _RpMaterialList;
typedef struct iAnimInstance;
typedef struct xNavLink;
typedef struct p2CameraVersion;
typedef struct _RwStreamCustom;
typedef struct _RpMaterial;
typedef struct _anon0;
typedef struct _RwMatrixWeights;
typedef struct _rpAnimInterpolator;
typedef struct _tagiEnvRuntime;
typedef struct _RwStream;
typedef struct _RwTexDictionary;
typedef struct Vector4D;
typedef struct _RpSkin;
typedef enum _RwStreamType;
typedef struct iCameraResource;
typedef struct tagiMesh;
typedef struct _RpVertexNormal;
typedef struct tagXStreamDirectoryEntry;
typedef struct _RxIoSpec;
typedef struct xNavPoint;
typedef struct _RwSphere;
typedef struct _RpGeometry;
typedef struct _RxNodeMethods;
typedef struct _RwStreamUnion;
typedef enum _RxClusterForcePresent;
typedef struct iActionRuntime;
typedef enum _RwStreamAccessType;
typedef struct _RwBBox;
typedef struct xFSMData;
typedef enum _RxNodeDefEditable;
typedef struct _RxClusterUnion;
typedef struct iActionResource;
typedef struct _SkinData;
typedef struct _RxCluster;
typedef struct _RwLinkList;
typedef struct _RwStreamMemory;
typedef struct _iRenderEffects;
typedef struct xModule;
typedef struct tagCollideInfo;

typedef void(*type_9)(_rwResEntryTag*);
typedef int32(*type_14)(_RxPipelineNode*, _RxPipelineNodeParam*);
typedef int32(*type_15)(_RxNodeDefinition*);
typedef int32(*type_17)(void*);
typedef _RpWorldSector*(*type_18)(_RpWorldSector*);
typedef void(*type_20)(_RxNodeDefinition*);
typedef uint32(*type_22)(void*, void*, uint32);
typedef int32(*type_24)(_RxPipelineNode*);
typedef _RpSkinSkeleton*(*type_26)(_RpSkinSkeleton*, void*);
typedef void(*type_27)(_RxPipelineNode*);
typedef _RwObjectHasFrame*(*type_28)(_RwObjectHasFrame*);
typedef int32(*type_29)(void*, void*, uint32);
typedef int32(*type_31)(_RxPipelineNode*, _RxPipeline*);
typedef int32(*type_33)(void*, uint32);
typedef _RwFrame*(*type_34)(_RwFrame*, void*);
typedef _rpAtomic*(*type_35)(_rpAtomic*, void*);
typedef uint32(*type_38)(_RxPipelineNode*, uint32, uint32, void*);
typedef _RpClump*(*type_40)(_RpClump*, void*);
typedef _rpAtomic*(*type_43)(_rpAtomic*, void*);
typedef _rpAtomic*(*type_44)(_rpAtomic*, void*);
typedef _rpAtomic*(*type_45)(_rpAtomic*);
typedef _RpAnimSequence*(*type_51)(_RpAnimSequence*, void*);

typedef int8 type_0[32];
typedef uint8 type_1[4];
typedef uint8 type_2[4];
typedef iTriggerResource* type_3[20];
typedef uint8 type_4[4];
typedef iTriggerResource* type_5[20];
typedef Vector3D type_6[4];
typedef iTriggerResource* type_7[20];
typedef iTriggerResource* type_8[20];
typedef uint16 type_10[3];
typedef uint16 type_11[3];
typedef uint16 type_12[3];
typedef iTriggerResource* type_13[20];
typedef iTriggerResource* type_16[20];
typedef tagXStreamDirectoryEntry type_19[1000];
typedef iTriggerResource* type_21[20];
typedef uint32 type_23[4];
typedef iTriggerResource* type_25[20];
typedef iTriggerResource* type_30[20];
typedef iTriggerResource* type_32[20];
typedef iTriggerResource* type_36[20];
typedef float32 type_37[3];
typedef iLightResource type_39[2];
typedef _RxCluster type_41[1];
typedef int8 type_42[2048];
typedef int8 type_46[32];
typedef Vector3D type_47[4];
typedef p2CameraVersion type_48[5];
typedef int8 type_49[32];
typedef int8 type_50[128];
typedef iTriggerResource* type_52[20];
typedef uint16 type_53[3];
typedef uint8 type_54[4];
typedef uint8 type_55[10];

struct iDisplayCamera
{
	Vector3D m_pos;
	Vector3D m_rot;
	float32 m_fov;
};

struct _RwTexCoords
{
	float32 u;
	float32 v;
};

struct _rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	_rxHeapSuperBlockDescriptor* next;
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

struct _RpClump
{
	_RwObject object;
	_RwLinkList atomicList;
	_RwLLLink inWorldLink;
	_RpClump*(*callback)(_RpClump*, void*);
	uint16 renderFrame;
};

struct _tagxEnv
{
	_tagiEnvRuntime* m_runtime;
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

struct _RpSkinAnim
{
	int32 numFrames;
	int32 flags;
	float32 duration;
	_RpSkinFrame* pFrames;
};

struct compressed_pair_imp : allocator
{
	uint32 second_;
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

enum _RwTextureAddressMode
{
	rwTEXTUREADDRESSNATEXTUREADDRESS,
	rwTEXTUREADDRESSWRAP,
	rwTEXTUREADDRESSMIRROR,
	rwTEXTUREADDRESSCLAMP,
	rwTEXTUREADDRESSBORDER,
	rwTEXTUREADDRESSMODEFORCEENUMSIZEINT = 0x7fffffff
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

	void SetPlayerFlag(int32 val);
	void getHurt();
	void MoveForward(float32 delta);
	void Turn(float32 delta);
	void Jump();
	void setState(int32 state);
	void nextFrame();
	void StoreCurrentHeight();
	void calcFloorHeight();
	void restart();
	void init(int8* filename);
	void SetCurrentAnim(xAnimData* pAnimData, uint32 aid);
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

enum _RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
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

struct xTrigger
{
	iTriggerResource* m_resource;
};

struct __vector_imp_0 : __vector_pod, compile_assert
{
};

enum _RpAnimType
{
	rpERR,
	rpTRANSLATE,
	rpROTATE,
	rpANIMTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct _RpSector
{
	int32 type;
};

struct iConditionRuntime
{
	xCondition* m_operand;
	uint16 m_match;
	uint16 m_trigger;
};

struct _RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
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

struct _rwResEntryTag
{
	_RwLLLink link;
	int32 size;
	void* owner;
	_rwResEntryTag** ownerRef;
	void(*destroyNotify)(_rwResEntryTag*);
};

struct _RwStreamFile
{
	void* fpFile;
};

struct Vector3D
{
	float32 x;
	float32 y;
	float32 z;
};

struct compile_assert
{
};

enum _rpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct _RpSkinFrame
{
	_RtQuat q;
	_RwV3d t;
	float32 time;
	_RpSkinFrame* prevFrame;
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

struct _rxHeapFreeBlock
{
	uint32 size;
	_rxHeapBlockHeader* ptr;
};

struct _FCinfo
{
	uint16 nidx[3];
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

struct _RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	_rxReq* req;
	void* initialisationData;
	uint32 initialisationDataSize;
};

struct _RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
};

struct iRuleResource
{
	uint32 m_actionCount;
	xAction* m_action;
	uint32 m_conditionCount;
	xCondition* m_condition;
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

struct _iEntryPointRuntime
{
	uint32 m_enabled;
};

struct _RtQuat
{
	_RwV3d imag;
	float32 real;
};

struct tagiFloorTri
{
	uint16 m_v[3];
	uint16 m_n;
};

struct _RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
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

struct xAnimMgr : xModule
{
	vector_0 anims;
	vector_1 ress;
	uint32 ID_counter;
};

struct _RxPipelineNodeParam
{
	void* dataParam;
	_RxHeap* heap;
};

struct _RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
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

struct _p2Geom
{
	uint32 m_meshCount;
	tagP2Mesh* m_mesh;
	_iRenderEffects effects;
	_RpClump* m_clump;
};

struct _RwV3d
{
	float32 x;
	float32 y;
	float32 z;
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

struct _rpAtomic
{
	_RwObjectHasFrame object;
	_rwResEntryTag* repEntry;
	_RpGeometry* geometry;
	_RwSphere boundingSphere;
	_RwSphere worldBoundingSphere;
	_RpClump* clump;
	_RwLLLink inClumpLink;
	_rpAtomic*(*renderCallBack)(_rpAtomic*);
	_rpInterpolator interpolator;
	uint16 renderFrame;
	uint16 collisionFrame;
	_RwLinkList llWorldSectorsInAtomic;
	_RxPipeline* pipeline;
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

struct xAnimData : iAnimInstance
{
	uint32 m_assetID;
	uint32 m_ID;
	iAnimData* m_resource;
};

enum _RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct tagXStreamMDSDirectory
{
	uint32 count;
	tagXStreamDirectoryEntry directory[1000];
};

struct xCamera
{
	iCameraResource* m_resource;
	void** m_runtime;
};

struct _RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct _RpSkinBoneInfo
{
	int32 boneTag;
	int32 boneIndex;
	int32 flags;
	_RwMatrix boneToSkinMat;
	_RwFrame* pFrame;
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

struct _RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

struct __vector_imp_1 : __vector_pod, compile_assert
{
};

struct xLight
{
	iLightResource* m_resource;
	_iLightRuntime* m_runtime;
};

struct _RpMorphTarget
{
	_RpGeometry* parentGeom;
	_RwSphere boundingSphere;
	_RwV3d* verts;
	_RwV3d* normals;
};

struct compressed_pair : compressed_pair_imp
{
};

struct vector_0 : __vector_imp_0
{
};

struct iLightResource
{
	uint32 m_type;
	Vector3D m_pos;
	Vector3D m_rot;
	Vector3D m_color;
	int32 m_fov;
};

struct _rpInterpolator
{
	int32 flags;
	int16 startMorphTarget;
	int16 endMorphTarget;
	float32 time;
	float32 recipTime;
	float32 position;
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

struct _RwObjectHasFrame
{
	_RwObject object;
	_RwLLLink lFrame;
	_RwObjectHasFrame*(*sync)(_RwObjectHasFrame*);
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

struct p2Camera
{
	Vector3D m_pos;
	Vector3D m_rot;
	float32 m_fov;
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

struct allocator
{
};

struct tagP2VERTEX
{
	float32 x;
	float32 y;
	float32 z;
	float32 tu;
	float32 tv;
};

struct xAction
{
	iActionResource* m_resource;
	iActionRuntime* m_runtime;
};

struct _RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
};

struct _RxPipelineRequiresCluster
{
	_RxClusterDefinition* clusterDef;
	_RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct _RpAnimSequence
{
	int32 refCnt;
	int8* name;
	_RpAnimType type;
	int32 numKeys;
	void* keys;
	int32 numInterpolators;
	_rpAnimInterpolator* interps;
};

struct _RpSkinSkeleton
{
	int32 numBones;
	_RpSkinAnim* pCurrentAnim;
	float32 currentTime;
	_RpSkinFrame* pNextFrame;
	_RpSkinSkeleton*(*pAnimCallBack)(_RpSkinSkeleton*, void*);
	void* pAnimCallBackData;
	float32 animCallBackTime;
	_RpSkinSkeleton*(*pAnimLoopCallBack)(_RpSkinSkeleton*, void*);
	void* pAnimLoopCallBackData;
	_RwMatrix* pMatrixArray;
	void* pMatrixArrayUnaligned;
};

struct tagP2MeshVertex
{
	float32 m_x;
	float32 m_y;
	float32 m_z;
};

struct tagP2Weight
{
	uint16 m_joint0;
	uint16 m_joint1;
	float32 m_weight0;
	float32 m_weight1;
};

struct iMarkerResource
{
	Vector3D m_pos;
};

struct vector_1 : __vector_imp_1
{
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

struct xMarker
{
	iMarkerResource* m_resource;
	void** m_runtime;
};

struct xCondition
{
	iConditionResource* m_resource;
	iConditionRuntime* m_runtime;
};

struct _rxReq
{
};

struct _RwLLLink
{
	_RwLLLink* next;
	_RwLLLink* prev;
};

struct __vector_pod
{
	compressed_pair capacity_;
	uint32 size_;
	uint32* data_;
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

struct xGameCharacter : xGameObj
{
};

struct iAnimData
{
	_RpSkinAnim* skin_anim;
	int8* m_name;
	float32 duration;
};

struct _RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct _RpMaterialList
{
	_RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct iAnimInstance
{
	float32 time;
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

struct _RwStreamCustom
{
	int32(*sfnclose)(void*);
	uint32(*sfnread)(void*, void*, uint32);
	int32(*sfnwrite)(void*, void*, uint32);
	int32(*sfnskip)(void*, uint32);
	void* data;
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

struct _anon0
{
};

struct _RwMatrixWeights
{
	float32 w0;
	float32 w1;
	float32 w2;
	float32 w3;
};

struct _rpAnimInterpolator
{
	int32 startKeyFrame;
	int32 endKeyFrame;
	float32 time;
};

struct _tagiEnvRuntime
{
	_RpWorld* world;
	Vector3D world_origin;
	_RwTexDictionary* tex_dict;
};

struct _RwStream
{
	_RwStreamType type;
	_RwStreamAccessType accessType;
	int32 position;
	_RwStreamUnion Type;
	int32 rwOwned;
};

struct _RwTexDictionary
{
	_RwObject object;
	_RwLinkList texturesInDict;
	_RwLLLink lInInstance;
};

struct Vector4D
{
	float32 x;
	float32 y;
	float32 z;
	float32 t;
};

struct _RpSkin
{
	int32 numBones;
	_RpSkinBoneInfo* pBoneInfo;
	int32 totalVertices;
	_RpGeometry* pGeometry;
	_RpSkinSkeleton* pCurrentSkeleton;
	uint32* pMatrixIndexMap;
	_RwMatrixWeights* pMatrixWeightsMap;
	void* pPlatformData;
};

enum _RwStreamType
{
	rwNASTREAM,
	rwSTREAMFILE,
	rwSTREAMFILENAME,
	rwSTREAMMEMORY,
	rwSTREAMCUSTOM,
	rwSTREAMTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct iCameraResource
{
	uint16 m_plateOffset;
	uint16 m_versions;
	p2CameraVersion m_version[5];
	uint32 m_frameCount;
	p2Camera* m_cameras;
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

struct tagXStreamDirectoryEntry
{
	uint32 id;
	uint32 type;
	uint32 offset;
	uint32 length;
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

struct _RwSphere
{
	_RwV3d center;
	float32 radius;
};

struct _RpGeometry
{
	_RwObject object;
	uint16 lockedSinceLastInst;
	int16 refCount;
	_RpMaterialList matList;
	int32 numTriangles;
	int32 numVertices;
	int32 numMorphTargets;
	_RpTriangle* triangles;
	_RwRGBA* preLitLum;
	_RwTexCoords* vertexTexCoords;
	_RwSurfaceProperties ignoredSurfaceProps;
	_RpMeshHeader* mesh;
	_RpMorphTarget* morphTarget;
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

struct _RwStreamUnion
{
	union
	{
		_RwStreamMemory memory;
		_RwStreamFile file;
		_RwStreamCustom custom;
	};
};

enum _RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct iActionRuntime
{
	xAction* m_and;
};

enum _RwStreamAccessType
{
	rwNASTREAMACCESS,
	rwSTREAMREAD,
	rwSTREAMWRITE,
	rwSTREAMAPPEND,
	rwSTREAMACCESSTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct _RwBBox
{
	_RwV3d sup;
	_RwV3d inf;
};

struct xFSMData
{
	uint16 m_fsmType;
	uint16 m_fsmState;
	uint16 m_fsmNextState;
	int32 m_fsmForceChange;
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

struct iActionResource
{
	uint8 m_cmdType;
	uint8 m_cmd;
	uint16 pad;
	uint32 m_cmdParameter;
};

struct _SkinData
{
	_RpSkin* skin;
	_rpAtomic* atomic;
	float32 angle;
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

struct _RwStreamMemory
{
	uint32 position;
	uint32 nSize;
	uint8* memBlock;
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

struct xModule
{
	int32 m_type;
	int8 m_name[32];
	int32 m_init;
	int32 m_state;
};

struct tagCollideInfo
{
	_tagxEnv* env;
	Vector3D orig;
	Vector3D direction;
	float32 max_dist;
	uint32 flags;
	Vector3D hit_pos;
	float32 hit_distance;
	Vector3D hit_normal;
};

int32 cur_point;
uint8 was_active_last_frame;
_SkinData zSkinData;
_anon0 __vt__10zCharacter;
_rpAtomic*(*zSkinAnimSetupAtomicCallback)(_rpAtomic*, void*);
int8 vAssertBuf2[128];
XStreamHeader currentHeader;
xAnimMgr* gAnimMgr;
uint32 anim_ID_walk;
uint32 anim_ID_walk_back;
uint32 anim_ID_run;
float32 g_DEGTORAD;
uint32 anim_ID_jump;
uint32 anim_ID_idle_scared;
uint32 anim_ID_idle;
uint32 anim_ID_extra_scratch;
uint32 anim_ID_ouch;
xScene* xScene_current;
Vector3D* gBSPOffset;
float32 g_RADTODEG;
_rpAtomic*(*hackUpdateSkinAtomic)(_rpAtomic*, void*);
float32 deltaFrame;
zCharacter* bad_guy;
_rpAtomic*(*zSkinSetupAtomicCallback)(_rpAtomic*, void*);
_RwFrame*(*_animClumpForAllFramesAddSequencesCallBack)(_RwFrame*, void*);
_RpAnimSequence*(*_clumpAddSequence)(_RpAnimSequence*, void*);

void SetPlayerFlag(int32 val);
void getHurt();
void MoveForward(float32 delta);
void Turn(float32 delta);
void Jump();
void render();
void setState(int32 state);
void nextFrame();
void StoreCurrentHeight();
void calcFloorHeight();
_rpAtomic* hackUpdateSkinAtomic(_rpAtomic* atomic, void* data);
void restart();
void kill();
void init();
void init(int8* filename);
void SetCurrentAnim(xAnimData* pAnimData, uint32 aid);
_rpAtomic* zSkinAnimSetupAtomicCallback(_rpAtomic* atomic, void* data);
_RpClump* LoadHackModel(int8* filename);
_RpClump* DffLoad(int8* filename);
_rpAtomic* zSkinSetupAtomicCallback(_rpAtomic* atomic);

// SetPlayerFlag__10zCharacterFi
// Start address: 0x3ee840
void zCharacter::SetPlayerFlag(int32 val)
{
	// Line 1110, Address: 0x3ee840, Func Offset: 0
	// Line 1111, Address: 0x3ee844, Func Offset: 0x4
	// Func End, Address: 0x3ee84c, Func Offset: 0xc
}

// getHurt__10zCharacterFv
// Start address: 0x3ee850
void zCharacter::getHurt()
{
	// Line 1100, Address: 0x3ee850, Func Offset: 0
	// Line 1101, Address: 0x3ee858, Func Offset: 0x8
	// Line 1103, Address: 0x3ee868, Func Offset: 0x18
	// Line 1105, Address: 0x3ee874, Func Offset: 0x24
	// Func End, Address: 0x3ee884, Func Offset: 0x34
}

// MoveForward__10zCharacterFf
// Start address: 0x3ee890
void zCharacter::MoveForward(float32 delta)
{
	int32 newState;
	// Line 944, Address: 0x3ee890, Func Offset: 0
	// Line 946, Address: 0x3ee8b0, Func Offset: 0x20
	// Line 950, Address: 0x3ee8e4, Func Offset: 0x54
	// Line 951, Address: 0x3ee8e8, Func Offset: 0x58
	// Line 955, Address: 0x3ee914, Func Offset: 0x84
	// Line 957, Address: 0x3ee954, Func Offset: 0xc4
	// Line 959, Address: 0x3ee974, Func Offset: 0xe4
	// Line 960, Address: 0x3ee978, Func Offset: 0xe8
	// Line 963, Address: 0x3ee980, Func Offset: 0xf0
	// Line 966, Address: 0x3ee9a8, Func Offset: 0x118
	// Line 969, Address: 0x3ee9b0, Func Offset: 0x120
	// Line 971, Address: 0x3ee9f0, Func Offset: 0x160
	// Line 973, Address: 0x3eea08, Func Offset: 0x178
	// Line 974, Address: 0x3eea0c, Func Offset: 0x17c
	// Line 975, Address: 0x3eea14, Func Offset: 0x184
	// Line 977, Address: 0x3eea34, Func Offset: 0x1a4
	// Line 979, Address: 0x3eea38, Func Offset: 0x1a8
	// Line 982, Address: 0x3eea40, Func Offset: 0x1b0
	// Line 984, Address: 0x3eea44, Func Offset: 0x1b4
	// Line 987, Address: 0x3eea4c, Func Offset: 0x1bc
	// Line 989, Address: 0x3eea8c, Func Offset: 0x1fc
	// Line 991, Address: 0x3eeacc, Func Offset: 0x23c
	// Line 993, Address: 0x3eeaf4, Func Offset: 0x264
	// Line 996, Address: 0x3eeafc, Func Offset: 0x26c
	// Line 998, Address: 0x3eeb00, Func Offset: 0x270
	// Line 1001, Address: 0x3eeb08, Func Offset: 0x278
	// Line 1009, Address: 0x3eeb28, Func Offset: 0x298
	// Line 1021, Address: 0x3eeb2c, Func Offset: 0x29c
	// Line 1023, Address: 0x3eeb38, Func Offset: 0x2a8
	// Line 1027, Address: 0x3eeb78, Func Offset: 0x2e8
	// Line 1028, Address: 0x3eeb88, Func Offset: 0x2f8
	// Line 1031, Address: 0x3eeb90, Func Offset: 0x300
	// Line 1032, Address: 0x3eeb98, Func Offset: 0x308
	// Line 1033, Address: 0x3eec68, Func Offset: 0x3d8
	// Line 1036, Address: 0x3eec70, Func Offset: 0x3e0
	// Line 1037, Address: 0x3eec78, Func Offset: 0x3e8
	// Line 1038, Address: 0x3eed48, Func Offset: 0x4b8
	// Line 1041, Address: 0x3eed50, Func Offset: 0x4c0
	// Line 1042, Address: 0x3eed58, Func Offset: 0x4c8
	// Line 1046, Address: 0x3eee28, Func Offset: 0x598
	// Line 1050, Address: 0x3eee2c, Func Offset: 0x59c
	// Line 1058, Address: 0x3eee58, Func Offset: 0x5c8
	// Line 1059, Address: 0x3eeea4, Func Offset: 0x614
	// Line 1063, Address: 0x3eeeac, Func Offset: 0x61c
	// Line 1064, Address: 0x3eeedc, Func Offset: 0x64c
	// Line 1067, Address: 0x3eeee4, Func Offset: 0x654
	// Line 1068, Address: 0x3eef14, Func Offset: 0x684
	// Line 1073, Address: 0x3eef1c, Func Offset: 0x68c
	// Line 1076, Address: 0x3eef5c, Func Offset: 0x6cc
	// Line 1077, Address: 0x3eef74, Func Offset: 0x6e4
	// Line 1079, Address: 0x3eefac, Func Offset: 0x71c
	// Line 1084, Address: 0x3eefdc, Func Offset: 0x74c
	// Line 1085, Address: 0x3eefe4, Func Offset: 0x754
	// Func End, Address: 0x3ef004, Func Offset: 0x774
}

// Turn__10zCharacterFf
// Start address: 0x3ef010
void zCharacter::Turn(float32 delta)
{
	int32 newState;
	// Line 866, Address: 0x3ef010, Func Offset: 0
	// Line 868, Address: 0x3ef02c, Func Offset: 0x1c
	// Line 872, Address: 0x3ef060, Func Offset: 0x50
	// Line 873, Address: 0x3ef064, Func Offset: 0x54
	// Line 877, Address: 0x3ef084, Func Offset: 0x74
	// Line 879, Address: 0x3ef0bc, Func Offset: 0xac
	// Line 882, Address: 0x3ef0c0, Func Offset: 0xb0
	// Line 885, Address: 0x3ef0c8, Func Offset: 0xb8
	// Line 887, Address: 0x3ef100, Func Offset: 0xf0
	// Line 893, Address: 0x3ef104, Func Offset: 0xf4
	// Line 895, Address: 0x3ef110, Func Offset: 0x100
	// Line 896, Address: 0x3ef114, Func Offset: 0x104
	// Line 899, Address: 0x3ef134, Func Offset: 0x124
	// Line 900, Address: 0x3ef144, Func Offset: 0x134
	// Line 903, Address: 0x3ef14c, Func Offset: 0x13c
	// Line 904, Address: 0x3ef154, Func Offset: 0x144
	// Line 909, Address: 0x3ef224, Func Offset: 0x214
	// Line 914, Address: 0x3ef250, Func Offset: 0x240
	// Line 917, Address: 0x3ef288, Func Offset: 0x278
	// Line 918, Address: 0x3ef29c, Func Offset: 0x28c
	// Line 919, Address: 0x3ef364, Func Offset: 0x354
	// Line 921, Address: 0x3ef36c, Func Offset: 0x35c
	// Line 928, Address: 0x3ef374, Func Offset: 0x364
	// Line 930, Address: 0x3ef3ac, Func Offset: 0x39c
	// Line 931, Address: 0x3ef474, Func Offset: 0x464
	// Line 938, Address: 0x3ef47c, Func Offset: 0x46c
	// Line 940, Address: 0x3ef484, Func Offset: 0x474
	// Func End, Address: 0x3ef4a0, Func Offset: 0x490
}

// Jump__10zCharacterFv
// Start address: 0x3ef4a0
void zCharacter::Jump()
{
	int32 newState;
	// Line 809, Address: 0x3ef4a0, Func Offset: 0
	// Line 812, Address: 0x3ef4b8, Func Offset: 0x18
	// Line 815, Address: 0x3ef4bc, Func Offset: 0x1c
	// Line 820, Address: 0x3ef4e8, Func Offset: 0x48
	// Line 821, Address: 0x3ef4ec, Func Offset: 0x4c
	// Line 828, Address: 0x3ef4f4, Func Offset: 0x54
	// Line 829, Address: 0x3ef4f8, Func Offset: 0x58
	// Line 834, Address: 0x3ef500, Func Offset: 0x60
	// Line 840, Address: 0x3ef504, Func Offset: 0x64
	// Line 842, Address: 0x3ef510, Func Offset: 0x70
	// Line 845, Address: 0x3ef530, Func Offset: 0x90
	// Line 846, Address: 0x3ef538, Func Offset: 0x98
	// Line 847, Address: 0x3ef544, Func Offset: 0xa4
	// Line 848, Address: 0x3ef54c, Func Offset: 0xac
	// Line 849, Address: 0x3ef61c, Func Offset: 0x17c
	// Line 852, Address: 0x3ef624, Func Offset: 0x184
	// Line 853, Address: 0x3ef62c, Func Offset: 0x18c
	// Line 854, Address: 0x3ef638, Func Offset: 0x198
	// Line 855, Address: 0x3ef640, Func Offset: 0x1a0
	// Line 859, Address: 0x3ef710, Func Offset: 0x270
	// Line 862, Address: 0x3ef714, Func Offset: 0x274
	// Line 863, Address: 0x3ef71c, Func Offset: 0x27c
	// Func End, Address: 0x3ef738, Func Offset: 0x298
}

// render__10zCharacterFv
// Start address: 0x3ef740
void zCharacter::render()
{
	// Line 805, Address: 0x3ef740, Func Offset: 0
	// Func End, Address: 0x3ef748, Func Offset: 0x8
}

// setState__10zCharacterFi
// Start address: 0x3ef750
void zCharacter::setState(int32 state)
{
	int32 idleCountDown;
	int8 init;
	// Line 771, Address: 0x3ef750, Func Offset: 0
	// Line 772, Address: 0x3ef764, Func Offset: 0x14
	// Line 773, Address: 0x3ef768, Func Offset: 0x18
	// Line 776, Address: 0x3ef790, Func Offset: 0x40
	// Line 777, Address: 0x3ef798, Func Offset: 0x48
	// Line 781, Address: 0x3ef7a0, Func Offset: 0x50
	// Line 782, Address: 0x3ef7bc, Func Offset: 0x6c
	// Line 783, Address: 0x3ef7c8, Func Offset: 0x78
	// Line 785, Address: 0x3ef7d4, Func Offset: 0x84
	// Line 786, Address: 0x3ef7dc, Func Offset: 0x8c
	// Line 787, Address: 0x3ef7e4, Func Offset: 0x94
	// Line 790, Address: 0x3ef7ec, Func Offset: 0x9c
	// Line 792, Address: 0x3ef7f4, Func Offset: 0xa4
	// Line 795, Address: 0x3ef7fc, Func Offset: 0xac
	// Line 799, Address: 0x3ef804, Func Offset: 0xb4
	// Line 800, Address: 0x3ef8d4, Func Offset: 0x184
	// Func End, Address: 0x3ef8ec, Func Offset: 0x19c
}

// nextFrame__10zCharacterFv
// Start address: 0x3ef8f0
void zCharacter::nextFrame()
{
	uint8 mats[10];
	int32 total;
	Vector3D no_bsp_pos;
	_RwMatrix* m;
	_RwFrame* f;
	_RwV3d up;
	_RwV3d* rw_local_z;
	_RwMatrix* matrix;
	Vector3D motion_2d;
	tagCollideInfo collision;
	Vector3D nn;
	Vector3D n;
	uint8 res;
	uint8 mater[4];
	Vector3D ppp;
	float32 delta;
	Vector3D* orig;
	Vector3D* pos;
	_RwV3d p;
	int8 init;
	float32 scared_anim_time;
	// Line 397, Address: 0x3ef8f0, Func Offset: 0
	// Line 406, Address: 0x3ef910, Func Offset: 0x20
	// Line 407, Address: 0x3ef914, Func Offset: 0x24
	// Line 409, Address: 0x3ef920, Func Offset: 0x30
	// Line 410, Address: 0x3ef928, Func Offset: 0x38
	// Line 413, Address: 0x3ef944, Func Offset: 0x54
	// Line 415, Address: 0x3ef950, Func Offset: 0x60
	// Line 418, Address: 0x3ef960, Func Offset: 0x70
	// Line 421, Address: 0x3ef9a4, Func Offset: 0xb4
	// Line 423, Address: 0x3ef9bc, Func Offset: 0xcc
	// Line 425, Address: 0x3ef9d4, Func Offset: 0xe4
	// Line 430, Address: 0x3ef9dc, Func Offset: 0xec
	// Line 433, Address: 0x3efa04, Func Offset: 0x114
	// Line 434, Address: 0x3efa48, Func Offset: 0x158
	// Line 436, Address: 0x3efa5c, Func Offset: 0x16c
	// Line 438, Address: 0x3efa68, Func Offset: 0x178
	// Line 440, Address: 0x3efa74, Func Offset: 0x184
	// Line 441, Address: 0x3efa7c, Func Offset: 0x18c
	// Line 442, Address: 0x3efa8c, Func Offset: 0x19c
	// Line 444, Address: 0x3efa94, Func Offset: 0x1a4
	// Line 448, Address: 0x3efa9c, Func Offset: 0x1ac
	// Line 449, Address: 0x3efaa8, Func Offset: 0x1b8
	// Line 451, Address: 0x3efab4, Func Offset: 0x1c4
	// Line 457, Address: 0x3efabc, Func Offset: 0x1cc
	// Line 459, Address: 0x3efad4, Func Offset: 0x1e4
	// Line 580, Address: 0x3efaec, Func Offset: 0x1fc
	// Line 603, Address: 0x3efb04, Func Offset: 0x214
	// Line 605, Address: 0x3efb18, Func Offset: 0x228
	// Line 611, Address: 0x3efb24, Func Offset: 0x234
	// Line 612, Address: 0x3efbd8, Func Offset: 0x2e8
	// Line 613, Address: 0x3efc10, Func Offset: 0x320
	// Line 616, Address: 0x3efc20, Func Offset: 0x330
	// Line 646, Address: 0x3efc88, Func Offset: 0x398
	// Line 650, Address: 0x3efc94, Func Offset: 0x3a4
	// Line 651, Address: 0x3efca8, Func Offset: 0x3b8
	// Line 652, Address: 0x3efcb4, Func Offset: 0x3c4
	// Line 653, Address: 0x3efcbc, Func Offset: 0x3cc
	// Line 654, Address: 0x3efce8, Func Offset: 0x3f8
	// Line 655, Address: 0x3efcf0, Func Offset: 0x400
	// Line 656, Address: 0x3efd0c, Func Offset: 0x41c
	// Line 657, Address: 0x3efd10, Func Offset: 0x420
	// Line 658, Address: 0x3efdb8, Func Offset: 0x4c8
	// Line 661, Address: 0x3efdd0, Func Offset: 0x4e0
	// Line 662, Address: 0x3efde8, Func Offset: 0x4f8
	// Line 664, Address: 0x3efdf4, Func Offset: 0x504
	// Line 665, Address: 0x3efdf8, Func Offset: 0x508
	// Line 666, Address: 0x3efdfc, Func Offset: 0x50c
	// Line 668, Address: 0x3efe00, Func Offset: 0x510
	// Line 670, Address: 0x3efe9c, Func Offset: 0x5ac
	// Line 671, Address: 0x3efeb8, Func Offset: 0x5c8
	// Line 674, Address: 0x3efec0, Func Offset: 0x5d0
	// Line 677, Address: 0x3efed4, Func Offset: 0x5e4
	// Line 678, Address: 0x3efef4, Func Offset: 0x604
	// Line 679, Address: 0x3eff14, Func Offset: 0x624
	// Line 683, Address: 0x3eff1c, Func Offset: 0x62c
	// Line 684, Address: 0x3eff2c, Func Offset: 0x63c
	// Line 689, Address: 0x3eff3c, Func Offset: 0x64c
	// Line 693, Address: 0x3eff48, Func Offset: 0x658
	// Line 694, Address: 0x3eff64, Func Offset: 0x674
	// Line 695, Address: 0x3eff74, Func Offset: 0x684
	// Line 697, Address: 0x3eff84, Func Offset: 0x694
	// Line 698, Address: 0x3eff8c, Func Offset: 0x69c
	// Line 699, Address: 0x3eff94, Func Offset: 0x6a4
	// Line 714, Address: 0x3eff9c, Func Offset: 0x6ac
	// Line 716, Address: 0x3effd8, Func Offset: 0x6e8
	// Line 717, Address: 0x3effdc, Func Offset: 0x6ec
	// Line 718, Address: 0x3effec, Func Offset: 0x6fc
	// Line 720, Address: 0x3efff0, Func Offset: 0x700
	// Line 722, Address: 0x3efffc, Func Offset: 0x70c
	// Line 723, Address: 0x3f0000, Func Offset: 0x710
	// Line 724, Address: 0x3f0004, Func Offset: 0x714
	// Line 729, Address: 0x3f0014, Func Offset: 0x724
	// Line 730, Address: 0x3f0038, Func Offset: 0x748
	// Line 731, Address: 0x3f004c, Func Offset: 0x75c
	// Line 732, Address: 0x3f0058, Func Offset: 0x768
	// Line 742, Address: 0x3f0064, Func Offset: 0x774
	// Line 743, Address: 0x3f0078, Func Offset: 0x788
	// Line 744, Address: 0x3f008c, Func Offset: 0x79c
	// Line 747, Address: 0x3f00a4, Func Offset: 0x7b4
	// Line 748, Address: 0x3f00bc, Func Offset: 0x7cc
	// Line 750, Address: 0x3f00c4, Func Offset: 0x7d4
	// Line 751, Address: 0x3f011c, Func Offset: 0x82c
	// Line 754, Address: 0x3f0124, Func Offset: 0x834
	// Line 756, Address: 0x3f0134, Func Offset: 0x844
	// Line 766, Address: 0x3f0144, Func Offset: 0x854
	// Line 768, Address: 0x3f0148, Func Offset: 0x858
	// Func End, Address: 0x3f016c, Func Offset: 0x87c
}

// StoreCurrentHeight__10zCharacterFv
// Start address: 0x3f0170
void zCharacter::StoreCurrentHeight()
{
	_RwV3d* pos;
	_RwMatrix* m;
	_RwFrame* f;
	// Line 383, Address: 0x3f0170, Func Offset: 0
	// Line 384, Address: 0x3f0180, Func Offset: 0x10
	// Line 385, Address: 0x3f018c, Func Offset: 0x1c
	// Line 386, Address: 0x3f0198, Func Offset: 0x28
	// Line 387, Address: 0x3f01a4, Func Offset: 0x34
	// Line 388, Address: 0x3f01ac, Func Offset: 0x3c
	// Func End, Address: 0x3f01c0, Func Offset: 0x50
}

// calcFloorHeight__10zCharacterFv
// Start address: 0x3f01c0
void zCharacter::calcFloorHeight()
{
	tagCollideInfo stab_collision;
	Vector3D* pos;
	// Line 315, Address: 0x3f01c0, Func Offset: 0
	// Line 316, Address: 0x3f01d4, Func Offset: 0x14
	// Line 319, Address: 0x3f01d8, Func Offset: 0x18
	// Line 323, Address: 0x3f01e4, Func Offset: 0x24
	// Line 324, Address: 0x3f01f8, Func Offset: 0x38
	// Line 325, Address: 0x3f0204, Func Offset: 0x44
	// Line 326, Address: 0x3f020c, Func Offset: 0x4c
	// Line 327, Address: 0x3f0224, Func Offset: 0x64
	// Line 328, Address: 0x3f022c, Func Offset: 0x6c
	// Line 329, Address: 0x3f0230, Func Offset: 0x70
	// Line 330, Address: 0x3f0238, Func Offset: 0x78
	// Line 331, Address: 0x3f023c, Func Offset: 0x7c
	// Line 332, Address: 0x3f0244, Func Offset: 0x84
	// Line 335, Address: 0x3f024c, Func Offset: 0x8c
	// Line 338, Address: 0x3f0260, Func Offset: 0xa0
	// Line 339, Address: 0x3f0274, Func Offset: 0xb4
	// Line 343, Address: 0x3f027c, Func Offset: 0xbc
	// Line 349, Address: 0x3f02c8, Func Offset: 0x108
	// Line 352, Address: 0x3f02d0, Func Offset: 0x110
	// Line 358, Address: 0x3f031c, Func Offset: 0x15c
	// Func End, Address: 0x3f0334, Func Offset: 0x174
}

// hackUpdateSkinAtomic__FP9_rpAtomicPv
// Start address: 0x3f0340
_rpAtomic* hackUpdateSkinAtomic(_rpAtomic* atomic, void* data)
{
	_RpSkin* skin;
	float32 delta;
	// Line 269, Address: 0x3f0340, Func Offset: 0
	// Line 271, Address: 0x3f0354, Func Offset: 0x14
	// Line 273, Address: 0x3f035c, Func Offset: 0x1c
	// Line 274, Address: 0x3f0360, Func Offset: 0x20
	// Line 276, Address: 0x3f036c, Func Offset: 0x2c
	// Line 278, Address: 0x3f0374, Func Offset: 0x34
	// Line 281, Address: 0x3f0384, Func Offset: 0x44
	// Line 282, Address: 0x3f0388, Func Offset: 0x48
	// Func End, Address: 0x3f03a0, Func Offset: 0x60
}

// restart__10zCharacterFv
// Start address: 0x3f03a0
void zCharacter::restart()
{
	// Line 263, Address: 0x3f03a0, Func Offset: 0
	// Line 264, Address: 0x3f03b0, Func Offset: 0x10
	// Line 265, Address: 0x3f0450, Func Offset: 0xb0
	// Func End, Address: 0x3f0464, Func Offset: 0xc4
}

// kill__10zCharacterFv
// Start address: 0x3f0470
void zCharacter::kill()
{
	// Line 259, Address: 0x3f0470, Func Offset: 0
	// Func End, Address: 0x3f0478, Func Offset: 0x8
}

// init__10zCharacterFv
// Start address: 0x3f0480
void zCharacter::init()
{
	// Line 248, Address: 0x3f0480, Func Offset: 0
	// Line 249, Address: 0x3f0488, Func Offset: 0x8
	// Line 250, Address: 0x3f0520, Func Offset: 0xa0
	// Func End, Address: 0x3f0530, Func Offset: 0xb0
}

// init__10zCharacterFPc
// Start address: 0x3f0530
void zCharacter::init(int8* filename)
{
	// Line 198, Address: 0x3f0530, Func Offset: 0
	// Line 199, Address: 0x3f0544, Func Offset: 0x14
	// Line 200, Address: 0x3f0548, Func Offset: 0x18
	// Line 203, Address: 0x3f0598, Func Offset: 0x68
	// Line 206, Address: 0x3f05a4, Func Offset: 0x74
	// Line 208, Address: 0x3f05b0, Func Offset: 0x80
	// Line 210, Address: 0x3f05b8, Func Offset: 0x88
	// Line 211, Address: 0x3f05d8, Func Offset: 0xa8
	// Line 212, Address: 0x3f05f8, Func Offset: 0xc8
	// Line 214, Address: 0x3f061c, Func Offset: 0xec
	// Line 218, Address: 0x3f0624, Func Offset: 0xf4
	// Line 219, Address: 0x3f062c, Func Offset: 0xfc
	// Line 220, Address: 0x3f063c, Func Offset: 0x10c
	// Line 221, Address: 0x3f064c, Func Offset: 0x11c
	// Line 224, Address: 0x3f065c, Func Offset: 0x12c
	// Line 225, Address: 0x3f0660, Func Offset: 0x130
	// Line 226, Address: 0x3f066c, Func Offset: 0x13c
	// Line 229, Address: 0x3f0670, Func Offset: 0x140
	// Line 234, Address: 0x3f0688, Func Offset: 0x158
	// Line 236, Address: 0x3f0690, Func Offset: 0x160
	// Line 237, Address: 0x3f0694, Func Offset: 0x164
	// Line 238, Address: 0x3f0734, Func Offset: 0x204
	// Line 241, Address: 0x3f0738, Func Offset: 0x208
	// Line 243, Address: 0x3f073c, Func Offset: 0x20c
	// Func End, Address: 0x3f0754, Func Offset: 0x224
}

// SetCurrentAnim__10zCharacterFP9xAnimDataUi
// Start address: 0x3f0760
void zCharacter::SetCurrentAnim(xAnimData* pAnimData, uint32 aid)
{
	// Line 180, Address: 0x3f0760, Func Offset: 0
	// Line 181, Address: 0x3f0780, Func Offset: 0x20
	// Line 182, Address: 0x3f0820, Func Offset: 0xc0
	// Line 185, Address: 0x3f0824, Func Offset: 0xc4
	// Line 186, Address: 0x3f083c, Func Offset: 0xdc
	// Line 187, Address: 0x3f0848, Func Offset: 0xe8
	// Func End, Address: 0x3f0864, Func Offset: 0x104
}

// zSkinAnimSetupAtomicCallback__FP9_rpAtomicPv
// Start address: 0x3f0870
_rpAtomic* zSkinAnimSetupAtomicCallback(_rpAtomic* atomic, void* data)
{
	_RpSkinAnim* ska;
	_RpSkin* sk;
	// Line 164, Address: 0x3f0870, Func Offset: 0
	// Line 165, Address: 0x3f0888, Func Offset: 0x18
	// Line 167, Address: 0x3f0890, Func Offset: 0x20
	// Line 168, Address: 0x3f089c, Func Offset: 0x2c
	// Line 170, Address: 0x3f08a4, Func Offset: 0x34
	// Line 172, Address: 0x3f08b4, Func Offset: 0x44
	// Line 175, Address: 0x3f08c0, Func Offset: 0x50
	// Line 176, Address: 0x3f08c4, Func Offset: 0x54
	// Func End, Address: 0x3f08dc, Func Offset: 0x6c
}

// LoadHackModel__FPc
// Start address: 0x3f08e0
_RpClump* LoadHackModel(int8* filename)
{
	_RpClump* clump;
	// Line 149, Address: 0x3f08e0, Func Offset: 0
	// Line 152, Address: 0x3f08ec, Func Offset: 0xc
	// Line 155, Address: 0x3f08f4, Func Offset: 0x14
	// Line 156, Address: 0x3f0900, Func Offset: 0x20
	// Line 157, Address: 0x3f0918, Func Offset: 0x38
	// Line 159, Address: 0x3f0934, Func Offset: 0x54
	// Line 160, Address: 0x3f0938, Func Offset: 0x58
	// Func End, Address: 0x3f094c, Func Offset: 0x6c
}

// DffLoad__FPc
// Start address: 0x3f0950
_RpClump* DffLoad(int8* filename)
{
	int32 res;
	_RpClump* clump;
	_RwStream* stream;
	// Line 131, Address: 0x3f0950, Func Offset: 0
	// Line 136, Address: 0x3f0964, Func Offset: 0x14
	// Line 137, Address: 0x3f0978, Func Offset: 0x28
	// Line 138, Address: 0x3f0a18, Func Offset: 0xc8
	// Line 139, Address: 0x3f0a30, Func Offset: 0xe0
	// Line 140, Address: 0x3f0ad0, Func Offset: 0x180
	// Line 141, Address: 0x3f0ae0, Func Offset: 0x190
	// Line 142, Address: 0x3f0b80, Func Offset: 0x230
	// Line 143, Address: 0x3f0b90, Func Offset: 0x240
	// Line 144, Address: 0x3f0b94, Func Offset: 0x244
	// Func End, Address: 0x3f0bac, Func Offset: 0x25c
}

// zSkinSetupAtomicCallback__FP9_rpAtomicPv
// Start address: 0x3f0bb0
_rpAtomic* zSkinSetupAtomicCallback(_rpAtomic* atomic)
{
	_RpSkin* skin;
	// Line 118, Address: 0x3f0bb0, Func Offset: 0
	// Line 119, Address: 0x3f0bc4, Func Offset: 0x14
	// Line 121, Address: 0x3f0bd4, Func Offset: 0x24
	// Line 124, Address: 0x3f0bdc, Func Offset: 0x2c
	// Line 126, Address: 0x3f0bf8, Func Offset: 0x48
	// Line 127, Address: 0x3f0bfc, Func Offset: 0x4c
	// Func End, Address: 0x3f0c14, Func Offset: 0x64
}

