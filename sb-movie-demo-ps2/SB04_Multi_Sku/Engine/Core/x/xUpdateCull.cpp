



void xUpdateCull_Reset(xUpdateCullMgr* m);
void xUpdateCull_SetCB(xUpdateCullMgr* m, void* entity, uint32(*cb)(void*, void*), void* cbdata);
void xUpdateCull_Update(xUpdateCullMgr* m, uint32 percent_update);
xUpdateCullMgr* xUpdateCull_Init(void** ent, uint32 entCount, xGroup** group, uint32 groupCount);
uint32 xUpdateCull_DistanceSquaredCB(void* ent, void* cbdata);
uint32 xUpdateCull_AlwaysTrueCB();
void xUpdateCull_Swap(xUpdateCullMgr* m, uint32 a, uint32 b);

// xUpdateCull_Reset__FP14xUpdateCullMgr
// Start address: 0x447af0
void xUpdateCull_Reset(xUpdateCullMgr* m)
{
	uint32 i;
	// Line 417, Address: 0x447af0, Func Offset: 0
	// Line 419, Address: 0x447b08, Func Offset: 0x18
	// Line 420, Address: 0x447b20, Func Offset: 0x30
	// Line 421, Address: 0x447b80, Func Offset: 0x90
	// Line 422, Address: 0x447b98, Func Offset: 0xa8
	// Func End, Address: 0x447bcc, Func Offset: 0xdc
}

// xUpdateCull_SetCB__FP14xUpdateCullMgrPvPFPvPv_UiPv
// Start address: 0x447bd0
void xUpdateCull_SetCB(xUpdateCullMgr* m, void* entity, uint32(*cb)(void*, void*), void* cbdata)
{
	uint32 i;
	// Line 408, Address: 0x447bd0, Func Offset: 0
	// Line 409, Address: 0x447be8, Func Offset: 0x18
	// Line 408, Address: 0x447bec, Func Offset: 0x1c
	// Line 409, Address: 0x447bf0, Func Offset: 0x20
	// Line 412, Address: 0x447c08, Func Offset: 0x38
	// Line 413, Address: 0x447c20, Func Offset: 0x50
	// Func End, Address: 0x447c48, Func Offset: 0x78
}

