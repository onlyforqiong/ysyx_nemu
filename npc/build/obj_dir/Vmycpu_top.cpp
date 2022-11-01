// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vmycpu_top.h"
#include "Vmycpu_top__Syms.h"
#include "verilated_fst_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

Vmycpu_top::Vmycpu_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vmycpu_top__Syms(contextp(), _vcname__, this)}
    , axi_mem_port_0_arvalid{vlSymsp->TOP.axi_mem_port_0_arvalid}
    , axi_mem_port_1_wstrb{vlSymsp->TOP.axi_mem_port_1_wstrb}
    , axi_mem_port_1_wlast{vlSymsp->TOP.axi_mem_port_1_wlast}
    , axi_mem_port_1_wvalid{vlSymsp->TOP.axi_mem_port_1_wvalid}
    , axi_mem_port_0_araddr{vlSymsp->TOP.axi_mem_port_0_araddr}
    , axi_mem_port_0_rdata{vlSymsp->TOP.axi_mem_port_0_rdata}
    , axi_mem_port_1_awaddr{vlSymsp->TOP.axi_mem_port_1_awaddr}
    , axi_mem_port_1_wdata{vlSymsp->TOP.axi_mem_port_1_wdata}
    , axi_mem_port_0_rlast{vlSymsp->TOP.axi_mem_port_0_rlast}
    , axi_mem_port_0_rvalid{vlSymsp->TOP.axi_mem_port_0_rvalid}
    , axi_mem_port_0_arlen{vlSymsp->TOP.axi_mem_port_0_arlen}
    , axi_mem_port_0_arburst{vlSymsp->TOP.axi_mem_port_0_arburst}
    , axi_mem_port_0_arcache{vlSymsp->TOP.axi_mem_port_0_arcache}
    , axi_mem_port_0_arprot{vlSymsp->TOP.axi_mem_port_0_arprot}
    , axi_mem_port_0_rid{vlSymsp->TOP.axi_mem_port_0_rid}
    , axi_mem_port_0_rresp{vlSymsp->TOP.axi_mem_port_0_rresp}
    , axi_mem_port_0_rready{vlSymsp->TOP.axi_mem_port_0_rready}
    , axi_mem_port_0_awid{vlSymsp->TOP.axi_mem_port_0_awid}
    , axi_mem_port_0_awlen{vlSymsp->TOP.axi_mem_port_0_awlen}
    , axi_mem_port_0_awsize{vlSymsp->TOP.axi_mem_port_0_awsize}
    , axi_mem_port_0_awburst{vlSymsp->TOP.axi_mem_port_0_awburst}
    , axi_mem_port_0_awlock{vlSymsp->TOP.axi_mem_port_0_awlock}
    , axi_mem_port_0_awcache{vlSymsp->TOP.axi_mem_port_0_awcache}
    , axi_mem_port_0_bready{vlSymsp->TOP.axi_mem_port_0_bready}
    , axi_mem_port_1_arid{vlSymsp->TOP.axi_mem_port_1_arid}
    , axi_mem_port_1_arlock{vlSymsp->TOP.axi_mem_port_1_arlock}
    , axi_mem_port_1_arcache{vlSymsp->TOP.axi_mem_port_1_arcache}
    , axi_mem_port_1_arprot{vlSymsp->TOP.axi_mem_port_1_arprot}
    , axi_mem_port_1_rid{vlSymsp->TOP.axi_mem_port_1_rid}
    , axi_mem_port_1_rresp{vlSymsp->TOP.axi_mem_port_1_rresp}
    , axi_mem_port_1_rready{vlSymsp->TOP.axi_mem_port_1_rready}
    , axi_mem_port_1_awid{vlSymsp->TOP.axi_mem_port_1_awid}
    , axi_mem_port_1_awlock{vlSymsp->TOP.axi_mem_port_1_awlock}
    , axi_mem_port_1_awcache{vlSymsp->TOP.axi_mem_port_1_awcache}
    , axi_mem_port_1_awprot{vlSymsp->TOP.axi_mem_port_1_awprot}
    , axi_mem_port_1_wid{vlSymsp->TOP.axi_mem_port_1_wid}
    , axi_mem_port_1_bid{vlSymsp->TOP.axi_mem_port_1_bid}
    , axi_mem_port_1_bresp{vlSymsp->TOP.axi_mem_port_1_bresp}
    , axi_mem_port_1_bready{vlSymsp->TOP.axi_mem_port_1_bready}
    , debug_wb_rf_wen{vlSymsp->TOP.debug_wb_rf_wen}
    , debug_wb_rf_wnum{vlSymsp->TOP.debug_wb_rf_wnum}
    , debug_wb_pc{vlSymsp->TOP.debug_wb_pc}
    , debug_wb_rf_wdata{vlSymsp->TOP.debug_wb_rf_wdata}
    , axi_mem_port_0_awaddr{vlSymsp->TOP.axi_mem_port_0_awaddr}
    , axi_mem_port_0_arready{vlSymsp->TOP.axi_mem_port_0_arready}
    , axi_mem_port_0_arid{vlSymsp->TOP.axi_mem_port_0_arid}
    , axi_mem_port_0_arsize{vlSymsp->TOP.axi_mem_port_0_arsize}
    , axi_mem_port_0_arlock{vlSymsp->TOP.axi_mem_port_0_arlock}
    , axi_mem_port_0_awprot{vlSymsp->TOP.axi_mem_port_0_awprot}
    , axi_mem_port_0_awvalid{vlSymsp->TOP.axi_mem_port_0_awvalid}
    , axi_mem_port_1_arlen{vlSymsp->TOP.axi_mem_port_1_arlen}
    , axi_mem_port_1_arsize{vlSymsp->TOP.axi_mem_port_1_arsize}
    , axi_mem_port_1_arburst{vlSymsp->TOP.axi_mem_port_1_arburst}
    , axi_mem_port_1_arvalid{vlSymsp->TOP.axi_mem_port_1_arvalid}
    , axi_mem_port_1_arready{vlSymsp->TOP.axi_mem_port_1_arready}
    , axi_mem_port_1_rlast{vlSymsp->TOP.axi_mem_port_1_rlast}
    , axi_mem_port_1_awlen{vlSymsp->TOP.axi_mem_port_1_awlen}
    , axi_mem_port_1_awsize{vlSymsp->TOP.axi_mem_port_1_awsize}
    , axi_mem_port_1_awburst{vlSymsp->TOP.axi_mem_port_1_awburst}
    , axi_mem_port_1_awvalid{vlSymsp->TOP.axi_mem_port_1_awvalid}
    , axi_mem_port_1_awready{vlSymsp->TOP.axi_mem_port_1_awready}
    , axi_mem_port_1_wready{vlSymsp->TOP.axi_mem_port_1_wready}
    , axi_mem_port_1_araddr{vlSymsp->TOP.axi_mem_port_1_araddr}
    , axi_mem_port_1_rvalid{vlSymsp->TOP.axi_mem_port_1_rvalid}
    , axi_mem_port_1_rdata{vlSymsp->TOP.axi_mem_port_1_rdata}
    , ext_int{vlSymsp->TOP.ext_int}
    , axi_mem_port_0_awready{vlSymsp->TOP.axi_mem_port_0_awready}
    , axi_mem_port_0_wid{vlSymsp->TOP.axi_mem_port_0_wid}
    , axi_mem_port_0_wstrb{vlSymsp->TOP.axi_mem_port_0_wstrb}
    , axi_mem_port_0_wlast{vlSymsp->TOP.axi_mem_port_0_wlast}
    , axi_mem_port_0_wvalid{vlSymsp->TOP.axi_mem_port_0_wvalid}
    , axi_mem_port_0_wready{vlSymsp->TOP.axi_mem_port_0_wready}
    , axi_mem_port_0_bid{vlSymsp->TOP.axi_mem_port_0_bid}
    , axi_mem_port_1_bvalid{vlSymsp->TOP.axi_mem_port_1_bvalid}
    , axi_mem_port_0_wdata{vlSymsp->TOP.axi_mem_port_0_wdata}
    , axi_mem_port_0_bresp{vlSymsp->TOP.axi_mem_port_0_bresp}
    , axi_mem_port_0_bvalid{vlSymsp->TOP.axi_mem_port_0_bvalid}
    , aresetn{vlSymsp->TOP.aresetn}
    , aclk{vlSymsp->TOP.aclk}
    , __PVT__mycpu_top{vlSymsp->TOP.__PVT__mycpu_top}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vmycpu_top::Vmycpu_top(const char* _vcname__)
    : Vmycpu_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vmycpu_top::~Vmycpu_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vmycpu_top___024root___eval_debug_assertions(Vmycpu_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vmycpu_top___024root___eval_static(Vmycpu_top___024root* vlSelf);
void Vmycpu_top___024root___eval_initial(Vmycpu_top___024root* vlSelf);
void Vmycpu_top___024root___eval_settle(Vmycpu_top___024root* vlSelf);
void Vmycpu_top___024root___eval(Vmycpu_top___024root* vlSelf);

void Vmycpu_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmycpu_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vmycpu_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vmycpu_top___024root___eval_static(&(vlSymsp->TOP));
        Vmycpu_top___024root___eval_initial(&(vlSymsp->TOP));
        Vmycpu_top___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vmycpu_top___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vmycpu_top::eventsPending() { return false; }

uint64_t Vmycpu_top::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vmycpu_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vmycpu_top___024root___eval_final(Vmycpu_top___024root* vlSelf);

VL_ATTR_COLD void Vmycpu_top::final() {
    Vmycpu_top___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vmycpu_top::hierName() const { return vlSymsp->name(); }
const char* Vmycpu_top::modelName() const { return "Vmycpu_top"; }
unsigned Vmycpu_top::threads() const { return 24; }
std::unique_ptr<VerilatedTraceConfig> Vmycpu_top::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vmycpu_top___024root__trace_init_top(Vmycpu_top___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vmycpu_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmycpu_top___024root*>(voidSelf);
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vmycpu_top___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vmycpu_top___024root__trace_register(Vmycpu_top___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vmycpu_top::trace(VerilatedFstC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vmycpu_top::trace()' shall not be called after 'VerilatedFstC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vmycpu_top___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
