



void iCutsceneSkinInstanceHack(RpAtomic* atomic, uint8 enable_hack);
int32 Cutscene_Skin_InstanceCallBack(RxPS2AllPipeData* ps2AllPipeData, void** clusterData, uint32 numClusters);
int32 iCSLoadStep(xCutscene* csn);
void iCSFileClose(xCutscene* csn);
void iCSFileAsyncRead(xCutscene* csn, void* dest, uint32 size);
uint32 iCSFileOpen(xCutscene* csn);
void iCSAsyncReadCB();
void iCSSoundCutsceneCB(iSndHandle id, uint8 first);
void* iCSSoundGetData(xCutscene* csn, uint32 channel, uint32 chunk);
void iCSSoundSetup(xCutscene* csn);

// iCutsceneSkinInstanceHack__FP8RpAtomicb
// Start address: 0x4b4090
void iCutsceneSkinInstanceHack(RpAtomic* atomic, uint8 enable_hack)
{
	RpMaterialList* matList;
	int32 i;
	RxPipeline* pipeline;
	RxPipeline* srcPipe;
	RpMeshHeader* meshHeader;
	rxNodePS2AllMatPvtData* matPvtData;
	// Line 402, Address: 0x4b4090, Func Offset: 0
	// Line 404, Address: 0x4b4098, Func Offset: 0x8
	// Line 430, Address: 0x4b40a8, Func Offset: 0x18
	// Line 426, Address: 0x4b40ac, Func Offset: 0x1c
	// Line 425, Address: 0x4b40b0, Func Offset: 0x20
	// Line 430, Address: 0x4b40b4, Func Offset: 0x24
	// Line 426, Address: 0x4b40b8, Func Offset: 0x28
	// Line 425, Address: 0x4b40bc, Func Offset: 0x2c
	// Line 407, Address: 0x4b40c0, Func Offset: 0x30
	// Line 408, Address: 0x4b40c4, Func Offset: 0x34
	// Line 409, Address: 0x4b40cc, Func Offset: 0x3c
	// Line 411, Address: 0x4b40d0, Func Offset: 0x40
	// Line 412, Address: 0x4b40dc, Func Offset: 0x4c
	// Line 418, Address: 0x4b40e4, Func Offset: 0x54
	// Line 419, Address: 0x4b40e8, Func Offset: 0x58
	// Line 420, Address: 0x4b40ec, Func Offset: 0x5c
	// Line 421, Address: 0x4b40f4, Func Offset: 0x64
	// Line 424, Address: 0x4b4100, Func Offset: 0x70
	// Line 425, Address: 0x4b4108, Func Offset: 0x78
	// Line 426, Address: 0x4b4114, Func Offset: 0x84
	// Line 429, Address: 0x4b4118, Func Offset: 0x88
	// Line 430, Address: 0x4b4130, Func Offset: 0xa0
	// Line 415, Address: 0x4b4154, Func Offset: 0xc4
	// Line 430, Address: 0x4b4158, Func Offset: 0xc8
	// Func End, Address: 0x4b4180, Func Offset: 0xf0
}

// Cutscene_Skin_InstanceCallBack__FP16RxPS2AllPipeDataPPvUi
// Start address: 0x4b4180
int32 Cutscene_Skin_InstanceCallBack(RxPS2AllPipeData* ps2AllPipeData, void** clusterData, uint32 numClusters)
{
	// Line 388, Address: 0x4b4180, Func Offset: 0
	// Line 390, Address: 0x4b4184, Func Offset: 0x4
	// Line 388, Address: 0x4b4188, Func Offset: 0x8
	// Line 390, Address: 0x4b418c, Func Offset: 0xc
	// Line 391, Address: 0x4b419c, Func Offset: 0x1c
	// Line 395, Address: 0x4b41ac, Func Offset: 0x2c
	// Line 396, Address: 0x4b41b4, Func Offset: 0x34
	// Line 397, Address: 0x4b41b8, Func Offset: 0x38
	// Func End, Address: 0x4b41c4, Func Offset: 0x44
}

