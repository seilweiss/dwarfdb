typedef struct ReadBuf;


typedef uint8 type[327680];

struct ReadBuf
{
	uint8 data[327680];
	int32 put;
	int32 count;
	int32 size;
};


int32 readBufEndGet(ReadBuf* b, int32 size);
int32 readBufBeginGet(ReadBuf* b, uint8** ptr);
int32 readBufEndPut(ReadBuf* b, int32 size);
int32 readBufBeginPut(ReadBuf* b, uint8** ptr);
void readBufDelete();
void readBufCreate(ReadBuf* b);

// readBufEndGet__FP7ReadBufi
// Start address: 0x261ef0
int32 readBufEndGet(ReadBuf* b, int32 size)
{
	// Line 90, Address: 0x261ef0, Func Offset: 0
	// Line 92, Address: 0x261f08, Func Offset: 0x18
	// Line 94, Address: 0x261f14, Func Offset: 0x24
	// Line 92, Address: 0x261f18, Func Offset: 0x28
	// Line 95, Address: 0x261f24, Func Offset: 0x34
	// Func End, Address: 0x261f2c, Func Offset: 0x3c
}

// readBufBeginGet__FP7ReadBufPPUc
// Start address: 0x261f30
int32 readBufBeginGet(ReadBuf* b, uint8** ptr)
{
	// Line 78, Address: 0x261f30, Func Offset: 0
	// Line 79, Address: 0x261f48, Func Offset: 0x18
	// Line 81, Address: 0x261f80, Func Offset: 0x50
	// Line 82, Address: 0x261f88, Func Offset: 0x58
	// Func End, Address: 0x261f90, Func Offset: 0x60
}

// readBufEndPut__FP7ReadBufi
// Start address: 0x261f90
int32 readBufEndPut(ReadBuf* b, int32 size)
{
	// Line 64, Address: 0x261f90, Func Offset: 0
	// Line 66, Address: 0x261fb8, Func Offset: 0x28
	// Line 69, Address: 0x261fc4, Func Offset: 0x34
	// Line 66, Address: 0x261fc8, Func Offset: 0x38
	// Line 67, Address: 0x261fe0, Func Offset: 0x50
	// Line 70, Address: 0x261ff8, Func Offset: 0x68
	// Func End, Address: 0x262000, Func Offset: 0x70
}

// readBufBeginPut__FP7ReadBufPPUc
// Start address: 0x262000
int32 readBufBeginPut(ReadBuf* b, uint8** ptr)
{
	int32 size;
	// Line 51, Address: 0x262000, Func Offset: 0
	// Line 52, Address: 0x26201c, Func Offset: 0x1c
	// Line 53, Address: 0x262024, Func Offset: 0x24
	// Line 56, Address: 0x262034, Func Offset: 0x34
	// Func End, Address: 0x26203c, Func Offset: 0x3c
}

// readBufDelete__FP7ReadBuf
// Start address: 0x262040
void readBufDelete()
{
	// Line 43, Address: 0x262040, Func Offset: 0
	// Func End, Address: 0x262048, Func Offset: 0x8
}

// readBufCreate__FP7ReadBuf
// Start address: 0x262050
void readBufCreate(ReadBuf* b)
{
	// Line 33, Address: 0x262050, Func Offset: 0
	// Line 34, Address: 0x262068, Func Offset: 0x18
	// Line 35, Address: 0x262074, Func Offset: 0x24
	// Func End, Address: 0x26207c, Func Offset: 0x2c
}

