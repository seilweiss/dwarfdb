



void xParEmitterEmitEntBone(xPar* p, xParEmitterAsset* a, xMat4x3& mat);
void xParEmitterTransformEntBone(xVec3& loc, xVec3& vel, xParEmitterAsset& a, xMat4x3& mat);
void xParEmitterEmitEntity(xPar* p, xParEmitterAsset* a, xEnt* ent);
void xParEmitterEmitVolume(xPar* p, xParEmitterAsset* a, xVolume* vol);
void xParEmitterEmitSphereEdge(xPar* p, xParEmitterAsset* a, int32 subtype);
void xParEmitterEmitLine(xPar* p, xParEmitterAsset* a);
void xParEmitterEmitRectEdge(xPar* p, xParEmitterAsset* a);
void xParEmitterEmitCircle(xPar* p, xParEmitterAsset* a);
void xParEmitterEmitCircleEdge(xPar* p, xParEmitterAsset* a);

// xParEmitterEmitEntBone__FP4xParP16xParEmitterAssetfRC7xMat4x3
// Start address: 0x3abcb0
void xParEmitterEmitEntBone(xPar* p, xParEmitterAsset* a, xMat4x3& mat)
{
	int32 left'2058;
	uint32* next'2057;
	xPEEntBone& region;
	xVec3 offset;
	// Line 749, Address: 0x3abcb0, Func Offset: 0
	// Line 756, Address: 0x3abce4, Func Offset: 0x34
	// Line 757, Address: 0x3ae354, Func Offset: 0x26a4
	// Line 756, Address: 0x3ae358, Func Offset: 0x26a8
	// Line 757, Address: 0x3ae360, Func Offset: 0x26b0
	// Line 756, Address: 0x3ae364, Func Offset: 0x26b4
	// Line 757, Address: 0x3ae368, Func Offset: 0x26b8
	// Line 756, Address: 0x3ae36c, Func Offset: 0x26bc
	// Line 760, Address: 0x3ae370, Func Offset: 0x26c0
	// Line 756, Address: 0x3ae374, Func Offset: 0x26c4
	// Line 757, Address: 0x3ae37c, Func Offset: 0x26cc
	// Line 760, Address: 0x3ae3a0, Func Offset: 0x26f0
	// Line 761, Address: 0x3ae3ac, Func Offset: 0x26fc
	// Line 764, Address: 0x3ae440, Func Offset: 0x2790
	// Line 765, Address: 0x3aebd8, Func Offset: 0x2f28
	// Func End, Address: 0x3aec04, Func Offset: 0x2f54
}

// xParEmitterTransformEntBone__FR5xVec3R5xVec3RC16xParEmitterAssetRC7xMat4x3
// Start address: 0x3aec10
void xParEmitterTransformEntBone(xVec3& loc, xVec3& vel, xParEmitterAsset& a, xMat4x3& mat)
{
	// Line 744, Address: 0x3aec10, Func Offset: 0
	// Line 745, Address: 0x3aec14, Func Offset: 0x4
	// Line 746, Address: 0x3aee0c, Func Offset: 0x1fc
	// Func End, Address: 0x3aee14, Func Offset: 0x204
}

// xParEmitterEmitEntity__FP4xParP16xParEmitterAssetfP4xEnt
// Start address: 0x3aee20
void xParEmitterEmitEntity(xPar* p, xParEmitterAsset* a, xEnt* ent)
{
	int32 left'497;
	uint32* next'496;
	uint32 size;
	xModelInstance* model;
	xVec3 loc;
	uint32 which;
	xModelInstance* model;
	uint32 size;
	// Line 392, Address: 0x3aee20, Func Offset: 0
	// Line 398, Address: 0x3aee34, Func Offset: 0x14
	// Line 400, Address: 0x3aee44, Func Offset: 0x24
	// Line 405, Address: 0x3aee54, Func Offset: 0x34
	// Line 406, Address: 0x3aee64, Func Offset: 0x44
	// Line 411, Address: 0x3aee78, Func Offset: 0x58
	// Line 412, Address: 0x3aefc0, Func Offset: 0x1a0
	// Line 411, Address: 0x3aefc4, Func Offset: 0x1a4
	// Line 412, Address: 0x3aeff0, Func Offset: 0x1d0
	// Line 414, Address: 0x3aeff8, Func Offset: 0x1d8
	// Line 416, Address: 0x3af00c, Func Offset: 0x1ec
	// Line 417, Address: 0x3af014, Func Offset: 0x1f4
	// Line 422, Address: 0x3af020, Func Offset: 0x200
	// Line 423, Address: 0x3af024, Func Offset: 0x204
	// Line 419, Address: 0x3af040, Func Offset: 0x220
	// Line 423, Address: 0x3af048, Func Offset: 0x228
	// Line 425, Address: 0x3af050, Func Offset: 0x230
	// Line 427, Address: 0x3af05c, Func Offset: 0x23c
	// Line 425, Address: 0x3af060, Func Offset: 0x240
	// Line 426, Address: 0x3af06c, Func Offset: 0x24c
	// Line 427, Address: 0x3af084, Func Offset: 0x264
	// Line 428, Address: 0x3af814, Func Offset: 0x9f4
	// Func End, Address: 0x3af828, Func Offset: 0xa08
}

