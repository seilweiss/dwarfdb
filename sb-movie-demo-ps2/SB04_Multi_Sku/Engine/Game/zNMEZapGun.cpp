



void LaserRender_laser_pulser();
void LaserRender_laser_target();
void LaserApplyConfig_laser_repel();
void LaserApplyConfig_laser_pulser();
void LaserApplyConfig_laser_target();
void Shoot_Upd(float32 dt);
float32 DangerZoneRatio();
void CalcNewGunTip(xVec3* pos_tip);
void NewTimeUpdate(float32 dt);

// LaserRender_laser_pulser__Q26ZapGun12NMEZapomaticFv
// Start address: 0x1f4450
void NMEZapomatic::LaserRender_laser_pulser()
{
	xEnt* plyr;
	int32 num_bone;
	int32 idx;
	xMat4x3* mat_root;
	int32 i;
	xVec3 pos_tgt;
	// Line 1492, Address: 0x1f4450, Func Offset: 0
	// Line 1520, Address: 0x1f4454, Func Offset: 0x4
	// Line 1492, Address: 0x1f4458, Func Offset: 0x8
	// Line 1520, Address: 0x1f445c, Func Offset: 0xc
	// Line 1524, Address: 0x1f4474, Func Offset: 0x24
	// Func End, Address: 0x1f4480, Func Offset: 0x30
}

// LaserRender_laser_target__Q26ZapGun12NMEZapomaticFv
// Start address: 0x1f4480
void NMEZapomatic::LaserRender_laser_target()
{
	xEnt* plyr;
	int32 num_bone;
	int32 idx;
	xMat4x3* mat_root;
	int32 i;
	xVec3 pos_tgt;
	// Line 1457, Address: 0x1f4480, Func Offset: 0
	// Line 1460, Address: 0x1f44a8, Func Offset: 0x28
	// Line 1461, Address: 0x1f44ac, Func Offset: 0x2c
	// Line 1460, Address: 0x1f44b0, Func Offset: 0x30
	// Line 1461, Address: 0x1f44b8, Func Offset: 0x38
	// Line 1465, Address: 0x1f44bc, Func Offset: 0x3c
	// Line 1469, Address: 0x1f44ec, Func Offset: 0x6c
	// Line 1470, Address: 0x1f44f0, Func Offset: 0x70
	// Line 1471, Address: 0x1f44fc, Func Offset: 0x7c
	// Line 1472, Address: 0x1f452c, Func Offset: 0xac
	// Line 1473, Address: 0x1f4574, Func Offset: 0xf4
	// Line 1474, Address: 0x1f4578, Func Offset: 0xf8
	// Line 1473, Address: 0x1f457c, Func Offset: 0xfc
	// Line 1474, Address: 0x1f4580, Func Offset: 0x100
	// Line 1473, Address: 0x1f4584, Func Offset: 0x104
	// Line 1474, Address: 0x1f4588, Func Offset: 0x108
	// Line 1473, Address: 0x1f458c, Func Offset: 0x10c
	// Line 1474, Address: 0x1f45ac, Func Offset: 0x12c
	// Line 1475, Address: 0x1f45b4, Func Offset: 0x134
	// Line 1477, Address: 0x1f45c4, Func Offset: 0x144
	// Line 1479, Address: 0x1f45c8, Func Offset: 0x148
	// Line 1477, Address: 0x1f45cc, Func Offset: 0x14c
	// Line 1479, Address: 0x1f45d4, Func Offset: 0x154
	// Line 1480, Address: 0x1f45e4, Func Offset: 0x164
	// Line 1489, Address: 0x1f45ec, Func Offset: 0x16c
	// Func End, Address: 0x1f4618, Func Offset: 0x198
}

