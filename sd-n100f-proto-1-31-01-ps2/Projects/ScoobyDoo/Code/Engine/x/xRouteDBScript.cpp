
typedef int32(*type_0)(int32);
typedef void(*type_1)(int32, int32);
typedef int32(*type_2)(int32, int32, int32, int32);
typedef int32(*type_3)(int32, int32);
typedef int32(*type_4)(int32, int32, int32);
typedef int32(*type_5)(int32, int32);
typedef int32(*type_6)(int32, int32, int32);
typedef int32(*type_7)(int32, int32, int32);
typedef int32(*type_8)(int32, int32);
typedef int32(*type_9)(int32, int32, int32);
typedef void(*type_10)(int32, int32);
typedef int32(*type_11)();
typedef void(*type_12)(int32);
typedef void(*type_13)(int32);


void(*xScriptRouteDBSetRouteUseage)(int32, int32);
int32(*xScriptRouteDBRouteToMemoryPosition)(int32, int32, int32);
int32(*xScriptRouteDBRouteNavToNav)(int32, int32);
int32(*xScriptRouteDBRouteToNavigationPoint)(int32, int32, int32);
int32(*xScriptRouteDBRouteToRTObj)(int32, int32, int32);
int32(*xScriptRouteDBRouteMarkerToMarker)(int32, int32);
int32(*xScriptRouteDBRouteToMarker)(int32, int32, int32);
int32(*xScriptRouteDBRouteToPlayer)(int32, int32);
int32(*xScriptRouteDBRouteToActor)(int32, int32, int32, int32);
void(*xScriptRouteDBRouteAppend)(int32, int32);
int32(*xScriptRouteDBRouteStatus)(int32);
void(*xScriptRouteDBRouteDestroy)(int32);
void(*xScriptRouteDBRouteDraw)(int32);
int32(*xScriptRouteDBRouteCreate)();

void xScriptRouteDBSetRouteUseage(int32 id, int32 useageType);
int32 xScriptRouteDBRouteToMemoryPosition(int32 objectType, int32 actorID, int32 index);
int32 xScriptRouteDBRouteNavToNav(int32 na, int32 nb);
int32 xScriptRouteDBRouteToNavigationPoint(int32 objectType, int32 actorID, int32 index);
int32 xScriptRouteDBRouteToRTObj(int32 actorType, int32 actorID, int32 objIndex);
int32 xScriptRouteDBRouteMarkerToMarker(int32 ma, int32 mb);
int32 xScriptRouteDBRouteToMarker(int32 objectType, int32 actorID, int32 index);
int32 xScriptRouteDBRouteToPlayer(int32 objectID, int32 actorID);
int32 xScriptRouteDBRouteToActor(int32 fromObjectType, int32 fromActorID, int32 toObjectType, int32 toActorID);
void xScriptRouteDBRouteAppend(int32 routeID, int32 routeAppendID);
int32 xScriptRouteDBRouteStatus(int32 id);
void xScriptRouteDBRouteDestroy(int32 routeID);
void xScriptRouteDBRouteDraw(int32 routeID);
int32 xScriptRouteDBRouteCreate();
void xRouteDBRegisterExternals();

// xScriptRouteDBSetRouteUseage__Fii
// Start address: 0x3f0c20
void xScriptRouteDBSetRouteUseage(int32 id, int32 useageType)
{
	// Line 115, Address: 0x3f0c20, Func Offset: 0
	// Line 116, Address: 0x3f0c28, Func Offset: 0x8
	// Line 117, Address: 0x3f0c30, Func Offset: 0x10
	// Func End, Address: 0x3f0c40, Func Offset: 0x20
}

// xScriptRouteDBRouteToMemoryPosition__Fiii
// Start address: 0x3f0c40
int32 xScriptRouteDBRouteToMemoryPosition(int32 objectType, int32 actorID, int32 index)
{
	// Line 110, Address: 0x3f0c40, Func Offset: 0
	// Line 111, Address: 0x3f0c48, Func Offset: 0x8
	// Line 112, Address: 0x3f0c50, Func Offset: 0x10
	// Func End, Address: 0x3f0c60, Func Offset: 0x20
}

// xScriptRouteDBRouteNavToNav__Fii
// Start address: 0x3f0c60
int32 xScriptRouteDBRouteNavToNav(int32 na, int32 nb)
{
	// Line 105, Address: 0x3f0c60, Func Offset: 0
	// Line 106, Address: 0x3f0c68, Func Offset: 0x8
	// Line 107, Address: 0x3f0c70, Func Offset: 0x10
	// Func End, Address: 0x3f0c80, Func Offset: 0x20
}

// xScriptRouteDBRouteToNavigationPoint__Fiii
// Start address: 0x3f0c80
int32 xScriptRouteDBRouteToNavigationPoint(int32 objectType, int32 actorID, int32 index)
{
	// Line 100, Address: 0x3f0c80, Func Offset: 0
	// Line 101, Address: 0x3f0c88, Func Offset: 0x8
	// Line 102, Address: 0x3f0c90, Func Offset: 0x10
	// Func End, Address: 0x3f0ca0, Func Offset: 0x20
}

// xScriptRouteDBRouteToRTObj__Fiii
// Start address: 0x3f0ca0
int32 xScriptRouteDBRouteToRTObj(int32 actorType, int32 actorID, int32 objIndex)
{
	// Line 95, Address: 0x3f0ca0, Func Offset: 0
	// Line 96, Address: 0x3f0ca8, Func Offset: 0x8
	// Line 97, Address: 0x3f0cb0, Func Offset: 0x10
	// Func End, Address: 0x3f0cc0, Func Offset: 0x20
}

