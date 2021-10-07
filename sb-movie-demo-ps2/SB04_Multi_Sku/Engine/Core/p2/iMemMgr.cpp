



void iMemPopTemp(void* pointer);
void* iMemPushTemp(uint32 size);
uint8 iMemMgrCheckCollisionWithMallocHeap(void* mem, uint32 size);
void* iMemMgrCalloc(uint32 numObj, uint32 sizeObj);
void iMemMgrFree(void* mem);
void* iMemMgrRealloc(void* mem, uint32 newSize);
void* iMemMgrMalloc(uint32 size);
void iMemMgrEnableRenderWareMemoryHack(uint8 hackEnabled);
void iMemInit();
void HandleOutOfMemory(uint32 size, uint32 options);
uint32 DoGetBlockSize(void* pointer);
void DoFree(void* pointer);
void* DoReallocate(void* pointer, uint32 size, uint32 options);
void* DoAllocate(uint32 size, uint32 options);
void Init(void* start, uint32 size, uint32 dmaBufferSize, uint32 resourceArenaSize, uint32 byte4Count, uint32 byte8Count, uint32 byte32Count, uint32 byte48Count, uint8 debugging);

// iMemPopTemp__FPv
// Start address: 0x4aecc0
void iMemPopTemp(void* pointer)
{
	int32 i;
	// Line 879, Address: 0x4aecc0, Func Offset: 0
	// Line 916, Address: 0x4aecd4, Func Offset: 0x14
	// Line 879, Address: 0x4aecd8, Func Offset: 0x18
	// Line 916, Address: 0x4aecdc, Func Offset: 0x1c
	// Line 881, Address: 0x4aece0, Func Offset: 0x20
	// Line 914, Address: 0x4aecec, Func Offset: 0x2c
	// Line 881, Address: 0x4aecf8, Func Offset: 0x38
	// Line 914, Address: 0x4aecfc, Func Offset: 0x3c
	// Line 916, Address: 0x4aed08, Func Offset: 0x48
	// Line 911, Address: 0x4aed2c, Func Offset: 0x6c
	// Line 916, Address: 0x4aed30, Func Offset: 0x70
	// Func End, Address: 0x4aed58, Func Offset: 0x98
}

// iMemPushTemp__FUi
// Start address: 0x4aed60
void* iMemPushTemp(uint32 size)
{
	xMemHeap* heap;
	uint8* ret;
	// Line 823, Address: 0x4aed60, Func Offset: 0
	// Line 829, Address: 0x4aed64, Func Offset: 0x4
	// Line 823, Address: 0x4aed68, Func Offset: 0x8
	// Line 829, Address: 0x4aed78, Func Offset: 0x18
	// Line 835, Address: 0x4aed84, Func Offset: 0x24
	// Line 840, Address: 0x4aed8c, Func Offset: 0x2c
	// Line 843, Address: 0x4aed98, Func Offset: 0x38
	// Line 856, Address: 0x4aedd4, Func Offset: 0x74
	// Line 843, Address: 0x4aedd8, Func Offset: 0x78
	// Line 856, Address: 0x4aeddc, Func Offset: 0x7c
	// Line 843, Address: 0x4aede0, Func Offset: 0x80
	// Line 851, Address: 0x4aede8, Func Offset: 0x88
	// Line 849, Address: 0x4aedec, Func Offset: 0x8c
	// Line 851, Address: 0x4aedf0, Func Offset: 0x90
	// Line 856, Address: 0x4aee00, Func Offset: 0xa0
	// Line 861, Address: 0x4aee14, Func Offset: 0xb4
	// Line 869, Address: 0x4aee30, Func Offset: 0xd0
	// Line 841, Address: 0x4aee40, Func Offset: 0xe0
	// Line 869, Address: 0x4aee44, Func Offset: 0xe4
	// Line 845, Address: 0x4aee64, Func Offset: 0x104
	// Line 869, Address: 0x4aee68, Func Offset: 0x108
	// Line 845, Address: 0x4aee6c, Func Offset: 0x10c
	// Line 869, Address: 0x4aee70, Func Offset: 0x110
	// Line 845, Address: 0x4aee74, Func Offset: 0x114
	// Line 869, Address: 0x4aee78, Func Offset: 0x118
	// Line 847, Address: 0x4aee80, Func Offset: 0x120
	// Line 869, Address: 0x4aee84, Func Offset: 0x124
	// Line 847, Address: 0x4aee88, Func Offset: 0x128
	// Line 869, Address: 0x4aee8c, Func Offset: 0x12c
	// Line 847, Address: 0x4aee98, Func Offset: 0x138
	// Line 869, Address: 0x4aeea4, Func Offset: 0x144
	// Line 857, Address: 0x4aeea8, Func Offset: 0x148
	// Line 869, Address: 0x4aeeac, Func Offset: 0x14c
	// Line 870, Address: 0x4aeec0, Func Offset: 0x160
	// Func End, Address: 0x4aeed4, Func Offset: 0x174
}

