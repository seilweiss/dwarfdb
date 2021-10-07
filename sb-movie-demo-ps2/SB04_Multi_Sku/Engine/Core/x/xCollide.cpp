



uint32 xSphereHitsEnv(xSphere* b, xEnv* env, xCollis* coll);
int32 xSphereHitsEnv3(xSphere* b, xEnv* env, xCollis* colls, uint8 ncolls, float32 sth);
int32 xSphereHitsEnv4(xSphere* b, xEnv* env, xMat3x3* mat, xCollis* colls);
RpCollisionTriangle* sphereHitsEnv4CB(RpIntersection* isx, RpWorldSector* sector, RpCollisionTriangle* tri, float32 dist, void* data);
int32 xSphereHitsModel3(xSphere* b, xModelInstance* m, xCollis* colls, uint8 ncolls, float32 sth);
RpCollisionTriangle* sphereHitsModel3CB(RpCollisionTriangle* tri, float32 dist, void* data);
RpCollisionTriangle* sphereHitsEnv3CB(RpIntersection* isx, RpWorldSector* sector, RpCollisionTriangle* tri, float32 dist, void* data);
uint32 xRayHitsEnv(xRay3* r, xEnv* env, xCollis* coll);
uint32 xRayHitsModel(xRay3* r, xModelInstance* m, xCollis* coll);
RpCollisionTriangle* rayHitsModelCB(RpIntersection* isx, RpCollisionTriangle* tri, float32 dist, void* data);
RpCollisionTriangle* rayHitsEnvCB(RpWorldSector* sector, RpCollisionTriangle* tri, float32 dist, void* data);
RpCollisionTriangle* rayHitsModelBackwardCB(RpIntersection* isx, RpCollisionTriangle* tri, float32 dist, void* data);
RpCollisionTriangle* rayHitsEnvBackwardCB(RpWorldSector* sector, RpCollisionTriangle* tri, float32 dist, void* data);
void xSphereForModel(xSphere& o, xModelInstance* model, uint8 childModels);
void xBoxForModelLocal(xBox& o, xModelInstance* m, uint8 childModels);
void xBoxForModel(xBox& o, xModelInstance* m, uint8 childModels);
void xBoxForTriangle(xBox& box, xVec3& p0, xVec3& p1, xVec3& p2);
uint8 xSphereHitsCone(xVec3& center, float32 radius, xVec3& kv0, float32 kr0, xVec3& kv1, float32 kr1);
uint8 xSphereHitsVCircle(xVec3& sc, float32 sr, xVec3& cc, float32 cr);
uint32 xCylinderHitsSphere(xCylinder* cyl, xSphere* sph, xCollis* coll);
uint32 xSphereHitsVCylinder(xSphere* sph, xCylinder* cyl, xCollis* coll);
uint8 xSphereHitsVCylinder(xVec3& sc, float32 sr, xVec3& cc, float32 cr, float32 ch);
uint8 xOBBHitsOBB(xBox& a, xMat4x3& amat, xBox& b, xMat4x3& bmat);
uint8 xSphereHitsBox(xVec3& c, float32 r, xBox& b);
xVec3 xCollisTriHit(tri_data_0& tri, xModelInstance& model);
void xCollideCalcTri(tri_data_0& tri, xModelInstance& model, xVec3& center, xVec3& heading);
uint32 xBoxHitsObb(xBox* a, xBox* b, xMat4x3* mat, xCollis* coll);
uint32 Mgc_BoxBoxTest(xBox* a, xMat4x3* matA, xBox* b, xMat4x3* matB);
uint32 xBoxHitsSphere(xBox* a, xSphere* b, xCollis* coll);
int32 xParabolaHitsEnv(xParabola* p, xEnv* env, xCollis* colls);
int32 xParabolaEnvCB(xClumpCollBSPTriangle* triangles, void* data);
void xParabolaRecenter(xParabola* p, float32 newZeroT);
uint32 xSphereHitsModel(xSphere* b, xModelInstance* m, xCollis* coll);
RpCollisionTriangle* sphereHitsModelCB(RpCollisionTriangle* tri, float32 dist, void* data);
RpCollisionTriangle* sphereHitsEnvCB(RpIntersection* isx, RpWorldSector* sector, RpCollisionTriangle* tri, float32 dist, void* data);
void properSphereIsectTri(xVec3* center, float32 radius, xVec3* tohit, float32* dist_ptr, RpCollisionTriangle* tri);
void FindNearestPointOnLine(xVec3* result, xVec3* point, xVec3* start, xVec3* end);
int32 PointWithinTriangle(xVec3* _pt, xVec3** _tri, xVec3* _normal);
uint32 xSphereHitsOBB_nu(xSphere* s, xBox* b, xMat4x3* m, xCollis* coll);
uint32 xSphereHitsBox(xSphere* a, xBox* b, xCollis* coll);
uint32 xSphereHitsSphere(xSphere* a, xSphere* b, xCollis* coll);
_xCollsIdx xCollideGetCollsIdxWithNormal(xCollis* coll, xVec3* tohit, xVec3* normal, xMat3x3* mat);
_xCollsIdx xCollideGetCollsIdx(xCollis* coll, xVec3* tohit, xMat3x3* mat);

// xSphereHitsEnv__FPC7xSpherePC4xEnvP7xCollis
// Start address: 0x424b70
uint32 xSphereHitsEnv(xSphere* b, xEnv* env, xCollis* coll)
{
	RpIntersection isx;
	int32 i;
	// Line 3788, Address: 0x424b70, Func Offset: 0
	// Line 3795, Address: 0x424b74, Func Offset: 0x4
	// Line 3788, Address: 0x424b78, Func Offset: 0x8
	// Line 3796, Address: 0x424b9c, Func Offset: 0x2c
	// Line 3788, Address: 0x424ba0, Func Offset: 0x30
	// Line 3796, Address: 0x424ba4, Func Offset: 0x34
	// Line 3795, Address: 0x424ba8, Func Offset: 0x38
	// Line 3796, Address: 0x424bac, Func Offset: 0x3c
	// Line 3797, Address: 0x424bb4, Func Offset: 0x44
	// Line 3798, Address: 0x424bbc, Func Offset: 0x4c
	// Line 3811, Address: 0x424bc0, Func Offset: 0x50
	// Line 3798, Address: 0x424bc4, Func Offset: 0x54
	// Line 3810, Address: 0x424bc8, Func Offset: 0x58
	// Line 3797, Address: 0x424bcc, Func Offset: 0x5c
	// Line 3798, Address: 0x424bd4, Func Offset: 0x64
	// Line 3804, Address: 0x424bd8, Func Offset: 0x68
	// Line 3806, Address: 0x424bdc, Func Offset: 0x6c
	// Line 3810, Address: 0x424be0, Func Offset: 0x70
	// Line 3811, Address: 0x424be4, Func Offset: 0x74
	// Line 3824, Address: 0x424bf4, Func Offset: 0x84
	// Line 3827, Address: 0x424bf8, Func Offset: 0x88
	// Line 3813, Address: 0x424c14, Func Offset: 0xa4
	// Line 3827, Address: 0x424c18, Func Offset: 0xa8
	// Line 3816, Address: 0x424c84, Func Offset: 0x114
	// Line 3827, Address: 0x424c88, Func Offset: 0x118
	// Line 3828, Address: 0x424cb8, Func Offset: 0x148
	// Func End, Address: 0x424cdc, Func Offset: 0x16c
}

// xSphereHitsEnv3__FPC7xSpherePC4xEnvP7xCollisUcf
// Start address: 0x424ce0
int32 xSphereHitsEnv3(xSphere* b, xEnv* env, xCollis* colls, uint8 ncolls, float32 sth)
{
	RpIntersection isx;
	uint8 idx;
	int32 i;
	// Line 3710, Address: 0x424ce0, Func Offset: 0
	// Line 3719, Address: 0x424ce4, Func Offset: 0x4
	// Line 3710, Address: 0x424ce8, Func Offset: 0x8
	// Line 3720, Address: 0x424d04, Func Offset: 0x24
	// Line 3710, Address: 0x424d08, Func Offset: 0x28
	// Line 3720, Address: 0x424d0c, Func Offset: 0x2c
	// Line 3710, Address: 0x424d10, Func Offset: 0x30
	// Line 3720, Address: 0x424d1c, Func Offset: 0x3c
	// Line 3710, Address: 0x424d20, Func Offset: 0x40
	// Line 3720, Address: 0x424d34, Func Offset: 0x54
	// Line 3725, Address: 0x424d40, Func Offset: 0x60
	// Line 3724, Address: 0x424d58, Func Offset: 0x78
	// Line 3723, Address: 0x424d60, Func Offset: 0x80
	// Line 3724, Address: 0x424d64, Func Offset: 0x84
	// Line 3725, Address: 0x424d68, Func Offset: 0x88
	// Line 3723, Address: 0x424d78, Func Offset: 0x98
	// Line 3725, Address: 0x424d7c, Func Offset: 0x9c
	// Line 3723, Address: 0x424d88, Func Offset: 0xa8
	// Line 3725, Address: 0x424d8c, Func Offset: 0xac
	// Line 3723, Address: 0x424d98, Func Offset: 0xb8
	// Line 3725, Address: 0x424d9c, Func Offset: 0xbc
	// Line 3723, Address: 0x424da8, Func Offset: 0xc8
	// Line 3725, Address: 0x424dac, Func Offset: 0xcc
	// Line 3723, Address: 0x424db8, Func Offset: 0xd8
	// Line 3725, Address: 0x424dbc, Func Offset: 0xdc
	// Line 3723, Address: 0x424dc8, Func Offset: 0xe8
	// Line 3725, Address: 0x424dcc, Func Offset: 0xec
	// Line 3723, Address: 0x424dd8, Func Offset: 0xf8
	// Line 3725, Address: 0x424ddc, Func Offset: 0xfc
	// Line 3723, Address: 0x424de8, Func Offset: 0x108
	// Line 3725, Address: 0x424dec, Func Offset: 0x10c
	// Line 3723, Address: 0x424e10, Func Offset: 0x130
	// Line 3725, Address: 0x424e14, Func Offset: 0x134
	// Line 3724, Address: 0x424e28, Func Offset: 0x148
	// Line 3725, Address: 0x424e30, Func Offset: 0x150
	// Line 3723, Address: 0x424e40, Func Offset: 0x160
	// Line 3725, Address: 0x424e44, Func Offset: 0x164
	// Line 3732, Address: 0x424e58, Func Offset: 0x178
	// Line 3740, Address: 0x424e60, Func Offset: 0x180
	// Line 3732, Address: 0x424e64, Func Offset: 0x184
	// Line 3728, Address: 0x424e68, Func Offset: 0x188
	// Line 3732, Address: 0x424e6c, Func Offset: 0x18c
	// Line 3741, Address: 0x424e70, Func Offset: 0x190
	// Line 3730, Address: 0x424e74, Func Offset: 0x194
	// Line 3729, Address: 0x424e78, Func Offset: 0x198
	// Line 3740, Address: 0x424e7c, Func Offset: 0x19c
	// Line 3741, Address: 0x424e80, Func Offset: 0x1a0
	// Line 3784, Address: 0x424e90, Func Offset: 0x1b0
	// Line 3743, Address: 0x424eb4, Func Offset: 0x1d4
	// Line 3784, Address: 0x424eb8, Func Offset: 0x1d8
	// Line 3744, Address: 0x424f5c, Func Offset: 0x27c
	// Line 3784, Address: 0x424f60, Func Offset: 0x280
	// Line 3746, Address: 0x424f68, Func Offset: 0x288
	// Line 3784, Address: 0x424f6c, Func Offset: 0x28c
	// Line 3749, Address: 0x424fc0, Func Offset: 0x2e0
	// Line 3784, Address: 0x424fc4, Func Offset: 0x2e4
	// Line 3754, Address: 0x424fcc, Func Offset: 0x2ec
	// Line 3784, Address: 0x424fd0, Func Offset: 0x2f0
	// Line 3754, Address: 0x424fd4, Func Offset: 0x2f4
	// Line 3784, Address: 0x424fd8, Func Offset: 0x2f8
	// Line 3757, Address: 0x424fe4, Func Offset: 0x304
	// Line 3784, Address: 0x424fe8, Func Offset: 0x308
	// Line 3785, Address: 0x425030, Func Offset: 0x350
	// Func End, Address: 0x425064, Func Offset: 0x384
}

// xSphereHitsEnv4__FPC7xSpherePC4xEnvPC7xMat3x3P7xCollis
// Start address: 0x425070
int32 xSphereHitsEnv4(xSphere* b, xEnv* env, xMat3x3* mat, xCollis* colls)
{
	RpIntersection isx;
	xCollis* c;
	xCollis* cend;
	int32 i;
	int32 numcs;
	float32 s;
	// Line 3622, Address: 0x425070, Func Offset: 0
	// Line 3630, Address: 0x425074, Func Offset: 0x4
	// Line 3622, Address: 0x425078, Func Offset: 0x8
	// Line 3631, Address: 0x425090, Func Offset: 0x20
	// Line 3622, Address: 0x425094, Func Offset: 0x24
	// Line 3631, Address: 0x4250a8, Func Offset: 0x38
	// Line 3622, Address: 0x4250ac, Func Offset: 0x3c
	// Line 3630, Address: 0x4250b8, Func Offset: 0x48
	// Line 3631, Address: 0x4250bc, Func Offset: 0x4c
	// Line 3644, Address: 0x4250c4, Func Offset: 0x54
	// Line 3643, Address: 0x4250c8, Func Offset: 0x58
	// Line 3637, Address: 0x4250cc, Func Offset: 0x5c
	// Line 3644, Address: 0x4250d0, Func Offset: 0x60
	// Line 3643, Address: 0x4250d4, Func Offset: 0x64
	// Line 3644, Address: 0x4250d8, Func Offset: 0x68
	// Line 3684, Address: 0x4250e8, Func Offset: 0x78
	// Line 3661, Address: 0x4250ec, Func Offset: 0x7c
	// Line 3684, Address: 0x4250f0, Func Offset: 0x80
	// Line 3691, Address: 0x4250f8, Func Offset: 0x88
	// Line 3688, Address: 0x4250fc, Func Offset: 0x8c
	// Line 3693, Address: 0x425104, Func Offset: 0x94
	// Line 3685, Address: 0x425108, Func Offset: 0x98
	// Line 3688, Address: 0x425118, Func Offset: 0xa8
	// Line 3689, Address: 0x42511c, Func Offset: 0xac
	// Line 3688, Address: 0x425120, Func Offset: 0xb0
	// Line 3689, Address: 0x425124, Func Offset: 0xb4
	// Line 3690, Address: 0x42512c, Func Offset: 0xbc
	// Line 3691, Address: 0x425138, Func Offset: 0xc8
	// Line 3693, Address: 0x42514c, Func Offset: 0xdc
	// Line 3694, Address: 0x42515c, Func Offset: 0xec
	// Line 3695, Address: 0x425168, Func Offset: 0xf8
	// Line 3696, Address: 0x425174, Func Offset: 0x104
	// Line 3697, Address: 0x425180, Func Offset: 0x110
	// Line 3699, Address: 0x4251b0, Func Offset: 0x140
	// Line 3700, Address: 0x4251bc, Func Offset: 0x14c
	// Line 3701, Address: 0x4251c8, Func Offset: 0x158
	// Line 3704, Address: 0x4251d4, Func Offset: 0x164
	// Line 3706, Address: 0x4251e4, Func Offset: 0x174
	// Line 3646, Address: 0x425220, Func Offset: 0x1b0
	// Line 3706, Address: 0x425224, Func Offset: 0x1b4
	// Line 3647, Address: 0x4252b4, Func Offset: 0x244
	// Line 3706, Address: 0x4252b8, Func Offset: 0x248
	// Line 3651, Address: 0x42530c, Func Offset: 0x29c
	// Line 3706, Address: 0x425310, Func Offset: 0x2a0
	// Line 3652, Address: 0x425318, Func Offset: 0x2a8
	// Line 3706, Address: 0x42531c, Func Offset: 0x2ac
	// Line 3657, Address: 0x425324, Func Offset: 0x2b4
	// Line 3706, Address: 0x425328, Func Offset: 0x2b8
	// Line 3707, Address: 0x425380, Func Offset: 0x310
	// Func End, Address: 0x4253b0, Func Offset: 0x340
}

// sphereHitsEnv4CB__FP14RpIntersectionP13RpWorldSectorP19RpCollisionTrianglefPv
// Start address: 0x4253b0
RpCollisionTriangle* sphereHitsEnv4CB(RpIntersection* isx, RpWorldSector* sector, RpCollisionTriangle* tri, float32 dist, void* data)
{
	xCollis* colls;
	float32 radius;
	xVec3 tohit;
	xCollis temp;
	uint8 idx;
	xCollis* c;
	float32 ddist;
	// Line 3453, Address: 0x4253b0, Func Offset: 0
	// Line 3467, Address: 0x4253b4, Func Offset: 0x4
	// Line 3453, Address: 0x4253b8, Func Offset: 0x8
	// Line 3467, Address: 0x4253bc, Func Offset: 0xc
	// Line 3453, Address: 0x4253c0, Func Offset: 0x10
	// Line 3472, Address: 0x4253e0, Func Offset: 0x30
	// Line 3455, Address: 0x4253e4, Func Offset: 0x34
	// Line 3472, Address: 0x4253e8, Func Offset: 0x38
	// Line 3467, Address: 0x4253f0, Func Offset: 0x40
	// Line 3472, Address: 0x4253f4, Func Offset: 0x44
	// Line 3484, Address: 0x425400, Func Offset: 0x50
	// Line 3491, Address: 0x425414, Func Offset: 0x64
	// Line 3498, Address: 0x425420, Func Offset: 0x70
	// Line 3500, Address: 0x42542c, Func Offset: 0x7c
	// Line 3502, Address: 0x425440, Func Offset: 0x90
	// Line 3503, Address: 0x425448, Func Offset: 0x98
	// Line 3519, Address: 0x42544c, Func Offset: 0x9c
	// Line 3532, Address: 0x425468, Func Offset: 0xb8
	// Line 3554, Address: 0x425484, Func Offset: 0xd4
	// Line 3555, Address: 0x425488, Func Offset: 0xd8
	// Line 3554, Address: 0x425490, Func Offset: 0xe0
	// Line 3555, Address: 0x425494, Func Offset: 0xe4
	// Line 3488, Address: 0x4254d4, Func Offset: 0x124
	// Line 3494, Address: 0x4254dc, Func Offset: 0x12c
	// Line 3556, Address: 0x4254ec, Func Offset: 0x13c
	// Line 3562, Address: 0x4254f8, Func Offset: 0x148
	// Line 3563, Address: 0x4254fc, Func Offset: 0x14c
	// Line 3564, Address: 0x425514, Func Offset: 0x164
	// Line 3565, Address: 0x42551c, Func Offset: 0x16c
	// Line 3566, Address: 0x425524, Func Offset: 0x174
	// Line 3567, Address: 0x42552c, Func Offset: 0x17c
	// Line 3569, Address: 0x425534, Func Offset: 0x184
	// Line 3571, Address: 0x425540, Func Offset: 0x190
	// Line 3573, Address: 0x42554c, Func Offset: 0x19c
	// Line 3574, Address: 0x425560, Func Offset: 0x1b0
	// Line 3580, Address: 0x425570, Func Offset: 0x1c0
	// Line 3582, Address: 0x425578, Func Offset: 0x1c8
	// Line 3618, Address: 0x425590, Func Offset: 0x1e0
	// Line 3588, Address: 0x4255ac, Func Offset: 0x1fc
	// Line 3618, Address: 0x4255b4, Func Offset: 0x204
	// Line 3619, Address: 0x4255c0, Func Offset: 0x210
	// Func End, Address: 0x4255dc, Func Offset: 0x22c
}

// xSphereHitsModel3__FPC7xSpherePC14xModelInstanceP7xCollisUcf
// Start address: 0x4255e0
int32 xSphereHitsModel3(xSphere* b, xModelInstance* m, xCollis* colls, uint8 ncolls, float32 sth)
{
	RpIntersection isx;
	uint8 idx;
	uint8 i;
	xMat4x3* mat;
	RwFrame* frame;
	float32 mscale;
	xMat3x3 mnormal;
	// Line 3369, Address: 0x4255e0, Func Offset: 0
	// Line 3378, Address: 0x42560c, Func Offset: 0x2c
	// Line 3369, Address: 0x425610, Func Offset: 0x30
	// Line 3378, Address: 0x425620, Func Offset: 0x40
	// Line 3379, Address: 0x425628, Func Offset: 0x48
	// Line 3381, Address: 0x425664, Func Offset: 0x84
	// Line 3382, Address: 0x425674, Func Offset: 0x94
	// Line 3383, Address: 0x425684, Func Offset: 0xa4
	// Line 3385, Address: 0x4256a0, Func Offset: 0xc0
	// Line 3386, Address: 0x4256a8, Func Offset: 0xc8
	// Line 3389, Address: 0x4256b8, Func Offset: 0xd8
	// Line 3393, Address: 0x4256bc, Func Offset: 0xdc
	// Line 3389, Address: 0x4256c0, Func Offset: 0xe0
	// Line 3393, Address: 0x4256c8, Func Offset: 0xe8
	// Line 3402, Address: 0x4256d4, Func Offset: 0xf4
	// Line 3393, Address: 0x4256d8, Func Offset: 0xf8
	// Line 3402, Address: 0x4256dc, Func Offset: 0xfc
	// Line 3393, Address: 0x4256e0, Func Offset: 0x100
	// Line 3397, Address: 0x4256f4, Func Offset: 0x114
	// Line 3402, Address: 0x425700, Func Offset: 0x120
	// Line 3404, Address: 0x425708, Func Offset: 0x128
	// Line 3405, Address: 0x425758, Func Offset: 0x178
	// Line 3407, Address: 0x425760, Func Offset: 0x180
	// Line 3405, Address: 0x425764, Func Offset: 0x184
	// Line 3410, Address: 0x42576c, Func Offset: 0x18c
	// Line 3408, Address: 0x4257a4, Func Offset: 0x1c4
	// Line 3410, Address: 0x4257a8, Func Offset: 0x1c8
	// Line 3408, Address: 0x4257b4, Func Offset: 0x1d4
	// Line 3410, Address: 0x4257b8, Func Offset: 0x1d8
	// Line 3408, Address: 0x4257c4, Func Offset: 0x1e4
	// Line 3410, Address: 0x4257c8, Func Offset: 0x1e8
	// Line 3408, Address: 0x4257d4, Func Offset: 0x1f4
	// Line 3410, Address: 0x4257d8, Func Offset: 0x1f8
	// Line 3408, Address: 0x4257e4, Func Offset: 0x204
	// Line 3410, Address: 0x4257e8, Func Offset: 0x208
	// Line 3408, Address: 0x4257f4, Func Offset: 0x214
	// Line 3410, Address: 0x4257f8, Func Offset: 0x218
	// Line 3408, Address: 0x425804, Func Offset: 0x224
	// Line 3410, Address: 0x425808, Func Offset: 0x228
	// Line 3408, Address: 0x425814, Func Offset: 0x234
	// Line 3410, Address: 0x425818, Func Offset: 0x238
	// Line 3408, Address: 0x425838, Func Offset: 0x258
	// Line 3410, Address: 0x42583c, Func Offset: 0x25c
	// Line 3409, Address: 0x425850, Func Offset: 0x270
	// Line 3410, Address: 0x425858, Func Offset: 0x278
	// Line 3408, Address: 0x425868, Func Offset: 0x288
	// Line 3410, Address: 0x42586c, Func Offset: 0x28c
	// Line 3424, Address: 0x425880, Func Offset: 0x2a0
	// Line 3417, Address: 0x425884, Func Offset: 0x2a4
	// Line 3424, Address: 0x425888, Func Offset: 0x2a8
	// Line 3417, Address: 0x42588c, Func Offset: 0x2ac
	// Line 3424, Address: 0x425890, Func Offset: 0x2b0
	// Line 3417, Address: 0x425894, Func Offset: 0x2b4
	// Line 3424, Address: 0x425898, Func Offset: 0x2b8
	// Line 3417, Address: 0x42589c, Func Offset: 0x2bc
	// Line 3424, Address: 0x4258a0, Func Offset: 0x2c0
	// Line 3415, Address: 0x4258a4, Func Offset: 0x2c4
	// Line 3413, Address: 0x4258a8, Func Offset: 0x2c8
	// Line 3424, Address: 0x4258ac, Func Offset: 0x2cc
	// Line 3427, Address: 0x4258b4, Func Offset: 0x2d4
	// Line 3428, Address: 0x4258c4, Func Offset: 0x2e4
	// Line 3429, Address: 0x4258f4, Func Offset: 0x314
	// Line 3430, Address: 0x425900, Func Offset: 0x320
	// Line 3432, Address: 0x425928, Func Offset: 0x348
	// Line 3430, Address: 0x42592c, Func Offset: 0x34c
	// Line 3432, Address: 0x42593c, Func Offset: 0x35c
	// Line 3433, Address: 0x425988, Func Offset: 0x3a8
	// Line 3434, Address: 0x4259d4, Func Offset: 0x3f4
	// Line 3435, Address: 0x425a24, Func Offset: 0x444
	// Line 3436, Address: 0x425a70, Func Offset: 0x490
	// Line 3438, Address: 0x425a7c, Func Offset: 0x49c
	// Line 3441, Address: 0x425a98, Func Offset: 0x4b8
	// Line 3444, Address: 0x425abc, Func Offset: 0x4dc
	// Line 3443, Address: 0x425ae0, Func Offset: 0x500
	// Line 3444, Address: 0x425ae4, Func Offset: 0x504
	// Func End, Address: 0x425aec, Func Offset: 0x50c
}

