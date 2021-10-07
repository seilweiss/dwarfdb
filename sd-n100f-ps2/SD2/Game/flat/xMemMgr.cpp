typedef struct xMemInfo_tag;
typedef struct xMemHeap_tag;
typedef struct xMemBlock_tag;
typedef struct xMemPool;
typedef struct xHeapState_tag;
typedef struct xMemArea_tag;
typedef struct xMemBlkInfo_tag;

typedef void(*type_1)();
typedef void(*type_2)(xMemPool*, void*);

typedef xMemHeap_tag type_0[3];
typedef int16 type_3[2];
typedef xHeapState_tag type_4[8];

struct xMemInfo_tag
{
	xMemArea_tag system;
	xMemArea_tag stack;
	xMemArea_tag DRAM;
	xMemArea_tag SRAM;
};

struct xMemHeap_tag
{
	uint32 flags;
	uint32 hard_base;
	uint32 size;
	int16 opp_heap[2];
	xHeapState_tag state[8];
	uint16 state_idx;
	uint16 max_blks;
	xMemBlock_tag* blk;
	xMemBlock_tag* lastblk;
};

struct xMemBlock_tag
{
	uint32 addr;
	uint32 size;
};

struct xMemPool
{
	void* FreeList;
	uint16 NextOffset;
	uint16 Flags;
	void* UsedList;
	void(*InitCB)(xMemPool*, void*);
	void* Buffer;
	uint16 Size;
	uint16 NumRealloc;
	uint32 Total;
};

struct xHeapState_tag
{
	uint32 curr;
	uint16 blk_ct;
	uint16 pad;
	uint32 used;
	uint32 wasted;
};

struct xMemArea_tag
{
	uint32 addr;
	uint32 size;
	uint32 flags;
};

struct xMemBlkInfo_tag
{
	xMemBlock_tag* header;
	uint32 pre;
	uint32 block;
	uint32 post;
	uint32 curr;
	uint32 waste;
	uint32 total;
};

xMemInfo_tag gMemInfo;
uint32 gActiveHeap;
xMemHeap_tag gxHeap[3];
void(*sMemBaseNotifyFunc)();
int32 gMemReporting;
uint32 gMemReportingThreshold;

void xMemPoolFree(xMemPool* pool, void* data);
void* xMemPoolAlloc(xMemPool* pool);
void xMemPoolSetup(xMemPool* pool, void* buffer, uint32 nextOffset, uint32 flags, void(*initCB)(xMemPool*, void*), uint32 size, uint32 count, uint32 numRealloc);
void xMemPoolAddElements(xMemPool* pool, void* buffer, uint32 count);
int32 xMemGetBase();
void xMemRegisterBaseNotifyFunc(void(*func)());
int32 xMemPopBase(int32 depth);
int32 xMemPushBase();
void xMemPopTemp(void* addr);
void* xMemPushTemp(uint32 size);
void* xMemAlloc(uint32 heapID, uint32 size);
void* xMemGrowAlloc(uint32 heapID, uint32 size);
uint32 xMemGetBlockInfo(xMemHeap_tag* heap, uint32 size, xMemBlkInfo_tag* info);
void xMemInitHeap(xMemHeap_tag* heap, uint32 base, uint32 size, uint32 flags);
void xMemExit();
void xMemInit();

// xMemPoolFree__FP8xMemPoolPv
// Start address: 0x125880
void xMemPoolFree(xMemPool* pool, void* data)
{
	void* curr;
	void** prev;
	uint32 next;
	void* freeList;
	// Line 1320, Address: 0x125880, Func Offset: 0
	// Line 1328, Address: 0x125888, Func Offset: 0x8
	// Line 1324, Address: 0x12588c, Func Offset: 0xc
	// Line 1328, Address: 0x125890, Func Offset: 0x10
	// Line 1330, Address: 0x12589c, Func Offset: 0x1c
	// Line 1331, Address: 0x1258a0, Func Offset: 0x20
	// Line 1333, Address: 0x1258a8, Func Offset: 0x28
	// Line 1334, Address: 0x1258b0, Func Offset: 0x30
	// Line 1335, Address: 0x1258c0, Func Offset: 0x40
	// Line 1336, Address: 0x1258c8, Func Offset: 0x48
	// Line 1341, Address: 0x1258d4, Func Offset: 0x54
	// Line 1342, Address: 0x1258dc, Func Offset: 0x5c
	// Line 1343, Address: 0x1258e0, Func Offset: 0x60
	// Func End, Address: 0x1258e8, Func Offset: 0x68
}

