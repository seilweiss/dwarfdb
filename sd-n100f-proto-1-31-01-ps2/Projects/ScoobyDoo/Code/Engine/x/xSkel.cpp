typedef struct tagiJointRuntime;
typedef struct xSkel;
typedef struct tagiSkelResource;
typedef struct tagiSkelRuntime;
typedef struct XStreamHeader;
typedef struct Vector3D;
typedef struct tagiJointResource;
typedef struct tagXStreamDirectoryEntry;
typedef struct tagMATRIX;
typedef struct tagXStreamMDSDirectory;


typedef tagXStreamDirectoryEntry type_0[1000];
typedef xSkel type_1[2];
typedef int8 type_2[2048];
typedef xSkel type_3[5];
typedef int8 type_4[128];
typedef xSkel type_5[1];
typedef xSkel type_6[5];

struct tagiJointRuntime
{
	float32 m_tx;
	float32 m_ty;
	float32 m_tz;
	float32 m_rx;
	float32 m_ry;
	float32 m_rz;
	Vector3D m_worldHome;
	tagMATRIX m_localMatrix;
	tagMATRIX m_worldMatrix;
};

struct xSkel
{
	tagiSkelResource* m_resource;
	tagiSkelRuntime* m_runtime;
};

struct tagiSkelResource
{
	uint32 m_assetID;
	uint32 m_jointCount;
	tagiJointResource* m_joints;
};

struct tagiSkelRuntime
{
	tagiJointRuntime* m_joints;
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

struct tagiJointResource
{
	tagMATRIX m_orientMatrix;
	Vector3D m_home;
	uint32 m_parent;
};

struct tagXStreamDirectoryEntry
{
	uint32 id;
	uint32 type;
	uint32 offset;
	uint32 length;
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

struct tagXStreamMDSDirectory
{
	uint32 count;
	tagXStreamDirectoryEntry directory[1000];
};

xSkel g_AshSkeleton[1];
xSkel g_BossSkeleton[2];
xSkel g_SNPCSkeleton[5];
xSkel g_DNPCSkeleton[5];
int32 g_AshSkeletonCount;
int32 g_BossSkeletonCount;
int32 g_SNPCSkeletonCount;
int32 g_DNPCSkeletonCount;
int8 vAssertBuf2[128];
XStreamHeader currentHeader;

void xSkelInit();

// xSkelInit__Fv
// Start address: 0x332950
void xSkelInit()
{
	// Line 36, Address: 0x332950, Func Offset: 0
	// Line 37, Address: 0x332954, Func Offset: 0x4
	// Line 38, Address: 0x332958, Func Offset: 0x8
	// Line 39, Address: 0x33295c, Func Offset: 0xc
	// Line 40, Address: 0x332960, Func Offset: 0x10
	// Func End, Address: 0x332968, Func Offset: 0x18
}

