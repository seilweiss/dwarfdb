



float32 xMorphSeqDuration(xMorphSeqFile* seq);
void xMorphRender(xMorphSeqFile* seq, RwMatrixTag* mat, float32 time);
xMorphSeqFile* xMorphSeqSetup(void* data, void*(*FindAssetCB)(uint32, int8*));

// xMorphSeqDuration__FP13xMorphSeqFile
// Start address: 0x4058e0
float32 xMorphSeqDuration(xMorphSeqFile* seq)
{
	// Line 179, Address: 0x4058e0, Func Offset: 0
	// Line 180, Address: 0x4058ec, Func Offset: 0xc
	// Func End, Address: 0x4058f4, Func Offset: 0x14
}

// xMorphRender__FP13xMorphSeqFileP11RwMatrixTagf
// Start address: 0x405900
void xMorphRender(xMorphSeqFile* seq, RwMatrixTag* mat, float32 time)
{
	float32 lerp;
	uint32 tidx;
	int16 weight[4];
	int16* wptr;
	float32* times;
	xMorphFrame* frame;
	// Line 125, Address: 0x405900, Func Offset: 0
	// Line 136, Address: 0x405908, Func Offset: 0x8
	// Line 125, Address: 0x40590c, Func Offset: 0xc
	// Line 136, Address: 0x405910, Func Offset: 0x10
	// Line 131, Address: 0x405914, Func Offset: 0x14
	// Line 136, Address: 0x40591c, Func Offset: 0x1c
	// Line 137, Address: 0x405930, Func Offset: 0x30
	// Line 146, Address: 0x405940, Func Offset: 0x40
	// Line 147, Address: 0x405950, Func Offset: 0x50
	// Line 148, Address: 0x405964, Func Offset: 0x64
	// Line 151, Address: 0x405988, Func Offset: 0x88
	// Line 153, Address: 0x4059b8, Func Offset: 0xb8
	// Line 156, Address: 0x4059c8, Func Offset: 0xc8
	// Line 162, Address: 0x4059d4, Func Offset: 0xd4
	// Line 164, Address: 0x4059e4, Func Offset: 0xe4
	// Line 162, Address: 0x4059e8, Func Offset: 0xe8
	// Line 164, Address: 0x4059f0, Func Offset: 0xf0
	// Line 167, Address: 0x4059fc, Func Offset: 0xfc
	// Line 168, Address: 0x405a04, Func Offset: 0x104
	// Line 174, Address: 0x405ac0, Func Offset: 0x1c0
	// Line 175, Address: 0x405ad8, Func Offset: 0x1d8
	// Line 158, Address: 0x405ae8, Func Offset: 0x1e8
	// Line 166, Address: 0x405af0, Func Offset: 0x1f0
	// Line 175, Address: 0x405af8, Func Offset: 0x1f8
	// Func End, Address: 0x405b04, Func Offset: 0x204
}

// xMorphSeqSetup__FPvPFUiPc_Pv
// Start address: 0x405b10
xMorphSeqFile* xMorphSeqSetup(void* data, void*(*FindAssetCB)(uint32, int8*))
{
	int32 i;
	int32 j;
	RpAtomic* model;
	xMorphTargetFile* mphtgt;
	xMorphSeqFile* header;
	xMorphFrame* framelist;
	uint32* assetlist;
	int8* namelist;
	void* assetPtr;
	uint32 skipsize;
	// Line 45, Address: 0x405b10, Func Offset: 0
	// Line 60, Address: 0x405b14, Func Offset: 0x4
	// Line 45, Address: 0x405b18, Func Offset: 0x8
	// Line 53, Address: 0x405b30, Func Offset: 0x20
	// Line 45, Address: 0x405b34, Func Offset: 0x24
	// Line 53, Address: 0x405b40, Func Offset: 0x30
	// Line 57, Address: 0x405b44, Func Offset: 0x34
	// Line 55, Address: 0x405b48, Func Offset: 0x38
	// Line 56, Address: 0x405b4c, Func Offset: 0x3c
	// Line 60, Address: 0x405b50, Func Offset: 0x40
	// Line 56, Address: 0x405b54, Func Offset: 0x44
	// Line 55, Address: 0x405b58, Func Offset: 0x48
	// Line 56, Address: 0x405b5c, Func Offset: 0x4c
	// Line 55, Address: 0x405b60, Func Offset: 0x50
	// Line 57, Address: 0x405b64, Func Offset: 0x54
	// Line 56, Address: 0x405b68, Func Offset: 0x58
	// Line 57, Address: 0x405b6c, Func Offset: 0x5c
	// Line 60, Address: 0x405b70, Func Offset: 0x60
	// Line 63, Address: 0x405b7c, Func Offset: 0x6c
	// Line 66, Address: 0x405b84, Func Offset: 0x74
	// Line 67, Address: 0x405b94, Func Offset: 0x84
	// Line 71, Address: 0x405b98, Func Offset: 0x88
	// Line 73, Address: 0x405bb4, Func Offset: 0xa4
	// Line 77, Address: 0x405bbc, Func Offset: 0xac
	// Line 78, Address: 0x405bc0, Func Offset: 0xb0
	// Line 79, Address: 0x405bd8, Func Offset: 0xc8
	// Line 83, Address: 0x405bf0, Func Offset: 0xe0
	// Line 84, Address: 0x405c04, Func Offset: 0xf4
	// Line 89, Address: 0x405c0c, Func Offset: 0xfc
	// Line 93, Address: 0x405c28, Func Offset: 0x118
	// Line 106, Address: 0x405c38, Func Offset: 0x128
	// Line 101, Address: 0x405c3c, Func Offset: 0x12c
	// Line 93, Address: 0x405c40, Func Offset: 0x130
	// Line 100, Address: 0x405c44, Func Offset: 0x134
	// Line 93, Address: 0x405c50, Func Offset: 0x140
	// Line 95, Address: 0x405c54, Func Offset: 0x144
	// Line 96, Address: 0x405c58, Func Offset: 0x148
	// Line 98, Address: 0x405c5c, Func Offset: 0x14c
	// Line 101, Address: 0x405c60, Func Offset: 0x150
	// Line 106, Address: 0x405c6c, Func Offset: 0x15c
	// Line 107, Address: 0x405c80, Func Offset: 0x170
	// Line 108, Address: 0x405c8c, Func Offset: 0x17c
	// Line 110, Address: 0x405c90, Func Offset: 0x180
	// Line 116, Address: 0x405c98, Func Offset: 0x188
	// Line 118, Address: 0x405cb0, Func Offset: 0x1a0
	// Line 119, Address: 0x405cc0, Func Offset: 0x1b0
	// Line 121, Address: 0x405cd8, Func Offset: 0x1c8
	// Line 61, Address: 0x405ce0, Func Offset: 0x1d0
	// Line 121, Address: 0x405ce8, Func Offset: 0x1d8
	// Line 103, Address: 0x405d10, Func Offset: 0x200
	// Line 121, Address: 0x405d18, Func Offset: 0x208
	// Line 113, Address: 0x405d2c, Func Offset: 0x21c
	// Line 122, Address: 0x405d38, Func Offset: 0x228
	// Func End, Address: 0x405d60, Func Offset: 0x250
}

