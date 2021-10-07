



void zNMECentral_HudRender();
void zNMECentral_PostRender();
void zNMECentral_Render();
void zNMECentral_RenderToBuckets();
void zNMECentral_PostTimestep(float32 dt);
void zNMECentral_Timestep(float32 dt);
void zNMECentral_SceneReset();
void zNMECentral_ScenePostSetup();
void zNMECentral_SceneSetup();
void zNMECentral_ScenePostInit();
void zNMECentral_SceneInit();
void zNMECentral_SceneFinish();
void zNMECentral_ScenePrepare();
void zNMECentral_Shutdown();
void zNMECentral_Startup();

// zNMECentral_HudRender__Fv
// Start address: 0x2a22d0
void zNMECentral_HudRender()
{
	RwCamera* oldCamera;
	int32 isPaused;
	int32 isCinematic;
	int32 num_mod;
	int32 i;
	zModule* mod;
	// Line 362, Address: 0x2a22d0, Func Offset: 0
	// Line 367, Address: 0x2a22d4, Func Offset: 0x4
	// Line 362, Address: 0x2a22d8, Func Offset: 0x8
	// Line 367, Address: 0x2a22f4, Func Offset: 0x24
	// Line 368, Address: 0x2a22f8, Func Offset: 0x28
	// Line 369, Address: 0x2a2300, Func Offset: 0x30
	// Line 373, Address: 0x2a2308, Func Offset: 0x38
	// Line 374, Address: 0x2a2318, Func Offset: 0x48
	// Line 373, Address: 0x2a231c, Func Offset: 0x4c
	// Line 374, Address: 0x2a2324, Func Offset: 0x54
	// Line 375, Address: 0x2a2338, Func Offset: 0x68
	// Line 376, Address: 0x2a2348, Func Offset: 0x78
	// Line 379, Address: 0x2a2350, Func Offset: 0x80
	// Line 380, Address: 0x2a235c, Func Offset: 0x8c
	// Line 382, Address: 0x2a2398, Func Offset: 0xc8
	// Line 380, Address: 0x2a239c, Func Offset: 0xcc
	// Line 382, Address: 0x2a23a0, Func Offset: 0xd0
	// Line 383, Address: 0x2a23a4, Func Offset: 0xd4
	// Line 384, Address: 0x2a23b4, Func Offset: 0xe4
	// Line 385, Address: 0x2a23c4, Func Offset: 0xf4
	// Line 387, Address: 0x2a23d8, Func Offset: 0x108
	// Line 389, Address: 0x2a23e8, Func Offset: 0x118
	// Line 391, Address: 0x2a2400, Func Offset: 0x130
	// Line 392, Address: 0x2a241c, Func Offset: 0x14c
	// Line 393, Address: 0x2a2420, Func Offset: 0x150
	// Line 394, Address: 0x2a2430, Func Offset: 0x160
	// Line 398, Address: 0x2a2440, Func Offset: 0x170
	// Line 399, Address: 0x2a2448, Func Offset: 0x178
	// Line 400, Address: 0x2a2450, Func Offset: 0x180
	// Line 401, Address: 0x2a2458, Func Offset: 0x188
	// Line 405, Address: 0x2a2468, Func Offset: 0x198
	// Line 406, Address: 0x2a2470, Func Offset: 0x1a0
	// Line 410, Address: 0x2a2478, Func Offset: 0x1a8
	// Line 411, Address: 0x2a2490, Func Offset: 0x1c0
	// Func End, Address: 0x2a24b4, Func Offset: 0x1e4
}

// zNMECentral_PostRender__Fv
// Start address: 0x2a24d0
void zNMECentral_PostRender()
{
	int32 isPaused;
	int32 isCinematic;
	int32 num_mod;
	int32 i;
	zModule* mod;
	// Line 336, Address: 0x2a24d0, Func Offset: 0
	// Line 337, Address: 0x2a24e8, Func Offset: 0x18
	// Line 338, Address: 0x2a24f0, Func Offset: 0x20
	// Line 337, Address: 0x2a24f4, Func Offset: 0x24
	// Line 338, Address: 0x2a24f8, Func Offset: 0x28
	// Line 340, Address: 0x2a252c, Func Offset: 0x5c
	// Line 338, Address: 0x2a2530, Func Offset: 0x60
	// Line 340, Address: 0x2a2534, Func Offset: 0x64
	// Line 341, Address: 0x2a2538, Func Offset: 0x68
	// Line 342, Address: 0x2a2548, Func Offset: 0x78
	// Line 343, Address: 0x2a2558, Func Offset: 0x88
	// Line 345, Address: 0x2a256c, Func Offset: 0x9c
	// Line 347, Address: 0x2a2580, Func Offset: 0xb0
	// Line 348, Address: 0x2a259c, Func Offset: 0xcc
	// Line 349, Address: 0x2a25a0, Func Offset: 0xd0
	// Line 350, Address: 0x2a25b0, Func Offset: 0xe0
	// Line 351, Address: 0x2a25c0, Func Offset: 0xf0
	// Line 352, Address: 0x2a25d8, Func Offset: 0x108
	// Func End, Address: 0x2a25f4, Func Offset: 0x124
}

