



void StagColGeneral(int32 who);
int32 StaggeredCollide();
void PreCollide(float32 acc_grav, float32 tym_collDelay);
void OrientToDir(xVec3* vec_path, int32 doTheTwist);
void TypData_RotMatSet(xMat3x3* mat_rot);
int32 ColTestCapsule(xBound* bnd_tgt, xVec3* pos, float32 radiusCaller, xVec3* vel, float32 tym, int32 isPlayer);
void PosSet(xVec3* pos);
void Start(xVec3* pos, float32 tym);
void Discard();
int32 GrabModel();
int32 Reconfigure(en_haztyp haztype);
int32 ConfigHelper(en_haztyp haztype);
void HAZ_Iterate(uint8(*fp)(zNMEHazard&, void*), void* context, int32 flag_filter);
zNMEHazard* HAZ_Acquire();
void RenderGenerally(int32 doOpaqueStuff);
void Timestep(float32 dt);
int32 HAZ_ord_sorttest(void* vkey, void* vitem);
void ScenePostInit();
void SceneReset();
void SceneFinish();
void ScenePrepare();
void ModulePrepUse();
void Render();
void PostRender();

// StagColGeneral__10zNMEHazardFi
// Start address: 0x29c5e0
void zNMEHazard::StagColGeneral(int32 who)
{
	xParabola* parab;
	float32 tym_chkAhead;
	float32 tym_alive;
	float32 tym_ahead;
	xVec3 pos_here;
	xVec3 pos_there;
	xSweptSphere sws;
	int32 rc;
	float32 spd_avg;
	// Line 1782, Address: 0x29c5e0, Func Offset: 0
	// Line 1789, Address: 0x29c5e4, Func Offset: 0x4
	// Line 1782, Address: 0x29c5e8, Func Offset: 0x8
	// Line 1784, Address: 0x29c604, Func Offset: 0x24
	// Line 1789, Address: 0x29c60c, Func Offset: 0x2c
	// Line 1790, Address: 0x29c638, Func Offset: 0x58
	// Line 1789, Address: 0x29c63c, Func Offset: 0x5c
	// Line 1790, Address: 0x29c640, Func Offset: 0x60
	// Line 1792, Address: 0x29c66c, Func Offset: 0x8c
	// Line 1793, Address: 0x29c674, Func Offset: 0x94
	// Line 1794, Address: 0x29c690, Func Offset: 0xb0
	// Line 1795, Address: 0x29c6a8, Func Offset: 0xc8
	// Line 1800, Address: 0x29c6ac, Func Offset: 0xcc
	// Line 1801, Address: 0x29c6b8, Func Offset: 0xd8
	// Line 1814, Address: 0x29c6c0, Func Offset: 0xe0
	// Line 1798, Address: 0x29c6c8, Func Offset: 0xe8
	// Line 1800, Address: 0x29c6d4, Func Offset: 0xf4
	// Line 1814, Address: 0x29c6dc, Func Offset: 0xfc
	// Line 1798, Address: 0x29c6e0, Func Offset: 0x100
	// Line 1800, Address: 0x29c6ec, Func Offset: 0x10c
	// Line 1801, Address: 0x29c75c, Func Offset: 0x17c
	// Line 1814, Address: 0x29c7c8, Func Offset: 0x1e8
	// Line 1815, Address: 0x29c7d0, Func Offset: 0x1f0
	// Line 1821, Address: 0x29c7ec, Func Offset: 0x20c
	// Line 1823, Address: 0x29c7f8, Func Offset: 0x218
	// Line 1824, Address: 0x29c804, Func Offset: 0x224
	// Line 1827, Address: 0x29c824, Func Offset: 0x244
	// Line 1828, Address: 0x29c82c, Func Offset: 0x24c
	// Line 1822, Address: 0x29c83c, Func Offset: 0x25c
	// Line 1828, Address: 0x29c844, Func Offset: 0x264
	// Line 1822, Address: 0x29c850, Func Offset: 0x270
	// Line 1831, Address: 0x29c858, Func Offset: 0x278
	// Line 1840, Address: 0x29c860, Func Offset: 0x280
	// Line 1845, Address: 0x29c864, Func Offset: 0x284
	// Line 1840, Address: 0x29c868, Func Offset: 0x288
	// Line 1845, Address: 0x29c870, Func Offset: 0x290
	// Line 1831, Address: 0x29c874, Func Offset: 0x294
	// Line 1847, Address: 0x29c878, Func Offset: 0x298
	// Line 1840, Address: 0x29c87c, Func Offset: 0x29c
	// Line 1847, Address: 0x29c880, Func Offset: 0x2a0
	// Line 1840, Address: 0x29c884, Func Offset: 0x2a4
	// Line 1841, Address: 0x29c888, Func Offset: 0x2a8
	// Line 1843, Address: 0x29c890, Func Offset: 0x2b0
	// Line 1840, Address: 0x29c894, Func Offset: 0x2b4
	// Line 1843, Address: 0x29c898, Func Offset: 0x2b8
	// Line 1847, Address: 0x29c89c, Func Offset: 0x2bc
	// Line 1843, Address: 0x29c8a0, Func Offset: 0x2c0
	// Line 1844, Address: 0x29c8a4, Func Offset: 0x2c4
	// Line 1843, Address: 0x29c8b0, Func Offset: 0x2d0
	// Line 1844, Address: 0x29c8b4, Func Offset: 0x2d4
	// Line 1845, Address: 0x29c8b8, Func Offset: 0x2d8
	// Line 1847, Address: 0x29c8c0, Func Offset: 0x2e0
	// Line 1850, Address: 0x29c8cc, Func Offset: 0x2ec
	// Line 1854, Address: 0x29c8e0, Func Offset: 0x300
	// Line 1855, Address: 0x29c910, Func Offset: 0x330
	// Line 1863, Address: 0x29c918, Func Offset: 0x338
	// Line 1866, Address: 0x29c950, Func Offset: 0x370
	// Func End, Address: 0x29c970, Func Offset: 0x390
}

