



void FastS16weight4(float32* dest, int16** v_array, int16* weight, int32 count, float32 scale);
void FastS16weight2(float32* dest, int16** v_array, int16* weight, int32 count, float32 scale);
void FastS16unpack(float32* dest, int16* v, int32 count, float32 scale);
void iMorphRender(RpAtomic* model, RwMatrixTag* mat, int16** v_array, int16* weight, uint32 normals, float32 scale);
void iMorphOptimize(RpAtomic* model, int32 normals);
void MorphCommon(RpAtomic* model, RwMatrixTag* mat, int16** v_array, int16* weight, uint32 normals, float32 scale, int32 dorender);

// FastS16weight4__FPfPPsPsif
// Start address: 0x4aa9c0
void FastS16weight4(float32* dest, int16** v_array, int16* weight, int32 count, float32 scale)
{
	// Line 545, Address: 0x4aa9c0, Func Offset: 0
	// Line 561, Address: 0x4aa9c4, Func Offset: 0x4
	// Line 546, Address: 0x4aa9c8, Func Offset: 0x8
	// Line 556, Address: 0x4aa9cc, Func Offset: 0xc
	// Line 547, Address: 0x4aa9d0, Func Offset: 0x10
	// Line 557, Address: 0x4aa9d4, Func Offset: 0x14
	// Line 548, Address: 0x4aa9d8, Func Offset: 0x18
	// Line 558, Address: 0x4aa9dc, Func Offset: 0x1c
	// Line 563, Address: 0x4aa9e0, Func Offset: 0x20
	// Line 559, Address: 0x4aa9e4, Func Offset: 0x24
	// Line 564, Address: 0x4aa9e8, Func Offset: 0x28
	// Line 561, Address: 0x4aa9ec, Func Offset: 0x2c
	// Line 549, Address: 0x4aa9f0, Func Offset: 0x30
	// Line 550, Address: 0x4aa9f4, Func Offset: 0x34
	// Line 551, Address: 0x4aa9f8, Func Offset: 0x38
	// Line 552, Address: 0x4aa9fc, Func Offset: 0x3c
	// Line 562, Address: 0x4aaa00, Func Offset: 0x40
	// Line 553, Address: 0x4aaa04, Func Offset: 0x44
	// Line 565, Address: 0x4aaa08, Func Offset: 0x48
	// Line 566, Address: 0x4aaa0c, Func Offset: 0x4c
	// Line 570, Address: 0x4aaa14, Func Offset: 0x54
	// Line 571, Address: 0x4aaa18, Func Offset: 0x58
	// Line 572, Address: 0x4aaa1c, Func Offset: 0x5c
	// Line 575, Address: 0x4aaa20, Func Offset: 0x60
	// Line 576, Address: 0x4aaa24, Func Offset: 0x64
	// Line 577, Address: 0x4aaa28, Func Offset: 0x68
	// Line 578, Address: 0x4aaa2c, Func Offset: 0x6c
	// Line 579, Address: 0x4aaa30, Func Offset: 0x70
	// Line 580, Address: 0x4aaa34, Func Offset: 0x74
	// Line 581, Address: 0x4aaa38, Func Offset: 0x78
	// Line 582, Address: 0x4aaa3c, Func Offset: 0x7c
	// Line 583, Address: 0x4aaa40, Func Offset: 0x80
	// Line 584, Address: 0x4aaa44, Func Offset: 0x84
	// Line 585, Address: 0x4aaa48, Func Offset: 0x88
	// Line 586, Address: 0x4aaa4c, Func Offset: 0x8c
	// Line 587, Address: 0x4aaa50, Func Offset: 0x90
	// Line 590, Address: 0x4aaa54, Func Offset: 0x94
	// Line 591, Address: 0x4aaa58, Func Offset: 0x98
	// Line 592, Address: 0x4aaa5c, Func Offset: 0x9c
	// Line 588, Address: 0x4aaa60, Func Offset: 0xa0
	// Line 589, Address: 0x4aaa64, Func Offset: 0xa4
	// Line 594, Address: 0x4aaa68, Func Offset: 0xa8
	// Line 593, Address: 0x4aaa6c, Func Offset: 0xac
	// Line 595, Address: 0x4aaa70, Func Offset: 0xb0
	// Line 597, Address: 0x4aaa74, Func Offset: 0xb4
	// Line 596, Address: 0x4aaa78, Func Offset: 0xb8
	// Line 599, Address: 0x4aaa7c, Func Offset: 0xbc
	// Line 600, Address: 0x4aaa84, Func Offset: 0xc4
	// Line 602, Address: 0x4aaa88, Func Offset: 0xc8
	// Line 603, Address: 0x4aaa8c, Func Offset: 0xcc
	// Line 605, Address: 0x4aaa94, Func Offset: 0xd4
	// Line 606, Address: 0x4aaa9c, Func Offset: 0xdc
	// Line 608, Address: 0x4aaaa0, Func Offset: 0xe0
	// Line 609, Address: 0x4aaaa4, Func Offset: 0xe4
	// Line 611, Address: 0x4aaaa8, Func Offset: 0xe8
	// Line 615, Address: 0x4aaab0, Func Offset: 0xf0
	// Line 617, Address: 0x4aaab4, Func Offset: 0xf4
	// Line 618, Address: 0x4aaab8, Func Offset: 0xf8
	// Line 619, Address: 0x4aaac0, Func Offset: 0x100
	// Line 620, Address: 0x4aaac4, Func Offset: 0x104
	// Line 621, Address: 0x4aaac8, Func Offset: 0x108
	// Line 622, Address: 0x4aaacc, Func Offset: 0x10c
	// Line 625, Address: 0x4aaad0, Func Offset: 0x110
	// Line 626, Address: 0x4aaad8, Func Offset: 0x118
	// Line 628, Address: 0x4aaadc, Func Offset: 0x11c
	// Line 632, Address: 0x4aaae4, Func Offset: 0x124
	// Line 633, Address: 0x4aaae8, Func Offset: 0x128
	// Line 639, Address: 0x4aaaec, Func Offset: 0x12c
	// Func End, Address: 0x4aaaf4, Func Offset: 0x134
}

