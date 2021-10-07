



void zCameraTweak_EventCB(xBase* to, uint32 toEvent);
void zCameraTweak_Load(zCameraTweak* tweak, xSerial* s);
void zCameraTweak_Save(zCameraTweak* tweak, xSerial* s);
void zCameraTweak_Init(xBase& data, xDynAsset& asset);
void zCameraTweakGlobal_Reset();
void zCameraTweakGlobal_Remove(uint32 owner);
void zCameraTweakGlobal_Add(uint32 owner, float32 priority, float32 time, float32 pitch, float32 distMult);
void zCameraTweakGlobal_Init();

// zCameraTweak_EventCB__FP5xBaseP5xBaseUiPCfP5xBaseUi
// Start address: 0x38fe70
void zCameraTweak_EventCB(xBase* to, uint32 toEvent)
{
	zCameraTweak* tweak;
	// Line 294, Address: 0x38fe70, Func Offset: 0
	// Line 301, Address: 0x38fe74, Func Offset: 0x4
	// Line 304, Address: 0x38fea8, Func Offset: 0x38
	// Line 305, Address: 0x38feb0, Func Offset: 0x40
	// Line 308, Address: 0x38feb8, Func Offset: 0x48
	// Line 309, Address: 0x38fec0, Func Offset: 0x50
	// Line 312, Address: 0x38fec8, Func Offset: 0x58
	// Line 313, Address: 0x38fedc, Func Offset: 0x6c
	// Line 319, Address: 0x38fef8, Func Offset: 0x88
	// Line 322, Address: 0x38ff00, Func Offset: 0x90
	// Line 323, Address: 0x38ff10, Func Offset: 0xa0
	// Line 329, Address: 0x38ff18, Func Offset: 0xa8
	// Func End, Address: 0x38ff24, Func Offset: 0xb4
}

// zCameraTweak_Load__FP12zCameraTweakP7xSerial
// Start address: 0x38ff30
void zCameraTweak_Load(zCameraTweak* tweak, xSerial* s)
{
	// Line 290, Address: 0x38ff30, Func Offset: 0
	// Func End, Address: 0x38ff38, Func Offset: 0x8
}

// zCameraTweak_Save__FP12zCameraTweakP7xSerial
// Start address: 0x38ff40
void zCameraTweak_Save(zCameraTweak* tweak, xSerial* s)
{
	// Line 286, Address: 0x38ff40, Func Offset: 0
	// Func End, Address: 0x38ff48, Func Offset: 0x8
}

// zCameraTweak_Init__FR5xBaseR9xDynAssetUi
// Start address: 0x38ff50
void zCameraTweak_Init(xBase& data, xDynAsset& asset)
{
	// Line 253, Address: 0x38ff50, Func Offset: 0
	// Line 255, Address: 0x38ff64, Func Offset: 0x14
	// Line 256, Address: 0x38ff8c, Func Offset: 0x3c
	// Func End, Address: 0x38ffac, Func Offset: 0x5c
}

// zCameraTweakGlobal_Reset__Fv
// Start address: 0x38ffb0
void zCameraTweakGlobal_Reset()
{
	// Line 206, Address: 0x38ffb0, Func Offset: 0
	// Line 204, Address: 0x38ffb4, Func Offset: 0x4
	// Line 206, Address: 0x38ffb8, Func Offset: 0x8
	// Line 201, Address: 0x38ffbc, Func Offset: 0xc
	// Line 202, Address: 0x38ffc0, Func Offset: 0x10
	// Line 203, Address: 0x38ffc4, Func Offset: 0x14
	// Line 204, Address: 0x38ffc8, Func Offset: 0x18
	// Line 206, Address: 0x38ffcc, Func Offset: 0x1c
	// Line 205, Address: 0x38ffd0, Func Offset: 0x20
	// Line 209, Address: 0x38ffd4, Func Offset: 0x24
	// Line 207, Address: 0x38ffd8, Func Offset: 0x28
	// Line 210, Address: 0x38ffdc, Func Offset: 0x2c
	// Func End, Address: 0x38ffe4, Func Offset: 0x34
}

// zCameraTweakGlobal_Remove__FUi
// Start address: 0x38fff0
void zCameraTweakGlobal_Remove(uint32 owner)
{
	int32 i;
	int32 j;
	// Line 165, Address: 0x38fff0, Func Offset: 0
	// Line 166, Address: 0x390008, Func Offset: 0x18
	// Line 169, Address: 0x390014, Func Offset: 0x24
	// Line 188, Address: 0x39001c, Func Offset: 0x2c
	// Line 189, Address: 0x390040, Func Offset: 0x50
	// Line 190, Address: 0x390044, Func Offset: 0x54
	// Line 189, Address: 0x39004c, Func Offset: 0x5c
	// Line 190, Address: 0x390070, Func Offset: 0x80
	// Line 194, Address: 0x390080, Func Offset: 0x90
	// Line 197, Address: 0x390090, Func Offset: 0xa0
	// Line 172, Address: 0x3900c0, Func Offset: 0xd0
	// Line 197, Address: 0x3900c4, Func Offset: 0xd4
	// Line 172, Address: 0x3900c8, Func Offset: 0xd8
	// Line 197, Address: 0x3900cc, Func Offset: 0xdc
	// Line 172, Address: 0x3900d8, Func Offset: 0xe8
	// Line 173, Address: 0x3900dc, Func Offset: 0xec
	// Line 197, Address: 0x3900e4, Func Offset: 0xf4
	// Line 181, Address: 0x390100, Func Offset: 0x110
	// Line 197, Address: 0x390108, Func Offset: 0x118
	// Func End, Address: 0x390128, Func Offset: 0x138
}

