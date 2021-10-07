



void RenderText(int8* text, uint8 enabled);
void render_mem_card_no_space(int32 needed, int32 available, int32 neededFiles, uint8 enabled);
void xTRCPad(int32 pad_id, _tagTRCState state);
int32 DisplayMessage(_tagTRCState state);
void xTRCReset();
void xTRCRender();
void xTRCClearPadMsg();
uint32 pad_message_valid();
void xTRCInitMessages();
void xTRCInit();

// RenderText__FPCcb
// Start address: 0x4487c0
void RenderText(int8* text, uint8 enabled)
{
	xColor_tag c2;
	xtextbox tb;
	int8 @19982;
	// Line 767, Address: 0x4487c0, Func Offset: 0
	// Line 776, Address: 0x4487d0, Func Offset: 0x10
	// Line 768, Address: 0x4487d4, Func Offset: 0x14
	// Line 776, Address: 0x4487e4, Func Offset: 0x24
	// Line 779, Address: 0x4487ec, Func Offset: 0x2c
	// Line 780, Address: 0x44880c, Func Offset: 0x4c
	// Line 782, Address: 0x448818, Func Offset: 0x58
	// Line 780, Address: 0x44881c, Func Offset: 0x5c
	// Line 781, Address: 0x448820, Func Offset: 0x60
	// Line 782, Address: 0x448828, Func Offset: 0x68
	// Line 780, Address: 0x448830, Func Offset: 0x70
	// Line 781, Address: 0x448840, Func Offset: 0x80
	// Line 782, Address: 0x448880, Func Offset: 0xc0
	// Line 783, Address: 0x4488b0, Func Offset: 0xf0
	// Line 782, Address: 0x4488b4, Func Offset: 0xf4
	// Line 783, Address: 0x4488b8, Func Offset: 0xf8
	// Line 784, Address: 0x4488bc, Func Offset: 0xfc
	// Line 783, Address: 0x4488c0, Func Offset: 0x100
	// Line 784, Address: 0x4488c4, Func Offset: 0x104
	// Line 782, Address: 0x4488c8, Func Offset: 0x108
	// Line 784, Address: 0x4488cc, Func Offset: 0x10c
	// Line 783, Address: 0x4488d0, Func Offset: 0x110
	// Line 784, Address: 0x4488dc, Func Offset: 0x11c
	// Line 786, Address: 0x4488fc, Func Offset: 0x13c
	// Line 788, Address: 0x448904, Func Offset: 0x144
	// Line 776, Address: 0x44890c, Func Offset: 0x14c
	// Line 788, Address: 0x448918, Func Offset: 0x158
	// Line 776, Address: 0x448920, Func Offset: 0x160
	// Line 788, Address: 0x448928, Func Offset: 0x168
	// Line 776, Address: 0x448a00, Func Offset: 0x240
	// Line 788, Address: 0x448a04, Func Offset: 0x244
	// Line 776, Address: 0x448b20, Func Offset: 0x360
	// Line 788, Address: 0x448b24, Func Offset: 0x364
	// Line 776, Address: 0x448be4, Func Offset: 0x424
	// Line 788, Address: 0x448be8, Func Offset: 0x428
	// Line 776, Address: 0x448c04, Func Offset: 0x444
	// Line 788, Address: 0x448c08, Func Offset: 0x448
	// Line 776, Address: 0x448c0c, Func Offset: 0x44c
	// Line 788, Address: 0x448c14, Func Offset: 0x454
	// Line 776, Address: 0x448c20, Func Offset: 0x460
	// Line 788, Address: 0x448c24, Func Offset: 0x464
	// Func End, Address: 0x448c60, Func Offset: 0x4a0
}

