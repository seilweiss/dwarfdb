



void FreeMemoryBlockingCall();
void FreeMemory();
uint8 freeElement(xInternalTextureNode* pPrevNode);
void reload(xTextureHandle* pHandle);
void AddMovie(xTextureHandle* handle, PKRAssetTOCInfo* pInfo);
void AddTexture(xTextureHandle* handle, PKRAssetTOCInfo* pInfo);
xTextureManager& Get();
void fileCallback(tag_xFile* file);
xTextureHandle& __as(xTextureHandle& handle);
RwTexture* GetTexture();
void* __dt();
void Reference(RwTexture* pTexture);
void PlayMovie(uint32 assetID, uint32 looping, uint32 freezeframed, uint32 startframe, uint32 endframe);
uint8 IsMoviePlaying();
void Reference(uint32 assetID, uint8 clearPrev);
void* __ct();
void FreeMemory();

// FreeMemoryBlockingCall__15xTextureManagerFv
// Start address: 0x44ab90
void xTextureManager::FreeMemoryBlockingCall()
{
	// Line 561, Address: 0x44ab90, Func Offset: 0
	// Line 575, Address: 0x44abac, Func Offset: 0x1c
	// Line 573, Address: 0x44abb0, Func Offset: 0x20
	// Line 575, Address: 0x44abb8, Func Offset: 0x28
	// Line 577, Address: 0x44ac10, Func Offset: 0x80
	// Line 597, Address: 0x44ac1c, Func Offset: 0x8c
	// Func End, Address: 0x44ac78, Func Offset: 0xe8
}

// FreeMemory__15xTextureManagerFv
// Start address: 0x44ac80
void xTextureManager::FreeMemory()
{
	uint32 i;
	uint32 i;
	xInternalMovieNode* pNode;
	// Line 549, Address: 0x44ac80, Func Offset: 0
	// Line 550, Address: 0x44ac90, Func Offset: 0x10
	// Line 549, Address: 0x44ac94, Func Offset: 0x14
	// Line 551, Address: 0x44aca0, Func Offset: 0x20
	// Line 552, Address: 0x44aca8, Func Offset: 0x28
	// Line 551, Address: 0x44acac, Func Offset: 0x2c
	// Line 552, Address: 0x44acb0, Func Offset: 0x30
	// Line 553, Address: 0x44acbc, Func Offset: 0x3c
	// Line 555, Address: 0x44acc0, Func Offset: 0x40
	// Line 556, Address: 0x44accc, Func Offset: 0x4c
	// Line 557, Address: 0x44ace0, Func Offset: 0x60
	// Line 558, Address: 0x44acf0, Func Offset: 0x70
	// Func End, Address: 0x44ad20, Func Offset: 0xa0
}

// freeElement__15xTextureManagerFP20xInternalTextureNode
// Start address: 0x44ad20
uint8 xTextureManager::freeElement(xInternalTextureNode* pPrevNode)
{
	uint32 i;
	int32 index;
	int32 lru;
	uint32 i;
	// Line 514, Address: 0x44ad20, Func Offset: 0
	// Line 515, Address: 0x44ad40, Func Offset: 0x20
	// Line 519, Address: 0x44ad44, Func Offset: 0x24
	// Line 516, Address: 0x44ad48, Func Offset: 0x28
	// Line 519, Address: 0x44ad54, Func Offset: 0x34
	// Line 520, Address: 0x44ad78, Func Offset: 0x58
	// Line 521, Address: 0x44adc0, Func Offset: 0xa0
	// Line 520, Address: 0x44adc4, Func Offset: 0xa4
	// Line 521, Address: 0x44adc8, Func Offset: 0xa8
	// Line 523, Address: 0x44add0, Func Offset: 0xb0
	// Line 526, Address: 0x44ade0, Func Offset: 0xc0
	// Line 525, Address: 0x44ade4, Func Offset: 0xc4
	// Line 527, Address: 0x44ade8, Func Offset: 0xc8
	// Line 531, Address: 0x44adf0, Func Offset: 0xd0
	// Line 526, Address: 0x44adf4, Func Offset: 0xd4
	// Line 528, Address: 0x44adf8, Func Offset: 0xd8
	// Line 531, Address: 0x44ae08, Func Offset: 0xe8
	// Line 532, Address: 0x44ae20, Func Offset: 0x100
	// Line 533, Address: 0x44ae24, Func Offset: 0x104
	// Line 535, Address: 0x44ae28, Func Offset: 0x108
	// Line 536, Address: 0x44ae38, Func Offset: 0x118
	// Line 537, Address: 0x44ae44, Func Offset: 0x124
	// Line 541, Address: 0x44ae54, Func Offset: 0x134
	// Line 538, Address: 0x44ae80, Func Offset: 0x160
	// Line 541, Address: 0x44ae8c, Func Offset: 0x16c
	// Line 539, Address: 0x44ae94, Func Offset: 0x174
	// Line 541, Address: 0x44ae98, Func Offset: 0x178
	// Line 539, Address: 0x44ae9c, Func Offset: 0x17c
	// Line 541, Address: 0x44aea4, Func Offset: 0x184
	// Line 544, Address: 0x44aeb0, Func Offset: 0x190
	// Line 545, Address: 0x44aef8, Func Offset: 0x1d8
	// Line 544, Address: 0x44aefc, Func Offset: 0x1dc
	// Line 547, Address: 0x44af04, Func Offset: 0x1e4
	// Func End, Address: 0x44af20, Func Offset: 0x200
}

