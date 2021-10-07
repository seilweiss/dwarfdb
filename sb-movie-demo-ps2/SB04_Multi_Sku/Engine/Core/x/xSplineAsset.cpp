



uint8 advance_u(float32 start_u, float32 distance, uint8 forward, float32& new_u);
xVec3 evaluate(float32 u, int32 d);
void evaluate(float32 u, xVec3& point);
float32 start();
void find_derivative_basis_functions(float32 u, int32 i, int32 order, float32 ders[5]);
void find_basis_functions(float32 u, int32 i, float32* N);

// advance_u__Q21x5NURBSFffbRf
// Start address: 0x44fc80
uint8 NURBS::advance_u(float32 start_u, float32 distance, uint8 forward, float32& new_u)
{
	// Line 625, Address: 0x44fc80, Func Offset: 0
	// Line 627, Address: 0x44fcc0, Func Offset: 0x40
	// Line 625, Address: 0x44fcc8, Func Offset: 0x48
	// Line 628, Address: 0x44fccc, Func Offset: 0x4c
	// Line 627, Address: 0x44fcd0, Func Offset: 0x50
	// Line 628, Address: 0x44fcdc, Func Offset: 0x5c
	// Line 631, Address: 0x44fce8, Func Offset: 0x68
	// Line 638, Address: 0x44fd0c, Func Offset: 0x8c
	// Line 634, Address: 0x44fd14, Func Offset: 0x94
	// Line 638, Address: 0x44fd18, Func Offset: 0x98
	// Line 641, Address: 0x44fdc8, Func Offset: 0x148
	// Line 644, Address: 0x44fe08, Func Offset: 0x188
	// Line 650, Address: 0x44fe1c, Func Offset: 0x19c
	// Line 652, Address: 0x44fe2c, Func Offset: 0x1ac
	// Line 655, Address: 0x44fe3c, Func Offset: 0x1bc
	// Line 657, Address: 0x44fe48, Func Offset: 0x1c8
	// Line 658, Address: 0x44fe4c, Func Offset: 0x1cc
	// Line 663, Address: 0x44fe54, Func Offset: 0x1d4
	// Line 666, Address: 0x44fe64, Func Offset: 0x1e4
	// Line 668, Address: 0x44fe70, Func Offset: 0x1f0
	// Line 669, Address: 0x44fe74, Func Offset: 0x1f4
	// Line 674, Address: 0x44fe7c, Func Offset: 0x1fc
	// Line 638, Address: 0x44fe84, Func Offset: 0x204
	// Line 674, Address: 0x44fe94, Func Offset: 0x214
	// Line 638, Address: 0x44ff0c, Func Offset: 0x28c
	// Line 674, Address: 0x44ff10, Func Offset: 0x290
	// Line 638, Address: 0x44ff1c, Func Offset: 0x29c
	// Line 674, Address: 0x44ff20, Func Offset: 0x2a0
	// Line 638, Address: 0x44ff40, Func Offset: 0x2c0
	// Line 674, Address: 0x44ff44, Func Offset: 0x2c4
	// Line 638, Address: 0x44ff50, Func Offset: 0x2d0
	// Line 674, Address: 0x44ff54, Func Offset: 0x2d4
	// Line 638, Address: 0x44ff5c, Func Offset: 0x2dc
	// Line 674, Address: 0x44ff64, Func Offset: 0x2e4
	// Line 638, Address: 0x44ff8c, Func Offset: 0x30c
	// Line 674, Address: 0x44ff90, Func Offset: 0x310
	// Line 638, Address: 0x44ffc0, Func Offset: 0x340
	// Line 674, Address: 0x44ffc8, Func Offset: 0x348
	// Line 638, Address: 0x44ffd0, Func Offset: 0x350
	// Line 674, Address: 0x44ffd8, Func Offset: 0x358
	// Line 638, Address: 0x44ffdc, Func Offset: 0x35c
	// Line 674, Address: 0x44ffe0, Func Offset: 0x360
	// Line 638, Address: 0x44fff8, Func Offset: 0x378
	// Line 674, Address: 0x44fffc, Func Offset: 0x37c
	// Line 638, Address: 0x450008, Func Offset: 0x388
	// Line 674, Address: 0x45000c, Func Offset: 0x38c
	// Line 638, Address: 0x450010, Func Offset: 0x390
	// Line 674, Address: 0x450014, Func Offset: 0x394
	// Line 638, Address: 0x45001c, Func Offset: 0x39c
	// Line 674, Address: 0x450020, Func Offset: 0x3a0
	// Line 638, Address: 0x450028, Func Offset: 0x3a8
	// Line 674, Address: 0x45002c, Func Offset: 0x3ac
	// Line 638, Address: 0x450044, Func Offset: 0x3c4
	// Line 674, Address: 0x450048, Func Offset: 0x3c8
	// Line 638, Address: 0x45004c, Func Offset: 0x3cc
	// Line 674, Address: 0x450050, Func Offset: 0x3d0
	// Line 638, Address: 0x450070, Func Offset: 0x3f0
	// Line 674, Address: 0x450078, Func Offset: 0x3f8
	// Line 638, Address: 0x45007c, Func Offset: 0x3fc
	// Line 674, Address: 0x450080, Func Offset: 0x400
	// Line 638, Address: 0x450088, Func Offset: 0x408
	// Line 674, Address: 0x45008c, Func Offset: 0x40c
	// Line 638, Address: 0x4500a8, Func Offset: 0x428
	// Line 674, Address: 0x4500b0, Func Offset: 0x430
	// Line 638, Address: 0x4500c4, Func Offset: 0x444
	// Line 674, Address: 0x4500c8, Func Offset: 0x448
	// Line 638, Address: 0x4500cc, Func Offset: 0x44c
	// Line 674, Address: 0x4500d0, Func Offset: 0x450
	// Line 638, Address: 0x4500d4, Func Offset: 0x454
	// Line 674, Address: 0x4500dc, Func Offset: 0x45c
	// Line 638, Address: 0x4500f4, Func Offset: 0x474
	// Line 674, Address: 0x4500f8, Func Offset: 0x478
	// Line 638, Address: 0x450120, Func Offset: 0x4a0
	// Line 674, Address: 0x45012c, Func Offset: 0x4ac
	// Line 638, Address: 0x450164, Func Offset: 0x4e4
	// Line 674, Address: 0x450174, Func Offset: 0x4f4
	// Line 638, Address: 0x450190, Func Offset: 0x510
	// Line 674, Address: 0x450194, Func Offset: 0x514
	// Line 638, Address: 0x4501a8, Func Offset: 0x528
	// Line 674, Address: 0x4501ac, Func Offset: 0x52c
	// Line 638, Address: 0x4501b0, Func Offset: 0x530
	// Line 674, Address: 0x4501b8, Func Offset: 0x538
	// Line 638, Address: 0x4501c4, Func Offset: 0x544
	// Line 674, Address: 0x4501c8, Func Offset: 0x548
	// Line 638, Address: 0x4501d4, Func Offset: 0x554
	// Line 674, Address: 0x4501d8, Func Offset: 0x558
	// Line 638, Address: 0x4501dc, Func Offset: 0x55c
	// Line 674, Address: 0x4501e0, Func Offset: 0x560
	// Line 638, Address: 0x4501fc, Func Offset: 0x57c
	// Line 674, Address: 0x450204, Func Offset: 0x584
	// Line 638, Address: 0x450208, Func Offset: 0x588
	// Line 674, Address: 0x45020c, Func Offset: 0x58c
	// Line 638, Address: 0x45021c, Func Offset: 0x59c
	// Line 674, Address: 0x450224, Func Offset: 0x5a4
	// Line 638, Address: 0x4502a0, Func Offset: 0x620
	// Line 674, Address: 0x4502a4, Func Offset: 0x624
	// Line 638, Address: 0x4502bc, Func Offset: 0x63c
	// Line 674, Address: 0x4502c4, Func Offset: 0x644
	// Line 638, Address: 0x4502e8, Func Offset: 0x668
	// Line 674, Address: 0x4502f0, Func Offset: 0x670
	// Line 638, Address: 0x450304, Func Offset: 0x684
	// Line 674, Address: 0x450308, Func Offset: 0x688
	// Line 646, Address: 0x450318, Func Offset: 0x698
	// Line 675, Address: 0x45031c, Func Offset: 0x69c
	// Func End, Address: 0x450354, Func Offset: 0x6d4
}