// LaserApplyConfig_laser_repel__Q26ZapGun12NMEZapomaticFv
// Start address: 0x1f4620
void LaserApplyConfig_laser_repel()
{
	int8* str_zapball;
	// Line 1369, Address: 0x1f4620, Func Offset: 0
	// Line 1372, Address: 0x1f4624, Func Offset: 0x4
	// Line 1369, Address: 0x1f4628, Func Offset: 0x8
	// Line 1373, Address: 0x1f462c, Func Offset: 0xc
	// Line 1391, Address: 0x1f464c, Func Offset: 0x2c
	// Line 1397, Address: 0x1f4658, Func Offset: 0x38
	// Line 1393, Address: 0x1f465c, Func Offset: 0x3c
	// Line 1397, Address: 0x1f4660, Func Offset: 0x40
	// Line 1393, Address: 0x1f4664, Func Offset: 0x44
	// Line 1394, Address: 0x1f4668, Func Offset: 0x48
	// Line 1395, Address: 0x1f4680, Func Offset: 0x60
	// Line 1397, Address: 0x1f4694, Func Offset: 0x74
	// Line 1395, Address: 0x1f4698, Func Offset: 0x78
	// Line 1397, Address: 0x1f469c, Func Offset: 0x7c
	// Line 1400, Address: 0x1f4710, Func Offset: 0xf0
	// Func End, Address: 0x1f471c, Func Offset: 0xfc
}

// LaserApplyConfig_laser_pulser__Q26ZapGun12NMEZapomaticFv
// Start address: 0x1f4720
void LaserApplyConfig_laser_pulser()
{
	int8* str_zapball;
	// Line 1335, Address: 0x1f4720, Func Offset: 0
	// Line 1338, Address: 0x1f4724, Func Offset: 0x4
	// Line 1335, Address: 0x1f4728, Func Offset: 0x8
	// Line 1339, Address: 0x1f472c, Func Offset: 0xc
	// Line 1357, Address: 0x1f474c, Func Offset: 0x2c
	// Line 1363, Address: 0x1f4758, Func Offset: 0x38
	// Line 1359, Address: 0x1f475c, Func Offset: 0x3c
	// Line 1363, Address: 0x1f4760, Func Offset: 0x40
	// Line 1359, Address: 0x1f4764, Func Offset: 0x44
	// Line 1360, Address: 0x1f4768, Func Offset: 0x48
	// Line 1363, Address: 0x1f476c, Func Offset: 0x4c
	// Line 1360, Address: 0x1f4770, Func Offset: 0x50
	// Line 1361, Address: 0x1f4784, Func Offset: 0x64
	// Line 1363, Address: 0x1f47a4, Func Offset: 0x84
	// Line 1366, Address: 0x1f4818, Func Offset: 0xf8
	// Func End, Address: 0x1f4824, Func Offset: 0x104
}

// LaserApplyConfig_laser_target__Q26ZapGun12NMEZapomaticFv
// Start address: 0x1f4830
void LaserApplyConfig_laser_target()
{
	int8* str_zapball;
	// Line 1301, Address: 0x1f4830, Func Offset: 0
	// Line 1304, Address: 0x1f4834, Func Offset: 0x4
	// Line 1301, Address: 0x1f4838, Func Offset: 0x8
	// Line 1305, Address: 0x1f483c, Func Offset: 0xc
	// Line 1323, Address: 0x1f485c, Func Offset: 0x2c
	// Line 1329, Address: 0x1f4868, Func Offset: 0x38
	// Line 1325, Address: 0x1f486c, Func Offset: 0x3c
	// Line 1329, Address: 0x1f4870, Func Offset: 0x40
	// Line 1325, Address: 0x1f4874, Func Offset: 0x44
	// Line 1326, Address: 0x1f4878, Func Offset: 0x48
	// Line 1329, Address: 0x1f487c, Func Offset: 0x4c
	// Line 1326, Address: 0x1f4880, Func Offset: 0x50
	// Line 1327, Address: 0x1f4894, Func Offset: 0x64
	// Line 1329, Address: 0x1f48b4, Func Offset: 0x84
	// Line 1332, Address: 0x1f4928, Func Offset: 0xf8
	// Func End, Address: 0x1f4934, Func Offset: 0x104
}