// StaggeredCollide__10zNMEHazardFv
// Start address: 0x29c970
int32 zNMEHazard::StaggeredCollide()
{
	HAZCollide* hazcol;
	xCollis colrec;
	// Line 1717, Address: 0x29c970, Func Offset: 0
	// Line 1728, Address: 0x29c984, Func Offset: 0x14
	// Line 1726, Address: 0x29c988, Func Offset: 0x18
	// Line 1728, Address: 0x29c98c, Func Offset: 0x1c
	// Line 1729, Address: 0x29c998, Func Offset: 0x28
	// Line 1730, Address: 0x29c9a0, Func Offset: 0x30
	// Line 1739, Address: 0x29c9ac, Func Offset: 0x3c
	// Line 1730, Address: 0x29c9b0, Func Offset: 0x40
	// Line 1739, Address: 0x29c9b4, Func Offset: 0x44
	// Line 1730, Address: 0x29c9b8, Func Offset: 0x48
	// Line 1739, Address: 0x29c9bc, Func Offset: 0x4c
	// Line 1730, Address: 0x29c9c0, Func Offset: 0x50
	// Line 1739, Address: 0x29c9c4, Func Offset: 0x54
	// Line 1730, Address: 0x29c9c8, Func Offset: 0x58
	// Line 1739, Address: 0x29c9d8, Func Offset: 0x68
	// Line 1741, Address: 0x29c9e0, Func Offset: 0x70
	// Line 1745, Address: 0x29ca08, Func Offset: 0x98
	// Line 1747, Address: 0x29ca18, Func Offset: 0xa8
	// Line 1748, Address: 0x29ca20, Func Offset: 0xb0
	// Line 1753, Address: 0x29ca28, Func Offset: 0xb8
	// Line 1755, Address: 0x29ca38, Func Offset: 0xc8
	// Line 1756, Address: 0x29ca40, Func Offset: 0xd0
	// Line 1761, Address: 0x29ca48, Func Offset: 0xd8
	// Line 1763, Address: 0x29ca58, Func Offset: 0xe8
	// Line 1771, Address: 0x29ca60, Func Offset: 0xf0
	// Line 1772, Address: 0x29ca6c, Func Offset: 0xfc
	// Line 1777, Address: 0x29ca7c, Func Offset: 0x10c
	// Line 1778, Address: 0x29ca8c, Func Offset: 0x11c
	// Func End, Address: 0x29caa0, Func Offset: 0x130
}

// PreCollide__10zNMEHazardFff
// Start address: 0x29caa0
void zNMEHazard::PreCollide(float32 acc_grav, float32 tym_collDelay)
{
	HAZLob* hazlob;
	xParabola* parab;
	int32 rc;
	xCollis colrec;
	// Line 1676, Address: 0x29caa0, Func Offset: 0
	// Line 1681, Address: 0x29caa4, Func Offset: 0x4
	// Line 1676, Address: 0x29caa8, Func Offset: 0x8
	// Line 1681, Address: 0x29caac, Func Offset: 0xc
	// Line 1676, Address: 0x29cab0, Func Offset: 0x10
	// Line 1681, Address: 0x29cac0, Func Offset: 0x20
	// Line 1684, Address: 0x29cacc, Func Offset: 0x2c
	// Line 1687, Address: 0x29cad0, Func Offset: 0x30
	// Line 1688, Address: 0x29cae8, Func Offset: 0x48
	// Line 1689, Address: 0x29cb00, Func Offset: 0x60
	// Line 1690, Address: 0x29cb08, Func Offset: 0x68
	// Line 1695, Address: 0x29cb24, Func Offset: 0x84
	// Line 1691, Address: 0x29cb28, Func Offset: 0x88
	// Line 1695, Address: 0x29cb2c, Func Offset: 0x8c
	// Line 1696, Address: 0x29cb40, Func Offset: 0xa0
	// Line 1697, Address: 0x29cb5c, Func Offset: 0xbc
	// Line 1698, Address: 0x29cb64, Func Offset: 0xc4
	// Line 1699, Address: 0x29cb6c, Func Offset: 0xcc
	// Line 1700, Address: 0x29cb78, Func Offset: 0xd8
	// Line 1701, Address: 0x29cb7c, Func Offset: 0xdc
	// Line 1698, Address: 0x29cb80, Func Offset: 0xe0
	// Line 1699, Address: 0x29cb88, Func Offset: 0xe8
	// Line 1700, Address: 0x29cba0, Func Offset: 0x100
	// Line 1701, Address: 0x29cba8, Func Offset: 0x108
	// Line 1702, Address: 0x29cbac, Func Offset: 0x10c
	// Line 1704, Address: 0x29cbb4, Func Offset: 0x114
	// Line 1705, Address: 0x29cbbc, Func Offset: 0x11c
	// Line 1704, Address: 0x29cbd4, Func Offset: 0x134
	// Line 1705, Address: 0x29cbdc, Func Offset: 0x13c
	// Line 1709, Address: 0x29cbe8, Func Offset: 0x148
	// Line 1712, Address: 0x29cbf0, Func Offset: 0x150
	// Func End, Address: 0x29cc08, Func Offset: 0x168
}

