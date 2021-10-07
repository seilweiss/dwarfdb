



void MovePoint_Unload(void* userdata);
void LightKit_Unload(void* userdata);
void Anim_Unload();
void* ATBL_Read(void* indata, uint32* outsize);
void* FindAssetCB(uint32 ID);
uint32 soundEffectCB(uint32 cbenum, xAnimActiveEffect* acteffect, void* object);
uint32 dummyEffectCB();
void TextureRW3_Unload(void* userdata);
void* RWTX_Read(void* indata, uint32 insize, uint32* outsize);
RwTexture* TexCB(RwTexture* texture, void* data);
void JSP_Unload(void* userdata);
void* JSP_Read(uint32 assetid, void* indata, uint32 insize, uint32* outsize);
void BSP_Unload();
void* BSP_Read(void* indata, uint32 insize, uint32* outsize);
void Model_Unload(void* userdata);
void* init(void* indata, uint32 insize, uint32* outsize);
void* Spline_Read(void* indata, uint32 insize, uint32* outsize);
void* Curve_Read(void* indata, uint32 insize, uint32* outsize);
void* Model_Read(void* indata, uint32 insize, uint32* outsize);
void zAssetShutdown();
void zAssetStartup();
void* Dash_Track_Read();
void* Navigation_Mesh_Read();

// MovePoint_Unload__FPvUi
// Start address: 0x397be0
void MovePoint_Unload(void* userdata)
{
	// Line 1646, Address: 0x397be0, Func Offset: 0
	// Func End, Address: 0x397be8, Func Offset: 0x8
}

// LightKit_Unload__FPvUi
// Start address: 0x397bf0
void LightKit_Unload(void* userdata)
{
	// Line 1592, Address: 0x397bf0, Func Offset: 0
	// Func End, Address: 0x397bf8, Func Offset: 0x8
}

// Anim_Unload__FPvUi
// Start address: 0x397c00
void Anim_Unload()
{
	// Line 1587, Address: 0x397c00, Func Offset: 0
	// Func End, Address: 0x397c08, Func Offset: 0x8
}

