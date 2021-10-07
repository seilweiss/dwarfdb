



RpAtomic* xModelFindAtomic(uint32 id, uint32* actual_id);
RpAtomic* find_first_atomic(xModelAssetInfo* minf);
uint8 xModelIsPreinstanced(xModelInstance* model);
void xModelSetLightKit(xModelInstance* minst, xLightKit* lightKit);
int32 xModelCullSingle(xModelInstance* minst);
int32 xModelCullGroupPlusShadow(xModelInstance* minst, float32 shadowDepth, int32* shadowOutside);
int32 xModelCullGroup(xModelInstance* minst);
int32 xModelBoxCullPlusShadow(xBox* box, xVec3* shadowVec, int32* shadowOutside);
int32 xModelBoxCull(xBox* box);
int32 xModelSphereCullPlusShadow(xSphere* sphere, xVec3* shadowVec, int32* shadowOutside);
int32 xModelSphereCull(xSphere* sphere);
void xModelGetBoneLocationScaled(xVec3& loc, xModelInstance& model, uint32 index);
void xModelGetBoneMat(xMat4x3& mat, xModelInstance& model, uint32 index);
void xModelGetBoneLocation(xVec3& loc, xModelInstance& model, uint32 index);
void xModelAnimCollRefresh(xModelInstance& cm);
void xModelAnimCollStart(xModelInstance& m);
void xModel_SceneExit(RpWorld* world);
void xModel_SceneEnter(RpWorld* world);
void CameraDestroy(RwCamera* camera);
void xModelRender2D(xModelInstance& model, basic_rect& r, xVec3& from, xVec3& to);
void xModelRender(xModelInstance* modelInst);
void xModelRenderSingle(xModelInstance* modelInst);
void xModelEval(xModelInstance* modelInst);
void xModelEvalSingle(xModelInstance* modelInst, xBox* combinedAnimBound);
void xModelUpdate(xModelInstance* modelInst, float32 timeDelta);
void xModelInstanceUpgradeBrotherShared(xModelInstance* inst, uint32 flags);
void xModelInstanceAttach(xModelInstance* inst, xModelInstance* parent);
void xModelInstanceFree(xModelInstance* modelInst);
xModelInstance* xModelInstanceAllocReuse(RpAtomic* data, void* object, uint16 flags, uint8 boneIndex, uint8* boneRemap, xModelInstance* reuse_instance);
void xModelPoolInit(uint32 count, uint32 numMatrices);
void xModelInitOnce();
void xModelInit();
xModelPipe xModelGetPipe(RpAtomic* model);

// xModelFindAtomic__FUiPUi
// Start address: 0x408480
RpAtomic* xModelFindAtomic(uint32 id, uint32* actual_id)
{
	RpAtomic* atomic;
	uint32 aid;
	xModelAssetInfo* minf;
	// Line 2011, Address: 0x408480, Func Offset: 0
	// Line 2012, Address: 0x4084a0, Func Offset: 0x20
	// Line 2017, Address: 0x4084a4, Func Offset: 0x24
	// Line 2039, Address: 0x4084ac, Func Offset: 0x2c
	// Line 2040, Address: 0x4084b8, Func Offset: 0x38
	// Line 2041, Address: 0x4084bc, Func Offset: 0x3c
	// Line 2021, Address: 0x4084d0, Func Offset: 0x50
	// Line 2041, Address: 0x4084d4, Func Offset: 0x54
	// Line 2026, Address: 0x4084e0, Func Offset: 0x60
	// Line 2041, Address: 0x4084e4, Func Offset: 0x64
	// Line 2026, Address: 0x4084ec, Func Offset: 0x6c
	// Line 2027, Address: 0x4084f0, Func Offset: 0x70
	// Line 2041, Address: 0x4084f4, Func Offset: 0x74
	// Line 2027, Address: 0x4084fc, Func Offset: 0x7c
	// Line 2041, Address: 0x408500, Func Offset: 0x80
	// Line 2032, Address: 0x40850c, Func Offset: 0x8c
	// Line 2041, Address: 0x408510, Func Offset: 0x90
	// Line 2032, Address: 0x408518, Func Offset: 0x98
	// Line 2033, Address: 0x40851c, Func Offset: 0x9c
	// Line 2041, Address: 0x408520, Func Offset: 0xa0
	// Line 2042, Address: 0x408540, Func Offset: 0xc0
	// Func End, Address: 0x40855c, Func Offset: 0xdc
}

// find_first_atomic__19@unnamed@xWad3_cpp@FP15xModelAssetInfo
// Start address: 0x408560
RpAtomic* find_first_atomic(xModelAssetInfo* minf)
{
	xModelAssetInst* inst;
	xModelAssetInst* end_inst;
	void* data;
	RpAtomic* child_atomic;
	// Line 1984, Address: 0x408560, Func Offset: 0
	// Line 1988, Address: 0x408570, Func Offset: 0x10
	// Line 1987, Address: 0x408574, Func Offset: 0x14
	// Line 1988, Address: 0x408578, Func Offset: 0x18
	// Line 1989, Address: 0x408588, Func Offset: 0x28
	// Line 1991, Address: 0x408594, Func Offset: 0x34
	// Line 2004, Address: 0x40859c, Func Offset: 0x3c
	// Line 2006, Address: 0x4085b8, Func Offset: 0x58
	// Line 1993, Address: 0x4085c8, Func Offset: 0x68
	// Line 2006, Address: 0x4085cc, Func Offset: 0x6c
	// Line 1996, Address: 0x4085d8, Func Offset: 0x78
	// Line 2006, Address: 0x4085e0, Func Offset: 0x80
	// Line 2007, Address: 0x4085f8, Func Offset: 0x98
	// Func End, Address: 0x40860c, Func Offset: 0xac
}

// xModelIsPreinstanced__FP14xModelInstance
// Start address: 0x408610
uint8 xModelIsPreinstanced(xModelInstance* model)
{
	RpGeometry* geom;
	RpMorphTarget* mt;
	// Line 1976, Address: 0x408610, Func Offset: 0
	// Line 1977, Address: 0x408618, Func Offset: 0x8
	// Line 1978, Address: 0x408620, Func Offset: 0x10
	// Line 1979, Address: 0x408624, Func Offset: 0x14
	// Line 1977, Address: 0x408648, Func Offset: 0x38
	// Line 1980, Address: 0x40864c, Func Offset: 0x3c
	// Func End, Address: 0x408654, Func Offset: 0x44
}

// xModelSetLightKit__FP14xModelInstanceP9xLightKit
// Start address: 0x408660
void xModelSetLightKit(xModelInstance* minst, xLightKit* lightKit)
{
	// Line 1933, Address: 0x408660, Func Offset: 0
	// Line 1934, Address: 0x408668, Func Offset: 0x8
	// Line 1936, Address: 0x408678, Func Offset: 0x18
	// Line 1937, Address: 0x408680, Func Offset: 0x20
	// Line 1938, Address: 0x408684, Func Offset: 0x24
	// Line 1939, Address: 0x408688, Func Offset: 0x28
	// Line 1940, Address: 0x40868c, Func Offset: 0x2c
	// Line 1941, Address: 0x408698, Func Offset: 0x38
	// Func End, Address: 0x4086a0, Func Offset: 0x40
}

