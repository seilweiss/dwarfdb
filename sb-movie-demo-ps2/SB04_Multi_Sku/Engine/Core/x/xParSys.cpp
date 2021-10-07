



void xParSysRender(xBase* b);
void xParGroupUpdateR(xParSys* s, xParGroup* g, float32 dt);
void xParSysUpdate(xBase* to, float32 dt);
void xParSysEventCB(xBase* to, uint32 toEvent);
void xParSysExit(xParSys* t);
void xParSysSetup(xParSys* t);
void xParSysInit(xBase* b, xParSysAsset* tasset);
void xParSysInit(void* b, void* tasset);
void render_par_sprite(void* data, xParGroup* ps);
void par_sprite_update(xParSys& sys, xParGroup& group);

// xParSysRender__FP5xBase
// Start address: 0x3aa350
void xParSysRender(xBase* b)
{
	xParGroup* g;
	xParSys* s;
	// Line 661, Address: 0x3aa350, Func Offset: 0
	// Line 664, Address: 0x3aa360, Func Offset: 0x10
	// Line 661, Address: 0x3aa364, Func Offset: 0x14
	// Line 669, Address: 0x3aa368, Func Offset: 0x18
	// Line 672, Address: 0x3aa370, Func Offset: 0x20
	// Line 673, Address: 0x3aa374, Func Offset: 0x24
	// Line 675, Address: 0x3aa380, Func Offset: 0x30
	// Line 693, Address: 0x3aa3bc, Func Offset: 0x6c
	// Line 697, Address: 0x3aa3e0, Func Offset: 0x90
	// Line 698, Address: 0x3aa408, Func Offset: 0xb8
	// Line 701, Address: 0x3aa430, Func Offset: 0xe0
	// Line 704, Address: 0x3aa440, Func Offset: 0xf0
	// Line 705, Address: 0x3aa444, Func Offset: 0xf4
	// Line 706, Address: 0x3aa450, Func Offset: 0x100
	// Line 693, Address: 0x3aa45c, Func Offset: 0x10c
	// Line 706, Address: 0x3aa460, Func Offset: 0x110
	// Func End, Address: 0x3aa488, Func Offset: 0x138
}

// xParGroupUpdateR__FP7xParSysP9xParGroupf
// Start address: 0x3aa490
void xParGroupUpdateR(xParSys* s, xParGroup* g, float32 dt)
{
	uint32 i;
	xParCmd* cmd;
	// Line 611, Address: 0x3aa490, Func Offset: 0
	// Line 617, Address: 0x3aa4b8, Func Offset: 0x28
	// Line 618, Address: 0x3aa4c0, Func Offset: 0x30
	// Line 621, Address: 0x3aa4c8, Func Offset: 0x38
	// Line 624, Address: 0x3aa4d8, Func Offset: 0x48
	// Line 626, Address: 0x3aa4ec, Func Offset: 0x5c
	// Line 629, Address: 0x3aa4f4, Func Offset: 0x64
	// Line 631, Address: 0x3aa508, Func Offset: 0x78
	// Line 632, Address: 0x3aa560, Func Offset: 0xd0
	// Line 634, Address: 0x3aa568, Func Offset: 0xd8
	// Line 637, Address: 0x3aa574, Func Offset: 0xe4
	// Line 639, Address: 0x3aa590, Func Offset: 0x100
	// Func End, Address: 0x3aa5b0, Func Offset: 0x120
}

