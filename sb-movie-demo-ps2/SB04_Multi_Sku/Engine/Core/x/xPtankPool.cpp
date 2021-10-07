



void grab_block(ptank_group_type type);
void xPTankPoolRender();
void xPTankPoolFreeEnable(uint8 freeme);
void xPTankPoolSceneExit();
void xPTankPoolSceneEnter();
int32 compare_ptanks(void* e1, void* e2);
void render_ptank(ptank_context& context, int32& render_flags);
RpAtomic* create_ptank(uint32 flags);
void init_groups();
void sort_buckets(group_data& group);

// grab_block__10ptank_poolF16ptank_group_type
// Start address: 0x3a5310
void ptank_pool::grab_block(ptank_group_type type)
{
	group_data& group;
	ptank_context** end;
	ptank_context** it;
	ptank_context** it;
	// Line 596, Address: 0x3a5310, Func Offset: 0
	// Line 600, Address: 0x3a5314, Func Offset: 0x4
	// Line 596, Address: 0x3a5318, Func Offset: 0x8
	// Line 599, Address: 0x3a5334, Func Offset: 0x24
	// Line 600, Address: 0x3a5338, Func Offset: 0x28
	// Line 603, Address: 0x3a5350, Func Offset: 0x40
	// Line 606, Address: 0x3a53ac, Func Offset: 0x9c
	// Line 603, Address: 0x3a53b0, Func Offset: 0xa0
	// Line 606, Address: 0x3a53b4, Func Offset: 0xa4
	// Line 609, Address: 0x3a53b8, Func Offset: 0xa8
	// Line 606, Address: 0x3a53bc, Func Offset: 0xac
	// Line 609, Address: 0x3a53c0, Func Offset: 0xb0
	// Line 611, Address: 0x3a53d0, Func Offset: 0xc0
	// Line 616, Address: 0x3a53d8, Func Offset: 0xc8
	// Line 623, Address: 0x3a5430, Func Offset: 0x120
	// Line 625, Address: 0x3a543c, Func Offset: 0x12c
	// Line 626, Address: 0x3a5444, Func Offset: 0x134
	// Line 627, Address: 0x3a544c, Func Offset: 0x13c
	// Line 630, Address: 0x3a5454, Func Offset: 0x144
	// Line 631, Address: 0x3a5458, Func Offset: 0x148
	// Line 635, Address: 0x3a5460, Func Offset: 0x150
	// Line 640, Address: 0x3a5464, Func Offset: 0x154
	// Line 635, Address: 0x3a5468, Func Offset: 0x158
	// Line 640, Address: 0x3a546c, Func Offset: 0x15c
	// Line 635, Address: 0x3a5470, Func Offset: 0x160
	// Line 636, Address: 0x3a5474, Func Offset: 0x164
	// Line 639, Address: 0x3a5480, Func Offset: 0x170
	// Line 640, Address: 0x3a5490, Func Offset: 0x180
	// Line 641, Address: 0x3a54a8, Func Offset: 0x198
	// Line 642, Address: 0x3a54b4, Func Offset: 0x1a4
	// Line 643, Address: 0x3a54bc, Func Offset: 0x1ac
	// Line 644, Address: 0x3a5514, Func Offset: 0x204
	// Line 647, Address: 0x3a5528, Func Offset: 0x218
	// Line 649, Address: 0x3a5538, Func Offset: 0x228
	// Line 654, Address: 0x3a5540, Func Offset: 0x230
	// Line 656, Address: 0x3a5560, Func Offset: 0x250
	// Line 657, Address: 0x3a55a0, Func Offset: 0x290
	// Line 662, Address: 0x3a55b0, Func Offset: 0x2a0
	// Line 663, Address: 0x3a55bc, Func Offset: 0x2ac
	// Line 665, Address: 0x3a55d4, Func Offset: 0x2c4
	// Line 666, Address: 0x3a5624, Func Offset: 0x314
	// Line 667, Address: 0x3a5630, Func Offset: 0x320
	// Line 670, Address: 0x3a563c, Func Offset: 0x32c
	// Line 672, Address: 0x3a564c, Func Offset: 0x33c
	// Line 673, Address: 0x3a5658, Func Offset: 0x348
	// Line 682, Address: 0x3a5664, Func Offset: 0x354
	// Line 686, Address: 0x3a5668, Func Offset: 0x358
	// Line 682, Address: 0x3a566c, Func Offset: 0x35c
	// Line 683, Address: 0x3a5674, Func Offset: 0x364
	// Line 686, Address: 0x3a5680, Func Offset: 0x370
	// Line 687, Address: 0x3a5690, Func Offset: 0x380
	// Line 688, Address: 0x3a569c, Func Offset: 0x38c
	// Line 689, Address: 0x3a56a4, Func Offset: 0x394
	// Line 690, Address: 0x3a56ac, Func Offset: 0x39c
	// Line 691, Address: 0x3a56c0, Func Offset: 0x3b0
	// Func End, Address: 0x3a56fc, Func Offset: 0x3ec
}

