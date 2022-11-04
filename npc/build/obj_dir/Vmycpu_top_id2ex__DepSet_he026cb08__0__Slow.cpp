// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_id2ex.h"

VL_ATTR_COLD void Vmycpu_top_id2ex___settle__TOP__mycpu_top__u_riscv_cpu___id2ex__0(Vmycpu_top_id2ex* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_id2ex___settle__TOP__mycpu_top__u_riscv_cpu___id2ex__0\n"); );
    // Body
    vlSelf->__PVT__io2_LoadUnsignedE = vlSelf->__PVT__decoder_port_reg_LoadUnsignedD;
    vlSelf->__PVT__io2_csrWriteE = vlSelf->__PVT__decoder_port_reg_csrWriteD;
    vlSelf->__PVT__io2_WritecsrAddrE = vlSelf->__PVT__WritecsrAddrE_Reg;
    vlSelf->__PVT__io2_BranchJump_JrE = vlSelf->__PVT__BranchJump_JrE_Reg;
    vlSelf->__PVT__io_Pc_NextE = vlSelf->__PVT__Pc_NextReg;
}

VL_ATTR_COLD void Vmycpu_top_id2ex___settle__TOP__mycpu_top__u_riscv_cpu___id2ex__1(Vmycpu_top_id2ex* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_id2ex___settle__TOP__mycpu_top__u_riscv_cpu___id2ex__1\n"); );
    // Body
    vlSelf->__PVT__io_muldiv_calE = vlSelf->__PVT__decoder_port_reg_muldiv_cal;
}

VL_ATTR_COLD void Vmycpu_top_id2ex___settle__TOP__mycpu_top__u_riscv_cpu___id2ex__2(Vmycpu_top_id2ex* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_id2ex___settle__TOP__mycpu_top__u_riscv_cpu___id2ex__2\n"); );
    // Body
    vlSelf->__PVT__io2_PCPlus4E = vlSelf->__PVT__PCPlus4E_Reg;
    vlSelf->__PVT__io2_eBreakE = vlSelf->__PVT__decoder_port_reg_ebreakD;
}

VL_ATTR_COLD void Vmycpu_top_id2ex___settle__TOP__mycpu_top__u_riscv_cpu___id2ex__3(Vmycpu_top_id2ex* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_id2ex___settle__TOP__mycpu_top__u_riscv_cpu___id2ex__3\n"); );
    // Body
    vlSelf->__PVT__io2_LinkE = vlSelf->__PVT__decoder_port_reg_LinkD;
    vlSelf->__PVT__io_alu_calE = vlSelf->__PVT__decoder_port_reg_alu_cal;
}

VL_ATTR_COLD void Vmycpu_top_id2ex___settle__TOP__mycpu_top__u_riscv_cpu___id2ex__4(Vmycpu_top_id2ex* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_id2ex___settle__TOP__mycpu_top__u_riscv_cpu___id2ex__4\n"); );
    // Body
    vlSelf->__PVT__io2_MemToRegE = vlSelf->__PVT__decoder_port_reg_MemToRegD;
}

VL_ATTR_COLD void Vmycpu_top_id2ex___settle__TOP__mycpu_top__u_riscv_cpu___id2ex__5(Vmycpu_top_id2ex* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_id2ex___settle__TOP__mycpu_top__u_riscv_cpu___id2ex__5\n"); );
    // Body
    vlSelf->__PVT__io_csr_controlE = vlSelf->__PVT__decoder_port_reg_csr_control;
    vlSelf->__PVT__io2_MemWriteE = vlSelf->__PVT__decoder_port_reg_MemWriteD;
}

VL_ATTR_COLD void Vmycpu_top_id2ex___settle__TOP__mycpu_top__u_riscv_cpu___id2ex__6(Vmycpu_top_id2ex* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_id2ex___settle__TOP__mycpu_top__u_riscv_cpu___id2ex__6\n"); );
    // Body
    vlSelf->__PVT__io_csr_ImmE = vlSelf->__PVT__decoder_port_reg_csr_Imm;
}

VL_ATTR_COLD void Vmycpu_top_id2ex___settle__TOP__mycpu_top__u_riscv_cpu___id2ex__7(Vmycpu_top_id2ex* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_id2ex___settle__TOP__mycpu_top__u_riscv_cpu___id2ex__7\n"); );
    // Body
    vlSelf->__PVT__io2_MemWidthE = vlSelf->__PVT__decoder_port_reg_MemWidthD;
}

