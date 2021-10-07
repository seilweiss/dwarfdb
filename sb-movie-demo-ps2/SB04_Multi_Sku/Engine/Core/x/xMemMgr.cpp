



void xMemScratchPop();
void* xMemScratchPush(uint32 size, uint32 align);
void xMemPoolFree(xMemPool* pool, void* data);
void* xMemPoolAlloc(xMemPool* pool);
void xMemPoolSetup(xMemPool* pool, void* buffer, uint32 nextOffset, uint32 flags, void(*initCB)(xMemPool*, void*), uint32 size, uint32 count, uint32 numRealloc);
void xMemPoolAddElements(xMemPool* pool, void* buffer, uint32 count);
int32 xMemGetBase();
void xMemRegisterBaseNotifyFunc(void(*func)());
int32 xMemPopBase(int32 depth);
int32 xMemPopBase(uint32 heapID, int32 depth);
int32 xMemPushBase();
void* xMemAlloc(uint32 heapID, uint32 size, int32 align);
void* xMemGrowAlloc(uint32 heapID, uint32 size);
uint32 xMemGetBlockInfo(xMemHeap* heap, uint32 size, int32 align, xMemBlkInfo* info);
void xMemInitHeap(xMemHeap* heap, uint32 base, uint32 size, uint32 flags);
void xMemInit();
void xMemDebug_SoakLog();

// xMemScratchPop__FPv
// Start address: 0x40bdd0
void xMemScratchPop()
{
	// Line 1825, Address: 0x40bdd0, Func Offset: 0
	// Line 1826, Address: 0x40bdd4, Func Offset: 0x4
	// Line 1825, Address: 0x40bde0, Func Offset: 0x10
	// Line 1826, Address: 0x40bde8, Func Offset: 0x18
	// Line 1827, Address: 0x40bdf8, Func Offset: 0x28
	// Func End, Address: 0x40be00, Func Offset: 0x30
}

// xMemScratchPush__FUiUi
// Start address: 0x40be00
void* xMemScratchPush(uint32 size, uint32 align)
{
	uint32 align_mask;
	uint8* mem;
	uint32 used;
	// Line 1753, Address: 0x40be00, Func Offset: 0
	// Line 1771, Address: 0x40be04, Func Offset: 0x4
	// Line 1753, Address: 0x40be08, Func Offset: 0x8
	// Line 1771, Address: 0x40be1c, Func Offset: 0x1c
	// Line 1773, Address: 0x40be38, Func Offset: 0x38
	// Line 1774, Address: 0x40be40, Func Offset: 0x40
	// Line 1779, Address: 0x40be54, Func Offset: 0x54
	// Line 1780, Address: 0x40be60, Func Offset: 0x60
	// Line 1781, Address: 0x40be64, Func Offset: 0x64
	// Line 1784, Address: 0x40be6c, Func Offset: 0x6c
	// Line 1785, Address: 0x40be7c, Func Offset: 0x7c
	// Line 1786, Address: 0x40be84, Func Offset: 0x84
	// Line 1787, Address: 0x40be90, Func Offset: 0x90
	// Line 1774, Address: 0x40be98, Func Offset: 0x98
	// Line 1787, Address: 0x40be9c, Func Offset: 0x9c
	// Line 1788, Address: 0x40becc, Func Offset: 0xcc
	// Line 1789, Address: 0x40bed0, Func Offset: 0xd0
	// Line 1788, Address: 0x40bed4, Func Offset: 0xd4
	// Line 1790, Address: 0x40bee4, Func Offset: 0xe4
	// Line 1788, Address: 0x40bee8, Func Offset: 0xe8
	// Line 1790, Address: 0x40beec, Func Offset: 0xec
	// Line 1788, Address: 0x40bef0, Func Offset: 0xf0
	// Line 1793, Address: 0x40bef4, Func Offset: 0xf4
	// Func End, Address: 0x40bf0c, Func Offset: 0x10c
}

