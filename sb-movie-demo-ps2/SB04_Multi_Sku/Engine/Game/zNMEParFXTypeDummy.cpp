



int32 DUMMY_PREFIXSysUpdate(uint8* mem, int32 count, ptank_pool& apool, float32 dt);
void DUMMY_PREFIXSysInit(NPARMgmt* mgmt, xParticleBatchSystem* pbs);
void DUMMY_PREFIXSysTweaks(int8* prefix_root);

// DUMMY_PREFIXSysUpdate__15DUMMY_NAMESPACEFPUciR10ptank_poolfPv
// Start address: 0x27d4b0
int32 DUMMY_PREFIXSysUpdate(uint8* mem, int32 count, ptank_pool& apool, float32 dt)
{
	ptank_pool__pos_color_size_rot_uv2* pool;
	DUMMY_PARSTRUCT* par;
	DUMMY_PARSTRUCT* end;
	xVec3 pos_plyr;
	DUMMY_PAREMITTER* emitter;
	float32 rat;
	float32 beans;
	// Line 226, Address: 0x27d4b0, Func Offset: 0
	// Line 231, Address: 0x27d4b4, Func Offset: 0x4
	// Line 226, Address: 0x27d4b8, Func Offset: 0x8
	// Line 231, Address: 0x27d4bc, Func Offset: 0xc
	// Line 226, Address: 0x27d4c0, Func Offset: 0x10
	// Line 231, Address: 0x27d4c4, Func Offset: 0x14
	// Line 226, Address: 0x27d4c8, Func Offset: 0x18
	// Line 227, Address: 0x27d4e4, Func Offset: 0x34
	// Line 226, Address: 0x27d4e8, Func Offset: 0x38
	// Line 230, Address: 0x27d4ec, Func Offset: 0x3c
	// Line 226, Address: 0x27d4f0, Func Offset: 0x40
	// Line 231, Address: 0x27d4f4, Func Offset: 0x44
	// Line 226, Address: 0x27d4f8, Func Offset: 0x48
	// Line 232, Address: 0x27d510, Func Offset: 0x60
	// Line 234, Address: 0x27d530, Func Offset: 0x80
	// Line 242, Address: 0x27d558, Func Offset: 0xa8
	// Line 236, Address: 0x27d55c, Func Offset: 0xac
	// Line 246, Address: 0x27d560, Func Offset: 0xb0
	// Line 242, Address: 0x27d564, Func Offset: 0xb4
	// Line 246, Address: 0x27d568, Func Offset: 0xb8
	// Line 258, Address: 0x27d574, Func Offset: 0xc4
	// Line 266, Address: 0x27d58c, Func Offset: 0xdc
	// Line 258, Address: 0x27d590, Func Offset: 0xe0
	// Line 266, Address: 0x27d594, Func Offset: 0xe4
	// Line 258, Address: 0x27d59c, Func Offset: 0xec
	// Line 266, Address: 0x27d5a4, Func Offset: 0xf4
	// Line 258, Address: 0x27d5cc, Func Offset: 0x11c
	// Line 266, Address: 0x27d5d0, Func Offset: 0x120
	// Line 269, Address: 0x27d650, Func Offset: 0x1a0
	// Line 270, Address: 0x27d6c0, Func Offset: 0x210
	// Line 278, Address: 0x27d6d4, Func Offset: 0x224
	// Line 270, Address: 0x27d6dc, Func Offset: 0x22c
	// Line 272, Address: 0x27d6e0, Func Offset: 0x230
	// Line 278, Address: 0x27d6e4, Func Offset: 0x234
	// Line 272, Address: 0x27d6f8, Func Offset: 0x248
	// Line 273, Address: 0x27d718, Func Offset: 0x268
	// Line 279, Address: 0x27d794, Func Offset: 0x2e4
	// Line 280, Address: 0x27d798, Func Offset: 0x2e8
	// Line 294, Address: 0x27d7ac, Func Offset: 0x2fc
	// Line 308, Address: 0x27d824, Func Offset: 0x374
	// Line 309, Address: 0x27d83c, Func Offset: 0x38c
	// Line 315, Address: 0x27d848, Func Offset: 0x398
	// Line 322, Address: 0x27d8a8, Func Offset: 0x3f8
	// Line 323, Address: 0x27d8ac, Func Offset: 0x3fc
	// Line 322, Address: 0x27d8b0, Func Offset: 0x400
	// Line 323, Address: 0x27d8c0, Func Offset: 0x410
	// Line 322, Address: 0x27d8c4, Func Offset: 0x414
	// Line 323, Address: 0x27d8d0, Func Offset: 0x420
	// Line 322, Address: 0x27d8e8, Func Offset: 0x438
	// Line 323, Address: 0x27d8f0, Func Offset: 0x440
	// Line 324, Address: 0x27d8f8, Func Offset: 0x448
	// Line 347, Address: 0x27d90c, Func Offset: 0x45c
	// Line 348, Address: 0x27da20, Func Offset: 0x570
	// Line 360, Address: 0x27da2c, Func Offset: 0x57c
	// Line 372, Address: 0x27da38, Func Offset: 0x588
	// Line 360, Address: 0x27da3c, Func Offset: 0x58c
	// Line 362, Address: 0x27da4c, Func Offset: 0x59c
	// Line 364, Address: 0x27da74, Func Offset: 0x5c4
	// Line 366, Address: 0x27da80, Func Offset: 0x5d0
	// Line 377, Address: 0x27da8c, Func Offset: 0x5dc
	// Line 370, Address: 0x27da90, Func Offset: 0x5e0
	// Line 371, Address: 0x27da98, Func Offset: 0x5e8
	// Line 372, Address: 0x27daa0, Func Offset: 0x5f0
	// Line 373, Address: 0x27daa8, Func Offset: 0x5f8
	// Line 378, Address: 0x27dab0, Func Offset: 0x600
	// Line 381, Address: 0x27dab8, Func Offset: 0x608
	// Line 251, Address: 0x27db88, Func Offset: 0x6d8
	// Line 381, Address: 0x27db90, Func Offset: 0x6e0
	// Line 347, Address: 0x27db94, Func Offset: 0x6e4
	// Line 381, Address: 0x27db98, Func Offset: 0x6e8
	// Line 347, Address: 0x27dba0, Func Offset: 0x6f0
	// Line 381, Address: 0x27dba4, Func Offset: 0x6f4
	// Line 347, Address: 0x27dbac, Func Offset: 0x6fc
	// Line 381, Address: 0x27dbb0, Func Offset: 0x700
	// Line 347, Address: 0x27dbb8, Func Offset: 0x708
	// Line 381, Address: 0x27dbbc, Func Offset: 0x70c
	// Line 347, Address: 0x27dbc4, Func Offset: 0x714
	// Line 351, Address: 0x27dbd0, Func Offset: 0x720
	// Line 382, Address: 0x27dbd8, Func Offset: 0x728
	// Func End, Address: 0x27dc20, Func Offset: 0x770
}

