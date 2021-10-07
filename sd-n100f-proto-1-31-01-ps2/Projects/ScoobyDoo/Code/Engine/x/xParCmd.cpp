typedef struct tagParCmd_Accelerate;
typedef struct tagParCmd_Source;
typedef struct xParCmd;
typedef struct tagParCmd_RandomAccel;
typedef struct tagParCmd_CopyVertexB;
typedef struct tagParCmd_Texture;
typedef struct tagParCmd_TargetColor;
typedef struct tagParCmd_KillOld;
typedef struct tagParCmd_DisableCmd;
typedef struct tagXStreamMDSDirectory;
typedef enum eParCmdTag;
typedef struct tagParCmd_TargetSize;
typedef struct tagParCmd_RandomDisplace;
typedef struct tagParCmd_Damping;
typedef struct tagParCmd_Move;
typedef struct tagParCmd_KillInvis;
typedef struct tagParCmdList;
typedef struct tagParCmd_KillCmd;
typedef struct XStreamHeader;
typedef struct tagParCmd_Vortex;
typedef struct Vector3D;
typedef struct tagParCmd_ModulateColor;
typedef struct tagParCmd_Follow;
typedef struct tagParCmd_RandomVelocity;
typedef struct tagParCmd_LimitVelocity;
typedef struct tagParCmd_KillSlow;
typedef struct tagParCmd_SpawnVFX;
typedef struct tagParCmd_EnableCmd;
typedef struct tagXStreamDirectoryEntry;
typedef struct tagParCmd_Friction;
typedef struct tagParCmd_Emitter;
typedef struct tagxParSys;
typedef struct tagParCmd_Restore;
typedef struct xPar;
typedef struct tagParCmd_Explosion;
typedef struct tagParCmd_KillBox;
typedef struct tagParCmd_GravitateCmd;
typedef struct tagParCmd_OrbitLine;
typedef struct tagParCmd_Jet;
typedef struct tagParCmd_Sink;
typedef struct tagParCmd_RotMove;
typedef struct tagParCmd_KillPlane;
typedef struct tagParCmd_Bounce;
typedef struct tagParCmd_OrbitPoint;
typedef struct tagParCmd_SinkVelocity;
typedef struct tagParCmd_Header;
typedef struct tagParCmd_Turbulence;

typedef void(*type_39)(xParCmd*, tagxParSys*, uint32);