// sphereHitsModel3CB__FP14RpIntersectionP19RpCollisionTrianglefPv
// Start address: 0x425af0
RpCollisionTriangle* sphereHitsModel3CB(RpCollisionTriangle* tri, float32 dist, void* data)
{
	// Line 3365, Address: 0x425af4, Func Offset: 0x4
	// Func End, Address: 0x425b08, Func Offset: 0x18
}

// sphereHitsEnv3CB__FP14RpIntersectionP13RpWorldSectorP19RpCollisionTrianglefPv
// Start address: 0x425b10
RpCollisionTriangle* sphereHitsEnv3CB(RpIntersection* isx, RpWorldSector* sector, RpCollisionTriangle* tri, float32 dist, void* data)
{
	uint8 NEXT2'247;
	xCollis* colls;
	float32 radius;
	xVec3 tohit;
	uint8 idx;
	float32 scale;
	// Line 3079, Address: 0x425b10, Func Offset: 0
	// Line 3084, Address: 0x425b34, Func Offset: 0x24
	// Line 3085, Address: 0x425b44, Func Offset: 0x34
	// Line 3088, Address: 0x425b4c, Func Offset: 0x3c
	// Line 3103, Address: 0x425b50, Func Offset: 0x40
	// Line 3108, Address: 0x425b58, Func Offset: 0x48
	// Line 3103, Address: 0x425b64, Func Offset: 0x54
	// Line 3108, Address: 0x425b68, Func Offset: 0x58
	// Line 3120, Address: 0x425b74, Func Offset: 0x64
	// Line 3127, Address: 0x425b88, Func Offset: 0x78
	// Line 3155, Address: 0x425ba0, Func Offset: 0x90
	// Line 3161, Address: 0x425bc0, Func Offset: 0xb0
	// Line 3165, Address: 0x425bcc, Func Offset: 0xbc
	// Line 3167, Address: 0x425bec, Func Offset: 0xdc
	// Line 3178, Address: 0x425c64, Func Offset: 0x154
	// Line 3193, Address: 0x425ccc, Func Offset: 0x1bc
	// Line 3195, Address: 0x425cdc, Func Offset: 0x1cc
	// Line 3201, Address: 0x425ce4, Func Offset: 0x1d4
	// Line 3208, Address: 0x425d08, Func Offset: 0x1f8
	// Line 3201, Address: 0x425d0c, Func Offset: 0x1fc
	// Line 3208, Address: 0x425d10, Func Offset: 0x200
	// Line 3207, Address: 0x425d18, Func Offset: 0x208
	// Line 3201, Address: 0x425d1c, Func Offset: 0x20c
	// Line 3208, Address: 0x425d20, Func Offset: 0x210
	// Line 3201, Address: 0x425d24, Func Offset: 0x214
	// Line 3208, Address: 0x425d2c, Func Offset: 0x21c
	// Line 3201, Address: 0x425d34, Func Offset: 0x224
	// Line 3208, Address: 0x425d38, Func Offset: 0x228
	// Line 3201, Address: 0x425d44, Func Offset: 0x234
	// Line 3208, Address: 0x425d48, Func Offset: 0x238
	// Line 3209, Address: 0x425d64, Func Offset: 0x254
	// Line 3212, Address: 0x425d74, Func Offset: 0x264
	// Line 3234, Address: 0x425d90, Func Offset: 0x280
	// Line 3237, Address: 0x425da4, Func Offset: 0x294
	// Line 3238, Address: 0x425dd4, Func Offset: 0x2c4
	// Line 3239, Address: 0x425dd8, Func Offset: 0x2c8
	// Line 3237, Address: 0x425ddc, Func Offset: 0x2cc
	// Line 3238, Address: 0x425de4, Func Offset: 0x2d4
	// Line 3237, Address: 0x425de8, Func Offset: 0x2d8
	// Line 3239, Address: 0x425dec, Func Offset: 0x2dc
	// Line 3238, Address: 0x425df0, Func Offset: 0x2e0
	// Line 3237, Address: 0x425df8, Func Offset: 0x2e8
	// Line 3238, Address: 0x425dfc, Func Offset: 0x2ec
	// Line 3237, Address: 0x425e08, Func Offset: 0x2f8
	// Line 3238, Address: 0x425e0c, Func Offset: 0x2fc
	// Line 3239, Address: 0x425e10, Func Offset: 0x300
	// Line 3241, Address: 0x425e18, Func Offset: 0x308
	// Line 3243, Address: 0x425e34, Func Offset: 0x324
	// Line 3245, Address: 0x425e64, Func Offset: 0x354
	// Line 3252, Address: 0x425e70, Func Offset: 0x360
	// Line 3250, Address: 0x425e74, Func Offset: 0x364
	// Line 3254, Address: 0x425e7c, Func Offset: 0x36c
	// Line 3255, Address: 0x425e80, Func Offset: 0x370
	// Line 3248, Address: 0x425e84, Func Offset: 0x374
	// Line 3255, Address: 0x425e88, Func Offset: 0x378
	// Line 3252, Address: 0x425e8c, Func Offset: 0x37c
	// Line 3254, Address: 0x425eac, Func Offset: 0x39c
	// Line 3257, Address: 0x425ebc, Func Offset: 0x3ac
	// Line 3265, Address: 0x425ec4, Func Offset: 0x3b4
	// Line 3267, Address: 0x425ecc, Func Offset: 0x3bc
	// Line 3270, Address: 0x425eec, Func Offset: 0x3dc
	// Line 3281, Address: 0x425f08, Func Offset: 0x3f8
	// Line 3285, Address: 0x425f14, Func Offset: 0x404
	// Line 3287, Address: 0x425f20, Func Offset: 0x410
	// Line 3290, Address: 0x425f30, Func Offset: 0x420
	// Line 3293, Address: 0x425f40, Func Offset: 0x430
	// Line 3299, Address: 0x425f50, Func Offset: 0x440
	// Line 3309, Address: 0x425f5c, Func Offset: 0x44c
	// Line 3311, Address: 0x425f64, Func Offset: 0x454
	// Line 3321, Address: 0x425f7c, Func Offset: 0x46c
	// Line 3351, Address: 0x425f88, Func Offset: 0x478
	// Line 3124, Address: 0x425fa4, Func Offset: 0x494
	// Line 3130, Address: 0x425fb0, Func Offset: 0x4a0
	// Line 3351, Address: 0x425fbc, Func Offset: 0x4ac
	// Line 3189, Address: 0x425fcc, Func Offset: 0x4bc
	// Line 3351, Address: 0x425fd0, Func Offset: 0x4c0
	// Line 3189, Address: 0x425fd4, Func Offset: 0x4c4
	// Line 3351, Address: 0x425fd8, Func Offset: 0x4c8
	// Line 3189, Address: 0x425fe0, Func Offset: 0x4d0
	// Line 3351, Address: 0x425fe8, Func Offset: 0x4d8
	// Line 3189, Address: 0x425ff0, Func Offset: 0x4e0
	// Line 3191, Address: 0x425ff4, Func Offset: 0x4e4
	// Line 3172, Address: 0x425ffc, Func Offset: 0x4ec
	// Line 3173, Address: 0x426000, Func Offset: 0x4f0
	// Line 3174, Address: 0x426008, Func Offset: 0x4f8
	// Line 3183, Address: 0x426014, Func Offset: 0x504
	// Line 3184, Address: 0x426018, Func Offset: 0x508
	// Line 3185, Address: 0x426020, Func Offset: 0x510
	// Line 3198, Address: 0x42602c, Func Offset: 0x51c
	// Line 3351, Address: 0x426030, Func Offset: 0x520
	// Line 3198, Address: 0x426034, Func Offset: 0x524
	// Line 3351, Address: 0x426038, Func Offset: 0x528
	// Line 3198, Address: 0x426044, Func Offset: 0x534
	// Line 3351, Address: 0x426048, Func Offset: 0x538
	// Line 3198, Address: 0x426054, Func Offset: 0x544
	// Line 3351, Address: 0x426058, Func Offset: 0x548
	// Line 3198, Address: 0x426060, Func Offset: 0x550
	// Line 3199, Address: 0x426064, Func Offset: 0x554
	// Line 3213, Address: 0x42606c, Func Offset: 0x55c
	// Line 3351, Address: 0x426078, Func Offset: 0x568
	// Line 3219, Address: 0x42608c, Func Offset: 0x57c
	// Line 3351, Address: 0x426090, Func Offset: 0x580
	// Line 3231, Address: 0x4260a0, Func Offset: 0x590
	// Line 3235, Address: 0x4260a8, Func Offset: 0x598
	// Line 3268, Address: 0x4260b8, Func Offset: 0x5a8
	// Line 3351, Address: 0x4260c0, Func Offset: 0x5b0
	// Line 3291, Address: 0x4260e0, Func Offset: 0x5d0
	// Line 3351, Address: 0x4260e4, Func Offset: 0x5d4
	// Line 3294, Address: 0x426104, Func Offset: 0x5f4
	// Line 3351, Address: 0x426108, Func Offset: 0x5f8
	// Line 3296, Address: 0x426118, Func Offset: 0x608
	// Line 3351, Address: 0x42611c, Func Offset: 0x60c
	// Line 3296, Address: 0x426124, Func Offset: 0x614
	// Line 3351, Address: 0x426128, Func Offset: 0x618
	// Line 3296, Address: 0x426130, Func Offset: 0x620
	// Line 3351, Address: 0x42613c, Func Offset: 0x62c
	// Line 3317, Address: 0x426150, Func Offset: 0x640
	// Line 3351, Address: 0x426158, Func Offset: 0x648
	// Line 3356, Address: 0x426164, Func Offset: 0x654
	// Func End, Address: 0x426180, Func Offset: 0x670
}

// xRayHitsEnv__FPC5xRay3PC4xEnvP7xCollis
// Start address: 0x426180
uint32 xRayHitsEnv(xRay3* r, xEnv* env, xCollis* coll)
{
	RpIntersection isx;
	float32 len;
	int32 i;
	xIsect iBoxIsect;
	// Line 3021, Address: 0x426180, Func Offset: 0
	// Line 3029, Address: 0x426184, Func Offset: 0x4
	// Line 3021, Address: 0x426188, Func Offset: 0x8
	// Line 3028, Address: 0x42618c, Func Offset: 0xc
	// Line 3021, Address: 0x426190, Func Offset: 0x10
	// Line 3029, Address: 0x4261a8, Func Offset: 0x28
	// Line 3021, Address: 0x4261ac, Func Offset: 0x2c
	// Line 3029, Address: 0x4261bc, Func Offset: 0x3c
	// Line 3032, Address: 0x426294, Func Offset: 0x114
	// Line 3029, Address: 0x426298, Func Offset: 0x118
	// Line 3032, Address: 0x42629c, Func Offset: 0x11c
	// Line 3029, Address: 0x4262a0, Func Offset: 0x120
	// Line 3036, Address: 0x4262a4, Func Offset: 0x124
	// Line 3029, Address: 0x4262a8, Func Offset: 0x128
	// Line 3031, Address: 0x4262ac, Func Offset: 0x12c
	// Line 3029, Address: 0x4262b0, Func Offset: 0x130
	// Line 3036, Address: 0x4262b4, Func Offset: 0x134
	// Line 3029, Address: 0x4262b8, Func Offset: 0x138
	// Line 3036, Address: 0x4262bc, Func Offset: 0x13c
	// Line 3029, Address: 0x4262d0, Func Offset: 0x150
	// Line 3036, Address: 0x4262d4, Func Offset: 0x154
	// Line 3029, Address: 0x4262e8, Func Offset: 0x168
	// Line 3037, Address: 0x4262f8, Func Offset: 0x178
	// Line 3029, Address: 0x4262fc, Func Offset: 0x17c
	// Line 3031, Address: 0x426300, Func Offset: 0x180
	// Line 3036, Address: 0x426304, Func Offset: 0x184
	// Line 3031, Address: 0x42631c, Func Offset: 0x19c
	// Line 3032, Address: 0x426324, Func Offset: 0x1a4
	// Line 3036, Address: 0x426328, Func Offset: 0x1a8
	// Line 3037, Address: 0x426348, Func Offset: 0x1c8
	// Line 3041, Address: 0x426350, Func Offset: 0x1d0
	// Line 3047, Address: 0x426360, Func Offset: 0x1e0
	// Line 3046, Address: 0x426364, Func Offset: 0x1e4
	// Line 3047, Address: 0x42636c, Func Offset: 0x1ec
	// Line 3064, Address: 0x42637c, Func Offset: 0x1fc
	// Line 3068, Address: 0x42638c, Func Offset: 0x20c
	// Line 3038, Address: 0x4263c0, Func Offset: 0x240
	// Line 3068, Address: 0x4263c4, Func Offset: 0x244
	// Line 3042, Address: 0x4263e0, Func Offset: 0x260
	// Line 3068, Address: 0x4263f4, Func Offset: 0x274
	// Line 3050, Address: 0x4263fc, Func Offset: 0x27c
	// Line 3068, Address: 0x426400, Func Offset: 0x280
	// Line 3052, Address: 0x426410, Func Offset: 0x290
	// Line 3068, Address: 0x42641c, Func Offset: 0x29c
	// Line 3061, Address: 0x426424, Func Offset: 0x2a4
	// Line 3068, Address: 0x426428, Func Offset: 0x2a8
	// Line 3055, Address: 0x426484, Func Offset: 0x304
	// Line 3068, Address: 0x426488, Func Offset: 0x308
	// Line 3065, Address: 0x4264c4, Func Offset: 0x344
	// Line 3069, Address: 0x4264d0, Func Offset: 0x350
	// Func End, Address: 0x4264f8, Func Offset: 0x378
}

// xRayHitsModel__FPC5xRay3PC14xModelInstanceP7xCollis
// Start address: 0x426500
uint32 xRayHitsModel(xRay3* r, xModelInstance* m, xCollis* coll)
{
	RpIntersection isx;
	float32 len;
	xMat4x3* mat;
	xVec3 center;
	xVec3 heading;
	// Line 2944, Address: 0x426500, Func Offset: 0
	// Line 2951, Address: 0x426528, Func Offset: 0x28
	// Line 2954, Address: 0x426568, Func Offset: 0x68
	// Line 2957, Address: 0x426630, Func Offset: 0x130
	// Line 2954, Address: 0x426638, Func Offset: 0x138
	// Line 2957, Address: 0x42663c, Func Offset: 0x13c
	// Line 2954, Address: 0x426640, Func Offset: 0x140
	// Line 2957, Address: 0x426644, Func Offset: 0x144
	// Line 2954, Address: 0x426648, Func Offset: 0x148
	// Line 2957, Address: 0x42664c, Func Offset: 0x14c
	// Line 2954, Address: 0x426668, Func Offset: 0x168
	// Line 2957, Address: 0x42666c, Func Offset: 0x16c
	// Line 2954, Address: 0x426670, Func Offset: 0x170
	// Line 2957, Address: 0x426674, Func Offset: 0x174
	// Line 2958, Address: 0x426680, Func Offset: 0x180
	// Line 2954, Address: 0x426684, Func Offset: 0x184
	// Line 2957, Address: 0x42668c, Func Offset: 0x18c
	// Line 2954, Address: 0x426694, Func Offset: 0x194
	// Line 2957, Address: 0x426698, Func Offset: 0x198
	// Line 2954, Address: 0x4266ac, Func Offset: 0x1ac
	// Line 2957, Address: 0x4266b4, Func Offset: 0x1b4
	// Line 2954, Address: 0x4266c8, Func Offset: 0x1c8
	// Line 2958, Address: 0x4266cc, Func Offset: 0x1cc
	// Line 2962, Address: 0x4266d4, Func Offset: 0x1d4
	// Line 2971, Address: 0x4266e4, Func Offset: 0x1e4
	// Line 2967, Address: 0x4266ec, Func Offset: 0x1ec
	// Line 2971, Address: 0x4266f0, Func Offset: 0x1f0
	// Line 2981, Address: 0x426700, Func Offset: 0x200
	// Line 2971, Address: 0x426704, Func Offset: 0x204
	// Line 2984, Address: 0x426708, Func Offset: 0x208
	// Line 2971, Address: 0x42670c, Func Offset: 0x20c
	// Line 2983, Address: 0x426710, Func Offset: 0x210
	// Line 2981, Address: 0x426714, Func Offset: 0x214
	// Line 2984, Address: 0x426718, Func Offset: 0x218
	// Line 2975, Address: 0x42671c, Func Offset: 0x21c
	// Line 2981, Address: 0x42672c, Func Offset: 0x22c
	// Line 2983, Address: 0x426738, Func Offset: 0x238
	// Line 2984, Address: 0x426744, Func Offset: 0x244
	// Line 2985, Address: 0x426748, Func Offset: 0x248
	// Line 2988, Address: 0x426758, Func Offset: 0x258
	// Line 2993, Address: 0x426770, Func Offset: 0x270
	// Line 2997, Address: 0x42677c, Func Offset: 0x27c
	// Line 2993, Address: 0x426780, Func Offset: 0x280
	// Line 2997, Address: 0x426784, Func Offset: 0x284
	// Line 2994, Address: 0x426788, Func Offset: 0x288
	// Line 2997, Address: 0x42678c, Func Offset: 0x28c
	// Line 2993, Address: 0x426790, Func Offset: 0x290
	// Line 2997, Address: 0x426794, Func Offset: 0x294
	// Line 2994, Address: 0x426798, Func Offset: 0x298
	// Line 2997, Address: 0x42679c, Func Offset: 0x29c
	// Line 2993, Address: 0x4267a0, Func Offset: 0x2a0
	// Line 2994, Address: 0x4267a4, Func Offset: 0x2a4
	// Line 2995, Address: 0x4267ac, Func Offset: 0x2ac
	// Line 2994, Address: 0x4267b0, Func Offset: 0x2b0
	// Line 2995, Address: 0x4267b4, Func Offset: 0x2b4
	// Line 2994, Address: 0x4267b8, Func Offset: 0x2b8
	// Line 2997, Address: 0x4267bc, Func Offset: 0x2bc
	// Line 3002, Address: 0x4267c4, Func Offset: 0x2c4
	// Line 3003, Address: 0x4267c8, Func Offset: 0x2c8
	// Line 3002, Address: 0x4267cc, Func Offset: 0x2cc
	// Line 3003, Address: 0x4267d0, Func Offset: 0x2d0
	// Line 3007, Address: 0x4267e0, Func Offset: 0x2e0
	// Line 3010, Address: 0x4267f4, Func Offset: 0x2f4
	// Line 3011, Address: 0x426834, Func Offset: 0x334
	// Line 3012, Address: 0x426874, Func Offset: 0x374
	// Line 3015, Address: 0x426888, Func Offset: 0x388
	// Line 3017, Address: 0x426898, Func Offset: 0x398
	// Line 2953, Address: 0x4268b8, Func Offset: 0x3b8
	// Line 2954, Address: 0x4268bc, Func Offset: 0x3bc
	// Line 3017, Address: 0x4268c0, Func Offset: 0x3c0
	// Line 2959, Address: 0x4268f8, Func Offset: 0x3f8
	// Line 3017, Address: 0x4268fc, Func Offset: 0x3fc
	// Line 2963, Address: 0x426918, Func Offset: 0x418
	// Line 3017, Address: 0x42692c, Func Offset: 0x42c
	// Line 3004, Address: 0x426938, Func Offset: 0x438
	// Line 3017, Address: 0x426944, Func Offset: 0x444
	// Line 3018, Address: 0x42695c, Func Offset: 0x45c
	// Func End, Address: 0x42697c, Func Offset: 0x47c
}

// rayHitsModelCB__FP14RpIntersectionP19RpCollisionTrianglefPv
// Start address: 0x426980
RpCollisionTriangle* rayHitsModelCB(RpIntersection* isx, RpCollisionTriangle* tri, float32 dist, void* data)
{
	// Line 2940, Address: 0x426988, Func Offset: 0x8
	// Func End, Address: 0x426994, Func Offset: 0x14
}

// rayHitsEnvCB__FP14RpIntersectionP13RpWorldSectorP19RpCollisionTrianglefPv
// Start address: 0x4269a0
RpCollisionTriangle* rayHitsEnvCB(RpWorldSector* sector, RpCollisionTriangle* tri, float32 dist, void* data)
{
	xCollis* coll;
	uint8 flags;
	// Line 2890, Address: 0x4269a0, Func Offset: 0
	// Line 2893, Address: 0x4269a8, Func Offset: 0x8
	// Line 2890, Address: 0x4269ac, Func Offset: 0xc
	// Line 2893, Address: 0x4269b0, Func Offset: 0x10
	// Line 2898, Address: 0x4269bc, Func Offset: 0x1c
	// Line 2900, Address: 0x4269c4, Func Offset: 0x24
	// Line 2922, Address: 0x4269dc, Func Offset: 0x3c
	// Line 2923, Address: 0x4269e0, Func Offset: 0x40
	// Line 2924, Address: 0x4269ec, Func Offset: 0x4c
	// Line 2927, Address: 0x4269f4, Func Offset: 0x54
	// Line 2930, Address: 0x426a04, Func Offset: 0x64
	// Line 2894, Address: 0x426a0c, Func Offset: 0x6c
	// Line 2930, Address: 0x426a14, Func Offset: 0x74
	// Line 2911, Address: 0x426a34, Func Offset: 0x94
	// Line 2930, Address: 0x426a38, Func Offset: 0x98
	// Line 2911, Address: 0x426a40, Func Offset: 0xa0
	// Line 2930, Address: 0x426a48, Func Offset: 0xa8
	// Line 2911, Address: 0x426a50, Func Offset: 0xb0
	// Line 2912, Address: 0x426a58, Func Offset: 0xb8
	// Line 2930, Address: 0x426a60, Func Offset: 0xc0
	// Line 2913, Address: 0x426a6c, Func Offset: 0xcc
	// Line 2914, Address: 0x426a74, Func Offset: 0xd4
	// Line 2930, Address: 0x426a7c, Func Offset: 0xdc
	// Line 2915, Address: 0x426a80, Func Offset: 0xe0
	// Line 2917, Address: 0x426a8c, Func Offset: 0xec
	// Line 2930, Address: 0x426a94, Func Offset: 0xf4
	// Line 2931, Address: 0x426abc, Func Offset: 0x11c
	// Func End, Address: 0x426ac4, Func Offset: 0x124
}

// rayHitsModelBackwardCB__FP14RpIntersectionP19RpCollisionTrianglefPv
// Start address: 0x426ad0
RpCollisionTriangle* rayHitsModelBackwardCB(RpIntersection* isx, RpCollisionTriangle* tri, float32 dist, void* data)
{
	// Line 2882, Address: 0x426ad8, Func Offset: 0x8
	// Func End, Address: 0x426ae4, Func Offset: 0x14
}

