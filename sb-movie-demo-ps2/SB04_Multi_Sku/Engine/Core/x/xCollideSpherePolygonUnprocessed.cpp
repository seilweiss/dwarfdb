



uint8 TriangleTestSphereToTwoPoints(xSweptSphere& sphere, xCollideSphereToPolygonResults& results, xVec3& pt0, xVec3& pt1);
uint8 TriangleTestSphereToThreePoints(xSweptSphere& sphere, xCollideSphereToPolygonResults& results, xVec3& pt0, xVec3& pt1, xVec3& pt2);
uint8 xSweptSphereToTriangleUnprocessed(xSweptSphere& sphere, xVec3& pt0, xVec3& pt1, xVec3& pt2, xCollideSphereToPolygonResults& results, xPlane& surface);
uint8 xSweptSphereToTriangleDoubleSidedUnprocessed(xSweptSphere& sphere, xVec3& pt0, xVec3& pt1, xVec3& pt2, xCollideSphereToPolygonResults& results, xPlane& surface);
uint8 TriangleTestSphereOnPlaneUnprocessed(xPlane& surface, xVec3& p0, xVec3& p1, xVec3& p2, xSweptSphere& sphere, xCollideSphereToPolygonResults& results, float32 vertical_d0);

// TriangleTestSphereToTwoPoints__FRC12xSweptSphereR30xCollideSphereToPolygonResultsRC5xVec3RC5xVec3
// Start address: 0x416f40
uint8 TriangleTestSphereToTwoPoints(xSweptSphere& sphere, xCollideSphereToPolygonResults& results, xVec3& pt0, xVec3& pt1)
{
	xCollideSphereToPointResults vertex_collide0;
	xCollideSphereToPointResults vertex_collide1;
	// Line 704, Address: 0x416f40, Func Offset: 0
	// Line 716, Address: 0x416f68, Func Offset: 0x28
	// Line 720, Address: 0x416f84, Func Offset: 0x44
	// Line 723, Address: 0x416fa4, Func Offset: 0x64
	// Line 720, Address: 0x416fac, Func Offset: 0x6c
	// Line 723, Address: 0x416fb0, Func Offset: 0x70
	// Line 724, Address: 0x416fb4, Func Offset: 0x74
	// Line 723, Address: 0x416fb8, Func Offset: 0x78
	// Line 727, Address: 0x416fc4, Func Offset: 0x84
	// Line 723, Address: 0x416fc8, Func Offset: 0x88
	// Line 727, Address: 0x416fcc, Func Offset: 0x8c
	// Line 724, Address: 0x416fd0, Func Offset: 0x90
	// Line 723, Address: 0x416fd4, Func Offset: 0x94
	// Line 724, Address: 0x416fd8, Func Offset: 0x98
	// Line 727, Address: 0x416fdc, Func Offset: 0x9c
	// Line 724, Address: 0x416fe0, Func Offset: 0xa0
	// Line 727, Address: 0x416fe8, Func Offset: 0xa8
	// Line 724, Address: 0x416fec, Func Offset: 0xac
	// Line 727, Address: 0x416ff0, Func Offset: 0xb0
	// Line 729, Address: 0x417004, Func Offset: 0xc4
	// Line 730, Address: 0x417028, Func Offset: 0xe8
	// Line 734, Address: 0x417030, Func Offset: 0xf0
	// Line 735, Address: 0x417054, Func Offset: 0x114
	// Line 744, Address: 0x41705c, Func Offset: 0x11c
	// Line 751, Address: 0x417078, Func Offset: 0x138
	// Line 739, Address: 0x417084, Func Offset: 0x144
	// Line 751, Address: 0x417088, Func Offset: 0x148
	// Line 740, Address: 0x4170a4, Func Offset: 0x164
	// Line 751, Address: 0x4170ac, Func Offset: 0x16c
	// Line 746, Address: 0x4170b0, Func Offset: 0x170
	// Line 751, Address: 0x4170b4, Func Offset: 0x174
	// Line 752, Address: 0x4170d4, Func Offset: 0x194
	// Func End, Address: 0x4170f0, Func Offset: 0x1b0
}

