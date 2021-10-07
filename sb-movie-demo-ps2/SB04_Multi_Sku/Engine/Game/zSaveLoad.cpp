



void zSaveLoad_TriggerAutoSave();
int32 xSGT_LoadPrefsCB(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt);
int32 xSGT_LoadLoadCB(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt);
int32 xSGT_SaveProcPrefsCB(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt);
int32 xSGT_SaveInfoPrefsCB(int32* need, int32* most);
int32 xSGT_SaveProcCB(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt);
int32 xSGT_SaveInfoCB(int32* need, int32* most);
void zSaveLoad_DispatchCB(uint32 dispatchEvent, float32* toParam);
uint32 zSaveLoad_SaveLoop();
uint32 zSaveLoad_LoadLoop();
int32 zSaveLoad_LoadGame();
int32 zSaveLoad_SaveGame();
int32 zSaveLoad_DoAutoSave();
void zSaveLoadAutoSaveUpdate();
void zSaveLoadPreAutoSave(uint8 onOff);
int32 zSaveLoad_GameSelect(int32 mode);
void zSaveLoad_BuildName(int8* name_txt, uint32 max_len, int32 idx);
void BuildIt(int8* build_txt, int32 i);
int32 zSaveLoad_CardPick(int32 mode);
int32 zSaveLoad_CardCheckSlotOverwrite(int32 cardNumber, int32 gameNumber);
int32 zSaveLoad_CardCheckFormatted(int32 cardNumber, int32 mode);
int32 zSaveLoad_CardCheckSlotEmpty_hasGame(int32 num, int32 game);
int32 zSaveLoad_CardCheckSlotEmpty_hasGame_doCheck(st_XSAVEGAME_DATA* xsgdata, int32 num, int32 game);
int32 zSaveLoad_CardCheckGamesSingle(int32 num);
int32 zSaveLoad_CardCheckSpaceSingle(int32 num);
int32 zSaveLoad_CardCheckSpaceSingle_doCheck(st_XSAVEGAME_DATA* xsgdata, int32 num);
int32 zSaveLoad_CardCheckFormattedSingle(int32 num);
int32 zSaveLoad_CardCheckSingle(int32 num);
int32 zSaveLoad_CardPrompt(int32 mode);
int32 format(int32 num, int32 mode);
void zSaveLoad_Tick(uint8 padUpdate);

// zSaveLoad_TriggerAutoSave__Fv
// Start address: 0x2f7030
void zSaveLoad_TriggerAutoSave()
{
	int32 result;
	// Line 4840, Address: 0x2f7030, Func Offset: 0
	// Line 4842, Address: 0x2f703c, Func Offset: 0xc
	// Line 4847, Address: 0x2f7048, Func Offset: 0x18
	// Line 4849, Address: 0x2f7054, Func Offset: 0x24
	// Line 4851, Address: 0x2f7060, Func Offset: 0x30
	// Line 4855, Address: 0x2f7070, Func Offset: 0x40
	// Line 4869, Address: 0x2f7078, Func Offset: 0x48
	// Line 4871, Address: 0x2f70ec, Func Offset: 0xbc
	// Line 4873, Address: 0x2f70f4, Func Offset: 0xc4
	// Line 4877, Address: 0x2f7110, Func Offset: 0xe0
	// Line 4857, Address: 0x2f7124, Func Offset: 0xf4
	// Line 4877, Address: 0x2f7128, Func Offset: 0xf8
	// Line 4857, Address: 0x2f713c, Func Offset: 0x10c
	// Line 4877, Address: 0x2f7140, Func Offset: 0x110
	// Line 4857, Address: 0x2f7150, Func Offset: 0x120
	// Line 4877, Address: 0x2f7158, Func Offset: 0x128
	// Line 4857, Address: 0x2f716c, Func Offset: 0x13c
	// Line 4877, Address: 0x2f7170, Func Offset: 0x140
	// Line 4857, Address: 0x2f7180, Func Offset: 0x150
	// Line 4877, Address: 0x2f7184, Func Offset: 0x154
	// Line 4861, Address: 0x2f718c, Func Offset: 0x15c
	// Line 4877, Address: 0x2f71a0, Func Offset: 0x170
	// Line 4857, Address: 0x2f71b8, Func Offset: 0x188
	// Line 4869, Address: 0x2f71c0, Func Offset: 0x190
	// Line 4877, Address: 0x2f71c8, Func Offset: 0x198
	// Func End, Address: 0x2f71d8, Func Offset: 0x1a8
}

// xSGT_LoadPrefsCB__FPvP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTUii
// Start address: 0x2f71e0
int32 xSGT_LoadPrefsCB(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt)
{
	float32 fMusicVol;
	float32 f3DVol;
	// Line 4771, Address: 0x2f71e0, Func Offset: 0
	// Line 4796, Address: 0x2f71e4, Func Offset: 0x4
	// Line 4771, Address: 0x2f71e8, Func Offset: 0x8
	// Line 4796, Address: 0x2f71fc, Func Offset: 0x1c
	// Line 4801, Address: 0x2f7210, Func Offset: 0x30
	// Line 4804, Address: 0x2f7224, Func Offset: 0x44
	// Line 4807, Address: 0x2f7238, Func Offset: 0x58
	// Line 4810, Address: 0x2f7250, Func Offset: 0x70
	// Line 4815, Address: 0x2f7268, Func Offset: 0x88
	// Line 4816, Address: 0x2f7274, Func Offset: 0x94
	// Line 4818, Address: 0x2f7280, Func Offset: 0xa0
	// Line 4819, Address: 0x2f7290, Func Offset: 0xb0
	// Line 4821, Address: 0x2f72a8, Func Offset: 0xc8
	// Line 4825, Address: 0x2f72b4, Func Offset: 0xd4
	// Line 4824, Address: 0x2f72b8, Func Offset: 0xd8
	// Line 4825, Address: 0x2f72bc, Func Offset: 0xdc
	// Func End, Address: 0x2f72cc, Func Offset: 0xec
}

// xSGT_LoadLoadCB__FPvP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTUii
// Start address: 0x2f72d0
int32 xSGT_LoadLoadCB(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt)
{
	int8 bigbuf[32];
	int32 compdiff;
	// Line 4739, Address: 0x2f72d0, Func Offset: 0
	// Line 4740, Address: 0x2f72d4, Func Offset: 0x4
	// Line 4739, Address: 0x2f72d8, Func Offset: 0x8
	// Line 4740, Address: 0x2f72dc, Func Offset: 0xc
	// Line 4739, Address: 0x2f72e0, Func Offset: 0x10
	// Line 4740, Address: 0x2f72f0, Func Offset: 0x20
	// Line 4751, Address: 0x2f7314, Func Offset: 0x44
	// Line 4744, Address: 0x2f7318, Func Offset: 0x48
	// Line 4751, Address: 0x2f731c, Func Offset: 0x4c
	// Line 4755, Address: 0x2f733c, Func Offset: 0x6c
	// Line 4756, Address: 0x2f735c, Func Offset: 0x8c
	// Line 4762, Address: 0x2f7360, Func Offset: 0x90
	// Line 4766, Address: 0x2f7368, Func Offset: 0x98
	// Line 4767, Address: 0x2f738c, Func Offset: 0xbc
	// Func End, Address: 0x2f73a4, Func Offset: 0xd4
}

// xSGT_SaveProcPrefsCB__FPvP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXT
// Start address: 0x2f73b0
int32 xSGT_SaveProcPrefsCB(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt)
{
	int32 amy;
	int32 sum;
	float32 fMusicVolume;
	float32 f3DVolume;
	// Line 4706, Address: 0x2f73b0, Func Offset: 0
	// Line 4711, Address: 0x2f73b4, Func Offset: 0x4
	// Line 4706, Address: 0x2f73b8, Func Offset: 0x8
	// Line 4709, Address: 0x2f73c4, Func Offset: 0x14
	// Line 4706, Address: 0x2f73c8, Func Offset: 0x18
	// Line 4711, Address: 0x2f73d0, Func Offset: 0x20
	// Line 4712, Address: 0x2f73dc, Func Offset: 0x2c
	// Line 4715, Address: 0x2f73e4, Func Offset: 0x34
	// Line 4712, Address: 0x2f73ec, Func Offset: 0x3c
	// Line 4715, Address: 0x2f73f0, Func Offset: 0x40
	// Line 4716, Address: 0x2f7400, Func Offset: 0x50
	// Line 4718, Address: 0x2f7404, Func Offset: 0x54
	// Line 4719, Address: 0x2f7418, Func Offset: 0x68
	// Line 4721, Address: 0x2f741c, Func Offset: 0x6c
	// Line 4724, Address: 0x2f7430, Func Offset: 0x80
	// Line 4722, Address: 0x2f7434, Func Offset: 0x84
	// Line 4724, Address: 0x2f7438, Func Offset: 0x88
	// Line 4727, Address: 0x2f744c, Func Offset: 0x9c
	// Line 4725, Address: 0x2f7450, Func Offset: 0xa0
	// Line 4727, Address: 0x2f7454, Func Offset: 0xa4
	// Line 4728, Address: 0x2f7468, Func Offset: 0xb8
	// Line 4733, Address: 0x2f746c, Func Offset: 0xbc
	// Line 4732, Address: 0x2f7474, Func Offset: 0xc4
	// Line 4733, Address: 0x2f7478, Func Offset: 0xc8
	// Func End, Address: 0x2f7488, Func Offset: 0xd8
}

// xSGT_SaveInfoPrefsCB__FPvP17st_XSAVEGAME_DATAPiPi
// Start address: 0x2f7490
int32 xSGT_SaveInfoPrefsCB(int32* need, int32* most)
{
	// Line 4697, Address: 0x2f7490, Func Offset: 0
	// Line 4698, Address: 0x2f7498, Func Offset: 0x8
	// Line 4702, Address: 0x2f749c, Func Offset: 0xc
	// Line 4698, Address: 0x2f74a0, Func Offset: 0x10
	// Line 4703, Address: 0x2f74a4, Func Offset: 0x14
	// Func End, Address: 0x2f74ac, Func Offset: 0x1c
}

// xSGT_SaveProcCB__FPvP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXT
// Start address: 0x2f74b0
int32 xSGT_SaveProcCB(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt)
{
	int32 amy;
	int32 sum;
	// Line 4667, Address: 0x2f74b0, Func Offset: 0
	// Line 4674, Address: 0x2f74b4, Func Offset: 0x4
	// Line 4667, Address: 0x2f74b8, Func Offset: 0x8
	// Line 4674, Address: 0x2f74d0, Func Offset: 0x20
	// Line 4676, Address: 0x2f74f4, Func Offset: 0x44
	// Line 4679, Address: 0x2f751c, Func Offset: 0x6c
	// Line 4683, Address: 0x2f7520, Func Offset: 0x70
	// Line 4682, Address: 0x2f7528, Func Offset: 0x78
	// Line 4683, Address: 0x2f752c, Func Offset: 0x7c
	// Func End, Address: 0x2f753c, Func Offset: 0x8c
}

// xSGT_SaveInfoCB__FPvP17st_XSAVEGAME_DATAPiPi
// Start address: 0x2f7540
int32 xSGT_SaveInfoCB(int32* need, int32* most)
{
	int32 slen;
	// Line 4644, Address: 0x2f7540, Func Offset: 0
	// Line 4656, Address: 0x2f7544, Func Offset: 0x4
	// Line 4644, Address: 0x2f7548, Func Offset: 0x8
	// Line 4656, Address: 0x2f754c, Func Offset: 0xc
	// Line 4644, Address: 0x2f7550, Func Offset: 0x10
	// Line 4656, Address: 0x2f755c, Func Offset: 0x1c
	// Line 4657, Address: 0x2f7564, Func Offset: 0x24
	// Line 4658, Address: 0x2f7568, Func Offset: 0x28
	// Line 4662, Address: 0x2f756c, Func Offset: 0x2c
	// Line 4658, Address: 0x2f7570, Func Offset: 0x30
	// Line 4663, Address: 0x2f7578, Func Offset: 0x38
	// Func End, Address: 0x2f758c, Func Offset: 0x4c
}

// zSaveLoad_DispatchCB__FUiPCf
// Start address: 0x2f7590
void zSaveLoad_DispatchCB(uint32 dispatchEvent, float32* toParam)
{
	st_XSAVEGAME_DATA* inst;
	// Line 4575, Address: 0x2f7590, Func Offset: 0
	// Line 4577, Address: 0x2f7594, Func Offset: 0x4
	// Line 4575, Address: 0x2f7598, Func Offset: 0x8
	// Line 4577, Address: 0x2f759c, Func Offset: 0xc
	// Line 4583, Address: 0x2f761c, Func Offset: 0x8c
	// Line 4588, Address: 0x2f7624, Func Offset: 0x94
	// Line 4593, Address: 0x2f762c, Func Offset: 0x9c
	// Line 4596, Address: 0x2f7634, Func Offset: 0xa4
	// Line 4598, Address: 0x2f7638, Func Offset: 0xa8
	// Line 4596, Address: 0x2f7640, Func Offset: 0xb0
	// Line 4598, Address: 0x2f7648, Func Offset: 0xb8
	// Line 4599, Address: 0x2f7664, Func Offset: 0xd4
	// Line 4598, Address: 0x2f7668, Func Offset: 0xd8
	// Line 4599, Address: 0x2f766c, Func Offset: 0xdc
	// Line 4600, Address: 0x2f7674, Func Offset: 0xe4
	// Line 4601, Address: 0x2f767c, Func Offset: 0xec
	// Line 4604, Address: 0x2f7684, Func Offset: 0xf4
	// Line 4606, Address: 0x2f7690, Func Offset: 0x100
	// Line 4609, Address: 0x2f7698, Func Offset: 0x108
	// Line 4611, Address: 0x2f769c, Func Offset: 0x10c
	// Line 4615, Address: 0x2f76a4, Func Offset: 0x114
	// Line 4618, Address: 0x2f76ac, Func Offset: 0x11c
	// Line 4621, Address: 0x2f76b4, Func Offset: 0x124
	// Line 4623, Address: 0x2f76bc, Func Offset: 0x12c
	// Line 4637, Address: 0x2f76c0, Func Offset: 0x130
	// Func End, Address: 0x2f76d0, Func Offset: 0x140
}

// zSaveLoad_SaveLoop__Fv
// Start address: 0x2f76d0
uint32 zSaveLoad_SaveLoop()
{
	int32 result;
	int32 tmp;
	int32 tmp;
	// Line 4243, Address: 0x2f76d0, Func Offset: 0
	// Line 4244, Address: 0x2f76e0, Func Offset: 0x10
	// Line 4251, Address: 0x2f770c, Func Offset: 0x3c
	// Line 4244, Address: 0x2f7710, Func Offset: 0x40
	// Line 4252, Address: 0x2f7718, Func Offset: 0x48
	// Line 4244, Address: 0x2f771c, Func Offset: 0x4c
	// Line 4255, Address: 0x2f7724, Func Offset: 0x54
	// Line 4244, Address: 0x2f7728, Func Offset: 0x58
	// Line 4263, Address: 0x2f778c, Func Offset: 0xbc
	// Line 4266, Address: 0x2f77d4, Func Offset: 0x104
	// Line 4304, Address: 0x2f77d8, Func Offset: 0x108
	// Line 4309, Address: 0x2f77e0, Func Offset: 0x110
	// Line 4310, Address: 0x2f77e8, Func Offset: 0x118
	// Line 4314, Address: 0x2f7818, Func Offset: 0x148
	// Line 4318, Address: 0x2f7820, Func Offset: 0x150
	// Line 4329, Address: 0x2f7838, Func Offset: 0x168
	// Line 4332, Address: 0x2f783c, Func Offset: 0x16c
	// Line 4328, Address: 0x2f7840, Func Offset: 0x170
	// Line 4332, Address: 0x2f7844, Func Offset: 0x174
	// Line 4333, Address: 0x2f78c0, Func Offset: 0x1f0
	// Line 4348, Address: 0x2f78e0, Func Offset: 0x210
	// Line 4354, Address: 0x2f78e8, Func Offset: 0x218
	// Line 4353, Address: 0x2f78ec, Func Offset: 0x21c
	// Line 4372, Address: 0x2f78f0, Func Offset: 0x220
	// Line 4373, Address: 0x2f7970, Func Offset: 0x2a0
	// Line 4377, Address: 0x2f7990, Func Offset: 0x2c0
	// Line 4382, Address: 0x2f7998, Func Offset: 0x2c8
	// Line 4383, Address: 0x2f799c, Func Offset: 0x2cc
	// Line 4384, Address: 0x2f79a0, Func Offset: 0x2d0
	// Line 4388, Address: 0x2f79a8, Func Offset: 0x2d8
	// Line 4389, Address: 0x2f79ac, Func Offset: 0x2dc
	// Line 4390, Address: 0x2f79b4, Func Offset: 0x2e4
	// Line 4396, Address: 0x2f79b8, Func Offset: 0x2e8
	// Line 4400, Address: 0x2f79c0, Func Offset: 0x2f0
	// Line 4404, Address: 0x2f79c4, Func Offset: 0x2f4
	// Line 4405, Address: 0x2f79cc, Func Offset: 0x2fc
	// Line 4410, Address: 0x2f7a1c, Func Offset: 0x34c
	// Line 4415, Address: 0x2f7a20, Func Offset: 0x350
	// Line 4421, Address: 0x2f7a24, Func Offset: 0x354
	// Line 4422, Address: 0x2f7a2c, Func Offset: 0x35c
	// Line 4423, Address: 0x2f7a30, Func Offset: 0x360
	// Line 4424, Address: 0x2f7a34, Func Offset: 0x364
	// Line 4425, Address: 0x2f7a3c, Func Offset: 0x36c
	// Line 4426, Address: 0x2f7a40, Func Offset: 0x370
	// Line 4427, Address: 0x2f7b90, Func Offset: 0x4c0
	// Line 4428, Address: 0x2f7b94, Func Offset: 0x4c4
	// Line 4433, Address: 0x2f7b9c, Func Offset: 0x4cc
	// Line 4436, Address: 0x2f7ba0, Func Offset: 0x4d0
	// Line 4437, Address: 0x2f7ba4, Func Offset: 0x4d4
	// Line 4445, Address: 0x2f7ba8, Func Offset: 0x4d8
	// Line 4448, Address: 0x2f7bb0, Func Offset: 0x4e0
	// Line 4449, Address: 0x2f7bb8, Func Offset: 0x4e8
	// Line 4451, Address: 0x2f7bc0, Func Offset: 0x4f0
	// Line 4452, Address: 0x2f7bc4, Func Offset: 0x4f4
	// Line 4454, Address: 0x2f7bcc, Func Offset: 0x4fc
	// Line 4456, Address: 0x2f7bd0, Func Offset: 0x500
	// Line 4457, Address: 0x2f7bd8, Func Offset: 0x508
	// Line 4527, Address: 0x2f7be4, Func Offset: 0x514
	// Line 4530, Address: 0x2f7c08, Func Offset: 0x538
	// Line 4531, Address: 0x2f7d58, Func Offset: 0x688
	// Line 4534, Address: 0x2f7d60, Func Offset: 0x690
	// Line 4535, Address: 0x2f7eb0, Func Offset: 0x7e0
	// Line 4539, Address: 0x2f7eb8, Func Offset: 0x7e8
	// Line 4540, Address: 0x2f81e0, Func Offset: 0xb10
	// Line 4543, Address: 0x2f81e8, Func Offset: 0xb18
	// Line 4547, Address: 0x2f8338, Func Offset: 0xc68
	// Line 4548, Address: 0x2f8348, Func Offset: 0xc78
	// Line 4550, Address: 0x2f8350, Func Offset: 0xc80
	// Line 4559, Address: 0x2f8358, Func Offset: 0xc88
	// Line 4570, Address: 0x2f8368, Func Offset: 0xc98
	// Line 4332, Address: 0x2f8374, Func Offset: 0xca4
	// Line 4372, Address: 0x2f8380, Func Offset: 0xcb0
	// Line 4426, Address: 0x2f8388, Func Offset: 0xcb8
	// Line 4570, Address: 0x2f8398, Func Offset: 0xcc8
	// Line 4469, Address: 0x2f83a8, Func Offset: 0xcd8
	// Line 4470, Address: 0x2f83ac, Func Offset: 0xcdc
	// Line 4570, Address: 0x2f83b0, Func Offset: 0xce0
	// Line 4504, Address: 0x2f83c8, Func Offset: 0xcf8
	// Line 4570, Address: 0x2f83cc, Func Offset: 0xcfc
	// Line 4504, Address: 0x2f83e0, Func Offset: 0xd10
	// Line 4570, Address: 0x2f83e4, Func Offset: 0xd14
	// Line 4504, Address: 0x2f83f4, Func Offset: 0xd24
	// Line 4570, Address: 0x2f8400, Func Offset: 0xd30
	// Line 4504, Address: 0x2f8414, Func Offset: 0xd44
	// Line 4570, Address: 0x2f8418, Func Offset: 0xd48
	// Line 4504, Address: 0x2f8428, Func Offset: 0xd58
	// Line 4505, Address: 0x2f8430, Func Offset: 0xd60
	// Line 4570, Address: 0x2f8448, Func Offset: 0xd78
	// Line 4508, Address: 0x2f8454, Func Offset: 0xd84
	// Line 4570, Address: 0x2f8458, Func Offset: 0xd88
	// Line 4508, Address: 0x2f845c, Func Offset: 0xd8c
	// Line 4570, Address: 0x2f8460, Func Offset: 0xd90
	// Line 4511, Address: 0x2f846c, Func Offset: 0xd9c
	// Line 4570, Address: 0x2f8470, Func Offset: 0xda0
	// Line 4517, Address: 0x2f8478, Func Offset: 0xda8
	// Line 4570, Address: 0x2f847c, Func Offset: 0xdac
	// Line 4524, Address: 0x2f848c, Func Offset: 0xdbc
	// Line 4504, Address: 0x2f8498, Func Offset: 0xdc8
	// Line 4570, Address: 0x2f84a0, Func Offset: 0xdd0
	// Line 4510, Address: 0x2f84b0, Func Offset: 0xde0
	// Line 4570, Address: 0x2f84b4, Func Offset: 0xde4
	// Line 4510, Address: 0x2f84bc, Func Offset: 0xdec
	// Line 4570, Address: 0x2f84cc, Func Offset: 0xdfc
	// Line 4510, Address: 0x2f84d4, Func Offset: 0xe04
	// Line 4570, Address: 0x2f84d8, Func Offset: 0xe08
	// Line 4510, Address: 0x2f84e8, Func Offset: 0xe18
	// Line 4570, Address: 0x2f84ec, Func Offset: 0xe1c
	// Line 4510, Address: 0x2f84f4, Func Offset: 0xe24
	// Line 4570, Address: 0x2f8504, Func Offset: 0xe34
	// Line 4530, Address: 0x2f8518, Func Offset: 0xe48
	// Line 4534, Address: 0x2f8528, Func Offset: 0xe58
	// Line 4539, Address: 0x2f8538, Func Offset: 0xe68
	// Line 4570, Address: 0x2f8550, Func Offset: 0xe80
	// Line 4539, Address: 0x2f8554, Func Offset: 0xe84
	// Line 4570, Address: 0x2f8558, Func Offset: 0xe88
	// Line 4539, Address: 0x2f8568, Func Offset: 0xe98
	// Line 4570, Address: 0x2f856c, Func Offset: 0xe9c
	// Line 4539, Address: 0x2f8578, Func Offset: 0xea8
	// Line 4543, Address: 0x2f8588, Func Offset: 0xeb8
	// Line 4571, Address: 0x2f8598, Func Offset: 0xec8
	// Func End, Address: 0x2f85ac, Func Offset: 0xedc
}

