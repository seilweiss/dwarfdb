



void render();
void update(float32 dt);
void setup();
uint8 is(uint32 id);
uint32 type();
void destroy();
void* __ct(unit_meter_asset& a);
void load(xBase& data, xDynAsset& asset);

// render__Q24xhud17unit_meter_widgetFv
// Start address: 0x3cc570
void unit_meter_widget::render()
{
	render_context unitrc;
	int32 units;
	int32 i;
	int32 which;
	// Line 150, Address: 0x3cc570, Func Offset: 0
	// Line 151, Address: 0x3cc578, Func Offset: 0x8
	// Line 150, Address: 0x3cc57c, Func Offset: 0xc
	// Line 151, Address: 0x3cc598, Func Offset: 0x28
	// Line 150, Address: 0x3cc59c, Func Offset: 0x2c
	// Line 151, Address: 0x3cc5a0, Func Offset: 0x30
	// Line 150, Address: 0x3cc5a4, Func Offset: 0x34
	// Line 151, Address: 0x3cc5c0, Func Offset: 0x50
	// Line 152, Address: 0x3cc5e0, Func Offset: 0x70
	// Line 155, Address: 0x3cc614, Func Offset: 0xa4
	// Line 156, Address: 0x3cc634, Func Offset: 0xc4
	// Line 158, Address: 0x3cc644, Func Offset: 0xd4
	// Line 160, Address: 0x3cc674, Func Offset: 0x104
	// Line 161, Address: 0x3cc678, Func Offset: 0x108
	// Line 163, Address: 0x3cc6a0, Func Offset: 0x130
	// Line 165, Address: 0x3cc6b4, Func Offset: 0x144
	// Line 167, Address: 0x3cc6bc, Func Offset: 0x14c
	// Line 165, Address: 0x3cc6c4, Func Offset: 0x154
	// Line 175, Address: 0x3cc6c8, Func Offset: 0x158
	// Line 167, Address: 0x3cc6cc, Func Offset: 0x15c
	// Line 165, Address: 0x3cc6d4, Func Offset: 0x164
	// Line 175, Address: 0x3cc6d8, Func Offset: 0x168
	// Line 167, Address: 0x3cc6dc, Func Offset: 0x16c
	// Line 168, Address: 0x3cc6e4, Func Offset: 0x174
	// Line 167, Address: 0x3cc6ec, Func Offset: 0x17c
	// Line 168, Address: 0x3cc6f0, Func Offset: 0x180
	// Line 167, Address: 0x3cc6f4, Func Offset: 0x184
	// Line 168, Address: 0x3cc700, Func Offset: 0x190
	// Line 167, Address: 0x3cc704, Func Offset: 0x194
	// Line 168, Address: 0x3cc708, Func Offset: 0x198
	// Line 169, Address: 0x3cc710, Func Offset: 0x1a0
	// Line 171, Address: 0x3cc718, Func Offset: 0x1a8
	// Line 172, Address: 0x3cc720, Func Offset: 0x1b0
	// Line 169, Address: 0x3cc728, Func Offset: 0x1b8
	// Line 171, Address: 0x3cc734, Func Offset: 0x1c4
	// Line 172, Address: 0x3cc738, Func Offset: 0x1c8
	// Line 175, Address: 0x3cc73c, Func Offset: 0x1cc
	// Line 176, Address: 0x3cc8f8, Func Offset: 0x388
	// Line 177, Address: 0x3cc908, Func Offset: 0x398
	// Line 161, Address: 0x3cc914, Func Offset: 0x3a4
	// Line 177, Address: 0x3cc918, Func Offset: 0x3a8
	// Line 161, Address: 0x3cc920, Func Offset: 0x3b0
	// Line 177, Address: 0x3cc924, Func Offset: 0x3b4
	// Func End, Address: 0x3cc97c, Func Offset: 0x40c
}

