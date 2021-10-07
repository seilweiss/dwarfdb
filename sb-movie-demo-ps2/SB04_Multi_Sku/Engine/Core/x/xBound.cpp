



void xBoundGetCenter(xBound* b, xVec3* center);
uint8 xOBBHitsBound(xBox& box, xMat4x3& mat, xBound& b);
uint8 xSphereHitsBound(xVec3& c, float32 r, xBound& b);
uint8 xBoundHitsBound(xBound& a, xBound& b);
void xBoundDraw();
void xVecHitsBound(xVec3* v, xBound* b, xCollis* c);
void xSphereHitsBound(xSphere* o, xBound* b, xCollis* c);
void xRayHitsBound(xRay3* r, xBound* b, xCollis* c);
void xBoundOBBIsectRay(xBox* b, xMat4x3* m, xRay3* r, xIsect* isect);
void xBoundHitsModel(xBound* b, xModelInstance* m, xCollis* colls, uint8 ncolls, float32 sth);
void xBoundHitsBound(xBound* a, xBound* b, xCollis* c);
void xBoundGetSphere(xSphere& o, xBound& bound);
void xBoundGetBox(xBox& box, xBound& bound);
void xBoundUpdate(xBound* b);

// xBoundGetCenter__FPC6xBoundP5xVec3
// Start address: 0x439000
void xBoundGetCenter(xBound* b, xVec3* center)
{
	// Line 589, Address: 0x439000, Func Offset: 0
	// Line 592, Address: 0x439034, Func Offset: 0x34
	// Line 593, Address: 0x439048, Func Offset: 0x48
	// Line 597, Address: 0x439050, Func Offset: 0x50
	// Line 598, Address: 0x439064, Func Offset: 0x64
	// Line 601, Address: 0x43906c, Func Offset: 0x6c
	// Line 607, Address: 0x439084, Func Offset: 0x84
	// Func End, Address: 0x43908c, Func Offset: 0x8c
}

// xOBBHitsBound__FRC4xBoxRC7xMat4x3RC6xBound
// Start address: 0x439090
uint8 xOBBHitsBound(xBox& box, xMat4x3& mat, xBound& b)
{
	// Line 574, Address: 0x439090, Func Offset: 0
	// Line 575, Address: 0x439094, Func Offset: 0x4
	// Line 574, Address: 0x439098, Func Offset: 0x8
	// Line 575, Address: 0x43909c, Func Offset: 0xc
	// Line 574, Address: 0x4390a0, Func Offset: 0x10
	// Line 575, Address: 0x4390ac, Func Offset: 0x1c
	// Line 578, Address: 0x4390d4, Func Offset: 0x44
	// Line 580, Address: 0x43912c, Func Offset: 0x9c
	// Line 582, Address: 0x439144, Func Offset: 0xb4
	// Line 585, Address: 0x439154, Func Offset: 0xc4
	// Func End, Address: 0x439168, Func Offset: 0xd8
}

// xSphereHitsBound__FRC5xVec3fRC6xBound
// Start address: 0x439170
uint8 xSphereHitsBound(xVec3& c, float32 r, xBound& b)
{
	// Line 538, Address: 0x439170, Func Offset: 0
	// Line 539, Address: 0x439174, Func Offset: 0x4
	// Line 538, Address: 0x439178, Func Offset: 0x8
	// Line 539, Address: 0x43917c, Func Offset: 0xc
	// Line 538, Address: 0x439180, Func Offset: 0x10
	// Line 539, Address: 0x43918c, Func Offset: 0x1c
	// Line 542, Address: 0x4391c0, Func Offset: 0x50
	// Line 544, Address: 0x439264, Func Offset: 0xf4
	// Line 546, Address: 0x439278, Func Offset: 0x108
	// Line 552, Address: 0x4392d0, Func Offset: 0x160
	// Line 553, Address: 0x4392d4, Func Offset: 0x164
	// Func End, Address: 0x4392e8, Func Offset: 0x178
}

