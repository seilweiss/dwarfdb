



void zNMEMsg_AreaExplode(zNMECommon* who, float32 radius, xVec3* pos_altOrigin, float32 spd_grow, int32 skipNME);
uint8 __cl(xEnt& ent);
void zNMEMsg_AreaNMEYellBoo(zNMECommon* who, float32 radius, xVec3* pos_fromHere);
void zNMEMsg_AreaNMEExplode(zNMECommon* who, float32 radius, xVec3* pos_fromHere, float32 spd_grow);
void zNMEMsg_AreaPlayerStun(float32 stuntime, float32 radius, xVec3* pos);
void zNMEMsg_AreaNotify(zNMECommon* sender, NMEMsg* msg, float32 radius, int32 filter, en_npctyp* npcTypeList);
void zNMEMsg_AreaNotify(zNMECommon* sender, en_npcmsg msgid, float32 rad, int32 filter, en_npctyp toNMEType);
void zNMEMsg_SendMsg(NMEMsg* inmsg, zNMECommon* npc_sendto, float32 delay);
void zNMEMsg_SendMsg(en_npcmsg msgevent, zNMECommon* npc_sendto);
void Timestep(float32 dt);
void SceneReset();
void SceneFinish();

// zNMEMsg_AreaExplode__FP10zNMECommonfPC5xVec3fi
// Start address: 0x27ee00
void zNMEMsg_AreaExplode(zNMECommon* who, float32 radius, xVec3* pos_altOrigin, float32 spd_grow, int32 skipNME)
{
	ExplodeCollideData cbdata;
	NMEMsg* msg;
	// Line 1176, Address: 0x27ee00, Func Offset: 0
	// Line 1179, Address: 0x27ee28, Func Offset: 0x28
	// Line 1184, Address: 0x27ee40, Func Offset: 0x40
	// Line 1181, Address: 0x27ee44, Func Offset: 0x44
	// Line 1182, Address: 0x27ee48, Func Offset: 0x48
	// Line 1184, Address: 0x27ee4c, Func Offset: 0x4c
	// Line 1186, Address: 0x27ee50, Func Offset: 0x50
	// Line 1187, Address: 0x27ee58, Func Offset: 0x58
	// Line 1190, Address: 0x27ee74, Func Offset: 0x74
	// Line 1201, Address: 0x27ee88, Func Offset: 0x88
	// Line 1203, Address: 0x27ee90, Func Offset: 0x90
	// Line 1205, Address: 0x27ee94, Func Offset: 0x94
	// Line 1206, Address: 0x27eea4, Func Offset: 0xa4
	// Line 1207, Address: 0x27eeac, Func Offset: 0xac
	// Line 1211, Address: 0x27eeb4, Func Offset: 0xb4
	// Line 1223, Address: 0x27eeb8, Func Offset: 0xb8
	// Line 1211, Address: 0x27eebc, Func Offset: 0xbc
	// Line 1223, Address: 0x27eec0, Func Offset: 0xc0
	// Line 1213, Address: 0x27eec4, Func Offset: 0xc4
	// Line 1223, Address: 0x27eec8, Func Offset: 0xc8
	// Line 1213, Address: 0x27eecc, Func Offset: 0xcc
	// Line 1223, Address: 0x27eed0, Func Offset: 0xd0
	// Line 1215, Address: 0x27eed4, Func Offset: 0xd4
	// Line 1223, Address: 0x27eed8, Func Offset: 0xd8
	// Line 1215, Address: 0x27eedc, Func Offset: 0xdc
	// Line 1218, Address: 0x27eee0, Func Offset: 0xe0
	// Line 1216, Address: 0x27eee4, Func Offset: 0xe4
	// Line 1218, Address: 0x27eee8, Func Offset: 0xe8
	// Line 1210, Address: 0x27eeec, Func Offset: 0xec
	// Line 1223, Address: 0x27eef0, Func Offset: 0xf0
	// Line 1227, Address: 0x27eef8, Func Offset: 0xf8
	// Line 1233, Address: 0x27ef10, Func Offset: 0x110
	// Line 1234, Address: 0x27ef44, Func Offset: 0x144
	// Func End, Address: 0x27ef60, Func Offset: 0x160
}

