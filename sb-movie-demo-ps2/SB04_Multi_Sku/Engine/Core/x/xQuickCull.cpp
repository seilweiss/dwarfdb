



void xQuickCullForEverything(xQCData* q);
void xQuickCullForBox(xQCControl* ctrl, xQCData* q, xBox* box);
void xQuickCullForSphere(xQCControl* ctrl, xQCData* q, xSphere* s);
void xQuickCullForRay(xQCControl* ctrl, xQCData* q, xRay3* r);
void xQuickCullForLine(xQCControl* ctrl, xQCData* q, xLine3* ln);
void xQuickCullForBound(xQCControl* ctrl, xQCData* q, xBound* b);
int32 xQuickCullIsects(xQCData* a, xQCData* b);
void xQuickCullInit(xQCControl* ctrl, xBox* box);
void xQuickCullInit(xQCControl* ctrl, float32 xmin, float32 ymin, float32 zmin, float32 xmax, float32 ymax, float32 zmax);

// xQuickCullForEverything__FP7xQCData
// Start address: 0x3a3740
void xQuickCullForEverything(xQCData* q)
{
	// Line 625, Address: 0x3a3740, Func Offset: 0
	// Line 629, Address: 0x3a3744, Func Offset: 0x4
	// Line 625, Address: 0x3a3748, Func Offset: 0x8
	// Line 626, Address: 0x3a374c, Func Offset: 0xc
	// Line 627, Address: 0x3a3750, Func Offset: 0x10
	// Line 628, Address: 0x3a3754, Func Offset: 0x14
	// Line 629, Address: 0x3a3758, Func Offset: 0x18
	// Line 630, Address: 0x3a375c, Func Offset: 0x1c
	// Line 631, Address: 0x3a3760, Func Offset: 0x20
	// Line 638, Address: 0x3a3764, Func Offset: 0x24
	// Func End, Address: 0x3a376c, Func Offset: 0x2c
}

// xQuickCullForBox__FP10xQCControlP7xQCDataPC4xBox
// Start address: 0x3a3770
void xQuickCullForBox(xQCControl* ctrl, xQCData* q, xBox* box)
{
	// Line 596, Address: 0x3a3770, Func Offset: 0
	// Line 602, Address: 0x3a3790, Func Offset: 0x20
	// Line 603, Address: 0x3a38c0, Func Offset: 0x150
	// Line 604, Address: 0x3a39c8, Func Offset: 0x258
	// Line 605, Address: 0x3a3a84, Func Offset: 0x314
	// Func End, Address: 0x3a3a8c, Func Offset: 0x31c
}

// xQuickCullForSphere__FP10xQCControlP7xQCDataPC7xSphere
// Start address: 0x3a3a90
void xQuickCullForSphere(xQCControl* ctrl, xQCData* q, xSphere* s)
{
	float32 radius_adjusted;
	// Line 583, Address: 0x3a3a90, Func Offset: 0
	// Line 585, Address: 0x3a3aa0, Func Offset: 0x10
	// Line 587, Address: 0x3a3aa4, Func Offset: 0x14
	// Line 583, Address: 0x3a3aac, Func Offset: 0x1c
	// Line 586, Address: 0x3a3ab4, Func Offset: 0x24
	// Line 587, Address: 0x3a3ac8, Func Offset: 0x38
	// Line 590, Address: 0x3a3ad4, Func Offset: 0x44
	// Line 587, Address: 0x3a3ad8, Func Offset: 0x48
	// Line 586, Address: 0x3a3adc, Func Offset: 0x4c
	// Line 590, Address: 0x3a3ae4, Func Offset: 0x54
	// Line 591, Address: 0x3a3c04, Func Offset: 0x174
	// Line 592, Address: 0x3a3d04, Func Offset: 0x274
	// Line 593, Address: 0x3a3dc0, Func Offset: 0x330
	// Func End, Address: 0x3a3dc8, Func Offset: 0x338
}

