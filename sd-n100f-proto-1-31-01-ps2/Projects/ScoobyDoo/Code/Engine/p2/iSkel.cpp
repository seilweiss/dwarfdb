typedef struct tagxState;
typedef struct iActorRuntime;
typedef struct tagiJointResource;
typedef struct tagxStateMgr;
typedef struct tagP2MeshVertex;
typedef struct _xActor;
typedef struct xSkel;
typedef struct _iVFXResource;
typedef struct tagxPhysicsObject;
typedef struct tagiAnimFrame;
typedef struct Vector3D;
typedef struct tagXAnim;
typedef struct _iSFXResource;
typedef struct tagXAnimTrigger;
typedef struct tagxPadAction;
typedef struct xNavLink;
typedef struct tagiJointRuntime;
typedef struct _iRenderEffects;
typedef struct tagP2Weight;
typedef struct tagXAnimControl;
typedef struct _RwObject;
typedef struct tagiAnimRuntime;
typedef struct tagxStateLink;
typedef struct Vector4D;
typedef struct tagMATRIX;
typedef struct xNavPoint;
typedef struct _RwLLLink;
typedef struct _FCinfo;
typedef struct tagiSkelResource;
typedef struct _p2Geom;
typedef struct tagP2Mesh;
typedef struct _RpClump;
typedef struct tagiSkelRuntime;
typedef struct tagP2VERTEX;
typedef struct tagiAnimResource;
typedef struct _RwLinkList;
typedef struct tagxStateThread;
typedef struct tagiMesh;

typedef _RpClump*(*type_0)(_RpClump*, void*);
typedef void(*type_2)(_xActor*, int32, tagXAnim*, tagXAnimTrigger*);

typedef tagxState* type_1[10];
typedef uint8 type_3[3];
typedef uint8 type_4[4];
typedef uint8 type_5[4];
typedef uint8 type_6[4];
typedef int32 type_7[7];
typedef tagxStateThread type_8[7];
typedef uint8 type_9[3];
typedef uint8 type_10[4];
typedef uint16 type_11[3];
typedef Vector3D type_12[5];

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

struct tagiJointResource
{
	tagMATRIX m_orientMatrix;
	Vector3D m_home;
	uint32 m_parent;
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

struct tagP2MeshVertex
{
	float32 m_x;
	float32 m_y;
	float32 m_z;
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

struct xSkel
{
	tagiSkelResource* m_resource;
	tagiSkelRuntime* m_runtime;
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

struct tagiAnimFrame
{
	float32* m_tx;
	float32* m_ty;
	float32* m_tz;
	float32* m_rx;
	float32* m_ry;
	float32* m_rz;
};

struct Vector3D
{
	float32 x;
	float32 y;
	float32 z;
};

struct tagXAnim
{
	tagiAnimResource* m_resource;
	tagiAnimRuntime* m_runtime;
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

struct tagXAnimTrigger
{
	uint16 m_frame;
	uint16 m_type;
	uint32 m_data;
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

struct _RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct tagiAnimRuntime
{
	void* m_sfx;
	void* m_vfx;
};

struct tagxStateLink
{
	uint8 m_command;
	uint8 m_flags;
	uint16 m_state;
};

struct Vector4D
{
	float32 x;
	float32 y;
	float32 z;
	float32 t;
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

struct _RwLLLink
{
	_RwLLLink* next;
	_RwLLLink* prev;
};

struct _FCinfo
{
	uint16 nidx[3];
};

struct tagiSkelResource
{
	uint32 m_assetID;
	uint32 m_jointCount;
	tagiJointResource* m_joints;
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

struct tagiSkelRuntime
{
	tagiJointRuntime* m_joints;
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

struct tagxStateThread
{
	tagxState* m_state;
	tagXAnimControl* m_animCtl;
	int32 m_deferredWaiting;
	tagxPadAction m_deferred;
	int32 m_rbp;
	tagxState* m_ring[10];
};

struct tagiMesh
{
};


void iSkelAssign(_xActor* actor, xSkel* skeleton);

// iSkelAssign__FP7_xActorP5xSkel
// Start address: 0x36fd80
void iSkelAssign(_xActor* actor, xSkel* skeleton)
{
	// Line 22, Address: 0x36fd80, Func Offset: 0
	// Line 23, Address: 0x36fd88, Func Offset: 0x8
	// Func End, Address: 0x36fd90, Func Offset: 0x10
}

