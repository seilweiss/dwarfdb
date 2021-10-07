typedef struct RwBBox;
typedef struct RwSphere;
typedef struct RwV3d;



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

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};


int32 RtIntersectionBBoxTriangle(RwBBox* bbox, RwV3d* v0, RwV3d* v1, RwV3d* v2);
int32 RtIntersectionSphereTriangle(RwSphere* sphere, RwV3d* v0, RwV3d* v1, RwV3d* v2, RwV3d* normal, float32* distance);

// 
// Start address: 0x1d8f10
int32 RtIntersectionBBoxTriangle(RwBBox* bbox, RwV3d* v0, RwV3d* v1, RwV3d* v2)
{
	int32 v0Test;
	int32 v1Test;
	int32 v2Test;
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
	RwV3d norm;
	float32 det;
	float32 dist;
	float32 u;
	float32 v;
	float32 u;
	float32 v;
	// Line 509, Address: 0x1d8f10, Func Offset: 0
	// Line 515, Address: 0x1d8f24, Func Offset: 0x14
	// Line 517, Address: 0x1d8fcc, Func Offset: 0xbc
	// Line 519, Address: 0x1d906c, Func Offset: 0x15c
	// Line 525, Address: 0x1d910c, Func Offset: 0x1fc
	// Line 532, Address: 0x1d9118, Func Offset: 0x208
	// Line 533, Address: 0x1d9120, Func Offset: 0x210
	// Line 534, Address: 0x1d9234, Func Offset: 0x324
	// Line 535, Address: 0x1d9240, Func Offset: 0x330
	// Line 536, Address: 0x1d9354, Func Offset: 0x444
	// Line 537, Address: 0x1d9360, Func Offset: 0x450
	// Line 516, Address: 0x1d9470, Func Offset: 0x560
	// Line 518, Address: 0x1d9478, Func Offset: 0x568
	// Line 520, Address: 0x1d9480, Func Offset: 0x570
	// Line 526, Address: 0x1d9488, Func Offset: 0x578
	// Line 533, Address: 0x1d9490, Func Offset: 0x580
	// Line 537, Address: 0x1d949c, Func Offset: 0x58c
	// Line 533, Address: 0x1d94a4, Func Offset: 0x594
	// Line 537, Address: 0x1d94ac, Func Offset: 0x59c
	// Line 533, Address: 0x1d94b4, Func Offset: 0x5a4
	// Line 537, Address: 0x1d94bc, Func Offset: 0x5ac
	// Line 533, Address: 0x1d94c4, Func Offset: 0x5b4
	// Line 537, Address: 0x1d94d0, Func Offset: 0x5c0
	// Line 533, Address: 0x1d94d8, Func Offset: 0x5c8
	// Line 537, Address: 0x1d94dc, Func Offset: 0x5cc
	// Line 533, Address: 0x1d94e4, Func Offset: 0x5d4
	// Line 537, Address: 0x1d94f4, Func Offset: 0x5e4
	// Line 533, Address: 0x1d94fc, Func Offset: 0x5ec
	// Line 537, Address: 0x1d9500, Func Offset: 0x5f0
	// Line 533, Address: 0x1d9508, Func Offset: 0x5f8
	// Line 537, Address: 0x1d9514, Func Offset: 0x604
	// Line 533, Address: 0x1d951c, Func Offset: 0x60c
	// Line 537, Address: 0x1d9520, Func Offset: 0x610
	// Line 533, Address: 0x1d9528, Func Offset: 0x618
	// Line 537, Address: 0x1d953c, Func Offset: 0x62c
	// Line 533, Address: 0x1d9544, Func Offset: 0x634
	// Line 537, Address: 0x1d954c, Func Offset: 0x63c
	// Line 533, Address: 0x1d9554, Func Offset: 0x644
	// Line 537, Address: 0x1d955c, Func Offset: 0x64c
	// Line 533, Address: 0x1d9564, Func Offset: 0x654
	// Line 537, Address: 0x1d9570, Func Offset: 0x660
	// Line 533, Address: 0x1d9578, Func Offset: 0x668
	// Line 537, Address: 0x1d957c, Func Offset: 0x66c
	// Line 533, Address: 0x1d9584, Func Offset: 0x674
	// Line 537, Address: 0x1d9594, Func Offset: 0x684
	// Line 533, Address: 0x1d959c, Func Offset: 0x68c
	// Line 537, Address: 0x1d95a0, Func Offset: 0x690
	// Line 533, Address: 0x1d95a8, Func Offset: 0x698
	// Line 537, Address: 0x1d95b4, Func Offset: 0x6a4
	// Line 533, Address: 0x1d95bc, Func Offset: 0x6ac
	// Line 537, Address: 0x1d95c0, Func Offset: 0x6b0
	// Line 533, Address: 0x1d95c8, Func Offset: 0x6b8
	// Line 537, Address: 0x1d95dc, Func Offset: 0x6cc
	// Line 533, Address: 0x1d95e4, Func Offset: 0x6d4
	// Line 537, Address: 0x1d95ec, Func Offset: 0x6dc
	// Line 533, Address: 0x1d95f4, Func Offset: 0x6e4
	// Line 537, Address: 0x1d95fc, Func Offset: 0x6ec
	// Line 533, Address: 0x1d9604, Func Offset: 0x6f4
	// Line 537, Address: 0x1d9610, Func Offset: 0x700
	// Line 533, Address: 0x1d9618, Func Offset: 0x708
	// Line 537, Address: 0x1d961c, Func Offset: 0x70c
	// Line 533, Address: 0x1d9624, Func Offset: 0x714
	// Line 537, Address: 0x1d9634, Func Offset: 0x724
	// Line 533, Address: 0x1d963c, Func Offset: 0x72c
	// Line 537, Address: 0x1d9640, Func Offset: 0x730
	// Line 533, Address: 0x1d9648, Func Offset: 0x738
	// Line 537, Address: 0x1d9654, Func Offset: 0x744
	// Line 533, Address: 0x1d965c, Func Offset: 0x74c
	// Line 537, Address: 0x1d9660, Func Offset: 0x750
	// Line 533, Address: 0x1d9668, Func Offset: 0x758
	// Line 537, Address: 0x1d967c, Func Offset: 0x76c
	// Line 533, Address: 0x1d9684, Func Offset: 0x774
	// Line 537, Address: 0x1d968c, Func Offset: 0x77c
	// Line 533, Address: 0x1d9694, Func Offset: 0x784
	// Line 537, Address: 0x1d969c, Func Offset: 0x78c
	// Line 533, Address: 0x1d96a4, Func Offset: 0x794
	// Line 537, Address: 0x1d96b0, Func Offset: 0x7a0
	// Line 533, Address: 0x1d96b8, Func Offset: 0x7a8
	// Line 537, Address: 0x1d96bc, Func Offset: 0x7ac
	// Line 533, Address: 0x1d96c4, Func Offset: 0x7b4
	// Line 537, Address: 0x1d96d4, Func Offset: 0x7c4
	// Line 533, Address: 0x1d96dc, Func Offset: 0x7cc
	// Line 537, Address: 0x1d96e0, Func Offset: 0x7d0
	// Line 533, Address: 0x1d96e8, Func Offset: 0x7d8
	// Line 537, Address: 0x1d96f4, Func Offset: 0x7e4
	// Line 533, Address: 0x1d96fc, Func Offset: 0x7ec
	// Line 537, Address: 0x1d9700, Func Offset: 0x7f0
	// Line 533, Address: 0x1d9708, Func Offset: 0x7f8
	// Line 537, Address: 0x1d971c, Func Offset: 0x80c
	// Line 533, Address: 0x1d9724, Func Offset: 0x814
	// Line 537, Address: 0x1d972c, Func Offset: 0x81c
	// Line 533, Address: 0x1d9734, Func Offset: 0x824
	// Line 537, Address: 0x1d973c, Func Offset: 0x82c
	// Line 533, Address: 0x1d9744, Func Offset: 0x834
	// Line 537, Address: 0x1d974c, Func Offset: 0x83c
	// Line 533, Address: 0x1d9754, Func Offset: 0x844
	// Line 537, Address: 0x1d9758, Func Offset: 0x848
	// Line 533, Address: 0x1d9760, Func Offset: 0x850
	// Line 537, Address: 0x1d9770, Func Offset: 0x860
	// Line 533, Address: 0x1d9778, Func Offset: 0x868
	// Line 537, Address: 0x1d977c, Func Offset: 0x86c
	// Line 533, Address: 0x1d9784, Func Offset: 0x874
	// Line 537, Address: 0x1d9790, Func Offset: 0x880
	// Line 533, Address: 0x1d9798, Func Offset: 0x888
	// Line 537, Address: 0x1d97a0, Func Offset: 0x890
	// Line 533, Address: 0x1d97a8, Func Offset: 0x898
	// Line 535, Address: 0x1d97b0, Func Offset: 0x8a0
	// Line 537, Address: 0x1d97bc, Func Offset: 0x8ac
	// Line 535, Address: 0x1d97c4, Func Offset: 0x8b4
	// Line 537, Address: 0x1d97cc, Func Offset: 0x8bc
	// Line 535, Address: 0x1d97d4, Func Offset: 0x8c4
	// Line 537, Address: 0x1d97dc, Func Offset: 0x8cc
	// Line 535, Address: 0x1d97e4, Func Offset: 0x8d4
	// Line 537, Address: 0x1d97f0, Func Offset: 0x8e0
	// Line 535, Address: 0x1d97f8, Func Offset: 0x8e8
	// Line 537, Address: 0x1d97fc, Func Offset: 0x8ec
	// Line 535, Address: 0x1d9804, Func Offset: 0x8f4
	// Line 537, Address: 0x1d9814, Func Offset: 0x904
	// Line 535, Address: 0x1d981c, Func Offset: 0x90c
	// Line 537, Address: 0x1d9820, Func Offset: 0x910
	// Line 535, Address: 0x1d9828, Func Offset: 0x918
	// Line 537, Address: 0x1d9834, Func Offset: 0x924
	// Line 535, Address: 0x1d983c, Func Offset: 0x92c
	// Line 537, Address: 0x1d9840, Func Offset: 0x930
	// Line 535, Address: 0x1d9848, Func Offset: 0x938
	// Line 537, Address: 0x1d985c, Func Offset: 0x94c
	// Line 535, Address: 0x1d9864, Func Offset: 0x954
	// Line 537, Address: 0x1d986c, Func Offset: 0x95c
	// Line 535, Address: 0x1d9874, Func Offset: 0x964
	// Line 537, Address: 0x1d987c, Func Offset: 0x96c
	// Line 535, Address: 0x1d9884, Func Offset: 0x974
	// Line 537, Address: 0x1d9890, Func Offset: 0x980
	// Line 535, Address: 0x1d9898, Func Offset: 0x988
	// Line 537, Address: 0x1d989c, Func Offset: 0x98c
	// Line 535, Address: 0x1d98a4, Func Offset: 0x994
	// Line 537, Address: 0x1d98b4, Func Offset: 0x9a4
	// Line 535, Address: 0x1d98bc, Func Offset: 0x9ac
	// Line 537, Address: 0x1d98c0, Func Offset: 0x9b0
	// Line 535, Address: 0x1d98c8, Func Offset: 0x9b8
	// Line 537, Address: 0x1d98d4, Func Offset: 0x9c4
	// Line 535, Address: 0x1d98dc, Func Offset: 0x9cc
	// Line 537, Address: 0x1d98e0, Func Offset: 0x9d0
	// Line 535, Address: 0x1d98e8, Func Offset: 0x9d8
	// Line 537, Address: 0x1d98fc, Func Offset: 0x9ec
	// Line 535, Address: 0x1d9904, Func Offset: 0x9f4
	// Line 537, Address: 0x1d990c, Func Offset: 0x9fc
	// Line 535, Address: 0x1d9914, Func Offset: 0xa04
	// Line 537, Address: 0x1d991c, Func Offset: 0xa0c
	// Line 535, Address: 0x1d9924, Func Offset: 0xa14
	// Line 537, Address: 0x1d9930, Func Offset: 0xa20
	// Line 535, Address: 0x1d9938, Func Offset: 0xa28
	// Line 537, Address: 0x1d993c, Func Offset: 0xa2c
	// Line 535, Address: 0x1d9944, Func Offset: 0xa34
	// Line 537, Address: 0x1d9954, Func Offset: 0xa44
	// Line 535, Address: 0x1d995c, Func Offset: 0xa4c
	// Line 537, Address: 0x1d9960, Func Offset: 0xa50
	// Line 535, Address: 0x1d9968, Func Offset: 0xa58
	// Line 537, Address: 0x1d9974, Func Offset: 0xa64
	// Line 535, Address: 0x1d997c, Func Offset: 0xa6c
	// Line 537, Address: 0x1d9980, Func Offset: 0xa70
	// Line 535, Address: 0x1d9988, Func Offset: 0xa78
	// Line 537, Address: 0x1d999c, Func Offset: 0xa8c
	// Line 535, Address: 0x1d99a4, Func Offset: 0xa94
	// Line 537, Address: 0x1d99ac, Func Offset: 0xa9c
	// Line 535, Address: 0x1d99b4, Func Offset: 0xaa4
	// Line 537, Address: 0x1d99bc, Func Offset: 0xaac
	// Line 535, Address: 0x1d99c4, Func Offset: 0xab4
	// Line 537, Address: 0x1d99d0, Func Offset: 0xac0
	// Line 535, Address: 0x1d99d8, Func Offset: 0xac8
	// Line 537, Address: 0x1d99dc, Func Offset: 0xacc
	// Line 535, Address: 0x1d99e4, Func Offset: 0xad4
	// Line 537, Address: 0x1d99f4, Func Offset: 0xae4
	// Line 535, Address: 0x1d99fc, Func Offset: 0xaec
	// Line 537, Address: 0x1d9a00, Func Offset: 0xaf0
	// Line 535, Address: 0x1d9a08, Func Offset: 0xaf8
	// Line 537, Address: 0x1d9a14, Func Offset: 0xb04
	// Line 535, Address: 0x1d9a1c, Func Offset: 0xb0c
	// Line 537, Address: 0x1d9a20, Func Offset: 0xb10
	// Line 535, Address: 0x1d9a28, Func Offset: 0xb18
	// Line 537, Address: 0x1d9a3c, Func Offset: 0xb2c
	// Line 535, Address: 0x1d9a44, Func Offset: 0xb34
	// Line 537, Address: 0x1d9a4c, Func Offset: 0xb3c
	// Line 535, Address: 0x1d9a54, Func Offset: 0xb44
	// Line 537, Address: 0x1d9a5c, Func Offset: 0xb4c
	// Line 535, Address: 0x1d9a64, Func Offset: 0xb54
	// Line 537, Address: 0x1d9a6c, Func Offset: 0xb5c
	// Line 535, Address: 0x1d9a74, Func Offset: 0xb64
	// Line 537, Address: 0x1d9a78, Func Offset: 0xb68
	// Line 535, Address: 0x1d9a80, Func Offset: 0xb70
	// Line 537, Address: 0x1d9a90, Func Offset: 0xb80
	// Line 535, Address: 0x1d9a98, Func Offset: 0xb88
	// Line 537, Address: 0x1d9a9c, Func Offset: 0xb8c
	// Line 535, Address: 0x1d9aa4, Func Offset: 0xb94
	// Line 537, Address: 0x1d9ab0, Func Offset: 0xba0
	// Line 535, Address: 0x1d9ab8, Func Offset: 0xba8
	// Line 537, Address: 0x1d9ac0, Func Offset: 0xbb0
	// Line 535, Address: 0x1d9ac8, Func Offset: 0xbb8
	// Line 537, Address: 0x1d9ad0, Func Offset: 0xbc0
	// Line 548, Address: 0x1d9df0, Func Offset: 0xee0
	// Line 550, Address: 0x1d9df4, Func Offset: 0xee4
	// Line 549, Address: 0x1d9dfc, Func Offset: 0xeec
	// Line 548, Address: 0x1d9e00, Func Offset: 0xef0
	// Line 549, Address: 0x1d9e04, Func Offset: 0xef4
	// Line 548, Address: 0x1d9e08, Func Offset: 0xef8
	// Line 550, Address: 0x1d9e0c, Func Offset: 0xefc
	// Line 549, Address: 0x1d9e14, Func Offset: 0xf04
	// Line 550, Address: 0x1d9e18, Func Offset: 0xf08
	// Line 558, Address: 0x1d9e20, Func Offset: 0xf10
	// Line 550, Address: 0x1d9e24, Func Offset: 0xf14
	// Line 560, Address: 0x1d9e30, Func Offset: 0xf20
	// Line 550, Address: 0x1d9e34, Func Offset: 0xf24
	// Line 557, Address: 0x1d9e40, Func Offset: 0xf30
	// Line 558, Address: 0x1d9e44, Func Offset: 0xf34
	// Line 560, Address: 0x1d9e48, Func Offset: 0xf38
	// Line 557, Address: 0x1d9e4c, Func Offset: 0xf3c
	// Line 560, Address: 0x1d9e50, Func Offset: 0xf40
	// Line 567, Address: 0x1d9e5c, Func Offset: 0xf4c
	// Line 568, Address: 0x1d9e60, Func Offset: 0xf50
	// Line 567, Address: 0x1d9e64, Func Offset: 0xf54
	// Line 568, Address: 0x1d9e68, Func Offset: 0xf58
	// Line 571, Address: 0x1d9e6c, Func Offset: 0xf5c
	// Line 579, Address: 0x1d9e7c, Func Offset: 0xf6c
	// Line 571, Address: 0x1d9e80, Func Offset: 0xf70
	// Line 578, Address: 0x1d9e84, Func Offset: 0xf74
	// Line 579, Address: 0x1d9e88, Func Offset: 0xf78
	// Line 578, Address: 0x1d9e8c, Func Offset: 0xf7c
	// Line 579, Address: 0x1d9e90, Func Offset: 0xf80
	// Line 587, Address: 0x1d9e9c, Func Offset: 0xf8c
	// Line 588, Address: 0x1d9eb0, Func Offset: 0xfa0
	// Line 590, Address: 0x1d9eb8, Func Offset: 0xfa8
	// Line 593, Address: 0x1d9ec4, Func Offset: 0xfb4
	// Line 599, Address: 0x1d9edc, Func Offset: 0xfcc
	// Line 600, Address: 0x1d9efc, Func Offset: 0xfec
	// Line 599, Address: 0x1d9f00, Func Offset: 0xff0
	// Line 600, Address: 0x1d9f04, Func Offset: 0xff4
	// Line 601, Address: 0x1d9f14, Func Offset: 0x1004
	// Line 603, Address: 0x1d9f2c, Func Offset: 0x101c
	// Line 604, Address: 0x1d9f40, Func Offset: 0x1030
	// Line 605, Address: 0x1d9f5c, Func Offset: 0x104c
	// Line 612, Address: 0x1d9f64, Func Offset: 0x1054
	// Line 617, Address: 0x1d9f7c, Func Offset: 0x106c
	// Line 618, Address: 0x1d9f9c, Func Offset: 0x108c
	// Line 617, Address: 0x1d9fa0, Func Offset: 0x1090
	// Line 618, Address: 0x1d9fa4, Func Offset: 0x1094
	// Line 619, Address: 0x1d9fb4, Func Offset: 0x10a4
	// Line 621, Address: 0x1d9fcc, Func Offset: 0x10bc
	// Line 622, Address: 0x1d9fe0, Func Offset: 0x10d0
	// Line 623, Address: 0x1d9ffc, Func Offset: 0x10ec
	// Line 630, Address: 0x1da004, Func Offset: 0x10f4
	// Line 562, Address: 0x1da01c, Func Offset: 0x110c
	// Line 564, Address: 0x1da020, Func Offset: 0x1110
	// Line 630, Address: 0x1da028, Func Offset: 0x1118
	// Line 574, Address: 0x1da034, Func Offset: 0x1124
	// Line 575, Address: 0x1da038, Func Offset: 0x1128
	// Line 631, Address: 0x1da040, Func Offset: 0x1130
	// Func End, Address: 0x1da054, Func Offset: 0x1144
}