// ATBL_Read__FPvUiPvUiPUi
// Start address: 0x397c10
void* ATBL_Read(void* indata, uint32* outsize)
{
	uint32 i;
	uint32 j;
	uint32 debugNum;
	uint32 tmpsize;
	xAnimTable* table;
	xAnimState* astate;
	uint8* zaBytes;
	xAnimAssetTable* zaTbl;
	void** zaRaw;
	xAnimAssetFile* zaFile;
	xAnimAssetState* zaState;
	int32 k;
	int32 num_raw_data;
	xAnimFile** fList;
	int8* animation_name;
	xAnimTable*(*constructor)();
	int32 i;
	xAnimTransition* atran;
	int8* tmpstr;
	xAnimFile* foundFile;
	xAnimState* endState;
	xAnimFile* endPose;
	uint32 i;
	xAnimFile* file;
	uint32 j;
	xAnimFile* endPose;
	xAnimState* state;
	xAnimAssetEffect* zaEffect;
	xAnimEffect* effect;
	// Line 1177, Address: 0x397c10, Func Offset: 0
	// Line 1178, Address: 0x397c30, Func Offset: 0x20
	// Line 1177, Address: 0x397c34, Func Offset: 0x24
	// Line 1204, Address: 0x397c44, Func Offset: 0x34
	// Line 1177, Address: 0x397c48, Func Offset: 0x38
	// Line 1191, Address: 0x397c4c, Func Offset: 0x3c
	// Line 1193, Address: 0x397c54, Func Offset: 0x44
	// Line 1192, Address: 0x397c58, Func Offset: 0x48
	// Line 1204, Address: 0x397c5c, Func Offset: 0x4c
	// Line 1192, Address: 0x397c60, Func Offset: 0x50
	// Line 1193, Address: 0x397c64, Func Offset: 0x54
	// Line 1204, Address: 0x397c68, Func Offset: 0x58
	// Line 1215, Address: 0x397c70, Func Offset: 0x60
	// Line 1216, Address: 0x397c80, Func Offset: 0x70
	// Line 1218, Address: 0x397c8c, Func Offset: 0x7c
	// Line 1219, Address: 0x397c98, Func Offset: 0x88
	// Line 1220, Address: 0x397cac, Func Offset: 0x9c
	// Line 1221, Address: 0x397cb8, Func Offset: 0xa8
	// Line 1223, Address: 0x397cc0, Func Offset: 0xb0
	// Line 1226, Address: 0x397cd0, Func Offset: 0xc0
	// Line 1229, Address: 0x397ce8, Func Offset: 0xd8
	// Line 1230, Address: 0x397cfc, Func Offset: 0xec
	// Line 1233, Address: 0x397d10, Func Offset: 0x100
	// Line 1236, Address: 0x397d28, Func Offset: 0x118
	// Line 1237, Address: 0x397d40, Func Offset: 0x130
	// Line 1239, Address: 0x397d4c, Func Offset: 0x13c
	// Line 1262, Address: 0x397d58, Func Offset: 0x148
	// Line 1261, Address: 0x397dbc, Func Offset: 0x1ac
	// Line 1262, Address: 0x397dc0, Func Offset: 0x1b0
	// Line 1261, Address: 0x397dd8, Func Offset: 0x1c8
	// Line 1262, Address: 0x397ddc, Func Offset: 0x1cc
	// Line 1261, Address: 0x397df4, Func Offset: 0x1e4
	// Line 1262, Address: 0x397df8, Func Offset: 0x1e8
	// Line 1261, Address: 0x397e10, Func Offset: 0x200
	// Line 1262, Address: 0x397e14, Func Offset: 0x204
	// Line 1261, Address: 0x397e2c, Func Offset: 0x21c
	// Line 1262, Address: 0x397e30, Func Offset: 0x220
	// Line 1261, Address: 0x397e48, Func Offset: 0x238
	// Line 1262, Address: 0x397e4c, Func Offset: 0x23c
	// Line 1261, Address: 0x397e64, Func Offset: 0x254
	// Line 1262, Address: 0x397e68, Func Offset: 0x258
	// Line 1261, Address: 0x397e84, Func Offset: 0x274
	// Line 1262, Address: 0x397e88, Func Offset: 0x278
	// Line 1254, Address: 0x397ea4, Func Offset: 0x294
	// Line 1262, Address: 0x397ea8, Func Offset: 0x298
	// Line 1261, Address: 0x397ec0, Func Offset: 0x2b0
	// Line 1262, Address: 0x397ec4, Func Offset: 0x2b4
	// Line 1263, Address: 0x397ed8, Func Offset: 0x2c8
	// Line 1292, Address: 0x397ef0, Func Offset: 0x2e0
	// Line 1281, Address: 0x397f18, Func Offset: 0x308
	// Line 1292, Address: 0x397f1c, Func Offset: 0x30c
	// Line 1281, Address: 0x397f20, Func Offset: 0x310
	// Line 1292, Address: 0x397f24, Func Offset: 0x314
	// Line 1286, Address: 0x397f38, Func Offset: 0x328
	// Line 1292, Address: 0x397f3c, Func Offset: 0x32c
	// Line 1286, Address: 0x397f40, Func Offset: 0x330
	// Line 1292, Address: 0x397f44, Func Offset: 0x334
	// Line 1296, Address: 0x397f68, Func Offset: 0x358
	// Line 1299, Address: 0x397f6c, Func Offset: 0x35c
	// Line 1304, Address: 0x397f74, Func Offset: 0x364
	// Line 1306, Address: 0x397f80, Func Offset: 0x370
	// Line 1308, Address: 0x397f8c, Func Offset: 0x37c
	// Line 1309, Address: 0x397fa4, Func Offset: 0x394
	// Line 1311, Address: 0x397fac, Func Offset: 0x39c
	// Line 1315, Address: 0x397fbc, Func Offset: 0x3ac
	// Line 1321, Address: 0x397fc0, Func Offset: 0x3b0
	// Line 1328, Address: 0x397fc4, Func Offset: 0x3b4
	// Line 1410, Address: 0x397fcc, Func Offset: 0x3bc
	// Line 1414, Address: 0x397fd8, Func Offset: 0x3c8
	// Line 1475, Address: 0x397fe8, Func Offset: 0x3d8
	// Line 1478, Address: 0x397ff0, Func Offset: 0x3e0
	// Line 1479, Address: 0x397ff8, Func Offset: 0x3e8
	// Line 1481, Address: 0x398000, Func Offset: 0x3f0
	// Line 1482, Address: 0x398004, Func Offset: 0x3f4
	// Line 1486, Address: 0x398018, Func Offset: 0x408
	// Line 1487, Address: 0x398020, Func Offset: 0x410
	// Line 1490, Address: 0x39802c, Func Offset: 0x41c
	// Line 1491, Address: 0x398030, Func Offset: 0x420
	// Line 1492, Address: 0x398034, Func Offset: 0x424
	// Line 1497, Address: 0x398048, Func Offset: 0x438
	// Line 1498, Address: 0x39804c, Func Offset: 0x43c
	// Line 1501, Address: 0x398058, Func Offset: 0x448
	// Line 1502, Address: 0x398060, Func Offset: 0x450
	// Line 1504, Address: 0x398064, Func Offset: 0x454
	// Line 1505, Address: 0x39806c, Func Offset: 0x45c
	// Line 1506, Address: 0x398074, Func Offset: 0x464
	// Line 1507, Address: 0x398078, Func Offset: 0x468
	// Line 1508, Address: 0x398090, Func Offset: 0x480
	// Line 1509, Address: 0x398094, Func Offset: 0x484
	// Line 1510, Address: 0x398098, Func Offset: 0x488
	// Line 1511, Address: 0x3980a4, Func Offset: 0x494
	// Line 1514, Address: 0x3980ac, Func Offset: 0x49c
	// Line 1515, Address: 0x3980c8, Func Offset: 0x4b8
	// Line 1517, Address: 0x3980d4, Func Offset: 0x4c4
	// Line 1518, Address: 0x3980d8, Func Offset: 0x4c8
	// Line 1520, Address: 0x3980e0, Func Offset: 0x4d0
	// Line 1521, Address: 0x3980f0, Func Offset: 0x4e0
	// Line 1538, Address: 0x3980f8, Func Offset: 0x4e8
	// Line 1539, Address: 0x3980fc, Func Offset: 0x4ec
	// Line 1542, Address: 0x398108, Func Offset: 0x4f8
	// Line 1543, Address: 0x398118, Func Offset: 0x508
	// Line 1564, Address: 0x398124, Func Offset: 0x514
	// Line 1567, Address: 0x398140, Func Offset: 0x530
	// Line 1569, Address: 0x398144, Func Offset: 0x534
	// Line 1570, Address: 0x398148, Func Offset: 0x538
	// Line 1301, Address: 0x3981b0, Func Offset: 0x5a0
	// Line 1570, Address: 0x3981b4, Func Offset: 0x5a4
	// Line 1302, Address: 0x3981bc, Func Offset: 0x5ac
	// Line 1570, Address: 0x3981c4, Func Offset: 0x5b4
	// Line 1409, Address: 0x3981cc, Func Offset: 0x5bc
	// Line 1570, Address: 0x3981d8, Func Offset: 0x5c8
	// Line 1416, Address: 0x3981e8, Func Offset: 0x5d8
	// Line 1570, Address: 0x3981ec, Func Offset: 0x5dc
	// Line 1416, Address: 0x3981fc, Func Offset: 0x5ec
	// Line 1570, Address: 0x398200, Func Offset: 0x5f0
	// Line 1430, Address: 0x398230, Func Offset: 0x620
	// Line 1570, Address: 0x398234, Func Offset: 0x624
	// Line 1430, Address: 0x39823c, Func Offset: 0x62c
	// Line 1570, Address: 0x398240, Func Offset: 0x630
	// Line 1437, Address: 0x398244, Func Offset: 0x634
	// Line 1570, Address: 0x39824c, Func Offset: 0x63c
	// Line 1438, Address: 0x39825c, Func Offset: 0x64c
	// Line 1570, Address: 0x398260, Func Offset: 0x650
	// Line 1438, Address: 0x398264, Func Offset: 0x654
	// Line 1570, Address: 0x398268, Func Offset: 0x658
	// Line 1438, Address: 0x39826c, Func Offset: 0x65c
	// Line 1570, Address: 0x398270, Func Offset: 0x660
	// Line 1438, Address: 0x398274, Func Offset: 0x664
	// Line 1570, Address: 0x398294, Func Offset: 0x684
	// Line 1440, Address: 0x39829c, Func Offset: 0x68c
	// Line 1570, Address: 0x3982a0, Func Offset: 0x690
	// Line 1438, Address: 0x3982a4, Func Offset: 0x694
	// Line 1440, Address: 0x3982a8, Func Offset: 0x698
	// Line 1570, Address: 0x3982d8, Func Offset: 0x6c8
	// Line 1442, Address: 0x3982e4, Func Offset: 0x6d4
	// Line 1570, Address: 0x3982ec, Func Offset: 0x6dc
	// Line 1442, Address: 0x3982f8, Func Offset: 0x6e8
	// Line 1570, Address: 0x3982fc, Func Offset: 0x6ec
	// Line 1489, Address: 0x398338, Func Offset: 0x728
	// Line 1521, Address: 0x398344, Func Offset: 0x734
	// Line 1570, Address: 0x398348, Func Offset: 0x738
	// Line 1524, Address: 0x39834c, Func Offset: 0x73c
	// Line 1570, Address: 0x398350, Func Offset: 0x740
	// Line 1525, Address: 0x398354, Func Offset: 0x744
	// Line 1570, Address: 0x39835c, Func Offset: 0x74c
	// Line 1528, Address: 0x398364, Func Offset: 0x754
	// Line 1570, Address: 0x398368, Func Offset: 0x758
	// Line 1529, Address: 0x398380, Func Offset: 0x770
	// Line 1570, Address: 0x398388, Func Offset: 0x778
	// Line 1529, Address: 0x39839c, Func Offset: 0x78c
	// Line 1570, Address: 0x3983a0, Func Offset: 0x790
	// Line 1529, Address: 0x3983a4, Func Offset: 0x794
	// Line 1570, Address: 0x3983a8, Func Offset: 0x798
	// Line 1545, Address: 0x3983e4, Func Offset: 0x7d4
	// Line 1570, Address: 0x3983e8, Func Offset: 0x7d8
	// Line 1549, Address: 0x398404, Func Offset: 0x7f4
	// Line 1570, Address: 0x398408, Func Offset: 0x7f8
	// Line 1550, Address: 0x398428, Func Offset: 0x818
	// Line 1570, Address: 0x39842c, Func Offset: 0x81c
	// Line 1559, Address: 0x398440, Func Offset: 0x830
	// Line 1570, Address: 0x398444, Func Offset: 0x834
	// Line 1577, Address: 0x398470, Func Offset: 0x860
	// Func End, Address: 0x3984a0, Func Offset: 0x890
}