// __cl__18ExplodeCollideDataFR4xEnt
// Start address: 0x27ef60
uint8 ExplodeCollideData::__cl(xEnt& ent)
{
	xCollis colrec;
	zNMECommon* npc_hit;
	NMEMsg* msg;
	float32 tym_toImpact;
	xVec3 vec_diff;
	float32 fparam[4];
	en_ZBASETYPE typesWeCanHurt[11];
	// Line 1098, Address: 0x27ef60, Func Offset: 0
	// Line 1099, Address: 0x27ef70, Func Offset: 0x10
	// Line 1101, Address: 0x27ef80, Func Offset: 0x20
	// Line 1102, Address: 0x27ef90, Func Offset: 0x30
	// Line 1100, Address: 0x27ef98, Func Offset: 0x38
	// Line 1105, Address: 0x27efa0, Func Offset: 0x40
	// Line 1106, Address: 0x27efac, Func Offset: 0x4c
	// Line 1107, Address: 0x27efbc, Func Offset: 0x5c
	// Line 1109, Address: 0x27efe4, Func Offset: 0x84
	// Line 1111, Address: 0x27eff0, Func Offset: 0x90
	// Line 1129, Address: 0x27f000, Func Offset: 0xa0
	// Line 1111, Address: 0x27f004, Func Offset: 0xa4
	// Line 1129, Address: 0x27f008, Func Offset: 0xa8
	// Line 1131, Address: 0x27f040, Func Offset: 0xe0
	// Line 1135, Address: 0x27f048, Func Offset: 0xe8
	// Line 1141, Address: 0x27f060, Func Offset: 0x100
	// Line 1142, Address: 0x27f068, Func Offset: 0x108
	// Line 1143, Address: 0x27f084, Func Offset: 0x124
	// Line 1145, Address: 0x27f088, Func Offset: 0x128
	// Line 1143, Address: 0x27f090, Func Offset: 0x130
	// Line 1145, Address: 0x27f0a4, Func Offset: 0x144
	// Line 1143, Address: 0x27f0a8, Func Offset: 0x148
	// Line 1144, Address: 0x27f10c, Func Offset: 0x1ac
	// Line 1143, Address: 0x27f110, Func Offset: 0x1b0
	// Line 1144, Address: 0x27f118, Func Offset: 0x1b8
	// Line 1145, Address: 0x27f130, Func Offset: 0x1d0
	// Line 1146, Address: 0x27f13c, Func Offset: 0x1dc
	// Line 1147, Address: 0x27f144, Func Offset: 0x1e4
	// Line 1146, Address: 0x27f150, Func Offset: 0x1f0
	// Line 1147, Address: 0x27f154, Func Offset: 0x1f4
	// Line 1152, Address: 0x27f19c, Func Offset: 0x23c
	// Line 1155, Address: 0x27f1a0, Func Offset: 0x240
	// Line 1167, Address: 0x27f1ac, Func Offset: 0x24c
	// Line 1112, Address: 0x27f1b4, Func Offset: 0x254
	// Line 1132, Address: 0x27f1bc, Func Offset: 0x25c
	// Line 1167, Address: 0x27f1c4, Func Offset: 0x264
	// Line 1162, Address: 0x27f1cc, Func Offset: 0x26c
	// Line 1167, Address: 0x27f1d0, Func Offset: 0x270
	// Line 1162, Address: 0x27f1d8, Func Offset: 0x278
	// Line 1167, Address: 0x27f1e8, Func Offset: 0x288
	// Line 1168, Address: 0x27f21c, Func Offset: 0x2bc
	// Func End, Address: 0x27f230, Func Offset: 0x2d0
}

