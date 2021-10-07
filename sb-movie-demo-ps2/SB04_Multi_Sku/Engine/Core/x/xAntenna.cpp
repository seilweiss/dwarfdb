



void xAntennaSceneReset();
void xAntennaRemoveAll();
void xAntennaRemove(xEnt* pParent, int32 startBone, int32 endBone);
void xAntennaUpdate(float32 dt);
void xAntennaAddAntenna(xEnt* pParent, float32 length, float32 rigidity, int32 startBone, int32 endBone, uint8 noLight);
void xAntennaRender();
void xAntennaScenePostInit();
void xAntennaSceneInit();
void xAntennaInit();
void RenderOneAntennaSparks(xAntenna* pAntenna);
void RenderOneAntenna(xAntenna* pAntenna);
void UpdateOneAntenna(xAntenna* pAntenna, float32 dt);

// xAntennaSceneReset__Fv
// Start address: 0x43cc60
void xAntennaSceneReset()
{
	int32 i;
	xAntenna* pAntenna;
	xVec3 tipIdealPosition;
	xModelInstance* pModel;
	xVec3 antennaBase;
	xVec3 antennaDelta;
	xMat4x3* pMat;
	// Line 803, Address: 0x43cc60, Func Offset: 0
	// Line 805, Address: 0x43cc74, Func Offset: 0x14
	// Line 803, Address: 0x43cc78, Func Offset: 0x18
	// Line 805, Address: 0x43cc7c, Func Offset: 0x1c
	// Line 803, Address: 0x43cc80, Func Offset: 0x20
	// Line 805, Address: 0x43cc84, Func Offset: 0x24
	// Line 803, Address: 0x43cc88, Func Offset: 0x28
	// Line 805, Address: 0x43cc8c, Func Offset: 0x2c
	// Line 803, Address: 0x43cc90, Func Offset: 0x30
	// Line 805, Address: 0x43cc94, Func Offset: 0x34
	// Line 803, Address: 0x43cc98, Func Offset: 0x38
	// Line 805, Address: 0x43cc9c, Func Offset: 0x3c
	// Line 803, Address: 0x43cca0, Func Offset: 0x40
	// Line 805, Address: 0x43cca4, Func Offset: 0x44
	// Line 803, Address: 0x43cca8, Func Offset: 0x48
	// Line 805, Address: 0x43ccac, Func Offset: 0x4c
	// Line 803, Address: 0x43ccb0, Func Offset: 0x50
	// Line 807, Address: 0x43ccc0, Func Offset: 0x60
	// Line 808, Address: 0x43cce0, Func Offset: 0x80
	// Line 810, Address: 0x43ccec, Func Offset: 0x8c
	// Line 813, Address: 0x43ccf8, Func Offset: 0x98
	// Line 814, Address: 0x43cd00, Func Offset: 0xa0
	// Line 818, Address: 0x43cd0c, Func Offset: 0xac
	// Line 819, Address: 0x43cd30, Func Offset: 0xd0
	// Line 823, Address: 0x43cd38, Func Offset: 0xd8
	// Line 828, Address: 0x43cd40, Func Offset: 0xe0
	// Line 823, Address: 0x43cd44, Func Offset: 0xe4
	// Line 828, Address: 0x43cd48, Func Offset: 0xe8
	// Line 826, Address: 0x43cd4c, Func Offset: 0xec
	// Line 828, Address: 0x43cd58, Func Offset: 0xf8
	// Line 826, Address: 0x43cd6c, Func Offset: 0x10c
	// Line 828, Address: 0x43cd70, Func Offset: 0x110
	// Line 829, Address: 0x43cdbc, Func Offset: 0x15c
	// Line 830, Address: 0x43cdc0, Func Offset: 0x160
	// Line 831, Address: 0x43cdc4, Func Offset: 0x164
	// Line 830, Address: 0x43cdc8, Func Offset: 0x168
	// Line 831, Address: 0x43cdd0, Func Offset: 0x170
	// Line 832, Address: 0x43ce20, Func Offset: 0x1c0
	// Line 833, Address: 0x43ce38, Func Offset: 0x1d8
	// Line 834, Address: 0x43ce3c, Func Offset: 0x1dc
	// Line 836, Address: 0x43ce40, Func Offset: 0x1e0
	// Line 837, Address: 0x43ce50, Func Offset: 0x1f0
	// Func End, Address: 0x43ce88, Func Offset: 0x228
}

// xAntennaRemoveAll__Fv
// Start address: 0x43ce90
void xAntennaRemoveAll()
{
	// Line 797, Address: 0x43ce90, Func Offset: 0
	// Line 798, Address: 0x43cecc, Func Offset: 0x3c
	// Func End, Address: 0x43ced4, Func Offset: 0x44
}

// xAntennaRemove__FP4xEntii
// Start address: 0x43cee0
void xAntennaRemove(xEnt* pParent, int32 startBone, int32 endBone)
{
	int32 i;
	// Line 774, Address: 0x43cee0, Func Offset: 0
	// Line 777, Address: 0x43ceec, Func Offset: 0xc
	// Line 790, Address: 0x43cef8, Func Offset: 0x18
	// Line 777, Address: 0x43cf00, Func Offset: 0x20
	// Line 790, Address: 0x43cf04, Func Offset: 0x24
	// Line 791, Address: 0x43cf0c, Func Offset: 0x2c
	// Line 787, Address: 0x43cf3c, Func Offset: 0x5c
	// Line 782, Address: 0x43cf44, Func Offset: 0x64
	// Line 791, Address: 0x43cf50, Func Offset: 0x70
	// Func End, Address: 0x43cf58, Func Offset: 0x78
}

