



void ASG_ISG_changed(en_CHGCODE what);
void Discard();
int32 SetCache(int32 targ, int32 game, int32 physicalSlot);
int32 IsValid();
XSGAutoData* xSGAutoSave_GetCache();
int32 xSG_ld_flipload(st_XSAVEGAME_DATA* xsgdata);
int32 xSG_ld_findcltblk(st_XSAVEGAME_DATA* xsgdata);
int32 xSG_ld_readhead(st_XSAVEGAME_DATA* xsgdata);
void xSG_cb_ISGChange(en_CHGCODE what);
int32 xSG_sv_commit(st_XSAVEGAME_DATA* xsgdata);
void xSGSetWriteIcon(int32 flag);
int32 xSG_smem_cltclose(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_CLIENT* clt);
int32 xSG_smem_blkclose(st_XSAVEGAME_DATA* xsgdata);
int32 xSG_sv_flipproc(st_XSAVEGAME_DATA* xsgdata);
int32 xSG_sv_prepdest(st_XSAVEGAME_DATA* xsgdata);
int32 xSG_sv_flipinfo(st_XSAVEGAME_DATA* xsgdata);
int32 xSG_grab_leaders(st_XSAVEGAME_DATA* xsgdata);
int32 xSGReadData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt, float32* buff, int32 n);
int32 xSGReadData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt, int32* buff, int32 n);
int32 xSGReadData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt, int8* buff, int32 n);
int32 xSGReadData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt, int8* buff, int32 elesiz, int32 n);
int32 xSGWriteData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt, float32* data, int32 n);
int32 xSGWriteData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt, int32* data, int32 n);
int32 xSGWriteData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt, int8* data, int32 n);
int32 xSGWriteStrLen(int8* str);
int32 xSGWriteData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt, int8* data, int32 elesiz, int32 n);
int32 xSG_cb_leader_load(st_XSAVEGAME_DATA* original_xsgdata, st_XSAVEGAME_READCONTEXT* rctxt);
int32 xSG_cb_leader_svproc(void* cltdata, st_XSAVEGAME_DATA* original_xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt);
int32 xSG_cb_leader_svinfo(int32* cur_space, int32* max_fullgame);
en_XSGASYNC_STATUS xSGAsyncStatus(st_XSAVEGAME_DATA* xsgdata, int32 block, en_XSG_WHYFAIL* whyFail, int8* errmsg);
int32 xSGWrapup(st_XSAVEGAME_DATA* xsgdata);
int32 xSGProcess(st_XSAVEGAME_DATA* xsgdata);
int32 xSGSetup(st_XSAVEGAME_DATA* xsgdata, int32 gidx, int8* label, int32 progress, long32 playtime, int32 thumbIconIdx);
int32 xSGSetup(st_XSAVEGAME_DATA* xsgdata);
int32 xSGAddLoadClient(st_XSAVEGAME_DATA* xsgdata, uint32 clttag, void* cltdata, int32(*loadfunc)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_READCONTEXT*, uint32, int32));
int32 xSGAddSaveClient(st_XSAVEGAME_DATA* xsgdata, uint32 clttag, void* cltdata, int32(*infofunc)(void*, st_XSAVEGAME_DATA*, int32*, int32*), int32(*procfunc)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_WRITECONTEXT*));
int32 xSGGameProgress(st_XSAVEGAME_DATA* xsgdata, int32 gidx);
int32 xSGGameThumbIndex(st_XSAVEGAME_DATA* xsgdata, int32 gidx);
int8* xSGGameLabel(st_XSAVEGAME_DATA* xsgdata, int32 gidx);
int8* xSGGameModDate(st_XSAVEGAME_DATA* xsgdata, int32 gidx);
int32 xSGGameSize(st_XSAVEGAME_DATA* xsgdata, int32 gidx);
int32 xSGGameIsEmpty(st_XSAVEGAME_DATA* xsgdata, int32 gidx);
void xSGGameSet(st_XSAVEGAME_DATA* xsgdata, int32 gidx);
uint8 xSGCheckMemoryCard(st_XSAVEGAME_DATA* xsgdata, int32 index);
int32 xSGTgtHaveRoomStartup(st_XSAVEGAME_DATA* xsgdata, int32 tidx, int32 fsize, int32 slotidx, int32* bytesNeeded, int32* availOnDisk, int32* needFile);
int32 xSGTgtHaveRoom(st_XSAVEGAME_DATA* xsgdata, int32 tidx, int32 fsize, int32 slotidx, int32* bytesNeeded, int32* availOnDisk, int32* needFile);
int32 xSGTgtHasGameDir(st_XSAVEGAME_DATA* xsgdata, int32 tidx);
int32 xSGTgtSelect(st_XSAVEGAME_DATA* xsgdata, int32 tidx);
int32 xSGTgtFormatTgt(st_XSAVEGAME_DATA* xsgdata, int32 tidx, int32* canRecover);
int32 xSGTgtIsFormat(st_XSAVEGAME_DATA* xsgdata, int32 tidx, int32* badEncode);
int32 xSGTgtPhysSlotIdx(st_XSAVEGAME_DATA* xsgdata, int32 tidx);
int32 xSGTgtCount(st_XSAVEGAME_DATA* xsgdata, int32* max);
int32 xSGDone(st_XSAVEGAME_DATA* xsgdata);
st_XSAVEGAME_DATA* xSGInit(en_SAVEGAME_MODE mode);
int32 xSGShutdown();
int32 xSGStartup();

// ASG_ISG_changed__FPv10en_CHGCODE
// Start address: 0x39cda0
void ASG_ISG_changed(en_CHGCODE what)
{
	XSGAutoData* asg;
	// Line 2653, Address: 0x39cda0, Func Offset: 0
	// Line 2658, Address: 0x39cda4, Func Offset: 0x4
	// Line 2662, Address: 0x39cdc8, Func Offset: 0x28
	// Line 2663, Address: 0x39cdd4, Func Offset: 0x34
	// Line 2667, Address: 0x39cddc, Func Offset: 0x3c
	// Line 2679, Address: 0x39cdec, Func Offset: 0x4c
	// Func End, Address: 0x39cdf4, Func Offset: 0x54
}

// Discard__11XSGAutoDataFv
// Start address: 0x39ce00
void XSGAutoData::Discard()
{
	// Line 2619, Address: 0x39ce00, Func Offset: 0
	// Line 2622, Address: 0x39ce04, Func Offset: 0x4
	// Line 2619, Address: 0x39ce08, Func Offset: 0x8
	// Line 2620, Address: 0x39ce10, Func Offset: 0x10
	// Line 2622, Address: 0x39ce18, Func Offset: 0x18
	// Line 2623, Address: 0x39ce1c, Func Offset: 0x1c
	// Line 2624, Address: 0x39ce20, Func Offset: 0x20
	// Line 2625, Address: 0x39ce28, Func Offset: 0x28
	// Line 2626, Address: 0x39ce38, Func Offset: 0x38
	// Line 2629, Address: 0x39ce3c, Func Offset: 0x3c
	// Func End, Address: 0x39ce4c, Func Offset: 0x4c
}

// SetCache__11XSGAutoDataFiii
// Start address: 0x39ce50
int32 XSGAutoData::SetCache(int32 targ, int32 game, int32 physicalSlot)
{
	// Line 2602, Address: 0x39ce50, Func Offset: 0
	// Line 2604, Address: 0x39ce54, Func Offset: 0x4
	// Line 2602, Address: 0x39ce58, Func Offset: 0x8
	// Line 2604, Address: 0x39ce74, Func Offset: 0x24
	// Line 2607, Address: 0x39ce9c, Func Offset: 0x4c
	// Line 2608, Address: 0x39cebc, Func Offset: 0x6c
	// Line 2610, Address: 0x39ced0, Func Offset: 0x80
	// Line 2615, Address: 0x39ced4, Func Offset: 0x84
	// Line 2611, Address: 0x39ced8, Func Offset: 0x88
	// Line 2612, Address: 0x39cedc, Func Offset: 0x8c
	// Line 2613, Address: 0x39cee0, Func Offset: 0x90
	// Line 2616, Address: 0x39ceec, Func Offset: 0x9c
	// Func End, Address: 0x39cf08, Func Offset: 0xb8
}

// IsValid__11XSGAutoDataFv
// Start address: 0x39cf10
int32 XSGAutoData::IsValid()
{
	// Line 2585, Address: 0x39cf10, Func Offset: 0
	// Line 2586, Address: 0x39cf1c, Func Offset: 0xc
	// Line 2592, Address: 0x39cf2c, Func Offset: 0x1c
	// Line 2589, Address: 0x39cf50, Func Offset: 0x40
	// Line 2593, Address: 0x39cf60, Func Offset: 0x50
	// Func End, Address: 0x39cf70, Func Offset: 0x60
}

// xSGAutoSave_GetCache__Fv
// Start address: 0x39cf70
XSGAutoData* xSGAutoSave_GetCache()
{
	// Line 2555, Address: 0x39cf70, Func Offset: 0
	// Func End, Address: 0x39cf7c, Func Offset: 0xc
}