// iMemMgrCheckCollisionWithMallocHeap__FPvUi
// Start address: 0x4aeee0
uint8 iMemMgrCheckCollisionWithMallocHeap(void* mem, uint32 size)
{
	// Line 799, Address: 0x4aeee0, Func Offset: 0
	// Line 804, Address: 0x4aeef8, Func Offset: 0x18
	// Line 811, Address: 0x4aef34, Func Offset: 0x54
	// Line 815, Address: 0x4aef38, Func Offset: 0x58
	// Func End, Address: 0x4aef50, Func Offset: 0x70
}

// iMemMgrCalloc__FUiUiUi
// Start address: 0x4aef50
void* iMemMgrCalloc(uint32 numObj, uint32 sizeObj)
{
	// Line 795, Address: 0x4aef50, Func Offset: 0
	// Func End, Address: 0x4aef64, Func Offset: 0x14
}

// iMemMgrFree__FPv
// Start address: 0x4aef70
void iMemMgrFree(void* mem)
{
	// Line 790, Address: 0x4aef74, Func Offset: 0x4
	// Func End, Address: 0x4aef80, Func Offset: 0x10
}

// iMemMgrRealloc__FPvUiUi
// Start address: 0x4aef80
void* iMemMgrRealloc(void* mem, uint32 newSize)
{
	// Line 774, Address: 0x4aef88, Func Offset: 0x8
	// Func End, Address: 0x4aef9c, Func Offset: 0x1c
}

// iMemMgrMalloc__FUiUi
// Start address: 0x4aefa0
void* iMemMgrMalloc(uint32 size)
{
	// Line 735, Address: 0x4aefa0, Func Offset: 0
	// Line 736, Address: 0x4aefa8, Func Offset: 0x8
	// Line 737, Address: 0x4aefc0, Func Offset: 0x20
	// Line 749, Address: 0x4aefc8, Func Offset: 0x28
	// Line 751, Address: 0x4aefd8, Func Offset: 0x38
	// Func End, Address: 0x4aefe4, Func Offset: 0x44
}

// iMemMgrEnableRenderWareMemoryHack__Fb
// Start address: 0x4aeff0
void iMemMgrEnableRenderWareMemoryHack(uint8 hackEnabled)
{
	// Line 732, Address: 0x4aeff0, Func Offset: 0
	// Func End, Address: 0x4aeff8, Func Offset: 0x8
}

