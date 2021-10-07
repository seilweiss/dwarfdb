



void WheelTurnsYou_C(xMat4x3* mat_owner);
void ReviewCollide(xEntCollis* npccol);
int32 MvptCycle();

// WheelTurnsYou_C__10zNMEDriverFP7xMat4x3
// Start address: 0x27e710
void zNMEDriver::WheelTurnsYou_C(xMat4x3* mat_owner)
{
	xMat4x3 mat_parCurr;
	xVec3 ang_eulerLast;
	xVec3 ang_eulerCurr;
	xMat3x3 mat_pdiff;
	float32 dang;
	xVec3 pos_relpre;
	xVec3 pos_relaft;
	xVec3 pos_delta;
	// Line 762, Address: 0x27e710, Func Offset: 0
	// Line 767, Address: 0x27e730, Func Offset: 0x20
	// Line 764, Address: 0x27e734, Func Offset: 0x24
	// Line 767, Address: 0x27e738, Func Offset: 0x28
	// Line 764, Address: 0x27e73c, Func Offset: 0x2c
	// Line 767, Address: 0x27e75c, Func Offset: 0x4c
	// Line 769, Address: 0x27e764, Func Offset: 0x54
	// Line 774, Address: 0x27e774, Func Offset: 0x64
	// Line 769, Address: 0x27e778, Func Offset: 0x68
	// Line 774, Address: 0x27e77c, Func Offset: 0x6c
	// Line 797, Address: 0x27e790, Func Offset: 0x80
	// Line 799, Address: 0x27e7bc, Func Offset: 0xac
	// Line 797, Address: 0x27e7c0, Func Offset: 0xb0
	// Line 799, Address: 0x27e7c4, Func Offset: 0xb4
	// Line 797, Address: 0x27e7c8, Func Offset: 0xb8
	// Line 799, Address: 0x27e814, Func Offset: 0x104
	// Line 800, Address: 0x27e860, Func Offset: 0x150
	// Line 802, Address: 0x27e87c, Func Offset: 0x16c
	// Line 800, Address: 0x27e880, Func Offset: 0x170
	// Line 802, Address: 0x27e884, Func Offset: 0x174
	// Line 800, Address: 0x27e888, Func Offset: 0x178
	// Line 802, Address: 0x27e894, Func Offset: 0x184
	// Line 800, Address: 0x27e898, Func Offset: 0x188
	// Line 802, Address: 0x27e89c, Func Offset: 0x18c
	// Line 800, Address: 0x27e8a0, Func Offset: 0x190
	// Line 802, Address: 0x27e8ac, Func Offset: 0x19c
	// Line 800, Address: 0x27e8b0, Func Offset: 0x1a0
	// Line 802, Address: 0x27e8c4, Func Offset: 0x1b4
	// Line 800, Address: 0x27e8c8, Func Offset: 0x1b8
	// Line 802, Address: 0x27e8d0, Func Offset: 0x1c0
	// Line 800, Address: 0x27e8d8, Func Offset: 0x1c8
	// Line 802, Address: 0x27e8e0, Func Offset: 0x1d0
	// Line 800, Address: 0x27e8ec, Func Offset: 0x1dc
	// Line 802, Address: 0x27e8f0, Func Offset: 0x1e0
	// Line 800, Address: 0x27e8f4, Func Offset: 0x1e4
	// Line 802, Address: 0x27e8f8, Func Offset: 0x1e8
	// Line 800, Address: 0x27e8fc, Func Offset: 0x1ec
	// Line 802, Address: 0x27e910, Func Offset: 0x200
	// Line 805, Address: 0x27e914, Func Offset: 0x204
	// Line 802, Address: 0x27e918, Func Offset: 0x208
	// Line 800, Address: 0x27e91c, Func Offset: 0x20c
	// Line 802, Address: 0x27e920, Func Offset: 0x210
	// Line 800, Address: 0x27e928, Func Offset: 0x218
	// Line 802, Address: 0x27e92c, Func Offset: 0x21c
	// Line 800, Address: 0x27e930, Func Offset: 0x220
	// Line 802, Address: 0x27e934, Func Offset: 0x224
	// Line 805, Address: 0x27e938, Func Offset: 0x228
	// Line 802, Address: 0x27e940, Func Offset: 0x230
	// Line 805, Address: 0x27e948, Func Offset: 0x238
	// Line 802, Address: 0x27e94c, Func Offset: 0x23c
	// Line 805, Address: 0x27e958, Func Offset: 0x248
	// Line 819, Address: 0x27e96c, Func Offset: 0x25c
	// Line 820, Address: 0x27e980, Func Offset: 0x270
	// Line 824, Address: 0x27e98c, Func Offset: 0x27c
	// Line 828, Address: 0x27ea0c, Func Offset: 0x2fc
	// Func End, Address: 0x27ea24, Func Offset: 0x314
}

