



void* RemoveDebugBlock(void* memory, uint32* size);
void* SetupDebugBlock(void* memory, uint32 size, int8* file, int8* function, int32 line);
void* DoReallocate(void* pointer, uint32 size, uint32 options);
void HandleOutOfMemory();
void DoInit(void* start, uint32 size, uint8 debugging);
uint32 GetBlockSize(void* pointer);
void* Reallocate(void* pointer, uint32 size, uint32 options);
void Free(void* pointer);
void* Allocate(uint32 size, uint32 options);

// RemoveDebugBlock__14xMemoryManagerFPvPUi
// Start address: 0x40b620
void* xMemoryManager::RemoveDebugBlock(void* memory, uint32* size)
{
	DebugAllocationHeader* header;
	// Line 296, Address: 0x40b620, Func Offset: 0
	// Line 309, Address: 0x40b628, Func Offset: 0x8
	// Line 310, Address: 0x40b630, Func Offset: 0x10
	// Line 313, Address: 0x40b63c, Func Offset: 0x1c
	// Line 314, Address: 0x40b644, Func Offset: 0x24
	// Line 347, Address: 0x40b64c, Func Offset: 0x2c
	// Line 348, Address: 0x40b654, Func Offset: 0x34
	// Line 351, Address: 0x40b664, Func Offset: 0x44
	// Line 352, Address: 0x40b678, Func Offset: 0x58
	// Func End, Address: 0x40b680, Func Offset: 0x60
}

// SetupDebugBlock__14xMemoryManagerFPvUiPCcPCci
// Start address: 0x40b680
void* xMemoryManager::SetupDebugBlock(void* memory, uint32 size, int8* file, int8* function, int32 line)
{
	DebugAllocationHeader* header;
	DebugAllocationTrailer* trailer;
	int32 i;
	int32 i;
	// Line 265, Address: 0x40b680, Func Offset: 0
	// Line 262, Address: 0x40b684, Func Offset: 0x4
	// Line 266, Address: 0x40b688, Func Offset: 0x8
	// Line 262, Address: 0x40b68c, Func Offset: 0xc
	// Line 267, Address: 0x40b690, Func Offset: 0x10
	// Line 268, Address: 0x40b694, Func Offset: 0x14
	// Line 271, Address: 0x40b698, Func Offset: 0x18
	// Line 272, Address: 0x40b6a0, Func Offset: 0x20
	// Line 273, Address: 0x40b6a4, Func Offset: 0x24
	// Line 274, Address: 0x40b6ac, Func Offset: 0x2c
	// Line 275, Address: 0x40b6b4, Func Offset: 0x34
	// Line 276, Address: 0x40b6b8, Func Offset: 0x38
	// Line 279, Address: 0x40b6bc, Func Offset: 0x3c
	// Line 278, Address: 0x40b6c0, Func Offset: 0x40
	// Line 279, Address: 0x40b6c8, Func Offset: 0x48
	// Line 281, Address: 0x40b6e8, Func Offset: 0x68
	// Line 280, Address: 0x40b6ec, Func Offset: 0x6c
	// Line 281, Address: 0x40b6f0, Func Offset: 0x70
	// Line 289, Address: 0x40b710, Func Offset: 0x90
	// Func End, Address: 0x40b718, Func Offset: 0x98
}

// DoReallocate__14xMemoryManagerFPvUiUi
// Start address: 0x40b720
void* xMemoryManager::DoReallocate(void* pointer, uint32 size, uint32 options)
{
	uint32 copySize;
	void* newBlock;
	// Line 237, Address: 0x40b720, Func Offset: 0
	// Line 239, Address: 0x40b748, Func Offset: 0x28
	// Line 240, Address: 0x40b75c, Func Offset: 0x3c
	// Line 241, Address: 0x40b768, Func Offset: 0x48
	// Line 244, Address: 0x40b76c, Func Offset: 0x4c
	// Line 245, Address: 0x40b788, Func Offset: 0x68
	// Line 246, Address: 0x40b790, Func Offset: 0x70
	// Line 249, Address: 0x40b798, Func Offset: 0x78
	// Line 252, Address: 0x40b89c, Func Offset: 0x17c
	// Line 253, Address: 0x40b8b0, Func Offset: 0x190
	// Line 254, Address: 0x40b8b4, Func Offset: 0x194
	// Func End, Address: 0x40b8d4, Func Offset: 0x1b4
}

