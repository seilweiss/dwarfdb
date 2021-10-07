typedef struct tagP2MeshVertex;
typedef struct _iVFXResource;
typedef struct tagxPhysicsObject;
typedef struct _xActor;
typedef struct _xTex;
typedef struct xNavLink;
typedef struct tagiAnimFrame;
typedef struct _RwObject;
typedef struct Vector4D;
typedef struct tagXAnim;
typedef struct _iSFXResource;
typedef struct tagXAnimTrigger;
typedef struct _iTexResource;
typedef struct _iRenderEffects;
typedef struct tagxStateMgr;
typedef struct tagxPadAction;
typedef struct tagXAnimControl;
typedef struct tagP2Weight;
typedef struct iActorRuntime;
typedef struct tagiAnimRuntime;
typedef struct tagxStateLink;
typedef struct tagxState;
typedef struct xNavPoint;
typedef struct _iTexRuntime;
typedef struct _RwLLLink;
typedef struct _xObj;
typedef struct _FCinfo;
typedef struct _p2Geom;
typedef struct tagXStreamMDSDirectory;
typedef struct tagP2Mesh;
typedef struct _RpClump;
typedef struct _RwLinkList;
typedef struct iObjRuntime;
typedef struct tagP2VERTEX;
typedef struct XStreamHeader;
typedef struct tagiAnimResource;
typedef struct Vector3D;
typedef struct tagXStreamDirectoryEntry;
typedef struct tagxStateThread;
typedef struct tagiMesh;
typedef struct _PVRheader;

typedef void(*type_3)(_xActor*, int32, tagXAnim*, tagXAnimTrigger*);
typedef _RpClump*(*type_17)(_RpClump*, void*);

typedef tagxState* type_0[10];
typedef _xTex* type_1[200];
typedef int8 type_2[128];
typedef uint32 type_4[3];
typedef uint8 type_5[3];
typedef uint8 type_6[4];
typedef uint8 type_7[4];
typedef uint8 type_8[4];
typedef int32 type_9[7];
typedef tagxStateThread type_10[7];
typedef uint8 type_11[4];
typedef uint16 type_12[3];
typedef uint8 type_13[3];
typedef tagXStreamDirectoryEntry type_14[1000];
typedef Vector3D type_15[5];
typedef int8 type_16[2048];

