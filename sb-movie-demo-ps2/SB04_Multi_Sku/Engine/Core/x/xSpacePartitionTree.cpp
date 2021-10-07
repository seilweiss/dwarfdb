



void remove_empty(cell* c);
void erase_internal(entry_data* e);
void insert_internal(entry_data* e, cell* c, int32 end_depth, float32 x0, float32 y0, float32 x1, float32 y1);
void insert_internal(entry_data* e, float32 x0, float32 y0, float32 x1, float32 y1, float32 width);
void reset_searchid();
void create_cell(cell& c, uint16 parent, int32 cid);
void clear();
void create(float32 minx, float32 miny, float32 maxx, float32 maxy, float32 min_width, float32 max_width, int32 max_entries);

// remove_empty__21xSpacePartitionTree2DFPQ221xSpacePartitionTree2D4cell
// Start address: 0x453340
void xSpacePartitionTree2D::remove_empty(cell* c)
{
	cell* cell_list;
	uint16 parent;
	cell* pc;
	cell* bro;
	cell* end_bro;
	// Line 478, Address: 0x453340, Func Offset: 0
	// Line 479, Address: 0x453344, Func Offset: 0x4
	// Line 481, Address: 0x453350, Func Offset: 0x10
	// Line 483, Address: 0x453364, Func Offset: 0x24
	// Line 487, Address: 0x45337c, Func Offset: 0x3c
	// Line 488, Address: 0x453380, Func Offset: 0x40
	// Line 490, Address: 0x453388, Func Offset: 0x48
	// Line 492, Address: 0x4533a0, Func Offset: 0x60
	// Line 493, Address: 0x4533b0, Func Offset: 0x70
	// Line 495, Address: 0x4533b4, Func Offset: 0x74
	// Line 493, Address: 0x4533b8, Func Offset: 0x78
	// Line 495, Address: 0x4533cc, Func Offset: 0x8c
	// Line 496, Address: 0x4533d8, Func Offset: 0x98
	// Func End, Address: 0x4533e0, Func Offset: 0xa0
}

// erase_internal__21xSpacePartitionTree2DFPQ221xSpacePartitionTree2D10entry_data
// Start address: 0x4533e0
void xSpacePartitionTree2D::erase_internal(entry_data* e)
{
	cell* cell_list;
	entry_node* node_list;
	entry_data* entry_list;
	uint16* owner;
	uint16* end_owner;
	cell* c;
	entry_node* prev;
	entry_node* n;
	uint16 key;
	// Line 422, Address: 0x4533e0, Func Offset: 0
	// Line 444, Address: 0x4533f8, Func Offset: 0x18
	// Line 422, Address: 0x4533fc, Func Offset: 0x1c
	// Line 439, Address: 0x453408, Func Offset: 0x28
	// Line 440, Address: 0x45340c, Func Offset: 0x2c
	// Line 444, Address: 0x453410, Func Offset: 0x30
	// Line 471, Address: 0x45341c, Func Offset: 0x3c
	// Line 454, Address: 0x453424, Func Offset: 0x44
	// Line 471, Address: 0x453428, Func Offset: 0x48
	// Line 454, Address: 0x45342c, Func Offset: 0x4c
	// Line 471, Address: 0x453440, Func Offset: 0x60
	// Line 453, Address: 0x453454, Func Offset: 0x74
	// Line 448, Address: 0x453458, Func Offset: 0x78
	// Line 471, Address: 0x45345c, Func Offset: 0x7c
	// Line 448, Address: 0x453460, Func Offset: 0x80
	// Line 471, Address: 0x453464, Func Offset: 0x84
	// Line 453, Address: 0x45346c, Func Offset: 0x8c
	// Line 471, Address: 0x453470, Func Offset: 0x90
	// Line 455, Address: 0x453474, Func Offset: 0x94
	// Line 471, Address: 0x453478, Func Offset: 0x98
	// Line 459, Address: 0x453488, Func Offset: 0xa8
	// Line 461, Address: 0x45348c, Func Offset: 0xac
	// Line 462, Address: 0x453490, Func Offset: 0xb0
	// Line 471, Address: 0x453498, Func Offset: 0xb8
	// Line 470, Address: 0x4534ac, Func Offset: 0xcc
	// Line 471, Address: 0x4534b0, Func Offset: 0xd0
	// Line 472, Address: 0x4534c8, Func Offset: 0xe8
	// Line 465, Address: 0x4534d4, Func Offset: 0xf4
	// Line 472, Address: 0x4534e0, Func Offset: 0x100
	// Func End, Address: 0x453504, Func Offset: 0x124
}