// FindAssetCB__FUiPc
// Start address: 0x3984a0
void* FindAssetCB(uint32 ID)
{
	uint32 size;
	// Line 1171, Address: 0x3984a0, Func Offset: 0
	// Line 1173, Address: 0x3984a8, Func Offset: 0x8
	// Line 1174, Address: 0x3984b0, Func Offset: 0x10
	// Func End, Address: 0x3984bc, Func Offset: 0x1c
}

// soundEffectCB__FUiP17xAnimActiveEffectP11xAnimSinglePv
// Start address: 0x3984c0
uint32 soundEffectCB(uint32 cbenum, xAnimActiveEffect* acteffect, void* object)
{
	uint32 sndhandle;
	xEnt* ent_tmp;
	zAnimFxSoundGroup* snd;
	// Line 1128, Address: 0x3984c0, Func Offset: 0
	// Line 1135, Address: 0x3984c4, Func Offset: 0x4
	// Line 1128, Address: 0x3984c8, Func Offset: 0x8
	// Line 1135, Address: 0x3984e8, Func Offset: 0x28
	// Line 1155, Address: 0x3984f0, Func Offset: 0x30
	// Line 1159, Address: 0x3984fc, Func Offset: 0x3c
	// Line 1137, Address: 0x39850c, Func Offset: 0x4c
	// Line 1159, Address: 0x398510, Func Offset: 0x50
	// Line 1137, Address: 0x398514, Func Offset: 0x54
	// Line 1159, Address: 0x398518, Func Offset: 0x58
	// Line 1137, Address: 0x39851c, Func Offset: 0x5c
	// Line 1159, Address: 0x398520, Func Offset: 0x60
	// Line 1137, Address: 0x398524, Func Offset: 0x64
	// Line 1159, Address: 0x39852c, Func Offset: 0x6c
	// Line 1144, Address: 0x398548, Func Offset: 0x88
	// Line 1159, Address: 0x39854c, Func Offset: 0x8c
	// Line 1147, Address: 0x398564, Func Offset: 0xa4
	// Line 1159, Address: 0x39856c, Func Offset: 0xac
	// Line 1151, Address: 0x398574, Func Offset: 0xb4
	// Line 1159, Address: 0x39858c, Func Offset: 0xcc
	// Line 1160, Address: 0x3985ac, Func Offset: 0xec
	// Func End, Address: 0x3985c8, Func Offset: 0x108
}

