



void xPadNormalizeAnalog(_tagxPad& pad, int32 inner_zone, int32 outer_zone);
int32 xPadUpdate(int32 idx, float32 time_passed);
void xPadRumbleEnable(int32 idx, int32 enable);
_tagxPad* xPadEnable(int32 idx);
int32 xPadInit();

// xPadNormalizeAnalog__FR8_tagxPadii
// Start address: 0x3c52b0
void xPadNormalizeAnalog(_tagxPad& pad, int32 inner_zone, int32 outer_zone)
{
	_tagPadAnalog* src;
	int32 i;
	// Line 485, Address: 0x3c52b0, Func Offset: 0
	// Line 487, Address: 0x3c52d8, Func Offset: 0x28
	// Line 485, Address: 0x3c52dc, Func Offset: 0x2c
	// Line 486, Address: 0x3c52e0, Func Offset: 0x30
	// Line 485, Address: 0x3c52e4, Func Offset: 0x34
	// Line 487, Address: 0x3c52f4, Func Offset: 0x44
	// Line 490, Address: 0x3c52f8, Func Offset: 0x48
	// Line 492, Address: 0x3c533c, Func Offset: 0x8c
	// Line 496, Address: 0x3c5380, Func Offset: 0xd0
	// Line 501, Address: 0x3c5394, Func Offset: 0xe4
	// Line 504, Address: 0x3c5398, Func Offset: 0xe8
	// Line 505, Address: 0x3c53b0, Func Offset: 0x100
	// Line 506, Address: 0x3c53c8, Func Offset: 0x118
	// Line 505, Address: 0x3c53cc, Func Offset: 0x11c
	// Line 506, Address: 0x3c53d0, Func Offset: 0x120
	// Line 507, Address: 0x3c53e4, Func Offset: 0x134
	// Line 510, Address: 0x3c5400, Func Offset: 0x150
	// Line 507, Address: 0x3c5404, Func Offset: 0x154
	// Line 510, Address: 0x3c540c, Func Offset: 0x15c
	// Line 508, Address: 0x3c5410, Func Offset: 0x160
	// Line 509, Address: 0x3c5420, Func Offset: 0x170
	// Line 510, Address: 0x3c5430, Func Offset: 0x180
	// Line 511, Address: 0x3c5450, Func Offset: 0x1a0
	// Line 513, Address: 0x3c5464, Func Offset: 0x1b4
	// Line 511, Address: 0x3c5470, Func Offset: 0x1c0
	// Line 513, Address: 0x3c5474, Func Offset: 0x1c4
	// Line 514, Address: 0x3c547c, Func Offset: 0x1cc
	// Line 490, Address: 0x3c549c, Func Offset: 0x1ec
	// Line 514, Address: 0x3c54a8, Func Offset: 0x1f8
	// Line 490, Address: 0x3c54b0, Func Offset: 0x200
	// Line 514, Address: 0x3c5508, Func Offset: 0x258
	// Line 492, Address: 0x3c5520, Func Offset: 0x270
	// Line 514, Address: 0x3c552c, Func Offset: 0x27c
	// Line 492, Address: 0x3c5534, Func Offset: 0x284
	// Line 514, Address: 0x3c5588, Func Offset: 0x2d8
	// Line 496, Address: 0x3c558c, Func Offset: 0x2dc
	// Line 514, Address: 0x3c5590, Func Offset: 0x2e0
	// Line 499, Address: 0x3c559c, Func Offset: 0x2ec
	// Line 514, Address: 0x3c55a0, Func Offset: 0x2f0
	// Line 501, Address: 0x3c55a8, Func Offset: 0x2f8
	// Line 504, Address: 0x3c55b0, Func Offset: 0x300
	// Line 506, Address: 0x3c55b8, Func Offset: 0x308
	// Line 514, Address: 0x3c55c0, Func Offset: 0x310
	// Func End, Address: 0x3c55ec, Func Offset: 0x33c
}