// zNMEMsg_AreaNMEYellBoo__FP10zNMECommonfPC5xVec3
// Start address: 0x27f230
void zNMEMsg_AreaNMEYellBoo(zNMECommon* who, float32 radius, xVec3* pos_fromHere)
{
	st_XORDEREDARRAY* npclist;
	xVec3 from;
	float32 ds2_discard;
	int32 i;
	zNMECommon* npc;
	en_npctyp ntyp;
	xVec3 diff;
	int32 amSpooking;
	// Line 1005, Address: 0x27f230, Func Offset: 0
	// Line 1008, Address: 0x27f234, Func Offset: 0x4
	// Line 1005, Address: 0x27f238, Func Offset: 0x8
	// Line 1008, Address: 0x27f260, Func Offset: 0x30
	// Line 1012, Address: 0x27f268, Func Offset: 0x38
	// Line 1015, Address: 0x27f26c, Func Offset: 0x3c
	// Line 1020, Address: 0x27f274, Func Offset: 0x44
	// Line 1021, Address: 0x27f27c, Func Offset: 0x4c
	// Line 1029, Address: 0x27f294, Func Offset: 0x64
	// Line 1025, Address: 0x27f298, Func Offset: 0x68
	// Line 1029, Address: 0x27f29c, Func Offset: 0x6c
	// Line 1030, Address: 0x27f2b4, Func Offset: 0x84
	// Line 1032, Address: 0x27f2c0, Func Offset: 0x90
	// Line 1036, Address: 0x27f2c8, Func Offset: 0x98
	// Line 1040, Address: 0x27f2d8, Func Offset: 0xa8
	// Line 1044, Address: 0x27f2f0, Func Offset: 0xc0
	// Line 1051, Address: 0x27f308, Func Offset: 0xd8
	// Line 1052, Address: 0x27f30c, Func Offset: 0xdc
	// Line 1059, Address: 0x27f320, Func Offset: 0xf0
	// Line 1060, Address: 0x27f344, Func Offset: 0x114
	// Line 1059, Address: 0x27f34c, Func Offset: 0x11c
	// Line 1060, Address: 0x27f350, Func Offset: 0x120
	// Line 1059, Address: 0x27f358, Func Offset: 0x128
	// Line 1060, Address: 0x27f35c, Func Offset: 0x12c
	// Line 1068, Address: 0x27f364, Func Offset: 0x134
	// Line 1070, Address: 0x27f374, Func Offset: 0x144
	// Line 1074, Address: 0x27f390, Func Offset: 0x160
	// Line 1075, Address: 0x27f3b4, Func Offset: 0x184
	// Func End, Address: 0x27f3dc, Func Offset: 0x1ac
}

