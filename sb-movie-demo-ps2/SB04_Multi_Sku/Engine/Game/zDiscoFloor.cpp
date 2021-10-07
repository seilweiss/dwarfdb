



void set_state_range(int32 min, int32 max, uint8 immediate);
void set_state(uint32 state, uint8 immediate);
void update(float32 dt);
void setup();
void load(z_disco_floor_asset& asset);
void init(void* ent, void* asset);
void init();
void add_tweaks(z_disco_floor& df);
void update_state(z_disco_floor& df, float32 dt);
void refresh_state(z_disco_floor& df);
uint32 find_objects(int8* name, xEnt** objects, uint32 size);
void object_prefix(int8* name, uint32& size, uint32& first);
void event_handler(xBase* to, uint32 event, float32* argf);

// set_state_range__13z_disco_floorFiib
// Start address: 0x381180
void z_disco_floor::set_state_range(int32 min, int32 max, uint8 immediate)
{
	uint32 min_state;
	uint32 max_state;
	uint32 newstate;
	uint32 newstate;
	// Line 619, Address: 0x381180, Func Offset: 0
	// Line 620, Address: 0x3811a4, Func Offset: 0x24
	// Line 621, Address: 0x3811c0, Func Offset: 0x40
	// Line 620, Address: 0x3811c8, Func Offset: 0x48
	// Line 621, Address: 0x3811cc, Func Offset: 0x4c
	// Line 622, Address: 0x3811dc, Func Offset: 0x5c
	// Line 624, Address: 0x3811f4, Func Offset: 0x74
	// Line 626, Address: 0x3811f8, Func Offset: 0x78
	// Line 628, Address: 0x381200, Func Offset: 0x80
	// Line 629, Address: 0x38120c, Func Offset: 0x8c
	// Line 628, Address: 0x381210, Func Offset: 0x90
	// Line 629, Address: 0x381214, Func Offset: 0x94
	// Line 630, Address: 0x381224, Func Offset: 0xa4
	// Line 633, Address: 0x38122c, Func Offset: 0xac
	// Line 634, Address: 0x381238, Func Offset: 0xb8
	// Line 633, Address: 0x38123c, Func Offset: 0xbc
	// Line 634, Address: 0x381240, Func Offset: 0xc0
	// Line 636, Address: 0x381250, Func Offset: 0xd0
	// Func End, Address: 0x38126c, Func Offset: 0xec
}

// set_state__13z_disco_floorFUib
// Start address: 0x381270
void z_disco_floor::set_state(uint32 state, uint8 immediate)
{
	uint32 r;
	int32 bit_index;
	// Line 586, Address: 0x381270, Func Offset: 0
	// Line 587, Address: 0x381298, Func Offset: 0x28
	// Line 588, Address: 0x3812b0, Func Offset: 0x40
	// Line 590, Address: 0x3812c0, Func Offset: 0x50
	// Line 592, Address: 0x3812c8, Func Offset: 0x58
	// Line 593, Address: 0x3812d0, Func Offset: 0x60
	// Line 594, Address: 0x3812d8, Func Offset: 0x68
	// Line 595, Address: 0x381360, Func Offset: 0xf0
	// Line 596, Address: 0x381380, Func Offset: 0x110
	// Line 599, Address: 0x381388, Func Offset: 0x118
	// Line 600, Address: 0x38138c, Func Offset: 0x11c
	// Line 601, Address: 0x381390, Func Offset: 0x120
	// Line 605, Address: 0x381418, Func Offset: 0x1a8
	// Line 606, Address: 0x381424, Func Offset: 0x1b4
	// Line 594, Address: 0x381444, Func Offset: 0x1d4
	// Line 606, Address: 0x381448, Func Offset: 0x1d8
	// Line 594, Address: 0x38144c, Func Offset: 0x1dc
	// Line 606, Address: 0x381450, Func Offset: 0x1e0
	// Line 594, Address: 0x381454, Func Offset: 0x1e4
	// Line 606, Address: 0x38145c, Func Offset: 0x1ec
	// Line 601, Address: 0x381484, Func Offset: 0x214
	// Line 606, Address: 0x381488, Func Offset: 0x218
	// Line 601, Address: 0x38148c, Func Offset: 0x21c
	// Line 606, Address: 0x381490, Func Offset: 0x220
	// Line 601, Address: 0x381494, Func Offset: 0x224
	// Line 606, Address: 0x38149c, Func Offset: 0x22c
	// Func End, Address: 0x3814d0, Func Offset: 0x260
}

