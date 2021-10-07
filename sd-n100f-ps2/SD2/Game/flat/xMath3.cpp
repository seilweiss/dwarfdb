typedef struct _xMat4x3;
typedef struct _xVec3;
typedef struct _xMat3x3;
typedef struct _xQuat;
typedef struct _xIsect;


typedef int32 type[3];

struct _xMat4x3
{
	_xVec3 right;
	int32 flags;
	_xVec3 up;
	uint32 pad1;
	_xVec3 at;
	uint32 pad2;
	_xVec3 pos;
	uint32 pad3;
};

struct _xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct _xMat3x3
{
	_xVec3 right;
	int32 flags;
	_xVec3 up;
	uint32 pad1;
	_xVec3 at;
	uint32 pad2;
};

struct _xQuat
{
	_xVec3 v;
	float32 s;
};

struct _xIsect
{
	uint32 flags;
	float32 penned;
	float32 contained;
	float32 lapped;
	_xVec3 point;
	_xVec3 norm;
	float32 dist;
};

_xVec3 g_O3;
_xVec3 g_X3;
_xVec3 g_Y3;
_xVec3 g_Z3;
_xVec3 g_NX3;
_xVec3 g_NY3;
_xVec3 g_NZ3;
_xMat4x3 g_I3;
_xQuat g_IQ;

void xQuatMul(_xQuat* o, _xQuat* a, _xQuat* b);
void xQuatSlerp(_xQuat* o, _xQuat* a, _xQuat* b, float32 t);
float32 xQuatNormalize(_xQuat* o, _xQuat* q);
void xQuatToMat(_xQuat* q, _xMat3x3* m);
void xQuatFromMat(_xQuat* q, _xMat3x3* m);
void xMat4x3RMul3x3(_xMat4x3* o, _xMat3x3* m3x3, _xMat4x3* m);
void xMat4x3LMul3x3(_xMat4x3* o, _xMat4x3* m, _xMat3x3* m3x3);
void xMat4x3Mul(_xMat4x3* o, _xMat4x3* a, _xMat4x3* b);
void xMat4x3Rot(_xMat4x3* m, _xVec3* a, float32 t, _xVec3* p);
void xMat4x3Orthonormalize(_xMat4x3* o, _xMat4x3* m);
void xMat3x3Tolocal(_xVec3* o, _xMat3x3* m, _xVec3* v);
void xMat3x3RMulVec(_xVec3* o, _xMat3x3* m, _xVec3* v);
void xMat3x3LMulVec(_xVec3* o, _xMat3x3* m, _xVec3* v);
void xMat3x3Mul(_xMat3x3* o, _xMat3x3* a, _xMat3x3* b);
void xMat3x3Transpose(_xMat3x3* o, _xMat3x3* m);
void xMat3x3RMulRotY(_xMat3x3* o, _xMat3x3* m, float32 t);
void xMat3x3LMulRotY(_xMat3x3* o, _xMat3x3* m, float32 t);
void xMat3x3RotY(_xMat3x3* m, float32 t);
void xMat3x3RotC(_xMat3x3* m, float32 _x, float32 _y, float32 _z, float32 t);
void xMat3x3Euler(_xMat3x3* m, float32 yaw, float32 pitch, float32 roll);
void xMat3x3Euler(_xMat3x3* m, _xVec3* ypr);
float32 xMat3x3LookVec(_xMat3x3* m, _xVec3* at);
void xMat4x3MoveLocalAt(_xMat4x3* m, float32 mag);
void xMat4x3MoveLocalUp(_xMat4x3* m, float32 mag);
void xMat4x3MoveLocalRight(_xMat4x3* m, float32 mag);
void xMat3x3GetEuler(_xMat3x3* m, _xVec3* a);
void xMat3x3GetScale(_xMat3x3* m, _xVec3* s);
void xMat3x3Normalize(_xMat3x3* o, _xMat3x3* m);
void xLine3VecDist2(_xVec3* p1, _xVec3* p2, _xVec3* v, _xIsect* isx);
float32 xVec3Normalize(_xVec3* o, _xVec3* v);
float32 xVec3LengthFast(float32 x, float32 y, float32 z);
void xMath3Exit();
void xMath3Init();

// xQuatMul__FP6_xQuatPC6_xQuatPC6_xQuat
// Start address: 0x1131a0
void xQuatMul(_xQuat* o, _xQuat* a, _xQuat* b)
{
	float32 _s;
	// Line 1697, Address: 0x1131a0, Func Offset: 0
	// Line 1702, Address: 0x1131d4, Func Offset: 0x34
	// Line 1703, Address: 0x1131ec, Func Offset: 0x4c
	// Line 1704, Address: 0x113200, Func Offset: 0x60
	// Line 1703, Address: 0x113208, Func Offset: 0x68
	// Line 1704, Address: 0x11320c, Func Offset: 0x6c
	// Line 1716, Address: 0x11321c, Func Offset: 0x7c
	// Func End, Address: 0x113224, Func Offset: 0x84
}

// xQuatSlerp__FP6_xQuatPC6_xQuatPC6_xQuatf
// Start address: 0x113230
void xQuatSlerp(_xQuat* o, _xQuat* a, _xQuat* b, float32 t)
{
	_xQuat b2;
	float32 abdot;
	float32 theta;
	float32 one_sintheta;
	float32 bsph;
	float32 asph;
	// Line 1584, Address: 0x113230, Func Offset: 0
	// Line 1618, Address: 0x113250, Func Offset: 0x20
	// Line 1635, Address: 0x11328c, Func Offset: 0x5c
	// Line 1618, Address: 0x113294, Func Offset: 0x64
	// Line 1635, Address: 0x113298, Func Offset: 0x68
	// Line 1637, Address: 0x1132a8, Func Offset: 0x78
	// Line 1636, Address: 0x1132b4, Func Offset: 0x84
	// Line 1637, Address: 0x1132b8, Func Offset: 0x88
	// Line 1641, Address: 0x1132d8, Func Offset: 0xa8
	// Line 1645, Address: 0x1132dc, Func Offset: 0xac
	// Line 1646, Address: 0x1132fc, Func Offset: 0xcc
	// Line 1648, Address: 0x113300, Func Offset: 0xd0
	// Line 1649, Address: 0x113308, Func Offset: 0xd8
	// Line 1650, Address: 0x113314, Func Offset: 0xe4
	// Line 1651, Address: 0x113330, Func Offset: 0x100
	// Line 1652, Address: 0x11333c, Func Offset: 0x10c
	// Line 1662, Address: 0x11334c, Func Offset: 0x11c
	// Line 1664, Address: 0x113350, Func Offset: 0x120
	// Line 1662, Address: 0x113354, Func Offset: 0x124
	// Line 1663, Address: 0x11335c, Func Offset: 0x12c
	// Line 1662, Address: 0x113364, Func Offset: 0x134
	// Line 1664, Address: 0x113368, Func Offset: 0x138
	// Line 1663, Address: 0x11336c, Func Offset: 0x13c
	// Line 1662, Address: 0x113370, Func Offset: 0x140
	// Line 1663, Address: 0x113374, Func Offset: 0x144
	// Line 1664, Address: 0x113378, Func Offset: 0x148
	// Line 1662, Address: 0x11338c, Func Offset: 0x15c
	// Line 1664, Address: 0x113390, Func Offset: 0x160
	// Line 1663, Address: 0x113394, Func Offset: 0x164
	// Line 1664, Address: 0x113398, Func Offset: 0x168
	// Line 1676, Address: 0x1133a8, Func Offset: 0x178
	// Func End, Address: 0x1133cc, Func Offset: 0x19c
}

