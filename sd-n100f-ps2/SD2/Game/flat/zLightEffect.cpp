typedef struct RwRGBAReal;
typedef struct RwObjectHasFrame;
typedef struct RwLLLink;
typedef struct _zLight;
typedef struct zLightAsset;
typedef struct xBase;
typedef struct RwObject;
typedef struct iLight;
typedef struct p2LinkAsset;
typedef struct RwLinkList;
typedef struct RpLight;
typedef struct _xVec3;
typedef struct p2BaseAsset;
typedef struct _xFColor;
typedef struct _xSphere;

typedef RwObjectHasFrame*(*type_0)(RwObjectHasFrame*);
typedef int32(*type_2)(xBase*, xBase*, uint32, float32*, xBase*);

typedef float32 type_1[4];
typedef uint8 type_3[2];
typedef float32 type_4[4];

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct _zLight : xBase
{
	uint32 flags;
	zLightAsset* tasset;
	iLight light;
	xBase* attached_to;
	int32 true_idx;
	float32* reg;
	int32 effect_idx;
};

struct zLightAsset : p2BaseAsset
{
	uint8 lightType;
	uint8 lightEffect;
	uint8 lightPad[2];
	uint32 lightFlags;
	float32 lightColor[4];
	_xVec3 lightDir;
	float32 lightConeAngle;
	_xSphere lightSphere;
	uint32 attachID;
};

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	p2LinkAsset* link;
	int32(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*);
};

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct iLight
{
	uint32 type;
	RpLight* hw;
	_xSphere sph;
	float32 radius_sq;
	_xFColor color;
	_xVec3 dir;
	float32 coneangle;
};

struct p2LinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	float32 param[4];
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

struct RwLinkList
{
	RwLLLink link;
};

struct RpLight
{
	RwObjectHasFrame object;
	float32 radius;
	RwRGBAReal color;
	float32 minusCosAngle;
	RwLinkList WorldSectorsInLight;
	RwLLLink inWorld;
	uint16 lightFrame;
	uint16 pad;
};

struct _xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct p2BaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct _xFColor
{
	float32 r;
	float32 g;
	float32 b;
	float32 a;
};

struct _xSphere
{
	_xVec3 center;
	float32 r;
};


void zLightEffectCauldron(_zLight* zlight, float32 seconds);
void zLightEffectInitCauldron(_zLight* zlight);
void zLightEffectRandomColFast();
void zLightEffectRandomCol();
void zLightEffectRandomColSlow();
void zLightEffectHalfDimFast();
void zLightEffectHalfDim();
void zLightEffectHalfDimSlow();
void zLightEffectDimFast();
void zLightEffectDim();
void zLightEffectDimSlow();
void zLightEffectStrobeFast();
void zLightEffectStrobe();
void zLightEffectStrobeSlow();
void zLightEffectFlickerErratic(_zLight* zlight, float32 seconds);
void zLightEffectFlickerSlow(_zLight* zlight, float32 seconds);
void zLightEffectFlicker(_zLight* zlight, float32 seconds);
void EffectFlicker(_zLight* zlight, float32 seconds, float32 min, float32 rnd);
void zLightEffectInitFlicker(_zLight* zlight);
void zLightEffectInitRandomCol();
void zLightEffectInitHalfDim();
void zLightEffectInitDim();
void zLightEffectInitStrobe();

// zLightEffectCauldron__FP7_zLightf
// Start address: 0x1d9500
void zLightEffectCauldron(_zLight* zlight, float32 seconds)
{
	float32 amount;
	float32* reg;
	iLight* l;
	// Line 415, Address: 0x1d9500, Func Offset: 0
	// Line 417, Address: 0x1d9514, Func Offset: 0x14
	// Line 422, Address: 0x1d9518, Func Offset: 0x18
	// Line 416, Address: 0x1d9520, Func Offset: 0x20
	// Line 421, Address: 0x1d9524, Func Offset: 0x24
	// Line 422, Address: 0x1d952c, Func Offset: 0x2c
	// Line 425, Address: 0x1d953c, Func Offset: 0x3c
	// Line 427, Address: 0x1d9540, Func Offset: 0x40
	// Line 428, Address: 0x1d95a0, Func Offset: 0xa0
	// Line 429, Address: 0x1d9610, Func Offset: 0x110
	// Line 435, Address: 0x1d9670, Func Offset: 0x170
	// Line 434, Address: 0x1d9678, Func Offset: 0x178
	// Line 435, Address: 0x1d9684, Func Offset: 0x184
	// Line 436, Address: 0x1d96dc, Func Offset: 0x1dc
	// Line 437, Address: 0x1d973c, Func Offset: 0x23c
	// Line 440, Address: 0x1d979c, Func Offset: 0x29c
	// Line 441, Address: 0x1d97a8, Func Offset: 0x2a8
	// Func End, Address: 0x1d97c0, Func Offset: 0x2c0
}