// xAntennaUpdate__Ff
// Start address: 0x43cf60
void xAntennaUpdate(float32 dt)
{
	int32 i;
	zNMECommon* nme;
	// Line 716, Address: 0x43cf60, Func Offset: 0
	// Line 719, Address: 0x43cf70, Func Offset: 0x10
	// Line 716, Address: 0x43cf74, Func Offset: 0x14
	// Line 719, Address: 0x43cf78, Func Offset: 0x18
	// Line 722, Address: 0x43cf88, Func Offset: 0x28
	// Line 724, Address: 0x43cf90, Func Offset: 0x30
	// Line 728, Address: 0x43cfa0, Func Offset: 0x40
	// Line 733, Address: 0x43cfbc, Func Offset: 0x5c
	// Line 738, Address: 0x43cfc8, Func Offset: 0x68
	// Line 743, Address: 0x43cfd4, Func Offset: 0x74
	// Line 745, Address: 0x43cfec, Func Offset: 0x8c
	// Line 746, Address: 0x43d004, Func Offset: 0xa4
	// Line 730, Address: 0x43d010, Func Offset: 0xb0
	// Line 746, Address: 0x43d018, Func Offset: 0xb8
	// Line 730, Address: 0x43d020, Func Offset: 0xc0
	// Line 746, Address: 0x43d024, Func Offset: 0xc4
	// Line 731, Address: 0x43d028, Func Offset: 0xc8
	// Line 735, Address: 0x43d030, Func Offset: 0xd0
	// Line 746, Address: 0x43d038, Func Offset: 0xd8
	// Line 735, Address: 0x43d040, Func Offset: 0xe0
	// Line 746, Address: 0x43d044, Func Offset: 0xe4
	// Line 736, Address: 0x43d048, Func Offset: 0xe8
	// Line 740, Address: 0x43d050, Func Offset: 0xf0
	// Line 746, Address: 0x43d058, Func Offset: 0xf8
	// Line 740, Address: 0x43d060, Func Offset: 0x100
	// Line 746, Address: 0x43d064, Func Offset: 0x104
	// Line 741, Address: 0x43d068, Func Offset: 0x108
	// Line 748, Address: 0x43d070, Func Offset: 0x110
	// Line 753, Address: 0x43d088, Func Offset: 0x128
	// Line 757, Address: 0x43d0ac, Func Offset: 0x14c
	// Line 758, Address: 0x43d0c4, Func Offset: 0x164
	// Line 750, Address: 0x43d0d0, Func Offset: 0x170
	// Line 758, Address: 0x43d0d8, Func Offset: 0x178
	// Line 750, Address: 0x43d0e0, Func Offset: 0x180
	// Line 758, Address: 0x43d0e4, Func Offset: 0x184
	// Line 751, Address: 0x43d0e8, Func Offset: 0x188
	// Line 760, Address: 0x43d0f0, Func Offset: 0x190
	// Line 761, Address: 0x43d0fc, Func Offset: 0x19c
	// Line 763, Address: 0x43d108, Func Offset: 0x1a8
	// Line 765, Address: 0x43d114, Func Offset: 0x1b4
	// Line 766, Address: 0x43d128, Func Offset: 0x1c8
	// Func End, Address: 0x43d140, Func Offset: 0x1e0
}

// xAntennaAddAntenna__FP4xEntffiib
// Start address: 0x43d140
void xAntennaAddAntenna(xEnt* pParent, float32 length, float32 rigidity, int32 startBone, int32 endBone, uint8 noLight)
{
	int32 i;
	xAntenna* pAntenna;
	xVec3 antennaBase;
	xVec3 antennaDelta;
	xVec3 tipIdealPosition;
	xMat4x3* pMat;
	// Line 664, Address: 0x43d140, Func Offset: 0
	// Line 665, Address: 0x43d144, Func Offset: 0x4
	// Line 664, Address: 0x43d148, Func Offset: 0x8
	// Line 665, Address: 0x43d14c, Func Offset: 0xc
	// Line 664, Address: 0x43d150, Func Offset: 0x10
	// Line 668, Address: 0x43d154, Func Offset: 0x14
	// Line 669, Address: 0x43d160, Func Offset: 0x20
	// Line 672, Address: 0x43d180, Func Offset: 0x40
	// Line 680, Address: 0x43d18c, Func Offset: 0x4c
	// Line 681, Address: 0x43d1a8, Func Offset: 0x68
	// Line 682, Address: 0x43d1ac, Func Offset: 0x6c
	// Line 689, Address: 0x43d1b0, Func Offset: 0x70
	// Line 683, Address: 0x43d1b4, Func Offset: 0x74
	// Line 689, Address: 0x43d1b8, Func Offset: 0x78
	// Line 684, Address: 0x43d1bc, Func Offset: 0x7c
	// Line 689, Address: 0x43d1c0, Func Offset: 0x80
	// Line 685, Address: 0x43d1c4, Func Offset: 0x84
	// Line 689, Address: 0x43d1c8, Func Offset: 0x88
	// Line 691, Address: 0x43d1d0, Func Offset: 0x90
	// Line 693, Address: 0x43d1e0, Func Offset: 0xa0
	// Line 694, Address: 0x43d1e4, Func Offset: 0xa4
	// Line 698, Address: 0x43d1ec, Func Offset: 0xac
	// Line 703, Address: 0x43d1f4, Func Offset: 0xb4
	// Line 698, Address: 0x43d1f8, Func Offset: 0xb8
	// Line 703, Address: 0x43d200, Func Offset: 0xc0
	// Line 698, Address: 0x43d204, Func Offset: 0xc4
	// Line 703, Address: 0x43d20c, Func Offset: 0xcc
	// Line 704, Address: 0x43d210, Func Offset: 0xd0
	// Line 703, Address: 0x43d214, Func Offset: 0xd4
	// Line 701, Address: 0x43d21c, Func Offset: 0xdc
	// Line 703, Address: 0x43d220, Func Offset: 0xe0
	// Line 701, Address: 0x43d234, Func Offset: 0xf4
	// Line 703, Address: 0x43d238, Func Offset: 0xf8
	// Line 701, Address: 0x43d23c, Func Offset: 0xfc
	// Line 703, Address: 0x43d240, Func Offset: 0x100
	// Line 704, Address: 0x43d244, Func Offset: 0x104
	// Line 703, Address: 0x43d248, Func Offset: 0x108
	// Line 701, Address: 0x43d24c, Func Offset: 0x10c
	// Line 703, Address: 0x43d250, Func Offset: 0x110
	// Line 704, Address: 0x43d25c, Func Offset: 0x11c
	// Line 703, Address: 0x43d260, Func Offset: 0x120
	// Line 705, Address: 0x43d298, Func Offset: 0x158
	// Line 706, Address: 0x43d2e8, Func Offset: 0x1a8
	// Line 709, Address: 0x43d300, Func Offset: 0x1c0
	// Line 711, Address: 0x43d308, Func Offset: 0x1c8
	// Line 712, Address: 0x43d340, Func Offset: 0x200
	// Func End, Address: 0x43d350, Func Offset: 0x210
}

