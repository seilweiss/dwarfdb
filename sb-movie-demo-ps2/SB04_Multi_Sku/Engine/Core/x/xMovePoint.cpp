



xVec3* xMovePointGetPos(xMovePoint* m);
float32 xMovePointGetNext(xMovePoint* m, xMovePoint* prev, xMovePoint** next, xVec3* hdng);
void xMovePointSplineDestroy(xMovePoint* m);
void xMovePointSplineSetup(xMovePoint* m);
void xMovePointSetup(xMovePoint* m, xScene* sc);
void xMovePointReset(xMovePoint* m);
void xMovePointLoad(xMovePoint* ent, xSerial* s);
void xMovePointSave(xMovePoint* ent, xSerial* s);
void xMovePointInit(xMovePoint* m, xMovePointAsset* asset);

// xMovePointGetPos__FPC10xMovePoint
// Start address: 0x4052f0
xVec3* xMovePointGetPos(xMovePoint* m)
{
	// Line 277, Address: 0x4052f0, Func Offset: 0
	// Func End, Address: 0x4052f8, Func Offset: 0x8
}

// xMovePointGetNext__FPC10xMovePointPC10xMovePointPP10xMovePointP5xVec3
// Start address: 0x405300
float32 xMovePointGetNext(xMovePoint* m, xMovePoint* prev, xMovePoint** next, xVec3* hdng)
{
	int32 rnd;
	uint16 idx;
	xMovePoint* previousOption;
	// Line 214, Address: 0x405300, Func Offset: 0
	// Line 220, Address: 0x405304, Func Offset: 0x4
	// Line 214, Address: 0x405308, Func Offset: 0x8
	// Line 220, Address: 0x40532c, Func Offset: 0x2c
	// Line 222, Address: 0x405338, Func Offset: 0x38
	// Line 228, Address: 0x405344, Func Offset: 0x44
	// Line 229, Address: 0x405350, Func Offset: 0x50
	// Line 228, Address: 0x405354, Func Offset: 0x54
	// Line 229, Address: 0x405358, Func Offset: 0x58
	// Line 228, Address: 0x405360, Func Offset: 0x60
	// Line 229, Address: 0x405364, Func Offset: 0x64
	// Line 232, Address: 0x405370, Func Offset: 0x70
	// Line 233, Address: 0x405388, Func Offset: 0x88
	// Line 236, Address: 0x40538c, Func Offset: 0x8c
	// Line 233, Address: 0x405390, Func Offset: 0x90
	// Line 236, Address: 0x405394, Func Offset: 0x94
	// Line 247, Address: 0x40539c, Func Offset: 0x9c
	// Line 253, Address: 0x4053a4, Func Offset: 0xa4
	// Line 256, Address: 0x4053ac, Func Offset: 0xac
	// Line 258, Address: 0x4053c8, Func Offset: 0xc8
	// Line 267, Address: 0x4053d4, Func Offset: 0xd4
	// Line 268, Address: 0x4053dc, Func Offset: 0xdc
	// Line 239, Address: 0x405498, Func Offset: 0x198
	// Line 250, Address: 0x4054a0, Func Offset: 0x1a0
	// Line 268, Address: 0x4054a8, Func Offset: 0x1a8
	// Line 262, Address: 0x4054b0, Func Offset: 0x1b0
	// Line 264, Address: 0x4054b8, Func Offset: 0x1b8
	// Line 268, Address: 0x4054c4, Func Offset: 0x1c4
	// Line 270, Address: 0x4054d8, Func Offset: 0x1d8
	// Line 271, Address: 0x4054dc, Func Offset: 0x1dc
	// Func End, Address: 0x4054fc, Func Offset: 0x1fc
}

// xMovePointSplineDestroy__FP10xMovePoint
// Start address: 0x405500
void xMovePointSplineDestroy(xMovePoint* m)
{
	// Line 180, Address: 0x405500, Func Offset: 0
	// Line 184, Address: 0x40550c, Func Offset: 0xc
	// Func End, Address: 0x405524, Func Offset: 0x24
}