// zNMECentral_Render__Fv
// Start address: 0x2a2610
void zNMECentral_Render()
{
	int32 isPaused;
	int32 isCinematic;
	int32 num_mod;
	int32 i;
	zModule* mod;
	// Line 316, Address: 0x2a2610, Func Offset: 0
	// Line 317, Address: 0x2a2628, Func Offset: 0x18
	// Line 318, Address: 0x2a2630, Func Offset: 0x20
	// Line 317, Address: 0x2a2634, Func Offset: 0x24
	// Line 318, Address: 0x2a2638, Func Offset: 0x28
	// Line 320, Address: 0x2a266c, Func Offset: 0x5c
	// Line 318, Address: 0x2a2670, Func Offset: 0x60
	// Line 320, Address: 0x2a2674, Func Offset: 0x64
	// Line 321, Address: 0x2a2678, Func Offset: 0x68
	// Line 322, Address: 0x2a2688, Func Offset: 0x78
	// Line 323, Address: 0x2a2698, Func Offset: 0x88
	// Line 325, Address: 0x2a26ac, Func Offset: 0x9c
	// Line 327, Address: 0x2a26c0, Func Offset: 0xb0
	// Line 328, Address: 0x2a26dc, Func Offset: 0xcc
	// Line 329, Address: 0x2a26e0, Func Offset: 0xd0
	// Line 330, Address: 0x2a26f0, Func Offset: 0xe0
	// Line 331, Address: 0x2a2700, Func Offset: 0xf0
	// Line 332, Address: 0x2a2718, Func Offset: 0x108
	// Func End, Address: 0x2a2734, Func Offset: 0x124
}

// zNMECentral_RenderToBuckets__Fv
// Start address: 0x2a2750
void zNMECentral_RenderToBuckets()
{
	int32 isPaused;
	int32 isCinematic;
	int32 num_mod;
	int32 i;
	zModule* mod;
	// Line 296, Address: 0x2a2750, Func Offset: 0
	// Line 297, Address: 0x2a2768, Func Offset: 0x18
	// Line 298, Address: 0x2a2770, Func Offset: 0x20
	// Line 297, Address: 0x2a2774, Func Offset: 0x24
	// Line 298, Address: 0x2a2778, Func Offset: 0x28
	// Line 300, Address: 0x2a27ac, Func Offset: 0x5c
	// Line 298, Address: 0x2a27b0, Func Offset: 0x60
	// Line 300, Address: 0x2a27b4, Func Offset: 0x64
	// Line 301, Address: 0x2a27b8, Func Offset: 0x68
	// Line 302, Address: 0x2a27c8, Func Offset: 0x78
	// Line 303, Address: 0x2a27d8, Func Offset: 0x88
	// Line 305, Address: 0x2a27ec, Func Offset: 0x9c
	// Line 307, Address: 0x2a2800, Func Offset: 0xb0
	// Line 308, Address: 0x2a281c, Func Offset: 0xcc
	// Line 309, Address: 0x2a2820, Func Offset: 0xd0
	// Line 310, Address: 0x2a2830, Func Offset: 0xe0
	// Line 311, Address: 0x2a2840, Func Offset: 0xf0
	// Line 312, Address: 0x2a2858, Func Offset: 0x108
	// Func End, Address: 0x2a2874, Func Offset: 0x124
}

