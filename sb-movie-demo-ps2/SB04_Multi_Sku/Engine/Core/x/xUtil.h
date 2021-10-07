



void quicksort(void* base, uint32 num, uint32 width);
void quicksort(void* base, uint32 num, uint32 width);
uint8* binary_find(uint8* first, uint8* last, xParticleBatchSystem& value);
system_bucket* binary_find(system_bucket* first, system_bucket* last, system_bucket& value);
void quicksort(void* base, uint32 num, uint32 width);
void isort(void* base, uint32 num, uint32 width, sort_float_functor cmp);
void quicksort(void* base, uint32 num, uint32 width, sort_istr_functor cmp);
void quicksort(void* base, uint32 num, uint32 width, sort_float_functor cmp);
void quicksort(void* base, uint32 num, uint32 width, sort_int_functor cmp);
smoke_type* binary_find(smoke_type* first, smoke_type* last, RwTexture&* value);
xIniValue* binary_find(xIniValue* first, xIniValue* last, int8&* value);

// quicksort<Q220@unnamed@zWadUI_cpp@14ElementCompare>__FPvUiUiQ220@unnamed@zWadUI_cpp@14ElementCompare_v
// Start address: 0x2bd750
void quicksort(void* base, uint32 num, uint32 width)
{
	uint32 thresh;
	uint8* stack[40];
	uint8** sp;
	uint8* pivot;
	uint8* tail;
	uint8* v;
	uint8* next;
	uint8* _b0;
	uint8* _b1;
	uint8* _endb0;
	uint32 _temp;
	uint32 half;
	uint8* _b0;
	uint8* _b1;
	uint8* _endb0;
	uint32 _temp;
	uint8* left;
	uint8* right;
	uint8* _b0;
	uint8* _b1;
	uint8* _endb0;
	uint32 _temp;
	uint8* _b0;
	uint8* _b1;
	uint8* _endb0;
	uint32 _temp;
	uint8* _b0;
	uint8* _b1;
	uint8* _endb0;
	uint32 _temp;
	uint8* _b0;
	uint8* _b1;
	uint8* _endb0;
	uint32 _temp;
	uint8* _b0;
	uint8* _b1;
	uint8* _endb0;
	uint32 _temp;
	// Line 516, Address: 0x2bd750, Func Offset: 0
	// Line 520, Address: 0x2bd764, Func Offset: 0x14
	// Line 516, Address: 0x2bd768, Func Offset: 0x18
	// Line 518, Address: 0x2bd778, Func Offset: 0x28
	// Line 516, Address: 0x2bd77c, Func Offset: 0x2c
	// Line 518, Address: 0x2bd780, Func Offset: 0x30
	// Line 516, Address: 0x2bd784, Func Offset: 0x34
	// Line 518, Address: 0x2bd788, Func Offset: 0x38
	// Line 521, Address: 0x2bd78c, Func Offset: 0x3c
	// Line 516, Address: 0x2bd794, Func Offset: 0x44
	// Line 521, Address: 0x2bd798, Func Offset: 0x48
	// Line 525, Address: 0x2bd79c, Func Offset: 0x4c
	// Line 521, Address: 0x2bd7a0, Func Offset: 0x50
	// Line 525, Address: 0x2bd7a4, Func Offset: 0x54
	// Line 554, Address: 0x2bd7b0, Func Offset: 0x60
	// Line 555, Address: 0x2bd7b4, Func Offset: 0x64
	// Line 556, Address: 0x2bd7c4, Func Offset: 0x74
	// Line 549, Address: 0x2bd818, Func Offset: 0xc8
	// Line 556, Address: 0x2bd820, Func Offset: 0xd0
	// Line 537, Address: 0x2bd834, Func Offset: 0xe4
	// Line 556, Address: 0x2bd838, Func Offset: 0xe8
	// Line 537, Address: 0x2bd840, Func Offset: 0xf0
	// Line 556, Address: 0x2bd844, Func Offset: 0xf4
	// Line 537, Address: 0x2bd84c, Func Offset: 0xfc
	// Line 556, Address: 0x2bd854, Func Offset: 0x104
	// Line 538, Address: 0x2bd890, Func Offset: 0x140
	// Line 556, Address: 0x2bd89c, Func Offset: 0x14c
	// Line 537, Address: 0x2bd8b0, Func Offset: 0x160
	// Line 556, Address: 0x2bd8b4, Func Offset: 0x164
	// Line 557, Address: 0x2bd8cc, Func Offset: 0x17c
	// Line 558, Address: 0x2bd8d0, Func Offset: 0x180
	// Line 559, Address: 0x2bd908, Func Offset: 0x1b8
	// Line 560, Address: 0x2bd930, Func Offset: 0x1e0
	// Line 561, Address: 0x2bd968, Func Offset: 0x218
	// Line 569, Address: 0x2bd98c, Func Offset: 0x23c
	// Line 571, Address: 0x2bd9cc, Func Offset: 0x27c
	// Line 573, Address: 0x2bda08, Func Offset: 0x2b8
	// Line 574, Address: 0x2bda10, Func Offset: 0x2c0
	// Line 575, Address: 0x2bda3c, Func Offset: 0x2ec
	// Line 558, Address: 0x2bda58, Func Offset: 0x308
	// Line 575, Address: 0x2bda5c, Func Offset: 0x30c
	// Line 560, Address: 0x2bda84, Func Offset: 0x334
	// Line 575, Address: 0x2bda88, Func Offset: 0x338
	// Line 562, Address: 0x2bdaac, Func Offset: 0x35c
	// Line 575, Address: 0x2bdab0, Func Offset: 0x360
	// Line 562, Address: 0x2bdab8, Func Offset: 0x368
	// Line 575, Address: 0x2bdabc, Func Offset: 0x36c
	// Line 562, Address: 0x2bdac4, Func Offset: 0x374
	// Line 575, Address: 0x2bdacc, Func Offset: 0x37c
	// Line 563, Address: 0x2bdad4, Func Offset: 0x384
	// Line 575, Address: 0x2bdad8, Func Offset: 0x388
	// Line 562, Address: 0x2bdb18, Func Offset: 0x3c8
	// Line 575, Address: 0x2bdb1c, Func Offset: 0x3cc
	// Line 569, Address: 0x2bdb44, Func Offset: 0x3f4
	// Line 575, Address: 0x2bdb48, Func Offset: 0x3f8
	// Line 571, Address: 0x2bdb70, Func Offset: 0x420
	// Line 575, Address: 0x2bdb74, Func Offset: 0x424
	// Line 576, Address: 0x2bdb88, Func Offset: 0x438
	// Line 579, Address: 0x2bdbb0, Func Offset: 0x460
	// Line 581, Address: 0x2bdbc4, Func Offset: 0x474
	// Line 583, Address: 0x2bdbcc, Func Offset: 0x47c
	// Line 586, Address: 0x2bdbd4, Func Offset: 0x484
	// Line 587, Address: 0x2bdbdc, Func Offset: 0x48c
	// Line 590, Address: 0x2bdbe0, Func Offset: 0x490
	// Line 591, Address: 0x2bdbe8, Func Offset: 0x498
	// Func End, Address: 0x2bdc18, Func Offset: 0x4c8
}

