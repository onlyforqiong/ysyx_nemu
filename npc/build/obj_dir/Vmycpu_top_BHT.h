// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmycpu_top.h for the primary calling header

#ifndef VERILATED_VMYCPU_TOP_BHT_H_
#define VERILATED_VMYCPU_TOP_BHT_H_  // guard

#include "verilated.h"
#include "verilated_threads.h"

class Vmycpu_top__Syms;

class Vmycpu_top_BHT final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__io_write,0,0);
        VL_IN8(__PVT__reset,0,0);
        VL_IN8(__PVT__io_aw_addr,6,0);
        VL_IN8(__PVT__io_in,2,0);
        CData/*2:0*/ __Vdly__bht_38;
        CData/*2:0*/ __Vdly__bht_39;
        CData/*2:0*/ __Vdly__bht_40;
        CData/*2:0*/ __Vdly__bht_43;
        CData/*2:0*/ __Vdly__bht_44;
        CData/*2:0*/ __Vdly__bht_45;
        CData/*2:0*/ __Vdly__bht_56;
        CData/*2:0*/ __Vdly__bht_57;
        CData/*2:0*/ __Vdly__bht_58;
        CData/*2:0*/ __Vdly__bht_59;
        CData/*2:0*/ __Vdly__bht_60;
        CData/*2:0*/ __Vdly__bht_74;
        CData/*2:0*/ __Vdly__bht_75;
        CData/*2:0*/ __Vdly__bht_76;
        CData/*2:0*/ __Vdly__bht_77;
        CData/*2:0*/ __Vdly__bht_81;
        CData/*2:0*/ __Vdly__bht_84;
        CData/*2:0*/ __Vdly__bht_88;
        CData/*2:0*/ __Vdly__bht_89;
        CData/*2:0*/ __Vdly__bht_50;
        CData/*2:0*/ __Vdly__bht_52;
        CData/*2:0*/ __Vdly__bht_53;
        CData/*2:0*/ __Vdly__bht_54;
        CData/*2:0*/ __Vdly__bht_55;
        CData/*2:0*/ __Vdly__bht_100;
        CData/*2:0*/ __Vdly__bht_109;
        CData/*2:0*/ __Vdly__bht_110;
        CData/*2:0*/ __Vdly__bht_111;
        CData/*2:0*/ __Vdly__bht_112;
        CData/*2:0*/ __Vdly__bht_113;
        CData/*2:0*/ __Vdly__bht_114;
        CData/*2:0*/ __Vdly__bht_115;
        CData/*2:0*/ __Vdly__bht_116;
        CData/*2:0*/ __Vdly__bht_117;
        CData/*2:0*/ __Vdly__bht_92;
        CData/*2:0*/ __Vdly__bht_95;
        CData/*2:0*/ __Vdly__bht_96;
        CData/*2:0*/ __Vdly__bht_97;
        CData/*2:0*/ __Vdly__bht_98;
        CData/*2:0*/ __Vdly__bht_99;
        CData/*2:0*/ __Vdly__bht_101;
        CData/*2:0*/ __Vdly__bht_102;
        CData/*2:0*/ __Vdly__bht_103;
        CData/*2:0*/ __Vdly__bht_104;
        CData/*2:0*/ __Vdly__bht_105;
        CData/*2:0*/ __Vdly__bht_106;
        CData/*2:0*/ __Vdly__bht_107;
        CData/*2:0*/ __Vdly__bht_108;
        CData/*2:0*/ __Vdly__bht_65;
        CData/*2:0*/ __Vdly__bht_66;
        CData/*2:0*/ __Vdly__bht_67;
        CData/*2:0*/ __Vdly__bht_68;
        CData/*2:0*/ __Vdly__bht_69;
        CData/*2:0*/ __Vdly__bht_70;
        CData/*2:0*/ __Vdly__bht_71;
        CData/*2:0*/ __Vdly__bht_118;
        CData/*2:0*/ __Vdly__bht_17;
        CData/*2:0*/ __Vdly__bht_19;
        CData/*2:0*/ __Vdly__bht_20;
        CData/*2:0*/ __Vdly__bht_21;
    };
    struct {
        CData/*2:0*/ __Vdly__bht_28;
        CData/*2:0*/ __Vdly__bht_36;
        CData/*2:0*/ __Vdly__bht_37;
        CData/*2:0*/ __PVT__bht_17;
        CData/*2:0*/ __PVT__bht_19;
        CData/*2:0*/ __PVT__bht_20;
        CData/*2:0*/ __PVT__bht_21;
        CData/*2:0*/ __PVT__bht_28;
        CData/*2:0*/ __PVT__bht_36;
        CData/*2:0*/ __PVT__bht_37;
        CData/*2:0*/ __PVT__bht_119;
        CData/*2:0*/ __Vdly__bht_119;
        CData/*2:0*/ __Vdly__bht_121;
        CData/*2:0*/ __Vdly__bht_122;
        CData/*2:0*/ __Vdly__bht_123;
        CData/*2:0*/ __Vdly__bht_124;
        CData/*2:0*/ __Vdly__bht_125;
        CData/*2:0*/ __Vdly__bht_126;
        CData/*2:0*/ __PVT__bht_121;
        CData/*2:0*/ __PVT__bht_122;
        CData/*2:0*/ __PVT__bht_123;
        CData/*2:0*/ __PVT__bht_124;
        CData/*2:0*/ __PVT__bht_125;
        CData/*2:0*/ __PVT__bht_126;
        CData/*2:0*/ __PVT__bht_92;
        CData/*2:0*/ __PVT__bht_95;
        CData/*2:0*/ __PVT__bht_96;
        CData/*2:0*/ __PVT__bht_97;
        CData/*2:0*/ __PVT__bht_98;
        CData/*2:0*/ __PVT__bht_99;
        CData/*2:0*/ __PVT__bht_101;
        CData/*2:0*/ __PVT__bht_102;
        CData/*2:0*/ __PVT__bht_103;
        CData/*2:0*/ __PVT__bht_104;
        CData/*2:0*/ __PVT__bht_105;
        CData/*2:0*/ __PVT__bht_106;
        CData/*2:0*/ __PVT__bht_107;
        CData/*2:0*/ __PVT__bht_108;
        VL_OUT8(__PVT__io_out,2,0);
        CData/*2:0*/ __PVT___GEN_38;
        CData/*2:0*/ __PVT___GEN_39;
        CData/*2:0*/ __PVT___GEN_40;
        CData/*2:0*/ __PVT___GEN_41;
        CData/*2:0*/ __PVT___GEN_42;
        CData/*2:0*/ __PVT___GEN_43;
        CData/*2:0*/ __PVT___GEN_44;
        CData/*2:0*/ __PVT___GEN_45;
        CData/*2:0*/ __PVT___GEN_46;
        CData/*2:0*/ __PVT___GEN_47;
        CData/*2:0*/ __PVT___GEN_48;
        CData/*2:0*/ __PVT___GEN_49;
        CData/*2:0*/ __PVT___GEN_50;
        CData/*2:0*/ __PVT___GEN_51;
        CData/*2:0*/ __PVT___GEN_52;
        CData/*2:0*/ __PVT___GEN_53;
        CData/*2:0*/ __PVT___GEN_54;
        CData/*2:0*/ __PVT___GEN_55;
        CData/*2:0*/ __PVT___GEN_56;
        CData/*2:0*/ __PVT___GEN_57;
        CData/*2:0*/ __PVT___GEN_58;
        CData/*2:0*/ __PVT___GEN_59;
        CData/*2:0*/ __PVT___GEN_60;
        CData/*2:0*/ __PVT___GEN_61;
        CData/*2:0*/ __PVT___GEN_62;
    };
    struct {
        CData/*2:0*/ __PVT___GEN_63;
        CData/*2:0*/ __PVT___GEN_64;
        CData/*2:0*/ __PVT___GEN_65;
        CData/*2:0*/ __PVT___GEN_66;
        CData/*2:0*/ __PVT___GEN_67;
        CData/*2:0*/ __PVT___GEN_68;
        CData/*2:0*/ __PVT___GEN_69;
        CData/*2:0*/ __PVT___GEN_70;
        CData/*2:0*/ __PVT___GEN_71;
        CData/*2:0*/ __PVT___GEN_72;
        CData/*2:0*/ __PVT___GEN_73;
        CData/*2:0*/ __PVT___GEN_74;
        CData/*2:0*/ __PVT___GEN_75;
        CData/*2:0*/ __PVT___GEN_76;
        CData/*2:0*/ __PVT___GEN_77;
        CData/*2:0*/ __PVT___GEN_78;
        CData/*2:0*/ __PVT___GEN_79;
        CData/*2:0*/ __PVT___GEN_80;
        CData/*2:0*/ __PVT___GEN_81;
        CData/*2:0*/ __PVT___GEN_82;
        CData/*2:0*/ __PVT___GEN_83;
        CData/*2:0*/ __PVT___GEN_84;
        CData/*2:0*/ __PVT___GEN_85;
        CData/*2:0*/ __PVT___GEN_86;
        CData/*2:0*/ __PVT___GEN_87;
        CData/*2:0*/ __PVT___GEN_88;
        CData/*2:0*/ __PVT___GEN_89;
        CData/*2:0*/ __PVT___GEN_90;
        CData/*2:0*/ __PVT___GEN_91;
        CData/*2:0*/ __PVT___GEN_92;
        CData/*2:0*/ __PVT___GEN_93;
        CData/*2:0*/ __PVT___GEN_94;
        CData/*2:0*/ __PVT___GEN_95;
        CData/*2:0*/ __PVT___GEN_96;
        CData/*2:0*/ __PVT___GEN_97;
        CData/*2:0*/ __PVT___GEN_98;
        CData/*2:0*/ __PVT___GEN_99;
        CData/*2:0*/ __PVT___GEN_100;
        CData/*2:0*/ __PVT___GEN_101;
        CData/*2:0*/ __PVT___GEN_102;
        CData/*2:0*/ __PVT___GEN_103;
        CData/*2:0*/ __PVT___GEN_104;
        CData/*2:0*/ __PVT___GEN_105;
        CData/*2:0*/ __PVT___GEN_106;
        CData/*2:0*/ __PVT___GEN_107;
        CData/*2:0*/ __PVT___GEN_108;
        CData/*2:0*/ __PVT___GEN_109;
        CData/*2:0*/ __PVT___GEN_110;
        CData/*2:0*/ __PVT___GEN_111;
        CData/*2:0*/ __PVT___GEN_112;
        CData/*2:0*/ __PVT___GEN_113;
        CData/*2:0*/ __PVT___GEN_114;
        CData/*2:0*/ __PVT___GEN_115;
        CData/*2:0*/ __PVT___GEN_116;
        CData/*2:0*/ __PVT___GEN_117;
        CData/*2:0*/ __PVT___GEN_118;
        CData/*2:0*/ __PVT___GEN_119;
        CData/*2:0*/ __PVT___GEN_120;
        CData/*2:0*/ __PVT___GEN_121;
        CData/*2:0*/ __PVT___GEN_122;
        CData/*2:0*/ __PVT___GEN_123;
        CData/*2:0*/ __PVT___GEN_124;
        CData/*2:0*/ __PVT___GEN_125;
        CData/*2:0*/ __PVT___GEN_126;
    };
    struct {
        CData/*2:0*/ __PVT___GEN_37;
        CData/*2:0*/ __PVT__bht_65;
        CData/*2:0*/ __PVT__bht_66;
        CData/*2:0*/ __PVT__bht_67;
        CData/*2:0*/ __PVT__bht_68;
        CData/*2:0*/ __PVT__bht_69;
        CData/*2:0*/ __PVT__bht_70;
        CData/*2:0*/ __PVT__bht_71;
        CData/*2:0*/ __PVT__bht_118;
        CData/*2:0*/ __PVT__bht_38;
        CData/*2:0*/ __PVT__bht_39;
        CData/*2:0*/ __PVT__bht_40;
        CData/*2:0*/ __PVT__bht_43;
        CData/*2:0*/ __PVT__bht_44;
        CData/*2:0*/ __PVT__bht_45;
        CData/*2:0*/ __PVT__bht_56;
        CData/*2:0*/ __PVT__bht_57;
        CData/*2:0*/ __PVT__bht_58;
        CData/*2:0*/ __PVT__bht_59;
        CData/*2:0*/ __PVT__bht_60;
        CData/*2:0*/ __PVT__bht_74;
        CData/*2:0*/ __PVT__bht_75;
        CData/*2:0*/ __PVT__bht_76;
        CData/*2:0*/ __PVT__bht_77;
        CData/*2:0*/ __PVT__bht_81;
        CData/*2:0*/ __PVT__bht_84;
        CData/*2:0*/ __PVT__bht_88;
        CData/*2:0*/ __PVT__bht_89;
        CData/*2:0*/ __PVT__bht_50;
        CData/*2:0*/ __PVT__bht_52;
        CData/*2:0*/ __PVT__bht_53;
        CData/*2:0*/ __PVT__bht_54;
        CData/*2:0*/ __PVT__bht_55;
        CData/*2:0*/ __PVT__bht_100;
        CData/*2:0*/ __PVT__bht_109;
        CData/*2:0*/ __PVT__bht_110;
        CData/*2:0*/ __PVT__bht_111;
        CData/*2:0*/ __PVT__bht_112;
        CData/*2:0*/ __PVT__bht_113;
        CData/*2:0*/ __PVT__bht_114;
        CData/*2:0*/ __PVT__bht_115;
        CData/*2:0*/ __PVT__bht_116;
        CData/*2:0*/ __PVT__bht_117;
        CData/*2:0*/ __PVT__bht_47;
        CData/*2:0*/ __PVT__bht_48;
        CData/*2:0*/ __PVT__bht_49;
        CData/*2:0*/ __PVT__bht_51;
        CData/*2:0*/ __PVT__bht_64;
        CData/*2:0*/ __PVT__bht_41;
        CData/*2:0*/ __PVT__bht_42;
        CData/*2:0*/ __PVT__bht_46;
        CData/*2:0*/ __PVT__bht_61;
        CData/*2:0*/ __PVT__bht_62;
        CData/*2:0*/ __PVT__bht_63;
        CData/*2:0*/ __PVT__bht_78;
        CData/*2:0*/ __PVT__bht_79;
        CData/*2:0*/ __PVT__bht_80;
        CData/*2:0*/ __PVT__bht_83;
        CData/*2:0*/ __PVT__bht_85;
        CData/*2:0*/ __PVT__bht_86;
        CData/*2:0*/ __PVT__bht_87;
        CData/*2:0*/ __PVT__bht_90;
        CData/*2:0*/ __PVT__bht_93;
        CData/*2:0*/ __PVT__bht_94;
    };
    struct {
        CData/*2:0*/ __PVT__bht_127;
        CData/*2:0*/ __PVT__bht_72;
        CData/*2:0*/ __PVT__bht_73;
        CData/*2:0*/ __PVT__bht_82;
        CData/*2:0*/ __PVT__bht_91;
        VL_IN8(__PVT__io_ar_addr,6,0);
        CData/*2:0*/ __PVT__bht_120;
        CData/*2:0*/ __Vdly__bht_120;
        CData/*2:0*/ __Vdly__bht_127;
        CData/*2:0*/ __Vdly__bht_10;
        CData/*2:0*/ __Vdly__bht_93;
        CData/*2:0*/ __Vdly__bht_94;
        CData/*2:0*/ __Vdly__bht_41;
        CData/*2:0*/ __Vdly__bht_42;
        CData/*2:0*/ __Vdly__bht_46;
        CData/*2:0*/ __Vdly__bht_61;
        CData/*2:0*/ __Vdly__bht_62;
        CData/*2:0*/ __Vdly__bht_63;
        CData/*2:0*/ __Vdly__bht_78;
        CData/*2:0*/ __Vdly__bht_79;
        CData/*2:0*/ __Vdly__bht_80;
        CData/*2:0*/ __Vdly__bht_83;
        CData/*2:0*/ __Vdly__bht_85;
        CData/*2:0*/ __Vdly__bht_86;
        CData/*2:0*/ __Vdly__bht_87;
        CData/*2:0*/ __Vdly__bht_90;
        CData/*2:0*/ __Vdly__bht_47;
        CData/*2:0*/ __Vdly__bht_48;
        CData/*2:0*/ __Vdly__bht_49;
        CData/*2:0*/ __Vdly__bht_51;
        CData/*2:0*/ __Vdly__bht_64;
        CData/*2:0*/ __Vdly__bht_72;
        CData/*2:0*/ __Vdly__bht_73;
        CData/*2:0*/ __Vdly__bht_82;
        CData/*2:0*/ __Vdly__bht_91;
        CData/*2:0*/ __PVT__bht_0;
        CData/*2:0*/ __PVT__bht_1;
        CData/*2:0*/ __PVT__bht_2;
        CData/*2:0*/ __PVT__bht_3;
        CData/*2:0*/ __PVT__bht_4;
        CData/*2:0*/ __PVT__bht_5;
        CData/*2:0*/ __PVT__bht_6;
        CData/*2:0*/ __PVT__bht_7;
        CData/*2:0*/ __PVT__bht_8;
        CData/*2:0*/ __PVT__bht_9;
        CData/*2:0*/ __PVT__bht_10;
        CData/*2:0*/ __PVT__bht_11;
        CData/*2:0*/ __PVT__bht_12;
        CData/*2:0*/ __PVT__bht_13;
        CData/*2:0*/ __PVT__bht_14;
        CData/*2:0*/ __PVT__bht_15;
        CData/*2:0*/ __PVT__bht_16;
        CData/*2:0*/ __PVT___GEN_1;
        CData/*2:0*/ __PVT___GEN_2;
        CData/*2:0*/ __PVT___GEN_3;
        CData/*2:0*/ __PVT___GEN_4;
        CData/*2:0*/ __PVT___GEN_5;
        CData/*2:0*/ __PVT___GEN_6;
        CData/*2:0*/ __PVT___GEN_7;
        CData/*2:0*/ __PVT___GEN_8;
        CData/*2:0*/ __PVT___GEN_9;
        CData/*2:0*/ __PVT___GEN_10;
        CData/*2:0*/ __PVT___GEN_11;
        CData/*2:0*/ __PVT___GEN_12;
    };
    struct {
        CData/*2:0*/ __PVT___GEN_13;
        CData/*2:0*/ __PVT___GEN_14;
        CData/*2:0*/ __PVT___GEN_15;
        CData/*2:0*/ __Vdly__bht_0;
        CData/*2:0*/ __Vdly__bht_1;
        CData/*2:0*/ __Vdly__bht_2;
        CData/*2:0*/ __Vdly__bht_3;
        CData/*2:0*/ __Vdly__bht_4;
        CData/*2:0*/ __Vdly__bht_5;
        CData/*2:0*/ __Vdly__bht_6;
        CData/*2:0*/ __Vdly__bht_7;
        CData/*2:0*/ __Vdly__bht_8;
        CData/*2:0*/ __Vdly__bht_9;
        CData/*2:0*/ __Vdly__bht_11;
        CData/*2:0*/ __Vdly__bht_12;
        CData/*2:0*/ __Vdly__bht_13;
        CData/*2:0*/ __Vdly__bht_14;
        CData/*2:0*/ __Vdly__bht_15;
        CData/*2:0*/ __Vdly__bht_16;
        CData/*2:0*/ __Vdly__bht_18;
        CData/*2:0*/ __Vdly__bht_22;
        CData/*2:0*/ __Vdly__bht_23;
        CData/*2:0*/ __Vdly__bht_24;
        CData/*2:0*/ __Vdly__bht_25;
        CData/*2:0*/ __Vdly__bht_26;
        CData/*2:0*/ __Vdly__bht_27;
        CData/*2:0*/ __Vdly__bht_29;
        CData/*2:0*/ __Vdly__bht_30;
        CData/*2:0*/ __Vdly__bht_31;
        CData/*2:0*/ __Vdly__bht_32;
        CData/*2:0*/ __Vdly__bht_33;
        CData/*2:0*/ __Vdly__bht_34;
        CData/*2:0*/ __Vdly__bht_35;
        CData/*2:0*/ __PVT__bht_18;
        CData/*2:0*/ __PVT__bht_22;
        CData/*2:0*/ __PVT__bht_23;
        CData/*2:0*/ __PVT__bht_24;
        CData/*2:0*/ __PVT__bht_25;
        CData/*2:0*/ __PVT__bht_26;
        CData/*2:0*/ __PVT__bht_27;
        CData/*2:0*/ __PVT__bht_29;
        CData/*2:0*/ __PVT__bht_30;
        CData/*2:0*/ __PVT__bht_31;
        CData/*2:0*/ __PVT__bht_32;
        CData/*2:0*/ __PVT__bht_33;
        CData/*2:0*/ __PVT__bht_34;
        CData/*2:0*/ __PVT__bht_35;
        CData/*2:0*/ __PVT___GEN_16;
        CData/*2:0*/ __PVT___GEN_17;
        CData/*2:0*/ __PVT___GEN_18;
        CData/*2:0*/ __PVT___GEN_19;
        CData/*2:0*/ __PVT___GEN_20;
        CData/*2:0*/ __PVT___GEN_21;
        CData/*2:0*/ __PVT___GEN_22;
        CData/*2:0*/ __PVT___GEN_23;
        CData/*2:0*/ __PVT___GEN_24;
        CData/*2:0*/ __PVT___GEN_25;
        CData/*2:0*/ __PVT___GEN_26;
        CData/*2:0*/ __PVT___GEN_27;
        CData/*2:0*/ __PVT___GEN_28;
        CData/*2:0*/ __PVT___GEN_29;
        CData/*2:0*/ __PVT___GEN_30;
        CData/*2:0*/ __PVT___GEN_31;
        CData/*2:0*/ __PVT___GEN_32;
    };
    struct {
        CData/*2:0*/ __PVT___GEN_33;
        CData/*2:0*/ __PVT___GEN_34;
        CData/*2:0*/ __PVT___GEN_35;
        CData/*2:0*/ __PVT___GEN_36;
        VL_IN8(__PVT__clock,0,0);
    };

    // INTERNAL VARIABLES
    Vmycpu_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmycpu_top_BHT(Vmycpu_top__Syms* symsp, const char* name);
    ~Vmycpu_top_BHT();
    VL_UNCOPYABLE(Vmycpu_top_BHT);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