// zNMECentral_PostTimestep__Ff
// Start address: 0x2a2890
void zNMECentral_PostTimestep(float32 dt)
{
	int32 isPaused;
	int32 isCinematic;
	int32 num_mod;
	int32 i;
	zModule* mod;
	// Line 274, Address: 0x2a2890, Func Offset: 0
	// Line 275, Address: 0x2a28b0, Func Offset: 0x20
	// Line 276, Address: 0x2a28b8, Func Offset: 0x28
	// Line 275, Address: 0x2a28bc, Func Offset: 0x2c
	// Line 276, Address: 0x2a28c0, Func Offset: 0x30
	// Line 278, Address: 0x2a28f4, Func Offset: 0x64
	// Line 276, Address: 0x2a28f8, Func Offset: 0x68
	// Line 278, Address: 0x2a28fc, Func Offset: 0x6c
	// Line 279, Address: 0x2a2900, Func Offset: 0x70
	// Line 280, Address: 0x2a2910, Func Offset: 0x80
	// Line 282, Address: 0x2a2920, Func Offset: 0x90
	// Line 284, Address: 0x2a2934, Func Offset: 0xa4
	// Line 286, Address: 0x2a2948, Func Offset: 0xb8
	// Line 287, Address: 0x2a2964, Func Offset: 0xd4
	// Line 289, Address: 0x2a2968, Func Offset: 0xd8
	// Line 290, Address: 0x2a2978, Func Offset: 0xe8
	// Line 291, Address: 0x2a2988, Func Offset: 0xf8
	// Line 292, Address: 0x2a29a0, Func Offset: 0x110
	// Func End, Address: 0x2a29c0, Func Offset: 0x130
}

// zNMECentral_Timestep__Ff
// Start address: 0x2a29d0
void zNMECentral_Timestep(float32 dt)
{
	int32 isPaused;
	int32 isCinematic;
	int32 num_mod;
	int32 i;
	zModule* mod;
	// Line 253, Address: 0x2a29d0, Func Offset: 0
	// Line 254, Address: 0x2a29f0, Func Offset: 0x20
	// Line 255, Address: 0x2a29f8, Func Offset: 0x28
	// Line 254, Address: 0x2a29fc, Func Offset: 0x2c
	// Line 255, Address: 0x2a2a00, Func Offset: 0x30
	// Line 257, Address: 0x2a2a34, Func Offset: 0x64
	// Line 255, Address: 0x2a2a38, Func Offset: 0x68
	// Line 257, Address: 0x2a2a3c, Func Offset: 0x6c
	// Line 258, Address: 0x2a2a40, Func Offset: 0x70
	// Line 259, Address: 0x2a2a50, Func Offset: 0x80
	// Line 260, Address: 0x2a2a60, Func Offset: 0x90
	// Line 262, Address: 0x2a2a74, Func Offset: 0xa4
	// Line 264, Address: 0x2a2a88, Func Offset: 0xb8
	// Line 265, Address: 0x2a2aa4, Func Offset: 0xd4
	// Line 267, Address: 0x2a2aa8, Func Offset: 0xd8
	// Line 268, Address: 0x2a2ab8, Func Offset: 0xe8
	// Line 269, Address: 0x2a2ac8, Func Offset: 0xf8
	// Line 270, Address: 0x2a2ae0, Func Offset: 0x110
	// Func End, Address: 0x2a2b00, Func Offset: 0x130
}

// zNMECentral_SceneReset__Fv
// Start address: 0x2a2b10
void zNMECentral_SceneReset()
{
	int32 num_mod;
	int32 i;
	// Line 242, Address: 0x2a2b10, Func Offset: 0
	// Line 243, Address: 0x2a2b14, Func Offset: 0x4
	// Line 242, Address: 0x2a2b18, Func Offset: 0x8
	// Line 243, Address: 0x2a2b28, Func Offset: 0x18
	// Line 244, Address: 0x2a2b2c, Func Offset: 0x1c
	// Line 248, Address: 0x2a2b38, Func Offset: 0x28
	// Line 249, Address: 0x2a2b7c, Func Offset: 0x6c
	// Func End, Address: 0x2a2b90, Func Offset: 0x80
}

// zNMECentral_ScenePostSetup__Fv
// Start address: 0x2a2ba0
void zNMECentral_ScenePostSetup()
{
	int32 num_mod;
	int32 i;
	// Line 231, Address: 0x2a2ba0, Func Offset: 0
	// Line 232, Address: 0x2a2ba4, Func Offset: 0x4
	// Line 231, Address: 0x2a2ba8, Func Offset: 0x8
	// Line 232, Address: 0x2a2bb8, Func Offset: 0x18
	// Line 233, Address: 0x2a2bbc, Func Offset: 0x1c
	// Line 237, Address: 0x2a2bc8, Func Offset: 0x28
	// Line 238, Address: 0x2a2c0c, Func Offset: 0x6c
	// Func End, Address: 0x2a2c20, Func Offset: 0x80
}

