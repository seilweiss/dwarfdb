



void xTimerUpdate(xBase* to, float32 dt);
void xTimerEventCB(xBase* to, uint32 toEvent, float32* toParam);
void xTimerLoad(xTimer* ent, xSerial* s);
void xTimerSave(xTimer* ent, xSerial* s);
int32 xTimer_ObjIDIsPauseTimer(uint32 id);
void xTimerInit(void* b, void* tasset);

// xTimerUpdate__FP5xBaseP6xScenef
// Start address: 0x44a690
void xTimerUpdate(xBase* to, float32 dt)
{
	xTimer* t;
	// Line 300, Address: 0x44a690, Func Offset: 0
	// Line 308, Address: 0x44a694, Func Offset: 0x4
	// Line 300, Address: 0x44a698, Func Offset: 0x8
	// Line 304, Address: 0x44a6a4, Func Offset: 0x14
	// Line 308, Address: 0x44a6a8, Func Offset: 0x18
	// Line 311, Address: 0x44a6b4, Func Offset: 0x24
	// Line 313, Address: 0x44a6c4, Func Offset: 0x34
	// Line 318, Address: 0x44a6e0, Func Offset: 0x50
	// Line 321, Address: 0x44a6e4, Func Offset: 0x54
	// Line 318, Address: 0x44a6ec, Func Offset: 0x5c
	// Line 321, Address: 0x44a6f0, Func Offset: 0x60
	// Line 324, Address: 0x44a6fc, Func Offset: 0x6c
	// Line 327, Address: 0x44a720, Func Offset: 0x90
	// Func End, Address: 0x44a734, Func Offset: 0xa4
}

// xTimerEventCB__FP5xBaseP5xBaseUiPCfP5xBaseUi
// Start address: 0x44a740
void xTimerEventCB(xBase* to, uint32 toEvent, float32* toParam)
{
	xTimer* t;
	// Line 246, Address: 0x44a740, Func Offset: 0
	// Line 253, Address: 0x44a744, Func Offset: 0x4
	// Line 246, Address: 0x44a748, Func Offset: 0x8
	// Line 253, Address: 0x44a758, Func Offset: 0x18
	// Line 256, Address: 0x44a7a4, Func Offset: 0x64
	// Line 257, Address: 0x44a7a8, Func Offset: 0x68
	// Line 261, Address: 0x44a7b0, Func Offset: 0x70
	// Line 265, Address: 0x44a7c0, Func Offset: 0x80
	// Line 268, Address: 0x44a7c8, Func Offset: 0x88
	// Line 269, Address: 0x44a838, Func Offset: 0xf8
	// Line 273, Address: 0x44a840, Func Offset: 0x100
	// Line 276, Address: 0x44a848, Func Offset: 0x108
	// Line 277, Address: 0x44a84c, Func Offset: 0x10c
	// Line 280, Address: 0x44a854, Func Offset: 0x114
	// Line 285, Address: 0x44a864, Func Offset: 0x124
	// Line 268, Address: 0x44a874, Func Offset: 0x134
	// Line 285, Address: 0x44a87c, Func Offset: 0x13c
	// Line 268, Address: 0x44a880, Func Offset: 0x140
	// Line 285, Address: 0x44a88c, Func Offset: 0x14c
	// Line 268, Address: 0x44a890, Func Offset: 0x150
	// Line 285, Address: 0x44a898, Func Offset: 0x158
	// Line 268, Address: 0x44a89c, Func Offset: 0x15c
	// Line 286, Address: 0x44a8b0, Func Offset: 0x170
	// Func End, Address: 0x44a8c8, Func Offset: 0x188
}

// xTimerLoad__FP6xTimerP7xSerial
// Start address: 0x44a8d0
void xTimerLoad(xTimer* ent, xSerial* s)
{
	// Line 222, Address: 0x44a8d0, Func Offset: 0
	// Line 223, Address: 0x44a8e4, Func Offset: 0x14
	// Line 229, Address: 0x44a8ec, Func Offset: 0x1c
	// Line 230, Address: 0x44a900, Func Offset: 0x30
	// Line 231, Address: 0x44a914, Func Offset: 0x44
	// Func End, Address: 0x44a928, Func Offset: 0x58
}

// xTimerSave__FP6xTimerP7xSerial
// Start address: 0x44a930
void xTimerSave(xTimer* ent, xSerial* s)
{
	// Line 201, Address: 0x44a930, Func Offset: 0
	// Line 202, Address: 0x44a944, Func Offset: 0x14
	// Line 207, Address: 0x44a94c, Func Offset: 0x1c
	// Line 208, Address: 0x44a968, Func Offset: 0x38
	// Line 209, Address: 0x44a984, Func Offset: 0x54
	// Func End, Address: 0x44a998, Func Offset: 0x68
}

// xTimer_ObjIDIsPauseTimer__FUi
// Start address: 0x44a9a0
int32 xTimer_ObjIDIsPauseTimer(uint32 id)
{
	int32 bar;
	int32 i;
	// Line 108, Address: 0x44a9a0, Func Offset: 0
	// Line 110, Address: 0x44a9b0, Func Offset: 0x10
	// Line 112, Address: 0x44a9d8, Func Offset: 0x38
	// Line 117, Address: 0x44a9e0, Func Offset: 0x40
	// Line 118, Address: 0x44a9e4, Func Offset: 0x44
	// Line 122, Address: 0x44aa04, Func Offset: 0x64
	// Line 123, Address: 0x44aa10, Func Offset: 0x70
	// Line 125, Address: 0x44aa30, Func Offset: 0x90
	// Line 127, Address: 0x44aa38, Func Offset: 0x98
	// Line 130, Address: 0x44aa48, Func Offset: 0xa8
	// Line 131, Address: 0x44aa4c, Func Offset: 0xac
	// Func End, Address: 0x44aa54, Func Offset: 0xb4
}

// xTimerInit__FPvPv
// Start address: 0x44aa60
void xTimerInit(void* b, void* tasset)
{
	// Line 59, Address: 0x44aa60, Func Offset: 0
	// Line 60, Address: 0x44aa78, Func Offset: 0x18
	// Line 61, Address: 0x44ab20, Func Offset: 0xc0
	// Line 60, Address: 0x44ab30, Func Offset: 0xd0
	// Line 61, Address: 0x44ab38, Func Offset: 0xd8
	// Line 60, Address: 0x44ab3c, Func Offset: 0xdc
	// Line 61, Address: 0x44ab48, Func Offset: 0xe8
	// Line 60, Address: 0x44ab4c, Func Offset: 0xec
	// Line 61, Address: 0x44ab54, Func Offset: 0xf4
	// Line 60, Address: 0x44ab58, Func Offset: 0xf8
	// Line 61, Address: 0x44ab6c, Func Offset: 0x10c
	// Func End, Address: 0x44ab84, Func Offset: 0x124
}