// iCSLoadStep__FP9xCutscene
// Start address: 0x4b41d0
int32 iCSLoadStep(xCutscene* csn)
{
	int32 bytes;
	XFILE_READSECTOR_STATUS cdstat;
	uint32 skipAccum;
	uint32 tmpSize;
	void* foundModel;
	xSndGroup* pLeftGroup;
	xSndGroup* pRightGroup;
	xSndGroup* pLeftGroup;
	uint32 i;
	// Line 200, Address: 0x4b41d0, Func Offset: 0
	// Line 204, Address: 0x4b41e8, Func Offset: 0x18
	// Line 207, Address: 0x4b41f8, Func Offset: 0x28
	// Line 204, Address: 0x4b4204, Func Offset: 0x34
	// Line 207, Address: 0x4b420c, Func Offset: 0x3c
	// Line 208, Address: 0x4b4234, Func Offset: 0x64
	// Line 213, Address: 0x4b4248, Func Offset: 0x78
	// Line 217, Address: 0x4b4260, Func Offset: 0x90
	// Line 219, Address: 0x4b4268, Func Offset: 0x98
	// Line 225, Address: 0x4b428c, Func Offset: 0xbc
	// Line 219, Address: 0x4b4290, Func Offset: 0xc0
	// Line 225, Address: 0x4b4298, Func Offset: 0xc8
	// Line 230, Address: 0x4b42b8, Func Offset: 0xe8
	// Line 237, Address: 0x4b42c0, Func Offset: 0xf0
	// Line 238, Address: 0x4b42c4, Func Offset: 0xf4
	// Line 237, Address: 0x4b42c8, Func Offset: 0xf8
	// Line 238, Address: 0x4b42d8, Func Offset: 0x108
	// Line 239, Address: 0x4b42e8, Func Offset: 0x118
	// Line 238, Address: 0x4b42ec, Func Offset: 0x11c
	// Line 239, Address: 0x4b42f0, Func Offset: 0x120
	// Line 238, Address: 0x4b42f4, Func Offset: 0x124
	// Line 274, Address: 0x4b4300, Func Offset: 0x130
	// Line 239, Address: 0x4b4304, Func Offset: 0x134
	// Line 274, Address: 0x4b4308, Func Offset: 0x138
	// Line 277, Address: 0x4b4318, Func Offset: 0x148
	// Line 282, Address: 0x4b4320, Func Offset: 0x150
	// Line 286, Address: 0x4b4328, Func Offset: 0x158
	// Line 287, Address: 0x4b4338, Func Offset: 0x168
	// Line 330, Address: 0x4b4348, Func Offset: 0x178
	// Line 331, Address: 0x4b4408, Func Offset: 0x238
	// Line 332, Address: 0x4b4410, Func Offset: 0x240
	// Line 338, Address: 0x4b4418, Func Offset: 0x248
	// Line 339, Address: 0x4b4428, Func Offset: 0x258
	// Line 342, Address: 0x4b443c, Func Offset: 0x26c
	// Line 346, Address: 0x4b4444, Func Offset: 0x274
	// Line 350, Address: 0x4b444c, Func Offset: 0x27c
	// Line 208, Address: 0x4b4484, Func Offset: 0x2b4
	// Line 210, Address: 0x4b4488, Func Offset: 0x2b8
	// Line 350, Address: 0x4b4490, Func Offset: 0x2c0
	// Line 230, Address: 0x4b4498, Func Offset: 0x2c8
	// Line 350, Address: 0x4b449c, Func Offset: 0x2cc
	// Line 251, Address: 0x4b44c4, Func Offset: 0x2f4
	// Line 350, Address: 0x4b44c8, Func Offset: 0x2f8
	// Line 252, Address: 0x4b44f8, Func Offset: 0x328
	// Line 350, Address: 0x4b44fc, Func Offset: 0x32c
	// Line 258, Address: 0x4b4524, Func Offset: 0x354
	// Line 350, Address: 0x4b452c, Func Offset: 0x35c
	// Line 259, Address: 0x4b4530, Func Offset: 0x360
	// Line 350, Address: 0x4b4534, Func Offset: 0x364
	// Line 259, Address: 0x4b453c, Func Offset: 0x36c
	// Line 350, Address: 0x4b4540, Func Offset: 0x370
	// Line 259, Address: 0x4b455c, Func Offset: 0x38c
	// Line 350, Address: 0x4b4560, Func Offset: 0x390
	// Line 262, Address: 0x4b456c, Func Offset: 0x39c
	// Line 350, Address: 0x4b4570, Func Offset: 0x3a0
	// Line 267, Address: 0x4b4574, Func Offset: 0x3a4
	// Line 262, Address: 0x4b4578, Func Offset: 0x3a8
	// Line 350, Address: 0x4b457c, Func Offset: 0x3ac
	// Line 262, Address: 0x4b4584, Func Offset: 0x3b4
	// Line 350, Address: 0x4b4588, Func Offset: 0x3b8
	// Line 268, Address: 0x4b459c, Func Offset: 0x3cc
	// Line 245, Address: 0x4b45a4, Func Offset: 0x3d4
	// Line 350, Address: 0x4b45a8, Func Offset: 0x3d8
	// Line 269, Address: 0x4b45bc, Func Offset: 0x3ec
	// Line 350, Address: 0x4b45c0, Func Offset: 0x3f0
	// Line 269, Address: 0x4b45c4, Func Offset: 0x3f4
	// Line 350, Address: 0x4b45c8, Func Offset: 0x3f8
	// Line 269, Address: 0x4b45cc, Func Offset: 0x3fc
	// Line 350, Address: 0x4b45d4, Func Offset: 0x404
	// Line 269, Address: 0x4b45e0, Func Offset: 0x410
	// Line 350, Address: 0x4b45e8, Func Offset: 0x418
	// Line 269, Address: 0x4b4600, Func Offset: 0x430
	// Line 350, Address: 0x4b460c, Func Offset: 0x43c
	// Line 269, Address: 0x4b4650, Func Offset: 0x480
	// Line 350, Address: 0x4b4658, Func Offset: 0x488
	// Line 269, Address: 0x4b467c, Func Offset: 0x4ac
	// Line 350, Address: 0x4b4680, Func Offset: 0x4b0
	// Line 270, Address: 0x4b4690, Func Offset: 0x4c0
	// Line 350, Address: 0x4b4694, Func Offset: 0x4c4
	// Line 271, Address: 0x4b4698, Func Offset: 0x4c8
	// Line 278, Address: 0x4b46a0, Func Offset: 0x4d0
	// Line 350, Address: 0x4b46a4, Func Offset: 0x4d4
	// Line 328, Address: 0x4b46d4, Func Offset: 0x504
	// Line 329, Address: 0x4b46d8, Func Offset: 0x508
	// Line 350, Address: 0x4b46e0, Func Offset: 0x510
	// Line 300, Address: 0x4b4718, Func Offset: 0x548
	// Line 298, Address: 0x4b471c, Func Offset: 0x54c
	// Line 303, Address: 0x4b4720, Func Offset: 0x550
	// Line 350, Address: 0x4b4724, Func Offset: 0x554
	// Line 308, Address: 0x4b4734, Func Offset: 0x564
	// Line 305, Address: 0x4b4738, Func Offset: 0x568
	// Line 303, Address: 0x4b473c, Func Offset: 0x56c
	// Line 308, Address: 0x4b4740, Func Offset: 0x570
	// Line 350, Address: 0x4b4758, Func Offset: 0x588
	// Line 310, Address: 0x4b4764, Func Offset: 0x594
	// Line 350, Address: 0x4b4768, Func Offset: 0x598
	// Line 310, Address: 0x4b476c, Func Offset: 0x59c
	// Line 350, Address: 0x4b4780, Func Offset: 0x5b0
	// Line 312, Address: 0x4b4788, Func Offset: 0x5b8
	// Line 350, Address: 0x4b4790, Func Offset: 0x5c0
	// Line 317, Address: 0x4b479c, Func Offset: 0x5cc
	// Line 315, Address: 0x4b47a0, Func Offset: 0x5d0
	// Line 319, Address: 0x4b47a4, Func Offset: 0x5d4
	// Line 350, Address: 0x4b47bc, Func Offset: 0x5ec
	// Line 320, Address: 0x4b47cc, Func Offset: 0x5fc
	// Line 322, Address: 0x4b47d0, Func Offset: 0x600
	// Line 350, Address: 0x4b47d8, Func Offset: 0x608
	// Line 340, Address: 0x4b47dc, Func Offset: 0x60c
	// Line 350, Address: 0x4b47e0, Func Offset: 0x610
	// Line 340, Address: 0x4b47e4, Func Offset: 0x614
	// Line 350, Address: 0x4b47e8, Func Offset: 0x618
	// Line 340, Address: 0x4b4810, Func Offset: 0x640
	// Line 350, Address: 0x4b481c, Func Offset: 0x64c
	// Line 340, Address: 0x4b4860, Func Offset: 0x690
	// Line 350, Address: 0x4b4868, Func Offset: 0x698
	// Line 340, Address: 0x4b488c, Func Offset: 0x6bc
	// Line 350, Address: 0x4b4890, Func Offset: 0x6c0
	// Line 348, Address: 0x4b48a4, Func Offset: 0x6d4
	// Line 353, Address: 0x4b48ac, Func Offset: 0x6dc
	// Line 355, Address: 0x4b48b0, Func Offset: 0x6e0
	// Func End, Address: 0x4b48cc, Func Offset: 0x6fc
}