// xScriptRouteDBRouteMarkerToMarker__Fii
// Start address: 0x3f0cc0
int32 xScriptRouteDBRouteMarkerToMarker(int32 ma, int32 mb)
{
	// Line 90, Address: 0x3f0cc0, Func Offset: 0
	// Line 91, Address: 0x3f0cc8, Func Offset: 0x8
	// Line 92, Address: 0x3f0cd0, Func Offset: 0x10
	// Func End, Address: 0x3f0ce0, Func Offset: 0x20
}

// xScriptRouteDBRouteToMarker__Fiii
// Start address: 0x3f0ce0
int32 xScriptRouteDBRouteToMarker(int32 objectType, int32 actorID, int32 index)
{
	// Line 85, Address: 0x3f0ce0, Func Offset: 0
	// Line 86, Address: 0x3f0ce8, Func Offset: 0x8
	// Line 87, Address: 0x3f0cf0, Func Offset: 0x10
	// Func End, Address: 0x3f0d00, Func Offset: 0x20
}

// xScriptRouteDBRouteToPlayer__Fii
// Start address: 0x3f0d00
int32 xScriptRouteDBRouteToPlayer(int32 objectID, int32 actorID)
{
	// Line 80, Address: 0x3f0d00, Func Offset: 0
	// Line 81, Address: 0x3f0d08, Func Offset: 0x8
	// Line 82, Address: 0x3f0d10, Func Offset: 0x10
	// Func End, Address: 0x3f0d20, Func Offset: 0x20
}

// xScriptRouteDBRouteToActor__Fiiii
// Start address: 0x3f0d20
int32 xScriptRouteDBRouteToActor(int32 fromObjectType, int32 fromActorID, int32 toObjectType, int32 toActorID)
{
	// Line 75, Address: 0x3f0d20, Func Offset: 0
	// Line 76, Address: 0x3f0d28, Func Offset: 0x8
	// Line 77, Address: 0x3f0d30, Func Offset: 0x10
	// Func End, Address: 0x3f0d40, Func Offset: 0x20
}

// xScriptRouteDBRouteAppend__Fii
// Start address: 0x3f0d40
void xScriptRouteDBRouteAppend(int32 routeID, int32 routeAppendID)
{
	// Line 70, Address: 0x3f0d40, Func Offset: 0
	// Line 71, Address: 0x3f0d48, Func Offset: 0x8
	// Line 72, Address: 0x3f0d50, Func Offset: 0x10
	// Func End, Address: 0x3f0d60, Func Offset: 0x20
}

// xScriptRouteDBRouteStatus__Fi
// Start address: 0x3f0d60
int32 xScriptRouteDBRouteStatus(int32 id)
{
	// Line 65, Address: 0x3f0d60, Func Offset: 0
	// Line 66, Address: 0x3f0d68, Func Offset: 0x8
	// Line 67, Address: 0x3f0d70, Func Offset: 0x10
	// Func End, Address: 0x3f0d80, Func Offset: 0x20
}

// xScriptRouteDBRouteDestroy__Fi
// Start address: 0x3f0d80
void xScriptRouteDBRouteDestroy(int32 routeID)
{
	// Line 60, Address: 0x3f0d80, Func Offset: 0
	// Line 61, Address: 0x3f0d88, Func Offset: 0x8
	// Line 62, Address: 0x3f0d90, Func Offset: 0x10
	// Func End, Address: 0x3f0da0, Func Offset: 0x20
}

// xScriptRouteDBRouteDraw__Fi
// Start address: 0x3f0da0
void xScriptRouteDBRouteDraw(int32 routeID)
{
	// Line 55, Address: 0x3f0da0, Func Offset: 0
	// Line 56, Address: 0x3f0da8, Func Offset: 0x8
	// Line 57, Address: 0x3f0db0, Func Offset: 0x10
	// Func End, Address: 0x3f0dc0, Func Offset: 0x20
}

// xScriptRouteDBRouteCreate__Fv
// Start address: 0x3f0dc0
int32 xScriptRouteDBRouteCreate()
{
	// Line 50, Address: 0x3f0dc0, Func Offset: 0
	// Line 51, Address: 0x3f0dc8, Func Offset: 0x8
	// Line 52, Address: 0x3f0dd0, Func Offset: 0x10
	// Func End, Address: 0x3f0de0, Func Offset: 0x20
}

// xRouteDBRegisterExternals__Fv
// Start address: 0x3f0de0
void xRouteDBRegisterExternals()
{
	// Line 30, Address: 0x3f0de0, Func Offset: 0
	// Line 32, Address: 0x3f0de8, Func Offset: 0x8
	// Line 33, Address: 0x3f0e04, Func Offset: 0x24
	// Line 34, Address: 0x3f0e20, Func Offset: 0x40
	// Line 35, Address: 0x3f0e3c, Func Offset: 0x5c
	// Line 36, Address: 0x3f0e58, Func Offset: 0x78
	// Line 37, Address: 0x3f0e74, Func Offset: 0x94
	// Line 38, Address: 0x3f0e90, Func Offset: 0xb0
	// Line 39, Address: 0x3f0eac, Func Offset: 0xcc
	// Line 40, Address: 0x3f0ec8, Func Offset: 0xe8
	// Line 41, Address: 0x3f0ee4, Func Offset: 0x104
	// Line 42, Address: 0x3f0f00, Func Offset: 0x120
	// Line 43, Address: 0x3f0f1c, Func Offset: 0x13c
	// Line 44, Address: 0x3f0f38, Func Offset: 0x158
	// Line 45, Address: 0x3f0f54, Func Offset: 0x174
	// Line 47, Address: 0x3f0f70, Func Offset: 0x190
	// Func End, Address: 0x3f0f80, Func Offset: 0x1a0
}