// reload__15xTextureManagerFP14xTextureHandle
// Start address: 0x44af20
void xTextureManager::reload(xTextureHandle* pHandle)
{
	xInternalTextureNode* pNode;
	uint32 doubleSize;
	uint32 i;
	// Line 434, Address: 0x44af20, Func Offset: 0
	// Line 436, Address: 0x44af44, Func Offset: 0x24
	// Line 437, Address: 0x44af48, Func Offset: 0x28
	// Line 442, Address: 0x44af58, Func Offset: 0x38
	// Line 437, Address: 0x44af5c, Func Offset: 0x3c
	// Line 442, Address: 0x44af64, Func Offset: 0x44
	// Line 437, Address: 0x44af6c, Func Offset: 0x4c
	// Line 438, Address: 0x44af74, Func Offset: 0x54
	// Line 442, Address: 0x44af78, Func Offset: 0x58
	// Line 443, Address: 0x44af88, Func Offset: 0x68
	// Line 447, Address: 0x44af9c, Func Offset: 0x7c
	// Line 452, Address: 0x44afb8, Func Offset: 0x98
	// Line 453, Address: 0x44afc0, Func Offset: 0xa0
	// Line 462, Address: 0x44afd8, Func Offset: 0xb8
	// Line 454, Address: 0x44afdc, Func Offset: 0xbc
	// Line 458, Address: 0x44afec, Func Offset: 0xcc
	// Line 463, Address: 0x44affc, Func Offset: 0xdc
	// Line 464, Address: 0x44b01c, Func Offset: 0xfc
	// Line 465, Address: 0x44b020, Func Offset: 0x100
	// Line 467, Address: 0x44b02c, Func Offset: 0x10c
	// Line 469, Address: 0x44b03c, Func Offset: 0x11c
	// Line 471, Address: 0x44b044, Func Offset: 0x124
	// Line 473, Address: 0x44b060, Func Offset: 0x140
	// Line 471, Address: 0x44b068, Func Offset: 0x148
	// Line 473, Address: 0x44b074, Func Offset: 0x154
	// Line 476, Address: 0x44b090, Func Offset: 0x170
	// Line 481, Address: 0x44b0ac, Func Offset: 0x18c
	// Func End, Address: 0x44b0cc, Func Offset: 0x1ac
}

// AddMovie__15xTextureManagerFP14xTextureHandleP15PKRAssetTOCInfo
// Start address: 0x44b0d0
void xTextureManager::AddMovie(xTextureHandle* handle, PKRAssetTOCInfo* pInfo)
{
	xInternalMovieNode* pNode;
	uint32 i;
	uint32 i;
	// Line 368, Address: 0x44b0d0, Func Offset: 0
	// Line 369, Address: 0x44b0e8, Func Offset: 0x18
	// Line 373, Address: 0x44b0fc, Func Offset: 0x2c
	// Line 374, Address: 0x44b104, Func Offset: 0x34
	// Line 377, Address: 0x44b11c, Func Offset: 0x4c
	// Line 378, Address: 0x44b12c, Func Offset: 0x5c
	// Line 380, Address: 0x44b134, Func Offset: 0x64
	// Line 382, Address: 0x44b144, Func Offset: 0x74
	// Line 383, Address: 0x44b14c, Func Offset: 0x7c
	// Line 385, Address: 0x44b158, Func Offset: 0x88
	// Line 384, Address: 0x44b15c, Func Offset: 0x8c
	// Line 385, Address: 0x44b164, Func Offset: 0x94
	// Line 384, Address: 0x44b168, Func Offset: 0x98
	// Line 385, Address: 0x44b170, Func Offset: 0xa0
	// Line 386, Address: 0x44b178, Func Offset: 0xa8
	// Line 387, Address: 0x44b17c, Func Offset: 0xac
	// Line 389, Address: 0x44b184, Func Offset: 0xb4
	// Line 391, Address: 0x44b198, Func Offset: 0xc8
	// Line 392, Address: 0x44b1a8, Func Offset: 0xd8
	// Line 393, Address: 0x44b1ac, Func Offset: 0xdc
	// Func End, Address: 0x44b1c4, Func Offset: 0xf4
}

