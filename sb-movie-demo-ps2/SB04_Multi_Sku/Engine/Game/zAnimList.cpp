



int32 zAnimListGetNumUsed(uint32 id);
xAnimTable* zAnimListGetTable(uint32 id);
void zAnimListExit();
void zAnimListInit();
uint32 AlwaysConditional();

// zAnimListGetNumUsed__FUi
// Start address: 0x398be0
int32 zAnimListGetNumUsed(uint32 id)
{
	int32 i;
	// Line 152, Address: 0x398be0, Func Offset: 0
	// Line 153, Address: 0x398bf4, Func Offset: 0x14
	// Line 154, Address: 0x398c00, Func Offset: 0x20
	// Line 156, Address: 0x398c14, Func Offset: 0x34
	// Line 157, Address: 0x398c28, Func Offset: 0x48
	// Line 158, Address: 0x398c2c, Func Offset: 0x4c
	// Func End, Address: 0x398c34, Func Offset: 0x54
}

// zAnimListGetTable__FUi
// Start address: 0x398c40
xAnimTable* zAnimListGetTable(uint32 id)
{
	int32 i;
	// Line 142, Address: 0x398c40, Func Offset: 0
	// Line 143, Address: 0x398c54, Func Offset: 0x14
	// Line 144, Address: 0x398c60, Func Offset: 0x20
	// Line 146, Address: 0x398c74, Func Offset: 0x34
	// Line 147, Address: 0x398c88, Func Offset: 0x48
	// Line 148, Address: 0x398c8c, Func Offset: 0x4c
	// Func End, Address: 0x398c94, Func Offset: 0x54
}

// zAnimListExit__Fv
// Start address: 0x398ca0
void zAnimListExit()
{
	// Line 134, Address: 0x398ca0, Func Offset: 0
	// Line 135, Address: 0x398ca4, Func Offset: 0x4
	// Line 136, Address: 0x398ca8, Func Offset: 0x8
	// Line 138, Address: 0x398cac, Func Offset: 0xc
	// Func End, Address: 0x398cb4, Func Offset: 0x14
}