// iMemInit__Fv
// Start address: 0x4af000
void iMemInit()
{
	uint32 StackSize'106;
	uint32 MemTop;
	// Line 483, Address: 0x4af000, Func Offset: 0
	// Line 491, Address: 0x4af004, Func Offset: 0x4
	// Line 483, Address: 0x4af00c, Func Offset: 0xc
	// Line 491, Address: 0x4af010, Func Offset: 0x10
	// Line 492, Address: 0x4af020, Func Offset: 0x20
	// Line 493, Address: 0x4af034, Func Offset: 0x34
	// Line 495, Address: 0x4af048, Func Offset: 0x48
	// Line 496, Address: 0x4af05c, Func Offset: 0x5c
	// Line 498, Address: 0x4af070, Func Offset: 0x70
	// Line 499, Address: 0x4af084, Func Offset: 0x84
	// Line 500, Address: 0x4af098, Func Offset: 0x98
	// Line 508, Address: 0x4af0ac, Func Offset: 0xac
	// Line 506, Address: 0x4af0c0, Func Offset: 0xc0
	// Line 510, Address: 0x4af0c4, Func Offset: 0xc4
	// Line 506, Address: 0x4af0c8, Func Offset: 0xc8
	// Line 510, Address: 0x4af0cc, Func Offset: 0xcc
	// Line 512, Address: 0x4af0e0, Func Offset: 0xe0
	// Line 510, Address: 0x4af0e4, Func Offset: 0xe4
	// Line 512, Address: 0x4af0e8, Func Offset: 0xe8
	// Line 516, Address: 0x4af0f8, Func Offset: 0xf8
	// Line 519, Address: 0x4af134, Func Offset: 0x134
	// Line 530, Address: 0x4af138, Func Offset: 0x138
	// Line 565, Address: 0x4af178, Func Offset: 0x178
	// Line 566, Address: 0x4af17c, Func Offset: 0x17c
	// Line 565, Address: 0x4af180, Func Offset: 0x180
	// Line 571, Address: 0x4af184, Func Offset: 0x184
	// Line 566, Address: 0x4af188, Func Offset: 0x188
	// Line 567, Address: 0x4af18c, Func Offset: 0x18c
	// Line 566, Address: 0x4af190, Func Offset: 0x190
	// Line 572, Address: 0x4af194, Func Offset: 0x194
	// Line 567, Address: 0x4af198, Func Offset: 0x198
	// Line 570, Address: 0x4af1a4, Func Offset: 0x1a4
	// Line 572, Address: 0x4af1a8, Func Offset: 0x1a8
	// Line 575, Address: 0x4af1b4, Func Offset: 0x1b4
	// Line 572, Address: 0x4af1b8, Func Offset: 0x1b8
	// Line 570, Address: 0x4af1bc, Func Offset: 0x1bc
	// Line 571, Address: 0x4af1c0, Func Offset: 0x1c0
	// Line 570, Address: 0x4af1c4, Func Offset: 0x1c4
	// Line 576, Address: 0x4af1c8, Func Offset: 0x1c8
	// Line 575, Address: 0x4af1d0, Func Offset: 0x1d0
	// Line 576, Address: 0x4af1d4, Func Offset: 0x1d4
	// Line 577, Address: 0x4af1d8, Func Offset: 0x1d8
	// Line 576, Address: 0x4af1e0, Func Offset: 0x1e0
	// Line 578, Address: 0x4af1e8, Func Offset: 0x1e8
	// Func End, Address: 0x4af1f8, Func Offset: 0x1f8
}

// HandleOutOfMemory__Q218@unnamed@iWad_cpp@18MemoryManagerMultiFUiUi
// Start address: 0x4af200
void HandleOutOfMemory(uint32 size, uint32 options)
{
	int8 optional[256];
	// Line 448, Address: 0x4af200, Func Offset: 0
	// Line 454, Address: 0x4af208, Func Offset: 0x8
	// Line 448, Address: 0x4af20c, Func Offset: 0xc
	// Line 454, Address: 0x4af214, Func Offset: 0x14
	// Line 456, Address: 0x4af220, Func Offset: 0x20
	// Line 459, Address: 0x4af234, Func Offset: 0x34
	// Func End, Address: 0x4af244, Func Offset: 0x44
}

// DoGetBlockSize__Q218@unnamed@iWad_cpp@18MemoryManagerMultiCFPv
// Start address: 0x4af250
uint32 MemoryManagerMulti::DoGetBlockSize(void* pointer)
{
	// Line 350, Address: 0x4af250, Func Offset: 0
	// Line 351, Address: 0x4af254, Func Offset: 0x4
	// Line 356, Address: 0x4af264, Func Offset: 0x14
	// Line 358, Address: 0x4af274, Func Offset: 0x24
	// Line 360, Address: 0x4af284, Func Offset: 0x34
	// Line 361, Address: 0x4af294, Func Offset: 0x44
	// Line 363, Address: 0x4af2a4, Func Offset: 0x54
	// Line 354, Address: 0x4af2d4, Func Offset: 0x84
	// Line 363, Address: 0x4af2dc, Func Offset: 0x8c
	// Line 357, Address: 0x4af2e4, Func Offset: 0x94
	// Line 363, Address: 0x4af2ec, Func Offset: 0x9c
	// Line 367, Address: 0x4af2f4, Func Offset: 0xa4
	// Func End, Address: 0x4af300, Func Offset: 0xb0
}

