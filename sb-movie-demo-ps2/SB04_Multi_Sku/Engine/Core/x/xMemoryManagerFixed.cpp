



uint32 DoGetBlockSize();
void* DoReallocate(void* pointer);
void DoFree(void* pointer);
void* DoAllocate();
void Init(void* start, uint32 elements, uint32 elementSize);

// DoGetBlockSize__19xMemoryManagerFixedCFPv
// Start address: 0x40b550
uint32 xMemoryManagerFixed::DoGetBlockSize()
{
	// Line 95, Address: 0x40b550, Func Offset: 0
	// Func End, Address: 0x40b558, Func Offset: 0x8
}

// DoReallocate__19xMemoryManagerFixedFPvUiUi
// Start address: 0x40b560
void* xMemoryManagerFixed::DoReallocate(void* pointer)
{
	// Line 90, Address: 0x40b560, Func Offset: 0
	// Func End, Address: 0x40b568, Func Offset: 0x8
}

// DoFree__19xMemoryManagerFixedFPv
// Start address: 0x40b570
void xMemoryManagerFixed::DoFree(void* pointer)
{
	FixedHeader* header;
	// Line 76, Address: 0x40b570, Func Offset: 0
	// Line 83, Address: 0x40b578, Func Offset: 0x8
	// Func End, Address: 0x40b580, Func Offset: 0x10
}

// DoAllocate__19xMemoryManagerFixedFUiUi
// Start address: 0x40b580
void* xMemoryManagerFixed::DoAllocate()
{
	// Line 46, Address: 0x40b580, Func Offset: 0
	// Line 51, Address: 0x40b584, Func Offset: 0x4
	// Line 59, Address: 0x40b58c, Func Offset: 0xc
	// Line 67, Address: 0x40b590, Func Offset: 0x10
	// Line 52, Address: 0x40b598, Func Offset: 0x18
	// Line 68, Address: 0x40b59c, Func Offset: 0x1c
	// Func End, Address: 0x40b5a4, Func Offset: 0x24
}

// Init__19xMemoryManagerFixedFPvUiUi
// Start address: 0x40b5b0
void xMemoryManagerFixed::Init(void* start, uint32 elements, uint32 elementSize)
{
	// Line 35, Address: 0x40b5b4, Func Offset: 0x4
	// Line 38, Address: 0x40b5cc, Func Offset: 0x1c
	// Line 39, Address: 0x40b5d0, Func Offset: 0x20
	// Line 42, Address: 0x40b5d4, Func Offset: 0x24
	// Line 43, Address: 0x40b618, Func Offset: 0x68
	// Func End, Address: 0x40b620, Func Offset: 0x70
}

