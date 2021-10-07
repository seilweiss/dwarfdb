typedef struct xMemInfo_tag;
typedef struct xMemArea_tag;



struct xMemInfo_tag
{
	xMemArea_tag system;
	xMemArea_tag stack;
	xMemArea_tag DRAM;
	xMemArea_tag SRAM;
};

struct xMemArea_tag
{
	uint32 addr;
	uint32 size;
	uint32 flags;
};

uint32 StackBase;
uint32 StackSize;
uint32 gPiggyBankSize;
void* sMemPiggyBank;
xMemInfo_tag gMemInfo;
int8 _stack;
int8 _heap_size;
int8 _stack_size;
int8 _end;
int8 _memtop;
int8 __data_start;

void iMemExit();
void iMemInit();

// iMemExit__Fv
// Start address: 0x126100
void iMemExit()
{
	// Line 262, Address: 0x126100, Func Offset: 0
	// Line 267, Address: 0x126108, Func Offset: 0x8
	// Line 268, Address: 0x126114, Func Offset: 0x14
	// Line 269, Address: 0x12611c, Func Offset: 0x1c
	// Func End, Address: 0x126128, Func Offset: 0x28
}

// iMemInit__Fv
// Start address: 0x126130
void iMemInit()
{
	void* p;
	uint32 malloc_max;
	uint32 HeapBase;
	uint32 MemTop;
	uint32 MemBase;
	// Line 82, Address: 0x126130, Func Offset: 0
	// Line 93, Address: 0x126134, Func Offset: 0x4
	// Line 82, Address: 0x126138, Func Offset: 0x8
	// Line 93, Address: 0x12613c, Func Offset: 0xc
	// Line 82, Address: 0x126140, Func Offset: 0x10
	// Line 93, Address: 0x126144, Func Offset: 0x14
	// Line 82, Address: 0x126148, Func Offset: 0x18
	// Line 93, Address: 0x12614c, Func Offset: 0x1c
	// Line 94, Address: 0x126158, Func Offset: 0x28
	// Line 95, Address: 0x12616c, Func Offset: 0x3c
	// Line 96, Address: 0x126180, Func Offset: 0x50
	// Line 97, Address: 0x126194, Func Offset: 0x64
	// Line 98, Address: 0x1261a8, Func Offset: 0x78
	// Line 103, Address: 0x1261bc, Func Offset: 0x8c
	// Line 104, Address: 0x1261c4, Func Offset: 0x94
	// Line 106, Address: 0x1261d0, Func Offset: 0xa0
	// Line 108, Address: 0x1261dc, Func Offset: 0xac
	// Line 110, Address: 0x1261fc, Func Offset: 0xcc
	// Line 108, Address: 0x126200, Func Offset: 0xd0
	// Line 110, Address: 0x126204, Func Offset: 0xd4
	// Line 124, Address: 0x126210, Func Offset: 0xe0
	// Line 127, Address: 0x126220, Func Offset: 0xf0
	// Line 133, Address: 0x126230, Func Offset: 0x100
	// Line 134, Address: 0x126238, Func Offset: 0x108
	// Line 135, Address: 0x126240, Func Offset: 0x110
	// Line 136, Address: 0x126248, Func Offset: 0x118
	// Line 138, Address: 0x126250, Func Offset: 0x120
	// Line 139, Address: 0x126258, Func Offset: 0x128
	// Line 168, Address: 0x126268, Func Offset: 0x138
	// Line 170, Address: 0x12628c, Func Offset: 0x15c
	// Line 181, Address: 0x1262c0, Func Offset: 0x190
	// Line 186, Address: 0x1262c4, Func Offset: 0x194
	// Line 181, Address: 0x1262c8, Func Offset: 0x198
	// Line 182, Address: 0x1262cc, Func Offset: 0x19c
	// Line 183, Address: 0x1262d8, Func Offset: 0x1a8
	// Line 186, Address: 0x1262e4, Func Offset: 0x1b4
	// Line 187, Address: 0x1262f0, Func Offset: 0x1c0
	// Line 192, Address: 0x1262f8, Func Offset: 0x1c8
	// Line 188, Address: 0x126300, Func Offset: 0x1d0
	// Line 191, Address: 0x12630c, Func Offset: 0x1dc
	// Line 192, Address: 0x126314, Func Offset: 0x1e4
	// Line 193, Address: 0x12631c, Func Offset: 0x1ec
	// Line 197, Address: 0x126324, Func Offset: 0x1f4
	// Line 198, Address: 0x12632c, Func Offset: 0x1fc
	// Line 199, Address: 0x126338, Func Offset: 0x208
	// Line 200, Address: 0x126344, Func Offset: 0x214
	// Func End, Address: 0x12635c, Func Offset: 0x22c
}