typedef tagParCmd_OrbitPoint type_0[1];
typedef uint8 type_1[3];
typedef tagParCmd_SpawnVFX type_2[37];
typedef uint8 type_3[3];
typedef tagParCmd_TargetColor type_4[2];
typedef uint8 type_5[3];
typedef uint8 type_6[3];
typedef uint8 type_7[3];
typedef void* type_8[38];
typedef uint8 type_9[4];
typedef uint8 type_10[3];
typedef uint8 type_11[4];
typedef tagParCmd_KillCmd type_12[2];
typedef uint8 type_13[3];
typedef tagParCmd_Follow type_14[2];
typedef tagXStreamDirectoryEntry type_15[1000];
typedef tagParCmd_RandomVelocity type_16[2];
typedef tagParCmd_Texture type_17[37];
typedef uint8 type_18[3];
typedef tagParCmd_Friction type_19[2];
typedef tagParCmd_Header type_20[2];
typedef uint8 type_21[3];
typedef uint8 type_22[3];
typedef tagParCmd_Move type_23[37];
typedef tagParCmd_LimitVelocity type_24[2];
typedef tagParCmd_SinkVelocity type_25[2];
typedef tagParCmd_ModulateColor type_26[2];
typedef uint8 type_27[3];
typedef tagParCmd_Accelerate type_28[37];
typedef uint8 type_29[3];
typedef uint8 type_30[2];
typedef tagParCmd_Damping type_31[2];
typedef uint8 type_32[3];
typedef tagParCmd_RandomAccel type_33[2];
typedef uint8 type_34[3];
typedef tagParCmd_KillPlane type_35[5];
typedef uint8 type_36[3];
typedef tagParCmd_TargetSize type_37[2];
typedef uint8 type_38[2];
typedef void(*type_40)(xParCmd*, tagxParSys*, uint32)[38];
typedef tagParCmdList type_41[50];
typedef int8 type_42[2048];
typedef tagParCmd_DisableCmd type_43[2];
typedef tagParCmd_GravitateCmd type_44[2];
typedef uint8 type_45[3];
typedef uint8 type_46[3];
typedef tagParCmd_Restore type_47[2];
typedef tagParCmd_KillInvis type_48[1];
typedef uint8 type_49[3];
typedef uint8 type_50[3];
typedef tagParCmd_KillSlow type_51[2];
typedef tagParCmd_Bounce type_52[10];
typedef uint8 type_53[3];
typedef xParCmd type_54[250];
typedef uint8 type_55[2];
typedef tagParCmd_OrbitLine type_56[2];
typedef tagParCmd_KillBox type_57[2];
typedef uint8 type_58[3];
typedef tagParCmd_Source type_59[2];
typedef uint8 type_60[4];
typedef Vector3D type_61[2];
typedef uint8 type_62[3];
typedef int32 type_63[2];
typedef uint8 type_64[4];
typedef uint8 type_65[3];
typedef int32 type_66[2][38];
typedef tagParCmd_Emitter type_67[47];
typedef uint8 type_68[3];
typedef uint8 type_69[3];
typedef tagParCmd_Explosion type_70[2];
typedef uint8 type_71[2];
typedef tagParCmd_RandomDisplace type_72[2];
typedef int8 type_73[128];
typedef uint8 type_74[4];
typedef tagParCmd_RotMove type_75[2];
typedef int8 type_76[4];
typedef tagParCmd_Vortex type_77[2];
typedef uint8 type_78[4];
typedef uint8 type_79[2];
typedef uint8 type_80[2];
typedef uint8 type_81[3];
typedef uint8 type_82[4];
typedef uint8 type_83[3];
typedef tagParCmd_Jet type_84[2];
typedef uint8 type_85[3];
typedef tagParCmd_EnableCmd type_86[2];
typedef uint8 type_87[3];
typedef tagParCmd_Sink type_88[2];
typedef float32 type_89[2];
typedef tagParCmd_Turbulence type_90[2];
typedef float32 type_91[2];
typedef uint8 type_92[2];
typedef tagParCmd_KillOld type_93[37];
typedef tagParCmd_CopyVertexB type_94[2];

struct tagParCmd_Accelerate
{
	uint8 m_free;
	uint8 m_pad[3];
	Vector3D m_acc;
	uint32 m_freq;
	uint32 m_freqTime;
};

struct tagParCmd_Source
{
	uint8 m_free;
	uint8 m_pad[3];
};

struct xParCmd
{
	uint8 m_tag;
	uint8 m_flag;
	int16 m_count;
	void* m_method;
	void* m_data;
	xParCmd* m_next;
	xParCmd* m_prev;
};

struct tagParCmd_RandomAccel
{
	uint8 m_free;
	uint8 m_pad[3];
};

struct tagParCmd_CopyVertexB
{
	uint8 m_free;
	uint8 m_pad[3];
};

struct tagParCmd_Texture
{
	float32 m_x1;
	float32 m_y1;
	float32 m_x2;
	float32 m_y2;
	int8 m_texBirth;
	uint8 m_texType;
	uint8 m_texAnim;
	uint8 m_texDir;
	Vector3D m_minVel;
	int16 m_animCount;
	int16 m_animWait;
	float32 m_unitW;
	float32 m_unitH;
	float32 m_unitRW;
	uint8 m_pad;
	uint8 m_unitCount;
	uint8 m_columns;
	uint8 m_rows;
};

struct tagParCmd_TargetColor
{
	uint8 m_free;
	uint8 m_pad[3];
	uint8 m_targetColor[4];
	uint8 m_velocity[4];
};