// ReviewCollide__10zNMEDriverFPC10xEntCollis
// Start address: 0x27ea30
void zNMEDriver::ReviewCollide(xEntCollis* npccol)
{
	xCollis* colrec;
	xEnt* flent;
	// Line 442, Address: 0x27ea30, Func Offset: 0
	// Line 445, Address: 0x27ea4c, Func Offset: 0x1c
	// Line 446, Address: 0x27ea74, Func Offset: 0x44
	// Line 448, Address: 0x27ea80, Func Offset: 0x50
	// Line 455, Address: 0x27ea88, Func Offset: 0x58
	// Line 461, Address: 0x27ea90, Func Offset: 0x60
	// Line 460, Address: 0x27ea94, Func Offset: 0x64
	// Line 461, Address: 0x27ea98, Func Offset: 0x68
	// Line 463, Address: 0x27ea9c, Func Offset: 0x6c
	// Line 461, Address: 0x27eaa0, Func Offset: 0x70
	// Line 462, Address: 0x27eaa4, Func Offset: 0x74
	// Line 463, Address: 0x27eaa8, Func Offset: 0x78
	// Line 462, Address: 0x27eaac, Func Offset: 0x7c
	// Line 463, Address: 0x27eb30, Func Offset: 0x100
	// Line 484, Address: 0x27eb40, Func Offset: 0x110
	// Line 451, Address: 0x27eb48, Func Offset: 0x118
	// Line 484, Address: 0x27eb4c, Func Offset: 0x11c
	// Line 451, Address: 0x27eb50, Func Offset: 0x120
	// Line 453, Address: 0x27eb54, Func Offset: 0x124
	// Line 484, Address: 0x27eb58, Func Offset: 0x128
	// Line 453, Address: 0x27eb60, Func Offset: 0x130
	// Line 484, Address: 0x27eb64, Func Offset: 0x134
	// Line 453, Address: 0x27ebec, Func Offset: 0x1bc
	// Line 454, Address: 0x27ebf4, Func Offset: 0x1c4
	// Line 484, Address: 0x27ebfc, Func Offset: 0x1cc
	// Line 466, Address: 0x27ec00, Func Offset: 0x1d0
	// Line 472, Address: 0x27ec10, Func Offset: 0x1e0
	// Line 484, Address: 0x27ec18, Func Offset: 0x1e8
	// Line 477, Address: 0x27ec28, Func Offset: 0x1f8
	// Line 478, Address: 0x27ec30, Func Offset: 0x200
	// Line 477, Address: 0x27ec34, Func Offset: 0x204
	// Line 484, Address: 0x27ec3c, Func Offset: 0x20c
	// Line 478, Address: 0x27ec44, Func Offset: 0x214
	// Line 484, Address: 0x27ec58, Func Offset: 0x228
	// Line 480, Address: 0x27ec64, Func Offset: 0x234
	// Line 485, Address: 0x27ec70, Func Offset: 0x240
	// Func End, Address: 0x27ec78, Func Offset: 0x248
}

// MvptCycle__10zNMENavNetFv
// Start address: 0x27ec80
int32 zNMENavNet::MvptCycle()
{
	zMovePoint* nav_tmp;
	// Line 286, Address: 0x27ec80, Func Offset: 0
	// Line 288, Address: 0x27ec8c, Func Offset: 0xc
	// Line 295, Address: 0x27ec90, Func Offset: 0x10
	// Line 296, Address: 0x27ec94, Func Offset: 0x14
	// Line 297, Address: 0x27ec98, Func Offset: 0x18
	// Line 301, Address: 0x27eca0, Func Offset: 0x20
	// Line 313, Address: 0x27eca8, Func Offset: 0x28
	// Line 315, Address: 0x27ecbc, Func Offset: 0x3c
	// Line 337, Address: 0x27ecd0, Func Offset: 0x50
	// Line 338, Address: 0x27ece0, Func Offset: 0x60
	// Line 339, Address: 0x27ecec, Func Offset: 0x6c
	// Line 348, Address: 0x27ecf8, Func Offset: 0x78
	// Line 351, Address: 0x27ed10, Func Offset: 0x90
	// Line 354, Address: 0x27ed18, Func Offset: 0x98
	// Line 355, Address: 0x27ed28, Func Offset: 0xa8
	// Line 357, Address: 0x27ed38, Func Offset: 0xb8
	// Line 312, Address: 0x27ed6c, Func Offset: 0xec
	// Line 357, Address: 0x27ed74, Func Offset: 0xf4
	// Line 328, Address: 0x27ed80, Func Offset: 0x100
	// Line 357, Address: 0x27ed84, Func Offset: 0x104
	// Line 359, Address: 0x27ed98, Func Offset: 0x118
	// Line 378, Address: 0x27edbc, Func Offset: 0x13c
	// Line 384, Address: 0x27edc8, Func Offset: 0x148
	// Line 379, Address: 0x27edd8, Func Offset: 0x158
	// Line 384, Address: 0x27eddc, Func Offset: 0x15c
	// Line 385, Address: 0x27edec, Func Offset: 0x16c
	// Func End, Address: 0x27edfc, Func Offset: 0x17c
}

