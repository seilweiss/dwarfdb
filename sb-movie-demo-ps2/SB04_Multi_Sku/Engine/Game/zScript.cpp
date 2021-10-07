



uint8 zScriptExecuteEvents(_zScript* t, float32 start, float32 end);
void zScriptEventCB(xBase* to, uint32 toEvent, float32* toParam);
void zScriptReset(_zScript* t);
void zScriptInit(void* b, void* tasset);

// zScriptExecuteEvents__FP8_zScriptff
// Start address: 0x2ee2d0
uint8 zScriptExecuteEvents(_zScript* t, float32 start, float32 end)
{
	xScriptEventAsset* endEvent;
	xBase* paramWidget;
	xScriptEventAsset* curr;
	// Line 219, Address: 0x2ee2d0, Func Offset: 0
	// Line 222, Address: 0x2ee2f0, Func Offset: 0x20
	// Line 224, Address: 0x2ee2fc, Func Offset: 0x2c
	// Line 223, Address: 0x2ee300, Func Offset: 0x30
	// Line 224, Address: 0x2ee304, Func Offset: 0x34
	// Line 231, Address: 0x2ee310, Func Offset: 0x40
	// Line 247, Address: 0x2ee31c, Func Offset: 0x4c
	// Line 249, Address: 0x2ee328, Func Offset: 0x58
	// Line 251, Address: 0x2ee334, Func Offset: 0x64
	// Line 252, Address: 0x2ee344, Func Offset: 0x74
	// Line 253, Address: 0x2ee3b8, Func Offset: 0xe8
	// Line 254, Address: 0x2ee3c0, Func Offset: 0xf0
	// Line 255, Address: 0x2ee3c4, Func Offset: 0xf4
	// Line 256, Address: 0x2ee3cc, Func Offset: 0xfc
	// Line 257, Address: 0x2ee430, Func Offset: 0x160
	// Line 258, Address: 0x2ee438, Func Offset: 0x168
	// Line 261, Address: 0x2ee440, Func Offset: 0x170
	// Line 262, Address: 0x2ee448, Func Offset: 0x178
	// Line 261, Address: 0x2ee44c, Func Offset: 0x17c
	// Line 262, Address: 0x2ee450, Func Offset: 0x180
	// Line 271, Address: 0x2ee46c, Func Offset: 0x19c
	// Line 272, Address: 0x2ee470, Func Offset: 0x1a0
	// Line 274, Address: 0x2ee47c, Func Offset: 0x1ac
	// Line 252, Address: 0x2ee484, Func Offset: 0x1b4
	// Line 256, Address: 0x2ee490, Func Offset: 0x1c0
	// Line 274, Address: 0x2ee498, Func Offset: 0x1c8
	// Line 266, Address: 0x2ee49c, Func Offset: 0x1cc
	// Line 274, Address: 0x2ee4b0, Func Offset: 0x1e0
	// Line 268, Address: 0x2ee4c8, Func Offset: 0x1f8
	// Line 277, Address: 0x2ee4d0, Func Offset: 0x200
	// Line 281, Address: 0x2ee4d8, Func Offset: 0x208
	// Line 283, Address: 0x2ee4f0, Func Offset: 0x220
	// Line 284, Address: 0x2ee514, Func Offset: 0x244
	// Line 285, Address: 0x2ee518, Func Offset: 0x248
	// Func End, Address: 0x2ee538, Func Offset: 0x268
}

// zScriptEventCB__FP5xBaseP5xBaseUiPCfP5xBaseUi
// Start address: 0x2ee540
void zScriptEventCB(xBase* to, uint32 toEvent, float32* toParam)
{
	_zScript* t;
	// Line 145, Address: 0x2ee540, Func Offset: 0
	// Line 152, Address: 0x2ee544, Func Offset: 0x4
	// Line 145, Address: 0x2ee548, Func Offset: 0x8
	// Line 152, Address: 0x2ee550, Func Offset: 0x10
	// Line 156, Address: 0x2ee5a8, Func Offset: 0x68
	// Line 157, Address: 0x2ee5b0, Func Offset: 0x70
	// Line 160, Address: 0x2ee5c4, Func Offset: 0x84
	// Line 165, Address: 0x2ee5d8, Func Offset: 0x98
	// Line 167, Address: 0x2ee5e8, Func Offset: 0xa8
	// Line 170, Address: 0x2ee5ec, Func Offset: 0xac
	// Line 174, Address: 0x2ee5f4, Func Offset: 0xb4
	// Line 178, Address: 0x2ee604, Func Offset: 0xc4
	// Line 181, Address: 0x2ee60c, Func Offset: 0xcc
	// Line 182, Address: 0x2ee614, Func Offset: 0xd4
	// Line 183, Address: 0x2ee61c, Func Offset: 0xdc
	// Line 185, Address: 0x2ee624, Func Offset: 0xe4
	// Line 189, Address: 0x2ee62c, Func Offset: 0xec
	// Line 190, Address: 0x2ee658, Func Offset: 0x118
	// Line 194, Address: 0x2ee668, Func Offset: 0x128
	// Line 197, Address: 0x2ee670, Func Offset: 0x130
	// Line 198, Address: 0x2ee698, Func Offset: 0x158
	// Line 201, Address: 0x2ee6a0, Func Offset: 0x160
	// Line 202, Address: 0x2ee6c8, Func Offset: 0x188
	// Line 206, Address: 0x2ee6d0, Func Offset: 0x190
	// Line 209, Address: 0x2ee6d8, Func Offset: 0x198
	// Line 210, Address: 0x2ee6e0, Func Offset: 0x1a0
	// Line 216, Address: 0x2ee6e8, Func Offset: 0x1a8
	// Func End, Address: 0x2ee6f8, Func Offset: 0x1b8
}

// zScriptReset__FP8_zScript
// Start address: 0x2ee700
void zScriptReset(_zScript* t)
{
	// Line 80, Address: 0x2ee700, Func Offset: 0
	// Line 85, Address: 0x2ee70c, Func Offset: 0xc
	// Line 88, Address: 0x2ee718, Func Offset: 0x18
	// Line 89, Address: 0x2ee71c, Func Offset: 0x1c
	// Line 90, Address: 0x2ee728, Func Offset: 0x28
	// Line 91, Address: 0x2ee72c, Func Offset: 0x2c
	// Line 92, Address: 0x2ee738, Func Offset: 0x38
	// Func End, Address: 0x2ee748, Func Offset: 0x48
}

// zScriptInit__FPvPv
// Start address: 0x2ee750
void zScriptInit(void* b, void* tasset)
{
	// Line 46, Address: 0x2ee750, Func Offset: 0
	// Line 47, Address: 0x2ee764, Func Offset: 0x14
	// Line 48, Address: 0x2ee7dc, Func Offset: 0x8c
	// Func End, Address: 0x2ee7f0, Func Offset: 0xa0
}