// insert_internal__21xSpacePartitionTree2DFPQ221xSpacePartitionTree2D10entry_dataPQ221xSpacePartitionTree2D4celliffff
// Start address: 0x453510
void xSpacePartitionTree2D::insert_internal(entry_data* e, cell* c, int32 end_depth, float32 x0, float32 y0, float32 x1, float32 y1)
{
	int32 index;
	float32 dxy;
	float32 cx0;
	float32 cy0;
	float32 cx1;
	float32 cy1;
	int32 depth;
	_class_0 bound_stack[8];
	cell* cell_list;
	entry_node* node_list;
	entry_data* entry_list;
	float32 ccx0;
	float32 ccy0;
	float32 ccx1;
	float32 ccy1;
	// Line 331, Address: 0x453510, Func Offset: 0
	// Line 345, Address: 0x453514, Func Offset: 0x4
	// Line 331, Address: 0x453518, Func Offset: 0x8
	// Line 342, Address: 0x453544, Func Offset: 0x34
	// Line 331, Address: 0x453548, Func Offset: 0x38
	// Line 348, Address: 0x45354c, Func Offset: 0x3c
	// Line 331, Address: 0x453550, Func Offset: 0x40
	// Line 345, Address: 0x453588, Func Offset: 0x78
	// Line 351, Address: 0x45358c, Func Offset: 0x7c
	// Line 343, Address: 0x453590, Func Offset: 0x80
	// Line 352, Address: 0x453594, Func Offset: 0x84
	// Line 344, Address: 0x453598, Func Offset: 0x88
	// Line 345, Address: 0x4535ac, Func Offset: 0x9c
	// Line 353, Address: 0x4535b0, Func Offset: 0xa0
	// Line 344, Address: 0x4535b4, Func Offset: 0xa4
	// Line 352, Address: 0x4535b8, Func Offset: 0xa8
	// Line 353, Address: 0x4535c4, Func Offset: 0xb4
	// Line 358, Address: 0x4535e0, Func Offset: 0xd0
	// Line 378, Address: 0x4535f4, Func Offset: 0xe4
	// Line 379, Address: 0x453634, Func Offset: 0x124
	// Line 382, Address: 0x453638, Func Offset: 0x128
	// Line 386, Address: 0x453668, Func Offset: 0x158
	// Line 394, Address: 0x453680, Func Offset: 0x170
	// Line 386, Address: 0x453684, Func Offset: 0x174
	// Line 397, Address: 0x453688, Func Offset: 0x178
	// Line 398, Address: 0x453698, Func Offset: 0x188
	// Line 399, Address: 0x45369c, Func Offset: 0x18c
	// Line 392, Address: 0x4536a8, Func Offset: 0x198
	// Line 393, Address: 0x4536b0, Func Offset: 0x1a0
	// Line 400, Address: 0x4536b8, Func Offset: 0x1a8
	// Line 397, Address: 0x4536bc, Func Offset: 0x1ac
	// Line 400, Address: 0x4536cc, Func Offset: 0x1bc
	// Line 397, Address: 0x4536d0, Func Offset: 0x1c0
	// Line 401, Address: 0x4536d4, Func Offset: 0x1c4
	// Line 404, Address: 0x4536d8, Func Offset: 0x1c8
	// Line 405, Address: 0x4536e0, Func Offset: 0x1d0
	// Line 409, Address: 0x4536f0, Func Offset: 0x1e0
	// Line 412, Address: 0x4536f8, Func Offset: 0x1e8
	// Line 413, Address: 0x4536fc, Func Offset: 0x1ec
	// Line 414, Address: 0x453700, Func Offset: 0x1f0
	// Line 415, Address: 0x453718, Func Offset: 0x208
	// Line 416, Address: 0x453720, Func Offset: 0x210
	// Line 413, Address: 0x453724, Func Offset: 0x214
	// Line 416, Address: 0x453728, Func Offset: 0x218
	// Line 417, Address: 0x45372c, Func Offset: 0x21c
	// Line 418, Address: 0x45373c, Func Offset: 0x22c
	// Line 361, Address: 0x453748, Func Offset: 0x238
	// Line 418, Address: 0x45374c, Func Offset: 0x23c
	// Line 361, Address: 0x453750, Func Offset: 0x240
	// Line 418, Address: 0x453758, Func Offset: 0x248
	// Line 361, Address: 0x45375c, Func Offset: 0x24c
	// Line 418, Address: 0x45376c, Func Offset: 0x25c
	// Line 366, Address: 0x45378c, Func Offset: 0x27c
	// Line 418, Address: 0x453790, Func Offset: 0x280
	// Line 366, Address: 0x4537a8, Func Offset: 0x298
	// Line 418, Address: 0x4537ac, Func Offset: 0x29c
	// Line 368, Address: 0x4537b8, Func Offset: 0x2a8
	// Line 418, Address: 0x4537c0, Func Offset: 0x2b0
	// Line 387, Address: 0x4537c8, Func Offset: 0x2b8
	// Line 418, Address: 0x4537d0, Func Offset: 0x2c0
	// Line 387, Address: 0x4537d4, Func Offset: 0x2c4
	// Line 418, Address: 0x4537d8, Func Offset: 0x2c8
	// Line 387, Address: 0x4537e0, Func Offset: 0x2d0
	// Line 418, Address: 0x4537f0, Func Offset: 0x2e0
	// Line 387, Address: 0x4537f8, Func Offset: 0x2e8
	// Line 418, Address: 0x453800, Func Offset: 0x2f0
	// Line 387, Address: 0x45380c, Func Offset: 0x2fc
	// Line 418, Address: 0x453810, Func Offset: 0x300
	// Line 387, Address: 0x453814, Func Offset: 0x304
	// Line 418, Address: 0x453818, Func Offset: 0x308
	// Line 387, Address: 0x45382c, Func Offset: 0x31c
	// Line 418, Address: 0x453834, Func Offset: 0x324
	// Line 387, Address: 0x453838, Func Offset: 0x328
	// Line 418, Address: 0x453844, Func Offset: 0x334
	// Line 387, Address: 0x453848, Func Offset: 0x338
	// Line 418, Address: 0x45385c, Func Offset: 0x34c
	// Line 419, Address: 0x453880, Func Offset: 0x370
	// Func End, Address: 0x4538e0, Func Offset: 0x3d0
}

