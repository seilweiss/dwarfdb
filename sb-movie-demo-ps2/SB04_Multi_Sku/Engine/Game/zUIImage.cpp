



void zUIImage_Init(xBase& data, xDynAsset& asset);
uint8 Blends();
void Invisible();
void Visible();
void DoApplyMotionFrame(zUIMotionFrame* frame);
void DoInitMotion();
void DoRender();
void DoHandleEvent(xBase* from, uint32 toEvent, float32* toParam, xBase* toParamWidget, uint32 toParamWidgetID);
void DoResetMotion();
void DoReset();
void DoInit();

// zUIImage_Init__FR5xBaseR9xDynAssetUi
// Start address: 0x2b7c00
void zUIImage_Init(xBase& data, xDynAsset& asset)
{
	// Line 550, Address: 0x2b7c00, Func Offset: 0
	// Line 551, Address: 0x2b7c18, Func Offset: 0x18
	// Line 552, Address: 0x2b7f64, Func Offset: 0x364
	// Line 551, Address: 0x2b7f84, Func Offset: 0x384
	// Line 552, Address: 0x2b7f8c, Func Offset: 0x38c
	// Line 551, Address: 0x2b7f90, Func Offset: 0x390
	// Line 552, Address: 0x2b7f94, Func Offset: 0x394
	// Line 551, Address: 0x2b7fa4, Func Offset: 0x3a4
	// Line 552, Address: 0x2b7fa8, Func Offset: 0x3a8
	// Line 551, Address: 0x2b7fb0, Func Offset: 0x3b0
	// Line 552, Address: 0x2b7fb8, Func Offset: 0x3b8
	// Line 551, Address: 0x2b8058, Func Offset: 0x458
	// Line 552, Address: 0x2b805c, Func Offset: 0x45c
	// Func End, Address: 0x2b8088, Func Offset: 0x488
}

// Blends__8zUIImageCFv
// Start address: 0x2b8090
uint8 zUIImage::Blends()
{
	// Line 546, Address: 0x2b8090, Func Offset: 0
	// Line 547, Address: 0x2b809c, Func Offset: 0xc
	// Func End, Address: 0x2b80a4, Func Offset: 0x14
}

// Invisible__8zUIImageFv
// Start address: 0x2b80b0
void zUIImage::Invisible()
{
	// Line 538, Address: 0x2b80b0, Func Offset: 0
	// Line 539, Address: 0x2b80c0, Func Offset: 0x10
	// Line 541, Address: 0x2b80d0, Func Offset: 0x20
	// Line 542, Address: 0x2b80e8, Func Offset: 0x38
	// Func End, Address: 0x2b8114, Func Offset: 0x64
}

// Visible__8zUIImageFv
// Start address: 0x2b8120
void zUIImage::Visible()
{
	// Line 534, Address: 0x2b8120, Func Offset: 0
	// Line 535, Address: 0x2b8140, Func Offset: 0x20
	// Func End, Address: 0x2b8158, Func Offset: 0x38
}

// DoApplyMotionFrame__8zUIImageFPC14zUIMotionFrame
// Start address: 0x2b8160
void zUIImage::DoApplyMotionFrame(zUIMotionFrame* frame)
{
	// Line 512, Address: 0x2b8160, Func Offset: 0
	// Line 515, Address: 0x2b818c, Func Offset: 0x2c
	// Line 512, Address: 0x2b8190, Func Offset: 0x30
	// Line 513, Address: 0x2b81c4, Func Offset: 0x64
	// Line 512, Address: 0x2b81c8, Func Offset: 0x68
	// Line 514, Address: 0x2b81d4, Func Offset: 0x74
	// Line 512, Address: 0x2b81d8, Func Offset: 0x78
	// Line 513, Address: 0x2b823c, Func Offset: 0xdc
	// Line 514, Address: 0x2b8248, Func Offset: 0xe8
	// Line 515, Address: 0x2b8254, Func Offset: 0xf4
	// Line 517, Address: 0x2b8268, Func Offset: 0x108
	// Line 519, Address: 0x2b8274, Func Offset: 0x114
	// Line 520, Address: 0x2b8288, Func Offset: 0x128
	// Line 518, Address: 0x2b82b0, Func Offset: 0x150
	// Line 520, Address: 0x2b82b4, Func Offset: 0x154
	// Line 522, Address: 0x2b82b8, Func Offset: 0x158
	// Line 523, Address: 0x2b82c0, Func Offset: 0x160
	// Line 522, Address: 0x2b82c4, Func Offset: 0x164
	// Line 523, Address: 0x2b82cc, Func Offset: 0x16c
	// Line 525, Address: 0x2b82e0, Func Offset: 0x180
	// Line 527, Address: 0x2b82f8, Func Offset: 0x198
	// Line 528, Address: 0x2b830c, Func Offset: 0x1ac
	// Line 526, Address: 0x2b8348, Func Offset: 0x1e8
	// Line 528, Address: 0x2b834c, Func Offset: 0x1ec
	// Line 530, Address: 0x2b8350, Func Offset: 0x1f0
	// Func End, Address: 0x2b8358, Func Offset: 0x1f8
}

