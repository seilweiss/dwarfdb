



void zEntPlayerSlideFXUpdateDust(float32 dt);
void zEntPlayerSlideFXUpdate(float32 dt);
void zEntPlayerSlideFXInit();

// zEntPlayerSlideFXUpdateDust__Ff
// Start address: 0x314370
void zEntPlayerSlideFXUpdateDust(float32 dt)
{
	zPlayerGlobals* pg;
	float32 intensityFactor;
	xParEmitterCustomSettings parEmitInfo;
	float32 deathSize;
	float32 velY;
	float32 lastPosY;
	// Line 186, Address: 0x314370, Func Offset: 0
	// Line 187, Address: 0x314380, Func Offset: 0x10
	// Line 186, Address: 0x314384, Func Offset: 0x14
	// Line 187, Address: 0x314388, Func Offset: 0x18
	// Line 189, Address: 0x31438c, Func Offset: 0x1c
	// Line 196, Address: 0x31439c, Func Offset: 0x2c
	// Line 189, Address: 0x3143a0, Func Offset: 0x30
	// Line 196, Address: 0x3143a4, Func Offset: 0x34
	// Line 193, Address: 0x3143a8, Func Offset: 0x38
	// Line 196, Address: 0x3143ac, Func Offset: 0x3c
	// Line 192, Address: 0x3143b0, Func Offset: 0x40
	// Line 193, Address: 0x3143c4, Func Offset: 0x54
	// Line 196, Address: 0x3143d0, Func Offset: 0x60
	// Line 198, Address: 0x3143d8, Func Offset: 0x68
	// Line 205, Address: 0x3143dc, Func Offset: 0x6c
	// Line 198, Address: 0x3143e0, Func Offset: 0x70
	// Line 210, Address: 0x3143e4, Func Offset: 0x74
	// Line 204, Address: 0x3143e8, Func Offset: 0x78
	// Line 205, Address: 0x3143ec, Func Offset: 0x7c
	// Line 204, Address: 0x3143f0, Func Offset: 0x80
	// Line 205, Address: 0x3143f4, Func Offset: 0x84
	// Line 207, Address: 0x3143f8, Func Offset: 0x88
	// Line 204, Address: 0x3143fc, Func Offset: 0x8c
	// Line 205, Address: 0x314400, Func Offset: 0x90
	// Line 207, Address: 0x314404, Func Offset: 0x94
	// Line 205, Address: 0x314408, Func Offset: 0x98
	// Line 207, Address: 0x314410, Func Offset: 0xa0
	// Line 211, Address: 0x314414, Func Offset: 0xa4
	// Line 207, Address: 0x314418, Func Offset: 0xa8
	// Line 210, Address: 0x314430, Func Offset: 0xc0
	// Line 207, Address: 0x314434, Func Offset: 0xc4
	// Line 210, Address: 0x314438, Func Offset: 0xc8
	// Line 211, Address: 0x314448, Func Offset: 0xd8
	// Line 212, Address: 0x314454, Func Offset: 0xe4
	// Line 216, Address: 0x314458, Func Offset: 0xe8
	// Line 218, Address: 0x31445c, Func Offset: 0xec
	// Line 213, Address: 0x314460, Func Offset: 0xf0
	// Line 218, Address: 0x314464, Func Offset: 0xf4
	// Line 214, Address: 0x314468, Func Offset: 0xf8
	// Line 218, Address: 0x31446c, Func Offset: 0xfc
	// Line 213, Address: 0x314470, Func Offset: 0x100
	// Line 216, Address: 0x314478, Func Offset: 0x108
	// Line 215, Address: 0x31447c, Func Offset: 0x10c
	// Line 213, Address: 0x314484, Func Offset: 0x114
	// Line 214, Address: 0x314488, Func Offset: 0x118
	// Line 213, Address: 0x31448c, Func Offset: 0x11c
	// Line 218, Address: 0x314490, Func Offset: 0x120
	// Line 219, Address: 0x314498, Func Offset: 0x128
	// Func End, Address: 0x3144b0, Func Offset: 0x140
}

