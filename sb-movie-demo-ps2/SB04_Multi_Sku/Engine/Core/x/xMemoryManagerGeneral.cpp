



AllocatedNode* ShortenNode(AllocatedNode* allocatedNode, uint32 size);
void MergeNodes(FreeNode* node);
uint32 DoGetBlockSize(void* pointer);
void* DoReallocate(void* pointer, uint32 size, uint32 options);
void DoFree(void* pointer);
void* DoAllocate(uint32 size, uint32 options);
void* GetCurrentEnd();
void Init(void* start, uint32 size, Dir_0 dir, Strategy strategy, uint8 debugging);

// ShortenNode__21xMemoryManagerGeneralFPQ221xMemoryManagerGeneral13AllocatedNodeUi
// Start address: 0x40a880
AllocatedNode* xMemoryManagerGeneral::ShortenNode(AllocatedNode* allocatedNode, uint32 size)
{
	uint32 nodeSize;
	FreeNode* newNode;
	AllocatedNode* oldAllocatedNode;
	FreeNode* insertBefore;
	// Line 818, Address: 0x40a880, Func Offset: 0
	// Line 822, Address: 0x40a88c, Func Offset: 0xc
	// Line 820, Address: 0x40a890, Func Offset: 0x10
	// Line 822, Address: 0x40a894, Func Offset: 0x14
	// Line 823, Address: 0x40a89c, Func Offset: 0x1c
	// Line 826, Address: 0x40a8a8, Func Offset: 0x28
	// Line 831, Address: 0x40a8b4, Func Offset: 0x34
	// Line 828, Address: 0x40a8b8, Func Offset: 0x38
	// Line 831, Address: 0x40a8bc, Func Offset: 0x3c
	// Line 844, Address: 0x40a8f4, Func Offset: 0x74
	// Line 847, Address: 0x40a8f8, Func Offset: 0x78
	// Line 845, Address: 0x40a8fc, Func Offset: 0x7c
	// Line 847, Address: 0x40a900, Func Offset: 0x80
	// Line 846, Address: 0x40a904, Func Offset: 0x84
	// Line 847, Address: 0x40a908, Func Offset: 0x88
	// Line 855, Address: 0x40a910, Func Offset: 0x90
	// Line 856, Address: 0x40a918, Func Offset: 0x98
	// Line 861, Address: 0x40a924, Func Offset: 0xa4
	// Line 863, Address: 0x40a930, Func Offset: 0xb0
	// Line 864, Address: 0x40a938, Func Offset: 0xb8
	// Line 865, Address: 0x40a950, Func Offset: 0xd0
	// Line 867, Address: 0x40a958, Func Offset: 0xd8
	// Line 870, Address: 0x40a970, Func Offset: 0xf0
	// Line 872, Address: 0x40a978, Func Offset: 0xf8
	// Line 873, Address: 0x40a980, Func Offset: 0x100
	// Line 875, Address: 0x40a988, Func Offset: 0x108
	// Line 876, Address: 0x40a994, Func Offset: 0x114
	// Line 877, Address: 0x40a99c, Func Offset: 0x11c
	// Line 879, Address: 0x40a9a4, Func Offset: 0x124
	// Line 880, Address: 0x40a9a8, Func Offset: 0x128
	// Line 881, Address: 0x40a9b0, Func Offset: 0x130
	// Line 882, Address: 0x40a9b4, Func Offset: 0x134
	// Line 887, Address: 0x40a9b8, Func Offset: 0x138
	// Line 897, Address: 0x40a9c0, Func Offset: 0x140
	// Line 898, Address: 0x40a9c4, Func Offset: 0x144
	// Func End, Address: 0x40a9d4, Func Offset: 0x154
}

// MergeNodes__21xMemoryManagerGeneralFPQ221xMemoryManagerGeneral8FreeNode
// Start address: 0x40a9e0
void xMemoryManagerGeneral::MergeNodes(FreeNode* node)
{
	// Line 777, Address: 0x40a9e0, Func Offset: 0
	// Line 779, Address: 0x40a9e4, Func Offset: 0x4
	// Line 781, Address: 0x40aa1c, Func Offset: 0x3c
	// Line 782, Address: 0x40aa30, Func Offset: 0x50
	// Line 783, Address: 0x40aa40, Func Offset: 0x60
	// Line 784, Address: 0x40aa48, Func Offset: 0x68
	// Line 787, Address: 0x40aa50, Func Offset: 0x70
	// Line 795, Address: 0x40aa58, Func Offset: 0x78
	// Line 797, Address: 0x40aa90, Func Offset: 0xb0
	// Line 798, Address: 0x40aaa4, Func Offset: 0xc4
	// Line 799, Address: 0x40aab4, Func Offset: 0xd4
	// Line 800, Address: 0x40aabc, Func Offset: 0xdc
	// Line 815, Address: 0x40aac0, Func Offset: 0xe0
	// Func End, Address: 0x40aae4, Func Offset: 0x104
}