// xBoundHitsBound__FRC6xBoundRC6xBound
// Start address: 0x4392f0
uint8 xBoundHitsBound(xBound& a, xBound& b)
{
	// Line 478, Address: 0x4392f0, Func Offset: 0
	// Line 479, Address: 0x4392f4, Func Offset: 0x4
	// Line 478, Address: 0x4392f8, Func Offset: 0x8
	// Line 479, Address: 0x4392fc, Func Offset: 0xc
	// Line 478, Address: 0x439300, Func Offset: 0x10
	// Line 479, Address: 0x43930c, Func Offset: 0x1c
	// Line 478, Address: 0x439310, Func Offset: 0x20
	// Line 479, Address: 0x439314, Func Offset: 0x24
	// Line 482, Address: 0x4393e0, Func Offset: 0xf0
	// Line 484, Address: 0x43948c, Func Offset: 0x19c
	// Line 486, Address: 0x4394e8, Func Offset: 0x1f8
	// Line 488, Address: 0x439500, Func Offset: 0x210
	// Line 490, Address: 0x439518, Func Offset: 0x228
	// Line 492, Address: 0x4395d8, Func Offset: 0x2e8
	// Line 494, Address: 0x4395f8, Func Offset: 0x308
	// Line 496, Address: 0x439654, Func Offset: 0x364
	// Line 498, Address: 0x439670, Func Offset: 0x380
	// Line 511, Address: 0x439690, Func Offset: 0x3a0
	// Line 512, Address: 0x439694, Func Offset: 0x3a4
	// Func End, Address: 0x4396ac, Func Offset: 0x3bc
}

// xBoundDraw__FPC6xBound
// Start address: 0x4396b0
void xBoundDraw()
{
	// Line 473, Address: 0x4396b0, Func Offset: 0
	// Func End, Address: 0x4396b8, Func Offset: 0x8
}

// xVecHitsBound__FPC5xVec3PC6xBoundP7xCollis
// Start address: 0x4396c0
void xVecHitsBound(xVec3* v, xBound* b, xCollis* c)
{
	xIsect isect;
	xVec3 lv;
	// Line 433, Address: 0x4396c0, Func Offset: 0
	// Line 438, Address: 0x4396cc, Func Offset: 0xc
	// Line 433, Address: 0x4396d0, Func Offset: 0x10
	// Line 438, Address: 0x4396d4, Func Offset: 0x14
	// Line 433, Address: 0x4396d8, Func Offset: 0x18
	// Line 438, Address: 0x4396e0, Func Offset: 0x20
	// Line 440, Address: 0x439708, Func Offset: 0x48
	// Line 442, Address: 0x439714, Func Offset: 0x54
	// Line 446, Address: 0x43971c, Func Offset: 0x5c
	// Line 447, Address: 0x439728, Func Offset: 0x68
	// Line 453, Address: 0x439738, Func Offset: 0x78
	// Line 454, Address: 0x439750, Func Offset: 0x90
	// Line 455, Address: 0x439758, Func Offset: 0x98
	// Line 456, Address: 0x439760, Func Offset: 0xa0
	// Line 458, Address: 0x439770, Func Offset: 0xb0
	// Line 441, Address: 0x439778, Func Offset: 0xb8
	// Line 458, Address: 0x439780, Func Offset: 0xc0
	// Line 442, Address: 0x439788, Func Offset: 0xc8
	// Line 458, Address: 0x439790, Func Offset: 0xd0
	// Line 444, Address: 0x43979c, Func Offset: 0xdc
	// Line 458, Address: 0x4397a0, Func Offset: 0xe0
	// Line 444, Address: 0x4397ac, Func Offset: 0xec
	// Line 458, Address: 0x4397b0, Func Offset: 0xf0
	// Line 444, Address: 0x4397b8, Func Offset: 0xf8
	// Line 458, Address: 0x4397bc, Func Offset: 0xfc
	// Line 444, Address: 0x4397c4, Func Offset: 0x104
	// Line 458, Address: 0x4397c8, Func Offset: 0x108
	// Line 445, Address: 0x4397d0, Func Offset: 0x110
	// Line 458, Address: 0x4397d4, Func Offset: 0x114
	// Line 446, Address: 0x4397e0, Func Offset: 0x120
	// Line 458, Address: 0x4397e8, Func Offset: 0x128
	// Func End, Address: 0x4397f8, Func Offset: 0x138
}

