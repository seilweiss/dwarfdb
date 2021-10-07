



int32 OrdComp_infotype(void* vkey, void* vitem);
int32 OrdTest_infotype(void* vkey, void* vitem);
void DestroyItem(xFactoryInst* item);
void DestroyAll();
xFactoryInst* CreateItem(int32 typeID, void* userdata, RyzMemGrow* callerzgrow);
void GrowDataDisable();
void GrowDataEnable(xBase* user, int32 isResume);
int32 RegItemType(int32 tid, xFactoryInst*(*create)(int32, RyzMemGrow*, void*), void(*destroy)(xFactoryInst*));
int32 RegItemType(XGOFTypeInfo* info);
void* __dt();
void* __ct(int32 maxTypes);

// OrdComp_infotype__FPvPv
// Start address: 0x3eb5d0
int32 OrdComp_infotype(void* vkey, void* vitem)
{
	int32 rc;
	// Line 338, Address: 0x3eb5d0, Func Offset: 0
	// Line 344, Address: 0x3eb5d8, Func Offset: 0x8
	// Line 345, Address: 0x3eb5e4, Func Offset: 0x14
	// Line 348, Address: 0x3eb5f4, Func Offset: 0x24
	// Line 344, Address: 0x3eb5fc, Func Offset: 0x2c
	// Line 349, Address: 0x3eb604, Func Offset: 0x34
	// Func End, Address: 0x3eb60c, Func Offset: 0x3c
}

// OrdTest_infotype__FPCvPv
// Start address: 0x3eb610
int32 OrdTest_infotype(void* vkey, void* vitem)
{
	int32 rc;
	// Line 324, Address: 0x3eb610, Func Offset: 0
	// Line 330, Address: 0x3eb618, Func Offset: 0x8
	// Line 331, Address: 0x3eb624, Func Offset: 0x14
	// Line 334, Address: 0x3eb634, Func Offset: 0x24
	// Line 330, Address: 0x3eb63c, Func Offset: 0x2c
	// Line 335, Address: 0x3eb644, Func Offset: 0x34
	// Func End, Address: 0x3eb64c, Func Offset: 0x3c
}

// DestroyItem__8xFactoryFP12xFactoryInst
// Start address: 0x3eb650
void xFactory::DestroyItem(xFactoryInst* item)
{
	int32 idx;
	XGOFTypeInfo pattern;
	// Line 261, Address: 0x3eb650, Func Offset: 0
	// Line 263, Address: 0x3eb654, Func Offset: 0x4
	// Line 261, Address: 0x3eb658, Func Offset: 0x8
	// Line 263, Address: 0x3eb668, Func Offset: 0x18
	// Line 267, Address: 0x3eb694, Func Offset: 0x44
	// Line 272, Address: 0x3eb69c, Func Offset: 0x4c
	// Line 281, Address: 0x3eb6ac, Func Offset: 0x5c
	// Line 282, Address: 0x3eb6b4, Func Offset: 0x64
	// Line 284, Address: 0x3eb6c0, Func Offset: 0x70
	// Line 285, Address: 0x3eb6c8, Func Offset: 0x78
	// Line 295, Address: 0x3eb6d0, Func Offset: 0x80
	// Line 290, Address: 0x3eb6d4, Func Offset: 0x84
	// Line 295, Address: 0x3eb6d8, Func Offset: 0x88
	// Line 303, Address: 0x3eb6ec, Func Offset: 0x9c
	// Line 305, Address: 0x3eb708, Func Offset: 0xb8
	// Line 306, Address: 0x3eb72c, Func Offset: 0xdc
	// Func End, Address: 0x3eb740, Func Offset: 0xf0
}

// DestroyAll__8xFactoryFv
// Start address: 0x3eb740
void xFactory::DestroyAll()
{
	// Line 248, Address: 0x3eb740, Func Offset: 0
	// Line 253, Address: 0x3eb750, Func Offset: 0x10
	// Line 254, Address: 0x3eb758, Func Offset: 0x18
	// Line 255, Address: 0x3eb764, Func Offset: 0x24
	// Line 258, Address: 0x3eb778, Func Offset: 0x38
	// Func End, Address: 0x3eb788, Func Offset: 0x48
}

