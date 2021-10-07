



float32 zMovePointGetDelay(zMovePoint* m);
xVec3* zMovePointGetPos(zMovePoint* m);
float32 zMovePointGetNext(zMovePoint* current, zMovePoint* prev, zMovePoint** next, xVec3* hdng);
void zMovePointEventCB(xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget);
void zMovePointLoad(zMovePoint* ent, xSerial* s);
void zMovePointSave(zMovePoint* ent, xSerial* s);
zMovePoint* zMovePoint_From_xAssetID(uint32 aid);
void zMovePointSetup(zMovePoint* mvpt, zScene* scn);
zMovePoint* zMovePoint_GetInst(int32 n);
void zMovePointInit(zMovePoint* m, xMovePointAsset* asset);
zMovePoint* zMovePoint_GetMemPool(int32 cnt);

// zMovePointGetDelay__FPC10zMovePoint
// Start address: 0x2bff70
float32 zMovePointGetDelay(zMovePoint* m)
{
	// Line 330, Address: 0x2bff70, Func Offset: 0
	// Func End, Address: 0x2bff78, Func Offset: 0x8
}

// zMovePointGetPos__FPC10zMovePoint
// Start address: 0x2bff80
xVec3* zMovePointGetPos(zMovePoint* m)
{
	// Line 303, Address: 0x2bff80, Func Offset: 0
	// Func End, Address: 0x2bff88, Func Offset: 0x8
}

// zMovePointGetNext__FPC10zMovePointPC10zMovePointPP10zMovePointP5xVec3
// Start address: 0x2bff90
float32 zMovePointGetNext(zMovePoint* current, zMovePoint* prev, zMovePoint** next, xVec3* hdng)
{
	float32 dist;
	// Line 294, Address: 0x2bff90, Func Offset: 0
	// Func End, Address: 0x2bff98, Func Offset: 0x8
}

// zMovePointEventCB__FP5xBaseP5xBaseUiPCfP5xBaseUi
// Start address: 0x2bffa0
void zMovePointEventCB(xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget)
{
	zMovePoint* m;
	NMECSplashData splash;
	// Line 196, Address: 0x2bffa0, Func Offset: 0
	// Line 201, Address: 0x2bffa4, Func Offset: 0x4
	// Line 196, Address: 0x2bffa8, Func Offset: 0x8
	// Line 201, Address: 0x2bffc0, Func Offset: 0x20
	// Line 208, Address: 0x2c0000, Func Offset: 0x60
	// Line 209, Address: 0x2c0004, Func Offset: 0x64
	// Line 213, Address: 0x2c000c, Func Offset: 0x6c
	// Line 216, Address: 0x2c0014, Func Offset: 0x74
	// Line 217, Address: 0x2c0020, Func Offset: 0x80
	// Line 229, Address: 0x2c0028, Func Offset: 0x88
	// Line 232, Address: 0x2c0038, Func Offset: 0x98
	// Line 229, Address: 0x2c003c, Func Offset: 0x9c
	// Line 231, Address: 0x2c0040, Func Offset: 0xa0
	// Line 232, Address: 0x2c004c, Func Offset: 0xac
	// Line 235, Address: 0x2c0050, Func Offset: 0xb0
	// Line 236, Address: 0x2c0058, Func Offset: 0xb8
	// Line 243, Address: 0x2c005c, Func Offset: 0xbc
	// Line 244, Address: 0x2c0068, Func Offset: 0xc8
	// Line 246, Address: 0x2c0088, Func Offset: 0xe8
	// Line 250, Address: 0x2c00a8, Func Offset: 0x108
	// Line 251, Address: 0x2c00bc, Func Offset: 0x11c
	// Line 254, Address: 0x2c00f8, Func Offset: 0x158
	// Line 280, Address: 0x2c0100, Func Offset: 0x160
	// Line 281, Address: 0x2c0140, Func Offset: 0x1a0
	// Func End, Address: 0x2c0158, Func Offset: 0x1b8
}