// update__13z_disco_floorFR6xScenef
// Start address: 0x3814d0
void z_disco_floor::update(float32 dt)
{
	// Line 557, Address: 0x3814d0, Func Offset: 0
	// Line 558, Address: 0x3814e0, Func Offset: 0x10
	// Line 560, Address: 0x3814ec, Func Offset: 0x1c
	// Line 562, Address: 0x381500, Func Offset: 0x30
	// Line 583, Address: 0x381514, Func Offset: 0x44
	// Line 561, Address: 0x38151c, Func Offset: 0x4c
	// Line 583, Address: 0x381520, Func Offset: 0x50
	// Line 561, Address: 0x38152c, Func Offset: 0x5c
	// Line 583, Address: 0x381530, Func Offset: 0x60
	// Line 561, Address: 0x381538, Func Offset: 0x68
	// Line 583, Address: 0x381540, Func Offset: 0x70
	// Line 561, Address: 0x381548, Func Offset: 0x78
	// Line 583, Address: 0x38154c, Func Offset: 0x7c
	// Line 561, Address: 0x381570, Func Offset: 0xa0
	// Line 583, Address: 0x381574, Func Offset: 0xa4
	// Line 561, Address: 0x381590, Func Offset: 0xc0
	// Line 563, Address: 0x38159c, Func Offset: 0xcc
	// Line 583, Address: 0x3815a0, Func Offset: 0xd0
	// Func End, Address: 0x3815c4, Func Offset: 0xf4
}

// setup__13z_disco_floorFv
// Start address: 0x3815d0
void z_disco_floor::setup()
{
	uint32 data_size;
	uint32 i;
	xSurface&* surf;
	xSurface surf;
	zSurfAssetIN asset;
	zSurfaceProps props;
	uint8 inited;
	// Line 500, Address: 0x3815d0, Func Offset: 0
	// Line 501, Address: 0x3815fc, Func Offset: 0x2c
	// Line 504, Address: 0x381604, Func Offset: 0x34
	// Line 512, Address: 0x381614, Func Offset: 0x44
	// Line 535, Address: 0x38161c, Func Offset: 0x4c
	// Line 537, Address: 0x381628, Func Offset: 0x58
	// Line 539, Address: 0x381630, Func Offset: 0x60
	// Line 540, Address: 0x381684, Func Offset: 0xb4
	// Line 514, Address: 0x381690, Func Offset: 0xc0
	// Line 515, Address: 0x381694, Func Offset: 0xc4
	// Line 540, Address: 0x381698, Func Offset: 0xc8
	// Line 517, Address: 0x3816b8, Func Offset: 0xe8
	// Line 540, Address: 0x3816bc, Func Offset: 0xec
	// Line 519, Address: 0x3816dc, Func Offset: 0x10c
	// Line 540, Address: 0x3816e0, Func Offset: 0x110
	// Line 523, Address: 0x381724, Func Offset: 0x154
	// Line 540, Address: 0x38172c, Func Offset: 0x15c
	// Line 529, Address: 0x38173c, Func Offset: 0x16c
	// Line 540, Address: 0x381740, Func Offset: 0x170
	// Line 534, Address: 0x381770, Func Offset: 0x1a0
	// Line 540, Address: 0x381778, Func Offset: 0x1a8
	// Line 524, Address: 0x38178c, Func Offset: 0x1bc
	// Line 540, Address: 0x381798, Func Offset: 0x1c8
	// Line 524, Address: 0x3817f8, Func Offset: 0x228
	// Line 540, Address: 0x3817fc, Func Offset: 0x22c
	// Line 524, Address: 0x381870, Func Offset: 0x2a0
	// Line 540, Address: 0x381874, Func Offset: 0x2a4
	// Line 524, Address: 0x381884, Func Offset: 0x2b4
	// Line 540, Address: 0x381888, Func Offset: 0x2b8
	// Line 524, Address: 0x381890, Func Offset: 0x2c0
	// Line 540, Address: 0x381894, Func Offset: 0x2c4
	// Line 524, Address: 0x3818ac, Func Offset: 0x2dc
	// Line 540, Address: 0x3818b0, Func Offset: 0x2e0
	// Line 524, Address: 0x3818b4, Func Offset: 0x2e4
	// Line 540, Address: 0x3818b8, Func Offset: 0x2e8
	// Line 524, Address: 0x3818bc, Func Offset: 0x2ec
	// Line 540, Address: 0x3818c0, Func Offset: 0x2f0
	// Line 524, Address: 0x3818c4, Func Offset: 0x2f4
	// Line 540, Address: 0x3818c8, Func Offset: 0x2f8
	// Line 524, Address: 0x3818d0, Func Offset: 0x300
	// Line 540, Address: 0x3818d4, Func Offset: 0x304
	// Line 524, Address: 0x381994, Func Offset: 0x3c4
	// Line 540, Address: 0x381998, Func Offset: 0x3c8
	// Line 524, Address: 0x3819b0, Func Offset: 0x3e0
	// Line 540, Address: 0x3819b4, Func Offset: 0x3e4
	// Line 524, Address: 0x381aac, Func Offset: 0x4dc
	// Line 540, Address: 0x381ab0, Func Offset: 0x4e0
	// Line 524, Address: 0x381ab8, Func Offset: 0x4e8
	// Line 540, Address: 0x381abc, Func Offset: 0x4ec
	// Func End, Address: 0x381e78, Func Offset: 0x8a8
}

