typedef struct xGameObj;
typedef struct _FCinfo;
typedef struct _p2Geom;
typedef struct tagP2Mesh;
typedef struct tagXStreamMDSDirectory;
typedef struct tagxPhysicsObject;
typedef struct _RpClump;
typedef struct _RwObject;
typedef struct tagP2VERTEX;
typedef struct tagP2MeshVertex;
typedef struct tagP2Weight;
typedef struct XStreamHeader;
typedef struct Vector3D;
typedef struct _RwLLLink;
typedef struct Vector4D;
typedef struct tagiMesh;
typedef struct tagXStreamDirectoryEntry;
typedef struct _RwLinkList;
typedef struct xFSMData;
typedef struct _iRenderEffects;

typedef _RpClump*(*type_5)(_RpClump*, void*);

typedef uint8 type_0[4];
typedef uint8 type_1[4];
typedef uint8 type_2[4];
typedef uint16 type_3[3];
typedef tagXStreamDirectoryEntry type_4[1000];
typedef int8 type_6[2048];
typedef int8 type_7[128];

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

struct tagXStreamMDSDirectory
{
	uint32 count;
	tagXStreamDirectoryEntry directory[1000];
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

struct _RpClump
{
	_RwObject object;
	_RwLinkList atomicList;
	_RwLLLink inWorldLink;
	_RpClump*(*callback)(_RpClump*, void*);
	uint16 renderFrame;
};

struct _RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
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

struct tagP2Weight
{
	uint16 m_joint0;
	uint16 m_joint1;
	float32 m_weight0;
	float32 m_weight1;
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

struct _RwLLLink
{
	_RwLLLink* next;
	_RwLLLink* prev;
};

struct Vector4D
{
	float32 x;
	float32 y;
	float32 z;
	float32 t;
};

struct tagiMesh
{
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

struct xFSMData
{
	uint16 m_fsmType;
	uint16 m_fsmState;
	uint16 m_fsmNextState;
	int32 m_fsmForceChange;
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

int8 vAssertBuf2[128];
XStreamHeader currentHeader;

xGameObj* create();

// create__15xGameObjFactoryFUi
// Start address: 0x404680
xGameObj* create()
{
	xGameObj* go;
	// Line 17, Address: 0x404680, Func Offset: 0
	// Line 18, Address: 0x40468c, Func Offset: 0xc
	// Line 27, Address: 0x404690, Func Offset: 0x10
	// Line 32, Address: 0x404728, Func Offset: 0xa8
	// Line 33, Address: 0x40472c, Func Offset: 0xac
	// Func End, Address: 0x404740, Func Offset: 0xc0
}