// rayHitsEnvBackwardCB__FP14RpIntersectionP13RpWorldSectorP19RpCollisionTrianglefPv
// Start address: 0x426af0
RpCollisionTriangle* rayHitsEnvBackwardCB(RpWorldSector* sector, RpCollisionTriangle* tri, float32 dist, void* data)
{
	xCollis* coll;
	// Line 2846, Address: 0x426af0, Func Offset: 0
	// Line 2848, Address: 0x426af8, Func Offset: 0x8
	// Line 2846, Address: 0x426b00, Func Offset: 0x10
	// Line 2851, Address: 0x426b04, Func Offset: 0x14
	// Line 2848, Address: 0x426b08, Func Offset: 0x18
	// Line 2851, Address: 0x426b0c, Func Offset: 0x1c
	// Line 2856, Address: 0x426b18, Func Offset: 0x28
	// Line 2858, Address: 0x426b20, Func Offset: 0x30
	// Line 2869, Address: 0x426b38, Func Offset: 0x48
	// Line 2872, Address: 0x426b3c, Func Offset: 0x4c
	// Line 2870, Address: 0x426b40, Func Offset: 0x50
	// Line 2871, Address: 0x426b4c, Func Offset: 0x5c
	// Line 2872, Address: 0x426b50, Func Offset: 0x60
	// Line 2852, Address: 0x426b58, Func Offset: 0x68
	// Line 2872, Address: 0x426b60, Func Offset: 0x70
	// Line 2864, Address: 0x426b74, Func Offset: 0x84
	// Line 2872, Address: 0x426b7c, Func Offset: 0x8c
	// Line 2873, Address: 0x426b88, Func Offset: 0x98
	// Func End, Address: 0x426b90, Func Offset: 0xa0
}

// xSphereForModel__FR7xSpherePC14xModelInstanceb
// Start address: 0x426b90
void xSphereForModel(xSphere& o, xModelInstance* model, uint8 childModels)
{
	RpAtomic* imodel;
	RpGeometry* geom;
	RpMorphTarget* mtgt;
	uint16 idx;
	xModelInstance* cur_model;
	xSphere s;
	// Line 2762, Address: 0x426b90, Func Offset: 0
	// Line 2771, Address: 0x426ba0, Func Offset: 0x10
	// Line 2762, Address: 0x426ba4, Func Offset: 0x14
	// Line 2771, Address: 0x426bc4, Func Offset: 0x34
	// Line 2762, Address: 0x426bc8, Func Offset: 0x38
	// Line 2774, Address: 0x426bd0, Func Offset: 0x40
	// Line 2777, Address: 0x426bd4, Func Offset: 0x44
	// Line 2782, Address: 0x426bd8, Func Offset: 0x48
	// Line 2794, Address: 0x426be8, Func Offset: 0x58
	// Line 2797, Address: 0x426bf4, Func Offset: 0x64
	// Line 2799, Address: 0x426bfc, Func Offset: 0x6c
	// Line 2791, Address: 0x426c30, Func Offset: 0xa0
	// Line 2799, Address: 0x426c38, Func Offset: 0xa8
	// Line 2814, Address: 0x426c40, Func Offset: 0xb0
	// Line 2815, Address: 0x426c58, Func Offset: 0xc8
	// Line 2790, Address: 0x426c7c, Func Offset: 0xec
	// Line 2800, Address: 0x426c84, Func Offset: 0xf4
	// Line 2815, Address: 0x426c88, Func Offset: 0xf8
	// Line 2807, Address: 0x426c90, Func Offset: 0x100
	// Line 2815, Address: 0x426c98, Func Offset: 0x108
	// Line 2810, Address: 0x426cbc, Func Offset: 0x12c
	// Line 2815, Address: 0x426cc4, Func Offset: 0x134
	// Line 2811, Address: 0x426cd0, Func Offset: 0x140
	// Line 2815, Address: 0x426cd4, Func Offset: 0x144
	// Line 2806, Address: 0x426cfc, Func Offset: 0x16c
	// Line 2815, Address: 0x426d08, Func Offset: 0x178
	// Func End, Address: 0x426d38, Func Offset: 0x1a8
}

// xBoxForModelLocal__FR4xBoxPC14xModelInstanceb
// Start address: 0x426d40
void xBoxForModelLocal(xBox& o, xModelInstance* m, uint8 childModels)
{
	RpAtomic* imodel;
	RpGeometry* geom;
	RpMorphTarget* mtgt;
	uint16 idx;
	xModelInstance* curModel;
	xVec3 lower;
	xVec3 upper;
	// Line 2697, Address: 0x426d40, Func Offset: 0
	// Line 2703, Address: 0x426d50, Func Offset: 0x10
	// Line 2697, Address: 0x426d54, Func Offset: 0x14
	// Line 2703, Address: 0x426d78, Func Offset: 0x38
	// Line 2697, Address: 0x426d7c, Func Offset: 0x3c
	// Line 2707, Address: 0x426d80, Func Offset: 0x40
	// Line 2710, Address: 0x426d84, Func Offset: 0x44
	// Line 2715, Address: 0x426d88, Func Offset: 0x48
	// Line 2732, Address: 0x426d98, Func Offset: 0x58
	// Line 2735, Address: 0x426da4, Func Offset: 0x64
	// Line 2737, Address: 0x426dac, Func Offset: 0x6c
	// Line 2717, Address: 0x426dc0, Func Offset: 0x80
	// Line 2737, Address: 0x426dc4, Func Offset: 0x84
	// Line 2718, Address: 0x426dd0, Func Offset: 0x90
	// Line 2737, Address: 0x426dd4, Func Offset: 0x94
	// Line 2719, Address: 0x426de0, Func Offset: 0xa0
	// Line 2737, Address: 0x426de4, Func Offset: 0xa4
	// Line 2721, Address: 0x426df4, Func Offset: 0xb4
	// Line 2737, Address: 0x426df8, Func Offset: 0xb8
	// Line 2722, Address: 0x426e04, Func Offset: 0xc4
	// Line 2737, Address: 0x426e08, Func Offset: 0xc8
	// Line 2723, Address: 0x426e18, Func Offset: 0xd8
	// Line 2737, Address: 0x426e1c, Func Offset: 0xdc
	// Line 2728, Address: 0x426e24, Func Offset: 0xe4
	// Line 2737, Address: 0x426e2c, Func Offset: 0xec
	// Line 2729, Address: 0x426e34, Func Offset: 0xf4
	// Line 2737, Address: 0x426e3c, Func Offset: 0xfc
	// Line 2750, Address: 0x426e44, Func Offset: 0x104
	// Line 2751, Address: 0x426e48, Func Offset: 0x108
	// Line 2752, Address: 0x426e4c, Func Offset: 0x10c
	// Line 2756, Address: 0x426e78, Func Offset: 0x138
	// Line 2757, Address: 0x426eac, Func Offset: 0x16c
	// Line 2758, Address: 0x426ee0, Func Offset: 0x1a0
	// Line 2759, Address: 0x426efc, Func Offset: 0x1bc
	// Line 2727, Address: 0x426f30, Func Offset: 0x1f0
	// Line 2759, Address: 0x426f38, Func Offset: 0x1f8
	// Line 2745, Address: 0x426f40, Func Offset: 0x200
	// Line 2759, Address: 0x426f48, Func Offset: 0x208
	// Line 2748, Address: 0x426f6c, Func Offset: 0x22c
	// Line 2759, Address: 0x426f74, Func Offset: 0x234
	// Line 2749, Address: 0x426f80, Func Offset: 0x240
	// Line 2759, Address: 0x426f84, Func Offset: 0x244
	// Line 2744, Address: 0x426fac, Func Offset: 0x26c
	// Line 2759, Address: 0x426fb8, Func Offset: 0x278
	// Func End, Address: 0x426fe8, Func Offset: 0x2a8
}

// xBoxForModel__FR4xBoxPC14xModelInstanceb
// Start address: 0x426ff0
void xBoxForModel(xBox& o, xModelInstance* m, uint8 childModels)
{
	// Line 2687, Address: 0x426ff0, Func Offset: 0
	// Line 2688, Address: 0x427004, Func Offset: 0x14
	// Line 2692, Address: 0x42700c, Func Offset: 0x1c
	// Line 2693, Address: 0x427040, Func Offset: 0x50
	// Line 2694, Address: 0x427070, Func Offset: 0x80
	// Func End, Address: 0x427084, Func Offset: 0x94
}

// xBoxForTriangle__FR4xBoxRC5xVec3RC5xVec3RC5xVec3
// Start address: 0x427090
void xBoxForTriangle(xBox& box, xVec3& p0, xVec3& p1, xVec3& p2)
{
	// Line 2650, Address: 0x427090, Func Offset: 0
	// Line 2652, Address: 0x427098, Func Offset: 0x8
	// Line 2653, Address: 0x4270a4, Func Offset: 0x14
	// Line 2655, Address: 0x4270a8, Func Offset: 0x18
	// Line 2657, Address: 0x4270b0, Func Offset: 0x20
	// Line 2658, Address: 0x4270b4, Func Offset: 0x24
	// Line 2660, Address: 0x4270c0, Func Offset: 0x30
	// Line 2661, Address: 0x4270cc, Func Offset: 0x3c
	// Line 2663, Address: 0x4270d0, Func Offset: 0x40
	// Line 2665, Address: 0x4270d8, Func Offset: 0x48
	// Line 2666, Address: 0x4270dc, Func Offset: 0x4c
	// Line 2668, Address: 0x4270e8, Func Offset: 0x58
	// Line 2669, Address: 0x4270f4, Func Offset: 0x64
	// Line 2671, Address: 0x4270f8, Func Offset: 0x68
	// Line 2673, Address: 0x427100, Func Offset: 0x70
	// Line 2674, Address: 0x427104, Func Offset: 0x74
	// Line 2678, Address: 0x42710c, Func Offset: 0x7c
	// Line 2679, Address: 0x427120, Func Offset: 0x90
	// Line 2680, Address: 0x427134, Func Offset: 0xa4
	// Line 2681, Address: 0x427148, Func Offset: 0xb8
	// Line 2682, Address: 0x42715c, Func Offset: 0xcc
	// Line 2683, Address: 0x427170, Func Offset: 0xe0
	// Line 2684, Address: 0x427180, Func Offset: 0xf0
	// Func End, Address: 0x4271c0, Func Offset: 0x130
}

// xSphereHitsCone__FRC5xVec3fRC5xVec3fRC5xVec3f
// Start address: 0x4271c0
uint8 xSphereHitsCone(xVec3& center, float32 radius, xVec3& kv0, float32 kr0, xVec3& kv1, float32 kr1)
{
	xMat4x3 mat;
	xVec3 C;
	float32 Cx;
	float32 Cy;
	float32 Dx;
	float32 Ex;
	float32 Ey;
	float32 a;
	float32 b;
	float32 i2a;
	float32 t0;
	float32 t1;
	// Line 2594, Address: 0x4271c0, Func Offset: 0
	// Line 2600, Address: 0x4271c4, Func Offset: 0x4
	// Line 2597, Address: 0x4271c8, Func Offset: 0x8
	// Line 2594, Address: 0x4271cc, Func Offset: 0xc
	// Line 2597, Address: 0x4271d0, Func Offset: 0x10
	// Line 2594, Address: 0x4271d4, Func Offset: 0x14
	// Line 2597, Address: 0x4271d8, Func Offset: 0x18
	// Line 2594, Address: 0x4271dc, Func Offset: 0x1c
	// Line 2597, Address: 0x4271e4, Func Offset: 0x24
	// Line 2594, Address: 0x4271e8, Func Offset: 0x28
	// Line 2597, Address: 0x4271ec, Func Offset: 0x2c
	// Line 2594, Address: 0x4271f0, Func Offset: 0x30
	// Line 2601, Address: 0x4271f4, Func Offset: 0x34
	// Line 2597, Address: 0x4271f8, Func Offset: 0x38
	// Line 2601, Address: 0x4271fc, Func Offset: 0x3c
	// Line 2594, Address: 0x427200, Func Offset: 0x40
	// Line 2601, Address: 0x427204, Func Offset: 0x44
	// Line 2597, Address: 0x427208, Func Offset: 0x48
	// Line 2602, Address: 0x42720c, Func Offset: 0x4c
	// Line 2597, Address: 0x427210, Func Offset: 0x50
	// Line 2602, Address: 0x427214, Func Offset: 0x54
	// Line 2597, Address: 0x427218, Func Offset: 0x58
	// Line 2601, Address: 0x42721c, Func Offset: 0x5c
	// Line 2597, Address: 0x427224, Func Offset: 0x64
	// Line 2601, Address: 0x427234, Func Offset: 0x74
	// Line 2600, Address: 0x42723c, Func Offset: 0x7c
	// Line 2597, Address: 0x427240, Func Offset: 0x80
	// Line 2603, Address: 0x427244, Func Offset: 0x84
	// Line 2598, Address: 0x42724c, Func Offset: 0x8c
	// Line 2597, Address: 0x427250, Func Offset: 0x90
	// Line 2598, Address: 0x427254, Func Offset: 0x94
	// Line 2600, Address: 0x427260, Func Offset: 0xa0
	// Line 2601, Address: 0x427264, Func Offset: 0xa4
	// Line 2603, Address: 0x427268, Func Offset: 0xa8
	// Line 2601, Address: 0x427278, Func Offset: 0xb8
	// Line 2600, Address: 0x42727c, Func Offset: 0xbc
	// Line 2601, Address: 0x427288, Func Offset: 0xc8
	// Line 2600, Address: 0x427294, Func Offset: 0xd4
	// Line 2601, Address: 0x4272a0, Func Offset: 0xe0
	// Line 2602, Address: 0x4272a8, Func Offset: 0xe8
	// Line 2601, Address: 0x4272b8, Func Offset: 0xf8
	// Line 2602, Address: 0x4272bc, Func Offset: 0xfc
	// Line 2603, Address: 0x4272c4, Func Offset: 0x104
	// Line 2602, Address: 0x4272cc, Func Offset: 0x10c
	// Line 2603, Address: 0x4272d0, Func Offset: 0x110
	// Line 2601, Address: 0x4272d8, Func Offset: 0x118
	// Line 2602, Address: 0x4272dc, Func Offset: 0x11c
	// Line 2603, Address: 0x4272e4, Func Offset: 0x124
	// Line 2604, Address: 0x427328, Func Offset: 0x168
	// Line 2610, Address: 0x42732c, Func Offset: 0x16c
	// Line 2604, Address: 0x427330, Func Offset: 0x170
	// Line 2605, Address: 0x427344, Func Offset: 0x184
	// Line 2604, Address: 0x427348, Func Offset: 0x188
	// Line 2605, Address: 0x42734c, Func Offset: 0x18c
	// Line 2604, Address: 0x427350, Func Offset: 0x190
	// Line 2605, Address: 0x427360, Func Offset: 0x1a0
	// Line 2604, Address: 0x427364, Func Offset: 0x1a4
	// Line 2610, Address: 0x427374, Func Offset: 0x1b4
	// Line 2605, Address: 0x427384, Func Offset: 0x1c4
	// Line 2610, Address: 0x427390, Func Offset: 0x1d0
	// Line 2614, Address: 0x4273b4, Func Offset: 0x1f4
	// Line 2619, Address: 0x4273b8, Func Offset: 0x1f8
	// Line 2622, Address: 0x4273d8, Func Offset: 0x218
	// Line 2627, Address: 0x4273dc, Func Offset: 0x21c
	// Line 2631, Address: 0x4273f8, Func Offset: 0x238
	// Line 2633, Address: 0x427400, Func Offset: 0x240
	// Line 2632, Address: 0x427404, Func Offset: 0x244
	// Line 2631, Address: 0x427408, Func Offset: 0x248
	// Line 2632, Address: 0x42740c, Func Offset: 0x24c
	// Line 2633, Address: 0x427410, Func Offset: 0x250
	// Line 2632, Address: 0x427444, Func Offset: 0x284
	// Line 2636, Address: 0x42744c, Func Offset: 0x28c
	// Line 2639, Address: 0x427458, Func Offset: 0x298
	// Line 2640, Address: 0x427460, Func Offset: 0x2a0
	// Line 2639, Address: 0x42746c, Func Offset: 0x2ac
	// Line 2640, Address: 0x427470, Func Offset: 0x2b0
	// Line 2641, Address: 0x427478, Func Offset: 0x2b8
	// Line 2642, Address: 0x427480, Func Offset: 0x2c0
	// Line 2643, Address: 0x427484, Func Offset: 0x2c4
	// Line 2644, Address: 0x4274b4, Func Offset: 0x2f4
	// Line 2603, Address: 0x4274d8, Func Offset: 0x318
	// Line 2620, Address: 0x4274e0, Func Offset: 0x320
	// Line 2628, Address: 0x4274ec, Func Offset: 0x32c
	// Line 2637, Address: 0x4274f4, Func Offset: 0x334
	// Line 2643, Address: 0x4274fc, Func Offset: 0x33c
	// Line 2644, Address: 0x427500, Func Offset: 0x340
	// Line 2647, Address: 0x427510, Func Offset: 0x350
	// Func End, Address: 0x427530, Func Offset: 0x370
}

// xSphereHitsVCircle__FRC5xVec3fRC5xVec3f
// Start address: 0x427530
uint8 xSphereHitsVCircle(xVec3& sc, float32 sr, xVec3& cc, float32 cr)
{
	float32 ydist;
	xVec2 xzloc1;
	xVec2 xzloc2;
	float32 max_xzdist;
	// Line 2558, Address: 0x427530, Func Offset: 0
	// Line 2560, Address: 0x427534, Func Offset: 0x4
	// Line 2561, Address: 0x42753c, Func Offset: 0xc
	// Line 2560, Address: 0x427540, Func Offset: 0x10
	// Line 2561, Address: 0x427544, Func Offset: 0x14
	// Line 2564, Address: 0x42755c, Func Offset: 0x2c
	// Line 2567, Address: 0x427560, Func Offset: 0x30
	// Line 2564, Address: 0x427564, Func Offset: 0x34
	// Line 2567, Address: 0x427568, Func Offset: 0x38
	// Line 2564, Address: 0x42756c, Func Offset: 0x3c
	// Line 2567, Address: 0x427578, Func Offset: 0x48
	// Line 2569, Address: 0x4275e0, Func Offset: 0xb0
	// Line 2570, Address: 0x4275e4, Func Offset: 0xb4
	// Line 2567, Address: 0x4275e8, Func Offset: 0xb8
	// Line 2568, Address: 0x4275ec, Func Offset: 0xbc
	// Line 2567, Address: 0x4275f0, Func Offset: 0xc0
	// Line 2568, Address: 0x4275f4, Func Offset: 0xc4
	// Line 2570, Address: 0x4275fc, Func Offset: 0xcc
	// Line 2568, Address: 0x427600, Func Offset: 0xd0
	// Line 2570, Address: 0x427610, Func Offset: 0xe0
	// Line 2568, Address: 0x427614, Func Offset: 0xe4
	// Line 2570, Address: 0x427628, Func Offset: 0xf8
	// Line 2573, Address: 0x427644, Func Offset: 0x114
	// Func End, Address: 0x42764c, Func Offset: 0x11c
}

// xCylinderHitsSphere__FPC9xCylinderPC7xSphereP7xCollis
// Start address: 0x427650
uint32 xCylinderHitsSphere(xCylinder* cyl, xSphere* sph, xCollis* coll)
{
	float32 sr;
	float32 ydist;
	xVec2 xzloc1;
	xVec2 xzloc2;
	float32 max_xzdist;
	// Line 2509, Address: 0x427650, Func Offset: 0
	// Line 2512, Address: 0x427654, Func Offset: 0x4
	// Line 2510, Address: 0x42765c, Func Offset: 0xc
	// Line 2513, Address: 0x427660, Func Offset: 0x10
	// Line 2512, Address: 0x427664, Func Offset: 0x14
	// Line 2513, Address: 0x427668, Func Offset: 0x18
	// Line 2517, Address: 0x42767c, Func Offset: 0x2c
	// Line 2518, Address: 0x4276a8, Func Offset: 0x58
	// Line 2521, Address: 0x4276c4, Func Offset: 0x74
	// Line 2522, Address: 0x427734, Func Offset: 0xe4
	// Line 2523, Address: 0x427738, Func Offset: 0xe8
	// Line 2522, Address: 0x42773c, Func Offset: 0xec
	// Line 2521, Address: 0x427740, Func Offset: 0xf0
	// Line 2522, Address: 0x427744, Func Offset: 0xf4
	// Line 2521, Address: 0x427748, Func Offset: 0xf8
	// Line 2522, Address: 0x42774c, Func Offset: 0xfc
	// Line 2523, Address: 0x427750, Func Offset: 0x100
	// Line 2522, Address: 0x427754, Func Offset: 0x104
	// Line 2524, Address: 0x427768, Func Offset: 0x118
	// Line 2522, Address: 0x42776c, Func Offset: 0x11c
	// Line 2524, Address: 0x427784, Func Offset: 0x134
	// Line 2526, Address: 0x427794, Func Offset: 0x144
	// Line 2533, Address: 0x4277b8, Func Offset: 0x168
	// Line 2538, Address: 0x4277d8, Func Offset: 0x188
	// Line 2548, Address: 0x4277e8, Func Offset: 0x198
	// Line 2552, Address: 0x4277f8, Func Offset: 0x1a8
	// Line 2553, Address: 0x4277fc, Func Offset: 0x1ac
	// Line 2552, Address: 0x427800, Func Offset: 0x1b0
	// Line 2553, Address: 0x427804, Func Offset: 0x1b4
	// Line 2513, Address: 0x42780c, Func Offset: 0x1bc
	// Line 2524, Address: 0x427814, Func Offset: 0x1c4
	// Line 2553, Address: 0x42781c, Func Offset: 0x1cc
	// Line 2529, Address: 0x427820, Func Offset: 0x1d0
	// Line 2553, Address: 0x427824, Func Offset: 0x1d4
	// Line 2529, Address: 0x427828, Func Offset: 0x1d8
	// Line 2553, Address: 0x42782c, Func Offset: 0x1dc
	// Line 2527, Address: 0x427830, Func Offset: 0x1e0
	// Line 2528, Address: 0x427834, Func Offset: 0x1e4
	// Line 2553, Address: 0x427838, Func Offset: 0x1e8
	// Line 2529, Address: 0x42783c, Func Offset: 0x1ec
	// Line 2553, Address: 0x427840, Func Offset: 0x1f0
	// Line 2527, Address: 0x427844, Func Offset: 0x1f4
	// Line 2553, Address: 0x42784c, Func Offset: 0x1fc
	// Line 2529, Address: 0x427850, Func Offset: 0x200
	// Line 2553, Address: 0x427854, Func Offset: 0x204
	// Line 2527, Address: 0x427860, Func Offset: 0x210
	// Line 2553, Address: 0x427864, Func Offset: 0x214
	// Line 2529, Address: 0x427890, Func Offset: 0x240
	// Line 2553, Address: 0x427898, Func Offset: 0x248
	// Line 2529, Address: 0x4278a4, Func Offset: 0x254
	// Line 2553, Address: 0x4278a8, Func Offset: 0x258
	// Line 2529, Address: 0x4278c0, Func Offset: 0x270
	// Line 2553, Address: 0x4278c4, Func Offset: 0x274
	// Line 2529, Address: 0x4278cc, Func Offset: 0x27c
	// Line 2553, Address: 0x4278d0, Func Offset: 0x280
	// Line 2529, Address: 0x4278d8, Func Offset: 0x288
	// Line 2553, Address: 0x4278e4, Func Offset: 0x294
	// Line 2529, Address: 0x427900, Func Offset: 0x2b0
	// Line 2553, Address: 0x427908, Func Offset: 0x2b8
	// Line 2535, Address: 0x427918, Func Offset: 0x2c8
	// Line 2553, Address: 0x427924, Func Offset: 0x2d4
	// Line 2539, Address: 0x42793c, Func Offset: 0x2ec
	// Line 2553, Address: 0x427948, Func Offset: 0x2f8
	// Line 2539, Address: 0x42794c, Func Offset: 0x2fc
	// Line 2553, Address: 0x427950, Func Offset: 0x300
	// Line 2539, Address: 0x427958, Func Offset: 0x308
	// Line 2540, Address: 0x42795c, Func Offset: 0x30c
	// Line 2553, Address: 0x427960, Func Offset: 0x310
	// Line 2540, Address: 0x427964, Func Offset: 0x314
	// Line 2553, Address: 0x427968, Func Offset: 0x318
	// Line 2542, Address: 0x427988, Func Offset: 0x338
	// Line 2553, Address: 0x42798c, Func Offset: 0x33c
	// Line 2542, Address: 0x42799c, Func Offset: 0x34c
	// Line 2553, Address: 0x4279a4, Func Offset: 0x354
	// Line 2549, Address: 0x4279b4, Func Offset: 0x364
	// Line 2553, Address: 0x4279bc, Func Offset: 0x36c
	// Line 2549, Address: 0x4279c0, Func Offset: 0x370
	// Line 2553, Address: 0x4279c4, Func Offset: 0x374
	// Line 2549, Address: 0x4279cc, Func Offset: 0x37c
	// Line 2553, Address: 0x4279d0, Func Offset: 0x380
	// Line 2554, Address: 0x4279f4, Func Offset: 0x3a4
	// Func End, Address: 0x427a00, Func Offset: 0x3b0
}

