



void zFrag_ProjectileRenderer();
void zFrag_DefaultShrapnelUpdate(zFrag* frag);
void zFrag_DistortionManager(float32 dt);
void zFrag_DefaultFireUpdate(zFrag* frag);
void zFrag_DefaultDistortionUpdate(zFrag* frag);
void zFrag_ExplosionManager(float32 dt);
void zFrag_DefaultExplosionUpdate(zFrag* frag);
void zFrag_DefaultSoundUpdate(zFrag* frag);
void zFrag_LightningManager(float32 dt);
void zFrag_DefaultLightningUpdate(zFrag* frag);
void zFrag_ProjectileManager(float32 dt);
void zFrag_DefaultProjectileUpdate(zFrag* frag);
void zFrag_ParticleManager(float32 dt);
void zFrag_DefaultParticleUpdate(zFrag* frag);
uint8 zFrag_DefaultInit(zFrag* frag, zFragAsset* fasset);
void zFragLoc_InitDir(zFragLocation* loc, xVec3* vec, xModelInstance* parent);
void zFragLoc_InitVec(zFragLocation* loc, xVec3* vec, xModelInstance* parent);
void zFragLoc_InitMat(zFragLocation* loc, xMat4x3* mat, xModelInstance* parent);
void zShrapnel_CinematicInit(zShrapnelAsset* shrap, RpAtomic* cinModel, RwMatrixTag* animMat, xVec3* initVel, void(*cb)(zFrag*, zFragAsset*));
void CinFragCB(zFrag* frag, zFragAsset* asset);
void zShrapnel_DefaultInit(zShrapnelAsset* shrap, xModelInstance* parent, xVec3* initVel, void(*cb)(zFrag*, zFragAsset*));
void zShrapnel_Update(float32 dt);
void zShrapnel_SceneInit();
void zShrapnel_GameInit();
void zFrag_Free(zFrag* frag);
zFrag* zFrag_Alloc(zFragType type);

// zFrag_ProjectileRenderer__Fv
// Start address: 0x2e9a70
void zFrag_ProjectileRenderer()
{
	zFrag* frag;
	zFragProjectile* proj;
	xMat4x3& model_mat;
	float32 scale;
	// Line 2029, Address: 0x2e9a70, Func Offset: 0
	// Line 2030, Address: 0x2e9a74, Func Offset: 0x4
	// Line 2029, Address: 0x2e9a78, Func Offset: 0x8
	// Line 2030, Address: 0x2e9a84, Func Offset: 0x14
	// Line 2032, Address: 0x2e9a88, Func Offset: 0x18
	// Line 2036, Address: 0x2e9a94, Func Offset: 0x24
	// Line 2039, Address: 0x2e9a98, Func Offset: 0x28
	// Line 2042, Address: 0x2e9ab4, Func Offset: 0x44
	// Line 2047, Address: 0x2e9ac0, Func Offset: 0x50
	// Line 2048, Address: 0x2e9ac8, Func Offset: 0x58
	// Line 2047, Address: 0x2e9ad4, Func Offset: 0x64
	// Line 2048, Address: 0x2e9adc, Func Offset: 0x6c
	// Line 2050, Address: 0x2e9af8, Func Offset: 0x88
	// Line 2065, Address: 0x2e9b08, Func Offset: 0x98
	// Line 2067, Address: 0x2e9b10, Func Offset: 0xa0
	// Line 2056, Address: 0x2e9b44, Func Offset: 0xd4
	// Line 2067, Address: 0x2e9b48, Func Offset: 0xd8
	// Line 2056, Address: 0x2e9b58, Func Offset: 0xe8
	// Line 2067, Address: 0x2e9b64, Func Offset: 0xf4
	// Line 2056, Address: 0x2e9b68, Func Offset: 0xf8
	// Line 2057, Address: 0x2e9b6c, Func Offset: 0xfc
	// Line 2067, Address: 0x2e9b70, Func Offset: 0x100
	// Line 2057, Address: 0x2e9b78, Func Offset: 0x108
	// Line 2067, Address: 0x2e9b7c, Func Offset: 0x10c
	// Line 2057, Address: 0x2e9b84, Func Offset: 0x114
	// Line 2067, Address: 0x2e9b88, Func Offset: 0x118
	// Line 2058, Address: 0x2e9b90, Func Offset: 0x120
	// Line 2067, Address: 0x2e9b94, Func Offset: 0x124
	// Line 2058, Address: 0x2e9b9c, Func Offset: 0x12c
	// Line 2067, Address: 0x2e9ba0, Func Offset: 0x130
	// Line 2058, Address: 0x2e9ba8, Func Offset: 0x138
	// Line 2067, Address: 0x2e9bac, Func Offset: 0x13c
	// Line 2059, Address: 0x2e9bb4, Func Offset: 0x144
	// Line 2067, Address: 0x2e9bb8, Func Offset: 0x148
	// Line 2059, Address: 0x2e9bc0, Func Offset: 0x150
	// Line 2067, Address: 0x2e9bc4, Func Offset: 0x154
	// Line 2059, Address: 0x2e9bcc, Func Offset: 0x15c
	// Line 2067, Address: 0x2e9bd0, Func Offset: 0x160
	// Line 2062, Address: 0x2e9bdc, Func Offset: 0x16c
	// Line 2067, Address: 0x2e9be4, Func Offset: 0x174
	// Line 2070, Address: 0x2e9be8, Func Offset: 0x178
	// Line 2091, Address: 0x2e9bf0, Func Offset: 0x180
	// Line 2092, Address: 0x2e9bf4, Func Offset: 0x184
	// Line 2093, Address: 0x2e9c00, Func Offset: 0x190
	// Func End, Address: 0x2e9c14, Func Offset: 0x1a4
}

// zFrag_DefaultShrapnelUpdate__FP5zFragf
// Start address: 0x2e9c20
void zFrag_DefaultShrapnelUpdate(zFrag* frag)
{
	zShrapnelAsset* sasset;
	// Line 2015, Address: 0x2e9c20, Func Offset: 0
	// Line 2016, Address: 0x2e9c2c, Func Offset: 0xc
	// Line 2018, Address: 0x2e9c38, Func Offset: 0x18
	// Line 2020, Address: 0x2e9c4c, Func Offset: 0x2c
	// Line 2022, Address: 0x2e9c5c, Func Offset: 0x3c
	// Line 2023, Address: 0x2e9c64, Func Offset: 0x44
	// Func End, Address: 0x2e9c74, Func Offset: 0x54
}

// zFrag_DistortionManager__Ff
// Start address: 0x2e9c80
void zFrag_DistortionManager(float32 dt)
{
	zFrag* frag;
	zFrag* next;
	zFragDistortion* f;
	zFragDistortionAsset* a;
	// Line 1978, Address: 0x2e9c80, Func Offset: 0
	// Line 1979, Address: 0x2e9c84, Func Offset: 0x4
	// Line 1978, Address: 0x2e9c88, Func Offset: 0x8
	// Line 1979, Address: 0x2e9ca0, Func Offset: 0x20
	// Line 1982, Address: 0x2e9ca4, Func Offset: 0x24
	// Line 1987, Address: 0x2e9cac, Func Offset: 0x2c
	// Line 1984, Address: 0x2e9cb0, Func Offset: 0x30
	// Line 1989, Address: 0x2e9cb4, Func Offset: 0x34
	// Line 1987, Address: 0x2e9cbc, Func Offset: 0x3c
	// Line 1988, Address: 0x2e9cc4, Func Offset: 0x44
	// Line 1989, Address: 0x2e9cd0, Func Offset: 0x50
	// Line 1994, Address: 0x2e9ce0, Func Offset: 0x60
	// Line 1996, Address: 0x2e9ce4, Func Offset: 0x64
	// Line 1997, Address: 0x2e9cf4, Func Offset: 0x74
	// Line 1999, Address: 0x2e9cf8, Func Offset: 0x78
	// Line 2011, Address: 0x2e9d10, Func Offset: 0x90
	// Line 2012, Address: 0x2e9d18, Func Offset: 0x98
	// Line 1997, Address: 0x2e9d34, Func Offset: 0xb4
	// Line 2012, Address: 0x2e9d38, Func Offset: 0xb8
	// Line 2001, Address: 0x2e9d4c, Func Offset: 0xcc
	// Line 2012, Address: 0x2e9d50, Func Offset: 0xd0
	// Line 2002, Address: 0x2e9d58, Func Offset: 0xd8
	// Line 2012, Address: 0x2e9d5c, Func Offset: 0xdc
	// Line 2004, Address: 0x2e9d70, Func Offset: 0xf0
	// Line 2012, Address: 0x2e9d74, Func Offset: 0xf4
	// Line 2006, Address: 0x2e9d8c, Func Offset: 0x10c
	// Line 2012, Address: 0x2e9d98, Func Offset: 0x118
	// Func End, Address: 0x2e9db8, Func Offset: 0x138
}

// zFrag_DefaultFireUpdate__FP5zFragf
// Start address: 0x2e9dc0
void zFrag_DefaultFireUpdate(zFrag* frag)
{
	zFragFireAsset* a;
	spawn_data spawn;
	// Line 1946, Address: 0x2e9dc0, Func Offset: 0
	// Line 1949, Address: 0x2e9dd4, Func Offset: 0x14
	// Line 1957, Address: 0x2e9dd8, Func Offset: 0x18
	// Line 1963, Address: 0x2e9ddc, Func Offset: 0x1c
	// Line 1958, Address: 0x2e9de0, Func Offset: 0x20
	// Line 1959, Address: 0x2e9de8, Func Offset: 0x28
	// Line 1960, Address: 0x2e9df0, Func Offset: 0x30
	// Line 1963, Address: 0x2e9df8, Func Offset: 0x38
	// Line 1961, Address: 0x2e9dfc, Func Offset: 0x3c
	// Line 1962, Address: 0x2e9e00, Func Offset: 0x40
	// Line 1965, Address: 0x2e9e04, Func Offset: 0x44
	// Line 1966, Address: 0x2e9e14, Func Offset: 0x54
	// Line 1967, Address: 0x2e9e20, Func Offset: 0x60
	// Line 1966, Address: 0x2e9e24, Func Offset: 0x64
	// Line 1967, Address: 0x2e9e28, Func Offset: 0x68
	// Line 1968, Address: 0x2e9e54, Func Offset: 0x94
	// Line 1967, Address: 0x2e9e58, Func Offset: 0x98
	// Line 1968, Address: 0x2e9e5c, Func Offset: 0x9c
	// Line 1971, Address: 0x2e9e68, Func Offset: 0xa8
	// Line 1974, Address: 0x2e9e78, Func Offset: 0xb8
	// Line 1975, Address: 0x2e9e80, Func Offset: 0xc0
	// Line 1965, Address: 0x2e9e8c, Func Offset: 0xcc
	// Line 1975, Address: 0x2e9e98, Func Offset: 0xd8
	// Func End, Address: 0x2e9eac, Func Offset: 0xec
}

// zFrag_DefaultDistortionUpdate__FP5zFragf
// Start address: 0x2e9eb0
void zFrag_DefaultDistortionUpdate(zFrag* frag)
{
	zFragDistortion* f;
	zFragDistortionAsset* a;
	int32 flags;
	// Line 1903, Address: 0x2e9eb0, Func Offset: 0
	// Line 1905, Address: 0x2e9ec8, Func Offset: 0x18
	// Line 1907, Address: 0x2e9ecc, Func Offset: 0x1c
	// Line 1908, Address: 0x2e9edc, Func Offset: 0x2c
	// Line 1914, Address: 0x2e9eec, Func Offset: 0x3c
	// Line 1916, Address: 0x2e9ef0, Func Offset: 0x40
	// Line 1917, Address: 0x2e9f20, Func Offset: 0x70
	// Line 1923, Address: 0x2e9f30, Func Offset: 0x80
	// Line 1926, Address: 0x2e9f50, Func Offset: 0xa0
	// Line 1925, Address: 0x2e9f54, Func Offset: 0xa4
	// Line 1929, Address: 0x2e9f58, Func Offset: 0xa8
	// Line 1933, Address: 0x2e9f78, Func Offset: 0xc8
	// Line 1934, Address: 0x2e9f8c, Func Offset: 0xdc
	// Line 1937, Address: 0x2e9f9c, Func Offset: 0xec
	// Line 1938, Address: 0x2e9fa0, Func Offset: 0xf0
	// Line 1937, Address: 0x2e9fa4, Func Offset: 0xf4
	// Line 1938, Address: 0x2e9fa8, Func Offset: 0xf8
	// Line 1937, Address: 0x2e9fac, Func Offset: 0xfc
	// Line 1938, Address: 0x2e9fb0, Func Offset: 0x100
	// Line 1941, Address: 0x2e9fb8, Func Offset: 0x108
	// Line 1942, Address: 0x2e9fc8, Func Offset: 0x118
	// Line 1943, Address: 0x2e9fd4, Func Offset: 0x124
	// Line 1910, Address: 0x2e9fdc, Func Offset: 0x12c
	// Line 1943, Address: 0x2e9fe0, Func Offset: 0x130
	// Func End, Address: 0x2ea000, Func Offset: 0x150
}

