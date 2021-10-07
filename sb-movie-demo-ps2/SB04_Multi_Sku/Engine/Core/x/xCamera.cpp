



void xCameraRotate(xCamera* cam, xVec3& v, float32 roll, float32 time, float32 accel, float32 decl);
void xCameraRotate(xCamera* cam, xMat3x3& m, float32 time, float32 accel, float32 decl);
void xCameraLookYPR(xCamera* cam, uint32 flags, float32 yaw, float32 pitch, float32 roll, float32 tm, float32 tm_acc, float32 tm_dec);
void xCameraLook(xCamera* cam, uint32 flags, xQuat* orn_goal, float32 tm, float32 tm_acc, float32 tm_dec);
void xCameraFOV(xCamera* cam, float32 fov, float32 maxSpeed, float32 dt);
void xCameraMove(xCamera* cam, xVec3& loc, float32 maxSpeed);
void xCameraMove(xCamera* cam, xVec3& loc);
void xCameraMove(xCamera* cam, uint32 flags, float32 dgoal, float32 hgoal, float32 pgoal, float32 tm, float32 tm_acc, float32 tm_dec);
void xCameraDoCollisions(int32 do_collis, int32 owner);
void xCameraSetTargetOMatrix(xCamera* cam, xMat4x3* mat);
void xCameraSetTargetMatrix(xCamera* cam, xMat4x3* mat);
void xCameraSetScene(xCamera* cam, xScene* sc);
void xCameraUpdate(xCamera* cam, float32 dt);
void _xCameraUpdate(xCamera* cam, float32 dt);
void SweptSphereHitsCameraEnt(xRay3* ray, xQCData* qcd, xEnt* ent, void* data);
void DualCamHitsCameraEnt(xRay3* ray, xQCData* qcd, xEnt* ent, void* data);
void xCam_worldtocyl(float32& d, float32& h, float32& p, xMat4x3* tgt_mat, xVec3* v, uint32 flags);
void xCam_buildbasis(xCamera* cam);
void xCameraReset(xCamera* cam, float32 d, float32 h, float32 pitch);
void xCameraExit(xCamera* cam);
void xCameraInit(xCamera* cam);

// xCameraRotate__FP7xCameraRC5xVec3ffff
// Start address: 0x4328e0
void xCameraRotate(xCamera* cam, xVec3& v, float32 roll, float32 time, float32 accel, float32 decl)
{
	// Line 2281, Address: 0x4328e0, Func Offset: 0
	// Line 2289, Address: 0x432908, Func Offset: 0x28
	// Line 2281, Address: 0x432910, Func Offset: 0x30
	// Line 2289, Address: 0x43291c, Func Offset: 0x3c
	// Line 2290, Address: 0x43292c, Func Offset: 0x4c
	// Line 2289, Address: 0x432934, Func Offset: 0x54
	// Line 2290, Address: 0x432938, Func Offset: 0x58
	// Line 2293, Address: 0x432978, Func Offset: 0x98
	// Line 2299, Address: 0x43298c, Func Offset: 0xac
	// Line 2300, Address: 0x4329a0, Func Offset: 0xc0
	// Line 2301, Address: 0x4329b4, Func Offset: 0xd4
	// Line 2304, Address: 0x4329c8, Func Offset: 0xe8
	// Line 2307, Address: 0x4329dc, Func Offset: 0xfc
	// Line 2308, Address: 0x4329e0, Func Offset: 0x100
	// Line 2309, Address: 0x4329e4, Func Offset: 0x104
	// Line 2312, Address: 0x4329e8, Func Offset: 0x108
	// Line 2313, Address: 0x4329f0, Func Offset: 0x110
	// Line 2305, Address: 0x432a80, Func Offset: 0x1a0
	// Line 2313, Address: 0x432a88, Func Offset: 0x1a8
	// Func End, Address: 0x432aac, Func Offset: 0x1cc
}

// xCameraRotate__FP7xCameraRC7xMat3x3fff
// Start address: 0x432ab0
void xCameraRotate(xCamera* cam, xMat3x3& m, float32 time, float32 accel, float32 decl)
{
	xVec3 eu;
	// Line 2244, Address: 0x432ab0, Func Offset: 0
	// Line 2251, Address: 0x432ab4, Func Offset: 0x4
	// Line 2244, Address: 0x432ab8, Func Offset: 0x8
	// Line 2254, Address: 0x432ad4, Func Offset: 0x24
	// Line 2244, Address: 0x432ad8, Func Offset: 0x28
	// Line 2251, Address: 0x432adc, Func Offset: 0x2c
	// Line 2254, Address: 0x432af8, Func Offset: 0x48
	// Line 2255, Address: 0x432b00, Func Offset: 0x50
	// Line 2259, Address: 0x432b08, Func Offset: 0x58
	// Line 2256, Address: 0x432b0c, Func Offset: 0x5c
	// Line 2259, Address: 0x432b10, Func Offset: 0x60
	// Line 2255, Address: 0x432b14, Func Offset: 0x64
	// Line 2256, Address: 0x432b18, Func Offset: 0x68
	// Line 2257, Address: 0x432b20, Func Offset: 0x70
	// Line 2259, Address: 0x432b24, Func Offset: 0x74
	// Line 2265, Address: 0x432b2c, Func Offset: 0x7c
	// Line 2266, Address: 0x432b44, Func Offset: 0x94
	// Line 2265, Address: 0x432b48, Func Offset: 0x98
	// Line 2266, Address: 0x432b80, Func Offset: 0xd0
	// Line 2265, Address: 0x432b84, Func Offset: 0xd4
	// Line 2266, Address: 0x432b90, Func Offset: 0xe0
	// Line 2269, Address: 0x432b98, Func Offset: 0xe8
	// Line 2272, Address: 0x432bac, Func Offset: 0xfc
	// Line 2273, Address: 0x432bb0, Func Offset: 0x100
	// Line 2274, Address: 0x432bb4, Func Offset: 0x104
	// Line 2277, Address: 0x432bb8, Func Offset: 0x108
	// Line 2278, Address: 0x432bc0, Func Offset: 0x110
	// Line 2270, Address: 0x432c20, Func Offset: 0x170
	// Line 2278, Address: 0x432c28, Func Offset: 0x178
	// Func End, Address: 0x432c48, Func Offset: 0x198
}

// xCameraLookYPR__FP7xCameraUiffffff
// Start address: 0x432c50
void xCameraLookYPR(xCamera* cam, uint32 flags, float32 yaw, float32 pitch, float32 roll, float32 tm, float32 tm_acc, float32 tm_dec)
{
	float32 s;
	// Line 2194, Address: 0x432c50, Func Offset: 0
	// Line 2202, Address: 0x432c54, Func Offset: 0x4
	// Line 2194, Address: 0x432c58, Func Offset: 0x8
	// Line 2213, Address: 0x432c5c, Func Offset: 0xc
	// Line 2194, Address: 0x432c60, Func Offset: 0x10
	// Line 2202, Address: 0x432c64, Func Offset: 0x14
	// Line 2194, Address: 0x432c68, Func Offset: 0x18
	// Line 2202, Address: 0x432c78, Func Offset: 0x28
	// Line 2213, Address: 0x432c80, Func Offset: 0x30
	// Line 2202, Address: 0x432c88, Func Offset: 0x38
	// Line 2209, Address: 0x432c98, Func Offset: 0x48
	// Line 2210, Address: 0x432c9c, Func Offset: 0x4c
	// Line 2213, Address: 0x432ca0, Func Offset: 0x50
	// Line 2214, Address: 0x432ca8, Func Offset: 0x58
	// Line 2217, Address: 0x432cb4, Func Offset: 0x64
	// Line 2220, Address: 0x432cb8, Func Offset: 0x68
	// Line 2218, Address: 0x432cbc, Func Offset: 0x6c
	// Line 2220, Address: 0x432cc0, Func Offset: 0x70
	// Line 2221, Address: 0x432cc8, Func Offset: 0x78
	// Line 2222, Address: 0x432d24, Func Offset: 0xd4
	// Line 2225, Address: 0x432d2c, Func Offset: 0xdc
	// Line 2231, Address: 0x432d30, Func Offset: 0xe0
	// Line 2227, Address: 0x432d3c, Func Offset: 0xec
	// Line 2225, Address: 0x432d40, Func Offset: 0xf0
	// Line 2231, Address: 0x432d48, Func Offset: 0xf8
	// Line 2227, Address: 0x432d4c, Func Offset: 0xfc
	// Line 2231, Address: 0x432d50, Func Offset: 0x100
	// Line 2228, Address: 0x432d64, Func Offset: 0x114
	// Line 2229, Address: 0x432d68, Func Offset: 0x118
	// Line 2231, Address: 0x432d6c, Func Offset: 0x11c
	// Line 2232, Address: 0x432d70, Func Offset: 0x120
	// Line 2233, Address: 0x432d84, Func Offset: 0x134
	// Line 2234, Address: 0x432d98, Func Offset: 0x148
	// Line 2235, Address: 0x432dac, Func Offset: 0x15c
	// Func End, Address: 0x432dc8, Func Offset: 0x178
}