// xMemPoolFree__FP8xMemPoolPv
// Start address: 0x40bf10
void xMemPoolFree(xMemPool* pool, void* data)
{
	void* freeList;
	uint32 next;
	void** prev;
	void* curr;
	// Line 1686, Address: 0x40bf10, Func Offset: 0
	// Line 1695, Address: 0x40bf18, Func Offset: 0x8
	// Line 1691, Address: 0x40bf1c, Func Offset: 0xc
	// Line 1695, Address: 0x40bf20, Func Offset: 0x10
	// Line 1697, Address: 0x40bf2c, Func Offset: 0x1c
	// Line 1696, Address: 0x40bf30, Func Offset: 0x20
	// Line 1701, Address: 0x40bf34, Func Offset: 0x24
	// Line 1687, Address: 0x40bf58, Func Offset: 0x48
	// Line 1702, Address: 0x40bf60, Func Offset: 0x50
	// Line 1703, Address: 0x40bf68, Func Offset: 0x58
	// Line 1718, Address: 0x40bf74, Func Offset: 0x64
	// Line 1719, Address: 0x40bf7c, Func Offset: 0x6c
	// Line 1726, Address: 0x40bf80, Func Offset: 0x70
	// Func End, Address: 0x40bf88, Func Offset: 0x78
}

// xMemPoolAlloc__FP8xMemPool
// Start address: 0x40bf90
void* xMemPoolAlloc(xMemPool* pool)
{
	void* retval;
	uint32 next;
	uint32 flags;
	// Line 1647, Address: 0x40bf90, Func Offset: 0
	// Line 1649, Address: 0x40bfa8, Func Offset: 0x18
	// Line 1650, Address: 0x40bfac, Func Offset: 0x1c
	// Line 1651, Address: 0x40bfb0, Func Offset: 0x20
	// Line 1654, Address: 0x40bfb4, Func Offset: 0x24
	// Line 1666, Address: 0x40bfc0, Func Offset: 0x30
	// Line 1663, Address: 0x40bfc4, Func Offset: 0x34
	// Line 1666, Address: 0x40bfc8, Func Offset: 0x38
	// Line 1679, Address: 0x40bfd0, Func Offset: 0x40
	// Line 1656, Address: 0x40bfdc, Func Offset: 0x4c
	// Line 1679, Address: 0x40bfe0, Func Offset: 0x50
	// Line 1656, Address: 0x40bff0, Func Offset: 0x60
	// Line 1679, Address: 0x40bff8, Func Offset: 0x68
	// Line 1680, Address: 0x40c018, Func Offset: 0x88
	// Func End, Address: 0x40c030, Func Offset: 0xa0
}

// xMemPoolSetup__FP8xMemPoolPvUiUiPFP8xMemPoolPv_vUiUiUi
// Start address: 0x40c030
void xMemPoolSetup(xMemPool* pool, void* buffer, uint32 nextOffset, uint32 flags, void(*initCB)(xMemPool*, void*), uint32 size, uint32 count, uint32 numRealloc)
{
	// Line 1632, Address: 0x40c030, Func Offset: 0
	// Line 1633, Address: 0x40c034, Func Offset: 0x4
	// Line 1634, Address: 0x40c038, Func Offset: 0x8
	// Line 1642, Address: 0x40c03c, Func Offset: 0xc
	// Line 1635, Address: 0x40c040, Func Offset: 0x10
	// Line 1636, Address: 0x40c044, Func Offset: 0x14
	// Line 1637, Address: 0x40c048, Func Offset: 0x18
	// Line 1638, Address: 0x40c04c, Func Offset: 0x1c
	// Line 1639, Address: 0x40c050, Func Offset: 0x20
	// Line 1642, Address: 0x40c054, Func Offset: 0x24
	// Func End, Address: 0x40c05c, Func Offset: 0x2c
}