// zFrag_ExplosionManager__Ff
// Start address: 0x2ea000
void zFrag_ExplosionManager(float32 dt)
{
	zFrag* frag;
	zFrag* next;
	zFragExplosion* f;
	zFragExplosionAsset* a;
	xVec3 loc;
	// Line 1870, Address: 0x2ea000, Func Offset: 0
	// Line 1871, Address: 0x2ea004, Func Offset: 0x4
	// Line 1870, Address: 0x2ea008, Func Offset: 0x8
	// Line 1871, Address: 0x2ea01c, Func Offset: 0x1c
	// Line 1874, Address: 0x2ea020, Func Offset: 0x20
	// Line 1883, Address: 0x2ea028, Func Offset: 0x28
	// Line 1876, Address: 0x2ea02c, Func Offset: 0x2c
	// Line 1880, Address: 0x2ea030, Func Offset: 0x30
	// Line 1885, Address: 0x2ea034, Func Offset: 0x34
	// Line 1883, Address: 0x2ea03c, Func Offset: 0x3c
	// Line 1884, Address: 0x2ea044, Func Offset: 0x44
	// Line 1885, Address: 0x2ea050, Func Offset: 0x50
	// Line 1887, Address: 0x2ea060, Func Offset: 0x60
	// Line 1888, Address: 0x2ea068, Func Offset: 0x68
	// Line 1890, Address: 0x2ea070, Func Offset: 0x70
	// Line 1895, Address: 0x2ea078, Func Offset: 0x78
	// Line 1896, Address: 0x2ea088, Func Offset: 0x88
	// Line 1898, Address: 0x2ea0a0, Func Offset: 0xa0
	// Line 1899, Address: 0x2ea0a4, Func Offset: 0xa4
	// Line 1900, Address: 0x2ea0b0, Func Offset: 0xb0
	// Func End, Address: 0x2ea0cc, Func Offset: 0xcc
}

// zFrag_DefaultExplosionUpdate__FP5zFragf
// Start address: 0x2ea0d0
void zFrag_DefaultExplosionUpdate(zFrag* frag)
{
	zFragExplosion* f;
	zFragExplosionAsset* a;
	xVec3 loc;
	int32 type;
	// Line 1837, Address: 0x2ea0d0, Func Offset: 0
	// Line 1840, Address: 0x2ea0e8, Func Offset: 0x18
	// Line 1842, Address: 0x2ea0ec, Func Offset: 0x1c
	// Line 1846, Address: 0x2ea10c, Func Offset: 0x3c
	// Line 1843, Address: 0x2ea12c, Func Offset: 0x5c
	// Line 1846, Address: 0x2ea138, Func Offset: 0x68
	// Line 1844, Address: 0x2ea15c, Func Offset: 0x8c
	// Line 1846, Address: 0x2ea160, Func Offset: 0x90
	// Line 1848, Address: 0x2ea168, Func Offset: 0x98
	// Line 1849, Address: 0x2ea170, Func Offset: 0xa0
	// Line 1852, Address: 0x2ea180, Func Offset: 0xb0
	// Line 1855, Address: 0x2ea194, Func Offset: 0xc4
	// Line 1856, Address: 0x2ea1a8, Func Offset: 0xd8
	// Line 1857, Address: 0x2ea1b8, Func Offset: 0xe8
	// Line 1858, Address: 0x2ea1bc, Func Offset: 0xec
	// Line 1857, Address: 0x2ea1c0, Func Offset: 0xf0
	// Line 1858, Address: 0x2ea1c4, Func Offset: 0xf4
	// Line 1857, Address: 0x2ea1c8, Func Offset: 0xf8
	// Line 1858, Address: 0x2ea1cc, Func Offset: 0xfc
	// Line 1859, Address: 0x2ea1d4, Func Offset: 0x104
	// Line 1860, Address: 0x2ea1e4, Func Offset: 0x114
	// Line 1867, Address: 0x2ea1f0, Func Offset: 0x120
	// Line 1864, Address: 0x2ea1f8, Func Offset: 0x128
	// Line 1867, Address: 0x2ea1fc, Func Offset: 0x12c
	// Func End, Address: 0x2ea22c, Func Offset: 0x15c
}

// zFrag_DefaultSoundUpdate__FP5zFragf
// Start address: 0x2ea230
void zFrag_DefaultSoundUpdate(zFrag* frag)
{
	zFragSound* sound;
	zFragSoundAsset* sasset;
	xVec3 source;
	// Line 1775, Address: 0x2ea230, Func Offset: 0
	// Line 1781, Address: 0x2ea238, Func Offset: 0x8
	// Line 1775, Address: 0x2ea23c, Func Offset: 0xc
	// Line 1777, Address: 0x2ea24c, Func Offset: 0x1c
	// Line 1781, Address: 0x2ea250, Func Offset: 0x20
	// Line 1776, Address: 0x2ea254, Func Offset: 0x24
	// Line 1781, Address: 0x2ea258, Func Offset: 0x28
	// Line 1786, Address: 0x2ea260, Func Offset: 0x30
	// Line 1791, Address: 0x2ea290, Func Offset: 0x60
	// Line 1792, Address: 0x2ea2a4, Func Offset: 0x74
	// Line 1795, Address: 0x2ea2b4, Func Offset: 0x84
	// Line 1796, Address: 0x2ea2b8, Func Offset: 0x88
	// Line 1795, Address: 0x2ea2bc, Func Offset: 0x8c
	// Line 1796, Address: 0x2ea2c0, Func Offset: 0x90
	// Line 1795, Address: 0x2ea2c4, Func Offset: 0x94
	// Line 1796, Address: 0x2ea2c8, Func Offset: 0x98
	// Line 1799, Address: 0x2ea2d0, Func Offset: 0xa0
	// Line 1800, Address: 0x2ea2e0, Func Offset: 0xb0
	// Line 1802, Address: 0x2ea2ec, Func Offset: 0xbc
	// Func End, Address: 0x2ea304, Func Offset: 0xd4
}

// zFrag_LightningManager__Ff
// Start address: 0x2ea310
void zFrag_LightningManager(float32 dt)
{
	zFrag* frag;
	zFragLightning* ligh;
	zFragLightningAsset* lasset;
	zLightning* inst;
	zFrag* next;
	xVec3 start;
	xVec3 end;
	// Line 1721, Address: 0x2ea310, Func Offset: 0
	// Line 1722, Address: 0x2ea314, Func Offset: 0x4
	// Line 1721, Address: 0x2ea318, Func Offset: 0x8
	// Line 1722, Address: 0x2ea340, Func Offset: 0x30
	// Line 1727, Address: 0x2ea344, Func Offset: 0x34
	// Line 1735, Address: 0x2ea35c, Func Offset: 0x4c
	// Line 1728, Address: 0x2ea360, Func Offset: 0x50
	// Line 1731, Address: 0x2ea364, Func Offset: 0x54
	// Line 1737, Address: 0x2ea368, Func Offset: 0x58
	// Line 1732, Address: 0x2ea36c, Func Offset: 0x5c
	// Line 1735, Address: 0x2ea370, Func Offset: 0x60
	// Line 1736, Address: 0x2ea378, Func Offset: 0x68
	// Line 1737, Address: 0x2ea384, Func Offset: 0x74
	// Line 1742, Address: 0x2ea39c, Func Offset: 0x8c
	// Line 1746, Address: 0x2ea3a8, Func Offset: 0x98
	// Line 1752, Address: 0x2ea3b0, Func Offset: 0xa0
	// Line 1756, Address: 0x2ea3c8, Func Offset: 0xb8
	// Line 1762, Address: 0x2ea3d8, Func Offset: 0xc8
	// Line 1766, Address: 0x2ea3f0, Func Offset: 0xe0
	// Line 1771, Address: 0x2ea400, Func Offset: 0xf0
	// Line 1772, Address: 0x2ea408, Func Offset: 0xf8
	// Line 1740, Address: 0x2ea420, Func Offset: 0x110
	// Line 1772, Address: 0x2ea428, Func Offset: 0x118
	// Line 1742, Address: 0x2ea42c, Func Offset: 0x11c
	// Line 1772, Address: 0x2ea430, Func Offset: 0x120
	// Line 1747, Address: 0x2ea444, Func Offset: 0x134
	// Line 1772, Address: 0x2ea448, Func Offset: 0x138
	// Line 1750, Address: 0x2ea450, Func Offset: 0x140
	// Line 1772, Address: 0x2ea458, Func Offset: 0x148
	// Line 1757, Address: 0x2ea45c, Func Offset: 0x14c
	// Line 1772, Address: 0x2ea460, Func Offset: 0x150
	// Line 1760, Address: 0x2ea468, Func Offset: 0x158
	// Line 1772, Address: 0x2ea470, Func Offset: 0x160
	// Func End, Address: 0x2ea4a0, Func Offset: 0x190
}

// zFrag_DefaultLightningUpdate__FP5zFragf
// Start address: 0x2ea4a0
void zFrag_DefaultLightningUpdate(zFrag* frag)
{
	zFragLightningAsset* lasset;
	xVec3 start;
	xVec3 end;
	// Line 1681, Address: 0x2ea4a0, Func Offset: 0
	// Line 1687, Address: 0x2ea4a4, Func Offset: 0x4
	// Line 1681, Address: 0x2ea4a8, Func Offset: 0x8
	// Line 1687, Address: 0x2ea4ac, Func Offset: 0xc
	// Line 1681, Address: 0x2ea4b0, Func Offset: 0x10
	// Line 1688, Address: 0x2ea4b4, Func Offset: 0x14
	// Line 1681, Address: 0x2ea4b8, Func Offset: 0x18
	// Line 1682, Address: 0x2ea4c0, Func Offset: 0x20
	// Line 1689, Address: 0x2ea4c4, Func Offset: 0x24
	// Line 1688, Address: 0x2ea4cc, Func Offset: 0x2c
	// Line 1689, Address: 0x2ea4d0, Func Offset: 0x30
	// Line 1688, Address: 0x2ea4d4, Func Offset: 0x34
	// Line 1687, Address: 0x2ea4d8, Func Offset: 0x38
	// Line 1690, Address: 0x2ea4dc, Func Offset: 0x3c
	// Line 1693, Address: 0x2ea4e8, Func Offset: 0x48
	// Line 1697, Address: 0x2ea4fc, Func Offset: 0x5c
	// Line 1701, Address: 0x2ea500, Func Offset: 0x60
	// Line 1697, Address: 0x2ea504, Func Offset: 0x64
	// Line 1698, Address: 0x2ea50c, Func Offset: 0x6c
	// Line 1697, Address: 0x2ea510, Func Offset: 0x70
	// Line 1701, Address: 0x2ea514, Func Offset: 0x74
	// Line 1708, Address: 0x2ea528, Func Offset: 0x88
	// Line 1709, Address: 0x2ea53c, Func Offset: 0x9c
	// Line 1712, Address: 0x2ea54c, Func Offset: 0xac
	// Line 1713, Address: 0x2ea550, Func Offset: 0xb0
	// Line 1712, Address: 0x2ea554, Func Offset: 0xb4
	// Line 1713, Address: 0x2ea558, Func Offset: 0xb8
	// Line 1712, Address: 0x2ea55c, Func Offset: 0xbc
	// Line 1713, Address: 0x2ea560, Func Offset: 0xc0
	// Line 1716, Address: 0x2ea568, Func Offset: 0xc8
	// Line 1717, Address: 0x2ea578, Func Offset: 0xd8
	// Line 1718, Address: 0x2ea584, Func Offset: 0xe4
	// Func End, Address: 0x2ea598, Func Offset: 0xf8
}