// xQuatNormalize__FP6_xQuatPC6_xQuat
// Start address: 0x1133d0
float32 xQuatNormalize(_xQuat* o, _xQuat* q)
{
	float32 len;
	float32 one_len;
	// Line 1549, Address: 0x1133d0, Func Offset: 0
	// Line 1550, Address: 0x1133e0, Func Offset: 0x10
	// Line 1551, Address: 0x1133ec, Func Offset: 0x1c
	// Line 1550, Address: 0x1133f0, Func Offset: 0x20
	// Line 1551, Address: 0x1133f4, Func Offset: 0x24
	// Line 1550, Address: 0x1133f8, Func Offset: 0x28
	// Line 1551, Address: 0x113410, Func Offset: 0x40
	// Line 1552, Address: 0x113420, Func Offset: 0x50
	// Line 1553, Address: 0x113428, Func Offset: 0x58
	// Line 1555, Address: 0x113444, Func Offset: 0x74
	// Line 1557, Address: 0x113450, Func Offset: 0x80
	// Line 1558, Address: 0x113468, Func Offset: 0x98
	// Line 1559, Address: 0x113470, Func Offset: 0xa0
	// Line 1561, Address: 0x113494, Func Offset: 0xc4
	// Line 1563, Address: 0x1134a0, Func Offset: 0xd0
	// Line 1564, Address: 0x1134a8, Func Offset: 0xd8
	// Line 1565, Address: 0x1134b0, Func Offset: 0xe0
	// Line 1564, Address: 0x1134b4, Func Offset: 0xe4
	// Line 1565, Address: 0x1134b8, Func Offset: 0xe8
	// Line 1567, Address: 0x1134e4, Func Offset: 0x114
	// Func End, Address: 0x1134f8, Func Offset: 0x128
}

// xQuatToMat__FPC6_xQuatP8_xMat3x3
// Start address: 0x113500
void xQuatToMat(_xQuat* q, _xMat3x3* m)
{
	float32 tzz;
	float32 tyz;
	float32 tyy;
	float32 txz;
	float32 txy;
	float32 txx;
	float32 tsz;
	float32 tsy;
	float32 tsx;
	float32 tz;
	float32 ty;
	float32 tx;
	// Line 1502, Address: 0x113500, Func Offset: 0
	// Line 1503, Address: 0x113504, Func Offset: 0x4
	// Line 1502, Address: 0x113508, Func Offset: 0x8
	// Line 1504, Address: 0x113510, Func Offset: 0x10
	// Line 1514, Address: 0x113514, Func Offset: 0x14
	// Line 1502, Address: 0x113518, Func Offset: 0x18
	// Line 1505, Address: 0x11351c, Func Offset: 0x1c
	// Line 1503, Address: 0x113520, Func Offset: 0x20
	// Line 1504, Address: 0x113524, Func Offset: 0x24
	// Line 1513, Address: 0x113528, Func Offset: 0x28
	// Line 1511, Address: 0x11352c, Func Offset: 0x2c
	// Line 1505, Address: 0x113530, Func Offset: 0x30
	// Line 1506, Address: 0x113534, Func Offset: 0x34
	// Line 1508, Address: 0x113538, Func Offset: 0x38
	// Line 1514, Address: 0x11353c, Func Offset: 0x3c
	// Line 1509, Address: 0x113540, Func Offset: 0x40
	// Line 1514, Address: 0x113544, Func Offset: 0x44
	// Line 1518, Address: 0x113550, Func Offset: 0x50
	// Line 1522, Address: 0x113558, Func Offset: 0x58
	// Line 1510, Address: 0x11355c, Func Offset: 0x5c
	// Line 1507, Address: 0x113560, Func Offset: 0x60
	// Line 1512, Address: 0x113564, Func Offset: 0x64
	// Line 1515, Address: 0x113568, Func Offset: 0x68
	// Line 1516, Address: 0x113570, Func Offset: 0x70
	// Line 1517, Address: 0x113574, Func Offset: 0x74
	// Line 1516, Address: 0x113578, Func Offset: 0x78
	// Line 1517, Address: 0x11357c, Func Offset: 0x7c
	// Line 1518, Address: 0x113580, Func Offset: 0x80
	// Line 1519, Address: 0x113584, Func Offset: 0x84
	// Line 1520, Address: 0x113588, Func Offset: 0x88
	// Line 1519, Address: 0x11358c, Func Offset: 0x8c
	// Line 1521, Address: 0x113590, Func Offset: 0x90
	// Line 1520, Address: 0x113594, Func Offset: 0x94
	// Line 1522, Address: 0x113598, Func Offset: 0x98
	// Line 1521, Address: 0x11359c, Func Offset: 0x9c
	// Line 1522, Address: 0x1135a0, Func Offset: 0xa0
	// Line 1532, Address: 0x1135a4, Func Offset: 0xa4
	// Func End, Address: 0x1135ac, Func Offset: 0xac
}

