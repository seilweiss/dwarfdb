typedef struct tagiMesh;
typedef struct xGameObj;
typedef struct tagP2MeshVertex;
typedef struct xFSMData;
typedef struct _anon0;
typedef struct _iRenderEffects;
typedef struct tagP2Weight;
typedef struct _anon1;
typedef struct tagXStreamMDSDirectory;
typedef struct _RwObject;
typedef struct _FCinfo;
typedef struct _p2Geom;
typedef struct tagxPhysicsObject;
typedef struct tagP2Mesh;
typedef struct XStreamHeader;
typedef struct _RwLLLink;
typedef struct _RpClump;
typedef struct Vector3D;
typedef struct tagP2VERTEX;
typedef struct _anon2;
typedef struct Vector4D;
typedef struct tagXStreamDirectoryEntry;
typedef struct _RwLinkList;

typedef _RpClump*(*type_0)(_RpClump*, void*);

typedef int8 type_1[128];
typedef uint8 type_2[4];
typedef uint8 type_3[4];
typedef uint8 type_4[4];
typedef tagXStreamDirectoryEntry type_5[1000];
typedef uint16 type_6[3];
typedef int8 type_7[2048];

struct tagiMesh
{
};

struct xGameObj
{
	uint32 m_objFlags;
	uint32 m_objID;
	uint32 m_objType;
	xFSMData m_fsmData;
	_p2Geom m_geom;
	xGameObj* m_next;
	xGameObj* m_prev;
	tagxPhysicsObject m_phys;
};

struct tagP2MeshVertex
{
	float32 m_x;
	float32 m_y;
	float32 m_z;
};

struct xFSMData
{
	uint16 m_fsmType;
	uint16 m_fsmState;
	uint16 m_fsmNextState;
	int32 m_fsmForceChange;
};

struct _anon0
{
};

struct _iRenderEffects
{
	uint32 flags;
	uint8 colorA[4];
	uint8 colorB[4];
	uint8 litcolor[4];
	int8 abr;
	int8 abrB;
	uint8 fadetime;
	uint8 fadectr;
};

struct tagP2Weight
{
	uint16 m_joint0;
	uint16 m_joint1;
	float32 m_weight0;
	float32 m_weight1;
};

struct _anon1
{
};

struct tagXStreamMDSDirectory
{
	uint32 count;
	tagXStreamDirectoryEntry directory[1000];
};

struct _RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct _FCinfo
{
	uint16 nidx[3];
};

struct _p2Geom
{
	uint32 m_meshCount;
	tagP2Mesh* m_mesh;
	_iRenderEffects effects;
	_RpClump* m_clump;
};

struct tagxPhysicsObject
{
	Vector3D m_ang;
	Vector3D m_angVel;
	Vector3D m_pos;
	Vector3D m_vel;
	Vector3D m_acc;
	Vector3D m_vel_inst;
	Vector3D m_scale;
	Vector3D m_motion;
	float32 m_cbradius;
	uint8 m_flag;
	uint8 m_hitResult;
	uint16 m_shadow_radius;
	uint8 m_type;
	uint8 m_hitFlags;
	uint16 m_hitTriggerNoWalkID;
	Vector3D m_hitVector;
	uint8 m_hitActorType;
	uint8 m_hitTriggerWalkID;
	uint8 m_hitActorID;
	uint8 m_hitObjectID;
	float32 m_floorHeight;
	uint32 m_floorIdx;
	uint32 m_floorMask;
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

struct _RwLLLink
{
	_RwLLLink* next;
	_RwLLLink* prev;
};

struct _RpClump
{
	_RwObject object;
	_RwLinkList atomicList;
	_RwLLLink inWorldLink;
	_RpClump*(*callback)(_RpClump*, void*);
	uint16 renderFrame;
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

struct _anon2
{
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

struct _RwLinkList
{
	_RwLLLink link;
};

int8 vAssertBuf2[128];
XStreamHeader currentHeader;
_anon0 __vt__15zGameObjVillain;
_anon1 __vt__14xGameCharacter;
_anon2 __vt__10zCharacter;

xGameObj* create(uint32 type);

// create__15zGameObjFactoryFUi
// Start address: 0x4047c0
xGameObj* create(uint32 type)
{
	xGameObj* go;
	// Line 19, Address: 0x4047c0, Func Offset: 0
	// Line 22, Address: 0x4047cc, Func Offset: 0xc
	// Line 25, Address: 0x4047f8, Func Offset: 0x38
	// Line 26, Address: 0x40483c, Func Offset: 0x7c
	// Line 29, Address: 0x404844, Func Offset: 0x84
	// Line 30, Address: 0x404868, Func Offset: 0xa8
	// Line 33, Address: 0x404870, Func Offset: 0xb0
	// Line 34, Address: 0x4048b4, Func Offset: 0xf4
	// Line 39, Address: 0x4048bc, Func Offset: 0xfc
	// Line 40, Address: 0x4048c8, Func Offset: 0x108
	// Line 45, Address: 0x404968, Func Offset: 0x1a8
	// Line 46, Address: 0x40496c, Func Offset: 0x1ac
	// Func End, Address: 0x404980, Func Offset: 0x1c0
}

