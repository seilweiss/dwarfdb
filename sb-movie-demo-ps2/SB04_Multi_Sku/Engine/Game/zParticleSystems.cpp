typedef struct xBase;
typedef struct zParticleGenerator;
typedef struct motion_data;
typedef struct volume_data;
typedef struct xLinkAsset;
typedef struct attach_fixed_data;
typedef struct zParticleAsset;
typedef struct _anon0;
typedef struct attach_entity_data;
typedef struct _anon1;
typedef struct zParticleSystem;
typedef struct attach_entity_tag_data;
typedef struct volume_point_data;
typedef struct _anon2;
typedef struct volume_sphere_data;
typedef struct xBaseAsset;
typedef struct attach_data;
typedef struct _class;
typedef struct _anon3;
typedef struct xDynAsset;
typedef struct RwV3d;
typedef struct xVec3;
typedef struct volume_circle_data;
typedef struct volume_line_data;
typedef struct motion_none_data;
typedef struct relative_ordering;
typedef struct _anon4;
typedef struct motion_spiral_data;
typedef struct volume_model_data;

typedef void(*type_0)(xBase*, xBase*, uint32, float32*, xBase*, uint32);

typedef float32 type_1[3];
typedef int8 type_2[16];
typedef int8 type_3[16];
typedef float32 type_4[4];

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	void(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*, uint32);
};

struct zParticleGenerator : xBase
{
	zParticleAsset* asset;
	int32 flags;
};

struct motion_data
{
	union
	{
		motion_none_data none;
		motion_spiral_data spiral;
	};
};

struct volume_data
{
	union
	{
		volume_point_data point;
		volume_sphere_data sphere;
		volume_circle_data circle;
		volume_line_data line;
		volume_model_data model;
	};
};

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	float32 param[4];
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

struct attach_fixed_data
{
};

struct zParticleAsset : xDynAsset
{
	uint8 flags;
	uint8 attach_flags;
	uint8 motion_flags;
	uint8 volume_flags;
	float32 rate;
	uint32 texture;
	uint8 attach_type;
	uint8 motion_type;
	uint8 volume_type;
	uint8 system_type;
	xVec3 location;
	_class axis;
	attach_data attach;
	motion_data motion;
	volume_data volume;
};

struct _anon0
{
};

struct attach_entity_data
{
	uint32 entity;
	uint8 bone;
	uint8 pad1;
	uint8 pad2;
	uint8 pad3;
};

struct _anon1
{
};

struct zParticleSystem
{
	int32 type;
	int32 need;
	zParticleGenerator** generators;
	int32 generators_size;
	int32 generators_active;
};

struct attach_entity_tag_data
{
	uint32 entity;
	xVec3 tag;
};

struct volume_point_data
{
};

struct _anon2
{
};

struct volume_sphere_data
{
	float32 radius;
};

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct attach_data
{
	union
	{
		attach_fixed_data fixed;
		attach_entity_data entity;
		attach_entity_tag_data entity_tag;
	};
};

struct _class
{
	float32 yaw;
	float32 pitch;
	float32 roll;
};

struct _anon3
{
};

struct xDynAsset : xBaseAsset
{
	uint32 type;
	uint16 version;
	uint16 handle;
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct xVec3
{
	union
	{
		RwV3d m_RwV3d;
		float32 x;
	};
	float32 y;
	float32 z;
	float32 a[3];
};

struct volume_circle_data
{
	float32 radius;
	float32 arc_length;
};

struct volume_line_data
{
	uint8 flags;
	uint8 pad1;
	uint8 pad2;
	uint8 pad3;
	float32 radius;
	float32 length;
};

struct motion_none_data
{
};

struct relative_ordering
{
	int32 other;
	uint8 before_other;
};

struct _anon4
{
};

struct motion_spiral_data
{
	uint8 flags;
	uint8 points;
	uint8 pad1;
	uint8 pad2;
	float32 radius_inner;
	float32 radius_outer;
	float32 duration;
	float32 frequency;
};

struct volume_model_data
{
	uint8 flags;
	uint8 exclude;
	uint8 pad1;
	uint8 pad2;
	float32 expand;
};

int8 buffer[16];
int8 buffer[16];
_anon4 __vt__30zParticleSystemWaterfallSplash;
_anon1 __vt__15zParticleSystem;
uint32 gActiveHeap;
_anon3 __vt__28zParticleSystemWaterfallMist;
_anon0 __vt__24zParticleSystemWaterfall;
_anon2 __vt__20zParticleSystemDummy;

zParticleSystem** zParticleSystemCreateAll();
zParticleGenerator* create_generator();
int32 get_asset_size();

// zParticleSystemCreateAll__Fv
// Start address: 0x498520
zParticleSystem** zParticleSystemCreateAll()
{
	// Line 20, Address: 0x498520, Func Offset: 0
	// Line 21, Address: 0x498524, Func Offset: 0x4
	// Line 20, Address: 0x498528, Func Offset: 0x8
	// Line 21, Address: 0x498530, Func Offset: 0x10
	// Line 25, Address: 0x49853c, Func Offset: 0x1c
	// Line 21, Address: 0x498540, Func Offset: 0x20
	// Line 25, Address: 0x498544, Func Offset: 0x24
	// Line 26, Address: 0x498578, Func Offset: 0x58
	// Line 27, Address: 0x4985b8, Func Offset: 0x98
	// Line 28, Address: 0x4985f8, Func Offset: 0xd8
	// Line 30, Address: 0x498638, Func Offset: 0x118
	// Line 31, Address: 0x49863c, Func Offset: 0x11c
	// Func End, Address: 0x49864c, Func Offset: 0x12c
}

// create_generator__20zParticleSystemDummyFR14zParticleAsset
// Start address: 0x498650
zParticleGenerator* create_generator()
{
	// Line 14, Address: 0x498650, Func Offset: 0
	// Func End, Address: 0x498658, Func Offset: 0x8
}

// get_asset_size__20zParticleSystemDummyCFv
// Start address: 0x498660
int32 get_asset_size()
{
	// Line 15, Address: 0x498660, Func Offset: 0
	// Func End, Address: 0x498668, Func Offset: 0x8
}

