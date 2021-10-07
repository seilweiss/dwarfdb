typedef struct _p2Geom;
typedef struct _xActor;
typedef struct tagXStreamMDSDirectory;
typedef struct tagxStateMgr;
typedef struct tagiAnimResource;
typedef struct tagXAnim;
typedef struct tagxStateThread;
typedef struct tagP2Mesh;
typedef struct xNavPoint;
typedef struct tagiAnimRuntime;
typedef struct _RpClump;
typedef struct tagxState;
typedef struct tagxStateLink;
typedef struct tagP2VERTEX;
typedef struct tagXAnimTrigger;
typedef struct XStreamHeader;
typedef struct tagP2MeshVertex;
typedef struct Vector3D;
typedef struct tagP2Weight;
typedef struct _FCinfo;
typedef struct Vector4D;
typedef struct tagXStreamDirectoryEntry;
typedef struct _RwObject;
typedef struct tagxPadAction;
typedef struct tagXAnimControl;
typedef struct tagiMesh;
typedef struct tagxActorDBData;
typedef struct _iVFXResource;
typedef struct iActorRuntime;
typedef struct tagiAnimFrame;
typedef struct _iSFXResource;
typedef struct _RwLLLink;
typedef struct tagxPhysicsObject;
typedef struct xNavLink;
typedef struct _iRenderEffects;
typedef struct _RwLinkList;

typedef void(*type_6)(_xActor*, int32, tagXAnim*, tagXAnimTrigger*);
typedef _RpClump*(*type_21)(_RpClump*, void*);
typedef int32(*type_41)(int32, int32, int32);

typedef _xActor type_0[1];
typedef _xActor type_1[1];
typedef tagXStreamDirectoryEntry type_2[1000];
typedef _xActor type_3[1];
typedef _xActor type_4[4];
typedef _xActor type_5[1];
typedef _xActor type_7[4];
typedef Vector3D type_8[5];
typedef _xActor type_9[4];
typedef _xActor type_10[2];
typedef _xActor type_11[1];
typedef _xActor type_12[1];
typedef _xActor type_13[1];
typedef _xActor type_14[4];
typedef _xActor type_15[4];
typedef _xActor type_16[1];
typedef _xActor type_17[1];
typedef _xActor* type_18[40];
typedef int8 type_19[2048];
typedef int8 type_20[40];
typedef _xActor* type_22[13];
typedef _xActor type_23[1];
typedef _xActor type_24[4];
typedef _xActor type_25[4];
typedef tagxState* type_26[10];
typedef _xActor type_27[1];
typedef _xActor type_28[4];
typedef _xActor type_29[4];
typedef uint8 type_30[3];
typedef _xActor type_31[4];
typedef _xActor type_32[4];
typedef _xActor type_33[1];
typedef _xActor type_34[4];
typedef int8 type_35[128];
typedef _xActor type_36[4];
typedef _xActor type_37[4];
typedef _xActor type_38[1];
typedef _xActor type_39[1];
typedef uint8 type_40[4];
typedef _xActor type_42[1];
typedef uint8 type_43[4];
typedef uint8 type_44[4];
typedef _xActor type_45[1];
typedef uint8 type_46[3];
typedef _xActor type_47[1];
typedef _xActor type_48[1];
typedef int32 type_49[7];
typedef _xActor type_50[1];
typedef tagxStateThread type_51[7];
typedef _xActor type_52[1];
typedef int8* type_53[71];
typedef uint8 type_54[4];
typedef _xActor type_55[4];
typedef int8 type_56[256];
typedef _xActor type_57[4];
typedef _xActor type_58[4];
typedef int8 type_59[256];
typedef uint16 type_60[3];