// xQuickCullForRay__FP10xQCControlP7xQCDataPC5xRay3
// Start address: 0x3a3dd0
void xQuickCullForRay(xQCControl* ctrl, xQCData* q, xRay3* r)
{
	float32 len;
	// Line 555, Address: 0x3a3dd0, Func Offset: 0
	// Line 561, Address: 0x3a3dd8, Func Offset: 0x8
	// Line 564, Address: 0x3a3e98, Func Offset: 0xc8
	// Line 565, Address: 0x3a3fbc, Func Offset: 0x1ec
	// Line 566, Address: 0x3a40bc, Func Offset: 0x2ec
	// Line 567, Address: 0x3a4178, Func Offset: 0x3a8
	// Func End, Address: 0x3a4180, Func Offset: 0x3b0
}

// xQuickCullForLine__FP10xQCControlP7xQCDataPC6xLine3
// Start address: 0x3a4180
void xQuickCullForLine(xQCControl* ctrl, xQCData* q, xLine3* ln)
{
	// Line 543, Address: 0x3a4180, Func Offset: 0
	// Line 549, Address: 0x3a41a0, Func Offset: 0x20
	// Line 550, Address: 0x3a42d0, Func Offset: 0x150
	// Line 551, Address: 0x3a43d8, Func Offset: 0x258
	// Line 552, Address: 0x3a4494, Func Offset: 0x314
	// Func End, Address: 0x3a449c, Func Offset: 0x31c
}