// xMemPoolAlloc__FP8xMemPool
// Start address: 0x1258f0
void* xMemPoolAlloc(xMemPool* pool)
{
	uint32 flags;
	uint32 next;
	void* retval;
	// Line 1288, Address: 0x1258f0, Func Offset: 0
	// Line 1290, Address: 0x125908, Func Offset: 0x18
	// Line 1291, Address: 0x12590c, Func Offset: 0x1c
	// Line 1292, Address: 0x125910, Func Offset: 0x20
	// Line 1295, Address: 0x125914, Func Offset: 0x24
	// Line 1297, Address: 0x12591c, Func Offset: 0x2c
	// Line 1300, Address: 0x125940, Func Offset: 0x50
	// Line 1304, Address: 0x125948, Func Offset: 0x58
	// Line 1307, Address: 0x125950, Func Offset: 0x60
	// Line 1308, Address: 0x12595c, Func Offset: 0x6c
	// Line 1309, Address: 0x125964, Func Offset: 0x74
	// Line 1314, Address: 0x125968, Func Offset: 0x78
	// Func End, Address: 0x125984, Func Offset: 0x94
}

// xMemPoolSetup__FP8xMemPoolPvUiUiPFP8xMemPoolPv_vUiUiUi
// Start address: 0x125990
void xMemPoolSetup(xMemPool* pool, void* buffer, uint32 nextOffset, uint32 flags, void(*initCB)(xMemPool*, void*), uint32 size, uint32 count, uint32 numRealloc)
{
	// Line 1273, Address: 0x125990, Func Offset: 0
	// Line 1274, Address: 0x125994, Func Offset: 0x4
	// Line 1275, Address: 0x125998, Func Offset: 0x8
	// Line 1276, Address: 0x12599c, Func Offset: 0xc
	// Line 1277, Address: 0x1259a0, Func Offset: 0x10
	// Line 1278, Address: 0x1259a4, Func Offset: 0x14
	// Line 1279, Address: 0x1259a8, Func Offset: 0x18
	// Line 1280, Address: 0x1259ac, Func Offset: 0x1c
	// Line 1283, Address: 0x1259b0, Func Offset: 0x20
	// Func End, Address: 0x1259bc, Func Offset: 0x2c
}

// xMemPoolAddElements__FP8xMemPoolPvUi
// Start address: 0x1259c0
void xMemPoolAddElements(xMemPool* pool, void* buffer, uint32 count)
{
	uint32 size;
	uint32 next;
	void(*initCB)(xMemPool*, void*);
	void* curr;
	int32 i;
	// Line 1249, Address: 0x1259c0, Func Offset: 0
	// Line 1252, Address: 0x1259e8, Func Offset: 0x28
	// Line 1253, Address: 0x1259ec, Func Offset: 0x2c
	// Line 1254, Address: 0x1259f0, Func Offset: 0x30
	// Line 1256, Address: 0x125a00, Func Offset: 0x40
	// Line 1257, Address: 0x125a08, Func Offset: 0x48
	// Line 1258, Address: 0x125a0c, Func Offset: 0x4c
	// Line 1259, Address: 0x125a20, Func Offset: 0x60
	// Line 1260, Address: 0x125a24, Func Offset: 0x64
	// Line 1261, Address: 0x125a38, Func Offset: 0x78
	// Line 1262, Address: 0x125a40, Func Offset: 0x80
	// Line 1263, Address: 0x125a50, Func Offset: 0x90
	// Line 1265, Address: 0x125a54, Func Offset: 0x94
	// Line 1266, Address: 0x125a60, Func Offset: 0xa0
	// Func End, Address: 0x125a8c, Func Offset: 0xcc
}

// xMemGetBase__Fv
// Start address: 0x125a90
int32 xMemGetBase()
{
	// Line 1226, Address: 0x125a90, Func Offset: 0
	// Line 1227, Address: 0x125ab4, Func Offset: 0x24
	// Func End, Address: 0x125abc, Func Offset: 0x2c
}

// xMemRegisterBaseNotifyFunc__FPFv_v
// Start address: 0x125ac0
void xMemRegisterBaseNotifyFunc(void(*func)())
{
	// Line 1214, Address: 0x125ac0, Func Offset: 0
	// Func End, Address: 0x125ac8, Func Offset: 0x8
}

// xMemPopBase__Fi
// Start address: 0x125ad0
int32 xMemPopBase(int32 depth)
{
	// Line 1189, Address: 0x125ad0, Func Offset: 0
	// Line 1190, Address: 0x125adc, Func Offset: 0xc
	// Line 1191, Address: 0x125b28, Func Offset: 0x58
	// Func End, Address: 0x125b38, Func Offset: 0x68
}

