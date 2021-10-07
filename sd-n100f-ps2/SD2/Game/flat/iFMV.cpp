typedef struct RwResEntry;
typedef struct RwLLLink;

typedef void(*type)(RwResEntry*);


struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};


uint32 iFMVPlay(int8* filename, uint32 buttons, float32 time);

// iFMVPlay__FPcUif
// Start address: 0x270460
uint32 iFMVPlay(int8* filename, uint32 buttons, float32 time)
{
	RwResEntry* repEntryOwner;
	RwResEntry* repEntry;
	// Line 10, Address: 0x270460, Func Offset: 0
	// Line 14, Address: 0x270480, Func Offset: 0x20
	// Line 15, Address: 0x270488, Func Offset: 0x28
	// Line 25, Address: 0x270490, Func Offset: 0x30
	// Line 34, Address: 0x270498, Func Offset: 0x38
	// Line 36, Address: 0x2704bc, Func Offset: 0x5c
	// Line 37, Address: 0x2704c4, Func Offset: 0x64
	// Line 38, Address: 0x2704d0, Func Offset: 0x70
	// Line 44, Address: 0x2704d8, Func Offset: 0x78
	// Line 49, Address: 0x2704f0, Func Offset: 0x90
	// Line 52, Address: 0x2704f8, Func Offset: 0x98
	// Line 53, Address: 0x2704fc, Func Offset: 0x9c
	// Func End, Address: 0x270518, Func Offset: 0xb8
}

