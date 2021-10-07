



hud_system& instance();
void destroy();
void add(hud_element* element);
void hide();
void show(uint8 autohide);
void render();
void update(float32 dt);
void init();
void shutdown();
void startup();
void init();
void EventHandlerFunc(xBase* from, xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget, uint32 toParamWidgetID);

// instance__Q24zHud10hud_systemFv
// Start address: 0x37d1e0
hud_system& instance()
{
	int8 @5465;
	hud_system _instance;
	// Line 241, Address: 0x37d1e0, Func Offset: 0
	// Line 243, Address: 0x37d1ec, Func Offset: 0xc
	// Line 244, Address: 0x37d1fc, Func Offset: 0x1c
	// Func End, Address: 0x37d204, Func Offset: 0x24
}

// destroy__Q24zHud10hud_systemFv
// Start address: 0x37d210
void hud_system::destroy()
{
	hud_element* element;
	// Line 229, Address: 0x37d210, Func Offset: 0
	// Line 230, Address: 0x37d220, Func Offset: 0x10
	// Line 232, Address: 0x37d22c, Func Offset: 0x1c
	// Line 233, Address: 0x37d23c, Func Offset: 0x2c
	// Line 235, Address: 0x37d248, Func Offset: 0x38
	// Line 236, Address: 0x37d250, Func Offset: 0x40
	// Func End, Address: 0x37d264, Func Offset: 0x54
}

// add__Q24zHud10hud_systemFPQ24zHud11hud_element
// Start address: 0x37d270
void hud_system::add(hud_element* element)
{
	// Line 222, Address: 0x37d270, Func Offset: 0
	// Line 223, Address: 0x37d284, Func Offset: 0x14
	// Line 224, Address: 0x37d298, Func Offset: 0x28
	// Line 225, Address: 0x37d2a0, Func Offset: 0x30
	// Line 226, Address: 0x37d2a4, Func Offset: 0x34
	// Func End, Address: 0x37d2b8, Func Offset: 0x48
}

// hide__Q24zHud10hud_systemFv
// Start address: 0x37d2c0
void hud_system::hide()
{
	hud_element* element;
	// Line 211, Address: 0x37d2c0, Func Offset: 0
	// Line 213, Address: 0x37d2cc, Func Offset: 0xc
	// Line 216, Address: 0x37d2d8, Func Offset: 0x18
	// Line 217, Address: 0x37d2e8, Func Offset: 0x28
	// Line 219, Address: 0x37d2f8, Func Offset: 0x38
	// Func End, Address: 0x37d308, Func Offset: 0x48
}

// show__Q24zHud10hud_systemFb
// Start address: 0x37d310
void hud_system::show(uint8 autohide)
{
	hud_element* element;
	// Line 202, Address: 0x37d310, Func Offset: 0
	// Line 203, Address: 0x37d320, Func Offset: 0x10
	// Line 205, Address: 0x37d32c, Func Offset: 0x1c
	// Line 206, Address: 0x37d340, Func Offset: 0x30
	// Line 207, Address: 0x37d350, Func Offset: 0x40
	// Func End, Address: 0x37d364, Func Offset: 0x54
}

// render__Q24zHud10hud_systemFv
// Start address: 0x37d370
void render()
{
	// Line 179, Address: 0x37d370, Func Offset: 0
	// Line 183, Address: 0x37d374, Func Offset: 0x4
	// Line 179, Address: 0x37d378, Func Offset: 0x8
	// Line 183, Address: 0x37d37c, Func Offset: 0xc
	// Line 185, Address: 0x37d388, Func Offset: 0x18
	// Line 189, Address: 0x37d3a0, Func Offset: 0x30
	// Line 190, Address: 0x37d3a8, Func Offset: 0x38
	// Func End, Address: 0x37d3b4, Func Offset: 0x44
}

