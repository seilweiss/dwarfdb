



void xGridCheckBound(xGrid& grid, xBound& bound, xQCData& qcd, BattleCollideData& cb);
void xGridCheckBound(xGrid& grid, xBound& bound, xQCData& qcd, SpawnChkCollData& cb);
void xGridCheckBound(xGrid& grid, xBound& bound, xQCData& qcd, ExplodeCollideData& cb);
void xGridCheckBound(xGrid& grid, xBound& bound, xQCData& qcd, ExplodeCollChkData& cb);
void xGridCheckBound(xGrid& grid, xBound& bound, xQCData& qcd, cbVentHitsBoulder& cb);
void xGridCheckBound(xGrid& grid, xBound& bound, xQCData& qcd);
void xGridCheckBound(xGrid& grid, xBound& bound, xQCData& qcd, cb_damage_ent& cb);
void xGridCheckBound(xGrid& grid, xBound& bound, xQCData& qcd, zCar& cb);
void xGridCheckBound(xGrid& grid, xBound& bound, xQCData& qcd, cb_ray_hits_ent& cb);
void xGridCheckBound(xGrid& grid, xBound& bound, xQCData& qcd, cb_decal_sphere_hits_ent& cb);
void xGridCheckBound(xGrid& grid, xBound& bound, xQCData& qcd, cb_decal_hits_ent& cb);
void xGridCheckBound(xGrid& grid, xBound& bound, xQCData& qcd, cb_sss& cb);
void xGridCheckBound(xGrid& grid, xBound& bound, xQCData& qcd, cb_ss& cb);
void xGridCheckBound(xGrid& grid, xBound& bound, xQCData& qcd, check_bound& cb);

// xGridCheckBound<17BattleCollideData>__FR5xGridRC6xBoundRC7xQCDataR17BattleCollideData_v
// Start address: 0x2a6f90
void xGridCheckBound(xGrid& grid, xBound& bound, xQCData& qcd, BattleCollideData& cb)
{
	xGridIterator it;
	xBox box;
	int32 lower_x;
	int32 lower_z;
	int32 upper_x;
	int32 upper_z;
	xGridBound* cell;
	int32 gx;
	int32 gz;
	// Line 195, Address: 0x2a6f90, Func Offset: 0
	// Line 200, Address: 0x2a6f9c, Func Offset: 0xc
	// Line 195, Address: 0x2a6fa0, Func Offset: 0x10
	// Line 200, Address: 0x2a6fa4, Func Offset: 0x14
	// Line 195, Address: 0x2a6fa8, Func Offset: 0x18
	// Line 200, Address: 0x2a6fc8, Func Offset: 0x38
	// Line 195, Address: 0x2a6fcc, Func Offset: 0x3c
	// Line 200, Address: 0x2a6fd0, Func Offset: 0x40
	// Line 206, Address: 0x2a6fe4, Func Offset: 0x54
	// Line 207, Address: 0x2a6ff0, Func Offset: 0x60
	// Line 206, Address: 0x2a6ff4, Func Offset: 0x64
	// Line 207, Address: 0x2a6ff8, Func Offset: 0x68
	// Line 222, Address: 0x2a7004, Func Offset: 0x74
	// Line 220, Address: 0x2a701c, Func Offset: 0x8c
	// Line 222, Address: 0x2a7020, Func Offset: 0x90
	// Line 221, Address: 0x2a7044, Func Offset: 0xb4
	// Line 222, Address: 0x2a7048, Func Offset: 0xb8
	// Line 221, Address: 0x2a7054, Func Offset: 0xc4
	// Line 222, Address: 0x2a7060, Func Offset: 0xd0
	// Line 221, Address: 0x2a7080, Func Offset: 0xf0
	// Line 222, Address: 0x2a7090, Func Offset: 0x100
	// Line 218, Address: 0x2a70ac, Func Offset: 0x11c
	// Line 224, Address: 0x2a70b4, Func Offset: 0x124
	// Line 227, Address: 0x2a70c4, Func Offset: 0x134
	// Line 229, Address: 0x2a70d4, Func Offset: 0x144
	// Line 228, Address: 0x2a70d8, Func Offset: 0x148
	// Line 229, Address: 0x2a70dc, Func Offset: 0x14c
	// Line 231, Address: 0x2a70e8, Func Offset: 0x158
	// Line 234, Address: 0x2a70ec, Func Offset: 0x15c
	// Line 260, Address: 0x2a70f8, Func Offset: 0x168
	// Func End, Address: 0x2a7124, Func Offset: 0x194
}

// xGridCheckBound<16SpawnChkCollData>__FR5xGridRC6xBoundRC7xQCDataR16SpawnChkCollData_v
// Start address: 0x2a7130
void xGridCheckBound(xGrid& grid, xBound& bound, xQCData& qcd, SpawnChkCollData& cb)
{
	xGridIterator it;
	xBox box;
	int32 lower_x;
	int32 lower_z;
	int32 upper_x;
	int32 upper_z;
	xGridBound* cell;
	int32 gx;
	int32 gz;
	// Line 195, Address: 0x2a7130, Func Offset: 0
	// Line 200, Address: 0x2a713c, Func Offset: 0xc
	// Line 195, Address: 0x2a7140, Func Offset: 0x10
	// Line 200, Address: 0x2a7144, Func Offset: 0x14
	// Line 195, Address: 0x2a7148, Func Offset: 0x18
	// Line 200, Address: 0x2a7168, Func Offset: 0x38
	// Line 195, Address: 0x2a716c, Func Offset: 0x3c
	// Line 200, Address: 0x2a7170, Func Offset: 0x40
	// Line 206, Address: 0x2a7184, Func Offset: 0x54
	// Line 207, Address: 0x2a7190, Func Offset: 0x60
	// Line 206, Address: 0x2a7194, Func Offset: 0x64
	// Line 207, Address: 0x2a7198, Func Offset: 0x68
	// Line 222, Address: 0x2a71a4, Func Offset: 0x74
	// Line 220, Address: 0x2a71bc, Func Offset: 0x8c
	// Line 222, Address: 0x2a71c0, Func Offset: 0x90
	// Line 221, Address: 0x2a71e4, Func Offset: 0xb4
	// Line 222, Address: 0x2a71e8, Func Offset: 0xb8
	// Line 221, Address: 0x2a71f4, Func Offset: 0xc4
	// Line 222, Address: 0x2a7200, Func Offset: 0xd0
	// Line 221, Address: 0x2a7220, Func Offset: 0xf0
	// Line 222, Address: 0x2a7230, Func Offset: 0x100
	// Line 218, Address: 0x2a724c, Func Offset: 0x11c
	// Line 224, Address: 0x2a7254, Func Offset: 0x124
	// Line 227, Address: 0x2a7264, Func Offset: 0x134
	// Line 229, Address: 0x2a7274, Func Offset: 0x144
	// Line 228, Address: 0x2a7278, Func Offset: 0x148
	// Line 229, Address: 0x2a727c, Func Offset: 0x14c
	// Line 231, Address: 0x2a7288, Func Offset: 0x158
	// Line 234, Address: 0x2a728c, Func Offset: 0x15c
	// Line 260, Address: 0x2a7298, Func Offset: 0x168
	// Func End, Address: 0x2a72c4, Func Offset: 0x194
}