// OrientToDir__10zNMEHazardFPC5xVec3i
// Start address: 0x29cc10
void zNMEHazard::OrientToDir(xVec3* vec_path, int32 doTheTwist)
{
	float32 mag;
	xMat3x3 mat_rot;
	xVec3 dir;
	float32 tym_live;
	float32 ang_spun;
	xMat3x3 mat_spiral;
	// Line 1555, Address: 0x29cc10, Func Offset: 0
	// Line 1558, Address: 0x29cc14, Func Offset: 0x4
	// Line 1555, Address: 0x29cc18, Func Offset: 0x8
	// Line 1558, Address: 0x29cc28, Func Offset: 0x18
	// Line 1555, Address: 0x29cc2c, Func Offset: 0x1c
	// Line 1558, Address: 0x29cc38, Func Offset: 0x28
	// Line 1557, Address: 0x29cc50, Func Offset: 0x40
	// Line 1558, Address: 0x29cc5c, Func Offset: 0x4c
	// Line 1566, Address: 0x29cc6c, Func Offset: 0x5c
	// Line 1565, Address: 0x29cc7c, Func Offset: 0x6c
	// Line 1566, Address: 0x29cc90, Func Offset: 0x80
	// Line 1571, Address: 0x29cc98, Func Offset: 0x88
	// Line 1580, Address: 0x29ccb4, Func Offset: 0xa4
	// Line 1581, Address: 0x29ccd0, Func Offset: 0xc0
	// Line 1582, Address: 0x29cce4, Func Offset: 0xd4
	// Line 1586, Address: 0x29cd30, Func Offset: 0x120
	// Line 1589, Address: 0x29cd78, Func Offset: 0x168
	// Func End, Address: 0x29cd8c, Func Offset: 0x17c
}

// TypData_RotMatSet__10zNMEHazardFPC7xMat3x3
// Start address: 0x29cd90
void zNMEHazard::TypData_RotMatSet(xMat3x3* mat_rot)
{
	xMat4x3* frame;
	// Line 1521, Address: 0x29cd90, Func Offset: 0
	// Line 1530, Address: 0x29cd94, Func Offset: 0x4
	// Line 1531, Address: 0x29cd98, Func Offset: 0x8
	// Line 1532, Address: 0x29cdb4, Func Offset: 0x24
	// Line 1535, Address: 0x29cdd8, Func Offset: 0x48
	// Func End, Address: 0x29cde0, Func Offset: 0x50
}

// ColTestCapsule__10zNMEHazardFPC6xBoundPC5xVec3fPC5xVec3fi
// Start address: 0x29cde0
int32 zNMEHazard::ColTestCapsule(xBound* bnd_tgt, xVec3* pos, float32 radiusCaller, xVec3* vel, float32 tym, int32 isPlayer)
{
	xVec3 pos_from;
	xVec3 pos_dest;
	xSweptSphere sws;
	int32 rc;
	float32 dst_effective;
	float32 tym_inFuture;
	// Line 1356, Address: 0x29cde0, Func Offset: 0
	// Line 1359, Address: 0x29cde4, Func Offset: 0x4
	// Line 1356, Address: 0x29cde8, Func Offset: 0x8
	// Line 1359, Address: 0x29cdec, Func Offset: 0xc
	// Line 1356, Address: 0x29cdf0, Func Offset: 0x10
	// Line 1359, Address: 0x29cdf8, Func Offset: 0x18
	// Line 1356, Address: 0x29cdfc, Func Offset: 0x1c
	// Line 1359, Address: 0x29ce1c, Func Offset: 0x3c
	// Line 1364, Address: 0x29ce70, Func Offset: 0x90
	// Line 1367, Address: 0x29ce78, Func Offset: 0x98
	// Line 1368, Address: 0x29ce90, Func Offset: 0xb0
	// Line 1376, Address: 0x29cebc, Func Offset: 0xdc
	// Line 1368, Address: 0x29cec0, Func Offset: 0xe0
	// Line 1376, Address: 0x29cec4, Func Offset: 0xe4
	// Line 1368, Address: 0x29cec8, Func Offset: 0xe8
	// Line 1376, Address: 0x29cecc, Func Offset: 0xec
	// Line 1368, Address: 0x29ced0, Func Offset: 0xf0
	// Line 1376, Address: 0x29cf54, Func Offset: 0x174
	// Line 1377, Address: 0x29cf5c, Func Offset: 0x17c
	// Line 1379, Address: 0x29cf70, Func Offset: 0x190
	// Line 1380, Address: 0x29cf7c, Func Offset: 0x19c
	// Line 1381, Address: 0x29cf84, Func Offset: 0x1a4
	// Line 1365, Address: 0x29cfa0, Func Offset: 0x1c0
	// Line 1384, Address: 0x29cfa8, Func Offset: 0x1c8
	// Line 1396, Address: 0x29cfb4, Func Offset: 0x1d4
	// Line 1384, Address: 0x29cfb8, Func Offset: 0x1d8
	// Line 1396, Address: 0x29cfbc, Func Offset: 0x1dc
	// Line 1384, Address: 0x29cfc0, Func Offset: 0x1e0
	// Line 1396, Address: 0x29cfc4, Func Offset: 0x1e4
	// Line 1395, Address: 0x29cfc8, Func Offset: 0x1e8
	// Line 1396, Address: 0x29cfe4, Func Offset: 0x204
	// Line 1400, Address: 0x29cff0, Func Offset: 0x210
	// Line 1401, Address: 0x29d004, Func Offset: 0x224
	// Line 1405, Address: 0x29d00c, Func Offset: 0x22c
	// Line 1406, Address: 0x29d044, Func Offset: 0x264
	// Line 1413, Address: 0x29d04c, Func Offset: 0x26c
	// Line 1414, Address: 0x29d064, Func Offset: 0x284
	// Line 1416, Address: 0x29d06c, Func Offset: 0x28c
	// Line 1429, Address: 0x29d078, Func Offset: 0x298
	// Line 1431, Address: 0x29d0b0, Func Offset: 0x2d0
	// Line 1432, Address: 0x29d0b4, Func Offset: 0x2d4
	// Func End, Address: 0x29d0d8, Func Offset: 0x2f8
}

