
typedef int32(*type_0)(int32);
typedef int32(*type_1)();
typedef void(*type_2)(int32, int32, int32);
typedef void(*type_3)();
typedef void(*type_4)();
typedef void(*type_5)();
typedef void(*type_6)();
typedef int32(*type_7)(int32);
typedef int32(*type_8)(int32);
typedef int32(*type_9)(int32);
typedef int32(*type_10)(int32);
typedef int32(*type_11)(int32);
typedef int32(*type_12)(int32);
typedef int32(*type_13)(int32);
typedef int32(*type_14)();
typedef int32(*type_15)(int32);
typedef int32(*type_16)(int32);
typedef int32(*type_17)(int32);


void(*xScriptCartBeep)();
int32(*xScriptCartIsCardPresent)();
int32(*xScriptCartGetCardFreeBlocks)(int32);
int32(*xScriptCartError)();
void(*xScriptCartEnd)();
void(*xScriptCartBegin)();
void(*xScriptCartSlotInfo)(int32, int32, int32);
int32(*xScriptCartAccessCardDone)(int32);
int32(*xScriptCartAccessCard)(int32);
int32(*xScriptCartCheckValidSlot)(int32);
int32(*xScriptCartCountValidSlots)(int32);
int32(*xScriptCartCountValidCardSlots)(int32);
int32(*xScriptCartDeleteGame)(int32);
int32(*xScriptCartSaveGameDone)(int32);
int32(*xScriptCartSaveGame)(int32);
int32(*xScriptCartLoadGameDone)(int32);
int32(*xScriptCartLoadGame)(int32);
void(*xScriptCartFormat)();

void xScriptCartBeep();
int32 xScriptCartIsCardPresent();
int32 xScriptCartGetCardFreeBlocks(int32 slot);
void xScriptCartEnd();
void xScriptCartBegin();
void xScriptCartSlotInfo(int32 cart, int32 slot, int32 data);
int32 xScriptCartCountValidCardSlots(int32 cart);
int32 xScriptCartCheckValidSlot(int32 slot);
int32 xScriptCartCountValidSlots(int32 cart);
int32 xScriptCartError();
int32 xScriptCartAccessCardDone(int32 card);
int32 xScriptCartAccessCard(int32 card);
int32 xScriptCartDeleteGame(int32 slot);
int32 xScriptCartSaveGameDone(int32 slot);
int32 xScriptCartSaveGame(int32 slot);
int32 xScriptCartLoadGameDone(int32 slot);
int32 xScriptCartLoadGame(int32 slot);
void xScriptCartFormat();
void xCartRegisterExternals();

// xScriptCartBeep__Fv
// Start address: 0x3ff640
void xScriptCartBeep()
{
	// Line 156, Address: 0x3ff640, Func Offset: 0
	// Line 157, Address: 0x3ff648, Func Offset: 0x8
	// Line 158, Address: 0x3ff650, Func Offset: 0x10
	// Func End, Address: 0x3ff660, Func Offset: 0x20
}

// xScriptCartIsCardPresent__Fv
// Start address: 0x3ff660
int32 xScriptCartIsCardPresent()
{
	// Line 151, Address: 0x3ff660, Func Offset: 0
	// Line 152, Address: 0x3ff668, Func Offset: 0x8
	// Line 153, Address: 0x3ff670, Func Offset: 0x10
	// Func End, Address: 0x3ff680, Func Offset: 0x20
}

// xScriptCartGetCardFreeBlocks__Fi
// Start address: 0x3ff680
int32 xScriptCartGetCardFreeBlocks(int32 slot)
{
	// Line 146, Address: 0x3ff680, Func Offset: 0
	// Line 147, Address: 0x3ff688, Func Offset: 0x8
	// Line 148, Address: 0x3ff690, Func Offset: 0x10
	// Func End, Address: 0x3ff6a0, Func Offset: 0x20
}