// xCameraLook__FP7xCameraUiPC5xQuatfff
// Start address: 0x432dd0
void xCameraLook(xCamera* cam, uint32 flags, xQuat* orn_goal, float32 tm, float32 tm_acc, float32 tm_dec)
{
	float32 s;
	// Line 2150, Address: 0x432dd0, Func Offset: 0
	// Line 2158, Address: 0x432dd4, Func Offset: 0x4
	// Line 2150, Address: 0x432dd8, Func Offset: 0x8
	// Line 2163, Address: 0x432ddc, Func Offset: 0xc
	// Line 2150, Address: 0x432de0, Func Offset: 0x10
	// Line 2161, Address: 0x432de4, Func Offset: 0x14
	// Line 2150, Address: 0x432de8, Func Offset: 0x18
	// Line 2158, Address: 0x432dec, Func Offset: 0x1c
	// Line 2161, Address: 0x432df4, Func Offset: 0x24
	// Line 2163, Address: 0x432e04, Func Offset: 0x34
	// Line 2158, Address: 0x432e08, Func Offset: 0x38
	// Line 2161, Address: 0x432e14, Func Offset: 0x44
	// Line 2163, Address: 0x432e20, Func Offset: 0x50
	// Line 2164, Address: 0x432e28, Func Offset: 0x58
	// Line 2167, Address: 0x432e34, Func Offset: 0x64
	// Line 2168, Address: 0x432e3c, Func Offset: 0x6c
	// Line 2169, Address: 0x432e98, Func Offset: 0xc8
	// Line 2172, Address: 0x432ea0, Func Offset: 0xd0
	// Line 2178, Address: 0x432ea4, Func Offset: 0xd4
	// Line 2174, Address: 0x432eb0, Func Offset: 0xe0
	// Line 2179, Address: 0x432eb4, Func Offset: 0xe4
	// Line 2172, Address: 0x432ebc, Func Offset: 0xec
	// Line 2178, Address: 0x432ec4, Func Offset: 0xf4
	// Line 2174, Address: 0x432ec8, Func Offset: 0xf8
	// Line 2178, Address: 0x432ecc, Func Offset: 0xfc
	// Line 2175, Address: 0x432ee0, Func Offset: 0x110
	// Line 2176, Address: 0x432ee4, Func Offset: 0x114
	// Line 2178, Address: 0x432ee8, Func Offset: 0x118
	// Line 2179, Address: 0x432ef0, Func Offset: 0x120
	// Line 2180, Address: 0x432efc, Func Offset: 0x12c
	// Line 2181, Address: 0x432f80, Func Offset: 0x1b0
	// Line 2180, Address: 0x432f88, Func Offset: 0x1b8
	// Line 2181, Address: 0x432fa8, Func Offset: 0x1d8
	// Func End, Address: 0x432fbc, Func Offset: 0x1ec
}

// xCameraFOV__FP7xCamerafff
// Start address: 0x432fc0
void xCameraFOV(xCamera* cam, float32 fov, float32 maxSpeed, float32 dt)
{
	float32 speed;
	float32 len;
	// Line 2113, Address: 0x432fc0, Func Offset: 0
	// Line 2114, Address: 0x432fc4, Func Offset: 0x4
	// Line 2116, Address: 0x432fd0, Func Offset: 0x10
	// Line 2118, Address: 0x432fe4, Func Offset: 0x24
	// Line 2119, Address: 0x432fe8, Func Offset: 0x28
	// Line 2121, Address: 0x432ff8, Func Offset: 0x38
	// Line 2122, Address: 0x433008, Func Offset: 0x48
	// Line 2132, Address: 0x433010, Func Offset: 0x50
	// Line 2125, Address: 0x433018, Func Offset: 0x58
	// Line 2132, Address: 0x433028, Func Offset: 0x68
	// Func End, Address: 0x433030, Func Offset: 0x70
}

// xCameraMove__FP7xCameraRC5xVec3f
// Start address: 0x433030
void xCameraMove(xCamera* cam, xVec3& loc, float32 maxSpeed)
{
	// Line 2088, Address: 0x433030, Func Offset: 0
	// Line 2079, Address: 0x433038, Func Offset: 0x8
	// Line 2088, Address: 0x43303c, Func Offset: 0xc
	// Line 2089, Address: 0x433048, Func Offset: 0x18
	// Line 2088, Address: 0x433050, Func Offset: 0x20
	// Line 2089, Address: 0x433058, Func Offset: 0x28
	// Line 2088, Address: 0x43305c, Func Offset: 0x2c
	// Line 2089, Address: 0x433060, Func Offset: 0x30
	// Line 2090, Address: 0x433074, Func Offset: 0x44
	// Line 2092, Address: 0x43308c, Func Offset: 0x5c
	// Line 2095, Address: 0x4330b8, Func Offset: 0x88
	// Line 2098, Address: 0x4330bc, Func Offset: 0x8c
	// Line 2095, Address: 0x4330c0, Func Offset: 0x90
	// Line 2098, Address: 0x4330d4, Func Offset: 0xa4
	// Line 2099, Address: 0x4330e0, Func Offset: 0xb0
	// Line 2100, Address: 0x4330e8, Func Offset: 0xb8
	// Func End, Address: 0x433114, Func Offset: 0xe4
}

// xCameraMove__FP7xCameraRC5xVec3
// Start address: 0x433120
void xCameraMove(xCamera* cam, xVec3& loc)
{
	// Line 2072, Address: 0x433120, Func Offset: 0
	// Line 2074, Address: 0x433124, Func Offset: 0x4
	// Line 2072, Address: 0x433128, Func Offset: 0x8
	// Line 2074, Address: 0x433154, Func Offset: 0x34
	// Line 2075, Address: 0x433160, Func Offset: 0x40
	// Line 2076, Address: 0x433168, Func Offset: 0x48
	// Func End, Address: 0x433170, Func Offset: 0x50
}

// xCameraMove__FP7xCameraUiffffff
// Start address: 0x433170
void xCameraMove(xCamera* cam, uint32 flags, float32 dgoal, float32 hgoal, float32 pgoal, float32 tm, float32 tm_acc, float32 tm_dec)
{
	float32 s;
	// Line 2019, Address: 0x433170, Func Offset: 0
	// Line 2027, Address: 0x433174, Func Offset: 0x4
	// Line 2019, Address: 0x433178, Func Offset: 0x8
	// Line 2034, Address: 0x43317c, Func Offset: 0xc
	// Line 2019, Address: 0x433180, Func Offset: 0x10
	// Line 2027, Address: 0x433184, Func Offset: 0x14
	// Line 2019, Address: 0x433188, Func Offset: 0x18
	// Line 2034, Address: 0x43318c, Func Offset: 0x1c
	// Line 2019, Address: 0x433194, Func Offset: 0x24
	// Line 2027, Address: 0x4331a0, Func Offset: 0x30
	// Line 2030, Address: 0x4331b8, Func Offset: 0x48
	// Line 2031, Address: 0x4331bc, Func Offset: 0x4c
	// Line 2034, Address: 0x4331c0, Func Offset: 0x50
	// Line 2035, Address: 0x4331c8, Func Offset: 0x58
	// Line 2038, Address: 0x4331d4, Func Offset: 0x64
	// Line 2039, Address: 0x4331d8, Func Offset: 0x68
	// Line 2040, Address: 0x4331dc, Func Offset: 0x6c
	// Line 2041, Address: 0x4331e0, Func Offset: 0x70
	// Line 2043, Address: 0x4332a4, Func Offset: 0x134
	// Line 2046, Address: 0x4332a8, Func Offset: 0x138
	// Line 2043, Address: 0x4332ac, Func Offset: 0x13c
	// Line 2046, Address: 0x4332b0, Func Offset: 0x140
	// Line 2043, Address: 0x4332b4, Func Offset: 0x144
	// Line 2046, Address: 0x4332b8, Func Offset: 0x148
	// Line 2043, Address: 0x4332bc, Func Offset: 0x14c
	// Line 2046, Address: 0x4332cc, Func Offset: 0x15c
	// Line 2048, Address: 0x4332ec, Func Offset: 0x17c
	// Line 2051, Address: 0x4332f4, Func Offset: 0x184
	// Line 2057, Address: 0x4332f8, Func Offset: 0x188
	// Line 2053, Address: 0x433304, Func Offset: 0x194
	// Line 2051, Address: 0x433308, Func Offset: 0x198
	// Line 2057, Address: 0x433310, Func Offset: 0x1a0
	// Line 2053, Address: 0x433314, Func Offset: 0x1a4
	// Line 2057, Address: 0x433318, Func Offset: 0x1a8
	// Line 2054, Address: 0x43332c, Func Offset: 0x1bc
	// Line 2055, Address: 0x433330, Func Offset: 0x1c0
	// Line 2058, Address: 0x433334, Func Offset: 0x1c4
	// Line 2059, Address: 0x433344, Func Offset: 0x1d4
	// Line 2060, Address: 0x433354, Func Offset: 0x1e4
	// Line 2062, Address: 0x433384, Func Offset: 0x214
	// Func End, Address: 0x4333a4, Func Offset: 0x234
}

