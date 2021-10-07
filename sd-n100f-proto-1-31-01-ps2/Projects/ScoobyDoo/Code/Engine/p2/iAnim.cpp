typedef struct Vector3D;
typedef struct tagP2VERTEX;
typedef struct _RpClump;
typedef struct tagxStateThread;
typedef struct Vector4D;
typedef struct tagxState;
typedef struct _iVFXResource;
typedef struct tagXAnimControl;
typedef struct tagiMesh;
typedef struct iActorRuntime;
typedef struct tagiAnimResource;
typedef struct tagxStateMgr;
typedef struct tagiAnimFrame;
typedef struct _iSFXResource;
typedef struct tagxPadAction;
typedef struct tagP2MeshVertex;
typedef struct _RwObject;
typedef struct tagxPhysicsObject;
typedef struct xNavLink;
typedef struct tagiAnimRuntime;
typedef struct _xActor;
typedef struct tagXAnim;
typedef struct tagXAnimTrigger;
typedef struct _iRenderEffects;
typedef struct _RwLLLink;
typedef struct tagP2Weight;
typedef struct xNavPoint;
typedef struct tagxStateLink;
typedef struct tagMATRIX;
typedef struct tagiJointRuntime;
typedef struct _FCinfo;
typedef struct _p2Geom;
typedef struct tagiSkelRuntime;
typedef struct _RwLinkList;
typedef struct tagP2Mesh;

typedef _RpClump*(*type_0)(_RpClump*, void*);
typedef void(*type_3)(_xActor*, int32, tagXAnim*, tagXAnimTrigger*);

typedef tagxState* type_1[10];
typedef uint8 type_2[3];
typedef uint8 type_4[4];
typedef uint8 type_5[4];
typedef uint8 type_6[4];
typedef uint8 type_7[3];
typedef int32 type_8[7];
typedef tagxStateThread type_9[7];
typedef uint8 type_10[4];
typedef uint16 type_11[3];
typedef Vector3D type_12[5];

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

struct _RpClump
{
	_RwObject object;
	_RwLinkList atomicList;
	_RwLLLink inWorldLink;
	_RpClump*(*callback)(_RpClump*, void*);
	uint16 renderFrame;
};

struct tagxStateThread
{
	tagxState* m_state;
	tagXAnimControl* m_animCtl;
	int32 m_deferredWaiting;
	tagxPadAction m_deferred;
	int32 m_rbp;
	tagxState* m_ring[10];
};

struct Vector4D
{
	float32 x;
	float32 y;
	float32 z;
	float32 t;
};

