typedef struct xGameObjMgr;
typedef struct xGameObj;
typedef struct tagXStreamMDSDirectory;
typedef struct _FCinfo;
typedef struct _anon0;
typedef struct xModule;
typedef struct _p2Geom;
typedef struct tagxPhysicsObject;
typedef struct tagP2Mesh;
typedef struct _RpClump;
typedef struct XStreamHeader;
typedef struct _RwObject;
typedef struct Vector3D;
typedef struct tagP2VERTEX;
typedef struct tagP2MeshVertex;
typedef struct tagP2Weight;
typedef struct Vector4D;
typedef struct tagXStreamDirectoryEntry;
typedef struct _RwLLLink;
typedef struct tagiMesh;
typedef struct xFSMData;
typedef struct _RwLinkList;
typedef struct _anon1;
typedef struct _iRenderEffects;

typedef _RpClump*(*type_6)(_RpClump*, void*);

typedef uint8 type_0[4];
typedef uint8 type_1[4];
typedef uint8 type_2[4];
typedef tagXStreamDirectoryEntry type_3[1000];
typedef uint16 type_4[3];
typedef int8 type_5[2048];
typedef int8 type_7[128];
typedef int8 type_8[32];

struct xGameObjMgr : xModule
{
	xGameObj* m_list;

	void gameObjAdd(xGameObj* obj);
	void render();
	void nextFrame();
	void restart();
	void kill();
	void init();
	void* __ct();
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

struct tagXStreamMDSDirectory
{
	uint32 count;
	tagXStreamDirectoryEntry directory[1000];
};

struct _FCinfo
{
	uint16 nidx[3];
};

struct _anon0
{
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

struct _RpClump
{
	_RwObject object;
	_RwLinkList atomicList;
	_RwLLLink inWorldLink;
	_RpClump*(*callback)(_RpClump*, void*);
	uint16 renderFrame;
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

struct _RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
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

struct _anon1
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

xGameObjMgr* gGameObjMgr;
_anon0 __vt__11xGameObjMgr;
int8 vAssertBuf2[128];
XStreamHeader currentHeader;
_anon1 __vt__7xModule;

void gameObjAdd(xGameObj* obj);
xGameObj* gameObjCreate(uint32 type);
void render();
void nextFrame();
void restart();
void kill();
void init();
void* __ct();

// gameObjAdd__11xGameObjMgrFP8xGameObj
// Start address: 0x404390
void xGameObjMgr::gameObjAdd(xGameObj* obj)
{
	// Line 76, Address: 0x404390, Func Offset: 0
	// Line 80, Address: 0x4043a8, Func Offset: 0x18
	// Line 82, Address: 0x404448, Func Offset: 0xb8
	// Line 83, Address: 0x404450, Func Offset: 0xc0
	// Line 86, Address: 0x404454, Func Offset: 0xc4
	// Line 88, Address: 0x404460, Func Offset: 0xd0
	// Line 90, Address: 0x404468, Func Offset: 0xd8
	// Line 93, Address: 0x40446c, Func Offset: 0xdc
	// Func End, Address: 0x404484, Func Offset: 0xf4
}

// gameObjCreate__11xGameObjMgrFUi
// Start address: 0x404490
xGameObj* xGameObjMgr::gameObjCreate(uint32 type)
{
	// Line 70, Address: 0x404490, Func Offset: 0
	// Line 71, Address: 0x404498, Func Offset: 0x8
	// Line 73, Address: 0x4044a4, Func Offset: 0x14
	// Func End, Address: 0x4044b4, Func Offset: 0x24
}

// render__11xGameObjMgrFv
// Start address: 0x4044c0
void xGameObjMgr::render()
{
	xGameObj* o;
	// Line 59, Address: 0x4044c0, Func Offset: 0
	// Line 60, Address: 0x4044cc, Func Offset: 0xc
	// Line 61, Address: 0x4044d0, Func Offset: 0x10
	// Line 63, Address: 0x4044d8, Func Offset: 0x18
	// Line 64, Address: 0x4044ec, Func Offset: 0x2c
	// Line 65, Address: 0x4044f4, Func Offset: 0x34
	// Line 66, Address: 0x404500, Func Offset: 0x40
	// Func End, Address: 0x404514, Func Offset: 0x54
}

// nextFrame__11xGameObjMgrFv
// Start address: 0x404520
void xGameObjMgr::nextFrame()
{
	xGameObj* o;
	// Line 50, Address: 0x404520, Func Offset: 0
	// Line 51, Address: 0x40452c, Func Offset: 0xc
	// Line 52, Address: 0x404530, Func Offset: 0x10
	// Line 54, Address: 0x404538, Func Offset: 0x18
	// Line 55, Address: 0x40454c, Func Offset: 0x2c
	// Line 56, Address: 0x404554, Func Offset: 0x34
	// Line 57, Address: 0x404560, Func Offset: 0x40
	// Func End, Address: 0x404574, Func Offset: 0x54
}

// restart__11xGameObjMgrFv
// Start address: 0x404580
void xGameObjMgr::restart()
{
	xGameObj* o;
	// Line 39, Address: 0x404580, Func Offset: 0
	// Line 41, Address: 0x40458c, Func Offset: 0xc
	// Line 42, Address: 0x404590, Func Offset: 0x10
	// Line 44, Address: 0x404598, Func Offset: 0x18
	// Line 45, Address: 0x4045ac, Func Offset: 0x2c
	// Line 46, Address: 0x4045b4, Func Offset: 0x34
	// Line 47, Address: 0x4045c0, Func Offset: 0x40
	// Func End, Address: 0x4045d4, Func Offset: 0x54
}

// kill__11xGameObjMgrFv
// Start address: 0x4045e0
void xGameObjMgr::kill()
{
	xGameObj* o;
	// Line 29, Address: 0x4045e0, Func Offset: 0
	// Line 30, Address: 0x4045ec, Func Offset: 0xc
	// Line 31, Address: 0x4045f0, Func Offset: 0x10
	// Line 33, Address: 0x4045f8, Func Offset: 0x18
	// Line 34, Address: 0x40460c, Func Offset: 0x2c
	// Line 35, Address: 0x404614, Func Offset: 0x34
	// Line 36, Address: 0x404620, Func Offset: 0x40
	// Func End, Address: 0x404634, Func Offset: 0x54
}

// init__11xGameObjMgrFv
// Start address: 0x404640
void xGameObjMgr::init()
{
	// Line 25, Address: 0x404640, Func Offset: 0
	// Line 26, Address: 0x404644, Func Offset: 0x4
	// Func End, Address: 0x40464c, Func Offset: 0xc
}

// __ct__11xGameObjMgrFv
// Start address: 0x404650
void* xGameObjMgr::__ct()
{
	// Line 16, Address: 0x404650, Func Offset: 0
	// Line 17, Address: 0x404668, Func Offset: 0x18
	// Line 20, Address: 0x40466c, Func Offset: 0x1c
	// Line 21, Address: 0x404670, Func Offset: 0x20
	// Func End, Address: 0x40467c, Func Offset: 0x2c
}

