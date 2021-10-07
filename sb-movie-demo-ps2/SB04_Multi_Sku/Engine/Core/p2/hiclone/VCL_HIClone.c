typedef enum RpLightType;
typedef struct RxClusterDefinition;
typedef struct RpInterpolator;
typedef struct RwFrustumPlane;
typedef enum RxNodeDefEditable;
typedef enum RpMeshHeaderFlags;
typedef struct RpLight;
typedef struct RpSkin;
typedef struct rwPDS_HICloneFlatArray;
typedef struct RxPS2AllPipeData;
typedef struct RpAtomic;
typedef struct rxHeapBlockHeader;
typedef struct RwMatrixTag;
typedef struct RxIoSpec;
typedef struct rwPDS_HICloneDownloadInfo;
typedef struct RwRGBA;
typedef struct RwBBox;
typedef struct SkinBoneData;
typedef struct RwRaster;
typedef struct rwPS2AllClusterInstanceInfo;
typedef struct RxPacket;
typedef struct RwPlane;
typedef struct RxOutputSpec;
typedef struct RwSurfaceProperties;
typedef struct RxPipeline;
typedef struct RpMesh;
typedef struct RwSphere;
typedef struct RxCluster;
typedef struct rxHeapSuperBlockDescriptor;
typedef enum RxClusterValid;
typedef struct RwCamera;
typedef struct rwPDS_HICloneArray;
typedef struct SkinVertexMaps;
typedef struct RwV2d;
typedef struct RxPipelineCluster;
typedef enum RxClusterValidityReq;
typedef struct RpGeometry;
typedef struct RxClusterRef;
typedef struct RwMatrixWeights;
typedef struct RwRGBAReal;
typedef struct RpMaterialList;
typedef struct RwV3d;
typedef struct RpMorphTarget;
typedef struct RwMeshCache;
typedef enum RxClusterForcePresent;
typedef struct rxNodePS2AllPvtData;
typedef struct SkinPlatformData;
typedef struct RxNodeDefinition;
typedef struct RpMaterial;
typedef struct RxNodeMethods;
typedef enum RwCameraProjection;
typedef struct RwResEntry;
typedef struct rxNodePS2AllMatPvtData;
typedef struct RxPipelineNode;
typedef struct RwTexture;
typedef struct RwObjectHasFrame;
typedef enum rxEmbeddedPacketState;
typedef enum RxInstanceFlags;
typedef struct rwPS2AllResEntryFormat;
typedef struct RwLLLink;
typedef struct RpMeshHeader;
typedef struct rwPS2AllFieldRec;
typedef struct RxPipelineNodeTopSortData;
typedef struct RpClump;
typedef enum RwFrustumTestResult;
typedef struct RxPipelineNodeParam;
typedef struct RwTexDictionary;
typedef struct rxReq;
typedef struct RwTexCoords;
typedef struct RxPipelineRequiresCluster;
typedef struct RxHeap;
typedef struct RwLinkList;
typedef struct RpTriangle;
typedef struct rxHeapFreeBlock;
typedef struct RwObject;

typedef RpAtomic*(*type_8)(RpAtomic*);
typedef int32(*type_11)(RxPS2AllPipeData*);
typedef int32(*type_12)(RxPS2AllPipeData*, RwMatrixTag**);
typedef int32(*type_13)(RxPS2AllPipeData*);
typedef int32(*type_14)(RxPS2AllPipeData*, void**, uint32);
typedef RwResEntry*(*type_15)(RxPS2AllPipeData*, RwResEntry**, uint32, void(*)(RwResEntry*));
typedef int32(*type_16)(RxPS2AllPipeData*);
typedef RwCamera*(*type_17)(RwCamera*);
typedef RwCamera*(*type_19)(RwCamera*);
typedef RpAtomic*(*type_21)(RpAtomic*);
typedef uint32(*type_23)(RxPipelineNode*, uint32, uint32, void*);
typedef void(*type_24)(RwResEntry*);
typedef int32(*type_25)(RxPipelineNode*, RxPipeline*);
typedef RwObjectHasFrame*(*type_26)(RwObjectHasFrame*);
typedef void(*type_27)(RxPipelineNode*);
typedef int32(*type_31)(RxPipelineNode*);
typedef void(*type_32)(RxNodeDefinition*);
typedef int32(*type_35)(RxNodeDefinition*);
typedef int32(*type_36)(RxPipelineNode*, RxPipelineNodeParam*);
typedef RpClump*(*type_38)(RpClump*, void*);

typedef RwV3d type_0[8];
typedef RwFrustumPlane type_1[6];
typedef RpLight* type_2[2];
typedef float32 type_3[4];
typedef uint16 type_4[3];
typedef uint32 type_5[12];
typedef rwPS2AllClusterInstanceInfo type_6[12];
typedef uint32 type_7[4];
typedef uint32 type_9[4096];
typedef RxCluster type_10[1];
typedef uint32 type_18[4];
typedef RwResEntry* type_20[1];
typedef float32 type_22[4];
typedef int8 type_28[32];
typedef float32 type_29[3];
typedef int8 type_30[32];
typedef rwPS2AllFieldRec type_33[12];
typedef float32 type_34[3];
typedef uint8 type_37[1];
typedef RwTexCoords* type_39[8];
typedef uint8 type_40[2];

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

struct RpSkin
{
	SkinBoneData boneData;
	SkinVertexMaps vertexMaps;
	SkinPlatformData platformData;
};