// xCameraDoCollisions__Fii
// Start address: 0x4333b0
void xCameraDoCollisions(int32 do_collis, int32 owner)
{
	// Line 2003, Address: 0x4333b0, Func Offset: 0
	// Line 2002, Address: 0x4333b8, Func Offset: 0x8
	// Line 2003, Address: 0x4333bc, Func Offset: 0xc
	// Line 2002, Address: 0x4333c0, Func Offset: 0x10
	// Line 2003, Address: 0x4333c4, Func Offset: 0x14
	// Line 2002, Address: 0x4333c8, Func Offset: 0x18
	// Line 2003, Address: 0x4333d4, Func Offset: 0x24
	// Line 2004, Address: 0x4333dc, Func Offset: 0x2c
	// Line 2005, Address: 0x4333e8, Func Offset: 0x38
	// Func End, Address: 0x4333f0, Func Offset: 0x40
}

// xCameraSetTargetOMatrix__FP7xCameraP7xMat4x3
// Start address: 0x4333f0
void xCameraSetTargetOMatrix(xCamera* cam, xMat4x3* mat)
{
	// Line 1915, Address: 0x4333f0, Func Offset: 0
	// Func End, Address: 0x4333f8, Func Offset: 0x8
}

// xCameraSetTargetMatrix__FP7xCameraP7xMat4x3
// Start address: 0x433400
void xCameraSetTargetMatrix(xCamera* cam, xMat4x3* mat)
{
	// Line 1909, Address: 0x433400, Func Offset: 0
	// Func End, Address: 0x433408, Func Offset: 0x8
}

// xCameraSetScene__FP7xCameraP6xScene
// Start address: 0x433410
void xCameraSetScene(xCamera* cam, xScene* sc)
{
	// Line 1885, Address: 0x433410, Func Offset: 0
	// Line 1887, Address: 0x43341c, Func Offset: 0xc
	// Line 1888, Address: 0x433420, Func Offset: 0x10
	// Line 1889, Address: 0x433440, Func Offset: 0x30
	// Func End, Address: 0x433450, Func Offset: 0x40
}

// xCameraUpdate__FP7xCameraf
// Start address: 0x433450
void xCameraUpdate(xCamera* cam, float32 dt)
{
	int32 i;
	int32 num_updates;
	float32 sdt;
	// Line 1720, Address: 0x433450, Func Offset: 0
	// Line 1813, Address: 0x433454, Func Offset: 0x4
	// Line 1720, Address: 0x433458, Func Offset: 0x8
	// Line 1813, Address: 0x43345c, Func Offset: 0xc
	// Line 1720, Address: 0x433460, Func Offset: 0x10
	// Line 1813, Address: 0x433478, Func Offset: 0x28
	// Line 1819, Address: 0x433484, Func Offset: 0x34
	// Line 1813, Address: 0x433488, Func Offset: 0x38
	// Line 1818, Address: 0x43348c, Func Offset: 0x3c
	// Line 1819, Address: 0x433490, Func Offset: 0x40
	// Line 1818, Address: 0x433494, Func Offset: 0x44
	// Line 1819, Address: 0x4334a0, Func Offset: 0x50
	// Line 1824, Address: 0x4334a8, Func Offset: 0x58
	// Line 1821, Address: 0x4334b4, Func Offset: 0x64
	// Line 1824, Address: 0x4334b8, Func Offset: 0x68
	// Line 1821, Address: 0x4334c0, Func Offset: 0x70
	// Line 1824, Address: 0x4334c4, Func Offset: 0x74
	// Func End, Address: 0x4334fc, Func Offset: 0xac
}