// insert_internal__21xSpacePartitionTree2DFPQ221xSpacePartitionTree2D10entry_datafffff
// Start address: 0x4538e0
void xSpacePartitionTree2D::insert_internal(entry_data* e, float32 x0, float32 y0, float32 x1, float32 y1, float32 width)
{
	float32 scale;
	int32 gx1;
	int32 gy1;
	int32 end_depth;
	int32 gy;
	int32 gx;
	// Line 287, Address: 0x4538e0, Func Offset: 0
	// Line 289, Address: 0x453928, Func Offset: 0x48
	// Line 294, Address: 0x45392c, Func Offset: 0x4c
	// Line 289, Address: 0x453930, Func Offset: 0x50
	// Line 290, Address: 0x45393c, Func Offset: 0x5c
	// Line 294, Address: 0x453948, Func Offset: 0x68
	// Line 290, Address: 0x45394c, Func Offset: 0x6c
	// Line 292, Address: 0x453950, Func Offset: 0x70
	// Line 291, Address: 0x453958, Func Offset: 0x78
	// Line 293, Address: 0x453964, Func Offset: 0x84
	// Line 294, Address: 0x45396c, Func Offset: 0x8c
	// Line 301, Address: 0x453978, Func Offset: 0x98
	// Line 302, Address: 0x4539bc, Func Offset: 0xdc
	// Line 303, Address: 0x4539fc, Func Offset: 0x11c
	// Line 304, Address: 0x453a3c, Func Offset: 0x15c
	// Line 310, Address: 0x453a70, Func Offset: 0x190
	// Line 320, Address: 0x453a90, Func Offset: 0x1b0
	// Line 321, Address: 0x453a9c, Func Offset: 0x1bc
	// Line 322, Address: 0x453aa8, Func Offset: 0x1c8
	// Line 326, Address: 0x453ab8, Func Offset: 0x1d8
	// Line 327, Address: 0x453abc, Func Offset: 0x1dc
	// Line 313, Address: 0x453ac4, Func Offset: 0x1e4
	// Line 327, Address: 0x453ac8, Func Offset: 0x1e8
	// Line 313, Address: 0x453ad8, Func Offset: 0x1f8
	// Line 327, Address: 0x453adc, Func Offset: 0x1fc
	// Line 313, Address: 0x453ae0, Func Offset: 0x200
	// Line 327, Address: 0x453ae8, Func Offset: 0x208
	// Line 322, Address: 0x453b14, Func Offset: 0x234
	// Line 327, Address: 0x453b18, Func Offset: 0x238
	// Line 322, Address: 0x453b1c, Func Offset: 0x23c
	// Line 327, Address: 0x453b24, Func Offset: 0x244
	// Line 322, Address: 0x453b28, Func Offset: 0x248
	// Line 327, Address: 0x453b30, Func Offset: 0x250
	// Line 322, Address: 0x453b34, Func Offset: 0x254
	// Line 327, Address: 0x453b38, Func Offset: 0x258
	// Line 322, Address: 0x453b3c, Func Offset: 0x25c
	// Line 327, Address: 0x453b44, Func Offset: 0x264
	// Line 322, Address: 0x453b48, Func Offset: 0x268
	// Line 327, Address: 0x453b50, Func Offset: 0x270
	// Func End, Address: 0x453bb4, Func Offset: 0x2d4
}

