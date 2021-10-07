typedef struct tagiModelRuntime;
typedef struct tagiMesh;
typedef struct _xObj;
typedef struct tagP2MeshVertex;
typedef struct tagiModelResource;
typedef struct _iVFXResource;
typedef struct tagxPhysicsObject;
typedef struct xNavLink;
typedef struct tagiAnimFrame;
typedef struct XStreamHeader;
typedef struct Vector3D;
typedef struct _iSFXResource;
typedef struct _iRenderEffects;
typedef struct tagP2Weight;
typedef struct tagXAnimControl;
typedef struct tagiAnimRuntime;
typedef struct xNavPoint;
typedef struct Vector4D;
typedef struct iObjRuntime;
typedef struct iActorRuntime;
typedef struct tagXStreamDirectoryEntry;
typedef struct _RwObject;
typedef struct tagXAnim;
typedef struct _FCinfo;
typedef struct _RwLLLink;
typedef struct _p2Geom;
typedef struct tagP2Mesh;
typedef struct _RpClump;
typedef struct _xModel;
typedef struct tagP2VERTEX;
typedef struct tagiAnimResource;
typedef struct _RwLinkList;
typedef struct tagXStreamMDSDirectory;

typedef _RpClump*(*type_1)(_RpClump*, void*);

typedef tagXStreamDirectoryEntry type_0[1000];
typedef uint8 type_2[3];
typedef uint8 type_3[4];
typedef uint8 type_4[4];
typedef uint8 type_5[4];
typedef int8 type_6[2048];
typedef _xModel type_7[110];
typedef uint8 type_8[4];
typedef uint8 type_9[3];
typedef uint16 type_10[3];
typedef int8 type_11[128];
typedef Vector3D type_12[5];

struct tagiModelRuntime
{
	int32 placeholder;
};

struct tagiMesh
{
};

struct _xObj
{
	void* m_resource;
	iObjRuntime* m_runtime;
	uint32 m_modelID;
	void* m_texture;
	int16 m_objType;
	int16 m_objID;
};

struct tagP2MeshVertex
{
	float32 m_x;
	float32 m_y;
	float32 m_z;
};

struct tagiModelResource
{
	uint32 m_assetID;
	int32 m_meshCount;
	tagP2Mesh* m_mesh;
};