VL_ATTR_COLD void Vmycpu_top_id2ex___settle__TOP__mycpu_top__u_riscv_cpu___id2ex__8(Vmycpu_top_id2ex* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_id2ex___settle__TOP__mycpu_top__u_riscv_cpu___id2ex__8\n"); );
    // Body
    vlSelf->__PVT__io_csrToRegE_Out = vlSelf->__PVT__decoder_port_reg_csrToRegD;
    vlSelf->__PVT__io_ExceptionTypeE_Out = vlSelf->__PVT__ExceptionTypeE_Reg;
}

VL_ATTR_COLD void Vmycpu_top_id2ex___settle__TOP__mycpu_top__u_riscv_cpu___id2ex__9(Vmycpu_top_id2ex* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_id2ex___settle__TOP__mycpu_top__u_riscv_cpu___id2ex__9\n"); );
    // Body
    vlSelf->__PVT__io_muldiv_control = vlSelf->__PVT__decoder_port_reg_muldiv_control;
    vlSelf->__PVT__io2_ReadcsrAddrE = vlSelf->__PVT__ReadcsrAddrE_Reg;
    vlSelf->__PVT__io_data_wE = vlSelf->__PVT__decoder_port_reg_data_wD;
}

VL_ATTR_COLD void Vmycpu_top_id2ex___settle__TOP__mycpu_top__u_riscv_cpu___id2ex__10(Vmycpu_top_id2ex* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_id2ex___settle__TOP__mycpu_top__u_riscv_cpu___id2ex__10\n"); );
    // Body
    vlSelf->__PVT__io2_RegWriteE = vlSelf->__PVT__decoder_port_reg_RegWriteD;
}

VL_ATTR_COLD void Vmycpu_top_id2ex___settle__TOP__mycpu_top__u_riscv_cpu___id2ex__11(Vmycpu_top_id2ex* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_id2ex___settle__TOP__mycpu_top__u_riscv_cpu___id2ex__11\n"); );
    // Body
    vlSelf->__PVT__io2_RegDstE = vlSelf->__PVT__decoder_port_reg_RegDstD;
}

VL_ATTR_COLD void Vmycpu_top_id2ex___settle__TOP__mycpu_top__u_riscv_cpu___id2ex__12(Vmycpu_top_id2ex* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_id2ex___settle__TOP__mycpu_top__u_riscv_cpu___id2ex__12\n"); );
    // Body
    vlSelf->__PVT__io2_ALUCtrlE = vlSelf->__PVT__decoder_port_reg_ALUCtrlD;
}

VL_ATTR_COLD void Vmycpu_top_id2ex___settle__TOP__mycpu_top__u_riscv_cpu___id2ex__13(Vmycpu_top_id2ex* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_id2ex___settle__TOP__mycpu_top__u_riscv_cpu___id2ex__13\n"); );
    // Body
    vlSelf->__PVT__io2_ALUSrcE_0 = (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__decoder_port_reg_ALUSrcD_0), 0U));
    vlSelf->__PVT__io2_PCE = vlSelf->__PVT__PCE_Reg;
    vlSelf->__PVT__io2_ALUSrcE_1 = (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__decoder_port_reg_ALUSrcD_1), 0U));
    vlSelf->__PVT__io_RD2E = vlSelf->__PVT__RD2E_Reg;
    vlSelf->__PVT__io_R2E = vlSelf->__PVT__R2E_Reg;
}

VL_ATTR_COLD void Vmycpu_top_id2ex___settle__TOP__mycpu_top__u_riscv_cpu___id2ex__14(Vmycpu_top_id2ex* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_id2ex___settle__TOP__mycpu_top__u_riscv_cpu___id2ex__14\n"); );
    // Body
    vlSelf->__PVT__io_ImmE = vlSelf->__PVT__ImmE_Reg;
    vlSelf->__PVT__io_RD1E = vlSelf->__PVT__RD1E_Reg;
}

VL_ATTR_COLD void Vmycpu_top_id2ex___settle__TOP__mycpu_top__u_riscv_cpu___id2ex__15(Vmycpu_top_id2ex* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_id2ex___settle__TOP__mycpu_top__u_riscv_cpu___id2ex__15\n"); );
    // Body
    vlSelf->__PVT__io_R1E = vlSelf->__PVT__R1E_Reg;
}