// zFrag_ProjectileManager__Ff
// Start address: 0x2ea5a0
void zFrag_ProjectileManager(float32 dt)
{
	zFrag* frag;
	zFragProjectile* proj;
	zFrag* next;
	int32 killed;
	float32 percent;
	float32 minScale;
	float32 newScale;
	xVec3 back;
	xMat3x3 spin;
	// Line 1524, Address: 0x2ea5a0, Func Offset: 0
	// Line 1525, Address: 0x2ea5a4, Func Offset: 0x4
	// Line 1524, Address: 0x2ea5a8, Func Offset: 0x8
	// Line 1525, Address: 0x2ea5d8, Func Offset: 0x38
	// Line 1528, Address: 0x2ea5dc, Func Offset: 0x3c
	// Line 1532, Address: 0x2ea5f4, Func Offset: 0x54
	// Line 1529, Address: 0x2ea5f8, Func Offset: 0x58
	// Line 1535, Address: 0x2ea5fc, Func Offset: 0x5c
	// Line 1532, Address: 0x2ea600, Func Offset: 0x60
	// Line 1533, Address: 0x2ea608, Func Offset: 0x68
	// Line 1535, Address: 0x2ea614, Func Offset: 0x74
	// Line 1536, Address: 0x2ea624, Func Offset: 0x84
	// Line 1677, Address: 0x2ea6a8, Func Offset: 0x108
	// Line 1678, Address: 0x2ea6b0, Func Offset: 0x110
	// Line 1537, Address: 0x2ea6c0, Func Offset: 0x120
	// Line 1678, Address: 0x2ea6c4, Func Offset: 0x124
	// Line 1539, Address: 0x2ea6d0, Func Offset: 0x130
	// Line 1678, Address: 0x2ea6d4, Func Offset: 0x134
	// Line 1543, Address: 0x2ea6e0, Func Offset: 0x140
	// Line 1678, Address: 0x2ea6e4, Func Offset: 0x144
	// Line 1544, Address: 0x2ea6f4, Func Offset: 0x154
	// Line 1678, Address: 0x2ea6f8, Func Offset: 0x158
	// Line 1597, Address: 0x2ea704, Func Offset: 0x164
	// Line 1678, Address: 0x2ea708, Func Offset: 0x168
	// Line 1599, Address: 0x2ea714, Func Offset: 0x174
	// Line 1678, Address: 0x2ea718, Func Offset: 0x178
	// Line 1600, Address: 0x2ea71c, Func Offset: 0x17c
	// Line 1599, Address: 0x2ea720, Func Offset: 0x180
	// Line 1600, Address: 0x2ea724, Func Offset: 0x184
	// Line 1678, Address: 0x2ea72c, Func Offset: 0x18c
	// Line 1599, Address: 0x2ea730, Func Offset: 0x190
	// Line 1678, Address: 0x2ea734, Func Offset: 0x194
	// Line 1600, Address: 0x2ea74c, Func Offset: 0x1ac
	// Line 1678, Address: 0x2ea750, Func Offset: 0x1b0
	// Line 1600, Address: 0x2ea768, Func Offset: 0x1c8
	// Line 1678, Address: 0x2ea76c, Func Offset: 0x1cc
	// Line 1600, Address: 0x2ea79c, Func Offset: 0x1fc
	// Line 1678, Address: 0x2ea7b0, Func Offset: 0x210
	// Line 1600, Address: 0x2ea7b4, Func Offset: 0x214
	// Line 1678, Address: 0x2ea7b8, Func Offset: 0x218
	// Line 1600, Address: 0x2ea7c8, Func Offset: 0x228
	// Line 1678, Address: 0x2ea7d8, Func Offset: 0x238
	// Line 1549, Address: 0x2ea850, Func Offset: 0x2b0
	// Line 1678, Address: 0x2ea854, Func Offset: 0x2b4
	// Line 1549, Address: 0x2ea858, Func Offset: 0x2b8
	// Line 1678, Address: 0x2ea85c, Func Offset: 0x2bc
	// Line 1551, Address: 0x2ea890, Func Offset: 0x2f0
	// Line 1678, Address: 0x2ea898, Func Offset: 0x2f8
	// Line 1556, Address: 0x2ea8c0, Func Offset: 0x320
	// Line 1678, Address: 0x2ea8c4, Func Offset: 0x324
	// Line 1556, Address: 0x2ea8c8, Func Offset: 0x328
	// Line 1559, Address: 0x2ea8d4, Func Offset: 0x334
	// Line 1678, Address: 0x2ea8e0, Func Offset: 0x340
	// Line 1559, Address: 0x2ea8ec, Func Offset: 0x34c
	// Line 1678, Address: 0x2ea8f4, Func Offset: 0x354
	// Line 1559, Address: 0x2ea900, Func Offset: 0x360
	// Line 1678, Address: 0x2ea908, Func Offset: 0x368
	// Line 1561, Address: 0x2ea914, Func Offset: 0x374
	// Line 1678, Address: 0x2ea918, Func Offset: 0x378
	// Line 1561, Address: 0x2ea920, Func Offset: 0x380
	// Line 1678, Address: 0x2ea924, Func Offset: 0x384
	// Line 1561, Address: 0x2ea92c, Func Offset: 0x38c
	// Line 1678, Address: 0x2ea930, Func Offset: 0x390
	// Line 1573, Address: 0x2ea944, Func Offset: 0x3a4
	// Line 1678, Address: 0x2ea950, Func Offset: 0x3b0
	// Line 1573, Address: 0x2ea95c, Func Offset: 0x3bc
	// Line 1678, Address: 0x2ea964, Func Offset: 0x3c4
	// Line 1573, Address: 0x2ea970, Func Offset: 0x3d0
	// Line 1678, Address: 0x2ea978, Func Offset: 0x3d8
	// Line 1578, Address: 0x2ea990, Func Offset: 0x3f0
	// Line 1678, Address: 0x2ea994, Func Offset: 0x3f4
	// Line 1589, Address: 0x2ea99c, Func Offset: 0x3fc
	// Line 1592, Address: 0x2ea9a0, Func Offset: 0x400
	// Line 1678, Address: 0x2ea9ac, Func Offset: 0x40c
	// Line 1592, Address: 0x2ea9b0, Func Offset: 0x410
	// Line 1678, Address: 0x2ea9b4, Func Offset: 0x414
	// Line 1592, Address: 0x2ea9c8, Func Offset: 0x428
	// Line 1678, Address: 0x2ea9cc, Func Offset: 0x42c
	// Line 1592, Address: 0x2ea9e4, Func Offset: 0x444
	// Line 1678, Address: 0x2ea9e8, Func Offset: 0x448
	// Line 1592, Address: 0x2eaa18, Func Offset: 0x478
	// Line 1678, Address: 0x2eaa28, Func Offset: 0x488
	// Line 1592, Address: 0x2eaa2c, Func Offset: 0x48c
	// Line 1678, Address: 0x2eaa30, Func Offset: 0x490
	// Line 1592, Address: 0x2eaa40, Func Offset: 0x4a0
	// Line 1678, Address: 0x2eaa44, Func Offset: 0x4a4
	// Line 1602, Address: 0x2eaa4c, Func Offset: 0x4ac
	// Line 1678, Address: 0x2eaa50, Func Offset: 0x4b0
	// Line 1606, Address: 0x2eaa68, Func Offset: 0x4c8
	// Line 1678, Address: 0x2eaa6c, Func Offset: 0x4cc
	// Line 1606, Address: 0x2eaa74, Func Offset: 0x4d4
	// Line 1678, Address: 0x2eaa7c, Func Offset: 0x4dc
	// Line 1614, Address: 0x2eaa84, Func Offset: 0x4e4
	// Line 1678, Address: 0x2eaa88, Func Offset: 0x4e8
	// Line 1614, Address: 0x2eaa90, Func Offset: 0x4f0
	// Line 1678, Address: 0x2eaa94, Func Offset: 0x4f4
	// Line 1614, Address: 0x2eaa98, Func Offset: 0x4f8
	// Line 1609, Address: 0x2eaa9c, Func Offset: 0x4fc
	// Line 1678, Address: 0x2eaaac, Func Offset: 0x50c
	// Line 1618, Address: 0x2eaab8, Func Offset: 0x518
	// Line 1678, Address: 0x2eaabc, Func Offset: 0x51c
	// Line 1619, Address: 0x2eaacc, Func Offset: 0x52c
	// Line 1678, Address: 0x2eaad8, Func Offset: 0x538
	// Line 1621, Address: 0x2eaae0, Func Offset: 0x540
	// Line 1622, Address: 0x2eaae4, Func Offset: 0x544
	// Line 1678, Address: 0x2eaae8, Func Offset: 0x548
	// Line 1626, Address: 0x2eaaec, Func Offset: 0x54c
	// Line 1678, Address: 0x2eaaf0, Func Offset: 0x550
	// Line 1635, Address: 0x2eaaf4, Func Offset: 0x554
	// Line 1678, Address: 0x2eaafc, Func Offset: 0x55c
	// Line 1633, Address: 0x2eab00, Func Offset: 0x560
	// Line 1678, Address: 0x2eab04, Func Offset: 0x564
	// Line 1633, Address: 0x2eab3c, Func Offset: 0x59c
	// Line 1678, Address: 0x2eab44, Func Offset: 0x5a4
	// Line 1633, Address: 0x2eab50, Func Offset: 0x5b0
	// Line 1678, Address: 0x2eab58, Func Offset: 0x5b8
	// Line 1633, Address: 0x2eab64, Func Offset: 0x5c4
	// Line 1678, Address: 0x2eab6c, Func Offset: 0x5cc
	// Line 1635, Address: 0x2eab7c, Func Offset: 0x5dc
	// Line 1678, Address: 0x2eab80, Func Offset: 0x5e0
	// Line 1635, Address: 0x2eab84, Func Offset: 0x5e4
	// Line 1678, Address: 0x2eab88, Func Offset: 0x5e8
	// Line 1635, Address: 0x2eab8c, Func Offset: 0x5ec
	// Line 1678, Address: 0x2eab94, Func Offset: 0x5f4
	// Line 1638, Address: 0x2eaba0, Func Offset: 0x600
	// Line 1678, Address: 0x2eaba4, Func Offset: 0x604
	// Line 1643, Address: 0x2eabb0, Func Offset: 0x610
	// Line 1678, Address: 0x2eabbc, Func Offset: 0x61c
	// Line 1641, Address: 0x2eabcc, Func Offset: 0x62c
	// Line 1643, Address: 0x2eabe8, Func Offset: 0x648
	// Line 1678, Address: 0x2eabec, Func Offset: 0x64c
	// Line 1645, Address: 0x2eabf4, Func Offset: 0x654
	// Line 1678, Address: 0x2eabf8, Func Offset: 0x658
	// Line 1647, Address: 0x2eac00, Func Offset: 0x660
	// Line 1678, Address: 0x2eac04, Func Offset: 0x664
	// Line 1647, Address: 0x2eac0c, Func Offset: 0x66c
	// Line 1678, Address: 0x2eac10, Func Offset: 0x670
	// Line 1647, Address: 0x2eac1c, Func Offset: 0x67c
	// Line 1678, Address: 0x2eac20, Func Offset: 0x680
	// Line 1649, Address: 0x2eac34, Func Offset: 0x694
	// Line 1583, Address: 0x2eac40, Func Offset: 0x6a0
	// Line 1678, Address: 0x2eac44, Func Offset: 0x6a4
	// Line 1583, Address: 0x2eac48, Func Offset: 0x6a8
	// Line 1678, Address: 0x2eac4c, Func Offset: 0x6ac
	// Line 1582, Address: 0x2eac58, Func Offset: 0x6b8
	// Line 1678, Address: 0x2eac64, Func Offset: 0x6c4
	// Line 1582, Address: 0x2eac78, Func Offset: 0x6d8
	// Line 1678, Address: 0x2eac84, Func Offset: 0x6e4
	// Line 1582, Address: 0x2eac98, Func Offset: 0x6f8
	// Line 1678, Address: 0x2eaca4, Func Offset: 0x704
	// Line 1585, Address: 0x2eacb4, Func Offset: 0x714
	// Line 1678, Address: 0x2eacb8, Func Offset: 0x718
	// Line 1585, Address: 0x2eacd0, Func Offset: 0x730
	// Line 1678, Address: 0x2eacd4, Func Offset: 0x734
	// Line 1585, Address: 0x2eacdc, Func Offset: 0x73c
	// Line 1587, Address: 0x2eacf4, Func Offset: 0x754
	// Line 1678, Address: 0x2ead00, Func Offset: 0x760
	// Line 1587, Address: 0x2ead08, Func Offset: 0x768
	// Line 1678, Address: 0x2ead20, Func Offset: 0x780
	// Line 1644, Address: 0x2ead38, Func Offset: 0x798
	// Line 1678, Address: 0x2ead3c, Func Offset: 0x79c
	// Line 1644, Address: 0x2ead40, Func Offset: 0x7a0
	// Line 1678, Address: 0x2ead50, Func Offset: 0x7b0
	// Line 1644, Address: 0x2ead54, Func Offset: 0x7b4
	// Line 1678, Address: 0x2ead5c, Func Offset: 0x7bc
	// Func End, Address: 0x2eadd8, Func Offset: 0x838
}

