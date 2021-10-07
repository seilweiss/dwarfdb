typedef struct tagiMesh;
typedef struct tagP2MeshVertex;
typedef struct Vector3D;
typedef struct tagP2Weight;
typedef struct Vector4D;
typedef struct tagP2Mesh;
typedef struct tagP2VERTEX;
typedef struct _FCinfo;


typedef uint16 type[3];

struct tagiMesh
{
};

struct tagP2MeshVertex
{
	float32 m_x;
	float32 m_y;
	float32 m_z;
};

struct Vector3D
{
	float32 x;
	float32 y;
	float32 z;
};

struct tagP2Weight
{
	uint16 m_joint0;
	uint16 m_joint1;
	float32 m_weight0;
	float32 m_weight1;
};

struct Vector4D
{
	float32 x;
	float32 y;
	float32 z;
	float32 t;
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

struct tagP2VERTEX
{
	float32 x;
	float32 y;
	float32 z;
	float32 tu;
	float32 tv;
};

struct _FCinfo
{
	uint16 nidx[3];
};


void p2MeshInit(tagP2Mesh* mesh, int32 vertexCount, tagP2VERTEX* p2vPtr, Vector3D* normals, tagP2MeshVertex* vPtr, int32 indexCount, uint16* iPtr, tagP2Mesh* next);

// p2MeshInit__FP9tagP2MeshiP11tagP2VERTEXP8Vector3DP15tagP2MeshVertexiPUsP9tagP2Mesh
// Start address: 0x381630
void p2MeshInit(tagP2Mesh* mesh, int32 vertexCount, tagP2VERTEX* p2vPtr, Vector3D* normals, tagP2MeshVertex* vPtr, int32 indexCount, uint16* iPtr, tagP2Mesh* next)
{
	// Line 22, Address: 0x381630, Func Offset: 0
	// Line 25, Address: 0x381668, Func Offset: 0x38
	// Line 26, Address: 0x38166c, Func Offset: 0x3c
	// Line 27, Address: 0x381670, Func Offset: 0x40
	// Line 28, Address: 0x381674, Func Offset: 0x44
	// Line 31, Address: 0x381698, Func Offset: 0x68
	// Line 32, Address: 0x38169c, Func Offset: 0x6c
	// Line 33, Address: 0x3816c0, Func Offset: 0x90
	// Line 35, Address: 0x381708, Func Offset: 0xd8
	// Line 36, Address: 0x38170c, Func Offset: 0xdc
	// Line 38, Address: 0x381710, Func Offset: 0xe0
	// Line 40, Address: 0x381718, Func Offset: 0xe8
	// Line 42, Address: 0x38171c, Func Offset: 0xec
	// Line 43, Address: 0x381720, Func Offset: 0xf0
	// Func End, Address: 0x381748, Func Offset: 0x118
}