struct tagParCmd_KillOld
{
	uint8 m_free;
	uint8 m_pad[3];
	int32 m_ageLimit;
};

struct tagParCmd_DisableCmd
{
	uint8 m_free;
	uint8 m_pad[3];
	int32 m_countdownToDisable;
	xParCmd* m_cmdToDisable;
};

struct tagXStreamMDSDirectory
{
	uint32 count;
	tagXStreamDirectoryEntry directory[1000];
};

enum eParCmdTag
{
	eParCmdHeaderTag,
	eParCmdBounceTag,
	eParCmdCopyVertexBTag,
	eParCmdDampingTag,
	eParCmdExplosionTag,
	eParCmdFollowTag,
	eParCmdGravitateTag,
	eParCmdJetTag,
	eParCmdMoveTag,
	eParCmdOrbitLineTag,
	eParCmdOrbitPointTag,
	eParCmdRandomAccelTag,
	eParCmdRandomDisplaceTag,
	eParCmdRandomVelocityTag,
	eParCmdRestoreTag,
	eParCmdSinkTag,
	eParCmdSinkVelocityTag,
	eParCmdSourceTag,
	eParCmdTargetColorTag,
	eParCmdTargetSizeTag,
	eParCmdVortexTag,
	eParCmdFrictionTag,
	eParCmdKillSlowTag,
	eParCmdKillOldTag,
	eParCmdAccelerateTag,
	eParCmdEmitterTag,
	eParCmdKillCmdTag,
	eParCmdDisableCmdTag,
	eParCmdEnableCmdTag,
	eParCmdLimitVelocityTag,
	eParCmdKillBoxTag,
	eParCmdSpawnVFXTag,
	eParCmdKillPlaneTag,
	eParCmdRotMoveTag,
	eParCmdTextureTag,
	eParCmdKillInvisTag,
	eParCmdTurbulenceTag,
	eParCmdModulateColorTag,
	eParCmdTagCount
};

struct tagParCmd_TargetSize
{
	uint8 m_free;
	uint8 m_pad[3];
};

struct tagParCmd_RandomDisplace
{
	uint8 m_free;
	uint8 m_minAge;
	uint8 m_delayCount;
	uint8 m_delay;
	Vector3D m_vel;
};

struct tagParCmd_Damping
{
	uint8 m_free;
	uint8 m_pad[3];
};

struct tagParCmd_Move
{
	uint8 m_free;
	uint8 m_pad[3];
	int32 m_dt;
};

struct tagParCmd_KillInvis
{
	uint8 m_free;
	uint8 m_pad;
	int16 m_ageMin;
};

struct tagParCmdList
{
	int32 m_numCmd;
	xParCmd* m_cmd;
	xParCmd* m_lastCmd;
	tagParCmdList* m_prev;
	tagParCmdList* m_next;
};

struct tagParCmd_KillCmd
{
	uint8 m_free;
	uint8 m_pad[3];
	int32 m_countdownToKill;
	xParCmd* m_cmdToKill;
};

struct XStreamHeader
{
	uint32 id;
	uint32 versionID;
	uint8 month;
	uint8 day;
	uint8 hour;
	uint8 minute;
	uint32 mdsOffset;
	uint32 mdsLength;
	tagXStreamMDSDirectory directory;
	int8 safety[2048];
};

struct tagParCmd_Vortex
{
	uint8 m_free;
	uint8 m_pad[3];
};

struct Vector3D
{
	float32 x;
	float32 y;
	float32 z;
};

struct tagParCmd_ModulateColor
{
	uint8 m_free;
	uint8 m_pad[2];
	uint8 m_flags;
	int16 m_ageMin;
	int16 m_ageMax;
};

struct tagParCmd_Follow
{
	uint8 m_free;
	uint8 m_pad[3];
};

struct tagParCmd_RandomVelocity
{
	uint8 m_free;
	uint8 m_pad[3];
};

struct tagParCmd_LimitVelocity
{
	uint8 m_free;
	uint8 m_pad[3];
	Vector3D m_maxVelocity;
};