// xModelCullSingle__FP14xModelInstance
// Start address: 0x4086a0
int32 xModelCullSingle(xModelInstance* minst)
{
	int32 result;
	// Line 1918, Address: 0x4086a0, Func Offset: 0
	// Line 1919, Address: 0x4086b0, Func Offset: 0x10
	// Line 1920, Address: 0x4086bc, Func Offset: 0x1c
	// Line 1921, Address: 0x4086c8, Func Offset: 0x28
	// Line 1924, Address: 0x4086d0, Func Offset: 0x30
	// Line 1926, Address: 0x4086ec, Func Offset: 0x4c
	// Line 1928, Address: 0x408714, Func Offset: 0x74
	// Func End, Address: 0x408728, Func Offset: 0x88
}

// xModelCullGroupPlusShadow__FP14xModelInstancefPi
// Start address: 0x408730
int32 xModelCullGroupPlusShadow(xModelInstance* minst, float32 shadowDepth, int32* shadowOutside)
{
	xVec3 shadVec;
	xBox* bbox;
	// Line 1898, Address: 0x408730, Func Offset: 0
	// Line 1900, Address: 0x408740, Func Offset: 0x10
	// Line 1902, Address: 0x40874c, Func Offset: 0x1c
	// Line 1905, Address: 0x408758, Func Offset: 0x28
	// Line 1902, Address: 0x40875c, Func Offset: 0x2c
	// Line 1901, Address: 0x408760, Func Offset: 0x30
	// Line 1903, Address: 0x408764, Func Offset: 0x34
	// Line 1905, Address: 0x408768, Func Offset: 0x38
	// Line 1902, Address: 0x40876c, Func Offset: 0x3c
	// Line 1903, Address: 0x408778, Func Offset: 0x48
	// Line 1904, Address: 0x40879c, Func Offset: 0x6c
	// Line 1905, Address: 0x4087ac, Func Offset: 0x7c
	// Line 1907, Address: 0x4087bc, Func Offset: 0x8c
	// Line 1908, Address: 0x4087c0, Func Offset: 0x90
	// Line 1907, Address: 0x4087c8, Func Offset: 0x98
	// Line 1908, Address: 0x4087d0, Func Offset: 0xa0
	// Line 1909, Address: 0x4087e0, Func Offset: 0xb0
	// Line 1910, Address: 0x4087ec, Func Offset: 0xbc
	// Line 1913, Address: 0x40880c, Func Offset: 0xdc
	// Func End, Address: 0x40881c, Func Offset: 0xec
}

// xModelCullGroup__FP14xModelInstance
// Start address: 0x408820
int32 xModelCullGroup(xModelInstance* minst)
{
	// Line 1887, Address: 0x408820, Func Offset: 0
	// Line 1888, Address: 0x408828, Func Offset: 0x8
	// Line 1889, Address: 0x408834, Func Offset: 0x14
	// Line 1891, Address: 0x408844, Func Offset: 0x24
	// Line 1893, Address: 0x40886c, Func Offset: 0x4c
	// Func End, Address: 0x408878, Func Offset: 0x58
}

// xModelBoxCullPlusShadow__FP4xBoxP5xVec3Pi
// Start address: 0x408880
int32 xModelBoxCullPlusShadow(xBox* box, xVec3* shadowVec, int32* shadowOutside)
{
	RwFrustumPlane* frustumPlane;
	int32 numPlanes;
	RwCamera* camera;
	float32 nearDot;
	float32 centerX;
	float32 centerY;
	float32 centerZ;
	float32 sizeX;
	float32 sizeY;
	float32 sizeZ;
	float32 centerDot;
	float32 shadowDot;
	float32 centerDot;
	// Line 1776, Address: 0x408880, Func Offset: 0
	// Line 1782, Address: 0x40888c, Func Offset: 0xc
	// Line 1788, Address: 0x4088ac, Func Offset: 0x2c
	// Line 1797, Address: 0x4088b4, Func Offset: 0x34
	// Line 1788, Address: 0x4088b8, Func Offset: 0x38
	// Line 1798, Address: 0x4088bc, Func Offset: 0x3c
	// Line 1788, Address: 0x4088c0, Func Offset: 0x40
	// Line 1799, Address: 0x4088c4, Func Offset: 0x44
	// Line 1789, Address: 0x4088c8, Func Offset: 0x48
	// Line 1788, Address: 0x4088cc, Func Offset: 0x4c
	// Line 1791, Address: 0x4088d0, Func Offset: 0x50
	// Line 1788, Address: 0x4088d4, Func Offset: 0x54
	// Line 1791, Address: 0x4088d8, Func Offset: 0x58
	// Line 1789, Address: 0x4088dc, Func Offset: 0x5c
	// Line 1792, Address: 0x4088e0, Func Offset: 0x60
	// Line 1789, Address: 0x4088e4, Func Offset: 0x64
	// Line 1792, Address: 0x4088ec, Func Offset: 0x6c
	// Line 1790, Address: 0x4088f0, Func Offset: 0x70
	// Line 1793, Address: 0x4088f4, Func Offset: 0x74
	// Line 1790, Address: 0x4088f8, Func Offset: 0x78
	// Line 1799, Address: 0x4088fc, Func Offset: 0x7c
	// Line 1802, Address: 0x408904, Func Offset: 0x84
	// Line 1799, Address: 0x408908, Func Offset: 0x88
	// Line 1805, Address: 0x408914, Func Offset: 0x94
	// Line 1802, Address: 0x408918, Func Offset: 0x98
	// Line 1805, Address: 0x408924, Func Offset: 0xa4
	// Line 1809, Address: 0x408928, Func Offset: 0xa8
	// Line 1813, Address: 0x408948, Func Offset: 0xc8
	// Line 1820, Address: 0x408954, Func Offset: 0xd4
	// Line 1821, Address: 0x408958, Func Offset: 0xd8
	// Line 1824, Address: 0x408960, Func Offset: 0xe0
	// Line 1825, Address: 0x408964, Func Offset: 0xe4
	// Line 1783, Address: 0x40896c, Func Offset: 0xec
	// Line 1825, Address: 0x408974, Func Offset: 0xf4
	// Line 1833, Address: 0x408980, Func Offset: 0x100
	// Line 1836, Address: 0x408994, Func Offset: 0x114
	// Line 1837, Address: 0x408998, Func Offset: 0x118
	// Line 1846, Address: 0x4089a4, Func Offset: 0x124
	// Line 1845, Address: 0x4089a8, Func Offset: 0x128
	// Line 1846, Address: 0x4089ac, Func Offset: 0x12c
	// Line 1849, Address: 0x4089c0, Func Offset: 0x140
	// Line 1852, Address: 0x4089d0, Func Offset: 0x150
	// Line 1855, Address: 0x4089d4, Func Offset: 0x154
	// Line 1858, Address: 0x4089e0, Func Offset: 0x160
	// Line 1862, Address: 0x4089e4, Func Offset: 0x164
	// Line 1866, Address: 0x408a04, Func Offset: 0x184
	// Line 1869, Address: 0x408a1c, Func Offset: 0x19c
	// Line 1841, Address: 0x408a24, Func Offset: 0x1a4
	// Line 1872, Address: 0x408a2c, Func Offset: 0x1ac
	// Line 1871, Address: 0x408a30, Func Offset: 0x1b0
	// Line 1872, Address: 0x408a34, Func Offset: 0x1b4
	// Line 1875, Address: 0x408a40, Func Offset: 0x1c0
	// Line 1876, Address: 0x408a44, Func Offset: 0x1c4
	// Line 1877, Address: 0x408a48, Func Offset: 0x1c8
	// Func End, Address: 0x408a50, Func Offset: 0x1d0
}

