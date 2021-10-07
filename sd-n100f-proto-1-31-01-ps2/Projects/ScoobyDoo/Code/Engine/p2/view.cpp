typedef struct _RpMeshHeader;
typedef struct _RpWorldSector;
typedef struct _RwRaster;
typedef struct _RpIntersection;
typedef struct _RpMorphTarget;
typedef struct PsMouse;
typedef struct _RxClusterDefinition;
typedef struct _RpWorld;
typedef struct _RxOutputSpec;
typedef struct _RxPipelineNode;
typedef struct ViewApp;
typedef struct _rpAtomic;
typedef struct _rxHeapSuperBlockDescriptor;
typedef struct _RwStreamFile;
typedef struct _rpInterpolator;
typedef struct _rwResEntryTag;
typedef struct _RxHeap;
typedef struct _rxHeapBlockHeader;
typedef enum _RxClusterValidityReq;
typedef struct _RpClump;
typedef struct _RpCollSector;
typedef struct _rxHeapFreeBlock;
typedef struct _RxPipelineNodeTopSortData;
typedef struct _RpLight;
typedef struct _RwV2d;
typedef enum _RwTextureFilterMode;
typedef struct _RpSector;
typedef struct _RxPipelineNodeParam;
typedef struct _RxPipelineCluster;
typedef struct AppCamera;
typedef enum _rxEmbeddedPacketState;
typedef struct _RpIntersectData;
typedef struct _RwFrame;
typedef struct _RwLLLink;
typedef struct _RxNodeDefinition;
typedef enum _RxClusterValid;
typedef struct _RpMaterialList;
typedef struct _RwMatrix;
typedef struct _RwSurfaceProperties;
typedef enum _RwCameraProjection;
typedef struct _RpMaterial;
typedef struct _RwStream;
typedef struct _RwObjectHasFrame;
typedef struct PadMap;
typedef struct _RwV3d;
typedef struct RwSkel;
typedef struct ViewSkel;
typedef struct _RpPolygon;
typedef struct _RxPipelineRequiresCluster;
typedef struct _RxPipeline;
typedef struct _RwTexDictionary;
typedef struct _RpVertexNormal;
typedef struct _RpCollisionTriangle;
typedef struct _RwTexCoords;
typedef struct _rxReq;
typedef struct _RwRGBA;
typedef struct _RpGeometry;
typedef struct _RwObject;
typedef struct _RwRGBAReal;
typedef struct _RwStreamCustom;
typedef struct _RsMouseStatus;
typedef struct RsMouse;
typedef struct Platform;
typedef struct _RwCamera;
typedef struct _RwTexture;
typedef enum _RwStreamType;
typedef struct _RxClusterRef;
typedef struct _RwBBox;
typedef struct _RxIoSpec;
typedef struct _RwSphere;
typedef enum VMode;
typedef struct _RxNodeMethods;
typedef struct _RwStreamUnion;
typedef struct _RpTriangle;
typedef struct _RwFrustumPlane;
typedef enum _RxClusterForcePresent;
typedef enum _RwStreamAccessType;
typedef struct _RxPacket;
typedef enum MMMode;
typedef enum _RxNodeDefEditable;
typedef struct _RwLine;
typedef struct _RxClusterUnion;
typedef enum _RwTextureAddressMode;
typedef struct _RxCluster;
typedef enum _rpWorldRenderOrder;
typedef struct _RwStreamMemory;
typedef struct _RwPlane;
typedef struct _RwLinkList;
typedef struct Camera;
typedef enum _RpIntersectType;
typedef enum AMode;