// zFrag_DefaultProjectileUpdate__FP5zFragf
// Start address: 0x2eade0
void zFrag_DefaultProjectileUpdate(zFrag* frag)
{
	zFragProjectileAsset* passet;
	// Line 1470, Address: 0x2eade0, Func Offset: 0
	// Line 1471, Address: 0x2eadfc, Func Offset: 0x1c
	// Line 1473, Address: 0x2eae00, Func Offset: 0x20
	// Line 1475, Address: 0x2eae10, Func Offset: 0x30
	// Line 1481, Address: 0x2eb334, Func Offset: 0x554
	// Line 1493, Address: 0x2eb348, Func Offset: 0x568
	// Line 1494, Address: 0x2eb35c, Func Offset: 0x57c
	// Line 1497, Address: 0x2eb36c, Func Offset: 0x58c
	// Line 1498, Address: 0x2eb370, Func Offset: 0x590
	// Line 1497, Address: 0x2eb374, Func Offset: 0x594
	// Line 1498, Address: 0x2eb378, Func Offset: 0x598
	// Line 1497, Address: 0x2eb37c, Func Offset: 0x59c
	// Line 1498, Address: 0x2eb380, Func Offset: 0x5a0
	// Line 1501, Address: 0x2eb388, Func Offset: 0x5a8
	// Line 1502, Address: 0x2eb398, Func Offset: 0x5b8
	// Line 1503, Address: 0x2eb3a4, Func Offset: 0x5c4
	// Line 1475, Address: 0x2eb3b0, Func Offset: 0x5d0
	// Line 1503, Address: 0x2eb3b4, Func Offset: 0x5d4
	// Line 1475, Address: 0x2eb3b8, Func Offset: 0x5d8
	// Line 1503, Address: 0x2eb3bc, Func Offset: 0x5dc
	// Line 1475, Address: 0x2eb3d4, Func Offset: 0x5f4
	// Line 1503, Address: 0x2eb3d8, Func Offset: 0x5f8
	// Line 1475, Address: 0x2eb3e8, Func Offset: 0x608
	// Line 1503, Address: 0x2eb3f0, Func Offset: 0x610
	// Line 1475, Address: 0x2eb404, Func Offset: 0x624
	// Line 1503, Address: 0x2eb414, Func Offset: 0x634
	// Line 1475, Address: 0x2eb428, Func Offset: 0x648
	// Line 1503, Address: 0x2eb430, Func Offset: 0x650
	// Line 1475, Address: 0x2eb438, Func Offset: 0x658
	// Line 1503, Address: 0x2eb46c, Func Offset: 0x68c
	// Line 1475, Address: 0x2eb470, Func Offset: 0x690
	// Line 1503, Address: 0x2eb48c, Func Offset: 0x6ac
	// Line 1475, Address: 0x2eb494, Func Offset: 0x6b4
	// Line 1503, Address: 0x2eb49c, Func Offset: 0x6bc
	// Line 1475, Address: 0x2eb4a4, Func Offset: 0x6c4
	// Line 1503, Address: 0x2eb4dc, Func Offset: 0x6fc
	// Line 1475, Address: 0x2eb4e0, Func Offset: 0x700
	// Line 1503, Address: 0x2eb4f4, Func Offset: 0x714
	// Line 1475, Address: 0x2eb4fc, Func Offset: 0x71c
	// Line 1503, Address: 0x2eb504, Func Offset: 0x724
	// Line 1475, Address: 0x2eb50c, Func Offset: 0x72c
	// Line 1503, Address: 0x2eb554, Func Offset: 0x774
	// Line 1475, Address: 0x2eb558, Func Offset: 0x778
	// Line 1503, Address: 0x2eb56c, Func Offset: 0x78c
	// Line 1475, Address: 0x2eb570, Func Offset: 0x790
	// Line 1503, Address: 0x2eb580, Func Offset: 0x7a0
	// Line 1475, Address: 0x2eb5b0, Func Offset: 0x7d0
	// Line 1503, Address: 0x2eb5b4, Func Offset: 0x7d4
	// Line 1475, Address: 0x2eb5c0, Func Offset: 0x7e0
	// Line 1503, Address: 0x2eb5cc, Func Offset: 0x7ec
	// Line 1475, Address: 0x2eb5d8, Func Offset: 0x7f8
	// Line 1503, Address: 0x2eb5dc, Func Offset: 0x7fc
	// Line 1475, Address: 0x2eb5e0, Func Offset: 0x800
	// Line 1503, Address: 0x2eb5e8, Func Offset: 0x808
	// Line 1475, Address: 0x2eb5ec, Func Offset: 0x80c
	// Line 1503, Address: 0x2eb5f0, Func Offset: 0x810
	// Line 1475, Address: 0x2eb5fc, Func Offset: 0x81c
	// Line 1503, Address: 0x2eb600, Func Offset: 0x820
	// Line 1475, Address: 0x2eb608, Func Offset: 0x828
	// Line 1503, Address: 0x2eb60c, Func Offset: 0x82c
	// Line 1475, Address: 0x2eb614, Func Offset: 0x834
	// Line 1503, Address: 0x2eb618, Func Offset: 0x838
	// Line 1475, Address: 0x2eb62c, Func Offset: 0x84c
	// Line 1503, Address: 0x2eb634, Func Offset: 0x854
	// Line 1475, Address: 0x2eb640, Func Offset: 0x860
	// Line 1503, Address: 0x2eb648, Func Offset: 0x868
	// Line 1475, Address: 0x2eb64c, Func Offset: 0x86c
	// Line 1503, Address: 0x2eb654, Func Offset: 0x874
	// Line 1475, Address: 0x2eb65c, Func Offset: 0x87c
	// Line 1503, Address: 0x2eb660, Func Offset: 0x880
	// Line 1475, Address: 0x2eb668, Func Offset: 0x888
	// Line 1503, Address: 0x2eb674, Func Offset: 0x894
	// Line 1475, Address: 0x2eb6c8, Func Offset: 0x8e8
	// Line 1503, Address: 0x2eb6d0, Func Offset: 0x8f0
	// Line 1475, Address: 0x2eb6d8, Func Offset: 0x8f8
	// Line 1503, Address: 0x2eb720, Func Offset: 0x940
	// Line 1475, Address: 0x2eb724, Func Offset: 0x944
	// Line 1503, Address: 0x2eb728, Func Offset: 0x948
	// Line 1475, Address: 0x2eb730, Func Offset: 0x950
	// Line 1503, Address: 0x2eb738, Func Offset: 0x958
	// Line 1475, Address: 0x2eb740, Func Offset: 0x960
	// Line 1503, Address: 0x2eb788, Func Offset: 0x9a8
	// Line 1475, Address: 0x2eb78c, Func Offset: 0x9ac
	// Line 1503, Address: 0x2eb790, Func Offset: 0x9b0
	// Line 1475, Address: 0x2eb798, Func Offset: 0x9b8
	// Line 1503, Address: 0x2eb7a0, Func Offset: 0x9c0
	// Line 1475, Address: 0x2eb7a8, Func Offset: 0x9c8
	// Line 1503, Address: 0x2eb7dc, Func Offset: 0x9fc
	// Line 1475, Address: 0x2eb7e0, Func Offset: 0xa00
	// Line 1503, Address: 0x2eb7ec, Func Offset: 0xa0c
	// Line 1475, Address: 0x2eb7f0, Func Offset: 0xa10
	// Line 1503, Address: 0x2eb808, Func Offset: 0xa28
	// Line 1475, Address: 0x2eb844, Func Offset: 0xa64
	// Line 1503, Address: 0x2eb848, Func Offset: 0xa68
	// Line 1475, Address: 0x2eb854, Func Offset: 0xa74
	// Line 1503, Address: 0x2eb858, Func Offset: 0xa78
	// Line 1475, Address: 0x2eb864, Func Offset: 0xa84
	// Line 1503, Address: 0x2eb870, Func Offset: 0xa90
	// Line 1475, Address: 0x2eb874, Func Offset: 0xa94
	// Line 1503, Address: 0x2eb878, Func Offset: 0xa98
	// Line 1475, Address: 0x2eb888, Func Offset: 0xaa8
	// Line 1503, Address: 0x2eb894, Func Offset: 0xab4
	// Line 1475, Address: 0x2eb8a4, Func Offset: 0xac4
	// Line 1503, Address: 0x2eb8cc, Func Offset: 0xaec
	// Line 1484, Address: 0x2eb8d0, Func Offset: 0xaf0
	// Line 1503, Address: 0x2eb8d4, Func Offset: 0xaf4
	// Line 1485, Address: 0x2eb8d8, Func Offset: 0xaf8
	// Line 1503, Address: 0x2eb8e8, Func Offset: 0xb08
	// Line 1485, Address: 0x2eb900, Func Offset: 0xb20
	// Line 1503, Address: 0x2eb904, Func Offset: 0xb24
	// Line 1485, Address: 0x2eb91c, Func Offset: 0xb3c
	// Line 1503, Address: 0x2eb920, Func Offset: 0xb40
	// Line 1485, Address: 0x2eb944, Func Offset: 0xb64
	// Line 1503, Address: 0x2eb954, Func Offset: 0xb74
	// Line 1485, Address: 0x2eb968, Func Offset: 0xb88
	// Line 1503, Address: 0x2eb96c, Func Offset: 0xb8c
	// Func End, Address: 0x2eb998, Func Offset: 0xbb8
}

// zFrag_ParticleManager__Ff
// Start address: 0x2eb9a0
void zFrag_ParticleManager(float32 dt)
{
	zFrag* frag;
	zFrag* next;
	zFragParticleAsset* passet;
	// Line 1249, Address: 0x2eb9a0, Func Offset: 0
	// Line 1250, Address: 0x2eb9a4, Func Offset: 0x4
	// Line 1249, Address: 0x2eb9a8, Func Offset: 0x8
	// Line 1250, Address: 0x2eb9bc, Func Offset: 0x1c
	// Line 1253, Address: 0x2eb9c0, Func Offset: 0x20
	// Line 1260, Address: 0x2eb9c8, Func Offset: 0x28
	// Line 1254, Address: 0x2eb9cc, Func Offset: 0x2c
	// Line 1257, Address: 0x2eb9d0, Func Offset: 0x30
	// Line 1262, Address: 0x2eb9d4, Func Offset: 0x34
	// Line 1260, Address: 0x2eb9dc, Func Offset: 0x3c
	// Line 1261, Address: 0x2eb9e4, Func Offset: 0x44
	// Line 1262, Address: 0x2eb9f0, Func Offset: 0x50
	// Line 1267, Address: 0x2eba00, Func Offset: 0x60
	// Line 1272, Address: 0x2eba10, Func Offset: 0x70
	// Line 1279, Address: 0x2eba24, Func Offset: 0x84
	// Line 1280, Address: 0x2eba2c, Func Offset: 0x8c
	// Line 1303, Address: 0x2eba34, Func Offset: 0x94
	// Line 1306, Address: 0x2eba38, Func Offset: 0x98
	// Line 1307, Address: 0x2eba40, Func Offset: 0xa0
	// Line 1264, Address: 0x2eba50, Func Offset: 0xb0
	// Line 1307, Address: 0x2eba58, Func Offset: 0xb8
	// Line 1268, Address: 0x2eba5c, Func Offset: 0xbc
	// Line 1307, Address: 0x2eba60, Func Offset: 0xc0
	// Line 1273, Address: 0x2eba74, Func Offset: 0xd4
	// Line 1307, Address: 0x2eba78, Func Offset: 0xd8
	// Func End, Address: 0x2ebaa4, Func Offset: 0x104
}