// xAntennaRender__Fv
// Start address: 0x43d350
void xAntennaRender()
{
	int32 i;
	zNMECommon* nme;
	int32 i;
	zNMECommon* nme;
	// Line 577, Address: 0x43d350, Func Offset: 0
	// Line 578, Address: 0x43d368, Func Offset: 0x18
	// Line 584, Address: 0x43d374, Func Offset: 0x24
	// Line 578, Address: 0x43d378, Func Offset: 0x28
	// Line 584, Address: 0x43d37c, Func Offset: 0x2c
	// Line 587, Address: 0x43d388, Func Offset: 0x38
	// Line 588, Address: 0x43d398, Func Offset: 0x48
	// Line 589, Address: 0x43d3a8, Func Offset: 0x58
	// Line 591, Address: 0x43d3b8, Func Offset: 0x68
	// Line 594, Address: 0x43d3c8, Func Offset: 0x78
	// Line 596, Address: 0x43d3d4, Func Offset: 0x84
	// Line 600, Address: 0x43d3e0, Func Offset: 0x90
	// Line 602, Address: 0x43d3fc, Func Offset: 0xac
	// Line 604, Address: 0x43d408, Func Offset: 0xb8
	// Line 606, Address: 0x43d414, Func Offset: 0xc4
	// Line 607, Address: 0x43d42c, Func Offset: 0xdc
	// Line 608, Address: 0x43d430, Func Offset: 0xe0
	// Line 610, Address: 0x43d448, Func Offset: 0xf8
	// Line 613, Address: 0x43d46c, Func Offset: 0x11c
	// Line 616, Address: 0x43d470, Func Offset: 0x120
	// Line 617, Address: 0x43d498, Func Offset: 0x148
	// Line 620, Address: 0x43d4a0, Func Offset: 0x150
	// Line 623, Address: 0x43d4b0, Func Offset: 0x160
	// Line 624, Address: 0x43d4c0, Func Offset: 0x170
	// Line 625, Address: 0x43d4d0, Func Offset: 0x180
	// Line 627, Address: 0x43d4e0, Func Offset: 0x190
	// Line 629, Address: 0x43d4f0, Func Offset: 0x1a0
	// Line 632, Address: 0x43d4fc, Func Offset: 0x1ac
	// Line 634, Address: 0x43d504, Func Offset: 0x1b4
	// Line 638, Address: 0x43d514, Func Offset: 0x1c4
	// Line 640, Address: 0x43d530, Func Offset: 0x1e0
	// Line 642, Address: 0x43d53c, Func Offset: 0x1ec
	// Line 644, Address: 0x43d548, Func Offset: 0x1f8
	// Line 646, Address: 0x43d560, Func Offset: 0x210
	// Line 648, Address: 0x43d578, Func Offset: 0x228
	// Line 651, Address: 0x43d59c, Func Offset: 0x24c
	// Line 653, Address: 0x43d5a0, Func Offset: 0x250
	// Line 654, Address: 0x43d5a8, Func Offset: 0x258
	// Line 579, Address: 0x43d5b0, Func Offset: 0x260
	// Line 654, Address: 0x43d5b8, Func Offset: 0x268
	// Line 616, Address: 0x43d5c8, Func Offset: 0x278
	// Line 654, Address: 0x43d5d8, Func Offset: 0x288
	// Line 616, Address: 0x43d5e0, Func Offset: 0x290
	// Line 654, Address: 0x43d5ec, Func Offset: 0x29c
	// Line 616, Address: 0x43d5f4, Func Offset: 0x2a4
	// Line 656, Address: 0x43d628, Func Offset: 0x2d8
	// Line 658, Address: 0x43d630, Func Offset: 0x2e0
	// Line 660, Address: 0x43d640, Func Offset: 0x2f0
	// Func End, Address: 0x43d658, Func Offset: 0x308
}

// xAntennaScenePostInit__Fv
// Start address: 0x43d660
void xAntennaScenePostInit()
{
	// Line 574, Address: 0x43d660, Func Offset: 0
	// Func End, Address: 0x43d668, Func Offset: 0x8
}

// xAntennaSceneInit__Fv
// Start address: 0x43d670
void xAntennaSceneInit()
{
	// Line 550, Address: 0x43d670, Func Offset: 0
	// Line 552, Address: 0x43d674, Func Offset: 0x4
	// Line 550, Address: 0x43d678, Func Offset: 0x8
	// Line 552, Address: 0x43d67c, Func Offset: 0xc
	// Line 554, Address: 0x43d68c, Func Offset: 0x1c
	// Line 555, Address: 0x43d69c, Func Offset: 0x2c
	// Func End, Address: 0x43d6a8, Func Offset: 0x38
}

// xAntennaInit__Fv
// Start address: 0x43d6b0
void xAntennaInit()
{
	// Line 539, Address: 0x43d6b0, Func Offset: 0
	// Line 540, Address: 0x43d6b4, Func Offset: 0x4
	// Line 539, Address: 0x43d6b8, Func Offset: 0x8
	// Line 540, Address: 0x43d6bc, Func Offset: 0xc
	// Line 539, Address: 0x43d6c0, Func Offset: 0x10
	// Line 540, Address: 0x43d6c4, Func Offset: 0x14
	// Line 539, Address: 0x43d6c8, Func Offset: 0x18
	// Line 540, Address: 0x43d6d0, Func Offset: 0x20
	// Line 541, Address: 0x43d704, Func Offset: 0x54
	// Line 540, Address: 0x43d708, Func Offset: 0x58
	// Line 541, Address: 0x43d70c, Func Offset: 0x5c
	// Line 542, Address: 0x43d908, Func Offset: 0x258
	// Line 541, Address: 0x43d910, Func Offset: 0x260
	// Line 542, Address: 0x43d93c, Func Offset: 0x28c
	// Line 541, Address: 0x43d944, Func Offset: 0x294
	// Line 544, Address: 0x43d948, Func Offset: 0x298
	// Line 541, Address: 0x43d950, Func Offset: 0x2a0
	// Line 544, Address: 0x43d954, Func Offset: 0x2a4
	// Line 541, Address: 0x43d964, Func Offset: 0x2b4
	// Line 544, Address: 0x43d968, Func Offset: 0x2b8
	// Line 541, Address: 0x43d970, Func Offset: 0x2c0
	// Line 544, Address: 0x43d974, Func Offset: 0x2c4
	// Line 541, Address: 0x43d97c, Func Offset: 0x2cc
	// Line 544, Address: 0x43d980, Func Offset: 0x2d0
	// Line 543, Address: 0x43d984, Func Offset: 0x2d4
	// Line 544, Address: 0x43d988, Func Offset: 0x2d8
	// Line 543, Address: 0x43d994, Func Offset: 0x2e4
	// Line 544, Address: 0x43d998, Func Offset: 0x2e8
	// Line 543, Address: 0x43d99c, Func Offset: 0x2ec
	// Line 544, Address: 0x43d9a0, Func Offset: 0x2f0
	// Line 541, Address: 0x43d9cc, Func Offset: 0x31c
	// Line 544, Address: 0x43d9d0, Func Offset: 0x320
	// Line 545, Address: 0x43da04, Func Offset: 0x354
	// Line 544, Address: 0x43da08, Func Offset: 0x358
	// Line 545, Address: 0x43da0c, Func Offset: 0x35c
	// Line 544, Address: 0x43da10, Func Offset: 0x360
	// Line 545, Address: 0x43da14, Func Offset: 0x364
	// Line 544, Address: 0x43da18, Func Offset: 0x368
	// Line 545, Address: 0x43da1c, Func Offset: 0x36c
	// Line 544, Address: 0x43da20, Func Offset: 0x370
	// Line 546, Address: 0x43da80, Func Offset: 0x3d0
	// Line 547, Address: 0x43da88, Func Offset: 0x3d8
	// Func End, Address: 0x43daa0, Func Offset: 0x3f0
}

