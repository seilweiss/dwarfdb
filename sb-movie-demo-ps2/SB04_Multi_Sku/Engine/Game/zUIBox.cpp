



void zUIBox_Init(xBase& data, xDynAsset& asset);
void RenderPart(int32 p, float32 x1, float32 y1, float32 x2, float32 y2, float32 uScale, float32 vScale, float32 rotation, float32 xPivot, float32 yPivot);
void DoRender();
void DoApplyMotionFrame(zUIMotionFrame* frame);
void DoHandleEvent(xBase* from, uint32 toEvent, float32* toParam, xBase* toParamWidget, uint32 toParamWidgetID);
void DoResetMotion();
void DoReset();
void DoInit();

// zUIBox_Init__FR5xBaseR9xDynAssetUi
// Start address: 0x2b9850
void zUIBox_Init(xBase& data, xDynAsset& asset)
{
	// Line 513, Address: 0x2b9850, Func Offset: 0
	// Line 514, Address: 0x2b9868, Func Offset: 0x18
	// Line 515, Address: 0x2b9bcc, Func Offset: 0x37c
	// Line 514, Address: 0x2b9bec, Func Offset: 0x39c
	// Line 515, Address: 0x2b9bf4, Func Offset: 0x3a4
	// Line 514, Address: 0x2b9bf8, Func Offset: 0x3a8
	// Line 515, Address: 0x2b9bfc, Func Offset: 0x3ac
	// Line 514, Address: 0x2b9c0c, Func Offset: 0x3bc
	// Line 515, Address: 0x2b9c10, Func Offset: 0x3c0
	// Line 514, Address: 0x2b9c18, Func Offset: 0x3c8
	// Line 515, Address: 0x2b9c20, Func Offset: 0x3d0
	// Line 514, Address: 0x2b9cc0, Func Offset: 0x470
	// Line 515, Address: 0x2b9cc4, Func Offset: 0x474
	// Func End, Address: 0x2b9cf0, Func Offset: 0x4a0
}