// xQuatFromMat__FP6_xQuatPC8_xMat3x3
// Start address: 0x1135b0
void xQuatFromMat(_xQuat* q, _xMat3x3* m)
{
	int32 k;
	int32 j;
	int32 i;
	float32 root;
	float32 tr;
	float32* qvp;
	float32* mp;
	int32 nxt[3];
	// Line 1384, Address: 0x1135b0, Func Offset: 0
	// Line 1387, Address: 0x1135d8, Func Offset: 0x28
	// Line 1397, Address: 0x1135e4, Func Offset: 0x34
	// Line 1387, Address: 0x1135ec, Func Offset: 0x3c
	// Line 1397, Address: 0x1135f4, Func Offset: 0x44
	// Line 1398, Address: 0x113604, Func Offset: 0x54
	// Line 1399, Address: 0x113614, Func Offset: 0x64
	// Line 1400, Address: 0x113624, Func Offset: 0x74
	// Line 1399, Address: 0x113628, Func Offset: 0x78
	// Line 1401, Address: 0x11362c, Func Offset: 0x7c
	// Line 1402, Address: 0x113640, Func Offset: 0x90
	// Line 1403, Address: 0x113654, Func Offset: 0xa4
	// Line 1407, Address: 0x113664, Func Offset: 0xb4
	// Line 1411, Address: 0x11366c, Func Offset: 0xbc
	// Line 1412, Address: 0x113684, Func Offset: 0xd4
	// Line 1414, Address: 0x113688, Func Offset: 0xd8
	// Line 1415, Address: 0x1136b0, Func Offset: 0x100
	// Line 1417, Address: 0x1136b4, Func Offset: 0x104
	// Line 1419, Address: 0x1136c4, Func Offset: 0x114
	// Line 1418, Address: 0x1136d4, Func Offset: 0x124
	// Line 1419, Address: 0x1136d8, Func Offset: 0x128
	// Line 1418, Address: 0x1136e0, Func Offset: 0x130
	// Line 1419, Address: 0x1136e8, Func Offset: 0x138
	// Line 1420, Address: 0x113720, Func Offset: 0x170
	// Line 1421, Address: 0x113748, Func Offset: 0x198
	// Line 1423, Address: 0x11376c, Func Offset: 0x1bc
	// Line 1425, Address: 0x113774, Func Offset: 0x1c4
	// Line 1426, Address: 0x11377c, Func Offset: 0x1cc
	// Line 1427, Address: 0x113780, Func Offset: 0x1d0
	// Line 1428, Address: 0x113790, Func Offset: 0x1e0
	// Line 1425, Address: 0x113794, Func Offset: 0x1e4
	// Line 1427, Address: 0x11379c, Func Offset: 0x1ec
	// Line 1428, Address: 0x1137b0, Func Offset: 0x200
	// Line 1427, Address: 0x1137b4, Func Offset: 0x204
	// Line 1428, Address: 0x1137b8, Func Offset: 0x208
	// Line 1427, Address: 0x1137c4, Func Offset: 0x214
	// Line 1428, Address: 0x1137c8, Func Offset: 0x218
	// Line 1429, Address: 0x1137d0, Func Offset: 0x220
	// Line 1427, Address: 0x1137d8, Func Offset: 0x228
	// Line 1428, Address: 0x1137dc, Func Offset: 0x22c
	// Line 1429, Address: 0x1137e4, Func Offset: 0x234
	// Line 1428, Address: 0x1137f8, Func Offset: 0x248
	// Line 1429, Address: 0x113804, Func Offset: 0x254
	// Line 1444, Address: 0x113818, Func Offset: 0x268
	// Func End, Address: 0x113844, Func Offset: 0x294
}

// xMat4x3RMul3x3__FP8_xMat4x3PC8_xMat3x3PC8_xMat4x3
// Start address: 0x113850
void xMat4x3RMul3x3(_xMat4x3* o, _xMat3x3* m3x3, _xMat4x3* m)
{
	// Line 1359, Address: 0x113850, Func Offset: 0
	// Line 1360, Address: 0x113864, Func Offset: 0x14
	// Line 1361, Address: 0x11386c, Func Offset: 0x1c
	// Line 1362, Address: 0x113874, Func Offset: 0x24
	// Line 1364, Address: 0x11388c, Func Offset: 0x3c
	// Func End, Address: 0x1138a0, Func Offset: 0x50
}

// xMat4x3LMul3x3__FP8_xMat4x3PC8_xMat4x3PC8_xMat3x3
// Start address: 0x1138a0
void xMat4x3LMul3x3(_xMat4x3* o, _xMat4x3* m, _xMat3x3* m3x3)
{
	// Line 1352, Address: 0x1138a0, Func Offset: 0
	// Line 1354, Address: 0x1138b8, Func Offset: 0x18
	// Line 1355, Address: 0x113918, Func Offset: 0x78
	// Line 1356, Address: 0x113920, Func Offset: 0x80
	// Line 1357, Address: 0x11392c, Func Offset: 0x8c
	// Func End, Address: 0x113948, Func Offset: 0xa8
}

// xMat4x3Mul__FP8_xMat4x3PC8_xMat4x3PC8_xMat4x3
// Start address: 0x113950
void xMat4x3Mul(_xMat4x3* o, _xMat4x3* a, _xMat4x3* b)
{
	// Line 1345, Address: 0x113950, Func Offset: 0
	// Line 1347, Address: 0x113968, Func Offset: 0x18
	// Line 1348, Address: 0x1139e0, Func Offset: 0x90
	// Line 1349, Address: 0x1139e8, Func Offset: 0x98
	// Line 1350, Address: 0x1139f4, Func Offset: 0xa4
	// Func End, Address: 0x113a10, Func Offset: 0xc0
}

// xMat4x3Rot__FP8_xMat4x3PC6_xVec3fPC6_xVec3
// Start address: 0x113a20
void xMat4x3Rot(_xMat4x3* m, _xVec3* a, float32 t, _xVec3* p)
{
	_xMat4x3 temp;
	// Line 1309, Address: 0x113a20, Func Offset: 0
	// Line 1311, Address: 0x113a38, Func Offset: 0x18
	// Line 1312, Address: 0x113a50, Func Offset: 0x30
	// Line 1313, Address: 0x113a54, Func Offset: 0x34
	// Line 1312, Address: 0x113a64, Func Offset: 0x44
	// Line 1313, Address: 0x113a74, Func Offset: 0x54
	// Line 1314, Address: 0x113a7c, Func Offset: 0x5c
	// Line 1315, Address: 0x113a98, Func Offset: 0x78
	// Line 1314, Address: 0x113a9c, Func Offset: 0x7c
	// Line 1315, Address: 0x113ab8, Func Offset: 0x98
	// Line 1316, Address: 0x113b7c, Func Offset: 0x15c
	// Func End, Address: 0x113b94, Func Offset: 0x174
}

