typedef struct RwV3d;
typedef struct RwBBox;
typedef struct RwSphere;


typedef RwV3d type_0[3];
typedef int8 type_1[62];

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
};

int8 rcsid[62];

int32 RtIntersectionBBoxTriangle(RwBBox* bbox, RwV3d* v0, RwV3d* v1, RwV3d* v2);
int32 RtIntersectionSphereTriangle(RwSphere* sphere, RwV3d* v0, RwV3d* v1, RwV3d* v2, RwV3d* normal, float32* distance);

// 
// Start address: 0x275980
int32 RtIntersectionBBoxTriangle(RwBBox* bbox, RwV3d* v0, RwV3d* v1, RwV3d* v2)
{
	float32 v;
	float32 u;
	float32 v;
	float32 u;
	float32 dist;
	float32 det;
	RwV3d norm;
	float32 tmp;
	float32 tmp;
	float32 tmp;
	float32 tmp;
	float32 tmp;
	float32 tmp;
	float32 tmp;
	float32 tmp;
	float32 tmp;
	float32 tmp;
	float32 tmp;
	float32 tmp;
	float32 tmp;
	float32 tmp;
	float32 tmp;
	float32 tmp;
	float32 tmp;
	float32 tmp;
	int32 v2Test;
	int32 v1Test;
	int32 v0Test;
	// Line 543, Address: 0x275980, Func Offset: 0
	// Line 551, Address: 0x275990, Func Offset: 0x10
	// Line 552, Address: 0x275a54, Func Offset: 0xd4
	// Line 553, Address: 0x275a5c, Func Offset: 0xdc
	// Line 554, Address: 0x275b14, Func Offset: 0x194
	// Line 555, Address: 0x275b1c, Func Offset: 0x19c
	// Line 556, Address: 0x275bd4, Func Offset: 0x254
	// Line 561, Address: 0x275bdc, Func Offset: 0x25c
	// Line 562, Address: 0x275be8, Func Offset: 0x268
	// Line 568, Address: 0x275bf0, Func Offset: 0x270
	// Line 569, Address: 0x275bf8, Func Offset: 0x278
	// Line 570, Address: 0x2760c8, Func Offset: 0x748
	// Line 571, Address: 0x2760d4, Func Offset: 0x754
	// Line 572, Address: 0x2765a4, Func Offset: 0xc24
	// Line 573, Address: 0x2765b0, Func Offset: 0xc30
	// Line 584, Address: 0x276a80, Func Offset: 0x1100
	// Line 586, Address: 0x276a84, Func Offset: 0x1104
	// Line 596, Address: 0x276a8c, Func Offset: 0x110c
	// Line 585, Address: 0x276a90, Func Offset: 0x1110
	// Line 584, Address: 0x276a94, Func Offset: 0x1114
	// Line 585, Address: 0x276a98, Func Offset: 0x1118
	// Line 584, Address: 0x276aa0, Func Offset: 0x1120
	// Line 586, Address: 0x276aa4, Func Offset: 0x1124
	// Line 596, Address: 0x276ac8, Func Offset: 0x1148
	// Line 593, Address: 0x276acc, Func Offset: 0x114c
	// Line 594, Address: 0x276ad4, Func Offset: 0x1154
	// Line 596, Address: 0x276ad8, Func Offset: 0x1158
	// Line 593, Address: 0x276adc, Func Offset: 0x115c
	// Line 596, Address: 0x276ae0, Func Offset: 0x1160
	// Line 598, Address: 0x276aec, Func Offset: 0x116c
	// Line 599, Address: 0x276af4, Func Offset: 0x1174
	// Line 598, Address: 0x276af8, Func Offset: 0x1178
	// Line 600, Address: 0x276afc, Func Offset: 0x117c
	// Line 603, Address: 0x276b04, Func Offset: 0x1184
	// Line 604, Address: 0x276b0c, Func Offset: 0x118c
	// Line 603, Address: 0x276b10, Func Offset: 0x1190
	// Line 604, Address: 0x276b14, Func Offset: 0x1194
	// Line 607, Address: 0x276b18, Func Offset: 0x1198
	// Line 610, Address: 0x276b28, Func Offset: 0x11a8
	// Line 609, Address: 0x276b2c, Func Offset: 0x11ac
	// Line 610, Address: 0x276b34, Func Offset: 0x11b4
	// Line 611, Address: 0x276b38, Func Offset: 0x11b8
	// Line 615, Address: 0x276b40, Func Offset: 0x11c0
	// Line 614, Address: 0x276b44, Func Offset: 0x11c4
	// Line 615, Address: 0x276b4c, Func Offset: 0x11cc
	// Line 614, Address: 0x276b50, Func Offset: 0x11d0
	// Line 623, Address: 0x276b54, Func Offset: 0x11d4
	// Line 626, Address: 0x276b60, Func Offset: 0x11e0
	// Line 623, Address: 0x276b68, Func Offset: 0x11e8
	// Line 624, Address: 0x276b7c, Func Offset: 0x11fc
	// Line 626, Address: 0x276b88, Func Offset: 0x1208
	// Line 629, Address: 0x276b98, Func Offset: 0x1218
	// Line 635, Address: 0x276bb8, Func Offset: 0x1238
	// Line 636, Address: 0x276bc8, Func Offset: 0x1248
	// Line 635, Address: 0x276bcc, Func Offset: 0x124c
	// Line 636, Address: 0x276bd0, Func Offset: 0x1250
	// Line 635, Address: 0x276bd4, Func Offset: 0x1254
	// Line 636, Address: 0x276bd8, Func Offset: 0x1258
	// Line 637, Address: 0x276be0, Func Offset: 0x1260
	// Line 639, Address: 0x276c00, Func Offset: 0x1280
	// Line 640, Address: 0x276c10, Func Offset: 0x1290
	// Line 641, Address: 0x276c34, Func Offset: 0x12b4
	// Line 648, Address: 0x276c3c, Func Offset: 0x12bc
	// Line 653, Address: 0x276c5c, Func Offset: 0x12dc
	// Line 654, Address: 0x276c6c, Func Offset: 0x12ec
	// Line 653, Address: 0x276c70, Func Offset: 0x12f0
	// Line 654, Address: 0x276c74, Func Offset: 0x12f4
	// Line 653, Address: 0x276c78, Func Offset: 0x12f8
	// Line 654, Address: 0x276c7c, Func Offset: 0x12fc
	// Line 655, Address: 0x276c84, Func Offset: 0x1304
	// Line 657, Address: 0x276ca4, Func Offset: 0x1324
	// Line 658, Address: 0x276cb4, Func Offset: 0x1334
	// Line 659, Address: 0x276cd8, Func Offset: 0x1358
	// Line 666, Address: 0x276ce0, Func Offset: 0x1360
	// Line 667, Address: 0x276ce4, Func Offset: 0x1364
	// Func End, Address: 0x276cf8, Func Offset: 0x1378
}