// zNMECentral_SceneSetup__Fv
// Start address: 0x2a2c30
void zNMECentral_SceneSetup()
{
	int32 num_mod;
	int32 i;
	// Line 220, Address: 0x2a2c30, Func Offset: 0
	// Line 221, Address: 0x2a2c34, Func Offset: 0x4
	// Line 220, Address: 0x2a2c38, Func Offset: 0x8
	// Line 221, Address: 0x2a2c48, Func Offset: 0x18
	// Line 222, Address: 0x2a2c4c, Func Offset: 0x1c
	// Line 226, Address: 0x2a2c58, Func Offset: 0x28
	// Line 227, Address: 0x2a2c9c, Func Offset: 0x6c
	// Func End, Address: 0x2a2cb0, Func Offset: 0x80
}

// zNMECentral_ScenePostInit__Fv
// Start address: 0x2a2cc0
void zNMECentral_ScenePostInit()
{
	int32 num_mod;
	int32 i;
	// Line 209, Address: 0x2a2cc0, Func Offset: 0
	// Line 210, Address: 0x2a2cc4, Func Offset: 0x4
	// Line 209, Address: 0x2a2cc8, Func Offset: 0x8
	// Line 210, Address: 0x2a2cd8, Func Offset: 0x18
	// Line 211, Address: 0x2a2cdc, Func Offset: 0x1c
	// Line 215, Address: 0x2a2ce8, Func Offset: 0x28
	// Line 216, Address: 0x2a2d2c, Func Offset: 0x6c
	// Func End, Address: 0x2a2d40, Func Offset: 0x80
}

// zNMECentral_SceneInit__Fv
// Start address: 0x2a2d50
void zNMECentral_SceneInit()
{
	int32 num_mod;
	int32 i;
	// Line 198, Address: 0x2a2d50, Func Offset: 0
	// Line 199, Address: 0x2a2d54, Func Offset: 0x4
	// Line 198, Address: 0x2a2d58, Func Offset: 0x8
	// Line 199, Address: 0x2a2d68, Func Offset: 0x18
	// Line 200, Address: 0x2a2d6c, Func Offset: 0x1c
	// Line 205, Address: 0x2a2d78, Func Offset: 0x28
	// Line 206, Address: 0x2a2dbc, Func Offset: 0x6c
	// Func End, Address: 0x2a2dd0, Func Offset: 0x80
}

// zNMECentral_SceneFinish__Fv
// Start address: 0x2a2de0
void zNMECentral_SceneFinish()
{
	int32 num_mod;
	int32 i;
	// Line 187, Address: 0x2a2de0, Func Offset: 0
	// Line 188, Address: 0x2a2de4, Func Offset: 0x4
	// Line 187, Address: 0x2a2de8, Func Offset: 0x8
	// Line 188, Address: 0x2a2df8, Func Offset: 0x18
	// Line 189, Address: 0x2a2dfc, Func Offset: 0x1c
	// Line 193, Address: 0x2a2e08, Func Offset: 0x28
	// Line 194, Address: 0x2a2e4c, Func Offset: 0x6c
	// Func End, Address: 0x2a2e60, Func Offset: 0x80
}

// zNMECentral_ScenePrepare__Fv
// Start address: 0x2a2e70
void zNMECentral_ScenePrepare()
{
	int32 num_mod;
	int32 i;
	// Line 176, Address: 0x2a2e70, Func Offset: 0
	// Line 177, Address: 0x2a2e74, Func Offset: 0x4
	// Line 176, Address: 0x2a2e78, Func Offset: 0x8
	// Line 177, Address: 0x2a2e88, Func Offset: 0x18
	// Line 178, Address: 0x2a2e8c, Func Offset: 0x1c
	// Line 182, Address: 0x2a2e98, Func Offset: 0x28
	// Line 183, Address: 0x2a2edc, Func Offset: 0x6c
	// Func End, Address: 0x2a2ef0, Func Offset: 0x80
}