// Shoot_Upd__Q26ZapGun12NMEZapomaticFf
// Start address: 0x1f4940
void NMEZapomatic::Shoot_Upd(float32 dt)
{
	// Line 1057, Address: 0x1f4940, Func Offset: 0
	// Line 1060, Address: 0x1f4944, Func Offset: 0x4
	// Line 1057, Address: 0x1f4948, Func Offset: 0x8
	// Line 1060, Address: 0x1f494c, Func Offset: 0xc
	// Line 1057, Address: 0x1f4950, Func Offset: 0x10
	// Line 1060, Address: 0x1f4964, Func Offset: 0x24
	// Line 1061, Address: 0x1f49d4, Func Offset: 0x94
	// Line 1069, Address: 0x1f4a84, Func Offset: 0x144
	// Line 1061, Address: 0x1f4a88, Func Offset: 0x148
	// Line 1069, Address: 0x1f4b04, Func Offset: 0x1c4
	// Line 1073, Address: 0x1f4b20, Func Offset: 0x1e0
	// Line 1074, Address: 0x1f4d58, Func Offset: 0x418
	// Line 1075, Address: 0x1f4d74, Func Offset: 0x434
	// Line 1077, Address: 0x1f4da0, Func Offset: 0x460
	// Line 1078, Address: 0x1f4db0, Func Offset: 0x470
	// Line 1077, Address: 0x1f4db8, Func Offset: 0x478
	// Line 1078, Address: 0x1f4dbc, Func Offset: 0x47c
	// Line 1077, Address: 0x1f4dc0, Func Offset: 0x480
	// Line 1078, Address: 0x1f4dec, Func Offset: 0x4ac
	// Line 1077, Address: 0x1f4df0, Func Offset: 0x4b0
	// Line 1078, Address: 0x1f4df4, Func Offset: 0x4b4
	// Line 1080, Address: 0x1f4e08, Func Offset: 0x4c8
	// Line 1085, Address: 0x1f4e2c, Func Offset: 0x4ec
	// Line 1088, Address: 0x1f4e50, Func Offset: 0x510
	// Line 1089, Address: 0x1f4e54, Func Offset: 0x514
	// Line 1088, Address: 0x1f4e58, Func Offset: 0x518
	// Line 1089, Address: 0x1f4e5c, Func Offset: 0x51c
	// Line 1092, Address: 0x1f4e68, Func Offset: 0x528
	// Line 1097, Address: 0x1f4e70, Func Offset: 0x530
	// Line 1098, Address: 0x1f50a8, Func Offset: 0x768
	// Line 1100, Address: 0x1f50c4, Func Offset: 0x784
	// Line 1104, Address: 0x1f50f0, Func Offset: 0x7b0
	// Line 1103, Address: 0x1f50f4, Func Offset: 0x7b4
	// Line 1104, Address: 0x1f5104, Func Offset: 0x7c4
	// Line 1103, Address: 0x1f5108, Func Offset: 0x7c8
	// Line 1104, Address: 0x1f510c, Func Offset: 0x7cc
	// Line 1103, Address: 0x1f5110, Func Offset: 0x7d0
	// Line 1104, Address: 0x1f513c, Func Offset: 0x7fc
	// Line 1103, Address: 0x1f5140, Func Offset: 0x800
	// Line 1104, Address: 0x1f5144, Func Offset: 0x804
	// Line 1106, Address: 0x1f5174, Func Offset: 0x834
	// Line 1107, Address: 0x1f5178, Func Offset: 0x838
	// Line 1128, Address: 0x1f5198, Func Offset: 0x858
	// Line 1061, Address: 0x1f51a0, Func Offset: 0x860
	// Line 1073, Address: 0x1f51b8, Func Offset: 0x878
	// Line 1128, Address: 0x1f51c4, Func Offset: 0x884
	// Line 1073, Address: 0x1f51c8, Func Offset: 0x888
	// Line 1128, Address: 0x1f51d0, Func Offset: 0x890
	// Line 1073, Address: 0x1f51d8, Func Offset: 0x898
	// Line 1128, Address: 0x1f51e0, Func Offset: 0x8a0
	// Line 1073, Address: 0x1f51f4, Func Offset: 0x8b4
	// Line 1128, Address: 0x1f51fc, Func Offset: 0x8bc
	// Line 1073, Address: 0x1f5200, Func Offset: 0x8c0
	// Line 1128, Address: 0x1f5218, Func Offset: 0x8d8
	// Line 1073, Address: 0x1f5220, Func Offset: 0x8e0
	// Line 1074, Address: 0x1f5228, Func Offset: 0x8e8
	// Line 1128, Address: 0x1f522c, Func Offset: 0x8ec
	// Line 1074, Address: 0x1f5230, Func Offset: 0x8f0
	// Line 1128, Address: 0x1f5234, Func Offset: 0x8f4
	// Line 1074, Address: 0x1f523c, Func Offset: 0x8fc
	// Line 1128, Address: 0x1f5244, Func Offset: 0x904
	// Line 1079, Address: 0x1f5254, Func Offset: 0x914
	// Line 1082, Address: 0x1f5260, Func Offset: 0x920
	// Line 1083, Address: 0x1f5264, Func Offset: 0x924
	// Line 1128, Address: 0x1f5268, Func Offset: 0x928
	// Line 1084, Address: 0x1f5278, Func Offset: 0x938
	// Line 1097, Address: 0x1f5280, Func Offset: 0x940
	// Line 1128, Address: 0x1f528c, Func Offset: 0x94c
	// Line 1097, Address: 0x1f5290, Func Offset: 0x950
	// Line 1128, Address: 0x1f5298, Func Offset: 0x958
	// Line 1097, Address: 0x1f52a0, Func Offset: 0x960
	// Line 1128, Address: 0x1f52a8, Func Offset: 0x968
	// Line 1097, Address: 0x1f52bc, Func Offset: 0x97c
	// Line 1128, Address: 0x1f52c4, Func Offset: 0x984
	// Line 1097, Address: 0x1f52c8, Func Offset: 0x988
	// Line 1128, Address: 0x1f52e0, Func Offset: 0x9a0
	// Line 1097, Address: 0x1f52e8, Func Offset: 0x9a8
	// Line 1098, Address: 0x1f52f0, Func Offset: 0x9b0
	// Line 1128, Address: 0x1f52fc, Func Offset: 0x9bc
	// Line 1098, Address: 0x1f5300, Func Offset: 0x9c0
	// Line 1128, Address: 0x1f5304, Func Offset: 0x9c4
	// Line 1098, Address: 0x1f5308, Func Offset: 0x9c8
	// Line 1128, Address: 0x1f5320, Func Offset: 0x9e0
	// Line 1098, Address: 0x1f5340, Func Offset: 0xa00
	// Line 1128, Address: 0x1f5358, Func Offset: 0xa18
	// Line 1129, Address: 0x1f5368, Func Offset: 0xa28
	// Func End, Address: 0x1f5384, Func Offset: 0xa44
}