// xMemPoolAddElements__FP8xMemPoolPvUi
// Start address: 0x40c060
void xMemPoolAddElements(xMemPool* pool, void* buffer, uint32 count)
{
	int32 i;
	void* curr;
	void(*initCB)(xMemPool*, void*);
	uint32 next;
	uint32 size;
	// Line 1608, Address: 0x40c060, Func Offset: 0
	// Line 1611, Address: 0x40c098, Func Offset: 0x38
	// Line 1615, Address: 0x40c09c, Func Offset: 0x3c
	// Line 1612, Address: 0x40c0a0, Func Offset: 0x40
	// Line 1615, Address: 0x40c0a4, Func Offset: 0x44
	// Line 1613, Address: 0x40c0a8, Func Offset: 0x48
	// Line 1615, Address: 0x40c0ac, Func Offset: 0x4c
	// Line 1616, Address: 0x40c0b8, Func Offset: 0x58
	// Line 1617, Address: 0x40c0bc, Func Offset: 0x5c
	// Line 1619, Address: 0x40c0d0, Func Offset: 0x70
	// Line 1620, Address: 0x40c0e0, Func Offset: 0x80
	// Line 1621, Address: 0x40c0e8, Func Offset: 0x88
	// Line 1622, Address: 0x40c0f8, Func Offset: 0x98
	// Line 1624, Address: 0x40c0fc, Func Offset: 0x9c
	// Line 1625, Address: 0x40c108, Func Offset: 0xa8
	// Func End, Address: 0x40c138, Func Offset: 0xd8
}

// xMemGetBase__Fv
// Start address: 0x40c140
int32 xMemGetBase()
{
	// Line 1585, Address: 0x40c140, Func Offset: 0
	// Line 1586, Address: 0x40c164, Func Offset: 0x24
	// Func End, Address: 0x40c16c, Func Offset: 0x2c
}

// xMemRegisterBaseNotifyFunc__FPFv_v
// Start address: 0x40c170
void xMemRegisterBaseNotifyFunc(void(*func)())
{
	// Line 1573, Address: 0x40c170, Func Offset: 0
	// Func End, Address: 0x40c178, Func Offset: 0x8
}

// xMemPopBase__Fi
// Start address: 0x40c180
int32 xMemPopBase(int32 depth)
{
	// Line 1549, Address: 0x40c184, Func Offset: 0x4
	// Func End, Address: 0x40c18c, Func Offset: 0xc
}

// xMemPopBase__FUii
// Start address: 0x40c190
int32 xMemPopBase(uint32 heapID, int32 depth)
{
	xMemHeap* heap;
	int32 new_idx;
	int32 popped;
	xMemFreeLink* list;
	// Line 1496, Address: 0x40c190, Func Offset: 0
	// Line 1507, Address: 0x40c194, Func Offset: 0x4
	// Line 1496, Address: 0x40c198, Func Offset: 0x8
	// Line 1507, Address: 0x40c19c, Func Offset: 0xc
	// Line 1496, Address: 0x40c1a0, Func Offset: 0x10
	// Line 1507, Address: 0x40c1a4, Func Offset: 0x14
	// Line 1496, Address: 0x40c1a8, Func Offset: 0x18
	// Line 1507, Address: 0x40c1ac, Func Offset: 0x1c
	// Line 1496, Address: 0x40c1b0, Func Offset: 0x20
	// Line 1507, Address: 0x40c1b4, Func Offset: 0x24
	// Line 1496, Address: 0x40c1b8, Func Offset: 0x28
	// Line 1507, Address: 0x40c1bc, Func Offset: 0x2c
	// Line 1496, Address: 0x40c1c4, Func Offset: 0x34
	// Line 1513, Address: 0x40c1c8, Func Offset: 0x38
	// Line 1523, Address: 0x40c1e0, Func Offset: 0x50
	// Line 1525, Address: 0x40c1fc, Func Offset: 0x6c
	// Line 1528, Address: 0x40c200, Func Offset: 0x70
	// Line 1530, Address: 0x40c208, Func Offset: 0x78
	// Line 1533, Address: 0x40c214, Func Offset: 0x84
	// Line 1534, Address: 0x40c218, Func Offset: 0x88
	// Line 1535, Address: 0x40c228, Func Offset: 0x98
	// Line 1538, Address: 0x40c238, Func Offset: 0xa8
	// Line 1541, Address: 0x40c23c, Func Offset: 0xac
	// Line 1542, Address: 0x40c244, Func Offset: 0xb4
	// Line 1544, Address: 0x40c24c, Func Offset: 0xbc
	// Line 1545, Address: 0x40c250, Func Offset: 0xc0
	// Func End, Address: 0x40c270, Func Offset: 0xe0
}