// AddTexture__15xTextureManagerFP14xTextureHandleP15PKRAssetTOCInfo
// Start address: 0x44b1d0
void xTextureManager::AddTexture(xTextureHandle* handle, PKRAssetTOCInfo* pInfo)
{
	xInternalTextureNode* pNode;
	uint32 i;
	uint32 i;
	// Line 326, Address: 0x44b1d0, Func Offset: 0
	// Line 327, Address: 0x44b1e8, Func Offset: 0x18
	// Line 331, Address: 0x44b1fc, Func Offset: 0x2c
	// Line 332, Address: 0x44b204, Func Offset: 0x34
	// Line 340, Address: 0x44b224, Func Offset: 0x54
	// Line 341, Address: 0x44b230, Func Offset: 0x60
	// Line 342, Address: 0x44b238, Func Offset: 0x68
	// Line 344, Address: 0x44b240, Func Offset: 0x70
	// Line 352, Address: 0x44b250, Func Offset: 0x80
	// Line 353, Address: 0x44b258, Func Offset: 0x88
	// Line 355, Address: 0x44b264, Func Offset: 0x94
	// Line 354, Address: 0x44b268, Func Offset: 0x98
	// Line 355, Address: 0x44b270, Func Offset: 0xa0
	// Line 354, Address: 0x44b274, Func Offset: 0xa4
	// Line 355, Address: 0x44b27c, Func Offset: 0xac
	// Line 356, Address: 0x44b284, Func Offset: 0xb4
	// Line 357, Address: 0x44b288, Func Offset: 0xb8
	// Line 359, Address: 0x44b290, Func Offset: 0xc0
	// Line 361, Address: 0x44b2a0, Func Offset: 0xd0
	// Line 362, Address: 0x44b2a4, Func Offset: 0xd4
	// Line 361, Address: 0x44b2ac, Func Offset: 0xdc
	// Line 362, Address: 0x44b2b0, Func Offset: 0xe0
	// Line 363, Address: 0x44b2b8, Func Offset: 0xe8
	// Line 366, Address: 0x44b2bc, Func Offset: 0xec
	// Func End, Address: 0x44b2d4, Func Offset: 0x104
}

// Get__15xTextureManagerFv
// Start address: 0x44b2e0
xTextureManager& xTextureManager::Get()
{
	int8 @19041;
	xTextureManager mgr;
	// Line 302, Address: 0x44b2e0, Func Offset: 0
	// Line 303, Address: 0x44b2e8, Func Offset: 0x8
	// Line 304, Address: 0x44b2f4, Func Offset: 0x14
	// Line 303, Address: 0x44b310, Func Offset: 0x30
	// Line 304, Address: 0x44b314, Func Offset: 0x34
	// Line 303, Address: 0x44b320, Func Offset: 0x40
	// Line 304, Address: 0x44b324, Func Offset: 0x44
	// Line 303, Address: 0x44b328, Func Offset: 0x48
	// Line 304, Address: 0x44b32c, Func Offset: 0x4c
	// Line 303, Address: 0x44b370, Func Offset: 0x90
	// Line 304, Address: 0x44b374, Func Offset: 0x94
	// Line 303, Address: 0x44b380, Func Offset: 0xa0
	// Line 305, Address: 0x44b38c, Func Offset: 0xac
	// Func End, Address: 0x44b398, Func Offset: 0xb8
}

