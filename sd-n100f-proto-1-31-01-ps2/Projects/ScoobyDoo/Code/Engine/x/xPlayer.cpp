typedef struct tagxPlayer;
typedef struct tagXAnimControl;
typedef struct xNavPoint;
typedef struct tagxPhysicsObject;
typedef struct _xActor;
typedef struct tagxState;
typedef struct _FCinfo;
typedef struct tagXStreamMDSDirectory;
typedef struct tagxActorDBData;
typedef struct xNavLink;
typedef struct _p2Geom;
typedef struct tagxPad;
typedef struct tagP2Mesh;
typedef struct tagxPadAction;
typedef struct tagiAnimFrame;
typedef struct _RpClump;
typedef struct tagP2VERTEX;
typedef struct tagXAnim;
typedef struct XStreamHeader;
typedef struct Vector3D;
typedef struct tagiAnimResource;
typedef struct tagP2MeshVertex;
typedef struct tagiAnimRuntime;
typedef struct tagP2Weight;
typedef struct tagxStateLink;
typedef struct _RwObject;
typedef struct _tagNativePadData;
typedef struct xMessage;
typedef struct tagXAnimTrigger;
typedef struct Vector4D;
typedef struct tagXStreamDirectoryEntry;
typedef struct tagxStateThread;
typedef struct _RwLLLink;
typedef struct tagiMesh;
typedef struct iActorRuntime;
typedef struct tagxStateMgr;
typedef struct _XBUTTON;
typedef struct _iVFXResource;
typedef struct _iSFXResource;
typedef struct _RwLinkList;
typedef struct _iRenderEffects;

typedef _RpClump*(*type_35)(_RpClump*, void*);
typedef void(*type_49)(_xActor*, int32, tagXAnim*, tagXAnimTrigger*);

typedef _xActor type_0[4];
typedef int32 type_1[7];
typedef _xActor type_2[1];
typedef tagxStateThread type_3[7];
typedef _xActor type_4[1];
typedef int8 type_5[256];
typedef _xActor* type_6[40];
typedef uint8 type_7[4];
typedef int8 type_8[40];
typedef uint8 type_9[3];
typedef _xActor* type_10[13];
typedef tagxPlayer type_11[1];
typedef uint16 type_12[3];
typedef _xActor type_13[1];
typedef tagXStreamDirectoryEntry type_14[1000];
typedef _xActor type_15[4];
typedef _xActor type_16[4];
typedef _xActor type_17[1];
typedef _xActor type_18[4];
typedef _xActor type_19[4];
typedef _xActor type_20[4];
typedef Vector3D type_21[5];
typedef _xActor type_22[4];
typedef _xActor type_23[1];
typedef _xActor type_24[4];
typedef _xActor type_25[4];
typedef _xActor type_26[4];
typedef _xActor type_27[1];
typedef _XBUTTON type_28[16];
typedef _xActor type_29[1];
typedef _xActor type_30[1];
typedef int8 type_31[2048];
typedef _xActor type_32[1];
typedef _xActor type_33[1];
typedef _xActor type_34[1];
typedef uint8 type_36[6];
typedef _xActor type_37[1];
typedef _xActor type_38[1];
typedef _xActor type_39[4];
typedef tagxState* type_40[10];
typedef _xActor type_41[4];
typedef _xActor type_42[4];
typedef _xActor type_43[1];
typedef _xActor type_44[1];
typedef _xActor type_45[1];
typedef _xActor type_46[4];
typedef int8 type_47[128];
typedef _xActor type_48[1];
typedef _xActor type_50[4];
typedef _xActor type_51[4];
typedef uint8 type_52[3];
typedef _xActor type_53[2];
typedef _xActor type_54[1];
typedef uint8 type_55[4];
typedef _xActor type_56[1];
typedef uint8 type_57[4];
typedef uint8 type_58[4];
typedef _xActor type_59[1];
typedef uint8 type_60[4];
typedef uint8 type_61[12];
typedef _xActor type_62[4];
typedef uint8 type_63[12];