// xSG_ld_flipload__FP17st_XSAVEGAME_DATA
// Start address: 0x39cf80
int32 xSG_ld_flipload(st_XSAVEGAME_DATA* xsgdata)
{
	int32 result;
	int32 rc;
	int32 i;
	st_XSAVEGAME_CLIENT* clt;
	// Line 2507, Address: 0x39cf80, Func Offset: 0
	// Line 2508, Address: 0x39cf98, Func Offset: 0x18
	// Line 2507, Address: 0x39cf9c, Func Offset: 0x1c
	// Line 2515, Address: 0x39cfa4, Func Offset: 0x24
	// Line 2518, Address: 0x39cfb8, Func Offset: 0x38
	// Line 2519, Address: 0x39cfdc, Func Offset: 0x5c
	// Line 2520, Address: 0x39cfe8, Func Offset: 0x68
	// Line 2524, Address: 0x39d004, Func Offset: 0x84
	// Line 2525, Address: 0x39d00c, Func Offset: 0x8c
	// Line 2527, Address: 0x39d018, Func Offset: 0x98
	// Line 2534, Address: 0x39d01c, Func Offset: 0x9c
	// Line 2536, Address: 0x39d020, Func Offset: 0xa0
	// Line 2537, Address: 0x39d028, Func Offset: 0xa8
	// Line 2539, Address: 0x39d040, Func Offset: 0xc0
	// Line 2540, Address: 0x39d060, Func Offset: 0xe0
	// Func End, Address: 0x39d080, Func Offset: 0x100
}

// xSG_ld_findcltblk__FP17st_XSAVEGAME_DATA
// Start address: 0x39d080
int32 xSG_ld_findcltblk(st_XSAVEGAME_DATA* xsgdata)
{
	int32 ival;
	uint32 tag;
	int32 maxamt;
	int32 actamt;
	st_XSAVEGAME_CLIENT* clt;
	int32 i;
	int32 found;
	int32 rc;
	st_XSAVEGAME_CLIENT* dfltclt;
	// Line 2340, Address: 0x39d080, Func Offset: 0
	// Line 2363, Address: 0x39d084, Func Offset: 0x4
	// Line 2340, Address: 0x39d088, Func Offset: 0x8
	// Line 2363, Address: 0x39d08c, Func Offset: 0xc
	// Line 2340, Address: 0x39d090, Func Offset: 0x10
	// Line 2363, Address: 0x39d094, Func Offset: 0x14
	// Line 2340, Address: 0x39d098, Func Offset: 0x18
	// Line 2363, Address: 0x39d0a4, Func Offset: 0x24
	// Line 2343, Address: 0x39d0a8, Func Offset: 0x28
	// Line 2356, Address: 0x39d0ac, Func Offset: 0x2c
	// Line 2344, Address: 0x39d0b0, Func Offset: 0x30
	// Line 2345, Address: 0x39d0b4, Func Offset: 0x34
	// Line 2346, Address: 0x39d0b8, Func Offset: 0x38
	// Line 2359, Address: 0x39d0bc, Func Offset: 0x3c
	// Line 2360, Address: 0x39d0c4, Func Offset: 0x44
	// Line 2363, Address: 0x39d0c8, Func Offset: 0x48
	// Line 2364, Address: 0x39d0d0, Func Offset: 0x50
	// Line 2365, Address: 0x39d0e8, Func Offset: 0x68
	// Line 2366, Address: 0x39d100, Func Offset: 0x80
	// Line 2370, Address: 0x39d118, Func Offset: 0x98
	// Line 2501, Address: 0x39d124, Func Offset: 0xa4
	// Line 2380, Address: 0x39d12c, Func Offset: 0xac
	// Line 2501, Address: 0x39d134, Func Offset: 0xb4
	// Line 2380, Address: 0x39d138, Func Offset: 0xb8
	// Line 2501, Address: 0x39d140, Func Offset: 0xc0
	// Line 2377, Address: 0x39d144, Func Offset: 0xc4
	// Line 2501, Address: 0x39d148, Func Offset: 0xc8
	// Line 2381, Address: 0x39d154, Func Offset: 0xd4
	// Line 2501, Address: 0x39d15c, Func Offset: 0xdc
	// Line 2381, Address: 0x39d160, Func Offset: 0xe0
	// Line 2501, Address: 0x39d164, Func Offset: 0xe4
	// Line 2382, Address: 0x39d16c, Func Offset: 0xec
	// Line 2501, Address: 0x39d174, Func Offset: 0xf4
	// Line 2382, Address: 0x39d178, Func Offset: 0xf8
	// Line 2501, Address: 0x39d17c, Func Offset: 0xfc
	// Line 2396, Address: 0x39d1b8, Func Offset: 0x138
	// Line 2501, Address: 0x39d1bc, Func Offset: 0x13c
	// Line 2411, Address: 0x39d1e0, Func Offset: 0x160
	// Line 2501, Address: 0x39d1e8, Func Offset: 0x168
	// Line 2439, Address: 0x39d21c, Func Offset: 0x19c
	// Line 2501, Address: 0x39d220, Func Offset: 0x1a0
	// Line 2470, Address: 0x39d300, Func Offset: 0x280
	// Line 2501, Address: 0x39d308, Func Offset: 0x288
	// Line 2502, Address: 0x39d330, Func Offset: 0x2b0
	// Func End, Address: 0x39d348, Func Offset: 0x2c8
}

// xSG_ld_readhead__FP17st_XSAVEGAME_DATA
// Start address: 0x39d350
int32 xSG_ld_readhead(st_XSAVEGAME_DATA* xsgdata)
{
	int32 result;
	int32 ival;
	// Line 2233, Address: 0x39d350, Func Offset: 0
	// Line 2246, Address: 0x39d354, Func Offset: 0x4
	// Line 2233, Address: 0x39d358, Func Offset: 0x8
	// Line 2246, Address: 0x39d35c, Func Offset: 0xc
	// Line 2233, Address: 0x39d360, Func Offset: 0x10
	// Line 2246, Address: 0x39d364, Func Offset: 0x14
	// Line 2233, Address: 0x39d368, Func Offset: 0x18
	// Line 2235, Address: 0x39d370, Func Offset: 0x20
	// Line 2234, Address: 0x39d374, Func Offset: 0x24
	// Line 2242, Address: 0x39d378, Func Offset: 0x28
	// Line 2246, Address: 0x39d37c, Func Offset: 0x2c
	// Line 2242, Address: 0x39d380, Func Offset: 0x30
	// Line 2243, Address: 0x39d384, Func Offset: 0x34
	// Line 2246, Address: 0x39d388, Func Offset: 0x38
	// Line 2248, Address: 0x39d390, Func Offset: 0x40
	// Line 2250, Address: 0x39d3a4, Func Offset: 0x54
	// Line 2257, Address: 0x39d3a8, Func Offset: 0x58
	// Line 2259, Address: 0x39d3bc, Func Offset: 0x6c
	// Line 2261, Address: 0x39d3cc, Func Offset: 0x7c
	// Line 2268, Address: 0x39d3d0, Func Offset: 0x80
	// Line 2269, Address: 0x39d3e4, Func Offset: 0x94
	// Line 2273, Address: 0x39d3e8, Func Offset: 0x98
	// Line 2274, Address: 0x39d404, Func Offset: 0xb4
	// Line 2285, Address: 0x39d408, Func Offset: 0xb8
	// Line 2274, Address: 0x39d40c, Func Offset: 0xbc
	// Line 2286, Address: 0x39d410, Func Offset: 0xc0
	// Func End, Address: 0x39d424, Func Offset: 0xd4
}

// xSG_cb_ISGChange__FPv10en_CHGCODE
// Start address: 0x39d430
void xSG_cb_ISGChange(en_CHGCODE what)
{
	XSGAutoData* asg;
	// Line 2142, Address: 0x39d430, Func Offset: 0
	// Line 2145, Address: 0x39d434, Func Offset: 0x4
	// Line 2149, Address: 0x39d458, Func Offset: 0x28
	// Line 2150, Address: 0x39d464, Func Offset: 0x34
	// Line 2154, Address: 0x39d46c, Func Offset: 0x3c
	// Line 2166, Address: 0x39d47c, Func Offset: 0x4c
	// Func End, Address: 0x39d484, Func Offset: 0x54
}

// xSG_sv_commit__FP17st_XSAVEGAME_DATA
// Start address: 0x39d490
int32 xSG_sv_commit(st_XSAVEGAME_DATA* xsgdata)
{
	int32 result;
	int32 rc;
	int8* name;
	int8 browselabel[64];
	// Line 2087, Address: 0x39d490, Func Offset: 0
	// Line 2092, Address: 0x39d494, Func Offset: 0x4
	// Line 2087, Address: 0x39d498, Func Offset: 0x8
	// Line 2092, Address: 0x39d49c, Func Offset: 0xc
	// Line 2087, Address: 0x39d4a0, Func Offset: 0x10
	// Line 2092, Address: 0x39d4ac, Func Offset: 0x1c
	// Line 2102, Address: 0x39d4d0, Func Offset: 0x40
	// Line 2105, Address: 0x39d4e0, Func Offset: 0x50
	// Line 2112, Address: 0x39d4f0, Func Offset: 0x60
	// Line 2130, Address: 0x39d4fc, Func Offset: 0x6c
	// Line 2118, Address: 0x39d514, Func Offset: 0x84
	// Line 2130, Address: 0x39d51c, Func Offset: 0x8c
	// Line 2122, Address: 0x39d54c, Func Offset: 0xbc
	// Line 2130, Address: 0x39d550, Func Offset: 0xc0
	// Line 2123, Address: 0x39d55c, Func Offset: 0xcc
	// Line 2130, Address: 0x39d560, Func Offset: 0xd0
	// Line 2123, Address: 0x39d564, Func Offset: 0xd4
	// Line 2130, Address: 0x39d568, Func Offset: 0xd8
	// Line 2131, Address: 0x39d584, Func Offset: 0xf4
	// Func End, Address: 0x39d598, Func Offset: 0x108
}

// xSGSetWriteIcon__Fi
// Start address: 0x39d5a0
void xSGSetWriteIcon(int32 flag)
{
	// Line 2079, Address: 0x39d5a0, Func Offset: 0
	// Func End, Address: 0x39d5a8, Func Offset: 0x8
}