// zSaveLoad_LoadLoop__Fv
// Start address: 0x2f85b0
uint32 zSaveLoad_LoadLoop()
{
	int32 result;
	uint8 hasCard;
	int32 tmp;
	int32 tmp;
	int32 result;
	// Line 4003, Address: 0x2f85b0, Func Offset: 0
	// Line 4006, Address: 0x2f85c4, Func Offset: 0x14
	// Line 4018, Address: 0x2f85f0, Func Offset: 0x40
	// Line 4006, Address: 0x2f85f4, Func Offset: 0x44
	// Line 4013, Address: 0x2f8668, Func Offset: 0xb8
	// Line 4014, Address: 0x2f8670, Func Offset: 0xc0
	// Line 4022, Address: 0x2f8674, Func Offset: 0xc4
	// Line 4051, Address: 0x2f86c0, Func Offset: 0x110
	// Line 4055, Address: 0x2f86f0, Func Offset: 0x140
	// Line 4057, Address: 0x2f877c, Func Offset: 0x1cc
	// Line 4060, Address: 0x2f8784, Func Offset: 0x1d4
	// Line 4065, Address: 0x2f878c, Func Offset: 0x1dc
	// Line 4066, Address: 0x2f8794, Func Offset: 0x1e4
	// Line 4070, Address: 0x2f87c4, Func Offset: 0x214
	// Line 4072, Address: 0x2f87cc, Func Offset: 0x21c
	// Line 4074, Address: 0x2f87d0, Func Offset: 0x220
	// Line 4082, Address: 0x2f87d8, Func Offset: 0x228
	// Line 4086, Address: 0x2f87e0, Func Offset: 0x230
	// Line 4087, Address: 0x2f87e8, Func Offset: 0x238
	// Line 4097, Address: 0x2f8810, Func Offset: 0x260
	// Line 4101, Address: 0x2f8814, Func Offset: 0x264
	// Line 4103, Address: 0x2f881c, Func Offset: 0x26c
	// Line 4104, Address: 0x2f8820, Func Offset: 0x270
	// Line 4106, Address: 0x2f8828, Func Offset: 0x278
	// Line 4107, Address: 0x2f8964, Func Offset: 0x3b4
	// Line 4117, Address: 0x2f8968, Func Offset: 0x3b8
	// Line 4121, Address: 0x2f8970, Func Offset: 0x3c0
	// Line 4122, Address: 0x2f8978, Func Offset: 0x3c8
	// Line 4129, Address: 0x2f8980, Func Offset: 0x3d0
	// Line 4131, Address: 0x2f89f4, Func Offset: 0x444
	// Line 4133, Address: 0x2f8a14, Func Offset: 0x464
	// Line 4135, Address: 0x2f8a84, Func Offset: 0x4d4
	// Line 4139, Address: 0x2f8aa4, Func Offset: 0x4f4
	// Line 4141, Address: 0x2f8aa8, Func Offset: 0x4f8
	// Line 4146, Address: 0x2f8ab0, Func Offset: 0x500
	// Line 4147, Address: 0x2f8ab8, Func Offset: 0x508
	// Line 4153, Address: 0x2f8ae0, Func Offset: 0x530
	// Line 4154, Address: 0x2f8b4c, Func Offset: 0x59c
	// Line 4155, Address: 0x2f8b6c, Func Offset: 0x5bc
	// Line 4171, Address: 0x2f8bdc, Func Offset: 0x62c
	// Line 4172, Address: 0x2f8d1c, Func Offset: 0x76c
	// Line 4176, Address: 0x2f8d20, Func Offset: 0x770
	// Line 4179, Address: 0x2f8d28, Func Offset: 0x778
	// Line 4180, Address: 0x2f8e64, Func Offset: 0x8b4
	// Line 4184, Address: 0x2f8e68, Func Offset: 0x8b8
	// Line 4186, Address: 0x2f8e70, Func Offset: 0x8c0
	// Line 4187, Address: 0x2f8fac, Func Offset: 0x9fc
	// Line 4201, Address: 0x2f8fb4, Func Offset: 0xa04
	// Line 4211, Address: 0x2f8fc4, Func Offset: 0xa14
	// Line 4045, Address: 0x2f9004, Func Offset: 0xa54
	// Line 4211, Address: 0x2f9008, Func Offset: 0xa58
	// Line 4047, Address: 0x2f9018, Func Offset: 0xa68
	// Line 4048, Address: 0x2f901c, Func Offset: 0xa6c
	// Line 4049, Address: 0x2f9020, Func Offset: 0xa70
	// Line 4055, Address: 0x2f9028, Func Offset: 0xa78
	// Line 4106, Address: 0x2f9030, Func Offset: 0xa80
	// Line 4129, Address: 0x2f9040, Func Offset: 0xa90
	// Line 4133, Address: 0x2f9048, Func Offset: 0xa98
	// Line 4153, Address: 0x2f9050, Func Offset: 0xaa0
	// Line 4159, Address: 0x2f9058, Func Offset: 0xaa8
	// Line 4211, Address: 0x2f905c, Func Offset: 0xaac
	// Line 4161, Address: 0x2f906c, Func Offset: 0xabc
	// Line 4167, Address: 0x2f9070, Func Offset: 0xac0
	// Line 4211, Address: 0x2f9074, Func Offset: 0xac4
	// Line 4168, Address: 0x2f907c, Func Offset: 0xacc
	// Line 4171, Address: 0x2f9084, Func Offset: 0xad4
	// Line 4179, Address: 0x2f9094, Func Offset: 0xae4
	// Line 4186, Address: 0x2f90a4, Func Offset: 0xaf4
	// Line 4222, Address: 0x2f90b4, Func Offset: 0xb04
	// Func End, Address: 0x2f90cc, Func Offset: 0xb1c
}

// zSaveLoad_LoadGame__Fv
// Start address: 0x2f90d0
int32 zSaveLoad_LoadGame()
{
	int32 success;
	int32 teststat;
	int32 rc;
	en_XSGASYNC_STATUS asstat;
	en_XSG_WHYFAIL whyFail;
	XSGAutoData* asg;
	int32 use_game;
	// Line 3861, Address: 0x2f90d0, Func Offset: 0
	// Line 3867, Address: 0x2f90d4, Func Offset: 0x4
	// Line 3861, Address: 0x2f90d8, Func Offset: 0x8
	// Line 3862, Address: 0x2f90e8, Func Offset: 0x18
	// Line 3861, Address: 0x2f90ec, Func Offset: 0x1c
	// Line 3863, Address: 0x2f90f0, Func Offset: 0x20
	// Line 3861, Address: 0x2f90f4, Func Offset: 0x24
	// Line 3867, Address: 0x2f90fc, Func Offset: 0x2c
	// Line 3870, Address: 0x2f916c, Func Offset: 0x9c
	// Line 3868, Address: 0x2f917c, Func Offset: 0xac
	// Line 3870, Address: 0x2f9180, Func Offset: 0xb0
	// Line 3868, Address: 0x2f9188, Func Offset: 0xb8
	// Line 3870, Address: 0x2f918c, Func Offset: 0xbc
	// Line 3873, Address: 0x2f923c, Func Offset: 0x16c
	// Line 3876, Address: 0x2f9248, Func Offset: 0x178
	// Line 3878, Address: 0x2f9254, Func Offset: 0x184
	// Line 3884, Address: 0x2f925c, Func Offset: 0x18c
	// Line 3887, Address: 0x2f9278, Func Offset: 0x1a8
	// Line 3892, Address: 0x2f9294, Func Offset: 0x1c4
	// Line 3895, Address: 0x2f92a0, Func Offset: 0x1d0
	// Line 3897, Address: 0x2f92a8, Func Offset: 0x1d8
	// Line 3903, Address: 0x2f92b4, Func Offset: 0x1e4
	// Line 3938, Address: 0x2f92bc, Func Offset: 0x1ec
	// Line 3957, Address: 0x2f92c4, Func Offset: 0x1f4
	// Line 3959, Address: 0x2f9400, Func Offset: 0x330
	// Line 3961, Address: 0x2f940c, Func Offset: 0x33c
	// Line 3963, Address: 0x2f9414, Func Offset: 0x344
	// Line 3966, Address: 0x2f9424, Func Offset: 0x354
	// Line 3965, Address: 0x2f9428, Func Offset: 0x358
	// Line 3966, Address: 0x2f942c, Func Offset: 0x35c
	// Line 3970, Address: 0x2f9434, Func Offset: 0x364
	// Line 3976, Address: 0x2f9448, Func Offset: 0x378
	// Line 3977, Address: 0x2f9450, Func Offset: 0x380
	// Line 3870, Address: 0x2f9458, Func Offset: 0x388
	// Line 3977, Address: 0x2f9460, Func Offset: 0x390
	// Line 3905, Address: 0x2f9480, Func Offset: 0x3b0
	// Line 3977, Address: 0x2f9484, Func Offset: 0x3b4
	// Line 3912, Address: 0x2f9494, Func Offset: 0x3c4
	// Line 3977, Address: 0x2f949c, Func Offset: 0x3cc
	// Line 3914, Address: 0x2f94a4, Func Offset: 0x3d4
	// Line 3977, Address: 0x2f94a8, Func Offset: 0x3d8
	// Line 3914, Address: 0x2f94c0, Func Offset: 0x3f0
	// Line 3924, Address: 0x2f94c8, Func Offset: 0x3f8
	// Line 3928, Address: 0x2f94d0, Func Offset: 0x400
	// Line 3927, Address: 0x2f94d4, Func Offset: 0x404
	// Line 3977, Address: 0x2f94d8, Func Offset: 0x408
	// Line 3908, Address: 0x2f94e4, Func Offset: 0x414
	// Line 3977, Address: 0x2f94e8, Func Offset: 0x418
	// Line 3944, Address: 0x2f951c, Func Offset: 0x44c
	// Line 3943, Address: 0x2f9520, Func Offset: 0x450
	// Line 3945, Address: 0x2f9524, Func Offset: 0x454
	// Line 3957, Address: 0x2f952c, Func Offset: 0x45c
	// Line 3981, Address: 0x2f953c, Func Offset: 0x46c
	// Line 3982, Address: 0x2f9548, Func Offset: 0x478
	// Line 3985, Address: 0x2f956c, Func Offset: 0x49c
	// Line 3998, Address: 0x2f9574, Func Offset: 0x4a4
	// Func End, Address: 0x2f9598, Func Offset: 0x4c8
}

// zSaveLoad_SaveGame__Fv
// Start address: 0x2f95a0
int32 zSaveLoad_SaveGame()
{
	int32 success;
	int32 teststat;
	int32 rc;
	en_XSGASYNC_STATUS asstat;
	int32 use_game;
	int32 write_icon;
	int8* damaged_save_name;
	uint32 game;
	int8 label[64];
	en_XSG_WHYFAIL whyFail;
	XSGAutoData* asg;
	// Line 3634, Address: 0x2f95a0, Func Offset: 0
	// Line 3644, Address: 0x2f95a4, Func Offset: 0x4
	// Line 3634, Address: 0x2f95a8, Func Offset: 0x8
	// Line 3636, Address: 0x2f95c4, Func Offset: 0x24
	// Line 3634, Address: 0x2f95c8, Func Offset: 0x28
	// Line 3638, Address: 0x2f95cc, Func Offset: 0x2c
	// Line 3634, Address: 0x2f95d0, Func Offset: 0x30
	// Line 3644, Address: 0x2f95d8, Func Offset: 0x38
	// Line 3648, Address: 0x2f9648, Func Offset: 0xa8
	// Line 3645, Address: 0x2f9658, Func Offset: 0xb8
	// Line 3646, Address: 0x2f965c, Func Offset: 0xbc
	// Line 3648, Address: 0x2f9660, Func Offset: 0xc0
	// Line 3645, Address: 0x2f9668, Func Offset: 0xc8
	// Line 3648, Address: 0x2f966c, Func Offset: 0xcc
	// Line 3654, Address: 0x2f9718, Func Offset: 0x178
	// Line 3648, Address: 0x2f971c, Func Offset: 0x17c
	// Line 3654, Address: 0x2f9720, Func Offset: 0x180
	// Line 3655, Address: 0x2f9738, Func Offset: 0x198
	// Line 3654, Address: 0x2f973c, Func Offset: 0x19c
	// Line 3655, Address: 0x2f9740, Func Offset: 0x1a0
	// Line 3657, Address: 0x2f974c, Func Offset: 0x1ac
	// Line 3662, Address: 0x2f9774, Func Offset: 0x1d4
	// Line 3664, Address: 0x2f977c, Func Offset: 0x1dc
	// Line 3672, Address: 0x2f97b0, Func Offset: 0x210
	// Line 3674, Address: 0x2f97b4, Func Offset: 0x214
	// Line 3672, Address: 0x2f97b8, Func Offset: 0x218
	// Line 3674, Address: 0x2f97bc, Func Offset: 0x21c
	// Line 3676, Address: 0x2f97c8, Func Offset: 0x228
	// Line 3680, Address: 0x2f97d0, Func Offset: 0x230
	// Line 3683, Address: 0x2f97e4, Func Offset: 0x244
	// Line 3685, Address: 0x2f9920, Func Offset: 0x380
	// Line 3648, Address: 0x2f9928, Func Offset: 0x388
	// Line 3685, Address: 0x2f9930, Func Offset: 0x390
	// Line 3683, Address: 0x2f9940, Func Offset: 0x3a0
	// Line 3692, Address: 0x2f9950, Func Offset: 0x3b0
	// Line 3694, Address: 0x2f9958, Func Offset: 0x3b8
	// Line 3696, Address: 0x2f9964, Func Offset: 0x3c4
	// Line 3701, Address: 0x2f996c, Func Offset: 0x3cc
	// Line 3703, Address: 0x2f9978, Func Offset: 0x3d8
	// Line 3707, Address: 0x2f999c, Func Offset: 0x3fc
	// Line 3713, Address: 0x2f99c0, Func Offset: 0x420
	// Line 3717, Address: 0x2f99cc, Func Offset: 0x42c
	// Line 3719, Address: 0x2f9a0c, Func Offset: 0x46c
	// Line 3722, Address: 0x2f9a38, Func Offset: 0x498
	// Line 3735, Address: 0x2f9a44, Func Offset: 0x4a4
	// Line 3737, Address: 0x2f9a84, Func Offset: 0x4e4
	// Line 3744, Address: 0x2f9a90, Func Offset: 0x4f0
	// Line 3791, Address: 0x2f9a98, Func Offset: 0x4f8
	// Line 3792, Address: 0x2f9aa0, Func Offset: 0x500
	// Line 3793, Address: 0x2f9aa8, Func Offset: 0x508
	// Line 3799, Address: 0x2f9ab4, Func Offset: 0x514
	// Line 3802, Address: 0x2f9ac8, Func Offset: 0x528
	// Line 3804, Address: 0x2f9c00, Func Offset: 0x660
	// Line 3811, Address: 0x2f9c08, Func Offset: 0x668
	// Line 3813, Address: 0x2f9d40, Func Offset: 0x7a0
	// Line 3815, Address: 0x2f9d4c, Func Offset: 0x7ac
	// Line 3816, Address: 0x2f9d58, Func Offset: 0x7b8
	// Line 3818, Address: 0x2f9d6c, Func Offset: 0x7cc
	// Line 3821, Address: 0x2f9d78, Func Offset: 0x7d8
	// Line 3827, Address: 0x2f9d8c, Func Offset: 0x7ec
	// Line 3828, Address: 0x2f9d94, Func Offset: 0x7f4
	// Line 3719, Address: 0x2f9dc4, Func Offset: 0x824
	// Line 3828, Address: 0x2f9dcc, Func Offset: 0x82c
	// Line 3746, Address: 0x2f9dd4, Func Offset: 0x834
	// Line 3828, Address: 0x2f9dd8, Func Offset: 0x838
	// Line 3749, Address: 0x2f9de0, Func Offset: 0x840
	// Line 3828, Address: 0x2f9de8, Func Offset: 0x848
	// Line 3749, Address: 0x2f9df4, Func Offset: 0x854
	// Line 3754, Address: 0x2f9df8, Func Offset: 0x858
	// Line 3828, Address: 0x2f9dfc, Func Offset: 0x85c
	// Line 3758, Address: 0x2f9e04, Func Offset: 0x864
	// Line 3828, Address: 0x2f9e08, Func Offset: 0x868
	// Line 3763, Address: 0x2f9e18, Func Offset: 0x878
	// Line 3828, Address: 0x2f9e20, Func Offset: 0x880
	// Line 3766, Address: 0x2f9e28, Func Offset: 0x888
	// Line 3828, Address: 0x2f9e2c, Func Offset: 0x88c
	// Line 3766, Address: 0x2f9e34, Func Offset: 0x894
	// Line 3828, Address: 0x2f9e38, Func Offset: 0x898
	// Line 3766, Address: 0x2f9e48, Func Offset: 0x8a8
	// Line 3777, Address: 0x2f9e50, Func Offset: 0x8b0
	// Line 3802, Address: 0x2f9e60, Func Offset: 0x8c0
	// Line 3811, Address: 0x2f9e70, Func Offset: 0x8d0
	// Line 3833, Address: 0x2f9e80, Func Offset: 0x8e0
	// Line 3834, Address: 0x2f9e88, Func Offset: 0x8e8
	// Line 3857, Address: 0x2f9ea0, Func Offset: 0x900
	// Func End, Address: 0x2f9ed0, Func Offset: 0x930
}

// zSaveLoad_DoAutoSave__Fv
// Start address: 0x2f9ed0
int32 zSaveLoad_DoAutoSave()
{
	int32 success;
	int32 teststat;
	int32 rc;
	en_XSGASYNC_STATUS asstat;
	st_XSAVEGAME_DATA* svinst;
	XSGAutoData* autodata;
	int8 label[64];
	// Line 3460, Address: 0x2f9ed0, Func Offset: 0
	// Line 3461, Address: 0x2f9ee0, Func Offset: 0x10
	// Line 3460, Address: 0x2f9ee4, Func Offset: 0x14
	// Line 3462, Address: 0x2f9ef0, Func Offset: 0x20
	// Line 3460, Address: 0x2f9ef4, Func Offset: 0x24
	// Line 3464, Address: 0x2f9ef8, Func Offset: 0x28
	// Line 3460, Address: 0x2f9efc, Func Offset: 0x2c
	// Line 3468, Address: 0x2f9f00, Func Offset: 0x30
	// Line 3475, Address: 0x2f9f58, Func Offset: 0x88
	// Line 3477, Address: 0x2f9f64, Func Offset: 0x94
	// Line 3482, Address: 0x2f9f6c, Func Offset: 0x9c
	// Line 3484, Address: 0x2f9f7c, Func Offset: 0xac
	// Line 3479, Address: 0x2f9f84, Func Offset: 0xb4
	// Line 3487, Address: 0x2f9f8c, Func Offset: 0xbc
	// Line 3488, Address: 0x2f9ffc, Func Offset: 0x12c
	// Line 3491, Address: 0x2fa000, Func Offset: 0x130
	// Line 3493, Address: 0x2fa008, Func Offset: 0x138
	// Line 3496, Address: 0x2fa014, Func Offset: 0x144
	// Line 3498, Address: 0x2fa020, Func Offset: 0x150
	// Line 3500, Address: 0x2fa02c, Func Offset: 0x15c
	// Line 3505, Address: 0x2fa034, Func Offset: 0x164
	// Line 3507, Address: 0x2fa040, Func Offset: 0x170
	// Line 3511, Address: 0x2fa064, Func Offset: 0x194
	// Line 3517, Address: 0x2fa088, Func Offset: 0x1b8
	// Line 3521, Address: 0x2fa094, Func Offset: 0x1c4
	// Line 3523, Address: 0x2fa0d4, Func Offset: 0x204
	// Line 3526, Address: 0x2fa100, Func Offset: 0x230
	// Line 3539, Address: 0x2fa10c, Func Offset: 0x23c
	// Line 3542, Address: 0x2fa14c, Func Offset: 0x27c
	// Line 3545, Address: 0x2fa158, Func Offset: 0x288
	// Line 3588, Address: 0x2fa160, Func Offset: 0x290
	// Line 3589, Address: 0x2fa168, Func Offset: 0x298
	// Line 3590, Address: 0x2fa170, Func Offset: 0x2a0
	// Line 3595, Address: 0x2fa17c, Func Offset: 0x2ac
	// Line 3597, Address: 0x2fa188, Func Offset: 0x2b8
	// Line 3600, Address: 0x2fa194, Func Offset: 0x2c4
	// Line 3603, Address: 0x2fa1a4, Func Offset: 0x2d4
	// Line 3605, Address: 0x2fa1ac, Func Offset: 0x2dc
	// Line 3609, Address: 0x2fa1b8, Func Offset: 0x2e8
	// Line 3615, Address: 0x2fa1cc, Func Offset: 0x2fc
	// Line 3619, Address: 0x2fa1d8, Func Offset: 0x308
	// Line 3623, Address: 0x2fa1e4, Func Offset: 0x314
	// Line 3625, Address: 0x2fa1ec, Func Offset: 0x31c
	// Line 3628, Address: 0x2fa1f4, Func Offset: 0x324
	// Line 3629, Address: 0x2fa1f8, Func Offset: 0x328
	// Line 3523, Address: 0x2fa22c, Func Offset: 0x35c
	// Line 3629, Address: 0x2fa234, Func Offset: 0x364
	// Line 3546, Address: 0x2fa23c, Func Offset: 0x36c
	// Line 3629, Address: 0x2fa240, Func Offset: 0x370
	// Line 3547, Address: 0x2fa248, Func Offset: 0x378
	// Line 3629, Address: 0x2fa254, Func Offset: 0x384
	// Line 3547, Address: 0x2fa25c, Func Offset: 0x38c
	// Line 3551, Address: 0x2fa260, Func Offset: 0x390
	// Line 3629, Address: 0x2fa264, Func Offset: 0x394
	// Line 3555, Address: 0x2fa26c, Func Offset: 0x39c
	// Line 3629, Address: 0x2fa270, Func Offset: 0x3a0
	// Line 3560, Address: 0x2fa280, Func Offset: 0x3b0
	// Line 3629, Address: 0x2fa288, Func Offset: 0x3b8
	// Line 3563, Address: 0x2fa290, Func Offset: 0x3c0
	// Line 3629, Address: 0x2fa294, Func Offset: 0x3c4
	// Line 3563, Address: 0x2fa2ac, Func Offset: 0x3dc
	// Line 3574, Address: 0x2fa2b4, Func Offset: 0x3e4
	// Line 3631, Address: 0x2fa2c4, Func Offset: 0x3f4
	// Func End, Address: 0x2fa2f0, Func Offset: 0x420
}