// RenderOneAntennaSparks__19@unnamed@xWad1_cpp@FP8xAntenna
// Start address: 0x43daa0
void RenderOneAntennaSparks(xAntenna* pAntenna)
{
	xMat4x3 antennaMat;
	xVec3 pos_emit;
	xVec3 dir_emit;
	en_nmesimp status;
	// Line 481, Address: 0x43daa0, Func Offset: 0
	// Line 482, Address: 0x43daac, Func Offset: 0xc
	// Line 488, Address: 0x43dabc, Func Offset: 0x1c
	// Line 482, Address: 0x43dac4, Func Offset: 0x24
	// Line 488, Address: 0x43dac8, Func Offset: 0x28
	// Line 482, Address: 0x43dad0, Func Offset: 0x30
	// Line 488, Address: 0x43dad4, Func Offset: 0x34
	// Line 492, Address: 0x43dadc, Func Offset: 0x3c
	// Line 495, Address: 0x43dae0, Func Offset: 0x40
	// Line 492, Address: 0x43dae4, Func Offset: 0x44
	// Line 493, Address: 0x43daf0, Func Offset: 0x50
	// Line 492, Address: 0x43dafc, Func Offset: 0x5c
	// Line 493, Address: 0x43db08, Func Offset: 0x68
	// Line 495, Address: 0x43db18, Func Offset: 0x78
	// Line 498, Address: 0x43db24, Func Offset: 0x84
	// Line 499, Address: 0x43db34, Func Offset: 0x94
	// Line 503, Address: 0x43db40, Func Offset: 0xa0
	// Line 507, Address: 0x43db50, Func Offset: 0xb0
	// Line 508, Address: 0x43db6c, Func Offset: 0xcc
	// Line 511, Address: 0x43db74, Func Offset: 0xd4
	// Line 518, Address: 0x43db90, Func Offset: 0xf0
	// Line 501, Address: 0x43db98, Func Offset: 0xf8
	// Line 518, Address: 0x43db9c, Func Offset: 0xfc
	// Line 501, Address: 0x43dba0, Func Offset: 0x100
	// Line 518, Address: 0x43dba4, Func Offset: 0x104
	// Line 502, Address: 0x43dbb4, Func Offset: 0x114
	// Line 516, Address: 0x43dbbc, Func Offset: 0x11c
	// Line 518, Address: 0x43dbc0, Func Offset: 0x120
	// Line 516, Address: 0x43dbc4, Func Offset: 0x124
	// Line 518, Address: 0x43dbc8, Func Offset: 0x128
	// Func End, Address: 0x43dbe8, Func Offset: 0x148
}