// dummyEffectCB__FUiP17xAnimActiveEffectP11xAnimSinglePv
// Start address: 0x3985d0
uint32 dummyEffectCB()
{
	// Line 1125, Address: 0x3985d0, Func Offset: 0
	// Func End, Address: 0x3985d8, Func Offset: 0x8
}

// TextureRW3_Unload__FPvUi
// Start address: 0x3985e0
void TextureRW3_Unload(void* userdata)
{
	RwTexture* tex;
	// Line 1028, Address: 0x3985e0, Func Offset: 0
	// Line 1038, Address: 0x3985e4, Func Offset: 0x4
	// Line 1040, Address: 0x3985ec, Func Offset: 0xc
	// Line 1041, Address: 0x3985f0, Func Offset: 0x10
	// Line 1046, Address: 0x3985f8, Func Offset: 0x18
	// Func End, Address: 0x398604, Func Offset: 0x24
}

// RWTX_Read__FPvUiPvUiPUi
// Start address: 0x398610
void* RWTX_Read(void* indata, uint32 insize, uint32* outsize)
{
	RwTexDictionary* txd;
	RwMemory rwmem;
	RwStream* stream;
	RwTexture* tex;
	RwError error;
	// Line 944, Address: 0x398610, Func Offset: 0
	// Line 955, Address: 0x398630, Func Offset: 0x20
	// Line 1022, Address: 0x398638, Func Offset: 0x28
	// Line 1024, Address: 0x39863c, Func Offset: 0x2c
	// Line 960, Address: 0x398648, Func Offset: 0x38
	// Line 1024, Address: 0x398650, Func Offset: 0x40
	// Line 960, Address: 0x39865c, Func Offset: 0x4c
	// Line 1024, Address: 0x398660, Func Offset: 0x50
	// Line 968, Address: 0x398668, Func Offset: 0x58
	// Line 1024, Address: 0x398670, Func Offset: 0x60
	// Line 982, Address: 0x398688, Func Offset: 0x78
	// Line 983, Address: 0x39868c, Func Offset: 0x7c
	// Line 1024, Address: 0x398690, Func Offset: 0x80
	// Line 993, Address: 0x3986a0, Func Offset: 0x90
	// Line 1024, Address: 0x3986a4, Func Offset: 0x94
	// Line 1012, Address: 0x3986d0, Func Offset: 0xc0
	// Line 1018, Address: 0x3986d4, Func Offset: 0xc4
	// Line 1024, Address: 0x3986d8, Func Offset: 0xc8
	// Line 1012, Address: 0x3986ec, Func Offset: 0xdc
	// Line 1024, Address: 0x3986f4, Func Offset: 0xe4
	// Line 1019, Address: 0x3986fc, Func Offset: 0xec
	// Line 1024, Address: 0x398704, Func Offset: 0xf4
	// Line 973, Address: 0x39870c, Func Offset: 0xfc
	// Line 1024, Address: 0x398718, Func Offset: 0x108
	// Line 975, Address: 0x398720, Func Offset: 0x110
	// Line 1024, Address: 0x398724, Func Offset: 0x114
	// Line 979, Address: 0x39872c, Func Offset: 0x11c
	// Line 1024, Address: 0x398734, Func Offset: 0x124
	// Line 999, Address: 0x39873c, Func Offset: 0x12c
	// Line 1025, Address: 0x398744, Func Offset: 0x134
	// Func End, Address: 0x398760, Func Offset: 0x150
}