// DoGetBlockSize__21xMemoryManagerGeneralCFPv
// Start address: 0x40aaf0
uint32 DoGetBlockSize(void* pointer)
{
	// Line 715, Address: 0x40aaf0, Func Offset: 0
	// Func End, Address: 0x40aaf8, Func Offset: 0x8
}

// DoReallocate__21xMemoryManagerGeneralFPvUiUi
// Start address: 0x40ab00
void* xMemoryManagerGeneral::DoReallocate(void* pointer, uint32 size, uint32 options)
{
	AllocatedNode* allocatedNode;
	uint32 nodeSize;
	FreeNode* afterNode;
	FreeNode* beforeNode;
	uint32 sizeBeforeNode;
	uint32 sizeAfterNode;
	void* newPointer;
	void* dataStart;
	uint32 neededSize;
	FreeNode* working;
	FreeNode* newNode;
	FreeNode* working;
	AllocatedNode* newAllocatedNode;
	uint32 newSpace;
	FreeNode* newNode;
	void* dataDest;
	// Line 403, Address: 0x40ab00, Func Offset: 0
	// Line 409, Address: 0x40ab04, Func Offset: 0x4
	// Line 403, Address: 0x40ab08, Func Offset: 0x8
	// Line 409, Address: 0x40ab0c, Func Offset: 0xc
	// Line 403, Address: 0x40ab10, Func Offset: 0x10
	// Line 409, Address: 0x40ab14, Func Offset: 0x14
	// Line 403, Address: 0x40ab18, Func Offset: 0x18
	// Line 413, Address: 0x40ab2c, Func Offset: 0x2c
	// Line 424, Address: 0x40ab30, Func Offset: 0x30
	// Line 429, Address: 0x40ab4c, Func Offset: 0x4c
	// Line 448, Address: 0x40ab54, Func Offset: 0x54
	// Line 451, Address: 0x40ab5c, Func Offset: 0x5c
	// Line 473, Address: 0x40ab68, Func Offset: 0x68
	// Line 477, Address: 0x40ab70, Func Offset: 0x70
	// Line 478, Address: 0x40ab74, Func Offset: 0x74
	// Line 480, Address: 0x40ab7c, Func Offset: 0x7c
	// Line 481, Address: 0x40ab84, Func Offset: 0x84
	// Line 482, Address: 0x40ab9c, Func Offset: 0x9c
	// Line 484, Address: 0x40aba4, Func Offset: 0xa4
	// Line 486, Address: 0x40abbc, Func Offset: 0xbc
	// Line 489, Address: 0x40abd4, Func Offset: 0xd4
	// Line 490, Address: 0x40abd8, Func Offset: 0xd8
	// Line 492, Address: 0x40abe0, Func Offset: 0xe0
	// Line 493, Address: 0x40ac18, Func Offset: 0x118
	// Line 495, Address: 0x40ac1c, Func Offset: 0x11c
	// Line 497, Address: 0x40ac34, Func Offset: 0x134
	// Line 498, Address: 0x40ac3c, Func Offset: 0x13c
	// Line 499, Address: 0x40ac60, Func Offset: 0x160
	// Line 501, Address: 0x40ac64, Func Offset: 0x164
	// Line 502, Address: 0x40ac78, Func Offset: 0x178
	// Line 506, Address: 0x40ac7c, Func Offset: 0x17c
	// Line 507, Address: 0x40ac98, Func Offset: 0x198
	// Line 508, Address: 0x40aca0, Func Offset: 0x1a0
	// Line 509, Address: 0x40acbc, Func Offset: 0x1bc
	// Line 510, Address: 0x40acc4, Func Offset: 0x1c4
	// Line 511, Address: 0x40acdc, Func Offset: 0x1dc
	// Line 513, Address: 0x40ace4, Func Offset: 0x1e4
	// Line 528, Address: 0x40acf4, Func Offset: 0x1f4
	// Line 529, Address: 0x40ad10, Func Offset: 0x210
	// Line 530, Address: 0x40ad18, Func Offset: 0x218
	// Line 531, Address: 0x40ad20, Func Offset: 0x220
	// Line 532, Address: 0x40ad54, Func Offset: 0x254
	// Line 534, Address: 0x40ad68, Func Offset: 0x268
	// Line 541, Address: 0x40ad70, Func Offset: 0x270
	// Line 544, Address: 0x40ad74, Func Offset: 0x274
	// Line 547, Address: 0x40ad98, Func Offset: 0x298
	// Line 550, Address: 0x40adb0, Func Offset: 0x2b0
	// Line 555, Address: 0x40adbc, Func Offset: 0x2bc
	// Line 557, Address: 0x40adc8, Func Offset: 0x2c8
	// Line 561, Address: 0x40add4, Func Offset: 0x2d4
	// Line 560, Address: 0x40add8, Func Offset: 0x2d8
	// Line 561, Address: 0x40addc, Func Offset: 0x2dc
	// Line 564, Address: 0x40adf8, Func Offset: 0x2f8
	// Line 565, Address: 0x40ae08, Func Offset: 0x308
	// Line 566, Address: 0x40ae10, Func Offset: 0x310
	// Line 568, Address: 0x40ae18, Func Offset: 0x318
	// Line 569, Address: 0x40ae20, Func Offset: 0x320
	// Line 570, Address: 0x40ae28, Func Offset: 0x328
	// Line 573, Address: 0x40ae30, Func Offset: 0x330
	// Line 577, Address: 0x40ae38, Func Offset: 0x338
	// Line 582, Address: 0x40ae44, Func Offset: 0x344
	// Line 587, Address: 0x40ae4c, Func Offset: 0x34c
	// Line 590, Address: 0x40ae60, Func Offset: 0x360
	// Line 591, Address: 0x40ae68, Func Offset: 0x368
	// Line 593, Address: 0x40ae74, Func Offset: 0x374
	// Line 594, Address: 0x40ae80, Func Offset: 0x380
	// Line 595, Address: 0x40ae88, Func Offset: 0x388
	// Line 597, Address: 0x40ae94, Func Offset: 0x394
	// Line 606, Address: 0x40ae9c, Func Offset: 0x39c
	// Line 613, Address: 0x40aed4, Func Offset: 0x3d4
	// Line 619, Address: 0x40aee4, Func Offset: 0x3e4
	// Line 623, Address: 0x40aeec, Func Offset: 0x3ec
	// Line 619, Address: 0x40aef0, Func Offset: 0x3f0
	// Line 623, Address: 0x40aef8, Func Offset: 0x3f8
	// Line 628, Address: 0x40af04, Func Offset: 0x404
	// Line 627, Address: 0x40af08, Func Offset: 0x408
	// Line 628, Address: 0x40af0c, Func Offset: 0x40c
	// Line 629, Address: 0x40af2c, Func Offset: 0x42c
	// Line 630, Address: 0x40af34, Func Offset: 0x434
	// Line 632, Address: 0x40af3c, Func Offset: 0x43c
	// Line 633, Address: 0x40af44, Func Offset: 0x444
	// Line 634, Address: 0x40af4c, Func Offset: 0x44c
	// Line 638, Address: 0x40af54, Func Offset: 0x454
	// Line 642, Address: 0x40af60, Func Offset: 0x460
	// Line 643, Address: 0x40af68, Func Offset: 0x468
	// Line 645, Address: 0x40af74, Func Offset: 0x474
	// Line 646, Address: 0x40af80, Func Offset: 0x480
	// Line 647, Address: 0x40af88, Func Offset: 0x488
	// Line 649, Address: 0x40af94, Func Offset: 0x494
	// Line 654, Address: 0x40afa0, Func Offset: 0x4a0
	// Line 655, Address: 0x40afac, Func Offset: 0x4ac
	// Line 657, Address: 0x40afb8, Func Offset: 0x4b8
	// Line 664, Address: 0x40afbc, Func Offset: 0x4bc
	// Line 665, Address: 0x40afd4, Func Offset: 0x4d4
	// Line 664, Address: 0x40afd8, Func Offset: 0x4d8
	// Line 666, Address: 0x40afe0, Func Offset: 0x4e0
	// Line 680, Address: 0x40afec, Func Offset: 0x4ec
	// Line 681, Address: 0x40aff0, Func Offset: 0x4f0
	// Line 682, Address: 0x40affc, Func Offset: 0x4fc
	// Line 683, Address: 0x40b02c, Func Offset: 0x52c
	// Line 684, Address: 0x40b038, Func Offset: 0x538
	// Line 709, Address: 0x40b06c, Func Offset: 0x56c
	// Line 710, Address: 0x40b070, Func Offset: 0x570
	// Func End, Address: 0x40b08c, Func Offset: 0x58c
}