// xMat4x3Orthonormalize__FP8_xMat4x3PC8_xMat4x3
// Start address: 0x113ba0
void xMat4x3Orthonormalize(_xMat4x3* o, _xMat4x3* m)
{
	// Line 1291, Address: 0x113ba0, Func Offset: 0
	// Line 1300, Address: 0x113bb0, Func Offset: 0x10
	// Line 1301, Address: 0x113bc8, Func Offset: 0x28
	// Line 1300, Address: 0x113bcc, Func Offset: 0x2c
	// Line 1301, Address: 0x113bd0, Func Offset: 0x30
	// Line 1300, Address: 0x113bd4, Func Offset: 0x34
	// Line 1301, Address: 0x113bf4, Func Offset: 0x54
	// Line 1302, Address: 0x113c74, Func Offset: 0xd4
	// Line 1303, Address: 0x113c8c, Func Offset: 0xec
	// Line 1302, Address: 0x113c90, Func Offset: 0xf0
	// Line 1303, Address: 0x113c94, Func Offset: 0xf4
	// Line 1302, Address: 0x113c98, Func Offset: 0xf8
	// Line 1303, Address: 0x113cb8, Func Offset: 0x118
	// Line 1304, Address: 0x113d34, Func Offset: 0x194
	// Line 1305, Address: 0x113d4c, Func Offset: 0x1ac
	// Line 1304, Address: 0x113d50, Func Offset: 0x1b0
	// Line 1305, Address: 0x113d54, Func Offset: 0x1b4
	// Line 1304, Address: 0x113d58, Func Offset: 0x1b8
	// Line 1305, Address: 0x113d78, Func Offset: 0x1d8
	// Line 1306, Address: 0x113df4, Func Offset: 0x254
	// Line 1307, Address: 0x113e0c, Func Offset: 0x26c
	// Func End, Address: 0x113e20, Func Offset: 0x280
}

// xMat3x3Tolocal__FP6_xVec3PC8_xMat3x3PC6_xVec3
// Start address: 0x113e20
void xMat3x3Tolocal(_xVec3* o, _xMat3x3* m, _xVec3* v)
{
	// Line 1279, Address: 0x113e20, Func Offset: 0
	// Line 1283, Address: 0x113e28, Func Offset: 0x8
	// Line 1285, Address: 0x113e2c, Func Offset: 0xc
	// Line 1280, Address: 0x113e30, Func Offset: 0x10
	// Line 1279, Address: 0x113e34, Func Offset: 0x14
	// Line 1283, Address: 0x113e3c, Func Offset: 0x1c
	// Line 1280, Address: 0x113e40, Func Offset: 0x20
	// Line 1281, Address: 0x113e44, Func Offset: 0x24
	// Line 1279, Address: 0x113e4c, Func Offset: 0x2c
	// Line 1280, Address: 0x113e50, Func Offset: 0x30
	// Line 1281, Address: 0x113e54, Func Offset: 0x34
	// Line 1283, Address: 0x113e58, Func Offset: 0x38
	// Line 1279, Address: 0x113e5c, Func Offset: 0x3c
	// Line 1283, Address: 0x113e60, Func Offset: 0x40
	// Line 1285, Address: 0x113e64, Func Offset: 0x44
	// Line 1279, Address: 0x113e68, Func Offset: 0x48
	// Line 1285, Address: 0x113e6c, Func Offset: 0x4c
	// Line 1283, Address: 0x113e70, Func Offset: 0x50
	// Line 1280, Address: 0x113e74, Func Offset: 0x54
	// Line 1283, Address: 0x113e80, Func Offset: 0x60
	// Line 1281, Address: 0x113e8c, Func Offset: 0x6c
	// Line 1280, Address: 0x113e94, Func Offset: 0x74
	// Line 1281, Address: 0x113e98, Func Offset: 0x78
	// Line 1283, Address: 0x113ea0, Func Offset: 0x80
	// Line 1285, Address: 0x113ebc, Func Offset: 0x9c
	// Line 1283, Address: 0x113ec0, Func Offset: 0xa0
	// Line 1285, Address: 0x113ecc, Func Offset: 0xac
	// Line 1286, Address: 0x113ef0, Func Offset: 0xd0
	// Func End, Address: 0x113ef8, Func Offset: 0xd8
}

// xMat3x3RMulVec__FP6_xVec3PC8_xMat3x3PC6_xVec3
// Start address: 0x113f00
void xMat3x3RMulVec(_xVec3* o, _xMat3x3* m, _xVec3* v)
{
	float32 z;
	float32 y;
	// Line 1272, Address: 0x113f00, Func Offset: 0
	// Line 1273, Address: 0x113f08, Func Offset: 0x8
	// Line 1274, Address: 0x113f0c, Func Offset: 0xc
	// Line 1272, Address: 0x113f10, Func Offset: 0x10
	// Line 1273, Address: 0x113f18, Func Offset: 0x18
	// Line 1272, Address: 0x113f1c, Func Offset: 0x1c
	// Line 1273, Address: 0x113f28, Func Offset: 0x28
	// Line 1272, Address: 0x113f2c, Func Offset: 0x2c
	// Line 1274, Address: 0x113f30, Func Offset: 0x30
	// Line 1273, Address: 0x113f34, Func Offset: 0x34
	// Line 1274, Address: 0x113f38, Func Offset: 0x38
	// Line 1272, Address: 0x113f3c, Func Offset: 0x3c
	// Line 1273, Address: 0x113f40, Func Offset: 0x40
	// Line 1272, Address: 0x113f44, Func Offset: 0x44
	// Line 1273, Address: 0x113f48, Func Offset: 0x48
	// Line 1274, Address: 0x113f4c, Func Offset: 0x4c
	// Line 1273, Address: 0x113f54, Func Offset: 0x54
	// Line 1274, Address: 0x113f58, Func Offset: 0x58
	// Line 1275, Address: 0x113f68, Func Offset: 0x68
	// Func End, Address: 0x113f70, Func Offset: 0x70
}

// xMat3x3LMulVec__FP6_xVec3PC8_xMat3x3PC6_xVec3
// Start address: 0x113f70
void xMat3x3LMulVec(_xVec3* o, _xMat3x3* m, _xVec3* v)
{
	// Line 1264, Address: 0x113f70, Func Offset: 0
	// Line 1265, Address: 0x113f78, Func Offset: 0x8
	// Line 1264, Address: 0x113f7c, Func Offset: 0xc
	// Line 1265, Address: 0x113f84, Func Offset: 0x14
	// Line 1266, Address: 0x113f88, Func Offset: 0x18
	// Line 1264, Address: 0x113f8c, Func Offset: 0x1c
	// Line 1265, Address: 0x113f98, Func Offset: 0x28
	// Line 1264, Address: 0x113f9c, Func Offset: 0x2c
	// Line 1266, Address: 0x113fa0, Func Offset: 0x30
	// Line 1265, Address: 0x113fa4, Func Offset: 0x34
	// Line 1266, Address: 0x113fa8, Func Offset: 0x38
	// Line 1264, Address: 0x113fac, Func Offset: 0x3c
	// Line 1265, Address: 0x113fb4, Func Offset: 0x44
	// Line 1267, Address: 0x113fb8, Func Offset: 0x48
	// Line 1265, Address: 0x113fbc, Func Offset: 0x4c
	// Line 1266, Address: 0x113fc4, Func Offset: 0x54
	// Line 1267, Address: 0x113fc8, Func Offset: 0x58
	// Line 1266, Address: 0x113fcc, Func Offset: 0x5c
	// Line 1268, Address: 0x113fd8, Func Offset: 0x68
	// Func End, Address: 0x113fe0, Func Offset: 0x70
}