// zEntPlayerSlideFXUpdate__Ff
// Start address: 0x3144b0
void zEntPlayerSlideFXUpdate(float32 dt)
{
	xSurface* pSurface;
	zSurfaceProps* pSurfaceProps;
	zDrivingSurf surfaceType;
	float32 timeNow;
	float32 slowFactor;
	iSndGroupHandle soundGroup;
	float32 nextNoiseTime;
	// Line 60, Address: 0x3144b0, Func Offset: 0
	// Line 61, Address: 0x3144b4, Func Offset: 0x4
	// Line 60, Address: 0x3144b8, Func Offset: 0x8
	// Line 61, Address: 0x3144cc, Func Offset: 0x1c
	// Line 67, Address: 0x3144e8, Func Offset: 0x38
	// Line 69, Address: 0x3144f0, Func Offset: 0x40
	// Line 70, Address: 0x3144f8, Func Offset: 0x48
	// Line 71, Address: 0x3144fc, Func Offset: 0x4c
	// Line 76, Address: 0x314544, Func Offset: 0x94
	// Line 77, Address: 0x31454c, Func Offset: 0x9c
	// Line 80, Address: 0x314554, Func Offset: 0xa4
	// Line 81, Address: 0x314578, Func Offset: 0xc8
	// Line 89, Address: 0x31457c, Func Offset: 0xcc
	// Line 91, Address: 0x314588, Func Offset: 0xd8
	// Line 96, Address: 0x3145e8, Func Offset: 0x138
	// Line 111, Address: 0x3145f0, Func Offset: 0x140
	// Line 119, Address: 0x3145fc, Func Offset: 0x14c
	// Line 147, Address: 0x314608, Func Offset: 0x158
	// Line 152, Address: 0x31461c, Func Offset: 0x16c
	// Line 155, Address: 0x314644, Func Offset: 0x194
	// Line 156, Address: 0x314654, Func Offset: 0x1a4
	// Line 160, Address: 0x31465c, Func Offset: 0x1ac
	// Line 163, Address: 0x314664, Func Offset: 0x1b4
	// Line 166, Address: 0x314668, Func Offset: 0x1b8
	// Line 167, Address: 0x31467c, Func Offset: 0x1cc
	// Line 168, Address: 0x314684, Func Offset: 0x1d4
	// Line 177, Address: 0x3146ac, Func Offset: 0x1fc
	// Line 115, Address: 0x3146bc, Func Offset: 0x20c
	// Line 177, Address: 0x3146c8, Func Offset: 0x218
	// Line 129, Address: 0x3146e8, Func Offset: 0x238
	// Line 177, Address: 0x3146ec, Func Offset: 0x23c
	// Line 132, Address: 0x314718, Func Offset: 0x268
	// Line 177, Address: 0x31471c, Func Offset: 0x26c
	// Line 133, Address: 0x314728, Func Offset: 0x278
	// Line 177, Address: 0x314738, Func Offset: 0x288
	// Line 141, Address: 0x31474c, Func Offset: 0x29c
	// Line 177, Address: 0x314750, Func Offset: 0x2a0
	// Line 141, Address: 0x314754, Func Offset: 0x2a4
	// Line 144, Address: 0x314778, Func Offset: 0x2c8
	// Line 177, Address: 0x31477c, Func Offset: 0x2cc
	// Line 144, Address: 0x314784, Func Offset: 0x2d4
	// Line 177, Address: 0x314794, Func Offset: 0x2e4
	// Line 144, Address: 0x31479c, Func Offset: 0x2ec
	// Line 177, Address: 0x3147b0, Func Offset: 0x300
	// Line 144, Address: 0x3147b8, Func Offset: 0x308
	// Line 146, Address: 0x3147f0, Func Offset: 0x340
	// Line 127, Address: 0x3147f8, Func Offset: 0x348
	// Line 177, Address: 0x314810, Func Offset: 0x360
	// Func End, Address: 0x314828, Func Offset: 0x378
}

// zEntPlayerSlideFXInit__Fv
// Start address: 0x314830
void zEntPlayerSlideFXInit()
{
	uint32 i;
	// Line 29, Address: 0x314830, Func Offset: 0
	// Line 31, Address: 0x314834, Func Offset: 0x4
	// Line 29, Address: 0x314838, Func Offset: 0x8
	// Line 30, Address: 0x31483c, Func Offset: 0xc
	// Line 31, Address: 0x314844, Func Offset: 0x14
	// Line 35, Address: 0x31484c, Func Offset: 0x1c
	// Line 31, Address: 0x314850, Func Offset: 0x20
	// Line 35, Address: 0x314854, Func Offset: 0x24
	// Line 36, Address: 0x31485c, Func Offset: 0x2c
	// Line 39, Address: 0x314898, Func Offset: 0x68
	// Line 36, Address: 0x31489c, Func Offset: 0x6c
	// Line 39, Address: 0x3148a0, Func Offset: 0x70
	// Line 40, Address: 0x3148b8, Func Offset: 0x88
	// Line 41, Address: 0x3148d4, Func Offset: 0xa4
	// Line 42, Address: 0x3148f0, Func Offset: 0xc0
	// Line 43, Address: 0x31490c, Func Offset: 0xdc
	// Line 44, Address: 0x314928, Func Offset: 0xf8
	// Line 45, Address: 0x314944, Func Offset: 0x114
	// Line 46, Address: 0x314960, Func Offset: 0x130
	// Line 49, Address: 0x31497c, Func Offset: 0x14c
	// Line 50, Address: 0x314994, Func Offset: 0x164
	// Line 49, Address: 0x314998, Func Offset: 0x168
	// Line 50, Address: 0x31499c, Func Offset: 0x16c
	// Line 51, Address: 0x3149b0, Func Offset: 0x180
	// Func End, Address: 0x3149bc, Func Offset: 0x18c
}