struct tagParCmd_KillSlow
{
	uint8 m_free;
	uint8 m_pad[2];
	uint8 m_velAbs;
	Vector3D m_velMin;
};

struct tagParCmd_SpawnVFX
{
	uint8 m_free;
	uint8 m_vfxType;
	uint8 m_mode;
	uint8 m_delay;
	uint8 m_delayCount;
	uint8 m_spawnProbability;
	uint16 m_maxAge;
	uint8 m_displace[3];
	uint8 m_pad;
};

struct tagParCmd_EnableCmd
{
	uint8 m_free;
	uint8 m_pad[3];
};

struct tagXStreamDirectoryEntry
{
	uint32 id;
	uint32 type;
	uint32 offset;
	uint32 length;
};

struct tagParCmd_Friction
{
	uint8 m_free;
	uint8 m_pad[3];
	Vector3D m_friction;
};

struct tagParCmd_Emitter
{
	uint8 m_free;
	uint16 m_emitLifeRandom;
	uint8 m_emitMode;
	int32 m_emitType;
	int32 m_emitAmount;
	int32 m_emitAmountRangeMin;
	int32 m_emitAmountRangeMax;
	uint8 m_emitCVel[4];
	uint8 m_emitColor[4];
	float32 m_emitSize;
	float32 m_emitSizeRangeMin;
	float32 m_emitSizeRangeMax;
	float32 m_emitSizeVel;
	Vector3D m_emitVel;
	Vector3D m_emitVelVar;
	Vector3D m_origin;
	Vector3D m_p1;
	Vector3D m_p2;
	xParCmd* m_cmdTex;
	uint16 m_delayCount;
	uint16 m_delay;
};

struct tagxParSys
{
	uint32 m_idx;
	xPar* m_root;
	xPar* m_dead;
	int32 m_num_of_particles;
	tagParCmdList* m_cmd;
	uint8 m_alive;
	uint8 m_killWhenDead;
	uint8 m_active;
	uint8 m_visible;
	uint8 m_culled;
	uint8 m_deadGlobalPool;
	uint8 m_pad[2];
};

struct tagParCmd_Restore
{
	uint8 m_free;
	uint8 m_pad[3];
};

struct xPar
{
	xPar* m_next;
	xPar* m_prev;
	Vector3D m_pos;
	Vector3D m_vel;
	Vector3D m_acc;
	float32 m_size;
	float32 m_sizeVel;
	int16 m_lifetime;
	uint8 m_flag;
	uint8 m_mode;
	uint8 m_c[4];
	int8 m_cvel[4];
	uint8 m_c1[4];
	uint8 m_c2[4];
	uint8 m_rotdeg[3];
	uint8 m_texIdx;
	float32 m_uva[2];
	float32 m_uvb[2];
};

struct tagParCmd_Explosion
{
	uint8 m_free;
	uint8 m_pad[3];
	Vector3D m_center;
	float32 m_velocity;
	float32 m_magnitude;
	float32 m_lifetime;
	float32 m_age;
};

struct tagParCmd_KillBox
{
	uint8 m_free;
	uint8 m_pad[2];
	uint8 m_killOut;
	Vector3D m_p[2];
};

struct tagParCmd_GravitateCmd
{
	uint8 m_free;
	uint8 m_pad[3];
};

struct tagParCmd_OrbitLine
{
	uint8 m_free;
	uint8 m_pad[3];
};

struct tagParCmd_Jet
{
	uint8 m_free;
	uint8 m_pad[3];
	Vector3D m_center;
	Vector3D m_acc;
	float32 m_gravity;
	float32 m_epsilon;
	float32 m_maxRadiusSqr;
};

struct tagParCmd_Sink
{
	uint8 m_free;
	uint8 m_pad[3];
};

struct tagParCmd_RotMove
{
	uint8 m_free;
	uint8 m_rotadjust[3];
};

struct tagParCmd_KillPlane
{
	uint8 m_free;
	uint8 m_pad[2];
	uint8 m_killBelow;
	Vector3D m_plane;
};

