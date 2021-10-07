

typedef int8 type[12288];

int8 sneaky_buf[12288];
int8* sb;
int8* sbend;

int32 printf(int8* fmt);

// 
// Start address: 0x1000d0
int32 printf(int8* fmt)
{
	int32 rc;
	int32 nc;
	int32 space;
	int8* vargs;
	int32 nw;
	int8 init;
	// Line 24, Address: 0x1000d0, Func Offset: 0
	// Line 27, Address: 0x1000fc, Func Offset: 0x2c
	// Line 29, Address: 0x100110, Func Offset: 0x40
	// Line 32, Address: 0x100114, Func Offset: 0x44
	// Line 29, Address: 0x10011c, Func Offset: 0x4c
	// Line 32, Address: 0x100124, Func Offset: 0x54
	// Line 33, Address: 0x10012c, Func Offset: 0x5c
	// Line 35, Address: 0x100138, Func Offset: 0x68
	// Line 36, Address: 0x100144, Func Offset: 0x74
	// Line 39, Address: 0x100148, Func Offset: 0x78
	// Line 40, Address: 0x100164, Func Offset: 0x94
	// Line 39, Address: 0x100170, Func Offset: 0xa0
	// Line 40, Address: 0x100174, Func Offset: 0xa4
	// Line 44, Address: 0x10017c, Func Offset: 0xac
	// Line 43, Address: 0x100180, Func Offset: 0xb0
	// Line 47, Address: 0x100184, Func Offset: 0xb4
	// Line 44, Address: 0x100190, Func Offset: 0xc0
	// Line 47, Address: 0x100198, Func Offset: 0xc8
	// Line 50, Address: 0x1001a4, Func Offset: 0xd4
	// Line 52, Address: 0x1001ac, Func Offset: 0xdc
	// Line 50, Address: 0x1001b0, Func Offset: 0xe0
	// Line 53, Address: 0x1001b8, Func Offset: 0xe8
	// Func End, Address: 0x1001c8, Func Offset: 0xf8
}

