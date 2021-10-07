typedef struct tagXStreamMDSDirectory;
typedef struct _xActor;
typedef struct tagxState;
typedef struct _FCinfo;
typedef struct xNavLink;
typedef struct tagXAnimControl;
typedef struct _p2Geom;
typedef struct xNavPoint;
typedef struct tagXAnim;
typedef struct tagP2Mesh;
typedef struct _RwLLLink;
typedef struct tagiAnimResource;
typedef struct _RpClump;
typedef struct tagiAnimFrame;
typedef struct XStreamHeader;
typedef struct Vector3D;
typedef struct tagxFXEntry;
typedef struct tagP2VERTEX;
typedef struct tagxPadAction;
typedef struct tagP2MeshVertex;
typedef struct tagiAnimRuntime;
typedef struct tagP2Weight;
typedef struct tagxStateLink;
typedef struct tagxActorDBData;
typedef struct tagXStreamDirectoryEntry;
typedef struct _RwLinkList;
typedef struct tagXAnimTrigger;
typedef struct tagxStateThread;
typedef struct Vector4D;
typedef struct _iSFXResource;
typedef struct iActorRuntime;
typedef struct tagiMesh;
typedef struct tagxStateMgr;
typedef struct tagXAnimSet;
typedef struct _iVFXResource;
typedef struct tagxPhysicsObject;
typedef struct _iRenderEffects;
typedef struct xMessage;
typedef struct tagMATRIX;
typedef struct _RwObject;

typedef _RpClump*(*type_34)(_RpClump*, void*);
typedef void(*type_49)(_xActor*, int32, tagXAnim*, tagXAnimTrigger*);

typedef _xActor type_0[4];
typedef uint8 type_1[4];
typedef _xActor type_2[1];
typedef tagXStreamDirectoryEntry type_3[1000];
typedef _xActor type_4[4];
typedef tagXAnimSet type_5[5];
typedef uint8 type_6[3];
typedef _xActor type_7[4];
typedef uint16 type_8[3];
typedef _xActor type_9[2];
typedef _xActor type_10[1];
typedef _xActor type_11[1];
typedef _xActor type_12[1];
typedef int8 type_13[256];
typedef _xActor type_14[4];
typedef Vector3D type_15[5];
typedef _xActor type_16[4];
typedef int8 type_17[32];
typedef _xActor type_18[1];
typedef int8 type_19[32];
typedef _xActor type_20[1];
typedef _xActor* type_21[40];
typedef int8 type_22[40];
typedef tagXAnimSet type_23[2];
typedef _xActor* type_24[13];
typedef _xActor type_25[1];
typedef int8 type_26[2048];
typedef _xActor type_27[4];
typedef _xActor type_28[4];
typedef _xActor type_29[1];
typedef tagXAnimControl type_30[50];
typedef _xActor type_31[4];
typedef _xActor type_32[4];
typedef int8 type_33[32];
typedef _xActor type_35[4];
typedef _xActor type_36[4];
typedef _xActor type_37[1];
typedef tagxState* type_38[10];
typedef _xActor type_39[4];
typedef _xActor type_40[4];
typedef _xActor type_41[4];
typedef _xActor type_42[1];
typedef _xActor type_43[1];
typedef int8 type_44[128];
typedef tagXAnimSet type_45[5];
typedef _xActor type_46[1];
typedef _xActor type_47[1];
typedef _xActor type_48[1];
typedef _xActor type_50[1];
typedef uint8 type_51[3];
typedef _xActor type_52[1];
typedef tagXAnimSet type_53[1];
typedef _xActor type_54[1];
typedef uint8 type_55[4];
typedef _xActor type_56[4];
typedef uint8 type_57[4];
typedef _xActor type_58[4];
typedef uint8 type_59[4];
typedef _xActor type_60[4];
typedef _xActor type_61[1];
typedef int32 type_62[7];
typedef _xActor type_63[1];
typedef tagxStateThread type_64[7];
typedef _xActor type_65[1];