// load__13z_disco_floorFR19z_disco_floor_asset
// Start address: 0x381e80
void z_disco_floor::load(z_disco_floor_asset& asset)
{
	uint8* data;
	uint32* state_offsets;
	uint32 i;
	// Line 469, Address: 0x381e80, Func Offset: 0
	// Line 470, Address: 0x381e98, Func Offset: 0x18
	// Line 471, Address: 0x381ea0, Func Offset: 0x20
	// Line 473, Address: 0x381ea4, Func Offset: 0x24
	// Line 471, Address: 0x381ea8, Func Offset: 0x28
	// Line 473, Address: 0x381eac, Func Offset: 0x2c
	// Line 472, Address: 0x381eb0, Func Offset: 0x30
	// Line 473, Address: 0x381eb4, Func Offset: 0x34
	// Line 474, Address: 0x381eb8, Func Offset: 0x38
	// Line 478, Address: 0x381ec8, Func Offset: 0x48
	// Line 475, Address: 0x381ecc, Func Offset: 0x4c
	// Line 485, Address: 0x381ed0, Func Offset: 0x50
	// Line 478, Address: 0x381ed4, Func Offset: 0x54
	// Line 479, Address: 0x381edc, Func Offset: 0x5c
	// Line 480, Address: 0x381ee8, Func Offset: 0x68
	// Line 485, Address: 0x381ef4, Func Offset: 0x74
	// Line 487, Address: 0x381f08, Func Offset: 0x88
	// Line 486, Address: 0x381f10, Func Offset: 0x90
	// Line 487, Address: 0x381f14, Func Offset: 0x94
	// Line 488, Address: 0x381f24, Func Offset: 0xa4
	// Line 490, Address: 0x381f50, Func Offset: 0xd0
	// Line 491, Address: 0x381f70, Func Offset: 0xf0
	// Line 493, Address: 0x381f90, Func Offset: 0x110
	// Line 494, Address: 0x381fa4, Func Offset: 0x124
	// Line 496, Address: 0x381fbc, Func Offset: 0x13c
	// Line 497, Address: 0x381fc8, Func Offset: 0x148
	// Func End, Address: 0x381ff8, Func Offset: 0x178
}

// init__13z_disco_floorFPvPv
// Start address: 0x382000
void init(void* ent, void* asset)
{
	// Line 465, Address: 0x382000, Func Offset: 0
	// Func End, Address: 0x382008, Func Offset: 0x8
}

// init__13z_disco_floorFv
// Start address: 0x382010
void init()
{
	// Line 460, Address: 0x382010, Func Offset: 0
	// Func End, Address: 0x382018, Func Offset: 0x8
}

