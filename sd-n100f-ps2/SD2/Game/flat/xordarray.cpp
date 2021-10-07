typedef struct st_XORDEREDARRAY;

typedef int32(*type_0)(void*, void*);
typedef int32(*type_1)(void*, void*);


struct st_XORDEREDARRAY
{
	void** list;
	int32 cnt;
	int32 max;
	int32 warnlvl;
};

uint32 gActiveHeap;

void XOrdSort(st_XORDEREDARRAY* array, int32(*test)(void*, void*));
int32 XOrdLookup(st_XORDEREDARRAY* array, void* key, int32(*test)(void*, void*));
void XOrdInsert(st_XORDEREDARRAY* array, void* elt, int32(*compare)(void*, void*));
void XOrdAppend(st_XORDEREDARRAY* array, void* elt);
void XOrdDone(st_XORDEREDARRAY* array);
void XOrdInit(st_XORDEREDARRAY* array, int32 max);

// XOrdSort__FP16st_XORDEREDARRAYPFPCvPv_i
// Start address: 0x185e30
void XOrdSort(st_XORDEREDARRAY* array, int32(*test)(void*, void*))
{
	void* v;
	int32 h;
	int32 j;
	int32 i;
	int32 num;
	void** list;
	// Line 401, Address: 0x185e30, Func Offset: 0
	// Line 403, Address: 0x185e5c, Func Offset: 0x2c
	// Line 404, Address: 0x185e60, Func Offset: 0x30
	// Line 414, Address: 0x185e6c, Func Offset: 0x3c
	// Line 416, Address: 0x185e98, Func Offset: 0x68
	// Line 418, Address: 0x185ea4, Func Offset: 0x74
	// Line 420, Address: 0x185ec0, Func Offset: 0x90
	// Line 422, Address: 0x185ee8, Func Offset: 0xb8
	// Line 423, Address: 0x185eec, Func Offset: 0xbc
	// Line 422, Address: 0x185ef0, Func Offset: 0xc0
	// Line 425, Address: 0x185ef8, Func Offset: 0xc8
	// Line 427, Address: 0x185f00, Func Offset: 0xd0
	// Line 428, Address: 0x185f04, Func Offset: 0xd4
	// Line 429, Address: 0x185f08, Func Offset: 0xd8
	// Line 427, Address: 0x185f0c, Func Offset: 0xdc
	// Line 429, Address: 0x185f10, Func Offset: 0xe0
	// Line 431, Address: 0x185f18, Func Offset: 0xe8
	// Line 433, Address: 0x185f38, Func Offset: 0x108
	// Line 435, Address: 0x185f48, Func Offset: 0x118
	// Line 433, Address: 0x185f4c, Func Offset: 0x11c
	// Line 435, Address: 0x185f54, Func Offset: 0x124
	// Line 437, Address: 0x185f68, Func Offset: 0x138
	// Line 440, Address: 0x185f78, Func Offset: 0x148
	// Func End, Address: 0x185fa8, Func Offset: 0x178
}

// XOrdLookup__FP16st_XORDEREDARRAYPCvPFPCvPv_i
// Start address: 0x185fb0
int32 XOrdLookup(st_XORDEREDARRAY* array, void* key, int32(*test)(void*, void*))
{
	int32 v;
	int32 k;
	int32 k1;
	int32 k0;
	int32 da_idx;
	// Line 283, Address: 0x185fb0, Func Offset: 0
	// Line 289, Address: 0x185fd4, Func Offset: 0x24
	// Line 285, Address: 0x185fe4, Func Offset: 0x34
	// Line 291, Address: 0x185fe8, Func Offset: 0x38
	// Line 293, Address: 0x185ff0, Func Offset: 0x40
	// Line 294, Address: 0x186004, Func Offset: 0x54
	// Line 296, Address: 0x18601c, Func Offset: 0x6c
	// Line 299, Address: 0x186024, Func Offset: 0x74
	// Line 302, Address: 0x18602c, Func Offset: 0x7c
	// Line 303, Address: 0x18603c, Func Offset: 0x8c
	// Line 305, Address: 0x186040, Func Offset: 0x90
	// Line 307, Address: 0x186050, Func Offset: 0xa0
	// Line 308, Address: 0x186054, Func Offset: 0xa4
	// Func End, Address: 0x18607c, Func Offset: 0xcc
}

// XOrdInsert__FP16st_XORDEREDARRAYPvPFPvPv_i
// Start address: 0x186080
void XOrdInsert(st_XORDEREDARRAY* array, void* elt, int32(*compare)(void*, void*))
{
	int32 i;
	// Line 129, Address: 0x186080, Func Offset: 0
	// Line 136, Address: 0x1860a0, Func Offset: 0x20
	// Line 141, Address: 0x1860b8, Func Offset: 0x38
	// Line 142, Address: 0x1860c0, Func Offset: 0x40
	// Line 143, Address: 0x1860d0, Func Offset: 0x50
	// Line 144, Address: 0x1860ec, Func Offset: 0x6c
	// Line 145, Address: 0x1860f8, Func Offset: 0x78
	// Line 147, Address: 0x186100, Func Offset: 0x80
	// Line 149, Address: 0x186104, Func Offset: 0x84
	// Line 147, Address: 0x186108, Func Offset: 0x88
	// Line 149, Address: 0x186114, Func Offset: 0x94
	// Line 151, Address: 0x186120, Func Offset: 0xa0
	// Line 152, Address: 0x186128, Func Offset: 0xa8
	// Func End, Address: 0x186148, Func Offset: 0xc8
}

// XOrdAppend__FP16st_XORDEREDARRAYPv
// Start address: 0x186150
void XOrdAppend(st_XORDEREDARRAY* array, void* elt)
{
	// Line 103, Address: 0x186150, Func Offset: 0
	// Line 115, Address: 0x186164, Func Offset: 0x14
	// Line 118, Address: 0x186178, Func Offset: 0x28
	// Func End, Address: 0x186180, Func Offset: 0x30
}

// XOrdDone__FP16st_XORDEREDARRAY
// Start address: 0x186180
void XOrdDone(st_XORDEREDARRAY* array)
{
	// Line 87, Address: 0x186180, Func Offset: 0
	// Line 88, Address: 0x186184, Func Offset: 0x4
	// Line 89, Address: 0x186188, Func Offset: 0x8
	// Line 93, Address: 0x18618c, Func Offset: 0xc
	// Func End, Address: 0x186194, Func Offset: 0x14
}

// XOrdInit__FP16st_XORDEREDARRAYi
// Start address: 0x1861a0
void XOrdInit(st_XORDEREDARRAY* array, int32 max)
{
	// Line 56, Address: 0x1861a0, Func Offset: 0
	// Line 68, Address: 0x1861b4, Func Offset: 0x14
	// Line 72, Address: 0x1861c4, Func Offset: 0x24
	// Line 68, Address: 0x1861c8, Func Offset: 0x28
	// Line 72, Address: 0x1861cc, Func Offset: 0x2c
	// Line 70, Address: 0x1861d8, Func Offset: 0x38
	// Line 71, Address: 0x1861dc, Func Offset: 0x3c
	// Line 72, Address: 0x1861e0, Func Offset: 0x40
	// Line 73, Address: 0x1861f0, Func Offset: 0x50
	// Line 75, Address: 0x186214, Func Offset: 0x74
	// Func End, Address: 0x186228, Func Offset: 0x88
}