// xSphereHitsVCylinder__FPC7xSpherePC9xCylinderP7xCollis
// Start address: 0x427a00
uint32 xSphereHitsVCylinder(xSphere* sph, xCylinder* cyl, xCollis* coll)
{
	float32 sr;
	float32 ydist;
	xVec2 xzloc1;
	xVec2 xzloc2;
	float32 max_xzdist;
	// Line 2462, Address: 0x427a00, Func Offset: 0
	// Line 2465, Address: 0x427a04, Func Offset: 0x4
	// Line 2463, Address: 0x427a0c, Func Offset: 0xc
	// Line 2466, Address: 0x427a10, Func Offset: 0x10
	// Line 2465, Address: 0x427a14, Func Offset: 0x14
	// Line 2466, Address: 0x427a18, Func Offset: 0x18
	// Line 2470, Address: 0x427a2c, Func Offset: 0x2c
	// Line 2471, Address: 0x427a58, Func Offset: 0x58
	// Line 2474, Address: 0x427a74, Func Offset: 0x74
	// Line 2475, Address: 0x427ae4, Func Offset: 0xe4
	// Line 2476, Address: 0x427ae8, Func Offset: 0xe8
	// Line 2475, Address: 0x427aec, Func Offset: 0xec
	// Line 2474, Address: 0x427af0, Func Offset: 0xf0
	// Line 2475, Address: 0x427af4, Func Offset: 0xf4
	// Line 2474, Address: 0x427af8, Func Offset: 0xf8
	// Line 2475, Address: 0x427afc, Func Offset: 0xfc
	// Line 2476, Address: 0x427b00, Func Offset: 0x100
	// Line 2475, Address: 0x427b04, Func Offset: 0x104
	// Line 2477, Address: 0x427b18, Func Offset: 0x118
	// Line 2475, Address: 0x427b1c, Func Offset: 0x11c
	// Line 2477, Address: 0x427b34, Func Offset: 0x134
	// Line 2479, Address: 0x427b44, Func Offset: 0x144
	// Line 2486, Address: 0x427b68, Func Offset: 0x168
	// Line 2491, Address: 0x427b88, Func Offset: 0x188
	// Line 2501, Address: 0x427b98, Func Offset: 0x198
	// Line 2505, Address: 0x427ba8, Func Offset: 0x1a8
	// Line 2506, Address: 0x427bac, Func Offset: 0x1ac
	// Line 2505, Address: 0x427bb0, Func Offset: 0x1b0
	// Line 2506, Address: 0x427bb4, Func Offset: 0x1b4
	// Line 2466, Address: 0x427bbc, Func Offset: 0x1bc
	// Line 2477, Address: 0x427bc4, Func Offset: 0x1c4
	// Line 2506, Address: 0x427bcc, Func Offset: 0x1cc
	// Line 2482, Address: 0x427bd0, Func Offset: 0x1d0
	// Line 2506, Address: 0x427bd4, Func Offset: 0x1d4
	// Line 2482, Address: 0x427bd8, Func Offset: 0x1d8
	// Line 2506, Address: 0x427bdc, Func Offset: 0x1dc
	// Line 2480, Address: 0x427be0, Func Offset: 0x1e0
	// Line 2481, Address: 0x427be4, Func Offset: 0x1e4
	// Line 2506, Address: 0x427be8, Func Offset: 0x1e8
	// Line 2482, Address: 0x427bec, Func Offset: 0x1ec
	// Line 2506, Address: 0x427bf0, Func Offset: 0x1f0
	// Line 2480, Address: 0x427bf4, Func Offset: 0x1f4
	// Line 2506, Address: 0x427bfc, Func Offset: 0x1fc
	// Line 2482, Address: 0x427c00, Func Offset: 0x200
	// Line 2506, Address: 0x427c04, Func Offset: 0x204
	// Line 2480, Address: 0x427c10, Func Offset: 0x210
	// Line 2506, Address: 0x427c14, Func Offset: 0x214
	// Line 2482, Address: 0x427c40, Func Offset: 0x240
	// Line 2506, Address: 0x427c48, Func Offset: 0x248
	// Line 2482, Address: 0x427c54, Func Offset: 0x254
	// Line 2506, Address: 0x427c58, Func Offset: 0x258
	// Line 2482, Address: 0x427c70, Func Offset: 0x270
	// Line 2506, Address: 0x427c74, Func Offset: 0x274
	// Line 2482, Address: 0x427c7c, Func Offset: 0x27c
	// Line 2506, Address: 0x427c80, Func Offset: 0x280
	// Line 2482, Address: 0x427c88, Func Offset: 0x288
	// Line 2506, Address: 0x427c94, Func Offset: 0x294
	// Line 2482, Address: 0x427cb0, Func Offset: 0x2b0
	// Line 2506, Address: 0x427cb8, Func Offset: 0x2b8
	// Line 2488, Address: 0x427cc8, Func Offset: 0x2c8
	// Line 2506, Address: 0x427cd4, Func Offset: 0x2d4
	// Line 2492, Address: 0x427ce8, Func Offset: 0x2e8
	// Line 2506, Address: 0x427cf4, Func Offset: 0x2f4
	// Line 2492, Address: 0x427cf8, Func Offset: 0x2f8
	// Line 2506, Address: 0x427cfc, Func Offset: 0x2fc
	// Line 2492, Address: 0x427d04, Func Offset: 0x304
	// Line 2493, Address: 0x427d08, Func Offset: 0x308
	// Line 2506, Address: 0x427d0c, Func Offset: 0x30c
	// Line 2493, Address: 0x427d10, Func Offset: 0x310
	// Line 2506, Address: 0x427d14, Func Offset: 0x314
	// Line 2495, Address: 0x427d34, Func Offset: 0x334
	// Line 2506, Address: 0x427d38, Func Offset: 0x338
	// Line 2495, Address: 0x427d48, Func Offset: 0x348
	// Line 2506, Address: 0x427d50, Func Offset: 0x350
	// Line 2502, Address: 0x427d60, Func Offset: 0x360
	// Line 2506, Address: 0x427d68, Func Offset: 0x368
	// Line 2502, Address: 0x427d6c, Func Offset: 0x36c
	// Line 2506, Address: 0x427d70, Func Offset: 0x370
	// Line 2502, Address: 0x427d78, Func Offset: 0x378
	// Line 2506, Address: 0x427d7c, Func Offset: 0x37c
	// Line 2507, Address: 0x427da0, Func Offset: 0x3a0
	// Func End, Address: 0x427dac, Func Offset: 0x3ac
}

// xSphereHitsVCylinder__FRC5xVec3fRC5xVec3ff
// Start address: 0x427db0
uint8 xSphereHitsVCylinder(xVec3& sc, float32 sr, xVec3& cc, float32 cr, float32 ch)
{
	float32 ydist;
	xVec2 xzloc1;
	xVec2 xzloc2;
	float32 max_xzdist;
	// Line 2443, Address: 0x427db0, Func Offset: 0
	// Line 2445, Address: 0x427db4, Func Offset: 0x4
	// Line 2446, Address: 0x427dbc, Func Offset: 0xc
	// Line 2445, Address: 0x427dc0, Func Offset: 0x10
	// Line 2446, Address: 0x427dc4, Func Offset: 0x14
	// Line 2450, Address: 0x427de0, Func Offset: 0x30
	// Line 2451, Address: 0x427df4, Func Offset: 0x44
	// Line 2454, Address: 0x427e14, Func Offset: 0x64
	// Line 2457, Address: 0x427e84, Func Offset: 0xd4
	// Line 2455, Address: 0x427e88, Func Offset: 0xd8
	// Line 2456, Address: 0x427e8c, Func Offset: 0xdc
	// Line 2454, Address: 0x427e90, Func Offset: 0xe0
	// Line 2455, Address: 0x427e94, Func Offset: 0xe4
	// Line 2457, Address: 0x427ea4, Func Offset: 0xf4
	// Line 2455, Address: 0x427ea8, Func Offset: 0xf8
	// Line 2457, Address: 0x427eb4, Func Offset: 0x104
	// Line 2455, Address: 0x427eb8, Func Offset: 0x108
	// Line 2457, Address: 0x427ec8, Func Offset: 0x118
	// Line 2446, Address: 0x427ee8, Func Offset: 0x138
	// Line 2450, Address: 0x427ef4, Func Offset: 0x144
	// Line 2457, Address: 0x427efc, Func Offset: 0x14c
	// Line 2450, Address: 0x427f08, Func Offset: 0x158
	// Line 2460, Address: 0x427f10, Func Offset: 0x160
	// Func End, Address: 0x427f1c, Func Offset: 0x16c
}

// xOBBHitsOBB__FRC4xBoxRC7xMat4x3RC4xBoxRC7xMat4x3
// Start address: 0x427f20
uint8 xOBBHitsOBB(xBox& a, xMat4x3& amat, xBox& b, xMat4x3& bmat)
{
	float32 ax;
	float32 ay;
	float32 az;
	float32 bx;
	float32 by;
	float32 bz;
	xVec3 acenter;
	xVec3 bcenter;
	xVec3 offset;
	xVec3 aoffset;
	xMat3x3 xmat;
	xMat3x3 axmat;
	float32 ar;
	float32 br;
	// Line 2299, Address: 0x427f20, Func Offset: 0
	// Line 2300, Address: 0x427f28, Func Offset: 0x8
	// Line 2440, Address: 0x427f30, Func Offset: 0x10
	// Line 2300, Address: 0x427f34, Func Offset: 0x14
	// Line 2440, Address: 0x427f38, Func Offset: 0x18
	// Func End, Address: 0x427f40, Func Offset: 0x20
}

// xSphereHitsBox__FRC5xVec3fRC4xBox
// Start address: 0x427f40
uint8 xSphereHitsBox(xVec3& c, float32 r, xBox& b)
{
	float32 ex;
	float32 ey;
	float32 ez;
	float32 dx;
	float32 dy;
	float32 dz;
	// Line 2252, Address: 0x427f40, Func Offset: 0
	// Line 2254, Address: 0x427f44, Func Offset: 0x4
	// Line 2255, Address: 0x427f50, Func Offset: 0x10
	// Line 2254, Address: 0x427f54, Func Offset: 0x14
	// Line 2255, Address: 0x427f58, Func Offset: 0x18
	// Line 2256, Address: 0x427f5c, Func Offset: 0x1c
	// Line 2254, Address: 0x427f60, Func Offset: 0x20
	// Line 2255, Address: 0x427f68, Func Offset: 0x28
	// Line 2256, Address: 0x427f70, Func Offset: 0x30
	// Line 2259, Address: 0x427f78, Func Offset: 0x38
	// Line 2260, Address: 0x427f80, Func Offset: 0x40
	// Line 2259, Address: 0x427f84, Func Offset: 0x44
	// Line 2261, Address: 0x427f8c, Func Offset: 0x4c
	// Line 2260, Address: 0x427f90, Func Offset: 0x50
	// Line 2264, Address: 0x427f94, Func Offset: 0x54
	// Line 2270, Address: 0x427f98, Func Offset: 0x58
	// Line 2261, Address: 0x427f9c, Func Offset: 0x5c
	// Line 2260, Address: 0x427fa0, Func Offset: 0x60
	// Line 2261, Address: 0x427fa8, Func Offset: 0x68
	// Line 2265, Address: 0x427fb0, Func Offset: 0x70
	// Line 2270, Address: 0x427fb4, Func Offset: 0x74
	// Line 2272, Address: 0x427fbc, Func Offset: 0x7c
	// Line 2274, Address: 0x427fc8, Func Offset: 0x88
	// Line 2279, Address: 0x427ff4, Func Offset: 0xb4
	// Line 2285, Address: 0x42803c, Func Offset: 0xfc
	// Line 2287, Address: 0x428048, Func Offset: 0x108
	// Line 2292, Address: 0x428090, Func Offset: 0x150
	// Line 2296, Address: 0x4280e0, Func Offset: 0x1a0
	// Func End, Address: 0x4280e8, Func Offset: 0x1a8
}

// xCollisTriHit__FRCQ27xCollis8tri_dataRC14xModelInstance
// Start address: 0x4280f0
xVec3 xCollisTriHit(tri_data_0& tri, xModelInstance& model)
{
	xMat4x3& m;
	xVec3 v[3];
	RpGeometry* geom;
	xVec3* verts;
	RpMorphTarget* mt;
	RpTriangle& t;
	int32 i;
	xVec3 r[2];
	xVec3 d;
	xVec3 A;
	xVec3 B;
	xVec3 C;
	xVec3 AxB;
	// Line 2186, Address: 0x4280f0, Func Offset: 0
	// Line 2192, Address: 0x4280f4, Func Offset: 0x4
	// Line 2186, Address: 0x4280f8, Func Offset: 0x8
	// Line 2195, Address: 0x42811c, Func Offset: 0x2c
	// Line 2192, Address: 0x428120, Func Offset: 0x30
	// Line 2196, Address: 0x428124, Func Offset: 0x34
	// Line 2199, Address: 0x428130, Func Offset: 0x40
	// Line 2203, Address: 0x428134, Func Offset: 0x44
	// Line 2204, Address: 0x428138, Func Offset: 0x48
	// Line 2203, Address: 0x42813c, Func Offset: 0x4c
	// Line 2204, Address: 0x42814c, Func Offset: 0x5c
	// Line 2206, Address: 0x428150, Func Offset: 0x60
	// Line 2204, Address: 0x428160, Func Offset: 0x70
	// Line 2206, Address: 0x428164, Func Offset: 0x74
	// Line 2207, Address: 0x42818c, Func Offset: 0x9c
	// Line 2208, Address: 0x4281dc, Func Offset: 0xec
	// Line 2211, Address: 0x4281ec, Func Offset: 0xfc
	// Line 2212, Address: 0x428210, Func Offset: 0x120
	// Line 2211, Address: 0x428214, Func Offset: 0x124
	// Line 2212, Address: 0x428230, Func Offset: 0x140
	// Line 2211, Address: 0x428234, Func Offset: 0x144
	// Line 2212, Address: 0x428238, Func Offset: 0x148
	// Line 2211, Address: 0x42823c, Func Offset: 0x14c
	// Line 2212, Address: 0x42825c, Func Offset: 0x16c
	// Line 2211, Address: 0x428260, Func Offset: 0x170
	// Line 2213, Address: 0x428264, Func Offset: 0x174
	// Line 2212, Address: 0x42826c, Func Offset: 0x17c
	// Line 2213, Address: 0x428270, Func Offset: 0x180
	// Line 2211, Address: 0x428274, Func Offset: 0x184
	// Line 2213, Address: 0x428278, Func Offset: 0x188
	// Line 2211, Address: 0x42827c, Func Offset: 0x18c
	// Line 2216, Address: 0x428284, Func Offset: 0x194
	// Line 2211, Address: 0x428288, Func Offset: 0x198
	// Line 2212, Address: 0x4282a4, Func Offset: 0x1b4
	// Line 2211, Address: 0x4282a8, Func Offset: 0x1b8
	// Line 2216, Address: 0x4282ac, Func Offset: 0x1bc
	// Line 2212, Address: 0x4282b0, Func Offset: 0x1c0
	// Line 2211, Address: 0x4282b4, Func Offset: 0x1c4
	// Line 2218, Address: 0x4282cc, Func Offset: 0x1dc
	// Line 2211, Address: 0x4282d0, Func Offset: 0x1e0
	// Line 2217, Address: 0x4282dc, Func Offset: 0x1ec
	// Line 2211, Address: 0x4282e0, Func Offset: 0x1f0
	// Line 2217, Address: 0x4282e8, Func Offset: 0x1f8
	// Line 2212, Address: 0x4282ec, Func Offset: 0x1fc
	// Line 2211, Address: 0x4282f0, Func Offset: 0x200
	// Line 2212, Address: 0x4282f4, Func Offset: 0x204
	// Line 2211, Address: 0x428308, Func Offset: 0x218
	// Line 2208, Address: 0x428310, Func Offset: 0x220
	// Line 2213, Address: 0x428314, Func Offset: 0x224
	// Line 2211, Address: 0x428318, Func Offset: 0x228
	// Line 2212, Address: 0x42831c, Func Offset: 0x22c
	// Line 2211, Address: 0x428324, Func Offset: 0x234
	// Line 2212, Address: 0x428328, Func Offset: 0x238
	// Line 2211, Address: 0x42832c, Func Offset: 0x23c
	// Line 2218, Address: 0x428348, Func Offset: 0x258
	// Line 2211, Address: 0x42834c, Func Offset: 0x25c
	// Line 2212, Address: 0x428368, Func Offset: 0x278
	// Line 2211, Address: 0x42836c, Func Offset: 0x27c
	// Line 2218, Address: 0x428378, Func Offset: 0x288
	// Line 2219, Address: 0x42837c, Func Offset: 0x28c
	// Line 2211, Address: 0x428380, Func Offset: 0x290
	// Line 2218, Address: 0x428388, Func Offset: 0x298
	// Line 2211, Address: 0x42838c, Func Offset: 0x29c
	// Line 2212, Address: 0x428394, Func Offset: 0x2a4
	// Line 2211, Address: 0x42839c, Func Offset: 0x2ac
	// Line 2219, Address: 0x4283a8, Func Offset: 0x2b8
	// Line 2211, Address: 0x4283ac, Func Offset: 0x2bc
	// Line 2212, Address: 0x4283c8, Func Offset: 0x2d8
	// Line 2211, Address: 0x4283cc, Func Offset: 0x2dc
	// Line 2212, Address: 0x4283d4, Func Offset: 0x2e4
	// Line 2211, Address: 0x4283d8, Func Offset: 0x2e8
	// Line 2212, Address: 0x4283dc, Func Offset: 0x2ec
	// Line 2211, Address: 0x4283e0, Func Offset: 0x2f0
	// Line 2212, Address: 0x4283e4, Func Offset: 0x2f4
	// Line 2211, Address: 0x4283e8, Func Offset: 0x2f8
	// Line 2212, Address: 0x4283f8, Func Offset: 0x308
	// Line 2211, Address: 0x4283fc, Func Offset: 0x30c
	// Line 2212, Address: 0x428400, Func Offset: 0x310
	// Line 2211, Address: 0x428404, Func Offset: 0x314
	// Line 2212, Address: 0x42840c, Func Offset: 0x31c
	// Line 2211, Address: 0x428410, Func Offset: 0x320
	// Line 2212, Address: 0x428414, Func Offset: 0x324
	// Line 2211, Address: 0x428418, Func Offset: 0x328
	// Line 2212, Address: 0x428420, Func Offset: 0x330
	// Line 2211, Address: 0x428434, Func Offset: 0x344
	// Line 2213, Address: 0x428438, Func Offset: 0x348
	// Line 2218, Address: 0x428444, Func Offset: 0x354
	// Line 2212, Address: 0x42844c, Func Offset: 0x35c
	// Line 2213, Address: 0x428450, Func Offset: 0x360
	// Line 2212, Address: 0x428458, Func Offset: 0x368
	// Line 2213, Address: 0x42845c, Func Offset: 0x36c
	// Line 2218, Address: 0x428460, Func Offset: 0x370
	// Line 2212, Address: 0x428468, Func Offset: 0x378
	// Line 2213, Address: 0x428474, Func Offset: 0x384
	// Line 2218, Address: 0x428478, Func Offset: 0x388
	// Line 2212, Address: 0x428480, Func Offset: 0x390
	// Line 2218, Address: 0x428498, Func Offset: 0x3a8
	// Line 2212, Address: 0x42849c, Func Offset: 0x3ac
	// Line 2218, Address: 0x4284a4, Func Offset: 0x3b4
	// Line 2211, Address: 0x4284ac, Func Offset: 0x3bc
	// Line 2212, Address: 0x4284b0, Func Offset: 0x3c0
	// Line 2218, Address: 0x4284b8, Func Offset: 0x3c8
	// Line 2212, Address: 0x4284cc, Func Offset: 0x3dc
	// Line 2218, Address: 0x4284d0, Func Offset: 0x3e0
	// Line 2212, Address: 0x4284d8, Func Offset: 0x3e8
	// Line 2218, Address: 0x4284dc, Func Offset: 0x3ec
	// Line 2212, Address: 0x4284e0, Func Offset: 0x3f0
	// Line 2218, Address: 0x4284e8, Func Offset: 0x3f8
	// Line 2212, Address: 0x4284f4, Func Offset: 0x404
	// Line 2218, Address: 0x4284fc, Func Offset: 0x40c
	// Line 2212, Address: 0x428500, Func Offset: 0x410
	// Line 2218, Address: 0x428514, Func Offset: 0x424
	// Line 2213, Address: 0x428518, Func Offset: 0x428
	// Line 2212, Address: 0x428520, Func Offset: 0x430
	// Line 2218, Address: 0x428528, Func Offset: 0x438
	// Line 2212, Address: 0x42852c, Func Offset: 0x43c
	// Line 2213, Address: 0x428540, Func Offset: 0x450
	// Line 2218, Address: 0x428548, Func Offset: 0x458
	// Line 2212, Address: 0x42854c, Func Offset: 0x45c
	// Line 2218, Address: 0x428550, Func Offset: 0x460
	// Line 2212, Address: 0x428554, Func Offset: 0x464
	// Line 2213, Address: 0x428558, Func Offset: 0x468
	// Line 2212, Address: 0x42855c, Func Offset: 0x46c
	// Line 2218, Address: 0x428568, Func Offset: 0x478
	// Line 2212, Address: 0x42856c, Func Offset: 0x47c
	// Line 2213, Address: 0x42858c, Func Offset: 0x49c
	// Line 2217, Address: 0x428594, Func Offset: 0x4a4
	// Line 2212, Address: 0x428598, Func Offset: 0x4a8
	// Line 2213, Address: 0x4285a0, Func Offset: 0x4b0
	// Line 2217, Address: 0x4285ac, Func Offset: 0x4bc
	// Line 2212, Address: 0x4285b0, Func Offset: 0x4c0
	// Line 2213, Address: 0x4285c0, Func Offset: 0x4d0
	// Line 2212, Address: 0x4285c4, Func Offset: 0x4d4
	// Line 2213, Address: 0x4285c8, Func Offset: 0x4d8
	// Line 2217, Address: 0x4285cc, Func Offset: 0x4dc
	// Line 2213, Address: 0x4285d0, Func Offset: 0x4e0
	// Line 2217, Address: 0x4285d4, Func Offset: 0x4e4
	// Line 2212, Address: 0x4285d8, Func Offset: 0x4e8
	// Line 2217, Address: 0x4285e0, Func Offset: 0x4f0
	// Line 2213, Address: 0x4285e4, Func Offset: 0x4f4
	// Line 2217, Address: 0x4285ec, Func Offset: 0x4fc
	// Line 2213, Address: 0x4285f4, Func Offset: 0x504
	// Line 2217, Address: 0x4285f8, Func Offset: 0x508
	// Line 2213, Address: 0x428600, Func Offset: 0x510
	// Line 2217, Address: 0x42860c, Func Offset: 0x51c
	// Line 2213, Address: 0x428610, Func Offset: 0x520
	// Line 2217, Address: 0x428618, Func Offset: 0x528
	// Line 2213, Address: 0x42861c, Func Offset: 0x52c
	// Line 2217, Address: 0x42862c, Func Offset: 0x53c
	// Line 2213, Address: 0x428630, Func Offset: 0x540
	// Line 2217, Address: 0x428634, Func Offset: 0x544
	// Line 2213, Address: 0x428638, Func Offset: 0x548
	// Line 2217, Address: 0x428640, Func Offset: 0x550
	// Line 2213, Address: 0x428648, Func Offset: 0x558
	// Line 2217, Address: 0x428650, Func Offset: 0x560
	// Line 2213, Address: 0x428654, Func Offset: 0x564
	// Line 2217, Address: 0x428658, Func Offset: 0x568
	// Line 2213, Address: 0x42865c, Func Offset: 0x56c
	// Line 2217, Address: 0x428668, Func Offset: 0x578
	// Line 2213, Address: 0x428670, Func Offset: 0x580
	// Line 2218, Address: 0x428674, Func Offset: 0x584
	// Line 2213, Address: 0x428678, Func Offset: 0x588
	// Line 2217, Address: 0x428680, Func Offset: 0x590
	// Line 2213, Address: 0x42868c, Func Offset: 0x59c
	// Line 2218, Address: 0x428694, Func Offset: 0x5a4
	// Line 2213, Address: 0x428698, Func Offset: 0x5a8
	// Line 2217, Address: 0x4286a8, Func Offset: 0x5b8
	// Line 2213, Address: 0x4286b4, Func Offset: 0x5c4
	// Line 2212, Address: 0x4286c4, Func Offset: 0x5d4
	// Line 2217, Address: 0x4286c8, Func Offset: 0x5d8
	// Line 2213, Address: 0x4286d4, Func Offset: 0x5e4
	// Line 2217, Address: 0x4286dc, Func Offset: 0x5ec
	// Line 2213, Address: 0x4286e0, Func Offset: 0x5f0
	// Line 2217, Address: 0x4286e8, Func Offset: 0x5f8
	// Line 2213, Address: 0x4286ec, Func Offset: 0x5fc
	// Line 2216, Address: 0x428758, Func Offset: 0x668
	// Line 2213, Address: 0x428760, Func Offset: 0x670
	// Line 2216, Address: 0x428770, Func Offset: 0x680
	// Line 2219, Address: 0x4287f0, Func Offset: 0x700
	// Line 2220, Address: 0x428840, Func Offset: 0x750
	// Line 2219, Address: 0x428844, Func Offset: 0x754
	// Line 2220, Address: 0x428848, Func Offset: 0x758
	// Line 2219, Address: 0x42884c, Func Offset: 0x75c
	// Line 2220, Address: 0x428898, Func Offset: 0x7a8
	// Line 2222, Address: 0x4288c8, Func Offset: 0x7d8
	// Line 2220, Address: 0x4288cc, Func Offset: 0x7dc
	// Line 2222, Address: 0x4288d0, Func Offset: 0x7e0
	// Line 2220, Address: 0x4288d4, Func Offset: 0x7e4
	// Line 2222, Address: 0x4288e4, Func Offset: 0x7f4
	// Line 2220, Address: 0x4288e8, Func Offset: 0x7f8
	// Line 2221, Address: 0x42892c, Func Offset: 0x83c
	// Line 2220, Address: 0x428934, Func Offset: 0x844
	// Line 2221, Address: 0x428948, Func Offset: 0x858
	// Line 2220, Address: 0x42894c, Func Offset: 0x85c
	// Line 2221, Address: 0x428950, Func Offset: 0x860
	// Line 2222, Address: 0x428954, Func Offset: 0x864
	// Line 2226, Address: 0x428ab4, Func Offset: 0x9c4
	// Line 2227, Address: 0x428acc, Func Offset: 0x9dc
	// Func End, Address: 0x428af8, Func Offset: 0xa08
}

