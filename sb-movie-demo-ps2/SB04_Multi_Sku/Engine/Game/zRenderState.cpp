



void zRenderState(_SDRenderState next);
void zRenderStateBegin();
_SDRenderState zRenderStateCurrent();

// zRenderState__F14_SDRenderState
// Start address: 0x305560
void zRenderState(_SDRenderState next)
{
	uint32 customBits;
	uint32 defBits;
	// Line 167, Address: 0x305560, Func Offset: 0
	// Line 168, Address: 0x305574, Func Offset: 0x14
	// Line 197, Address: 0x305588, Func Offset: 0x28
	// Line 168, Address: 0x30558c, Func Offset: 0x2c
	// Line 197, Address: 0x305590, Func Offset: 0x30
	// Line 205, Address: 0x305640, Func Offset: 0xe0
	// Line 204, Address: 0x305644, Func Offset: 0xe4
	// Line 205, Address: 0x305648, Func Offset: 0xe8
	// Line 219, Address: 0x30566c, Func Offset: 0x10c
	// Line 220, Address: 0x305680, Func Offset: 0x120
	// Line 221, Address: 0x305690, Func Offset: 0x130
	// Line 222, Address: 0x3056a0, Func Offset: 0x140
	// Line 223, Address: 0x3056b0, Func Offset: 0x150
	// Line 231, Address: 0x3056b8, Func Offset: 0x158
	// Line 232, Address: 0x3056cc, Func Offset: 0x16c
	// Line 239, Address: 0x3056d4, Func Offset: 0x174
	// Line 242, Address: 0x3056e8, Func Offset: 0x188
	// Line 245, Address: 0x3056f0, Func Offset: 0x190
	// Line 246, Address: 0x305700, Func Offset: 0x1a0
	// Line 253, Address: 0x305708, Func Offset: 0x1a8
	// Line 256, Address: 0x30571c, Func Offset: 0x1bc
	// Line 257, Address: 0x30572c, Func Offset: 0x1cc
	// Line 265, Address: 0x305734, Func Offset: 0x1d4
	// Line 266, Address: 0x305748, Func Offset: 0x1e8
	// Line 273, Address: 0x305750, Func Offset: 0x1f0
	// Line 275, Address: 0x305764, Func Offset: 0x204
	// Line 281, Address: 0x305774, Func Offset: 0x214
	// Line 284, Address: 0x30577c, Func Offset: 0x21c
	// Line 285, Address: 0x30578c, Func Offset: 0x22c
	// Line 295, Address: 0x305794, Func Offset: 0x234
	// Line 298, Address: 0x3057a8, Func Offset: 0x248
	// Line 299, Address: 0x3057b8, Func Offset: 0x258
	// Line 314, Address: 0x3057c0, Func Offset: 0x260
	// Line 317, Address: 0x3057d4, Func Offset: 0x274
	// Line 318, Address: 0x3057e4, Func Offset: 0x284
	// Line 325, Address: 0x3057ec, Func Offset: 0x28c
	// Line 326, Address: 0x305800, Func Offset: 0x2a0
	// Line 329, Address: 0x305810, Func Offset: 0x2b0
	// Line 332, Address: 0x305818, Func Offset: 0x2b8
	// Line 334, Address: 0x305828, Func Offset: 0x2c8
	// Line 335, Address: 0x305838, Func Offset: 0x2d8
	// Line 336, Address: 0x305848, Func Offset: 0x2e8
	// Line 343, Address: 0x305850, Func Offset: 0x2f0
	// Line 344, Address: 0x305864, Func Offset: 0x304
	// Line 351, Address: 0x30586c, Func Offset: 0x30c
	// Line 352, Address: 0x305880, Func Offset: 0x320
	// Line 355, Address: 0x305890, Func Offset: 0x330
	// Line 358, Address: 0x305898, Func Offset: 0x338
	// Line 361, Address: 0x3058a8, Func Offset: 0x348
	// Line 362, Address: 0x3058b8, Func Offset: 0x358
	// Line 363, Address: 0x3058c8, Func Offset: 0x368
	// Line 370, Address: 0x3058d0, Func Offset: 0x370
	// Line 371, Address: 0x3058dc, Func Offset: 0x37c
	// Line 378, Address: 0x3058e4, Func Offset: 0x384
	// Line 382, Address: 0x3058f0, Func Offset: 0x390
	// Line 383, Address: 0x305900, Func Offset: 0x3a0
	// Line 390, Address: 0x305908, Func Offset: 0x3a8
	// Line 391, Address: 0x30591c, Func Offset: 0x3bc
	// Line 394, Address: 0x30592c, Func Offset: 0x3cc
	// Line 396, Address: 0x305934, Func Offset: 0x3d4
	// Line 400, Address: 0x30593c, Func Offset: 0x3dc
	// Line 401, Address: 0x305948, Func Offset: 0x3e8
	// Line 402, Address: 0x305958, Func Offset: 0x3f8
	// Line 403, Address: 0x305968, Func Offset: 0x408
	// Line 404, Address: 0x305978, Func Offset: 0x418
	// Line 405, Address: 0x305988, Func Offset: 0x428
	// Line 406, Address: 0x305998, Func Offset: 0x438
	// Line 407, Address: 0x3059a8, Func Offset: 0x448
	// Line 411, Address: 0x3059b0, Func Offset: 0x450
	// Line 412, Address: 0x3059bc, Func Offset: 0x45c
	// Line 413, Address: 0x3059cc, Func Offset: 0x46c
	// Line 414, Address: 0x3059dc, Func Offset: 0x47c
	// Line 418, Address: 0x3059e4, Func Offset: 0x484
	// Line 419, Address: 0x3059f8, Func Offset: 0x498
	// Line 420, Address: 0x305a08, Func Offset: 0x4a8
	// Line 421, Address: 0x305a18, Func Offset: 0x4b8
	// Line 422, Address: 0x305a28, Func Offset: 0x4c8
	// Line 426, Address: 0x305a30, Func Offset: 0x4d0
	// Line 427, Address: 0x305a44, Func Offset: 0x4e4
	// Line 428, Address: 0x305a54, Func Offset: 0x4f4
	// Line 432, Address: 0x305a5c, Func Offset: 0x4fc
	// Line 433, Address: 0x305a68, Func Offset: 0x508
	// Line 434, Address: 0x305a78, Func Offset: 0x518
	// Line 435, Address: 0x305a88, Func Offset: 0x528
	// Line 436, Address: 0x305a98, Func Offset: 0x538
	// Line 437, Address: 0x305aa8, Func Offset: 0x548
	// Line 438, Address: 0x305ab8, Func Offset: 0x558
	// Line 442, Address: 0x305ac0, Func Offset: 0x560
	// Line 443, Address: 0x305acc, Func Offset: 0x56c
	// Line 444, Address: 0x305adc, Func Offset: 0x57c
	// Line 445, Address: 0x305aec, Func Offset: 0x58c
	// Line 446, Address: 0x305afc, Func Offset: 0x59c
	// Line 447, Address: 0x305b0c, Func Offset: 0x5ac
	// Line 451, Address: 0x305b14, Func Offset: 0x5b4
	// Line 452, Address: 0x305b20, Func Offset: 0x5c0
	// Line 453, Address: 0x305b30, Func Offset: 0x5d0
	// Line 454, Address: 0x305b40, Func Offset: 0x5e0
	// Line 458, Address: 0x305b48, Func Offset: 0x5e8
	// Line 459, Address: 0x305b54, Func Offset: 0x5f4
	// Line 460, Address: 0x305b64, Func Offset: 0x604
	// Line 461, Address: 0x305b74, Func Offset: 0x614
	// Line 465, Address: 0x305b7c, Func Offset: 0x61c
	// Line 466, Address: 0x305b88, Func Offset: 0x628
	// Line 467, Address: 0x305b98, Func Offset: 0x638
	// Line 468, Address: 0x305ba8, Func Offset: 0x648
	// Line 469, Address: 0x305bb8, Func Offset: 0x658
	// Line 473, Address: 0x305bc0, Func Offset: 0x660
	// Line 474, Address: 0x305bcc, Func Offset: 0x66c
	// Line 475, Address: 0x305bdc, Func Offset: 0x67c
	// Line 476, Address: 0x305bec, Func Offset: 0x68c
	// Line 477, Address: 0x305bfc, Func Offset: 0x69c
	// Line 481, Address: 0x305c04, Func Offset: 0x6a4
	// Line 482, Address: 0x305c10, Func Offset: 0x6b0
	// Line 483, Address: 0x305c20, Func Offset: 0x6c0
	// Line 487, Address: 0x305c28, Func Offset: 0x6c8
	// Line 488, Address: 0x305c3c, Func Offset: 0x6dc
	// Line 489, Address: 0x305c44, Func Offset: 0x6e4
	// Line 497, Address: 0x305c4c, Func Offset: 0x6ec
	// Line 498, Address: 0x305c60, Func Offset: 0x700
	// Line 499, Address: 0x305c70, Func Offset: 0x710
	// Line 500, Address: 0x305c80, Func Offset: 0x720
	// Line 501, Address: 0x305c90, Func Offset: 0x730
	// Line 504, Address: 0x305ca0, Func Offset: 0x740
	// Line 506, Address: 0x305ca8, Func Offset: 0x748
	// Line 510, Address: 0x305cb0, Func Offset: 0x750
	// Line 511, Address: 0x305cc4, Func Offset: 0x764
	// Line 512, Address: 0x305cd4, Func Offset: 0x774
	// Line 520, Address: 0x305ce4, Func Offset: 0x784
	// Line 521, Address: 0x305cec, Func Offset: 0x78c
	// Line 524, Address: 0x305cf4, Func Offset: 0x794
	// Line 525, Address: 0x305d08, Func Offset: 0x7a8
	// Line 526, Address: 0x305d18, Func Offset: 0x7b8
	// Line 527, Address: 0x305d28, Func Offset: 0x7c8
	// Line 528, Address: 0x305d38, Func Offset: 0x7d8
	// Line 529, Address: 0x305d40, Func Offset: 0x7e0
	// Line 532, Address: 0x305d48, Func Offset: 0x7e8
	// Line 533, Address: 0x305d5c, Func Offset: 0x7fc
	// Line 534, Address: 0x305d6c, Func Offset: 0x80c
	// Line 535, Address: 0x305d7c, Func Offset: 0x81c
	// Line 536, Address: 0x305d84, Func Offset: 0x824
	// Line 539, Address: 0x305d8c, Func Offset: 0x82c
	// Line 540, Address: 0x305da0, Func Offset: 0x840
	// Line 541, Address: 0x305da8, Func Offset: 0x848
	// Line 544, Address: 0x305db0, Func Offset: 0x850
	// Line 545, Address: 0x305dc4, Func Offset: 0x864
	// Line 546, Address: 0x305dd4, Func Offset: 0x874
	// Line 547, Address: 0x305de4, Func Offset: 0x884
	// Line 548, Address: 0x305df4, Func Offset: 0x894
	// Line 549, Address: 0x305dfc, Func Offset: 0x89c
	// Line 552, Address: 0x305e04, Func Offset: 0x8a4
	// Line 553, Address: 0x305e18, Func Offset: 0x8b8
	// Line 554, Address: 0x305e20, Func Offset: 0x8c0
	// Line 559, Address: 0x305e28, Func Offset: 0x8c8
	// Line 560, Address: 0x305e3c, Func Offset: 0x8dc
	// Line 561, Address: 0x305e4c, Func Offset: 0x8ec
	// Line 562, Address: 0x305e54, Func Offset: 0x8f4
	// Line 565, Address: 0x305e5c, Func Offset: 0x8fc
	// Line 566, Address: 0x305e70, Func Offset: 0x910
	// Line 567, Address: 0x305e80, Func Offset: 0x920
	// Line 570, Address: 0x305e88, Func Offset: 0x928
	// Line 571, Address: 0x305e9c, Func Offset: 0x93c
	// Line 572, Address: 0x305eac, Func Offset: 0x94c
	// Line 575, Address: 0x305eb4, Func Offset: 0x954
	// Line 576, Address: 0x305ec8, Func Offset: 0x968
	// Line 577, Address: 0x305ed8, Func Offset: 0x978
	// Line 580, Address: 0x305ee0, Func Offset: 0x980
	// Line 582, Address: 0x305ef4, Func Offset: 0x994
	// Line 585, Address: 0x305efc, Func Offset: 0x99c
	// Line 586, Address: 0x305f10, Func Offset: 0x9b0
	// Line 587, Address: 0x305f20, Func Offset: 0x9c0
	// Line 590, Address: 0x305f28, Func Offset: 0x9c8
	// Line 591, Address: 0x305f3c, Func Offset: 0x9dc
	// Line 592, Address: 0x305f44, Func Offset: 0x9e4
	// Line 610, Address: 0x305f4c, Func Offset: 0x9ec
	// Line 611, Address: 0x305f60, Func Offset: 0xa00
	// Line 612, Address: 0x305f70, Func Offset: 0xa10
	// Line 613, Address: 0x305f80, Func Offset: 0xa20
	// Line 614, Address: 0x305f90, Func Offset: 0xa30
	// Line 615, Address: 0x305fa0, Func Offset: 0xa40
	// Line 616, Address: 0x305fb0, Func Offset: 0xa50
	// Line 635, Address: 0x305fb8, Func Offset: 0xa58
	// Line 636, Address: 0x305fcc, Func Offset: 0xa6c
	// Line 637, Address: 0x305fdc, Func Offset: 0xa7c
	// Line 638, Address: 0x305fec, Func Offset: 0xa8c
	// Line 639, Address: 0x305ffc, Func Offset: 0xa9c
	// Line 655, Address: 0x30600c, Func Offset: 0xaac
	// Line 656, Address: 0x30601c, Func Offset: 0xabc
	// Line 668, Address: 0x30602c, Func Offset: 0xacc
	// Line 669, Address: 0x306038, Func Offset: 0xad8
	// Line 670, Address: 0x306040, Func Offset: 0xae0
	// Line 673, Address: 0x306048, Func Offset: 0xae8
	// Line 676, Address: 0x306054, Func Offset: 0xaf4
	// Line 679, Address: 0x306060, Func Offset: 0xb00
	// Line 682, Address: 0x30606c, Func Offset: 0xb0c
	// Line 685, Address: 0x306078, Func Offset: 0xb18
	// Line 688, Address: 0x306084, Func Offset: 0xb24
	// Line 691, Address: 0x306090, Func Offset: 0xb30
	// Line 694, Address: 0x30609c, Func Offset: 0xb3c
	// Line 697, Address: 0x3060a8, Func Offset: 0xb48
	// Line 698, Address: 0x3060b4, Func Offset: 0xb54
	// Line 703, Address: 0x3060c4, Func Offset: 0xb64
	// Line 671, Address: 0x3060d0, Func Offset: 0xb70
	// Line 703, Address: 0x3060d4, Func Offset: 0xb74
	// Line 674, Address: 0x3060e8, Func Offset: 0xb88
	// Line 703, Address: 0x3060ec, Func Offset: 0xb8c
	// Line 680, Address: 0x306110, Func Offset: 0xbb0
	// Line 703, Address: 0x306114, Func Offset: 0xbb4
	// Line 683, Address: 0x306128, Func Offset: 0xbc8
	// Line 703, Address: 0x30612c, Func Offset: 0xbcc
	// Line 686, Address: 0x306140, Func Offset: 0xbe0
	// Line 703, Address: 0x306144, Func Offset: 0xbe4
	// Line 689, Address: 0x306158, Func Offset: 0xbf8
	// Line 703, Address: 0x30615c, Func Offset: 0xbfc
	// Line 692, Address: 0x306170, Func Offset: 0xc10
	// Line 703, Address: 0x306174, Func Offset: 0xc14
	// Line 695, Address: 0x306188, Func Offset: 0xc28
	// Line 703, Address: 0x30618c, Func Offset: 0xc2c
	// Func End, Address: 0x3061b4, Func Offset: 0xc54
}