// update__Q24zHud10hud_systemFf
// Start address: 0x37d3c0
void hud_system::update(float32 dt)
{
	hud_element* element;
	// Line 116, Address: 0x37d3c0, Func Offset: 0
	// Line 133, Address: 0x37d3e0, Func Offset: 0x20
	// Line 135, Address: 0x37d3fc, Func Offset: 0x3c
	// Line 136, Address: 0x37d428, Func Offset: 0x68
	// Line 139, Address: 0x37d438, Func Offset: 0x78
	// Line 141, Address: 0x37d450, Func Offset: 0x90
	// Line 144, Address: 0x37d480, Func Offset: 0xc0
	// Line 146, Address: 0x37d49c, Func Offset: 0xdc
	// Line 150, Address: 0x37d4c8, Func Offset: 0x108
	// Line 152, Address: 0x37d4d8, Func Offset: 0x118
	// Line 153, Address: 0x37d500, Func Offset: 0x140
	// Line 156, Address: 0x37d508, Func Offset: 0x148
	// Line 161, Address: 0x37d514, Func Offset: 0x154
	// Line 163, Address: 0x37d530, Func Offset: 0x170
	// Line 170, Address: 0x37d560, Func Offset: 0x1a0
	// Line 172, Address: 0x37d56c, Func Offset: 0x1ac
	// Line 173, Address: 0x37d580, Func Offset: 0x1c0
	// Line 144, Address: 0x37d5a0, Func Offset: 0x1e0
	// Line 173, Address: 0x37d5a4, Func Offset: 0x1e4
	// Line 158, Address: 0x37d5d4, Func Offset: 0x214
	// Line 173, Address: 0x37d5d8, Func Offset: 0x218
	// Line 159, Address: 0x37d5f0, Func Offset: 0x230
	// Line 160, Address: 0x37d5f4, Func Offset: 0x234
	// Line 173, Address: 0x37d5fc, Func Offset: 0x23c
	// Line 175, Address: 0x37d608, Func Offset: 0x248
	// Line 176, Address: 0x37d614, Func Offset: 0x254
	// Func End, Address: 0x37d62c, Func Offset: 0x26c
}

// init__Q24zHud10hud_systemFv
// Start address: 0x37d630
void hud_system::init()
{
	hud_element* element;
	// Line 95, Address: 0x37d630, Func Offset: 0
	// Line 96, Address: 0x37d63c, Func Offset: 0xc
	// Line 97, Address: 0x37d640, Func Offset: 0x10
	// Line 98, Address: 0x37d648, Func Offset: 0x18
	// Line 99, Address: 0x37d664, Func Offset: 0x34
	// Line 102, Address: 0x37d670, Func Offset: 0x40
	// Line 103, Address: 0x37d680, Func Offset: 0x50
	// Line 104, Address: 0x37d690, Func Offset: 0x60
	// Func End, Address: 0x37d6a0, Func Offset: 0x70
}

// shutdown__Q24zHud10hud_systemFv
// Start address: 0x37d6a0
void shutdown()
{
	RwFrame* tmpframe;
	// Line 74, Address: 0x37d6a0, Func Offset: 0
	// Line 78, Address: 0x37d6b0, Func Offset: 0x10
	// Line 80, Address: 0x37d6b8, Func Offset: 0x18
	// Line 81, Address: 0x37d6bc, Func Offset: 0x1c
	// Line 83, Address: 0x37d6c4, Func Offset: 0x24
	// Line 84, Address: 0x37d6cc, Func Offset: 0x2c
	// Line 87, Address: 0x37d6dc, Func Offset: 0x3c
	// Line 88, Address: 0x37d6e4, Func Offset: 0x44
	// Line 92, Address: 0x37d6e8, Func Offset: 0x48
	// Func End, Address: 0x37d6f8, Func Offset: 0x58
}

// startup__Q24zHud10hud_systemFv
// Start address: 0x37d700
void startup()
{
	RwV2d vw;
	// Line 48, Address: 0x37d700, Func Offset: 0
	// Line 54, Address: 0x37d708, Func Offset: 0x8
	// Line 64, Address: 0x37d724, Func Offset: 0x24
	// Line 65, Address: 0x37d738, Func Offset: 0x38
	// Line 66, Address: 0x37d740, Func Offset: 0x40
	// Line 67, Address: 0x37d74c, Func Offset: 0x4c
	// Line 68, Address: 0x37d758, Func Offset: 0x58
	// Line 69, Address: 0x37d76c, Func Offset: 0x6c
	// Line 71, Address: 0x37d780, Func Offset: 0x80
	// Func End, Address: 0x37d790, Func Offset: 0x90
}

// init__Q24zHud11hud_elementFv
// Start address: 0x37d790
void hud_element::init()
{
	// Line 40, Address: 0x37d790, Func Offset: 0
	// Line 41, Address: 0x37d79c, Func Offset: 0xc
	// Line 42, Address: 0x37d7a4, Func Offset: 0x14
	// Func End, Address: 0x37d7ac, Func Offset: 0x1c
}

// EventHandlerFunc__21@unnamed@zWadHud_cpp@FP5xBaseP5xBaseUiPCfP5xBaseUi
// Start address: 0x37d7b0
void EventHandlerFunc(xBase* from, xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget, uint32 toParamWidgetID)
{
	// Line 28, Address: 0x37d7b8, Func Offset: 0x8
	// Func End, Address: 0x37d7cc, Func Offset: 0x1c
}