// xPTankPoolRender__Fv
// Start address: 0x3a5700
void xPTankPoolRender()
{
	ptank_context* ptanks;
	ptank_context* ptank;
	group_data* g;
	group_data* endg;
	ptank_context* p;
	ptank_context* endp;
	int32 render_flags;
	ptank_context* end_ptank;
	// Line 502, Address: 0x3a5700, Func Offset: 0
	// Line 513, Address: 0x3a5704, Func Offset: 0x4
	// Line 502, Address: 0x3a5708, Func Offset: 0x8
	// Line 513, Address: 0x3a5720, Func Offset: 0x20
	// Line 515, Address: 0x3a5728, Func Offset: 0x28
	// Line 524, Address: 0x3a5738, Func Offset: 0x38
	// Line 537, Address: 0x3a5740, Func Offset: 0x40
	// Line 524, Address: 0x3a5748, Func Offset: 0x48
	// Line 537, Address: 0x3a574c, Func Offset: 0x4c
	// Line 539, Address: 0x3a575c, Func Offset: 0x5c
	// Line 565, Address: 0x3a5768, Func Offset: 0x68
	// Line 571, Address: 0x3a5780, Func Offset: 0x80
	// Line 567, Address: 0x3a5784, Func Offset: 0x84
	// Line 571, Address: 0x3a5788, Func Offset: 0x88
	// Line 572, Address: 0x3a57ac, Func Offset: 0xac
	// Line 574, Address: 0x3a57b4, Func Offset: 0xb4
	// Line 576, Address: 0x3a57c8, Func Offset: 0xc8
	// Line 579, Address: 0x3a57d8, Func Offset: 0xd8
	// Line 581, Address: 0x3a57e8, Func Offset: 0xe8
	// Line 582, Address: 0x3a57f8, Func Offset: 0xf8
	// Line 584, Address: 0x3a580c, Func Offset: 0x10c
	// Line 586, Address: 0x3a5818, Func Offset: 0x118
	// Line 591, Address: 0x3a5824, Func Offset: 0x124
	// Line 592, Address: 0x3a5830, Func Offset: 0x130
	// Line 515, Address: 0x3a583c, Func Offset: 0x13c
	// Line 592, Address: 0x3a5840, Func Offset: 0x140
	// Line 542, Address: 0x3a5854, Func Offset: 0x154
	// Line 592, Address: 0x3a5858, Func Offset: 0x158
	// Line 549, Address: 0x3a588c, Func Offset: 0x18c
	// Line 592, Address: 0x3a5894, Func Offset: 0x194
	// Line 556, Address: 0x3a589c, Func Offset: 0x19c
	// Line 592, Address: 0x3a58a0, Func Offset: 0x1a0
	// Line 559, Address: 0x3a58c4, Func Offset: 0x1c4
	// Line 592, Address: 0x3a58cc, Func Offset: 0x1cc
	// Line 563, Address: 0x3a58e0, Func Offset: 0x1e0
	// Line 592, Address: 0x3a58e4, Func Offset: 0x1e4
	// Line 554, Address: 0x3a58f8, Func Offset: 0x1f8
	// Line 555, Address: 0x3a5904, Func Offset: 0x204
	// Line 575, Address: 0x3a5910, Func Offset: 0x210
	// Line 592, Address: 0x3a5914, Func Offset: 0x214
	// Line 580, Address: 0x3a5930, Func Offset: 0x230
	// Line 592, Address: 0x3a5934, Func Offset: 0x234
	// Line 591, Address: 0x3a594c, Func Offset: 0x24c
	// Line 592, Address: 0x3a5954, Func Offset: 0x254
	// Func End, Address: 0x3a5984, Func Offset: 0x284
}

// xPTankPoolFreeEnable__Fb
// Start address: 0x3a5990
void xPTankPoolFreeEnable(uint8 freeme)
{
	// Line 499, Address: 0x3a5990, Func Offset: 0
	// Func End, Address: 0x3a5998, Func Offset: 0x8
}

