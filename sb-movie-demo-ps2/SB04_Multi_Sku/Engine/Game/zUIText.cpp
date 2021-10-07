



void zUITextInitSystem();
void zUIText_Init(xBase& data, xDynAsset& asset);
void DoApplyMotionFrame(zUIMotionFrame* frame);
void DoHandleEvent(xBase* from, uint32 toEvent, float32* toParam, xBase* toParamWidget, uint32 toParamWidgetID);
void DoRender();
void setup_textbox(xtextbox& tb, zUITextAsset* asset);
void DoReset();
void DoInit();

// zUITextInitSystem__Fv
// Start address: 0x2b5810
void zUITextInitSystem()
{
	xRegion region;
	// Line 311, Address: 0x2b5810, Func Offset: 0
	// Line 312, Address: 0x2b5818, Func Offset: 0x8
	// Line 313, Address: 0x2b5820, Func Offset: 0x10
	// Line 318, Address: 0x2b5858, Func Offset: 0x48
	// Line 317, Address: 0x2b585c, Func Offset: 0x4c
	// Line 318, Address: 0x2b5860, Func Offset: 0x50
	// Line 317, Address: 0x2b5864, Func Offset: 0x54
	// Line 318, Address: 0x2b5868, Func Offset: 0x58
	// Line 320, Address: 0x2b586c, Func Offset: 0x5c
	// Line 323, Address: 0x2b5874, Func Offset: 0x64
	// Line 324, Address: 0x2b5878, Func Offset: 0x68
	// Line 323, Address: 0x2b587c, Func Offset: 0x6c
	// Line 324, Address: 0x2b5880, Func Offset: 0x70
	// Line 326, Address: 0x2b5884, Func Offset: 0x74
	// Line 329, Address: 0x2b588c, Func Offset: 0x7c
	// Line 330, Address: 0x2b5890, Func Offset: 0x80
	// Line 329, Address: 0x2b5894, Func Offset: 0x84
	// Line 330, Address: 0x2b5898, Func Offset: 0x88
	// Line 331, Address: 0x2b589c, Func Offset: 0x8c
	// Line 344, Address: 0x2b58a0, Func Offset: 0x90
	// Func End, Address: 0x2b58ac, Func Offset: 0x9c
}

// zUIText_Init__FR5xBaseR9xDynAssetUi
// Start address: 0x2b58b0
void zUIText_Init(xBase& data, xDynAsset& asset)
{
	// Line 300, Address: 0x2b58b0, Func Offset: 0
	// Line 301, Address: 0x2b58c8, Func Offset: 0x18
	// Line 302, Address: 0x2b5c0c, Func Offset: 0x35c
	// Line 301, Address: 0x2b5c2c, Func Offset: 0x37c
	// Line 302, Address: 0x2b5c34, Func Offset: 0x384
	// Line 301, Address: 0x2b5c38, Func Offset: 0x388
	// Line 302, Address: 0x2b5c3c, Func Offset: 0x38c
	// Line 301, Address: 0x2b5c4c, Func Offset: 0x39c
	// Line 302, Address: 0x2b5c50, Func Offset: 0x3a0
	// Line 301, Address: 0x2b5c58, Func Offset: 0x3a8
	// Line 302, Address: 0x2b5c60, Func Offset: 0x3b0
	// Line 301, Address: 0x2b5d00, Func Offset: 0x450
	// Line 302, Address: 0x2b5d04, Func Offset: 0x454
	// Func End, Address: 0x2b5d30, Func Offset: 0x480
}

// DoApplyMotionFrame__7zUITextFPC14zUIMotionFrame
// Start address: 0x2b5d30
void zUIText::DoApplyMotionFrame(zUIMotionFrame* frame)
{
	// Line 256, Address: 0x2b5d30, Func Offset: 0
	// Line 257, Address: 0x2b5d64, Func Offset: 0x34
	// Line 256, Address: 0x2b5d68, Func Offset: 0x38
	// Line 257, Address: 0x2b5d6c, Func Offset: 0x3c
	// Line 256, Address: 0x2b5d74, Func Offset: 0x44
	// Line 257, Address: 0x2b5e0c, Func Offset: 0xdc
	// Line 258, Address: 0x2b5e34, Func Offset: 0x104
	// Func End, Address: 0x2b5e3c, Func Offset: 0x10c
}