struct tagP2MeshVertex
{
	float32 m_x;
	float32 m_y;
	float32 m_z;
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

struct _xTex
{
	_iTexResource* m_resource;
	_iTexRuntime* m_runtime;
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

struct _iTexResource
{
	uint32 m_assetID;
	uint32 pad[3];
	_PVRheader header;
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

struct tagP2Weight
{
	uint16 m_joint0;
	uint16 m_joint1;
	float32 m_weight0;
	float32 m_weight1;
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

struct _iTexRuntime
{
	void* surface;
	uint32 m_flags;
};

struct _RwLLLink
{
	_RwLLLink* next;
	_RwLLLink* prev;
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

struct tagXStreamMDSDirectory
{
	uint32 count;
	tagXStreamDirectoryEntry directory[1000];
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

struct _RwLinkList
{
	_RwLLLink link;
};

struct iObjRuntime
{
	int16 m_flag;
	int16 m_pad;
	_p2Geom* m_geom;
	float32 m_bradius;
	tagxPhysicsObject m_phys;
};

struct tagP2VERTEX
{
	float32 x;
	float32 y;
	float32 z;
	float32 tu;
	float32 tv;
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

struct Vector3D
{
	float32 x;
	float32 y;
	float32 z;
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

struct tagiMesh
{
};

struct _PVRheader
{
	uint32 id;
	uint32 nTextureDataSize;
	uint32 nTextureType;
	uint16 nWidth;
	uint16 nHeight;
};

int8 vAssertBuf2[128];
XStreamHeader currentHeader;
_xTex* g_Textures[200];
int32 g_TextureCount;

void iTexAssignObj(_xObj* obj, _xTex* tex);
void iTexAssign(_xActor* actor, _xTex* tex);
void iTexUnloadAll();
void iTexLoad();
void iTexLevelReset();
void iTexSetLevelReset();
void iTexInit();

// iTexAssignObj__FP5_xObjP5_xTex
// Start address: 0x36b280
void iTexAssignObj(_xObj* obj, _xTex* tex)
{
	_iTexRuntime* tr;
	iObjRuntime* ob;
	// Line 285, Address: 0x36b280, Func Offset: 0
	// Line 289, Address: 0x36b29c, Func Offset: 0x1c
	// Line 290, Address: 0x36b2a0, Func Offset: 0x20
	// Line 292, Address: 0x36b2a4, Func Offset: 0x24
	// Line 293, Address: 0x36b344, Func Offset: 0xc4
	// Line 295, Address: 0x36b3e4, Func Offset: 0x164
	// Line 296, Address: 0x36b3e8, Func Offset: 0x168
	// Func End, Address: 0x36b404, Func Offset: 0x184
}

// iTexAssign__FP7_xActorP5_xTex
// Start address: 0x36b410
void iTexAssign(_xActor* actor, _xTex* tex)
{
	_iTexRuntime* tr;
	iActorRuntime* ar;
	// Line 265, Address: 0x36b410, Func Offset: 0
	// Line 270, Address: 0x36b42c, Func Offset: 0x1c
	// Line 271, Address: 0x36b430, Func Offset: 0x20
	// Line 273, Address: 0x36b434, Func Offset: 0x24
	// Line 274, Address: 0x36b4d4, Func Offset: 0xc4
	// Line 276, Address: 0x36b574, Func Offset: 0x164
	// Line 277, Address: 0x36b578, Func Offset: 0x168
	// Func End, Address: 0x36b594, Func Offset: 0x184
}

// iTexUnloadAll__Fv
// Start address: 0x36b5a0
void iTexUnloadAll()
{
	int32 t;
	_xTex* tex;
	// Line 243, Address: 0x36b5a0, Func Offset: 0
	// Line 247, Address: 0x36b5ac, Func Offset: 0xc
	// Line 249, Address: 0x36b5b8, Func Offset: 0x18
	// Line 251, Address: 0x36b5cc, Func Offset: 0x2c
	// Line 253, Address: 0x36b5d4, Func Offset: 0x34
	// Line 254, Address: 0x36b728, Func Offset: 0x188
	// Line 255, Address: 0x36b73c, Func Offset: 0x19c
	// Line 256, Address: 0x36b740, Func Offset: 0x1a0
	// Line 258, Address: 0x36b754, Func Offset: 0x1b4
	// Func End, Address: 0x36b768, Func Offset: 0x1c8
}

// iTexLoad__FP5_xTexPUc
// Start address: 0x36b770
void iTexLoad()
{
	// Line 198, Address: 0x36b770, Func Offset: 0
	// Func End, Address: 0x36b778, Func Offset: 0x8
}

// iTexLevelReset__Fv
// Start address: 0x36b780
void iTexLevelReset()
{
	int32 i;
	// Line 81, Address: 0x36b780, Func Offset: 0
	// Line 85, Address: 0x36b78c, Func Offset: 0xc
	// Line 87, Address: 0x36b798, Func Offset: 0x18
	// Line 91, Address: 0x36b7b4, Func Offset: 0x34
	// Line 93, Address: 0x36b7dc, Func Offset: 0x5c
	// Line 96, Address: 0x36b940, Func Offset: 0x1c0
	// Line 98, Address: 0x36b954, Func Offset: 0x1d4
	// Line 100, Address: 0x36b958, Func Offset: 0x1d8
	// Line 102, Address: 0x36b96c, Func Offset: 0x1ec
	// Func End, Address: 0x36b980, Func Offset: 0x200
}

// iTexSetLevelReset__Fv
// Start address: 0x36b980
void iTexSetLevelReset()
{
	int32 i;
	// Line 50, Address: 0x36b980, Func Offset: 0
	// Line 55, Address: 0x36b98c, Func Offset: 0xc
	// Line 57, Address: 0x36b99c, Func Offset: 0x1c
	// Line 59, Address: 0x36b9a8, Func Offset: 0x28
	// Line 61, Address: 0x36b9c4, Func Offset: 0x44
	// Line 64, Address: 0x36ba80, Func Offset: 0x100
	// Line 65, Address: 0x36baa4, Func Offset: 0x124
	// Line 67, Address: 0x36baa8, Func Offset: 0x128
	// Line 69, Address: 0x36babc, Func Offset: 0x13c
	// Func End, Address: 0x36bad0, Func Offset: 0x150
}

// iTexInit__Fv
// Start address: 0x36bad0
void iTexInit()
{
	int32 max;
	int32 size;
	int32 i;
	// Line 30, Address: 0x36bad0, Func Offset: 0
	// Line 32, Address: 0x36bad8, Func Offset: 0x8
	// Line 35, Address: 0x36bae0, Func Offset: 0x10
	// Line 38, Address: 0x36baf0, Func Offset: 0x20
	// Line 40, Address: 0x36bafc, Func Offset: 0x2c
	// Line 41, Address: 0x36bb10, Func Offset: 0x40
	// Line 43, Address: 0x36bb24, Func Offset: 0x54
	// Func End, Address: 0x36bb34, Func Offset: 0x64
}

