typedef struct tagXStreamMDSDirectory;
typedef struct tagP2Weight;
typedef struct xSkel;
typedef struct tagiSkelResource;
typedef struct tagiModelResource;
typedef struct tagiSkelRuntime;
typedef struct tagMATRIX;
typedef struct tagP2Mesh;
typedef struct XStreamHeader;
typedef struct Vector3D;
typedef struct tagiModelRuntime;
typedef struct _FCinfo;
typedef struct tagiJointResource;
typedef struct Vector4D;
typedef struct tagXStreamDirectoryEntry;
typedef struct tagiJointRuntime;
typedef struct tagP2VERTEX;
typedef struct tagP2MeshVertex;
typedef struct tagiMesh;
typedef struct _xModel;

typedef void(*type_11)(uint32, void**, void**, void**);

typedef _xModel type_0[0];
typedef _xModel type_1[0];
typedef tagXStreamDirectoryEntry type_2[1000];
typedef _xModel type_3[0];
typedef xSkel type_4[0];
typedef xSkel type_5[0];
typedef xSkel type_6[0];
typedef uint16 type_7[3];
typedef xSkel type_8[0];
typedef int8 type_9[2048];
typedef int8 type_10[128];
typedef void(*type_12)(uint32, void**, void**, void**)[33];
typedef _xModel type_13[0];
typedef _xModel type_14[0];

struct tagXStreamMDSDirectory
{
	uint32 count;
	tagXStreamDirectoryEntry directory[1000];
};

struct tagP2Weight
{
	uint16 m_joint0;
	uint16 m_joint1;
	float32 m_weight0;
	float32 m_weight1;
};

struct xSkel
{
	tagiSkelResource* m_resource;
	tagiSkelRuntime* m_runtime;
};

struct tagiSkelResource
{
	uint32 m_assetID;
	uint32 m_jointCount;
	tagiJointResource* m_joints;
};

struct tagiModelResource
{
	uint32 m_assetID;
	int32 m_meshCount;
	tagP2Mesh* m_mesh;
};

struct tagiSkelRuntime
{
	tagiJointRuntime* m_joints;
};