// zSaveLoadAutoSaveUpdate__Fv
// Start address: 0x2fa2f0
void zSaveLoadAutoSaveUpdate()
{
	xBase* sendTo;
	XSGAutoData* autodata;
	int32 result;
	// Line 3226, Address: 0x2fa2f0, Func Offset: 0
	// Line 3228, Address: 0x2fa2f4, Func Offset: 0x4
	// Line 3226, Address: 0x2fa2f8, Func Offset: 0x8
	// Line 3228, Address: 0x2fa300, Func Offset: 0x10
	// Line 3312, Address: 0x2fa31c, Func Offset: 0x2c
	// Line 3421, Address: 0x2fa328, Func Offset: 0x38
	// Line 3323, Address: 0x2fa344, Func Offset: 0x54
	// Line 3421, Address: 0x2fa34c, Func Offset: 0x5c
	// Line 3324, Address: 0x2fa358, Func Offset: 0x68
	// Line 3421, Address: 0x2fa35c, Func Offset: 0x6c
	// Line 3324, Address: 0x2fa36c, Func Offset: 0x7c
	// Line 3421, Address: 0x2fa370, Func Offset: 0x80
	// Line 3324, Address: 0x2fa378, Func Offset: 0x88
	// Line 3328, Address: 0x2fa380, Func Offset: 0x90
	// Line 3421, Address: 0x2fa388, Func Offset: 0x98
	// Line 3331, Address: 0x2fa3a0, Func Offset: 0xb0
	// Line 3421, Address: 0x2fa3a8, Func Offset: 0xb8
	// Line 3342, Address: 0x2fa3b8, Func Offset: 0xc8
	// Line 3421, Address: 0x2fa3bc, Func Offset: 0xcc
	// Line 3345, Address: 0x2fa3d4, Func Offset: 0xe4
	// Line 3421, Address: 0x2fa3d8, Func Offset: 0xe8
	// Line 3345, Address: 0x2fa3ec, Func Offset: 0xfc
	// Line 3421, Address: 0x2fa3f0, Func Offset: 0x100
	// Line 3345, Address: 0x2fa400, Func Offset: 0x110
	// Line 3421, Address: 0x2fa408, Func Offset: 0x118
	// Line 3345, Address: 0x2fa41c, Func Offset: 0x12c
	// Line 3421, Address: 0x2fa420, Func Offset: 0x130
	// Line 3345, Address: 0x2fa430, Func Offset: 0x140
	// Line 3421, Address: 0x2fa434, Func Offset: 0x144
	// Line 3349, Address: 0x2fa43c, Func Offset: 0x14c
	// Line 3421, Address: 0x2fa454, Func Offset: 0x164
	// Line 3355, Address: 0x2fa46c, Func Offset: 0x17c
	// Line 3421, Address: 0x2fa474, Func Offset: 0x184
	// Line 3358, Address: 0x2fa478, Func Offset: 0x188
	// Line 3421, Address: 0x2fa47c, Func Offset: 0x18c
	// Line 3358, Address: 0x2fa484, Func Offset: 0x194
	// Line 3421, Address: 0x2fa488, Func Offset: 0x198
	// Line 3358, Address: 0x2fa490, Func Offset: 0x1a0
	// Line 3421, Address: 0x2fa494, Func Offset: 0x1a4
	// Line 3358, Address: 0x2fa4a4, Func Offset: 0x1b4
	// Line 3421, Address: 0x2fa4ac, Func Offset: 0x1bc
	// Line 3362, Address: 0x2fa4bc, Func Offset: 0x1cc
	// Line 3421, Address: 0x2fa4c0, Func Offset: 0x1d0
	// Line 3362, Address: 0x2fa4d4, Func Offset: 0x1e4
	// Line 3421, Address: 0x2fa4d8, Func Offset: 0x1e8
	// Line 3362, Address: 0x2fa4e8, Func Offset: 0x1f8
	// Line 3421, Address: 0x2fa4f0, Func Offset: 0x200
	// Line 3362, Address: 0x2fa504, Func Offset: 0x214
	// Line 3421, Address: 0x2fa508, Func Offset: 0x218
	// Line 3362, Address: 0x2fa518, Func Offset: 0x228
	// Line 3421, Address: 0x2fa51c, Func Offset: 0x22c
	// Line 3366, Address: 0x2fa524, Func Offset: 0x234
	// Line 3421, Address: 0x2fa53c, Func Offset: 0x24c
	// Line 3368, Address: 0x2fa544, Func Offset: 0x254
	// Line 3421, Address: 0x2fa54c, Func Offset: 0x25c
	// Line 3376, Address: 0x2fa57c, Func Offset: 0x28c
	// Line 3421, Address: 0x2fa580, Func Offset: 0x290
	// Line 3376, Address: 0x2fa594, Func Offset: 0x2a4
	// Line 3421, Address: 0x2fa598, Func Offset: 0x2a8
	// Line 3376, Address: 0x2fa5a8, Func Offset: 0x2b8
	// Line 3421, Address: 0x2fa5b0, Func Offset: 0x2c0
	// Line 3376, Address: 0x2fa5c4, Func Offset: 0x2d4
	// Line 3421, Address: 0x2fa5c8, Func Offset: 0x2d8
	// Line 3376, Address: 0x2fa5d8, Func Offset: 0x2e8
	// Line 3378, Address: 0x2fa5dc, Func Offset: 0x2ec
	// Line 3421, Address: 0x2fa5e4, Func Offset: 0x2f4
	// Line 3382, Address: 0x2fa5f4, Func Offset: 0x304
	// Line 3421, Address: 0x2fa5f8, Func Offset: 0x308
	// Line 3382, Address: 0x2fa60c, Func Offset: 0x31c
	// Line 3421, Address: 0x2fa610, Func Offset: 0x320
	// Line 3382, Address: 0x2fa620, Func Offset: 0x330
	// Line 3421, Address: 0x2fa628, Func Offset: 0x338
	// Line 3382, Address: 0x2fa63c, Func Offset: 0x34c
	// Line 3421, Address: 0x2fa640, Func Offset: 0x350
	// Line 3382, Address: 0x2fa650, Func Offset: 0x360
	// Line 3421, Address: 0x2fa654, Func Offset: 0x364
	// Line 3387, Address: 0x2fa65c, Func Offset: 0x36c
	// Line 3421, Address: 0x2fa674, Func Offset: 0x384
	// Line 3394, Address: 0x2fa68c, Func Offset: 0x39c
	// Line 3421, Address: 0x2fa694, Func Offset: 0x3a4
	// Line 3402, Address: 0x2fa6a4, Func Offset: 0x3b4
	// Line 3421, Address: 0x2fa6a8, Func Offset: 0x3b8
	// Line 3402, Address: 0x2fa6bc, Func Offset: 0x3cc
	// Line 3421, Address: 0x2fa6c0, Func Offset: 0x3d0
	// Line 3402, Address: 0x2fa6d0, Func Offset: 0x3e0
	// Line 3421, Address: 0x2fa6d8, Func Offset: 0x3e8
	// Line 3402, Address: 0x2fa6ec, Func Offset: 0x3fc
	// Line 3421, Address: 0x2fa6f0, Func Offset: 0x400
	// Line 3402, Address: 0x2fa700, Func Offset: 0x410
	// Line 3421, Address: 0x2fa704, Func Offset: 0x414
	// Line 3406, Address: 0x2fa70c, Func Offset: 0x41c
	// Line 3421, Address: 0x2fa724, Func Offset: 0x434
	// Line 3412, Address: 0x2fa73c, Func Offset: 0x44c
	// Line 3345, Address: 0x2fa744, Func Offset: 0x454
	// Line 3362, Address: 0x2fa74c, Func Offset: 0x45c
	// Line 3376, Address: 0x2fa754, Func Offset: 0x464
	// Line 3382, Address: 0x2fa75c, Func Offset: 0x46c
	// Line 3402, Address: 0x2fa764, Func Offset: 0x474
	// Line 3422, Address: 0x2fa76c, Func Offset: 0x47c
	// Func End, Address: 0x2fa77c, Func Offset: 0x48c
}

// zSaveLoadPreAutoSave__Fb
// Start address: 0x2fa780
void zSaveLoadPreAutoSave(uint8 onOff)
{
	// Line 3222, Address: 0x2fa780, Func Offset: 0
	// Func End, Address: 0x2fa788, Func Offset: 0x8
}

