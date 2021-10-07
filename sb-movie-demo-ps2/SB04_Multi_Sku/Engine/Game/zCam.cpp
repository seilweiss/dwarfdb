



zCamSB* zCamGetDefault();
xMat4x3& zCamGetMatrix();
void zCamRemove(xCam& cam, uint8 force_cut);
void zCamAdd(xCam& cam, uint8 force_cut);
void zCamEndRender();
void zCamBeginRender();
void zCamPrepareRender();
void zCamNotifyTriggers();
void zCamUpdate(float32 dt);
void zCamReset(xMat4x3& mat);
void zCamSceneExit();
void zCamSceneEnter(zScene& scene, xMat4x3& mat);

// zCamGetDefault__Fv
// Start address: 0x396b90
zCamSB* zCamGetDefault()
{
	// Line 511, Address: 0x396b90, Func Offset: 0
	// Func End, Address: 0x396b98, Func Offset: 0x8
}

// zCamGetMatrix__Fv
// Start address: 0x396ba0
xMat4x3& zCamGetMatrix()
{
	// Line 485, Address: 0x396ba0, Func Offset: 0
	// Line 489, Address: 0x396ba4, Func Offset: 0x4
	// Func End, Address: 0x396bac, Func Offset: 0xc
}

// zCamRemove__FR4xCamb
// Start address: 0x396bb0
void zCamRemove(xCam& cam, uint8 force_cut)
{
	// Line 428, Address: 0x396bb4, Func Offset: 0x4
	// Func End, Address: 0x396bc8, Func Offset: 0x18
}

// zCamAdd__FR4xCamb
// Start address: 0x396bd0
void zCamAdd(xCam& cam, uint8 force_cut)
{
	// Line 423, Address: 0x396bd4, Func Offset: 0x4
	// Func End, Address: 0x396be8, Func Offset: 0x18
}

// zCamEndRender__Fv
// Start address: 0x396bf0
void zCamEndRender()
{
	// Line 382, Address: 0x396bf0, Func Offset: 0
	// Func End, Address: 0x396bfc, Func Offset: 0xc
}

// zCamBeginRender__Fv
// Start address: 0x396c00
void zCamBeginRender()
{
	// Line 372, Address: 0x396c00, Func Offset: 0
	// Func End, Address: 0x396c10, Func Offset: 0x10
}

// zCamPrepareRender__Fv
// Start address: 0x396c10
void zCamPrepareRender()
{
	// Line 367, Address: 0x396c10, Func Offset: 0
	// Func End, Address: 0x396c1c, Func Offset: 0xc
}