// TexCB__FP9RwTexturePv
// Start address: 0x398760
RwTexture* TexCB(RwTexture* texture, void* data)
{
	RwTexture** texFound;
	// Line 928, Address: 0x398760, Func Offset: 0
	// Line 931, Address: 0x39876c, Func Offset: 0xc
	// Line 932, Address: 0x39877c, Func Offset: 0x1c
	// Func End, Address: 0x398784, Func Offset: 0x24
}

// JSP_Unload__FPvUi
// Start address: 0x398790
void JSP_Unload(void* userdata)
{
	// Line 916, Address: 0x398790, Func Offset: 0
	// Line 919, Address: 0x398794, Func Offset: 0x4
	// Line 922, Address: 0x3987a4, Func Offset: 0x14
	// Line 923, Address: 0x3987ac, Func Offset: 0x1c
	// Func End, Address: 0x3987b8, Func Offset: 0x28
}

// JSP_Read__FPvUiPvUiPUi
// Start address: 0x3987c0
void* JSP_Read(uint32 assetid, void* indata, uint32 insize, uint32* outsize)
{
	xJSPHeader* retjsp;
	// Line 873, Address: 0x3987c0, Func Offset: 0
	// Line 905, Address: 0x3987cc, Func Offset: 0xc
	// Line 873, Address: 0x3987d0, Func Offset: 0x10
	// Line 905, Address: 0x3987d4, Func Offset: 0x14
	// Line 873, Address: 0x3987d8, Func Offset: 0x18
	// Line 902, Address: 0x3987dc, Func Offset: 0x1c
	// Line 901, Address: 0x3987e0, Func Offset: 0x20
	// Line 902, Address: 0x3987e8, Func Offset: 0x28
	// Line 905, Address: 0x3987ec, Func Offset: 0x2c
	// Line 906, Address: 0x398800, Func Offset: 0x40
	// Line 908, Address: 0x39880c, Func Offset: 0x4c
	// Line 909, Address: 0x398810, Func Offset: 0x50
	// Line 907, Address: 0x398814, Func Offset: 0x54
	// Line 909, Address: 0x398818, Func Offset: 0x58
	// Line 911, Address: 0x39881c, Func Offset: 0x5c
	// Line 913, Address: 0x398820, Func Offset: 0x60
	// Func End, Address: 0x398834, Func Offset: 0x74
}