// xCollideCalcTri__FRQ27xCollis8tri_dataRC14xModelInstanceRC5xVec3RC5xVec3
// Start address: 0x428b00
void xCollideCalcTri(tri_data_0& tri, xModelInstance& model, xVec3& center, xVec3& heading)
{
	xVec3 v[3];
	RpGeometry* geom;
	xVec3* verts;
	RpTriangle& t;
	xVec3 p;
	float32 num;
	xVec3 b;
	xVec3 A;
	xVec3 d;
	xVec3 ad;
	xVec3 d;
	xVec3 ad;
	// Line 2104, Address: 0x428b00, Func Offset: 0
	// Line 2109, Address: 0x428b04, Func Offset: 0x4
	// Line 2104, Address: 0x428b08, Func Offset: 0x8
	// Line 2112, Address: 0x428b30, Func Offset: 0x30
	// Line 2104, Address: 0x428b34, Func Offset: 0x34
	// Line 2113, Address: 0x428b3c, Func Offset: 0x3c
	// Line 2119, Address: 0x428b44, Func Offset: 0x44
	// Line 2121, Address: 0x428b48, Func Offset: 0x48
	// Line 2126, Address: 0x428b4c, Func Offset: 0x4c
	// Line 2121, Address: 0x428b54, Func Offset: 0x54
	// Line 2126, Address: 0x428b58, Func Offset: 0x58
	// Line 2127, Address: 0x428b64, Func Offset: 0x64
	// Line 2128, Address: 0x428b6c, Func Offset: 0x6c
	// Line 2119, Address: 0x428b74, Func Offset: 0x74
	// Line 2126, Address: 0x428b78, Func Offset: 0x78
	// Line 2128, Address: 0x428b7c, Func Offset: 0x7c
	// Line 2132, Address: 0x428b84, Func Offset: 0x84
	// Line 2119, Address: 0x428b88, Func Offset: 0x88
	// Line 2121, Address: 0x428b90, Func Offset: 0x90
	// Line 2132, Address: 0x428b94, Func Offset: 0x94
	// Line 2121, Address: 0x428b98, Func Offset: 0x98
	// Line 2126, Address: 0x428c10, Func Offset: 0x110
	// Line 2121, Address: 0x428c20, Func Offset: 0x120
	// Line 2126, Address: 0x428c24, Func Offset: 0x124
	// Line 2121, Address: 0x428c28, Func Offset: 0x128
	// Line 2126, Address: 0x428c2c, Func Offset: 0x12c
	// Line 2127, Address: 0x428c44, Func Offset: 0x144
	// Line 2126, Address: 0x428c4c, Func Offset: 0x14c
	// Line 2127, Address: 0x428c50, Func Offset: 0x150
	// Line 2121, Address: 0x428c58, Func Offset: 0x158
	// Line 2127, Address: 0x428c5c, Func Offset: 0x15c
	// Line 2128, Address: 0x428c60, Func Offset: 0x160
	// Line 2126, Address: 0x428c64, Func Offset: 0x164
	// Line 2127, Address: 0x428c6c, Func Offset: 0x16c
	// Line 2128, Address: 0x428c7c, Func Offset: 0x17c
	// Line 2126, Address: 0x428c80, Func Offset: 0x180
	// Line 2127, Address: 0x428c84, Func Offset: 0x184
	// Line 2126, Address: 0x428c8c, Func Offset: 0x18c
	// Line 2127, Address: 0x428c98, Func Offset: 0x198
	// Line 2126, Address: 0x428c9c, Func Offset: 0x19c
	// Line 2127, Address: 0x428ca0, Func Offset: 0x1a0
	// Line 2126, Address: 0x428ca4, Func Offset: 0x1a4
	// Line 2128, Address: 0x428cb0, Func Offset: 0x1b0
	// Line 2126, Address: 0x428cb4, Func Offset: 0x1b4
	// Line 2127, Address: 0x428cbc, Func Offset: 0x1bc
	// Line 2126, Address: 0x428cc0, Func Offset: 0x1c0
	// Line 2128, Address: 0x428cc4, Func Offset: 0x1c4
	// Line 2126, Address: 0x428cc8, Func Offset: 0x1c8
	// Line 2128, Address: 0x428ccc, Func Offset: 0x1cc
	// Line 2126, Address: 0x428cd4, Func Offset: 0x1d4
	// Line 2127, Address: 0x428cdc, Func Offset: 0x1dc
	// Line 2126, Address: 0x428ce8, Func Offset: 0x1e8
	// Line 2127, Address: 0x428cec, Func Offset: 0x1ec
	// Line 2126, Address: 0x428cf0, Func Offset: 0x1f0
	// Line 2127, Address: 0x428cf4, Func Offset: 0x1f4
	// Line 2128, Address: 0x428d04, Func Offset: 0x204
	// Line 2126, Address: 0x428d08, Func Offset: 0x208
	// Line 2128, Address: 0x428d14, Func Offset: 0x214
	// Line 2127, Address: 0x428d24, Func Offset: 0x224
	// Line 2126, Address: 0x428d28, Func Offset: 0x228
	// Line 2128, Address: 0x428d2c, Func Offset: 0x22c
	// Line 2127, Address: 0x428d34, Func Offset: 0x234
	// Line 2128, Address: 0x428d38, Func Offset: 0x238
	// Line 2127, Address: 0x428d44, Func Offset: 0x244
	// Line 2128, Address: 0x428d48, Func Offset: 0x248
	// Line 2127, Address: 0x428d58, Func Offset: 0x258
	// Line 2128, Address: 0x428d5c, Func Offset: 0x25c
	// Line 2126, Address: 0x428d6c, Func Offset: 0x26c
	// Line 2128, Address: 0x428d70, Func Offset: 0x270
	// Line 2127, Address: 0x428d74, Func Offset: 0x274
	// Line 2128, Address: 0x428d80, Func Offset: 0x280
	// Line 2127, Address: 0x428d84, Func Offset: 0x284
	// Line 2128, Address: 0x428d88, Func Offset: 0x288
	// Line 2126, Address: 0x428d98, Func Offset: 0x298
	// Line 2128, Address: 0x428d9c, Func Offset: 0x29c
	// Line 2132, Address: 0x428dac, Func Offset: 0x2ac
	// Line 2140, Address: 0x428dd4, Func Offset: 0x2d4
	// Line 2132, Address: 0x428dd8, Func Offset: 0x2d8
	// Line 2140, Address: 0x428ddc, Func Offset: 0x2dc
	// Line 2132, Address: 0x428de0, Func Offset: 0x2e0
	// Line 2140, Address: 0x428df0, Func Offset: 0x2f0
	// Line 2132, Address: 0x428df4, Func Offset: 0x2f4
	// Line 2138, Address: 0x428e2c, Func Offset: 0x32c
	// Line 2132, Address: 0x428e30, Func Offset: 0x330
	// Line 2138, Address: 0x428e50, Func Offset: 0x350
	// Line 2139, Address: 0x428e54, Func Offset: 0x354
	// Line 2138, Address: 0x428e58, Func Offset: 0x358
	// Line 2139, Address: 0x428e64, Func Offset: 0x364
	// Line 2138, Address: 0x428e6c, Func Offset: 0x36c
	// Line 2139, Address: 0x428e78, Func Offset: 0x378
	// Line 2140, Address: 0x428e84, Func Offset: 0x384
	// Line 2148, Address: 0x428ec4, Func Offset: 0x3c4
	// Line 2149, Address: 0x428ed0, Func Offset: 0x3d0
	// Line 2148, Address: 0x428ed4, Func Offset: 0x3d4
	// Line 2150, Address: 0x428ed8, Func Offset: 0x3d8
	// Line 2148, Address: 0x428edc, Func Offset: 0x3dc
	// Line 2149, Address: 0x428ee4, Func Offset: 0x3e4
	// Line 2150, Address: 0x428ee8, Func Offset: 0x3e8
	// Line 2148, Address: 0x428eec, Func Offset: 0x3ec
	// Line 2149, Address: 0x428ef4, Func Offset: 0x3f4
	// Line 2148, Address: 0x428ef8, Func Offset: 0x3f8
	// Line 2149, Address: 0x428f00, Func Offset: 0x400
	// Line 2148, Address: 0x428f04, Func Offset: 0x404
	// Line 2149, Address: 0x428f08, Func Offset: 0x408
	// Line 2148, Address: 0x428f0c, Func Offset: 0x40c
	// Line 2149, Address: 0x428f14, Func Offset: 0x414
	// Line 2148, Address: 0x428f1c, Func Offset: 0x41c
	// Line 2150, Address: 0x428f20, Func Offset: 0x420
	// Line 2149, Address: 0x428f24, Func Offset: 0x424
	// Line 2150, Address: 0x428f28, Func Offset: 0x428
	// Line 2149, Address: 0x428f2c, Func Offset: 0x42c
	// Line 2148, Address: 0x428f30, Func Offset: 0x430
	// Line 2149, Address: 0x428f34, Func Offset: 0x434
	// Line 2150, Address: 0x428f38, Func Offset: 0x438
	// Line 2148, Address: 0x428f3c, Func Offset: 0x43c
	// Line 2150, Address: 0x428f48, Func Offset: 0x448
	// Line 2148, Address: 0x428f4c, Func Offset: 0x44c
	// Line 2150, Address: 0x428f50, Func Offset: 0x450
	// Line 2148, Address: 0x428f54, Func Offset: 0x454
	// Line 2150, Address: 0x428f58, Func Offset: 0x458
	// Line 2148, Address: 0x428f5c, Func Offset: 0x45c
	// Line 2150, Address: 0x428f64, Func Offset: 0x464
	// Line 2151, Address: 0x428f78, Func Offset: 0x478
	// Line 2149, Address: 0x428f7c, Func Offset: 0x47c
	// Line 2148, Address: 0x428f80, Func Offset: 0x480
	// Line 2150, Address: 0x428f8c, Func Offset: 0x48c
	// Line 2148, Address: 0x428f90, Func Offset: 0x490
	// Line 2149, Address: 0x428f98, Func Offset: 0x498
	// Line 2148, Address: 0x428fa0, Func Offset: 0x4a0
	// Line 2149, Address: 0x428fac, Func Offset: 0x4ac
	// Line 2148, Address: 0x428fb0, Func Offset: 0x4b0
	// Line 2150, Address: 0x428fb4, Func Offset: 0x4b4
	// Line 2151, Address: 0x428fb8, Func Offset: 0x4b8
	// Line 2149, Address: 0x428fbc, Func Offset: 0x4bc
	// Line 2148, Address: 0x428fc0, Func Offset: 0x4c0
	// Line 2149, Address: 0x428fd8, Func Offset: 0x4d8
	// Line 2150, Address: 0x428fe0, Func Offset: 0x4e0
	// Line 2148, Address: 0x428fe4, Func Offset: 0x4e4
	// Line 2149, Address: 0x428fe8, Func Offset: 0x4e8
	// Line 2150, Address: 0x428fec, Func Offset: 0x4ec
	// Line 2149, Address: 0x428ff4, Func Offset: 0x4f4
	// Line 2148, Address: 0x428ff8, Func Offset: 0x4f8
	// Line 2149, Address: 0x429000, Func Offset: 0x500
	// Line 2150, Address: 0x42900c, Func Offset: 0x50c
	// Line 2149, Address: 0x429010, Func Offset: 0x510
	// Line 2150, Address: 0x429014, Func Offset: 0x514
	// Line 2149, Address: 0x429018, Func Offset: 0x518
	// Line 2150, Address: 0x429020, Func Offset: 0x520
	// Line 2149, Address: 0x42902c, Func Offset: 0x52c
	// Line 2150, Address: 0x429030, Func Offset: 0x530
	// Line 2149, Address: 0x429034, Func Offset: 0x534
	// Line 2150, Address: 0x429038, Func Offset: 0x538
	// Line 2149, Address: 0x42903c, Func Offset: 0x53c
	// Line 2150, Address: 0x429040, Func Offset: 0x540
	// Line 2149, Address: 0x429044, Func Offset: 0x544
	// Line 2150, Address: 0x42904c, Func Offset: 0x54c
	// Line 2149, Address: 0x429058, Func Offset: 0x558
	// Line 2150, Address: 0x429060, Func Offset: 0x560
	// Line 2151, Address: 0x429068, Func Offset: 0x568
	// Line 2152, Address: 0x4290ac, Func Offset: 0x5ac
	// Line 2151, Address: 0x4290b0, Func Offset: 0x5b0
	// Line 2152, Address: 0x4290f8, Func Offset: 0x5f8
	// Line 2154, Address: 0x429120, Func Offset: 0x620
	// Line 2152, Address: 0x429124, Func Offset: 0x624
	// Line 2154, Address: 0x429128, Func Offset: 0x628
	// Line 2152, Address: 0x42912c, Func Offset: 0x62c
	// Line 2154, Address: 0x429160, Func Offset: 0x660
	// Line 2152, Address: 0x429164, Func Offset: 0x664
	// Line 2153, Address: 0x429168, Func Offset: 0x668
	// Line 2152, Address: 0x42916c, Func Offset: 0x66c
	// Line 2153, Address: 0x42917c, Func Offset: 0x67c
	// Line 2152, Address: 0x429184, Func Offset: 0x684
	// Line 2154, Address: 0x429188, Func Offset: 0x688
	// Line 2152, Address: 0x42918c, Func Offset: 0x68c
	// Line 2154, Address: 0x429198, Func Offset: 0x698
	// Line 2160, Address: 0x4291cc, Func Offset: 0x6cc
	// Line 2161, Address: 0x4291e0, Func Offset: 0x6e0
	// Line 2160, Address: 0x4291e4, Func Offset: 0x6e4
	// Line 2161, Address: 0x4291ec, Func Offset: 0x6ec
	// Line 2160, Address: 0x4291fc, Func Offset: 0x6fc
	// Line 2161, Address: 0x429208, Func Offset: 0x708
	// Line 2160, Address: 0x42920c, Func Offset: 0x70c
	// Line 2161, Address: 0x429254, Func Offset: 0x754
	// Line 2160, Address: 0x429260, Func Offset: 0x760
	// Line 2161, Address: 0x42926c, Func Offset: 0x76c
	// Line 2162, Address: 0x4292ec, Func Offset: 0x7ec
	// Line 2163, Address: 0x429308, Func Offset: 0x808
	// Line 2164, Address: 0x429374, Func Offset: 0x874
	// Line 2165, Address: 0x429380, Func Offset: 0x880
	// Line 2167, Address: 0x4293e4, Func Offset: 0x8e4
	// Line 2172, Address: 0x429440, Func Offset: 0x940
	// Line 2173, Address: 0x42945c, Func Offset: 0x95c
	// Line 2172, Address: 0x429460, Func Offset: 0x960
	// Line 2173, Address: 0x429464, Func Offset: 0x964
	// Line 2172, Address: 0x42946c, Func Offset: 0x96c
	// Line 2173, Address: 0x429470, Func Offset: 0x970
	// Line 2172, Address: 0x429474, Func Offset: 0x974
	// Line 2173, Address: 0x429478, Func Offset: 0x978
	// Line 2172, Address: 0x42947c, Func Offset: 0x97c
	// Line 2173, Address: 0x429488, Func Offset: 0x988
	// Line 2172, Address: 0x42948c, Func Offset: 0x98c
	// Line 2173, Address: 0x4294c4, Func Offset: 0x9c4
	// Line 2172, Address: 0x4294d0, Func Offset: 0x9d0
	// Line 2173, Address: 0x4294e0, Func Offset: 0x9e0
	// Line 2174, Address: 0x429560, Func Offset: 0xa60
	// Line 2175, Address: 0x42957c, Func Offset: 0xa7c
	// Line 2176, Address: 0x4295e4, Func Offset: 0xae4
	// Line 2177, Address: 0x4295f0, Func Offset: 0xaf0
	// Line 2179, Address: 0x429650, Func Offset: 0xb50
	// Line 2183, Address: 0x4296a8, Func Offset: 0xba8
	// Line 2141, Address: 0x429700, Func Offset: 0xc00
	// Line 2183, Address: 0x429704, Func Offset: 0xc04
	// Line 2141, Address: 0x429720, Func Offset: 0xc20
	// Line 2183, Address: 0x429728, Func Offset: 0xc28
	// Line 2141, Address: 0x42975c, Func Offset: 0xc5c
	// Line 2183, Address: 0x429768, Func Offset: 0xc68
	// Line 2155, Address: 0x4297b8, Func Offset: 0xcb8
	// Line 2183, Address: 0x4297bc, Func Offset: 0xcbc
	// Line 2155, Address: 0x4297e0, Func Offset: 0xce0
	// Line 2183, Address: 0x4297e4, Func Offset: 0xce4
	// Line 2155, Address: 0x4297e8, Func Offset: 0xce8
	// Line 2183, Address: 0x4297ec, Func Offset: 0xcec
	// Line 2155, Address: 0x4297f0, Func Offset: 0xcf0
	// Line 2183, Address: 0x4297f4, Func Offset: 0xcf4
	// Line 2155, Address: 0x429830, Func Offset: 0xd30
	// Line 2183, Address: 0x429834, Func Offset: 0xd34
	// Line 2155, Address: 0x429848, Func Offset: 0xd48
	// Line 2183, Address: 0x42984c, Func Offset: 0xd4c
	// Line 2155, Address: 0x429854, Func Offset: 0xd54
	// Line 2183, Address: 0x429858, Func Offset: 0xd58
	// Line 2155, Address: 0x429888, Func Offset: 0xd88
	// Line 2183, Address: 0x429894, Func Offset: 0xd94
	// Func End, Address: 0x429910, Func Offset: 0xe10
}

// xBoxHitsObb__FPC4xBoxPC4xBoxPC7xMat4x3P7xCollis
// Start address: 0x429910
uint32 xBoxHitsObb(xBox* a, xBox* b, xMat4x3* mat, xCollis* coll)
{
	// Line 1969, Address: 0x429910, Func Offset: 0
	// Line 1980, Address: 0x42991c, Func Offset: 0xc
	// Line 1969, Address: 0x429920, Func Offset: 0x10
	// Line 1980, Address: 0x429924, Func Offset: 0x14
	// Line 2003, Address: 0x429940, Func Offset: 0x30
	// Line 2004, Address: 0x429944, Func Offset: 0x34
	// Line 2003, Address: 0x429948, Func Offset: 0x38
	// Line 2004, Address: 0x42994c, Func Offset: 0x3c
	// Line 2012, Address: 0x429954, Func Offset: 0x44
	// Line 2013, Address: 0x42995c, Func Offset: 0x4c
	// Line 2012, Address: 0x429960, Func Offset: 0x50
	// Line 2015, Address: 0x429968, Func Offset: 0x58
	// Func End, Address: 0x429978, Func Offset: 0x68
}

