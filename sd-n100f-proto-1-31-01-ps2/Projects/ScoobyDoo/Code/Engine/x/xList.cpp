typedef struct xListItem;
typedef struct xList;
typedef struct XStreamHeader;
typedef struct tagXStreamDirectoryEntry;
typedef struct tagXStreamMDSDirectory;


typedef tagXStreamDirectoryEntry type_0[1000];
typedef int8 type_1[2048];
typedef xListItem type_2[2000];
typedef int8 type_3[128];

struct xListItem
{
	void* m_item;
	xListItem* m_next;
	xListItem* m_prev;
};

struct xList
{
	xListItem* m_head;
	xListItem* m_tail;
};

struct XStreamHeader
{
	uint32 id;
	uint32 versionID;
	uint8 month;
	uint8 day;
	uint8 hour;
	uint8 minute;
	uint32 mdsOffset;
	uint32 mdsLength;
	tagXStreamMDSDirectory directory;
	int8 safety[2048];
};

struct tagXStreamDirectoryEntry
{
	uint32 id;
	uint32 type;
	uint32 offset;
	uint32 length;
};

struct tagXStreamMDSDirectory
{
	uint32 count;
	tagXStreamDirectoryEntry directory[1000];
};

xListItem* m_dead;
xListItem gListArray[2000];
int8 vAssertBuf2[128];
XStreamHeader currentHeader;

void* xListFind(xList* l, void* item);
void* xListPop(xList* l, void* item);
void xListPopAll(xList* l);
void xListAppendList(xList* a, xList* b);
int32 xListPush(xList* l, void* item);
int32 xListCountActive(xList* l);
void xListInit(xList* l);
void xListDispose(xList* l);

// xListFind__FP5xListPv
// Start address: 0x359260
void* xListFind(xList* l, void* item)
{
	xListItem* idx;
	// Line 320, Address: 0x359260, Func Offset: 0
	// Line 322, Address: 0x359264, Func Offset: 0x4
	// Line 324, Address: 0x35926c, Func Offset: 0xc
	// Line 326, Address: 0x359278, Func Offset: 0x18
	// Line 329, Address: 0x359284, Func Offset: 0x24
	// Line 330, Address: 0x35928c, Func Offset: 0x2c
	// Line 331, Address: 0x359298, Func Offset: 0x38
	// Line 332, Address: 0x35929c, Func Offset: 0x3c
	// Func End, Address: 0x3592a4, Func Offset: 0x44
}

// xListPop__FP5xListPv
// Start address: 0x3592b0
void* xListPop(xList* l, void* item)
{
	xListItem* idx;
	// Line 265, Address: 0x3592b0, Func Offset: 0
	// Line 266, Address: 0x3592cc, Func Offset: 0x1c
	// Line 268, Address: 0x3592d0, Func Offset: 0x20
	// Line 269, Address: 0x3592d8, Func Offset: 0x28
	// Line 270, Address: 0x3592e0, Func Offset: 0x30
	// Line 272, Address: 0x3592e4, Func Offset: 0x34
	// Line 274, Address: 0x3592ec, Func Offset: 0x3c
	// Line 277, Address: 0x3592f8, Func Offset: 0x48
	// Line 279, Address: 0x359304, Func Offset: 0x54
	// Line 280, Address: 0x3593a8, Func Offset: 0xf8
	// Line 281, Address: 0x3593b0, Func Offset: 0x100
	// Line 284, Address: 0x3593b8, Func Offset: 0x108
	// Line 285, Address: 0x35945c, Func Offset: 0x1ac
	// Line 288, Address: 0x359460, Func Offset: 0x1b0
	// Line 290, Address: 0x35946c, Func Offset: 0x1bc
	// Line 291, Address: 0x359510, Func Offset: 0x260
	// Line 292, Address: 0x3595b8, Func Offset: 0x308
	// Line 293, Address: 0x3595c4, Func Offset: 0x314
	// Line 296, Address: 0x3595cc, Func Offset: 0x31c
	// Line 297, Address: 0x359670, Func Offset: 0x3c0
	// Line 300, Address: 0x359678, Func Offset: 0x3c8
	// Line 302, Address: 0x359684, Func Offset: 0x3d4
	// Line 303, Address: 0x359730, Func Offset: 0x480
	// Line 304, Address: 0x35973c, Func Offset: 0x48c
	// Line 306, Address: 0x359740, Func Offset: 0x490
	// Line 308, Address: 0x35980c, Func Offset: 0x55c
	// Line 311, Address: 0x359818, Func Offset: 0x568
	// Line 312, Address: 0x359820, Func Offset: 0x570
	// Line 315, Address: 0x359828, Func Offset: 0x578
	// Line 316, Address: 0x35982c, Func Offset: 0x57c
	// Func End, Address: 0x359848, Func Offset: 0x598
}