// xMemPushBase__Fv
// Start address: 0x40c270
int32 xMemPushBase()
{
	// Line 1455, Address: 0x40c270, Func Offset: 0
	// Line 1456, Address: 0x40c274, Func Offset: 0x4
	// Line 1455, Address: 0x40c278, Func Offset: 0x8
	// Line 1456, Address: 0x40c27c, Func Offset: 0xc
	// Line 1455, Address: 0x40c280, Func Offset: 0x10
	// Line 1456, Address: 0x40c284, Func Offset: 0x14
	// Line 1457, Address: 0x40c300, Func Offset: 0x90
	// Line 1456, Address: 0x40c308, Func Offset: 0x98
	// Line 1457, Address: 0x40c30c, Func Offset: 0x9c
	// Func End, Address: 0x40c314, Func Offset: 0xa4
}

// xMemAlloc__FUiUii
// Start address: 0x40c320
void* xMemAlloc(uint32 heapID, uint32 size, int32 align)
{
	xMemHeap* heap;
	xMemBlock* hdr;
	xHeapState* sp;
	xMemBlkInfo info;
	uint32 total;
	// Line 747, Address: 0x40c320, Func Offset: 0
	// Line 764, Address: 0x40c324, Func Offset: 0x4
	// Line 747, Address: 0x40c328, Func Offset: 0x8
	// Line 764, Address: 0x40c32c, Func Offset: 0xc
	// Line 747, Address: 0x40c330, Func Offset: 0x10
	// Line 764, Address: 0x40c334, Func Offset: 0x14
	// Line 747, Address: 0x40c33c, Func Offset: 0x1c
	// Line 764, Address: 0x40c340, Func Offset: 0x20
	// Line 747, Address: 0x40c344, Func Offset: 0x24
	// Line 764, Address: 0x40c348, Func Offset: 0x28
	// Line 747, Address: 0x40c34c, Func Offset: 0x2c
	// Line 764, Address: 0x40c350, Func Offset: 0x30
	// Line 747, Address: 0x40c354, Func Offset: 0x34
	// Line 764, Address: 0x40c358, Func Offset: 0x38
	// Line 747, Address: 0x40c35c, Func Offset: 0x3c
	// Line 764, Address: 0x40c360, Func Offset: 0x40
	// Line 765, Address: 0x40c368, Func Offset: 0x48
	// Line 771, Address: 0x40c38c, Func Offset: 0x6c
	// Line 776, Address: 0x40c39c, Func Offset: 0x7c
	// Line 780, Address: 0x40c3a4, Func Offset: 0x84
	// Line 783, Address: 0x40c3b0, Func Offset: 0x90
	// Line 787, Address: 0x40c3c4, Func Offset: 0xa4
	// Line 838, Address: 0x40c3dc, Func Offset: 0xbc
	// Line 840, Address: 0x40c3e0, Func Offset: 0xc0
	// Line 838, Address: 0x40c3e4, Func Offset: 0xc4
	// Line 839, Address: 0x40c3e8, Func Offset: 0xc8
	// Line 840, Address: 0x40c3f4, Func Offset: 0xd4
	// Line 844, Address: 0x40c404, Func Offset: 0xe4
	// Line 807, Address: 0x40c40c, Func Offset: 0xec
	// Line 847, Address: 0x40c414, Func Offset: 0xf4
	// Line 848, Address: 0x40c41c, Func Offset: 0xfc
	// Line 849, Address: 0x40c420, Func Offset: 0x100
	// Line 853, Address: 0x40c424, Func Offset: 0x104
	// Line 854, Address: 0x40c438, Func Offset: 0x118
	// Line 883, Address: 0x40c44c, Func Offset: 0x12c
	// Line 899, Address: 0x40c450, Func Offset: 0x130
	// Line 884, Address: 0x40c454, Func Offset: 0x134
	// Line 883, Address: 0x40c458, Func Offset: 0x138
	// Line 884, Address: 0x40c460, Func Offset: 0x140
	// Line 899, Address: 0x40c46c, Func Offset: 0x14c
	// Line 901, Address: 0x40c478, Func Offset: 0x158
	// Line 952, Address: 0x40c47c, Func Offset: 0x15c
	// Line 953, Address: 0x40c480, Func Offset: 0x160
	// Func End, Address: 0x40c4a4, Func Offset: 0x184
}