// PosSet__10zNMEHazardFPC5xVec3
// Start address: 0x29d0e0
void zNMEHazard::PosSet(xVec3* pos)
{
	// Line 1203, Address: 0x29d0e0, Func Offset: 0
	// Line 1204, Address: 0x29d0e8, Func Offset: 0x8
	// Line 1205, Address: 0x29d104, Func Offset: 0x24
	// Line 1206, Address: 0x29d10c, Func Offset: 0x2c
	// Line 1209, Address: 0x29d128, Func Offset: 0x48
	// Func End, Address: 0x29d130, Func Offset: 0x50
}

// Start__10zNMEHazardFPC5xVec3f
// Start address: 0x29d130
void zNMEHazard::Start(xVec3* pos, float32 tym)
{
	// Line 1186, Address: 0x29d130, Func Offset: 0
	// Line 1188, Address: 0x29d144, Func Offset: 0x14
	// Line 1191, Address: 0x29d148, Func Offset: 0x18
	// Line 1192, Address: 0x29d150, Func Offset: 0x20
	// Line 1194, Address: 0x29d198, Func Offset: 0x68
	// Line 1197, Address: 0x29d1a0, Func Offset: 0x70
	// Line 1198, Address: 0x29d1b0, Func Offset: 0x80
	// Func End, Address: 0x29d1b8, Func Offset: 0x88
}

// Discard__10zNMEHazardFv
// Start address: 0x29d1c0
void zNMEHazard::Discard()
{
	// Line 1155, Address: 0x29d1c0, Func Offset: 0
	// Line 1156, Address: 0x29d1cc, Func Offset: 0xc
	// Line 1159, Address: 0x29d1e0, Func Offset: 0x20
	// Line 1160, Address: 0x29d1e8, Func Offset: 0x28
	// Line 1162, Address: 0x29d1fc, Func Offset: 0x3c
	// Line 1166, Address: 0x29d228, Func Offset: 0x68
	// Line 1170, Address: 0x29d240, Func Offset: 0x80
	// Func End, Address: 0x29d250, Func Offset: 0x90
}

// GrabModel__10zNMEHazardF9en_haztyp
// Start address: 0x29d250
int32 zNMEHazard::GrabModel()
{
	zNMEHazardType* hth;
	RpAtomic* raw_model;
	xVec3 ang_orient;
	xMat4x3 frame;
	// Line 1075, Address: 0x29d250, Func Offset: 0
	// Line 1077, Address: 0x29d264, Func Offset: 0x14
	// Line 1078, Address: 0x29d26c, Func Offset: 0x1c
	// Line 1082, Address: 0x29d280, Func Offset: 0x30
	// Line 1083, Address: 0x29d298, Func Offset: 0x48
	// Line 1084, Address: 0x29d29c, Func Offset: 0x4c
	// Line 1085, Address: 0x29d2a4, Func Offset: 0x54
	// Line 1088, Address: 0x29d2ac, Func Offset: 0x5c
	// Line 1089, Address: 0x29d2c4, Func Offset: 0x74
	// Line 1090, Address: 0x29d2d0, Func Offset: 0x80
	// Line 1091, Address: 0x29d2d8, Func Offset: 0x88
	// Line 1090, Address: 0x29d2dc, Func Offset: 0x8c
	// Line 1091, Address: 0x29d2e0, Func Offset: 0x90
	// Line 1096, Address: 0x29d2e8, Func Offset: 0x98
	// Line 1098, Address: 0x29d30c, Func Offset: 0xbc
	// Line 1099, Address: 0x29d318, Func Offset: 0xc8
	// Line 1100, Address: 0x29d31c, Func Offset: 0xcc
	// Line 1099, Address: 0x29d320, Func Offset: 0xd0
	// Line 1101, Address: 0x29d324, Func Offset: 0xd4
	// Line 1099, Address: 0x29d328, Func Offset: 0xd8
	// Line 1100, Address: 0x29d344, Func Offset: 0xf4
	// Line 1101, Address: 0x29d348, Func Offset: 0xf8
	// Line 1134, Address: 0x29d36c, Func Offset: 0x11c
	// Line 1135, Address: 0x29d37c, Func Offset: 0x12c
	// Line 1137, Address: 0x29d388, Func Offset: 0x138
	// Line 1139, Address: 0x29d3a0, Func Offset: 0x150
	// Line 1140, Address: 0x29d3a8, Func Offset: 0x158
	// Func End, Address: 0x29d3b8, Func Offset: 0x168
}