// DoFree__21xMemoryManagerGeneralFPv
// Start address: 0x40b090
void xMemoryManagerGeneral::DoFree(void* pointer)
{
	AllocatedNode* allocatedNode;
	uint32 size;
	FreeNode* node;
	FreeNode* insertBefore;
	// Line 318, Address: 0x40b090, Func Offset: 0
	// Line 320, Address: 0x40b094, Func Offset: 0x4
	// Line 318, Address: 0x40b098, Func Offset: 0x8
	// Line 335, Address: 0x40b09c, Func Offset: 0xc
	// Line 321, Address: 0x40b0a0, Func Offset: 0x10
	// Line 335, Address: 0x40b0a4, Func Offset: 0x14
	// Line 336, Address: 0x40b0b0, Func Offset: 0x20
	// Line 341, Address: 0x40b0b4, Func Offset: 0x24
	// Line 342, Address: 0x40b0b8, Func Offset: 0x28
	// Line 343, Address: 0x40b0bc, Func Offset: 0x2c
	// Line 351, Address: 0x40b0c4, Func Offset: 0x34
	// Line 359, Address: 0x40b0cc, Func Offset: 0x3c
	// Line 362, Address: 0x40b0d8, Func Offset: 0x48
	// Line 365, Address: 0x40b0f0, Func Offset: 0x60
	// Line 369, Address: 0x40b108, Func Offset: 0x78
	// Line 371, Address: 0x40b110, Func Offset: 0x80
	// Line 372, Address: 0x40b118, Func Offset: 0x88
	// Line 373, Address: 0x40b11c, Func Offset: 0x8c
	// Line 375, Address: 0x40b124, Func Offset: 0x94
	// Line 378, Address: 0x40b12c, Func Offset: 0x9c
	// Line 385, Address: 0x40b130, Func Offset: 0xa0
	// Line 400, Address: 0x40b138, Func Offset: 0xa8
	// Line 354, Address: 0x40b144, Func Offset: 0xb4
	// Line 376, Address: 0x40b14c, Func Offset: 0xbc
	// Line 400, Address: 0x40b154, Func Offset: 0xc4
	// Func End, Address: 0x40b178, Func Offset: 0xe8
}