// iCSFileClose__FP9xCutscene
// Start address: 0x4b48d0
void iCSFileClose(xCutscene* csn)
{
	// Line 191, Address: 0x4b48d0, Func Offset: 0
	// Line 192, Address: 0x4b48e8, Func Offset: 0x18
	// Line 193, Address: 0x4b4948, Func Offset: 0x78
	// Line 194, Address: 0x4b494c, Func Offset: 0x7c
	// Line 195, Address: 0x4b4958, Func Offset: 0x88
	// Line 196, Address: 0x4b495c, Func Offset: 0x8c
	// Func End, Address: 0x4b4974, Func Offset: 0xa4
}

// iCSFileAsyncRead__FP9xCutscenePvUi
// Start address: 0x4b4980
void iCSFileAsyncRead(xCutscene* csn, void* dest, uint32 size)
{
	uint32* tp;
	uint32 i;
	// Line 172, Address: 0x4b4980, Func Offset: 0
	// Line 174, Address: 0x4b498c, Func Offset: 0xc
	// Line 172, Address: 0x4b4990, Func Offset: 0x10
	// Line 178, Address: 0x4b4994, Func Offset: 0x14
	// Line 176, Address: 0x4b499c, Func Offset: 0x1c
	// Line 178, Address: 0x4b49a0, Func Offset: 0x20
	// Line 177, Address: 0x4b49b4, Func Offset: 0x34
	// Line 178, Address: 0x4b49c0, Func Offset: 0x40
	// Line 177, Address: 0x4b4a00, Func Offset: 0x80
	// Line 178, Address: 0x4b4a08, Func Offset: 0x88
	// Line 180, Address: 0x4b4a28, Func Offset: 0xa8
	// Line 181, Address: 0x4b4a40, Func Offset: 0xc0
	// Func End, Address: 0x4b4a50, Func Offset: 0xd0
}