// TriangleTestSphereToThreePoints__FRC12xSweptSphereR30xCollideSphereToPolygonResultsRC5xVec3RC5xVec3RC5xVec3
// Start address: 0x4170f0
uint8 TriangleTestSphereToThreePoints(xSweptSphere& sphere, xCollideSphereToPolygonResults& results, xVec3& pt0, xVec3& pt1, xVec3& pt2)
{
	xCollideSphereToPointResults vertex_collide0;
	xCollideSphereToPointResults vertex_collide1;
	xCollideSphereToPointResults vertex_collide2;
	// Line 587, Address: 0x4170f0, Func Offset: 0
	// Line 600, Address: 0x417120, Func Offset: 0x30
	// Line 602, Address: 0x41713c, Func Offset: 0x4c
	// Line 604, Address: 0x41715c, Func Offset: 0x6c
	// Line 607, Address: 0x417180, Func Offset: 0x90
	// Line 608, Address: 0x41718c, Func Offset: 0x9c
	// Line 607, Address: 0x417190, Func Offset: 0xa0
	// Line 608, Address: 0x4171a4, Func Offset: 0xb4
	// Line 609, Address: 0x4171b0, Func Offset: 0xc0
	// Line 608, Address: 0x4171bc, Func Offset: 0xcc
	// Line 609, Address: 0x4171cc, Func Offset: 0xdc
	// Line 608, Address: 0x4171d0, Func Offset: 0xe0
	// Line 609, Address: 0x4171d4, Func Offset: 0xe4
	// Line 612, Address: 0x4171e8, Func Offset: 0xf8
	// Line 614, Address: 0x417200, Func Offset: 0x110
	// Line 616, Address: 0x41720c, Func Offset: 0x11c
	// Line 617, Address: 0x417230, Func Offset: 0x140
	// Line 621, Address: 0x417238, Func Offset: 0x148
	// Line 622, Address: 0x41725c, Func Offset: 0x16c
	// Line 626, Address: 0x417264, Func Offset: 0x174
	// Line 628, Address: 0x417270, Func Offset: 0x180
	// Line 629, Address: 0x417294, Func Offset: 0x1a4
	// Line 633, Address: 0x41729c, Func Offset: 0x1ac
	// Line 634, Address: 0x4172c0, Func Offset: 0x1d0
	// Line 639, Address: 0x4172c8, Func Offset: 0x1d8
	// Line 642, Address: 0x4172e8, Func Offset: 0x1f8
	// Line 639, Address: 0x4172f0, Func Offset: 0x200
	// Line 642, Address: 0x4172f4, Func Offset: 0x204
	// Line 645, Address: 0x4172f8, Func Offset: 0x208
	// Line 642, Address: 0x4172fc, Func Offset: 0x20c
	// Line 648, Address: 0x417308, Func Offset: 0x218
	// Line 642, Address: 0x41730c, Func Offset: 0x21c
	// Line 648, Address: 0x417310, Func Offset: 0x220
	// Line 645, Address: 0x417314, Func Offset: 0x224
	// Line 642, Address: 0x417318, Func Offset: 0x228
	// Line 645, Address: 0x41731c, Func Offset: 0x22c
	// Line 648, Address: 0x417320, Func Offset: 0x230
	// Line 645, Address: 0x417324, Func Offset: 0x234
	// Line 648, Address: 0x41732c, Func Offset: 0x23c
	// Line 645, Address: 0x417330, Func Offset: 0x240
	// Line 648, Address: 0x417334, Func Offset: 0x244
	// Line 650, Address: 0x417348, Func Offset: 0x258
	// Line 651, Address: 0x41736c, Func Offset: 0x27c
	// Line 655, Address: 0x417374, Func Offset: 0x284
	// Line 656, Address: 0x417398, Func Offset: 0x2a8
	// Line 665, Address: 0x4173a0, Func Offset: 0x2b0
	// Line 667, Address: 0x4173bc, Func Offset: 0x2cc
	// Line 670, Address: 0x4173dc, Func Offset: 0x2ec
	// Line 667, Address: 0x4173e4, Func Offset: 0x2f4
	// Line 670, Address: 0x4173e8, Func Offset: 0x2f8
	// Line 673, Address: 0x4173ec, Func Offset: 0x2fc
	// Line 670, Address: 0x4173f0, Func Offset: 0x300
	// Line 676, Address: 0x4173fc, Func Offset: 0x30c
	// Line 670, Address: 0x417400, Func Offset: 0x310
	// Line 676, Address: 0x417404, Func Offset: 0x314
	// Line 673, Address: 0x417408, Func Offset: 0x318
	// Line 670, Address: 0x41740c, Func Offset: 0x31c
	// Line 673, Address: 0x417410, Func Offset: 0x320
	// Line 676, Address: 0x417414, Func Offset: 0x324
	// Line 673, Address: 0x417418, Func Offset: 0x328
	// Line 676, Address: 0x417420, Func Offset: 0x330
	// Line 673, Address: 0x417424, Func Offset: 0x334
	// Line 676, Address: 0x417428, Func Offset: 0x338
	// Line 678, Address: 0x41743c, Func Offset: 0x34c
	// Line 679, Address: 0x417460, Func Offset: 0x370
	// Line 683, Address: 0x417468, Func Offset: 0x378
	// Line 684, Address: 0x41748c, Func Offset: 0x39c
	// Line 693, Address: 0x417494, Func Offset: 0x3a4
	// Line 700, Address: 0x4174b0, Func Offset: 0x3c0
	// Line 660, Address: 0x4174bc, Func Offset: 0x3cc
	// Line 700, Address: 0x4174c0, Func Offset: 0x3d0
	// Line 661, Address: 0x4174dc, Func Offset: 0x3ec
	// Line 700, Address: 0x4174e4, Func Offset: 0x3f4
	// Line 688, Address: 0x4174e8, Func Offset: 0x3f8
	// Line 700, Address: 0x4174ec, Func Offset: 0x3fc
	// Line 689, Address: 0x417508, Func Offset: 0x418
	// Line 700, Address: 0x417510, Func Offset: 0x420
	// Line 695, Address: 0x417514, Func Offset: 0x424
	// Line 700, Address: 0x417518, Func Offset: 0x428
	// Line 701, Address: 0x417538, Func Offset: 0x448
	// Func End, Address: 0x417558, Func Offset: 0x468
}