// xGridCheckBound<18ExplodeCollideData>__FR5xGridRC6xBoundRC7xQCDataR18ExplodeCollideData_v
// Start address: 0x2a72d0
void xGridCheckBound(xGrid& grid, xBound& bound, xQCData& qcd, ExplodeCollideData& cb)
{
	xGridIterator it;
	xBox box;
	int32 lower_x;
	int32 lower_z;
	int32 upper_x;
	int32 upper_z;
	xGridBound* cell;
	int32 gx;
	int32 gz;
	// Line 195, Address: 0x2a72d0, Func Offset: 0
	// Line 200, Address: 0x2a72dc, Func Offset: 0xc
	// Line 195, Address: 0x2a72e0, Func Offset: 0x10
	// Line 200, Address: 0x2a72e4, Func Offset: 0x14
	// Line 195, Address: 0x2a72e8, Func Offset: 0x18
	// Line 200, Address: 0x2a7308, Func Offset: 0x38
	// Line 195, Address: 0x2a730c, Func Offset: 0x3c
	// Line 200, Address: 0x2a7310, Func Offset: 0x40
	// Line 206, Address: 0x2a7324, Func Offset: 0x54
	// Line 207, Address: 0x2a7330, Func Offset: 0x60
	// Line 206, Address: 0x2a7334, Func Offset: 0x64
	// Line 207, Address: 0x2a7338, Func Offset: 0x68
	// Line 222, Address: 0x2a7344, Func Offset: 0x74
	// Line 220, Address: 0x2a735c, Func Offset: 0x8c
	// Line 222, Address: 0x2a7360, Func Offset: 0x90
	// Line 221, Address: 0x2a7384, Func Offset: 0xb4
	// Line 222, Address: 0x2a7388, Func Offset: 0xb8
	// Line 221, Address: 0x2a7394, Func Offset: 0xc4
	// Line 222, Address: 0x2a73a0, Func Offset: 0xd0
	// Line 221, Address: 0x2a73c0, Func Offset: 0xf0
	// Line 222, Address: 0x2a73d0, Func Offset: 0x100
	// Line 218, Address: 0x2a73ec, Func Offset: 0x11c
	// Line 224, Address: 0x2a73f4, Func Offset: 0x124
	// Line 227, Address: 0x2a7404, Func Offset: 0x134
	// Line 229, Address: 0x2a7414, Func Offset: 0x144
	// Line 228, Address: 0x2a7418, Func Offset: 0x148
	// Line 229, Address: 0x2a741c, Func Offset: 0x14c
	// Line 231, Address: 0x2a7428, Func Offset: 0x158
	// Line 234, Address: 0x2a742c, Func Offset: 0x15c
	// Line 260, Address: 0x2a7438, Func Offset: 0x168
	// Func End, Address: 0x2a7464, Func Offset: 0x194
}

// xGridCheckBound<Q28TikiBoom18ExplodeCollChkData>__FR5xGridRC6xBoundRC7xQCDataRQ28TikiBoom18ExplodeCollChkData_v
// Start address: 0x2a7470
void xGridCheckBound(xGrid& grid, xBound& bound, xQCData& qcd, ExplodeCollChkData& cb)
{
	xGridIterator it;
	xBox box;
	int32 lower_x;
	int32 lower_z;
	int32 upper_x;
	int32 upper_z;
	xGridBound* cell;
	int32 gx;
	int32 gz;
	// Line 195, Address: 0x2a7470, Func Offset: 0
	// Line 200, Address: 0x2a747c, Func Offset: 0xc
	// Line 195, Address: 0x2a7480, Func Offset: 0x10
	// Line 200, Address: 0x2a7484, Func Offset: 0x14
	// Line 195, Address: 0x2a7488, Func Offset: 0x18
	// Line 200, Address: 0x2a74a8, Func Offset: 0x38
	// Line 195, Address: 0x2a74ac, Func Offset: 0x3c
	// Line 200, Address: 0x2a74b0, Func Offset: 0x40
	// Line 206, Address: 0x2a74c4, Func Offset: 0x54
	// Line 207, Address: 0x2a74d0, Func Offset: 0x60
	// Line 206, Address: 0x2a74d4, Func Offset: 0x64
	// Line 207, Address: 0x2a74d8, Func Offset: 0x68
	// Line 222, Address: 0x2a74e4, Func Offset: 0x74
	// Line 220, Address: 0x2a74fc, Func Offset: 0x8c
	// Line 222, Address: 0x2a7500, Func Offset: 0x90
	// Line 221, Address: 0x2a7524, Func Offset: 0xb4
	// Line 222, Address: 0x2a7528, Func Offset: 0xb8
	// Line 221, Address: 0x2a7534, Func Offset: 0xc4
	// Line 222, Address: 0x2a7540, Func Offset: 0xd0
	// Line 221, Address: 0x2a7560, Func Offset: 0xf0
	// Line 222, Address: 0x2a7570, Func Offset: 0x100
	// Line 218, Address: 0x2a758c, Func Offset: 0x11c
	// Line 224, Address: 0x2a7594, Func Offset: 0x124
	// Line 227, Address: 0x2a75a4, Func Offset: 0x134
	// Line 229, Address: 0x2a75b4, Func Offset: 0x144
	// Line 228, Address: 0x2a75b8, Func Offset: 0x148
	// Line 229, Address: 0x2a75bc, Func Offset: 0x14c
	// Line 231, Address: 0x2a75c8, Func Offset: 0x158
	// Line 234, Address: 0x2a75cc, Func Offset: 0x15c
	// Line 260, Address: 0x2a75d8, Func Offset: 0x168
	// Func End, Address: 0x2a7604, Func Offset: 0x194
}