// iCSFileOpen__FP9xCutscene
// Start address: 0x4b4a50
uint32 iCSFileOpen(xCutscene* csn)
{
	uint32 headerskip;
	PKRAssetTOCInfo ainfo;
	int8* filename;
	// Line 152, Address: 0x4b4a50, Func Offset: 0
	// Line 154, Address: 0x4b4a54, Func Offset: 0x4
	// Line 152, Address: 0x4b4a58, Func Offset: 0x8
	// Line 157, Address: 0x4b4a5c, Func Offset: 0xc
	// Line 152, Address: 0x4b4a60, Func Offset: 0x10
	// Line 154, Address: 0x4b4a70, Func Offset: 0x20
	// Line 157, Address: 0x4b4a74, Func Offset: 0x24
	// Line 154, Address: 0x4b4a78, Func Offset: 0x28
	// Line 157, Address: 0x4b4a7c, Func Offset: 0x2c
	// Line 158, Address: 0x4b4a8c, Func Offset: 0x3c
	// Line 161, Address: 0x4b4a94, Func Offset: 0x44
	// Line 162, Address: 0x4b4aa0, Func Offset: 0x50
	// Line 163, Address: 0x4b4ab8, Func Offset: 0x68
	// Line 164, Address: 0x4b4ae4, Func Offset: 0x94
	// Line 165, Address: 0x4b4ae8, Func Offset: 0x98
	// Line 167, Address: 0x4b4af4, Func Offset: 0xa4
	// Line 169, Address: 0x4b4af8, Func Offset: 0xa8
	// Func End, Address: 0x4b4b0c, Func Offset: 0xbc
}

