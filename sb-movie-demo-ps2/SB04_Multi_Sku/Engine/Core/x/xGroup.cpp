



uint32 get_any();
uint32 xGroupGetItem(xGroup* g, uint32 index);
xBase* xGroupGetItemPtr(xGroup* g, uint32 index);
uint32 xGroupGetCount(xGroup* g);
void xGroupEventCB(xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget, uint32 toParamWidgetID);
void xGroupLoad(xGroup* ent, xSerial* s);
void xGroupSave(xGroup* ent, xSerial* s);
void xGroupSetup(xGroup* g);
void xGroupInit(void* b, void* asset);

// get_any__6xGroupFv
// Start address: 0x3d15e0
uint32 xGroup::get_any()
{
	uint32 id;
	// Line 342, Address: 0x3d15e0, Func Offset: 0
	// Line 344, Address: 0x3d15e8, Func Offset: 0x8
	// Line 348, Address: 0x3d15f4, Func Offset: 0x14
	// Line 351, Address: 0x3d15f8, Func Offset: 0x18
	// Line 348, Address: 0x3d1600, Func Offset: 0x20
	// Line 351, Address: 0x3d1608, Func Offset: 0x28
	// Line 354, Address: 0x3d1610, Func Offset: 0x30
	// Func End, Address: 0x3d1618, Func Offset: 0x38
}

// xGroupGetItem__FP6xGroupUi
// Start address: 0x3d1620
uint32 xGroupGetItem(xGroup* g, uint32 index)
{
	// Line 316, Address: 0x3d1620, Func Offset: 0
	// Line 317, Address: 0x3d162c, Func Offset: 0xc
	// Func End, Address: 0x3d1634, Func Offset: 0x14
}

// xGroupGetItemPtr__FP6xGroupUi
// Start address: 0x3d1640
xBase* xGroupGetItemPtr(xGroup* g, uint32 index)
{
	// Line 289, Address: 0x3d1640, Func Offset: 0
	// Line 292, Address: 0x3d1654, Func Offset: 0x14
	// Line 299, Address: 0x3d1668, Func Offset: 0x28
	// Line 300, Address: 0x3d1694, Func Offset: 0x54
	// Func End, Address: 0x3d16a4, Func Offset: 0x64
}

// xGroupGetCount__FP6xGroup
// Start address: 0x3d16b0
uint32 xGroupGetCount(xGroup* g)
{
	// Line 271, Address: 0x3d16b0, Func Offset: 0
	// Line 272, Address: 0x3d16b4, Func Offset: 0x4
	// Func End, Address: 0x3d16bc, Func Offset: 0xc
}