struct tagMATRIX
{
	float32 _11;
	float32 _12;
	float32 _13;
	float32 _14;
	float32 _21;
	float32 _22;
	float32 _23;
	float32 _24;
	float32 _31;
	float32 _32;
	float32 _33;
	float32 _34;
	float32 _41;
	float32 _42;
	float32 _43;
	float32 _44;
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

struct tagiModelRuntime
{
	int32 placeholder;
};

struct _FCinfo
{
	uint16 nidx[3];
};

struct tagiJointResource
{
	tagMATRIX m_orientMatrix;
	Vector3D m_home;
	uint32 m_parent;
};

struct Vector4D
{
	float32 x;
	float32 y;
	float32 z;
	float32 t;
};

struct tagXStreamDirectoryEntry
{
	uint32 id;
	uint32 type;
	uint32 offset;
	uint32 length;
};

struct tagiJointRuntime
{
	float32 m_tx;
	float32 m_ty;
	float32 m_tz;
	float32 m_rx;
	float32 m_ry;
	float32 m_rz;
	Vector3D m_worldHome;
	tagMATRIX m_localMatrix;
	tagMATRIX m_worldMatrix;
};

struct tagP2VERTEX
{
	float32 x;
	float32 y;
	float32 z;
	float32 tu;
	float32 tv;
};

struct tagP2MeshVertex
{
	float32 m_x;
	float32 m_y;
	float32 m_z;
};

struct tagiMesh
{
};

struct _xModel
{
	tagiModelResource* m_resource;
	tagiModelRuntime* m_runtime;
};

int8* assetBuffer;
int8* assetBufferNext;
uint32 assetBufferRemain;
uint32 assetBufferResetPoint;
void(*instanceTable)(uint32, void**, void**, void**)[33];
int32 g_RTObjModelCount;
_xModel g_RTObjModel[0];
int8 vAssertBuf2[128];
XStreamHeader currentHeader;
int32 g_DNPCSkeletonCount;
xSkel g_DNPCSkeleton[0];
int32 g_DNPCModelCount;
_xModel g_DNPCModel[0];
int32 g_SNPCSkeletonCount;
xSkel g_SNPCSkeleton[0];
int32 g_SNPCModelCount;
_xModel g_SNPCModel[0];
int32 g_BossSkeletonCount;
xSkel g_BossSkeleton[0];
int32 g_BossModelCount;
_xModel g_BossModel[0];
int32 g_AshSkeletonCount;
xSkel g_AshSkeleton[0];
int32 g_AshModelCount;
_xModel g_AshModel[0];

void xCharRTObjGeometryInstance(uint32 assetID, void** resource, void** runtime);
tagP2Mesh* xCharRTObjGeometryGetMesh(uint32 assetID, int32* meshCount);
void xCharDNPCSkeletonInstance(uint32 assetID, void** resource, void** runtime);
void xCharDNPCGeometryInstance(uint32 assetID, void** resource, void** runtime);
void xCharSNPCSkeletonInstance(uint32 assetID, void** resource, void** runtime);
void xCharSNPCGeometryInstance(uint32 assetID, void** resource, void** runtime);
void xCharBossSkeletonInstance(uint32 assetID, void** resource, void** runtime);
void xCharBossGeometryInstance(uint32 assetID, void** resource, void** runtime);
void xCharAshSkeletonInstance(uint32 assetID, void** resource, void** runtime);
void xCharAshGeometryInstance(uint32 assetID, void** resource, void** runtime);
void xAssetInstance(uint32 assetID, void** resource, void** persistent, void** runtime);
void xAssetLevelReset();
void xAssetSetLevelReset();
void xAssetInit();

// xCharRTObjGeometryInstance__FUiPPvPPvPPv
// Start address: 0x3630f0
void xCharRTObjGeometryInstance(uint32 assetID, void** resource, void** runtime)
{
	uint32 id;
	int32 i;
	// Line 735, Address: 0x3630f0, Func Offset: 0
	// Line 741, Address: 0x363110, Func Offset: 0x20
	// Line 743, Address: 0x363118, Func Offset: 0x28
	// Line 745, Address: 0x363124, Func Offset: 0x34
	// Line 747, Address: 0x36314c, Func Offset: 0x5c
	// Line 749, Address: 0x363164, Func Offset: 0x74
	// Line 751, Address: 0x363188, Func Offset: 0x98
	// Line 753, Address: 0x3631a0, Func Offset: 0xb0
	// Line 755, Address: 0x3631a8, Func Offset: 0xb8
	// Line 758, Address: 0x3631c0, Func Offset: 0xd0
	// Line 761, Address: 0x3631d4, Func Offset: 0xe4
	// Func End, Address: 0x3631f0, Func Offset: 0x100
}

// xCharRTObjGeometryGetMesh__FUiPi
// Start address: 0x3631f0
tagP2Mesh* xCharRTObjGeometryGetMesh(uint32 assetID, int32* meshCount)
{
	uint32 id;
	int32 i;
	// Line 721, Address: 0x3631f0, Func Offset: 0
	// Line 722, Address: 0x3631f8, Func Offset: 0x8
	// Line 724, Address: 0x363204, Func Offset: 0x14
	// Line 726, Address: 0x36322c, Func Offset: 0x3c
	// Line 728, Address: 0x363248, Func Offset: 0x58
	// Line 730, Address: 0x363268, Func Offset: 0x78
	// Line 731, Address: 0x363280, Func Offset: 0x90
	// Line 732, Address: 0x363284, Func Offset: 0x94
	// Line 733, Address: 0x363288, Func Offset: 0x98
	// Func End, Address: 0x363290, Func Offset: 0xa0
}

// xCharDNPCSkeletonInstance__FUiPPvPPvPPv
// Start address: 0x363290
void xCharDNPCSkeletonInstance(uint32 assetID, void** resource, void** runtime)
{
	uint32 id;
	int32 i;
	// Line 648, Address: 0x363290, Func Offset: 0
	// Line 654, Address: 0x3632b0, Func Offset: 0x20
	// Line 656, Address: 0x3632b8, Func Offset: 0x28
	// Line 658, Address: 0x3632c4, Func Offset: 0x34
	// Line 660, Address: 0x3632ec, Func Offset: 0x5c
	// Line 662, Address: 0x363304, Func Offset: 0x74
	// Line 664, Address: 0x363328, Func Offset: 0x98
	// Line 666, Address: 0x363340, Func Offset: 0xb0
	// Line 668, Address: 0x363348, Func Offset: 0xb8
	// Line 671, Address: 0x363360, Func Offset: 0xd0
	// Line 673, Address: 0x3633f8, Func Offset: 0x168
	// Func End, Address: 0x363414, Func Offset: 0x184
}

// xCharDNPCGeometryInstance__FUiPPvPPvPPv
// Start address: 0x363420
void xCharDNPCGeometryInstance(uint32 assetID, void** resource, void** runtime)
{
	uint32 id;
	int32 i;
	// Line 619, Address: 0x363420, Func Offset: 0
	// Line 625, Address: 0x363440, Func Offset: 0x20
	// Line 627, Address: 0x363448, Func Offset: 0x28
	// Line 629, Address: 0x363454, Func Offset: 0x34
	// Line 631, Address: 0x36347c, Func Offset: 0x5c
	// Line 633, Address: 0x363494, Func Offset: 0x74
	// Line 634, Address: 0x3634b8, Func Offset: 0x98
	// Line 636, Address: 0x363560, Func Offset: 0x140
	// Line 638, Address: 0x363578, Func Offset: 0x158
	// Line 640, Address: 0x363580, Func Offset: 0x160
	// Line 643, Address: 0x363598, Func Offset: 0x178
	// Line 644, Address: 0x3635ac, Func Offset: 0x18c
	// Line 646, Address: 0x363644, Func Offset: 0x224
	// Func End, Address: 0x363660, Func Offset: 0x240
}

// xCharSNPCSkeletonInstance__FUiPPvPPvPPv
// Start address: 0x363660
void xCharSNPCSkeletonInstance(uint32 assetID, void** resource, void** runtime)
{
	uint32 id;
	int32 i;
	// Line 591, Address: 0x363660, Func Offset: 0
	// Line 597, Address: 0x363680, Func Offset: 0x20
	// Line 599, Address: 0x363688, Func Offset: 0x28
	// Line 601, Address: 0x363694, Func Offset: 0x34
	// Line 603, Address: 0x3636bc, Func Offset: 0x5c
	// Line 605, Address: 0x3636d4, Func Offset: 0x74
	// Line 607, Address: 0x3636f8, Func Offset: 0x98
	// Line 609, Address: 0x363710, Func Offset: 0xb0
	// Line 611, Address: 0x363718, Func Offset: 0xb8
	// Line 614, Address: 0x363730, Func Offset: 0xd0
	// Line 616, Address: 0x3637c8, Func Offset: 0x168
	// Func End, Address: 0x3637e4, Func Offset: 0x184
}

// xCharSNPCGeometryInstance__FUiPPvPPvPPv
// Start address: 0x3637f0
void xCharSNPCGeometryInstance(uint32 assetID, void** resource, void** runtime)
{
	uint32 id;
	int32 i;
	// Line 564, Address: 0x3637f0, Func Offset: 0
	// Line 570, Address: 0x363810, Func Offset: 0x20
	// Line 572, Address: 0x363818, Func Offset: 0x28
	// Line 574, Address: 0x363824, Func Offset: 0x34
	// Line 576, Address: 0x36384c, Func Offset: 0x5c
	// Line 578, Address: 0x363864, Func Offset: 0x74
	// Line 580, Address: 0x363888, Func Offset: 0x98
	// Line 582, Address: 0x3638a0, Func Offset: 0xb0
	// Line 584, Address: 0x3638a8, Func Offset: 0xb8
	// Line 587, Address: 0x3638c0, Func Offset: 0xd0
	// Line 589, Address: 0x363958, Func Offset: 0x168
	// Func End, Address: 0x363974, Func Offset: 0x184
}

// xCharBossSkeletonInstance__FUiPPvPPvPPv
// Start address: 0x363980
void xCharBossSkeletonInstance(uint32 assetID, void** resource, void** runtime)
{
	uint32 id;
	int32 i;
	// Line 536, Address: 0x363980, Func Offset: 0
	// Line 542, Address: 0x3639a0, Func Offset: 0x20
	// Line 544, Address: 0x3639a8, Func Offset: 0x28
	// Line 546, Address: 0x3639b4, Func Offset: 0x34
	// Line 548, Address: 0x3639dc, Func Offset: 0x5c
	// Line 550, Address: 0x3639f4, Func Offset: 0x74
	// Line 552, Address: 0x363a18, Func Offset: 0x98
	// Line 554, Address: 0x363a30, Func Offset: 0xb0
	// Line 556, Address: 0x363a38, Func Offset: 0xb8
	// Line 559, Address: 0x363a50, Func Offset: 0xd0
	// Line 561, Address: 0x363ae8, Func Offset: 0x168
	// Func End, Address: 0x363b04, Func Offset: 0x184
}

// xCharBossGeometryInstance__FUiPPvPPvPPv
// Start address: 0x363b10
void xCharBossGeometryInstance(uint32 assetID, void** resource, void** runtime)
{
	uint32 id;
	int32 i;
	// Line 509, Address: 0x363b10, Func Offset: 0
	// Line 515, Address: 0x363b30, Func Offset: 0x20
	// Line 517, Address: 0x363b38, Func Offset: 0x28
	// Line 519, Address: 0x363b44, Func Offset: 0x34
	// Line 521, Address: 0x363b6c, Func Offset: 0x5c
	// Line 523, Address: 0x363b84, Func Offset: 0x74
	// Line 525, Address: 0x363ba8, Func Offset: 0x98
	// Line 527, Address: 0x363bc0, Func Offset: 0xb0
	// Line 529, Address: 0x363bc8, Func Offset: 0xb8
	// Line 532, Address: 0x363be0, Func Offset: 0xd0
	// Line 534, Address: 0x363c78, Func Offset: 0x168
	// Func End, Address: 0x363c94, Func Offset: 0x184
}

// xCharAshSkeletonInstance__FUiPPvPPvPPv
// Start address: 0x363ca0
void xCharAshSkeletonInstance(uint32 assetID, void** resource, void** runtime)
{
	uint32 id;
	int32 i;
	// Line 481, Address: 0x363ca0, Func Offset: 0
	// Line 487, Address: 0x363cc0, Func Offset: 0x20
	// Line 489, Address: 0x363cc8, Func Offset: 0x28
	// Line 491, Address: 0x363cd4, Func Offset: 0x34
	// Line 493, Address: 0x363cfc, Func Offset: 0x5c
	// Line 495, Address: 0x363d14, Func Offset: 0x74
	// Line 497, Address: 0x363d38, Func Offset: 0x98
	// Line 499, Address: 0x363d50, Func Offset: 0xb0
	// Line 501, Address: 0x363d58, Func Offset: 0xb8
	// Line 504, Address: 0x363d70, Func Offset: 0xd0
	// Line 506, Address: 0x363e08, Func Offset: 0x168
	// Func End, Address: 0x363e24, Func Offset: 0x184
}

// xCharAshGeometryInstance__FUiPPvPPvPPv
// Start address: 0x363e30
void xCharAshGeometryInstance(uint32 assetID, void** resource, void** runtime)
{
	uint32 id;
	int32 i;
	// Line 449, Address: 0x363e30, Func Offset: 0
	// Line 455, Address: 0x363e54, Func Offset: 0x24
	// Line 457, Address: 0x363e5c, Func Offset: 0x2c
	// Line 459, Address: 0x363e68, Func Offset: 0x38
	// Line 461, Address: 0x363e90, Func Offset: 0x60
	// Line 462, Address: 0x363f30, Func Offset: 0x100
	// Line 466, Address: 0x363f48, Func Offset: 0x118
	// Line 467, Address: 0x363fe8, Func Offset: 0x1b8
	// Line 470, Address: 0x36400c, Func Offset: 0x1dc
	// Line 472, Address: 0x364024, Func Offset: 0x1f4
	// Line 474, Address: 0x36402c, Func Offset: 0x1fc
	// Line 477, Address: 0x364040, Func Offset: 0x210
	// Line 479, Address: 0x3640d8, Func Offset: 0x2a8
	// Func End, Address: 0x3640f8, Func Offset: 0x2c8
}

// xAssetInstance__FUiPPvPPvPPv
// Start address: 0x364100
void xAssetInstance(uint32 assetID, void** resource, void** persistent, void** runtime)
{
	int32 type;
	// Line 434, Address: 0x364100, Func Offset: 0
	// Line 439, Address: 0x36412c, Func Offset: 0x2c
	// Line 442, Address: 0x364134, Func Offset: 0x34
	// Line 445, Address: 0x3641e8, Func Offset: 0xe8
	// Line 446, Address: 0x364204, Func Offset: 0x104
	// Line 447, Address: 0x364230, Func Offset: 0x130
	// Func End, Address: 0x364254, Func Offset: 0x154
}

// xAssetLevelReset__Fv
// Start address: 0x364260
void xAssetLevelReset()
{
	// Line 244, Address: 0x364260, Func Offset: 0
	// Line 245, Address: 0x364268, Func Offset: 0x8
	// Line 246, Address: 0x364280, Func Offset: 0x20
	// Func End, Address: 0x364288, Func Offset: 0x28
}

// xAssetSetLevelReset__Fv
// Start address: 0x364290
void xAssetSetLevelReset()
{
	// Line 233, Address: 0x364290, Func Offset: 0
	// Line 234, Address: 0x364298, Func Offset: 0x8
	// Func End, Address: 0x3642a0, Func Offset: 0x10
}

// xAssetInit__Fv
// Start address: 0x3642a0
void xAssetInit()
{
	// Line 166, Address: 0x3642a0, Func Offset: 0
	// Func End, Address: 0x3642a8, Func Offset: 0x8
}

