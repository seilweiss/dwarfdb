



void zUIModel_Init(xBase& data, xDynAsset& asset);
void DoHandleEvent(xBase* from, uint32 toEvent, float32* toParam, xBase* toParamWidget, uint32 toParamWidgetID);
void DoExit();
void DoUpdate(float32 dt, uint32 buttonsPressed);
void DoRender();
void DoReset();
void InitModel();
void DoInit();

// zUIModel_Init__FR5xBaseR9xDynAssetUi
// Start address: 0x2b6720
void zUIModel_Init(xBase& data, xDynAsset& asset)
{
	// Line 229, Address: 0x2b6720, Func Offset: 0
	// Line 230, Address: 0x2b6738, Func Offset: 0x18
	// Line 231, Address: 0x2b6a7c, Func Offset: 0x35c
	// Line 230, Address: 0x2b6a9c, Func Offset: 0x37c
	// Line 231, Address: 0x2b6aa4, Func Offset: 0x384
	// Line 230, Address: 0x2b6aa8, Func Offset: 0x388
	// Line 231, Address: 0x2b6aac, Func Offset: 0x38c
	// Line 230, Address: 0x2b6abc, Func Offset: 0x39c
	// Line 231, Address: 0x2b6ac0, Func Offset: 0x3a0
	// Line 230, Address: 0x2b6ac8, Func Offset: 0x3a8
	// Line 231, Address: 0x2b6ad0, Func Offset: 0x3b0
	// Line 230, Address: 0x2b6b70, Func Offset: 0x450
	// Line 231, Address: 0x2b6b74, Func Offset: 0x454
	// Func End, Address: 0x2b6ba0, Func Offset: 0x480
}

// DoHandleEvent__8zUIModelFP5xBaseUiPCfP5xBaseUi
// Start address: 0x2b6ba0
void zUIModel::DoHandleEvent(xBase* from, uint32 toEvent, float32* toParam, xBase* toParamWidget, uint32 toParamWidgetID)
{
	// Line 191, Address: 0x2b6ba0, Func Offset: 0
	// Line 192, Address: 0x2b6ba4, Func Offset: 0x4
	// Line 191, Address: 0x2b6ba8, Func Offset: 0x8
	// Line 192, Address: 0x2b6bb0, Func Offset: 0x10
	// Line 202, Address: 0x2b6c10, Func Offset: 0x70
	// Line 203, Address: 0x2b6c20, Func Offset: 0x80
	// Line 206, Address: 0x2b6c28, Func Offset: 0x88
	// Line 208, Address: 0x2b6c38, Func Offset: 0x98
	// Line 209, Address: 0x2b6c50, Func Offset: 0xb0
	// Line 210, Address: 0x2b6c5c, Func Offset: 0xbc
	// Line 213, Address: 0x2b6c64, Func Offset: 0xc4
	// Line 217, Address: 0x2b6c6c, Func Offset: 0xcc
	// Func End, Address: 0x2b6c7c, Func Offset: 0xdc
}

// DoExit__8zUIModelFv
// Start address: 0x2b6c80
void zUIModel::DoExit()
{
	// Line 180, Address: 0x2b6c80, Func Offset: 0
	// Line 182, Address: 0x2b6c94, Func Offset: 0x14
	// Line 184, Address: 0x2b6c9c, Func Offset: 0x1c
	// Line 185, Address: 0x2b6ca4, Func Offset: 0x24
	// Line 186, Address: 0x2b6ca8, Func Offset: 0x28
	// Line 188, Address: 0x2b6cac, Func Offset: 0x2c
	// Func End, Address: 0x2b6cbc, Func Offset: 0x3c
}

// DoUpdate__8zUIModelFfUi
// Start address: 0x2b6cc0
void zUIModel::DoUpdate(float32 dt, uint32 buttonsPressed)
{
	// Line 169, Address: 0x2b6cc0, Func Offset: 0
	// Line 170, Address: 0x2b6cd4, Func Offset: 0x14
	// Line 172, Address: 0x2b6ce0, Func Offset: 0x20
	// Line 174, Address: 0x2b6ce8, Func Offset: 0x28
	// Line 175, Address: 0x2b6cf0, Func Offset: 0x30
	// Line 177, Address: 0x2b6cf8, Func Offset: 0x38
	// Func End, Address: 0x2b6d0c, Func Offset: 0x4c
}