// quicksort<Q219@unnamed@xWad4_cpp@15compare_buckets>__FPvUiUiQ219@unnamed@xWad4_cpp@15compare_buckets_v
// Start address: 0x3c6090
void quicksort(void* base, uint32 num, uint32 width)
{
	uint32 thresh;
	uint8* stack[40];
	uint8** sp;
	uint8* pivot;
	uint8* tail;
	uint8* v;
	uint8* next;
	uint8* _b0;
	uint8* _b1;
	uint32 _temp;
	uint32 half;
	uint8* _b0;
	uint8* _b1;
	uint8* _endb0;
	uint32 _temp;
	uint8* left;
	uint8* right;
	uint8* _b0;
	uint8* _b1;
	uint8* _endb0;
	uint32 _temp;
	uint8* _b0;
	uint8* _b1;
	uint32 _temp;
	uint8* _b0;
	uint8* _b1;
	uint8* _endb0;
	uint32 _temp;
	uint8* _b0;
	uint8* _b1;
	uint8* _endb0;
	uint32 _temp;
	uint8* _b0;
	uint8* _b1;
	uint32 _temp;
	// Line 516, Address: 0x3c6090, Func Offset: 0
	// Line 518, Address: 0x3c6094, Func Offset: 0x4
	// Line 516, Address: 0x3c609c, Func Offset: 0xc
	// Line 521, Address: 0x3c60a0, Func Offset: 0x10
	// Line 516, Address: 0x3c60a4, Func Offset: 0x14
	// Line 520, Address: 0x3c60ac, Func Offset: 0x1c
	// Line 521, Address: 0x3c60b0, Func Offset: 0x20
	// Line 571, Address: 0x3c60b4, Func Offset: 0x24
	// Line 556, Address: 0x3c60b8, Func Offset: 0x28
	// Line 571, Address: 0x3c60bc, Func Offset: 0x2c
	// Line 521, Address: 0x3c60c0, Func Offset: 0x30
	// Line 525, Address: 0x3c60c4, Func Offset: 0x34
	// Line 555, Address: 0x3c60d0, Func Offset: 0x40
	// Line 556, Address: 0x3c60e0, Func Offset: 0x50
	// Line 528, Address: 0x3c6118, Func Offset: 0x88
	// Line 529, Address: 0x3c611c, Func Offset: 0x8c
	// Line 537, Address: 0x3c6124, Func Offset: 0x94
	// Line 556, Address: 0x3c6128, Func Offset: 0x98
	// Line 537, Address: 0x3c6140, Func Offset: 0xb0
	// Line 556, Address: 0x3c6154, Func Offset: 0xc4
	// Line 538, Address: 0x3c618c, Func Offset: 0xfc
	// Line 556, Address: 0x3c6190, Func Offset: 0x100
	// Line 549, Address: 0x3c61ac, Func Offset: 0x11c
	// Line 556, Address: 0x3c61b8, Func Offset: 0x128
	// Line 538, Address: 0x3c61c8, Func Offset: 0x138
	// Line 537, Address: 0x3c61d4, Func Offset: 0x144
	// Line 556, Address: 0x3c61d8, Func Offset: 0x148
	// Line 537, Address: 0x3c61e8, Func Offset: 0x158
	// Line 556, Address: 0x3c61f0, Func Offset: 0x160
	// Line 537, Address: 0x3c6200, Func Offset: 0x170
	// Line 556, Address: 0x3c6208, Func Offset: 0x178
	// Line 557, Address: 0x3c621c, Func Offset: 0x18c
	// Line 558, Address: 0x3c6228, Func Offset: 0x198
	// Line 559, Address: 0x3c6258, Func Offset: 0x1c8
	// Line 560, Address: 0x3c6290, Func Offset: 0x200
	// Line 561, Address: 0x3c62c0, Func Offset: 0x230
	// Line 569, Address: 0x3c62f4, Func Offset: 0x264
	// Line 571, Address: 0x3c6330, Func Offset: 0x2a0
	// Line 573, Address: 0x3c6368, Func Offset: 0x2d8
	// Line 574, Address: 0x3c6370, Func Offset: 0x2e0
	// Line 575, Address: 0x3c639c, Func Offset: 0x30c
	// Line 558, Address: 0x3c63a4, Func Offset: 0x314
	// Line 575, Address: 0x3c63a8, Func Offset: 0x318
	// Line 558, Address: 0x3c63b8, Func Offset: 0x328
	// Line 575, Address: 0x3c63c0, Func Offset: 0x330
	// Line 558, Address: 0x3c63d0, Func Offset: 0x340
	// Line 575, Address: 0x3c63d8, Func Offset: 0x348
	// Line 560, Address: 0x3c63f8, Func Offset: 0x368
	// Line 575, Address: 0x3c6400, Func Offset: 0x370
	// Line 560, Address: 0x3c6410, Func Offset: 0x380
	// Line 575, Address: 0x3c6418, Func Offset: 0x388
	// Line 562, Address: 0x3c6438, Func Offset: 0x3a8
	// Line 575, Address: 0x3c644c, Func Offset: 0x3bc
	// Line 563, Address: 0x3c6458, Func Offset: 0x3c8
	// Line 575, Address: 0x3c645c, Func Offset: 0x3cc
	// Line 563, Address: 0x3c6464, Func Offset: 0x3d4
	// Line 575, Address: 0x3c6468, Func Offset: 0x3d8
	// Line 562, Address: 0x3c648c, Func Offset: 0x3fc
	// Line 575, Address: 0x3c6490, Func Offset: 0x400
	// Line 562, Address: 0x3c64a0, Func Offset: 0x410
	// Line 575, Address: 0x3c64a8, Func Offset: 0x418
	// Line 562, Address: 0x3c64b8, Func Offset: 0x428
	// Line 575, Address: 0x3c64c0, Func Offset: 0x430
	// Line 569, Address: 0x3c64e0, Func Offset: 0x450
	// Line 575, Address: 0x3c64e8, Func Offset: 0x458
	// Line 569, Address: 0x3c64f8, Func Offset: 0x468
	// Line 575, Address: 0x3c6500, Func Offset: 0x470
	// Line 571, Address: 0x3c6520, Func Offset: 0x490
	// Line 575, Address: 0x3c6528, Func Offset: 0x498
	// Line 571, Address: 0x3c6538, Func Offset: 0x4a8
	// Line 575, Address: 0x3c6540, Func Offset: 0x4b0
	// Line 576, Address: 0x3c6550, Func Offset: 0x4c0
	// Line 579, Address: 0x3c6580, Func Offset: 0x4f0
	// Line 581, Address: 0x3c6594, Func Offset: 0x504
	// Line 583, Address: 0x3c659c, Func Offset: 0x50c
	// Line 586, Address: 0x3c65a8, Func Offset: 0x518
	// Line 587, Address: 0x3c65b0, Func Offset: 0x520
	// Line 588, Address: 0x3c65b4, Func Offset: 0x524
	// Line 590, Address: 0x3c65b8, Func Offset: 0x528
	// Line 591, Address: 0x3c65c0, Func Offset: 0x530
	// Func End, Address: 0x3c65d4, Func Offset: 0x544
}