// xModelBoxCull__FP4xBox
// Start address: 0x408a50
int32 xModelBoxCull(xBox* box)
{
	RwFrustumPlane* frustumPlane;
	int32 numPlanes;
	RwFrustumTestResult result;
	float32 centerX;
	float32 centerY;
	float32 centerZ;
	float32 sizeX;
	float32 sizeY;
	float32 sizeZ;
	float32 centerDot;
	float32 nearDot;
	// Line 1712, Address: 0x408a50, Func Offset: 0
	// Line 1721, Address: 0x408a54, Func Offset: 0x4
	// Line 1712, Address: 0x408a58, Func Offset: 0x8
	// Line 1730, Address: 0x408a5c, Func Offset: 0xc
	// Line 1721, Address: 0x408a60, Func Offset: 0x10
	// Line 1733, Address: 0x408a68, Func Offset: 0x18
	// Line 1721, Address: 0x408a70, Func Offset: 0x20
	// Line 1722, Address: 0x408a74, Func Offset: 0x24
	// Line 1721, Address: 0x408a78, Func Offset: 0x28
	// Line 1734, Address: 0x408a80, Func Offset: 0x30
	// Line 1735, Address: 0x408a84, Func Offset: 0x34
	// Line 1724, Address: 0x408a88, Func Offset: 0x38
	// Line 1722, Address: 0x408a90, Func Offset: 0x40
	// Line 1725, Address: 0x408a9c, Func Offset: 0x4c
	// Line 1733, Address: 0x408aa0, Func Offset: 0x50
	// Line 1725, Address: 0x408aa4, Func Offset: 0x54
	// Line 1723, Address: 0x408aa8, Func Offset: 0x58
	// Line 1726, Address: 0x408ab0, Func Offset: 0x60
	// Line 1735, Address: 0x408ab4, Func Offset: 0x64
	// Line 1758, Address: 0x408abc, Func Offset: 0x6c
	// Line 1735, Address: 0x408ac0, Func Offset: 0x70
	// Line 1741, Address: 0x408acc, Func Offset: 0x7c
	// Line 1738, Address: 0x408ad0, Func Offset: 0x80
	// Line 1741, Address: 0x408adc, Func Offset: 0x8c
	// Line 1745, Address: 0x408ae0, Func Offset: 0x90
	// Line 1749, Address: 0x408b00, Func Offset: 0xb0
	// Line 1753, Address: 0x408b1c, Func Offset: 0xcc
	// Line 1755, Address: 0x408b24, Func Offset: 0xd4
	// Line 1758, Address: 0x408b34, Func Offset: 0xe4
	// Line 1763, Address: 0x408b38, Func Offset: 0xe8
	// Line 1762, Address: 0x408b3c, Func Offset: 0xec
	// Line 1763, Address: 0x408b40, Func Offset: 0xf0
	// Line 1765, Address: 0x408b48, Func Offset: 0xf8
	// Line 1766, Address: 0x408b4c, Func Offset: 0xfc
	// Func End, Address: 0x408b54, Func Offset: 0x104
}

// xModelSphereCullPlusShadow__FP7xSphereP5xVec3Pi
// Start address: 0x408b60
int32 xModelSphereCullPlusShadow(xSphere* sphere, xVec3* shadowVec, int32* shadowOutside)
{
	RwSphere* worldsph;
	RwFrustumPlane* frustumPlane;
	int32 numPlanes;
	float32 nDot;
	float32 nDot;
	float32 sDot;
	// Line 1651, Address: 0x408b60, Func Offset: 0
	// Line 1652, Address: 0x408b68, Func Offset: 0x8
	// Line 1651, Address: 0x408b6c, Func Offset: 0xc
	// Line 1653, Address: 0x408b70, Func Offset: 0x10
	// Line 1655, Address: 0x408b88, Func Offset: 0x28
	// Line 1653, Address: 0x408b90, Func Offset: 0x30
	// Line 1655, Address: 0x408b94, Func Offset: 0x34
	// Line 1656, Address: 0x408b98, Func Offset: 0x38
	// Line 1655, Address: 0x408b9c, Func Offset: 0x3c
	// Line 1656, Address: 0x408ba8, Func Offset: 0x48
	// Line 1658, Address: 0x408bac, Func Offset: 0x4c
	// Line 1665, Address: 0x408bb8, Func Offset: 0x58
	// Line 1666, Address: 0x408bbc, Func Offset: 0x5c
	// Line 1669, Address: 0x408bc8, Func Offset: 0x68
	// Line 1670, Address: 0x408bcc, Func Offset: 0x6c
	// Line 1678, Address: 0x408be0, Func Offset: 0x80
	// Line 1679, Address: 0x408bf4, Func Offset: 0x94
	// Line 1680, Address: 0x408bf8, Func Offset: 0x98
	// Line 1689, Address: 0x408c04, Func Offset: 0xa4
	// Line 1688, Address: 0x408c08, Func Offset: 0xa8
	// Line 1689, Address: 0x408c0c, Func Offset: 0xac
	// Line 1691, Address: 0x408c20, Func Offset: 0xc0
	// Line 1692, Address: 0x408c30, Func Offset: 0xd0
	// Line 1693, Address: 0x408c34, Func Offset: 0xd4
	// Line 1695, Address: 0x408c38, Func Offset: 0xd8
	// Line 1693, Address: 0x408c3c, Func Offset: 0xdc
	// Line 1695, Address: 0x408c44, Func Offset: 0xe4
	// Line 1697, Address: 0x408c58, Func Offset: 0xf8
	// Line 1698, Address: 0x408c5c, Func Offset: 0xfc
	// Line 1701, Address: 0x408c64, Func Offset: 0x104
	// Line 1700, Address: 0x408c68, Func Offset: 0x108
	// Line 1701, Address: 0x408c6c, Func Offset: 0x10c
	// Line 1704, Address: 0x408c78, Func Offset: 0x118
	// Line 1705, Address: 0x408c7c, Func Offset: 0x11c
	// Line 1706, Address: 0x408c88, Func Offset: 0x128
	// Func End, Address: 0x408c90, Func Offset: 0x130
}

// xModelSphereCull__FP7xSphere
// Start address: 0x408c90
int32 xModelSphereCull(xSphere* sphere)
{
	// Line 1627, Address: 0x408c90, Func Offset: 0
	// Line 1633, Address: 0x408c9c, Func Offset: 0xc
	// Line 1635, Address: 0x408ca8, Func Offset: 0x18
	// Line 1633, Address: 0x408cac, Func Offset: 0x1c
	// Line 1635, Address: 0x408cb4, Func Offset: 0x24
	// Func End, Address: 0x408cbc, Func Offset: 0x2c
}

// xModelGetBoneLocationScaled__FR5xVec3RC14xModelInstanceUi
// Start address: 0x408cc0
void xModelGetBoneLocationScaled(xVec3& loc, xModelInstance& model, uint32 index)
{
	xMat4x3 temp_mat;
	xMat4x3* root_mat;
	xMat4x3& anim_mat;
	// Line 1567, Address: 0x408cc0, Func Offset: 0
	// Line 1570, Address: 0x408cc4, Func Offset: 0x4
	// Line 1571, Address: 0x408cc8, Func Offset: 0x8
	// Line 1573, Address: 0x408cdc, Func Offset: 0x1c
	// Line 1574, Address: 0x408d50, Func Offset: 0x90
	// Line 1575, Address: 0x408d60, Func Offset: 0xa0
	// Line 1574, Address: 0x408d64, Func Offset: 0xa4
	// Line 1577, Address: 0x408d6c, Func Offset: 0xac
	// Line 1581, Address: 0x408da0, Func Offset: 0xe0
	// Line 1583, Address: 0x408df0, Func Offset: 0x130
	// Func End, Address: 0x408df8, Func Offset: 0x138
}