// FastS16weight2__FPfPPsPsif
// Start address: 0x4aab00
void FastS16weight2(float32* dest, int16** v_array, int16* weight, int32 count, float32 scale)
{
	// Line 416, Address: 0x4aab00, Func Offset: 0
	// Line 427, Address: 0x4aab04, Func Offset: 0x4
	// Line 417, Address: 0x4aab08, Func Offset: 0x8
	// Line 422, Address: 0x4aab0c, Func Offset: 0xc
	// Line 423, Address: 0x4aab10, Func Offset: 0x10
	// Line 427, Address: 0x4aab14, Func Offset: 0x14
	// Line 424, Address: 0x4aab18, Func Offset: 0x18
	// Line 425, Address: 0x4aab1c, Func Offset: 0x1c
	// Line 429, Address: 0x4aab20, Func Offset: 0x20
	// Line 418, Address: 0x4aab24, Func Offset: 0x24
	// Line 419, Address: 0x4aab28, Func Offset: 0x28
	// Line 428, Address: 0x4aab2c, Func Offset: 0x2c
	// Line 430, Address: 0x4aab30, Func Offset: 0x30
	// Line 434, Address: 0x4aab38, Func Offset: 0x38
	// Line 435, Address: 0x4aab3c, Func Offset: 0x3c
	// Line 436, Address: 0x4aab40, Func Offset: 0x40
	// Line 439, Address: 0x4aab44, Func Offset: 0x44
	// Line 440, Address: 0x4aab48, Func Offset: 0x48
	// Line 441, Address: 0x4aab4c, Func Offset: 0x4c
	// Line 442, Address: 0x4aab50, Func Offset: 0x50
	// Line 443, Address: 0x4aab54, Func Offset: 0x54
	// Line 444, Address: 0x4aab58, Func Offset: 0x58
	// Line 445, Address: 0x4aab5c, Func Offset: 0x5c
	// Line 447, Address: 0x4aab60, Func Offset: 0x60
	// Line 448, Address: 0x4aab64, Func Offset: 0x64
	// Line 446, Address: 0x4aab68, Func Offset: 0x68
	// Line 449, Address: 0x4aab6c, Func Offset: 0x6c
	// Line 451, Address: 0x4aab70, Func Offset: 0x70
	// Line 450, Address: 0x4aab74, Func Offset: 0x74
	// Line 453, Address: 0x4aab78, Func Offset: 0x78
	// Line 454, Address: 0x4aab80, Func Offset: 0x80
	// Line 456, Address: 0x4aab84, Func Offset: 0x84
	// Line 457, Address: 0x4aab88, Func Offset: 0x88
	// Line 459, Address: 0x4aab90, Func Offset: 0x90
	// Line 460, Address: 0x4aab98, Func Offset: 0x98
	// Line 462, Address: 0x4aab9c, Func Offset: 0x9c
	// Line 463, Address: 0x4aaba0, Func Offset: 0xa0
	// Line 465, Address: 0x4aaba4, Func Offset: 0xa4
	// Line 469, Address: 0x4aabac, Func Offset: 0xac
	// Line 471, Address: 0x4aabb0, Func Offset: 0xb0
	// Line 472, Address: 0x4aabb4, Func Offset: 0xb4
	// Line 473, Address: 0x4aabbc, Func Offset: 0xbc
	// Line 474, Address: 0x4aabc0, Func Offset: 0xc0
	// Line 475, Address: 0x4aabc4, Func Offset: 0xc4
	// Line 476, Address: 0x4aabc8, Func Offset: 0xc8
	// Line 479, Address: 0x4aabcc, Func Offset: 0xcc
	// Line 480, Address: 0x4aabd4, Func Offset: 0xd4
	// Line 482, Address: 0x4aabd8, Func Offset: 0xd8
	// Line 486, Address: 0x4aabe0, Func Offset: 0xe0
	// Line 487, Address: 0x4aabe4, Func Offset: 0xe4
	// Line 493, Address: 0x4aabe8, Func Offset: 0xe8
	// Func End, Address: 0x4aabf0, Func Offset: 0xf0
}

