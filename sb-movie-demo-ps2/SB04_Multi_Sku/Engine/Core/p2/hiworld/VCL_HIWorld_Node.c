typedef enum RpLightType;
typedef struct RxClusterDefinition;
typedef struct RxPS2AllPipeData;
typedef struct RwMatrixTag;
typedef struct RpInterpolator;
typedef struct RwTexture;
typedef struct RwFrustumPlane;
typedef enum RxNodeDefEditable;
typedef struct rwPS2AllResEntryHeader;
typedef enum RpMeshHeaderFlags;
typedef struct RpPDSSkyVU1CodeTemplate;
typedef struct RwRaster;
typedef struct rxHeapBlockHeader;
typedef struct RxIoSpec;
typedef struct BatchData;
typedef struct RwBBox;
typedef struct rwPS2AllClusterInstanceInfo;
typedef struct RwV4dTag;
typedef struct RxPacket;
typedef struct RwPlane;
typedef struct RxOutputSpec;
typedef struct RwV2d;
typedef struct RwSurfaceProperties;
typedef struct RwRGBA;
typedef struct RpPDSSkyMatCluster;
typedef struct RwFrame;
typedef enum RwCullMode;
typedef struct RpMesh;
typedef struct RwSphere;
typedef struct RxCluster;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct RpLight;
typedef enum RxClusterValid;
typedef struct RwCamera;
typedef struct RpPDSSkyMatPrimitive;
typedef struct RpAtomic;
typedef struct RxPipelineCluster;
typedef enum RxClusterValidityReq;
typedef struct RpGeometry;
typedef struct RxClusterRef;
typedef struct RpMaterialList;
typedef struct RpMorphTarget;
typedef struct RwMeshCache;
typedef struct RwRGBAReal;
typedef struct rwPS2AllClusterQuickInfo;
typedef enum RxClusterForcePresent;
typedef struct rxNodePS2AllPvtData;
typedef struct RpPDSSkyMatTemplate;
typedef struct RpMaterial;
typedef struct RxNodeMethods;
typedef enum RwCameraProjection;
typedef struct RwResEntry;
typedef struct rxNodePS2AllMatPvtData;
typedef struct RwObjectHasFrame;
typedef enum rxEmbeddedPacketState;
typedef struct RwV3d;
typedef enum RxInstanceFlags;
typedef struct RxPipelineNode;
typedef struct rwPS2AllResEntryFormat;
typedef struct RwLLLink;
typedef struct RpMeshHeader;
typedef struct RxPipeline;
typedef struct rwPS2AllFieldRec;
typedef struct RxPipelineNodeTopSortData;
typedef struct RpClump;
typedef struct RpPDSSkyObjTemplate;
typedef struct RxPipelineNodeParam;
typedef struct RwTexDictionary;
typedef struct rxReq;
typedef struct RwTexCoords;
typedef struct RxPipelineRequiresCluster;
typedef struct RxHeap;
typedef struct rpAtomicPS2AllLightData;
typedef enum RwPrimitiveType;
typedef struct RwLinkList;
typedef struct RxNodeDefinition;
typedef struct RpTriangle;
typedef struct rxHeapFreeBlock;
typedef struct RwObject;

typedef RpAtomic*(*type_7)(RpAtomic*);
typedef int32(*type_12)(RxPS2AllPipeData*);
typedef int32(*type_13)(RxPS2AllPipeData*);
typedef int32(*type_15)(RxPS2AllPipeData*, void**, uint32);
typedef RwResEntry*(*type_17)(RxPS2AllPipeData*, RwResEntry**, uint32, void(*)(RwResEntry*));
typedef int32(*type_18)(RxPS2AllPipeData*);
typedef RwCamera*(*type_19)(RwCamera*);
typedef RwCamera*(*type_20)(RwCamera*);
typedef uint32(*type_23)(RxPipelineNode*, uint32, uint32, void*);
typedef void(*type_24)(RwResEntry*);
typedef int32(*type_25)(RxPipelineNode*, RxPipeline*);
typedef RwObjectHasFrame*(*type_26)(RwObjectHasFrame*);
typedef void(*type_27)(RxPipelineNode*);
typedef int32(*type_30)(RxPipelineNode*);
typedef void(*type_31)(RxNodeDefinition*);
typedef int32(*type_33)(RxNodeDefinition*);
typedef int32(*type_34)(RxPipelineNode*, RxPipelineNodeParam*);
typedef RpClump*(*type_38)(RpClump*, void*);
typedef int32(*type_39)(RxPS2AllPipeData*, RwMatrixTag**);
typedef int32(*type_41)(RxPS2AllPipeData*);

typedef RwV3d type_0[8];
typedef RwFrustumPlane type_1[6];
typedef uint16 type_2[3];
typedef uint32 type_3[12];
typedef rwPS2AllClusterInstanceInfo type_4[12];
typedef RwV4dTag type_5[12];
typedef uint32 type_6[4];
typedef uint32 type_8[4096];
typedef RwV4dTag type_9[4];
typedef RxCluster type_10[1];
typedef RpLight* type_11[32];
typedef void* type_14[2];
typedef int32 type_16[4];
typedef RwResEntry* type_21[1];
typedef RpPDSSkyMatCluster type_22[10];
typedef int8 type_28[32];
typedef int8 type_29[32];
typedef rwPS2AllFieldRec type_32[12];
typedef rwPS2AllFieldRec type_35[12];
typedef rwPS2AllClusterQuickInfo type_36[12];
typedef uint8 type_37[1];
typedef RwTexCoords* type_40[8];
typedef uint8 type_42[2];