// xPTankPoolSceneExit__Fv
// Start address: 0x3a59a0
void xPTankPoolSceneExit()
{
	group_data* g;
	group_data* endg;
	ptank_context* p;
	ptank_context* endp;
	// Line 484, Address: 0x3a59a0, Func Offset: 0
	// Line 487, Address: 0x3a59bc, Func Offset: 0x1c
	// Line 484, Address: 0x3a59c0, Func Offset: 0x20
	// Line 487, Address: 0x3a59c4, Func Offset: 0x24
	// Line 488, Address: 0x3a59d8, Func Offset: 0x38
	// Line 489, Address: 0x3a59f0, Func Offset: 0x50
	// Line 490, Address: 0x3a5a50, Func Offset: 0xb0
	// Func End, Address: 0x3a5a74, Func Offset: 0xd4
}

// xPTankPoolSceneEnter__Fv
// Start address: 0x3a5a80
void xPTankPoolSceneEnter()
{
	group_data* it;
	group_data* end;
	// Line 459, Address: 0x3a5a80, Func Offset: 0
	// Line 461, Address: 0x3a5a84, Func Offset: 0x4
	// Line 459, Address: 0x3a5a88, Func Offset: 0x8
	// Line 461, Address: 0x3a5a9c, Func Offset: 0x1c
	// Line 463, Address: 0x3a5aa0, Func Offset: 0x20
	// Line 466, Address: 0x3a5aa8, Func Offset: 0x28
	// Line 472, Address: 0x3a5ac4, Func Offset: 0x44
	// Line 474, Address: 0x3a5b78, Func Offset: 0xf8
	// Line 481, Address: 0x3a5b88, Func Offset: 0x108
	// Func End, Address: 0x3a5bfc, Func Offset: 0x17c
}

// compare_ptanks__19@unnamed@xWad4_cpp@FPCvPCv
// Start address: 0x3a5c00
int32 compare_ptanks(void* e1, void* e2)
{
	ptank_context* p1;
	ptank_context* p2;
	RwTexture* tex1;
	RwTexture* tex2;
	// Line 424, Address: 0x3a5c00, Func Offset: 0
	// Line 427, Address: 0x3a5c08, Func Offset: 0x8
	// Line 429, Address: 0x3a5c18, Func Offset: 0x18
	// Line 433, Address: 0x3a5c28, Func Offset: 0x28
	// Line 435, Address: 0x3a5c38, Func Offset: 0x38
	// Line 436, Address: 0x3a5c40, Func Offset: 0x40
	// Line 428, Address: 0x3a5c48, Func Offset: 0x48
	// Line 430, Address: 0x3a5c50, Func Offset: 0x50
	// Line 434, Address: 0x3a5c58, Func Offset: 0x58
	// Line 439, Address: 0x3a5c60, Func Offset: 0x60
	// Line 440, Address: 0x3a5c64, Func Offset: 0x64
	// Line 439, Address: 0x3a5c68, Func Offset: 0x68
	// Line 440, Address: 0x3a5c6c, Func Offset: 0x6c
	// Line 439, Address: 0x3a5c70, Func Offset: 0x70
	// Line 440, Address: 0x3a5c74, Func Offset: 0x74
	// Line 439, Address: 0x3a5c78, Func Offset: 0x78
	// Line 440, Address: 0x3a5c7c, Func Offset: 0x7c
	// Line 439, Address: 0x3a5c80, Func Offset: 0x80
	// Line 440, Address: 0x3a5c84, Func Offset: 0x84
	// Line 442, Address: 0x3a5c88, Func Offset: 0x88
	// Line 446, Address: 0x3a5ca4, Func Offset: 0xa4
	// Func End, Address: 0x3a5cac, Func Offset: 0xac
}

