// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcommand_line_test.h for the primary calling header

#include "Vcommand_line_test___024root.h"
#include "Vcommand_line_test__Syms.h"

//==========

VL_INLINE_OPT void Vcommand_line_test___024root___combo__TOP__2(Vcommand_line_test___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommand_line_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommand_line_test___024root___combo__TOP__2\n"); );
    // Body
    vlSelf->vga_clk = vlSelf->clk;
}

VL_INLINE_OPT void Vcommand_line_test___024root___sequent__TOP__4(Vcommand_line_test___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommand_line_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommand_line_test___024root___sequent__TOP__4\n"); );
    // Variables
    CData/*2:0*/ __Vdly__command_line_test__DOT__keyboard1__DOT__k1__DOT__ps2_clk_sync;
    CData/*3:0*/ __Vdly__command_line_test__DOT__keyboard1__DOT__k1__DOT__count;
    CData/*2:0*/ __Vdly__command_line_test__DOT__keyboard1__DOT__k1__DOT__w_ptr;
    CData/*0:0*/ __Vdly__command_line_test__DOT__keyboard1__DOT__overflow;
    // Body
    __Vdly__command_line_test__DOT__keyboard1__DOT__k1__DOT__ps2_clk_sync 
        = vlSelf->command_line_test__DOT__keyboard1__DOT__k1__DOT__ps2_clk_sync;
    vlSelf->__Vdly__command_line_test__DOT__ready = vlSelf->command_line_test__DOT__ready;
    __Vdly__command_line_test__DOT__keyboard1__DOT__overflow 
        = vlSelf->command_line_test__DOT__keyboard1__DOT__overflow;
    vlSelf->__Vdly__command_line_test__DOT__keyboard1__DOT__k1__DOT__r_ptr 
        = vlSelf->command_line_test__DOT__keyboard1__DOT__k1__DOT__r_ptr;
    __Vdly__command_line_test__DOT__keyboard1__DOT__k1__DOT__w_ptr 
        = vlSelf->command_line_test__DOT__keyboard1__DOT__k1__DOT__w_ptr;
    __Vdly__command_line_test__DOT__keyboard1__DOT__k1__DOT__count 
        = vlSelf->command_line_test__DOT__keyboard1__DOT__k1__DOT__count;
    vlSelf->__Vdlyvset__command_line_test__DOT__keyboard1__DOT__k1__DOT__fifo__v0 = 0U;
    __Vdly__command_line_test__DOT__keyboard1__DOT__k1__DOT__ps2_clk_sync 
        = ((6U & ((IData)(vlSelf->command_line_test__DOT__keyboard1__DOT__k1__DOT__ps2_clk_sync) 
                  << 1U)) | (IData)(vlSelf->ps2_clk));
    if (vlSelf->rst) {
        __Vdly__command_line_test__DOT__keyboard1__DOT__k1__DOT__count = 0U;
        __Vdly__command_line_test__DOT__keyboard1__DOT__k1__DOT__w_ptr = 0U;
        vlSelf->__Vdly__command_line_test__DOT__keyboard1__DOT__k1__DOT__r_ptr = 0U;
        __Vdly__command_line_test__DOT__keyboard1__DOT__overflow = 0U;
        vlSelf->__Vdly__command_line_test__DOT__ready = 0U;
    } else {
        if (vlSelf->command_line_test__DOT__ready) {
            if ((1U & (~ (IData)(vlSelf->command_line_test__DOT__keyboard1__DOT__nextdata_n)))) {
                vlSelf->__Vdly__command_line_test__DOT__keyboard1__DOT__k1__DOT__r_ptr 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->command_line_test__DOT__keyboard1__DOT__k1__DOT__r_ptr)));
                if (((IData)(vlSelf->command_line_test__DOT__keyboard1__DOT__k1__DOT__w_ptr) 
                     == (7U & ((IData)(1U) + (IData)(vlSelf->command_line_test__DOT__keyboard1__DOT__k1__DOT__r_ptr))))) {
                    vlSelf->__Vdly__command_line_test__DOT__ready = 0U;
                }
            }
        }
        if ((IData)((4U == (6U & (IData)(vlSelf->command_line_test__DOT__keyboard1__DOT__k1__DOT__ps2_clk_sync))))) {
            if ((0xaU == (IData)(vlSelf->command_line_test__DOT__keyboard1__DOT__k1__DOT__count))) {
                if (VL_UNLIKELY((((~ (IData)(vlSelf->command_line_test__DOT__keyboard1__DOT__k1__DOT__buffer)) 
                                  & (IData)(vlSelf->ps2_data)) 
                                 & VL_REDXOR_32((0x1ffU 
                                                 & ((IData)(vlSelf->command_line_test__DOT__keyboard1__DOT__k1__DOT__buffer) 
                                                    >> 1U)))))) {
                    VL_WRITEF("recieve %x\n",8,(0xffU 
                                                & ((IData)(vlSelf->command_line_test__DOT__keyboard1__DOT__k1__DOT__buffer) 
                                                   >> 1U)));
                    vlSelf->__Vdlyvval__command_line_test__DOT__keyboard1__DOT__k1__DOT__fifo__v0 
                        = (0xffU & ((IData)(vlSelf->command_line_test__DOT__keyboard1__DOT__k1__DOT__buffer) 
                                    >> 1U));
                    vlSelf->__Vdlyvset__command_line_test__DOT__keyboard1__DOT__k1__DOT__fifo__v0 = 1U;
                    vlSelf->__Vdlyvdim0__command_line_test__DOT__keyboard1__DOT__k1__DOT__fifo__v0 
                        = vlSelf->command_line_test__DOT__keyboard1__DOT__k1__DOT__w_ptr;
                    vlSelf->__Vdly__command_line_test__DOT__ready = 1U;
                    __Vdly__command_line_test__DOT__keyboard1__DOT__k1__DOT__w_ptr 
                        = (7U & ((IData)(1U) + (IData)(vlSelf->command_line_test__DOT__keyboard1__DOT__k1__DOT__w_ptr)));
                    __Vdly__command_line_test__DOT__keyboard1__DOT__overflow 
                        = ((IData)(vlSelf->command_line_test__DOT__keyboard1__DOT__overflow) 
                           | ((IData)(vlSelf->command_line_test__DOT__keyboard1__DOT__k1__DOT__r_ptr) 
                              == (7U & ((IData)(1U) 
                                        + (IData)(vlSelf->command_line_test__DOT__keyboard1__DOT__k1__DOT__w_ptr)))));
                }
                __Vdly__command_line_test__DOT__keyboard1__DOT__k1__DOT__count = 0U;
            } else {
                vlSelf->command_line_test__DOT__keyboard1__DOT__k1__DOT____Vlvbound1 
                    = vlSelf->ps2_data;
                if ((9U >= (IData)(vlSelf->command_line_test__DOT__keyboard1__DOT__k1__DOT__count))) {
                    vlSelf->command_line_test__DOT__keyboard1__DOT__k1__DOT__buffer 
                        = (((~ ((IData)(1U) << (IData)(vlSelf->command_line_test__DOT__keyboard1__DOT__k1__DOT__count))) 
                            & (IData)(vlSelf->command_line_test__DOT__keyboard1__DOT__k1__DOT__buffer)) 
                           | (0x3ffU & ((IData)(vlSelf->command_line_test__DOT__keyboard1__DOT__k1__DOT____Vlvbound1) 
                                        << (IData)(vlSelf->command_line_test__DOT__keyboard1__DOT__k1__DOT__count))));
                }
                __Vdly__command_line_test__DOT__keyboard1__DOT__k1__DOT__count 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->command_line_test__DOT__keyboard1__DOT__k1__DOT__count)));
            }
        }
    }
    vlSelf->command_line_test__DOT__keyboard1__DOT__k1__DOT__count 
        = __Vdly__command_line_test__DOT__keyboard1__DOT__k1__DOT__count;
    vlSelf->command_line_test__DOT__keyboard1__DOT__k1__DOT__w_ptr 
        = __Vdly__command_line_test__DOT__keyboard1__DOT__k1__DOT__w_ptr;
    vlSelf->command_line_test__DOT__keyboard1__DOT__overflow 
        = __Vdly__command_line_test__DOT__keyboard1__DOT__overflow;
    vlSelf->command_line_test__DOT__keyboard1__DOT__k1__DOT__ps2_clk_sync 
        = __Vdly__command_line_test__DOT__keyboard1__DOT__k1__DOT__ps2_clk_sync;
}