// xParEmitterEmitVolume__FP4xParP16xParEmitterAssetfP7xVolume
// Start address: 0x3af830
void xParEmitterEmitVolume(xPar* p, xParEmitterAsset* a, xVolume* vol)
{
	int32 left'636;
	uint32* next'635;
	xBound* b;
	// Line 346, Address: 0x3af830, Func Offset: 0
	// Line 350, Address: 0x3af844, Func Offset: 0x14
	// Line 352, Address: 0x3af85c, Func Offset: 0x2c
	// Line 362, Address: 0x3af864, Func Offset: 0x34
	// Line 365, Address: 0x3af86c, Func Offset: 0x3c
	// Line 368, Address: 0x3af87c, Func Offset: 0x4c
	// Line 370, Address: 0x3af880, Func Offset: 0x50
	// Line 368, Address: 0x3af884, Func Offset: 0x54
	// Line 370, Address: 0x3af898, Func Offset: 0x68
	// Line 368, Address: 0x3af89c, Func Offset: 0x6c
	// Line 370, Address: 0x3af8a4, Func Offset: 0x74
	// Line 371, Address: 0x3afa40, Func Offset: 0x210
	// Line 372, Address: 0x3afbf0, Func Offset: 0x3c0
	// Line 374, Address: 0x3afda4, Func Offset: 0x574
	// Line 384, Address: 0x3afdc8, Func Offset: 0x598
	// Line 385, Address: 0x3b0560, Func Offset: 0xd30
	// Func End, Address: 0x3b0574, Func Offset: 0xd44
}

// xParEmitterEmitSphereEdge__FP4xParP16xParEmitterAssetfi
// Start address: 0x3b0580
void xParEmitterEmitSphereEdge(xPar* p, xParEmitterAsset* a, int32 subtype)
{
	int32 left'990;
	uint32* next'989;
	xVec3 offset;
	xMat3x3 mat_rot;
	// Line 297, Address: 0x3b0580, Func Offset: 0
	// Line 302, Address: 0x3b0584, Func Offset: 0x4
	// Line 297, Address: 0x3b0588, Func Offset: 0x8
	// Line 302, Address: 0x3b0598, Func Offset: 0x18
	// Line 303, Address: 0x3b05c0, Func Offset: 0x40
	// Line 307, Address: 0x3b05e8, Func Offset: 0x68
	// Line 309, Address: 0x3b05ec, Func Offset: 0x6c
	// Line 307, Address: 0x3b05f0, Func Offset: 0x70
	// Line 309, Address: 0x3b0600, Func Offset: 0x80
	// Line 312, Address: 0x3b0624, Func Offset: 0xa4
	// Line 313, Address: 0x3b0b40, Func Offset: 0x5c0
	// Line 315, Address: 0x3b0b48, Func Offset: 0x5c8
	// Line 316, Address: 0x3b0ecc, Func Offset: 0x94c
	// Line 319, Address: 0x3b0ed4, Func Offset: 0x954
	// Line 326, Address: 0x3b1250, Func Offset: 0xcd0
	// Line 329, Address: 0x3b1268, Func Offset: 0xce8
	// Line 330, Address: 0x3b1278, Func Offset: 0xcf8
	// Line 333, Address: 0x3b1290, Func Offset: 0xd10
	// Line 334, Address: 0x3b1294, Func Offset: 0xd14
	// Line 329, Address: 0x3b1298, Func Offset: 0xd18
	// Line 333, Address: 0x3b129c, Func Offset: 0xd1c
	// Line 334, Address: 0x3b12a0, Func Offset: 0xd20
	// Line 333, Address: 0x3b12ac, Func Offset: 0xd2c
	// Line 334, Address: 0x3b12b0, Func Offset: 0xd30
	// Line 333, Address: 0x3b12bc, Func Offset: 0xd3c
	// Line 334, Address: 0x3b12c0, Func Offset: 0xd40
	// Line 337, Address: 0x3b12c8, Func Offset: 0xd48
	// Line 333, Address: 0x3b12cc, Func Offset: 0xd4c
	// Line 337, Address: 0x3b12d4, Func Offset: 0xd54
	// Line 340, Address: 0x3b1a64, Func Offset: 0x14e4
	// Func End, Address: 0x3b1a78, Func Offset: 0x14f8
}