// xMemPushBase__Fv
// Start address: 0x125b40
int32 xMemPushBase()
{
	// Line 1137, Address: 0x125b40, Func Offset: 0
	// Line 1138, Address: 0x125b4c, Func Offset: 0xc
	// Line 1139, Address: 0x125bc8, Func Offset: 0x88
	// Line 1138, Address: 0x125bd0, Func Offset: 0x90
	// Line 1139, Address: 0x125bd4, Func Offset: 0x94
	// Func End, Address: 0x125bdc, Func Offset: 0x9c
}

// xMemPopTemp__FPv
// Start address: 0x125be0
void xMemPopTemp(void* addr)
{
	// Line 778, Address: 0x125be0, Func Offset: 0
	// Func End, Address: 0x125be8, Func Offset: 0x8
}

// xMemPushTemp__FUi
// Start address: 0x125bf0
void* xMemPushTemp(uint32 size)
{
	void* addr;
	// Line 739, Address: 0x125bf0, Func Offset: 0
	// Func End, Address: 0x125bf8, Func Offset: 0x8
}

// xMemAlloc__FUiUi
// Start address: 0x125c00
void* xMemAlloc(uint32 heapID, uint32 size)
{
	uint32 total;
	xMemBlkInfo_tag info;
	xHeapState_tag* sp;
	xMemBlock_tag* hdr;
	xMemHeap_tag* heap;
	// Line 572, Address: 0x125c00, Func Offset: 0
	// Line 564, Address: 0x125c04, Func Offset: 0x4
	// Line 572, Address: 0x125c08, Func Offset: 0x8
	// Line 564, Address: 0x125c0c, Func Offset: 0xc
	// Line 572, Address: 0x125c14, Func Offset: 0x14
	// Line 564, Address: 0x125c1c, Func Offset: 0x1c
	// Line 572, Address: 0x125c20, Func Offset: 0x20
	// Line 564, Address: 0x125c24, Func Offset: 0x24
	// Line 572, Address: 0x125c28, Func Offset: 0x28
	// Line 564, Address: 0x125c2c, Func Offset: 0x2c
	// Line 572, Address: 0x125c30, Func Offset: 0x30
	// Line 573, Address: 0x125c38, Func Offset: 0x38
	// Line 580, Address: 0x125c48, Func Offset: 0x48
	// Line 584, Address: 0x125c50, Func Offset: 0x50
	// Line 587, Address: 0x125c5c, Func Offset: 0x5c
	// Line 591, Address: 0x125c68, Func Offset: 0x68
	// Line 606, Address: 0x125c80, Func Offset: 0x80
	// Line 637, Address: 0x125c88, Func Offset: 0x88
	// Line 639, Address: 0x125c8c, Func Offset: 0x8c
	// Line 637, Address: 0x125c90, Func Offset: 0x90
	// Line 638, Address: 0x125c94, Func Offset: 0x94
	// Line 639, Address: 0x125ca0, Func Offset: 0xa0
	// Line 643, Address: 0x125cb0, Func Offset: 0xb0
	// Line 646, Address: 0x125cb8, Func Offset: 0xb8
	// Line 688, Address: 0x125cbc, Func Offset: 0xbc
	// Line 646, Address: 0x125cc0, Func Offset: 0xc0
	// Line 647, Address: 0x125cc4, Func Offset: 0xc4
	// Line 662, Address: 0x125cc8, Func Offset: 0xc8
	// Line 663, Address: 0x125cd4, Func Offset: 0xd4
	// Line 688, Address: 0x125ce4, Func Offset: 0xe4
	// Line 690, Address: 0x125cf0, Func Offset: 0xf0
	// Line 704, Address: 0x125cf4, Func Offset: 0xf4
	// Line 706, Address: 0x125cfc, Func Offset: 0xfc
	// Func End, Address: 0x125d18, Func Offset: 0x118
}