struct _iVFXResource
{
	uint16 m_frame;
	uint8 m_id;
	uint8 m_valid;
	uint32 m_joint;
	Vector3D m_a;
	Vector3D m_b;
	uint8 m_flag;
	uint8 m_pad[3];
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

struct xNavLink
{
	uint8 m_flags;
	uint8 m_countLocked;
	uint8 m_countOccupied;
	uint8 m_unused2;
	uint32 m_unused;
	float32 m_distance;
	Vector3D m_dir;
	xNavPoint* m_linkTo;
	xNavPoint* m_linkFrom;
};

struct tagiAnimFrame
{
	float32* m_tx;
	float32* m_ty;
	float32* m_tz;
	float32* m_rx;
	float32* m_ry;
	float32* m_rz;
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

struct _iSFXResource
{
	uint32 m_id;
	uint32 m_joint;
	uint8 m_frame;
	uint8 m_vol;
	uint8 m_freq;
	uint8 m_valid;
	uint32 m_sndID;
	uint8 m_flag;
	uint8 m_pad[3];
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

struct tagXAnimControl
{
	uint16 m_active;
	uint8 m_state;
	uint8 m_chainState;
	tagXAnimControl* m_chainFrom;
	tagXAnim* m_anim;
	void* m_char;
	int16 m_prevFrame;
	int16 m_frame;
	int16 m_incr;
	int16 m_doneHandled;
	uint8* m_activeJoints;
	Vector3D m_startPosition;
	tagXAnimControl* m_next;
	uint8 m_startEvent;
	uint8 m_endEvent;
	uint8 m_loopEvent;
	uint8 pad;
};

struct tagiAnimRuntime
{
	void* m_sfx;
	void* m_vfx;
};

struct xNavPoint
{
	uint32 m_linkCount;
	xNavLink* m_link;
	Vector3D m_pos;
	float32 m_cost;
	float32 m_heuristic;
	float32 m_f;
	xNavPoint* m_parent;
	uint16 m_flags;
	uint16 m_occupiedCount;
	uint32 m_unused;
};

struct Vector4D
{
	float32 x;
	float32 y;
	float32 z;
	float32 t;
};

struct iObjRuntime
{
	int16 m_flag;
	int16 m_pad;
	_p2Geom* m_geom;
	float32 m_bradius;
	tagxPhysicsObject m_phys;
};

struct iActorRuntime
{
	tagXAnimControl* m_active;
	int32 m_available;
	float32 m_fovr;
	float32 m_bradius;
	uint8 m_onMaterial[4];
	int32 m_routeID;
	int32 m_routePosition;
	xNavPoint* m_routeNavPoint;
	int32 m_health;
	int32 m_sightFOV;
	int32 m_sight;
	int32 m_quiet;
	int32 m_canFly;
	int32 m_canStrafe;
	Vector3D m_memPosition[5];
	int32 m_groupID;
	int32 m_groupIgnore;
	_p2Geom m_geom;
	void* m_skeleton;
	void* m_data;
	tagxPhysicsObject m_phys;
	float32 m_lookat;
	int32 m_haveSpottedAsh;
};

struct tagXStreamDirectoryEntry
{
	uint32 id;
	uint32 type;
	uint32 offset;
	uint32 length;
};

struct _RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct tagXAnim
{
	tagiAnimResource* m_resource;
	tagiAnimRuntime* m_runtime;
};

struct _FCinfo
{
	uint16 nidx[3];
};

struct _RwLLLink
{
	_RwLLLink* next;
	_RwLLLink* prev;
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

struct _RpClump
{
	_RwObject object;
	_RwLinkList atomicList;
	_RwLLLink inWorldLink;
	_RpClump*(*callback)(_RpClump*, void*);
	uint16 renderFrame;
};

struct _xModel
{
	tagiModelResource* m_resource;
	tagiModelRuntime* m_runtime;
};

struct tagP2VERTEX
{
	float32 x;
	float32 y;
	float32 z;
	float32 tu;
	float32 tv;
};

struct tagiAnimResource
{
	uint32 m_assetID;
	uint32 m_flags;
	uint16 m_loopStart;
	uint16 m_loopEnd;
	uint16 m_introStart;
	uint16 m_introEnd;
	uint16 m_exitStart;
	uint16 m_exitEnd;
	uint16 m_frameCount;
	uint16 m_jointCount;
	uint16 m_vfxCount;
	uint16 m_sfxCount;
	tagiAnimFrame* m_joints;
	_iVFXResource* m_vfx;
	_iSFXResource* m_sfx;
};

struct _RwLinkList
{
	_RwLLLink link;
};

struct tagXStreamMDSDirectory
{
	uint32 count;
	tagXStreamDirectoryEntry directory[1000];
};

_xModel g_RTObjModel[110];
int32 g_RTObjModelCount;
int8 vAssertBuf2[128];
XStreamHeader currentHeader;

void xObjSetOrientation(_xObj* a, float32 rx, float32 ry, float32 rz);
void xObjSetPosition(_xObj* o, float32 x, float32 y, float32 z);
void xObjDraw(_xObj* o);
void xObjIdle();
void xObjDestroy(_xObj* o);
void xObjInitialize(_xObj* o);

// xObjSetOrientation__FP5_xObjfff
// Start address: 0x3554a0
void xObjSetOrientation(_xObj* a, float32 rx, float32 ry, float32 rz)
{
	iObjRuntime* r;
	// Line 214, Address: 0x3554a0, Func Offset: 0
	// Line 215, Address: 0x3554a8, Func Offset: 0x8
	// Line 217, Address: 0x3554ac, Func Offset: 0xc
	// Line 218, Address: 0x3554b8, Func Offset: 0x18
	// Func End, Address: 0x3554c8, Func Offset: 0x28
}

// xObjSetPosition__FP5_xObjfff
// Start address: 0x3554d0
void xObjSetPosition(_xObj* o, float32 x, float32 y, float32 z)
{
	iObjRuntime* r;
	// Line 193, Address: 0x3554d0, Func Offset: 0
	// Line 194, Address: 0x3554d8, Func Offset: 0x8
	// Line 196, Address: 0x3554dc, Func Offset: 0xc
	// Line 197, Address: 0x3554e8, Func Offset: 0x18
	// Func End, Address: 0x3554f8, Func Offset: 0x28
}

// xObjDraw__FP5_xObj
// Start address: 0x355500
void xObjDraw(_xObj* o)
{
	// Line 130, Address: 0x355500, Func Offset: 0
	// Line 131, Address: 0x355508, Func Offset: 0x8
	// Line 132, Address: 0x355510, Func Offset: 0x10
	// Func End, Address: 0x355520, Func Offset: 0x20
}

// xObjIdle__FP5_xObj
// Start address: 0x355520
void xObjIdle()
{
	// Line 110, Address: 0x355520, Func Offset: 0
	// Func End, Address: 0x355528, Func Offset: 0x8
}

// xObjDestroy__FP5_xObj
// Start address: 0x355530
void xObjDestroy(_xObj* o)
{
	// Line 83, Address: 0x355530, Func Offset: 0
	// Line 84, Address: 0x355538, Func Offset: 0x8
	// Line 90, Address: 0x3555d8, Func Offset: 0xa8
	// Func End, Address: 0x3555e8, Func Offset: 0xb8
}

// xObjInitialize__FP5_xObj
// Start address: 0x3555f0
void xObjInitialize(_xObj* o)
{
	iObjRuntime* r;
	// Line 56, Address: 0x3555f0, Func Offset: 0
	// Line 59, Address: 0x355600, Func Offset: 0x10
	// Line 61, Address: 0x35560c, Func Offset: 0x1c
	// Line 62, Address: 0x355610, Func Offset: 0x20
	// Line 64, Address: 0x3556b0, Func Offset: 0xc0
	// Line 66, Address: 0x3556b8, Func Offset: 0xc8
	// Line 67, Address: 0x3556c4, Func Offset: 0xd4
	// Line 69, Address: 0x3556d0, Func Offset: 0xe0
	// Func End, Address: 0x3556e4, Func Offset: 0xf4
}

