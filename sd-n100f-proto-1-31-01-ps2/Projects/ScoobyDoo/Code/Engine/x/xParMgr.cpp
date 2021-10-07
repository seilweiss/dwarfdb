typedef struct tagiAnimResource;
typedef struct tagxStateThread;
typedef struct xNavLink;
typedef struct tagxState;
typedef struct tagP2Weight;
typedef struct xParCmd;
typedef struct _iRenderEffects;
typedef struct tagXAnimControl;
typedef struct tagXStreamMDSDirectory;
typedef struct tagxParSys;
typedef struct xPar;
typedef struct xNavPoint;
typedef struct Vector3D;
typedef struct iActorRuntime;
typedef struct tagxPadAction;
typedef struct _iVFXResource;
typedef struct tagxPhysicsObject;
typedef struct tagiAnimFrame;
typedef struct _xActor;
typedef struct _FCinfo;
typedef struct XStreamHeader;
typedef struct tagXAnim;
typedef struct _iSFXResource;
typedef struct tagXAnimTrigger;
typedef struct _p2Geom;
typedef struct tagxStateMgr;
typedef struct _RwObject;
typedef struct tagP2Mesh;
typedef struct tagxActorDBData;
typedef struct tagiAnimRuntime;
typedef struct _RpClump;
typedef struct tagxStateLink;
typedef struct Vector4D;
typedef struct tagXStreamDirectoryEntry;
typedef struct tagP2VERTEX;
typedef struct _RwLLLink;
typedef struct tagP2MeshVertex;
typedef struct tagParCmdList;
typedef struct tagiMesh;
typedef struct _RwLinkList;

typedef void(*type_27)(_xActor*, int32, tagXAnim*, tagXAnimTrigger*);
typedef _RpClump*(*type_56)(_RpClump*, void*);

typedef _xActor type_0[1];
typedef uint8 type_1[3];
typedef _xActor type_2[1];
typedef float32 type_3[2];
typedef _xActor type_4[1];
typedef float32 type_5[2];
typedef _xActor type_6[4];
typedef _xActor type_7[1];
typedef uint8 type_8[4];
typedef _xActor type_9[4];
typedef int32 type_10[37];
typedef uint8 type_11[4];
typedef int8 type_12[32];
typedef int8 type_13[32][37];
typedef tagXStreamDirectoryEntry type_14[1000];
typedef _xActor type_15[4];
typedef tagxState* type_16[10];
typedef uint8 type_17[4];
typedef _xActor type_18[2];
typedef _xActor type_19[1];
typedef _xActor type_20[1];
typedef _xActor type_21[1];
typedef _xActor type_22[4];
typedef _xActor type_23[4];
typedef uint16 type_24[3];
typedef _xActor type_25[1];
typedef uint8 type_26[4];
typedef _xActor type_28[1];
typedef xParCmd* type_29[37];
typedef _xActor* type_30[40];
typedef uint8 type_31[3];
typedef int8 type_32[40];
typedef _xActor* type_33[13];
typedef _xActor type_34[1];
typedef _xActor type_35[4];
typedef int8 type_36[2048];
typedef _xActor type_37[4];
typedef int32 type_38[37];
typedef _xActor type_39[1];
typedef int32 type_40[7];
typedef _xActor type_41[4];
typedef Vector3D type_42[5];
typedef tagxStateThread type_43[7];
typedef _xActor type_44[4];
typedef _xActor type_45[4];
typedef _xActor type_46[4];
typedef _xActor type_47[1];
typedef uint8 type_48[3];
typedef _xActor type_49[4];
typedef _xActor type_50[4];
typedef _xActor type_51[4];
typedef tagParCmdList* type_52[37];
typedef _xActor type_53[1];
typedef _xActor type_54[1];
typedef int32 type_55[37];
typedef _xActor type_57[1];
typedef int8 type_58[128];
typedef _xActor type_59[1];
typedef uint8 type_60[2];
typedef _xActor type_61[1];
typedef _xActor type_62[1];
typedef tagxParSys type_63[37];
typedef _xActor type_64[1];
typedef _xActor type_65[1];
typedef uint8 type_66[4];
typedef _xActor type_67[4];
typedef int8 type_68[4];
typedef _xActor type_69[4];
typedef uint8 type_70[4];
typedef _xActor type_71[4];
typedef uint8 type_72[4];

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