// render_mem_card_no_space__Fiiib
// Start address: 0x448c60
void render_mem_card_no_space(int32 needed, int32 available, int32 neededFiles, uint8 enabled)
{
	int8* error_text;
	// Line 721, Address: 0x448c60, Func Offset: 0
	// Line 722, Address: 0x448c70, Func Offset: 0x10
	// Line 761, Address: 0x448c78, Func Offset: 0x18
	// Line 734, Address: 0x448c88, Func Offset: 0x28
	// Line 736, Address: 0x448c8c, Func Offset: 0x2c
	// Line 761, Address: 0x448c90, Func Offset: 0x30
	// Line 732, Address: 0x448c94, Func Offset: 0x34
	// Line 761, Address: 0x448c98, Func Offset: 0x38
	// Line 762, Address: 0x448dbc, Func Offset: 0x15c
	// Line 722, Address: 0x448dc4, Func Offset: 0x164
	// Line 762, Address: 0x448dc8, Func Offset: 0x168
	// Line 761, Address: 0x448de0, Func Offset: 0x180
	// Line 762, Address: 0x448dec, Func Offset: 0x18c
	// Line 761, Address: 0x448df4, Func Offset: 0x194
	// Line 762, Address: 0x448dfc, Func Offset: 0x19c
	// Line 761, Address: 0x448ed4, Func Offset: 0x274
	// Line 762, Address: 0x448ed8, Func Offset: 0x278
	// Line 761, Address: 0x448ff4, Func Offset: 0x394
	// Line 762, Address: 0x448ff8, Func Offset: 0x398
	// Line 761, Address: 0x4490b8, Func Offset: 0x458
	// Line 762, Address: 0x4490bc, Func Offset: 0x45c
	// Line 761, Address: 0x4490d8, Func Offset: 0x478
	// Line 762, Address: 0x4490dc, Func Offset: 0x47c
	// Line 761, Address: 0x4490e0, Func Offset: 0x480
	// Line 762, Address: 0x4490e8, Func Offset: 0x488
	// Line 761, Address: 0x4490f4, Func Offset: 0x494
	// Line 762, Address: 0x4490f8, Func Offset: 0x498
	// Func End, Address: 0x449134, Func Offset: 0x4d4
}

// xTRCPad__Fi12_tagTRCState
// Start address: 0x449140
void xTRCPad(int32 pad_id, _tagTRCState state)
{
	int32 display_message;
	int32 i;
	int8* autoSaveFailed[4];
	zUIText* autoSaveTextBox;
	// Line 529, Address: 0x449140, Func Offset: 0
	// Line 540, Address: 0x44914c, Func Offset: 0xc
	// Line 566, Address: 0x449164, Func Offset: 0x24
	// Line 540, Address: 0x449170, Func Offset: 0x30
	// Line 566, Address: 0x449174, Func Offset: 0x34
	// Line 636, Address: 0x44917c, Func Offset: 0x3c
	// Line 582, Address: 0x4491b0, Func Offset: 0x70
	// Line 636, Address: 0x4491b4, Func Offset: 0x74
	// Line 587, Address: 0x4491bc, Func Offset: 0x7c
	// Line 636, Address: 0x4491c4, Func Offset: 0x84
	// Line 595, Address: 0x4491d8, Func Offset: 0x98
	// Line 636, Address: 0x4491dc, Func Offset: 0x9c
	// Line 601, Address: 0x4491e8, Func Offset: 0xa8
	// Line 636, Address: 0x4491ec, Func Offset: 0xac
	// Line 613, Address: 0x449200, Func Offset: 0xc0
	// Line 636, Address: 0x449204, Func Offset: 0xc4
	// Line 621, Address: 0x44923c, Func Offset: 0xfc
	// Line 636, Address: 0x44924c, Func Offset: 0x10c
	// Line 621, Address: 0x449254, Func Offset: 0x114
	// Line 636, Address: 0x44925c, Func Offset: 0x11c
	// Line 621, Address: 0x449264, Func Offset: 0x124
	// Line 636, Address: 0x449268, Func Offset: 0x128
	// Func End, Address: 0x4492f0, Func Offset: 0x1b0
}