// RenderOneAntenna__19@unnamed@xWad1_cpp@FP8xAntenna
// Start address: 0x43dbf0
void RenderOneAntenna(xAntenna* pAntenna)
{
	xVec3 w;
	xVec3 h;
	xVec3 pos;
	xMat4x3 antennaMat;
	en_nmesimp status;
	xVec3 toCam;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RxObjSpace3DVertex sStripVert[4];
	// Line 388, Address: 0x43dbf0, Func Offset: 0
	// Line 389, Address: 0x43dc1c, Func Offset: 0x2c
	// Line 392, Address: 0x43dc2c, Func Offset: 0x3c
	// Line 393, Address: 0x43dc3c, Func Offset: 0x4c
	// Line 398, Address: 0x43dc44, Func Offset: 0x54
	// Line 406, Address: 0x43dc54, Func Offset: 0x64
	// Line 411, Address: 0x43dc58, Func Offset: 0x68
	// Line 406, Address: 0x43dc5c, Func Offset: 0x6c
	// Line 400, Address: 0x43dc60, Func Offset: 0x70
	// Line 406, Address: 0x43dc64, Func Offset: 0x74
	// Line 407, Address: 0x43dc6c, Func Offset: 0x7c
	// Line 411, Address: 0x43dc7c, Func Offset: 0x8c
	// Line 407, Address: 0x43dc80, Func Offset: 0x90
	// Line 400, Address: 0x43dc84, Func Offset: 0x94
	// Line 411, Address: 0x43dc88, Func Offset: 0x98
	// Line 400, Address: 0x43dc8c, Func Offset: 0x9c
	// Line 402, Address: 0x43dca0, Func Offset: 0xb0
	// Line 400, Address: 0x43dca4, Func Offset: 0xb4
	// Line 403, Address: 0x43dca8, Func Offset: 0xb8
	// Line 400, Address: 0x43dcb0, Func Offset: 0xc0
	// Line 403, Address: 0x43dcb4, Func Offset: 0xc4
	// Line 402, Address: 0x43dcb8, Func Offset: 0xc8
	// Line 400, Address: 0x43dcbc, Func Offset: 0xcc
	// Line 407, Address: 0x43dcc0, Func Offset: 0xd0
	// Line 402, Address: 0x43dcc4, Func Offset: 0xd4
	// Line 407, Address: 0x43dcc8, Func Offset: 0xd8
	// Line 403, Address: 0x43dccc, Func Offset: 0xdc
	// Line 402, Address: 0x43dcd0, Func Offset: 0xe0
	// Line 403, Address: 0x43dcd4, Func Offset: 0xe4
	// Line 406, Address: 0x43dcd8, Func Offset: 0xe8
	// Line 407, Address: 0x43dcf4, Func Offset: 0x104
	// Line 406, Address: 0x43dcfc, Func Offset: 0x10c
	// Line 407, Address: 0x43dd00, Func Offset: 0x110
	// Line 406, Address: 0x43dd08, Func Offset: 0x118
	// Line 407, Address: 0x43dd0c, Func Offset: 0x11c
	// Line 411, Address: 0x43dd10, Func Offset: 0x120
	// Line 414, Address: 0x43dd18, Func Offset: 0x128
	// Line 420, Address: 0x43dd24, Func Offset: 0x134
	// Line 424, Address: 0x43dd34, Func Offset: 0x144
	// Line 426, Address: 0x43dd38, Func Offset: 0x148
	// Line 427, Address: 0x43dd3c, Func Offset: 0x14c
	// Line 434, Address: 0x43dd44, Func Offset: 0x154
	// Line 435, Address: 0x43dd48, Func Offset: 0x158
	// Line 436, Address: 0x43dd4c, Func Offset: 0x15c
	// Line 442, Address: 0x43dd50, Func Offset: 0x160
	// Line 451, Address: 0x43dd54, Func Offset: 0x164
	// Line 444, Address: 0x43dd58, Func Offset: 0x168
	// Line 445, Address: 0x43dd5c, Func Offset: 0x16c
	// Line 444, Address: 0x43dd60, Func Offset: 0x170
	// Line 445, Address: 0x43dd64, Func Offset: 0x174
	// Line 451, Address: 0x43dd68, Func Offset: 0x178
	// Line 466, Address: 0x43dd6c, Func Offset: 0x17c
	// Line 451, Address: 0x43dd70, Func Offset: 0x180
	// Line 453, Address: 0x43dd74, Func Offset: 0x184
	// Line 451, Address: 0x43dd78, Func Offset: 0x188
	// Line 453, Address: 0x43dd7c, Func Offset: 0x18c
	// Line 442, Address: 0x43dd80, Func Offset: 0x190
	// Line 458, Address: 0x43dd84, Func Offset: 0x194
	// Line 442, Address: 0x43dd8c, Func Offset: 0x19c
	// Line 466, Address: 0x43dd90, Func Offset: 0x1a0
	// Line 442, Address: 0x43dd94, Func Offset: 0x1a4
	// Line 459, Address: 0x43ddbc, Func Offset: 0x1cc
	// Line 442, Address: 0x43ddc0, Func Offset: 0x1d0
	// Line 459, Address: 0x43ddc4, Func Offset: 0x1d4
	// Line 460, Address: 0x43ddc8, Func Offset: 0x1d8
	// Line 442, Address: 0x43ddcc, Func Offset: 0x1dc
	// Line 460, Address: 0x43ddd0, Func Offset: 0x1e0
	// Line 454, Address: 0x43ddd4, Func Offset: 0x1e4
	// Line 451, Address: 0x43dddc, Func Offset: 0x1ec
	// Line 442, Address: 0x43dde0, Func Offset: 0x1f0
	// Line 457, Address: 0x43dde4, Func Offset: 0x1f4
	// Line 451, Address: 0x43dde8, Func Offset: 0x1f8
	// Line 457, Address: 0x43ddec, Func Offset: 0x1fc
	// Line 452, Address: 0x43ddf0, Func Offset: 0x200
	// Line 451, Address: 0x43ddf4, Func Offset: 0x204
	// Line 452, Address: 0x43ddf8, Func Offset: 0x208
	// Line 457, Address: 0x43ddfc, Func Offset: 0x20c
	// Line 442, Address: 0x43de00, Func Offset: 0x210
	// Line 454, Address: 0x43de04, Func Offset: 0x214
	// Line 442, Address: 0x43de08, Func Offset: 0x218
	// Line 454, Address: 0x43de0c, Func Offset: 0x21c
	// Line 442, Address: 0x43de10, Func Offset: 0x220
	// Line 454, Address: 0x43de14, Func Offset: 0x224
	// Line 442, Address: 0x43de18, Func Offset: 0x228
	// Line 454, Address: 0x43de1c, Func Offset: 0x22c
	// Line 442, Address: 0x43de20, Func Offset: 0x230
	// Line 454, Address: 0x43de24, Func Offset: 0x234
	// Line 445, Address: 0x43de2c, Func Offset: 0x23c
	// Line 442, Address: 0x43de30, Func Offset: 0x240
	// Line 445, Address: 0x43de34, Func Offset: 0x244
	// Line 464, Address: 0x43de3c, Func Offset: 0x24c
	// Line 442, Address: 0x43de40, Func Offset: 0x250
	// Line 460, Address: 0x43de44, Func Offset: 0x254
	// Line 464, Address: 0x43de4c, Func Offset: 0x25c
	// Line 460, Address: 0x43de50, Func Offset: 0x260
	// Line 464, Address: 0x43de54, Func Offset: 0x264
	// Line 460, Address: 0x43de58, Func Offset: 0x268
	// Line 470, Address: 0x43de5c, Func Offset: 0x26c
	// Line 442, Address: 0x43de60, Func Offset: 0x270
	// Line 465, Address: 0x43de68, Func Offset: 0x278
	// Line 470, Address: 0x43de6c, Func Offset: 0x27c
	// Line 465, Address: 0x43de70, Func Offset: 0x280
	// Line 467, Address: 0x43de74, Func Offset: 0x284
	// Line 442, Address: 0x43de78, Func Offset: 0x288
	// Line 467, Address: 0x43de7c, Func Offset: 0x28c
	// Line 442, Address: 0x43de80, Func Offset: 0x290
	// Line 471, Address: 0x43de84, Func Offset: 0x294
	// Line 442, Address: 0x43de88, Func Offset: 0x298
	// Line 471, Address: 0x43de94, Func Offset: 0x2a4
	// Line 442, Address: 0x43de98, Func Offset: 0x2a8
	// Line 473, Address: 0x43de9c, Func Offset: 0x2ac
	// Line 472, Address: 0x43dea4, Func Offset: 0x2b4
	// Line 451, Address: 0x43deac, Func Offset: 0x2bc
	// Line 467, Address: 0x43deb4, Func Offset: 0x2c4
	// Line 442, Address: 0x43deb8, Func Offset: 0x2c8
	// Line 476, Address: 0x43debc, Func Offset: 0x2cc
	// Line 442, Address: 0x43dec0, Func Offset: 0x2d0
	// Line 467, Address: 0x43dec4, Func Offset: 0x2d4
	// Line 442, Address: 0x43dec8, Func Offset: 0x2d8
	// Line 467, Address: 0x43decc, Func Offset: 0x2dc
	// Line 442, Address: 0x43ded0, Func Offset: 0x2e0
	// Line 467, Address: 0x43ded4, Func Offset: 0x2e4
	// Line 442, Address: 0x43ded8, Func Offset: 0x2e8
	// Line 473, Address: 0x43dedc, Func Offset: 0x2ec
	// Line 442, Address: 0x43dee0, Func Offset: 0x2f0
	// Line 470, Address: 0x43dee4, Func Offset: 0x2f4
	// Line 443, Address: 0x43dee8, Func Offset: 0x2f8
	// Line 473, Address: 0x43deec, Func Offset: 0x2fc
	// Line 443, Address: 0x43def0, Func Offset: 0x300
	// Line 473, Address: 0x43def4, Func Offset: 0x304
	// Line 443, Address: 0x43def8, Func Offset: 0x308
	// Line 476, Address: 0x43defc, Func Offset: 0x30c
	// Line 443, Address: 0x43df00, Func Offset: 0x310
	// Line 476, Address: 0x43df04, Func Offset: 0x314
	// Line 443, Address: 0x43df08, Func Offset: 0x318
	// Line 473, Address: 0x43df0c, Func Offset: 0x31c
	// Line 443, Address: 0x43df10, Func Offset: 0x320
	// Line 442, Address: 0x43df14, Func Offset: 0x324
	// Line 443, Address: 0x43df18, Func Offset: 0x328
	// Line 444, Address: 0x43df28, Func Offset: 0x338
	// Line 445, Address: 0x43df38, Func Offset: 0x348
	// Line 444, Address: 0x43df40, Func Offset: 0x350
	// Line 445, Address: 0x43df44, Func Offset: 0x354
	// Line 451, Address: 0x43df48, Func Offset: 0x358
	// Line 464, Address: 0x43df4c, Func Offset: 0x35c
	// Line 451, Address: 0x43df50, Func Offset: 0x360
	// Line 457, Address: 0x43df58, Func Offset: 0x368
	// Line 451, Address: 0x43df5c, Func Offset: 0x36c
	// Line 457, Address: 0x43df60, Func Offset: 0x370
	// Line 451, Address: 0x43df64, Func Offset: 0x374
	// Line 457, Address: 0x43df6c, Func Offset: 0x37c
	// Line 451, Address: 0x43df70, Func Offset: 0x380
	// Line 457, Address: 0x43df74, Func Offset: 0x384
	// Line 451, Address: 0x43df78, Func Offset: 0x388
	// Line 457, Address: 0x43df80, Func Offset: 0x390
	// Line 464, Address: 0x43df84, Func Offset: 0x394
	// Line 457, Address: 0x43df88, Func Offset: 0x398
	// Line 464, Address: 0x43df8c, Func Offset: 0x39c
	// Line 470, Address: 0x43df94, Func Offset: 0x3a4
	// Line 464, Address: 0x43df98, Func Offset: 0x3a8
	// Line 470, Address: 0x43df9c, Func Offset: 0x3ac
	// Line 464, Address: 0x43dfa0, Func Offset: 0x3b0
	// Line 470, Address: 0x43dfa8, Func Offset: 0x3b8
	// Line 464, Address: 0x43dfb0, Func Offset: 0x3c0
	// Line 470, Address: 0x43dfb8, Func Offset: 0x3c8
	// Line 445, Address: 0x43dfbc, Func Offset: 0x3cc
	// Line 444, Address: 0x43dfc0, Func Offset: 0x3d0
	// Line 445, Address: 0x43dfc4, Func Offset: 0x3d4
	// Line 476, Address: 0x43dfcc, Func Offset: 0x3dc
	// Line 477, Address: 0x43e14c, Func Offset: 0x55c
	// Line 416, Address: 0x43e154, Func Offset: 0x564
	// Line 417, Address: 0x43e158, Func Offset: 0x568
	// Line 419, Address: 0x43e15c, Func Offset: 0x56c
	// Line 477, Address: 0x43e164, Func Offset: 0x574
	// Func End, Address: 0x43e194, Func Offset: 0x5a4
}