// fileCallback__FP9tag_xFile
// Start address: 0x44b3a0
void fileCallback(tag_xFile* file)
{
	xInternalTextureNode* pNode;
	uint32 i;
	uint32 size;
	// Line 266, Address: 0x44b3a0, Func Offset: 0
	// Line 267, Address: 0x44b3b4, Func Offset: 0x14
	// Line 269, Address: 0x44b3b8, Func Offset: 0x18
	// Line 271, Address: 0x44b3c0, Func Offset: 0x20
	// Line 272, Address: 0x44b3cc, Func Offset: 0x2c
	// Line 287, Address: 0x44b3e8, Func Offset: 0x48
	// Line 294, Address: 0x44b3fc, Func Offset: 0x5c
	// Line 295, Address: 0x44b414, Func Offset: 0x74
	// Line 296, Address: 0x44b424, Func Offset: 0x84
	// Line 300, Address: 0x44b428, Func Offset: 0x88
	// Line 272, Address: 0x44b440, Func Offset: 0xa0
	// Line 300, Address: 0x44b444, Func Offset: 0xa4
	// Line 272, Address: 0x44b450, Func Offset: 0xb0
	// Line 300, Address: 0x44b454, Func Offset: 0xb4
	// Line 272, Address: 0x44b458, Func Offset: 0xb8
	// Line 300, Address: 0x44b45c, Func Offset: 0xbc
	// Line 272, Address: 0x44b4a0, Func Offset: 0x100
	// Line 300, Address: 0x44b4a4, Func Offset: 0x104
	// Line 272, Address: 0x44b4b0, Func Offset: 0x110
	// Line 300, Address: 0x44b4c0, Func Offset: 0x120
	// Line 273, Address: 0x44b4d0, Func Offset: 0x130
	// Line 300, Address: 0x44b4d4, Func Offset: 0x134
	// Line 275, Address: 0x44b514, Func Offset: 0x174
	// Line 300, Address: 0x44b518, Func Offset: 0x178
	// Line 275, Address: 0x44b520, Func Offset: 0x180
	// Line 300, Address: 0x44b528, Func Offset: 0x188
	// Line 285, Address: 0x44b554, Func Offset: 0x1b4
	// Line 300, Address: 0x44b55c, Func Offset: 0x1bc
	// Line 273, Address: 0x44b56c, Func Offset: 0x1cc
	// Line 300, Address: 0x44b570, Func Offset: 0x1d0
	// Line 273, Address: 0x44b57c, Func Offset: 0x1dc
	// Line 300, Address: 0x44b580, Func Offset: 0x1e0
	// Line 273, Address: 0x44b584, Func Offset: 0x1e4
	// Line 300, Address: 0x44b588, Func Offset: 0x1e8
	// Line 273, Address: 0x44b5cc, Func Offset: 0x22c
	// Line 300, Address: 0x44b5d0, Func Offset: 0x230
	// Line 273, Address: 0x44b5dc, Func Offset: 0x23c
	// Line 300, Address: 0x44b5e8, Func Offset: 0x248
	// Line 275, Address: 0x44b5f8, Func Offset: 0x258
	// Line 300, Address: 0x44b5fc, Func Offset: 0x25c
	// Line 275, Address: 0x44b608, Func Offset: 0x268
	// Line 300, Address: 0x44b60c, Func Offset: 0x26c
	// Line 275, Address: 0x44b610, Func Offset: 0x270
	// Line 300, Address: 0x44b614, Func Offset: 0x274
	// Line 275, Address: 0x44b658, Func Offset: 0x2b8
	// Line 300, Address: 0x44b65c, Func Offset: 0x2bc
	// Line 275, Address: 0x44b668, Func Offset: 0x2c8
	// Line 300, Address: 0x44b674, Func Offset: 0x2d4
	// Line 276, Address: 0x44b684, Func Offset: 0x2e4
	// Line 300, Address: 0x44b688, Func Offset: 0x2e8
	// Line 276, Address: 0x44b694, Func Offset: 0x2f4
	// Line 300, Address: 0x44b698, Func Offset: 0x2f8
	// Line 276, Address: 0x44b69c, Func Offset: 0x2fc
	// Line 300, Address: 0x44b6a0, Func Offset: 0x300
	// Line 276, Address: 0x44b6e4, Func Offset: 0x344
	// Line 300, Address: 0x44b6e8, Func Offset: 0x348
	// Line 276, Address: 0x44b6f4, Func Offset: 0x354
	// Line 300, Address: 0x44b700, Func Offset: 0x360
	// Func End, Address: 0x44b718, Func Offset: 0x378
}

// __as__14xTextureHandleFRC14xTextureHandle
// Start address: 0x44b720
xTextureHandle& xTextureHandle::__as(xTextureHandle& handle)
{
	// Line 256, Address: 0x44b720, Func Offset: 0
	// Line 257, Address: 0x44b724, Func Offset: 0x4
	// Line 256, Address: 0x44b728, Func Offset: 0x8
	// Line 258, Address: 0x44b72c, Func Offset: 0xc
	// Line 259, Address: 0x44b734, Func Offset: 0x14
	// Line 262, Address: 0x44b740, Func Offset: 0x20
	// Func End, Address: 0x44b748, Func Offset: 0x28
}