// zFrag_DefaultParticleUpdate__FP5zFragf
// Start address: 0x2ebab0
void zFrag_DefaultParticleUpdate(zFrag* frag)
{
	zFragParticleAsset* passet;
	// Line 1193, Address: 0x2ebab0, Func Offset: 0
	// Line 1194, Address: 0x2ebac0, Func Offset: 0x10
	// Line 1198, Address: 0x2ebac4, Func Offset: 0x14
	// Line 1204, Address: 0x2ebae4, Func Offset: 0x34
	// Line 1224, Address: 0x2ebb04, Func Offset: 0x54
	// Line 1225, Address: 0x2ebb1c, Func Offset: 0x6c
	// Line 1232, Address: 0x2ebb38, Func Offset: 0x88
	// Line 1233, Address: 0x2ebb40, Func Offset: 0x90
	// Line 1234, Address: 0x2ebb4c, Func Offset: 0x9c
	// Line 1235, Address: 0x2ebb54, Func Offset: 0xa4
	// Line 1238, Address: 0x2ebb5c, Func Offset: 0xac
	// Line 1239, Address: 0x2ebb60, Func Offset: 0xb0
	// Line 1238, Address: 0x2ebb64, Func Offset: 0xb4
	// Line 1239, Address: 0x2ebb68, Func Offset: 0xb8
	// Line 1238, Address: 0x2ebb6c, Func Offset: 0xbc
	// Line 1239, Address: 0x2ebb70, Func Offset: 0xc0
	// Line 1242, Address: 0x2ebb78, Func Offset: 0xc8
	// Line 1243, Address: 0x2ebb80, Func Offset: 0xd0
	// Line 1244, Address: 0x2ebb88, Func Offset: 0xd8
	// Line 1245, Address: 0x2ebb90, Func Offset: 0xe0
	// Line 1246, Address: 0x2ebb94, Func Offset: 0xe4
	// Line 1200, Address: 0x2ebba0, Func Offset: 0xf0
	// Line 1246, Address: 0x2ebba4, Func Offset: 0xf4
	// Line 1206, Address: 0x2ebbb8, Func Offset: 0x108
	// Line 1246, Address: 0x2ebbbc, Func Offset: 0x10c
	// Func End, Address: 0x2ebbe0, Func Offset: 0x130
}

// zFrag_DefaultInit__FP5zFragP10zFragAsset
// Start address: 0x2ebbe0
uint8 zFrag_DefaultInit(zFrag* frag, zFragAsset* fasset)
{
	zFragProjectileAsset* passet;
	RpAtomic* m;
	zFragProjectile* proj;
	zFragLightningAsset* lasset;
	zFragParticleAsset* prasset;
	zFragSoundAsset* sasset;
	zFragExplosionAsset* easset;
	// Line 1005, Address: 0x2ebbe0, Func Offset: 0
	// Line 1009, Address: 0x2ebc00, Func Offset: 0x20
	// Line 1010, Address: 0x2ebc04, Func Offset: 0x24
	// Line 1011, Address: 0x2ebc0c, Func Offset: 0x2c
	// Line 1012, Address: 0x2ebc14, Func Offset: 0x34
	// Line 1013, Address: 0x2ebc18, Func Offset: 0x38
	// Line 1024, Address: 0x2ebc44, Func Offset: 0x64
	// Line 1021, Address: 0x2ebc48, Func Offset: 0x68
	// Line 1024, Address: 0x2ebc4c, Func Offset: 0x6c
	// Line 1027, Address: 0x2ebc54, Func Offset: 0x74
	// Line 1029, Address: 0x2ebc58, Func Offset: 0x78
	// Line 1043, Address: 0x2ebc60, Func Offset: 0x80
	// Line 1048, Address: 0x2ebc7c, Func Offset: 0x9c
	// Line 1054, Address: 0x2ebc84, Func Offset: 0xa4
	// Line 1059, Address: 0x2ebc98, Func Offset: 0xb8
	// Line 1061, Address: 0x2ebca4, Func Offset: 0xc4
	// Line 1063, Address: 0x2ebcb4, Func Offset: 0xd4
	// Line 1065, Address: 0x2ec1c0, Func Offset: 0x5e0
	// Line 1068, Address: 0x2ec1c4, Func Offset: 0x5e4
	// Line 1066, Address: 0x2ec1cc, Func Offset: 0x5ec
	// Line 1065, Address: 0x2ec1d0, Func Offset: 0x5f0
	// Line 1066, Address: 0x2ec1d4, Func Offset: 0x5f4
	// Line 1068, Address: 0x2ec1d8, Func Offset: 0x5f8
	// Line 1065, Address: 0x2ec1e4, Func Offset: 0x604
	// Line 1066, Address: 0x2ec1f4, Func Offset: 0x614
	// Line 1067, Address: 0x2ec1f8, Func Offset: 0x618
	// Line 1068, Address: 0x2ec1fc, Func Offset: 0x61c
	// Line 1071, Address: 0x2ec21c, Func Offset: 0x63c
	// Line 1072, Address: 0x2ec224, Func Offset: 0x644
	// Line 1073, Address: 0x2ec230, Func Offset: 0x650
	// Line 1077, Address: 0x2ec240, Func Offset: 0x660
	// Line 1089, Address: 0x2ec248, Func Offset: 0x668
	// Line 1086, Address: 0x2ec24c, Func Offset: 0x66c
	// Line 1089, Address: 0x2ec250, Func Offset: 0x670
	// Line 1093, Address: 0x2ec25c, Func Offset: 0x67c
	// Line 1095, Address: 0x2ec270, Func Offset: 0x690
	// Line 1098, Address: 0x2ec288, Func Offset: 0x6a8
	// Line 1100, Address: 0x2ec2b8, Func Offset: 0x6d8
	// Line 1117, Address: 0x2ec2c0, Func Offset: 0x6e0
	// Line 1109, Address: 0x2ec2c4, Func Offset: 0x6e4
	// Line 1117, Address: 0x2ec2c8, Func Offset: 0x6e8
	// Line 1121, Address: 0x2ec2d4, Func Offset: 0x6f4
	// Line 1122, Address: 0x2ec2dc, Func Offset: 0x6fc
	// Line 1123, Address: 0x2ec2f4, Func Offset: 0x714
	// Line 1125, Address: 0x2ec30c, Func Offset: 0x72c
	// Line 1126, Address: 0x2ec31c, Func Offset: 0x73c
	// Line 1129, Address: 0x2ec32c, Func Offset: 0x74c
	// Line 1134, Address: 0x2ec33c, Func Offset: 0x75c
	// Line 1145, Address: 0x2ec344, Func Offset: 0x764
	// Line 1142, Address: 0x2ec348, Func Offset: 0x768
	// Line 1145, Address: 0x2ec34c, Func Offset: 0x76c
	// Line 1149, Address: 0x2ec358, Func Offset: 0x778
	// Line 1150, Address: 0x2ec360, Func Offset: 0x780
	// Line 1152, Address: 0x2ec390, Func Offset: 0x7b0
	// Line 1157, Address: 0x2ec398, Func Offset: 0x7b8
	// Line 1159, Address: 0x2ec39c, Func Offset: 0x7bc
	// Line 1160, Address: 0x2ec3ac, Func Offset: 0x7cc
	// Line 1161, Address: 0x2ec3dc, Func Offset: 0x7fc
	// Line 1165, Address: 0x2ec3ec, Func Offset: 0x80c
	// Line 1166, Address: 0x2ec3f4, Func Offset: 0x814
	// Line 1170, Address: 0x2ec3fc, Func Offset: 0x81c
	// Line 1169, Address: 0x2ec400, Func Offset: 0x820
	// Line 1170, Address: 0x2ec404, Func Offset: 0x824
	// Line 1171, Address: 0x2ec408, Func Offset: 0x828
	// Line 1174, Address: 0x2ec410, Func Offset: 0x830
	// Line 1173, Address: 0x2ec414, Func Offset: 0x834
	// Line 1174, Address: 0x2ec418, Func Offset: 0x838
	// Line 1175, Address: 0x2ec41c, Func Offset: 0x83c
	// Line 1178, Address: 0x2ec424, Func Offset: 0x844
	// Line 1177, Address: 0x2ec428, Func Offset: 0x848
	// Line 1178, Address: 0x2ec42c, Func Offset: 0x84c
	// Line 1187, Address: 0x2ec434, Func Offset: 0x854
	// Line 1051, Address: 0x2ec450, Func Offset: 0x870
	// Line 1187, Address: 0x2ec458, Func Offset: 0x878
	// Line 1063, Address: 0x2ec45c, Func Offset: 0x87c
	// Line 1187, Address: 0x2ec460, Func Offset: 0x880
	// Line 1063, Address: 0x2ec464, Func Offset: 0x884
	// Line 1187, Address: 0x2ec468, Func Offset: 0x888
	// Line 1063, Address: 0x2ec480, Func Offset: 0x8a0
	// Line 1187, Address: 0x2ec484, Func Offset: 0x8a4
	// Line 1063, Address: 0x2ec494, Func Offset: 0x8b4
	// Line 1187, Address: 0x2ec49c, Func Offset: 0x8bc
	// Line 1063, Address: 0x2ec4b0, Func Offset: 0x8d0
	// Line 1187, Address: 0x2ec4c0, Func Offset: 0x8e0
	// Line 1063, Address: 0x2ec4d4, Func Offset: 0x8f4
	// Line 1187, Address: 0x2ec4dc, Func Offset: 0x8fc
	// Line 1063, Address: 0x2ec4e4, Func Offset: 0x904
	// Line 1187, Address: 0x2ec514, Func Offset: 0x934
	// Line 1063, Address: 0x2ec518, Func Offset: 0x938
	// Line 1187, Address: 0x2ec534, Func Offset: 0x954
	// Line 1063, Address: 0x2ec53c, Func Offset: 0x95c
	// Line 1187, Address: 0x2ec544, Func Offset: 0x964
	// Line 1063, Address: 0x2ec54c, Func Offset: 0x96c
	// Line 1187, Address: 0x2ec580, Func Offset: 0x9a0
	// Line 1063, Address: 0x2ec584, Func Offset: 0x9a4
	// Line 1187, Address: 0x2ec598, Func Offset: 0x9b8
	// Line 1063, Address: 0x2ec5a0, Func Offset: 0x9c0
	// Line 1187, Address: 0x2ec5a8, Func Offset: 0x9c8
	// Line 1063, Address: 0x2ec5b0, Func Offset: 0x9d0
	// Line 1187, Address: 0x2ec5f4, Func Offset: 0xa14
	// Line 1063, Address: 0x2ec5f8, Func Offset: 0xa18
	// Line 1187, Address: 0x2ec60c, Func Offset: 0xa2c
	// Line 1063, Address: 0x2ec610, Func Offset: 0xa30
	// Line 1187, Address: 0x2ec620, Func Offset: 0xa40
	// Line 1063, Address: 0x2ec650, Func Offset: 0xa70
	// Line 1187, Address: 0x2ec654, Func Offset: 0xa74
	// Line 1063, Address: 0x2ec660, Func Offset: 0xa80
	// Line 1187, Address: 0x2ec66c, Func Offset: 0xa8c
	// Line 1063, Address: 0x2ec678, Func Offset: 0xa98
	// Line 1187, Address: 0x2ec67c, Func Offset: 0xa9c
	// Line 1063, Address: 0x2ec680, Func Offset: 0xaa0
	// Line 1187, Address: 0x2ec688, Func Offset: 0xaa8
	// Line 1063, Address: 0x2ec68c, Func Offset: 0xaac
	// Line 1187, Address: 0x2ec690, Func Offset: 0xab0
	// Line 1063, Address: 0x2ec69c, Func Offset: 0xabc
	// Line 1187, Address: 0x2ec6a0, Func Offset: 0xac0
	// Line 1063, Address: 0x2ec6a8, Func Offset: 0xac8
	// Line 1187, Address: 0x2ec6ac, Func Offset: 0xacc
	// Line 1063, Address: 0x2ec6b4, Func Offset: 0xad4
	// Line 1187, Address: 0x2ec6b8, Func Offset: 0xad8
	// Line 1063, Address: 0x2ec6cc, Func Offset: 0xaec
	// Line 1187, Address: 0x2ec6d4, Func Offset: 0xaf4
	// Line 1063, Address: 0x2ec6e0, Func Offset: 0xb00
	// Line 1187, Address: 0x2ec6e8, Func Offset: 0xb08
	// Line 1063, Address: 0x2ec6ec, Func Offset: 0xb0c
	// Line 1187, Address: 0x2ec6f4, Func Offset: 0xb14
	// Line 1063, Address: 0x2ec6fc, Func Offset: 0xb1c
	// Line 1187, Address: 0x2ec700, Func Offset: 0xb20
	// Line 1063, Address: 0x2ec708, Func Offset: 0xb28
	// Line 1187, Address: 0x2ec714, Func Offset: 0xb34
	// Line 1063, Address: 0x2ec768, Func Offset: 0xb88
	// Line 1187, Address: 0x2ec770, Func Offset: 0xb90
	// Line 1063, Address: 0x2ec778, Func Offset: 0xb98
	// Line 1187, Address: 0x2ec7c0, Func Offset: 0xbe0
	// Line 1063, Address: 0x2ec7c4, Func Offset: 0xbe4
	// Line 1187, Address: 0x2ec7c8, Func Offset: 0xbe8
	// Line 1063, Address: 0x2ec7d0, Func Offset: 0xbf0
	// Line 1187, Address: 0x2ec7d8, Func Offset: 0xbf8
	// Line 1063, Address: 0x2ec7e0, Func Offset: 0xc00
	// Line 1187, Address: 0x2ec828, Func Offset: 0xc48
	// Line 1063, Address: 0x2ec82c, Func Offset: 0xc4c
	// Line 1187, Address: 0x2ec830, Func Offset: 0xc50
	// Line 1063, Address: 0x2ec838, Func Offset: 0xc58
	// Line 1187, Address: 0x2ec840, Func Offset: 0xc60
	// Line 1063, Address: 0x2ec848, Func Offset: 0xc68
	// Line 1187, Address: 0x2ec878, Func Offset: 0xc98
	// Line 1063, Address: 0x2ec87c, Func Offset: 0xc9c
	// Line 1187, Address: 0x2ec888, Func Offset: 0xca8
	// Line 1063, Address: 0x2ec88c, Func Offset: 0xcac
	// Line 1187, Address: 0x2ec8a4, Func Offset: 0xcc4
	// Line 1063, Address: 0x2ec8e0, Func Offset: 0xd00
	// Line 1187, Address: 0x2ec8e4, Func Offset: 0xd04
	// Line 1063, Address: 0x2ec8f0, Func Offset: 0xd10
	// Line 1187, Address: 0x2ec8f4, Func Offset: 0xd14
	// Line 1063, Address: 0x2ec900, Func Offset: 0xd20
	// Line 1187, Address: 0x2ec90c, Func Offset: 0xd2c
	// Line 1063, Address: 0x2ec910, Func Offset: 0xd30
	// Line 1187, Address: 0x2ec914, Func Offset: 0xd34
	// Line 1063, Address: 0x2ec924, Func Offset: 0xd44
	// Line 1187, Address: 0x2ec930, Func Offset: 0xd50
	// Line 1063, Address: 0x2ec940, Func Offset: 0xd60
	// Line 1187, Address: 0x2ec968, Func Offset: 0xd88
	// Line 1188, Address: 0x2ec9c8, Func Offset: 0xde8
	// Func End, Address: 0x2ec9e8, Func Offset: 0xe08
}