// xParEmitterEmitLine__FP4xParP16xParEmitterAssetf
// Start address: 0x3b1a80
void xParEmitterEmitLine(xPar* p, xParEmitterAsset* a)
{
	int32 left'732;
	uint32* next'731;
	xVec3 vec;
	float32 len;
	float32 rand_len;
	float32 yaw;
	float32 pitch;
	xVec3 dir;
	// Line 238, Address: 0x3b1a80, Func Offset: 0
	// Line 249, Address: 0x3b1a90, Func Offset: 0x10
	// Line 238, Address: 0x3b1a94, Func Offset: 0x14
	// Line 249, Address: 0x3b1a98, Func Offset: 0x18
	// Line 238, Address: 0x3b1a9c, Func Offset: 0x1c
	// Line 242, Address: 0x3b1ab4, Func Offset: 0x34
	// Line 249, Address: 0x3b1acc, Func Offset: 0x4c
	// Line 250, Address: 0x3b1ad0, Func Offset: 0x50
	// Line 249, Address: 0x3b1ad4, Func Offset: 0x54
	// Line 250, Address: 0x3b1afc, Func Offset: 0x7c
	// Line 252, Address: 0x3b1b08, Func Offset: 0x88
	// Line 253, Address: 0x3b1cac, Func Offset: 0x22c
	// Line 254, Address: 0x3b1cc8, Func Offset: 0x248
	// Line 255, Address: 0x3b1cdc, Func Offset: 0x25c
	// Line 257, Address: 0x3b1cf0, Func Offset: 0x270
	// Line 259, Address: 0x3b1d00, Func Offset: 0x280
	// Line 260, Address: 0x3b2068, Func Offset: 0x5e8
	// Line 261, Address: 0x3b2098, Func Offset: 0x618
	// Line 263, Address: 0x3b20c4, Func Offset: 0x644
	// Line 261, Address: 0x3b20c8, Func Offset: 0x648
	// Line 263, Address: 0x3b20d0, Func Offset: 0x650
	// Line 261, Address: 0x3b20d4, Func Offset: 0x654
	// Line 263, Address: 0x3b20d8, Func Offset: 0x658
	// Line 261, Address: 0x3b20dc, Func Offset: 0x65c
	// Line 263, Address: 0x3b20e0, Func Offset: 0x660
	// Line 265, Address: 0x3b2278, Func Offset: 0x7f8
	// Line 268, Address: 0x3b22fc, Func Offset: 0x87c
	// Line 271, Address: 0x3b2a94, Func Offset: 0x1014
	// Func End, Address: 0x3b2abc, Func Offset: 0x103c
}

// xParEmitterEmitRectEdge__FP4xParP16xParEmitterAssetf
// Start address: 0x3b2ac0
void xParEmitterEmitRectEdge(xPar* p, xParEmitterAsset* a)
{
	int32 left'550;
	uint32* next'549;
	float32 val;
	// Line 207, Address: 0x3b2ac0, Func Offset: 0
	// Line 211, Address: 0x3b2acc, Func Offset: 0xc
	// Line 213, Address: 0x3b2ae8, Func Offset: 0x28
	// Line 216, Address: 0x3b2c1c, Func Offset: 0x15c
	// Line 213, Address: 0x3b2c24, Func Offset: 0x164
	// Line 216, Address: 0x3b2c58, Func Offset: 0x198
	// Line 217, Address: 0x3b2ca0, Func Offset: 0x1e0
	// Line 218, Address: 0x3b2cac, Func Offset: 0x1ec
	// Line 220, Address: 0x3b2cbc, Func Offset: 0x1fc
	// Line 223, Address: 0x3b2cc8, Func Offset: 0x208
	// Line 224, Address: 0x3b2dfc, Func Offset: 0x33c
	// Line 223, Address: 0x3b2e04, Func Offset: 0x344
	// Line 224, Address: 0x3b2e38, Func Offset: 0x378
	// Line 225, Address: 0x3b2e80, Func Offset: 0x3c0
	// Line 226, Address: 0x3b2e8c, Func Offset: 0x3cc
	// Line 228, Address: 0x3b2e9c, Func Offset: 0x3dc
	// Line 230, Address: 0x3b2ea8, Func Offset: 0x3e8
	// Line 232, Address: 0x3b3640, Func Offset: 0xb80
	// Func End, Address: 0x3b3650, Func Offset: 0xb90
}