struct tagxStateThread
{
	tagxState* m_state;
	tagXAnimControl* m_animCtl;
	int32 m_deferredWaiting;
	tagxPadAction m_deferred;
	int32 m_rbp;
	tagxState* m_ring[10];
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

struct tagP2Weight
{
	uint16 m_joint0;
	uint16 m_joint1;
	float32 m_weight0;
	float32 m_weight1;
};

struct xParCmd
{
	uint8 m_tag;
	uint8 m_flag;
	int16 m_count;
	void* m_method;
	void* m_data;
	xParCmd* m_next;
	xParCmd* m_prev;
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

struct tagXStreamMDSDirectory
{
	uint32 count;
	tagXStreamDirectoryEntry directory[1000];
};

struct tagxParSys
{
	uint32 m_idx;
	xPar* m_root;
	xPar* m_dead;
	int32 m_num_of_particles;
	tagParCmdList* m_cmd;
	uint8 m_alive;
	uint8 m_killWhenDead;
	uint8 m_active;
	uint8 m_visible;
	uint8 m_culled;
	uint8 m_deadGlobalPool;
	uint8 m_pad[2];
};

struct xPar
{
	xPar* m_next;
	xPar* m_prev;
	Vector3D m_pos;
	Vector3D m_vel;
	Vector3D m_acc;
	float32 m_size;
	float32 m_sizeVel;
	int16 m_lifetime;
	uint8 m_flag;
	uint8 m_mode;
	uint8 m_c[4];
	int8 m_cvel[4];
	uint8 m_c1[4];
	uint8 m_c2[4];
	uint8 m_rotdeg[3];
	uint8 m_texIdx;
	float32 m_uva[2];
	float32 m_uvb[2];
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

struct Vector3D
{
	float32 x;
	float32 y;
	float32 z;
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

struct _FCinfo
{
	uint16 nidx[3];
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

struct _p2Geom
{
	uint32 m_meshCount;
	tagP2Mesh* m_mesh;
	_iRenderEffects effects;
	_RpClump* m_clump;
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

struct _RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
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

struct tagXStreamDirectoryEntry
{
	uint32 id;
	uint32 type;
	uint32 offset;
	uint32 length;
};

struct tagP2VERTEX
{
	float32 x;
	float32 y;
	float32 z;
	float32 tu;
	float32 tv;
};

struct _RwLLLink
{
	_RwLLLink* next;
	_RwLLLink* prev;
};

struct tagP2MeshVertex
{
	float32 m_x;
	float32 m_y;
	float32 m_z;
};

struct tagParCmdList
{
	int32 m_numCmd;
	xParCmd* m_cmd;
	xParCmd* m_lastCmd;
	tagParCmdList* m_prev;
	tagParCmdList* m_next;
};

struct tagiMesh
{
};

struct _RwLinkList
{
	_RwLLLink link;
};

int32 gParSysNumParticles[37];
int8 sParSysName[32][37];
int32 gParSysPriority[37];
int32 gParSysLimit[37];
tagxParSys gParSys[37];
xParCmd* gParEmitter[37];
tagParCmdList* gParCmdList[37];
int32 sFrameCount;
int32 sCounter;
uint32 sParMgrIgnoreFXCounter;
int32 sParMgrInit;
tagxActorDBData* gadb;
int8 vAssertBuf2[128];
XStreamHeader currentHeader;
uint32 gTimeDelta;
xPar* gParDead;

void xParMgrFXEvent(int32 vfxtype, Vector3D* v1, Vector3D* v2);
void xParMgrFXEventMode(void* a, int32 vfxType, Vector3D* v1, Vector3D* v2, int32 emitMode);
void xParMgrRender();
void xParMgrAnimate();
void xParMgrExecute();
void xParMgrDebug();
void xParMgrLevelReset();
void xParMgrKillAllParticles();
void xParMgrIgnoreFXEvents(int32 numFrames);
void xParMgrInit();

// xParMgrFXEvent__FPviP8Vector3DP8Vector3D
// Start address: 0x343b70
void xParMgrFXEvent(int32 vfxtype, Vector3D* v1, Vector3D* v2)
{
	int32 amount;
	uint32 dt;
	tagxParSys* ps;
	xParCmd* cmd;
	// Line 699, Address: 0x343b70, Func Offset: 0
	// Line 700, Address: 0x343b9c, Func Offset: 0x2c
	// Line 701, Address: 0x343bb0, Func Offset: 0x40
	// Line 702, Address: 0x343bc8, Func Offset: 0x58
	// Line 705, Address: 0x343bcc, Func Offset: 0x5c
	// Line 707, Address: 0x343bd8, Func Offset: 0x68
	// Line 708, Address: 0x343be4, Func Offset: 0x74
	// Line 711, Address: 0x343bec, Func Offset: 0x7c
	// Line 718, Address: 0x343bfc, Func Offset: 0x8c
	// Line 719, Address: 0x343c9c, Func Offset: 0x12c
	// Line 720, Address: 0x343ca8, Func Offset: 0x138
	// Line 721, Address: 0x343cbc, Func Offset: 0x14c
	// Line 726, Address: 0x343d60, Func Offset: 0x1f0
	// Line 734, Address: 0x343d80, Func Offset: 0x210
	// Line 739, Address: 0x343db8, Func Offset: 0x248
	// Line 740, Address: 0x343dc8, Func Offset: 0x258
	// Line 742, Address: 0x343dd0, Func Offset: 0x260
	// Line 752, Address: 0x343df4, Func Offset: 0x284
	// Line 755, Address: 0x343e1c, Func Offset: 0x2ac
	// Line 756, Address: 0x343e38, Func Offset: 0x2c8
	// Line 757, Address: 0x343e54, Func Offset: 0x2e4
	// Line 758, Address: 0x343e70, Func Offset: 0x300
	// Line 759, Address: 0x343e7c, Func Offset: 0x30c
	// Line 760, Address: 0x343e88, Func Offset: 0x318
	// Line 761, Address: 0x343e94, Func Offset: 0x324
	// Line 762, Address: 0x343ea0, Func Offset: 0x330
	// Line 763, Address: 0x343eb8, Func Offset: 0x348
	// Line 764, Address: 0x343ec0, Func Offset: 0x350
	// Line 767, Address: 0x343ec8, Func Offset: 0x358
	// Line 768, Address: 0x343ee4, Func Offset: 0x374
	// Line 769, Address: 0x343f00, Func Offset: 0x390
	// Line 770, Address: 0x343f1c, Func Offset: 0x3ac
	// Line 771, Address: 0x343f28, Func Offset: 0x3b8
	// Line 772, Address: 0x343f34, Func Offset: 0x3c4
	// Line 773, Address: 0x343f40, Func Offset: 0x3d0
	// Line 774, Address: 0x343f4c, Func Offset: 0x3dc
	// Line 775, Address: 0x343f64, Func Offset: 0x3f4
	// Line 776, Address: 0x343f6c, Func Offset: 0x3fc
	// Line 779, Address: 0x343f74, Func Offset: 0x404
	// Line 780, Address: 0x343f90, Func Offset: 0x420
	// Line 781, Address: 0x343fac, Func Offset: 0x43c
	// Line 782, Address: 0x343fc8, Func Offset: 0x458
	// Line 783, Address: 0x343fec, Func Offset: 0x47c
	// Line 784, Address: 0x344010, Func Offset: 0x4a0
	// Line 786, Address: 0x344034, Func Offset: 0x4c4
	// Line 787, Address: 0x344040, Func Offset: 0x4d0
	// Line 788, Address: 0x34404c, Func Offset: 0x4dc
	// Line 789, Address: 0x344058, Func Offset: 0x4e8
	// Line 790, Address: 0x344064, Func Offset: 0x4f4
	// Line 791, Address: 0x34407c, Func Offset: 0x50c
	// Line 792, Address: 0x344084, Func Offset: 0x514
	// Line 795, Address: 0x34408c, Func Offset: 0x51c
	// Line 796, Address: 0x3440a8, Func Offset: 0x538
	// Line 797, Address: 0x3440c4, Func Offset: 0x554
	// Line 798, Address: 0x3440e0, Func Offset: 0x570
	// Line 799, Address: 0x3440ec, Func Offset: 0x57c
	// Line 800, Address: 0x3440f8, Func Offset: 0x588
	// Line 801, Address: 0x344104, Func Offset: 0x594
	// Line 802, Address: 0x344110, Func Offset: 0x5a0
	// Line 803, Address: 0x344128, Func Offset: 0x5b8
	// Line 804, Address: 0x344130, Func Offset: 0x5c0
	// Line 807, Address: 0x344138, Func Offset: 0x5c8
	// Line 808, Address: 0x344154, Func Offset: 0x5e4
	// Line 809, Address: 0x344170, Func Offset: 0x600
	// Line 810, Address: 0x34418c, Func Offset: 0x61c
	// Line 811, Address: 0x344198, Func Offset: 0x628
	// Line 812, Address: 0x3441a4, Func Offset: 0x634
	// Line 813, Address: 0x3441b0, Func Offset: 0x640
	// Line 814, Address: 0x3441bc, Func Offset: 0x64c
	// Line 815, Address: 0x3441d4, Func Offset: 0x664
	// Line 816, Address: 0x3441dc, Func Offset: 0x66c
	// Line 819, Address: 0x3441e4, Func Offset: 0x674
	// Line 820, Address: 0x344200, Func Offset: 0x690
	// Line 821, Address: 0x34421c, Func Offset: 0x6ac
	// Line 822, Address: 0x344238, Func Offset: 0x6c8
	// Line 823, Address: 0x344244, Func Offset: 0x6d4
	// Line 824, Address: 0x344250, Func Offset: 0x6e0
	// Line 825, Address: 0x34425c, Func Offset: 0x6ec
	// Line 826, Address: 0x344268, Func Offset: 0x6f8
	// Line 827, Address: 0x344280, Func Offset: 0x710
	// Line 828, Address: 0x344288, Func Offset: 0x718
	// Line 831, Address: 0x344290, Func Offset: 0x720
	// Line 832, Address: 0x3442ac, Func Offset: 0x73c
	// Line 833, Address: 0x3442c8, Func Offset: 0x758
	// Line 834, Address: 0x3442e4, Func Offset: 0x774
	// Line 835, Address: 0x3442f0, Func Offset: 0x780
	// Line 836, Address: 0x3442fc, Func Offset: 0x78c
	// Line 837, Address: 0x344308, Func Offset: 0x798
	// Line 838, Address: 0x344314, Func Offset: 0x7a4
	// Line 839, Address: 0x34432c, Func Offset: 0x7bc
	// Line 840, Address: 0x344334, Func Offset: 0x7c4
	// Line 843, Address: 0x34433c, Func Offset: 0x7cc
	// Line 844, Address: 0x344358, Func Offset: 0x7e8
	// Line 845, Address: 0x344374, Func Offset: 0x804
	// Line 846, Address: 0x344390, Func Offset: 0x820
	// Line 847, Address: 0x34439c, Func Offset: 0x82c
	// Line 848, Address: 0x3443a8, Func Offset: 0x838
	// Line 849, Address: 0x3443b4, Func Offset: 0x844
	// Line 850, Address: 0x3443c0, Func Offset: 0x850
	// Line 851, Address: 0x3443d8, Func Offset: 0x868
	// Line 852, Address: 0x3443e0, Func Offset: 0x870
	// Line 855, Address: 0x3443e8, Func Offset: 0x878
	// Line 856, Address: 0x344404, Func Offset: 0x894
	// Line 857, Address: 0x344420, Func Offset: 0x8b0
	// Line 858, Address: 0x34443c, Func Offset: 0x8cc
	// Line 859, Address: 0x344448, Func Offset: 0x8d8
	// Line 860, Address: 0x344454, Func Offset: 0x8e4
	// Line 861, Address: 0x344460, Func Offset: 0x8f0
	// Line 862, Address: 0x34446c, Func Offset: 0x8fc
	// Line 863, Address: 0x344484, Func Offset: 0x914
	// Line 864, Address: 0x34448c, Func Offset: 0x91c
	// Line 867, Address: 0x344494, Func Offset: 0x924
	// Line 868, Address: 0x3444b0, Func Offset: 0x940
	// Line 869, Address: 0x3444cc, Func Offset: 0x95c
	// Line 870, Address: 0x3444e8, Func Offset: 0x978
	// Line 871, Address: 0x3444f4, Func Offset: 0x984
	// Line 872, Address: 0x344500, Func Offset: 0x990
	// Line 873, Address: 0x344518, Func Offset: 0x9a8
	// Line 874, Address: 0x344520, Func Offset: 0x9b0
	// Line 877, Address: 0x344528, Func Offset: 0x9b8
	// Line 878, Address: 0x344544, Func Offset: 0x9d4
	// Line 879, Address: 0x344560, Func Offset: 0x9f0
	// Line 880, Address: 0x34457c, Func Offset: 0xa0c
	// Line 881, Address: 0x344588, Func Offset: 0xa18
	// Line 882, Address: 0x344594, Func Offset: 0xa24
	// Line 883, Address: 0x3445a0, Func Offset: 0xa30
	// Line 884, Address: 0x3445ac, Func Offset: 0xa3c
	// Line 885, Address: 0x3445c4, Func Offset: 0xa54
	// Line 886, Address: 0x3445cc, Func Offset: 0xa5c
	// Line 889, Address: 0x3445d4, Func Offset: 0xa64
	// Line 890, Address: 0x3445f0, Func Offset: 0xa80
	// Line 891, Address: 0x34460c, Func Offset: 0xa9c
	// Line 892, Address: 0x344628, Func Offset: 0xab8
	// Line 893, Address: 0x344634, Func Offset: 0xac4
	// Line 894, Address: 0x344640, Func Offset: 0xad0
	// Line 895, Address: 0x344658, Func Offset: 0xae8
	// Line 896, Address: 0x344660, Func Offset: 0xaf0
	// Line 899, Address: 0x344668, Func Offset: 0xaf8
	// Line 900, Address: 0x344684, Func Offset: 0xb14
	// Line 901, Address: 0x3446a0, Func Offset: 0xb30
	// Line 902, Address: 0x3446bc, Func Offset: 0xb4c
	// Line 903, Address: 0x3446d0, Func Offset: 0xb60
	// Line 904, Address: 0x3446e4, Func Offset: 0xb74
	// Line 906, Address: 0x3446f8, Func Offset: 0xb88
	// Line 907, Address: 0x344704, Func Offset: 0xb94
	// Line 908, Address: 0x344710, Func Offset: 0xba0
	// Line 909, Address: 0x34471c, Func Offset: 0xbac
	// Line 910, Address: 0x344728, Func Offset: 0xbb8
	// Line 911, Address: 0x344740, Func Offset: 0xbd0
	// Line 912, Address: 0x344748, Func Offset: 0xbd8
	// Line 915, Address: 0x344750, Func Offset: 0xbe0
	// Line 916, Address: 0x34476c, Func Offset: 0xbfc
	// Line 917, Address: 0x344788, Func Offset: 0xc18
	// Line 918, Address: 0x3447a4, Func Offset: 0xc34
	// Line 919, Address: 0x3447c8, Func Offset: 0xc58
	// Line 920, Address: 0x3447ec, Func Offset: 0xc7c
	// Line 922, Address: 0x344810, Func Offset: 0xca0
	// Line 923, Address: 0x34481c, Func Offset: 0xcac
	// Line 924, Address: 0x344828, Func Offset: 0xcb8
	// Line 925, Address: 0x344834, Func Offset: 0xcc4
	// Line 926, Address: 0x344840, Func Offset: 0xcd0
	// Line 927, Address: 0x344858, Func Offset: 0xce8
	// Line 928, Address: 0x344860, Func Offset: 0xcf0
	// Line 931, Address: 0x344868, Func Offset: 0xcf8
	// Line 932, Address: 0x344884, Func Offset: 0xd14
	// Line 933, Address: 0x3448a0, Func Offset: 0xd30
	// Line 934, Address: 0x3448bc, Func Offset: 0xd4c
	// Line 935, Address: 0x3448d0, Func Offset: 0xd60
	// Line 936, Address: 0x3448e4, Func Offset: 0xd74
	// Line 938, Address: 0x3448f8, Func Offset: 0xd88
	// Line 939, Address: 0x344904, Func Offset: 0xd94
	// Line 940, Address: 0x344910, Func Offset: 0xda0
	// Line 941, Address: 0x34491c, Func Offset: 0xdac
	// Line 942, Address: 0x344928, Func Offset: 0xdb8
	// Line 943, Address: 0x344940, Func Offset: 0xdd0
	// Line 944, Address: 0x344948, Func Offset: 0xdd8
	// Line 947, Address: 0x344950, Func Offset: 0xde0
	// Line 948, Address: 0x34496c, Func Offset: 0xdfc
	// Line 949, Address: 0x344988, Func Offset: 0xe18
	// Line 950, Address: 0x3449a4, Func Offset: 0xe34
	// Line 951, Address: 0x3449b8, Func Offset: 0xe48
	// Line 952, Address: 0x3449cc, Func Offset: 0xe5c
	// Line 954, Address: 0x3449e0, Func Offset: 0xe70
	// Line 955, Address: 0x3449ec, Func Offset: 0xe7c
	// Line 956, Address: 0x3449f8, Func Offset: 0xe88
	// Line 957, Address: 0x344a04, Func Offset: 0xe94
	// Line 958, Address: 0x344a10, Func Offset: 0xea0
	// Line 959, Address: 0x344a28, Func Offset: 0xeb8
	// Line 960, Address: 0x344a30, Func Offset: 0xec0
	// Line 963, Address: 0x344a38, Func Offset: 0xec8
	// Line 964, Address: 0x344a54, Func Offset: 0xee4
	// Line 965, Address: 0x344a70, Func Offset: 0xf00
	// Line 966, Address: 0x344a8c, Func Offset: 0xf1c
	// Line 967, Address: 0x344aa0, Func Offset: 0xf30
	// Line 968, Address: 0x344ab4, Func Offset: 0xf44
	// Line 970, Address: 0x344ac8, Func Offset: 0xf58
	// Line 971, Address: 0x344ad4, Func Offset: 0xf64
	// Line 972, Address: 0x344ae0, Func Offset: 0xf70
	// Line 973, Address: 0x344aec, Func Offset: 0xf7c
	// Line 974, Address: 0x344af8, Func Offset: 0xf88
	// Line 975, Address: 0x344b10, Func Offset: 0xfa0
	// Line 976, Address: 0x344b18, Func Offset: 0xfa8
	// Line 979, Address: 0x344b20, Func Offset: 0xfb0
	// Line 980, Address: 0x344b3c, Func Offset: 0xfcc
	// Line 981, Address: 0x344b58, Func Offset: 0xfe8
	// Line 982, Address: 0x344b74, Func Offset: 0x1004
	// Line 983, Address: 0x344b88, Func Offset: 0x1018
	// Line 984, Address: 0x344b9c, Func Offset: 0x102c
	// Line 986, Address: 0x344bb0, Func Offset: 0x1040
	// Line 987, Address: 0x344bbc, Func Offset: 0x104c
	// Line 988, Address: 0x344bc8, Func Offset: 0x1058
	// Line 989, Address: 0x344bd4, Func Offset: 0x1064
	// Line 990, Address: 0x344be0, Func Offset: 0x1070
	// Line 991, Address: 0x344bf8, Func Offset: 0x1088
	// Line 992, Address: 0x344c00, Func Offset: 0x1090
	// Line 995, Address: 0x344c08, Func Offset: 0x1098
	// Line 996, Address: 0x344c24, Func Offset: 0x10b4
	// Line 997, Address: 0x344c40, Func Offset: 0x10d0
	// Line 998, Address: 0x344c5c, Func Offset: 0x10ec
	// Line 999, Address: 0x344c68, Func Offset: 0x10f8
	// Line 1000, Address: 0x344c74, Func Offset: 0x1104
	// Line 1001, Address: 0x344c8c, Func Offset: 0x111c
	// Line 1002, Address: 0x344c94, Func Offset: 0x1124
	// Line 1005, Address: 0x344c9c, Func Offset: 0x112c
	// Line 1006, Address: 0x344cb8, Func Offset: 0x1148
	// Line 1007, Address: 0x344cd4, Func Offset: 0x1164
	// Line 1008, Address: 0x344cf0, Func Offset: 0x1180
	// Line 1009, Address: 0x344d04, Func Offset: 0x1194
	// Line 1010, Address: 0x344d18, Func Offset: 0x11a8
	// Line 1012, Address: 0x344d2c, Func Offset: 0x11bc
	// Line 1013, Address: 0x344d38, Func Offset: 0x11c8
	// Line 1014, Address: 0x344d44, Func Offset: 0x11d4
	// Line 1015, Address: 0x344d5c, Func Offset: 0x11ec
	// Line 1016, Address: 0x344d64, Func Offset: 0x11f4
	// Line 1019, Address: 0x344d6c, Func Offset: 0x11fc
	// Line 1020, Address: 0x344d88, Func Offset: 0x1218
	// Line 1021, Address: 0x344da4, Func Offset: 0x1234
	// Line 1022, Address: 0x344dc0, Func Offset: 0x1250
	// Line 1023, Address: 0x344dc8, Func Offset: 0x1258
	// Line 1024, Address: 0x344dd0, Func Offset: 0x1260
	// Line 1025, Address: 0x344dd8, Func Offset: 0x1268
	// Line 1026, Address: 0x344de4, Func Offset: 0x1274
	// Line 1027, Address: 0x344df0, Func Offset: 0x1280
	// Line 1028, Address: 0x344dfc, Func Offset: 0x128c
	// Line 1029, Address: 0x344e08, Func Offset: 0x1298
	// Line 1030, Address: 0x344e20, Func Offset: 0x12b0
	// Line 1031, Address: 0x344e28, Func Offset: 0x12b8
	// Line 1034, Address: 0x344e30, Func Offset: 0x12c0
	// Line 1035, Address: 0x344e4c, Func Offset: 0x12dc
	// Line 1036, Address: 0x344e68, Func Offset: 0x12f8
	// Line 1037, Address: 0x344e84, Func Offset: 0x1314
	// Line 1038, Address: 0x344e8c, Func Offset: 0x131c
	// Line 1039, Address: 0x344e94, Func Offset: 0x1324
	// Line 1040, Address: 0x344e9c, Func Offset: 0x132c
	// Line 1041, Address: 0x344ea8, Func Offset: 0x1338
	// Line 1042, Address: 0x344eb4, Func Offset: 0x1344
	// Line 1043, Address: 0x344ec0, Func Offset: 0x1350
	// Line 1044, Address: 0x344ecc, Func Offset: 0x135c
	// Line 1045, Address: 0x344ee4, Func Offset: 0x1374
	// Line 1046, Address: 0x344eec, Func Offset: 0x137c
	// Line 1050, Address: 0x344ef4, Func Offset: 0x1384
	// Line 1051, Address: 0x344f10, Func Offset: 0x13a0
	// Line 1052, Address: 0x344f2c, Func Offset: 0x13bc
	// Line 1053, Address: 0x344f48, Func Offset: 0x13d8
	// Line 1054, Address: 0x344f50, Func Offset: 0x13e0
	// Line 1055, Address: 0x344f58, Func Offset: 0x13e8
	// Line 1056, Address: 0x344f60, Func Offset: 0x13f0
	// Line 1057, Address: 0x344f6c, Func Offset: 0x13fc
	// Line 1058, Address: 0x344f78, Func Offset: 0x1408
	// Line 1059, Address: 0x344f84, Func Offset: 0x1414
	// Line 1060, Address: 0x344f90, Func Offset: 0x1420
	// Line 1061, Address: 0x344fa8, Func Offset: 0x1438
	// Line 1062, Address: 0x344fb0, Func Offset: 0x1440
	// Line 1066, Address: 0x344fb8, Func Offset: 0x1448
	// Line 1067, Address: 0x344fd4, Func Offset: 0x1464
	// Line 1068, Address: 0x344ff0, Func Offset: 0x1480
	// Line 1069, Address: 0x34500c, Func Offset: 0x149c
	// Line 1070, Address: 0x345014, Func Offset: 0x14a4
	// Line 1071, Address: 0x34501c, Func Offset: 0x14ac
	// Line 1073, Address: 0x345024, Func Offset: 0x14b4
	// Line 1074, Address: 0x345030, Func Offset: 0x14c0
	// Line 1075, Address: 0x34503c, Func Offset: 0x14cc
	// Line 1076, Address: 0x345048, Func Offset: 0x14d8
	// Line 1077, Address: 0x345054, Func Offset: 0x14e4
	// Line 1078, Address: 0x34506c, Func Offset: 0x14fc
	// Line 1079, Address: 0x345074, Func Offset: 0x1504
	// Line 1089, Address: 0x34507c, Func Offset: 0x150c
	// Line 1090, Address: 0x345098, Func Offset: 0x1528
	// Line 1091, Address: 0x3450b4, Func Offset: 0x1544
	// Line 1092, Address: 0x3450d0, Func Offset: 0x1560
	// Line 1093, Address: 0x3450e4, Func Offset: 0x1574
	// Line 1094, Address: 0x3450f8, Func Offset: 0x1588
	// Line 1096, Address: 0x34510c, Func Offset: 0x159c
	// Line 1097, Address: 0x345118, Func Offset: 0x15a8
	// Line 1098, Address: 0x345124, Func Offset: 0x15b4
	// Line 1099, Address: 0x345130, Func Offset: 0x15c0
	// Line 1100, Address: 0x34513c, Func Offset: 0x15cc
	// Line 1101, Address: 0x345154, Func Offset: 0x15e4
	// Line 1102, Address: 0x34515c, Func Offset: 0x15ec
	// Line 1108, Address: 0x345164, Func Offset: 0x15f4
	// Line 1109, Address: 0x34519c, Func Offset: 0x162c
	// Line 1110, Address: 0x3451a8, Func Offset: 0x1638
	// Line 1113, Address: 0x3451ac, Func Offset: 0x163c
	// Line 1160, Address: 0x3451b8, Func Offset: 0x1648
	// Func End, Address: 0x3451e0, Func Offset: 0x1670
}

// xParMgrFXEventMode__FPviP8Vector3DP8Vector3Di
// Start address: 0x3451e0
void xParMgrFXEventMode(void* a, int32 vfxType, Vector3D* v1, Vector3D* v2, int32 emitMode)
{
	xParCmd* cmd;
	// Line 612, Address: 0x3451e0, Func Offset: 0
	// Line 613, Address: 0x345214, Func Offset: 0x34
	// Line 615, Address: 0x345228, Func Offset: 0x48
	// Line 616, Address: 0x3452c8, Func Offset: 0xe8
	// Line 618, Address: 0x34536c, Func Offset: 0x18c
	// Line 620, Address: 0x345378, Func Offset: 0x198
	// Line 621, Address: 0x345384, Func Offset: 0x1a4
	// Line 622, Address: 0x345390, Func Offset: 0x1b0
	// Line 623, Address: 0x345398, Func Offset: 0x1b8
	// Line 624, Address: 0x34539c, Func Offset: 0x1bc
	// Line 625, Address: 0x3453a4, Func Offset: 0x1c4
	// Line 627, Address: 0x3453b0, Func Offset: 0x1d0
	// Line 628, Address: 0x3453bc, Func Offset: 0x1dc
	// Line 629, Address: 0x3453c8, Func Offset: 0x1e8
	// Line 630, Address: 0x3453d0, Func Offset: 0x1f0
	// Line 631, Address: 0x3453d4, Func Offset: 0x1f4
	// Line 632, Address: 0x3453dc, Func Offset: 0x1fc
	// Line 634, Address: 0x3453e8, Func Offset: 0x208
	// Line 644, Address: 0x3453f4, Func Offset: 0x214
	// Line 645, Address: 0x345404, Func Offset: 0x224
	// Line 646, Address: 0x345414, Func Offset: 0x234
	// Line 647, Address: 0x345424, Func Offset: 0x244
	// Line 648, Address: 0x345430, Func Offset: 0x250
	// Line 649, Address: 0x34543c, Func Offset: 0x25c
	// Line 657, Address: 0x345448, Func Offset: 0x268
	// Line 660, Address: 0x345450, Func Offset: 0x270
	// Line 663, Address: 0x345468, Func Offset: 0x288
	// Line 665, Address: 0x345474, Func Offset: 0x294
	// Line 676, Address: 0x345480, Func Offset: 0x2a0
	// Line 677, Address: 0x345490, Func Offset: 0x2b0
	// Line 678, Address: 0x34549c, Func Offset: 0x2bc
	// Line 680, Address: 0x3454ac, Func Offset: 0x2cc
	// Line 681, Address: 0x3454b8, Func Offset: 0x2d8
	// Line 682, Address: 0x3454c4, Func Offset: 0x2e4
	// Line 686, Address: 0x3454d0, Func Offset: 0x2f0
	// Func End, Address: 0x3454f8, Func Offset: 0x318
}

// xParMgrRender__Fv
// Start address: 0x345500
void xParMgrRender()
{
	// Line 598, Address: 0x345500, Func Offset: 0
	// Line 600, Address: 0x345508, Func Offset: 0x8
	// Line 602, Address: 0x345510, Func Offset: 0x10
	// Func End, Address: 0x345520, Func Offset: 0x20
}

// xParMgrAnimate__Fv
// Start address: 0x345520
void xParMgrAnimate()
{
	// Line 586, Address: 0x345520, Func Offset: 0
	// Func End, Address: 0x345528, Func Offset: 0x8
}

// xParMgrExecute__Fv
// Start address: 0x345530
void xParMgrExecute()
{
	uint32 numFrames;
	int32 i;
	// Line 524, Address: 0x345530, Func Offset: 0
	// Line 534, Address: 0x34553c, Func Offset: 0xc
	// Line 538, Address: 0x345540, Func Offset: 0x10
	// Line 539, Address: 0x3455e4, Func Offset: 0xb4
	// Line 540, Address: 0x34568c, Func Offset: 0x15c
	// Line 544, Address: 0x345698, Func Offset: 0x168
	// Line 547, Address: 0x3456a8, Func Offset: 0x178
	// Line 548, Address: 0x3456b0, Func Offset: 0x180
	// Line 549, Address: 0x3456b8, Func Offset: 0x188
	// Line 551, Address: 0x3456c4, Func Offset: 0x194
	// Line 553, Address: 0x3456c8, Func Offset: 0x198
	// Line 557, Address: 0x3456d0, Func Offset: 0x1a0
	// Line 559, Address: 0x3456dc, Func Offset: 0x1ac
	// Line 560, Address: 0x345700, Func Offset: 0x1d0
	// Line 561, Address: 0x345728, Func Offset: 0x1f8
	// Line 563, Address: 0x34573c, Func Offset: 0x20c
	// Line 565, Address: 0x345748, Func Offset: 0x218
	// Line 566, Address: 0x34576c, Func Offset: 0x23c
	// Line 567, Address: 0x345790, Func Offset: 0x260
	// Line 569, Address: 0x3457a4, Func Offset: 0x274
	// Line 570, Address: 0x3457b0, Func Offset: 0x280
	// Line 578, Address: 0x3457bc, Func Offset: 0x28c
	// Func End, Address: 0x3457d0, Func Offset: 0x2a0
}

// xParMgrDebug__Fi
// Start address: 0x3457d0
void xParMgrDebug()
{
	tagxParSys* sys;
	int32 sysAliveCount;
	uint32 i;
	uint32 totalAlive;
	uint32 sysDeadCount;
	uint32 deadCount;
	xPar* p;
	// Line 458, Address: 0x3457d0, Func Offset: 0
	// Line 460, Address: 0x3457e8, Func Offset: 0x18
	// Line 465, Address: 0x3457f0, Func Offset: 0x20
	// Line 466, Address: 0x3457f4, Func Offset: 0x24
	// Line 468, Address: 0x3457fc, Func Offset: 0x2c
	// Line 469, Address: 0x345800, Func Offset: 0x30
	// Line 470, Address: 0x345808, Func Offset: 0x38
	// Line 472, Address: 0x34581c, Func Offset: 0x4c
	// Line 474, Address: 0x345830, Func Offset: 0x60
	// Line 478, Address: 0x34583c, Func Offset: 0x6c
	// Line 479, Address: 0x345854, Func Offset: 0x84
	// Line 505, Address: 0x345858, Func Offset: 0x88
	// Line 506, Address: 0x345900, Func Offset: 0x130
	// Line 508, Address: 0x345908, Func Offset: 0x138
	// Line 509, Address: 0x34592c, Func Offset: 0x15c
	// Line 510, Address: 0x345930, Func Offset: 0x160
	// Line 511, Address: 0x345934, Func Offset: 0x164
	// Line 513, Address: 0x345944, Func Offset: 0x174
	// Line 514, Address: 0x345964, Func Offset: 0x194
	// Func End, Address: 0x345984, Func Offset: 0x1b4
}

// xParMgrLevelReset__Fv
// Start address: 0x345990
void xParMgrLevelReset()
{
	// Line 364, Address: 0x345990, Func Offset: 0
	// Line 365, Address: 0x34599c, Func Offset: 0xc
	// Line 366, Address: 0x3459a0, Func Offset: 0x10
	// Line 368, Address: 0x3459a4, Func Offset: 0x14
	// Line 369, Address: 0x3459f4, Func Offset: 0x64
	// Func End, Address: 0x345a08, Func Offset: 0x78
}

// xParMgrKillAllParticles__Fv
// Start address: 0x345a10
void xParMgrKillAllParticles()
{
	int32 i;
	// Line 345, Address: 0x345a10, Func Offset: 0
	// Line 348, Address: 0x345a1c, Func Offset: 0xc
	// Line 349, Address: 0x345a2c, Func Offset: 0x1c
	// Line 351, Address: 0x345a38, Func Offset: 0x28
	// Line 352, Address: 0x345a58, Func Offset: 0x48
	// Line 353, Address: 0x345a6c, Func Offset: 0x5c
	// Func End, Address: 0x345a80, Func Offset: 0x70
}

// xParMgrIgnoreFXEvents__Fi
// Start address: 0x345a80
void xParMgrIgnoreFXEvents(int32 numFrames)
{
	// Line 337, Address: 0x345a80, Func Offset: 0
	// Line 338, Address: 0x345a90, Func Offset: 0x10
	// Line 339, Address: 0x345b30, Func Offset: 0xb0
	// Line 340, Address: 0x345b34, Func Offset: 0xb4
	// Func End, Address: 0x345b48, Func Offset: 0xc8
}

// xParMgrInit__Fv
// Start address: 0x345b50
void xParMgrInit()
{
	int32 i;
	// Line 247, Address: 0x345b50, Func Offset: 0
	// Line 250, Address: 0x345b5c, Func Offset: 0xc
	// Line 251, Address: 0x345b6c, Func Offset: 0x1c
	// Line 253, Address: 0x345b78, Func Offset: 0x28
	// Line 254, Address: 0x345b80, Func Offset: 0x30
	// Line 255, Address: 0x345b88, Func Offset: 0x38
	// Line 256, Address: 0x345b90, Func Offset: 0x40
	// Line 259, Address: 0x345b98, Func Offset: 0x48
	// Line 261, Address: 0x345ba4, Func Offset: 0x54
	// Line 262, Address: 0x345bb8, Func Offset: 0x68
	// Line 263, Address: 0x345bcc, Func Offset: 0x7c
	// Line 265, Address: 0x345be8, Func Offset: 0x98
	// Line 266, Address: 0x345c08, Func Offset: 0xb8
	// Line 267, Address: 0x345c2c, Func Offset: 0xdc
	// Line 269, Address: 0x345c50, Func Offset: 0x100
	// Line 270, Address: 0x345c84, Func Offset: 0x134
	// Line 271, Address: 0x345cb8, Func Offset: 0x168
	// Line 274, Address: 0x345ccc, Func Offset: 0x17c
	// Line 277, Address: 0x345cd4, Func Offset: 0x184
	// Line 278, Address: 0x345cec, Func Offset: 0x19c
	// Line 279, Address: 0x345d04, Func Offset: 0x1b4
	// Line 280, Address: 0x345d1c, Func Offset: 0x1cc
	// Line 281, Address: 0x345d34, Func Offset: 0x1e4
	// Line 282, Address: 0x345d4c, Func Offset: 0x1fc
	// Line 283, Address: 0x345d64, Func Offset: 0x214
	// Line 284, Address: 0x345d7c, Func Offset: 0x22c
	// Line 285, Address: 0x345d94, Func Offset: 0x244
	// Line 286, Address: 0x345dac, Func Offset: 0x25c
	// Line 287, Address: 0x345dc4, Func Offset: 0x274
	// Line 288, Address: 0x345ddc, Func Offset: 0x28c
	// Line 289, Address: 0x345df4, Func Offset: 0x2a4
	// Line 290, Address: 0x345e0c, Func Offset: 0x2bc
	// Line 291, Address: 0x345e24, Func Offset: 0x2d4
	// Line 292, Address: 0x345e3c, Func Offset: 0x2ec
	// Line 293, Address: 0x345e54, Func Offset: 0x304
	// Line 294, Address: 0x345e6c, Func Offset: 0x31c
	// Line 295, Address: 0x345e84, Func Offset: 0x334
	// Line 296, Address: 0x345e9c, Func Offset: 0x34c
	// Line 297, Address: 0x345eb4, Func Offset: 0x364
	// Line 298, Address: 0x345ecc, Func Offset: 0x37c
	// Line 299, Address: 0x345ee4, Func Offset: 0x394
	// Line 300, Address: 0x345efc, Func Offset: 0x3ac
	// Line 301, Address: 0x345f14, Func Offset: 0x3c4
	// Line 302, Address: 0x345f2c, Func Offset: 0x3dc
	// Line 303, Address: 0x345f44, Func Offset: 0x3f4
	// Line 304, Address: 0x345f5c, Func Offset: 0x40c
	// Line 305, Address: 0x345f74, Func Offset: 0x424
	// Line 306, Address: 0x345f8c, Func Offset: 0x43c
	// Line 307, Address: 0x345fa4, Func Offset: 0x454
	// Line 308, Address: 0x345fbc, Func Offset: 0x46c
	// Line 309, Address: 0x345fd4, Func Offset: 0x484
	// Line 310, Address: 0x345fec, Func Offset: 0x49c
	// Line 312, Address: 0x346004, Func Offset: 0x4b4
	// Line 313, Address: 0x34600c, Func Offset: 0x4bc
	// Line 316, Address: 0x346014, Func Offset: 0x4c4
	// Line 317, Address: 0x346024, Func Offset: 0x4d4
	// Line 319, Address: 0x346074, Func Offset: 0x524
	// Line 322, Address: 0x34607c, Func Offset: 0x52c
	// Line 327, Address: 0x346084, Func Offset: 0x534
	// Func End, Address: 0x346098, Func Offset: 0x548
}