// xSweptSphereToTriangleUnprocessed__FRC12xSweptSphereRC5xVec3RC5xVec3RC5xVec3R30xCollideSphereToPolygonResultsR6xPlane
// Start address: 0x417560
uint8 xSweptSphereToTriangleUnprocessed(xSweptSphere& sphere, xVec3& pt0, xVec3& pt1, xVec3& pt2, xCollideSphereToPolygonResults& results, xPlane& surface)
{
	float32 vertical_de;
	float32 to_plane_move_dist;
	xSweptSphere at_plane_sphere;
	// Line 482, Address: 0x417560, Func Offset: 0
	// Line 484, Address: 0x417564, Func Offset: 0x4
	// Line 482, Address: 0x417568, Func Offset: 0x8
	// Line 484, Address: 0x417570, Func Offset: 0x10
	// Line 482, Address: 0x417574, Func Offset: 0x14
	// Line 484, Address: 0x417578, Func Offset: 0x18
	// Line 482, Address: 0x4175c0, Func Offset: 0x60
	// Line 484, Address: 0x4175c4, Func Offset: 0x64
	// Line 495, Address: 0x417664, Func Offset: 0x104
	// Line 490, Address: 0x417668, Func Offset: 0x108
	// Line 495, Address: 0x41766c, Func Offset: 0x10c
	// Line 484, Address: 0x417670, Func Offset: 0x110
	// Line 490, Address: 0x41767c, Func Offset: 0x11c
	// Line 495, Address: 0x417680, Func Offset: 0x120
	// Line 490, Address: 0x417688, Func Offset: 0x128
	// Line 495, Address: 0x41769c, Func Offset: 0x13c
	// Line 502, Address: 0x4176a8, Func Offset: 0x148
	// Line 495, Address: 0x4176ac, Func Offset: 0x14c
	// Line 502, Address: 0x4176b0, Func Offset: 0x150
	// Line 507, Address: 0x4176d0, Func Offset: 0x170
	// Line 514, Address: 0x4176e0, Func Offset: 0x180
	// Line 519, Address: 0x4176ec, Func Offset: 0x18c
	// Line 533, Address: 0x4176f8, Func Offset: 0x198
	// Line 540, Address: 0x417704, Func Offset: 0x1a4
	// Line 558, Address: 0x417708, Func Offset: 0x1a8
	// Line 540, Address: 0x417714, Func Offset: 0x1b4
	// Line 546, Address: 0x417720, Func Offset: 0x1c0
	// Line 552, Address: 0x41772c, Func Offset: 0x1cc
	// Line 546, Address: 0x417730, Func Offset: 0x1d0
	// Line 549, Address: 0x417734, Func Offset: 0x1d4
	// Line 546, Address: 0x417738, Func Offset: 0x1d8
	// Line 552, Address: 0x417744, Func Offset: 0x1e4
	// Line 555, Address: 0x417750, Func Offset: 0x1f0
	// Line 546, Address: 0x417754, Func Offset: 0x1f4
	// Line 549, Address: 0x41775c, Func Offset: 0x1fc
	// Line 546, Address: 0x417760, Func Offset: 0x200
	// Line 552, Address: 0x417770, Func Offset: 0x210
	// Line 549, Address: 0x417774, Func Offset: 0x214
	// Line 552, Address: 0x417778, Func Offset: 0x218
	// Line 558, Address: 0x41777c, Func Offset: 0x21c
	// Line 565, Address: 0x417794, Func Offset: 0x234
	// Line 484, Address: 0x4177a8, Func Offset: 0x248
	// Line 565, Address: 0x4177b0, Func Offset: 0x250
	// Line 484, Address: 0x4177b4, Func Offset: 0x254
	// Line 565, Address: 0x4177bc, Func Offset: 0x25c
	// Line 484, Address: 0x4177c4, Func Offset: 0x264
	// Line 565, Address: 0x4177c8, Func Offset: 0x268
	// Line 484, Address: 0x4177d0, Func Offset: 0x270
	// Line 486, Address: 0x4177e4, Func Offset: 0x284
	// Line 498, Address: 0x4177ec, Func Offset: 0x28c
	// Line 510, Address: 0x4177f4, Func Offset: 0x294
	// Line 521, Address: 0x4177fc, Func Offset: 0x29c
	// Line 565, Address: 0x417804, Func Offset: 0x2a4
	// Line 560, Address: 0x417808, Func Offset: 0x2a8
	// Line 561, Address: 0x41780c, Func Offset: 0x2ac
	// Line 569, Address: 0x417814, Func Offset: 0x2b4
	// Line 571, Address: 0x417820, Func Offset: 0x2c0
	// Func End, Address: 0x417834, Func Offset: 0x2d4
}

