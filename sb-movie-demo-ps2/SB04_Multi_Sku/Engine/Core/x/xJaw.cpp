



float32 xJaw_EvalData(void* data, float32 time);
void* xJaw_FindData(uint32 soundID);

// xJaw_EvalData__FPvf
// Start address: 0x4134e0
float32 xJaw_EvalData(void* data, float32 time)
{
	float32 lerp;
	int32 idx;
	int32 numdata;
	uint8* jawdata;
	// Line 40, Address: 0x4134e0, Func Offset: 0
	// Line 67, Address: 0x4134e4, Func Offset: 0x4
	// Line 40, Address: 0x4134e8, Func Offset: 0x8
	// Line 67, Address: 0x4134ec, Func Offset: 0xc
	// Line 40, Address: 0x4134f0, Func Offset: 0x10
	// Line 44, Address: 0x413508, Func Offset: 0x28
	// Line 67, Address: 0x41350c, Func Offset: 0x2c
	// Line 68, Address: 0x413510, Func Offset: 0x30
	// Line 69, Address: 0x413520, Func Offset: 0x40
	// Line 70, Address: 0x413528, Func Offset: 0x48
	// Line 73, Address: 0x413530, Func Offset: 0x50
	// Line 79, Address: 0x413540, Func Offset: 0x60
	// Line 71, Address: 0x4135dc, Func Offset: 0xfc
	// Line 74, Address: 0x4135e8, Func Offset: 0x108
	// Line 80, Address: 0x4135ec, Func Offset: 0x10c
	// Func End, Address: 0x413608, Func Offset: 0x128
}

// xJaw_FindData__FUi
// Start address: 0x413610
void* xJaw_FindData(uint32 soundID)
{
	int32 i;
	int32 numJawTables;
	uint32 j;
	void* data;
	uint32 jawcount;
	xJawDataTable* tbl;
	void* rawdata;
	// Line 17, Address: 0x413610, Func Offset: 0
	// Line 19, Address: 0x413614, Func Offset: 0x4
	// Line 17, Address: 0x413618, Func Offset: 0x8
	// Line 19, Address: 0x413628, Func Offset: 0x18
	// Line 21, Address: 0x413638, Func Offset: 0x28
	// Line 22, Address: 0x413644, Func Offset: 0x34
	// Line 23, Address: 0x413658, Func Offset: 0x48
	// Line 24, Address: 0x41365c, Func Offset: 0x4c
	// Line 28, Address: 0x413660, Func Offset: 0x50
	// Line 25, Address: 0x413664, Func Offset: 0x54
	// Line 28, Address: 0x413668, Func Offset: 0x58
	// Line 25, Address: 0x41366c, Func Offset: 0x5c
	// Line 28, Address: 0x413674, Func Offset: 0x64
	// Line 29, Address: 0x413680, Func Offset: 0x70
	// Line 30, Address: 0x41368c, Func Offset: 0x7c
	// Line 32, Address: 0x4136a4, Func Offset: 0x94
	// Line 33, Address: 0x4136b8, Func Offset: 0xa8
	// Line 34, Address: 0x4136c8, Func Offset: 0xb8
	// Line 35, Address: 0x4136d0, Func Offset: 0xc0
	// Line 36, Address: 0x4136d4, Func Offset: 0xc4
	// Func End, Address: 0x4136ec, Func Offset: 0xdc
}