struct rwPDS_HICloneFlatArray
{
	float32 mat1X;
	float32 mat1Y;
	int32 cloneFlag;
	float32 mat1W;
	float32 mat2X;
	float32 mat2Y;
	int32 UNUSED1;
	float32 mat2W;
	float32 mat3X;
	float32 mat3Y;
	int32 UNUSED2;
	float32 mat3W;
	float32 mat4X;
	float32 mat4Y;
	float32 mat4Z;
	float32 mat4W;
	float32 colScale[4];
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

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
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

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

struct rwPDS_HICloneDownloadInfo
{
	uint32 weightsControls;
	uint32 cloneCount;
	uint32 cloneStride;
	uint32 cloneArrayAddress;
};

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct SkinBoneData
{
	uint32 numBones;
	uint32 numUsedBones;
	uint8* usedBoneList;
	RwMatrixTag* invBoneToSkinMat;
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

struct rwPDS_HICloneArray
{
	float32 mat1X;
	float32 mat1Y;
	int32 cloneFlag;
	float32 mat1W;
	float32 mat2X;
	float32 mat2Y;
	int32 UNUSED1;
	float32 mat2W;
	float32 mat3X;
	float32 mat3Y;
	int32 UNUSED2;
	float32 mat3W;
	float32 mat4X;
	float32 mat4Y;
	float32 mat4Z;
	float32 mat4W;
	float32 colScale[4];
	RwV3d lmat1;
	float32 lmatposX;
	RwV3d lmat2;
	float32 lmatposY;
	RwV3d lmat3;
	float32 lmatposZ;
	float32 bonusLt0_color[3];
	int32 UNUSED3;
	RwV3d bonusLt0_dir;
	float32 bonusLt0_rad;
	float32 bonusLt1_color[3];
	int32 UNUSED4;
	RwV3d bonusLt1_dir;
	float32 bonusLt1_rad;
};

struct SkinVertexMaps
{
	uint32 maxWeights;
	uint32* matrixIndices;
	RwMatrixWeights* matrixWeights;
};

struct RwV2d
{
	float32 x;
	float32 y;
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

struct RwMatrixWeights
{
	float32 w0;
	float32 w1;
	float32 w2;
	float32 w3;
};

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
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

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct rxNodePS2AllPvtData
{
};

struct SkinPlatformData
{
	uint32 numVerticesWithWeight[4];
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

enum RwFrustumTestResult
{
	rwSPHEREOUTSIDE,
	rwSPHEREBOUNDARY,
	rwSPHEREINSIDE,
	rwFRUSTUMTESTRESULTFORCEENUMSIZEINT = 0x7fffffff
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

struct RwLinkList
{
	RwLLLink link;
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

RpAtomic*(*sAtmDefaultRenderCB)(RpAtomic*);
RxPipeline* sCloneAtmPipe_Generic;
int32(*CloneGenericObjectSetupCallBack)(RxPS2AllPipeData*, RwMatrixTag**);
int32 rwPip2AtomicOffset;
uint8 skyTransType;
int32 rwPip2GeometryOffset;
RpAtomic*(*SingletonCloneRenderCB)(RpAtomic*);
rwPDS_HICloneDownloadInfo rwPDS_VCL_HICloneSkinDownload;
rwPDS_HICloneDownloadInfo rwPDS_VCL_HICloneGenericDownload;
int32 _rxPipelineGlobalsOffset;
uint32 ourGlobals[4096];
int32 skyCameraExt;
<unknown fundamental type (0xa510)>* _rwDMAPktPtr;
rwPDS_HICloneDownloadInfo rwPDS_VCL_HICloneFlatDownload;

void rwPSD_HICloneInitOnce();
int32 CloneGenericObjectSetupCallBack(RxPS2AllPipeData* ps2AllPipeData, RwMatrixTag** transform);
void rwPDS_HICloneEnable(RpAtomic* atomic, uint8 prelit);
RpAtomic* SingletonCloneRenderCB(RpAtomic* atomic);
RwFrustumTestResult rwPDS_HICloneAtomicInFrustum(RpAtomic* atomic, RwMatrixTag* ltm);
RwFrustumTestResult rwPDS_HICloneBoxInFrustum(RwBBox* box);
RwFrustumTestResult rwPDS_HICloneInFrustum(RwCamera* cam, RwSphere* sphere);
void rwPDS_HICloneRender(RpAtomic* atomic, rwPDS_HICloneArray* clone, uint32 cloneCount);
void rwPDS_HICloneSetup(rwPDS_HICloneArray* clone, RpAtomic* atomic, RwMatrixTag* ltm, int32 inFrustum, int32 trueClip, RwRGBA* matcol, RpLight* bonus0, RpLight* bonus1);

// rwPSD_HICloneInitOnce__Fv
// Start address: 0x1cfae0
void rwPSD_HICloneInitOnce()
{
	// Line 1459, Address: 0x1cfae0, Func Offset: 0
	// Line 1460, Address: 0x1cfaec, Func Offset: 0xc
	// Line 1463, Address: 0x1cfaf8, Func Offset: 0x18
	// Line 1461, Address: 0x1cfb1c, Func Offset: 0x3c
	// Line 1463, Address: 0x1cfb28, Func Offset: 0x48
	// Line 1461, Address: 0x1cfb3c, Func Offset: 0x5c
	// Line 1463, Address: 0x1cfb40, Func Offset: 0x60
	// Line 1461, Address: 0x1cfb44, Func Offset: 0x64
	// Line 1463, Address: 0x1cfb48, Func Offset: 0x68
	// Line 1461, Address: 0x1cfb50, Func Offset: 0x70
	// Line 1463, Address: 0x1cfb54, Func Offset: 0x74
	// Line 1461, Address: 0x1cfb58, Func Offset: 0x78
	// Line 1463, Address: 0x1cfb60, Func Offset: 0x80
	// Line 1461, Address: 0x1cfb68, Func Offset: 0x88
	// Line 1463, Address: 0x1cfb70, Func Offset: 0x90
	// Func End, Address: 0x1cfb8c, Func Offset: 0xac
}

// CloneGenericObjectSetupCallBack__FP16RxPS2AllPipeDataPP11RwMatrixTag
// Start address: 0x1cfb90
int32 CloneGenericObjectSetupCallBack(RxPS2AllPipeData* ps2AllPipeData, RwMatrixTag** transform)
{
	RpAtomic* atomic;
	RpGeometry* _gmty;
	// Line 1385, Address: 0x1cfb90, Func Offset: 0
	// Line 1386, Address: 0x1cfba8, Func Offset: 0x18
	// Line 1391, Address: 0x1cfbac, Func Offset: 0x1c
	// Line 1402, Address: 0x1cfc1c, Func Offset: 0x8c
	// Line 1403, Address: 0x1cfc20, Func Offset: 0x90
	// Line 1391, Address: 0x1cfc24, Func Offset: 0x94
	// Line 1413, Address: 0x1cfc28, Func Offset: 0x98
	// Line 1402, Address: 0x1cfc2c, Func Offset: 0x9c
	// Line 1403, Address: 0x1cfc54, Func Offset: 0xc4
	// Line 1410, Address: 0x1cfc60, Func Offset: 0xd0
	// Line 1413, Address: 0x1cfc64, Func Offset: 0xd4
	// Line 1414, Address: 0x1cfc68, Func Offset: 0xd8
	// Line 1420, Address: 0x1cfc70, Func Offset: 0xe0
	// Line 1433, Address: 0x1cfc78, Func Offset: 0xe8
	// Line 1391, Address: 0x1cfca8, Func Offset: 0x118
	// Line 1433, Address: 0x1cfcac, Func Offset: 0x11c
	// Line 1391, Address: 0x1cfcb4, Func Offset: 0x124
	// Line 1433, Address: 0x1cfcbc, Func Offset: 0x12c
	// Line 1391, Address: 0x1cfcc8, Func Offset: 0x138
	// Line 1433, Address: 0x1cfccc, Func Offset: 0x13c
	// Line 1391, Address: 0x1cfcd0, Func Offset: 0x140
	// Line 1434, Address: 0x1cfcd8, Func Offset: 0x148
	// Func End, Address: 0x1cfcf0, Func Offset: 0x160
}

// rwPDS_HICloneEnable__FP8RpAtomicb
// Start address: 0x1cfcf0
void rwPDS_HICloneEnable(RpAtomic* atomic, uint8 prelit)
{
	int32 i;
	RpMaterialList* matList;
	RxPipeline* matpipe;
	RxPipeline* skinGrpAtm;
	RxPipeline* skinAtm;
	// Line 1303, Address: 0x1cfcf0, Func Offset: 0
	// Line 1308, Address: 0x1cfcf4, Func Offset: 0x4
	// Line 1303, Address: 0x1cfcf8, Func Offset: 0x8
	// Line 1308, Address: 0x1cfcfc, Func Offset: 0xc
	// Line 1303, Address: 0x1cfd00, Func Offset: 0x10
	// Line 1308, Address: 0x1cfd14, Func Offset: 0x24
	// Line 1314, Address: 0x1cfd1c, Func Offset: 0x2c
	// Line 1320, Address: 0x1cfd28, Func Offset: 0x38
	// Line 1323, Address: 0x1cfd34, Func Offset: 0x44
	// Line 1329, Address: 0x1cfd44, Func Offset: 0x54
	// Line 1336, Address: 0x1cfdb8, Func Offset: 0xc8
	// Line 1337, Address: 0x1cfdbc, Func Offset: 0xcc
	// Line 1340, Address: 0x1cfde4, Func Offset: 0xf4
	// Line 1341, Address: 0x1cfdf8, Func Offset: 0x108
	// Line 1342, Address: 0x1cfdfc, Func Offset: 0x10c
	// Line 1341, Address: 0x1cfe00, Func Offset: 0x110
	// Line 1342, Address: 0x1cfe0c, Func Offset: 0x11c
	// Line 1343, Address: 0x1cfe1c, Func Offset: 0x12c
	// Line 1344, Address: 0x1cfe20, Func Offset: 0x130
	// Line 1324, Address: 0x1cfe4c, Func Offset: 0x15c
	// Line 1344, Address: 0x1cfe58, Func Offset: 0x168
	// Line 1324, Address: 0x1cfe6c, Func Offset: 0x17c
	// Line 1344, Address: 0x1cfe70, Func Offset: 0x180
	// Line 1324, Address: 0x1cfe74, Func Offset: 0x184
	// Line 1344, Address: 0x1cfe78, Func Offset: 0x188
	// Line 1324, Address: 0x1cfe80, Func Offset: 0x190
	// Line 1344, Address: 0x1cfe84, Func Offset: 0x194
	// Line 1324, Address: 0x1cfe88, Func Offset: 0x198
	// Line 1344, Address: 0x1cfe90, Func Offset: 0x1a0
	// Line 1324, Address: 0x1cfe98, Func Offset: 0x1a8
	// Line 1344, Address: 0x1cfea0, Func Offset: 0x1b0
	// Line 1329, Address: 0x1cfeb4, Func Offset: 0x1c4
	// Line 1344, Address: 0x1cfec0, Func Offset: 0x1d0
	// Line 1329, Address: 0x1cfecc, Func Offset: 0x1dc
	// Line 1344, Address: 0x1cfed0, Func Offset: 0x1e0
	// Line 1329, Address: 0x1cfee4, Func Offset: 0x1f4
	// Line 1330, Address: 0x1cfeec, Func Offset: 0x1fc
	// Line 1344, Address: 0x1cfef0, Func Offset: 0x200
	// Line 1332, Address: 0x1cff10, Func Offset: 0x220
	// Line 1344, Address: 0x1cff14, Func Offset: 0x224
	// Line 1334, Address: 0x1cff40, Func Offset: 0x250
	// Line 1344, Address: 0x1cff48, Func Offset: 0x258
	// Func End, Address: 0x1cff60, Func Offset: 0x270
}

// SingletonCloneRenderCB__FP8RpAtomic
// Start address: 0x1cff60
RpAtomic* SingletonCloneRenderCB(RpAtomic* atomic)
{
	rwPDS_HICloneArray tmpclone;
	// Line 1285, Address: 0x1cff60, Func Offset: 0
	// Line 1287, Address: 0x1cff6c, Func Offset: 0xc
	// Line 1296, Address: 0x1cffbc, Func Offset: 0x5c
	// Line 1297, Address: 0x1cffcc, Func Offset: 0x6c
	// Line 1298, Address: 0x1cffd0, Func Offset: 0x70
	// Func End, Address: 0x1cffe0, Func Offset: 0x80
}

// rwPDS_HICloneAtomicInFrustum__FP8RpAtomicP11RwMatrixTag
// Start address: 0x1cffe0
RwFrustumTestResult rwPDS_HICloneAtomicInFrustum(RpAtomic* atomic, RwMatrixTag* ltm)
{
	RwCamera* cam;
	float32 xScale2;
	float32 yScale2;
	float32 zScale2;
	float32 atomicScale;
	RwV3d* up;
	RwV3d* at;
	RwSphere worldsph;
	// Line 1255, Address: 0x1cffe0, Func Offset: 0
	// Line 1256, Address: 0x1cffe4, Func Offset: 0x4
	// Line 1255, Address: 0x1cffe8, Func Offset: 0x8
	// Line 1262, Address: 0x1cffec, Func Offset: 0xc
	// Line 1255, Address: 0x1cfff0, Func Offset: 0x10
	// Line 1256, Address: 0x1d0004, Func Offset: 0x24
	// Line 1262, Address: 0x1d0008, Func Offset: 0x28
	// Line 1266, Address: 0x1d0018, Func Offset: 0x38
	// Line 1267, Address: 0x1d0024, Func Offset: 0x44
	// Line 1268, Address: 0x1d003c, Func Offset: 0x5c
	// Line 1269, Address: 0x1d0054, Func Offset: 0x74
	// Line 1271, Address: 0x1d0060, Func Offset: 0x80
	// Line 1277, Address: 0x1d00ac, Func Offset: 0xcc
	// Line 1275, Address: 0x1d00b0, Func Offset: 0xd0
	// Line 1273, Address: 0x1d00b4, Func Offset: 0xd4
	// Line 1275, Address: 0x1d00b8, Func Offset: 0xd8
	// Line 1273, Address: 0x1d00c4, Func Offset: 0xe4
	// Line 1275, Address: 0x1d00cc, Func Offset: 0xec
	// Line 1277, Address: 0x1d00dc, Func Offset: 0xfc
	// Line 1278, Address: 0x1d00e4, Func Offset: 0x104
	// Func End, Address: 0x1d00fc, Func Offset: 0x11c
}

// rwPDS_HICloneBoxInFrustum__FPC6RwBBox
// Start address: 0x1d0100
RwFrustumTestResult rwPDS_HICloneBoxInFrustum(RwBBox* box)
{
	int32 i;
	RwCamera* cam;
	RwFrustumPlane* plane;
	RwFrustumPlane* widePlane;
	RwFrustumTestResult result;
	float32 centerX;
	float32 centerY;
	float32 centerZ;
	float32 sizeX;
	float32 sizeY;
	float32 sizeZ;
	float32 centerDot;
	float32 nearDot;
	float32 centerDot;
	float32 nearDot;
	// Line 1175, Address: 0x1d0100, Func Offset: 0
	// Line 1181, Address: 0x1d0104, Func Offset: 0x4
	// Line 1175, Address: 0x1d0108, Func Offset: 0x8
	// Line 1170, Address: 0x1d010c, Func Offset: 0xc
	// Line 1181, Address: 0x1d0114, Func Offset: 0x14
	// Line 1175, Address: 0x1d0118, Func Offset: 0x18
	// Line 1181, Address: 0x1d011c, Func Offset: 0x1c
	// Line 1193, Address: 0x1d0124, Func Offset: 0x24
	// Line 1182, Address: 0x1d0128, Func Offset: 0x28
	// Line 1181, Address: 0x1d012c, Func Offset: 0x2c
	// Line 1174, Address: 0x1d0130, Func Offset: 0x30
	// Line 1190, Address: 0x1d0134, Func Offset: 0x34
	// Line 1175, Address: 0x1d0138, Func Offset: 0x38
	// Line 1184, Address: 0x1d0140, Func Offset: 0x40
	// Line 1181, Address: 0x1d0144, Func Offset: 0x44
	// Line 1184, Address: 0x1d0148, Func Offset: 0x48
	// Line 1182, Address: 0x1d014c, Func Offset: 0x4c
	// Line 1185, Address: 0x1d0150, Func Offset: 0x50
	// Line 1182, Address: 0x1d0154, Func Offset: 0x54
	// Line 1185, Address: 0x1d0158, Func Offset: 0x58
	// Line 1182, Address: 0x1d015c, Func Offset: 0x5c
	// Line 1183, Address: 0x1d0160, Func Offset: 0x60
	// Line 1186, Address: 0x1d0164, Func Offset: 0x64
	// Line 1183, Address: 0x1d0168, Func Offset: 0x68
	// Line 1186, Address: 0x1d016c, Func Offset: 0x6c
	// Line 1199, Address: 0x1d0170, Func Offset: 0x70
	// Line 1211, Address: 0x1d0174, Func Offset: 0x74
	// Line 1193, Address: 0x1d0178, Func Offset: 0x78
	// Line 1198, Address: 0x1d0184, Func Offset: 0x84
	// Line 1195, Address: 0x1d018c, Func Offset: 0x8c
	// Line 1199, Address: 0x1d0198, Func Offset: 0x98
	// Line 1203, Address: 0x1d01f0, Func Offset: 0xf0
	// Line 1208, Address: 0x1d01fc, Func Offset: 0xfc
	// Line 1211, Address: 0x1d020c, Func Offset: 0x10c
	// Line 1214, Address: 0x1d0210, Func Offset: 0x110
	// Line 1223, Address: 0x1d0220, Func Offset: 0x120
	// Line 1217, Address: 0x1d0224, Func Offset: 0x124
	// Line 1242, Address: 0x1d0228, Func Offset: 0x128
	// Line 1217, Address: 0x1d022c, Func Offset: 0x12c
	// Line 1222, Address: 0x1d0238, Func Offset: 0x138
	// Line 1219, Address: 0x1d0240, Func Offset: 0x140
	// Line 1223, Address: 0x1d024c, Func Offset: 0x14c
	// Line 1226, Address: 0x1d02a4, Func Offset: 0x1a4
	// Line 1235, Address: 0x1d02bc, Func Offset: 0x1bc
	// Line 1232, Address: 0x1d02c4, Func Offset: 0x1c4
	// Line 1236, Address: 0x1d02d0, Func Offset: 0x1d0
	// Line 1239, Address: 0x1d0328, Func Offset: 0x228
	// Line 1242, Address: 0x1d0338, Func Offset: 0x238
	// Line 1246, Address: 0x1d033c, Func Offset: 0x23c
	// Line 1244, Address: 0x1d0340, Func Offset: 0x240
	// Line 1246, Address: 0x1d0344, Func Offset: 0x244
	// Line 1249, Address: 0x1d0350, Func Offset: 0x250
	// Line 1206, Address: 0x1d0358, Func Offset: 0x258
	// Line 1229, Address: 0x1d0360, Func Offset: 0x260
	// Line 1250, Address: 0x1d0364, Func Offset: 0x264
	// Func End, Address: 0x1d036c, Func Offset: 0x26c
}

// rwPDS_HICloneInFrustum__FP8RwCameraPC8RwSphere
// Start address: 0x1d0370
RwFrustumTestResult rwPDS_HICloneInFrustum(RwCamera* cam, RwSphere* sphere)
{
	int32 i;
	RwFrustumPlane* plane;
	RwFrustumPlane* widePlane;
	RwFrustumTestResult result;
	float32 nDot;
	float32 nDot;
	// Line 1112, Address: 0x1d0370, Func Offset: 0
	// Line 1119, Address: 0x1d0374, Func Offset: 0x4
	// Line 1111, Address: 0x1d037c, Func Offset: 0xc
	// Line 1119, Address: 0x1d0380, Func Offset: 0x10
	// Line 1116, Address: 0x1d0384, Func Offset: 0x14
	// Line 1119, Address: 0x1d0388, Func Offset: 0x18
	// Line 1112, Address: 0x1d0390, Func Offset: 0x20
	// Line 1132, Address: 0x1d0398, Func Offset: 0x28
	// Line 1121, Address: 0x1d03a0, Func Offset: 0x30
	// Line 1123, Address: 0x1d03ac, Func Offset: 0x3c
	// Line 1121, Address: 0x1d03b0, Func Offset: 0x40
	// Line 1123, Address: 0x1d03bc, Func Offset: 0x4c
	// Line 1124, Address: 0x1d03c0, Func Offset: 0x50
	// Line 1127, Address: 0x1d03dc, Func Offset: 0x6c
	// Line 1129, Address: 0x1d03e4, Func Offset: 0x74
	// Line 1132, Address: 0x1d03f0, Func Offset: 0x80
	// Line 1133, Address: 0x1d03f4, Func Offset: 0x84
	// Line 1135, Address: 0x1d03f8, Func Offset: 0x88
	// Line 1138, Address: 0x1d0408, Func Offset: 0x98
	// Line 1154, Address: 0x1d040c, Func Offset: 0x9c
	// Line 1140, Address: 0x1d0410, Func Offset: 0xa0
	// Line 1142, Address: 0x1d041c, Func Offset: 0xac
	// Line 1140, Address: 0x1d0420, Func Offset: 0xb0
	// Line 1142, Address: 0x1d042c, Func Offset: 0xbc
	// Line 1143, Address: 0x1d0430, Func Offset: 0xc0
	// Line 1146, Address: 0x1d044c, Func Offset: 0xdc
	// Line 1148, Address: 0x1d0454, Func Offset: 0xe4
	// Line 1150, Address: 0x1d0460, Func Offset: 0xf0
	// Line 1148, Address: 0x1d0464, Func Offset: 0xf4
	// Line 1150, Address: 0x1d0470, Func Offset: 0x100
	// Line 1151, Address: 0x1d0474, Func Offset: 0x104
	// Line 1154, Address: 0x1d0480, Func Offset: 0x110
	// Line 1155, Address: 0x1d0484, Func Offset: 0x114
	// Line 1158, Address: 0x1d0488, Func Offset: 0x118
	// Line 1156, Address: 0x1d0490, Func Offset: 0x120
	// Line 1158, Address: 0x1d0494, Func Offset: 0x124
	// Line 1162, Address: 0x1d049c, Func Offset: 0x12c
	// Func End, Address: 0x1d04a4, Func Offset: 0x134
}

// rwPDS_HICloneRender__FP8RpAtomicP18rwPDS_HICloneArrayUi
// Start address: 0x1d04b0
void rwPDS_HICloneRender(RpAtomic* atomic, rwPDS_HICloneArray* clone, uint32 cloneCount)
{
	uint32 MAX_CLONES;
	RpSkin* skin;
	ulong32 tmp;
	ulong32 tmp1;
	uint32* numVerticesWithWeight;
	uint32 i;
	uint32 curCount;
	ulong32 tmp;
	ulong32 tmp1;
	<unknown fundamental type (0xa510)>* cloneArr;
	<unknown fundamental type (0xa510)>* _rwDMA_local_rwDMAPktPtr;
	<unknown fundamental type (0xa510)> ltmp2;
	<unknown fundamental type (0xa510)> ltmp3;
	<unknown fundamental type (0xa510)> ltmp4;
	// Line 653, Address: 0x1d04b0, Func Offset: 0
	// Line 655, Address: 0x1d04dc, Func Offset: 0x2c
	// Line 657, Address: 0x1d0544, Func Offset: 0x94
	// Line 662, Address: 0x1d054c, Func Offset: 0x9c
	// Line 704, Address: 0x1d0560, Func Offset: 0xb0
	// Line 705, Address: 0x1d056c, Func Offset: 0xbc
	// Line 707, Address: 0x1d0570, Func Offset: 0xc0
	// Line 708, Address: 0x1d0578, Func Offset: 0xc8
	// Line 709, Address: 0x1d057c, Func Offset: 0xcc
	// Line 715, Address: 0x1d0580, Func Offset: 0xd0
	// Line 714, Address: 0x1d059c, Func Offset: 0xec
	// Line 715, Address: 0x1d05a8, Func Offset: 0xf8
	// Line 714, Address: 0x1d05b4, Func Offset: 0x104
	// Line 715, Address: 0x1d05b8, Func Offset: 0x108
	// Line 714, Address: 0x1d05c0, Func Offset: 0x110
	// Line 715, Address: 0x1d05c4, Func Offset: 0x114
	// Line 714, Address: 0x1d05cc, Func Offset: 0x11c
	// Line 715, Address: 0x1d05d0, Func Offset: 0x120
	// Line 714, Address: 0x1d05d8, Func Offset: 0x128
	// Line 715, Address: 0x1d05dc, Func Offset: 0x12c
	// Line 714, Address: 0x1d05e4, Func Offset: 0x134
	// Line 715, Address: 0x1d05e8, Func Offset: 0x138
	// Line 714, Address: 0x1d05f0, Func Offset: 0x140
	// Line 715, Address: 0x1d05f4, Func Offset: 0x144
	// Line 714, Address: 0x1d05fc, Func Offset: 0x14c
	// Line 715, Address: 0x1d0600, Func Offset: 0x150
	// Line 714, Address: 0x1d0608, Func Offset: 0x158
	// Line 715, Address: 0x1d060c, Func Offset: 0x15c
	// Line 714, Address: 0x1d0638, Func Offset: 0x188
	// Line 715, Address: 0x1d0640, Func Offset: 0x190
	// Line 714, Address: 0x1d064c, Func Offset: 0x19c
	// Line 715, Address: 0x1d0650, Func Offset: 0x1a0
	// Line 727, Address: 0x1d0668, Func Offset: 0x1b8
	// Line 716, Address: 0x1d0670, Func Offset: 0x1c0
	// Line 727, Address: 0x1d0680, Func Offset: 0x1d0
	// Line 728, Address: 0x1d0690, Func Offset: 0x1e0
	// Line 733, Address: 0x1d0694, Func Offset: 0x1e4
	// Line 727, Address: 0x1d0698, Func Offset: 0x1e8
	// Line 733, Address: 0x1d069c, Func Offset: 0x1ec
	// Line 732, Address: 0x1d06a8, Func Offset: 0x1f8
	// Line 742, Address: 0x1d06ac, Func Offset: 0x1fc
	// Line 738, Address: 0x1d06b4, Func Offset: 0x204
	// Line 732, Address: 0x1d06b8, Func Offset: 0x208
	// Line 733, Address: 0x1d06bc, Func Offset: 0x20c
	// Line 732, Address: 0x1d06c0, Func Offset: 0x210
	// Line 733, Address: 0x1d06c4, Func Offset: 0x214
	// Line 732, Address: 0x1d06c8, Func Offset: 0x218
	// Line 733, Address: 0x1d06cc, Func Offset: 0x21c
	// Line 737, Address: 0x1d06e4, Func Offset: 0x234
	// Line 738, Address: 0x1d06e8, Func Offset: 0x238
	// Line 743, Address: 0x1d06ec, Func Offset: 0x23c
	// Line 750, Address: 0x1d0708, Func Offset: 0x258
	// Line 751, Address: 0x1d070c, Func Offset: 0x25c
	// Line 758, Address: 0x1d0710, Func Offset: 0x260
	// Line 752, Address: 0x1d0714, Func Offset: 0x264
	// Line 754, Address: 0x1d0718, Func Offset: 0x268
	// Line 758, Address: 0x1d0720, Func Offset: 0x270
	// Line 755, Address: 0x1d0724, Func Offset: 0x274
	// Line 756, Address: 0x1d0728, Func Offset: 0x278
	// Line 757, Address: 0x1d072c, Func Offset: 0x27c
	// Line 758, Address: 0x1d0730, Func Offset: 0x280
	// Line 655, Address: 0x1d0754, Func Offset: 0x2a4
	// Line 758, Address: 0x1d0760, Func Offset: 0x2b0
	// Line 655, Address: 0x1d076c, Func Offset: 0x2bc
	// Line 758, Address: 0x1d0770, Func Offset: 0x2c0
	// Line 655, Address: 0x1d0784, Func Offset: 0x2d4
	// Line 758, Address: 0x1d078c, Func Offset: 0x2dc
	// Line 669, Address: 0x1d0794, Func Offset: 0x2e4
	// Line 674, Address: 0x1d0798, Func Offset: 0x2e8
	// Line 758, Address: 0x1d079c, Func Offset: 0x2ec
	// Line 678, Address: 0x1d07a8, Func Offset: 0x2f8
	// Line 679, Address: 0x1d07b0, Func Offset: 0x300
	// Line 758, Address: 0x1d07b8, Func Offset: 0x308
	// Line 679, Address: 0x1d07bc, Func Offset: 0x30c
	// Line 758, Address: 0x1d07cc, Func Offset: 0x31c
	// Line 696, Address: 0x1d07d4, Func Offset: 0x324
	// Line 758, Address: 0x1d07d8, Func Offset: 0x328
	// Line 688, Address: 0x1d07e8, Func Offset: 0x338
	// Line 690, Address: 0x1d07ec, Func Offset: 0x33c
	// Line 758, Address: 0x1d07f0, Func Offset: 0x340
	// Line 762, Address: 0x1d0808, Func Offset: 0x358
	// Line 770, Address: 0x1d080c, Func Offset: 0x35c
	// Line 771, Address: 0x1d0814, Func Offset: 0x364
	// Line 774, Address: 0x1d081c, Func Offset: 0x36c
	// Line 778, Address: 0x1d0820, Func Offset: 0x370
	// Line 779, Address: 0x1d0828, Func Offset: 0x378
	// Func End, Address: 0x1d0870, Func Offset: 0x3c0
}

// rwPDS_HICloneSetup__FP18rwPDS_HICloneArrayP8RpAtomicP11RwMatrixTagiiP6RwRGBAP7RpLightP7RpLight
// Start address: 0x1d0870
void rwPDS_HICloneSetup(rwPDS_HICloneArray* clone, RpAtomic* atomic, RwMatrixTag* ltm, int32 inFrustum, int32 trueClip, RwRGBA* matcol, RpLight* bonus0, RpLight* bonus1)
{
	float32 recipinv;
	RwMatrixTag* viewMatrix;
	RwMatrixTag invmat;
	int32 i;
	RpLight* bonusArr[2];
	float32* lightData;
	float32 diffuse;
	RpLightType ltype;
	RwMatrixTag* lmat;
	RwRGBAReal* color;
	float32 rad;
	// Line 361, Address: 0x1d0870, Func Offset: 0
	// Line 367, Address: 0x1d0874, Func Offset: 0x4
	// Line 361, Address: 0x1d0878, Func Offset: 0x8
	// Line 367, Address: 0x1d08ac, Func Offset: 0x3c
	// Line 369, Address: 0x1d08b4, Func Offset: 0x44
	// Line 391, Address: 0x1d0928, Func Offset: 0xb8
	// Line 392, Address: 0x1d09d0, Func Offset: 0x160
	// Line 446, Address: 0x1d0a10, Func Offset: 0x1a0
	// Line 394, Address: 0x1d0a20, Func Offset: 0x1b0
	// Line 393, Address: 0x1d0a28, Func Offset: 0x1b8
	// Line 395, Address: 0x1d0a2c, Func Offset: 0x1bc
	// Line 393, Address: 0x1d0a34, Func Offset: 0x1c4
	// Line 446, Address: 0x1d0a38, Func Offset: 0x1c8
	// Line 396, Address: 0x1d0a44, Func Offset: 0x1d4
	// Line 393, Address: 0x1d0a4c, Func Offset: 0x1dc
	// Line 399, Address: 0x1d0a50, Func Offset: 0x1e0
	// Line 394, Address: 0x1d0a54, Func Offset: 0x1e4
	// Line 397, Address: 0x1d0a58, Func Offset: 0x1e8
	// Line 394, Address: 0x1d0a60, Func Offset: 0x1f0
	// Line 395, Address: 0x1d0a64, Func Offset: 0x1f4
	// Line 398, Address: 0x1d0a68, Func Offset: 0x1f8
	// Line 395, Address: 0x1d0a70, Func Offset: 0x200
	// Line 396, Address: 0x1d0a74, Func Offset: 0x204
	// Line 402, Address: 0x1d0a78, Func Offset: 0x208
	// Line 400, Address: 0x1d0a7c, Func Offset: 0x20c
	// Line 397, Address: 0x1d0a80, Func Offset: 0x210
	// Line 396, Address: 0x1d0a84, Func Offset: 0x214
	// Line 401, Address: 0x1d0a88, Func Offset: 0x218
	// Line 398, Address: 0x1d0a8c, Func Offset: 0x21c
	// Line 397, Address: 0x1d0a90, Func Offset: 0x220
	// Line 399, Address: 0x1d0a94, Func Offset: 0x224
	// Line 398, Address: 0x1d0a98, Func Offset: 0x228
	// Line 399, Address: 0x1d0a9c, Func Offset: 0x22c
	// Line 402, Address: 0x1d0aa0, Func Offset: 0x230
	// Line 400, Address: 0x1d0aa4, Func Offset: 0x234
	// Line 403, Address: 0x1d0aac, Func Offset: 0x23c
	// Line 401, Address: 0x1d0ab4, Func Offset: 0x244
	// Line 404, Address: 0x1d0abc, Func Offset: 0x24c
	// Line 402, Address: 0x1d0ac0, Func Offset: 0x250
	// Line 404, Address: 0x1d0ac4, Func Offset: 0x254
	// Line 403, Address: 0x1d0ac8, Func Offset: 0x258
	// Line 404, Address: 0x1d0acc, Func Offset: 0x25c
	// Line 446, Address: 0x1d0ad0, Func Offset: 0x260
	// Line 449, Address: 0x1d0ad4, Func Offset: 0x264
	// Line 450, Address: 0x1d0b1c, Func Offset: 0x2ac
	// Line 451, Address: 0x1d0b64, Func Offset: 0x2f4
	// Line 452, Address: 0x1d0bac, Func Offset: 0x33c
	// Line 458, Address: 0x1d0bf0, Func Offset: 0x380
	// Line 463, Address: 0x1d0bf8, Func Offset: 0x388
	// Line 466, Address: 0x1d0c04, Func Offset: 0x394
	// Line 465, Address: 0x1d0c08, Func Offset: 0x398
	// Line 467, Address: 0x1d0c0c, Func Offset: 0x39c
	// Line 469, Address: 0x1d0c10, Func Offset: 0x3a0
	// Line 463, Address: 0x1d0c1c, Func Offset: 0x3ac
	// Line 469, Address: 0x1d0c28, Func Offset: 0x3b8
	// Line 474, Address: 0x1d0c30, Func Offset: 0x3c0
	// Line 478, Address: 0x1d0c3c, Func Offset: 0x3cc
	// Line 475, Address: 0x1d0c40, Func Offset: 0x3d0
	// Line 483, Address: 0x1d0c44, Func Offset: 0x3d4
	// Line 478, Address: 0x1d0c48, Func Offset: 0x3d8
	// Line 479, Address: 0x1d0c58, Func Offset: 0x3e8
	// Line 480, Address: 0x1d0c6c, Func Offset: 0x3fc
	// Line 483, Address: 0x1d0c7c, Func Offset: 0x40c
	// Line 486, Address: 0x1d0c84, Func Offset: 0x414
	// Line 489, Address: 0x1d0c94, Func Offset: 0x424
	// Line 492, Address: 0x1d0cbc, Func Offset: 0x44c
	// Line 495, Address: 0x1d0ce4, Func Offset: 0x474
	// Line 499, Address: 0x1d0d08, Func Offset: 0x498
	// Line 505, Address: 0x1d0d10, Func Offset: 0x4a0
	// Line 508, Address: 0x1d0d18, Func Offset: 0x4a8
	// Line 503, Address: 0x1d0d20, Func Offset: 0x4b0
	// Line 508, Address: 0x1d0d24, Func Offset: 0x4b4
	// Line 512, Address: 0x1d0d2c, Func Offset: 0x4bc
	// Line 516, Address: 0x1d0d30, Func Offset: 0x4c0
	// Line 508, Address: 0x1d0d34, Func Offset: 0x4c4
	// Line 505, Address: 0x1d0d3c, Func Offset: 0x4cc
	// Line 522, Address: 0x1d0d40, Func Offset: 0x4d0
	// Line 512, Address: 0x1d0d44, Func Offset: 0x4d4
	// Line 505, Address: 0x1d0d4c, Func Offset: 0x4dc
	// Line 508, Address: 0x1d0d54, Func Offset: 0x4e4
	// Line 512, Address: 0x1d0d58, Func Offset: 0x4e8
	// Line 508, Address: 0x1d0d60, Func Offset: 0x4f0
	// Line 512, Address: 0x1d0d6c, Func Offset: 0x4fc
	// Line 508, Address: 0x1d0d70, Func Offset: 0x500
	// Line 512, Address: 0x1d0d80, Func Offset: 0x510
	// Line 516, Address: 0x1d0d90, Func Offset: 0x520
	// Line 512, Address: 0x1d0d98, Func Offset: 0x528
	// Line 516, Address: 0x1d0da8, Func Offset: 0x538
	// Line 512, Address: 0x1d0dac, Func Offset: 0x53c
	// Line 516, Address: 0x1d0db0, Func Offset: 0x540
	// Line 522, Address: 0x1d0ddc, Func Offset: 0x56c
	// Line 525, Address: 0x1d0de0, Func Offset: 0x570
	// Line 526, Address: 0x1d0dec, Func Offset: 0x57c
	// Line 528, Address: 0x1d0e08, Func Offset: 0x598
	// Func End, Address: 0x1d0e40, Func Offset: 0x5d0
}