// RenderPart__6zUIBoxCFifffffffff
// Start address: 0x2b9cf0
void zUIBox::RenderPart(int32 p, float32 x1, float32 y1, float32 x2, float32 y2, float32 uScale, float32 vScale, float32 rotation, float32 xPivot, float32 yPivot)
{
	Part& part;
	float32 ulx;
	float32 uly;
	float32 urx;
	float32 ury;
	float32 llx;
	float32 lly;
	float32 lrx;
	float32 lry;
	float32 tempScale;
	RwTexture* pTexture;
	float32 z;
	float32 cz;
	float32 cooz;
	uint16 indexes[4];
	RwSky2DVertex vertex[4];
	// Line 234, Address: 0x2b9cf0, Func Offset: 0
	// Line 235, Address: 0x2b9d34, Func Offset: 0x44
	// Line 236, Address: 0x2b9d64, Func Offset: 0x74
	// Line 244, Address: 0x2b9d74, Func Offset: 0x84
	// Line 246, Address: 0x2b9d88, Func Offset: 0x98
	// Line 247, Address: 0x2b9d94, Func Offset: 0xa4
	// Line 249, Address: 0x2b9dec, Func Offset: 0xfc
	// Line 250, Address: 0x2b9e4c, Func Offset: 0x15c
	// Line 254, Address: 0x2b9e5c, Func Offset: 0x16c
	// Line 250, Address: 0x2b9e60, Func Offset: 0x170
	// Line 254, Address: 0x2b9e68, Func Offset: 0x178
	// Line 250, Address: 0x2b9e6c, Func Offset: 0x17c
	// Line 255, Address: 0x2b9e70, Func Offset: 0x180
	// Line 252, Address: 0x2b9e74, Func Offset: 0x184
	// Line 253, Address: 0x2b9e78, Func Offset: 0x188
	// Line 258, Address: 0x2b9e7c, Func Offset: 0x18c
	// Line 259, Address: 0x2b9e84, Func Offset: 0x194
	// Line 262, Address: 0x2b9e98, Func Offset: 0x1a8
	// Line 263, Address: 0x2b9eb4, Func Offset: 0x1c4
	// Line 269, Address: 0x2b9ebc, Func Offset: 0x1cc
	// Line 263, Address: 0x2b9ec0, Func Offset: 0x1d0
	// Line 265, Address: 0x2b9ec4, Func Offset: 0x1d4
	// Line 266, Address: 0x2b9ed4, Func Offset: 0x1e4
	// Line 272, Address: 0x2b9ed8, Func Offset: 0x1e8
	// Line 268, Address: 0x2b9ee0, Func Offset: 0x1f0
	// Line 271, Address: 0x2b9ee4, Func Offset: 0x1f4
	// Line 266, Address: 0x2b9ee8, Func Offset: 0x1f8
	// Line 268, Address: 0x2b9eec, Func Offset: 0x1fc
	// Line 271, Address: 0x2b9ef0, Func Offset: 0x200
	// Line 269, Address: 0x2b9ef4, Func Offset: 0x204
	// Line 272, Address: 0x2b9ef8, Func Offset: 0x208
	// Line 287, Address: 0x2b9f00, Func Offset: 0x210
	// Line 288, Address: 0x2b9f44, Func Offset: 0x254
	// Line 289, Address: 0x2b9f84, Func Offset: 0x294
	// Line 290, Address: 0x2b9fc4, Func Offset: 0x2d4
	// Line 291, Address: 0x2ba004, Func Offset: 0x314
	// Line 292, Address: 0x2ba044, Func Offset: 0x354
	// Line 293, Address: 0x2ba084, Func Offset: 0x394
	// Line 294, Address: 0x2ba0c4, Func Offset: 0x3d4
	// Line 297, Address: 0x2ba104, Func Offset: 0x414
	// Line 294, Address: 0x2ba108, Func Offset: 0x418
	// Line 297, Address: 0x2ba10c, Func Offset: 0x41c
	// Line 306, Address: 0x2ba120, Func Offset: 0x430
	// Line 307, Address: 0x2ba130, Func Offset: 0x440
	// Line 313, Address: 0x2ba138, Func Offset: 0x448
	// Line 307, Address: 0x2ba13c, Func Offset: 0x44c
	// Line 313, Address: 0x2ba144, Func Offset: 0x454
	// Line 318, Address: 0x2ba150, Func Offset: 0x460
	// Line 319, Address: 0x2ba180, Func Offset: 0x490
	// Line 323, Address: 0x2ba1b0, Func Offset: 0x4c0
	// Line 324, Address: 0x2ba1b8, Func Offset: 0x4c8
	// Line 325, Address: 0x2ba1d8, Func Offset: 0x4e8
	// Line 330, Address: 0x2ba20c, Func Offset: 0x51c
	// Line 331, Address: 0x2ba228, Func Offset: 0x538
	// Line 425, Address: 0x2ba22c, Func Offset: 0x53c
	// Line 427, Address: 0x2ba230, Func Offset: 0x540
	// Line 425, Address: 0x2ba234, Func Offset: 0x544
	// Line 426, Address: 0x2ba238, Func Offset: 0x548
	// Line 425, Address: 0x2ba23c, Func Offset: 0x54c
	// Line 428, Address: 0x2ba240, Func Offset: 0x550
	// Line 429, Address: 0x2ba244, Func Offset: 0x554
	// Line 333, Address: 0x2ba248, Func Offset: 0x558
	// Line 425, Address: 0x2ba250, Func Offset: 0x560
	// Line 430, Address: 0x2ba254, Func Offset: 0x564
	// Line 333, Address: 0x2ba258, Func Offset: 0x568
	// Line 425, Address: 0x2ba25c, Func Offset: 0x56c
	// Line 426, Address: 0x2ba264, Func Offset: 0x574
	// Line 331, Address: 0x2ba270, Func Offset: 0x580
	// Line 427, Address: 0x2ba274, Func Offset: 0x584
	// Line 428, Address: 0x2ba278, Func Offset: 0x588
	// Line 426, Address: 0x2ba27c, Func Offset: 0x58c
	// Line 429, Address: 0x2ba280, Func Offset: 0x590
	// Line 430, Address: 0x2ba28c, Func Offset: 0x59c
	// Line 431, Address: 0x2ba298, Func Offset: 0x5a8
	// Line 433, Address: 0x2ba384, Func Offset: 0x694
	// Line 431, Address: 0x2ba388, Func Offset: 0x698
	// Line 433, Address: 0x2ba38c, Func Offset: 0x69c
	// Line 434, Address: 0x2ba3b8, Func Offset: 0x6c8
	// Line 436, Address: 0x2ba3e8, Func Offset: 0x6f8
	// Line 438, Address: 0x2ba3ec, Func Offset: 0x6fc
	// Line 436, Address: 0x2ba3f4, Func Offset: 0x704
	// Line 439, Address: 0x2ba3fc, Func Offset: 0x70c
	// Line 437, Address: 0x2ba400, Func Offset: 0x710
	// Line 441, Address: 0x2ba404, Func Offset: 0x714
	// Line 436, Address: 0x2ba408, Func Offset: 0x718
	// Line 437, Address: 0x2ba418, Func Offset: 0x728
	// Line 439, Address: 0x2ba420, Func Offset: 0x730
	// Line 437, Address: 0x2ba424, Func Offset: 0x734
	// Line 440, Address: 0x2ba428, Func Offset: 0x738
	// Line 437, Address: 0x2ba42c, Func Offset: 0x73c
	// Line 440, Address: 0x2ba430, Func Offset: 0x740
	// Line 437, Address: 0x2ba434, Func Offset: 0x744
	// Line 442, Address: 0x2ba438, Func Offset: 0x748
	// Line 441, Address: 0x2ba43c, Func Offset: 0x74c
	// Line 442, Address: 0x2ba448, Func Offset: 0x758
	// Line 443, Address: 0x2ba454, Func Offset: 0x764
	// Line 445, Address: 0x2ba540, Func Offset: 0x850
	// Line 443, Address: 0x2ba544, Func Offset: 0x854
	// Line 445, Address: 0x2ba548, Func Offset: 0x858
	// Line 446, Address: 0x2ba574, Func Offset: 0x884
	// Line 448, Address: 0x2ba5a4, Func Offset: 0x8b4
	// Line 450, Address: 0x2ba5a8, Func Offset: 0x8b8
	// Line 448, Address: 0x2ba5b0, Func Offset: 0x8c0
	// Line 451, Address: 0x2ba5b8, Func Offset: 0x8c8
	// Line 449, Address: 0x2ba5bc, Func Offset: 0x8cc
	// Line 453, Address: 0x2ba5c0, Func Offset: 0x8d0
	// Line 448, Address: 0x2ba5c4, Func Offset: 0x8d4
	// Line 449, Address: 0x2ba5d4, Func Offset: 0x8e4
	// Line 451, Address: 0x2ba5dc, Func Offset: 0x8ec
	// Line 449, Address: 0x2ba5e0, Func Offset: 0x8f0
	// Line 452, Address: 0x2ba5e4, Func Offset: 0x8f4
	// Line 449, Address: 0x2ba5e8, Func Offset: 0x8f8
	// Line 452, Address: 0x2ba5ec, Func Offset: 0x8fc
	// Line 449, Address: 0x2ba5f0, Func Offset: 0x900
	// Line 454, Address: 0x2ba5f4, Func Offset: 0x904
	// Line 453, Address: 0x2ba5f8, Func Offset: 0x908
	// Line 454, Address: 0x2ba604, Func Offset: 0x914
	// Line 455, Address: 0x2ba610, Func Offset: 0x920
	// Line 457, Address: 0x2ba6fc, Func Offset: 0xa0c
	// Line 455, Address: 0x2ba700, Func Offset: 0xa10
	// Line 457, Address: 0x2ba704, Func Offset: 0xa14
	// Line 458, Address: 0x2ba730, Func Offset: 0xa40
	// Line 462, Address: 0x2ba760, Func Offset: 0xa70
	// Line 460, Address: 0x2ba764, Func Offset: 0xa74
	// Line 462, Address: 0x2ba768, Func Offset: 0xa78
	// Line 461, Address: 0x2ba76c, Func Offset: 0xa7c
	// Line 463, Address: 0x2ba770, Func Offset: 0xa80
	// Line 465, Address: 0x2ba774, Func Offset: 0xa84
	// Line 463, Address: 0x2ba778, Func Offset: 0xa88
	// Line 464, Address: 0x2ba77c, Func Offset: 0xa8c
	// Line 460, Address: 0x2ba784, Func Offset: 0xa94
	// Line 466, Address: 0x2ba788, Func Offset: 0xa98
	// Line 460, Address: 0x2ba78c, Func Offset: 0xa9c
	// Line 461, Address: 0x2ba7a0, Func Offset: 0xab0
	// Line 465, Address: 0x2ba7b4, Func Offset: 0xac4
	// Line 466, Address: 0x2ba7c0, Func Offset: 0xad0
	// Line 467, Address: 0x2ba7cc, Func Offset: 0xadc
	// Line 485, Address: 0x2ba8b8, Func Offset: 0xbc8
	// Line 467, Address: 0x2ba8bc, Func Offset: 0xbcc
	// Line 470, Address: 0x2ba8c0, Func Offset: 0xbd0
	// Line 485, Address: 0x2ba8c8, Func Offset: 0xbd8
	// Line 470, Address: 0x2ba8cc, Func Offset: 0xbdc
	// Line 485, Address: 0x2ba8d0, Func Offset: 0xbe0
	// Line 470, Address: 0x2ba8d4, Func Offset: 0xbe4
	// Line 485, Address: 0x2ba8dc, Func Offset: 0xbec
	// Line 470, Address: 0x2ba8ec, Func Offset: 0xbfc
	// Line 485, Address: 0x2ba8f8, Func Offset: 0xc08
	// Line 504, Address: 0x2ba900, Func Offset: 0xc10
	// Line 274, Address: 0x2ba908, Func Offset: 0xc18
	// Line 277, Address: 0x2ba90c, Func Offset: 0xc1c
	// Line 278, Address: 0x2ba910, Func Offset: 0xc20
	// Line 299, Address: 0x2ba91c, Func Offset: 0xc2c
	// Line 300, Address: 0x2ba920, Func Offset: 0xc30
	// Line 504, Address: 0x2ba92c, Func Offset: 0xc3c
	// Func End, Address: 0x2ba96c, Func Offset: 0xc7c
}