// add_tweaks__19@unnamed@zWad1_cpp@FR13z_disco_floor
// Start address: 0x382020
void add_tweaks(z_disco_floor& df)
{
	int8 buffer[128];
	int8* name;
	// Line 424, Address: 0x382020, Func Offset: 0
	// Line 426, Address: 0x382030, Func Offset: 0x10
	// Line 427, Address: 0x38204c, Func Offset: 0x2c
	// Line 429, Address: 0x382058, Func Offset: 0x38
	// Line 433, Address: 0x382064, Func Offset: 0x44
	// Line 439, Address: 0x382074, Func Offset: 0x54
	// Line 443, Address: 0x382084, Func Offset: 0x64
	// Line 446, Address: 0x382094, Func Offset: 0x74
	// Line 448, Address: 0x3820a4, Func Offset: 0x84
	// Line 450, Address: 0x3820b4, Func Offset: 0x94
	// Line 452, Address: 0x3820c4, Func Offset: 0xa4
	// Line 454, Address: 0x3820d4, Func Offset: 0xb4
	// Func End, Address: 0x3820e4, Func Offset: 0xc4
}

// update_state__19@unnamed@zWad1_cpp@FR13z_disco_floorf
// Start address: 0x3820f0
void update_state(z_disco_floor& df, float32 dt)
{
	// Line 357, Address: 0x3820f0, Func Offset: 0
	// Line 358, Address: 0x382118, Func Offset: 0x28
	// Line 359, Address: 0x382130, Func Offset: 0x40
	// Line 360, Address: 0x38213c, Func Offset: 0x4c
	// Line 361, Address: 0x38214c, Func Offset: 0x5c
	// Line 362, Address: 0x382150, Func Offset: 0x60
	// Line 363, Address: 0x382154, Func Offset: 0x64
	// Line 364, Address: 0x382170, Func Offset: 0x80
	// Line 366, Address: 0x382184, Func Offset: 0x94
	// Line 367, Address: 0x3821a4, Func Offset: 0xb4
	// Line 369, Address: 0x3821ac, Func Offset: 0xbc
	// Line 371, Address: 0x3821c0, Func Offset: 0xd0
	// Line 372, Address: 0x3821e0, Func Offset: 0xf0
	// Line 374, Address: 0x3821e8, Func Offset: 0xf8
	// Line 375, Address: 0x382270, Func Offset: 0x180
	// Line 381, Address: 0x382280, Func Offset: 0x190
	// Line 382, Address: 0x382284, Func Offset: 0x194
	// Line 383, Address: 0x38228c, Func Offset: 0x19c
	// Line 374, Address: 0x3822ac, Func Offset: 0x1bc
	// Line 383, Address: 0x3822b0, Func Offset: 0x1c0
	// Line 374, Address: 0x3822b4, Func Offset: 0x1c4
	// Line 383, Address: 0x3822b8, Func Offset: 0x1c8
	// Line 374, Address: 0x3822bc, Func Offset: 0x1cc
	// Line 383, Address: 0x3822c4, Func Offset: 0x1d4
	// Line 379, Address: 0x3822f8, Func Offset: 0x208
	// Line 383, Address: 0x3822fc, Func Offset: 0x20c
	// Line 380, Address: 0x382308, Func Offset: 0x218
	// Line 383, Address: 0x382310, Func Offset: 0x220
	// Func End, Address: 0x38233c, Func Offset: 0x24c
}