// zFragLoc_InitDir__FP13zFragLocationP5xVec3P14xModelInstance
// Start address: 0x2ec9f0
void zFragLoc_InitDir(zFragLocation* loc, xVec3* vec, xModelInstance* parent)
{
	int32 index;
	xMat4x3 tmpMat;
	// Line 840, Address: 0x2ec9f0, Func Offset: 0
	// Line 841, Address: 0x2ec9f4, Func Offset: 0x4
	// Line 840, Address: 0x2ec9f8, Func Offset: 0x8
	// Line 841, Address: 0x2eca0c, Func Offset: 0x1c
	// Line 843, Address: 0x2eca38, Func Offset: 0x48
	// Line 846, Address: 0x2eca88, Func Offset: 0x98
	// Line 849, Address: 0x2eca90, Func Offset: 0xa0
	// Line 850, Address: 0x2eca94, Func Offset: 0xa4
	// Line 851, Address: 0x2ecaa8, Func Offset: 0xb8
	// Line 852, Address: 0x2ecab4, Func Offset: 0xc4
	// Line 853, Address: 0x2ecadc, Func Offset: 0xec
	// Line 856, Address: 0x2ecb2c, Func Offset: 0x13c
	// Line 858, Address: 0x2ecb38, Func Offset: 0x148
	// Line 860, Address: 0x2ecb48, Func Offset: 0x158
	// Line 863, Address: 0x2ecb98, Func Offset: 0x1a8
	// Line 865, Address: 0x2ecba0, Func Offset: 0x1b0
	// Line 870, Address: 0x2ecbb4, Func Offset: 0x1c4
	// Func End, Address: 0x2ecbc8, Func Offset: 0x1d8
}

// zFragLoc_InitVec__FP13zFragLocationP5xVec3P14xModelInstance
// Start address: 0x2ecbd0
void zFragLoc_InitVec(zFragLocation* loc, xVec3* vec, xModelInstance* parent)
{
	xMat4x3 tmpMat;
	int32 index;
	xVec3 offset;
	// Line 793, Address: 0x2ecbd0, Func Offset: 0
	// Line 795, Address: 0x2ecbd4, Func Offset: 0x4
	// Line 793, Address: 0x2ecbd8, Func Offset: 0x8
	// Line 795, Address: 0x2ecc04, Func Offset: 0x34
	// Line 799, Address: 0x2ecc34, Func Offset: 0x64
	// Line 800, Address: 0x2ecc38, Func Offset: 0x68
	// Line 801, Address: 0x2ecc4c, Func Offset: 0x7c
	// Line 802, Address: 0x2ecc58, Func Offset: 0x88
	// Line 803, Address: 0x2ecc7c, Func Offset: 0xac
	// Line 804, Address: 0x2ecc88, Func Offset: 0xb8
	// Line 808, Address: 0x2ecc98, Func Offset: 0xc8
	// Line 810, Address: 0x2ecca0, Func Offset: 0xd0
	// Line 811, Address: 0x2eccb4, Func Offset: 0xe4
	// Line 816, Address: 0x2eccbc, Func Offset: 0xec
	// Line 818, Address: 0x2ecce4, Func Offset: 0x114
	// Line 821, Address: 0x2ecd38, Func Offset: 0x168
	// Line 822, Address: 0x2ecd64, Func Offset: 0x194
	// Line 824, Address: 0x2ecd6c, Func Offset: 0x19c
	// Line 825, Address: 0x2ecdbc, Func Offset: 0x1ec
	// Line 828, Address: 0x2ecdec, Func Offset: 0x21c
	// Line 830, Address: 0x2ecdf0, Func Offset: 0x220
	// Line 828, Address: 0x2ecdf8, Func Offset: 0x228
	// Line 830, Address: 0x2ece10, Func Offset: 0x240
	// Line 832, Address: 0x2ece1c, Func Offset: 0x24c
	// Line 833, Address: 0x2ecf58, Func Offset: 0x388
	// Line 832, Address: 0x2ecf5c, Func Offset: 0x38c
	// Line 833, Address: 0x2ecf60, Func Offset: 0x390
	// Line 832, Address: 0x2ecf6c, Func Offset: 0x39c
	// Line 833, Address: 0x2ecf70, Func Offset: 0x3a0
	// Line 832, Address: 0x2ecf7c, Func Offset: 0x3ac
	// Line 833, Address: 0x2ecf88, Func Offset: 0x3b8
	// Line 835, Address: 0x2ecf90, Func Offset: 0x3c0
	// Func End, Address: 0x2ecfbc, Func Offset: 0x3ec
}

// zFragLoc_InitMat__FP13zFragLocationP7xMat4x3P14xModelInstance
// Start address: 0x2ecfc0
void zFragLoc_InitMat(zFragLocation* loc, xMat4x3* mat, xModelInstance* parent)
{
	int32 index;
	xVec3 offset;
	// Line 747, Address: 0x2ecfc0, Func Offset: 0
	// Line 748, Address: 0x2ecfc4, Func Offset: 0x4
	// Line 747, Address: 0x2ecfc8, Func Offset: 0x8
	// Line 748, Address: 0x2ecff4, Func Offset: 0x34
	// Line 753, Address: 0x2ed024, Func Offset: 0x64
	// Line 754, Address: 0x2ed028, Func Offset: 0x68
	// Line 755, Address: 0x2ed03c, Func Offset: 0x7c
	// Line 756, Address: 0x2ed048, Func Offset: 0x88
	// Line 757, Address: 0x2ed068, Func Offset: 0xa8
	// Line 758, Address: 0x2ed074, Func Offset: 0xb4
	// Line 762, Address: 0x2ed084, Func Offset: 0xc4
	// Line 764, Address: 0x2ed08c, Func Offset: 0xcc
	// Line 765, Address: 0x2ed0b4, Func Offset: 0xf4
	// Line 771, Address: 0x2ed0c8, Func Offset: 0x108
	// Line 773, Address: 0x2ed0f0, Func Offset: 0x130
	// Line 776, Address: 0x2ed144, Func Offset: 0x184
	// Line 777, Address: 0x2ed170, Func Offset: 0x1b0
	// Line 779, Address: 0x2ed178, Func Offset: 0x1b8
	// Line 780, Address: 0x2ed1c8, Func Offset: 0x208
	// Line 784, Address: 0x2ed1fc, Func Offset: 0x23c
	// Line 786, Address: 0x2ed210, Func Offset: 0x250
	// Line 787, Address: 0x2ed34c, Func Offset: 0x38c
	// Line 786, Address: 0x2ed350, Func Offset: 0x390
	// Line 787, Address: 0x2ed354, Func Offset: 0x394
	// Line 786, Address: 0x2ed360, Func Offset: 0x3a0
	// Line 787, Address: 0x2ed364, Func Offset: 0x3a4
	// Line 786, Address: 0x2ed370, Func Offset: 0x3b0
	// Line 787, Address: 0x2ed37c, Func Offset: 0x3bc
	// Line 789, Address: 0x2ed384, Func Offset: 0x3c4
	// Func End, Address: 0x2ed3b0, Func Offset: 0x3f0
}

// zShrapnel_CinematicInit__FP14zShrapnelAssetP8RpAtomicP11RwMatrixTagP5xVec3PFP5zFragP10zFragAsset_v
// Start address: 0x2ed3b0
void zShrapnel_CinematicInit(zShrapnelAsset* shrap, RpAtomic* cinModel, RwMatrixTag* animMat, xVec3* initVel, void(*cb)(zFrag*, zFragAsset*))
{
	int32 i;
	zFrag* frag;
	zFragProjectile* proj;
	float32 spd;
	xModelInstance* model;
	// Line 663, Address: 0x2ed3b0, Func Offset: 0
	// Line 666, Address: 0x2ed3e0, Func Offset: 0x30
	// Line 667, Address: 0x2ed3f8, Func Offset: 0x48
	// Line 670, Address: 0x2ed400, Func Offset: 0x50
	// Line 672, Address: 0x2ed40c, Func Offset: 0x5c
	// Line 670, Address: 0x2ed410, Func Offset: 0x60
	// Line 673, Address: 0x2ed414, Func Offset: 0x64
	// Line 680, Address: 0x2ed418, Func Offset: 0x68
	// Line 682, Address: 0x2ed424, Func Offset: 0x74
	// Line 680, Address: 0x2ed428, Func Offset: 0x78
	// Line 682, Address: 0x2ed42c, Func Offset: 0x7c
	// Line 680, Address: 0x2ed430, Func Offset: 0x80
	// Line 682, Address: 0x2ed434, Func Offset: 0x84
	// Line 681, Address: 0x2ed448, Func Offset: 0x98
	// Line 682, Address: 0x2ed454, Func Offset: 0xa4
	// Line 683, Address: 0x2ed460, Func Offset: 0xb0
	// Line 685, Address: 0x2ed4d0, Func Offset: 0x120
	// Line 686, Address: 0x2ed4f0, Func Offset: 0x140
	// Line 688, Address: 0x2ed4f8, Func Offset: 0x148
	// Line 691, Address: 0x2ed51c, Func Offset: 0x16c
	// Line 693, Address: 0x2ed520, Func Offset: 0x170
	// Line 691, Address: 0x2ed528, Func Offset: 0x178
	// Line 693, Address: 0x2ed52c, Func Offset: 0x17c
	// Line 695, Address: 0x2ed534, Func Offset: 0x184
	// Line 696, Address: 0x2ed538, Func Offset: 0x188
	// Line 697, Address: 0x2ed540, Func Offset: 0x190
	// Line 698, Address: 0x2ed548, Func Offset: 0x198
	// Line 700, Address: 0x2ed550, Func Offset: 0x1a0
	// Line 703, Address: 0x2ed554, Func Offset: 0x1a4
	// Line 700, Address: 0x2ed55c, Func Offset: 0x1ac
	// Line 703, Address: 0x2ed560, Func Offset: 0x1b0
	// Line 704, Address: 0x2ed57c, Func Offset: 0x1cc
	// Line 705, Address: 0x2ed598, Func Offset: 0x1e8
	// Line 706, Address: 0x2ed5a8, Func Offset: 0x1f8
	// Line 707, Address: 0x2ed5d8, Func Offset: 0x228
	// Line 710, Address: 0x2ed5f0, Func Offset: 0x240
	// Line 711, Address: 0x2ed5f4, Func Offset: 0x244
	// Line 713, Address: 0x2ed5f8, Func Offset: 0x248
	// Line 717, Address: 0x2ed610, Func Offset: 0x260
	// Line 715, Address: 0x2ed614, Func Offset: 0x264
	// Line 717, Address: 0x2ed618, Func Offset: 0x268
	// Line 716, Address: 0x2ed61c, Func Offset: 0x26c
	// Line 718, Address: 0x2ed620, Func Offset: 0x270
	// Func End, Address: 0x2ed644, Func Offset: 0x294
}