// DoFree__Q218@unnamed@iWad_cpp@18MemoryManagerMultiFPv
// Start address: 0x4af300
void MemoryManagerMulti::DoFree(void* pointer)
{
	// Line 330, Address: 0x4af300, Func Offset: 0
	// Line 332, Address: 0x4af308, Func Offset: 0x8
	// Line 337, Address: 0x4af318, Func Offset: 0x18
	// Line 339, Address: 0x4af328, Func Offset: 0x28
	// Line 341, Address: 0x4af338, Func Offset: 0x38
	// Line 343, Address: 0x4af348, Func Offset: 0x48
	// Line 344, Address: 0x4af358, Func Offset: 0x58
	// Line 346, Address: 0x4af368, Func Offset: 0x68
	// Line 347, Address: 0x4af370, Func Offset: 0x70
	// Line 336, Address: 0x4af378, Func Offset: 0x78
	// Line 347, Address: 0x4af380, Func Offset: 0x80
	// Line 338, Address: 0x4af388, Func Offset: 0x88
	// Line 347, Address: 0x4af390, Func Offset: 0x90
	// Line 340, Address: 0x4af398, Func Offset: 0x98
	// Line 347, Address: 0x4af3a0, Func Offset: 0xa0
	// Line 342, Address: 0x4af3a8, Func Offset: 0xa8
	// Line 347, Address: 0x4af3b0, Func Offset: 0xb0
	// Func End, Address: 0x4af3b8, Func Offset: 0xb8
}

// DoReallocate__Q218@unnamed@iWad_cpp@18MemoryManagerMultiFPvUiUi
// Start address: 0x4af3c0
void* MemoryManagerMulti::DoReallocate(void* pointer, uint32 size, uint32 options)
{
	// Line 308, Address: 0x4af3c0, Func Offset: 0
	// Line 310, Address: 0x4af3c8, Func Offset: 0x8
	// Line 311, Address: 0x4af3fc, Func Offset: 0x3c
	// Line 312, Address: 0x4af404, Func Offset: 0x44
	// Line 313, Address: 0x4af448, Func Offset: 0x88
	// Line 314, Address: 0x4af450, Func Offset: 0x90
	// Line 315, Address: 0x4af494, Func Offset: 0xd4
	// Line 316, Address: 0x4af49c, Func Offset: 0xdc
	// Line 317, Address: 0x4af4e0, Func Offset: 0x120
	// Line 322, Address: 0x4af4e8, Func Offset: 0x128
	// Line 323, Address: 0x4af524, Func Offset: 0x164
	// Line 326, Address: 0x4af534, Func Offset: 0x174
	// Line 327, Address: 0x4af53c, Func Offset: 0x17c
	// Func End, Address: 0x4af548, Func Offset: 0x188
}