// zSaveLoad_GameSelect__Fi
// Start address: 0x2fa790
int32 zSaveLoad_GameSelect(int32 mode)
{
	int32 done;
	st_XSAVEGAME_DATA* svinst;
	int32 emptyCount;
	int32 i;
	int8* empty_string;
	int8* damaged_save_name;
	// Line 2761, Address: 0x2fa790, Func Offset: 0
	// Line 2765, Address: 0x2fa794, Func Offset: 0x4
	// Line 2761, Address: 0x2fa798, Func Offset: 0x8
	// Line 2763, Address: 0x2fa7bc, Func Offset: 0x2c
	// Line 2761, Address: 0x2fa7c0, Func Offset: 0x30
	// Line 2765, Address: 0x2fa7c8, Func Offset: 0x38
	// Line 2779, Address: 0x2fa7cc, Func Offset: 0x3c
	// Line 2769, Address: 0x2fa7d0, Func Offset: 0x40
	// Line 2779, Address: 0x2fa7d8, Func Offset: 0x48
	// Line 2781, Address: 0x2fa85c, Func Offset: 0xcc
	// Line 2785, Address: 0x2fa864, Func Offset: 0xd4
	// Line 2787, Address: 0x2fa870, Func Offset: 0xe0
	// Line 2788, Address: 0x2fa8fc, Func Offset: 0x16c
	// Line 2790, Address: 0x2fa98c, Func Offset: 0x1fc
	// Line 2793, Address: 0x2fa994, Func Offset: 0x204
	// Line 2799, Address: 0x2faa24, Func Offset: 0x294
	// Line 2798, Address: 0x2faa28, Func Offset: 0x298
	// Line 2799, Address: 0x2faa2c, Func Offset: 0x29c
	// Line 2801, Address: 0x2faa38, Func Offset: 0x2a8
	// Line 2804, Address: 0x2faa44, Func Offset: 0x2b4
	// Line 2813, Address: 0x2faa50, Func Offset: 0x2c0
	// Line 2836, Address: 0x2faa64, Func Offset: 0x2d4
	// Line 2838, Address: 0x2faa7c, Func Offset: 0x2ec
	// Line 2840, Address: 0x2faab0, Func Offset: 0x320
	// Line 2845, Address: 0x2fab10, Func Offset: 0x380
	// Line 2846, Address: 0x2fab28, Func Offset: 0x398
	// Line 2847, Address: 0x2fab38, Func Offset: 0x3a8
	// Line 2880, Address: 0x2fab48, Func Offset: 0x3b8
	// Line 2850, Address: 0x2fab4c, Func Offset: 0x3bc
	// Line 2880, Address: 0x2fab54, Func Offset: 0x3c4
	// Line 2850, Address: 0x2fab58, Func Offset: 0x3c8
	// Line 2851, Address: 0x2fab64, Func Offset: 0x3d4
	// Line 2853, Address: 0x2fab70, Func Offset: 0x3e0
	// Line 2880, Address: 0x2fab78, Func Offset: 0x3e8
	// Line 2881, Address: 0x2fab80, Func Offset: 0x3f0
	// Line 2880, Address: 0x2fab84, Func Offset: 0x3f4
	// Line 2881, Address: 0x2fab88, Func Offset: 0x3f8
	// Line 2884, Address: 0x2fab9c, Func Offset: 0x40c
	// Line 2887, Address: 0x2faba4, Func Offset: 0x414
	// Line 2890, Address: 0x2faba8, Func Offset: 0x418
	// Line 2893, Address: 0x2fabb0, Func Offset: 0x420
	// Line 2890, Address: 0x2fabb4, Func Offset: 0x424
	// Line 2893, Address: 0x2fabb8, Func Offset: 0x428
	// Line 2896, Address: 0x2fabc4, Func Offset: 0x434
	// Line 2899, Address: 0x2fabd0, Func Offset: 0x440
	// Line 2905, Address: 0x2fabdc, Func Offset: 0x44c
	// Line 2907, Address: 0x2fabfc, Func Offset: 0x46c
	// Line 2908, Address: 0x2fac18, Func Offset: 0x488
	// Line 2909, Address: 0x2fac28, Func Offset: 0x498
	// Line 2910, Address: 0x2fac38, Func Offset: 0x4a8
	// Line 2912, Address: 0x2fac44, Func Offset: 0x4b4
	// Line 2916, Address: 0x2facd4, Func Offset: 0x544
	// Line 2944, Address: 0x2face0, Func Offset: 0x550
	// Line 2945, Address: 0x2fad9c, Func Offset: 0x60c
	// Line 2946, Address: 0x2fae54, Func Offset: 0x6c4
	// Line 2950, Address: 0x2faee4, Func Offset: 0x754
	// Line 3146, Address: 0x2faee8, Func Offset: 0x758
	// Line 2961, Address: 0x2faf0c, Func Offset: 0x77c
	// Line 3146, Address: 0x2faf18, Func Offset: 0x788
	// Line 2965, Address: 0x2faf24, Func Offset: 0x794
	// Line 3146, Address: 0x2faf28, Func Offset: 0x798
	// Line 2966, Address: 0x2faf30, Func Offset: 0x7a0
	// Line 3146, Address: 0x2faf38, Func Offset: 0x7a8
	// Line 2969, Address: 0x2faf3c, Func Offset: 0x7ac
	// Line 3146, Address: 0x2faf40, Func Offset: 0x7b0
	// Line 2971, Address: 0x2faf60, Func Offset: 0x7d0
	// Line 3146, Address: 0x2faf64, Func Offset: 0x7d4
	// Line 2971, Address: 0x2faf6c, Func Offset: 0x7dc
	// Line 2972, Address: 0x2faf80, Func Offset: 0x7f0
	// Line 3146, Address: 0x2faf84, Func Offset: 0x7f4
	// Line 2986, Address: 0x2fafa0, Func Offset: 0x810
	// Line 2987, Address: 0x2fafa4, Func Offset: 0x814
	// Line 3146, Address: 0x2fafa8, Func Offset: 0x818
	// Line 2989, Address: 0x2fafb0, Func Offset: 0x820
	// Line 3146, Address: 0x2fafb4, Func Offset: 0x824
	// Line 2989, Address: 0x2fafbc, Func Offset: 0x82c
	// Line 3146, Address: 0x2fafc0, Func Offset: 0x830
	// Line 2989, Address: 0x2fafc8, Func Offset: 0x838
	// Line 2994, Address: 0x2fafd0, Func Offset: 0x840
	// Line 2993, Address: 0x2fafd4, Func Offset: 0x844
	// Line 2995, Address: 0x2fafd8, Func Offset: 0x848
	// Line 3005, Address: 0x2fafe0, Func Offset: 0x850
	// Line 3012, Address: 0x2fafe4, Func Offset: 0x854
	// Line 3148, Address: 0x2fafec, Func Offset: 0x85c
	// Line 3150, Address: 0x2faffc, Func Offset: 0x86c
	// Line 3151, Address: 0x2fb008, Func Offset: 0x878
	// Line 3156, Address: 0x2fb094, Func Offset: 0x904
	// Line 3157, Address: 0x2fb14c, Func Offset: 0x9bc
	// Line 3160, Address: 0x2fb1dc, Func Offset: 0xa4c
	// Line 2782, Address: 0x2fb1e4, Func Offset: 0xa54
	// Line 2787, Address: 0x2fb1f0, Func Offset: 0xa60
	// Line 2788, Address: 0x2fb1f8, Func Offset: 0xa68
	// Line 2793, Address: 0x2fb200, Func Offset: 0xa70
	// Line 3160, Address: 0x2fb208, Func Offset: 0xa78
	// Line 2815, Address: 0x2fb214, Func Offset: 0xa84
	// Line 3160, Address: 0x2fb218, Func Offset: 0xa88
	// Line 2815, Address: 0x2fb220, Func Offset: 0xa90
	// Line 2816, Address: 0x2fb224, Func Offset: 0xa94
	// Line 3160, Address: 0x2fb228, Func Offset: 0xa98
	// Line 2817, Address: 0x2fb230, Func Offset: 0xaa0
	// Line 3160, Address: 0x2fb234, Func Offset: 0xaa4
	// Line 2820, Address: 0x2fb240, Func Offset: 0xab0
	// Line 3160, Address: 0x2fb244, Func Offset: 0xab4
	// Line 2822, Address: 0x2fb24c, Func Offset: 0xabc
	// Line 3160, Address: 0x2fb258, Func Offset: 0xac8
	// Line 2838, Address: 0x2fb27c, Func Offset: 0xaec
	// Line 3160, Address: 0x2fb288, Func Offset: 0xaf8
	// Line 2840, Address: 0x2fb2ac, Func Offset: 0xb1c
	// Line 2912, Address: 0x2fb2b8, Func Offset: 0xb28
	// Line 2944, Address: 0x2fb2c0, Func Offset: 0xb30
	// Line 2945, Address: 0x2fb2c8, Func Offset: 0xb38
	// Line 2946, Address: 0x2fb2d0, Func Offset: 0xb40
	// Line 3160, Address: 0x2fb2d8, Func Offset: 0xb48
	// Line 2961, Address: 0x2fb2dc, Func Offset: 0xb4c
	// Line 3160, Address: 0x2fb2e0, Func Offset: 0xb50
	// Line 2961, Address: 0x2fb2f0, Func Offset: 0xb60
	// Line 3160, Address: 0x2fb2f4, Func Offset: 0xb64
	// Line 2971, Address: 0x2fb300, Func Offset: 0xb70
	// Line 3160, Address: 0x2fb304, Func Offset: 0xb74
	// Line 2971, Address: 0x2fb310, Func Offset: 0xb80
	// Line 3160, Address: 0x2fb314, Func Offset: 0xb84
	// Line 2971, Address: 0x2fb31c, Func Offset: 0xb8c
	// Line 3160, Address: 0x2fb320, Func Offset: 0xb90
	// Line 2971, Address: 0x2fb340, Func Offset: 0xbb0
	// Line 2974, Address: 0x2fb348, Func Offset: 0xbb8
	// Line 2976, Address: 0x2fb34c, Func Offset: 0xbbc
	// Line 3160, Address: 0x2fb350, Func Offset: 0xbc0
	// Line 2978, Address: 0x2fb364, Func Offset: 0xbd4
	// Line 3160, Address: 0x2fb374, Func Offset: 0xbe4
	// Line 2978, Address: 0x2fb384, Func Offset: 0xbf4
	// Line 3160, Address: 0x2fb388, Func Offset: 0xbf8
	// Line 2978, Address: 0x2fb38c, Func Offset: 0xbfc
	// Line 3160, Address: 0x2fb390, Func Offset: 0xc00
	// Line 2978, Address: 0x2fb3a8, Func Offset: 0xc18
	// Line 3160, Address: 0x2fb3ac, Func Offset: 0xc1c
	// Line 2978, Address: 0x2fb3bc, Func Offset: 0xc2c
	// Line 3160, Address: 0x2fb3c4, Func Offset: 0xc34
	// Line 2978, Address: 0x2fb3d8, Func Offset: 0xc48
	// Line 3160, Address: 0x2fb3e0, Func Offset: 0xc50
	// Line 2978, Address: 0x2fb3f0, Func Offset: 0xc60
	// Line 3160, Address: 0x2fb40c, Func Offset: 0xc7c
	// Line 2978, Address: 0x2fb414, Func Offset: 0xc84
	// Line 3160, Address: 0x2fb418, Func Offset: 0xc88
	// Line 2978, Address: 0x2fb428, Func Offset: 0xc98
	// Line 3160, Address: 0x2fb42c, Func Offset: 0xc9c
	// Line 2978, Address: 0x2fb438, Func Offset: 0xca8
	// Line 3160, Address: 0x2fb43c, Func Offset: 0xcac
	// Line 2978, Address: 0x2fb444, Func Offset: 0xcb4
	// Line 3160, Address: 0x2fb454, Func Offset: 0xcc4
	// Line 2978, Address: 0x2fb464, Func Offset: 0xcd4
	// Line 3160, Address: 0x2fb468, Func Offset: 0xcd8
	// Line 2978, Address: 0x2fb46c, Func Offset: 0xcdc
	// Line 3160, Address: 0x2fb470, Func Offset: 0xce0
	// Line 2978, Address: 0x2fb488, Func Offset: 0xcf8
	// Line 3160, Address: 0x2fb48c, Func Offset: 0xcfc
	// Line 2978, Address: 0x2fb49c, Func Offset: 0xd0c
	// Line 3160, Address: 0x2fb4a4, Func Offset: 0xd14
	// Line 2978, Address: 0x2fb4b8, Func Offset: 0xd28
	// Line 3160, Address: 0x2fb4c0, Func Offset: 0xd30
	// Line 2978, Address: 0x2fb4d0, Func Offset: 0xd40
	// Line 3160, Address: 0x2fb4ec, Func Offset: 0xd5c
	// Line 2981, Address: 0x2fb4f4, Func Offset: 0xd64
	// Line 2978, Address: 0x2fb4fc, Func Offset: 0xd6c
	// Line 3016, Address: 0x2fb50c, Func Offset: 0xd7c
	// Line 3160, Address: 0x2fb510, Func Offset: 0xd80
	// Line 3016, Address: 0x2fb520, Func Offset: 0xd90
	// Line 3160, Address: 0x2fb524, Func Offset: 0xd94
	// Line 3016, Address: 0x2fb52c, Func Offset: 0xd9c
	// Line 3160, Address: 0x2fb534, Func Offset: 0xda4
	// Line 3016, Address: 0x2fb53c, Func Offset: 0xdac
	// Line 3160, Address: 0x2fb540, Func Offset: 0xdb0
	// Line 3016, Address: 0x2fb558, Func Offset: 0xdc8
	// Line 3160, Address: 0x2fb564, Func Offset: 0xdd4
	// Line 3016, Address: 0x2fb56c, Func Offset: 0xddc
	// Line 3160, Address: 0x2fb57c, Func Offset: 0xdec
	// Line 3016, Address: 0x2fb58c, Func Offset: 0xdfc
	// Line 3160, Address: 0x2fb590, Func Offset: 0xe00
	// Line 3016, Address: 0x2fb594, Func Offset: 0xe04
	// Line 3160, Address: 0x2fb598, Func Offset: 0xe08
	// Line 3016, Address: 0x2fb5b0, Func Offset: 0xe20
	// Line 3160, Address: 0x2fb5b4, Func Offset: 0xe24
	// Line 3016, Address: 0x2fb5c4, Func Offset: 0xe34
	// Line 3160, Address: 0x2fb5cc, Func Offset: 0xe3c
	// Line 3016, Address: 0x2fb5e0, Func Offset: 0xe50
	// Line 3160, Address: 0x2fb5e8, Func Offset: 0xe58
	// Line 3016, Address: 0x2fb5f8, Func Offset: 0xe68
	// Line 3160, Address: 0x2fb614, Func Offset: 0xe84
	// Line 3016, Address: 0x2fb628, Func Offset: 0xe98
	// Line 3160, Address: 0x2fb62c, Func Offset: 0xe9c
	// Line 3016, Address: 0x2fb640, Func Offset: 0xeb0
	// Line 3160, Address: 0x2fb644, Func Offset: 0xeb4
	// Line 3016, Address: 0x2fb654, Func Offset: 0xec4
	// Line 3160, Address: 0x2fb65c, Func Offset: 0xecc
	// Line 3016, Address: 0x2fb670, Func Offset: 0xee0
	// Line 3160, Address: 0x2fb678, Func Offset: 0xee8
	// Line 3016, Address: 0x2fb688, Func Offset: 0xef8
	// Line 3160, Address: 0x2fb6a4, Func Offset: 0xf14
	// Line 3016, Address: 0x2fb6b8, Func Offset: 0xf28
	// Line 3160, Address: 0x2fb6bc, Func Offset: 0xf2c
	// Line 3016, Address: 0x2fb6d0, Func Offset: 0xf40
	// Line 3160, Address: 0x2fb6d4, Func Offset: 0xf44
	// Line 3016, Address: 0x2fb6e4, Func Offset: 0xf54
	// Line 3160, Address: 0x2fb6ec, Func Offset: 0xf5c
	// Line 3016, Address: 0x2fb700, Func Offset: 0xf70
	// Line 3160, Address: 0x2fb708, Func Offset: 0xf78
	// Line 3016, Address: 0x2fb718, Func Offset: 0xf88
	// Line 3160, Address: 0x2fb734, Func Offset: 0xfa4
	// Line 3016, Address: 0x2fb73c, Func Offset: 0xfac
	// Line 3160, Address: 0x2fb740, Func Offset: 0xfb0
	// Line 3016, Address: 0x2fb750, Func Offset: 0xfc0
	// Line 3160, Address: 0x2fb75c, Func Offset: 0xfcc
	// Line 3016, Address: 0x2fb764, Func Offset: 0xfd4
	// Line 3160, Address: 0x2fb768, Func Offset: 0xfd8
	// Line 3016, Address: 0x2fb76c, Func Offset: 0xfdc
	// Line 3160, Address: 0x2fb770, Func Offset: 0xfe0
	// Line 3016, Address: 0x2fb784, Func Offset: 0xff4
	// Line 3160, Address: 0x2fb788, Func Offset: 0xff8
	// Line 3016, Address: 0x2fb79c, Func Offset: 0x100c
	// Line 3160, Address: 0x2fb7a0, Func Offset: 0x1010
	// Line 3016, Address: 0x2fb7b0, Func Offset: 0x1020
	// Line 3160, Address: 0x2fb7b8, Func Offset: 0x1028
	// Line 3016, Address: 0x2fb7cc, Func Offset: 0x103c
	// Line 3160, Address: 0x2fb7d0, Func Offset: 0x1040
	// Line 3016, Address: 0x2fb7e0, Func Offset: 0x1050
	// Line 3160, Address: 0x2fb7fc, Func Offset: 0x106c
	// Line 3016, Address: 0x2fb808, Func Offset: 0x1078
	// Line 3160, Address: 0x2fb80c, Func Offset: 0x107c
	// Line 3016, Address: 0x2fb814, Func Offset: 0x1084
	// Line 3160, Address: 0x2fb818, Func Offset: 0x1088
	// Line 3016, Address: 0x2fb820, Func Offset: 0x1090
	// Line 3160, Address: 0x2fb830, Func Offset: 0x10a0
	// Line 3016, Address: 0x2fb840, Func Offset: 0x10b0
	// Line 3160, Address: 0x2fb844, Func Offset: 0x10b4
	// Line 3016, Address: 0x2fb848, Func Offset: 0x10b8
	// Line 3160, Address: 0x2fb84c, Func Offset: 0x10bc
	// Line 3016, Address: 0x2fb864, Func Offset: 0x10d4
	// Line 3160, Address: 0x2fb868, Func Offset: 0x10d8
	// Line 3016, Address: 0x2fb878, Func Offset: 0x10e8
	// Line 3160, Address: 0x2fb880, Func Offset: 0x10f0
	// Line 3016, Address: 0x2fb894, Func Offset: 0x1104
	// Line 3160, Address: 0x2fb898, Func Offset: 0x1108
	// Line 3016, Address: 0x2fb8a8, Func Offset: 0x1118
	// Line 3160, Address: 0x2fb8c4, Func Offset: 0x1134
	// Line 3016, Address: 0x2fb8d0, Func Offset: 0x1140
	// Line 3160, Address: 0x2fb8d4, Func Offset: 0x1144
	// Line 3016, Address: 0x2fb8dc, Func Offset: 0x114c
	// Line 3160, Address: 0x2fb8e0, Func Offset: 0x1150
	// Line 3016, Address: 0x2fb8e8, Func Offset: 0x1158
	// Line 3160, Address: 0x2fb8ec, Func Offset: 0x115c
	// Line 3016, Address: 0x2fb8f4, Func Offset: 0x1164
	// Line 3160, Address: 0x2fb900, Func Offset: 0x1170
	// Line 3016, Address: 0x2fb908, Func Offset: 0x1178
	// Line 3160, Address: 0x2fb90c, Func Offset: 0x117c
	// Line 3016, Address: 0x2fb914, Func Offset: 0x1184
	// Line 3160, Address: 0x2fb91c, Func Offset: 0x118c
	// Line 3016, Address: 0x2fb924, Func Offset: 0x1194
	// Line 3160, Address: 0x2fb928, Func Offset: 0x1198
	// Line 3016, Address: 0x2fb940, Func Offset: 0x11b0
	// Line 3160, Address: 0x2fb94c, Func Offset: 0x11bc
	// Line 3016, Address: 0x2fb954, Func Offset: 0x11c4
	// Line 3160, Address: 0x2fb964, Func Offset: 0x11d4
	// Line 3016, Address: 0x2fb974, Func Offset: 0x11e4
	// Line 3160, Address: 0x2fb978, Func Offset: 0x11e8
	// Line 3016, Address: 0x2fb97c, Func Offset: 0x11ec
	// Line 3160, Address: 0x2fb980, Func Offset: 0x11f0
	// Line 3016, Address: 0x2fb998, Func Offset: 0x1208
	// Line 3160, Address: 0x2fb99c, Func Offset: 0x120c
	// Line 3016, Address: 0x2fb9ac, Func Offset: 0x121c
	// Line 3160, Address: 0x2fb9b4, Func Offset: 0x1224
	// Line 3016, Address: 0x2fb9c8, Func Offset: 0x1238
	// Line 3160, Address: 0x2fb9d0, Func Offset: 0x1240
	// Line 3016, Address: 0x2fb9e0, Func Offset: 0x1250
	// Line 3160, Address: 0x2fb9fc, Func Offset: 0x126c
	// Line 3016, Address: 0x2fba10, Func Offset: 0x1280
	// Line 3160, Address: 0x2fba14, Func Offset: 0x1284
	// Line 3016, Address: 0x2fba28, Func Offset: 0x1298
	// Line 3160, Address: 0x2fba2c, Func Offset: 0x129c
	// Line 3016, Address: 0x2fba3c, Func Offset: 0x12ac
	// Line 3160, Address: 0x2fba44, Func Offset: 0x12b4
	// Line 3016, Address: 0x2fba58, Func Offset: 0x12c8
	// Line 3160, Address: 0x2fba60, Func Offset: 0x12d0
	// Line 3016, Address: 0x2fba70, Func Offset: 0x12e0
	// Line 3160, Address: 0x2fba8c, Func Offset: 0x12fc
	// Line 3016, Address: 0x2fbaa0, Func Offset: 0x1310
	// Line 3160, Address: 0x2fbaa4, Func Offset: 0x1314
	// Line 3016, Address: 0x2fbab8, Func Offset: 0x1328
	// Line 3160, Address: 0x2fbabc, Func Offset: 0x132c
	// Line 3016, Address: 0x2fbacc, Func Offset: 0x133c
	// Line 3160, Address: 0x2fbad4, Func Offset: 0x1344
	// Line 3016, Address: 0x2fbae8, Func Offset: 0x1358
	// Line 3160, Address: 0x2fbaf0, Func Offset: 0x1360
	// Line 3016, Address: 0x2fbb00, Func Offset: 0x1370
	// Line 3160, Address: 0x2fbb1c, Func Offset: 0x138c
	// Line 3016, Address: 0x2fbb24, Func Offset: 0x1394
	// Line 3160, Address: 0x2fbb28, Func Offset: 0x1398
	// Line 3016, Address: 0x2fbb38, Func Offset: 0x13a8
	// Line 3160, Address: 0x2fbb44, Func Offset: 0x13b4
	// Line 3016, Address: 0x2fbb4c, Func Offset: 0x13bc
	// Line 3160, Address: 0x2fbb50, Func Offset: 0x13c0
	// Line 3016, Address: 0x2fbb54, Func Offset: 0x13c4
	// Line 3160, Address: 0x2fbb58, Func Offset: 0x13c8
	// Line 3016, Address: 0x2fbb6c, Func Offset: 0x13dc
	// Line 3160, Address: 0x2fbb70, Func Offset: 0x13e0
	// Line 3016, Address: 0x2fbb84, Func Offset: 0x13f4
	// Line 3160, Address: 0x2fbb88, Func Offset: 0x13f8
	// Line 3016, Address: 0x2fbb98, Func Offset: 0x1408
	// Line 3160, Address: 0x2fbba0, Func Offset: 0x1410
	// Line 3016, Address: 0x2fbbb4, Func Offset: 0x1424
	// Line 3160, Address: 0x2fbbb8, Func Offset: 0x1428
	// Line 3016, Address: 0x2fbbc8, Func Offset: 0x1438
	// Line 3160, Address: 0x2fbbe4, Func Offset: 0x1454
	// Line 3016, Address: 0x2fbbec, Func Offset: 0x145c
	// Line 3160, Address: 0x2fbbf0, Func Offset: 0x1460
	// Line 3016, Address: 0x2fbbf8, Func Offset: 0x1468
	// Line 3160, Address: 0x2fbc08, Func Offset: 0x1478
	// Line 3016, Address: 0x2fbc18, Func Offset: 0x1488
	// Line 3160, Address: 0x2fbc1c, Func Offset: 0x148c
	// Line 3016, Address: 0x2fbc20, Func Offset: 0x1490
	// Line 3160, Address: 0x2fbc24, Func Offset: 0x1494
	// Line 3016, Address: 0x2fbc3c, Func Offset: 0x14ac
	// Line 3160, Address: 0x2fbc40, Func Offset: 0x14b0
	// Line 3016, Address: 0x2fbc50, Func Offset: 0x14c0
	// Line 3160, Address: 0x2fbc58, Func Offset: 0x14c8
	// Line 3016, Address: 0x2fbc6c, Func Offset: 0x14dc
	// Line 3160, Address: 0x2fbc70, Func Offset: 0x14e0
	// Line 3016, Address: 0x2fbc80, Func Offset: 0x14f0
	// Line 3160, Address: 0x2fbc9c, Func Offset: 0x150c
	// Line 3016, Address: 0x2fbca8, Func Offset: 0x1518
	// Line 3160, Address: 0x2fbcac, Func Offset: 0x151c
	// Line 3016, Address: 0x2fbcb4, Func Offset: 0x1524
	// Line 3160, Address: 0x2fbcb8, Func Offset: 0x1528
	// Line 3016, Address: 0x2fbcc0, Func Offset: 0x1530
	// Line 3160, Address: 0x2fbcc4, Func Offset: 0x1534
	// Line 3017, Address: 0x2fbcd4, Func Offset: 0x1544
	// Line 3160, Address: 0x2fbcd8, Func Offset: 0x1548
	// Line 3031, Address: 0x2fbce0, Func Offset: 0x1550
	// Line 3160, Address: 0x2fbce4, Func Offset: 0x1554
	// Line 3031, Address: 0x2fbcec, Func Offset: 0x155c
	// Line 3160, Address: 0x2fbcf0, Func Offset: 0x1560
	// Line 3031, Address: 0x2fbcf8, Func Offset: 0x1568
	// Line 3160, Address: 0x2fbcfc, Func Offset: 0x156c
	// Line 3031, Address: 0x2fbd04, Func Offset: 0x1574
	// Line 3160, Address: 0x2fbd08, Func Offset: 0x1578
	// Line 3031, Address: 0x2fbd10, Func Offset: 0x1580
	// Line 3036, Address: 0x2fbd18, Func Offset: 0x1588
	// Line 3037, Address: 0x2fbd1c, Func Offset: 0x158c
	// Line 3160, Address: 0x2fbd24, Func Offset: 0x1594
	// Line 3045, Address: 0x2fbd34, Func Offset: 0x15a4
	// Line 3160, Address: 0x2fbd44, Func Offset: 0x15b4
	// Line 3045, Address: 0x2fbd54, Func Offset: 0x15c4
	// Line 3160, Address: 0x2fbd58, Func Offset: 0x15c8
	// Line 3045, Address: 0x2fbd5c, Func Offset: 0x15cc
	// Line 3160, Address: 0x2fbd60, Func Offset: 0x15d0
	// Line 3045, Address: 0x2fbd78, Func Offset: 0x15e8
	// Line 3160, Address: 0x2fbd7c, Func Offset: 0x15ec
	// Line 3045, Address: 0x2fbd8c, Func Offset: 0x15fc
	// Line 3160, Address: 0x2fbd94, Func Offset: 0x1604
	// Line 3045, Address: 0x2fbda8, Func Offset: 0x1618
	// Line 3160, Address: 0x2fbdb0, Func Offset: 0x1620
	// Line 3045, Address: 0x2fbdc0, Func Offset: 0x1630
	// Line 3160, Address: 0x2fbddc, Func Offset: 0x164c
	// Line 3045, Address: 0x2fbdf0, Func Offset: 0x1660
	// Line 3160, Address: 0x2fbdf4, Func Offset: 0x1664
	// Line 3045, Address: 0x2fbe08, Func Offset: 0x1678
	// Line 3160, Address: 0x2fbe0c, Func Offset: 0x167c
	// Line 3045, Address: 0x2fbe1c, Func Offset: 0x168c
	// Line 3160, Address: 0x2fbe24, Func Offset: 0x1694
	// Line 3045, Address: 0x2fbe38, Func Offset: 0x16a8
	// Line 3160, Address: 0x2fbe40, Func Offset: 0x16b0
	// Line 3045, Address: 0x2fbe50, Func Offset: 0x16c0
	// Line 3160, Address: 0x2fbe6c, Func Offset: 0x16dc
	// Line 3045, Address: 0x2fbe80, Func Offset: 0x16f0
	// Line 3160, Address: 0x2fbe84, Func Offset: 0x16f4
	// Line 3045, Address: 0x2fbe98, Func Offset: 0x1708
	// Line 3160, Address: 0x2fbe9c, Func Offset: 0x170c
	// Line 3045, Address: 0x2fbeac, Func Offset: 0x171c
	// Line 3160, Address: 0x2fbeb4, Func Offset: 0x1724
	// Line 3045, Address: 0x2fbec8, Func Offset: 0x1738
	// Line 3160, Address: 0x2fbed0, Func Offset: 0x1740
	// Line 3045, Address: 0x2fbee0, Func Offset: 0x1750
	// Line 3160, Address: 0x2fbefc, Func Offset: 0x176c
	// Line 3045, Address: 0x2fbf04, Func Offset: 0x1774
	// Line 3160, Address: 0x2fbf08, Func Offset: 0x1778
	// Line 3045, Address: 0x2fbf18, Func Offset: 0x1788
	// Line 3160, Address: 0x2fbf24, Func Offset: 0x1794
	// Line 3045, Address: 0x2fbf2c, Func Offset: 0x179c
	// Line 3160, Address: 0x2fbf30, Func Offset: 0x17a0
	// Line 3045, Address: 0x2fbf34, Func Offset: 0x17a4
	// Line 3160, Address: 0x2fbf38, Func Offset: 0x17a8
	// Line 3045, Address: 0x2fbf4c, Func Offset: 0x17bc
	// Line 3160, Address: 0x2fbf50, Func Offset: 0x17c0
	// Line 3045, Address: 0x2fbf64, Func Offset: 0x17d4
	// Line 3160, Address: 0x2fbf68, Func Offset: 0x17d8
	// Line 3045, Address: 0x2fbf78, Func Offset: 0x17e8
	// Line 3160, Address: 0x2fbf80, Func Offset: 0x17f0
	// Line 3045, Address: 0x2fbf94, Func Offset: 0x1804
	// Line 3160, Address: 0x2fbf98, Func Offset: 0x1808
	// Line 3045, Address: 0x2fbfa8, Func Offset: 0x1818
	// Line 3160, Address: 0x2fbfc4, Func Offset: 0x1834
	// Line 3045, Address: 0x2fbfd0, Func Offset: 0x1840
	// Line 3160, Address: 0x2fbfd4, Func Offset: 0x1844
	// Line 3045, Address: 0x2fbfdc, Func Offset: 0x184c
	// Line 3160, Address: 0x2fbfe0, Func Offset: 0x1850
	// Line 3045, Address: 0x2fbfe8, Func Offset: 0x1858
	// Line 3160, Address: 0x2fbff8, Func Offset: 0x1868
	// Line 3045, Address: 0x2fc008, Func Offset: 0x1878
	// Line 3160, Address: 0x2fc00c, Func Offset: 0x187c
	// Line 3045, Address: 0x2fc010, Func Offset: 0x1880
	// Line 3160, Address: 0x2fc014, Func Offset: 0x1884
	// Line 3045, Address: 0x2fc02c, Func Offset: 0x189c
	// Line 3160, Address: 0x2fc030, Func Offset: 0x18a0
	// Line 3045, Address: 0x2fc040, Func Offset: 0x18b0
	// Line 3160, Address: 0x2fc048, Func Offset: 0x18b8
	// Line 3045, Address: 0x2fc05c, Func Offset: 0x18cc
	// Line 3160, Address: 0x2fc060, Func Offset: 0x18d0
	// Line 3045, Address: 0x2fc070, Func Offset: 0x18e0
	// Line 3160, Address: 0x2fc08c, Func Offset: 0x18fc
	// Line 3047, Address: 0x2fc098, Func Offset: 0x1908
	// Line 3160, Address: 0x2fc09c, Func Offset: 0x190c
	// Line 3049, Address: 0x2fc0a4, Func Offset: 0x1914
	// Line 3051, Address: 0x2fc0a8, Func Offset: 0x1918
	// Line 3059, Address: 0x2fc0b0, Func Offset: 0x1920
	// Line 3160, Address: 0x2fc0b4, Func Offset: 0x1924
	// Line 3061, Address: 0x2fc0b8, Func Offset: 0x1928
	// Line 3075, Address: 0x2fc0c0, Func Offset: 0x1930
	// Line 3160, Address: 0x2fc0c4, Func Offset: 0x1934
	// Line 3078, Address: 0x2fc0cc, Func Offset: 0x193c
	// Line 3160, Address: 0x2fc0d4, Func Offset: 0x1944
	// Line 3099, Address: 0x2fc0e0, Func Offset: 0x1950
	// Line 3160, Address: 0x2fc0e4, Func Offset: 0x1954
	// Line 3099, Address: 0x2fc0f0, Func Offset: 0x1960
	// Line 3160, Address: 0x2fc0f4, Func Offset: 0x1964
	// Line 3099, Address: 0x2fc0fc, Func Offset: 0x196c
	// Line 3160, Address: 0x2fc100, Func Offset: 0x1970
	// Line 3099, Address: 0x2fc108, Func Offset: 0x1978
	// Line 3160, Address: 0x2fc118, Func Offset: 0x1988
	// Line 3100, Address: 0x2fc120, Func Offset: 0x1990
	// Line 3160, Address: 0x2fc124, Func Offset: 0x1994
	// Line 3102, Address: 0x2fc12c, Func Offset: 0x199c
	// Line 3160, Address: 0x2fc130, Func Offset: 0x19a0
	// Line 3102, Address: 0x2fc138, Func Offset: 0x19a8
	// Line 3160, Address: 0x2fc13c, Func Offset: 0x19ac
	// Line 3102, Address: 0x2fc144, Func Offset: 0x19b4
	// Line 3160, Address: 0x2fc148, Func Offset: 0x19b8
	// Line 3102, Address: 0x2fc150, Func Offset: 0x19c0
	// Line 3160, Address: 0x2fc154, Func Offset: 0x19c4
	// Line 3102, Address: 0x2fc15c, Func Offset: 0x19cc
	// Line 3160, Address: 0x2fc160, Func Offset: 0x19d0
	// Line 3102, Address: 0x2fc168, Func Offset: 0x19d8
	// Line 3160, Address: 0x2fc16c, Func Offset: 0x19dc
	// Line 3102, Address: 0x2fc174, Func Offset: 0x19e4
	// Line 3106, Address: 0x2fc17c, Func Offset: 0x19ec
	// Line 3105, Address: 0x2fc180, Func Offset: 0x19f0
	// Line 3107, Address: 0x2fc184, Func Offset: 0x19f4
	// Line 3109, Address: 0x2fc18c, Func Offset: 0x19fc
	// Line 3114, Address: 0x2fc190, Func Offset: 0x1a00
	// Line 3117, Address: 0x2fc198, Func Offset: 0x1a08
	// Line 3118, Address: 0x2fc19c, Func Offset: 0x1a0c
	// Line 3124, Address: 0x2fc1a4, Func Offset: 0x1a14
	// Line 3123, Address: 0x2fc1a8, Func Offset: 0x1a18
	// Line 3131, Address: 0x2fc1ac, Func Offset: 0x1a1c
	// Line 3134, Address: 0x2fc1b4, Func Offset: 0x1a24
	// Line 3016, Address: 0x2fc1c0, Func Offset: 0x1a30
	// Line 3160, Address: 0x2fc1d8, Func Offset: 0x1a48
	// Line 3016, Address: 0x2fc1dc, Func Offset: 0x1a4c
	// Line 3160, Address: 0x2fc1e0, Func Offset: 0x1a50
	// Line 3016, Address: 0x2fc1f0, Func Offset: 0x1a60
	// Line 3160, Address: 0x2fc1f4, Func Offset: 0x1a64
	// Line 3016, Address: 0x2fc200, Func Offset: 0x1a70
	// Line 3160, Address: 0x2fc228, Func Offset: 0x1a98
	// Line 3016, Address: 0x2fc22c, Func Offset: 0x1a9c
	// Line 3160, Address: 0x2fc230, Func Offset: 0x1aa0
	// Line 3016, Address: 0x2fc240, Func Offset: 0x1ab0
	// Line 3160, Address: 0x2fc244, Func Offset: 0x1ab4
	// Line 3016, Address: 0x2fc250, Func Offset: 0x1ac0
	// Line 3045, Address: 0x2fc260, Func Offset: 0x1ad0
	// Line 3160, Address: 0x2fc278, Func Offset: 0x1ae8
	// Line 3045, Address: 0x2fc27c, Func Offset: 0x1aec
	// Line 3160, Address: 0x2fc280, Func Offset: 0x1af0
	// Line 3045, Address: 0x2fc290, Func Offset: 0x1b00
	// Line 3160, Address: 0x2fc294, Func Offset: 0x1b04
	// Line 3045, Address: 0x2fc2a0, Func Offset: 0x1b10
	// Line 3068, Address: 0x2fc2b0, Func Offset: 0x1b20
	// Line 3067, Address: 0x2fc2b4, Func Offset: 0x1b24
	// Line 3069, Address: 0x2fc2b8, Func Offset: 0x1b28
	// Line 3099, Address: 0x2fc2c0, Func Offset: 0x1b30
	// Line 3160, Address: 0x2fc2c4, Func Offset: 0x1b34
	// Line 3099, Address: 0x2fc2cc, Func Offset: 0x1b3c
	// Line 3160, Address: 0x2fc2d0, Func Offset: 0x1b40
	// Line 3099, Address: 0x2fc2d8, Func Offset: 0x1b48
	// Line 3160, Address: 0x2fc2dc, Func Offset: 0x1b4c
	// Line 3099, Address: 0x2fc2f0, Func Offset: 0x1b60
	// Line 3160, Address: 0x2fc2f4, Func Offset: 0x1b64
	// Line 3099, Address: 0x2fc308, Func Offset: 0x1b78
	// Line 3160, Address: 0x2fc30c, Func Offset: 0x1b7c
	// Line 3099, Address: 0x2fc31c, Func Offset: 0x1b8c
	// Line 3160, Address: 0x2fc328, Func Offset: 0x1b98
	// Line 3099, Address: 0x2fc33c, Func Offset: 0x1bac
	// Line 3160, Address: 0x2fc340, Func Offset: 0x1bb0
	// Line 3099, Address: 0x2fc350, Func Offset: 0x1bc0
	// Line 3160, Address: 0x2fc370, Func Offset: 0x1be0
	// Line 3099, Address: 0x2fc384, Func Offset: 0x1bf4
	// Line 3160, Address: 0x2fc388, Func Offset: 0x1bf8
	// Line 3099, Address: 0x2fc39c, Func Offset: 0x1c0c
	// Line 3160, Address: 0x2fc3a4, Func Offset: 0x1c14
	// Line 3099, Address: 0x2fc3b4, Func Offset: 0x1c24
	// Line 3160, Address: 0x2fc3c0, Func Offset: 0x1c30
	// Line 3099, Address: 0x2fc3d4, Func Offset: 0x1c44
	// Line 3160, Address: 0x2fc3d8, Func Offset: 0x1c48
	// Line 3099, Address: 0x2fc3e8, Func Offset: 0x1c58
	// Line 3160, Address: 0x2fc408, Func Offset: 0x1c78
	// Line 3099, Address: 0x2fc41c, Func Offset: 0x1c8c
	// Line 3160, Address: 0x2fc420, Func Offset: 0x1c90
	// Line 3099, Address: 0x2fc434, Func Offset: 0x1ca4
	// Line 3160, Address: 0x2fc43c, Func Offset: 0x1cac
	// Line 3099, Address: 0x2fc44c, Func Offset: 0x1cbc
	// Line 3160, Address: 0x2fc458, Func Offset: 0x1cc8
	// Line 3099, Address: 0x2fc46c, Func Offset: 0x1cdc
	// Line 3160, Address: 0x2fc470, Func Offset: 0x1ce0
	// Line 3099, Address: 0x2fc480, Func Offset: 0x1cf0
	// Line 3160, Address: 0x2fc4a0, Func Offset: 0x1d10
	// Line 3099, Address: 0x2fc4a8, Func Offset: 0x1d18
	// Line 3160, Address: 0x2fc4ac, Func Offset: 0x1d1c
	// Line 3099, Address: 0x2fc4bc, Func Offset: 0x1d2c
	// Line 3160, Address: 0x2fc4c0, Func Offset: 0x1d30
	// Line 3099, Address: 0x2fc4d8, Func Offset: 0x1d48
	// Line 3160, Address: 0x2fc4dc, Func Offset: 0x1d4c
	// Line 3099, Address: 0x2fc4f0, Func Offset: 0x1d60
	// Line 3160, Address: 0x2fc4f4, Func Offset: 0x1d64
	// Line 3099, Address: 0x2fc504, Func Offset: 0x1d74
	// Line 3160, Address: 0x2fc510, Func Offset: 0x1d80
	// Line 3099, Address: 0x2fc524, Func Offset: 0x1d94
	// Line 3160, Address: 0x2fc528, Func Offset: 0x1d98
	// Line 3099, Address: 0x2fc538, Func Offset: 0x1da8
	// Line 3160, Address: 0x2fc558, Func Offset: 0x1dc8
	// Line 3099, Address: 0x2fc56c, Func Offset: 0x1ddc
	// Line 3160, Address: 0x2fc570, Func Offset: 0x1de0
	// Line 3099, Address: 0x2fc584, Func Offset: 0x1df4
	// Line 3160, Address: 0x2fc58c, Func Offset: 0x1dfc
	// Line 3099, Address: 0x2fc59c, Func Offset: 0x1e0c
	// Line 3160, Address: 0x2fc5a8, Func Offset: 0x1e18
	// Line 3099, Address: 0x2fc5bc, Func Offset: 0x1e2c
	// Line 3160, Address: 0x2fc5c0, Func Offset: 0x1e30
	// Line 3099, Address: 0x2fc5d0, Func Offset: 0x1e40
	// Line 3160, Address: 0x2fc5f0, Func Offset: 0x1e60
	// Line 3099, Address: 0x2fc5fc, Func Offset: 0x1e6c
	// Line 3160, Address: 0x2fc600, Func Offset: 0x1e70
	// Line 3099, Address: 0x2fc608, Func Offset: 0x1e78
	// Line 3160, Address: 0x2fc60c, Func Offset: 0x1e7c
	// Line 3099, Address: 0x2fc614, Func Offset: 0x1e84
	// Line 3160, Address: 0x2fc618, Func Offset: 0x1e88
	// Line 3099, Address: 0x2fc628, Func Offset: 0x1e98
	// Line 3151, Address: 0x2fc658, Func Offset: 0x1ec8
	// Line 3156, Address: 0x2fc660, Func Offset: 0x1ed0
	// Line 3157, Address: 0x2fc668, Func Offset: 0x1ed8
	// Line 3162, Address: 0x2fc670, Func Offset: 0x1ee0
	// Func End, Address: 0x2fc6a0, Func Offset: 0x1f10
}

