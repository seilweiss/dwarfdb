typedef enum _RwTextureAddressMode;
typedef struct _RpMaterial;
typedef struct _RwRaster;
typedef enum _RxClusterValidityReq;
typedef struct _RpWorld;
typedef struct _RpVertexNormal;
typedef struct _RpClump;
typedef struct _RwTexture;
typedef struct _RxClusterDefinition;
typedef struct _RpLight;
typedef struct _RxOutputSpec;
typedef struct _RxPipelineNode;
typedef struct _rxHeapSuperBlockDescriptor;
typedef struct _rwResEntryTag;
typedef struct _RxPipeline;
typedef struct _rpAtomic;
typedef struct _RxHeap;
typedef struct _rxHeapBlockHeader;
typedef struct _RpIntersection;
typedef struct AppCamera;
typedef struct _RpWorldSector;
typedef struct _rxHeapFreeBlock;
typedef struct _RpSector;
typedef struct ViewSkel;
typedef struct _RwV2d;
typedef struct _RxPipelineNodeTopSortData;
typedef struct _RwFrame;
typedef struct _RwMatrix;
typedef struct _RxPipelineNodeParam;
typedef struct _RxPipelineCluster;
typedef enum _rpWorldRenderOrder;
typedef enum _rxEmbeddedPacketState;
typedef struct _RpPolygon;
typedef struct PadMap;
typedef struct _RxNodeDefinition;
typedef enum _RxClusterValid;
typedef struct _RpTriangle;
typedef struct _RwSurfaceProperties;
typedef struct RwSkel;
typedef struct _RwRGBA;
typedef struct _RwTexCoords;
typedef enum _RpIntersectType;
typedef struct _RwObjectHasFrame;
typedef struct _RwV3d;
typedef struct _RpMeshHeader;
typedef enum _RwTextureFilterMode;
typedef struct _RwRect;
typedef struct _RpMorphTarget;
typedef struct _RxPipelineRequiresCluster;
typedef struct _rpInterpolator;
typedef struct _RpCollSector;
typedef struct _rxReq;
typedef struct _RsMouseStatus;
typedef enum _RwCameraProjection;
typedef struct RsMouse;
typedef struct ViewApp;
typedef struct _RwObject;
typedef struct Platform;
typedef struct _RwRGBAReal;
typedef struct _RpIntersectData;
typedef struct _RpMaterialList;
typedef struct PsMouse;
typedef struct _RwLLLink;
typedef struct _RsKeyStatus;
typedef struct _RwTexDictionary;
typedef struct _RxClusterRef;
typedef enum VMode;
typedef struct _RxIoSpec;
typedef struct _RwSphere;
typedef enum MMMode;
typedef struct _RxNodeMethods;
typedef struct _RwCamera;
typedef enum _RxClusterForcePresent;
typedef struct _RpGeometry;
typedef struct _RxPacket;
typedef struct _RwBBox;
typedef enum _RxNodeDefEditable;
typedef struct _RsPadButtonStatus;
typedef struct _RwLine;
typedef struct _RxClusterUnion;
typedef struct _RwFrustumPlane;
typedef struct Camera;
typedef struct _RxCluster;
typedef struct _RwPlane;
typedef struct _RwLinkList;
typedef enum AMode;
typedef struct _anon0;

typedef _rpAtomic*(*type_0)(_rpAtomic*);
typedef _RwCamera*(*type_2)(_RwCamera*);
typedef _RwCamera*(*type_3)(_RwCamera*);
typedef void(*type_4)(_rwResEntryTag*);
typedef _rpAtomic*(*type_5)(_RpIntersection*, _RpWorldSector*, _rpAtomic*, float32, void*);
typedef int32(*type_6)(_RxPipelineNode*, _RxPipelineNodeParam*);
typedef int32(*type_7)(_RxNodeDefinition*);
typedef void(*type_9)(_RxNodeDefinition*);
typedef int32(*type_11)(_RxPipelineNode*);
typedef _RpWorldSector*(*type_12)(_RpWorldSector*);
typedef _RwObjectHasFrame*(*type_13)(_RwObjectHasFrame*);
typedef void(*type_14)(_RxPipelineNode*);
typedef int32(*type_16)(_RxPipelineNode*, _RxPipeline*);
typedef uint32(*type_18)(_RxPipelineNode*, uint32, uint32, void*);
typedef _RpClump*(*type_20)(_RpClump*, void*);