// FastS16unpack__FPfPsif
// Start address: 0x4aabf0
void FastS16unpack(float32* dest, int16* v, int32 count, float32 scale)
{
	// Line 288, Address: 0x4aabf0, Func Offset: 0
	// Line 290, Address: 0x4aabf4, Func Offset: 0x4
	// Line 288, Address: 0x4aabf8, Func Offset: 0x8
	// Line 291, Address: 0x4aabfc, Func Offset: 0xc
	// Line 292, Address: 0x4aac00, Func Offset: 0x10
	// Line 288, Address: 0x4aac04, Func Offset: 0x14
	// Line 293, Address: 0x4aac08, Func Offset: 0x18
	// Line 294, Address: 0x4aac0c, Func Offset: 0x1c
	// Line 295, Address: 0x4aac10, Func Offset: 0x20
	// Line 299, Address: 0x4aac18, Func Offset: 0x28
	// Line 300, Address: 0x4aac1c, Func Offset: 0x2c
	// Line 301, Address: 0x4aac20, Func Offset: 0x30
	// Line 304, Address: 0x4aac24, Func Offset: 0x34
	// Line 306, Address: 0x4aac28, Func Offset: 0x38
	// Line 307, Address: 0x4aac2c, Func Offset: 0x3c
	// Line 308, Address: 0x4aac30, Func Offset: 0x40
	// Line 309, Address: 0x4aac34, Func Offset: 0x44
	// Line 305, Address: 0x4aac38, Func Offset: 0x48
	// Line 310, Address: 0x4aac3c, Func Offset: 0x4c
	// Line 312, Address: 0x4aac40, Func Offset: 0x50
	// Line 311, Address: 0x4aac44, Func Offset: 0x54
	// Line 314, Address: 0x4aac48, Func Offset: 0x58
	// Line 315, Address: 0x4aac50, Func Offset: 0x60
	// Line 317, Address: 0x4aac54, Func Offset: 0x64
	// Line 318, Address: 0x4aac58, Func Offset: 0x68
	// Line 320, Address: 0x4aac60, Func Offset: 0x70
	// Line 321, Address: 0x4aac68, Func Offset: 0x78
	// Line 323, Address: 0x4aac6c, Func Offset: 0x7c
	// Line 324, Address: 0x4aac70, Func Offset: 0x80
	// Line 326, Address: 0x4aac74, Func Offset: 0x84
	// Line 330, Address: 0x4aac7c, Func Offset: 0x8c
	// Line 332, Address: 0x4aac80, Func Offset: 0x90
	// Line 333, Address: 0x4aac84, Func Offset: 0x94
	// Line 334, Address: 0x4aac8c, Func Offset: 0x9c
	// Line 335, Address: 0x4aac90, Func Offset: 0xa0
	// Line 336, Address: 0x4aac94, Func Offset: 0xa4
	// Line 337, Address: 0x4aac98, Func Offset: 0xa8
	// Line 340, Address: 0x4aac9c, Func Offset: 0xac
	// Line 341, Address: 0x4aaca4, Func Offset: 0xb4
	// Line 343, Address: 0x4aaca8, Func Offset: 0xb8
	// Line 347, Address: 0x4aacb0, Func Offset: 0xc0
	// Line 348, Address: 0x4aacb4, Func Offset: 0xc4
	// Line 354, Address: 0x4aacb8, Func Offset: 0xc8
	// Func End, Address: 0x4aacc0, Func Offset: 0xd0
}