// xSG_smem_cltclose__FP17st_XSAVEGAME_DATAP19st_XSAVEGAME_CLIENT
// Start address: 0x39d5b0
int32 xSG_smem_cltclose(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_CLIENT* clt)
{
	int8* last_bufpos;
	// Line 2033, Address: 0x39d5b0, Func Offset: 0
	// Line 2042, Address: 0x39d5c8, Func Offset: 0x18
	// Line 2045, Address: 0x39d5d8, Func Offset: 0x28
	// Line 2049, Address: 0x39d5dc, Func Offset: 0x2c
	// Line 2050, Address: 0x39d5f0, Func Offset: 0x40
	// Line 2055, Address: 0x39d5fc, Func Offset: 0x4c
	// Line 2059, Address: 0x39d600, Func Offset: 0x50
	// Line 2058, Address: 0x39d604, Func Offset: 0x54
	// Line 2059, Address: 0x39d608, Func Offset: 0x58
	// Line 2060, Address: 0x39d620, Func Offset: 0x70
	// Line 2063, Address: 0x39d624, Func Offset: 0x74
	// Line 2062, Address: 0x39d628, Func Offset: 0x78
	// Line 2063, Address: 0x39d62c, Func Offset: 0x7c
	// Line 2064, Address: 0x39d644, Func Offset: 0x94
	// Line 2066, Address: 0x39d648, Func Offset: 0x98
	// Line 2068, Address: 0x39d650, Func Offset: 0xa0
	// Line 2072, Address: 0x39d65c, Func Offset: 0xac
	// Line 2071, Address: 0x39d660, Func Offset: 0xb0
	// Line 2072, Address: 0x39d664, Func Offset: 0xb4
	// Func End, Address: 0x39d678, Func Offset: 0xc8
}

// xSG_smem_blkclose__FP17st_XSAVEGAME_DATA
// Start address: 0x39d680
int32 xSG_smem_blkclose(st_XSAVEGAME_DATA* xsgdata)
{
	int8* last_bufpos;
	// Line 1949, Address: 0x39d680, Func Offset: 0
	// Line 1974, Address: 0x39d684, Func Offset: 0x4
	// Line 1949, Address: 0x39d688, Func Offset: 0x8
	// Line 1974, Address: 0x39d68c, Func Offset: 0xc
	// Line 1949, Address: 0x39d690, Func Offset: 0x10
	// Line 1974, Address: 0x39d694, Func Offset: 0x14
	// Line 1949, Address: 0x39d698, Func Offset: 0x18
	// Line 1959, Address: 0x39d6a0, Func Offset: 0x20
	// Line 1974, Address: 0x39d6a4, Func Offset: 0x24
	// Line 1972, Address: 0x39d6a8, Func Offset: 0x28
	// Line 1973, Address: 0x39d6ac, Func Offset: 0x2c
	// Line 1974, Address: 0x39d6b0, Func Offset: 0x30
	// Line 1975, Address: 0x39d6b8, Func Offset: 0x38
	// Line 1980, Address: 0x39d6bc, Func Offset: 0x3c
	// Line 1978, Address: 0x39d6c0, Func Offset: 0x40
	// Line 1980, Address: 0x39d6c4, Func Offset: 0x44
	// Line 1979, Address: 0x39d6c8, Func Offset: 0x48
	// Line 1980, Address: 0x39d6cc, Func Offset: 0x4c
	// Line 1981, Address: 0x39d6e0, Func Offset: 0x60
	// Line 1983, Address: 0x39d6e4, Func Offset: 0x64
	// Line 1988, Address: 0x39d6ec, Func Offset: 0x6c
	// Func End, Address: 0x39d700, Func Offset: 0x80
}

// xSG_sv_flipproc__FP17st_XSAVEGAME_DATA
// Start address: 0x39d700
int32 xSG_sv_flipproc(st_XSAVEGAME_DATA* xsgdata)
{
	int32 result;
	int32 rc;
	int32 i;
	st_XSAVEGAME_CLIENT* clt;
	int8 bfill;
	int32 needfill;
	// Line 1831, Address: 0x39d700, Func Offset: 0
	// Line 1836, Address: 0x39d704, Func Offset: 0x4
	// Line 1831, Address: 0x39d708, Func Offset: 0x8
	// Line 1832, Address: 0x39d714, Func Offset: 0x14
	// Line 1831, Address: 0x39d718, Func Offset: 0x18
	// Line 1836, Address: 0x39d730, Func Offset: 0x30
	// Line 1840, Address: 0x39d734, Func Offset: 0x34
	// Line 1886, Address: 0x39d744, Func Offset: 0x44
	// Line 1845, Address: 0x39d750, Func Offset: 0x50
	// Line 1886, Address: 0x39d754, Func Offset: 0x54
	// Line 1845, Address: 0x39d758, Func Offset: 0x58
	// Line 1886, Address: 0x39d760, Func Offset: 0x60
	// Line 1845, Address: 0x39d774, Func Offset: 0x74
	// Line 1886, Address: 0x39d77c, Func Offset: 0x7c
	// Line 1845, Address: 0x39d780, Func Offset: 0x80
	// Line 1886, Address: 0x39d788, Func Offset: 0x88
	// Line 1845, Address: 0x39d794, Func Offset: 0x94
	// Line 1886, Address: 0x39d79c, Func Offset: 0x9c
	// Line 1845, Address: 0x39d7a0, Func Offset: 0xa0
	// Line 1886, Address: 0x39d7a8, Func Offset: 0xa8
	// Line 1845, Address: 0x39d7b4, Func Offset: 0xb4
	// Line 1886, Address: 0x39d7bc, Func Offset: 0xbc
	// Line 1845, Address: 0x39d7c0, Func Offset: 0xc0
	// Line 1886, Address: 0x39d7c8, Func Offset: 0xc8
	// Line 1850, Address: 0x39d7e0, Func Offset: 0xe0
	// Line 1886, Address: 0x39d7e4, Func Offset: 0xe4
	// Line 1850, Address: 0x39d7f0, Func Offset: 0xf0
	// Line 1886, Address: 0x39d7f4, Func Offset: 0xf4
	// Line 1855, Address: 0x39d808, Func Offset: 0x108
	// Line 1856, Address: 0x39d80c, Func Offset: 0x10c
	// Line 1886, Address: 0x39d810, Func Offset: 0x110
	// Line 1860, Address: 0x39d818, Func Offset: 0x118
	// Line 1886, Address: 0x39d81c, Func Offset: 0x11c
	// Line 1864, Address: 0x39d828, Func Offset: 0x128
	// Line 1886, Address: 0x39d82c, Func Offset: 0x12c
	// Line 1864, Address: 0x39d864, Func Offset: 0x164
	// Line 1886, Address: 0x39d870, Func Offset: 0x170
	// Line 1864, Address: 0x39d87c, Func Offset: 0x17c
	// Line 1886, Address: 0x39d880, Func Offset: 0x180
	// Line 1870, Address: 0x39d890, Func Offset: 0x190
	// Line 1886, Address: 0x39d894, Func Offset: 0x194
	// Line 1874, Address: 0x39d8a8, Func Offset: 0x1a8
	// Line 1886, Address: 0x39d8ac, Func Offset: 0x1ac
	// Line 1887, Address: 0x39d8c0, Func Offset: 0x1c0
	// Func End, Address: 0x39d8e8, Func Offset: 0x1e8
}

// xSG_sv_prepdest__FP17st_XSAVEGAME_DATA
// Start address: 0x39d8f0
int32 xSG_sv_prepdest(st_XSAVEGAME_DATA* xsgdata)
{
	int32 result;
	// Line 1790, Address: 0x39d8f0, Func Offset: 0
	// Line 1796, Address: 0x39d904, Func Offset: 0x14
	// Line 1798, Address: 0x39d910, Func Offset: 0x20
	// Line 1826, Address: 0x39d914, Func Offset: 0x24
	// Line 1814, Address: 0x39d948, Func Offset: 0x58
	// Line 1816, Address: 0x39d950, Func Offset: 0x60
	// Line 1826, Address: 0x39d958, Func Offset: 0x68
	// Line 1827, Address: 0x39d97c, Func Offset: 0x8c
	// Func End, Address: 0x39d990, Func Offset: 0xa0
}

// xSG_sv_flipinfo__FP17st_XSAVEGAME_DATA
// Start address: 0x39d990
int32 xSG_sv_flipinfo(st_XSAVEGAME_DATA* xsgdata)
{
	int32 result;
	int32 i;
	int32 rc;
	st_XSAVEGAME_CLIENT* clt;
	int32 cltamt;
	int32 cltmax;
	// Line 1731, Address: 0x39d990, Func Offset: 0
	// Line 1733, Address: 0x39d9a8, Func Offset: 0x18
	// Line 1731, Address: 0x39d9ac, Func Offset: 0x1c
	// Line 1737, Address: 0x39d9b4, Func Offset: 0x24
	// Line 1738, Address: 0x39d9b8, Func Offset: 0x28
	// Line 1743, Address: 0x39d9bc, Func Offset: 0x2c
	// Line 1784, Address: 0x39d9cc, Func Offset: 0x3c
	// Line 1759, Address: 0x39d9dc, Func Offset: 0x4c
	// Line 1784, Address: 0x39d9e0, Func Offset: 0x50
	// Line 1764, Address: 0x39da70, Func Offset: 0xe0
	// Line 1784, Address: 0x39da78, Func Offset: 0xe8
	// Line 1776, Address: 0x39da7c, Func Offset: 0xec
	// Line 1777, Address: 0x39da84, Func Offset: 0xf4
	// Line 1785, Address: 0x39da8c, Func Offset: 0xfc
	// Func End, Address: 0x39daac, Func Offset: 0x11c
}