// xQuickCullForBound__FP10xQCControlP7xQCDataPC6xBound
// Start address: 0x3a44a0
void xQuickCullForBound(xQCControl* ctrl, xQCData* q, xBound* b)
{
	xBox box;
	// Line 183, Address: 0x3a44a0, Func Offset: 0
	// Line 185, Address: 0x3a44a4, Func Offset: 0x4
	// Line 183, Address: 0x3a44a8, Func Offset: 0x8
	// Line 185, Address: 0x3a44bc, Func Offset: 0x1c
	// Line 187, Address: 0x3a44c4, Func Offset: 0x24
	// Line 189, Address: 0x3a44d0, Func Offset: 0x30
	// Line 194, Address: 0x3a44dc, Func Offset: 0x3c
	// Line 196, Address: 0x3a44e8, Func Offset: 0x48
	// Line 201, Address: 0x3a4810, Func Offset: 0x370
	// Line 186, Address: 0x3a481c, Func Offset: 0x37c
	// Line 201, Address: 0x3a4828, Func Offset: 0x388
	// Line 186, Address: 0x3a4834, Func Offset: 0x394
	// Line 201, Address: 0x3a4848, Func Offset: 0x3a8
	// Line 186, Address: 0x3a484c, Func Offset: 0x3ac
	// Line 201, Address: 0x3a4854, Func Offset: 0x3b4
	// Line 186, Address: 0x3a4878, Func Offset: 0x3d8
	// Line 201, Address: 0x3a4884, Func Offset: 0x3e4
	// Line 186, Address: 0x3a4890, Func Offset: 0x3f0
	// Line 201, Address: 0x3a4898, Func Offset: 0x3f8
	// Line 186, Address: 0x3a48a4, Func Offset: 0x404
	// Line 201, Address: 0x3a48b0, Func Offset: 0x410
	// Line 186, Address: 0x3a48b4, Func Offset: 0x414
	// Line 201, Address: 0x3a48b8, Func Offset: 0x418
	// Line 186, Address: 0x3a48dc, Func Offset: 0x43c
	// Line 201, Address: 0x3a48e8, Func Offset: 0x448
	// Line 186, Address: 0x3a48f4, Func Offset: 0x454
	// Line 201, Address: 0x3a48fc, Func Offset: 0x45c
	// Line 186, Address: 0x3a4908, Func Offset: 0x468
	// Line 201, Address: 0x3a4914, Func Offset: 0x474
	// Line 186, Address: 0x3a4918, Func Offset: 0x478
	// Line 201, Address: 0x3a491c, Func Offset: 0x47c
	// Line 186, Address: 0x3a4940, Func Offset: 0x4a0
	// Line 201, Address: 0x3a494c, Func Offset: 0x4ac
	// Line 186, Address: 0x3a4958, Func Offset: 0x4b8
	// Line 201, Address: 0x3a4960, Func Offset: 0x4c0
	// Line 186, Address: 0x3a496c, Func Offset: 0x4cc
	// Line 201, Address: 0x3a4984, Func Offset: 0x4e4
	// Line 186, Address: 0x3a499c, Func Offset: 0x4fc
	// Line 201, Address: 0x3a49a8, Func Offset: 0x508
	// Line 186, Address: 0x3a49b4, Func Offset: 0x514
	// Line 201, Address: 0x3a49bc, Func Offset: 0x51c
	// Line 186, Address: 0x3a49c8, Func Offset: 0x528
	// Line 201, Address: 0x3a49e0, Func Offset: 0x540
	// Line 186, Address: 0x3a49f8, Func Offset: 0x558
	// Line 201, Address: 0x3a4a04, Func Offset: 0x564
	// Line 186, Address: 0x3a4a10, Func Offset: 0x570
	// Line 201, Address: 0x3a4a18, Func Offset: 0x578
	// Line 186, Address: 0x3a4a24, Func Offset: 0x584
	// Line 201, Address: 0x3a4a3c, Func Offset: 0x59c
	// Line 186, Address: 0x3a4a54, Func Offset: 0x5b4
	// Line 201, Address: 0x3a4a60, Func Offset: 0x5c0
	// Line 186, Address: 0x3a4a6c, Func Offset: 0x5cc
	// Line 201, Address: 0x3a4a74, Func Offset: 0x5d4
	// Line 186, Address: 0x3a4a80, Func Offset: 0x5e0
	// Line 201, Address: 0x3a4aa0, Func Offset: 0x600
	// Line 186, Address: 0x3a4aac, Func Offset: 0x60c
	// Line 201, Address: 0x3a4ac8, Func Offset: 0x628
	// Line 186, Address: 0x3a4ad4, Func Offset: 0x634
	// Line 201, Address: 0x3a4af0, Func Offset: 0x650
	// Line 186, Address: 0x3a4afc, Func Offset: 0x65c
	// Line 201, Address: 0x3a4b08, Func Offset: 0x668
	// Line 186, Address: 0x3a4b0c, Func Offset: 0x66c
	// Line 201, Address: 0x3a4b10, Func Offset: 0x670
	// Line 186, Address: 0x3a4b14, Func Offset: 0x674
	// Line 201, Address: 0x3a4b20, Func Offset: 0x680
	// Line 187, Address: 0x3a4b4c, Func Offset: 0x6ac
	// Line 201, Address: 0x3a4b54, Func Offset: 0x6b4
	// Line 188, Address: 0x3a4b80, Func Offset: 0x6e0
	// Line 201, Address: 0x3a4b8c, Func Offset: 0x6ec
	// Line 188, Address: 0x3a4b98, Func Offset: 0x6f8
	// Line 201, Address: 0x3a4ba0, Func Offset: 0x700
	// Line 188, Address: 0x3a4bac, Func Offset: 0x70c
	// Line 201, Address: 0x3a4bb8, Func Offset: 0x718
	// Line 188, Address: 0x3a4bbc, Func Offset: 0x71c
	// Line 201, Address: 0x3a4bc0, Func Offset: 0x720
	// Line 188, Address: 0x3a4be8, Func Offset: 0x748
	// Line 201, Address: 0x3a4bf4, Func Offset: 0x754
	// Line 188, Address: 0x3a4c00, Func Offset: 0x760
	// Line 201, Address: 0x3a4c08, Func Offset: 0x768
	// Line 188, Address: 0x3a4c14, Func Offset: 0x774
	// Line 201, Address: 0x3a4c20, Func Offset: 0x780
	// Line 188, Address: 0x3a4c24, Func Offset: 0x784
	// Line 201, Address: 0x3a4c28, Func Offset: 0x788
	// Line 188, Address: 0x3a4c50, Func Offset: 0x7b0
	// Line 201, Address: 0x3a4c5c, Func Offset: 0x7bc
	// Line 188, Address: 0x3a4c68, Func Offset: 0x7c8
	// Line 201, Address: 0x3a4c70, Func Offset: 0x7d0
	// Line 188, Address: 0x3a4c7c, Func Offset: 0x7dc
	// Line 201, Address: 0x3a4c88, Func Offset: 0x7e8
	// Line 188, Address: 0x3a4c8c, Func Offset: 0x7ec
	// Line 201, Address: 0x3a4c98, Func Offset: 0x7f8
	// Line 188, Address: 0x3a4cb0, Func Offset: 0x810
	// Line 201, Address: 0x3a4cbc, Func Offset: 0x81c
	// Line 188, Address: 0x3a4cc8, Func Offset: 0x828
	// Line 201, Address: 0x3a4cd0, Func Offset: 0x830
	// Line 188, Address: 0x3a4cdc, Func Offset: 0x83c
	// Line 201, Address: 0x3a4ce8, Func Offset: 0x848
	// Line 188, Address: 0x3a4cec, Func Offset: 0x84c
	// Line 201, Address: 0x3a4cf8, Func Offset: 0x858
	// Line 188, Address: 0x3a4d10, Func Offset: 0x870
	// Line 201, Address: 0x3a4d1c, Func Offset: 0x87c
	// Line 188, Address: 0x3a4d28, Func Offset: 0x888
	// Line 201, Address: 0x3a4d30, Func Offset: 0x890
	// Line 188, Address: 0x3a4d3c, Func Offset: 0x89c
	// Line 201, Address: 0x3a4d48, Func Offset: 0x8a8
	// Line 188, Address: 0x3a4d4c, Func Offset: 0x8ac
	// Line 201, Address: 0x3a4d58, Func Offset: 0x8b8
	// Line 188, Address: 0x3a4d70, Func Offset: 0x8d0
	// Line 201, Address: 0x3a4d7c, Func Offset: 0x8dc
	// Line 188, Address: 0x3a4d88, Func Offset: 0x8e8
	// Line 201, Address: 0x3a4d90, Func Offset: 0x8f0
	// Line 188, Address: 0x3a4d9c, Func Offset: 0x8fc
	// Line 201, Address: 0x3a4dbc, Func Offset: 0x91c
	// Line 188, Address: 0x3a4dc8, Func Offset: 0x928
	// Line 201, Address: 0x3a4de4, Func Offset: 0x944
	// Line 188, Address: 0x3a4df0, Func Offset: 0x950
	// Line 201, Address: 0x3a4e0c, Func Offset: 0x96c
	// Line 188, Address: 0x3a4e18, Func Offset: 0x978
	// Line 201, Address: 0x3a4e24, Func Offset: 0x984
	// Line 188, Address: 0x3a4e28, Func Offset: 0x988
	// Line 201, Address: 0x3a4e2c, Func Offset: 0x98c
	// Line 188, Address: 0x3a4e30, Func Offset: 0x990
	// Line 201, Address: 0x3a4e3c, Func Offset: 0x99c
	// Line 189, Address: 0x3a4e68, Func Offset: 0x9c8
	// Line 192, Address: 0x3a4e70, Func Offset: 0x9d0
	// Line 201, Address: 0x3a4e74, Func Offset: 0x9d4
	// Line 193, Address: 0x3a4ea8, Func Offset: 0xa08
	// Line 201, Address: 0x3a4eb4, Func Offset: 0xa14
	// Line 193, Address: 0x3a4ec0, Func Offset: 0xa20
	// Line 201, Address: 0x3a4ec8, Func Offset: 0xa28
	// Line 193, Address: 0x3a4ed4, Func Offset: 0xa34
	// Line 201, Address: 0x3a4ee0, Func Offset: 0xa40
	// Line 193, Address: 0x3a4ee4, Func Offset: 0xa44
	// Line 201, Address: 0x3a4ee8, Func Offset: 0xa48
	// Line 193, Address: 0x3a4f10, Func Offset: 0xa70
	// Line 201, Address: 0x3a4f1c, Func Offset: 0xa7c
	// Line 193, Address: 0x3a4f28, Func Offset: 0xa88
	// Line 201, Address: 0x3a4f30, Func Offset: 0xa90
	// Line 193, Address: 0x3a4f3c, Func Offset: 0xa9c
	// Line 201, Address: 0x3a4f48, Func Offset: 0xaa8
	// Line 193, Address: 0x3a4f4c, Func Offset: 0xaac
	// Line 201, Address: 0x3a4f50, Func Offset: 0xab0
	// Line 193, Address: 0x3a4f78, Func Offset: 0xad8
	// Line 201, Address: 0x3a4f84, Func Offset: 0xae4
	// Line 193, Address: 0x3a4f90, Func Offset: 0xaf0
	// Line 201, Address: 0x3a4f98, Func Offset: 0xaf8
	// Line 193, Address: 0x3a4fa4, Func Offset: 0xb04
	// Line 201, Address: 0x3a4fb0, Func Offset: 0xb10
	// Line 193, Address: 0x3a4fb4, Func Offset: 0xb14
	// Line 201, Address: 0x3a4fc0, Func Offset: 0xb20
	// Line 193, Address: 0x3a4fd8, Func Offset: 0xb38
	// Line 201, Address: 0x3a4fe4, Func Offset: 0xb44
	// Line 193, Address: 0x3a4ff0, Func Offset: 0xb50
	// Line 201, Address: 0x3a4ff8, Func Offset: 0xb58
	// Line 193, Address: 0x3a5004, Func Offset: 0xb64
	// Line 201, Address: 0x3a5010, Func Offset: 0xb70
	// Line 193, Address: 0x3a5014, Func Offset: 0xb74
	// Line 201, Address: 0x3a5020, Func Offset: 0xb80
	// Line 193, Address: 0x3a5038, Func Offset: 0xb98
	// Line 201, Address: 0x3a5044, Func Offset: 0xba4
	// Line 193, Address: 0x3a5050, Func Offset: 0xbb0
	// Line 201, Address: 0x3a5058, Func Offset: 0xbb8
	// Line 193, Address: 0x3a5064, Func Offset: 0xbc4
	// Line 201, Address: 0x3a5070, Func Offset: 0xbd0
	// Line 193, Address: 0x3a5074, Func Offset: 0xbd4
	// Line 201, Address: 0x3a5080, Func Offset: 0xbe0
	// Line 193, Address: 0x3a5098, Func Offset: 0xbf8
	// Line 201, Address: 0x3a50a4, Func Offset: 0xc04
	// Line 193, Address: 0x3a50b0, Func Offset: 0xc10
	// Line 201, Address: 0x3a50b8, Func Offset: 0xc18
	// Line 193, Address: 0x3a50c4, Func Offset: 0xc24
	// Line 201, Address: 0x3a50e4, Func Offset: 0xc44
	// Line 193, Address: 0x3a50f0, Func Offset: 0xc50
	// Line 201, Address: 0x3a510c, Func Offset: 0xc6c
	// Line 193, Address: 0x3a5118, Func Offset: 0xc78
	// Line 201, Address: 0x3a5134, Func Offset: 0xc94
	// Line 193, Address: 0x3a5140, Func Offset: 0xca0
	// Line 201, Address: 0x3a514c, Func Offset: 0xcac
	// Line 193, Address: 0x3a5150, Func Offset: 0xcb0
	// Line 201, Address: 0x3a5154, Func Offset: 0xcb4
	// Line 193, Address: 0x3a5158, Func Offset: 0xcb8
	// Line 201, Address: 0x3a5164, Func Offset: 0xcc4
	// Line 194, Address: 0x3a5190, Func Offset: 0xcf0
	// Line 201, Address: 0x3a5198, Func Offset: 0xcf8
	// Func End, Address: 0x3a51ac, Func Offset: 0xd0c
}