// GetTexture__14xTextureHandleFv
// Start address: 0x44b750
RwTexture* xTextureHandle::GetTexture()
{
	// Line 219, Address: 0x44b750, Func Offset: 0
	// Line 220, Address: 0x44b760, Func Offset: 0x10
	// Line 221, Address: 0x44b79c, Func Offset: 0x4c
	// Line 222, Address: 0x44b7a4, Func Offset: 0x54
	// Line 226, Address: 0x44b7b0, Func Offset: 0x60
	// Line 227, Address: 0x44b7c8, Func Offset: 0x78
	// Line 220, Address: 0x44b7f8, Func Offset: 0xa8
	// Line 227, Address: 0x44b7fc, Func Offset: 0xac
	// Line 220, Address: 0x44b804, Func Offset: 0xb4
	// Line 227, Address: 0x44b80c, Func Offset: 0xbc
	// Line 220, Address: 0x44b83c, Func Offset: 0xec
	// Line 227, Address: 0x44b850, Func Offset: 0x100
	// Line 220, Address: 0x44b860, Func Offset: 0x110
	// Line 227, Address: 0x44b864, Func Offset: 0x114
	// Line 220, Address: 0x44b870, Func Offset: 0x120
	// Line 227, Address: 0x44b874, Func Offset: 0x124
	// Line 220, Address: 0x44b878, Func Offset: 0x128
	// Line 227, Address: 0x44b87c, Func Offset: 0x12c
	// Line 220, Address: 0x44b8c0, Func Offset: 0x170
	// Line 227, Address: 0x44b8c4, Func Offset: 0x174
	// Line 220, Address: 0x44b8d0, Func Offset: 0x180
	// Line 227, Address: 0x44b8dc, Func Offset: 0x18c
	// Line 220, Address: 0x44b8ec, Func Offset: 0x19c
	// Line 227, Address: 0x44b8f0, Func Offset: 0x1a0
	// Line 220, Address: 0x44b8fc, Func Offset: 0x1ac
	// Line 227, Address: 0x44b900, Func Offset: 0x1b0
	// Line 220, Address: 0x44b904, Func Offset: 0x1b4
	// Line 227, Address: 0x44b908, Func Offset: 0x1b8
	// Line 220, Address: 0x44b94c, Func Offset: 0x1fc
	// Line 227, Address: 0x44b950, Func Offset: 0x200
	// Line 220, Address: 0x44b95c, Func Offset: 0x20c
	// Line 227, Address: 0x44b968, Func Offset: 0x218
	// Line 224, Address: 0x44b974, Func Offset: 0x224
	// Line 230, Address: 0x44b97c, Func Offset: 0x22c
	// Line 232, Address: 0x44b980, Func Offset: 0x230
	// Func End, Address: 0x44b990, Func Offset: 0x240
}

// __dt__14xTextureHandleFv
// Start address: 0x44b990
void* xTextureHandle::__dt()
{
	// Line 214, Address: 0x44b990, Func Offset: 0
	// Line 215, Address: 0x44b9b0, Func Offset: 0x20
	// Line 216, Address: 0x44bac4, Func Offset: 0x134
	// Func End, Address: 0x44bad8, Func Offset: 0x148
}

// Reference__14xTextureHandleFP9RwTexture
// Start address: 0x44bae0
void xTextureHandle::Reference(RwTexture* pTexture)
{
	// Line 199, Address: 0x44bae0, Func Offset: 0
	// Line 200, Address: 0x44baf8, Func Offset: 0x18
	// Line 201, Address: 0x44bb48, Func Offset: 0x68
	// Line 203, Address: 0x44bb4c, Func Offset: 0x6c
	// Line 200, Address: 0x44bb64, Func Offset: 0x84
	// Line 203, Address: 0x44bb68, Func Offset: 0x88
	// Line 200, Address: 0x44bb74, Func Offset: 0x94
	// Line 203, Address: 0x44bb78, Func Offset: 0x98
	// Line 200, Address: 0x44bb7c, Func Offset: 0x9c
	// Line 203, Address: 0x44bb80, Func Offset: 0xa0
	// Line 200, Address: 0x44bbc4, Func Offset: 0xe4
	// Line 203, Address: 0x44bbc8, Func Offset: 0xe8
	// Line 200, Address: 0x44bbd4, Func Offset: 0xf4
	// Line 203, Address: 0x44bbe0, Func Offset: 0x100
	// Func End, Address: 0x44bc04, Func Offset: 0x124
}