// DoAllocate__21xMemoryManagerGeneralFUiUi
// Start address: 0x40b180
void* xMemoryManagerGeneral::DoAllocate(uint32 size, uint32 options)
{
	FreeNode* node;
	FreeNode* search;
	FreeNode* search;
	uint32 nodeSize;
	// Line 124, Address: 0x40b180, Func Offset: 0
	// Line 136, Address: 0x40b18c, Func Offset: 0xc
	// Line 140, Address: 0x40b1b0, Func Offset: 0x30
	// Line 143, Address: 0x40b1c0, Func Offset: 0x40
	// Line 144, Address: 0x40b1c4, Func Offset: 0x44
	// Line 146, Address: 0x40b1d0, Func Offset: 0x50
	// Line 147, Address: 0x40b1f4, Func Offset: 0x74
	// Line 148, Address: 0x40b1f8, Func Offset: 0x78
	// Line 149, Address: 0x40b1fc, Func Offset: 0x7c
	// Line 150, Address: 0x40b204, Func Offset: 0x84
	// Line 151, Address: 0x40b20c, Func Offset: 0x8c
	// Line 152, Address: 0x40b210, Func Offset: 0x90
	// Line 154, Address: 0x40b218, Func Offset: 0x98
	// Line 156, Address: 0x40b228, Func Offset: 0xa8
	// Line 157, Address: 0x40b22c, Func Offset: 0xac
	// Line 158, Address: 0x40b234, Func Offset: 0xb4
	// Line 161, Address: 0x40b238, Func Offset: 0xb8
	// Line 171, Address: 0x40b240, Func Offset: 0xc0
	// Line 173, Address: 0x40b254, Func Offset: 0xd4
	// Line 176, Address: 0x40b270, Func Offset: 0xf0
	// Line 177, Address: 0x40b27c, Func Offset: 0xfc
	// Line 178, Address: 0x40b284, Func Offset: 0x104
	// Line 179, Address: 0x40b288, Func Offset: 0x108
	// Line 180, Address: 0x40b28c, Func Offset: 0x10c
	// Line 181, Address: 0x40b290, Func Offset: 0x110
	// Line 182, Address: 0x40b2a0, Func Offset: 0x120
	// Line 187, Address: 0x40b2a4, Func Offset: 0x124
	// Line 195, Address: 0x40b2b0, Func Offset: 0x130
	// Line 197, Address: 0x40b2b8, Func Offset: 0x138
	// Line 200, Address: 0x40b2c8, Func Offset: 0x148
	// Line 201, Address: 0x40b2cc, Func Offset: 0x14c
	// Line 203, Address: 0x40b2d8, Func Offset: 0x158
	// Line 204, Address: 0x40b2fc, Func Offset: 0x17c
	// Line 205, Address: 0x40b300, Func Offset: 0x180
	// Line 206, Address: 0x40b304, Func Offset: 0x184
	// Line 207, Address: 0x40b30c, Func Offset: 0x18c
	// Line 208, Address: 0x40b314, Func Offset: 0x194
	// Line 209, Address: 0x40b318, Func Offset: 0x198
	// Line 211, Address: 0x40b320, Func Offset: 0x1a0
	// Line 213, Address: 0x40b330, Func Offset: 0x1b0
	// Line 214, Address: 0x40b334, Func Offset: 0x1b4
	// Line 215, Address: 0x40b33c, Func Offset: 0x1bc
	// Line 218, Address: 0x40b340, Func Offset: 0x1c0
	// Line 228, Address: 0x40b34c, Func Offset: 0x1cc
	// Line 230, Address: 0x40b35c, Func Offset: 0x1dc
	// Line 233, Address: 0x40b378, Func Offset: 0x1f8
	// Line 234, Address: 0x40b384, Func Offset: 0x204
	// Line 235, Address: 0x40b38c, Func Offset: 0x20c
	// Line 236, Address: 0x40b390, Func Offset: 0x210
	// Line 239, Address: 0x40b394, Func Offset: 0x214
	// Line 237, Address: 0x40b398, Func Offset: 0x218
	// Line 238, Address: 0x40b39c, Func Offset: 0x21c
	// Line 239, Address: 0x40b3a0, Func Offset: 0x220
	// Line 245, Address: 0x40b3ac, Func Offset: 0x22c
	// Line 250, Address: 0x40b3b8, Func Offset: 0x238
	// Line 263, Address: 0x40b3c0, Func Offset: 0x240
	// Line 264, Address: 0x40b3c8, Func Offset: 0x248
	// Line 267, Address: 0x40b3d4, Func Offset: 0x254
	// Line 268, Address: 0x40b3dc, Func Offset: 0x25c
	// Line 290, Address: 0x40b3e4, Func Offset: 0x264
	// Line 293, Address: 0x40b400, Func Offset: 0x280
	// Line 314, Address: 0x40b404, Func Offset: 0x284
	// Line 136, Address: 0x40b40c, Func Offset: 0x28c
	// Line 314, Address: 0x40b414, Func Offset: 0x294
	// Line 162, Address: 0x40b430, Func Offset: 0x2b0
	// Line 219, Address: 0x40b440, Func Offset: 0x2c0
	// Line 314, Address: 0x40b450, Func Offset: 0x2d0
	// Line 315, Address: 0x40b468, Func Offset: 0x2e8
	// Func End, Address: 0x40b470, Func Offset: 0x2f0
}