// DoRender__6zUIBoxCFv
// Start address: 0x2ba970
void zUIBox::DoRender()
{
	float32 x1;
	float32 y1;
	float32 x2;
	float32 y2;
	float32 curBorderWidth;
	float32 curBorderHeight;
	float32 x1i;
	float32 y1i;
	float32 x2i;
	float32 y2i;
	float32 xCenter;
	float32 yCenter;
	float32 yScale;
	float32 xScale;
	// Line 120, Address: 0x2ba970, Func Offset: 0
	// Line 121, Address: 0x2ba9b4, Func Offset: 0x44
	// Line 149, Address: 0x2ba9b8, Func Offset: 0x48
	// Line 151, Address: 0x2ba9bc, Func Offset: 0x4c
	// Line 125, Address: 0x2ba9c0, Func Offset: 0x50
	// Line 124, Address: 0x2ba9c4, Func Offset: 0x54
	// Line 126, Address: 0x2ba9c8, Func Offset: 0x58
	// Line 125, Address: 0x2ba9cc, Func Offset: 0x5c
	// Line 130, Address: 0x2ba9d0, Func Offset: 0x60
	// Line 151, Address: 0x2ba9d4, Func Offset: 0x64
	// Line 130, Address: 0x2ba9d8, Func Offset: 0x68
	// Line 131, Address: 0x2ba9dc, Func Offset: 0x6c
	// Line 126, Address: 0x2ba9e0, Func Offset: 0x70
	// Line 130, Address: 0x2ba9e4, Func Offset: 0x74
	// Line 131, Address: 0x2ba9ec, Func Offset: 0x7c
	// Line 127, Address: 0x2ba9f0, Func Offset: 0x80
	// Line 143, Address: 0x2ba9f4, Func Offset: 0x84
	// Line 131, Address: 0x2ba9f8, Func Offset: 0x88
	// Line 145, Address: 0x2baa00, Func Offset: 0x90
	// Line 144, Address: 0x2baa04, Func Offset: 0x94
	// Line 146, Address: 0x2baa08, Func Offset: 0x98
	// Line 151, Address: 0x2baa0c, Func Offset: 0x9c
	// Line 153, Address: 0x2baa14, Func Offset: 0xa4
	// Line 154, Address: 0x2baa20, Func Offset: 0xb0
	// Line 153, Address: 0x2baa24, Func Offset: 0xb4
	// Line 154, Address: 0x2baa28, Func Offset: 0xb8
	// Line 158, Address: 0x2baa30, Func Offset: 0xc0
	// Line 154, Address: 0x2baa34, Func Offset: 0xc4
	// Line 158, Address: 0x2baa38, Func Offset: 0xc8
	// Line 159, Address: 0x2baa44, Func Offset: 0xd4
	// Line 160, Address: 0x2baa54, Func Offset: 0xe4
	// Line 161, Address: 0x2baa64, Func Offset: 0xf4
	// Line 164, Address: 0x2baa74, Func Offset: 0x104
	// Line 165, Address: 0x2baaa8, Func Offset: 0x138
	// Line 166, Address: 0x2baadc, Func Offset: 0x16c
	// Line 167, Address: 0x2bab10, Func Offset: 0x1a0
	// Line 169, Address: 0x2bab44, Func Offset: 0x1d4
	// Line 170, Address: 0x2bab70, Func Offset: 0x200
	// Line 169, Address: 0x2bab78, Func Offset: 0x208
	// Line 170, Address: 0x2bab80, Func Offset: 0x210
	// Line 171, Address: 0x2babb8, Func Offset: 0x248
	// Line 173, Address: 0x2bac04, Func Offset: 0x294
	// Line 174, Address: 0x2bac3c, Func Offset: 0x2cc
	// Line 175, Address: 0x2bac84, Func Offset: 0x314
	// Line 177, Address: 0x2bacd0, Func Offset: 0x360
	// Line 179, Address: 0x2bace0, Func Offset: 0x370
	// Line 180, Address: 0x2bad18, Func Offset: 0x3a8
	// Line 187, Address: 0x2bad50, Func Offset: 0x3e0
	// Line 188, Address: 0x2bad78, Func Offset: 0x408
	// Line 184, Address: 0x2bad80, Func Offset: 0x410
	// Line 188, Address: 0x2bad8c, Func Offset: 0x41c
	// Func End, Address: 0x2badcc, Func Offset: 0x45c
}