// xGridCheckBound<17cbVentHitsBoulder>__FR5xGridRC6xBoundRC7xQCDataR17cbVentHitsBoulder_v
// Start address: 0x311bc0
void xGridCheckBound(xGrid& grid, xBound& bound, xQCData& qcd, cbVentHitsBoulder& cb)
{
	xGridIterator it;
	xBox box;
	int32 lower_x;
	int32 lower_z;
	int32 upper_x;
	int32 upper_z;
	xGridBound* cell;
	int32 gx;
	int32 gz;
	// Line 195, Address: 0x311bc0, Func Offset: 0
	// Line 200, Address: 0x311bcc, Func Offset: 0xc
	// Line 195, Address: 0x311bd0, Func Offset: 0x10
	// Line 200, Address: 0x311bd4, Func Offset: 0x14
	// Line 195, Address: 0x311bd8, Func Offset: 0x18
	// Line 200, Address: 0x311bf4, Func Offset: 0x34
	// Line 195, Address: 0x311bf8, Func Offset: 0x38
	// Line 200, Address: 0x311bfc, Func Offset: 0x3c
	// Line 195, Address: 0x311c00, Func Offset: 0x40
	// Line 200, Address: 0x311c04, Func Offset: 0x44
	// Line 195, Address: 0x311c08, Func Offset: 0x48
	// Line 200, Address: 0x311c10, Func Offset: 0x50
	// Line 206, Address: 0x311c1c, Func Offset: 0x5c
	// Line 207, Address: 0x311c28, Func Offset: 0x68
	// Line 206, Address: 0x311c38, Func Offset: 0x78
	// Line 207, Address: 0x311c3c, Func Offset: 0x7c
	// Line 210, Address: 0x311c44, Func Offset: 0x84
	// Line 213, Address: 0x311c4c, Func Offset: 0x8c
	// Line 215, Address: 0x311c5c, Func Offset: 0x9c
	// Line 217, Address: 0x311df8, Func Offset: 0x238
	// Line 218, Address: 0x311e00, Func Offset: 0x240
	// Line 221, Address: 0x311e0c, Func Offset: 0x24c
	// Line 222, Address: 0x311e70, Func Offset: 0x2b0
	// Line 224, Address: 0x311e78, Func Offset: 0x2b8
	// Line 227, Address: 0x311e88, Func Offset: 0x2c8
	// Line 229, Address: 0x311e98, Func Offset: 0x2d8
	// Line 228, Address: 0x311e9c, Func Offset: 0x2dc
	// Line 229, Address: 0x311ea0, Func Offset: 0x2e0
	// Line 231, Address: 0x311eac, Func Offset: 0x2ec
	// Line 234, Address: 0x311eb0, Func Offset: 0x2f0
	// Line 260, Address: 0x311eb8, Func Offset: 0x2f8
	// Func End, Address: 0x311eec, Func Offset: 0x32c
}

// xGridCheckBound<Q413cruise_bubble12CruiseBubble19state_camera_attach15cb_lock_targets>__FR5xGridRC6xBoundRC7xQCDataRQ413cruise_bubble12CruiseBubble19state_camera_attach15cb_lock_targets_v
// Start address: 0x377ec0
void xGridCheckBound(xGrid& grid, xBound& bound, xQCData& qcd)
{
	xGridIterator it;
	xBox box;
	int32 lower_x;
	int32 lower_z;
	int32 upper_x;
	int32 upper_z;
	xGridBound* cell;
	int32 gx;
	int32 gz;
	// Line 195, Address: 0x377ec0, Func Offset: 0
	// Line 200, Address: 0x377ecc, Func Offset: 0xc
	// Line 195, Address: 0x377ed0, Func Offset: 0x10
	// Line 200, Address: 0x377ed4, Func Offset: 0x14
	// Line 195, Address: 0x377ed8, Func Offset: 0x18
	// Line 200, Address: 0x377edc, Func Offset: 0x1c
	// Line 195, Address: 0x377ee0, Func Offset: 0x20
	// Line 200, Address: 0x377efc, Func Offset: 0x3c
	// Line 206, Address: 0x377f0c, Func Offset: 0x4c
	// Line 207, Address: 0x377f18, Func Offset: 0x58
	// Line 206, Address: 0x377f1c, Func Offset: 0x5c
	// Line 207, Address: 0x377f20, Func Offset: 0x60
	// Line 222, Address: 0x377f2c, Func Offset: 0x6c
	// Line 215, Address: 0x377f4c, Func Offset: 0x8c
	// Line 222, Address: 0x377f50, Func Offset: 0x90
	// Line 215, Address: 0x377f64, Func Offset: 0xa4
	// Line 222, Address: 0x377f68, Func Offset: 0xa8
	// Line 215, Address: 0x377f74, Func Offset: 0xb4
	// Line 222, Address: 0x377f78, Func Offset: 0xb8
	// Line 215, Address: 0x377f80, Func Offset: 0xc0
	// Line 222, Address: 0x377f88, Func Offset: 0xc8
	// Line 215, Address: 0x377f90, Func Offset: 0xd0
	// Line 222, Address: 0x377f98, Func Offset: 0xd8
	// Line 218, Address: 0x377fa8, Func Offset: 0xe8
	// Line 215, Address: 0x377fb0, Func Offset: 0xf0
	// Line 222, Address: 0x377fc8, Func Offset: 0x108
	// Line 215, Address: 0x377fe0, Func Offset: 0x120
	// Line 222, Address: 0x377fe8, Func Offset: 0x128
	// Line 221, Address: 0x37801c, Func Offset: 0x15c
	// Line 222, Address: 0x378020, Func Offset: 0x160
	// Line 221, Address: 0x37802c, Func Offset: 0x16c
	// Line 222, Address: 0x378038, Func Offset: 0x178
	// Line 221, Address: 0x378058, Func Offset: 0x198
	// Line 224, Address: 0x378068, Func Offset: 0x1a8
	// Line 227, Address: 0x378078, Func Offset: 0x1b8
	// Line 229, Address: 0x378088, Func Offset: 0x1c8
	// Line 228, Address: 0x37808c, Func Offset: 0x1cc
	// Line 229, Address: 0x378090, Func Offset: 0x1d0
	// Line 231, Address: 0x37809c, Func Offset: 0x1dc
	// Line 234, Address: 0x3780a0, Func Offset: 0x1e0
	// Line 260, Address: 0x3780a8, Func Offset: 0x1e8
	// Func End, Address: 0x3780d0, Func Offset: 0x210
}