// zNMEMsg_AreaNMEExplode__FP10zNMECommonfPC5xVec3f
// Start address: 0x27f3e0
void zNMEMsg_AreaNMEExplode(zNMECommon* who, float32 radius, xVec3* pos_fromHere, float32 spd_grow)
{
	st_XORDEREDARRAY* npclist;
	xVec3 from;
	float32 ds2_discard;
	NMEMsg msgtmp;
	int32 i;
	zNMECommon* npc;
	xVec3 diff;
	en_npctyp ntyp;
	float32 tym_delay;
	// Line 796, Address: 0x27f3e0, Func Offset: 0
	// Line 797, Address: 0x27f42c, Func Offset: 0x4c
	// Line 800, Address: 0x27f434, Func Offset: 0x54
	// Line 804, Address: 0x27f45c, Func Offset: 0x7c
	// Line 802, Address: 0x27f468, Func Offset: 0x88
	// Line 800, Address: 0x27f46c, Func Offset: 0x8c
	// Line 804, Address: 0x27f470, Func Offset: 0x90
	// Line 805, Address: 0x27f47c, Func Offset: 0x9c
	// Line 810, Address: 0x27f484, Func Offset: 0xa4
	// Line 811, Address: 0x27f494, Func Offset: 0xb4
	// Line 813, Address: 0x27f4b0, Func Offset: 0xd0
	// Line 812, Address: 0x27f4b4, Func Offset: 0xd4
	// Line 813, Address: 0x27f4b8, Func Offset: 0xd8
	// Line 815, Address: 0x27f4bc, Func Offset: 0xdc
	// Line 818, Address: 0x27f4c0, Func Offset: 0xe0
	// Line 815, Address: 0x27f4c4, Func Offset: 0xe4
	// Line 817, Address: 0x27f4c8, Func Offset: 0xe8
	// Line 821, Address: 0x27f4cc, Func Offset: 0xec
	// Line 817, Address: 0x27f4d0, Func Offset: 0xf0
	// Line 820, Address: 0x27f4d4, Func Offset: 0xf4
	// Line 826, Address: 0x27f4dc, Func Offset: 0xfc
	// Line 827, Address: 0x27f504, Func Offset: 0x124
	// Line 829, Address: 0x27f510, Func Offset: 0x130
	// Line 832, Address: 0x27f518, Func Offset: 0x138
	// Line 834, Address: 0x27f530, Func Offset: 0x150
	// Line 836, Address: 0x27f544, Func Offset: 0x164
	// Line 839, Address: 0x27f560, Func Offset: 0x180
	// Line 841, Address: 0x27f56c, Func Offset: 0x18c
	// Line 853, Address: 0x27f578, Func Offset: 0x198
	// Line 854, Address: 0x27f5b8, Func Offset: 0x1d8
	// Line 861, Address: 0x27f5c4, Func Offset: 0x1e4
	// Line 872, Address: 0x27f5dc, Func Offset: 0x1fc
	// Line 873, Address: 0x27f5e8, Func Offset: 0x208
	// Line 876, Address: 0x27f608, Func Offset: 0x228
	// Line 877, Address: 0x27f620, Func Offset: 0x240
	// Line 879, Address: 0x27f664, Func Offset: 0x284
	// Line 884, Address: 0x27f6a4, Func Offset: 0x2c4
	// Line 885, Address: 0x27f6a8, Func Offset: 0x2c8
	// Line 886, Address: 0x27f6c0, Func Offset: 0x2e0
	// Line 899, Address: 0x27f6e4, Func Offset: 0x304
	// Line 901, Address: 0x27f6f8, Func Offset: 0x318
	// Line 874, Address: 0x27f71c, Func Offset: 0x33c
	// Line 901, Address: 0x27f724, Func Offset: 0x344
	// Line 874, Address: 0x27f728, Func Offset: 0x348
	// Line 901, Address: 0x27f730, Func Offset: 0x350
	// Line 874, Address: 0x27f73c, Func Offset: 0x35c
	// Line 901, Address: 0x27f744, Func Offset: 0x364
	// Line 874, Address: 0x27f748, Func Offset: 0x368
	// Line 901, Address: 0x27f750, Func Offset: 0x370
	// Line 893, Address: 0x27f75c, Func Offset: 0x37c
	// Line 901, Address: 0x27f760, Func Offset: 0x380
	// Line 893, Address: 0x27f764, Func Offset: 0x384
	// Line 894, Address: 0x27f768, Func Offset: 0x388
	// Line 901, Address: 0x27f76c, Func Offset: 0x38c
	// Line 894, Address: 0x27f77c, Func Offset: 0x39c
	// Line 901, Address: 0x27f780, Func Offset: 0x3a0
	// Line 894, Address: 0x27f78c, Func Offset: 0x3ac
	// Line 901, Address: 0x27f790, Func Offset: 0x3b0
	// Line 895, Address: 0x27f798, Func Offset: 0x3b8
	// Line 897, Address: 0x27f7a4, Func Offset: 0x3c4
	// Line 901, Address: 0x27f7a8, Func Offset: 0x3c8
	// Line 902, Address: 0x27f7b8, Func Offset: 0x3d8
	// Func End, Address: 0x27f7fc, Func Offset: 0x41c
}