// xPadUpdate__Fif
// Start address: 0x3c55f0
int32 xPadUpdate(int32 idx, float32 time_passed)
{
	uint32 new_on;
	_tagxPad* p;
	int32 ret;
	uint32 fake_dpad;
	int32 i;
	// Line 201, Address: 0x3c55f0, Func Offset: 0
	// Line 207, Address: 0x3c5608, Func Offset: 0x18
	// Line 209, Address: 0x3c5610, Func Offset: 0x20
	// Line 219, Address: 0x3c5618, Func Offset: 0x28
	// Line 221, Address: 0x3c5628, Func Offset: 0x38
	// Line 237, Address: 0x3c56c0, Func Offset: 0xd0
	// Line 240, Address: 0x3c56d4, Func Offset: 0xe4
	// Line 237, Address: 0x3c56d8, Func Offset: 0xe8
	// Line 240, Address: 0x3c56e4, Func Offset: 0xf4
	// Line 241, Address: 0x3c56ec, Func Offset: 0xfc
	// Line 267, Address: 0x3c56f8, Func Offset: 0x108
	// Line 270, Address: 0x3c5704, Func Offset: 0x114
	// Line 279, Address: 0x3c570c, Func Offset: 0x11c
	// Line 280, Address: 0x3c5710, Func Offset: 0x120
	// Line 284, Address: 0x3c571c, Func Offset: 0x12c
	// Line 286, Address: 0x3c5728, Func Offset: 0x138
	// Line 289, Address: 0x3c5730, Func Offset: 0x140
	// Line 293, Address: 0x3c573c, Func Offset: 0x14c
	// Line 295, Address: 0x3c5744, Func Offset: 0x154
	// Line 298, Address: 0x3c5748, Func Offset: 0x158
	// Line 301, Address: 0x3c5750, Func Offset: 0x160
	// Line 304, Address: 0x3c5758, Func Offset: 0x168
	// Line 305, Address: 0x3c575c, Func Offset: 0x16c
	// Line 304, Address: 0x3c5764, Func Offset: 0x174
	// Line 305, Address: 0x3c5768, Func Offset: 0x178
	// Line 307, Address: 0x3c5774, Func Offset: 0x184
	// Line 308, Address: 0x3c5778, Func Offset: 0x188
	// Line 307, Address: 0x3c5784, Func Offset: 0x194
	// Line 316, Address: 0x3c578c, Func Offset: 0x19c
	// Line 325, Address: 0x3c57a0, Func Offset: 0x1b0
	// Line 329, Address: 0x3c57cc, Func Offset: 0x1dc
	// Line 229, Address: 0x3c5808, Func Offset: 0x218
	// Line 329, Address: 0x3c5814, Func Offset: 0x224
	// Line 229, Address: 0x3c5818, Func Offset: 0x228
	// Line 329, Address: 0x3c5820, Func Offset: 0x230
	// Line 229, Address: 0x3c5828, Func Offset: 0x238
	// Line 329, Address: 0x3c582c, Func Offset: 0x23c
	// Line 229, Address: 0x3c5834, Func Offset: 0x244
	// Line 329, Address: 0x3c5838, Func Offset: 0x248
	// Line 229, Address: 0x3c5844, Func Offset: 0x254
	// Line 329, Address: 0x3c5858, Func Offset: 0x268
	// Line 229, Address: 0x3c5864, Func Offset: 0x274
	// Line 329, Address: 0x3c5878, Func Offset: 0x288
	// Line 230, Address: 0x3c5880, Func Offset: 0x290
	// Line 329, Address: 0x3c5888, Func Offset: 0x298
	// Line 233, Address: 0x3c58ac, Func Offset: 0x2bc
	// Line 329, Address: 0x3c58b8, Func Offset: 0x2c8
	// Line 233, Address: 0x3c58bc, Func Offset: 0x2cc
	// Line 329, Address: 0x3c58c8, Func Offset: 0x2d8
	// Line 233, Address: 0x3c58d0, Func Offset: 0x2e0
	// Line 329, Address: 0x3c58d4, Func Offset: 0x2e4
	// Line 233, Address: 0x3c58dc, Func Offset: 0x2ec
	// Line 329, Address: 0x3c58e0, Func Offset: 0x2f0
	// Line 233, Address: 0x3c58ec, Func Offset: 0x2fc
	// Line 329, Address: 0x3c5900, Func Offset: 0x310
	// Line 233, Address: 0x3c590c, Func Offset: 0x31c
	// Line 329, Address: 0x3c5920, Func Offset: 0x330
	// Line 251, Address: 0x3c5954, Func Offset: 0x364
	// Line 283, Address: 0x3c5960, Func Offset: 0x370
	// Line 292, Address: 0x3c5968, Func Offset: 0x378
	// Line 334, Address: 0x3c5970, Func Offset: 0x380
	// Line 335, Address: 0x3c5974, Func Offset: 0x384
	// Line 334, Address: 0x3c597c, Func Offset: 0x38c
	// Line 335, Address: 0x3c5980, Func Offset: 0x390
	// Line 337, Address: 0x3c598c, Func Offset: 0x39c
	// Line 338, Address: 0x3c599c, Func Offset: 0x3ac
	// Line 342, Address: 0x3c59a8, Func Offset: 0x3b8
	// Line 344, Address: 0x3c59b0, Func Offset: 0x3c0
	// Line 347, Address: 0x3c59c0, Func Offset: 0x3d0
	// Line 351, Address: 0x3c59cc, Func Offset: 0x3dc
	// Line 353, Address: 0x3c59d4, Func Offset: 0x3e4
	// Line 340, Address: 0x3c59e8, Func Offset: 0x3f8
	// Line 341, Address: 0x3c59ec, Func Offset: 0x3fc
	// Line 353, Address: 0x3c59f4, Func Offset: 0x404
	// Line 349, Address: 0x3c59f8, Func Offset: 0x408
	// Line 353, Address: 0x3c59fc, Func Offset: 0x40c
	// Line 364, Address: 0x3c5a00, Func Offset: 0x410
	// Line 369, Address: 0x3c5a08, Func Offset: 0x418
	// Line 364, Address: 0x3c5a0c, Func Offset: 0x41c
	// Line 365, Address: 0x3c5a14, Func Offset: 0x424
	// Line 364, Address: 0x3c5a18, Func Offset: 0x428
	// Line 365, Address: 0x3c5a1c, Func Offset: 0x42c
	// Line 366, Address: 0x3c5a28, Func Offset: 0x438
	// Line 369, Address: 0x3c5a2c, Func Offset: 0x43c
	// Line 370, Address: 0x3c5a38, Func Offset: 0x448
	// Line 377, Address: 0x3c5a40, Func Offset: 0x450
	// Line 378, Address: 0x3c5a4c, Func Offset: 0x45c
	// Line 380, Address: 0x3c5a60, Func Offset: 0x470
	// Line 381, Address: 0x3c5a70, Func Offset: 0x480
	// Line 382, Address: 0x3c5a74, Func Offset: 0x484
	// Line 386, Address: 0x3c5a78, Func Offset: 0x488
	// Line 387, Address: 0x3c5a88, Func Offset: 0x498
	// Line 388, Address: 0x3c5a90, Func Offset: 0x4a0
	// Line 389, Address: 0x3c5a98, Func Offset: 0x4a8
	// Line 391, Address: 0x3c5aa4, Func Offset: 0x4b4
	// Line 395, Address: 0x3c5ab8, Func Offset: 0x4c8
	// Line 398, Address: 0x3c5acc, Func Offset: 0x4dc
	// Line 402, Address: 0x3c5af4, Func Offset: 0x504
	// Line 380, Address: 0x3c5afc, Func Offset: 0x50c
	// Line 402, Address: 0x3c5b04, Func Offset: 0x514
	// Line 406, Address: 0x3c5b08, Func Offset: 0x518
	// Line 407, Address: 0x3c5b0c, Func Offset: 0x51c
	// Line 406, Address: 0x3c5b14, Func Offset: 0x524
	// Line 407, Address: 0x3c5b18, Func Offset: 0x528
	// Line 409, Address: 0x3c5b24, Func Offset: 0x534
	// Line 411, Address: 0x3c5b34, Func Offset: 0x544
	// Line 415, Address: 0x3c5b40, Func Offset: 0x550
	// Line 417, Address: 0x3c5b48, Func Offset: 0x558
	// Line 420, Address: 0x3c5b58, Func Offset: 0x568
	// Line 424, Address: 0x3c5b64, Func Offset: 0x574
	// Line 426, Address: 0x3c5b6c, Func Offset: 0x57c
	// Line 413, Address: 0x3c5b80, Func Offset: 0x590
	// Line 414, Address: 0x3c5b84, Func Offset: 0x594
	// Line 426, Address: 0x3c5b8c, Func Offset: 0x59c
	// Line 422, Address: 0x3c5b90, Func Offset: 0x5a0
	// Line 426, Address: 0x3c5b94, Func Offset: 0x5a4
	// Line 434, Address: 0x3c5b98, Func Offset: 0x5a8
	// Line 435, Address: 0x3c5b9c, Func Offset: 0x5ac
	// Func End, Address: 0x3c5bb0, Func Offset: 0x5c0
}