// iMorphRender__FP8RpAtomicP11RwMatrixTagPPsPsUif
// Start address: 0x4aacc0
void iMorphRender(RpAtomic* model, RwMatrixTag* mat, int16** v_array, int16* weight, uint32 normals, float32 scale)
{
	// Line 241, Address: 0x4aacc0, Func Offset: 0
	// Line 244, Address: 0x4aacc8, Func Offset: 0x8
	// Line 247, Address: 0x4aacd4, Func Offset: 0x14
	// Line 248, Address: 0x4aacdc, Func Offset: 0x1c
	// Line 249, Address: 0x4aace4, Func Offset: 0x24
	// Line 251, Address: 0x4aace8, Func Offset: 0x28
	// Func End, Address: 0x4aacf4, Func Offset: 0x34
}

// iMorphOptimize__FP8RpAtomici
// Start address: 0x4aad00
void iMorphOptimize(RpAtomic* model, int32 normals)
{
	RpGeometry* geom;
	int32 usridx;
	RpUserDataArray* usr;
	// Line 207, Address: 0x4aad00, Func Offset: 0
	// Line 209, Address: 0x4aad10, Func Offset: 0x10
	// Line 216, Address: 0x4aad14, Func Offset: 0x14
	// Line 217, Address: 0x4aad18, Func Offset: 0x18
	// Line 221, Address: 0x4aad28, Func Offset: 0x28
	// Line 224, Address: 0x4aad58, Func Offset: 0x58
	// Line 225, Address: 0x4aad64, Func Offset: 0x64
	// Line 226, Address: 0x4aad74, Func Offset: 0x74
	// Func End, Address: 0x4aad88, Func Offset: 0x88
}