// BSP_Unload__FPvUi
// Start address: 0x398840
void BSP_Unload()
{
	// Line 848, Address: 0x398840, Func Offset: 0
	// Func End, Address: 0x398850, Func Offset: 0x10
}

// BSP_Read__FPvUiPvUiPUi
// Start address: 0x398850
void* BSP_Read(void* indata, uint32 insize, uint32* outsize)
{
	RwStream* stream;
	RwMemory rwmem;
	RwChunkHeaderInfo chunkHeaderInfo;
	RpWorld* bsp;
	// Line 756, Address: 0x398850, Func Offset: 0
	// Line 771, Address: 0x398854, Func Offset: 0x4
	// Line 756, Address: 0x398858, Func Offset: 0x8
	// Line 771, Address: 0x39885c, Func Offset: 0xc
	// Line 756, Address: 0x398860, Func Offset: 0x10
	// Line 771, Address: 0x39886c, Func Offset: 0x1c
	// Line 775, Address: 0x398890, Func Offset: 0x40
	// Line 779, Address: 0x398894, Func Offset: 0x44
	// Line 776, Address: 0x398898, Func Offset: 0x48
	// Line 779, Address: 0x39889c, Func Offset: 0x4c
	// Line 780, Address: 0x3988ac, Func Offset: 0x5c
	// Line 785, Address: 0x3988b4, Func Offset: 0x64
	// Line 800, Address: 0x3988d0, Func Offset: 0x80
	// Line 801, Address: 0x3988dc, Func Offset: 0x8c
	// Line 827, Address: 0x3988e4, Func Offset: 0x94
	// Line 829, Address: 0x3988f0, Func Offset: 0xa0
	// Line 834, Address: 0x3988f4, Func Offset: 0xa4
	// Line 796, Address: 0x39891c, Func Offset: 0xcc
	// Line 834, Address: 0x398924, Func Offset: 0xd4
	// Line 836, Address: 0x398934, Func Offset: 0xe4
	// Func End, Address: 0x39894c, Func Offset: 0xfc
}