// DoApplyMotionFrame__6zUIBoxFPC14zUIMotionFrame
// Start address: 0x2badd0
void zUIBox::DoApplyMotionFrame(zUIMotionFrame* frame)
{
	// Line 115, Address: 0x2badd0, Func Offset: 0
	// Line 116, Address: 0x2bae30, Func Offset: 0x60
	// Line 115, Address: 0x2bae34, Func Offset: 0x64
	// Line 117, Address: 0x2baea4, Func Offset: 0xd4
	// Func End, Address: 0x2baeac, Func Offset: 0xdc
}

// DoHandleEvent__6zUIBoxFP5xBaseUiPCfP5xBaseUi
// Start address: 0x2baeb0
void zUIBox::DoHandleEvent(xBase* from, uint32 toEvent, float32* toParam, xBase* toParamWidget, uint32 toParamWidgetID)
{
	RwTexture* pTexture;
	int32 which;
	int32 i;
	// Line 81, Address: 0x2baeb0, Func Offset: 0
	// Line 82, Address: 0x2baeb4, Func Offset: 0x4
	// Line 81, Address: 0x2baeb8, Func Offset: 0x8
	// Line 82, Address: 0x2baed4, Func Offset: 0x24
	// Line 86, Address: 0x2baee4, Func Offset: 0x34
	// Line 88, Address: 0x2baee8, Func Offset: 0x38
	// Line 89, Address: 0x2baef4, Func Offset: 0x44
	// Line 96, Address: 0x2baf00, Func Offset: 0x50
	// Line 97, Address: 0x2baf04, Func Offset: 0x54
	// Line 98, Address: 0x2baf0c, Func Offset: 0x5c
	// Line 100, Address: 0x2baf14, Func Offset: 0x64
	// Line 111, Address: 0x2baf28, Func Offset: 0x78
	// Line 92, Address: 0x2baf3c, Func Offset: 0x8c
	// Line 111, Address: 0x2baf44, Func Offset: 0x94
	// Line 92, Address: 0x2baf50, Func Offset: 0xa0
	// Line 94, Address: 0x2baf58, Func Offset: 0xa8
	// Line 111, Address: 0x2baf5c, Func Offset: 0xac
	// Line 94, Address: 0x2baf60, Func Offset: 0xb0
	// Line 111, Address: 0x2baf7c, Func Offset: 0xcc
	// Line 95, Address: 0x2baf84, Func Offset: 0xd4
	// Line 111, Address: 0x2baf8c, Func Offset: 0xdc
	// Line 100, Address: 0x2baf90, Func Offset: 0xe0
	// Line 111, Address: 0x2bafac, Func Offset: 0xfc
	// Line 105, Address: 0x2bafbc, Func Offset: 0x10c
	// Line 111, Address: 0x2bafc0, Func Offset: 0x110
	// Func End, Address: 0x2bafec, Func Offset: 0x13c
}

