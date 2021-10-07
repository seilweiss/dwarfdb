



void xCounterParseTag(jot& j, split_tag& splitTag);
void xCounterStartup();
void xCounterEventCB(xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget);
void xCounterLoad(_xCounter* ent, xSerial* s);
void xCounterSave(_xCounter* ent, xSerial* s);
void xCounterReset(xBase* b);
void xCounterInit(void* b, void* asset);
void xCounterInit();

// xCounterParseTag__FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x416880
void xCounterParseTag(jot& j, split_tag& splitTag)
{
	int8 buffer[64];
	int8* c;
	uint32 id;
	_xCounter* counter;
	// Line 328, Address: 0x416880, Func Offset: 0
	// Line 333, Address: 0x416884, Func Offset: 0x4
	// Line 328, Address: 0x416888, Func Offset: 0x8
	// Line 333, Address: 0x41688c, Func Offset: 0xc
	// Line 328, Address: 0x416890, Func Offset: 0x10
	// Line 333, Address: 0x416894, Func Offset: 0x14
	// Line 332, Address: 0x416898, Func Offset: 0x18
	// Line 333, Address: 0x41689c, Func Offset: 0x1c
	// Line 334, Address: 0x4168a8, Func Offset: 0x28
	// Line 333, Address: 0x4168ac, Func Offset: 0x2c
	// Line 334, Address: 0x4168d0, Func Offset: 0x50
	// Line 343, Address: 0x4168fc, Func Offset: 0x7c
	// Line 340, Address: 0x416900, Func Offset: 0x80
	// Line 347, Address: 0x416908, Func Offset: 0x88
	// Line 336, Address: 0x416938, Func Offset: 0xb8
	// Line 351, Address: 0x416940, Func Offset: 0xc0
	// Line 352, Address: 0x41694c, Func Offset: 0xcc
	// Line 357, Address: 0x416954, Func Offset: 0xd4
	// Line 358, Address: 0x41695c, Func Offset: 0xdc
	// Line 361, Address: 0x416964, Func Offset: 0xe4
	// Line 362, Address: 0x41696c, Func Offset: 0xec
	// Line 361, Address: 0x416970, Func Offset: 0xf0
	// Line 362, Address: 0x416978, Func Offset: 0xf8
	// Line 361, Address: 0x41697c, Func Offset: 0xfc
	// Line 362, Address: 0x4169a4, Func Offset: 0x124
	// Line 364, Address: 0x4169b0, Func Offset: 0x130
	// Line 365, Address: 0x4169c8, Func Offset: 0x148
	// Line 368, Address: 0x4169d0, Func Offset: 0x150
	// Func End, Address: 0x4169e0, Func Offset: 0x160
}

// xCounterStartup__Fv
// Start address: 0x4169e0
void xCounterStartup()
{
	// Line 323, Address: 0x4169e0, Func Offset: 0
	// Func End, Address: 0x4169f0, Func Offset: 0x10
}