// xMemGrowAlloc__FUiUi
// Start address: 0x40c4b0
void* xMemGrowAlloc(uint32 heapID, uint32 size)
{
	xMemHeap* heap;
	xMemBlock* hdr;
	xHeapState* sp;
	void* memptr;
	// Line 642, Address: 0x40c4b0, Func Offset: 0
	// Line 658, Address: 0x40c4b8, Func Offset: 0x8
	// Line 642, Address: 0x40c4c4, Func Offset: 0x14
	// Line 661, Address: 0x40c4c8, Func Offset: 0x18
	// Line 642, Address: 0x40c4cc, Func Offset: 0x1c
	// Line 661, Address: 0x40c4d0, Func Offset: 0x20
	// Line 662, Address: 0x40c4ec, Func Offset: 0x3c
	// Line 663, Address: 0x40c4f0, Func Offset: 0x40
	// Line 672, Address: 0x40c4f4, Func Offset: 0x44
	// Line 662, Address: 0x40c4f8, Func Offset: 0x48
	// Line 672, Address: 0x40c50c, Func Offset: 0x5c
	// Line 684, Address: 0x40c520, Func Offset: 0x70
	// Line 685, Address: 0x40c530, Func Offset: 0x80
	// Line 686, Address: 0x40c538, Func Offset: 0x88
	// Line 687, Address: 0x40c53c, Func Offset: 0x8c
	// Line 696, Address: 0x40c544, Func Offset: 0x94
	// Line 698, Address: 0x40c54c, Func Offset: 0x9c
	// Line 697, Address: 0x40c550, Func Offset: 0xa0
	// Line 698, Address: 0x40c554, Func Offset: 0xa4
	// Line 697, Address: 0x40c558, Func Offset: 0xa8
	// Line 698, Address: 0x40c55c, Func Offset: 0xac
	// Line 708, Address: 0x40c560, Func Offset: 0xb0
	// Line 712, Address: 0x40c564, Func Offset: 0xb4
	// Line 708, Address: 0x40c56c, Func Offset: 0xbc
	// Line 709, Address: 0x40c574, Func Offset: 0xc4
	// Line 712, Address: 0x40c57c, Func Offset: 0xcc
	// Line 713, Address: 0x40c584, Func Offset: 0xd4
	// Line 678, Address: 0x40c58c, Func Offset: 0xdc
	// Line 714, Address: 0x40c590, Func Offset: 0xe0
	// Func End, Address: 0x40c5a0, Func Offset: 0xf0
}