// render_ptank__19@unnamed@xWad4_cpp@FRCQ219@unnamed@xWad4_cpp@13ptank_contextRi
// Start address: 0x3a5cb0
void render_ptank(ptank_context& context, int32& render_flags)
{
	int32 xor_flags;
	int32 noztest;
	int32 zwrite;
	uint32 oldtest;
	// Line 368, Address: 0x3a5cb0, Func Offset: 0
	// Line 369, Address: 0x3a5cd0, Func Offset: 0x20
	// Line 371, Address: 0x3a5cd4, Func Offset: 0x24
	// Line 378, Address: 0x3a5ce0, Func Offset: 0x30
	// Line 386, Address: 0x3a5cec, Func Offset: 0x3c
	// Line 388, Address: 0x3a5d10, Func Offset: 0x60
	// Line 391, Address: 0x3a5d2c, Func Offset: 0x7c
	// Line 393, Address: 0x3a5d38, Func Offset: 0x88
	// Line 394, Address: 0x3a5d44, Func Offset: 0x94
	// Line 398, Address: 0x3a5d4c, Func Offset: 0x9c
	// Line 399, Address: 0x3a5d58, Func Offset: 0xa8
	// Line 374, Address: 0x3a5d60, Func Offset: 0xb0
	// Line 373, Address: 0x3a5d64, Func Offset: 0xb4
	// Line 374, Address: 0x3a5d68, Func Offset: 0xb8
	// Line 399, Address: 0x3a5d6c, Func Offset: 0xbc
	// Line 375, Address: 0x3a5d7c, Func Offset: 0xcc
	// Line 399, Address: 0x3a5d80, Func Offset: 0xd0
	// Line 381, Address: 0x3a5d9c, Func Offset: 0xec
	// Line 399, Address: 0x3a5da0, Func Offset: 0xf0
	// Line 380, Address: 0x3a5da8, Func Offset: 0xf8
	// Line 381, Address: 0x3a5dac, Func Offset: 0xfc
	// Line 399, Address: 0x3a5db0, Func Offset: 0x100
	// Func End, Address: 0x3a5de0, Func Offset: 0x130
}

// create_ptank__19@unnamed@xWad4_cpp@FUi
// Start address: 0x3a5de0
RpAtomic* create_ptank(uint32 flags)
{
	RpAtomic* ptank;
	RwFrame* frame;
	RwTexCoords uv[2];
	// Line 328, Address: 0x3a5de0, Func Offset: 0
	// Line 340, Address: 0x3a5dec, Func Offset: 0xc
	// Line 328, Address: 0x3a5df0, Func Offset: 0x10
	// Line 340, Address: 0x3a5dfc, Func Offset: 0x1c
	// Line 341, Address: 0x3a5e0c, Func Offset: 0x2c
	// Line 342, Address: 0x3a5e14, Func Offset: 0x34
	// Line 343, Address: 0x3a5e1c, Func Offset: 0x3c
	// Line 344, Address: 0x3a5e24, Func Offset: 0x44
	// Line 345, Address: 0x3a5e38, Func Offset: 0x58
	// Line 344, Address: 0x3a5e3c, Func Offset: 0x5c
	// Line 345, Address: 0x3a5e44, Func Offset: 0x64
	// Line 344, Address: 0x3a5e48, Func Offset: 0x68
	// Line 345, Address: 0x3a5e70, Func Offset: 0x90
	// Line 346, Address: 0x3a5e78, Func Offset: 0x98
	// Line 348, Address: 0x3a5e7c, Func Offset: 0x9c
	// Line 346, Address: 0x3a5e80, Func Offset: 0xa0
	// Line 348, Address: 0x3a5e84, Func Offset: 0xa4
	// Line 346, Address: 0x3a5e88, Func Offset: 0xa8
	// Line 348, Address: 0x3a5e90, Func Offset: 0xb0
	// Line 354, Address: 0x3a5e98, Func Offset: 0xb8
	// Line 341, Address: 0x3a5ea0, Func Offset: 0xc0
	// Line 354, Address: 0x3a5ea8, Func Offset: 0xc8
	// Line 343, Address: 0x3a5eb0, Func Offset: 0xd0
	// Line 354, Address: 0x3a5eb8, Func Offset: 0xd8
	// Line 351, Address: 0x3a5ec4, Func Offset: 0xe4
	// Line 354, Address: 0x3a5ec8, Func Offset: 0xe8
	// Line 351, Address: 0x3a5f08, Func Offset: 0x128
	// Line 354, Address: 0x3a5f0c, Func Offset: 0x12c
	// Line 351, Address: 0x3a5f18, Func Offset: 0x138
	// Line 356, Address: 0x3a5f24, Func Offset: 0x144
	// Func End, Address: 0x3a5f38, Func Offset: 0x158
}

