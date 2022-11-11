// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_regfile.h"

VL_INLINE_OPT void Vmycpu_top_regfile___nba_sequent__TOP__mycpu_top__u_riscv_cpu___regfile__0(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___nba_sequent__TOP__mycpu_top__u_riscv_cpu___regfile__0\n"); );
    // Body
    vlSelf->__Vdly__regs_30 = vlSelf->__PVT__regs_30;
    vlSelf->__Vdly__regs_29 = vlSelf->__PVT__regs_29;
    vlSelf->__Vdly__regs_28 = vlSelf->__PVT__regs_28;
    vlSelf->__Vdly__regs_27 = vlSelf->__PVT__regs_27;
    vlSelf->__Vdly__regs_26 = vlSelf->__PVT__regs_26;
    vlSelf->__Vdly__regs_25 = vlSelf->__PVT__regs_25;
    vlSelf->__Vdly__regs_24 = vlSelf->__PVT__regs_24;
    vlSelf->__Vdly__regs_23 = vlSelf->__PVT__regs_23;
    vlSelf->__Vdly__regs_22 = vlSelf->__PVT__regs_22;
    vlSelf->__Vdly__regs_21 = vlSelf->__PVT__regs_21;
    vlSelf->__Vdly__regs_20 = vlSelf->__PVT__regs_20;
    vlSelf->__Vdly__regs_19 = vlSelf->__PVT__regs_19;
    vlSelf->__Vdly__regs_18 = vlSelf->__PVT__regs_18;
    vlSelf->__Vdly__regs_17 = vlSelf->__PVT__regs_17;
    vlSelf->__Vdly__regs_16 = vlSelf->__PVT__regs_16;
    vlSelf->__Vdly__regs_15 = vlSelf->__PVT__regs_15;
    vlSelf->__Vdly__regs_14 = vlSelf->__PVT__regs_14;
    vlSelf->__Vdly__regs_13 = vlSelf->__PVT__regs_13;
    vlSelf->__Vdly__regs_12 = vlSelf->__PVT__regs_12;
    vlSelf->__Vdly__regs_11 = vlSelf->__PVT__regs_11;
    vlSelf->__Vdly__regs_10 = vlSelf->__PVT__regs_10;
    vlSelf->__Vdly__regs_9 = vlSelf->__PVT__regs_9;
    vlSelf->__Vdly__regs_8 = vlSelf->__PVT__regs_8;
    vlSelf->__Vdly__regs_7 = vlSelf->__PVT__regs_7;
    vlSelf->__Vdly__regs_6 = vlSelf->__PVT__regs_6;
    vlSelf->__Vdly__regs_5 = vlSelf->__PVT__regs_5;
    vlSelf->__Vdly__regs_4 = vlSelf->__PVT__regs_4;
    vlSelf->__Vdly__regs_3 = vlSelf->__PVT__regs_3;
    vlSelf->__Vdly__regs_2 = vlSelf->__PVT__regs_2;
    vlSelf->__Vdly__regs_1 = vlSelf->__PVT__regs_1;
    vlSelf->__Vdly__regs_0 = vlSelf->__PVT__regs_0;
}