// zNMEMsg_AreaPlayerStun__FffP5xVec3
// Start address: 0x27f800
void zNMEMsg_AreaPlayerStun(float32 stuntime, float32 radius, xVec3* pos)
{
	st_XORDEREDARRAY* npclist;
	xVec3 from;
	float32 ds2_discard;
	NMEMsg msg;
	int32 i;
	zNMECommon* npc;
	en_npctyp ntyp;
	// Line 716, Address: 0x27f800, Func Offset: 0
	// Line 717, Address: 0x27f830, Func Offset: 0x30
	// Line 721, Address: 0x27f838, Func Offset: 0x38
	// Line 722, Address: 0x27f840, Func Offset: 0x40
	// Line 726, Address: 0x27f858, Func Offset: 0x58
	// Line 731, Address: 0x27f85c, Func Offset: 0x5c
	// Line 734, Address: 0x27f86c, Func Offset: 0x6c
	// Line 732, Address: 0x27f870, Func Offset: 0x70
	// Line 734, Address: 0x27f874, Func Offset: 0x74
	// Line 737, Address: 0x27f878, Func Offset: 0x78
	// Line 736, Address: 0x27f87c, Func Offset: 0x7c
	// Line 732, Address: 0x27f880, Func Offset: 0x80
	// Line 736, Address: 0x27f884, Func Offset: 0x84
	// Line 733, Address: 0x27f888, Func Offset: 0x88
	// Line 743, Address: 0x27f88c, Func Offset: 0x8c
	// Line 744, Address: 0x27f8a8, Func Offset: 0xa8
	// Line 747, Address: 0x27f8b4, Func Offset: 0xb4
	// Line 751, Address: 0x27f8c4, Func Offset: 0xc4
	// Line 755, Address: 0x27f8dc, Func Offset: 0xdc
	// Line 756, Address: 0x27f8f4, Func Offset: 0xf4
	// Line 759, Address: 0x27f8f8, Func Offset: 0xf8
	// Line 765, Address: 0x27f90c, Func Offset: 0x10c
	// Line 766, Address: 0x27f910, Func Offset: 0x110
	// Line 769, Address: 0x27f94c, Func Offset: 0x14c
	// Line 775, Address: 0x27f950, Func Offset: 0x150
	// Line 776, Address: 0x27f958, Func Offset: 0x158
	// Line 775, Address: 0x27f95c, Func Offset: 0x15c
	// Line 776, Address: 0x27f964, Func Offset: 0x164
	// Line 775, Address: 0x27f96c, Func Offset: 0x16c
	// Line 776, Address: 0x27f970, Func Offset: 0x170
	// Line 779, Address: 0x27f97c, Func Offset: 0x17c
	// Line 786, Address: 0x27f990, Func Offset: 0x190
	// Line 787, Address: 0x27f994, Func Offset: 0x194
	// Line 789, Address: 0x27f9a0, Func Offset: 0x1a0
	// Line 791, Address: 0x27f9b8, Func Offset: 0x1b8
	// Line 792, Address: 0x27f9ec, Func Offset: 0x1ec
	// Func End, Address: 0x27fa14, Func Offset: 0x214
}