typedef uint16 type_1[3];
typedef uint16 type_8[3];
typedef uint32 type_10[4];
typedef _RwFrustumPlane type_15[6];
typedef _RwV3d type_17[8];
typedef _RxCluster type_19[1];
typedef int8 type_21[128];
typedef int8 type_22[32];
typedef int8 type_23[32];

enum _RwTextureAddressMode
{
	rwTEXTUREADDRESSNATEXTUREADDRESS,
	rwTEXTUREADDRESSWRAP,
	rwTEXTUREADDRESSMIRROR,
	rwTEXTUREADDRESSCLAMP,
	rwTEXTUREADDRESSBORDER,
	rwTEXTUREADDRESSMODEFORCEENUMSIZEINT = 0x7fffffff
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

enum _RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
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

struct _RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

struct _RpClump
{
	_RwObject object;
	_RwLinkList atomicList;
	_RwLLLink inWorldLink;
	_RpClump*(*callback)(_RpClump*, void*);
	uint16 renderFrame;
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

struct _RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct _RpLight
{
	_RwObjectHasFrame object;
	float32 radius;
	_RwRGBAReal color;
	float32 minusCosAngle;
	_RwLinkList WorldSectorsInLight;
	_RwLLLink inWorld;
	uint16 lightFrame;
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

struct _RpIntersection
{
	_RpIntersectData t;
	_RpIntersectType type;
};

struct AppCamera : Camera
{
	_RwRaster* backdrop;
	float32 cameraDistance;
	_RwV2d offset;
	_RpWorld* world;
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

struct _rxHeapFreeBlock
{
	uint32 size;
	_rxHeapBlockHeader* ptr;
};

struct _RpSector
{
	int32 type;
};

struct ViewSkel : RwSkel
{
	ViewApp* Viewer;
	PadMap* PdMap;

	void* __ct(int32 width, int32 height);
	void* __dt();
	int32 RwInitialize(void* displayID);
	int32 RwTerminate();
	int32 KeyDown(_RsKeyStatus* ks);
	int32 CameraSize(_RwRect* rect);
	int32 MouseMove(_RsMouseStatus* ms);
	int32 RightButtonUp();
	int32 RightButtonDown(_RsMouseStatus* ms);
	int32 LeftButtonUp();
	int32 LeftButtonDown(_RsMouseStatus* ms);
	int32 FileLoad(int8* pathname);
	int32 Update(float32 timeDelta);
	int32 PluginAttach();
};

struct _RwV2d
{
	float32 x;
	float32 y;
};

struct _RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	_rxReq* req;
	void* initialisationData;
	uint32 initialisationDataSize;
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

enum _rpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

enum _rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

struct _RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
};

struct PadMap
{
	RwSkel* skel;
	_RsMouseStatus ms;
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

struct _RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
};

struct _RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

struct RwSkel
{
	int8* appName;
	int32 maximumWidth;
	int32 maximumHeight;
	RsMouse* mouse;
	Platform* ps;

