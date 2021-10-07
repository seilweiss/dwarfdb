



uint8 PolygonTestBH0a(int32 i, float32 closest_dist_squ, xPlane& surface, xEdge* edges, int32 num_edges, xSweptSphere& sphere, xCollideSphereToPolygonResults& results);
uint8 PolygonTestAH0c(int32 i, float32 closest_dist_squ, xPlane& surface, xEdge* edges, int32 num_edges, xSweptSphere& sphere, xCollideSphereToPolygonResults& results);
uint8 PolygonTestAH0b(int32 i, float32 closest_dist_squ, xEdge* edges, int32 num_edges, xSweptSphere& sphere, xCollideSphereToPolygonResults& results);
uint8 PolygonTestAH0a(int32 i, float32 closest_dist_squ, xEdge* edges, int32 num_edges, xSweptSphere& sphere, xCollideSphereToPolygonResults& results);
uint8 PolygonTestSphereOnPlane(xPlane& surface, xEdge* edges, int32 num_edges, xSweptSphere& sphere, xCollideSphereToPolygonResults& results, float32 vertical_d0);
uint8 xSweptSphereToPolygon(xSweptSphere& sphere, xPlane& surface, xEdge* edges, int32 num_edges, xCollideSphereToPolygonResults& results);
uint8 xSweptSphereToLineSement(xSweptSphere& sphere, xVec3& segment_start, xVec3& segment_dir, float32 segment_length, xCollideSphereToLineSegmentResults& results);
uint8 xSweptSphereToPoint(xSweptSphere& sphere, xVec3& pt, xCollideSphereToPointResults& results);

// PolygonTestBH0a__FifRC6xPlanePCQ220xCollideProcessedTri5xEdgeiRC12xSweptSphereR30xCollideSphereToPolygonResults
// Start address: 0x41c120
uint8 PolygonTestBH0a(int32 i, float32 closest_dist_squ, xPlane& surface, xEdge* edges, int32 num_edges, xSweptSphere& sphere, xCollideSphereToPolygonResults& results)
{
	xCollideSphereToLineSegmentResults edge_collide;
	xCollideSphereToPointResults vertex_collide;
	// Line 1137, Address: 0x41c120, Func Offset: 0
	// Line 1148, Address: 0x41c144, Func Offset: 0x24
	// Line 1137, Address: 0x41c148, Func Offset: 0x28
	// Line 1148, Address: 0x41c154, Func Offset: 0x34
	// Line 1137, Address: 0x41c158, Func Offset: 0x38
	// Line 1148, Address: 0x41c16c, Func Offset: 0x4c
	// Line 1153, Address: 0x41c198, Func Offset: 0x78
	// Line 1163, Address: 0x41c1c8, Func Offset: 0xa8
	// Line 1153, Address: 0x41c1cc, Func Offset: 0xac
	// Line 1163, Address: 0x41c1d0, Func Offset: 0xb0
	// Line 1153, Address: 0x41c1d8, Func Offset: 0xb8
	// Line 1163, Address: 0x41c1e4, Func Offset: 0xc4
	// Line 1165, Address: 0x41c204, Func Offset: 0xe4
	// Line 1167, Address: 0x41c208, Func Offset: 0xe8
	// Line 1165, Address: 0x41c20c, Func Offset: 0xec
	// Line 1166, Address: 0x41c210, Func Offset: 0xf0
	// Line 1168, Address: 0x41c228, Func Offset: 0x108
	// Line 1181, Address: 0x41c230, Func Offset: 0x110
	// Line 1186, Address: 0x41c240, Func Offset: 0x120
	// Line 1187, Address: 0x41c248, Func Offset: 0x128
	// Line 1172, Address: 0x41c250, Func Offset: 0x130
	// Line 1187, Address: 0x41c254, Func Offset: 0x134
	// Line 1172, Address: 0x41c25c, Func Offset: 0x13c
	// Line 1187, Address: 0x41c264, Func Offset: 0x144
	// Line 1175, Address: 0x41c26c, Func Offset: 0x14c
	// Line 1187, Address: 0x41c270, Func Offset: 0x150
	// Line 1175, Address: 0x41c288, Func Offset: 0x168
	// Line 1187, Address: 0x41c2a4, Func Offset: 0x184
	// Line 1175, Address: 0x41c2b4, Func Offset: 0x194
	// Line 1187, Address: 0x41c2b8, Func Offset: 0x198
	// Line 1180, Address: 0x41c2d0, Func Offset: 0x1b0
	// Line 1187, Address: 0x41c2e8, Func Offset: 0x1c8
	// Line 1188, Address: 0x41c2f0, Func Offset: 0x1d0
	// Func End, Address: 0x41c320, Func Offset: 0x200
}

// PolygonTestAH0c__FifRC6xPlanePCQ220xCollideProcessedTri5xEdgeiRC12xSweptSphereR30xCollideSphereToPolygonResults
// Start address: 0x41c320
uint8 PolygonTestAH0c(int32 i, float32 closest_dist_squ, xPlane& surface, xEdge* edges, int32 num_edges, xSweptSphere& sphere, xCollideSphereToPolygonResults& results)
{
	xCollideSphereToLineSegmentResults edge_collide;
	xCollideSphereToPointResults vertex_collide;
	// Line 1072, Address: 0x41c320, Func Offset: 0
	// Line 1081, Address: 0x41c350, Func Offset: 0x30
	// Line 1072, Address: 0x41c354, Func Offset: 0x34
	// Line 1081, Address: 0x41c358, Func Offset: 0x38
	// Line 1072, Address: 0x41c35c, Func Offset: 0x3c
	// Line 1081, Address: 0x41c36c, Func Offset: 0x4c
	// Line 1086, Address: 0x41c390, Func Offset: 0x70
	// Line 1092, Address: 0x41c3e0, Func Offset: 0xc0
	// Line 1086, Address: 0x41c3e4, Func Offset: 0xc4
	// Line 1092, Address: 0x41c3e8, Func Offset: 0xc8
	// Line 1086, Address: 0x41c3f0, Func Offset: 0xd0
	// Line 1092, Address: 0x41c3fc, Func Offset: 0xdc
	// Line 1095, Address: 0x41c414, Func Offset: 0xf4
	// Line 1101, Address: 0x41c478, Func Offset: 0x158
	// Line 1108, Address: 0x41c4a0, Func Offset: 0x180
	// Line 1117, Address: 0x41c4c8, Func Offset: 0x1a8
	// Line 1120, Address: 0x41c4e4, Func Offset: 0x1c4
	// Line 1124, Address: 0x41c544, Func Offset: 0x224
	// Line 1120, Address: 0x41c550, Func Offset: 0x230
	// Line 1124, Address: 0x41c554, Func Offset: 0x234
	// Line 1131, Address: 0x41c560, Func Offset: 0x240
	// Line 1132, Address: 0x41c568, Func Offset: 0x248
	// Line 1112, Address: 0x41c574, Func Offset: 0x254
	// Line 1132, Address: 0x41c578, Func Offset: 0x258
	// Line 1133, Address: 0x41c598, Func Offset: 0x278
	// Func End, Address: 0x41c5c8, Func Offset: 0x2a8
}