struct tagParCmd_Bounce
{
	uint8 m_free;
	uint8 m_pad[2];
	uint8 m_noStatic;
	Vector3D m_plane;
	Vector3D m_dampVelPercent;
	uint32 m_sndAssetID;
};

struct tagParCmd_OrbitPoint
{
	uint8 m_free;
	uint8 m_pad[3];
	Vector3D m_center;
	float32 m_gravity;
	float32 m_epsilon;
	float32 m_maxRadiusSqr;
};

struct tagParCmd_SinkVelocity
{
	uint8 m_free;
	uint8 m_pad[3];
};

struct tagParCmd_Header
{
	uint8 m_free;
	uint8 m_pad[3];
};

struct tagParCmd_Turbulence
{
	uint8 m_free;
	uint8 m_pad[2];
	uint8 m_dirSinCos;
	float32 m_ageMin;
	float32 m_ageMax;
	float32 m_lift;
	float32 m_max_swirl_radius;
	float32 m_currentSpin;
	float32 m_spinRate;
};

uint32 sParCmdListPoolCount;
tagParCmdList sParCmdListPool[50];
tagParCmdList* sParCmdListDead;
uint32 sParCmdPoolCount;
xParCmd sParCmdPool[250];
xParCmd* sParCmdDead;
tagParCmd_Header sParCmdHeader[2];
tagParCmd_Bounce sParCmdBounce[10];
tagParCmd_CopyVertexB sParCmdCopyVertexB[2];
tagParCmd_Damping sParCmdDamping[2];
tagParCmd_Explosion sParCmdExplosion[2];
tagParCmd_Follow sParCmdFollow[2];
tagParCmd_GravitateCmd sParCmdGravitate[2];
tagParCmd_Jet sParCmdJet[2];
tagParCmd_Move sParCmdMove[37];
tagParCmd_OrbitLine sParCmdOrbitLine[2];
tagParCmd_OrbitPoint sParCmdOrbitPoint[1];
tagParCmd_RandomAccel sParCmdRandomAccel[2];
tagParCmd_RandomDisplace sParCmdRandomDisplace[2];
tagParCmd_RandomVelocity sParCmdRandomVelocity[2];
tagParCmd_Restore sParCmdRestore[2];
tagParCmd_Sink sParCmdSink[2];
tagParCmd_SinkVelocity sParCmdSinkVelocity[2];
tagParCmd_Source sParCmdSource[2];
tagParCmd_TargetColor sParCmdTargetColor[2];
tagParCmd_TargetSize sParCmdTargetSize[2];
tagParCmd_Vortex sParCmdVortex[2];
tagParCmd_Friction sParCmdFriction[2];
tagParCmd_KillSlow sParCmdKillSlow[2];
tagParCmd_KillOld sParCmdKillOld[37];
tagParCmd_Accelerate sParCmdAccelerate[37];
tagParCmd_Emitter sParCmdEmitter[47];
tagParCmd_KillCmd sParCmdKillCmd[2];
tagParCmd_DisableCmd sParCmdDisableCmd[2];
tagParCmd_EnableCmd sParCmdEnableCmd[2];
tagParCmd_LimitVelocity sParCmdLimitVelocity[2];
tagParCmd_KillBox sParCmdKillBox[2];
tagParCmd_SpawnVFX sParCmdSpawnVFX[37];
tagParCmd_KillPlane sParCmdKillPlane[5];
tagParCmd_RotMove sParCmdRotMove[2];
tagParCmd_Texture sParCmdTexture[37];
tagParCmd_KillInvis sParCmdKillInvis[1];
tagParCmd_Turbulence sParCmdTurbulence[2];
tagParCmd_ModulateColor sParCmdModulateColor[2];
int32 sParCmdDataInfo[2][38];
void* sParCmdDataPool[38];
void(*gParCmdExeTable)(xParCmd*, tagxParSys*, uint32)[38];
int8 vAssertBuf2[128];
XStreamHeader currentHeader;