// 
// Start address: 0x1da060
int32 RtIntersectionSphereTriangle(RwSphere* sphere, RwV3d* v0, RwV3d* v1, RwV3d* v2, RwV3d* normal, float32* distance)
{
	float32 nDotN;
	float32 distToPlane;
	float32 sphereRadiusSquared;
	float32 factor;
	float32 x0;
	float32 x1;
	float32 x2;
	float32 y0;
	float32 y1;
	float32 y2;
	float32 z0;
	float32 z1;
	float32 z2;
	float32 rad;
	// Line 188, Address: 0x1da060, Func Offset: 0
	// Line 216, Address: 0x1da064, Func Offset: 0x4
	// Line 217, Address: 0x1da06c, Func Offset: 0xc
	// Line 188, Address: 0x1da074, Func Offset: 0x14
	// Line 216, Address: 0x1da078, Func Offset: 0x18
	// Line 188, Address: 0x1da07c, Func Offset: 0x1c
	// Line 217, Address: 0x1da080, Func Offset: 0x20
	// Line 220, Address: 0x1da08c, Func Offset: 0x2c
	// Line 221, Address: 0x1da09c, Func Offset: 0x3c
	// Line 222, Address: 0x1da0ac, Func Offset: 0x4c
	// Line 224, Address: 0x1da0c0, Func Offset: 0x60
	// Line 227, Address: 0x1da0d4, Func Offset: 0x74
	// Line 228, Address: 0x1da0e4, Func Offset: 0x84
	// Line 229, Address: 0x1da0f0, Func Offset: 0x90
	// Line 231, Address: 0x1da104, Func Offset: 0xa4
	// Line 234, Address: 0x1da118, Func Offset: 0xb8
	// Line 235, Address: 0x1da128, Func Offset: 0xc8
	// Line 236, Address: 0x1da134, Func Offset: 0xd4
	// Line 264, Address: 0x1da140, Func Offset: 0xe0
	// Line 263, Address: 0x1da144, Func Offset: 0xe4
	// Line 264, Address: 0x1da14c, Func Offset: 0xec
	// Line 265, Address: 0x1da154, Func Offset: 0xf4
	// Line 263, Address: 0x1da15c, Func Offset: 0xfc
	// Line 265, Address: 0x1da160, Func Offset: 0x100
	// Line 268, Address: 0x1da19c, Func Offset: 0x13c
	// Line 275, Address: 0x1da1a8, Func Offset: 0x148
	// Line 276, Address: 0x1da1e0, Func Offset: 0x180
	// Line 279, Address: 0x1da1e4, Func Offset: 0x184
	// Line 276, Address: 0x1da1ec, Func Offset: 0x18c
	// Line 282, Address: 0x1da1f8, Func Offset: 0x198
	// Line 276, Address: 0x1da1fc, Func Offset: 0x19c
	// Line 279, Address: 0x1da210, Func Offset: 0x1b0
	// Line 282, Address: 0x1da224, Func Offset: 0x1c4
	// Line 290, Address: 0x1da23c, Func Offset: 0x1dc
	// Line 296, Address: 0x1da244, Func Offset: 0x1e4
	// Line 297, Address: 0x1da258, Func Offset: 0x1f8
	// Line 302, Address: 0x1da264, Func Offset: 0x204
	// Line 303, Address: 0x1da278, Func Offset: 0x218
	// Line 308, Address: 0x1da284, Func Offset: 0x224
	// Line 309, Address: 0x1da298, Func Offset: 0x238
	// Line 315, Address: 0x1da2a4, Func Offset: 0x244
	// Line 317, Address: 0x1da2b0, Func Offset: 0x250
	// Line 320, Address: 0x1da2bc, Func Offset: 0x25c
	// Line 323, Address: 0x1da2fc, Func Offset: 0x29c
	// Line 329, Address: 0x1da304, Func Offset: 0x2a4
	// Line 332, Address: 0x1da340, Func Offset: 0x2e0
	// Line 338, Address: 0x1da348, Func Offset: 0x2e8
	// Line 341, Address: 0x1da354, Func Offset: 0x2f4
	// Line 344, Address: 0x1da390, Func Offset: 0x330
	// Line 350, Address: 0x1da398, Func Offset: 0x338
	// Line 353, Address: 0x1da3d4, Func Offset: 0x374
	// Line 359, Address: 0x1da3dc, Func Offset: 0x37c
	// Line 360, Address: 0x1da3e4, Func Offset: 0x384
	// Line 359, Address: 0x1da3e8, Func Offset: 0x388
	// Line 360, Address: 0x1da3ec, Func Offset: 0x38c
	// Line 364, Address: 0x1da40c, Func Offset: 0x3ac
	// Line 366, Address: 0x1da424, Func Offset: 0x3c4
	// Line 368, Address: 0x1da430, Func Offset: 0x3d0
	// Line 372, Address: 0x1da45c, Func Offset: 0x3fc
	// Line 376, Address: 0x1da464, Func Offset: 0x404
	// Line 378, Address: 0x1da468, Func Offset: 0x408
	// Line 376, Address: 0x1da46c, Func Offset: 0x40c
	// Line 378, Address: 0x1da470, Func Offset: 0x410
	// Line 382, Address: 0x1da490, Func Offset: 0x430
	// Line 384, Address: 0x1da4a8, Func Offset: 0x448
	// Line 386, Address: 0x1da4b4, Func Offset: 0x454
	// Line 390, Address: 0x1da4e0, Func Offset: 0x480
	// Line 394, Address: 0x1da4e8, Func Offset: 0x488
	// Line 395, Address: 0x1da4f0, Func Offset: 0x490
	// Line 394, Address: 0x1da4f4, Func Offset: 0x494
	// Line 395, Address: 0x1da4f8, Func Offset: 0x498
	// Line 399, Address: 0x1da518, Func Offset: 0x4b8
	// Line 401, Address: 0x1da530, Func Offset: 0x4d0
	// Line 403, Address: 0x1da53c, Func Offset: 0x4dc
	// Line 407, Address: 0x1da568, Func Offset: 0x508
	// Line 221, Address: 0x1da570, Func Offset: 0x510
	// Line 222, Address: 0x1da578, Func Offset: 0x518
	// Line 228, Address: 0x1da580, Func Offset: 0x520
	// Line 229, Address: 0x1da588, Func Offset: 0x528
	// Line 235, Address: 0x1da590, Func Offset: 0x530
	// Line 236, Address: 0x1da598, Func Offset: 0x538
	// Line 271, Address: 0x1da5a0, Func Offset: 0x540
	// Line 285, Address: 0x1da5a8, Func Offset: 0x548
	// Line 300, Address: 0x1da5b0, Func Offset: 0x550
	// Line 306, Address: 0x1da5b8, Func Offset: 0x558
	// Line 312, Address: 0x1da5c0, Func Offset: 0x560
	// Line 411, Address: 0x1da5c8, Func Offset: 0x568
	// Line 412, Address: 0x1da5cc, Func Offset: 0x56c
	// Func End, Address: 0x1da5dc, Func Offset: 0x57c
}