VL_INLINE_OPT void Vcommand_line_test___024root___sequent__TOP__5(Vcommand_line_test___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommand_line_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommand_line_test___024root___sequent__TOP__5\n"); );
    // Variables
    SData/*9:0*/ __Vdly__command_line_test__DOT__vga_module1__DOT__x_cnt;
    IData/*31:0*/ __Vdly__command_line_test__DOT__keyboard1__DOT__data_sync;
    // Body
    __Vdly__command_line_test__DOT__keyboard1__DOT__data_sync 
        = vlSelf->command_line_test__DOT__keyboard1__DOT__data_sync;
    __Vdly__command_line_test__DOT__vga_module1__DOT__x_cnt 
        = vlSelf->command_line_test__DOT__vga_module1__DOT__x_cnt;
    vlSelf->command_line_test__DOT__continue_flag = 
        ((~ (IData)(vlSelf->rst)) & ((0xffU & (vlSelf->command_line_test__DOT__keyboard1__DOT__data_sync 
                                               >> 8U)) 
                                     == (0xffU & vlSelf->command_line_test__DOT__keyboard1__DOT__data_sync)));
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        vlSelf->command_line_test__DOT__keyboard1__DOT__nextdata_n 
            = (1U & (~ (IData)(vlSelf->command_line_test__DOT__ready)));
    }
    if (vlSelf->rst) {
        __Vdly__command_line_test__DOT__keyboard1__DOT__data_sync = 0U;
    } else if (vlSelf->command_line_test__DOT__ready) {
        __Vdly__command_line_test__DOT__keyboard1__DOT__data_sync 
            = ((vlSelf->command_line_test__DOT__keyboard1__DOT__data_sync 
                << 8U) | vlSelf->command_line_test__DOT__keyboard1__DOT__k1__DOT__fifo
               [vlSelf->command_line_test__DOT__keyboard1__DOT__k1__DOT__r_ptr]);
    }
    if (vlSelf->rst) {
        __Vdly__command_line_test__DOT__vga_module1__DOT__x_cnt = 1U;
    }
    __Vdly__command_line_test__DOT__vga_module1__DOT__x_cnt 
        = ((IData)(vlSelf->rst) ? 1U : ((0x320U == (IData)(vlSelf->command_line_test__DOT__vga_module1__DOT__x_cnt))
                                         ? 1U : (0x3ffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->command_line_test__DOT__vga_module1__DOT__x_cnt)))));
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        vlSelf->command_line_test__DOT__vga_module1__DOT__y_cnt 
            = (((0x20dU == (IData)(vlSelf->command_line_test__DOT__vga_module1__DOT__y_cnt)) 
                & (0x320U == (IData)(vlSelf->command_line_test__DOT__vga_module1__DOT__x_cnt)))
                ? 1U : (0x3ffU & ((0x320U == (IData)(vlSelf->command_line_test__DOT__vga_module1__DOT__x_cnt))
                                   ? ((IData)(1U) + (IData)(vlSelf->command_line_test__DOT__vga_module1__DOT__y_cnt))
                                   : (IData)(vlSelf->command_line_test__DOT__vga_module1__DOT__y_cnt))));
    }
    vlSelf->command_line_test__DOT__keyboard1__DOT__data_sync 
        = __Vdly__command_line_test__DOT__keyboard1__DOT__data_sync;
    vlSelf->command_line_test__DOT__vga_module1__DOT__x_cnt 
        = __Vdly__command_line_test__DOT__vga_module1__DOT__x_cnt;
    vlSelf->vga_hs = (0x60U < (IData)(vlSelf->command_line_test__DOT__vga_module1__DOT__x_cnt));
    vlSelf->command_line_test__DOT__vga_module1__DOT__h_valid 
        = ((0x90U < (IData)(vlSelf->command_line_test__DOT__vga_module1__DOT__x_cnt)) 
           & (0x310U >= (IData)(vlSelf->command_line_test__DOT__vga_module1__DOT__x_cnt)));
    vlSelf->vga_vs = (2U < (IData)(vlSelf->command_line_test__DOT__vga_module1__DOT__y_cnt));
    vlSelf->command_line_test__DOT__vga_module1__DOT__v_valid 
        = ((0x23U < (IData)(vlSelf->command_line_test__DOT__vga_module1__DOT__y_cnt)) 
           & (0x203U >= (IData)(vlSelf->command_line_test__DOT__vga_module1__DOT__y_cnt)));
    if (vlSelf->command_line_test__DOT__vga_module1__DOT__h_valid) {
        vlSelf->addr_h = (0x3ffU & (((IData)(vlSelf->command_line_test__DOT__vga_module1__DOT__x_cnt) 
                                     - (IData)(0x90U)) 
                                    - (IData)(1U)));
        vlSelf->vga_blank_n = ((IData)(vlSelf->command_line_test__DOT__vga_module1__DOT__v_valid) 
                               & 1U);
    } else {
        vlSelf->addr_h = 0U;
        vlSelf->vga_blank_n = 0U;
    }
    vlSelf->addr_v = ((IData)(vlSelf->command_line_test__DOT__vga_module1__DOT__v_valid)
                       ? (0x3ffU & (((IData)(vlSelf->command_line_test__DOT__vga_module1__DOT__y_cnt) 
                                     - (IData)(0x23U)) 
                                    - (IData)(1U)))
                       : 0U);
}

