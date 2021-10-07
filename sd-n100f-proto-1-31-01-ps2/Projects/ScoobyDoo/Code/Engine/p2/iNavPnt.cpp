typedef struct xNavPoint;
typedef struct xNavLink;
typedef struct Vector3D;



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

struct Vector3D
{
	float32 x;
	float32 y;
	float32 z;
};


int32 iNavPointLineOfSightPoint(xNavPoint* np, Vector3D* p, int32 physObj);

// iNavPointLineOfSightPoint__FP9xNavPointP8Vector3Di
// Start address: 0x381480
int32 iNavPointLineOfSightPoint(xNavPoint* np, Vector3D* p, int32 physObj)
{
	// Line 42, Address: 0x381480, Func Offset: 0
	// Line 43, Address: 0x381488, Func Offset: 0x8
	// Line 268, Address: 0x381494, Func Offset: 0x14
	// Func End, Address: 0x3814a4, Func Offset: 0x24
}