// xSweptSphereToTriangleDoubleSidedUnprocessed__FRC12xSweptSphereRC5xVec3RC5xVec3RC5xVec3R30xCollideSphereToPolygonResultsR6xPlane
// Start address: 0x417840
uint8 xSweptSphereToTriangleDoubleSidedUnprocessed(xSweptSphere& sphere, xVec3& pt0, xVec3& pt1, xVec3& pt2, xCollideSphereToPolygonResults& results, xPlane& surface)
{
	float32 vertical_de;
	float32 to_plane_move_dist;
	xSweptSphere at_plane_sphere;
	float32 vertical_de;
	float32 to_plane_move_dist;
	xSweptSphere at_plane_sphere;
	// Line 332, Address: 0x417840, Func Offset: 0
	// Line 334, Address: 0x417844, Func Offset: 0x4
	// Line 332, Address: 0x417848, Func Offset: 0x8
	// Line 334, Address: 0x417850, Func Offset: 0x10
	// Line 332, Address: 0x417854, Func Offset: 0x14
	// Line 334, Address: 0x417858, Func Offset: 0x18
	// Line 332, Address: 0x4178a0, Func Offset: 0x60
	// Line 334, Address: 0x4178a4, Func Offset: 0x64
	// Line 345, Address: 0x417944, Func Offset: 0x104
	// Line 340, Address: 0x417948, Func Offset: 0x108
	// Line 345, Address: 0x41794c, Func Offset: 0x10c
	// Line 334, Address: 0x417950, Func Offset: 0x110
	// Line 340, Address: 0x41795c, Func Offset: 0x11c
	// Line 345, Address: 0x417960, Func Offset: 0x120
	// Line 340, Address: 0x417968, Func Offset: 0x128
	// Line 345, Address: 0x41797c, Func Offset: 0x13c
	// Line 410, Address: 0x417988, Func Offset: 0x148
	// Line 413, Address: 0x4179a0, Func Offset: 0x160
	// Line 410, Address: 0x4179a4, Func Offset: 0x164
	// Line 413, Address: 0x4179a8, Func Offset: 0x168
	// Line 416, Address: 0x4179c8, Func Offset: 0x188
	// Line 424, Address: 0x4179d4, Func Offset: 0x194
	// Line 416, Address: 0x4179d8, Func Offset: 0x198
	// Line 424, Address: 0x4179dc, Func Offset: 0x19c
	// Line 427, Address: 0x4179e8, Func Offset: 0x1a8
	// Line 433, Address: 0x4179f4, Func Offset: 0x1b4
	// Line 446, Address: 0x417a00, Func Offset: 0x1c0
	// Line 464, Address: 0x417a04, Func Offset: 0x1c4
	// Line 446, Address: 0x417a10, Func Offset: 0x1d0
	// Line 452, Address: 0x417a1c, Func Offset: 0x1dc
	// Line 458, Address: 0x417a34, Func Offset: 0x1f4
	// Line 452, Address: 0x417a38, Func Offset: 0x1f8
	// Line 455, Address: 0x417a48, Func Offset: 0x208
	// Line 458, Address: 0x417a4c, Func Offset: 0x20c
	// Line 452, Address: 0x417a54, Func Offset: 0x214
	// Line 458, Address: 0x417a5c, Func Offset: 0x21c
	// Line 455, Address: 0x417a60, Func Offset: 0x220
	// Line 461, Address: 0x417a68, Func Offset: 0x228
	// Line 452, Address: 0x417a6c, Func Offset: 0x22c
	// Line 458, Address: 0x417a70, Func Offset: 0x230
	// Line 461, Address: 0x417a78, Func Offset: 0x238
	// Line 464, Address: 0x417a7c, Func Offset: 0x23c
	// Line 471, Address: 0x417a94, Func Offset: 0x254
	// Line 334, Address: 0x417aa8, Func Offset: 0x268
	// Line 471, Address: 0x417ab0, Func Offset: 0x270
	// Line 334, Address: 0x417ab4, Func Offset: 0x274
	// Line 471, Address: 0x417abc, Func Offset: 0x27c
	// Line 334, Address: 0x417ac4, Func Offset: 0x284
	// Line 471, Address: 0x417ac8, Func Offset: 0x288
	// Line 334, Address: 0x417ad0, Func Offset: 0x290
	// Line 336, Address: 0x417ae4, Func Offset: 0x2a4
	// Line 471, Address: 0x417aec, Func Offset: 0x2ac
	// Line 348, Address: 0x417afc, Func Offset: 0x2bc
	// Line 351, Address: 0x417b14, Func Offset: 0x2d4
	// Line 471, Address: 0x417b18, Func Offset: 0x2d8
	// Line 359, Address: 0x417b28, Func Offset: 0x2e8
	// Line 362, Address: 0x417b30, Func Offset: 0x2f0
	// Line 471, Address: 0x417b34, Func Offset: 0x2f4
	// Line 368, Address: 0x417b3c, Func Offset: 0x2fc
	// Line 471, Address: 0x417b40, Func Offset: 0x300
	// Line 381, Address: 0x417b48, Func Offset: 0x308
	// Line 399, Address: 0x417b4c, Func Offset: 0x30c
	// Line 471, Address: 0x417b50, Func Offset: 0x310
	// Line 399, Address: 0x417b54, Func Offset: 0x314
	// Line 381, Address: 0x417b58, Func Offset: 0x318
	// Line 387, Address: 0x417b64, Func Offset: 0x324
	// Line 471, Address: 0x417b68, Func Offset: 0x328
	// Line 387, Address: 0x417b6c, Func Offset: 0x32c
	// Line 471, Address: 0x417b70, Func Offset: 0x330
	// Line 387, Address: 0x417b80, Func Offset: 0x340
	// Line 471, Address: 0x417b84, Func Offset: 0x344
	// Line 387, Address: 0x417b88, Func Offset: 0x348
	// Line 471, Address: 0x417b94, Func Offset: 0x354
	// Line 390, Address: 0x417b98, Func Offset: 0x358
	// Line 471, Address: 0x417b9c, Func Offset: 0x35c
	// Line 399, Address: 0x417bc8, Func Offset: 0x388
	// Line 471, Address: 0x417bd0, Func Offset: 0x390
	// Line 406, Address: 0x417bd8, Func Offset: 0x398
	// Line 353, Address: 0x417be0, Func Offset: 0x3a0
	// Line 364, Address: 0x417be8, Func Offset: 0x3a8
	// Line 371, Address: 0x417bf0, Func Offset: 0x3b0
	// Line 471, Address: 0x417bf4, Func Offset: 0x3b4
	// Line 371, Address: 0x417bfc, Func Offset: 0x3bc
	// Line 471, Address: 0x417c04, Func Offset: 0x3c4
	// Line 401, Address: 0x417c08, Func Offset: 0x3c8
	// Line 402, Address: 0x417c0c, Func Offset: 0x3cc
	// Line 418, Address: 0x417c14, Func Offset: 0x3d4
	// Line 429, Address: 0x417c1c, Func Offset: 0x3dc
	// Line 436, Address: 0x417c24, Func Offset: 0x3e4
	// Line 471, Address: 0x417c28, Func Offset: 0x3e8
	// Line 436, Address: 0x417c30, Func Offset: 0x3f0
	// Line 471, Address: 0x417c38, Func Offset: 0x3f8
	// Line 466, Address: 0x417c3c, Func Offset: 0x3fc
	// Line 467, Address: 0x417c40, Func Offset: 0x400
	// Line 477, Address: 0x417c48, Func Offset: 0x408
	// Line 479, Address: 0x417c4c, Func Offset: 0x40c
	// Func End, Address: 0x417c60, Func Offset: 0x420
}