// xParSysUpdate__FP5xBaseP6xScenef
// Start address: 0x3aa5b0
void xParSysUpdate(xBase* to, float32 dt)
{
	xParSys* s;
	xParSys* parent;
	xParGroup* g;
	// Line 567, Address: 0x3aa5b0, Func Offset: 0
	// Line 570, Address: 0x3aa5c0, Func Offset: 0x10
	// Line 567, Address: 0x3aa5c4, Func Offset: 0x14
	// Line 573, Address: 0x3aa5d4, Func Offset: 0x24
	// Line 571, Address: 0x3aa5d8, Func Offset: 0x28
	// Line 573, Address: 0x3aa5dc, Func Offset: 0x2c
	// Line 578, Address: 0x3aa5e8, Func Offset: 0x38
	// Line 579, Address: 0x3aa5ec, Func Offset: 0x3c
	// Line 582, Address: 0x3aa5f4, Func Offset: 0x44
	// Line 585, Address: 0x3aa600, Func Offset: 0x50
	// Line 586, Address: 0x3aa608, Func Offset: 0x58
	// Line 596, Address: 0x3aa618, Func Offset: 0x68
	// Line 597, Address: 0x3aa624, Func Offset: 0x74
	// Line 598, Address: 0x3aa6d4, Func Offset: 0x124
	// Line 601, Address: 0x3aa6d8, Func Offset: 0x128
	// Line 602, Address: 0x3aa6e4, Func Offset: 0x134
	// Line 604, Address: 0x3aa700, Func Offset: 0x150
	// Line 606, Address: 0x3aa708, Func Offset: 0x158
	// Line 607, Address: 0x3aa70c, Func Offset: 0x15c
	// Line 608, Address: 0x3aa718, Func Offset: 0x168
	// Line 574, Address: 0x3aa724, Func Offset: 0x174
	// Line 608, Address: 0x3aa72c, Func Offset: 0x17c
	// Line 574, Address: 0x3aa750, Func Offset: 0x1a0
	// Line 608, Address: 0x3aa754, Func Offset: 0x1a4
	// Line 574, Address: 0x3aa758, Func Offset: 0x1a8
	// Line 608, Address: 0x3aa75c, Func Offset: 0x1ac
	// Line 574, Address: 0x3aa764, Func Offset: 0x1b4
	// Line 608, Address: 0x3aa768, Func Offset: 0x1b8
	// Line 574, Address: 0x3aa784, Func Offset: 0x1d4
	// Line 608, Address: 0x3aa78c, Func Offset: 0x1dc
	// Line 574, Address: 0x3aa790, Func Offset: 0x1e0
	// Line 608, Address: 0x3aa794, Func Offset: 0x1e4
	// Func End, Address: 0x3aa7e0, Func Offset: 0x230
}

// xParSysEventCB__FP5xBaseP5xBaseUiPCfP5xBaseUi
// Start address: 0x3aa7e0
void xParSysEventCB(xBase* to, uint32 toEvent)
{
	xParSys* t;
	// Line 520, Address: 0x3aa7e0, Func Offset: 0
	// Line 526, Address: 0x3aa7e4, Func Offset: 0x4
	// Line 520, Address: 0x3aa7e8, Func Offset: 0x8
	// Line 526, Address: 0x3aa7f8, Func Offset: 0x18
	// Line 530, Address: 0x3aa838, Func Offset: 0x58
	// Line 534, Address: 0x3aa880, Func Offset: 0xa0
	// Line 535, Address: 0x3aa88c, Func Offset: 0xac
	// Line 536, Address: 0x3aa894, Func Offset: 0xb4
	// Line 537, Address: 0x3aa898, Func Offset: 0xb8
	// Line 540, Address: 0x3aa8a0, Func Offset: 0xc0
	// Line 541, Address: 0x3aa8a8, Func Offset: 0xc8
	// Line 542, Address: 0x3aa8b0, Func Offset: 0xd0
	// Line 543, Address: 0x3aa8b4, Func Offset: 0xd4
	// Line 546, Address: 0x3aa8c0, Func Offset: 0xe0
	// Line 547, Address: 0x3aa8c8, Func Offset: 0xe8
	// Line 548, Address: 0x3aa8cc, Func Offset: 0xec
	// Line 551, Address: 0x3aa8d8, Func Offset: 0xf8
	// Line 552, Address: 0x3aa8e0, Func Offset: 0x100
	// Line 556, Address: 0x3aa8e4, Func Offset: 0x104
	// Line 530, Address: 0x3aa8f4, Func Offset: 0x114
	// Line 556, Address: 0x3aa8f8, Func Offset: 0x118
	// Line 530, Address: 0x3aa908, Func Offset: 0x128
	// Line 556, Address: 0x3aa90c, Func Offset: 0x12c
	// Line 530, Address: 0x3aa920, Func Offset: 0x140
	// Line 556, Address: 0x3aa92c, Func Offset: 0x14c
	// Line 530, Address: 0x3aa930, Func Offset: 0x150
	// Line 556, Address: 0x3aa934, Func Offset: 0x154
	// Line 530, Address: 0x3aa94c, Func Offset: 0x16c
	// Line 556, Address: 0x3aa950, Func Offset: 0x170
	// Line 530, Address: 0x3aa964, Func Offset: 0x184
	// Line 556, Address: 0x3aa970, Func Offset: 0x190
	// Line 530, Address: 0x3aa974, Func Offset: 0x194
	// Line 531, Address: 0x3aa978, Func Offset: 0x198
	// Line 557, Address: 0x3aa980, Func Offset: 0x1a0
	// Func End, Address: 0x3aa998, Func Offset: 0x1b8
}