// 
// Start address: 0x276d00
int32 RtIntersectionSphereTriangle(RwSphere* sphere, RwV3d* v0, RwV3d* v1, RwV3d* v2, RwV3d* normal, float32* distance)
{
	float32 _result;
	float32 factor;
	float32 length2;
	float32 sphereRadiusSquared;
	float32 distToPlane;
	float32 nDotN;
	RwV3d vc[3];
	// Line 169, Address: 0x276d00, Func Offset: 0
	// Line 213, Address: 0x276d04, Func Offset: 0x4
	// Line 214, Address: 0x276d08, Func Offset: 0x8
	// Line 215, Address: 0x276d0c, Func Offset: 0xc
	// Line 216, Address: 0x276d10, Func Offset: 0x10
	// Line 217, Address: 0x276d14, Func Offset: 0x14
	// Line 218, Address: 0x276d18, Func Offset: 0x18
	// Line 219, Address: 0x276d1c, Func Offset: 0x1c
	// Line 220, Address: 0x276d20, Func Offset: 0x20
	// Line 221, Address: 0x276d24, Func Offset: 0x24
	// Line 222, Address: 0x276d28, Func Offset: 0x28
	// Line 223, Address: 0x276d2c, Func Offset: 0x2c
	// Line 224, Address: 0x276d30, Func Offset: 0x30
	// Line 225, Address: 0x276d34, Func Offset: 0x34
	// Line 226, Address: 0x276d38, Func Offset: 0x38
	// Line 228, Address: 0x276d40, Func Offset: 0x40
	// Line 230, Address: 0x276d48, Func Offset: 0x48
	// Line 231, Address: 0x276d4c, Func Offset: 0x4c
	// Line 232, Address: 0x276d50, Func Offset: 0x50
	// Line 233, Address: 0x276d54, Func Offset: 0x54
	// Line 234, Address: 0x276d58, Func Offset: 0x58
	// Line 235, Address: 0x276d5c, Func Offset: 0x5c
	// Line 236, Address: 0x276d60, Func Offset: 0x60
	// Line 237, Address: 0x276d64, Func Offset: 0x64
	// Line 238, Address: 0x276d68, Func Offset: 0x68
	// Line 239, Address: 0x276d6c, Func Offset: 0x6c
	// Line 240, Address: 0x276d70, Func Offset: 0x70
	// Line 241, Address: 0x276d74, Func Offset: 0x74
	// Line 242, Address: 0x276d78, Func Offset: 0x78
	// Line 243, Address: 0x276d7c, Func Offset: 0x7c
	// Line 245, Address: 0x276d84, Func Offset: 0x84
	// Line 247, Address: 0x276d8c, Func Offset: 0x8c
	// Line 248, Address: 0x276d90, Func Offset: 0x90
	// Line 249, Address: 0x276d94, Func Offset: 0x94
	// Line 250, Address: 0x276d98, Func Offset: 0x98
	// Line 251, Address: 0x276d9c, Func Offset: 0x9c
	// Line 252, Address: 0x276da0, Func Offset: 0xa0
	// Line 253, Address: 0x276da4, Func Offset: 0xa4
	// Line 254, Address: 0x276da8, Func Offset: 0xa8
	// Line 255, Address: 0x276dac, Func Offset: 0xac
	// Line 256, Address: 0x276db0, Func Offset: 0xb0
	// Line 257, Address: 0x276db4, Func Offset: 0xb4
	// Line 258, Address: 0x276db8, Func Offset: 0xb8
	// Line 259, Address: 0x276dbc, Func Offset: 0xbc
	// Line 260, Address: 0x276dc0, Func Offset: 0xc0
	// Line 261, Address: 0x276dc4, Func Offset: 0xc4
	// Line 262, Address: 0x276dc8, Func Offset: 0xc8
	// Line 263, Address: 0x276dcc, Func Offset: 0xcc
	// Line 264, Address: 0x276dd0, Func Offset: 0xd0
	// Line 265, Address: 0x276dd4, Func Offset: 0xd4
	// Line 266, Address: 0x276dd8, Func Offset: 0xd8
	// Line 268, Address: 0x276de0, Func Offset: 0xe0
	// Line 270, Address: 0x276de8, Func Offset: 0xe8
	// Line 271, Address: 0x276dec, Func Offset: 0xec
	// Line 272, Address: 0x276df0, Func Offset: 0xf0
	// Line 273, Address: 0x276df4, Func Offset: 0xf4
	// Line 274, Address: 0x276df8, Func Offset: 0xf8
	// Line 278, Address: 0x276dfc, Func Offset: 0xfc
	// Line 280, Address: 0x276e04, Func Offset: 0x104
	// Line 299, Address: 0x276e0c, Func Offset: 0x10c
	// Line 300, Address: 0x276e10, Func Offset: 0x110
	// Line 299, Address: 0x276e14, Func Offset: 0x114
	// Line 300, Address: 0x276e18, Func Offset: 0x118
	// Line 299, Address: 0x276e1c, Func Offset: 0x11c
	// Line 300, Address: 0x276e2c, Func Offset: 0x12c
	// Line 299, Address: 0x276e38, Func Offset: 0x138
	// Line 300, Address: 0x276e40, Func Offset: 0x140
	// Line 301, Address: 0x276e44, Func Offset: 0x144
	// Line 303, Address: 0x276e68, Func Offset: 0x168
	// Line 304, Address: 0x276e74, Func Offset: 0x174
	// Line 303, Address: 0x276e78, Func Offset: 0x178
	// Line 304, Address: 0x276e88, Func Offset: 0x188
	// Line 307, Address: 0x276e98, Func Offset: 0x198
	// Line 311, Address: 0x276ea0, Func Offset: 0x1a0
	// Line 312, Address: 0x276edc, Func Offset: 0x1dc
	// Line 315, Address: 0x276ee0, Func Offset: 0x1e0
	// Line 312, Address: 0x276ee8, Func Offset: 0x1e8
	// Line 315, Address: 0x276f04, Func Offset: 0x204
	// Line 318, Address: 0x276f1c, Func Offset: 0x21c
	// Line 315, Address: 0x276f20, Func Offset: 0x220
	// Line 318, Address: 0x276f30, Func Offset: 0x230
	// Line 321, Address: 0x276f54, Func Offset: 0x254
	// Line 326, Address: 0x276f60, Func Offset: 0x260
	// Line 332, Address: 0x276f64, Func Offset: 0x264
	// Line 329, Address: 0x276f6c, Func Offset: 0x26c
	// Line 332, Address: 0x276f70, Func Offset: 0x270
	// Line 329, Address: 0x276f80, Func Offset: 0x280
	// Line 332, Address: 0x276f84, Func Offset: 0x284
	// Line 333, Address: 0x276f88, Func Offset: 0x288
	// Line 336, Address: 0x276f98, Func Offset: 0x298
	// Line 338, Address: 0x276fa0, Func Offset: 0x2a0
	// Line 339, Address: 0x276fbc, Func Offset: 0x2bc
	// Line 342, Address: 0x276fcc, Func Offset: 0x2cc
	// Line 344, Address: 0x276fd4, Func Offset: 0x2d4
	// Line 345, Address: 0x276ff0, Func Offset: 0x2f0
	// Line 348, Address: 0x277000, Func Offset: 0x300
	// Line 351, Address: 0x277008, Func Offset: 0x308
	// Line 353, Address: 0x277018, Func Offset: 0x318
	// Line 356, Address: 0x277028, Func Offset: 0x328
	// Line 359, Address: 0x277068, Func Offset: 0x368
	// Line 365, Address: 0x277070, Func Offset: 0x370
	// Line 368, Address: 0x2770a8, Func Offset: 0x3a8
	// Line 374, Address: 0x2770b0, Func Offset: 0x3b0
	// Line 377, Address: 0x2770c0, Func Offset: 0x3c0
	// Line 380, Address: 0x2770fc, Func Offset: 0x3fc
	// Line 386, Address: 0x277104, Func Offset: 0x404
	// Line 389, Address: 0x27713c, Func Offset: 0x43c
	// Line 395, Address: 0x277144, Func Offset: 0x444
	// Line 396, Address: 0x27714c, Func Offset: 0x44c
	// Line 395, Address: 0x277158, Func Offset: 0x458
	// Line 396, Address: 0x27715c, Func Offset: 0x45c
	// Line 399, Address: 0x277174, Func Offset: 0x474
	// Line 400, Address: 0x277180, Func Offset: 0x480
	// Line 402, Address: 0x27718c, Func Offset: 0x48c
	// Line 404, Address: 0x27719c, Func Offset: 0x49c
	// Line 408, Address: 0x2771cc, Func Offset: 0x4cc
	// Line 412, Address: 0x2771d4, Func Offset: 0x4d4
	// Line 414, Address: 0x2771dc, Func Offset: 0x4dc
	// Line 412, Address: 0x2771e8, Func Offset: 0x4e8
	// Line 414, Address: 0x2771ec, Func Offset: 0x4ec
	// Line 417, Address: 0x277204, Func Offset: 0x504
	// Line 418, Address: 0x277210, Func Offset: 0x510
	// Line 420, Address: 0x27721c, Func Offset: 0x51c
	// Line 422, Address: 0x27722c, Func Offset: 0x52c
	// Line 426, Address: 0x27725c, Func Offset: 0x55c
	// Line 430, Address: 0x277264, Func Offset: 0x564
	// Line 431, Address: 0x27726c, Func Offset: 0x56c
	// Line 430, Address: 0x277278, Func Offset: 0x578
	// Line 431, Address: 0x27727c, Func Offset: 0x57c
	// Line 434, Address: 0x277294, Func Offset: 0x594
	// Line 435, Address: 0x277298, Func Offset: 0x598
	// Line 434, Address: 0x27729c, Func Offset: 0x59c
	// Line 435, Address: 0x2772a4, Func Offset: 0x5a4
	// Line 437, Address: 0x2772ac, Func Offset: 0x5ac
	// Line 439, Address: 0x2772bc, Func Offset: 0x5bc
	// Line 443, Address: 0x2772ec, Func Offset: 0x5ec
	// Line 447, Address: 0x2772f4, Func Offset: 0x5f4
	// Line 448, Address: 0x2772f8, Func Offset: 0x5f8
	// Func End, Address: 0x277304, Func Offset: 0x604
}