// binary_find<PCUc,20xParticleBatchSystem,Q219@unnamed@xWad4_cpp@29compare_group_systems_functor>__FPCUcPCUcRC20xParticleBatchSystemQ219@unnamed@xWad4_cpp@29compare_group_systems_functor_PCUc
// Start address: 0x3c65e0
uint8* binary_find(uint8* first, uint8* last, xParticleBatchSystem& value)
{
	uint8* notfound;
	uint8* mid;
	// Line 379, Address: 0x3c65e0, Func Offset: 0
	// Line 381, Address: 0x3c65e4, Func Offset: 0x4
	// Line 379, Address: 0x3c65e8, Func Offset: 0x8
	// Line 380, Address: 0x3c65ec, Func Offset: 0xc
	// Line 381, Address: 0x3c65f0, Func Offset: 0x10
	// Line 392, Address: 0x3c65f8, Func Offset: 0x18
	// Line 384, Address: 0x3c65fc, Func Offset: 0x1c
	// Line 381, Address: 0x3c6600, Func Offset: 0x20
	// Line 384, Address: 0x3c6604, Func Offset: 0x24
	// Line 392, Address: 0x3c6608, Func Offset: 0x28
	// Line 384, Address: 0x3c661c, Func Offset: 0x3c
	// Line 392, Address: 0x3c6620, Func Offset: 0x40
	// Line 383, Address: 0x3c662c, Func Offset: 0x4c
	// Line 384, Address: 0x3c6644, Func Offset: 0x64
	// Line 385, Address: 0x3c6660, Func Offset: 0x80
	// Line 387, Address: 0x3c6668, Func Offset: 0x88
	// Line 391, Address: 0x3c6670, Func Offset: 0x90
	// Line 392, Address: 0x3c6680, Func Offset: 0xa0
	// Line 384, Address: 0x3c6694, Func Offset: 0xb4
	// Line 392, Address: 0x3c66a0, Func Offset: 0xc0
	// Line 384, Address: 0x3c66ac, Func Offset: 0xcc
	// Line 392, Address: 0x3c66b8, Func Offset: 0xd8
	// Line 384, Address: 0x3c66c4, Func Offset: 0xe4
	// Line 392, Address: 0x3c66d0, Func Offset: 0xf0
	// Line 384, Address: 0x3c66dc, Func Offset: 0xfc
	// Line 392, Address: 0x3c66e8, Func Offset: 0x108
	// Line 384, Address: 0x3c66fc, Func Offset: 0x11c
	// Line 392, Address: 0x3c6708, Func Offset: 0x128
	// Line 384, Address: 0x3c6714, Func Offset: 0x134
	// Line 392, Address: 0x3c6720, Func Offset: 0x140
	// Line 384, Address: 0x3c672c, Func Offset: 0x14c
	// Line 392, Address: 0x3c6738, Func Offset: 0x158
	// Line 384, Address: 0x3c6744, Func Offset: 0x164
	// Line 392, Address: 0x3c6750, Func Offset: 0x170
	// Line 386, Address: 0x3c6760, Func Offset: 0x180
	// Line 390, Address: 0x3c6768, Func Offset: 0x188
	// Line 393, Address: 0x3c676c, Func Offset: 0x18c
	// Func End, Address: 0x3c677c, Func Offset: 0x19c
}