// xScriptCartEnd__Fv
// Start address: 0x3ff6a0
void xScriptCartEnd()
{
	// Line 141, Address: 0x3ff6a0, Func Offset: 0
	// Line 142, Address: 0x3ff6a8, Func Offset: 0x8
	// Line 143, Address: 0x3ff6b0, Func Offset: 0x10
	// Func End, Address: 0x3ff6c0, Func Offset: 0x20
}

// xScriptCartBegin__Fv
// Start address: 0x3ff6c0
void xScriptCartBegin()
{
	// Line 136, Address: 0x3ff6c0, Func Offset: 0
	// Line 137, Address: 0x3ff6c8, Func Offset: 0x8
	// Line 138, Address: 0x3ff6d0, Func Offset: 0x10
	// Func End, Address: 0x3ff6e0, Func Offset: 0x20
}

// xScriptCartSlotInfo__Fiii
// Start address: 0x3ff6e0
void xScriptCartSlotInfo(int32 cart, int32 slot, int32 data)
{
	// Line 131, Address: 0x3ff6e0, Func Offset: 0
	// Line 132, Address: 0x3ff6e8, Func Offset: 0x8
	// Line 133, Address: 0x3ff6f0, Func Offset: 0x10
	// Func End, Address: 0x3ff700, Func Offset: 0x20
}

// xScriptCartCountValidCardSlots__Fi
// Start address: 0x3ff700
int32 xScriptCartCountValidCardSlots(int32 cart)
{
	// Line 126, Address: 0x3ff700, Func Offset: 0
	// Line 127, Address: 0x3ff708, Func Offset: 0x8
	// Line 128, Address: 0x3ff710, Func Offset: 0x10
	// Func End, Address: 0x3ff720, Func Offset: 0x20
}

// xScriptCartCheckValidSlot__Fi
// Start address: 0x3ff720
int32 xScriptCartCheckValidSlot(int32 slot)
{
	// Line 121, Address: 0x3ff720, Func Offset: 0
	// Line 122, Address: 0x3ff728, Func Offset: 0x8
	// Line 123, Address: 0x3ff730, Func Offset: 0x10
	// Func End, Address: 0x3ff740, Func Offset: 0x20
}

// xScriptCartCountValidSlots__Fi
// Start address: 0x3ff740
int32 xScriptCartCountValidSlots(int32 cart)
{
	// Line 116, Address: 0x3ff740, Func Offset: 0
	// Line 117, Address: 0x3ff748, Func Offset: 0x8
	// Line 118, Address: 0x3ff750, Func Offset: 0x10
	// Func End, Address: 0x3ff760, Func Offset: 0x20
}

// xScriptCartError__Fv
// Start address: 0x3ff760
int32 xScriptCartError()
{
	// Line 111, Address: 0x3ff760, Func Offset: 0
	// Line 112, Address: 0x3ff768, Func Offset: 0x8
	// Line 113, Address: 0x3ff770, Func Offset: 0x10
	// Func End, Address: 0x3ff780, Func Offset: 0x20
}

// xScriptCartAccessCardDone__Fi
// Start address: 0x3ff780
int32 xScriptCartAccessCardDone(int32 card)
{
	// Line 101, Address: 0x3ff780, Func Offset: 0
	// Line 102, Address: 0x3ff788, Func Offset: 0x8
	// Line 103, Address: 0x3ff790, Func Offset: 0x10
	// Func End, Address: 0x3ff7a0, Func Offset: 0x20
}

// xScriptCartAccessCard__Fi
// Start address: 0x3ff7a0
int32 xScriptCartAccessCard(int32 card)
{
	// Line 96, Address: 0x3ff7a0, Func Offset: 0
	// Line 97, Address: 0x3ff7a8, Func Offset: 0x8
	// Line 98, Address: 0x3ff7b0, Func Offset: 0x10
	// Func End, Address: 0x3ff7c0, Func Offset: 0x20
}

// xScriptCartDeleteGame__Fi
// Start address: 0x3ff7c0
int32 xScriptCartDeleteGame(int32 slot)
{
	// Line 86, Address: 0x3ff7c0, Func Offset: 0
	// Line 87, Address: 0x3ff7c8, Func Offset: 0x8
	// Line 88, Address: 0x3ff7d0, Func Offset: 0x10
	// Func End, Address: 0x3ff7e0, Func Offset: 0x20
}