// Model_Unload__FPvUi
// Start address: 0x398950
void Model_Unload(void* userdata)
{
	// Line 742, Address: 0x398950, Func Offset: 0
	// Line 747, Address: 0x398954, Func Offset: 0x4
	// Line 748, Address: 0x39895c, Func Offset: 0xc
	// Line 749, Address: 0x398964, Func Offset: 0x14
	// Func End, Address: 0x398970, Func Offset: 0x20
}

// init__Q26zAsset11spline_pathFPvUiPvUiPUi
// Start address: 0x398970
void* init(void* indata, uint32 insize, uint32* outsize)
{
	spline_path* path;
	uint32* forward_ids;
	uint32* backward_ids;
	int32 i;
	int32 i;
	// Line 713, Address: 0x398970, Func Offset: 0
	// Line 719, Address: 0x398974, Func Offset: 0x4
	// Line 713, Address: 0x398978, Func Offset: 0x8
	// Line 715, Address: 0x398990, Func Offset: 0x20
	// Line 719, Address: 0x398994, Func Offset: 0x24
	// Line 722, Address: 0x3989a4, Func Offset: 0x34
	// Line 720, Address: 0x3989a8, Func Offset: 0x38
	// Line 723, Address: 0x3989ac, Func Offset: 0x3c
	// Line 725, Address: 0x3989b4, Func Offset: 0x44
	// Line 723, Address: 0x3989b8, Func Offset: 0x48
	// Line 726, Address: 0x3989bc, Func Offset: 0x4c
	// Line 728, Address: 0x3989d0, Func Offset: 0x60
	// Line 732, Address: 0x3989e0, Func Offset: 0x70
	// Line 736, Address: 0x3989f0, Func Offset: 0x80
	// Line 737, Address: 0x398a70, Func Offset: 0x100
	// Func End, Address: 0x398a90, Func Offset: 0x120
}

