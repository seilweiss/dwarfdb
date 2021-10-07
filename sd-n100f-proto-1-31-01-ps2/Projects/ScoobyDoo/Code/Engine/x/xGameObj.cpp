typedef struct _RwFrame;
typedef struct _RwV3d;
typedef struct xGameObj;
typedef struct _RwMatrix;
typedef struct _FCinfo;
typedef struct _p2Geom;
typedef struct tagxPhysicsObject;
typedef struct tagP2Mesh;
typedef struct _RpClump;
typedef struct tagP2VERTEX;
typedef struct tagP2MeshVertex;
typedef struct Vector3D;
typedef struct tagP2Weight;
typedef struct _RwObject;
typedef struct Vector4D;
typedef struct _RwLLLink;
typedef struct tagiMesh;
typedef struct _anon0;
typedef struct xFSMData;
typedef struct _RwLinkList;
typedef struct _iRenderEffects;

typedef _RpClump*(*type_1)(_RpClump*, void*);

typedef uint16 type_0[3];
typedef uint8 type_2[4];
typedef uint8 type_3[4];
typedef uint8 type_4[4];

struct _RwFrame
{
	_RwObject object;
	_RwMatrix modelling;
	_RwMatrix ltm;
	_RwLLLink inDirtyListLink;
	_RwLinkList objectList;
	_RwFrame* child;
	_RwFrame* next;
	_RwFrame* root;
};

struct _RwV3d
{
	float32 x;
	float32 y;
	float32 z;
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

	_RwV3d* GetLocalZ();
	_RwV3d* GetPos();
	void SetPos(float32 x, float32 y, float32 z);
	void SetPos(Vector3D* v);
	void* __ct();
};

struct _RwMatrix
{
	_RwV3d right;
	uint32 flags;
	_RwV3d up;
	uint32 pad1;
	_RwV3d at;
	uint32 pad2;
	_RwV3d pos;
	uint32 pad3;
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

struct _RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
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

struct _anon0
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

uint32 sGameUniqueID;
_anon0 __vt__8xGameObj;

_RwV3d* GetLocalZ();
_RwV3d* GetPos();
void SetPos(float32 x, float32 y, float32 z);
void SetPos(Vector3D* v);
void* __ct();

// GetLocalZ__8xGameObjFv
// Start address: 0x400330
_RwV3d* xGameObj::GetLocalZ()
{
	_RwMatrix* m;
	_RwFrame* f;
	// Line 83, Address: 0x400330, Func Offset: 0
	// Line 87, Address: 0x400338, Func Offset: 0x8
	// Line 88, Address: 0x400344, Func Offset: 0x14
	// Line 89, Address: 0x40034c, Func Offset: 0x1c
	// Line 90, Address: 0x400358, Func Offset: 0x28
	// Line 92, Address: 0x400364, Func Offset: 0x34
	// Line 95, Address: 0x400384, Func Offset: 0x54
	// Func End, Address: 0x400394, Func Offset: 0x64
}

// GetPos__8xGameObjFv
// Start address: 0x4003a0
_RwV3d* xGameObj::GetPos()
{
	_RwMatrix* m;
	_RwFrame* f;
	// Line 65, Address: 0x4003a0, Func Offset: 0
	// Line 69, Address: 0x4003a8, Func Offset: 0x8
	// Line 70, Address: 0x4003b4, Func Offset: 0x14
	// Line 71, Address: 0x4003bc, Func Offset: 0x1c
	// Line 72, Address: 0x4003c8, Func Offset: 0x28
	// Line 74, Address: 0x4003d4, Func Offset: 0x34
	// Line 77, Address: 0x4003f4, Func Offset: 0x54
	// Func End, Address: 0x400404, Func Offset: 0x64
}

// SetPos__8xGameObjFfff
// Start address: 0x400410
void xGameObj::SetPos(float32 x, float32 y, float32 z)
{
	_RwFrame* f;
	_RwMatrix* m;
	_RwV3d* new_pos;
	// Line 42, Address: 0x400410, Func Offset: 0
	// Line 47, Address: 0x400438, Func Offset: 0x28
	// Line 48, Address: 0x40043c, Func Offset: 0x2c
	// Line 49, Address: 0x400440, Func Offset: 0x30
	// Line 51, Address: 0x400444, Func Offset: 0x34
	// Line 52, Address: 0x400454, Func Offset: 0x44
	// Line 53, Address: 0x400464, Func Offset: 0x54
	// Line 55, Address: 0x400470, Func Offset: 0x60
	// Line 56, Address: 0x400474, Func Offset: 0x64
	// Line 57, Address: 0x400478, Func Offset: 0x68
	// Line 59, Address: 0x40047c, Func Offset: 0x6c
	// Line 60, Address: 0x400488, Func Offset: 0x78
	// Line 61, Address: 0x400494, Func Offset: 0x84
	// Func End, Address: 0x4004b8, Func Offset: 0xa8
}

// SetPos__8xGameObjFP8Vector3D
// Start address: 0x4004c0
void xGameObj::SetPos(Vector3D* v)
{
	// Line 34, Address: 0x4004c0, Func Offset: 0
	// Line 35, Address: 0x4004dc, Func Offset: 0x1c
	// Line 36, Address: 0x400544, Func Offset: 0x84
	// Func End, Address: 0x400568, Func Offset: 0xa8
}

// __ct__8xGameObjFv
// Start address: 0x400570
void* xGameObj::__ct()
{
	// Line 14, Address: 0x400570, Func Offset: 0
	// Line 15, Address: 0x40057c, Func Offset: 0xc
	// Line 16, Address: 0x400590, Func Offset: 0x20
	// Line 17, Address: 0x400594, Func Offset: 0x24
	// Line 18, Address: 0x400598, Func Offset: 0x28
	// Func End, Address: 0x4005a4, Func Offset: 0x34
}