// HandleOutOfMemory__14xMemoryManagerFUiUi
// Start address: 0x40b8e0
void xMemoryManager::HandleOutOfMemory()
{
	// Line 234, Address: 0x40b8e0, Func Offset: 0
	// Func End, Address: 0x40b8e8, Func Offset: 0x8
}

// DoInit__14xMemoryManagerFPvUib
// Start address: 0x40b8f0
void xMemoryManager::DoInit(void* start, uint32 size, uint8 debugging)
{
	// Line 216, Address: 0x40b8f0, Func Offset: 0
	// Line 227, Address: 0x40b8f4, Func Offset: 0x4
	// Line 217, Address: 0x40b8f8, Func Offset: 0x8
	// Line 227, Address: 0x40b8fc, Func Offset: 0xc
	// Line 217, Address: 0x40b900, Func Offset: 0x10
	// Line 218, Address: 0x40b904, Func Offset: 0x14
	// Line 227, Address: 0x40b908, Func Offset: 0x18
	// Line 229, Address: 0x40b90c, Func Offset: 0x1c
	// Func End, Address: 0x40b914, Func Offset: 0x24
}

// GetBlockSize__14xMemoryManagerCFPv
// Start address: 0x40b920
uint32 xMemoryManager::GetBlockSize(void* pointer)
{
	// Line 138, Address: 0x40b920, Func Offset: 0
	// Line 141, Address: 0x40b924, Func Offset: 0x4
	// Line 138, Address: 0x40b928, Func Offset: 0x8
	// Line 141, Address: 0x40b930, Func Offset: 0x10
	// Line 143, Address: 0x40b958, Func Offset: 0x38
	// Func End, Address: 0x40b968, Func Offset: 0x48
}

// Reallocate__14xMemoryManagerFPvUiUi
// Start address: 0x40b970
void* xMemoryManager::Reallocate(void* pointer, uint32 size, uint32 options)
{
	void* newBlock;
	// Line 98, Address: 0x40b970, Func Offset: 0
	// Line 100, Address: 0x40b98c, Func Offset: 0x1c
	// Line 109, Address: 0x40b994, Func Offset: 0x24
	// Line 111, Address: 0x40b99c, Func Offset: 0x2c
	// Line 112, Address: 0x40b9a8, Func Offset: 0x38
	// Line 117, Address: 0x40ba04, Func Offset: 0x94
	// Line 118, Address: 0x40ba10, Func Offset: 0xa0
	// Line 122, Address: 0x40ba1c, Func Offset: 0xac
	// Line 121, Address: 0x40ba20, Func Offset: 0xb0
	// Line 122, Address: 0x40ba28, Func Offset: 0xb8
	// Line 121, Address: 0x40ba2c, Func Offset: 0xbc
	// Line 122, Address: 0x40ba30, Func Offset: 0xc0
	// Line 123, Address: 0x40ba44, Func Offset: 0xd4
	// Line 130, Address: 0x40ba4c, Func Offset: 0xdc
	// Line 134, Address: 0x40ba58, Func Offset: 0xe8
	// Line 101, Address: 0x40ba6c, Func Offset: 0xfc
	// Line 134, Address: 0x40ba74, Func Offset: 0x104
	// Line 101, Address: 0x40ba7c, Func Offset: 0x10c
	// Line 134, Address: 0x40ba88, Func Offset: 0x118
	// Line 101, Address: 0x40baac, Func Offset: 0x13c
	// Line 134, Address: 0x40bab0, Func Offset: 0x140
	// Line 101, Address: 0x40bab8, Func Offset: 0x148
	// Line 134, Address: 0x40bac0, Func Offset: 0x150
	// Line 101, Address: 0x40baf0, Func Offset: 0x180
	// Line 134, Address: 0x40baf8, Func Offset: 0x188
	// Line 101, Address: 0x40bb04, Func Offset: 0x194
	// Line 134, Address: 0x40bb20, Func Offset: 0x1b0
	// Line 101, Address: 0x40bb28, Func Offset: 0x1b8
	// Line 134, Address: 0x40bb2c, Func Offset: 0x1bc
	// Line 101, Address: 0x40bb38, Func Offset: 0x1c8
	// Line 134, Address: 0x40bb3c, Func Offset: 0x1cc
	// Line 112, Address: 0x40bb80, Func Offset: 0x210
	// Line 134, Address: 0x40bb84, Func Offset: 0x214
	// Line 113, Address: 0x40bb94, Func Offset: 0x224
	// Line 134, Address: 0x40bb9c, Func Offset: 0x22c
	// Line 125, Address: 0x40bba0, Func Offset: 0x230
	// Line 134, Address: 0x40bba8, Func Offset: 0x238
	// Line 126, Address: 0x40bbb4, Func Offset: 0x244
	// Line 131, Address: 0x40bbbc, Func Offset: 0x24c
	// Line 134, Address: 0x40bbd0, Func Offset: 0x260
	// Line 135, Address: 0x40bbe0, Func Offset: 0x270
	// Func End, Address: 0x40bbf8, Func Offset: 0x288
}

