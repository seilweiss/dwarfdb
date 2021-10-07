typedef struct tagP2VERTEX;
typedef struct tagXAnim;
typedef struct tagiAnimResource;
typedef struct tagxPlayer;
typedef struct tagP2MeshVertex;
typedef struct iObjRuntime;
typedef struct tagiAnimRuntime;
typedef struct tagP2Weight;
typedef struct tagxStateLink;
typedef struct _xActor;
typedef struct _p2Geom;
typedef struct tagxActorDBData;
typedef struct _FCinfo;
typedef struct tagxObjDBData;
typedef struct XStreamHeader;
typedef struct tagXAnimTrigger;
typedef struct Vector3D;
typedef struct _RpClump;
typedef struct tagxStateThread;
typedef struct Vector4D;
typedef struct tagxState;
typedef struct tagXAnimControl;
typedef struct tagiMesh;
typedef struct iActorRuntime;
typedef struct tagxStateMgr;
typedef struct tagXStreamDirectoryEntry;
typedef struct _RwObject;
typedef struct _xObj;
typedef struct _iVFXResource;
typedef struct tagxPhysicsObject;
typedef struct tagiAnimFrame;
typedef struct xNavLink;
typedef struct _iSFXResource;
typedef struct _RwLLLink;
typedef struct _iRenderEffects;
typedef struct xNavPoint;
typedef struct xMessage;
typedef struct _RwLinkList;
typedef struct tagP2Mesh;
typedef struct tagxPadAction;
typedef struct tagXStreamMDSDirectory;

typedef _RpClump*(*type_66)(_RpClump*, void*);
typedef void(*type_125)(_xActor*, int32, tagXAnim*, tagXAnimTrigger*);

