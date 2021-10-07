typedef struct RwRaster;
typedef struct quadword_data;
typedef struct RwMatrixTag;
typedef struct iWaterTile;
typedef struct RwV3d;


typedef float32 type_0[4];
typedef int32 type_1[4];
typedef ulong32 type_2[2];

struct RwRaster
{
	RwRaster* parent;
	uint8* cpPixels;
	uint8* palette;
	int32 width;
	int32 height;
	int32 depth;
	int32 stride;
	int16 nOffsetX;
	int16 nOffsetY;
	uint8 cType;
	uint8 cFlags;
	uint8 privateFlags;
	uint8 cFormat;
	uint8* originalPixels;
	int32 originalWidth;
	int32 originalHeight;
	int32 originalStride;
};

struct quadword_data
{
	union
	{
		float32 f32[4];
		int32 i32[4];
		ulong32 u64[2];
		<unknown fundamental type (0xa510)> u128;
	};
};

struct RwMatrixTag
{
	RwV3d right;
	uint32 flags;
	RwV3d up;
	uint32 pad1;
	RwV3d at;
	uint32 pad2;
	RwV3d pos;
	uint32 pad3;
};

struct iWaterTile
{
	float32 x;
	int32 flags;
	float32 z;
	int32 width;
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

int32 reflect_alpha;
uint8 skyTransType;
<unknown fundamental type (0xa510)>* _rwDMAPktPtr;
<unknown fundamental type (0xa510)> vu1DataOffset3D;
<unknown fundamental type (0xa510)> vu1DataXYZShift;
<unknown fundamental type (0xa510)> vu1DataXYZScale;
<unknown fundamental type (0xa510)> xMaxYMax128;
long32 skyFogcol;
long32 skyClamp_1;
long32 skyTex1_1;
long32 skyZbuf_1;
<unknown fundamental type (0xa510)> gifTag128;
long32 skyPrim_State;
uint32 skyUserSwitch1;
uint32 skyUserSwitch2;
<unknown fundamental type (0xa510)> skyClipVect2;
<unknown fundamental type (0xa510)> skyClipVect1;
<unknown fundamental type (0xa510)> skyCClipVect2;
<unknown fundamental type (0xa510)> skyCClipVect1;
int32 skyTSClipperMode;
void* skyUploadedCode;
ulong32 VCL_HIWaterTilePER;
RwRaster* skyTextureRaster;
long32 skyTest_1;
int32 skyRasterExt;
int32 skyAlphaTex;

void rwPDS_VCL_HIWaterTile_RenderTiles(RwMatrixTag& view_mat, RwMatrixTag& shade_cam_mat, RwMatrixTag& shade_view_mat, iWaterTile* tiles, int32 tiles_size, float32 y, float32 dxz, float32 lod_blend_dist_min, float32 lod_blend_dist_max, int32 min_alpha_write, RwRaster* raster_refract, RwRaster* raster_reflect);
int32 myopenVU1SetupPktNew(RwMatrixTag* matrix);
int32 myRpPDS_G3_DupUva_PS2AllMatBridgeCallBack(RwRaster* raster_refract, RwRaster* raster_reflect, uint8 transType, int32 min_alpha_write);
void myRpMeshPS2AllGIFTagUpload();
void myRpMeshPS2AllClipInfoUpload(uint8 transType);
void myRpMeshPS2AllTextureStateUpload();
void myRpMeshPS2AllVU1CodeUpload();
void my_rpMatFXSkyUploadTextures(RwRaster* raster_1, RwRaster* raster_2, ulong32& _tex0_1, ulong32& _tex0_2, long32& _tex1_1, ulong32& _tex1_2, long32& _clamp_1, ulong32& _clamp_2);
void my_rpMatFXSkySetDefaultBlendModes();
void rwPDS_VCL_HIWaterTile_SetupShading(float32 color_mul_red, float32 color_mul_green, float32 color_mul_blue, RwV3d& light_dir, float32 light_ambient, float32 light_diffuse, float32 light_transmissive, float32 reflectance_min, float32 reflect_intensity, float32 reflect_magnitude, float32 refract_min);
int32 RpPDS_HIWaterTile_PS2AllMatBridgeCallBack(RwV3d& loc, RwRaster* raster_refract, RwRaster* raster_reflect, uint8 transType, RwMatrixTag& shade_cam_mat, RwMatrixTag& shade_view_mat, int32 batch_length, float32 dxz, float32 lod_blend_dist_min, float32 lod_blend_dist_max, int32 min_alpha_write);
void upload_tiles(iWaterTile* tiles, int32 tiles_size);
void rwPDS_VCL_HIWaterTile_UploadMesh(float32* Ay, float32* By, float32* Nx, float32* Ny, float32* Nz, int32 subdiv_level);

// rwPDS_VCL_HIWaterTile_RenderTiles__FRC11RwMatrixTagRC11RwMatrixTagRC11RwMatrixTagPC10iWaterTileiffffiP8RwRasterP8RwRaster
// Start address: 0x2b1240
void rwPDS_VCL_HIWaterTile_RenderTiles(RwMatrixTag& view_mat, RwMatrixTag& shade_cam_mat, RwMatrixTag& shade_view_mat, iWaterTile* tiles, int32 tiles_size, float32 y, float32 dxz, float32 lod_blend_dist_min, float32 lod_blend_dist_max, int32 min_alpha_write, RwRaster* raster_refract, RwRaster* raster_reflect)
{
	RwV3d loc;
	RwMatrixTag screen_mat;
	RwMatrixTag trans_mat;
	uint8 transType;
	// Line 1047, Address: 0x2b1240, Func Offset: 0
	// Line 1050, Address: 0x2b1244, Func Offset: 0x4
	// Line 1047, Address: 0x2b1248, Func Offset: 0x8
	// Line 1050, Address: 0x2b124c, Func Offset: 0xc
	// Line 1047, Address: 0x2b1250, Func Offset: 0x10
	// Line 1050, Address: 0x2b12a4, Func Offset: 0x64
	// Line 1053, Address: 0x2b12c8, Func Offset: 0x88
	// Line 1050, Address: 0x2b12cc, Func Offset: 0x8c
	// Line 1053, Address: 0x2b12d0, Func Offset: 0x90
	// Line 1050, Address: 0x2b12d4, Func Offset: 0x94
	// Line 1053, Address: 0x2b12d8, Func Offset: 0x98
	// Line 1054, Address: 0x2b12e4, Func Offset: 0xa4
	// Line 1053, Address: 0x2b12e8, Func Offset: 0xa8
	// Line 1054, Address: 0x2b12ec, Func Offset: 0xac
	// Line 1055, Address: 0x2b12f4, Func Offset: 0xb4
	// Line 1053, Address: 0x2b12f8, Func Offset: 0xb8
	// Line 1055, Address: 0x2b1308, Func Offset: 0xc8
	// Line 1054, Address: 0x2b1310, Func Offset: 0xd0
	// Line 1053, Address: 0x2b1314, Func Offset: 0xd4
	// Line 1054, Address: 0x2b1324, Func Offset: 0xe4
	// Line 1053, Address: 0x2b1328, Func Offset: 0xe8
	// Line 1055, Address: 0x2b1334, Func Offset: 0xf4
	// Line 1059, Address: 0x2b133c, Func Offset: 0xfc
	// Line 1063, Address: 0x2b1340, Func Offset: 0x100
	// Line 1065, Address: 0x2b1348, Func Offset: 0x108
	// Line 1067, Address: 0x2b1358, Func Offset: 0x118
	// Line 1070, Address: 0x2b1368, Func Offset: 0x128
	// Line 1076, Address: 0x2b1374, Func Offset: 0x134
	// Line 1080, Address: 0x2b13a4, Func Offset: 0x164
	// Line 1081, Address: 0x2b13a8, Func Offset: 0x168
	// Line 1082, Address: 0x2b13ac, Func Offset: 0x16c
	// Line 1094, Address: 0x2b13b4, Func Offset: 0x174
	// Func End, Address: 0x2b13f0, Func Offset: 0x1b0
}

// myopenVU1SetupPktNew__FPC11RwMatrixTag
// Start address: 0x2b13f0
int32 myopenVU1SetupPktNew(RwMatrixTag* matrix)
{
	ulong32 tmp;
	ulong32 tmp1;
	uint32* matVector;
	// Line 867, Address: 0x2b13f0, Func Offset: 0
	// Line 890, Address: 0x2b13f4, Func Offset: 0x4
	// Line 867, Address: 0x2b13f8, Func Offset: 0x8
	// Line 890, Address: 0x2b1404, Func Offset: 0x14
	// Line 897, Address: 0x2b140c, Func Offset: 0x1c
	// Line 929, Address: 0x2b1410, Func Offset: 0x20
	// Line 898, Address: 0x2b1414, Func Offset: 0x24
	// Line 897, Address: 0x2b1418, Func Offset: 0x28
	// Line 898, Address: 0x2b141c, Func Offset: 0x2c
	// Line 909, Address: 0x2b1424, Func Offset: 0x34
	// Line 910, Address: 0x2b1428, Func Offset: 0x38
	// Line 923, Address: 0x2b1430, Func Offset: 0x40
	// Line 914, Address: 0x2b1438, Func Offset: 0x48
	// Line 923, Address: 0x2b143c, Func Offset: 0x4c
	// Line 914, Address: 0x2b1440, Func Offset: 0x50
	// Line 929, Address: 0x2b1444, Func Offset: 0x54
	// Line 899, Address: 0x2b144c, Func Offset: 0x5c
	// Line 914, Address: 0x2b1450, Func Offset: 0x60
	// Line 911, Address: 0x2b1454, Func Offset: 0x64
	// Line 914, Address: 0x2b1458, Func Offset: 0x68
	// Line 923, Address: 0x2b145c, Func Offset: 0x6c
	// Line 929, Address: 0x2b1460, Func Offset: 0x70
	// Line 924, Address: 0x2b1464, Func Offset: 0x74
	// Line 935, Address: 0x2b1468, Func Offset: 0x78
	// Line 923, Address: 0x2b146c, Func Offset: 0x7c
	// Line 924, Address: 0x2b1470, Func Offset: 0x80
	// Line 929, Address: 0x2b1474, Func Offset: 0x84
	// Line 935, Address: 0x2b1478, Func Offset: 0x88
	// Line 925, Address: 0x2b147c, Func Offset: 0x8c
	// Line 935, Address: 0x2b1480, Func Offset: 0x90
	// Line 941, Address: 0x2b1484, Func Offset: 0x94
	// Line 914, Address: 0x2b1488, Func Offset: 0x98
	// Line 930, Address: 0x2b148c, Func Offset: 0x9c
	// Line 914, Address: 0x2b1490, Func Offset: 0xa0
	// Line 930, Address: 0x2b1494, Func Offset: 0xa4
	// Line 918, Address: 0x2b1498, Func Offset: 0xa8
	// Line 935, Address: 0x2b149c, Func Offset: 0xac
	// Line 952, Address: 0x2b14a0, Func Offset: 0xb0
	// Line 931, Address: 0x2b14a4, Func Offset: 0xb4
	// Line 941, Address: 0x2b14a8, Func Offset: 0xb8
	// Line 935, Address: 0x2b14ac, Func Offset: 0xbc
	// Line 961, Address: 0x2b14b0, Func Offset: 0xc0
	// Line 941, Address: 0x2b14b4, Func Offset: 0xc4
	// Line 918, Address: 0x2b14bc, Func Offset: 0xcc
	// Line 919, Address: 0x2b14c0, Func Offset: 0xd0
	// Line 965, Address: 0x2b14c4, Func Offset: 0xd4
	// Line 926, Address: 0x2b14c8, Func Offset: 0xd8
	// Line 965, Address: 0x2b14cc, Func Offset: 0xdc
	// Line 941, Address: 0x2b14d0, Func Offset: 0xe0
	// Line 932, Address: 0x2b14d4, Func Offset: 0xe4
	// Line 965, Address: 0x2b14d8, Func Offset: 0xe8
	// Line 936, Address: 0x2b14dc, Func Offset: 0xec
	// Line 965, Address: 0x2b14e0, Func Offset: 0xf0
	// Line 936, Address: 0x2b14e4, Func Offset: 0xf4
	// Line 965, Address: 0x2b14e8, Func Offset: 0xf8
	// Line 955, Address: 0x2b14ec, Func Offset: 0xfc
	// Line 942, Address: 0x2b14f0, Func Offset: 0x100
	// Line 958, Address: 0x2b14f4, Func Offset: 0x104
	// Line 942, Address: 0x2b14f8, Func Offset: 0x108
	// Line 937, Address: 0x2b14fc, Func Offset: 0x10c
	// Line 938, Address: 0x2b1500, Func Offset: 0x110
	// Line 943, Address: 0x2b1504, Func Offset: 0x114
	// Line 944, Address: 0x2b1508, Func Offset: 0x118
	// Line 966, Address: 0x2b150c, Func Offset: 0x11c
	// Line 952, Address: 0x2b1510, Func Offset: 0x120
	// Line 966, Address: 0x2b1514, Func Offset: 0x124
	// Line 969, Address: 0x2b1518, Func Offset: 0x128
	// Line 952, Address: 0x2b151c, Func Offset: 0x12c
	// Line 971, Address: 0x2b1520, Func Offset: 0x130
	// Line 955, Address: 0x2b1524, Func Offset: 0x134
	// Line 958, Address: 0x2b152c, Func Offset: 0x13c
	// Line 961, Address: 0x2b1534, Func Offset: 0x144
	// Line 967, Address: 0x2b153c, Func Offset: 0x14c
	// Line 969, Address: 0x2b1540, Func Offset: 0x150
	// Line 972, Address: 0x2b1544, Func Offset: 0x154
	// Func End, Address: 0x2b1554, Func Offset: 0x164
}

// myRpPDS_G3_DupUva_PS2AllMatBridgeCallBack__FP8RwRasterP8RwRasterUci
// Start address: 0x2b1560
int32 myRpPDS_G3_DupUva_PS2AllMatBridgeCallBack(RwRaster* raster_refract, RwRaster* raster_reflect, uint8 transType, int32 min_alpha_write)
{
	ulong32 clamp_2;
	ulong32 fogcol_2;
	ulong32 tex1_2;
	ulong32 zbuf_2;
	ulong32 rastex1;
	ulong32 rastex2;
	ulong32 tmp;
	ulong32 tmp1;
	// Line 680, Address: 0x2b1560, Func Offset: 0
	// Line 705, Address: 0x2b1564, Func Offset: 0x4
	// Line 680, Address: 0x2b1568, Func Offset: 0x8
	// Line 705, Address: 0x2b156c, Func Offset: 0xc
	// Line 680, Address: 0x2b1570, Func Offset: 0x10
	// Line 705, Address: 0x2b1574, Func Offset: 0x14
	// Line 680, Address: 0x2b1578, Func Offset: 0x18
	// Line 705, Address: 0x2b158c, Func Offset: 0x2c
	// Line 692, Address: 0x2b1590, Func Offset: 0x30
	// Line 705, Address: 0x2b1594, Func Offset: 0x34
	// Line 695, Address: 0x2b1598, Func Offset: 0x38
	// Line 705, Address: 0x2b159c, Func Offset: 0x3c
	// Line 691, Address: 0x2b15a0, Func Offset: 0x40
	// Line 694, Address: 0x2b15a4, Func Offset: 0x44
	// Line 701, Address: 0x2b15a8, Func Offset: 0x48
	// Line 705, Address: 0x2b15ac, Func Offset: 0x4c
	// Line 725, Address: 0x2b15b4, Func Offset: 0x54
	// Line 795, Address: 0x2b15c4, Func Offset: 0x64
	// Line 725, Address: 0x2b15c8, Func Offset: 0x68
	// Line 795, Address: 0x2b15d4, Func Offset: 0x74
	// Line 725, Address: 0x2b15d8, Func Offset: 0x78
	// Line 733, Address: 0x2b15e0, Func Offset: 0x80
	// Line 800, Address: 0x2b15e4, Func Offset: 0x84
	// Line 733, Address: 0x2b15e8, Func Offset: 0x88
	// Line 732, Address: 0x2b15ec, Func Offset: 0x8c
	// Line 733, Address: 0x2b15f0, Func Offset: 0x90
	// Line 771, Address: 0x2b15fc, Func Offset: 0x9c
	// Line 733, Address: 0x2b1600, Func Offset: 0xa0
	// Line 800, Address: 0x2b1604, Func Offset: 0xa4
	// Line 758, Address: 0x2b1608, Func Offset: 0xa8
	// Line 725, Address: 0x2b160c, Func Offset: 0xac
	// Line 758, Address: 0x2b1610, Func Offset: 0xb0
	// Line 762, Address: 0x2b1614, Func Offset: 0xb4
	// Line 758, Address: 0x2b1618, Func Offset: 0xb8
	// Line 774, Address: 0x2b161c, Func Offset: 0xbc
	// Line 736, Address: 0x2b1620, Func Offset: 0xc0
	// Line 737, Address: 0x2b1628, Func Offset: 0xc8
	// Line 762, Address: 0x2b162c, Func Offset: 0xcc
	// Line 763, Address: 0x2b1630, Func Offset: 0xd0
	// Line 771, Address: 0x2b1638, Func Offset: 0xd8
	// Line 772, Address: 0x2b163c, Func Offset: 0xdc
	// Line 776, Address: 0x2b1640, Func Offset: 0xe0
	// Line 774, Address: 0x2b1644, Func Offset: 0xe4
	// Line 805, Address: 0x2b1648, Func Offset: 0xe8
	// Line 795, Address: 0x2b164c, Func Offset: 0xec
	// Line 788, Address: 0x2b1650, Func Offset: 0xf0
	// Line 796, Address: 0x2b1654, Func Offset: 0xf4
	// Line 790, Address: 0x2b1658, Func Offset: 0xf8
	// Line 817, Address: 0x2b165c, Func Offset: 0xfc
	// Line 774, Address: 0x2b1668, Func Offset: 0x108
	// Line 775, Address: 0x2b166c, Func Offset: 0x10c
	// Line 808, Address: 0x2b1670, Func Offset: 0x110
	// Line 776, Address: 0x2b1674, Func Offset: 0x114
	// Line 810, Address: 0x2b1678, Func Offset: 0x118
	// Line 817, Address: 0x2b1684, Func Offset: 0x124
	// Line 776, Address: 0x2b1688, Func Offset: 0x128
	// Line 777, Address: 0x2b168c, Func Offset: 0x12c
	// Line 786, Address: 0x2b1690, Func Offset: 0x130
	// Line 788, Address: 0x2b1694, Func Offset: 0x134
	// Line 789, Address: 0x2b169c, Func Offset: 0x13c
	// Line 791, Address: 0x2b16a0, Func Offset: 0x140
	// Line 797, Address: 0x2b16a4, Func Offset: 0x144
	// Line 806, Address: 0x2b16a8, Func Offset: 0x148
	// Line 808, Address: 0x2b16ac, Func Offset: 0x14c
	// Line 809, Address: 0x2b16bc, Func Offset: 0x15c
	// Line 817, Address: 0x2b16c0, Func Offset: 0x160
	// Line 820, Address: 0x2b16e4, Func Offset: 0x184
	// Line 817, Address: 0x2b16e8, Func Offset: 0x188
	// Line 819, Address: 0x2b16f0, Func Offset: 0x190
	// Line 820, Address: 0x2b16f4, Func Offset: 0x194
	// Line 822, Address: 0x2b16f8, Func Offset: 0x198
	// Line 825, Address: 0x2b1700, Func Offset: 0x1a0
	// Line 820, Address: 0x2b1704, Func Offset: 0x1a4
	// Line 821, Address: 0x2b1708, Func Offset: 0x1a8
	// Line 823, Address: 0x2b170c, Func Offset: 0x1ac
	// Line 831, Address: 0x2b1710, Func Offset: 0x1b0
	// Line 834, Address: 0x2b1718, Func Offset: 0x1b8
	// Line 838, Address: 0x2b1720, Func Offset: 0x1c0
	// Line 841, Address: 0x2b1728, Func Offset: 0x1c8
	// Line 844, Address: 0x2b1730, Func Offset: 0x1d0
	// Line 845, Address: 0x2b1734, Func Offset: 0x1d4
	// Line 846, Address: 0x2b1738, Func Offset: 0x1d8
	// Line 850, Address: 0x2b1740, Func Offset: 0x1e0
	// Line 852, Address: 0x2b1744, Func Offset: 0x1e4
	// Line 856, Address: 0x2b1748, Func Offset: 0x1e8
	// Line 847, Address: 0x2b1750, Func Offset: 0x1f0
	// Line 853, Address: 0x2b1754, Func Offset: 0x1f4
	// Line 856, Address: 0x2b1760, Func Offset: 0x200
	// Line 859, Address: 0x2b1768, Func Offset: 0x208
	// Line 858, Address: 0x2b176c, Func Offset: 0x20c
	// Line 859, Address: 0x2b1770, Func Offset: 0x210
	// Func End, Address: 0x2b1788, Func Offset: 0x228
}

// myRpMeshPS2AllGIFTagUpload__Fv
// Start address: 0x2b1790
void myRpMeshPS2AllGIFTagUpload()
{
	ulong32 __tmp1;
	// Line 630, Address: 0x2b1790, Func Offset: 0
	// Line 649, Address: 0x2b1794, Func Offset: 0x4
	// Line 630, Address: 0x2b1798, Func Offset: 0x8
	// Line 636, Address: 0x2b179c, Func Offset: 0xc
	// Line 630, Address: 0x2b17a0, Func Offset: 0x10
	// Line 649, Address: 0x2b17a4, Func Offset: 0x14
	// Line 630, Address: 0x2b17a8, Func Offset: 0x18
	// Line 649, Address: 0x2b17b4, Func Offset: 0x24
	// Line 635, Address: 0x2b17b8, Func Offset: 0x28
	// Line 640, Address: 0x2b17bc, Func Offset: 0x2c
	// Line 635, Address: 0x2b17c0, Func Offset: 0x30
	// Line 636, Address: 0x2b17c4, Func Offset: 0x34
	// Line 649, Address: 0x2b17c8, Func Offset: 0x38
	// Line 636, Address: 0x2b17d8, Func Offset: 0x48
	// Line 649, Address: 0x2b17dc, Func Offset: 0x4c
	// Line 640, Address: 0x2b17e0, Func Offset: 0x50
	// Line 649, Address: 0x2b17e4, Func Offset: 0x54
	// Line 651, Address: 0x2b17ec, Func Offset: 0x5c
	// Line 652, Address: 0x2b17f4, Func Offset: 0x64
	// Line 649, Address: 0x2b17fc, Func Offset: 0x6c
	// Line 651, Address: 0x2b1800, Func Offset: 0x70
	// Line 636, Address: 0x2b1804, Func Offset: 0x74
	// Line 652, Address: 0x2b180c, Func Offset: 0x7c
	// Line 653, Address: 0x2b1810, Func Offset: 0x80
	// Line 640, Address: 0x2b1814, Func Offset: 0x84
	// Line 653, Address: 0x2b1818, Func Offset: 0x88
	// Line 640, Address: 0x2b181c, Func Offset: 0x8c
	// Line 655, Address: 0x2b1820, Func Offset: 0x90
	// Line 656, Address: 0x2b182c, Func Offset: 0x9c
	// Func End, Address: 0x2b1834, Func Offset: 0xa4
}

// myRpMeshPS2AllClipInfoUpload__FUc
// Start address: 0x2b1840
void myRpMeshPS2AllClipInfoUpload(uint8 transType)
{
	<unknown fundamental type (0xa510)>* _rwDMAPktPtr'73;
	ulong32 __tmp1;
	uint32 __skySwitchFlag;
	// Line 589, Address: 0x2b1840, Func Offset: 0
	// Line 592, Address: 0x2b1844, Func Offset: 0x4
	// Line 598, Address: 0x2b185c, Func Offset: 0x1c
	// Line 599, Address: 0x2b1868, Func Offset: 0x28
	// Line 602, Address: 0x2b186c, Func Offset: 0x2c
	// Line 606, Address: 0x2b1878, Func Offset: 0x38
	// Line 605, Address: 0x2b187c, Func Offset: 0x3c
	// Line 606, Address: 0x2b1880, Func Offset: 0x40
	// Line 607, Address: 0x2b1884, Func Offset: 0x44
	// Line 605, Address: 0x2b1888, Func Offset: 0x48
	// Line 606, Address: 0x2b188c, Func Offset: 0x4c
	// Line 607, Address: 0x2b1890, Func Offset: 0x50
	// Line 608, Address: 0x2b18a0, Func Offset: 0x60
	// Line 612, Address: 0x2b18a8, Func Offset: 0x68
	// Line 608, Address: 0x2b18ac, Func Offset: 0x6c
	// Line 612, Address: 0x2b18b0, Func Offset: 0x70
	// Line 613, Address: 0x2b18b4, Func Offset: 0x74
	// Line 612, Address: 0x2b18b8, Func Offset: 0x78
	// Line 613, Address: 0x2b18bc, Func Offset: 0x7c
	// Line 618, Address: 0x2b18d0, Func Offset: 0x90
	// Line 619, Address: 0x2b18d4, Func Offset: 0x94
	// Line 618, Address: 0x2b18d8, Func Offset: 0x98
	// Line 620, Address: 0x2b18dc, Func Offset: 0x9c
	// Line 619, Address: 0x2b18e0, Func Offset: 0xa0
	// Line 620, Address: 0x2b18e4, Func Offset: 0xa4
	// Line 618, Address: 0x2b18e8, Func Offset: 0xa8
	// Line 619, Address: 0x2b18f0, Func Offset: 0xb0
	// Line 620, Address: 0x2b18f4, Func Offset: 0xb4
	// Line 621, Address: 0x2b1900, Func Offset: 0xc0
	// Func End, Address: 0x2b1908, Func Offset: 0xc8
}

// myRpMeshPS2AllTextureStateUpload__Fv
// Start address: 0x2b1910
void myRpMeshPS2AllTextureStateUpload()
{
	ulong32 __tmp;
	ulong32 __tmp1;
	// Line 549, Address: 0x2b1910, Func Offset: 0
	// Line 550, Address: 0x2b1914, Func Offset: 0x4
	// Line 549, Address: 0x2b1918, Func Offset: 0x8
	// Line 550, Address: 0x2b191c, Func Offset: 0xc
	// Line 549, Address: 0x2b1920, Func Offset: 0x10
	// Line 550, Address: 0x2b1924, Func Offset: 0x14
	// Line 553, Address: 0x2b1928, Func Offset: 0x18
	// Line 560, Address: 0x2b1938, Func Offset: 0x28
	// Line 561, Address: 0x2b193c, Func Offset: 0x2c
	// Line 551, Address: 0x2b1940, Func Offset: 0x30
	// Line 565, Address: 0x2b1944, Func Offset: 0x34
	// Line 562, Address: 0x2b1950, Func Offset: 0x40
	// Line 565, Address: 0x2b1954, Func Offset: 0x44
	// Line 566, Address: 0x2b1958, Func Offset: 0x48
	// Line 573, Address: 0x2b195c, Func Offset: 0x4c
	// Line 572, Address: 0x2b1960, Func Offset: 0x50
	// Line 578, Address: 0x2b1964, Func Offset: 0x54
	// Line 574, Address: 0x2b1968, Func Offset: 0x58
	// Line 575, Address: 0x2b196c, Func Offset: 0x5c
	// Line 577, Address: 0x2b1970, Func Offset: 0x60
	// Line 579, Address: 0x2b1974, Func Offset: 0x64
	// Line 580, Address: 0x2b1978, Func Offset: 0x68
	// Line 581, Address: 0x2b1984, Func Offset: 0x74
	// Func End, Address: 0x2b198c, Func Offset: 0x7c
}

// myRpMeshPS2AllVU1CodeUpload__Fv
// Start address: 0x2b1990
void myRpMeshPS2AllVU1CodeUpload()
{
	void* _kohd;
	ulong32 tmp;
	ulong32 tmp1;
	// Line 519, Address: 0x2b1990, Func Offset: 0
	// Line 515, Address: 0x2b1994, Func Offset: 0x4
	// Line 519, Address: 0x2b199c, Func Offset: 0xc
	// Line 526, Address: 0x2b19a4, Func Offset: 0x14
	// Line 525, Address: 0x2b19a8, Func Offset: 0x18
	// Line 526, Address: 0x2b19b8, Func Offset: 0x28
	// Line 525, Address: 0x2b19bc, Func Offset: 0x2c
	// Line 526, Address: 0x2b19c0, Func Offset: 0x30
	// Line 535, Address: 0x2b19c4, Func Offset: 0x34
	// Line 537, Address: 0x2b19c8, Func Offset: 0x38
	// Line 527, Address: 0x2b19cc, Func Offset: 0x3c
	// Line 538, Address: 0x2b19d0, Func Offset: 0x40
	// Line 528, Address: 0x2b19d4, Func Offset: 0x44
	// Line 539, Address: 0x2b19d8, Func Offset: 0x48
	// Line 541, Address: 0x2b19e8, Func Offset: 0x58
	// Func End, Address: 0x2b19f0, Func Offset: 0x60
}

// my_rpMatFXSkyUploadTextures__FP8RwRasterP8RwRasterRUlRUlRlRUlRlRUl
// Start address: 0x2b19f0
void my_rpMatFXSkyUploadTextures(RwRaster* raster_1, RwRaster* raster_2, ulong32& _tex0_1, ulong32& _tex0_2, long32& _tex1_1, ulong32& _tex1_2, long32& _clamp_1, ulong32& _clamp_2)
{
	// Line 434, Address: 0x2b19f0, Func Offset: 0
	// Line 438, Address: 0x2b1a38, Func Offset: 0x48
	// Line 440, Address: 0x2b1a40, Func Offset: 0x50
	// Line 441, Address: 0x2b1a48, Func Offset: 0x58
	// Line 444, Address: 0x2b1a5c, Func Offset: 0x6c
	// Line 448, Address: 0x2b1a64, Func Offset: 0x74
	// Line 450, Address: 0x2b1a6c, Func Offset: 0x7c
	// Line 451, Address: 0x2b1a74, Func Offset: 0x84
	// Line 454, Address: 0x2b1a80, Func Offset: 0x90
	// Line 456, Address: 0x2b1a88, Func Offset: 0x98
	// Line 461, Address: 0x2b1a94, Func Offset: 0xa4
	// Line 463, Address: 0x2b1ab0, Func Offset: 0xc0
	// Line 468, Address: 0x2b1abc, Func Offset: 0xcc
	// Line 470, Address: 0x2b1ad8, Func Offset: 0xe8
	// Line 474, Address: 0x2b1ae4, Func Offset: 0xf4
	// Line 476, Address: 0x2b1aec, Func Offset: 0xfc
	// Line 481, Address: 0x2b1af0, Func Offset: 0x100
	// Line 479, Address: 0x2b1afc, Func Offset: 0x10c
	// Line 476, Address: 0x2b1b00, Func Offset: 0x110
	// Line 481, Address: 0x2b1b04, Func Offset: 0x114
	// Line 482, Address: 0x2b1b0c, Func Offset: 0x11c
	// Line 484, Address: 0x2b1b1c, Func Offset: 0x12c
	// Line 493, Address: 0x2b1b50, Func Offset: 0x160
	// Line 496, Address: 0x2b1b58, Func Offset: 0x168
	// Line 498, Address: 0x2b1b60, Func Offset: 0x170
	// Line 500, Address: 0x2b1b70, Func Offset: 0x180
	// Line 501, Address: 0x2b1b80, Func Offset: 0x190
	// Line 506, Address: 0x2b1bb4, Func Offset: 0x1c4
	// Line 509, Address: 0x2b1be4, Func Offset: 0x1f4
	// Line 511, Address: 0x2b1bec, Func Offset: 0x1fc
	// Line 488, Address: 0x2b1bf8, Func Offset: 0x208
	// Line 511, Address: 0x2b1bfc, Func Offset: 0x20c
	// Line 488, Address: 0x2b1c00, Func Offset: 0x210
	// Line 511, Address: 0x2b1c0c, Func Offset: 0x21c
	// Func End, Address: 0x2b1c38, Func Offset: 0x248
}

// my_rpMatFXSkySetDefaultBlendModes__Fii
// Start address: 0x2b1c40
void my_rpMatFXSkySetDefaultBlendModes()
{
	ulong32 tmp;
	ulong32 tmp1;
	// Line 354, Address: 0x2b1c40, Func Offset: 0
	// Line 359, Address: 0x2b1c44, Func Offset: 0x4
	// Line 354, Address: 0x2b1c48, Func Offset: 0x8
	// Line 359, Address: 0x2b1c4c, Func Offset: 0xc
	// Line 363, Address: 0x2b1c54, Func Offset: 0x14
	// Line 362, Address: 0x2b1c58, Func Offset: 0x18
	// Line 363, Address: 0x2b1c5c, Func Offset: 0x1c
	// Line 362, Address: 0x2b1c60, Func Offset: 0x20
	// Line 363, Address: 0x2b1c64, Func Offset: 0x24
	// Line 364, Address: 0x2b1c68, Func Offset: 0x28
	// Line 367, Address: 0x2b1c70, Func Offset: 0x30
	// Line 371, Address: 0x2b1c84, Func Offset: 0x44
	// Line 365, Address: 0x2b1c90, Func Offset: 0x50
	// Line 375, Address: 0x2b1c94, Func Offset: 0x54
	// Line 368, Address: 0x2b1c98, Func Offset: 0x58
	// Line 375, Address: 0x2b1c9c, Func Offset: 0x5c
	// Line 372, Address: 0x2b1ca8, Func Offset: 0x68
	// Line 376, Address: 0x2b1cac, Func Offset: 0x6c
	// Line 428, Address: 0x2b1cbc, Func Offset: 0x7c
	// Func End, Address: 0x2b1cc8, Func Offset: 0x88
}

// rwPDS_VCL_HIWaterTile_SetupShading__FfffRC5RwV3dfffffffffff
// Start address: 0x2b1cd0
void rwPDS_VCL_HIWaterTile_SetupShading(float32 color_mul_red, float32 color_mul_green, float32 color_mul_blue, RwV3d& light_dir, float32 light_ambient, float32 light_diffuse, float32 light_transmissive, float32 reflectance_min, float32 reflect_intensity, float32 reflect_magnitude, float32 refract_min)
{
	quadword_data qdata;
	float32 fresnel_scale;
	// Line 274, Address: 0x2b1cd0, Func Offset: 0
	// Line 278, Address: 0x2b1cd4, Func Offset: 0x4
	// Line 274, Address: 0x2b1cdc, Func Offset: 0xc
	// Line 278, Address: 0x2b1ce4, Func Offset: 0x14
	// Line 274, Address: 0x2b1cec, Func Offset: 0x1c
	// Line 278, Address: 0x2b1cf0, Func Offset: 0x20
	// Line 274, Address: 0x2b1cf4, Func Offset: 0x24
	// Line 278, Address: 0x2b1d00, Func Offset: 0x30
	// Line 274, Address: 0x2b1d0c, Func Offset: 0x3c
	// Line 278, Address: 0x2b1d24, Func Offset: 0x54
	// Line 279, Address: 0x2b1d40, Func Offset: 0x70
	// Line 284, Address: 0x2b1d68, Func Offset: 0x98
	// Line 287, Address: 0x2b1d74, Func Offset: 0xa4
	// Line 326, Address: 0x2b1d78, Func Offset: 0xa8
	// Line 287, Address: 0x2b1d7c, Func Offset: 0xac
	// Line 342, Address: 0x2b1d80, Func Offset: 0xb0
	// Line 287, Address: 0x2b1d84, Func Offset: 0xb4
	// Line 300, Address: 0x2b1d88, Func Offset: 0xb8
	// Line 290, Address: 0x2b1d8c, Func Offset: 0xbc
	// Line 346, Address: 0x2b1d90, Func Offset: 0xc0
	// Line 290, Address: 0x2b1d94, Func Offset: 0xc4
	// Line 287, Address: 0x2b1d98, Func Offset: 0xc8
	// Line 290, Address: 0x2b1d9c, Func Offset: 0xcc
	// Line 295, Address: 0x2b1da8, Func Offset: 0xd8
	// Line 290, Address: 0x2b1dac, Func Offset: 0xdc
	// Line 326, Address: 0x2b1db0, Func Offset: 0xe0
	// Line 295, Address: 0x2b1db4, Func Offset: 0xe4
	// Line 290, Address: 0x2b1db8, Func Offset: 0xe8
	// Line 295, Address: 0x2b1dbc, Func Offset: 0xec
	// Line 333, Address: 0x2b1dc0, Func Offset: 0xf0
	// Line 293, Address: 0x2b1dc4, Func Offset: 0xf4
	// Line 301, Address: 0x2b1dc8, Func Offset: 0xf8
	// Line 295, Address: 0x2b1dcc, Func Offset: 0xfc
	// Line 334, Address: 0x2b1dd0, Func Offset: 0x100
	// Line 284, Address: 0x2b1dd8, Func Offset: 0x108
	// Line 335, Address: 0x2b1ddc, Func Offset: 0x10c
	// Line 333, Address: 0x2b1de0, Func Offset: 0x110
	// Line 335, Address: 0x2b1de4, Func Offset: 0x114
	// Line 308, Address: 0x2b1de8, Func Offset: 0x118
	// Line 339, Address: 0x2b1dec, Func Offset: 0x11c
	// Line 342, Address: 0x2b1df0, Func Offset: 0x120
	// Line 296, Address: 0x2b1df4, Func Offset: 0x124
	// Line 345, Address: 0x2b1df8, Func Offset: 0x128
	// Line 346, Address: 0x2b1e00, Func Offset: 0x130
	// Line 293, Address: 0x2b1e04, Func Offset: 0x134
	// Line 347, Address: 0x2b1e08, Func Offset: 0x138
	// Line 339, Address: 0x2b1e0c, Func Offset: 0x13c
	// Line 347, Address: 0x2b1e10, Func Offset: 0x140
	// Line 340, Address: 0x2b1e14, Func Offset: 0x144
	// Line 350, Address: 0x2b1e18, Func Offset: 0x148
	// Line 295, Address: 0x2b1e1c, Func Offset: 0x14c
	// Line 340, Address: 0x2b1e20, Func Offset: 0x150
	// Line 297, Address: 0x2b1e24, Func Offset: 0x154
	// Line 341, Address: 0x2b1e28, Func Offset: 0x158
	// Line 296, Address: 0x2b1e30, Func Offset: 0x160
	// Line 326, Address: 0x2b1e34, Func Offset: 0x164
	// Line 297, Address: 0x2b1e3c, Func Offset: 0x16c
	// Line 326, Address: 0x2b1e40, Func Offset: 0x170
	// Line 333, Address: 0x2b1e44, Func Offset: 0x174
	// Line 334, Address: 0x2b1e48, Func Offset: 0x178
	// Line 326, Address: 0x2b1e4c, Func Offset: 0x17c
	// Line 333, Address: 0x2b1e50, Func Offset: 0x180
	// Line 298, Address: 0x2b1e54, Func Offset: 0x184
	// Line 334, Address: 0x2b1e58, Func Offset: 0x188
	// Line 298, Address: 0x2b1e5c, Func Offset: 0x18c
	// Line 335, Address: 0x2b1e60, Func Offset: 0x190
	// Line 300, Address: 0x2b1e64, Func Offset: 0x194
	// Line 335, Address: 0x2b1e68, Func Offset: 0x198
	// Line 302, Address: 0x2b1e6c, Func Offset: 0x19c
	// Line 301, Address: 0x2b1e70, Func Offset: 0x1a0
	// Line 326, Address: 0x2b1e74, Func Offset: 0x1a4
	// Line 302, Address: 0x2b1e78, Func Offset: 0x1a8
	// Line 300, Address: 0x2b1e80, Func Offset: 0x1b0
	// Line 301, Address: 0x2b1e84, Func Offset: 0x1b4
	// Line 303, Address: 0x2b1e88, Func Offset: 0x1b8
	// Line 306, Address: 0x2b1e8c, Func Offset: 0x1bc
	// Line 325, Address: 0x2b1e90, Func Offset: 0x1c0
	// Line 327, Address: 0x2b1e94, Func Offset: 0x1c4
	// Line 303, Address: 0x2b1e98, Func Offset: 0x1c8
	// Line 306, Address: 0x2b1e9c, Func Offset: 0x1cc
	// Line 307, Address: 0x2b1ea0, Func Offset: 0x1d0
	// Line 308, Address: 0x2b1ea4, Func Offset: 0x1d4
	// Line 309, Address: 0x2b1ea8, Func Offset: 0x1d8
	// Line 316, Address: 0x2b1eac, Func Offset: 0x1dc
	// Line 336, Address: 0x2b1eb0, Func Offset: 0x1e0
	// Line 316, Address: 0x2b1eb4, Func Offset: 0x1e4
	// Line 319, Address: 0x2b1eb8, Func Offset: 0x1e8
	// Line 318, Address: 0x2b1ebc, Func Offset: 0x1ec
	// Line 321, Address: 0x2b1ec0, Func Offset: 0x1f0
	// Line 320, Address: 0x2b1ec4, Func Offset: 0x1f4
	// Line 322, Address: 0x2b1ec8, Func Offset: 0x1f8
	// Line 325, Address: 0x2b1ed0, Func Offset: 0x200
	// Line 326, Address: 0x2b1ed4, Func Offset: 0x204
	// Line 324, Address: 0x2b1ed8, Func Offset: 0x208
	// Line 327, Address: 0x2b1edc, Func Offset: 0x20c
	// Line 328, Address: 0x2b1ee0, Func Offset: 0x210
	// Line 334, Address: 0x2b1ee8, Func Offset: 0x218
	// Line 333, Address: 0x2b1eec, Func Offset: 0x21c
	// Line 335, Address: 0x2b1ef0, Func Offset: 0x220
	// Line 336, Address: 0x2b1ef4, Func Offset: 0x224
	// Line 337, Address: 0x2b1ef8, Func Offset: 0x228
	// Line 342, Address: 0x2b1efc, Func Offset: 0x22c
	// Line 339, Address: 0x2b1f00, Func Offset: 0x230
	// Line 340, Address: 0x2b1f04, Func Offset: 0x234
	// Line 341, Address: 0x2b1f08, Func Offset: 0x238
	// Line 343, Address: 0x2b1f0c, Func Offset: 0x23c
	// Line 337, Address: 0x2b1f10, Func Offset: 0x240
	// Line 346, Address: 0x2b1f14, Func Offset: 0x244
	// Line 347, Address: 0x2b1f18, Func Offset: 0x248
	// Line 343, Address: 0x2b1f1c, Func Offset: 0x24c
	// Line 345, Address: 0x2b1f20, Func Offset: 0x250
	// Line 348, Address: 0x2b1f24, Func Offset: 0x254
	// Line 350, Address: 0x2b1f2c, Func Offset: 0x25c
	// Line 351, Address: 0x2b1f30, Func Offset: 0x260
	// Func End, Address: 0x2b1f64, Func Offset: 0x294
}

// RpPDS_HIWaterTile_PS2AllMatBridgeCallBack__FRC5RwV3dP8RwRasterP8RwRasterUcRC11RwMatrixTagRC11RwMatrixTagifffi
// Start address: 0x2b1f70
int32 RpPDS_HIWaterTile_PS2AllMatBridgeCallBack(RwV3d& loc, RwRaster* raster_refract, RwRaster* raster_reflect, uint8 transType, RwMatrixTag& shade_cam_mat, RwMatrixTag& shade_view_mat, int32 batch_length, float32 dxz, float32 lod_blend_dist_min, float32 lod_blend_dist_max, int32 min_alpha_write)
{
	quadword_data qdata;
	RwMatrixTag mat;
	RwMatrixTag water_mat;
	// Line 205, Address: 0x2b1f70, Func Offset: 0
	// Line 212, Address: 0x2b1f74, Func Offset: 0x4
	// Line 205, Address: 0x2b1f78, Func Offset: 0x8
	// Line 213, Address: 0x2b1f7c, Func Offset: 0xc
	// Line 205, Address: 0x2b1f80, Func Offset: 0x10
	// Line 213, Address: 0x2b1f84, Func Offset: 0x14
	// Line 205, Address: 0x2b1f88, Func Offset: 0x18
	// Line 213, Address: 0x2b1f8c, Func Offset: 0x1c
	// Line 205, Address: 0x2b1f90, Func Offset: 0x20
	// Line 214, Address: 0x2b1fc4, Func Offset: 0x54
	// Line 205, Address: 0x2b1fc8, Func Offset: 0x58
	// Line 212, Address: 0x2b1fcc, Func Offset: 0x5c
	// Line 205, Address: 0x2b1fd0, Func Offset: 0x60
	// Line 212, Address: 0x2b1fd4, Func Offset: 0x64
	// Line 205, Address: 0x2b1fd8, Func Offset: 0x68
	// Line 212, Address: 0x2b1fdc, Func Offset: 0x6c
	// Line 205, Address: 0x2b1fe0, Func Offset: 0x70
	// Line 212, Address: 0x2b1fe8, Func Offset: 0x78
	// Line 214, Address: 0x2b2004, Func Offset: 0x94
	// Line 212, Address: 0x2b2008, Func Offset: 0x98
	// Line 214, Address: 0x2b200c, Func Offset: 0x9c
	// Line 212, Address: 0x2b2010, Func Offset: 0xa0
	// Line 213, Address: 0x2b2020, Func Offset: 0xb0
	// Line 212, Address: 0x2b2024, Func Offset: 0xb4
	// Line 213, Address: 0x2b2028, Func Offset: 0xb8
	// Line 212, Address: 0x2b202c, Func Offset: 0xbc
	// Line 213, Address: 0x2b2030, Func Offset: 0xc0
	// Line 212, Address: 0x2b2034, Func Offset: 0xc4
	// Line 214, Address: 0x2b203c, Func Offset: 0xcc
	// Line 218, Address: 0x2b2044, Func Offset: 0xd4
	// Line 223, Address: 0x2b2048, Func Offset: 0xd8
	// Line 218, Address: 0x2b204c, Func Offset: 0xdc
	// Line 223, Address: 0x2b2050, Func Offset: 0xe0
	// Line 218, Address: 0x2b2054, Func Offset: 0xe4
	// Line 223, Address: 0x2b206c, Func Offset: 0xfc
	// Line 227, Address: 0x2b2078, Func Offset: 0x108
	// Line 249, Address: 0x2b2080, Func Offset: 0x110
	// Line 229, Address: 0x2b2084, Func Offset: 0x114
	// Line 227, Address: 0x2b2088, Func Offset: 0x118
	// Line 229, Address: 0x2b208c, Func Offset: 0x11c
	// Line 227, Address: 0x2b2090, Func Offset: 0x120
	// Line 229, Address: 0x2b2094, Func Offset: 0x124
	// Line 253, Address: 0x2b209c, Func Offset: 0x12c
	// Line 229, Address: 0x2b20a0, Func Offset: 0x130
	// Line 223, Address: 0x2b20a8, Func Offset: 0x138
	// Line 229, Address: 0x2b20ac, Func Offset: 0x13c
	// Line 253, Address: 0x2b20b0, Func Offset: 0x140
	// Line 232, Address: 0x2b20b4, Func Offset: 0x144
	// Line 238, Address: 0x2b20b8, Func Offset: 0x148
	// Line 248, Address: 0x2b20bc, Func Offset: 0x14c
	// Line 263, Address: 0x2b20c0, Func Offset: 0x150
	// Line 253, Address: 0x2b20c4, Func Offset: 0x154
	// Line 263, Address: 0x2b20c8, Func Offset: 0x158
	// Line 261, Address: 0x2b20d4, Func Offset: 0x164
	// Line 253, Address: 0x2b20d8, Func Offset: 0x168
	// Line 232, Address: 0x2b20dc, Func Offset: 0x16c
	// Line 249, Address: 0x2b20e0, Func Offset: 0x170
	// Line 253, Address: 0x2b20e4, Func Offset: 0x174
	// Line 234, Address: 0x2b20e8, Func Offset: 0x178
	// Line 235, Address: 0x2b20f0, Func Offset: 0x180
	// Line 236, Address: 0x2b20f8, Func Offset: 0x188
	// Line 237, Address: 0x2b2100, Func Offset: 0x190
	// Line 249, Address: 0x2b2108, Func Offset: 0x198
	// Line 239, Address: 0x2b210c, Func Offset: 0x19c
	// Line 238, Address: 0x2b2110, Func Offset: 0x1a0
	// Line 240, Address: 0x2b2114, Func Offset: 0x1a4
	// Line 241, Address: 0x2b2118, Func Offset: 0x1a8
	// Line 242, Address: 0x2b211c, Func Offset: 0x1ac
	// Line 243, Address: 0x2b2120, Func Offset: 0x1b0
	// Line 244, Address: 0x2b2124, Func Offset: 0x1b4
	// Line 241, Address: 0x2b2128, Func Offset: 0x1b8
	// Line 242, Address: 0x2b212c, Func Offset: 0x1bc
	// Line 243, Address: 0x2b2130, Func Offset: 0x1c0
	// Line 244, Address: 0x2b2134, Func Offset: 0x1c4
	// Line 245, Address: 0x2b2138, Func Offset: 0x1c8
	// Line 248, Address: 0x2b213c, Func Offset: 0x1cc
	// Line 245, Address: 0x2b2140, Func Offset: 0x1d0
	// Line 249, Address: 0x2b2144, Func Offset: 0x1d4
	// Line 246, Address: 0x2b2148, Func Offset: 0x1d8
	// Line 247, Address: 0x2b214c, Func Offset: 0x1dc
	// Line 250, Address: 0x2b2150, Func Offset: 0x1e0
	// Line 253, Address: 0x2b2154, Func Offset: 0x1e4
	// Line 258, Address: 0x2b2158, Func Offset: 0x1e8
	// Line 250, Address: 0x2b215c, Func Offset: 0x1ec
	// Line 252, Address: 0x2b2160, Func Offset: 0x1f0
	// Line 259, Address: 0x2b2164, Func Offset: 0x1f4
	// Line 263, Address: 0x2b216c, Func Offset: 0x1fc
	// Line 265, Address: 0x2b2174, Func Offset: 0x204
	// Func End, Address: 0x2b21b4, Func Offset: 0x244
}

// upload_tiles__FPC10iWaterTilei
// Start address: 0x2b21c0
void upload_tiles(iWaterTile* tiles, int32 tiles_size)
{
	quadword_data qdata;
	<unknown fundamental type (0xa510)>* _rwDMA_local_rwDMAPktPtr;
	<unknown fundamental type (0xa510)>* data;
	<unknown fundamental type (0xa510)>* end;
	// Line 160, Address: 0x2b21c0, Func Offset: 0
	// Line 179, Address: 0x2b21d8, Func Offset: 0x18
	// Line 186, Address: 0x2b21e4, Func Offset: 0x24
	// Line 187, Address: 0x2b21e8, Func Offset: 0x28
	// Line 186, Address: 0x2b21ec, Func Offset: 0x2c
	// Line 187, Address: 0x2b21f0, Func Offset: 0x30
	// Line 186, Address: 0x2b21f4, Func Offset: 0x34
	// Line 187, Address: 0x2b21f8, Func Offset: 0x38
	// Line 186, Address: 0x2b21fc, Func Offset: 0x3c
	// Line 187, Address: 0x2b2200, Func Offset: 0x40
	// Line 191, Address: 0x2b2204, Func Offset: 0x44
	// Line 186, Address: 0x2b2208, Func Offset: 0x48
	// Line 191, Address: 0x2b220c, Func Offset: 0x4c
	// Line 187, Address: 0x2b2210, Func Offset: 0x50
	// Line 179, Address: 0x2b2228, Func Offset: 0x68
	// Line 187, Address: 0x2b222c, Func Offset: 0x6c
	// Line 188, Address: 0x2b2230, Func Offset: 0x70
	// Line 192, Address: 0x2b2238, Func Offset: 0x78
	// Line 193, Address: 0x2b2240, Func Offset: 0x80
	// Line 195, Address: 0x2b2260, Func Offset: 0xa0
	// Line 196, Address: 0x2b2264, Func Offset: 0xa4
	// Func End, Address: 0x2b2278, Func Offset: 0xb8
}

// rwPDS_VCL_HIWaterTile_UploadMesh__FPCfPCfPCfPCfPCfi
// Start address: 0x2b2280
void rwPDS_VCL_HIWaterTile_UploadMesh(float32* Ay, float32* By, float32* Nx, float32* Ny, float32* Nz, int32 subdiv_level)
{
	int32 qstride;
	quadword_data qdata;
	<unknown fundamental type (0xa510)>* _rwDMA_local_rwDMAPktPtr;
	<unknown fundamental type (0xa510)>* data;
	<unknown fundamental type (0xa510)>* end;
	// Line 94, Address: 0x2b2280, Func Offset: 0
	// Line 102, Address: 0x2b2284, Func Offset: 0x4
	// Line 94, Address: 0x2b2288, Func Offset: 0x8
	// Line 102, Address: 0x2b228c, Func Offset: 0xc
	// Line 94, Address: 0x2b2290, Func Offset: 0x10
	// Line 102, Address: 0x2b2294, Func Offset: 0x14
	// Line 94, Address: 0x2b2298, Func Offset: 0x18
	// Line 102, Address: 0x2b229c, Func Offset: 0x1c
	// Line 94, Address: 0x2b22a0, Func Offset: 0x20
	// Line 109, Address: 0x2b22c4, Func Offset: 0x44
	// Line 113, Address: 0x2b22d0, Func Offset: 0x50
	// Line 114, Address: 0x2b22d4, Func Offset: 0x54
	// Line 113, Address: 0x2b22d8, Func Offset: 0x58
	// Line 123, Address: 0x2b22dc, Func Offset: 0x5c
	// Line 113, Address: 0x2b22e0, Func Offset: 0x60
	// Line 114, Address: 0x2b22e4, Func Offset: 0x64
	// Line 113, Address: 0x2b22ec, Func Offset: 0x6c
	// Line 114, Address: 0x2b22f0, Func Offset: 0x70
	// Line 117, Address: 0x2b22f4, Func Offset: 0x74
	// Line 114, Address: 0x2b22f8, Func Offset: 0x78
	// Line 109, Address: 0x2b22fc, Func Offset: 0x7c
	// Line 114, Address: 0x2b2300, Func Offset: 0x80
	// Line 126, Address: 0x2b2308, Func Offset: 0x88
	// Line 116, Address: 0x2b230c, Func Offset: 0x8c
	// Line 126, Address: 0x2b2310, Func Offset: 0x90
	// Line 129, Address: 0x2b2318, Func Offset: 0x98
	// Line 126, Address: 0x2b231c, Func Offset: 0x9c
	// Line 128, Address: 0x2b2320, Func Offset: 0xa0
	// Line 117, Address: 0x2b2324, Func Offset: 0xa4
	// Line 119, Address: 0x2b2328, Func Offset: 0xa8
	// Line 118, Address: 0x2b232c, Func Offset: 0xac
	// Line 120, Address: 0x2b2330, Func Offset: 0xb0
	// Line 116, Address: 0x2b2334, Func Offset: 0xb4
	// Line 123, Address: 0x2b2338, Func Offset: 0xb8
	// Line 126, Address: 0x2b233c, Func Offset: 0xbc
	// Line 128, Address: 0x2b2340, Func Offset: 0xc0
	// Line 120, Address: 0x2b2344, Func Offset: 0xc4
	// Line 129, Address: 0x2b2348, Func Offset: 0xc8
	// Line 130, Address: 0x2b2350, Func Offset: 0xd0
	// Line 132, Address: 0x2b2370, Func Offset: 0xf0
	// Line 135, Address: 0x2b238c, Func Offset: 0x10c
	// Line 134, Address: 0x2b2390, Func Offset: 0x110
	// Line 135, Address: 0x2b2398, Func Offset: 0x118
	// Line 136, Address: 0x2b23a0, Func Offset: 0x120
	// Line 138, Address: 0x2b23c0, Func Offset: 0x140
	// Line 141, Address: 0x2b23dc, Func Offset: 0x15c
	// Line 140, Address: 0x2b23e0, Func Offset: 0x160
	// Line 141, Address: 0x2b23e8, Func Offset: 0x168
	// Line 142, Address: 0x2b23f0, Func Offset: 0x170
	// Line 144, Address: 0x2b2410, Func Offset: 0x190
	// Line 147, Address: 0x2b242c, Func Offset: 0x1ac
	// Line 146, Address: 0x2b2430, Func Offset: 0x1b0
	// Line 147, Address: 0x2b2438, Func Offset: 0x1b8
	// Line 148, Address: 0x2b2440, Func Offset: 0x1c0
	// Line 150, Address: 0x2b2460, Func Offset: 0x1e0
	// Line 153, Address: 0x2b247c, Func Offset: 0x1fc
	// Line 152, Address: 0x2b2480, Func Offset: 0x200
	// Line 153, Address: 0x2b2488, Func Offset: 0x208
	// Line 154, Address: 0x2b2490, Func Offset: 0x210
	// Line 156, Address: 0x2b24b0, Func Offset: 0x230
	// Line 157, Address: 0x2b24b4, Func Offset: 0x234
	// Func End, Address: 0x2b24d8, Func Offset: 0x258
}