// xParSysExit__FP7xParSys
// Start address: 0x3aa9a0
void xParSysExit(xParSys* t)
{
	// Line 461, Address: 0x3aa9a0, Func Offset: 0
	// Line 464, Address: 0x3aa9b8, Func Offset: 0x18
	// Line 466, Address: 0x3aa9c0, Func Offset: 0x20
	// Line 467, Address: 0x3aa9e8, Func Offset: 0x48
	// Line 468, Address: 0x3aaa34, Func Offset: 0x94
	// Line 469, Address: 0x3aaa38, Func Offset: 0x98
	// Func End, Address: 0x3aaa50, Func Offset: 0xb0
}

// xParSysSetup__FP7xParSys
// Start address: 0x3aaa50
void xParSysSetup(xParSys* t)
{
	// Line 423, Address: 0x3aaa50, Func Offset: 0
	// Line 424, Address: 0x3aaa60, Func Offset: 0x10
	// Line 426, Address: 0x3aaa78, Func Offset: 0x28
	// Line 427, Address: 0x3aaa80, Func Offset: 0x30
	// Line 433, Address: 0x3aaa8c, Func Offset: 0x3c
	// Line 437, Address: 0x3aaaa0, Func Offset: 0x50
	// Func End, Address: 0x3aaab0, Func Offset: 0x60
}