// DoInitMotion__8zUIImageFv
// Start address: 0x2b8360
void zUIImage::DoInitMotion()
{
	// Line 506, Address: 0x2b8360, Func Offset: 0
	// Line 507, Address: 0x2b83c0, Func Offset: 0x60
	// Line 508, Address: 0x2b83d4, Func Offset: 0x74
	// Func End, Address: 0x2b83dc, Func Offset: 0x7c
}

// DoRender__8zUIImageCFv
// Start address: 0x2b83e0
void zUIImage::DoRender()
{
	RwTexture* pTexture;
	RwRaster* raster;
	RwSky2DVertex vertex[4];
	float32 x1;
	float32 y1;
	float32 x2;
	float32 y2;
	float32 ulx;
	float32 uly;
	float32 urx;
	float32 ury;
	float32 llx;
	float32 lly;
	float32 lrx;
	float32 lry;
	float32 offx;
	float32 offy;
	xColor_tag* color;
	float32 z;
	float32 u1;
	float32 v1;
	float32 u2;
	float32 v2;
	float32 u3;
	float32 v3;
	float32 u4;
	float32 v4;
	float32 cz;
	float32 cooz;
	void* modeTranslate[3];
	// Line 175, Address: 0x2b83e0, Func Offset: 0
	// Line 177, Address: 0x2b83fc, Func Offset: 0x1c
	// Line 175, Address: 0x2b8400, Func Offset: 0x20
	// Line 177, Address: 0x2b8418, Func Offset: 0x38
	// Line 178, Address: 0x2b8420, Func Offset: 0x40
	// Line 184, Address: 0x2b8428, Func Offset: 0x48
	// Line 185, Address: 0x2b842c, Func Offset: 0x4c
	// Line 188, Address: 0x2b8464, Func Offset: 0x84
	// Line 193, Address: 0x2b8474, Func Offset: 0x94
	// Line 195, Address: 0x2b847c, Func Offset: 0x9c
	// Line 196, Address: 0x2b848c, Func Offset: 0xac
	// Line 197, Address: 0x2b849c, Func Offset: 0xbc
	// Line 204, Address: 0x2b84a4, Func Offset: 0xc4
	// Line 205, Address: 0x2b84b4, Func Offset: 0xd4
	// Line 212, Address: 0x2b84c4, Func Offset: 0xe4
	// Line 213, Address: 0x2b84d4, Func Offset: 0xf4
	// Line 222, Address: 0x2b84e4, Func Offset: 0x104
	// Line 223, Address: 0x2b850c, Func Offset: 0x12c
	// Line 227, Address: 0x2b8534, Func Offset: 0x154
	// Line 231, Address: 0x2b853c, Func Offset: 0x15c
	// Line 229, Address: 0x2b8540, Func Offset: 0x160
	// Line 232, Address: 0x2b8544, Func Offset: 0x164
	// Line 245, Address: 0x2b854c, Func Offset: 0x16c
	// Line 231, Address: 0x2b8550, Func Offset: 0x170
	// Line 245, Address: 0x2b8554, Func Offset: 0x174
	// Line 252, Address: 0x2b8560, Func Offset: 0x180
	// Line 255, Address: 0x2b8640, Func Offset: 0x260
	// Line 252, Address: 0x2b8644, Func Offset: 0x264
	// Line 255, Address: 0x2b8648, Func Offset: 0x268
	// Line 264, Address: 0x2b8650, Func Offset: 0x270
	// Line 255, Address: 0x2b8654, Func Offset: 0x274
	// Line 256, Address: 0x2b8658, Func Offset: 0x278
	// Line 258, Address: 0x2b8660, Func Offset: 0x280
	// Line 259, Address: 0x2b8664, Func Offset: 0x284
	// Line 260, Address: 0x2b8668, Func Offset: 0x288
	// Line 264, Address: 0x2b866c, Func Offset: 0x28c
	// Line 265, Address: 0x2b8674, Func Offset: 0x294
	// Line 268, Address: 0x2b8688, Func Offset: 0x2a8
	// Line 269, Address: 0x2b869c, Func Offset: 0x2bc
	// Line 271, Address: 0x2b86a8, Func Offset: 0x2c8
	// Line 275, Address: 0x2b86b4, Func Offset: 0x2d4
	// Line 272, Address: 0x2b86c0, Func Offset: 0x2e0
	// Line 278, Address: 0x2b86c4, Func Offset: 0x2e4
	// Line 274, Address: 0x2b86cc, Func Offset: 0x2ec
	// Line 277, Address: 0x2b86d0, Func Offset: 0x2f0
	// Line 272, Address: 0x2b86d4, Func Offset: 0x2f4
	// Line 274, Address: 0x2b86d8, Func Offset: 0x2f8
	// Line 277, Address: 0x2b86dc, Func Offset: 0x2fc
	// Line 275, Address: 0x2b86e0, Func Offset: 0x300
	// Line 278, Address: 0x2b86e4, Func Offset: 0x304
	// Line 293, Address: 0x2b86ec, Func Offset: 0x30c
	// Line 294, Address: 0x2b8730, Func Offset: 0x350
	// Line 295, Address: 0x2b8770, Func Offset: 0x390
	// Line 296, Address: 0x2b87b0, Func Offset: 0x3d0
	// Line 297, Address: 0x2b87f0, Func Offset: 0x410
	// Line 298, Address: 0x2b8830, Func Offset: 0x450
	// Line 299, Address: 0x2b8870, Func Offset: 0x490
	// Line 300, Address: 0x2b88b0, Func Offset: 0x4d0
	// Line 304, Address: 0x2b88ec, Func Offset: 0x50c
	// Line 302, Address: 0x2b88f0, Func Offset: 0x510
	// Line 300, Address: 0x2b88f4, Func Offset: 0x514
	// Line 304, Address: 0x2b88f8, Func Offset: 0x518
	// Line 300, Address: 0x2b88fc, Func Offset: 0x51c
	// Line 305, Address: 0x2b8900, Func Offset: 0x520
	// Line 306, Address: 0x2b8920, Func Offset: 0x540
	// Line 310, Address: 0x2b894c, Func Offset: 0x56c
	// Line 323, Address: 0x2b895c, Func Offset: 0x57c
	// Line 324, Address: 0x2b8960, Func Offset: 0x580
	// Line 325, Address: 0x2b8964, Func Offset: 0x584
	// Line 326, Address: 0x2b8968, Func Offset: 0x588
	// Line 327, Address: 0x2b896c, Func Offset: 0x58c
	// Line 328, Address: 0x2b8970, Func Offset: 0x590
	// Line 329, Address: 0x2b8974, Func Offset: 0x594
	// Line 330, Address: 0x2b8978, Func Offset: 0x598
	// Line 334, Address: 0x2b8980, Func Offset: 0x5a0
	// Line 336, Address: 0x2b8994, Func Offset: 0x5b4
	// Line 337, Address: 0x2b8998, Func Offset: 0x5b8
	// Line 338, Address: 0x2b899c, Func Offset: 0x5bc
	// Line 339, Address: 0x2b89a0, Func Offset: 0x5c0
	// Line 341, Address: 0x2b89a8, Func Offset: 0x5c8
	// Line 343, Address: 0x2b89bc, Func Offset: 0x5dc
	// Line 344, Address: 0x2b89c0, Func Offset: 0x5e0
	// Line 345, Address: 0x2b89c4, Func Offset: 0x5e4
	// Line 346, Address: 0x2b89c8, Func Offset: 0x5e8
	// Line 350, Address: 0x2b89d4, Func Offset: 0x5f4
	// Line 355, Address: 0x2b89ec, Func Offset: 0x60c
	// Line 350, Address: 0x2b89f0, Func Offset: 0x610
	// Line 355, Address: 0x2b89f4, Func Offset: 0x614
	// Line 350, Address: 0x2b89f8, Func Offset: 0x618
	// Line 355, Address: 0x2b89fc, Func Offset: 0x61c
	// Line 403, Address: 0x2b8a00, Func Offset: 0x620
	// Line 396, Address: 0x2b8a08, Func Offset: 0x628
	// Line 401, Address: 0x2b8a0c, Func Offset: 0x62c
	// Line 396, Address: 0x2b8a10, Func Offset: 0x630
	// Line 397, Address: 0x2b8a14, Func Offset: 0x634
	// Line 396, Address: 0x2b8a18, Func Offset: 0x638
	// Line 397, Address: 0x2b8a1c, Func Offset: 0x63c
	// Line 402, Address: 0x2b8a20, Func Offset: 0x640
	// Line 398, Address: 0x2b8a24, Func Offset: 0x644
	// Line 399, Address: 0x2b8a28, Func Offset: 0x648
	// Line 400, Address: 0x2b8a2c, Func Offset: 0x64c
	// Line 396, Address: 0x2b8a30, Func Offset: 0x650
	// Line 397, Address: 0x2b8a34, Func Offset: 0x654
	// Line 403, Address: 0x2b8a38, Func Offset: 0x658
	// Line 405, Address: 0x2b8bd0, Func Offset: 0x7f0
	// Line 406, Address: 0x2b8c00, Func Offset: 0x820
	// Line 408, Address: 0x2b8c30, Func Offset: 0x850
	// Line 415, Address: 0x2b8c34, Func Offset: 0x854
	// Line 413, Address: 0x2b8c38, Func Offset: 0x858
	// Line 415, Address: 0x2b8c3c, Func Offset: 0x85c
	// Line 408, Address: 0x2b8c40, Func Offset: 0x860
	// Line 409, Address: 0x2b8c4c, Func Offset: 0x86c
	// Line 414, Address: 0x2b8c58, Func Offset: 0x878
	// Line 410, Address: 0x2b8c5c, Func Offset: 0x87c
	// Line 411, Address: 0x2b8c60, Func Offset: 0x880
	// Line 412, Address: 0x2b8c64, Func Offset: 0x884
	// Line 408, Address: 0x2b8c68, Func Offset: 0x888
	// Line 409, Address: 0x2b8c6c, Func Offset: 0x88c
	// Line 415, Address: 0x2b8c70, Func Offset: 0x890
	// Line 417, Address: 0x2b8e08, Func Offset: 0xa28
	// Line 418, Address: 0x2b8e38, Func Offset: 0xa58
	// Line 420, Address: 0x2b8e68, Func Offset: 0xa88
	// Line 427, Address: 0x2b8e6c, Func Offset: 0xa8c
	// Line 425, Address: 0x2b8e70, Func Offset: 0xa90
	// Line 427, Address: 0x2b8e74, Func Offset: 0xa94
	// Line 420, Address: 0x2b8e78, Func Offset: 0xa98
	// Line 421, Address: 0x2b8e88, Func Offset: 0xaa8
	// Line 426, Address: 0x2b8e94, Func Offset: 0xab4
	// Line 422, Address: 0x2b8e98, Func Offset: 0xab8
	// Line 423, Address: 0x2b8e9c, Func Offset: 0xabc
	// Line 424, Address: 0x2b8ea0, Func Offset: 0xac0
	// Line 421, Address: 0x2b8ea4, Func Offset: 0xac4
	// Line 427, Address: 0x2b8ea8, Func Offset: 0xac8
	// Line 429, Address: 0x2b9040, Func Offset: 0xc60
	// Line 430, Address: 0x2b9070, Func Offset: 0xc90
	// Line 432, Address: 0x2b90a0, Func Offset: 0xcc0
	// Line 439, Address: 0x2b90a4, Func Offset: 0xcc4
	// Line 434, Address: 0x2b90a8, Func Offset: 0xcc8
	// Line 439, Address: 0x2b90ac, Func Offset: 0xccc
	// Line 432, Address: 0x2b90b0, Func Offset: 0xcd0
	// Line 433, Address: 0x2b90bc, Func Offset: 0xcdc
	// Line 435, Address: 0x2b90c8, Func Offset: 0xce8
	// Line 436, Address: 0x2b90cc, Func Offset: 0xcec
	// Line 437, Address: 0x2b90d0, Func Offset: 0xcf0
	// Line 438, Address: 0x2b90d4, Func Offset: 0xcf4
	// Line 432, Address: 0x2b90d8, Func Offset: 0xcf8
	// Line 433, Address: 0x2b90dc, Func Offset: 0xcfc
	// Line 439, Address: 0x2b90e0, Func Offset: 0xd00
	// Line 442, Address: 0x2b9274, Func Offset: 0xe94
	// Line 439, Address: 0x2b9280, Func Offset: 0xea0
	// Line 442, Address: 0x2b9284, Func Offset: 0xea4
	// Line 455, Address: 0x2b9290, Func Offset: 0xeb0
	// Line 280, Address: 0x2b9298, Func Offset: 0xeb8
	// Line 283, Address: 0x2b929c, Func Offset: 0xebc
	// Line 284, Address: 0x2b92a0, Func Offset: 0xec0
	// Line 455, Address: 0x2b92ac, Func Offset: 0xecc
	// Line 314, Address: 0x2b92bc, Func Offset: 0xedc
	// Line 455, Address: 0x2b92c0, Func Offset: 0xee0
	// Line 315, Address: 0x2b92c8, Func Offset: 0xee8
	// Line 455, Address: 0x2b92cc, Func Offset: 0xeec
	// Line 317, Address: 0x2b92dc, Func Offset: 0xefc
	// Line 318, Address: 0x2b92e0, Func Offset: 0xf00
	// Line 320, Address: 0x2b92e4, Func Offset: 0xf04
	// Line 322, Address: 0x2b92f0, Func Offset: 0xf10
	// Line 455, Address: 0x2b92f8, Func Offset: 0xf18
	// Func End, Address: 0x2b9330, Func Offset: 0xf50
}