// xMemGetBlockInfo__FP8xMemHeapUiiP11xMemBlkInfo
// Start address: 0x40c5a0
uint32 xMemGetBlockInfo(xMemHeap* heap, uint32 size, int32 align, xMemBlkInfo* info)
{
	int32 total;
	int32 hdr;
	int32 pre;
	int32 block;
	int32 post;
	xHeapState* sp;
	int32 remainder;
	// Line 552, Address: 0x40c5a0, Func Offset: 0
	// Line 553, Address: 0x40c5a4, Func Offset: 0x4
	// Line 552, Address: 0x40c5a8, Func Offset: 0x8
	// Line 553, Address: 0x40c5ac, Func Offset: 0xc
	// Line 560, Address: 0x40c5b0, Func Offset: 0x10
	// Line 552, Address: 0x40c5b4, Func Offset: 0x14
	// Line 553, Address: 0x40c5c0, Func Offset: 0x20
	// Line 552, Address: 0x40c5c4, Func Offset: 0x24
	// Line 560, Address: 0x40c5cc, Func Offset: 0x2c
	// Line 552, Address: 0x40c5d0, Func Offset: 0x30
	// Line 563, Address: 0x40c5d4, Func Offset: 0x34
	// Line 566, Address: 0x40c5dc, Func Offset: 0x3c
	// Line 570, Address: 0x40c5e0, Func Offset: 0x40
	// Line 566, Address: 0x40c5e8, Func Offset: 0x48
	// Line 570, Address: 0x40c5ec, Func Offset: 0x4c
	// Line 574, Address: 0x40c600, Func Offset: 0x60
	// Line 579, Address: 0x40c604, Func Offset: 0x64
	// Line 581, Address: 0x40c60c, Func Offset: 0x6c
	// Line 584, Address: 0x40c610, Func Offset: 0x70
	// Line 585, Address: 0x40c61c, Func Offset: 0x7c
	// Line 586, Address: 0x40c628, Func Offset: 0x88
	// Line 590, Address: 0x40c630, Func Offset: 0x90
	// Line 593, Address: 0x40c634, Func Offset: 0x94
	// Line 597, Address: 0x40c638, Func Offset: 0x98
	// Line 612, Address: 0x40c644, Func Offset: 0xa4
	// Line 614, Address: 0x40c654, Func Offset: 0xb4
	// Line 616, Address: 0x40c66c, Func Offset: 0xcc
	// Line 617, Address: 0x40c674, Func Offset: 0xd4
	// Line 619, Address: 0x40c67c, Func Offset: 0xdc
	// Line 625, Address: 0x40c680, Func Offset: 0xe0
	// Line 622, Address: 0x40c684, Func Offset: 0xe4
	// Line 625, Address: 0x40c688, Func Offset: 0xe8
	// Line 619, Address: 0x40c68c, Func Offset: 0xec
	// Line 620, Address: 0x40c694, Func Offset: 0xf4
	// Line 621, Address: 0x40c6a0, Func Offset: 0x100
	// Line 622, Address: 0x40c6ac, Func Offset: 0x10c
	// Line 625, Address: 0x40c6b8, Func Offset: 0x118
	// Line 629, Address: 0x40c6bc, Func Offset: 0x11c
	// Func End, Address: 0x40c6c4, Func Offset: 0x124
}