// refresh_state__19@unnamed@zWad1_cpp@FR13z_disco_floor
// Start address: 0x382340
void refresh_state(z_disco_floor& df)
{
	uint32 i;
	uint32 i;
	// Line 319, Address: 0x382340, Func Offset: 0
	// Line 320, Address: 0x38236c, Func Offset: 0x2c
	// Line 321, Address: 0x382374, Func Offset: 0x34
	// Line 323, Address: 0x382384, Func Offset: 0x44
	// Line 325, Address: 0x38246c, Func Offset: 0x12c
	// Line 326, Address: 0x382494, Func Offset: 0x154
	// Line 327, Address: 0x3824b4, Func Offset: 0x174
	// Line 328, Address: 0x3824bc, Func Offset: 0x17c
	// Line 329, Address: 0x3825f8, Func Offset: 0x2b8
	// Line 330, Address: 0x382720, Func Offset: 0x3e0
	// Line 329, Address: 0x382728, Func Offset: 0x3e8
	// Line 330, Address: 0x38272c, Func Offset: 0x3ec
	// Line 331, Address: 0x382738, Func Offset: 0x3f8
	// Line 334, Address: 0x382740, Func Offset: 0x400
	// Line 336, Address: 0x3827e0, Func Offset: 0x4a0
	// Line 337, Address: 0x382808, Func Offset: 0x4c8
	// Line 338, Address: 0x38293c, Func Offset: 0x5fc
	// Line 339, Address: 0x382a64, Func Offset: 0x724
	// Line 338, Address: 0x382a6c, Func Offset: 0x72c
	// Line 339, Address: 0x382a70, Func Offset: 0x730
	// Line 341, Address: 0x382a7c, Func Offset: 0x73c
	// Line 325, Address: 0x382a9c, Func Offset: 0x75c
	// Line 341, Address: 0x382aa0, Func Offset: 0x760
	// Line 325, Address: 0x382aa4, Func Offset: 0x764
	// Line 341, Address: 0x382aa8, Func Offset: 0x768
	// Line 325, Address: 0x382aac, Func Offset: 0x76c
	// Line 341, Address: 0x382ab4, Func Offset: 0x774
	// Line 326, Address: 0x382adc, Func Offset: 0x79c
	// Line 341, Address: 0x382ae0, Func Offset: 0x7a0
	// Line 326, Address: 0x382ae4, Func Offset: 0x7a4
	// Line 341, Address: 0x382ae8, Func Offset: 0x7a8
	// Line 326, Address: 0x382aec, Func Offset: 0x7ac
	// Line 341, Address: 0x382af4, Func Offset: 0x7b4
	// Line 327, Address: 0x382b2c, Func Offset: 0x7ec
	// Line 341, Address: 0x382b30, Func Offset: 0x7f0
	// Line 327, Address: 0x382b4c, Func Offset: 0x80c
	// Line 341, Address: 0x382b50, Func Offset: 0x810
	// Line 327, Address: 0x382b6c, Func Offset: 0x82c
	// Line 341, Address: 0x382b70, Func Offset: 0x830
	// Line 327, Address: 0x382b8c, Func Offset: 0x84c
	// Line 341, Address: 0x382b9c, Func Offset: 0x85c
	// Line 327, Address: 0x382ba0, Func Offset: 0x860
	// Line 341, Address: 0x382ba4, Func Offset: 0x864
	// Line 327, Address: 0x382bac, Func Offset: 0x86c
	// Line 341, Address: 0x382bb0, Func Offset: 0x870
	// Line 327, Address: 0x382bb4, Func Offset: 0x874
	// Line 341, Address: 0x382bb8, Func Offset: 0x878
	// Line 327, Address: 0x382bc0, Func Offset: 0x880
	// Line 341, Address: 0x382bc4, Func Offset: 0x884
	// Line 327, Address: 0x382bcc, Func Offset: 0x88c
	// Line 341, Address: 0x382bd0, Func Offset: 0x890
	// Line 327, Address: 0x382bd8, Func Offset: 0x898
	// Line 341, Address: 0x382bdc, Func Offset: 0x89c
	// Line 327, Address: 0x382bec, Func Offset: 0x8ac
	// Line 341, Address: 0x382bf0, Func Offset: 0x8b0
	// Line 327, Address: 0x382c00, Func Offset: 0x8c0
	// Line 341, Address: 0x382c04, Func Offset: 0x8c4
	// Line 327, Address: 0x382c24, Func Offset: 0x8e4
	// Line 341, Address: 0x382c2c, Func Offset: 0x8ec
	// Line 336, Address: 0x382c44, Func Offset: 0x904
	// Line 341, Address: 0x382c48, Func Offset: 0x908
	// Line 336, Address: 0x382c4c, Func Offset: 0x90c
	// Line 341, Address: 0x382c50, Func Offset: 0x910
	// Line 336, Address: 0x382c54, Func Offset: 0x914
	// Line 341, Address: 0x382c5c, Func Offset: 0x91c
	// Func End, Address: 0x382c9c, Func Offset: 0x95c
}