// xModelGetBoneMat__FR7xMat4x3RC14xModelInstanceUi
// Start address: 0x408e00
void xModelGetBoneMat(xMat4x3& mat, xModelInstance& model, uint32 index)
{
	xMat4x3& root_mat;
	// Line 1554, Address: 0x408e00, Func Offset: 0
	// Line 1557, Address: 0x408e08, Func Offset: 0x8
	// Line 1564, Address: 0x408e90, Func Offset: 0x90
	// Line 1561, Address: 0x408e98, Func Offset: 0x98
	// Line 1564, Address: 0x408e9c, Func Offset: 0x9c
	// Func End, Address: 0x408eb8, Func Offset: 0xb8
}

// xModelGetBoneLocation__FR5xVec3RC14xModelInstanceUi
// Start address: 0x408ec0
void xModelGetBoneLocation(xVec3& loc, xModelInstance& model, uint32 index)
{
	xMat4x3& root_mat;
	xMat4x3& anim_mat;
	// Line 1530, Address: 0x408ec0, Func Offset: 0
	// Line 1534, Address: 0x408ec4, Func Offset: 0x4
	// Line 1535, Address: 0x408ec8, Func Offset: 0x8
	// Line 1536, Address: 0x408ed0, Func Offset: 0x10
	// Line 1538, Address: 0x408eec, Func Offset: 0x2c
	// Line 1539, Address: 0x408f40, Func Offset: 0x80
	// Func End, Address: 0x408f48, Func Offset: 0x88
}

// xModelAnimCollRefresh__FRC14xModelInstance
// Start address: 0x408f50
void xModelAnimCollRefresh(xModelInstance& cm)
{
	uint32 size;
	xMat4x3& mat;
	xMat4x3 old_mat;
	// Line 1516, Address: 0x408f50, Func Offset: 0
	// Line 1519, Address: 0x408f6c, Func Offset: 0x1c
	// Line 1522, Address: 0x408f78, Func Offset: 0x28
	// Line 1520, Address: 0x408f7c, Func Offset: 0x2c
	// Line 1522, Address: 0x408f80, Func Offset: 0x30
	// Line 1521, Address: 0x408fa8, Func Offset: 0x58
	// Line 1522, Address: 0x408fac, Func Offset: 0x5c
	// Line 1521, Address: 0x408fb4, Func Offset: 0x64
	// Line 1522, Address: 0x408fb8, Func Offset: 0x68
	// Line 1521, Address: 0x408fbc, Func Offset: 0x6c
	// Line 1522, Address: 0x408fc4, Func Offset: 0x74
	// Line 1524, Address: 0x408fcc, Func Offset: 0x7c
	// Line 1521, Address: 0x408fd0, Func Offset: 0x80
	// Line 1524, Address: 0x408fd8, Func Offset: 0x88
	// Line 1522, Address: 0x408fdc, Func Offset: 0x8c
	// Line 1521, Address: 0x408fe0, Func Offset: 0x90
	// Line 1522, Address: 0x408fe4, Func Offset: 0x94
	// Line 1521, Address: 0x408fe8, Func Offset: 0x98
	// Line 1524, Address: 0x408fec, Func Offset: 0x9c
	// Line 1522, Address: 0x408ff8, Func Offset: 0xa8
	// Line 1524, Address: 0x409014, Func Offset: 0xc4
	// Line 1522, Address: 0x409018, Func Offset: 0xc8
	// Line 1524, Address: 0x409070, Func Offset: 0x120
	// Line 1525, Address: 0x409078, Func Offset: 0x128
	// Line 1526, Address: 0x4090e4, Func Offset: 0x194
	// Line 1525, Address: 0x4090e8, Func Offset: 0x198
	// Line 1526, Address: 0x4090f8, Func Offset: 0x1a8
	// Line 1525, Address: 0x4090fc, Func Offset: 0x1ac
	// Line 1526, Address: 0x409100, Func Offset: 0x1b0
	// Line 1527, Address: 0x409104, Func Offset: 0x1b4
	// Func End, Address: 0x409124, Func Offset: 0x1d4
}

// xModelAnimCollStart__FR14xModelInstance
// Start address: 0x409130
void xModelAnimCollStart(xModelInstance& m)
{
	uint32 size;
	// Line 1504, Address: 0x409130, Func Offset: 0
	// Line 1505, Address: 0x409134, Func Offset: 0x4
	// Line 1504, Address: 0x409138, Func Offset: 0x8
	// Line 1505, Address: 0x409140, Func Offset: 0x10
	// Line 1506, Address: 0x409150, Func Offset: 0x20
	// Line 1513, Address: 0x40915c, Func Offset: 0x2c
	// Line 1510, Address: 0x409178, Func Offset: 0x48
	// Line 1513, Address: 0x40917c, Func Offset: 0x4c
	// Line 1510, Address: 0x409180, Func Offset: 0x50
	// Line 1513, Address: 0x409184, Func Offset: 0x54
	// Func End, Address: 0x4091a4, Func Offset: 0x74
}

// xModel_SceneExit__FP7RpWorld
// Start address: 0x4091b0
void xModel_SceneExit(RpWorld* world)
{
	// Line 1496, Address: 0x4091b0, Func Offset: 0
	// Func End, Address: 0x4091b8, Func Offset: 0x8
}

// xModel_SceneEnter__FP7RpWorld
// Start address: 0x4091c0
void xModel_SceneEnter(RpWorld* world)
{
	// Line 1484, Address: 0x4091c0, Func Offset: 0
	// Func End, Address: 0x4091c8, Func Offset: 0x8
}

// CameraDestroy__FP8RwCamera
// Start address: 0x4091d0
void CameraDestroy(RwCamera* camera)
{
	RwRaster* raster;
	RwFrame* frame;
	// Line 1405, Address: 0x4091d0, Func Offset: 0
	// Line 1406, Address: 0x4091e0, Func Offset: 0x10
	// Line 1413, Address: 0x4091e8, Func Offset: 0x18
	// Line 1415, Address: 0x4091f0, Func Offset: 0x20
	// Line 1416, Address: 0x4091f4, Func Offset: 0x24
	// Line 1418, Address: 0x4091fc, Func Offset: 0x2c
	// Line 1420, Address: 0x409204, Func Offset: 0x34
	// Line 1423, Address: 0x409214, Func Offset: 0x44
	// Line 1424, Address: 0x409218, Func Offset: 0x48
	// Line 1426, Address: 0x409220, Func Offset: 0x50
	// Line 1428, Address: 0x409228, Func Offset: 0x58
	// Line 1431, Address: 0x40922c, Func Offset: 0x5c
	// Line 1432, Address: 0x409230, Func Offset: 0x60
	// Line 1434, Address: 0x409238, Func Offset: 0x68
	// Line 1436, Address: 0x409240, Func Offset: 0x70
	// Line 1439, Address: 0x409244, Func Offset: 0x74
	// Line 1443, Address: 0x40924c, Func Offset: 0x7c
	// Func End, Address: 0x409260, Func Offset: 0x90
}