// xMemGrowAlloc__FUiUi
// Start address: 0x125d20
void* xMemGrowAlloc(uint32 heapID, uint32 size)
{
	void* memptr;
	xHeapState_tag* sp;
	xMemBlock_tag* hdr;
	xMemHeap_tag* heap;
	uint32 oldalignsize;
	uint32 align;
	// Line 499, Address: 0x125d20, Func Offset: 0
	// Line 488, Address: 0x125d34, Func Offset: 0x14
	// Line 499, Address: 0x125d38, Func Offset: 0x18
	// Line 488, Address: 0x125d3c, Func Offset: 0x1c
	// Line 499, Address: 0x125d40, Func Offset: 0x20
	// Line 488, Address: 0x125d44, Func Offset: 0x24
	// Line 499, Address: 0x125d48, Func Offset: 0x28
	// Line 502, Address: 0x125d4c, Func Offset: 0x2c
	// Line 501, Address: 0x125d50, Func Offset: 0x30
	// Line 500, Address: 0x125d54, Func Offset: 0x34
	// Line 502, Address: 0x125d58, Func Offset: 0x38
	// Line 508, Address: 0x125d5c, Func Offset: 0x3c
	// Line 502, Address: 0x125d64, Func Offset: 0x44
	// Line 504, Address: 0x125d70, Func Offset: 0x50
	// Line 500, Address: 0x125d74, Func Offset: 0x54
	// Line 508, Address: 0x125d80, Func Offset: 0x60
	// Line 504, Address: 0x125d84, Func Offset: 0x64
	// Line 508, Address: 0x125d88, Func Offset: 0x68
	// Line 504, Address: 0x125d94, Func Offset: 0x74
	// Line 508, Address: 0x125da4, Func Offset: 0x84
	// Line 514, Address: 0x125dbc, Func Offset: 0x9c
	// Line 520, Address: 0x125dc4, Func Offset: 0xa4
	// Line 521, Address: 0x125dcc, Func Offset: 0xac
	// Line 522, Address: 0x125dd4, Func Offset: 0xb4
	// Line 523, Address: 0x125dd8, Func Offset: 0xb8
	// Line 528, Address: 0x125de0, Func Offset: 0xc0
	// Line 530, Address: 0x125de8, Func Offset: 0xc8
	// Line 529, Address: 0x125dec, Func Offset: 0xcc
	// Line 530, Address: 0x125df0, Func Offset: 0xd0
	// Line 529, Address: 0x125df4, Func Offset: 0xd4
	// Line 530, Address: 0x125df8, Func Offset: 0xd8
	// Line 536, Address: 0x125dfc, Func Offset: 0xdc
	// Line 540, Address: 0x125e00, Func Offset: 0xe0
	// Line 536, Address: 0x125e08, Func Offset: 0xe8
	// Line 537, Address: 0x125e10, Func Offset: 0xf0
	// Line 540, Address: 0x125e18, Func Offset: 0xf8
	// Line 541, Address: 0x125e20, Func Offset: 0x100
	// Line 542, Address: 0x125e24, Func Offset: 0x104
	// Func End, Address: 0x125e34, Func Offset: 0x114
}

// xMemGetBlockInfo__FP12xMemHeap_tagUiP15xMemBlkInfo_tag
// Start address: 0x125e40
uint32 xMemGetBlockInfo(xMemHeap_tag* heap, uint32 size, xMemBlkInfo_tag* info)
{
	xHeapState_tag* sp;
	int32 post;
	int32 block;
	int32 pre;
	int32 hdr;
	uint32 total;
	uint32 align;
	// Line 430, Address: 0x125e40, Func Offset: 0
	// Line 431, Address: 0x125e44, Func Offset: 0x4
	// Line 432, Address: 0x125e4c, Func Offset: 0xc
	// Line 438, Address: 0x125e50, Func Offset: 0x10
	// Line 440, Address: 0x125e54, Func Offset: 0x14
	// Line 430, Address: 0x125e58, Func Offset: 0x18
	// Line 431, Address: 0x125e64, Func Offset: 0x24
	// Line 432, Address: 0x125e70, Func Offset: 0x30
	// Line 438, Address: 0x125e78, Func Offset: 0x38
	// Line 441, Address: 0x125e80, Func Offset: 0x40
	// Line 442, Address: 0x125e94, Func Offset: 0x54
	// Line 443, Address: 0x125e9c, Func Offset: 0x5c
	// Line 444, Address: 0x125ea4, Func Offset: 0x64
	// Line 442, Address: 0x125ea8, Func Offset: 0x68
	// Line 443, Address: 0x125eac, Func Offset: 0x6c
	// Line 445, Address: 0x125eb8, Func Offset: 0x78
	// Line 447, Address: 0x125ec0, Func Offset: 0x80
	// Line 448, Address: 0x125ec4, Func Offset: 0x84
	// Line 446, Address: 0x125ec8, Func Offset: 0x88
	// Line 449, Address: 0x125ecc, Func Offset: 0x8c
	// Line 463, Address: 0x125ed0, Func Offset: 0x90
	// Line 465, Address: 0x125ee0, Func Offset: 0xa0
	// Line 467, Address: 0x125ef0, Func Offset: 0xb0
	// Line 468, Address: 0x125ef8, Func Offset: 0xb8
	// Line 470, Address: 0x125f04, Func Offset: 0xc4
	// Line 476, Address: 0x125f08, Func Offset: 0xc8
	// Line 473, Address: 0x125f0c, Func Offset: 0xcc
	// Line 476, Address: 0x125f10, Func Offset: 0xd0
	// Line 470, Address: 0x125f14, Func Offset: 0xd4
	// Line 471, Address: 0x125f1c, Func Offset: 0xdc
	// Line 472, Address: 0x125f28, Func Offset: 0xe8
	// Line 473, Address: 0x125f34, Func Offset: 0xf4
	// Line 476, Address: 0x125f40, Func Offset: 0x100
	// Line 480, Address: 0x125f44, Func Offset: 0x104
	// Func End, Address: 0x125f4c, Func Offset: 0x10c
}

