



void destroy_npc(xFactoryInst* inst);
xAnimTable* create_anim_table(uint32 brain_id);
uint8 get_parameter(int8* name, int8** value, int8* default_value);
uint8 get_parameter(int8* name, uint8* value, uint8 default_value);
void update_npc(float32 dt);
void update_bounds();
void change_bounds(float32 scale, uint8 use_bounding_box);
iSndHandle play_sound(zAnimFxSoundGroup* sound);

// destroy_npc__4zNPCFP12xFactoryInst
// Start address: 0x2be600
void destroy_npc(xFactoryInst* inst)
{
	// Line 426, Address: 0x2be600, Func Offset: 0
	// Line 427, Address: 0x2be604, Func Offset: 0x4
	// Line 429, Address: 0x2be628, Func Offset: 0x28
	// Func End, Address: 0x2be634, Func Offset: 0x34
}

// create_anim_table__4zNPCFUi
// Start address: 0x2be640
xAnimTable* create_anim_table(uint32 brain_id)
{
	xAnimTable* table;
	// Line 408, Address: 0x2be640, Func Offset: 0
	// Line 410, Address: 0x2be650, Func Offset: 0x10
	// Line 411, Address: 0x2be6a4, Func Offset: 0x64
	// Line 412, Address: 0x2be6b4, Func Offset: 0x74
	// Line 413, Address: 0x2be6c0, Func Offset: 0x80
	// Line 417, Address: 0x2be6c4, Func Offset: 0x84
	// Line 419, Address: 0x2be6d4, Func Offset: 0x94
	// Line 412, Address: 0x2be6e0, Func Offset: 0xa0
	// Line 419, Address: 0x2be6e4, Func Offset: 0xa4
	// Line 420, Address: 0x2be710, Func Offset: 0xd0
	// Func End, Address: 0x2be720, Func Offset: 0xe0
}

// get_parameter__Q24zNPC4baseFPCcPPCcPCc
// Start address: 0x2be720
uint8 base::get_parameter(int8* name, int8** value, int8* default_value)
{
	int8* text;
	// Line 364, Address: 0x2be720, Func Offset: 0
	// Line 365, Address: 0x2be724, Func Offset: 0x4
	// Line 364, Address: 0x2be728, Func Offset: 0x8
	// Line 365, Address: 0x2be748, Func Offset: 0x28
	// Line 366, Address: 0x2be74c, Func Offset: 0x2c
	// Line 367, Address: 0x2be754, Func Offset: 0x34
	// Line 368, Address: 0x2be764, Func Offset: 0x44
	// Line 370, Address: 0x2be76c, Func Offset: 0x4c
	// Line 377, Address: 0x2be774, Func Offset: 0x54
	// Line 378, Address: 0x2be778, Func Offset: 0x58
	// Line 369, Address: 0x2be784, Func Offset: 0x64
	// Line 378, Address: 0x2be788, Func Offset: 0x68
	// Line 373, Address: 0x2be7a0, Func Offset: 0x80
	// Line 381, Address: 0x2be7a4, Func Offset: 0x84
	// Func End, Address: 0x2be7c0, Func Offset: 0xa0
}

// get_parameter__Q24zNPC4baseFPCcPbb
// Start address: 0x2be7c0
uint8 base::get_parameter(int8* name, uint8* value, uint8 default_value)
{
	int8* text;
	// Line 311, Address: 0x2be7c0, Func Offset: 0
	// Line 313, Address: 0x2be7c4, Func Offset: 0x4
	// Line 311, Address: 0x2be7c8, Func Offset: 0x8
	// Line 313, Address: 0x2be7e8, Func Offset: 0x28
	// Line 320, Address: 0x2be824, Func Offset: 0x64
	// Line 321, Address: 0x2be828, Func Offset: 0x68
	// Line 313, Address: 0x2be834, Func Offset: 0x74
	// Line 321, Address: 0x2be838, Func Offset: 0x78
	// Line 313, Address: 0x2be84c, Func Offset: 0x8c
	// Line 315, Address: 0x2be854, Func Offset: 0x94
	// Line 321, Address: 0x2be858, Func Offset: 0x98
	// Line 316, Address: 0x2be880, Func Offset: 0xc0
	// Line 323, Address: 0x2be884, Func Offset: 0xc4
	// Func End, Address: 0x2be8a0, Func Offset: 0xe0
}