// xGridCheckBound<Q413cruise_bubble12CruiseBubble20state_missle_explode13cb_damage_ent>__FR5xGridRC6xBoundRC7xQCDataRQ413cruise_bubble12CruiseBubble20state_missle_explode13cb_damage_ent_v
// Start address: 0x3780d0
void xGridCheckBound(xGrid& grid, xBound& bound, xQCData& qcd, cb_damage_ent& cb)
{
	xGridIterator it;
	xBox box;
	int32 lower_x;
	int32 lower_z;
	int32 upper_x;
	int32 upper_z;
	xGridBound* cell;
	int32 gx;
	int32 gz;
	// Line 195, Address: 0x3780d0, Func Offset: 0
	// Line 200, Address: 0x3780dc, Func Offset: 0xc
	// Line 195, Address: 0x3780e0, Func Offset: 0x10
	// Line 200, Address: 0x3780e4, Func Offset: 0x14
	// Line 195, Address: 0x3780e8, Func Offset: 0x18
	// Line 200, Address: 0x3780fc, Func Offset: 0x2c
	// Line 195, Address: 0x378100, Func Offset: 0x30
	// Line 200, Address: 0x378118, Func Offset: 0x48
	// Line 206, Address: 0x378128, Func Offset: 0x58
	// Line 207, Address: 0x378134, Func Offset: 0x64
	// Line 206, Address: 0x378138, Func Offset: 0x68
	// Line 207, Address: 0x37813c, Func Offset: 0x6c
	// Line 222, Address: 0x37814c, Func Offset: 0x7c
	// Line 215, Address: 0x37816c, Func Offset: 0x9c
	// Line 222, Address: 0x378170, Func Offset: 0xa0
	// Line 215, Address: 0x378184, Func Offset: 0xb4
	// Line 222, Address: 0x378188, Func Offset: 0xb8
	// Line 215, Address: 0x378194, Func Offset: 0xc4
	// Line 222, Address: 0x378198, Func Offset: 0xc8
	// Line 215, Address: 0x3781a0, Func Offset: 0xd0
	// Line 222, Address: 0x3781a8, Func Offset: 0xd8
	// Line 215, Address: 0x3781b0, Func Offset: 0xe0
	// Line 222, Address: 0x3781b8, Func Offset: 0xe8
	// Line 218, Address: 0x3781c8, Func Offset: 0xf8
	// Line 215, Address: 0x3781d0, Func Offset: 0x100
	// Line 222, Address: 0x3781e8, Func Offset: 0x118
	// Line 215, Address: 0x378200, Func Offset: 0x130
	// Line 222, Address: 0x378208, Func Offset: 0x138
	// Line 215, Address: 0x378218, Func Offset: 0x148
	// Line 222, Address: 0x378220, Func Offset: 0x150
	// Line 215, Address: 0x378244, Func Offset: 0x174
	// Line 222, Address: 0x378248, Func Offset: 0x178
	// Line 215, Address: 0x37828c, Func Offset: 0x1bc
	// Line 222, Address: 0x378298, Func Offset: 0x1c8
	// Line 215, Address: 0x3782a8, Func Offset: 0x1d8
	// Line 222, Address: 0x3782ac, Func Offset: 0x1dc
	// Line 215, Address: 0x3782c4, Func Offset: 0x1f4
	// Line 222, Address: 0x3782d0, Func Offset: 0x200
	// Line 215, Address: 0x3782e0, Func Offset: 0x210
	// Line 222, Address: 0x3782e8, Func Offset: 0x218
	// Line 215, Address: 0x3782f0, Func Offset: 0x220
	// Line 222, Address: 0x3782f8, Func Offset: 0x228
	// Line 215, Address: 0x3782fc, Func Offset: 0x22c
	// Line 222, Address: 0x378300, Func Offset: 0x230
	// Line 215, Address: 0x378318, Func Offset: 0x248
	// Line 222, Address: 0x37831c, Func Offset: 0x24c
	// Line 215, Address: 0x378328, Func Offset: 0x258
	// Line 222, Address: 0x37832c, Func Offset: 0x25c
	// Line 215, Address: 0x378358, Func Offset: 0x288
	// Line 222, Address: 0x37835c, Func Offset: 0x28c
	// Line 215, Address: 0x378364, Func Offset: 0x294
	// Line 220, Address: 0x37836c, Func Offset: 0x29c
	// Line 222, Address: 0x378370, Func Offset: 0x2a0
	// Line 221, Address: 0x378394, Func Offset: 0x2c4
	// Line 222, Address: 0x378398, Func Offset: 0x2c8
	// Line 221, Address: 0x3783a4, Func Offset: 0x2d4
	// Line 222, Address: 0x3783b0, Func Offset: 0x2e0
	// Line 221, Address: 0x3783d0, Func Offset: 0x300
	// Line 224, Address: 0x3783e0, Func Offset: 0x310
	// Line 227, Address: 0x3783f0, Func Offset: 0x320
	// Line 229, Address: 0x378400, Func Offset: 0x330
	// Line 228, Address: 0x378404, Func Offset: 0x334
	// Line 229, Address: 0x378408, Func Offset: 0x338
	// Line 231, Address: 0x378414, Func Offset: 0x344
	// Line 234, Address: 0x378418, Func Offset: 0x348
	// Line 260, Address: 0x378420, Func Offset: 0x350
	// Func End, Address: 0x378450, Func Offset: 0x380
}