typedef _xActor type_0[1];
typedef tagxStateLink type_1[1];
typedef tagxStateLink type_2[1];
typedef tagxStateLink type_3[1];
typedef tagxStateLink type_4[1];
typedef Vector3D type_5[5];
typedef _xActor type_6[4];
typedef tagxStateLink type_7[1];
typedef tagxStateLink type_8[41];
typedef tagXStreamDirectoryEntry type_9[1000];
typedef tagxStateLink type_10[4];
typedef tagxStateLink type_11[1];
typedef tagxStateLink type_12[4];
typedef _xActor type_13[4];
typedef tagxStateLink type_14[10];
typedef tagxStateLink type_15[10];
typedef tagxStateLink type_16[6];
typedef _xActor type_17[1];
typedef tagxStateLink type_18[1];
typedef tagxStateLink type_19[7];
typedef tagxStateLink type_20[13];
typedef tagxStateLink type_21[7];
typedef tagxStateLink type_22[6];
typedef tagxStateLink type_23[7];
typedef _xActor type_24[1];
typedef tagxStateLink type_25[5];
typedef tagxStateLink type_26[3];
typedef tagxStateLink type_27[1];
typedef tagxStateLink type_28[1];
typedef _xActor* type_29[40];
typedef tagxStateLink type_30[1];
typedef tagxStateLink type_31[2];
typedef tagxStateLink type_32[6];
typedef int8 type_33[40];
typedef tagxStateLink type_34[36];
typedef tagxStateLink type_35[6];
typedef tagxStateLink type_36[6];
typedef tagxStateLink type_37[25];
typedef tagxStateLink type_38[1];
typedef _xActor* type_39[13];
typedef tagxState type_40[163];
typedef _xActor type_41[1];
typedef tagxStateLink type_42[1];
typedef tagxStateLink type_43[7];
typedef tagxStateLink type_44[6];
typedef uint8 type_45[17];
typedef tagxStateLink type_46[6];
typedef tagxStateLink type_47[6];
typedef _xObj type_48[32];
typedef _xActor type_49[4];
typedef tagxStateLink type_50[3];
typedef tagxStateLink type_51[7];
typedef tagxStateLink type_52[1];
typedef tagxStateLink type_53[1];
typedef tagxStateLink type_54[1];
typedef tagxStateLink type_55[7];
typedef _xActor type_56[4];
typedef tagxStateLink type_57[1];
typedef tagxStateLink type_58[24];
typedef tagxStateLink type_59[6];
typedef _xActor type_60[1];
typedef tagxStateLink type_61[1];
typedef tagxStateLink type_62[24];
typedef _xActor type_63[4];
typedef tagxStateLink type_64[6];
typedef tagxStateLink type_65[41];
typedef tagxStateLink type_67[41];
typedef tagxStateLink type_68[1];
typedef _xActor type_69[4];
typedef tagxStateLink type_70[1];
typedef tagxStateLink type_71[1];
typedef tagxStateLink type_72[1];
typedef tagxStateLink type_73[7];
typedef tagxStateLink type_74[10];
typedef tagxStateLink type_75[1];
typedef _xActor type_76[4];
typedef tagxStateLink type_77[25];
typedef tagxStateLink type_78[9];
typedef tagxStateLink type_79[1];
typedef tagxStateLink type_80[1];
typedef _xActor type_81[4];
typedef tagxStateLink type_82[1];
typedef tagxStateLink type_83[9];
typedef tagxState* type_84[10];
typedef tagxStateLink type_85[6];
typedef tagxStateLink type_86[1];
typedef int8 type_87[2048];
typedef _xActor type_88[1];
typedef tagxStateLink type_89[6];
typedef tagxStateLink type_90[1];
typedef tagxStateLink type_91[1];
typedef tagxStateLink type_92[1];
typedef _xActor type_93[4];
typedef tagxStateLink type_94[7];
typedef tagxStateLink type_95[36];
typedef tagxStateLink type_96[4];
typedef tagxStateLink type_97[7];
typedef tagxStateLink type_98[1];
typedef _xActor type_99[4];
typedef tagxStateLink type_100[6];
typedef uint8 type_101[17];
typedef tagxStateLink type_102[6];
typedef tagxStateLink type_103[6];
typedef _xActor type_104[4];
typedef tagxStateLink type_105[1];
typedef tagxStateLink type_106[7];
typedef tagxStateLink type_107[13];
typedef tagxStateLink type_108[7];
typedef tagxStateLink type_109[6];
typedef tagxStateLink type_110[7];
typedef _xActor type_111[1];
typedef tagxStateLink type_112[1];
typedef tagxStateLink type_113[25];
typedef tagxStateLink type_114[1];
typedef _xActor type_115[1];
typedef tagxStateLink type_116[25];
typedef tagxStateLink type_117[2];
typedef tagxStateLink type_118[6];
typedef tagxStateLink type_119[10];
typedef _xActor type_120[1];
typedef tagxStateLink type_121[6];
typedef tagxStateLink type_122[1];
typedef tagxStateLink type_123[1];
typedef tagxStateLink type_124[24];
typedef _xActor type_126[1];
typedef tagxStateLink type_127[1];
typedef _xActor type_128[1];
typedef tagxStateLink type_129[7];
typedef tagxStateLink type_130[4];
typedef tagxStateLink type_131[9];
typedef uint8 type_132[3];
typedef tagxStateLink type_133[4];
typedef _xActor type_134[1];
typedef tagxStateLink type_135[3];
typedef tagxStateLink type_136[1];
typedef tagxStateLink type_137[1];
typedef tagxStateLink type_138[1];
typedef tagxStateLink type_139[1];
typedef tagxStateLink type_140[1];
typedef _xActor type_141[1];
typedef tagxStateLink type_142[1];
typedef uint8 type_143[4];
typedef tagxStateLink type_144[3];
typedef tagxStateLink type_145[6];
typedef _xActor type_146[1];
typedef tagxStateLink type_147[4];
typedef tagxPlayer type_148[0];
typedef tagxStateLink type_149[3];
typedef uint8 type_150[4];
typedef tagxStateLink type_151[6];
typedef tagxStateLink type_152[36];
typedef int8 type_153[128];
typedef _xActor type_154[4];
typedef tagxStateLink type_155[36];
typedef tagxStateLink type_156[6];
typedef uint8 type_157[4];
typedef tagxStateLink type_158[1];
typedef tagxStateLink type_159[7];
typedef _xActor type_160[4];
typedef tagxStateLink type_161[1];
typedef tagxStateLink type_162[7];
typedef tagxStateLink type_163[6];
typedef tagxStateLink type_164[7];
typedef _xActor type_165[4];
typedef tagxStateLink type_166[5];
typedef tagxStateLink type_167[24];
typedef tagxStateLink type_168[1];
typedef tagxStateLink type_169[1];
typedef tagxStateLink type_170[41];
typedef int32 type_171[7];
typedef tagxStateLink type_172[1];
typedef _xActor type_173[1];
typedef tagxStateLink type_174[2];
typedef tagxStateLink type_175[1];
typedef tagxStateThread type_176[7];
typedef tagxStateLink type_177[6];
typedef tagxStateLink type_178[1];
typedef _xActor type_179[1];
typedef tagxStateLink type_180[25];
typedef tagxStateLink type_181[1];
typedef _xActor type_182[1];
typedef tagxStateLink type_183[4];
typedef uint8 type_184[4];
typedef tagxStateLink type_185[1];
typedef tagxStateLink type_186[7];
typedef tagxStateLink type_187[6];
typedef _xActor type_188[4];
typedef uint8 type_189[17];
typedef tagxStateLink type_190[6];
typedef tagxStateLink type_191[6];
typedef tagxStateLink type_192[1];
typedef tagxStateLink type_193[7];
typedef _xActor type_194[1];
typedef uint8 type_195[3];
typedef tagxStateLink type_196[13];
typedef tagxStateLink type_197[4];
typedef tagxStateLink type_198[1];
typedef tagxStateLink type_199[7];
typedef uint16 type_200[3];
typedef tagxStateLink type_201[1];
typedef _xActor type_202[4];
typedef tagxStateLink type_203[25];
typedef tagxStateLink type_204[6];
typedef tagxStateLink type_205[25];
typedef _xActor type_206[4];
typedef tagxStateLink type_207[2];
typedef tagxStateLink type_208[6];
typedef tagxStateLink type_209[6];
typedef tagxStateLink type_210[6];
typedef tagxStateLink type_211[1];
typedef _xActor type_212[2];
typedef tagxStateLink type_213[1];
typedef tagxStateLink type_214[3];
typedef _xActor type_215[1];
typedef tagxStateLink type_216[25];
typedef tagxStateLink type_217[7];
typedef tagxStateLink type_218[9];
typedef tagxStateLink type_219[1];
typedef _xActor type_220[1];
typedef tagxStateLink type_221[1];
typedef tagxStateLink type_222[6];
typedef tagxStateLink type_223[1];
typedef tagxStateLink type_224[9];

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