xParCmd* xParCmdListAddCmd(tagParCmdList* list, eParCmdTag cmdtype);
void xParCmdListExecute(tagParCmdList* list, tagxParSys* ps, uint32 dt);
void xParCmdListInit(tagParCmdList* list);
xParCmd* xParCmdAlloc();
void xParCmdMemInit();
void xParCmdListFree(tagParCmdList* cmdlist);
tagParCmdList* xParCmdListAlloc();
void xParCmdListMemInit();
void* xParCmdDataAlloc(int32 cmdDataType);
void xParCmdDataMemInit();

// xParCmdListAddCmd__FP13tagParCmdList10eParCmdTag
// Start address: 0x34a380
xParCmd* xParCmdListAddCmd(tagParCmdList* list, eParCmdTag cmdtype)
{
	xParCmd* cmd;
	// Line 676, Address: 0x34a380, Func Offset: 0
	// Line 679, Address: 0x34a39c, Func Offset: 0x1c
	// Line 681, Address: 0x34a49c, Func Offset: 0x11c
	// Line 683, Address: 0x34a4a4, Func Offset: 0x124
	// Line 684, Address: 0x34a4e8, Func Offset: 0x168
	// Line 687, Address: 0x34a4f0, Func Offset: 0x170
	// Line 689, Address: 0x34a504, Func Offset: 0x184
	// Line 690, Address: 0x34a508, Func Offset: 0x188
	// Func End, Address: 0x34a524, Func Offset: 0x1a4
}

// xParCmdListExecute__FP13tagParCmdListP10tagxParSysUi
// Start address: 0x34a530
void xParCmdListExecute(tagParCmdList* list, tagxParSys* ps, uint32 dt)
{
	xParCmd* idx;
	// Line 598, Address: 0x34a530, Func Offset: 0
	// Line 605, Address: 0x34a550, Func Offset: 0x20
	// Line 606, Address: 0x34a5f0, Func Offset: 0xc0
	// Line 608, Address: 0x34a690, Func Offset: 0x160
	// Line 610, Address: 0x34a694, Func Offset: 0x164
	// Line 612, Address: 0x34a69c, Func Offset: 0x16c
	// Line 616, Address: 0x34a6bc, Func Offset: 0x18c
	// Line 618, Address: 0x34a6c8, Func Offset: 0x198
	// Line 619, Address: 0x34a6e0, Func Offset: 0x1b0
	// Line 622, Address: 0x34a6e8, Func Offset: 0x1b8
	// Line 623, Address: 0x34a6fc, Func Offset: 0x1cc
	// Line 626, Address: 0x34a700, Func Offset: 0x1d0
	// Line 628, Address: 0x34a70c, Func Offset: 0x1dc
	// Line 629, Address: 0x34a718, Func Offset: 0x1e8
	// Line 631, Address: 0x34a724, Func Offset: 0x1f4
	// Line 637, Address: 0x34a730, Func Offset: 0x200
	// Line 638, Address: 0x34a738, Func Offset: 0x208
	// Line 640, Address: 0x34a740, Func Offset: 0x210
	// Func End, Address: 0x34a75c, Func Offset: 0x22c
}

// xParCmdListInit__FP13tagParCmdList
// Start address: 0x34a760
void xParCmdListInit(tagParCmdList* list)
{
	// Line 575, Address: 0x34a760, Func Offset: 0
	// Line 576, Address: 0x34a764, Func Offset: 0x4
	// Line 577, Address: 0x34a768, Func Offset: 0x8
	// Line 578, Address: 0x34a76c, Func Offset: 0xc
	// Func End, Address: 0x34a774, Func Offset: 0x14
}