// _xCameraUpdate__FP7xCameraf
// Start address: 0x433500
void _xCameraUpdate(xCamera* cam, float32 dt)
{
	float32 wcvx;
	float32 wcvy;
	float32 wcvz;
	float32 m;
	float32 dcv;
	float32 hcv;
	float32 pcv;
	float32 tnext;
	float32 dtg;
	float32 htg;
	float32 ptg;
	float32 dsv;
	float32 hsv;
	float32 psv;
	float32 T_inv;
	float32 T_inv;
	float32 it;
	float32 ot;
	float32 T_inv;
	float32 dpv;
	float32 hpv;
	float32 ppv;
	float32 vax;
	float32 vay;
	float32 vaz;
	float32 s;
	float32 dtg;
	float32 dtg;
	float32 dtg;
	float32 htg;
	float32 htg;
	float32 htg;
	float32 ptg;
	float32 dphi;
	float32 dplo;
	float32 ptg;
	float32 ptg;
	xVec3 oeu;
	xVec3 eu;
	float32 m;
	float32 ycv;
	float32 pcv;
	float32 rcv;
	float32 tnext;
	float32 ytg;
	float32 ptg;
	float32 rtg;
	float32 ysv;
	float32 psv;
	float32 rsv;
	float32 T_inv;
	float32 T_inv;
	float32 it;
	float32 ot;
	float32 T_inv;
	float32 ypv;
	float32 ppv;
	float32 rpv;
	float32 vax;
	float32 vay;
	float32 vaz;
	float32 ytg;
	float32 ptg;
	float32 rtg;
	xQuat oq;
	xQuat qdiff_o_c;
	xRot rot_cv;
	xVec3 f;
	float32 atx;
	float32 aty;
	float32 atz;
	float32 dist;
	float32 dx__;
	float32 dz__;
	float32 dist2;
	float32 dist_inv;
	float32 mpx;
	float32 mpy;
	float32 mpz;
	float32 s;
	xMat3x3 des_mat;
	xMat3x3 latgt;
	float32 ang_dist;
	xQuat a;
	xQuat b;
	xQuat o;
	float32 s;
	xQuat desq;
	xQuat difq;
	xQuat newq;
	dualCamInfo dualCamInfo;
	xSweptSphere& sws;
	xVec3 tgtpos;
	float32 swSphereRadius;
	float32 farClipUnused;
	xRay3 ray;
	float32 one_len;
	float32 dx;
	float32 dy;
	float32 dz;
	float32 dist;
	float32 stopdist;
	float32 last_dt;
	int8 @14283;
	// Line 945, Address: 0x433500, Func Offset: 0
	// Line 948, Address: 0x43355c, Func Offset: 0x5c
	// Line 952, Address: 0x433568, Func Offset: 0x68
	// Line 962, Address: 0x433584, Func Offset: 0x84
	// Line 970, Address: 0x4335a0, Func Offset: 0xa0
	// Line 977, Address: 0x4335ac, Func Offset: 0xac
	// Line 969, Address: 0x4335b0, Func Offset: 0xb0
	// Line 970, Address: 0x4335c0, Func Offset: 0xc0
	// Line 969, Address: 0x4335c4, Func Offset: 0xc4
	// Line 971, Address: 0x4335d4, Func Offset: 0xd4
	// Line 969, Address: 0x4335d8, Func Offset: 0xd8
	// Line 971, Address: 0x4335dc, Func Offset: 0xdc
	// Line 974, Address: 0x4335e4, Func Offset: 0xe4
	// Line 977, Address: 0x4335f8, Func Offset: 0xf8
	// Line 979, Address: 0x433600, Func Offset: 0x100
	// Line 981, Address: 0x433608, Func Offset: 0x108
	// Line 993, Address: 0x43360c, Func Offset: 0x10c
	// Line 979, Address: 0x433610, Func Offset: 0x110
	// Line 981, Address: 0x433618, Func Offset: 0x118
	// Line 994, Address: 0x43361c, Func Offset: 0x11c
	// Line 981, Address: 0x433620, Func Offset: 0x120
	// Line 993, Address: 0x433624, Func Offset: 0x124
	// Line 994, Address: 0x433628, Func Offset: 0x128
	// Line 981, Address: 0x433634, Func Offset: 0x134
	// Line 993, Address: 0x433638, Func Offset: 0x138
	// Line 994, Address: 0x43363c, Func Offset: 0x13c
	// Line 979, Address: 0x433648, Func Offset: 0x148
	// Line 994, Address: 0x43364c, Func Offset: 0x14c
	// Line 998, Address: 0x433658, Func Offset: 0x158
	// Line 1004, Address: 0x433664, Func Offset: 0x164
	// Line 1006, Address: 0x43366c, Func Offset: 0x16c
	// Line 1008, Address: 0x433678, Func Offset: 0x178
	// Line 1009, Address: 0x433688, Func Offset: 0x188
	// Line 1010, Address: 0x43368c, Func Offset: 0x18c
	// Line 1012, Address: 0x4336a0, Func Offset: 0x1a0
	// Line 1029, Address: 0x4336a8, Func Offset: 0x1a8
	// Line 1030, Address: 0x4336b0, Func Offset: 0x1b0
	// Line 1031, Address: 0x4336b8, Func Offset: 0x1b8
	// Line 1029, Address: 0x4336c0, Func Offset: 0x1c0
	// Line 1030, Address: 0x4336c4, Func Offset: 0x1c4
	// Line 1031, Address: 0x4336c8, Func Offset: 0x1c8
	// Line 1037, Address: 0x4336ec, Func Offset: 0x1ec
	// Line 1039, Address: 0x4336fc, Func Offset: 0x1fc
	// Line 1040, Address: 0x433708, Func Offset: 0x208
	// Line 1041, Address: 0x433710, Func Offset: 0x210
	// Line 1042, Address: 0x433718, Func Offset: 0x218
	// Line 1039, Address: 0x43371c, Func Offset: 0x21c
	// Line 1042, Address: 0x433720, Func Offset: 0x220
	// Line 1039, Address: 0x433724, Func Offset: 0x224
	// Line 1040, Address: 0x433728, Func Offset: 0x228
	// Line 1041, Address: 0x43372c, Func Offset: 0x22c
	// Line 1048, Address: 0x433730, Func Offset: 0x230
	// Line 1050, Address: 0x433748, Func Offset: 0x248
	// Line 1051, Address: 0x43375c, Func Offset: 0x25c
	// Line 1052, Address: 0x433764, Func Offset: 0x264
	// Line 1050, Address: 0x433768, Func Offset: 0x268
	// Line 1052, Address: 0x433778, Func Offset: 0x278
	// Line 1053, Address: 0x43377c, Func Offset: 0x27c
	// Line 1051, Address: 0x433784, Func Offset: 0x284
	// Line 1052, Address: 0x433788, Func Offset: 0x288
	// Line 1059, Address: 0x43378c, Func Offset: 0x28c
	// Line 1066, Address: 0x4337a0, Func Offset: 0x2a0
	// Line 1070, Address: 0x4337ac, Func Offset: 0x2ac
	// Line 1064, Address: 0x4337b0, Func Offset: 0x2b0
	// Line 1065, Address: 0x4337bc, Func Offset: 0x2bc
	// Line 1066, Address: 0x4337c4, Func Offset: 0x2c4
	// Line 1065, Address: 0x4337cc, Func Offset: 0x2cc
	// Line 1070, Address: 0x4337dc, Func Offset: 0x2dc
	// Line 1067, Address: 0x4337e0, Func Offset: 0x2e0
	// Line 1070, Address: 0x4337f0, Func Offset: 0x2f0
	// Line 1071, Address: 0x4337f4, Func Offset: 0x2f4
	// Line 1068, Address: 0x4337fc, Func Offset: 0x2fc
	// Line 1070, Address: 0x433804, Func Offset: 0x304
	// Line 1071, Address: 0x433810, Func Offset: 0x310
	// Line 1072, Address: 0x433814, Func Offset: 0x314
	// Line 1071, Address: 0x433820, Func Offset: 0x320
	// Line 1072, Address: 0x433824, Func Offset: 0x324
	// Line 1086, Address: 0x433828, Func Offset: 0x328
	// Line 1088, Address: 0x43382c, Func Offset: 0x32c
	// Line 1087, Address: 0x433830, Func Offset: 0x330
	// Line 1089, Address: 0x433838, Func Offset: 0x338
	// Line 1090, Address: 0x43383c, Func Offset: 0x33c
	// Line 1087, Address: 0x433840, Func Offset: 0x340
	// Line 1090, Address: 0x433844, Func Offset: 0x344
	// Line 1087, Address: 0x433848, Func Offset: 0x348
	// Line 1090, Address: 0x43384c, Func Offset: 0x34c
	// Line 1095, Address: 0x433864, Func Offset: 0x364
	// Line 1090, Address: 0x433868, Func Offset: 0x368
	// Line 1095, Address: 0x43386c, Func Offset: 0x36c
	// Line 1096, Address: 0x433870, Func Offset: 0x370
	// Line 1095, Address: 0x433874, Func Offset: 0x374
	// Line 1096, Address: 0x433878, Func Offset: 0x378
	// Line 1101, Address: 0x433898, Func Offset: 0x398
	// Line 1104, Address: 0x4338a0, Func Offset: 0x3a0
	// Line 1105, Address: 0x4338ac, Func Offset: 0x3ac
	// Line 1104, Address: 0x4338b0, Func Offset: 0x3b0
	// Line 1105, Address: 0x4338b4, Func Offset: 0x3b4
	// Line 1107, Address: 0x4338f0, Func Offset: 0x3f0
	// Line 1109, Address: 0x433920, Func Offset: 0x420
	// Line 1111, Address: 0x433940, Func Offset: 0x440
	// Line 1113, Address: 0x433978, Func Offset: 0x478
	// Line 1115, Address: 0x4339a8, Func Offset: 0x4a8
	// Line 1117, Address: 0x4339dc, Func Offset: 0x4dc
	// Line 1120, Address: 0x433a10, Func Offset: 0x510
	// Line 1121, Address: 0x433a24, Func Offset: 0x524
	// Line 1120, Address: 0x433a28, Func Offset: 0x528
	// Line 1121, Address: 0x433a2c, Func Offset: 0x52c
	// Line 1123, Address: 0x433a70, Func Offset: 0x570
	// Line 1125, Address: 0x433a80, Func Offset: 0x580
	// Line 1127, Address: 0x433aa0, Func Offset: 0x5a0
	// Line 1129, Address: 0x433ad8, Func Offset: 0x5d8
	// Line 1131, Address: 0x433ae8, Func Offset: 0x5e8
	// Line 1133, Address: 0x433b20, Func Offset: 0x620
	// Line 1136, Address: 0x433b34, Func Offset: 0x634
	// Line 1137, Address: 0x433b48, Func Offset: 0x648
	// Line 1136, Address: 0x433b4c, Func Offset: 0x64c
	// Line 1137, Address: 0x433b50, Func Offset: 0x650
	// Line 1138, Address: 0x433b6c, Func Offset: 0x66c
	// Line 1140, Address: 0x433ba8, Func Offset: 0x6a8
	// Line 1142, Address: 0x433bd4, Func Offset: 0x6d4
	// Line 1145, Address: 0x433bf0, Func Offset: 0x6f0
	// Line 1146, Address: 0x433c00, Func Offset: 0x700
	// Line 1147, Address: 0x433c10, Func Offset: 0x710
	// Line 1150, Address: 0x433c90, Func Offset: 0x790
	// Line 1152, Address: 0x433cbc, Func Offset: 0x7bc
	// Line 1155, Address: 0x433d1c, Func Offset: 0x81c
	// Line 1156, Address: 0x433d48, Func Offset: 0x848
	// Line 1158, Address: 0x433d50, Func Offset: 0x850
	// Line 1160, Address: 0x433d94, Func Offset: 0x894
	// Line 1162, Address: 0x433d9c, Func Offset: 0x89c
	// Line 1187, Address: 0x433de4, Func Offset: 0x8e4
	// Line 1194, Address: 0x433df4, Func Offset: 0x8f4
	// Line 1195, Address: 0x433e00, Func Offset: 0x900
	// Line 1197, Address: 0x433e0c, Func Offset: 0x90c
	// Line 1198, Address: 0x433e18, Func Offset: 0x918
	// Line 1197, Address: 0x433e20, Func Offset: 0x920
	// Line 1198, Address: 0x433e24, Func Offset: 0x924
	// Line 1197, Address: 0x433e28, Func Offset: 0x928
	// Line 1198, Address: 0x433e30, Func Offset: 0x930
	// Line 1199, Address: 0x433e3c, Func Offset: 0x93c
	// Line 1200, Address: 0x433e50, Func Offset: 0x950
	// Line 1204, Address: 0x433e64, Func Offset: 0x964
	// Line 1205, Address: 0x433e68, Func Offset: 0x968
	// Line 1206, Address: 0x433e6c, Func Offset: 0x96c
	// Line 1209, Address: 0x433e70, Func Offset: 0x970
	// Line 1204, Address: 0x433e7c, Func Offset: 0x97c
	// Line 1209, Address: 0x433e80, Func Offset: 0x980
	// Line 1205, Address: 0x433e90, Func Offset: 0x990
	// Line 1206, Address: 0x433e94, Func Offset: 0x994
	// Line 1209, Address: 0x433e98, Func Offset: 0x998
	// Line 1212, Address: 0x433ee8, Func Offset: 0x9e8
	// Line 1213, Address: 0x433ef4, Func Offset: 0x9f4
	// Line 1214, Address: 0x433f00, Func Offset: 0xa00
	// Line 1216, Address: 0x433f0c, Func Offset: 0xa0c
	// Line 1222, Address: 0x433f1c, Func Offset: 0xa1c
	// Line 1224, Address: 0x433f20, Func Offset: 0xa20
	// Line 1222, Address: 0x433f28, Func Offset: 0xa28
	// Line 1224, Address: 0x433f2c, Func Offset: 0xa2c
	// Line 1226, Address: 0x433f38, Func Offset: 0xa38
	// Line 1229, Address: 0x433f48, Func Offset: 0xa48
	// Line 1240, Address: 0x433f50, Func Offset: 0xa50
	// Line 1241, Address: 0x433f64, Func Offset: 0xa64
	// Line 1242, Address: 0x433f78, Func Offset: 0xa78
	// Line 1247, Address: 0x433f8c, Func Offset: 0xa8c
	// Line 1249, Address: 0x433f98, Func Offset: 0xa98
	// Line 1250, Address: 0x433fb0, Func Offset: 0xab0
	// Line 1249, Address: 0x433fb4, Func Offset: 0xab4
	// Line 1250, Address: 0x433fb8, Func Offset: 0xab8
	// Line 1251, Address: 0x433fc0, Func Offset: 0xac0
	// Line 1252, Address: 0x433fc4, Func Offset: 0xac4
	// Line 1251, Address: 0x433fc8, Func Offset: 0xac8
	// Line 1252, Address: 0x433fcc, Func Offset: 0xacc
	// Line 1251, Address: 0x433fd0, Func Offset: 0xad0
	// Line 1258, Address: 0x433fd4, Func Offset: 0xad4
	// Line 1260, Address: 0x433fec, Func Offset: 0xaec
	// Line 1261, Address: 0x434000, Func Offset: 0xb00
	// Line 1260, Address: 0x434004, Func Offset: 0xb04
	// Line 1261, Address: 0x434014, Func Offset: 0xb14
	// Line 1262, Address: 0x434018, Func Offset: 0xb18
	// Line 1263, Address: 0x43401c, Func Offset: 0xb1c
	// Line 1262, Address: 0x434020, Func Offset: 0xb20
	// Line 1263, Address: 0x434024, Func Offset: 0xb24
	// Line 1261, Address: 0x434028, Func Offset: 0xb28
	// Line 1262, Address: 0x43402c, Func Offset: 0xb2c
	// Line 1269, Address: 0x434030, Func Offset: 0xb30
	// Line 1276, Address: 0x434044, Func Offset: 0xb44
	// Line 1280, Address: 0x434050, Func Offset: 0xb50
	// Line 1274, Address: 0x434054, Func Offset: 0xb54
	// Line 1275, Address: 0x434060, Func Offset: 0xb60
	// Line 1274, Address: 0x434068, Func Offset: 0xb68
	// Line 1276, Address: 0x43406c, Func Offset: 0xb6c
	// Line 1275, Address: 0x434070, Func Offset: 0xb70
	// Line 1276, Address: 0x434074, Func Offset: 0xb74
	// Line 1277, Address: 0x434084, Func Offset: 0xb84
	// Line 1278, Address: 0x43408c, Func Offset: 0xb8c
	// Line 1280, Address: 0x4340a0, Func Offset: 0xba0
	// Line 1281, Address: 0x4340b0, Func Offset: 0xbb0
	// Line 1282, Address: 0x4340b8, Func Offset: 0xbb8
	// Line 1281, Address: 0x4340c0, Func Offset: 0xbc0
	// Line 1282, Address: 0x4340c4, Func Offset: 0xbc4
	// Line 1280, Address: 0x4340c8, Func Offset: 0xbc8
	// Line 1281, Address: 0x4340cc, Func Offset: 0xbcc
	// Line 1282, Address: 0x4340d0, Func Offset: 0xbd0
	// Line 1304, Address: 0x4340dc, Func Offset: 0xbdc
	// Line 1305, Address: 0x4340f4, Func Offset: 0xbf4
	// Line 1306, Address: 0x434104, Func Offset: 0xc04
	// Line 1309, Address: 0x434114, Func Offset: 0xc14
	// Line 1314, Address: 0x434128, Func Offset: 0xc28
	// Line 1317, Address: 0x434144, Func Offset: 0xc44
	// Line 1318, Address: 0x434158, Func Offset: 0xc58
	// Line 1319, Address: 0x43416c, Func Offset: 0xc6c
	// Line 1323, Address: 0x4341b0, Func Offset: 0xcb0
	// Line 1319, Address: 0x4341b4, Func Offset: 0xcb4
	// Line 1323, Address: 0x4341b8, Func Offset: 0xcb8
	// Line 1324, Address: 0x4341d4, Func Offset: 0xcd4
	// Line 1325, Address: 0x4341e8, Func Offset: 0xce8
	// Line 1329, Address: 0x43422c, Func Offset: 0xd2c
	// Line 1325, Address: 0x434230, Func Offset: 0xd30
	// Line 1329, Address: 0x434234, Func Offset: 0xd34
	// Line 1330, Address: 0x434250, Func Offset: 0xd50
	// Line 1331, Address: 0x434264, Func Offset: 0xd64
	// Line 1336, Address: 0x4342a4, Func Offset: 0xda4
	// Line 1356, Address: 0x4342b8, Func Offset: 0xdb8
	// Line 1357, Address: 0x4342c0, Func Offset: 0xdc0
	// Line 1359, Address: 0x4342c8, Func Offset: 0xdc8
	// Line 1364, Address: 0x4342d4, Func Offset: 0xdd4
	// Line 1373, Address: 0x4342e8, Func Offset: 0xde8
	// Line 1375, Address: 0x4342f8, Func Offset: 0xdf8
	// Line 1378, Address: 0x434300, Func Offset: 0xe00
	// Line 1543, Address: 0x434304, Func Offset: 0xe04
	// Line 1378, Address: 0x434308, Func Offset: 0xe08
	// Line 1543, Address: 0x43430c, Func Offset: 0xe0c
	// Line 1378, Address: 0x434310, Func Offset: 0xe10
	// Line 1543, Address: 0x434368, Func Offset: 0xe68
	// Line 1545, Address: 0x4343b4, Func Offset: 0xeb4
	// Line 1548, Address: 0x4343cc, Func Offset: 0xecc
	// Line 1545, Address: 0x4343d0, Func Offset: 0xed0
	// Line 1548, Address: 0x4343e0, Func Offset: 0xee0
	// Line 1545, Address: 0x4343e4, Func Offset: 0xee4
	// Line 1548, Address: 0x4343f4, Func Offset: 0xef4
	// Line 1545, Address: 0x4343fc, Func Offset: 0xefc
	// Line 1548, Address: 0x434404, Func Offset: 0xf04
	// Line 1545, Address: 0x43440c, Func Offset: 0xf0c
	// Line 1548, Address: 0x434410, Func Offset: 0xf10
	// Line 1550, Address: 0x43446c, Func Offset: 0xf6c
	// Line 1549, Address: 0x434478, Func Offset: 0xf78
	// Line 1550, Address: 0x434480, Func Offset: 0xf80
	// Line 1557, Address: 0x434498, Func Offset: 0xf98
	// Line 1550, Address: 0x4344a4, Func Offset: 0xfa4
	// Line 1557, Address: 0x4344a8, Func Offset: 0xfa8
	// Line 1559, Address: 0x4344dc, Func Offset: 0xfdc
	// Line 1566, Address: 0x4344fc, Func Offset: 0xffc
	// Line 1572, Address: 0x434538, Func Offset: 0x1038
	// Line 1573, Address: 0x434578, Func Offset: 0x1078
	// Line 1574, Address: 0x4345e0, Func Offset: 0x10e0
	// Line 1577, Address: 0x4345ec, Func Offset: 0x10ec
	// Line 1578, Address: 0x4345f8, Func Offset: 0x10f8
	// Line 1579, Address: 0x434608, Func Offset: 0x1108
	// Line 1582, Address: 0x434630, Func Offset: 0x1130
	// Line 1583, Address: 0x43464c, Func Offset: 0x114c
	// Line 1584, Address: 0x434668, Func Offset: 0x1168
	// Line 1585, Address: 0x434670, Func Offset: 0x1170
	// Line 1584, Address: 0x43467c, Func Offset: 0x117c
	// Line 1585, Address: 0x434680, Func Offset: 0x1180
	// Line 1587, Address: 0x4346a8, Func Offset: 0x11a8
	// Line 1588, Address: 0x4346b0, Func Offset: 0x11b0
	// Line 1590, Address: 0x4346d8, Func Offset: 0x11d8
	// Line 1595, Address: 0x4346e4, Func Offset: 0x11e4
	// Line 1597, Address: 0x4346f0, Func Offset: 0x11f0
	// Line 1600, Address: 0x434710, Func Offset: 0x1210
	// Line 1601, Address: 0x434714, Func Offset: 0x1214
	// Line 1600, Address: 0x434720, Func Offset: 0x1220
	// Line 1601, Address: 0x434744, Func Offset: 0x1244
	// Line 1611, Address: 0x43474c, Func Offset: 0x124c
	// Line 1612, Address: 0x43477c, Func Offset: 0x127c
	// Line 1621, Address: 0x434788, Func Offset: 0x1288
	// Line 1627, Address: 0x434790, Func Offset: 0x1290
	// Line 1639, Address: 0x4347cc, Func Offset: 0x12cc
	// Line 1640, Address: 0x4347d0, Func Offset: 0x12d0
	// Line 1637, Address: 0x4347d8, Func Offset: 0x12d8
	// Line 1640, Address: 0x4347dc, Func Offset: 0x12dc
	// Line 1639, Address: 0x4347e0, Func Offset: 0x12e0
	// Line 1641, Address: 0x4347e4, Func Offset: 0x12e4
	// Line 1640, Address: 0x4347e8, Func Offset: 0x12e8
	// Line 1647, Address: 0x4347ec, Func Offset: 0x12ec
	// Line 1639, Address: 0x4347f8, Func Offset: 0x12f8
	// Line 1640, Address: 0x434800, Func Offset: 0x1300
	// Line 1641, Address: 0x434810, Func Offset: 0x1310
	// Line 1647, Address: 0x434818, Func Offset: 0x1318
	// Line 1649, Address: 0x434820, Func Offset: 0x1320
	// Line 1653, Address: 0x434838, Func Offset: 0x1338
	// Line 1654, Address: 0x434884, Func Offset: 0x1384
	// Line 1653, Address: 0x434888, Func Offset: 0x1388
	// Line 1654, Address: 0x4348c0, Func Offset: 0x13c0
	// Line 1656, Address: 0x4348c8, Func Offset: 0x13c8
	// Line 1657, Address: 0x4348cc, Func Offset: 0x13cc
	// Line 1656, Address: 0x4348d0, Func Offset: 0x13d0
	// Line 1668, Address: 0x4348d4, Func Offset: 0x13d4
	// Line 1671, Address: 0x4348d8, Func Offset: 0x13d8
	// Line 1668, Address: 0x4348dc, Func Offset: 0x13dc
	// Line 1671, Address: 0x4348e0, Func Offset: 0x13e0
	// Line 1667, Address: 0x4348e4, Func Offset: 0x13e4
	// Line 1669, Address: 0x4348ec, Func Offset: 0x13ec
	// Line 1671, Address: 0x4348f4, Func Offset: 0x13f4
	// Line 1668, Address: 0x4348f8, Func Offset: 0x13f8
	// Line 1667, Address: 0x4348fc, Func Offset: 0x13fc
	// Line 1670, Address: 0x434900, Func Offset: 0x1400
	// Line 1669, Address: 0x434904, Func Offset: 0x1404
	// Line 1670, Address: 0x434908, Func Offset: 0x1408
	// Line 1671, Address: 0x434920, Func Offset: 0x1420
	// Line 1672, Address: 0x43492c, Func Offset: 0x142c
	// Line 1681, Address: 0x434930, Func Offset: 0x1430
	// Line 1682, Address: 0x434958, Func Offset: 0x1458
	// Line 1686, Address: 0x434984, Func Offset: 0x1484
	// Line 1689, Address: 0x4349a0, Func Offset: 0x14a0
	// Line 1690, Address: 0x4349bc, Func Offset: 0x14bc
	// Line 1691, Address: 0x4349d4, Func Offset: 0x14d4
	// Line 1692, Address: 0x4349f0, Func Offset: 0x14f0
	// Line 1693, Address: 0x434a04, Func Offset: 0x1504
	// Line 1696, Address: 0x434a18, Func Offset: 0x1518
	// Line 1701, Address: 0x434a20, Func Offset: 0x1520
	// Line 1704, Address: 0x434a30, Func Offset: 0x1530
	// Line 1705, Address: 0x434a4c, Func Offset: 0x154c
	// Line 1706, Address: 0x434a68, Func Offset: 0x1568
	// Line 1707, Address: 0x434a84, Func Offset: 0x1584
	// Line 1708, Address: 0x434a9c, Func Offset: 0x159c
	// Line 1711, Address: 0x434ab0, Func Offset: 0x15b0
	// Line 1712, Address: 0x434ab8, Func Offset: 0x15b8
	// Line 1714, Address: 0x434ad0, Func Offset: 0x15d0
	// Line 1716, Address: 0x434ad8, Func Offset: 0x15d8
	// Line 1717, Address: 0x434b40, Func Offset: 0x1640
	// Func End, Address: 0x434b9c, Func Offset: 0x169c
}

