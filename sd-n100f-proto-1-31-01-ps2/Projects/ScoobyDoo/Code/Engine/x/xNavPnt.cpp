typedef struct xNavPoint;
typedef struct tagXStreamMDSDirectory;
typedef struct XStreamHeader;
typedef struct Vector3D;
typedef struct xNavLink;
typedef struct tagXStreamDirectoryEntry;


typedef Vector3D type_0[2];
typedef tagXStreamDirectoryEntry type_1[1000];
typedef int8 type_2[2048];
typedef int8 type_3[128];

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

struct tagXStreamMDSDirectory
{
	uint32 count;
	tagXStreamDirectoryEntry directory[1000];
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

struct tagXStreamDirectoryEntry
{
	uint32 id;
	uint32 type;
	uint32 offset;
	uint32 length;
};

int8 vAssertBuf2[128];
XStreamHeader currentHeader;

int32 xNavPointIsLinked(xNavPoint* np1, xNavPoint* np2);
float32 xNavPointAStarGetNodeHeuristic(xNavPoint* np, xNavPoint* start, xNavPoint* goal);
float32 xNavPointSquareDistanceFromPoint(xNavPoint* np, Vector3D* p);
void xNavPointPathfinderFreeLink(xNavPoint* np, xNavPoint* np2);
void xNavPointPathfinderOccupyLink(xNavPoint* np, xNavPoint* np2);

// xNavPointIsLinked__FP9xNavPointP9xNavPoint
// Start address: 0x356230
int32 xNavPointIsLinked(xNavPoint* np1, xNavPoint* np2)
{
	uint32 i;
	// Line 314, Address: 0x356230, Func Offset: 0
	// Line 316, Address: 0x35623c, Func Offset: 0xc
	// Line 317, Address: 0x356254, Func Offset: 0x24
	// Line 318, Address: 0x356260, Func Offset: 0x30
	// Line 320, Address: 0x356278, Func Offset: 0x48
	// Line 321, Address: 0x35627c, Func Offset: 0x4c
	// Func End, Address: 0x356284, Func Offset: 0x54
}

// xNavPointAStarGetNodeHeuristic__FP9xNavPointP9xNavPointP9xNavPoint
// Start address: 0x356290
float32 xNavPointAStarGetNodeHeuristic(xNavPoint* np, xNavPoint* start, xNavPoint* goal)
{
	float32 cross;
	float32 dy2;
	float32 dx2;
	float32 dy1;
	float32 dx1;
	float32 fudge;
	float32 i;
	float32 h;
	// Line 259, Address: 0x356290, Func Offset: 0
	// Line 260, Address: 0x3562b4, Func Offset: 0x24
	// Line 262, Address: 0x3562b8, Func Offset: 0x28
	// Line 264, Address: 0x356358, Func Offset: 0xc8
	// Line 265, Address: 0x356360, Func Offset: 0xd0
	// Line 271, Address: 0x35636c, Func Offset: 0xdc
	// Line 276, Address: 0x3563a4, Func Offset: 0x114
	// Line 280, Address: 0x3563dc, Func Offset: 0x14c
	// Line 282, Address: 0x3563e4, Func Offset: 0x154
	// Line 283, Address: 0x3563f0, Func Offset: 0x160
	// Line 284, Address: 0x3563fc, Func Offset: 0x16c
	// Line 285, Address: 0x356408, Func Offset: 0x178
	// Line 286, Address: 0x356414, Func Offset: 0x184
	// Line 288, Address: 0x35641c, Func Offset: 0x18c
	// Line 289, Address: 0x356434, Func Offset: 0x1a4
	// Line 291, Address: 0x356438, Func Offset: 0x1a8
	// Line 295, Address: 0x35644c, Func Offset: 0x1bc
	// Line 296, Address: 0x356454, Func Offset: 0x1c4
	// Func End, Address: 0x356474, Func Offset: 0x1e4
}

// xNavPointSquareDistanceFromPoint__FP9xNavPointP8Vector3D
// Start address: 0x356480
float32 xNavPointSquareDistanceFromPoint(xNavPoint* np, Vector3D* p)
{
	// Line 202, Address: 0x356480, Func Offset: 0
	// Line 204, Address: 0x35648c, Func Offset: 0xc
	// Line 206, Address: 0x356498, Func Offset: 0x18
	// Line 207, Address: 0x3564a0, Func Offset: 0x20
	// Func End, Address: 0x3564a8, Func Offset: 0x28
}

// xNavPointPathfinderFreeLink__FP9xNavPointP9xNavPoint
// Start address: 0x3564b0
void xNavPointPathfinderFreeLink(xNavPoint* np, xNavPoint* np2)
{
	uint32 i;
	// Line 106, Address: 0x3564b0, Func Offset: 0
	// Line 109, Address: 0x3564c4, Func Offset: 0x14
	// Line 111, Address: 0x3564d0, Func Offset: 0x20
	// Line 113, Address: 0x3564e8, Func Offset: 0x38
	// Line 114, Address: 0x356598, Func Offset: 0xe8
	// Line 115, Address: 0x3565b0, Func Offset: 0x100
	// Line 116, Address: 0x3565c8, Func Offset: 0x118
	// Line 117, Address: 0x356600, Func Offset: 0x150
	// Line 119, Address: 0x356608, Func Offset: 0x158
	// Line 120, Address: 0x356620, Func Offset: 0x170
	// Func End, Address: 0x356638, Func Offset: 0x188
}

// xNavPointPathfinderOccupyLink__FP9xNavPointP9xNavPoint
// Start address: 0x356640
void xNavPointPathfinderOccupyLink(xNavPoint* np, xNavPoint* np2)
{
	uint32 i;
	// Line 94, Address: 0x356640, Func Offset: 0
	// Line 96, Address: 0x35664c, Func Offset: 0xc
	// Line 98, Address: 0x356664, Func Offset: 0x24
	// Line 99, Address: 0x35667c, Func Offset: 0x3c
	// Line 100, Address: 0x356694, Func Offset: 0x54
	// Line 102, Address: 0x35669c, Func Offset: 0x5c
	// Line 103, Address: 0x3566b0, Func Offset: 0x70
	// Func End, Address: 0x3566b8, Func Offset: 0x78
}