// DoAllocate__Q218@unnamed@iWad_cpp@18MemoryManagerMultiFUiUi
// Start address: 0x4af550
void* MemoryManagerMulti::DoAllocate(uint32 size, uint32 options)
{
	void* test;
	void* test;
	void* test;
	void* test;
	void* raw;
	int8 buffer[128];
	// Line 209, Address: 0x4af550, Func Offset: 0
	// Line 211, Address: 0x4af56c, Func Offset: 0x1c
	// Line 213, Address: 0x4af584, Func Offset: 0x34
	// Line 214, Address: 0x4af588, Func Offset: 0x38
	// Line 219, Address: 0x4af590, Func Offset: 0x40
	// Line 234, Address: 0x4af5a0, Func Offset: 0x50
	// Line 252, Address: 0x4af5b0, Func Offset: 0x60
	// Line 270, Address: 0x4af5c0, Func Offset: 0x70
	// Line 272, Address: 0x4af5d0, Func Offset: 0x80
	// Line 273, Address: 0x4af5e0, Func Offset: 0x90
	// Line 274, Address: 0x4af5e8, Func Offset: 0x98
	// Line 288, Address: 0x4af5f0, Func Offset: 0xa0
	// Line 291, Address: 0x4af640, Func Offset: 0xf0
	// Line 300, Address: 0x4af67c, Func Offset: 0x12c
	// Line 301, Address: 0x4af6c0, Func Offset: 0x170
	// Line 304, Address: 0x4af6d4, Func Offset: 0x184
	// Line 221, Address: 0x4af6dc, Func Offset: 0x18c
	// Line 304, Address: 0x4af6e0, Func Offset: 0x190
	// Line 223, Address: 0x4af6f0, Func Offset: 0x1a0
	// Line 236, Address: 0x4af6f8, Func Offset: 0x1a8
	// Line 304, Address: 0x4af6fc, Func Offset: 0x1ac
	// Line 238, Address: 0x4af70c, Func Offset: 0x1bc
	// Line 254, Address: 0x4af714, Func Offset: 0x1c4
	// Line 304, Address: 0x4af718, Func Offset: 0x1c8
	// Line 256, Address: 0x4af728, Func Offset: 0x1d8
	// Line 291, Address: 0x4af730, Func Offset: 0x1e0
	// Line 300, Address: 0x4af738, Func Offset: 0x1e8
	// Line 305, Address: 0x4af740, Func Offset: 0x1f0
	// Func End, Address: 0x4af758, Func Offset: 0x208
}

// Init__Q218@unnamed@iWad_cpp@18MemoryManagerMultiFPvUiUiUiUiUiUiUib
// Start address: 0x4af760
void MemoryManagerMulti::Init(void* start, uint32 size, uint32 dmaBufferSize, uint32 resourceArenaSize, uint32 byte4Count, uint32 byte8Count, uint32 byte32Count, uint32 byte48Count, uint8 debugging)
{
	uint8* startByte;
	// Line 154, Address: 0x4af760, Func Offset: 0
	// Line 156, Address: 0x4af79c, Func Offset: 0x3c
	// Line 154, Address: 0x4af7a4, Func Offset: 0x44
	// Line 156, Address: 0x4af7a8, Func Offset: 0x48
	// Line 167, Address: 0x4af7b0, Func Offset: 0x50
	// Line 172, Address: 0x4af7bc, Func Offset: 0x5c
	// Line 167, Address: 0x4af7c0, Func Offset: 0x60
	// Line 178, Address: 0x4af7c4, Func Offset: 0x64
	// Line 168, Address: 0x4af7c8, Func Offset: 0x68
	// Line 178, Address: 0x4af7cc, Func Offset: 0x6c
	// Line 169, Address: 0x4af7d0, Func Offset: 0x70
	// Line 178, Address: 0x4af7d4, Func Offset: 0x74
	// Line 169, Address: 0x4af7d8, Func Offset: 0x78
	// Line 172, Address: 0x4af7dc, Func Offset: 0x7c
	// Line 173, Address: 0x4af7e8, Func Offset: 0x88
	// Line 174, Address: 0x4af7ec, Func Offset: 0x8c
	// Line 175, Address: 0x4af7f8, Func Offset: 0x98
	// Line 178, Address: 0x4af7fc, Func Offset: 0x9c
	// Line 175, Address: 0x4af800, Func Offset: 0xa0
	// Line 178, Address: 0x4af804, Func Offset: 0xa4
	// Line 181, Address: 0x4af814, Func Offset: 0xb4
	// Line 184, Address: 0x4af838, Func Offset: 0xd8
	// Line 187, Address: 0x4af85c, Func Offset: 0xfc
	// Line 191, Address: 0x4af880, Func Offset: 0x120
	// Line 197, Address: 0x4af888, Func Offset: 0x128
	// Line 191, Address: 0x4af898, Func Offset: 0x138
	// Line 194, Address: 0x4af8a0, Func Offset: 0x140
	// Line 197, Address: 0x4af8a4, Func Offset: 0x144
	// Line 206, Address: 0x4af8ac, Func Offset: 0x14c
	// Func End, Address: 0x4af8d8, Func Offset: 0x178
}