// xListPopAll__FP5xList
// Start address: 0x359850
void xListPopAll(xList* l)
{
	void* item;
	// Line 239, Address: 0x359850, Func Offset: 0
	// Line 244, Address: 0x359860, Func Offset: 0x10
	// Line 246, Address: 0x359870, Func Offset: 0x20
	// Line 248, Address: 0x359880, Func Offset: 0x30
	// Line 251, Address: 0x359954, Func Offset: 0x104
	// Func End, Address: 0x359968, Func Offset: 0x118
}

// xListAppendList__FP5xListP5xList
// Start address: 0x359970
void xListAppendList(xList* a, xList* b)
{
	// Line 207, Address: 0x359970, Func Offset: 0
	// Line 208, Address: 0x359988, Func Offset: 0x18
	// Line 209, Address: 0x359a28, Func Offset: 0xb8
	// Line 212, Address: 0x359ac8, Func Offset: 0x158
	// Line 213, Address: 0x359ad4, Func Offset: 0x164
	// Line 214, Address: 0x359ae0, Func Offset: 0x170
	// Line 215, Address: 0x359aec, Func Offset: 0x17c
	// Line 217, Address: 0x359af8, Func Offset: 0x188
	// Line 219, Address: 0x359b00, Func Offset: 0x190
	// Line 220, Address: 0x359b04, Func Offset: 0x194
	// Line 221, Address: 0x359b08, Func Offset: 0x198
	// Func End, Address: 0x359b20, Func Offset: 0x1b0
}

// xListPush__FP5xListPv
// Start address: 0x359b20
int32 xListPush(xList* l, void* item)
{
	xListItem* li;
	// Line 136, Address: 0x359b20, Func Offset: 0
	// Line 139, Address: 0x359b3c, Func Offset: 0x1c
	// Line 140, Address: 0x359bdc, Func Offset: 0xbc
	// Line 144, Address: 0x359c84, Func Offset: 0x164
	// Line 145, Address: 0x359d5c, Func Offset: 0x23c
	// Line 147, Address: 0x359d64, Func Offset: 0x244
	// Line 151, Address: 0x359d70, Func Offset: 0x250
	// Line 154, Address: 0x359e10, Func Offset: 0x2f0
	// Line 155, Address: 0x359e14, Func Offset: 0x2f4
	// Line 156, Address: 0x359e1c, Func Offset: 0x2fc
	// Line 157, Address: 0x359e28, Func Offset: 0x308
	// Line 158, Address: 0x359e30, Func Offset: 0x310
	// Line 160, Address: 0x359e34, Func Offset: 0x314
	// Line 162, Address: 0x359e44, Func Offset: 0x324
	// Line 166, Address: 0x359e4c, Func Offset: 0x32c
	// Line 169, Address: 0x359e50, Func Offset: 0x330
	// Line 170, Address: 0x359e54, Func Offset: 0x334
	// Func End, Address: 0x359e70, Func Offset: 0x350
}

// xListCountActive__FP5xList
// Start address: 0x359e70
int32 xListCountActive(xList* l)
{
	xListItem* item;
	int32 count;
	// Line 60, Address: 0x359e70, Func Offset: 0
	// Line 61, Address: 0x359e74, Func Offset: 0x4
	// Line 63, Address: 0x359e78, Func Offset: 0x8
	// Line 65, Address: 0x359e80, Func Offset: 0x10
	// Line 66, Address: 0x359e84, Func Offset: 0x14
	// Line 67, Address: 0x359e8c, Func Offset: 0x1c
	// Line 69, Address: 0x359ea4, Func Offset: 0x34
	// Func End, Address: 0x359eac, Func Offset: 0x3c
}

// xListInit__FP5xList
// Start address: 0x359eb0
void xListInit(xList* l)
{
	xListItem* item;
	int32 i;
	// Line 34, Address: 0x359eb0, Func Offset: 0
	// Line 37, Address: 0x359ec0, Func Offset: 0x10
	// Line 38, Address: 0x359ec4, Func Offset: 0x14
	// Line 40, Address: 0x359ec8, Func Offset: 0x18
	// Line 42, Address: 0x359ed4, Func Offset: 0x24
	// Line 45, Address: 0x359ee0, Func Offset: 0x30
	// Line 47, Address: 0x359ef8, Func Offset: 0x48
	// Line 48, Address: 0x359efc, Func Offset: 0x4c
	// Line 49, Address: 0x359f00, Func Offset: 0x50
	// Line 51, Address: 0x359f04, Func Offset: 0x54
	// Line 52, Address: 0x359fd4, Func Offset: 0x124
	// Line 53, Address: 0x359fe4, Func Offset: 0x134
	// Line 54, Address: 0x359fe8, Func Offset: 0x138
	// Func End, Address: 0x35a000, Func Offset: 0x150
}

// xListDispose__FP5xList
// Start address: 0x35a000
void xListDispose(xList* l)
{
	// Line 27, Address: 0x35a000, Func Offset: 0
	// Line 29, Address: 0x35a010, Func Offset: 0x10
	// Line 31, Address: 0x35a104, Func Offset: 0x104
	// Func End, Address: 0x35a118, Func Offset: 0x118
}

