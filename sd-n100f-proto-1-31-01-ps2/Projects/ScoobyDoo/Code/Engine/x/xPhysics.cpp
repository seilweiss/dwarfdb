typedef struct tagxPhysicsObject;
typedef struct tagMATRIX;
typedef struct Vector3D;



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

struct Vector3D
{
	float32 x;
	float32 y;
	float32 z;
};

int32 gDebugDrawDebugInfo;

void xPhysicsClipVelocity(Vector3D* in, Vector3D* normal, Vector3D* out, float32 overbounce);
void xPhysicsMovePhysicsObject(tagxPhysicsObject* o);
void xPhysicsCalcMotionVector(tagxPhysicsObject* o);

// xPhysicsClipVelocity__FP8Vector3DP8Vector3DP8Vector3Df
// Start address: 0x340660
void xPhysicsClipVelocity(Vector3D* in, Vector3D* normal, Vector3D* out, float32 overbounce)
{
	float32 backoff;
	// Line 228, Address: 0x340660, Func Offset: 0
	// Line 232, Address: 0x340688, Func Offset: 0x28
	// Line 234, Address: 0x34069c, Func Offset: 0x3c
	// Line 235, Address: 0x3406a4, Func Offset: 0x44
	// Line 236, Address: 0x3406ac, Func Offset: 0x4c
	// Line 238, Address: 0x3406b4, Func Offset: 0x54
	// Line 239, Address: 0x3406c0, Func Offset: 0x60
	// Line 240, Address: 0x340704, Func Offset: 0xa4
	// Line 242, Address: 0x340708, Func Offset: 0xa8
	// Line 243, Address: 0x340714, Func Offset: 0xb4
	// Line 244, Address: 0x340758, Func Offset: 0xf8
	// Line 246, Address: 0x34075c, Func Offset: 0xfc
	// Line 247, Address: 0x340768, Func Offset: 0x108
	// Line 248, Address: 0x3407ac, Func Offset: 0x14c
	// Line 250, Address: 0x3407b0, Func Offset: 0x150
	// Func End, Address: 0x3407d0, Func Offset: 0x170
}

// xPhysicsMovePhysicsObject__FP17tagxPhysicsObject
// Start address: 0x3407d0
void xPhysicsMovePhysicsObject(tagxPhysicsObject* o)
{
	Vector3D c;
	float32 ct;
	Vector3D dst;
	// Line 129, Address: 0x3407d0, Func Offset: 0
	// Line 135, Address: 0x3407e0, Func Offset: 0x10
	// Line 142, Address: 0x3407ec, Func Offset: 0x1c
	// Line 143, Address: 0x3407fc, Func Offset: 0x2c
	// Line 144, Address: 0x34080c, Func Offset: 0x3c
	// Line 148, Address: 0x34081c, Func Offset: 0x4c
	// Line 157, Address: 0x340854, Func Offset: 0x84
	// Line 158, Address: 0x340870, Func Offset: 0xa0
	// Line 162, Address: 0x340878, Func Offset: 0xa8
	// Line 167, Address: 0x34087c, Func Offset: 0xac
	// Line 172, Address: 0x340888, Func Offset: 0xb8
	// Line 174, Address: 0x340894, Func Offset: 0xc4
	// Line 176, Address: 0x3408a8, Func Offset: 0xd8
	// Line 177, Address: 0x3408c4, Func Offset: 0xf4
	// Line 180, Address: 0x3408d8, Func Offset: 0x108
	// Line 197, Address: 0x3408e0, Func Offset: 0x110
	// Line 198, Address: 0x3408f0, Func Offset: 0x120
	// Line 199, Address: 0x340900, Func Offset: 0x130
	// Line 203, Address: 0x340910, Func Offset: 0x140
	// Line 205, Address: 0x34091c, Func Offset: 0x14c
	// Line 206, Address: 0x340930, Func Offset: 0x160
	// Line 210, Address: 0x34094c, Func Offset: 0x17c
	// Func End, Address: 0x340960, Func Offset: 0x190
}

// xPhysicsCalcMotionVector__FP17tagxPhysicsObject
// Start address: 0x340960
void xPhysicsCalcMotionVector(tagxPhysicsObject* o)
{
	int32 collision;
	tagMATRIX m2;
	Vector3D vd;
	tagMATRIX m1;
	tagMATRIX mz;
	tagMATRIX mx;
	tagMATRIX my;
	// Line 40, Address: 0x340960, Func Offset: 0
	// Line 46, Address: 0x340970, Func Offset: 0x10
	// Line 47, Address: 0x340980, Func Offset: 0x20
	// Line 48, Address: 0x340990, Func Offset: 0x30
	// Line 52, Address: 0x3409a0, Func Offset: 0x40
	// Line 53, Address: 0x3409b0, Func Offset: 0x50
	// Line 54, Address: 0x3409c0, Func Offset: 0x60
	// Line 57, Address: 0x3409d0, Func Offset: 0x70
	// Line 59, Address: 0x3409e0, Func Offset: 0x80
	// Line 60, Address: 0x340a04, Func Offset: 0xa4
	// Line 61, Address: 0x340a1c, Func Offset: 0xbc
	// Line 62, Address: 0x340a34, Func Offset: 0xd4
	// Line 64, Address: 0x340a4c, Func Offset: 0xec
	// Line 68, Address: 0x340aa0, Func Offset: 0x140
	// Line 69, Address: 0x340ac4, Func Offset: 0x164
	// Line 73, Address: 0x340acc, Func Offset: 0x16c
	// Line 74, Address: 0x340ae0, Func Offset: 0x180
	// Line 75, Address: 0x340af4, Func Offset: 0x194
	// Line 77, Address: 0x340b08, Func Offset: 0x1a8
	// Line 78, Address: 0x340b28, Func Offset: 0x1c8
	// Line 82, Address: 0x340b48, Func Offset: 0x1e8
	// Line 84, Address: 0x340b64, Func Offset: 0x204
	// Line 87, Address: 0x340b6c, Func Offset: 0x20c
	// Line 88, Address: 0x340b84, Func Offset: 0x224
	// Line 89, Address: 0x340b94, Func Offset: 0x234
	// Line 90, Address: 0x340ba4, Func Offset: 0x244
	// Line 93, Address: 0x340bb4, Func Offset: 0x254
	// Line 94, Address: 0x340bb8, Func Offset: 0x258
	// Line 95, Address: 0x340bbc, Func Offset: 0x25c
	// Line 96, Address: 0x340bc0, Func Offset: 0x260
	// Func End, Address: 0x340bd4, Func Offset: 0x274
}