// PolygonTestAH0b__FifRC6xPlanePCQ220xCollideProcessedTri5xEdgeiRC12xSweptSphereR30xCollideSphereToPolygonResults
// Start address: 0x41c5d0
uint8 PolygonTestAH0b(int32 i, float32 closest_dist_squ, xEdge* edges, int32 num_edges, xSweptSphere& sphere, xCollideSphereToPolygonResults& results)
{
	xCollideSphereToLineSegmentResults edge_collide;
	xCollideSphereToPointResults vertex_collide;
	// Line 1034, Address: 0x41c5d0, Func Offset: 0
	// Line 1043, Address: 0x41c5f0, Func Offset: 0x20
	// Line 1034, Address: 0x41c5f4, Func Offset: 0x24
	// Line 1043, Address: 0x41c5f8, Func Offset: 0x28
	// Line 1034, Address: 0x41c5fc, Func Offset: 0x2c
	// Line 1043, Address: 0x41c60c, Func Offset: 0x3c
	// Line 1066, Address: 0x41c614, Func Offset: 0x44
	// Line 1067, Address: 0x41c618, Func Offset: 0x48
	// Line 1048, Address: 0x41c644, Func Offset: 0x74
	// Line 1067, Address: 0x41c650, Func Offset: 0x80
	// Line 1048, Address: 0x41c658, Func Offset: 0x88
	// Line 1067, Address: 0x41c660, Func Offset: 0x90
	// Line 1052, Address: 0x41c66c, Func Offset: 0x9c
	// Line 1067, Address: 0x41c670, Func Offset: 0xa0
	// Line 1053, Address: 0x41c68c, Func Offset: 0xbc
	// Line 1057, Address: 0x41c694, Func Offset: 0xc4
	// Line 1067, Address: 0x41c698, Func Offset: 0xc8
	// Line 1057, Address: 0x41c6a0, Func Offset: 0xd0
	// Line 1067, Address: 0x41c6a8, Func Offset: 0xd8
	// Line 1060, Address: 0x41c6c8, Func Offset: 0xf8
	// Line 1067, Address: 0x41c6e4, Func Offset: 0x114
	// Line 1060, Address: 0x41c6f4, Func Offset: 0x124
	// Line 1067, Address: 0x41c6f8, Func Offset: 0x128
	// Line 1068, Address: 0x41c72c, Func Offset: 0x15c
	// Func End, Address: 0x41c754, Func Offset: 0x184
}

// PolygonTestAH0a__FifRC6xPlanePCQ220xCollideProcessedTri5xEdgeiRC12xSweptSphereR30xCollideSphereToPolygonResults
// Start address: 0x41c760
uint8 PolygonTestAH0a(int32 i, float32 closest_dist_squ, xEdge* edges, int32 num_edges, xSweptSphere& sphere, xCollideSphereToPolygonResults& results)
{
	xCollideSphereToLineSegmentResults edge_collide;
	xCollideSphereToPointResults vertex_collide;
	// Line 943, Address: 0x41c760, Func Offset: 0
	// Line 950, Address: 0x41c780, Func Offset: 0x20
	// Line 943, Address: 0x41c784, Func Offset: 0x24
	// Line 950, Address: 0x41c788, Func Offset: 0x28
	// Line 943, Address: 0x41c78c, Func Offset: 0x2c
	// Line 950, Address: 0x41c7a4, Func Offset: 0x44
	// Line 955, Address: 0x41c7c8, Func Offset: 0x68
	// Line 964, Address: 0x41c818, Func Offset: 0xb8
	// Line 955, Address: 0x41c81c, Func Offset: 0xbc
	// Line 964, Address: 0x41c820, Func Offset: 0xc0
	// Line 955, Address: 0x41c828, Func Offset: 0xc8
	// Line 964, Address: 0x41c834, Func Offset: 0xd4
	// Line 967, Address: 0x41c84c, Func Offset: 0xec
	// Line 973, Address: 0x41c870, Func Offset: 0x110
	// Line 967, Address: 0x41c874, Func Offset: 0x114
	// Line 973, Address: 0x41c878, Func Offset: 0x118
	// Line 975, Address: 0x41c88c, Func Offset: 0x12c
	// Line 977, Address: 0x41c890, Func Offset: 0x130
	// Line 976, Address: 0x41c894, Func Offset: 0x134
	// Line 975, Address: 0x41c8a0, Func Offset: 0x140
	// Line 976, Address: 0x41c8a4, Func Offset: 0x144
	// Line 978, Address: 0x41c8b0, Func Offset: 0x150
	// Line 984, Address: 0x41c8b8, Func Offset: 0x158
	// Line 996, Address: 0x41c8c0, Func Offset: 0x160
	// Line 1005, Address: 0x41c8e8, Func Offset: 0x188
	// Line 1008, Address: 0x41c904, Func Offset: 0x1a4
	// Line 1012, Address: 0x41c964, Func Offset: 0x204
	// Line 1008, Address: 0x41c970, Func Offset: 0x210
	// Line 1012, Address: 0x41c974, Func Offset: 0x214
	// Line 1018, Address: 0x41c980, Func Offset: 0x220
	// Line 1020, Address: 0x41c9a0, Func Offset: 0x240
	// Line 1022, Address: 0x41c9a4, Func Offset: 0x244
	// Line 1021, Address: 0x41c9a8, Func Offset: 0x248
	// Line 1020, Address: 0x41c9b4, Func Offset: 0x254
	// Line 1021, Address: 0x41c9b8, Func Offset: 0x258
	// Line 1023, Address: 0x41c9c4, Func Offset: 0x264
	// Line 990, Address: 0x41c9cc, Func Offset: 0x26c
	// Line 1023, Address: 0x41c9d4, Func Offset: 0x274
	// Line 1000, Address: 0x41c9d8, Func Offset: 0x278
	// Line 1023, Address: 0x41c9dc, Func Offset: 0x27c
	// Line 1001, Address: 0x41c9f8, Func Offset: 0x298
	// Line 1028, Address: 0x41ca00, Func Offset: 0x2a0
	// Line 1030, Address: 0x41ca04, Func Offset: 0x2a4
	// Func End, Address: 0x41ca30, Func Offset: 0x2d0
}