// DoHandleEvent__8zUIImageFP5xBaseUiPCfP5xBaseUi
// Start address: 0x2b9330
void zUIImage::DoHandleEvent(xBase* from, uint32 toEvent, float32* toParam, xBase* toParamWidget, uint32 toParamWidgetID)
{
	RwTexture* pTexture;
	float32 u0;
	float32 v0;
	float32 u1;
	float32 v1;
	zUIImageAsset* pAsset;
	// Line 105, Address: 0x2b9330, Func Offset: 0
	// Line 106, Address: 0x2b9334, Func Offset: 0x4
	// Line 105, Address: 0x2b9338, Func Offset: 0x8
	// Line 106, Address: 0x2b934c, Func Offset: 0x1c
	// Line 111, Address: 0x2b9374, Func Offset: 0x44
	// Line 112, Address: 0x2b937c, Func Offset: 0x4c
	// Line 113, Address: 0x2b9388, Func Offset: 0x58
	// Line 122, Address: 0x2b9390, Func Offset: 0x60
	// Line 123, Address: 0x2b9480, Func Offset: 0x150
	// Line 134, Address: 0x2b9488, Func Offset: 0x158
	// Line 130, Address: 0x2b948c, Func Offset: 0x15c
	// Line 131, Address: 0x2b9490, Func Offset: 0x160
	// Line 132, Address: 0x2b9494, Func Offset: 0x164
	// Line 133, Address: 0x2b9498, Func Offset: 0x168
	// Line 136, Address: 0x2b949c, Func Offset: 0x16c
	// Line 137, Address: 0x2b94a0, Func Offset: 0x170
	// Line 138, Address: 0x2b94a4, Func Offset: 0x174
	// Line 139, Address: 0x2b94a8, Func Offset: 0x178
	// Line 140, Address: 0x2b94ac, Func Offset: 0x17c
	// Line 141, Address: 0x2b94b0, Func Offset: 0x180
	// Line 142, Address: 0x2b94b4, Func Offset: 0x184
	// Line 144, Address: 0x2b94b8, Func Offset: 0x188
	// Line 147, Address: 0x2b94c0, Func Offset: 0x190
	// Line 150, Address: 0x2b94c8, Func Offset: 0x198
	// Line 116, Address: 0x2b94d4, Func Offset: 0x1a4
	// Line 150, Address: 0x2b94ec, Func Offset: 0x1bc
	// Line 116, Address: 0x2b94f4, Func Offset: 0x1c4
	// Line 150, Address: 0x2b94f8, Func Offset: 0x1c8
	// Line 116, Address: 0x2b9510, Func Offset: 0x1e0
	// Line 150, Address: 0x2b9518, Func Offset: 0x1e8
	// Line 116, Address: 0x2b951c, Func Offset: 0x1ec
	// Line 150, Address: 0x2b9520, Func Offset: 0x1f0
	// Line 116, Address: 0x2b9530, Func Offset: 0x200
	// Line 150, Address: 0x2b9534, Func Offset: 0x204
	// Line 116, Address: 0x2b9540, Func Offset: 0x210
	// Line 150, Address: 0x2b9554, Func Offset: 0x224
	// Line 116, Address: 0x2b955c, Func Offset: 0x22c
	// Line 150, Address: 0x2b9564, Func Offset: 0x234
	// Line 116, Address: 0x2b956c, Func Offset: 0x23c
	// Line 150, Address: 0x2b9570, Func Offset: 0x240
	// Line 116, Address: 0x2b9584, Func Offset: 0x254
	// Line 150, Address: 0x2b9594, Func Offset: 0x264
	// Line 118, Address: 0x2b959c, Func Offset: 0x26c
	// Line 150, Address: 0x2b95a4, Func Offset: 0x274
	// Func End, Address: 0x2b95bc, Func Offset: 0x28c
}