// zSaveLoad_BuildName__FPcUii
// Start address: 0x2fc6a0
void zSaveLoad_BuildName(int8* name_txt, uint32 max_len, int32 idx)
{
	int8 desired[128];
	int8 current_name[128];
	int8* damaged_save_name;
	int32 counter;
	int32 i;
	// Line 2721, Address: 0x2fc6a0, Func Offset: 0
	// Line 2728, Address: 0x2fc6cc, Func Offset: 0x2c
	// Line 2721, Address: 0x2fc6d0, Func Offset: 0x30
	// Line 2728, Address: 0x2fc6d4, Func Offset: 0x34
	// Line 2730, Address: 0x2fc6e0, Func Offset: 0x40
	// Line 2732, Address: 0x2fc6fc, Func Offset: 0x5c
	// Line 2733, Address: 0x2fc700, Func Offset: 0x60
	// Line 2746, Address: 0x2fc70c, Func Offset: 0x6c
	// Line 2750, Address: 0x2fc714, Func Offset: 0x74
	// Line 2751, Address: 0x2fc728, Func Offset: 0x88
	// Line 2758, Address: 0x2fc730, Func Offset: 0x90
	// Line 2737, Address: 0x2fc764, Func Offset: 0xc4
	// Line 2758, Address: 0x2fc768, Func Offset: 0xc8
	// Line 2756, Address: 0x2fc7a8, Func Offset: 0x108
	// Line 2758, Address: 0x2fc7ac, Func Offset: 0x10c
	// Func End, Address: 0x2fc7e4, Func Offset: 0x144
}

// BuildIt__FPci
// Start address: 0x2fc7f0
void BuildIt(int8* build_txt, int32 i)
{
	int8 date1[32];
	int8 date2[32];
	int8 biggerbuf[256];
	int8* damaged_save_name;
	// Line 2640, Address: 0x2fc7f0, Func Offset: 0
	// Line 2641, Address: 0x2fc7f4, Func Offset: 0x4
	// Line 2640, Address: 0x2fc7f8, Func Offset: 0x8
	// Line 2641, Address: 0x2fc7fc, Func Offset: 0xc
	// Line 2640, Address: 0x2fc800, Func Offset: 0x10
	// Line 2641, Address: 0x2fc814, Func Offset: 0x24
	// Line 2643, Address: 0x2fc838, Func Offset: 0x48
	// Line 2646, Address: 0x2fc860, Func Offset: 0x70
	// Line 2647, Address: 0x2fc878, Func Offset: 0x88
	// Line 2646, Address: 0x2fc87c, Func Offset: 0x8c
	// Line 2647, Address: 0x2fc880, Func Offset: 0x90
	// Line 2648, Address: 0x2fc894, Func Offset: 0xa4
	// Line 2660, Address: 0x2fc8b8, Func Offset: 0xc8
	// Line 2648, Address: 0x2fc8c0, Func Offset: 0xd0
	// Line 2660, Address: 0x2fc8c8, Func Offset: 0xd8
	// Line 2648, Address: 0x2fc8d0, Func Offset: 0xe0
	// Line 2660, Address: 0x2fc8d4, Func Offset: 0xe4
	// Line 2662, Address: 0x2fc8e8, Func Offset: 0xf8
	// Line 2663, Address: 0x2fc8f4, Func Offset: 0x104
	// Line 2668, Address: 0x2fc8fc, Func Offset: 0x10c
	// Line 2670, Address: 0x2fc908, Func Offset: 0x118
	// Line 2669, Address: 0x2fc90c, Func Offset: 0x11c
	// Line 2670, Address: 0x2fc910, Func Offset: 0x120
	// Line 2669, Address: 0x2fc91c, Func Offset: 0x12c
	// Line 2670, Address: 0x2fc920, Func Offset: 0x130
	// Line 2671, Address: 0x2fc944, Func Offset: 0x154
	// Line 2692, Address: 0x2fc954, Func Offset: 0x164
	// Line 2696, Address: 0x2fc980, Func Offset: 0x190
	// Line 2714, Address: 0x2fc990, Func Offset: 0x1a0
	// Line 2717, Address: 0x2fc994, Func Offset: 0x1a4
	// Func End, Address: 0x2fc9b0, Func Offset: 0x1c0
}

// zSaveLoad_CardPick__Fi
// Start address: 0x2fc9b0
int32 zSaveLoad_CardPick(int32 mode)
{
	int32 done;
	uint8 formatDone;
	// Line 2337, Address: 0x2fc9b0, Func Offset: 0
	// Line 2422, Address: 0x2fc9b4, Func Offset: 0x4
	// Line 2337, Address: 0x2fc9b8, Func Offset: 0x8
	// Line 2427, Address: 0x2fc9cc, Func Offset: 0x1c
	// Line 2421, Address: 0x2fc9d0, Func Offset: 0x20
	// Line 2422, Address: 0x2fc9d4, Func Offset: 0x24
	// Line 2424, Address: 0x2fc9d8, Func Offset: 0x28
	// Line 2427, Address: 0x2fc9dc, Func Offset: 0x2c
	// Line 2428, Address: 0x2fca94, Func Offset: 0xe4
	// Line 2579, Address: 0x2fcb4c, Func Offset: 0x19c
	// Line 2439, Address: 0x2fcb68, Func Offset: 0x1b8
	// Line 2579, Address: 0x2fcb6c, Func Offset: 0x1bc
	// Line 2439, Address: 0x2fcb74, Func Offset: 0x1c4
	// Line 2579, Address: 0x2fcb84, Func Offset: 0x1d4
	// Line 2439, Address: 0x2fcb94, Func Offset: 0x1e4
	// Line 2579, Address: 0x2fcb98, Func Offset: 0x1e8
	// Line 2439, Address: 0x2fcb9c, Func Offset: 0x1ec
	// Line 2579, Address: 0x2fcba0, Func Offset: 0x1f0
	// Line 2439, Address: 0x2fcbb8, Func Offset: 0x208
	// Line 2579, Address: 0x2fcbbc, Func Offset: 0x20c
	// Line 2439, Address: 0x2fcbcc, Func Offset: 0x21c
	// Line 2579, Address: 0x2fcbd4, Func Offset: 0x224
	// Line 2439, Address: 0x2fcbe8, Func Offset: 0x238
	// Line 2579, Address: 0x2fcbf0, Func Offset: 0x240
	// Line 2439, Address: 0x2fcc00, Func Offset: 0x250
	// Line 2579, Address: 0x2fcc1c, Func Offset: 0x26c
	// Line 2442, Address: 0x2fcc38, Func Offset: 0x288
	// Line 2579, Address: 0x2fcc3c, Func Offset: 0x28c
	// Line 2442, Address: 0x2fcc44, Func Offset: 0x294
	// Line 2443, Address: 0x2fcc50, Func Offset: 0x2a0
	// Line 2579, Address: 0x2fcc54, Func Offset: 0x2a4
	// Line 2443, Address: 0x2fcc5c, Func Offset: 0x2ac
	// Line 2579, Address: 0x2fcc60, Func Offset: 0x2b0
	// Line 2443, Address: 0x2fcc68, Func Offset: 0x2b8
	// Line 2579, Address: 0x2fcc6c, Func Offset: 0x2bc
	// Line 2443, Address: 0x2fcc74, Func Offset: 0x2c4
	// Line 2579, Address: 0x2fcc7c, Func Offset: 0x2cc
	// Line 2448, Address: 0x2fcc80, Func Offset: 0x2d0
	// Line 2449, Address: 0x2fcc84, Func Offset: 0x2d4
	// Line 2579, Address: 0x2fcc8c, Func Offset: 0x2dc
	// Line 2453, Address: 0x2fcc90, Func Offset: 0x2e0
	// Line 2455, Address: 0x2fcc98, Func Offset: 0x2e8
	// Line 2579, Address: 0x2fcc9c, Func Offset: 0x2ec
	// Line 2455, Address: 0x2fcca4, Func Offset: 0x2f4
	// Line 2579, Address: 0x2fccb4, Func Offset: 0x304
	// Line 2455, Address: 0x2fccc4, Func Offset: 0x314
	// Line 2579, Address: 0x2fccc8, Func Offset: 0x318
	// Line 2455, Address: 0x2fcccc, Func Offset: 0x31c
	// Line 2579, Address: 0x2fccd0, Func Offset: 0x320
	// Line 2455, Address: 0x2fcce8, Func Offset: 0x338
	// Line 2579, Address: 0x2fccec, Func Offset: 0x33c
	// Line 2455, Address: 0x2fccfc, Func Offset: 0x34c
	// Line 2579, Address: 0x2fcd04, Func Offset: 0x354
	// Line 2455, Address: 0x2fcd18, Func Offset: 0x368
	// Line 2579, Address: 0x2fcd20, Func Offset: 0x370
	// Line 2455, Address: 0x2fcd30, Func Offset: 0x380
	// Line 2579, Address: 0x2fcd4c, Func Offset: 0x39c
	// Line 2455, Address: 0x2fcd54, Func Offset: 0x3a4
	// Line 2579, Address: 0x2fcd58, Func Offset: 0x3a8
	// Line 2455, Address: 0x2fcd68, Func Offset: 0x3b8
	// Line 2579, Address: 0x2fcd6c, Func Offset: 0x3bc
	// Line 2455, Address: 0x2fcd78, Func Offset: 0x3c8
	// Line 2579, Address: 0x2fcd7c, Func Offset: 0x3cc
	// Line 2455, Address: 0x2fcd84, Func Offset: 0x3d4
	// Line 2579, Address: 0x2fcd94, Func Offset: 0x3e4
	// Line 2455, Address: 0x2fcda4, Func Offset: 0x3f4
	// Line 2579, Address: 0x2fcda8, Func Offset: 0x3f8
	// Line 2455, Address: 0x2fcdac, Func Offset: 0x3fc
	// Line 2579, Address: 0x2fcdb0, Func Offset: 0x400
	// Line 2455, Address: 0x2fcdc8, Func Offset: 0x418
	// Line 2579, Address: 0x2fcdcc, Func Offset: 0x41c
	// Line 2455, Address: 0x2fcddc, Func Offset: 0x42c
	// Line 2579, Address: 0x2fcde4, Func Offset: 0x434
	// Line 2455, Address: 0x2fcdf8, Func Offset: 0x448
	// Line 2579, Address: 0x2fce00, Func Offset: 0x450
	// Line 2455, Address: 0x2fce10, Func Offset: 0x460
	// Line 2579, Address: 0x2fce2c, Func Offset: 0x47c
	// Line 2461, Address: 0x2fce34, Func Offset: 0x484
	// Line 2464, Address: 0x2fce38, Func Offset: 0x488
	// Line 2468, Address: 0x2fce40, Func Offset: 0x490
	// Line 2579, Address: 0x2fce44, Func Offset: 0x494
	// Line 2517, Address: 0x2fce4c, Func Offset: 0x49c
	// Line 2579, Address: 0x2fce50, Func Offset: 0x4a0
	// Line 2517, Address: 0x2fce60, Func Offset: 0x4b0
	// Line 2579, Address: 0x2fce64, Func Offset: 0x4b4
	// Line 2517, Address: 0x2fce6c, Func Offset: 0x4bc
	// Line 2579, Address: 0x2fce74, Func Offset: 0x4c4
	// Line 2517, Address: 0x2fce7c, Func Offset: 0x4cc
	// Line 2579, Address: 0x2fce80, Func Offset: 0x4d0
	// Line 2517, Address: 0x2fce98, Func Offset: 0x4e8
	// Line 2579, Address: 0x2fcea4, Func Offset: 0x4f4
	// Line 2517, Address: 0x2fceac, Func Offset: 0x4fc
	// Line 2579, Address: 0x2fcebc, Func Offset: 0x50c
	// Line 2517, Address: 0x2fcecc, Func Offset: 0x51c
	// Line 2579, Address: 0x2fced0, Func Offset: 0x520
	// Line 2517, Address: 0x2fced4, Func Offset: 0x524
	// Line 2579, Address: 0x2fced8, Func Offset: 0x528
	// Line 2517, Address: 0x2fcef0, Func Offset: 0x540
	// Line 2579, Address: 0x2fcef4, Func Offset: 0x544
	// Line 2517, Address: 0x2fcf04, Func Offset: 0x554
	// Line 2579, Address: 0x2fcf0c, Func Offset: 0x55c
	// Line 2517, Address: 0x2fcf20, Func Offset: 0x570
	// Line 2579, Address: 0x2fcf28, Func Offset: 0x578
	// Line 2517, Address: 0x2fcf38, Func Offset: 0x588
	// Line 2579, Address: 0x2fcf54, Func Offset: 0x5a4
	// Line 2517, Address: 0x2fcf68, Func Offset: 0x5b8
	// Line 2579, Address: 0x2fcf6c, Func Offset: 0x5bc
	// Line 2517, Address: 0x2fcf80, Func Offset: 0x5d0
	// Line 2579, Address: 0x2fcf84, Func Offset: 0x5d4
	// Line 2517, Address: 0x2fcf94, Func Offset: 0x5e4
	// Line 2579, Address: 0x2fcf9c, Func Offset: 0x5ec
	// Line 2517, Address: 0x2fcfb0, Func Offset: 0x600
	// Line 2579, Address: 0x2fcfb8, Func Offset: 0x608
	// Line 2517, Address: 0x2fcfc8, Func Offset: 0x618
	// Line 2579, Address: 0x2fcfe4, Func Offset: 0x634
	// Line 2517, Address: 0x2fcff8, Func Offset: 0x648
	// Line 2579, Address: 0x2fcffc, Func Offset: 0x64c
	// Line 2517, Address: 0x2fd010, Func Offset: 0x660
	// Line 2579, Address: 0x2fd014, Func Offset: 0x664
	// Line 2517, Address: 0x2fd024, Func Offset: 0x674
	// Line 2579, Address: 0x2fd02c, Func Offset: 0x67c
	// Line 2517, Address: 0x2fd040, Func Offset: 0x690
	// Line 2579, Address: 0x2fd048, Func Offset: 0x698
	// Line 2517, Address: 0x2fd058, Func Offset: 0x6a8
	// Line 2579, Address: 0x2fd074, Func Offset: 0x6c4
	// Line 2517, Address: 0x2fd07c, Func Offset: 0x6cc
	// Line 2579, Address: 0x2fd080, Func Offset: 0x6d0
	// Line 2517, Address: 0x2fd090, Func Offset: 0x6e0
	// Line 2579, Address: 0x2fd09c, Func Offset: 0x6ec
	// Line 2517, Address: 0x2fd0a4, Func Offset: 0x6f4
	// Line 2579, Address: 0x2fd0a8, Func Offset: 0x6f8
	// Line 2517, Address: 0x2fd0ac, Func Offset: 0x6fc
	// Line 2579, Address: 0x2fd0b0, Func Offset: 0x700
	// Line 2517, Address: 0x2fd0c4, Func Offset: 0x714
	// Line 2579, Address: 0x2fd0c8, Func Offset: 0x718
	// Line 2517, Address: 0x2fd0dc, Func Offset: 0x72c
	// Line 2579, Address: 0x2fd0e0, Func Offset: 0x730
	// Line 2517, Address: 0x2fd0f0, Func Offset: 0x740
	// Line 2579, Address: 0x2fd0f8, Func Offset: 0x748
	// Line 2517, Address: 0x2fd10c, Func Offset: 0x75c
	// Line 2579, Address: 0x2fd110, Func Offset: 0x760
	// Line 2517, Address: 0x2fd120, Func Offset: 0x770
	// Line 2579, Address: 0x2fd13c, Func Offset: 0x78c
	// Line 2517, Address: 0x2fd148, Func Offset: 0x798
	// Line 2579, Address: 0x2fd14c, Func Offset: 0x79c
	// Line 2517, Address: 0x2fd154, Func Offset: 0x7a4
	// Line 2579, Address: 0x2fd158, Func Offset: 0x7a8
	// Line 2517, Address: 0x2fd160, Func Offset: 0x7b0
	// Line 2579, Address: 0x2fd170, Func Offset: 0x7c0
	// Line 2517, Address: 0x2fd180, Func Offset: 0x7d0
	// Line 2579, Address: 0x2fd184, Func Offset: 0x7d4
	// Line 2517, Address: 0x2fd188, Func Offset: 0x7d8
	// Line 2579, Address: 0x2fd18c, Func Offset: 0x7dc
	// Line 2517, Address: 0x2fd1a4, Func Offset: 0x7f4
	// Line 2579, Address: 0x2fd1a8, Func Offset: 0x7f8
	// Line 2517, Address: 0x2fd1b8, Func Offset: 0x808
	// Line 2579, Address: 0x2fd1c0, Func Offset: 0x810
	// Line 2517, Address: 0x2fd1d4, Func Offset: 0x824
	// Line 2579, Address: 0x2fd1d8, Func Offset: 0x828
	// Line 2517, Address: 0x2fd1e8, Func Offset: 0x838
	// Line 2579, Address: 0x2fd204, Func Offset: 0x854
	// Line 2517, Address: 0x2fd210, Func Offset: 0x860
	// Line 2579, Address: 0x2fd214, Func Offset: 0x864
	// Line 2517, Address: 0x2fd21c, Func Offset: 0x86c
	// Line 2579, Address: 0x2fd220, Func Offset: 0x870
	// Line 2517, Address: 0x2fd228, Func Offset: 0x878
	// Line 2579, Address: 0x2fd22c, Func Offset: 0x87c
	// Line 2517, Address: 0x2fd234, Func Offset: 0x884
	// Line 2579, Address: 0x2fd240, Func Offset: 0x890
	// Line 2517, Address: 0x2fd248, Func Offset: 0x898
	// Line 2579, Address: 0x2fd24c, Func Offset: 0x89c
	// Line 2517, Address: 0x2fd254, Func Offset: 0x8a4
	// Line 2579, Address: 0x2fd25c, Func Offset: 0x8ac
	// Line 2517, Address: 0x2fd264, Func Offset: 0x8b4
	// Line 2579, Address: 0x2fd268, Func Offset: 0x8b8
	// Line 2517, Address: 0x2fd280, Func Offset: 0x8d0
	// Line 2579, Address: 0x2fd28c, Func Offset: 0x8dc
	// Line 2517, Address: 0x2fd294, Func Offset: 0x8e4
	// Line 2579, Address: 0x2fd2a4, Func Offset: 0x8f4
	// Line 2517, Address: 0x2fd2b4, Func Offset: 0x904
	// Line 2579, Address: 0x2fd2b8, Func Offset: 0x908
	// Line 2517, Address: 0x2fd2bc, Func Offset: 0x90c
	// Line 2579, Address: 0x2fd2c0, Func Offset: 0x910
	// Line 2517, Address: 0x2fd2d8, Func Offset: 0x928
	// Line 2579, Address: 0x2fd2dc, Func Offset: 0x92c
	// Line 2517, Address: 0x2fd2ec, Func Offset: 0x93c
	// Line 2579, Address: 0x2fd2f4, Func Offset: 0x944
	// Line 2517, Address: 0x2fd308, Func Offset: 0x958
	// Line 2579, Address: 0x2fd310, Func Offset: 0x960
	// Line 2517, Address: 0x2fd320, Func Offset: 0x970
	// Line 2579, Address: 0x2fd33c, Func Offset: 0x98c
	// Line 2517, Address: 0x2fd350, Func Offset: 0x9a0
	// Line 2579, Address: 0x2fd354, Func Offset: 0x9a4
	// Line 2517, Address: 0x2fd368, Func Offset: 0x9b8
	// Line 2579, Address: 0x2fd36c, Func Offset: 0x9bc
	// Line 2517, Address: 0x2fd37c, Func Offset: 0x9cc
	// Line 2579, Address: 0x2fd384, Func Offset: 0x9d4
	// Line 2517, Address: 0x2fd398, Func Offset: 0x9e8
	// Line 2579, Address: 0x2fd3a0, Func Offset: 0x9f0
	// Line 2517, Address: 0x2fd3b0, Func Offset: 0xa00
	// Line 2579, Address: 0x2fd3cc, Func Offset: 0xa1c
	// Line 2517, Address: 0x2fd3e0, Func Offset: 0xa30
	// Line 2579, Address: 0x2fd3e4, Func Offset: 0xa34
	// Line 2517, Address: 0x2fd3f8, Func Offset: 0xa48
	// Line 2579, Address: 0x2fd3fc, Func Offset: 0xa4c
	// Line 2517, Address: 0x2fd40c, Func Offset: 0xa5c
	// Line 2579, Address: 0x2fd414, Func Offset: 0xa64
	// Line 2517, Address: 0x2fd428, Func Offset: 0xa78
	// Line 2579, Address: 0x2fd430, Func Offset: 0xa80
	// Line 2517, Address: 0x2fd440, Func Offset: 0xa90
	// Line 2579, Address: 0x2fd45c, Func Offset: 0xaac
	// Line 2517, Address: 0x2fd464, Func Offset: 0xab4
	// Line 2579, Address: 0x2fd468, Func Offset: 0xab8
	// Line 2517, Address: 0x2fd478, Func Offset: 0xac8
	// Line 2579, Address: 0x2fd484, Func Offset: 0xad4
	// Line 2517, Address: 0x2fd48c, Func Offset: 0xadc
	// Line 2579, Address: 0x2fd490, Func Offset: 0xae0
	// Line 2517, Address: 0x2fd494, Func Offset: 0xae4
	// Line 2579, Address: 0x2fd498, Func Offset: 0xae8
	// Line 2517, Address: 0x2fd4ac, Func Offset: 0xafc
	// Line 2579, Address: 0x2fd4b0, Func Offset: 0xb00
	// Line 2517, Address: 0x2fd4c4, Func Offset: 0xb14
	// Line 2579, Address: 0x2fd4c8, Func Offset: 0xb18
	// Line 2517, Address: 0x2fd4d8, Func Offset: 0xb28
	// Line 2579, Address: 0x2fd4e0, Func Offset: 0xb30
	// Line 2517, Address: 0x2fd4f4, Func Offset: 0xb44
	// Line 2579, Address: 0x2fd4f8, Func Offset: 0xb48
	// Line 2517, Address: 0x2fd508, Func Offset: 0xb58
	// Line 2579, Address: 0x2fd524, Func Offset: 0xb74
	// Line 2517, Address: 0x2fd52c, Func Offset: 0xb7c
	// Line 2579, Address: 0x2fd530, Func Offset: 0xb80
	// Line 2517, Address: 0x2fd538, Func Offset: 0xb88
	// Line 2579, Address: 0x2fd548, Func Offset: 0xb98
	// Line 2517, Address: 0x2fd558, Func Offset: 0xba8
	// Line 2579, Address: 0x2fd55c, Func Offset: 0xbac
	// Line 2517, Address: 0x2fd560, Func Offset: 0xbb0
	// Line 2579, Address: 0x2fd564, Func Offset: 0xbb4
	// Line 2517, Address: 0x2fd57c, Func Offset: 0xbcc
	// Line 2579, Address: 0x2fd580, Func Offset: 0xbd0
	// Line 2517, Address: 0x2fd590, Func Offset: 0xbe0
	// Line 2579, Address: 0x2fd598, Func Offset: 0xbe8
	// Line 2517, Address: 0x2fd5ac, Func Offset: 0xbfc
	// Line 2579, Address: 0x2fd5b0, Func Offset: 0xc00
	// Line 2517, Address: 0x2fd5c0, Func Offset: 0xc10
	// Line 2579, Address: 0x2fd5dc, Func Offset: 0xc2c
	// Line 2517, Address: 0x2fd5e8, Func Offset: 0xc38
	// Line 2579, Address: 0x2fd5ec, Func Offset: 0xc3c
	// Line 2517, Address: 0x2fd5f4, Func Offset: 0xc44
	// Line 2579, Address: 0x2fd5f8, Func Offset: 0xc48
	// Line 2517, Address: 0x2fd600, Func Offset: 0xc50
	// Line 2579, Address: 0x2fd604, Func Offset: 0xc54
	// Line 2518, Address: 0x2fd614, Func Offset: 0xc64
	// Line 2579, Address: 0x2fd618, Func Offset: 0xc68
	// Line 2518, Address: 0x2fd620, Func Offset: 0xc70
	// Line 2579, Address: 0x2fd624, Func Offset: 0xc74
	// Line 2518, Address: 0x2fd62c, Func Offset: 0xc7c
	// Line 2579, Address: 0x2fd630, Func Offset: 0xc80
	// Line 2518, Address: 0x2fd638, Func Offset: 0xc88
	// Line 2579, Address: 0x2fd63c, Func Offset: 0xc8c
	// Line 2518, Address: 0x2fd644, Func Offset: 0xc94
	// Line 2579, Address: 0x2fd648, Func Offset: 0xc98
	// Line 2518, Address: 0x2fd650, Func Offset: 0xca0
	// Line 2579, Address: 0x2fd658, Func Offset: 0xca8
	// Line 2524, Address: 0x2fd65c, Func Offset: 0xcac
	// Line 2528, Address: 0x2fd664, Func Offset: 0xcb4
	// Line 2579, Address: 0x2fd668, Func Offset: 0xcb8
	// Line 2531, Address: 0x2fd678, Func Offset: 0xcc8
	// Line 2579, Address: 0x2fd688, Func Offset: 0xcd8
	// Line 2531, Address: 0x2fd698, Func Offset: 0xce8
	// Line 2579, Address: 0x2fd69c, Func Offset: 0xcec
	// Line 2531, Address: 0x2fd6a0, Func Offset: 0xcf0
	// Line 2579, Address: 0x2fd6a4, Func Offset: 0xcf4
	// Line 2531, Address: 0x2fd6bc, Func Offset: 0xd0c
	// Line 2579, Address: 0x2fd6c0, Func Offset: 0xd10
	// Line 2531, Address: 0x2fd6d0, Func Offset: 0xd20
	// Line 2579, Address: 0x2fd6d8, Func Offset: 0xd28
	// Line 2531, Address: 0x2fd6ec, Func Offset: 0xd3c
	// Line 2579, Address: 0x2fd6f0, Func Offset: 0xd40
	// Line 2531, Address: 0x2fd700, Func Offset: 0xd50
	// Line 2579, Address: 0x2fd71c, Func Offset: 0xd6c
	// Line 2531, Address: 0x2fd730, Func Offset: 0xd80
	// Line 2579, Address: 0x2fd734, Func Offset: 0xd84
	// Line 2531, Address: 0x2fd748, Func Offset: 0xd98
	// Line 2579, Address: 0x2fd74c, Func Offset: 0xd9c
	// Line 2531, Address: 0x2fd75c, Func Offset: 0xdac
	// Line 2579, Address: 0x2fd764, Func Offset: 0xdb4
	// Line 2531, Address: 0x2fd778, Func Offset: 0xdc8
	// Line 2579, Address: 0x2fd780, Func Offset: 0xdd0
	// Line 2531, Address: 0x2fd790, Func Offset: 0xde0
	// Line 2579, Address: 0x2fd7ac, Func Offset: 0xdfc
	// Line 2531, Address: 0x2fd7c0, Func Offset: 0xe10
	// Line 2579, Address: 0x2fd7c4, Func Offset: 0xe14
	// Line 2531, Address: 0x2fd7d8, Func Offset: 0xe28
	// Line 2579, Address: 0x2fd7dc, Func Offset: 0xe2c
	// Line 2531, Address: 0x2fd7ec, Func Offset: 0xe3c
	// Line 2579, Address: 0x2fd7f4, Func Offset: 0xe44
	// Line 2531, Address: 0x2fd808, Func Offset: 0xe58
	// Line 2579, Address: 0x2fd810, Func Offset: 0xe60
	// Line 2531, Address: 0x2fd820, Func Offset: 0xe70
	// Line 2579, Address: 0x2fd83c, Func Offset: 0xe8c
	// Line 2531, Address: 0x2fd844, Func Offset: 0xe94
	// Line 2579, Address: 0x2fd848, Func Offset: 0xe98
	// Line 2531, Address: 0x2fd858, Func Offset: 0xea8
	// Line 2579, Address: 0x2fd864, Func Offset: 0xeb4
	// Line 2531, Address: 0x2fd86c, Func Offset: 0xebc
	// Line 2579, Address: 0x2fd870, Func Offset: 0xec0
	// Line 2531, Address: 0x2fd874, Func Offset: 0xec4
	// Line 2579, Address: 0x2fd878, Func Offset: 0xec8
	// Line 2531, Address: 0x2fd88c, Func Offset: 0xedc
	// Line 2579, Address: 0x2fd890, Func Offset: 0xee0
	// Line 2531, Address: 0x2fd8a4, Func Offset: 0xef4
	// Line 2579, Address: 0x2fd8a8, Func Offset: 0xef8
	// Line 2531, Address: 0x2fd8b8, Func Offset: 0xf08
	// Line 2579, Address: 0x2fd8c0, Func Offset: 0xf10
	// Line 2531, Address: 0x2fd8d4, Func Offset: 0xf24
	// Line 2579, Address: 0x2fd8d8, Func Offset: 0xf28
	// Line 2531, Address: 0x2fd8e8, Func Offset: 0xf38
	// Line 2579, Address: 0x2fd904, Func Offset: 0xf54
	// Line 2531, Address: 0x2fd910, Func Offset: 0xf60
	// Line 2579, Address: 0x2fd914, Func Offset: 0xf64
	// Line 2531, Address: 0x2fd91c, Func Offset: 0xf6c
	// Line 2579, Address: 0x2fd920, Func Offset: 0xf70
	// Line 2531, Address: 0x2fd928, Func Offset: 0xf78
	// Line 2579, Address: 0x2fd938, Func Offset: 0xf88
	// Line 2531, Address: 0x2fd948, Func Offset: 0xf98
	// Line 2579, Address: 0x2fd94c, Func Offset: 0xf9c
	// Line 2531, Address: 0x2fd950, Func Offset: 0xfa0
	// Line 2579, Address: 0x2fd954, Func Offset: 0xfa4
	// Line 2531, Address: 0x2fd96c, Func Offset: 0xfbc
	// Line 2579, Address: 0x2fd970, Func Offset: 0xfc0
	// Line 2531, Address: 0x2fd980, Func Offset: 0xfd0
	// Line 2579, Address: 0x2fd988, Func Offset: 0xfd8
	// Line 2531, Address: 0x2fd99c, Func Offset: 0xfec
	// Line 2579, Address: 0x2fd9a0, Func Offset: 0xff0
	// Line 2531, Address: 0x2fd9b0, Func Offset: 0x1000
	// Line 2579, Address: 0x2fd9cc, Func Offset: 0x101c
	// Line 2533, Address: 0x2fd9d8, Func Offset: 0x1028
	// Line 2579, Address: 0x2fd9dc, Func Offset: 0x102c
	// Line 2535, Address: 0x2fd9e4, Func Offset: 0x1034
	// Line 2536, Address: 0x2fd9e8, Func Offset: 0x1038
	// Line 2537, Address: 0x2fd9ec, Func Offset: 0x103c
	// Line 2541, Address: 0x2fd9f4, Func Offset: 0x1044
	// Line 2579, Address: 0x2fd9f8, Func Offset: 0x1048
	// Line 2545, Address: 0x2fd9fc, Func Offset: 0x104c
	// Line 2564, Address: 0x2fda04, Func Offset: 0x1054
	// Line 2563, Address: 0x2fda08, Func Offset: 0x1058
	// Line 2579, Address: 0x2fda0c, Func Offset: 0x105c
	// Line 2578, Address: 0x2fda18, Func Offset: 0x1068
	// Line 2579, Address: 0x2fda1c, Func Offset: 0x106c
	// Line 2572, Address: 0x2fda30, Func Offset: 0x1080
	// Line 2579, Address: 0x2fda38, Func Offset: 0x1088
	// Line 2586, Address: 0x2fda48, Func Offset: 0x1098
	// Line 2592, Address: 0x2fdb04, Func Offset: 0x1154
	// Line 2594, Address: 0x2fdb18, Func Offset: 0x1168
	// Line 2597, Address: 0x2fdb20, Func Offset: 0x1170
	// Line 2599, Address: 0x2fdb2c, Func Offset: 0x117c
	// Line 2603, Address: 0x2fdb38, Func Offset: 0x1188
	// Line 2427, Address: 0x2fdb58, Func Offset: 0x11a8
	// Line 2428, Address: 0x2fdb60, Func Offset: 0x11b0
	// Line 2439, Address: 0x2fdb68, Func Offset: 0x11b8
	// Line 2442, Address: 0x2fdb70, Func Offset: 0x11c0
	// Line 2603, Address: 0x2fdb78, Func Offset: 0x11c8
	// Line 2442, Address: 0x2fdb80, Func Offset: 0x11d0
	// Line 2603, Address: 0x2fdb84, Func Offset: 0x11d4
	// Line 2442, Address: 0x2fdb8c, Func Offset: 0x11dc
	// Line 2603, Address: 0x2fdb90, Func Offset: 0x11e0
	// Line 2442, Address: 0x2fdbb0, Func Offset: 0x1200
	// Line 2455, Address: 0x2fdbbc, Func Offset: 0x120c
	// Line 2603, Address: 0x2fdbcc, Func Offset: 0x121c
	// Line 2471, Address: 0x2fdbd8, Func Offset: 0x1228
	// Line 2603, Address: 0x2fdbdc, Func Offset: 0x122c
	// Line 2471, Address: 0x2fdbe4, Func Offset: 0x1234
	// Line 2603, Address: 0x2fdbe8, Func Offset: 0x1238
	// Line 2471, Address: 0x2fdbf0, Func Offset: 0x1240
	// Line 2603, Address: 0x2fdbf4, Func Offset: 0x1244
	// Line 2471, Address: 0x2fdbfc, Func Offset: 0x124c
	// Line 2603, Address: 0x2fdc00, Func Offset: 0x1250
	// Line 2471, Address: 0x2fdc08, Func Offset: 0x1258
	// Line 2603, Address: 0x2fdc0c, Func Offset: 0x125c
	// Line 2471, Address: 0x2fdc14, Func Offset: 0x1264
	// Line 2603, Address: 0x2fdc18, Func Offset: 0x1268
	// Line 2471, Address: 0x2fdc20, Func Offset: 0x1270
	// Line 2603, Address: 0x2fdc24, Func Offset: 0x1274
	// Line 2471, Address: 0x2fdc2c, Func Offset: 0x127c
	// Line 2603, Address: 0x2fdc34, Func Offset: 0x1284
	// Line 2475, Address: 0x2fdc38, Func Offset: 0x1288
	// Line 2603, Address: 0x2fdc3c, Func Offset: 0x128c
	// Line 2487, Address: 0x2fdc50, Func Offset: 0x12a0
	// Line 2603, Address: 0x2fdc58, Func Offset: 0x12a8
	// Line 2495, Address: 0x2fdc5c, Func Offset: 0x12ac
	// Line 2497, Address: 0x2fdc64, Func Offset: 0x12b4
	// Line 2603, Address: 0x2fdc68, Func Offset: 0x12b8
	// Line 2497, Address: 0x2fdc70, Func Offset: 0x12c0
	// Line 2603, Address: 0x2fdc80, Func Offset: 0x12d0
	// Line 2497, Address: 0x2fdc90, Func Offset: 0x12e0
	// Line 2603, Address: 0x2fdc94, Func Offset: 0x12e4
	// Line 2497, Address: 0x2fdc98, Func Offset: 0x12e8
	// Line 2603, Address: 0x2fdc9c, Func Offset: 0x12ec
	// Line 2497, Address: 0x2fdcb4, Func Offset: 0x1304
	// Line 2603, Address: 0x2fdcb8, Func Offset: 0x1308
	// Line 2497, Address: 0x2fdcc8, Func Offset: 0x1318
	// Line 2603, Address: 0x2fdcd0, Func Offset: 0x1320
	// Line 2497, Address: 0x2fdce4, Func Offset: 0x1334
	// Line 2603, Address: 0x2fdce8, Func Offset: 0x1338
	// Line 2497, Address: 0x2fdcf8, Func Offset: 0x1348
	// Line 2603, Address: 0x2fdd14, Func Offset: 0x1364
	// Line 2497, Address: 0x2fdd1c, Func Offset: 0x136c
	// Line 2603, Address: 0x2fdd20, Func Offset: 0x1370
	// Line 2497, Address: 0x2fdd30, Func Offset: 0x1380
	// Line 2603, Address: 0x2fdd34, Func Offset: 0x1384
	// Line 2497, Address: 0x2fdd40, Func Offset: 0x1390
	// Line 2603, Address: 0x2fdd44, Func Offset: 0x1394
	// Line 2497, Address: 0x2fdd4c, Func Offset: 0x139c
	// Line 2603, Address: 0x2fdd5c, Func Offset: 0x13ac
	// Line 2497, Address: 0x2fdd6c, Func Offset: 0x13bc
	// Line 2603, Address: 0x2fdd70, Func Offset: 0x13c0
	// Line 2497, Address: 0x2fdd74, Func Offset: 0x13c4
	// Line 2603, Address: 0x2fdd78, Func Offset: 0x13c8
	// Line 2497, Address: 0x2fdd90, Func Offset: 0x13e0
	// Line 2603, Address: 0x2fdd94, Func Offset: 0x13e4
	// Line 2497, Address: 0x2fdda4, Func Offset: 0x13f4
	// Line 2603, Address: 0x2fddac, Func Offset: 0x13fc
	// Line 2497, Address: 0x2fddc0, Func Offset: 0x1410
	// Line 2603, Address: 0x2fddc8, Func Offset: 0x1418
	// Line 2497, Address: 0x2fddd8, Func Offset: 0x1428
	// Line 2603, Address: 0x2fddf4, Func Offset: 0x1444
	// Line 2498, Address: 0x2fddfc, Func Offset: 0x144c
	// Line 2500, Address: 0x2fde00, Func Offset: 0x1450
	// Line 2504, Address: 0x2fde08, Func Offset: 0x1458
	// Line 2503, Address: 0x2fde0c, Func Offset: 0x145c
	// Line 2603, Address: 0x2fde10, Func Offset: 0x1460
	// Line 2506, Address: 0x2fde14, Func Offset: 0x1464
	// Line 2603, Address: 0x2fde1c, Func Offset: 0x146c
	// Line 2510, Address: 0x2fde20, Func Offset: 0x1470
	// Line 2479, Address: 0x2fde30, Func Offset: 0x1480
	// Line 2497, Address: 0x2fde38, Func Offset: 0x1488
	// Line 2517, Address: 0x2fde48, Func Offset: 0x1498
	// Line 2603, Address: 0x2fde60, Func Offset: 0x14b0
	// Line 2517, Address: 0x2fde64, Func Offset: 0x14b4
	// Line 2603, Address: 0x2fde68, Func Offset: 0x14b8
	// Line 2517, Address: 0x2fde78, Func Offset: 0x14c8
	// Line 2603, Address: 0x2fde7c, Func Offset: 0x14cc
	// Line 2517, Address: 0x2fde88, Func Offset: 0x14d8
	// Line 2603, Address: 0x2fdeb0, Func Offset: 0x1500
	// Line 2517, Address: 0x2fdeb4, Func Offset: 0x1504
	// Line 2603, Address: 0x2fdeb8, Func Offset: 0x1508
	// Line 2517, Address: 0x2fdec8, Func Offset: 0x1518
	// Line 2603, Address: 0x2fdecc, Func Offset: 0x151c
	// Line 2517, Address: 0x2fded8, Func Offset: 0x1528
	// Line 2531, Address: 0x2fdee8, Func Offset: 0x1538
	// Line 2603, Address: 0x2fdf00, Func Offset: 0x1550
	// Line 2531, Address: 0x2fdf04, Func Offset: 0x1554
	// Line 2603, Address: 0x2fdf08, Func Offset: 0x1558
	// Line 2531, Address: 0x2fdf18, Func Offset: 0x1568
	// Line 2603, Address: 0x2fdf1c, Func Offset: 0x156c
	// Line 2531, Address: 0x2fdf28, Func Offset: 0x1578
	// Line 2603, Address: 0x2fdf38, Func Offset: 0x1588
	// Line 2550, Address: 0x2fdf3c, Func Offset: 0x158c
	// Line 2586, Address: 0x2fdf44, Func Offset: 0x1594
	// Line 2607, Address: 0x2fdf4c, Func Offset: 0x159c
	// Func End, Address: 0x2fdf64, Func Offset: 0x15b4
}