// DangerZoneRatio__Q26ZapGun12NMEZapomaticFv
// Start address: 0x1f5390
float32 NMEZapomatic::DangerZoneRatio()
{
	xVec3 pos_tgt;
	float32 r2_near;
	float32 r2_far;
	float32 rat;
	// Line 844, Address: 0x1f5390, Func Offset: 0
	// Line 848, Address: 0x1f5394, Func Offset: 0x4
	// Line 844, Address: 0x1f5398, Func Offset: 0x8
	// Line 845, Address: 0x1f53a8, Func Offset: 0x18
	// Line 848, Address: 0x1f53d4, Func Offset: 0x44
	// Line 850, Address: 0x1f5410, Func Offset: 0x80
	// Line 851, Address: 0x1f542c, Func Offset: 0x9c
	// Line 852, Address: 0x1f5430, Func Offset: 0xa0
	// Line 851, Address: 0x1f5434, Func Offset: 0xa4
	// Line 853, Address: 0x1f5438, Func Offset: 0xa8
	// Line 856, Address: 0x1f5444, Func Offset: 0xb4
	// Line 857, Address: 0x1f5460, Func Offset: 0xd0
	// Line 858, Address: 0x1f5464, Func Offset: 0xd4
	// Line 857, Address: 0x1f5468, Func Offset: 0xd8
	// Line 858, Address: 0x1f546c, Func Offset: 0xdc
	// Line 861, Address: 0x1f5470, Func Offset: 0xe0
	// Line 868, Address: 0x1f5488, Func Offset: 0xf8
	// Line 861, Address: 0x1f548c, Func Offset: 0xfc
	// Line 868, Address: 0x1f54b4, Func Offset: 0x124
	// Line 870, Address: 0x1f54bc, Func Offset: 0x12c
	// Line 872, Address: 0x1f54d8, Func Offset: 0x148
	// Line 876, Address: 0x1f54f0, Func Offset: 0x160
	// Line 877, Address: 0x1f54f4, Func Offset: 0x164
	// Line 882, Address: 0x1f5500, Func Offset: 0x170
	// Line 884, Address: 0x1f5514, Func Offset: 0x184
	// Line 848, Address: 0x1f5538, Func Offset: 0x1a8
	// Line 887, Address: 0x1f554c, Func Offset: 0x1bc
	// Func End, Address: 0x1f5564, Func Offset: 0x1d4
}