typedef _RpWorldSector*(*type_0)(_RpWorldSector*);
typedef void(*type_1)(_rwResEntryTag*);
typedef int32(*type_2)(_RxPipelineNode*, _RxPipelineNodeParam*);
typedef int32(*type_4)(void*);
typedef int32(*type_5)(_RxNodeDefinition*);
typedef void(*type_7)(_RxNodeDefinition*);
typedef uint32(*type_9)(void*, void*, uint32);
typedef int32(*type_11)(_RxPipelineNode*);
typedef _RwObjectHasFrame*(*type_12)(_RwObjectHasFrame*);
typedef void(*type_13)(_RxPipelineNode*);
typedef int32(*type_14)(void*, void*, uint32);
typedef _RpClump*(*type_15)(_RpClump*, void*);
typedef int32(*type_16)(_RxPipelineNode*, _RxPipeline*);
typedef int32(*type_17)(void*, uint32);
typedef _RpCollisionTriangle*(*type_18)(_RpIntersection*, _RpCollisionTriangle*, float32, void*);
typedef uint32(*type_19)(_RxPipelineNode*, uint32, uint32, void*);
typedef _rpAtomic*(*type_21)(_rpAtomic*);
typedef _RwCamera*(*type_23)(_RwCamera*);
typedef _RwCamera*(*type_26)(_RwCamera*);

typedef _RwFrustumPlane type_3[6];
typedef _RwV3d type_6[8];
typedef uint32 type_8[4096];
typedef uint32 type_10[4];
typedef int8 type_20[1024];
typedef _RxCluster type_22[1];
typedef _RwV3d* type_24[3];
typedef int8 type_25[32];
typedef int8 type_27[32];
typedef int8 type_28[2];
typedef uint16 type_29[3];
typedef uint16 type_30[3];

struct _RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
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

struct _RpIntersection
{
	_RpIntersectData t;
	_RpIntersectType type;
};

struct _RpMorphTarget
{
	_RpGeometry* parentGeom;
	_RwSphere boundingSphere;
	_RwV3d* verts;
	_RwV3d* normals;
};

struct PsMouse
{
};

struct _RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
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

	void* __ct();
	void* __dt();
	int32 fileLoad(int8* filename);
	void worldDestroy();
	void worldInit();
	void render();
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

struct _rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	_rxHeapSuperBlockDescriptor* next;
};

