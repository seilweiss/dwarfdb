typedef struct tagxPhysicsObject;
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

struct Vector3D
{
	float32 x;
	float32 y;
	float32 z;
};


void xPhysicsObjectSetOrientation(tagxPhysicsObject* p, float32 rx, float32 ry, float32 rz);
void xPhysicsObjectTranslatePosition(tagxPhysicsObject* p, float32 x, float32 y, float32 z);
void xPhysicsObjectSetPosition(tagxPhysicsObject* p, float32 x, float32 y, float32 z);
void xPhysicsObjectInitialize(tagxPhysicsObject* p);

// xPhysicsObjectSetOrientation__FP17tagxPhysicsObjectfff
// Start address: 0x3404e0
void xPhysicsObjectSetOrientation(tagxPhysicsObject* p, float32 rx, float32 ry, float32 rz)
{
	// Line 80, Address: 0x3404e0, Func Offset: 0
	// Line 84, Address: 0x34051c, Func Offset: 0x3c
	// Line 85, Address: 0x340520, Func Offset: 0x40
	// Line 86, Address: 0x340524, Func Offset: 0x44
	// Line 87, Address: 0x340528, Func Offset: 0x48
	// Line 89, Address: 0x340534, Func Offset: 0x54
	// Func End, Address: 0x34053c, Func Offset: 0x5c
}

// xPhysicsObjectTranslatePosition__FP17tagxPhysicsObjectfff
// Start address: 0x340540
void xPhysicsObjectTranslatePosition(tagxPhysicsObject* p, float32 x, float32 y, float32 z)
{
	// Line 62, Address: 0x340540, Func Offset: 0
	// Line 71, Address: 0x340588, Func Offset: 0x48
	// Line 72, Address: 0x340594, Func Offset: 0x54
	// Line 73, Address: 0x3405a0, Func Offset: 0x60
	// Line 74, Address: 0x3405ac, Func Offset: 0x6c
	// Line 76, Address: 0x3405b8, Func Offset: 0x78
	// Func End, Address: 0x3405c0, Func Offset: 0x80
}

// xPhysicsObjectSetPosition__FP17tagxPhysicsObjectfff
// Start address: 0x3405c0
void xPhysicsObjectSetPosition(tagxPhysicsObject* p, float32 x, float32 y, float32 z)
{
	// Line 43, Address: 0x3405c0, Func Offset: 0
	// Line 52, Address: 0x3405fc, Func Offset: 0x3c
	// Line 53, Address: 0x340600, Func Offset: 0x40
	// Line 54, Address: 0x340604, Func Offset: 0x44
	// Line 55, Address: 0x340608, Func Offset: 0x48
	// Line 57, Address: 0x340614, Func Offset: 0x54
	// Func End, Address: 0x34061c, Func Offset: 0x5c
}

// xPhysicsObjectInitialize__FP17tagxPhysicsObject
// Start address: 0x340620
void xPhysicsObjectInitialize(tagxPhysicsObject* p)
{
	// Line 27, Address: 0x340620, Func Offset: 0
	// Line 28, Address: 0x340628, Func Offset: 0x8
	// Line 30, Address: 0x340630, Func Offset: 0x10
	// Line 31, Address: 0x340638, Func Offset: 0x18
	// Line 33, Address: 0x34063c, Func Offset: 0x1c
	// Line 34, Address: 0x340644, Func Offset: 0x24
	// Line 36, Address: 0x340648, Func Offset: 0x28
	// Line 39, Address: 0x340650, Func Offset: 0x30
	// Func End, Address: 0x340660, Func Offset: 0x40
}