// init_groups__19@unnamed@xWad4_cpp@Fv
// Start address: 0x3a5f40
void init_groups()
{
	uint32 total;
	group_data* it;
	group_data* end;
	uint8* mem;
	group_data* it;
	group_data* end;
	// Line 301, Address: 0x3a5f40, Func Offset: 0
	// Line 304, Address: 0x3a5f44, Func Offset: 0x4
	// Line 301, Address: 0x3a5f48, Func Offset: 0x8
	// Line 304, Address: 0x3a5f4c, Func Offset: 0xc
	// Line 301, Address: 0x3a5f50, Func Offset: 0x10
	// Line 304, Address: 0x3a5f54, Func Offset: 0x14
	// Line 301, Address: 0x3a5f58, Func Offset: 0x18
	// Line 304, Address: 0x3a5f5c, Func Offset: 0x1c
	// Line 301, Address: 0x3a5f60, Func Offset: 0x20
	// Line 304, Address: 0x3a5f64, Func Offset: 0x24
	// Line 307, Address: 0x3a5f6c, Func Offset: 0x2c
	// Line 308, Address: 0x3a5f70, Func Offset: 0x30
	// Line 307, Address: 0x3a5f74, Func Offset: 0x34
	// Line 308, Address: 0x3a5f78, Func Offset: 0x38
	// Line 311, Address: 0x3a5f88, Func Offset: 0x48
	// Line 315, Address: 0x3a5fa4, Func Offset: 0x64
	// Line 317, Address: 0x3a5fbc, Func Offset: 0x7c
	// Line 323, Address: 0x3a5fc0, Func Offset: 0x80
	// Line 317, Address: 0x3a5fc4, Func Offset: 0x84
	// Line 318, Address: 0x3a5fcc, Func Offset: 0x8c
	// Line 319, Address: 0x3a5fd0, Func Offset: 0x90
	// Line 320, Address: 0x3a5fdc, Func Offset: 0x9c
	// Line 321, Address: 0x3a5fe0, Func Offset: 0xa0
	// Line 322, Address: 0x3a5fec, Func Offset: 0xac
	// Line 323, Address: 0x3a5ff4, Func Offset: 0xb4
	// Line 324, Address: 0x3a5ffc, Func Offset: 0xbc
	// Line 325, Address: 0x3a6008, Func Offset: 0xc8
	// Func End, Address: 0x3a6020, Func Offset: 0xe0
}

// sort_buckets__19@unnamed@xWad4_cpp@FRQ219@unnamed@xWad4_cpp@10group_data
// Start address: 0x3a6020
void sort_buckets(group_data& group)
{
	ptank_context* it;
	ptank_context* endp;
	RwTexture* texture;
	ptank_context** bucket;
	ptank_context** end;
	ptank_context* front;
	// Line 267, Address: 0x3a6020, Func Offset: 0
	// Line 268, Address: 0x3a6024, Func Offset: 0x4
	// Line 267, Address: 0x3a6028, Func Offset: 0x8
	// Line 268, Address: 0x3a6030, Func Offset: 0x10
	// Line 269, Address: 0x3a6044, Func Offset: 0x24
	// Line 270, Address: 0x3a604c, Func Offset: 0x2c
	// Line 272, Address: 0x3a6064, Func Offset: 0x44
	// Line 274, Address: 0x3a6078, Func Offset: 0x58
	// Line 281, Address: 0x3a6080, Func Offset: 0x60
	// Line 280, Address: 0x3a6084, Func Offset: 0x64
	// Line 281, Address: 0x3a6088, Func Offset: 0x68
	// Line 282, Address: 0x3a6094, Func Offset: 0x74
	// Line 284, Address: 0x3a60a0, Func Offset: 0x80
	// Line 287, Address: 0x3a60a4, Func Offset: 0x84
	// Line 292, Address: 0x3a60c0, Func Offset: 0xa0
	// Line 276, Address: 0x3a60dc, Func Offset: 0xbc
	// Line 292, Address: 0x3a60e0, Func Offset: 0xc0
	// Line 294, Address: 0x3a60ec, Func Offset: 0xcc
	// Line 295, Address: 0x3a60f0, Func Offset: 0xd0
	// Line 296, Address: 0x3a60f8, Func Offset: 0xd8
	// Line 297, Address: 0x3a60fc, Func Offset: 0xdc
	// Line 298, Address: 0x3a6108, Func Offset: 0xe8
	// Line 287, Address: 0x3a613c, Func Offset: 0x11c
	// Line 298, Address: 0x3a6140, Func Offset: 0x120
	// Func End, Address: 0x3a6170, Func Offset: 0x150
}