// xMemInitHeap__FP8xMemHeapUiUiUi
// Start address: 0x40c6d0
void xMemInitHeap(xMemHeap* heap, uint32 base, uint32 size, uint32 flags)
{
	uint32 old_base;
	int32 align;
	xHeapState* sp;
	// Line 476, Address: 0x40c6d0, Func Offset: 0
	// Line 484, Address: 0x40c6d4, Func Offset: 0x4
	// Line 476, Address: 0x40c6d8, Func Offset: 0x8
	// Line 484, Address: 0x40c6e4, Func Offset: 0x14
	// Line 489, Address: 0x40c6f0, Func Offset: 0x20
	// Line 490, Address: 0x40c6fc, Func Offset: 0x2c
	// Line 491, Address: 0x40c704, Func Offset: 0x34
	// Line 492, Address: 0x40c708, Func Offset: 0x38
	// Line 493, Address: 0x40c710, Func Offset: 0x40
	// Line 494, Address: 0x40c720, Func Offset: 0x50
	// Line 502, Address: 0x40c728, Func Offset: 0x58
	// Line 517, Address: 0x40c72c, Func Offset: 0x5c
	// Line 503, Address: 0x40c730, Func Offset: 0x60
	// Line 517, Address: 0x40c734, Func Offset: 0x64
	// Line 504, Address: 0x40c738, Func Offset: 0x68
	// Line 505, Address: 0x40c73c, Func Offset: 0x6c
	// Line 506, Address: 0x40c740, Func Offset: 0x70
	// Line 507, Address: 0x40c744, Func Offset: 0x74
	// Line 508, Address: 0x40c758, Func Offset: 0x88
	// Line 509, Address: 0x40c75c, Func Offset: 0x8c
	// Line 517, Address: 0x40c760, Func Offset: 0x90
	// Line 530, Address: 0x40c768, Func Offset: 0x98
	// Line 531, Address: 0x40c770, Func Offset: 0xa0
	// Line 535, Address: 0x40c774, Func Offset: 0xa4
	// Line 537, Address: 0x40c77c, Func Offset: 0xac
	// Line 523, Address: 0x40c784, Func Offset: 0xb4
	// Line 537, Address: 0x40c794, Func Offset: 0xc4
	// Line 524, Address: 0x40c79c, Func Offset: 0xcc
	// Line 537, Address: 0x40c7a0, Func Offset: 0xd0
	// Line 528, Address: 0x40c7b0, Func Offset: 0xe0
	// Line 537, Address: 0x40c7b4, Func Offset: 0xe4
	// Line 528, Address: 0x40c7bc, Func Offset: 0xec
	// Line 537, Address: 0x40c7c0, Func Offset: 0xf0
	// Line 529, Address: 0x40c7cc, Func Offset: 0xfc
	// Line 537, Address: 0x40c7d4, Func Offset: 0x104
	// Func End, Address: 0x40c7e4, Func Offset: 0x114
}

// xMemInit__Fv
// Start address: 0x40c7f0
void xMemInit()
{
	// Line 393, Address: 0x40c7f0, Func Offset: 0
	// Line 395, Address: 0x40c7f8, Func Offset: 0x8
	// Line 402, Address: 0x40c800, Func Offset: 0x10
	// Line 407, Address: 0x40c824, Func Offset: 0x34
	// Line 402, Address: 0x40c828, Func Offset: 0x38
	// Line 407, Address: 0x40c82c, Func Offset: 0x3c
	// Line 413, Address: 0x40c848, Func Offset: 0x58
	// Line 407, Address: 0x40c84c, Func Offset: 0x5c
	// Line 413, Address: 0x40c850, Func Offset: 0x60
	// Line 419, Address: 0x40c868, Func Offset: 0x78
	// Line 420, Address: 0x40c874, Func Offset: 0x84
	// Line 426, Address: 0x40c87c, Func Offset: 0x8c
	// Line 420, Address: 0x40c880, Func Offset: 0x90
	// Line 421, Address: 0x40c884, Func Offset: 0x94
	// Line 422, Address: 0x40c88c, Func Offset: 0x9c
	// Line 423, Address: 0x40c894, Func Offset: 0xa4
	// Line 424, Address: 0x40c89c, Func Offset: 0xac
	// Line 446, Address: 0x40c8a4, Func Offset: 0xb4
	// Func End, Address: 0x40c8b0, Func Offset: 0xc0
}

// xMemDebug_SoakLog__FPCc
// Start address: 0x40c8b0
void xMemDebug_SoakLog()
{
	// Line 336, Address: 0x40c8b0, Func Offset: 0
	// Func End, Address: 0x40c8b8, Func Offset: 0x8
}