// SweptSphereHitsCameraEnt__FP6xSceneP5xRay3P7xQCDataP4xEntPv
// Start address: 0x434ba0
void SweptSphereHitsCameraEnt(xRay3* ray, xQCData* qcd, xEnt* ent, void* data)
{
	dualCamInfo* pDualCamData;
	uint32 hitBound;
	float32 oldrad;
	xBox tmpbox;
	xBox tmpbox;
	xRay3 lr;
	xMat3x3 mn;
	xModelInstance* collmod;
	// Line 832, Address: 0x434ba0, Func Offset: 0
	// Line 835, Address: 0x434bc0, Func Offset: 0x20
	// Line 838, Address: 0x434bcc, Func Offset: 0x2c
	// Line 839, Address: 0x434bdc, Func Offset: 0x3c
	// Line 841, Address: 0x434be4, Func Offset: 0x44
	// Line 844, Address: 0x434bf8, Func Offset: 0x58
	// Line 848, Address: 0x434c10, Func Offset: 0x70
	// Line 862, Address: 0x434c24, Func Offset: 0x84
	// Line 871, Address: 0x434c2c, Func Offset: 0x8c
	// Line 874, Address: 0x434c68, Func Offset: 0xc8
	// Line 875, Address: 0x434c6c, Func Offset: 0xcc
	// Line 876, Address: 0x434c70, Func Offset: 0xd0
	// Line 875, Address: 0x434c74, Func Offset: 0xd4
	// Line 876, Address: 0x434c7c, Func Offset: 0xdc
	// Line 877, Address: 0x434d4c, Func Offset: 0x1ac
	// Line 879, Address: 0x434d50, Func Offset: 0x1b0
	// Line 883, Address: 0x434d58, Func Offset: 0x1b8
	// Line 889, Address: 0x434d5c, Func Offset: 0x1bc
	// Line 883, Address: 0x434d60, Func Offset: 0x1c0
	// Line 889, Address: 0x434d64, Func Offset: 0x1c4
	// Line 883, Address: 0x434d6c, Func Offset: 0x1cc
	// Line 889, Address: 0x434dc0, Func Offset: 0x220
	// Line 891, Address: 0x434e0c, Func Offset: 0x26c
	// Line 899, Address: 0x434e14, Func Offset: 0x274
	// Line 902, Address: 0x434e18, Func Offset: 0x278
	// Line 899, Address: 0x434e1c, Func Offset: 0x27c
	// Line 902, Address: 0x434e40, Func Offset: 0x2a0
	// Line 903, Address: 0x434e48, Func Offset: 0x2a8
	// Line 904, Address: 0x434e88, Func Offset: 0x2e8
	// Line 905, Address: 0x434e98, Func Offset: 0x2f8
	// Line 915, Address: 0x434e9c, Func Offset: 0x2fc
	// Line 905, Address: 0x434ea8, Func Offset: 0x308
	// Line 906, Address: 0x434eb0, Func Offset: 0x310
	// Line 907, Address: 0x434ebc, Func Offset: 0x31c
	// Line 909, Address: 0x434ec4, Func Offset: 0x324
	// Line 915, Address: 0x434f3c, Func Offset: 0x39c
	// Line 922, Address: 0x434f88, Func Offset: 0x3e8
	// Line 923, Address: 0x434f90, Func Offset: 0x3f0
	// Line 853, Address: 0x434f9c, Func Offset: 0x3fc
	// Line 923, Address: 0x434fa0, Func Offset: 0x400
	// Line 854, Address: 0x434fac, Func Offset: 0x40c
	// Line 923, Address: 0x434fb0, Func Offset: 0x410
	// Line 856, Address: 0x434fb8, Func Offset: 0x418
	// Line 923, Address: 0x434fbc, Func Offset: 0x41c
	// Line 857, Address: 0x434fc8, Func Offset: 0x428
	// Line 923, Address: 0x434fcc, Func Offset: 0x42c
	// Line 859, Address: 0x434fd4, Func Offset: 0x434
	// Line 855, Address: 0x434fdc, Func Offset: 0x43c
	// Line 923, Address: 0x434fe0, Func Offset: 0x440
	// Line 856, Address: 0x434fe8, Func Offset: 0x448
	// Line 876, Address: 0x434ff0, Func Offset: 0x450
	// Line 927, Address: 0x434ffc, Func Offset: 0x45c
	// Line 928, Address: 0x435000, Func Offset: 0x460
	// Line 929, Address: 0x435010, Func Offset: 0x470
	// Func End, Address: 0x43502c, Func Offset: 0x48c
}