// PolygonTestSphereOnPlane__FRC6xPlanePCQ220xCollideProcessedTri5xEdgeiRC12xSweptSphereR30xCollideSphereToPolygonResultsf
// Start address: 0x41ca30
uint8 PolygonTestSphereOnPlane(xPlane& surface, xEdge* edges, int32 num_edges, xSweptSphere& sphere, xCollideSphereToPolygonResults& results, float32 vertical_d0)
{
	float32 above_edge_de;
	xCollideSphereToLineSegmentResults edge_collide;
	xCollideSphereToPointResults vertex_collide;
	int32 i;
	int32 i;
	// Line 598, Address: 0x41ca30, Func Offset: 0
	// Line 600, Address: 0x41ca3c, Func Offset: 0xc
	// Line 598, Address: 0x41ca40, Func Offset: 0x10
	// Line 600, Address: 0x41ca4c, Func Offset: 0x1c
	// Line 598, Address: 0x41ca50, Func Offset: 0x20
	// Line 600, Address: 0x41ca5c, Func Offset: 0x2c
	// Line 598, Address: 0x41ca60, Func Offset: 0x30
	// Line 600, Address: 0x41ca64, Func Offset: 0x34
	// Line 598, Address: 0x41ca68, Func Offset: 0x38
	// Line 600, Address: 0x41ca6c, Func Offset: 0x3c
	// Line 598, Address: 0x41ca70, Func Offset: 0x40
	// Line 600, Address: 0x41ca74, Func Offset: 0x44
	// Line 598, Address: 0x41ca78, Func Offset: 0x48
	// Line 600, Address: 0x41ca7c, Func Offset: 0x4c
	// Line 613, Address: 0x41ca98, Func Offset: 0x68
	// Line 619, Address: 0x41caa4, Func Offset: 0x74
	// Line 622, Address: 0x41cad4, Func Offset: 0xa4
	// Line 625, Address: 0x41caec, Func Offset: 0xbc
	// Line 630, Address: 0x41caf4, Func Offset: 0xc4
	// Line 632, Address: 0x41cb1c, Func Offset: 0xec
	// Line 634, Address: 0x41cb20, Func Offset: 0xf0
	// Line 632, Address: 0x41cb24, Func Offset: 0xf4
	// Line 633, Address: 0x41cb28, Func Offset: 0xf8
	// Line 635, Address: 0x41cb40, Func Offset: 0x110
	// Line 639, Address: 0x41cb48, Func Offset: 0x118
	// Line 650, Address: 0x41cb64, Func Offset: 0x134
	// Line 652, Address: 0x41cb74, Func Offset: 0x144
	// Line 650, Address: 0x41cb78, Func Offset: 0x148
	// Line 652, Address: 0x41cb7c, Func Offset: 0x14c
	// Line 650, Address: 0x41cb80, Func Offset: 0x150
	// Line 652, Address: 0x41cb84, Func Offset: 0x154
	// Line 655, Address: 0x41cba4, Func Offset: 0x174
	// Line 661, Address: 0x41cbc0, Func Offset: 0x190
	// Line 674, Address: 0x41cbf4, Func Offset: 0x1c4
	// Line 676, Address: 0x41cc24, Func Offset: 0x1f4
	// Line 679, Address: 0x41cc48, Func Offset: 0x218
	// Line 692, Address: 0x41cc64, Func Offset: 0x234
	// Line 695, Address: 0x41cca4, Func Offset: 0x274
	// Line 698, Address: 0x41ccbc, Func Offset: 0x28c
	// Line 767, Address: 0x41ccc4, Func Offset: 0x294
	// Line 772, Address: 0x41ccd8, Func Offset: 0x2a8
	// Line 780, Address: 0x41cce0, Func Offset: 0x2b0
	// Line 783, Address: 0x41cd10, Func Offset: 0x2e0
	// Line 786, Address: 0x41cd28, Func Offset: 0x2f8
	// Line 644, Address: 0x41cd34, Func Offset: 0x304
	// Line 786, Address: 0x41cd38, Func Offset: 0x308
	// Line 644, Address: 0x41cd3c, Func Offset: 0x30c
	// Line 786, Address: 0x41cd40, Func Offset: 0x310
	// Line 644, Address: 0x41cd44, Func Offset: 0x314
	// Line 786, Address: 0x41cd48, Func Offset: 0x318
	// Line 644, Address: 0x41cd4c, Func Offset: 0x31c
	// Line 786, Address: 0x41cd50, Func Offset: 0x320
	// Line 644, Address: 0x41cd54, Func Offset: 0x324
	// Line 786, Address: 0x41cd58, Func Offset: 0x328
	// Line 644, Address: 0x41cd5c, Func Offset: 0x32c
	// Line 786, Address: 0x41cd60, Func Offset: 0x330
	// Line 644, Address: 0x41cd68, Func Offset: 0x338
	// Line 786, Address: 0x41cd7c, Func Offset: 0x34c
	// Line 644, Address: 0x41cd80, Func Offset: 0x350
	// Line 786, Address: 0x41cd84, Func Offset: 0x354
	// Line 644, Address: 0x41cd9c, Func Offset: 0x36c
	// Line 786, Address: 0x41cda4, Func Offset: 0x374
	// Line 666, Address: 0x41cda8, Func Offset: 0x378
	// Line 786, Address: 0x41cdac, Func Offset: 0x37c
	// Line 666, Address: 0x41cdb0, Func Offset: 0x380
	// Line 786, Address: 0x41cdb4, Func Offset: 0x384
	// Line 666, Address: 0x41cdb8, Func Offset: 0x388
	// Line 786, Address: 0x41cdbc, Func Offset: 0x38c
	// Line 666, Address: 0x41cdc0, Func Offset: 0x390
	// Line 786, Address: 0x41cdc4, Func Offset: 0x394
	// Line 666, Address: 0x41cdc8, Func Offset: 0x398
	// Line 786, Address: 0x41cdcc, Func Offset: 0x39c
	// Line 666, Address: 0x41cdd0, Func Offset: 0x3a0
	// Line 786, Address: 0x41cdd4, Func Offset: 0x3a4
	// Line 666, Address: 0x41cddc, Func Offset: 0x3ac
	// Line 786, Address: 0x41cdf0, Func Offset: 0x3c0
	// Line 666, Address: 0x41cdf4, Func Offset: 0x3c4
	// Line 786, Address: 0x41cdf8, Func Offset: 0x3c8
	// Line 666, Address: 0x41ce10, Func Offset: 0x3e0
	// Line 702, Address: 0x41ce18, Func Offset: 0x3e8
	// Line 786, Address: 0x41ce1c, Func Offset: 0x3ec
	// Line 702, Address: 0x41ce20, Func Offset: 0x3f0
	// Line 786, Address: 0x41ce28, Func Offset: 0x3f8
	// Line 702, Address: 0x41ce30, Func Offset: 0x400
	// Line 786, Address: 0x41ce38, Func Offset: 0x408
	// Line 707, Address: 0x41ce44, Func Offset: 0x414
	// Line 786, Address: 0x41ce48, Func Offset: 0x418
	// Line 708, Address: 0x41ce64, Func Offset: 0x434
	// Line 712, Address: 0x41ce6c, Func Offset: 0x43c
	// Line 786, Address: 0x41ce70, Func Offset: 0x440
	// Line 712, Address: 0x41ce78, Func Offset: 0x448
	// Line 786, Address: 0x41ce80, Func Offset: 0x450
	// Line 727, Address: 0x41cecc, Func Offset: 0x49c
	// Line 786, Address: 0x41ced0, Func Offset: 0x4a0
	// Line 727, Address: 0x41ced4, Func Offset: 0x4a4
	// Line 786, Address: 0x41ced8, Func Offset: 0x4a8
	// Line 727, Address: 0x41cedc, Func Offset: 0x4ac
	// Line 733, Address: 0x41cee0, Func Offset: 0x4b0
	// Line 786, Address: 0x41cee4, Func Offset: 0x4b4
	// Line 733, Address: 0x41cee8, Func Offset: 0x4b8
	// Line 786, Address: 0x41ceec, Func Offset: 0x4bc
	// Line 727, Address: 0x41cef0, Func Offset: 0x4c0
	// Line 786, Address: 0x41cef4, Func Offset: 0x4c4
	// Line 727, Address: 0x41cef8, Func Offset: 0x4c8
	// Line 733, Address: 0x41cefc, Func Offset: 0x4cc
	// Line 736, Address: 0x41cf08, Func Offset: 0x4d8
	// Line 786, Address: 0x41cf0c, Func Offset: 0x4dc
	// Line 736, Address: 0x41cf14, Func Offset: 0x4e4
	// Line 786, Address: 0x41cf18, Func Offset: 0x4e8
	// Line 739, Address: 0x41cf20, Func Offset: 0x4f0
	// Line 786, Address: 0x41cf28, Func Offset: 0x4f8
	// Line 717, Address: 0x41cf34, Func Offset: 0x504
	// Line 786, Address: 0x41cf38, Func Offset: 0x508
	// Line 717, Address: 0x41cf3c, Func Offset: 0x50c
	// Line 786, Address: 0x41cf40, Func Offset: 0x510
	// Line 717, Address: 0x41cf44, Func Offset: 0x514
	// Line 786, Address: 0x41cf48, Func Offset: 0x518
	// Line 717, Address: 0x41cf4c, Func Offset: 0x51c
	// Line 786, Address: 0x41cf50, Func Offset: 0x520
	// Line 717, Address: 0x41cf54, Func Offset: 0x524
	// Line 786, Address: 0x41cf58, Func Offset: 0x528
	// Line 717, Address: 0x41cf5c, Func Offset: 0x52c
	// Line 786, Address: 0x41cf60, Func Offset: 0x530
	// Line 717, Address: 0x41cf64, Func Offset: 0x534
	// Line 786, Address: 0x41cf78, Func Offset: 0x548
	// Line 717, Address: 0x41cf7c, Func Offset: 0x54c
	// Line 786, Address: 0x41cf80, Func Offset: 0x550
	// Line 717, Address: 0x41cf98, Func Offset: 0x568
	// Line 786, Address: 0x41cfa0, Func Offset: 0x570
	// Line 743, Address: 0x41cfa4, Func Offset: 0x574
	// Line 786, Address: 0x41cfb0, Func Offset: 0x580
	// Line 743, Address: 0x41cfb8, Func Offset: 0x588
	// Line 786, Address: 0x41cfc0, Func Offset: 0x590
	// Line 753, Address: 0x41cfc8, Func Offset: 0x598
	// Line 786, Address: 0x41cfcc, Func Offset: 0x59c
	// Line 753, Address: 0x41cfd4, Func Offset: 0x5a4
	// Line 786, Address: 0x41cfdc, Func Offset: 0x5ac
	// Line 766, Address: 0x41cff8, Func Offset: 0x5c8
	// Line 786, Address: 0x41d000, Func Offset: 0x5d0
	// Line 748, Address: 0x41d004, Func Offset: 0x5d4
	// Line 786, Address: 0x41d008, Func Offset: 0x5d8
	// Line 749, Address: 0x41d024, Func Offset: 0x5f4
	// Line 758, Address: 0x41d030, Func Offset: 0x600
	// Line 786, Address: 0x41d034, Func Offset: 0x604
	// Line 758, Address: 0x41d038, Func Offset: 0x608
	// Line 786, Address: 0x41d044, Func Offset: 0x614
	// Line 758, Address: 0x41d048, Func Offset: 0x618
	// Line 786, Address: 0x41d054, Func Offset: 0x624
	// Line 758, Address: 0x41d058, Func Offset: 0x628
	// Line 786, Address: 0x41d05c, Func Offset: 0x62c
	// Line 758, Address: 0x41d07c, Func Offset: 0x64c
	// Line 786, Address: 0x41d080, Func Offset: 0x650
	// Line 758, Address: 0x41d084, Func Offset: 0x654
	// Line 786, Address: 0x41d08c, Func Offset: 0x65c
	// Line 758, Address: 0x41d090, Func Offset: 0x660
	// Line 786, Address: 0x41d09c, Func Offset: 0x66c
	// Line 758, Address: 0x41d0b0, Func Offset: 0x680
	// Line 790, Address: 0x41d0b8, Func Offset: 0x688
	// Line 799, Address: 0x41d0e0, Func Offset: 0x6b0
	// Line 808, Address: 0x41d0fc, Func Offset: 0x6cc
	// Line 799, Address: 0x41d100, Func Offset: 0x6d0
	// Line 808, Address: 0x41d104, Func Offset: 0x6d4
	// Line 814, Address: 0x41d110, Func Offset: 0x6e0
	// Line 794, Address: 0x41d11c, Func Offset: 0x6ec
	// Line 814, Address: 0x41d120, Func Offset: 0x6f0
	// Line 795, Address: 0x41d13c, Func Offset: 0x70c
	// Line 804, Address: 0x41d148, Func Offset: 0x718
	// Line 814, Address: 0x41d14c, Func Offset: 0x71c
	// Line 804, Address: 0x41d150, Func Offset: 0x720
	// Line 814, Address: 0x41d15c, Func Offset: 0x72c
	// Line 804, Address: 0x41d160, Func Offset: 0x730
	// Line 814, Address: 0x41d16c, Func Offset: 0x73c
	// Line 804, Address: 0x41d170, Func Offset: 0x740
	// Line 814, Address: 0x41d174, Func Offset: 0x744
	// Line 804, Address: 0x41d194, Func Offset: 0x764
	// Line 814, Address: 0x41d198, Func Offset: 0x768
	// Line 804, Address: 0x41d19c, Func Offset: 0x76c
	// Line 814, Address: 0x41d1a4, Func Offset: 0x774
	// Line 804, Address: 0x41d1a8, Func Offset: 0x778
	// Line 814, Address: 0x41d1b4, Func Offset: 0x784
	// Line 804, Address: 0x41d1c8, Func Offset: 0x798
	// Line 820, Address: 0x41d1d0, Func Offset: 0x7a0
	// Line 826, Address: 0x41d1e0, Func Offset: 0x7b0
	// Line 823, Address: 0x41d1e4, Func Offset: 0x7b4
	// Line 826, Address: 0x41d204, Func Offset: 0x7d4
	// Line 833, Address: 0x41d234, Func Offset: 0x804
	// Line 836, Address: 0x41d270, Func Offset: 0x840
	// Line 838, Address: 0x41d288, Func Offset: 0x858
	// Line 928, Address: 0x41d290, Func Offset: 0x860
	// Line 933, Address: 0x41d2a0, Func Offset: 0x870
	// Line 936, Address: 0x41d2a4, Func Offset: 0x874
	// Line 937, Address: 0x41d2a8, Func Offset: 0x878
	// Line 936, Address: 0x41d2ac, Func Offset: 0x87c
	// Line 933, Address: 0x41d2b4, Func Offset: 0x884
	// Line 936, Address: 0x41d2b8, Func Offset: 0x888
	// Line 938, Address: 0x41d2ec, Func Offset: 0x8bc
	// Line 842, Address: 0x41d2f4, Func Offset: 0x8c4
	// Line 938, Address: 0x41d2f8, Func Offset: 0x8c8
	// Line 842, Address: 0x41d2fc, Func Offset: 0x8cc
	// Line 938, Address: 0x41d304, Func Offset: 0x8d4
	// Line 842, Address: 0x41d30c, Func Offset: 0x8dc
	// Line 938, Address: 0x41d314, Func Offset: 0x8e4
	// Line 847, Address: 0x41d320, Func Offset: 0x8f0
	// Line 938, Address: 0x41d324, Func Offset: 0x8f4
	// Line 848, Address: 0x41d340, Func Offset: 0x910
	// Line 852, Address: 0x41d348, Func Offset: 0x918
	// Line 938, Address: 0x41d34c, Func Offset: 0x91c
	// Line 852, Address: 0x41d354, Func Offset: 0x924
	// Line 938, Address: 0x41d35c, Func Offset: 0x92c
	// Line 868, Address: 0x41d3a8, Func Offset: 0x978
	// Line 938, Address: 0x41d3cc, Func Offset: 0x99c
	// Line 876, Address: 0x41d3dc, Func Offset: 0x9ac
	// Line 938, Address: 0x41d3e0, Func Offset: 0x9b0
	// Line 876, Address: 0x41d400, Func Offset: 0x9d0
	// Line 938, Address: 0x41d408, Func Offset: 0x9d8
	// Line 885, Address: 0x41d410, Func Offset: 0x9e0
	// Line 938, Address: 0x41d418, Func Offset: 0x9e8
	// Line 889, Address: 0x41d41c, Func Offset: 0x9ec
	// Line 938, Address: 0x41d428, Func Offset: 0x9f8
	// Line 889, Address: 0x41d430, Func Offset: 0xa00
	// Line 938, Address: 0x41d438, Func Offset: 0xa08
	// Line 899, Address: 0x41d440, Func Offset: 0xa10
	// Line 938, Address: 0x41d444, Func Offset: 0xa14
	// Line 899, Address: 0x41d44c, Func Offset: 0xa1c
	// Line 938, Address: 0x41d454, Func Offset: 0xa24
	// Line 914, Address: 0x41d470, Func Offset: 0xa40
	// Line 938, Address: 0x41d478, Func Offset: 0xa48
	// Line 914, Address: 0x41d480, Func Offset: 0xa50
	// Line 938, Address: 0x41d488, Func Offset: 0xa58
	// Line 923, Address: 0x41d490, Func Offset: 0xa60
	// Line 938, Address: 0x41d498, Func Offset: 0xa68
	// Line 857, Address: 0x41d4a4, Func Offset: 0xa74
	// Line 938, Address: 0x41d4a8, Func Offset: 0xa78
	// Line 857, Address: 0x41d4ac, Func Offset: 0xa7c
	// Line 938, Address: 0x41d4b0, Func Offset: 0xa80
	// Line 857, Address: 0x41d4b4, Func Offset: 0xa84
	// Line 938, Address: 0x41d4b8, Func Offset: 0xa88
	// Line 857, Address: 0x41d4bc, Func Offset: 0xa8c
	// Line 938, Address: 0x41d4c0, Func Offset: 0xa90
	// Line 857, Address: 0x41d4c4, Func Offset: 0xa94
	// Line 938, Address: 0x41d4c8, Func Offset: 0xa98
	// Line 857, Address: 0x41d4cc, Func Offset: 0xa9c
	// Line 938, Address: 0x41d4d0, Func Offset: 0xaa0
	// Line 857, Address: 0x41d4d4, Func Offset: 0xaa4
	// Line 938, Address: 0x41d4e8, Func Offset: 0xab8
	// Line 857, Address: 0x41d4ec, Func Offset: 0xabc
	// Line 938, Address: 0x41d4f0, Func Offset: 0xac0
	// Line 857, Address: 0x41d508, Func Offset: 0xad8
	// Line 938, Address: 0x41d510, Func Offset: 0xae0
	// Line 880, Address: 0x41d514, Func Offset: 0xae4
	// Line 938, Address: 0x41d518, Func Offset: 0xae8
	// Line 881, Address: 0x41d534, Func Offset: 0xb04
	// Line 938, Address: 0x41d53c, Func Offset: 0xb0c
	// Line 894, Address: 0x41d540, Func Offset: 0xb10
	// Line 938, Address: 0x41d544, Func Offset: 0xb14
	// Line 895, Address: 0x41d560, Func Offset: 0xb30
	// Line 904, Address: 0x41d56c, Func Offset: 0xb3c
	// Line 938, Address: 0x41d570, Func Offset: 0xb40
	// Line 904, Address: 0x41d574, Func Offset: 0xb44
	// Line 938, Address: 0x41d580, Func Offset: 0xb50
	// Line 904, Address: 0x41d584, Func Offset: 0xb54
	// Line 938, Address: 0x41d590, Func Offset: 0xb60
	// Line 904, Address: 0x41d594, Func Offset: 0xb64
	// Line 938, Address: 0x41d598, Func Offset: 0xb68
	// Line 904, Address: 0x41d5b8, Func Offset: 0xb88
	// Line 938, Address: 0x41d5bc, Func Offset: 0xb8c
	// Line 904, Address: 0x41d5c0, Func Offset: 0xb90
	// Line 938, Address: 0x41d5c8, Func Offset: 0xb98
	// Line 904, Address: 0x41d5cc, Func Offset: 0xb9c
	// Line 938, Address: 0x41d5d8, Func Offset: 0xba8
	// Line 904, Address: 0x41d5ec, Func Offset: 0xbbc
	// Line 938, Address: 0x41d5f4, Func Offset: 0xbc4
	// Line 918, Address: 0x41d5f8, Func Offset: 0xbc8
	// Line 938, Address: 0x41d5fc, Func Offset: 0xbcc
	// Line 939, Address: 0x41d61c, Func Offset: 0xbec
	// Func End, Address: 0x41d648, Func Offset: 0xc18
}

