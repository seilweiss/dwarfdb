



void iLightEnv(iLight* light, int32 env);
void iLightDestroy(iLight* light);
void iLightSetPos(iLight* light, xVec3* pos);
void iLightSetColor(iLight* light, _xFColor* col);
void iLightModify(iLight* light, uint32 flags);
iLight* iLightCreate(iLight* light, uint32 type);
void iLightInit(RpWorld* world);

// iLightEnv__FP6iLighti
// Start address: 0x4b1250
void iLightEnv(iLight* light, int32 env)
{
	uint32 flags;
	// Line 206, Address: 0x4b1250, Func Offset: 0
	// Line 214, Address: 0x4b1284, Func Offset: 0x34
	// Line 218, Address: 0x4b128c, Func Offset: 0x3c
	// Line 221, Address: 0x4b1294, Func Offset: 0x44
	// Line 229, Address: 0x4b1298, Func Offset: 0x48
	// Line 230, Address: 0x4b129c, Func Offset: 0x4c
	// Func End, Address: 0x4b12a4, Func Offset: 0x54
}

// iLightDestroy__FP6iLight
// Start address: 0x4b12b0
void iLightDestroy(iLight* light)
{
	RwFrame* frame;
	// Line 166, Address: 0x4b12b0, Func Offset: 0
	// Line 174, Address: 0x4b12c4, Func Offset: 0x14
	// Line 176, Address: 0x4b12cc, Func Offset: 0x1c
	// Line 177, Address: 0x4b12d4, Func Offset: 0x24
	// Line 178, Address: 0x4b12dc, Func Offset: 0x2c
	// Line 181, Address: 0x4b12ec, Func Offset: 0x3c
	// Line 182, Address: 0x4b12f4, Func Offset: 0x44
	// Func End, Address: 0x4b1308, Func Offset: 0x58
}

// iLightSetPos__FP6iLightP5xVec3
// Start address: 0x4b1310
void iLightSetPos(iLight* light, xVec3* pos)
{
	RwFrame* f;
	RwMatrixTag* m;
	// Line 133, Address: 0x4b1310, Func Offset: 0
	// Line 135, Address: 0x4b131c, Func Offset: 0xc
	// Line 138, Address: 0x4b1320, Func Offset: 0x10
	// Line 135, Address: 0x4b1324, Func Offset: 0x14
	// Line 138, Address: 0x4b1328, Func Offset: 0x18
	// Line 136, Address: 0x4b132c, Func Offset: 0x1c
	// Line 139, Address: 0x4b1330, Func Offset: 0x20
	// Line 140, Address: 0x4b1338, Func Offset: 0x28
	// Line 143, Address: 0x4b133c, Func Offset: 0x2c
	// Line 146, Address: 0x4b1344, Func Offset: 0x34
	// Line 147, Address: 0x4b134c, Func Offset: 0x3c
	// Func End, Address: 0x4b135c, Func Offset: 0x4c
}

// iLightSetColor__FP6iLightP8_xFColor
// Start address: 0x4b1360
void iLightSetColor(iLight* light, _xFColor* col)
{
	// Line 128, Address: 0x4b1360, Func Offset: 0
	// Func End, Address: 0x4b1368, Func Offset: 0x8
}

// iLightModify__FP6iLightUi
// Start address: 0x4b1370
void iLightModify(iLight* light, uint32 flags)
{
	RwFrame* frame;
	RwMatrixTag temp;
	// Line 99, Address: 0x4b1370, Func Offset: 0
	// Line 100, Address: 0x4b1384, Func Offset: 0x14
	// Line 111, Address: 0x4b1390, Func Offset: 0x20
	// Line 114, Address: 0x4b139c, Func Offset: 0x2c
	// Line 117, Address: 0x4b13a8, Func Offset: 0x38
	// Line 121, Address: 0x4b13c8, Func Offset: 0x58
	// Line 123, Address: 0x4b13d4, Func Offset: 0x64
	// Line 109, Address: 0x4b13ec, Func Offset: 0x7c
	// Line 123, Address: 0x4b13f0, Func Offset: 0x80
	// Func End, Address: 0x4b149c, Func Offset: 0x12c
}

// iLightCreate__FP6iLightUi
// Start address: 0x4b14a0
iLight* iLightCreate(iLight* light, uint32 type)
{
	RwFrame* frame;
	// Line 38, Address: 0x4b14a0, Func Offset: 0
	// Line 40, Address: 0x4b14a4, Func Offset: 0x4
	// Line 38, Address: 0x4b14a8, Func Offset: 0x8
	// Line 40, Address: 0x4b14bc, Func Offset: 0x1c
	// Line 43, Address: 0x4b14e4, Func Offset: 0x44
	// Line 44, Address: 0x4b14ec, Func Offset: 0x4c
	// Line 46, Address: 0x4b14f4, Func Offset: 0x54
	// Line 47, Address: 0x4b14fc, Func Offset: 0x5c
	// Line 49, Address: 0x4b1504, Func Offset: 0x64
	// Line 56, Address: 0x4b1510, Func Offset: 0x70
	// Line 59, Address: 0x4b151c, Func Offset: 0x7c
	// Line 53, Address: 0x4b1524, Func Offset: 0x84
	// Line 63, Address: 0x4b152c, Func Offset: 0x8c
	// Line 64, Address: 0x4b1538, Func Offset: 0x98
	// Line 72, Address: 0x4b1540, Func Offset: 0xa0
	// Line 73, Address: 0x4b154c, Func Offset: 0xac
	// Line 75, Address: 0x4b1558, Func Offset: 0xb8
	// Line 78, Address: 0x4b1560, Func Offset: 0xc0
	// Line 83, Address: 0x4b1564, Func Offset: 0xc4
	// Line 79, Address: 0x4b1568, Func Offset: 0xc8
	// Line 93, Address: 0x4b156c, Func Offset: 0xcc
	// Line 80, Address: 0x4b1570, Func Offset: 0xd0
	// Line 81, Address: 0x4b1574, Func Offset: 0xd4
	// Line 82, Address: 0x4b1578, Func Offset: 0xd8
	// Line 83, Address: 0x4b157c, Func Offset: 0xdc
	// Line 84, Address: 0x4b1580, Func Offset: 0xe0
	// Line 85, Address: 0x4b1584, Func Offset: 0xe4
	// Line 86, Address: 0x4b1588, Func Offset: 0xe8
	// Line 87, Address: 0x4b158c, Func Offset: 0xec
	// Line 88, Address: 0x4b1590, Func Offset: 0xf0
	// Line 89, Address: 0x4b1594, Func Offset: 0xf4
	// Line 93, Address: 0x4b1598, Func Offset: 0xf8
	// Line 68, Address: 0x4b15a8, Func Offset: 0x108
	// Line 94, Address: 0x4b15ac, Func Offset: 0x10c
	// Func End, Address: 0x4b15c4, Func Offset: 0x124
}

// iLightInit__FP7RpWorld
// Start address: 0x4b15d0
void iLightInit(RpWorld* world)
{
	// Line 30, Address: 0x4b15d0, Func Offset: 0
	// Func End, Address: 0x4b15d8, Func Offset: 0x8
}