// xSG_grab_leaders__FP17st_XSAVEGAME_DATA
// Start address: 0x39dab0
int32 xSG_grab_leaders(st_XSAVEGAME_DATA* xsgdata)
{
	int32 num_found;
	int32 i;
	int8 readbuf[116];
	int32 rc;
	// Line 1596, Address: 0x39dab0, Func Offset: 0
	// Line 1599, Address: 0x39dab4, Func Offset: 0x4
	// Line 1596, Address: 0x39dab8, Func Offset: 0x8
	// Line 1599, Address: 0x39dabc, Func Offset: 0xc
	// Line 1596, Address: 0x39dac0, Func Offset: 0x10
	// Line 1597, Address: 0x39dad4, Func Offset: 0x24
	// Line 1596, Address: 0x39dad8, Func Offset: 0x28
	// Line 1599, Address: 0x39dae0, Func Offset: 0x30
	// Line 1606, Address: 0x39db04, Func Offset: 0x54
	// Line 1611, Address: 0x39db18, Func Offset: 0x68
	// Line 1612, Address: 0x39db44, Func Offset: 0x94
	// Line 1614, Address: 0x39db4c, Func Offset: 0x9c
	// Line 1615, Address: 0x39db5c, Func Offset: 0xac
	// Line 1629, Address: 0x39dc04, Func Offset: 0x154
	// Line 1631, Address: 0x39dc48, Func Offset: 0x198
	// Line 1633, Address: 0x39dc64, Func Offset: 0x1b4
	// Line 1638, Address: 0x39dc6c, Func Offset: 0x1bc
	// Line 1640, Address: 0x39dc7c, Func Offset: 0x1cc
	// Line 1642, Address: 0x39dc8c, Func Offset: 0x1dc
	// Line 1643, Address: 0x39dc90, Func Offset: 0x1e0
	// Func End, Address: 0x39dcb8, Func Offset: 0x208
}

// xSGReadData__FP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTPfi
// Start address: 0x39dcc0
int32 xSGReadData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt, float32* buff, int32 n)
{
	int32 cnt;
	// Line 1586, Address: 0x39dcc4, Func Offset: 0x4
	// Func End, Address: 0x39dccc, Func Offset: 0xc
}

// xSGReadData__FP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTPii
// Start address: 0x39dcd0
int32 xSGReadData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt, int32* buff, int32 n)
{
	int32 cnt;
	// Line 1570, Address: 0x39dcd4, Func Offset: 0x4
	// Func End, Address: 0x39dcdc, Func Offset: 0xc
}

// xSGReadData__FP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTPci
// Start address: 0x39dce0
int32 xSGReadData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt, int8* buff, int32 n)
{
	int32 cnt;
	// Line 1530, Address: 0x39dce4, Func Offset: 0x4
	// Func End, Address: 0x39dcec, Func Offset: 0xc
}

// xSGReadData__FP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTPcii
// Start address: 0x39dcf0
int32 xSGReadData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt, int8* buff, int32 elesiz, int32 n)
{
	int32 cnt;
	st_XSAVEGAME_CLIENT* clt;
	// Line 1416, Address: 0x39dcf0, Func Offset: 0
	// Line 1423, Address: 0x39dd10, Func Offset: 0x20
	// Line 1426, Address: 0x39dd18, Func Offset: 0x28
	// Line 1428, Address: 0x39dd1c, Func Offset: 0x2c
	// Line 1432, Address: 0x39dd24, Func Offset: 0x34
	// Line 1433, Address: 0x39dd2c, Func Offset: 0x3c
	// Line 1434, Address: 0x39dd3c, Func Offset: 0x4c
	// Line 1436, Address: 0x39dd48, Func Offset: 0x58
	// Line 1423, Address: 0x39dd50, Func Offset: 0x60
	// Line 1428, Address: 0x39dd58, Func Offset: 0x68
	// Line 1444, Address: 0x39dd60, Func Offset: 0x70
	// Line 1448, Address: 0x39dd78, Func Offset: 0x88
	// Line 1449, Address: 0x39dd84, Func Offset: 0x94
	// Line 1451, Address: 0x39dd8c, Func Offset: 0x9c
	// Line 1452, Address: 0x39dd94, Func Offset: 0xa4
	// Line 1453, Address: 0x39dda0, Func Offset: 0xb0
	// Line 1454, Address: 0x39ddac, Func Offset: 0xbc
	// Line 1461, Address: 0x39ddb8, Func Offset: 0xc8
	// Line 1445, Address: 0x39ddcc, Func Offset: 0xdc
	// Line 1461, Address: 0x39ddd0, Func Offset: 0xe0
	// Line 1462, Address: 0x39dde0, Func Offset: 0xf0
	// Func End, Address: 0x39ddfc, Func Offset: 0x10c
}

// xSGWriteData__FP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXTPfi
// Start address: 0x39de00
int32 xSGWriteData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt, float32* data, int32 n)
{
	int32 cnt;
	// Line 1402, Address: 0x39de04, Func Offset: 0x4
	// Func End, Address: 0x39de0c, Func Offset: 0xc
}

// xSGWriteData__FP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXTPii
// Start address: 0x39de10
int32 xSGWriteData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt, int32* data, int32 n)
{
	int32 cnt;
	// Line 1378, Address: 0x39de14, Func Offset: 0x4
	// Func End, Address: 0x39de1c, Func Offset: 0xc
}

// xSGWriteData__FP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXTPci
// Start address: 0x39de20
int32 xSGWriteData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt, int8* data, int32 n)
{
	int32 cnt;
	// Line 1330, Address: 0x39de24, Func Offset: 0x4
	// Func End, Address: 0x39de2c, Func Offset: 0xc
}

// xSGWriteStrLen__FPCc
// Start address: 0x39de30
int32 xSGWriteStrLen(int8* str)
{
	int32 len;
	// Line 1314, Address: 0x39de30, Func Offset: 0
	// Line 1318, Address: 0x39de38, Func Offset: 0x8
	// Line 1321, Address: 0x39de40, Func Offset: 0x10
	// Line 1319, Address: 0x39de44, Func Offset: 0x14
	// Line 1321, Address: 0x39de54, Func Offset: 0x24
	// Func End, Address: 0x39de5c, Func Offset: 0x2c
}

// xSGWriteData__FP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXTPcii
// Start address: 0x39de60
int32 xSGWriteData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt, int8* data, int32 elesiz, int32 n)
{
	int32 cnt;
	st_XSAVEGAME_CLIENT* clt;
	int32 is_ok;
	void* mcprc;
	// Line 1223, Address: 0x39de60, Func Offset: 0
	// Line 1232, Address: 0x39de88, Func Offset: 0x28
	// Line 1235, Address: 0x39de9c, Func Offset: 0x3c
	// Line 1238, Address: 0x39dea4, Func Offset: 0x44
	// Line 1240, Address: 0x39dea8, Func Offset: 0x48
	// Line 1244, Address: 0x39deb0, Func Offset: 0x50
	// Line 1247, Address: 0x39debc, Func Offset: 0x5c
	// Line 1250, Address: 0x39ded4, Func Offset: 0x74
	// Line 1232, Address: 0x39dee0, Func Offset: 0x80
	// Line 1235, Address: 0x39dee8, Func Offset: 0x88
	// Line 1240, Address: 0x39def0, Func Offset: 0x90
	// Line 1261, Address: 0x39def8, Func Offset: 0x98
	// Line 1263, Address: 0x39df08, Func Offset: 0xa8
	// Line 1270, Address: 0x39df10, Func Offset: 0xb0
	// Line 1274, Address: 0x39df1c, Func Offset: 0xbc
	// Line 1282, Address: 0x39df2c, Func Offset: 0xcc
	// Line 1286, Address: 0x39df34, Func Offset: 0xd4
	// Line 1266, Address: 0x39df44, Func Offset: 0xe4
	// Line 1286, Address: 0x39df4c, Func Offset: 0xec
	// Line 1283, Address: 0x39df70, Func Offset: 0x110
	// Line 1284, Address: 0x39df74, Func Offset: 0x114
	// Line 1283, Address: 0x39df78, Func Offset: 0x118
	// Line 1286, Address: 0x39df7c, Func Offset: 0x11c
	// Line 1287, Address: 0x39df80, Func Offset: 0x120
	// Func End, Address: 0x39dfa0, Func Offset: 0x140
}

// xSG_cb_leader_load__FPvP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTUii
// Start address: 0x39dfa0
int32 xSG_cb_leader_load(st_XSAVEGAME_DATA* original_xsgdata, st_XSAVEGAME_READCONTEXT* rctxt)
{
	int8 fundata[32];
	st_XSAVEGAME_LEADER discard;
	// Line 1184, Address: 0x39dfa0, Func Offset: 0
	// Line 1189, Address: 0x39dfa4, Func Offset: 0x4
	// Line 1184, Address: 0x39dfa8, Func Offset: 0x8
	// Line 1189, Address: 0x39dfac, Func Offset: 0xc
	// Line 1184, Address: 0x39dfb0, Func Offset: 0x10
	// Line 1189, Address: 0x39dfbc, Func Offset: 0x1c
	// Line 1190, Address: 0x39dfe0, Func Offset: 0x40
	// Line 1195, Address: 0x39e008, Func Offset: 0x68
	// Line 1196, Address: 0x39e020, Func Offset: 0x80
	// Line 1201, Address: 0x39e038, Func Offset: 0x98
	// Line 1200, Address: 0x39e03c, Func Offset: 0x9c
	// Line 1201, Address: 0x39e040, Func Offset: 0xa0
	// Func End, Address: 0x39e050, Func Offset: 0xb0
}