// binary_find<PQ219@unnamed@xWad4_cpp@13system_bucket,Q219@unnamed@xWad4_cpp@13system_bucket,Q219@unnamed@xWad4_cpp@15compare_buckets>__FPQ219@unnamed@xWad4_cpp@13system_bucketPQ219@unnamed@xWad4_cpp@13system_bucketRCQ219@unnamed@xWad4_cpp@13system_bucketQ219@unnamed@xWad4_cpp@15compare_buckets_PQ219@unnamed@xWad4_cpp@13system_bucket
// Start address: 0x3c6780
system_bucket* binary_find(system_bucket* first, system_bucket* last, system_bucket& value)
{
	system_bucket* notfound;
	system_bucket* mid;
	// Line 381, Address: 0x3c6780, Func Offset: 0
	// Line 384, Address: 0x3c6790, Func Offset: 0x10
	// Line 392, Address: 0x3c6794, Func Offset: 0x14
	// Line 384, Address: 0x3c6798, Func Offset: 0x18
	// Line 392, Address: 0x3c679c, Func Offset: 0x1c
	// Line 383, Address: 0x3c67a0, Func Offset: 0x20
	// Line 392, Address: 0x3c67a4, Func Offset: 0x24
	// Line 383, Address: 0x3c67a8, Func Offset: 0x28
	// Line 384, Address: 0x3c67ec, Func Offset: 0x6c
	// Line 385, Address: 0x3c6810, Func Offset: 0x90
	// Line 387, Address: 0x3c6818, Func Offset: 0x98
	// Line 391, Address: 0x3c6820, Func Offset: 0xa0
	// Line 392, Address: 0x3c6830, Func Offset: 0xb0
	// Line 384, Address: 0x3c6844, Func Offset: 0xc4
	// Line 392, Address: 0x3c6850, Func Offset: 0xd0
	// Line 384, Address: 0x3c685c, Func Offset: 0xdc
	// Line 392, Address: 0x3c6868, Func Offset: 0xe8
	// Line 386, Address: 0x3c6878, Func Offset: 0xf8
	// Line 390, Address: 0x3c6880, Func Offset: 0x100
	// Line 393, Address: 0x3c6884, Func Offset: 0x104
	// Func End, Address: 0x3c688c, Func Offset: 0x10c
}

// quicksort<Q219@unnamed@xWad3_cpp@14CmpAlphaBucket>__FPvUiUiQ219@unnamed@xWad3_cpp@14CmpAlphaBucket_v
// Start address: 0x4136f0
void quicksort(void* base, uint32 num, uint32 width)
{
	uint32 thresh;
	uint8* stack[40];
	uint8** sp;
	uint8* pivot;
	uint8* tail;
	uint8* v;
	uint8* next;
	uint8* _b0;
	uint8* _b1;
	uint8* _endb0;
	uint32 _temp;
	uint32 half;
	uint8* _b0;
	uint8* _b1;
	uint8* _endb0;
	uint32 _temp;
	uint8* left;
	uint8* right;
	uint8* _b0;
	uint8* _b1;
	uint8* _endb0;
	uint32 _temp;
	uint8* _b0;
	uint8* _b1;
	uint8* _endb0;
	uint32 _temp;
	uint8* _b0;
	uint8* _b1;
	uint8* _endb0;
	uint32 _temp;
	uint8* _b0;
	uint8* _b1;
	uint8* _endb0;
	uint32 _temp;
	uint8* _b0;
	uint8* _b1;
	uint8* _endb0;
	uint32 _temp;
	// Line 516, Address: 0x4136f0, Func Offset: 0
	// Line 518, Address: 0x4136f4, Func Offset: 0x4
	// Line 516, Address: 0x4136fc, Func Offset: 0xc
	// Line 521, Address: 0x413700, Func Offset: 0x10
	// Line 520, Address: 0x413704, Func Offset: 0x14
	// Line 521, Address: 0x413708, Func Offset: 0x18
	// Line 571, Address: 0x41370c, Func Offset: 0x1c
	// Line 556, Address: 0x413714, Func Offset: 0x24
	// Line 521, Address: 0x413718, Func Offset: 0x28
	// Line 525, Address: 0x41371c, Func Offset: 0x2c
	// Line 555, Address: 0x413728, Func Offset: 0x38
	// Line 556, Address: 0x413738, Func Offset: 0x48
	// Line 528, Address: 0x413770, Func Offset: 0x80
	// Line 529, Address: 0x413774, Func Offset: 0x84
	// Line 537, Address: 0x41377c, Func Offset: 0x8c
	// Line 556, Address: 0x413780, Func Offset: 0x90
	// Line 538, Address: 0x4137cc, Func Offset: 0xdc
	// Line 556, Address: 0x4137d0, Func Offset: 0xe0
	// Line 549, Address: 0x4137ec, Func Offset: 0xfc
	// Line 556, Address: 0x4137f8, Func Offset: 0x108
	// Line 538, Address: 0x413808, Func Offset: 0x118
	// Line 537, Address: 0x413814, Func Offset: 0x124
	// Line 556, Address: 0x413818, Func Offset: 0x128
	// Line 537, Address: 0x413820, Func Offset: 0x130
	// Line 556, Address: 0x413824, Func Offset: 0x134
	// Line 537, Address: 0x41382c, Func Offset: 0x13c
	// Line 556, Address: 0x413830, Func Offset: 0x140
	// Line 537, Address: 0x413838, Func Offset: 0x148
	// Line 556, Address: 0x413850, Func Offset: 0x160
	// Line 557, Address: 0x413854, Func Offset: 0x164
	// Line 558, Address: 0x413858, Func Offset: 0x168
	// Line 559, Address: 0x413878, Func Offset: 0x188
	// Line 560, Address: 0x4138a8, Func Offset: 0x1b8
	// Line 561, Address: 0x4138c8, Func Offset: 0x1d8
	// Line 569, Address: 0x4138ec, Func Offset: 0x1fc
	// Line 571, Address: 0x413910, Func Offset: 0x220
	// Line 573, Address: 0x41393c, Func Offset: 0x24c
	// Line 574, Address: 0x413948, Func Offset: 0x258
	// Line 575, Address: 0x413974, Func Offset: 0x284
	// Line 558, Address: 0x41397c, Func Offset: 0x28c
	// Line 575, Address: 0x413980, Func Offset: 0x290
	// Line 558, Address: 0x413988, Func Offset: 0x298
	// Line 575, Address: 0x41398c, Func Offset: 0x29c
	// Line 558, Address: 0x413994, Func Offset: 0x2a4
	// Line 575, Address: 0x413998, Func Offset: 0x2a8
	// Line 558, Address: 0x4139a0, Func Offset: 0x2b0
	// Line 575, Address: 0x4139b8, Func Offset: 0x2c8
	// Line 560, Address: 0x4139c0, Func Offset: 0x2d0
	// Line 575, Address: 0x4139c4, Func Offset: 0x2d4
	// Line 560, Address: 0x4139cc, Func Offset: 0x2dc
	// Line 575, Address: 0x4139d0, Func Offset: 0x2e0
	// Line 560, Address: 0x4139d8, Func Offset: 0x2e8
	// Line 575, Address: 0x4139f0, Func Offset: 0x300
	// Line 562, Address: 0x413a04, Func Offset: 0x314
	// Line 575, Address: 0x413a08, Func Offset: 0x318
	// Line 563, Address: 0x413a10, Func Offset: 0x320
	// Line 575, Address: 0x413a14, Func Offset: 0x324
	// Line 563, Address: 0x413a1c, Func Offset: 0x32c
	// Line 575, Address: 0x413a20, Func Offset: 0x330
	// Line 562, Address: 0x413a44, Func Offset: 0x354
	// Line 575, Address: 0x413a48, Func Offset: 0x358
	// Line 562, Address: 0x413a50, Func Offset: 0x360
	// Line 575, Address: 0x413a54, Func Offset: 0x364
	// Line 562, Address: 0x413a5c, Func Offset: 0x36c
	// Line 575, Address: 0x413a60, Func Offset: 0x370
	// Line 562, Address: 0x413a68, Func Offset: 0x378
	// Line 575, Address: 0x413a80, Func Offset: 0x390
	// Line 569, Address: 0x413a88, Func Offset: 0x398
	// Line 575, Address: 0x413a8c, Func Offset: 0x39c
	// Line 569, Address: 0x413a94, Func Offset: 0x3a4
	// Line 575, Address: 0x413a98, Func Offset: 0x3a8
	// Line 569, Address: 0x413aa0, Func Offset: 0x3b0
	// Line 575, Address: 0x413ab8, Func Offset: 0x3c8
	// Line 571, Address: 0x413ac0, Func Offset: 0x3d0
	// Line 575, Address: 0x413ac4, Func Offset: 0x3d4
	// Line 571, Address: 0x413acc, Func Offset: 0x3dc
	// Line 575, Address: 0x413ad0, Func Offset: 0x3e0
	// Line 571, Address: 0x413ad8, Func Offset: 0x3e8
	// Line 576, Address: 0x413af0, Func Offset: 0x400
	// Line 579, Address: 0x413b20, Func Offset: 0x430
	// Line 581, Address: 0x413b34, Func Offset: 0x444
	// Line 583, Address: 0x413b3c, Func Offset: 0x44c
	// Line 586, Address: 0x413b48, Func Offset: 0x458
	// Line 587, Address: 0x413b50, Func Offset: 0x460
	// Line 588, Address: 0x413b54, Func Offset: 0x464
	// Line 590, Address: 0x413b58, Func Offset: 0x468
	// Line 591, Address: 0x413b60, Func Offset: 0x470
	// Func End, Address: 0x413b6c, Func Offset: 0x47c
}