// DoResetMotion__8zUIImageFv
// Start address: 0x2b95c0
void zUIImage::DoResetMotion()
{
	// Line 98, Address: 0x2b95c0, Func Offset: 0
	// Line 99, Address: 0x2b962c, Func Offset: 0x6c
	// Line 100, Address: 0x2b9638, Func Offset: 0x78
	// Line 102, Address: 0x2b963c, Func Offset: 0x7c
	// Func End, Address: 0x2b9644, Func Offset: 0x84
}

// DoReset__8zUIImageFv
// Start address: 0x2b9650
void zUIImage::DoReset()
{
	// Line 91, Address: 0x2b9650, Func Offset: 0
	// Line 92, Address: 0x2b9660, Func Offset: 0x10
	// Line 93, Address: 0x2b96e8, Func Offset: 0x98
	// Line 94, Address: 0x2b9760, Func Offset: 0x110
	// Line 93, Address: 0x2b9774, Func Offset: 0x124
	// Line 94, Address: 0x2b9778, Func Offset: 0x128
	// Line 93, Address: 0x2b978c, Func Offset: 0x13c
	// Line 94, Address: 0x2b979c, Func Offset: 0x14c
	// Func End, Address: 0x2b97c0, Func Offset: 0x170
}

// DoInit__8zUIImageFv
// Start address: 0x2b97c0
void zUIImage::DoInit()
{
	// Line 85, Address: 0x2b97c0, Func Offset: 0
	// Line 86, Address: 0x2b97d8, Func Offset: 0x18
	// Line 87, Address: 0x2b9828, Func Offset: 0x68
	// Line 88, Address: 0x2b9834, Func Offset: 0x74
	// Func End, Address: 0x2b9844, Func Offset: 0x84
}

