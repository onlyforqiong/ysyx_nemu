// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_Look_up_table_read_first_.h"

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first___6(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first___6\n"); );
    // Body
    vlSelf->__PVT__btb_21 = vlSelf->__Vdly__btb_21;
    vlSelf->__PVT__btb_20 = vlSelf->__Vdly__btb_20;
    vlSelf->__PVT__btb_19 = vlSelf->__Vdly__btb_19;
    vlSelf->__PVT__btb_18 = vlSelf->__Vdly__btb_18;
    vlSelf->__PVT__btb_17 = vlSelf->__Vdly__btb_17;
    vlSelf->__PVT__btb_16 = vlSelf->__Vdly__btb_16;
    vlSelf->__PVT__btb_15 = vlSelf->__Vdly__btb_15;
    vlSelf->__PVT__btb_14 = vlSelf->__Vdly__btb_14;
    vlSelf->__PVT__btb_13 = vlSelf->__Vdly__btb_13;
    vlSelf->__PVT__btb_12 = vlSelf->__Vdly__btb_12;
    vlSelf->__PVT__btb_11 = vlSelf->__Vdly__btb_11;
    vlSelf->__PVT__btb_10 = vlSelf->__Vdly__btb_10;
    vlSelf->__PVT__btb_9 = vlSelf->__Vdly__btb_9;
    vlSelf->__PVT__btb_8 = vlSelf->__Vdly__btb_8;
    vlSelf->__PVT__btb_7 = vlSelf->__Vdly__btb_7;
    vlSelf->__PVT__btb_6 = vlSelf->__Vdly__btb_6;
    vlSelf->__PVT__btb_1 = vlSelf->__Vdly__btb_1;
    vlSelf->__PVT__btb_0 = vlSelf->__Vdly__btb_0;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first___7(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first___7\n"); );
    // Body
    vlSelf->__PVT__btb_29 = vlSelf->__Vdly__btb_29;
    vlSelf->__Vdly__btb_31 = vlSelf->__PVT__btb_31;
    vlSelf->__PVT__btb_28 = vlSelf->__Vdly__btb_28;
    vlSelf->__PVT__btb_27 = vlSelf->__Vdly__btb_27;
    vlSelf->__PVT__btb_26 = vlSelf->__Vdly__btb_26;
    vlSelf->__PVT__btb_25 = vlSelf->__Vdly__btb_25;
    vlSelf->__PVT__btb_24 = vlSelf->__Vdly__btb_24;
    vlSelf->__PVT__btb_23 = vlSelf->__Vdly__btb_23;
    vlSelf->__PVT__btb_22 = vlSelf->__Vdly__btb_22;
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first___8(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first___8\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__btb_31 = 0U;
    } else if ((0x1fU == (IData)(vlSelf->__PVT__io_aw_addr))) {
        if (vlSelf->__PVT__io_write) {
            vlSelf->__Vdly__btb_31 = vlSelf->__PVT__io_in;
        } else if ((0x1fU != (IData)(vlSelf->__PVT__io_aw_addr))) {
            vlSelf->__Vdly__btb_31 = ((0x1eU == (IData)(vlSelf->__PVT__io_aw_addr))
                                       ? (IData)(vlSelf->__PVT__btb_30)
                                       : (IData)(vlSelf->__PVT___GEN_61));
        }
    }
}

VL_INLINE_OPT void Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first___9(Vmycpu_top_Look_up_table_read_first_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vmycpu_top_Look_up_table_read_first____sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__Look_up_table_read_first___9\n"); );
    // Body
    vlSelf->__PVT__btb_31 = vlSelf->__Vdly__btb_31;
    vlSelf->__PVT__btb_30 = vlSelf->__Vdly__btb_30;
}