// xMovePointSplineSetup__FP10xMovePoint
// Start address: 0x405530
void xMovePointSplineSetup(xMovePoint* m)
{
	xMovePoint* w0;
	xMovePoint* w2;
	xMovePoint* w3;
	xVec3 points[2];
	xVec3 p1;
	xVec3 p2;
	// Line 129, Address: 0x405530, Func Offset: 0
	// Line 136, Address: 0x405534, Func Offset: 0x4
	// Line 129, Address: 0x405538, Func Offset: 0x8
	// Line 136, Address: 0x405544, Func Offset: 0x14
	// Line 143, Address: 0x405560, Func Offset: 0x30
	// Line 145, Address: 0x405564, Func Offset: 0x34
	// Line 147, Address: 0x405568, Func Offset: 0x38
	// Line 145, Address: 0x40556c, Func Offset: 0x3c
	// Line 147, Address: 0x405570, Func Offset: 0x40
	// Line 150, Address: 0x405588, Func Offset: 0x58
	// Line 153, Address: 0x405598, Func Offset: 0x68
	// Line 152, Address: 0x40559c, Func Offset: 0x6c
	// Line 153, Address: 0x4055a0, Func Offset: 0x70
	// Line 152, Address: 0x4055a4, Func Offset: 0x74
	// Line 153, Address: 0x4055a8, Func Offset: 0x78
	// Line 154, Address: 0x4055bc, Func Offset: 0x8c
	// Line 155, Address: 0x4055d8, Func Offset: 0xa8
	// Line 156, Address: 0x4055f0, Func Offset: 0xc0
	// Line 163, Address: 0x4055f8, Func Offset: 0xc8
	// Line 164, Address: 0x405630, Func Offset: 0x100
	// Line 165, Address: 0x40564c, Func Offset: 0x11c
	// Line 166, Address: 0x405668, Func Offset: 0x138
	// Line 167, Address: 0x405684, Func Offset: 0x154
	// Line 168, Address: 0x4056a0, Func Offset: 0x170
	// Line 169, Address: 0x4056bc, Func Offset: 0x18c
	// Line 173, Address: 0x4056d8, Func Offset: 0x1a8
	// Line 174, Address: 0x4056f8, Func Offset: 0x1c8
	// Line 176, Address: 0x405704, Func Offset: 0x1d4
	// Func End, Address: 0x405714, Func Offset: 0x1e4
}

// xMovePointSetup__FP10xMovePointP6xScene
// Start address: 0x405720
void xMovePointSetup(xMovePoint* m, xScene* sc)
{
	uint32* id;
	uint16 idx;
	// Line 104, Address: 0x405720, Func Offset: 0
	// Line 112, Address: 0x405744, Func Offset: 0x24
	// Line 113, Address: 0x40574c, Func Offset: 0x2c
	// Line 115, Address: 0x405750, Func Offset: 0x30
	// Line 126, Address: 0x405760, Func Offset: 0x40
	// Line 125, Address: 0x405780, Func Offset: 0x60
	// Line 126, Address: 0x405784, Func Offset: 0x64
	// Func End, Address: 0x4057f8, Func Offset: 0xd8
}

// xMovePointReset__FP10xMovePoint
// Start address: 0x405800
void xMovePointReset(xMovePoint* m)
{
	// Line 88, Address: 0x405800, Func Offset: 0
	// Line 93, Address: 0x40580c, Func Offset: 0xc
	// Line 96, Address: 0x405818, Func Offset: 0x18
	// Line 97, Address: 0x405824, Func Offset: 0x24
	// Line 101, Address: 0x405830, Func Offset: 0x30
	// Func End, Address: 0x405840, Func Offset: 0x40
}

// xMovePointLoad__FP10xMovePointP7xSerial
// Start address: 0x405840
void xMovePointLoad(xMovePoint* ent, xSerial* s)
{
	// Line 81, Address: 0x405840, Func Offset: 0
	// Func End, Address: 0x405848, Func Offset: 0x8
}

// xMovePointSave__FP10xMovePointP7xSerial
// Start address: 0x405850
void xMovePointSave(xMovePoint* ent, xSerial* s)
{
	// Line 62, Address: 0x405850, Func Offset: 0
	// Func End, Address: 0x405858, Func Offset: 0x8
}

// xMovePointInit__FP10xMovePointP15xMovePointAsset
// Start address: 0x405860
void xMovePointInit(xMovePoint* m, xMovePointAsset* asset)
{
	// Line 25, Address: 0x405860, Func Offset: 0
	// Line 29, Address: 0x405874, Func Offset: 0x14
	// Line 31, Address: 0x40587c, Func Offset: 0x1c
	// Line 32, Address: 0x405880, Func Offset: 0x20
	// Line 35, Address: 0x40588c, Func Offset: 0x2c
	// Line 36, Address: 0x405894, Func Offset: 0x34
	// Line 37, Address: 0x40589c, Func Offset: 0x3c
	// Line 41, Address: 0x4058a4, Func Offset: 0x44
	// Line 47, Address: 0x4058ac, Func Offset: 0x4c
	// Line 49, Address: 0x4058b0, Func Offset: 0x50
	// Line 42, Address: 0x4058bc, Func Offset: 0x5c
	// Line 49, Address: 0x4058c0, Func Offset: 0x60
	// Line 44, Address: 0x4058c8, Func Offset: 0x68
	// Line 49, Address: 0x4058d0, Func Offset: 0x70
	// Func End, Address: 0x4058e0, Func Offset: 0x80
}