// TriangleTestSphereOnPlaneUnprocessed__FRC6xPlaneRC5xVec3RC5xVec3RC5xVec3RC12xSweptSphereR30xCollideSphereToPolygonResultsf
// Start address: 0x417c60
uint8 TriangleTestSphereOnPlaneUnprocessed(xPlane& surface, xVec3& p0, xVec3& p1, xVec3& p2, xSweptSphere& sphere, xCollideSphereToPolygonResults& results, float32 vertical_d0)
{
	xVec3 edge0dir;
	xVec3 edge1dir;
	xVec3 edge2dir;
	xPlane edge0plane;
	xPlane edge1plane;
	xPlane edge2plane;
	float32 above_edge_de;
	xCollideSphereToLineSegmentResults edge_collide;
	// Line 133, Address: 0x417c60, Func Offset: 0
	// Line 142, Address: 0x417c64, Func Offset: 0x4
	// Line 133, Address: 0x417c68, Func Offset: 0x8
	// Line 142, Address: 0x417c6c, Func Offset: 0xc
	// Line 133, Address: 0x417c70, Func Offset: 0x10
	// Line 142, Address: 0x417c74, Func Offset: 0x14
	// Line 133, Address: 0x417c78, Func Offset: 0x18
	// Line 142, Address: 0x417c7c, Func Offset: 0x1c
	// Line 133, Address: 0x417c80, Func Offset: 0x20
	// Line 142, Address: 0x417c84, Func Offset: 0x24
	// Line 133, Address: 0x417c88, Func Offset: 0x28
	// Line 142, Address: 0x417c8c, Func Offset: 0x2c
	// Line 133, Address: 0x417c90, Func Offset: 0x30
	// Line 142, Address: 0x417c94, Func Offset: 0x34
	// Line 133, Address: 0x417c98, Func Offset: 0x38
	// Line 142, Address: 0x417c9c, Func Offset: 0x3c
	// Line 133, Address: 0x417ca0, Func Offset: 0x40
	// Line 142, Address: 0x417ca4, Func Offset: 0x44
	// Line 133, Address: 0x417ca8, Func Offset: 0x48
	// Line 142, Address: 0x417cac, Func Offset: 0x4c
	// Line 133, Address: 0x417cb0, Func Offset: 0x50
	// Line 142, Address: 0x417cb4, Func Offset: 0x54
	// Line 133, Address: 0x417ce4, Func Offset: 0x84
	// Line 142, Address: 0x417d48, Func Offset: 0xe8
	// Line 148, Address: 0x417de8, Func Offset: 0x188
	// Line 161, Address: 0x417e08, Func Offset: 0x1a8
	// Line 165, Address: 0x417e14, Func Offset: 0x1b4
	// Line 142, Address: 0x417e70, Func Offset: 0x210
	// Line 165, Address: 0x417e84, Func Offset: 0x224
	// Line 142, Address: 0x417e88, Func Offset: 0x228
	// Line 165, Address: 0x417e90, Func Offset: 0x230
	// Line 142, Address: 0x417e94, Func Offset: 0x234
	// Line 144, Address: 0x417ea4, Func Offset: 0x244
	// Line 167, Address: 0x417eac, Func Offset: 0x24c
	// Line 169, Address: 0x417ed0, Func Offset: 0x270
	// Line 167, Address: 0x417f44, Func Offset: 0x2e4
	// Line 169, Address: 0x417f48, Func Offset: 0x2e8
	// Line 167, Address: 0x417f64, Func Offset: 0x304
	// Line 174, Address: 0x417f6c, Func Offset: 0x30c
	// Line 180, Address: 0x418058, Func Offset: 0x3f8
	// Line 183, Address: 0x418078, Func Offset: 0x418
	// Line 187, Address: 0x418084, Func Offset: 0x424
	// Line 174, Address: 0x4180e0, Func Offset: 0x480
	// Line 187, Address: 0x4180f4, Func Offset: 0x494
	// Line 174, Address: 0x4180f8, Func Offset: 0x498
	// Line 187, Address: 0x418100, Func Offset: 0x4a0
	// Line 174, Address: 0x418104, Func Offset: 0x4a4
	// Line 176, Address: 0x418114, Func Offset: 0x4b4
	// Line 189, Address: 0x41811c, Func Offset: 0x4bc
	// Line 191, Address: 0x418140, Func Offset: 0x4e0
	// Line 189, Address: 0x4181b4, Func Offset: 0x554
	// Line 191, Address: 0x4181b8, Func Offset: 0x558
	// Line 189, Address: 0x4181d4, Func Offset: 0x574
	// Line 197, Address: 0x4181dc, Func Offset: 0x57c
	// Line 204, Address: 0x4181fc, Func Offset: 0x59c
	// Line 210, Address: 0x4182e4, Func Offset: 0x684
	// Line 213, Address: 0x418304, Func Offset: 0x6a4
	// Line 217, Address: 0x418310, Func Offset: 0x6b0
	// Line 204, Address: 0x41836c, Func Offset: 0x70c
	// Line 217, Address: 0x418380, Func Offset: 0x720
	// Line 204, Address: 0x418384, Func Offset: 0x724
	// Line 217, Address: 0x41838c, Func Offset: 0x72c
	// Line 204, Address: 0x418390, Func Offset: 0x730
	// Line 206, Address: 0x4183a0, Func Offset: 0x740
	// Line 219, Address: 0x4183a8, Func Offset: 0x748
	// Line 221, Address: 0x4183cc, Func Offset: 0x76c
	// Line 219, Address: 0x418440, Func Offset: 0x7e0
	// Line 221, Address: 0x418444, Func Offset: 0x7e4
	// Line 219, Address: 0x418460, Func Offset: 0x800
	// Line 225, Address: 0x418468, Func Offset: 0x808
	// Line 231, Address: 0x418488, Func Offset: 0x828
	// Line 238, Address: 0x4184a0, Func Offset: 0x840
	// Line 244, Address: 0x418588, Func Offset: 0x928
	// Line 247, Address: 0x4185a8, Func Offset: 0x948
	// Line 251, Address: 0x4185b4, Func Offset: 0x954
	// Line 238, Address: 0x418610, Func Offset: 0x9b0
	// Line 251, Address: 0x418624, Func Offset: 0x9c4
	// Line 238, Address: 0x418628, Func Offset: 0x9c8
	// Line 251, Address: 0x418630, Func Offset: 0x9d0
	// Line 238, Address: 0x418634, Func Offset: 0x9d4
	// Line 240, Address: 0x418644, Func Offset: 0x9e4
	// Line 253, Address: 0x41864c, Func Offset: 0x9ec
	// Line 255, Address: 0x418670, Func Offset: 0xa10
	// Line 253, Address: 0x4186e4, Func Offset: 0xa84
	// Line 255, Address: 0x4186e8, Func Offset: 0xa88
	// Line 253, Address: 0x418704, Func Offset: 0xaa4
	// Line 260, Address: 0x41870c, Func Offset: 0xaac
	// Line 266, Address: 0x4187f8, Func Offset: 0xb98
	// Line 269, Address: 0x418818, Func Offset: 0xbb8
	// Line 273, Address: 0x418824, Func Offset: 0xbc4
	// Line 260, Address: 0x418880, Func Offset: 0xc20
	// Line 273, Address: 0x418894, Func Offset: 0xc34
	// Line 260, Address: 0x418898, Func Offset: 0xc38
	// Line 273, Address: 0x4188a0, Func Offset: 0xc40
	// Line 260, Address: 0x4188a4, Func Offset: 0xc44
	// Line 262, Address: 0x4188b4, Func Offset: 0xc54
	// Line 275, Address: 0x4188bc, Func Offset: 0xc5c
	// Line 277, Address: 0x4188e0, Func Offset: 0xc80
	// Line 275, Address: 0x418954, Func Offset: 0xcf4
	// Line 277, Address: 0x418958, Func Offset: 0xcf8
	// Line 275, Address: 0x418974, Func Offset: 0xd14
	// Line 281, Address: 0x41897c, Func Offset: 0xd1c
	// Line 287, Address: 0x41899c, Func Offset: 0xd3c
	// Line 294, Address: 0x4189b4, Func Offset: 0xd54
	// Line 300, Address: 0x418a9c, Func Offset: 0xe3c
	// Line 303, Address: 0x418ac0, Func Offset: 0xe60
	// Line 307, Address: 0x418acc, Func Offset: 0xe6c
	// Line 294, Address: 0x418b28, Func Offset: 0xec8
	// Line 307, Address: 0x418b3c, Func Offset: 0xedc
	// Line 294, Address: 0x418b40, Func Offset: 0xee0
	// Line 307, Address: 0x418b48, Func Offset: 0xee8
	// Line 294, Address: 0x418b4c, Func Offset: 0xeec
	// Line 296, Address: 0x418b5c, Func Offset: 0xefc
	// Line 309, Address: 0x418b64, Func Offset: 0xf04
	// Line 311, Address: 0x418b88, Func Offset: 0xf28
	// Line 309, Address: 0x418bfc, Func Offset: 0xf9c
	// Line 311, Address: 0x418c00, Func Offset: 0xfa0
	// Line 309, Address: 0x418c1c, Func Offset: 0xfbc
	// Line 315, Address: 0x418c24, Func Offset: 0xfc4
	// Line 324, Address: 0x418c40, Func Offset: 0xfe0
	// Line 325, Address: 0x418c44, Func Offset: 0xfe4
	// Line 324, Address: 0x418c48, Func Offset: 0xfe8
	// Line 321, Address: 0x418c58, Func Offset: 0xff8
	// Line 324, Address: 0x418c5c, Func Offset: 0xffc
	// Line 325, Address: 0x418c7c, Func Offset: 0x101c
	// Line 329, Address: 0x418c80, Func Offset: 0x1020
	// Func End, Address: 0x418cd8, Func Offset: 0x1078
}