struct tagP2MeshVertex
{
	float32 m_x;
	float32 m_y;
	float32 m_z;
};

struct iObjRuntime
{
	int16 m_flag;
	int16 m_pad;
	_p2Geom* m_geom;
	float32 m_bradius;
	tagxPhysicsObject m_phys;
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

struct _p2Geom
{
	uint32 m_meshCount;
	tagP2Mesh* m_mesh;
	_iRenderEffects effects;
	_RpClump* m_clump;
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

struct _FCinfo
{
	uint16 nidx[3];
};

struct tagxObjDBData
{
	_xObj m_o[32];
	int32 m_staticObjects;
	int32 m_staticAssets;
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

struct _xObj
{
	void* m_resource;
	iObjRuntime* m_runtime;
	uint32 m_modelID;
	void* m_texture;
	int16 m_objType;
	int16 m_objID;
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

struct tagXStreamMDSDirectory
{
	uint32 count;
	tagXStreamDirectoryEntry directory[1000];
};

uint8 g_pasJointsLowerOnly[17];
uint8 g_pasJointsUpperOnly[17];
uint8 g_pasJointsAll[17];
tagxStateLink link_pas_AshWithSaw_Idle_Relaxed_Ax[41];
tagxStateLink link_pas_AshWithSaw_Idle_Armed_Ax[36];
tagxStateLink link_pas_AshWithSaw_Armed_Ax_Upper[10];
tagxStateLink link_pas_AshWithSaw_AttackLeft1_Ax[6];
tagxStateLink link_pas_AshWithSaw_AttackLeft2_Ax[6];
tagxStateLink link_pas_AshWithSaw_AttackLeft3_Ax[6];
tagxStateLink link_pas_AshWithSaw_Reload_Ax[4];
tagxStateLink link_pas_AshWithSaw_AttackLeft1_Ax_Upper[1];
tagxStateLink link_pas_AshWithSaw_AttackLeft2_Ax_Upper[1];
tagxStateLink link_pas_AshWithSaw_AttackLeft3_Ax_Upper[1];
tagxStateLink link_pas_AshWithSaw_Reload_Ax_Upper[1];
tagxStateLink link_pas_AshWithSaw_Walking_Relaxed_Ax[25];
tagxStateLink link_pas_AshWithSaw_Running_Relaxed_Ax[25];
tagxStateLink link_pas_AshWithSaw_WalkingBack_Relaxed_Ax[24];
tagxStateLink link_pas_AshWithSaw_AttackComboRight_Ax[3];
tagxStateLink link_pas_AshWithSaw_AttackComboLeft_Ax[1];
tagxStateLink link_pas_AshWithSaw_Relaxed_HitLeft_Ax[7];
tagxStateLink link_pas_AshWithSaw_Relaxed_HitRight_Ax[7];
tagxStateLink link_pas_AshWithSaw_Relaxed_HitDown_Ax[7];
tagxStateLink link_pas_AshWithSaw_Relaxed_HitUp_Ax[7];
tagxStateLink link_pas_AshWithSaw_Relaxed_HitBack_Ax[7];
tagxStateLink link_pas_AshWithSaw_Armed_HitStrong_Ax[1];
tagxStateLink link_pas_AshWithSaw_Relaxed_HitStrong_Ax[1];
tagxStateLink link_pas_AshWithSaw_Relaxed_HitBalls_Ax[1];
tagxStateLink link_pas_AshWithSaw_Armed_HitBalls_Ax[1];
tagxStateLink link_pas_AshWithSaw_AttackRight1_Ax[6];
tagxStateLink link_pas_AshWithSaw_AttackRight2_Ax[6];
tagxStateLink link_pas_AshWithSaw_AttackRight3_Ax[6];
tagxStateLink link_pas_AshWithSaw_Idle_Relaxed_Shotgun[41];
tagxStateLink link_pas_AshWithSaw_Idle_Armed_Shotgun[36];
tagxStateLink link_pas_AshWithSaw_Armed_Shotgun_Upper[10];
tagxStateLink link_pas_AshWithSaw_AttackLeft1_Shotgun[6];
tagxStateLink link_pas_AshWithSaw_AttackLeft2_Shotgun[6];
tagxStateLink link_pas_AshWithSaw_AttackLeft3_Shotgun[6];
tagxStateLink link_pas_AshWithSaw_Reload_Shotgun[4];
tagxStateLink link_pas_AshWithSaw_AttackLeft1_Shotgun_Upper[1];
tagxStateLink link_pas_AshWithSaw_AttackLeft2_Shotgun_Upper[1];
tagxStateLink link_pas_AshWithSaw_AttackLeft3_Shotgun_Upper[1];
tagxStateLink link_pas_AshWithSaw_Reload_Shotgun_Upper[1];
tagxStateLink link_pas_AshWithSaw_Walking_Relaxed_Shotgun[25];
tagxStateLink link_pas_AshWithSaw_Running_Relaxed_Shotgun[25];
tagxStateLink link_pas_AshWithSaw_WalkingBack_Relaxed_Shotgun[24];
tagxStateLink link_pas_AshWithSaw_AttackComboRight_Shotgun[3];
tagxStateLink link_pas_AshWithSaw_AttackComboLeft_Shotgun[1];
tagxStateLink link_pas_AshWithSaw_Relaxed_HitLeft_Shotgun[7];
tagxStateLink link_pas_AshWithSaw_Relaxed_HitRight_Shotgun[7];
tagxStateLink link_pas_AshWithSaw_Relaxed_HitDown_Shotgun[7];
tagxStateLink link_pas_AshWithSaw_Relaxed_HitUp_Shotgun[7];
tagxStateLink link_pas_AshWithSaw_Relaxed_HitBack_Shotgun[7];
tagxStateLink link_pas_AshWithSaw_Armed_HitStrong_Shotgun[1];
tagxStateLink link_pas_AshWithSaw_Relaxed_HitStrong_Shotgun[1];
tagxStateLink link_pas_AshWithSaw_Relaxed_HitBalls_Shotgun[1];
tagxStateLink link_pas_AshWithSaw_Armed_HitBalls_Shotgun[1];
tagxStateLink link_pas_AshWithSaw_AttackRight1_Shotgun[6];
tagxStateLink link_pas_AshWithSaw_AttackRight2_Shotgun[6];
tagxStateLink link_pas_AshWithSaw_AttackRight3_Shotgun[6];
tagxStateLink link_pas_AshWithSaw_Idle_Relaxed_Pistol[41];
tagxStateLink link_pas_AshWithSaw_Idle_Armed_Pistol[36];
tagxStateLink link_pas_AshWithSaw_Armed_Pistol_Upper[10];
tagxStateLink link_pas_AshWithSaw_AttackLeft1_Pistol[6];
tagxStateLink link_pas_AshWithSaw_AttackLeft2_Pistol[6];
tagxStateLink link_pas_AshWithSaw_AttackLeft3_Pistol[6];
tagxStateLink link_pas_AshWithSaw_Reload_Pistol[4];
tagxStateLink link_pas_AshWithSaw_AttackLeft1_Pistol_Upper[1];
tagxStateLink link_pas_AshWithSaw_AttackLeft2_Pistol_Upper[1];
tagxStateLink link_pas_AshWithSaw_AttackLeft3_Pistol_Upper[1];
tagxStateLink link_pas_AshWithSaw_Reload_Pistol_Upper[1];
tagxStateLink link_pas_AshWithSaw_Walking_Relaxed_Pistol[25];
tagxStateLink link_pas_AshWithSaw_Running_Relaxed_Pistol[25];
tagxStateLink link_pas_AshWithSaw_WalkingBack_Relaxed_Pistol[24];
tagxStateLink link_pas_AshWithSaw_AttackComboRight_Pistol[3];
tagxStateLink link_pas_AshWithSaw_AttackComboLeft_Pistol[1];
tagxStateLink link_pas_AshWithSaw_Relaxed_HitLeft_Pistol[7];
tagxStateLink link_pas_AshWithSaw_Relaxed_HitRight_Pistol[7];
tagxStateLink link_pas_AshWithSaw_Relaxed_HitDown_Pistol[7];
tagxStateLink link_pas_AshWithSaw_Relaxed_HitUp_Pistol[7];
tagxStateLink link_pas_AshWithSaw_Relaxed_HitBack_Pistol[7];
tagxStateLink link_pas_AshWithSaw_Armed_HitStrong_Pistol[1];
tagxStateLink link_pas_AshWithSaw_Relaxed_HitStrong_Pistol[1];
tagxStateLink link_pas_AshWithSaw_Relaxed_HitBalls_Pistol[1];
tagxStateLink link_pas_AshWithSaw_Armed_HitBalls_Pistol[1];
tagxStateLink link_pas_AshWithSaw_AttackRight1_Pistol[6];
tagxStateLink link_pas_AshWithSaw_AttackRight2_Pistol[6];
tagxStateLink link_pas_AshWithSaw_AttackRight3_Pistol[6];
tagxStateLink link_pas_AshWithSaw_Idle_Relaxed_Rifle[41];
tagxStateLink link_pas_AshWithSaw_Idle_Armed_Rifle[36];
tagxStateLink link_pas_AshWithSaw_Armed_Rifle_Upper[10];
tagxStateLink link_pas_AshWithSaw_AttackLeft1_Rifle[6];
tagxStateLink link_pas_AshWithSaw_AttackLeft2_Rifle[6];
tagxStateLink link_pas_AshWithSaw_AttackLeft3_Rifle[6];
tagxStateLink link_pas_AshWithSaw_Reload_Rifle[4];
tagxStateLink link_pas_AshWithSaw_AttackLeft1_Rifle_Upper[1];
tagxStateLink link_pas_AshWithSaw_AttackLeft2_Rifle_Upper[1];
tagxStateLink link_pas_AshWithSaw_AttackLeft3_Rifle_Upper[1];
tagxStateLink link_pas_AshWithSaw_Reload_Rifle_Upper[1];
tagxStateLink link_pas_AshWithSaw_Walking_Relaxed_Rifle[25];
tagxStateLink link_pas_AshWithSaw_Running_Relaxed_Rifle[25];
tagxStateLink link_pas_AshWithSaw_WalkingBack_Relaxed_Rifle[24];
tagxStateLink link_pas_AshWithSaw_AttackComboRight_Rifle[3];
tagxStateLink link_pas_AshWithSaw_AttackComboLeft_Rifle[1];
tagxStateLink link_pas_AshWithSaw_Relaxed_HitLeft_Rifle[7];
tagxStateLink link_pas_AshWithSaw_Relaxed_HitRight_Rifle[7];
tagxStateLink link_pas_AshWithSaw_Relaxed_HitDown_Rifle[7];
tagxStateLink link_pas_AshWithSaw_Relaxed_HitUp_Rifle[7];
tagxStateLink link_pas_AshWithSaw_Relaxed_HitBack_Rifle[7];
tagxStateLink link_pas_AshWithSaw_Armed_HitStrong_Rifle[1];
tagxStateLink link_pas_AshWithSaw_Relaxed_HitStrong_Rifle[1];
tagxStateLink link_pas_AshWithSaw_Relaxed_HitBalls_Rifle[1];
tagxStateLink link_pas_AshWithSaw_Armed_HitBalls_Rifle[1];
tagxStateLink link_pas_AshWithSaw_AttackRight1_Rifle[6];
tagxStateLink link_pas_AshWithSaw_AttackRight2_Rifle[6];
tagxStateLink link_pas_AshWithSaw_AttackRight3_Rifle[6];
tagxStateLink link_pas_AshWithSaw_AttackRight1_Upper[1];
tagxStateLink link_pas_AshWithSaw_AttackRight2_Upper[1];
tagxStateLink link_pas_AshWithSaw_AttackRight3_Upper[1];
tagxStateLink link_pas_AshWithSaw_Armed_HitLeft[6];
tagxStateLink link_pas_AshWithSaw_Armed_HitRight[6];
tagxStateLink link_pas_AshWithSaw_Armed_HitDown[6];
tagxStateLink link_pas_AshWithSaw_Armed_HitUp[6];
tagxStateLink link_pas_AshWithSaw_Armed_HitBack[6];
tagxStateLink link_pas_AshWithSaw_Taunt1[9];
tagxStateLink link_pas_AshWithSaw_Taunt2[9];
tagxStateLink link_pas_AshWithSaw_Taunt3[9];
tagxStateLink link_pas_AshWithSaw_Startle1[5];
tagxStateLink link_pas_AshWithSaw_Startle2[5];
tagxStateLink link_pas_AshWithSaw_Taunt1_Upper[1];
tagxStateLink link_pas_AshWithSaw_Taunt2_Upper[1];
tagxStateLink link_pas_AshWithSaw_Taunt3_Upper[1];
tagxStateLink link_pas_AshWithSaw_LookAround_Upper[1];
tagxStateLink link_pas_AshWithSaw_LookUp_Upper[1];
tagxStateLink link_pas_AshWithSaw_Relaxed_HitLeft_Upper[1];
tagxStateLink link_pas_AshWithSaw_Relaxed_HitRight_Upper[1];
tagxStateLink link_pas_AshWithSaw_Relaxed_HitDown_Upper[1];
tagxStateLink link_pas_AshWithSaw_Relaxed_HitUp_Upper[1];
tagxStateLink link_pas_AshWithSaw_Relaxed_HitBack_Upper[1];
tagxStateLink link_pas_AshWithSaw_Armed_HitLeft_Upper[1];
tagxStateLink link_pas_AshWithSaw_Armed_HitRight_Upper[1];
tagxStateLink link_pas_AshWithSaw_Armed_HitDown_Upper[1];
tagxStateLink link_pas_AshWithSaw_Armed_HitUp_Upper[1];
tagxStateLink link_pas_AshWithSaw_Armed_HitBack_Upper[1];
tagxStateLink link_pas_AshWithSaw_Rotate_Clockwise[3];
tagxStateLink link_pas_AshWithSaw_Rotate_CounterClockwise[3];
tagxStateLink link_pas_AshWithSaw_Rotate_Clockwise_Anim[6];
tagxStateLink link_pas_AshWithSaw_Rotate_CounterClockwise_Anim[6];
tagxStateLink link_pas_AshWithSaw_Dodge_Right_WithWeapon[1];
tagxStateLink link_pas_AshWithSaw_Dodge_Left_WithWeapon[1];
tagxStateLink link_pas_AshWithSaw_PickFloor[13];
tagxStateLink link_pas_AshWithSaw_PickTable[13];
tagxStateLink link_pas_AshWithSaw_PickRoof[13];
tagxStateLink link_pas_AshWithSaw_ClimbUp[1];
tagxStateLink link_pas_AshWithSaw_ClimbDown[1];
tagxStateLink link_pas_AshWithSaw_PushMedium[9];
tagxStateLink link_pas_AshWithSaw_PushLow[9];
tagxStateLink link_pas_oldAsh_LowerBody_Walk[2];
tagxStateLink link_pas_oldAsh_LowerBody_RunFromWalk[2];
tagxStateLink link_pas_oldAsh_LowerBody_Run[2];
tagxStateLink link_pas_oldAsh_LowerBody_WalkFromRun[2];
tagxStateLink link_pas_Ash_LowerBody_WalkBack[1];
tagxStateLink link_pas_Ash_LowerBody_Walk[4];
tagxStateLink link_pas_Ash_LowerBody_RunFromWalk[4];
tagxStateLink link_pas_Ash_LowerBody_Run[4];
tagxStateLink link_pas_Ash_LowerBody_WalkFromRun[4];
tagxState g_pasStates[163];
int32 gPlayerType;
tagxActorDBData* gadb;
tagxObjDBData* godb;
tagxPlayer g_Players[0];
int8 vAssertBuf2[128];
XStreamHeader currentHeader;

void xPASAnimTrigger(_xActor* actor, tagXAnimTrigger* trigger);
void xPASSetWeapon();
void xPASStateReset();
void xPASStateInit();

// xPASAnimTrigger__FP7_xActoriP8tagXAnimP15tagXAnimTrigger
// Start address: 0x3437a0
void xPASAnimTrigger(_xActor* actor, tagXAnimTrigger* trigger)
{
	xMessage theMessage;
	_xActor* npc;
	int32 i;
	xMessage theMessage;
	int32 distance;
	_xObj* obj;
	int32 i;
	tagxPlayer* player;
	// Line 211, Address: 0x3437a0, Func Offset: 0
	// Line 216, Address: 0x3437c0, Func Offset: 0x20
	// Line 221, Address: 0x343868, Func Offset: 0xc8
	// Line 223, Address: 0x343878, Func Offset: 0xd8
	// Line 227, Address: 0x343888, Func Offset: 0xe8
	// Line 230, Address: 0x343894, Func Offset: 0xf4
	// Line 232, Address: 0x3438a8, Func Offset: 0x108
	// Line 234, Address: 0x3438b4, Func Offset: 0x114
	// Line 236, Address: 0x3438c8, Func Offset: 0x128
	// Line 238, Address: 0x3438dc, Func Offset: 0x13c
	// Line 240, Address: 0x3438e8, Func Offset: 0x148
	// Line 249, Address: 0x343940, Func Offset: 0x1a0
	// Line 250, Address: 0x343948, Func Offset: 0x1a8
	// Line 251, Address: 0x343950, Func Offset: 0x1b0
	// Line 252, Address: 0x343958, Func Offset: 0x1b8
	// Line 253, Address: 0x343960, Func Offset: 0x1c0
	// Line 254, Address: 0x343964, Func Offset: 0x1c4
	// Line 256, Address: 0x34396c, Func Offset: 0x1cc
	// Line 261, Address: 0x343978, Func Offset: 0x1d8
	// Line 264, Address: 0x34398c, Func Offset: 0x1ec
	// Line 265, Address: 0x343994, Func Offset: 0x1f4
	// Line 274, Address: 0x3439b4, Func Offset: 0x214
	// Line 279, Address: 0x3439c4, Func Offset: 0x224
	// Line 281, Address: 0x3439d0, Func Offset: 0x230
	// Line 282, Address: 0x3439e0, Func Offset: 0x240
	// Line 284, Address: 0x3439f8, Func Offset: 0x258
	// Line 286, Address: 0x343a04, Func Offset: 0x264
	// Line 288, Address: 0x343a14, Func Offset: 0x274
	// Line 290, Address: 0x343a38, Func Offset: 0x298
	// Line 295, Address: 0x343a60, Func Offset: 0x2c0
	// Line 296, Address: 0x343a68, Func Offset: 0x2c8
	// Line 297, Address: 0x343a70, Func Offset: 0x2d0
	// Line 298, Address: 0x343a78, Func Offset: 0x2d8
	// Line 300, Address: 0x343a80, Func Offset: 0x2e0
	// Line 301, Address: 0x343a90, Func Offset: 0x2f0
	// Line 303, Address: 0x343aa0, Func Offset: 0x300
	// Line 305, Address: 0x343aa8, Func Offset: 0x308
	// Line 307, Address: 0x343ab0, Func Offset: 0x310
	// Line 313, Address: 0x343abc, Func Offset: 0x31c
	// Line 314, Address: 0x343ac0, Func Offset: 0x320
	// Line 317, Address: 0x343ad4, Func Offset: 0x334
	// Line 318, Address: 0x343ad8, Func Offset: 0x338
	// Func End, Address: 0x343af8, Func Offset: 0x358
}

// xPASSetWeapon__FP7_xActoriP9tagxState
// Start address: 0x343b00
void xPASSetWeapon()
{
	// Line 195, Address: 0x343b00, Func Offset: 0
	// Func End, Address: 0x343b08, Func Offset: 0x8
}

// xPASStateReset__Fv
// Start address: 0x343b10
void xPASStateReset()
{
	// Line 103, Address: 0x343b10, Func Offset: 0
	// Line 105, Address: 0x343b18, Func Offset: 0x8
	// Line 107, Address: 0x343b2c, Func Offset: 0x1c
	// Func End, Address: 0x343b3c, Func Offset: 0x2c
}

// xPASStateInit__Fv
// Start address: 0x343b40
void xPASStateInit()
{
	// Line 99, Address: 0x343b40, Func Offset: 0
	// Line 100, Address: 0x343b48, Func Offset: 0x8
	// Line 101, Address: 0x343b5c, Func Offset: 0x1c
	// Func End, Address: 0x343b6c, Func Offset: 0x2c
}