// iCSAsyncReadCB__FP9tag_xFile
// Start address: 0x4b4b10
void iCSAsyncReadCB()
{
	// Line 145, Address: 0x4b4b10, Func Offset: 0
	// Line 146, Address: 0x4b4b14, Func Offset: 0x4
	// Line 145, Address: 0x4b4b18, Func Offset: 0x8
	// Line 146, Address: 0x4b4b1c, Func Offset: 0xc
	// Line 147, Address: 0x4b4b20, Func Offset: 0x10
	// Func End, Address: 0x4b4b28, Func Offset: 0x18
}

// iCSSoundCutsceneCB__F10iSndHandleb
// Start address: 0x4b4b30
void iCSSoundCutsceneCB(iSndHandle id, uint8 first)
{
	void* data;
	// Line 126, Address: 0x4b4b30, Func Offset: 0
	// Line 128, Address: 0x4b4b34, Func Offset: 0x4
	// Line 126, Address: 0x4b4b38, Func Offset: 0x8
	// Line 128, Address: 0x4b4b4c, Func Offset: 0x1c
	// Line 129, Address: 0x4b4b54, Func Offset: 0x24
	// Line 128, Address: 0x4b4b58, Func Offset: 0x28
	// Line 129, Address: 0x4b4b5c, Func Offset: 0x2c
	// Line 128, Address: 0x4b4b60, Func Offset: 0x30
	// Line 129, Address: 0x4b4b64, Func Offset: 0x34
	// Line 130, Address: 0x4b4b7c, Func Offset: 0x4c
	// Line 131, Address: 0x4b4b84, Func Offset: 0x54
	// Line 132, Address: 0x4b4be0, Func Offset: 0xb0
	// Line 133, Address: 0x4b4be4, Func Offset: 0xb4
	// Line 134, Address: 0x4b4c40, Func Offset: 0x110
	// Line 135, Address: 0x4b4c48, Func Offset: 0x118
	// Line 136, Address: 0x4b4cac, Func Offset: 0x17c
	// Line 137, Address: 0x4b4cb0, Func Offset: 0x180
	// Func End, Address: 0x4b4cc8, Func Offset: 0x198
}