VL_ATTR_COLD void Vmycpu_top_id2ex___ctor_var_reset(Vmycpu_top_id2ex* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_id2ex___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clock = 0;
    vlSelf->__PVT__reset = 0;
    vlSelf->__PVT__io1_RegWriteD = 0;
    vlSelf->__PVT__io1_MemToRegD = 0;
    vlSelf->__PVT__io1_MemWriteD = 0;
    vlSelf->__PVT__io1_ALUCtrlD = 0;
    vlSelf->__PVT__io1_ALUSrcD_0 = 0;
    vlSelf->__PVT__io1_ALUSrcD_1 = 0;
    vlSelf->__PVT__io1_RegDstD = 0;
    vlSelf->__PVT__io1_LinkD = 0;
    vlSelf->__PVT__io1_csrWriteD = 0;
    vlSelf->__PVT__io1_csrToRegD = 0;
    vlSelf->__PVT__io1_LoadUnsignedD = 0;
    vlSelf->__PVT__io1_MemWidthD = 0;
    vlSelf->__PVT__io1_ebreakD = 0;
    vlSelf->__PVT__io1_data_wD = 0;
    vlSelf->__PVT__io1_muldiv_control = 0;
    vlSelf->__PVT__io1_muldiv_cal = 0;
    vlSelf->__PVT__io1_alu_cal = 0;
    vlSelf->__PVT__io1_csr_control = 0;
    vlSelf->__PVT__io1_csr_Imm = 0;
    vlSelf->__PVT__io2_RegWriteE = 0;
    vlSelf->__PVT__io2_MemToRegE = 0;
    vlSelf->__PVT__io2_MemWriteE = 0;
    vlSelf->__PVT__io2_ALUCtrlE = 0;
    vlSelf->__PVT__io2_ALUSrcE_0 = 0;
    vlSelf->__PVT__io2_ALUSrcE_1 = 0;
    vlSelf->__PVT__io2_RegDstE = 0;
    vlSelf->__PVT__io2_LinkE = 0;
    vlSelf->__PVT__io2_PCPlus4E = 0;
    vlSelf->__PVT__io2_LoadUnsignedE = 0;
    vlSelf->__PVT__io2_MemWidthE = 0;
    vlSelf->__PVT__io2_csrWriteE = 0;
    vlSelf->__PVT__io2_WritecsrAddrE = 0;
    vlSelf->__PVT__io2_ReadcsrAddrE = 0;
    vlSelf->__PVT__io2_PCE = 0;
    vlSelf->__PVT__io2_BranchJump_JrE = 0;
    vlSelf->__PVT__io2_eBreakE = 0;
    vlSelf->__PVT__io_en = 0;
    vlSelf->__PVT__io_clr = 0;
    vlSelf->__PVT__io_csrToRegE_Out = 0;
    vlSelf->__PVT__io_RD1D = 0;
    vlSelf->__PVT__io_RD2D = 0;
    vlSelf->__PVT__io_R2D = 0;
    vlSelf->__PVT__io_R1D = 0;
    vlSelf->__PVT__io_ImmD = 0;
    vlSelf->__PVT__io_PCPlus4D = 0;
    vlSelf->__PVT__io_WritecsrAddrD = 0;
    vlSelf->__PVT__io_ReadcsrAddrD = 0;
    vlSelf->__PVT__io_PCD = 0;
    vlSelf->__PVT__io_ExceptionTypeD = 0;
    vlSelf->__PVT__io_Pc_NextD = 0;
    vlSelf->__PVT__io_BranchJump_JrD = 0;
    vlSelf->__PVT__io_RD1E = 0;
    vlSelf->__PVT__io_RD2E = 0;
    vlSelf->__PVT__io_R2E = 0;
    vlSelf->__PVT__io_R1E = 0;
    vlSelf->__PVT__io_ImmE = 0;
    vlSelf->__PVT__io_data_wE = 0;
    vlSelf->__PVT__io_Pc_NextE = 0;
    vlSelf->__PVT__io_muldiv_control = 0;
    vlSelf->__PVT__io_alu_calE = 0;
    vlSelf->__PVT__io_muldiv_calE = 0;
    vlSelf->__PVT__io_ExceptionTypeE_Out = 0;
    vlSelf->__PVT__io_csr_controlE = 0;
    vlSelf->__PVT__io_csr_ImmE = 0;
    vlSelf->__PVT__RD1E_Reg = 0;
    vlSelf->__PVT__RD2E_Reg = 0;
    vlSelf->__PVT__R2E_Reg = 0;
    vlSelf->__PVT__R1E_Reg = 0;
    vlSelf->__PVT__ImmE_Reg = 0;
    vlSelf->__PVT__PCPlus4E_Reg = 0;
    vlSelf->__PVT__WritecsrAddrE_Reg = 0;
    vlSelf->__PVT__ReadcsrAddrE_Reg = 0;
    vlSelf->__PVT__PCE_Reg = 0;
    vlSelf->__PVT__ExceptionTypeE_Reg = 0;
    vlSelf->__PVT__BranchJump_JrE_Reg = 0;
    vlSelf->__PVT__Pc_NextReg = 0;
    vlSelf->__PVT__decoder_port_reg_RegWriteD = 0;
    vlSelf->__PVT__decoder_port_reg_MemToRegD = 0;
    vlSelf->__PVT__decoder_port_reg_MemWriteD = 0;
    vlSelf->__PVT__decoder_port_reg_ALUCtrlD = 0;
    vlSelf->__PVT__decoder_port_reg_ALUSrcD_0 = 0;
    vlSelf->__PVT__decoder_port_reg_ALUSrcD_1 = 0;
    vlSelf->__PVT__decoder_port_reg_RegDstD = 0;
    vlSelf->__PVT__decoder_port_reg_LinkD = 0;
    vlSelf->__PVT__decoder_port_reg_csrWriteD = 0;
    vlSelf->__PVT__decoder_port_reg_csrToRegD = 0;
    vlSelf->__PVT__decoder_port_reg_LoadUnsignedD = 0;
    vlSelf->__PVT__decoder_port_reg_MemWidthD = 0;
    vlSelf->__PVT__decoder_port_reg_ebreakD = 0;
    vlSelf->__PVT__decoder_port_reg_data_wD = 0;
    vlSelf->__PVT__decoder_port_reg_muldiv_control = 0;
    vlSelf->__PVT__decoder_port_reg_muldiv_cal = 0;
    vlSelf->__PVT__decoder_port_reg_alu_cal = 0;
    vlSelf->__PVT__decoder_port_reg_csr_control = 0;
    vlSelf->__PVT__decoder_port_reg_csr_Imm = 0;
    vlSelf->__Vdly__RD1E_Reg = 0;
    vlSelf->__Vdly__RD2E_Reg = 0;
    vlSelf->__Vdly__R2E_Reg = 0;
    vlSelf->__Vdly__R1E_Reg = 0;
    vlSelf->__Vdly__ImmE_Reg = 0;
    vlSelf->__Vdly__PCPlus4E_Reg = 0;
    vlSelf->__Vdly__WritecsrAddrE_Reg = 0;
    vlSelf->__Vdly__ReadcsrAddrE_Reg = 0;
    vlSelf->__Vdly__PCE_Reg = 0;
    vlSelf->__Vdly__ExceptionTypeE_Reg = 0;
    vlSelf->__Vdly__BranchJump_JrE_Reg = 0;
    vlSelf->__Vdly__Pc_NextReg = 0;
    vlSelf->__Vdly__decoder_port_reg_RegWriteD = 0;
    vlSelf->__Vdly__decoder_port_reg_MemToRegD = 0;
    vlSelf->__Vdly__decoder_port_reg_MemWriteD = 0;
    vlSelf->__Vdly__decoder_port_reg_ALUCtrlD = 0;
    vlSelf->__Vdly__decoder_port_reg_ALUSrcD_0 = 0;
    vlSelf->__Vdly__decoder_port_reg_ALUSrcD_1 = 0;
    vlSelf->__Vdly__decoder_port_reg_RegDstD = 0;
    vlSelf->__Vdly__decoder_port_reg_LinkD = 0;
    vlSelf->__Vdly__decoder_port_reg_csrWriteD = 0;
    vlSelf->__Vdly__decoder_port_reg_csrToRegD = 0;
    vlSelf->__Vdly__decoder_port_reg_LoadUnsignedD = 0;
    vlSelf->__Vdly__decoder_port_reg_MemWidthD = 0;
    vlSelf->__Vdly__decoder_port_reg_ebreakD = 0;
    vlSelf->__Vdly__decoder_port_reg_data_wD = 0;
    vlSelf->__Vdly__decoder_port_reg_muldiv_control = 0;
    vlSelf->__Vdly__decoder_port_reg_muldiv_cal = 0;
    vlSelf->__Vdly__decoder_port_reg_alu_cal = 0;
    vlSelf->__Vdly__decoder_port_reg_csr_control = 0;
    vlSelf->__Vdly__decoder_port_reg_csr_Imm = 0;
}