// DisplayMessage__F12_tagTRCState
// Start address: 0x4492f0
int32 DisplayMessage(_tagTRCState state)
{
	uint32 len_message_text;
	int8* msg;
	int8 c;
	uint32 sub_len;
	RwCamera* cam;
	RwRGBA bg;
	int8 @19818;
	xtextbox tb;
	// Line 424, Address: 0x4492f0, Func Offset: 0
	// Line 430, Address: 0x4492f4, Func Offset: 0x4
	// Line 424, Address: 0x4492f8, Func Offset: 0x8
	// Line 430, Address: 0x449300, Func Offset: 0x10
	// Line 435, Address: 0x449324, Func Offset: 0x34
	// Line 438, Address: 0x44932c, Func Offset: 0x3c
	// Line 439, Address: 0x44933c, Func Offset: 0x4c
	// Line 461, Address: 0x449344, Func Offset: 0x54
	// Line 462, Address: 0x449348, Func Offset: 0x58
	// Line 464, Address: 0x449350, Func Offset: 0x60
	// Line 465, Address: 0x449358, Func Offset: 0x68
	// Line 467, Address: 0x449360, Func Offset: 0x70
	// Line 468, Address: 0x449368, Func Offset: 0x78
	// Line 470, Address: 0x449370, Func Offset: 0x80
	// Line 471, Address: 0x449378, Func Offset: 0x88
	// Line 473, Address: 0x449380, Func Offset: 0x90
	// Line 474, Address: 0x449388, Func Offset: 0x98
	// Line 476, Address: 0x449390, Func Offset: 0xa0
	// Line 477, Address: 0x449398, Func Offset: 0xa8
	// Line 479, Address: 0x4493a0, Func Offset: 0xb0
	// Line 480, Address: 0x4493a8, Func Offset: 0xb8
	// Line 483, Address: 0x4493b0, Func Offset: 0xc0
	// Line 501, Address: 0x4493bc, Func Offset: 0xcc
	// Line 504, Address: 0x4493c4, Func Offset: 0xd4
	// Line 513, Address: 0x4493cc, Func Offset: 0xdc
	// Line 515, Address: 0x4494ec, Func Offset: 0x1fc
	// Line 517, Address: 0x4494f8, Func Offset: 0x208
	// Line 518, Address: 0x449500, Func Offset: 0x210
	// Line 520, Address: 0x449510, Func Offset: 0x220
	// Line 524, Address: 0x449518, Func Offset: 0x228
	// Line 442, Address: 0x449530, Func Offset: 0x240
	// Line 524, Address: 0x449534, Func Offset: 0x244
	// Line 448, Address: 0x449544, Func Offset: 0x254
	// Line 524, Address: 0x449548, Func Offset: 0x258
	// Line 448, Address: 0x449554, Func Offset: 0x264
	// Line 524, Address: 0x449558, Func Offset: 0x268
	// Line 458, Address: 0x4495d0, Func Offset: 0x2e0
	// Line 524, Address: 0x4495d8, Func Offset: 0x2e8
	// Line 506, Address: 0x4495fc, Func Offset: 0x30c
	// Line 524, Address: 0x449600, Func Offset: 0x310
	// Line 507, Address: 0x449610, Func Offset: 0x320
	// Line 524, Address: 0x449618, Func Offset: 0x328
	// Line 509, Address: 0x449628, Func Offset: 0x338
	// Line 524, Address: 0x44962c, Func Offset: 0x33c
	// Line 513, Address: 0x449648, Func Offset: 0x358
	// Line 524, Address: 0x449654, Func Offset: 0x364
	// Line 513, Address: 0x449658, Func Offset: 0x368
	// Line 524, Address: 0x44965c, Func Offset: 0x36c
	// Line 513, Address: 0x449660, Func Offset: 0x370
	// Line 524, Address: 0x449664, Func Offset: 0x374
	// Line 513, Address: 0x449750, Func Offset: 0x460
	// Line 524, Address: 0x449754, Func Offset: 0x464
	// Line 513, Address: 0x449884, Func Offset: 0x594
	// Line 524, Address: 0x449888, Func Offset: 0x598
	// Line 513, Address: 0x449940, Func Offset: 0x650
	// Line 524, Address: 0x449944, Func Offset: 0x654
	// Line 513, Address: 0x449960, Func Offset: 0x670
	// Line 524, Address: 0x449964, Func Offset: 0x674
	// Line 513, Address: 0x449968, Func Offset: 0x678
	// Line 524, Address: 0x449970, Func Offset: 0x680
	// Line 513, Address: 0x44997c, Func Offset: 0x68c
	// Line 524, Address: 0x449980, Func Offset: 0x690
	// Line 525, Address: 0x44998c, Func Offset: 0x69c
	// Func End, Address: 0x4499a0, Func Offset: 0x6b0
}

// xTRCReset__Fv
// Start address: 0x4499a0
void xTRCReset()
{
	// Line 400, Address: 0x4499a0, Func Offset: 0
	// Line 401, Address: 0x4499a4, Func Offset: 0x4
	// Line 400, Address: 0x4499a8, Func Offset: 0x8
	// Line 403, Address: 0x4499ac, Func Offset: 0xc
	// Line 401, Address: 0x4499b0, Func Offset: 0x10
	// Line 412, Address: 0x4499b8, Func Offset: 0x18
	// Line 403, Address: 0x4499bc, Func Offset: 0x1c
	// Line 412, Address: 0x4499c0, Func Offset: 0x20
	// Line 419, Address: 0x4499cc, Func Offset: 0x2c
	// Func End, Address: 0x4499f4, Func Offset: 0x54
}

// xTRCRender__Fv
// Start address: 0x449a00
void xTRCRender()
{
	// Line 389, Address: 0x449a00, Func Offset: 0
	// Line 390, Address: 0x449a04, Func Offset: 0x4
	// Line 389, Address: 0x449a08, Func Offset: 0x8
	// Line 390, Address: 0x449a10, Func Offset: 0x10
	// Line 391, Address: 0x449a1c, Func Offset: 0x1c
	// Line 393, Address: 0x449e90, Func Offset: 0x490
	// Line 396, Address: 0x449e98, Func Offset: 0x498
	// Line 397, Address: 0x44a2f8, Func Offset: 0x8f8
	// Func End, Address: 0x44a308, Func Offset: 0x908
}