// xSphereHitsBound__FPC7xSpherePC6xBoundP7xCollis
// Start address: 0x439800
void xSphereHitsBound(xSphere* o, xBound* b, xCollis* c)
{
	// Line 405, Address: 0x439800, Func Offset: 0
	// Line 407, Address: 0x439808, Func Offset: 0x8
	// Line 405, Address: 0x439810, Func Offset: 0x10
	// Line 407, Address: 0x439814, Func Offset: 0x14
	// Line 410, Address: 0x439844, Func Offset: 0x44
	// Line 411, Address: 0x43984c, Func Offset: 0x4c
	// Line 413, Address: 0x439854, Func Offset: 0x54
	// Line 414, Address: 0x439860, Func Offset: 0x60
	// Line 416, Address: 0x439868, Func Offset: 0x68
	// Line 423, Address: 0x439870, Func Offset: 0x70
	// Func End, Address: 0x43987c, Func Offset: 0x7c
}

// xRayHitsBound__FPC5xRay3PC6xBoundP7xCollis
// Start address: 0x439880
void xRayHitsBound(xRay3* r, xBound* b, xCollis* c)
{
	xIsect isect;
	// Line 357, Address: 0x439880, Func Offset: 0
	// Line 362, Address: 0x43988c, Func Offset: 0xc
	// Line 357, Address: 0x439890, Func Offset: 0x10
	// Line 362, Address: 0x439894, Func Offset: 0x14
	// Line 364, Address: 0x4398c0, Func Offset: 0x40
	// Line 367, Address: 0x4398cc, Func Offset: 0x4c
	// Line 374, Address: 0x4398d4, Func Offset: 0x54
	// Line 375, Address: 0x4398e0, Func Offset: 0x60
	// Line 383, Address: 0x4398f0, Func Offset: 0x70
	// Line 384, Address: 0x439908, Func Offset: 0x88
	// Line 388, Address: 0x439914, Func Offset: 0x94
	// Line 390, Address: 0x439918, Func Offset: 0x98
	// Line 391, Address: 0x439920, Func Offset: 0xa0
	// Line 393, Address: 0x439930, Func Offset: 0xb0
	// Line 365, Address: 0x439938, Func Offset: 0xb8
	// Line 393, Address: 0x43993c, Func Offset: 0xbc
	// Line 367, Address: 0x439948, Func Offset: 0xc8
	// Line 369, Address: 0x439950, Func Offset: 0xd0
	// Line 393, Address: 0x439958, Func Offset: 0xd8
	// Line 374, Address: 0x439964, Func Offset: 0xe4
	// Line 393, Address: 0x43996c, Func Offset: 0xec
	// Func End, Address: 0x439978, Func Offset: 0xf8
}