// Mgc_BoxBoxTest__FPC4xBoxPC7xMat4x3PC4xBoxPC7xMat4x3
// Start address: 0x429980
uint32 Mgc_BoxBoxTest(xBox* a, xMat4x3* matA, xBox* b, xMat4x3* matB)
{
	xVec3 akA[3];
	xVec3 akB[3];
	float32 afEA[3];
	float32 afEB[3];
	float32 _mag;
	float32 _mag;
	float32 _mag;
	float32 _mag;
	float32 _mag;
	float32 _mag;
	xVec3 centA;
	xVec3 centB;
	float32 fR0;
	float32 fR1;
	float32 fR01;
	// Line 1741, Address: 0x429980, Func Offset: 0
	// Line 1750, Address: 0x429988, Func Offset: 0x8
	// Line 1741, Address: 0x42998c, Func Offset: 0xc
	// Line 1750, Address: 0x429990, Func Offset: 0x10
	// Line 1741, Address: 0x429994, Func Offset: 0x14
	// Line 1751, Address: 0x4299a4, Func Offset: 0x24
	// Line 1741, Address: 0x4299a8, Func Offset: 0x28
	// Line 1749, Address: 0x4299b8, Func Offset: 0x38
	// Line 1741, Address: 0x4299bc, Func Offset: 0x3c
	// Line 1750, Address: 0x4299c0, Func Offset: 0x40
	// Line 1741, Address: 0x4299c4, Func Offset: 0x44
	// Line 1749, Address: 0x4299d4, Func Offset: 0x54
	// Line 1748, Address: 0x4299d8, Func Offset: 0x58
	// Line 1751, Address: 0x4299dc, Func Offset: 0x5c
	// Line 1749, Address: 0x4299e0, Func Offset: 0x60
	// Line 1753, Address: 0x4299e4, Func Offset: 0x64
	// Line 1750, Address: 0x4299e8, Func Offset: 0x68
	// Line 1752, Address: 0x4299ec, Func Offset: 0x6c
	// Line 1753, Address: 0x4299f0, Func Offset: 0x70
	// Line 1749, Address: 0x4299f4, Func Offset: 0x74
	// Line 1751, Address: 0x429a00, Func Offset: 0x80
	// Line 1752, Address: 0x429a04, Func Offset: 0x84
	// Line 1753, Address: 0x429a08, Func Offset: 0x88
	// Line 1741, Address: 0x429a0c, Func Offset: 0x8c
	// Line 1750, Address: 0x429a14, Func Offset: 0x94
	// Line 1751, Address: 0x429a18, Func Offset: 0x98
	// Line 1752, Address: 0x429a1c, Func Offset: 0x9c
	// Line 1753, Address: 0x429a20, Func Offset: 0xa0
	// Line 1748, Address: 0x429a28, Func Offset: 0xa8
	// Line 1751, Address: 0x429a30, Func Offset: 0xb0
	// Line 1741, Address: 0x429a34, Func Offset: 0xb4
	// Line 1754, Address: 0x429a3c, Func Offset: 0xbc
	// Line 1741, Address: 0x429a40, Func Offset: 0xc0
	// Line 1751, Address: 0x429a48, Func Offset: 0xc8
	// Line 1753, Address: 0x429a4c, Func Offset: 0xcc
	// Line 1741, Address: 0x429a54, Func Offset: 0xd4
	// Line 1752, Address: 0x429a5c, Func Offset: 0xdc
	// Line 1741, Address: 0x429a64, Func Offset: 0xe4
	// Line 1753, Address: 0x429a78, Func Offset: 0xf8
	// Line 1754, Address: 0x429a80, Func Offset: 0x100
	// Line 1753, Address: 0x429a84, Func Offset: 0x104
	// Line 1741, Address: 0x429a8c, Func Offset: 0x10c
	// Line 1754, Address: 0x429a90, Func Offset: 0x110
	// Line 1748, Address: 0x429aa0, Func Offset: 0x120
	// Line 1751, Address: 0x429aa4, Func Offset: 0x124
	// Line 1752, Address: 0x429aa8, Func Offset: 0x128
	// Line 1754, Address: 0x429aac, Func Offset: 0x12c
	// Line 1755, Address: 0x429b18, Func Offset: 0x198
	// Line 1756, Address: 0x429bbc, Func Offset: 0x23c
	// Line 1758, Address: 0x429c44, Func Offset: 0x2c4
	// Line 1761, Address: 0x429c50, Func Offset: 0x2d0
	// Line 1763, Address: 0x429c58, Func Offset: 0x2d8
	// Line 1761, Address: 0x429c5c, Func Offset: 0x2dc
	// Line 1759, Address: 0x429c60, Func Offset: 0x2e0
	// Line 1761, Address: 0x429c64, Func Offset: 0x2e4
	// Line 1764, Address: 0x429c68, Func Offset: 0x2e8
	// Line 1763, Address: 0x429c70, Func Offset: 0x2f0
	// Line 1759, Address: 0x429c74, Func Offset: 0x2f4
	// Line 1762, Address: 0x429c78, Func Offset: 0x2f8
	// Line 1758, Address: 0x429c7c, Func Offset: 0x2fc
	// Line 1764, Address: 0x429c80, Func Offset: 0x300
	// Line 1758, Address: 0x429c84, Func Offset: 0x304
	// Line 1764, Address: 0x429c88, Func Offset: 0x308
	// Line 1758, Address: 0x429c8c, Func Offset: 0x30c
	// Line 1759, Address: 0x429c90, Func Offset: 0x310
	// Line 1761, Address: 0x429c94, Func Offset: 0x314
	// Line 1762, Address: 0x429c98, Func Offset: 0x318
	// Line 1760, Address: 0x429c9c, Func Offset: 0x31c
	// Line 1761, Address: 0x429ca4, Func Offset: 0x324
	// Line 1759, Address: 0x429ca8, Func Offset: 0x328
	// Line 1760, Address: 0x429cac, Func Offset: 0x32c
	// Line 1762, Address: 0x429cb0, Func Offset: 0x330
	// Line 1761, Address: 0x429cb4, Func Offset: 0x334
	// Line 1760, Address: 0x429cb8, Func Offset: 0x338
	// Line 1762, Address: 0x429cbc, Func Offset: 0x33c
	// Line 1763, Address: 0x429cc0, Func Offset: 0x340
	// Line 1760, Address: 0x429cc4, Func Offset: 0x344
	// Line 1762, Address: 0x429cc8, Func Offset: 0x348
	// Line 1763, Address: 0x429ccc, Func Offset: 0x34c
	// Line 1759, Address: 0x429cd4, Func Offset: 0x354
	// Line 1764, Address: 0x429cd8, Func Offset: 0x358
	// Line 1762, Address: 0x429cdc, Func Offset: 0x35c
	// Line 1763, Address: 0x429ce0, Func Offset: 0x360
	// Line 1759, Address: 0x429ce4, Func Offset: 0x364
	// Line 1763, Address: 0x429ce8, Func Offset: 0x368
	// Line 1764, Address: 0x429cf0, Func Offset: 0x370
	// Line 1763, Address: 0x429cf4, Func Offset: 0x374
	// Line 1764, Address: 0x429cf8, Func Offset: 0x378
	// Line 1758, Address: 0x429cfc, Func Offset: 0x37c
	// Line 1764, Address: 0x429d00, Func Offset: 0x380
	// Line 1761, Address: 0x429d10, Func Offset: 0x390
	// Line 1762, Address: 0x429d14, Func Offset: 0x394
	// Line 1764, Address: 0x429d18, Func Offset: 0x398
	// Line 1765, Address: 0x429d84, Func Offset: 0x404
	// Line 1766, Address: 0x429e20, Func Offset: 0x4a0
	// Line 1765, Address: 0x429e40, Func Offset: 0x4c0
	// Line 1766, Address: 0x429e48, Func Offset: 0x4c8
	// Line 1769, Address: 0x429eb4, Func Offset: 0x534
	// Line 1775, Address: 0x429ebc, Func Offset: 0x53c
	// Line 1770, Address: 0x429ec4, Func Offset: 0x544
	// Line 1769, Address: 0x429ec8, Func Offset: 0x548
	// Line 1770, Address: 0x429ed0, Func Offset: 0x550
	// Line 1772, Address: 0x429ed4, Func Offset: 0x554
	// Line 1771, Address: 0x429edc, Func Offset: 0x55c
	// Line 1773, Address: 0x429ee4, Func Offset: 0x564
	// Line 1770, Address: 0x429ee8, Func Offset: 0x568
	// Line 1772, Address: 0x429eec, Func Offset: 0x56c
	// Line 1770, Address: 0x429ef0, Func Offset: 0x570
	// Line 1771, Address: 0x429efc, Func Offset: 0x57c
	// Line 1772, Address: 0x429f0c, Func Offset: 0x58c
	// Line 1773, Address: 0x429f10, Func Offset: 0x590
	// Line 1772, Address: 0x429f14, Func Offset: 0x594
	// Line 1773, Address: 0x429f18, Func Offset: 0x598
	// Line 1774, Address: 0x429f1c, Func Offset: 0x59c
	// Line 1773, Address: 0x429f24, Func Offset: 0x5a4
	// Line 1774, Address: 0x429f28, Func Offset: 0x5a8
	// Line 1773, Address: 0x429f2c, Func Offset: 0x5ac
	// Line 1774, Address: 0x429f34, Func Offset: 0x5b4
	// Line 1775, Address: 0x429f40, Func Offset: 0x5c0
	// Line 1776, Address: 0x429f90, Func Offset: 0x610
	// Line 1781, Address: 0x429fe4, Func Offset: 0x664
	// Line 1782, Address: 0x429fec, Func Offset: 0x66c
	// Line 1781, Address: 0x42a000, Func Offset: 0x680
	// Line 1791, Address: 0x42a008, Func Offset: 0x688
	// Line 1782, Address: 0x42a01c, Func Offset: 0x69c
	// Line 1792, Address: 0x42a024, Func Offset: 0x6a4
	// Line 1781, Address: 0x42a02c, Func Offset: 0x6ac
	// Line 1782, Address: 0x42a030, Func Offset: 0x6b0
	// Line 1780, Address: 0x42a038, Func Offset: 0x6b8
	// Line 1798, Address: 0x42a040, Func Offset: 0x6c0
	// Line 1782, Address: 0x42a04c, Func Offset: 0x6cc
	// Line 1792, Address: 0x42a050, Func Offset: 0x6d0
	// Line 1782, Address: 0x42a058, Func Offset: 0x6d8
	// Line 1780, Address: 0x42a05c, Func Offset: 0x6dc
	// Line 1792, Address: 0x42a060, Func Offset: 0x6e0
	// Line 1791, Address: 0x42a064, Func Offset: 0x6e4
	// Line 1792, Address: 0x42a068, Func Offset: 0x6e8
	// Line 1791, Address: 0x42a06c, Func Offset: 0x6ec
	// Line 1792, Address: 0x42a070, Func Offset: 0x6f0
	// Line 1793, Address: 0x42a07c, Func Offset: 0x6fc
	// Line 1799, Address: 0x42a088, Func Offset: 0x708
	// Line 1791, Address: 0x42a08c, Func Offset: 0x70c
	// Line 1793, Address: 0x42a090, Func Offset: 0x710
	// Line 1795, Address: 0x42a098, Func Offset: 0x718
	// Line 1794, Address: 0x42a09c, Func Offset: 0x71c
	// Line 1798, Address: 0x42a0a8, Func Offset: 0x728
	// Line 1795, Address: 0x42a0ac, Func Offset: 0x72c
	// Line 1796, Address: 0x42a0b0, Func Offset: 0x730
	// Line 1797, Address: 0x42a0b8, Func Offset: 0x738
	// Line 1799, Address: 0x42a0bc, Func Offset: 0x73c
	// Line 1797, Address: 0x42a0c4, Func Offset: 0x744
	// Line 1799, Address: 0x42a0c8, Func Offset: 0x748
	// Line 1800, Address: 0x42a0cc, Func Offset: 0x74c
	// Line 1801, Address: 0x42a0d0, Func Offset: 0x750
	// Line 1802, Address: 0x42a0dc, Func Offset: 0x75c
	// Line 1813, Address: 0x42a0f0, Func Offset: 0x770
	// Line 1805, Address: 0x42a0f4, Func Offset: 0x774
	// Line 1806, Address: 0x42a10c, Func Offset: 0x78c
	// Line 1807, Address: 0x42a124, Func Offset: 0x7a4
	// Line 1808, Address: 0x42a138, Func Offset: 0x7b8
	// Line 1807, Address: 0x42a13c, Func Offset: 0x7bc
	// Line 1808, Address: 0x42a140, Func Offset: 0x7c0
	// Line 1809, Address: 0x42a150, Func Offset: 0x7d0
	// Line 1807, Address: 0x42a154, Func Offset: 0x7d4
	// Line 1812, Address: 0x42a158, Func Offset: 0x7d8
	// Line 1809, Address: 0x42a15c, Func Offset: 0x7dc
	// Line 1810, Address: 0x42a160, Func Offset: 0x7e0
	// Line 1813, Address: 0x42a168, Func Offset: 0x7e8
	// Line 1811, Address: 0x42a16c, Func Offset: 0x7ec
	// Line 1813, Address: 0x42a170, Func Offset: 0x7f0
	// Line 1811, Address: 0x42a17c, Func Offset: 0x7fc
	// Line 1813, Address: 0x42a180, Func Offset: 0x800
	// Line 1814, Address: 0x42a184, Func Offset: 0x804
	// Line 1815, Address: 0x42a188, Func Offset: 0x808
	// Line 1816, Address: 0x42a194, Func Offset: 0x814
	// Line 1827, Address: 0x42a1a8, Func Offset: 0x828
	// Line 1819, Address: 0x42a1ac, Func Offset: 0x82c
	// Line 1820, Address: 0x42a1c4, Func Offset: 0x844
	// Line 1821, Address: 0x42a1dc, Func Offset: 0x85c
	// Line 1822, Address: 0x42a1e4, Func Offset: 0x864
	// Line 1821, Address: 0x42a1e8, Func Offset: 0x868
	// Line 1822, Address: 0x42a1f8, Func Offset: 0x878
	// Line 1823, Address: 0x42a204, Func Offset: 0x884
	// Line 1822, Address: 0x42a208, Func Offset: 0x888
	// Line 1826, Address: 0x42a20c, Func Offset: 0x88c
	// Line 1821, Address: 0x42a214, Func Offset: 0x894
	// Line 1829, Address: 0x42a218, Func Offset: 0x898
	// Line 1823, Address: 0x42a21c, Func Offset: 0x89c
	// Line 1824, Address: 0x42a220, Func Offset: 0x8a0
	// Line 1827, Address: 0x42a228, Func Offset: 0x8a8
	// Line 1825, Address: 0x42a22c, Func Offset: 0x8ac
	// Line 1827, Address: 0x42a230, Func Offset: 0x8b0
	// Line 1825, Address: 0x42a244, Func Offset: 0x8c4
	// Line 1827, Address: 0x42a248, Func Offset: 0x8c8
	// Line 1828, Address: 0x42a250, Func Offset: 0x8d0
	// Line 1829, Address: 0x42a254, Func Offset: 0x8d4
	// Line 1830, Address: 0x42a260, Func Offset: 0x8e0
	// Line 1833, Address: 0x42a268, Func Offset: 0x8e8
	// Line 1834, Address: 0x42a280, Func Offset: 0x900
	// Line 1835, Address: 0x42a294, Func Offset: 0x914
	// Line 1836, Address: 0x42a298, Func Offset: 0x918
	// Line 1837, Address: 0x42a2a4, Func Offset: 0x924
	// Line 1840, Address: 0x42a2ac, Func Offset: 0x92c
	// Line 1841, Address: 0x42a2c4, Func Offset: 0x944
	// Line 1842, Address: 0x42a2d8, Func Offset: 0x958
	// Line 1843, Address: 0x42a2dc, Func Offset: 0x95c
	// Line 1844, Address: 0x42a2e8, Func Offset: 0x968
	// Line 1847, Address: 0x42a2f0, Func Offset: 0x970
	// Line 1848, Address: 0x42a30c, Func Offset: 0x98c
	// Line 1849, Address: 0x42a320, Func Offset: 0x9a0
	// Line 1850, Address: 0x42a324, Func Offset: 0x9a4
	// Line 1851, Address: 0x42a330, Func Offset: 0x9b0
	// Line 1854, Address: 0x42a338, Func Offset: 0x9b8
	// Line 1855, Address: 0x42a350, Func Offset: 0x9d0
	// Line 1856, Address: 0x42a358, Func Offset: 0x9d8
	// Line 1855, Address: 0x42a35c, Func Offset: 0x9dc
	// Line 1856, Address: 0x42a360, Func Offset: 0x9e0
	// Line 1857, Address: 0x42a368, Func Offset: 0x9e8
	// Line 1858, Address: 0x42a36c, Func Offset: 0x9ec
	// Line 1859, Address: 0x42a378, Func Offset: 0x9f8
	// Line 1862, Address: 0x42a380, Func Offset: 0xa00
	// Line 1863, Address: 0x42a398, Func Offset: 0xa18
	// Line 1864, Address: 0x42a3a0, Func Offset: 0xa20
	// Line 1863, Address: 0x42a3a4, Func Offset: 0xa24
	// Line 1864, Address: 0x42a3a8, Func Offset: 0xa28
	// Line 1865, Address: 0x42a3b0, Func Offset: 0xa30
	// Line 1866, Address: 0x42a3b4, Func Offset: 0xa34
	// Line 1867, Address: 0x42a3c0, Func Offset: 0xa40
	// Line 1870, Address: 0x42a3c8, Func Offset: 0xa48
	// Line 1871, Address: 0x42a3e0, Func Offset: 0xa60
	// Line 1872, Address: 0x42a3e8, Func Offset: 0xa68
	// Line 1871, Address: 0x42a3ec, Func Offset: 0xa6c
	// Line 1872, Address: 0x42a3f0, Func Offset: 0xa70
	// Line 1873, Address: 0x42a3f8, Func Offset: 0xa78
	// Line 1874, Address: 0x42a3fc, Func Offset: 0xa7c
	// Line 1875, Address: 0x42a408, Func Offset: 0xa88
	// Line 1878, Address: 0x42a410, Func Offset: 0xa90
	// Line 1879, Address: 0x42a428, Func Offset: 0xaa8
	// Line 1880, Address: 0x42a430, Func Offset: 0xab0
	// Line 1879, Address: 0x42a434, Func Offset: 0xab4
	// Line 1880, Address: 0x42a438, Func Offset: 0xab8
	// Line 1881, Address: 0x42a440, Func Offset: 0xac0
	// Line 1882, Address: 0x42a444, Func Offset: 0xac4
	// Line 1883, Address: 0x42a450, Func Offset: 0xad0
	// Line 1886, Address: 0x42a458, Func Offset: 0xad8
	// Line 1887, Address: 0x42a470, Func Offset: 0xaf0
	// Line 1888, Address: 0x42a478, Func Offset: 0xaf8
	// Line 1887, Address: 0x42a47c, Func Offset: 0xafc
	// Line 1888, Address: 0x42a480, Func Offset: 0xb00
	// Line 1889, Address: 0x42a488, Func Offset: 0xb08
	// Line 1890, Address: 0x42a48c, Func Offset: 0xb0c
	// Line 1891, Address: 0x42a498, Func Offset: 0xb18
	// Line 1894, Address: 0x42a4a0, Func Offset: 0xb20
	// Line 1895, Address: 0x42a4a4, Func Offset: 0xb24
	// Line 1894, Address: 0x42a4a8, Func Offset: 0xb28
	// Line 1895, Address: 0x42a4b8, Func Offset: 0xb38
	// Line 1896, Address: 0x42a4bc, Func Offset: 0xb3c
	// Line 1894, Address: 0x42a4c0, Func Offset: 0xb40
	// Line 1895, Address: 0x42a4c4, Func Offset: 0xb44
	// Line 1896, Address: 0x42a4c8, Func Offset: 0xb48
	// Line 1897, Address: 0x42a4d0, Func Offset: 0xb50
	// Line 1898, Address: 0x42a4d4, Func Offset: 0xb54
	// Line 1899, Address: 0x42a4e0, Func Offset: 0xb60
	// Line 1902, Address: 0x42a4e8, Func Offset: 0xb68
	// Line 1903, Address: 0x42a4ec, Func Offset: 0xb6c
	// Line 1902, Address: 0x42a4f0, Func Offset: 0xb70
	// Line 1903, Address: 0x42a500, Func Offset: 0xb80
	// Line 1904, Address: 0x42a508, Func Offset: 0xb88
	// Line 1905, Address: 0x42a514, Func Offset: 0xb94
	// Line 1902, Address: 0x42a518, Func Offset: 0xb98
	// Line 1906, Address: 0x42a51c, Func Offset: 0xb9c
	// Line 1907, Address: 0x42a528, Func Offset: 0xba8
	// Line 1910, Address: 0x42a530, Func Offset: 0xbb0
	// Line 1911, Address: 0x42a548, Func Offset: 0xbc8
	// Line 1912, Address: 0x42a554, Func Offset: 0xbd4
	// Line 1913, Address: 0x42a560, Func Offset: 0xbe0
	// Line 1914, Address: 0x42a564, Func Offset: 0xbe4
	// Line 1915, Address: 0x42a570, Func Offset: 0xbf0
	// Line 1918, Address: 0x42a578, Func Offset: 0xbf8
	// Line 1919, Address: 0x42a57c, Func Offset: 0xbfc
	// Line 1918, Address: 0x42a580, Func Offset: 0xc00
	// Line 1920, Address: 0x42a58c, Func Offset: 0xc0c
	// Line 1918, Address: 0x42a590, Func Offset: 0xc10
	// Line 1919, Address: 0x42a594, Func Offset: 0xc14
	// Line 1920, Address: 0x42a59c, Func Offset: 0xc1c
	// Line 1921, Address: 0x42a5a4, Func Offset: 0xc24
	// Line 1918, Address: 0x42a5a8, Func Offset: 0xc28
	// Line 1923, Address: 0x42a5ac, Func Offset: 0xc2c
	// Line 1926, Address: 0x42a5c4, Func Offset: 0xc44
	// Func End, Address: 0x42a620, Func Offset: 0xca0
}

// xBoxHitsSphere__FPC4xBoxPC7xSphereP7xCollis
// Start address: 0x42a620
uint32 xBoxHitsSphere(xBox* a, xSphere* b, xCollis* coll)
{
	xIsect isx;
	float32 scale;
	// Line 1688, Address: 0x42a620, Func Offset: 0
	// Line 1694, Address: 0x42a630, Func Offset: 0x10
	// Line 1696, Address: 0x42a63c, Func Offset: 0x1c
	// Line 1701, Address: 0x42a654, Func Offset: 0x34
	// Line 1706, Address: 0x42a668, Func Offset: 0x48
	// Line 1708, Address: 0x42a670, Func Offset: 0x50
	// Line 1711, Address: 0x42a680, Func Offset: 0x60
	// Line 1712, Address: 0x42a694, Func Offset: 0x74
	// Line 1716, Address: 0x42a6a8, Func Offset: 0x88
	// Line 1717, Address: 0x42a6ac, Func Offset: 0x8c
	// Line 1716, Address: 0x42a6b0, Func Offset: 0x90
	// Line 1717, Address: 0x42a6b4, Func Offset: 0x94
	// Line 1720, Address: 0x42a6d4, Func Offset: 0xb4
	// Line 1723, Address: 0x42a6e4, Func Offset: 0xc4
	// Line 1727, Address: 0x42a6f4, Func Offset: 0xd4
	// Line 1728, Address: 0x42a6f8, Func Offset: 0xd8
	// Line 1727, Address: 0x42a6fc, Func Offset: 0xdc
	// Line 1728, Address: 0x42a700, Func Offset: 0xe0
	// Line 1697, Address: 0x42a70c, Func Offset: 0xec
	// Line 1698, Address: 0x42a710, Func Offset: 0xf0
	// Line 1697, Address: 0x42a714, Func Offset: 0xf4
	// Line 1698, Address: 0x42a718, Func Offset: 0xf8
	// Line 1728, Address: 0x42a720, Func Offset: 0x100
	// Line 1702, Address: 0x42a724, Func Offset: 0x104
	// Line 1728, Address: 0x42a730, Func Offset: 0x110
	// Line 1714, Address: 0x42a768, Func Offset: 0x148
	// Line 1728, Address: 0x42a770, Func Offset: 0x150
	// Line 1724, Address: 0x42a784, Func Offset: 0x164
	// Line 1728, Address: 0x42a788, Func Offset: 0x168
	// Line 1724, Address: 0x42a790, Func Offset: 0x170
	// Line 1728, Address: 0x42a794, Func Offset: 0x174
	// Line 1724, Address: 0x42a79c, Func Offset: 0x17c
	// Line 1729, Address: 0x42a7a8, Func Offset: 0x188
	// Func End, Address: 0x42a7b8, Func Offset: 0x198
}