// xTRCClearPadMsg__Fv
// Start address: 0x44a310
void xTRCClearPadMsg()
{
	// Line 385, Address: 0x44a310, Func Offset: 0
	// Line 384, Address: 0x44a314, Func Offset: 0x4
	// Line 386, Address: 0x44a318, Func Offset: 0x8
	// Func End, Address: 0x44a320, Func Offset: 0x10
}

// pad_message_valid__Fv
// Start address: 0x44a320
uint32 pad_message_valid()
{
	// Line 221, Address: 0x44a320, Func Offset: 0
	// Line 222, Address: 0x44a328, Func Offset: 0x8
	// Line 225, Address: 0x44a338, Func Offset: 0x18
	// Line 230, Address: 0x44a340, Func Offset: 0x20
	// Line 232, Address: 0x44a350, Func Offset: 0x30
	// Line 235, Address: 0x44a358, Func Offset: 0x38
	// Line 237, Address: 0x44a36c, Func Offset: 0x4c
	// Line 235, Address: 0x44a37c, Func Offset: 0x5c
	// Line 237, Address: 0x44a380, Func Offset: 0x60
	// Line 262, Address: 0x44a388, Func Offset: 0x68
	// Line 265, Address: 0x44a394, Func Offset: 0x74
	// Line 269, Address: 0x44a3a0, Func Offset: 0x80
	// Line 271, Address: 0x44a3b4, Func Offset: 0x94
	// Line 274, Address: 0x44a3bc, Func Offset: 0x9c
	// Line 297, Address: 0x44a3cc, Func Offset: 0xac
	// Line 303, Address: 0x44a3ec, Func Offset: 0xcc
	// Line 305, Address: 0x44a3f4, Func Offset: 0xd4
	// Line 307, Address: 0x44a40c, Func Offset: 0xec
	// Line 308, Address: 0x44a414, Func Offset: 0xf4
	// Line 312, Address: 0x44a41c, Func Offset: 0xfc
	// Line 313, Address: 0x44a420, Func Offset: 0x100
	// Line 278, Address: 0x44a434, Func Offset: 0x114
	// Line 313, Address: 0x44a43c, Func Offset: 0x11c
	// Line 300, Address: 0x44a444, Func Offset: 0x124
	// Line 313, Address: 0x44a44c, Func Offset: 0x12c
	// Line 352, Address: 0x44a460, Func Offset: 0x140
	// Line 354, Address: 0x44a464, Func Offset: 0x144
	// Func End, Address: 0x44a470, Func Offset: 0x150
}

// xTRCInitMessages__Fv
// Start address: 0x44a470
void xTRCInitMessages()
{
	// Line 211, Address: 0x44a470, Func Offset: 0
	// Line 212, Address: 0x44a474, Func Offset: 0x4
	// Line 211, Address: 0x44a478, Func Offset: 0x8
	// Line 212, Address: 0x44a47c, Func Offset: 0xc
	// Line 213, Address: 0x44a4d4, Func Offset: 0x64
	// Line 212, Address: 0x44a4d8, Func Offset: 0x68
	// Line 213, Address: 0x44a4dc, Func Offset: 0x6c
	// Line 212, Address: 0x44a544, Func Offset: 0xd4
	// Line 213, Address: 0x44a54c, Func Offset: 0xdc
	// Line 214, Address: 0x44a558, Func Offset: 0xe8
	// Line 213, Address: 0x44a578, Func Offset: 0x108
	// Line 214, Address: 0x44a580, Func Offset: 0x110
	// Func End, Address: 0x44a58c, Func Offset: 0x11c
}

// xTRCInit__Fv
// Start address: 0x44a590
void xTRCInit()
{
	// Line 196, Address: 0x44a590, Func Offset: 0
	// Line 197, Address: 0x44a594, Func Offset: 0x4
	// Line 196, Address: 0x44a598, Func Offset: 0x8
	// Line 197, Address: 0x44a59c, Func Offset: 0xc
	// Line 200, Address: 0x44a5ac, Func Offset: 0x1c
	// Line 201, Address: 0x44a5b0, Func Offset: 0x20
	// Line 200, Address: 0x44a5b4, Func Offset: 0x24
	// Line 201, Address: 0x44a5bc, Func Offset: 0x2c
	// Line 203, Address: 0x44a5c8, Func Offset: 0x38
	// Line 201, Address: 0x44a5cc, Func Offset: 0x3c
	// Line 200, Address: 0x44a5d8, Func Offset: 0x48
	// Line 201, Address: 0x44a5dc, Func Offset: 0x4c
	// Line 203, Address: 0x44a5e0, Func Offset: 0x50
	// Line 201, Address: 0x44a5e4, Func Offset: 0x54
	// Line 203, Address: 0x44a600, Func Offset: 0x70
	// Line 208, Address: 0x44a608, Func Offset: 0x78
	// Func End, Address: 0x44a614, Func Offset: 0x84
}