// xUpdateCull_Update__FP14xUpdateCullMgrUi
// Start address: 0x447c50
void xUpdateCull_Update(xUpdateCullMgr* m, uint32 percent_update)
{
	int32 numiters;
	uint32 i;
	xUpdateCullEnt* cent;
	uint32 result;
	xUpdateCullGroup* grp;
	xUpdateCullEnt* curr;
	// Line 282, Address: 0x447c50, Func Offset: 0
	// Line 307, Address: 0x447c74, Func Offset: 0x24
	// Line 310, Address: 0x447c7c, Func Offset: 0x2c
	// Line 311, Address: 0x447c94, Func Offset: 0x44
	// Line 399, Address: 0x447ca4, Func Offset: 0x54
	// Line 318, Address: 0x447cc0, Func Offset: 0x70
	// Line 399, Address: 0x447cc4, Func Offset: 0x74
	// Line 319, Address: 0x447cd0, Func Offset: 0x80
	// Line 399, Address: 0x447cd4, Func Offset: 0x84
	// Line 320, Address: 0x447ce8, Func Offset: 0x98
	// Line 399, Address: 0x447cec, Func Offset: 0x9c
	// Line 336, Address: 0x447cf8, Func Offset: 0xa8
	// Line 399, Address: 0x447cfc, Func Offset: 0xac
	// Line 336, Address: 0x447d00, Func Offset: 0xb0
	// Line 337, Address: 0x447d04, Func Offset: 0xb4
	// Line 399, Address: 0x447d08, Func Offset: 0xb8
	// Line 348, Address: 0x447d24, Func Offset: 0xd4
	// Line 399, Address: 0x447d28, Func Offset: 0xd8
	// Line 353, Address: 0x447d3c, Func Offset: 0xec
	// Line 361, Address: 0x447d44, Func Offset: 0xf4
	// Line 399, Address: 0x447d48, Func Offset: 0xf8
	// Line 381, Address: 0x447d94, Func Offset: 0x144
	// Line 399, Address: 0x447d98, Func Offset: 0x148
	// Line 377, Address: 0x447db8, Func Offset: 0x168
	// Line 399, Address: 0x447dbc, Func Offset: 0x16c
	// Line 377, Address: 0x447dc0, Func Offset: 0x170
	// Line 399, Address: 0x447dc4, Func Offset: 0x174
	// Line 384, Address: 0x447ddc, Func Offset: 0x18c
	// Line 399, Address: 0x447de0, Func Offset: 0x190
	// Line 386, Address: 0x447df4, Func Offset: 0x1a4
	// Line 399, Address: 0x447df8, Func Offset: 0x1a8
	// Line 398, Address: 0x447e1c, Func Offset: 0x1cc
	// Line 399, Address: 0x447e20, Func Offset: 0x1d0
	// Line 323, Address: 0x447e30, Func Offset: 0x1e0
	// Line 399, Address: 0x447e34, Func Offset: 0x1e4
	// Line 324, Address: 0x447e6c, Func Offset: 0x21c
	// Line 399, Address: 0x447e70, Func Offset: 0x220
	// Line 324, Address: 0x447e7c, Func Offset: 0x22c
	// Line 399, Address: 0x447e80, Func Offset: 0x230
	// Line 325, Address: 0x447e88, Func Offset: 0x238
	// Line 399, Address: 0x447e90, Func Offset: 0x240
	// Line 326, Address: 0x447ec4, Func Offset: 0x274
	// Line 399, Address: 0x447ec8, Func Offset: 0x278
	// Line 326, Address: 0x447ed4, Func Offset: 0x284
	// Line 399, Address: 0x447ed8, Func Offset: 0x288
	// Line 327, Address: 0x447ee4, Func Offset: 0x294
	// Line 399, Address: 0x447ee8, Func Offset: 0x298
	// Line 333, Address: 0x447ef4, Func Offset: 0x2a4
	// Line 399, Address: 0x447f00, Func Offset: 0x2b0
	// Line 345, Address: 0x447f3c, Func Offset: 0x2ec
	// Line 399, Address: 0x447f40, Func Offset: 0x2f0
	// Line 346, Address: 0x447f64, Func Offset: 0x314
	// Line 399, Address: 0x447f68, Func Offset: 0x318
	// Line 346, Address: 0x447f7c, Func Offset: 0x32c
	// Line 399, Address: 0x447f80, Func Offset: 0x330
	// Line 346, Address: 0x447f8c, Func Offset: 0x33c
	// Line 399, Address: 0x447f90, Func Offset: 0x340
	// Line 347, Address: 0x447f9c, Func Offset: 0x34c
	// Line 399, Address: 0x447fa0, Func Offset: 0x350
	// Line 361, Address: 0x447fdc, Func Offset: 0x38c
	// Line 399, Address: 0x447fe8, Func Offset: 0x398
	// Line 382, Address: 0x44801c, Func Offset: 0x3cc
	// Line 399, Address: 0x448020, Func Offset: 0x3d0
	// Line 382, Address: 0x44802c, Func Offset: 0x3dc
	// Line 399, Address: 0x448030, Func Offset: 0x3e0
	// Func End, Address: 0x44807c, Func Offset: 0x42c
}