// evaluate__Q21x5NURBSFfi
// Start address: 0x450360
xVec3 NURBS::evaluate(float32 u, int32 d)
{
	xVec3 point;
	// Line 237, Address: 0x450360, Func Offset: 0
	// Line 239, Address: 0x450364, Func Offset: 0x4
	// Line 237, Address: 0x450368, Func Offset: 0x8
	// Line 239, Address: 0x45036c, Func Offset: 0xc
	// Line 237, Address: 0x450370, Func Offset: 0x10
	// Line 239, Address: 0x450380, Func Offset: 0x20
	// Line 237, Address: 0x450384, Func Offset: 0x24
	// Line 239, Address: 0x450398, Func Offset: 0x38
	// Line 237, Address: 0x4503a0, Func Offset: 0x40
	// Line 239, Address: 0x4503a4, Func Offset: 0x44
	// Line 240, Address: 0x450920, Func Offset: 0x5c0
	// Line 239, Address: 0x450940, Func Offset: 0x5e0
	// Line 240, Address: 0x450944, Func Offset: 0x5e4
	// Line 241, Address: 0x450954, Func Offset: 0x5f4
	// Func End, Address: 0x450978, Func Offset: 0x618
}

// evaluate__Q21x5NURBSFfR5xVec3
// Start address: 0x450980
void NURBS::evaluate(float32 u, xVec3& point)
{
	int32 span;
	float32 N[5];
	int32 i;
	// Line 218, Address: 0x450980, Func Offset: 0
	// Line 223, Address: 0x4509a0, Func Offset: 0x20
	// Line 227, Address: 0x450a38, Func Offset: 0xb8
	// Line 229, Address: 0x450a48, Func Offset: 0xc8
	// Line 231, Address: 0x450a6c, Func Offset: 0xec
	// Line 232, Address: 0x450a90, Func Offset: 0x110
	// Line 233, Address: 0x450aa4, Func Offset: 0x124
	// Line 232, Address: 0x450aa8, Func Offset: 0x128
	// Line 233, Address: 0x450b28, Func Offset: 0x1a8
	// Line 223, Address: 0x450b44, Func Offset: 0x1c4
	// Line 233, Address: 0x450b48, Func Offset: 0x1c8
	// Line 234, Address: 0x450b58, Func Offset: 0x1d8
	// Func End, Address: 0x450b70, Func Offset: 0x1f0
}

