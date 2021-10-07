



void _iAnimSKBAdjustYaw(iAnimSKBHeader* data, uint32 bone, float32 yawStart, float32 yawEnd);
int32 _iAnimSKBExtractYaw(iAnimSKBHeader* data, uint32 bone, float32* yawArray);
float32 QuatToYaw(xQuat* q);
int32 _iAnimSKBExtractTranslateAxis(iAnimSKBHeader* data, uint32 bone, xVec3* tranArray, uint8* axis);
int32 _iAnimSKBExtractTranslate(iAnimSKBHeader* data, uint32 bone, xVec3* tranArray, int32 tranCount);
int32 _iAnimSKBNumExtract(iAnimSKBHeader* data, uint32 bone);
void _iAnimSKBAdjustTranslate(iAnimSKBHeader* data, uint32 bone, float32* starttran, float32* endtran);
void iAnimEvalSKB(iAnimSKBHeader* data, float32 time, uint32 flags, xVec3* tran, xQuat* quat);

// _iAnimSKBAdjustYaw__FP14iAnimSKBHeaderUiff
// Start address: 0x4b5050
void _iAnimSKBAdjustYaw(iAnimSKBHeader* data, uint32 bone, float32 yawStart, float32 yawEnd)
{
	uint32 i;
	uint32 keyfirst;
	uint32 keylast;
	uint32 kcount;
	uint32 tcount;
	float32 timefirst;
	iAnimSKBKey* keys;
	float32* times;
	uint16* offsets;
	float32 invTimeDiff;
	// Line 1200, Address: 0x4b5050, Func Offset: 0
	// Line 1214, Address: 0x4b5054, Func Offset: 0x4
	// Line 1200, Address: 0x4b5058, Func Offset: 0x8
	// Line 1214, Address: 0x4b505c, Func Offset: 0xc
	// Line 1200, Address: 0x4b5060, Func Offset: 0x10
	// Line 1210, Address: 0x4b5064, Func Offset: 0x14
	// Line 1200, Address: 0x4b5068, Func Offset: 0x18
	// Line 1216, Address: 0x4b506c, Func Offset: 0x1c
	// Line 1200, Address: 0x4b5070, Func Offset: 0x20
	// Line 1205, Address: 0x4b5074, Func Offset: 0x24
	// Line 1200, Address: 0x4b5078, Func Offset: 0x28
	// Line 1201, Address: 0x4b50a8, Func Offset: 0x58
	// Line 1206, Address: 0x4b50b4, Func Offset: 0x64
	// Line 1211, Address: 0x4b50bc, Func Offset: 0x6c
	// Line 1207, Address: 0x4b50c4, Func Offset: 0x74
	// Line 1212, Address: 0x4b50c8, Func Offset: 0x78
	// Line 1211, Address: 0x4b50cc, Func Offset: 0x7c
	// Line 1214, Address: 0x4b50d0, Func Offset: 0x80
	// Line 1211, Address: 0x4b50d4, Func Offset: 0x84
	// Line 1214, Address: 0x4b50d8, Func Offset: 0x88
	// Line 1211, Address: 0x4b50dc, Func Offset: 0x8c
	// Line 1210, Address: 0x4b50e4, Func Offset: 0x94
	// Line 1211, Address: 0x4b50e8, Func Offset: 0x98
	// Line 1210, Address: 0x4b50ec, Func Offset: 0x9c
	// Line 1211, Address: 0x4b50f0, Func Offset: 0xa0
	// Line 1214, Address: 0x4b50f4, Func Offset: 0xa4
	// Line 1216, Address: 0x4b50fc, Func Offset: 0xac
	// Line 1217, Address: 0x4b510c, Func Offset: 0xbc
	// Line 1221, Address: 0x4b5120, Func Offset: 0xd0
	// Line 1224, Address: 0x4b512c, Func Offset: 0xdc
	// Line 1221, Address: 0x4b5130, Func Offset: 0xe0
	// Line 1223, Address: 0x4b5134, Func Offset: 0xe4
	// Line 1222, Address: 0x4b513c, Func Offset: 0xec
	// Line 1224, Address: 0x4b5140, Func Offset: 0xf0
	// Line 1221, Address: 0x4b514c, Func Offset: 0xfc
	// Line 1224, Address: 0x4b5158, Func Offset: 0x108
	// Line 1221, Address: 0x4b515c, Func Offset: 0x10c
	// Line 1223, Address: 0x4b5160, Func Offset: 0x110
	// Line 1222, Address: 0x4b5164, Func Offset: 0x114
	// Line 1223, Address: 0x4b516c, Func Offset: 0x11c
	// Line 1222, Address: 0x4b5170, Func Offset: 0x120
	// Line 1223, Address: 0x4b5174, Func Offset: 0x124
	// Line 1222, Address: 0x4b5178, Func Offset: 0x128
	// Line 1224, Address: 0x4b517c, Func Offset: 0x12c
	// Line 1231, Address: 0x4b51a8, Func Offset: 0x158
	// Line 1232, Address: 0x4b51bc, Func Offset: 0x16c
	// Line 1234, Address: 0x4b5218, Func Offset: 0x1c8
	// Line 1236, Address: 0x4b52ac, Func Offset: 0x25c
	// Line 1238, Address: 0x4b5340, Func Offset: 0x2f0
	// Line 1240, Address: 0x4b53d4, Func Offset: 0x384
	// Line 1242, Address: 0x4b5454, Func Offset: 0x404
	// Line 1243, Address: 0x4b5464, Func Offset: 0x414
	// Func End, Address: 0x4b54ac, Func Offset: 0x45c
}

