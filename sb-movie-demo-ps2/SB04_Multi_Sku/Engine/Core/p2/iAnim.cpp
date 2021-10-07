



void iAnimQuatSlerpPS2(xQuat* quat1, xQuat* quat2, xVec3* tran1, xVec3* tran2, float32 lerp, xQuat* quatDest, xVec3* tranDest);
void iAnimBlend(float32 BlendFactor, float32 BlendRecip, uint16* BlendTimeOffset, float32* BoneTable, uint32 BoneCount, xVec3* Tran1, xQuat* Quat1, xVec3* Tran2, xQuat* Quat2, xVec3* TranDest, xQuat* QuatDest);
uint32 iAnimBoneCount(void* RawData);
float32 iAnimDuration(void* RawData);
void iAnimEval(void* RawData, float32 time, uint32 flags, xVec3* tran, xQuat* quat);
void iAnimInit();

// iAnimQuatSlerpPS2__FP5xQuatP5xQuatP5xVec3P5xVec3fP5xQuatP5xVec3
// Start address: 0x4b6f60
void iAnimQuatSlerpPS2(xQuat* quat1, xQuat* quat2, xVec3* tran1, xVec3* tran2, float32 lerp, xQuat* quatDest, xVec3* tranDest)
{
	uint32 costheta;
	uint32 theta;
	// Line 330, Address: 0x4b6f60, Func Offset: 0
	// Line 331, Address: 0x4b6f64, Func Offset: 0x4
	// Line 332, Address: 0x4b6f68, Func Offset: 0x8
	// Line 333, Address: 0x4b6f6c, Func Offset: 0xc
	// Line 334, Address: 0x4b6f70, Func Offset: 0x10
	// Line 335, Address: 0x4b6f74, Func Offset: 0x14
	// Line 336, Address: 0x4b6f78, Func Offset: 0x18
	// Line 337, Address: 0x4b6f7c, Func Offset: 0x1c
	// Line 338, Address: 0x4b6f80, Func Offset: 0x20
	// Line 339, Address: 0x4b6f84, Func Offset: 0x24
	// Line 340, Address: 0x4b6f88, Func Offset: 0x28
	// Line 341, Address: 0x4b6f8c, Func Offset: 0x2c
	// Line 342, Address: 0x4b6f90, Func Offset: 0x30
	// Line 343, Address: 0x4b6f94, Func Offset: 0x34
	// Line 344, Address: 0x4b6f98, Func Offset: 0x38
	// Line 345, Address: 0x4b6f9c, Func Offset: 0x3c
	// Line 346, Address: 0x4b6fa0, Func Offset: 0x40
	// Line 347, Address: 0x4b6fa4, Func Offset: 0x44
	// Line 348, Address: 0x4b6fa8, Func Offset: 0x48
	// Line 349, Address: 0x4b6fb0, Func Offset: 0x50
	// Line 350, Address: 0x4b6fb4, Func Offset: 0x54
	// Line 351, Address: 0x4b6fb8, Func Offset: 0x58
	// Line 352, Address: 0x4b6fbc, Func Offset: 0x5c
	// Line 353, Address: 0x4b6fc0, Func Offset: 0x60
	// Line 354, Address: 0x4b6fc4, Func Offset: 0x64
	// Line 355, Address: 0x4b6fc8, Func Offset: 0x68
	// Line 357, Address: 0x4b6fd0, Func Offset: 0x70
	// Line 358, Address: 0x4b6fd4, Func Offset: 0x74
	// Line 359, Address: 0x4b6fd8, Func Offset: 0x78
	// Line 360, Address: 0x4b6fdc, Func Offset: 0x7c
	// Line 361, Address: 0x4b6fe0, Func Offset: 0x80
	// Line 363, Address: 0x4b6fe4, Func Offset: 0x84
	// Line 364, Address: 0x4b6fe8, Func Offset: 0x88
	// Line 365, Address: 0x4b6fec, Func Offset: 0x8c
	// Line 366, Address: 0x4b6ff0, Func Offset: 0x90
	// Line 367, Address: 0x4b6ff4, Func Offset: 0x94
	// Line 368, Address: 0x4b6ff8, Func Offset: 0x98
	// Line 369, Address: 0x4b6ffc, Func Offset: 0x9c
	// Line 370, Address: 0x4b7000, Func Offset: 0xa0
	// Line 371, Address: 0x4b7004, Func Offset: 0xa4
	// Line 377, Address: 0x4b700c, Func Offset: 0xac
	// Line 378, Address: 0x4b71ac, Func Offset: 0x24c
	// Line 384, Address: 0x4b71fc, Func Offset: 0x29c
	// Line 385, Address: 0x4b7200, Func Offset: 0x2a0
	// Line 386, Address: 0x4b7204, Func Offset: 0x2a4
	// Line 390, Address: 0x4b7208, Func Offset: 0x2a8
	// Func End, Address: 0x4b7210, Func Offset: 0x2b0
}