// update_npc__Q24zNPC4baseFf
// Start address: 0x2be8a0
void base::update_npc(float32 dt)
{
	// Line 212, Address: 0x2be8a0, Func Offset: 0
	// Line 215, Address: 0x2be8b4, Func Offset: 0x14
	// Line 218, Address: 0x2be8c4, Func Offset: 0x24
	// Line 220, Address: 0x2be8d4, Func Offset: 0x34
	// Line 219, Address: 0x2be8f4, Func Offset: 0x54
	// Line 220, Address: 0x2be8f8, Func Offset: 0x58
	// Func End, Address: 0x2be91c, Func Offset: 0x7c
}

// update_bounds__Q24zNPC4baseFv
// Start address: 0x2be920
void base::update_bounds()
{
	// Line 156, Address: 0x2be920, Func Offset: 0
	// Line 159, Address: 0x2be924, Func Offset: 0x4
	// Line 156, Address: 0x2be928, Func Offset: 0x8
	// Line 159, Address: 0x2be930, Func Offset: 0x10
	// Line 162, Address: 0x2be95c, Func Offset: 0x3c
	// Line 163, Address: 0x2be968, Func Offset: 0x48
	// Line 164, Address: 0x2bea24, Func Offset: 0x104
	// Line 165, Address: 0x2bea2c, Func Offset: 0x10c
	// Line 166, Address: 0x2bea30, Func Offset: 0x110
	// Line 165, Address: 0x2bea34, Func Offset: 0x114
	// Line 166, Address: 0x2bea50, Func Offset: 0x130
	// Line 170, Address: 0x2bea98, Func Offset: 0x178
	// Line 172, Address: 0x2beae4, Func Offset: 0x1c4
	// Line 174, Address: 0x2beb2c, Func Offset: 0x20c
	// Line 176, Address: 0x2beb70, Func Offset: 0x250
	// Line 181, Address: 0x2beb7c, Func Offset: 0x25c
	// Line 182, Address: 0x2bebe8, Func Offset: 0x2c8
	// Line 183, Address: 0x2bec50, Func Offset: 0x330
	// Line 184, Address: 0x2bec68, Func Offset: 0x348
	// Line 186, Address: 0x2bec70, Func Offset: 0x350
	// Line 190, Address: 0x2bec74, Func Offset: 0x354
	// Line 186, Address: 0x2bec80, Func Offset: 0x360
	// Line 187, Address: 0x2bec84, Func Offset: 0x364
	// Line 190, Address: 0x2beca0, Func Offset: 0x380
	// Line 197, Address: 0x2becf0, Func Offset: 0x3d0
	// Line 198, Address: 0x2becfc, Func Offset: 0x3dc
	// Line 205, Address: 0x2bed10, Func Offset: 0x3f0
	// Line 206, Address: 0x2bed1c, Func Offset: 0x3fc
	// Func End, Address: 0x2bed2c, Func Offset: 0x40c
}