// xParabolaHitsEnv__FP9xParabolaPC4xEnvP7xCollis
// Start address: 0x42a7c0
int32 xParabolaHitsEnv(xParabola* p, xEnv* env, xCollis* colls)
{
	RwBBox xb;
	float32 extremumT;
	float32 extremum;
	ParabolaCBData data;
	int32 i;
	// Line 1027, Address: 0x42a7c0, Func Offset: 0
	// Line 1028, Address: 0x42a7e0, Func Offset: 0x20
	// Line 1031, Address: 0x42a7f4, Func Offset: 0x34
	// Line 1030, Address: 0x42a7f8, Func Offset: 0x38
	// Line 1031, Address: 0x42a7fc, Func Offset: 0x3c
	// Line 1037, Address: 0x42a804, Func Offset: 0x44
	// Line 1031, Address: 0x42a80c, Func Offset: 0x4c
	// Line 1037, Address: 0x42a810, Func Offset: 0x50
	// Line 1038, Address: 0x42a824, Func Offset: 0x64
	// Line 1039, Address: 0x42a83c, Func Offset: 0x7c
	// Line 1045, Address: 0x42a848, Func Offset: 0x88
	// Line 1039, Address: 0x42a84c, Func Offset: 0x8c
	// Line 1045, Address: 0x42a850, Func Offset: 0x90
	// Line 1046, Address: 0x42a870, Func Offset: 0xb0
	// Line 1047, Address: 0x42a888, Func Offset: 0xc8
	// Line 1052, Address: 0x42a894, Func Offset: 0xd4
	// Line 1053, Address: 0x42a898, Func Offset: 0xd8
	// Line 1052, Address: 0x42a89c, Func Offset: 0xdc
	// Line 1047, Address: 0x42a8a0, Func Offset: 0xe0
	// Line 1052, Address: 0x42a8a4, Func Offset: 0xe4
	// Line 1053, Address: 0x42a8a8, Func Offset: 0xe8
	// Line 1052, Address: 0x42a8ac, Func Offset: 0xec
	// Line 1053, Address: 0x42a8b0, Func Offset: 0xf0
	// Line 1052, Address: 0x42a8b8, Func Offset: 0xf8
	// Line 1053, Address: 0x42a8c4, Func Offset: 0x104
	// Line 1052, Address: 0x42a8cc, Func Offset: 0x10c
	// Line 1053, Address: 0x42a8d0, Func Offset: 0x110
	// Line 1054, Address: 0x42a8e4, Func Offset: 0x124
	// Line 1055, Address: 0x42a8f0, Func Offset: 0x130
	// Line 1054, Address: 0x42a8f4, Func Offset: 0x134
	// Line 1055, Address: 0x42a900, Func Offset: 0x140
	// Line 1054, Address: 0x42a908, Func Offset: 0x148
	// Line 1055, Address: 0x42a90c, Func Offset: 0x14c
	// Line 1056, Address: 0x42a91c, Func Offset: 0x15c
	// Line 1062, Address: 0x42a92c, Func Offset: 0x16c
	// Line 1064, Address: 0x42a964, Func Offset: 0x1a4
	// Line 1063, Address: 0x42a968, Func Offset: 0x1a8
	// Line 1064, Address: 0x42a974, Func Offset: 0x1b4
	// Line 1065, Address: 0x42a990, Func Offset: 0x1d0
	// Line 1067, Address: 0x42a9ac, Func Offset: 0x1ec
	// Line 1065, Address: 0x42a9b0, Func Offset: 0x1f0
	// Line 1067, Address: 0x42a9b8, Func Offset: 0x1f8
	// Line 1069, Address: 0x42a9c4, Func Offset: 0x204
	// Line 1070, Address: 0x42a9d4, Func Offset: 0x214
	// Line 1076, Address: 0x42a9d8, Func Offset: 0x218
	// Line 1082, Address: 0x42a9dc, Func Offset: 0x21c
	// Line 1079, Address: 0x42a9e0, Func Offset: 0x220
	// Line 1082, Address: 0x42a9e4, Func Offset: 0x224
	// Line 1076, Address: 0x42a9e8, Func Offset: 0x228
	// Line 1080, Address: 0x42a9ec, Func Offset: 0x22c
	// Line 1082, Address: 0x42a9f0, Func Offset: 0x230
	// Line 1080, Address: 0x42a9f4, Func Offset: 0x234
	// Line 1079, Address: 0x42a9f8, Func Offset: 0x238
	// Line 1080, Address: 0x42a9fc, Func Offset: 0x23c
	// Line 1079, Address: 0x42aa00, Func Offset: 0x240
	// Line 1081, Address: 0x42aa04, Func Offset: 0x244
	// Line 1082, Address: 0x42aa0c, Func Offset: 0x24c
	// Line 1087, Address: 0x42aa4c, Func Offset: 0x28c
	// Line 1086, Address: 0x42aa50, Func Offset: 0x290
	// Line 1090, Address: 0x42aa54, Func Offset: 0x294
	// Line 1094, Address: 0x42aa58, Func Offset: 0x298
	// Line 1090, Address: 0x42aa5c, Func Offset: 0x29c
	// Line 1092, Address: 0x42aa7c, Func Offset: 0x2bc
	// Line 1090, Address: 0x42aa80, Func Offset: 0x2c0
	// Line 1094, Address: 0x42aa88, Func Offset: 0x2c8
	// Line 1108, Address: 0x42aa98, Func Offset: 0x2d8
	// Line 1028, Address: 0x42aaa8, Func Offset: 0x2e8
	// Line 1108, Address: 0x42aab0, Func Offset: 0x2f0
	// Line 1069, Address: 0x42aad4, Func Offset: 0x314
	// Line 1108, Address: 0x42aae0, Func Offset: 0x320
	// Line 1099, Address: 0x42ab20, Func Offset: 0x360
	// Line 1108, Address: 0x42ab24, Func Offset: 0x364
	// Line 1105, Address: 0x42ab2c, Func Offset: 0x36c
	// Line 1108, Address: 0x42ab30, Func Offset: 0x370
	// Line 1112, Address: 0x42ab78, Func Offset: 0x3b8
	// Func End, Address: 0x42ab98, Func Offset: 0x3d8
}

// xParabolaEnvCB__FP21xClumpCollBSPTrianglePv
// Start address: 0x42aba0
int32 xParabolaEnvCB(xClumpCollBSPTriangle* triangles, void* data)
{
	ParabolaCBData* pd;
	xParabola* p;
	xCollis* colls;
	xVec3* v0;
	xVec3* v1;
	xVec3* v2;
	uint8 tester;
	float32 a;
	float32 b;
	float32 c;
	float32 det;
	xVec3 N;
	float32 t1;
	float32 t2;
	float32 c1;
	float32 c2;
	float32 c0;
	// Line 884, Address: 0x42aba0, Func Offset: 0
	// Line 890, Address: 0x42abb0, Func Offset: 0x10
	// Line 884, Address: 0x42abb4, Func Offset: 0x14
	// Line 890, Address: 0x42abb8, Func Offset: 0x18
	// Line 884, Address: 0x42abbc, Func Offset: 0x1c
	// Line 889, Address: 0x42abf4, Func Offset: 0x54
	// Line 890, Address: 0x42abf8, Func Offset: 0x58
	// Line 896, Address: 0x42ac00, Func Offset: 0x60
	// Line 900, Address: 0x42ac30, Func Offset: 0x90
	// Line 901, Address: 0x42ac3c, Func Offset: 0x9c
	// Line 903, Address: 0x42ac40, Func Offset: 0xa0
	// Line 904, Address: 0x42ac48, Func Offset: 0xa8
	// Line 905, Address: 0x42ac4c, Func Offset: 0xac
	// Line 911, Address: 0x42ac50, Func Offset: 0xb0
	// Line 912, Address: 0x42ac6c, Func Offset: 0xcc
	// Line 913, Address: 0x42ac98, Func Offset: 0xf8
	// Line 914, Address: 0x42acac, Func Offset: 0x10c
	// Line 915, Address: 0x42acd8, Func Offset: 0x138
	// Line 916, Address: 0x42acec, Func Offset: 0x14c
	// Line 917, Address: 0x42ad18, Func Offset: 0x178
	// Line 921, Address: 0x42ad24, Func Offset: 0x184
	// Line 930, Address: 0x42ad3c, Func Offset: 0x19c
	// Line 939, Address: 0x42ad40, Func Offset: 0x1a0
	// Line 937, Address: 0x42ad48, Func Offset: 0x1a8
	// Line 930, Address: 0x42ad50, Func Offset: 0x1b0
	// Line 936, Address: 0x42ad54, Func Offset: 0x1b4
	// Line 938, Address: 0x42ad58, Func Offset: 0x1b8
	// Line 937, Address: 0x42ad60, Func Offset: 0x1c0
	// Line 936, Address: 0x42ad64, Func Offset: 0x1c4
	// Line 938, Address: 0x42ad68, Func Offset: 0x1c8
	// Line 939, Address: 0x42ad84, Func Offset: 0x1e4
	// Line 942, Address: 0x42ada4, Func Offset: 0x204
	// Line 939, Address: 0x42ada8, Func Offset: 0x208
	// Line 943, Address: 0x42adac, Func Offset: 0x20c
	// Line 942, Address: 0x42adb0, Func Offset: 0x210
	// Line 946, Address: 0x42adb4, Func Offset: 0x214
	// Line 952, Address: 0x42adb8, Func Offset: 0x218
	// Line 942, Address: 0x42adbc, Func Offset: 0x21c
	// Line 952, Address: 0x42adc0, Func Offset: 0x220
	// Line 942, Address: 0x42adc4, Func Offset: 0x224
	// Line 943, Address: 0x42adc8, Func Offset: 0x228
	// Line 942, Address: 0x42adcc, Func Offset: 0x22c
	// Line 943, Address: 0x42add4, Func Offset: 0x234
	// Line 942, Address: 0x42addc, Func Offset: 0x23c
	// Line 943, Address: 0x42ade0, Func Offset: 0x240
	// Line 946, Address: 0x42ade4, Func Offset: 0x244
	// Line 943, Address: 0x42adec, Func Offset: 0x24c
	// Line 946, Address: 0x42adf8, Func Offset: 0x258
	// Line 952, Address: 0x42ae00, Func Offset: 0x260
	// Line 943, Address: 0x42ae04, Func Offset: 0x264
	// Line 946, Address: 0x42ae08, Func Offset: 0x268
	// Line 943, Address: 0x42ae18, Func Offset: 0x278
	// Line 946, Address: 0x42ae20, Func Offset: 0x280
	// Line 952, Address: 0x42ae38, Func Offset: 0x298
	// Line 946, Address: 0x42ae3c, Func Offset: 0x29c
	// Line 952, Address: 0x42ae44, Func Offset: 0x2a4
	// Line 954, Address: 0x42ae68, Func Offset: 0x2c8
	// Line 955, Address: 0x42ae80, Func Offset: 0x2e0
	// Line 957, Address: 0x42ae90, Func Offset: 0x2f0
	// Line 958, Address: 0x42ae98, Func Offset: 0x2f8
	// Line 959, Address: 0x42aeb4, Func Offset: 0x314
	// Line 962, Address: 0x42aec0, Func Offset: 0x320
	// Line 963, Address: 0x42aecc, Func Offset: 0x32c
	// Line 966, Address: 0x42aed8, Func Offset: 0x338
	// Line 971, Address: 0x42aedc, Func Offset: 0x33c
	// Line 966, Address: 0x42aee0, Func Offset: 0x340
	// Line 967, Address: 0x42aee8, Func Offset: 0x348
	// Line 968, Address: 0x42aef4, Func Offset: 0x354
	// Line 971, Address: 0x42aefc, Func Offset: 0x35c
	// Line 966, Address: 0x42af00, Func Offset: 0x360
	// Line 971, Address: 0x42af04, Func Offset: 0x364
	// Line 976, Address: 0x42af30, Func Offset: 0x390
	// Line 974, Address: 0x42af34, Func Offset: 0x394
	// Line 976, Address: 0x42af38, Func Offset: 0x398
	// Line 985, Address: 0x42af3c, Func Offset: 0x39c
	// Line 975, Address: 0x42af40, Func Offset: 0x3a0
	// Line 974, Address: 0x42af48, Func Offset: 0x3a8
	// Line 975, Address: 0x42af4c, Func Offset: 0x3ac
	// Line 974, Address: 0x42af50, Func Offset: 0x3b0
	// Line 975, Address: 0x42af54, Func Offset: 0x3b4
	// Line 978, Address: 0x42af5c, Func Offset: 0x3bc
	// Line 975, Address: 0x42af60, Func Offset: 0x3c0
	// Line 976, Address: 0x42af70, Func Offset: 0x3d0
	// Line 978, Address: 0x42af74, Func Offset: 0x3d4
	// Line 976, Address: 0x42af78, Func Offset: 0x3d8
	// Line 978, Address: 0x42af80, Func Offset: 0x3e0
	// Line 979, Address: 0x42af84, Func Offset: 0x3e4
	// Line 980, Address: 0x42af8c, Func Offset: 0x3ec
	// Line 979, Address: 0x42af90, Func Offset: 0x3f0
	// Line 980, Address: 0x42af9c, Func Offset: 0x3fc
	// Line 983, Address: 0x42afb4, Func Offset: 0x414
	// Line 984, Address: 0x42afc8, Func Offset: 0x428
	// Line 985, Address: 0x42afd8, Func Offset: 0x438
	// Line 987, Address: 0x42afdc, Func Offset: 0x43c
	// Line 985, Address: 0x42afe0, Func Offset: 0x440
	// Line 987, Address: 0x42afe4, Func Offset: 0x444
	// Line 988, Address: 0x42b004, Func Offset: 0x464
	// Line 989, Address: 0x42b010, Func Offset: 0x470
	// Line 990, Address: 0x42b018, Func Offset: 0x478
	// Line 992, Address: 0x42b034, Func Offset: 0x494
	// Line 993, Address: 0x42b038, Func Offset: 0x498
	// Line 996, Address: 0x42b06c, Func Offset: 0x4cc
	// Line 998, Address: 0x42b070, Func Offset: 0x4d0
	// Line 997, Address: 0x42b074, Func Offset: 0x4d4
	// Line 998, Address: 0x42b078, Func Offset: 0x4d8
	// Line 997, Address: 0x42b07c, Func Offset: 0x4dc
	// Line 1007, Address: 0x42b080, Func Offset: 0x4e0
	// Line 996, Address: 0x42b084, Func Offset: 0x4e4
	// Line 997, Address: 0x42b088, Func Offset: 0x4e8
	// Line 998, Address: 0x42b08c, Func Offset: 0x4ec
	// Line 997, Address: 0x42b090, Func Offset: 0x4f0
	// Line 996, Address: 0x42b098, Func Offset: 0x4f8
	// Line 997, Address: 0x42b09c, Func Offset: 0x4fc
	// Line 998, Address: 0x42b0a4, Func Offset: 0x504
	// Line 997, Address: 0x42b0ac, Func Offset: 0x50c
	// Line 998, Address: 0x42b0b8, Func Offset: 0x518
	// Line 1000, Address: 0x42b0c0, Func Offset: 0x520
	// Line 1007, Address: 0x42b0cc, Func Offset: 0x52c
	// Line 1000, Address: 0x42b0d0, Func Offset: 0x530
	// Line 1001, Address: 0x42b0d8, Func Offset: 0x538
	// Line 1000, Address: 0x42b0dc, Func Offset: 0x53c
	// Line 1001, Address: 0x42b0e0, Func Offset: 0x540
	// Line 1002, Address: 0x42b0e8, Func Offset: 0x548
	// Line 1005, Address: 0x42b0fc, Func Offset: 0x55c
	// Line 1006, Address: 0x42b104, Func Offset: 0x564
	// Line 1005, Address: 0x42b108, Func Offset: 0x568
	// Line 1006, Address: 0x42b10c, Func Offset: 0x56c
	// Line 1007, Address: 0x42b114, Func Offset: 0x574
	// Line 1009, Address: 0x42b118, Func Offset: 0x578
	// Line 1010, Address: 0x42b13c, Func Offset: 0x59c
	// Line 1011, Address: 0x42b148, Func Offset: 0x5a8
	// Line 1012, Address: 0x42b150, Func Offset: 0x5b0
	// Line 1017, Address: 0x42b16c, Func Offset: 0x5cc
	// Line 1020, Address: 0x42b170, Func Offset: 0x5d0
	// Line 1021, Address: 0x42b174, Func Offset: 0x5d4
	// Line 1023, Address: 0x42b184, Func Offset: 0x5e4
	// Line 960, Address: 0x42b1b0, Func Offset: 0x610
	// Line 961, Address: 0x42b1b8, Func Offset: 0x618
	// Line 960, Address: 0x42b1bc, Func Offset: 0x61c
	// Line 961, Address: 0x42b1c8, Func Offset: 0x628
	// Line 962, Address: 0x42b1d4, Func Offset: 0x634
	// Line 1024, Address: 0x42b1e0, Func Offset: 0x640
	// Func End, Address: 0x42b228, Func Offset: 0x688
}

// xParabolaRecenter__FP9xParabolaf
// Start address: 0x42b230
void xParabolaRecenter(xParabola* p, float32 newZeroT)
{
	// Line 868, Address: 0x42b230, Func Offset: 0
	// Line 870, Address: 0x42b280, Func Offset: 0x50
	// Line 869, Address: 0x42b288, Func Offset: 0x58
	// Line 870, Address: 0x42b28c, Func Offset: 0x5c
	// Line 871, Address: 0x42b290, Func Offset: 0x60
	// Line 869, Address: 0x42b294, Func Offset: 0x64
	// Line 871, Address: 0x42b298, Func Offset: 0x68
	// Line 872, Address: 0x42b2a0, Func Offset: 0x70
	// Line 873, Address: 0x42b2ac, Func Offset: 0x7c
	// Line 874, Address: 0x42b2b4, Func Offset: 0x84
	// Func End, Address: 0x42b2bc, Func Offset: 0x8c
}

// xSphereHitsModel__FPC7xSpherePC14xModelInstanceP7xCollis
// Start address: 0x42b2c0
uint32 xSphereHitsModel(xSphere* b, xModelInstance* m, xCollis* coll)
{
	RpIntersection isx;
	xSphereHitsModel_context context;
	xMat4x3* mat;
	RwFrame* frame;
	float32 mscale;
	// Line 768, Address: 0x42b2c0, Func Offset: 0
	// Line 771, Address: 0x42b2c4, Func Offset: 0x4
	// Line 768, Address: 0x42b2c8, Func Offset: 0x8
	// Line 777, Address: 0x42b2ec, Func Offset: 0x2c
	// Line 768, Address: 0x42b2f0, Func Offset: 0x30
	// Line 777, Address: 0x42b2f4, Func Offset: 0x34
	// Line 779, Address: 0x42b334, Func Offset: 0x74
	// Line 783, Address: 0x42b338, Func Offset: 0x78
	// Line 779, Address: 0x42b33c, Func Offset: 0x7c
	// Line 780, Address: 0x42b340, Func Offset: 0x80
	// Line 783, Address: 0x42b348, Func Offset: 0x88
	// Line 780, Address: 0x42b34c, Func Offset: 0x8c
	// Line 786, Address: 0x42b350, Func Offset: 0x90
	// Line 780, Address: 0x42b354, Func Offset: 0x94
	// Line 783, Address: 0x42b368, Func Offset: 0xa8
	// Line 786, Address: 0x42b36c, Func Offset: 0xac
	// Line 788, Address: 0x42b378, Func Offset: 0xb8
	// Line 786, Address: 0x42b37c, Func Offset: 0xbc
	// Line 793, Address: 0x42b380, Func Offset: 0xc0
	// Line 786, Address: 0x42b384, Func Offset: 0xc4
	// Line 793, Address: 0x42b388, Func Offset: 0xc8
	// Line 788, Address: 0x42b3b8, Func Offset: 0xf8
	// Line 793, Address: 0x42b3bc, Func Offset: 0xfc
	// Line 794, Address: 0x42b3d8, Func Offset: 0x118
	// Line 797, Address: 0x42b3dc, Func Offset: 0x11c
	// Line 796, Address: 0x42b3e0, Func Offset: 0x120
	// Line 797, Address: 0x42b3e4, Func Offset: 0x124
	// Line 794, Address: 0x42b3e8, Func Offset: 0x128
	// Line 796, Address: 0x42b3f0, Func Offset: 0x130
	// Line 797, Address: 0x42b3fc, Func Offset: 0x13c
	// Line 799, Address: 0x42b400, Func Offset: 0x140
	// Line 800, Address: 0x42b410, Func Offset: 0x150
	// Line 802, Address: 0x42b414, Func Offset: 0x154
	// Line 804, Address: 0x42b430, Func Offset: 0x170
	// Line 805, Address: 0x42b444, Func Offset: 0x184
	// Line 810, Address: 0x42b454, Func Offset: 0x194
	// Line 811, Address: 0x42b464, Func Offset: 0x1a4
	// Line 812, Address: 0x42b4ac, Func Offset: 0x1ec
	// Line 813, Address: 0x42b4bc, Func Offset: 0x1fc
	// Line 814, Address: 0x42b504, Func Offset: 0x244
	// Line 815, Address: 0x42b514, Func Offset: 0x254
	// Line 816, Address: 0x42b55c, Func Offset: 0x29c
	// Line 818, Address: 0x42b56c, Func Offset: 0x2ac
	// Line 820, Address: 0x42b5c0, Func Offset: 0x300
	// Line 822, Address: 0x42b5d0, Func Offset: 0x310
	// Line 823, Address: 0x42b600, Func Offset: 0x340
	// Line 826, Address: 0x42b634, Func Offset: 0x374
	// Line 828, Address: 0x42b638, Func Offset: 0x378
	// Line 826, Address: 0x42b63c, Func Offset: 0x37c
	// Line 828, Address: 0x42b640, Func Offset: 0x380
	// Line 830, Address: 0x42b664, Func Offset: 0x3a4
	// Line 831, Address: 0x42b668, Func Offset: 0x3a8
	// Line 830, Address: 0x42b684, Func Offset: 0x3c4
	// Line 831, Address: 0x42b688, Func Offset: 0x3c8
	// Func End, Address: 0x42b690, Func Offset: 0x3d0
}

// sphereHitsModelCB__FP14RpIntersectionP19RpCollisionTrianglefPv
// Start address: 0x42b690
RpCollisionTriangle* sphereHitsModelCB(RpCollisionTriangle* tri, float32 dist, void* data)
{
	xSphereHitsModel_context* context;
	// Line 764, Address: 0x42b698, Func Offset: 0x8
	// Func End, Address: 0x42b6ac, Func Offset: 0x1c
}

// sphereHitsEnvCB__FP14RpIntersectionP13RpWorldSectorP19RpCollisionTrianglefPv
// Start address: 0x42b6b0
RpCollisionTriangle* sphereHitsEnvCB(RpIntersection* isx, RpWorldSector* sector, RpCollisionTriangle* tri, float32 dist, void* data)
{
	xCollis* coll;
	float32 radius;
	xVec3* center;
	xVec3 tohit;
	float32 scale;
	// Line 631, Address: 0x42b6b0, Func Offset: 0
	// Line 639, Address: 0x42b6d4, Func Offset: 0x24
	// Line 633, Address: 0x42b6d8, Func Offset: 0x28
	// Line 639, Address: 0x42b6dc, Func Offset: 0x2c
	// Line 640, Address: 0x42b6e4, Func Offset: 0x34
	// Line 641, Address: 0x42b6e8, Func Offset: 0x38
	// Line 640, Address: 0x42b6ec, Func Offset: 0x3c
	// Line 641, Address: 0x42b6f0, Func Offset: 0x40
	// Line 649, Address: 0x42b6f8, Func Offset: 0x48
	// Line 654, Address: 0x42b6fc, Func Offset: 0x4c
	// Line 649, Address: 0x42b700, Func Offset: 0x50
	// Line 654, Address: 0x42b704, Func Offset: 0x54
	// Line 649, Address: 0x42b70c, Func Offset: 0x5c
	// Line 654, Address: 0x42b710, Func Offset: 0x60
	// Line 659, Address: 0x42b71c, Func Offset: 0x6c
	// Line 664, Address: 0x42b730, Func Offset: 0x80
	// Line 671, Address: 0x42b73c, Func Offset: 0x8c
	// Line 676, Address: 0x42b748, Func Offset: 0x98
	// Line 681, Address: 0x42b758, Func Offset: 0xa8
	// Line 683, Address: 0x42b75c, Func Offset: 0xac
	// Line 686, Address: 0x42b76c, Func Offset: 0xbc
	// Line 689, Address: 0x42b77c, Func Offset: 0xcc
	// Line 696, Address: 0x42b78c, Func Offset: 0xdc
	// Line 733, Address: 0x42b79c, Func Offset: 0xec
	// Line 735, Address: 0x42b7a4, Func Offset: 0xf4
	// Line 745, Address: 0x42b7bc, Func Offset: 0x10c
	// Line 746, Address: 0x42b7c0, Func Offset: 0x110
	// Line 745, Address: 0x42b7c4, Func Offset: 0x114
	// Line 746, Address: 0x42b7c8, Func Offset: 0x118
	// Line 661, Address: 0x42b7d0, Func Offset: 0x120
	// Line 668, Address: 0x42b7d8, Func Offset: 0x128
	// Line 672, Address: 0x42b7e0, Func Offset: 0x130
	// Line 677, Address: 0x42b7e8, Func Offset: 0x138
	// Line 746, Address: 0x42b7f0, Func Offset: 0x140
	// Line 690, Address: 0x42b82c, Func Offset: 0x17c
	// Line 746, Address: 0x42b830, Func Offset: 0x180
	// Line 690, Address: 0x42b834, Func Offset: 0x184
	// Line 692, Address: 0x42b838, Func Offset: 0x188
	// Line 690, Address: 0x42b840, Func Offset: 0x190
	// Line 746, Address: 0x42b844, Func Offset: 0x194
	// Line 690, Address: 0x42b84c, Func Offset: 0x19c
	// Line 692, Address: 0x42b850, Func Offset: 0x1a0
	// Line 746, Address: 0x42b858, Func Offset: 0x1a8
	// Line 692, Address: 0x42b860, Func Offset: 0x1b0
	// Line 746, Address: 0x42b864, Func Offset: 0x1b4
	// Line 694, Address: 0x42b86c, Func Offset: 0x1bc
	// Line 746, Address: 0x42b870, Func Offset: 0x1c0
	// Line 694, Address: 0x42b878, Func Offset: 0x1c8
	// Line 746, Address: 0x42b87c, Func Offset: 0x1cc
	// Line 694, Address: 0x42b884, Func Offset: 0x1d4
	// Line 746, Address: 0x42b890, Func Offset: 0x1e0
	// Line 741, Address: 0x42b8b4, Func Offset: 0x204
	// Line 746, Address: 0x42b8bc, Func Offset: 0x20c
	// Line 747, Address: 0x42b8c8, Func Offset: 0x218
	// Func End, Address: 0x42b8e4, Func Offset: 0x234
}