// xModelRender2D__FRC14xModelInstanceRC13basic_rect<f>RC5xVec3RC5xVec3
// Start address: 0x409260
void xModelRender2D(xModelInstance& model, basic_rect& r, xVec3& from, xVec3& to)
{
	RwCamera* camera;
	RwMatrixTag* cammat;
	xMat4x3 objmat;
	xMat4x3 shearmat;
	xMat4x3 temp1;
	xMat4x3 temp2;
	RwV2d* camvw;
	float32 viewscale;
	float32 shearX;
	float32 shearY;
	xMat4x3 objmat1;
	// Line 1197, Address: 0x409260, Func Offset: 0
	// Line 1206, Address: 0x409270, Func Offset: 0x10
	// Line 1197, Address: 0x409274, Func Offset: 0x14
	// Line 1206, Address: 0x409294, Func Offset: 0x34
	// Line 1211, Address: 0x4092fc, Func Offset: 0x9c
	// Line 1213, Address: 0x409304, Func Offset: 0xa4
	// Line 1216, Address: 0x40930c, Func Offset: 0xac
	// Line 1213, Address: 0x409310, Func Offset: 0xb0
	// Line 1216, Address: 0x409314, Func Offset: 0xb4
	// Line 1217, Address: 0x40934c, Func Offset: 0xec
	// Line 1220, Address: 0x409358, Func Offset: 0xf8
	// Line 1238, Address: 0x40935c, Func Offset: 0xfc
	// Line 1220, Address: 0x409360, Func Offset: 0x100
	// Line 1218, Address: 0x409364, Func Offset: 0x104
	// Line 1220, Address: 0x409368, Func Offset: 0x108
	// Line 1219, Address: 0x40936c, Func Offset: 0x10c
	// Line 1220, Address: 0x409370, Func Offset: 0x110
	// Line 1221, Address: 0x409374, Func Offset: 0x114
	// Line 1220, Address: 0x409378, Func Offset: 0x118
	// Line 1239, Address: 0x40937c, Func Offset: 0x11c
	// Line 1220, Address: 0x409380, Func Offset: 0x120
	// Line 1279, Address: 0x409384, Func Offset: 0x124
	// Line 1218, Address: 0x409388, Func Offset: 0x128
	// Line 1279, Address: 0x40938c, Func Offset: 0x12c
	// Line 1220, Address: 0x409390, Func Offset: 0x130
	// Line 1279, Address: 0x409394, Func Offset: 0x134
	// Line 1220, Address: 0x409398, Func Offset: 0x138
	// Line 1236, Address: 0x4093b4, Func Offset: 0x154
	// Line 1239, Address: 0x4093b8, Func Offset: 0x158
	// Line 1240, Address: 0x4093bc, Func Offset: 0x15c
	// Line 1236, Address: 0x4093c4, Func Offset: 0x164
	// Line 1240, Address: 0x4093c8, Func Offset: 0x168
	// Line 1239, Address: 0x4093cc, Func Offset: 0x16c
	// Line 1238, Address: 0x4093d0, Func Offset: 0x170
	// Line 1239, Address: 0x4093d4, Func Offset: 0x174
	// Line 1240, Address: 0x4093dc, Func Offset: 0x17c
	// Line 1250, Address: 0x4093e4, Func Offset: 0x184
	// Line 1238, Address: 0x4093e8, Func Offset: 0x188
	// Line 1243, Address: 0x4093ec, Func Offset: 0x18c
	// Line 1244, Address: 0x4093f0, Func Offset: 0x190
	// Line 1245, Address: 0x4093f4, Func Offset: 0x194
	// Line 1247, Address: 0x4093f8, Func Offset: 0x198
	// Line 1251, Address: 0x4093fc, Func Offset: 0x19c
	// Line 1238, Address: 0x409400, Func Offset: 0x1a0
	// Line 1252, Address: 0x409404, Func Offset: 0x1a4
	// Line 1253, Address: 0x409408, Func Offset: 0x1a8
	// Line 1254, Address: 0x40940c, Func Offset: 0x1ac
	// Line 1239, Address: 0x409410, Func Offset: 0x1b0
	// Line 1240, Address: 0x409414, Func Offset: 0x1b4
	// Line 1239, Address: 0x409418, Func Offset: 0x1b8
	// Line 1240, Address: 0x40941c, Func Offset: 0x1bc
	// Line 1239, Address: 0x409420, Func Offset: 0x1c0
	// Line 1240, Address: 0x409424, Func Offset: 0x1c4
	// Line 1242, Address: 0x409428, Func Offset: 0x1c8
	// Line 1246, Address: 0x40942c, Func Offset: 0x1cc
	// Line 1248, Address: 0x409430, Func Offset: 0x1d0
	// Line 1279, Address: 0x409434, Func Offset: 0x1d4
	// Line 1280, Address: 0x40943c, Func Offset: 0x1dc
	// Line 1281, Address: 0x40944c, Func Offset: 0x1ec
	// Line 1286, Address: 0x409460, Func Offset: 0x200
	// Line 1288, Address: 0x409474, Func Offset: 0x214
	// Line 1289, Address: 0x409478, Func Offset: 0x218
	// Line 1298, Address: 0x40947c, Func Offset: 0x21c
	// Line 1299, Address: 0x409480, Func Offset: 0x220
	// Line 1298, Address: 0x409484, Func Offset: 0x224
	// Line 1299, Address: 0x409488, Func Offset: 0x228
	// Line 1298, Address: 0x40948c, Func Offset: 0x22c
	// Line 1299, Address: 0x409490, Func Offset: 0x230
	// Line 1298, Address: 0x409494, Func Offset: 0x234
	// Line 1299, Address: 0x4094d0, Func Offset: 0x270
	// Line 1303, Address: 0x4094d8, Func Offset: 0x278
	// Line 1305, Address: 0x4094dc, Func Offset: 0x27c
	// Line 1309, Address: 0x4094ec, Func Offset: 0x28c
	// Line 1303, Address: 0x4094f0, Func Offset: 0x290
	// Line 1305, Address: 0x409570, Func Offset: 0x310
	// Line 1309, Address: 0x4095e0, Func Offset: 0x380
	// Line 1310, Address: 0x4095e8, Func Offset: 0x388
	// Line 1311, Address: 0x409668, Func Offset: 0x408
	// Line 1294, Address: 0x409670, Func Offset: 0x410
	// Line 1311, Address: 0x409688, Func Offset: 0x428
	// Func End, Address: 0x4096ac, Func Offset: 0x44c
}

// xModelRender__FP14xModelInstance
// Start address: 0x4096b0
void xModelRender(xModelInstance* modelInst)
{
	// Line 1019, Address: 0x4096b0, Func Offset: 0
	// Line 1022, Address: 0x4096c0, Func Offset: 0x10
	// Line 1023, Address: 0x4096c8, Func Offset: 0x18
	// Line 1024, Address: 0x4096d4, Func Offset: 0x24
	// Line 1026, Address: 0x4096e8, Func Offset: 0x38
	// Line 1027, Address: 0x4096f0, Func Offset: 0x40
	// Line 1028, Address: 0x4096f4, Func Offset: 0x44
	// Line 1031, Address: 0x409700, Func Offset: 0x50
	// Func End, Address: 0x409710, Func Offset: 0x60
}