// DoHandleEvent__7zUITextFP5xBaseUiPCfP5xBaseUi
// Start address: 0x2b5e40
void zUIText::DoHandleEvent(xBase* from, uint32 toEvent, float32* toParam, xBase* toParamWidget, uint32 toParamWidgetID)
{
	// Line 239, Address: 0x2b5e40, Func Offset: 0
	// Line 240, Address: 0x2b5e44, Func Offset: 0x4
	// Line 239, Address: 0x2b5e48, Func Offset: 0x8
	// Line 240, Address: 0x2b5e50, Func Offset: 0x10
	// Line 243, Address: 0x2b5e60, Func Offset: 0x20
	// Line 244, Address: 0x2b5e70, Func Offset: 0x30
	// Line 245, Address: 0x2b5e7c, Func Offset: 0x3c
	// Line 252, Address: 0x2b5e88, Func Offset: 0x48
	// Func End, Address: 0x2b5eb0, Func Offset: 0x70
}

// DoRender__7zUITextCFv
// Start address: 0x2b5eb0
void zUIText::DoRender()
{
	xtextbox tb;
	float32 hscale;
	float32 vscale;
	float32 oldWidth;
	float32 oldHeight;
	layout& layout;
	float32 actualWidth;
	float32 actualHeight;
	int32 i;
	// Line 139, Address: 0x2b5eb0, Func Offset: 0
	// Line 141, Address: 0x2b5eb4, Func Offset: 0x4
	// Line 139, Address: 0x2b5eb8, Func Offset: 0x8
	// Line 141, Address: 0x2b5ebc, Func Offset: 0xc
	// Line 139, Address: 0x2b5ec0, Func Offset: 0x10
	// Line 141, Address: 0x2b5ec4, Func Offset: 0x14
	// Line 139, Address: 0x2b5ec8, Func Offset: 0x18
	// Line 141, Address: 0x2b5ee0, Func Offset: 0x30
	// Line 145, Address: 0x2b5efc, Func Offset: 0x4c
	// Line 152, Address: 0x2b5f08, Func Offset: 0x58
	// Line 153, Address: 0x2b5f18, Func Offset: 0x68
	// Line 155, Address: 0x2b5f48, Func Offset: 0x98
	// Line 159, Address: 0x2b5f4c, Func Offset: 0x9c
	// Line 162, Address: 0x2b5f5c, Func Offset: 0xac
	// Line 168, Address: 0x2b5f68, Func Offset: 0xb8
	// Line 165, Address: 0x2b5f6c, Func Offset: 0xbc
	// Line 168, Address: 0x2b5f74, Func Offset: 0xc4
	// Line 170, Address: 0x2b5f7c, Func Offset: 0xcc
	// Line 174, Address: 0x2b5f8c, Func Offset: 0xdc
	// Line 176, Address: 0x2b5f90, Func Offset: 0xe0
	// Line 177, Address: 0x2b5f98, Func Offset: 0xe8
	// Line 181, Address: 0x2b5fac, Func Offset: 0xfc
	// Line 183, Address: 0x2b5fb4, Func Offset: 0x104
	// Line 182, Address: 0x2b5fb8, Func Offset: 0x108
	// Line 183, Address: 0x2b5fbc, Func Offset: 0x10c
	// Line 186, Address: 0x2b5fc0, Func Offset: 0x110
	// Line 183, Address: 0x2b5fc8, Func Offset: 0x118
	// Line 186, Address: 0x2b5fcc, Func Offset: 0x11c
	// Line 188, Address: 0x2b5fd4, Func Offset: 0x124
	// Line 187, Address: 0x2b5fe4, Func Offset: 0x134
	// Line 188, Address: 0x2b5fe8, Func Offset: 0x138
	// Line 191, Address: 0x2b5ffc, Func Offset: 0x14c
	// Line 192, Address: 0x2b6008, Func Offset: 0x158
	// Line 193, Address: 0x2b6014, Func Offset: 0x164
	// Line 194, Address: 0x2b6020, Func Offset: 0x170
	// Line 195, Address: 0x2b6024, Func Offset: 0x174
	// Line 200, Address: 0x2b6048, Func Offset: 0x198
	// Line 197, Address: 0x2b604c, Func Offset: 0x19c
	// Line 200, Address: 0x2b6050, Func Offset: 0x1a0
	// Line 201, Address: 0x2b607c, Func Offset: 0x1cc
	// Line 202, Address: 0x2b6088, Func Offset: 0x1d8
	// Line 203, Address: 0x2b60c0, Func Offset: 0x210
	// Line 213, Address: 0x2b60d0, Func Offset: 0x220
	// Line 212, Address: 0x2b60d4, Func Offset: 0x224
	// Line 213, Address: 0x2b60d8, Func Offset: 0x228
	// Line 212, Address: 0x2b60e4, Func Offset: 0x234
	// Line 213, Address: 0x2b60e8, Func Offset: 0x238
	// Line 218, Address: 0x2b60f4, Func Offset: 0x244
	// Line 215, Address: 0x2b60f8, Func Offset: 0x248
	// Line 218, Address: 0x2b60fc, Func Offset: 0x24c
	// Line 215, Address: 0x2b6108, Func Offset: 0x258
	// Line 218, Address: 0x2b610c, Func Offset: 0x25c
	// Line 220, Address: 0x2b6114, Func Offset: 0x264
	// Line 221, Address: 0x2b612c, Func Offset: 0x27c
	// Line 220, Address: 0x2b6130, Func Offset: 0x280
	// Line 221, Address: 0x2b6138, Func Offset: 0x288
	// Line 232, Address: 0x2b6140, Func Offset: 0x290
	// Line 235, Address: 0x2b6168, Func Offset: 0x2b8
	// Line 236, Address: 0x2b6188, Func Offset: 0x2d8
	// Line 214, Address: 0x2b619c, Func Offset: 0x2ec
	// Line 236, Address: 0x2b61d4, Func Offset: 0x324
	// Line 214, Address: 0x2b61d8, Func Offset: 0x328
	// Line 236, Address: 0x2b61e8, Func Offset: 0x338
	// Func End, Address: 0x2b6210, Func Offset: 0x360
}