// xSG_cb_leader_svproc__FPvP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXT
// Start address: 0x39e050
int32 xSG_cb_leader_svproc(void* cltdata, st_XSAVEGAME_DATA* original_xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt)
{
	st_XSAVEGAME_DATA* xsg;
	st_XSAVEGAME_LEADER leader;
	int8 fundata[23];
	// Line 1152, Address: 0x39e050, Func Offset: 0
	// Line 1158, Address: 0x39e054, Func Offset: 0x4
	// Line 1152, Address: 0x39e058, Func Offset: 0x8
	// Line 1158, Address: 0x39e05c, Func Offset: 0xc
	// Line 1152, Address: 0x39e060, Func Offset: 0x10
	// Line 1158, Address: 0x39e074, Func Offset: 0x24
	// Line 1159, Address: 0x39e098, Func Offset: 0x48
	// Line 1169, Address: 0x39e0c4, Func Offset: 0x74
	// Line 1170, Address: 0x39e0d4, Func Offset: 0x84
	// Line 1176, Address: 0x39e0d8, Func Offset: 0x88
	// Line 1171, Address: 0x39e0dc, Func Offset: 0x8c
	// Line 1176, Address: 0x39e0e0, Func Offset: 0x90
	// Line 1171, Address: 0x39e0f0, Func Offset: 0xa0
	// Line 1172, Address: 0x39e0f4, Func Offset: 0xa4
	// Line 1173, Address: 0x39e0fc, Func Offset: 0xac
	// Line 1176, Address: 0x39e100, Func Offset: 0xb0
	// Line 1177, Address: 0x39e108, Func Offset: 0xb8
	// Line 1180, Address: 0x39e120, Func Offset: 0xd0
	// Line 1179, Address: 0x39e124, Func Offset: 0xd4
	// Line 1180, Address: 0x39e128, Func Offset: 0xd8
	// Func End, Address: 0x39e13c, Func Offset: 0xec
}

// xSG_cb_leader_svinfo__FPvP17st_XSAVEGAME_DATAPiPi
// Start address: 0x39e140
int32 xSG_cb_leader_svinfo(int32* cur_space, int32* max_fullgame)
{
	// Line 1144, Address: 0x39e140, Func Offset: 0
	// Line 1147, Address: 0x39e144, Func Offset: 0x4
	// Line 1144, Address: 0x39e148, Func Offset: 0x8
	// Line 1148, Address: 0x39e14c, Func Offset: 0xc
	// Func End, Address: 0x39e154, Func Offset: 0x14
}

// xSGAsyncStatus__FP17st_XSAVEGAME_DATAiP14en_XSG_WHYFAILPc
// Start address: 0x39e160
en_XSGASYNC_STATUS xSGAsyncStatus(st_XSAVEGAME_DATA* xsgdata, int32 block, en_XSG_WHYFAIL* whyFail, int8* errmsg)
{
	en_XSGASYNC_STATUS xstat;
	en_ASYNC_OPSTAT istat;
	en_ASYNC_OPERR whyerr;
	en_XSG_WHYFAIL con;
	// Line 1065, Address: 0x39e160, Func Offset: 0
	// Line 1066, Address: 0x39e188, Func Offset: 0x28
	// Line 1071, Address: 0x39e18c, Func Offset: 0x2c
	// Line 1081, Address: 0x39e19c, Func Offset: 0x3c
	// Line 1082, Address: 0x39e1ac, Func Offset: 0x4c
	// Line 1085, Address: 0x39e1b4, Func Offset: 0x54
	// Line 1087, Address: 0x39e1bc, Func Offset: 0x5c
	// Line 1095, Address: 0x39e1c0, Func Offset: 0x60
	// Line 1098, Address: 0x39e1d0, Func Offset: 0x70
	// Line 1103, Address: 0x39e224, Func Offset: 0xc4
	// Line 1107, Address: 0x39e22c, Func Offset: 0xcc
	// Line 1110, Address: 0x39e234, Func Offset: 0xd4
	// Line 1114, Address: 0x39e23c, Func Offset: 0xdc
	// Line 1120, Address: 0x39e244, Func Offset: 0xe4
	// Line 1124, Address: 0x39e248, Func Offset: 0xe8
	// Line 1127, Address: 0x39e24c, Func Offset: 0xec
	// Line 1074, Address: 0x39e25c, Func Offset: 0xfc
	// Line 1127, Address: 0x39e260, Func Offset: 0x100
	// Line 1076, Address: 0x39e268, Func Offset: 0x108
	// Line 1127, Address: 0x39e26c, Func Offset: 0x10c
	// Line 1076, Address: 0x39e284, Func Offset: 0x124
	// Line 1128, Address: 0x39e28c, Func Offset: 0x12c
	// Func End, Address: 0x39e2a8, Func Offset: 0x148
}

// xSGWrapup__FP17st_XSAVEGAME_DATA
// Start address: 0x39e2b0
int32 xSGWrapup(st_XSAVEGAME_DATA* xsgdata)
{
	int32 result;
	int32 rc;
	// Line 984, Address: 0x39e2b0, Func Offset: 0
	// Line 986, Address: 0x39e2b4, Func Offset: 0x4
	// Line 984, Address: 0x39e2b8, Func Offset: 0x8
	// Line 986, Address: 0x39e2cc, Func Offset: 0x1c
	// Line 988, Address: 0x39e2d0, Func Offset: 0x20
	// Line 989, Address: 0x39e2e0, Func Offset: 0x30
	// Line 993, Address: 0x39e2ec, Func Offset: 0x3c
	// Line 994, Address: 0x39e2f4, Func Offset: 0x44
	// Line 996, Address: 0x39e2f8, Func Offset: 0x48
	// Line 994, Address: 0x39e2fc, Func Offset: 0x4c
	// Line 1000, Address: 0x39e300, Func Offset: 0x50
	// Line 1001, Address: 0x39e310, Func Offset: 0x60
	// Line 1008, Address: 0x39e318, Func Offset: 0x68
	// Line 1015, Address: 0x39e320, Func Offset: 0x70
	// Line 1023, Address: 0x39e328, Func Offset: 0x78
	// Line 1025, Address: 0x39e330, Func Offset: 0x80
	// Line 1030, Address: 0x39e334, Func Offset: 0x84
	// Line 1035, Address: 0x39e33c, Func Offset: 0x8c
	// Line 1043, Address: 0x39e344, Func Offset: 0x94
	// Line 1045, Address: 0x39e34c, Func Offset: 0x9c
	// Line 1052, Address: 0x39e350, Func Offset: 0xa0
	// Line 1053, Address: 0x39e358, Func Offset: 0xa8
	// Line 1056, Address: 0x39e364, Func Offset: 0xb4
	// Line 1057, Address: 0x39e36c, Func Offset: 0xbc
	// Line 1059, Address: 0x39e378, Func Offset: 0xc8
	// Line 1060, Address: 0x39e380, Func Offset: 0xd0
	// Line 988, Address: 0x39e388, Func Offset: 0xd8
	// Line 992, Address: 0x39e390, Func Offset: 0xe0
	// Line 1000, Address: 0x39e398, Func Offset: 0xe8
	// Line 1001, Address: 0x39e3a0, Func Offset: 0xf0
	// Line 1060, Address: 0x39e3a8, Func Offset: 0xf8
	// Line 1018, Address: 0x39e3bc, Func Offset: 0x10c
	// Line 1019, Address: 0x39e3c4, Func Offset: 0x114
	// Line 1060, Address: 0x39e3cc, Func Offset: 0x11c
	// Line 1032, Address: 0x39e3d0, Func Offset: 0x120
	// Line 1060, Address: 0x39e3d4, Func Offset: 0x124
	// Line 1032, Address: 0x39e40c, Func Offset: 0x15c
	// Line 1060, Address: 0x39e418, Func Offset: 0x168
	// Line 1038, Address: 0x39e41c, Func Offset: 0x16c
	// Line 1039, Address: 0x39e424, Func Offset: 0x174
	// Line 1060, Address: 0x39e42c, Func Offset: 0x17c
	// Line 1059, Address: 0x39e450, Func Offset: 0x1a0
	// Line 1061, Address: 0x39e460, Func Offset: 0x1b0
	// Func End, Address: 0x39e478, Func Offset: 0x1c8
}