// xMat3x3Mul__FP8_xMat3x3PC8_xMat3x3PC8_xMat3x3
// Start address: 0x113fe0
void xMat3x3Mul(_xMat3x3* o, _xMat3x3* a, _xMat3x3* b)
{
	uint32 usetemp;
	_xMat3x3* tp;
	_xMat3x3 temp;
	// Line 1223, Address: 0x113fe0, Func Offset: 0
	// Line 1220, Address: 0x113fe4, Func Offset: 0x4
	// Line 1223, Address: 0x113fe8, Func Offset: 0x8
	// Line 1224, Address: 0x114000, Func Offset: 0x20
	// Line 1225, Address: 0x114008, Func Offset: 0x28
	// Line 1229, Address: 0x11400c, Func Offset: 0x2c
	// Line 1232, Address: 0x114038, Func Offset: 0x58
	// Line 1235, Address: 0x114064, Func Offset: 0x84
	// Line 1238, Address: 0x114090, Func Offset: 0xb0
	// Line 1241, Address: 0x1140bc, Func Offset: 0xdc
	// Line 1244, Address: 0x1140e8, Func Offset: 0x108
	// Line 1247, Address: 0x114114, Func Offset: 0x134
	// Line 1250, Address: 0x114140, Func Offset: 0x160
	// Line 1253, Address: 0x11416c, Func Offset: 0x18c
	// Line 1256, Address: 0x114194, Func Offset: 0x1b4
	// Line 1257, Address: 0x11419c, Func Offset: 0x1bc
	// Line 1258, Address: 0x1141a8, Func Offset: 0x1c8
	// Line 1259, Address: 0x1141b0, Func Offset: 0x1d0
	// Line 1261, Address: 0x1141b4, Func Offset: 0x1d4
	// Func End, Address: 0x1141c0, Func Offset: 0x1e0
}

// xMat3x3Transpose__FP8_xMat3x3PC8_xMat3x3
// Start address: 0x1141c0
void xMat3x3Transpose(_xMat3x3* o, _xMat3x3* m)
{
	float32 temp;
	float32 temp;
	float32 temp;
	// Line 1202, Address: 0x1141c0, Func Offset: 0
	// Line 1203, Address: 0x1141c8, Func Offset: 0x8
	// Line 1204, Address: 0x1141d8, Func Offset: 0x18
	// Line 1205, Address: 0x1141e8, Func Offset: 0x28
	// Line 1206, Address: 0x1141f4, Func Offset: 0x34
	// Line 1207, Address: 0x1141fc, Func Offset: 0x3c
	// Line 1208, Address: 0x114204, Func Offset: 0x44
	// Line 1209, Address: 0x11420c, Func Offset: 0x4c
	// Line 1210, Address: 0x114214, Func Offset: 0x54
	// Line 1211, Address: 0x11421c, Func Offset: 0x5c
	// Line 1212, Address: 0x114224, Func Offset: 0x64
	// Line 1213, Address: 0x11422c, Func Offset: 0x6c
	// Line 1214, Address: 0x114234, Func Offset: 0x74
	// Line 1215, Address: 0x11423c, Func Offset: 0x7c
	// Line 1216, Address: 0x114244, Func Offset: 0x84
	// Line 1218, Address: 0x114248, Func Offset: 0x88
	// Func End, Address: 0x114250, Func Offset: 0x90
}

// xMat3x3RMulRotY__FP8_xMat3x3PC8_xMat3x3f
// Start address: 0x114250
void xMat3x3RMulRotY(_xMat3x3* o, _xMat3x3* m, float32 t)
{
	float32 temp;
	float32 b;
	float32 a;
	// Line 1119, Address: 0x114250, Func Offset: 0
	// Line 1120, Address: 0x11426c, Func Offset: 0x1c
	// Line 1121, Address: 0x114274, Func Offset: 0x24
	// Line 1122, Address: 0x114280, Func Offset: 0x30
	// Line 1124, Address: 0x114288, Func Offset: 0x38
	// Line 1125, Address: 0x114298, Func Offset: 0x48
	// Line 1126, Address: 0x1142a4, Func Offset: 0x54
	// Line 1127, Address: 0x1142a8, Func Offset: 0x58
	// Line 1128, Address: 0x1142b8, Func Offset: 0x68
	// Line 1129, Address: 0x1142c4, Func Offset: 0x74
	// Line 1130, Address: 0x1142c8, Func Offset: 0x78
	// Line 1131, Address: 0x1142d8, Func Offset: 0x88
	// Line 1133, Address: 0x1142e4, Func Offset: 0x94
	// Line 1134, Address: 0x1142ec, Func Offset: 0x9c
	// Line 1135, Address: 0x114300, Func Offset: 0xb0
	// Line 1136, Address: 0x114308, Func Offset: 0xb8
	// Line 1137, Address: 0x11431c, Func Offset: 0xcc
	// Line 1138, Address: 0x114330, Func Offset: 0xe0
	// Line 1139, Address: 0x114338, Func Offset: 0xe8
	// Line 1140, Address: 0x11434c, Func Offset: 0xfc
	// Line 1141, Address: 0x114360, Func Offset: 0x110
	// Line 1142, Address: 0x114368, Func Offset: 0x118
	// Line 1143, Address: 0x11437c, Func Offset: 0x12c
	// Line 1145, Address: 0x114380, Func Offset: 0x130
	// Func End, Address: 0x114398, Func Offset: 0x148
}

// xMat3x3LMulRotY__FP8_xMat3x3PC8_xMat3x3f
// Start address: 0x1143a0
void xMat3x3LMulRotY(_xMat3x3* o, _xMat3x3* m, float32 t)
{
	float32 temp;
	float32 b;
	float32 a;
	// Line 1093, Address: 0x1143a0, Func Offset: 0
	// Line 1094, Address: 0x1143bc, Func Offset: 0x1c
	// Line 1095, Address: 0x1143c4, Func Offset: 0x24
	// Line 1096, Address: 0x1143d0, Func Offset: 0x30
	// Line 1098, Address: 0x1143d8, Func Offset: 0x38
	// Line 1099, Address: 0x1143e8, Func Offset: 0x48
	// Line 1100, Address: 0x1143f4, Func Offset: 0x54
	// Line 1101, Address: 0x1143f8, Func Offset: 0x58
	// Line 1102, Address: 0x114408, Func Offset: 0x68
	// Line 1103, Address: 0x114414, Func Offset: 0x74
	// Line 1104, Address: 0x114418, Func Offset: 0x78
	// Line 1105, Address: 0x114428, Func Offset: 0x88
	// Line 1107, Address: 0x114434, Func Offset: 0x94
	// Line 1108, Address: 0x11443c, Func Offset: 0x9c
	// Line 1109, Address: 0x114454, Func Offset: 0xb4
	// Line 1110, Address: 0x114468, Func Offset: 0xc8
	// Line 1111, Address: 0x11447c, Func Offset: 0xdc
	// Line 1112, Address: 0x114490, Func Offset: 0xf0
	// Line 1113, Address: 0x1144a4, Func Offset: 0x104
	// Line 1114, Address: 0x1144b8, Func Offset: 0x118
	// Line 1115, Address: 0x1144cc, Func Offset: 0x12c
	// Line 1117, Address: 0x1144d0, Func Offset: 0x130
	// Func End, Address: 0x1144e8, Func Offset: 0x148
}