// isort<Q219@unnamed@xWad5_cpp@18sort_float_functor>__FPvUiUiQ219@unnamed@xWad5_cpp@18sort_float_functor_v
// Start address: 0x468ab0
void isort(void* base, uint32 num, uint32 width, sort_float_functor cmp)
{
	sort_float_functor cmp'66;
	uint8* v;
	uint8* next;
	uint8* end;
	uint8* _b0;
	uint8* _b1;
	uint8* _endb0;
	uint32 _temp;
	// Line 675, Address: 0x468ab0, Func Offset: 0
	// Line 679, Address: 0x468ab4, Func Offset: 0x4
	// Line 678, Address: 0x468ab8, Func Offset: 0x8
	// Line 679, Address: 0x468ac0, Func Offset: 0x10
	// Line 678, Address: 0x468ac4, Func Offset: 0x14
	// Line 679, Address: 0x468ac8, Func Offset: 0x18
	// Line 687, Address: 0x468ad4, Func Offset: 0x24
	// Line 683, Address: 0x468af4, Func Offset: 0x44
	// Line 687, Address: 0x468afc, Func Offset: 0x4c
	// Line 683, Address: 0x468b04, Func Offset: 0x54
	// Line 687, Address: 0x468b08, Func Offset: 0x58
	// Line 688, Address: 0x468b2c, Func Offset: 0x7c
	// Line 689, Address: 0x468b38, Func Offset: 0x88
	// Line 687, Address: 0x468b60, Func Offset: 0xb0
	// Line 689, Address: 0x468b64, Func Offset: 0xb4
	// Line 688, Address: 0x468b74, Func Offset: 0xc4
	// Line 689, Address: 0x468b88, Func Offset: 0xd8
	// Func End, Address: 0x468b90, Func Offset: 0xe0
}

