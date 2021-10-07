



void xParGroupKillPar(xParGroup* ps, xPar* p);
xPar* xParGroupAddPar(xParGroup* ps);
void xParGroupAnimate(xParGroup* ps, float32 dt);
void xParGroupInit(xParGroup* ps);

// xParGroupKillPar__FP9xParGroupP4xPar
// Start address: 0x3ab860
void xParGroupKillPar(xParGroup* ps, xPar* p)
{
	// Line 555, Address: 0x3ab860, Func Offset: 0
	// Line 568, Address: 0x3ab870, Func Offset: 0x10
	// Line 569, Address: 0x3ab878, Func Offset: 0x18
	// Line 570, Address: 0x3ab884, Func Offset: 0x24
	// Line 571, Address: 0x3ab88c, Func Offset: 0x2c
	// Line 573, Address: 0x3ab894, Func Offset: 0x34
	// Line 574, Address: 0x3ab898, Func Offset: 0x38
	// Line 578, Address: 0x3ab89c, Func Offset: 0x3c
	// Line 580, Address: 0x3ab8a8, Func Offset: 0x48
	// Line 590, Address: 0x3ab8bc, Func Offset: 0x5c
	// Line 596, Address: 0x3ab8d8, Func Offset: 0x78
	// Line 565, Address: 0x3ab8fc, Func Offset: 0x9c
	// Line 596, Address: 0x3ab904, Func Offset: 0xa4
	// Line 585, Address: 0x3ab948, Func Offset: 0xe8
	// Line 596, Address: 0x3ab950, Func Offset: 0xf0
	// Func End, Address: 0x3ab958, Func Offset: 0xf8
}

// xParGroupAddPar__FP9xParGroup
// Start address: 0x3ab960
xPar* xParGroupAddPar(xParGroup* ps)
{
	xPar* p;
	int32 myPriority;
	uint8 i;
	// Line 447, Address: 0x3ab960, Func Offset: 0
	// Line 456, Address: 0x3ab970, Func Offset: 0x10
	// Line 505, Address: 0x3ab984, Func Offset: 0x24
	// Line 509, Address: 0x3ab98c, Func Offset: 0x2c
	// Line 510, Address: 0x3ab998, Func Offset: 0x38
	// Line 511, Address: 0x3ab9a0, Func Offset: 0x40
	// Line 517, Address: 0x3ab9a4, Func Offset: 0x44
	// Line 519, Address: 0x3ab9ac, Func Offset: 0x4c
	// Line 520, Address: 0x3ab9b4, Func Offset: 0x54
	// Line 466, Address: 0x3aba28, Func Offset: 0xc8
	// Line 520, Address: 0x3aba2c, Func Offset: 0xcc
	// Line 475, Address: 0x3aba48, Func Offset: 0xe8
	// Line 520, Address: 0x3aba4c, Func Offset: 0xec
	// Line 490, Address: 0x3ababc, Func Offset: 0x15c
	// Line 459, Address: 0x3abac4, Func Offset: 0x164
	// Line 488, Address: 0x3abad4, Func Offset: 0x174
	// Line 520, Address: 0x3abae4, Func Offset: 0x184
	// Line 497, Address: 0x3abae8, Func Offset: 0x188
	// Line 520, Address: 0x3abaec, Func Offset: 0x18c
	// Line 501, Address: 0x3abaf8, Func Offset: 0x198
	// Line 520, Address: 0x3abb08, Func Offset: 0x1a8
	// Line 523, Address: 0x3abb0c, Func Offset: 0x1ac
	// Line 524, Address: 0x3abb10, Func Offset: 0x1b0
	// Func End, Address: 0x3abb24, Func Offset: 0x1c4
}