// xBoundOBBIsectRay__FPC4xBoxPC7xMat4x3PC5xRay3P6xIsect
// Start address: 0x439980
void xBoundOBBIsectRay(xBox* b, xMat4x3* m, xRay3* r, xIsect* isect)
{
	xRay3 xfr;
	xBox sbox;
	xMat4x3 mnormal;
	float32 len2;
	float32 len_inv;
	float32 len2;
	float32 len_inv;
	float32 len2;
	float32 len_inv;
	// Line 296, Address: 0x439980, Func Offset: 0
	// Line 307, Address: 0x439984, Func Offset: 0x4
	// Line 296, Address: 0x439988, Func Offset: 0x8
	// Line 307, Address: 0x4399a0, Func Offset: 0x20
	// Line 308, Address: 0x439a24, Func Offset: 0xa4
	// Line 307, Address: 0x439a28, Func Offset: 0xa8
	// Line 308, Address: 0x439a30, Func Offset: 0xb0
	// Line 309, Address: 0x439ab0, Func Offset: 0x130
	// Line 308, Address: 0x439ab4, Func Offset: 0x134
	// Line 309, Address: 0x439abc, Func Offset: 0x13c
	// Line 311, Address: 0x439b38, Func Offset: 0x1b8
	// Line 310, Address: 0x439b3c, Func Offset: 0x1bc
	// Line 312, Address: 0x439b48, Func Offset: 0x1c8
	// Line 311, Address: 0x439b4c, Func Offset: 0x1cc
	// Line 313, Address: 0x439b54, Func Offset: 0x1d4
	// Line 312, Address: 0x439b58, Func Offset: 0x1d8
	// Line 311, Address: 0x439b60, Func Offset: 0x1e0
	// Line 312, Address: 0x439b64, Func Offset: 0x1e4
	// Line 311, Address: 0x439b68, Func Offset: 0x1e8
	// Line 312, Address: 0x439b6c, Func Offset: 0x1ec
	// Line 311, Address: 0x439b70, Func Offset: 0x1f0
	// Line 310, Address: 0x439b74, Func Offset: 0x1f4
	// Line 312, Address: 0x439b7c, Func Offset: 0x1fc
	// Line 313, Address: 0x439b80, Func Offset: 0x200
	// Line 312, Address: 0x439b88, Func Offset: 0x208
	// Line 311, Address: 0x439b90, Func Offset: 0x210
	// Line 312, Address: 0x439b98, Func Offset: 0x218
	// Line 313, Address: 0x439b9c, Func Offset: 0x21c
	// Line 310, Address: 0x439ba8, Func Offset: 0x228
	// Line 311, Address: 0x439bac, Func Offset: 0x22c
	// Line 313, Address: 0x439bb0, Func Offset: 0x230
	// Line 314, Address: 0x439bcc, Func Offset: 0x24c
	// Line 326, Address: 0x439bdc, Func Offset: 0x25c
	// Line 324, Address: 0x439be0, Func Offset: 0x260
	// Line 325, Address: 0x439be4, Func Offset: 0x264
	// Line 327, Address: 0x439be8, Func Offset: 0x268
	// Line 326, Address: 0x439bf4, Func Offset: 0x274
	// Line 324, Address: 0x439bf8, Func Offset: 0x278
	// Line 327, Address: 0x439bfc, Func Offset: 0x27c
	// Line 353, Address: 0x439c04, Func Offset: 0x284
	// Line 307, Address: 0x439c10, Func Offset: 0x290
	// Line 353, Address: 0x439c14, Func Offset: 0x294
	// Line 307, Address: 0x439c18, Func Offset: 0x298
	// Line 353, Address: 0x439c20, Func Offset: 0x2a0
	// Line 308, Address: 0x439c24, Func Offset: 0x2a4
	// Line 353, Address: 0x439c28, Func Offset: 0x2a8
	// Line 308, Address: 0x439c2c, Func Offset: 0x2ac
	// Line 353, Address: 0x439c34, Func Offset: 0x2b4
	// Line 309, Address: 0x439c38, Func Offset: 0x2b8
	// Line 353, Address: 0x439c3c, Func Offset: 0x2bc
	// Line 309, Address: 0x439c40, Func Offset: 0x2c0
	// Line 353, Address: 0x439c48, Func Offset: 0x2c8
	// Func End, Address: 0x439c58, Func Offset: 0x2d8
}

// xBoundHitsModel__FPC6xBoundPC14xModelInstanceP7xCollisUcf
// Start address: 0x439c60
void xBoundHitsModel(xBound* b, xModelInstance* m, xCollis* colls, uint8 ncolls, float32 sth)
{
	// Line 273, Address: 0x439c60, Func Offset: 0
	// Line 278, Address: 0x439c64, Func Offset: 0x4
	// Line 288, Address: 0x439c98, Func Offset: 0x38
	// Func End, Address: 0x439cbc, Func Offset: 0x5c
}