// reset_searchid__21xSpacePartitionTree2DFv
// Start address: 0x453bc0
void xSpacePartitionTree2D::reset_searchid()
{
	entry_data* e;
	entry_data* end;
	// Line 203, Address: 0x453bc0, Func Offset: 0
	// Line 204, Address: 0x453bc8, Func Offset: 0x8
	// Line 205, Address: 0x453be0, Func Offset: 0x20
	// Line 206, Address: 0x453be8, Func Offset: 0x28
	// Line 207, Address: 0x453c08, Func Offset: 0x48
	// Func End, Address: 0x453c10, Func Offset: 0x50
}

// create_cell__21xSpacePartitionTree2DFRQ221xSpacePartitionTree2D4cellUsi
// Start address: 0x453c10
void xSpacePartitionTree2D::create_cell(cell& c, uint16 parent, int32 cid)
{
	cell* pc;
	// Line 168, Address: 0x453c10, Func Offset: 0
	// Line 169, Address: 0x453c14, Func Offset: 0x4
	// Line 172, Address: 0x453c1c, Func Offset: 0xc
	// Line 170, Address: 0x453c20, Func Offset: 0x10
	// Line 172, Address: 0x453c24, Func Offset: 0x14
	// Line 179, Address: 0x453c2c, Func Offset: 0x1c
	// Line 185, Address: 0x453c38, Func Offset: 0x28
	// Line 179, Address: 0x453c3c, Func Offset: 0x2c
	// Line 186, Address: 0x453c40, Func Offset: 0x30
	// Line 179, Address: 0x453c48, Func Offset: 0x38
	// Line 181, Address: 0x453c4c, Func Offset: 0x3c
	// Line 185, Address: 0x453c58, Func Offset: 0x48
	// Line 186, Address: 0x453c70, Func Offset: 0x60
	// Line 188, Address: 0x453c88, Func Offset: 0x78
	// Line 176, Address: 0x453c9c, Func Offset: 0x8c
	// Line 188, Address: 0x453ca4, Func Offset: 0x94
	// Func End, Address: 0x453cac, Func Offset: 0x9c
}

