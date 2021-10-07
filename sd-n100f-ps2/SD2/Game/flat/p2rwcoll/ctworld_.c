typedef struct TestSphere;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct RxPipelineNode;
typedef struct RpCollisionData;
typedef struct RwLLLink;
typedef struct PolyTestParam;
typedef struct RwV3d;
typedef struct RwSphere;
typedef struct RpWorldSector;
typedef struct RxPipelineNodeParam;
typedef struct RpCollBSPBranchNode;
typedef struct RxPipelineNodeTopSortData;
typedef struct RpAtomic;
typedef struct CallBackParam;
typedef struct RpWorld;
typedef struct RwRaster;
typedef struct RxNodeDefinition;
typedef struct RpIntersection;
typedef struct AtomicTestParam;
typedef struct RpPlaneSector;
typedef struct RpPolygon;
typedef struct RxPipelineCluster;
typedef struct RpGeometry;
typedef struct RpVertexNormal;
typedef struct rxHeapBlockHeader;
typedef struct RpCollisionBuildParam;
typedef struct RpMaterialList;
typedef struct RpMorphTarget;
typedef struct rxHeapFreeBlock;
typedef struct RwObject;
typedef struct RwTexDictionary;
typedef struct RpSector;
typedef struct RpMaterial;
typedef struct RxClusterDefinition;
typedef struct RwResEntry;
typedef enum RxClusterValidityReq;
typedef struct RxPipelineRequiresCluster;
typedef struct RwLinkList;
typedef struct RxPipeline;
typedef enum RwTextureFilterMode;
typedef struct RpCollisionTriangle;
typedef struct PolyLineTestParam;
typedef struct RpCollBSPTree;
typedef struct RwBBox;
typedef struct RpClump;
typedef struct IntersectionCallBack;
typedef struct RwRGBA;
typedef enum RxClusterValid;
typedef struct RwTexCoords;
typedef struct RwTexture;
typedef struct RpTriangle;
typedef struct RpCollBSPLeafNode;
typedef struct RpCollSector;
typedef enum RpIntersectType;
typedef struct buildCallBackData;
typedef struct RxPacket;
typedef struct RwLine;
typedef struct RpV3dGradient;
typedef struct RwSplitBits;
typedef struct rxReq;
typedef struct RpMeshHeader;
typedef struct RxOutputSpec;
typedef struct RwSurfaceProperties;
typedef enum RxClusterForcePresent;
typedef struct RpIntersectData;
typedef struct RxClusterRef;
typedef enum RxNodeDefEditable;
typedef struct RpInterpolator;
typedef struct RxIoSpec;
typedef struct RpCollBSPTriangle;
typedef struct RxNodeMethods;
typedef struct RxHeap;
typedef struct RxCluster;
typedef struct RwObjectHasFrame;
typedef enum RpWorldRenderOrder;
typedef enum RwTextureAddressMode;
typedef enum rxEmbeddedPacketState;
typedef struct TestLine;

typedef RwObjectHasFrame*(*type_0)(RwObjectHasFrame*);
typedef RpClump*(*type_2)(RpClump*, void*);
typedef int32(*type_4)(RxPipelineNode*, RxPipelineNodeParam*);
typedef RpWorldSector*(*type_6)(RpWorldSector*);
typedef RpWorldSector*(*type_7)(RpWorldSector*, void*);
typedef int32(*type_8)(RxNodeDefinition*);
typedef RpWorldSector*(*type_9)(RpIntersection*, RpWorldSector*, void*);
typedef void(*type_10)(RxNodeDefinition*);
typedef int32(*type_11)(RxPipelineNode*);
typedef RpAtomic*(*type_12)(RpAtomic*, void*);
typedef RpWorldSector*(*type_13)(RpWorldSector*, void*);
typedef RpAtomic*(*type_14)(RpAtomic*);
typedef int32(*type_15)(int32, int32, void*);
typedef void(*type_16)(RxPipelineNode*);
typedef RpWorldSector*(*type_17)(RpWorldSector*, void*);
typedef RpAtomic*(*type_18)(RpIntersection*, RpWorldSector*, RpAtomic*, float32, void*);
typedef int32(*type_19)(RxPipelineNode*, RxPipeline*);
typedef int32(*type_22)(int32, int32, void*);
typedef void(*type_23)(RwResEntry*);
typedef RpCollisionTriangle*(*type_24)(RpIntersection*, RpWorldSector*, RpCollisionTriangle*, float32, void*);
typedef uint32(*type_25)(RxPipelineNode*, uint32, uint32, void*);
typedef RpWorldSector*(*type_29)(RpWorldSector*, void*);
typedef RpWorldSector*(*type_30)(RpWorldSector*, void*);
typedef RpWorldSector*(*type_31)(RpWorldSector*, void*);
typedef RpWorldSector*(*type_35)(RpWorldSector*, void*);
typedef int32(*type_37)(int32, int32, void*);
typedef RpWorldSector*(*type_38)(RpWorldSector*, void*);
typedef int32(*type_40)(int32, int32, void*);
typedef RpAtomic*(*type_42)(RpAtomic*, void*);
typedef int32(*type_45)(int32, int32, void*);
typedef int32(*type_47)(int32, int32, void*);
typedef RpAtomic*(*type_49)(RpAtomic*, void*);
typedef RpAtomic*(*type_52)(RpAtomic*, void*);
typedef RpWorldSector*(*type_54)(RpWorldSector*, void*);

typedef RwLine type_1[16];
typedef uint32 type_3[4096];
typedef RwV3d* type_5[3];
typedef RxCluster type_20[1];
typedef uint16 type_21[3];
typedef uint8 type_26[4];
typedef uint32 type_27[4];
typedef uint16 type_28[3];
typedef int8 type_32[32];
typedef int8 type_33[32];
typedef int8 type_34[67];
typedef int32 type_36[16];
typedef RpSector* type_39[64];
typedef RwTexCoords* type_41[8];
typedef RwTexCoords* type_43[8];
typedef RpSector* type_44[64];
typedef RwLine type_46[64];
typedef uint16 type_48[3];
typedef RwBBox type_50[64];
typedef RpSector* type_51[64];
typedef int32 type_53[16];