// DUMMY_PREFIXSysInit__15DUMMY_NAMESPACEFP8NPARMgmtP20xParticleBatchSystem
// Start address: 0x27dc20
void DUMMY_PREFIXSysInit(NPARMgmt* mgmt, xParticleBatchSystem* pbs)
{
	// Line 208, Address: 0x27dc20, Func Offset: 0
	// Line 219, Address: 0x27dc24, Func Offset: 0x4
	// Line 208, Address: 0x27dc28, Func Offset: 0x8
	// Line 213, Address: 0x27dc2c, Func Offset: 0xc
	// Line 211, Address: 0x27dc30, Func Offset: 0x10
	// Line 218, Address: 0x27dc34, Func Offset: 0x14
	// Line 219, Address: 0x27dc38, Func Offset: 0x18
	// Line 211, Address: 0x27dc3c, Func Offset: 0x1c
	// Line 212, Address: 0x27dc40, Func Offset: 0x20
	// Line 213, Address: 0x27dc44, Func Offset: 0x24
	// Line 214, Address: 0x27dc48, Func Offset: 0x28
	// Line 216, Address: 0x27dc4c, Func Offset: 0x2c
	// Line 217, Address: 0x27dc50, Func Offset: 0x30
	// Line 218, Address: 0x27dc54, Func Offset: 0x34
	// Line 219, Address: 0x27dc58, Func Offset: 0x38
	// Line 223, Address: 0x27dc5c, Func Offset: 0x3c
	// Func End, Address: 0x27dc64, Func Offset: 0x44
}

// DUMMY_PREFIXSysTweaks__15DUMMY_NAMESPACEFP8NPARMgmtPCc
// Start address: 0x27dc70
void DUMMY_PREFIXSysTweaks(int8* prefix_root)
{
	int8 prefix_base[128];
	int8 prefix[128];
	// Line 187, Address: 0x27dc70, Func Offset: 0
	// Line 190, Address: 0x27dc78, Func Offset: 0x8
	// Line 187, Address: 0x27dc80, Func Offset: 0x10
	// Line 190, Address: 0x27dc84, Func Offset: 0x14
	// Line 192, Address: 0x27dc94, Func Offset: 0x24
	// Line 203, Address: 0x27dcb0, Func Offset: 0x40
	// Func End, Address: 0x27dcbc, Func Offset: 0x4c
}