// CalcNewGunTip__Q26ZapGun12NMEZapomaticFP5xVec3
// Start address: 0x1f5570
void NMEZapomatic::CalcNewGunTip(xVec3* pos_tip)
{
	zNMECommon* npc;
	xMat4x3* mat_root;
	int32 idx;
	xVec3 vec_offset;
	xMat4x3* mat_bone;
	xVec3 pos_gun;
	// Line 776, Address: 0x1f5570, Func Offset: 0
	// Line 777, Address: 0x1f5578, Func Offset: 0x8
	// Line 782, Address: 0x1f557c, Func Offset: 0xc
	// Line 784, Address: 0x1f55c4, Func Offset: 0x54
	// Line 783, Address: 0x1f55d4, Func Offset: 0x64
	// Line 784, Address: 0x1f55dc, Func Offset: 0x6c
	// Line 785, Address: 0x1f55f0, Func Offset: 0x80
	// Line 788, Address: 0x1f55f8, Func Offset: 0x88
	// Line 787, Address: 0x1f5608, Func Offset: 0x98
	// Line 788, Address: 0x1f5610, Func Offset: 0xa0
	// Line 790, Address: 0x1f5628, Func Offset: 0xb8
	// Line 798, Address: 0x1f562c, Func Offset: 0xbc
	// Line 790, Address: 0x1f5630, Func Offset: 0xc0
	// Line 798, Address: 0x1f5634, Func Offset: 0xc4
	// Line 799, Address: 0x1f563c, Func Offset: 0xcc
	// Line 798, Address: 0x1f5640, Func Offset: 0xd0
	// Line 799, Address: 0x1f5658, Func Offset: 0xe8
	// Line 798, Address: 0x1f565c, Func Offset: 0xec
	// Line 799, Address: 0x1f5660, Func Offset: 0xf0
	// Line 800, Address: 0x1f56b4, Func Offset: 0x144
	// Line 801, Address: 0x1f56e4, Func Offset: 0x174
	// Line 802, Address: 0x1f572c, Func Offset: 0x1bc
	// Line 804, Address: 0x1f5758, Func Offset: 0x1e8
	// Line 802, Address: 0x1f5764, Func Offset: 0x1f4
	// Line 804, Address: 0x1f5768, Func Offset: 0x1f8
	// Line 806, Address: 0x1f5770, Func Offset: 0x200
	// Func End, Address: 0x1f5778, Func Offset: 0x208
}

