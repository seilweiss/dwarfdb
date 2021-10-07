typedef struct RxClusterDefinition;
typedef struct rwPS2AllResEntryHeader;
typedef struct RpMesh;
typedef struct RxPS2AllPipeData;
typedef struct RpInterpolator;
typedef struct RwFrustumPlane;
typedef enum RxNodeDefEditable;
typedef enum RpMeshHeaderFlags;
typedef struct RpPDSSkyVU1CodeTemplate;
typedef struct rpMatFXMaterialData;
typedef struct rxHeapBlockHeader;
typedef struct RxIoSpec;
typedef struct RwBBox;
typedef struct RwMatrixTag;
typedef struct RwRaster;
typedef struct rwPS2AllClusterInstanceInfo;
typedef struct RpAtomic;
typedef struct RxPacket;
typedef struct RwPlane;
typedef struct RxOutputSpec;
typedef struct RwSurfaceProperties;
typedef struct RpPDSSkyMatCluster;
typedef struct MatFXEnvMapData;
typedef enum RwCullMode;
typedef struct RpMaterial;
typedef struct RwSphere;
typedef struct RwFrame;
typedef struct RxCluster;
typedef struct RwTexture;
typedef struct rxHeapSuperBlockDescriptor;
typedef enum RxClusterValid;
typedef enum RpMatFXMaterialFlags;
typedef struct RwV4dTag;
typedef enum RwBlendFunction;
typedef struct RwV2d;
typedef struct RpPDSSkyMatPrimitive;
typedef struct RxPipelineCluster;
typedef enum RxClusterValidityReq;
typedef struct RpGeometry;
typedef struct RwV3d;
typedef struct RxClusterRef;
typedef struct MatFXUVAnimData;
typedef struct MatFXDualData;
typedef struct RpMaterialList;
typedef struct RpMorphTarget;
typedef struct RwMeshCache;
typedef struct rwPS2AllClusterQuickInfo;
typedef enum RxClusterForcePresent;
typedef struct RwRGBA;
typedef struct rxNodePS2AllPvtData;
typedef struct RpPDSSkyMatTemplate;
typedef struct MatFXEffectUnion;
typedef struct RxNodeMethods;
typedef enum RwCameraProjection;
typedef struct RwResEntry;
typedef struct rxNodePS2AllMatPvtData;
typedef struct MatFXBumpMapData;
typedef struct RwObjectHasFrame;
typedef enum rxEmbeddedPacketState;
typedef enum RxInstanceFlags;
typedef struct RxPipelineNode;
typedef struct BatchData;
typedef struct rwPS2AllResEntryFormat;
typedef struct MatFXEffectData;
typedef struct RwLLLink;
typedef struct RpMeshHeader;
typedef struct RxPipeline;
typedef struct rwPS2AllFieldRec;
typedef struct MatFXSkyMaterial;
typedef struct RxPipelineNodeTopSortData;
typedef struct RpClump;
typedef struct RxPipelineNodeParam;
typedef struct RwTexDictionary;
typedef struct rxReq;
typedef struct RwTexCoords;
typedef struct RxPipelineRequiresCluster;
typedef struct RwCamera;
typedef struct RxHeap;
typedef enum RwPrimitiveType;
typedef struct RwLinkList;
typedef struct RxNodeDefinition;
typedef struct RpTriangle;
typedef struct rxHeapFreeBlock;
typedef struct RwObject;

typedef RpAtomic*(*type_7)(RpAtomic*);
typedef int32(*type_10)(RxPS2AllPipeData*);
typedef int32(*type_11)(RxPS2AllPipeData*);
typedef int32(*type_12)(RxPS2AllPipeData*, void**, uint32);
typedef RwResEntry*(*type_13)(RxPS2AllPipeData*, RwResEntry**, uint32, void(*)(RwResEntry*));
typedef int32(*type_14)(RxPS2AllPipeData*);
typedef RwCamera*(*type_15)(RwCamera*);
typedef RwCamera*(*type_17)(RwCamera*);
typedef uint32(*type_21)(RxPipelineNode*, uint32, uint32, void*);
typedef void(*type_22)(RwResEntry*);
typedef int32(*type_23)(RxPipelineNode*, RxPipeline*);
typedef RwObjectHasFrame*(*type_25)(RwObjectHasFrame*);
typedef void(*type_26)(RxPipelineNode*);
typedef int32(*type_29)(RxPipelineNode*);
typedef void(*type_30)(RxNodeDefinition*);
typedef int32(*type_32)(RxNodeDefinition*);
typedef int32(*type_34)(RxPipelineNode*, RxPipelineNodeParam*);
typedef RpClump*(*type_39)(RpClump*, void*);

typedef RwV3d type_0[8];
typedef RwFrustumPlane type_1[6];
typedef int32 type_2[4];
typedef uint16 type_3[3];
typedef uint32 type_4[12];
typedef rwPS2AllClusterInstanceInfo type_5[12];
typedef uint32 type_6[4];
typedef uint32 type_8[4096];
typedef RxCluster type_9[1];
typedef int32 type_16[4];
typedef RwResEntry* type_18[1];
typedef RpPDSSkyMatCluster type_19[10];
typedef int32 type_20[4];
typedef RwV4dTag type_24[256];
typedef int8 type_27[32];
typedef int8 type_28[32];
typedef rwPS2AllFieldRec type_31[12];
typedef void* type_33[2];
typedef rwPS2AllFieldRec type_35[12];
typedef MatFXEffectData type_36[2];
typedef rwPS2AllClusterQuickInfo type_37[12];
typedef uint8 type_38[1];
typedef RwTexCoords* type_40[8];
typedef uint8 type_41[2];

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
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