// zNMEMsg_AreaNotify__FP10zNMECommonP6NMEMsgfiP9en_npctyp
// Start address: 0x27fa20
void zNMEMsg_AreaNotify(zNMECommon* sender, NMEMsg* msg, float32 radius, int32 filter, en_npctyp* npcTypeList)
{
	int32 i;
	st_XORDEREDARRAY* npclist;
	zNMECommon* npc;
	en_npctyp ntyp;
	int32 skipit;
	// Line 611, Address: 0x27fa20, Func Offset: 0
	// Line 613, Address: 0x27fa60, Func Offset: 0x40
	// Line 611, Address: 0x27fa64, Func Offset: 0x44
	// Line 615, Address: 0x27fa6c, Func Offset: 0x4c
	// Line 619, Address: 0x27fa74, Func Offset: 0x54
	// Line 620, Address: 0x27fa80, Func Offset: 0x60
	// Line 621, Address: 0x27fa98, Func Offset: 0x78
	// Line 624, Address: 0x27faa0, Func Offset: 0x80
	// Line 629, Address: 0x27fabc, Func Offset: 0x9c
	// Line 637, Address: 0x27fac8, Func Offset: 0xa8
	// Line 638, Address: 0x27fb14, Func Offset: 0xf4
	// Line 641, Address: 0x27fb1c, Func Offset: 0xfc
	// Line 644, Address: 0x27fb34, Func Offset: 0x114
	// Line 653, Address: 0x27fb38, Func Offset: 0x118
	// Line 657, Address: 0x27fb58, Func Offset: 0x138
	// Line 663, Address: 0x27fb78, Func Offset: 0x158
	// Line 666, Address: 0x27fb8c, Func Offset: 0x16c
	// Line 667, Address: 0x27fb98, Func Offset: 0x178
	// Line 669, Address: 0x27fba4, Func Offset: 0x184
	// Line 670, Address: 0x27fbac, Func Offset: 0x18c
	// Line 669, Address: 0x27fbb0, Func Offset: 0x190
	// Line 672, Address: 0x27fbb4, Func Offset: 0x194
	// Line 673, Address: 0x27fbc0, Func Offset: 0x1a0
	// Line 678, Address: 0x27fbd0, Func Offset: 0x1b0
	// Line 680, Address: 0x27fc14, Func Offset: 0x1f4
	// Line 681, Address: 0x27fc18, Func Offset: 0x1f8
	// Line 682, Address: 0x27fc38, Func Offset: 0x218
	// Line 683, Address: 0x27fc58, Func Offset: 0x238
	// Line 687, Address: 0x27fc78, Func Offset: 0x258
	// Line 691, Address: 0x27fc80, Func Offset: 0x260
	// Line 692, Address: 0x27fc84, Func Offset: 0x264
	// Line 691, Address: 0x27fc8c, Func Offset: 0x26c
	// Line 692, Address: 0x27fc90, Func Offset: 0x270
	// Line 691, Address: 0x27fc94, Func Offset: 0x274
	// Line 692, Address: 0x27fc9c, Func Offset: 0x27c
	// Line 691, Address: 0x27fca4, Func Offset: 0x284
	// Line 692, Address: 0x27fca8, Func Offset: 0x288
	// Line 694, Address: 0x27fcb4, Func Offset: 0x294
	// Line 697, Address: 0x27fcd4, Func Offset: 0x2b4
	// Line 698, Address: 0x27fcd8, Func Offset: 0x2b8
	// Line 699, Address: 0x27fce8, Func Offset: 0x2c8
	// Line 701, Address: 0x27fd00, Func Offset: 0x2e0
	// Line 632, Address: 0x27fd24, Func Offset: 0x304
	// Line 701, Address: 0x27fd28, Func Offset: 0x308
	// Line 702, Address: 0x27fd70, Func Offset: 0x350
	// Func End, Address: 0x27fdb0, Func Offset: 0x390
}

// zNMEMsg_AreaNotify__FP10zNMECommon9en_npcmsgfi9en_npctyp
// Start address: 0x27fdb0
void zNMEMsg_AreaNotify(zNMECommon* sender, en_npcmsg msgid, float32 rad, int32 filter, en_npctyp toNMEType)
{
	en_npctyp toTypes[2];
	// Line 559, Address: 0x27fdb0, Func Offset: 0
	// Line 561, Address: 0x27fdd4, Func Offset: 0x24
	// Line 562, Address: 0x27fde0, Func Offset: 0x30
	// Line 563, Address: 0x27fde4, Func Offset: 0x34
	// Line 562, Address: 0x27fde8, Func Offset: 0x38
	// Line 563, Address: 0x27fdec, Func Offset: 0x3c
	// Line 565, Address: 0x27fe10, Func Offset: 0x60
	// Line 563, Address: 0x27fe14, Func Offset: 0x64
	// Line 565, Address: 0x27fe18, Func Offset: 0x68
	// Line 568, Address: 0x27fe28, Func Offset: 0x78
	// Line 573, Address: 0x27fe40, Func Offset: 0x90
	// Line 568, Address: 0x27fe44, Func Offset: 0x94
	// Line 573, Address: 0x27fe48, Func Offset: 0x98
	// Line 569, Address: 0x27fe4c, Func Offset: 0x9c
	// Line 573, Address: 0x27fe50, Func Offset: 0xa0
	// Line 569, Address: 0x27fe54, Func Offset: 0xa4
	// Line 573, Address: 0x27fe58, Func Offset: 0xa8
	// Line 570, Address: 0x27fe5c, Func Offset: 0xac
	// Line 573, Address: 0x27fe60, Func Offset: 0xb0
	// Line 570, Address: 0x27fe64, Func Offset: 0xb4
	// Line 573, Address: 0x27fe68, Func Offset: 0xb8
	// Line 571, Address: 0x27fe6c, Func Offset: 0xbc
	// Line 573, Address: 0x27fe70, Func Offset: 0xc0
	// Line 575, Address: 0x27fe78, Func Offset: 0xc8
	// Line 577, Address: 0x27fe7c, Func Offset: 0xcc
	// Func End, Address: 0x27fe98, Func Offset: 0xe8
}