// xMemInitHeap__FP12xMemHeap_tagUiUiUi
// Start address: 0x125f50
void xMemInitHeap(xMemHeap_tag* heap, uint32 base, uint32 size, uint32 flags)
{
	xHeapState_tag* sp;
	uint32 align;
	uint32 old_base;
	// Line 355, Address: 0x125f50, Func Offset: 0
	// Line 363, Address: 0x125f60, Func Offset: 0x10
	// Line 368, Address: 0x125f70, Func Offset: 0x20
	// Line 369, Address: 0x125f7c, Func Offset: 0x2c
	// Line 370, Address: 0x125f84, Func Offset: 0x34
	// Line 371, Address: 0x125f88, Func Offset: 0x38
	// Line 372, Address: 0x125f90, Func Offset: 0x40
	// Line 373, Address: 0x125fa0, Func Offset: 0x50
	// Line 381, Address: 0x125fa8, Func Offset: 0x58
	// Line 382, Address: 0x125fac, Func Offset: 0x5c
	// Line 383, Address: 0x125fb0, Func Offset: 0x60
	// Line 384, Address: 0x125fb4, Func Offset: 0x64
	// Line 385, Address: 0x125fb8, Func Offset: 0x68
	// Line 386, Address: 0x125fbc, Func Offset: 0x6c
	// Line 395, Address: 0x125fc0, Func Offset: 0x70
	// Line 386, Address: 0x125fc8, Func Offset: 0x78
	// Line 387, Address: 0x125fd0, Func Offset: 0x80
	// Line 395, Address: 0x125fd4, Func Offset: 0x84
	// Line 401, Address: 0x125fdc, Func Offset: 0x8c
	// Line 402, Address: 0x125ff0, Func Offset: 0xa0
	// Line 406, Address: 0x126000, Func Offset: 0xb0
	// Line 407, Address: 0x126014, Func Offset: 0xc4
	// Line 408, Address: 0x12601c, Func Offset: 0xcc
	// Line 409, Address: 0x126024, Func Offset: 0xd4
	// Line 413, Address: 0x126028, Func Offset: 0xd8
	// Line 414, Address: 0x126030, Func Offset: 0xe0
	// Line 415, Address: 0x126034, Func Offset: 0xe4
	// Func End, Address: 0x126044, Func Offset: 0xf4
}

// xMemExit__Fv
// Start address: 0x126050
void xMemExit()
{
	// Line 340, Address: 0x126050, Func Offset: 0
	// Func End, Address: 0x126058, Func Offset: 0x8
}

// xMemInit__Fv
// Start address: 0x126060
void xMemInit()
{
	// Line 283, Address: 0x126060, Func Offset: 0
	// Line 285, Address: 0x12606c, Func Offset: 0xc
	// Line 292, Address: 0x126074, Func Offset: 0x14
	// Line 297, Address: 0x126098, Func Offset: 0x38
	// Line 303, Address: 0x1260b0, Func Offset: 0x50
	// Line 309, Address: 0x1260c8, Func Offset: 0x68
	// Line 310, Address: 0x1260d0, Func Offset: 0x70
	// Line 311, Address: 0x1260d8, Func Offset: 0x78
	// Line 312, Address: 0x1260dc, Func Offset: 0x7c
	// Line 313, Address: 0x1260e0, Func Offset: 0x80
	// Line 314, Address: 0x1260e4, Func Offset: 0x84
	// Line 316, Address: 0x1260e8, Func Offset: 0x88
	// Line 325, Address: 0x1260ec, Func Offset: 0x8c
	// Func End, Address: 0x126100, Func Offset: 0xa0
}