// xParGroupAnimate__FP9xParGroupf
// Start address: 0x3abb30
void xParGroupAnimate(xParGroup* ps, float32 dt)
{
	xPar* i;
	xPar* tmp;
	float32 age;
	// Line 284, Address: 0x3abb30, Func Offset: 0
	// Line 292, Address: 0x3abb50, Func Offset: 0x20
	// Line 287, Address: 0x3abb58, Func Offset: 0x28
	// Line 292, Address: 0x3abb5c, Func Offset: 0x2c
	// Line 293, Address: 0x3abb68, Func Offset: 0x38
	// Line 295, Address: 0x3abb6c, Func Offset: 0x3c
	// Line 297, Address: 0x3abb74, Func Offset: 0x44
	// Line 304, Address: 0x3abb78, Func Offset: 0x48
	// Line 311, Address: 0x3abb80, Func Offset: 0x50
	// Line 313, Address: 0x3abb8c, Func Offset: 0x5c
	// Line 314, Address: 0x3abb94, Func Offset: 0x64
	// Line 316, Address: 0x3abba0, Func Offset: 0x70
	// Line 317, Address: 0x3abba4, Func Offset: 0x74
	// Line 329, Address: 0x3abba8, Func Offset: 0x78
	// Line 332, Address: 0x3abbb0, Func Offset: 0x80
	// Line 344, Address: 0x3abbb8, Func Offset: 0x88
	// Line 345, Address: 0x3abbbc, Func Offset: 0x8c
	// Line 346, Address: 0x3abbc0, Func Offset: 0x90
	// Line 347, Address: 0x3abbc4, Func Offset: 0x94
	// Line 348, Address: 0x3abbc8, Func Offset: 0x98
	// Line 349, Address: 0x3abbcc, Func Offset: 0x9c
	// Line 350, Address: 0x3abbd0, Func Offset: 0xa0
	// Line 351, Address: 0x3abbd4, Func Offset: 0xa4
	// Line 352, Address: 0x3abbd8, Func Offset: 0xa8
	// Line 353, Address: 0x3abbdc, Func Offset: 0xac
	// Line 354, Address: 0x3abbe0, Func Offset: 0xb0
	// Line 355, Address: 0x3abbe4, Func Offset: 0xb4
	// Line 356, Address: 0x3abbe8, Func Offset: 0xb8
	// Line 357, Address: 0x3abbec, Func Offset: 0xbc
	// Line 358, Address: 0x3abbf0, Func Offset: 0xc0
	// Line 359, Address: 0x3abbf4, Func Offset: 0xc4
	// Line 360, Address: 0x3abbf8, Func Offset: 0xc8
	// Line 409, Address: 0x3abbfc, Func Offset: 0xcc
	// Line 411, Address: 0x3abc18, Func Offset: 0xe8
	// Line 413, Address: 0x3abc1c, Func Offset: 0xec
	// Line 414, Address: 0x3abc28, Func Offset: 0xf8
	// Func End, Address: 0x3abc48, Func Offset: 0x118
}

// xParGroupInit__FP9xParGroup
// Start address: 0x3abc50
void xParGroupInit(xParGroup* ps)
{
	// Line 37, Address: 0x3abc50, Func Offset: 0
	// Line 44, Address: 0x3abc54, Func Offset: 0x4
	// Line 38, Address: 0x3abc58, Func Offset: 0x8
	// Line 39, Address: 0x3abc5c, Func Offset: 0xc
	// Line 40, Address: 0x3abc60, Func Offset: 0x10
	// Line 41, Address: 0x3abc64, Func Offset: 0x14
	// Line 43, Address: 0x3abc68, Func Offset: 0x18
	// Line 44, Address: 0x3abc6c, Func Offset: 0x1c
	// Line 45, Address: 0x3abc70, Func Offset: 0x20
	// Line 46, Address: 0x3abc74, Func Offset: 0x24
	// Line 47, Address: 0x3abc78, Func Offset: 0x28
	// Line 48, Address: 0x3abc7c, Func Offset: 0x2c
	// Line 49, Address: 0x3abc80, Func Offset: 0x30
	// Line 50, Address: 0x3abc84, Func Offset: 0x34
	// Line 53, Address: 0x3abc88, Func Offset: 0x38
	// Line 55, Address: 0x3abc94, Func Offset: 0x44
	// Line 56, Address: 0x3abc9c, Func Offset: 0x4c
	// Func End, Address: 0x3abca4, Func Offset: 0x54
}