// update__Q24xhud17unit_meter_widgetFf
// Start address: 0x3cc980
void unit_meter_widget::update(float32 dt)
{
	int32 units;
	int32 i;
	int32 which;
	xModelInstance* m;
	float32 duration;
	float32 time;
	// Line 118, Address: 0x3cc980, Func Offset: 0
	// Line 119, Address: 0x3cc9a4, Func Offset: 0x24
	// Line 120, Address: 0x3cc9ac, Func Offset: 0x2c
	// Line 121, Address: 0x3cc9ec, Func Offset: 0x6c
	// Line 122, Address: 0x3cc9f0, Func Offset: 0x70
	// Line 121, Address: 0x3cc9fc, Func Offset: 0x7c
	// Line 122, Address: 0x3cca04, Func Offset: 0x84
	// Line 123, Address: 0x3cca18, Func Offset: 0x98
	// Line 127, Address: 0x3cca28, Func Offset: 0xa8
	// Line 129, Address: 0x3cca38, Func Offset: 0xb8
	// Line 130, Address: 0x3cca3c, Func Offset: 0xbc
	// Line 132, Address: 0x3cca70, Func Offset: 0xf0
	// Line 133, Address: 0x3cca78, Func Offset: 0xf8
	// Line 134, Address: 0x3cca84, Func Offset: 0x104
	// Line 136, Address: 0x3cca98, Func Offset: 0x118
	// Line 137, Address: 0x3cca9c, Func Offset: 0x11c
	// Line 136, Address: 0x3ccaa0, Func Offset: 0x120
	// Line 137, Address: 0x3ccaac, Func Offset: 0x12c
	// Line 138, Address: 0x3ccab8, Func Offset: 0x138
	// Line 140, Address: 0x3ccad0, Func Offset: 0x150
	// Line 141, Address: 0x3ccae8, Func Offset: 0x168
	// Line 144, Address: 0x3ccaec, Func Offset: 0x16c
	// Line 141, Address: 0x3ccaf0, Func Offset: 0x170
	// Line 144, Address: 0x3ccaf4, Func Offset: 0x174
	// Line 145, Address: 0x3ccafc, Func Offset: 0x17c
	// Line 146, Address: 0x3ccb10, Func Offset: 0x190
	// Line 130, Address: 0x3ccb1c, Func Offset: 0x19c
	// Line 146, Address: 0x3ccb20, Func Offset: 0x1a0
	// Line 130, Address: 0x3ccb28, Func Offset: 0x1a8
	// Line 146, Address: 0x3ccb2c, Func Offset: 0x1ac
	// Func End, Address: 0x3ccb64, Func Offset: 0x1e4
}

// setup__Q24xhud17unit_meter_widgetFv
// Start address: 0x3ccb70
void unit_meter_widget::setup()
{
	int8 tempString[128];
	int32 i;
	int8* modelName[2];
	// Line 84, Address: 0x3ccb70, Func Offset: 0
	// Line 98, Address: 0x3ccb80, Func Offset: 0x10
	// Line 85, Address: 0x3ccb84, Func Offset: 0x14
	// Line 97, Address: 0x3ccb88, Func Offset: 0x18
	// Line 100, Address: 0x3ccb9c, Func Offset: 0x2c
	// Line 103, Address: 0x3ccbb0, Func Offset: 0x40
	// Line 106, Address: 0x3ccbc4, Func Offset: 0x54
	// Line 109, Address: 0x3ccbd8, Func Offset: 0x68
	// Line 112, Address: 0x3ccbec, Func Offset: 0x7c
	// Line 114, Address: 0x3ccc00, Func Offset: 0x90
	// Line 115, Address: 0x3ccc10, Func Offset: 0xa0
	// Func End, Address: 0x3ccc24, Func Offset: 0xb4
}

// is__Q24xhud17unit_meter_widgetCFUi
// Start address: 0x3ccc30
uint8 is(uint32 id)
{
	int8 @22373;
	uint32 myid;
	int8 @22696;
	uint32 myid;
	// Line 74, Address: 0x3ccc30, Func Offset: 0
	// Line 75, Address: 0x3ccc3c, Func Offset: 0xc
	// Line 76, Address: 0x3cccf4, Func Offset: 0xc4
	// Func End, Address: 0x3ccd04, Func Offset: 0xd4
}

// type__Q24xhud17unit_meter_widgetCFv
// Start address: 0x3ccd10
uint32 type()
{
	// Line 68, Address: 0x3ccd10, Func Offset: 0
	// Line 69, Address: 0x3ccd18, Func Offset: 0x8
	// Line 70, Address: 0x3ccd24, Func Offset: 0x14
	// Line 69, Address: 0x3ccd38, Func Offset: 0x28
	// Line 71, Address: 0x3ccd44, Func Offset: 0x34
	// Func End, Address: 0x3ccd50, Func Offset: 0x40
}

// destroy__Q24xhud17unit_meter_widgetFv
// Start address: 0x3ccd50
void unit_meter_widget::destroy()
{
	// Line 65, Address: 0x3ccd50, Func Offset: 0
	// Func End, Address: 0x3ccd58, Func Offset: 0x8
}