// xSweptSphereToPolygon__FRC12xSweptSphereRC6xPlanePCQ220xCollideProcessedTri5xEdgeiR30xCollideSphereToPolygonResults
// Start address: 0x41d650
uint8 xSweptSphereToPolygon(xSweptSphere& sphere, xPlane& surface, xEdge* edges, int32 num_edges, xCollideSphereToPolygonResults& results)
{
	float32 vertical_de;
	float32 to_plane_move_dist;
	xSweptSphere at_plane_sphere;
	// Line 511, Address: 0x41d650, Func Offset: 0
	// Line 518, Address: 0x41d654, Func Offset: 0x4
	// Line 511, Address: 0x41d658, Func Offset: 0x8
	// Line 518, Address: 0x41d65c, Func Offset: 0xc
	// Line 513, Address: 0x41d660, Func Offset: 0x10
	// Line 511, Address: 0x41d664, Func Offset: 0x14
	// Line 513, Address: 0x41d680, Func Offset: 0x30
	// Line 518, Address: 0x41d684, Func Offset: 0x34
	// Line 513, Address: 0x41d68c, Func Offset: 0x3c
	// Line 518, Address: 0x41d6a0, Func Offset: 0x50
	// Line 525, Address: 0x41d6ac, Func Offset: 0x5c
	// Line 518, Address: 0x41d6b0, Func Offset: 0x60
	// Line 525, Address: 0x41d6b4, Func Offset: 0x64
	// Line 530, Address: 0x41d6d4, Func Offset: 0x84
	// Line 537, Address: 0x41d6e4, Func Offset: 0x94
	// Line 542, Address: 0x41d6f0, Func Offset: 0xa0
	// Line 556, Address: 0x41d6fc, Func Offset: 0xac
	// Line 563, Address: 0x41d708, Func Offset: 0xb8
	// Line 581, Address: 0x41d70c, Func Offset: 0xbc
	// Line 563, Address: 0x41d71c, Func Offset: 0xcc
	// Line 569, Address: 0x41d728, Func Offset: 0xd8
	// Line 575, Address: 0x41d734, Func Offset: 0xe4
	// Line 569, Address: 0x41d738, Func Offset: 0xe8
	// Line 572, Address: 0x41d73c, Func Offset: 0xec
	// Line 569, Address: 0x41d740, Func Offset: 0xf0
	// Line 575, Address: 0x41d74c, Func Offset: 0xfc
	// Line 578, Address: 0x41d758, Func Offset: 0x108
	// Line 569, Address: 0x41d75c, Func Offset: 0x10c
	// Line 572, Address: 0x41d764, Func Offset: 0x114
	// Line 569, Address: 0x41d768, Func Offset: 0x118
	// Line 575, Address: 0x41d778, Func Offset: 0x128
	// Line 572, Address: 0x41d77c, Func Offset: 0x12c
	// Line 575, Address: 0x41d780, Func Offset: 0x130
	// Line 581, Address: 0x41d784, Func Offset: 0x134
	// Line 588, Address: 0x41d79c, Func Offset: 0x14c
	// Line 521, Address: 0x41d7a4, Func Offset: 0x154
	// Line 533, Address: 0x41d7ac, Func Offset: 0x15c
	// Line 544, Address: 0x41d7b4, Func Offset: 0x164
	// Line 588, Address: 0x41d7bc, Func Offset: 0x16c
	// Line 583, Address: 0x41d7c0, Func Offset: 0x170
	// Line 584, Address: 0x41d7c4, Func Offset: 0x174
	// Line 592, Address: 0x41d7cc, Func Offset: 0x17c
	// Line 594, Address: 0x41d7dc, Func Offset: 0x18c
	// Func End, Address: 0x41d7f0, Func Offset: 0x1a0
}