// xParSysInit__FP5xBaseP12xParSysAsset
// Start address: 0x3aaab0
void xParSysInit(xBase* b, xParSysAsset* tasset)
{
	xParSys* t;
	uint32 i;
	uint8* cmdPtr;
	// Line 286, Address: 0x3aaab0, Func Offset: 0
	// Line 291, Address: 0x3aaac4, Func Offset: 0x14
	// Line 308, Address: 0x3aaacc, Func Offset: 0x1c
	// Line 309, Address: 0x3aaad8, Func Offset: 0x28
	// Line 311, Address: 0x3aaadc, Func Offset: 0x2c
	// Line 312, Address: 0x3aaae8, Func Offset: 0x38
	// Line 314, Address: 0x3aab00, Func Offset: 0x50
	// Line 317, Address: 0x3aab04, Func Offset: 0x54
	// Line 323, Address: 0x3aab14, Func Offset: 0x64
	// Line 333, Address: 0x3aab20, Func Offset: 0x70
	// Line 344, Address: 0x3aab28, Func Offset: 0x78
	// Line 351, Address: 0x3aab2c, Func Offset: 0x7c
	// Line 350, Address: 0x3aab30, Func Offset: 0x80
	// Line 351, Address: 0x3aab34, Func Offset: 0x84
	// Line 356, Address: 0x3aab40, Func Offset: 0x90
	// Line 354, Address: 0x3aab4c, Func Offset: 0x9c
	// Line 356, Address: 0x3aab54, Func Offset: 0xa4
	// Line 354, Address: 0x3aab5c, Func Offset: 0xac
	// Line 355, Address: 0x3aab64, Func Offset: 0xb4
	// Line 356, Address: 0x3aab70, Func Offset: 0xc0
	// Line 357, Address: 0x3aabb4, Func Offset: 0x104
	// Line 384, Address: 0x3aabc8, Func Offset: 0x118
	// Line 387, Address: 0x3aabdc, Func Offset: 0x12c
	// Line 388, Address: 0x3aabe4, Func Offset: 0x134
	// Line 389, Address: 0x3aabf0, Func Offset: 0x140
	// Line 391, Address: 0x3aacb8, Func Offset: 0x208
	// Line 392, Address: 0x3aacec, Func Offset: 0x23c
	// Line 393, Address: 0x3aacf8, Func Offset: 0x248
	// Line 398, Address: 0x3aad2c, Func Offset: 0x27c
	// Line 403, Address: 0x3aad30, Func Offset: 0x280
	// Line 405, Address: 0x3aad44, Func Offset: 0x294
	// Line 407, Address: 0x3aad5c, Func Offset: 0x2ac
	// Line 410, Address: 0x3aad70, Func Offset: 0x2c0
	// Line 411, Address: 0x3aae24, Func Offset: 0x374
	// Line 413, Address: 0x3aae2c, Func Offset: 0x37c
	// Line 418, Address: 0x3aae40, Func Offset: 0x390
	// Line 420, Address: 0x3aae60, Func Offset: 0x3b0
	// Line 338, Address: 0x3aae6c, Func Offset: 0x3bc
	// Line 420, Address: 0x3aae70, Func Offset: 0x3c0
	// Line 341, Address: 0x3aae78, Func Offset: 0x3c8
	// Line 420, Address: 0x3aae80, Func Offset: 0x3d0
	// Func End, Address: 0x3aae94, Func Offset: 0x3e4
}

// xParSysInit__FPvPv
// Start address: 0x3aaea0
void xParSysInit(void* b, void* tasset)
{
	// Line 282, Address: 0x3aaea0, Func Offset: 0
	// Func End, Address: 0x3aaea8, Func Offset: 0x8
}

// render_par_sprite__FPvP9xParGroup
// Start address: 0x3aaeb0
void render_par_sprite(void* data, xParGroup* ps)
{
	// Line 221, Address: 0x3aaeb0, Func Offset: 0
	// Line 222, Address: 0x3aaeb4, Func Offset: 0x4
	// Line 221, Address: 0x3aaeb8, Func Offset: 0x8
	// Line 222, Address: 0x3aaebc, Func Offset: 0xc
	// Line 224, Address: 0x3aaefc, Func Offset: 0x4c
	// Line 225, Address: 0x3aaf04, Func Offset: 0x54
	// Func End, Address: 0x3aaf10, Func Offset: 0x60
}