// _iAnimSKBExtractYaw__FP14iAnimSKBHeaderUiPfi
// Start address: 0x4b54b0
int32 _iAnimSKBExtractYaw(iAnimSKBHeader* data, uint32 bone, float32* yawArray)
{
	uint32 i;
	uint32 j;
	uint32 keylast;
	uint32 tcount;
	iAnimSKBKey* keys;
	float32* times;
	uint16* offsets;
	float32 currYaw;
	float32 lastYaw;
	float32 lastCurrYaw;
	int32 yawFound;
	int32 lastTime;
	int32 currTime;
	// Line 1117, Address: 0x4b54b0, Func Offset: 0
	// Line 1123, Address: 0x4b54b4, Func Offset: 0x4
	// Line 1117, Address: 0x4b54b8, Func Offset: 0x8
	// Line 1119, Address: 0x4b54bc, Func Offset: 0xc
	// Line 1117, Address: 0x4b54c0, Func Offset: 0x10
	// Line 1123, Address: 0x4b54c4, Func Offset: 0x14
	// Line 1117, Address: 0x4b54c8, Func Offset: 0x18
	// Line 1124, Address: 0x4b54e0, Func Offset: 0x30
	// Line 1117, Address: 0x4b54e4, Func Offset: 0x34
	// Line 1118, Address: 0x4b5504, Func Offset: 0x54
	// Line 1123, Address: 0x4b5508, Func Offset: 0x58
	// Line 1120, Address: 0x4b550c, Func Offset: 0x5c
	// Line 1131, Address: 0x4b5510, Func Offset: 0x60
	// Line 1121, Address: 0x4b5514, Func Offset: 0x64
	// Line 1128, Address: 0x4b5518, Func Offset: 0x68
	// Line 1120, Address: 0x4b5520, Func Offset: 0x70
	// Line 1128, Address: 0x4b5528, Func Offset: 0x78
	// Line 1121, Address: 0x4b552c, Func Offset: 0x7c
	// Line 1131, Address: 0x4b5530, Func Offset: 0x80
	// Line 1128, Address: 0x4b5538, Func Offset: 0x88
	// Line 1131, Address: 0x4b554c, Func Offset: 0x9c
	// Line 1137, Address: 0x4b5560, Func Offset: 0xb0
	// Line 1134, Address: 0x4b5564, Func Offset: 0xb4
	// Line 1136, Address: 0x4b5568, Func Offset: 0xb8
	// Line 1134, Address: 0x4b556c, Func Offset: 0xbc
	// Line 1136, Address: 0x4b5574, Func Offset: 0xc4
	// Line 1139, Address: 0x4b5578, Func Offset: 0xc8
	// Line 1136, Address: 0x4b557c, Func Offset: 0xcc
	// Line 1138, Address: 0x4b5580, Func Offset: 0xd0
	// Line 1136, Address: 0x4b5584, Func Offset: 0xd4
	// Line 1137, Address: 0x4b5588, Func Offset: 0xd8
	// Line 1136, Address: 0x4b558c, Func Offset: 0xdc
	// Line 1141, Address: 0x4b5590, Func Offset: 0xe0
	// Line 1137, Address: 0x4b5594, Func Offset: 0xe4
	// Line 1134, Address: 0x4b5598, Func Offset: 0xe8
	// Line 1136, Address: 0x4b55a0, Func Offset: 0xf0
	// Line 1137, Address: 0x4b55a4, Func Offset: 0xf4
	// Line 1136, Address: 0x4b55a8, Func Offset: 0xf8
	// Line 1139, Address: 0x4b55ac, Func Offset: 0xfc
	// Line 1138, Address: 0x4b55b0, Func Offset: 0x100
	// Line 1139, Address: 0x4b55b8, Func Offset: 0x108
	// Line 1138, Address: 0x4b55c0, Func Offset: 0x110
	// Line 1134, Address: 0x4b55c4, Func Offset: 0x114
	// Line 1138, Address: 0x4b55c8, Func Offset: 0x118
	// Line 1141, Address: 0x4b55cc, Func Offset: 0x11c
	// Line 1134, Address: 0x4b55d8, Func Offset: 0x128
	// Line 1141, Address: 0x4b55dc, Func Offset: 0x12c
	// Line 1134, Address: 0x4b55e0, Func Offset: 0x130
	// Line 1141, Address: 0x4b55e4, Func Offset: 0x134
	// Line 1134, Address: 0x4b55f4, Func Offset: 0x144
	// Line 1141, Address: 0x4b55f8, Func Offset: 0x148
	// Line 1144, Address: 0x4b5608, Func Offset: 0x158
	// Line 1141, Address: 0x4b5614, Func Offset: 0x164
	// Line 1144, Address: 0x4b5618, Func Offset: 0x168
	// Line 1145, Address: 0x4b5628, Func Offset: 0x178
	// Line 1146, Address: 0x4b5638, Func Offset: 0x188
	// Line 1196, Address: 0x4b5658, Func Offset: 0x1a8
	// Line 1147, Address: 0x4b5660, Func Offset: 0x1b0
	// Line 1196, Address: 0x4b5678, Func Offset: 0x1c8
	// Line 1148, Address: 0x4b5680, Func Offset: 0x1d0
	// Line 1149, Address: 0x4b568c, Func Offset: 0x1dc
	// Line 1196, Address: 0x4b5694, Func Offset: 0x1e4
	// Line 1160, Address: 0x4b56e8, Func Offset: 0x238
	// Line 1196, Address: 0x4b56f0, Func Offset: 0x240
	// Line 1160, Address: 0x4b56f4, Func Offset: 0x244
	// Line 1196, Address: 0x4b56f8, Func Offset: 0x248
	// Line 1160, Address: 0x4b5700, Func Offset: 0x250
	// Line 1196, Address: 0x4b5730, Func Offset: 0x280
	// Line 1160, Address: 0x4b5734, Func Offset: 0x284
	// Line 1196, Address: 0x4b573c, Func Offset: 0x28c
	// Line 1160, Address: 0x4b5744, Func Offset: 0x294
	// Line 1196, Address: 0x4b5778, Func Offset: 0x2c8
	// Line 1160, Address: 0x4b577c, Func Offset: 0x2cc
	// Line 1196, Address: 0x4b5784, Func Offset: 0x2d4
	// Line 1160, Address: 0x4b578c, Func Offset: 0x2dc
	// Line 1196, Address: 0x4b57c0, Func Offset: 0x310
	// Line 1160, Address: 0x4b57c4, Func Offset: 0x314
	// Line 1196, Address: 0x4b57cc, Func Offset: 0x31c
	// Line 1160, Address: 0x4b57d4, Func Offset: 0x324
	// Line 1196, Address: 0x4b5808, Func Offset: 0x358
	// Line 1160, Address: 0x4b580c, Func Offset: 0x35c
	// Line 1196, Address: 0x4b5814, Func Offset: 0x364
	// Line 1160, Address: 0x4b581c, Func Offset: 0x36c
	// Line 1196, Address: 0x4b5850, Func Offset: 0x3a0
	// Line 1160, Address: 0x4b5854, Func Offset: 0x3a4
	// Line 1196, Address: 0x4b585c, Func Offset: 0x3ac
	// Line 1160, Address: 0x4b5864, Func Offset: 0x3b4
	// Line 1196, Address: 0x4b5898, Func Offset: 0x3e8
	// Line 1160, Address: 0x4b589c, Func Offset: 0x3ec
	// Line 1196, Address: 0x4b58a4, Func Offset: 0x3f4
	// Line 1160, Address: 0x4b58ac, Func Offset: 0x3fc
	// Line 1196, Address: 0x4b58e0, Func Offset: 0x430
	// Line 1160, Address: 0x4b58e4, Func Offset: 0x434
	// Line 1196, Address: 0x4b58ec, Func Offset: 0x43c
	// Line 1160, Address: 0x4b58f4, Func Offset: 0x444
	// Line 1196, Address: 0x4b5928, Func Offset: 0x478
	// Line 1160, Address: 0x4b5934, Func Offset: 0x484
	// Line 1196, Address: 0x4b593c, Func Offset: 0x48c
	// Line 1160, Address: 0x4b5954, Func Offset: 0x4a4
	// Line 1196, Address: 0x4b5960, Func Offset: 0x4b0
	// Line 1160, Address: 0x4b5968, Func Offset: 0x4b8
	// Line 1196, Address: 0x4b596c, Func Offset: 0x4bc
	// Line 1160, Address: 0x4b5974, Func Offset: 0x4c4
	// Line 1196, Address: 0x4b59a4, Func Offset: 0x4f4
	// Line 1160, Address: 0x4b59b0, Func Offset: 0x500
	// Line 1196, Address: 0x4b59b4, Func Offset: 0x504
	// Line 1178, Address: 0x4b59cc, Func Offset: 0x51c
	// Line 1196, Address: 0x4b59dc, Func Offset: 0x52c
	// Line 1182, Address: 0x4b59e4, Func Offset: 0x534
	// Line 1196, Address: 0x4b59e8, Func Offset: 0x538
	// Line 1183, Address: 0x4b59f0, Func Offset: 0x540
	// Line 1196, Address: 0x4b5a44, Func Offset: 0x594
	// Line 1184, Address: 0x4b5a50, Func Offset: 0x5a0
	// Line 1196, Address: 0x4b5a54, Func Offset: 0x5a4
	// Line 1184, Address: 0x4b5a5c, Func Offset: 0x5ac
	// Line 1196, Address: 0x4b5a7c, Func Offset: 0x5cc
	// Line 1184, Address: 0x4b5a84, Func Offset: 0x5d4
	// Line 1196, Address: 0x4b5a98, Func Offset: 0x5e8
	// Line 1184, Address: 0x4b5a9c, Func Offset: 0x5ec
	// Line 1196, Address: 0x4b5aa8, Func Offset: 0x5f8
	// Line 1184, Address: 0x4b5ab0, Func Offset: 0x600
	// Line 1196, Address: 0x4b5abc, Func Offset: 0x60c
	// Line 1184, Address: 0x4b5ac8, Func Offset: 0x618
	// Line 1196, Address: 0x4b5ad0, Func Offset: 0x620
	// Line 1186, Address: 0x4b5ae4, Func Offset: 0x634
	// Line 1196, Address: 0x4b5ae8, Func Offset: 0x638
	// Line 1186, Address: 0x4b5af0, Func Offset: 0x640
	// Line 1196, Address: 0x4b5b10, Func Offset: 0x660
	// Line 1186, Address: 0x4b5b18, Func Offset: 0x668
	// Line 1196, Address: 0x4b5b2c, Func Offset: 0x67c
	// Line 1186, Address: 0x4b5b30, Func Offset: 0x680
	// Line 1196, Address: 0x4b5b3c, Func Offset: 0x68c
	// Line 1186, Address: 0x4b5b44, Func Offset: 0x694
	// Line 1196, Address: 0x4b5b50, Func Offset: 0x6a0
	// Line 1186, Address: 0x4b5b5c, Func Offset: 0x6ac
	// Line 1196, Address: 0x4b5b64, Func Offset: 0x6b4
	// Line 1188, Address: 0x4b5b78, Func Offset: 0x6c8
	// Line 1196, Address: 0x4b5b7c, Func Offset: 0x6cc
	// Line 1188, Address: 0x4b5b84, Func Offset: 0x6d4
	// Line 1196, Address: 0x4b5ba4, Func Offset: 0x6f4
	// Line 1188, Address: 0x4b5bac, Func Offset: 0x6fc
	// Line 1196, Address: 0x4b5bc0, Func Offset: 0x710
	// Line 1188, Address: 0x4b5bc4, Func Offset: 0x714
	// Line 1196, Address: 0x4b5bd0, Func Offset: 0x720
	// Line 1188, Address: 0x4b5bd8, Func Offset: 0x728
	// Line 1196, Address: 0x4b5be4, Func Offset: 0x734
	// Line 1188, Address: 0x4b5bf0, Func Offset: 0x740
	// Line 1196, Address: 0x4b5bf8, Func Offset: 0x748
	// Line 1190, Address: 0x4b5c0c, Func Offset: 0x75c
	// Line 1196, Address: 0x4b5c10, Func Offset: 0x760
	// Line 1190, Address: 0x4b5c18, Func Offset: 0x768
	// Line 1196, Address: 0x4b5c38, Func Offset: 0x788
	// Line 1190, Address: 0x4b5c40, Func Offset: 0x790
	// Line 1196, Address: 0x4b5c54, Func Offset: 0x7a4
	// Line 1190, Address: 0x4b5c58, Func Offset: 0x7a8
	// Line 1196, Address: 0x4b5c64, Func Offset: 0x7b4
	// Line 1190, Address: 0x4b5c6c, Func Offset: 0x7bc
	// Line 1196, Address: 0x4b5c78, Func Offset: 0x7c8
	// Line 1190, Address: 0x4b5c84, Func Offset: 0x7d4
	// Line 1193, Address: 0x4b5c88, Func Offset: 0x7d8
	// Line 1196, Address: 0x4b5c8c, Func Offset: 0x7dc
	// Line 1197, Address: 0x4b5cb0, Func Offset: 0x800
	// Func End, Address: 0x4b5cf4, Func Offset: 0x844
}