// xSweptSphereToLineSement__FRC12xSweptSphereRC5xVec3RC5xVec3fR34xCollideSphereToLineSegmentResults
// Start address: 0x41d7f0
uint8 xSweptSphereToLineSement(xSweptSphere& sphere, xVec3& segment_start, xVec3& segment_dir, float32 segment_length, xCollideSphereToLineSegmentResults& results)
{
	float32 proj_center_along_seg_de;
	float32 proj_center_above_seg_de;
	float32 travel_total;
	float32 travel_percent;
	float32 impact_along_dist;
	float32 travel_total;
	float32 travel_percent;
	float32 impact_along_dist;
	// Line 71, Address: 0x41d7f0, Func Offset: 0
	// Line 84, Address: 0x41d7f4, Func Offset: 0x4
	// Line 71, Address: 0x41d7f8, Func Offset: 0x8
	// Line 84, Address: 0x41d7fc, Func Offset: 0xc
	// Line 71, Address: 0x41d800, Func Offset: 0x10
	// Line 78, Address: 0x41d80c, Func Offset: 0x1c
	// Line 84, Address: 0x41d814, Func Offset: 0x24
	// Line 78, Address: 0x41d818, Func Offset: 0x28
	// Line 84, Address: 0x41d844, Func Offset: 0x54
	// Line 90, Address: 0x41d850, Func Offset: 0x60
	// Line 104, Address: 0x41d860, Func Offset: 0x70
	// Line 90, Address: 0x41d868, Func Offset: 0x78
	// Line 96, Address: 0x41d878, Func Offset: 0x88
	// Line 90, Address: 0x41d87c, Func Offset: 0x8c
	// Line 96, Address: 0x41d88c, Func Offset: 0x9c
	// Line 90, Address: 0x41d890, Func Offset: 0xa0
	// Line 96, Address: 0x41d898, Func Offset: 0xa8
	// Line 90, Address: 0x41d8b0, Func Offset: 0xc0
	// Line 96, Address: 0x41d8b4, Func Offset: 0xc4
	// Line 104, Address: 0x41d8b8, Func Offset: 0xc8
	// Line 96, Address: 0x41d8bc, Func Offset: 0xcc
	// Line 104, Address: 0x41d8c8, Func Offset: 0xd8
	// Line 115, Address: 0x41d8e8, Func Offset: 0xf8
	// Line 118, Address: 0x41d910, Func Offset: 0x120
	// Line 125, Address: 0x41d920, Func Offset: 0x130
	// Line 118, Address: 0x41d924, Func Offset: 0x134
	// Line 125, Address: 0x41d928, Func Offset: 0x138
	// Line 132, Address: 0x41d934, Func Offset: 0x144
	// Line 150, Address: 0x41d940, Func Offset: 0x150
	// Line 169, Address: 0x41d950, Func Offset: 0x160
	// Line 174, Address: 0x41d958, Func Offset: 0x168
	// Line 177, Address: 0x41d970, Func Offset: 0x180
	// Line 183, Address: 0x41d97c, Func Offset: 0x18c
	// Line 186, Address: 0x41d988, Func Offset: 0x198
	// Line 174, Address: 0x41d994, Func Offset: 0x1a4
	// Line 186, Address: 0x41d998, Func Offset: 0x1a8
	// Line 193, Address: 0x41d9a0, Func Offset: 0x1b0
	// Line 211, Address: 0x41d9ac, Func Offset: 0x1bc
	// Line 230, Address: 0x41d9b8, Func Offset: 0x1c8
	// Line 238, Address: 0x41d9c0, Func Offset: 0x1d0
	// Line 246, Address: 0x41d9e0, Func Offset: 0x1f0
	// Line 248, Address: 0x41d9f8, Func Offset: 0x208
	// Line 251, Address: 0x41da04, Func Offset: 0x214
	// Line 253, Address: 0x41da10, Func Offset: 0x220
	// Line 265, Address: 0x41da18, Func Offset: 0x228
	// Line 267, Address: 0x41da34, Func Offset: 0x244
	// Line 270, Address: 0x41da44, Func Offset: 0x254
	// Line 272, Address: 0x41da50, Func Offset: 0x260
	// Line 311, Address: 0x41da58, Func Offset: 0x268
	// Line 313, Address: 0x41da6c, Func Offset: 0x27c
	// Line 316, Address: 0x41da70, Func Offset: 0x280
	// Line 324, Address: 0x41da8c, Func Offset: 0x29c
	// Line 328, Address: 0x41da98, Func Offset: 0x2a8
	// Line 331, Address: 0x41daa4, Func Offset: 0x2b4
	// Line 339, Address: 0x41dabc, Func Offset: 0x2cc
	// Line 338, Address: 0x41dac0, Func Offset: 0x2d0
	// Line 337, Address: 0x41dacc, Func Offset: 0x2dc
	// Line 338, Address: 0x41dad0, Func Offset: 0x2e0
	// Line 339, Address: 0x41dafc, Func Offset: 0x30c
	// Line 346, Address: 0x41db04, Func Offset: 0x314
	// Line 354, Address: 0x41db20, Func Offset: 0x330
	// Line 358, Address: 0x41db2c, Func Offset: 0x33c
	// Line 361, Address: 0x41db38, Func Offset: 0x348
	// Line 369, Address: 0x41db50, Func Offset: 0x360
	// Line 368, Address: 0x41db54, Func Offset: 0x364
	// Line 367, Address: 0x41db60, Func Offset: 0x370
	// Line 368, Address: 0x41db64, Func Offset: 0x374
	// Line 369, Address: 0x41db90, Func Offset: 0x3a0
	// Line 86, Address: 0x41db98, Func Offset: 0x3a8
	// Line 106, Address: 0x41dba0, Func Offset: 0x3b0
	// Line 135, Address: 0x41dba8, Func Offset: 0x3b8
	// Line 369, Address: 0x41dbac, Func Offset: 0x3bc
	// Line 141, Address: 0x41dbb8, Func Offset: 0x3c8
	// Line 144, Address: 0x41dbc0, Func Offset: 0x3d0
	// Line 369, Address: 0x41dbc4, Func Offset: 0x3d4
	// Line 146, Address: 0x41dbcc, Func Offset: 0x3dc
	// Line 137, Address: 0x41dbd4, Func Offset: 0x3e4
	// Line 153, Address: 0x41dbdc, Func Offset: 0x3ec
	// Line 369, Address: 0x41dbe0, Func Offset: 0x3f0
	// Line 159, Address: 0x41dbec, Func Offset: 0x3fc
	// Line 162, Address: 0x41dbf4, Func Offset: 0x404
	// Line 369, Address: 0x41dbf8, Func Offset: 0x408
	// Line 164, Address: 0x41dc00, Func Offset: 0x410
	// Line 155, Address: 0x41dc08, Func Offset: 0x418
	// Line 196, Address: 0x41dc10, Func Offset: 0x420
	// Line 369, Address: 0x41dc14, Func Offset: 0x424
	// Line 202, Address: 0x41dc1c, Func Offset: 0x42c
	// Line 205, Address: 0x41dc24, Func Offset: 0x434
	// Line 369, Address: 0x41dc28, Func Offset: 0x438
	// Line 207, Address: 0x41dc30, Func Offset: 0x440
	// Line 198, Address: 0x41dc38, Func Offset: 0x448
	// Line 214, Address: 0x41dc40, Func Offset: 0x450
	// Line 369, Address: 0x41dc44, Func Offset: 0x454
	// Line 220, Address: 0x41dc4c, Func Offset: 0x45c
	// Line 223, Address: 0x41dc54, Func Offset: 0x464
	// Line 369, Address: 0x41dc58, Func Offset: 0x468
	// Line 225, Address: 0x41dc60, Func Offset: 0x470
	// Line 216, Address: 0x41dc68, Func Offset: 0x478
	// Line 369, Address: 0x41dc70, Func Offset: 0x480
	// Line 260, Address: 0x41dc74, Func Offset: 0x484
	// Line 369, Address: 0x41dc78, Func Offset: 0x488
	// Line 259, Address: 0x41dc8c, Func Offset: 0x49c
	// Line 369, Address: 0x41dc98, Func Offset: 0x4a8
	// Line 259, Address: 0x41dc9c, Func Offset: 0x4ac
	// Line 369, Address: 0x41dca0, Func Offset: 0x4b0
	// Line 259, Address: 0x41dca4, Func Offset: 0x4b4
	// Line 369, Address: 0x41dcac, Func Offset: 0x4bc
	// Line 260, Address: 0x41dcb0, Func Offset: 0x4c0
	// Line 369, Address: 0x41dcb8, Func Offset: 0x4c8
	// Line 279, Address: 0x41dcbc, Func Offset: 0x4cc
	// Line 369, Address: 0x41dcc0, Func Offset: 0x4d0
	// Line 278, Address: 0x41dcd4, Func Offset: 0x4e4
	// Line 369, Address: 0x41dce0, Func Offset: 0x4f0
	// Line 278, Address: 0x41dce4, Func Offset: 0x4f4
	// Line 369, Address: 0x41dce8, Func Offset: 0x4f8
	// Line 278, Address: 0x41dcec, Func Offset: 0x4fc
	// Line 369, Address: 0x41dcf4, Func Offset: 0x504
	// Line 279, Address: 0x41dcf8, Func Offset: 0x508
	// Line 288, Address: 0x41dd00, Func Offset: 0x510
	// Line 296, Address: 0x41dd08, Func Offset: 0x518
	// Line 369, Address: 0x41dd0c, Func Offset: 0x51c
	// Line 296, Address: 0x41dd14, Func Offset: 0x524
	// Line 369, Address: 0x41dd18, Func Offset: 0x528
	// Line 299, Address: 0x41dd20, Func Offset: 0x530
	// Line 319, Address: 0x41dd28, Func Offset: 0x538
	// Line 333, Address: 0x41dd30, Func Offset: 0x540
	// Line 371, Address: 0x41dd38, Func Offset: 0x548
	// Func End, Address: 0x41dd44, Func Offset: 0x554
}