VL_INLINE_OPT void Vcommand_line_test___024root___sequent__TOP__6(Vcommand_line_test___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommand_line_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommand_line_test___024root___sequent__TOP__6\n"); );
    // Body
    vlSelf->command_line_test__DOT__keyboard1__DOT__k1__DOT__r_ptr 
        = vlSelf->__Vdly__command_line_test__DOT__keyboard1__DOT__k1__DOT__r_ptr;
    if (vlSelf->__Vdlyvset__command_line_test__DOT__keyboard1__DOT__k1__DOT__fifo__v0) {
        vlSelf->command_line_test__DOT__keyboard1__DOT__k1__DOT__fifo[vlSelf->__Vdlyvdim0__command_line_test__DOT__keyboard1__DOT__k1__DOT__fifo__v0] 
            = vlSelf->__Vdlyvval__command_line_test__DOT__keyboard1__DOT__k1__DOT__fifo__v0;
    }
    vlSelf->command_line_test__DOT__ready = vlSelf->__Vdly__command_line_test__DOT__ready;
}

VL_INLINE_OPT void Vcommand_line_test___024root___sequent__TOP__7(Vcommand_line_test___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommand_line_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommand_line_test___024root___sequent__TOP__7\n"); );
    // Body
    if (VL_LIKELY(vlSelf->rst)) {
        vlSelf->command_line_test__DOT__temp_h = 0U;
        vlSelf->command_line_test__DOT__temp_v = 0U;
        vlSelf->command_line_test__DOT__char_x = 0U;
        vlSelf->command_line_test__DOT__char_y = 0U;
        vlSelf->command_line_test__DOT__temp_asc = 0U;
    } else {
        vlSelf->command_line_test__DOT__temp_v = 1U;
        while (VL_GTES_III(1,32,32, 0x1e0U, vlSelf->command_line_test__DOT__temp_v)) {
            vlSelf->command_line_test__DOT__char_y 
                = VL_DIVS_III(32, vlSelf->command_line_test__DOT__temp_v, (IData)(0x10U));
            vlSelf->command_line_test__DOT__temp_h = 1U;
            while (VL_GTES_III(1,32,32, 0x280U, vlSelf->command_line_test__DOT__temp_h)) {
                vlSelf->command_line_test__DOT__char_x 
                    = VL_DIVS_III(32, vlSelf->command_line_test__DOT__temp_h, (IData)(9U));
                vlSelf->command_line_test__DOT__down_set 
                    = (vlSelf->command_line_test__DOT__char_x 
                       + VL_MULS_III(32,32,32, (IData)(0x46U), vlSelf->command_line_test__DOT__char_y));
                VL_WRITEF("char x = %11d char_y = %11d temp_asc = %3# dow_set = %11d\n\n",
                          32,vlSelf->command_line_test__DOT__char_x,
                          32,vlSelf->command_line_test__DOT__char_y,
                          8,(IData)(vlSelf->command_line_test__DOT__temp_asc),
                          32,vlSelf->command_line_test__DOT__down_set);
                vlSelf->command_line_test__DOT__temp_asc 
                    = ((0x9c4U >= (0xfffU & vlSelf->command_line_test__DOT__down_set))
                        ? vlSelf->command_line_test__DOT__screen_data
                       [(0xfffU & vlSelf->command_line_test__DOT__down_set)]
                        : 0U);
                vlSelf->command_line_test__DOT____Vlvbound2 
                    = (((0xbU >= (0xfU & VL_MODDIVS_III(32, 
                                                        (vlSelf->command_line_test__DOT__temp_h 
                                                         - (IData)(1U)), (IData)(9U)))) 
                        & (((0x1388U >= (0x1fffU & 
                                         (((IData)(vlSelf->command_line_test__DOT__temp_asc) 
                                           << 4U) + 
                                          (0xfU & (vlSelf->command_line_test__DOT__temp_v 
                                                   - (IData)(1U))))))
                             ? vlSelf->command_line_test__DOT__char_table
                            [(0x1fffU & (((IData)(vlSelf->command_line_test__DOT__temp_asc) 
                                          << 4U) + 
                                         (0xfU & (vlSelf->command_line_test__DOT__temp_v 
                                                  - (IData)(1U)))))]
                             : 0U) >> (0xfU & VL_MODDIVS_III(32, 
                                                             (vlSelf->command_line_test__DOT__temp_h 
                                                              - (IData)(1U)), (IData)(9U)))))
                        ? 0xffffffU : 0U);
                if (VL_LIKELY((0x7a120U >= ((0x7fe00U 
                                             & (vlSelf->command_line_test__DOT__temp_h 
                                                << 9U)) 
                                            | (0x1ffU 
                                               & vlSelf->command_line_test__DOT__temp_v))))) {
                    vlSelf->command_line_test__DOT__vga_data_array[(
                                                                    (0x7fe00U 
                                                                     & (vlSelf->command_line_test__DOT__temp_h 
                                                                        << 9U)) 
                                                                    | (0x1ffU 
                                                                       & vlSelf->command_line_test__DOT__temp_v))] 
                        = vlSelf->command_line_test__DOT____Vlvbound2;
                }
                vlSelf->command_line_test__DOT__temp_h 
                    = ((IData)(1U) + vlSelf->command_line_test__DOT__temp_h);
            }
            vlSelf->command_line_test__DOT__temp_v 
                = ((IData)(1U) + vlSelf->command_line_test__DOT__temp_v);
        }
    }
}