// xParEmitterEmitCircle__FP4xParP16xParEmitterAssetf
// Start address: 0x3b3650
void xParEmitterEmitCircle(xPar* p, xParEmitterAsset* a)
{
	int32 left'551;
	uint32* next'550;
	float32 rot_amount;
	float32 dt_radius;
	// Line 146, Address: 0x3b3650, Func Offset: 0
	// Line 150, Address: 0x3b3670, Func Offset: 0x20
	// Line 154, Address: 0x3b3688, Func Offset: 0x38
	// Line 157, Address: 0x3b383c, Func Offset: 0x1ec
	// Line 158, Address: 0x3b3844, Func Offset: 0x1f4
	// Line 166, Address: 0x3b3850, Func Offset: 0x200
	// Line 165, Address: 0x3b3854, Func Offset: 0x204
	// Line 161, Address: 0x3b3858, Func Offset: 0x208
	// Line 166, Address: 0x3b385c, Func Offset: 0x20c
	// Line 168, Address: 0x3b39f8, Func Offset: 0x3a8
	// Line 170, Address: 0x3b3a18, Func Offset: 0x3c8
	// Line 172, Address: 0x3b3a20, Func Offset: 0x3d0
	// Line 171, Address: 0x3b3a24, Func Offset: 0x3d4
	// Line 172, Address: 0x3b3a2c, Func Offset: 0x3dc
	// Line 173, Address: 0x3b3a34, Func Offset: 0x3e4
	// Line 175, Address: 0x3b3a40, Func Offset: 0x3f0
	// Line 179, Address: 0x3b41d4, Func Offset: 0xb84
	// Line 181, Address: 0x3b41e8, Func Offset: 0xb98
	// Line 182, Address: 0x3b41ec, Func Offset: 0xb9c
	// Line 181, Address: 0x3b41f0, Func Offset: 0xba0
	// Line 182, Address: 0x3b41f4, Func Offset: 0xba4
	// Line 183, Address: 0x3b4200, Func Offset: 0xbb0
	// Line 185, Address: 0x3b4210, Func Offset: 0xbc0
	// Func End, Address: 0x3b422c, Func Offset: 0xbdc
}

// xParEmitterEmitCircleEdge__FP4xParP16xParEmitterAssetf
// Start address: 0x3b4230
void xParEmitterEmitCircleEdge(xPar* p, xParEmitterAsset* a)
{
	int32 left'468;
	uint32* next'467;
	float32 rot_amount;
	float32 dt_radius;
	// Line 99, Address: 0x3b4230, Func Offset: 0
	// Line 103, Address: 0x3b4250, Func Offset: 0x20
	// Line 107, Address: 0x3b4268, Func Offset: 0x38
	// Line 110, Address: 0x3b441c, Func Offset: 0x1ec
	// Line 111, Address: 0x3b4424, Func Offset: 0x1f4
	// Line 118, Address: 0x3b4430, Func Offset: 0x200
	// Line 120, Address: 0x3b4438, Func Offset: 0x208
	// Line 122, Address: 0x3b443c, Func Offset: 0x20c
	// Line 124, Address: 0x3b4440, Func Offset: 0x210
	// Line 120, Address: 0x3b4444, Func Offset: 0x214
	// Line 122, Address: 0x3b4450, Func Offset: 0x220
	// Line 121, Address: 0x3b4458, Func Offset: 0x228
	// Line 123, Address: 0x3b445c, Func Offset: 0x22c
	// Line 124, Address: 0x3b4460, Func Offset: 0x230
	// Line 125, Address: 0x3b4468, Func Offset: 0x238
	// Line 128, Address: 0x3b4474, Func Offset: 0x244
	// Line 132, Address: 0x3b4c08, Func Offset: 0x9d8
	// Line 134, Address: 0x3b4c1c, Func Offset: 0x9ec
	// Line 135, Address: 0x3b4c20, Func Offset: 0x9f0
	// Line 134, Address: 0x3b4c24, Func Offset: 0x9f4
	// Line 135, Address: 0x3b4c28, Func Offset: 0x9f8
	// Line 136, Address: 0x3b4c34, Func Offset: 0xa04
	// Line 138, Address: 0x3b4c44, Func Offset: 0xa14
	// Func End, Address: 0x3b4c60, Func Offset: 0xa30
}