// xSGProcess__FP17st_XSAVEGAME_DATA
// Start address: 0x39e480
int32 xSGProcess(st_XSAVEGAME_DATA* xsgdata)
{
	int32 result;
	int32 rc;
	// Line 907, Address: 0x39e480, Func Offset: 0
	// Line 909, Address: 0x39e49c, Func Offset: 0x1c
	// Line 915, Address: 0x39e4a4, Func Offset: 0x24
	// Line 916, Address: 0x39e4b4, Func Offset: 0x34
	// Line 920, Address: 0x39e4c0, Func Offset: 0x40
	// Line 922, Address: 0x39e4c8, Func Offset: 0x48
	// Line 925, Address: 0x39e4cc, Func Offset: 0x4c
	// Line 967, Address: 0x39e4d4, Func Offset: 0x54
	// Line 970, Address: 0x39e4ec, Func Offset: 0x6c
	// Line 971, Address: 0x39e530, Func Offset: 0xb0
	// Line 977, Address: 0x39e53c, Func Offset: 0xbc
	// Line 978, Address: 0x39e544, Func Offset: 0xc4
	// Line 980, Address: 0x39e54c, Func Offset: 0xcc
	// Line 919, Address: 0x39e554, Func Offset: 0xd4
	// Line 980, Address: 0x39e55c, Func Offset: 0xdc
	// Line 925, Address: 0x39e560, Func Offset: 0xe0
	// Line 980, Address: 0x39e564, Func Offset: 0xe4
	// Line 934, Address: 0x39e56c, Func Offset: 0xec
	// Line 980, Address: 0x39e57c, Func Offset: 0xfc
	// Line 934, Address: 0x39e584, Func Offset: 0x104
	// Line 980, Address: 0x39e588, Func Offset: 0x108
	// Line 934, Address: 0x39e58c, Func Offset: 0x10c
	// Line 980, Address: 0x39e590, Func Offset: 0x110
	// Line 934, Address: 0x39e59c, Func Offset: 0x11c
	// Line 980, Address: 0x39e5a4, Func Offset: 0x124
	// Line 934, Address: 0x39e5a8, Func Offset: 0x128
	// Line 980, Address: 0x39e5ac, Func Offset: 0x12c
	// Line 934, Address: 0x39e5b8, Func Offset: 0x138
	// Line 980, Address: 0x39e5c0, Func Offset: 0x140
	// Line 934, Address: 0x39e5c4, Func Offset: 0x144
	// Line 980, Address: 0x39e5cc, Func Offset: 0x14c
	// Line 934, Address: 0x39e5d8, Func Offset: 0x158
	// Line 980, Address: 0x39e5e0, Func Offset: 0x160
	// Line 934, Address: 0x39e5e4, Func Offset: 0x164
	// Line 980, Address: 0x39e5ec, Func Offset: 0x16c
	// Line 966, Address: 0x39e61c, Func Offset: 0x19c
	// Line 980, Address: 0x39e624, Func Offset: 0x1a4
	// Line 948, Address: 0x39e648, Func Offset: 0x1c8
	// Line 980, Address: 0x39e64c, Func Offset: 0x1cc
	// Line 970, Address: 0x39e678, Func Offset: 0x1f8
	// Line 980, Address: 0x39e688, Func Offset: 0x208
	// Line 978, Address: 0x39e68c, Func Offset: 0x20c
	// Line 981, Address: 0x39e69c, Func Offset: 0x21c
	// Func End, Address: 0x39e6b4, Func Offset: 0x234
}

// xSGSetup__FP17st_XSAVEGAME_DATAiPcili
// Start address: 0x39e6c0
int32 xSGSetup(st_XSAVEGAME_DATA* xsgdata, int32 gidx, int8* label, int32 progress, long32 playtime, int32 thumbIconIdx)
{
	int32 result;
	int32 rc;
	// Line 841, Address: 0x39e6c0, Func Offset: 0
	// Line 848, Address: 0x39e6c4, Func Offset: 0x4
	// Line 841, Address: 0x39e6c8, Func Offset: 0x8
	// Line 843, Address: 0x39e6f0, Func Offset: 0x30
	// Line 848, Address: 0x39e6f4, Func Offset: 0x34
	// Line 849, Address: 0x39e700, Func Offset: 0x40
	// Line 851, Address: 0x39e70c, Func Offset: 0x4c
	// Line 857, Address: 0x39e710, Func Offset: 0x50
	// Line 859, Address: 0x39e720, Func Offset: 0x60
	// Line 865, Address: 0x39e724, Func Offset: 0x64
	// Line 866, Address: 0x39e734, Func Offset: 0x74
	// Line 867, Address: 0x39e738, Func Offset: 0x78
	// Line 868, Address: 0x39e73c, Func Offset: 0x7c
	// Line 871, Address: 0x39e740, Func Offset: 0x80
	// Line 878, Address: 0x39e748, Func Offset: 0x88
	// Line 879, Address: 0x39e750, Func Offset: 0x90
	// Line 880, Address: 0x39e758, Func Offset: 0x98
	// Line 883, Address: 0x39e760, Func Offset: 0xa0
	// Line 888, Address: 0x39e768, Func Offset: 0xa8
	// Line 889, Address: 0x39e79c, Func Offset: 0xdc
	// Line 894, Address: 0x39e7a8, Func Offset: 0xe8
	// Line 895, Address: 0x39e7b0, Func Offset: 0xf0
	// Line 897, Address: 0x39e7b8, Func Offset: 0xf8
	// Line 848, Address: 0x39e7c0, Func Offset: 0x100
	// Line 897, Address: 0x39e7c8, Func Offset: 0x108
	// Line 895, Address: 0x39e808, Func Offset: 0x148
	// Line 898, Address: 0x39e818, Func Offset: 0x158
	// Func End, Address: 0x39e838, Func Offset: 0x178
}

// xSGSetup__FP17st_XSAVEGAME_DATA
// Start address: 0x39e840
int32 xSGSetup(st_XSAVEGAME_DATA* xsgdata)
{
	// Line 837, Address: 0x39e840, Func Offset: 0
	// Func End, Address: 0x39e85c, Func Offset: 0x1c
}

// xSGAddLoadClient__FP17st_XSAVEGAME_DATAUiPvPFPvP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTUii_i
// Start address: 0x39e860
int32 xSGAddLoadClient(st_XSAVEGAME_DATA* xsgdata, uint32 clttag, void* cltdata, int32(*loadfunc)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_READCONTEXT*, uint32, int32))
{
	int32 result;
	st_XSAVEGAME_CLIENT* clt;
	// Line 727, Address: 0x39e860, Func Offset: 0
	// Line 734, Address: 0x39e864, Func Offset: 0x4
	// Line 727, Address: 0x39e868, Func Offset: 0x8
	// Line 728, Address: 0x39e86c, Func Offset: 0xc
	// Line 727, Address: 0x39e870, Func Offset: 0x10
	// Line 728, Address: 0x39e88c, Func Offset: 0x2c
	// Line 734, Address: 0x39e890, Func Offset: 0x30
	// Line 735, Address: 0x39e89c, Func Offset: 0x3c
	// Line 738, Address: 0x39e8a8, Func Offset: 0x48
	// Line 739, Address: 0x39e8b0, Func Offset: 0x50
	// Line 740, Address: 0x39e8c4, Func Offset: 0x64
	// Line 743, Address: 0x39e8cc, Func Offset: 0x6c
	// Line 773, Address: 0x39e8d0, Func Offset: 0x70
	// Line 779, Address: 0x39e8d8, Func Offset: 0x78
	// Line 799, Address: 0x39e8e0, Func Offset: 0x80
	// Line 801, Address: 0x39e8f4, Func Offset: 0x94
	// Line 802, Address: 0x39e8f8, Func Offset: 0x98
	// Line 803, Address: 0x39e8fc, Func Offset: 0x9c
	// Line 804, Address: 0x39e900, Func Offset: 0xa0
	// Line 805, Address: 0x39e904, Func Offset: 0xa4
	// Line 806, Address: 0x39e908, Func Offset: 0xa8
	// Line 807, Address: 0x39e90c, Func Offset: 0xac
	// Line 808, Address: 0x39e910, Func Offset: 0xb0
	// Line 809, Address: 0x39e914, Func Offset: 0xb4
	// Line 814, Address: 0x39e918, Func Offset: 0xb8
	// Line 815, Address: 0x39e920, Func Offset: 0xc0
	// Line 816, Address: 0x39e928, Func Offset: 0xc8
	// Line 734, Address: 0x39e930, Func Offset: 0xd0
	// Line 816, Address: 0x39e938, Func Offset: 0xd8
	// Line 796, Address: 0x39e96c, Func Offset: 0x10c
	// Line 816, Address: 0x39e974, Func Offset: 0x114
	// Line 815, Address: 0x39e978, Func Offset: 0x118
	// Line 817, Address: 0x39e988, Func Offset: 0x128
	// Func End, Address: 0x39e9a0, Func Offset: 0x140
}

// xSGAddSaveClient__FP17st_XSAVEGAME_DATAUiPvPFPvP17st_XSAVEGAME_DATAPiPi_iPFPvP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXT_i
// Start address: 0x39e9a0
int32 xSGAddSaveClient(st_XSAVEGAME_DATA* xsgdata, uint32 clttag, void* cltdata, int32(*infofunc)(void*, st_XSAVEGAME_DATA*, int32*, int32*), int32(*procfunc)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_WRITECONTEXT*))
{
	int32 result;
	st_XSAVEGAME_CLIENT* clt;
	// Line 645, Address: 0x39e9a0, Func Offset: 0
	// Line 653, Address: 0x39e9a4, Func Offset: 0x4
	// Line 645, Address: 0x39e9a8, Func Offset: 0x8
	// Line 646, Address: 0x39e9ac, Func Offset: 0xc
	// Line 645, Address: 0x39e9b0, Func Offset: 0x10
	// Line 646, Address: 0x39e9d4, Func Offset: 0x34
	// Line 653, Address: 0x39e9d8, Func Offset: 0x38
	// Line 654, Address: 0x39e9e4, Func Offset: 0x44
	// Line 656, Address: 0x39e9f0, Func Offset: 0x50
	// Line 667, Address: 0x39e9f4, Func Offset: 0x54
	// Line 695, Address: 0x39ea08, Func Offset: 0x68
	// Line 697, Address: 0x39ea1c, Func Offset: 0x7c
	// Line 698, Address: 0x39ea20, Func Offset: 0x80
	// Line 699, Address: 0x39ea24, Func Offset: 0x84
	// Line 700, Address: 0x39ea28, Func Offset: 0x88
	// Line 701, Address: 0x39ea2c, Func Offset: 0x8c
	// Line 702, Address: 0x39ea30, Func Offset: 0x90
	// Line 703, Address: 0x39ea34, Func Offset: 0x94
	// Line 714, Address: 0x39ea38, Func Offset: 0x98
	// Line 715, Address: 0x39ea40, Func Offset: 0xa0
	// Line 717, Address: 0x39ea48, Func Offset: 0xa8
	// Line 653, Address: 0x39ea50, Func Offset: 0xb0
	// Line 717, Address: 0x39ea58, Func Offset: 0xb8
	// Line 715, Address: 0x39ea6c, Func Offset: 0xcc
	// Line 718, Address: 0x39ea7c, Func Offset: 0xdc
	// Func End, Address: 0x39ea98, Func Offset: 0xf8
}