	int32 Update(float32 timeDelta);
	int32 RwTerminate();
	int32 RegisterImageLoader();
	int32 PluginAttach();
	int32 FileLoad();
};

struct _RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct _RwTexCoords
{
	float32 u;
	float32 v;
};

enum _RpIntersectType
{
	rpINTERSECTNONE,
	rpINTERSECTLINE,
	rpINTERSECTPOINT,
	rpINTERSECTSPHERE,
	rpINTERSECTBOX,
	rpINTERSECTATOMIC,
	rpINTERSECTTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct _RwObjectHasFrame
{
	_RwObject object;
	_RwLLLink lFrame;
	_RwObjectHasFrame*(*sync)(_RwObjectHasFrame*);
};

struct _RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct _RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
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

struct _RwRect
{
	int32 x;
	int32 y;
	int32 w;
	int32 h;
};

struct _RpMorphTarget
{
	_RpGeometry* parentGeom;
	_RwSphere boundingSphere;
	_RwV3d* verts;
	_RwV3d* normals;
};

struct _RxPipelineRequiresCluster
{
	_RxClusterDefinition* clusterDef;
	_RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
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

struct _RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
};

struct _rxReq
{
};

struct _RsMouseStatus
{
	_RwV2d pos;
	_RwV2d delta;
	int32 shift;
	int32 control;
};

enum _RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
};

struct RsMouse
{
	_RwV2d pos;
	_RwRaster* raster;
	PsMouse* psmouse;
	int32 draw;
};

struct ViewApp
{
	_RpWorld* world;
	_RpClump* clump;
	_RpLight* dirLight;
	_RpLight* ambLight;
	AppCamera* appCamera;
	_rpAtomic* pickedAtomic;
	_RwMatrix* spinMatrix;
	VMode viewingMode;
	MMMode mouseMoveMode;
	AMode animMode;
};

struct _RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct Platform
{
	int32 quit;
};

struct _RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

struct _RpIntersectData
{
	union
	{
		_RwLine line;
		_RwV3d point;
		_RwSphere sphere;
		_RwBBox box;
		void* object;
	};
};

struct _RpMaterialList
{
	_RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct PsMouse
{
};

struct _RwLLLink
{
	_RwLLLink* next;
	_RwLLLink* prev;
};

struct _RsKeyStatus
{
	int32 keyScanCode;
	int32 keyCharCode;
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

enum VMode
{
	VModeClump,
	VModeWorld
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

enum MMMode
{
	MMNoAction,
	MMScrollBackdrop,
	MMPanAndZoomCamera,
	MMTiltCamera,
	MMSpinClump,
	MMDragClump,
	MMDragClumpInZ,
	MMAimCamera,
	MMMoveCamera,
	MMPanLight
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

enum _RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
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

enum _RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct _RsPadButtonStatus
{
	int32 padID;
	uint32 padButtons;
};

struct _RwLine
{
	_RwV3d start;
	_RwV3d end;
};

struct _RxClusterUnion
{
	union
	{
		_RxClusterDefinition* clusterDef;
		_RxPipelineCluster* clusterRef;
	};
};

struct _RwFrustumPlane
{
	_RwPlane plane;
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
};

struct Camera
{
	_RwCamera* camera;
	int32 m_Preset;
	float32 m_TetherLength;
	float32 m_TetherHeightPerc;
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

enum AMode
{
	ANoAction,
	ASpinClump
};

struct _anon0
{
};

_anon0 __vt__8ViewSkel;
_rpAtomic*(*WorldPickFunc)(_RpIntersection*, _RpWorldSector*, _rpAtomic*, float32, void*);

void* __ct(int32 width, int32 height);
void* __dt();
int32 RwInitialize(void* displayID);
int32 RwTerminate();
int32 KeyDown(_RsKeyStatus* ks);
int32 KeyUp(_RsKeyStatus* ks);
int32 PadButtonRight(_RwV2d* delta);
int32 PadButtonLeft(_RwV2d* delta);
int32 PadButtonUp();
int32 PadButtonDown(_RsPadButtonStatus* pbs);
int32 CameraSize(_RwRect* rect);
int32 MouseMove(_RsMouseStatus* ms);
int32 RightButtonUp();
int32 RightButtonDown(_RsMouseStatus* ms);
int32 LeftButtonUp();
int32 LeftButtonDown(_RsMouseStatus* ms);
int32 FileLoad(int8* pathname);
int32 Update(float32 timeDelta);
int32 PluginAttach();

// __ct__8ViewSkelFii
// Start address: 0x2001a0
void* ViewSkel::__ct(int32 width, int32 height)
{
	// Line 861, Address: 0x2001a0, Func Offset: 0
	// Line 863, Address: 0x2001c8, Func Offset: 0x28
	// Line 865, Address: 0x2001d0, Func Offset: 0x30
	// Line 866, Address: 0x2001fc, Func Offset: 0x5c
	// Func End, Address: 0x200210, Func Offset: 0x70
}

// __dt__8ViewSkelFv
// Start address: 0x200210
void* ViewSkel::__dt()
{
	// Line 854, Address: 0x200210, Func Offset: 0
	// Line 855, Address: 0x20023c, Func Offset: 0x2c
	// Line 857, Address: 0x200248, Func Offset: 0x38
	// Line 859, Address: 0x20027c, Func Offset: 0x6c
	// Func End, Address: 0x200294, Func Offset: 0x84
}

// RwInitialize__8ViewSkelFPv
// Start address: 0x2002a0
int32 ViewSkel::RwInitialize(void* displayID)
{
	int8 windowText[128];
	// Line 813, Address: 0x2002a0, Func Offset: 0
	// Line 817, Address: 0x2002b8, Func Offset: 0x18
	// Line 819, Address: 0x2002cc, Func Offset: 0x2c
	// Line 822, Address: 0x2002d8, Func Offset: 0x38
	// Line 823, Address: 0x2002fc, Func Offset: 0x5c
	// Line 825, Address: 0x200308, Func Offset: 0x68
	// Line 828, Address: 0x200314, Func Offset: 0x74
	// Line 835, Address: 0x200320, Func Offset: 0x80
	// Line 840, Address: 0x200380, Func Offset: 0xe0
	// Line 843, Address: 0x200398, Func Offset: 0xf8
	// Line 850, Address: 0x2003a8, Func Offset: 0x108
	// Line 851, Address: 0x2003ac, Func Offset: 0x10c
	// Func End, Address: 0x2003c8, Func Offset: 0x128
}

// RwTerminate__8ViewSkelFv
// Start address: 0x2003d0
int32 ViewSkel::RwTerminate()
{
	ViewApp* ptr;
	// Line 789, Address: 0x2003d0, Func Offset: 0
	// Line 793, Address: 0x2003e0, Func Offset: 0x10
	// Line 794, Address: 0x2003e4, Func Offset: 0x14
	// Line 796, Address: 0x2003e8, Func Offset: 0x18
	// Line 798, Address: 0x2003f0, Func Offset: 0x20
	// Line 804, Address: 0x2003fc, Func Offset: 0x2c
	// Line 806, Address: 0x200408, Func Offset: 0x38
	// Line 808, Address: 0x200410, Func Offset: 0x40
	// Line 809, Address: 0x200414, Func Offset: 0x44
	// Func End, Address: 0x200428, Func Offset: 0x58
}

// KeyDown__8ViewSkelFP12_RsKeyStatus
// Start address: 0x200430
int32 ViewSkel::KeyDown(_RsKeyStatus* ks)
{
	int32 result;
	// Line 762, Address: 0x200430, Func Offset: 0
	// Line 763, Address: 0x20044c, Func Offset: 0x1c
	// Line 765, Address: 0x200450, Func Offset: 0x20
	// Line 767, Address: 0x20046c, Func Offset: 0x3c
	// Line 770, Address: 0x200478, Func Offset: 0x48
	// Line 773, Address: 0x20049c, Func Offset: 0x6c
	// Line 774, Address: 0x2004a8, Func Offset: 0x78
	// Line 777, Address: 0x2004b0, Func Offset: 0x80
	// Line 784, Address: 0x2004b8, Func Offset: 0x88
	// Line 785, Address: 0x2004bc, Func Offset: 0x8c
	// Func End, Address: 0x2004d8, Func Offset: 0xa8
}

// KeyUp__8ViewSkelFP12_RsKeyStatus
// Start address: 0x2004e0
int32 KeyUp(_RsKeyStatus* ks)
{
	// Line 755, Address: 0x2004e0, Func Offset: 0
	// Line 756, Address: 0x2004e8, Func Offset: 0x8
	// Line 757, Address: 0x2004f4, Func Offset: 0x14
	// Line 758, Address: 0x2004f8, Func Offset: 0x18
	// Func End, Address: 0x200508, Func Offset: 0x28
}

// PadButtonRight__8ViewSkelFP6_RwV2d
// Start address: 0x200510
int32 PadButtonRight(_RwV2d* delta)
{
	// Line 746, Address: 0x200510, Func Offset: 0
	// Line 747, Address: 0x200518, Func Offset: 0x8
	// Line 749, Address: 0x200528, Func Offset: 0x18
	// Line 750, Address: 0x20052c, Func Offset: 0x1c
	// Func End, Address: 0x20053c, Func Offset: 0x2c
}

// PadButtonLeft__8ViewSkelFP6_RwV2d
// Start address: 0x200540
int32 PadButtonLeft(_RwV2d* delta)
{
	// Line 739, Address: 0x200540, Func Offset: 0
	// Line 740, Address: 0x200548, Func Offset: 0x8
	// Line 741, Address: 0x200558, Func Offset: 0x18
	// Line 742, Address: 0x20055c, Func Offset: 0x1c
	// Func End, Address: 0x20056c, Func Offset: 0x2c
}

// PadButtonUp__8ViewSkelFP18_RsPadButtonStatus
// Start address: 0x200570
int32 PadButtonUp()
{
	// Line 733, Address: 0x200570, Func Offset: 0
	// Line 734, Address: 0x200574, Func Offset: 0x4
	// Func End, Address: 0x20057c, Func Offset: 0xc
}

// PadButtonDown__8ViewSkelFP18_RsPadButtonStatus
// Start address: 0x200580
int32 PadButtonDown(_RsPadButtonStatus* pbs)
{
	// Line 713, Address: 0x200580, Func Offset: 0
	// Line 717, Address: 0x200588, Func Offset: 0x8
	// Line 719, Address: 0x200598, Func Offset: 0x18
	// Line 720, Address: 0x2005a0, Func Offset: 0x20
	// Line 721, Address: 0x2005a8, Func Offset: 0x28
	// Line 723, Address: 0x2005b8, Func Offset: 0x38
	// Line 726, Address: 0x2005c0, Func Offset: 0x40
	// Line 727, Address: 0x2005c4, Func Offset: 0x44
	// Func End, Address: 0x2005d4, Func Offset: 0x54
}

// CameraSize__8ViewSkelFP7_RwRect
// Start address: 0x2005e0
int32 ViewSkel::CameraSize(_RwRect* rect)
{
	// Line 701, Address: 0x2005e0, Func Offset: 0
	// Line 702, Address: 0x2005e8, Func Offset: 0x8
	// Line 704, Address: 0x2005f4, Func Offset: 0x14
	// Line 708, Address: 0x20061c, Func Offset: 0x3c
	// Line 709, Address: 0x200620, Func Offset: 0x40
	// Func End, Address: 0x200630, Func Offset: 0x50
}

// MouseMove__8ViewSkelFP14_RsMouseStatus
// Start address: 0x200630
int32 ViewSkel::MouseMove(_RsMouseStatus* ms)
{
	_RwV3d offset;
	_RwV3d zoom;
	_RwV2d* offset;
	_RwMatrix* worldToLocal;
	_RwMatrix* tmpMatrix;
	_RwFrame* parent;
	_RwFrame* cameraFrame;
	_RwV2d delta;
	_RwV3d right;
	_RwV3d at;
	_RwV3d up;
	_RwV3d v;
	// Line 339, Address: 0x200630, Func Offset: 0
	// Line 343, Address: 0x200650, Func Offset: 0x20
	// Line 353, Address: 0x200668, Func Offset: 0x38
	// Line 365, Address: 0x200698, Func Offset: 0x68
	// Line 370, Address: 0x2006ac, Func Offset: 0x7c
	// Line 372, Address: 0x2006b8, Func Offset: 0x88
	// Line 374, Address: 0x2006cc, Func Offset: 0x9c
	// Line 377, Address: 0x200700, Func Offset: 0xd0
	// Line 379, Address: 0x20072c, Func Offset: 0xfc
	// Line 380, Address: 0x200734, Func Offset: 0x104
	// Line 383, Address: 0x20076c, Func Offset: 0x13c
	// Line 387, Address: 0x200798, Func Offset: 0x168
	// Line 390, Address: 0x2007cc, Func Offset: 0x19c
	// Line 392, Address: 0x2007f8, Func Offset: 0x1c8
	// Line 393, Address: 0x200800, Func Offset: 0x1d0
	// Line 397, Address: 0x200838, Func Offset: 0x208
	// Line 401, Address: 0x200864, Func Offset: 0x234
	// Line 405, Address: 0x20086c, Func Offset: 0x23c
	// Line 409, Address: 0x2008a4, Func Offset: 0x274
	// Line 411, Address: 0x2008b8, Func Offset: 0x288
	// Line 415, Address: 0x2008dc, Func Offset: 0x2ac
	// Line 420, Address: 0x200904, Func Offset: 0x2d4
	// Line 424, Address: 0x20090c, Func Offset: 0x2dc
	// Line 434, Address: 0x200938, Func Offset: 0x308
	// Line 438, Address: 0x200940, Func Offset: 0x310
	// Line 440, Address: 0x20096c, Func Offset: 0x33c
	// Line 443, Address: 0x200994, Func Offset: 0x364
	// Line 447, Address: 0x20099c, Func Offset: 0x36c
	// Line 451, Address: 0x2009f0, Func Offset: 0x3c0
	// Line 453, Address: 0x200a04, Func Offset: 0x3d4
	// Line 456, Address: 0x200a0c, Func Offset: 0x3dc
	// Line 461, Address: 0x200a30, Func Offset: 0x400
	// Line 466, Address: 0x200a64, Func Offset: 0x434
	// Line 470, Address: 0x200a6c, Func Offset: 0x43c
	// Line 479, Address: 0x200a90, Func Offset: 0x460
	// Line 496, Address: 0x200a98, Func Offset: 0x468
	// Line 497, Address: 0x200ac8, Func Offset: 0x498
	// Line 507, Address: 0x200af8, Func Offset: 0x4c8
	// Line 510, Address: 0x200b18, Func Offset: 0x4e8
	// Line 515, Address: 0x200b20, Func Offset: 0x4f0
	// Line 521, Address: 0x200b2c, Func Offset: 0x4fc
	// Line 527, Address: 0x200b3c, Func Offset: 0x50c
	// Line 532, Address: 0x200b4c, Func Offset: 0x51c
	// Line 533, Address: 0x200b64, Func Offset: 0x534
	// Line 534, Address: 0x200b74, Func Offset: 0x544
	// Line 535, Address: 0x200b8c, Func Offset: 0x55c
	// Line 540, Address: 0x200b9c, Func Offset: 0x56c
	// Line 546, Address: 0x200ba8, Func Offset: 0x578
	// Line 549, Address: 0x200bc8, Func Offset: 0x598
	// Line 550, Address: 0x200bd4, Func Offset: 0x5a4
	// Line 551, Address: 0x200be0, Func Offset: 0x5b0
	// Line 553, Address: 0x200bec, Func Offset: 0x5bc
	// Line 554, Address: 0x200c04, Func Offset: 0x5d4
	// Line 556, Address: 0x200c20, Func Offset: 0x5f0
	// Line 558, Address: 0x200c40, Func Offset: 0x610
	// Line 564, Address: 0x200c58, Func Offset: 0x628
	// Line 569, Address: 0x200c80, Func Offset: 0x650
	// Line 571, Address: 0x200c8c, Func Offset: 0x65c
	// Line 580, Address: 0x200c94, Func Offset: 0x664
	// Line 589, Address: 0x200cb0, Func Offset: 0x680
	// Line 590, Address: 0x200ce0, Func Offset: 0x6b0
	// Line 595, Address: 0x200d10, Func Offset: 0x6e0
	// Line 598, Address: 0x200d30, Func Offset: 0x700
	// Line 600, Address: 0x200d38, Func Offset: 0x708
	// Line 601, Address: 0x200d44, Func Offset: 0x714
	// Line 602, Address: 0x200d54, Func Offset: 0x724
	// Line 603, Address: 0x200d64, Func Offset: 0x734
	// Line 604, Address: 0x200d7c, Func Offset: 0x74c
	// Line 605, Address: 0x200d8c, Func Offset: 0x75c
	// Line 606, Address: 0x200da4, Func Offset: 0x774
	// Line 607, Address: 0x200db4, Func Offset: 0x784
	// Line 612, Address: 0x200dc0, Func Offset: 0x790
	// Line 613, Address: 0x200dd4, Func Offset: 0x7a4
	// Line 615, Address: 0x200df8, Func Offset: 0x7c8
	// Line 616, Address: 0x200e0c, Func Offset: 0x7dc
	// Line 618, Address: 0x200e30, Func Offset: 0x800
	// Line 627, Address: 0x200e38, Func Offset: 0x808
	// Line 634, Address: 0x200e68, Func Offset: 0x838
	// Line 637, Address: 0x200e88, Func Offset: 0x858
	// Line 639, Address: 0x200e90, Func Offset: 0x860
	// Line 640, Address: 0x200e9c, Func Offset: 0x86c
	// Line 641, Address: 0x200eac, Func Offset: 0x87c
	// Line 642, Address: 0x200ebc, Func Offset: 0x88c
	// Line 643, Address: 0x200ed4, Func Offset: 0x8a4
	// Line 644, Address: 0x200ee4, Func Offset: 0x8b4
	// Line 649, Address: 0x200ef0, Func Offset: 0x8c0
	// Line 650, Address: 0x200f1c, Func Offset: 0x8ec
	// Line 652, Address: 0x200f40, Func Offset: 0x910
	// Line 667, Address: 0x200f48, Func Offset: 0x918
	// Line 668, Address: 0x200f4c, Func Offset: 0x91c
	// Line 669, Address: 0x200f54, Func Offset: 0x924
	// Line 670, Address: 0x200f58, Func Offset: 0x928
	// Line 676, Address: 0x200f80, Func Offset: 0x950
	// Line 677, Address: 0x200f88, Func Offset: 0x958
	// Line 678, Address: 0x200f8c, Func Offset: 0x95c
	// Line 679, Address: 0x200f90, Func Offset: 0x960
	// Line 685, Address: 0x200fbc, Func Offset: 0x98c
	// Line 690, Address: 0x200fcc, Func Offset: 0x99c
	// Line 696, Address: 0x200fd8, Func Offset: 0x9a8
	// Line 697, Address: 0x200fdc, Func Offset: 0x9ac
	// Func End, Address: 0x200ffc, Func Offset: 0x9cc
}

// RightButtonUp__8ViewSkelFP14_RsMouseStatus
// Start address: 0x201000
int32 ViewSkel::RightButtonUp()
{
	// Line 329, Address: 0x201000, Func Offset: 0
	// Line 331, Address: 0x201010, Func Offset: 0x10
	// Line 334, Address: 0x201018, Func Offset: 0x18
	// Line 335, Address: 0x20101c, Func Offset: 0x1c
	// Func End, Address: 0x201024, Func Offset: 0x24
}

// RightButtonDown__8ViewSkelFP14_RsMouseStatus
// Start address: 0x201030
int32 ViewSkel::RightButtonDown(_RsMouseStatus* ms)
{
	// Line 307, Address: 0x201030, Func Offset: 0
	// Line 309, Address: 0x20103c, Func Offset: 0xc
	// Line 310, Address: 0x201048, Func Offset: 0x18
	// Line 311, Address: 0x201050, Func Offset: 0x20
	// Line 313, Address: 0x20105c, Func Offset: 0x2c
	// Line 314, Address: 0x201068, Func Offset: 0x38
	// Line 317, Address: 0x201070, Func Offset: 0x40
	// Line 319, Address: 0x20107c, Func Offset: 0x4c
	// Line 320, Address: 0x201080, Func Offset: 0x50
	// Func End, Address: 0x201088, Func Offset: 0x58
}

// LeftButtonUp__8ViewSkelFP14_RsMouseStatus
// Start address: 0x201090
int32 ViewSkel::LeftButtonUp()
{
	// Line 296, Address: 0x201090, Func Offset: 0
	// Line 298, Address: 0x2010a0, Func Offset: 0x10
	// Line 301, Address: 0x2010a8, Func Offset: 0x18
	// Line 302, Address: 0x2010ac, Func Offset: 0x1c
	// Func End, Address: 0x2010b4, Func Offset: 0x24
}

// LeftButtonDown__8ViewSkelFP14_RsMouseStatus
// Start address: 0x2010c0
int32 ViewSkel::LeftButtonDown(_RsMouseStatus* ms)
{
	float32 distance;
	_RpIntersection is;
	// Line 144, Address: 0x2010c0, Func Offset: 0
	// Line 146, Address: 0x2010d8, Func Offset: 0x18
	// Line 148, Address: 0x2010e4, Func Offset: 0x24
	// Line 156, Address: 0x201108, Func Offset: 0x48
	// Line 163, Address: 0x201110, Func Offset: 0x50
	// Line 164, Address: 0x201118, Func Offset: 0x58
	// Line 167, Address: 0x201134, Func Offset: 0x74
	// Line 168, Address: 0x20113c, Func Offset: 0x7c
	// Line 172, Address: 0x20115c, Func Offset: 0x9c
	// Line 184, Address: 0x20116c, Func Offset: 0xac
	// Line 186, Address: 0x201180, Func Offset: 0xc0
	// Line 192, Address: 0x201194, Func Offset: 0xd4
	// Line 194, Address: 0x2011a8, Func Offset: 0xe8
	// Line 200, Address: 0x2011b4, Func Offset: 0xf4
	// Line 202, Address: 0x2011c0, Func Offset: 0x100
	// Line 203, Address: 0x2011c8, Func Offset: 0x108
	// Line 209, Address: 0x2011d0, Func Offset: 0x110
	// Line 211, Address: 0x2011dc, Func Offset: 0x11c
	// Line 214, Address: 0x2011e4, Func Offset: 0x124
	// Line 216, Address: 0x2011ec, Func Offset: 0x12c
	// Line 225, Address: 0x2011f4, Func Offset: 0x134
	// Line 232, Address: 0x201208, Func Offset: 0x148
	// Line 234, Address: 0x201220, Func Offset: 0x160
	// Line 235, Address: 0x201230, Func Offset: 0x170
	// Line 236, Address: 0x201238, Func Offset: 0x178
	// Line 242, Address: 0x201240, Func Offset: 0x180
	// Line 248, Address: 0x20124c, Func Offset: 0x18c
	// Line 249, Address: 0x201254, Func Offset: 0x194
	// Line 250, Address: 0x20125c, Func Offset: 0x19c
	// Line 260, Address: 0x201264, Func Offset: 0x1a4
	// Line 261, Address: 0x201270, Func Offset: 0x1b0
	// Line 262, Address: 0x201284, Func Offset: 0x1c4
	// Line 263, Address: 0x201290, Func Offset: 0x1d0
	// Line 265, Address: 0x2012a4, Func Offset: 0x1e4
	// Line 269, Address: 0x2012b0, Func Offset: 0x1f0
	// Line 273, Address: 0x2012b8, Func Offset: 0x1f8
	// Line 274, Address: 0x2012c4, Func Offset: 0x204
	// Line 276, Address: 0x2012d8, Func Offset: 0x218
	// Line 283, Address: 0x2012e4, Func Offset: 0x224
	// Line 284, Address: 0x2012e8, Func Offset: 0x228
	// Func End, Address: 0x201300, Func Offset: 0x240
}

// FileLoad__8ViewSkelFPc
// Start address: 0x201300
int32 ViewSkel::FileLoad(int8* pathname)
{
	int32 retVal;
	int8* psFilename;
	// Line 126, Address: 0x201300, Func Offset: 0
	// Line 127, Address: 0x201318, Func Offset: 0x18
	// Line 130, Address: 0x201330, Func Offset: 0x30
	// Line 132, Address: 0x201334, Func Offset: 0x34
	// Line 134, Address: 0x20134c, Func Offset: 0x4c
	// Line 137, Address: 0x201350, Func Offset: 0x50
	// Line 139, Address: 0x201368, Func Offset: 0x68
	// Line 140, Address: 0x20136c, Func Offset: 0x6c
	// Func End, Address: 0x201388, Func Offset: 0x88
}

// Update__8ViewSkelFf
// Start address: 0x201390
int32 ViewSkel::Update(float32 timeDelta)
{
	// Line 70, Address: 0x201390, Func Offset: 0
	// Line 77, Address: 0x2013a0, Func Offset: 0x10
	// Line 81, Address: 0x2013d0, Func Offset: 0x40
	// Line 87, Address: 0x2013ec, Func Offset: 0x5c
	// Line 119, Address: 0x201414, Func Offset: 0x84
	// Line 121, Address: 0x201420, Func Offset: 0x90
	// Line 122, Address: 0x201424, Func Offset: 0x94
	// Func End, Address: 0x201438, Func Offset: 0xa8
}

// PluginAttach__8ViewSkelFv
// Start address: 0x201440
int32 ViewSkel::PluginAttach()
{
	int32 rv;
	// Line 39, Address: 0x201440, Func Offset: 0
	// Line 41, Address: 0x201448, Func Offset: 0x8
	// Line 44, Address: 0x201450, Func Offset: 0x10
	// Line 46, Address: 0x20146c, Func Offset: 0x2c
	// Line 48, Address: 0x201474, Func Offset: 0x34
	// Line 49, Address: 0x201484, Func Offset: 0x44
	// Line 52, Address: 0x201490, Func Offset: 0x50
	// Line 54, Address: 0x2014a0, Func Offset: 0x60
	// Line 55, Address: 0x2014b0, Func Offset: 0x70
	// Line 59, Address: 0x2014bc, Func Offset: 0x7c
	// Line 61, Address: 0x2014cc, Func Offset: 0x8c
	// Line 62, Address: 0x2014dc, Func Offset: 0x9c
	// Line 65, Address: 0x2014e8, Func Offset: 0xa8
	// Line 66, Address: 0x2014ec, Func Offset: 0xac
	// Func End, Address: 0x2014fc, Func Offset: 0xbc
}