// PlayMovie__14xTextureHandleFUiUiUiUiUi
// Start address: 0x44bc10
void xTextureHandle::PlayMovie(uint32 assetID, uint32 looping, uint32 freezeframed, uint32 startframe, uint32 endframe)
{
	PKRAssetTOCInfo info;
	// Line 146, Address: 0x44bc10, Func Offset: 0
	// Line 147, Address: 0x44bc50, Func Offset: 0x40
	// Line 153, Address: 0x44bc5c, Func Offset: 0x4c
	// Line 157, Address: 0x44bce0, Func Offset: 0xd0
	// Line 153, Address: 0x44bdb4, Func Offset: 0x1a4
	// Line 157, Address: 0x44bdb8, Func Offset: 0x1a8
	// Line 153, Address: 0x44bdc4, Func Offset: 0x1b4
	// Line 157, Address: 0x44bdc8, Func Offset: 0x1b8
	// Line 153, Address: 0x44bdcc, Func Offset: 0x1bc
	// Line 157, Address: 0x44bdd0, Func Offset: 0x1c0
	// Line 153, Address: 0x44be14, Func Offset: 0x204
	// Line 157, Address: 0x44be18, Func Offset: 0x208
	// Line 153, Address: 0x44be24, Func Offset: 0x214
	// Line 157, Address: 0x44be30, Func Offset: 0x220
	// Line 153, Address: 0x44be58, Func Offset: 0x248
	// Line 157, Address: 0x44be5c, Func Offset: 0x24c
	// Line 153, Address: 0x44be68, Func Offset: 0x258
	// Line 157, Address: 0x44be6c, Func Offset: 0x25c
	// Line 153, Address: 0x44be70, Func Offset: 0x260
	// Line 157, Address: 0x44be74, Func Offset: 0x264
	// Line 153, Address: 0x44beb8, Func Offset: 0x2a8
	// Line 157, Address: 0x44bebc, Func Offset: 0x2ac
	// Line 153, Address: 0x44bec8, Func Offset: 0x2b8
	// Line 157, Address: 0x44bed4, Func Offset: 0x2c4
	// Line 158, Address: 0x44bf24, Func Offset: 0x314
	// Line 163, Address: 0x44bf2c, Func Offset: 0x31c
	// Line 164, Address: 0x44bf50, Func Offset: 0x340
	// Line 166, Address: 0x44bf58, Func Offset: 0x348
	// Line 167, Address: 0x44bf5c, Func Offset: 0x34c
	// Line 168, Address: 0x44bf64, Func Offset: 0x354
	// Line 169, Address: 0x44bf6c, Func Offset: 0x35c
	// Line 171, Address: 0x44bf74, Func Offset: 0x364
	// Line 174, Address: 0x44bf88, Func Offset: 0x378
	// Line 163, Address: 0x44bfa4, Func Offset: 0x394
	// Line 174, Address: 0x44bfa8, Func Offset: 0x398
	// Line 163, Address: 0x44bfb4, Func Offset: 0x3a4
	// Line 174, Address: 0x44bfb8, Func Offset: 0x3a8
	// Line 163, Address: 0x44bfbc, Func Offset: 0x3ac
	// Line 174, Address: 0x44bfc0, Func Offset: 0x3b0
	// Line 163, Address: 0x44c004, Func Offset: 0x3f4
	// Line 174, Address: 0x44c008, Func Offset: 0x3f8
	// Line 163, Address: 0x44c014, Func Offset: 0x404
	// Line 174, Address: 0x44c020, Func Offset: 0x410
	// Func End, Address: 0x44c050, Func Offset: 0x440
}

// IsMoviePlaying__14xTextureHandleFv
// Start address: 0x44c050
uint8 xTextureHandle::IsMoviePlaying()
{
	// Line 142, Address: 0x44c050, Func Offset: 0
	// Line 143, Address: 0x44c054, Func Offset: 0x4
	// Func End, Address: 0x44c05c, Func Offset: 0xc
}