// iCSSoundGetData__FP9xCutsceneUiUi
// Start address: 0x4b4cd0
void* iCSSoundGetData(xCutscene* csn, uint32 channel, uint32 chunk)
{
	void* retdata;
	xCutsceneData* data;
	uint32 dataIndex;
	uint32 numData;
	uint32 id;
	// Line 70, Address: 0x4b4cd0, Func Offset: 0
	// Line 72, Address: 0x4b4cec, Func Offset: 0x1c
	// Line 73, Address: 0x4b4cf0, Func Offset: 0x20
	// Line 75, Address: 0x4b4cfc, Func Offset: 0x2c
	// Line 74, Address: 0x4b4d00, Func Offset: 0x30
	// Line 88, Address: 0x4b4d04, Func Offset: 0x34
	// Line 104, Address: 0x4b4d14, Func Offset: 0x44
	// Line 88, Address: 0x4b4d18, Func Offset: 0x48
	// Line 89, Address: 0x4b4d1c, Func Offset: 0x4c
	// Line 104, Address: 0x4b4d30, Func Offset: 0x60
	// Line 105, Address: 0x4b4d34, Func Offset: 0x64
	// Line 106, Address: 0x4b4d38, Func Offset: 0x68
	// Line 104, Address: 0x4b4d3c, Func Offset: 0x6c
	// Line 106, Address: 0x4b4d48, Func Offset: 0x78
	// Line 96, Address: 0x4b4d74, Func Offset: 0xa4
	// Line 106, Address: 0x4b4d78, Func Offset: 0xa8
	// Line 100, Address: 0x4b4d84, Func Offset: 0xb4
	// Line 109, Address: 0x4b4d88, Func Offset: 0xb8
	// Line 120, Address: 0x4b4d98, Func Offset: 0xc8
	// Line 121, Address: 0x4b4d9c, Func Offset: 0xcc
	// Line 111, Address: 0x4b4dc8, Func Offset: 0xf8
	// Line 123, Address: 0x4b4dcc, Func Offset: 0xfc
	// Func End, Address: 0x4b4dd4, Func Offset: 0x104
}

// iCSSoundSetup__FP9xCutscene
// Start address: 0x4b4de0
void iCSSoundSetup(xCutscene* csn)
{
	xCutsceneData* data;
	uint32 numData;
	xRegion eMyRegion;
	int32 i;
	uint32 dataIndex;
	// Line 22, Address: 0x4b4de0, Func Offset: 0
	// Line 24, Address: 0x4b4dfc, Func Offset: 0x1c
	// Line 26, Address: 0x4b4e00, Func Offset: 0x20
	// Line 27, Address: 0x4b4e08, Func Offset: 0x28
	// Line 28, Address: 0x4b4e1c, Func Offset: 0x3c
	// Line 35, Address: 0x4b4e2c, Func Offset: 0x4c
	// Line 36, Address: 0x4b4e30, Func Offset: 0x50
	// Line 37, Address: 0x4b4e34, Func Offset: 0x54
	// Line 40, Address: 0x4b4e4c, Func Offset: 0x6c
	// Line 41, Address: 0x4b4e58, Func Offset: 0x78
	// Line 45, Address: 0x4b4e68, Func Offset: 0x88
	// Line 43, Address: 0x4b4e6c, Func Offset: 0x8c
	// Line 44, Address: 0x4b4e78, Func Offset: 0x98
	// Line 46, Address: 0x4b4e88, Func Offset: 0xa8
	// Line 47, Address: 0x4b4e90, Func Offset: 0xb0
	// Line 52, Address: 0x4b4ea0, Func Offset: 0xc0
	// Line 56, Address: 0x4b4eac, Func Offset: 0xcc
	// Line 54, Address: 0x4b4eb0, Func Offset: 0xd0
	// Line 56, Address: 0x4b4ec0, Func Offset: 0xe0
	// Line 57, Address: 0x4b4ec4, Func Offset: 0xe4
	// Line 58, Address: 0x4b4ec8, Func Offset: 0xe8
	// Line 56, Address: 0x4b4ecc, Func Offset: 0xec
	// Line 58, Address: 0x4b4ed8, Func Offset: 0xf8
	// Line 59, Address: 0x4b4ee0, Func Offset: 0x100
	// Func End, Address: 0x4b4f10, Func Offset: 0x130
}