// QuatToYaw__FP5xQuat
// Start address: 0x4b5d00
float32 QuatToYaw(xQuat* q)
{
	// Line 1078, Address: 0x4b5d00, Func Offset: 0
	// Line 1087, Address: 0x4b5d04, Func Offset: 0x4
	// Line 1078, Address: 0x4b5d08, Func Offset: 0x8
	// Line 1087, Address: 0x4b5d0c, Func Offset: 0xc
	// Line 1078, Address: 0x4b5d10, Func Offset: 0x10
	// Line 1087, Address: 0x4b5d20, Func Offset: 0x20
	// Line 1090, Address: 0x4b5d4c, Func Offset: 0x4c
	// Func End, Address: 0x4b5d58, Func Offset: 0x58
}

// _iAnimSKBExtractTranslateAxis__FP14iAnimSKBHeaderUiP5xVec3iPUc
// Start address: 0x4b5d60
int32 _iAnimSKBExtractTranslateAxis(iAnimSKBHeader* data, uint32 bone, xVec3* tranArray, uint8* axis)
{
	uint32 i;
	uint32 j;
	uint32 keylast;
	uint32 tcount;
	iAnimSKBKey* keys;
	float32* times;
	uint16* offsets;
	xVec3* lastTran;
	int32 tranFound;
	int32 lastTime;
	int32 currTime;
	float32 lerp;
	// Line 993, Address: 0x4b5d60, Func Offset: 0
	// Line 995, Address: 0x4b5d64, Func Offset: 0x4
	// Line 993, Address: 0x4b5d68, Func Offset: 0x8
	// Line 1006, Address: 0x4b5d6c, Func Offset: 0xc
	// Line 994, Address: 0x4b5d70, Func Offset: 0x10
	// Line 999, Address: 0x4b5d74, Func Offset: 0x14
	// Line 996, Address: 0x4b5d78, Func Offset: 0x18
	// Line 1003, Address: 0x4b5d7c, Func Offset: 0x1c
	// Line 997, Address: 0x4b5d80, Func Offset: 0x20
	// Line 1003, Address: 0x4b5d84, Func Offset: 0x24
	// Line 996, Address: 0x4b5d88, Func Offset: 0x28
	// Line 1003, Address: 0x4b5d8c, Func Offset: 0x2c
	// Line 996, Address: 0x4b5d90, Func Offset: 0x30
	// Line 1003, Address: 0x4b5d94, Func Offset: 0x34
	// Line 997, Address: 0x4b5d98, Func Offset: 0x38
	// Line 1003, Address: 0x4b5d9c, Func Offset: 0x3c
	// Line 1006, Address: 0x4b5da0, Func Offset: 0x40
	// Line 1003, Address: 0x4b5da4, Func Offset: 0x44
	// Line 1006, Address: 0x4b5da8, Func Offset: 0x48
	// Line 1003, Address: 0x4b5dac, Func Offset: 0x4c
	// Line 1006, Address: 0x4b5db4, Func Offset: 0x54
	// Line 1032, Address: 0x4b5dc4, Func Offset: 0x64
	// Line 1006, Address: 0x4b5dc8, Func Offset: 0x68
	// Line 1009, Address: 0x4b5dcc, Func Offset: 0x6c
	// Line 1037, Address: 0x4b5dd0, Func Offset: 0x70
	// Line 1009, Address: 0x4b5dd4, Func Offset: 0x74
	// Line 1015, Address: 0x4b5ddc, Func Offset: 0x7c
	// Line 1009, Address: 0x4b5de0, Func Offset: 0x80
	// Line 1015, Address: 0x4b5df8, Func Offset: 0x98
	// Line 1021, Address: 0x4b5e20, Func Offset: 0xc0
	// Line 1027, Address: 0x4b5e4c, Func Offset: 0xec
	// Line 1030, Address: 0x4b5e78, Func Offset: 0x118
	// Line 1032, Address: 0x4b5e90, Func Offset: 0x130
	// Line 1031, Address: 0x4b5e94, Func Offset: 0x134
	// Line 1043, Address: 0x4b5e98, Func Offset: 0x138
	// Line 1036, Address: 0x4b5ebc, Func Offset: 0x15c
	// Line 1043, Address: 0x4b5ec4, Func Offset: 0x164
	// Line 1036, Address: 0x4b5ed0, Func Offset: 0x170
	// Line 1043, Address: 0x4b5f04, Func Offset: 0x1a4
	// Line 1037, Address: 0x4b5f0c, Func Offset: 0x1ac
	// Line 1043, Address: 0x4b5f18, Func Offset: 0x1b8
	// Line 1038, Address: 0x4b5f20, Func Offset: 0x1c0
	// Line 1043, Address: 0x4b5f2c, Func Offset: 0x1cc
	// Line 1039, Address: 0x4b5f34, Func Offset: 0x1d4
	// Line 1043, Address: 0x4b5f40, Func Offset: 0x1e0
	// Line 1036, Address: 0x4b5f48, Func Offset: 0x1e8
	// Line 1043, Address: 0x4b5f7c, Func Offset: 0x21c
	// Line 1037, Address: 0x4b5f84, Func Offset: 0x224
	// Line 1043, Address: 0x4b5f90, Func Offset: 0x230
	// Line 1038, Address: 0x4b5f98, Func Offset: 0x238
	// Line 1043, Address: 0x4b5fa4, Func Offset: 0x244
	// Line 1039, Address: 0x4b5fac, Func Offset: 0x24c
	// Line 1043, Address: 0x4b5fb8, Func Offset: 0x258
	// Line 1036, Address: 0x4b5fc0, Func Offset: 0x260
	// Line 1043, Address: 0x4b5ff4, Func Offset: 0x294
	// Line 1037, Address: 0x4b5ffc, Func Offset: 0x29c
	// Line 1043, Address: 0x4b6008, Func Offset: 0x2a8
	// Line 1038, Address: 0x4b6010, Func Offset: 0x2b0
	// Line 1043, Address: 0x4b601c, Func Offset: 0x2bc
	// Line 1039, Address: 0x4b6024, Func Offset: 0x2c4
	// Line 1043, Address: 0x4b6030, Func Offset: 0x2d0
	// Line 1036, Address: 0x4b6038, Func Offset: 0x2d8
	// Line 1043, Address: 0x4b606c, Func Offset: 0x30c
	// Line 1037, Address: 0x4b6074, Func Offset: 0x314
	// Line 1043, Address: 0x4b6080, Func Offset: 0x320
	// Line 1038, Address: 0x4b6088, Func Offset: 0x328
	// Line 1043, Address: 0x4b6094, Func Offset: 0x334
	// Line 1039, Address: 0x4b609c, Func Offset: 0x33c
	// Line 1043, Address: 0x4b60a8, Func Offset: 0x348
	// Line 1036, Address: 0x4b60b0, Func Offset: 0x350
	// Line 1043, Address: 0x4b60e4, Func Offset: 0x384
	// Line 1037, Address: 0x4b60ec, Func Offset: 0x38c
	// Line 1043, Address: 0x4b60f8, Func Offset: 0x398
	// Line 1038, Address: 0x4b6100, Func Offset: 0x3a0
	// Line 1043, Address: 0x4b610c, Func Offset: 0x3ac
	// Line 1039, Address: 0x4b6114, Func Offset: 0x3b4
	// Line 1043, Address: 0x4b6120, Func Offset: 0x3c0
	// Line 1036, Address: 0x4b6128, Func Offset: 0x3c8
	// Line 1043, Address: 0x4b615c, Func Offset: 0x3fc
	// Line 1037, Address: 0x4b6164, Func Offset: 0x404
	// Line 1043, Address: 0x4b6170, Func Offset: 0x410
	// Line 1038, Address: 0x4b6178, Func Offset: 0x418
	// Line 1043, Address: 0x4b6184, Func Offset: 0x424
	// Line 1039, Address: 0x4b618c, Func Offset: 0x42c
	// Line 1043, Address: 0x4b6198, Func Offset: 0x438
	// Line 1036, Address: 0x4b61a0, Func Offset: 0x440
	// Line 1043, Address: 0x4b61d4, Func Offset: 0x474
	// Line 1037, Address: 0x4b61dc, Func Offset: 0x47c
	// Line 1043, Address: 0x4b61e8, Func Offset: 0x488
	// Line 1038, Address: 0x4b61f0, Func Offset: 0x490
	// Line 1043, Address: 0x4b61fc, Func Offset: 0x49c
	// Line 1039, Address: 0x4b6204, Func Offset: 0x4a4
	// Line 1043, Address: 0x4b6210, Func Offset: 0x4b0
	// Line 1036, Address: 0x4b6218, Func Offset: 0x4b8
	// Line 1043, Address: 0x4b624c, Func Offset: 0x4ec
	// Line 1037, Address: 0x4b625c, Func Offset: 0x4fc
	// Line 1043, Address: 0x4b6268, Func Offset: 0x508
	// Line 1038, Address: 0x4b6270, Func Offset: 0x510
	// Line 1043, Address: 0x4b627c, Func Offset: 0x51c
	// Line 1039, Address: 0x4b6284, Func Offset: 0x524
	// Line 1043, Address: 0x4b6290, Func Offset: 0x530
	// Line 1036, Address: 0x4b62ac, Func Offset: 0x54c
	// Line 1043, Address: 0x4b62b4, Func Offset: 0x554
	// Line 1036, Address: 0x4b62c0, Func Offset: 0x560
	// Line 1043, Address: 0x4b62f4, Func Offset: 0x594
	// Line 1037, Address: 0x4b6304, Func Offset: 0x5a4
	// Line 1043, Address: 0x4b6310, Func Offset: 0x5b0
	// Line 1038, Address: 0x4b6318, Func Offset: 0x5b8
	// Line 1043, Address: 0x4b6324, Func Offset: 0x5c4
	// Line 1039, Address: 0x4b632c, Func Offset: 0x5cc
	// Line 1043, Address: 0x4b6338, Func Offset: 0x5d8
	// Line 1044, Address: 0x4b6344, Func Offset: 0x5e4
	// Line 1048, Address: 0x4b6348, Func Offset: 0x5e8
	// Line 1059, Address: 0x4b6350, Func Offset: 0x5f0
	// Line 1062, Address: 0x4b6354, Func Offset: 0x5f4
	// Line 1063, Address: 0x4b635c, Func Offset: 0x5fc
	// Line 1066, Address: 0x4b636c, Func Offset: 0x60c
	// Line 1067, Address: 0x4b6380, Func Offset: 0x620
	// Line 1069, Address: 0x4b6390, Func Offset: 0x630
	// Line 1070, Address: 0x4b63b8, Func Offset: 0x658
	// Func End, Address: 0x4b63c4, Func Offset: 0x664
}