VL_INLINE_OPT void Vcommand_line_test___024root___multiclk__TOP__8(Vcommand_line_test___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommand_line_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommand_line_test___024root___multiclk__TOP__8\n"); );
    // Body
    vlSelf->command_line_test__DOT__vga_data = ((0x7a120U 
                                                 >= 
                                                 (((IData)(vlSelf->addr_h) 
                                                   << 9U) 
                                                  | (0x1ffU 
                                                     & (IData)(vlSelf->addr_v))))
                                                 ? 
                                                vlSelf->command_line_test__DOT__vga_data_array
                                                [(((IData)(vlSelf->addr_h) 
                                                   << 9U) 
                                                  | (0x1ffU 
                                                     & (IData)(vlSelf->addr_v)))]
                                                 : 0U);
    vlSelf->vga_r = (0xffU & (vlSelf->command_line_test__DOT__vga_data 
                              >> 0x10U));
    vlSelf->vga_g = (0xffU & (vlSelf->command_line_test__DOT__vga_data 
                              >> 8U));
    vlSelf->vga_b = (0xffU & vlSelf->command_line_test__DOT__vga_data);
}

void Vcommand_line_test___024root___eval(Vcommand_line_test___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommand_line_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommand_line_test___024root___eval\n"); );
    // Body
    Vcommand_line_test___024root___combo__TOP__2(vlSelf);
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vcommand_line_test___024root___sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vcommand_line_test___024root___sequent__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vcommand_line_test___024root___sequent__TOP__6(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))) 
         | ((~ (IData)(vlSelf->vga_vs)) & (IData)(vlSelf->__Vclklast__TOP__vga_vs)))) {
        Vcommand_line_test___024root___sequent__TOP__7(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if (((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
          | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst)))) 
         | ((~ (IData)(vlSelf->vga_vs)) & (IData)(vlSelf->__Vclklast__TOP__vga_vs)))) {
        Vcommand_line_test___024root___multiclk__TOP__8(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
    vlSelf->__Vclklast__TOP__vga_vs = vlSelf->vga_vs;
}

QData Vcommand_line_test___024root___change_request_1(Vcommand_line_test___024root* vlSelf);

VL_INLINE_OPT QData Vcommand_line_test___024root___change_request(Vcommand_line_test___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommand_line_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommand_line_test___024root___change_request\n"); );
    // Body
    return (Vcommand_line_test___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vcommand_line_test___024root___change_request_1(Vcommand_line_test___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommand_line_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommand_line_test___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vcommand_line_test___024root___eval_debug_assertions(Vcommand_line_test___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommand_line_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommand_line_test___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->ps2_clk & 0xfeU))) {
        Verilated::overWidthError("ps2_clk");}
    if (VL_UNLIKELY((vlSelf->ps2_data & 0xfeU))) {
        Verilated::overWidthError("ps2_data");}
}
#endif  // VL_DEBUG