struct TestSphere
{
	RwSphere* sphere;
	float32 recipRadius;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
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

struct RpCollisionData
{
	int32 flags;
	RpCollBSPTree* tree;
	int32 numTriangles;
	uint16* triangleMap;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct PolyTestParam
{
	RwBBox bbox;
	RpWorldSector* worldSector;
	int32(*leafTest)(int32, int32, void*);
	int32(*v303leafTest)(int32, int32, void*);
	void* leafTestData;
	CallBackParam* cbParam;
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
};

struct RpWorldSector
{
	int32 type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	RwTexCoords* texCoords[8];
	RwRGBA* preLitLum;
	RwResEntry* repEntry;
	RwLinkList collAtomicsInWorldSector;
	RwLinkList noCollAtomicsInWorldSector;
	RwLinkList lightsInWorldSector;
	RwBBox boundingBox;
	RwBBox tightBoundingBox;
	RpCollSector* colSectorRoot;
	RpMeshHeader* mesh;
	RxPipeline* pipeline;
	uint16 matListWindowBase;
	uint16 numVertices;
	uint16 numPolygons;
	uint16 pad;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct RpCollBSPBranchNode
{
	uint16 type;
	uint8 leftType;
	uint8 rightType;
	uint16 leftNode;
	uint16 rightNode;
	float32 leftValue;
	float32 rightValue;
};

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
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

struct CallBackParam
{
	RpIntersection* intersection;
	IntersectionCallBack u;
	void* data;
};

struct RpWorld
{
	RwObject object;
	uint32 flags;
	RpWorldRenderOrder renderOrder;
	RpMaterialList matList;
	RpSector* rootSector;
	int32 numTexCoordSets;
	int32 numClumpsInWorld;
	RwLLLink* currentClumpLink;
	RwLinkList clumpList;
	RwLinkList lightList;
	RwLinkList directionalLightList;
	RwV3d worldOrigin;
	RwBBox boundingBox;
	RwSurfaceProperties surfaceProps;
	RpWorldSector*(*renderCallBack)(RpWorldSector*);
	RxPipeline* pipeline;
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

struct RxNodeDefinition
{
	int8* name;
	RxNodeMethods nodeMethods;
	RxIoSpec io;
	uint32 pipelineNodePrivateDataSize;
	RxNodeDefEditable editable;
	int32 InputPipesCnt;
};

struct RpIntersection
{
	RpIntersectData t;
	RpIntersectType type;
};

struct AtomicTestParam
{
	CallBackParam cbParam;
	RpWorldSector* worldSector;
	RpAtomic*(*atomicCallBack)(RpAtomic*, void*);
	RpAtomic* testAtomic;
	void* testData;
};

struct RpPlaneSector
{
	int32 type;
	float32 value;
	RpSector* leftSubTree;
	RpSector* rightSubTree;
	float32 leftValue;
	float32 rightValue;
};

struct RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
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
	RwSurfaceProperties ignoredSurfaceProps;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
};

struct RpCollisionBuildParam
{
	int32 dummy;
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

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct RpSector
{
	int32 type;
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

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct RwLinkList
{
	RwLLLink link;
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

enum RwTextureFilterMode
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

struct RpCollisionTriangle
{
	RwV3d normal;
	RwV3d point;
	int32 index;
	RwV3d* vertices[3];
};

struct PolyLineTestParam
{
	RpV3dGradient grad;
	RwLine clippedLine;
	RpWorldSector* worldSector;
	RwV3d* start;
	RwV3d delta;
	CallBackParam* cbParam;
};

struct RpCollBSPTree
{
	uint32 numLeafNodes;
	RpCollBSPBranchNode* branchNodes;
	RpCollBSPLeafNode* leafNodes;
	uint8 pad[4];
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLLLink inWorldLink;
	RpClump*(*callback)(RpClump*, void*);
	uint16 renderFrame;
	uint16 pad;
};

struct IntersectionCallBack
{
	union
	{
		RpWorldSector*(*sectorCB)(RpIntersection*, RpWorldSector*, void*);
		RpCollisionTriangle*(*worldCB)(RpIntersection*, RpWorldSector*, RpCollisionTriangle*, float32, void*);
		RpAtomic*(*atomicCB)(RpIntersection*, RpWorldSector*, RpAtomic*, float32, void*);
	};
};

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct RwTexCoords
{
	float32 u;
	float32 v;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	int8 name[32];
	int8 mask[32];
	int32 refCount;
	RwTextureFilterMode filtering;
	RwTextureAddressMode addressingU;
	RwTextureAddressMode addressingV;
};

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
};

struct RpCollBSPLeafNode
{
	uint16 numPolygons;
	uint16 firstPolygon;
};

struct RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
};

enum RpIntersectType
{
	rpINTERSECTNONE,
	rpINTERSECTLINE,
	rpINTERSECTPOINT,
	rpINTERSECTSPHERE,
	rpINTERSECTBOX,
	rpINTERSECTATOMIC,
	rpINTERSECTTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct buildCallBackData
{
	RpCollisionBuildParam* param;
	int32 error;
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

struct RwLine
{
	RwV3d start;
	RwV3d end;
};

struct RpV3dGradient
{
	float32 dydx;
	float32 dzdx;
	float32 dxdy;
	float32 dzdy;
	float32 dxdz;
	float32 dydz;
};

struct RwSplitBits
{
	union
	{
		float32 nReal;
		int32 nInt;
		uint32 nUInt;
	};
};

struct rxReq
{
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
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

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct RpIntersectData
{
	union
	{
		RwLine line;
		RwV3d point;
		RwSphere sphere;
		RwBBox box;
		void* object;
	};
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
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

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

struct RpCollBSPTriangle
{
	uint16 vertIndex[3];
	int16 index;
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

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

enum RwTextureAddressMode
{
	rwTEXTUREADDRESSNATEXTUREADDRESS,
	rwTEXTUREADDRESSWRAP,
	rwTEXTUREADDRESSMIRROR,
	rwTEXTUREADDRESSCLAMP,
	rwTEXTUREADDRESSBORDER,
	rwTEXTUREADDRESSMODEFORCEENUMSIZEINT = 0x7fffffff
};

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

struct TestLine
{
	RwLine* line;
	RwV3d dir;
	float32 length;
	float32 recipLength;
};

int8 rcsid[67];
RpWorldSector*(*WorldSectorQueryDataCallBack)(RpWorldSector*, void*);
RpWorldSector*(*WorldSectorDestroyDataCallBack)(RpWorldSector*, void*);
RpWorldSector*(*WorldSectorBuildDataCallBack)(RpWorldSector*, void*);
int32 _rpCollisionWorldSectorDataOffset;
uint32 ourGlobals[4096];
RpWorldSector*(*WorldSectorForAllPrimitiveAtomicIntersections)(RpWorldSector*, void*);
RpAtomic*(*AtomicSphereTest)(RpAtomic*, void*);
RpAtomic*(*AtomicBoxTest)(RpAtomic*, void*);
RpAtomic*(*AtomicLineTest)(RpAtomic*, void*);
int32 _rpCollisionGlobalsOffset;
RpWorldSector*(*WorldSectorForAllBoxedPrimitivePolyIntersections)(RpWorldSector*, void*);
int32(*OldLeafNodeForAllSpherePolyIntersections)(int32, int32, void*);
int32(*LeafNodeForAllSpherePolyIntersections)(int32, int32, void*);
int32(*OldLeafNodeForAllBoxPolyIntersections)(int32, int32, void*);
int32(*LeafNodeForAllBoxPolyIntersections)(int32, int32, void*);
RpWorldSector*(*WorldSectorForAllLinePolyIntersections)(RpWorldSector*, void*);
RpWorldSector*(*WorldSectorIntersectionCallBack)(RpWorldSector*, void*);
RpWorldSector*(*CollisionWorldSectorTranslate)(RpWorldSector*, void*);
int32 _rpCollisionAtomicDataOffset;
int32(*LeafNodeForAllLinePolyIntersections)(int32, int32, void*);

RpWorld* RpCollisionWorldForAllIntersections(RpWorld* world, RpIntersection* intersection, RpCollisionTriangle*(*callBack)(RpIntersection*, RpWorldSector*, RpCollisionTriangle*, float32, void*), void* data);
RpWorldSector* WorldSectorForAllBoxedPrimitivePolyIntersections(RpWorldSector* worldSector, void* data);
RpWorldSector* WorldSectorForAllLinePolyIntersections(RpWorldSector* worldSector, void* data);
int32 LeafNodeForAllBoxPolyIntersections(int32 numPolygons, int32 polyOffset, void* data);
int32 LeafNodeForAllSpherePolyIntersections(int32 numPolygons, int32 polyOffset, void* data);
int32 LeafNodeForAllLinePolyIntersections(int32 numPolygons, int32 polyOffset, void* data);
RpWorldSector* OldWorldSectorForAllBoxedPrimitivePolyIntersections(RpWorldSector* worldSector, PolyTestParam* isData);
int32 OldLeafNodeForAllSpherePolyIntersections(int32 numPolygons, int32 polyOffset, void* data);
int32 OldLeafNodeForAllBoxPolyIntersections(int32 numPolygons, int32 polyOffset, void* data);
RpWorldSector* OldWorldSectorForAllLinePolyIntersections(RpWorldSector* worldSector, PolyLineTestParam* isData);
RpWorld* WorldForAllBoxWorldSectorIntersections(RpWorld* world, RwBBox* box, RpWorldSector*(*callBack)(RpWorldSector*, void*), void* data);
RpWorld* WorldForAllLineWorldSectorIntersections(RpWorld* world, RwLine* testLine, RpV3dGradient* grad, RpWorldSector*(*callBack)(RpWorldSector*, void*), void* data, RwLine* clippedLineOut);

// 
// Start address: 0x272fb0
RpWorld* RpCollisionWorldForAllIntersections(RpWorld* world, RpIntersection* intersection, RpCollisionTriangle*(*callBack)(RpIntersection*, RpWorldSector*, RpCollisionTriangle*, float32, void*), void* data)
{
	RpAtomic* atomic;
	RwSphere sphere;
	TestSphere testSphere;
	PolyTestParam isData;
	PolyTestParam isData;
	TestSphere testSphere;
	PolyTestParam isData;
	PolyLineTestParam isData;
	CallBackParam cbParam;
	// Line 1647, Address: 0x272fb0, Func Offset: 0
	// Line 1657, Address: 0x272fc0, Func Offset: 0x10
	// Line 1658, Address: 0x272fc4, Func Offset: 0x14
	// Line 1659, Address: 0x272fc8, Func Offset: 0x18
	// Line 1661, Address: 0x272fcc, Func Offset: 0x1c
	// Line 1667, Address: 0x273008, Func Offset: 0x58
	// Line 1675, Address: 0x273010, Func Offset: 0x60
	// Line 1676, Address: 0x273014, Func Offset: 0x64
	// Line 1677, Address: 0x273028, Func Offset: 0x78
	// Line 1680, Address: 0x27302c, Func Offset: 0x7c
	// Line 1676, Address: 0x273030, Func Offset: 0x80
	// Line 1677, Address: 0x273058, Func Offset: 0xa8
	// Line 1680, Address: 0x27305c, Func Offset: 0xac
	// Line 1683, Address: 0x273120, Func Offset: 0x170
	// Line 1680, Address: 0x273134, Func Offset: 0x184
	// Line 1683, Address: 0x273138, Func Offset: 0x188
	// Line 1680, Address: 0x27313c, Func Offset: 0x18c
	// Line 1683, Address: 0x273148, Func Offset: 0x198
	// Line 1690, Address: 0x273150, Func Offset: 0x1a0
	// Line 1699, Address: 0x273158, Func Offset: 0x1a8
	// Line 1703, Address: 0x27315c, Func Offset: 0x1ac
	// Line 1699, Address: 0x273164, Func Offset: 0x1b4
	// Line 1705, Address: 0x273168, Func Offset: 0x1b8
	// Line 1699, Address: 0x273170, Func Offset: 0x1c0
	// Line 1706, Address: 0x273178, Func Offset: 0x1c8
	// Line 1712, Address: 0x273180, Func Offset: 0x1d0
	// Line 1699, Address: 0x273184, Func Offset: 0x1d4
	// Line 1712, Address: 0x27319c, Func Offset: 0x1ec
	// Line 1708, Address: 0x2731a0, Func Offset: 0x1f0
	// Line 1709, Address: 0x2731a4, Func Offset: 0x1f4
	// Line 1699, Address: 0x2731a8, Func Offset: 0x1f8
	// Line 1712, Address: 0x2731b0, Func Offset: 0x200
	// Line 1699, Address: 0x2731b4, Func Offset: 0x204
	// Line 1702, Address: 0x273228, Func Offset: 0x278
	// Line 1703, Address: 0x27322c, Func Offset: 0x27c
	// Line 1712, Address: 0x273230, Func Offset: 0x280
	// Line 1703, Address: 0x273234, Func Offset: 0x284
	// Line 1705, Address: 0x27323c, Func Offset: 0x28c
	// Line 1706, Address: 0x273240, Func Offset: 0x290
	// Line 1708, Address: 0x273244, Func Offset: 0x294
	// Line 1709, Address: 0x273248, Func Offset: 0x298
	// Line 1712, Address: 0x27324c, Func Offset: 0x29c
	// Line 1717, Address: 0x273254, Func Offset: 0x2a4
	// Line 1724, Address: 0x27325c, Func Offset: 0x2ac
	// Line 1727, Address: 0x273260, Func Offset: 0x2b0
	// Line 1728, Address: 0x273268, Func Offset: 0x2b8
	// Line 1733, Address: 0x273270, Func Offset: 0x2c0
	// Line 1724, Address: 0x273274, Func Offset: 0x2c4
	// Line 1730, Address: 0x27327c, Func Offset: 0x2cc
	// Line 1733, Address: 0x273280, Func Offset: 0x2d0
	// Line 1724, Address: 0x273288, Func Offset: 0x2d8
	// Line 1727, Address: 0x2732ac, Func Offset: 0x2fc
	// Line 1728, Address: 0x2732b0, Func Offset: 0x300
	// Line 1730, Address: 0x2732b4, Func Offset: 0x304
	// Line 1733, Address: 0x2732b8, Func Offset: 0x308
	// Line 1738, Address: 0x2732c0, Func Offset: 0x310
	// Line 1745, Address: 0x2732c8, Func Offset: 0x318
	// Line 1752, Address: 0x2732cc, Func Offset: 0x31c
	// Line 1754, Address: 0x2732d8, Func Offset: 0x328
	// Line 1767, Address: 0x2732e0, Func Offset: 0x330
	// Line 1760, Address: 0x2732e4, Func Offset: 0x334
	// Line 1752, Address: 0x2732ec, Func Offset: 0x33c
	// Line 1761, Address: 0x2732f8, Func Offset: 0x348
	// Line 1752, Address: 0x273300, Func Offset: 0x350
	// Line 1753, Address: 0x273310, Func Offset: 0x360
	// Line 1757, Address: 0x273314, Func Offset: 0x364
	// Line 1752, Address: 0x273324, Func Offset: 0x374
	// Line 1757, Address: 0x27332c, Func Offset: 0x37c
	// Line 1763, Address: 0x273330, Func Offset: 0x380
	// Line 1764, Address: 0x273334, Func Offset: 0x384
	// Line 1767, Address: 0x273338, Func Offset: 0x388
	// Line 1752, Address: 0x27333c, Func Offset: 0x38c
	// Line 1753, Address: 0x273340, Func Offset: 0x390
	// Line 1754, Address: 0x273344, Func Offset: 0x394
	// Line 1757, Address: 0x273348, Func Offset: 0x398
	// Line 1767, Address: 0x27334c, Func Offset: 0x39c
	// Line 1754, Address: 0x273354, Func Offset: 0x3a4
	// Line 1757, Address: 0x273358, Func Offset: 0x3a8
	// Line 1754, Address: 0x27335c, Func Offset: 0x3ac
	// Line 1757, Address: 0x273360, Func Offset: 0x3b0
	// Line 1760, Address: 0x2733d0, Func Offset: 0x420
	// Line 1761, Address: 0x2733d4, Func Offset: 0x424
	// Line 1763, Address: 0x2733d8, Func Offset: 0x428
	// Line 1767, Address: 0x2733dc, Func Offset: 0x42c
	// Line 1771, Address: 0x2733e4, Func Offset: 0x434
	// Line 1780, Address: 0x2733e8, Func Offset: 0x438
	// Func End, Address: 0x2733fc, Func Offset: 0x44c
}

// WorldSectorForAllBoxedPrimitivePolyIntersections__FP13RpWorldSectorPv
// Start address: 0x273400
RpWorldSector* WorldSectorForAllBoxedPrimitivePolyIntersections(RpWorldSector* worldSector, void* data)
{
	RpCollisionData* collData;
	PolyTestParam* isData;
	// Line 1114, Address: 0x273400, Func Offset: 0
	// Line 1122, Address: 0x27340c, Func Offset: 0xc
	// Line 1128, Address: 0x27341c, Func Offset: 0x1c
	// Line 1132, Address: 0x273424, Func Offset: 0x24
	// Line 1141, Address: 0x273434, Func Offset: 0x34
	// Line 1145, Address: 0x27344c, Func Offset: 0x4c
	// Func End, Address: 0x27345c, Func Offset: 0x5c
}

// WorldSectorForAllLinePolyIntersections__FP13RpWorldSectorPv
// Start address: 0x273460
RpWorldSector* WorldSectorForAllLinePolyIntersections(RpWorldSector* worldSector, void* data)
{
	RpCollisionData* collData;
	PolyLineTestParam* isData;
	// Line 1069, Address: 0x273460, Func Offset: 0
	// Line 1077, Address: 0x27346c, Func Offset: 0xc
	// Line 1070, Address: 0x273474, Func Offset: 0x14
	// Line 1077, Address: 0x273478, Func Offset: 0x18
	// Line 1083, Address: 0x273480, Func Offset: 0x20
	// Line 1087, Address: 0x273488, Func Offset: 0x28
	// Line 1098, Address: 0x273498, Func Offset: 0x38
	// Line 1102, Address: 0x2734b8, Func Offset: 0x58
	// Func End, Address: 0x2734c8, Func Offset: 0x68
}

// LeafNodeForAllBoxPolyIntersections__FiiPv
// Start address: 0x2734d0
int32 LeafNodeForAllBoxPolyIntersections(int32 numPolygons, int32 polyOffset, void* data)
{
	float32 _result;
	float32 lengthSq;
	RpCollisionTriangle collisionTri;
	RwV3d* v2;
	RwV3d* v1;
	RwV3d* v0;
	RpPolygon* poly;
	uint16* polyIndex;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpWorldSector* worldSector;
	CallBackParam* cbParam;
	PolyTestParam* isData;
	// Line 1007, Address: 0x2734d0, Func Offset: 0
	// Line 1008, Address: 0x2734fc, Func Offset: 0x2c
	// Line 1010, Address: 0x273500, Func Offset: 0x30
	// Line 1013, Address: 0x273504, Func Offset: 0x34
	// Line 1022, Address: 0x27350c, Func Offset: 0x3c
	// Line 1009, Address: 0x273510, Func Offset: 0x40
	// Line 1013, Address: 0x273514, Func Offset: 0x44
	// Line 1011, Address: 0x273518, Func Offset: 0x48
	// Line 1013, Address: 0x27351c, Func Offset: 0x4c
	// Line 1012, Address: 0x273524, Func Offset: 0x54
	// Line 1022, Address: 0x273528, Func Offset: 0x58
	// Line 1013, Address: 0x27352c, Func Offset: 0x5c
	// Line 1022, Address: 0x273530, Func Offset: 0x60
	// Line 1028, Address: 0x273538, Func Offset: 0x68
	// Line 1034, Address: 0x27353c, Func Offset: 0x6c
	// Line 1028, Address: 0x273540, Func Offset: 0x70
	// Line 1029, Address: 0x273548, Func Offset: 0x78
	// Line 1030, Address: 0x27354c, Func Offset: 0x7c
	// Line 1031, Address: 0x273550, Func Offset: 0x80
	// Line 1029, Address: 0x273554, Func Offset: 0x84
	// Line 1030, Address: 0x273564, Func Offset: 0x94
	// Line 1031, Address: 0x273574, Func Offset: 0xa4
	// Line 1034, Address: 0x273584, Func Offset: 0xb4
	// Line 1037, Address: 0x27359c, Func Offset: 0xcc
	// Line 1039, Address: 0x2735a0, Func Offset: 0xd0
	// Line 1037, Address: 0x2735ac, Func Offset: 0xdc
	// Line 1038, Address: 0x2735c0, Func Offset: 0xf0
	// Line 1039, Address: 0x2735c8, Func Offset: 0xf8
	// Line 1045, Address: 0x273684, Func Offset: 0x1b4
	// Line 1039, Address: 0x27368c, Func Offset: 0x1bc
	// Line 1040, Address: 0x2736ac, Func Offset: 0x1dc
	// Line 1041, Address: 0x2736b0, Func Offset: 0x1e0
	// Line 1042, Address: 0x2736b4, Func Offset: 0x1e4
	// Line 1045, Address: 0x2736b8, Func Offset: 0x1e8
	// Line 1049, Address: 0x2736d4, Func Offset: 0x204
	// Line 1054, Address: 0x2736dc, Func Offset: 0x20c
	// Line 1053, Address: 0x2736e0, Func Offset: 0x210
	// Line 1054, Address: 0x2736e4, Func Offset: 0x214
	// Line 1056, Address: 0x2736f0, Func Offset: 0x220
	// Line 1057, Address: 0x2736f4, Func Offset: 0x224
	// Func End, Address: 0x273724, Func Offset: 0x254
}

// LeafNodeForAllSpherePolyIntersections__FiiPv
// Start address: 0x273730
int32 LeafNodeForAllSpherePolyIntersections(int32 numPolygons, int32 polyOffset, void* data)
{
	RpCollisionTriangle collisionTri;
	float32 distance;
	RwV3d* v2;
	RwV3d* v1;
	RwV3d* v0;
	RpPolygon* poly;
	uint16* polyIndex;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpWorldSector* worldSector;
	TestSphere* testSphere;
	CallBackParam* cbParam;
	PolyTestParam* isData;
	// Line 940, Address: 0x273730, Func Offset: 0
	// Line 945, Address: 0x27375c, Func Offset: 0x2c
	// Line 948, Address: 0x273760, Func Offset: 0x30
	// Line 957, Address: 0x273768, Func Offset: 0x38
	// Line 948, Address: 0x27376c, Func Offset: 0x3c
	// Line 942, Address: 0x273770, Func Offset: 0x40
	// Line 943, Address: 0x273774, Func Offset: 0x44
	// Line 948, Address: 0x273778, Func Offset: 0x48
	// Line 946, Address: 0x273780, Func Offset: 0x50
	// Line 957, Address: 0x273784, Func Offset: 0x54
	// Line 947, Address: 0x273788, Func Offset: 0x58
	// Line 948, Address: 0x273790, Func Offset: 0x60
	// Line 957, Address: 0x273794, Func Offset: 0x64
	// Line 964, Address: 0x27379c, Func Offset: 0x6c
	// Line 970, Address: 0x2737a0, Func Offset: 0x70
	// Line 964, Address: 0x2737ac, Func Offset: 0x7c
	// Line 965, Address: 0x2737b8, Func Offset: 0x88
	// Line 966, Address: 0x2737bc, Func Offset: 0x8c
	// Line 967, Address: 0x2737c0, Func Offset: 0x90
	// Line 965, Address: 0x2737c4, Func Offset: 0x94
	// Line 966, Address: 0x2737d4, Func Offset: 0xa4
	// Line 967, Address: 0x2737e4, Func Offset: 0xb4
	// Line 970, Address: 0x2737f4, Func Offset: 0xc4
	// Line 976, Address: 0x27380c, Func Offset: 0xdc
	// Line 983, Address: 0x273810, Func Offset: 0xe0
	// Line 985, Address: 0x273814, Func Offset: 0xe4
	// Line 976, Address: 0x273818, Func Offset: 0xe8
	// Line 977, Address: 0x27382c, Func Offset: 0xfc
	// Line 978, Address: 0x273834, Func Offset: 0x104
	// Line 979, Address: 0x273838, Func Offset: 0x108
	// Line 980, Address: 0x27383c, Func Offset: 0x10c
	// Line 983, Address: 0x273840, Func Offset: 0x110
	// Line 985, Address: 0x27384c, Func Offset: 0x11c
	// Line 990, Address: 0x27386c, Func Offset: 0x13c
	// Line 995, Address: 0x273874, Func Offset: 0x144
	// Line 994, Address: 0x273878, Func Offset: 0x148
	// Line 995, Address: 0x27387c, Func Offset: 0x14c
	// Line 997, Address: 0x273888, Func Offset: 0x158
	// Line 998, Address: 0x27388c, Func Offset: 0x15c
	// Func End, Address: 0x2738bc, Func Offset: 0x18c
}

// LeafNodeForAllLinePolyIntersections__FiiPv
// Start address: 0x2738c0
int32 LeafNodeForAllLinePolyIntersections(int32 numPolygons, int32 polyOffset, void* data)
{
	float32 _result;
	float32 lengthSq;
	RpCollisionTriangle collisionTri;
	float32 v;
	float32 u;
	float32 hi;
	float32 lo;
	RwV3d edgetmp;
	float32 det;
	RwV3d edge1;
	int32 result;
	float32 distance;
	RwV3d* v2;
	RwV3d* v1;
	RwV3d* v0;
	RpPolygon* poly;
	uint16* polyIndex;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpWorldSector* worldSector;
	CallBackParam* cbParam;
	PolyLineTestParam* isData;
	// Line 874, Address: 0x2738c0, Func Offset: 0
	// Line 877, Address: 0x2738e8, Func Offset: 0x28
	// Line 880, Address: 0x2738ec, Func Offset: 0x2c
	// Line 889, Address: 0x2738f4, Func Offset: 0x34
	// Line 876, Address: 0x2738f8, Func Offset: 0x38
	// Line 880, Address: 0x2738fc, Func Offset: 0x3c
	// Line 878, Address: 0x273900, Func Offset: 0x40
	// Line 880, Address: 0x273904, Func Offset: 0x44
	// Line 879, Address: 0x27390c, Func Offset: 0x4c
	// Line 875, Address: 0x273910, Func Offset: 0x50
	// Line 889, Address: 0x273914, Func Offset: 0x54
	// Line 880, Address: 0x273918, Func Offset: 0x58
	// Line 889, Address: 0x27391c, Func Offset: 0x5c
	// Line 896, Address: 0x273924, Func Offset: 0x64
	// Line 904, Address: 0x273928, Func Offset: 0x68
	// Line 896, Address: 0x27393c, Func Offset: 0x7c
	// Line 897, Address: 0x273944, Func Offset: 0x84
	// Line 898, Address: 0x273948, Func Offset: 0x88
	// Line 899, Address: 0x27394c, Func Offset: 0x8c
	// Line 897, Address: 0x273950, Func Offset: 0x90
	// Line 898, Address: 0x273958, Func Offset: 0x98
	// Line 897, Address: 0x273960, Func Offset: 0xa0
	// Line 898, Address: 0x273964, Func Offset: 0xa4
	// Line 897, Address: 0x273968, Func Offset: 0xa8
	// Line 898, Address: 0x27396c, Func Offset: 0xac
	// Line 904, Address: 0x273970, Func Offset: 0xb0
	// Line 899, Address: 0x273978, Func Offset: 0xb8
	// Line 904, Address: 0x273988, Func Offset: 0xc8
	// Line 906, Address: 0x273c00, Func Offset: 0x340
	// Line 911, Address: 0x273c08, Func Offset: 0x348
	// Line 913, Address: 0x273c10, Func Offset: 0x350
	// Line 911, Address: 0x273c20, Func Offset: 0x360
	// Line 912, Address: 0x273c2c, Func Offset: 0x36c
	// Line 913, Address: 0x273c34, Func Offset: 0x374
	// Line 918, Address: 0x273cec, Func Offset: 0x42c
	// Line 913, Address: 0x273cf4, Func Offset: 0x434
	// Line 914, Address: 0x273d14, Func Offset: 0x454
	// Line 915, Address: 0x273d18, Func Offset: 0x458
	// Line 916, Address: 0x273d1c, Func Offset: 0x45c
	// Line 918, Address: 0x273d20, Func Offset: 0x460
	// Line 923, Address: 0x273d3c, Func Offset: 0x47c
	// Line 928, Address: 0x273d44, Func Offset: 0x484
	// Line 927, Address: 0x273d48, Func Offset: 0x488
	// Line 928, Address: 0x273d4c, Func Offset: 0x48c
	// Line 930, Address: 0x273d58, Func Offset: 0x498
	// Line 931, Address: 0x273d5c, Func Offset: 0x49c
	// Func End, Address: 0x273d88, Func Offset: 0x4c8
}

// OldWorldSectorForAllBoxedPrimitivePolyIntersections__FP13RpWorldSectorP13PolyTestParam
// Start address: 0x273d90
RpWorldSector* OldWorldSectorForAllBoxedPrimitivePolyIntersections(RpWorldSector* worldSector, PolyTestParam* isData)
{
	RwSplitBits right;
	RwSplitBits left;
	float32 value;
	int32 plane;
	int32 polyOffset;
	int32 numPolygons;
	int32 cutStack[16];
	int32 cut;
	int32 nStack;
	RwV3d* vertices;
	RpCollSector* collSector;
	// Line 788, Address: 0x273d90, Func Offset: 0
	// Line 794, Address: 0x273db0, Func Offset: 0x20
	// Line 797, Address: 0x273dc0, Func Offset: 0x30
	// Line 801, Address: 0x273dc4, Func Offset: 0x34
	// Line 802, Address: 0x273dc8, Func Offset: 0x38
	// Line 808, Address: 0x273dcc, Func Offset: 0x3c
	// Line 816, Address: 0x273de8, Func Offset: 0x58
	// Line 815, Address: 0x273dec, Func Offset: 0x5c
	// Line 820, Address: 0x273df4, Func Offset: 0x64
	// Line 816, Address: 0x273e00, Func Offset: 0x70
	// Line 821, Address: 0x273e18, Func Offset: 0x88
	// Line 820, Address: 0x273e1c, Func Offset: 0x8c
	// Line 821, Address: 0x273e24, Func Offset: 0x94
	// Line 827, Address: 0x273e2c, Func Offset: 0x9c
	// Line 821, Address: 0x273e30, Func Offset: 0xa0
	// Line 825, Address: 0x273e34, Func Offset: 0xa4
	// Line 827, Address: 0x273e38, Func Offset: 0xa8
	// Line 829, Address: 0x273e40, Func Offset: 0xb0
	// Line 831, Address: 0x273e4c, Func Offset: 0xbc
	// Line 832, Address: 0x273e64, Func Offset: 0xd4
	// Line 834, Address: 0x273e68, Func Offset: 0xd8
	// Line 835, Address: 0x273e6c, Func Offset: 0xdc
	// Line 838, Address: 0x273e74, Func Offset: 0xe4
	// Line 844, Address: 0x273e80, Func Offset: 0xf0
	// Line 852, Address: 0x273e88, Func Offset: 0xf8
	// Line 849, Address: 0x273e90, Func Offset: 0x100
	// Line 852, Address: 0x273e94, Func Offset: 0x104
	// Line 853, Address: 0x273e9c, Func Offset: 0x10c
	// Line 856, Address: 0x273ea0, Func Offset: 0x110
	// Line 859, Address: 0x273eb4, Func Offset: 0x124
	// Line 861, Address: 0x273ebc, Func Offset: 0x12c
	// Line 862, Address: 0x273ec4, Func Offset: 0x134
	// Line 864, Address: 0x273ec8, Func Offset: 0x138
	// Line 865, Address: 0x273ecc, Func Offset: 0x13c
	// Func End, Address: 0x273ef0, Func Offset: 0x160
}

// OldLeafNodeForAllSpherePolyIntersections__FiiPv
// Start address: 0x273ef0
int32 OldLeafNodeForAllSpherePolyIntersections(int32 numPolygons, int32 polyOffset, void* data)
{
	RpCollisionTriangle collTri;
	float32 distance;
	RwV3d* v2;
	RwV3d* v1;
	RwV3d* v0;
	RpPolygon* poly;
	RwV3d* vertices;
	RpWorldSector* worldSector;
	CallBackParam* cbParam;
	TestSphere* testSphere;
	PolyTestParam* isData;
	// Line 723, Address: 0x273ef0, Func Offset: 0
	// Line 725, Address: 0x273f1c, Func Offset: 0x2c
	// Line 727, Address: 0x273f20, Func Offset: 0x30
	// Line 728, Address: 0x273f24, Func Offset: 0x34
	// Line 738, Address: 0x273f2c, Func Offset: 0x3c
	// Line 737, Address: 0x273f30, Func Offset: 0x40
	// Line 738, Address: 0x273f38, Func Offset: 0x48
	// Line 728, Address: 0x273f3c, Func Offset: 0x4c
	// Line 729, Address: 0x273f40, Func Offset: 0x50
	// Line 737, Address: 0x273f48, Func Offset: 0x58
	// Line 738, Address: 0x273f4c, Func Offset: 0x5c
	// Line 744, Address: 0x273f54, Func Offset: 0x64
	// Line 745, Address: 0x273f58, Func Offset: 0x68
	// Line 746, Address: 0x273f5c, Func Offset: 0x6c
	// Line 748, Address: 0x273f60, Func Offset: 0x70
	// Line 744, Address: 0x273f6c, Func Offset: 0x7c
	// Line 745, Address: 0x273f7c, Func Offset: 0x8c
	// Line 746, Address: 0x273f8c, Func Offset: 0x9c
	// Line 748, Address: 0x273f9c, Func Offset: 0xac
	// Line 753, Address: 0x273fb4, Func Offset: 0xc4
	// Line 760, Address: 0x273fb8, Func Offset: 0xc8
	// Line 762, Address: 0x273fbc, Func Offset: 0xcc
	// Line 753, Address: 0x273fc0, Func Offset: 0xd0
	// Line 754, Address: 0x273fd4, Func Offset: 0xe4
	// Line 755, Address: 0x273fd8, Func Offset: 0xe8
	// Line 756, Address: 0x273fdc, Func Offset: 0xec
	// Line 757, Address: 0x273fe0, Func Offset: 0xf0
	// Line 760, Address: 0x273fe4, Func Offset: 0xf4
	// Line 762, Address: 0x273ff0, Func Offset: 0x100
	// Line 766, Address: 0x274010, Func Offset: 0x120
	// Line 772, Address: 0x274018, Func Offset: 0x128
	// Line 770, Address: 0x27401c, Func Offset: 0x12c
	// Line 771, Address: 0x274020, Func Offset: 0x130
	// Line 772, Address: 0x274024, Func Offset: 0x134
	// Line 774, Address: 0x274030, Func Offset: 0x140
	// Line 775, Address: 0x274034, Func Offset: 0x144
	// Func End, Address: 0x274064, Func Offset: 0x174
}

// OldLeafNodeForAllBoxPolyIntersections__FiiPv
// Start address: 0x274070
int32 OldLeafNodeForAllBoxPolyIntersections(int32 numPolygons, int32 polyOffset, void* data)
{
	float32 _result;
	float32 lengthSq;
	RpCollisionTriangle collTri;
	RwV3d* v2;
	RwV3d* v1;
	RwV3d* v0;
	RpPolygon* poly;
	RwV3d* vertices;
	RpWorldSector* worldSector;
	CallBackParam* cbParam;
	PolyTestParam* isData;
	// Line 665, Address: 0x274070, Func Offset: 0
	// Line 666, Address: 0x27409c, Func Offset: 0x2c
	// Line 668, Address: 0x2740a0, Func Offset: 0x30
	// Line 678, Address: 0x2740a8, Func Offset: 0x38
	// Line 667, Address: 0x2740ac, Func Offset: 0x3c
	// Line 677, Address: 0x2740b0, Func Offset: 0x40
	// Line 669, Address: 0x2740bc, Func Offset: 0x4c
	// Line 678, Address: 0x2740c0, Func Offset: 0x50
	// Line 683, Address: 0x2740cc, Func Offset: 0x5c
	// Line 684, Address: 0x2740d0, Func Offset: 0x60
	// Line 685, Address: 0x2740d4, Func Offset: 0x64
	// Line 687, Address: 0x2740d8, Func Offset: 0x68
	// Line 683, Address: 0x2740dc, Func Offset: 0x6c
	// Line 684, Address: 0x2740ec, Func Offset: 0x7c
	// Line 685, Address: 0x2740fc, Func Offset: 0x8c
	// Line 687, Address: 0x27410c, Func Offset: 0x9c
	// Line 689, Address: 0x274124, Func Offset: 0xb4
	// Line 691, Address: 0x274128, Func Offset: 0xb8
	// Line 689, Address: 0x274134, Func Offset: 0xc4
	// Line 690, Address: 0x274148, Func Offset: 0xd8
	// Line 691, Address: 0x27414c, Func Offset: 0xdc
	// Line 697, Address: 0x274204, Func Offset: 0x194
	// Line 691, Address: 0x27420c, Func Offset: 0x19c
	// Line 692, Address: 0x27422c, Func Offset: 0x1bc
	// Line 693, Address: 0x274230, Func Offset: 0x1c0
	// Line 694, Address: 0x274234, Func Offset: 0x1c4
	// Line 697, Address: 0x274238, Func Offset: 0x1c8
	// Line 702, Address: 0x274254, Func Offset: 0x1e4
	// Line 708, Address: 0x27425c, Func Offset: 0x1ec
	// Line 706, Address: 0x274260, Func Offset: 0x1f0
	// Line 707, Address: 0x274264, Func Offset: 0x1f4
	// Line 708, Address: 0x274268, Func Offset: 0x1f8
	// Line 710, Address: 0x274270, Func Offset: 0x200
	// Line 711, Address: 0x274274, Func Offset: 0x204
	// Func End, Address: 0x2742a4, Func Offset: 0x234
}

// OldWorldSectorForAllLinePolyIntersections__FP13RpWorldSectorP17PolyLineTestParam
// Start address: 0x2742b0
RpWorldSector* OldWorldSectorForAllLinePolyIntersections(RpWorldSector* worldSector, PolyLineTestParam* isData)
{
	float32 _result;
	float32 lengthSq;
	RpCollisionTriangle collTri;
	float32 v;
	float32 u;
	float32 hi;
	float32 lo;
	RwV3d edgetmp;
	float32 det;
	RwV3d edge1;
	int32 result;
	float32 distance;
	RwV3d* v2;
	RwV3d* v1;
	RwV3d* v0;
	float32 delta;
	RwSplitBits end;
	RwSplitBits start;
	float32 value;
	int32 plane;
	RpPolygon* poly;
	int32 polyOffset;
	int32 numPolygons;
	RwLine lineStack[16];
	RwLine line;
	int32 cutStack[16];
	int32 cut;
	int32 nStack;
	RwV3d* vertices;
	RpCollSector* collSector;
	CallBackParam* cbParam;
	// Line 534, Address: 0x2742b0, Func Offset: 0
	// Line 540, Address: 0x2742ec, Func Offset: 0x3c
	// Line 542, Address: 0x274304, Func Offset: 0x54
	// Line 544, Address: 0x274308, Func Offset: 0x58
	// Line 551, Address: 0x27430c, Func Offset: 0x5c
	// Line 550, Address: 0x274314, Func Offset: 0x64
	// Line 552, Address: 0x274318, Func Offset: 0x68
	// Line 551, Address: 0x27431c, Func Offset: 0x6c
	// Line 559, Address: 0x274358, Func Offset: 0xa8
	// Line 566, Address: 0x274378, Func Offset: 0xc8
	// Line 571, Address: 0x274380, Func Offset: 0xd0
	// Line 567, Address: 0x27438c, Func Offset: 0xdc
	// Line 572, Address: 0x274390, Func Offset: 0xe0
	// Line 567, Address: 0x274398, Func Offset: 0xe8
	// Line 571, Address: 0x2743b0, Func Offset: 0x100
	// Line 578, Address: 0x2743b4, Func Offset: 0x104
	// Line 571, Address: 0x2743b8, Func Offset: 0x108
	// Line 572, Address: 0x2743bc, Func Offset: 0x10c
	// Line 578, Address: 0x2743c0, Func Offset: 0x110
	// Line 572, Address: 0x2743c4, Func Offset: 0x114
	// Line 578, Address: 0x2743cc, Func Offset: 0x11c
	// Line 576, Address: 0x2743d0, Func Offset: 0x120
	// Line 578, Address: 0x2743d4, Func Offset: 0x124
	// Line 585, Address: 0x2743e4, Func Offset: 0x134
	// Line 589, Address: 0x2744b0, Func Offset: 0x200
	// Line 591, Address: 0x2744d8, Func Offset: 0x228
	// Line 592, Address: 0x2744f8, Func Offset: 0x248
	// Line 593, Address: 0x27451c, Func Offset: 0x26c
	// Line 594, Address: 0x274534, Func Offset: 0x284
	// Line 596, Address: 0x274538, Func Offset: 0x288
	// Line 597, Address: 0x274550, Func Offset: 0x2a0
	// Line 605, Address: 0x274558, Func Offset: 0x2a8
	// Line 602, Address: 0x274564, Func Offset: 0x2b4
	// Line 606, Address: 0x274568, Func Offset: 0x2b8
	// Line 607, Address: 0x274584, Func Offset: 0x2d4
	// Line 606, Address: 0x274588, Func Offset: 0x2d8
	// Line 608, Address: 0x2745c4, Func Offset: 0x314
	// Line 611, Address: 0x2745c8, Func Offset: 0x318
	// Line 612, Address: 0x2745d0, Func Offset: 0x320
	// Line 618, Address: 0x2745e0, Func Offset: 0x330
	// Line 624, Address: 0x2745e4, Func Offset: 0x334
	// Line 619, Address: 0x2745e8, Func Offset: 0x338
	// Line 624, Address: 0x2745ec, Func Offset: 0x33c
	// Line 620, Address: 0x2745f4, Func Offset: 0x344
	// Line 618, Address: 0x2745f8, Func Offset: 0x348
	// Line 619, Address: 0x274600, Func Offset: 0x350
	// Line 618, Address: 0x274608, Func Offset: 0x358
	// Line 619, Address: 0x27460c, Func Offset: 0x35c
	// Line 618, Address: 0x274610, Func Offset: 0x360
	// Line 619, Address: 0x274614, Func Offset: 0x364
	// Line 624, Address: 0x274618, Func Offset: 0x368
	// Line 620, Address: 0x274620, Func Offset: 0x370
	// Line 624, Address: 0x27462c, Func Offset: 0x37c
	// Line 620, Address: 0x274638, Func Offset: 0x388
	// Line 624, Address: 0x27463c, Func Offset: 0x38c
	// Line 626, Address: 0x2748b0, Func Offset: 0x600
	// Line 630, Address: 0x2748b8, Func Offset: 0x608
	// Line 632, Address: 0x2748c0, Func Offset: 0x610
	// Line 630, Address: 0x2748d0, Func Offset: 0x620
	// Line 631, Address: 0x2748dc, Func Offset: 0x62c
	// Line 632, Address: 0x2748e0, Func Offset: 0x630
	// Line 637, Address: 0x27499c, Func Offset: 0x6ec
	// Line 632, Address: 0x2749a4, Func Offset: 0x6f4
	// Line 633, Address: 0x2749c4, Func Offset: 0x714
	// Line 634, Address: 0x2749c8, Func Offset: 0x718
	// Line 635, Address: 0x2749cc, Func Offset: 0x71c
	// Line 637, Address: 0x2749d0, Func Offset: 0x720
	// Line 642, Address: 0x2749ec, Func Offset: 0x73c
	// Line 648, Address: 0x2749f4, Func Offset: 0x744
	// Line 646, Address: 0x2749f8, Func Offset: 0x748
	// Line 647, Address: 0x2749fc, Func Offset: 0x74c
	// Line 648, Address: 0x274a00, Func Offset: 0x750
	// Line 649, Address: 0x274a08, Func Offset: 0x758
	// Line 652, Address: 0x274a10, Func Offset: 0x760
	// Line 653, Address: 0x274a14, Func Offset: 0x764
	// Func End, Address: 0x274a54, Func Offset: 0x7a4
}

// WorldForAllBoxWorldSectorIntersections__FP7RpWorldP6RwBBoxPFP13RpWorldSectorPv_P13RpWorldSectorPv
// Start address: 0x274a60
RpWorld* WorldForAllBoxWorldSectorIntersections(RpWorld* world, RwBBox* box, RpWorldSector*(*callBack)(RpWorldSector*, void*), void* data)
{
	RpPlaneSector* plane;
	RpSector* sectorStack[64];
	RpSector* sector;
	int32 nStack;
	// Line 378, Address: 0x274a60, Func Offset: 0
	// Line 389, Address: 0x274a80, Func Offset: 0x20
	// Line 388, Address: 0x274a90, Func Offset: 0x30
	// Line 393, Address: 0x274a94, Func Offset: 0x34
	// Line 396, Address: 0x274aa0, Func Offset: 0x40
	// Line 399, Address: 0x274ab0, Func Offset: 0x50
	// Line 403, Address: 0x274ab8, Func Offset: 0x58
	// Line 404, Address: 0x274ac0, Func Offset: 0x60
	// Line 410, Address: 0x274ac8, Func Offset: 0x68
	// Line 415, Address: 0x274aec, Func Offset: 0x8c
	// Line 419, Address: 0x274b08, Func Offset: 0xa8
	// Line 421, Address: 0x274b18, Func Offset: 0xb8
	// Line 425, Address: 0x274b20, Func Offset: 0xc0
	// Line 428, Address: 0x274b28, Func Offset: 0xc8
	// Line 432, Address: 0x274b30, Func Offset: 0xd0
	// Func End, Address: 0x274b50, Func Offset: 0xf0
}

// WorldForAllLineWorldSectorIntersections__FP7RpWorldP6RwLineP13RpV3dGradientPFP13RpWorldSectorPv_P13RpWorldSectorPvP6RwLine
// Start address: 0x274b50
RpWorld* WorldForAllLineWorldSectorIntersections(RpWorld* world, RwLine* testLine, RpV3dGradient* grad, RpWorldSector*(*callBack)(RpWorldSector*, void*), void* data, RwLine* clippedLineOut)
{
	float32 delta;
	float32 delta;
	float32 delta;
	float32 delta;
	RwSplitBits rEnd;
	RwSplitBits rStart;
	RwSplitBits lEnd;
	RwSplitBits lStart;
	RpPlaneSector* plane;
	RwLine lineStack[64];
	RwLine line;
	RpSector* sectorStack[64];
	RpSector* sector;
	int32 nStack;
	// Line 183, Address: 0x274b50, Func Offset: 0
	// Line 207, Address: 0x274bb4, Func Offset: 0x64
	// Line 208, Address: 0x274bb8, Func Offset: 0x68
	// Line 206, Address: 0x274be4, Func Offset: 0x94
	// Line 208, Address: 0x274be8, Func Offset: 0x98
	// Line 212, Address: 0x274c0c, Func Offset: 0xbc
	// Line 215, Address: 0x274c18, Func Offset: 0xc8
	// Line 217, Address: 0x274c20, Func Offset: 0xd0
	// Line 221, Address: 0x274c50, Func Offset: 0x100
	// Line 224, Address: 0x274c60, Func Offset: 0x110
	// Line 228, Address: 0x274c68, Func Offset: 0x118
	// Line 229, Address: 0x274c70, Func Offset: 0x120
	// Line 230, Address: 0x274c88, Func Offset: 0x138
	// Line 229, Address: 0x274c8c, Func Offset: 0x13c
	// Line 231, Address: 0x274cb4, Func Offset: 0x164
	// Line 240, Address: 0x274cbc, Func Offset: 0x16c
	// Line 242, Address: 0x274cd4, Func Offset: 0x184
	// Line 240, Address: 0x274cd8, Func Offset: 0x188
	// Line 242, Address: 0x274cdc, Func Offset: 0x18c
	// Line 244, Address: 0x274ce8, Func Offset: 0x198
	// Line 250, Address: 0x274cf4, Func Offset: 0x1a4
	// Line 246, Address: 0x274cf8, Func Offset: 0x1a8
	// Line 250, Address: 0x274cfc, Func Offset: 0x1ac
	// Line 254, Address: 0x274d10, Func Offset: 0x1c0
	// Line 255, Address: 0x274d18, Func Offset: 0x1c8
	// Line 259, Address: 0x274d30, Func Offset: 0x1e0
	// Line 260, Address: 0x274d38, Func Offset: 0x1e8
	// Line 264, Address: 0x274d6c, Func Offset: 0x21c
	// Line 268, Address: 0x274d80, Func Offset: 0x230
	// Line 270, Address: 0x274dd8, Func Offset: 0x288
	// Line 275, Address: 0x274de0, Func Offset: 0x290
	// Line 278, Address: 0x274e38, Func Offset: 0x2e8
	// Line 281, Address: 0x274e40, Func Offset: 0x2f0
	// Line 289, Address: 0x274e74, Func Offset: 0x324
	// Line 291, Address: 0x274f20, Func Offset: 0x3d0
	// Line 295, Address: 0x274f2c, Func Offset: 0x3dc
	// Line 296, Address: 0x274f84, Func Offset: 0x434
	// Line 297, Address: 0x274f88, Func Offset: 0x438
	// Line 298, Address: 0x274f90, Func Offset: 0x440
	// Line 302, Address: 0x274f98, Func Offset: 0x448
	// Line 305, Address: 0x274fe4, Func Offset: 0x494
	// Line 306, Address: 0x274fec, Func Offset: 0x49c
	// Line 315, Address: 0x275020, Func Offset: 0x4d0
	// Line 317, Address: 0x2750d0, Func Offset: 0x580
	// Line 320, Address: 0x2750dc, Func Offset: 0x58c
	// Line 322, Address: 0x275128, Func Offset: 0x5d8
	// Line 327, Address: 0x275130, Func Offset: 0x5e0
	// Line 328, Address: 0x275188, Func Offset: 0x638
	// Line 329, Address: 0x27518c, Func Offset: 0x63c
	// Line 331, Address: 0x275194, Func Offset: 0x644
	// Line 340, Address: 0x27519c, Func Offset: 0x64c
	// Line 343, Address: 0x275250, Func Offset: 0x700
	// Line 345, Address: 0x275300, Func Offset: 0x7b0
	// Line 349, Address: 0x27530c, Func Offset: 0x7bc
	// Line 350, Address: 0x275358, Func Offset: 0x808
	// Line 351, Address: 0x27535c, Func Offset: 0x80c
	// Line 352, Address: 0x275364, Func Offset: 0x814
	// Line 356, Address: 0x27536c, Func Offset: 0x81c
	// Line 357, Address: 0x2753b8, Func Offset: 0x868
	// Line 358, Address: 0x2753bc, Func Offset: 0x86c
	// Line 363, Address: 0x2753c8, Func Offset: 0x878
	// Line 366, Address: 0x2753d0, Func Offset: 0x880
	// Line 367, Address: 0x2753d8, Func Offset: 0x888
	// Func End, Address: 0x275438, Func Offset: 0x8e8
}