// Spline_Read__1xFPvUiPvUiPUi
// Start address: 0x398a90
void* Spline_Read(void* indata, uint32 insize, uint32* outsize)
{
	NURBS* nurbs;
	// Line 567, Address: 0x398a90, Func Offset: 0
	// Line 565, Address: 0x398a94, Func Offset: 0x4
	// Line 569, Address: 0x398a98, Func Offset: 0x8
	// Line 570, Address: 0x398aa0, Func Offset: 0x10
	// Line 573, Address: 0x398abc, Func Offset: 0x2c
	// Func End, Address: 0x398ac4, Func Offset: 0x34
}

// Curve_Read__FPvUiPvUiPUi
// Start address: 0x398ad0
void* Curve_Read(void* indata, uint32 insize, uint32* outsize)
{
	xCurveAsset* curve_asset;
	// Line 555, Address: 0x398ad0, Func Offset: 0
	// Line 553, Address: 0x398ad4, Func Offset: 0x4
	// Line 557, Address: 0x398ad8, Func Offset: 0x8
	// Line 560, Address: 0x398adc, Func Offset: 0xc
	// Func End, Address: 0x398ae4, Func Offset: 0x14
}

// Model_Read__FPvUiPvUiPUi
// Start address: 0x398af0
void* Model_Read(void* indata, uint32 insize, uint32* outsize)
{
	RpAtomic* model;
	// Line 482, Address: 0x398af0, Func Offset: 0
	// Line 485, Address: 0x398b00, Func Offset: 0x10
	// Line 498, Address: 0x398b08, Func Offset: 0x18
	// Line 501, Address: 0x398b14, Func Offset: 0x24
	// Line 498, Address: 0x398b18, Func Offset: 0x28
	// Line 501, Address: 0x398b1c, Func Offset: 0x2c
	// Line 543, Address: 0x398b20, Func Offset: 0x30
	// Line 545, Address: 0x398b2c, Func Offset: 0x3c
	// Line 486, Address: 0x398b34, Func Offset: 0x44
	// Line 546, Address: 0x398b38, Func Offset: 0x48
	// Func End, Address: 0x398b4c, Func Offset: 0x5c
}

// zAssetShutdown__Fv
// Start address: 0x398b50
void zAssetShutdown()
{
	// Line 363, Address: 0x398b50, Func Offset: 0
	// Func End, Address: 0x398b58, Func Offset: 0x8
}

// zAssetStartup__Fv
// Start address: 0x398b60
void zAssetStartup()
{
	// Line 355, Address: 0x398b60, Func Offset: 0
	// Line 356, Address: 0x398b64, Func Offset: 0x4
	// Line 355, Address: 0x398b68, Func Offset: 0x8
	// Line 356, Address: 0x398b6c, Func Offset: 0xc
	// Line 355, Address: 0x398b70, Func Offset: 0x10
	// Line 356, Address: 0x398b74, Func Offset: 0x14
	// Line 359, Address: 0x398b7c, Func Offset: 0x1c
	// Line 360, Address: 0x398ba4, Func Offset: 0x44
	// Func End, Address: 0x398bb8, Func Offset: 0x58
}

// Dash_Track_Read__FPvUiPvUiPUi
// Start address: 0x398bc0
void* Dash_Track_Read()
{
	// Line 95, Address: 0x398bc0, Func Offset: 0
	// Func End, Address: 0x398bc8, Func Offset: 0x8
}

// Navigation_Mesh_Read__FPvUiPvUiPUi
// Start address: 0x398bd0
void* Navigation_Mesh_Read()
{
	// Line 94, Address: 0x398bd0, Func Offset: 0
	// Func End, Address: 0x398bd8, Func Offset: 0x8
}