// zSaveLoad_CardCheckSlotOverwrite__Fii
// Start address: 0x2fdf70
int32 zSaveLoad_CardCheckSlotOverwrite(int32 cardNumber, int32 gameNumber)
{
	// Line 2289, Address: 0x2fdf70, Func Offset: 0
	// Line 2292, Address: 0x2fdf78, Func Offset: 0x8
	// Line 2293, Address: 0x2fdfcc, Func Offset: 0x5c
	// Line 2295, Address: 0x2fdfd4, Func Offset: 0x64
	// Line 2316, Address: 0x2fdfec, Func Offset: 0x7c
	// Line 2299, Address: 0x2fe014, Func Offset: 0xa4
	// Line 2316, Address: 0x2fe018, Func Offset: 0xa8
	// Line 2301, Address: 0x2fe02c, Func Offset: 0xbc
	// Line 2316, Address: 0x2fe030, Func Offset: 0xc0
	// Line 2301, Address: 0x2fe044, Func Offset: 0xd4
	// Line 2316, Address: 0x2fe048, Func Offset: 0xd8
	// Line 2301, Address: 0x2fe058, Func Offset: 0xe8
	// Line 2316, Address: 0x2fe060, Func Offset: 0xf0
	// Line 2301, Address: 0x2fe074, Func Offset: 0x104
	// Line 2316, Address: 0x2fe078, Func Offset: 0x108
	// Line 2301, Address: 0x2fe088, Func Offset: 0x118
	// Line 2316, Address: 0x2fe0a4, Func Offset: 0x134
	// Line 2301, Address: 0x2fe0b8, Func Offset: 0x148
	// Line 2316, Address: 0x2fe0bc, Func Offset: 0x14c
	// Line 2301, Address: 0x2fe0d0, Func Offset: 0x160
	// Line 2316, Address: 0x2fe0d4, Func Offset: 0x164
	// Line 2301, Address: 0x2fe0e4, Func Offset: 0x174
	// Line 2316, Address: 0x2fe0ec, Func Offset: 0x17c
	// Line 2301, Address: 0x2fe100, Func Offset: 0x190
	// Line 2316, Address: 0x2fe108, Func Offset: 0x198
	// Line 2301, Address: 0x2fe118, Func Offset: 0x1a8
	// Line 2316, Address: 0x2fe134, Func Offset: 0x1c4
	// Line 2301, Address: 0x2fe148, Func Offset: 0x1d8
	// Line 2316, Address: 0x2fe14c, Func Offset: 0x1dc
	// Line 2301, Address: 0x2fe160, Func Offset: 0x1f0
	// Line 2316, Address: 0x2fe164, Func Offset: 0x1f4
	// Line 2301, Address: 0x2fe174, Func Offset: 0x204
	// Line 2316, Address: 0x2fe17c, Func Offset: 0x20c
	// Line 2301, Address: 0x2fe190, Func Offset: 0x220
	// Line 2316, Address: 0x2fe198, Func Offset: 0x228
	// Line 2301, Address: 0x2fe1a8, Func Offset: 0x238
	// Line 2316, Address: 0x2fe1c4, Func Offset: 0x254
	// Line 2301, Address: 0x2fe1cc, Func Offset: 0x25c
	// Line 2316, Address: 0x2fe1d0, Func Offset: 0x260
	// Line 2301, Address: 0x2fe1e0, Func Offset: 0x270
	// Line 2316, Address: 0x2fe1ec, Func Offset: 0x27c
	// Line 2301, Address: 0x2fe1f4, Func Offset: 0x284
	// Line 2316, Address: 0x2fe1f8, Func Offset: 0x288
	// Line 2301, Address: 0x2fe1fc, Func Offset: 0x28c
	// Line 2316, Address: 0x2fe200, Func Offset: 0x290
	// Line 2301, Address: 0x2fe214, Func Offset: 0x2a4
	// Line 2316, Address: 0x2fe218, Func Offset: 0x2a8
	// Line 2301, Address: 0x2fe22c, Func Offset: 0x2bc
	// Line 2316, Address: 0x2fe230, Func Offset: 0x2c0
	// Line 2301, Address: 0x2fe240, Func Offset: 0x2d0
	// Line 2316, Address: 0x2fe248, Func Offset: 0x2d8
	// Line 2301, Address: 0x2fe25c, Func Offset: 0x2ec
	// Line 2316, Address: 0x2fe260, Func Offset: 0x2f0
	// Line 2301, Address: 0x2fe270, Func Offset: 0x300
	// Line 2316, Address: 0x2fe28c, Func Offset: 0x31c
	// Line 2301, Address: 0x2fe2a0, Func Offset: 0x330
	// Line 2316, Address: 0x2fe2a4, Func Offset: 0x334
	// Line 2301, Address: 0x2fe2b8, Func Offset: 0x348
	// Line 2316, Address: 0x2fe2bc, Func Offset: 0x34c
	// Line 2301, Address: 0x2fe2cc, Func Offset: 0x35c
	// Line 2316, Address: 0x2fe2d4, Func Offset: 0x364
	// Line 2301, Address: 0x2fe2e8, Func Offset: 0x378
	// Line 2316, Address: 0x2fe2f0, Func Offset: 0x380
	// Line 2301, Address: 0x2fe300, Func Offset: 0x390
	// Line 2316, Address: 0x2fe31c, Func Offset: 0x3ac
	// Line 2304, Address: 0x2fe324, Func Offset: 0x3b4
	// Line 2316, Address: 0x2fe330, Func Offset: 0x3c0
	// Line 2319, Address: 0x2fe4f8, Func Offset: 0x588
	// Line 2320, Address: 0x2fe504, Func Offset: 0x594
	// Line 2330, Address: 0x2fe524, Func Offset: 0x5b4
	// Line 2331, Address: 0x2fe53c, Func Offset: 0x5cc
	// Line 2301, Address: 0x2fe544, Func Offset: 0x5d4
	// Line 2331, Address: 0x2fe55c, Func Offset: 0x5ec
	// Line 2301, Address: 0x2fe560, Func Offset: 0x5f0
	// Line 2331, Address: 0x2fe564, Func Offset: 0x5f4
	// Line 2301, Address: 0x2fe574, Func Offset: 0x604
	// Line 2331, Address: 0x2fe578, Func Offset: 0x608
	// Line 2301, Address: 0x2fe588, Func Offset: 0x618
	// Line 2316, Address: 0x2fe598, Func Offset: 0x628
	// Line 2331, Address: 0x2fe5a8, Func Offset: 0x638
	// Line 2316, Address: 0x2fe5ac, Func Offset: 0x63c
	// Line 2331, Address: 0x2fe5b0, Func Offset: 0x640
	// Line 2316, Address: 0x2fe5c0, Func Offset: 0x650
	// Line 2331, Address: 0x2fe5c4, Func Offset: 0x654
	// Line 2316, Address: 0x2fe5d0, Func Offset: 0x660
	// Line 2333, Address: 0x2fe5d8, Func Offset: 0x668
	// Func End, Address: 0x2fe5e8, Func Offset: 0x678
}

