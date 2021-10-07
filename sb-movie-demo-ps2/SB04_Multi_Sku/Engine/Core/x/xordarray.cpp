



void XOrdSort(st_XORDEREDARRAY* array, int32(*test)(void*, void*));
int32 XOrdLookup(st_XORDEREDARRAY* array, void* key, int32(*test)(void*, void*));
int32 XOrdFind(st_XORDEREDARRAY* array, void* key, int32(*test)(void*, void*));
void XOrdCopy(st_XORDEREDARRAY* tgt, st_XORDEREDARRAY* src);
void* XOrdRemove(st_XORDEREDARRAY* array, void* elt, int32 index);
void XOrdInsert(st_XORDEREDARRAY* array, void* elt, int32(*compare)(void*, void*));
void XOrdAppend(st_XORDEREDARRAY* array, void* elt);
void XOrdDone(st_XORDEREDARRAY* array, int32 wasTempAlloc);
void XOrdReset(st_XORDEREDARRAY* array);
void XOrdInit(st_XORDEREDARRAY* array, int32 size, int32 tempAlloc);

// XOrdSort__FP16st_XORDEREDARRAYPFPvPv_i
// Start address: 0x404c50
void XOrdSort(st_XORDEREDARRAY* array, int32(*test)(void*, void*))
{
	void** list;
	int32 num;
	int32 i;
	int32 j;
	int32 h;
	void* v;
	// Line 484, Address: 0x404c50, Func Offset: 0
	// Line 495, Address: 0x404c74, Func Offset: 0x24
	// Line 484, Address: 0x404c78, Func Offset: 0x28
	// Line 487, Address: 0x404c80, Func Offset: 0x30
	// Line 486, Address: 0x404c84, Func Offset: 0x34
	// Line 497, Address: 0x404c88, Func Offset: 0x38
	// Line 499, Address: 0x404cb0, Func Offset: 0x60
	// Line 501, Address: 0x404cbc, Func Offset: 0x6c
	// Line 503, Address: 0x404cd4, Func Offset: 0x84
	// Line 506, Address: 0x404cf0, Func Offset: 0xa0
	// Line 505, Address: 0x404cf8, Func Offset: 0xa8
	// Line 506, Address: 0x404cfc, Func Offset: 0xac
	// Line 511, Address: 0x404d00, Func Offset: 0xb0
	// Line 513, Address: 0x404d48, Func Offset: 0xf8
	// Line 515, Address: 0x404d50, Func Offset: 0x100
	// Line 513, Address: 0x404d54, Func Offset: 0x104
	// Line 515, Address: 0x404d58, Func Offset: 0x108
	// Line 517, Address: 0x404d68, Func Offset: 0x118
	// Line 520, Address: 0x404d78, Func Offset: 0x128
	// Func End, Address: 0x404da8, Func Offset: 0x158
}

// XOrdLookup__FP16st_XORDEREDARRAYPCvPFPCvPv_i
// Start address: 0x404db0
int32 XOrdLookup(st_XORDEREDARRAY* array, void* key, int32(*test)(void*, void*))
{
	int32 da_idx;
	int32 k0;
	int32 k1;
	int32 k;
	int32 v;
	// Line 362, Address: 0x404db0, Func Offset: 0
	// Line 364, Address: 0x404dc0, Func Offset: 0x10
	// Line 362, Address: 0x404dc4, Func Offset: 0x14
	// Line 368, Address: 0x404de4, Func Offset: 0x34
	// Line 370, Address: 0x404de8, Func Offset: 0x38
	// Line 386, Address: 0x404df0, Func Offset: 0x40
	// Line 372, Address: 0x404e08, Func Offset: 0x58
	// Line 386, Address: 0x404e0c, Func Offset: 0x5c
	// Line 373, Address: 0x404e10, Func Offset: 0x60
	// Line 386, Address: 0x404e14, Func Offset: 0x64
	// Line 378, Address: 0x404e2c, Func Offset: 0x7c
	// Line 386, Address: 0x404e34, Func Offset: 0x84
	// Line 387, Address: 0x404e60, Func Offset: 0xb0
	// Func End, Address: 0x404e88, Func Offset: 0xd8
}

// XOrdFind__FP16st_XORDEREDARRAYPCvPFPCvPv_i
// Start address: 0x404e90
int32 XOrdFind(st_XORDEREDARRAY* array, void* key, int32(*test)(void*, void*))
{
	int32 da_idx;
	int32 i;
	int32 rc;
	// Line 324, Address: 0x404e90, Func Offset: 0
	// Line 326, Address: 0x404eb8, Func Offset: 0x28
	// Line 324, Address: 0x404ebc, Func Offset: 0x2c
	// Line 331, Address: 0x404ec0, Func Offset: 0x30
	// Line 332, Address: 0x404ed4, Func Offset: 0x44
	// Line 333, Address: 0x404edc, Func Offset: 0x4c
	// Line 334, Address: 0x404ef0, Func Offset: 0x60
	// Line 337, Address: 0x404ef8, Func Offset: 0x68
	// Line 344, Address: 0x404f00, Func Offset: 0x70
	// Line 341, Address: 0x404f30, Func Offset: 0xa0
	// Line 346, Address: 0x404f34, Func Offset: 0xa4
	// Line 347, Address: 0x404f38, Func Offset: 0xa8
	// Func End, Address: 0x404f5c, Func Offset: 0xcc
}

// XOrdCopy__FP16st_XORDEREDARRAYPC16st_XORDEREDARRAY
// Start address: 0x404f60
void XOrdCopy(st_XORDEREDARRAY* tgt, st_XORDEREDARRAY* src)
{
	int32 i;
	// Line 308, Address: 0x404f60, Func Offset: 0
	// Line 309, Address: 0x404fa0, Func Offset: 0x40
	// Line 312, Address: 0x404fa4, Func Offset: 0x44
	// Func End, Address: 0x404fac, Func Offset: 0x4c
}