// CreateItem__8xFactoryFiPvP10RyzMemGrow
// Start address: 0x3eb790
xFactoryInst* xFactory::CreateItem(int32 typeID, void* userdata, RyzMemGrow* callerzgrow)
{
	int32 idx;
	xFactoryInst* item;
	XGOFTypeInfo pattern;
	XGOFTypeInfo* darec;
	RyzMemGrow* grow;
	// Line 199, Address: 0x3eb790, Func Offset: 0
	// Line 202, Address: 0x3eb794, Func Offset: 0x4
	// Line 199, Address: 0x3eb798, Func Offset: 0x8
	// Line 202, Address: 0x3eb79c, Func Offset: 0xc
	// Line 199, Address: 0x3eb7a0, Func Offset: 0x10
	// Line 202, Address: 0x3eb7b8, Func Offset: 0x28
	// Line 206, Address: 0x3eb7e0, Func Offset: 0x50
	// Line 207, Address: 0x3eb7f8, Func Offset: 0x68
	// Line 208, Address: 0x3eb800, Func Offset: 0x70
	// Line 213, Address: 0x3eb810, Func Offset: 0x80
	// Line 222, Address: 0x3eb818, Func Offset: 0x88
	// Line 227, Address: 0x3eb820, Func Offset: 0x90
	// Line 229, Address: 0x3eb834, Func Offset: 0xa4
	// Line 232, Address: 0x3eb83c, Func Offset: 0xac
	// Line 233, Address: 0x3eb844, Func Offset: 0xb4
	// Line 234, Address: 0x3eb848, Func Offset: 0xb8
	// Line 235, Address: 0x3eb850, Func Offset: 0xc0
	// Line 236, Address: 0x3eb858, Func Offset: 0xc8
	// Line 237, Address: 0x3eb85c, Func Offset: 0xcc
	// Line 238, Address: 0x3eb864, Func Offset: 0xd4
	// Line 243, Address: 0x3eb868, Func Offset: 0xd8
	// Line 214, Address: 0x3eb870, Func Offset: 0xe0
	// Line 243, Address: 0x3eb87c, Func Offset: 0xec
	// Line 222, Address: 0x3eb880, Func Offset: 0xf0
	// Line 243, Address: 0x3eb884, Func Offset: 0xf4
	// Line 244, Address: 0x3eb89c, Func Offset: 0x10c
	// Func End, Address: 0x3eb8b8, Func Offset: 0x128
}

// GrowDataDisable__8xFactoryFv
// Start address: 0x3eb8c0
void xFactory::GrowDataDisable()
{
	// Line 192, Address: 0x3eb8c0, Func Offset: 0
	// Func End, Address: 0x3eb8c8, Func Offset: 0x8
}

// GrowDataEnable__8xFactoryFP5xBasei
// Start address: 0x3eb8d0
void xFactory::GrowDataEnable(xBase* user, int32 isResume)
{
	// Line 180, Address: 0x3eb8d0, Func Offset: 0
	// Line 181, Address: 0x3eb8d4, Func Offset: 0x4
	// Line 182, Address: 0x3eb8dc, Func Offset: 0xc
	// Line 183, Address: 0x3eb8e4, Func Offset: 0x14
	// Line 185, Address: 0x3eb8ec, Func Offset: 0x1c
	// Line 188, Address: 0x3eb8f4, Func Offset: 0x24
	// Func End, Address: 0x3eb900, Func Offset: 0x30
}

// RegItemType__8xFactoryFiPFiP10RyzMemGrowPv_P12xFactoryInstPFP12xFactoryInst_v
// Start address: 0x3eb900
int32 xFactory::RegItemType(int32 tid, xFactoryInst*(*create)(int32, RyzMemGrow*, void*), void(*destroy)(xFactoryInst*))
{
	XGOFTypeInfo typerec[2];
	// Line 168, Address: 0x3eb900, Func Offset: 0
	// Line 170, Address: 0x3eb904, Func Offset: 0x4
	// Line 174, Address: 0x3eb938, Func Offset: 0x38
	// Line 175, Address: 0x3eb944, Func Offset: 0x44
	// Func End, Address: 0x3eb950, Func Offset: 0x50
}

