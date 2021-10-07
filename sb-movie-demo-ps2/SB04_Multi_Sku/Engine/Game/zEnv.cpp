



void zEnvEventCB(xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget);
void zEnvLoad(_zEnv* ent, xSerial* s);
void zEnvSave(_zEnv* ent, xSerial* s);
void zEnvRender(xEnv* env);
void zEnvStartingCamera();
void zEnvSetup(_zEnv* env);
void zEnvInit(_zEnv* env, xEnvAsset* easset);
void zEnvInit(void* env, void* easset);

// zEnvEventCB__FP5xBaseP5xBaseUiPCfP5xBaseUi
// Start address: 0x37dc30
void zEnvEventCB(xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget)
{
	// Line 351, Address: 0x37dc30, Func Offset: 0
	// Line 355, Address: 0x37dc34, Func Offset: 0x4
	// Line 358, Address: 0x37dc90, Func Offset: 0x60
	// Line 359, Address: 0x37dc98, Func Offset: 0x68
	// Line 363, Address: 0x37dca0, Func Offset: 0x70
	// Line 365, Address: 0x37dca8, Func Offset: 0x78
	// Line 368, Address: 0x37dcb0, Func Offset: 0x80
	// Line 370, Address: 0x37dcb8, Func Offset: 0x88
	// Line 378, Address: 0x37dcc0, Func Offset: 0x90
	// Line 379, Address: 0x37dcd8, Func Offset: 0xa8
	// Line 383, Address: 0x37dce0, Func Offset: 0xb0
	// Line 384, Address: 0x37dcf8, Func Offset: 0xc8
	// Line 388, Address: 0x37dd00, Func Offset: 0xd0
	// Line 389, Address: 0x37dd18, Func Offset: 0xe8
	// Line 393, Address: 0x37dd20, Func Offset: 0xf0
	// Line 394, Address: 0x37dd38, Func Offset: 0x108
	// Line 412, Address: 0x37dd40, Func Offset: 0x110
	// Line 417, Address: 0x37dd48, Func Offset: 0x118
	// Func End, Address: 0x37dd54, Func Offset: 0x124
}

// zEnvLoad__FP5_zEnvP7xSerial
// Start address: 0x37dd60
void zEnvLoad(_zEnv* ent, xSerial* s)
{
	// Line 326, Address: 0x37dd60, Func Offset: 0
	// Func End, Address: 0x37dd68, Func Offset: 0x8
}

// zEnvSave__FP5_zEnvP7xSerial
// Start address: 0x37dd70
void zEnvSave(_zEnv* ent, xSerial* s)
{
	// Line 307, Address: 0x37dd70, Func Offset: 0
	// Func End, Address: 0x37dd78, Func Offset: 0x8
}

// zEnvRender__FP4xEnv
// Start address: 0x37dd80
void zEnvRender(xEnv* env)
{
	RpWorld* world;
	int32 num;
	int32 i;
	xSurface* sp;
	zSurfaceProps* pp;
	RpMaterial* mp;
	xGroup* g;
	uint32 texid;
	RwTexture* texptr;
	// Line 174, Address: 0x37dd80, Func Offset: 0
	// Line 185, Address: 0x37dda4, Func Offset: 0x24
	// Line 188, Address: 0x37ddac, Func Offset: 0x2c
	// Line 189, Address: 0x37ddb0, Func Offset: 0x30
	// Line 192, Address: 0x37ddc0, Func Offset: 0x40
	// Line 193, Address: 0x37ddc8, Func Offset: 0x48
	// Line 195, Address: 0x37ddcc, Func Offset: 0x4c
	// Line 200, Address: 0x37dde0, Func Offset: 0x60
	// Line 203, Address: 0x37ddf0, Func Offset: 0x70
	// Line 205, Address: 0x37ddfc, Func Offset: 0x7c
	// Line 207, Address: 0x37de04, Func Offset: 0x84
	// Line 208, Address: 0x37de08, Func Offset: 0x88
	// Line 210, Address: 0x37de10, Func Offset: 0x90
	// Line 211, Address: 0x37de18, Func Offset: 0x98
	// Line 212, Address: 0x37de24, Func Offset: 0xa4
	// Line 214, Address: 0x37de2c, Func Offset: 0xac
	// Line 219, Address: 0x37de34, Func Offset: 0xb4
	// Line 283, Address: 0x37de48, Func Offset: 0xc8
	// Line 293, Address: 0x37de54, Func Offset: 0xd4
	// Func End, Address: 0x37de78, Func Offset: 0xf8
}