// Reconfigure__10zNMEHazardF9en_haztyp
// Start address: 0x29d3c0
int32 zNMEHazard::Reconfigure(en_haztyp haztype)
{
	HAZNotify* noter;
	zNMECommon* npc_old;
	xVec3 pos_old;
	// Line 1030, Address: 0x29d3c0, Func Offset: 0
	// Line 1051, Address: 0x29d3c4, Func Offset: 0x4
	// Line 1030, Address: 0x29d3c8, Func Offset: 0x8
	// Line 1051, Address: 0x29d3cc, Func Offset: 0xc
	// Line 1030, Address: 0x29d3d0, Func Offset: 0x10
	// Line 1051, Address: 0x29d3e8, Func Offset: 0x28
	// Line 1045, Address: 0x29d3ec, Func Offset: 0x2c
	// Line 1042, Address: 0x29d3fc, Func Offset: 0x3c
	// Line 1043, Address: 0x29d400, Func Offset: 0x40
	// Line 1051, Address: 0x29d404, Func Offset: 0x44
	// Line 1045, Address: 0x29d410, Func Offset: 0x50
	// Line 1051, Address: 0x29d414, Func Offset: 0x54
	// Line 1045, Address: 0x29d418, Func Offset: 0x58
	// Line 1051, Address: 0x29d41c, Func Offset: 0x5c
	// Line 1054, Address: 0x29d42c, Func Offset: 0x6c
	// Line 1057, Address: 0x29d43c, Func Offset: 0x7c
	// Line 1060, Address: 0x29d440, Func Offset: 0x80
	// Line 1057, Address: 0x29d444, Func Offset: 0x84
	// Line 1060, Address: 0x29d448, Func Offset: 0x88
	// Line 1061, Address: 0x29d480, Func Offset: 0xc0
	// Line 1063, Address: 0x29d490, Func Offset: 0xd0
	// Line 1064, Address: 0x29d4b8, Func Offset: 0xf8
	// Line 1065, Address: 0x29d4bc, Func Offset: 0xfc
	// Line 1067, Address: 0x29d4c4, Func Offset: 0x104
	// Line 1068, Address: 0x29d4cc, Func Offset: 0x10c
	// Line 1071, Address: 0x29d4e0, Func Offset: 0x120
	// Line 1060, Address: 0x29d4f0, Func Offset: 0x130
	// Line 1071, Address: 0x29d500, Func Offset: 0x140
	// Line 1060, Address: 0x29d508, Func Offset: 0x148
	// Line 1071, Address: 0x29d514, Func Offset: 0x154
	// Line 1072, Address: 0x29d52c, Func Offset: 0x16c
	// Func End, Address: 0x29d548, Func Offset: 0x188
}

// ConfigHelper__10zNMEHazardF9en_haztyp
// Start address: 0x29d550
int32 zNMEHazard::ConfigHelper(en_haztyp haztype)
{
	int32 result;
	// Line 1011, Address: 0x29d550, Func Offset: 0
	// Line 1016, Address: 0x29d554, Func Offset: 0x4
	// Line 1011, Address: 0x29d558, Func Offset: 0x8
	// Line 1016, Address: 0x29d55c, Func Offset: 0xc
	// Line 1011, Address: 0x29d560, Func Offset: 0x10
	// Line 1013, Address: 0x29d56c, Func Offset: 0x1c
	// Line 1016, Address: 0x29d570, Func Offset: 0x20
	// Line 1017, Address: 0x29d574, Func Offset: 0x24
	// Line 1016, Address: 0x29d578, Func Offset: 0x28
	// Line 1017, Address: 0x29d584, Func Offset: 0x34
	// Line 1018, Address: 0x29d594, Func Offset: 0x44
	// Line 1026, Address: 0x29d59c, Func Offset: 0x4c
	// Line 1022, Address: 0x29d5a8, Func Offset: 0x58
	// Line 1026, Address: 0x29d5b8, Func Offset: 0x68
	// Line 1023, Address: 0x29d5c0, Func Offset: 0x70
	// Line 1027, Address: 0x29d5cc, Func Offset: 0x7c
	// Func End, Address: 0x29d5dc, Func Offset: 0x8c
}

// HAZ_Iterate__FPFR10zNMEHazardPv_bPvi
// Start address: 0x29d5e0
void HAZ_Iterate(uint8(*fp)(zNMEHazard&, void*), void* context, int32 flag_filter)
{
	zNMEHazard* haz;
	zNMEHazard* end;
	int32 rc;
	// Line 933, Address: 0x29d5e0, Func Offset: 0
	// Line 938, Address: 0x29d604, Func Offset: 0x24
	// Line 939, Address: 0x29d608, Func Offset: 0x28
	// Line 938, Address: 0x29d60c, Func Offset: 0x2c
	// Line 939, Address: 0x29d610, Func Offset: 0x30
	// Line 940, Address: 0x29d614, Func Offset: 0x34
	// Line 941, Address: 0x29d620, Func Offset: 0x40
	// Line 943, Address: 0x29d62c, Func Offset: 0x4c
	// Line 945, Address: 0x29d638, Func Offset: 0x58
	// Line 948, Address: 0x29d640, Func Offset: 0x60
	// Line 949, Address: 0x29d64c, Func Offset: 0x6c
	// Line 951, Address: 0x29d654, Func Offset: 0x74
	// Line 954, Address: 0x29d668, Func Offset: 0x88
	// Func End, Address: 0x29d688, Func Offset: 0xa8
}