// quicksort<Q219@unnamed@xWad5_cpp@17sort_istr_functor>__FPvUiUiQ219@unnamed@xWad5_cpp@17sort_istr_functor_v
// Start address: 0x468b90
void quicksort(void* base, uint32 num, uint32 width, sort_istr_functor cmp)
{
	sort_istr_functor cmp'186;
	uint32 thresh;
	uint8* stack[40];
	uint8** sp;
	uint8* pivot;
	uint8* tail;
	uint8* v;
	uint8* next;
	uint8* _b0;
	uint8* _b1;
	uint8* _endb0;
	uint32 _temp;
	uint32 half;
	uint8* _b0;
	uint8* _b1;
	uint8* _endb0;
	uint32 _temp;
	uint8* left;
	uint8* right;
	uint8* _b0;
	uint8* _b1;
	uint8* _endb0;
	uint32 _temp;
	uint8* _b0;
	uint8* _b1;
	uint8* _endb0;
	uint32 _temp;
	uint8* _b0;
	uint8* _b1;
	uint8* _endb0;
	uint32 _temp;
	uint8* _b0;
	uint8* _b1;
	uint8* _endb0;
	uint32 _temp;
	uint8* _b0;
	uint8* _b1;
	uint8* _endb0;
	uint32 _temp;
	// Line 516, Address: 0x468b90, Func Offset: 0
	// Line 521, Address: 0x468bb0, Func Offset: 0x20
	// Line 516, Address: 0x468bb4, Func Offset: 0x24
	// Line 521, Address: 0x468bb8, Func Offset: 0x28
	// Line 518, Address: 0x468bbc, Func Offset: 0x2c
	// Line 516, Address: 0x468bc0, Func Offset: 0x30
	// Line 518, Address: 0x468bc4, Func Offset: 0x34
	// Line 516, Address: 0x468bc8, Func Offset: 0x38
	// Line 518, Address: 0x468bcc, Func Offset: 0x3c
	// Line 516, Address: 0x468bd0, Func Offset: 0x40
	// Line 520, Address: 0x468bd4, Func Offset: 0x44
	// Line 516, Address: 0x468bd8, Func Offset: 0x48
	// Line 520, Address: 0x468bdc, Func Offset: 0x4c
	// Line 521, Address: 0x468be0, Func Offset: 0x50
	// Line 525, Address: 0x468be4, Func Offset: 0x54
	// Line 521, Address: 0x468be8, Func Offset: 0x58
	// Line 525, Address: 0x468bec, Func Offset: 0x5c
	// Line 555, Address: 0x468bf8, Func Offset: 0x68
	// Line 556, Address: 0x468c08, Func Offset: 0x78
	// Line 528, Address: 0x468c40, Func Offset: 0xb0
	// Line 529, Address: 0x468c44, Func Offset: 0xb4
	// Line 556, Address: 0x468c50, Func Offset: 0xc0
	// Line 533, Address: 0x468c78, Func Offset: 0xe8
	// Line 556, Address: 0x468c7c, Func Offset: 0xec
	// Line 533, Address: 0x468c84, Func Offset: 0xf4
	// Line 556, Address: 0x468c88, Func Offset: 0xf8
	// Line 538, Address: 0x468cac, Func Offset: 0x11c
	// Line 556, Address: 0x468cb0, Func Offset: 0x120
	// Line 549, Address: 0x468cd8, Func Offset: 0x148
	// Line 556, Address: 0x468ce0, Func Offset: 0x150
	// Line 538, Address: 0x468d14, Func Offset: 0x184
	// Line 557, Address: 0x468d28, Func Offset: 0x198
	// Line 556, Address: 0x468d2c, Func Offset: 0x19c
	// Line 557, Address: 0x468d30, Func Offset: 0x1a0
	// Line 558, Address: 0x468d40, Func Offset: 0x1b0
	// Line 559, Address: 0x468d58, Func Offset: 0x1c8
	// Line 560, Address: 0x468d88, Func Offset: 0x1f8
	// Line 559, Address: 0x468d8c, Func Offset: 0x1fc
	// Line 560, Address: 0x468d98, Func Offset: 0x208
	// Line 561, Address: 0x468da8, Func Offset: 0x218
	// Line 569, Address: 0x468dd0, Func Offset: 0x240
	// Line 571, Address: 0x468df4, Func Offset: 0x264
	// Line 573, Address: 0x468e1c, Func Offset: 0x28c
	// Line 574, Address: 0x468e24, Func Offset: 0x294
	// Line 575, Address: 0x468e4c, Func Offset: 0x2bc
	// Line 561, Address: 0x468e54, Func Offset: 0x2c4
	// Line 575, Address: 0x468e58, Func Offset: 0x2c8
	// Line 563, Address: 0x468e6c, Func Offset: 0x2dc
	// Line 575, Address: 0x468e70, Func Offset: 0x2e0
	// Line 576, Address: 0x468e9c, Func Offset: 0x30c
	// Line 579, Address: 0x468ed0, Func Offset: 0x340
	// Line 581, Address: 0x468ee4, Func Offset: 0x354
	// Line 583, Address: 0x468ef0, Func Offset: 0x360
	// Line 586, Address: 0x468ef8, Func Offset: 0x368
	// Line 587, Address: 0x468f04, Func Offset: 0x374
	// Line 589, Address: 0x468f08, Func Offset: 0x378
	// Line 590, Address: 0x468f10, Func Offset: 0x380
	// Line 591, Address: 0x468f18, Func Offset: 0x388
	// Func End, Address: 0x468f48, Func Offset: 0x3b8
}