// xGroupEventCB__FP5xBaseP5xBaseUiPCfP5xBaseUi
// Start address: 0x3d16c0
void xGroupEventCB(xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget, uint32 toParamWidgetID)
{
	xGroup* g;
	int32 rand;
	void(*entVisEventHandler)(xEnt*);
	int32 i;
	xBase* b;
	int32 i;
	xBase* b;
	// Line 161, Address: 0x3d16c0, Func Offset: 0
	// Line 168, Address: 0x3d16c4, Func Offset: 0x4
	// Line 161, Address: 0x3d16c8, Func Offset: 0x8
	// Line 168, Address: 0x3d1700, Func Offset: 0x40
	// Line 171, Address: 0x3d171c, Func Offset: 0x5c
	// Line 172, Address: 0x3d1728, Func Offset: 0x68
	// Line 174, Address: 0x3d1730, Func Offset: 0x70
	// Line 179, Address: 0x3d1734, Func Offset: 0x74
	// Line 180, Address: 0x3d1738, Func Offset: 0x78
	// Line 191, Address: 0x3d1748, Func Offset: 0x88
	// Line 203, Address: 0x3d177c, Func Offset: 0xbc
	// Line 206, Address: 0x3d17ac, Func Offset: 0xec
	// Line 207, Address: 0x3d17b0, Func Offset: 0xf0
	// Line 209, Address: 0x3d17b8, Func Offset: 0xf8
	// Line 210, Address: 0x3d17bc, Func Offset: 0xfc
	// Line 212, Address: 0x3d17c4, Func Offset: 0x104
	// Line 213, Address: 0x3d17c8, Func Offset: 0x108
	// Line 215, Address: 0x3d17d0, Func Offset: 0x110
	// Line 220, Address: 0x3d17d8, Func Offset: 0x118
	// Line 221, Address: 0x3d17f0, Func Offset: 0x130
	// Line 235, Address: 0x3d1804, Func Offset: 0x144
	// Line 237, Address: 0x3d1820, Func Offset: 0x160
	// Line 241, Address: 0x3d1828, Func Offset: 0x168
	// Line 244, Address: 0x3d183c, Func Offset: 0x17c
	// Line 261, Address: 0x3d1850, Func Offset: 0x190
	// Line 263, Address: 0x3d1868, Func Offset: 0x1a8
	// Line 182, Address: 0x3d1878, Func Offset: 0x1b8
	// Line 263, Address: 0x3d1888, Func Offset: 0x1c8
	// Line 225, Address: 0x3d18a0, Func Offset: 0x1e0
	// Line 263, Address: 0x3d18a4, Func Offset: 0x1e4
	// Line 226, Address: 0x3d18b0, Func Offset: 0x1f0
	// Line 263, Address: 0x3d18b4, Func Offset: 0x1f4
	// Line 228, Address: 0x3d18c4, Func Offset: 0x204
	// Line 231, Address: 0x3d18d0, Func Offset: 0x210
	// Line 263, Address: 0x3d18e8, Func Offset: 0x228
	// Line 251, Address: 0x3d190c, Func Offset: 0x24c
	// Line 263, Address: 0x3d1920, Func Offset: 0x260
	// Line 264, Address: 0x3d1930, Func Offset: 0x270
	// Func End, Address: 0x3d1960, Func Offset: 0x2a0
}

// xGroupLoad__FP6xGroupP7xSerial
// Start address: 0x3d1a60
void xGroupLoad(xGroup* ent, xSerial* s)
{
	// Line 134, Address: 0x3d1a60, Func Offset: 0
	// Func End, Address: 0x3d1a68, Func Offset: 0x8
}

// xGroupSave__FP6xGroupP7xSerial
// Start address: 0x3d1a70
void xGroupSave(xGroup* ent, xSerial* s)
{
	// Line 115, Address: 0x3d1a70, Func Offset: 0
	// Func End, Address: 0x3d1a78, Func Offset: 0x8
}

// xGroupSetup__FP6xGroup
// Start address: 0x3d1a80
void xGroupSetup(xGroup* g)
{
	uint32 count;
	uint32 i;
	// Line 61, Address: 0x3d1a80, Func Offset: 0
	// Line 68, Address: 0x3d1a9c, Func Offset: 0x1c
	// Line 70, Address: 0x3d1aac, Func Offset: 0x2c
	// Line 74, Address: 0x3d1ab4, Func Offset: 0x34
	// Line 90, Address: 0x3d1ac0, Func Offset: 0x40
	// Line 100, Address: 0x3d1acc, Func Offset: 0x4c
	// Line 76, Address: 0x3d1adc, Func Offset: 0x5c
	// Line 100, Address: 0x3d1ae0, Func Offset: 0x60
	// Line 79, Address: 0x3d1b10, Func Offset: 0x90
	// Line 100, Address: 0x3d1b14, Func Offset: 0x94
	// Line 81, Address: 0x3d1b30, Func Offset: 0xb0
	// Line 100, Address: 0x3d1b34, Func Offset: 0xb4
	// Line 83, Address: 0x3d1b60, Func Offset: 0xe0
	// Line 101, Address: 0x3d1b70, Func Offset: 0xf0
	// Func End, Address: 0x3d1b90, Func Offset: 0x110
}

// xGroupInit__FPvPv
// Start address: 0x3d1b90
void xGroupInit(void* b, void* asset)
{
	// Line 30, Address: 0x3d1b90, Func Offset: 0
	// Line 31, Address: 0x3d1ba4, Func Offset: 0x14
	// Line 32, Address: 0x3d1c20, Func Offset: 0x90
	// Func End, Address: 0x3d1c34, Func Offset: 0xa4
}