// zCamNotifyTriggers__Fv
// Start address: 0x396c20
void zCamNotifyTriggers()
{
	xScene& s;
	xSphere camSphere;
	xVec3 dummyDir;
	zEntTrigger** it;
	zEntTrigger** end;
	zEntTrigger& trig;
	uint8 want_enter;
	uint8 want_exit;
	xLinkAsset* link;
	xLinkAsset* end_link;
	uint8 inside;
	// Line 299, Address: 0x396c20, Func Offset: 0
	// Line 300, Address: 0x396c24, Func Offset: 0x4
	// Line 299, Address: 0x396c28, Func Offset: 0x8
	// Line 300, Address: 0x396c40, Func Offset: 0x20
	// Line 312, Address: 0x396c44, Func Offset: 0x24
	// Line 314, Address: 0x396c50, Func Offset: 0x30
	// Line 312, Address: 0x396c54, Func Offset: 0x34
	// Line 314, Address: 0x396c58, Func Offset: 0x38
	// Line 312, Address: 0x396c5c, Func Offset: 0x3c
	// Line 314, Address: 0x396c64, Func Offset: 0x44
	// Line 312, Address: 0x396c68, Func Offset: 0x48
	// Line 316, Address: 0x396c6c, Func Offset: 0x4c
	// Line 312, Address: 0x396c70, Func Offset: 0x50
	// Line 316, Address: 0x396c74, Func Offset: 0x54
	// Line 318, Address: 0x396c7c, Func Offset: 0x5c
	// Line 319, Address: 0x396c8c, Func Offset: 0x6c
	// Line 321, Address: 0x396c94, Func Offset: 0x74
	// Line 322, Address: 0x396c98, Func Offset: 0x78
	// Line 330, Address: 0x396ca8, Func Offset: 0x88
	// Line 335, Address: 0x396cbc, Func Offset: 0x9c
	// Line 334, Address: 0x396cc0, Func Offset: 0xa0
	// Line 335, Address: 0x396cc4, Func Offset: 0xa4
	// Line 336, Address: 0x396cd0, Func Offset: 0xb0
	// Line 341, Address: 0x396cd8, Func Offset: 0xb8
	// Line 340, Address: 0x396cdc, Func Offset: 0xbc
	// Line 338, Address: 0x396ce0, Func Offset: 0xc0
	// Line 336, Address: 0x396ce4, Func Offset: 0xc4
	// Line 338, Address: 0x396cec, Func Offset: 0xcc
	// Line 340, Address: 0x396cf4, Func Offset: 0xd4
	// Line 341, Address: 0x396cfc, Func Offset: 0xdc
	// Line 342, Address: 0x396d00, Func Offset: 0xe0
	// Line 345, Address: 0x396d18, Func Offset: 0xf8
	// Line 346, Address: 0x396d38, Func Offset: 0x118
	// Line 347, Address: 0x396d58, Func Offset: 0x138
	// Line 352, Address: 0x396d70, Func Offset: 0x150
	// Line 354, Address: 0x396d80, Func Offset: 0x160
	// Line 357, Address: 0x396d90, Func Offset: 0x170
	// Line 358, Address: 0x396da0, Func Offset: 0x180
	// Line 359, Address: 0x396dc8, Func Offset: 0x1a8
	// Line 360, Address: 0x396dd8, Func Offset: 0x1b8
	// Line 361, Address: 0x396df8, Func Offset: 0x1d8
	// Line 362, Address: 0x396e08, Func Offset: 0x1e8
	// Line 339, Address: 0x396e10, Func Offset: 0x1f0
	// Line 362, Address: 0x396e18, Func Offset: 0x1f8
	// Line 350, Address: 0x396e28, Func Offset: 0x208
	// Line 362, Address: 0x396e2c, Func Offset: 0x20c
	// Line 350, Address: 0x396e38, Func Offset: 0x218
	// Line 362, Address: 0x396e3c, Func Offset: 0x21c
	// Func End, Address: 0x396e70, Func Offset: 0x250
}

// zCamUpdate__Ff
// Start address: 0x396e70
void zCamUpdate(float32 dt)
{
	// Line 230, Address: 0x396e70, Func Offset: 0
	// Line 248, Address: 0x396e84, Func Offset: 0x14
	// Line 249, Address: 0x396e94, Func Offset: 0x24
	// Line 251, Address: 0x396ed0, Func Offset: 0x60
	// Line 269, Address: 0x396f08, Func Offset: 0x98
	// Line 273, Address: 0x396f34, Func Offset: 0xc4
	// Line 274, Address: 0x396f44, Func Offset: 0xd4
	// Line 286, Address: 0x396f54, Func Offset: 0xe4
	// Line 291, Address: 0x396f64, Func Offset: 0xf4
	// Line 293, Address: 0x396f6c, Func Offset: 0xfc
	// Func End, Address: 0x396fa0, Func Offset: 0x130
}