// CinFragCB__FP5zFragP10zFragAsset
// Start address: 0x2ed650
void CinFragCB(zFrag* frag, zFragAsset* asset)
{
	float32 time;
	// Line 645, Address: 0x2ed650, Func Offset: 0
	// Line 646, Address: 0x2ed654, Func Offset: 0x4
	// Line 645, Address: 0x2ed658, Func Offset: 0x8
	// Line 646, Address: 0x2ed65c, Func Offset: 0xc
	// Line 647, Address: 0x2ed66c, Func Offset: 0x1c
	// Line 646, Address: 0x2ed670, Func Offset: 0x20
	// Line 647, Address: 0x2ed678, Func Offset: 0x28
	// Line 649, Address: 0x2ed688, Func Offset: 0x38
	// Line 650, Address: 0x2ed690, Func Offset: 0x40
	// Line 651, Address: 0x2ed698, Func Offset: 0x48
	// Func End, Address: 0x2ed6b4, Func Offset: 0x64
}

// zShrapnel_DefaultInit__FP14zShrapnelAssetP14xModelInstanceP5xVec3PFP5zFragP10zFragAsset_v
// Start address: 0x2ed6c0
void zShrapnel_DefaultInit(zShrapnelAsset* shrap, xModelInstance* parent, xVec3* initVel, void(*cb)(zFrag*, zFragAsset*))
{
	zShrapnelParentList* plist;
	zFrag* frag;
	zFragAsset* fasset;
	int32 i;
	int32 j;
	int32 k;
	// Line 491, Address: 0x2ed6c0, Func Offset: 0
	// Line 498, Address: 0x2ed6fc, Func Offset: 0x3c
	// Line 501, Address: 0x2ed70c, Func Offset: 0x4c
	// Line 502, Address: 0x2ed710, Func Offset: 0x50
	// Line 503, Address: 0x2ed724, Func Offset: 0x64
	// Line 504, Address: 0x2ed730, Func Offset: 0x70
	// Line 506, Address: 0x2ed738, Func Offset: 0x78
	// Line 507, Address: 0x2ed748, Func Offset: 0x88
	// Line 510, Address: 0x2ed750, Func Offset: 0x90
	// Line 511, Address: 0x2ed760, Func Offset: 0xa0
	// Line 512, Address: 0x2ed76c, Func Offset: 0xac
	// Line 514, Address: 0x2ed780, Func Offset: 0xc0
	// Line 516, Address: 0x2ed790, Func Offset: 0xd0
	// Line 514, Address: 0x2ed798, Func Offset: 0xd8
	// Line 516, Address: 0x2ed79c, Func Offset: 0xdc
	// Line 519, Address: 0x2ed7a4, Func Offset: 0xe4
	// Line 526, Address: 0x2ed7b8, Func Offset: 0xf8
	// Line 527, Address: 0x2ed7c0, Func Offset: 0x100
	// Line 531, Address: 0x2ed7cc, Func Offset: 0x10c
	// Line 532, Address: 0x2ed7dc, Func Offset: 0x11c
	// Line 533, Address: 0x2ed7e0, Func Offset: 0x120
	// Line 534, Address: 0x2ed7f8, Func Offset: 0x138
	// Line 536, Address: 0x2ed824, Func Offset: 0x164
	// Line 537, Address: 0x2ed82c, Func Offset: 0x16c
	// Line 542, Address: 0x2ed834, Func Offset: 0x174
	// Line 543, Address: 0x2ed83c, Func Offset: 0x17c
	// Line 549, Address: 0x2ed84c, Func Offset: 0x18c
	// Line 552, Address: 0x2ed854, Func Offset: 0x194
	// Line 555, Address: 0x2ed85c, Func Offset: 0x19c
	// Line 558, Address: 0x2ed864, Func Offset: 0x1a4
	// Line 561, Address: 0x2ed86c, Func Offset: 0x1ac
	// Line 564, Address: 0x2ed874, Func Offset: 0x1b4
	// Line 567, Address: 0x2ed87c, Func Offset: 0x1bc
	// Line 569, Address: 0x2ed884, Func Offset: 0x1c4
	// Line 576, Address: 0x2ed888, Func Offset: 0x1c8
	// Line 579, Address: 0x2ed89c, Func Offset: 0x1dc
	// Line 580, Address: 0x2ed8a8, Func Offset: 0x1e8
	// Line 509, Address: 0x2ed8b0, Func Offset: 0x1f0
	// Line 580, Address: 0x2ed8b8, Func Offset: 0x1f8
	// Line 523, Address: 0x2ed8c0, Func Offset: 0x200
	// Line 531, Address: 0x2ed8c8, Func Offset: 0x208
	// Line 580, Address: 0x2ed8d0, Func Offset: 0x210
	// Line 546, Address: 0x2ed8e0, Func Offset: 0x220
	// Line 580, Address: 0x2ed8e4, Func Offset: 0x224
	// Line 546, Address: 0x2ed8e8, Func Offset: 0x228
	// Line 580, Address: 0x2ed8f8, Func Offset: 0x238
	// Func End, Address: 0x2ed928, Func Offset: 0x268
}

// zShrapnel_Update__Ff
// Start address: 0x2ed930
void zShrapnel_Update(float32 dt)
{
	zFrag* curr;
	zFrag* next;
	// Line 400, Address: 0x2ed930, Func Offset: 0
	// Line 401, Address: 0x2ed944, Func Offset: 0x14
	// Line 404, Address: 0x2ed950, Func Offset: 0x20
	// Line 407, Address: 0x2ed958, Func Offset: 0x28
	// Line 409, Address: 0x2ed960, Func Offset: 0x30
	// Line 411, Address: 0x2ed97c, Func Offset: 0x4c
	// Line 412, Address: 0x2ed984, Func Offset: 0x54
	// Line 413, Address: 0x2ed98c, Func Offset: 0x5c
	// Line 415, Address: 0x2ed990, Func Offset: 0x60
	// Line 418, Address: 0x2ed998, Func Offset: 0x68
	// Line 421, Address: 0x2ed9a8, Func Offset: 0x78
	// Line 424, Address: 0x2ed9b8, Func Offset: 0x88
	// Line 427, Address: 0x2ed9d0, Func Offset: 0xa0
	// Line 428, Address: 0x2ed9d8, Func Offset: 0xa8
	// Line 430, Address: 0x2eda40, Func Offset: 0x110
	// Line 433, Address: 0x2eda50, Func Offset: 0x120
	// Line 436, Address: 0x2eda60, Func Offset: 0x130
	// Line 410, Address: 0x2eda68, Func Offset: 0x138
	// Line 411, Address: 0x2eda6c, Func Offset: 0x13c
	// Line 436, Address: 0x2eda78, Func Offset: 0x148
	// Line 422, Address: 0x2eda88, Func Offset: 0x158
	// Line 436, Address: 0x2eda8c, Func Offset: 0x15c
	// Line 425, Address: 0x2eda9c, Func Offset: 0x16c
	// Line 436, Address: 0x2edaa0, Func Offset: 0x170
	// Line 431, Address: 0x2edab0, Func Offset: 0x180
	// Line 436, Address: 0x2edab4, Func Offset: 0x184
	// Line 434, Address: 0x2edac4, Func Offset: 0x194
	// Line 436, Address: 0x2edac8, Func Offset: 0x198
	// Func End, Address: 0x2edaf0, Func Offset: 0x1c0
}

