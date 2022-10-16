// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmycpu_top.h for the primary calling header

#ifndef VERILATED_VMYCPU_TOP_DCACHE_TAG_H_
#define VERILATED_VMYCPU_TOP_DCACHE_TAG_H_  // guard

#include "verilated.h"
#include "verilated_threads.h"

class Vmycpu_top__Syms;

class Vmycpu_top_dcache_tag final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_OUT8(__PVT__io_hit,0,0);
        VL_OUT8(__PVT__io_valid,0,0);
        QData/*51:0*/ __PVT___GEN_431;
        QData/*51:0*/ __PVT___GEN_432;
        QData/*51:0*/ __PVT___GEN_433;
        QData/*51:0*/ __PVT___GEN_434;
        QData/*51:0*/ __PVT___GEN_435;
        QData/*51:0*/ __PVT___GEN_436;
        QData/*51:0*/ __PVT___GEN_437;
        QData/*51:0*/ __PVT___GEN_438;
        QData/*51:0*/ __PVT___GEN_439;
        QData/*51:0*/ __PVT___GEN_440;
        QData/*51:0*/ __PVT___GEN_441;
        QData/*51:0*/ __PVT___GEN_442;
        QData/*51:0*/ __PVT___GEN_443;
        QData/*51:0*/ __PVT___GEN_444;
        QData/*51:0*/ __PVT___GEN_445;
        QData/*51:0*/ __PVT___GEN_446;
        QData/*51:0*/ __PVT___GEN_447;
        QData/*51:0*/ __PVT___GEN_495;
        QData/*51:0*/ __PVT___GEN_496;
        QData/*51:0*/ __PVT___GEN_497;
        QData/*51:0*/ __PVT___GEN_498;
        QData/*51:0*/ __PVT___GEN_499;
        QData/*51:0*/ __PVT___GEN_500;
        QData/*51:0*/ __PVT___GEN_501;
        QData/*51:0*/ __PVT___GEN_502;
        QData/*51:0*/ __PVT___GEN_503;
        QData/*51:0*/ __PVT___GEN_504;
        QData/*51:0*/ __PVT___GEN_505;
        QData/*51:0*/ __PVT___GEN_506;
        QData/*51:0*/ __PVT___GEN_507;
        QData/*51:0*/ __PVT___GEN_508;
        QData/*51:0*/ __PVT___GEN_509;
        QData/*51:0*/ __PVT___GEN_510;
        QData/*51:0*/ __PVT___GEN_511;
        VL_IN64(__PVT__io_raddr,63,0);
        QData/*51:0*/ __PVT___GEN_424;
        QData/*51:0*/ __PVT___GEN_425;
        QData/*51:0*/ __PVT___GEN_426;
        QData/*51:0*/ __PVT___GEN_427;
        QData/*51:0*/ __PVT___GEN_428;
        QData/*51:0*/ __PVT___GEN_429;
        QData/*51:0*/ __PVT___GEN_430;
        QData/*51:0*/ __PVT___GEN_488;
        QData/*51:0*/ __PVT___GEN_489;
        QData/*51:0*/ __PVT___GEN_490;
        QData/*51:0*/ __PVT___GEN_491;
        QData/*51:0*/ __PVT___GEN_492;
        QData/*51:0*/ __PVT___GEN_493;
        QData/*51:0*/ __PVT___GEN_494;
        QData/*51:0*/ __PVT___GEN_385;
        QData/*51:0*/ __PVT___GEN_386;
        QData/*51:0*/ __PVT___GEN_387;
        QData/*51:0*/ __PVT___GEN_388;
        QData/*51:0*/ __PVT___GEN_389;
        QData/*51:0*/ __PVT___GEN_390;
        QData/*51:0*/ __PVT___GEN_391;
        QData/*51:0*/ __PVT___GEN_392;
        QData/*51:0*/ __PVT___GEN_393;
        QData/*51:0*/ __PVT___GEN_394;
        QData/*51:0*/ __PVT___GEN_395;
        QData/*51:0*/ __PVT___GEN_396;
        QData/*51:0*/ __PVT___GEN_397;
    };
    struct {
        QData/*51:0*/ __PVT___GEN_398;
        QData/*51:0*/ __PVT___GEN_399;
        QData/*51:0*/ __PVT___GEN_400;
        QData/*51:0*/ __PVT___GEN_401;
        QData/*51:0*/ __PVT___GEN_402;
        QData/*51:0*/ __PVT___GEN_403;
        QData/*51:0*/ __PVT___GEN_404;
        QData/*51:0*/ __PVT___GEN_405;
        QData/*51:0*/ __PVT___GEN_406;
        QData/*51:0*/ __PVT___GEN_407;
        QData/*51:0*/ __PVT___GEN_408;
        QData/*51:0*/ __PVT___GEN_409;
        QData/*51:0*/ __PVT___GEN_410;
        QData/*51:0*/ __PVT___GEN_411;
        QData/*51:0*/ __PVT___GEN_412;
        QData/*51:0*/ __PVT___GEN_413;
        QData/*51:0*/ __PVT___GEN_414;
        QData/*51:0*/ __PVT___GEN_415;
        QData/*51:0*/ __PVT___GEN_416;
        QData/*51:0*/ __PVT___GEN_417;
        QData/*51:0*/ __PVT___GEN_418;
        QData/*51:0*/ __PVT___GEN_419;
        QData/*51:0*/ __PVT___GEN_420;
        QData/*51:0*/ __PVT___GEN_421;
        QData/*51:0*/ __PVT___GEN_422;
        QData/*51:0*/ __PVT___GEN_423;
        QData/*51:0*/ __PVT___GEN_449;
        QData/*51:0*/ __PVT___GEN_450;
        QData/*51:0*/ __PVT___GEN_451;
        QData/*51:0*/ __PVT___GEN_452;
        QData/*51:0*/ __PVT___GEN_453;
        QData/*51:0*/ __PVT___GEN_454;
        QData/*51:0*/ __PVT___GEN_455;
        QData/*51:0*/ __PVT___GEN_456;
        QData/*51:0*/ __PVT___GEN_457;
        QData/*51:0*/ __PVT___GEN_458;
        QData/*51:0*/ __PVT___GEN_459;
        QData/*51:0*/ __PVT___GEN_460;
        QData/*51:0*/ __PVT___GEN_461;
        QData/*51:0*/ __PVT___GEN_462;
        QData/*51:0*/ __PVT___GEN_463;
        QData/*51:0*/ __PVT___GEN_464;
        QData/*51:0*/ __PVT___GEN_465;
        QData/*51:0*/ __PVT___GEN_466;
        QData/*51:0*/ __PVT___GEN_467;
        QData/*51:0*/ __PVT___GEN_468;
        QData/*51:0*/ __PVT___GEN_469;
        QData/*51:0*/ __PVT___GEN_470;
        QData/*51:0*/ __PVT___GEN_471;
        QData/*51:0*/ __PVT___GEN_472;
        QData/*51:0*/ __PVT___GEN_473;
        QData/*51:0*/ __PVT___GEN_474;
        QData/*51:0*/ __PVT___GEN_475;
        QData/*51:0*/ __PVT___GEN_476;
        QData/*51:0*/ __PVT___GEN_477;
        QData/*51:0*/ __PVT___GEN_478;
        QData/*51:0*/ __PVT___GEN_479;
        QData/*51:0*/ __PVT___GEN_480;
        QData/*51:0*/ __PVT___GEN_481;
        QData/*51:0*/ __PVT___GEN_482;
        QData/*51:0*/ __PVT___GEN_483;
        QData/*51:0*/ __PVT___GEN_484;
        QData/*51:0*/ __PVT___GEN_485;
        QData/*51:0*/ __PVT___GEN_486;
    };
    struct {
        QData/*51:0*/ __PVT___GEN_487;
        QData/*51:0*/ __Vdly__tag_regs0_0;
        QData/*51:0*/ __Vdly__tag_regs0_1;
        QData/*51:0*/ __Vdly__tag_regs0_2;
        QData/*51:0*/ __Vdly__tag_regs0_3;
        QData/*51:0*/ __Vdly__tag_regs0_4;
        QData/*51:0*/ __Vdly__tag_regs0_5;
        QData/*51:0*/ __Vdly__tag_regs0_6;
        QData/*51:0*/ __Vdly__tag_regs0_7;
        QData/*51:0*/ __Vdly__tag_regs0_8;
        QData/*51:0*/ __Vdly__tag_regs0_9;
        QData/*51:0*/ __Vdly__tag_regs0_10;
        QData/*51:0*/ __Vdly__tag_regs0_11;
        QData/*51:0*/ __Vdly__tag_regs0_12;
        QData/*51:0*/ __Vdly__tag_regs0_13;
        QData/*51:0*/ __Vdly__tag_regs0_14;
        QData/*51:0*/ __Vdly__tag_regs0_15;
        QData/*51:0*/ __Vdly__tag_regs0_16;
        QData/*51:0*/ __Vdly__tag_regs0_17;
        QData/*51:0*/ __Vdly__tag_regs0_18;
        QData/*51:0*/ __Vdly__tag_regs0_19;
        QData/*51:0*/ __Vdly__tag_regs0_20;
        QData/*51:0*/ __Vdly__tag_regs0_21;
        QData/*51:0*/ __Vdly__tag_regs0_22;
        QData/*51:0*/ __Vdly__tag_regs0_23;
        QData/*51:0*/ __Vdly__tag_regs0_24;
        QData/*51:0*/ __Vdly__tag_regs0_25;
        QData/*51:0*/ __Vdly__tag_regs0_26;
        QData/*51:0*/ __Vdly__tag_regs0_27;
        QData/*51:0*/ __Vdly__tag_regs0_28;
        QData/*51:0*/ __Vdly__tag_regs0_29;
        QData/*51:0*/ __Vdly__tag_regs0_30;
        QData/*51:0*/ __Vdly__tag_regs0_31;
        QData/*51:0*/ __Vdly__tag_regs0_32;
        QData/*51:0*/ __Vdly__tag_regs0_33;
        QData/*51:0*/ __Vdly__tag_regs0_34;
        QData/*51:0*/ __Vdly__tag_regs0_35;
        QData/*51:0*/ __Vdly__tag_regs0_36;
        QData/*51:0*/ __Vdly__tag_regs0_37;
        QData/*51:0*/ __Vdly__tag_regs0_38;
        QData/*51:0*/ __Vdly__tag_regs0_39;
        QData/*51:0*/ __Vdly__tag_regs0_40;
        QData/*51:0*/ __Vdly__tag_regs0_41;
        QData/*51:0*/ __Vdly__tag_regs0_42;
        QData/*51:0*/ __Vdly__tag_regs0_43;
        QData/*51:0*/ __Vdly__tag_regs0_44;
        QData/*51:0*/ __Vdly__tag_regs0_45;
        QData/*51:0*/ __Vdly__tag_regs0_46;
        QData/*51:0*/ __Vdly__tag_regs0_47;
        QData/*51:0*/ __Vdly__tag_regs0_48;
        QData/*51:0*/ __Vdly__tag_regs0_49;
        QData/*51:0*/ __Vdly__tag_regs1_0;
        QData/*51:0*/ __Vdly__tag_regs1_1;
        QData/*51:0*/ __Vdly__tag_regs1_2;
        QData/*51:0*/ __Vdly__tag_regs1_3;
        QData/*51:0*/ __Vdly__tag_regs1_4;
        QData/*51:0*/ __Vdly__tag_regs1_5;
        QData/*51:0*/ __Vdly__tag_regs1_6;
        QData/*51:0*/ __Vdly__tag_regs1_7;
        QData/*51:0*/ __Vdly__tag_regs1_8;
        QData/*51:0*/ __Vdly__tag_regs1_9;
        QData/*51:0*/ __Vdly__tag_regs1_10;
        QData/*51:0*/ __Vdly__tag_regs1_11;
        QData/*51:0*/ __Vdly__tag_regs1_12;
    };
    struct {
        QData/*51:0*/ __Vdly__tag_regs1_13;
        QData/*51:0*/ __Vdly__tag_regs1_14;
        QData/*51:0*/ __Vdly__tag_regs1_15;
        QData/*51:0*/ __Vdly__tag_regs1_16;
        QData/*51:0*/ __Vdly__tag_regs1_17;
        QData/*51:0*/ __Vdly__tag_regs1_18;
        QData/*51:0*/ __Vdly__tag_regs1_19;
        QData/*51:0*/ __Vdly__tag_regs1_20;
        QData/*51:0*/ __Vdly__tag_regs1_21;
        QData/*51:0*/ __Vdly__tag_regs1_22;
        QData/*51:0*/ __Vdly__tag_regs1_23;
        QData/*51:0*/ __Vdly__tag_regs1_24;
        QData/*51:0*/ __Vdly__tag_regs1_25;
        QData/*51:0*/ __Vdly__tag_regs1_26;
        QData/*51:0*/ __Vdly__tag_regs1_27;
        QData/*51:0*/ __Vdly__tag_regs1_28;
        QData/*51:0*/ __Vdly__tag_regs1_29;
        QData/*51:0*/ __Vdly__tag_regs1_30;
        QData/*51:0*/ __Vdly__tag_regs1_31;
        QData/*51:0*/ __Vdly__tag_regs1_32;
        QData/*51:0*/ __Vdly__tag_regs1_33;
        QData/*51:0*/ __Vdly__tag_regs1_34;
        QData/*51:0*/ __Vdly__tag_regs1_35;
        QData/*51:0*/ __Vdly__tag_regs1_36;
        QData/*51:0*/ __Vdly__tag_regs1_37;
        QData/*51:0*/ __Vdly__tag_regs1_38;
        QData/*51:0*/ __Vdly__tag_regs1_39;
        QData/*51:0*/ __Vdly__tag_regs1_40;
        QData/*51:0*/ __Vdly__tag_regs1_41;
        QData/*51:0*/ __Vdly__tag_regs1_42;
        QData/*51:0*/ __Vdly__tag_regs1_43;
        QData/*51:0*/ __Vdly__tag_regs1_44;
        QData/*51:0*/ __Vdly__tag_regs1_45;
        QData/*51:0*/ __Vdly__tag_regs1_46;
        QData/*51:0*/ __Vdly__tag_regs1_47;
        QData/*51:0*/ __Vdly__tag_regs1_48;
        QData/*51:0*/ __Vdly__tag_regs1_49;
        VL_IN8(__PVT__clock,0,0);
        QData/*51:0*/ __Vdly__tag_regs0_50;
        QData/*51:0*/ __Vdly__tag_regs1_50;
        VL_IN8(__PVT__reset,0,0);
        QData/*51:0*/ __Vdly__tag_regs0_51;
        QData/*51:0*/ __Vdly__tag_regs0_52;
        QData/*51:0*/ __Vdly__tag_regs0_53;
        QData/*51:0*/ __Vdly__tag_regs0_54;
        QData/*51:0*/ __Vdly__tag_regs0_55;
        QData/*51:0*/ __Vdly__tag_regs0_56;
        QData/*51:0*/ __Vdly__tag_regs0_57;
        QData/*51:0*/ __Vdly__tag_regs0_58;
        QData/*51:0*/ __Vdly__tag_regs0_59;
        QData/*51:0*/ __Vdly__tag_regs0_60;
        QData/*51:0*/ __Vdly__tag_regs0_61;
        QData/*51:0*/ __Vdly__tag_regs0_62;
        QData/*51:0*/ __Vdly__tag_regs1_51;
        QData/*51:0*/ __Vdly__tag_regs1_52;
        QData/*51:0*/ __Vdly__tag_regs1_53;
        QData/*51:0*/ __Vdly__tag_regs1_54;
        QData/*51:0*/ __Vdly__tag_regs1_55;
        QData/*51:0*/ __Vdly__tag_regs1_56;
        QData/*51:0*/ __Vdly__tag_regs1_57;
        QData/*51:0*/ __Vdly__tag_regs1_58;
        QData/*51:0*/ __Vdly__tag_regs1_59;
        QData/*51:0*/ __Vdly__tag_regs1_60;
        QData/*51:0*/ __Vdly__tag_regs1_61;
    };
    struct {
        QData/*51:0*/ __Vdly__tag_regs1_62;
        QData/*51:0*/ __PVT__tag_regs1_50;
        QData/*51:0*/ __PVT__tag_regs0_50;
        QData/*51:0*/ __PVT__tag_regs0_51;
        QData/*51:0*/ __PVT__tag_regs0_52;
        QData/*51:0*/ __PVT__tag_regs0_53;
        QData/*51:0*/ __PVT__tag_regs0_54;
        QData/*51:0*/ __PVT__tag_regs0_55;
        QData/*51:0*/ __PVT__tag_regs0_56;
        QData/*51:0*/ __PVT__tag_regs0_57;
        QData/*51:0*/ __PVT__tag_regs0_58;
        QData/*51:0*/ __PVT__tag_regs0_59;
        QData/*51:0*/ __PVT__tag_regs0_60;
        QData/*51:0*/ __PVT__tag_regs0_62;
        QData/*51:0*/ __PVT__tag_regs1_51;
        QData/*51:0*/ __PVT__tag_regs1_52;
        QData/*51:0*/ __PVT__tag_regs1_53;
        QData/*51:0*/ __PVT__tag_regs1_54;
        QData/*51:0*/ __PVT__tag_regs1_55;
        QData/*51:0*/ __PVT__tag_regs1_56;
        QData/*51:0*/ __PVT__tag_regs1_57;
        QData/*51:0*/ __PVT__tag_regs1_58;
        QData/*51:0*/ __PVT__tag_regs1_59;
        QData/*51:0*/ __PVT__tag_regs1_60;
        QData/*51:0*/ __PVT__tag_regs1_62;
        QData/*51:0*/ __PVT__tag_regs0_61;
        QData/*51:0*/ __PVT__tag_regs1_61;
        QData/*51:0*/ __PVT__tag_regs0_46;
        QData/*51:0*/ __PVT__tag_regs0_47;
        QData/*51:0*/ __PVT__tag_regs0_48;
        QData/*51:0*/ __PVT__tag_regs0_49;
        QData/*51:0*/ __PVT__tag_regs0_63;
        QData/*51:0*/ __PVT__tag_regs1_63;
        QData/*51:0*/ __PVT__tag_regs0_41;
        QData/*51:0*/ __PVT__tag_regs0_42;
        QData/*51:0*/ __PVT__tag_regs0_43;
        QData/*51:0*/ __PVT__tag_regs0_44;
        QData/*51:0*/ __PVT__tag_regs0_45;
        QData/*51:0*/ __PVT__tag_regs1_41;
        QData/*51:0*/ __PVT__tag_regs1_42;
        QData/*51:0*/ __PVT__tag_regs1_43;
        QData/*51:0*/ __PVT__tag_regs1_44;
        QData/*51:0*/ __PVT__tag_regs1_45;
        QData/*51:0*/ __PVT__tag_regs1_46;
        QData/*51:0*/ __PVT__tag_regs1_47;
        QData/*51:0*/ __PVT__tag_regs1_48;
        QData/*51:0*/ __PVT__tag_regs1_49;
        VL_IN64(__PVT__io_wdata,51,0);
        QData/*51:0*/ __PVT__tag_regs0_0;
        QData/*51:0*/ __PVT__tag_regs0_1;
        QData/*51:0*/ __PVT__tag_regs0_2;
        QData/*51:0*/ __PVT__tag_regs0_3;
        QData/*51:0*/ __PVT__tag_regs0_4;
        QData/*51:0*/ __PVT__tag_regs0_5;
        QData/*51:0*/ __PVT__tag_regs0_6;
        QData/*51:0*/ __PVT__tag_regs0_7;
        QData/*51:0*/ __PVT__tag_regs0_8;
        QData/*51:0*/ __PVT__tag_regs0_9;
        QData/*51:0*/ __PVT__tag_regs0_10;
        QData/*51:0*/ __PVT__tag_regs0_11;
        QData/*51:0*/ __PVT__tag_regs0_12;
        QData/*51:0*/ __PVT__tag_regs0_13;
        QData/*51:0*/ __PVT__tag_regs0_14;
        QData/*51:0*/ __PVT__tag_regs0_15;
    };
    struct {
        QData/*51:0*/ __PVT__tag_regs0_16;
        QData/*51:0*/ __PVT__tag_regs0_17;
        QData/*51:0*/ __PVT__tag_regs0_18;
        QData/*51:0*/ __PVT__tag_regs0_19;
        QData/*51:0*/ __PVT__tag_regs0_20;
        QData/*51:0*/ __PVT__tag_regs0_21;
        QData/*51:0*/ __PVT__tag_regs0_22;
        QData/*51:0*/ __PVT__tag_regs0_23;
        QData/*51:0*/ __PVT__tag_regs0_24;
        QData/*51:0*/ __PVT__tag_regs0_25;
        QData/*51:0*/ __PVT__tag_regs0_26;
        QData/*51:0*/ __PVT__tag_regs0_27;
        QData/*51:0*/ __PVT__tag_regs0_28;
        QData/*51:0*/ __PVT__tag_regs0_29;
        QData/*51:0*/ __PVT__tag_regs0_30;
        QData/*51:0*/ __PVT__tag_regs0_31;
        QData/*51:0*/ __PVT__tag_regs0_32;
        QData/*51:0*/ __PVT__tag_regs0_33;
        QData/*51:0*/ __PVT__tag_regs0_34;
        QData/*51:0*/ __PVT__tag_regs0_35;
        QData/*51:0*/ __PVT__tag_regs0_36;
        QData/*51:0*/ __PVT__tag_regs0_37;
        QData/*51:0*/ __PVT__tag_regs0_38;
        QData/*51:0*/ __PVT__tag_regs0_39;
        QData/*51:0*/ __PVT__tag_regs0_40;
        QData/*51:0*/ __PVT__tag_regs1_0;
        QData/*51:0*/ __PVT__tag_regs1_1;
        QData/*51:0*/ __PVT__tag_regs1_2;
        QData/*51:0*/ __PVT__tag_regs1_3;
        QData/*51:0*/ __PVT__tag_regs1_4;
        QData/*51:0*/ __PVT__tag_regs1_5;
        QData/*51:0*/ __PVT__tag_regs1_6;
        QData/*51:0*/ __PVT__tag_regs1_7;
        QData/*51:0*/ __PVT__tag_regs1_8;
        QData/*51:0*/ __PVT__tag_regs1_9;
        QData/*51:0*/ __PVT__tag_regs1_10;
        QData/*51:0*/ __PVT__tag_regs1_11;
        QData/*51:0*/ __PVT__tag_regs1_12;
        QData/*51:0*/ __PVT__tag_regs1_13;
        QData/*51:0*/ __PVT__tag_regs1_14;
        QData/*51:0*/ __PVT__tag_regs1_15;
        QData/*51:0*/ __PVT__tag_regs1_16;
        QData/*51:0*/ __PVT__tag_regs1_17;
        QData/*51:0*/ __PVT__tag_regs1_18;
        QData/*51:0*/ __PVT__tag_regs1_19;
        QData/*51:0*/ __PVT__tag_regs1_20;
        QData/*51:0*/ __PVT__tag_regs1_21;
        QData/*51:0*/ __PVT__tag_regs1_22;
        QData/*51:0*/ __PVT__tag_regs1_23;
        QData/*51:0*/ __PVT__tag_regs1_24;
        QData/*51:0*/ __PVT__tag_regs1_25;
        QData/*51:0*/ __PVT__tag_regs1_26;
        QData/*51:0*/ __PVT__tag_regs1_27;
        QData/*51:0*/ __PVT__tag_regs1_28;
        QData/*51:0*/ __PVT__tag_regs1_29;
        QData/*51:0*/ __PVT__tag_regs1_30;
        QData/*51:0*/ __PVT__tag_regs1_31;
        QData/*51:0*/ __PVT__tag_regs1_32;
        QData/*51:0*/ __PVT__tag_regs1_33;
        QData/*51:0*/ __PVT__tag_regs1_34;
        QData/*51:0*/ __PVT__tag_regs1_35;
        QData/*51:0*/ __PVT__tag_regs1_36;
        QData/*51:0*/ __PVT__tag_regs1_37;
        QData/*51:0*/ __PVT__tag_regs1_38;
    };
    struct {
        QData/*51:0*/ __PVT__tag_regs1_39;
        QData/*51:0*/ __PVT__tag_regs1_40;
        QData/*51:0*/ __PVT___GEN_1;
        QData/*51:0*/ __PVT___GEN_2;
        QData/*51:0*/ __PVT___GEN_3;
        QData/*51:0*/ __PVT___GEN_4;
        QData/*51:0*/ __PVT___GEN_5;
        QData/*51:0*/ __PVT___GEN_6;
        QData/*51:0*/ __PVT___GEN_7;
        QData/*51:0*/ __PVT___GEN_8;
        QData/*51:0*/ __PVT___GEN_9;
        QData/*51:0*/ __PVT___GEN_10;
        QData/*51:0*/ __PVT___GEN_11;
        QData/*51:0*/ __PVT___GEN_12;
        QData/*51:0*/ __PVT___GEN_13;
        QData/*51:0*/ __PVT___GEN_14;
        QData/*51:0*/ __PVT___GEN_15;
        QData/*51:0*/ __PVT___GEN_16;
        QData/*51:0*/ __PVT___GEN_17;
        QData/*51:0*/ __PVT___GEN_18;
        QData/*51:0*/ __PVT___GEN_19;
        QData/*51:0*/ __PVT___GEN_20;
        QData/*51:0*/ __PVT___GEN_21;
        QData/*51:0*/ __PVT___GEN_22;
        QData/*51:0*/ __PVT___GEN_23;
        QData/*51:0*/ __PVT___GEN_24;
        QData/*51:0*/ __PVT___GEN_25;
        QData/*51:0*/ __PVT___GEN_26;
        QData/*51:0*/ __PVT___GEN_27;
        QData/*51:0*/ __PVT___GEN_28;
        QData/*51:0*/ __PVT___GEN_29;
        QData/*51:0*/ __PVT___GEN_30;
        QData/*51:0*/ __PVT___GEN_31;
        QData/*51:0*/ __PVT___GEN_32;
        QData/*51:0*/ __PVT___GEN_33;
        QData/*51:0*/ __PVT___GEN_34;
        QData/*51:0*/ __PVT___GEN_35;
        QData/*51:0*/ __PVT___GEN_36;
        QData/*51:0*/ __PVT___GEN_37;
        QData/*51:0*/ __PVT___GEN_38;
        QData/*51:0*/ __PVT___GEN_39;
        QData/*51:0*/ __PVT___GEN_40;
        QData/*51:0*/ __PVT___GEN_41;
        QData/*51:0*/ __PVT___GEN_42;
        QData/*51:0*/ __PVT___GEN_43;
        QData/*51:0*/ __PVT___GEN_44;
        QData/*51:0*/ __PVT___GEN_129;
        QData/*51:0*/ __PVT___GEN_130;
        QData/*51:0*/ __PVT___GEN_131;
        QData/*51:0*/ __PVT___GEN_132;
        QData/*51:0*/ __PVT___GEN_133;
        QData/*51:0*/ __PVT___GEN_134;
        QData/*51:0*/ __PVT___GEN_135;
        QData/*51:0*/ __PVT___GEN_136;
        QData/*51:0*/ __PVT___GEN_137;
        QData/*51:0*/ __PVT___GEN_138;
        QData/*51:0*/ __PVT___GEN_139;
        QData/*51:0*/ __PVT___GEN_140;
        QData/*51:0*/ __PVT___GEN_141;
        QData/*51:0*/ __PVT___GEN_142;
        QData/*51:0*/ __PVT___GEN_143;
        QData/*51:0*/ __PVT___GEN_144;
        QData/*51:0*/ __PVT___GEN_145;
        QData/*51:0*/ __PVT___GEN_146;
    };
    struct {
        QData/*51:0*/ __PVT___GEN_147;
        QData/*51:0*/ __PVT___GEN_148;
        QData/*51:0*/ __PVT___GEN_149;
        QData/*51:0*/ __PVT___GEN_150;
        QData/*51:0*/ __PVT___GEN_151;
        QData/*51:0*/ __PVT___GEN_152;
        QData/*51:0*/ __PVT___GEN_153;
        QData/*51:0*/ __PVT___GEN_154;
        QData/*51:0*/ __PVT___GEN_155;
        QData/*51:0*/ __PVT___GEN_156;
        QData/*51:0*/ __PVT___GEN_157;
        QData/*51:0*/ __PVT___GEN_158;
        QData/*51:0*/ __PVT___GEN_159;
        QData/*51:0*/ __PVT___GEN_160;
        QData/*51:0*/ __PVT___GEN_161;
        QData/*51:0*/ __PVT___GEN_162;
        QData/*51:0*/ __PVT___GEN_163;
        QData/*51:0*/ __PVT___GEN_164;
        QData/*51:0*/ __PVT___GEN_165;
        QData/*51:0*/ __PVT___GEN_166;
        QData/*51:0*/ __PVT___GEN_167;
        QData/*51:0*/ __PVT___GEN_168;
        QData/*51:0*/ __PVT___GEN_169;
        QData/*51:0*/ __PVT___GEN_170;
        QData/*51:0*/ __PVT___GEN_171;
        QData/*51:0*/ __PVT___GEN_172;
        QData/*51:0*/ __PVT___GEN_173;
        QData/*51:0*/ __PVT___GEN_174;
        QData/*51:0*/ __PVT___GEN_175;
        QData/*51:0*/ __PVT___GEN_176;
        QData/*51:0*/ __PVT___GEN_177;
        QData/*51:0*/ __Vdly__tag_regs0_63;
        QData/*51:0*/ __Vdly__tag_regs1_63;
        VL_IN64(__PVT__io_waddr,63,0);
        QData/*51:0*/ __PVT___GEN_45;
        QData/*51:0*/ __PVT___GEN_178;
        QData/*51:0*/ __PVT___GEN_46;
        QData/*51:0*/ __PVT___GEN_47;
        QData/*51:0*/ __PVT___GEN_48;
        QData/*51:0*/ __PVT___GEN_49;
        QData/*51:0*/ __PVT___GEN_50;
        QData/*51:0*/ __PVT___GEN_51;
        QData/*51:0*/ __PVT___GEN_52;
        QData/*51:0*/ __PVT___GEN_53;
        QData/*51:0*/ __PVT___GEN_54;
        QData/*51:0*/ __PVT___GEN_55;
        QData/*51:0*/ __PVT___GEN_56;
        QData/*51:0*/ __PVT___GEN_57;
        QData/*51:0*/ __PVT___GEN_58;
        QData/*51:0*/ __PVT___GEN_179;
        QData/*51:0*/ __PVT___GEN_180;
        QData/*51:0*/ __PVT___GEN_181;
        QData/*51:0*/ __PVT___GEN_182;
        QData/*51:0*/ __PVT___GEN_183;
        QData/*51:0*/ __PVT___GEN_184;
        QData/*51:0*/ __PVT___GEN_185;
        VL_OUT64(__PVT__io_tag,50,0);
        QData/*51:0*/ __PVT___GEN_59;
        QData/*51:0*/ __PVT___GEN_60;
        QData/*51:0*/ __PVT___GEN_62;
        QData/*51:0*/ __PVT___GEN_63;
        QData/*51:0*/ __PVT___GEN_186;
        QData/*51:0*/ __PVT___GEN_187;
        QData/*51:0*/ __PVT___GEN_188;
    };
    struct {
        QData/*51:0*/ __PVT___GEN_190;
        QData/*51:0*/ __PVT___GEN_191;
        QData/*51:0*/ __PVT___GEN_61;
        QData/*51:0*/ __PVT___GEN_189;
        VL_IN8(__PVT__io_wen,0,0);
    };

    // INTERNAL VARIABLES
    Vmycpu_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmycpu_top_dcache_tag(Vmycpu_top__Syms* symsp, const char* name);
    ~Vmycpu_top_dcache_tag();
    VL_UNCOPYABLE(Vmycpu_top_dcache_tag);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard