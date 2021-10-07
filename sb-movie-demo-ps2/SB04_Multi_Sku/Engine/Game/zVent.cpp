



void cbDispatch(xBase* to, uint32 event);
void load(xBase& data, xDynAsset& asset);
void changeState(eVentState newState);
void update(float32 dt);
void load(asset_type_2& a);

// cbDispatch__5zVentFP5xBaseP5xBaseUiPCfP5xBaseUi
// Start address: 0x2df030
void zVent::cbDispatch(xBase* to, uint32 event)
{
	zVent& e;
	// Line 437, Address: 0x2df030, Func Offset: 0
	// Line 442, Address: 0x2df034, Func Offset: 0x4
	// Line 446, Address: 0x2df080, Func Offset: 0x50
	// Line 447, Address: 0x2df08c, Func Offset: 0x5c
	// Line 450, Address: 0x2df094, Func Offset: 0x64
	// Line 451, Address: 0x2df09c, Func Offset: 0x6c
	// Line 454, Address: 0x2df0a4, Func Offset: 0x74
	// Line 455, Address: 0x2df0ac, Func Offset: 0x7c
	// Line 458, Address: 0x2df0b4, Func Offset: 0x84
	// Line 459, Address: 0x2df0bc, Func Offset: 0x8c
	// Line 462, Address: 0x2df0c4, Func Offset: 0x94
	// Line 468, Address: 0x2df0d0, Func Offset: 0xa0
	// Func End, Address: 0x2df0dc, Func Offset: 0xac
}

// load__5zVentFR5xBaseR9xDynAssetUi
// Start address: 0x2df0e0
void zVent::load(xBase& data, xDynAsset& asset)
{
	// Line 377, Address: 0x2df0e0, Func Offset: 0
	// Func End, Address: 0x2df0e8, Func Offset: 0x8
}

// changeState__5zVentF10eVentState
// Start address: 0x2df0f0
void zVent::changeState(eVentState newState)
{
	// Line 318, Address: 0x2df0f0, Func Offset: 0
	// Line 319, Address: 0x2df0f4, Func Offset: 0x4
	// Line 318, Address: 0x2df0f8, Func Offset: 0x8
	// Line 319, Address: 0x2df100, Func Offset: 0x10
	// Line 322, Address: 0x2df12c, Func Offset: 0x3c
	// Line 327, Address: 0x2df13c, Func Offset: 0x4c
	// Line 329, Address: 0x2df17c, Func Offset: 0x8c
	// Line 332, Address: 0x2df184, Func Offset: 0x94
	// Line 337, Address: 0x2df194, Func Offset: 0xa4
	// Line 338, Address: 0x2df1d4, Func Offset: 0xe4
	// Line 341, Address: 0x2df1d8, Func Offset: 0xe8
	// Line 344, Address: 0x2df1e0, Func Offset: 0xf0
	// Line 349, Address: 0x2df1f0, Func Offset: 0x100
	// Line 350, Address: 0x2df230, Func Offset: 0x140
	// Line 353, Address: 0x2df234, Func Offset: 0x144
	// Line 356, Address: 0x2df23c, Func Offset: 0x14c
	// Line 361, Address: 0x2df24c, Func Offset: 0x15c
	// Line 367, Address: 0x2df254, Func Offset: 0x164
	// Line 325, Address: 0x2df264, Func Offset: 0x174
	// Line 367, Address: 0x2df270, Func Offset: 0x180
	// Line 335, Address: 0x2df278, Func Offset: 0x188
	// Line 367, Address: 0x2df284, Func Offset: 0x194
	// Line 347, Address: 0x2df28c, Func Offset: 0x19c
	// Line 367, Address: 0x2df298, Func Offset: 0x1a8
	// Line 359, Address: 0x2df2a0, Func Offset: 0x1b0
	// Line 367, Address: 0x2df2ac, Func Offset: 0x1bc
	// Func End, Address: 0x2df2b8, Func Offset: 0x1c8
}