// _iAnimSKBExtractTranslate__FP14iAnimSKBHeaderUiP5xVec3i
// Start address: 0x4b63d0
int32 _iAnimSKBExtractTranslate(iAnimSKBHeader* data, uint32 bone, xVec3* tranArray, int32 tranCount)
{
	uint8 axis[3];
	// Line 982, Address: 0x4b63d0, Func Offset: 0
	// Line 984, Address: 0x4b63d4, Func Offset: 0x4
	// Line 982, Address: 0x4b63d8, Func Offset: 0x8
	// Line 987, Address: 0x4b63dc, Func Offset: 0xc
	// Line 984, Address: 0x4b63e0, Func Offset: 0x10
	// Line 985, Address: 0x4b63e4, Func Offset: 0x14
	// Line 987, Address: 0x4b63e8, Func Offset: 0x18
	// Line 989, Address: 0x4b63f0, Func Offset: 0x20
	// Func End, Address: 0x4b63fc, Func Offset: 0x2c
}

// _iAnimSKBNumExtract__FP14iAnimSKBHeaderUi
// Start address: 0x4b6400
int32 _iAnimSKBNumExtract(iAnimSKBHeader* data, uint32 bone)
{
	uint32 i;
	uint32 keylast;
	uint32 tcount;
	iAnimSKBKey* keys;
	float32* times;
	uint16* offsets;
	int32 tranFound;
	int32 lastTime;
	int32 currTime;
	// Line 947, Address: 0x4b6400, Func Offset: 0
	// Line 948, Address: 0x4b6404, Func Offset: 0x4
	// Line 949, Address: 0x4b6408, Func Offset: 0x8
	// Line 951, Address: 0x4b640c, Func Offset: 0xc
	// Line 955, Address: 0x4b6410, Func Offset: 0x10
	// Line 950, Address: 0x4b6414, Func Offset: 0x14
	// Line 955, Address: 0x4b6418, Func Offset: 0x18
	// Line 949, Address: 0x4b641c, Func Offset: 0x1c
	// Line 955, Address: 0x4b6420, Func Offset: 0x20
	// Line 949, Address: 0x4b6424, Func Offset: 0x24
	// Line 958, Address: 0x4b6428, Func Offset: 0x28
	// Line 950, Address: 0x4b642c, Func Offset: 0x2c
	// Line 958, Address: 0x4b6430, Func Offset: 0x30
	// Line 955, Address: 0x4b6438, Func Offset: 0x38
	// Line 958, Address: 0x4b644c, Func Offset: 0x4c
	// Line 961, Address: 0x4b6460, Func Offset: 0x60
	// Line 964, Address: 0x4b6484, Func Offset: 0x84
	// Line 965, Address: 0x4b6498, Func Offset: 0x98
	// Line 972, Address: 0x4b64a8, Func Offset: 0xa8
	// Line 973, Address: 0x4b64ac, Func Offset: 0xac
	// Line 976, Address: 0x4b64b0, Func Offset: 0xb0
	// Line 975, Address: 0x4b64b8, Func Offset: 0xb8
	// Line 976, Address: 0x4b64bc, Func Offset: 0xbc
	// Line 978, Address: 0x4b64c8, Func Offset: 0xc8
	// Line 979, Address: 0x4b64e0, Func Offset: 0xe0
	// Func End, Address: 0x4b64e8, Func Offset: 0xe8
}