// zAnimListInit__Fv
// Start address: 0x398cc0
void zAnimListInit()
{
	int32 i;
	uint32 size;
	zAnimListAsset* zala;
	PKRAssetTOCInfo ainfo;
	xAnimTable* atbl;
	void* buf;
	xAnimFile* afile;
	int32 idle_exists;
	int32 j;
	xAnimFile* afile;
	// Line 57, Address: 0x398cc0, Func Offset: 0
	// Line 58, Address: 0x398cc4, Func Offset: 0x4
	// Line 57, Address: 0x398cc8, Func Offset: 0x8
	// Line 58, Address: 0x398ccc, Func Offset: 0xc
	// Line 57, Address: 0x398cd0, Func Offset: 0x10
	// Line 58, Address: 0x398cf0, Func Offset: 0x30
	// Line 60, Address: 0x398cf8, Func Offset: 0x38
	// Line 61, Address: 0x398d00, Func Offset: 0x40
	// Line 63, Address: 0x398d14, Func Offset: 0x54
	// Line 65, Address: 0x398d2c, Func Offset: 0x6c
	// Line 68, Address: 0x398d40, Func Offset: 0x80
	// Line 70, Address: 0x398d58, Func Offset: 0x98
	// Line 73, Address: 0x398d70, Func Offset: 0xb0
	// Line 75, Address: 0x398d84, Func Offset: 0xc4
	// Line 78, Address: 0x398d94, Func Offset: 0xd4
	// Line 75, Address: 0x398d98, Func Offset: 0xd8
	// Line 78, Address: 0x398d9c, Func Offset: 0xdc
	// Line 79, Address: 0x398da8, Func Offset: 0xe8
	// Line 80, Address: 0x398db4, Func Offset: 0xf4
	// Line 83, Address: 0x398dc4, Func Offset: 0x104
	// Line 84, Address: 0x398de4, Func Offset: 0x124
	// Line 85, Address: 0x398dec, Func Offset: 0x12c
	// Line 89, Address: 0x398e08, Func Offset: 0x148
	// Line 90, Address: 0x398e50, Func Offset: 0x190
	// Line 92, Address: 0x398e64, Func Offset: 0x1a4
	// Line 96, Address: 0x398e7c, Func Offset: 0x1bc
	// Line 97, Address: 0x398e8c, Func Offset: 0x1cc
	// Line 126, Address: 0x398e94, Func Offset: 0x1d4
	// Line 97, Address: 0x398ea0, Func Offset: 0x1e0
	// Line 126, Address: 0x398ea4, Func Offset: 0x1e4
	// Line 128, Address: 0x398eac, Func Offset: 0x1ec
	// Line 130, Address: 0x398ec0, Func Offset: 0x200
	// Line 98, Address: 0x398ed4, Func Offset: 0x214
	// Line 130, Address: 0x398ed8, Func Offset: 0x218
	// Line 100, Address: 0x398ee4, Func Offset: 0x224
	// Line 130, Address: 0x398ee8, Func Offset: 0x228
	// Line 105, Address: 0x398f08, Func Offset: 0x248
	// Line 130, Address: 0x398f0c, Func Offset: 0x24c
	// Line 105, Address: 0x398f18, Func Offset: 0x258
	// Line 130, Address: 0x398f1c, Func Offset: 0x25c
	// Line 105, Address: 0x398f20, Func Offset: 0x260
	// Line 130, Address: 0x398f24, Func Offset: 0x264
	// Line 105, Address: 0x398f28, Func Offset: 0x268
	// Line 130, Address: 0x398f3c, Func Offset: 0x27c
	// Line 109, Address: 0x398f48, Func Offset: 0x288
	// Line 130, Address: 0x398f4c, Func Offset: 0x28c
	// Line 109, Address: 0x398f5c, Func Offset: 0x29c
	// Line 130, Address: 0x398f60, Func Offset: 0x2a0
	// Line 109, Address: 0x398f68, Func Offset: 0x2a8
	// Line 130, Address: 0x398f7c, Func Offset: 0x2bc
	// Line 111, Address: 0x398f84, Func Offset: 0x2c4
	// Line 112, Address: 0x398f98, Func Offset: 0x2d8
	// Line 130, Address: 0x398fa4, Func Offset: 0x2e4
	// Line 112, Address: 0x398fa8, Func Offset: 0x2e8
	// Line 130, Address: 0x398fac, Func Offset: 0x2ec
	// Line 112, Address: 0x398fb0, Func Offset: 0x2f0
	// Line 130, Address: 0x398fb4, Func Offset: 0x2f4
	// Line 112, Address: 0x398fb8, Func Offset: 0x2f8
	// Line 130, Address: 0x398fbc, Func Offset: 0x2fc
	// Line 112, Address: 0x398fc0, Func Offset: 0x300
	// Line 130, Address: 0x398fc4, Func Offset: 0x304
	// Line 112, Address: 0x398fc8, Func Offset: 0x308
	// Line 130, Address: 0x398fcc, Func Offset: 0x30c
	// Line 115, Address: 0x398fdc, Func Offset: 0x31c
	// Line 130, Address: 0x398fe0, Func Offset: 0x320
	// Line 118, Address: 0x398fec, Func Offset: 0x32c
	// Line 130, Address: 0x398ff0, Func Offset: 0x330
	// Line 118, Address: 0x398ff4, Func Offset: 0x334
	// Line 130, Address: 0x398ff8, Func Offset: 0x338
	// Line 118, Address: 0x398ffc, Func Offset: 0x33c
	// Line 130, Address: 0x399000, Func Offset: 0x340
	// Line 118, Address: 0x399004, Func Offset: 0x344
	// Line 130, Address: 0x399008, Func Offset: 0x348
	// Line 118, Address: 0x39900c, Func Offset: 0x34c
	// Line 130, Address: 0x399010, Func Offset: 0x350
	// Line 118, Address: 0x399014, Func Offset: 0x354
	// Line 130, Address: 0x399020, Func Offset: 0x360
	// Line 119, Address: 0x39902c, Func Offset: 0x36c
	// Line 130, Address: 0x399030, Func Offset: 0x370
	// Func End, Address: 0x399080, Func Offset: 0x3c0
}

// AlwaysConditional__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x399080
uint32 AlwaysConditional()
{
	// Line 53, Address: 0x399080, Func Offset: 0
	// Func End, Address: 0x399088, Func Offset: 0x8
}