struct tagXStreamMDSDirectory
{
	uint32 count;
	tagXStreamDirectoryEntry directory[1000];
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

struct _p2Geom
{
	uint32 m_meshCount;
	tagP2Mesh* m_mesh;
	_iRenderEffects effects;
	_RpClump* m_clump;
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

struct tagXAnim
{
	tagiAnimResource* m_resource;
	tagiAnimRuntime* m_runtime;
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

struct _RwLLLink
{
	_RwLLLink* next;
	_RwLLLink* prev;
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

struct _RpClump
{
	_RwObject object;
	_RwLinkList atomicList;
	_RwLLLink inWorldLink;
	_RpClump*(*callback)(_RpClump*, void*);
	uint16 renderFrame;
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

struct tagxFXEntry
{
	tagXAnim* m_anim;
};

struct tagP2VERTEX
{
	float32 x;
	float32 y;
	float32 z;
	float32 tu;
	float32 tv;
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

struct tagXStreamDirectoryEntry
{
	uint32 id;
	uint32 type;
	uint32 offset;
	uint32 length;
};

struct _RwLinkList
{
	_RwLLLink link;
};

struct tagXAnimTrigger
{
	uint16 m_frame;
	uint16 m_type;
	uint32 m_data;
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

struct tagiMesh
{
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

struct tagXAnimSet
{
	uint32 m_assetID;
	uint32 m_animationCount;
	tagXAnim* m_animations;
	uint32 m_readyCount;
	tagXAnim* m_ready;
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

struct _RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

int32 g_AshAnimationsCount;
int32 g_BossAnimationsCount;
int32 g_SNPCAnimationsCount;
int32 g_DNPCAnimationsCount;
tagXAnimSet g_AshAnimations[1];
tagXAnimSet g_BossAnimations[2];
tagXAnimSet g_SNPCAnimations[5];
tagXAnimSet g_DNPCAnimations[5];
tagXAnimControl g_activeAnimations[50];
tagxFXEntry* g_fxTable;
uint32 interpreterMethodVFX;
uint32 interpreterMethodVFXRumble;
uint32 interpreterMethodSFX;
int32 pendingHeightReset;
_xActor* pendingHeightActor;
float32 pendingHeight;
int8 vAssertBuf2[128];
XStreamHeader currentHeader;
tagxActorDBData* gadb;
int32 gPlayerType;

void xAnimPostIdle();
void xAnimIdle();
void xAnimIdleFX(void* actorVoid, tagXAnim* anim, int32 frame);
void xAnimDebug(int32 mode);
void doBulletCheck(_xActor* actor);
void xAnimActorSetNewPosition(void* actor);
void xAnimResetActor(void* actor);
void xAnimDeleteActive(tagXAnimControl* curr);
void xAnimChangeActive(tagXAnimControl* curr, int32 state);
tagXAnimControl* xAnimChainActive(tagXAnimControl* curr, tagXAnim* anim, uint8* activeJoints, int32 state, uint32 startEvent, uint32 endEvent);
void xAnimReplaceActive(tagXAnimControl* curr, tagXAnim* anim, uint8* activeJoints, int32 state, uint32 enterEvent, uint32 exitEvent);
tagXAnimControl* xAnimAddActive(tagXAnim* anim, uint8* activeJoints, int32 state, void* c, int32 push, uint32 startEvent, uint32 endEvent);
tagXAnim* xAnimFind(uint32 assetID);
void xAnimLevelReset();
void xAnimReInitializeInterpreter();
void xAnimInit();

// xAnimPostIdle__Fv
// Start address: 0x3642e0
void xAnimPostIdle()
{
	tagxPadAction action;
	_xActor* a;
	tagXAnimControl* act;
	int32 i;
	// Line 1619, Address: 0x3642e0, Func Offset: 0
	// Line 1626, Address: 0x3642f0, Func Offset: 0x10
	// Line 1627, Address: 0x3642f8, Func Offset: 0x18
	// Line 1635, Address: 0x364304, Func Offset: 0x24
	// Line 1637, Address: 0x36431c, Func Offset: 0x3c
	// Line 1639, Address: 0x364320, Func Offset: 0x40
	// Line 1640, Address: 0x364328, Func Offset: 0x48
	// Line 1643, Address: 0x364330, Func Offset: 0x50
	// Line 1644, Address: 0x36433c, Func Offset: 0x5c
	// Line 1645, Address: 0x364340, Func Offset: 0x60
	// Line 1646, Address: 0x364354, Func Offset: 0x74
	// Func End, Address: 0x36436c, Func Offset: 0x8c
}

// xAnimIdle__Fv
// Start address: 0x364370
void xAnimIdle()
{
	int32 assetID;
	_xActor* a;
	tagXAnimTrigger trigger;
	xMessage theMessage;
	_xActor* xa;
	_xActor* xa;
	xMessage theMessage;
	Vector3D rot;
	Vector3D trans2;
	Vector3D trans1;
	int32 endAnim;
	tagiAnimResource* ar;
	tagXAnim* anim;
	tagXAnimControl* act;
	int32 i;
	// Line 1276, Address: 0x364370, Func Offset: 0
	// Line 1292, Address: 0x36438c, Func Offset: 0x1c
	// Line 1293, Address: 0x364394, Func Offset: 0x24
	// Line 1297, Address: 0x3643a0, Func Offset: 0x30
	// Line 1299, Address: 0x3643ac, Func Offset: 0x3c
	// Line 1304, Address: 0x3643bc, Func Offset: 0x4c
	// Line 1310, Address: 0x3643d0, Func Offset: 0x60
	// Line 1315, Address: 0x3643e4, Func Offset: 0x74
	// Line 1316, Address: 0x3643e8, Func Offset: 0x78
	// Line 1324, Address: 0x3643ec, Func Offset: 0x7c
	// Line 1328, Address: 0x3643fc, Func Offset: 0x8c
	// Line 1329, Address: 0x364414, Func Offset: 0xa4
	// Line 1330, Address: 0x36442c, Func Offset: 0xbc
	// Line 1337, Address: 0x364448, Func Offset: 0xd8
	// Line 1338, Address: 0x364464, Func Offset: 0xf4
	// Line 1341, Address: 0x364498, Func Offset: 0x128
	// Line 1342, Address: 0x36449c, Func Offset: 0x12c
	// Line 1348, Address: 0x3644a0, Func Offset: 0x130
	// Line 1349, Address: 0x3644b8, Func Offset: 0x148
	// Line 1351, Address: 0x3644d0, Func Offset: 0x160
	// Line 1352, Address: 0x3644d8, Func Offset: 0x168
	// Line 1354, Address: 0x3644e0, Func Offset: 0x170
	// Line 1355, Address: 0x364504, Func Offset: 0x194
	// Line 1359, Address: 0x364528, Func Offset: 0x1b8
	// Line 1362, Address: 0x364538, Func Offset: 0x1c8
	// Line 1363, Address: 0x364550, Func Offset: 0x1e0
	// Line 1364, Address: 0x364558, Func Offset: 0x1e8
	// Line 1365, Address: 0x364560, Func Offset: 0x1f0
	// Line 1367, Address: 0x364564, Func Offset: 0x1f4
	// Line 1371, Address: 0x364568, Func Offset: 0x1f8
	// Line 1372, Address: 0x364570, Func Offset: 0x200
	// Line 1374, Address: 0x364580, Func Offset: 0x210
	// Line 1376, Address: 0x364590, Func Offset: 0x220
	// Line 1378, Address: 0x3645a4, Func Offset: 0x234
	// Line 1379, Address: 0x3645ac, Func Offset: 0x23c
	// Line 1381, Address: 0x3645b4, Func Offset: 0x244
	// Line 1382, Address: 0x3645c8, Func Offset: 0x258
	// Line 1383, Address: 0x3645d0, Func Offset: 0x260
	// Line 1385, Address: 0x3645d8, Func Offset: 0x268
	// Line 1388, Address: 0x3645e0, Func Offset: 0x270
	// Line 1392, Address: 0x3645e8, Func Offset: 0x278
	// Line 1394, Address: 0x3645f8, Func Offset: 0x288
	// Line 1396, Address: 0x36460c, Func Offset: 0x29c
	// Line 1398, Address: 0x364614, Func Offset: 0x2a4
	// Line 1401, Address: 0x364620, Func Offset: 0x2b0
	// Line 1402, Address: 0x36462c, Func Offset: 0x2bc
	// Line 1403, Address: 0x364638, Func Offset: 0x2c8
	// Line 1404, Address: 0x364640, Func Offset: 0x2d0
	// Line 1405, Address: 0x364648, Func Offset: 0x2d8
	// Line 1408, Address: 0x364650, Func Offset: 0x2e0
	// Line 1412, Address: 0x36465c, Func Offset: 0x2ec
	// Line 1413, Address: 0x364664, Func Offset: 0x2f4
	// Line 1415, Address: 0x364674, Func Offset: 0x304
	// Line 1417, Address: 0x364688, Func Offset: 0x318
	// Line 1419, Address: 0x364690, Func Offset: 0x320
	// Line 1437, Address: 0x3646a8, Func Offset: 0x338
	// Line 1438, Address: 0x3646ac, Func Offset: 0x33c
	// Line 1439, Address: 0x3646bc, Func Offset: 0x34c
	// Line 1440, Address: 0x3646c0, Func Offset: 0x350
	// Line 1441, Address: 0x3646c8, Func Offset: 0x358
	// Line 1443, Address: 0x3646d8, Func Offset: 0x368
	// Line 1453, Address: 0x3646e4, Func Offset: 0x374
	// Line 1455, Address: 0x3646f8, Func Offset: 0x388
	// Line 1457, Address: 0x3646fc, Func Offset: 0x38c
	// Line 1460, Address: 0x364704, Func Offset: 0x394
	// Line 1462, Address: 0x364718, Func Offset: 0x3a8
	// Line 1465, Address: 0x36471c, Func Offset: 0x3ac
	// Line 1466, Address: 0x364724, Func Offset: 0x3b4
	// Line 1468, Address: 0x364730, Func Offset: 0x3c0
	// Line 1469, Address: 0x364740, Func Offset: 0x3d0
	// Line 1470, Address: 0x364754, Func Offset: 0x3e4
	// Line 1472, Address: 0x364758, Func Offset: 0x3e8
	// Line 1474, Address: 0x364760, Func Offset: 0x3f0
	// Line 1475, Address: 0x364774, Func Offset: 0x404
	// Line 1480, Address: 0x364778, Func Offset: 0x408
	// Line 1486, Address: 0x364780, Func Offset: 0x410
	// Line 1492, Address: 0x364784, Func Offset: 0x414
	// Line 1508, Address: 0x36479c, Func Offset: 0x42c
	// Line 1509, Address: 0x364814, Func Offset: 0x4a4
	// Line 1512, Address: 0x364818, Func Offset: 0x4a8
	// Line 1515, Address: 0x364824, Func Offset: 0x4b4
	// Line 1516, Address: 0x36482c, Func Offset: 0x4bc
	// Line 1517, Address: 0x364834, Func Offset: 0x4c4
	// Line 1518, Address: 0x36483c, Func Offset: 0x4cc
	// Line 1519, Address: 0x364844, Func Offset: 0x4d4
	// Line 1522, Address: 0x36484c, Func Offset: 0x4dc
	// Line 1529, Address: 0x364858, Func Offset: 0x4e8
	// Line 1531, Address: 0x364864, Func Offset: 0x4f4
	// Line 1533, Address: 0x364874, Func Offset: 0x504
	// Line 1534, Address: 0x364880, Func Offset: 0x510
	// Line 1535, Address: 0x364898, Func Offset: 0x528
	// Line 1537, Address: 0x3648a0, Func Offset: 0x530
	// Line 1550, Address: 0x3648b0, Func Offset: 0x540
	// Line 1552, Address: 0x3648b4, Func Offset: 0x544
	// Line 1553, Address: 0x3648c0, Func Offset: 0x550
	// Line 1555, Address: 0x3648cc, Func Offset: 0x55c
	// Line 1557, Address: 0x3648d4, Func Offset: 0x564
	// Line 1569, Address: 0x3648dc, Func Offset: 0x56c
	// Line 1570, Address: 0x3648e0, Func Offset: 0x570
	// Line 1572, Address: 0x3648ec, Func Offset: 0x57c
	// Line 1574, Address: 0x364904, Func Offset: 0x594
	// Line 1576, Address: 0x364914, Func Offset: 0x5a4
	// Line 1578, Address: 0x364934, Func Offset: 0x5c4
	// Line 1582, Address: 0x36493c, Func Offset: 0x5cc
	// Line 1584, Address: 0x36494c, Func Offset: 0x5dc
	// Line 1589, Address: 0x364990, Func Offset: 0x620
	// Line 1591, Address: 0x3649bc, Func Offset: 0x64c
	// Line 1592, Address: 0x3649c4, Func Offset: 0x654
	// Line 1593, Address: 0x3649c8, Func Offset: 0x658
	// Line 1594, Address: 0x3649d0, Func Offset: 0x660
	// Line 1596, Address: 0x3649e8, Func Offset: 0x678
	// Line 1597, Address: 0x3649f0, Func Offset: 0x680
	// Line 1601, Address: 0x364a20, Func Offset: 0x6b0
	// Line 1604, Address: 0x364a4c, Func Offset: 0x6dc
	// Line 1605, Address: 0x364a54, Func Offset: 0x6e4
	// Line 1606, Address: 0x364a58, Func Offset: 0x6e8
	// Line 1608, Address: 0x364a60, Func Offset: 0x6f0
	// Line 1616, Address: 0x364a78, Func Offset: 0x708
	// Line 1617, Address: 0x364a8c, Func Offset: 0x71c
	// Func End, Address: 0x364ab0, Func Offset: 0x740
}

// xAnimIdleFX__FPvP8tagXAnimi
// Start address: 0x364ab0
void xAnimIdleFX(void* actorVoid, tagXAnim* anim, int32 frame)
{
	Vector3D v2;
	Vector3D v1;
	tagMATRIX pm;
	tagMATRIX m;
	Vector3D* v2;
	Vector3D* v1;
	float32 dur;
	float32 right;
	float32 left;
	int32 scriptHandled;
	_iVFXResource* idx;
	int32 scriptHandled;
	_iSFXResource* idx;
	int32 matrixBuilt;
	int32 i;
	tagiAnimResource* r;
	iActorRuntime* ar;
	_xActor* actor;
	// Line 1011, Address: 0x364ab0, Func Offset: 0
	// Line 1018, Address: 0x364af0, Func Offset: 0x40
	// Line 1019, Address: 0x364b90, Func Offset: 0xe0
	// Line 1020, Address: 0x364c30, Func Offset: 0x180
	// Line 1023, Address: 0x364cd0, Func Offset: 0x220
	// Line 1025, Address: 0x364cd4, Func Offset: 0x224
	// Line 1026, Address: 0x364cd8, Func Offset: 0x228
	// Line 1030, Address: 0x364ce0, Func Offset: 0x230
	// Line 1037, Address: 0x364cec, Func Offset: 0x23c
	// Line 1042, Address: 0x364cf0, Func Offset: 0x240
	// Line 1044, Address: 0x364cfc, Func Offset: 0x24c
	// Line 1046, Address: 0x364d08, Func Offset: 0x258
	// Line 1050, Address: 0x364d14, Func Offset: 0x264
	// Line 1054, Address: 0x364d18, Func Offset: 0x268
	// Line 1056, Address: 0x364d24, Func Offset: 0x274
	// Line 1057, Address: 0x364d44, Func Offset: 0x294
	// Line 1062, Address: 0x364d48, Func Offset: 0x298
	// Line 1065, Address: 0x364d54, Func Offset: 0x2a4
	// Line 1082, Address: 0x364de8, Func Offset: 0x338
	// Line 1085, Address: 0x364df4, Func Offset: 0x344
	// Line 1090, Address: 0x364e3c, Func Offset: 0x38c
	// Line 1091, Address: 0x364e40, Func Offset: 0x390
	// Line 1096, Address: 0x364e58, Func Offset: 0x3a8
	// Line 1100, Address: 0x364e64, Func Offset: 0x3b4
	// Line 1105, Address: 0x364e68, Func Offset: 0x3b8
	// Line 1110, Address: 0x364e6c, Func Offset: 0x3bc
	// Line 1112, Address: 0x364e78, Func Offset: 0x3c8
	// Line 1114, Address: 0x364e84, Func Offset: 0x3d4
	// Line 1116, Address: 0x364e90, Func Offset: 0x3e0
	// Line 1120, Address: 0x364e94, Func Offset: 0x3e4
	// Line 1122, Address: 0x364ea0, Func Offset: 0x3f0
	// Line 1123, Address: 0x364ec0, Func Offset: 0x410
	// Line 1127, Address: 0x364ee0, Func Offset: 0x430
	// Line 1132, Address: 0x364ef0, Func Offset: 0x440
	// Line 1133, Address: 0x364ef4, Func Offset: 0x444
	// Line 1135, Address: 0x364ef8, Func Offset: 0x448
	// Line 1138, Address: 0x364f28, Func Offset: 0x478
	// Line 1142, Address: 0x364f60, Func Offset: 0x4b0
	// Line 1143, Address: 0x364f68, Func Offset: 0x4b8
	// Line 1145, Address: 0x364f6c, Func Offset: 0x4bc
	// Line 1146, Address: 0x364f74, Func Offset: 0x4c4
	// Line 1149, Address: 0x364fac, Func Offset: 0x4fc
	// Line 1150, Address: 0x364fb4, Func Offset: 0x504
	// Line 1152, Address: 0x364fb8, Func Offset: 0x508
	// Line 1155, Address: 0x364fc0, Func Offset: 0x510
	// Line 1156, Address: 0x364fc8, Func Offset: 0x518
	// Line 1159, Address: 0x364fd0, Func Offset: 0x520
	// Line 1173, Address: 0x365048, Func Offset: 0x598
	// Line 1180, Address: 0x365098, Func Offset: 0x5e8
	// Line 1197, Address: 0x3650f0, Func Offset: 0x640
	// Line 1204, Address: 0x3650fc, Func Offset: 0x64c
	// Line 1206, Address: 0x365104, Func Offset: 0x654
	// Line 1207, Address: 0x365114, Func Offset: 0x664
	// Line 1210, Address: 0x365118, Func Offset: 0x668
	// Line 1214, Address: 0x365148, Func Offset: 0x698
	// Line 1215, Address: 0x36515c, Func Offset: 0x6ac
	// Line 1219, Address: 0x365170, Func Offset: 0x6c0
	// Line 1221, Address: 0x365180, Func Offset: 0x6d0
	// Line 1222, Address: 0x365198, Func Offset: 0x6e8
	// Line 1228, Address: 0x3651a0, Func Offset: 0x6f0
	// Line 1231, Address: 0x3651bc, Func Offset: 0x70c
	// Line 1239, Address: 0x3651c0, Func Offset: 0x710
	// Line 1241, Address: 0x3651d0, Func Offset: 0x720
	// Line 1245, Address: 0x3651e0, Func Offset: 0x730
	// Line 1246, Address: 0x3651f4, Func Offset: 0x744
	// Line 1250, Address: 0x365208, Func Offset: 0x758
	// Line 1257, Address: 0x36521c, Func Offset: 0x76c
	// Line 1258, Address: 0x365220, Func Offset: 0x770
	// Line 1262, Address: 0x365238, Func Offset: 0x788
	// Func End, Address: 0x365274, Func Offset: 0x7c4
}

// xAnimDebug__Fi
// Start address: 0x365280
void xAnimDebug(int32 mode)
{
	int8 stateName[32];
	int8 jointMask[32];
	int32 j;
	int32 i;
	int8 name[256];
	tagiAnimResource* ar;
	tagXAnim* anim;
	tagXAnimControl* act;
	int8 buffer[32];
	// Line 864, Address: 0x365280, Func Offset: 0
	// Line 882, Address: 0x36529c, Func Offset: 0x1c
	// Line 883, Address: 0x3652a4, Func Offset: 0x24
	// Line 888, Address: 0x3652b0, Func Offset: 0x30
	// Line 890, Address: 0x3652bc, Func Offset: 0x3c
	// Line 891, Address: 0x3652c8, Func Offset: 0x48
	// Line 892, Address: 0x3652dc, Func Offset: 0x5c
	// Line 895, Address: 0x3652e4, Func Offset: 0x64
	// Line 897, Address: 0x3652f4, Func Offset: 0x74
	// Line 898, Address: 0x365300, Func Offset: 0x80
	// Line 899, Address: 0x365314, Func Offset: 0x94
	// Line 904, Address: 0x36531c, Func Offset: 0x9c
	// Line 910, Address: 0x365330, Func Offset: 0xb0
	// Line 915, Address: 0x365344, Func Offset: 0xc4
	// Line 919, Address: 0x365348, Func Offset: 0xc8
	// Line 920, Address: 0x36535c, Func Offset: 0xdc
	// Line 921, Address: 0x365390, Func Offset: 0x110
	// Line 923, Address: 0x365398, Func Offset: 0x118
	// Line 926, Address: 0x3653a4, Func Offset: 0x124
	// Line 928, Address: 0x3653ac, Func Offset: 0x12c
	// Line 931, Address: 0x3653d8, Func Offset: 0x158
	// Line 932, Address: 0x3653ec, Func Offset: 0x16c
	// Line 935, Address: 0x3653f4, Func Offset: 0x174
	// Line 936, Address: 0x365408, Func Offset: 0x188
	// Line 939, Address: 0x365410, Func Offset: 0x190
	// Line 940, Address: 0x36542c, Func Offset: 0x1ac
	// Line 943, Address: 0x365434, Func Offset: 0x1b4
	// Line 944, Address: 0x365450, Func Offset: 0x1d0
	// Line 947, Address: 0x365458, Func Offset: 0x1d8
	// Line 948, Address: 0x36547c, Func Offset: 0x1fc
	// Line 951, Address: 0x365484, Func Offset: 0x204
	// Line 952, Address: 0x3654a0, Func Offset: 0x220
	// Line 954, Address: 0x3654a8, Func Offset: 0x228
	// Line 955, Address: 0x3654c4, Func Offset: 0x244
	// Line 957, Address: 0x3654cc, Func Offset: 0x24c
	// Line 960, Address: 0x3654e0, Func Offset: 0x260
	// Line 962, Address: 0x3654ec, Func Offset: 0x26c
	// Line 964, Address: 0x365500, Func Offset: 0x280
	// Line 965, Address: 0x36550c, Func Offset: 0x28c
	// Line 968, Address: 0x365514, Func Offset: 0x294
	// Line 970, Address: 0x365520, Func Offset: 0x2a0
	// Line 971, Address: 0x365538, Func Offset: 0x2b8
	// Line 973, Address: 0x365540, Func Offset: 0x2c0
	// Line 975, Address: 0x3655b0, Func Offset: 0x330
	// Line 977, Address: 0x3655bc, Func Offset: 0x33c
	// Line 979, Address: 0x3655d0, Func Offset: 0x350
	// Line 981, Address: 0x3655dc, Func Offset: 0x35c
	// Line 988, Address: 0x3655f8, Func Offset: 0x378
	// Line 989, Address: 0x36560c, Func Offset: 0x38c
	// Func End, Address: 0x36562c, Func Offset: 0x3ac
}

// doBulletCheck__FP7_xActorP8Vector3DP8Vector3D
// Start address: 0x365630
void doBulletCheck(_xActor* actor)
{
	xMessage theMessage;
	_xActor* npc;
	int32 i;
	int32 fov;
	int32 bulletRange;
	// Line 809, Address: 0x365630, Func Offset: 0
	// Line 810, Address: 0x365650, Func Offset: 0x20
	// Line 811, Address: 0x365654, Func Offset: 0x24
	// Line 814, Address: 0x365658, Func Offset: 0x28
	// Line 816, Address: 0x3656f8, Func Offset: 0xc8
	// Line 819, Address: 0x365704, Func Offset: 0xd4
	// Line 821, Address: 0x365710, Func Offset: 0xe0
	// Line 822, Address: 0x365720, Func Offset: 0xf0
	// Line 824, Address: 0x365734, Func Offset: 0x104
	// Line 826, Address: 0x365740, Func Offset: 0x110
	// Line 828, Address: 0x365750, Func Offset: 0x120
	// Line 830, Address: 0x365774, Func Offset: 0x144
	// Line 836, Address: 0x36579c, Func Offset: 0x16c
	// Line 837, Address: 0x3657a4, Func Offset: 0x174
	// Line 838, Address: 0x3657ac, Func Offset: 0x17c
	// Line 839, Address: 0x3657b4, Func Offset: 0x184
	// Line 840, Address: 0x3657bc, Func Offset: 0x18c
	// Line 841, Address: 0x3657c4, Func Offset: 0x194
	// Line 843, Address: 0x3657cc, Func Offset: 0x19c
	// Line 850, Address: 0x3657d8, Func Offset: 0x1a8
	// Line 852, Address: 0x3657ec, Func Offset: 0x1bc
	// Func End, Address: 0x365810, Func Offset: 0x1e0
}

// xAnimActorSetNewPosition__FPv
// Start address: 0x365810
void xAnimActorSetNewPosition(void* actor)
{
	uint32 i;
	// Line 796, Address: 0x365810, Func Offset: 0
	// Line 797, Address: 0x36581c, Func Offset: 0xc
	// Line 798, Address: 0x365840, Func Offset: 0x30
	// Line 802, Address: 0x3658a4, Func Offset: 0x94
	// Line 803, Address: 0x3658a8, Func Offset: 0x98
	// Line 804, Address: 0x3658bc, Func Offset: 0xac
	// Func End, Address: 0x3658c4, Func Offset: 0xb4
}

// xAnimResetActor__FPv
// Start address: 0x3658d0
void xAnimResetActor(void* actor)
{
	int32 i;
	// Line 776, Address: 0x3658d0, Func Offset: 0
	// Line 777, Address: 0x3658dc, Func Offset: 0xc
	// Line 778, Address: 0x365900, Func Offset: 0x30
	// Line 779, Address: 0x36591c, Func Offset: 0x4c
	// Line 780, Address: 0x365938, Func Offset: 0x68
	// Line 781, Address: 0x365954, Func Offset: 0x84
	// Line 782, Address: 0x365958, Func Offset: 0x88
	// Line 783, Address: 0x36596c, Func Offset: 0x9c
	// Func End, Address: 0x365974, Func Offset: 0xa4
}

// xAnimDeleteActive__FP15tagXAnimControl
// Start address: 0x365980
void xAnimDeleteActive(tagXAnimControl* curr)
{
	_xActor* xa;
	xMessage theMessage;
	// Line 732, Address: 0x365980, Func Offset: 0
	// Line 740, Address: 0x365990, Func Offset: 0x10
	// Line 744, Address: 0x365994, Func Offset: 0x14
	// Line 746, Address: 0x3659a0, Func Offset: 0x20
	// Line 748, Address: 0x3659a4, Func Offset: 0x24
	// Line 749, Address: 0x3659ac, Func Offset: 0x2c
	// Line 750, Address: 0x3659b4, Func Offset: 0x34
	// Line 751, Address: 0x3659bc, Func Offset: 0x3c
	// Line 752, Address: 0x3659c4, Func Offset: 0x44
	// Line 755, Address: 0x3659cc, Func Offset: 0x4c
	// Line 758, Address: 0x3659d8, Func Offset: 0x58
	// Line 759, Address: 0x3659dc, Func Offset: 0x5c
	// Line 760, Address: 0x3659e0, Func Offset: 0x60
	// Func End, Address: 0x3659f4, Func Offset: 0x74
}

// xAnimChangeActive__FP15tagXAnimControli
// Start address: 0x365a00
void xAnimChangeActive(tagXAnimControl* curr, int32 state)
{
	// Line 721, Address: 0x365a00, Func Offset: 0
	// Line 722, Address: 0x365a04, Func Offset: 0x4
	// Func End, Address: 0x365a0c, Func Offset: 0xc
}

// xAnimChainActive__FP15tagXAnimControlP8tagXAnimPUciUiUi
// Start address: 0x365a10
tagXAnimControl* xAnimChainActive(tagXAnimControl* curr, tagXAnim* anim, uint8* activeJoints, int32 state, uint32 startEvent, uint32 endEvent)
{
	// Line 662, Address: 0x365a10, Func Offset: 0
	// Line 668, Address: 0x365a38, Func Offset: 0x28
	// Line 669, Address: 0x365a5c, Func Offset: 0x4c
	// Line 670, Address: 0x365a64, Func Offset: 0x54
	// Line 672, Address: 0x365a70, Func Offset: 0x60
	// Line 673, Address: 0x365a80, Func Offset: 0x70
	// Line 676, Address: 0x365a90, Func Offset: 0x80
	// Line 686, Address: 0x365a98, Func Offset: 0x88
	// Line 688, Address: 0x365acc, Func Offset: 0xbc
	// Line 690, Address: 0x365adc, Func Offset: 0xcc
	// Line 691, Address: 0x365af8, Func Offset: 0xe8
	// Line 692, Address: 0x365b00, Func Offset: 0xf0
	// Line 694, Address: 0x365b08, Func Offset: 0xf8
	// Line 697, Address: 0x365b10, Func Offset: 0x100
	// Line 699, Address: 0x365b18, Func Offset: 0x108
	// Line 701, Address: 0x365b20, Func Offset: 0x110
	// Line 704, Address: 0x365b28, Func Offset: 0x118
	// Line 705, Address: 0x365b30, Func Offset: 0x120
	// Line 706, Address: 0x365b34, Func Offset: 0x124
	// Func End, Address: 0x365b50, Func Offset: 0x140
}

// xAnimReplaceActive__FP15tagXAnimControlP8tagXAnimPUciUiUi
// Start address: 0x365b50
void xAnimReplaceActive(tagXAnimControl* curr, tagXAnim* anim, uint8* activeJoints, int32 state, uint32 enterEvent, uint32 exitEvent)
{
	xMessage theMessage;
	xMessage theMessage;
	_xActor* xa;
	// Line 489, Address: 0x365b50, Func Offset: 0
	// Line 498, Address: 0x365b8c, Func Offset: 0x3c
	// Line 502, Address: 0x365b90, Func Offset: 0x40
	// Line 504, Address: 0x365b9c, Func Offset: 0x4c
	// Line 505, Address: 0x365ba4, Func Offset: 0x54
	// Line 506, Address: 0x365bac, Func Offset: 0x5c
	// Line 507, Address: 0x365bb4, Func Offset: 0x64
	// Line 508, Address: 0x365bbc, Func Offset: 0x6c
	// Line 510, Address: 0x365bc4, Func Offset: 0x74
	// Line 516, Address: 0x365bd0, Func Offset: 0x80
	// Line 520, Address: 0x365bd4, Func Offset: 0x84
	// Line 521, Address: 0x365bd8, Func Offset: 0x88
	// Line 522, Address: 0x365bdc, Func Offset: 0x8c
	// Line 524, Address: 0x365be4, Func Offset: 0x94
	// Line 526, Address: 0x365be8, Func Offset: 0x98
	// Line 528, Address: 0x365bf4, Func Offset: 0xa4
	// Line 529, Address: 0x365c00, Func Offset: 0xb0
	// Line 532, Address: 0x365c08, Func Offset: 0xb8
	// Line 535, Address: 0x365c14, Func Offset: 0xc4
	// Line 537, Address: 0x365c1c, Func Offset: 0xcc
	// Line 538, Address: 0x365c24, Func Offset: 0xd4
	// Line 540, Address: 0x365c28, Func Offset: 0xd8
	// Line 541, Address: 0x365c2c, Func Offset: 0xdc
	// Line 542, Address: 0x365c30, Func Offset: 0xe0
	// Line 543, Address: 0x365c44, Func Offset: 0xf4
	// Line 547, Address: 0x365c4c, Func Offset: 0xfc
	// Line 554, Address: 0x365c68, Func Offset: 0x118
	// Line 557, Address: 0x365c74, Func Offset: 0x124
	// Line 558, Address: 0x365c7c, Func Offset: 0x12c
	// Line 559, Address: 0x365c84, Func Offset: 0x134
	// Line 560, Address: 0x365c8c, Func Offset: 0x13c
	// Line 561, Address: 0x365c94, Func Offset: 0x144
	// Line 563, Address: 0x365c9c, Func Offset: 0x14c
	// Line 565, Address: 0x365ca8, Func Offset: 0x158
	// Func End, Address: 0x365cd4, Func Offset: 0x184
}

// xAnimAddActive__FP8tagXAnimPUciPviUiUi
// Start address: 0x365ce0
tagXAnimControl* xAnimAddActive(tagXAnim* anim, uint8* activeJoints, int32 state, void* c, int32 push, uint32 startEvent, uint32 endEvent)
{
	xMessage theMessage;
	_xActor* xa;
	tagXAnimControl* act;
	int32 lastFound;
	int32 j;
	int32 i;
	// Line 357, Address: 0x365ce0, Func Offset: 0
	// Line 366, Address: 0x365d1c, Func Offset: 0x3c
	// Line 367, Address: 0x365d24, Func Offset: 0x44
	// Line 375, Address: 0x365d30, Func Offset: 0x50
	// Line 386, Address: 0x365d38, Func Offset: 0x58
	// Line 387, Address: 0x365d40, Func Offset: 0x60
	// Line 388, Address: 0x365d44, Func Offset: 0x64
	// Line 389, Address: 0x365d5c, Func Offset: 0x7c
	// Line 390, Address: 0x365d68, Func Offset: 0x88
	// Line 391, Address: 0x365d80, Func Offset: 0xa0
	// Line 392, Address: 0x365d84, Func Offset: 0xa4
	// Line 393, Address: 0x365d88, Func Offset: 0xa8
	// Line 394, Address: 0x365d9c, Func Offset: 0xbc
	// Line 395, Address: 0x365da4, Func Offset: 0xc4
	// Line 402, Address: 0x365da8, Func Offset: 0xc8
	// Line 403, Address: 0x365dc0, Func Offset: 0xe0
	// Line 405, Address: 0x365dc8, Func Offset: 0xe8
	// Line 407, Address: 0x365de0, Func Offset: 0x100
	// Line 409, Address: 0x365df8, Func Offset: 0x118
	// Line 420, Address: 0x365e9c, Func Offset: 0x1bc
	// Line 422, Address: 0x365ea4, Func Offset: 0x1c4
	// Line 423, Address: 0x365ea8, Func Offset: 0x1c8
	// Line 424, Address: 0x365eac, Func Offset: 0x1cc
	// Line 425, Address: 0x365eb0, Func Offset: 0x1d0
	// Line 426, Address: 0x365eb4, Func Offset: 0x1d4
	// Line 428, Address: 0x365eb8, Func Offset: 0x1d8
	// Line 430, Address: 0x365ec4, Func Offset: 0x1e4
	// Line 431, Address: 0x365ed0, Func Offset: 0x1f0
	// Line 434, Address: 0x365ed8, Func Offset: 0x1f8
	// Line 437, Address: 0x365ee4, Func Offset: 0x204
	// Line 438, Address: 0x365eec, Func Offset: 0x20c
	// Line 439, Address: 0x365ef4, Func Offset: 0x214
	// Line 440, Address: 0x365ef8, Func Offset: 0x218
	// Line 442, Address: 0x365f00, Func Offset: 0x220
	// Line 443, Address: 0x365f04, Func Offset: 0x224
	// Line 444, Address: 0x365f08, Func Offset: 0x228
	// Line 448, Address: 0x365f1c, Func Offset: 0x23c
	// Line 461, Address: 0x365f20, Func Offset: 0x240
	// Line 464, Address: 0x365f2c, Func Offset: 0x24c
	// Line 465, Address: 0x365f34, Func Offset: 0x254
	// Line 466, Address: 0x365f3c, Func Offset: 0x25c
	// Line 467, Address: 0x365f44, Func Offset: 0x264
	// Line 468, Address: 0x365f4c, Func Offset: 0x26c
	// Line 470, Address: 0x365f54, Func Offset: 0x274
	// Line 475, Address: 0x365f60, Func Offset: 0x280
	// Line 476, Address: 0x365f64, Func Offset: 0x284
	// Func End, Address: 0x365f90, Func Offset: 0x2b0
}

// xAnimFind__FUi
// Start address: 0x365f90
tagXAnim* xAnimFind(uint32 assetID)
{
	int32 checkIdOnly;
	int32 idOnly;
	int32 p;
	int32 i;
	int32 count;
	tagXAnim* a;
	tagXAnim* list;
	int32 assetType;
	// Line 232, Address: 0x365f90, Func Offset: 0
	// Line 240, Address: 0x365f94, Func Offset: 0x4
	// Line 241, Address: 0x365f9c, Func Offset: 0xc
	// Line 243, Address: 0x365fa8, Func Offset: 0x18
	// Line 245, Address: 0x365fb0, Func Offset: 0x20
	// Line 247, Address: 0x365fb8, Func Offset: 0x28
	// Line 249, Address: 0x365fc4, Func Offset: 0x34
	// Line 252, Address: 0x36602c, Func Offset: 0x9c
	// Line 254, Address: 0x366040, Func Offset: 0xb0
	// Line 255, Address: 0x36605c, Func Offset: 0xcc
	// Line 256, Address: 0x366078, Func Offset: 0xe8
	// Line 261, Address: 0x366080, Func Offset: 0xf0
	// Line 263, Address: 0x366094, Func Offset: 0x104
	// Line 264, Address: 0x3660b0, Func Offset: 0x120
	// Line 265, Address: 0x3660cc, Func Offset: 0x13c
	// Line 270, Address: 0x3660d4, Func Offset: 0x144
	// Line 272, Address: 0x3660ec, Func Offset: 0x15c
	// Line 273, Address: 0x366108, Func Offset: 0x178
	// Line 274, Address: 0x366124, Func Offset: 0x194
	// Line 279, Address: 0x36612c, Func Offset: 0x19c
	// Line 281, Address: 0x366144, Func Offset: 0x1b4
	// Line 282, Address: 0x366160, Func Offset: 0x1d0
	// Line 283, Address: 0x36617c, Func Offset: 0x1ec
	// Line 288, Address: 0x366184, Func Offset: 0x1f4
	// Line 290, Address: 0x36619c, Func Offset: 0x20c
	// Line 291, Address: 0x3661b8, Func Offset: 0x228
	// Line 292, Address: 0x3661d4, Func Offset: 0x244
	// Line 297, Address: 0x3661dc, Func Offset: 0x24c
	// Line 299, Address: 0x3661f4, Func Offset: 0x264
	// Line 300, Address: 0x366210, Func Offset: 0x280
	// Line 301, Address: 0x36622c, Func Offset: 0x29c
	// Line 305, Address: 0x366234, Func Offset: 0x2a4
	// Line 307, Address: 0x36624c, Func Offset: 0x2bc
	// Line 308, Address: 0x366268, Func Offset: 0x2d8
	// Line 309, Address: 0x366284, Func Offset: 0x2f4
	// Line 314, Address: 0x36628c, Func Offset: 0x2fc
	// Line 316, Address: 0x3662a4, Func Offset: 0x314
	// Line 317, Address: 0x3662c0, Func Offset: 0x330
	// Line 318, Address: 0x3662dc, Func Offset: 0x34c
	// Line 322, Address: 0x3662e4, Func Offset: 0x354
	// Line 334, Address: 0x3662e8, Func Offset: 0x358
	// Line 336, Address: 0x3662f8, Func Offset: 0x368
	// Line 338, Address: 0x366308, Func Offset: 0x378
	// Line 340, Address: 0x366310, Func Offset: 0x380
	// Line 342, Address: 0x366318, Func Offset: 0x388
	// Line 343, Address: 0x36632c, Func Offset: 0x39c
	// Line 347, Address: 0x36633c, Func Offset: 0x3ac
	// Line 348, Address: 0x366340, Func Offset: 0x3b0
	// Func End, Address: 0x366348, Func Offset: 0x3b8
}

// xAnimLevelReset__Fv
// Start address: 0x366350
void xAnimLevelReset()
{
	_xActor* xa;
	int32 i;
	// Line 186, Address: 0x366350, Func Offset: 0
	// Line 192, Address: 0x36635c, Func Offset: 0xc
	// Line 193, Address: 0x366378, Func Offset: 0x28
	// Line 198, Address: 0x366390, Func Offset: 0x40
	// Line 199, Address: 0x3663ac, Func Offset: 0x5c
	// Line 200, Address: 0x3663cc, Func Offset: 0x7c
	// Line 201, Address: 0x3663e8, Func Offset: 0x98
	// Line 202, Address: 0x366404, Func Offset: 0xb4
	// Line 203, Address: 0x366420, Func Offset: 0xd0
	// Line 204, Address: 0x36643c, Func Offset: 0xec
	// Line 205, Address: 0x366458, Func Offset: 0x108
	// Line 207, Address: 0x36646c, Func Offset: 0x11c
	// Line 209, Address: 0x366478, Func Offset: 0x128
	// Line 210, Address: 0x366494, Func Offset: 0x144
	// Line 211, Address: 0x3664b0, Func Offset: 0x160
	// Line 212, Address: 0x3664c4, Func Offset: 0x174
	// Line 214, Address: 0x3664c8, Func Offset: 0x178
	// Line 216, Address: 0x3664d4, Func Offset: 0x184
	// Line 217, Address: 0x3664f0, Func Offset: 0x1a0
	// Line 218, Address: 0x36650c, Func Offset: 0x1bc
	// Line 219, Address: 0x36651c, Func Offset: 0x1cc
	// Line 220, Address: 0x366520, Func Offset: 0x1d0
	// Func End, Address: 0x366528, Func Offset: 0x1d8
}

// xAnimReInitializeInterpreter__Fv
// Start address: 0x366530
void xAnimReInitializeInterpreter()
{
	// Line 169, Address: 0x366530, Func Offset: 0
	// Line 170, Address: 0x366534, Func Offset: 0x4
	// Line 171, Address: 0x366538, Func Offset: 0x8
	// Line 172, Address: 0x36653c, Func Offset: 0xc
	// Func End, Address: 0x366544, Func Offset: 0x14
}

// xAnimInit__Fv
// Start address: 0x366550
void xAnimInit()
{
	int32 i;
	// Line 116, Address: 0x366550, Func Offset: 0
	// Line 118, Address: 0x36655c, Func Offset: 0xc
	// Line 119, Address: 0x366578, Func Offset: 0x28
	// Line 120, Address: 0x366598, Func Offset: 0x48
	// Line 121, Address: 0x3665b4, Func Offset: 0x64
	// Line 122, Address: 0x3665d0, Func Offset: 0x80
	// Line 123, Address: 0x3665ec, Func Offset: 0x9c
	// Line 124, Address: 0x366608, Func Offset: 0xb8
	// Line 125, Address: 0x366624, Func Offset: 0xd4
	// Line 126, Address: 0x366640, Func Offset: 0xf0
	// Line 127, Address: 0x36665c, Func Offset: 0x10c
	// Line 129, Address: 0x36666c, Func Offset: 0x11c
	// Line 131, Address: 0x366678, Func Offset: 0x128
	// Line 132, Address: 0x366694, Func Offset: 0x144
	// Line 133, Address: 0x3666b0, Func Offset: 0x160
	// Line 134, Address: 0x3666c0, Func Offset: 0x170
	// Line 136, Address: 0x3666c4, Func Offset: 0x174
	// Line 138, Address: 0x3666d0, Func Offset: 0x180
	// Line 139, Address: 0x3666ec, Func Offset: 0x19c
	// Line 140, Address: 0x366708, Func Offset: 0x1b8
	// Line 141, Address: 0x36671c, Func Offset: 0x1cc
	// Line 143, Address: 0x366720, Func Offset: 0x1d0
	// Line 145, Address: 0x36672c, Func Offset: 0x1dc
	// Line 146, Address: 0x366748, Func Offset: 0x1f8
	// Line 147, Address: 0x366764, Func Offset: 0x214
	// Line 149, Address: 0x366774, Func Offset: 0x224
	// Line 151, Address: 0x366778, Func Offset: 0x228
	// Line 153, Address: 0x366784, Func Offset: 0x234
	// Line 154, Address: 0x3667a0, Func Offset: 0x250
	// Line 155, Address: 0x3667bc, Func Offset: 0x26c
	// Line 156, Address: 0x3667cc, Func Offset: 0x27c
	// Line 157, Address: 0x3667d0, Func Offset: 0x280
	// Func End, Address: 0x3667d8, Func Offset: 0x288
}