// MorphCommon__FP8RpAtomicP11RwMatrixTagPPsPsUifi
// Start address: 0x4aad90
void MorphCommon(RpAtomic* model, RwMatrixTag* mat, int16** v_array, int16* weight, uint32 normals, float32 scale, int32 dorender)
{
	RpGeometry* s_geom'450;
	RpMorphTarget* s_tgt'449;
	float32* s_nTemp'448;
	uint32 i;
	uint32 a;
	int16 wa[4];
	int16* va[4];
	int32 wsum;
	RwV3d* vold;
	RwV3d* nold;
	int32 lockMode;
	void* temp_scratch;
	RpUserDataArray* usr;
	DirtyMorph* dm;
	// Line 31, Address: 0x4aad90, Func Offset: 0
	// Line 37, Address: 0x4aada0, Func Offset: 0x10
	// Line 31, Address: 0x4aada4, Func Offset: 0x14
	// Line 45, Address: 0x4aadc0, Func Offset: 0x30
	// Line 31, Address: 0x4aadc4, Func Offset: 0x34
	// Line 40, Address: 0x4aadd4, Func Offset: 0x44
	// Line 35, Address: 0x4aade0, Func Offset: 0x50
	// Line 40, Address: 0x4aade4, Func Offset: 0x54
	// Line 41, Address: 0x4aade8, Func Offset: 0x58
	// Line 42, Address: 0x4aadf0, Func Offset: 0x60
	// Line 43, Address: 0x4aadf8, Func Offset: 0x68
	// Line 45, Address: 0x4aadfc, Func Offset: 0x6c
	// Line 46, Address: 0x4aae10, Func Offset: 0x80
	// Line 45, Address: 0x4aae14, Func Offset: 0x84
	// Line 46, Address: 0x4aae18, Func Offset: 0x88
	// Line 47, Address: 0x4aae20, Func Offset: 0x90
	// Line 46, Address: 0x4aae24, Func Offset: 0x94
	// Line 48, Address: 0x4aae2c, Func Offset: 0x9c
	// Line 53, Address: 0x4aae40, Func Offset: 0xb0
	// Line 51, Address: 0x4aae48, Func Offset: 0xb8
	// Line 52, Address: 0x4aae4c, Func Offset: 0xbc
	// Line 53, Address: 0x4aae50, Func Offset: 0xc0
	// Line 54, Address: 0x4aae60, Func Offset: 0xd0
	// Line 55, Address: 0x4aae74, Func Offset: 0xe4
	// Line 58, Address: 0x4aae78, Func Offset: 0xe8
	// Line 55, Address: 0x4aae7c, Func Offset: 0xec
	// Line 60, Address: 0x4aae94, Func Offset: 0x104
	// Line 58, Address: 0x4aaea0, Func Offset: 0x110
	// Line 60, Address: 0x4aaea4, Func Offset: 0x114
	// Line 64, Address: 0x4aaeac, Func Offset: 0x11c
	// Line 65, Address: 0x4aaebc, Func Offset: 0x12c
	// Line 66, Address: 0x4aaec8, Func Offset: 0x138
	// Line 69, Address: 0x4aaecc, Func Offset: 0x13c
	// Line 70, Address: 0x4aaed0, Func Offset: 0x140
	// Line 71, Address: 0x4aaedc, Func Offset: 0x14c
	// Line 72, Address: 0x4aaef8, Func Offset: 0x168
	// Line 71, Address: 0x4aaefc, Func Offset: 0x16c
	// Line 74, Address: 0x4aaf00, Func Offset: 0x170
	// Line 82, Address: 0x4aaf08, Func Offset: 0x178
	// Line 86, Address: 0x4aaf44, Func Offset: 0x1b4
	// Line 87, Address: 0x4aaf60, Func Offset: 0x1d0
	// Line 89, Address: 0x4aaf80, Func Offset: 0x1f0
	// Line 87, Address: 0x4aaf84, Func Offset: 0x1f4
	// Line 89, Address: 0x4aaf88, Func Offset: 0x1f8
	// Line 87, Address: 0x4aaf8c, Func Offset: 0x1fc
	// Line 89, Address: 0x4aaf94, Func Offset: 0x204
	// Line 91, Address: 0x4aafa0, Func Offset: 0x210
	// Line 93, Address: 0x4aafa8, Func Offset: 0x218
	// Line 96, Address: 0x4aafb4, Func Offset: 0x224
	// Line 97, Address: 0x4aafc0, Func Offset: 0x230
	// Line 98, Address: 0x4aafd4, Func Offset: 0x244
	// Line 75, Address: 0x4aafe4, Func Offset: 0x254
	// Line 98, Address: 0x4aafe8, Func Offset: 0x258
	// Line 75, Address: 0x4aafec, Func Offset: 0x25c
	// Line 98, Address: 0x4aaff0, Func Offset: 0x260
	// Line 76, Address: 0x4aaff4, Func Offset: 0x264
	// Line 98, Address: 0x4aaff8, Func Offset: 0x268
	// Line 77, Address: 0x4ab004, Func Offset: 0x274
	// Line 98, Address: 0x4ab008, Func Offset: 0x278
	// Line 94, Address: 0x4ab064, Func Offset: 0x2d4
	// Line 98, Address: 0x4ab068, Func Offset: 0x2d8
	// Line 94, Address: 0x4ab07c, Func Offset: 0x2ec
	// Line 98, Address: 0x4ab080, Func Offset: 0x2f0
	// Line 94, Address: 0x4ab11c, Func Offset: 0x38c
	// Line 98, Address: 0x4ab120, Func Offset: 0x390
	// Line 94, Address: 0x4ab12c, Func Offset: 0x39c
	// Line 103, Address: 0x4ab134, Func Offset: 0x3a4
	// Line 108, Address: 0x4ab138, Func Offset: 0x3a8
	// Line 105, Address: 0x4ab13c, Func Offset: 0x3ac
	// Line 108, Address: 0x4ab140, Func Offset: 0x3b0
	// Line 111, Address: 0x4ab258, Func Offset: 0x4c8
	// Line 115, Address: 0x4ab264, Func Offset: 0x4d4
	// Line 121, Address: 0x4ab270, Func Offset: 0x4e0
	// Line 153, Address: 0x4ab27c, Func Offset: 0x4ec
	// Line 154, Address: 0x4ab288, Func Offset: 0x4f8
	// Line 155, Address: 0x4ab2bc, Func Offset: 0x52c
	// Line 157, Address: 0x4ab2dc, Func Offset: 0x54c
	// Line 158, Address: 0x4ab2e8, Func Offset: 0x558
	// Line 159, Address: 0x4ab2f4, Func Offset: 0x564
	// Line 158, Address: 0x4ab2f8, Func Offset: 0x568
	// Line 159, Address: 0x4ab318, Func Offset: 0x588
	// Line 161, Address: 0x4ab410, Func Offset: 0x680
	// Line 162, Address: 0x4ab41c, Func Offset: 0x68c
	// Line 163, Address: 0x4ab450, Func Offset: 0x6c0
	// Line 137, Address: 0x4ab4b4, Func Offset: 0x724
	// Line 163, Address: 0x4ab4b8, Func Offset: 0x728
	// Line 142, Address: 0x4ab4c8, Func Offset: 0x738
	// Line 143, Address: 0x4ab4cc, Func Offset: 0x73c
	// Line 123, Address: 0x4ab4d4, Func Offset: 0x744
	// Line 163, Address: 0x4ab4d8, Func Offset: 0x748
	// Line 131, Address: 0x4ab4ec, Func Offset: 0x75c
	// Line 163, Address: 0x4ab4f0, Func Offset: 0x760
	// Line 131, Address: 0x4ab4f4, Func Offset: 0x764
	// Line 163, Address: 0x4ab4f8, Func Offset: 0x768
	// Line 133, Address: 0x4ab500, Func Offset: 0x770
	// Line 163, Address: 0x4ab504, Func Offset: 0x774
	// Line 133, Address: 0x4ab510, Func Offset: 0x780
	// Line 163, Address: 0x4ab514, Func Offset: 0x784
	// Line 145, Address: 0x4ab534, Func Offset: 0x7a4
	// Line 163, Address: 0x4ab538, Func Offset: 0x7a8
	// Line 145, Address: 0x4ab53c, Func Offset: 0x7ac
	// Line 163, Address: 0x4ab540, Func Offset: 0x7b0
	// Line 147, Address: 0x4ab56c, Func Offset: 0x7dc
	// Line 163, Address: 0x4ab570, Func Offset: 0x7e0
	// Line 153, Address: 0x4ab5a0, Func Offset: 0x810
	// Line 163, Address: 0x4ab5a4, Func Offset: 0x814
	// Line 153, Address: 0x4ab5b4, Func Offset: 0x824
	// Line 163, Address: 0x4ab5b8, Func Offset: 0x828
	// Line 153, Address: 0x4ab5c4, Func Offset: 0x834
	// Line 161, Address: 0x4ab5cc, Func Offset: 0x83c
	// Line 163, Address: 0x4ab5d0, Func Offset: 0x840
	// Line 161, Address: 0x4ab5e0, Func Offset: 0x850
	// Line 163, Address: 0x4ab5e4, Func Offset: 0x854
	// Line 167, Address: 0x4ab5f0, Func Offset: 0x860
	// Line 168, Address: 0x4ab5fc, Func Offset: 0x86c
	// Line 169, Address: 0x4ab604, Func Offset: 0x874
	// Line 172, Address: 0x4ab610, Func Offset: 0x880
	// Line 173, Address: 0x4ab618, Func Offset: 0x888
	// Line 195, Address: 0x4ab62c, Func Offset: 0x89c
	// Line 196, Address: 0x4ab634, Func Offset: 0x8a4
	// Line 197, Address: 0x4ab63c, Func Offset: 0x8ac
	// Line 170, Address: 0x4ab678, Func Offset: 0x8e8
	// Line 197, Address: 0x4ab67c, Func Offset: 0x8ec
	// Line 170, Address: 0x4ab690, Func Offset: 0x900
	// Line 197, Address: 0x4ab694, Func Offset: 0x904
	// Line 170, Address: 0x4ab730, Func Offset: 0x9a0
	// Line 197, Address: 0x4ab734, Func Offset: 0x9a4
	// Line 170, Address: 0x4ab740, Func Offset: 0x9b0
	// Line 197, Address: 0x4ab748, Func Offset: 0x9b8
	// Line 187, Address: 0x4ab7b0, Func Offset: 0xa20
	// Line 197, Address: 0x4ab7b4, Func Offset: 0xa24
	// Line 187, Address: 0x4ab7c8, Func Offset: 0xa38
	// Line 197, Address: 0x4ab7cc, Func Offset: 0xa3c
	// Line 187, Address: 0x4ab898, Func Offset: 0xb08
	// Line 197, Address: 0x4ab89c, Func Offset: 0xb0c
	// Line 187, Address: 0x4ab8a8, Func Offset: 0xb18
	// Line 197, Address: 0x4ab8b0, Func Offset: 0xb20
	// Func End, Address: 0x4ab8e4, Func Offset: 0xb54
}