// HAZ_Acquire__Fv
// Start address: 0x29d690
zNMEHazard* HAZ_Acquire()
{
	zNMEHazard* da_haz;
	int32 i;
	// Line 898, Address: 0x29d690, Func Offset: 0
	// Line 899, Address: 0x29d694, Func Offset: 0x4
	// Line 898, Address: 0x29d698, Func Offset: 0x8
	// Line 904, Address: 0x29d69c, Func Offset: 0xc
	// Line 898, Address: 0x29d6a0, Func Offset: 0x10
	// Line 904, Address: 0x29d6a4, Func Offset: 0x14
	// Line 906, Address: 0x29d6ac, Func Offset: 0x1c
	// Line 910, Address: 0x29d6bc, Func Offset: 0x2c
	// Line 911, Address: 0x29d6cc, Func Offset: 0x3c
	// Line 912, Address: 0x29d6d0, Func Offset: 0x40
	// Line 911, Address: 0x29d6d4, Func Offset: 0x44
	// Line 915, Address: 0x29d6d8, Func Offset: 0x48
	// Line 917, Address: 0x29d6e0, Func Offset: 0x50
	// Line 919, Address: 0x29d6e8, Func Offset: 0x58
	// Line 922, Address: 0x29d6f8, Func Offset: 0x68
	// Func End, Address: 0x29d708, Func Offset: 0x78
}

// RenderGenerally__10zMODHazardFi
// Start address: 0x29d710
void zMODHazard::RenderGenerally(int32 doOpaqueStuff)
{
	int32 i;
	st_XORDEREDARRAY* hazlist;
	_SDRenderState old_rendstat;
	zNMEHazard* haz;
	int32 resetBlend;
	int32 resetHDR;
	// Line 725, Address: 0x29d710, Func Offset: 0
	// Line 729, Address: 0x29d738, Func Offset: 0x28
	// Line 746, Address: 0x29d744, Func Offset: 0x34
	// Line 747, Address: 0x29d748, Func Offset: 0x38
	// Line 746, Address: 0x29d74c, Func Offset: 0x3c
	// Line 747, Address: 0x29d750, Func Offset: 0x40
	// Line 749, Address: 0x29d75c, Func Offset: 0x4c
	// Line 754, Address: 0x29d768, Func Offset: 0x58
	// Line 756, Address: 0x29d770, Func Offset: 0x60
	// Line 758, Address: 0x29d77c, Func Offset: 0x6c
	// Line 762, Address: 0x29d784, Func Offset: 0x74
	// Line 763, Address: 0x29d78c, Func Offset: 0x7c
	// Line 764, Address: 0x29d790, Func Offset: 0x80
	// Line 768, Address: 0x29d7a0, Func Offset: 0x90
	// Line 730, Address: 0x29d7b8, Func Offset: 0xa8
	// Line 768, Address: 0x29d7c0, Func Offset: 0xb0
	// Line 769, Address: 0x29d7c8, Func Offset: 0xb8
	// Line 770, Address: 0x29d7d8, Func Offset: 0xc8
	// Line 786, Address: 0x29d7e8, Func Offset: 0xd8
	// Line 787, Address: 0x29d808, Func Offset: 0xf8
	// Line 788, Address: 0x29d810, Func Offset: 0x100
	// Line 789, Address: 0x29d818, Func Offset: 0x108
	// Line 791, Address: 0x29d828, Func Offset: 0x118
	// Line 807, Address: 0x29d830, Func Offset: 0x120
	// Line 808, Address: 0x29d84c, Func Offset: 0x13c
	// Line 813, Address: 0x29d858, Func Offset: 0x148
	// Line 819, Address: 0x29d868, Func Offset: 0x158
	// Line 822, Address: 0x29d87c, Func Offset: 0x16c
	// Line 826, Address: 0x29d890, Func Offset: 0x180
	// Line 823, Address: 0x29d894, Func Offset: 0x184
	// Line 826, Address: 0x29d898, Func Offset: 0x188
	// Line 831, Address: 0x29d8a0, Func Offset: 0x190
	// Line 832, Address: 0x29d8b4, Func Offset: 0x1a4
	// Line 834, Address: 0x29d8f0, Func Offset: 0x1e0
	// Line 837, Address: 0x29d924, Func Offset: 0x214
	// Line 839, Address: 0x29d934, Func Offset: 0x224
	// Line 844, Address: 0x29d960, Func Offset: 0x250
	// Line 846, Address: 0x29d970, Func Offset: 0x260
	// Line 847, Address: 0x29d980, Func Offset: 0x270
	// Line 848, Address: 0x29d9a8, Func Offset: 0x298
	// Line 849, Address: 0x29d9b8, Func Offset: 0x2a8
	// Line 850, Address: 0x29d9e0, Func Offset: 0x2d0
	// Line 852, Address: 0x29d9e8, Func Offset: 0x2d8
	// Line 860, Address: 0x29da10, Func Offset: 0x300
	// Line 861, Address: 0x29da18, Func Offset: 0x308
	// Line 862, Address: 0x29da28, Func Offset: 0x318
	// Line 865, Address: 0x29da30, Func Offset: 0x320
	// Line 866, Address: 0x29da38, Func Offset: 0x328
	// Line 867, Address: 0x29da48, Func Offset: 0x338
	// Line 872, Address: 0x29da58, Func Offset: 0x348
	// Line 875, Address: 0x29da68, Func Offset: 0x358
	// Line 877, Address: 0x29da70, Func Offset: 0x360
	// Line 875, Address: 0x29da74, Func Offset: 0x364
	// Line 877, Address: 0x29da7c, Func Offset: 0x36c
	// Line 880, Address: 0x29da90, Func Offset: 0x380
	// Line 883, Address: 0x29da9c, Func Offset: 0x38c
	// Line 884, Address: 0x29daa8, Func Offset: 0x398
	// Line 889, Address: 0x29dab0, Func Offset: 0x3a0
	// Line 815, Address: 0x29dabc, Func Offset: 0x3ac
	// Line 889, Address: 0x29dac4, Func Offset: 0x3b4
	// Line 822, Address: 0x29dadc, Func Offset: 0x3cc
	// Line 889, Address: 0x29dae0, Func Offset: 0x3d0
	// Line 826, Address: 0x29daf4, Func Offset: 0x3e4
	// Line 889, Address: 0x29daf8, Func Offset: 0x3e8
	// Line 826, Address: 0x29dafc, Func Offset: 0x3ec
	// Line 861, Address: 0x29db10, Func Offset: 0x400
	// Line 889, Address: 0x29db1c, Func Offset: 0x40c
	// Line 883, Address: 0x29db34, Func Offset: 0x424
	// Line 889, Address: 0x29db40, Func Offset: 0x430
	// Line 890, Address: 0x29db4c, Func Offset: 0x43c
	// Func End, Address: 0x29db78, Func Offset: 0x468
}