// Reference__14xTextureHandleFUib
// Start address: 0x44c060
void xTextureHandle::Reference(uint32 assetID, uint8 clearPrev)
{
	RwTexture* pTexture;
	PKRAssetTOCInfo info;
	// Line 115, Address: 0x44c060, Func Offset: 0
	// Line 116, Address: 0x44c084, Func Offset: 0x24
	// Line 119, Address: 0x44c08c, Func Offset: 0x2c
	// Line 120, Address: 0x44c09c, Func Offset: 0x3c
	// Line 135, Address: 0x44c0a8, Func Offset: 0x48
	// Line 136, Address: 0x44c0fc, Func Offset: 0x9c
	// Line 138, Address: 0x44c100, Func Offset: 0xa0
	// Line 121, Address: 0x44c124, Func Offset: 0xc4
	// Line 138, Address: 0x44c12c, Func Offset: 0xcc
	// Line 123, Address: 0x44c1a0, Func Offset: 0x140
	// Line 138, Address: 0x44c1b4, Func Offset: 0x154
	// Line 123, Address: 0x44c1c4, Func Offset: 0x164
	// Line 138, Address: 0x44c1c8, Func Offset: 0x168
	// Line 123, Address: 0x44c1e8, Func Offset: 0x188
	// Line 138, Address: 0x44c1ec, Func Offset: 0x18c
	// Line 123, Address: 0x44c1f0, Func Offset: 0x190
	// Line 138, Address: 0x44c204, Func Offset: 0x1a4
	// Line 123, Address: 0x44c228, Func Offset: 0x1c8
	// Line 138, Address: 0x44c22c, Func Offset: 0x1cc
	// Line 121, Address: 0x44c268, Func Offset: 0x208
	// Line 138, Address: 0x44c26c, Func Offset: 0x20c
	// Line 121, Address: 0x44c278, Func Offset: 0x218
	// Line 138, Address: 0x44c27c, Func Offset: 0x21c
	// Line 121, Address: 0x44c280, Func Offset: 0x220
	// Line 138, Address: 0x44c284, Func Offset: 0x224
	// Line 121, Address: 0x44c2c8, Func Offset: 0x268
	// Line 138, Address: 0x44c2cc, Func Offset: 0x26c
	// Line 121, Address: 0x44c2d8, Func Offset: 0x278
	// Line 138, Address: 0x44c2e4, Func Offset: 0x284
	// Line 121, Address: 0x44c308, Func Offset: 0x2a8
	// Line 138, Address: 0x44c30c, Func Offset: 0x2ac
	// Line 121, Address: 0x44c318, Func Offset: 0x2b8
	// Line 138, Address: 0x44c31c, Func Offset: 0x2bc
	// Line 121, Address: 0x44c320, Func Offset: 0x2c0
	// Line 138, Address: 0x44c324, Func Offset: 0x2c4
	// Line 121, Address: 0x44c368, Func Offset: 0x308
	// Line 138, Address: 0x44c36c, Func Offset: 0x30c
	// Line 121, Address: 0x44c378, Func Offset: 0x318
	// Line 138, Address: 0x44c384, Func Offset: 0x324
	// Line 123, Address: 0x44c3a8, Func Offset: 0x348
	// Line 138, Address: 0x44c3ac, Func Offset: 0x34c
	// Line 123, Address: 0x44c3b0, Func Offset: 0x350
	// Line 138, Address: 0x44c3b4, Func Offset: 0x354
	// Line 123, Address: 0x44c3c0, Func Offset: 0x360
	// Line 138, Address: 0x44c3d4, Func Offset: 0x374
	// Line 130, Address: 0x44c3fc, Func Offset: 0x39c
	// Line 138, Address: 0x44c400, Func Offset: 0x3a0
	// Line 130, Address: 0x44c40c, Func Offset: 0x3ac
	// Line 138, Address: 0x44c410, Func Offset: 0x3b0
	// Line 130, Address: 0x44c414, Func Offset: 0x3b4
	// Line 138, Address: 0x44c418, Func Offset: 0x3b8
	// Line 130, Address: 0x44c45c, Func Offset: 0x3fc
	// Line 138, Address: 0x44c460, Func Offset: 0x400
	// Line 130, Address: 0x44c46c, Func Offset: 0x40c
	// Line 138, Address: 0x44c470, Func Offset: 0x410
	// Line 130, Address: 0x44c478, Func Offset: 0x418
	// Line 138, Address: 0x44c47c, Func Offset: 0x41c
	// Line 131, Address: 0x44c488, Func Offset: 0x428
	// Line 138, Address: 0x44c490, Func Offset: 0x430
	// Line 129, Address: 0x44c494, Func Offset: 0x434
	// Line 138, Address: 0x44c49c, Func Offset: 0x43c
	// Line 135, Address: 0x44c4ac, Func Offset: 0x44c
	// Line 138, Address: 0x44c4b0, Func Offset: 0x450
	// Line 135, Address: 0x44c4bc, Func Offset: 0x45c
	// Line 138, Address: 0x44c4c0, Func Offset: 0x460
	// Line 135, Address: 0x44c4c4, Func Offset: 0x464
	// Line 138, Address: 0x44c4c8, Func Offset: 0x468
	// Line 135, Address: 0x44c50c, Func Offset: 0x4ac
	// Line 138, Address: 0x44c510, Func Offset: 0x4b0
	// Line 135, Address: 0x44c51c, Func Offset: 0x4bc
	// Line 138, Address: 0x44c528, Func Offset: 0x4c8
	// Func End, Address: 0x44c558, Func Offset: 0x4f8
}

// __ct__14xTextureHandleFv
// Start address: 0x44c560
void* xTextureHandle::__ct()
{
	// Line 63, Address: 0x44c560, Func Offset: 0
	// Line 67, Address: 0x44c564, Func Offset: 0x4
	// Line 64, Address: 0x44c568, Func Offset: 0x8
	// Line 65, Address: 0x44c56c, Func Offset: 0xc
	// Line 67, Address: 0x44c570, Func Offset: 0x10
	// Func End, Address: 0x44c578, Func Offset: 0x18
}