// DualCamHitsCameraEnt__FP6xSceneP5xRay3P7xQCDataP4xEntPv
// Start address: 0x435030
void DualCamHitsCameraEnt(xRay3* ray, xQCData* qcd, xEnt* ent, void* data)
{
	dualCamInfo* pDualCamData;
	uint8 usePartialCollision;
	xCollis tempCollis;
	uint32 hitBound;
	float32 oldrad;
	xBox tmpbox;
	xBox tmpbox;
	xRay3 lr;
	xMat3x3 mn;
	xModelInstance* collmod;
	// Line 666, Address: 0x435030, Func Offset: 0
	// Line 678, Address: 0x435034, Func Offset: 0x4
	// Line 666, Address: 0x435038, Func Offset: 0x8
	// Line 674, Address: 0x43505c, Func Offset: 0x2c
	// Line 678, Address: 0x435060, Func Offset: 0x30
	// Line 681, Address: 0x435080, Func Offset: 0x50
	// Line 682, Address: 0x435088, Func Offset: 0x58
	// Line 684, Address: 0x435090, Func Offset: 0x60
	// Line 692, Address: 0x43509c, Func Offset: 0x6c
	// Line 724, Address: 0x4350a4, Func Offset: 0x74
	// Line 727, Address: 0x4350b0, Func Offset: 0x80
	// Line 728, Address: 0x4350c0, Func Offset: 0x90
	// Line 700, Address: 0x4350c8, Func Offset: 0x98
	// Line 728, Address: 0x4350d0, Func Offset: 0xa0
	// Line 701, Address: 0x4350e0, Func Offset: 0xb0
	// Line 728, Address: 0x4350e4, Func Offset: 0xb4
	// Line 706, Address: 0x4350f0, Func Offset: 0xc0
	// Line 728, Address: 0x4350f4, Func Offset: 0xc4
	// Line 706, Address: 0x435100, Func Offset: 0xd0
	// Line 728, Address: 0x435104, Func Offset: 0xd4
	// Line 706, Address: 0x43510c, Func Offset: 0xdc
	// Line 728, Address: 0x435110, Func Offset: 0xe0
	// Line 706, Address: 0x435118, Func Offset: 0xe8
	// Line 728, Address: 0x43511c, Func Offset: 0xec
	// Line 707, Address: 0x435128, Func Offset: 0xf8
	// Line 728, Address: 0x43512c, Func Offset: 0xfc
	// Line 708, Address: 0x435134, Func Offset: 0x104
	// Line 706, Address: 0x43513c, Func Offset: 0x10c
	// Line 728, Address: 0x43514c, Func Offset: 0x11c
	// Line 730, Address: 0x43515c, Func Offset: 0x12c
	// Line 733, Address: 0x435170, Func Offset: 0x140
	// Line 737, Address: 0x435188, Func Offset: 0x158
	// Line 751, Address: 0x43519c, Func Offset: 0x16c
	// Line 760, Address: 0x4351a4, Func Offset: 0x174
	// Line 763, Address: 0x4351e0, Func Offset: 0x1b0
	// Line 764, Address: 0x4351e4, Func Offset: 0x1b4
	// Line 765, Address: 0x4351e8, Func Offset: 0x1b8
	// Line 764, Address: 0x4351ec, Func Offset: 0x1bc
	// Line 765, Address: 0x4351f4, Func Offset: 0x1c4
	// Line 766, Address: 0x4352c4, Func Offset: 0x294
	// Line 768, Address: 0x4352c8, Func Offset: 0x298
	// Line 772, Address: 0x4352d0, Func Offset: 0x2a0
	// Line 778, Address: 0x4352d4, Func Offset: 0x2a4
	// Line 772, Address: 0x4352d8, Func Offset: 0x2a8
	// Line 778, Address: 0x4352dc, Func Offset: 0x2ac
	// Line 772, Address: 0x4352e4, Func Offset: 0x2b4
	// Line 778, Address: 0x435338, Func Offset: 0x308
	// Line 780, Address: 0x435384, Func Offset: 0x354
	// Line 788, Address: 0x43538c, Func Offset: 0x35c
	// Line 791, Address: 0x435390, Func Offset: 0x360
	// Line 788, Address: 0x435394, Func Offset: 0x364
	// Line 791, Address: 0x4353b8, Func Offset: 0x388
	// Line 792, Address: 0x4353c0, Func Offset: 0x390
	// Line 793, Address: 0x435400, Func Offset: 0x3d0
	// Line 794, Address: 0x435410, Func Offset: 0x3e0
	// Line 804, Address: 0x435414, Func Offset: 0x3e4
	// Line 794, Address: 0x435420, Func Offset: 0x3f0
	// Line 795, Address: 0x435428, Func Offset: 0x3f8
	// Line 796, Address: 0x435434, Func Offset: 0x404
	// Line 798, Address: 0x43543c, Func Offset: 0x40c
	// Line 804, Address: 0x4354b4, Func Offset: 0x484
	// Line 811, Address: 0x435500, Func Offset: 0x4d0
	// Line 812, Address: 0x435508, Func Offset: 0x4d8
	// Line 742, Address: 0x435514, Func Offset: 0x4e4
	// Line 812, Address: 0x435518, Func Offset: 0x4e8
	// Line 743, Address: 0x435524, Func Offset: 0x4f4
	// Line 812, Address: 0x435528, Func Offset: 0x4f8
	// Line 745, Address: 0x435530, Func Offset: 0x500
	// Line 812, Address: 0x435534, Func Offset: 0x504
	// Line 746, Address: 0x435540, Func Offset: 0x510
	// Line 812, Address: 0x435544, Func Offset: 0x514
	// Line 748, Address: 0x43554c, Func Offset: 0x51c
	// Line 744, Address: 0x435554, Func Offset: 0x524
	// Line 812, Address: 0x435558, Func Offset: 0x528
	// Line 745, Address: 0x435560, Func Offset: 0x530
	// Line 765, Address: 0x435568, Func Offset: 0x538
	// Line 816, Address: 0x435574, Func Offset: 0x544
	// Line 817, Address: 0x435578, Func Offset: 0x548
	// Line 827, Address: 0x435588, Func Offset: 0x558
	// Func End, Address: 0x4355a8, Func Offset: 0x578
}