// quicksort<Q219@unnamed@xWad5_cpp@18sort_float_functor>__FPvUiUiQ219@unnamed@xWad5_cpp@18sort_float_functor_v
// Start address: 0x468f50
void quicksort(void* base, uint32 num, uint32 width, sort_float_functor cmp)
{
	sort_float_functor cmp'167;
	uint32 thresh;
	uint8* stack[40];
	uint8** sp;
	uint8* pivot;
	uint8* tail;
	uint8* v;
	uint8* next;
	uint8* _b0;
	uint8* _b1;
	uint8* _endb0;
	uint32 _temp;
	uint32 half;
	uint8* _b0;
	uint8* _b1;
	uint8* _endb0;
	uint32 _temp;
	uint8* left;
	uint8* right;
	uint8* _b0;
	uint8* _b1;
	uint8* _endb0;
	uint32 _temp;
	uint8* _b0;
	uint8* _b1;
	uint8* _endb0;
	uint32 _temp;
	uint8* _b0;
	uint8* _b1;
	uint8* _endb0;
	uint32 _temp;
	uint8* _b0;
	uint8* _b1;
	uint8* _endb0;
	uint32 _temp;
	uint8* _b0;
	uint8* _b1;
	uint8* _endb0;
	uint32 _temp;
	// Line 516, Address: 0x468f50, Func Offset: 0
	// Line 518, Address: 0x468f54, Func Offset: 0x4
	// Line 516, Address: 0x468f5c, Func Offset: 0xc
	// Line 521, Address: 0x468f60, Func Offset: 0x10
	// Line 516, Address: 0x468f64, Func Offset: 0x14
	// Line 520, Address: 0x468f68, Func Offset: 0x18
	// Line 521, Address: 0x468f6c, Func Offset: 0x1c
	// Line 571, Address: 0x468f70, Func Offset: 0x20
	// Line 556, Address: 0x468f74, Func Offset: 0x24
	// Line 571, Address: 0x468f78, Func Offset: 0x28
	// Line 521, Address: 0x468f7c, Func Offset: 0x2c
	// Line 525, Address: 0x468f80, Func Offset: 0x30
	// Line 555, Address: 0x468f8c, Func Offset: 0x3c
	// Line 556, Address: 0x468f9c, Func Offset: 0x4c
	// Line 528, Address: 0x468fd0, Func Offset: 0x80
	// Line 529, Address: 0x468fd4, Func Offset: 0x84
	// Line 556, Address: 0x468fe0, Func Offset: 0x90
	// Line 537, Address: 0x468ff4, Func Offset: 0xa4
	// Line 556, Address: 0x468ff8, Func Offset: 0xa8
	// Line 533, Address: 0x469008, Func Offset: 0xb8
	// Line 556, Address: 0x46900c, Func Offset: 0xbc
	// Line 533, Address: 0x469014, Func Offset: 0xc4
	// Line 556, Address: 0x469018, Func Offset: 0xc8
	// Line 538, Address: 0x46903c, Func Offset: 0xec
	// Line 556, Address: 0x469040, Func Offset: 0xf0
	// Line 549, Address: 0x46905c, Func Offset: 0x10c
	// Line 556, Address: 0x469068, Func Offset: 0x118
	// Line 537, Address: 0x469088, Func Offset: 0x138
	// Line 556, Address: 0x46908c, Func Offset: 0x13c
	// Line 538, Address: 0x46909c, Func Offset: 0x14c
	// Line 556, Address: 0x4690b0, Func Offset: 0x160
	// Line 557, Address: 0x4690b4, Func Offset: 0x164
	// Line 558, Address: 0x4690c0, Func Offset: 0x170
	// Line 559, Address: 0x4690dc, Func Offset: 0x18c
	// Line 560, Address: 0x469114, Func Offset: 0x1c4
	// Line 561, Address: 0x469130, Func Offset: 0x1e0
	// Line 569, Address: 0x469160, Func Offset: 0x210
	// Line 571, Address: 0x469184, Func Offset: 0x234
	// Line 573, Address: 0x4691a8, Func Offset: 0x258
	// Line 574, Address: 0x4691b0, Func Offset: 0x260
	// Line 575, Address: 0x4691dc, Func Offset: 0x28c
	// Line 561, Address: 0x4691e4, Func Offset: 0x294
	// Line 575, Address: 0x4691e8, Func Offset: 0x298
	// Line 562, Address: 0x4691ec, Func Offset: 0x29c
	// Line 575, Address: 0x4691f0, Func Offset: 0x2a0
	// Line 563, Address: 0x469204, Func Offset: 0x2b4
	// Line 575, Address: 0x469208, Func Offset: 0x2b8
	// Line 576, Address: 0x469234, Func Offset: 0x2e4
	// Line 579, Address: 0x469268, Func Offset: 0x318
	// Line 581, Address: 0x46927c, Func Offset: 0x32c
	// Line 583, Address: 0x469284, Func Offset: 0x334
	// Line 586, Address: 0x469290, Func Offset: 0x340
	// Line 587, Address: 0x469298, Func Offset: 0x348
	// Line 588, Address: 0x46929c, Func Offset: 0x34c
	// Line 590, Address: 0x4692a0, Func Offset: 0x350
	// Line 591, Address: 0x4692a8, Func Offset: 0x358
	// Func End, Address: 0x4692b8, Func Offset: 0x368
}