enum RpLightType
{
	rpNALIGHTTYPE,
	rpLIGHTDIRECTIONAL,
	rpLIGHTAMBIENT,
	rpLIGHTPOINT = 0x80,
	rpLIGHTSPOT,
	rpLIGHTSPOTSOFT,
	rpLIGHTTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct RxPS2AllPipeData
{
	rxNodePS2AllPvtData* objPvtData;
	rxNodePS2AllMatPvtData* matPvtData;
	void* sourceObject;
	RpMeshHeader* meshHeader;
	RwMeshCache* meshCache;
	RxInstanceFlags objInstance;
	uint32 objIdentifier;
	float32 spExtra;
	int32 numMorphTargets;
	uint32 fastMorphing;
	uint8 transType;
	uint8 primType;
	uint8 matModulate;
	uint8 vu1CodeIndex;
	RpMesh* mesh;
	RwResEntry** cacheEntryRef;
	RxInstanceFlags meshInstance;
	uint32 meshIdentifier;
	RwSurfaceProperties* surfProps;
	RwTexture* texture;
	RwRGBA matCol;
};

struct RwMatrixTag
{
	RwV3d right;
	uint32 flags;
	RwV3d up;
	uint32 pad1;
	RwV3d at;
	uint32 pad2;
	RwV3d pos;
	uint32 pad3;
};

struct RpInterpolator
{
	int32 flags;
	int16 startMorphTarget;
	int16 endMorphTarget;
	float32 time;
	float32 recipTime;
	float32 position;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	int8 name[32];
	int8 mask[32];
	uint32 filterAddressing;
	int32 refCount;
};

struct RwFrustumPlane
{
	RwPlane plane;
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct rwPS2AllResEntryHeader
{
	int32 refCnt;
	int32 clrCnt;
	<unknown fundamental type (0xa510)>* data;
	uint32 numVerts;
	uint32 objIdentifier;
	uint32 meshIdentifier;
	int32 batchSize;
	int32 numBatches;
	int32 batchesPerTag;
	int32 morphStart;
	int32 morphFinish;
	int32 morphNum;
	rwPS2AllClusterQuickInfo clquickinfo[12];
	rwPS2AllFieldRec fieldRec[12];
};

enum RpMeshHeaderFlags
{
	rpMESHHEADERTRISTRIP = 0x1,
	rpMESHHEADERTRIFAN,
	rpMESHHEADERLINELIST = 0x4,
	rpMESHHEADERPOLYLINE = 0x8,
	rpMESHHEADERPOINTLIST = 0x10,
	rpMESHHEADERPRIMMASK = 0xff,
	rpMESHHEADERUNINDEXED,
	rpMESHHEADERFLAGSFORCEENUMSIZEINT = 0x7fffffff
};

struct RpPDSSkyVU1CodeTemplate
{
	void** array;
	uint32 slots;
};

struct RwRaster
{
	RwRaster* parent;
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

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
};

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

struct BatchData
{
	int32 size;
	uint16* indices;
	RwV4dTag* xyzw;
	RwV2d* uv;
	RwRGBA* rgba;
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct rwPS2AllClusterInstanceInfo
{
	uint32 attrib;
	uint32 stride;
};

struct RwV4dTag
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
};

struct RxPacket
{
	uint16 flags;
	uint16 numClusters;
	RxPipeline* pipeline;
	uint32* inputToClusterSlot;
	uint32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	RxCluster clusters[1];
};

struct RwPlane
{
	RwV3d normal;
	float32 distance;
};

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct RwV2d
{
	float32 x;
	float32 y;
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct RpPDSSkyMatCluster
{
	RxClusterDefinition* definition;
	uint32 type;
};

struct RwFrame
{
	RwObject object;
	RwLLLink inDirtyListLink;
	RwMatrixTag modelling;
	RwMatrixTag ltm;
	RwLinkList objectList;
	RwFrame* child;
	RwFrame* next;
	RwFrame* root;
};

enum RwCullMode
{
	rwCULLMODENACULLMODE,
	rwCULLMODECULLNONE,
	rwCULLMODECULLBACK,
	rwCULLMODECULLFRONT,
	rwCULLMODEFORCEENUMSIZEINT = 0x7fffffff
};

struct RpMesh
{
	uint16* indices;
	uint32 numIndices;
	RpMaterial* material;
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
};

struct RxCluster
{
	uint16 flags;
	uint16 stride;
	void* data;
	void* currentData;
	uint32 numAlloced;
	uint32 numUsed;
	RxPipelineCluster* clusterRef;
	uint32 attributes;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct RpLight
{
	RwObjectHasFrame object;
	float32 radius;
	RwRGBAReal color;
	float32 minusCosAngle;
	RwLinkList WorldSectorsInLight;
	RwLLLink inWorld;
	uint16 lightFrame;
	uint16 pad;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	RwCamera*(*beginUpdate)(RwCamera*);
	RwCamera*(*endUpdate)(RwCamera*);
	RwMatrixTag viewMatrix;
	RwRaster* frameBuffer;
	RwRaster* zBuffer;
	RwV2d viewWindow;
	RwV2d recipViewWindow;
	RwV2d viewOffset;
	float32 nearPlane;
	float32 farPlane;
	float32 fogPlane;
	float32 zScale;
	float32 zShift;
	RwFrustumPlane frustumPlanes[6];
	RwBBox frustumBoundBox;
	RwV3d frustumCorners[8];
};

struct RpPDSSkyMatPrimitive
{
	RwPrimitiveType type;
	int32 clusterStride;
	int32 vertexCount;
	int32 primCount;
	int32 vifOffset;
};

struct RpAtomic
{
	RwObjectHasFrame object;
	RwResEntry* repEntry;
	RpGeometry* geometry;
	RwSphere boundingSphere;
	RwSphere worldBoundingSphere;
	RpClump* clump;
	RwLLLink inClumpLink;
	RpAtomic*(*renderCallBack)(RpAtomic*);
	RpInterpolator interpolator;
	uint16 renderFrame;
	uint16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct RpGeometry
{
	RwObject object;
	uint32 flags;
	uint16 lockedSinceLastInst;
	int16 refCount;
	int32 numTriangles;
	int32 numVertices;
	int32 numMorphTargets;
	int32 numTexCoordSets;
	RpMaterialList matList;
	RpTriangle* triangles;
	RwRGBA* preLitLum;
	RwTexCoords* texCoords[8];
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct RwMeshCache
{
	uint32 lengthOfMeshesArray;
	RwResEntry* meshes[1];
};

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

struct rwPS2AllClusterQuickInfo
{
	<unknown fundamental type (0xa510)>* data;
	uint32 stride;
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct rxNodePS2AllPvtData
{
};

struct RpPDSSkyMatTemplate
{
	uint32 pluginId;
	uint32 pluginData;
	RpPDSSkyMatCluster clusters[10];
	RpPDSSkyMatPrimitive primitive;
	RpPDSSkyVU1CodeTemplate* vu1code;
	int32(*meshInstanceTestCallBack)(RxPS2AllPipeData*);
	RwResEntry*(*resEntryAllocCallBack)(RxPS2AllPipeData*, RwResEntry**, uint32, void(*)(RwResEntry*));
	int32(*instanceCallBack)(RxPS2AllPipeData*, void**, uint32);
	int32(*bridgeCallBack)(RxPS2AllPipeData*);
	int32(*postMeshCallBack)(RxPS2AllPipeData*);
};

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	int16 refCount;
	int16 pad;
};

struct RxNodeMethods
{
	int32(*nodeBody)(RxPipelineNode*, RxPipelineNodeParam*);
	int32(*nodeInit)(RxNodeDefinition*);
	void(*nodeTerm)(RxNodeDefinition*);
	int32(*pipelineNodeInit)(RxPipelineNode*);
	void(*pipelineNodeTerm)(RxPipelineNode*);
	int32(*pipelineNodeConfig)(RxPipelineNode*, RxPipeline*);
	uint32(*configMsgHandler)(RxPipelineNode*, uint32, uint32, void*);
};

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
};

struct rxNodePS2AllMatPvtData
{
	int32(*meshInstanceTestCB)(RxPS2AllPipeData*);
	RwResEntry*(*resEntryAllocCB)(RxPS2AllPipeData*, RwResEntry**, uint32, void(*)(RwResEntry*));
	int32(*instanceCB)(RxPS2AllPipeData*, void**, uint32);
	int32(*bridgeCB)(RxPS2AllPipeData*);
	int32(*postMeshCB)(RxPS2AllPipeData*);
	int32 vifOffset;
	void** vu1CodeArray;
	uint32 codeArrayLength;
	rwPS2AllClusterInstanceInfo clinfo[12];
	uint32 cliIndex[12];
	RpMeshHeaderFlags pipeType;
	uint8 totallyOpaque;
	uint8 numStripes;
	uint8 sizeOnVU;
	uint8 pad0;
	rwPS2AllResEntryFormat strip;
	rwPS2AllResEntryFormat list;
	uint32 magicValue;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
};

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

enum RxInstanceFlags
{
	rxINSTANCENAINSTANCEFLAG,
	rxINSTANCEDONTINSTANCE,
	rxINSTANCEINPLACEINSTANCE,
	rxINSTANCECONGRUENTINSTANCE = 0x4,
	rxINSTANCEFULLINSTANCE = 0x8,
	rxINSTANCETYPEMASK = 0xe,
	rxINSTANCEXYZ = 0x10,
	rxINSTANCENORMAL = 0x20,
	rxINSTANCERGBA = 0x40,
	rxINSTANCEUV = 0x80,
	rxINSTANCEUV1 = 0x80,
	rxINSTANCEUV2 = 0x100,
	rxINSTANCEUV3 = 0x200,
	rxINSTANCEUV4 = 0x400,
	rxINSTANCEUV5 = 0x800,
	rxINSTANCEUV6 = 0x1000,
	rxINSTANCEUV7 = 0x2000,
	rxINSTANCEUV8 = 0x4000,
	rxINSTANCEUSER1 = 0x8000,
	rxINSTANCEUSER2 = 0x10000,
	rxINSTANCEUSER3 = 0x20000,
	rxINSTANCEUSER4 = 0x40000,
	rxINSTANCEALL = 0x7fff0,
	rxINSTANCEMASK = 0x7ffff,
	rxINSTANCEFORCEENUMSIZEINT = 0x7fffffff
};

struct RxPipelineNode
{
	RxNodeDefinition* nodeDef;
	uint32 numOutputs;
	uint32* outputs;
	RxPipelineCluster** slotClusterRefs;
	uint32* slotsContinue;
	void* privateData;
	uint32* inputToClusterSlot;
	RxPipelineNodeTopSortData* topSortData;
	void* initializationData;
	uint32 initializationDataSize;
};

struct rwPS2AllResEntryFormat
{
	uint8 batchRound;
	uint8 stripReverse;
	uint8 pad[2];
	uint32 maxInputSize;
	int32 batchSize;
	int32 batchesPerTag;
	int32 morphBatchSize;
	int32 morphBatchesPerTag;
	rwPS2AllFieldRec fieldRec[12];
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct RxPipeline
{
	int32 locked;
	uint32 numNodes;
	RxPipelineNode* nodes;
	uint32 packetNumClusterSlots;
	rxEmbeddedPacketState embeddedPacketState;
	RxPacket* embeddedPacket;
	uint32 numInputRequirements;
	RxPipelineRequiresCluster* inputRequirements;
	void* superBlock;
	uint32 superBlockSize;
	uint32 entryPoint;
	uint32 pluginId;
	uint32 pluginData;
};

struct rwPS2AllFieldRec
{
	int32 numVerts;
	int32 morphNumVerts;
	int32 dataoffset;
	int32 morphDataoffset;
	int16 skip;
	int16 morphSkip;
	int16 reverse;
	uint8 vuoffset;
	uint8 pad[1];
};

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	RpClump*(*callback)(RpClump*, void*);
};

struct RpPDSSkyObjTemplate
{
	uint32 pluginId;
	uint32 pluginData;
	int32(*objectSetupCallBack)(RxPS2AllPipeData*, RwMatrixTag**);
	int32(*objectFinalizeCallBack)(RxPS2AllPipeData*);
	RxPipeline* matGroup;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct rxReq
{
};

struct RwTexCoords
{
	float32 u;
	float32 v;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct RxHeap
{
	uint32 superBlockSize;
	rxHeapSuperBlockDescriptor* head;
	rxHeapBlockHeader* headBlock;
	rxHeapFreeBlock* freeBlocks;
	uint32 entriesAlloced;
	uint32 entriesUsed;
	int32 dirty;
};

struct rpAtomicPS2AllLightData
{
	RwSurfaceProperties* surface;
	RwMatrixTag invMat;
	float32 invScale;
	float32 recipInvScale;
};

enum RwPrimitiveType
{
	rwPRIMTYPENAPRIMTYPE,
	rwPRIMTYPELINELIST,
	rwPRIMTYPEPOLYLINE,
	rwPRIMTYPETRILIST,
	rwPRIMTYPETRISTRIP,
	rwPRIMTYPETRIFAN,
	rwPRIMTYPEPOINTLIST,
	rwPRIMITIVETYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct RwLinkList
{
	RwLLLink link;
};

struct RxNodeDefinition
{
	int8* name;
	RxNodeMethods nodeMethods;
	RxIoSpec io;
	uint32 pipelineNodePrivateDataSize;
	RxNodeDefEditable editable;
	int32 InputPipesCnt;
};

struct RpTriangle
{
	uint16 vertIndex[3];
	uint16 matIndex;
};

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
};

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

int32 sFirstAtomic;
int32 sLightChanged;
int32 sLightCount;
RpLight* sLightList[32];
rpAtomicPS2AllLightData sLightingData;
void* rwPDS_VCL_HIWorld_VU1Transforms[2];
RpPDSSkyVU1CodeTemplate rwPDS_VCL_HIWorld_VU1Code;
RpPDSSkyMatTemplate rwPDS_VCL_HIWorld_MatPipe;
RpPDSSkyObjTemplate rwPDS_VCL_HIWorld_AtmPipe;
<unknown fundamental type (0xa510)>* _rwDMAPktPtr;
int32 rwPip2GeometryOffset;
int32 skyCameraExt;
uint32 _rwSkyLightQWordsWritten;
uint32 ourGlobals[4096];
uint8 skyTransType;
long32 skyTest_1;
uint32 skyUserSwitch1;
int32 skyAlphaTex;
long32 skyClamp_1;
long32 skyPrim_State;
void* skyUploadedCode;
long32 skyTex1_1;
uint32 skyUserSwitch2;
RwCullMode gSkyCullState;
<unknown fundamental type (0xa510)> skyCClipVect1;
<unknown fundamental type (0xa510)> skyClipVect2;
<unknown fundamental type (0xa510)> skyCClipVect2;
<unknown fundamental type (0xa510)> skyClipVect1;
<unknown fundamental type (0xa510)> gifTag128;
int32 skyVertexAlpha;
RwRaster* skyTextureRaster;

void VCL_HIWorld_FastRepeatRender(RpAtomic* atomic);
void VCL_HIWorld_DownloadFrustumPlanes(RwCamera* cam);
int32 HIWorldObjectSetupCB(RxPS2AllPipeData* ps2AllPipeData, RwMatrixTag** transform);
int32 HIWorldBridgeCallBack(RxPS2AllPipeData* ps2AllPipeData);
int32 HIWorldInstanceCallBack(RxPS2AllPipeData* ps2AllPipeData, void** clusterData, uint32 numClusters);
void HIWorldReprocessData(RxPS2AllPipeData* ps2AllPipeData);
void HIWorldGetBatchData(BatchData* batch, int32 batchindex, rwPS2AllResEntryHeader* hdr, RpMesh* mesh, uint8* data);

// VCL_HIWorld_FastRepeatRender__FP8RpAtomic
// Start address: 0x1d75d0
void VCL_HIWorld_FastRepeatRender(RpAtomic* atomic)
{
	RpGeometry* geom;
	RwMeshCache* meshCache;
	RwResEntry* resentry;
	rwPS2AllResEntryHeader* reshdr;
	// Line 1217, Address: 0x1d75d0, Func Offset: 0
	// Line 1223, Address: 0x1d75e4, Func Offset: 0x14
	// Line 1224, Address: 0x1d75e8, Func Offset: 0x18
	// Line 1227, Address: 0x1d7638, Func Offset: 0x68
	// Line 1228, Address: 0x1d7640, Func Offset: 0x70
	// Line 1229, Address: 0x1d7644, Func Offset: 0x74
	// Line 1231, Address: 0x1d764c, Func Offset: 0x7c
	// Line 1243, Address: 0x1d7654, Func Offset: 0x84
	// Line 1251, Address: 0x1d765c, Func Offset: 0x8c
	// Line 1252, Address: 0x1d7684, Func Offset: 0xb4
	// Line 1257, Address: 0x1d7688, Func Offset: 0xb8
	// Line 1252, Address: 0x1d768c, Func Offset: 0xbc
	// Line 1257, Address: 0x1d769c, Func Offset: 0xcc
	// Line 1258, Address: 0x1d76bc, Func Offset: 0xec
	// Line 1259, Address: 0x1d76c8, Func Offset: 0xf8
	// Line 1261, Address: 0x1d76cc, Func Offset: 0xfc
	// Line 1260, Address: 0x1d76d0, Func Offset: 0x100
	// Line 1261, Address: 0x1d76dc, Func Offset: 0x10c
	// Line 1264, Address: 0x1d76e8, Func Offset: 0x118
	// Line 1268, Address: 0x1d7700, Func Offset: 0x130
	// Line 1269, Address: 0x1d770c, Func Offset: 0x13c
	// Func End, Address: 0x1d7720, Func Offset: 0x150
}

// VCL_HIWorld_DownloadFrustumPlanes__FP8RwCamera
// Start address: 0x1d7720
void VCL_HIWorld_DownloadFrustumPlanes(RwCamera* cam)
{
	int32 i;
	<unknown fundamental type (0xa510)>* _rwDMA_local_rwDMAPktPtr;
	RwFrustumPlane* rwPlane;
	RwFrustumPlane* widePlane;
	RwMatrixTag* cammat;
	RwV4dTag frustPlane[12];
	<unknown fundamental type (0xa510)>* frustPtr;
	float32 wideDot;
	float32 normDot;
	// Line 816, Address: 0x1d7720, Func Offset: 0
	// Line 824, Address: 0x1d7724, Func Offset: 0x4
	// Line 816, Address: 0x1d7728, Func Offset: 0x8
	// Line 824, Address: 0x1d7734, Func Offset: 0x14
	// Line 834, Address: 0x1d773c, Func Offset: 0x1c
	// Line 824, Address: 0x1d7740, Func Offset: 0x20
	// Line 834, Address: 0x1d7744, Func Offset: 0x24
	// Line 851, Address: 0x1d7748, Func Offset: 0x28
	// Line 834, Address: 0x1d774c, Func Offset: 0x2c
	// Line 835, Address: 0x1d7768, Func Offset: 0x48
	// Line 857, Address: 0x1d776c, Func Offset: 0x4c
	// Line 835, Address: 0x1d7770, Func Offset: 0x50
	// Line 861, Address: 0x1d7774, Func Offset: 0x54
	// Line 848, Address: 0x1d7778, Func Offset: 0x58
	// Line 861, Address: 0x1d777c, Func Offset: 0x5c
	// Line 849, Address: 0x1d7780, Func Offset: 0x60
	// Line 878, Address: 0x1d7784, Func Offset: 0x64
	// Line 861, Address: 0x1d7790, Func Offset: 0x70
	// Line 857, Address: 0x1d7794, Func Offset: 0x74
	// Line 848, Address: 0x1d7798, Func Offset: 0x78
	// Line 861, Address: 0x1d779c, Func Offset: 0x7c
	// Line 865, Address: 0x1d77a0, Func Offset: 0x80
	// Line 861, Address: 0x1d77a8, Func Offset: 0x88
	// Line 869, Address: 0x1d77ac, Func Offset: 0x8c
	// Line 861, Address: 0x1d77b0, Func Offset: 0x90
	// Line 869, Address: 0x1d77b4, Func Offset: 0x94
	// Line 865, Address: 0x1d77b8, Func Offset: 0x98
	// Line 874, Address: 0x1d77bc, Func Offset: 0x9c
	// Line 865, Address: 0x1d77c0, Func Offset: 0xa0
	// Line 874, Address: 0x1d77c4, Func Offset: 0xa4
	// Line 869, Address: 0x1d77c8, Func Offset: 0xa8
	// Line 874, Address: 0x1d77cc, Func Offset: 0xac
	// Line 861, Address: 0x1d77d0, Func Offset: 0xb0
	// Line 869, Address: 0x1d77d4, Func Offset: 0xb4
	// Line 874, Address: 0x1d77d8, Func Offset: 0xb8
	// Line 865, Address: 0x1d77dc, Func Offset: 0xbc
	// Line 887, Address: 0x1d77e0, Func Offset: 0xc0
	// Line 874, Address: 0x1d77e4, Func Offset: 0xc4
	// Line 883, Address: 0x1d77e8, Func Offset: 0xc8
	// Line 861, Address: 0x1d77ec, Func Offset: 0xcc
	// Line 865, Address: 0x1d77f0, Func Offset: 0xd0
	// Line 869, Address: 0x1d77f8, Func Offset: 0xd8
	// Line 887, Address: 0x1d77fc, Func Offset: 0xdc
	// Line 883, Address: 0x1d7800, Func Offset: 0xe0
	// Line 891, Address: 0x1d7804, Func Offset: 0xe4
	// Line 865, Address: 0x1d780c, Func Offset: 0xec
	// Line 869, Address: 0x1d7810, Func Offset: 0xf0
	// Line 887, Address: 0x1d7818, Func Offset: 0xf8
	// Line 891, Address: 0x1d781c, Func Offset: 0xfc
	// Line 895, Address: 0x1d7824, Func Offset: 0x104
	// Line 869, Address: 0x1d7828, Func Offset: 0x108
	// Line 883, Address: 0x1d782c, Func Offset: 0x10c
	// Line 887, Address: 0x1d7830, Func Offset: 0x110
	// Line 891, Address: 0x1d7834, Func Offset: 0x114
	// Line 883, Address: 0x1d7838, Func Offset: 0x118
	// Line 895, Address: 0x1d783c, Func Offset: 0x11c
	// Line 883, Address: 0x1d7840, Func Offset: 0x120
	// Line 857, Address: 0x1d7844, Func Offset: 0x124
	// Line 891, Address: 0x1d7850, Func Offset: 0x130
	// Line 874, Address: 0x1d7854, Func Offset: 0x134
	// Line 908, Address: 0x1d7858, Func Offset: 0x138
	// Line 878, Address: 0x1d785c, Func Offset: 0x13c
	// Line 874, Address: 0x1d7860, Func Offset: 0x140
	// Line 908, Address: 0x1d7864, Func Offset: 0x144
	// Line 887, Address: 0x1d7868, Func Offset: 0x148
	// Line 874, Address: 0x1d786c, Func Offset: 0x14c
	// Line 908, Address: 0x1d7870, Func Offset: 0x150
	// Line 878, Address: 0x1d7874, Func Offset: 0x154
	// Line 887, Address: 0x1d7878, Func Offset: 0x158
	// Line 891, Address: 0x1d787c, Func Offset: 0x15c
	// Line 887, Address: 0x1d7880, Func Offset: 0x160
	// Line 895, Address: 0x1d7884, Func Offset: 0x164
	// Line 904, Address: 0x1d7888, Func Offset: 0x168
	// Line 887, Address: 0x1d7890, Func Offset: 0x170
	// Line 895, Address: 0x1d7894, Func Offset: 0x174
	// Line 891, Address: 0x1d7898, Func Offset: 0x178
	// Line 895, Address: 0x1d789c, Func Offset: 0x17c
	// Line 904, Address: 0x1d78a4, Func Offset: 0x184
	// Line 895, Address: 0x1d78ac, Func Offset: 0x18c
	// Line 908, Address: 0x1d78b0, Func Offset: 0x190
	// Line 895, Address: 0x1d78b8, Func Offset: 0x198
	// Line 904, Address: 0x1d78bc, Func Offset: 0x19c
	// Line 908, Address: 0x1d78cc, Func Offset: 0x1ac
	// Line 914, Address: 0x1d78d0, Func Offset: 0x1b0
	// Line 904, Address: 0x1d78d4, Func Offset: 0x1b4
	// Line 857, Address: 0x1d78dc, Func Offset: 0x1bc
	// Line 914, Address: 0x1d78e4, Func Offset: 0x1c4
	// Line 915, Address: 0x1d78ec, Func Offset: 0x1cc
	// Line 916, Address: 0x1d78f4, Func Offset: 0x1d4
	// Line 857, Address: 0x1d78f8, Func Offset: 0x1d8
	// Line 878, Address: 0x1d78fc, Func Offset: 0x1dc
	// Line 883, Address: 0x1d7908, Func Offset: 0x1e8
	// Line 901, Address: 0x1d7914, Func Offset: 0x1f4
	// Line 916, Address: 0x1d7920, Func Offset: 0x200
	// Line 917, Address: 0x1d7944, Func Offset: 0x224
	// Line 916, Address: 0x1d7948, Func Offset: 0x228
	// Line 917, Address: 0x1d7968, Func Offset: 0x248
	// Line 922, Address: 0x1d7980, Func Offset: 0x260
	// Line 917, Address: 0x1d7984, Func Offset: 0x264
	// Line 918, Address: 0x1d79a0, Func Offset: 0x280
	// Line 923, Address: 0x1d79ac, Func Offset: 0x28c
	// Line 924, Address: 0x1d79b0, Func Offset: 0x290
	// Line 923, Address: 0x1d79b4, Func Offset: 0x294
	// Line 924, Address: 0x1d79b8, Func Offset: 0x298
	// Line 923, Address: 0x1d79bc, Func Offset: 0x29c
	// Line 924, Address: 0x1d79e4, Func Offset: 0x2c4
	// Line 941, Address: 0x1d79f4, Func Offset: 0x2d4
	// Line 946, Address: 0x1d7a00, Func Offset: 0x2e0
	// Line 924, Address: 0x1d7a04, Func Offset: 0x2e4
	// Line 929, Address: 0x1d7a08, Func Offset: 0x2e8
	// Line 930, Address: 0x1d7a0c, Func Offset: 0x2ec
	// Line 935, Address: 0x1d7a10, Func Offset: 0x2f0
	// Line 936, Address: 0x1d7a14, Func Offset: 0x2f4
	// Line 941, Address: 0x1d7a18, Func Offset: 0x2f8
	// Line 946, Address: 0x1d7a1c, Func Offset: 0x2fc
	// Line 947, Address: 0x1d7a20, Func Offset: 0x300
	// Line 948, Address: 0x1d7a24, Func Offset: 0x304
	// Line 949, Address: 0x1d7a28, Func Offset: 0x308
	// Func End, Address: 0x1d7a38, Func Offset: 0x318
}

// HIWorldObjectSetupCB__FP16RxPS2AllPipeDataPP11RwMatrixTag
// Start address: 0x1d7a40
int32 HIWorldObjectSetupCB(RxPS2AllPipeData* ps2AllPipeData, RwMatrixTag** transform)
{
	RpAtomic* atomic;
	RpGeometry* geom;
	RwMatrixTag* _viewMatrix;
	RwMatrixTag* _mpLocalToWorld;
	int32 i;
	RwFrame* frame;
	RwMatrixTag oldMat;
	RwMatrixTag* lightmat;
	// Line 663, Address: 0x1d7a40, Func Offset: 0
	// Line 667, Address: 0x1d7a74, Func Offset: 0x34
	// Line 668, Address: 0x1d7a78, Func Offset: 0x38
	// Line 675, Address: 0x1d7a7c, Func Offset: 0x3c
	// Line 676, Address: 0x1d7a84, Func Offset: 0x44
	// Line 698, Address: 0x1d7ad4, Func Offset: 0x94
	// Line 676, Address: 0x1d7ad8, Func Offset: 0x98
	// Line 698, Address: 0x1d7adc, Func Offset: 0x9c
	// Line 700, Address: 0x1d7aec, Func Offset: 0xac
	// Line 701, Address: 0x1d7af4, Func Offset: 0xb4
	// Line 706, Address: 0x1d7b04, Func Offset: 0xc4
	// Line 711, Address: 0x1d7b10, Func Offset: 0xd0
	// Line 726, Address: 0x1d7b14, Func Offset: 0xd4
	// Line 727, Address: 0x1d7b1c, Func Offset: 0xdc
	// Line 731, Address: 0x1d7b24, Func Offset: 0xe4
	// Line 734, Address: 0x1d7b38, Func Offset: 0xf8
	// Line 737, Address: 0x1d7b44, Func Offset: 0x104
	// Line 743, Address: 0x1d7b74, Func Offset: 0x134
	// Line 745, Address: 0x1d7b7c, Func Offset: 0x13c
	// Line 746, Address: 0x1d7b84, Func Offset: 0x144
	// Line 747, Address: 0x1d7b8c, Func Offset: 0x14c
	// Line 746, Address: 0x1d7b90, Func Offset: 0x150
	// Line 747, Address: 0x1d7b94, Func Offset: 0x154
	// Line 748, Address: 0x1d7b98, Func Offset: 0x158
	// Line 747, Address: 0x1d7b9c, Func Offset: 0x15c
	// Line 748, Address: 0x1d7ba4, Func Offset: 0x164
	// Line 747, Address: 0x1d7bac, Func Offset: 0x16c
	// Line 748, Address: 0x1d7c20, Func Offset: 0x1e0
	// Line 750, Address: 0x1d7c28, Func Offset: 0x1e8
	// Line 754, Address: 0x1d7c48, Func Offset: 0x208
	// Line 755, Address: 0x1d7c50, Func Offset: 0x210
	// Line 757, Address: 0x1d7cd4, Func Offset: 0x294
	// Line 761, Address: 0x1d7cec, Func Offset: 0x2ac
	// Line 764, Address: 0x1d7cf0, Func Offset: 0x2b0
	// Line 766, Address: 0x1d7cf4, Func Offset: 0x2b4
	// Line 708, Address: 0x1d7d10, Func Offset: 0x2d0
	// Line 766, Address: 0x1d7d14, Func Offset: 0x2d4
	// Line 709, Address: 0x1d7d1c, Func Offset: 0x2dc
	// Line 767, Address: 0x1d7d2c, Func Offset: 0x2ec
	// Func End, Address: 0x1d7d5c, Func Offset: 0x31c
}

// HIWorldBridgeCallBack__FP16RxPS2AllPipeData
// Start address: 0x1d7d60
int32 HIWorldBridgeCallBack(RxPS2AllPipeData* ps2AllPipeData)
{
	int32 skyAlphaTex'371;
	<unknown fundamental type (0xa510)>* _rwDMAPktPtr'370;
	uint32 skyUserSwitch1'369;
	RwTexture* _nwtx;
	RwRaster* _nwrs;
	uint32 cFormat;
	ulong32 tmp1;
	<unknown fundamental type (0xa510)> ltmp;
	uint32 skySwitchFlag;
	ulong32 __tmp;
	void* _kohd;
	rwPS2AllResEntryHeader* _p2rh;
	// Line 509, Address: 0x1d7d60, Func Offset: 0
	// Line 518, Address: 0x1d7d78, Func Offset: 0x18
	// Line 520, Address: 0x1d7d88, Func Offset: 0x28
	// Line 529, Address: 0x1d7e6c, Func Offset: 0x10c
	// Line 552, Address: 0x1d7e8c, Func Offset: 0x12c
	// Line 529, Address: 0x1d7eac, Func Offset: 0x14c
	// Line 553, Address: 0x1d7eb0, Func Offset: 0x150
	// Line 558, Address: 0x1d7eb8, Func Offset: 0x158
	// Line 553, Address: 0x1d7ebc, Func Offset: 0x15c
	// Line 557, Address: 0x1d7ec4, Func Offset: 0x164
	// Line 558, Address: 0x1d7ed0, Func Offset: 0x170
	// Line 559, Address: 0x1d7edc, Func Offset: 0x17c
	// Line 560, Address: 0x1d7ee4, Func Offset: 0x184
	// Line 561, Address: 0x1d7eec, Func Offset: 0x18c
	// Line 564, Address: 0x1d7efc, Func Offset: 0x19c
	// Line 565, Address: 0x1d7f00, Func Offset: 0x1a0
	// Line 564, Address: 0x1d7f04, Func Offset: 0x1a4
	// Line 567, Address: 0x1d7f0c, Func Offset: 0x1ac
	// Line 565, Address: 0x1d7f10, Func Offset: 0x1b0
	// Line 564, Address: 0x1d7f18, Func Offset: 0x1b8
	// Line 566, Address: 0x1d7f1c, Func Offset: 0x1bc
	// Line 567, Address: 0x1d7f20, Func Offset: 0x1c0
	// Line 565, Address: 0x1d7f24, Func Offset: 0x1c4
	// Line 564, Address: 0x1d7f28, Func Offset: 0x1c8
	// Line 565, Address: 0x1d7f2c, Func Offset: 0x1cc
	// Line 564, Address: 0x1d7f30, Func Offset: 0x1d0
	// Line 565, Address: 0x1d7f38, Func Offset: 0x1d8
	// Line 564, Address: 0x1d7f3c, Func Offset: 0x1dc
	// Line 565, Address: 0x1d7f40, Func Offset: 0x1e0
	// Line 564, Address: 0x1d7f44, Func Offset: 0x1e4
	// Line 565, Address: 0x1d7f48, Func Offset: 0x1e8
	// Line 564, Address: 0x1d7f4c, Func Offset: 0x1ec
	// Line 567, Address: 0x1d7f58, Func Offset: 0x1f8
	// Line 575, Address: 0x1d7f5c, Func Offset: 0x1fc
	// Line 590, Address: 0x1d7f64, Func Offset: 0x204
	// Line 575, Address: 0x1d7f68, Func Offset: 0x208
	// Line 590, Address: 0x1d7f6c, Func Offset: 0x20c
	// Line 565, Address: 0x1d7f74, Func Offset: 0x214
	// Line 575, Address: 0x1d7f78, Func Offset: 0x218
	// Line 565, Address: 0x1d7f7c, Func Offset: 0x21c
	// Line 575, Address: 0x1d7f80, Func Offset: 0x220
	// Line 565, Address: 0x1d7f84, Func Offset: 0x224
	// Line 575, Address: 0x1d7f88, Func Offset: 0x228
	// Line 590, Address: 0x1d7f8c, Func Offset: 0x22c
	// Line 566, Address: 0x1d7f90, Func Offset: 0x230
	// Line 567, Address: 0x1d7f94, Func Offset: 0x234
	// Line 575, Address: 0x1d7f98, Func Offset: 0x238
	// Line 568, Address: 0x1d7f9c, Func Offset: 0x23c
	// Line 575, Address: 0x1d7fa0, Func Offset: 0x240
	// Line 576, Address: 0x1d7fa4, Func Offset: 0x244
	// Line 579, Address: 0x1d7fa8, Func Offset: 0x248
	// Line 576, Address: 0x1d7fbc, Func Offset: 0x25c
	// Line 579, Address: 0x1d7fc0, Func Offset: 0x260
	// Line 590, Address: 0x1d7fc8, Func Offset: 0x268
	// Line 579, Address: 0x1d7fd0, Func Offset: 0x270
	// Line 576, Address: 0x1d7fd8, Func Offset: 0x278
	// Line 579, Address: 0x1d7fdc, Func Offset: 0x27c
	// Line 576, Address: 0x1d7fe0, Func Offset: 0x280
	// Line 580, Address: 0x1d7fe4, Func Offset: 0x284
	// Line 590, Address: 0x1d7fe8, Func Offset: 0x288
	// Line 593, Address: 0x1d8028, Func Offset: 0x2c8
	// Line 613, Address: 0x1d8068, Func Offset: 0x308
	// Line 604, Address: 0x1d806c, Func Offset: 0x30c
	// Line 613, Address: 0x1d8070, Func Offset: 0x310
	// Line 604, Address: 0x1d8074, Func Offset: 0x314
	// Line 613, Address: 0x1d8078, Func Offset: 0x318
	// Line 614, Address: 0x1d807c, Func Offset: 0x31c
	// Line 613, Address: 0x1d8080, Func Offset: 0x320
	// Line 619, Address: 0x1d808c, Func Offset: 0x32c
	// Line 613, Address: 0x1d8090, Func Offset: 0x330
	// Line 604, Address: 0x1d8094, Func Offset: 0x334
	// Line 613, Address: 0x1d8098, Func Offset: 0x338
	// Line 604, Address: 0x1d809c, Func Offset: 0x33c
	// Line 622, Address: 0x1d80a0, Func Offset: 0x340
	// Line 614, Address: 0x1d80a4, Func Offset: 0x344
	// Line 620, Address: 0x1d80a8, Func Offset: 0x348
	// Line 619, Address: 0x1d80ac, Func Offset: 0x34c
	// Line 620, Address: 0x1d80b0, Func Offset: 0x350
	// Line 614, Address: 0x1d80b4, Func Offset: 0x354
	// Line 604, Address: 0x1d80b8, Func Offset: 0x358
	// Line 623, Address: 0x1d80bc, Func Offset: 0x35c
	// Line 628, Address: 0x1d80c0, Func Offset: 0x360
	// Line 627, Address: 0x1d80c4, Func Offset: 0x364
	// Line 619, Address: 0x1d80c8, Func Offset: 0x368
	// Line 614, Address: 0x1d80cc, Func Offset: 0x36c
	// Line 620, Address: 0x1d80d0, Func Offset: 0x370
	// Line 614, Address: 0x1d80d4, Func Offset: 0x374
	// Line 621, Address: 0x1d80d8, Func Offset: 0x378
	// Line 622, Address: 0x1d80e0, Func Offset: 0x380
	// Line 623, Address: 0x1d80e4, Func Offset: 0x384
	// Line 621, Address: 0x1d80e8, Func Offset: 0x388
	// Line 622, Address: 0x1d80ec, Func Offset: 0x38c
	// Line 623, Address: 0x1d80f0, Func Offset: 0x390
	// Line 621, Address: 0x1d80f4, Func Offset: 0x394
	// Line 624, Address: 0x1d80f8, Func Offset: 0x398
	// Line 621, Address: 0x1d80fc, Func Offset: 0x39c
	// Line 624, Address: 0x1d8100, Func Offset: 0x3a0
	// Line 628, Address: 0x1d8104, Func Offset: 0x3a4
	// Line 636, Address: 0x1d8110, Func Offset: 0x3b0
	// Line 637, Address: 0x1d8130, Func Offset: 0x3d0
	// Line 636, Address: 0x1d8134, Func Offset: 0x3d4
	// Line 637, Address: 0x1d8138, Func Offset: 0x3d8
	// Line 643, Address: 0x1d8144, Func Offset: 0x3e4
	// Line 646, Address: 0x1d81cc, Func Offset: 0x46c
	// Line 648, Address: 0x1d81e4, Func Offset: 0x484
	// Line 651, Address: 0x1d8238, Func Offset: 0x4d8
	// Line 655, Address: 0x1d82d8, Func Offset: 0x578
	// Line 520, Address: 0x1d82e4, Func Offset: 0x584
	// Line 655, Address: 0x1d82f4, Func Offset: 0x594
	// Line 520, Address: 0x1d82f8, Func Offset: 0x598
	// Line 655, Address: 0x1d8304, Func Offset: 0x5a4
	// Line 643, Address: 0x1d8328, Func Offset: 0x5c8
	// Line 655, Address: 0x1d832c, Func Offset: 0x5cc
	// Line 643, Address: 0x1d8330, Func Offset: 0x5d0
	// Line 655, Address: 0x1d8334, Func Offset: 0x5d4
	// Line 643, Address: 0x1d8338, Func Offset: 0x5d8
	// Line 655, Address: 0x1d8340, Func Offset: 0x5e0
	// Line 643, Address: 0x1d834c, Func Offset: 0x5ec
	// Line 655, Address: 0x1d835c, Func Offset: 0x5fc
	// Line 643, Address: 0x1d8368, Func Offset: 0x608
	// Line 655, Address: 0x1d836c, Func Offset: 0x60c
	// Line 656, Address: 0x1d8398, Func Offset: 0x638
	// Func End, Address: 0x1d83b0, Func Offset: 0x650
}

// HIWorldInstanceCallBack__FP16RxPS2AllPipeDataPPvUi
// Start address: 0x1d83b0
int32 HIWorldInstanceCallBack(RxPS2AllPipeData* ps2AllPipeData, void** clusterData, uint32 numClusters)
{
	int32 retval;
	// Line 493, Address: 0x1d83b0, Func Offset: 0
	// Line 495, Address: 0x1d83c0, Func Offset: 0x10
	// Line 499, Address: 0x1d83cc, Func Offset: 0x1c
	// Line 501, Address: 0x1d83d4, Func Offset: 0x24
	// Line 502, Address: 0x1d83d8, Func Offset: 0x28
	// Func End, Address: 0x1d83ec, Func Offset: 0x3c
}

// HIWorldReprocessData__FP16RxPS2AllPipeData
// Start address: 0x1d83f0
void HIWorldReprocessData(RxPS2AllPipeData* ps2AllPipeData)
{
	float32 batchedge'320;
	int32 i;
	int32 j;
	int32 totwtct[4];
	BatchData batchcurr;
	RpMesh* mesh;
	rwPS2AllResEntryHeader* hdr;
	uint8* data;
	int32 numbatches;
	RwSphere batchsph;
	float32 batchedge;
	float32 colMultiplier;
	float32 radtemp;
	float32 _tmp;
	float32 testedge;
	float32 _tmp;
	// Line 248, Address: 0x1d83f0, Func Offset: 0
	// Line 249, Address: 0x1d83f4, Func Offset: 0x4
	// Line 248, Address: 0x1d83f8, Func Offset: 0x8
	// Line 249, Address: 0x1d83fc, Func Offset: 0xc
	// Line 248, Address: 0x1d8400, Func Offset: 0x10
	// Line 249, Address: 0x1d8430, Func Offset: 0x40
	// Line 252, Address: 0x1d8454, Func Offset: 0x64
	// Line 266, Address: 0x1d8458, Func Offset: 0x68
	// Line 254, Address: 0x1d845c, Func Offset: 0x6c
	// Line 256, Address: 0x1d8460, Func Offset: 0x70
	// Line 254, Address: 0x1d8464, Func Offset: 0x74
	// Line 256, Address: 0x1d8468, Func Offset: 0x78
	// Line 254, Address: 0x1d846c, Func Offset: 0x7c
	// Line 255, Address: 0x1d8470, Func Offset: 0x80
	// Line 256, Address: 0x1d847c, Func Offset: 0x8c
	// Line 266, Address: 0x1d8488, Func Offset: 0x98
	// Line 267, Address: 0x1d8490, Func Offset: 0xa0
	// Line 275, Address: 0x1d84a0, Func Offset: 0xb0
	// Line 277, Address: 0x1d84cc, Func Offset: 0xdc
	// Line 278, Address: 0x1d8500, Func Offset: 0x110
	// Line 279, Address: 0x1d8534, Func Offset: 0x144
	// Line 280, Address: 0x1d8568, Func Offset: 0x178
	// Line 283, Address: 0x1d85a0, Func Offset: 0x1b0
	// Line 280, Address: 0x1d85a4, Func Offset: 0x1b4
	// Line 283, Address: 0x1d85a8, Func Offset: 0x1b8
	// Line 280, Address: 0x1d85ac, Func Offset: 0x1bc
	// Line 283, Address: 0x1d85b0, Func Offset: 0x1c0
	// Line 286, Address: 0x1d85cc, Func Offset: 0x1dc
	// Line 350, Address: 0x1d85e8, Func Offset: 0x1f8
	// Line 351, Address: 0x1d85f4, Func Offset: 0x204
	// Line 352, Address: 0x1d85f8, Func Offset: 0x208
	// Line 353, Address: 0x1d860c, Func Offset: 0x21c
	// Line 352, Address: 0x1d8610, Func Offset: 0x220
	// Line 353, Address: 0x1d8634, Func Offset: 0x244
	// Line 357, Address: 0x1d8650, Func Offset: 0x260
	// Line 353, Address: 0x1d8658, Func Offset: 0x268
	// Line 357, Address: 0x1d865c, Func Offset: 0x26c
	// Line 359, Address: 0x1d8668, Func Offset: 0x278
	// Line 358, Address: 0x1d866c, Func Offset: 0x27c
	// Line 359, Address: 0x1d8670, Func Offset: 0x280
	// Line 362, Address: 0x1d8674, Func Offset: 0x284
	// Line 360, Address: 0x1d8678, Func Offset: 0x288
	// Line 362, Address: 0x1d8680, Func Offset: 0x290
	// Line 359, Address: 0x1d8684, Func Offset: 0x294
	// Line 362, Address: 0x1d8690, Func Offset: 0x2a0
	// Line 363, Address: 0x1d86d0, Func Offset: 0x2e0
	// Line 362, Address: 0x1d86e0, Func Offset: 0x2f0
	// Line 363, Address: 0x1d86e8, Func Offset: 0x2f8
	// Line 367, Address: 0x1d86f0, Func Offset: 0x300
	// Line 372, Address: 0x1d86f8, Func Offset: 0x308
	// Line 375, Address: 0x1d86fc, Func Offset: 0x30c
	// Line 372, Address: 0x1d8700, Func Offset: 0x310
	// Line 375, Address: 0x1d8704, Func Offset: 0x314
	// Line 372, Address: 0x1d8708, Func Offset: 0x318
	// Line 378, Address: 0x1d870c, Func Offset: 0x31c
	// Line 375, Address: 0x1d8710, Func Offset: 0x320
	// Line 378, Address: 0x1d8714, Func Offset: 0x324
	// Line 373, Address: 0x1d8718, Func Offset: 0x328
	// Line 374, Address: 0x1d871c, Func Offset: 0x32c
	// Line 376, Address: 0x1d8720, Func Offset: 0x330
	// Line 378, Address: 0x1d8724, Func Offset: 0x334
	// Line 379, Address: 0x1d873c, Func Offset: 0x34c
	// Line 380, Address: 0x1d875c, Func Offset: 0x36c
	// Line 381, Address: 0x1d877c, Func Offset: 0x38c
	// Line 382, Address: 0x1d8798, Func Offset: 0x3a8
	// Line 383, Address: 0x1d87b4, Func Offset: 0x3c4
	// Line 384, Address: 0x1d87d0, Func Offset: 0x3e0
	// Line 385, Address: 0x1d87ec, Func Offset: 0x3fc
	// Line 384, Address: 0x1d87f0, Func Offset: 0x400
	// Line 385, Address: 0x1d87f4, Func Offset: 0x404
	// Line 388, Address: 0x1d8800, Func Offset: 0x410
	// Line 396, Address: 0x1d8804, Func Offset: 0x414
	// Line 388, Address: 0x1d8808, Func Offset: 0x418
	// Line 407, Address: 0x1d880c, Func Offset: 0x41c
	// Line 396, Address: 0x1d8810, Func Offset: 0x420
	// Line 391, Address: 0x1d8814, Func Offset: 0x424
	// Line 407, Address: 0x1d8818, Func Offset: 0x428
	// Line 388, Address: 0x1d881c, Func Offset: 0x42c
	// Line 389, Address: 0x1d8820, Func Offset: 0x430
	// Line 396, Address: 0x1d8824, Func Offset: 0x434
	// Line 399, Address: 0x1d8828, Func Offset: 0x438
	// Line 407, Address: 0x1d882c, Func Offset: 0x43c
	// Line 402, Address: 0x1d8830, Func Offset: 0x440
	// Line 388, Address: 0x1d8834, Func Offset: 0x444
	// Line 390, Address: 0x1d8838, Func Offset: 0x448
	// Line 388, Address: 0x1d883c, Func Offset: 0x44c
	// Line 396, Address: 0x1d8840, Func Offset: 0x450
	// Line 389, Address: 0x1d8844, Func Offset: 0x454
	// Line 390, Address: 0x1d8848, Func Offset: 0x458
	// Line 396, Address: 0x1d884c, Func Offset: 0x45c
	// Line 389, Address: 0x1d8858, Func Offset: 0x468
	// Line 390, Address: 0x1d885c, Func Offset: 0x46c
	// Line 399, Address: 0x1d8860, Func Offset: 0x470
	// Line 402, Address: 0x1d8864, Func Offset: 0x474
	// Line 399, Address: 0x1d8868, Func Offset: 0x478
	// Line 402, Address: 0x1d886c, Func Offset: 0x47c
	// Line 399, Address: 0x1d8870, Func Offset: 0x480
	// Line 402, Address: 0x1d8874, Func Offset: 0x484
	// Line 399, Address: 0x1d8878, Func Offset: 0x488
	// Line 407, Address: 0x1d887c, Func Offset: 0x48c
	// Line 408, Address: 0x1d88c0, Func Offset: 0x4d0
	// Line 412, Address: 0x1d88d8, Func Offset: 0x4e8
	// Line 408, Address: 0x1d88dc, Func Offset: 0x4ec
	// Line 412, Address: 0x1d88e0, Func Offset: 0x4f0
	// Line 413, Address: 0x1d88ec, Func Offset: 0x4fc
	// Line 418, Address: 0x1d88f0, Func Offset: 0x500
	// Line 422, Address: 0x1d88f8, Func Offset: 0x508
	// Line 418, Address: 0x1d88fc, Func Offset: 0x50c
	// Line 421, Address: 0x1d8900, Func Offset: 0x510
	// Line 422, Address: 0x1d8904, Func Offset: 0x514
	// Line 413, Address: 0x1d8908, Func Offset: 0x518
	// Line 422, Address: 0x1d890c, Func Offset: 0x51c
	// Line 418, Address: 0x1d8910, Func Offset: 0x520
	// Line 422, Address: 0x1d8914, Func Offset: 0x524
	// Line 428, Address: 0x1d891c, Func Offset: 0x52c
	// Line 422, Address: 0x1d8924, Func Offset: 0x534
	// Line 424, Address: 0x1d8928, Func Offset: 0x538
	// Line 425, Address: 0x1d8950, Func Offset: 0x560
	// Line 428, Address: 0x1d896c, Func Offset: 0x57c
	// Line 429, Address: 0x1d89a8, Func Offset: 0x5b8
	// Line 432, Address: 0x1d89b8, Func Offset: 0x5c8
	// Line 433, Address: 0x1d89f4, Func Offset: 0x604
	// Line 436, Address: 0x1d8a04, Func Offset: 0x614
	// Line 438, Address: 0x1d8a20, Func Offset: 0x630
	// Line 443, Address: 0x1d8a30, Func Offset: 0x640
	// Line 439, Address: 0x1d8a38, Func Offset: 0x648
	// Line 443, Address: 0x1d8a3c, Func Offset: 0x64c
	// Line 439, Address: 0x1d8a44, Func Offset: 0x654
	// Line 443, Address: 0x1d8a48, Func Offset: 0x658
	// Line 444, Address: 0x1d8a84, Func Offset: 0x694
	// Line 443, Address: 0x1d8a88, Func Offset: 0x698
	// Line 444, Address: 0x1d8a8c, Func Offset: 0x69c
	// Line 445, Address: 0x1d8ad4, Func Offset: 0x6e4
	// Line 446, Address: 0x1d8ad8, Func Offset: 0x6e8
	// Line 447, Address: 0x1d8adc, Func Offset: 0x6ec
	// Line 444, Address: 0x1d8ae0, Func Offset: 0x6f0
	// Line 445, Address: 0x1d8ae4, Func Offset: 0x6f4
	// Line 446, Address: 0x1d8aec, Func Offset: 0x6fc
	// Line 447, Address: 0x1d8af4, Func Offset: 0x704
	// Line 477, Address: 0x1d8afc, Func Offset: 0x70c
	// Line 480, Address: 0x1d8b0c, Func Offset: 0x71c
	// Line 477, Address: 0x1d8b1c, Func Offset: 0x72c
	// Line 480, Address: 0x1d8b24, Func Offset: 0x734
	// Line 481, Address: 0x1d8b9c, Func Offset: 0x7ac
	// Line 482, Address: 0x1d8c14, Func Offset: 0x824
	// Line 483, Address: 0x1d8c8c, Func Offset: 0x89c
	// Line 484, Address: 0x1d8cf8, Func Offset: 0x908
	// Line 486, Address: 0x1d8d14, Func Offset: 0x924
	// Line 266, Address: 0x1d8d28, Func Offset: 0x938
	// Line 486, Address: 0x1d8d2c, Func Offset: 0x93c
	// Line 267, Address: 0x1d8d48, Func Offset: 0x958
	// Line 486, Address: 0x1d8d4c, Func Offset: 0x95c
	// Line 353, Address: 0x1d8d80, Func Offset: 0x990
	// Line 486, Address: 0x1d8da0, Func Offset: 0x9b0
	// Func End, Address: 0x1d8df8, Func Offset: 0xa08
}

// HIWorldGetBatchData__FP9BatchDataiP22rwPS2AllResEntryHeaderPC6RpMeshPUc
// Start address: 0x1d8e00
void HIWorldGetBatchData(BatchData* batch, int32 batchindex, rwPS2AllResEntryHeader* hdr, RpMesh* mesh, uint8* data)
{
	int32 meshidx;
	// Line 208, Address: 0x1d8e00, Func Offset: 0
	// Line 209, Address: 0x1d8e04, Func Offset: 0x4
	// Line 208, Address: 0x1d8e0c, Func Offset: 0xc
	// Line 212, Address: 0x1d8e14, Func Offset: 0x14
	// Line 209, Address: 0x1d8e18, Func Offset: 0x18
	// Line 212, Address: 0x1d8e28, Func Offset: 0x28
	// Line 215, Address: 0x1d8e34, Func Offset: 0x34
	// Line 216, Address: 0x1d8e38, Func Offset: 0x38
	// Line 218, Address: 0x1d8e5c, Func Offset: 0x5c
	// Line 222, Address: 0x1d8e80, Func Offset: 0x80
	// Line 224, Address: 0x1d8ea0, Func Offset: 0xa0
	// Line 227, Address: 0x1d8ea8, Func Offset: 0xa8
	// Line 228, Address: 0x1d8eac, Func Offset: 0xac
	// Line 230, Address: 0x1d8ec8, Func Offset: 0xc8
	// Line 234, Address: 0x1d8ee4, Func Offset: 0xe4
	// Line 236, Address: 0x1d8f00, Func Offset: 0x100
	// Func End, Address: 0x1d8f08, Func Offset: 0x108
}