// update__5zVentFf
// Start address: 0x2df2c0
void zVent::update(float32 dt)
{
	xParEmitter* pEmit;
	xParEmitterCustomSettings ventInfo;
	xMat4x3* pMat;
	xVec3 ventVel;
	uint8 fIsSpongeball;
	uint8 fDamageSpongeball;
	xCollis collide;
	xBound bnd;
	xBox box;
	cbVentHitsBoulder cb;
	// Line 203, Address: 0x2df2c0, Func Offset: 0
	// Line 204, Address: 0x2df2d8, Func Offset: 0x18
	// Line 207, Address: 0x2df2e4, Func Offset: 0x24
	// Line 210, Address: 0x2df2f4, Func Offset: 0x34
	// Line 212, Address: 0x2df308, Func Offset: 0x48
	// Line 213, Address: 0x2df30c, Func Offset: 0x4c
	// Line 212, Address: 0x2df314, Func Offset: 0x54
	// Line 213, Address: 0x2df318, Func Offset: 0x58
	// Line 215, Address: 0x2df324, Func Offset: 0x64
	// Line 218, Address: 0x2df350, Func Offset: 0x90
	// Line 219, Address: 0x2df358, Func Offset: 0x98
	// Line 220, Address: 0x2df360, Func Offset: 0xa0
	// Line 222, Address: 0x2df368, Func Offset: 0xa8
	// Line 223, Address: 0x2df370, Func Offset: 0xb0
	// Line 224, Address: 0x2df378, Func Offset: 0xb8
	// Line 226, Address: 0x2df380, Func Offset: 0xc0
	// Line 227, Address: 0x2df388, Func Offset: 0xc8
	// Line 239, Address: 0x2df398, Func Offset: 0xd8
	// Line 240, Address: 0x2df3a0, Func Offset: 0xe0
	// Line 241, Address: 0x2df3a8, Func Offset: 0xe8
	// Line 242, Address: 0x2df3b0, Func Offset: 0xf0
	// Line 248, Address: 0x2df3b4, Func Offset: 0xf4
	// Line 251, Address: 0x2df3c4, Func Offset: 0x104
	// Line 250, Address: 0x2df3c8, Func Offset: 0x108
	// Line 251, Address: 0x2df3cc, Func Offset: 0x10c
	// Line 256, Address: 0x2df3d4, Func Offset: 0x114
	// Line 251, Address: 0x2df3dc, Func Offset: 0x11c
	// Line 256, Address: 0x2df3ec, Func Offset: 0x12c
	// Line 259, Address: 0x2df438, Func Offset: 0x178
	// Line 262, Address: 0x2df440, Func Offset: 0x180
	// Line 259, Address: 0x2df444, Func Offset: 0x184
	// Line 262, Address: 0x2df448, Func Offset: 0x188
	// Line 258, Address: 0x2df450, Func Offset: 0x190
	// Line 259, Address: 0x2df468, Func Offset: 0x1a8
	// Line 260, Address: 0x2df474, Func Offset: 0x1b4
	// Line 261, Address: 0x2df48c, Func Offset: 0x1cc
	// Line 262, Address: 0x2df4a0, Func Offset: 0x1e0
	// Line 264, Address: 0x2df4a8, Func Offset: 0x1e8
	// Line 268, Address: 0x2df4b8, Func Offset: 0x1f8
	// Line 269, Address: 0x2df4d8, Func Offset: 0x218
	// Line 270, Address: 0x2df4e4, Func Offset: 0x224
	// Line 273, Address: 0x2df4f4, Func Offset: 0x234
	// Line 274, Address: 0x2df504, Func Offset: 0x244
	// Line 276, Address: 0x2df638, Func Offset: 0x378
	// Line 281, Address: 0x2df644, Func Offset: 0x384
	// Line 284, Address: 0x2df65c, Func Offset: 0x39c
	// Line 286, Address: 0x2df744, Func Offset: 0x484
	// Line 293, Address: 0x2df748, Func Offset: 0x488
	// Line 286, Address: 0x2df750, Func Offset: 0x490
	// Line 291, Address: 0x2df754, Func Offset: 0x494
	// Line 293, Address: 0x2df758, Func Offset: 0x498
	// Line 286, Address: 0x2df764, Func Offset: 0x4a4
	// Line 287, Address: 0x2df77c, Func Offset: 0x4bc
	// Line 288, Address: 0x2df788, Func Offset: 0x4c8
	// Line 289, Address: 0x2df794, Func Offset: 0x4d4
	// Line 291, Address: 0x2df7a4, Func Offset: 0x4e4
	// Line 293, Address: 0x2df7c4, Func Offset: 0x504
	// Line 295, Address: 0x2df7cc, Func Offset: 0x50c
	// Func End, Address: 0x2df7e4, Func Offset: 0x524
}

// load__5zVentFRCQ25zVent10asset_type
// Start address: 0x2df7f0
void zVent::load(asset_type_2& a)
{
	// Line 79, Address: 0x2df7f0, Func Offset: 0
	// Line 80, Address: 0x2df7f4, Func Offset: 0x4
	// Line 79, Address: 0x2df7f8, Func Offset: 0x8
	// Line 80, Address: 0x2df80c, Func Offset: 0x1c
	// Line 81, Address: 0x2df814, Func Offset: 0x24
	// Line 82, Address: 0x2df820, Func Offset: 0x30
	// Line 84, Address: 0x2df824, Func Offset: 0x34
	// Line 82, Address: 0x2df828, Func Offset: 0x38
	// Line 84, Address: 0x2df82c, Func Offset: 0x3c
	// Line 83, Address: 0x2df830, Func Offset: 0x40
	// Line 84, Address: 0x2df834, Func Offset: 0x44
	// Line 85, Address: 0x2df838, Func Offset: 0x48
	// Line 87, Address: 0x2df848, Func Offset: 0x58
	// Line 90, Address: 0x2df87c, Func Offset: 0x8c
	// Line 92, Address: 0x2df884, Func Offset: 0x94
	// Line 93, Address: 0x2df8ec, Func Offset: 0xfc
	// Line 97, Address: 0x2df8f0, Func Offset: 0x100
	// Line 106, Address: 0x2df8f4, Func Offset: 0x104
	// Line 98, Address: 0x2df8f8, Func Offset: 0x108
	// Line 100, Address: 0x2df904, Func Offset: 0x114
	// Line 101, Address: 0x2df928, Func Offset: 0x138
	// Line 102, Address: 0x2df94c, Func Offset: 0x15c
	// Line 103, Address: 0x2df970, Func Offset: 0x180
	// Line 104, Address: 0x2dfad0, Func Offset: 0x2e0
	// Line 105, Address: 0x2dfc30, Func Offset: 0x440
	// Line 109, Address: 0x2dfd90, Func Offset: 0x5a0
	// Line 92, Address: 0x2dfd98, Func Offset: 0x5a8
	// Line 109, Address: 0x2dfda0, Func Offset: 0x5b0
	// Func End, Address: 0x2dfdb4, Func Offset: 0x5c4
}