// DoResetMotion__6zUIBoxFv
// Start address: 0x2baff0
void zUIBox::DoResetMotion()
{
	// Line 76, Address: 0x2baff0, Func Offset: 0
	// Line 78, Address: 0x2bb05c, Func Offset: 0x6c
	// Func End, Address: 0x2bb064, Func Offset: 0x74
}

// DoReset__6zUIBoxFv
// Start address: 0x2bb070
void zUIBox::DoReset()
{
	// Line 67, Address: 0x2bb070, Func Offset: 0
	// Line 68, Address: 0x2bb088, Func Offset: 0x18
	// Line 71, Address: 0x2bb0b8, Func Offset: 0x48
	// Line 68, Address: 0x2bb0c4, Func Offset: 0x54
	// Line 71, Address: 0x2bb11c, Func Offset: 0xac
	// Line 72, Address: 0x2bb148, Func Offset: 0xd8
	// Func End, Address: 0x2bb164, Func Offset: 0xf4
}

// DoInit__6zUIBoxFv
// Start address: 0x2bb170
void zUIBox::DoInit()
{
	// Line 59, Address: 0x2bb170, Func Offset: 0
	// Line 60, Address: 0x2bb188, Func Offset: 0x18
	// Line 61, Address: 0x2bb1d8, Func Offset: 0x68
	// Line 62, Address: 0x2bb1e4, Func Offset: 0x74
	// Line 63, Address: 0x2bb1f0, Func Offset: 0x80
	// Line 64, Address: 0x2bb1f4, Func Offset: 0x84
	// Func End, Address: 0x2bb204, Func Offset: 0x94
}