struct RpMesh
{
	uint16* indices;
	uint32 numIndices;
	RpMaterial* material;
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

struct RpInterpolator
{
	int32 flags;
	int16 startMorphTarget;
	int16 endMorphTarget;
	float32 time;
	float32 recipTime;
	float32 position;
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

struct rpMatFXMaterialData
{
	MatFXEffectData data[2];
	RpMatFXMaterialFlags flags;
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

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
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

struct rwPS2AllClusterInstanceInfo
{
	uint32 attrib;
	uint32 stride;
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

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

struct RpPDSSkyMatCluster
{
	RxClusterDefinition* definition;
	uint32 type;
};

struct MatFXEnvMapData
{
	RwFrame* frame;
	RwTexture* texture;
	float32 coef;
	int32 useFrameBufferAlpha;
};

enum RwCullMode
{
	rwCULLMODENACULLMODE,
	rwCULLMODECULLNONE,
	rwCULLMODECULLBACK,
	rwCULLMODECULLFRONT,
	rwCULLMODEFORCEENUMSIZEINT = 0x7fffffff
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

struct RwSphere
{
	RwV3d center;
	float32 radius;
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

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

enum RpMatFXMaterialFlags
{
	rpMATFXEFFECTNULL,
	rpMATFXEFFECTBUMPMAP,
	rpMATFXEFFECTENVMAP,
	rpMATFXEFFECTBUMPENVMAP,
	rpMATFXEFFECTDUAL,
	rpMATFXEFFECTUVTRANSFORM,
	rpMATFXEFFECTDUALUVTRANSFORM,
	rpMATFXEFFECTMAX,
	rpMATFXNUMEFFECTS = 0x6,
	rpMATFXFORCEENUMSIZEINT = 0x7fffffff
};

struct RwV4dTag
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
};

enum RwBlendFunction
{
	rwBLENDNABLEND,
	rwBLENDZERO,
	rwBLENDONE,
	rwBLENDSRCCOLOR,
	rwBLENDINVSRCCOLOR,
	rwBLENDSRCALPHA,
	rwBLENDINVSRCALPHA,
	rwBLENDDESTALPHA,
	rwBLENDINVDESTALPHA,
	rwBLENDDESTCOLOR,
	rwBLENDINVDESTCOLOR,
	rwBLENDSRCALPHASAT,
	rwBLENDFUNCTIONFORCEENUMSIZEINT = 0x7fffffff
};

struct RwV2d
{
	float32 x;
	float32 y;
};

struct RpPDSSkyMatPrimitive
{
	RwPrimitiveType type;
	int32 clusterStride;
	int32 vertexCount;
	int32 primCount;
	int32 vifOffset;
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

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct MatFXUVAnimData
{
	RwMatrixTag* baseTransform;
	RwMatrixTag* dualTransform;
};

struct MatFXDualData
{
	RwTexture* texture;
	RwBlendFunction srcBlendMode;
	RwBlendFunction dstBlendMode;
	void* padAlign;
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

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
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

struct MatFXEffectUnion
{
	union
	{
		MatFXBumpMapData bumpMap;
		MatFXEnvMapData envMap;
		MatFXDualData dual;
		MatFXUVAnimData uvAnim;
	};
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

struct MatFXBumpMapData
{
	RwFrame* frame;
	RwTexture* texture;
	RwTexture* bumpTexture;
	float32 coef;
	float32 invBumpWidth;
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

struct BatchData
{
	int32 size;
	uint16* indices;
	RwV4dTag* xyzw;
	RwV4dTag* uv2;
	uint32* rgba;
	RwV4dTag* skin;
	int32 vuoffset;
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

struct MatFXEffectData
{
	MatFXEffectUnion data;
	RpMatFXMaterialFlags flag;
	MatFXSkyMaterial skyMat;
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

struct MatFXSkyMaterial
{
	ulong32 alpha;
	ulong32 fogcol;
	ulong32 test;
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

void* rwPDS_VCL_HIFastSkinGem_VU1Transforms[2];
RpPDSSkyVU1CodeTemplate rwPDS_VCL_HIFastSkinGem_VU1Code;
RpPDSSkyMatTemplate rwPDS_VCL_HIFastSkinGem_MatPipe;
<unknown fundamental type (0xa510)>* _rwDMAPktPtr;
long32 skyTest_1;
uint32 skyUserSwitch1;
<unknown fundamental type (0xa510)> skyClipVect2;
<unknown fundamental type (0xa510)> skyClipVect1;
RwRaster* skyTextureRaster;
long32 skyPrim_State;
long32 skyClamp_1;
uint32 ourGlobals[4096];
long32 skyFogcol;
void* skyUploadedCode;
long32 skyTex1_1;
int32 skyTSClipperMode;
uint32 skyUserSwitch2;
RwCullMode gSkyCullState;
<unknown fundamental type (0xa510)> skyCClipVect2;
<unknown fundamental type (0xa510)> skyCClipVect1;
int32 skyTLClipperMode;
<unknown fundamental type (0xa510)> gifTag128;
int32 skyAlphaTex;
int32 skyVertexAlpha;
int32 skyRasterExt;
long32 skyZbuf_1;
int32 MatFXMaterialDataOffset;

int32 HIFastSkinGemInstanceCallBack(RxPS2AllPipeData* ps2AllPipeData, void** clusterData, uint32 numClusters);
void HIFastSkinGemInterleaveNormalReprocessData(RxPS2AllPipeData* ps2AllPipeData);
void FastSkinGemReprocessData(RxPS2AllPipeData* ps2AllPipeData);
void MoveBatchElement(BatchData* batch, int32 srcidx, int32 dstidx);
void HIFastSkinGemGetBatchData(BatchData* batch, int32 batchindex, rwPS2AllResEntryHeader* hdr, RpMesh* mesh, uint8* data);
int32 HIFastSkinGemMatBridgeCallBack(RxPS2AllPipeData* ps2AllPipeData);

// HIFastSkinGemInstanceCallBack__FP16RxPS2AllPipeDataPPvUi
// Start address: 0x1d3f80
int32 HIFastSkinGemInstanceCallBack(RxPS2AllPipeData* ps2AllPipeData, void** clusterData, uint32 numClusters)
{
	// Line 1147, Address: 0x1d3f80, Func Offset: 0
	// Line 1149, Address: 0x1d3f8c, Func Offset: 0xc
	// Line 1152, Address: 0x1d3f94, Func Offset: 0x14
	// Line 1155, Address: 0x1d3f9c, Func Offset: 0x1c
	// Line 1158, Address: 0x1d3fa4, Func Offset: 0x24
	// Line 1157, Address: 0x1d3fa8, Func Offset: 0x28
	// Line 1158, Address: 0x1d3fac, Func Offset: 0x2c
	// Func End, Address: 0x1d3fb8, Func Offset: 0x38
}

// HIFastSkinGemInterleaveNormalReprocessData__FP16RxPS2AllPipeData
// Start address: 0x1d3fc0
void HIFastSkinGemInterleaveNormalReprocessData(RxPS2AllPipeData* ps2AllPipeData)
{
	int32 i;
	int32 j;
	int32 totwtct[4];
	BatchData batchcurr;
	RpMesh* mesh;
	rwPS2AllResEntryHeader* hdr;
	uint8* data;
	int32 numbatches;
	RwV3d* normals;
	RwV3d* curnorm;
	// Line 1102, Address: 0x1d3fc0, Func Offset: 0
	// Line 1103, Address: 0x1d3fc4, Func Offset: 0x4
	// Line 1102, Address: 0x1d3fc8, Func Offset: 0x8
	// Line 1103, Address: 0x1d3fcc, Func Offset: 0xc
	// Line 1102, Address: 0x1d3fd0, Func Offset: 0x10
	// Line 1103, Address: 0x1d3ff0, Func Offset: 0x30
	// Line 1108, Address: 0x1d4014, Func Offset: 0x54
	// Line 1116, Address: 0x1d4018, Func Offset: 0x58
	// Line 1106, Address: 0x1d401c, Func Offset: 0x5c
	// Line 1108, Address: 0x1d4020, Func Offset: 0x60
	// Line 1110, Address: 0x1d4024, Func Offset: 0x64
	// Line 1112, Address: 0x1d4028, Func Offset: 0x68
	// Line 1109, Address: 0x1d402c, Func Offset: 0x6c
	// Line 1108, Address: 0x1d4030, Func Offset: 0x70
	// Line 1110, Address: 0x1d4034, Func Offset: 0x74
	// Line 1112, Address: 0x1d4038, Func Offset: 0x78
	// Line 1109, Address: 0x1d403c, Func Offset: 0x7c
	// Line 1112, Address: 0x1d4040, Func Offset: 0x80
	// Line 1110, Address: 0x1d4044, Func Offset: 0x84
	// Line 1112, Address: 0x1d404c, Func Offset: 0x8c
	// Line 1110, Address: 0x1d4054, Func Offset: 0x94
	// Line 1116, Address: 0x1d4058, Func Offset: 0x98
	// Line 1117, Address: 0x1d4060, Func Offset: 0xa0
	// Line 1120, Address: 0x1d406c, Func Offset: 0xac
	// Line 1137, Address: 0x1d4078, Func Offset: 0xb8
	// Line 1116, Address: 0x1d408c, Func Offset: 0xcc
	// Line 1137, Address: 0x1d4090, Func Offset: 0xd0
	// Line 1117, Address: 0x1d40a8, Func Offset: 0xe8
	// Line 1137, Address: 0x1d40ac, Func Offset: 0xec
	// Line 1123, Address: 0x1d40cc, Func Offset: 0x10c
	// Line 1137, Address: 0x1d40d8, Func Offset: 0x118
	// Line 1131, Address: 0x1d40f8, Func Offset: 0x138
	// Line 1127, Address: 0x1d40fc, Func Offset: 0x13c
	// Line 1137, Address: 0x1d4100, Func Offset: 0x140
	// Line 1130, Address: 0x1d4120, Func Offset: 0x160
	// Line 1137, Address: 0x1d4124, Func Offset: 0x164
	// Line 1130, Address: 0x1d4128, Func Offset: 0x168
	// Line 1137, Address: 0x1d412c, Func Offset: 0x16c
	// Line 1131, Address: 0x1d4134, Func Offset: 0x174
	// Line 1137, Address: 0x1d4138, Func Offset: 0x178
	// Func End, Address: 0x1d41b4, Func Offset: 0x1f4
}

// FastSkinGemReprocessData__FP16RxPS2AllPipeData
// Start address: 0x1d41c0
void FastSkinGemReprocessData(RxPS2AllPipeData* ps2AllPipeData)
{
	int32 i;
	int32 j;
	int32 k;
	int32 totwtct[4];
	BatchData batchlast;
	BatchData batchcurr;
	RwV4dTag overlapRestore[256];
	RpMesh* mesh;
	rwPS2AllResEntryHeader* hdr;
	uint8* data;
	int32 numbatches;
	int32 repcount;
	int32 repstart;
	int32 repend;
	int32 repemit;
	int32 lastemit;
	int32 overlapCount;
	RwV4dTag* currOverlapRestore;
	int32 origindex;
	int32 smallidx;
	int32 smallval;
	int32 gotBadOverlap;
	int32 overIdx;
	int32 overNum;
	int32 uniqIdx;
	int32 uniqcurr;
	int32 zval;
	int32 wval;
	int32 weightct[4];
	// Line 663, Address: 0x1d41c0, Func Offset: 0
	// Line 664, Address: 0x1d41c4, Func Offset: 0x4
	// Line 663, Address: 0x1d41c8, Func Offset: 0x8
	// Line 664, Address: 0x1d41cc, Func Offset: 0xc
	// Line 663, Address: 0x1d41d0, Func Offset: 0x10
	// Line 664, Address: 0x1d41f0, Func Offset: 0x30
	// Line 668, Address: 0x1d4214, Func Offset: 0x54
	// Line 676, Address: 0x1d4218, Func Offset: 0x58
	// Line 670, Address: 0x1d421c, Func Offset: 0x5c
	// Line 668, Address: 0x1d4220, Func Offset: 0x60
	// Line 672, Address: 0x1d4224, Func Offset: 0x64
	// Line 670, Address: 0x1d4228, Func Offset: 0x68
	// Line 672, Address: 0x1d422c, Func Offset: 0x6c
	// Line 670, Address: 0x1d4230, Func Offset: 0x70
	// Line 671, Address: 0x1d4238, Func Offset: 0x78
	// Line 672, Address: 0x1d4244, Func Offset: 0x84
	// Line 676, Address: 0x1d4254, Func Offset: 0x94
	// Line 677, Address: 0x1d425c, Func Offset: 0x9c
	// Line 680, Address: 0x1d4288, Func Offset: 0xc8
	// Line 681, Address: 0x1d4298, Func Offset: 0xd8
	// Line 682, Address: 0x1d42a8, Func Offset: 0xe8
	// Line 688, Address: 0x1d42c0, Func Offset: 0x100
	// Line 689, Address: 0x1d42c4, Func Offset: 0x104
	// Line 688, Address: 0x1d42c8, Func Offset: 0x108
	// Line 690, Address: 0x1d42cc, Func Offset: 0x10c
	// Line 689, Address: 0x1d42d0, Func Offset: 0x110
	// Line 684, Address: 0x1d42d4, Func Offset: 0x114
	// Line 688, Address: 0x1d42d8, Func Offset: 0x118
	// Line 685, Address: 0x1d42dc, Func Offset: 0x11c
	// Line 689, Address: 0x1d42e0, Func Offset: 0x120
	// Line 690, Address: 0x1d42e4, Func Offset: 0x124
	// Line 688, Address: 0x1d42ec, Func Offset: 0x12c
	// Line 690, Address: 0x1d42f4, Func Offset: 0x134
	// Line 688, Address: 0x1d42f8, Func Offset: 0x138
	// Line 690, Address: 0x1d42fc, Func Offset: 0x13c
	// Line 689, Address: 0x1d4300, Func Offset: 0x140
	// Line 688, Address: 0x1d4304, Func Offset: 0x144
	// Line 689, Address: 0x1d4308, Func Offset: 0x148
	// Line 690, Address: 0x1d4354, Func Offset: 0x194
	// Line 691, Address: 0x1d435c, Func Offset: 0x19c
	// Line 695, Address: 0x1d4368, Func Offset: 0x1a8
	// Line 691, Address: 0x1d436c, Func Offset: 0x1ac
	// Line 695, Address: 0x1d4374, Func Offset: 0x1b4
	// Line 691, Address: 0x1d4378, Func Offset: 0x1b8
	// Line 695, Address: 0x1d4380, Func Offset: 0x1c0
	// Line 696, Address: 0x1d438c, Func Offset: 0x1cc
	// Line 695, Address: 0x1d4390, Func Offset: 0x1d0
	// Line 696, Address: 0x1d4398, Func Offset: 0x1d8
	// Line 697, Address: 0x1d43a8, Func Offset: 0x1e8
	// Line 1098, Address: 0x1d43c4, Func Offset: 0x204
	// Line 676, Address: 0x1d43d8, Func Offset: 0x218
	// Line 1098, Address: 0x1d43dc, Func Offset: 0x21c
	// Line 704, Address: 0x1d43f0, Func Offset: 0x230
	// Line 705, Address: 0x1d43f4, Func Offset: 0x234
	// Line 1098, Address: 0x1d43f8, Func Offset: 0x238
	// Line 718, Address: 0x1d4434, Func Offset: 0x274
	// Line 1098, Address: 0x1d4438, Func Offset: 0x278
	// Line 720, Address: 0x1d4444, Func Offset: 0x284
	// Line 1098, Address: 0x1d444c, Func Offset: 0x28c
	// Line 722, Address: 0x1d4458, Func Offset: 0x298
	// Line 1098, Address: 0x1d445c, Func Offset: 0x29c
	// Line 728, Address: 0x1d4494, Func Offset: 0x2d4
	// Line 730, Address: 0x1d449c, Func Offset: 0x2dc
	// Line 1098, Address: 0x1d44a0, Func Offset: 0x2e0
	// Line 734, Address: 0x1d44d4, Func Offset: 0x314
	// Line 735, Address: 0x1d44d8, Func Offset: 0x318
	// Line 1098, Address: 0x1d44dc, Func Offset: 0x31c
	// Line 738, Address: 0x1d4504, Func Offset: 0x344
	// Line 1098, Address: 0x1d4508, Func Offset: 0x348
	// Line 744, Address: 0x1d452c, Func Offset: 0x36c
	// Line 746, Address: 0x1d4534, Func Offset: 0x374
	// Line 1098, Address: 0x1d4538, Func Offset: 0x378
	// Line 761, Address: 0x1d4590, Func Offset: 0x3d0
	// Line 1098, Address: 0x1d4594, Func Offset: 0x3d4
	// Line 768, Address: 0x1d45f8, Func Offset: 0x438
	// Line 1098, Address: 0x1d4600, Func Offset: 0x440
	// Line 799, Address: 0x1d4878, Func Offset: 0x6b8
	// Line 800, Address: 0x1d487c, Func Offset: 0x6bc
	// Line 1098, Address: 0x1d4880, Func Offset: 0x6c0
	// Line 812, Address: 0x1d48d4, Func Offset: 0x714
	// Line 1098, Address: 0x1d48d8, Func Offset: 0x718
	// Line 815, Address: 0x1d48dc, Func Offset: 0x71c
	// Line 1098, Address: 0x1d48e0, Func Offset: 0x720
	// Line 826, Address: 0x1d4924, Func Offset: 0x764
	// Line 832, Address: 0x1d4928, Func Offset: 0x768
	// Line 1098, Address: 0x1d492c, Func Offset: 0x76c
	// Line 836, Address: 0x1d4964, Func Offset: 0x7a4
	// Line 1098, Address: 0x1d4968, Func Offset: 0x7a8
	// Line 844, Address: 0x1d4974, Func Offset: 0x7b4
	// Line 1098, Address: 0x1d4978, Func Offset: 0x7b8
	// Line 847, Address: 0x1d49cc, Func Offset: 0x80c
	// Line 1098, Address: 0x1d49d0, Func Offset: 0x810
	// Line 849, Address: 0x1d49e0, Func Offset: 0x820
	// Line 1098, Address: 0x1d49e4, Func Offset: 0x824
	// Line 850, Address: 0x1d49ec, Func Offset: 0x82c
	// Line 852, Address: 0x1d49f4, Func Offset: 0x834
	// Line 1098, Address: 0x1d49f8, Func Offset: 0x838
	// Line 858, Address: 0x1d4a1c, Func Offset: 0x85c
	// Line 860, Address: 0x1d4a24, Func Offset: 0x864
	// Line 1098, Address: 0x1d4a28, Func Offset: 0x868
	// Line 866, Address: 0x1d4a4c, Func Offset: 0x88c
	// Line 868, Address: 0x1d4a50, Func Offset: 0x890
	// Line 1098, Address: 0x1d4a58, Func Offset: 0x898
	// Line 870, Address: 0x1d4a5c, Func Offset: 0x89c
	// Line 899, Address: 0x1d4a64, Func Offset: 0x8a4
	// Line 1098, Address: 0x1d4a68, Func Offset: 0x8a8
	// Line 870, Address: 0x1d4a94, Func Offset: 0x8d4
	// Line 1098, Address: 0x1d4a98, Func Offset: 0x8d8
	// Line 871, Address: 0x1d4a9c, Func Offset: 0x8dc
	// Line 1098, Address: 0x1d4aa0, Func Offset: 0x8e0
	// Line 879, Address: 0x1d4aac, Func Offset: 0x8ec
	// Line 1098, Address: 0x1d4ab0, Func Offset: 0x8f0
	// Line 882, Address: 0x1d4b04, Func Offset: 0x944
	// Line 1098, Address: 0x1d4b08, Func Offset: 0x948
	// Line 884, Address: 0x1d4b18, Func Offset: 0x958
	// Line 1098, Address: 0x1d4b1c, Func Offset: 0x95c
	// Line 885, Address: 0x1d4b24, Func Offset: 0x964
	// Line 887, Address: 0x1d4b2c, Func Offset: 0x96c
	// Line 1098, Address: 0x1d4b30, Func Offset: 0x970
	// Line 893, Address: 0x1d4b54, Func Offset: 0x994
	// Line 895, Address: 0x1d4b5c, Func Offset: 0x99c
	// Line 1098, Address: 0x1d4b60, Func Offset: 0x9a0
	// Line 901, Address: 0x1d4b84, Func Offset: 0x9c4
	// Line 1098, Address: 0x1d4b88, Func Offset: 0x9c8
	// Line 905, Address: 0x1d4bc0, Func Offset: 0xa00
	// Line 1098, Address: 0x1d4bc4, Func Offset: 0xa04
	// Line 910, Address: 0x1d4be4, Func Offset: 0xa24
	// Line 1098, Address: 0x1d4be8, Func Offset: 0xa28
	// Line 919, Address: 0x1d4c14, Func Offset: 0xa54
	// Line 1098, Address: 0x1d4c18, Func Offset: 0xa58
	// Line 920, Address: 0x1d4c28, Func Offset: 0xa68
	// Line 1098, Address: 0x1d4c2c, Func Offset: 0xa6c
	// Line 854, Address: 0x1d4c58, Func Offset: 0xa98
	// Line 1098, Address: 0x1d4c60, Func Offset: 0xaa0
	// Line 889, Address: 0x1d4c70, Func Offset: 0xab0
	// Line 1098, Address: 0x1d4c78, Func Offset: 0xab8
	// Line 935, Address: 0x1d4cb0, Func Offset: 0xaf0
	// Line 1098, Address: 0x1d4cb4, Func Offset: 0xaf4
	// Line 936, Address: 0x1d4cd4, Func Offset: 0xb14
	// Line 1098, Address: 0x1d4cd8, Func Offset: 0xb18
	// Line 937, Address: 0x1d4cdc, Func Offset: 0xb1c
	// Line 1098, Address: 0x1d4ce0, Func Offset: 0xb20
	// Line 949, Address: 0x1d4cfc, Func Offset: 0xb3c
	// Line 1098, Address: 0x1d4d04, Func Offset: 0xb44
	// Line 926, Address: 0x1d4d0c, Func Offset: 0xb4c
	// Line 1098, Address: 0x1d4d10, Func Offset: 0xb50
	// Line 927, Address: 0x1d4d24, Func Offset: 0xb64
	// Line 1098, Address: 0x1d4d2c, Func Offset: 0xb6c
	// Line 937, Address: 0x1d4d48, Func Offset: 0xb88
	// Line 1098, Address: 0x1d4d4c, Func Offset: 0xb8c
	// Line 940, Address: 0x1d4d58, Func Offset: 0xb98
	// Line 941, Address: 0x1d4d5c, Func Offset: 0xb9c
	// Line 1098, Address: 0x1d4d60, Func Offset: 0xba0
	// Line 940, Address: 0x1d4d6c, Func Offset: 0xbac
	// Line 1098, Address: 0x1d4d70, Func Offset: 0xbb0
	// Line 958, Address: 0x1d4d88, Func Offset: 0xbc8
	// Line 1098, Address: 0x1d4d8c, Func Offset: 0xbcc
	// Line 993, Address: 0x1d4da8, Func Offset: 0xbe8
	// Line 1098, Address: 0x1d4dac, Func Offset: 0xbec
	// Line 993, Address: 0x1d4dc4, Func Offset: 0xc04
	// Line 1098, Address: 0x1d4dd0, Func Offset: 0xc10
	// Line 960, Address: 0x1d4dfc, Func Offset: 0xc3c
	// Line 1098, Address: 0x1d4e00, Func Offset: 0xc40
	// Line 961, Address: 0x1d4e04, Func Offset: 0xc44
	// Line 960, Address: 0x1d4e08, Func Offset: 0xc48
	// Line 1098, Address: 0x1d4e0c, Func Offset: 0xc4c
	// Line 960, Address: 0x1d4e14, Func Offset: 0xc54
	// Line 1098, Address: 0x1d4e18, Func Offset: 0xc58
	// Line 961, Address: 0x1d4e28, Func Offset: 0xc68
	// Line 1098, Address: 0x1d4e34, Func Offset: 0xc74
	// Line 1005, Address: 0x1d4e64, Func Offset: 0xca4
	// Line 1098, Address: 0x1d4e68, Func Offset: 0xca8
	// Line 1016, Address: 0x1d4e98, Func Offset: 0xcd8
	// Line 1098, Address: 0x1d4ea0, Func Offset: 0xce0
	// Line 1017, Address: 0x1d4eb0, Func Offset: 0xcf0
	// Line 1098, Address: 0x1d4ec0, Func Offset: 0xd00
	// Line 1022, Address: 0x1d4ee0, Func Offset: 0xd20
	// Line 1098, Address: 0x1d4ee4, Func Offset: 0xd24
	// Line 1019, Address: 0x1d4eec, Func Offset: 0xd2c
	// Line 1098, Address: 0x1d4ef0, Func Offset: 0xd30
	// Line 1022, Address: 0x1d4f00, Func Offset: 0xd40
	// Line 1098, Address: 0x1d4f04, Func Offset: 0xd44
	// Line 1024, Address: 0x1d4f0c, Func Offset: 0xd4c
	// Line 1098, Address: 0x1d4f10, Func Offset: 0xd50
	// Line 1025, Address: 0x1d4f18, Func Offset: 0xd58
	// Line 1098, Address: 0x1d4f1c, Func Offset: 0xd5c
	// Line 1027, Address: 0x1d4f24, Func Offset: 0xd64
	// Line 1098, Address: 0x1d4f28, Func Offset: 0xd68
	// Line 1028, Address: 0x1d4f30, Func Offset: 0xd70
	// Line 1098, Address: 0x1d4f34, Func Offset: 0xd74
	// Line 1031, Address: 0x1d4f3c, Func Offset: 0xd7c
	// Line 1098, Address: 0x1d4f40, Func Offset: 0xd80
	// Line 1053, Address: 0x1d4f8c, Func Offset: 0xdcc
	// Line 1098, Address: 0x1d4f90, Func Offset: 0xdd0
	// Line 1053, Address: 0x1d4fa8, Func Offset: 0xde8
	// Line 1098, Address: 0x1d4fac, Func Offset: 0xdec
	// Line 1054, Address: 0x1d4fb4, Func Offset: 0xdf4
	// Line 1056, Address: 0x1d4fbc, Func Offset: 0xdfc
	// Line 1098, Address: 0x1d4fc4, Func Offset: 0xe04
	// Line 1034, Address: 0x1d505c, Func Offset: 0xe9c
	// Line 1098, Address: 0x1d5060, Func Offset: 0xea0
	// Line 1034, Address: 0x1d5078, Func Offset: 0xeb8
	// Line 1098, Address: 0x1d507c, Func Offset: 0xebc
	// Line 1037, Address: 0x1d508c, Func Offset: 0xecc
	// Line 1098, Address: 0x1d5090, Func Offset: 0xed0
	// Line 1037, Address: 0x1d5098, Func Offset: 0xed8
	// Line 1098, Address: 0x1d509c, Func Offset: 0xedc
	// Line 1040, Address: 0x1d50ac, Func Offset: 0xeec
	// Line 1098, Address: 0x1d50b0, Func Offset: 0xef0
	// Line 1040, Address: 0x1d50b8, Func Offset: 0xef8
	// Line 1098, Address: 0x1d50bc, Func Offset: 0xefc
	// Line 1041, Address: 0x1d50c4, Func Offset: 0xf04
	// Line 1043, Address: 0x1d50cc, Func Offset: 0xf0c
	// Line 1035, Address: 0x1d50d4, Func Offset: 0xf14
	// Line 1038, Address: 0x1d50e4, Func Offset: 0xf24
	// Line 1098, Address: 0x1d50f4, Func Offset: 0xf34
	// Line 1045, Address: 0x1d5100, Func Offset: 0xf40
	// Line 1098, Address: 0x1d5104, Func Offset: 0xf44
	// Line 1045, Address: 0x1d511c, Func Offset: 0xf5c
	// Line 1098, Address: 0x1d5120, Func Offset: 0xf60
	// Line 1048, Address: 0x1d5130, Func Offset: 0xf70
	// Line 1098, Address: 0x1d5134, Func Offset: 0xf74
	// Line 1048, Address: 0x1d513c, Func Offset: 0xf7c
	// Line 1098, Address: 0x1d5140, Func Offset: 0xf80
	// Line 1049, Address: 0x1d5148, Func Offset: 0xf88
	// Line 1051, Address: 0x1d5150, Func Offset: 0xf90
	// Line 1046, Address: 0x1d5158, Func Offset: 0xf98
	// Line 1098, Address: 0x1d5168, Func Offset: 0xfa8
	// Func End, Address: 0x1d5198, Func Offset: 0xfd8
}

// MoveBatchElement__FP9BatchDataii
// Start address: 0x1d51a0
void MoveBatchElement(BatchData* batch, int32 srcidx, int32 dstidx)
{
	int32 i;
	RwV4dTag swap_xyzw;
	RwV4dTag swap_uv2;
	uint32 swap_rgba;
	RwV4dTag swap_skin;
	RwV4dTag swap_xyzw;
	RwV4dTag swap_uv2;
	uint32 swap_rgba;
	RwV4dTag swap_skin;
	// Line 601, Address: 0x1d51a0, Func Offset: 0
	// Line 603, Address: 0x1d51ac, Func Offset: 0xc
	// Line 607, Address: 0x1d51b4, Func Offset: 0x14
	// Line 609, Address: 0x1d51c0, Func Offset: 0x20
	// Line 610, Address: 0x1d51c8, Func Offset: 0x28
	// Line 609, Address: 0x1d51d0, Func Offset: 0x30
	// Line 610, Address: 0x1d51f0, Func Offset: 0x50
	// Line 611, Address: 0x1d5458, Func Offset: 0x2b8
	// Line 614, Address: 0x1d5488, Func Offset: 0x2e8
	// Line 615, Address: 0x1d5490, Func Offset: 0x2f0
	// Line 616, Address: 0x1d5494, Func Offset: 0x2f4
	// Line 615, Address: 0x1d5498, Func Offset: 0x2f8
	// Line 616, Address: 0x1d549c, Func Offset: 0x2fc
	// Line 615, Address: 0x1d54a0, Func Offset: 0x300
	// Line 616, Address: 0x1d54b8, Func Offset: 0x318
	// Line 617, Address: 0x1d5720, Func Offset: 0x580
	// Line 620, Address: 0x1d574c, Func Offset: 0x5ac
	// Line 622, Address: 0x1d5758, Func Offset: 0x5b8
	// Line 621, Address: 0x1d575c, Func Offset: 0x5bc
	// Line 622, Address: 0x1d5764, Func Offset: 0x5c4
	// Line 623, Address: 0x1d5888, Func Offset: 0x6e8
	// Line 625, Address: 0x1d589c, Func Offset: 0x6fc
	// Line 626, Address: 0x1d58a4, Func Offset: 0x704
	// Line 627, Address: 0x1d58a8, Func Offset: 0x708
	// Line 626, Address: 0x1d58ac, Func Offset: 0x70c
	// Line 627, Address: 0x1d58c8, Func Offset: 0x728
	// Line 628, Address: 0x1d5b28, Func Offset: 0x988
	// Line 630, Address: 0x1d5b4c, Func Offset: 0x9ac
	// Line 632, Address: 0x1d5b54, Func Offset: 0x9b4
	// Line 633, Address: 0x1d5b5c, Func Offset: 0x9bc
	// Line 632, Address: 0x1d5b64, Func Offset: 0x9c4
	// Line 633, Address: 0x1d5b84, Func Offset: 0x9e4
	// Line 634, Address: 0x1d5df0, Func Offset: 0xc50
	// Line 637, Address: 0x1d5e20, Func Offset: 0xc80
	// Line 638, Address: 0x1d5e28, Func Offset: 0xc88
	// Line 639, Address: 0x1d5e2c, Func Offset: 0xc8c
	// Line 638, Address: 0x1d5e30, Func Offset: 0xc90
	// Line 639, Address: 0x1d5e34, Func Offset: 0xc94
	// Line 638, Address: 0x1d5e38, Func Offset: 0xc98
	// Line 639, Address: 0x1d5e50, Func Offset: 0xcb0
	// Line 640, Address: 0x1d60c0, Func Offset: 0xf20
	// Line 643, Address: 0x1d60ec, Func Offset: 0xf4c
	// Line 644, Address: 0x1d60f4, Func Offset: 0xf54
	// Line 645, Address: 0x1d60f8, Func Offset: 0xf58
	// Line 644, Address: 0x1d60fc, Func Offset: 0xf5c
	// Line 645, Address: 0x1d6100, Func Offset: 0xf60
	// Line 646, Address: 0x1d6230, Func Offset: 0x1090
	// Line 648, Address: 0x1d6244, Func Offset: 0x10a4
	// Line 649, Address: 0x1d624c, Func Offset: 0x10ac
	// Line 650, Address: 0x1d6250, Func Offset: 0x10b0
	// Line 649, Address: 0x1d6254, Func Offset: 0x10b4
	// Line 650, Address: 0x1d6258, Func Offset: 0x10b8
	// Line 649, Address: 0x1d625c, Func Offset: 0x10bc
	// Line 650, Address: 0x1d6274, Func Offset: 0x10d4
	// Line 651, Address: 0x1d64e0, Func Offset: 0x1340
	// Line 654, Address: 0x1d6508, Func Offset: 0x1368
	// Func End, Address: 0x1d65a4, Func Offset: 0x1404
}

// HIFastSkinGemGetBatchData__FP9BatchDataiP22rwPS2AllResEntryHeaderPC6RpMeshPUc
// Start address: 0x1d65b0
void HIFastSkinGemGetBatchData(BatchData* batch, int32 batchindex, rwPS2AllResEntryHeader* hdr, RpMesh* mesh, uint8* data)
{
	int32 meshidx;
	// Line 575, Address: 0x1d65b0, Func Offset: 0
	// Line 576, Address: 0x1d65b4, Func Offset: 0x4
	// Line 575, Address: 0x1d65bc, Func Offset: 0xc
	// Line 579, Address: 0x1d65c4, Func Offset: 0x14
	// Line 576, Address: 0x1d65c8, Func Offset: 0x18
	// Line 579, Address: 0x1d65d8, Func Offset: 0x28
	// Line 582, Address: 0x1d65e4, Func Offset: 0x34
	// Line 583, Address: 0x1d65e8, Func Offset: 0x38
	// Line 584, Address: 0x1d660c, Func Offset: 0x5c
	// Line 585, Address: 0x1d6630, Func Offset: 0x80
	// Line 588, Address: 0x1d6650, Func Offset: 0xa0
	// Line 590, Address: 0x1d6658, Func Offset: 0xa8
	// Line 591, Address: 0x1d665c, Func Offset: 0xac
	// Line 592, Address: 0x1d6678, Func Offset: 0xc8
	// Line 593, Address: 0x1d6694, Func Offset: 0xe4
	// Line 594, Address: 0x1d66b4, Func Offset: 0x104
	// Line 596, Address: 0x1d66b8, Func Offset: 0x108
	// Func End, Address: 0x1d66c0, Func Offset: 0x110
}

// HIFastSkinGemMatBridgeCallBack__FP16RxPS2AllPipeData
// Start address: 0x1d66c0
int32 HIFastSkinGemMatBridgeCallBack(RxPS2AllPipeData* ps2AllPipeData)
{
	<unknown fundamental type (0xa510)>* _rwDMAPktPtr'708;
	uint32 skyUserSwitch1'707;
	RpMaterial* material;
	rpMatFXMaterialData* materialData;
	RwTexture* baseTexture;
	RwTexture* dualTexture;
	ulong32 alpha_2;
	ulong32 clamp_2;
	ulong32 fogcol_2;
	ulong32 test_2;
	ulong32 tex1_2;
	long32 zbuf_2;
	RwMatrixTag envMapMatrix;
	<unknown fundamental type (0xa510)> ltmp;
	ulong32 tmp1;
	int32 oldTSClipperMode;
	RwMatrixTag tmpMat;
	RwMatrixTag* atomicLtm;
	RpAtomic* atomic;
	RwFrame* envMapFrame;
	uint32 alphaFix;
	ulong32 primSwitch;
	ulong32 fogSwitch;
	ulong32 rastex1;
	ulong32 rastex2;
	int32 fogVal;
	int32 fogRestoreFlag;
	RwFrame* frame;
	RwCamera* camera;
	RwFrame* camframe;
	float32 fogDist;
	long32 prmTmp;
	uint32 __skySwitchFlag;
	ulong32 __tmp;
	void* _kohd;
	rwPS2AllResEntryHeader* _p2rh;
	// Line 158, Address: 0x1d66c0, Func Offset: 0
	// Line 199, Address: 0x1d66c4, Func Offset: 0x4
	// Line 158, Address: 0x1d66c8, Func Offset: 0x8
	// Line 178, Address: 0x1d66f4, Func Offset: 0x34
	// Line 185, Address: 0x1d66f8, Func Offset: 0x38
	// Line 178, Address: 0x1d66fc, Func Offset: 0x3c
	// Line 179, Address: 0x1d6700, Func Offset: 0x40
	// Line 185, Address: 0x1d6704, Func Offset: 0x44
	// Line 182, Address: 0x1d6708, Func Offset: 0x48
	// Line 179, Address: 0x1d670c, Func Offset: 0x4c
	// Line 184, Address: 0x1d6714, Func Offset: 0x54
	// Line 185, Address: 0x1d6718, Func Offset: 0x58
	// Line 199, Address: 0x1d671c, Func Offset: 0x5c
	// Line 215, Address: 0x1d6724, Func Offset: 0x64
	// Line 245, Address: 0x1d6730, Func Offset: 0x70
	// Line 252, Address: 0x1d6738, Func Offset: 0x78
	// Line 253, Address: 0x1d673c, Func Offset: 0x7c
	// Line 251, Address: 0x1d6740, Func Offset: 0x80
	// Line 253, Address: 0x1d6744, Func Offset: 0x84
	// Line 254, Address: 0x1d6750, Func Offset: 0x90
	// Line 257, Address: 0x1d675c, Func Offset: 0x9c
	// Line 254, Address: 0x1d6760, Func Offset: 0xa0
	// Line 258, Address: 0x1d6764, Func Offset: 0xa4
	// Line 262, Address: 0x1d676c, Func Offset: 0xac
	// Line 263, Address: 0x1d6778, Func Offset: 0xb8
	// Line 264, Address: 0x1d678c, Func Offset: 0xcc
	// Line 263, Address: 0x1d6794, Func Offset: 0xd4
	// Line 264, Address: 0x1d6798, Func Offset: 0xd8
	// Line 265, Address: 0x1d679c, Func Offset: 0xdc
	// Line 263, Address: 0x1d67a8, Func Offset: 0xe8
	// Line 264, Address: 0x1d67b0, Func Offset: 0xf0
	// Line 265, Address: 0x1d67bc, Func Offset: 0xfc
	// Line 263, Address: 0x1d67c8, Func Offset: 0x108
	// Line 264, Address: 0x1d67d4, Func Offset: 0x114
	// Line 265, Address: 0x1d67e0, Func Offset: 0x120
	// Line 298, Address: 0x1d67ec, Func Offset: 0x12c
	// Line 301, Address: 0x1d67f8, Func Offset: 0x138
	// Line 302, Address: 0x1d6800, Func Offset: 0x140
	// Line 303, Address: 0x1d6874, Func Offset: 0x1b4
	// Line 318, Address: 0x1d6894, Func Offset: 0x1d4
	// Line 320, Address: 0x1d6898, Func Offset: 0x1d8
	// Line 319, Address: 0x1d689c, Func Offset: 0x1dc
	// Line 321, Address: 0x1d68a0, Func Offset: 0x1e0
	// Line 324, Address: 0x1d68a4, Func Offset: 0x1e4
	// Line 346, Address: 0x1d6a6c, Func Offset: 0x3ac
	// Line 358, Address: 0x1d6a8c, Func Offset: 0x3cc
	// Line 346, Address: 0x1d6aa8, Func Offset: 0x3e8
	// Line 358, Address: 0x1d6aac, Func Offset: 0x3ec
	// Line 346, Address: 0x1d6ab0, Func Offset: 0x3f0
	// Line 359, Address: 0x1d6abc, Func Offset: 0x3fc
	// Line 364, Address: 0x1d6ac0, Func Offset: 0x400
	// Line 367, Address: 0x1d6ad0, Func Offset: 0x410
	// Line 372, Address: 0x1d6ad8, Func Offset: 0x418
	// Line 371, Address: 0x1d6adc, Func Offset: 0x41c
	// Line 372, Address: 0x1d6ae0, Func Offset: 0x420
	// Line 371, Address: 0x1d6ae4, Func Offset: 0x424
	// Line 378, Address: 0x1d6ae8, Func Offset: 0x428
	// Line 374, Address: 0x1d6af0, Func Offset: 0x430
	// Line 373, Address: 0x1d6af4, Func Offset: 0x434
	// Line 378, Address: 0x1d6af8, Func Offset: 0x438
	// Line 374, Address: 0x1d6afc, Func Offset: 0x43c
	// Line 378, Address: 0x1d6b08, Func Offset: 0x448
	// Line 373, Address: 0x1d6b0c, Func Offset: 0x44c
	// Line 374, Address: 0x1d6b18, Func Offset: 0x458
	// Line 378, Address: 0x1d6b40, Func Offset: 0x480
	// Line 379, Address: 0x1d6b50, Func Offset: 0x490
	// Line 380, Address: 0x1d6b9c, Func Offset: 0x4dc
	// Line 383, Address: 0x1d6ba0, Func Offset: 0x4e0
	// Line 380, Address: 0x1d6ba4, Func Offset: 0x4e4
	// Line 383, Address: 0x1d6bbc, Func Offset: 0x4fc
	// Line 385, Address: 0x1d6bc4, Func Offset: 0x504
	// Line 384, Address: 0x1d6bc8, Func Offset: 0x508
	// Line 386, Address: 0x1d6bcc, Func Offset: 0x50c
	// Line 385, Address: 0x1d6bd0, Func Offset: 0x510
	// Line 442, Address: 0x1d6bd8, Func Offset: 0x518
	// Line 484, Address: 0x1d6bdc, Func Offset: 0x51c
	// Line 442, Address: 0x1d6be0, Func Offset: 0x520
	// Line 484, Address: 0x1d6be4, Func Offset: 0x524
	// Line 442, Address: 0x1d6be8, Func Offset: 0x528
	// Line 404, Address: 0x1d6bec, Func Offset: 0x52c
	// Line 413, Address: 0x1d6bf4, Func Offset: 0x534
	// Line 404, Address: 0x1d6bf8, Func Offset: 0x538
	// Line 415, Address: 0x1d6bfc, Func Offset: 0x53c
	// Line 404, Address: 0x1d6c00, Func Offset: 0x540
	// Line 448, Address: 0x1d6c0c, Func Offset: 0x54c
	// Line 404, Address: 0x1d6c10, Func Offset: 0x550
	// Line 417, Address: 0x1d6c14, Func Offset: 0x554
	// Line 404, Address: 0x1d6c18, Func Offset: 0x558
	// Line 428, Address: 0x1d6c1c, Func Offset: 0x55c
	// Line 404, Address: 0x1d6c20, Func Offset: 0x560
	// Line 405, Address: 0x1d6c2c, Func Offset: 0x56c
	// Line 484, Address: 0x1d6c38, Func Offset: 0x578
	// Line 413, Address: 0x1d6c3c, Func Offset: 0x57c
	// Line 414, Address: 0x1d6c44, Func Offset: 0x584
	// Line 442, Address: 0x1d6c48, Func Offset: 0x588
	// Line 415, Address: 0x1d6c4c, Func Offset: 0x58c
	// Line 442, Address: 0x1d6c50, Func Offset: 0x590
	// Line 448, Address: 0x1d6c54, Func Offset: 0x594
	// Line 457, Address: 0x1d6c5c, Func Offset: 0x59c
	// Line 448, Address: 0x1d6c64, Func Offset: 0x5a4
	// Line 415, Address: 0x1d6c68, Func Offset: 0x5a8
	// Line 448, Address: 0x1d6c6c, Func Offset: 0x5ac
	// Line 416, Address: 0x1d6c70, Func Offset: 0x5b0
	// Line 417, Address: 0x1d6c74, Func Offset: 0x5b4
	// Line 430, Address: 0x1d6c78, Func Offset: 0x5b8
	// Line 457, Address: 0x1d6c7c, Func Offset: 0x5bc
	// Line 459, Address: 0x1d6c80, Func Offset: 0x5c0
	// Line 461, Address: 0x1d6c84, Func Offset: 0x5c4
	// Line 459, Address: 0x1d6c88, Func Offset: 0x5c8
	// Line 461, Address: 0x1d6c8c, Func Offset: 0x5cc
	// Line 463, Address: 0x1d6c90, Func Offset: 0x5d0
	// Line 465, Address: 0x1d6c94, Func Offset: 0x5d4
	// Line 417, Address: 0x1d6c98, Func Offset: 0x5d8
	// Line 418, Address: 0x1d6c9c, Func Offset: 0x5dc
	// Line 463, Address: 0x1d6ca0, Func Offset: 0x5e0
	// Line 427, Address: 0x1d6ca4, Func Offset: 0x5e4
	// Line 467, Address: 0x1d6ca8, Func Offset: 0x5e8
	// Line 428, Address: 0x1d6cac, Func Offset: 0x5ec
	// Line 484, Address: 0x1d6cb0, Func Offset: 0x5f0
	// Line 467, Address: 0x1d6cb4, Func Offset: 0x5f4
	// Line 484, Address: 0x1d6cb8, Func Offset: 0x5f8
	// Line 428, Address: 0x1d6cc8, Func Offset: 0x608
	// Line 429, Address: 0x1d6ccc, Func Offset: 0x60c
	// Line 467, Address: 0x1d6cd0, Func Offset: 0x610
	// Line 431, Address: 0x1d6cd4, Func Offset: 0x614
	// Line 470, Address: 0x1d6cd8, Func Offset: 0x618
	// Line 434, Address: 0x1d6cdc, Func Offset: 0x61c
	// Line 435, Address: 0x1d6ce0, Func Offset: 0x620
	// Line 436, Address: 0x1d6ce4, Func Offset: 0x624
	// Line 437, Address: 0x1d6ce8, Func Offset: 0x628
	// Line 439, Address: 0x1d6cec, Func Offset: 0x62c
	// Line 443, Address: 0x1d6cf4, Func Offset: 0x634
	// Line 449, Address: 0x1d6cf8, Func Offset: 0x638
	// Line 458, Address: 0x1d6cfc, Func Offset: 0x63c
	// Line 460, Address: 0x1d6d00, Func Offset: 0x640
	// Line 462, Address: 0x1d6d04, Func Offset: 0x644
	// Line 464, Address: 0x1d6d08, Func Offset: 0x648
	// Line 465, Address: 0x1d6d0c, Func Offset: 0x64c
	// Line 466, Address: 0x1d6d14, Func Offset: 0x654
	// Line 468, Address: 0x1d6d18, Func Offset: 0x658
	// Line 470, Address: 0x1d6d1c, Func Offset: 0x65c
	// Line 485, Address: 0x1d6d20, Func Offset: 0x660
	// Line 487, Address: 0x1d6d28, Func Offset: 0x668
	// Line 485, Address: 0x1d6d2c, Func Offset: 0x66c
	// Line 486, Address: 0x1d6d34, Func Offset: 0x674
	// Line 487, Address: 0x1d6d40, Func Offset: 0x680
	// Line 488, Address: 0x1d6d4c, Func Offset: 0x68c
	// Line 489, Address: 0x1d6d54, Func Offset: 0x694
	// Line 490, Address: 0x1d6d5c, Func Offset: 0x69c
	// Line 493, Address: 0x1d6d6c, Func Offset: 0x6ac
	// Line 490, Address: 0x1d6d70, Func Offset: 0x6b0
	// Line 493, Address: 0x1d6d74, Func Offset: 0x6b4
	// Line 494, Address: 0x1d6d7c, Func Offset: 0x6bc
	// Line 495, Address: 0x1d6d84, Func Offset: 0x6c4
	// Line 498, Address: 0x1d6d8c, Func Offset: 0x6cc
	// Line 507, Address: 0x1d6d90, Func Offset: 0x6d0
	// Line 498, Address: 0x1d6d94, Func Offset: 0x6d4
	// Line 497, Address: 0x1d6d98, Func Offset: 0x6d8
	// Line 499, Address: 0x1d6db8, Func Offset: 0x6f8
	// Line 497, Address: 0x1d6dbc, Func Offset: 0x6fc
	// Line 499, Address: 0x1d6dc0, Func Offset: 0x700
	// Line 500, Address: 0x1d6dc4, Func Offset: 0x704
	// Line 497, Address: 0x1d6dcc, Func Offset: 0x70c
	// Line 498, Address: 0x1d6dd4, Func Offset: 0x714
	// Line 500, Address: 0x1d6dd8, Func Offset: 0x718
	// Line 507, Address: 0x1d6ddc, Func Offset: 0x71c
	// Line 499, Address: 0x1d6de4, Func Offset: 0x724
	// Line 500, Address: 0x1d6de8, Func Offset: 0x728
	// Line 507, Address: 0x1d6dec, Func Offset: 0x72c
	// Line 501, Address: 0x1d6dfc, Func Offset: 0x73c
	// Line 507, Address: 0x1d6e00, Func Offset: 0x740
	// Line 510, Address: 0x1d6e48, Func Offset: 0x788
	// Line 513, Address: 0x1d6e88, Func Offset: 0x7c8
	// Line 515, Address: 0x1d6e8c, Func Offset: 0x7cc
	// Line 514, Address: 0x1d6eac, Func Offset: 0x7ec
	// Line 515, Address: 0x1d6eb0, Func Offset: 0x7f0
	// Line 516, Address: 0x1d6f44, Func Offset: 0x884
	// Line 515, Address: 0x1d6f48, Func Offset: 0x888
	// Line 520, Address: 0x1d6f54, Func Offset: 0x894
	// Line 523, Address: 0x1d6fdc, Func Offset: 0x91c
	// Line 527, Address: 0x1d6ff4, Func Offset: 0x934
	// Line 530, Address: 0x1d7048, Func Offset: 0x988
	// Line 533, Address: 0x1d70f0, Func Offset: 0xa30
	// Line 537, Address: 0x1d714c, Func Offset: 0xa8c
	// Line 544, Address: 0x1d7154, Func Offset: 0xa94
	// Line 205, Address: 0x1d7160, Func Offset: 0xaa0
	// Line 544, Address: 0x1d7164, Func Offset: 0xaa4
	// Line 206, Address: 0x1d7178, Func Offset: 0xab8
	// Line 544, Address: 0x1d717c, Func Offset: 0xabc
	// Line 206, Address: 0x1d7184, Func Offset: 0xac4
	// Line 544, Address: 0x1d7188, Func Offset: 0xac8
	// Line 210, Address: 0x1d71ac, Func Offset: 0xaec
	// Line 544, Address: 0x1d71b0, Func Offset: 0xaf0
	// Line 211, Address: 0x1d722c, Func Offset: 0xb6c
	// Line 544, Address: 0x1d7234, Func Offset: 0xb74
	// Line 211, Address: 0x1d7244, Func Offset: 0xb84
	// Line 544, Address: 0x1d7248, Func Offset: 0xb88
	// Line 211, Address: 0x1d7258, Func Offset: 0xb98
	// Line 212, Address: 0x1d7260, Func Offset: 0xba0
	// Line 213, Address: 0x1d726c, Func Offset: 0xbac
	// Line 544, Address: 0x1d7278, Func Offset: 0xbb8
	// Line 215, Address: 0x1d7298, Func Offset: 0xbd8
	// Line 544, Address: 0x1d72a0, Func Offset: 0xbe0
	// Line 221, Address: 0x1d72a4, Func Offset: 0xbe4
	// Line 544, Address: 0x1d72a8, Func Offset: 0xbe8
	// Line 222, Address: 0x1d72bc, Func Offset: 0xbfc
	// Line 544, Address: 0x1d72c0, Func Offset: 0xc00
	// Line 222, Address: 0x1d72c8, Func Offset: 0xc08
	// Line 544, Address: 0x1d72cc, Func Offset: 0xc0c
	// Line 231, Address: 0x1d72e8, Func Offset: 0xc28
	// Line 544, Address: 0x1d72ec, Func Offset: 0xc2c
	// Line 233, Address: 0x1d7308, Func Offset: 0xc48
	// Line 544, Address: 0x1d7310, Func Offset: 0xc50
	// Line 233, Address: 0x1d7320, Func Offset: 0xc60
	// Line 544, Address: 0x1d7324, Func Offset: 0xc64
	// Line 233, Address: 0x1d7334, Func Offset: 0xc74
	// Line 234, Address: 0x1d733c, Func Offset: 0xc7c
	// Line 235, Address: 0x1d7348, Func Offset: 0xc88
	// Line 544, Address: 0x1d7354, Func Offset: 0xc94
	// Line 236, Address: 0x1d7374, Func Offset: 0xcb4
	// Line 544, Address: 0x1d737c, Func Offset: 0xcbc
	// Line 239, Address: 0x1d73a0, Func Offset: 0xce0
	// Line 544, Address: 0x1d73a4, Func Offset: 0xce4
	// Line 240, Address: 0x1d7420, Func Offset: 0xd60
	// Line 544, Address: 0x1d7428, Func Offset: 0xd68
	// Line 240, Address: 0x1d7438, Func Offset: 0xd78
	// Line 544, Address: 0x1d743c, Func Offset: 0xd7c
	// Line 240, Address: 0x1d744c, Func Offset: 0xd8c
	// Line 241, Address: 0x1d7454, Func Offset: 0xd94
	// Line 242, Address: 0x1d7460, Func Offset: 0xda0
	// Line 544, Address: 0x1d746c, Func Offset: 0xdac
	// Line 245, Address: 0x1d748c, Func Offset: 0xdcc
	// Line 544, Address: 0x1d7494, Func Offset: 0xdd4
	// Line 310, Address: 0x1d74b0, Func Offset: 0xdf0
	// Line 544, Address: 0x1d74b4, Func Offset: 0xdf4
	// Line 324, Address: 0x1d74c8, Func Offset: 0xe08
	// Line 544, Address: 0x1d74d4, Func Offset: 0xe14
	// Line 324, Address: 0x1d74d8, Func Offset: 0xe18
	// Line 544, Address: 0x1d74dc, Func Offset: 0xe1c
	// Line 324, Address: 0x1d74e0, Func Offset: 0xe20
	// Line 544, Address: 0x1d74ec, Func Offset: 0xe2c
	// Line 515, Address: 0x1d7518, Func Offset: 0xe58
	// Line 520, Address: 0x1d7524, Func Offset: 0xe64
	// Line 544, Address: 0x1d7528, Func Offset: 0xe68
	// Line 520, Address: 0x1d752c, Func Offset: 0xe6c
	// Line 544, Address: 0x1d7530, Func Offset: 0xe70
	// Line 520, Address: 0x1d7534, Func Offset: 0xe74
	// Line 544, Address: 0x1d753c, Func Offset: 0xe7c
	// Line 520, Address: 0x1d7548, Func Offset: 0xe88
	// Line 544, Address: 0x1d7558, Func Offset: 0xe98
	// Line 520, Address: 0x1d7564, Func Offset: 0xea4
	// Line 544, Address: 0x1d7568, Func Offset: 0xea8
	// Line 538, Address: 0x1d7588, Func Offset: 0xec8
	// Line 545, Address: 0x1d7594, Func Offset: 0xed4
	// Func End, Address: 0x1d75c4, Func Offset: 0xf04
}