// setup_textbox__7zUITextCFR8xtextboxPC12zUITextAsset
// Start address: 0x2b6210
void zUIText::setup_textbox(xtextbox& tb, zUITextAsset* asset)
{
	// Line 66, Address: 0x2b6210, Func Offset: 0
	// Line 72, Address: 0x2b6214, Func Offset: 0x4
	// Line 60, Address: 0x2b6218, Func Offset: 0x8
	// Line 61, Address: 0x2b621c, Func Offset: 0xc
	// Line 62, Address: 0x2b6220, Func Offset: 0x10
	// Line 72, Address: 0x2b6228, Func Offset: 0x18
	// Line 73, Address: 0x2b625c, Func Offset: 0x4c
	// Line 72, Address: 0x2b6260, Func Offset: 0x50
	// Line 73, Address: 0x2b6270, Func Offset: 0x60
	// Line 74, Address: 0x2b62a4, Func Offset: 0x94
	// Line 73, Address: 0x2b62a8, Func Offset: 0x98
	// Line 74, Address: 0x2b62b8, Func Offset: 0xa8
	// Line 77, Address: 0x2b62ec, Func Offset: 0xdc
	// Line 74, Address: 0x2b62f0, Func Offset: 0xe0
	// Line 77, Address: 0x2b62f4, Func Offset: 0xe4
	// Line 74, Address: 0x2b62f8, Func Offset: 0xe8
	// Line 77, Address: 0x2b62fc, Func Offset: 0xec
	// Line 74, Address: 0x2b6300, Func Offset: 0xf0
	// Line 77, Address: 0x2b6304, Func Offset: 0xf4
	// Line 74, Address: 0x2b6308, Func Offset: 0xf8
	// Line 88, Address: 0x2b630c, Func Offset: 0xfc
	// Line 78, Address: 0x2b6314, Func Offset: 0x104
	// Line 74, Address: 0x2b6324, Func Offset: 0x114
	// Line 96, Address: 0x2b6328, Func Offset: 0x118
	// Line 74, Address: 0x2b632c, Func Offset: 0x11c
	// Line 88, Address: 0x2b6330, Func Offset: 0x120
	// Line 77, Address: 0x2b6334, Func Offset: 0x124
	// Line 88, Address: 0x2b6338, Func Offset: 0x128
	// Line 77, Address: 0x2b633c, Func Offset: 0x12c
	// Line 88, Address: 0x2b6340, Func Offset: 0x130
	// Line 77, Address: 0x2b6344, Func Offset: 0x134
	// Line 79, Address: 0x2b6348, Func Offset: 0x138
	// Line 77, Address: 0x2b634c, Func Offset: 0x13c
	// Line 88, Address: 0x2b6350, Func Offset: 0x140
	// Line 78, Address: 0x2b6354, Func Offset: 0x144
	// Line 88, Address: 0x2b6358, Func Offset: 0x148
	// Line 78, Address: 0x2b635c, Func Offset: 0x14c
	// Line 80, Address: 0x2b6360, Func Offset: 0x150
	// Line 78, Address: 0x2b6364, Func Offset: 0x154
	// Line 88, Address: 0x2b6368, Func Offset: 0x158
	// Line 78, Address: 0x2b636c, Func Offset: 0x15c
	// Line 79, Address: 0x2b6370, Func Offset: 0x160
	// Line 80, Address: 0x2b6374, Func Offset: 0x164
	// Line 88, Address: 0x2b6378, Func Offset: 0x168
	// Line 95, Address: 0x2b6394, Func Offset: 0x184
	// Line 96, Address: 0x2b63b0, Func Offset: 0x1a0
	// Line 105, Address: 0x2b64a4, Func Offset: 0x294
	// Line 96, Address: 0x2b64a8, Func Offset: 0x298
	// Line 105, Address: 0x2b64b0, Func Offset: 0x2a0
	// Line 96, Address: 0x2b64b4, Func Offset: 0x2a4
	// Line 105, Address: 0x2b64f8, Func Offset: 0x2e8
	// Line 112, Address: 0x2b651c, Func Offset: 0x30c
	// Line 113, Address: 0x2b6524, Func Offset: 0x314
	// Line 117, Address: 0x2b652c, Func Offset: 0x31c
	// Line 121, Address: 0x2b6538, Func Offset: 0x328
	// Line 128, Address: 0x2b6560, Func Offset: 0x350
	// Line 129, Address: 0x2b6568, Func Offset: 0x358
	// Line 133, Address: 0x2b6570, Func Offset: 0x360
	// Line 136, Address: 0x2b657c, Func Offset: 0x36c
	// Func End, Address: 0x2b6584, Func Offset: 0x374
}

// DoReset__7zUITextFv
// Start address: 0x2b6590
void zUIText::DoReset()
{
	// Line 52, Address: 0x2b6590, Func Offset: 0
	// Line 53, Address: 0x2b659c, Func Offset: 0xc
	// Line 54, Address: 0x2b6624, Func Offset: 0x94
	// Line 55, Address: 0x2b6628, Func Offset: 0x98
	// Line 56, Address: 0x2b664c, Func Offset: 0xbc
	// Func End, Address: 0x2b665c, Func Offset: 0xcc
}

// DoInit__7zUITextFv
// Start address: 0x2b6660
void zUIText::DoInit()
{
	// Line 43, Address: 0x2b6660, Func Offset: 0
	// Line 44, Address: 0x2b6678, Func Offset: 0x18
	// Line 45, Address: 0x2b66c8, Func Offset: 0x68
	// Line 46, Address: 0x2b66d4, Func Offset: 0x74
	// Line 48, Address: 0x2b66e0, Func Offset: 0x80
	// Line 49, Address: 0x2b6704, Func Offset: 0xa4
	// Func End, Address: 0x2b6714, Func Offset: 0xb4
}