// xMat3x3RotY__FP8_xMat3x3f
// Start address: 0x1144f0
void xMat3x3RotY(_xMat3x3* m, float32 t)
{
	float32 b;
	float32 a;
	// Line 1014, Address: 0x1144f0, Func Offset: 0
	// Line 1015, Address: 0x114504, Func Offset: 0x14
	// Line 1016, Address: 0x11450c, Func Offset: 0x1c
	// Line 1017, Address: 0x114518, Func Offset: 0x28
	// Line 1018, Address: 0x11451c, Func Offset: 0x2c
	// Line 1017, Address: 0x114520, Func Offset: 0x30
	// Line 1018, Address: 0x11452c, Func Offset: 0x3c
	// Line 1019, Address: 0x114548, Func Offset: 0x58
	// Line 1020, Address: 0x114554, Func Offset: 0x64
	// Line 1021, Address: 0x114558, Func Offset: 0x68
	// Func End, Address: 0x11456c, Func Offset: 0x7c
}

// xMat3x3RotC__FP8_xMat3x3ffff
// Start address: 0x114570
void xMat3x3RotC(_xMat3x3* m, float32 _x, float32 _y, float32 _z, float32 t)
{
	float32 c;
	float32 b;
	float32 a;
	// Line 984, Address: 0x114570, Func Offset: 0
	// Line 986, Address: 0x11458c, Func Offset: 0x1c
	// Line 987, Address: 0x1145ac, Func Offset: 0x3c
	// Line 988, Address: 0x1145bc, Func Offset: 0x4c
	// Line 990, Address: 0x1145c4, Func Offset: 0x54
	// Line 991, Address: 0x1145cc, Func Offset: 0x5c
	// Line 992, Address: 0x1145d8, Func Offset: 0x68
	// Line 994, Address: 0x1145e4, Func Offset: 0x74
	// Line 992, Address: 0x1145e8, Func Offset: 0x78
	// Line 993, Address: 0x1145ec, Func Offset: 0x7c
	// Line 994, Address: 0x1145fc, Func Offset: 0x8c
	// Line 995, Address: 0x114608, Func Offset: 0x98
	// Line 997, Address: 0x114610, Func Offset: 0xa0
	// Line 995, Address: 0x114614, Func Offset: 0xa4
	// Line 998, Address: 0x11461c, Func Offset: 0xac
	// Line 995, Address: 0x114620, Func Offset: 0xb0
	// Line 1001, Address: 0x114624, Func Offset: 0xb4
	// Line 995, Address: 0x114628, Func Offset: 0xb8
	// Line 999, Address: 0x11462c, Func Offset: 0xbc
	// Line 997, Address: 0x114634, Func Offset: 0xc4
	// Line 1000, Address: 0x11463c, Func Offset: 0xcc
	// Line 996, Address: 0x114640, Func Offset: 0xd0
	// Line 998, Address: 0x11464c, Func Offset: 0xdc
	// Line 997, Address: 0x114650, Func Offset: 0xe0
	// Line 998, Address: 0x114654, Func Offset: 0xe4
	// Line 1000, Address: 0x11465c, Func Offset: 0xec
	// Line 999, Address: 0x114660, Func Offset: 0xf0
	// Line 1001, Address: 0x114664, Func Offset: 0xf4
	// Line 1000, Address: 0x114668, Func Offset: 0xf8
	// Line 1001, Address: 0x11466c, Func Offset: 0xfc
	// Line 1002, Address: 0x114670, Func Offset: 0x100
	// Line 1003, Address: 0x114674, Func Offset: 0x104
	// Func End, Address: 0x114694, Func Offset: 0x124
}

// xMat3x3Euler__FP8_xMat3x3fff
// Start address: 0x1146a0
void xMat3x3Euler(_xMat3x3* m, float32 yaw, float32 pitch, float32 roll)
{
	float32 cr;
	float32 sr;
	float32 cp;
	float32 sp;
	float32 cy;
	float32 sy;
	// Line 965, Address: 0x1146a0, Func Offset: 0
	// Line 966, Address: 0x1146cc, Func Offset: 0x2c
	// Line 967, Address: 0x1146d4, Func Offset: 0x34
	// Line 968, Address: 0x1146e4, Func Offset: 0x44
	// Line 969, Address: 0x1146ec, Func Offset: 0x4c
	// Line 970, Address: 0x1146fc, Func Offset: 0x5c
	// Line 971, Address: 0x114704, Func Offset: 0x64
	// Line 972, Address: 0x114710, Func Offset: 0x70
	// Line 973, Address: 0x114720, Func Offset: 0x80
	// Line 974, Address: 0x114728, Func Offset: 0x88
	// Line 975, Address: 0x11473c, Func Offset: 0x9c
	// Line 977, Address: 0x11474c, Func Offset: 0xac
	// Line 976, Address: 0x114754, Func Offset: 0xb4
	// Line 977, Address: 0x11475c, Func Offset: 0xbc
	// Line 978, Address: 0x114760, Func Offset: 0xc0
	// Line 980, Address: 0x114764, Func Offset: 0xc4
	// Line 978, Address: 0x114768, Func Offset: 0xc8
	// Line 979, Address: 0x11476c, Func Offset: 0xcc
	// Line 980, Address: 0x114774, Func Offset: 0xd4
	// Line 981, Address: 0x114778, Func Offset: 0xd8
	// Line 982, Address: 0x11477c, Func Offset: 0xdc
	// Func End, Address: 0x1147a0, Func Offset: 0x100
}

// xMat3x3Euler__FP8_xMat3x3P6_xVec3
// Start address: 0x1147a0
void xMat3x3Euler(_xMat3x3* m, _xVec3* ypr)
{
	// Line 962, Address: 0x1147a0, Func Offset: 0
	// Func End, Address: 0x1147b0, Func Offset: 0x10
}

