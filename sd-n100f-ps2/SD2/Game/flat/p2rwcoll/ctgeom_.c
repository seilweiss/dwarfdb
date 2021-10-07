typedef struct rxHeapSuperBlockDescriptor;
typedef struct GeomCallBack;
typedef struct RxPipelineNode;
typedef struct RwLLLink;
typedef struct RpIntersection;
typedef struct RpAtomic;
typedef struct RwV3d;
typedef struct RxPipelineNodeParam;
typedef struct LineCollParam;
typedef struct RpCollBSPBranchNode;
typedef struct RxPipelineNodeTopSortData;
typedef struct RpTriangle;
typedef struct RpGeometry;
typedef struct RwRaster;
typedef struct RxNodeDefinition;
typedef struct RpCollisionData;
typedef struct RxPipelineCluster;
typedef struct RwLine;
typedef struct rxHeapBlockHeader;
typedef struct RpMaterialList;
typedef struct RpMorphTarget;
typedef struct rxHeapFreeBlock;
typedef struct RwSphere;
typedef struct RwObject;
typedef struct RwTexDictionary;
typedef struct RpMaterial;
typedef struct RxClusterDefinition;
typedef enum RxClusterValidityReq;
typedef struct RwResEntry;
typedef struct SphereCollParam;
typedef struct RxPipelineRequiresCluster;
typedef struct RwLinkList;
typedef struct RxPipeline;
typedef enum RwTextureFilterMode;
typedef struct RpCollBSPTree;
typedef struct RpClump;
typedef struct RwRGBA;
typedef struct RwBBox;
typedef enum RxClusterValid;
typedef struct RwTexCoords;
typedef struct RwTexture;
typedef struct RpCollBSPLeafNode;
typedef struct BBoxCollParam;
typedef enum RpIntersectType;
typedef struct RxPacket;
typedef struct rxReq;
typedef struct RpV3dGradient;
typedef struct RpMeshHeader;
typedef struct RpCollisionTriangle;
typedef struct RxOutputSpec;
typedef struct RwSurfaceProperties;
typedef enum RxClusterForcePresent;
typedef struct RpIntersectData;
typedef struct RxClusterRef;
typedef enum RxNodeDefEditable;
typedef struct RpInterpolator;
typedef struct RxIoSpec;
typedef struct RwMatrixTag;
typedef struct RxNodeMethods;
typedef struct RxHeap;
typedef struct RxCluster;
typedef struct RwObjectHasFrame;
typedef enum RwTextureAddressMode;
typedef enum rxEmbeddedPacketState;

typedef RwObjectHasFrame*(*type_0)(RwObjectHasFrame*);
typedef RpCollisionTriangle*(*type_1)(RpIntersection*, RpCollisionTriangle*, float32, void*);
typedef RpClump*(*type_2)(RpClump*, void*);
typedef int32(*type_3)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int32(*type_5)(RxNodeDefinition*);
typedef void(*type_6)(RxNodeDefinition*);
typedef int32(*type_7)(RxPipelineNode*);
typedef RpAtomic*(*type_8)(RpAtomic*);
typedef void(*type_9)(RxPipelineNode*);
typedef int32(*type_10)(RxPipelineNode*, RxPipeline*);
typedef void(*type_12)(RwResEntry*);
typedef uint32(*type_13)(RxPipelineNode*, uint32, uint32, void*);
typedef int32(*type_16)(int32, int32, void*);
typedef int32(*type_21)(int32, int32, void*);
typedef int32(*type_23)(int32, int32, void*);