// change_bounds__Q24zNPC4baseFf5xVec3b
// Start address: 0x2bed30
void base::change_bounds(float32 scale, uint8 use_bounding_box)
{
	xVec3 offset;
	float32 width;
	float32 height;
	float32 length;
	// Line 98, Address: 0x2bed30, Func Offset: 0
	// Line 99, Address: 0x2bed5c, Func Offset: 0x2c
	// Line 98, Address: 0x2bed64, Func Offset: 0x34
	// Line 104, Address: 0x2bed68, Func Offset: 0x38
	// Line 105, Address: 0x2bed70, Func Offset: 0x40
	// Line 107, Address: 0x2bed74, Func Offset: 0x44
	// Line 105, Address: 0x2bed78, Func Offset: 0x48
	// Line 107, Address: 0x2bed7c, Func Offset: 0x4c
	// Line 109, Address: 0x2bed88, Func Offset: 0x58
	// Line 110, Address: 0x2bedac, Func Offset: 0x7c
	// Line 111, Address: 0x2bedc4, Func Offset: 0x94
	// Line 112, Address: 0x2beddc, Func Offset: 0xac
	// Line 113, Address: 0x2bedf4, Func Offset: 0xc4
	// Line 114, Address: 0x2bee0c, Func Offset: 0xdc
	// Line 115, Address: 0x2bee24, Func Offset: 0xf4
	// Line 117, Address: 0x2bee2c, Func Offset: 0xfc
	// Line 118, Address: 0x2bee34, Func Offset: 0x104
	// Line 119, Address: 0x2bee3c, Func Offset: 0x10c
	// Line 117, Address: 0x2bee44, Func Offset: 0x114
	// Line 118, Address: 0x2bee48, Func Offset: 0x118
	// Line 119, Address: 0x2bee4c, Func Offset: 0x11c
	// Line 120, Address: 0x2bee68, Func Offset: 0x138
	// Line 121, Address: 0x2bee7c, Func Offset: 0x14c
	// Line 122, Address: 0x2bee88, Func Offset: 0x158
	// Line 123, Address: 0x2bee94, Func Offset: 0x164
	// Line 124, Address: 0x2beea0, Func Offset: 0x170
	// Line 125, Address: 0x2beeac, Func Offset: 0x17c
	// Line 126, Address: 0x2beeb8, Func Offset: 0x188
	// Line 127, Address: 0x2beee8, Func Offset: 0x1b8
	// Line 129, Address: 0x2bef18, Func Offset: 0x1e8
	// Line 130, Address: 0x2bef38, Func Offset: 0x208
	// Line 133, Address: 0x2bef54, Func Offset: 0x224
	// Line 134, Address: 0x2bef5c, Func Offset: 0x22c
	// Line 135, Address: 0x2bef64, Func Offset: 0x234
	// Line 136, Address: 0x2bef70, Func Offset: 0x240
	// Line 142, Address: 0x2bef74, Func Offset: 0x244
	// Line 136, Address: 0x2bef78, Func Offset: 0x248
	// Line 137, Address: 0x2bef94, Func Offset: 0x264
	// Line 142, Address: 0x2befa0, Func Offset: 0x270
	// Line 144, Address: 0x2befec, Func Offset: 0x2bc
	// Line 146, Address: 0x2bf034, Func Offset: 0x304
	// Line 150, Address: 0x2bf07c, Func Offset: 0x34c
	// Func End, Address: 0x2bf090, Func Offset: 0x360
}

// play_sound__Q24zNPC4baseFP17zAnimFxSoundGroup
// Start address: 0x2bf090
iSndHandle base::play_sound(zAnimFxSoundGroup* sound)
{
	uint32 soundID;
	iSndGroupHandle GroupToPlay;
	// Line 48, Address: 0x2bf090, Func Offset: 0
	// Line 49, Address: 0x2bf0a4, Func Offset: 0x14
	// Line 50, Address: 0x2bf0ac, Func Offset: 0x1c
	// Line 51, Address: 0x2bf0b8, Func Offset: 0x28
	// Line 54, Address: 0x2bf0c8, Func Offset: 0x38
	// Line 56, Address: 0x2bf0d0, Func Offset: 0x40
	// Line 63, Address: 0x2bf0d8, Func Offset: 0x48
	// Line 52, Address: 0x2bf108, Func Offset: 0x78
	// Line 64, Address: 0x2bf120, Func Offset: 0x90
	// Func End, Address: 0x2bf134, Func Offset: 0xa4
}