// zCamReset__FRC7xMat4x3
// Start address: 0x396fa0
void zCamReset(xMat4x3& mat)
{
	// Line 202, Address: 0x396fa0, Func Offset: 0
	// Line 204, Address: 0x396fa4, Func Offset: 0x4
	// Line 202, Address: 0x396fa8, Func Offset: 0x8
	// Line 204, Address: 0x396fb4, Func Offset: 0x14
	// Line 214, Address: 0x396fc0, Func Offset: 0x20
	// Line 215, Address: 0x396fd4, Func Offset: 0x34
	// Line 216, Address: 0x396fe8, Func Offset: 0x48
	// Line 215, Address: 0x396ff0, Func Offset: 0x50
	// Line 216, Address: 0x396ff8, Func Offset: 0x58
	// Line 217, Address: 0x397008, Func Offset: 0x68
	// Line 224, Address: 0x397048, Func Offset: 0xa8
	// Line 225, Address: 0x39704c, Func Offset: 0xac
	// Line 227, Address: 0x397054, Func Offset: 0xb4
	// Line 225, Address: 0x397074, Func Offset: 0xd4
	// Line 227, Address: 0x397078, Func Offset: 0xd8
	// Func End, Address: 0x3970b8, Func Offset: 0x118
}

// zCamSceneExit__Fv
// Start address: 0x3970c0
void zCamSceneExit()
{
	// Line 186, Address: 0x3970c0, Func Offset: 0
	// Line 188, Address: 0x3970c4, Func Offset: 0x4
	// Line 186, Address: 0x3970c8, Func Offset: 0x8
	// Line 188, Address: 0x3970cc, Func Offset: 0xc
	// Line 189, Address: 0x3970d4, Func Offset: 0x14
	// Line 198, Address: 0x3970e0, Func Offset: 0x20
	// Line 199, Address: 0x3970e8, Func Offset: 0x28
	// Func End, Address: 0x3970f4, Func Offset: 0x34
}

// zCamSceneEnter__FR6zSceneRC7xMat4x3
// Start address: 0x397100
void zCamSceneEnter(zScene& scene, xMat4x3& mat)
{
	// Line 154, Address: 0x397100, Func Offset: 0
	// Line 155, Address: 0x397114, Func Offset: 0x14
	// Line 161, Address: 0x39711c, Func Offset: 0x1c
	// Line 160, Address: 0x397120, Func Offset: 0x20
	// Line 161, Address: 0x397124, Func Offset: 0x24
	// Line 160, Address: 0x397128, Func Offset: 0x28
	// Line 157, Address: 0x397130, Func Offset: 0x30
	// Line 161, Address: 0x397134, Func Offset: 0x34
	// Line 162, Address: 0x39713c, Func Offset: 0x3c
	// Line 163, Address: 0x39714c, Func Offset: 0x4c
	// Line 165, Address: 0x397164, Func Offset: 0x64
	// Line 166, Address: 0x397170, Func Offset: 0x70
	// Line 167, Address: 0x397178, Func Offset: 0x78
	// Line 169, Address: 0x397184, Func Offset: 0x84
	// Line 167, Address: 0x397188, Func Offset: 0x88
	// Line 169, Address: 0x397194, Func Offset: 0x94
	// Line 170, Address: 0x3971b4, Func Offset: 0xb4
	// Line 171, Address: 0x3971c4, Func Offset: 0xc4
	// Line 179, Address: 0x3971d0, Func Offset: 0xd0
	// Line 180, Address: 0x3971d4, Func Offset: 0xd4
	// Line 171, Address: 0x3971d8, Func Offset: 0xd8
	// Line 180, Address: 0x3971dc, Func Offset: 0xdc
	// Line 179, Address: 0x3971e0, Func Offset: 0xe0
	// Line 180, Address: 0x3971e4, Func Offset: 0xe4
	// Line 177, Address: 0x3971e8, Func Offset: 0xe8
	// Line 180, Address: 0x3971ec, Func Offset: 0xec
	// Line 183, Address: 0x397288, Func Offset: 0x188
	// Line 180, Address: 0x3972a8, Func Offset: 0x1a8
	// Line 183, Address: 0x3972ac, Func Offset: 0x1ac
	// Func End, Address: 0x3972f0, Func Offset: 0x1f0
}

