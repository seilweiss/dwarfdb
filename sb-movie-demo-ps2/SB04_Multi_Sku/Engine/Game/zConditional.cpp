



void zConditionalEventCB(xBase* to, uint32 toEvent);
uint32 zConditional_Evaluate(_zConditional* c);
uint32 zConditional_GetCount(_zConditional* c);
void zConditionalLoad(_zConditional* ent, xSerial* s);
void zConditionalSave(_zConditional* ent, xSerial* s);
void zConditionalInit(xBase* b, zCondAsset* asset);
void zConditionalInit(void* b, void* asset);

// zConditionalEventCB__FP5xBaseP5xBaseUiPCfP5xBaseUi
// Start address: 0x387050
void zConditionalEventCB(xBase* to, uint32 toEvent)
{
	_zConditional* t;
	uint32 event;
	// Line 246, Address: 0x387050, Func Offset: 0
	// Line 256, Address: 0x387054, Func Offset: 0x4
	// Line 246, Address: 0x387058, Func Offset: 0x8
	// Line 256, Address: 0x387060, Func Offset: 0x10
	// Line 260, Address: 0x38709c, Func Offset: 0x4c
	// Line 261, Address: 0x3870ac, Func Offset: 0x5c
	// Line 263, Address: 0x3870d8, Func Offset: 0x88
	// Line 264, Address: 0x3870f8, Func Offset: 0xa8
	// Line 268, Address: 0x387100, Func Offset: 0xb0
	// Line 269, Address: 0x38710c, Func Offset: 0xbc
	// Line 270, Address: 0x387114, Func Offset: 0xc4
	// Line 272, Address: 0x387130, Func Offset: 0xe0
	// Line 281, Address: 0x387138, Func Offset: 0xe8
	// Line 287, Address: 0x387144, Func Offset: 0xf4
	// Func End, Address: 0x387154, Func Offset: 0x104
}

// zConditional_Evaluate__FP13_zConditional
// Start address: 0x387160
uint32 zConditional_Evaluate(_zConditional* c)
{
	uint32 temp;
	void* context;
	uint32 id;
	// Line 170, Address: 0x387160, Func Offset: 0
	// Line 174, Address: 0x387164, Func Offset: 0x4
	// Line 170, Address: 0x387168, Func Offset: 0x8
	// Line 174, Address: 0x387170, Func Offset: 0x10
	// Line 177, Address: 0x387174, Func Offset: 0x14
	// Line 181, Address: 0x387180, Func Offset: 0x20
	// Line 188, Address: 0x3871b0, Func Offset: 0x50
	// Line 189, Address: 0x3871c8, Func Offset: 0x68
	// Line 193, Address: 0x3871f4, Func Offset: 0x94
	// Line 199, Address: 0x387204, Func Offset: 0xa4
	// Line 205, Address: 0x387210, Func Offset: 0xb0
	// Line 211, Address: 0x38721c, Func Offset: 0xbc
	// Line 217, Address: 0x38722c, Func Offset: 0xcc
	// Line 223, Address: 0x38723c, Func Offset: 0xdc
	// Line 229, Address: 0x38724c, Func Offset: 0xec
	// Line 233, Address: 0x387274, Func Offset: 0x114
	// Func End, Address: 0x387284, Func Offset: 0x124
}

// zConditional_GetCount__FP13_zConditional
// Start address: 0x387290
uint32 zConditional_GetCount(_zConditional* c)
{
	zVarEntry* v;
	void* context;
	int32 i;
	uint32 id;
	uint32 temp;
	// Line 125, Address: 0x387290, Func Offset: 0
	// Line 129, Address: 0x387294, Func Offset: 0x4
	// Line 125, Address: 0x387298, Func Offset: 0x8
	// Line 127, Address: 0x3872ac, Func Offset: 0x1c
	// Line 125, Address: 0x3872b0, Func Offset: 0x20
	// Line 132, Address: 0x3872b4, Func Offset: 0x24
	// Line 135, Address: 0x3872c4, Func Offset: 0x34
	// Line 138, Address: 0x3872d4, Func Offset: 0x44
	// Line 140, Address: 0x387300, Func Offset: 0x70
	// Line 141, Address: 0x387304, Func Offset: 0x74
	// Line 144, Address: 0x387314, Func Offset: 0x84
	// Line 146, Address: 0x387328, Func Offset: 0x98
	// Line 151, Address: 0x387330, Func Offset: 0xa0
	// Line 153, Address: 0x38733c, Func Offset: 0xac
	// Line 154, Address: 0x38734c, Func Offset: 0xbc
	// Line 157, Address: 0x387354, Func Offset: 0xc4
	// Line 158, Address: 0x38735c, Func Offset: 0xcc
	// Line 164, Address: 0x387364, Func Offset: 0xd4
	// Line 147, Address: 0x38736c, Func Offset: 0xdc
	// Line 167, Address: 0x387370, Func Offset: 0xe0
	// Func End, Address: 0x38738c, Func Offset: 0xfc
}

// zConditionalLoad__FP13_zConditionalP7xSerial
// Start address: 0x387390
void zConditionalLoad(_zConditional* ent, xSerial* s)
{
	// Line 117, Address: 0x387390, Func Offset: 0
	// Func End, Address: 0x387398, Func Offset: 0x8
}

// zConditionalSave__FP13_zConditionalP7xSerial
// Start address: 0x3873a0
void zConditionalSave(_zConditional* ent, xSerial* s)
{
	// Line 98, Address: 0x3873a0, Func Offset: 0
	// Func End, Address: 0x3873a8, Func Offset: 0x8
}

// zConditionalInit__FP5xBaseP10zCondAsset
// Start address: 0x3873b0
void zConditionalInit(xBase* b, zCondAsset* asset)
{
	_zConditional* c;
	int32 i;
	// Line 48, Address: 0x3873b0, Func Offset: 0
	// Line 52, Address: 0x3873c4, Func Offset: 0x14
	// Line 55, Address: 0x3873cc, Func Offset: 0x1c
	// Line 56, Address: 0x3873d8, Func Offset: 0x28
	// Line 58, Address: 0x3873dc, Func Offset: 0x2c
	// Line 59, Address: 0x3873e8, Func Offset: 0x38
	// Line 61, Address: 0x3873f8, Func Offset: 0x48
	// Line 65, Address: 0x3873fc, Func Offset: 0x4c
	// Line 68, Address: 0x387410, Func Offset: 0x60
	// Line 70, Address: 0x38741c, Func Offset: 0x6c
	// Line 71, Address: 0x387428, Func Offset: 0x78
	// Line 73, Address: 0x387430, Func Offset: 0x80
	// Line 75, Address: 0x387440, Func Offset: 0x90
	// Func End, Address: 0x387454, Func Offset: 0xa4
}

// zConditionalInit__FPvPv
// Start address: 0x387460
void zConditionalInit(void* b, void* asset)
{
	// Line 45, Address: 0x387460, Func Offset: 0
	// Func End, Address: 0x387468, Func Offset: 0x8
}