// xPadRumbleEnable__Fii
// Start address: 0x3c5bb0
void xPadRumbleEnable(int32 idx, int32 enable)
{
	_tagxPad* p;
	// Line 127, Address: 0x3c5bb0, Func Offset: 0
	// Line 130, Address: 0x3c5bc8, Func Offset: 0x18
	// Line 127, Address: 0x3c5bcc, Func Offset: 0x1c
	// Line 130, Address: 0x3c5bd4, Func Offset: 0x24
	// Line 131, Address: 0x3c5be0, Func Offset: 0x30
	// Line 133, Address: 0x3c5be4, Func Offset: 0x34
	// Line 136, Address: 0x3c5bec, Func Offset: 0x3c
	// Line 138, Address: 0x3c5bfc, Func Offset: 0x4c
	// Line 142, Address: 0x3c5c04, Func Offset: 0x54
	// Line 144, Address: 0x3c5c14, Func Offset: 0x64
	// Line 151, Address: 0x3c5c18, Func Offset: 0x68
	// Func End, Address: 0x3c5c20, Func Offset: 0x70
}

// xPadEnable__Fi
// Start address: 0x3c5c20
_tagxPad* xPadEnable(int32 idx)
{
	_tagxPad* p;
	// Line 86, Address: 0x3c5c20, Func Offset: 0
	// Line 89, Address: 0x3c5c4c, Func Offset: 0x2c
	// Line 101, Address: 0x3c5c58, Func Offset: 0x38
	// Line 103, Address: 0x3c5c60, Func Offset: 0x40
	// Line 92, Address: 0x3c5c68, Func Offset: 0x48
	// Line 108, Address: 0x3c5c70, Func Offset: 0x50
	// Line 111, Address: 0x3c5c7c, Func Offset: 0x5c
	// Line 114, Address: 0x3c5cc4, Func Offset: 0xa4
	// Func End, Address: 0x3c5cd4, Func Offset: 0xb4
}

// xPadInit__Fv
// Start address: 0x3c5ce0
int32 xPadInit()
{
	// Line 66, Address: 0x3c5ce0, Func Offset: 0
	// Line 68, Address: 0x3c5ce4, Func Offset: 0x4
	// Line 66, Address: 0x3c5ce8, Func Offset: 0x8
	// Line 68, Address: 0x3c5cec, Func Offset: 0xc
	// Line 72, Address: 0x3c5cfc, Func Offset: 0x1c
	// Line 75, Address: 0x3c5d04, Func Offset: 0x24
	// Line 72, Address: 0x3c5d08, Func Offset: 0x28
	// Line 75, Address: 0x3c5d0c, Func Offset: 0x2c
	// Func End, Address: 0x3c5d14, Func Offset: 0x34
}