// zCameraTweakGlobal_Add__FUiffff
// Start address: 0x390130
void zCameraTweakGlobal_Add(uint32 owner, float32 priority, float32 time, float32 pitch, float32 distMult)
{
	int32 i;
	int32 j;
	// Line 121, Address: 0x390130, Func Offset: 0
	// Line 122, Address: 0x390148, Func Offset: 0x18
	// Line 125, Address: 0x390154, Func Offset: 0x24
	// Line 128, Address: 0x390168, Func Offset: 0x38
	// Line 129, Address: 0x390178, Func Offset: 0x48
	// Line 128, Address: 0x39017c, Func Offset: 0x4c
	// Line 129, Address: 0x390180, Func Offset: 0x50
	// Line 130, Address: 0x3901a0, Func Offset: 0x70
	// Line 131, Address: 0x3901c4, Func Offset: 0x94
	// Line 132, Address: 0x3901c8, Func Offset: 0x98
	// Line 131, Address: 0x3901d0, Func Offset: 0xa0
	// Line 132, Address: 0x3901f4, Func Offset: 0xc4
	// Line 133, Address: 0x3901fc, Func Offset: 0xcc
	// Line 135, Address: 0x390204, Func Offset: 0xd4
	// Line 138, Address: 0x390220, Func Offset: 0xf0
	// Line 139, Address: 0x390230, Func Offset: 0x100
	// Line 138, Address: 0x390234, Func Offset: 0x104
	// Line 139, Address: 0x390238, Func Offset: 0x108
	// Line 140, Address: 0x39023c, Func Offset: 0x10c
	// Line 139, Address: 0x390240, Func Offset: 0x110
	// Line 140, Address: 0x390244, Func Offset: 0x114
	// Line 141, Address: 0x39026c, Func Offset: 0x13c
	// Line 140, Address: 0x390270, Func Offset: 0x140
	// Line 141, Address: 0x390278, Func Offset: 0x148
	// Line 142, Address: 0x390290, Func Offset: 0x160
	// Line 140, Address: 0x390298, Func Offset: 0x168
	// Line 141, Address: 0x39029c, Func Offset: 0x16c
	// Line 142, Address: 0x3902a0, Func Offset: 0x170
	// Line 143, Address: 0x3902c0, Func Offset: 0x190
	// Line 142, Address: 0x3902c4, Func Offset: 0x194
	// Line 143, Address: 0x3902d4, Func Offset: 0x1a4
	// Line 146, Address: 0x3902d8, Func Offset: 0x1a8
	// Line 158, Address: 0x3902e0, Func Offset: 0x1b0
	// Line 149, Address: 0x390328, Func Offset: 0x1f8
	// Line 158, Address: 0x39032c, Func Offset: 0x1fc
	// Line 149, Address: 0x390330, Func Offset: 0x200
	// Line 158, Address: 0x390334, Func Offset: 0x204
	// Line 150, Address: 0x39033c, Func Offset: 0x20c
	// Line 158, Address: 0x39034c, Func Offset: 0x21c
	// Func End, Address: 0x390354, Func Offset: 0x224
}

// zCameraTweakGlobal_Init__Fv
// Start address: 0x390360
void zCameraTweakGlobal_Init()
{
	// Line 103, Address: 0x390360, Func Offset: 0
	// Line 104, Address: 0x390378, Func Offset: 0x18
	// Line 105, Address: 0x3903b4, Func Offset: 0x54
	// Line 104, Address: 0x3903bc, Func Offset: 0x5c
	// Line 105, Address: 0x3903c0, Func Offset: 0x60
	// Line 106, Address: 0x3903cc, Func Offset: 0x6c
	// Line 105, Address: 0x3903d0, Func Offset: 0x70
	// Line 106, Address: 0x3903dc, Func Offset: 0x7c
	// Line 105, Address: 0x3903e8, Func Offset: 0x88
	// Line 106, Address: 0x3903ec, Func Offset: 0x8c
	// Line 105, Address: 0x3903fc, Func Offset: 0x9c
	// Line 106, Address: 0x390400, Func Offset: 0xa0
	// Line 105, Address: 0x390404, Func Offset: 0xa4
	// Line 106, Address: 0x390414, Func Offset: 0xb4
	// Line 105, Address: 0x390420, Func Offset: 0xc0
	// Line 107, Address: 0x390424, Func Offset: 0xc4
	// Func End, Address: 0x39043c, Func Offset: 0xdc
}