typedef RwV3d* type_4[3];
typedef RxCluster type_11[1];
typedef uint8 type_14[4];
typedef uint32 type_15[4];
typedef uint16 type_17[3];
typedef int8 type_18[66];
typedef int8 type_19[32];
typedef int8 type_20[32];
typedef RwTexCoords* type_22[8];

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct GeomCallBack
{
	RpIntersection* intersection;
	RpCollisionTriangle*(*func)(RpIntersection*, RpCollisionTriangle*, float32, void*);
	void* data;
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

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct RpIntersection
{
	RpIntersectData t;
	RpIntersectType type;
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

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct LineCollParam
{
	RpGeometry* geometry;
	GeomCallBack* callBack;
	RwLine* line;
	RwV3d delta;
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

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
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

struct RpCollisionData
{
	int32 flags;
	RpCollBSPTree* tree;
	int32 numTriangles;
	uint16* triangleMap;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

struct RwLine
{
	RwV3d start;
	RwV3d end;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
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

struct RwSphere
{
	RwV3d center;
	float32 radius;
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

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
};

struct SphereCollParam
{
	RpGeometry* geometry;
	GeomCallBack* callBack;
	RwSphere* sphere;
	float32 recipRadius;
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

struct RpCollBSPTree
{
	uint32 numLeafNodes;
	RpCollBSPBranchNode* branchNodes;
	RpCollBSPLeafNode* leafNodes;
	uint8 pad[4];
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

struct RpCollBSPLeafNode
{
	uint16 numPolygons;
	uint16 firstPolygon;
};

struct BBoxCollParam
{
	RpGeometry* geometry;
	GeomCallBack* callBack;
	RwBBox* bbox;
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

struct rxReq
{
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

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct RpCollisionTriangle
{
	RwV3d normal;
	RwV3d point;
	int32 index;
	RwV3d* vertices[3];
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

int8 rcsid[66];
int32 _rpCollisionGeometryDataOffset;
int32(*GeomLeafNodeForAllBBoxIntersections)(int32, int32, void*);
int32(*GeomLeafNodeForAllSphereIntersections)(int32, int32, void*);
int32(*GeomLeafNodeForAllLineIntersections)(int32, int32, void*);

RpAtomic* RpAtomicForAllIntersections(RpAtomic* atomic, RpIntersection* intersection, RpCollisionTriangle*(*callBack)(RpIntersection*, RpCollisionTriangle*, float32, void*), void* data);
RpAtomic* AtomicForAllSphereIntersections(RpAtomic* atomic, RwSphere* testSphere, GeomCallBack* cb);
RpAtomic* AtomicForAllLineIntersections(RpAtomic* atomic, RwLine* testLine, GeomCallBack* cb);
RpGeometry* GeometryForAllSphereIntersections(RpGeometry* geometry, RwSphere* testSphere, GeomCallBack* cb);
RpGeometry* GeometryForAllLineIntersections(RpGeometry* geometry, RwLine* testLine, GeomCallBack* cb);
int32 GeomLeafNodeForAllSphereIntersections(int32 numTriangles, int32 triOffset, void* data);
int32 GeomLeafNodeForAllLineIntersections(int32 numTriangles, int32 triOffset, void* data);

// 
// Start address: 0x271370
RpAtomic* RpAtomicForAllIntersections(RpAtomic* atomic, RpIntersection* intersection, RpCollisionTriangle*(*callBack)(RpIntersection*, RpCollisionTriangle*, float32, void*), void* data)
{
	RwSphere* boundingSphere;
	RpAtomic* intersectionAtomic;
	GeomCallBack cb;
	// Line 1151, Address: 0x271370, Func Offset: 0
	// Line 1160, Address: 0x27137c, Func Offset: 0xc
	// Line 1161, Address: 0x271380, Func Offset: 0x10
	// Line 1162, Address: 0x271384, Func Offset: 0x14
	// Line 1169, Address: 0x271388, Func Offset: 0x18
	// Line 1174, Address: 0x2713b8, Func Offset: 0x48
	// Line 1178, Address: 0x2713c0, Func Offset: 0x50
	// Line 1184, Address: 0x2713c8, Func Offset: 0x58
	// Line 1188, Address: 0x2713d0, Func Offset: 0x60
	// Line 1195, Address: 0x2713d8, Func Offset: 0x68
	// Line 1198, Address: 0x2713dc, Func Offset: 0x6c
	// Line 1205, Address: 0x2713e4, Func Offset: 0x74
	// Line 1210, Address: 0x2713ec, Func Offset: 0x7c
	// Line 1214, Address: 0x2713fc, Func Offset: 0x8c
	// Line 1231, Address: 0x271404, Func Offset: 0x94
	// Func End, Address: 0x271414, Func Offset: 0xa4
}

// AtomicForAllSphereIntersections__FP8RpAtomicPC8RwSphereP12GeomCallBack
// Start address: 0x271420
RpAtomic* AtomicForAllSphereIntersections(RpAtomic* atomic, RwSphere* testSphere, GeomCallBack* cb)
{
	RwV3d* endVert;
	RwV3d* startVert;
	RpCollisionTriangle collisionTri;
	float32 distance;
	RpTriangle* triangle;
	int32 iTri;
	float32 recipSphereRad;
	float32 blendFactor;
	RwV3d* endFramePoints;
	RwV3d* startFramePoints;
	RpInterpolator* interpolator;
	RwV3d* vp2;
	RwV3d* vp1;
	RwV3d* vp0;
	RwV3d v2;
	RwV3d v1;
	RwV3d v0;
	float32 _result;
	float32 scaleSq;
	RwMatrixTag inverseLTM;
	RwSphere localSphere;
	RpGeometry* geom;
	// Line 721, Address: 0x271420, Func Offset: 0
	// Line 722, Address: 0x271458, Func Offset: 0x38
	// Line 736, Address: 0x27145c, Func Offset: 0x3c
	// Line 737, Address: 0x271468, Func Offset: 0x48
	// Line 741, Address: 0x271480, Func Offset: 0x60
	// Line 745, Address: 0x271494, Func Offset: 0x74
	// Line 747, Address: 0x2714a0, Func Offset: 0x80
	// Line 750, Address: 0x2714a8, Func Offset: 0x88
	// Line 745, Address: 0x2714ac, Func Offset: 0x8c
	// Line 746, Address: 0x2714bc, Func Offset: 0x9c
	// Line 747, Address: 0x2714c0, Func Offset: 0xa0
	// Line 750, Address: 0x2714c8, Func Offset: 0xa8
	// Line 753, Address: 0x2714d4, Func Offset: 0xb4
	// Line 755, Address: 0x2714ec, Func Offset: 0xcc
	// Line 765, Address: 0x2714f4, Func Offset: 0xd4
	// Line 772, Address: 0x2714f8, Func Offset: 0xd8
	// Line 762, Address: 0x2714fc, Func Offset: 0xdc
	// Line 763, Address: 0x271500, Func Offset: 0xe0
	// Line 764, Address: 0x271504, Func Offset: 0xe4
	// Line 768, Address: 0x271508, Func Offset: 0xe8
	// Line 765, Address: 0x27150c, Func Offset: 0xec
	// Line 772, Address: 0x271510, Func Offset: 0xf0
	// Line 775, Address: 0x271520, Func Offset: 0x100
	// Line 772, Address: 0x271528, Func Offset: 0x108
	// Line 775, Address: 0x271530, Func Offset: 0x110
	// Line 781, Address: 0x271550, Func Offset: 0x130
	// Line 786, Address: 0x271564, Func Offset: 0x144
	// Line 789, Address: 0x271578, Func Offset: 0x158
	// Line 793, Address: 0x271580, Func Offset: 0x160
	// Line 796, Address: 0x27158c, Func Offset: 0x16c
	// Line 801, Address: 0x271594, Func Offset: 0x174
	// Line 803, Address: 0x2715a4, Func Offset: 0x184
	// Line 801, Address: 0x2715ac, Func Offset: 0x18c
	// Line 803, Address: 0x2715b0, Func Offset: 0x190
	// Line 801, Address: 0x2715b4, Func Offset: 0x194
	// Line 803, Address: 0x2715b8, Func Offset: 0x198
	// Line 805, Address: 0x2715bc, Func Offset: 0x19c
	// Line 801, Address: 0x2715c4, Func Offset: 0x1a4
	// Line 803, Address: 0x2715c8, Func Offset: 0x1a8
	// Line 809, Address: 0x2715cc, Func Offset: 0x1ac
	// Line 810, Address: 0x2715d0, Func Offset: 0x1b0
	// Line 811, Address: 0x2715d4, Func Offset: 0x1b4
	// Line 805, Address: 0x2715d8, Func Offset: 0x1b8
	// Line 817, Address: 0x2715dc, Func Offset: 0x1bc
	// Line 819, Address: 0x2715e0, Func Offset: 0x1c0
	// Line 824, Address: 0x2715e8, Func Offset: 0x1c8
	// Line 827, Address: 0x2715f0, Func Offset: 0x1d0
	// Line 828, Address: 0x2715f4, Func Offset: 0x1d4
	// Line 829, Address: 0x2715f8, Func Offset: 0x1d8
	// Line 827, Address: 0x2715fc, Func Offset: 0x1dc
	// Line 828, Address: 0x27160c, Func Offset: 0x1ec
	// Line 829, Address: 0x27161c, Func Offset: 0x1fc
	// Line 830, Address: 0x271628, Func Offset: 0x208
	// Line 836, Address: 0x271630, Func Offset: 0x210
	// Line 839, Address: 0x271634, Func Offset: 0x214
	// Line 846, Address: 0x27163c, Func Offset: 0x21c
	// Line 853, Address: 0x271644, Func Offset: 0x224
	// Line 836, Address: 0x271648, Func Offset: 0x228
	// Line 838, Address: 0x271658, Func Offset: 0x238
	// Line 839, Address: 0x27165c, Func Offset: 0x23c
	// Line 853, Address: 0x271664, Func Offset: 0x244
	// Line 839, Address: 0x271668, Func Offset: 0x248
	// Line 840, Address: 0x271690, Func Offset: 0x270
	// Line 841, Address: 0x2716b4, Func Offset: 0x294
	// Line 843, Address: 0x2716e4, Func Offset: 0x2c4
	// Line 845, Address: 0x2716f8, Func Offset: 0x2d8
	// Line 846, Address: 0x2716fc, Func Offset: 0x2dc
	// Line 847, Address: 0x27172c, Func Offset: 0x30c
	// Line 848, Address: 0x271750, Func Offset: 0x330
	// Line 850, Address: 0x271780, Func Offset: 0x360
	// Line 852, Address: 0x271794, Func Offset: 0x374
	// Line 853, Address: 0x271798, Func Offset: 0x378
	// Line 854, Address: 0x2717c8, Func Offset: 0x3a8
	// Line 855, Address: 0x2717ec, Func Offset: 0x3cc
	// Line 856, Address: 0x27181c, Func Offset: 0x3fc
	// Line 860, Address: 0x271820, Func Offset: 0x400
	// Line 867, Address: 0x271844, Func Offset: 0x424
	// Line 874, Address: 0x271848, Func Offset: 0x428
	// Line 867, Address: 0x27184c, Func Offset: 0x42c
	// Line 874, Address: 0x271854, Func Offset: 0x434
	// Line 867, Address: 0x271858, Func Offset: 0x438
	// Line 868, Address: 0x271864, Func Offset: 0x444
	// Line 869, Address: 0x271868, Func Offset: 0x448
	// Line 870, Address: 0x27186c, Func Offset: 0x44c
	// Line 874, Address: 0x271870, Func Offset: 0x450
	// Line 871, Address: 0x271874, Func Offset: 0x454
	// Line 876, Address: 0x271878, Func Offset: 0x458
	// Line 880, Address: 0x271898, Func Offset: 0x478
	// Line 884, Address: 0x2718a0, Func Offset: 0x480
	// Line 885, Address: 0x2718a4, Func Offset: 0x484
	// Line 889, Address: 0x2718b8, Func Offset: 0x498
	// Line 890, Address: 0x2718c0, Func Offset: 0x4a0
	// Func End, Address: 0x2718f8, Func Offset: 0x4d8
}

// AtomicForAllLineIntersections__FP8RpAtomicP6RwLineP12GeomCallBack
// Start address: 0x271900
RpAtomic* AtomicForAllLineIntersections(RpAtomic* atomic, RwLine* testLine, GeomCallBack* cb)
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
	RwV3d* endVert;
	RwV3d* startVert;
	int32 result;
	float32 distance;
	RpTriangle* triangle;
	int32 iTri;
	float32 blendFactor;
	RwV3d* endFramePoints;
	RwV3d* startFramePoints;
	RpInterpolator* interpolator;
	RwV3d* vp2;
	RwV3d* vp1;
	RwV3d* vp0;
	RwV3d v2;
	RwV3d v1;
	RwV3d v0;
	RwMatrixTag inverseLTM;
	RwLine localLine;
	RpGeometry* geom;
	// Line 548, Address: 0x271900, Func Offset: 0
	// Line 549, Address: 0x271948, Func Offset: 0x48
	// Line 561, Address: 0x27194c, Func Offset: 0x4c
	// Line 562, Address: 0x271958, Func Offset: 0x58
	// Line 564, Address: 0x271970, Func Offset: 0x70
	// Line 568, Address: 0x271984, Func Offset: 0x84
	// Line 571, Address: 0x271994, Func Offset: 0x94
	// Line 573, Address: 0x2719a8, Func Offset: 0xa8
	// Line 584, Address: 0x2719b0, Func Offset: 0xb0
	// Line 590, Address: 0x2719b4, Func Offset: 0xb4
	// Line 587, Address: 0x2719c4, Func Offset: 0xc4
	// Line 584, Address: 0x2719c8, Func Offset: 0xc8
	// Line 590, Address: 0x2719cc, Func Offset: 0xcc
	// Line 581, Address: 0x2719d8, Func Offset: 0xd8
	// Line 582, Address: 0x2719dc, Func Offset: 0xdc
	// Line 583, Address: 0x2719e0, Func Offset: 0xe0
	// Line 590, Address: 0x2719e4, Func Offset: 0xe4
	// Line 593, Address: 0x2719f0, Func Offset: 0xf0
	// Line 599, Address: 0x271a1c, Func Offset: 0x11c
	// Line 604, Address: 0x271a30, Func Offset: 0x130
	// Line 607, Address: 0x271a44, Func Offset: 0x144
	// Line 611, Address: 0x271a4c, Func Offset: 0x14c
	// Line 614, Address: 0x271a58, Func Offset: 0x158
	// Line 620, Address: 0x271a60, Func Offset: 0x160
	// Line 622, Address: 0x271a70, Func Offset: 0x170
	// Line 620, Address: 0x271a78, Func Offset: 0x178
	// Line 622, Address: 0x271a7c, Func Offset: 0x17c
	// Line 620, Address: 0x271a80, Func Offset: 0x180
	// Line 622, Address: 0x271a84, Func Offset: 0x184
	// Line 624, Address: 0x271a88, Func Offset: 0x188
	// Line 620, Address: 0x271a90, Func Offset: 0x190
	// Line 622, Address: 0x271a94, Func Offset: 0x194
	// Line 628, Address: 0x271a98, Func Offset: 0x198
	// Line 629, Address: 0x271a9c, Func Offset: 0x19c
	// Line 630, Address: 0x271aa0, Func Offset: 0x1a0
	// Line 624, Address: 0x271aa4, Func Offset: 0x1a4
	// Line 636, Address: 0x271aa8, Func Offset: 0x1a8
	// Line 638, Address: 0x271aac, Func Offset: 0x1ac
	// Line 643, Address: 0x271ab4, Func Offset: 0x1b4
	// Line 646, Address: 0x271abc, Func Offset: 0x1bc
	// Line 647, Address: 0x271ac0, Func Offset: 0x1c0
	// Line 648, Address: 0x271ac4, Func Offset: 0x1c4
	// Line 646, Address: 0x271ac8, Func Offset: 0x1c8
	// Line 647, Address: 0x271ad8, Func Offset: 0x1d8
	// Line 648, Address: 0x271ae8, Func Offset: 0x1e8
	// Line 649, Address: 0x271af4, Func Offset: 0x1f4
	// Line 655, Address: 0x271afc, Func Offset: 0x1fc
	// Line 658, Address: 0x271b00, Func Offset: 0x200
	// Line 665, Address: 0x271b08, Func Offset: 0x208
	// Line 672, Address: 0x271b10, Func Offset: 0x210
	// Line 655, Address: 0x271b14, Func Offset: 0x214
	// Line 657, Address: 0x271b24, Func Offset: 0x224
	// Line 658, Address: 0x271b28, Func Offset: 0x228
	// Line 672, Address: 0x271b30, Func Offset: 0x230
	// Line 658, Address: 0x271b34, Func Offset: 0x234
	// Line 659, Address: 0x271b5c, Func Offset: 0x25c
	// Line 660, Address: 0x271b80, Func Offset: 0x280
	// Line 662, Address: 0x271bb0, Func Offset: 0x2b0
	// Line 664, Address: 0x271bc4, Func Offset: 0x2c4
	// Line 665, Address: 0x271bc8, Func Offset: 0x2c8
	// Line 666, Address: 0x271bf8, Func Offset: 0x2f8
	// Line 667, Address: 0x271c1c, Func Offset: 0x31c
	// Line 669, Address: 0x271c4c, Func Offset: 0x34c
	// Line 671, Address: 0x271c60, Func Offset: 0x360
	// Line 672, Address: 0x271c64, Func Offset: 0x364
	// Line 673, Address: 0x271c94, Func Offset: 0x394
	// Line 674, Address: 0x271cb8, Func Offset: 0x3b8
	// Line 681, Address: 0x271ce8, Func Offset: 0x3e8
	// Line 683, Address: 0x271f78, Func Offset: 0x678
	// Line 689, Address: 0x271f80, Func Offset: 0x680
	// Line 697, Address: 0x27200c, Func Offset: 0x70c
	// Line 689, Address: 0x272010, Func Offset: 0x710
	// Line 690, Address: 0x272030, Func Offset: 0x730
	// Line 691, Address: 0x272048, Func Offset: 0x748
	// Line 692, Address: 0x27204c, Func Offset: 0x74c
	// Line 693, Address: 0x272050, Func Offset: 0x750
	// Line 694, Address: 0x272054, Func Offset: 0x754
	// Line 697, Address: 0x272058, Func Offset: 0x758
	// Line 701, Address: 0x272074, Func Offset: 0x774
	// Line 705, Address: 0x27207c, Func Offset: 0x77c
	// Line 706, Address: 0x272080, Func Offset: 0x780
	// Line 710, Address: 0x272098, Func Offset: 0x798
	// Line 711, Address: 0x2720a0, Func Offset: 0x7a0
	// Func End, Address: 0x2720e8, Func Offset: 0x7e8
}

// GeometryForAllSphereIntersections__FP10RpGeometryP8RwSphereP12GeomCallBack
// Start address: 0x2720f0
RpGeometry* GeometryForAllSphereIntersections(RpGeometry* geometry, RwSphere* testSphere, GeomCallBack* cb)
{
	RpCollisionTriangle collisionTri;
	float32 distance;
	RwV3d* v2;
	RwV3d* v1;
	RwV3d* v0;
	int32 iTri;
	float32 recipRadius;
	RpTriangle* triangle;
	RwV3d* vertices;
	SphereCollParam isData;
	RwBBox bbox;
	RpCollisionData* collData;
	// Line 376, Address: 0x2720f0, Func Offset: 0
	// Line 377, Address: 0x272120, Func Offset: 0x30
	// Line 385, Address: 0x272134, Func Offset: 0x44
	// Line 392, Address: 0x27213c, Func Offset: 0x4c
	// Line 393, Address: 0x272140, Func Offset: 0x50
	// Line 394, Address: 0x272144, Func Offset: 0x54
	// Line 395, Address: 0x272148, Func Offset: 0x58
	// Line 398, Address: 0x272154, Func Offset: 0x64
	// Line 401, Address: 0x272158, Func Offset: 0x68
	// Line 398, Address: 0x27215c, Func Offset: 0x6c
	// Line 395, Address: 0x272160, Func Offset: 0x70
	// Line 398, Address: 0x272164, Func Offset: 0x74
	// Line 401, Address: 0x272170, Func Offset: 0x80
	// Line 395, Address: 0x272178, Func Offset: 0x88
	// Line 398, Address: 0x27217c, Func Offset: 0x8c
	// Line 401, Address: 0x27220c, Func Offset: 0x11c
	// Line 403, Address: 0x272218, Func Offset: 0x128
	// Line 413, Address: 0x272220, Func Offset: 0x130
	// Line 407, Address: 0x27222c, Func Offset: 0x13c
	// Line 408, Address: 0x272230, Func Offset: 0x140
	// Line 415, Address: 0x272234, Func Offset: 0x144
	// Line 413, Address: 0x272238, Func Offset: 0x148
	// Line 407, Address: 0x27223c, Func Offset: 0x14c
	// Line 413, Address: 0x272240, Func Offset: 0x150
	// Line 415, Address: 0x272248, Func Offset: 0x158
	// Line 422, Address: 0x272250, Func Offset: 0x160
	// Line 423, Address: 0x272254, Func Offset: 0x164
	// Line 424, Address: 0x272258, Func Offset: 0x168
	// Line 427, Address: 0x27225c, Func Offset: 0x16c
	// Line 422, Address: 0x272268, Func Offset: 0x178
	// Line 423, Address: 0x272278, Func Offset: 0x188
	// Line 424, Address: 0x272288, Func Offset: 0x198
	// Line 427, Address: 0x272298, Func Offset: 0x1a8
	// Line 433, Address: 0x2722b0, Func Offset: 0x1c0
	// Line 440, Address: 0x2722b4, Func Offset: 0x1c4
	// Line 433, Address: 0x2722b8, Func Offset: 0x1c8
	// Line 440, Address: 0x2722c0, Func Offset: 0x1d0
	// Line 433, Address: 0x2722c4, Func Offset: 0x1d4
	// Line 434, Address: 0x2722d0, Func Offset: 0x1e0
	// Line 435, Address: 0x2722d4, Func Offset: 0x1e4
	// Line 436, Address: 0x2722d8, Func Offset: 0x1e8
	// Line 440, Address: 0x2722dc, Func Offset: 0x1ec
	// Line 437, Address: 0x2722e0, Func Offset: 0x1f0
	// Line 442, Address: 0x2722e4, Func Offset: 0x1f4
	// Line 447, Address: 0x272304, Func Offset: 0x214
	// Line 450, Address: 0x27230c, Func Offset: 0x21c
	// Line 453, Address: 0x272328, Func Offset: 0x238
	// Line 454, Address: 0x27232c, Func Offset: 0x23c
	// Func End, Address: 0x272360, Func Offset: 0x270
}

// GeometryForAllLineIntersections__FP10RpGeometryP6RwLineP12GeomCallBack
// Start address: 0x272360
RpGeometry* GeometryForAllLineIntersections(RpGeometry* geometry, RwLine* testLine, GeomCallBack* cb)
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
	int32 iTri;
	RpTriangle* triangle;
	RwV3d* vertices;
	LineCollParam isData;
	RpV3dGradient grad;
	RpCollisionData* collData;
	// Line 281, Address: 0x272360, Func Offset: 0
	// Line 282, Address: 0x272390, Func Offset: 0x30
	// Line 290, Address: 0x2723a4, Func Offset: 0x44
	// Line 297, Address: 0x2723ac, Func Offset: 0x4c
	// Line 298, Address: 0x2723b0, Func Offset: 0x50
	// Line 299, Address: 0x2723b4, Func Offset: 0x54
	// Line 302, Address: 0x2723b8, Func Offset: 0x58
	// Line 303, Address: 0x2723cc, Func Offset: 0x6c
	// Line 302, Address: 0x2723d0, Func Offset: 0x70
	// Line 303, Address: 0x2723f8, Func Offset: 0x98
	// Line 306, Address: 0x2724a8, Func Offset: 0x148
	// Line 303, Address: 0x2724b8, Func Offset: 0x158
	// Line 306, Address: 0x2724c4, Func Offset: 0x164
	// Line 310, Address: 0x2724d0, Func Offset: 0x170
	// Line 314, Address: 0x2724d8, Func Offset: 0x178
	// Line 320, Address: 0x2724dc, Func Offset: 0x17c
	// Line 315, Address: 0x2724f4, Func Offset: 0x194
	// Line 314, Address: 0x2724f8, Func Offset: 0x198
	// Line 320, Address: 0x2724fc, Func Offset: 0x19c
	// Line 322, Address: 0x272500, Func Offset: 0x1a0
	// Line 320, Address: 0x272504, Func Offset: 0x1a4
	// Line 322, Address: 0x272508, Func Offset: 0x1a8
	// Line 329, Address: 0x272510, Func Offset: 0x1b0
	// Line 336, Address: 0x272514, Func Offset: 0x1b4
	// Line 330, Address: 0x272518, Func Offset: 0x1b8
	// Line 336, Address: 0x27251c, Func Offset: 0x1bc
	// Line 331, Address: 0x272524, Func Offset: 0x1c4
	// Line 329, Address: 0x272528, Func Offset: 0x1c8
	// Line 330, Address: 0x272530, Func Offset: 0x1d0
	// Line 329, Address: 0x272538, Func Offset: 0x1d8
	// Line 330, Address: 0x27253c, Func Offset: 0x1dc
	// Line 329, Address: 0x272540, Func Offset: 0x1e0
	// Line 330, Address: 0x272544, Func Offset: 0x1e4
	// Line 336, Address: 0x272548, Func Offset: 0x1e8
	// Line 331, Address: 0x272550, Func Offset: 0x1f0
	// Line 336, Address: 0x27255c, Func Offset: 0x1fc
	// Line 331, Address: 0x272568, Func Offset: 0x208
	// Line 336, Address: 0x27256c, Func Offset: 0x20c
	// Line 338, Address: 0x2727d0, Func Offset: 0x470
	// Line 343, Address: 0x2727d8, Func Offset: 0x478
	// Line 346, Address: 0x2727e0, Func Offset: 0x480
	// Line 343, Address: 0x2727f0, Func Offset: 0x490
	// Line 344, Address: 0x2727fc, Func Offset: 0x49c
	// Line 346, Address: 0x272800, Func Offset: 0x4a0
	// Line 351, Address: 0x2728bc, Func Offset: 0x55c
	// Line 346, Address: 0x2728c0, Func Offset: 0x560
	// Line 347, Address: 0x2728e0, Func Offset: 0x580
	// Line 348, Address: 0x2728e4, Func Offset: 0x584
	// Line 349, Address: 0x2728e8, Func Offset: 0x588
	// Line 351, Address: 0x2728ec, Func Offset: 0x58c
	// Line 356, Address: 0x272908, Func Offset: 0x5a8
	// Line 359, Address: 0x272910, Func Offset: 0x5b0
	// Line 362, Address: 0x272928, Func Offset: 0x5c8
	// Line 363, Address: 0x27292c, Func Offset: 0x5cc
	// Func End, Address: 0x272960, Func Offset: 0x600
}

// GeomLeafNodeForAllSphereIntersections__FiiPv
// Start address: 0x272960
int32 GeomLeafNodeForAllSphereIntersections(int32 numTriangles, int32 triOffset, void* data)
{
	RpCollisionTriangle collisionTri;
	float32 distance;
	RwV3d* v2;
	RwV3d* v1;
	RwV3d* v0;
	RpTriangle* tri;
	uint16* triIndex;
	GeomCallBack* cb;
	RpTriangle* triangles;
	RwV3d* vertices;
	RpGeometry* geometry;
	SphereCollParam* isData;
	// Line 155, Address: 0x272960, Func Offset: 0
	// Line 157, Address: 0x27298c, Func Offset: 0x2c
	// Line 161, Address: 0x272990, Func Offset: 0x30
	// Line 169, Address: 0x27299c, Func Offset: 0x3c
	// Line 160, Address: 0x2729a0, Func Offset: 0x40
	// Line 158, Address: 0x2729a4, Func Offset: 0x44
	// Line 161, Address: 0x2729a8, Func Offset: 0x48
	// Line 159, Address: 0x2729b0, Func Offset: 0x50
	// Line 156, Address: 0x2729b4, Func Offset: 0x54
	// Line 169, Address: 0x2729b8, Func Offset: 0x58
	// Line 158, Address: 0x2729bc, Func Offset: 0x5c
	// Line 161, Address: 0x2729c0, Func Offset: 0x60
	// Line 169, Address: 0x2729c4, Func Offset: 0x64
	// Line 177, Address: 0x2729cc, Func Offset: 0x6c
	// Line 183, Address: 0x2729d0, Func Offset: 0x70
	// Line 177, Address: 0x2729dc, Func Offset: 0x7c
	// Line 178, Address: 0x2729e4, Func Offset: 0x84
	// Line 179, Address: 0x2729e8, Func Offset: 0x88
	// Line 180, Address: 0x2729ec, Func Offset: 0x8c
	// Line 178, Address: 0x2729f0, Func Offset: 0x90
	// Line 179, Address: 0x272a00, Func Offset: 0xa0
	// Line 180, Address: 0x272a10, Func Offset: 0xb0
	// Line 183, Address: 0x272a20, Func Offset: 0xc0
	// Line 189, Address: 0x272a38, Func Offset: 0xd8
	// Line 196, Address: 0x272a3c, Func Offset: 0xdc
	// Line 189, Address: 0x272a40, Func Offset: 0xe0
	// Line 190, Address: 0x272a54, Func Offset: 0xf4
	// Line 191, Address: 0x272a5c, Func Offset: 0xfc
	// Line 192, Address: 0x272a60, Func Offset: 0x100
	// Line 193, Address: 0x272a64, Func Offset: 0x104
	// Line 196, Address: 0x272a68, Func Offset: 0x108
	// Line 198, Address: 0x272a74, Func Offset: 0x114
	// Line 203, Address: 0x272a94, Func Offset: 0x134
	// Line 208, Address: 0x272a9c, Func Offset: 0x13c
	// Line 207, Address: 0x272aa0, Func Offset: 0x140
	// Line 208, Address: 0x272aa4, Func Offset: 0x144
	// Line 210, Address: 0x272ab0, Func Offset: 0x150
	// Line 211, Address: 0x272ab4, Func Offset: 0x154
	// Func End, Address: 0x272ae4, Func Offset: 0x184
}

// GeomLeafNodeForAllLineIntersections__FiiPv
// Start address: 0x272af0
int32 GeomLeafNodeForAllLineIntersections(int32 numTriangles, int32 triOffset, void* data)
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
	RpTriangle* tri;
	uint16* triIndex;
	GeomCallBack* cb;
	RpTriangle* triangles;
	RwV3d* vertices;
	RpGeometry* geometry;
	LineCollParam* isData;
	// Line 88, Address: 0x272af0, Func Offset: 0
	// Line 90, Address: 0x272b14, Func Offset: 0x24
	// Line 94, Address: 0x272b18, Func Offset: 0x28
	// Line 102, Address: 0x272b24, Func Offset: 0x34
	// Line 93, Address: 0x272b28, Func Offset: 0x38
	// Line 91, Address: 0x272b2c, Func Offset: 0x3c
	// Line 94, Address: 0x272b30, Func Offset: 0x40
	// Line 92, Address: 0x272b38, Func Offset: 0x48
	// Line 89, Address: 0x272b3c, Func Offset: 0x4c
	// Line 102, Address: 0x272b40, Func Offset: 0x50
	// Line 91, Address: 0x272b44, Func Offset: 0x54
	// Line 94, Address: 0x272b48, Func Offset: 0x58
	// Line 102, Address: 0x272b4c, Func Offset: 0x5c
	// Line 110, Address: 0x272b54, Func Offset: 0x64
	// Line 118, Address: 0x272b58, Func Offset: 0x68
	// Line 110, Address: 0x272b6c, Func Offset: 0x7c
	// Line 111, Address: 0x272b74, Func Offset: 0x84
	// Line 112, Address: 0x272b78, Func Offset: 0x88
	// Line 113, Address: 0x272b7c, Func Offset: 0x8c
	// Line 111, Address: 0x272b80, Func Offset: 0x90
	// Line 112, Address: 0x272b88, Func Offset: 0x98
	// Line 111, Address: 0x272b90, Func Offset: 0xa0
	// Line 112, Address: 0x272b94, Func Offset: 0xa4
	// Line 111, Address: 0x272b98, Func Offset: 0xa8
	// Line 112, Address: 0x272b9c, Func Offset: 0xac
	// Line 118, Address: 0x272ba0, Func Offset: 0xb0
	// Line 113, Address: 0x272ba8, Func Offset: 0xb8
	// Line 118, Address: 0x272bb8, Func Offset: 0xc8
	// Line 120, Address: 0x272e30, Func Offset: 0x340
	// Line 125, Address: 0x272e38, Func Offset: 0x348
	// Line 127, Address: 0x272e40, Func Offset: 0x350
	// Line 125, Address: 0x272e50, Func Offset: 0x360
	// Line 126, Address: 0x272e5c, Func Offset: 0x36c
	// Line 127, Address: 0x272e64, Func Offset: 0x374
	// Line 133, Address: 0x272f1c, Func Offset: 0x42c
	// Line 127, Address: 0x272f20, Func Offset: 0x430
	// Line 128, Address: 0x272f40, Func Offset: 0x450
	// Line 129, Address: 0x272f44, Func Offset: 0x454
	// Line 130, Address: 0x272f48, Func Offset: 0x458
	// Line 133, Address: 0x272f4c, Func Offset: 0x45c
	// Line 138, Address: 0x272f68, Func Offset: 0x478
	// Line 143, Address: 0x272f70, Func Offset: 0x480
	// Line 142, Address: 0x272f74, Func Offset: 0x484
	// Line 143, Address: 0x272f78, Func Offset: 0x488
	// Line 145, Address: 0x272f80, Func Offset: 0x490
	// Line 146, Address: 0x272f84, Func Offset: 0x494
	// Func End, Address: 0x272fac, Func Offset: 0x4bc
}