// _iAnimSKBAdjustTranslate__FP14iAnimSKBHeaderUiPfPf
// Start address: 0x4b64f0
void _iAnimSKBAdjustTranslate(iAnimSKBHeader* data, uint32 bone, float32* starttran, float32* endtran)
{
	int32 ipos;
	uint32 i;
	uint32 idx;
	uint32 keyfirst;
	uint32 keylast;
	uint32 kcount;
	uint32 bcount;
	uint32 tcount;
	float32 outScale[3];
	float32 pos;
	float32 factor[3];
	float32 oldmax[3];
	float32 newmax[3];
	float32 timefirst;
	float32 timelast;
	iAnimSKBKey* keys;
	float32* times;
	uint16* offsets;
	// Line 883, Address: 0x4b64f0, Func Offset: 0
	// Line 886, Address: 0x4b64f8, Func Offset: 0x8
	// Line 883, Address: 0x4b64fc, Func Offset: 0xc
	// Line 885, Address: 0x4b6518, Func Offset: 0x28
	// Line 886, Address: 0x4b6524, Func Offset: 0x34
	// Line 888, Address: 0x4b6570, Func Offset: 0x80
	// Line 889, Address: 0x4b6574, Func Offset: 0x84
	// Line 893, Address: 0x4b657c, Func Offset: 0x8c
	// Line 898, Address: 0x4b6584, Func Offset: 0x94
	// Line 890, Address: 0x4b6588, Func Offset: 0x98
	// Line 898, Address: 0x4b658c, Func Offset: 0x9c
	// Line 894, Address: 0x4b6590, Func Offset: 0xa0
	// Line 893, Address: 0x4b6594, Func Offset: 0xa4
	// Line 894, Address: 0x4b6598, Func Offset: 0xa8
	// Line 893, Address: 0x4b659c, Func Offset: 0xac
	// Line 895, Address: 0x4b65a0, Func Offset: 0xb0
	// Line 896, Address: 0x4b65a4, Func Offset: 0xb4
	// Line 894, Address: 0x4b65a8, Func Offset: 0xb8
	// Line 898, Address: 0x4b65b8, Func Offset: 0xc8
	// Line 899, Address: 0x4b65c8, Func Offset: 0xd8
	// Line 900, Address: 0x4b65d0, Func Offset: 0xe0
	// Line 899, Address: 0x4b65d4, Func Offset: 0xe4
	// Line 903, Address: 0x4b65f0, Func Offset: 0x100
	// Line 899, Address: 0x4b65f4, Func Offset: 0x104
	// Line 900, Address: 0x4b65f8, Func Offset: 0x108
	// Line 901, Address: 0x4b6618, Func Offset: 0x128
	// Line 902, Address: 0x4b6620, Func Offset: 0x130
	// Line 901, Address: 0x4b6624, Func Offset: 0x134
	// Line 902, Address: 0x4b6634, Func Offset: 0x144
	// Line 903, Address: 0x4b6648, Func Offset: 0x158
	// Line 904, Address: 0x4b6658, Func Offset: 0x168
	// Line 903, Address: 0x4b665c, Func Offset: 0x16c
	// Line 904, Address: 0x4b6660, Func Offset: 0x170
	// Line 905, Address: 0x4b6664, Func Offset: 0x174
	// Line 904, Address: 0x4b6668, Func Offset: 0x178
	// Line 905, Address: 0x4b668c, Func Offset: 0x19c
	// Line 907, Address: 0x4b66a0, Func Offset: 0x1b0
	// Line 905, Address: 0x4b66a8, Func Offset: 0x1b8
	// Line 907, Address: 0x4b66bc, Func Offset: 0x1cc
	// Line 909, Address: 0x4b66d8, Func Offset: 0x1e8
	// Line 913, Address: 0x4b6700, Func Offset: 0x210
	// Line 910, Address: 0x4b6708, Func Offset: 0x218
	// Line 911, Address: 0x4b6738, Func Offset: 0x248
	// Line 912, Address: 0x4b6754, Func Offset: 0x264
	// Line 913, Address: 0x4b6758, Func Offset: 0x268
	// Line 914, Address: 0x4b6764, Func Offset: 0x274
	// Line 913, Address: 0x4b6770, Func Offset: 0x280
	// Line 914, Address: 0x4b6788, Func Offset: 0x298
	// Line 916, Address: 0x4b6790, Func Offset: 0x2a0
	// Line 932, Address: 0x4b67a0, Func Offset: 0x2b0
	// Line 931, Address: 0x4b67a4, Func Offset: 0x2b4
	// Line 922, Address: 0x4b67a8, Func Offset: 0x2b8
	// Line 917, Address: 0x4b67ac, Func Offset: 0x2bc
	// Line 919, Address: 0x4b67c8, Func Offset: 0x2d8
	// Line 917, Address: 0x4b67cc, Func Offset: 0x2dc
	// Line 918, Address: 0x4b67d4, Func Offset: 0x2e4
	// Line 919, Address: 0x4b67f0, Func Offset: 0x300
	// Line 922, Address: 0x4b6800, Func Offset: 0x310
	// Line 923, Address: 0x4b6854, Func Offset: 0x364
	// Line 924, Address: 0x4b6860, Func Offset: 0x370
	// Line 925, Address: 0x4b6870, Func Offset: 0x380
	// Line 935, Address: 0x4b6874, Func Offset: 0x384
	// Line 925, Address: 0x4b6880, Func Offset: 0x390
	// Line 935, Address: 0x4b6894, Func Offset: 0x3a4
	// Line 937, Address: 0x4b68b0, Func Offset: 0x3c0
	// Line 938, Address: 0x4b68b4, Func Offset: 0x3c4
	// Line 940, Address: 0x4b68d8, Func Offset: 0x3e8
	// Line 938, Address: 0x4b68e0, Func Offset: 0x3f0
	// Line 940, Address: 0x4b68ec, Func Offset: 0x3fc
	// Line 941, Address: 0x4b68f4, Func Offset: 0x404
	// Line 911, Address: 0x4b6904, Func Offset: 0x414
	// Line 941, Address: 0x4b6908, Func Offset: 0x418
	// Line 923, Address: 0x4b6918, Func Offset: 0x428
	// Line 941, Address: 0x4b6920, Func Offset: 0x430
	// Line 927, Address: 0x4b6928, Func Offset: 0x438
	// Line 941, Address: 0x4b692c, Func Offset: 0x43c
	// Line 930, Address: 0x4b693c, Func Offset: 0x44c
	// Line 941, Address: 0x4b6944, Func Offset: 0x454
	// Line 930, Address: 0x4b6948, Func Offset: 0x458
	// Line 941, Address: 0x4b6950, Func Offset: 0x460
	// Line 930, Address: 0x4b6954, Func Offset: 0x464
	// Line 941, Address: 0x4b695c, Func Offset: 0x46c
	// Line 932, Address: 0x4b6974, Func Offset: 0x484
	// Line 931, Address: 0x4b6980, Func Offset: 0x490
	// Line 941, Address: 0x4b6988, Func Offset: 0x498
	// Func End, Address: 0x4b69c0, Func Offset: 0x4d0
}