// zSaveLoad_CardCheckFormatted__Fii
// Start address: 0x2fe5f0
int32 zSaveLoad_CardCheckFormatted(int32 cardNumber, int32 mode)
{
	int32 result;
	// Line 2152, Address: 0x2fe5f0, Func Offset: 0
	// Line 2193, Address: 0x2fe604, Func Offset: 0x14
	// Line 2194, Address: 0x2fe618, Func Offset: 0x28
	// Line 2159, Address: 0x2fe62c, Func Offset: 0x3c
	// Line 2194, Address: 0x2fe630, Func Offset: 0x40
	// Line 2164, Address: 0x2fe638, Func Offset: 0x48
	// Line 2194, Address: 0x2fe63c, Func Offset: 0x4c
	// Line 2170, Address: 0x2fe644, Func Offset: 0x54
	// Line 2194, Address: 0x2fe648, Func Offset: 0x58
	// Line 2170, Address: 0x2fe650, Func Offset: 0x60
	// Line 2194, Address: 0x2fe658, Func Offset: 0x68
	// Line 2170, Address: 0x2fe668, Func Offset: 0x78
	// Line 2194, Address: 0x2fe66c, Func Offset: 0x7c
	// Line 2170, Address: 0x2fe670, Func Offset: 0x80
	// Line 2194, Address: 0x2fe674, Func Offset: 0x84
	// Line 2170, Address: 0x2fe68c, Func Offset: 0x9c
	// Line 2194, Address: 0x2fe690, Func Offset: 0xa0
	// Line 2170, Address: 0x2fe6a0, Func Offset: 0xb0
	// Line 2194, Address: 0x2fe6a8, Func Offset: 0xb8
	// Line 2170, Address: 0x2fe6bc, Func Offset: 0xcc
	// Line 2194, Address: 0x2fe6c0, Func Offset: 0xd0
	// Line 2170, Address: 0x2fe6d0, Func Offset: 0xe0
	// Line 2194, Address: 0x2fe6ec, Func Offset: 0xfc
	// Line 2170, Address: 0x2fe6f4, Func Offset: 0x104
	// Line 2194, Address: 0x2fe6f8, Func Offset: 0x108
	// Line 2170, Address: 0x2fe700, Func Offset: 0x110
	// Line 2194, Address: 0x2fe710, Func Offset: 0x120
	// Line 2170, Address: 0x2fe720, Func Offset: 0x130
	// Line 2194, Address: 0x2fe724, Func Offset: 0x134
	// Line 2170, Address: 0x2fe728, Func Offset: 0x138
	// Line 2194, Address: 0x2fe72c, Func Offset: 0x13c
	// Line 2170, Address: 0x2fe744, Func Offset: 0x154
	// Line 2194, Address: 0x2fe748, Func Offset: 0x158
	// Line 2170, Address: 0x2fe758, Func Offset: 0x168
	// Line 2194, Address: 0x2fe760, Func Offset: 0x170
	// Line 2170, Address: 0x2fe774, Func Offset: 0x184
	// Line 2194, Address: 0x2fe778, Func Offset: 0x188
	// Line 2170, Address: 0x2fe788, Func Offset: 0x198
	// Line 2194, Address: 0x2fe7a4, Func Offset: 0x1b4
	// Line 2170, Address: 0x2fe7b8, Func Offset: 0x1c8
	// Line 2194, Address: 0x2fe7bc, Func Offset: 0x1cc
	// Line 2170, Address: 0x2fe7d0, Func Offset: 0x1e0
	// Line 2194, Address: 0x2fe7d4, Func Offset: 0x1e4
	// Line 2170, Address: 0x2fe7e4, Func Offset: 0x1f4
	// Line 2194, Address: 0x2fe7ec, Func Offset: 0x1fc
	// Line 2170, Address: 0x2fe800, Func Offset: 0x210
	// Line 2194, Address: 0x2fe808, Func Offset: 0x218
	// Line 2170, Address: 0x2fe818, Func Offset: 0x228
	// Line 2194, Address: 0x2fe834, Func Offset: 0x244
	// Line 2170, Address: 0x2fe83c, Func Offset: 0x24c
	// Line 2194, Address: 0x2fe840, Func Offset: 0x250
	// Line 2170, Address: 0x2fe850, Func Offset: 0x260
	// Line 2194, Address: 0x2fe85c, Func Offset: 0x26c
	// Line 2170, Address: 0x2fe864, Func Offset: 0x274
	// Line 2194, Address: 0x2fe868, Func Offset: 0x278
	// Line 2170, Address: 0x2fe86c, Func Offset: 0x27c
	// Line 2194, Address: 0x2fe870, Func Offset: 0x280
	// Line 2170, Address: 0x2fe880, Func Offset: 0x290
	// Line 2194, Address: 0x2fe884, Func Offset: 0x294
	// Line 2170, Address: 0x2fe898, Func Offset: 0x2a8
	// Line 2194, Address: 0x2fe89c, Func Offset: 0x2ac
	// Line 2170, Address: 0x2fe8ac, Func Offset: 0x2bc
	// Line 2194, Address: 0x2fe8b4, Func Offset: 0x2c4
	// Line 2170, Address: 0x2fe8c8, Func Offset: 0x2d8
	// Line 2194, Address: 0x2fe8d0, Func Offset: 0x2e0
	// Line 2170, Address: 0x2fe8e0, Func Offset: 0x2f0
	// Line 2194, Address: 0x2fe8fc, Func Offset: 0x30c
	// Line 2170, Address: 0x2fe908, Func Offset: 0x318
	// Line 2194, Address: 0x2fe90c, Func Offset: 0x31c
	// Line 2170, Address: 0x2fe91c, Func Offset: 0x32c
	// Line 2194, Address: 0x2fe92c, Func Offset: 0x33c
	// Line 2170, Address: 0x2fe93c, Func Offset: 0x34c
	// Line 2194, Address: 0x2fe940, Func Offset: 0x350
	// Line 2170, Address: 0x2fe944, Func Offset: 0x354
	// Line 2194, Address: 0x2fe948, Func Offset: 0x358
	// Line 2170, Address: 0x2fe960, Func Offset: 0x370
	// Line 2194, Address: 0x2fe964, Func Offset: 0x374
	// Line 2170, Address: 0x2fe974, Func Offset: 0x384
	// Line 2194, Address: 0x2fe97c, Func Offset: 0x38c
	// Line 2170, Address: 0x2fe990, Func Offset: 0x3a0
	// Line 2194, Address: 0x2fe998, Func Offset: 0x3a8
	// Line 2170, Address: 0x2fe9a8, Func Offset: 0x3b8
	// Line 2194, Address: 0x2fe9c4, Func Offset: 0x3d4
	// Line 2171, Address: 0x2fe9d0, Func Offset: 0x3e0
	// Line 2194, Address: 0x2fe9d4, Func Offset: 0x3e4
	// Line 2171, Address: 0x2fe9dc, Func Offset: 0x3ec
	// Line 2194, Address: 0x2fe9e0, Func Offset: 0x3f0
	// Line 2177, Address: 0x2fe9f0, Func Offset: 0x400
	// Line 2161, Address: 0x2fe9f8, Func Offset: 0x408
	// Line 2166, Address: 0x2fea00, Func Offset: 0x410
	// Line 2170, Address: 0x2fea08, Func Offset: 0x418
	// Line 2194, Address: 0x2fea20, Func Offset: 0x430
	// Line 2170, Address: 0x2fea24, Func Offset: 0x434
	// Line 2194, Address: 0x2fea28, Func Offset: 0x438
	// Line 2170, Address: 0x2fea38, Func Offset: 0x448
	// Line 2194, Address: 0x2fea3c, Func Offset: 0x44c
	// Line 2170, Address: 0x2fea48, Func Offset: 0x458
	// Line 2173, Address: 0x2fea58, Func Offset: 0x468
	// Line 2182, Address: 0x2fea64, Func Offset: 0x474
	// Line 2183, Address: 0x2fea68, Func Offset: 0x478
	// Line 2194, Address: 0x2fea70, Func Offset: 0x480
	// Line 2184, Address: 0x2fea78, Func Offset: 0x488
	// Line 2188, Address: 0x2fea7c, Func Offset: 0x48c
	// Line 2194, Address: 0x2fea80, Func Offset: 0x490
	// Line 2188, Address: 0x2fea88, Func Offset: 0x498
	// Line 2195, Address: 0x2fea94, Func Offset: 0x4a4
	// Func End, Address: 0x2feaa8, Func Offset: 0x4b8
}

// zSaveLoad_CardCheckSlotEmpty_hasGame__Fii
// Start address: 0x2feab0
int32 zSaveLoad_CardCheckSlotEmpty_hasGame(int32 num, int32 game)
{
	st_XSAVEGAME_DATA* ldinst;
	int32 tgtcnt;
	int32 tgtmax;
	int32 rc;
	int32 tgtslot;
	// Line 2028, Address: 0x2feab0, Func Offset: 0
	// Line 2032, Address: 0x2feacc, Func Offset: 0x1c
	// Line 2041, Address: 0x2feadc, Func Offset: 0x2c
	// Line 2045, Address: 0x2feaec, Func Offset: 0x3c
	// Line 2051, Address: 0x2feb10, Func Offset: 0x60
	// Line 2053, Address: 0x2feb20, Func Offset: 0x70
	// Line 2059, Address: 0x2feb2c, Func Offset: 0x7c
	// Line 2065, Address: 0x2feb34, Func Offset: 0x84
	// Line 2071, Address: 0x2feb3c, Func Offset: 0x8c
	// Line 2073, Address: 0x2feb44, Func Offset: 0x94
	// Line 2074, Address: 0x2feb4c, Func Offset: 0x9c
	// Line 2076, Address: 0x2feb50, Func Offset: 0xa0
	// Line 2078, Address: 0x2feb5c, Func Offset: 0xac
	// Line 2080, Address: 0x2feb68, Func Offset: 0xb8
	// Line 2084, Address: 0x2feb70, Func Offset: 0xc0
	// Line 2088, Address: 0x2feb74, Func Offset: 0xc4
	// Line 2089, Address: 0x2feb80, Func Offset: 0xd0
	// Line 2092, Address: 0x2feb84, Func Offset: 0xd4
	// Func End, Address: 0x2feba0, Func Offset: 0xf0
}

// zSaveLoad_CardCheckSlotEmpty_hasGame_doCheck__FP17st_XSAVEGAME_DATAii
// Start address: 0x2feba0
int32 zSaveLoad_CardCheckSlotEmpty_hasGame_doCheck(st_XSAVEGAME_DATA* xsgdata, int32 num, int32 game)
{
	int32 rc;
	int8* damaged_save_name;
	// Line 1972, Address: 0x2feba0, Func Offset: 0
	// Line 1975, Address: 0x2febc8, Func Offset: 0x28
	// Line 1977, Address: 0x2febd4, Func Offset: 0x34
	// Line 1980, Address: 0x2febdc, Func Offset: 0x3c
	// Line 1986, Address: 0x2febe4, Func Offset: 0x44
	// Line 1988, Address: 0x2febec, Func Offset: 0x4c
	// Line 1994, Address: 0x2febf8, Func Offset: 0x58
	// Line 1988, Address: 0x2febfc, Func Offset: 0x5c
	// Line 1994, Address: 0x2fec00, Func Offset: 0x60
	// Line 1995, Address: 0x2fec1c, Func Offset: 0x7c
	// Line 1994, Address: 0x2fec20, Func Offset: 0x80
	// Line 1995, Address: 0x2fec28, Func Offset: 0x88
	// Line 1994, Address: 0x2fec2c, Func Offset: 0x8c
	// Line 1995, Address: 0x2fec30, Func Offset: 0x90
	// Line 2003, Address: 0x2fec48, Func Offset: 0xa8
	// Line 2019, Address: 0x2fec50, Func Offset: 0xb0
	// Line 2021, Address: 0x2fec58, Func Offset: 0xb8
	// Line 2024, Address: 0x2fec5c, Func Offset: 0xbc
	// Line 1995, Address: 0x2fec6c, Func Offset: 0xcc
	// Line 2024, Address: 0x2fec70, Func Offset: 0xd0
	// Line 1998, Address: 0x2fec88, Func Offset: 0xe8
	// Line 2006, Address: 0x2fec90, Func Offset: 0xf0
	// Line 2024, Address: 0x2feca4, Func Offset: 0x104
	// Line 2010, Address: 0x2fecb4, Func Offset: 0x114
	// Line 2016, Address: 0x2fecbc, Func Offset: 0x11c
	// Line 2025, Address: 0x2fecc4, Func Offset: 0x124
	// Func End, Address: 0x2fece8, Func Offset: 0x148
}

// zSaveLoad_CardCheckGamesSingle__Fi
// Start address: 0x2fecf0
int32 zSaveLoad_CardCheckGamesSingle(int32 num)
{
	st_XSAVEGAME_DATA* ldinst;
	int32 tgtcnt;
	int32 tgtmax;
	int32 rc;
	int32 tgtslot;
	// Line 1907, Address: 0x2fecf0, Func Offset: 0
	// Line 1912, Address: 0x2fed04, Func Offset: 0x14
	// Line 1921, Address: 0x2fed14, Func Offset: 0x24
	// Line 1925, Address: 0x2fed24, Func Offset: 0x34
	// Line 1930, Address: 0x2fed48, Func Offset: 0x58
	// Line 1934, Address: 0x2fed60, Func Offset: 0x70
	// Line 1940, Address: 0x2fed6c, Func Offset: 0x7c
	// Line 1943, Address: 0x2fed74, Func Offset: 0x84
	// Line 1949, Address: 0x2fed7c, Func Offset: 0x8c
	// Line 1951, Address: 0x2fed84, Func Offset: 0x94
	// Line 1952, Address: 0x2fed8c, Func Offset: 0x9c
	// Line 1954, Address: 0x2fed90, Func Offset: 0xa0
	// Line 1956, Address: 0x2fed9c, Func Offset: 0xac
	// Line 1958, Address: 0x2fedb4, Func Offset: 0xc4
	// Line 1962, Address: 0x2fedbc, Func Offset: 0xcc
	// Line 1966, Address: 0x2fedc0, Func Offset: 0xd0
	// Line 1967, Address: 0x2fedcc, Func Offset: 0xdc
	// Line 1930, Address: 0x2feddc, Func Offset: 0xec
	// Line 1967, Address: 0x2fede0, Func Offset: 0xf0
	// Line 1930, Address: 0x2fede8, Func Offset: 0xf8
	// Line 1967, Address: 0x2fedf0, Func Offset: 0x100
	// Line 1956, Address: 0x2fedf8, Func Offset: 0x108
	// Line 1967, Address: 0x2fedfc, Func Offset: 0x10c
	// Line 1956, Address: 0x2fee14, Func Offset: 0x124
	// Line 1968, Address: 0x2fee1c, Func Offset: 0x12c
	// Func End, Address: 0x2fee34, Func Offset: 0x144
}

// zSaveLoad_CardCheckSpaceSingle__Fi
// Start address: 0x2fee40
int32 zSaveLoad_CardCheckSpaceSingle(int32 num)
{
	st_XSAVEGAME_DATA* ldinst;
	int32 tgtcnt;
	int32 tgtmax;
	int32 rc;
	int32 tgtslot;
	// Line 1817, Address: 0x2fee40, Func Offset: 0
	// Line 1822, Address: 0x2fee54, Func Offset: 0x14
	// Line 1831, Address: 0x2fee64, Func Offset: 0x24
	// Line 1835, Address: 0x2fee74, Func Offset: 0x34
	// Line 1841, Address: 0x2fee98, Func Offset: 0x58
	// Line 1842, Address: 0x2feea4, Func Offset: 0x64
	// Line 1846, Address: 0x2feeac, Func Offset: 0x6c
	// Line 1852, Address: 0x2feeb4, Func Offset: 0x74
	// Line 1854, Address: 0x2feebc, Func Offset: 0x7c
	// Line 1855, Address: 0x2feec4, Func Offset: 0x84
	// Line 1857, Address: 0x2feec8, Func Offset: 0x88
	// Line 1859, Address: 0x2feed4, Func Offset: 0x94
	// Line 1861, Address: 0x2feedc, Func Offset: 0x9c
	// Line 1865, Address: 0x2feee4, Func Offset: 0xa4
	// Line 1869, Address: 0x2feee8, Func Offset: 0xa8
	// Line 1870, Address: 0x2feef4, Func Offset: 0xb4
	// Line 1872, Address: 0x2feef8, Func Offset: 0xb8
	// Func End, Address: 0x2fef10, Func Offset: 0xd0
}

// zSaveLoad_CardCheckSpaceSingle_doCheck__FP17st_XSAVEGAME_DATAi
// Start address: 0x2fef10
int32 zSaveLoad_CardCheckSpaceSingle_doCheck(st_XSAVEGAME_DATA* xsgdata, int32 num)
{
	int32 rc;
	// Line 1769, Address: 0x2fef10, Func Offset: 0
	// Line 1772, Address: 0x2fef14, Func Offset: 0x4
	// Line 1769, Address: 0x2fef18, Func Offset: 0x8
	// Line 1772, Address: 0x2fef28, Func Offset: 0x18
	// Line 1774, Address: 0x2fef30, Func Offset: 0x20
	// Line 1775, Address: 0x2fef38, Func Offset: 0x28
	// Line 1777, Address: 0x2fef40, Func Offset: 0x30
	// Line 1779, Address: 0x2fef48, Func Offset: 0x38
	// Line 1798, Address: 0x2fef54, Func Offset: 0x44
	// Line 1811, Address: 0x2fef74, Func Offset: 0x64
	// Line 1814, Address: 0x2fef80, Func Offset: 0x70
	// Func End, Address: 0x2fef94, Func Offset: 0x84
}

// zSaveLoad_CardCheckFormattedSingle__Fi
// Start address: 0x2fefa0
int32 zSaveLoad_CardCheckFormattedSingle(int32 num)
{
	st_XSAVEGAME_DATA* ldinst;
	int32 tgtcnt;
	int32 tgtmax;
	int32 rc;
	int32 tgtslot;
	// Line 1664, Address: 0x2fefa0, Func Offset: 0
	// Line 1668, Address: 0x2fefb4, Func Offset: 0x14
	// Line 1677, Address: 0x2fefc4, Func Offset: 0x24
	// Line 1681, Address: 0x2fefd4, Func Offset: 0x34
	// Line 1687, Address: 0x2feff8, Func Offset: 0x58
	// Line 1700, Address: 0x2ff004, Func Offset: 0x64
	// Line 1704, Address: 0x2ff024, Func Offset: 0x84
	// Line 1707, Address: 0x2ff02c, Func Offset: 0x8c
	// Line 1713, Address: 0x2ff034, Func Offset: 0x94
	// Line 1719, Address: 0x2ff03c, Func Offset: 0x9c
	// Line 1722, Address: 0x2ff044, Func Offset: 0xa4
	// Line 1729, Address: 0x2ff04c, Func Offset: 0xac
	// Line 1732, Address: 0x2ff058, Func Offset: 0xb8
	// Line 1736, Address: 0x2ff064, Func Offset: 0xc4
	// Line 1740, Address: 0x2ff084, Func Offset: 0xe4
	// Line 1743, Address: 0x2ff08c, Func Offset: 0xec
	// Line 1756, Address: 0x2ff094, Func Offset: 0xf4
	// Line 1759, Address: 0x2ff09c, Func Offset: 0xfc
	// Line 1764, Address: 0x2ff0a0, Func Offset: 0x100
	// Line 1765, Address: 0x2ff0ac, Func Offset: 0x10c
	// Line 1726, Address: 0x2ff0b4, Func Offset: 0x114
	// Line 1766, Address: 0x2ff0bc, Func Offset: 0x11c
	// Func End, Address: 0x2ff0d4, Func Offset: 0x134
}

// zSaveLoad_CardCheckSingle__Fi
// Start address: 0x2ff0e0
int32 zSaveLoad_CardCheckSingle(int32 num)
{
	st_XSAVEGAME_DATA* ldinst;
	int32 tgtcnt;
	int32 tgtmax;
	int32 tgtslot;
	// Line 1588, Address: 0x2ff0e0, Func Offset: 0
	// Line 1590, Address: 0x2ff0f4, Func Offset: 0x14
	// Line 1601, Address: 0x2ff104, Func Offset: 0x24
	// Line 1605, Address: 0x2ff110, Func Offset: 0x30
	// Line 1611, Address: 0x2ff138, Func Offset: 0x58
	// Line 1612, Address: 0x2ff140, Func Offset: 0x60
	// Line 1620, Address: 0x2ff148, Func Offset: 0x68
	// Line 1622, Address: 0x2ff154, Func Offset: 0x74
	// Line 1637, Address: 0x2ff15c, Func Offset: 0x7c
	// Line 1654, Address: 0x2ff168, Func Offset: 0x88
	// Line 1655, Address: 0x2ff170, Func Offset: 0x90
	// Line 1662, Address: 0x2ff174, Func Offset: 0x94
	// Func End, Address: 0x2ff18c, Func Offset: 0xac
}

// zSaveLoad_CardPrompt__Fi
// Start address: 0x2ff190
int32 zSaveLoad_CardPrompt(int32 mode)
{
	// Line 1106, Address: 0x2ff190, Func Offset: 0
	// Line 1119, Address: 0x2ff194, Func Offset: 0x4
	// Line 1106, Address: 0x2ff198, Func Offset: 0x8
	// Line 1119, Address: 0x2ff1a4, Func Offset: 0x14
	// Line 1121, Address: 0x2ff25c, Func Offset: 0xcc
	// Line 1124, Address: 0x2ff30c, Func Offset: 0x17c
	// Line 1125, Address: 0x2ff3c4, Func Offset: 0x234
	// Line 1126, Address: 0x2ff454, Func Offset: 0x2c4
	// Line 1129, Address: 0x2ff504, Func Offset: 0x374
	// Line 1133, Address: 0x2ff50c, Func Offset: 0x37c
	// Line 1135, Address: 0x2ff514, Func Offset: 0x384
	// Line 1148, Address: 0x2ff528, Func Offset: 0x398
	// Line 1150, Address: 0x2ff5dc, Func Offset: 0x44c
	// Line 1151, Address: 0x2ff5e8, Func Offset: 0x458
	// Line 1154, Address: 0x2ff674, Func Offset: 0x4e4
	// Line 1156, Address: 0x2ff694, Func Offset: 0x504
	// Line 1159, Address: 0x2ff74c, Func Offset: 0x5bc
	// Line 1119, Address: 0x2ff754, Func Offset: 0x5c4
	// Line 1121, Address: 0x2ff75c, Func Offset: 0x5cc
	// Line 1124, Address: 0x2ff764, Func Offset: 0x5d4
	// Line 1125, Address: 0x2ff76c, Func Offset: 0x5dc
	// Line 1126, Address: 0x2ff774, Func Offset: 0x5e4
	// Line 1148, Address: 0x2ff77c, Func Offset: 0x5ec
	// Line 1151, Address: 0x2ff784, Func Offset: 0x5f4
	// Line 1159, Address: 0x2ff78c, Func Offset: 0x5fc
	// Line 1156, Address: 0x2ff7b4, Func Offset: 0x624
	// Line 1160, Address: 0x2ff7bc, Func Offset: 0x62c
	// Func End, Address: 0x2ff7cc, Func Offset: 0x63c
}