// NewTimeUpdate__Q26ZapGun12NMEZapomaticFf
// Start address: 0x1f5780
void NMEZapomatic::NewTimeUpdate(float32 dt)
{
	// Line 640, Address: 0x1f5780, Func Offset: 0
	// Line 643, Address: 0x1f5798, Func Offset: 0x18
	// Line 646, Address: 0x1f57a4, Func Offset: 0x24
	// Line 651, Address: 0x1f57d8, Func Offset: 0x58
	// Line 653, Address: 0x1f57dc, Func Offset: 0x5c
	// Line 651, Address: 0x1f57e0, Func Offset: 0x60
	// Line 653, Address: 0x1f5800, Func Offset: 0x80
	// Line 658, Address: 0x1f5840, Func Offset: 0xc0
	// Line 659, Address: 0x1f59d4, Func Offset: 0x254
	// Line 661, Address: 0x1f59dc, Func Offset: 0x25c
	// Line 664, Address: 0x1f5b90, Func Offset: 0x410
	// Line 665, Address: 0x1f5b9c, Func Offset: 0x41c
	// Line 667, Address: 0x1f5ba4, Func Offset: 0x424
	// Line 674, Address: 0x1f5f90, Func Offset: 0x810
	// Line 675, Address: 0x1f5f9c, Func Offset: 0x81c
	// Line 677, Address: 0x1f6388, Func Offset: 0xc08
	// Line 658, Address: 0x1f63a8, Func Offset: 0xc28
	// Line 661, Address: 0x1f63c0, Func Offset: 0xc40
	// Line 677, Address: 0x1f63e0, Func Offset: 0xc60
	// Line 661, Address: 0x1f63ec, Func Offset: 0xc6c
	// Line 677, Address: 0x1f63f0, Func Offset: 0xc70
	// Line 661, Address: 0x1f63f4, Func Offset: 0xc74
	// Line 677, Address: 0x1f63f8, Func Offset: 0xc78
	// Line 661, Address: 0x1f63fc, Func Offset: 0xc7c
	// Line 677, Address: 0x1f6404, Func Offset: 0xc84
	// Line 661, Address: 0x1f640c, Func Offset: 0xc8c
	// Line 677, Address: 0x1f6410, Func Offset: 0xc90
	// Line 661, Address: 0x1f641c, Func Offset: 0xc9c
	// Line 677, Address: 0x1f6420, Func Offset: 0xca0
	// Line 661, Address: 0x1f6428, Func Offset: 0xca8
	// Line 677, Address: 0x1f642c, Func Offset: 0xcac
	// Line 661, Address: 0x1f6430, Func Offset: 0xcb0
	// Line 677, Address: 0x1f643c, Func Offset: 0xcbc
	// Line 661, Address: 0x1f6440, Func Offset: 0xcc0
	// Line 677, Address: 0x1f6448, Func Offset: 0xcc8
	// Line 661, Address: 0x1f644c, Func Offset: 0xccc
	// Line 677, Address: 0x1f6450, Func Offset: 0xcd0
	// Line 662, Address: 0x1f6458, Func Offset: 0xcd8
	// Line 667, Address: 0x1f6460, Func Offset: 0xce0
	// Line 677, Address: 0x1f647c, Func Offset: 0xcfc
	// Line 667, Address: 0x1f6480, Func Offset: 0xd00
	// Line 677, Address: 0x1f6484, Func Offset: 0xd04
	// Line 667, Address: 0x1f6488, Func Offset: 0xd08
	// Line 677, Address: 0x1f6494, Func Offset: 0xd14
	// Line 667, Address: 0x1f6498, Func Offset: 0xd18
	// Line 677, Address: 0x1f649c, Func Offset: 0xd1c
	// Line 667, Address: 0x1f64a0, Func Offset: 0xd20
	// Line 677, Address: 0x1f64a8, Func Offset: 0xd28
	// Line 667, Address: 0x1f64b4, Func Offset: 0xd34
	// Line 677, Address: 0x1f64b8, Func Offset: 0xd38
	// Line 667, Address: 0x1f64c0, Func Offset: 0xd40
	// Line 677, Address: 0x1f64d8, Func Offset: 0xd58
	// Line 667, Address: 0x1f64e0, Func Offset: 0xd60
	// Line 677, Address: 0x1f64f0, Func Offset: 0xd70
	// Line 667, Address: 0x1f64fc, Func Offset: 0xd7c
	// Line 677, Address: 0x1f6500, Func Offset: 0xd80
	// Line 667, Address: 0x1f6504, Func Offset: 0xd84
	// Line 677, Address: 0x1f6508, Func Offset: 0xd88
	// Line 667, Address: 0x1f650c, Func Offset: 0xd8c
	// Line 677, Address: 0x1f6514, Func Offset: 0xd94
	// Line 667, Address: 0x1f651c, Func Offset: 0xd9c
	// Line 677, Address: 0x1f6520, Func Offset: 0xda0
	// Line 667, Address: 0x1f652c, Func Offset: 0xdac
	// Line 677, Address: 0x1f6530, Func Offset: 0xdb0
	// Line 667, Address: 0x1f6538, Func Offset: 0xdb8
	// Line 677, Address: 0x1f653c, Func Offset: 0xdbc
	// Line 667, Address: 0x1f6540, Func Offset: 0xdc0
	// Line 677, Address: 0x1f654c, Func Offset: 0xdcc
	// Line 667, Address: 0x1f6550, Func Offset: 0xdd0
	// Line 677, Address: 0x1f6558, Func Offset: 0xdd8
	// Line 667, Address: 0x1f655c, Func Offset: 0xddc
	// Line 677, Address: 0x1f6560, Func Offset: 0xde0
	// Line 675, Address: 0x1f6570, Func Offset: 0xdf0
	// Line 677, Address: 0x1f658c, Func Offset: 0xe0c
	// Line 675, Address: 0x1f6590, Func Offset: 0xe10
	// Line 677, Address: 0x1f6594, Func Offset: 0xe14
	// Line 675, Address: 0x1f6598, Func Offset: 0xe18
	// Line 677, Address: 0x1f65a4, Func Offset: 0xe24
	// Line 675, Address: 0x1f65a8, Func Offset: 0xe28
	// Line 677, Address: 0x1f65ac, Func Offset: 0xe2c
	// Line 675, Address: 0x1f65b0, Func Offset: 0xe30
	// Line 677, Address: 0x1f65b8, Func Offset: 0xe38
	// Line 675, Address: 0x1f65c4, Func Offset: 0xe44
	// Line 677, Address: 0x1f65c8, Func Offset: 0xe48
	// Line 675, Address: 0x1f65d0, Func Offset: 0xe50
	// Line 677, Address: 0x1f65e8, Func Offset: 0xe68
	// Line 675, Address: 0x1f65f0, Func Offset: 0xe70
	// Line 677, Address: 0x1f6600, Func Offset: 0xe80
	// Line 675, Address: 0x1f660c, Func Offset: 0xe8c
	// Line 677, Address: 0x1f6610, Func Offset: 0xe90
	// Line 675, Address: 0x1f6614, Func Offset: 0xe94
	// Line 677, Address: 0x1f6618, Func Offset: 0xe98
	// Line 675, Address: 0x1f661c, Func Offset: 0xe9c
	// Line 677, Address: 0x1f6624, Func Offset: 0xea4
	// Line 675, Address: 0x1f662c, Func Offset: 0xeac
	// Line 677, Address: 0x1f6630, Func Offset: 0xeb0
	// Line 675, Address: 0x1f663c, Func Offset: 0xebc
	// Line 677, Address: 0x1f6640, Func Offset: 0xec0
	// Line 675, Address: 0x1f6648, Func Offset: 0xec8
	// Line 677, Address: 0x1f664c, Func Offset: 0xecc
	// Line 675, Address: 0x1f6650, Func Offset: 0xed0
	// Line 677, Address: 0x1f665c, Func Offset: 0xedc
	// Line 675, Address: 0x1f6660, Func Offset: 0xee0
	// Line 677, Address: 0x1f6668, Func Offset: 0xee8
	// Line 675, Address: 0x1f666c, Func Offset: 0xeec
	// Line 677, Address: 0x1f6670, Func Offset: 0xef0
	// Line 678, Address: 0x1f6680, Func Offset: 0xf00
	// Func End, Address: 0x1f6698, Func Offset: 0xf18
}