// RegItemType__8xFactoryFP12XGOFTypeInfo
// Start address: 0x3eb950
int32 xFactory::RegItemType(XGOFTypeInfo* info)
{
	int32 rc;
	XGOFTypeInfo* tptr;
	XGOFTypeInfo* nextrec;
	int32 idx;
	// Line 90, Address: 0x3eb950, Func Offset: 0
	// Line 91, Address: 0x3eb968, Func Offset: 0x18
	// Line 102, Address: 0x3eb96c, Func Offset: 0x1c
	// Line 108, Address: 0x3eb978, Func Offset: 0x28
	// Line 110, Address: 0x3eb984, Func Offset: 0x34
	// Line 112, Address: 0x3eb98c, Func Offset: 0x3c
	// Line 121, Address: 0x3eb998, Func Offset: 0x48
	// Line 127, Address: 0x3eb9ac, Func Offset: 0x5c
	// Line 129, Address: 0x3eb9bc, Func Offset: 0x6c
	// Line 139, Address: 0x3eb9c4, Func Offset: 0x74
	// Line 148, Address: 0x3eb9c8, Func Offset: 0x78
	// Line 139, Address: 0x3eb9cc, Func Offset: 0x7c
	// Line 148, Address: 0x3eb9d0, Func Offset: 0x80
	// Line 141, Address: 0x3eb9d4, Func Offset: 0x84
	// Line 148, Address: 0x3eb9d8, Func Offset: 0x88
	// Line 139, Address: 0x3eb9dc, Func Offset: 0x8c
	// Line 141, Address: 0x3eb9ec, Func Offset: 0x9c
	// Line 142, Address: 0x3eb9f0, Func Offset: 0xa0
	// Line 143, Address: 0x3eb9f8, Func Offset: 0xa8
	// Line 148, Address: 0x3eb9fc, Func Offset: 0xac
	// Line 153, Address: 0x3eba04, Func Offset: 0xb4
	// Line 155, Address: 0x3eba08, Func Offset: 0xb8
	// Line 114, Address: 0x3eba1c, Func Offset: 0xcc
	// Line 123, Address: 0x3eba24, Func Offset: 0xd4
	// Line 130, Address: 0x3eba2c, Func Offset: 0xdc
	// Line 157, Address: 0x3eba30, Func Offset: 0xe0
	// Line 158, Address: 0x3eba34, Func Offset: 0xe4
	// Func End, Address: 0x3eba4c, Func Offset: 0xfc
}

// __dt__8xFactoryFv
// Start address: 0x3eba50
void* xFactory::__dt()
{
	// Line 77, Address: 0x3eba50, Func Offset: 0
	// Line 81, Address: 0x3eba6c, Func Offset: 0x1c
	// Line 83, Address: 0x3eba98, Func Offset: 0x48
	// Func End, Address: 0x3ebaac, Func Offset: 0x5c
}

// __ct__8xFactoryFi
// Start address: 0x3ebab0
void* xFactory::__ct(int32 maxTypes)
{
	uint32 amt;
	// Line 54, Address: 0x3ebab0, Func Offset: 0
	// Line 59, Address: 0x3ebab4, Func Offset: 0x4
	// Line 54, Address: 0x3ebab8, Func Offset: 0x8
	// Line 59, Address: 0x3ebad0, Func Offset: 0x20
	// Line 58, Address: 0x3ebad4, Func Offset: 0x24
	// Line 59, Address: 0x3ebae0, Func Offset: 0x30
	// Line 61, Address: 0x3ebaec, Func Offset: 0x3c
	// Line 71, Address: 0x3ebafc, Func Offset: 0x4c
	// Line 73, Address: 0x3ebb0c, Func Offset: 0x5c
	// Line 74, Address: 0x3ebb10, Func Offset: 0x60
	// Func End, Address: 0x3ebb28, Func Offset: 0x78
}