// xParCmdAlloc__Fv
// Start address: 0x34a780
xParCmd* xParCmdAlloc()
{
	xParCmd* l;
	// Line 473, Address: 0x34a780, Func Offset: 0
	// Line 476, Address: 0x34a788, Func Offset: 0x8
	// Line 478, Address: 0x34a794, Func Offset: 0x14
	// Line 479, Address: 0x34a7ac, Func Offset: 0x2c
	// Line 482, Address: 0x34a7b8, Func Offset: 0x38
	// Line 483, Address: 0x34a860, Func Offset: 0xe0
	// Line 486, Address: 0x34a86c, Func Offset: 0xec
	// Line 489, Address: 0x34a870, Func Offset: 0xf0
	// Line 490, Address: 0x34a878, Func Offset: 0xf8
	// Line 493, Address: 0x34a880, Func Offset: 0x100
	// Line 494, Address: 0x34a884, Func Offset: 0x104
	// Line 498, Address: 0x34a888, Func Offset: 0x108
	// Func End, Address: 0x34a898, Func Offset: 0x118
}

// xParCmdMemInit__Fv
// Start address: 0x34a8a0
void xParCmdMemInit()
{
	xParCmd* cmd;
	int32 i;
	// Line 453, Address: 0x34a8a0, Func Offset: 0
	// Line 455, Address: 0x34a8ac, Func Offset: 0xc
	// Line 457, Address: 0x34a8c4, Func Offset: 0x24
	// Line 458, Address: 0x34a8c8, Func Offset: 0x28
	// Line 460, Address: 0x34a8cc, Func Offset: 0x2c
	// Line 462, Address: 0x34a8d8, Func Offset: 0x38
	// Line 463, Address: 0x34a8e0, Func Offset: 0x40
	// Line 466, Address: 0x34a8e8, Func Offset: 0x48
	// Line 467, Address: 0x34a8ec, Func Offset: 0x4c
	// Line 468, Address: 0x34a8fc, Func Offset: 0x5c
	// Line 469, Address: 0x34a900, Func Offset: 0x60
	// Func End, Address: 0x34a908, Func Offset: 0x68
}

// xParCmdListFree__FP13tagParCmdList
// Start address: 0x34a910
void xParCmdListFree(tagParCmdList* cmdlist)
{
	// Line 425, Address: 0x34a910, Func Offset: 0
	// Line 426, Address: 0x34a920, Func Offset: 0x10
	// Line 427, Address: 0x34a9c0, Func Offset: 0xb0
	// Line 429, Address: 0x34aa64, Func Offset: 0x154
	// Line 431, Address: 0x34aa70, Func Offset: 0x160
	// Line 432, Address: 0x34aa7c, Func Offset: 0x16c
	// Line 434, Address: 0x34aa88, Func Offset: 0x178
	// Line 435, Address: 0x34aa94, Func Offset: 0x184
	// Line 437, Address: 0x34aaa0, Func Offset: 0x190
	// Line 439, Address: 0x34aaac, Func Offset: 0x19c
	// Line 440, Address: 0x34aab4, Func Offset: 0x1a4
	// Line 443, Address: 0x34aabc, Func Offset: 0x1ac
	// Line 444, Address: 0x34aac0, Func Offset: 0x1b0
	// Line 445, Address: 0x34aac4, Func Offset: 0x1b4
	// Func End, Address: 0x34aad8, Func Offset: 0x1c8
}

// xParCmdListAlloc__Fv
// Start address: 0x34aae0
tagParCmdList* xParCmdListAlloc()
{
	tagParCmdList* l;
	// Line 396, Address: 0x34aae0, Func Offset: 0
	// Line 399, Address: 0x34aae8, Func Offset: 0x8
	// Line 401, Address: 0x34aaf4, Func Offset: 0x14
	// Line 402, Address: 0x34ab0c, Func Offset: 0x2c
	// Line 405, Address: 0x34ab18, Func Offset: 0x38
	// Line 406, Address: 0x34abc0, Func Offset: 0xe0
	// Line 409, Address: 0x34abcc, Func Offset: 0xec
	// Line 412, Address: 0x34abd0, Func Offset: 0xf0
	// Line 413, Address: 0x34abd8, Func Offset: 0xf8
	// Line 416, Address: 0x34abe0, Func Offset: 0x100
	// Line 417, Address: 0x34abe4, Func Offset: 0x104
	// Line 421, Address: 0x34abe8, Func Offset: 0x108
	// Func End, Address: 0x34abf8, Func Offset: 0x118
}

