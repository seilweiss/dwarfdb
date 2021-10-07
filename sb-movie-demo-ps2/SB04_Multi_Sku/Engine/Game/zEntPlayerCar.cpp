



void zEntPlayerCarHandleEvents(xBase* from, xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget, uint32 toParamWidgetID);
void zEntPlayerCarUpdateHealth(xEnt* ent, float32 dt);
void zEntPlayerCarRenderFX(xEnt* ent);
uint8 zEntPlayerCarUpdate(xEnt* ent, xScene* sc, float32 dt);
void zEntPlayerCarExit();
zCar* zEntPlayerCarGetCar();

// zEntPlayerCarHandleEvents__FP5xBaseP5xBaseUiPCfP5xBaseUi
// Start address: 0x319b90
void zEntPlayerCarHandleEvents(xBase* from, xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget, uint32 toParamWidgetID)
{
	// Line 345, Address: 0x319b9c, Func Offset: 0xc
	// Func End, Address: 0x319bc4, Func Offset: 0x34
}

// zEntPlayerCarUpdateHealth__FP4xEntf
// Start address: 0x319bd0
void zEntPlayerCarUpdateHealth(xEnt* ent, float32 dt)
{
	xColor_tag black;
	xColor_tag clear;
	// Line 273, Address: 0x319bd0, Func Offset: 0
	// Line 276, Address: 0x319bd4, Func Offset: 0x4
	// Line 273, Address: 0x319bd8, Func Offset: 0x8
	// Line 276, Address: 0x319bdc, Func Offset: 0xc
	// Line 277, Address: 0x319bf0, Func Offset: 0x20
	// Line 276, Address: 0x319bf4, Func Offset: 0x24
	// Line 277, Address: 0x319bf8, Func Offset: 0x28
	// Line 279, Address: 0x319c18, Func Offset: 0x48
	// Line 280, Address: 0x319c24, Func Offset: 0x54
	// Line 281, Address: 0x319c6c, Func Offset: 0x9c
	// Line 285, Address: 0x319c74, Func Offset: 0xa4
	// Line 288, Address: 0x319c88, Func Offset: 0xb8
	// Line 297, Address: 0x319ca4, Func Offset: 0xd4
	// Line 314, Address: 0x319cc8, Func Offset: 0xf8
	// Line 316, Address: 0x319d0c, Func Offset: 0x13c
	// Line 317, Address: 0x319d24, Func Offset: 0x154
	// Line 316, Address: 0x319d2c, Func Offset: 0x15c
	// Line 317, Address: 0x319d38, Func Offset: 0x168
	// Line 318, Address: 0x319d5c, Func Offset: 0x18c
	// Line 319, Address: 0x319d78, Func Offset: 0x1a8
	// Line 323, Address: 0x319d88, Func Offset: 0x1b8
	// Line 328, Address: 0x319da4, Func Offset: 0x1d4
	// Line 336, Address: 0x319db0, Func Offset: 0x1e0
	// Line 328, Address: 0x319db4, Func Offset: 0x1e4
	// Line 336, Address: 0x319db8, Func Offset: 0x1e8
	// Line 335, Address: 0x319dbc, Func Offset: 0x1ec
	// Line 336, Address: 0x319dc0, Func Offset: 0x1f0
	// Line 340, Address: 0x319dc8, Func Offset: 0x1f8
	// Line 290, Address: 0x319dd0, Func Offset: 0x200
	// Line 340, Address: 0x319dd4, Func Offset: 0x204
	// Func End, Address: 0x319dec, Func Offset: 0x21c
}

// zEntPlayerCarRenderFX__FP4xEnt
// Start address: 0x319df0
void zEntPlayerCarRenderFX(xEnt* ent)
{
	// Line 254, Address: 0x319df0, Func Offset: 0
	// Func End, Address: 0x319e00, Func Offset: 0x10
}