// quicksort<Q219@unnamed@xWad5_cpp@16sort_int_functor>__FPvUiUiQ219@unnamed@xWad5_cpp@16sort_int_functor_v
// Start address: 0x4692c0
void quicksort(void* base, uint32 num, uint32 width, sort_int_functor cmp)
{
	sort_int_functor cmp'179;
	uint32 thresh;
	uint8* stack[40];
	uint8** sp;
	uint8* pivot;
	uint8* tail;
	uint8* v;
	uint8* next;
	uint8* _b0;
	uint8* _b1;
	uint8* _endb0;
	uint32 _temp;
	uint32 half;
	uint8* _b0;
	uint8* _b1;
	uint8* _endb0;
	uint32 _temp;
	uint8* left;
	uint8* right;
	uint8* _b0;
	uint8* _b1;
	uint8* _endb0;
	uint32 _temp;
	uint8* _b0;
	uint8* _b1;
	uint8* _endb0;
	uint32 _temp;
	uint8* _b0;
	uint8* _b1;
	uint8* _endb0;
	uint32 _temp;
	uint8* _b0;
	uint8* _b1;
	uint8* _endb0;
	uint32 _temp;
	uint8* _b0;
	uint8* _b1;
	uint8* _endb0;
	uint32 _temp;
	// Line 516, Address: 0x4692c0, Func Offset: 0
	// Line 518, Address: 0x4692c4, Func Offset: 0x4
	// Line 516, Address: 0x4692cc, Func Offset: 0xc
	// Line 521, Address: 0x4692d0, Func Offset: 0x10
	// Line 516, Address: 0x4692d4, Func Offset: 0x14
	// Line 520, Address: 0x4692d8, Func Offset: 0x18
	// Line 521, Address: 0x4692dc, Func Offset: 0x1c
	// Line 571, Address: 0x4692e0, Func Offset: 0x20
	// Line 556, Address: 0x4692e4, Func Offset: 0x24
	// Line 571, Address: 0x4692e8, Func Offset: 0x28
	// Line 521, Address: 0x4692ec, Func Offset: 0x2c
	// Line 525, Address: 0x4692f0, Func Offset: 0x30
	// Line 555, Address: 0x4692fc, Func Offset: 0x3c
	// Line 556, Address: 0x46930c, Func Offset: 0x4c
	// Line 528, Address: 0x469340, Func Offset: 0x80
	// Line 529, Address: 0x469344, Func Offset: 0x84
	// Line 556, Address: 0x469350, Func Offset: 0x90
	// Line 533, Address: 0x469370, Func Offset: 0xb0
	// Line 556, Address: 0x469374, Func Offset: 0xb4
	// Line 533, Address: 0x46937c, Func Offset: 0xbc
	// Line 556, Address: 0x469380, Func Offset: 0xc0
	// Line 538, Address: 0x4693a4, Func Offset: 0xe4
	// Line 556, Address: 0x4693a8, Func Offset: 0xe8
	// Line 549, Address: 0x4693c4, Func Offset: 0x104
	// Line 556, Address: 0x4693d0, Func Offset: 0x110
	// Line 538, Address: 0x4693fc, Func Offset: 0x13c
	// Line 556, Address: 0x469410, Func Offset: 0x150
	// Line 557, Address: 0x469414, Func Offset: 0x154
	// Line 558, Address: 0x469420, Func Offset: 0x160
	// Line 559, Address: 0x469434, Func Offset: 0x174
	// Line 560, Address: 0x46946c, Func Offset: 0x1ac
	// Line 559, Address: 0x469470, Func Offset: 0x1b0
	// Line 560, Address: 0x469474, Func Offset: 0x1b4
	// Line 561, Address: 0x469480, Func Offset: 0x1c0
	// Line 569, Address: 0x4694b0, Func Offset: 0x1f0
	// Line 571, Address: 0x4694cc, Func Offset: 0x20c
	// Line 573, Address: 0x4694ec, Func Offset: 0x22c
	// Line 574, Address: 0x4694f8, Func Offset: 0x238
	// Line 575, Address: 0x469524, Func Offset: 0x264
	// Line 561, Address: 0x46952c, Func Offset: 0x26c
	// Line 575, Address: 0x469530, Func Offset: 0x270
	// Line 563, Address: 0x469544, Func Offset: 0x284
	// Line 575, Address: 0x469548, Func Offset: 0x288
	// Line 576, Address: 0x469574, Func Offset: 0x2b4
	// Line 579, Address: 0x4695a8, Func Offset: 0x2e8
	// Line 581, Address: 0x4695bc, Func Offset: 0x2fc
	// Line 583, Address: 0x4695c4, Func Offset: 0x304
	// Line 586, Address: 0x4695d0, Func Offset: 0x310
	// Line 587, Address: 0x4695d8, Func Offset: 0x318
	// Line 588, Address: 0x4695dc, Func Offset: 0x31c
	// Line 590, Address: 0x4695e0, Func Offset: 0x320
	// Line 591, Address: 0x4695e8, Func Offset: 0x328
	// Func End, Address: 0x4695f8, Func Offset: 0x338
}

// binary_find<PQ220@unnamed@zSmoke_cpp@10smoke_type,P9RwTexture,Q220@unnamed@zSmoke_cpp@13compare_types>__FPQ220@unnamed@zSmoke_cpp@10smoke_typePQ220@unnamed@zSmoke_cpp@10smoke_typeRCP9RwTextureQ220@unnamed@zSmoke_cpp@13compare_types_PQ220@unnamed@zSmoke_cpp@10smoke_type
// Start address: 0x492080
smoke_type* binary_find(smoke_type* first, smoke_type* last, RwTexture&* value)
{
	smoke_type* notfound;
	smoke_type* mid;
	// Line 381, Address: 0x492080, Func Offset: 0
	// Line 384, Address: 0x492090, Func Offset: 0x10
	// Line 383, Address: 0x492098, Func Offset: 0x18
	// Line 384, Address: 0x4920c4, Func Offset: 0x44
	// Line 385, Address: 0x4920e4, Func Offset: 0x64
	// Line 387, Address: 0x4920ec, Func Offset: 0x6c
	// Line 391, Address: 0x4920f4, Func Offset: 0x74
	// Line 392, Address: 0x492108, Func Offset: 0x88
	// Line 386, Address: 0x492110, Func Offset: 0x90
	// Line 390, Address: 0x492118, Func Offset: 0x98
	// Line 393, Address: 0x49211c, Func Offset: 0x9c
	// Func End, Address: 0x492124, Func Offset: 0xa4
}

// binary_find<PC9xIniValue,PCc,Q220@unnamed@zWater_cpp@18compare_ini_values>__FPC9xIniValuePC9xIniValueRCPCcQ220@unnamed@zWater_cpp@18compare_ini_values_PC9xIniValue
// Start address: 0x493e30
xIniValue* binary_find(xIniValue* first, xIniValue* last, int8&* value)
{
	xIniValue* notfound;
	xIniValue* mid;
	// Line 379, Address: 0x493e30, Func Offset: 0
	// Line 381, Address: 0x493e54, Func Offset: 0x24
	// Line 392, Address: 0x493e64, Func Offset: 0x34
	// Line 383, Address: 0x493e7c, Func Offset: 0x4c
	// Line 392, Address: 0x493e80, Func Offset: 0x50
	// Line 383, Address: 0x493e8c, Func Offset: 0x5c
	// Line 392, Address: 0x493e94, Func Offset: 0x64
	// Line 391, Address: 0x493eb4, Func Offset: 0x84
	// Line 392, Address: 0x493eb8, Func Offset: 0x88
	// Line 386, Address: 0x493ecc, Func Offset: 0x9c
	// Line 388, Address: 0x493ed4, Func Offset: 0xa4
	// Line 390, Address: 0x493ed8, Func Offset: 0xa8
	// Line 393, Address: 0x493edc, Func Offset: 0xac
	// Func End, Address: 0x493efc, Func Offset: 0xcc
}