// xGridCheckBound<4zCar>__FR5xGridRC6xBoundRC7xQCDataR4zCar_v
// Start address: 0x3997c0
void xGridCheckBound(xGrid& grid, xBound& bound, xQCData& qcd, zCar& cb)
{
	xGridIterator it;
	xBox box;
	int32 lower_x;
	int32 lower_z;
	int32 upper_x;
	int32 upper_z;
	xGridBound* cell;
	int32 gx;
	int32 gz;
	// Line 195, Address: 0x3997c0, Func Offset: 0
	// Line 200, Address: 0x3997cc, Func Offset: 0xc
	// Line 195, Address: 0x3997d0, Func Offset: 0x10
	// Line 200, Address: 0x3997d4, Func Offset: 0x14
	// Line 195, Address: 0x3997d8, Func Offset: 0x18
	// Line 200, Address: 0x3997f8, Func Offset: 0x38
	// Line 195, Address: 0x3997fc, Func Offset: 0x3c
	// Line 200, Address: 0x399800, Func Offset: 0x40
	// Line 206, Address: 0x399814, Func Offset: 0x54
	// Line 207, Address: 0x399820, Func Offset: 0x60
	// Line 206, Address: 0x399824, Func Offset: 0x64
	// Line 207, Address: 0x399828, Func Offset: 0x68
	// Line 222, Address: 0x399834, Func Offset: 0x74
	// Line 220, Address: 0x39984c, Func Offset: 0x8c
	// Line 222, Address: 0x399850, Func Offset: 0x90
	// Line 221, Address: 0x399874, Func Offset: 0xb4
	// Line 222, Address: 0x399878, Func Offset: 0xb8
	// Line 221, Address: 0x399884, Func Offset: 0xc4
	// Line 222, Address: 0x399890, Func Offset: 0xd0
	// Line 221, Address: 0x3998b0, Func Offset: 0xf0
	// Line 222, Address: 0x3998c0, Func Offset: 0x100
	// Line 218, Address: 0x3998dc, Func Offset: 0x11c
	// Line 224, Address: 0x3998e4, Func Offset: 0x124
	// Line 227, Address: 0x3998f4, Func Offset: 0x134
	// Line 229, Address: 0x399904, Func Offset: 0x144
	// Line 228, Address: 0x399908, Func Offset: 0x148
	// Line 229, Address: 0x39990c, Func Offset: 0x14c
	// Line 231, Address: 0x399918, Func Offset: 0x158
	// Line 234, Address: 0x39991c, Func Offset: 0x15c
	// Line 260, Address: 0x399928, Func Offset: 0x168
	// Func End, Address: 0x399954, Func Offset: 0x194
}

// xGridCheckBound<Q219@unnamed@xWad4_cpp@15cb_ray_hits_ent>__FR5xGridRC6xBoundRC7xQCDataRQ219@unnamed@xWad4_cpp@15cb_ray_hits_ent_v
// Start address: 0x3c5d40
void xGridCheckBound(xGrid& grid, xBound& bound, xQCData& qcd, cb_ray_hits_ent& cb)
{
	xGridIterator it;
	xBox box;
	int32 lower_x;
	int32 lower_z;
	int32 upper_x;
	int32 upper_z;
	xGridBound* cell;
	int32 gx;
	int32 gz;
	xBound* cellbound;
	// Line 195, Address: 0x3c5d40, Func Offset: 0
	// Line 200, Address: 0x3c5d4c, Func Offset: 0xc
	// Line 195, Address: 0x3c5d50, Func Offset: 0x10
	// Line 200, Address: 0x3c5d54, Func Offset: 0x14
	// Line 195, Address: 0x3c5d58, Func Offset: 0x18
	// Line 200, Address: 0x3c5d68, Func Offset: 0x28
	// Line 195, Address: 0x3c5d6c, Func Offset: 0x2c
	// Line 200, Address: 0x3c5d80, Func Offset: 0x40
	// Line 195, Address: 0x3c5d84, Func Offset: 0x44
	// Line 200, Address: 0x3c5d88, Func Offset: 0x48
	// Line 206, Address: 0x3c5d98, Func Offset: 0x58
	// Line 207, Address: 0x3c5da4, Func Offset: 0x64
	// Line 206, Address: 0x3c5da8, Func Offset: 0x68
	// Line 207, Address: 0x3c5dac, Func Offset: 0x6c
	// Line 210, Address: 0x3c5db8, Func Offset: 0x78
	// Line 213, Address: 0x3c5dc0, Func Offset: 0x80
	// Line 215, Address: 0x3c5de8, Func Offset: 0xa8
	// Line 217, Address: 0x3c5fa4, Func Offset: 0x264
	// Line 218, Address: 0x3c5fac, Func Offset: 0x26c
	// Line 221, Address: 0x3c5fb8, Func Offset: 0x278
	// Line 222, Address: 0x3c600c, Func Offset: 0x2cc
	// Line 224, Address: 0x3c6014, Func Offset: 0x2d4
	// Line 227, Address: 0x3c6024, Func Offset: 0x2e4
	// Line 229, Address: 0x3c6034, Func Offset: 0x2f4
	// Line 228, Address: 0x3c6038, Func Offset: 0x2f8
	// Line 229, Address: 0x3c603c, Func Offset: 0x2fc
	// Line 231, Address: 0x3c6048, Func Offset: 0x308
	// Line 234, Address: 0x3c604c, Func Offset: 0x30c
	// Line 260, Address: 0x3c6058, Func Offset: 0x318
	// Func End, Address: 0x3c6088, Func Offset: 0x348
}