// xSGGameProgress__FP17st_XSAVEGAME_DATAi
// Start address: 0x39eaa0
int32 xSGGameProgress(st_XSAVEGAME_DATA* xsgdata, int32 gidx)
{
	int32 idx_thum;
	// Line 620, Address: 0x39eaa0, Func Offset: 0
	// Line 625, Address: 0x39eaa4, Func Offset: 0x4
	// Line 620, Address: 0x39eaa8, Func Offset: 0x8
	// Line 625, Address: 0x39eabc, Func Offset: 0x1c
	// Line 620, Address: 0x39eac0, Func Offset: 0x20
	// Line 621, Address: 0x39eac4, Func Offset: 0x24
	// Line 625, Address: 0x39eacc, Func Offset: 0x2c
	// Line 628, Address: 0x39eaf8, Func Offset: 0x58
	// Line 631, Address: 0x39eb1c, Func Offset: 0x7c
	// Line 632, Address: 0x39eb20, Func Offset: 0x80
	// Func End, Address: 0x39eb3c, Func Offset: 0x9c
}

// xSGGameThumbIndex__FP17st_XSAVEGAME_DATAi
// Start address: 0x39eb40
int32 xSGGameThumbIndex(st_XSAVEGAME_DATA* xsgdata, int32 gidx)
{
	int32 idx_thum;
	// Line 604, Address: 0x39eb40, Func Offset: 0
	// Line 609, Address: 0x39eb44, Func Offset: 0x4
	// Line 604, Address: 0x39eb48, Func Offset: 0x8
	// Line 609, Address: 0x39eb5c, Func Offset: 0x1c
	// Line 604, Address: 0x39eb60, Func Offset: 0x20
	// Line 605, Address: 0x39eb64, Func Offset: 0x24
	// Line 609, Address: 0x39eb6c, Func Offset: 0x2c
	// Line 612, Address: 0x39eb98, Func Offset: 0x58
	// Line 615, Address: 0x39ebbc, Func Offset: 0x7c
	// Line 616, Address: 0x39ebc0, Func Offset: 0x80
	// Func End, Address: 0x39ebdc, Func Offset: 0x9c
}

// xSGGameLabel__FP17st_XSAVEGAME_DATAi
// Start address: 0x39ebe0
int8* xSGGameLabel(st_XSAVEGAME_DATA* xsgdata, int32 gidx)
{
	int8* da_name;
	st_XSAVEGAME_LEADER* lead;
	// Line 568, Address: 0x39ebe0, Func Offset: 0
	// Line 573, Address: 0x39ebe4, Func Offset: 0x4
	// Line 568, Address: 0x39ebe8, Func Offset: 0x8
	// Line 573, Address: 0x39ebfc, Func Offset: 0x1c
	// Line 568, Address: 0x39ec04, Func Offset: 0x24
	// Line 573, Address: 0x39ec08, Func Offset: 0x28
	// Line 569, Address: 0x39ec0c, Func Offset: 0x2c
	// Line 573, Address: 0x39ec10, Func Offset: 0x30
	// Line 575, Address: 0x39ec38, Func Offset: 0x58
	// Line 576, Address: 0x39ec58, Func Offset: 0x78
	// Line 578, Address: 0x39ec64, Func Offset: 0x84
	// Line 579, Address: 0x39ec68, Func Offset: 0x88
	// Func End, Address: 0x39ec84, Func Offset: 0xa4
}

// xSGGameModDate__FP17st_XSAVEGAME_DATAi
// Start address: 0x39ec90
int8* xSGGameModDate(st_XSAVEGAME_DATA* xsgdata, int32 gidx)
{
	int8* date;
	int8 da_date[32];
	// Line 543, Address: 0x39ec90, Func Offset: 0
	// Line 547, Address: 0x39ec94, Func Offset: 0x4
	// Line 543, Address: 0x39ec98, Func Offset: 0x8
	// Line 549, Address: 0x39ec9c, Func Offset: 0xc
	// Line 543, Address: 0x39eca0, Func Offset: 0x10
	// Line 547, Address: 0x39ecb4, Func Offset: 0x24
	// Line 549, Address: 0x39ecb8, Func Offset: 0x28
	// Line 550, Address: 0x39ece8, Func Offset: 0x58
	// Line 551, Address: 0x39ed30, Func Offset: 0xa0
	// Line 553, Address: 0x39ed40, Func Offset: 0xb0
	// Line 556, Address: 0x39ed48, Func Offset: 0xb8
	// Line 564, Address: 0x39ed58, Func Offset: 0xc8
	// Line 565, Address: 0x39ed7c, Func Offset: 0xec
	// Func End, Address: 0x39ed94, Func Offset: 0x104
}

// xSGGameSize__FP17st_XSAVEGAME_DATAi
// Start address: 0x39eda0
int32 xSGGameSize(st_XSAVEGAME_DATA* xsgdata, int32 gidx)
{
	int32 size;
	// Line 524, Address: 0x39eda0, Func Offset: 0
	// Line 528, Address: 0x39eda4, Func Offset: 0x4
	// Line 524, Address: 0x39eda8, Func Offset: 0x8
	// Line 528, Address: 0x39edc4, Func Offset: 0x24
	// Line 525, Address: 0x39edcc, Func Offset: 0x2c
	// Line 528, Address: 0x39edd0, Func Offset: 0x30
	// Line 529, Address: 0x39edf8, Func Offset: 0x58
	// Line 530, Address: 0x39ee40, Func Offset: 0xa0
	// Line 533, Address: 0x39ee54, Func Offset: 0xb4
	// Line 534, Address: 0x39ee58, Func Offset: 0xb8
	// Func End, Address: 0x39ee74, Func Offset: 0xd4
}

// xSGGameIsEmpty__FP17st_XSAVEGAME_DATAi
// Start address: 0x39ee80
int32 xSGGameIsEmpty(st_XSAVEGAME_DATA* xsgdata, int32 gidx)
{
	// Line 491, Address: 0x39ee80, Func Offset: 0
	// Line 493, Address: 0x39ee84, Func Offset: 0x4
	// Line 491, Address: 0x39ee88, Func Offset: 0x8
	// Line 493, Address: 0x39eea4, Func Offset: 0x24
	// Line 505, Address: 0x39ef34, Func Offset: 0xb4
	// Line 519, Address: 0x39ef38, Func Offset: 0xb8
	// Line 505, Address: 0x39ef40, Func Offset: 0xc0
	// Line 519, Address: 0x39ef44, Func Offset: 0xc4
	// Line 505, Address: 0x39ef48, Func Offset: 0xc8
	// Line 519, Address: 0x39ef4c, Func Offset: 0xcc
	// Func End, Address: 0x39ef5c, Func Offset: 0xdc
}

// xSGGameSet__FP17st_XSAVEGAME_DATAi
// Start address: 0x39ef60
void xSGGameSet(st_XSAVEGAME_DATA* xsgdata, int32 gidx)
{
	// Line 484, Address: 0x39ef60, Func Offset: 0
	// Func End, Address: 0x39ef68, Func Offset: 0x8
}

// xSGCheckMemoryCard__FP17st_XSAVEGAME_DATAi
// Start address: 0x39ef70
uint8 xSGCheckMemoryCard(st_XSAVEGAME_DATA* xsgdata, int32 index)
{
	// Line 462, Address: 0x39ef70, Func Offset: 0
	// Func End, Address: 0x39ef78, Func Offset: 0x8
}

// xSGTgtHaveRoomStartup__FP17st_XSAVEGAME_DATAiiiPiPiPi
// Start address: 0x39ef80
int32 xSGTgtHaveRoomStartup(st_XSAVEGAME_DATA* xsgdata, int32 tidx, int32 fsize, int32 slotidx, int32* bytesNeeded, int32* availOnDisk, int32* needFile)
{
	int32 isroom;
	int8 fname[256];
	// Line 438, Address: 0x39ef80, Func Offset: 0
	// Line 440, Address: 0x39ef84, Func Offset: 0x4
	// Line 438, Address: 0x39ef88, Func Offset: 0x8
	// Line 440, Address: 0x39ef8c, Func Offset: 0xc
	// Line 438, Address: 0x39ef90, Func Offset: 0x10
	// Line 440, Address: 0x39efbc, Func Offset: 0x3c
	// Line 446, Address: 0x39efe0, Func Offset: 0x60
	// Line 452, Address: 0x39efe8, Func Offset: 0x68
	// Line 453, Address: 0x39f000, Func Offset: 0x80
	// Line 457, Address: 0x39f024, Func Offset: 0xa4
	// Line 447, Address: 0x39f030, Func Offset: 0xb0
	// Line 457, Address: 0x39f048, Func Offset: 0xc8
	// Line 449, Address: 0x39f050, Func Offset: 0xd0
	// Line 458, Address: 0x39f058, Func Offset: 0xd8
	// Func End, Address: 0x39f078, Func Offset: 0xf8
}

// xSGTgtHaveRoom__FP17st_XSAVEGAME_DATAiiiPiPiPi
// Start address: 0x39f080
int32 xSGTgtHaveRoom(st_XSAVEGAME_DATA* xsgdata, int32 tidx, int32 fsize, int32 slotidx, int32* bytesNeeded, int32* availOnDisk, int32* needFile)
{
	int32 isroom;
	int8 fname[256];
	// Line 413, Address: 0x39f080, Func Offset: 0
	// Line 415, Address: 0x39f084, Func Offset: 0x4
	// Line 413, Address: 0x39f088, Func Offset: 0x8
	// Line 415, Address: 0x39f08c, Func Offset: 0xc
	// Line 413, Address: 0x39f090, Func Offset: 0x10
	// Line 415, Address: 0x39f0bc, Func Offset: 0x3c
	// Line 421, Address: 0x39f0e0, Func Offset: 0x60
	// Line 427, Address: 0x39f0e8, Func Offset: 0x68
	// Line 428, Address: 0x39f100, Func Offset: 0x80
	// Line 432, Address: 0x39f124, Func Offset: 0xa4
	// Line 422, Address: 0x39f130, Func Offset: 0xb0
	// Line 432, Address: 0x39f148, Func Offset: 0xc8
	// Line 424, Address: 0x39f150, Func Offset: 0xd0
	// Line 433, Address: 0x39f158, Func Offset: 0xd8
	// Func End, Address: 0x39f178, Func Offset: 0xf8
}