// zNMEMsg_SendMsg__FP6NMEMsgP10zNMECommonf
// Start address: 0x27fea0
void zNMEMsg_SendMsg(NMEMsg* inmsg, zNMECommon* npc_sendto, float32 delay)
{
	st_XORDEREDARRAY* npclist;
	int32 idx;
	NMEPSData* npcps;
	int32 i;
	NMEPSClt* clt;
	// Line 285, Address: 0x27fea0, Func Offset: 0
	// Line 286, Address: 0x27fea8, Func Offset: 0x8
	// Line 285, Address: 0x27feac, Func Offset: 0xc
	// Line 286, Address: 0x27fec8, Func Offset: 0x28
	// Line 288, Address: 0x27fed4, Func Offset: 0x34
	// Line 290, Address: 0x27feec, Func Offset: 0x4c
	// Line 291, Address: 0x27fef4, Func Offset: 0x54
	// Line 292, Address: 0x27ff04, Func Offset: 0x64
	// Line 291, Address: 0x27ff08, Func Offset: 0x68
	// Line 292, Address: 0x27ff0c, Func Offset: 0x6c
	// Line 293, Address: 0x27ff1c, Func Offset: 0x7c
	// Line 300, Address: 0x27ff24, Func Offset: 0x84
	// Line 309, Address: 0x27ff2c, Func Offset: 0x8c
	// Line 310, Address: 0x27ff34, Func Offset: 0x94
	// Line 315, Address: 0x27ff40, Func Offset: 0xa0
	// Line 313, Address: 0x27ff44, Func Offset: 0xa4
	// Line 315, Address: 0x27ff48, Func Offset: 0xa8
	// Line 313, Address: 0x27ff4c, Func Offset: 0xac
	// Line 315, Address: 0x27ff50, Func Offset: 0xb0
	// Line 316, Address: 0x27ff60, Func Offset: 0xc0
	// Line 317, Address: 0x27ff6c, Func Offset: 0xcc
	// Line 320, Address: 0x27ff7c, Func Offset: 0xdc
	// Line 321, Address: 0x27ff94, Func Offset: 0xf4
	// Line 323, Address: 0x27ff98, Func Offset: 0xf8
	// Line 296, Address: 0x27ffb4, Func Offset: 0x114
	// Line 323, Address: 0x27ffbc, Func Offset: 0x11c
	// Line 298, Address: 0x27ffc4, Func Offset: 0x124
	// Line 323, Address: 0x27ffcc, Func Offset: 0x12c
	// Line 301, Address: 0x27ffd8, Func Offset: 0x138
	// Line 323, Address: 0x27ffdc, Func Offset: 0x13c
	// Line 302, Address: 0x27ffe0, Func Offset: 0x140
	// Line 323, Address: 0x27ffe4, Func Offset: 0x144
	// Line 305, Address: 0x27fff8, Func Offset: 0x158
	// Line 323, Address: 0x27fffc, Func Offset: 0x15c
	// Line 324, Address: 0x280020, Func Offset: 0x180
	// Func End, Address: 0x280040, Func Offset: 0x1a0
}