// xGridCheckBound<Q219@unnamed@xWad2_cpp@24cb_decal_sphere_hits_ent>__FR5xGridRC6xBoundRC7xQCDataRQ219@unnamed@xWad2_cpp@24cb_decal_sphere_hits_ent_v
// Start address: 0x404310
void xGridCheckBound(xGrid& grid, xBound& bound, xQCData& qcd, cb_decal_sphere_hits_ent& cb)
{
	xGridIterator it;
	xBox box;
	int32 lower_x;
	int32 lower_z;
	int32 upper_x;
	int32 upper_z;
	xGridBound* cell;
	int32 gx;
	int32 gz;
	// Line 195, Address: 0x404310, Func Offset: 0
	// Line 200, Address: 0x404338, Func Offset: 0x28
	// Line 195, Address: 0x40433c, Func Offset: 0x2c
	// Line 200, Address: 0x40434c, Func Offset: 0x3c
	// Line 206, Address: 0x40449c, Func Offset: 0x18c
	// Line 207, Address: 0x4044c4, Func Offset: 0x1b4
	// Line 222, Address: 0x4044d4, Func Offset: 0x1c4
	// Line 213, Address: 0x4044dc, Func Offset: 0x1cc
	// Line 222, Address: 0x4044e0, Func Offset: 0x1d0
	// Line 215, Address: 0x40450c, Func Offset: 0x1fc
	// Line 222, Address: 0x404514, Func Offset: 0x204
	// Line 215, Address: 0x40452c, Func Offset: 0x21c
	// Line 222, Address: 0x404534, Func Offset: 0x224
	// Line 215, Address: 0x404538, Func Offset: 0x228
	// Line 222, Address: 0x40453c, Func Offset: 0x22c
	// Line 215, Address: 0x404540, Func Offset: 0x230
	// Line 222, Address: 0x404544, Func Offset: 0x234
	// Line 215, Address: 0x404558, Func Offset: 0x248
	// Line 222, Address: 0x40455c, Func Offset: 0x24c
	// Line 215, Address: 0x404564, Func Offset: 0x254
	// Line 222, Address: 0x404568, Func Offset: 0x258
	// Line 218, Address: 0x404578, Func Offset: 0x268
	// Line 206, Address: 0x404580, Func Offset: 0x270
	// Line 215, Address: 0x404588, Func Offset: 0x278
	// Line 222, Address: 0x4045a0, Func Offset: 0x290
	// Line 215, Address: 0x4045a8, Func Offset: 0x298
	// Line 222, Address: 0x4045b0, Func Offset: 0x2a0
	// Line 215, Address: 0x4045b4, Func Offset: 0x2a4
	// Line 222, Address: 0x4045b8, Func Offset: 0x2a8
	// Line 215, Address: 0x4045c0, Func Offset: 0x2b0
	// Line 222, Address: 0x4045c4, Func Offset: 0x2b4
	// Line 215, Address: 0x4045cc, Func Offset: 0x2bc
	// Line 222, Address: 0x4045d0, Func Offset: 0x2c0
	// Line 215, Address: 0x4045f0, Func Offset: 0x2e0
	// Line 222, Address: 0x4045f4, Func Offset: 0x2e4
	// Line 215, Address: 0x404604, Func Offset: 0x2f4
	// Line 222, Address: 0x404608, Func Offset: 0x2f8
	// Line 215, Address: 0x404624, Func Offset: 0x314
	// Line 222, Address: 0x404628, Func Offset: 0x318
	// Line 215, Address: 0x40463c, Func Offset: 0x32c
	// Line 222, Address: 0x404640, Func Offset: 0x330
	// Line 215, Address: 0x404644, Func Offset: 0x334
	// Line 222, Address: 0x404648, Func Offset: 0x338
	// Line 221, Address: 0x40468c, Func Offset: 0x37c
	// Line 222, Address: 0x404690, Func Offset: 0x380
	// Line 221, Address: 0x40469c, Func Offset: 0x38c
	// Line 222, Address: 0x4046a8, Func Offset: 0x398
	// Line 221, Address: 0x4046c8, Func Offset: 0x3b8
	// Line 224, Address: 0x4046d8, Func Offset: 0x3c8
	// Line 227, Address: 0x4046e8, Func Offset: 0x3d8
	// Line 229, Address: 0x404760, Func Offset: 0x450
	// Line 228, Address: 0x404764, Func Offset: 0x454
	// Line 229, Address: 0x404768, Func Offset: 0x458
	// Line 231, Address: 0x404774, Func Offset: 0x464
	// Line 232, Address: 0x404778, Func Offset: 0x468
	// Line 231, Address: 0x40477c, Func Offset: 0x46c
	// Line 234, Address: 0x404784, Func Offset: 0x474
	// Line 227, Address: 0x40478c, Func Offset: 0x47c
	// Line 260, Address: 0x4047a8, Func Offset: 0x498
	// Func End, Address: 0x4047dc, Func Offset: 0x4cc
}

