typedef struct tagP2Weight;
typedef struct _iRenderEffects;
typedef struct _FCinfo;
typedef struct xGameObjMgr;
typedef struct xModule;
typedef struct _p2Geom;
typedef struct tagxPhysicsObject;
typedef struct tagP2Mesh;
typedef struct xGameObj;
typedef struct _RpClump;
typedef struct tagP2VERTEX;
typedef struct zGameObjMgr;
typedef struct Vector3D;
typedef struct _RwObject;
typedef struct tagP2MeshVertex;
typedef struct Vector4D;
typedef struct _RwLLLink;
typedef struct tagiMesh;
typedef struct xFSMData;
typedef struct _RwLinkList;
typedef struct _anon0;

typedef _RpClump*(*type_4)(_RpClump*, void*);

typedef uint8 type_0[4];
typedef uint8 type_1[4];
typedef uint8 type_2[4];
typedef uint16 type_3[3];
typedef int8 type_5[32];

struct tagP2Weight
{
	uint16 m_joint0;
	uint16 m_joint1;
	float32 m_weight0;
	float32 m_weight1;
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

struct _FCinfo
{
	uint16 nidx[3];
};

struct xGameObjMgr : xModule
{
	xGameObj* m_list;
};

struct xModule
{
	int32 m_type;
	int8 m_name[32];
	int32 m_init;
	int32 m_state;
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

struct _RpClump
{
	_RwObject object;
	_RwLinkList atomicList;
	_RwLLLink inWorldLink;
	_RpClump*(*callback)(_RpClump*, void*);
	uint16 renderFrame;
};

struct tagP2VERTEX
{
	float32 x;
	float32 y;
	float32 z;
	float32 tu;
	float32 tv;
};

struct zGameObjMgr : xGameObjMgr
{

	xGameObj* gameObjCreate(uint32 type);
	void* __ct();
};

struct Vector3D
{
	float32 x;
	float32 y;
	float32 z;
};

struct _RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct tagP2MeshVertex
{
	float32 m_x;
	float32 m_y;
	float32 m_z;
};

struct Vector4D
{
	float32 x;
	float32 y;
	float32 z;
	float32 t;
};

struct _RwLLLink
{
	_RwLLLink* next;
	_RwLLLink* prev;
};

struct tagiMesh
{
};

struct xFSMData
{
	uint16 m_fsmType;
	uint16 m_fsmState;
	uint16 m_fsmNextState;
	int32 m_fsmForceChange;
};

struct _RwLinkList
{
	_RwLLLink link;
};

struct _anon0
{
};

_anon0 __vt__11zGameObjMgr;
xGameObjMgr* gGameObjMgr;

xGameObj* gameObjCreate(uint32 type);
void* __ct();

// gameObjCreate__11zGameObjMgrFUi
// Start address: 0x404740
xGameObj* zGameObjMgr::gameObjCreate(uint32 type)
{
	// Line 22, Address: 0x404740, Func Offset: 0
	// Line 23, Address: 0x404748, Func Offset: 0x8
	// Line 24, Address: 0x404754, Func Offset: 0x14
	// Func End, Address: 0x404764, Func Offset: 0x24
}

// __ct__11zGameObjMgrFv
// Start address: 0x404770
void* zGameObjMgr::__ct()
{
	// Line 14, Address: 0x404770, Func Offset: 0
	// Line 16, Address: 0x404798, Func Offset: 0x28
	// Line 17, Address: 0x40479c, Func Offset: 0x2c
	// Func End, Address: 0x4047b4, Func Offset: 0x44
}