// zEnvStartingCamera__FP5_zEnv
// Start address: 0x37de80
void zEnvStartingCamera()
{
	// Line 170, Address: 0x37de80, Func Offset: 0
	// Func End, Address: 0x37de88, Func Offset: 0x8
}

// zEnvSetup__FP5_zEnv
// Start address: 0x37de90
void zEnvSetup(_zEnv* env)
{
	// Line 151, Address: 0x37de90, Func Offset: 0
	// Line 156, Address: 0x37de9c, Func Offset: 0xc
	// Line 161, Address: 0x37dea4, Func Offset: 0x14
	// Line 162, Address: 0x37debc, Func Offset: 0x2c
	// Func End, Address: 0x37decc, Func Offset: 0x3c
}

// zEnvInit__FP5_zEnvP9xEnvAsset
// Start address: 0x37ded0
void zEnvInit(_zEnv* env, xEnvAsset* easset)
{
	int32 mapper_count;
	int32 i;
	uint32 size;
	xBase* material_map;
	int32 i;
	// Line 52, Address: 0x37ded0, Func Offset: 0
	// Line 54, Address: 0x37dee8, Func Offset: 0x18
	// Line 66, Address: 0x37def0, Func Offset: 0x20
	// Line 65, Address: 0x37def4, Func Offset: 0x24
	// Line 66, Address: 0x37def8, Func Offset: 0x28
	// Line 68, Address: 0x37df00, Func Offset: 0x30
	// Line 72, Address: 0x37df0c, Func Offset: 0x3c
	// Line 75, Address: 0x37df10, Func Offset: 0x40
	// Line 72, Address: 0x37df14, Func Offset: 0x44
	// Line 77, Address: 0x37df1c, Func Offset: 0x4c
	// Line 75, Address: 0x37df20, Func Offset: 0x50
	// Line 77, Address: 0x37df28, Func Offset: 0x58
	// Line 80, Address: 0x37df38, Func Offset: 0x68
	// Line 81, Address: 0x37df48, Func Offset: 0x78
	// Line 120, Address: 0x37df60, Func Offset: 0x90
	// Line 122, Address: 0x37df68, Func Offset: 0x98
	// Line 124, Address: 0x37df74, Func Offset: 0xa4
	// Line 125, Address: 0x37df7c, Func Offset: 0xac
	// Line 133, Address: 0x37df94, Func Offset: 0xc4
	// Line 134, Address: 0x37df9c, Func Offset: 0xcc
	// Line 136, Address: 0x37dfa4, Func Offset: 0xd4
	// Line 138, Address: 0x37dfb4, Func Offset: 0xe4
	// Line 140, Address: 0x37dfd4, Func Offset: 0x104
	// Line 141, Address: 0x37dfe0, Func Offset: 0x110
	// Line 142, Address: 0x37e000, Func Offset: 0x130
	// Line 143, Address: 0x37e024, Func Offset: 0x154
	// Line 146, Address: 0x37e028, Func Offset: 0x158
	// Line 69, Address: 0x37e034, Func Offset: 0x164
	// Line 90, Address: 0x37e040, Func Offset: 0x170
	// Line 146, Address: 0x37e04c, Func Offset: 0x17c
	// Line 147, Address: 0x37e074, Func Offset: 0x1a4
	// Func End, Address: 0x37e088, Func Offset: 0x1b8
}

// zEnvInit__FPvPv
// Start address: 0x37e090
void zEnvInit(void* env, void* easset)
{
	// Line 48, Address: 0x37e090, Func Offset: 0
	// Func End, Address: 0x37e098, Func Offset: 0x8
}