// xMat3x3LookVec__FP8_xMat3x3PC6_xVec3
// Start address: 0x1147b0
float32 xMat3x3LookVec(_xMat3x3* m, _xVec3* at)
{
	// Line 837, Address: 0x1147b0, Func Offset: 0
	// Line 842, Address: 0x1147c4, Func Offset: 0x14
	// Line 846, Address: 0x1148b0, Func Offset: 0x100
	// Line 850, Address: 0x1148bc, Func Offset: 0x10c
	// Line 846, Address: 0x1148c8, Func Offset: 0x118
	// Line 850, Address: 0x1148e8, Func Offset: 0x138
	// Line 851, Address: 0x114914, Func Offset: 0x164
	// Line 852, Address: 0x114918, Func Offset: 0x168
	// Line 853, Address: 0x11491c, Func Offset: 0x16c
	// Line 854, Address: 0x114920, Func Offset: 0x170
	// Line 855, Address: 0x114924, Func Offset: 0x174
	// Line 856, Address: 0x114928, Func Offset: 0x178
	// Line 857, Address: 0x11492c, Func Offset: 0x17c
	// Line 858, Address: 0x114930, Func Offset: 0x180
	// Line 860, Address: 0x114938, Func Offset: 0x188
	// Line 862, Address: 0x114944, Func Offset: 0x194
	// Line 863, Address: 0x114978, Func Offset: 0x1c8
	// Line 864, Address: 0x11497c, Func Offset: 0x1cc
	// Line 865, Address: 0x114980, Func Offset: 0x1d0
	// Line 866, Address: 0x114984, Func Offset: 0x1d4
	// Line 867, Address: 0x114988, Func Offset: 0x1d8
	// Line 868, Address: 0x11498c, Func Offset: 0x1dc
	// Line 869, Address: 0x114990, Func Offset: 0x1e0
	// Line 870, Address: 0x114994, Func Offset: 0x1e4
	// Line 872, Address: 0x11499c, Func Offset: 0x1ec
	// Line 875, Address: 0x1149a8, Func Offset: 0x1f8
	// Line 876, Address: 0x1149f8, Func Offset: 0x248
	// Line 877, Address: 0x1149fc, Func Offset: 0x24c
	// Line 878, Address: 0x114a00, Func Offset: 0x250
	// Line 879, Address: 0x114a04, Func Offset: 0x254
	// Line 880, Address: 0x114a08, Func Offset: 0x258
	// Line 881, Address: 0x114a0c, Func Offset: 0x25c
	// Line 882, Address: 0x114a10, Func Offset: 0x260
	// Line 883, Address: 0x114a14, Func Offset: 0x264
	// Line 877, Address: 0x114a18, Func Offset: 0x268
	// Line 885, Address: 0x114a1c, Func Offset: 0x26c
	// Line 890, Address: 0x114a24, Func Offset: 0x274
	// Line 894, Address: 0x114a28, Func Offset: 0x278
	// Line 891, Address: 0x114a30, Func Offset: 0x280
	// Line 890, Address: 0x114a34, Func Offset: 0x284
	// Line 891, Address: 0x114a38, Func Offset: 0x288
	// Line 892, Address: 0x114a3c, Func Offset: 0x28c
	// Line 894, Address: 0x114a48, Func Offset: 0x298
	// Line 897, Address: 0x114abc, Func Offset: 0x30c
	// Line 905, Address: 0x114ad4, Func Offset: 0x324
	// Line 897, Address: 0x114ad8, Func Offset: 0x328
	// Line 900, Address: 0x114afc, Func Offset: 0x34c
	// Line 902, Address: 0x114b38, Func Offset: 0x388
	// Line 906, Address: 0x114b3c, Func Offset: 0x38c
	// Func End, Address: 0x114b54, Func Offset: 0x3a4
}

// xMat4x3MoveLocalAt__FP8_xMat4x3f
// Start address: 0x114b60
void xMat4x3MoveLocalAt(_xMat4x3* m, float32 mag)
{
	// Line 817, Address: 0x114b60, Func Offset: 0
	// Line 818, Address: 0x114b74, Func Offset: 0x14
	// Line 819, Address: 0x114b88, Func Offset: 0x28
	// Line 820, Address: 0x114b98, Func Offset: 0x38
	// Func End, Address: 0x114ba0, Func Offset: 0x40
}

// xMat4x3MoveLocalUp__FP8_xMat4x3f
// Start address: 0x114ba0
void xMat4x3MoveLocalUp(_xMat4x3* m, float32 mag)
{
	// Line 810, Address: 0x114ba0, Func Offset: 0
	// Line 811, Address: 0x114bb4, Func Offset: 0x14
	// Line 812, Address: 0x114bc8, Func Offset: 0x28
	// Line 813, Address: 0x114bd8, Func Offset: 0x38
	// Func End, Address: 0x114be0, Func Offset: 0x40
}

// xMat4x3MoveLocalRight__FP8_xMat4x3f
// Start address: 0x114be0
void xMat4x3MoveLocalRight(_xMat4x3* m, float32 mag)
{
	// Line 803, Address: 0x114be0, Func Offset: 0
	// Line 804, Address: 0x114bf4, Func Offset: 0x14
	// Line 805, Address: 0x114c08, Func Offset: 0x28
	// Line 806, Address: 0x114c18, Func Offset: 0x38
	// Func End, Address: 0x114c20, Func Offset: 0x40
}

// xMat3x3GetEuler__FPC8_xMat3x3P6_xVec3
// Start address: 0x114c20
void xMat3x3GetEuler(_xMat3x3* m, _xVec3* a)
{
	float32 roll;
	float32 yaw;
	float32 pitch;
	// Line 769, Address: 0x114c20, Func Offset: 0
	// Line 770, Address: 0x114c38, Func Offset: 0x18
	// Line 774, Address: 0x114c48, Func Offset: 0x28
	// Line 770, Address: 0x114c4c, Func Offset: 0x2c
	// Line 774, Address: 0x114c50, Func Offset: 0x30
	// Line 775, Address: 0x114c6c, Func Offset: 0x4c
	// Line 776, Address: 0x114c88, Func Offset: 0x68
	// Line 777, Address: 0x114c9c, Func Offset: 0x7c
	// Line 778, Address: 0x114cb4, Func Offset: 0x94
	// Line 780, Address: 0x114cbc, Func Offset: 0x9c
	// Line 781, Address: 0x114cd8, Func Offset: 0xb8
	// Line 783, Address: 0x114cdc, Func Offset: 0xbc
	// Line 785, Address: 0x114ce4, Func Offset: 0xc4
	// Line 786, Address: 0x114d00, Func Offset: 0xe0
	// Line 788, Address: 0x114d04, Func Offset: 0xe4
	// Line 789, Address: 0x114d08, Func Offset: 0xe8
	// Line 790, Address: 0x114d0c, Func Offset: 0xec
	// Line 791, Address: 0x114d10, Func Offset: 0xf0
	// Func End, Address: 0x114d2c, Func Offset: 0x10c
}