// XOrdRemove__FP16st_XORDEREDARRAYPvi
// Start address: 0x404fb0
void* XOrdRemove(st_XORDEREDARRAY* array, void* elt, int32 index)
{
	int32 i;
	// Line 257, Address: 0x404fb0, Func Offset: 0
	// Line 267, Address: 0x404fb8, Func Offset: 0x8
	// Line 269, Address: 0x404fd0, Func Offset: 0x20
	// Line 285, Address: 0x404fe0, Func Offset: 0x30
	// Line 288, Address: 0x404fe8, Func Offset: 0x38
	// Line 289, Address: 0x404ff4, Func Offset: 0x44
	// Line 291, Address: 0x40500c, Func Offset: 0x5c
	// Line 289, Address: 0x405010, Func Offset: 0x60
	// Line 290, Address: 0x405014, Func Offset: 0x64
	// Line 291, Address: 0x40501c, Func Offset: 0x6c
	// Line 262, Address: 0x40504c, Func Offset: 0x9c
	// Line 261, Address: 0x405054, Func Offset: 0xa4
	// Line 291, Address: 0x40505c, Func Offset: 0xac
	// Line 274, Address: 0x405068, Func Offset: 0xb8
	// Line 291, Address: 0x40506c, Func Offset: 0xbc
	// Line 278, Address: 0x405088, Func Offset: 0xd8
	// Line 291, Address: 0x405090, Func Offset: 0xe0
	// Line 285, Address: 0x4050a8, Func Offset: 0xf8
	// Line 294, Address: 0x4050b0, Func Offset: 0x100
	// Line 295, Address: 0x4050b4, Func Offset: 0x104
	// Func End, Address: 0x4050bc, Func Offset: 0x10c
}

// XOrdInsert__FP16st_XORDEREDARRAYPvPFPvPv_i
// Start address: 0x4050c0
void XOrdInsert(st_XORDEREDARRAY* array, void* elt, int32(*compare)(void*, void*))
{
	int32 i;
	// Line 165, Address: 0x4050c0, Func Offset: 0
	// Line 172, Address: 0x4050e4, Func Offset: 0x24
	// Line 177, Address: 0x4050f8, Func Offset: 0x38
	// Line 178, Address: 0x405100, Func Offset: 0x40
	// Line 187, Address: 0x405110, Func Offset: 0x50
	// Line 188, Address: 0x405114, Func Offset: 0x54
	// Line 180, Address: 0x405140, Func Offset: 0x80
	// Line 188, Address: 0x405144, Func Offset: 0x84
	// Line 181, Address: 0x405148, Func Offset: 0x88
	// Line 188, Address: 0x405150, Func Offset: 0x90
	// Func End, Address: 0x405194, Func Offset: 0xd4
}

// XOrdAppend__FP16st_XORDEREDARRAYPv
// Start address: 0x4051a0
void XOrdAppend(st_XORDEREDARRAY* array, void* elt)
{
	// Line 137, Address: 0x4051a0, Func Offset: 0
	// Line 149, Address: 0x4051b4, Func Offset: 0x14
	// Line 152, Address: 0x4051c8, Func Offset: 0x28
	// Func End, Address: 0x4051d0, Func Offset: 0x30
}

// XOrdDone__FP16st_XORDEREDARRAYi
// Start address: 0x4051d0
void XOrdDone(st_XORDEREDARRAY* array, int32 wasTempAlloc)
{
	// Line 103, Address: 0x4051d0, Func Offset: 0
	// Line 108, Address: 0x4051dc, Func Offset: 0xc
	// Line 109, Address: 0x4051e8, Func Offset: 0x18
	// Line 119, Address: 0x4051f8, Func Offset: 0x28
	// Line 120, Address: 0x4051fc, Func Offset: 0x2c
	// Line 121, Address: 0x405200, Func Offset: 0x30
	// Line 122, Address: 0x405204, Func Offset: 0x34
	// Line 125, Address: 0x405208, Func Offset: 0x38
	// Func End, Address: 0x405218, Func Offset: 0x48
}

// XOrdReset__FP16st_XORDEREDARRAY
// Start address: 0x405220
void XOrdReset(st_XORDEREDARRAY* array)
{
	// Line 100, Address: 0x405220, Func Offset: 0
	// Func End, Address: 0x405228, Func Offset: 0x8
}

// XOrdInit__FP16st_XORDEREDARRAYii
// Start address: 0x405230
void XOrdInit(st_XORDEREDARRAY* array, int32 size, int32 tempAlloc)
{
	// Line 63, Address: 0x405230, Func Offset: 0
	// Line 70, Address: 0x405240, Func Offset: 0x10
	// Line 76, Address: 0x405254, Func Offset: 0x24
	// Line 77, Address: 0x40525c, Func Offset: 0x2c
	// Line 78, Address: 0x405264, Func Offset: 0x34
	// Line 80, Address: 0x40526c, Func Offset: 0x3c
	// Line 85, Address: 0x405280, Func Offset: 0x50
	// Line 83, Address: 0x40528c, Func Offset: 0x5c
	// Line 85, Address: 0x405290, Func Offset: 0x60
	// Line 84, Address: 0x405294, Func Offset: 0x64
	// Line 85, Address: 0x405298, Func Offset: 0x68
	// Line 86, Address: 0x4052b8, Func Offset: 0x88
	// Line 87, Address: 0x4052c4, Func Offset: 0x94
	// Line 90, Address: 0x4052d8, Func Offset: 0xa8
	// Func End, Address: 0x4052ec, Func Offset: 0xbc
}