// zNMECentral_Shutdown__Fv
// Start address: 0x2a2f00
void zNMECentral_Shutdown()
{
	// Line 128, Address: 0x2a2f00, Func Offset: 0
	// Line 146, Address: 0x2a2f04, Func Offset: 0x4
	// Line 128, Address: 0x2a2f08, Func Offset: 0x8
	// Line 146, Address: 0x2a2f0c, Func Offset: 0xc
	// Line 148, Address: 0x2a2f20, Func Offset: 0x20
	// Line 151, Address: 0x2a2f2c, Func Offset: 0x2c
	// Line 154, Address: 0x2a2f40, Func Offset: 0x40
	// Func End, Address: 0x2a2f50, Func Offset: 0x50
}

// zNMECentral_Startup__Fv
// Start address: 0x2a2f50
void zNMECentral_Startup()
{
	xBehaveMgr* bmgr;
	// Line 94, Address: 0x2a2f50, Func Offset: 0
	// Line 96, Address: 0x2a2f54, Func Offset: 0x4
	// Line 94, Address: 0x2a2f58, Func Offset: 0x8
	// Line 96, Address: 0x2a2f5c, Func Offset: 0xc
	// Line 94, Address: 0x2a2f60, Func Offset: 0x10
	// Line 96, Address: 0x2a2f64, Func Offset: 0x14
	// Line 94, Address: 0x2a2f68, Func Offset: 0x18
	// Line 96, Address: 0x2a2f6c, Func Offset: 0x1c
	// Line 101, Address: 0x2a2f78, Func Offset: 0x28
	// Line 102, Address: 0x2a2f80, Func Offset: 0x30
	// Line 106, Address: 0x2a2f88, Func Offset: 0x38
	// Line 107, Address: 0x2a2ff4, Func Offset: 0xa4
	// Line 108, Address: 0x2a3340, Func Offset: 0x3f0
	// Line 109, Address: 0x2a33b0, Func Offset: 0x460
	// Line 110, Address: 0x2a3418, Func Offset: 0x4c8
	// Line 111, Address: 0x2a3484, Func Offset: 0x534
	// Line 112, Address: 0x2a3740, Func Offset: 0x7f0
	// Line 111, Address: 0x2a3744, Func Offset: 0x7f4
	// Line 112, Address: 0x2a3748, Func Offset: 0x7f8
	// Line 114, Address: 0x2a37b0, Func Offset: 0x860
	// Line 116, Address: 0x2a3888, Func Offset: 0x938
	// Line 117, Address: 0x2a38bc, Func Offset: 0x96c
	// Line 118, Address: 0x2a3958, Func Offset: 0xa08
	// Line 119, Address: 0x2a398c, Func Offset: 0xa3c
	// Line 120, Address: 0x2a3a28, Func Offset: 0xad8
	// Line 121, Address: 0x2a3a90, Func Offset: 0xb40
	// Line 124, Address: 0x2a3b2c, Func Offset: 0xbdc
	// Line 106, Address: 0x2a3b5c, Func Offset: 0xc0c
	// Line 124, Address: 0x2a3b68, Func Offset: 0xc18
	// Line 107, Address: 0x2a3b90, Func Offset: 0xc40
	// Line 124, Address: 0x2a3b9c, Func Offset: 0xc4c
	// Line 108, Address: 0x2a3bc4, Func Offset: 0xc74
	// Line 124, Address: 0x2a3bd0, Func Offset: 0xc80
	// Line 109, Address: 0x2a3bf8, Func Offset: 0xca8
	// Line 124, Address: 0x2a3c04, Func Offset: 0xcb4
	// Line 110, Address: 0x2a3c2c, Func Offset: 0xcdc
	// Line 124, Address: 0x2a3c38, Func Offset: 0xce8
	// Line 111, Address: 0x2a3c60, Func Offset: 0xd10
	// Line 124, Address: 0x2a3c6c, Func Offset: 0xd1c
	// Line 112, Address: 0x2a3c98, Func Offset: 0xd48
	// Line 124, Address: 0x2a3ca4, Func Offset: 0xd54
	// Line 114, Address: 0x2a3ccc, Func Offset: 0xd7c
	// Line 124, Address: 0x2a3cd8, Func Offset: 0xd88
	// Line 114, Address: 0x2a3d00, Func Offset: 0xdb0
	// Line 124, Address: 0x2a3d0c, Func Offset: 0xdbc
	// Line 117, Address: 0x2a3d34, Func Offset: 0xde4
	// Line 124, Address: 0x2a3d40, Func Offset: 0xdf0
	// Line 119, Address: 0x2a3d68, Func Offset: 0xe18
	// Line 125, Address: 0x2a3d74, Func Offset: 0xe24
	// Func End, Address: 0x2a3d88, Func Offset: 0xe38
}

