typedef struct _iEntryPointRuntime;
typedef struct iRuleResource;
typedef struct tagP2MeshVertex;
typedef struct _RwTexCoords;
typedef struct _rxHeapSuperBlockDescriptor;
typedef struct _RpMorphTarget;
typedef struct xScene;
typedef struct _RxClusterRef;
typedef struct xFSMData;
typedef struct _RxPacket;
typedef struct _RpSkinBoneInfo;
typedef struct iTriggerResource;
typedef struct _RpSkinFrame;
typedef struct _RpGeometry;
typedef enum _RxClusterValidityReq;
typedef struct _rpAtomic;
typedef struct Vector3D;
typedef struct _RwRaster;
typedef struct iAnimData;
typedef struct _RpCollSector;
typedef struct xCamera;
typedef struct _RpMeshHeader;
typedef struct xAnimMgr;
typedef struct _RwV3d;
typedef struct _RxClusterDefinition;
typedef struct _RpSkinAnim;
typedef struct _RxOutputSpec;
typedef struct _RxPipelineNode;
typedef struct _RpSkinSkeleton;
typedef struct _RxPipeline;
typedef struct xLight;
typedef struct _rwResEntryTag;
typedef struct compile_assert;
typedef struct p2Camera;
typedef struct _RxHeap;
typedef struct xNavPoint;
typedef struct _rxHeapBlockHeader;
typedef struct iLightResource;
typedef struct tagiFloor;
typedef struct __vector_imp_0;
typedef struct _rxHeapFreeBlock;
typedef struct _iLightRuntime;
typedef struct _RwMatrixWeights;
typedef struct _RxPipelineNodeTopSortData;
typedef struct _rpAnimInterpolator;
typedef struct _RwMatrix;
typedef struct _iRenderEffects;
typedef struct tagP2Weight;
typedef struct vector_0;
typedef struct xTrigger;
typedef struct xAction;
typedef struct zGameObjVillain;
typedef struct _RpClump;
typedef enum _RwTextureAddressMode;
typedef struct _RpTriangle;
typedef struct _RxPipelineNodeParam;
typedef struct iMarkerResource;
typedef struct _RxPipelineCluster;
typedef enum _rxEmbeddedPacketState;
typedef struct _RwFrame;
typedef struct _anon0;
typedef struct xModule;
typedef struct _RpVertexNormal;
typedef struct _RpMaterial;
typedef struct _RxNodeDefinition;
typedef struct xMarker;
typedef enum _RxClusterValid;
typedef struct xCondition;
typedef struct _RwSurfaceProperties;
typedef struct _RwTexture;
typedef struct xNavLink;
typedef struct p2CameraVersion;
typedef struct vector_1;
typedef struct _RwObjectHasFrame;
typedef enum _RpAnimType;
typedef struct _RpSector;
typedef struct _tagiEnvRuntime;
typedef enum _rpWorldRenderOrder;
typedef struct _RxPipelineRequiresCluster;
typedef struct _RpWorld;
typedef struct _RpAnimSequence;
typedef struct _SkinData;
typedef struct compressed_pair_imp;
typedef struct iConditionRuntime;
typedef struct _FCinfo;
typedef struct _RpPolygon;
typedef struct _RpSkin;
typedef struct _RwTexDictionary;
typedef struct iCameraResource;
typedef struct tagiFloorTri;
typedef struct tagXStreamMDSDirectory;
typedef struct _rxReq;
typedef struct _RtQuat;
typedef struct _p2Geom;
typedef struct _RwRGBA;
typedef struct _RwObject;
typedef struct _RpWorldSector;
typedef struct tagxPhysicsObject;
typedef enum _RwTextureFilterMode;
typedef struct tagP2Mesh;
typedef struct iEntryPointResource;
typedef struct xAnimData;
typedef struct _rpInterpolator;
typedef struct iActionRuntime;
typedef struct tagP2VERTEX;
typedef struct XStreamHeader;
typedef struct _RwLLLink;
typedef struct _RxIoSpec;
typedef struct _RwSphere;
typedef struct xEntryPoint;
typedef struct compressed_pair;
typedef struct xGameObj;
typedef struct iActionResource;
typedef struct _tagxEnv;
typedef struct _RxNodeMethods;
typedef struct xGameCharacter;
typedef struct allocator;
typedef enum _RxClusterForcePresent;
typedef struct _RpMaterialList;
typedef struct iDisplayCamera;
typedef struct tagCollideInfo;
typedef struct Vector4D;
typedef enum _RxNodeDefEditable;
typedef struct tagXStreamDirectoryEntry;
typedef struct iAnimInstance;
typedef struct __vector_pod;
typedef struct _RxClusterUnion;
typedef struct tagiMesh;
typedef struct iConditionResource;
typedef struct _RxCluster;
typedef struct _RwLinkList;
typedef struct xRule;
typedef struct __vector_imp_1;
typedef struct _RwBBox;