// clear__21xSpacePartitionTree2DFv
// Start address: 0x453cb0
void xSpacePartitionTree2D::clear()
{
	cell* gc;
	cell* end_gc;
	entry_data* fe;
	entry_data* end_fe;
	entry_node* fn;
	entry_node* end_fn;
	int32 grid_size;
	cell* fc;
	cell* end_fc;
	// Line 115, Address: 0x453cb0, Func Offset: 0
	// Line 122, Address: 0x453cc8, Func Offset: 0x18
	// Line 123, Address: 0x453ce8, Func Offset: 0x38
	// Line 124, Address: 0x453cf0, Func Offset: 0x40
	// Line 128, Address: 0x453d10, Func Offset: 0x60
	// Line 129, Address: 0x453d18, Func Offset: 0x68
	// Line 130, Address: 0x453d34, Func Offset: 0x84
	// Line 131, Address: 0x453d58, Func Offset: 0xa8
	// Line 144, Address: 0x453d5c, Func Offset: 0xac
	// Line 145, Address: 0x453d64, Func Offset: 0xb4
	// Line 146, Address: 0x453d78, Func Offset: 0xc8
	// Line 147, Address: 0x453da0, Func Offset: 0xf0
	// Line 150, Address: 0x453da4, Func Offset: 0xf4
	// Line 151, Address: 0x453dac, Func Offset: 0xfc
	// Line 150, Address: 0x453db0, Func Offset: 0x100
	// Line 151, Address: 0x453dc0, Func Offset: 0x110
	// Line 152, Address: 0x453dc8, Func Offset: 0x118
	// Line 153, Address: 0x453de8, Func Offset: 0x138
	// Line 154, Address: 0x453df0, Func Offset: 0x140
	// Line 155, Address: 0x453e10, Func Offset: 0x160
	// Line 156, Address: 0x453e14, Func Offset: 0x164
	// Line 163, Address: 0x453e18, Func Offset: 0x168
	// Line 156, Address: 0x453e1c, Func Offset: 0x16c
	// Line 157, Address: 0x453e24, Func Offset: 0x174
	// Line 163, Address: 0x453e34, Func Offset: 0x184
	// Line 164, Address: 0x453e78, Func Offset: 0x1c8
	// Func End, Address: 0x453e90, Func Offset: 0x1e0
}