// xGridCheckBound<Q219@unnamed@xWad2_cpp@17cb_decal_hits_ent>__FR5xGridRC6xBoundRC7xQCDataRQ219@unnamed@xWad2_cpp@17cb_decal_hits_ent_v
// Start address: 0x4047e0
void xGridCheckBound(xGrid& grid, xBound& bound, xQCData& qcd, cb_decal_hits_ent& cb)
{
	xGridIterator it;
	xBox box;
	int32 lower_x;
	int32 lower_z;
	int32 upper_x;
	int32 upper_z;
	xGridBound* cell;
	int32 gx;
	int32 gz;
	// Line 195, Address: 0x4047e0, Func Offset: 0
	// Line 200, Address: 0x404808, Func Offset: 0x28
	// Line 195, Address: 0x40480c, Func Offset: 0x2c
	// Line 200, Address: 0x40481c, Func Offset: 0x3c
	// Line 206, Address: 0x40496c, Func Offset: 0x18c
	// Line 207, Address: 0x404994, Func Offset: 0x1b4
	// Line 222, Address: 0x4049a4, Func Offset: 0x1c4
	// Line 213, Address: 0x4049ac, Func Offset: 0x1cc
	// Line 222, Address: 0x4049b0, Func Offset: 0x1d0
	// Line 215, Address: 0x4049dc, Func Offset: 0x1fc
	// Line 222, Address: 0x4049e4, Func Offset: 0x204
	// Line 215, Address: 0x404a18, Func Offset: 0x238
	// Line 222, Address: 0x404a1c, Func Offset: 0x23c
	// Line 215, Address: 0x404a2c, Func Offset: 0x24c
	// Line 222, Address: 0x404a30, Func Offset: 0x250
	// Line 215, Address: 0x404a4c, Func Offset: 0x26c
	// Line 222, Address: 0x404a50, Func Offset: 0x270
	// Line 215, Address: 0x404a64, Func Offset: 0x284
	// Line 222, Address: 0x404a68, Func Offset: 0x288
	// Line 215, Address: 0x404a6c, Func Offset: 0x28c
	// Line 222, Address: 0x404a70, Func Offset: 0x290
	// Line 215, Address: 0x404a88, Func Offset: 0x2a8
	// Line 222, Address: 0x404a90, Func Offset: 0x2b0
	// Line 218, Address: 0x404aa0, Func Offset: 0x2c0
	// Line 206, Address: 0x404aa8, Func Offset: 0x2c8
	// Line 215, Address: 0x404ab0, Func Offset: 0x2d0
	// Line 222, Address: 0x404ad0, Func Offset: 0x2f0
	// Line 221, Address: 0x404af4, Func Offset: 0x314
	// Line 222, Address: 0x404af8, Func Offset: 0x318
	// Line 221, Address: 0x404b04, Func Offset: 0x324
	// Line 222, Address: 0x404b10, Func Offset: 0x330
	// Line 221, Address: 0x404b30, Func Offset: 0x350
	// Line 224, Address: 0x404b40, Func Offset: 0x360
	// Line 227, Address: 0x404b50, Func Offset: 0x370
	// Line 229, Address: 0x404bc8, Func Offset: 0x3e8
	// Line 228, Address: 0x404bcc, Func Offset: 0x3ec
	// Line 229, Address: 0x404bd0, Func Offset: 0x3f0
	// Line 231, Address: 0x404bdc, Func Offset: 0x3fc
	// Line 232, Address: 0x404be0, Func Offset: 0x400
	// Line 231, Address: 0x404be4, Func Offset: 0x404
	// Line 234, Address: 0x404bec, Func Offset: 0x40c
	// Line 227, Address: 0x404bf4, Func Offset: 0x414
	// Line 260, Address: 0x404c10, Func Offset: 0x430
	// Func End, Address: 0x404c44, Func Offset: 0x464
}

// xGridCheckBound<Q35zFire19@unnamed@zFire_cpp@6cb_sss>__FR5xGridRC6xBoundRC7xQCDataRQ35zFire19@unnamed@zFire_cpp@6cb_sss_v
// Start address: 0x488cd0
void xGridCheckBound(xGrid& grid, xBound& bound, xQCData& qcd, cb_sss& cb)
{
	xGridIterator it;
	xBox box;
	int32 lower_x;
	int32 lower_z;
	int32 upper_x;
	int32 upper_z;
	xGridBound* cell;
	int32 gx;
	int32 gz;
	// Line 195, Address: 0x488cd0, Func Offset: 0
	// Line 200, Address: 0x488cdc, Func Offset: 0xc
	// Line 195, Address: 0x488ce0, Func Offset: 0x10
	// Line 200, Address: 0x488ce4, Func Offset: 0x14
	// Line 195, Address: 0x488ce8, Func Offset: 0x18
	// Line 200, Address: 0x488d08, Func Offset: 0x38
	// Line 195, Address: 0x488d0c, Func Offset: 0x3c
	// Line 200, Address: 0x488d10, Func Offset: 0x40
	// Line 206, Address: 0x488d24, Func Offset: 0x54
	// Line 207, Address: 0x488d30, Func Offset: 0x60
	// Line 206, Address: 0x488d34, Func Offset: 0x64
	// Line 207, Address: 0x488d38, Func Offset: 0x68
	// Line 222, Address: 0x488d44, Func Offset: 0x74
	// Line 215, Address: 0x488d64, Func Offset: 0x94
	// Line 222, Address: 0x488d6c, Func Offset: 0x9c
	// Line 215, Address: 0x488d7c, Func Offset: 0xac
	// Line 222, Address: 0x488d80, Func Offset: 0xb0
	// Line 215, Address: 0x488d9c, Func Offset: 0xcc
	// Line 222, Address: 0x488db0, Func Offset: 0xe0
	// Line 215, Address: 0x488db4, Func Offset: 0xe4
	// Line 222, Address: 0x488db8, Func Offset: 0xe8
	// Line 218, Address: 0x488dd0, Func Offset: 0x100
	// Line 215, Address: 0x488dd8, Func Offset: 0x108
	// Line 222, Address: 0x488de0, Func Offset: 0x110
	// Line 215, Address: 0x488dec, Func Offset: 0x11c
	// Line 222, Address: 0x488df8, Func Offset: 0x128
	// Line 220, Address: 0x488e0c, Func Offset: 0x13c
	// Line 222, Address: 0x488e10, Func Offset: 0x140
	// Line 221, Address: 0x488e34, Func Offset: 0x164
	// Line 222, Address: 0x488e38, Func Offset: 0x168
	// Line 221, Address: 0x488e44, Func Offset: 0x174
	// Line 222, Address: 0x488e50, Func Offset: 0x180
	// Line 221, Address: 0x488e70, Func Offset: 0x1a0
	// Line 224, Address: 0x488e80, Func Offset: 0x1b0
	// Line 227, Address: 0x488e90, Func Offset: 0x1c0
	// Line 229, Address: 0x488ea0, Func Offset: 0x1d0
	// Line 228, Address: 0x488ea4, Func Offset: 0x1d4
	// Line 229, Address: 0x488ea8, Func Offset: 0x1d8
	// Line 231, Address: 0x488eb4, Func Offset: 0x1e4
	// Line 234, Address: 0x488eb8, Func Offset: 0x1e8
	// Line 260, Address: 0x488ec0, Func Offset: 0x1f0
	// Func End, Address: 0x488eec, Func Offset: 0x21c
}