typedef _rpAtomic*(*type_5)(_rpAtomic*);
typedef void(*type_8)(_rwResEntryTag*);
typedef int32(*type_10)(_RxPipelineNode*, _RxPipelineNodeParam*);
typedef int32(*type_15)(_RxNodeDefinition*);
typedef void(*type_19)(_RxNodeDefinition*);
typedef _rpAtomic*(*type_20)(_rpAtomic*, void*);
typedef int32(*type_24)(_RxPipelineNode*);
typedef void(*type_25)(_RxPipelineNode*);
typedef _RwObjectHasFrame*(*type_26)(_RwObjectHasFrame*);
typedef _RpAnimSequence*(*type_28)(_RpAnimSequence*, void*);
typedef int32(*type_30)(_RxPipelineNode*, _RxPipeline*);
typedef _RpWorldSector*(*type_33)(_RpWorldSector*);
typedef uint32(*type_34)(_RxPipelineNode*, uint32, uint32, void*);
typedef _RpSkinSkeleton*(*type_38)(_RpSkinSkeleton*, void*);
typedef _rpAtomic*(*type_39)(_rpAtomic*, void*);
typedef _RpClump*(*type_44)(_RpClump*, void*);
typedef _RwFrame*(*type_47)(_RwFrame*, void*);

typedef uint16 type_0[3];
typedef int8 type_1[32];
typedef int8 type_2[32];
typedef iTriggerResource* type_3[20];
typedef iTriggerResource* type_4[20];
typedef int8 type_6[128];
typedef iTriggerResource* type_7[20];
typedef iTriggerResource* type_9[20];
typedef uint8 type_11[4];
typedef iTriggerResource* type_12[20];
typedef uint16 type_13[3];
typedef uint8 type_14[4];
typedef uint8 type_16[4];
typedef int8 type_17[32];
typedef iTriggerResource* type_18[20];
typedef float32 type_21[3];
typedef iTriggerResource* type_22[20];
typedef uint32 type_23[4];
typedef iLightResource type_27[2];
typedef uint16 type_29[3];
typedef uint16 type_31[3];
typedef tagXStreamDirectoryEntry type_32[1000];
typedef _RxCluster type_35[1];
typedef Vector3D type_36[4];
typedef p2CameraVersion type_37[5];
typedef iTriggerResource* type_40[20];
typedef int8 type_41[2048];
typedef iTriggerResource* type_42[20];
typedef Vector3D type_43[4];
typedef iTriggerResource* type_45[20];
typedef iTriggerResource* type_46[20];
typedef iTriggerResource* type_48[20];

struct _iEntryPointRuntime
{
	uint32 m_enabled;
};

struct iRuleResource
{
	uint32 m_actionCount;
	xAction* m_action;
	uint32 m_conditionCount;
	xCondition* m_condition;
};