// zNMEMsg_SendMsg__F9en_npcmsgP10zNMECommonf
// Start address: 0x280040
void zNMEMsg_SendMsg(en_npcmsg msgevent, zNMECommon* npc_sendto)
{
	// Line 265, Address: 0x280040, Func Offset: 0
	// Line 267, Address: 0x280044, Func Offset: 0x4
	// Line 265, Address: 0x280048, Func Offset: 0x8
	// Line 267, Address: 0x28005c, Func Offset: 0x1c
	// Line 268, Address: 0x28006c, Func Offset: 0x2c
	// Line 270, Address: 0x280070, Func Offset: 0x30
	// Line 268, Address: 0x280074, Func Offset: 0x34
	// Line 269, Address: 0x280078, Func Offset: 0x38
	// Line 270, Address: 0x28007c, Func Offset: 0x3c
	// Line 269, Address: 0x28008c, Func Offset: 0x4c
	// Line 270, Address: 0x280090, Func Offset: 0x50
	// Line 271, Address: 0x280098, Func Offset: 0x58
	// Func End, Address: 0x2800ac, Func Offset: 0x6c
}

// Timestep__11zMODMessageFf
// Start address: 0x2800b0
void zMODMessage::Timestep(float32 dt)
{
	NMEPSData* npcps;
	int32 i;
	NMEMsg* msg;
	// Line 176, Address: 0x2800b0, Func Offset: 0
	// Line 184, Address: 0x2800b4, Func Offset: 0x4
	// Line 176, Address: 0x2800b8, Func Offset: 0x8
	// Line 177, Address: 0x2800d0, Func Offset: 0x20
	// Line 184, Address: 0x2800d4, Func Offset: 0x24
	// Line 185, Address: 0x2800ec, Func Offset: 0x3c
	// Line 188, Address: 0x2800f0, Func Offset: 0x40
	// Line 185, Address: 0x2800f8, Func Offset: 0x48
	// Line 188, Address: 0x280108, Func Offset: 0x58
	// Line 191, Address: 0x280120, Func Offset: 0x70
	// Line 209, Address: 0x280144, Func Offset: 0x94
	// Line 211, Address: 0x280150, Func Offset: 0xa0
	// Line 197, Address: 0x280158, Func Offset: 0xa8
	// Line 211, Address: 0x280164, Func Offset: 0xb4
	// Line 205, Address: 0x28016c, Func Offset: 0xbc
	// Line 211, Address: 0x280174, Func Offset: 0xc4
	// Line 212, Address: 0x280194, Func Offset: 0xe4
	// Func End, Address: 0x2801b4, Func Offset: 0x104
}

// SceneReset__11zMODMessageFv
// Start address: 0x2801c0
void zMODMessage::SceneReset()
{
	NMEPSData* npcps;
	// Line 163, Address: 0x2801c0, Func Offset: 0
	// Line 168, Address: 0x2801c4, Func Offset: 0x4
	// Line 163, Address: 0x2801c8, Func Offset: 0x8
	// Line 168, Address: 0x2801cc, Func Offset: 0xc
	// Line 163, Address: 0x2801d0, Func Offset: 0x10
	// Line 168, Address: 0x2801d4, Func Offset: 0x14
	// Line 163, Address: 0x2801d8, Func Offset: 0x18
	// Line 168, Address: 0x2801dc, Func Offset: 0x1c
	// Line 164, Address: 0x2801e0, Func Offset: 0x20
	// Line 168, Address: 0x2801e4, Func Offset: 0x24
	// Line 164, Address: 0x2801e8, Func Offset: 0x28
	// Line 168, Address: 0x2801ec, Func Offset: 0x2c
	// Line 170, Address: 0x280308, Func Offset: 0x148
	// Line 168, Address: 0x280314, Func Offset: 0x154
	// Line 170, Address: 0x280318, Func Offset: 0x158
	// Line 173, Address: 0x280448, Func Offset: 0x288
	// Func End, Address: 0x28045c, Func Offset: 0x29c
}

// SceneFinish__11zMODMessageFv
// Start address: 0x280460
void zMODMessage::SceneFinish()
{
	// Line 157, Address: 0x280460, Func Offset: 0
	// Func End, Address: 0x280470, Func Offset: 0x10
}