// xUpdateCull_Init__FPPvUiPP6xGroupUi
// Start address: 0x448080
xUpdateCullMgr* xUpdateCull_Init(void** ent, uint32 entCount, xGroup** group, uint32 groupCount)
{
	void** tempEnt;
	uint32 tempCount;
	uint32 idx;
	uint32 i;
	uint32 j;
	uint32 k;
	uint32 gcnt;
	uint32 entsInThisGroup;
	uint32 entsInGroups;
	uint32 nonEmptyGroups;
	uint32 x;
	uint8* inGroupArray;
	xBase* base;
	uint32 mgrCount;
	xUpdateCullMgr* m;
	uint32 grpIndex;
	uint32 mgrIndex;
	uint32 startIndex;
	xBase* base;
	xUpdateCullEnt** prevPtr;
	// Line 117, Address: 0x448080, Func Offset: 0
	// Line 121, Address: 0x448090, Func Offset: 0x10
	// Line 117, Address: 0x448094, Func Offset: 0x14
	// Line 122, Address: 0x4480c0, Func Offset: 0x40
	// Line 124, Address: 0x4480c8, Func Offset: 0x48
	// Line 125, Address: 0x4480dc, Func Offset: 0x5c
	// Line 124, Address: 0x4480e0, Func Offset: 0x60
	// Line 125, Address: 0x4480e4, Func Offset: 0x64
	// Line 126, Address: 0x4480f8, Func Offset: 0x78
	// Line 130, Address: 0x44810c, Func Offset: 0x8c
	// Line 126, Address: 0x448110, Func Offset: 0x90
	// Line 130, Address: 0x448118, Func Offset: 0x98
	// Line 131, Address: 0x448124, Func Offset: 0xa4
	// Line 132, Address: 0x448128, Func Offset: 0xa8
	// Line 141, Address: 0x44812c, Func Offset: 0xac
	// Line 139, Address: 0x448134, Func Offset: 0xb4
	// Line 132, Address: 0x448138, Func Offset: 0xb8
	// Line 141, Address: 0x44813c, Func Offset: 0xbc
	// Line 142, Address: 0x448150, Func Offset: 0xd0
	// Line 144, Address: 0x448160, Func Offset: 0xe0
	// Line 163, Address: 0x448170, Func Offset: 0xf0
	// Line 164, Address: 0x44817c, Func Offset: 0xfc
	// Line 165, Address: 0x448190, Func Offset: 0x110
	// Line 167, Address: 0x448194, Func Offset: 0x114
	// Line 178, Address: 0x4481a8, Func Offset: 0x128
	// Line 179, Address: 0x4481dc, Func Offset: 0x15c
	// Line 180, Address: 0x4481e4, Func Offset: 0x164
	// Line 181, Address: 0x4481f0, Func Offset: 0x170
	// Line 182, Address: 0x4481f8, Func Offset: 0x178
	// Line 183, Address: 0x448214, Func Offset: 0x194
	// Line 186, Address: 0x448224, Func Offset: 0x1a4
	// Line 187, Address: 0x448228, Func Offset: 0x1a8
	// Line 188, Address: 0x44822c, Func Offset: 0x1ac
	// Line 189, Address: 0x448230, Func Offset: 0x1b0
	// Line 190, Address: 0x448234, Func Offset: 0x1b4
	// Line 193, Address: 0x448238, Func Offset: 0x1b8
	// Line 194, Address: 0x44823c, Func Offset: 0x1bc
	// Line 197, Address: 0x448240, Func Offset: 0x1c0
	// Line 201, Address: 0x448250, Func Offset: 0x1d0
	// Line 200, Address: 0x448254, Func Offset: 0x1d4
	// Line 201, Address: 0x44825c, Func Offset: 0x1dc
	// Line 254, Address: 0x448268, Func Offset: 0x1e8
	// Line 278, Address: 0x448274, Func Offset: 0x1f4
	// Line 259, Address: 0x448280, Func Offset: 0x200
	// Line 278, Address: 0x448284, Func Offset: 0x204
	// Line 255, Address: 0x448288, Func Offset: 0x208
	// Line 266, Address: 0x44829c, Func Offset: 0x21c
	// Line 276, Address: 0x4482b8, Func Offset: 0x238
	// Line 277, Address: 0x4482c4, Func Offset: 0x244
	// Line 278, Address: 0x4482dc, Func Offset: 0x25c
	// Line 146, Address: 0x448308, Func Offset: 0x288
	// Line 278, Address: 0x44830c, Func Offset: 0x28c
	// Line 159, Address: 0x448324, Func Offset: 0x2a4
	// Line 278, Address: 0x448328, Func Offset: 0x2a8
	// Line 153, Address: 0x448360, Func Offset: 0x2e0
	// Line 149, Address: 0x448364, Func Offset: 0x2e4
	// Line 278, Address: 0x448368, Func Offset: 0x2e8
	// Line 154, Address: 0x448374, Func Offset: 0x2f4
	// Line 278, Address: 0x448378, Func Offset: 0x2f8
	// Line 202, Address: 0x4483cc, Func Offset: 0x34c
	// Line 278, Address: 0x4483d0, Func Offset: 0x350
	// Line 204, Address: 0x4483d8, Func Offset: 0x358
	// Line 278, Address: 0x4483dc, Func Offset: 0x35c
	// Line 251, Address: 0x4483f4, Func Offset: 0x374
	// Line 278, Address: 0x4483f8, Func Offset: 0x378
	// Line 240, Address: 0x448454, Func Offset: 0x3d4
	// Line 278, Address: 0x448458, Func Offset: 0x3d8
	// Line 220, Address: 0x448498, Func Offset: 0x418
	// Line 221, Address: 0x44849c, Func Offset: 0x41c
	// Line 278, Address: 0x4484a0, Func Offset: 0x420
	// Line 221, Address: 0x4484f4, Func Offset: 0x474
	// Line 278, Address: 0x4484f8, Func Offset: 0x478
	// Line 230, Address: 0x448528, Func Offset: 0x4a8
	// Line 232, Address: 0x44852c, Func Offset: 0x4ac
	// Line 278, Address: 0x448530, Func Offset: 0x4b0
	// Line 235, Address: 0x448554, Func Offset: 0x4d4
	// Line 278, Address: 0x448558, Func Offset: 0x4d8
	// Line 245, Address: 0x44857c, Func Offset: 0x4fc
	// Line 278, Address: 0x448580, Func Offset: 0x500
	// Line 279, Address: 0x448620, Func Offset: 0x5a0
	// Func End, Address: 0x448650, Func Offset: 0x5d0
}