struct tagP2MeshVertex
{
	float32 m_x;
	float32 m_y;
	float32 m_z;
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

struct _RpMorphTarget
{
	_RpGeometry* parentGeom;
	_RwSphere boundingSphere;
	_RwV3d* verts;
	_RwV3d* normals;
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

struct _RxClusterRef
{
	_RxClusterDefinition* clusterDef;
	_RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct xFSMData
{
	uint16 m_fsmType;
	uint16 m_fsmState;
	uint16 m_fsmNextState;
	int32 m_fsmForceChange;
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

struct _RpSkinBoneInfo
{
	int32 boneTag;
	int32 boneIndex;
	int32 flags;
	_RwMatrix boneToSkinMat;
	_RwFrame* pFrame;
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

struct _RpSkinFrame
{
	_RtQuat q;
	_RwV3d t;
	float32 time;
	_RpSkinFrame* prevFrame;
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

enum _RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
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

struct Vector3D
{
	float32 x;
	float32 y;
	float32 z;
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

struct iAnimData
{
	_RpSkinAnim* skin_anim;
	int8* m_name;
	float32 duration;
};

struct _RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
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

struct xAnimMgr : xModule
{
	vector_0 anims;
	vector_1 ress;
	uint32 ID_counter;
};

struct _RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct _RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct _RpSkinAnim
{
	int32 numFrames;
	int32 flags;
	float32 duration;
	_RpSkinFrame* pFrames;
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

struct xLight
{
	iLightResource* m_resource;
	_iLightRuntime* m_runtime;
};

struct _rwResEntryTag
{
	_RwLLLink link;
	int32 size;
	void* owner;
	_rwResEntryTag** ownerRef;
	void(*destroyNotify)(_rwResEntryTag*);
};

struct compile_assert
{
};

struct p2Camera
{
	Vector3D m_pos;
	Vector3D m_rot;
	float32 m_fov;
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

struct _rxHeapBlockHeader
{
	_rxHeapBlockHeader* prev;
	_rxHeapBlockHeader* next;
	uint32 size;
	_rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
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

struct __vector_imp_0 : __vector_pod, compile_assert
{
};

struct _rxHeapFreeBlock
{
	uint32 size;
	_rxHeapBlockHeader* ptr;
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

struct _RwMatrixWeights
{
	float32 w0;
	float32 w1;
	float32 w2;
	float32 w3;
};

struct _RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	_rxReq* req;
	void* initialisationData;
	uint32 initialisationDataSize;
};

struct _rpAnimInterpolator
{
	int32 startKeyFrame;
	int32 endKeyFrame;
	float32 time;
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

struct tagP2Weight
{
	uint16 m_joint0;
	uint16 m_joint1;
	float32 m_weight0;
	float32 m_weight1;
};

struct vector_0 : __vector_imp_1
{
};

struct xTrigger
{
	iTriggerResource* m_resource;
};

struct xAction
{
	iActionResource* m_resource;
	iActionRuntime* m_runtime;
};

struct zGameObjVillain : xGameCharacter
{
	int32 chris_hack_value;
	int32 snack_delay;
	int32 m_currentStateTime;
	int32 m_currentState;
	int32 m_jumping;
	int32 m_doublejumping;
	float32 m_gradient;
	uint32 current_animation_ID;
	xAnimData* current_anim;
	int32 m_health;
	float32 m_storedHeight;

	void render();
	void nextFrame();
	void restart();
	void kill();
	void init();
	void init(int8* filename);
};

struct _RpClump
{
	_RwObject object;
	_RwLinkList atomicList;
	_RwLLLink inWorldLink;
	_RpClump*(*callback)(_RpClump*, void*);
	uint16 renderFrame;
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

struct _RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
};

struct _RxPipelineNodeParam
{
	void* dataParam;
	_RxHeap* heap;
};

struct iMarkerResource
{
	Vector3D m_pos;
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

struct _anon0
{
};

struct xModule
{
	int32 m_type;
	int8 m_name[32];
	int32 m_init;
	int32 m_state;
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

struct _RxNodeDefinition
{
	int8* name;
	_RxNodeMethods nodeMethods;
	_RxIoSpec io;
	uint32 pipelineNodePrivateDataSize;
	_RxNodeDefEditable editable;
	int32 InputPipesCnt;
};

struct xMarker
{
	iMarkerResource* m_resource;
	void** m_runtime;
};

enum _RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct xCondition
{
	iConditionResource* m_resource;
	iConditionRuntime* m_runtime;
};

struct _RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
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

struct vector_1 : __vector_imp_0
{
};

struct _RwObjectHasFrame
{
	_RwObject object;
	_RwLLLink lFrame;
	_RwObjectHasFrame*(*sync)(_RwObjectHasFrame*);
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

struct _tagiEnvRuntime
{
	_RpWorld* world;
	Vector3D world_origin;
	_RwTexDictionary* tex_dict;
};

enum _rpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct _RxPipelineRequiresCluster
{
	_RxClusterDefinition* clusterDef;
	_RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
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

struct _SkinData
{
	_RpSkin* skin;
	_rpAtomic* atomic;
	float32 angle;
};

struct compressed_pair_imp : allocator
{
	uint32 second_;
};

struct iConditionRuntime
{
	xCondition* m_operand;
	uint16 m_match;
	uint16 m_trigger;
};

struct _FCinfo
{
	uint16 nidx[3];
};

struct _RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
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

struct _RwTexDictionary
{
	_RwObject object;
	_RwLinkList texturesInDict;
	_RwLLLink lInInstance;
};

struct iCameraResource
{
	uint16 m_plateOffset;
	uint16 m_versions;
	p2CameraVersion m_version[5];
	uint32 m_frameCount;
	p2Camera* m_cameras;
};

struct tagiFloorTri
{
	uint16 m_v[3];
	uint16 m_n;
};

struct tagXStreamMDSDirectory
{
	uint32 count;
	tagXStreamDirectoryEntry directory[1000];
};

struct _rxReq
{
};

struct _RtQuat
{
	_RwV3d imag;
	float32 real;
};

struct _p2Geom
{
	uint32 m_meshCount;
	tagP2Mesh* m_mesh;
	_iRenderEffects effects;
	_RpClump* m_clump;
};

struct _RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct _RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
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

struct xAnimData : iAnimInstance
{
	uint32 m_assetID;
	uint32 m_ID;
	iAnimData* m_resource;
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

struct iActionRuntime
{
	xAction* m_and;
};

struct tagP2VERTEX
{
	float32 x;
	float32 y;
	float32 z;
	float32 tu;
	float32 tv;
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

struct _RwLLLink
{
	_RwLLLink* next;
	_RwLLLink* prev;
};

struct _RxIoSpec
{
	uint32 numClustersOfInterest;
	_RxClusterRef* clustersOfInterest;
	_RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	_RxOutputSpec* outputs;
};

struct _RwSphere
{
	_RwV3d center;
	float32 radius;
};

struct xEntryPoint
{
	iEntryPointResource* m_resource;
	_iEntryPointRuntime* m_runtime;
};

struct compressed_pair : compressed_pair_imp
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

struct xGameCharacter : xGameObj
{
};

struct allocator
{
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

struct iDisplayCamera
{
	Vector3D m_pos;
	Vector3D m_rot;
	float32 m_fov;
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

struct Vector4D
{
	float32 x;
	float32 y;
	float32 z;
	float32 t;
};

enum _RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct tagXStreamDirectoryEntry
{
	uint32 id;
	uint32 type;
	uint32 offset;
	uint32 length;
};

struct iAnimInstance
{
	float32 time;
};

struct __vector_pod
{
	compressed_pair capacity_;
	uint32 size_;
	uint32* data_;
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

struct __vector_imp_1 : __vector_pod, compile_assert
{
};

struct _RwBBox
{
	_RwV3d sup;
	_RwV3d inf;
};

int32 cur_point;
uint8 was_active_last_frame;
_SkinData zSkinData;
_anon0 __vt__15zGameObjVillain;
float32 g_DEGTORAD;
_rpAtomic*(*zSkinAnimSetupAtomicCallback)(_rpAtomic*, void*);
int8 vAssertBuf2[128];
XStreamHeader currentHeader;
xAnimMgr* gAnimMgr;
uint32 bad_guy_anim_ID;
uint32 bad_guy_idle_ID;
ulong32 gTimerValue;
float32 g_RADTODEG;
Vector3D* gBSPOffset;
xScene* xScene_current;
_rpAtomic*(*hackUpdateSkinAtomic)(_rpAtomic*, void*);
float32 deltaFrame;
_RwFrame*(*_animClumpForAllFramesAddSequencesCallBack)(_RwFrame*, void*);
_RpAnimSequence*(*_clumpAddSequence)(_RpAnimSequence*, void*);

void render();
void nextFrame();
_rpAtomic* hackUpdateSkinAtomic(_rpAtomic* atomic, void* data);
void restart();
void kill();
void init();
void init(int8* filename);
_rpAtomic* zSkinAnimSetupAtomicCallback(_rpAtomic* atomic, void* data);

// render__15zGameObjVillainFv
// Start address: 0x404e70
void zGameObjVillain::render()
{
	// Line 405, Address: 0x404e70, Func Offset: 0
	// Func End, Address: 0x404e78, Func Offset: 0x8
}

// nextFrame__15zGameObjVillainFv
// Start address: 0x404e80
void zGameObjVillain::nextFrame()
{
	_RwMatrix* m;
	_RwFrame* f;
	_RwV3d up;
	_RwV3d* rw_local_z;
	_RwMatrix* matrix;
	Vector3D motion_2d;
	tagCollideInfo collision;
	float32 delta;
	Vector3D* orig;
	Vector3D* pos;
	_RwV3d p;
	// Line 260, Address: 0x404e80, Func Offset: 0
	// Line 269, Address: 0x404ea0, Func Offset: 0x20
	// Line 270, Address: 0x404ea4, Func Offset: 0x24
	// Line 272, Address: 0x404eb0, Func Offset: 0x30
	// Line 275, Address: 0x404eb8, Func Offset: 0x38
	// Line 277, Address: 0x404ed4, Func Offset: 0x54
	// Line 279, Address: 0x404ee4, Func Offset: 0x64
	// Line 280, Address: 0x404fcc, Func Offset: 0x14c
	// Line 281, Address: 0x404fd4, Func Offset: 0x154
	// Line 283, Address: 0x404fe0, Func Offset: 0x160
	// Line 289, Address: 0x4050cc, Func Offset: 0x24c
	// Line 292, Address: 0x4050ec, Func Offset: 0x26c
	// Line 293, Address: 0x40519c, Func Offset: 0x31c
	// Line 296, Address: 0x4051a4, Func Offset: 0x324
	// Line 297, Address: 0x4051c0, Func Offset: 0x340
	// Line 301, Address: 0x405270, Func Offset: 0x3f0
	// Line 303, Address: 0x405288, Func Offset: 0x408
	// Line 309, Address: 0x4052a0, Func Offset: 0x420
	// Line 313, Address: 0x4052ac, Func Offset: 0x42c
	// Line 314, Address: 0x4052c0, Func Offset: 0x440
	// Line 315, Address: 0x4052cc, Func Offset: 0x44c
	// Line 316, Address: 0x4052d4, Func Offset: 0x454
	// Line 317, Address: 0x405300, Func Offset: 0x480
	// Line 318, Address: 0x405308, Func Offset: 0x488
	// Line 319, Address: 0x405324, Func Offset: 0x4a4
	// Line 320, Address: 0x405328, Func Offset: 0x4a8
	// Line 321, Address: 0x4053d0, Func Offset: 0x550
	// Line 324, Address: 0x4053e8, Func Offset: 0x568
	// Line 325, Address: 0x405400, Func Offset: 0x580
	// Line 327, Address: 0x40540c, Func Offset: 0x58c
	// Line 328, Address: 0x405410, Func Offset: 0x590
	// Line 329, Address: 0x405414, Func Offset: 0x594
	// Line 331, Address: 0x405418, Func Offset: 0x598
	// Line 333, Address: 0x4054b4, Func Offset: 0x634
	// Line 334, Address: 0x4054d0, Func Offset: 0x650
	// Line 337, Address: 0x4054d8, Func Offset: 0x658
	// Line 340, Address: 0x4054ec, Func Offset: 0x66c
	// Line 341, Address: 0x40550c, Func Offset: 0x68c
	// Line 342, Address: 0x40552c, Func Offset: 0x6ac
	// Line 346, Address: 0x405534, Func Offset: 0x6b4
	// Line 347, Address: 0x405544, Func Offset: 0x6c4
	// Line 352, Address: 0x405554, Func Offset: 0x6d4
	// Line 356, Address: 0x4055a0, Func Offset: 0x720
	// Line 357, Address: 0x4055bc, Func Offset: 0x73c
	// Line 358, Address: 0x4055cc, Func Offset: 0x74c
	// Line 360, Address: 0x4055dc, Func Offset: 0x75c
	// Line 361, Address: 0x4055e4, Func Offset: 0x764
	// Line 362, Address: 0x4055ec, Func Offset: 0x76c
	// Line 366, Address: 0x4055f4, Func Offset: 0x774
	// Line 368, Address: 0x405630, Func Offset: 0x7b0
	// Line 369, Address: 0x405634, Func Offset: 0x7b4
	// Line 370, Address: 0x405644, Func Offset: 0x7c4
	// Line 375, Address: 0x405648, Func Offset: 0x7c8
	// Line 376, Address: 0x40566c, Func Offset: 0x7ec
	// Line 377, Address: 0x405680, Func Offset: 0x800
	// Line 378, Address: 0x40568c, Func Offset: 0x80c
	// Line 381, Address: 0x405698, Func Offset: 0x818
	// Func End, Address: 0x4056bc, Func Offset: 0x83c
}

// hackUpdateSkinAtomic__FP9_rpAtomicPv
// Start address: 0x4056c0
_rpAtomic* hackUpdateSkinAtomic(_rpAtomic* atomic, void* data)
{
	_RpSkin* skin;
	float32 delta;
	// Line 186, Address: 0x4056c0, Func Offset: 0
	// Line 188, Address: 0x4056d4, Func Offset: 0x14
	// Line 190, Address: 0x4056dc, Func Offset: 0x1c
	// Line 191, Address: 0x4056e0, Func Offset: 0x20
	// Line 193, Address: 0x4056ec, Func Offset: 0x2c
	// Line 195, Address: 0x4056f4, Func Offset: 0x34
	// Line 198, Address: 0x405704, Func Offset: 0x44
	// Line 199, Address: 0x405708, Func Offset: 0x48
	// Func End, Address: 0x405720, Func Offset: 0x60
}

// restart__15zGameObjVillainFv
// Start address: 0x405720
void zGameObjVillain::restart()
{
	// Line 182, Address: 0x405720, Func Offset: 0
	// Func End, Address: 0x405728, Func Offset: 0x8
}

// kill__15zGameObjVillainFv
// Start address: 0x405730
void zGameObjVillain::kill()
{
	// Line 175, Address: 0x405730, Func Offset: 0
	// Func End, Address: 0x405738, Func Offset: 0x8
}

// init__15zGameObjVillainFv
// Start address: 0x405740
void zGameObjVillain::init()
{
	// Line 164, Address: 0x405740, Func Offset: 0
	// Line 165, Address: 0x405748, Func Offset: 0x8
	// Line 166, Address: 0x4057e0, Func Offset: 0xa0
	// Func End, Address: 0x4057f0, Func Offset: 0xb0
}

// init__15zGameObjVillainFPc
// Start address: 0x4057f0
void zGameObjVillain::init(int8* filename)
{
	// Line 128, Address: 0x4057f0, Func Offset: 0
	// Line 129, Address: 0x405804, Func Offset: 0x14
	// Line 130, Address: 0x405808, Func Offset: 0x18
	// Line 133, Address: 0x405818, Func Offset: 0x28
	// Line 136, Address: 0x405824, Func Offset: 0x34
	// Line 138, Address: 0x40582c, Func Offset: 0x3c
	// Line 139, Address: 0x40584c, Func Offset: 0x5c
	// Line 140, Address: 0x40586c, Func Offset: 0x7c
	// Line 144, Address: 0x405890, Func Offset: 0xa0
	// Line 145, Address: 0x405894, Func Offset: 0xa4
	// Line 146, Address: 0x4058a0, Func Offset: 0xb0
	// Line 149, Address: 0x4058a4, Func Offset: 0xb4
	// Line 152, Address: 0x4058bc, Func Offset: 0xcc
	// Line 153, Address: 0x4058c0, Func Offset: 0xd0
	// Line 156, Address: 0x4058c4, Func Offset: 0xd4
	// Line 159, Address: 0x4059ac, Func Offset: 0x1bc
	// Func End, Address: 0x4059c4, Func Offset: 0x1d4
}

// zSkinAnimSetupAtomicCallback__FP9_rpAtomicPv
// Start address: 0x4059d0
_rpAtomic* zSkinAnimSetupAtomicCallback(_rpAtomic* atomic, void* data)
{
	_RpSkinAnim* ska;
	_RpSkin* sk;
	// Line 94, Address: 0x4059d0, Func Offset: 0
	// Line 95, Address: 0x4059e8, Func Offset: 0x18
	// Line 97, Address: 0x4059f0, Func Offset: 0x20
	// Line 98, Address: 0x4059fc, Func Offset: 0x2c
	// Line 100, Address: 0x405a04, Func Offset: 0x34
	// Line 102, Address: 0x405a14, Func Offset: 0x44
	// Line 105, Address: 0x405a20, Func Offset: 0x50
	// Line 106, Address: 0x405a24, Func Offset: 0x54
	// Func End, Address: 0x405a3c, Func Offset: 0x6c
}