// start__Q21x5NURBSFv
// Start address: 0x450b70
float32 NURBS::start()
{
	// Line 205, Address: 0x450b70, Func Offset: 0
	// Line 206, Address: 0x450b80, Func Offset: 0x10
	// Func End, Address: 0x450b88, Func Offset: 0x18
}

// find_derivative_basis_functions__Q21x5NURBSFfiiPA5_f
// Start address: 0x450b90
void NURBS::find_derivative_basis_functions(float32 u, int32 i, int32 order, float32 ders[5])
{
	float32 ndu[5][5];
	float32 left[5];
	float32 right[5];
	int32 j;
	float32 saved;
	int32 r;
	float32 temp;
	float32 a[5][2];
	int32 r;
	int32 s1;
	int32 s2;
	int32 k;
	float32 d;
	int32 rk;
	int32 pk;
	int32 j1;
	int32 j2;
	int32 j;
	int32 temp;
	int32 k;
	int32 j;
	// Line 109, Address: 0x450b90, Func Offset: 0
	// Line 120, Address: 0x450b94, Func Offset: 0x4
	// Line 109, Address: 0x450b98, Func Offset: 0x8
	// Line 120, Address: 0x450bbc, Func Offset: 0x2c
	// Line 126, Address: 0x450bc0, Func Offset: 0x30
	// Line 135, Address: 0x450bcc, Func Offset: 0x3c
	// Line 126, Address: 0x450bd0, Func Offset: 0x40
	// Line 127, Address: 0x450be4, Func Offset: 0x54
	// Line 131, Address: 0x450be8, Func Offset: 0x58
	// Line 127, Address: 0x450bec, Func Offset: 0x5c
	// Line 131, Address: 0x450bf8, Func Offset: 0x68
	// Line 130, Address: 0x450bfc, Func Offset: 0x6c
	// Line 131, Address: 0x450c00, Func Offset: 0x70
	// Line 127, Address: 0x450c04, Func Offset: 0x74
	// Line 128, Address: 0x450c08, Func Offset: 0x78
	// Line 127, Address: 0x450c10, Func Offset: 0x80
	// Line 128, Address: 0x450c14, Func Offset: 0x84
	// Line 127, Address: 0x450c18, Func Offset: 0x88
	// Line 128, Address: 0x450c1c, Func Offset: 0x8c
	// Line 127, Address: 0x450c20, Func Offset: 0x90
	// Line 131, Address: 0x450c24, Func Offset: 0x94
	// Line 137, Address: 0x450c48, Func Offset: 0xb8
	// Line 131, Address: 0x450c50, Func Offset: 0xc0
	// Line 137, Address: 0x450c54, Func Offset: 0xc4
	// Line 135, Address: 0x450c58, Func Offset: 0xc8
	// Line 132, Address: 0x450c5c, Func Offset: 0xcc
	// Line 136, Address: 0x450c64, Func Offset: 0xd4
	// Line 132, Address: 0x450c68, Func Offset: 0xd8
	// Line 133, Address: 0x450c70, Func Offset: 0xe0
	// Line 136, Address: 0x450c78, Func Offset: 0xe8
	// Line 133, Address: 0x450c7c, Func Offset: 0xec
	// Line 135, Address: 0x450c80, Func Offset: 0xf0
	// Line 136, Address: 0x450c88, Func Offset: 0xf8
	// Line 137, Address: 0x450c8c, Func Offset: 0xfc
	// Line 139, Address: 0x450c98, Func Offset: 0x108
	// Line 140, Address: 0x450ca0, Func Offset: 0x110
	// Line 139, Address: 0x450ca8, Func Offset: 0x118
	// Line 140, Address: 0x450cb4, Func Offset: 0x124
	// Line 142, Address: 0x450cc0, Func Offset: 0x130
	// Line 143, Address: 0x450cd4, Func Offset: 0x144
	// Line 144, Address: 0x450cd8, Func Offset: 0x148
	// Line 143, Address: 0x450cdc, Func Offset: 0x14c
	// Line 144, Address: 0x450cec, Func Offset: 0x15c
	// Line 149, Address: 0x450d00, Func Offset: 0x170
	// Line 179, Address: 0x450d0c, Func Offset: 0x17c
	// Line 149, Address: 0x450d14, Func Offset: 0x184
	// Line 153, Address: 0x450d18, Func Offset: 0x188
	// Line 151, Address: 0x450d1c, Func Offset: 0x18c
	// Line 153, Address: 0x450d20, Func Offset: 0x190
	// Line 150, Address: 0x450d24, Func Offset: 0x194
	// Line 155, Address: 0x450d28, Func Offset: 0x198
	// Line 175, Address: 0x450d3c, Func Offset: 0x1ac
	// Line 155, Address: 0x450d44, Func Offset: 0x1b4
	// Line 158, Address: 0x450d48, Func Offset: 0x1b8
	// Line 160, Address: 0x450d4c, Func Offset: 0x1bc
	// Line 156, Address: 0x450d50, Func Offset: 0x1c0
	// Line 157, Address: 0x450d54, Func Offset: 0x1c4
	// Line 160, Address: 0x450d58, Func Offset: 0x1c8
	// Line 170, Address: 0x450d60, Func Offset: 0x1d0
	// Line 175, Address: 0x450d70, Func Offset: 0x1e0
	// Line 180, Address: 0x450d8c, Func Offset: 0x1fc
	// Line 179, Address: 0x450e70, Func Offset: 0x2e0
	// Line 180, Address: 0x450e74, Func Offset: 0x2e4
	// Line 178, Address: 0x450e78, Func Offset: 0x2e8
	// Line 180, Address: 0x450e80, Func Offset: 0x2f0
	// Line 178, Address: 0x450e94, Func Offset: 0x304
	// Line 179, Address: 0x450e98, Func Offset: 0x308
	// Line 178, Address: 0x450e9c, Func Offset: 0x30c
	// Line 180, Address: 0x450ea0, Func Offset: 0x310
	// Line 179, Address: 0x450eb4, Func Offset: 0x324
	// Line 178, Address: 0x450eb8, Func Offset: 0x328
	// Line 180, Address: 0x450ec0, Func Offset: 0x330
	// Line 179, Address: 0x450ed4, Func Offset: 0x344
	// Line 178, Address: 0x450ed8, Func Offset: 0x348
	// Line 180, Address: 0x450ee0, Func Offset: 0x350
	// Line 179, Address: 0x450ef4, Func Offset: 0x364
	// Line 178, Address: 0x450ef8, Func Offset: 0x368
	// Line 180, Address: 0x450f00, Func Offset: 0x370
	// Line 179, Address: 0x450f14, Func Offset: 0x384
	// Line 178, Address: 0x450f18, Func Offset: 0x388
	// Line 180, Address: 0x450f20, Func Offset: 0x390
	// Line 179, Address: 0x450f34, Func Offset: 0x3a4
	// Line 178, Address: 0x450f38, Func Offset: 0x3a8
	// Line 180, Address: 0x450f40, Func Offset: 0x3b0
	// Line 178, Address: 0x450f58, Func Offset: 0x3c8
	// Line 180, Address: 0x450f5c, Func Offset: 0x3cc
	// Line 178, Address: 0x450f60, Func Offset: 0x3d0
	// Line 180, Address: 0x450f64, Func Offset: 0x3d4
	// Line 179, Address: 0x450f70, Func Offset: 0x3e0
	// Line 180, Address: 0x450f78, Func Offset: 0x3e8
	// Line 179, Address: 0x451010, Func Offset: 0x480
	// Line 180, Address: 0x451014, Func Offset: 0x484
	// Line 178, Address: 0x451018, Func Offset: 0x488
	// Line 180, Address: 0x45101c, Func Offset: 0x48c
	// Line 178, Address: 0x451028, Func Offset: 0x498
	// Line 180, Address: 0x45102c, Func Offset: 0x49c
	// Line 179, Address: 0x451030, Func Offset: 0x4a0
	// Line 180, Address: 0x451034, Func Offset: 0x4a4
	// Line 182, Address: 0x451040, Func Offset: 0x4b0
	// Line 189, Address: 0x45104c, Func Offset: 0x4bc
	// Line 192, Address: 0x451050, Func Offset: 0x4c0
	// Line 187, Address: 0x451054, Func Offset: 0x4c4
	// Line 190, Address: 0x451058, Func Offset: 0x4c8
	// Line 192, Address: 0x45105c, Func Offset: 0x4cc
	// Line 191, Address: 0x451060, Func Offset: 0x4d0
	// Line 192, Address: 0x451068, Func Offset: 0x4d8
	// Line 193, Address: 0x451070, Func Offset: 0x4e0
	// Line 192, Address: 0x451078, Func Offset: 0x4e8
	// Line 193, Address: 0x45107c, Func Offset: 0x4ec
	// Line 195, Address: 0x451088, Func Offset: 0x4f8
	// Line 196, Address: 0x45108c, Func Offset: 0x4fc
	// Line 197, Address: 0x451098, Func Offset: 0x508
	// Line 198, Address: 0x4510a4, Func Offset: 0x514
	// Line 199, Address: 0x4510b0, Func Offset: 0x520
	// Line 198, Address: 0x4510b4, Func Offset: 0x524
	// Line 199, Address: 0x4510c0, Func Offset: 0x530
	// Line 161, Address: 0x4510e0, Func Offset: 0x550
	// Line 199, Address: 0x4510ec, Func Offset: 0x55c
	// Line 161, Address: 0x4510f4, Func Offset: 0x564
	// Line 199, Address: 0x451110, Func Offset: 0x580
	// Line 162, Address: 0x451120, Func Offset: 0x590
	// Line 199, Address: 0x45112c, Func Offset: 0x59c
	// Line 161, Address: 0x451130, Func Offset: 0x5a0
	// Line 162, Address: 0x451138, Func Offset: 0x5a8
	// Line 199, Address: 0x451144, Func Offset: 0x5b4
	// Line 183, Address: 0x451158, Func Offset: 0x5c8
	// Line 199, Address: 0x451160, Func Offset: 0x5d0
	// Line 183, Address: 0x451168, Func Offset: 0x5d8
	// Line 199, Address: 0x451174, Func Offset: 0x5e4
	// Line 183, Address: 0x451178, Func Offset: 0x5e8
	// Line 199, Address: 0x45117c, Func Offset: 0x5ec
	// Line 184, Address: 0x451180, Func Offset: 0x5f0
	// Line 183, Address: 0x451184, Func Offset: 0x5f4
	// Line 199, Address: 0x451188, Func Offset: 0x5f8
	// Line 183, Address: 0x45118c, Func Offset: 0x5fc
	// Line 199, Address: 0x451190, Func Offset: 0x600
	// Line 183, Address: 0x45119c, Func Offset: 0x60c
	// Line 199, Address: 0x4511a0, Func Offset: 0x610
	// Line 183, Address: 0x4511a4, Func Offset: 0x614
	// Line 199, Address: 0x4511ac, Func Offset: 0x61c
	// Line 200, Address: 0x4511b8, Func Offset: 0x628
	// Line 201, Address: 0x4511c0, Func Offset: 0x630
	// Line 202, Address: 0x4511d0, Func Offset: 0x640
	// Func End, Address: 0x4511fc, Func Offset: 0x66c
}