// Timestep__10zMODHazardFf
// Start address: 0x29db80
void zMODHazard::Timestep(float32 dt)
{
	int32 verify;
	int32 skip_verify;
	st_XORDEREDARRAY* hazlist;
	int32 i;
	zNMEHazard* haz;
	int32 i;
	zNMEHazard* haz;
	int32 i;
	// Line 394, Address: 0x29db80, Func Offset: 0
	// Line 402, Address: 0x29dbb8, Func Offset: 0x38
	// Line 416, Address: 0x29dbc4, Func Offset: 0x44
	// Line 417, Address: 0x29dbcc, Func Offset: 0x4c
	// Line 418, Address: 0x29dbd4, Func Offset: 0x54
	// Line 420, Address: 0x29dbe0, Func Offset: 0x60
	// Line 422, Address: 0x29dbf0, Func Offset: 0x70
	// Line 423, Address: 0x29dbf8, Func Offset: 0x78
	// Line 424, Address: 0x29dc08, Func Offset: 0x88
	// Line 430, Address: 0x29dc18, Func Offset: 0x98
	// Line 431, Address: 0x29dc40, Func Offset: 0xc0
	// Line 436, Address: 0x29dc54, Func Offset: 0xd4
	// Line 437, Address: 0x29dc60, Func Offset: 0xe0
	// Line 438, Address: 0x29dccc, Func Offset: 0x14c
	// Line 445, Address: 0x29dcd4, Func Offset: 0x154
	// Line 449, Address: 0x29dcdc, Func Offset: 0x15c
	// Line 450, Address: 0x29dce8, Func Offset: 0x168
	// Line 451, Address: 0x29dda8, Func Offset: 0x228
	// Line 450, Address: 0x29ddb0, Func Offset: 0x230
	// Line 451, Address: 0x29ddb8, Func Offset: 0x238
	// Line 452, Address: 0x29ddcc, Func Offset: 0x24c
	// Line 458, Address: 0x29ddf0, Func Offset: 0x270
	// Line 459, Address: 0x29de00, Func Offset: 0x280
	// Line 470, Address: 0x29de08, Func Offset: 0x288
	// Line 474, Address: 0x29de20, Func Offset: 0x2a0
	// Line 491, Address: 0x29de38, Func Offset: 0x2b8
	// Line 494, Address: 0x29de44, Func Offset: 0x2c4
	// Line 495, Address: 0x29de64, Func Offset: 0x2e4
	// Line 496, Address: 0x29de70, Func Offset: 0x2f0
	// Line 499, Address: 0x29de80, Func Offset: 0x300
	// Line 500, Address: 0x29de8c, Func Offset: 0x30c
	// Line 514, Address: 0x29de94, Func Offset: 0x314
	// Line 515, Address: 0x29dea0, Func Offset: 0x320
	// Line 517, Address: 0x29df0c, Func Offset: 0x38c
	// Line 521, Address: 0x29df14, Func Offset: 0x394
	// Line 522, Address: 0x29df20, Func Offset: 0x3a0
	// Line 525, Address: 0x29df38, Func Offset: 0x3b8
	// Line 539, Address: 0x29df4c, Func Offset: 0x3cc
	// Line 559, Address: 0x29df54, Func Offset: 0x3d4
	// Line 561, Address: 0x29df68, Func Offset: 0x3e8
	// Line 566, Address: 0x29df8c, Func Offset: 0x40c
	// Line 567, Address: 0x29e1d8, Func Offset: 0x658
	// Line 568, Address: 0x29e1dc, Func Offset: 0x65c
	// Line 571, Address: 0x29e1f0, Func Offset: 0x670
	// Func End, Address: 0x29e22c, Func Offset: 0x6ac
}