// format__Fii
// Start address: 0x2ff7d0
int32 format(int32 num, int32 mode)
{
	int32 tgtcnt;
	int32 tgtmax;
	int32 rc;
	int32 tgtslot;
	// Line 879, Address: 0x2ff7d0, Func Offset: 0
	// Line 882, Address: 0x2ff7d4, Func Offset: 0x4
	// Line 879, Address: 0x2ff7d8, Func Offset: 0x8
	// Line 882, Address: 0x2ff7f0, Func Offset: 0x20
	// Line 890, Address: 0x2ff964, Func Offset: 0x194
	// Line 893, Address: 0x2ff974, Func Offset: 0x1a4
	// Line 899, Address: 0x2ff998, Func Offset: 0x1c8
	// Line 900, Address: 0x2ff9a0, Func Offset: 0x1d0
	// Line 903, Address: 0x2ff9b0, Func Offset: 0x1e0
	// Line 900, Address: 0x2ff9b4, Func Offset: 0x1e4
	// Line 903, Address: 0x2ff9b8, Func Offset: 0x1e8
	// Line 905, Address: 0x2ffaf8, Func Offset: 0x328
	// Line 913, Address: 0x2ffb04, Func Offset: 0x334
	// Line 927, Address: 0x2ffb0c, Func Offset: 0x33c
	// Line 930, Address: 0x2ffb14, Func Offset: 0x344
	// Line 936, Address: 0x2ffb1c, Func Offset: 0x34c
	// Line 939, Address: 0x2ffb24, Func Offset: 0x354
	// Line 947, Address: 0x2ffb2c, Func Offset: 0x35c
	// Line 993, Address: 0x2ffc78, Func Offset: 0x4a8
	// Line 998, Address: 0x2ffdb8, Func Offset: 0x5e8
	// Line 882, Address: 0x2ffdc4, Func Offset: 0x5f4
	// Line 998, Address: 0x2ffdd4, Func Offset: 0x604
	// Line 903, Address: 0x2ffde8, Func Offset: 0x618
	// Line 998, Address: 0x2ffdf8, Func Offset: 0x628
	// Line 907, Address: 0x2ffe00, Func Offset: 0x630
	// Line 998, Address: 0x2ffe08, Func Offset: 0x638
	// Line 907, Address: 0x2ffe18, Func Offset: 0x648
	// Line 998, Address: 0x2ffe1c, Func Offset: 0x64c
	// Line 907, Address: 0x2ffe20, Func Offset: 0x650
	// Line 998, Address: 0x2ffe24, Func Offset: 0x654
	// Line 907, Address: 0x2ffe3c, Func Offset: 0x66c
	// Line 998, Address: 0x2ffe40, Func Offset: 0x670
	// Line 907, Address: 0x2ffe50, Func Offset: 0x680
	// Line 998, Address: 0x2ffe58, Func Offset: 0x688
	// Line 907, Address: 0x2ffe6c, Func Offset: 0x69c
	// Line 998, Address: 0x2ffe70, Func Offset: 0x6a0
	// Line 907, Address: 0x2ffe80, Func Offset: 0x6b0
	// Line 998, Address: 0x2ffe9c, Func Offset: 0x6cc
	// Line 907, Address: 0x2ffea4, Func Offset: 0x6d4
	// Line 998, Address: 0x2ffea8, Func Offset: 0x6d8
	// Line 907, Address: 0x2ffeb8, Func Offset: 0x6e8
	// Line 998, Address: 0x2ffebc, Func Offset: 0x6ec
	// Line 907, Address: 0x2ffec8, Func Offset: 0x6f8
	// Line 998, Address: 0x2ffecc, Func Offset: 0x6fc
	// Line 907, Address: 0x2ffed4, Func Offset: 0x704
	// Line 998, Address: 0x2ffedc, Func Offset: 0x70c
	// Line 907, Address: 0x2ffeec, Func Offset: 0x71c
	// Line 998, Address: 0x2ffef0, Func Offset: 0x720
	// Line 907, Address: 0x2ffef4, Func Offset: 0x724
	// Line 998, Address: 0x2ffef8, Func Offset: 0x728
	// Line 907, Address: 0x2fff10, Func Offset: 0x740
	// Line 998, Address: 0x2fff14, Func Offset: 0x744
	// Line 907, Address: 0x2fff24, Func Offset: 0x754
	// Line 998, Address: 0x2fff2c, Func Offset: 0x75c
	// Line 907, Address: 0x2fff40, Func Offset: 0x770
	// Line 998, Address: 0x2fff48, Func Offset: 0x778
	// Line 907, Address: 0x2fff58, Func Offset: 0x788
	// Line 998, Address: 0x2fff74, Func Offset: 0x7a4
	// Line 909, Address: 0x2fff7c, Func Offset: 0x7ac
	// Line 907, Address: 0x2fff84, Func Offset: 0x7b4
	// Line 998, Address: 0x2fff94, Func Offset: 0x7c4
	// Line 917, Address: 0x2fff9c, Func Offset: 0x7cc
	// Line 998, Address: 0x2fffa4, Func Offset: 0x7d4
	// Line 917, Address: 0x2fffb4, Func Offset: 0x7e4
	// Line 998, Address: 0x2fffb8, Func Offset: 0x7e8
	// Line 917, Address: 0x2fffbc, Func Offset: 0x7ec
	// Line 998, Address: 0x2fffc0, Func Offset: 0x7f0
	// Line 917, Address: 0x2fffd8, Func Offset: 0x808
	// Line 998, Address: 0x2fffdc, Func Offset: 0x80c
	// Line 917, Address: 0x2fffec, Func Offset: 0x81c
	// Line 998, Address: 0x2ffff4, Func Offset: 0x824
	// Line 917, Address: 0x300008, Func Offset: 0x838
	// Line 998, Address: 0x300010, Func Offset: 0x840
	// Line 917, Address: 0x300020, Func Offset: 0x850
	// Line 998, Address: 0x30003c, Func Offset: 0x86c
	// Line 917, Address: 0x300044, Func Offset: 0x874
	// Line 998, Address: 0x300048, Func Offset: 0x878
	// Line 917, Address: 0x300058, Func Offset: 0x888
	// Line 998, Address: 0x30005c, Func Offset: 0x88c
	// Line 917, Address: 0x300068, Func Offset: 0x898
	// Line 998, Address: 0x30006c, Func Offset: 0x89c
	// Line 917, Address: 0x300074, Func Offset: 0x8a4
	// Line 998, Address: 0x30007c, Func Offset: 0x8ac
	// Line 917, Address: 0x30008c, Func Offset: 0x8bc
	// Line 998, Address: 0x300090, Func Offset: 0x8c0
	// Line 917, Address: 0x300094, Func Offset: 0x8c4
	// Line 998, Address: 0x300098, Func Offset: 0x8c8
	// Line 917, Address: 0x3000b0, Func Offset: 0x8e0
	// Line 998, Address: 0x3000b4, Func Offset: 0x8e4
	// Line 917, Address: 0x3000c4, Func Offset: 0x8f4
	// Line 998, Address: 0x3000cc, Func Offset: 0x8fc
	// Line 917, Address: 0x3000e0, Func Offset: 0x910
	// Line 998, Address: 0x3000e8, Func Offset: 0x918
	// Line 917, Address: 0x3000f8, Func Offset: 0x928
	// Line 998, Address: 0x300114, Func Offset: 0x944
	// Line 918, Address: 0x30011c, Func Offset: 0x94c
	// Line 917, Address: 0x300124, Func Offset: 0x954
	// Line 998, Address: 0x300134, Func Offset: 0x964
	// Line 942, Address: 0x300138, Func Offset: 0x968
	// Line 998, Address: 0x30013c, Func Offset: 0x96c
	// Line 942, Address: 0x300150, Func Offset: 0x980
	// Line 998, Address: 0x300154, Func Offset: 0x984
	// Line 942, Address: 0x300168, Func Offset: 0x998
	// Line 998, Address: 0x30016c, Func Offset: 0x99c
	// Line 942, Address: 0x30017c, Func Offset: 0x9ac
	// Line 998, Address: 0x300184, Func Offset: 0x9b4
	// Line 942, Address: 0x300198, Func Offset: 0x9c8
	// Line 998, Address: 0x3001a0, Func Offset: 0x9d0
	// Line 942, Address: 0x3001b0, Func Offset: 0x9e0
	// Line 998, Address: 0x3001cc, Func Offset: 0x9fc
	// Line 942, Address: 0x3001d4, Func Offset: 0xa04
	// Line 998, Address: 0x3001dc, Func Offset: 0xa0c
	// Line 942, Address: 0x3001e4, Func Offset: 0xa14
	// Line 998, Address: 0x3001e8, Func Offset: 0xa18
	// Line 942, Address: 0x3001fc, Func Offset: 0xa2c
	// Line 998, Address: 0x300200, Func Offset: 0xa30
	// Line 942, Address: 0x300210, Func Offset: 0xa40
	// Line 998, Address: 0x300218, Func Offset: 0xa48
	// Line 942, Address: 0x30022c, Func Offset: 0xa5c
	// Line 998, Address: 0x300230, Func Offset: 0xa60
	// Line 942, Address: 0x300240, Func Offset: 0xa70
	// Line 998, Address: 0x30025c, Func Offset: 0xa8c
	// Line 942, Address: 0x300264, Func Offset: 0xa94
	// Line 998, Address: 0x300268, Func Offset: 0xa98
	// Line 944, Address: 0x300270, Func Offset: 0xaa0
	// Line 942, Address: 0x300278, Func Offset: 0xaa8
	// Line 947, Address: 0x300288, Func Offset: 0xab8
	// Line 998, Address: 0x300298, Func Offset: 0xac8
	// Line 955, Address: 0x3002a0, Func Offset: 0xad0
	// Line 998, Address: 0x3002a8, Func Offset: 0xad8
	// Line 955, Address: 0x3002b4, Func Offset: 0xae4
	// Line 959, Address: 0x3002b8, Func Offset: 0xae8
	// Line 998, Address: 0x3002bc, Func Offset: 0xaec
	// Line 959, Address: 0x3002d0, Func Offset: 0xb00
	// Line 998, Address: 0x3002d4, Func Offset: 0xb04
	// Line 959, Address: 0x3002e8, Func Offset: 0xb18
	// Line 998, Address: 0x3002ec, Func Offset: 0xb1c
	// Line 959, Address: 0x3002fc, Func Offset: 0xb2c
	// Line 998, Address: 0x300304, Func Offset: 0xb34
	// Line 959, Address: 0x300318, Func Offset: 0xb48
	// Line 998, Address: 0x300320, Func Offset: 0xb50
	// Line 959, Address: 0x300330, Func Offset: 0xb60
	// Line 998, Address: 0x30034c, Func Offset: 0xb7c
	// Line 959, Address: 0x300354, Func Offset: 0xb84
	// Line 998, Address: 0x30035c, Func Offset: 0xb8c
	// Line 959, Address: 0x300368, Func Offset: 0xb98
	// Line 998, Address: 0x30036c, Func Offset: 0xb9c
	// Line 959, Address: 0x300380, Func Offset: 0xbb0
	// Line 998, Address: 0x300384, Func Offset: 0xbb4
	// Line 959, Address: 0x300394, Func Offset: 0xbc4
	// Line 998, Address: 0x30039c, Func Offset: 0xbcc
	// Line 959, Address: 0x3003b0, Func Offset: 0xbe0
	// Line 998, Address: 0x3003b8, Func Offset: 0xbe8
	// Line 959, Address: 0x3003c8, Func Offset: 0xbf8
	// Line 998, Address: 0x3003e4, Func Offset: 0xc14
	// Line 959, Address: 0x3003ec, Func Offset: 0xc1c
	// Line 998, Address: 0x3003f0, Func Offset: 0xc20
	// Line 961, Address: 0x3003f8, Func Offset: 0xc28
	// Line 998, Address: 0x3003fc, Func Offset: 0xc2c
	// Line 972, Address: 0x300414, Func Offset: 0xc44
	// Line 998, Address: 0x30041c, Func Offset: 0xc4c
	// Line 972, Address: 0x30042c, Func Offset: 0xc5c
	// Line 998, Address: 0x300430, Func Offset: 0xc60
	// Line 972, Address: 0x300434, Func Offset: 0xc64
	// Line 998, Address: 0x300438, Func Offset: 0xc68
	// Line 972, Address: 0x300450, Func Offset: 0xc80
	// Line 998, Address: 0x300454, Func Offset: 0xc84
	// Line 972, Address: 0x300464, Func Offset: 0xc94
	// Line 998, Address: 0x30046c, Func Offset: 0xc9c
	// Line 972, Address: 0x300480, Func Offset: 0xcb0
	// Line 998, Address: 0x300488, Func Offset: 0xcb8
	// Line 972, Address: 0x300498, Func Offset: 0xcc8
	// Line 998, Address: 0x3004b4, Func Offset: 0xce4
	// Line 972, Address: 0x3004bc, Func Offset: 0xcec
	// Line 998, Address: 0x3004c0, Func Offset: 0xcf0
	// Line 972, Address: 0x3004d0, Func Offset: 0xd00
	// Line 998, Address: 0x3004d4, Func Offset: 0xd04
	// Line 972, Address: 0x3004e0, Func Offset: 0xd10
	// Line 998, Address: 0x3004e4, Func Offset: 0xd14
	// Line 972, Address: 0x3004ec, Func Offset: 0xd1c
	// Line 998, Address: 0x3004f4, Func Offset: 0xd24
	// Line 972, Address: 0x300504, Func Offset: 0xd34
	// Line 998, Address: 0x300508, Func Offset: 0xd38
	// Line 972, Address: 0x30050c, Func Offset: 0xd3c
	// Line 998, Address: 0x300510, Func Offset: 0xd40
	// Line 972, Address: 0x300528, Func Offset: 0xd58
	// Line 998, Address: 0x30052c, Func Offset: 0xd5c
	// Line 972, Address: 0x30053c, Func Offset: 0xd6c
	// Line 998, Address: 0x300544, Func Offset: 0xd74
	// Line 972, Address: 0x300558, Func Offset: 0xd88
	// Line 998, Address: 0x300560, Func Offset: 0xd90
	// Line 972, Address: 0x300570, Func Offset: 0xda0
	// Line 998, Address: 0x30058c, Func Offset: 0xdbc
	// Line 973, Address: 0x300594, Func Offset: 0xdc4
	// Line 959, Address: 0x30059c, Func Offset: 0xdcc
	// Line 998, Address: 0x3005ac, Func Offset: 0xddc
	// Line 963, Address: 0x3005b4, Func Offset: 0xde4
	// Line 998, Address: 0x3005bc, Func Offset: 0xdec
	// Line 963, Address: 0x3005cc, Func Offset: 0xdfc
	// Line 998, Address: 0x3005d0, Func Offset: 0xe00
	// Line 963, Address: 0x3005d4, Func Offset: 0xe04
	// Line 998, Address: 0x3005d8, Func Offset: 0xe08
	// Line 963, Address: 0x3005f0, Func Offset: 0xe20
	// Line 998, Address: 0x3005f4, Func Offset: 0xe24
	// Line 963, Address: 0x300604, Func Offset: 0xe34
	// Line 998, Address: 0x30060c, Func Offset: 0xe3c
	// Line 963, Address: 0x300620, Func Offset: 0xe50
	// Line 998, Address: 0x300628, Func Offset: 0xe58
	// Line 963, Address: 0x300638, Func Offset: 0xe68
	// Line 998, Address: 0x300654, Func Offset: 0xe84
	// Line 963, Address: 0x30065c, Func Offset: 0xe8c
	// Line 998, Address: 0x300660, Func Offset: 0xe90
	// Line 963, Address: 0x300670, Func Offset: 0xea0
	// Line 998, Address: 0x300674, Func Offset: 0xea4
	// Line 963, Address: 0x300680, Func Offset: 0xeb0
	// Line 998, Address: 0x300684, Func Offset: 0xeb4
	// Line 963, Address: 0x30068c, Func Offset: 0xebc
	// Line 998, Address: 0x300694, Func Offset: 0xec4
	// Line 963, Address: 0x3006a4, Func Offset: 0xed4
	// Line 998, Address: 0x3006a8, Func Offset: 0xed8
	// Line 963, Address: 0x3006ac, Func Offset: 0xedc
	// Line 998, Address: 0x3006b0, Func Offset: 0xee0
	// Line 963, Address: 0x3006c8, Func Offset: 0xef8
	// Line 998, Address: 0x3006cc, Func Offset: 0xefc
	// Line 963, Address: 0x3006dc, Func Offset: 0xf0c
	// Line 998, Address: 0x3006e4, Func Offset: 0xf14
	// Line 963, Address: 0x3006f8, Func Offset: 0xf28
	// Line 998, Address: 0x300700, Func Offset: 0xf30
	// Line 963, Address: 0x300710, Func Offset: 0xf40
	// Line 998, Address: 0x30072c, Func Offset: 0xf5c
	// Line 965, Address: 0x300734, Func Offset: 0xf64
	// Line 963, Address: 0x30073c, Func Offset: 0xf6c
	// Line 972, Address: 0x30074c, Func Offset: 0xf7c
	// Line 993, Address: 0x30075c, Func Offset: 0xf8c
	// Line 1000, Address: 0x30076c, Func Offset: 0xf9c
	// Func End, Address: 0x300784, Func Offset: 0xfb4
}

// zSaveLoad_Tick__Fb
// Start address: 0x300790
void zSaveLoad_Tick(uint8 padUpdate)
{
	xMat4x3 playerMat;
	xVec3 playerVel;
	// Line 532, Address: 0x300790, Func Offset: 0
	// Line 546, Address: 0x3007c0, Func Offset: 0x30
	// Line 547, Address: 0x3007dc, Func Offset: 0x4c
	// Line 546, Address: 0x3007e0, Func Offset: 0x50
	// Line 547, Address: 0x3007e4, Func Offset: 0x54
	// Line 549, Address: 0x3007e8, Func Offset: 0x58
	// Line 546, Address: 0x3007ec, Func Offset: 0x5c
	// Line 549, Address: 0x3007f0, Func Offset: 0x60
	// Line 554, Address: 0x3007fc, Func Offset: 0x6c
	// Line 556, Address: 0x300818, Func Offset: 0x88
	// Line 561, Address: 0x300820, Func Offset: 0x90
	// Line 563, Address: 0x300828, Func Offset: 0x98
	// Line 561, Address: 0x30082c, Func Offset: 0x9c
	// Line 569, Address: 0x300830, Func Offset: 0xa0
	// Line 570, Address: 0x300838, Func Offset: 0xa8
	// Line 571, Address: 0x300848, Func Offset: 0xb8
	// Line 570, Address: 0x30084c, Func Offset: 0xbc
	// Line 576, Address: 0x300850, Func Offset: 0xc0
	// Line 578, Address: 0x300858, Func Offset: 0xc8
	// Line 599, Address: 0x300868, Func Offset: 0xd8
	// Line 602, Address: 0x300870, Func Offset: 0xe0
	// Line 609, Address: 0x30087c, Func Offset: 0xec
	// Line 610, Address: 0x300884, Func Offset: 0xf4
	// Line 609, Address: 0x300888, Func Offset: 0xf8
	// Line 610, Address: 0x30088c, Func Offset: 0xfc
	// Line 608, Address: 0x3008a8, Func Offset: 0x118
	// Line 610, Address: 0x3008ac, Func Offset: 0x11c
	// Line 608, Address: 0x3008d8, Func Offset: 0x148
	// Line 610, Address: 0x3008dc, Func Offset: 0x14c
	// Line 608, Address: 0x3008f4, Func Offset: 0x164
	// Line 610, Address: 0x3008f8, Func Offset: 0x168
	// Line 608, Address: 0x3008fc, Func Offset: 0x16c
	// Line 610, Address: 0x300918, Func Offset: 0x188
	// Line 609, Address: 0x30091c, Func Offset: 0x18c
	// Line 610, Address: 0x300920, Func Offset: 0x190
	// Line 609, Address: 0x30092c, Func Offset: 0x19c
	// Line 610, Address: 0x300930, Func Offset: 0x1a0
	// Line 609, Address: 0x300934, Func Offset: 0x1a4
	// Line 610, Address: 0x300938, Func Offset: 0x1a8
	// Line 612, Address: 0x300a18, Func Offset: 0x288
	// Line 611, Address: 0x300a3c, Func Offset: 0x2ac
	// Line 612, Address: 0x300a40, Func Offset: 0x2b0
	// Line 611, Address: 0x300a44, Func Offset: 0x2b4
	// Line 610, Address: 0x300a48, Func Offset: 0x2b8
	// Line 611, Address: 0x300a4c, Func Offset: 0x2bc
	// Line 612, Address: 0x300a50, Func Offset: 0x2c0
	// Line 611, Address: 0x300a78, Func Offset: 0x2e8
	// Line 612, Address: 0x300a7c, Func Offset: 0x2ec
	// Line 611, Address: 0x300adc, Func Offset: 0x34c
	// Line 612, Address: 0x300ae4, Func Offset: 0x354
	// Line 611, Address: 0x300aec, Func Offset: 0x35c
	// Line 612, Address: 0x300af8, Func Offset: 0x368
	// Line 611, Address: 0x300afc, Func Offset: 0x36c
	// Line 612, Address: 0x300b04, Func Offset: 0x374
	// Line 611, Address: 0x300b08, Func Offset: 0x378
	// Line 612, Address: 0x300b0c, Func Offset: 0x37c
	// Line 611, Address: 0x300b34, Func Offset: 0x3a4
	// Line 612, Address: 0x300b38, Func Offset: 0x3a8
	// Line 611, Address: 0x300b3c, Func Offset: 0x3ac
	// Line 612, Address: 0x300b40, Func Offset: 0x3b0
	// Line 611, Address: 0x300b54, Func Offset: 0x3c4
	// Line 612, Address: 0x300b58, Func Offset: 0x3c8
	// Line 611, Address: 0x300b70, Func Offset: 0x3e0
	// Line 612, Address: 0x300b74, Func Offset: 0x3e4
	// Line 611, Address: 0x300b78, Func Offset: 0x3e8
	// Line 612, Address: 0x300b80, Func Offset: 0x3f0
	// Line 611, Address: 0x300b94, Func Offset: 0x404
	// Line 612, Address: 0x300ba0, Func Offset: 0x410
	// Line 611, Address: 0x300bcc, Func Offset: 0x43c
	// Line 612, Address: 0x300bfc, Func Offset: 0x46c
	// Line 611, Address: 0x300c00, Func Offset: 0x470
	// Line 612, Address: 0x300c04, Func Offset: 0x474
	// Line 611, Address: 0x300c0c, Func Offset: 0x47c
	// Line 612, Address: 0x300c20, Func Offset: 0x490
	// Line 611, Address: 0x300c2c, Func Offset: 0x49c
	// Line 612, Address: 0x300c30, Func Offset: 0x4a0
	// Line 611, Address: 0x300c34, Func Offset: 0x4a4
	// Line 612, Address: 0x300c80, Func Offset: 0x4f0
	// Line 611, Address: 0x300c88, Func Offset: 0x4f8
	// Line 612, Address: 0x300c8c, Func Offset: 0x4fc
	// Line 613, Address: 0x300cc4, Func Offset: 0x534
	// Line 615, Address: 0x300ccc, Func Offset: 0x53c
	// Line 618, Address: 0x300ce8, Func Offset: 0x558
	// Line 621, Address: 0x300cfc, Func Offset: 0x56c
	// Line 622, Address: 0x300d04, Func Offset: 0x574
	// Line 623, Address: 0x300d0c, Func Offset: 0x57c
	// Line 629, Address: 0x300d18, Func Offset: 0x588
	// Line 623, Address: 0x300d1c, Func Offset: 0x58c
	// Line 629, Address: 0x300d20, Func Offset: 0x590
	// Line 634, Address: 0x300e44, Func Offset: 0x6b4
	// Line 641, Address: 0x300e4c, Func Offset: 0x6bc
	// Line 651, Address: 0x300e54, Func Offset: 0x6c4
	// Line 653, Address: 0x300e64, Func Offset: 0x6d4
	// Line 655, Address: 0x300e6c, Func Offset: 0x6dc
	// Line 553, Address: 0x300e78, Func Offset: 0x6e8
	// Line 655, Address: 0x300e80, Func Offset: 0x6f0
	// Line 612, Address: 0x300eac, Func Offset: 0x71c
	// Line 655, Address: 0x300eb4, Func Offset: 0x724
	// Func End, Address: 0x300ee8, Func Offset: 0x758
}