// properSphereIsectTri__FPC5xVec3fP5xVec3PfP19RpCollisionTriangle
// Start address: 0x42b8f0
void properSphereIsectTri(xVec3* center, float32 radius, xVec3* tohit, float32* dist_ptr, RpCollisionTriangle* tri)
{
	xVec3 projPoint;
	float32 dist2plane;
	float32 dist;
	float32 dist2;
	float32 radius2;
	uint32 i;
	xVec3 vertClosestPoint;
	// Line 545, Address: 0x42b8f0, Func Offset: 0
	// Line 552, Address: 0x42b8f8, Func Offset: 0x8
	// Line 545, Address: 0x42b8fc, Func Offset: 0xc
	// Line 552, Address: 0x42b900, Func Offset: 0x10
	// Line 545, Address: 0x42b904, Func Offset: 0x14
	// Line 552, Address: 0x42b908, Func Offset: 0x18
	// Line 545, Address: 0x42b90c, Func Offset: 0x1c
	// Line 555, Address: 0x42b910, Func Offset: 0x20
	// Line 545, Address: 0x42b914, Func Offset: 0x24
	// Line 555, Address: 0x42b920, Func Offset: 0x30
	// Line 545, Address: 0x42b924, Func Offset: 0x34
	// Line 563, Address: 0x42b940, Func Offset: 0x50
	// Line 545, Address: 0x42b944, Func Offset: 0x54
	// Line 548, Address: 0x42b94c, Func Offset: 0x5c
	// Line 552, Address: 0x42b950, Func Offset: 0x60
	// Line 548, Address: 0x42b954, Func Offset: 0x64
	// Line 552, Address: 0x42b958, Func Offset: 0x68
	// Line 548, Address: 0x42b95c, Func Offset: 0x6c
	// Line 552, Address: 0x42b960, Func Offset: 0x70
	// Line 548, Address: 0x42b964, Func Offset: 0x74
	// Line 552, Address: 0x42b968, Func Offset: 0x78
	// Line 563, Address: 0x42b97c, Func Offset: 0x8c
	// Line 552, Address: 0x42b980, Func Offset: 0x90
	// Line 555, Address: 0x42b98c, Func Offset: 0x9c
	// Line 558, Address: 0x42b998, Func Offset: 0xa8
	// Line 555, Address: 0x42b99c, Func Offset: 0xac
	// Line 558, Address: 0x42b9b0, Func Offset: 0xc0
	// Line 560, Address: 0x42b9c4, Func Offset: 0xd4
	// Line 563, Address: 0x42b9c8, Func Offset: 0xd8
	// Line 560, Address: 0x42b9cc, Func Offset: 0xdc
	// Line 563, Address: 0x42b9e8, Func Offset: 0xf8
	// Line 597, Address: 0x42b9f8, Func Offset: 0x108
	// Line 568, Address: 0x42ba00, Func Offset: 0x110
	// Line 574, Address: 0x42ba04, Func Offset: 0x114
	// Line 597, Address: 0x42ba0c, Func Offset: 0x11c
	// Line 569, Address: 0x42ba14, Func Offset: 0x124
	// Line 597, Address: 0x42ba18, Func Offset: 0x128
	// Line 582, Address: 0x42ba1c, Func Offset: 0x12c
	// Line 597, Address: 0x42ba24, Func Offset: 0x134
	// Line 582, Address: 0x42ba2c, Func Offset: 0x13c
	// Line 597, Address: 0x42ba34, Func Offset: 0x144
	// Line 585, Address: 0x42ba5c, Func Offset: 0x16c
	// Line 586, Address: 0x42ba64, Func Offset: 0x174
	// Line 585, Address: 0x42ba68, Func Offset: 0x178
	// Line 586, Address: 0x42ba6c, Func Offset: 0x17c
	// Line 588, Address: 0x42ba74, Func Offset: 0x184
	// Line 597, Address: 0x42ba78, Func Offset: 0x188
	// Line 588, Address: 0x42ba80, Func Offset: 0x190
	// Line 597, Address: 0x42ba84, Func Offset: 0x194
	// Line 589, Address: 0x42ba94, Func Offset: 0x1a4
	// Line 597, Address: 0x42ba98, Func Offset: 0x1a8
	// Line 593, Address: 0x42ba9c, Func Offset: 0x1ac
	// Line 597, Address: 0x42baa0, Func Offset: 0x1b0
	// Func End, Address: 0x42bb04, Func Offset: 0x214
}

// FindNearestPointOnLine__FP5xVec3P5xVec3P5xVec3P5xVec3
// Start address: 0x42bb10
void FindNearestPointOnLine(xVec3* result, xVec3* point, xVec3* start, xVec3* end)
{
	float32 mu;
	float32 lineLength2;
	// Line 507, Address: 0x42bb10, Func Offset: 0
	// Line 503, Address: 0x42bb20, Func Offset: 0x10
	// Line 507, Address: 0x42bb24, Func Offset: 0x14
	// Line 512, Address: 0x42bb28, Func Offset: 0x18
	// Line 507, Address: 0x42bb2c, Func Offset: 0x1c
	// Line 512, Address: 0x42bb34, Func Offset: 0x24
	// Line 507, Address: 0x42bb38, Func Offset: 0x28
	// Line 512, Address: 0x42bb3c, Func Offset: 0x2c
	// Line 514, Address: 0x42bb60, Func Offset: 0x50
	// Line 523, Address: 0x42bb6c, Func Offset: 0x5c
	// Line 525, Address: 0x42bb7c, Func Offset: 0x6c
	// Line 529, Address: 0x42bb88, Func Offset: 0x78
	// Line 531, Address: 0x42bb94, Func Offset: 0x84
	// Line 532, Address: 0x42bb98, Func Offset: 0x88
	// Line 531, Address: 0x42bb9c, Func Offset: 0x8c
	// Line 532, Address: 0x42bba4, Func Offset: 0x94
	// Line 541, Address: 0x42bbac, Func Offset: 0x9c
	// Line 542, Address: 0x42bbb4, Func Offset: 0xa4
	// Line 518, Address: 0x42bbc4, Func Offset: 0xb4
	// Line 542, Address: 0x42bbcc, Func Offset: 0xbc
	// Func End, Address: 0x42bbe4, Func Offset: 0xd4
}

// PointWithinTriangle__FP5xVec3PP5xVec3P5xVec3
// Start address: 0x42bbf0
int32 PointWithinTriangle(xVec3* _pt, xVec3** _tri, xVec3* _normal)
{
	RwV3d* pt;
	RwV3d** tri;
	RwV3d* normal;
	Dimension dimension;
	int32 inside;
	int32 i;
	int32 j;
	// Line 439, Address: 0x42bbf0, Func Offset: 0
	// Line 432, Address: 0x42bbf4, Func Offset: 0x4
	// Line 440, Address: 0x42bbf8, Func Offset: 0x8
	// Line 438, Address: 0x42bbfc, Func Offset: 0xc
	// Line 439, Address: 0x42bc00, Func Offset: 0x10
	// Line 440, Address: 0x42bc04, Func Offset: 0x14
	// Line 442, Address: 0x42bc08, Func Offset: 0x18
	// Line 445, Address: 0x42bc40, Func Offset: 0x50
	// Line 452, Address: 0x42bc64, Func Offset: 0x74
	// Line 454, Address: 0x42bc78, Func Offset: 0x88
	// Line 459, Address: 0x42bd08, Func Offset: 0x118
	// Line 461, Address: 0x42bd14, Func Offset: 0x124
	// Line 463, Address: 0x42bd2c, Func Offset: 0x13c
	// Line 468, Address: 0x42bd34, Func Offset: 0x144
	// Line 470, Address: 0x42bd48, Func Offset: 0x158
	// Line 475, Address: 0x42bdd8, Func Offset: 0x1e8
	// Line 477, Address: 0x42bde4, Func Offset: 0x1f4
	// Line 479, Address: 0x42bdfc, Func Offset: 0x20c
	// Line 484, Address: 0x42be04, Func Offset: 0x214
	// Line 486, Address: 0x42be18, Func Offset: 0x228
	// Line 491, Address: 0x42bea8, Func Offset: 0x2b8
	// Line 493, Address: 0x42beb4, Func Offset: 0x2c4
	// Line 497, Address: 0x42becc, Func Offset: 0x2dc
	// Line 500, Address: 0x42bed0, Func Offset: 0x2e0
	// Func End, Address: 0x42bed8, Func Offset: 0x2e8
}

// xSphereHitsOBB_nu__FPC7xSpherePC4xBoxPC7xMat4x3P7xCollis
// Start address: 0x42bee0
uint32 xSphereHitsOBB_nu(xSphere* s, xBox* b, xMat4x3* m, xCollis* coll)
{
	xSphere xfs;
	xVec3 scale;
	xMat4x3 mnormal;
	float32 len2;
	float32 len_inv;
	float32 len2;
	float32 len_inv;
	float32 len2;
	float32 len_inv;
	xBox sbox;
	// Line 306, Address: 0x42bee0, Func Offset: 0
	// Line 323, Address: 0x42bf08, Func Offset: 0x28
	// Line 324, Address: 0x42bfa4, Func Offset: 0xc4
	// Line 323, Address: 0x42bfa8, Func Offset: 0xc8
	// Line 324, Address: 0x42bfb0, Func Offset: 0xd0
	// Line 325, Address: 0x42c054, Func Offset: 0x174
	// Line 324, Address: 0x42c058, Func Offset: 0x178
	// Line 325, Address: 0x42c060, Func Offset: 0x180
	// Line 327, Address: 0x42c100, Func Offset: 0x220
	// Line 328, Address: 0x42c104, Func Offset: 0x224
	// Line 327, Address: 0x42c108, Func Offset: 0x228
	// Line 331, Address: 0x42c10c, Func Offset: 0x22c
	// Line 328, Address: 0x42c110, Func Offset: 0x230
	// Line 326, Address: 0x42c114, Func Offset: 0x234
	// Line 327, Address: 0x42c11c, Func Offset: 0x23c
	// Line 326, Address: 0x42c120, Func Offset: 0x240
	// Line 328, Address: 0x42c124, Func Offset: 0x244
	// Line 329, Address: 0x42c12c, Func Offset: 0x24c
	// Line 331, Address: 0x42c130, Func Offset: 0x250
	// Line 327, Address: 0x42c134, Func Offset: 0x254
	// Line 328, Address: 0x42c138, Func Offset: 0x258
	// Line 327, Address: 0x42c13c, Func Offset: 0x25c
	// Line 329, Address: 0x42c140, Func Offset: 0x260
	// Line 328, Address: 0x42c144, Func Offset: 0x264
	// Line 327, Address: 0x42c148, Func Offset: 0x268
	// Line 328, Address: 0x42c150, Func Offset: 0x270
	// Line 329, Address: 0x42c154, Func Offset: 0x274
	// Line 331, Address: 0x42c158, Func Offset: 0x278
	// Line 328, Address: 0x42c15c, Func Offset: 0x27c
	// Line 329, Address: 0x42c160, Func Offset: 0x280
	// Line 328, Address: 0x42c164, Func Offset: 0x284
	// Line 329, Address: 0x42c168, Func Offset: 0x288
	// Line 328, Address: 0x42c16c, Func Offset: 0x28c
	// Line 329, Address: 0x42c170, Func Offset: 0x290
	// Line 331, Address: 0x42c174, Func Offset: 0x294
	// Line 326, Address: 0x42c180, Func Offset: 0x2a0
	// Line 331, Address: 0x42c18c, Func Offset: 0x2ac
	// Line 332, Address: 0x42c1a8, Func Offset: 0x2c8
	// Line 333, Address: 0x42c1ac, Func Offset: 0x2cc
	// Line 343, Address: 0x42c1c4, Func Offset: 0x2e4
	// Line 344, Address: 0x42c1d0, Func Offset: 0x2f0
	// Line 353, Address: 0x42c1d8, Func Offset: 0x2f8
	// Line 354, Address: 0x42c1e0, Func Offset: 0x300
	// Line 356, Address: 0x42c22c, Func Offset: 0x34c
	// Line 357, Address: 0x42c23c, Func Offset: 0x35c
	// Line 359, Address: 0x42c288, Func Offset: 0x3a8
	// Line 360, Address: 0x42c298, Func Offset: 0x3b8
	// Line 362, Address: 0x42c2e4, Func Offset: 0x404
	// Line 363, Address: 0x42c2f4, Func Offset: 0x414
	// Line 366, Address: 0x42c344, Func Offset: 0x464
	// Line 367, Address: 0x42c348, Func Offset: 0x468
	// Func End, Address: 0x42c35c, Func Offset: 0x47c
}

// xSphereHitsBox__FPC7xSpherePC4xBoxP7xCollis
// Start address: 0x42c360
uint32 xSphereHitsBox(xSphere* a, xBox* b, xCollis* coll)
{
	xIsect isx;
	float32 scale;
	// Line 214, Address: 0x42c360, Func Offset: 0
	// Line 220, Address: 0x42c36c, Func Offset: 0xc
	// Line 214, Address: 0x42c370, Func Offset: 0x10
	// Line 220, Address: 0x42c374, Func Offset: 0x14
	// Line 222, Address: 0x42c388, Func Offset: 0x28
	// Line 227, Address: 0x42c3a0, Func Offset: 0x40
	// Line 232, Address: 0x42c3b4, Func Offset: 0x54
	// Line 234, Address: 0x42c3bc, Func Offset: 0x5c
	// Line 237, Address: 0x42c3cc, Func Offset: 0x6c
	// Line 238, Address: 0x42c3e0, Func Offset: 0x80
	// Line 242, Address: 0x42c3f4, Func Offset: 0x94
	// Line 243, Address: 0x42c3f8, Func Offset: 0x98
	// Line 242, Address: 0x42c3fc, Func Offset: 0x9c
	// Line 243, Address: 0x42c400, Func Offset: 0xa0
	// Line 246, Address: 0x42c420, Func Offset: 0xc0
	// Line 249, Address: 0x42c430, Func Offset: 0xd0
	// Line 253, Address: 0x42c440, Func Offset: 0xe0
	// Line 254, Address: 0x42c444, Func Offset: 0xe4
	// Line 253, Address: 0x42c448, Func Offset: 0xe8
	// Line 254, Address: 0x42c44c, Func Offset: 0xec
	// Line 223, Address: 0x42c458, Func Offset: 0xf8
	// Line 224, Address: 0x42c45c, Func Offset: 0xfc
	// Line 223, Address: 0x42c460, Func Offset: 0x100
	// Line 224, Address: 0x42c464, Func Offset: 0x104
	// Line 254, Address: 0x42c46c, Func Offset: 0x10c
	// Line 228, Address: 0x42c470, Func Offset: 0x110
	// Line 254, Address: 0x42c47c, Func Offset: 0x11c
	// Line 240, Address: 0x42c4b4, Func Offset: 0x154
	// Line 254, Address: 0x42c4bc, Func Offset: 0x15c
	// Line 250, Address: 0x42c4d0, Func Offset: 0x170
	// Line 254, Address: 0x42c4d4, Func Offset: 0x174
	// Line 250, Address: 0x42c4dc, Func Offset: 0x17c
	// Line 254, Address: 0x42c4e0, Func Offset: 0x180
	// Line 250, Address: 0x42c4e8, Func Offset: 0x188
	// Line 255, Address: 0x42c4f4, Func Offset: 0x194
	// Func End, Address: 0x42c504, Func Offset: 0x1a4
}

// xSphereHitsSphere__FPC7xSpherePC7xSphereP7xCollis
// Start address: 0x42c510
uint32 xSphereHitsSphere(xSphere* a, xSphere* b, xCollis* coll)
{
	xIsect isx;
	float32 scale;
	float32 scale;
	// Line 166, Address: 0x42c510, Func Offset: 0
	// Line 172, Address: 0x42c528, Func Offset: 0x18
	// Line 173, Address: 0x42c53c, Func Offset: 0x2c
	// Line 178, Address: 0x42c554, Func Offset: 0x44
	// Line 183, Address: 0x42c564, Func Offset: 0x54
	// Line 185, Address: 0x42c574, Func Offset: 0x64
	// Line 186, Address: 0x42c588, Func Offset: 0x78
	// Line 189, Address: 0x42c59c, Func Offset: 0x8c
	// Line 190, Address: 0x42c5a0, Func Offset: 0x90
	// Line 189, Address: 0x42c5a4, Func Offset: 0x94
	// Line 190, Address: 0x42c5ac, Func Offset: 0x9c
	// Line 193, Address: 0x42c5cc, Func Offset: 0xbc
	// Line 194, Address: 0x42c5e0, Func Offset: 0xd0
	// Line 198, Address: 0x42c5f4, Func Offset: 0xe4
	// Line 199, Address: 0x42c5f8, Func Offset: 0xe8
	// Line 198, Address: 0x42c5fc, Func Offset: 0xec
	// Line 199, Address: 0x42c604, Func Offset: 0xf4
	// Line 202, Address: 0x42c624, Func Offset: 0x114
	// Line 205, Address: 0x42c634, Func Offset: 0x124
	// Line 209, Address: 0x42c644, Func Offset: 0x134
	// Line 210, Address: 0x42c648, Func Offset: 0x138
	// Line 209, Address: 0x42c64c, Func Offset: 0x13c
	// Line 210, Address: 0x42c650, Func Offset: 0x140
	// Line 174, Address: 0x42c65c, Func Offset: 0x14c
	// Line 175, Address: 0x42c660, Func Offset: 0x150
	// Line 174, Address: 0x42c664, Func Offset: 0x154
	// Line 175, Address: 0x42c668, Func Offset: 0x158
	// Line 210, Address: 0x42c670, Func Offset: 0x160
	// Line 179, Address: 0x42c674, Func Offset: 0x164
	// Line 210, Address: 0x42c680, Func Offset: 0x170
	// Line 188, Address: 0x42c69c, Func Offset: 0x18c
	// Line 210, Address: 0x42c6a4, Func Offset: 0x194
	// Line 196, Address: 0x42c6c0, Func Offset: 0x1b0
	// Line 210, Address: 0x42c6c8, Func Offset: 0x1b8
	// Line 206, Address: 0x42c6dc, Func Offset: 0x1cc
	// Line 210, Address: 0x42c6e0, Func Offset: 0x1d0
	// Line 206, Address: 0x42c6e8, Func Offset: 0x1d8
	// Line 210, Address: 0x42c6ec, Func Offset: 0x1dc
	// Line 206, Address: 0x42c6f4, Func Offset: 0x1e4
	// Line 211, Address: 0x42c700, Func Offset: 0x1f0
	// Func End, Address: 0x42c714, Func Offset: 0x204
}

// xCollideGetCollsIdxWithNormal__FPC7xCollisPC5xVec3PC5xVec3PC7xMat3x3
// Start address: 0x42c720
_xCollsIdx xCollideGetCollsIdxWithNormal(xCollis* coll, xVec3* tohit, xVec3* normal, xMat3x3* mat)
{
	float32 local_x;
	float32 local_z;
	// Line 111, Address: 0x42c720, Func Offset: 0
	// Line 118, Address: 0x42c724, Func Offset: 0x4
	// Line 111, Address: 0x42c728, Func Offset: 0x8
	// Line 118, Address: 0x42c72c, Func Offset: 0xc
	// Line 111, Address: 0x42c730, Func Offset: 0x10
	// Line 118, Address: 0x42c744, Func Offset: 0x24
	// Line 124, Address: 0x42c7e0, Func Offset: 0xc0
	// Line 130, Address: 0x42c808, Func Offset: 0xe8
	// Line 124, Address: 0x42c80c, Func Offset: 0xec
	// Line 130, Address: 0x42c810, Func Offset: 0xf0
	// Line 131, Address: 0x42c814, Func Offset: 0xf4
	// Line 130, Address: 0x42c81c, Func Offset: 0xfc
	// Line 131, Address: 0x42c82c, Func Offset: 0x10c
	// Line 133, Address: 0x42c830, Func Offset: 0x110
	// Line 134, Address: 0x42c83c, Func Offset: 0x11c
	// Line 136, Address: 0x42c848, Func Offset: 0x128
	// Line 142, Address: 0x42c860, Func Offset: 0x140
	// Line 148, Address: 0x42c87c, Func Offset: 0x15c
	// Line 150, Address: 0x42c888, Func Offset: 0x168
	// Line 156, Address: 0x42c8a4, Func Offset: 0x184
	// Line 162, Address: 0x42c8b8, Func Offset: 0x198
	// Func End, Address: 0x42c8d0, Func Offset: 0x1b0
}

// xCollideGetCollsIdx__FPC7xCollisPC5xVec3PC7xMat3x3
// Start address: 0x42c8d0
_xCollsIdx xCollideGetCollsIdx(xCollis* coll, xVec3* tohit, xMat3x3* mat)
{
	float32 local_x;
	float32 local_z;
	// Line 59, Address: 0x42c8d0, Func Offset: 0
	// Line 66, Address: 0x42c8d4, Func Offset: 0x4
	// Line 59, Address: 0x42c8d8, Func Offset: 0x8
	// Line 66, Address: 0x42c8dc, Func Offset: 0xc
	// Line 59, Address: 0x42c8e0, Func Offset: 0x10
	// Line 66, Address: 0x42c8ec, Func Offset: 0x1c
	// Line 70, Address: 0x42c95c, Func Offset: 0x8c
	// Line 76, Address: 0x42c984, Func Offset: 0xb4
	// Line 70, Address: 0x42c988, Func Offset: 0xb8
	// Line 76, Address: 0x42c98c, Func Offset: 0xbc
	// Line 77, Address: 0x42c990, Func Offset: 0xc0
	// Line 76, Address: 0x42c998, Func Offset: 0xc8
	// Line 77, Address: 0x42c9a8, Func Offset: 0xd8
	// Line 79, Address: 0x42c9ac, Func Offset: 0xdc
	// Line 80, Address: 0x42c9b8, Func Offset: 0xe8
	// Line 82, Address: 0x42c9c4, Func Offset: 0xf4
	// Line 88, Address: 0x42c9dc, Func Offset: 0x10c
	// Line 94, Address: 0x42c9f8, Func Offset: 0x128
	// Line 96, Address: 0x42ca04, Func Offset: 0x134
	// Line 102, Address: 0x42ca20, Func Offset: 0x150
	// Line 108, Address: 0x42ca34, Func Offset: 0x164
	// Func End, Address: 0x42ca48, Func Offset: 0x178
}