// find_basis_functions__Q21x5NURBSFfiPf
// Start address: 0x451200
void NURBS::find_basis_functions(float32 u, int32 i, float32* N)
{
	float32 left[5];
	float32 right[5];
	int32 j;
	float32 saved;
	int32 r;
	float32 temp;
	// Line 79, Address: 0x451200, Func Offset: 0
	// Line 86, Address: 0x451204, Func Offset: 0x4
	// Line 79, Address: 0x451208, Func Offset: 0x8
	// Line 86, Address: 0x451210, Func Offset: 0x10
	// Line 93, Address: 0x451214, Func Offset: 0x14
	// Line 95, Address: 0x451224, Func Offset: 0x24
	// Line 102, Address: 0x451228, Func Offset: 0x28
	// Line 93, Address: 0x45122c, Func Offset: 0x2c
	// Line 104, Address: 0x451240, Func Offset: 0x40
	// Line 95, Address: 0x451244, Func Offset: 0x44
	// Line 104, Address: 0x451250, Func Offset: 0x50
	// Line 98, Address: 0x451254, Func Offset: 0x54
	// Line 100, Address: 0x451258, Func Offset: 0x58
	// Line 95, Address: 0x45125c, Func Offset: 0x5c
	// Line 96, Address: 0x451260, Func Offset: 0x60
	// Line 95, Address: 0x451268, Func Offset: 0x68
	// Line 96, Address: 0x45126c, Func Offset: 0x6c
	// Line 95, Address: 0x451270, Func Offset: 0x70
	// Line 96, Address: 0x451274, Func Offset: 0x74
	// Line 95, Address: 0x451278, Func Offset: 0x78
	// Line 104, Address: 0x45127c, Func Offset: 0x7c
	// Line 102, Address: 0x4512e0, Func Offset: 0xe0
	// Line 104, Address: 0x4512e8, Func Offset: 0xe8
	// Line 101, Address: 0x4512fc, Func Offset: 0xfc
	// Line 104, Address: 0x451300, Func Offset: 0x100
	// Line 101, Address: 0x451308, Func Offset: 0x108
	// Line 102, Address: 0x45130c, Func Offset: 0x10c
	// Line 104, Address: 0x451310, Func Offset: 0x110
	// Line 103, Address: 0x451314, Func Offset: 0x114
	// Line 104, Address: 0x451318, Func Offset: 0x118
	// Line 101, Address: 0x451328, Func Offset: 0x128
	// Line 104, Address: 0x451330, Func Offset: 0x130
	// Line 101, Address: 0x451340, Func Offset: 0x140
	// Line 102, Address: 0x451348, Func Offset: 0x148
	// Line 104, Address: 0x45134c, Func Offset: 0x14c
	// Line 103, Address: 0x451350, Func Offset: 0x150
	// Line 104, Address: 0x451354, Func Offset: 0x154
	// Line 101, Address: 0x451364, Func Offset: 0x164
	// Line 104, Address: 0x451368, Func Offset: 0x168
	// Line 101, Address: 0x451370, Func Offset: 0x170
	// Line 102, Address: 0x451374, Func Offset: 0x174
	// Line 104, Address: 0x451378, Func Offset: 0x178
	// Line 103, Address: 0x45137c, Func Offset: 0x17c
	// Line 104, Address: 0x451380, Func Offset: 0x180
	// Line 101, Address: 0x451390, Func Offset: 0x190
	// Line 104, Address: 0x451398, Func Offset: 0x198
	// Line 101, Address: 0x4513a8, Func Offset: 0x1a8
	// Line 102, Address: 0x4513b0, Func Offset: 0x1b0
	// Line 104, Address: 0x4513b4, Func Offset: 0x1b4
	// Line 103, Address: 0x4513b8, Func Offset: 0x1b8
	// Line 104, Address: 0x4513bc, Func Offset: 0x1bc
	// Line 101, Address: 0x4513cc, Func Offset: 0x1cc
	// Line 104, Address: 0x4513d0, Func Offset: 0x1d0
	// Line 101, Address: 0x4513d8, Func Offset: 0x1d8
	// Line 102, Address: 0x4513dc, Func Offset: 0x1dc
	// Line 104, Address: 0x4513e0, Func Offset: 0x1e0
	// Line 103, Address: 0x4513e4, Func Offset: 0x1e4
	// Line 104, Address: 0x4513e8, Func Offset: 0x1e8
	// Line 101, Address: 0x4513f8, Func Offset: 0x1f8
	// Line 104, Address: 0x4513fc, Func Offset: 0x1fc
	// Line 101, Address: 0x451418, Func Offset: 0x218
	// Line 104, Address: 0x45141c, Func Offset: 0x21c
	// Line 102, Address: 0x451420, Func Offset: 0x220
	// Line 104, Address: 0x451424, Func Offset: 0x224
	// Line 103, Address: 0x451428, Func Offset: 0x228
	// Line 104, Address: 0x45142c, Func Offset: 0x22c
	// Line 101, Address: 0x45143c, Func Offset: 0x23c
	// Line 104, Address: 0x451440, Func Offset: 0x240
	// Line 101, Address: 0x451444, Func Offset: 0x244
	// Line 102, Address: 0x451448, Func Offset: 0x248
	// Line 104, Address: 0x45144c, Func Offset: 0x24c
	// Line 103, Address: 0x451450, Func Offset: 0x250
	// Line 104, Address: 0x451454, Func Offset: 0x254
	// Line 101, Address: 0x45145c, Func Offset: 0x25c
	// Line 104, Address: 0x451460, Func Offset: 0x260
	// Line 101, Address: 0x451464, Func Offset: 0x264
	// Line 102, Address: 0x451468, Func Offset: 0x268
	// Line 104, Address: 0x45146c, Func Offset: 0x26c
	// Line 103, Address: 0x451470, Func Offset: 0x270
	// Line 104, Address: 0x451474, Func Offset: 0x274
	// Line 102, Address: 0x4514bc, Func Offset: 0x2bc
	// Line 104, Address: 0x4514c0, Func Offset: 0x2c0
	// Line 101, Address: 0x4514c4, Func Offset: 0x2c4
	// Line 103, Address: 0x4514cc, Func Offset: 0x2cc
	// Line 102, Address: 0x4514d0, Func Offset: 0x2d0
	// Line 104, Address: 0x4514d4, Func Offset: 0x2d4
	// Line 106, Address: 0x4514e0, Func Offset: 0x2e0
	// Line 105, Address: 0x4514e4, Func Offset: 0x2e4
	// Line 106, Address: 0x4514ec, Func Offset: 0x2ec
	// Line 105, Address: 0x4514f0, Func Offset: 0x2f0
	// Line 106, Address: 0x4514f8, Func Offset: 0x2f8
	// Line 107, Address: 0x451508, Func Offset: 0x308
	// Func End, Address: 0x451518, Func Offset: 0x318
}