// iAnimBlend__FffPUsPfUiP5xVec3P5xQuatP5xVec3P5xQuatP5xVec3P5xQuat
// Start address: 0x4b7210
void iAnimBlend(float32 BlendFactor, float32 BlendRecip, uint16* BlendTimeOffset, float32* BoneTable, uint32 BoneCount, xVec3* Tran1, xQuat* Quat1, xVec3* Tran2, xQuat* Quat2, xVec3* TranDest, xQuat* QuatDest)
{
	uint32 i;
	uint32 invert;
	RtQuat* q2;
	RtQuat ident;
	xVec3* t2;
	float32 lerp;
	float32 baselerp;
	// Line 142, Address: 0x4b7210, Func Offset: 0
	// Line 148, Address: 0x4b7264, Func Offset: 0x54
	// Line 150, Address: 0x4b726c, Func Offset: 0x5c
	// Line 149, Address: 0x4b7270, Func Offset: 0x60
	// Line 152, Address: 0x4b7274, Func Offset: 0x64
	// Line 153, Address: 0x4b727c, Func Offset: 0x6c
	// Line 154, Address: 0x4b7280, Func Offset: 0x70
	// Line 158, Address: 0x4b7284, Func Offset: 0x74
	// Line 159, Address: 0x4b7298, Func Offset: 0x88
	// Line 160, Address: 0x4b729c, Func Offset: 0x8c
	// Line 166, Address: 0x4b72a0, Func Offset: 0x90
	// Line 169, Address: 0x4b72e0, Func Offset: 0xd0
	// Line 175, Address: 0x4b72f4, Func Offset: 0xe4
	// Line 176, Address: 0x4b72f8, Func Offset: 0xe8
	// Line 177, Address: 0x4b7314, Func Offset: 0x104
	// Line 178, Address: 0x4b732c, Func Offset: 0x11c
	// Line 180, Address: 0x4b7344, Func Offset: 0x134
	// Line 181, Address: 0x4b7350, Func Offset: 0x140
	// Line 184, Address: 0x4b7370, Func Offset: 0x160
	// Line 188, Address: 0x4b7374, Func Offset: 0x164
	// Line 182, Address: 0x4b737c, Func Offset: 0x16c
	// Line 183, Address: 0x4b7380, Func Offset: 0x170
	// Line 185, Address: 0x4b7384, Func Offset: 0x174
	// Line 186, Address: 0x4b7388, Func Offset: 0x178
	// Line 187, Address: 0x4b738c, Func Offset: 0x17c
	// Line 184, Address: 0x4b7390, Func Offset: 0x180
	// Line 188, Address: 0x4b7394, Func Offset: 0x184
	// Line 212, Address: 0x4b739c, Func Offset: 0x18c
	// Line 220, Address: 0x4b73a4, Func Offset: 0x194
	// Line 221, Address: 0x4b73ac, Func Offset: 0x19c
	// Line 222, Address: 0x4b73b0, Func Offset: 0x1a0
	// Line 223, Address: 0x4b73cc, Func Offset: 0x1bc
	// Line 224, Address: 0x4b73e4, Func Offset: 0x1d4
	// Line 227, Address: 0x4b73f8, Func Offset: 0x1e8
	// Line 230, Address: 0x4b7410, Func Offset: 0x200
	// Line 231, Address: 0x4b7418, Func Offset: 0x208
	// Line 232, Address: 0x4b7460, Func Offset: 0x250
	// Line 233, Address: 0x4b7468, Func Offset: 0x258
	// Line 234, Address: 0x4b749c, Func Offset: 0x28c
	// Line 235, Address: 0x4b74b8, Func Offset: 0x2a8
	// Line 236, Address: 0x4b74cc, Func Offset: 0x2bc
	// Line 238, Address: 0x4b74d4, Func Offset: 0x2c4
	// Line 239, Address: 0x4b74e8, Func Offset: 0x2d8
	// Line 241, Address: 0x4b74ec, Func Offset: 0x2dc
	// Line 251, Address: 0x4b7500, Func Offset: 0x2f0
	// Line 257, Address: 0x4b7534, Func Offset: 0x324
	// Line 252, Address: 0x4b7538, Func Offset: 0x328
	// Line 254, Address: 0x4b753c, Func Offset: 0x32c
	// Line 253, Address: 0x4b7540, Func Offset: 0x330
	// Line 255, Address: 0x4b7544, Func Offset: 0x334
	// Line 256, Address: 0x4b7548, Func Offset: 0x338
	// Line 257, Address: 0x4b754c, Func Offset: 0x33c
	// Line 254, Address: 0x4b755c, Func Offset: 0x34c
	// Line 277, Address: 0x4b7560, Func Offset: 0x350
	// Line 279, Address: 0x4b7578, Func Offset: 0x368
	// Func End, Address: 0x4b75b0, Func Offset: 0x3a0
}

// iAnimBoneCount__FPv
// Start address: 0x4b75b0
uint32 iAnimBoneCount(void* RawData)
{
	// Line 91, Address: 0x4b75b0, Func Offset: 0
	// Line 92, Address: 0x4b75c8, Func Offset: 0x18
	// Func End, Address: 0x4b75d0, Func Offset: 0x20
}

// iAnimDuration__FPv
// Start address: 0x4b75d0
float32 iAnimDuration(void* RawData)
{
	// Line 86, Address: 0x4b75d0, Func Offset: 0
	// Line 87, Address: 0x4b75e8, Func Offset: 0x18
	// Func End, Address: 0x4b75f0, Func Offset: 0x20
}

// iAnimEval__FPvfUiP5xVec3P5xQuat
// Start address: 0x4b75f0
void iAnimEval(void* RawData, float32 time, uint32 flags, xVec3* tran, xQuat* quat)
{
	// Line 71, Address: 0x4b75f0, Func Offset: 0
	// Func End, Address: 0x4b75f8, Func Offset: 0x8
}

// iAnimInit__Fv
// Start address: 0x4b7600
void iAnimInit()
{
	// Line 51, Address: 0x4b7600, Func Offset: 0
	// Func End, Address: 0x4b7608, Func Offset: 0x8
}