// zRenderStateBegin__Fv
// Start address: 0x3061c0
void zRenderStateBegin()
{
	// Line 124, Address: 0x3061c0, Func Offset: 0
	// Line 126, Address: 0x3061c4, Func Offset: 0x4
	// Line 124, Address: 0x3061c8, Func Offset: 0x8
	// Line 126, Address: 0x3061d8, Func Offset: 0x18
	// Line 129, Address: 0x3061e4, Func Offset: 0x24
	// Line 132, Address: 0x3061f4, Func Offset: 0x34
	// Line 135, Address: 0x3061fc, Func Offset: 0x3c
	// Line 138, Address: 0x30620c, Func Offset: 0x4c
	// Line 141, Address: 0x30621c, Func Offset: 0x5c
	// Line 142, Address: 0x30622c, Func Offset: 0x6c
	// Line 145, Address: 0x30623c, Func Offset: 0x7c
	// Line 148, Address: 0x30624c, Func Offset: 0x8c
	// Line 149, Address: 0x30625c, Func Offset: 0x9c
	// Line 154, Address: 0x30626c, Func Offset: 0xac
	// Line 152, Address: 0x306270, Func Offset: 0xb0
	// Line 154, Address: 0x306278, Func Offset: 0xb8
	// Line 162, Address: 0x306288, Func Offset: 0xc8
	// Func End, Address: 0x306298, Func Offset: 0xd8
}

// zRenderStateCurrent__Fv
// Start address: 0x3062a0
_SDRenderState zRenderStateCurrent()
{
	// Line 101, Address: 0x3062a0, Func Offset: 0
	// Func End, Address: 0x3062a8, Func Offset: 0x8
}