// HAZ_ord_sorttest__FPvPv
// Start address: 0x29e230
int32 HAZ_ord_sorttest(void* vkey, void* vitem)
{
	zNMEHazard* key;
	zNMEHazard* item;
	// Line 381, Address: 0x29e230, Func Offset: 0
	// Line 382, Address: 0x29e238, Func Offset: 0x8
	// Line 384, Address: 0x29e244, Func Offset: 0x14
	// Line 385, Address: 0x29e250, Func Offset: 0x20
	// Line 387, Address: 0x29e258, Func Offset: 0x28
	// Line 390, Address: 0x29e264, Func Offset: 0x34
	// Func End, Address: 0x29e26c, Func Offset: 0x3c
}

// ScenePostInit__10zMODHazardFv
// Start address: 0x29e270
void zMODHazard::ScenePostInit()
{
	int32 i;
	// Line 297, Address: 0x29e270, Func Offset: 0
	// Line 298, Address: 0x29e280, Func Offset: 0x10
	// Line 297, Address: 0x29e284, Func Offset: 0x14
	// Line 298, Address: 0x29e288, Func Offset: 0x18
	// Line 299, Address: 0x29e2e8, Func Offset: 0x78
	// Line 300, Address: 0x29e31c, Func Offset: 0xac
	// Line 306, Address: 0x29e370, Func Offset: 0x100
	// Line 309, Address: 0x29e37c, Func Offset: 0x10c
	// Line 311, Address: 0x29e390, Func Offset: 0x120
	// Line 314, Address: 0x29e3a0, Func Offset: 0x130
	// Func End, Address: 0x29e3b8, Func Offset: 0x148
}

// SceneReset__10zMODHazardFv
// Start address: 0x29e3c0
void zMODHazard::SceneReset()
{
	int32 i;
	// Line 281, Address: 0x29e3c0, Func Offset: 0
	// Line 285, Address: 0x29e3d0, Func Offset: 0x10
	// Line 287, Address: 0x29e3e0, Func Offset: 0x20
	// Line 288, Address: 0x29e3e8, Func Offset: 0x28
	// Line 289, Address: 0x29e488, Func Offset: 0xc8
	// Line 291, Address: 0x29e498, Func Offset: 0xd8
	// Line 294, Address: 0x29e49c, Func Offset: 0xdc
	// Func End, Address: 0x29e4b0, Func Offset: 0xf0
}

// SceneFinish__10zMODHazardFv
// Start address: 0x29e4b0
void zMODHazard::SceneFinish()
{
	int32 i;
	// Line 258, Address: 0x29e4b0, Func Offset: 0
	// Line 260, Address: 0x29e4c0, Func Offset: 0x10
	// Line 263, Address: 0x29e4d0, Func Offset: 0x20
	// Line 266, Address: 0x29e4dc, Func Offset: 0x2c
	// Line 267, Address: 0x29e4f0, Func Offset: 0x40
	// Line 272, Address: 0x29e500, Func Offset: 0x50
	// Line 273, Address: 0x29e514, Func Offset: 0x64
	// Line 278, Address: 0x29e518, Func Offset: 0x68
	// Func End, Address: 0x29e52c, Func Offset: 0x7c
}

// ScenePrepare__10zMODHazardFv
// Start address: 0x29e530
void zMODHazard::ScenePrepare()
{
	int32 i;
	// Line 224, Address: 0x29e530, Func Offset: 0
	// Line 230, Address: 0x29e534, Func Offset: 0x4
	// Line 224, Address: 0x29e538, Func Offset: 0x8
	// Line 230, Address: 0x29e53c, Func Offset: 0xc
	// Line 224, Address: 0x29e540, Func Offset: 0x10
	// Line 230, Address: 0x29e544, Func Offset: 0x14
	// Line 232, Address: 0x29e554, Func Offset: 0x24
	// Line 239, Address: 0x29e560, Func Offset: 0x30
	// Line 234, Address: 0x29e564, Func Offset: 0x34
	// Line 239, Address: 0x29e568, Func Offset: 0x38
	// Line 240, Address: 0x29e570, Func Offset: 0x40
	// Line 244, Address: 0x29e5a0, Func Offset: 0x70
	// Line 247, Address: 0x29e5ac, Func Offset: 0x7c
	// Line 248, Address: 0x29e5c0, Func Offset: 0x90
	// Line 255, Address: 0x29e5d0, Func Offset: 0xa0
	// Func End, Address: 0x29e5e4, Func Offset: 0xb4
}

// ModulePrepUse__10zMODHazardFv
// Start address: 0x29e5f0
void zMODHazard::ModulePrepUse()
{
	// Line 217, Address: 0x29e5f0, Func Offset: 0
	// Line 219, Address: 0x29e5fc, Func Offset: 0xc
	// Line 217, Address: 0x29e604, Func Offset: 0x14
	// Line 219, Address: 0x29e610, Func Offset: 0x20
	// Func End, Address: 0x29e61c, Func Offset: 0x2c
}

// Render__10zMODHazardFv
// Start address: 0x2a6e40
void zMODHazard::Render()
{
	// Line 166, Address: 0x2a6e40, Func Offset: 0
	// Func End, Address: 0x2a6e48, Func Offset: 0x8
}

// PostRender__10zMODHazardFv
// Start address: 0x2a6e50
void zMODHazard::PostRender()
{
	// Line 167, Address: 0x2a6e50, Func Offset: 0
	// Func End, Address: 0x2a6e58, Func Offset: 0x8
}