// xGridCheckBound<Q35zFire19@unnamed@zFire_cpp@5cb_ss>__FR5xGridRC6xBoundRC7xQCDataRQ35zFire19@unnamed@zFire_cpp@5cb_ss_v
// Start address: 0x488ef0
void xGridCheckBound(xGrid& grid, xBound& bound, xQCData& qcd, cb_ss& cb)
{
	xGridIterator it;
	xBox box;
	int32 lower_x;
	int32 lower_z;
	int32 upper_x;
	int32 upper_z;
	xGridBound* cell;
	int32 gx;
	int32 gz;
	// Line 195, Address: 0x488ef0, Func Offset: 0
	// Line 200, Address: 0x488efc, Func Offset: 0xc
	// Line 195, Address: 0x488f00, Func Offset: 0x10
	// Line 200, Address: 0x488f04, Func Offset: 0x14
	// Line 195, Address: 0x488f08, Func Offset: 0x18
	// Line 200, Address: 0x488f28, Func Offset: 0x38
	// Line 195, Address: 0x488f2c, Func Offset: 0x3c
	// Line 200, Address: 0x488f30, Func Offset: 0x40
	// Line 206, Address: 0x488f44, Func Offset: 0x54
	// Line 207, Address: 0x488f50, Func Offset: 0x60
	// Line 206, Address: 0x488f54, Func Offset: 0x64
	// Line 207, Address: 0x488f58, Func Offset: 0x68
	// Line 222, Address: 0x488f64, Func Offset: 0x74
	// Line 215, Address: 0x488f84, Func Offset: 0x94
	// Line 222, Address: 0x488f8c, Func Offset: 0x9c
	// Line 215, Address: 0x488f9c, Func Offset: 0xac
	// Line 222, Address: 0x488fa0, Func Offset: 0xb0
	// Line 215, Address: 0x488fb0, Func Offset: 0xc0
	// Line 222, Address: 0x488fb8, Func Offset: 0xc8
	// Line 218, Address: 0x488fc8, Func Offset: 0xd8
	// Line 215, Address: 0x488fd0, Func Offset: 0xe0
	// Line 222, Address: 0x488fd8, Func Offset: 0xe8
	// Line 220, Address: 0x488fec, Func Offset: 0xfc
	// Line 222, Address: 0x488ff0, Func Offset: 0x100
	// Line 221, Address: 0x489014, Func Offset: 0x124
	// Line 222, Address: 0x489018, Func Offset: 0x128
	// Line 221, Address: 0x489024, Func Offset: 0x134
	// Line 222, Address: 0x489030, Func Offset: 0x140
	// Line 221, Address: 0x489050, Func Offset: 0x160
	// Line 224, Address: 0x489060, Func Offset: 0x170
	// Line 227, Address: 0x489070, Func Offset: 0x180
	// Line 229, Address: 0x489080, Func Offset: 0x190
	// Line 228, Address: 0x489084, Func Offset: 0x194
	// Line 229, Address: 0x489088, Func Offset: 0x198
	// Line 231, Address: 0x489094, Func Offset: 0x1a4
	// Line 234, Address: 0x489098, Func Offset: 0x1a8
	// Line 260, Address: 0x4890a0, Func Offset: 0x1b0
	// Func End, Address: 0x4890cc, Func Offset: 0x1dc
}

// xGridCheckBound<Q232@unnamed@zReactiveAnimation_cpp@11check_bound>__FR5xGridRC6xBoundRC7xQCDataRQ232@unnamed@zReactiveAnimation_cpp@11check_bound_v
// Start address: 0x495850
void xGridCheckBound(xGrid& grid, xBound& bound, xQCData& qcd, check_bound& cb)
{
	xGridIterator it;
	xBox box;
	int32 lower_x;
	int32 lower_z;
	int32 upper_x;
	int32 upper_z;
	xGridBound* cell;
	int32 gx;
	int32 gz;
	// Line 195, Address: 0x495850, Func Offset: 0
	// Line 200, Address: 0x49585c, Func Offset: 0xc
	// Line 195, Address: 0x495860, Func Offset: 0x10
	// Line 200, Address: 0x495864, Func Offset: 0x14
	// Line 195, Address: 0x495868, Func Offset: 0x18
	// Line 200, Address: 0x495878, Func Offset: 0x28
	// Line 195, Address: 0x49587c, Func Offset: 0x2c
	// Line 200, Address: 0x495894, Func Offset: 0x44
	// Line 206, Address: 0x4958a4, Func Offset: 0x54
	// Line 207, Address: 0x4958b0, Func Offset: 0x60
	// Line 206, Address: 0x4958b4, Func Offset: 0x64
	// Line 207, Address: 0x4958b8, Func Offset: 0x68
	// Line 222, Address: 0x4958c4, Func Offset: 0x74
	// Line 215, Address: 0x4958f0, Func Offset: 0xa0
	// Line 222, Address: 0x4958f4, Func Offset: 0xa4
	// Line 215, Address: 0x495900, Func Offset: 0xb0
	// Line 222, Address: 0x495904, Func Offset: 0xb4
	// Line 215, Address: 0x495934, Func Offset: 0xe4
	// Line 222, Address: 0x495940, Func Offset: 0xf0
	// Line 218, Address: 0x495950, Func Offset: 0x100
	// Line 215, Address: 0x495958, Func Offset: 0x108
	// Line 222, Address: 0x495960, Func Offset: 0x110
	// Line 221, Address: 0x495984, Func Offset: 0x134
	// Line 222, Address: 0x495988, Func Offset: 0x138
	// Line 221, Address: 0x495994, Func Offset: 0x144
	// Line 222, Address: 0x4959a0, Func Offset: 0x150
	// Line 221, Address: 0x4959c0, Func Offset: 0x170
	// Line 224, Address: 0x4959d0, Func Offset: 0x180
	// Line 227, Address: 0x4959e0, Func Offset: 0x190
	// Line 229, Address: 0x4959f0, Func Offset: 0x1a0
	// Line 228, Address: 0x4959f4, Func Offset: 0x1a4
	// Line 229, Address: 0x4959f8, Func Offset: 0x1a8
	// Line 231, Address: 0x495a04, Func Offset: 0x1b4
	// Line 234, Address: 0x495a08, Func Offset: 0x1b8
	// Line 260, Address: 0x495a10, Func Offset: 0x1c0
	// Func End, Address: 0x495a3c, Func Offset: 0x1ec
}