struct tagxPlayer
{
	int8 m_move;
	int8 m_rotate;
	uint8 m_run;
	uint8 m_turnSpeed;
	uint8 m_rightWeapon;
	uint8 m_leftWeapon;
	uint16 pad2;
	_xActor* m_actor;
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

struct tagXStreamMDSDirectory
{
	uint32 count;
	tagXStreamDirectoryEntry directory[1000];
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

struct _p2Geom
{
	uint32 m_meshCount;
	tagP2Mesh* m_mesh;
	_iRenderEffects effects;
	_RpClump* m_clump;
};

struct tagxPad
{
	ulong32 m_lastTime;
	ulong32 m_currentTime;
	uint8 m_active;
	uint8 m_playerNumber;
	uint8 m_controllerNumber;
	uint8 m_deviceType;
	int32 m_padHandle;
	void* m_funcInit;
	void* m_funcMapper;
	void* m_funcAction;
	_tagNativePadData* m_pad;
	_XBUTTON m_xbutton[16];
	uint8 m_analogActive;
	int8 m_analogXValue;
	int8 m_analogYValue;
	int32 m_shock : 3;
	uint8 m_vib[6];
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

struct tagiAnimFrame
{
	float32* m_tx;
	float32* m_ty;
	float32* m_tz;
	float32* m_rx;
	float32* m_ry;
	float32* m_rz;
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

struct tagXAnim
{
	tagiAnimResource* m_resource;
	tagiAnimRuntime* m_runtime;
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

struct _RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct _tagNativePadData
{
	uint8 status;
	struct
	{
		uint32 id : 4;
		uint32 size : 4;
	};
	uint16 buttons;
	uint8 analog[4];
	uint8 pressure[12];
	uint8 reserved[12];
	uint16 last_buttons;
	uint16 pressed;
	uint16 released;
};

struct xMessage
{
	uint32 flags;
	int32 senderType;
	int32 senderId;
	int32 recipientType;
	int32 recipientId;
	uint32 message;
	uint32 data1;
	uint32 data2;
	uint32 data3;
	uint32 data4;
	float32 deliveryTime;
};

struct tagXAnimTrigger
{
	uint16 m_frame;
	uint16 m_type;
	uint32 m_data;
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

struct tagxStateThread
{
	tagxState* m_state;
	tagXAnimControl* m_animCtl;
	int32 m_deferredWaiting;
	tagxPadAction m_deferred;
	int32 m_rbp;
	tagxState* m_ring[10];
};

struct _RwLLLink
{
	_RwLLLink* next;
	_RwLLLink* prev;
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

struct _XBUTTON
{
	uint32 m_id;
	uint32 m_nativeID;
	uint32 m_nativeJoyID;
	struct
	{
		uint32 m_down : 13;
		uint32 m_last_down : 13;
		uint32 m_pressed : 1;
		uint32 m_last_pressed : 1;
		uint32 m_released : 1;
		uint32 m_last_released : 1;
		uint32 unused : 2;
	};
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

tagxPlayer g_Players[1];
int32 functionIndex;
int32 gPlayerType;
tagxActorDBData* gadb;
int8 vAssertBuf2[128];
XStreamHeader currentHeader;

void xPlayerResetAnimation();
void xPlayerSelectWeapon(int32 player, int32 left, int32 weapon);
void xPadActionFunc_Player();
int32 xPadMapperFunc_Player(tagxPad* pad, tagxPadAction* actions, int32 maxActions);
void xPlayerInit(int32 player, _xActor* actor);

// xPlayerResetAnimation__Fv
// Start address: 0x33fb00
void xPlayerResetAnimation()
{
	uint32 playerDeadFlag;
	xMessage theMessage;
	int32 i;
	// Line 372, Address: 0x33fb00, Func Offset: 0
	// Line 380, Address: 0x33fb0c, Func Offset: 0xc
	// Line 381, Address: 0x33fb18, Func Offset: 0x18
	// Line 386, Address: 0x33fb38, Func Offset: 0x38
	// Line 390, Address: 0x33fb44, Func Offset: 0x44
	// Line 396, Address: 0x33fb74, Func Offset: 0x74
	// Line 404, Address: 0x33fb9c, Func Offset: 0x9c
	// Line 408, Address: 0x33fba8, Func Offset: 0xa8
	// Line 412, Address: 0x33fbd4, Func Offset: 0xd4
	// Line 416, Address: 0x33fc00, Func Offset: 0x100
	// Line 421, Address: 0x33fc2c, Func Offset: 0x12c
	// Line 422, Address: 0x33fc34, Func Offset: 0x134
	// Line 423, Address: 0x33fc38, Func Offset: 0x138
	// Line 424, Address: 0x33fc40, Func Offset: 0x140
	// Line 425, Address: 0x33fc44, Func Offset: 0x144
	// Line 426, Address: 0x33fc4c, Func Offset: 0x14c
	// Line 428, Address: 0x33fc50, Func Offset: 0x150
	// Line 430, Address: 0x33fc5c, Func Offset: 0x15c
	// Line 431, Address: 0x33fc60, Func Offset: 0x160
	// Line 432, Address: 0x33fc84, Func Offset: 0x184
	// Func End, Address: 0x33fc98, Func Offset: 0x198
}

// xPlayerSelectWeapon__Fiii
// Start address: 0x33fca0
void xPlayerSelectWeapon(int32 player, int32 left, int32 weapon)
{
	tagxPlayer* p;
	// Line 313, Address: 0x33fca0, Func Offset: 0
	// Line 317, Address: 0x33fcb4, Func Offset: 0x14
	// Line 319, Address: 0x33fccc, Func Offset: 0x2c
	// Line 321, Address: 0x33fcd4, Func Offset: 0x34
	// Line 322, Address: 0x33fce8, Func Offset: 0x48
	// Line 324, Address: 0x33fcfc, Func Offset: 0x5c
	// Line 325, Address: 0x33fd00, Func Offset: 0x60
	// Line 328, Address: 0x33fd08, Func Offset: 0x68
	// Line 329, Address: 0x33fd1c, Func Offset: 0x7c
	// Line 331, Address: 0x33fd30, Func Offset: 0x90
	// Line 333, Address: 0x33fd34, Func Offset: 0x94
	// Func End, Address: 0x33fd4c, Func Offset: 0xac
}

// xPadActionFunc_Player__FP7tagxPadiP13tagxPadAction
// Start address: 0x33fd50
void xPadActionFunc_Player()
{
	// Line 303, Address: 0x33fd50, Func Offset: 0
	// Func End, Address: 0x33fd58, Func Offset: 0x8
}

// xPadMapperFunc_Player__FP7tagxPadP13tagxPadActioni
// Start address: 0x33fd60
int32 xPadMapperFunc_Player(tagxPad* pad, tagxPadAction* actions, int32 maxActions)
{
	tagxPadAction* a;
	_XBUTTON* b;
	int32 i;
	int32 actionCount;
	// Line 97, Address: 0x33fd60, Func Offset: 0
	// Line 102, Address: 0x33fd80, Func Offset: 0x20
	// Line 103, Address: 0x33fe20, Func Offset: 0xc0
	// Line 105, Address: 0x33fec0, Func Offset: 0x160
	// Line 142, Address: 0x33fec4, Func Offset: 0x164
	// Line 143, Address: 0x33fed0, Func Offset: 0x170
	// Line 144, Address: 0x33ff00, Func Offset: 0x1a0
	// Line 146, Address: 0x33ff08, Func Offset: 0x1a8
	// Line 151, Address: 0x33ff28, Func Offset: 0x1c8
	// Line 153, Address: 0x33ff34, Func Offset: 0x1d4
	// Line 154, Address: 0x33ff40, Func Offset: 0x1e0
	// Line 159, Address: 0x33ff50, Func Offset: 0x1f0
	// Line 160, Address: 0x33ff58, Func Offset: 0x1f8
	// Line 161, Address: 0x33ff68, Func Offset: 0x208
	// Line 166, Address: 0x33ff6c, Func Offset: 0x20c
	// Line 167, Address: 0x33ff74, Func Offset: 0x214
	// Line 168, Address: 0x33ff80, Func Offset: 0x220
	// Line 169, Address: 0x33ff88, Func Offset: 0x228
	// Line 172, Address: 0x33ff90, Func Offset: 0x230
	// Line 175, Address: 0x340044, Func Offset: 0x2e4
	// Line 177, Address: 0x340058, Func Offset: 0x2f8
	// Line 178, Address: 0x340060, Func Offset: 0x300
	// Line 179, Address: 0x340068, Func Offset: 0x308
	// Line 180, Address: 0x34007c, Func Offset: 0x31c
	// Line 181, Address: 0x340084, Func Offset: 0x324
	// Line 184, Address: 0x34008c, Func Offset: 0x32c
	// Line 186, Address: 0x3400a0, Func Offset: 0x340
	// Line 187, Address: 0x3400a8, Func Offset: 0x348
	// Line 188, Address: 0x3400b0, Func Offset: 0x350
	// Line 189, Address: 0x3400c4, Func Offset: 0x364
	// Line 190, Address: 0x3400cc, Func Offset: 0x36c
	// Line 194, Address: 0x3400d4, Func Offset: 0x374
	// Line 196, Address: 0x3400e8, Func Offset: 0x388
	// Line 197, Address: 0x3400f0, Func Offset: 0x390
	// Line 198, Address: 0x3400f8, Func Offset: 0x398
	// Line 199, Address: 0x34010c, Func Offset: 0x3ac
	// Line 200, Address: 0x340114, Func Offset: 0x3b4
	// Line 204, Address: 0x34011c, Func Offset: 0x3bc
	// Line 206, Address: 0x340130, Func Offset: 0x3d0
	// Line 207, Address: 0x340138, Func Offset: 0x3d8
	// Line 208, Address: 0x340140, Func Offset: 0x3e0
	// Line 209, Address: 0x340154, Func Offset: 0x3f4
	// Line 210, Address: 0x34015c, Func Offset: 0x3fc
	// Line 213, Address: 0x340164, Func Offset: 0x404
	// Line 214, Address: 0x340178, Func Offset: 0x418
	// Line 215, Address: 0x340188, Func Offset: 0x428
	// Line 216, Address: 0x34019c, Func Offset: 0x43c
	// Line 217, Address: 0x3401a4, Func Offset: 0x444
	// Line 220, Address: 0x3401ac, Func Offset: 0x44c
	// Line 221, Address: 0x3401c0, Func Offset: 0x460
	// Line 222, Address: 0x3401d0, Func Offset: 0x470
	// Line 223, Address: 0x3401e4, Func Offset: 0x484
	// Line 224, Address: 0x3401ec, Func Offset: 0x48c
	// Line 226, Address: 0x3401f4, Func Offset: 0x494
	// Line 227, Address: 0x340208, Func Offset: 0x4a8
	// Line 228, Address: 0x340210, Func Offset: 0x4b0
	// Line 231, Address: 0x340218, Func Offset: 0x4b8
	// Line 232, Address: 0x34022c, Func Offset: 0x4cc
	// Line 233, Address: 0x340234, Func Offset: 0x4d4
	// Line 236, Address: 0x34023c, Func Offset: 0x4dc
	// Line 237, Address: 0x340250, Func Offset: 0x4f0
	// Line 238, Address: 0x340258, Func Offset: 0x4f8
	// Line 241, Address: 0x340260, Func Offset: 0x500
	// Line 242, Address: 0x340274, Func Offset: 0x514
	// Line 243, Address: 0x340284, Func Offset: 0x524
	// Line 244, Address: 0x340298, Func Offset: 0x538
	// Line 245, Address: 0x3402a0, Func Offset: 0x540
	// Line 248, Address: 0x3402a8, Func Offset: 0x548
	// Line 249, Address: 0x3402bc, Func Offset: 0x55c
	// Line 250, Address: 0x3402cc, Func Offset: 0x56c
	// Line 251, Address: 0x3402e0, Func Offset: 0x580
	// Line 252, Address: 0x3402e8, Func Offset: 0x588
	// Line 255, Address: 0x3402f0, Func Offset: 0x590
	// Line 256, Address: 0x340304, Func Offset: 0x5a4
	// Line 257, Address: 0x340314, Func Offset: 0x5b4
	// Line 258, Address: 0x340328, Func Offset: 0x5c8
	// Line 259, Address: 0x340330, Func Offset: 0x5d0
	// Line 262, Address: 0x340338, Func Offset: 0x5d8
	// Line 263, Address: 0x34034c, Func Offset: 0x5ec
	// Line 264, Address: 0x34035c, Func Offset: 0x5fc
	// Line 265, Address: 0x340370, Func Offset: 0x610
	// Line 266, Address: 0x340378, Func Offset: 0x618
	// Line 269, Address: 0x340380, Func Offset: 0x620
	// Line 270, Address: 0x340394, Func Offset: 0x634
	// Line 275, Address: 0x34039c, Func Offset: 0x63c
	// Line 277, Address: 0x3403a0, Func Offset: 0x640
	// Line 278, Address: 0x3403ac, Func Offset: 0x64c
	// Line 279, Address: 0x3403b0, Func Offset: 0x650
	// Line 281, Address: 0x3403bc, Func Offset: 0x65c
	// Line 282, Address: 0x3403c0, Func Offset: 0x660
	// Line 285, Address: 0x3403d8, Func Offset: 0x678
	// Func End, Address: 0x3403f4, Func Offset: 0x694
}

// xPlayerInit__FiP7_xActori
// Start address: 0x340400
void xPlayerInit(int32 player, _xActor* actor)
{
	int32 o;
	tagxPlayer* p;
	// Line 53, Address: 0x340400, Func Offset: 0
	// Line 62, Address: 0x340410, Func Offset: 0x10
	// Line 69, Address: 0x340414, Func Offset: 0x14
	// Line 71, Address: 0x34042c, Func Offset: 0x2c
	// Line 72, Address: 0x340430, Func Offset: 0x30
	// Line 79, Address: 0x340438, Func Offset: 0x38
	// Line 80, Address: 0x340440, Func Offset: 0x40
	// Line 82, Address: 0x340448, Func Offset: 0x48
	// Line 84, Address: 0x340454, Func Offset: 0x54
	// Line 86, Address: 0x34046c, Func Offset: 0x6c
	// Line 88, Address: 0x340480, Func Offset: 0x80
	// Line 89, Address: 0x340494, Func Offset: 0x94
	// Func End, Address: 0x3404ac, Func Offset: 0xac
}