// zLightEffectInitCauldron__FP7_zLight
// Start address: 0x1d97c0
void zLightEffectInitCauldron(_zLight* zlight)
{
	// Line 379, Address: 0x1d97c0, Func Offset: 0
	// Line 380, Address: 0x1d97c4, Func Offset: 0x4
	// Func End, Address: 0x1d97d0, Func Offset: 0x10
}

// zLightEffectRandomColFast__FP7_zLightf
// Start address: 0x1d97d0
void zLightEffectRandomColFast()
{
	// Line 358, Address: 0x1d97d0, Func Offset: 0
	// Func End, Address: 0x1d97d8, Func Offset: 0x8
}

// zLightEffectRandomCol__FP7_zLightf
// Start address: 0x1d97e0
void zLightEffectRandomCol()
{
	// Line 344, Address: 0x1d97e0, Func Offset: 0
	// Func End, Address: 0x1d97e8, Func Offset: 0x8
}

// zLightEffectRandomColSlow__FP7_zLightf
// Start address: 0x1d97f0
void zLightEffectRandomColSlow()
{
	// Line 330, Address: 0x1d97f0, Func Offset: 0
	// Func End, Address: 0x1d97f8, Func Offset: 0x8
}

// zLightEffectHalfDimFast__FP7_zLightf
// Start address: 0x1d9800
void zLightEffectHalfDimFast()
{
	// Line 316, Address: 0x1d9800, Func Offset: 0
	// Func End, Address: 0x1d9808, Func Offset: 0x8
}

// zLightEffectHalfDim__FP7_zLightf
// Start address: 0x1d9810
void zLightEffectHalfDim()
{
	// Line 302, Address: 0x1d9810, Func Offset: 0
	// Func End, Address: 0x1d9818, Func Offset: 0x8
}

// zLightEffectHalfDimSlow__FP7_zLightf
// Start address: 0x1d9820
void zLightEffectHalfDimSlow()
{
	// Line 288, Address: 0x1d9820, Func Offset: 0
	// Func End, Address: 0x1d9828, Func Offset: 0x8
}

// zLightEffectDimFast__FP7_zLightf
// Start address: 0x1d9830
void zLightEffectDimFast()
{
	// Line 274, Address: 0x1d9830, Func Offset: 0
	// Func End, Address: 0x1d9838, Func Offset: 0x8
}

// zLightEffectDim__FP7_zLightf
// Start address: 0x1d9840
void zLightEffectDim()
{
	// Line 260, Address: 0x1d9840, Func Offset: 0
	// Func End, Address: 0x1d9848, Func Offset: 0x8
}

// zLightEffectDimSlow__FP7_zLightf
// Start address: 0x1d9850
void zLightEffectDimSlow()
{
	// Line 246, Address: 0x1d9850, Func Offset: 0
	// Func End, Address: 0x1d9858, Func Offset: 0x8
}

// zLightEffectStrobeFast__FP7_zLightf
// Start address: 0x1d9860
void zLightEffectStrobeFast()
{
	// Line 232, Address: 0x1d9860, Func Offset: 0
	// Func End, Address: 0x1d9868, Func Offset: 0x8
}

// zLightEffectStrobe__FP7_zLightf
// Start address: 0x1d9870
void zLightEffectStrobe()
{
	// Line 218, Address: 0x1d9870, Func Offset: 0
	// Func End, Address: 0x1d9878, Func Offset: 0x8
}

// zLightEffectStrobeSlow__FP7_zLightf
// Start address: 0x1d9880
void zLightEffectStrobeSlow()
{
	// Line 204, Address: 0x1d9880, Func Offset: 0
	// Func End, Address: 0x1d9888, Func Offset: 0x8
}