// xCam_worldtocyl__FRfRfRfPC7xMat4x3PC5xVec3Ui
// Start address: 0x4355b0
void xCam_worldtocyl(float32& d, float32& h, float32& p, xMat4x3* tgt_mat, xVec3* v, uint32 flags)
{
	float32 lx;
	float32 lz;
	float32 dx__;
	float32 dz__;
	float32 dist2;
	float32 dist_inv;
	// Line 450, Address: 0x4355b0, Func Offset: 0
	// Line 455, Address: 0x4355b4, Func Offset: 0x4
	// Line 450, Address: 0x4355bc, Func Offset: 0xc
	// Line 455, Address: 0x4355c0, Func Offset: 0x10
	// Line 450, Address: 0x4355c4, Func Offset: 0x14
	// Line 455, Address: 0x4355c8, Func Offset: 0x18
	// Line 450, Address: 0x4355cc, Func Offset: 0x1c
	// Line 455, Address: 0x4355d0, Func Offset: 0x20
	// Line 450, Address: 0x4355d4, Func Offset: 0x24
	// Line 455, Address: 0x4355d8, Func Offset: 0x28
	// Line 457, Address: 0x435654, Func Offset: 0xa4
	// Line 458, Address: 0x435660, Func Offset: 0xb0
	// Line 459, Address: 0x435664, Func Offset: 0xb4
	// Line 460, Address: 0x43566c, Func Offset: 0xbc
	// Line 463, Address: 0x43567c, Func Offset: 0xcc
	// Line 465, Address: 0x43568c, Func Offset: 0xdc
	// Line 470, Address: 0x435698, Func Offset: 0xe8
	// Line 455, Address: 0x4356a4, Func Offset: 0xf4
	// Line 470, Address: 0x4356ac, Func Offset: 0xfc
	// Func End, Address: 0x4356e8, Func Offset: 0x138
}