struct _p2Geom
{
	uint32 m_meshCount;
	tagP2Mesh* m_mesh;
	_iRenderEffects effects;
	_RpClump* m_clump;
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

struct tagXStreamMDSDirectory
{
	uint32 count;
	tagXStreamDirectoryEntry directory[1000];
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

struct tagXAnim
{
	tagiAnimResource* m_resource;
	tagiAnimRuntime* m_runtime;
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

struct tagiAnimRuntime
{
	void* m_sfx;
	void* m_vfx;
};

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

struct tagxStateLink
{
	uint8 m_command;
	uint8 m_flags;
	uint16 m_state;
};

struct tagP2VERTEX
{
	float32 x;
	float32 y;
	float32 z;
	float32 tu;
	float32 tv;
};

struct tagXAnimTrigger
{
	uint16 m_frame;
	uint16 m_type;
	uint32 m_data;
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

struct _FCinfo
{
	uint16 nidx[3];
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

struct _RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
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

struct tagxActorDBData
{
	_xActor m_ash[1];
	_xActor m_skullBat[4];
	_xActor m_deadite[4];
	_xActor m_treeBoss[1];
	_xActor m_skeleton[4];
	_xActor m_troopKnife[4];
	_xActor m_troopClaw[4];
	_xActor m_troopRange[4];
	_xActor m_troopLeaderBoss[1];
	_xActor m_hellbillyFat[4];
	_xActor m_hellbillyThin[4];
	_xActor m_demonPig[4];
	_xActor m_matriarchBoss[1];
	_xActor m_grandma[1];
	_xActor m_allard[1];
	_xActor m_deadAshBoss[1];
	_xActor m_annieZombieBoss[1];
	_xActor m_badAsh[1];
	_xActor m_jenny[1];
	_xActor m_evilHand[1];
	_xActor m_warriorCultist[4];
	_xActor m_guildMember[4];
	_xActor m_merchant[4];
	_xActor m_alzeez[1];
	_xActor m_wizardBoss[1];
	_xActor m_mudGolemBoss[1];
	_xActor m_armorySkeleton[4];
	_xActor m_armoryBoss[1];
	_xActor m_invisibleMen[4];
	_xActor m_netherPet[4];
	_xActor m_elderBeast[2];
	_xActor m_cthulhuBoss[1];
	_xActor m_treeArm[1];
	_xActor m_headlessSkeleton[1];
	_xActor m_netherPet2[4];
	_xActor m_netherPet3[4];
	_xActor m_captain[1];
	_xActor m_pumpKeeper[1];
	_xActor* m_p[40];
	int8 m_plimit[40];
	_xActor* m_active[13];
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

struct _RwLLLink
{
	_RwLLLink* next;
	_RwLLLink* prev;
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

struct _RwLinkList
{
	_RwLLLink link;
};

int8 vAssertBuf2[128];
XStreamHeader currentHeader;
tagxActorDBData* gadb;
int32(*xStateTransitionIsPossible)(int32, int32, int32);

void xCharStateReset(int32 stateMax, tagxState* s);
void xCharStateInit(int32 stateMax, tagxState* s);
void xStateDoCallout(_xActor* actor, tagxStateThread* thread, int32 callout);
void xStateIdle(_xActor* actor);
int32 xStateTransition(_xActor* actor, tagxPadAction* action);
int32 xStateTransitionIsPossible(int32 actorType, int32 actorId, int32 command);
void xStateLevelRestart(_xActor* actor);
void xStateLevelReset(_xActor* actor);
void xStateInit(_xActor* actor, tagxState* states, int32 animationBasedMovement, void(*triggerHandler)(_xActor*, int32, tagXAnim*, tagXAnimTrigger*));
void xStateInitialize();

// xCharStateReset__FiP9tagxState
// Start address: 0x32f390
void xCharStateReset(int32 stateMax, tagxState* s)
{
	tagXAnim* anim;
	int32 i;
	// Line 890, Address: 0x32f390, Func Offset: 0
	// Line 892, Address: 0x32f39c, Func Offset: 0xc
	// Line 894, Address: 0x32f3b0, Func Offset: 0x20
	// Line 896, Address: 0x32f3b8, Func Offset: 0x28
	// Line 897, Address: 0x32f3d4, Func Offset: 0x44
	// Line 899, Address: 0x32f3d8, Func Offset: 0x48
	// Line 900, Address: 0x32f3f4, Func Offset: 0x64
	// Line 901, Address: 0x32f404, Func Offset: 0x74
	// Func End, Address: 0x32f40c, Func Offset: 0x7c
}

// xCharStateInit__FiP9tagxState
// Start address: 0x32f410
void xCharStateInit(int32 stateMax, tagxState* s)
{
	tagXAnim* anim;
	int32 i;
	// Line 863, Address: 0x32f410, Func Offset: 0
	// Line 867, Address: 0x32f430, Func Offset: 0x20
	// Line 868, Address: 0x32f4d0, Func Offset: 0xc0
	// Line 870, Address: 0x32f570, Func Offset: 0x160
	// Line 872, Address: 0x32f57c, Func Offset: 0x16c
	// Line 874, Address: 0x32f59c, Func Offset: 0x18c
	// Line 876, Address: 0x32f5c0, Func Offset: 0x1b0
	// Line 877, Address: 0x32f5fc, Func Offset: 0x1ec
	// Line 878, Address: 0x32f694, Func Offset: 0x284
	// Line 880, Address: 0x32f698, Func Offset: 0x288
	// Line 881, Address: 0x32f6ac, Func Offset: 0x29c
	// Line 882, Address: 0x32f6d8, Func Offset: 0x2c8
	// Line 883, Address: 0x32f6ec, Func Offset: 0x2dc
	// Func End, Address: 0x32f70c, Func Offset: 0x2fc
}

// xStateDoCallout__FP7_xActorP15tagxStateThreadi
// Start address: 0x32f710
void xStateDoCallout(_xActor* actor, tagxStateThread* thread, int32 callout)
{
	// Line 775, Address: 0x32f710, Func Offset: 0
	// Line 776, Address: 0x32f71c, Func Offset: 0xc
	// Line 779, Address: 0x32f744, Func Offset: 0x34
	// Line 780, Address: 0x32f74c, Func Offset: 0x3c
	// Line 782, Address: 0x32f754, Func Offset: 0x44
	// Line 783, Address: 0x32f75c, Func Offset: 0x4c
	// Line 785, Address: 0x32f764, Func Offset: 0x54
	// Line 786, Address: 0x32f76c, Func Offset: 0x5c
	// Line 788, Address: 0x32f774, Func Offset: 0x64
	// Line 789, Address: 0x32f77c, Func Offset: 0x6c
	// Line 791, Address: 0x32f784, Func Offset: 0x74
	// Line 792, Address: 0x32f78c, Func Offset: 0x7c
	// Line 794, Address: 0x32f794, Func Offset: 0x84
	// Line 795, Address: 0x32f79c, Func Offset: 0x8c
	// Line 797, Address: 0x32f7a4, Func Offset: 0x94
	// Line 798, Address: 0x32f7ac, Func Offset: 0x9c
	// Line 800, Address: 0x32f7b4, Func Offset: 0xa4
	// Line 801, Address: 0x32f7bc, Func Offset: 0xac
	// Line 803, Address: 0x32f7c4, Func Offset: 0xb4
	// Line 804, Address: 0x32f7cc, Func Offset: 0xbc
	// Line 806, Address: 0x32f7d4, Func Offset: 0xc4
	// Line 809, Address: 0x32f810, Func Offset: 0x100
	// Func End, Address: 0x32f820, Func Offset: 0x110
}

// xStateIdle__FP7_xActor
// Start address: 0x32f820
void xStateIdle(_xActor* actor)
{
	tagxStateMgr* sinfo;
	tagxStateThread* thread;
	int32 t;
	// Line 754, Address: 0x32f820, Func Offset: 0
	// Line 760, Address: 0x32f838, Func Offset: 0x18
	// Line 762, Address: 0x32f83c, Func Offset: 0x1c
	// Line 764, Address: 0x32f848, Func Offset: 0x28
	// Line 765, Address: 0x32f85c, Func Offset: 0x3c
	// Line 767, Address: 0x32f870, Func Offset: 0x50
	// Line 768, Address: 0x32f880, Func Offset: 0x60
	// Line 771, Address: 0x32f894, Func Offset: 0x74
	// Line 772, Address: 0x32f8ac, Func Offset: 0x8c
	// Func End, Address: 0x32f8c8, Func Offset: 0xa8
}

// xStateTransition__FP7_xActorP13tagxPadAction
// Start address: 0x32f8d0
int32 xStateTransition(_xActor* actor, tagxPadAction* action)
{
	int8 actorString[256];
	int8 actionString[256];
	int32 n;
	int32 alreadyActive;
	tagxStateThread* newThread;
	int32 alreadyActive;
	int32 firstAvail;
	int32 n;
	int32 t2;
	iActorRuntime* a;
	int32 found;
	tagxStateMgr* sinfo;
	uint32 command;
	tagxStateThread* thread;
	tagxStateLink* l;
	int32 t;
	int32 i;
	// Line 329, Address: 0x32f8d0, Func Offset: 0
	// Line 332, Address: 0x32f8fc, Func Offset: 0x2c
	// Line 341, Address: 0x32f900, Func Offset: 0x30
	// Line 342, Address: 0x32f904, Func Offset: 0x34
	// Line 381, Address: 0x32f908, Func Offset: 0x38
	// Line 383, Address: 0x32f914, Func Offset: 0x44
	// Line 385, Address: 0x32f920, Func Offset: 0x50
	// Line 387, Address: 0x32f934, Func Offset: 0x64
	// Line 389, Address: 0x32f948, Func Offset: 0x78
	// Line 390, Address: 0x32f954, Func Offset: 0x84
	// Line 392, Address: 0x32f960, Func Offset: 0x90
	// Line 393, Address: 0x32f96c, Func Offset: 0x9c
	// Line 394, Address: 0x32f970, Func Offset: 0xa0
	// Line 395, Address: 0x32f984, Func Offset: 0xb4
	// Line 396, Address: 0x32f990, Func Offset: 0xc0
	// Line 398, Address: 0x32f9a0, Func Offset: 0xd0
	// Line 399, Address: 0x32f9b8, Func Offset: 0xe8
	// Line 401, Address: 0x32f9d0, Func Offset: 0x100
	// Line 402, Address: 0x32f9d8, Func Offset: 0x108
	// Line 404, Address: 0x32f9e0, Func Offset: 0x110
	// Line 405, Address: 0x32f9e8, Func Offset: 0x118
	// Line 407, Address: 0x32f9f0, Func Offset: 0x120
	// Line 409, Address: 0x32f9f4, Func Offset: 0x124
	// Line 410, Address: 0x32f9f8, Func Offset: 0x128
	// Line 411, Address: 0x32f9fc, Func Offset: 0x12c
	// Line 412, Address: 0x32fa00, Func Offset: 0x130
	// Line 413, Address: 0x32fa08, Func Offset: 0x138
	// Line 417, Address: 0x32fa44, Func Offset: 0x174
	// Line 421, Address: 0x32fa50, Func Offset: 0x180
	// Line 422, Address: 0x32fa54, Func Offset: 0x184
	// Line 424, Address: 0x32fa60, Func Offset: 0x190
	// Line 427, Address: 0x32fa74, Func Offset: 0x1a4
	// Line 434, Address: 0x32fa88, Func Offset: 0x1b8
	// Line 437, Address: 0x32fa94, Func Offset: 0x1c4
	// Line 438, Address: 0x32fa9c, Func Offset: 0x1cc
	// Line 440, Address: 0x32faa8, Func Offset: 0x1d8
	// Line 445, Address: 0x32fab4, Func Offset: 0x1e4
	// Line 446, Address: 0x32fac4, Func Offset: 0x1f4
	// Line 452, Address: 0x32fac8, Func Offset: 0x1f8
	// Line 456, Address: 0x32fad8, Func Offset: 0x208
	// Line 458, Address: 0x32fae4, Func Offset: 0x214
	// Line 459, Address: 0x32faf0, Func Offset: 0x220
	// Line 460, Address: 0x32faf8, Func Offset: 0x228
	// Line 462, Address: 0x32fb04, Func Offset: 0x234
	// Line 464, Address: 0x32fb0c, Func Offset: 0x23c
	// Line 466, Address: 0x32fb1c, Func Offset: 0x24c
	// Line 470, Address: 0x32fb34, Func Offset: 0x264
	// Line 472, Address: 0x32fb40, Func Offset: 0x270
	// Line 475, Address: 0x32fb4c, Func Offset: 0x27c
	// Line 476, Address: 0x32fb68, Func Offset: 0x298
	// Line 477, Address: 0x32fb78, Func Offset: 0x2a8
	// Line 479, Address: 0x32fb80, Func Offset: 0x2b0
	// Line 482, Address: 0x32fb90, Func Offset: 0x2c0
	// Line 487, Address: 0x32fb98, Func Offset: 0x2c8
	// Line 488, Address: 0x32fbac, Func Offset: 0x2dc
	// Line 489, Address: 0x32fbc0, Func Offset: 0x2f0
	// Line 491, Address: 0x32fbc8, Func Offset: 0x2f8
	// Line 502, Address: 0x32fbe4, Func Offset: 0x314
	// Line 504, Address: 0x32fbf4, Func Offset: 0x324
	// Line 507, Address: 0x32fc24, Func Offset: 0x354
	// Line 509, Address: 0x32fc2c, Func Offset: 0x35c
	// Line 516, Address: 0x32fc64, Func Offset: 0x394
	// Line 521, Address: 0x32fc6c, Func Offset: 0x39c
	// Line 527, Address: 0x32fc7c, Func Offset: 0x3ac
	// Line 531, Address: 0x32fc84, Func Offset: 0x3b4
	// Line 532, Address: 0x32fc90, Func Offset: 0x3c0
	// Line 533, Address: 0x32fca4, Func Offset: 0x3d4
	// Line 535, Address: 0x32fcb0, Func Offset: 0x3e0
	// Line 536, Address: 0x32fccc, Func Offset: 0x3fc
	// Line 537, Address: 0x32fce4, Func Offset: 0x414
	// Line 540, Address: 0x32fd00, Func Offset: 0x430
	// Line 541, Address: 0x32fd14, Func Offset: 0x444
	// Line 543, Address: 0x32fd1c, Func Offset: 0x44c
	// Line 550, Address: 0x32fd30, Func Offset: 0x460
	// Line 561, Address: 0x32fd40, Func Offset: 0x470
	// Line 562, Address: 0x32fd44, Func Offset: 0x474
	// Line 563, Address: 0x32fd48, Func Offset: 0x478
	// Line 565, Address: 0x32fd54, Func Offset: 0x484
	// Line 566, Address: 0x32fd68, Func Offset: 0x498
	// Line 568, Address: 0x32fd6c, Func Offset: 0x49c
	// Line 569, Address: 0x32fd74, Func Offset: 0x4a4
	// Line 572, Address: 0x32fda8, Func Offset: 0x4d8
	// Line 575, Address: 0x32fdbc, Func Offset: 0x4ec
	// Line 576, Address: 0x32fdc0, Func Offset: 0x4f0
	// Line 578, Address: 0x32fdc8, Func Offset: 0x4f8
	// Line 580, Address: 0x32fde0, Func Offset: 0x510
	// Line 581, Address: 0x32fde8, Func Offset: 0x518
	// Line 593, Address: 0x32fdec, Func Offset: 0x51c
	// Line 594, Address: 0x32fdf8, Func Offset: 0x528
	// Line 595, Address: 0x32fe08, Func Offset: 0x538
	// Line 598, Address: 0x32fe14, Func Offset: 0x544
	// Line 600, Address: 0x32fe28, Func Offset: 0x558
	// Line 602, Address: 0x32fe38, Func Offset: 0x568
	// Line 603, Address: 0x32fe54, Func Offset: 0x584
	// Line 604, Address: 0x32fe58, Func Offset: 0x588
	// Line 606, Address: 0x32fe5c, Func Offset: 0x58c
	// Line 608, Address: 0x32fe6c, Func Offset: 0x59c
	// Line 611, Address: 0x32fea8, Func Offset: 0x5d8
	// Line 614, Address: 0x32feb0, Func Offset: 0x5e0
	// Line 617, Address: 0x32feb4, Func Offset: 0x5e4
	// Line 635, Address: 0x32febc, Func Offset: 0x5ec
	// Line 637, Address: 0x32fec0, Func Offset: 0x5f0
	// Line 639, Address: 0x32fecc, Func Offset: 0x5fc
	// Line 640, Address: 0x32fefc, Func Offset: 0x62c
	// Line 643, Address: 0x32ff30, Func Offset: 0x660
	// Line 646, Address: 0x32ff44, Func Offset: 0x674
	// Line 647, Address: 0x32ff48, Func Offset: 0x678
	// Line 650, Address: 0x32ff50, Func Offset: 0x680
	// Line 652, Address: 0x32ff68, Func Offset: 0x698
	// Line 654, Address: 0x32ff70, Func Offset: 0x6a0
	// Line 655, Address: 0x32ff88, Func Offset: 0x6b8
	// Line 656, Address: 0x32ff90, Func Offset: 0x6c0
	// Line 658, Address: 0x32ffa4, Func Offset: 0x6d4
	// Line 660, Address: 0x32ffc0, Func Offset: 0x6f0
	// Line 661, Address: 0x32ffd0, Func Offset: 0x700
	// Line 664, Address: 0x33000c, Func Offset: 0x73c
	// Line 665, Address: 0x330014, Func Offset: 0x744
	// Line 667, Address: 0x330030, Func Offset: 0x760
	// Line 668, Address: 0x330040, Func Offset: 0x770
	// Line 671, Address: 0x330074, Func Offset: 0x7a4
	// Line 674, Address: 0x33007c, Func Offset: 0x7ac
	// Line 679, Address: 0x3300b4, Func Offset: 0x7e4
	// Line 685, Address: 0x3300bc, Func Offset: 0x7ec
	// Line 687, Address: 0x3300c8, Func Offset: 0x7f8
	// Line 689, Address: 0x3300d4, Func Offset: 0x804
	// Line 695, Address: 0x3300e4, Func Offset: 0x814
	// Line 697, Address: 0x3300ec, Func Offset: 0x81c
	// Line 698, Address: 0x33010c, Func Offset: 0x83c
	// Line 704, Address: 0x330124, Func Offset: 0x854
	// Line 708, Address: 0x33012c, Func Offset: 0x85c
	// Line 711, Address: 0x330138, Func Offset: 0x868
	// Line 712, Address: 0x330148, Func Offset: 0x878
	// Line 719, Address: 0x3301d0, Func Offset: 0x900
	// Line 720, Address: 0x3301e8, Func Offset: 0x918
	// Line 721, Address: 0x330208, Func Offset: 0x938
	// Line 722, Address: 0x330210, Func Offset: 0x940
	// Line 723, Address: 0x330220, Func Offset: 0x950
	// Line 724, Address: 0x330228, Func Offset: 0x958
	// Line 750, Address: 0x330268, Func Offset: 0x998
	// Line 751, Address: 0x33026c, Func Offset: 0x99c
	// Func End, Address: 0x33029c, Func Offset: 0x9cc
}

// xStateTransitionIsPossible__Fiii
// Start address: 0x3302a0
int32 xStateTransitionIsPossible(int32 actorType, int32 actorId, int32 command)
{
	int32 n;
	tagxStateMgr* sinfo;
	tagxStateThread* thread;
	tagxStateLink* l;
	int32 t;
	int32 i;
	// Line 270, Address: 0x3302a0, Func Offset: 0
	// Line 275, Address: 0x3302c4, Func Offset: 0x24
	// Line 279, Address: 0x3302d0, Func Offset: 0x30
	// Line 284, Address: 0x3302e4, Func Offset: 0x44
	// Line 289, Address: 0x3302f0, Func Offset: 0x50
	// Line 293, Address: 0x330300, Func Offset: 0x60
	// Line 294, Address: 0x330308, Func Offset: 0x68
	// Line 299, Address: 0x330318, Func Offset: 0x78
	// Line 306, Address: 0x330334, Func Offset: 0x94
	// Line 309, Address: 0x330344, Func Offset: 0xa4
	// Line 310, Address: 0x330350, Func Offset: 0xb0
	// Line 311, Address: 0x330364, Func Offset: 0xc4
	// Line 313, Address: 0x330370, Func Offset: 0xd0
	// Line 314, Address: 0x330384, Func Offset: 0xe4
	// Line 317, Address: 0x330390, Func Offset: 0xf0
	// Line 321, Address: 0x33039c, Func Offset: 0xfc
	// Line 322, Address: 0x3303b0, Func Offset: 0x110
	// Line 324, Address: 0x3303c4, Func Offset: 0x124
	// Line 325, Address: 0x3303c8, Func Offset: 0x128
	// Func End, Address: 0x3303d0, Func Offset: 0x130
}

// xStateLevelRestart__FP7_xActor
// Start address: 0x3303d0
void xStateLevelRestart(_xActor* actor)
{
	tagxStateThread* thread;
	tagxStateMgr* sinfo;
	// Line 215, Address: 0x3303d0, Func Offset: 0
	// Line 221, Address: 0x3303e0, Func Offset: 0x10
	// Line 223, Address: 0x3303e4, Func Offset: 0x14
	// Line 224, Address: 0x3303ec, Func Offset: 0x1c
	// Line 226, Address: 0x3303f0, Func Offset: 0x20
	// Line 227, Address: 0x3303f4, Func Offset: 0x24
	// Line 228, Address: 0x3303f8, Func Offset: 0x28
	// Line 229, Address: 0x3303fc, Func Offset: 0x2c
	// Line 230, Address: 0x330404, Func Offset: 0x34
	// Line 233, Address: 0x33043c, Func Offset: 0x6c
	// Func End, Address: 0x330450, Func Offset: 0x80
}

// xStateLevelReset__FP7_xActor
// Start address: 0x330450
void xStateLevelReset(_xActor* actor)
{
	tagxStateThread* thread;
	tagxStateMgr* sinfo;
	int32 t;
	// Line 204, Address: 0x330450, Func Offset: 0
	// Line 205, Address: 0x330454, Func Offset: 0x4
	// Line 207, Address: 0x330460, Func Offset: 0x10
	// Line 209, Address: 0x33046c, Func Offset: 0x1c
	// Line 210, Address: 0x33047c, Func Offset: 0x2c
	// Line 211, Address: 0x330480, Func Offset: 0x30
	// Line 212, Address: 0x330494, Func Offset: 0x44
	// Func End, Address: 0x33049c, Func Offset: 0x4c
}

// xStateInit__FP7_xActorP9tagxStateiPFP7_xActoriP8tagXAnimP15tagXAnimTrigger_v
// Start address: 0x3304a0
void xStateInit(_xActor* actor, tagxState* states, int32 animationBasedMovement, void(*triggerHandler)(_xActor*, int32, tagXAnim*, tagXAnimTrigger*))
{
	tagxStateMgr* sinfo;
	tagxStateThread* thread;
	int32 t;
	// Line 156, Address: 0x3304a0, Func Offset: 0
	// Line 161, Address: 0x3304b0, Func Offset: 0x10
	// Line 168, Address: 0x3304b4, Func Offset: 0x14
	// Line 169, Address: 0x3304b8, Func Offset: 0x18
	// Line 170, Address: 0x3304bc, Func Offset: 0x1c
	// Line 171, Address: 0x3304c0, Func Offset: 0x20
	// Line 172, Address: 0x3304c4, Func Offset: 0x24
	// Line 174, Address: 0x3304cc, Func Offset: 0x2c
	// Line 176, Address: 0x3304d8, Func Offset: 0x38
	// Line 177, Address: 0x3304e4, Func Offset: 0x44
	// Line 178, Address: 0x3304f8, Func Offset: 0x58
	// Line 179, Address: 0x33050c, Func Offset: 0x6c
	// Line 180, Address: 0x330520, Func Offset: 0x80
	// Line 181, Address: 0x330534, Func Offset: 0x94
	// Line 183, Address: 0x330544, Func Offset: 0xa4
	// Line 184, Address: 0x33054c, Func Offset: 0xac
	// Line 186, Address: 0x330550, Func Offset: 0xb0
	// Line 187, Address: 0x330554, Func Offset: 0xb4
	// Line 188, Address: 0x330558, Func Offset: 0xb8
	// Line 189, Address: 0x33055c, Func Offset: 0xbc
	// Line 190, Address: 0x330560, Func Offset: 0xc0
	// Line 196, Address: 0x33059c, Func Offset: 0xfc
	// Func End, Address: 0x3305b0, Func Offset: 0x110
}

// xStateInitialize__Fv
// Start address: 0x3305b0
void xStateInitialize()
{
	// Line 149, Address: 0x3305b0, Func Offset: 0
	// Line 150, Address: 0x3305b8, Func Offset: 0x8
	// Line 151, Address: 0x3305d4, Func Offset: 0x24
	// Func End, Address: 0x3305e4, Func Offset: 0x34
}