// UpdateOneAntenna__19@unnamed@xWad1_cpp@FP8xAntennaf
// Start address: 0x43e1a0
void UpdateOneAntenna(xAntenna* pAntenna, float32 dt)
{
	xVec3 antennaBaseRelative;
	xVec3 antennaBase;
	xModelInstance* pModel;
	RwMatrixTag* pBoneMatStart;
	xMat4x3* pMat;
	RwMatrixTag* pBoneMatEnd;
	xVec3 tipIdealPosition;
	xVec3 antennaDelta;
	xVec3 delta;
	xVec3 oldPosition;
	xVec3 tipVec;
	xVec3 distMoved;
	xVec3 tipPositionRelative;
	xMat4x3 oldTipMtx;
	xVec3 initialPosition;
	xVec3 tipDirection;
	xMat3x3 startRotation;
	xMat4x3* startBone;
	xMat3x3 endRotation;
	xMat4x3* endBone;
	RwMatrixTag* pBoneMat;
	xVec3 oldBonePos;
	xVec3 bonePos;
	xVec3 boneDelta;
	int32 iBone;
	xVec3* pBonePos;
	int32 iBone;
	xVec3* pBonePos;
	// Line 218, Address: 0x43e1a0, Func Offset: 0
	// Line 220, Address: 0x43e1dc, Func Offset: 0x3c
	// Line 222, Address: 0x43e1e8, Func Offset: 0x48
	// Line 225, Address: 0x43e200, Func Offset: 0x60
	// Line 226, Address: 0x43e214, Func Offset: 0x74
	// Line 229, Address: 0x43e220, Func Offset: 0x80
	// Line 232, Address: 0x43e22c, Func Offset: 0x8c
	// Line 233, Address: 0x43e230, Func Offset: 0x90
	// Line 232, Address: 0x43e238, Func Offset: 0x98
	// Line 233, Address: 0x43e240, Func Offset: 0xa0
	// Line 236, Address: 0x43e294, Func Offset: 0xf4
	// Line 234, Address: 0x43e298, Func Offset: 0xf8
	// Line 236, Address: 0x43e2a8, Func Offset: 0x108
	// Line 243, Address: 0x43e304, Func Offset: 0x164
	// Line 246, Address: 0x43e318, Func Offset: 0x178
	// Line 248, Address: 0x43e320, Func Offset: 0x180
	// Line 249, Address: 0x43e334, Func Offset: 0x194
	// Line 254, Address: 0x43e33c, Func Offset: 0x19c
	// Line 253, Address: 0x43e348, Func Offset: 0x1a8
	// Line 254, Address: 0x43e34c, Func Offset: 0x1ac
	// Line 249, Address: 0x43e358, Func Offset: 0x1b8
	// Line 253, Address: 0x43e35c, Func Offset: 0x1bc
	// Line 254, Address: 0x43e360, Func Offset: 0x1c0
	// Line 253, Address: 0x43e364, Func Offset: 0x1c4
	// Line 254, Address: 0x43e36c, Func Offset: 0x1cc
	// Line 253, Address: 0x43e37c, Func Offset: 0x1dc
	// Line 254, Address: 0x43e380, Func Offset: 0x1e0
	// Line 257, Address: 0x43e3e0, Func Offset: 0x240
	// Line 260, Address: 0x43e3f0, Func Offset: 0x250
	// Line 257, Address: 0x43e400, Func Offset: 0x260
	// Line 260, Address: 0x43e404, Func Offset: 0x264
	// Line 261, Address: 0x43e488, Func Offset: 0x2e8
	// Line 262, Address: 0x43e4d8, Func Offset: 0x338
	// Line 264, Address: 0x43e4f0, Func Offset: 0x350
	// Line 266, Address: 0x43e52c, Func Offset: 0x38c
	// Line 267, Address: 0x43e538, Func Offset: 0x398
	// Line 270, Address: 0x43e540, Func Offset: 0x3a0
	// Line 274, Address: 0x43e590, Func Offset: 0x3f0
	// Line 276, Address: 0x43e6e4, Func Offset: 0x544
	// Line 277, Address: 0x43e704, Func Offset: 0x564
	// Line 280, Address: 0x43e70c, Func Offset: 0x56c
	// Line 283, Address: 0x43e75c, Func Offset: 0x5bc
	// Line 280, Address: 0x43e764, Func Offset: 0x5c4
	// Line 283, Address: 0x43e768, Func Offset: 0x5c8
	// Line 286, Address: 0x43e770, Func Offset: 0x5d0
	// Line 280, Address: 0x43e774, Func Offset: 0x5d4
	// Line 286, Address: 0x43e778, Func Offset: 0x5d8
	// Line 280, Address: 0x43e77c, Func Offset: 0x5dc
	// Line 286, Address: 0x43e780, Func Offset: 0x5e0
	// Line 280, Address: 0x43e784, Func Offset: 0x5e4
	// Line 286, Address: 0x43e788, Func Offset: 0x5e8
	// Line 280, Address: 0x43e78c, Func Offset: 0x5ec
	// Line 286, Address: 0x43e790, Func Offset: 0x5f0
	// Line 280, Address: 0x43e794, Func Offset: 0x5f4
	// Line 287, Address: 0x43e798, Func Offset: 0x5f8
	// Line 280, Address: 0x43e79c, Func Offset: 0x5fc
	// Line 286, Address: 0x43e844, Func Offset: 0x6a4
	// Line 280, Address: 0x43e848, Func Offset: 0x6a8
	// Line 286, Address: 0x43e860, Func Offset: 0x6c0
	// Line 280, Address: 0x43e868, Func Offset: 0x6c8
	// Line 282, Address: 0x43e878, Func Offset: 0x6d8
	// Line 283, Address: 0x43e884, Func Offset: 0x6e4
	// Line 282, Address: 0x43e894, Func Offset: 0x6f4
	// Line 283, Address: 0x43e898, Func Offset: 0x6f8
	// Line 282, Address: 0x43e8b0, Func Offset: 0x710
	// Line 283, Address: 0x43e8b8, Func Offset: 0x718
	// Line 286, Address: 0x43e8f0, Func Offset: 0x750
	// Line 287, Address: 0x43e944, Func Offset: 0x7a4
	// Line 288, Address: 0x43e94c, Func Offset: 0x7ac
	// Line 289, Address: 0x43e950, Func Offset: 0x7b0
	// Line 288, Address: 0x43e954, Func Offset: 0x7b4
	// Line 297, Address: 0x43e958, Func Offset: 0x7b8
	// Line 289, Address: 0x43e95c, Func Offset: 0x7bc
	// Line 288, Address: 0x43e964, Func Offset: 0x7c4
	// Line 289, Address: 0x43e968, Func Offset: 0x7c8
	// Line 288, Address: 0x43e974, Func Offset: 0x7d4
	// Line 291, Address: 0x43e978, Func Offset: 0x7d8
	// Line 288, Address: 0x43e97c, Func Offset: 0x7dc
	// Line 291, Address: 0x43e980, Func Offset: 0x7e0
	// Line 288, Address: 0x43e984, Func Offset: 0x7e4
	// Line 291, Address: 0x43e988, Func Offset: 0x7e8
	// Line 289, Address: 0x43e98c, Func Offset: 0x7ec
	// Line 291, Address: 0x43e990, Func Offset: 0x7f0
	// Line 297, Address: 0x43e998, Func Offset: 0x7f8
	// Line 289, Address: 0x43e9a8, Func Offset: 0x808
	// Line 288, Address: 0x43e9bc, Func Offset: 0x81c
	// Line 291, Address: 0x43e9c0, Func Offset: 0x820
	// Line 289, Address: 0x43e9c4, Func Offset: 0x824
	// Line 288, Address: 0x43e9d0, Func Offset: 0x830
	// Line 289, Address: 0x43e9d4, Func Offset: 0x834
	// Line 288, Address: 0x43e9f4, Func Offset: 0x854
	// Line 289, Address: 0x43ea00, Func Offset: 0x860
	// Line 291, Address: 0x43ea18, Func Offset: 0x878
	// Line 289, Address: 0x43ea24, Func Offset: 0x884
	// Line 291, Address: 0x43ea34, Func Offset: 0x894
	// Line 292, Address: 0x43ea40, Func Offset: 0x8a0
	// Line 291, Address: 0x43ea44, Func Offset: 0x8a4
	// Line 292, Address: 0x43eaac, Func Offset: 0x90c
	// Line 297, Address: 0x43eab8, Func Offset: 0x918
	// Line 299, Address: 0x43eaec, Func Offset: 0x94c
	// Line 300, Address: 0x43eaf8, Func Offset: 0x958
	// Line 299, Address: 0x43eafc, Func Offset: 0x95c
	// Line 305, Address: 0x43eb00, Func Offset: 0x960
	// Line 299, Address: 0x43eb04, Func Offset: 0x964
	// Line 305, Address: 0x43eb08, Func Offset: 0x968
	// Line 303, Address: 0x43eb10, Func Offset: 0x970
	// Line 305, Address: 0x43eb18, Func Offset: 0x978
	// Line 306, Address: 0x43eb20, Func Offset: 0x980
	// Line 305, Address: 0x43eb24, Func Offset: 0x984
	// Line 303, Address: 0x43eb30, Func Offset: 0x990
	// Line 299, Address: 0x43eb34, Func Offset: 0x994
	// Line 300, Address: 0x43eb44, Func Offset: 0x9a4
	// Line 303, Address: 0x43eb48, Func Offset: 0x9a8
	// Line 300, Address: 0x43eb4c, Func Offset: 0x9ac
	// Line 305, Address: 0x43eb5c, Func Offset: 0x9bc
	// Line 303, Address: 0x43eb64, Func Offset: 0x9c4
	// Line 305, Address: 0x43eb68, Func Offset: 0x9c8
	// Line 306, Address: 0x43ebc8, Func Offset: 0xa28
	// Line 309, Address: 0x43ec04, Func Offset: 0xa64
	// Line 310, Address: 0x43ed14, Func Offset: 0xb74
	// Line 312, Address: 0x43ed34, Func Offset: 0xb94
	// Line 313, Address: 0x43ed38, Func Offset: 0xb98
	// Line 312, Address: 0x43ed3c, Func Offset: 0xb9c
	// Line 313, Address: 0x43ed48, Func Offset: 0xba8
	// Line 316, Address: 0x43ed6c, Func Offset: 0xbcc
	// Line 317, Address: 0x43ee8c, Func Offset: 0xcec
	// Line 319, Address: 0x43eeac, Func Offset: 0xd0c
	// Line 320, Address: 0x43eeb0, Func Offset: 0xd10
	// Line 319, Address: 0x43eeb4, Func Offset: 0xd14
	// Line 320, Address: 0x43eec4, Func Offset: 0xd24
	// Line 322, Address: 0x43eed4, Func Offset: 0xd34
	// Line 330, Address: 0x43eef4, Func Offset: 0xd54
	// Line 322, Address: 0x43ef14, Func Offset: 0xd74
	// Line 328, Address: 0x43ef18, Func Offset: 0xd78
	// Line 330, Address: 0x43ef24, Func Offset: 0xd84
	// Line 328, Address: 0x43ef30, Func Offset: 0xd90
	// Line 330, Address: 0x43ef3c, Func Offset: 0xd9c
	// Line 333, Address: 0x43ef4c, Func Offset: 0xdac
	// Line 337, Address: 0x43efa4, Func Offset: 0xe04
	// Line 335, Address: 0x43efa8, Func Offset: 0xe08
	// Line 337, Address: 0x43efd0, Func Offset: 0xe30
	// Line 335, Address: 0x43efd4, Func Offset: 0xe34
	// Line 337, Address: 0x43efe4, Func Offset: 0xe44
	// Line 335, Address: 0x43efe8, Func Offset: 0xe48
	// Line 337, Address: 0x43f000, Func Offset: 0xe60
	// Line 335, Address: 0x43f004, Func Offset: 0xe64
	// Line 337, Address: 0x43f038, Func Offset: 0xe98
	// Line 342, Address: 0x43f048, Func Offset: 0xea8
	// Line 341, Address: 0x43f04c, Func Offset: 0xeac
	// Line 343, Address: 0x43f050, Func Offset: 0xeb0
	// Line 341, Address: 0x43f054, Func Offset: 0xeb4
	// Line 342, Address: 0x43f058, Func Offset: 0xeb8
	// Line 343, Address: 0x43f07c, Func Offset: 0xedc
	// Line 344, Address: 0x43f08c, Func Offset: 0xeec
	// Line 347, Address: 0x43f090, Func Offset: 0xef0
	// Line 349, Address: 0x43f0a0, Func Offset: 0xf00
	// Line 351, Address: 0x43f1d4, Func Offset: 0x1034
	// Line 353, Address: 0x43f1e4, Func Offset: 0x1044
	// Line 357, Address: 0x43f224, Func Offset: 0x1084
	// Line 358, Address: 0x43f228, Func Offset: 0x1088
	// Line 359, Address: 0x43f230, Func Offset: 0x1090
	// Line 358, Address: 0x43f234, Func Offset: 0x1094
	// Line 357, Address: 0x43f238, Func Offset: 0x1098
	// Line 358, Address: 0x43f23c, Func Offset: 0x109c
	// Line 359, Address: 0x43f330, Func Offset: 0x1190
	// Line 365, Address: 0x43f340, Func Offset: 0x11a0
	// Line 363, Address: 0x43f344, Func Offset: 0x11a4
	// Line 365, Address: 0x43f35c, Func Offset: 0x11bc
	// Line 367, Address: 0x43f36c, Func Offset: 0x11cc
	// Line 368, Address: 0x43f370, Func Offset: 0x11d0
	// Line 367, Address: 0x43f378, Func Offset: 0x11d8
	// Line 368, Address: 0x43f37c, Func Offset: 0x11dc
	// Line 370, Address: 0x43f38c, Func Offset: 0x11ec
	// Line 383, Address: 0x43f418, Func Offset: 0x1278
	// Func End, Address: 0x43f454, Func Offset: 0x12b4
}