// xMat3x3GetScale__FPC8_xMat3x3P6_xVec3
// Start address: 0x114d30
void xMat3x3GetScale(_xMat3x3* m, _xVec3* s)
{
	// Line 763, Address: 0x114d30, Func Offset: 0
	// Line 764, Address: 0x114d40, Func Offset: 0x10
	// Line 765, Address: 0x114d6c, Func Offset: 0x3c
	// Line 766, Address: 0x114d90, Func Offset: 0x60
	// Line 767, Address: 0x114db4, Func Offset: 0x84
	// Func End, Address: 0x114dc8, Func Offset: 0x98
}

// xMat3x3Normalize__FP8_xMat3x3PC8_xMat3x3
// Start address: 0x114dd0
void xMat3x3Normalize(_xMat3x3* o, _xMat3x3* m)
{
	// Line 757, Address: 0x114dd0, Func Offset: 0
	// Line 758, Address: 0x114de0, Func Offset: 0x10
	// Line 759, Address: 0x114eb0, Func Offset: 0xe0
	// Line 760, Address: 0x114f84, Func Offset: 0x1b4
	// Line 761, Address: 0x115058, Func Offset: 0x288
	// Func End, Address: 0x11506c, Func Offset: 0x29c
}

// xLine3VecDist2__FPC6_xVec3PC6_xVec3PC6_xVec3P7_xIsect
// Start address: 0x115070
void xLine3VecDist2(_xVec3* p1, _xVec3* p2, _xVec3* v, _xIsect* isx)
{
	// Line 705, Address: 0x115070, Func Offset: 0
	// Line 707, Address: 0x11507c, Func Offset: 0xc
	// Line 705, Address: 0x115080, Func Offset: 0x10
	// Line 707, Address: 0x115090, Func Offset: 0x20
	// Line 705, Address: 0x115098, Func Offset: 0x28
	// Line 707, Address: 0x11509c, Func Offset: 0x2c
	// Line 705, Address: 0x1150a4, Func Offset: 0x34
	// Line 710, Address: 0x1150a8, Func Offset: 0x38
	// Line 707, Address: 0x1150b0, Func Offset: 0x40
	// Line 709, Address: 0x1150c8, Func Offset: 0x58
	// Line 710, Address: 0x1150e4, Func Offset: 0x74
	// Line 712, Address: 0x1150f4, Func Offset: 0x84
	// Line 713, Address: 0x115104, Func Offset: 0x94
	// Line 714, Address: 0x11510c, Func Offset: 0x9c
	// Line 715, Address: 0x115118, Func Offset: 0xa8
	// Line 717, Address: 0x115128, Func Offset: 0xb8
	// Line 718, Address: 0x115158, Func Offset: 0xe8
	// Line 719, Address: 0x115174, Func Offset: 0x104
	// Line 723, Address: 0x11517c, Func Offset: 0x10c
	// Line 726, Address: 0x115198, Func Offset: 0x128
	// Func End, Address: 0x1151a0, Func Offset: 0x130
}

// xVec3Normalize__FP6_xVec3PC6_xVec3
// Start address: 0x1151a0
float32 xVec3Normalize(_xVec3* o, _xVec3* v)
{
	float32 len;
	float32 one_len;
	// Line 672, Address: 0x1151a0, Func Offset: 0
	// Line 673, Address: 0x1151b0, Func Offset: 0x10
	// Line 674, Address: 0x1151b8, Func Offset: 0x18
	// Line 673, Address: 0x1151bc, Func Offset: 0x1c
	// Line 674, Address: 0x1151c0, Func Offset: 0x20
	// Line 673, Address: 0x1151c8, Func Offset: 0x28
	// Line 674, Address: 0x1151d8, Func Offset: 0x38
	// Line 675, Address: 0x1151e8, Func Offset: 0x48
	// Line 676, Address: 0x1151f0, Func Offset: 0x50
	// Line 678, Address: 0x115204, Func Offset: 0x64
	// Line 680, Address: 0x115214, Func Offset: 0x74
	// Line 681, Address: 0x11522c, Func Offset: 0x8c
	// Line 684, Address: 0x115234, Func Offset: 0x94
	// Line 686, Address: 0x115250, Func Offset: 0xb0
	// Line 688, Address: 0x11525c, Func Offset: 0xbc
	// Line 689, Address: 0x115264, Func Offset: 0xc4
	// Line 690, Address: 0x11526c, Func Offset: 0xcc
	// Line 689, Address: 0x115270, Func Offset: 0xd0
	// Line 690, Address: 0x115274, Func Offset: 0xd4
	// Line 692, Address: 0x115294, Func Offset: 0xf4
	// Func End, Address: 0x1152a8, Func Offset: 0x108
}

// xVec3LengthFast__Ffff
// Start address: 0x1152b0
float32 xVec3LengthFast(float32 x, float32 y, float32 z)
{
	float32 temp;
	float32 temp;
	float32 temp;
	float32 min;
	float32 med;
	float32 max;
	// Line 511, Address: 0x1152b0, Func Offset: 0
	// Line 512, Address: 0x1152c4, Func Offset: 0x14
	// Line 513, Address: 0x1152cc, Func Offset: 0x1c
	// Line 514, Address: 0x1152d8, Func Offset: 0x28
	// Line 515, Address: 0x1152e4, Func Offset: 0x34
	// Line 516, Address: 0x1152f4, Func Offset: 0x44
	// Line 518, Address: 0x1152fc, Func Offset: 0x4c
	// Line 519, Address: 0x11530c, Func Offset: 0x5c
	// Line 521, Address: 0x115314, Func Offset: 0x64
	// Line 522, Address: 0x115324, Func Offset: 0x74
	// Line 524, Address: 0x115330, Func Offset: 0x80
	// Line 525, Address: 0x115334, Func Offset: 0x84
	// Line 524, Address: 0x115338, Func Offset: 0x88
	// Line 525, Address: 0x115350, Func Offset: 0xa0
	// Line 524, Address: 0x115358, Func Offset: 0xa8
	// Line 525, Address: 0x11535c, Func Offset: 0xac
	// Func End, Address: 0x115364, Func Offset: 0xb4
}

// xMath3Exit__Fv
// Start address: 0x115370
void xMath3Exit()
{
	// Line 70, Address: 0x115370, Func Offset: 0
	// Func End, Address: 0x115378, Func Offset: 0x8
}

// xMath3Init__Fv
// Start address: 0x115380
void xMath3Init()
{
	// Line 61, Address: 0x115380, Func Offset: 0
	// Func End, Address: 0x115388, Func Offset: 0x8
}

