typedef struct MessageRedo;
typedef struct xMessage;
typedef struct tagxState;
typedef struct _FCinfo;
typedef struct xNavLink;
typedef struct _xActor;
typedef struct tagXAnimControl;
typedef struct _p2Geom;
typedef struct xNavPoint;
typedef struct MessageRegistration;
typedef struct tagP2Mesh;
typedef struct tagXStreamMDSDirectory;
typedef struct tagiAnimFrame;
typedef struct _RpClump;
typedef struct tagxPadAction;
typedef struct tagP2VERTEX;
typedef struct tagXAnim;
typedef struct tagiAnimResource;
typedef struct tagP2MeshVertex;
typedef struct tagiAnimRuntime;
typedef struct tagP2Weight;
typedef struct tagxStateLink;
typedef struct XStreamHeader;
typedef struct tagxActorDBData;
typedef struct Vector3D;
typedef struct _RwObject;
typedef struct tagXAnimTrigger;
typedef struct tagxStateThread;
typedef struct Vector4D;
typedef struct tagiMesh;
typedef struct tagXStreamDirectoryEntry;
typedef struct iActorRuntime;
typedef struct _RwLLLink;
typedef struct tagxStateMgr;
typedef struct _iVFXResource;
typedef struct tagxPhysicsObject;
typedef struct _iSFXResource;
typedef struct _iRenderEffects;
typedef struct _RwLinkList;

typedef void(*type_9)(xMessage*);
typedef void(*type_14)(uint32, uint32, int32, int32, int32, int32, int32);
typedef void(*type_29)(int32, int32, uint32, int32, int32, uint32, uint32, uint32);
typedef _RpClump*(*type_32)(_RpClump*, void*);
typedef void(*type_47)(_xActor*, int32, tagXAnim*, tagXAnimTrigger*);

typedef _xActor type_0[4];
typedef uint8 type_1[4];
typedef _xActor type_2[1];
typedef uint8 type_3[3];
typedef _xActor type_4[4];
typedef uint16 type_5[3];
typedef _xActor type_6[4];
typedef _xActor type_7[2];
typedef _xActor type_8[1];
typedef _xActor type_10[1];
typedef uint8 type_11[4];
typedef _xActor type_12[1];
typedef tagXStreamDirectoryEntry type_13[1000];
typedef _xActor type_15[4];
typedef Vector3D type_16[5];
typedef _xActor type_17[4];
typedef _xActor type_18[1];
typedef xMessage type_19[75];
typedef _xActor type_20[1];
typedef _xActor* type_21[40];
typedef xMessage type_22[50];
typedef int8 type_23[40];
typedef _xActor* type_24[13];
typedef _xActor type_25[1];
typedef _xActor type_26[4];
typedef MessageRedo type_27[10];
typedef _xActor type_28[4];
typedef _xActor type_30[1];
typedef _xActor type_31[4];
typedef _xActor type_33[4];
typedef _xActor type_34[4];
typedef int8 type_35[2048];
typedef MessageRegistration type_36[75];
typedef _xActor type_37[4];
typedef _xActor type_38[1];
typedef tagxState* type_39[10];
typedef _xActor type_40[4];
typedef _xActor type_41[4];
typedef _xActor type_42[4];
typedef _xActor type_43[1];
typedef _xActor type_44[1];
typedef _xActor type_45[1];
typedef _xActor type_46[1];
typedef _xActor type_48[1];
typedef _xActor type_49[1];
typedef uint8 type_50[3];
typedef _xActor type_51[1];
typedef int8 type_52[128];
typedef _xActor type_53[1];
typedef uint8 type_54[4];
typedef _xActor type_55[4];
typedef uint8 type_56[4];
typedef _xActor type_57[4];
typedef uint8 type_58[4];
typedef _xActor type_59[4];
typedef int32 type_60[7];
typedef _xActor type_61[1];
typedef tagxStateThread type_62[7];
typedef _xActor type_63[1];
typedef _xActor type_64[1];