// DoRender__8zUIModelCFv
// Start address: 0x2b6d10
void zUIModel::DoRender()
{
	basic_rect r;
	uint32 srcblend;
	uint32 destblend;
	xVec3 to;
	xVec3 from;
	// Line 104, Address: 0x2b6d10, Func Offset: 0
	// Line 105, Address: 0x2b6d14, Func Offset: 0x4
	// Line 104, Address: 0x2b6d18, Func Offset: 0x8
	// Line 105, Address: 0x2b6d28, Func Offset: 0x18
	// Line 112, Address: 0x2b6d30, Func Offset: 0x20
	// Line 119, Address: 0x2b6d88, Func Offset: 0x78
	// Line 112, Address: 0x2b6d8c, Func Offset: 0x7c
	// Line 119, Address: 0x2b6d98, Func Offset: 0x88
	// Line 112, Address: 0x2b6d9c, Func Offset: 0x8c
	// Line 119, Address: 0x2b6dac, Func Offset: 0x9c
	// Line 123, Address: 0x2b6dc0, Func Offset: 0xb0
	// Line 126, Address: 0x2b6dd8, Func Offset: 0xc8
	// Line 127, Address: 0x2b6ddc, Func Offset: 0xcc
	// Line 126, Address: 0x2b6de0, Func Offset: 0xd0
	// Line 129, Address: 0x2b6de4, Func Offset: 0xd4
	// Line 131, Address: 0x2b6e04, Func Offset: 0xf4
	// Line 134, Address: 0x2b6e20, Func Offset: 0x110
	// Line 135, Address: 0x2b6e3c, Func Offset: 0x12c
	// Line 136, Address: 0x2b6e4c, Func Offset: 0x13c
	// Line 137, Address: 0x2b6e5c, Func Offset: 0x14c
	// Line 140, Address: 0x2b6e64, Func Offset: 0x154
	// Line 141, Address: 0x2b6e74, Func Offset: 0x164
	// Line 145, Address: 0x2b6e84, Func Offset: 0x174
	// Line 151, Address: 0x2b6e90, Func Offset: 0x180
	// Line 153, Address: 0x2b6e98, Func Offset: 0x188
	// Line 151, Address: 0x2b6eb0, Func Offset: 0x1a0
	// Line 153, Address: 0x2b6eb8, Func Offset: 0x1a8
	// Line 156, Address: 0x2b6ec0, Func Offset: 0x1b0
	// Line 159, Address: 0x2b6ec8, Func Offset: 0x1b8
	// Line 160, Address: 0x2b6ee4, Func Offset: 0x1d4
	// Line 161, Address: 0x2b6ef4, Func Offset: 0x1e4
	// Line 165, Address: 0x2b6f04, Func Offset: 0x1f4
	// Line 166, Address: 0x2b6f14, Func Offset: 0x204
	// Func End, Address: 0x2b6f2c, Func Offset: 0x21c
}

// DoReset__8zUIModelFv
// Start address: 0x2b6f30
void zUIModel::DoReset()
{
	// Line 99, Address: 0x2b6f30, Func Offset: 0
	// Line 100, Address: 0x2b6f3c, Func Offset: 0xc
	// Line 101, Address: 0x2b6fc4, Func Offset: 0x94
	// Func End, Address: 0x2b6fd4, Func Offset: 0xa4
}

// InitModel__8zUIModelFv
// Start address: 0x2b6fe0
void zUIModel::InitModel()
{
	RpAtomic* imodel;
	xAnimState* state;
	xSurface* surf;
	xModelInstance* minst;
	// Line 39, Address: 0x2b6fe0, Func Offset: 0
	// Line 46, Address: 0x2b6ff4, Func Offset: 0x14
	// Line 41, Address: 0x2b6ff8, Func Offset: 0x18
	// Line 46, Address: 0x2b6ffc, Func Offset: 0x1c
	// Line 50, Address: 0x2b7004, Func Offset: 0x24
	// Line 52, Address: 0x2b700c, Func Offset: 0x2c
	// Line 55, Address: 0x2b7014, Func Offset: 0x34
	// Line 59, Address: 0x2b701c, Func Offset: 0x3c
	// Line 60, Address: 0x2b702c, Func Offset: 0x4c
	// Line 61, Address: 0x2b7034, Func Offset: 0x54
	// Line 64, Address: 0x2b7050, Func Offset: 0x70
	// Line 65, Address: 0x2b7064, Func Offset: 0x84
	// Line 68, Address: 0x2b70a4, Func Offset: 0xc4
	// Line 79, Address: 0x2b70b0, Func Offset: 0xd0
	// Line 80, Address: 0x2b70b8, Func Offset: 0xd8
	// Line 81, Address: 0x2b70c0, Func Offset: 0xe0
	// Line 83, Address: 0x2b70c8, Func Offset: 0xe8
	// Line 87, Address: 0x2b70d0, Func Offset: 0xf0
	// Line 88, Address: 0x2b70d4, Func Offset: 0xf4
	// Line 89, Address: 0x2b70dc, Func Offset: 0xfc
	// Line 90, Address: 0x2b70e0, Func Offset: 0x100
	// Line 91, Address: 0x2b70e4, Func Offset: 0x104
	// Line 96, Address: 0x2b70f8, Func Offset: 0x118
	// Line 70, Address: 0x2b711c, Func Offset: 0x13c
	// Line 96, Address: 0x2b7120, Func Offset: 0x140
	// Line 73, Address: 0x2b7148, Func Offset: 0x168
	// Line 96, Address: 0x2b714c, Func Offset: 0x16c
	// Line 75, Address: 0x2b7158, Func Offset: 0x178
	// Line 96, Address: 0x2b715c, Func Offset: 0x17c
	// Func End, Address: 0x2b7190, Func Offset: 0x1b0
}

// DoInit__8zUIModelFv
// Start address: 0x2b7190
void zUIModel::DoInit()
{
	// Line 30, Address: 0x2b7190, Func Offset: 0
	// Line 31, Address: 0x2b71a8, Func Offset: 0x18
	// Line 32, Address: 0x2b71f0, Func Offset: 0x60
	// Line 33, Address: 0x2b71fc, Func Offset: 0x6c
	// Line 35, Address: 0x2b7208, Func Offset: 0x78
	// Line 36, Address: 0x2b7210, Func Offset: 0x80
	// Func End, Address: 0x2b7220, Func Offset: 0x90
}