// xBoundHitsBound__FPC6xBoundPC6xBoundP7xCollis
// Start address: 0x439cc0
void xBoundHitsBound(xBound* a, xBound* b, xCollis* c)
{
	// Line 197, Address: 0x439cc0, Func Offset: 0
	// Line 202, Address: 0x439cdc, Func Offset: 0x1c
	// Line 213, Address: 0x439cec, Func Offset: 0x2c
	// Line 216, Address: 0x439dc4, Func Offset: 0x104
	// Line 217, Address: 0x439dd4, Func Offset: 0x114
	// Line 220, Address: 0x439ddc, Func Offset: 0x11c
	// Line 224, Address: 0x439df0, Func Offset: 0x130
	// Line 226, Address: 0x439df8, Func Offset: 0x138
	// Line 227, Address: 0x439e08, Func Offset: 0x148
	// Line 229, Address: 0x439e10, Func Offset: 0x150
	// Line 230, Address: 0x439e20, Func Offset: 0x160
	// Line 232, Address: 0x439e28, Func Offset: 0x168
	// Line 233, Address: 0x439e64, Func Offset: 0x1a4
	// Line 237, Address: 0x439e6c, Func Offset: 0x1ac
	// Line 241, Address: 0x439e80, Func Offset: 0x1c0
	// Line 243, Address: 0x439e88, Func Offset: 0x1c8
	// Line 244, Address: 0x439ec0, Func Offset: 0x200
	// Line 246, Address: 0x439ec8, Func Offset: 0x208
	// Line 247, Address: 0x439f04, Func Offset: 0x244
	// Line 249, Address: 0x439f0c, Func Offset: 0x24c
	// Line 250, Address: 0x439f1c, Func Offset: 0x25c
	// Line 255, Address: 0x439f24, Func Offset: 0x264
	// Line 263, Address: 0x439f34, Func Offset: 0x274
	// Line 203, Address: 0x439f40, Func Offset: 0x280
	// Line 263, Address: 0x439f48, Func Offset: 0x288
	// Func End, Address: 0x439f64, Func Offset: 0x2a4
}

// xBoundGetSphere__FR7xSphereRC6xBound
// Start address: 0x439f70
void xBoundGetSphere(xSphere& o, xBound& bound)
{
	xMat4x3& mat;
	xVec3 v;
	// Line 121, Address: 0x439f70, Func Offset: 0
	// Line 122, Address: 0x439f74, Func Offset: 0x4
	// Line 125, Address: 0x439fa8, Func Offset: 0x38
	// Line 126, Address: 0x439fc4, Func Offset: 0x54
	// Line 128, Address: 0x439fcc, Func Offset: 0x5c
	// Line 129, Address: 0x439fd0, Func Offset: 0x60
	// Line 128, Address: 0x439fd4, Func Offset: 0x64
	// Line 129, Address: 0x439fd8, Func Offset: 0x68
	// Line 128, Address: 0x439fe4, Func Offset: 0x74
	// Line 129, Address: 0x439fe8, Func Offset: 0x78
	// Line 128, Address: 0x439ff4, Func Offset: 0x84
	// Line 129, Address: 0x439ffc, Func Offset: 0x8c
	// Line 128, Address: 0x43a004, Func Offset: 0x94
	// Line 129, Address: 0x43a008, Func Offset: 0x98
	// Line 130, Address: 0x43a074, Func Offset: 0x104
	// Line 134, Address: 0x43a07c, Func Offset: 0x10c
	// Line 133, Address: 0x43a080, Func Offset: 0x110
	// Line 134, Address: 0x43a084, Func Offset: 0x114
	// Line 139, Address: 0x43a160, Func Offset: 0x1f0
	// Line 138, Address: 0x43a164, Func Offset: 0x1f4
	// Line 134, Address: 0x43a168, Func Offset: 0x1f8
	// Line 138, Address: 0x43a174, Func Offset: 0x204
	// Line 134, Address: 0x43a194, Func Offset: 0x224
	// Line 138, Address: 0x43a198, Func Offset: 0x228
	// Line 134, Address: 0x43a1ac, Func Offset: 0x23c
	// Line 139, Address: 0x43a1b8, Func Offset: 0x248
	// Line 138, Address: 0x43a1c0, Func Offset: 0x250
	// Line 139, Address: 0x43a1d0, Func Offset: 0x260
	// Line 134, Address: 0x43a1d8, Func Offset: 0x268
	// Line 139, Address: 0x43a1e0, Func Offset: 0x270
	// Line 147, Address: 0x43a1e4, Func Offset: 0x274
	// Func End, Address: 0x43a1f0, Func Offset: 0x280
}