// zLightEffectFlickerErratic__FP7_zLightf
// Start address: 0x1d9890
void zLightEffectFlickerErratic(_zLight* zlight, float32 seconds)
{
	// Line 188, Address: 0x1d9890, Func Offset: 0
	// Func End, Address: 0x1d98ac, Func Offset: 0x1c
}

// zLightEffectFlickerSlow__FP7_zLightf
// Start address: 0x1d98b0
void zLightEffectFlickerSlow(_zLight* zlight, float32 seconds)
{
	// Line 183, Address: 0x1d98b0, Func Offset: 0
	// Func End, Address: 0x1d98d4, Func Offset: 0x24
}

// zLightEffectFlicker__FP7_zLightf
// Start address: 0x1d98e0
void zLightEffectFlicker(_zLight* zlight, float32 seconds)
{
	// Line 178, Address: 0x1d98e0, Func Offset: 0
	// Func End, Address: 0x1d9904, Func Offset: 0x24
}

// EffectFlicker__FP7_zLightfff
// Start address: 0x1d9910
void EffectFlicker(_zLight* zlight, float32 seconds, float32 min, float32 rnd)
{
	float32* reg;
	iLight* l;
	// Line 150, Address: 0x1d9910, Func Offset: 0
	// Line 152, Address: 0x1d992c, Func Offset: 0x1c
	// Line 156, Address: 0x1d9934, Func Offset: 0x24
	// Line 151, Address: 0x1d9940, Func Offset: 0x30
	// Line 155, Address: 0x1d9944, Func Offset: 0x34
	// Line 156, Address: 0x1d994c, Func Offset: 0x3c
	// Line 159, Address: 0x1d995c, Func Offset: 0x4c
	// Line 160, Address: 0x1d99b0, Func Offset: 0xa0
	// Line 159, Address: 0x1d99b4, Func Offset: 0xa4
	// Line 163, Address: 0x1d99b8, Func Offset: 0xa8
	// Line 164, Address: 0x1d9a30, Func Offset: 0x120
	// Line 165, Address: 0x1d9aa8, Func Offset: 0x198
	// Line 166, Address: 0x1d9b08, Func Offset: 0x1f8
	// Line 165, Address: 0x1d9b0c, Func Offset: 0x1fc
	// Line 166, Address: 0x1d9b28, Func Offset: 0x218
	// Line 167, Address: 0x1d9b68, Func Offset: 0x258
	// Line 168, Address: 0x1d9bac, Func Offset: 0x29c
	// Line 171, Address: 0x1d9bf0, Func Offset: 0x2e0
	// Line 173, Address: 0x1d9bfc, Func Offset: 0x2ec
	// Func End, Address: 0x1d9c1c, Func Offset: 0x30c
}

// zLightEffectInitFlicker__FP7_zLight
// Start address: 0x1d9c20
void zLightEffectInitFlicker(_zLight* zlight)
{
	// Line 127, Address: 0x1d9c20, Func Offset: 0
	// Line 128, Address: 0x1d9c24, Func Offset: 0x4
	// Func End, Address: 0x1d9c30, Func Offset: 0x10
}

// zLightEffectInitRandomCol__FP7_zLight
// Start address: 0x1d9c30
void zLightEffectInitRandomCol()
{
	// Line 111, Address: 0x1d9c30, Func Offset: 0
	// Func End, Address: 0x1d9c38, Func Offset: 0x8
}

// zLightEffectInitHalfDim__FP7_zLight
// Start address: 0x1d9c40
void zLightEffectInitHalfDim()
{
	// Line 98, Address: 0x1d9c40, Func Offset: 0
	// Func End, Address: 0x1d9c48, Func Offset: 0x8
}

// zLightEffectInitDim__FP7_zLight
// Start address: 0x1d9c50
void zLightEffectInitDim()
{
	// Line 85, Address: 0x1d9c50, Func Offset: 0
	// Func End, Address: 0x1d9c58, Func Offset: 0x8
}

// zLightEffectInitStrobe__FP7_zLight
// Start address: 0x1d9c60
void zLightEffectInitStrobe()
{
	// Line 72, Address: 0x1d9c60, Func Offset: 0
	// Func End, Address: 0x1d9c68, Func Offset: 0x8
}