// par_sprite_update__FR7xParSysR9xParGroup
// Start address: 0x3aaf10
void par_sprite_update(xParSys& sys, xParGroup& group)
{
	uint32 pivot;
	xVec3 offset_right;
	xVec3 offset_up;
	ptank_pool__pos_color_size_uv2 pool;
	int32 min_alpha;
	xParCmdTex* tex;
	xPar* p;
	xVec3& loc;
	// Line 133, Address: 0x3aaf10, Func Offset: 0
	// Line 134, Address: 0x3aaf14, Func Offset: 0x4
	// Line 133, Address: 0x3aaf18, Func Offset: 0x8
	// Line 134, Address: 0x3aaf54, Func Offset: 0x44
	// Line 133, Address: 0x3aaf58, Func Offset: 0x48
	// Line 134, Address: 0x3aaf5c, Func Offset: 0x4c
	// Line 136, Address: 0x3aaf94, Func Offset: 0x84
	// Line 139, Address: 0x3aaf98, Func Offset: 0x88
	// Line 140, Address: 0x3aafd4, Func Offset: 0xc4
	// Line 141, Address: 0x3ab07c, Func Offset: 0x16c
	// Line 142, Address: 0x3ab088, Func Offset: 0x178
	// Line 143, Address: 0x3ab130, Func Offset: 0x220
	// Line 144, Address: 0x3ab170, Func Offset: 0x260
	// Line 147, Address: 0x3ab17c, Func Offset: 0x26c
	// Line 149, Address: 0x3ab180, Func Offset: 0x270
	// Line 152, Address: 0x3ab188, Func Offset: 0x278
	// Line 150, Address: 0x3ab190, Func Offset: 0x280
	// Line 151, Address: 0x3ab194, Func Offset: 0x284
	// Line 147, Address: 0x3ab198, Func Offset: 0x288
	// Line 149, Address: 0x3ab19c, Func Offset: 0x28c
	// Line 150, Address: 0x3ab1b4, Func Offset: 0x2a4
	// Line 152, Address: 0x3ab1bc, Func Offset: 0x2ac
	// Line 150, Address: 0x3ab1c0, Func Offset: 0x2b0
	// Line 151, Address: 0x3ab1c4, Func Offset: 0x2b4
	// Line 150, Address: 0x3ab1c8, Func Offset: 0x2b8
	// Line 152, Address: 0x3ab1cc, Func Offset: 0x2bc
	// Line 150, Address: 0x3ab1d0, Func Offset: 0x2c0
	// Line 155, Address: 0x3ab1d8, Func Offset: 0x2c8
	// Line 157, Address: 0x3ab1ec, Func Offset: 0x2dc
	// Line 158, Address: 0x3ab1f4, Func Offset: 0x2e4
	// Line 162, Address: 0x3ab200, Func Offset: 0x2f0
	// Line 166, Address: 0x3ab204, Func Offset: 0x2f4
	// Line 167, Address: 0x3ab25c, Func Offset: 0x34c
	// Line 168, Address: 0x3ab260, Func Offset: 0x350
	// Line 170, Address: 0x3ab28c, Func Offset: 0x37c
	// Line 171, Address: 0x3ab2d8, Func Offset: 0x3c8
	// Line 172, Address: 0x3ab40c, Func Offset: 0x4fc
	// Line 174, Address: 0x3ab418, Func Offset: 0x508
	// Line 175, Address: 0x3ab41c, Func Offset: 0x50c
	// Line 177, Address: 0x3ab434, Func Offset: 0x524
	// Line 179, Address: 0x3ab440, Func Offset: 0x530
	// Line 180, Address: 0x3ab4c0, Func Offset: 0x5b0
	// Line 183, Address: 0x3ab4c8, Func Offset: 0x5b8
	// Line 191, Address: 0x3ab508, Func Offset: 0x5f8
	// Line 193, Address: 0x3ab548, Func Offset: 0x638
	// Line 194, Address: 0x3ab554, Func Offset: 0x644
	// Line 195, Address: 0x3ab560, Func Offset: 0x650
	// Line 196, Address: 0x3ab570, Func Offset: 0x660
	// Line 197, Address: 0x3ab594, Func Offset: 0x684
	// Line 200, Address: 0x3ab59c, Func Offset: 0x68c
	// Line 202, Address: 0x3ab5a4, Func Offset: 0x694
	// Line 203, Address: 0x3ab5f4, Func Offset: 0x6e4
	// Line 204, Address: 0x3ab644, Func Offset: 0x734
	// Line 205, Address: 0x3ab670, Func Offset: 0x760
	// Line 206, Address: 0x3ab698, Func Offset: 0x788
	// Line 209, Address: 0x3ab6a0, Func Offset: 0x790
	// Line 210, Address: 0x3ab6a4, Func Offset: 0x794
	// Line 209, Address: 0x3ab6a8, Func Offset: 0x798
	// Line 210, Address: 0x3ab6b0, Func Offset: 0x7a0
	// Line 214, Address: 0x3ab6bc, Func Offset: 0x7ac
	// Line 215, Address: 0x3ab6c0, Func Offset: 0x7b0
	// Line 217, Address: 0x3ab6c8, Func Offset: 0x7b8
	// Line 218, Address: 0x3ab714, Func Offset: 0x804
	// Func End, Address: 0x3ab754, Func Offset: 0x844
}