// xCounterEventCB__FP5xBaseP5xBaseUiPCfP5xBaseUi
// Start address: 0x4169f0
void xCounterEventCB(xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget)
{
	_xCounter* t;
	// Line 203, Address: 0x4169f0, Func Offset: 0
	// Line 210, Address: 0x4169f4, Func Offset: 0x4
	// Line 203, Address: 0x4169f8, Func Offset: 0x8
	// Line 210, Address: 0x4169fc, Func Offset: 0xc
	// Line 213, Address: 0x416a3c, Func Offset: 0x4c
	// Line 215, Address: 0x416a4c, Func Offset: 0x5c
	// Line 216, Address: 0x416a5c, Func Offset: 0x6c
	// Line 220, Address: 0x416a64, Func Offset: 0x74
	// Line 222, Address: 0x416a78, Func Offset: 0x88
	// Line 229, Address: 0x416a98, Func Offset: 0xa8
	// Line 232, Address: 0x416aa0, Func Offset: 0xb0
	// Line 234, Address: 0x416ab0, Func Offset: 0xc0
	// Line 235, Address: 0x416ac0, Func Offset: 0xd0
	// Line 239, Address: 0x416ac8, Func Offset: 0xd8
	// Line 241, Address: 0x416adc, Func Offset: 0xec
	// Line 248, Address: 0x416afc, Func Offset: 0x10c
	// Line 258, Address: 0x416b04, Func Offset: 0x114
	// Line 261, Address: 0x416b08, Func Offset: 0x118
	// Line 262, Address: 0x416b10, Func Offset: 0x120
	// Line 265, Address: 0x416b18, Func Offset: 0x128
	// Line 266, Address: 0x416b1c, Func Offset: 0x12c
	// Line 267, Address: 0x416b20, Func Offset: 0x130
	// Line 270, Address: 0x416b28, Func Offset: 0x138
	// Line 272, Address: 0x416b38, Func Offset: 0x148
	// Line 273, Address: 0x416b50, Func Offset: 0x160
	// Line 280, Address: 0x416b5c, Func Offset: 0x16c
	// Line 282, Address: 0x416b6c, Func Offset: 0x17c
	// Line 283, Address: 0x416b84, Func Offset: 0x194
	// Line 284, Address: 0x416b88, Func Offset: 0x198
	// Line 285, Address: 0x416b90, Func Offset: 0x1a0
	// Line 286, Address: 0x416b9c, Func Offset: 0x1ac
	// Line 291, Address: 0x416ba0, Func Offset: 0x1b0
	// Line 218, Address: 0x416ba8, Func Offset: 0x1b8
	// Line 291, Address: 0x416bb8, Func Offset: 0x1c8
	// Line 219, Address: 0x416bc0, Func Offset: 0x1d0
	// Line 237, Address: 0x416bc8, Func Offset: 0x1d8
	// Line 291, Address: 0x416bd8, Func Offset: 0x1e8
	// Line 238, Address: 0x416be0, Func Offset: 0x1f0
	// Line 291, Address: 0x416be8, Func Offset: 0x1f8
	// Line 275, Address: 0x416bf0, Func Offset: 0x200
	// Line 277, Address: 0x416bf4, Func Offset: 0x204
	// Line 292, Address: 0x416bfc, Func Offset: 0x20c
	// Func End, Address: 0x416c08, Func Offset: 0x218
}

// xCounterLoad__FP9_xCounterP7xSerial
// Start address: 0x416c10
void xCounterLoad(_xCounter* ent, xSerial* s)
{
	// Line 180, Address: 0x416c10, Func Offset: 0
	// Line 181, Address: 0x416c28, Func Offset: 0x18
	// Line 186, Address: 0x416c60, Func Offset: 0x50
	// Line 187, Address: 0x416c6c, Func Offset: 0x5c
	// Line 188, Address: 0x416c78, Func Offset: 0x68
	// Func End, Address: 0x416c8c, Func Offset: 0x7c
}

// xCounterSave__FP9_xCounterP7xSerial
// Start address: 0x416c90
void xCounterSave(_xCounter* ent, xSerial* s)
{
	// Line 158, Address: 0x416c90, Func Offset: 0
	// Line 159, Address: 0x416ca4, Func Offset: 0x14
	// Line 164, Address: 0x416cd4, Func Offset: 0x44
	// Line 165, Address: 0x416ce0, Func Offset: 0x50
	// Line 167, Address: 0x416cec, Func Offset: 0x5c
	// Func End, Address: 0x416d00, Func Offset: 0x70
}

// xCounterReset__FP5xBase
// Start address: 0x416d00
void xCounterReset(xBase* b)
{
	_xCounter* t;
	// Line 133, Address: 0x416d00, Func Offset: 0
	// Line 136, Address: 0x416d34, Func Offset: 0x34
	// Line 137, Address: 0x416d40, Func Offset: 0x40
	// Line 138, Address: 0x416d48, Func Offset: 0x48
	// Line 139, Address: 0x416d50, Func Offset: 0x50
	// Line 142, Address: 0x416d54, Func Offset: 0x54
	// Line 146, Address: 0x416d60, Func Offset: 0x60
	// Func End, Address: 0x416d68, Func Offset: 0x68
}

// xCounterInit__FPvPv
// Start address: 0x416d70
void xCounterInit(void* b, void* asset)
{
	// Line 88, Address: 0x416d70, Func Offset: 0
	// Line 89, Address: 0x416dd8, Func Offset: 0x68
	// Func End, Address: 0x416de0, Func Offset: 0x70
}

// xCounterInit__Fv
// Start address: 0x416de0
void xCounterInit()
{
	// Line 74, Address: 0x416de0, Func Offset: 0
	// Func End, Address: 0x416de8, Func Offset: 0x8
}