// create__21xSpacePartitionTree2DFffffffi
// Start address: 0x453e90
void xSpacePartitionTree2D::create(float32 minx, float32 miny, float32 maxx, float32 maxy, float32 min_width, float32 max_width, int32 max_entries)
{
	xVec2 gsize;
	float32* cs;
	float32* end_cs;
	float32* ics;
	float32* cf;
	// Line 49, Address: 0x453e90, Func Offset: 0
	// Line 51, Address: 0x453e98, Func Offset: 0x8
	// Line 49, Address: 0x453e9c, Func Offset: 0xc
	// Line 50, Address: 0x453eb0, Func Offset: 0x20
	// Line 51, Address: 0x453eb8, Func Offset: 0x28
	// Line 54, Address: 0x453ec4, Func Offset: 0x34
	// Line 55, Address: 0x453f1c, Func Offset: 0x8c
	// Line 56, Address: 0x453f2c, Func Offset: 0x9c
	// Line 57, Address: 0x453f38, Func Offset: 0xa8
	// Line 58, Address: 0x453f98, Func Offset: 0x108
	// Line 62, Address: 0x453fa0, Func Offset: 0x110
	// Line 58, Address: 0x453fa8, Func Offset: 0x118
	// Line 59, Address: 0x453fb0, Func Offset: 0x120
	// Line 62, Address: 0x453fb8, Func Offset: 0x128
	// Line 63, Address: 0x454008, Func Offset: 0x178
	// Line 64, Address: 0x454024, Func Offset: 0x194
	// Line 71, Address: 0x45402c, Func Offset: 0x19c
	// Line 64, Address: 0x454030, Func Offset: 0x1a0
	// Line 71, Address: 0x454034, Func Offset: 0x1a4
	// Line 64, Address: 0x454038, Func Offset: 0x1a8
	// Line 65, Address: 0x454040, Func Offset: 0x1b0
	// Line 66, Address: 0x454044, Func Offset: 0x1b4
	// Line 65, Address: 0x45404c, Func Offset: 0x1bc
	// Line 66, Address: 0x454050, Func Offset: 0x1c0
	// Line 71, Address: 0x454064, Func Offset: 0x1d4
	// Line 72, Address: 0x454084, Func Offset: 0x1f4
	// Line 73, Address: 0x454090, Func Offset: 0x200
	// Line 76, Address: 0x454094, Func Offset: 0x204
	// Line 77, Address: 0x4540a4, Func Offset: 0x214
	// Line 78, Address: 0x4540ac, Func Offset: 0x21c
	// Line 77, Address: 0x4540b0, Func Offset: 0x220
	// Line 80, Address: 0x4540b8, Func Offset: 0x228
	// Line 82, Address: 0x4540c0, Func Offset: 0x230
	// Line 83, Address: 0x4540c4, Func Offset: 0x234
	// Line 82, Address: 0x4540c8, Func Offset: 0x238
	// Line 83, Address: 0x4540cc, Func Offset: 0x23c
	// Line 82, Address: 0x4540d0, Func Offset: 0x240
	// Line 83, Address: 0x4540dc, Func Offset: 0x24c
	// Line 85, Address: 0x4540e0, Func Offset: 0x250
	// Line 83, Address: 0x4540e4, Func Offset: 0x254
	// Line 84, Address: 0x4540ec, Func Offset: 0x25c
	// Line 85, Address: 0x4540f0, Func Offset: 0x260
	// Line 84, Address: 0x4540f4, Func Offset: 0x264
	// Line 85, Address: 0x4540fc, Func Offset: 0x26c
	// Line 75, Address: 0x454114, Func Offset: 0x284
	// Line 85, Address: 0x454128, Func Offset: 0x298
	// Line 75, Address: 0x454134, Func Offset: 0x2a4
	// Line 85, Address: 0x454138, Func Offset: 0x2a8
	// Line 75, Address: 0x45413c, Func Offset: 0x2ac
	// Line 76, Address: 0x454148, Func Offset: 0x2b8
	// Line 91, Address: 0x454154, Func Offset: 0x2c4
	// Line 92, Address: 0x454158, Func Offset: 0x2c8
	// Line 91, Address: 0x45415c, Func Offset: 0x2cc
	// Line 92, Address: 0x454160, Func Offset: 0x2d0
	// Line 94, Address: 0x454174, Func Offset: 0x2e4
	// Line 93, Address: 0x454178, Func Offset: 0x2e8
	// Line 94, Address: 0x45417c, Func Offset: 0x2ec
	// Line 102, Address: 0x454194, Func Offset: 0x304
	// Line 94, Address: 0x454198, Func Offset: 0x308
	// Line 102, Address: 0x45419c, Func Offset: 0x30c
	// Line 103, Address: 0x4541c0, Func Offset: 0x330
	// Line 105, Address: 0x4541e4, Func Offset: 0x354
	// Line 103, Address: 0x4541e8, Func Offset: 0x358
	// Line 105, Address: 0x4541f4, Func Offset: 0x364
	// Line 109, Address: 0x454210, Func Offset: 0x380
	// Line 106, Address: 0x454214, Func Offset: 0x384
	// Line 109, Address: 0x454218, Func Offset: 0x388
	// Line 112, Address: 0x454220, Func Offset: 0x390
	// Func End, Address: 0x454238, Func Offset: 0x3a8
}

