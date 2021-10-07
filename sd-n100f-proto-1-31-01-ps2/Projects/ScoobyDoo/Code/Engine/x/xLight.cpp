typedef struct tagXStreamMDSDirectory;
typedef struct _iLightRuntime;
typedef struct iLightResource;
typedef struct XStreamHeader;
typedef struct Vector3D;
typedef struct tagXStreamDirectoryEntry;
typedef struct xLight;


typedef tagXStreamDirectoryEntry type_0[1000];
typedef int8 type_1[2048];
typedef float32 type_2[3];
typedef int8 type_3[128];
typedef iLightResource type_4[2];

struct tagXStreamMDSDirectory
{
	uint32 count;
	tagXStreamDirectoryEntry directory[1000];
};

struct _iLightRuntime
{
	uint8 m_enabled;
	uint8 m_dir;
	uint8 m_mode;
	float32 m_falloff[3];
	float32 m_weight;
	int16 m_frameSpeed;
	int16 m_frameCount;
	float32 m_speed;
	iLightResource m_anchor[2];
};

struct iLightResource
{
	uint32 m_type;
	Vector3D m_pos;
	Vector3D m_rot;
	Vector3D m_color;
	int32 m_fov;
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

struct tagXStreamDirectoryEntry
{
	uint32 id;
	uint32 type;
	uint32 offset;
	uint32 length;
};

struct xLight
{
	iLightResource* m_resource;
	_iLightRuntime* m_runtime;
};

int8 vAssertBuf2[128];
XStreamHeader currentHeader;

void xLightIdle();
void xLightInitRuntime(xLight* l);

// xLightIdle__FP6xLight
// Start address: 0x35a120
void xLightIdle()
{
	// Line 145, Address: 0x35a120, Func Offset: 0
	// Func End, Address: 0x35a128, Func Offset: 0x8
}

// xLightInitRuntime__FP6xLight
// Start address: 0x35a130
void xLightInitRuntime(xLight* l)
{
	iLightResource* rsrc;
	_iLightRuntime* r;
	// Line 20, Address: 0x35a130, Func Offset: 0
	// Line 27, Address: 0x35a140, Func Offset: 0x10
	// Line 28, Address: 0x35a1e0, Func Offset: 0xb0
	// Line 31, Address: 0x35a1e4, Func Offset: 0xb4
	// Line 33, Address: 0x35a284, Func Offset: 0x154
	// Line 52, Address: 0x35a28c, Func Offset: 0x15c
	// Func End, Address: 0x35a2a0, Func Offset: 0x170
}