// __ct__Q24xhud17unit_meter_widgetFRCQ24xhud16unit_meter_asset
// Start address: 0x3ccd60
void* unit_meter_widget::__ct(unit_meter_asset& a)
{
	int32 i;
	int32 j;
	uint8 registered;
	// Line 27, Address: 0x3ccd60, Func Offset: 0
	// Line 30, Address: 0x3ccdd0, Func Offset: 0x70
	// Line 32, Address: 0x3ccde0, Func Offset: 0x80
	// Line 34, Address: 0x3ccde8, Func Offset: 0x88
	// Line 35, Address: 0x3ccdf4, Func Offset: 0x94
	// Line 37, Address: 0x3ccdfc, Func Offset: 0x9c
	// Line 35, Address: 0x3cce00, Func Offset: 0xa0
	// Line 34, Address: 0x3cce04, Func Offset: 0xa4
	// Line 40, Address: 0x3cce08, Func Offset: 0xa8
	// Line 35, Address: 0x3cce0c, Func Offset: 0xac
	// Line 32, Address: 0x3cce10, Func Offset: 0xb0
	// Line 40, Address: 0x3cce14, Func Offset: 0xb4
	// Line 34, Address: 0x3cce18, Func Offset: 0xb8
	// Line 35, Address: 0x3cce1c, Func Offset: 0xbc
	// Line 34, Address: 0x3cce20, Func Offset: 0xc0
	// Line 37, Address: 0x3cce24, Func Offset: 0xc4
	// Line 35, Address: 0x3cce28, Func Offset: 0xc8
	// Line 37, Address: 0x3cce2c, Func Offset: 0xcc
	// Line 38, Address: 0x3cce30, Func Offset: 0xd0
	// Line 40, Address: 0x3cce3c, Func Offset: 0xdc
	// Line 43, Address: 0x3cce70, Func Offset: 0x110
	// Line 40, Address: 0x3cce74, Func Offset: 0x114
	// Line 43, Address: 0x3cce78, Func Offset: 0x118
	// Line 44, Address: 0x3cce84, Func Offset: 0x124
	// Line 43, Address: 0x3cce88, Func Offset: 0x128
	// Line 44, Address: 0x3cce8c, Func Offset: 0x12c
	// Line 43, Address: 0x3cce90, Func Offset: 0x130
	// Line 44, Address: 0x3cce94, Func Offset: 0x134
	// Line 47, Address: 0x3cce9c, Func Offset: 0x13c
	// Line 52, Address: 0x3ccea8, Func Offset: 0x148
	// Line 53, Address: 0x3cceb4, Func Offset: 0x154
	// Line 52, Address: 0x3cceb8, Func Offset: 0x158
	// Line 53, Address: 0x3ccebc, Func Offset: 0x15c
	// Line 54, Address: 0x3ccec8, Func Offset: 0x168
	// Line 52, Address: 0x3ccecc, Func Offset: 0x16c
	// Line 53, Address: 0x3cced0, Func Offset: 0x170
	// Line 52, Address: 0x3cced4, Func Offset: 0x174
	// Line 54, Address: 0x3cced8, Func Offset: 0x178
	// Line 40, Address: 0x3ccef8, Func Offset: 0x198
	// Line 54, Address: 0x3ccf08, Func Offset: 0x1a8
	// Line 40, Address: 0x3ccf1c, Func Offset: 0x1bc
	// Line 54, Address: 0x3ccf20, Func Offset: 0x1c0
	// Line 40, Address: 0x3ccf28, Func Offset: 0x1c8
	// Line 54, Address: 0x3ccf2c, Func Offset: 0x1cc
	// Line 40, Address: 0x3ccf40, Func Offset: 0x1e0
	// Line 49, Address: 0x3ccf48, Func Offset: 0x1e8
	// Line 54, Address: 0x3ccf54, Func Offset: 0x1f4
	// Func End, Address: 0x3ccf84, Func Offset: 0x224
}

// load__Q24xhud17unit_meter_widgetFR5xBaseR9xDynAssetUi
// Start address: 0x3ccf90
void load(xBase& data, xDynAsset& asset)
{
	// Line 19, Address: 0x3ccf90, Func Offset: 0
	// Line 21, Address: 0x3ccfa4, Func Offset: 0x14
	// Line 23, Address: 0x3ccfcc, Func Offset: 0x3c
	// Line 24, Address: 0x3ccfdc, Func Offset: 0x4c
	// Func End, Address: 0x3ccff0, Func Offset: 0x60
}