// xParCmdListMemInit__Fv
// Start address: 0x34ac00
void xParCmdListMemInit()
{
	tagParCmdList* cmd;
	int32 i;
	// Line 376, Address: 0x34ac00, Func Offset: 0
	// Line 378, Address: 0x34ac0c, Func Offset: 0xc
	// Line 380, Address: 0x34ac24, Func Offset: 0x24
	// Line 381, Address: 0x34ac28, Func Offset: 0x28
	// Line 383, Address: 0x34ac2c, Func Offset: 0x2c
	// Line 385, Address: 0x34ac38, Func Offset: 0x38
	// Line 386, Address: 0x34ac40, Func Offset: 0x40
	// Line 389, Address: 0x34ac48, Func Offset: 0x48
	// Line 390, Address: 0x34ac4c, Func Offset: 0x4c
	// Line 391, Address: 0x34ac5c, Func Offset: 0x5c
	// Line 392, Address: 0x34ac60, Func Offset: 0x60
	// Func End, Address: 0x34ac68, Func Offset: 0x68
}

// xParCmdDataAlloc__Fi
// Start address: 0x34ac70
void* xParCmdDataAlloc(int32 cmdDataType)
{
	uint8* data;
	int32 size;
	int32 count;
	int32 i;
	// Line 334, Address: 0x34ac70, Func Offset: 0
	// Line 338, Address: 0x34ac8c, Func Offset: 0x1c
	// Line 339, Address: 0x34ad2c, Func Offset: 0xbc
	// Line 341, Address: 0x34add0, Func Offset: 0x160
	// Line 342, Address: 0x34ade4, Func Offset: 0x174
	// Line 343, Address: 0x34adf8, Func Offset: 0x188
	// Line 346, Address: 0x34ae0c, Func Offset: 0x19c
	// Line 348, Address: 0x34aeac, Func Offset: 0x23c
	// Line 350, Address: 0x34aeb8, Func Offset: 0x248
	// Line 352, Address: 0x34aec8, Func Offset: 0x258
	// Line 353, Address: 0x34aecc, Func Offset: 0x25c
	// Line 356, Address: 0x34aed8, Func Offset: 0x268
	// Line 357, Address: 0x34aedc, Func Offset: 0x26c
	// Line 359, Address: 0x34aeec, Func Offset: 0x27c
	// Line 360, Address: 0x34af00, Func Offset: 0x290
	// Line 361, Address: 0x34af04, Func Offset: 0x294
	// Func End, Address: 0x34af24, Func Offset: 0x2b4
}

// xParCmdDataMemInit__Fv
// Start address: 0x34af30
void xParCmdDataMemInit()
{
	uint8* data;
	int32 size;
	int32 count;
	int32 j;
	int32 i;
	// Line 315, Address: 0x34af30, Func Offset: 0
	// Line 317, Address: 0x34af3c, Func Offset: 0xc
	// Line 318, Address: 0x34af50, Func Offset: 0x20
	// Line 319, Address: 0x34af64, Func Offset: 0x34
	// Line 321, Address: 0x34af78, Func Offset: 0x48
	// Line 323, Address: 0x34af84, Func Offset: 0x54
	// Line 324, Address: 0x34af8c, Func Offset: 0x5c
	// Line 325, Address: 0x34af90, Func Offset: 0x60
	// Line 326, Address: 0x34af94, Func Offset: 0x64
	// Line 328, Address: 0x34af98, Func Offset: 0x68
	// Line 329, Address: 0x34af9c, Func Offset: 0x6c
	// Line 330, Address: 0x34afac, Func Offset: 0x7c
	// Line 331, Address: 0x34afbc, Func Offset: 0x8c
	// Func End, Address: 0x34afc4, Func Offset: 0x94
}