// xBoundGetBox__FR4xBoxRC6xBound
// Start address: 0x43a1f0
void xBoundGetBox(xBox& box, xBound& bound)
{
	xSphere& o;
	xCylinder& c;
	// Line 53, Address: 0x43a1f0, Func Offset: 0
	// Line 54, Address: 0x43a1f8, Func Offset: 0x8
	// Line 58, Address: 0x43a230, Func Offset: 0x40
	// Line 59, Address: 0x43a234, Func Offset: 0x44
	// Line 60, Address: 0x43a254, Func Offset: 0x64
	// Line 59, Address: 0x43a258, Func Offset: 0x68
	// Line 60, Address: 0x43a25c, Func Offset: 0x6c
	// Line 62, Address: 0x43a26c, Func Offset: 0x7c
	// Line 64, Address: 0x43a274, Func Offset: 0x84
	// Line 65, Address: 0x43a2a0, Func Offset: 0xb0
	// Line 67, Address: 0x43a2a8, Func Offset: 0xb8
	// Line 68, Address: 0x43a2b4, Func Offset: 0xc4
	// Line 72, Address: 0x43a2bc, Func Offset: 0xcc
	// Line 71, Address: 0x43a2c4, Func Offset: 0xd4
	// Line 72, Address: 0x43a2c8, Func Offset: 0xd8
	// Line 73, Address: 0x43a2d4, Func Offset: 0xe4
	// Line 72, Address: 0x43a2d8, Func Offset: 0xe8
	// Line 73, Address: 0x43a2e8, Func Offset: 0xf8
	// Line 72, Address: 0x43a2ec, Func Offset: 0xfc
	// Line 73, Address: 0x43a2f0, Func Offset: 0x100
	// Line 80, Address: 0x43a300, Func Offset: 0x110
	// Func End, Address: 0x43a30c, Func Offset: 0x11c
}

// xBoundUpdate__FP6xBound
// Start address: 0x43a310
void xBoundUpdate(xBound* b)
{
	// Line 35, Address: 0x43a310, Func Offset: 0
	// Line 36, Address: 0x43a31c, Func Offset: 0xc
	// Line 35, Address: 0x43a320, Func Offset: 0x10
	// Line 36, Address: 0x43a324, Func Offset: 0x14
	// Line 37, Address: 0x43a32c, Func Offset: 0x1c
	// Line 38, Address: 0x43a388, Func Offset: 0x78
	// Line 39, Address: 0x43a398, Func Offset: 0x88
	// Line 40, Address: 0x43a3a4, Func Offset: 0x94
	// Line 39, Address: 0x43a3b0, Func Offset: 0xa0
	// Line 40, Address: 0x43a3fc, Func Offset: 0xec
	// Line 42, Address: 0x43a450, Func Offset: 0x140
	// Line 44, Address: 0x43a45c, Func Offset: 0x14c
	// Line 50, Address: 0x43a468, Func Offset: 0x158
	// Func End, Address: 0x43a474, Func Offset: 0x164
}