// zMovePointLoad__FP10zMovePointP7xSerial
// Start address: 0x2c0160
void zMovePointLoad(zMovePoint* ent, xSerial* s)
{
	// Line 170, Address: 0x2c0160, Func Offset: 0
	// Func End, Address: 0x2c0168, Func Offset: 0x8
}

// zMovePointSave__FP10zMovePointP7xSerial
// Start address: 0x2c0170
void zMovePointSave(zMovePoint* ent, xSerial* s)
{
	// Line 151, Address: 0x2c0170, Func Offset: 0
	// Func End, Address: 0x2c0178, Func Offset: 0x8
}

// zMovePoint_From_xAssetID__FUi
// Start address: 0x2c0180
zMovePoint* zMovePoint_From_xAssetID(uint32 aid)
{
	zMovePoint* da_mvpt;
	int32 i;
	// Line 123, Address: 0x2c0180, Func Offset: 0
	// Line 119, Address: 0x2c0184, Func Offset: 0x4
	// Line 123, Address: 0x2c0188, Func Offset: 0x8
	// Line 126, Address: 0x2c0198, Func Offset: 0x18
	// Line 129, Address: 0x2c01a8, Func Offset: 0x28
	// Line 131, Address: 0x2c01b0, Func Offset: 0x30
	// Line 138, Address: 0x2c01c0, Func Offset: 0x40
	// Func End, Address: 0x2c01c8, Func Offset: 0x48
}

// zMovePointSetup__FP10zMovePointP6zScene
// Start address: 0x2c01d0
void zMovePointSetup(zMovePoint* mvpt, zScene* scn)
{
	// Line 112, Address: 0x2c01d0, Func Offset: 0
	// Func End, Address: 0x2c01d8, Func Offset: 0x8
}

// zMovePoint_GetInst__Fi
// Start address: 0x2c01e0
zMovePoint* zMovePoint_GetInst(int32 n)
{
	// Line 106, Address: 0x2c01e0, Func Offset: 0
	// Line 107, Address: 0x2c01f0, Func Offset: 0x10
	// Func End, Address: 0x2c01f8, Func Offset: 0x18
}

// zMovePointInit__FP10zMovePointP15xMovePointAsset
// Start address: 0x2c0200
void zMovePointInit(zMovePoint* m, xMovePointAsset* asset)
{
	// Line 74, Address: 0x2c0200, Func Offset: 0
	// Line 78, Address: 0x2c0214, Func Offset: 0x14
	// Line 80, Address: 0x2c021c, Func Offset: 0x1c
	// Line 82, Address: 0x2c0228, Func Offset: 0x28
	// Line 83, Address: 0x2c0234, Func Offset: 0x34
	// Line 84, Address: 0x2c0244, Func Offset: 0x44
	// Line 85, Address: 0x2c024c, Func Offset: 0x4c
	// Line 93, Address: 0x2c0250, Func Offset: 0x50
	// Func End, Address: 0x2c0264, Func Offset: 0x64
}

// zMovePoint_GetMemPool__Fi
// Start address: 0x2c0270
zMovePoint* zMovePoint_GetMemPool(int32 cnt)
{
	zMovePoint* g_mvpt_list'39;
	// Line 63, Address: 0x2c0270, Func Offset: 0
	// Line 64, Address: 0x2c0280, Func Offset: 0x10
	// Line 69, Address: 0x2c0290, Func Offset: 0x20
	// Line 68, Address: 0x2c0294, Func Offset: 0x24
	// Line 69, Address: 0x2c0298, Func Offset: 0x28
	// Line 66, Address: 0x2c02a4, Func Offset: 0x34
	// Line 69, Address: 0x2c02a8, Func Offset: 0x38
	// Line 66, Address: 0x2c02ac, Func Offset: 0x3c
	// Line 69, Address: 0x2c02b0, Func Offset: 0x40
	// Line 70, Address: 0x2c02c0, Func Offset: 0x50
	// Func End, Address: 0x2c02d0, Func Offset: 0x60
}