// iAnimEvalSKB__FP14iAnimSKBHeaderfUiP5xVec3P5xQuat
// Start address: 0x4b69c0
void iAnimEvalSKB(iAnimSKBHeader* data, float32 time, uint32 flags, xVec3* tran, xQuat* quat)
{
	uint32 i;
	uint32 tidx;
	uint32 bcount;
	uint32 tcount;
	iAnimSKBKey* keys;
	float32* times;
	uint16* offsets;
	int32 asdf;
	float32 time1;
	float32 time2;
	float32 lerp;
	iAnimSKBKey* k;
	uint32 costheta;
	uint32 theta;
	// Line 96, Address: 0x4b69c4, Func Offset: 0x4
	// Line 93, Address: 0x4b69c8, Func Offset: 0x8
	// Line 96, Address: 0x4b69d4, Func Offset: 0x14
	// Line 100, Address: 0x4b69d8, Func Offset: 0x18
	// Line 97, Address: 0x4b69dc, Func Offset: 0x1c
	// Line 98, Address: 0x4b69e8, Func Offset: 0x28
	// Line 107, Address: 0x4b69ec, Func Offset: 0x2c
	// Line 108, Address: 0x4b6a08, Func Offset: 0x48
	// Line 117, Address: 0x4b6a18, Func Offset: 0x58
	// Line 118, Address: 0x4b6a28, Func Offset: 0x68
	// Line 119, Address: 0x4b6a3c, Func Offset: 0x7c
	// Line 121, Address: 0x4b6a5c, Func Offset: 0x9c
	// Line 122, Address: 0x4b6a68, Func Offset: 0xa8
	// Line 128, Address: 0x4b6a90, Func Offset: 0xd0
	// Line 125, Address: 0x4b6a94, Func Offset: 0xd4
	// Line 128, Address: 0x4b6a9c, Func Offset: 0xdc
	// Line 129, Address: 0x4b6aa4, Func Offset: 0xe4
	// Line 131, Address: 0x4b6aa8, Func Offset: 0xe8
	// Line 132, Address: 0x4b6ab4, Func Offset: 0xf4
	// Line 133, Address: 0x4b6ab8, Func Offset: 0xf8
	// Line 137, Address: 0x4b6abc, Func Offset: 0xfc
	// Line 149, Address: 0x4b6ac8, Func Offset: 0x108
	// Line 153, Address: 0x4b6ad4, Func Offset: 0x114
	// Line 168, Address: 0x4b6ae4, Func Offset: 0x124
	// Line 153, Address: 0x4b6aec, Func Offset: 0x12c
	// Line 154, Address: 0x4b6b00, Func Offset: 0x140
	// Line 155, Address: 0x4b6b18, Func Offset: 0x158
	// Line 156, Address: 0x4b6b30, Func Offset: 0x170
	// Line 158, Address: 0x4b6b48, Func Offset: 0x188
	// Line 166, Address: 0x4b6b50, Func Offset: 0x190
	// Line 158, Address: 0x4b6b54, Func Offset: 0x194
	// Line 159, Address: 0x4b6b68, Func Offset: 0x1a8
	// Line 160, Address: 0x4b6b84, Func Offset: 0x1c4
	// Line 167, Address: 0x4b6b90, Func Offset: 0x1d0
	// Line 160, Address: 0x4b6b94, Func Offset: 0x1d4
	// Line 168, Address: 0x4b6ba0, Func Offset: 0x1e0
	// Line 169, Address: 0x4b6ba8, Func Offset: 0x1e8
	// Line 176, Address: 0x4b6bb0, Func Offset: 0x1f0
	// Line 177, Address: 0x4b6be4, Func Offset: 0x224
	// Line 178, Address: 0x4b6be8, Func Offset: 0x228
	// Line 179, Address: 0x4b6bec, Func Offset: 0x22c
	// Line 180, Address: 0x4b6bf0, Func Offset: 0x230
	// Line 181, Address: 0x4b6bf4, Func Offset: 0x234
	// Line 182, Address: 0x4b6bf8, Func Offset: 0x238
	// Line 183, Address: 0x4b6bfc, Func Offset: 0x23c
	// Line 184, Address: 0x4b6c00, Func Offset: 0x240
	// Line 185, Address: 0x4b6c04, Func Offset: 0x244
	// Line 186, Address: 0x4b6c08, Func Offset: 0x248
	// Line 197, Address: 0x4b6c0c, Func Offset: 0x24c
	// Line 200, Address: 0x4b6c14, Func Offset: 0x254
	// Line 201, Address: 0x4b6c1c, Func Offset: 0x25c
	// Line 200, Address: 0x4b6c20, Func Offset: 0x260
	// Line 203, Address: 0x4b6c24, Func Offset: 0x264
	// Line 222, Address: 0x4b6c28, Func Offset: 0x268
	// Line 203, Address: 0x4b6c2c, Func Offset: 0x26c
	// Line 223, Address: 0x4b6c54, Func Offset: 0x294
	// Line 224, Address: 0x4b6c58, Func Offset: 0x298
	// Line 225, Address: 0x4b6c5c, Func Offset: 0x29c
	// Line 226, Address: 0x4b6c60, Func Offset: 0x2a0
	// Line 227, Address: 0x4b6c64, Func Offset: 0x2a4
	// Line 228, Address: 0x4b6c68, Func Offset: 0x2a8
	// Line 229, Address: 0x4b6c6c, Func Offset: 0x2ac
	// Line 230, Address: 0x4b6c70, Func Offset: 0x2b0
	// Line 231, Address: 0x4b6c74, Func Offset: 0x2b4
	// Line 232, Address: 0x4b6c78, Func Offset: 0x2b8
	// Line 233, Address: 0x4b6c7c, Func Offset: 0x2bc
	// Line 234, Address: 0x4b6c80, Func Offset: 0x2c0
	// Line 235, Address: 0x4b6c84, Func Offset: 0x2c4
	// Line 236, Address: 0x4b6c88, Func Offset: 0x2c8
	// Line 237, Address: 0x4b6c8c, Func Offset: 0x2cc
	// Line 238, Address: 0x4b6c90, Func Offset: 0x2d0
	// Line 239, Address: 0x4b6c94, Func Offset: 0x2d4
	// Line 240, Address: 0x4b6c98, Func Offset: 0x2d8
	// Line 241, Address: 0x4b6c9c, Func Offset: 0x2dc
	// Line 242, Address: 0x4b6ca0, Func Offset: 0x2e0
	// Line 243, Address: 0x4b6ca4, Func Offset: 0x2e4
	// Line 244, Address: 0x4b6ca8, Func Offset: 0x2e8
	// Line 245, Address: 0x4b6cac, Func Offset: 0x2ec
	// Line 246, Address: 0x4b6cb0, Func Offset: 0x2f0
	// Line 247, Address: 0x4b6cb4, Func Offset: 0x2f4
	// Line 248, Address: 0x4b6cb8, Func Offset: 0x2f8
	// Line 249, Address: 0x4b6cbc, Func Offset: 0x2fc
	// Line 250, Address: 0x4b6cc0, Func Offset: 0x300
	// Line 251, Address: 0x4b6cc4, Func Offset: 0x304
	// Line 252, Address: 0x4b6cc8, Func Offset: 0x308
	// Line 253, Address: 0x4b6ccc, Func Offset: 0x30c
	// Line 254, Address: 0x4b6cd0, Func Offset: 0x310
	// Line 255, Address: 0x4b6cd8, Func Offset: 0x318
	// Line 256, Address: 0x4b6cdc, Func Offset: 0x31c
	// Line 257, Address: 0x4b6ce0, Func Offset: 0x320
	// Line 258, Address: 0x4b6ce4, Func Offset: 0x324
	// Line 259, Address: 0x4b6ce8, Func Offset: 0x328
	// Line 260, Address: 0x4b6cec, Func Offset: 0x32c
	// Line 261, Address: 0x4b6cf0, Func Offset: 0x330
	// Line 262, Address: 0x4b6cf4, Func Offset: 0x334
	// Line 264, Address: 0x4b6cfc, Func Offset: 0x33c
	// Line 265, Address: 0x4b6d00, Func Offset: 0x340
	// Line 266, Address: 0x4b6d04, Func Offset: 0x344
	// Line 267, Address: 0x4b6d08, Func Offset: 0x348
	// Line 268, Address: 0x4b6d0c, Func Offset: 0x34c
	// Line 270, Address: 0x4b6d10, Func Offset: 0x350
	// Line 271, Address: 0x4b6d14, Func Offset: 0x354
	// Line 272, Address: 0x4b6d18, Func Offset: 0x358
	// Line 273, Address: 0x4b6d1c, Func Offset: 0x35c
	// Line 274, Address: 0x4b6d20, Func Offset: 0x360
	// Line 275, Address: 0x4b6d24, Func Offset: 0x364
	// Line 276, Address: 0x4b6d28, Func Offset: 0x368
	// Line 277, Address: 0x4b6d2c, Func Offset: 0x36c
	// Line 278, Address: 0x4b6d30, Func Offset: 0x370
	// Line 284, Address: 0x4b6d38, Func Offset: 0x378
	// Line 285, Address: 0x4b6ed8, Func Offset: 0x518
	// Line 309, Address: 0x4b6f28, Func Offset: 0x568
	// Line 310, Address: 0x4b6f2c, Func Offset: 0x56c
	// Line 311, Address: 0x4b6f30, Func Offset: 0x570
	// Line 348, Address: 0x4b6f34, Func Offset: 0x574
	// Line 349, Address: 0x4b6f38, Func Offset: 0x578
	// Line 350, Address: 0x4b6f3c, Func Offset: 0x57c
	// Line 352, Address: 0x4b6f4c, Func Offset: 0x58c
	// Func End, Address: 0x4b6f54, Func Offset: 0x594
}