// find_objects__19@unnamed@zWad1_cpp@FPCcPP4xEntUi
// Start address: 0x382ca0
uint32 find_objects(int8* name, xEnt** objects, uint32 size)
{
	int8 buffer[256];
	uint32 prefix_size;
	uint32 start;
	uint32 i;
	uint32 total;
	int32 j;
	// Line 123, Address: 0x382ca0, Func Offset: 0
	// Line 126, Address: 0x382cc0, Func Offset: 0x20
	// Line 123, Address: 0x382cc4, Func Offset: 0x24
	// Line 126, Address: 0x382cc8, Func Offset: 0x28
	// Line 123, Address: 0x382ccc, Func Offset: 0x2c
	// Line 126, Address: 0x382cd0, Func Offset: 0x30
	// Line 127, Address: 0x382cd8, Func Offset: 0x38
	// Line 128, Address: 0x382ce8, Func Offset: 0x48
	// Line 130, Address: 0x382cec, Func Offset: 0x4c
	// Line 131, Address: 0x382cf4, Func Offset: 0x54
	// Line 133, Address: 0x382d04, Func Offset: 0x64
	// Line 131, Address: 0x382d08, Func Offset: 0x68
	// Line 132, Address: 0x382d0c, Func Offset: 0x6c
	// Line 135, Address: 0x382d10, Func Offset: 0x70
	// Line 136, Address: 0x382d30, Func Offset: 0x90
	// Line 137, Address: 0x382d50, Func Offset: 0xb0
	// Line 139, Address: 0x382d5c, Func Offset: 0xbc
	// Line 140, Address: 0x382d68, Func Offset: 0xc8
	// Line 131, Address: 0x382d70, Func Offset: 0xd0
	// Line 140, Address: 0x382d78, Func Offset: 0xd8
	// Line 142, Address: 0x382d90, Func Offset: 0xf0
	// Func End, Address: 0x382db4, Func Offset: 0x114
}

// object_prefix__19@unnamed@zWad1_cpp@FPCcRUiRUi
// Start address: 0x382dc0
void object_prefix(int8* name, uint32& size, uint32& first)
{
	uint32 namelen;
	int32 i;
	// Line 87, Address: 0x382dc0, Func Offset: 0
	// Line 88, Address: 0x382ddc, Func Offset: 0x1c
	// Line 89, Address: 0x382de4, Func Offset: 0x24
	// Line 90, Address: 0x382dec, Func Offset: 0x2c
	// Line 91, Address: 0x382df4, Func Offset: 0x34
	// Line 94, Address: 0x382e08, Func Offset: 0x48
	// Line 98, Address: 0x382e20, Func Offset: 0x60
	// Line 99, Address: 0x382e58, Func Offset: 0x98
	// Func End, Address: 0x382e70, Func Offset: 0xb0
}

// event_handler__19@unnamed@zWad1_cpp@FP5xBaseP5xBaseUiPCfP5xBaseUi
// Start address: 0x382e70
void event_handler(xBase* to, uint32 event, float32* argf)
{
	z_disco_floor& f;
	// Line 37, Address: 0x382e70, Func Offset: 0
	// Line 42, Address: 0x382e74, Func Offset: 0x4
	// Line 37, Address: 0x382e78, Func Offset: 0x8
	// Line 42, Address: 0x382e80, Func Offset: 0x10
	// Line 45, Address: 0x382ec8, Func Offset: 0x58
	// Line 46, Address: 0x382f1c, Func Offset: 0xac
	// Line 49, Address: 0x382f24, Func Offset: 0xb4
	// Line 52, Address: 0x382f2c, Func Offset: 0xbc
	// Line 54, Address: 0x382f34, Func Offset: 0xc4
	// Line 55, Address: 0x382f84, Func Offset: 0x114
	// Line 57, Address: 0x382f8c, Func Offset: 0x11c
	// Line 58, Address: 0x382fb0, Func Offset: 0x140
	// Line 60, Address: 0x382fb8, Func Offset: 0x148
	// Line 61, Address: 0x382fbc, Func Offset: 0x14c
	// Line 63, Address: 0x382fc4, Func Offset: 0x154
	// Line 71, Address: 0x382fcc, Func Offset: 0x15c
	// Func End, Address: 0x382fdc, Func Offset: 0x16c
}