// xCam_buildbasis__FP7xCamera
// Start address: 0x4356f0
void xCam_buildbasis(xCamera* cam)
{
	float32 d2d;
	float32 dx__;
	float32 dz__;
	float32 dist2;
	float32 dist_inv;
	// Line 390, Address: 0x4356f0, Func Offset: 0
	// Line 393, Address: 0x435704, Func Offset: 0x14
	// Line 402, Address: 0x43570c, Func Offset: 0x1c
	// Line 403, Address: 0x435794, Func Offset: 0xa4
	// Line 404, Address: 0x4357b0, Func Offset: 0xc0
	// Line 407, Address: 0x4357b4, Func Offset: 0xc4
	// Line 404, Address: 0x4357c4, Func Offset: 0xd4
	// Line 405, Address: 0x4357c8, Func Offset: 0xd8
	// Line 406, Address: 0x4357d0, Func Offset: 0xe0
	// Line 405, Address: 0x4357d4, Func Offset: 0xe4
	// Line 406, Address: 0x4357d8, Func Offset: 0xe8
	// Line 407, Address: 0x4357e8, Func Offset: 0xf8
	// Line 408, Address: 0x4357fc, Func Offset: 0x10c
	// Line 409, Address: 0x43580c, Func Offset: 0x11c
	// Line 410, Address: 0x435814, Func Offset: 0x124
	// Line 402, Address: 0x435820, Func Offset: 0x130
	// Line 411, Address: 0x43582c, Func Offset: 0x13c
	// Line 412, Address: 0x435838, Func Offset: 0x148
	// Line 417, Address: 0x435844, Func Offset: 0x154
	// Line 419, Address: 0x435848, Func Offset: 0x158
	// Line 418, Address: 0x43584c, Func Offset: 0x15c
	// Line 419, Address: 0x435850, Func Offset: 0x160
	// Line 420, Address: 0x435854, Func Offset: 0x164
	// Line 421, Address: 0x435858, Func Offset: 0x168
	// Line 422, Address: 0x435860, Func Offset: 0x170
	// Line 423, Address: 0x435864, Func Offset: 0x174
	// Line 424, Address: 0x435870, Func Offset: 0x180
	// Func End, Address: 0x435880, Func Offset: 0x190
}

// xCameraReset__FP7xCamerafff
// Start address: 0x435880
void xCameraReset(xCamera* cam, float32 d, float32 h, float32 pitch)
{
	float32 goal_p;
	// Line 261, Address: 0x435880, Func Offset: 0
	// Line 265, Address: 0x435884, Func Offset: 0x4
	// Line 261, Address: 0x435888, Func Offset: 0x8
	// Line 265, Address: 0x43588c, Func Offset: 0xc
	// Line 261, Address: 0x435890, Func Offset: 0x10
	// Line 265, Address: 0x4358a0, Func Offset: 0x20
	// Line 261, Address: 0x4358a4, Func Offset: 0x24
	// Line 265, Address: 0x4358b4, Func Offset: 0x34
	// Line 268, Address: 0x4358c0, Func Offset: 0x40
	// Line 269, Address: 0x4358ec, Func Offset: 0x6c
	// Line 280, Address: 0x4358f0, Func Offset: 0x70
	// Line 269, Address: 0x4358f4, Func Offset: 0x74
	// Line 280, Address: 0x4358f8, Func Offset: 0x78
	// Line 269, Address: 0x4358fc, Func Offset: 0x7c
	// Line 273, Address: 0x435900, Func Offset: 0x80
	// Line 280, Address: 0x435904, Func Offset: 0x84
	// Line 269, Address: 0x435908, Func Offset: 0x88
	// Line 271, Address: 0x43597c, Func Offset: 0xfc
	// Line 272, Address: 0x435980, Func Offset: 0x100
	// Line 273, Address: 0x435984, Func Offset: 0x104
	// Line 274, Address: 0x435988, Func Offset: 0x108
	// Line 275, Address: 0x43598c, Func Offset: 0x10c
	// Line 276, Address: 0x435990, Func Offset: 0x110
	// Line 278, Address: 0x435994, Func Offset: 0x114
	// Line 280, Address: 0x435998, Func Offset: 0x118
	// Line 281, Address: 0x43599c, Func Offset: 0x11c
	// Line 282, Address: 0x4359a4, Func Offset: 0x124
	// Line 285, Address: 0x4359bc, Func Offset: 0x13c
	// Line 297, Address: 0x4359e8, Func Offset: 0x168
	// Line 300, Address: 0x4359f0, Func Offset: 0x170
	// Line 303, Address: 0x4359f4, Func Offset: 0x174
	// Line 304, Address: 0x435a08, Func Offset: 0x188
	// Line 326, Address: 0x435a0c, Func Offset: 0x18c
	// Line 304, Address: 0x435a10, Func Offset: 0x190
	// Line 326, Address: 0x435a14, Func Offset: 0x194
	// Line 304, Address: 0x435a18, Func Offset: 0x198
	// Line 330, Address: 0x435a1c, Func Offset: 0x19c
	// Line 324, Address: 0x435a24, Func Offset: 0x1a4
	// Line 339, Address: 0x435a28, Func Offset: 0x1a8
	// Line 343, Address: 0x435a2c, Func Offset: 0x1ac
	// Line 304, Address: 0x435a30, Func Offset: 0x1b0
	// Line 324, Address: 0x435aa4, Func Offset: 0x224
	// Line 325, Address: 0x435aa8, Func Offset: 0x228
	// Line 326, Address: 0x435aac, Func Offset: 0x22c
	// Line 327, Address: 0x435ab0, Func Offset: 0x230
	// Line 328, Address: 0x435ab4, Func Offset: 0x234
	// Line 329, Address: 0x435ab8, Func Offset: 0x238
	// Line 330, Address: 0x435abc, Func Offset: 0x23c
	// Line 331, Address: 0x435ac0, Func Offset: 0x240
	// Line 332, Address: 0x435ac4, Func Offset: 0x244
	// Line 333, Address: 0x435ac8, Func Offset: 0x248
	// Line 334, Address: 0x435acc, Func Offset: 0x24c
	// Line 335, Address: 0x435ad0, Func Offset: 0x250
	// Line 337, Address: 0x435ad4, Func Offset: 0x254
	// Line 339, Address: 0x435ae0, Func Offset: 0x260
	// Line 340, Address: 0x435ae4, Func Offset: 0x264
	// Line 343, Address: 0x435ae8, Func Offset: 0x268
	// Line 344, Address: 0x435aec, Func Offset: 0x26c
	// Func End, Address: 0x435b0c, Func Offset: 0x28c
}

// xCameraExit__FP7xCamera
// Start address: 0x435b10
void xCameraExit(xCamera* cam)
{
	// Line 246, Address: 0x435b10, Func Offset: 0
	// Line 250, Address: 0x435b24, Func Offset: 0x14
	// Line 252, Address: 0x435b2c, Func Offset: 0x1c
	// Line 253, Address: 0x435b34, Func Offset: 0x24
	// Line 256, Address: 0x435b38, Func Offset: 0x28
	// Func End, Address: 0x435b48, Func Offset: 0x38
}

// xCameraInit__FP7xCameraUiUi
// Start address: 0x435b50
void xCameraInit(xCamera* cam)
{
	// Line 210, Address: 0x435b50, Func Offset: 0
	// Line 213, Address: 0x435b54, Func Offset: 0x4
	// Line 210, Address: 0x435b58, Func Offset: 0x8
	// Line 218, Address: 0x435b60, Func Offset: 0x10
	// Line 210, Address: 0x435b64, Func Offset: 0x14
	// Line 213, Address: 0x435b68, Func Offset: 0x18
	// Line 215, Address: 0x435b6c, Func Offset: 0x1c
	// Line 216, Address: 0x435b70, Func Offset: 0x20
	// Line 217, Address: 0x435b74, Func Offset: 0x24
	// Line 218, Address: 0x435b78, Func Offset: 0x28
	// Line 220, Address: 0x435b7c, Func Offset: 0x2c
	// Line 221, Address: 0x435b80, Func Offset: 0x30
	// Line 222, Address: 0x435b84, Func Offset: 0x34
	// Line 223, Address: 0x435b88, Func Offset: 0x38
	// Line 238, Address: 0x435b8c, Func Offset: 0x3c
	// Line 239, Address: 0x435b90, Func Offset: 0x40
	// Line 243, Address: 0x435b94, Func Offset: 0x44
	// Func End, Address: 0x435b9c, Func Offset: 0x4c
}