// xUpdateCull_DistanceSquaredCB__FPvPv
// Start address: 0x448650
uint32 xUpdateCull_DistanceSquaredCB(void* ent, void* cbdata)
{
	FloatAndVoid fandv;
	xVec3* campos;
	// Line 94, Address: 0x448650, Func Offset: 0
	// Line 97, Address: 0x448654, Func Offset: 0x4
	// Line 101, Address: 0x448664, Func Offset: 0x14
	// Line 102, Address: 0x448668, Func Offset: 0x18
	// Line 101, Address: 0x448670, Func Offset: 0x20
	// Line 105, Address: 0x448674, Func Offset: 0x24
	// Line 112, Address: 0x44868c, Func Offset: 0x3c
	// Line 105, Address: 0x448690, Func Offset: 0x40
	// Line 112, Address: 0x4486a4, Func Offset: 0x54
	// Line 98, Address: 0x4486cc, Func Offset: 0x7c
	// Line 112, Address: 0x4486d4, Func Offset: 0x84
	// Line 106, Address: 0x4486d8, Func Offset: 0x88
	// Line 113, Address: 0x4486f4, Func Offset: 0xa4
	// Func End, Address: 0x448700, Func Offset: 0xb0
}

// xUpdateCull_AlwaysTrueCB__FPvPv
// Start address: 0x448700
uint32 xUpdateCull_AlwaysTrueCB()
{
	// Line 91, Address: 0x448700, Func Offset: 0
	// Func End, Address: 0x448708, Func Offset: 0x8
}

// xUpdateCull_Swap__FP14xUpdateCullMgrUiUi
// Start address: 0x448710
void xUpdateCull_Swap(xUpdateCullMgr* m, uint32 a, uint32 b)
{
	xUpdateCullEnt* cullA;
	xUpdateCullEnt* cullB;
	xUpdateCullEnt* curr;
	void* tmpent;
	xUpdateCullEnt* tmpmgr;
	// Line 31, Address: 0x448710, Func Offset: 0
	// Line 32, Address: 0x44871c, Func Offset: 0xc
	// Line 33, Address: 0x448720, Func Offset: 0x10
	// Line 32, Address: 0x448724, Func Offset: 0x14
	// Line 33, Address: 0x448728, Func Offset: 0x18
	// Line 37, Address: 0x44872c, Func Offset: 0x1c
	// Line 39, Address: 0x448730, Func Offset: 0x20
	// Line 40, Address: 0x448734, Func Offset: 0x24
	// Line 41, Address: 0x448738, Func Offset: 0x28
	// Line 43, Address: 0x448748, Func Offset: 0x38
	// Line 45, Address: 0x44874c, Func Offset: 0x3c
	// Line 46, Address: 0x448750, Func Offset: 0x40
	// Line 47, Address: 0x448754, Func Offset: 0x44
	// Line 52, Address: 0x448770, Func Offset: 0x60
	// Line 51, Address: 0x448774, Func Offset: 0x64
	// Line 52, Address: 0x448778, Func Offset: 0x68
	// Line 53, Address: 0x448780, Func Offset: 0x70
	// Line 57, Address: 0x448794, Func Offset: 0x84
	// Line 56, Address: 0x448798, Func Offset: 0x88
	// Line 57, Address: 0x44879c, Func Offset: 0x8c
	// Line 58, Address: 0x4487a4, Func Offset: 0x94
	// Line 59, Address: 0x4487ac, Func Offset: 0x9c
	// Func End, Address: 0x4487b4, Func Offset: 0xa4
}