// Free__14xMemoryManagerFPv
// Start address: 0x40bc00
void xMemoryManager::Free(void* pointer)
{
	uint32 size;
	// Line 72, Address: 0x40bc00, Func Offset: 0
	// Line 79, Address: 0x40bc0c, Func Offset: 0xc
	// Line 85, Address: 0x40bc20, Func Offset: 0x20
	// Line 89, Address: 0x40bc2c, Func Offset: 0x2c
	// Line 90, Address: 0x40bc3c, Func Offset: 0x3c
	// Line 94, Address: 0x40bc6c, Func Offset: 0x6c
	// Line 95, Address: 0x40bc7c, Func Offset: 0x7c
	// Func End, Address: 0x40bc8c, Func Offset: 0x8c
}

// Allocate__14xMemoryManagerFUiUi
// Start address: 0x40bc90
void* xMemoryManager::Allocate(uint32 size, uint32 options)
{
	void* memory;
	// Line 33, Address: 0x40bc90, Func Offset: 0
	// Line 40, Address: 0x40bcac, Func Offset: 0x1c
	// Line 41, Address: 0x40bcb4, Func Offset: 0x24
	// Line 45, Address: 0x40bcbc, Func Offset: 0x2c
	// Line 44, Address: 0x40bcc0, Func Offset: 0x30
	// Line 45, Address: 0x40bccc, Func Offset: 0x3c
	// Line 46, Address: 0x40bcdc, Func Offset: 0x4c
	// Line 52, Address: 0x40bce4, Func Offset: 0x54
	// Line 64, Address: 0x40bcf0, Func Offset: 0x60
	// Line 65, Address: 0x40bcfc, Func Offset: 0x6c
	// Line 48, Address: 0x40bd34, Func Offset: 0xa4
	// Line 65, Address: 0x40bd3c, Func Offset: 0xac
	// Line 49, Address: 0x40bd48, Func Offset: 0xb8
	// Line 55, Address: 0x40bd50, Func Offset: 0xc0
	// Line 65, Address: 0x40bd64, Func Offset: 0xd4
	// Line 58, Address: 0x40bd6c, Func Offset: 0xdc
	// Line 65, Address: 0x40bd70, Func Offset: 0xe0
	// Line 59, Address: 0x40bd7c, Func Offset: 0xec
	// Line 65, Address: 0x40bd80, Func Offset: 0xf0
	// Line 59, Address: 0x40bda4, Func Offset: 0x114
	// Line 65, Address: 0x40bdb0, Func Offset: 0x120
	// Line 69, Address: 0x40bdb4, Func Offset: 0x124
	// Func End, Address: 0x40bdcc, Func Offset: 0x13c
}