struct tagxState
{
	uint32 m_assetID;
	int32 m_animState;
	uint8* m_activeJoints;
	int16 m_calloutNumber;
	uint8 m_enterEvent;
	uint8 m_exitEvent;
	int32 m_linkCount;
	tagxStateLink* m_links;
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

struct tagiMesh
{
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

struct tagxStateMgr
{
	int32 m_animationBasedMovement;
	int32 m_player;
	tagxState* m_states;
	tagxState* m_current;
	void(*m_triggerFunc)(_xActor*, int32, tagXAnim*, tagXAnimTrigger*);
	int32 m_threadActive[7];
	tagxStateThread m_thread[7];
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

struct tagxPadAction
{
	uint32 m_action;
	uint16 m_button;
	uint16 m_status;
	uint8 pad;
	uint8 m_analogActive;
	int8 m_analogXValue;
	int8 m_analogYValue;
};

struct tagP2MeshVertex
{
	float32 m_x;
	float32 m_y;
	float32 m_z;
};

struct _RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
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

struct tagiAnimRuntime
{
	void* m_sfx;
	void* m_vfx;
};

struct _xActor
{
	void* m_resource;
	iActorRuntime* m_runtime;
	uint32 m_flags;
	tagxStateMgr* m_state;
	uint16 m_objectType;
	uint16 m_actorID;
	void* m_texture;
};

struct tagXAnim
{
	tagiAnimResource* m_resource;
	tagiAnimRuntime* m_runtime;
};

struct tagXAnimTrigger
{
	uint16 m_frame;
	uint16 m_type;
	uint32 m_data;
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

struct _RwLLLink
{
	_RwLLLink* next;
	_RwLLLink* prev;
};

struct tagP2Weight
{
	uint16 m_joint0;
	uint16 m_joint1;
	float32 m_weight0;
	float32 m_weight1;
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

struct tagxStateLink
{
	uint8 m_command;
	uint8 m_flags;
	uint16 m_state;
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

struct tagiSkelRuntime
{
	tagiJointRuntime* m_joints;
};

struct _RwLinkList
{
	_RwLLLink link;
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

uint32 animID;
uint32 animFrame;

void iAnimGetFrame(tagXAnim* anim, int32 joint, int32 frame, Vector3D* trans, Vector3D* rot);
int32 iAnimSetCharJoints(tagXAnimControl* act);

// iAnimGetFrame__FP8tagXAnimiiP8Vector3DP8Vector3D
// Start address: 0x38dbb0
void iAnimGetFrame(tagXAnim* anim, int32 joint, int32 frame, Vector3D* trans, Vector3D* rot)
{
	tagiAnimFrame* aj;
	tagiAnimResource* ar;
	// Line 95, Address: 0x38dbb0, Func Offset: 0
	// Line 96, Address: 0x38dbbc, Func Offset: 0xc
	// Line 99, Address: 0x38dbc0, Func Offset: 0x10
	// Line 101, Address: 0x38dbc4, Func Offset: 0x14
	// Line 103, Address: 0x38dbf0, Func Offset: 0x40
	// Line 105, Address: 0x38dc04, Func Offset: 0x54
	// Line 106, Address: 0x38dc0c, Func Offset: 0x5c
	// Line 107, Address: 0x38dc24, Func Offset: 0x74
	// Line 108, Address: 0x38dc38, Func Offset: 0x88
	// Line 109, Address: 0x38dc4c, Func Offset: 0x9c
	// Line 110, Address: 0x38dc54, Func Offset: 0xa4
	// Line 111, Address: 0x38dc58, Func Offset: 0xa8
	// Line 112, Address: 0x38dc5c, Func Offset: 0xac
	// Line 115, Address: 0x38dc60, Func Offset: 0xb0
	// Line 116, Address: 0x38dc74, Func Offset: 0xc4
	// Line 117, Address: 0x38dc88, Func Offset: 0xd8
	// Line 118, Address: 0x38dc9c, Func Offset: 0xec
	// Func End, Address: 0x38dca4, Func Offset: 0xf4
}

// iAnimSetCharJoints__FP15tagXAnimControlP15tagXAnimTrigger
// Start address: 0x38dcb0
int32 iAnimSetCharJoints(tagXAnimControl* act)
{
	int32 frame;
	int32 frame;
	int32 activeJoint;
	int32 i;
	tagiSkelRuntime* skel;
	tagiAnimResource* data;
	_xActor* actor;
	// Line 33, Address: 0x38dcb0, Func Offset: 0
	// Line 34, Address: 0x38dcb4, Func Offset: 0x4
	// Line 35, Address: 0x38dcbc, Func Offset: 0xc
	// Line 37, Address: 0x38dcc8, Func Offset: 0x18
	// Line 38, Address: 0x38dccc, Func Offset: 0x1c
	// Line 39, Address: 0x38dcd8, Func Offset: 0x28
	// Line 40, Address: 0x38dcdc, Func Offset: 0x2c
	// Line 41, Address: 0x38dce4, Func Offset: 0x34
	// Line 42, Address: 0x38dcf4, Func Offset: 0x44
	// Line 46, Address: 0x38dcf8, Func Offset: 0x48
	// Line 47, Address: 0x38dd00, Func Offset: 0x50
	// Line 49, Address: 0x38dd30, Func Offset: 0x80
	// Line 50, Address: 0x38dd4c, Func Offset: 0x9c
	// Line 51, Address: 0x38dd68, Func Offset: 0xb8
	// Line 54, Address: 0x38dd84, Func Offset: 0xd4
	// Line 55, Address: 0x38dd90, Func Offset: 0xe0
	// Line 56, Address: 0x38dd94, Func Offset: 0xe4
	// Line 57, Address: 0x38dda0, Func Offset: 0xf0
	// Line 58, Address: 0x38dda4, Func Offset: 0xf4
	// Line 59, Address: 0x38ddac, Func Offset: 0xfc
	// Line 60, Address: 0x38ddc0, Func Offset: 0x110
	// Line 62, Address: 0x38ddc4, Func Offset: 0x114
	// Line 63, Address: 0x38ddc8, Func Offset: 0x118
	// Line 64, Address: 0x38ddd0, Func Offset: 0x120
	// Line 66, Address: 0x38de08, Func Offset: 0x158
	// Line 67, Address: 0x38de4c, Func Offset: 0x19c
	// Line 68, Address: 0x38de90, Func Offset: 0x1e0
	// Line 78, Address: 0x38ded4, Func Offset: 0x224
	// Line 79, Address: 0x38ded8, Func Offset: 0x228
	// Line 81, Address: 0x38def0, Func Offset: 0x240
	// Line 82, Address: 0x38def4, Func Offset: 0x244
	// Func End, Address: 0x38defc, Func Offset: 0x24c
}