// GetCurrentEnd__21xMemoryManagerGeneralCFv
// Start address: 0x40b470
void* xMemoryManagerGeneral::GetCurrentEnd()
{
	// Line 56, Address: 0x40b470, Func Offset: 0
	// Line 57, Address: 0x40b474, Func Offset: 0x4
	// Line 59, Address: 0x40b480, Func Offset: 0x10
	// Line 61, Address: 0x40b4c0, Func Offset: 0x50
	// Line 63, Address: 0x40b4d4, Func Offset: 0x64
	// Func End, Address: 0x40b4dc, Func Offset: 0x6c
}

// Init__21xMemoryManagerGeneralFPvUiQ221xMemoryManagerGeneral3DirQ221xMemoryManagerGeneral8Strategyb
// Start address: 0x40b4e0
void xMemoryManagerGeneral::Init(void* start, uint32 size, Dir_0 dir, Strategy strategy, uint8 debugging)
{
	// Line 26, Address: 0x40b4e0, Func Offset: 0
	// Line 29, Address: 0x40b4fc, Func Offset: 0x1c
	// Line 35, Address: 0x40b518, Func Offset: 0x38
	// Line 29, Address: 0x40b51c, Func Offset: 0x3c
	// Line 33, Address: 0x40b520, Func Offset: 0x40
	// Line 34, Address: 0x40b528, Func Offset: 0x48
	// Line 35, Address: 0x40b530, Func Offset: 0x50
	// Line 37, Address: 0x40b538, Func Offset: 0x58
	// Line 53, Address: 0x40b53c, Func Offset: 0x5c
	// Func End, Address: 0x40b544, Func Offset: 0x64
}