// xSGTgtHasGameDir__FP17st_XSAVEGAME_DATAi
// Start address: 0x39f180
int32 xSGTgtHasGameDir(st_XSAVEGAME_DATA* xsgdata, int32 tidx)
{
	int32 rc;
	// Line 401, Address: 0x39f180, Func Offset: 0
	// Line 403, Address: 0x39f194, Func Offset: 0x14
	// Line 404, Address: 0x39f19c, Func Offset: 0x1c
	// Line 407, Address: 0x39f1a4, Func Offset: 0x24
	// Line 405, Address: 0x39f1ac, Func Offset: 0x2c
	// Line 407, Address: 0x39f1b4, Func Offset: 0x34
	// Line 405, Address: 0x39f1d0, Func Offset: 0x50
	// Line 408, Address: 0x39f1dc, Func Offset: 0x5c
	// Func End, Address: 0x39f1ec, Func Offset: 0x6c
}

// xSGTgtSelect__FP17st_XSAVEGAME_DATAi
// Start address: 0x39f1f0
int32 xSGTgtSelect(st_XSAVEGAME_DATA* xsgdata, int32 tidx)
{
	int32 result;
	// Line 386, Address: 0x39f1f0, Func Offset: 0
	// Line 390, Address: 0x39f208, Func Offset: 0x18
	// Line 391, Address: 0x39f214, Func Offset: 0x24
	// Line 398, Address: 0x39f21c, Func Offset: 0x2c
	// Line 394, Address: 0x39f224, Func Offset: 0x34
	// Line 398, Address: 0x39f22c, Func Offset: 0x3c
	// Line 394, Address: 0x39f248, Func Offset: 0x58
	// Line 398, Address: 0x39f24c, Func Offset: 0x5c
	// Line 399, Address: 0x39f264, Func Offset: 0x74
	// Func End, Address: 0x39f27c, Func Offset: 0x8c
}

// xSGTgtFormatTgt__FP17st_XSAVEGAME_DATAiPi
// Start address: 0x39f280
int32 xSGTgtFormatTgt(st_XSAVEGAME_DATA* xsgdata, int32 tidx, int32* canRecover)
{
	int32 result;
	// Line 366, Address: 0x39f280, Func Offset: 0
	// Func End, Address: 0x39f290, Func Offset: 0x10
}

// xSGTgtIsFormat__FP17st_XSAVEGAME_DATAiPi
// Start address: 0x39f290
int32 xSGTgtIsFormat(st_XSAVEGAME_DATA* xsgdata, int32 tidx, int32* badEncode)
{
	int32 result;
	int32 rc;
	// Line 333, Address: 0x39f290, Func Offset: 0
	// Line 340, Address: 0x39f2a4, Func Offset: 0x14
	// Line 341, Address: 0x39f2b4, Func Offset: 0x24
	// Line 348, Address: 0x39f2c4, Func Offset: 0x34
	// Line 349, Address: 0x39f2cc, Func Offset: 0x3c
	// Line 356, Address: 0x39f2d0, Func Offset: 0x40
	// Line 344, Address: 0x39f2f4, Func Offset: 0x64
	// Line 345, Address: 0x39f2f8, Func Offset: 0x68
	// Line 359, Address: 0x39f300, Func Offset: 0x70
	// Func End, Address: 0x39f314, Func Offset: 0x84
}

// xSGTgtPhysSlotIdx__FP17st_XSAVEGAME_DATAi
// Start address: 0x39f320
int32 xSGTgtPhysSlotIdx(st_XSAVEGAME_DATA* xsgdata, int32 tidx)
{
	// Line 295, Address: 0x39f320, Func Offset: 0
	// Func End, Address: 0x39f328, Func Offset: 0x8
}

// xSGTgtCount__FP17st_XSAVEGAME_DATAPi
// Start address: 0x39f330
int32 xSGTgtCount(st_XSAVEGAME_DATA* xsgdata, int32* max)
{
	int32 cnt;
	// Line 288, Address: 0x39f330, Func Offset: 0
	// Func End, Address: 0x39f338, Func Offset: 0x8
}

// xSGDone__FP17st_XSAVEGAME_DATA
// Start address: 0x39f340
int32 xSGDone(st_XSAVEGAME_DATA* xsgdata)
{
	int32 result;
	// Line 195, Address: 0x39f340, Func Offset: 0
	// Line 200, Address: 0x39f354, Func Offset: 0x14
	// Line 202, Address: 0x39f364, Func Offset: 0x24
	// Line 217, Address: 0x39f36c, Func Offset: 0x2c
	// Line 218, Address: 0x39f374, Func Offset: 0x34
	// Line 221, Address: 0x39f380, Func Offset: 0x40
	// Line 234, Address: 0x39f38c, Func Offset: 0x4c
	// Line 236, Address: 0x39f394, Func Offset: 0x54
	// Line 246, Address: 0x39f3a4, Func Offset: 0x64
	// Line 248, Address: 0x39f3ac, Func Offset: 0x6c
	// Line 249, Address: 0x39f3b4, Func Offset: 0x74
	// Line 250, Address: 0x39f3b8, Func Offset: 0x78
	// Line 251, Address: 0x39f3bc, Func Offset: 0x7c
	// Line 261, Address: 0x39f3c0, Func Offset: 0x80
	// Line 264, Address: 0x39f3d4, Func Offset: 0x94
	// Line 266, Address: 0x39f3e8, Func Offset: 0xa8
	// Line 225, Address: 0x39f3fc, Func Offset: 0xbc
	// Line 266, Address: 0x39f404, Func Offset: 0xc4
	// Line 233, Address: 0x39f41c, Func Offset: 0xdc
	// Line 237, Address: 0x39f424, Func Offset: 0xe4
	// Line 266, Address: 0x39f428, Func Offset: 0xe8
	// Line 267, Address: 0x39f44c, Func Offset: 0x10c
	// Func End, Address: 0x39f460, Func Offset: 0x120
}

// xSGInit__F16en_SAVEGAME_MODE
// Start address: 0x39f460
st_XSAVEGAME_DATA* xSGInit(en_SAVEGAME_MODE mode)
{
	st_XSAVEGAME_DATA* xsgdata;
	// Line 136, Address: 0x39f460, Func Offset: 0
	// Line 146, Address: 0x39f464, Func Offset: 0x4
	// Line 136, Address: 0x39f468, Func Offset: 0x8
	// Line 146, Address: 0x39f478, Func Offset: 0x18
	// Line 138, Address: 0x39f47c, Func Offset: 0x1c
	// Line 146, Address: 0x39f480, Func Offset: 0x20
	// Line 149, Address: 0x39f488, Func Offset: 0x28
	// Line 160, Address: 0x39f490, Func Offset: 0x30
	// Line 161, Address: 0x39f49c, Func Offset: 0x3c
	// Line 165, Address: 0x39f4a0, Func Offset: 0x40
	// Line 166, Address: 0x39f4a4, Func Offset: 0x44
	// Line 173, Address: 0x39f4b0, Func Offset: 0x50
	// Line 169, Address: 0x39f4b4, Func Offset: 0x54
	// Line 173, Address: 0x39f4b8, Func Offset: 0x58
	// Line 169, Address: 0x39f4c4, Func Offset: 0x64
	// Line 173, Address: 0x39f4c8, Func Offset: 0x68
	// Line 177, Address: 0x39f4d4, Func Offset: 0x74
	// Line 178, Address: 0x39f4e0, Func Offset: 0x80
	// Line 180, Address: 0x39f4fc, Func Offset: 0x9c
	// Line 183, Address: 0x39f504, Func Offset: 0xa4
	// Line 188, Address: 0x39f528, Func Offset: 0xc8
	// Line 190, Address: 0x39f53c, Func Offset: 0xdc
	// Line 191, Address: 0x39f540, Func Offset: 0xe0
	// Func End, Address: 0x39f554, Func Offset: 0xf4
}

// xSGShutdown__Fv
// Start address: 0x39f560
int32 xSGShutdown()
{
	// Line 113, Address: 0x39f560, Func Offset: 0
	// Line 115, Address: 0x39f568, Func Offset: 0x8
	// Line 125, Address: 0x39f578, Func Offset: 0x18
	// Line 126, Address: 0x39f598, Func Offset: 0x38
	// Func End, Address: 0x39f5a4, Func Offset: 0x44
}

// xSGStartup__Fv
// Start address: 0x39f5b0
int32 xSGStartup()
{
	// Line 79, Address: 0x39f5b0, Func Offset: 0
	// Line 81, Address: 0x39f5b8, Func Offset: 0x8
	// Line 87, Address: 0x39f5c8, Func Offset: 0x18
	// Line 90, Address: 0x39f5d0, Func Offset: 0x20
	// Line 93, Address: 0x39f5d8, Func Offset: 0x28
	// Line 107, Address: 0x39f5ec, Func Offset: 0x3c
	// Line 110, Address: 0x39f614, Func Offset: 0x64
	// Line 109, Address: 0x39f618, Func Offset: 0x68
	// Line 110, Address: 0x39f61c, Func Offset: 0x6c
	// Func End, Address: 0x39f624, Func Offset: 0x74
}