VL_INLINE_OPT void Vmycpu_top_regfile___nba_sequent__TOP__mycpu_top__u_riscv_cpu___regfile__1(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___nba_sequent__TOP__mycpu_top__u_riscv_cpu___regfile__1\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__regs_30 = 0ULL;
    } else if ((0x1eU == (IData)(vlSelf->__PVT__io_A3))) {
        if (((IData)(vlSelf->__PVT__io_WE3) & (0U != (IData)(vlSelf->__PVT__io_A3)))) {
            vlSelf->__Vdly__regs_30 = vlSelf->__PVT__io_WD3;
        } else if ((0x1fU == (IData)(vlSelf->__PVT__io_A3))) {
            vlSelf->__Vdly__regs_30 = vlSelf->__PVT__regs_31;
        } else if ((0x1eU != (IData)(vlSelf->__PVT__io_A3))) {
            vlSelf->__Vdly__regs_30 = vlSelf->__PVT___GEN_29;
        }
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__regs_29 = 0ULL;
    } else if ((0x1dU == (IData)(vlSelf->__PVT__io_A3))) {
        vlSelf->__Vdly__regs_29 = (((IData)(vlSelf->__PVT__io_WE3) 
                                    & (0U != (IData)(vlSelf->__PVT__io_A3)))
                                    ? vlSelf->__PVT__io_WD3
                                    : ((0x1fU == (IData)(vlSelf->__PVT__io_A3))
                                        ? vlSelf->__PVT__regs_31
                                        : ((0x1eU == (IData)(vlSelf->__PVT__io_A3))
                                            ? vlSelf->__PVT__regs_30
                                            : vlSelf->__PVT___GEN_29)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__regs_28 = 0ULL;
    } else if ((0x1cU == (IData)(vlSelf->__PVT__io_A3))) {
        vlSelf->__Vdly__regs_28 = (((IData)(vlSelf->__PVT__io_WE3) 
                                    & (0U != (IData)(vlSelf->__PVT__io_A3)))
                                    ? vlSelf->__PVT__io_WD3
                                    : ((0x1fU == (IData)(vlSelf->__PVT__io_A3))
                                        ? vlSelf->__PVT__regs_31
                                        : ((0x1eU == (IData)(vlSelf->__PVT__io_A3))
                                            ? vlSelf->__PVT__regs_30
                                            : vlSelf->__PVT___GEN_29)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__regs_27 = 0ULL;
    } else if ((0x1bU == (IData)(vlSelf->__PVT__io_A3))) {
        vlSelf->__Vdly__regs_27 = (((IData)(vlSelf->__PVT__io_WE3) 
                                    & (0U != (IData)(vlSelf->__PVT__io_A3)))
                                    ? vlSelf->__PVT__io_WD3
                                    : ((0x1fU == (IData)(vlSelf->__PVT__io_A3))
                                        ? vlSelf->__PVT__regs_31
                                        : ((0x1eU == (IData)(vlSelf->__PVT__io_A3))
                                            ? vlSelf->__PVT__regs_30
                                            : vlSelf->__PVT___GEN_29)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__regs_26 = 0ULL;
    } else if ((0x1aU == (IData)(vlSelf->__PVT__io_A3))) {
        vlSelf->__Vdly__regs_26 = (((IData)(vlSelf->__PVT__io_WE3) 
                                    & (0U != (IData)(vlSelf->__PVT__io_A3)))
                                    ? vlSelf->__PVT__io_WD3
                                    : ((0x1fU == (IData)(vlSelf->__PVT__io_A3))
                                        ? vlSelf->__PVT__regs_31
                                        : ((0x1eU == (IData)(vlSelf->__PVT__io_A3))
                                            ? vlSelf->__PVT__regs_30
                                            : vlSelf->__PVT___GEN_29)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__regs_25 = 0ULL;
    } else if ((0x19U == (IData)(vlSelf->__PVT__io_A3))) {
        vlSelf->__Vdly__regs_25 = (((IData)(vlSelf->__PVT__io_WE3) 
                                    & (0U != (IData)(vlSelf->__PVT__io_A3)))
                                    ? vlSelf->__PVT__io_WD3
                                    : ((0x1fU == (IData)(vlSelf->__PVT__io_A3))
                                        ? vlSelf->__PVT__regs_31
                                        : ((0x1eU == (IData)(vlSelf->__PVT__io_A3))
                                            ? vlSelf->__PVT__regs_30
                                            : vlSelf->__PVT___GEN_29)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__regs_24 = 0ULL;
    } else if ((0x18U == (IData)(vlSelf->__PVT__io_A3))) {
        vlSelf->__Vdly__regs_24 = (((IData)(vlSelf->__PVT__io_WE3) 
                                    & (0U != (IData)(vlSelf->__PVT__io_A3)))
                                    ? vlSelf->__PVT__io_WD3
                                    : ((0x1fU == (IData)(vlSelf->__PVT__io_A3))
                                        ? vlSelf->__PVT__regs_31
                                        : ((0x1eU == (IData)(vlSelf->__PVT__io_A3))
                                            ? vlSelf->__PVT__regs_30
                                            : vlSelf->__PVT___GEN_29)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__regs_23 = 0ULL;
    } else if ((0x17U == (IData)(vlSelf->__PVT__io_A3))) {
        vlSelf->__Vdly__regs_23 = (((IData)(vlSelf->__PVT__io_WE3) 
                                    & (0U != (IData)(vlSelf->__PVT__io_A3)))
                                    ? vlSelf->__PVT__io_WD3
                                    : ((0x1fU == (IData)(vlSelf->__PVT__io_A3))
                                        ? vlSelf->__PVT__regs_31
                                        : ((0x1eU == (IData)(vlSelf->__PVT__io_A3))
                                            ? vlSelf->__PVT__regs_30
                                            : vlSelf->__PVT___GEN_29)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__regs_22 = 0ULL;
    } else if ((0x16U == (IData)(vlSelf->__PVT__io_A3))) {
        vlSelf->__Vdly__regs_22 = (((IData)(vlSelf->__PVT__io_WE3) 
                                    & (0U != (IData)(vlSelf->__PVT__io_A3)))
                                    ? vlSelf->__PVT__io_WD3
                                    : ((0x1fU == (IData)(vlSelf->__PVT__io_A3))
                                        ? vlSelf->__PVT__regs_31
                                        : ((0x1eU == (IData)(vlSelf->__PVT__io_A3))
                                            ? vlSelf->__PVT__regs_30
                                            : vlSelf->__PVT___GEN_29)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__regs_21 = 0ULL;
    } else if ((0x15U == (IData)(vlSelf->__PVT__io_A3))) {
        vlSelf->__Vdly__regs_21 = (((IData)(vlSelf->__PVT__io_WE3) 
                                    & (0U != (IData)(vlSelf->__PVT__io_A3)))
                                    ? vlSelf->__PVT__io_WD3
                                    : ((0x1fU == (IData)(vlSelf->__PVT__io_A3))
                                        ? vlSelf->__PVT__regs_31
                                        : ((0x1eU == (IData)(vlSelf->__PVT__io_A3))
                                            ? vlSelf->__PVT__regs_30
                                            : vlSelf->__PVT___GEN_29)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__regs_20 = 0ULL;
    } else if ((0x14U == (IData)(vlSelf->__PVT__io_A3))) {
        vlSelf->__Vdly__regs_20 = (((IData)(vlSelf->__PVT__io_WE3) 
                                    & (0U != (IData)(vlSelf->__PVT__io_A3)))
                                    ? vlSelf->__PVT__io_WD3
                                    : ((0x1fU == (IData)(vlSelf->__PVT__io_A3))
                                        ? vlSelf->__PVT__regs_31
                                        : ((0x1eU == (IData)(vlSelf->__PVT__io_A3))
                                            ? vlSelf->__PVT__regs_30
                                            : vlSelf->__PVT___GEN_29)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__regs_19 = 0ULL;
    } else if ((0x13U == (IData)(vlSelf->__PVT__io_A3))) {
        vlSelf->__Vdly__regs_19 = (((IData)(vlSelf->__PVT__io_WE3) 
                                    & (0U != (IData)(vlSelf->__PVT__io_A3)))
                                    ? vlSelf->__PVT__io_WD3
                                    : ((0x1fU == (IData)(vlSelf->__PVT__io_A3))
                                        ? vlSelf->__PVT__regs_31
                                        : ((0x1eU == (IData)(vlSelf->__PVT__io_A3))
                                            ? vlSelf->__PVT__regs_30
                                            : vlSelf->__PVT___GEN_29)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__regs_18 = 0ULL;
    } else if ((0x12U == (IData)(vlSelf->__PVT__io_A3))) {
        vlSelf->__Vdly__regs_18 = (((IData)(vlSelf->__PVT__io_WE3) 
                                    & (0U != (IData)(vlSelf->__PVT__io_A3)))
                                    ? vlSelf->__PVT__io_WD3
                                    : ((0x1fU == (IData)(vlSelf->__PVT__io_A3))
                                        ? vlSelf->__PVT__regs_31
                                        : ((0x1eU == (IData)(vlSelf->__PVT__io_A3))
                                            ? vlSelf->__PVT__regs_30
                                            : vlSelf->__PVT___GEN_29)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__regs_17 = 0ULL;
    } else if ((0x11U == (IData)(vlSelf->__PVT__io_A3))) {
        vlSelf->__Vdly__regs_17 = (((IData)(vlSelf->__PVT__io_WE3) 
                                    & (0U != (IData)(vlSelf->__PVT__io_A3)))
                                    ? vlSelf->__PVT__io_WD3
                                    : ((0x1fU == (IData)(vlSelf->__PVT__io_A3))
                                        ? vlSelf->__PVT__regs_31
                                        : ((0x1eU == (IData)(vlSelf->__PVT__io_A3))
                                            ? vlSelf->__PVT__regs_30
                                            : vlSelf->__PVT___GEN_29)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__regs_16 = 0ULL;
    } else if ((0x10U == (IData)(vlSelf->__PVT__io_A3))) {
        vlSelf->__Vdly__regs_16 = (((IData)(vlSelf->__PVT__io_WE3) 
                                    & (0U != (IData)(vlSelf->__PVT__io_A3)))
                                    ? vlSelf->__PVT__io_WD3
                                    : ((0x1fU == (IData)(vlSelf->__PVT__io_A3))
                                        ? vlSelf->__PVT__regs_31
                                        : ((0x1eU == (IData)(vlSelf->__PVT__io_A3))
                                            ? vlSelf->__PVT__regs_30
                                            : vlSelf->__PVT___GEN_29)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__regs_15 = 0ULL;
    } else if ((0xfU == (IData)(vlSelf->__PVT__io_A3))) {
        vlSelf->__Vdly__regs_15 = (((IData)(vlSelf->__PVT__io_WE3) 
                                    & (0U != (IData)(vlSelf->__PVT__io_A3)))
                                    ? vlSelf->__PVT__io_WD3
                                    : ((0x1fU == (IData)(vlSelf->__PVT__io_A3))
                                        ? vlSelf->__PVT__regs_31
                                        : ((0x1eU == (IData)(vlSelf->__PVT__io_A3))
                                            ? vlSelf->__PVT__regs_30
                                            : vlSelf->__PVT___GEN_29)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__regs_14 = 0ULL;
    } else if ((0xeU == (IData)(vlSelf->__PVT__io_A3))) {
        vlSelf->__Vdly__regs_14 = (((IData)(vlSelf->__PVT__io_WE3) 
                                    & (0U != (IData)(vlSelf->__PVT__io_A3)))
                                    ? vlSelf->__PVT__io_WD3
                                    : ((0x1fU == (IData)(vlSelf->__PVT__io_A3))
                                        ? vlSelf->__PVT__regs_31
                                        : ((0x1eU == (IData)(vlSelf->__PVT__io_A3))
                                            ? vlSelf->__PVT__regs_30
                                            : vlSelf->__PVT___GEN_29)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__regs_13 = 0ULL;
    } else if ((0xdU == (IData)(vlSelf->__PVT__io_A3))) {
        vlSelf->__Vdly__regs_13 = (((IData)(vlSelf->__PVT__io_WE3) 
                                    & (0U != (IData)(vlSelf->__PVT__io_A3)))
                                    ? vlSelf->__PVT__io_WD3
                                    : ((0x1fU == (IData)(vlSelf->__PVT__io_A3))
                                        ? vlSelf->__PVT__regs_31
                                        : ((0x1eU == (IData)(vlSelf->__PVT__io_A3))
                                            ? vlSelf->__PVT__regs_30
                                            : vlSelf->__PVT___GEN_29)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__regs_12 = 0ULL;
    } else if ((0xcU == (IData)(vlSelf->__PVT__io_A3))) {
        vlSelf->__Vdly__regs_12 = (((IData)(vlSelf->__PVT__io_WE3) 
                                    & (0U != (IData)(vlSelf->__PVT__io_A3)))
                                    ? vlSelf->__PVT__io_WD3
                                    : ((0x1fU == (IData)(vlSelf->__PVT__io_A3))
                                        ? vlSelf->__PVT__regs_31
                                        : ((0x1eU == (IData)(vlSelf->__PVT__io_A3))
                                            ? vlSelf->__PVT__regs_30
                                            : vlSelf->__PVT___GEN_29)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__regs_11 = 0ULL;
    } else if ((0xbU == (IData)(vlSelf->__PVT__io_A3))) {
        vlSelf->__Vdly__regs_11 = (((IData)(vlSelf->__PVT__io_WE3) 
                                    & (0U != (IData)(vlSelf->__PVT__io_A3)))
                                    ? vlSelf->__PVT__io_WD3
                                    : ((0x1fU == (IData)(vlSelf->__PVT__io_A3))
                                        ? vlSelf->__PVT__regs_31
                                        : ((0x1eU == (IData)(vlSelf->__PVT__io_A3))
                                            ? vlSelf->__PVT__regs_30
                                            : vlSelf->__PVT___GEN_29)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__regs_10 = 0ULL;
    } else if ((0xaU == (IData)(vlSelf->__PVT__io_A3))) {
        vlSelf->__Vdly__regs_10 = (((IData)(vlSelf->__PVT__io_WE3) 
                                    & (0U != (IData)(vlSelf->__PVT__io_A3)))
                                    ? vlSelf->__PVT__io_WD3
                                    : ((0x1fU == (IData)(vlSelf->__PVT__io_A3))
                                        ? vlSelf->__PVT__regs_31
                                        : ((0x1eU == (IData)(vlSelf->__PVT__io_A3))
                                            ? vlSelf->__PVT__regs_30
                                            : vlSelf->__PVT___GEN_29)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__regs_9 = 0ULL;
    } else if ((9U == (IData)(vlSelf->__PVT__io_A3))) {
        vlSelf->__Vdly__regs_9 = (((IData)(vlSelf->__PVT__io_WE3) 
                                   & (0U != (IData)(vlSelf->__PVT__io_A3)))
                                   ? vlSelf->__PVT__io_WD3
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_A3))
                                       ? vlSelf->__PVT__regs_31
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_A3))
                                           ? vlSelf->__PVT__regs_30
                                           : vlSelf->__PVT___GEN_29)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__regs_8 = 0ULL;
    } else if ((8U == (IData)(vlSelf->__PVT__io_A3))) {
        vlSelf->__Vdly__regs_8 = (((IData)(vlSelf->__PVT__io_WE3) 
                                   & (0U != (IData)(vlSelf->__PVT__io_A3)))
                                   ? vlSelf->__PVT__io_WD3
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_A3))
                                       ? vlSelf->__PVT__regs_31
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_A3))
                                           ? vlSelf->__PVT__regs_30
                                           : vlSelf->__PVT___GEN_29)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__regs_7 = 0ULL;
    } else if ((7U == (IData)(vlSelf->__PVT__io_A3))) {
        vlSelf->__Vdly__regs_7 = (((IData)(vlSelf->__PVT__io_WE3) 
                                   & (0U != (IData)(vlSelf->__PVT__io_A3)))
                                   ? vlSelf->__PVT__io_WD3
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_A3))
                                       ? vlSelf->__PVT__regs_31
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_A3))
                                           ? vlSelf->__PVT__regs_30
                                           : vlSelf->__PVT___GEN_29)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__regs_6 = 0ULL;
    } else if ((6U == (IData)(vlSelf->__PVT__io_A3))) {
        vlSelf->__Vdly__regs_6 = (((IData)(vlSelf->__PVT__io_WE3) 
                                   & (0U != (IData)(vlSelf->__PVT__io_A3)))
                                   ? vlSelf->__PVT__io_WD3
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_A3))
                                       ? vlSelf->__PVT__regs_31
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_A3))
                                           ? vlSelf->__PVT__regs_30
                                           : vlSelf->__PVT___GEN_29)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__regs_5 = 0ULL;
    } else if ((5U == (IData)(vlSelf->__PVT__io_A3))) {
        vlSelf->__Vdly__regs_5 = (((IData)(vlSelf->__PVT__io_WE3) 
                                   & (0U != (IData)(vlSelf->__PVT__io_A3)))
                                   ? vlSelf->__PVT__io_WD3
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_A3))
                                       ? vlSelf->__PVT__regs_31
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_A3))
                                           ? vlSelf->__PVT__regs_30
                                           : vlSelf->__PVT___GEN_29)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__regs_4 = 0ULL;
    } else if ((4U == (IData)(vlSelf->__PVT__io_A3))) {
        vlSelf->__Vdly__regs_4 = (((IData)(vlSelf->__PVT__io_WE3) 
                                   & (0U != (IData)(vlSelf->__PVT__io_A3)))
                                   ? vlSelf->__PVT__io_WD3
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_A3))
                                       ? vlSelf->__PVT__regs_31
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_A3))
                                           ? vlSelf->__PVT__regs_30
                                           : vlSelf->__PVT___GEN_29)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__regs_3 = 0ULL;
    } else if ((3U == (IData)(vlSelf->__PVT__io_A3))) {
        vlSelf->__Vdly__regs_3 = (((IData)(vlSelf->__PVT__io_WE3) 
                                   & (0U != (IData)(vlSelf->__PVT__io_A3)))
                                   ? vlSelf->__PVT__io_WD3
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_A3))
                                       ? vlSelf->__PVT__regs_31
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_A3))
                                           ? vlSelf->__PVT__regs_30
                                           : vlSelf->__PVT___GEN_29)));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__regs_2 = 0ULL;
    } else if ((2U == (IData)(vlSelf->__PVT__io_A3))) {
        vlSelf->__Vdly__regs_2 = (((IData)(vlSelf->__PVT__io_WE3) 
                                   & (0U != (IData)(vlSelf->__PVT__io_A3)))
                                   ? vlSelf->__PVT__io_WD3
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_A3))
                                       ? vlSelf->__PVT__regs_31
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_A3))
                                           ? vlSelf->__PVT__regs_30
                                           : vlSelf->__PVT___GEN_29)));
    }
    vlSelf->__Vdly__regs_0 = ((IData)(vlSelf->__PVT__reset)
                               ? 0ULL : ((0U == (IData)(vlSelf->__PVT__io_A3))
                                          ? (((IData)(vlSelf->__PVT__io_WE3) 
                                              & (0U 
                                                 != (IData)(vlSelf->__PVT__io_A3)))
                                              ? vlSelf->__PVT__io_WD3
                                              : ((0x1fU 
                                                  == (IData)(vlSelf->__PVT__io_A3))
                                                  ? vlSelf->__PVT__regs_31
                                                  : 
                                                 ((0x1eU 
                                                   == (IData)(vlSelf->__PVT__io_A3))
                                                   ? vlSelf->__PVT__regs_30
                                                   : vlSelf->__PVT___GEN_29)))
                                          : 0ULL));
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__regs_1 = 0ULL;
    } else if ((1U == (IData)(vlSelf->__PVT__io_A3))) {
        vlSelf->__Vdly__regs_1 = (((IData)(vlSelf->__PVT__io_WE3) 
                                   & (0U != (IData)(vlSelf->__PVT__io_A3)))
                                   ? vlSelf->__PVT__io_WD3
                                   : ((0x1fU == (IData)(vlSelf->__PVT__io_A3))
                                       ? vlSelf->__PVT__regs_31
                                       : ((0x1eU == (IData)(vlSelf->__PVT__io_A3))
                                           ? vlSelf->__PVT__regs_30
                                           : vlSelf->__PVT___GEN_29)));
    }
}

VL_INLINE_OPT void Vmycpu_top_regfile___nba_sequent__TOP__mycpu_top__u_riscv_cpu___regfile__2(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___nba_sequent__TOP__mycpu_top__u_riscv_cpu___regfile__2\n"); );
    // Body
    vlSelf->__PVT__regs_29 = vlSelf->__Vdly__regs_29;
    vlSelf->__PVT__regs_28 = vlSelf->__Vdly__regs_28;
    vlSelf->__PVT__regs_27 = vlSelf->__Vdly__regs_27;
    vlSelf->__PVT__regs_26 = vlSelf->__Vdly__regs_26;
    vlSelf->__PVT__regs_25 = vlSelf->__Vdly__regs_25;
    vlSelf->__PVT__regs_24 = vlSelf->__Vdly__regs_24;
    vlSelf->__PVT__regs_23 = vlSelf->__Vdly__regs_23;
    vlSelf->__PVT__regs_22 = vlSelf->__Vdly__regs_22;
    vlSelf->__PVT__regs_21 = vlSelf->__Vdly__regs_21;
    vlSelf->__PVT__regs_20 = vlSelf->__Vdly__regs_20;
    vlSelf->__PVT__regs_19 = vlSelf->__Vdly__regs_19;
    vlSelf->__PVT__regs_18 = vlSelf->__Vdly__regs_18;
    vlSelf->__PVT__regs_17 = vlSelf->__Vdly__regs_17;
    vlSelf->__PVT__regs_16 = vlSelf->__Vdly__regs_16;
    vlSelf->__PVT__regs_15 = vlSelf->__Vdly__regs_15;
    vlSelf->__PVT__regs_14 = vlSelf->__Vdly__regs_14;
    vlSelf->__PVT__regs_13 = vlSelf->__Vdly__regs_13;
    vlSelf->__PVT__regs_12 = vlSelf->__Vdly__regs_12;
    vlSelf->__PVT__regs_11 = vlSelf->__Vdly__regs_11;
    vlSelf->__PVT__regs_10 = vlSelf->__Vdly__regs_10;
    vlSelf->__PVT__regs_9 = vlSelf->__Vdly__regs_9;
    vlSelf->__PVT__regs_8 = vlSelf->__Vdly__regs_8;
    vlSelf->__PVT__regs_7 = vlSelf->__Vdly__regs_7;
    vlSelf->__PVT__regs_6 = vlSelf->__Vdly__regs_6;
    vlSelf->__PVT__regs_5 = vlSelf->__Vdly__regs_5;
    vlSelf->__PVT__regs_4 = vlSelf->__Vdly__regs_4;
    vlSelf->__PVT__regs_3 = vlSelf->__Vdly__regs_3;
    vlSelf->__PVT__regs_2 = vlSelf->__Vdly__regs_2;
    vlSelf->__PVT__regs_1 = vlSelf->__Vdly__regs_1;
    vlSelf->__PVT__regs_0 = vlSelf->__Vdly__regs_0;
    vlSelf->__Vdly__regs_31 = vlSelf->__PVT__regs_31;
}

VL_INLINE_OPT void Vmycpu_top_regfile___nba_sequent__TOP__mycpu_top__u_riscv_cpu___regfile__3(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___nba_sequent__TOP__mycpu_top__u_riscv_cpu___regfile__3\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_h9007d3da__0;
    VlWide<6>/*191:0*/ __Vtemp_hdc2e6b48__0;
    VlWide<8>/*255:0*/ __Vtemp_h04b4a9c9__0;
    VlWide<10>/*319:0*/ __Vtemp_h56da613e__0;
    VlWide<12>/*383:0*/ __Vtemp_h9f3f0159__0;
    VlWide<14>/*447:0*/ __Vtemp_h27490dd5__0;
    VlWide<16>/*511:0*/ __Vtemp_hf435242b__0;
    VlWide<4>/*127:0*/ __Vtemp_h790169ef__0;
    VlWide<6>/*191:0*/ __Vtemp_h52d597f6__0;
    VlWide<8>/*255:0*/ __Vtemp_h85d18167__0;
    VlWide<10>/*319:0*/ __Vtemp_h37cd3436__0;
    VlWide<12>/*383:0*/ __Vtemp_h67350294__0;
    VlWide<14>/*447:0*/ __Vtemp_he18da5cb__0;
    VlWide<16>/*511:0*/ __Vtemp_hc2329c0b__0;
    // Body
    VL_CONCAT_WQQ(128,64,64, __Vtemp_h9007d3da__0, vlSelf->__PVT__regs_7, vlSelf->__PVT__regs_6);
    VL_CONCAT_WWQ(192,128,64, __Vtemp_hdc2e6b48__0, __Vtemp_h9007d3da__0, vlSelf->__PVT__regs_5);
    VL_CONCAT_WWQ(256,192,64, __Vtemp_h04b4a9c9__0, __Vtemp_hdc2e6b48__0, vlSelf->__PVT__regs_4);
    VL_CONCAT_WWQ(320,256,64, __Vtemp_h56da613e__0, __Vtemp_h04b4a9c9__0, vlSelf->__PVT__regs_3);
    VL_CONCAT_WWQ(384,320,64, __Vtemp_h9f3f0159__0, __Vtemp_h56da613e__0, vlSelf->__PVT__regs_2);
    VL_CONCAT_WWQ(448,384,64, __Vtemp_h27490dd5__0, __Vtemp_h9f3f0159__0, vlSelf->__PVT__regs_1);
    VL_CONCAT_WWQ(512,448,64, __Vtemp_hf435242b__0, __Vtemp_h27490dd5__0, vlSelf->__PVT__regs_0);
    VL_ASSIGN_W(512,vlSelf->__PVT__io_reg_file_alL_out_lo_lo, __Vtemp_hf435242b__0);
    VL_CONCAT_WQQ(128,64,64, __Vtemp_h790169ef__0, vlSelf->__PVT__regs_23, vlSelf->__PVT__regs_22);
    VL_CONCAT_WWQ(192,128,64, __Vtemp_h52d597f6__0, __Vtemp_h790169ef__0, vlSelf->__PVT__regs_21);
    VL_CONCAT_WWQ(256,192,64, __Vtemp_h85d18167__0, __Vtemp_h52d597f6__0, vlSelf->__PVT__regs_20);
    VL_CONCAT_WWQ(320,256,64, __Vtemp_h37cd3436__0, __Vtemp_h85d18167__0, vlSelf->__PVT__regs_19);
    VL_CONCAT_WWQ(384,320,64, __Vtemp_h67350294__0, __Vtemp_h37cd3436__0, vlSelf->__PVT__regs_18);
    VL_CONCAT_WWQ(448,384,64, __Vtemp_he18da5cb__0, __Vtemp_h67350294__0, vlSelf->__PVT__regs_17);
    VL_CONCAT_WWQ(512,448,64, __Vtemp_hc2329c0b__0, __Vtemp_he18da5cb__0, vlSelf->__PVT__regs_16);
    VL_ASSIGN_W(512,vlSelf->__PVT__io_reg_file_alL_out_hi_lo, __Vtemp_hc2329c0b__0);
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__regs_31 = 0ULL;
    } else if ((0x1fU == (IData)(vlSelf->__PVT__io_A3))) {
        if (((IData)(vlSelf->__PVT__io_WE3) & (0U != (IData)(vlSelf->__PVT__io_A3)))) {
            vlSelf->__Vdly__regs_31 = vlSelf->__PVT__io_WD3;
        } else if ((0x1fU != (IData)(vlSelf->__PVT__io_A3))) {
            vlSelf->__Vdly__regs_31 = ((0x1eU == (IData)(vlSelf->__PVT__io_A3))
                                        ? vlSelf->__PVT__regs_30
                                        : vlSelf->__PVT___GEN_29);
        }
    }
}

VL_INLINE_OPT void Vmycpu_top_regfile___nba_sequent__TOP__mycpu_top__u_riscv_cpu___regfile__4(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___nba_sequent__TOP__mycpu_top__u_riscv_cpu___regfile__4\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_h9ae5bf63__0;
    VlWide<6>/*191:0*/ __Vtemp_he0f0e5bc__0;
    VlWide<8>/*255:0*/ __Vtemp_h13ad6ec0__0;
    VlWide<10>/*319:0*/ __Vtemp_ha7d16d68__0;
    VlWide<12>/*383:0*/ __Vtemp_h67c0c7a9__0;
    VlWide<14>/*447:0*/ __Vtemp_hc0c0d13b__0;
    VlWide<16>/*511:0*/ __Vtemp_h6b579451__0;
    VlWide<32>/*1023:0*/ __Vtemp_h6b9bebf7__0;
    // Body
    VL_CONCAT_WQQ(128,64,64, __Vtemp_h9ae5bf63__0, vlSelf->__PVT__regs_15, vlSelf->__PVT__regs_14);
    VL_CONCAT_WWQ(192,128,64, __Vtemp_he0f0e5bc__0, __Vtemp_h9ae5bf63__0, vlSelf->__PVT__regs_13);
    VL_CONCAT_WWQ(256,192,64, __Vtemp_h13ad6ec0__0, __Vtemp_he0f0e5bc__0, vlSelf->__PVT__regs_12);
    VL_CONCAT_WWQ(320,256,64, __Vtemp_ha7d16d68__0, __Vtemp_h13ad6ec0__0, vlSelf->__PVT__regs_11);
    VL_CONCAT_WWQ(384,320,64, __Vtemp_h67c0c7a9__0, __Vtemp_ha7d16d68__0, vlSelf->__PVT__regs_10);
    VL_CONCAT_WWQ(448,384,64, __Vtemp_hc0c0d13b__0, __Vtemp_h67c0c7a9__0, vlSelf->__PVT__regs_9);
    VL_CONCAT_WWQ(512,448,64, __Vtemp_h6b579451__0, __Vtemp_hc0c0d13b__0, vlSelf->__PVT__regs_8);
    VL_CONCAT_WWW(1024,512,512, __Vtemp_h6b9bebf7__0, __Vtemp_h6b579451__0, vlSelf->__PVT__io_reg_file_alL_out_lo_lo);
    VL_ASSIGN_W(1024,vlSelf->__PVT__io_reg_file_alL_out_lo, __Vtemp_h6b9bebf7__0);
    vlSelf->__PVT__regs_31 = vlSelf->__Vdly__regs_31;
    vlSelf->__PVT__regs_30 = vlSelf->__Vdly__regs_30;
}

VL_INLINE_OPT void Vmycpu_top_regfile___nba_sequent__TOP__mycpu_top__u_riscv_cpu___regfile__5(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___nba_sequent__TOP__mycpu_top__u_riscv_cpu___regfile__5\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_hb074cfe8__0;
    VlWide<6>/*191:0*/ __Vtemp_h81d39aec__0;
    VlWide<8>/*255:0*/ __Vtemp_he131eb82__0;
    VlWide<10>/*319:0*/ __Vtemp_h622cf4a8__0;
    VlWide<12>/*383:0*/ __Vtemp_h8da541b3__0;
    VlWide<14>/*447:0*/ __Vtemp_h7adc3bf1__0;
    VlWide<16>/*511:0*/ __Vtemp_he7501ded__0;
    VlWide<32>/*1023:0*/ __Vtemp_hf8af3fa3__0;
    // Body
    VL_CONCAT_WQQ(128,64,64, __Vtemp_hb074cfe8__0, vlSelf->__PVT__regs_31, vlSelf->__PVT__regs_30);
    VL_CONCAT_WWQ(192,128,64, __Vtemp_h81d39aec__0, __Vtemp_hb074cfe8__0, vlSelf->__PVT__regs_29);
    VL_CONCAT_WWQ(256,192,64, __Vtemp_he131eb82__0, __Vtemp_h81d39aec__0, vlSelf->__PVT__regs_28);
    VL_CONCAT_WWQ(320,256,64, __Vtemp_h622cf4a8__0, __Vtemp_he131eb82__0, vlSelf->__PVT__regs_27);
    VL_CONCAT_WWQ(384,320,64, __Vtemp_h8da541b3__0, __Vtemp_h622cf4a8__0, vlSelf->__PVT__regs_26);
    VL_CONCAT_WWQ(448,384,64, __Vtemp_h7adc3bf1__0, __Vtemp_h8da541b3__0, vlSelf->__PVT__regs_25);
    VL_CONCAT_WWQ(512,448,64, __Vtemp_he7501ded__0, __Vtemp_h7adc3bf1__0, vlSelf->__PVT__regs_24);
    VL_CONCAT_WWW(1024,512,512, __Vtemp_hf8af3fa3__0, __Vtemp_he7501ded__0, vlSelf->__PVT__io_reg_file_alL_out_hi_lo);
    VL_ASSIGN_W(1024,vlSelf->__PVT__io_reg_file_alL_out_hi, __Vtemp_hf8af3fa3__0);
}

VL_INLINE_OPT void Vmycpu_top_regfile___nba_sequent__TOP__mycpu_top__u_riscv_cpu___regfile__6(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___nba_sequent__TOP__mycpu_top__u_riscv_cpu___regfile__6\n"); );
    // Init
    VlWide<64>/*2047:0*/ __Vtemp_h9ec7d60f__0;
    // Body
    VL_CONCAT_WWW(2048,1024,1024, __Vtemp_h9ec7d60f__0, vlSelf->__PVT__io_reg_file_alL_out_hi, vlSelf->__PVT__io_reg_file_alL_out_lo);
    VL_ASSIGN_W(2048,vlSelf->__PVT__io_reg_file_alL_out, __Vtemp_h9ec7d60f__0);
}

VL_INLINE_OPT void Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__0(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__0\n"); );
    // Body
    vlSelf->__PVT___GEN_97 = ((1U == (IData)(vlSelf->__PVT__io_A2))
                               ? vlSelf->__PVT__regs_1
                               : vlSelf->__PVT__regs_0);
    vlSelf->__PVT___GEN_65 = ((1U == (IData)(vlSelf->__PVT__io_A1))
                               ? vlSelf->__PVT__regs_1
                               : vlSelf->__PVT__regs_0);
}

VL_INLINE_OPT void Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__1(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__1\n"); );
    // Body
    vlSelf->__PVT___GEN_98 = ((2U == (IData)(vlSelf->__PVT__io_A2))
                               ? vlSelf->__PVT__regs_2
                               : vlSelf->__PVT___GEN_97);
    vlSelf->__PVT___GEN_66 = ((2U == (IData)(vlSelf->__PVT__io_A1))
                               ? vlSelf->__PVT__regs_2
                               : vlSelf->__PVT___GEN_65);
}

VL_INLINE_OPT void Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__2(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__2\n"); );
    // Body
    vlSelf->__PVT___GEN_99 = ((3U == (IData)(vlSelf->__PVT__io_A2))
                               ? vlSelf->__PVT__regs_3
                               : vlSelf->__PVT___GEN_98);
    vlSelf->__PVT___GEN_67 = ((3U == (IData)(vlSelf->__PVT__io_A1))
                               ? vlSelf->__PVT__regs_3
                               : vlSelf->__PVT___GEN_66);
}

VL_INLINE_OPT void Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__3(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__3\n"); );
    // Body
    vlSelf->__PVT___GEN_100 = ((4U == (IData)(vlSelf->__PVT__io_A2))
                                ? vlSelf->__PVT__regs_4
                                : vlSelf->__PVT___GEN_99);
    vlSelf->__PVT___GEN_68 = ((4U == (IData)(vlSelf->__PVT__io_A1))
                               ? vlSelf->__PVT__regs_4
                               : vlSelf->__PVT___GEN_67);
}

VL_INLINE_OPT void Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__4(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__4\n"); );
    // Body
    vlSelf->__PVT___GEN_101 = ((5U == (IData)(vlSelf->__PVT__io_A2))
                                ? vlSelf->__PVT__regs_5
                                : vlSelf->__PVT___GEN_100);
    vlSelf->__PVT___GEN_69 = ((5U == (IData)(vlSelf->__PVT__io_A1))
                               ? vlSelf->__PVT__regs_5
                               : vlSelf->__PVT___GEN_68);
}

VL_INLINE_OPT void Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__5(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__5\n"); );
    // Body
    vlSelf->__PVT___GEN_102 = ((6U == (IData)(vlSelf->__PVT__io_A2))
                                ? vlSelf->__PVT__regs_6
                                : vlSelf->__PVT___GEN_101);
    vlSelf->__PVT___GEN_70 = ((6U == (IData)(vlSelf->__PVT__io_A1))
                               ? vlSelf->__PVT__regs_6
                               : vlSelf->__PVT___GEN_69);
}

VL_INLINE_OPT void Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__6(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__6\n"); );
    // Body
    vlSelf->__PVT___GEN_103 = ((7U == (IData)(vlSelf->__PVT__io_A2))
                                ? vlSelf->__PVT__regs_7
                                : vlSelf->__PVT___GEN_102);
    vlSelf->__PVT___GEN_71 = ((7U == (IData)(vlSelf->__PVT__io_A1))
                               ? vlSelf->__PVT__regs_7
                               : vlSelf->__PVT___GEN_70);
}

VL_INLINE_OPT void Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__7(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__7\n"); );
    // Body
    vlSelf->__PVT___GEN_104 = ((8U == (IData)(vlSelf->__PVT__io_A2))
                                ? vlSelf->__PVT__regs_8
                                : vlSelf->__PVT___GEN_103);
    vlSelf->__PVT___GEN_72 = ((8U == (IData)(vlSelf->__PVT__io_A1))
                               ? vlSelf->__PVT__regs_8
                               : vlSelf->__PVT___GEN_71);
    vlSelf->__PVT___GEN_105 = ((9U == (IData)(vlSelf->__PVT__io_A2))
                                ? vlSelf->__PVT__regs_9
                                : vlSelf->__PVT___GEN_104);
    vlSelf->__PVT___GEN_73 = ((9U == (IData)(vlSelf->__PVT__io_A1))
                               ? vlSelf->__PVT__regs_9
                               : vlSelf->__PVT___GEN_72);
    vlSelf->__PVT___GEN_106 = ((0xaU == (IData)(vlSelf->__PVT__io_A2))
                                ? vlSelf->__PVT__regs_10
                                : vlSelf->__PVT___GEN_105);
    vlSelf->__PVT___GEN_74 = ((0xaU == (IData)(vlSelf->__PVT__io_A1))
                               ? vlSelf->__PVT__regs_10
                               : vlSelf->__PVT___GEN_73);
    vlSelf->__PVT___GEN_107 = ((0xbU == (IData)(vlSelf->__PVT__io_A2))
                                ? vlSelf->__PVT__regs_11
                                : vlSelf->__PVT___GEN_106);
    vlSelf->__PVT___GEN_75 = ((0xbU == (IData)(vlSelf->__PVT__io_A1))
                               ? vlSelf->__PVT__regs_11
                               : vlSelf->__PVT___GEN_74);
    vlSelf->__PVT___GEN_108 = ((0xcU == (IData)(vlSelf->__PVT__io_A2))
                                ? vlSelf->__PVT__regs_12
                                : vlSelf->__PVT___GEN_107);
    vlSelf->__PVT___GEN_76 = ((0xcU == (IData)(vlSelf->__PVT__io_A1))
                               ? vlSelf->__PVT__regs_12
                               : vlSelf->__PVT___GEN_75);
    vlSelf->__PVT___GEN_109 = ((0xdU == (IData)(vlSelf->__PVT__io_A2))
                                ? vlSelf->__PVT__regs_13
                                : vlSelf->__PVT___GEN_108);
    vlSelf->__PVT___GEN_77 = ((0xdU == (IData)(vlSelf->__PVT__io_A1))
                               ? vlSelf->__PVT__regs_13
                               : vlSelf->__PVT___GEN_76);
    vlSelf->__PVT___GEN_110 = ((0xeU == (IData)(vlSelf->__PVT__io_A2))
                                ? vlSelf->__PVT__regs_14
                                : vlSelf->__PVT___GEN_109);
    vlSelf->__PVT___GEN_78 = ((0xeU == (IData)(vlSelf->__PVT__io_A1))
                               ? vlSelf->__PVT__regs_14
                               : vlSelf->__PVT___GEN_77);
    vlSelf->__PVT___GEN_111 = ((0xfU == (IData)(vlSelf->__PVT__io_A2))
                                ? vlSelf->__PVT__regs_15
                                : vlSelf->__PVT___GEN_110);
    vlSelf->__PVT___GEN_79 = ((0xfU == (IData)(vlSelf->__PVT__io_A1))
                               ? vlSelf->__PVT__regs_15
                               : vlSelf->__PVT___GEN_78);
    vlSelf->__PVT___GEN_112 = ((0x10U == (IData)(vlSelf->__PVT__io_A2))
                                ? vlSelf->__PVT__regs_16
                                : vlSelf->__PVT___GEN_111);
    vlSelf->__PVT___GEN_80 = ((0x10U == (IData)(vlSelf->__PVT__io_A1))
                               ? vlSelf->__PVT__regs_16
                               : vlSelf->__PVT___GEN_79);
    vlSelf->__PVT___GEN_113 = ((0x11U == (IData)(vlSelf->__PVT__io_A2))
                                ? vlSelf->__PVT__regs_17
                                : vlSelf->__PVT___GEN_112);
    vlSelf->__PVT___GEN_81 = ((0x11U == (IData)(vlSelf->__PVT__io_A1))
                               ? vlSelf->__PVT__regs_17
                               : vlSelf->__PVT___GEN_80);
    vlSelf->__PVT___GEN_114 = ((0x12U == (IData)(vlSelf->__PVT__io_A2))
                                ? vlSelf->__PVT__regs_18
                                : vlSelf->__PVT___GEN_113);
    vlSelf->__PVT___GEN_82 = ((0x12U == (IData)(vlSelf->__PVT__io_A1))
                               ? vlSelf->__PVT__regs_18
                               : vlSelf->__PVT___GEN_81);
}

VL_INLINE_OPT void Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__8(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__8\n"); );
    // Body
    vlSelf->__PVT___GEN_115 = ((0x13U == (IData)(vlSelf->__PVT__io_A2))
                                ? vlSelf->__PVT__regs_19
                                : vlSelf->__PVT___GEN_114);
    vlSelf->__PVT___GEN_83 = ((0x13U == (IData)(vlSelf->__PVT__io_A1))
                               ? vlSelf->__PVT__regs_19
                               : vlSelf->__PVT___GEN_82);
}

VL_INLINE_OPT void Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__9(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__9\n"); );
    // Body
    vlSelf->__PVT___GEN_116 = ((0x14U == (IData)(vlSelf->__PVT__io_A2))
                                ? vlSelf->__PVT__regs_20
                                : vlSelf->__PVT___GEN_115);
    vlSelf->__PVT___GEN_84 = ((0x14U == (IData)(vlSelf->__PVT__io_A1))
                               ? vlSelf->__PVT__regs_20
                               : vlSelf->__PVT___GEN_83);
}

VL_INLINE_OPT void Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__10(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__10\n"); );
    // Body
    vlSelf->__PVT___GEN_117 = ((0x15U == (IData)(vlSelf->__PVT__io_A2))
                                ? vlSelf->__PVT__regs_21
                                : vlSelf->__PVT___GEN_116);
    vlSelf->__PVT___GEN_85 = ((0x15U == (IData)(vlSelf->__PVT__io_A1))
                               ? vlSelf->__PVT__regs_21
                               : vlSelf->__PVT___GEN_84);
}

VL_INLINE_OPT void Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__11(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__11\n"); );
    // Body
    vlSelf->__PVT___GEN_118 = ((0x16U == (IData)(vlSelf->__PVT__io_A2))
                                ? vlSelf->__PVT__regs_22
                                : vlSelf->__PVT___GEN_117);
    vlSelf->__PVT___GEN_86 = ((0x16U == (IData)(vlSelf->__PVT__io_A1))
                               ? vlSelf->__PVT__regs_22
                               : vlSelf->__PVT___GEN_85);
}

VL_INLINE_OPT void Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__12(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__12\n"); );
    // Body
    vlSelf->__PVT___GEN_119 = ((0x17U == (IData)(vlSelf->__PVT__io_A2))
                                ? vlSelf->__PVT__regs_23
                                : vlSelf->__PVT___GEN_118);
    vlSelf->__PVT___GEN_87 = ((0x17U == (IData)(vlSelf->__PVT__io_A1))
                               ? vlSelf->__PVT__regs_23
                               : vlSelf->__PVT___GEN_86);
}

VL_INLINE_OPT void Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__13(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__13\n"); );
    // Body
    vlSelf->__PVT___GEN_120 = ((0x18U == (IData)(vlSelf->__PVT__io_A2))
                                ? vlSelf->__PVT__regs_24
                                : vlSelf->__PVT___GEN_119);
    vlSelf->__PVT___GEN_88 = ((0x18U == (IData)(vlSelf->__PVT__io_A1))
                               ? vlSelf->__PVT__regs_24
                               : vlSelf->__PVT___GEN_87);
}

VL_INLINE_OPT void Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__14(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__14\n"); );
    // Body
    vlSelf->__PVT___GEN_121 = ((0x19U == (IData)(vlSelf->__PVT__io_A2))
                                ? vlSelf->__PVT__regs_25
                                : vlSelf->__PVT___GEN_120);
    vlSelf->__PVT___GEN_89 = ((0x19U == (IData)(vlSelf->__PVT__io_A1))
                               ? vlSelf->__PVT__regs_25
                               : vlSelf->__PVT___GEN_88);
}

VL_INLINE_OPT void Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__15(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__15\n"); );
    // Body
    vlSelf->__PVT___GEN_122 = ((0x1aU == (IData)(vlSelf->__PVT__io_A2))
                                ? vlSelf->__PVT__regs_26
                                : vlSelf->__PVT___GEN_121);
    vlSelf->__PVT___GEN_90 = ((0x1aU == (IData)(vlSelf->__PVT__io_A1))
                               ? vlSelf->__PVT__regs_26
                               : vlSelf->__PVT___GEN_89);
}

VL_INLINE_OPT void Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__16(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__16\n"); );
    // Body
    vlSelf->__PVT___GEN_123 = ((0x1bU == (IData)(vlSelf->__PVT__io_A2))
                                ? vlSelf->__PVT__regs_27
                                : vlSelf->__PVT___GEN_122);
    vlSelf->__PVT___GEN_91 = ((0x1bU == (IData)(vlSelf->__PVT__io_A1))
                               ? vlSelf->__PVT__regs_27
                               : vlSelf->__PVT___GEN_90);
}

VL_INLINE_OPT void Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__17(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__17\n"); );
    // Body
    vlSelf->__PVT___GEN_124 = ((0x1cU == (IData)(vlSelf->__PVT__io_A2))
                                ? vlSelf->__PVT__regs_28
                                : vlSelf->__PVT___GEN_123);
    vlSelf->__PVT___GEN_92 = ((0x1cU == (IData)(vlSelf->__PVT__io_A1))
                               ? vlSelf->__PVT__regs_28
                               : vlSelf->__PVT___GEN_91);
}

VL_INLINE_OPT void Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__18(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__18\n"); );
    // Body
    vlSelf->__PVT___GEN_125 = ((0x1dU == (IData)(vlSelf->__PVT__io_A2))
                                ? vlSelf->__PVT__regs_29
                                : vlSelf->__PVT___GEN_124);
    vlSelf->__PVT___GEN_93 = ((0x1dU == (IData)(vlSelf->__PVT__io_A1))
                               ? vlSelf->__PVT__regs_29
                               : vlSelf->__PVT___GEN_92);
}

VL_INLINE_OPT void Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__19(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__19\n"); );
    // Body
    vlSelf->__PVT___GEN_126 = ((0x1eU == (IData)(vlSelf->__PVT__io_A2))
                                ? vlSelf->__PVT__regs_30
                                : vlSelf->__PVT___GEN_125);
    vlSelf->__PVT___GEN_94 = ((0x1eU == (IData)(vlSelf->__PVT__io_A1))
                               ? vlSelf->__PVT__regs_30
                               : vlSelf->__PVT___GEN_93);
}

VL_INLINE_OPT void Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__20(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__20\n"); );
    // Body
    vlSelf->__PVT___GEN_127 = ((0x1fU == (IData)(vlSelf->__PVT__io_A2))
                                ? vlSelf->__PVT__regs_31
                                : vlSelf->__PVT___GEN_126);
    vlSelf->__PVT___GEN_95 = ((0x1fU == (IData)(vlSelf->__PVT__io_A1))
                               ? vlSelf->__PVT__regs_31
                               : vlSelf->__PVT___GEN_94);
}

VL_INLINE_OPT void Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__21(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__21\n"); );
    // Body
    vlSelf->__PVT___GEN_1 = ((1U == (IData)(vlSelf->__PVT__io_A3))
                              ? vlSelf->__PVT__regs_1
                              : vlSelf->__PVT__regs_0);
}

VL_INLINE_OPT void Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__22(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__22\n"); );
    // Body
    vlSelf->__PVT___GEN_2 = ((2U == (IData)(vlSelf->__PVT__io_A3))
                              ? vlSelf->__PVT__regs_2
                              : vlSelf->__PVT___GEN_1);
}

VL_INLINE_OPT void Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__23(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__23\n"); );
    // Body
    vlSelf->__PVT___GEN_3 = ((3U == (IData)(vlSelf->__PVT__io_A3))
                              ? vlSelf->__PVT__regs_3
                              : vlSelf->__PVT___GEN_2);
}

VL_INLINE_OPT void Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__24(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__24\n"); );
    // Body
    vlSelf->__PVT___GEN_4 = ((4U == (IData)(vlSelf->__PVT__io_A3))
                              ? vlSelf->__PVT__regs_4
                              : vlSelf->__PVT___GEN_3);
}

VL_INLINE_OPT void Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__25(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__25\n"); );
    // Body
    vlSelf->__PVT___GEN_5 = ((5U == (IData)(vlSelf->__PVT__io_A3))
                              ? vlSelf->__PVT__regs_5
                              : vlSelf->__PVT___GEN_4);
}

VL_INLINE_OPT void Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__26(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__26\n"); );
    // Body
    vlSelf->__PVT___GEN_6 = ((6U == (IData)(vlSelf->__PVT__io_A3))
                              ? vlSelf->__PVT__regs_6
                              : vlSelf->__PVT___GEN_5);
}

VL_INLINE_OPT void Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__27(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__27\n"); );
    // Body
    vlSelf->__PVT___GEN_7 = ((7U == (IData)(vlSelf->__PVT__io_A3))
                              ? vlSelf->__PVT__regs_7
                              : vlSelf->__PVT___GEN_6);
}

VL_INLINE_OPT void Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__28(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__28\n"); );
    // Body
    vlSelf->__PVT___GEN_8 = ((8U == (IData)(vlSelf->__PVT__io_A3))
                              ? vlSelf->__PVT__regs_8
                              : vlSelf->__PVT___GEN_7);
}

VL_INLINE_OPT void Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__29(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__29\n"); );
    // Body
    vlSelf->__PVT___GEN_9 = ((9U == (IData)(vlSelf->__PVT__io_A3))
                              ? vlSelf->__PVT__regs_9
                              : vlSelf->__PVT___GEN_8);
}

VL_INLINE_OPT void Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__30(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__30\n"); );
    // Body
    vlSelf->__PVT___GEN_10 = ((0xaU == (IData)(vlSelf->__PVT__io_A3))
                               ? vlSelf->__PVT__regs_10
                               : vlSelf->__PVT___GEN_9);
}

VL_INLINE_OPT void Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__31(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__31\n"); );
    // Body
    vlSelf->__PVT___GEN_11 = ((0xbU == (IData)(vlSelf->__PVT__io_A3))
                               ? vlSelf->__PVT__regs_11
                               : vlSelf->__PVT___GEN_10);
}

VL_INLINE_OPT void Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__32(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__32\n"); );
    // Body
    vlSelf->__PVT___GEN_12 = ((0xcU == (IData)(vlSelf->__PVT__io_A3))
                               ? vlSelf->__PVT__regs_12
                               : vlSelf->__PVT___GEN_11);
}

VL_INLINE_OPT void Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__33(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__33\n"); );
    // Body
    vlSelf->__PVT___GEN_13 = ((0xdU == (IData)(vlSelf->__PVT__io_A3))
                               ? vlSelf->__PVT__regs_13
                               : vlSelf->__PVT___GEN_12);
}

VL_INLINE_OPT void Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__34(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__34\n"); );
    // Body
    vlSelf->__PVT___GEN_14 = ((0xeU == (IData)(vlSelf->__PVT__io_A3))
                               ? vlSelf->__PVT__regs_14
                               : vlSelf->__PVT___GEN_13);
}

VL_INLINE_OPT void Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__35(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__35\n"); );
    // Body
    vlSelf->__PVT___GEN_15 = ((0xfU == (IData)(vlSelf->__PVT__io_A3))
                               ? vlSelf->__PVT__regs_15
                               : vlSelf->__PVT___GEN_14);
}

VL_INLINE_OPT void Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__36(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__36\n"); );
    // Body
    vlSelf->__PVT___GEN_16 = ((0x10U == (IData)(vlSelf->__PVT__io_A3))
                               ? vlSelf->__PVT__regs_16
                               : vlSelf->__PVT___GEN_15);
}

VL_INLINE_OPT void Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__37(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__37\n"); );
    // Body
    vlSelf->__PVT___GEN_17 = ((0x11U == (IData)(vlSelf->__PVT__io_A3))
                               ? vlSelf->__PVT__regs_17
                               : vlSelf->__PVT___GEN_16);
}

VL_INLINE_OPT void Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__38(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__38\n"); );
    // Body
    vlSelf->__PVT___GEN_18 = ((0x12U == (IData)(vlSelf->__PVT__io_A3))
                               ? vlSelf->__PVT__regs_18
                               : vlSelf->__PVT___GEN_17);
}

VL_INLINE_OPT void Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__39(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__39\n"); );
    // Body
    vlSelf->__PVT___GEN_19 = ((0x13U == (IData)(vlSelf->__PVT__io_A3))
                               ? vlSelf->__PVT__regs_19
                               : vlSelf->__PVT___GEN_18);
}

VL_INLINE_OPT void Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__40(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__40\n"); );
    // Body
    vlSelf->__PVT___GEN_20 = ((0x14U == (IData)(vlSelf->__PVT__io_A3))
                               ? vlSelf->__PVT__regs_20
                               : vlSelf->__PVT___GEN_19);
}

VL_INLINE_OPT void Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__41(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__41\n"); );
    // Body
    vlSelf->__PVT___GEN_21 = ((0x15U == (IData)(vlSelf->__PVT__io_A3))
                               ? vlSelf->__PVT__regs_21
                               : vlSelf->__PVT___GEN_20);
}

VL_INLINE_OPT void Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__42(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__42\n"); );
    // Body
    vlSelf->__PVT___GEN_22 = ((0x16U == (IData)(vlSelf->__PVT__io_A3))
                               ? vlSelf->__PVT__regs_22
                               : vlSelf->__PVT___GEN_21);
}

VL_INLINE_OPT void Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__43(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__43\n"); );
    // Body
    vlSelf->__PVT___GEN_23 = ((0x17U == (IData)(vlSelf->__PVT__io_A3))
                               ? vlSelf->__PVT__regs_23
                               : vlSelf->__PVT___GEN_22);
}

VL_INLINE_OPT void Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__44(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__44\n"); );
    // Body
    vlSelf->__PVT___GEN_24 = ((0x18U == (IData)(vlSelf->__PVT__io_A3))
                               ? vlSelf->__PVT__regs_24
                               : vlSelf->__PVT___GEN_23);
}

VL_INLINE_OPT void Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__45(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__45\n"); );
    // Body
    vlSelf->__PVT___GEN_25 = ((0x19U == (IData)(vlSelf->__PVT__io_A3))
                               ? vlSelf->__PVT__regs_25
                               : vlSelf->__PVT___GEN_24);
}

VL_INLINE_OPT void Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__46(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__46\n"); );
    // Body
    vlSelf->__PVT___GEN_26 = ((0x1aU == (IData)(vlSelf->__PVT__io_A3))
                               ? vlSelf->__PVT__regs_26
                               : vlSelf->__PVT___GEN_25);
}

VL_INLINE_OPT void Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__47(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__47\n"); );
    // Body
    vlSelf->__PVT___GEN_27 = ((0x1bU == (IData)(vlSelf->__PVT__io_A3))
                               ? vlSelf->__PVT__regs_27
                               : vlSelf->__PVT___GEN_26);
}

VL_INLINE_OPT void Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__48(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__48\n"); );
    // Body
    vlSelf->__PVT___GEN_28 = ((0x1cU == (IData)(vlSelf->__PVT__io_A3))
                               ? vlSelf->__PVT__regs_28
                               : vlSelf->__PVT___GEN_27);
}

VL_INLINE_OPT void Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__49(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__49\n"); );
    // Body
    vlSelf->__PVT___GEN_29 = ((0x1dU == (IData)(vlSelf->__PVT__io_A3))
                               ? vlSelf->__PVT__regs_29
                               : vlSelf->__PVT___GEN_28);
}

VL_INLINE_OPT void Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__50(Vmycpu_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_regfile___nba_comb__TOP__mycpu_top__u_riscv_cpu___regfile__50\n"); );
    // Body
    vlSelf->__PVT__io_RD2 = ((((IData)(vlSelf->__PVT__io_WE3) 
                               & ((IData)(vlSelf->__PVT__io_A2) 
                                  == (IData)(vlSelf->__PVT__io_A3))) 
                              & (0U != (IData)(vlSelf->__PVT__io_A2)))
                              ? vlSelf->__PVT__io_WD3
                              : vlSelf->__PVT___GEN_127);
    vlSelf->__PVT__io_RD1 = ((((IData)(vlSelf->__PVT__io_WE3) 
                               & ((IData)(vlSelf->__PVT__io_A1) 
                                  == (IData)(vlSelf->__PVT__io_A3))) 
                              & (0U != (IData)(vlSelf->__PVT__io_A1)))
                              ? vlSelf->__PVT__io_WD3
                              : vlSelf->__PVT___GEN_95);
}
