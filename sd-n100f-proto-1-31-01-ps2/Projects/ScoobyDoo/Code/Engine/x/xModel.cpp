typedef struct tagXStreamMDSDirectory;
typedef struct tagP2Weight;
typedef struct _xModel;
typedef struct _FCinfo;
typedef struct Vector3D;
typedef struct tagP2VERTEX;
typedef struct tagiModelResource;
typedef struct Vector4D;
typedef struct XStreamHeader;
typedef struct tagiMesh;
typedef struct tagP2MeshVertex;
typedef struct tagXStreamDirectoryEntry;
typedef struct tagP2Mesh;
typedef struct tagiModelRuntime;


typedef tagXStreamDirectoryEntry type_0[1000];
typedef _xModel type_1[1];
typedef _xModel type_2[5];
typedef int8 type_3[2048];
typedef _xModel type_4[2];
typedef _xModel type_5[110];
typedef int8 type_6[128];
typedef uint16 type_7[3];
typedef _xModel type_8[5];

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

struct _xModel
{
	tagiModelResource* m_resource;
	tagiModelRuntime* m_runtime;
};

struct _FCinfo
{
	uint16 nidx[3];
};

struct Vector3D
{
	float32 x;
	float32 y;
	float32 z;
};

struct tagP2VERTEX
{
	float32 x;
	float32 y;
	float32 z;
	float32 tu;
	float32 tv;
};

struct tagiModelResource
{
	uint32 m_assetID;
	int32 m_meshCount;
	tagP2Mesh* m_mesh;
};

struct Vector4D
{
	float32 x;
	float32 y;
	float32 z;
	float32 t;
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

struct tagiMesh
{
};

struct tagP2MeshVertex
{
	float32 m_x;
	float32 m_y;
	float32 m_z;
};

struct tagXStreamDirectoryEntry
{
	uint32 id;
	uint32 type;
	uint32 offset;
	uint32 length;
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

struct tagiModelRuntime
{
	int32 placeholder;
};

int32 g_AshModelCount;
int32 g_BossModelCount;
int32 g_SNPCModelCount;
int32 g_DNPCModelCount;
_xModel g_AshModel[1];
_xModel g_BossModel[2];
_xModel g_SNPCModel[5];
_xModel g_DNPCModel[5];
int8 vAssertBuf2[128];
XStreamHeader currentHeader;
int32 g_RTObjModelCount;
_xModel g_RTObjModel[110];

void xModelInit();

// xModelInit__Fv
// Start address: 0x356720
void xModelInit()
{
	int32 i;
	// Line 48, Address: 0x356720, Func Offset: 0
	// Line 49, Address: 0x35672c, Func Offset: 0xc
	// Line 50, Address: 0x356740, Func Offset: 0x20
	// Line 51, Address: 0x356750, Func Offset: 0x30
	// Line 53, Address: 0x356754, Func Offset: 0x34
	// Line 54, Address: 0x356760, Func Offset: 0x40
	// Line 55, Address: 0x356774, Func Offset: 0x54
	// Line 56, Address: 0x356784, Func Offset: 0x64
	// Line 58, Address: 0x356788, Func Offset: 0x68
	// Line 59, Address: 0x356794, Func Offset: 0x74
	// Line 60, Address: 0x3567a8, Func Offset: 0x88
	// Line 61, Address: 0x3567bc, Func Offset: 0x9c
	// Line 63, Address: 0x3567c0, Func Offset: 0xa0
	// Line 64, Address: 0x3567cc, Func Offset: 0xac
	// Line 65, Address: 0x3567e0, Func Offset: 0xc0
	// Line 66, Address: 0x3567f4, Func Offset: 0xd4
	// Line 68, Address: 0x3567f8, Func Offset: 0xd8
	// Line 69, Address: 0x356804, Func Offset: 0xe4
	// Line 70, Address: 0x356818, Func Offset: 0xf8
	// Line 71, Address: 0x35682c, Func Offset: 0x10c
	// Line 72, Address: 0x356830, Func Offset: 0x110
	// Func End, Address: 0x356838, Func Offset: 0x118
}