// xModelRenderSingle__FP14xModelInstance
// Start address: 0x409710
void xModelRenderSingle(xModelInstance* modelInst)
{
	uint8 reset;
	xMat3x3 tmpmat;
	float32* mat;
	float32* scale;
	uint8 alpha;
	xAnimPlay* a;
	uint16 i;
	// Line 882, Address: 0x409710, Func Offset: 0
	// Line 894, Address: 0x409714, Func Offset: 0x4
	// Line 882, Address: 0x409718, Func Offset: 0x8
	// Line 894, Address: 0x40972c, Func Offset: 0x1c
	// Line 899, Address: 0x40973c, Func Offset: 0x2c
	// Line 900, Address: 0x409758, Func Offset: 0x48
	// Line 904, Address: 0x409778, Func Offset: 0x68
	// Line 907, Address: 0x40977c, Func Offset: 0x6c
	// Line 908, Address: 0x409780, Func Offset: 0x70
	// Line 909, Address: 0x409784, Func Offset: 0x74
	// Line 910, Address: 0x409788, Func Offset: 0x78
	// Line 911, Address: 0x40978c, Func Offset: 0x7c
	// Line 912, Address: 0x409790, Func Offset: 0x80
	// Line 913, Address: 0x409794, Func Offset: 0x84
	// Line 914, Address: 0x409798, Func Offset: 0x88
	// Line 915, Address: 0x40979c, Func Offset: 0x8c
	// Line 916, Address: 0x4097a0, Func Offset: 0x90
	// Line 917, Address: 0x4097a4, Func Offset: 0x94
	// Line 918, Address: 0x4097a8, Func Offset: 0x98
	// Line 919, Address: 0x4097ac, Func Offset: 0x9c
	// Line 920, Address: 0x4097b0, Func Offset: 0xa0
	// Line 921, Address: 0x4097b4, Func Offset: 0xa4
	// Line 943, Address: 0x4097b8, Func Offset: 0xa8
	// Line 947, Address: 0x40981c, Func Offset: 0x10c
	// Line 949, Address: 0x40983c, Func Offset: 0x12c
	// Line 951, Address: 0x409868, Func Offset: 0x158
	// Line 950, Address: 0x40986c, Func Offset: 0x15c
	// Line 951, Address: 0x409870, Func Offset: 0x160
	// Line 954, Address: 0x40987c, Func Offset: 0x16c
	// Line 956, Address: 0x4098d0, Func Offset: 0x1c0
	// Line 958, Address: 0x4098dc, Func Offset: 0x1cc
	// Line 961, Address: 0x4098e8, Func Offset: 0x1d8
	// Line 964, Address: 0x4098f8, Func Offset: 0x1e8
	// Line 966, Address: 0x4098fc, Func Offset: 0x1ec
	// Line 967, Address: 0x409914, Func Offset: 0x204
	// Line 969, Address: 0x409944, Func Offset: 0x234
	// Line 970, Address: 0x409950, Func Offset: 0x240
	// Line 974, Address: 0x4099c4, Func Offset: 0x2b4
	// Line 975, Address: 0x4099cc, Func Offset: 0x2bc
	// Line 977, Address: 0x4099e0, Func Offset: 0x2d0
	// Line 993, Address: 0x4099e8, Func Offset: 0x2d8
	// Line 1000, Address: 0x4099f4, Func Offset: 0x2e4
	// Line 1001, Address: 0x4099fc, Func Offset: 0x2ec
	// Line 1004, Address: 0x409a04, Func Offset: 0x2f4
	// Line 1005, Address: 0x409a1c, Func Offset: 0x30c
	// Line 1013, Address: 0x409a3c, Func Offset: 0x32c
	// Func End, Address: 0x409a54, Func Offset: 0x344
}

// xModelEval__FP14xModelInstance
// Start address: 0x409a60
void xModelEval(xModelInstance* modelInst)
{
	xBox* combinedAnimBound;
	// Line 853, Address: 0x409a60, Func Offset: 0
	// Line 859, Address: 0x409a64, Func Offset: 0x4
	// Line 853, Address: 0x409a68, Func Offset: 0x8
	// Line 859, Address: 0x409a6c, Func Offset: 0xc
	// Line 853, Address: 0x409a70, Func Offset: 0x10
	// Line 858, Address: 0x409a7c, Func Offset: 0x1c
	// Line 861, Address: 0x409a80, Func Offset: 0x20
	// Line 862, Address: 0x409a88, Func Offset: 0x28
	// Line 863, Address: 0x409a94, Func Offset: 0x34
	// Line 864, Address: 0x409a98, Func Offset: 0x38
	// Line 867, Address: 0x409aa8, Func Offset: 0x48
	// Func End, Address: 0x409abc, Func Offset: 0x5c
}

// xModelEvalSingle__FP14xModelInstanceP4xBox
// Start address: 0x409ac0
void xModelEvalSingle(xModelInstance* modelInst, xBox* combinedAnimBound)
{
	int32 i;
	uint16 flags;
	xModelInstance* dad;
	uint8* remap;
	xMat4x3& mat;
	xMat3x3 temp_mat;
	// Line 779, Address: 0x409ac0, Func Offset: 0
	// Line 781, Address: 0x409ad8, Func Offset: 0x18
	// Line 782, Address: 0x409adc, Func Offset: 0x1c
	// Line 783, Address: 0x409ae8, Func Offset: 0x28
	// Line 785, Address: 0x409af4, Func Offset: 0x34
	// Line 786, Address: 0x409afc, Func Offset: 0x3c
	// Line 789, Address: 0x409b08, Func Offset: 0x48
	// Line 793, Address: 0x409b10, Func Offset: 0x50
	// Line 797, Address: 0x409b1c, Func Offset: 0x5c
	// Line 793, Address: 0x409b24, Func Offset: 0x64
	// Line 797, Address: 0x409b30, Func Offset: 0x70
	// Line 799, Address: 0x409b58, Func Offset: 0x98
	// Line 802, Address: 0x409b6c, Func Offset: 0xac
	// Line 804, Address: 0x409b70, Func Offset: 0xb0
	// Line 806, Address: 0x409ba4, Func Offset: 0xe4
	// Line 808, Address: 0x409bb4, Func Offset: 0xf4
	// Line 809, Address: 0x409c0c, Func Offset: 0x14c
	// Line 811, Address: 0x409c20, Func Offset: 0x160
	// Line 814, Address: 0x409c34, Func Offset: 0x174
	// Line 816, Address: 0x409c4c, Func Offset: 0x18c
	// Line 814, Address: 0x409c50, Func Offset: 0x190
	// Line 816, Address: 0x409c54, Func Offset: 0x194
	// Line 817, Address: 0x409c68, Func Offset: 0x1a8
	// Line 818, Address: 0x409c70, Func Offset: 0x1b0
	// Line 822, Address: 0x409ca4, Func Offset: 0x1e4
	// Line 823, Address: 0x409cb4, Func Offset: 0x1f4
	// Line 822, Address: 0x409cb8, Func Offset: 0x1f8
	// Line 823, Address: 0x409cbc, Func Offset: 0x1fc
	// Line 830, Address: 0x409cd0, Func Offset: 0x210
	// Line 832, Address: 0x409cf0, Func Offset: 0x230
	// Line 834, Address: 0x409d04, Func Offset: 0x244
	// Line 836, Address: 0x409d08, Func Offset: 0x248
	// Line 837, Address: 0x409d10, Func Offset: 0x250
	// Line 836, Address: 0x409d18, Func Offset: 0x258
	// Line 835, Address: 0x409d1c, Func Offset: 0x25c
	// Line 836, Address: 0x409d20, Func Offset: 0x260
	// Line 835, Address: 0x409d24, Func Offset: 0x264
	// Line 836, Address: 0x409d28, Func Offset: 0x268
	// Line 835, Address: 0x409d2c, Func Offset: 0x26c
	// Line 836, Address: 0x409d30, Func Offset: 0x270
	// Line 835, Address: 0x409d34, Func Offset: 0x274
	// Line 836, Address: 0x409d40, Func Offset: 0x280
	// Line 837, Address: 0x409da0, Func Offset: 0x2e0
	// Line 839, Address: 0x409dac, Func Offset: 0x2ec
	// Line 840, Address: 0x409e08, Func Offset: 0x348
	// Line 843, Address: 0x409e14, Func Offset: 0x354
	// Line 847, Address: 0x409e28, Func Offset: 0x368
	// Func End, Address: 0x409e40, Func Offset: 0x380
}