// FreeMemory__20xInternalTextureNodeFv
// Start address: 0x44c580
void xInternalTextureNode::FreeMemory()
{
	int32 zeroIndex;
	uint32 i;
	// Line 38, Address: 0x44c580, Func Offset: 0
	// Line 39, Address: 0x44c584, Func Offset: 0x4
	// Line 38, Address: 0x44c588, Func Offset: 0x8
	// Line 39, Address: 0x44c5a4, Func Offset: 0x24
	// Line 41, Address: 0x44c5ac, Func Offset: 0x2c
	// Line 43, Address: 0x44c5b8, Func Offset: 0x38
	// Line 42, Address: 0x44c5bc, Func Offset: 0x3c
	// Line 43, Address: 0x44c5c0, Func Offset: 0x40
	// Line 44, Address: 0x44c5c8, Func Offset: 0x48
	// Line 46, Address: 0x44c5e4, Func Offset: 0x64
	// Line 50, Address: 0x44c610, Func Offset: 0x90
	// Line 52, Address: 0x44c620, Func Offset: 0xa0
	// Line 58, Address: 0x44c638, Func Offset: 0xb8
	// Line 52, Address: 0x44c63c, Func Offset: 0xbc
	// Line 58, Address: 0x44c640, Func Offset: 0xc0
	// Line 60, Address: 0x44c660, Func Offset: 0xe0
	// Line 40, Address: 0x44c688, Func Offset: 0x108
	// Line 60, Address: 0x44c68c, Func Offset: 0x10c
	// Line 40, Address: 0x44c698, Func Offset: 0x118
	// Line 60, Address: 0x44c69c, Func Offset: 0x11c
	// Line 40, Address: 0x44c6a0, Func Offset: 0x120
	// Line 60, Address: 0x44c6a4, Func Offset: 0x124
	// Line 40, Address: 0x44c6e8, Func Offset: 0x168
	// Line 60, Address: 0x44c6ec, Func Offset: 0x16c
	// Line 40, Address: 0x44c6f8, Func Offset: 0x178
	// Line 60, Address: 0x44c6fc, Func Offset: 0x17c
	// Line 40, Address: 0x44c724, Func Offset: 0x1a4
	// Line 60, Address: 0x44c728, Func Offset: 0x1a8
	// Line 40, Address: 0x44c730, Func Offset: 0x1b0
	// Line 60, Address: 0x44c738, Func Offset: 0x1b8
	// Line 41, Address: 0x44c744, Func Offset: 0x1c4
	// Line 60, Address: 0x44c74c, Func Offset: 0x1cc
	// Line 44, Address: 0x44c760, Func Offset: 0x1e0
	// Line 60, Address: 0x44c764, Func Offset: 0x1e4
	// Line 44, Address: 0x44c770, Func Offset: 0x1f0
	// Line 60, Address: 0x44c774, Func Offset: 0x1f4
	// Line 44, Address: 0x44c778, Func Offset: 0x1f8
	// Line 60, Address: 0x44c77c, Func Offset: 0x1fc
	// Line 44, Address: 0x44c7c0, Func Offset: 0x240
	// Line 60, Address: 0x44c7c4, Func Offset: 0x244
	// Line 44, Address: 0x44c7d0, Func Offset: 0x250
	// Line 60, Address: 0x44c7e0, Func Offset: 0x260
	// Line 46, Address: 0x44c7fc, Func Offset: 0x27c
	// Line 60, Address: 0x44c800, Func Offset: 0x280
	// Line 46, Address: 0x44c808, Func Offset: 0x288
	// Line 60, Address: 0x44c80c, Func Offset: 0x28c
	// Line 46, Address: 0x44c854, Func Offset: 0x2d4
	// Line 60, Address: 0x44c858, Func Offset: 0x2d8
	// Line 46, Address: 0x44c864, Func Offset: 0x2e4
	// Line 60, Address: 0x44c870, Func Offset: 0x2f0
	// Line 52, Address: 0x44c88c, Func Offset: 0x30c
	// Line 60, Address: 0x44c890, Func Offset: 0x310
	// Line 52, Address: 0x44c898, Func Offset: 0x318
	// Line 60, Address: 0x44c89c, Func Offset: 0x31c
	// Line 52, Address: 0x44c8e4, Func Offset: 0x364
	// Line 60, Address: 0x44c8e8, Func Offset: 0x368
	// Line 52, Address: 0x44c8f4, Func Offset: 0x374
	// Line 60, Address: 0x44c900, Func Offset: 0x380
	// Line 58, Address: 0x44c914, Func Offset: 0x394
	// Line 60, Address: 0x44c918, Func Offset: 0x398
	// Line 58, Address: 0x44c924, Func Offset: 0x3a4
	// Line 60, Address: 0x44c928, Func Offset: 0x3a8
	// Line 58, Address: 0x44c92c, Func Offset: 0x3ac
	// Line 60, Address: 0x44c930, Func Offset: 0x3b0
	// Line 58, Address: 0x44c974, Func Offset: 0x3f4
	// Line 60, Address: 0x44c978, Func Offset: 0x3f8
	// Line 58, Address: 0x44c984, Func Offset: 0x404
	// Line 60, Address: 0x44c990, Func Offset: 0x410
	// Func End, Address: 0x44c9ac, Func Offset: 0x42c
}