// xScriptCartSaveGameDone__Fi
// Start address: 0x3ff7e0
int32 xScriptCartSaveGameDone(int32 slot)
{
	// Line 81, Address: 0x3ff7e0, Func Offset: 0
	// Line 82, Address: 0x3ff7e8, Func Offset: 0x8
	// Line 83, Address: 0x3ff7f0, Func Offset: 0x10
	// Func End, Address: 0x3ff800, Func Offset: 0x20
}

// xScriptCartSaveGame__Fi
// Start address: 0x3ff800
int32 xScriptCartSaveGame(int32 slot)
{
	// Line 76, Address: 0x3ff800, Func Offset: 0
	// Line 77, Address: 0x3ff808, Func Offset: 0x8
	// Line 78, Address: 0x3ff810, Func Offset: 0x10
	// Func End, Address: 0x3ff820, Func Offset: 0x20
}

// xScriptCartLoadGameDone__Fi
// Start address: 0x3ff820
int32 xScriptCartLoadGameDone(int32 slot)
{
	// Line 71, Address: 0x3ff820, Func Offset: 0
	// Line 72, Address: 0x3ff828, Func Offset: 0x8
	// Line 73, Address: 0x3ff830, Func Offset: 0x10
	// Func End, Address: 0x3ff840, Func Offset: 0x20
}

// xScriptCartLoadGame__Fi
// Start address: 0x3ff840
int32 xScriptCartLoadGame(int32 slot)
{
	// Line 66, Address: 0x3ff840, Func Offset: 0
	// Line 67, Address: 0x3ff848, Func Offset: 0x8
	// Line 68, Address: 0x3ff850, Func Offset: 0x10
	// Func End, Address: 0x3ff860, Func Offset: 0x20
}

// xScriptCartFormat__Fv
// Start address: 0x3ff860
void xScriptCartFormat()
{
	// Line 61, Address: 0x3ff860, Func Offset: 0
	// Line 62, Address: 0x3ff868, Func Offset: 0x8
	// Line 63, Address: 0x3ff870, Func Offset: 0x10
	// Func End, Address: 0x3ff880, Func Offset: 0x20
}

// xCartRegisterExternals__Fv
// Start address: 0x3ff880
void xCartRegisterExternals()
{
	// Line 35, Address: 0x3ff880, Func Offset: 0
	// Line 36, Address: 0x3ff888, Func Offset: 0x8
	// Line 38, Address: 0x3ff8a4, Func Offset: 0x24
	// Line 39, Address: 0x3ff8c0, Func Offset: 0x40
	// Line 40, Address: 0x3ff8dc, Func Offset: 0x5c
	// Line 41, Address: 0x3ff8f8, Func Offset: 0x78
	// Line 42, Address: 0x3ff914, Func Offset: 0x94
	// Line 43, Address: 0x3ff930, Func Offset: 0xb0
	// Line 44, Address: 0x3ff94c, Func Offset: 0xcc
	// Line 46, Address: 0x3ff968, Func Offset: 0xe8
	// Line 47, Address: 0x3ff984, Func Offset: 0x104
	// Line 48, Address: 0x3ff9a0, Func Offset: 0x120
	// Line 49, Address: 0x3ff9bc, Func Offset: 0x13c
	// Line 50, Address: 0x3ff9d8, Func Offset: 0x158
	// Line 51, Address: 0x3ff9f4, Func Offset: 0x174
	// Line 52, Address: 0x3ffa10, Func Offset: 0x190
	// Line 53, Address: 0x3ffa2c, Func Offset: 0x1ac
	// Line 55, Address: 0x3ffa48, Func Offset: 0x1c8
	// Line 56, Address: 0x3ffa64, Func Offset: 0x1e4
	// Line 57, Address: 0x3ffa80, Func Offset: 0x200
	// Line 58, Address: 0x3ffa9c, Func Offset: 0x21c
	// Func End, Address: 0x3ffaac, Func Offset: 0x22c
}

