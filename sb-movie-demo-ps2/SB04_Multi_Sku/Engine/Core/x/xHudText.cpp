



void set_text(int8* intext);
void render();
void update(float32 dt);
uint8 is(uint32 id);
uint32 type();
void destroy();
void setup();
void load(xBase& data, xDynAsset& asset);

// set_text__Q24xhud11text_widgetFPCc
// Start address: 0x3ccff0
void text_widget::set_text(int8* intext)
{
	uint32 textchars;
	// Line 144, Address: 0x3ccff0, Func Offset: 0
	// Line 146, Address: 0x3cd00c, Func Offset: 0x1c
	// Line 147, Address: 0x3cd014, Func Offset: 0x24
	// Line 148, Address: 0x3cd024, Func Offset: 0x34
	// Line 149, Address: 0x3cd034, Func Offset: 0x44
	// Line 150, Address: 0x3cd03c, Func Offset: 0x4c
	// Func End, Address: 0x3cd054, Func Offset: 0x64
}

// render__Q24xhud11text_widgetFv
// Start address: 0x3cd060
void text_widget::render()
{
	// Line 120, Address: 0x3cd060, Func Offset: 0
	// Line 140, Address: 0x3cd064, Func Offset: 0x4
	// Line 120, Address: 0x3cd068, Func Offset: 0x8
	// Line 140, Address: 0x3cd074, Func Offset: 0x14
	// Line 141, Address: 0x3cd090, Func Offset: 0x30
	// Func End, Address: 0x3cd0a0, Func Offset: 0x40
}

// update__Q24xhud11text_widgetFf
// Start address: 0x3cd0a0
void text_widget::update(float32 dt)
{
	// Line 100, Address: 0x3cd0a0, Func Offset: 0
	// Line 101, Address: 0x3cd0ac, Func Offset: 0xc
	// Line 103, Address: 0x3cd0b4, Func Offset: 0x14
	// Line 104, Address: 0x3cd0e0, Func Offset: 0x40
	// Line 105, Address: 0x3cd0e8, Func Offset: 0x48
	// Line 106, Address: 0x3cd0f0, Func Offset: 0x50
	// Line 107, Address: 0x3cd0f8, Func Offset: 0x58
	// Line 109, Address: 0x3cd100, Func Offset: 0x60
	// Line 117, Address: 0x3cd11c, Func Offset: 0x7c
	// Line 103, Address: 0x3cd128, Func Offset: 0x88
	// Line 117, Address: 0x3cd130, Func Offset: 0x90
	// Func End, Address: 0x3cd140, Func Offset: 0xa0
}

// is__Q24xhud11text_widgetCFUi
// Start address: 0x3cd140
uint8 is(uint32 id)
{
	int8 @22561;
	uint32 myid;
	// Line 95, Address: 0x3cd140, Func Offset: 0
	// Line 96, Address: 0x3cd14c, Func Offset: 0xc
	// Line 97, Address: 0x3cd1c4, Func Offset: 0x84
	// Func End, Address: 0x3cd1d4, Func Offset: 0x94
}

// type__Q24xhud11text_widgetCFv
// Start address: 0x3cd1e0
uint32 type()
{
	// Line 89, Address: 0x3cd1e0, Func Offset: 0
	// Line 90, Address: 0x3cd1e8, Func Offset: 0x8
	// Line 91, Address: 0x3cd1f4, Func Offset: 0x14
	// Line 90, Address: 0x3cd208, Func Offset: 0x28
	// Line 92, Address: 0x3cd214, Func Offset: 0x34
	// Func End, Address: 0x3cd220, Func Offset: 0x40
}

// destroy__Q24xhud11text_widgetFv
// Start address: 0x3cd220
void text_widget::destroy()
{
	// Line 86, Address: 0x3cd220, Func Offset: 0
	// Func End, Address: 0x3cd228, Func Offset: 0x8
}

// setup__Q24xhud11text_widgetFv
// Start address: 0x3cd230
void text_widget::setup()
{
	text_asset& ta;
	ztextbox* ztb;
	uint32 len;
	int8* s;
	// Line 29, Address: 0x3cd230, Func Offset: 0
	// Line 30, Address: 0x3cd244, Func Offset: 0x14
	// Line 32, Address: 0x3cd24c, Func Offset: 0x1c
	// Line 33, Address: 0x3cd250, Func Offset: 0x20
	// Line 36, Address: 0x3cd25c, Func Offset: 0x2c
	// Line 41, Address: 0x3cd264, Func Offset: 0x34
	// Line 42, Address: 0x3cd26c, Func Offset: 0x3c
	// Line 44, Address: 0x3cd270, Func Offset: 0x40
	// Line 42, Address: 0x3cd274, Func Offset: 0x44
	// Line 44, Address: 0x3cd278, Func Offset: 0x48
	// Line 42, Address: 0x3cd27c, Func Offset: 0x4c
	// Line 44, Address: 0x3cd280, Func Offset: 0x50
	// Line 42, Address: 0x3cd284, Func Offset: 0x54
	// Line 44, Address: 0x3cd35c, Func Offset: 0x12c
	// Line 45, Address: 0x3cd368, Func Offset: 0x138
	// Line 60, Address: 0x3cd370, Func Offset: 0x140
	// Line 61, Address: 0x3cd424, Func Offset: 0x1f4
	// Line 62, Address: 0x3cd4d8, Func Offset: 0x2a8
	// Line 63, Address: 0x3cd58c, Func Offset: 0x35c
	// Line 64, Address: 0x3cd640, Func Offset: 0x410
	// Line 65, Address: 0x3cd648, Func Offset: 0x418
	// Line 66, Address: 0x3cd650, Func Offset: 0x420
	// Line 67, Address: 0x3cd658, Func Offset: 0x428
	// Line 81, Address: 0x3cd65c, Func Offset: 0x42c
	// Line 38, Address: 0x3cd6d8, Func Offset: 0x4a8
	// Line 81, Address: 0x3cd6dc, Func Offset: 0x4ac
	// Line 39, Address: 0x3cd934, Func Offset: 0x704
	// Line 81, Address: 0x3cd93c, Func Offset: 0x70c
	// Line 48, Address: 0x3cd944, Func Offset: 0x714
	// Line 81, Address: 0x3cd948, Func Offset: 0x718
	// Line 54, Address: 0x3cd960, Func Offset: 0x730
	// Line 81, Address: 0x3cd96c, Func Offset: 0x73c
	// Func End, Address: 0x3cd984, Func Offset: 0x754
}

// load__Q24xhud11text_widgetFR5xBaseR9xDynAssetUi
// Start address: 0x3cd990
void load(xBase& data, xDynAsset& asset)
{
	// Line 14, Address: 0x3cd990, Func Offset: 0
	// Line 16, Address: 0x3cd9a4, Func Offset: 0x14
	// Line 18, Address: 0x3cd9cc, Func Offset: 0x3c
	// Line 19, Address: 0x3cdad4, Func Offset: 0x144
	// Func End, Address: 0x3cdae8, Func Offset: 0x158
}