struct _RwStreamFile
{
	void* fpFile;
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

struct _rwResEntryTag
{
	_RwLLLink link;
	int32 size;
	void* owner;
	_rwResEntryTag** ownerRef;
	void(*destroyNotify)(_rwResEntryTag*);
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

enum _RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct _RpClump
{
	_RwObject object;
	_RwLinkList atomicList;
	_RwLLLink inWorldLink;
	_RpClump*(*callback)(_RpClump*, void*);
	uint16 renderFrame;
};

struct _RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
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

struct _RwV2d
{
	float32 x;
	float32 y;
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

struct _RpSector
{
	int32 type;
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

struct AppCamera : Camera
{
	_RwRaster* backdrop;
	float32 cameraDistance;
	_RwV2d offset;
	_RpWorld* world;
};

enum _rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
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

struct _RwLLLink
{
	_RwLLLink* next;
	_RwLLLink* prev;
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

struct _RpMaterial
{
	_RwTexture* texture;
	_RwRGBA color;
	_RxPipeline* pipeline;
	_RwSurfaceProperties surfaceProps;
	int16 refCount;
	int16 pad;
};

struct _RwStream
{
	_RwStreamType type;
	_RwStreamAccessType accessType;
	int32 position;
	_RwStreamUnion Type;
	int32 rwOwned;
};

struct _RwObjectHasFrame
{
	_RwObject object;
	_RwLLLink lFrame;
	_RwObjectHasFrame*(*sync)(_RwObjectHasFrame*);
};

struct PadMap
{
	RwSkel* skel;
	_RsMouseStatus ms;
};

struct _RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct RwSkel
{
	int8* appName;
	int32 maximumWidth;
	int32 maximumHeight;
	RsMouse* mouse;
	Platform* ps;
};

struct ViewSkel : RwSkel
{
	ViewApp* Viewer;
	PadMap* PdMap;
};

struct _RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
};

struct _RxPipelineRequiresCluster
{
	_RxClusterDefinition* clusterDef;
	_RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
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

struct _RwTexDictionary
{
	_RwObject object;
	_RwLinkList texturesInDict;
	_RwLLLink lInInstance;
};

struct _RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

struct _RpCollisionTriangle
{
	_RwV3d normal;
	_RwV3d point;
	int32 index;
	_RwV3d* vertices[3];
};

struct _RwTexCoords
{
	float32 u;
	float32 v;
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

struct _RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct _RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

struct _RwStreamCustom
{
	int32(*sfnclose)(void*);
	uint32(*sfnread)(void*, void*, uint32);
	int32(*sfnwrite)(void*, void*, uint32);
	int32(*sfnskip)(void*, uint32);
	void* data;
};

struct _RsMouseStatus
{
	_RwV2d pos;
	_RwV2d delta;
	int32 shift;
	int32 control;
};

struct RsMouse
{
	_RwV2d pos;
	_RwRaster* raster;
	PsMouse* psmouse;
	int32 draw;
};

struct Platform
{
	int32 quit;
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

enum _RwStreamType
{
	rwNASTREAM,
	rwSTREAMFILE,
	rwSTREAMFILENAME,
	rwSTREAMMEMORY,
	rwSTREAMCUSTOM,
	rwSTREAMTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct _RxClusterRef
{
	_RxClusterDefinition* clusterDef;
	_RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct _RwBBox
{
	_RwV3d sup;
	_RwV3d inf;
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

enum VMode
{
	VModeClump,
	VModeWorld
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

struct _RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
};

struct _RwFrustumPlane
{
	_RwPlane plane;
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
};

enum _RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

enum _RwStreamAccessType
{
	rwNASTREAMACCESS,
	rwSTREAMREAD,
	rwSTREAMWRITE,
	rwSTREAMAPPEND,
	rwSTREAMACCESSTYPEFORCEENUMSIZEINT = 0x7fffffff
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

enum _RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
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

enum _rpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct _RwStreamMemory
{
	uint32 position;
	uint32 nSize;
	uint8* memBlock;
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

struct Camera
{
	_RwCamera* camera;
	int32 m_Preset;
	float32 m_TetherLength;
	float32 m_TetherHeightPerc;
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

enum AMode
{
	ANoAction,
	ASpinClump
};

ViewSkel* App;
_RwRGBA FGNDColor;
_RwRGBA BGNDColor;
uint32 ourGlobals[4096];
_RpCollisionTriangle*(*AtomicPickFunc)(_RpIntersection*, _RpCollisionTriangle*, float32, void*);

void* __ct();
void* __dt();
int32 fileLoad(int8* filename);
void worldDestroy();
void worldInit();
void render();
RwSkel* RegisterSkelClass();
void UnRegisterSkelClass();
_rpAtomic* WorldPickFunc(_RpIntersection* is, _rpAtomic* a, float32 distance, void* data);
int32 RsSetModelTexturePath(int8* pathName);
_RpCollisionTriangle* AtomicPickFunc(_RpCollisionTriangle* cp, float32 distance, void* data);

// __ct__7ViewAppFv
// Start address: 0x201500
void* ViewApp::__ct()
{
	// Line 556, Address: 0x201500, Func Offset: 0
	// Line 559, Address: 0x201510, Func Offset: 0x10
	// Line 563, Address: 0x201514, Func Offset: 0x14
	// Line 566, Address: 0x20154c, Func Offset: 0x4c
	// Line 568, Address: 0x201558, Func Offset: 0x58
	// Line 572, Address: 0x201578, Func Offset: 0x78
	// Line 576, Address: 0x201584, Func Offset: 0x84
	// Line 578, Address: 0x20159c, Func Offset: 0x9c
	// Line 627, Address: 0x2015b4, Func Offset: 0xb4
	// Line 629, Address: 0x2015b8, Func Offset: 0xb8
	// Line 631, Address: 0x2015bc, Func Offset: 0xbc
	// Line 633, Address: 0x2015c0, Func Offset: 0xc0
	// Line 635, Address: 0x2015c4, Func Offset: 0xc4
	// Line 658, Address: 0x2015c8, Func Offset: 0xc8
	// Func End, Address: 0x2015e0, Func Offset: 0xe0
}

// __dt__7ViewAppFv
// Start address: 0x2015e0
void* ViewApp::__dt()
{
	_RwFrame* frame;
	// Line 490, Address: 0x2015e0, Func Offset: 0
	// Line 491, Address: 0x201604, Func Offset: 0x24
	// Line 498, Address: 0x20160c, Func Offset: 0x2c
	// Line 500, Address: 0x201618, Func Offset: 0x38
	// Line 502, Address: 0x201628, Func Offset: 0x48
	// Line 504, Address: 0x20163c, Func Offset: 0x5c
	// Line 508, Address: 0x201644, Func Offset: 0x64
	// Line 510, Address: 0x201654, Func Offset: 0x74
	// Line 514, Address: 0x201658, Func Offset: 0x78
	// Line 517, Address: 0x2016dc, Func Offset: 0xfc
	// Line 520, Address: 0x2016e8, Func Offset: 0x108
	// Line 525, Address: 0x2016f4, Func Offset: 0x114
	// Line 526, Address: 0x201704, Func Offset: 0x124
	// Line 528, Address: 0x201714, Func Offset: 0x134
	// Line 530, Address: 0x201720, Func Offset: 0x140
	// Line 532, Address: 0x201728, Func Offset: 0x148
	// Line 539, Address: 0x201734, Func Offset: 0x154
	// Line 541, Address: 0x201740, Func Offset: 0x160
	// Line 545, Address: 0x20174c, Func Offset: 0x16c
	// Line 547, Address: 0x201758, Func Offset: 0x178
	// Line 549, Address: 0x201778, Func Offset: 0x198
	// Line 551, Address: 0x20177c, Func Offset: 0x19c
	// Line 553, Address: 0x20179c, Func Offset: 0x1bc
	// Func End, Address: 0x2017b8, Func Offset: 0x1d8
}

// fileLoad__7ViewAppFPc
// Start address: 0x2017c0
int32 ViewApp::fileLoad(int8* filename)
{
	int32 dot;
	int32 status;
	// Line 459, Address: 0x2017c0, Func Offset: 0
	// Line 460, Address: 0x2017e0, Func Offset: 0x20
	// Line 463, Address: 0x2017e4, Func Offset: 0x24
	// Line 465, Address: 0x201800, Func Offset: 0x40
	// Line 467, Address: 0x201828, Func Offset: 0x68
	// Line 468, Address: 0x20183c, Func Offset: 0x7c
	// Line 469, Address: 0x20184c, Func Offset: 0x8c
	// Line 470, Address: 0x201854, Func Offset: 0x94
	// Line 472, Address: 0x20187c, Func Offset: 0xbc
	// Line 473, Address: 0x201944, Func Offset: 0x184
	// Line 474, Address: 0x20194c, Func Offset: 0x18c
	// Line 476, Address: 0x201974, Func Offset: 0x1b4
	// Line 486, Address: 0x201a58, Func Offset: 0x298
	// Line 487, Address: 0x201a5c, Func Offset: 0x29c
	// Func End, Address: 0x201a7c, Func Offset: 0x2bc
}

// worldDestroy__7ViewAppFv
// Start address: 0x201a80
void ViewApp::worldDestroy()
{
	// Line 307, Address: 0x201a80, Func Offset: 0
	// Line 308, Address: 0x201a90, Func Offset: 0x10
	// Line 310, Address: 0x201a9c, Func Offset: 0x1c
	// Line 312, Address: 0x201aa8, Func Offset: 0x28
	// Line 313, Address: 0x201ab8, Func Offset: 0x38
	// Line 314, Address: 0x201ac4, Func Offset: 0x44
	// Line 315, Address: 0x201ac8, Func Offset: 0x48
	// Line 318, Address: 0x201acc, Func Offset: 0x4c
	// Line 320, Address: 0x201ad8, Func Offset: 0x58
	// Line 323, Address: 0x201ae8, Func Offset: 0x68
	// Line 325, Address: 0x201af4, Func Offset: 0x74
	// Line 328, Address: 0x201b04, Func Offset: 0x84
	// Line 329, Address: 0x201b10, Func Offset: 0x90
	// Line 331, Address: 0x201b14, Func Offset: 0x94
	// Func End, Address: 0x201b28, Func Offset: 0xa8
}

// worldInit__7ViewAppFv
// Start address: 0x201b30
void ViewApp::worldInit()
{
	_RwV3d v;
	// Line 273, Address: 0x201b30, Func Offset: 0
	// Line 277, Address: 0x201b44, Func Offset: 0x14
	// Line 278, Address: 0x201b54, Func Offset: 0x24
	// Line 280, Address: 0x201b64, Func Offset: 0x34
	// Line 289, Address: 0x201b78, Func Offset: 0x48
	// Line 290, Address: 0x201b8c, Func Offset: 0x5c
	// Line 293, Address: 0x201b98, Func Offset: 0x68
	// Line 294, Address: 0x201bbc, Func Offset: 0x8c
	// Line 296, Address: 0x201bcc, Func Offset: 0x9c
	// Line 299, Address: 0x201bd8, Func Offset: 0xa8
	// Line 301, Address: 0x201c08, Func Offset: 0xd8
	// Line 303, Address: 0x201c18, Func Offset: 0xe8
	// Func End, Address: 0x201c30, Func Offset: 0x100
}

// render__7ViewAppFv
// Start address: 0x201c30
void ViewApp::render()
{
	// Line 219, Address: 0x201c30, Func Offset: 0
	// Line 220, Address: 0x201c40, Func Offset: 0x10
	// Line 222, Address: 0x201c50, Func Offset: 0x20
	// Line 224, Address: 0x201c5c, Func Offset: 0x2c
	// Line 226, Address: 0x201c68, Func Offset: 0x38
	// Line 228, Address: 0x201c78, Func Offset: 0x48
	// Line 230, Address: 0x201c8c, Func Offset: 0x5c
	// Line 242, Address: 0x201c98, Func Offset: 0x68
	// Line 245, Address: 0x201cac, Func Offset: 0x7c
	// Line 247, Address: 0x201cc8, Func Offset: 0x98
	// Line 250, Address: 0x201cd8, Func Offset: 0xa8
	// Line 252, Address: 0x201cf4, Func Offset: 0xc4
	// Func End, Address: 0x201d08, Func Offset: 0xd8
}

// RegisterSkelClass__Fv
// Start address: 0x201d10
RwSkel* RegisterSkelClass()
{
	// Line 204, Address: 0x201d10, Func Offset: 0
	// Line 205, Address: 0x201d18, Func Offset: 0x8
	// Line 207, Address: 0x201d24, Func Offset: 0x14
	// Line 210, Address: 0x201d50, Func Offset: 0x40
	// Line 211, Address: 0x201d54, Func Offset: 0x44
	// Func End, Address: 0x201d64, Func Offset: 0x54
}

// UnRegisterSkelClass__Fv
// Start address: 0x201d70
void UnRegisterSkelClass()
{
	// Line 193, Address: 0x201d70, Func Offset: 0
	// Line 194, Address: 0x201d78, Func Offset: 0x8
	// Line 196, Address: 0x201d84, Func Offset: 0x14
	// Line 198, Address: 0x201da4, Func Offset: 0x34
	// Line 200, Address: 0x201da8, Func Offset: 0x38
	// Func End, Address: 0x201db8, Func Offset: 0x48
}

// WorldPickFunc__FP15_RpIntersectionP14_RpWorldSectorP9_rpAtomicfPv
// Start address: 0x201dc0
_rpAtomic* WorldPickFunc(_RpIntersection* is, _rpAtomic* a, float32 distance, void* data)
{
	float32 oldDistance;
	// Line 175, Address: 0x201dc0, Func Offset: 0
	// Line 176, Address: 0x201de0, Func Offset: 0x20
	// Line 182, Address: 0x201de4, Func Offset: 0x24
	// Line 184, Address: 0x201dfc, Func Offset: 0x3c
	// Line 186, Address: 0x201e10, Func Offset: 0x50
	// Line 188, Address: 0x201e1c, Func Offset: 0x5c
	// Line 189, Address: 0x201e20, Func Offset: 0x60
	// Func End, Address: 0x201e3c, Func Offset: 0x7c
}

// RsSetModelTexturePath__FPc
// Start address: 0x201e40
int32 RsSetModelTexturePath(int8* pathName)
{
	int8 separator[2];
	int8* extender;
	int8* testSeparator;
	int8* lastSeparator;
	uint32 numChars;
	int8* temp;
	int8 pad[1024];
	// Line 106, Address: 0x201e40, Func Offset: 0
	// Line 115, Address: 0x201e58, Func Offset: 0x18
	// Line 118, Address: 0x201e94, Func Offset: 0x54
	// Line 120, Address: 0x201ea0, Func Offset: 0x60
	// Line 121, Address: 0x201ebc, Func Offset: 0x7c
	// Line 123, Address: 0x201ec4, Func Offset: 0x84
	// Line 128, Address: 0x201ed0, Func Offset: 0x90
	// Line 134, Address: 0x201ed4, Func Offset: 0x94
	// Line 135, Address: 0x201ef0, Func Offset: 0xb0
	// Line 137, Address: 0x201ef4, Func Offset: 0xb4
	// Line 138, Address: 0x201f10, Func Offset: 0xd0
	// Line 140, Address: 0x201f28, Func Offset: 0xe8
	// Line 141, Address: 0x201f44, Func Offset: 0x104
	// Line 143, Address: 0x201f5c, Func Offset: 0x11c
	// Line 144, Address: 0x201f78, Func Offset: 0x138
	// Line 146, Address: 0x201f90, Func Offset: 0x150
	// Line 147, Address: 0x201fac, Func Offset: 0x16c
	// Line 149, Address: 0x201fb4, Func Offset: 0x174
	// Line 151, Address: 0x201fb8, Func Offset: 0x178
	// Line 152, Address: 0x201fcc, Func Offset: 0x18c
	// Line 153, Address: 0x201fd4, Func Offset: 0x194
	// Line 154, Address: 0x201fd8, Func Offset: 0x198
	// Line 156, Address: 0x201fe8, Func Offset: 0x1a8
	// Line 158, Address: 0x201ffc, Func Offset: 0x1bc
	// Line 160, Address: 0x202008, Func Offset: 0x1c8
	// Line 162, Address: 0x202020, Func Offset: 0x1e0
	// Line 165, Address: 0x20202c, Func Offset: 0x1ec
	// Line 167, Address: 0x202038, Func Offset: 0x1f8
	// Line 169, Address: 0x202050, Func Offset: 0x210
	// Line 170, Address: 0x202054, Func Offset: 0x214
	// Func End, Address: 0x202070, Func Offset: 0x230
}

// AtomicPickFunc__FP15_RpIntersectionP20_RpCollisionTrianglefPv
// Start address: 0x202070
_RpCollisionTriangle* AtomicPickFunc(_RpCollisionTriangle* cp, float32 distance, void* data)
{
	// Line 81, Address: 0x202070, Func Offset: 0
	// Line 83, Address: 0x202084, Func Offset: 0x14
	// Line 85, Address: 0x202088, Func Offset: 0x18
	// Line 86, Address: 0x20208c, Func Offset: 0x1c
	// Func End, Address: 0x202094, Func Offset: 0x24
}