// zShrapnel_SceneInit__FP6zScene
// Start address: 0x2edaf0
void zShrapnel_SceneInit()
{
	int32 i;
	int32 numShrapnel;
	int32 j;
	zShrapnelAsset* sa;
	zFragAsset* fa;
	zFragProjectileAsset* projAss;
	zFragParticleAsset* partAss;
	zFragShrapnelAsset* shrapAss;
	// Line 293, Address: 0x2edaf0, Func Offset: 0
	// Line 297, Address: 0x2edaf4, Func Offset: 0x4
	// Line 293, Address: 0x2edaf8, Func Offset: 0x8
	// Line 296, Address: 0x2edafc, Func Offset: 0xc
	// Line 293, Address: 0x2edb00, Func Offset: 0x10
	// Line 297, Address: 0x2edb04, Func Offset: 0x14
	// Line 293, Address: 0x2edb08, Func Offset: 0x18
	// Line 297, Address: 0x2edb0c, Func Offset: 0x1c
	// Line 293, Address: 0x2edb10, Func Offset: 0x20
	// Line 299, Address: 0x2edb14, Func Offset: 0x24
	// Line 293, Address: 0x2edb18, Func Offset: 0x28
	// Line 296, Address: 0x2edb20, Func Offset: 0x30
	// Line 298, Address: 0x2edb24, Func Offset: 0x34
	// Line 297, Address: 0x2edb28, Func Offset: 0x38
	// Line 298, Address: 0x2edb2c, Func Offset: 0x3c
	// Line 299, Address: 0x2edb30, Func Offset: 0x40
	// Line 301, Address: 0x2edb3c, Func Offset: 0x4c
	// Line 300, Address: 0x2edb40, Func Offset: 0x50
	// Line 301, Address: 0x2edb44, Func Offset: 0x54
	// Line 300, Address: 0x2edb48, Func Offset: 0x58
	// Line 301, Address: 0x2edb4c, Func Offset: 0x5c
	// Line 300, Address: 0x2edb50, Func Offset: 0x60
	// Line 302, Address: 0x2edb54, Func Offset: 0x64
	// Line 300, Address: 0x2edb60, Func Offset: 0x70
	// Line 302, Address: 0x2edb64, Func Offset: 0x74
	// Line 300, Address: 0x2edb80, Func Offset: 0x90
	// Line 302, Address: 0x2edb84, Func Offset: 0x94
	// Line 300, Address: 0x2edb98, Func Offset: 0xa8
	// Line 302, Address: 0x2edb9c, Func Offset: 0xac
	// Line 300, Address: 0x2edbb0, Func Offset: 0xc0
	// Line 302, Address: 0x2edbb4, Func Offset: 0xc4
	// Line 300, Address: 0x2edbd8, Func Offset: 0xe8
	// Line 302, Address: 0x2edbdc, Func Offset: 0xec
	// Line 301, Address: 0x2edc30, Func Offset: 0x140
	// Line 306, Address: 0x2edc34, Func Offset: 0x144
	// Line 302, Address: 0x2edc38, Func Offset: 0x148
	// Line 301, Address: 0x2edc44, Func Offset: 0x154
	// Line 302, Address: 0x2edc48, Func Offset: 0x158
	// Line 301, Address: 0x2edc54, Func Offset: 0x164
	// Line 302, Address: 0x2edc58, Func Offset: 0x168
	// Line 301, Address: 0x2edc6c, Func Offset: 0x17c
	// Line 302, Address: 0x2edc70, Func Offset: 0x180
	// Line 301, Address: 0x2edc7c, Func Offset: 0x18c
	// Line 302, Address: 0x2edc80, Func Offset: 0x190
	// Line 301, Address: 0x2edc8c, Func Offset: 0x19c
	// Line 302, Address: 0x2edc90, Func Offset: 0x1a0
	// Line 301, Address: 0x2edcb4, Func Offset: 0x1c4
	// Line 302, Address: 0x2edcb8, Func Offset: 0x1c8
	// Line 301, Address: 0x2edcbc, Func Offset: 0x1cc
	// Line 302, Address: 0x2edcc0, Func Offset: 0x1d0
	// Line 301, Address: 0x2edcc4, Func Offset: 0x1d4
	// Line 302, Address: 0x2edcc8, Func Offset: 0x1d8
	// Line 301, Address: 0x2edccc, Func Offset: 0x1dc
	// Line 302, Address: 0x2edcd0, Func Offset: 0x1e0
	// Line 301, Address: 0x2edcd4, Func Offset: 0x1e4
	// Line 302, Address: 0x2edcdc, Func Offset: 0x1ec
	// Line 304, Address: 0x2edcec, Func Offset: 0x1fc
	// Line 302, Address: 0x2edcf0, Func Offset: 0x200
	// Line 304, Address: 0x2edcf4, Func Offset: 0x204
	// Line 302, Address: 0x2edcf8, Func Offset: 0x208
	// Line 305, Address: 0x2edcfc, Func Offset: 0x20c
	// Line 302, Address: 0x2edd00, Func Offset: 0x210
	// Line 308, Address: 0x2edd04, Func Offset: 0x214
	// Line 309, Address: 0x2edd08, Func Offset: 0x218
	// Line 305, Address: 0x2edd0c, Func Offset: 0x21c
	// Line 308, Address: 0x2edd10, Func Offset: 0x220
	// Line 310, Address: 0x2edd14, Func Offset: 0x224
	// Line 309, Address: 0x2edd18, Func Offset: 0x228
	// Line 311, Address: 0x2edd1c, Func Offset: 0x22c
	// Line 312, Address: 0x2edd20, Func Offset: 0x230
	// Line 310, Address: 0x2edd24, Func Offset: 0x234
	// Line 311, Address: 0x2edd28, Func Offset: 0x238
	// Line 304, Address: 0x2edd2c, Func Offset: 0x23c
	// Line 312, Address: 0x2edd30, Func Offset: 0x240
	// Line 313, Address: 0x2edd34, Func Offset: 0x244
	// Line 314, Address: 0x2edd38, Func Offset: 0x248
	// Line 316, Address: 0x2edd3c, Func Offset: 0x24c
	// Line 304, Address: 0x2edd40, Func Offset: 0x250
	// Line 316, Address: 0x2edd44, Func Offset: 0x254
	// Line 313, Address: 0x2edd48, Func Offset: 0x258
	// Line 316, Address: 0x2edd4c, Func Offset: 0x25c
	// Line 319, Address: 0x2edd64, Func Offset: 0x274
	// Line 321, Address: 0x2edd74, Func Offset: 0x284
	// Line 395, Address: 0x2edd80, Func Offset: 0x290
	// Line 322, Address: 0x2edd88, Func Offset: 0x298
	// Line 395, Address: 0x2edd94, Func Offset: 0x2a4
	// Line 322, Address: 0x2edda8, Func Offset: 0x2b8
	// Line 395, Address: 0x2eddac, Func Offset: 0x2bc
	// Line 325, Address: 0x2eddb0, Func Offset: 0x2c0
	// Line 395, Address: 0x2eddb4, Func Offset: 0x2c4
	// Line 325, Address: 0x2eddd8, Func Offset: 0x2e8
	// Line 395, Address: 0x2edde0, Func Offset: 0x2f0
	// Line 327, Address: 0x2eddf4, Func Offset: 0x304
	// Line 395, Address: 0x2eddf8, Func Offset: 0x308
	// Line 329, Address: 0x2ede04, Func Offset: 0x314
	// Line 395, Address: 0x2ede08, Func Offset: 0x318
	// Line 331, Address: 0x2ede18, Func Offset: 0x328
	// Line 395, Address: 0x2ede1c, Func Offset: 0x32c
	// Line 331, Address: 0x2ede20, Func Offset: 0x330
	// Line 395, Address: 0x2ede30, Func Offset: 0x340
	// Line 335, Address: 0x2ede3c, Func Offset: 0x34c
	// Line 395, Address: 0x2ede40, Func Offset: 0x350
	// Line 335, Address: 0x2ede4c, Func Offset: 0x35c
	// Line 395, Address: 0x2ede50, Func Offset: 0x360
	// Line 335, Address: 0x2ede5c, Func Offset: 0x36c
	// Line 337, Address: 0x2ede60, Func Offset: 0x370
	// Line 395, Address: 0x2ede68, Func Offset: 0x378
	// Line 342, Address: 0x2ede8c, Func Offset: 0x39c
	// Line 395, Address: 0x2ede90, Func Offset: 0x3a0
	// Line 342, Address: 0x2edea0, Func Offset: 0x3b0
	// Line 395, Address: 0x2edea8, Func Offset: 0x3b8
	// Line 342, Address: 0x2edeb8, Func Offset: 0x3c8
	// Line 395, Address: 0x2edec0, Func Offset: 0x3d0
	// Line 342, Address: 0x2edec4, Func Offset: 0x3d4
	// Line 344, Address: 0x2edec8, Func Offset: 0x3d8
	// Line 351, Address: 0x2eded0, Func Offset: 0x3e0
	// Line 358, Address: 0x2eded8, Func Offset: 0x3e8
	// Line 364, Address: 0x2edee0, Func Offset: 0x3f0
	// Line 370, Address: 0x2edee8, Func Offset: 0x3f8
	// Line 376, Address: 0x2edef0, Func Offset: 0x400
	// Line 395, Address: 0x2edef8, Func Offset: 0x408
	// Line 381, Address: 0x2edf04, Func Offset: 0x414
	// Line 382, Address: 0x2edf08, Func Offset: 0x418
	// Line 390, Address: 0x2edf0c, Func Offset: 0x41c
	// Line 395, Address: 0x2edf10, Func Offset: 0x420
	// Line 342, Address: 0x2edf70, Func Offset: 0x480
	// Line 395, Address: 0x2edf78, Func Offset: 0x488
	// Line 396, Address: 0x2edf88, Func Offset: 0x498
	// Func End, Address: 0x2edfa8, Func Offset: 0x4b8
}

// zShrapnel_GameInit__Fv
// Start address: 0x2edfb0
void zShrapnel_GameInit()
{
	zShrapnelInitTable* curr;
	// Line 185, Address: 0x2edfb0, Func Offset: 0
	// Line 190, Address: 0x2edfb4, Func Offset: 0x4
	// Line 185, Address: 0x2edfb8, Func Offset: 0x8
	// Line 190, Address: 0x2edfc0, Func Offset: 0x10
	// Line 189, Address: 0x2edfc4, Func Offset: 0x14
	// Line 190, Address: 0x2edfc8, Func Offset: 0x18
	// Line 191, Address: 0x2edfd0, Func Offset: 0x20
	// Line 196, Address: 0x2edfe0, Func Offset: 0x30
	// Line 200, Address: 0x2edff0, Func Offset: 0x40
	// Line 201, Address: 0x2edff8, Func Offset: 0x48
	// Line 200, Address: 0x2edffc, Func Offset: 0x4c
	// Line 204, Address: 0x2ee000, Func Offset: 0x50
	// Line 201, Address: 0x2ee004, Func Offset: 0x54
	// Line 203, Address: 0x2ee008, Func Offset: 0x58
	// Line 201, Address: 0x2ee00c, Func Offset: 0x5c
	// Line 203, Address: 0x2ee010, Func Offset: 0x60
	// Line 202, Address: 0x2ee014, Func Offset: 0x64
	// Line 203, Address: 0x2ee020, Func Offset: 0x70
	// Line 204, Address: 0x2ee024, Func Offset: 0x74
	// Line 203, Address: 0x2ee028, Func Offset: 0x78
	// Line 204, Address: 0x2ee02c, Func Offset: 0x7c
	// Line 205, Address: 0x2ee034, Func Offset: 0x84
	// Line 204, Address: 0x2ee040, Func Offset: 0x90
	// Line 207, Address: 0x2ee044, Func Offset: 0x94
	// Line 204, Address: 0x2ee048, Func Offset: 0x98
	// Line 207, Address: 0x2ee064, Func Offset: 0xb4
	// Line 210, Address: 0x2ee070, Func Offset: 0xc0
	// Line 204, Address: 0x2ee074, Func Offset: 0xc4
	// Line 206, Address: 0x2ee080, Func Offset: 0xd0
	// Line 204, Address: 0x2ee084, Func Offset: 0xd4
	// Line 206, Address: 0x2ee088, Func Offset: 0xd8
	// Line 209, Address: 0x2ee08c, Func Offset: 0xdc
	// Line 210, Address: 0x2ee098, Func Offset: 0xe8
	// Line 213, Address: 0x2ee0a0, Func Offset: 0xf0
	// Line 210, Address: 0x2ee0a4, Func Offset: 0xf4
	// Line 213, Address: 0x2ee0a8, Func Offset: 0xf8
	// Line 216, Address: 0x2ee190, Func Offset: 0x1e0
	// Func End, Address: 0x2ee1a0, Func Offset: 0x1f0
}

// zFrag_Free__FP5zFrag
// Start address: 0x2ee1a0
void zFrag_Free(zFrag* frag)
{
	// Line 161, Address: 0x2ee1a0, Func Offset: 0
	// Line 164, Address: 0x2ee1b0, Func Offset: 0x10
	// Line 165, Address: 0x2ee1b8, Func Offset: 0x18
	// Line 167, Address: 0x2ee1c0, Func Offset: 0x20
	// Line 170, Address: 0x2ee1c8, Func Offset: 0x28
	// Line 171, Address: 0x2ee1dc, Func Offset: 0x3c
	// Line 172, Address: 0x2ee1ec, Func Offset: 0x4c
	// Line 176, Address: 0x2ee1f0, Func Offset: 0x50
	// Line 172, Address: 0x2ee1f8, Func Offset: 0x58
	// Line 177, Address: 0x2ee1fc, Func Offset: 0x5c
	// Line 172, Address: 0x2ee200, Func Offset: 0x60
	// Line 177, Address: 0x2ee204, Func Offset: 0x64
	// Line 176, Address: 0x2ee208, Func Offset: 0x68
	// Line 177, Address: 0x2ee20c, Func Offset: 0x6c
	// Line 180, Address: 0x2ee214, Func Offset: 0x74
	// Line 181, Address: 0x2ee224, Func Offset: 0x84
	// Line 182, Address: 0x2ee230, Func Offset: 0x90
	// Func End, Address: 0x2ee240, Func Offset: 0xa0
}

// zFrag_Alloc__F9zFragType
// Start address: 0x2ee240
zFrag* zFrag_Alloc(zFragType type)
{
	zFrag* result;
	// Line 130, Address: 0x2ee240, Func Offset: 0
	// Line 136, Address: 0x2ee250, Func Offset: 0x10
	// Line 139, Address: 0x2ee25c, Func Offset: 0x1c
	// Line 140, Address: 0x2ee270, Func Offset: 0x30
	// Line 142, Address: 0x2ee280, Func Offset: 0x40
	// Line 143, Address: 0x2ee284, Func Offset: 0x44
	// Line 142, Address: 0x2ee288, Func Offset: 0x48
	// Line 143, Address: 0x2ee28c, Func Offset: 0x4c
	// Line 142, Address: 0x2ee290, Func Offset: 0x50
	// Line 143, Address: 0x2ee294, Func Offset: 0x54
	// Line 146, Address: 0x2ee29c, Func Offset: 0x5c
	// Line 147, Address: 0x2ee2ac, Func Offset: 0x6c
	// Line 149, Address: 0x2ee2b8, Func Offset: 0x78
	// Line 151, Address: 0x2ee2c4, Func Offset: 0x84
	// Line 154, Address: 0x2ee2c8, Func Offset: 0x88
	// Func End, Address: 0x2ee2d0, Func Offset: 0x90
}

