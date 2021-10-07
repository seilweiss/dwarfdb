typedef struct _RpClump;
typedef struct tagxState;
typedef struct _FCinfo;
typedef struct _xActor;
typedef struct tagXAnimControl;
typedef struct _RwObject;
typedef struct Vector4D;
typedef struct tagiAnimFrame;
typedef struct tagP2Mesh;
typedef struct tagXAnim;
typedef struct tagP2VERTEX;
typedef struct tagiAnimResource;
typedef struct tagP2MeshVertex;
typedef struct tagiAnimRuntime;
typedef struct _RwLLLink;
typedef struct tagP2Weight;
typedef struct tagxStateLink;
typedef struct tagxPhysicsObject;
typedef struct iActorRuntime;
typedef struct tagxStateMgr;
typedef struct tagXAnimTrigger;
typedef struct Vector3D;
typedef struct tagxPadAction;
typedef struct tagxStateThread;
typedef struct tagiMesh;
typedef struct xNavLink;
typedef struct _RwLinkList;
typedef struct _iRenderEffects;
typedef struct _iVFXResource;
typedef struct xNavPoint;
typedef struct _iSFXResource;
typedef struct _p2Geom;

typedef _RpClump*(*type_14)(_RpClump*, void*);
typedef void(*type_34)(_xActor*, int32, tagXAnim*, tagXAnimTrigger*);

typedef tagxStateLink type_0[1];
typedef tagxStateLink type_1[1];
typedef uint8 type_2[3];
typedef Vector3D type_3[5];
typedef uint16 type_4[3];
typedef tagxStateLink type_5[6];
typedef tagxStateLink type_6[1];
typedef tagxStateLink type_7[1];
typedef tagxStateLink type_8[24];
typedef tagxStateLink type_9[1];
typedef tagxStateLink type_10[6];
typedef uint8 type_11[25];
typedef tagxStateLink type_12[1];
typedef tagxStateLink type_13[1];
typedef tagxStateLink type_15[14];
typedef tagxStateLink type_16[6];
typedef tagxStateLink type_17[1];
typedef tagxStateLink type_18[1];
typedef tagxStateLink type_19[6];
typedef tagxStateLink type_20[1];
typedef tagxStateLink type_21[1];
typedef tagxStateLink type_22[1];
typedef tagxState* type_23[10];
typedef tagxStateLink type_24[23];
typedef tagxStateLink type_25[6];
typedef uint8 type_26[25];
typedef tagxStateLink type_27[1];
typedef tagxStateLink type_28[1];
typedef uint8 type_29[4];
typedef uint8 type_30[4];
typedef uint8 type_31[4];
typedef tagxStateLink type_32[15];
typedef tagxStateLink type_33[6];
typedef tagxStateLink type_35[1];
typedef uint8 type_36[3];
typedef tagxStateLink type_37[1];
typedef tagxStateLink type_38[6];
typedef uint8 type_39[4];
typedef tagxStateLink type_40[1];
typedef tagxStateLink type_41[1];
typedef tagxState type_42[31];
typedef int32 type_43[7];
typedef tagxStateLink type_44[15];
typedef tagxStateThread type_45[7];
typedef tagxStateLink type_46[6];

struct _RpClump
{
	_RwObject object;
	_RwLinkList atomicList;
	_RwLLLink inWorldLink;
	_RpClump*(*callback)(_RpClump*, void*);
	uint16 renderFrame;
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

struct _FCinfo
{
	uint16 nidx[3];
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

struct Vector4D
{
	float32 x;
	float32 y;
	float32 z;
	float32 t;
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

struct tagXAnim
{
	tagiAnimResource* m_resource;
	tagiAnimRuntime* m_runtime;
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

struct tagP2MeshVertex
{
	float32 m_x;
	float32 m_y;
	float32 m_z;
};

struct tagiAnimRuntime
{
	void* m_sfx;
	void* m_vfx;
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

struct tagxStateLink
{
	uint8 m_command;
	uint8 m_flags;
	uint16 m_state;
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

struct tagXAnimTrigger
{
	uint16 m_frame;
	uint16 m_type;
	uint32 m_data;
};

struct Vector3D
{
	float32 x;
	float32 y;
	float32 z;
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

struct _p2Geom
{
	uint32 m_meshCount;
	tagP2Mesh* m_mesh;
	_iRenderEffects effects;
	_RpClump* m_clump;
};

uint8 g_sdaJointsAll[25];
uint8 g_sdaJointsUpperOnly[25];
tagxStateLink link_sda_Idle[24];
tagxStateLink link_sda_StandRRun[23];
tagxStateLink link_sda_Walk[15];
tagxStateLink link_sda_WalkBack[14];
tagxStateLink link_sda_Run[15];
tagxStateLink link_sda_DodgeLeft[6];
tagxStateLink link_sda_DodgeRight[6];
tagxStateLink link_sda_AttackLeft[6];
tagxStateLink link_sda_AttackRight[6];
tagxStateLink link_sda_AttackUp[6];
tagxStateLink link_sda_AttackClaw1[6];
tagxStateLink link_sda_AttackClaw2[6];
tagxStateLink link_sda_AttackKick[6];
tagxStateLink link_sda_InjuryFront[1];
tagxStateLink link_sda_InjuryLeft[1];
tagxStateLink link_sda_InjuryRight[1];
tagxStateLink link_sda_InjuryDown[1];
tagxStateLink link_sda_InjuryUp[1];
tagxStateLink link_sda_InjuryFrontUpperBodyThread[1];
tagxStateLink link_sda_InjuryLeftUpperBodyThread[1];
tagxStateLink link_sda_InjuryRightUpperBodyThread[1];
tagxStateLink link_sda_InjuryDownUpperBodyThread[1];
tagxStateLink link_sda_InjuryUpUpperBodyThread[1];
tagxStateLink link_sda_DeathMelee1[1];
tagxStateLink link_sda_DeathMelee2[1];
tagxStateLink link_sda_DeathMelee3[1];
tagxStateLink link_sda_DeathMelee4[1];
tagxStateLink link_sda_DeathRange1[1];
tagxStateLink link_sda_DeathRange2[1];
tagxStateLink link_sda_DeathRange3[1];
tagxStateLink link_sda_DeathRange4[1];
tagxState g_sdaStates[31];
float32 g_DEGTORAD;

void xSDAStateReset();
void xSDAStateInit();

// xSDAStateReset__Fv
// Start address: 0x332970
void xSDAStateReset()
{
	// Line 147, Address: 0x332970, Func Offset: 0
	// Line 149, Address: 0x332978, Func Offset: 0x8
	// Line 151, Address: 0x33298c, Func Offset: 0x1c
	// Func End, Address: 0x33299c, Func Offset: 0x2c
}

// xSDAStateInit__Fv
// Start address: 0x3329a0
void xSDAStateInit()
{
	// Line 137, Address: 0x3329a0, Func Offset: 0
	// Line 138, Address: 0x3329a8, Func Offset: 0x8
	// Line 139, Address: 0x3329bc, Func Offset: 0x1c
	// Func End, Address: 0x3329cc, Func Offset: 0x2c
}