struct MessageRedo
{
	xMessage theMessage;
	uint32 targetType;
	uint32 targetId;
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

struct MessageRegistration
{
	void(*myHandler)(xMessage*);
	uint32 myType;
	uint8 myIdList[4];
	int32 senderType;
	int32 senderId;
	int32 message;
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

struct tagXStreamMDSDirectory
{
	uint32 count;
	tagXStreamDirectoryEntry directory[1000];
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

struct Vector3D
{
	float32 x;
	float32 y;
	float32 z;
};

struct _RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
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

struct tagiMesh
{
};

struct tagXStreamDirectoryEntry
{
	uint32 id;
	uint32 type;
	uint32 offset;
	uint32 length;
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

struct _RwLLLink
{
	_RwLLLink* next;
	_RwLLLink* prev;
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

struct _RwLinkList
{
	_RwLLLink link;
};

MessageRegistration registrationList[75];
uint32 registrationCount;
xMessage waitingList[50];
uint32 waitingCount;
uint32 maxWaitingCount;
MessageRedo redoList[10];
uint32 redoCount;
uint32 maxRedoCount;
int32 gMessageTrafficCount;
int32 debugMessagesSentCount;
xMessage debugMessagesSent[75];
uint32 interpreterMethod;
tagxActorDBData* gadb;
int8 vAssertBuf2[128];
XStreamHeader currentHeader;
void(*xMessageRegisterInterestFromScripts)(uint32, uint32, int32, int32, int32, int32, int32);
void(*xMessageDistributeMessageFromScripts)(int32, int32, uint32, int32, int32, uint32, uint32, uint32);

void xMessageDebug();
void xMessagePrivateProcessMessage(xMessage* cMessage);
void xMessageProcessAllWaiting();
void xMessageAddRedoMessage(xMessage* theMessage, uint32 type, uint32 id);
void xMessageDistributeMessageFromScripts(int32 st, int32 si, uint32 m, int32 rt, int32 ri, uint32 d1, uint32 d2, uint32 d3);
void xMessageDistributeMessage(xMessage* theMessage);
void xMessageRegisterInterestFromScripts(uint32 myType, uint32 myId, int32 sType, int32 sId, int32 mess);
void xMessageReInitializeInterpreter();
void xMessageSoftInit();
void xMessageInit();

// xMessageDebug__Fi
// Start address: 0x356840
void xMessageDebug()
{
	// Line 550, Address: 0x356840, Func Offset: 0
	// Func End, Address: 0x356848, Func Offset: 0x8
}

// xMessagePrivateProcessMessage__FP8xMessage
// Start address: 0x356850
void xMessagePrivateProcessMessage(xMessage* cMessage)
{
	uint32 i;
	int32 status;
	MessageRegistration* cRegistration;
	uint32 j;
	// Line 432, Address: 0x356850, Func Offset: 0
	// Line 439, Address: 0x356870, Func Offset: 0x20
	// Line 440, Address: 0x356878, Func Offset: 0x28
	// Line 442, Address: 0x356884, Func Offset: 0x34
	// Line 448, Address: 0x356908, Func Offset: 0xb8
	// Line 449, Address: 0x356918, Func Offset: 0xc8
	// Line 450, Address: 0x356924, Func Offset: 0xd4
	// Line 452, Address: 0x356934, Func Offset: 0xe4
	// Line 456, Address: 0x356938, Func Offset: 0xe8
	// Line 459, Address: 0x356948, Func Offset: 0xf8
	// Line 460, Address: 0x356954, Func Offset: 0x104
	// Line 461, Address: 0x356964, Func Offset: 0x114
	// Line 462, Address: 0x356ae8, Func Offset: 0x298
	// Line 463, Address: 0x356af0, Func Offset: 0x2a0
	// Line 465, Address: 0x356b04, Func Offset: 0x2b4
	// Line 466, Address: 0x356b08, Func Offset: 0x2b8
	// Line 468, Address: 0x356b1c, Func Offset: 0x2cc
	// Line 469, Address: 0x356b20, Func Offset: 0x2d0
	// Line 470, Address: 0x356b38, Func Offset: 0x2e8
	// Func End, Address: 0x356b5c, Func Offset: 0x30c
}

// xMessageProcessAllWaiting__Fv
// Start address: 0x356b60
void xMessageProcessAllWaiting()
{
	uint32 stillWaiting;
	MessageRedo* rMessage;
	xMessage* cMessage;
	uint32 i;
	// Line 393, Address: 0x356b60, Func Offset: 0
	// Line 401, Address: 0x356b7c, Func Offset: 0x1c
	// Line 402, Address: 0x356b84, Func Offset: 0x24
	// Line 403, Address: 0x356b88, Func Offset: 0x28
	// Line 404, Address: 0x356b94, Func Offset: 0x34
	// Line 405, Address: 0x356d28, Func Offset: 0x1c8
	// Line 406, Address: 0x356d30, Func Offset: 0x1d0
	// Line 408, Address: 0x356db0, Func Offset: 0x250
	// Line 409, Address: 0x356db4, Func Offset: 0x254
	// Line 410, Address: 0x356db8, Func Offset: 0x258
	// Line 411, Address: 0x356dd0, Func Offset: 0x270
	// Line 417, Address: 0x356dd4, Func Offset: 0x274
	// Line 418, Address: 0x356ddc, Func Offset: 0x27c
	// Line 419, Address: 0x356de0, Func Offset: 0x280
	// Line 423, Address: 0x356dec, Func Offset: 0x28c
	// Line 424, Address: 0x356df8, Func Offset: 0x298
	// Line 428, Address: 0x356e10, Func Offset: 0x2b0
	// Line 429, Address: 0x356e14, Func Offset: 0x2b4
	// Func End, Address: 0x356e38, Func Offset: 0x2d8
}

// xMessageAddRedoMessage__FPC8xMessageUiUi
// Start address: 0x356e40
void xMessageAddRedoMessage(xMessage* theMessage, uint32 type, uint32 id)
{
	int32 i;
	// Line 351, Address: 0x356e40, Func Offset: 0
	// Line 353, Address: 0x356e60, Func Offset: 0x20
	// Line 354, Address: 0x356e6c, Func Offset: 0x2c
	// Line 364, Address: 0x356fb4, Func Offset: 0x174
	// Line 368, Address: 0x356fc8, Func Offset: 0x188
	// Line 370, Address: 0x356fd8, Func Offset: 0x198
	// Line 372, Address: 0x356fe8, Func Offset: 0x1a8
	// Line 377, Address: 0x356fec, Func Offset: 0x1ac
	// Line 378, Address: 0x357020, Func Offset: 0x1e0
	// Line 379, Address: 0x357048, Func Offset: 0x208
	// Line 383, Address: 0x357070, Func Offset: 0x230
	// Line 385, Address: 0x35707c, Func Offset: 0x23c
	// Line 386, Address: 0x357090, Func Offset: 0x250
	// Line 389, Address: 0x357098, Func Offset: 0x258
	// Func End, Address: 0x3570b4, Func Offset: 0x274
}

// xMessageDistributeMessageFromScripts__FiiUiiiUiUiUi
// Start address: 0x3570c0
void xMessageDistributeMessageFromScripts(int32 st, int32 si, uint32 m, int32 rt, int32 ri, uint32 d1, uint32 d2, uint32 d3)
{
	int32 i;
	xMessage aMessage;
	// Line 292, Address: 0x3570c0, Func Offset: 0
	// Line 298, Address: 0x3570cc, Func Offset: 0xc
	// Line 299, Address: 0x3570d8, Func Offset: 0x18
	// Line 307, Address: 0x3571b4, Func Offset: 0xf4
	// Line 311, Address: 0x3571c8, Func Offset: 0x108
	// Line 312, Address: 0x3571cc, Func Offset: 0x10c
	// Line 313, Address: 0x3571d0, Func Offset: 0x110
	// Line 314, Address: 0x3571d4, Func Offset: 0x114
	// Line 316, Address: 0x3571d8, Func Offset: 0x118
	// Line 317, Address: 0x3571dc, Func Offset: 0x11c
	// Line 318, Address: 0x3571e0, Func Offset: 0x120
	// Line 319, Address: 0x3571e4, Func Offset: 0x124
	// Line 323, Address: 0x3571e8, Func Offset: 0x128
	// Line 325, Address: 0x3571f8, Func Offset: 0x138
	// Line 326, Address: 0x357208, Func Offset: 0x148
	// Line 328, Address: 0x357310, Func Offset: 0x250
	// Line 333, Address: 0x357314, Func Offset: 0x254
	// Line 338, Address: 0x357348, Func Offset: 0x288
	// Line 342, Address: 0x357374, Func Offset: 0x2b4
	// Line 344, Address: 0x357380, Func Offset: 0x2c0
	// Line 345, Address: 0x357394, Func Offset: 0x2d4
	// Line 348, Address: 0x35739c, Func Offset: 0x2dc
	// Func End, Address: 0x3573b0, Func Offset: 0x2f0
}

// xMessageDistributeMessage__FPC8xMessage
// Start address: 0x3573b0
void xMessageDistributeMessage(xMessage* theMessage)
{
	int32 i;
	// Line 229, Address: 0x3573b0, Func Offset: 0
	// Line 233, Address: 0x3573c4, Func Offset: 0x14
	// Line 234, Address: 0x3573d0, Func Offset: 0x20
	// Line 242, Address: 0x3574c0, Func Offset: 0x110
	// Line 246, Address: 0x3574d0, Func Offset: 0x120
	// Line 248, Address: 0x3574e0, Func Offset: 0x130
	// Line 249, Address: 0x3574f0, Func Offset: 0x140
	// Line 251, Address: 0x3575f8, Func Offset: 0x248
	// Line 256, Address: 0x3575fc, Func Offset: 0x24c
	// Line 261, Address: 0x357630, Func Offset: 0x280
	// Line 265, Address: 0x35765c, Func Offset: 0x2ac
	// Line 267, Address: 0x357668, Func Offset: 0x2b8
	// Line 268, Address: 0x35767c, Func Offset: 0x2cc
	// Line 271, Address: 0x357684, Func Offset: 0x2d4
	// Func End, Address: 0x35769c, Func Offset: 0x2ec
}

// xMessageRegisterInterestFromScripts__FUiUiiiiii
// Start address: 0x3576a0
void xMessageRegisterInterestFromScripts(uint32 myType, uint32 myId, int32 sType, int32 sId, int32 mess)
{
	uint32 i;
	// Line 161, Address: 0x3576a0, Func Offset: 0
	// Line 168, Address: 0x3576d0, Func Offset: 0x30
	// Line 169, Address: 0x357778, Func Offset: 0xd8
	// Line 174, Address: 0x35781c, Func Offset: 0x17c
	// Line 175, Address: 0x357828, Func Offset: 0x188
	// Line 183, Address: 0x3578dc, Func Offset: 0x23c
	// Line 187, Address: 0x357900, Func Offset: 0x260
	// Line 189, Address: 0x357908, Func Offset: 0x268
	// Line 193, Address: 0x357920, Func Offset: 0x280
	// Line 194, Address: 0x357940, Func Offset: 0x2a0
	// Line 195, Address: 0x357960, Func Offset: 0x2c0
	// Line 196, Address: 0x357990, Func Offset: 0x2f0
	// Line 197, Address: 0x3579b8, Func Offset: 0x318
	// Line 198, Address: 0x3579d8, Func Offset: 0x338
	// Line 199, Address: 0x3579f8, Func Offset: 0x358
	// Line 203, Address: 0x357a18, Func Offset: 0x378
	// Line 204, Address: 0x357a24, Func Offset: 0x384
	// Func End, Address: 0x357a48, Func Offset: 0x3a8
}

// xMessageReInitializeInterpreter__Fv
// Start address: 0x357a50
void xMessageReInitializeInterpreter()
{
	// Line 121, Address: 0x357a50, Func Offset: 0
	// Line 122, Address: 0x357a54, Func Offset: 0x4
	// Func End, Address: 0x357a5c, Func Offset: 0xc
}

// xMessageSoftInit__Fv
// Start address: 0x357a60
void xMessageSoftInit()
{
	// Line 103, Address: 0x357a60, Func Offset: 0
	// Line 104, Address: 0x357a64, Func Offset: 0x4
	// Line 105, Address: 0x357a68, Func Offset: 0x8
	// Func End, Address: 0x357a70, Func Offset: 0x10
}

// xMessageInit__Fv
// Start address: 0x357a70
void xMessageInit()
{
	// Line 92, Address: 0x357a70, Func Offset: 0
	// Line 93, Address: 0x357a78, Func Offset: 0x8
	// Line 94, Address: 0x357a94, Func Offset: 0x24
	// Line 96, Address: 0x357ab0, Func Offset: 0x40
	// Line 97, Address: 0x357ab4, Func Offset: 0x44
	// Line 98, Address: 0x357ab8, Func Offset: 0x48
	// Line 99, Address: 0x357abc, Func Offset: 0x4c
	// Func End, Address: 0x357acc, Func Offset: 0x5c
}