// zEntPlayerCarUpdate__FP4xEntP6xScenef
// Start address: 0x319e00
uint8 zEntPlayerCarUpdate(xEnt* ent, xScene* sc, float32 dt)
{
	float32 px;
	float32 pz;
	uint8 accel;
	uint8 brake;
	uint8 boost;
	int32 numSteps;
	float32 perfectStep;
	int32 i;
	// Line 61, Address: 0x319e00, Func Offset: 0
	// Line 72, Address: 0x319e04, Func Offset: 0x4
	// Line 61, Address: 0x319e08, Func Offset: 0x8
	// Line 70, Address: 0x319e14, Func Offset: 0x14
	// Line 61, Address: 0x319e18, Func Offset: 0x18
	// Line 69, Address: 0x319e1c, Func Offset: 0x1c
	// Line 61, Address: 0x319e20, Func Offset: 0x20
	// Line 68, Address: 0x319e24, Func Offset: 0x24
	// Line 61, Address: 0x319e28, Func Offset: 0x28
	// Line 72, Address: 0x319e4c, Func Offset: 0x4c
	// Line 77, Address: 0x319e5c, Func Offset: 0x5c
	// Line 72, Address: 0x319e60, Func Offset: 0x60
	// Line 77, Address: 0x319e64, Func Offset: 0x64
	// Line 74, Address: 0x319e68, Func Offset: 0x68
	// Line 75, Address: 0x319e6c, Func Offset: 0x6c
	// Line 74, Address: 0x319e70, Func Offset: 0x70
	// Line 75, Address: 0x319e74, Func Offset: 0x74
	// Line 74, Address: 0x319e78, Func Offset: 0x78
	// Line 75, Address: 0x319e7c, Func Offset: 0x7c
	// Line 74, Address: 0x319e84, Func Offset: 0x84
	// Line 77, Address: 0x319e88, Func Offset: 0x88
	// Line 92, Address: 0x319e98, Func Offset: 0x98
	// Line 101, Address: 0x319ec4, Func Offset: 0xc4
	// Line 103, Address: 0x319ed4, Func Offset: 0xd4
	// Line 104, Address: 0x319edc, Func Offset: 0xdc
	// Line 105, Address: 0x319ee0, Func Offset: 0xe0
	// Line 103, Address: 0x319ee8, Func Offset: 0xe8
	// Line 105, Address: 0x319eec, Func Offset: 0xec
	// Line 106, Address: 0x319ef8, Func Offset: 0xf8
	// Line 108, Address: 0x319f00, Func Offset: 0x100
	// Line 110, Address: 0x319f08, Func Offset: 0x108
	// Line 113, Address: 0x319f10, Func Offset: 0x110
	// Line 115, Address: 0x319f18, Func Offset: 0x118
	// Line 116, Address: 0x319f1c, Func Offset: 0x11c
	// Line 113, Address: 0x319f24, Func Offset: 0x124
	// Line 115, Address: 0x319f40, Func Offset: 0x140
	// Line 114, Address: 0x319f44, Func Offset: 0x144
	// Line 116, Address: 0x319f4c, Func Offset: 0x14c
	// Line 117, Address: 0x319f58, Func Offset: 0x158
	// Line 119, Address: 0x319f70, Func Offset: 0x170
	// Line 125, Address: 0x319f7c, Func Offset: 0x17c
	// Line 127, Address: 0x319f90, Func Offset: 0x190
	// Line 125, Address: 0x319f94, Func Offset: 0x194
	// Line 127, Address: 0x319f9c, Func Offset: 0x19c
	// Line 128, Address: 0x319fa8, Func Offset: 0x1a8
	// Line 129, Address: 0x319fac, Func Offset: 0x1ac
	// Line 130, Address: 0x319fb8, Func Offset: 0x1b8
	// Line 131, Address: 0x319fbc, Func Offset: 0x1bc
	// Line 132, Address: 0x319fc8, Func Offset: 0x1c8
	// Line 133, Address: 0x319fcc, Func Offset: 0x1cc
	// Line 134, Address: 0x319fe0, Func Offset: 0x1e0
	// Line 151, Address: 0x319fe8, Func Offset: 0x1e8
	// Line 154, Address: 0x319ff0, Func Offset: 0x1f0
	// Line 155, Address: 0x319ff8, Func Offset: 0x1f8
	// Line 158, Address: 0x319ffc, Func Offset: 0x1fc
	// Line 160, Address: 0x31a00c, Func Offset: 0x20c
	// Line 162, Address: 0x31a020, Func Offset: 0x220
	// Line 169, Address: 0x31a028, Func Offset: 0x228
	// Line 171, Address: 0x31a04c, Func Offset: 0x24c
	// Line 172, Address: 0x31a070, Func Offset: 0x270
	// Line 182, Address: 0x31a08c, Func Offset: 0x28c
	// Line 183, Address: 0x31a0f0, Func Offset: 0x2f0
	// Line 192, Address: 0x31a198, Func Offset: 0x398
	// Line 191, Address: 0x31a1a4, Func Offset: 0x3a4
	// Line 193, Address: 0x31a1a8, Func Offset: 0x3a8
	// Line 192, Address: 0x31a1b4, Func Offset: 0x3b4
	// Line 193, Address: 0x31a1bc, Func Offset: 0x3bc
	// Line 200, Address: 0x31a1cc, Func Offset: 0x3cc
	// Line 202, Address: 0x31a1e8, Func Offset: 0x3e8
	// Line 203, Address: 0x31a1f8, Func Offset: 0x3f8
	// Line 204, Address: 0x31a218, Func Offset: 0x418
	// Line 207, Address: 0x31a2b0, Func Offset: 0x4b0
	// Line 209, Address: 0x31a2c8, Func Offset: 0x4c8
	// Line 210, Address: 0x31a398, Func Offset: 0x598
	// Line 212, Address: 0x31a3a0, Func Offset: 0x5a0
	// Line 214, Address: 0x31a3b0, Func Offset: 0x5b0
	// Line 218, Address: 0x31a3bc, Func Offset: 0x5bc
	// Line 220, Address: 0x31a3c8, Func Offset: 0x5c8
	// Line 223, Address: 0x31a3d8, Func Offset: 0x5d8
	// Line 226, Address: 0x31a3e8, Func Offset: 0x5e8
	// Line 229, Address: 0x31a3f8, Func Offset: 0x5f8
	// Line 234, Address: 0x31a404, Func Offset: 0x604
	// Line 240, Address: 0x31a420, Func Offset: 0x620
	// Line 241, Address: 0x31a43c, Func Offset: 0x63c
	// Line 242, Address: 0x31a444, Func Offset: 0x644
	// Line 243, Address: 0x31a450, Func Offset: 0x650
	// Line 246, Address: 0x31a458, Func Offset: 0x658
	// Line 92, Address: 0x31a468, Func Offset: 0x668
	// Line 246, Address: 0x31a46c, Func Offset: 0x66c
	// Line 92, Address: 0x31a480, Func Offset: 0x680
	// Line 246, Address: 0x31a484, Func Offset: 0x684
	// Line 92, Address: 0x31a498, Func Offset: 0x698
	// Line 246, Address: 0x31a49c, Func Offset: 0x69c
	// Line 162, Address: 0x31a4b0, Func Offset: 0x6b0
	// Line 246, Address: 0x31a4b4, Func Offset: 0x6b4
	// Line 162, Address: 0x31a4bc, Func Offset: 0x6bc
	// Line 246, Address: 0x31a4c0, Func Offset: 0x6c0
	// Line 164, Address: 0x31a4cc, Func Offset: 0x6cc
	// Line 246, Address: 0x31a4dc, Func Offset: 0x6dc
	// Line 164, Address: 0x31a4e0, Func Offset: 0x6e0
	// Line 246, Address: 0x31a4e8, Func Offset: 0x6e8
	// Line 165, Address: 0x31a4f4, Func Offset: 0x6f4
	// Line 166, Address: 0x31a4f8, Func Offset: 0x6f8
	// Line 246, Address: 0x31a500, Func Offset: 0x700
	// Line 182, Address: 0x31a514, Func Offset: 0x714
	// Line 246, Address: 0x31a524, Func Offset: 0x724
	// Line 182, Address: 0x31a528, Func Offset: 0x728
	// Line 246, Address: 0x31a574, Func Offset: 0x774
	// Line 183, Address: 0x31a588, Func Offset: 0x788
	// Line 246, Address: 0x31a598, Func Offset: 0x798
	// Line 183, Address: 0x31a59c, Func Offset: 0x79c
	// Line 195, Address: 0x31a5e8, Func Offset: 0x7e8
	// Line 246, Address: 0x31a5fc, Func Offset: 0x7fc
	// Line 195, Address: 0x31a608, Func Offset: 0x808
	// Line 235, Address: 0x31a614, Func Offset: 0x814
	// Line 246, Address: 0x31a618, Func Offset: 0x818
	// Line 236, Address: 0x31a61c, Func Offset: 0x81c
	// Line 246, Address: 0x31a620, Func Offset: 0x820
	// Line 247, Address: 0x31a634, Func Offset: 0x834
	// Func End, Address: 0x31a668, Func Offset: 0x868
}

// zEntPlayerCarExit__Fv
// Start address: 0x31a670
void zEntPlayerCarExit()
{
	// Line 49, Address: 0x31a670, Func Offset: 0
	// Func End, Address: 0x31a67c, Func Offset: 0xc
}

// zEntPlayerCarGetCar__Fv
// Start address: 0x31a680
zCar* zEntPlayerCarGetCar()
{
	// Line 33, Address: 0x31a680, Func Offset: 0
	// Line 34, Address: 0x31a684, Func Offset: 0x4
	// Func End, Address: 0x31a68c, Func Offset: 0xc
}