// xModelUpdate__FP14xModelInstancef
// Start address: 0x409e40
void xModelUpdate(xModelInstance* modelInst, float32 timeDelta)
{
	// Line 754, Address: 0x409e40, Func Offset: 0
	// Line 757, Address: 0x409e54, Func Offset: 0x14
	// Line 759, Address: 0x409e60, Func Offset: 0x20
	// Line 761, Address: 0x409e78, Func Offset: 0x38
	// Line 762, Address: 0x409e84, Func Offset: 0x44
	// Line 764, Address: 0x409e90, Func Offset: 0x50
	// Line 765, Address: 0x409e9c, Func Offset: 0x5c
	// Line 767, Address: 0x409ea0, Func Offset: 0x60
	// Line 768, Address: 0x409ea4, Func Offset: 0x64
	// Line 771, Address: 0x409eb0, Func Offset: 0x70
	// Func End, Address: 0x409ec4, Func Offset: 0x84
}

// xModelInstanceUpgradeBrotherShared__FP14xModelInstanceUi
// Start address: 0x409ed0
void xModelInstanceUpgradeBrotherShared(xModelInstance* inst, uint32 flags)
{
	uint32 boneCount;
	RwMatrixTag* allocmats;
	// Line 733, Address: 0x409ed0, Func Offset: 0
	// Line 734, Address: 0x409ee4, Func Offset: 0x14
	// Line 739, Address: 0x409f00, Func Offset: 0x30
	// Line 743, Address: 0x409f08, Func Offset: 0x38
	// Line 744, Address: 0x409f28, Func Offset: 0x58
	// Line 745, Address: 0x409f2c, Func Offset: 0x5c
	// Line 747, Address: 0x409f30, Func Offset: 0x60
	// Func End, Address: 0x409f44, Func Offset: 0x74
}

// xModelInstanceAttach__FP14xModelInstanceP14xModelInstance
// Start address: 0x409f50
void xModelInstanceAttach(xModelInstance* inst, xModelInstance* parent)
{
	xModelInstance* curr;
	// Line 717, Address: 0x409f50, Func Offset: 0
	// Line 718, Address: 0x409f5c, Func Offset: 0xc
	// Line 719, Address: 0x409f60, Func Offset: 0x10
	// Line 720, Address: 0x409f78, Func Offset: 0x28
	// Line 721, Address: 0x409f7c, Func Offset: 0x2c
	// Line 724, Address: 0x409f80, Func Offset: 0x30
	// Line 727, Address: 0x409f90, Func Offset: 0x40
	// Func End, Address: 0x409fac, Func Offset: 0x5c
}

// xModelInstanceFree__FP14xModelInstance
// Start address: 0x409fb0
void xModelInstanceFree(xModelInstance* modelInst)
{
	xModelInstance* curr;
	xModelInstance** prev;
	// Line 668, Address: 0x409fb0, Func Offset: 0
	// Line 677, Address: 0x409fc0, Func Offset: 0x10
	// Line 680, Address: 0x40a01c, Func Offset: 0x6c
	// Line 684, Address: 0x40a024, Func Offset: 0x74
	// Line 688, Address: 0x40a028, Func Offset: 0x78
	// Line 686, Address: 0x40a040, Func Offset: 0x90
	// Line 690, Address: 0x40a050, Func Offset: 0xa0
	// Line 694, Address: 0x40a05c, Func Offset: 0xac
	// Line 695, Address: 0x40a064, Func Offset: 0xb4
	// Line 696, Address: 0x40a06c, Func Offset: 0xbc
	// Line 699, Address: 0x40a074, Func Offset: 0xc4
	// Line 702, Address: 0x40a07c, Func Offset: 0xcc
	// Line 703, Address: 0x40a084, Func Offset: 0xd4
	// Line 709, Address: 0x40a08c, Func Offset: 0xdc
	// Func End, Address: 0x40a09c, Func Offset: 0xec
}

// xModelInstanceAllocReuse__FP8RpAtomicPvUsUcPUcP14xModelInstance
// Start address: 0x40a0a0
xModelInstance* xModelInstanceAllocReuse(RpAtomic* data, void* object, uint16 flags, uint8 boneIndex, uint8* boneRemap, xModelInstance* reuse_instance)
{
	int32 i;
	uint32 boneCount;
	uint32 matCount;
	xModelPool* curr;
	xModelPool* found;
	xModelInstance* dude;
	RwMatrixTag* allocmats;
	uint8 nosrcblend;
	uint8 nodestblend;
	xModelPipe zeroPipe;
	// Line 474, Address: 0x40a0a0, Func Offset: 0
	// Line 490, Address: 0x40a0e4, Func Offset: 0x44
	// Line 491, Address: 0x40a0f4, Func Offset: 0x54
	// Line 493, Address: 0x40a100, Func Offset: 0x60
	// Line 498, Address: 0x40a108, Func Offset: 0x68
	// Line 499, Address: 0x40a110, Func Offset: 0x70
	// Line 502, Address: 0x40a11c, Func Offset: 0x7c
	// Line 506, Address: 0x40a128, Func Offset: 0x88
	// Line 507, Address: 0x40a138, Func Offset: 0x98
	// Line 506, Address: 0x40a13c, Func Offset: 0x9c
	// Line 510, Address: 0x40a140, Func Offset: 0xa0
	// Line 513, Address: 0x40a148, Func Offset: 0xa8
	// Line 514, Address: 0x40a15c, Func Offset: 0xbc
	// Line 515, Address: 0x40a160, Func Offset: 0xc0
	// Line 519, Address: 0x40a164, Func Offset: 0xc4
	// Line 522, Address: 0x40a16c, Func Offset: 0xcc
	// Line 523, Address: 0x40a174, Func Offset: 0xd4
	// Line 524, Address: 0x40a17c, Func Offset: 0xdc
	// Line 529, Address: 0x40a188, Func Offset: 0xe8
	// Line 530, Address: 0x40a190, Func Offset: 0xf0
	// Line 531, Address: 0x40a1ac, Func Offset: 0x10c
	// Line 533, Address: 0x40a1b0, Func Offset: 0x110
	// Line 534, Address: 0x40a1b4, Func Offset: 0x114
	// Line 537, Address: 0x40a1c0, Func Offset: 0x120
	// Line 542, Address: 0x40a1c8, Func Offset: 0x128
	// Line 544, Address: 0x40a1d0, Func Offset: 0x130
	// Line 545, Address: 0x40a1d4, Func Offset: 0x134
	// Line 553, Address: 0x40a1dc, Func Offset: 0x13c
	// Line 558, Address: 0x40a1e0, Func Offset: 0x140
	// Line 554, Address: 0x40a1e4, Func Offset: 0x144
	// Line 558, Address: 0x40a1e8, Func Offset: 0x148
	// Line 555, Address: 0x40a1ec, Func Offset: 0x14c
	// Line 563, Address: 0x40a1f0, Func Offset: 0x150
	// Line 556, Address: 0x40a1f4, Func Offset: 0x154
	// Line 563, Address: 0x40a1f8, Func Offset: 0x158
	// Line 557, Address: 0x40a1fc, Func Offset: 0x15c
	// Line 558, Address: 0x40a204, Func Offset: 0x164
	// Line 559, Address: 0x40a208, Func Offset: 0x168
	// Line 560, Address: 0x40a20c, Func Offset: 0x16c
	// Line 561, Address: 0x40a210, Func Offset: 0x170
	// Line 562, Address: 0x40a214, Func Offset: 0x174
	// Line 563, Address: 0x40a218, Func Offset: 0x178
	// Line 565, Address: 0x40a21c, Func Offset: 0x17c
	// Line 566, Address: 0x40a220, Func Offset: 0x180
	// Line 567, Address: 0x40a224, Func Offset: 0x184
	// Line 569, Address: 0x40a228, Func Offset: 0x188
	// Line 570, Address: 0x40a22c, Func Offset: 0x18c
	// Line 571, Address: 0x40a230, Func Offset: 0x190
	// Line 574, Address: 0x40a234, Func Offset: 0x194
	// Line 576, Address: 0x40a274, Func Offset: 0x1d4
	// Line 574, Address: 0x40a278, Func Offset: 0x1d8
	// Line 576, Address: 0x40a284, Func Offset: 0x1e4
	// Line 577, Address: 0x40a288, Func Offset: 0x1e8
	// Line 574, Address: 0x40a290, Func Offset: 0x1f0
	// Line 575, Address: 0x40a294, Func Offset: 0x1f4
	// Line 576, Address: 0x40a298, Func Offset: 0x1f8
	// Line 577, Address: 0x40a29c, Func Offset: 0x1fc
	// Line 580, Address: 0x40a2a0, Func Offset: 0x200
	// Line 581, Address: 0x40a2ac, Func Offset: 0x20c
	// Line 582, Address: 0x40a2b4, Func Offset: 0x214
	// Line 581, Address: 0x40a2bc, Func Offset: 0x21c
	// Line 582, Address: 0x40a2c8, Func Offset: 0x228
	// Line 585, Address: 0x40a2f8, Func Offset: 0x258
	// Line 586, Address: 0x40a348, Func Offset: 0x2a8
	// Line 587, Address: 0x40a350, Func Offset: 0x2b0
	// Line 588, Address: 0x40a358, Func Offset: 0x2b8
	// Line 589, Address: 0x40a378, Func Offset: 0x2d8
	// Line 590, Address: 0x40a380, Func Offset: 0x2e0
	// Line 595, Address: 0x40a418, Func Offset: 0x378
	// Line 601, Address: 0x40a428, Func Offset: 0x388
	// Line 598, Address: 0x40a42c, Func Offset: 0x38c
	// Line 601, Address: 0x40a430, Func Offset: 0x390
	// Line 598, Address: 0x40a434, Func Offset: 0x394
	// Line 601, Address: 0x40a438, Func Offset: 0x398
	// Line 599, Address: 0x40a43c, Func Offset: 0x39c
	// Line 598, Address: 0x40a440, Func Offset: 0x3a0
	// Line 599, Address: 0x40a444, Func Offset: 0x3a4
	// Line 598, Address: 0x40a448, Func Offset: 0x3a8
	// Line 599, Address: 0x40a44c, Func Offset: 0x3ac
	// Line 601, Address: 0x40a450, Func Offset: 0x3b0
	// Line 602, Address: 0x40a470, Func Offset: 0x3d0
	// Line 605, Address: 0x40a478, Func Offset: 0x3d8
	// Line 612, Address: 0x40a47c, Func Offset: 0x3dc
	// Line 606, Address: 0x40a480, Func Offset: 0x3e0
	// Line 613, Address: 0x40a484, Func Offset: 0x3e4
	// Func End, Address: 0x40a4b4, Func Offset: 0x414
}