// xQuickCullIsects__FPC7xQCDataPC7xQCData
// Start address: 0x3a51b0
int32 xQuickCullIsects(xQCData* a, xQCData* b)
{
	// Line 147, Address: 0x3a51b0, Func Offset: 0
	// Line 148, Address: 0x3a51b4, Func Offset: 0x4
	// Line 149, Address: 0x3a51b8, Func Offset: 0x8
	// Line 150, Address: 0x3a51bc, Func Offset: 0xc
	// Line 151, Address: 0x3a51c0, Func Offset: 0x10
	// Line 152, Address: 0x3a51c4, Func Offset: 0x14
	// Line 153, Address: 0x3a51c8, Func Offset: 0x18
	// Line 154, Address: 0x3a51cc, Func Offset: 0x1c
	// Line 180, Address: 0x3a51d0, Func Offset: 0x20
	// Func End, Address: 0x3a51d8, Func Offset: 0x28
}

// xQuickCullInit__FP10xQCControlPC4xBox
// Start address: 0x3a51e0
void xQuickCullInit(xQCControl* ctrl, xBox* box)
{
	// Line 130, Address: 0x3a51e0, Func Offset: 0
	// Func End, Address: 0x3a51fc, Func Offset: 0x1c
}

// xQuickCullInit__FP10xQCControlffffff
// Start address: 0x3a5200
void xQuickCullInit(xQCControl* ctrl, float32 xmin, float32 ymin, float32 zmin, float32 xmax, float32 ymax, float32 zmax)
{
	// Line 55, Address: 0x3a5200, Func Offset: 0
	// Line 56, Address: 0x3a5204, Func Offset: 0x4
	// Line 57, Address: 0x3a5208, Func Offset: 0x8
	// Line 58, Address: 0x3a520c, Func Offset: 0xc
	// Line 59, Address: 0x3a5210, Func Offset: 0x10
	// Line 61, Address: 0x3a5214, Func Offset: 0x14
	// Line 60, Address: 0x3a5218, Func Offset: 0x18
	// Line 61, Address: 0x3a521c, Func Offset: 0x1c
	// Line 62, Address: 0x3a5220, Func Offset: 0x20
	// Line 63, Address: 0x3a5228, Func Offset: 0x28
	// Line 65, Address: 0x3a5230, Func Offset: 0x30
	// Line 90, Address: 0x3a5268, Func Offset: 0x68
	// Line 93, Address: 0x3a5274, Func Offset: 0x74
	// Line 90, Address: 0x3a5280, Func Offset: 0x80
	// Line 91, Address: 0x3a5288, Func Offset: 0x88
	// Line 93, Address: 0x3a528c, Func Offset: 0x8c
	// Line 94, Address: 0x3a5290, Func Offset: 0x90
	// Line 91, Address: 0x3a5294, Func Offset: 0x94
	// Line 92, Address: 0x3a529c, Func Offset: 0x9c
	// Line 95, Address: 0x3a52a0, Func Offset: 0xa0
	// Line 92, Address: 0x3a52a4, Func Offset: 0xa4
	// Line 93, Address: 0x3a52ac, Func Offset: 0xac
	// Line 94, Address: 0x3a52c0, Func Offset: 0xc0
	// Line 95, Address: 0x3a52d4, Func Offset: 0xd4
	// Line 125, Address: 0x3a52e4, Func Offset: 0xe4
	// Line 69, Address: 0x3a52ec, Func Offset: 0xec
	// Line 125, Address: 0x3a52f0, Func Offset: 0xf0
	// Func End, Address: 0x3a5308, Func Offset: 0x108
}