// xSweptSphereToPoint__FRC12xSweptSphereRC5xVec3R28xCollideSphereToPointResults
// Start address: 0x41dd50
uint8 xSweptSphereToPoint(xSweptSphere& sphere, xVec3& pt, xCollideSphereToPointResults& results)
{
	float32 sphere_radius_squ;
	float32 along_d_impact;
	// Line 15, Address: 0x41dd50, Func Offset: 0
	// Line 21, Address: 0x41dd54, Func Offset: 0x4
	// Line 15, Address: 0x41dd58, Func Offset: 0x8
	// Line 21, Address: 0x41dd5c, Func Offset: 0xc
	// Line 15, Address: 0x41dd60, Func Offset: 0x10
	// Line 18, Address: 0x41dd84, Func Offset: 0x34
	// Line 15, Address: 0x41dd88, Func Offset: 0x38
	// Line 21, Address: 0x41dd8c, Func Offset: 0x3c
	// Line 18, Address: 0x41dd90, Func Offset: 0x40
	// Line 21, Address: 0x41dd9c, Func Offset: 0x4c
	// Line 28, Address: 0x41dda8, Func Offset: 0x58
	// Line 31, Address: 0x41ddbc, Func Offset: 0x6c
	// Line 28, Address: 0x41ddc0, Func Offset: 0x70
	// Line 31, Address: 0x41ddc8, Func Offset: 0x78
	// Line 34, Address: 0x41dddc, Func Offset: 0x8c
	// Line 37, Address: 0x41dde0, Func Offset: 0x90
	// Line 44, Address: 0x41ddec, Func Offset: 0x9c
	// Line 47, Address: 0x41de00, Func Offset: 0xb0
	// Line 56, Address: 0x41de0c, Func Offset: 0xbc
	// Line 59, Address: 0x41de10, Func Offset: 0xc0
	// Line 66, Address: 0x41de20, Func Offset: 0xd0
	// Line 23, Address: 0x41de28, Func Offset: 0xd8
	// Line 39, Address: 0x41de30, Func Offset: 0xe0
	// Line 66, Address: 0x41de38, Func Offset: 0xe8
	// Line 51, Address: 0x41de3c, Func Offset: 0xec
	// Line 66, Address: 0x41de44, Func Offset: 0xf4
	// Line 62, Address: 0x41de48, Func Offset: 0xf8
	// Line 67, Address: 0x41de4c, Func Offset: 0xfc
	// Func End, Address: 0x41de54, Func Offset: 0x104
}