// xModelPoolInit__FUiUi
// Start address: 0x40a4c0
void xModelPoolInit(uint32 count, uint32 numMatrices)
{
	int32 i;
	uint8* buffer;
	RwMatrixTag* mat;
	xModelPool* pool;
	xModelPool* curr;
	xModelPool** prev;
	xModelInstance* inst;
	// Line 315, Address: 0x40a4c0, Func Offset: 0
	// Line 323, Address: 0x40a4dc, Func Offset: 0x1c
	// Line 324, Address: 0x40a4e4, Func Offset: 0x24
	// Line 329, Address: 0x40a4f4, Func Offset: 0x34
	// Line 324, Address: 0x40a500, Func Offset: 0x40
	// Line 329, Address: 0x40a50c, Func Offset: 0x4c
	// Line 344, Address: 0x40a51c, Func Offset: 0x5c
	// Line 334, Address: 0x40a520, Func Offset: 0x60
	// Line 339, Address: 0x40a524, Func Offset: 0x64
	// Line 344, Address: 0x40a528, Func Offset: 0x68
	// Line 345, Address: 0x40a690, Func Offset: 0x1d0
	// Line 353, Address: 0x40a698, Func Offset: 0x1d8
	// Line 348, Address: 0x40a69c, Func Offset: 0x1dc
	// Line 349, Address: 0x40a6a0, Func Offset: 0x1e0
	// Line 354, Address: 0x40a6a4, Func Offset: 0x1e4
	// Line 358, Address: 0x40a6a8, Func Offset: 0x1e8
	// Line 356, Address: 0x40a6c8, Func Offset: 0x208
	// Line 359, Address: 0x40a6d8, Func Offset: 0x218
	// Line 360, Address: 0x40a6dc, Func Offset: 0x21c
	// Line 365, Address: 0x40a6e0, Func Offset: 0x220
	// Func End, Address: 0x40a6fc, Func Offset: 0x23c
}

// xModelInitOnce__Fv
// Start address: 0x40a700
void xModelInitOnce()
{
	// Line 292, Address: 0x40a700, Func Offset: 0
	// Line 295, Address: 0x40a708, Func Offset: 0x8
	// Line 299, Address: 0x40a710, Func Offset: 0x10
	// Line 304, Address: 0x40a71c, Func Offset: 0x1c
	// Line 301, Address: 0x40a72c, Func Offset: 0x2c
	// Line 304, Address: 0x40a730, Func Offset: 0x30
	// Line 301, Address: 0x40a750, Func Offset: 0x50
	// Line 304, Address: 0x40a754, Func Offset: 0x54
	// Line 301, Address: 0x40a75c, Func Offset: 0x5c
	// Line 304, Address: 0x40a768, Func Offset: 0x68
	// Line 301, Address: 0x40a774, Func Offset: 0x74
	// Line 304, Address: 0x40a780, Func Offset: 0x80
	// Line 301, Address: 0x40a7b8, Func Offset: 0xb8
	// Line 304, Address: 0x40a7bc, Func Offset: 0xbc
	// Func End, Address: 0x40a7d8, Func Offset: 0xd8
}

// xModelInit__Fv
// Start address: 0x40a7e0
void xModelInit()
{
	// Line 267, Address: 0x40a7e0, Func Offset: 0
	// Line 278, Address: 0x40a7e8, Func Offset: 0x8
	// Line 281, Address: 0x40a7f0, Func Offset: 0x10
	// Line 288, Address: 0x40a7f4, Func Offset: 0x14
	// Line 289, Address: 0x40a7f8, Func Offset: 0x18
	// Func End, Address: 0x40a804, Func Offset: 0x24
}

// xModelGetPipe__FP8RpAtomic
// Start address: 0x40a810
xModelPipe xModelGetPipe(RpAtomic* model)
{
	int32 i;
	// Line 258, Address: 0x40a810, Func Offset: 0
	// Line 259, Address: 0x40a828, Func Offset: 0x18
	// Line 260, Address: 0x40a834, Func Offset: 0x24
	// Line 262, Address: 0x40a854, Func Offset: 0x44
	// Line 263, Address: 0x40a868, Func Offset: 0x58
	// Line 264, Address: 0x40a878, Func Offset: 0x68
	// Func End, Address: 0x40a880, Func Offset: 0x70
}

