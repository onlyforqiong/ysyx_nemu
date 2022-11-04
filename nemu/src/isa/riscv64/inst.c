#include "local-include/reg.h"
#include <cpu/cpu.h>
#include <cpu/ifetch.h>
#include <cpu/decode.h>
#include <elf_read.h>

#define R(i) gpr(i)


#define Mr vaddr_read
#define Mw vaddr_write

enum {
  TYPE_I, TYPE_U, TYPE_S,
  TYPE_RR,TYPE_SB,TYPE_UJ,TYPE_II,TYPE_N // none
};



#define src1R(n) do { *src1 = R(n); } while (0)
#define src2R(n) do { *src2 = R(n); } while (0)
#define destR(n) do { *dest = n; } while (0)
#define src1I(i) do { *src1 = i; } while (0)
#define src2I(i) do { *src2 = i; } while (0)
#define destI(i) do { *dest = i; } while (0)



static word_t immu_jal(uint32_t i) {return SEXT(BITS(i,31-12,31-12),1)<<20 | BITS(i,30-12,21-12)<<1 | BITS(i,20-12,20-12)<<11 | BITS(i,19-12,12-12) <<12;}
static word_t immI(uint32_t i) { return SEXT(BITS(i, 31, 20), 12); }
static word_t immU(uint32_t i) {return SEXT(BITS(i, 31, 12), 20) << 12; } // u 和 i加起来正好就是32位，可以随便跳转了
static word_t immS(uint32_t i) { return (SEXT(BITS(i, 31, 25), 7) << 5) | BITS(i, 11, 7); }
static word_t immSB(uint32_t i) { return (SEXT(BITS(i,31,31),1)<<12) | BITS(i,7,7)<<11 | BITS(i,11,8)<<1 | BITS(i,30,25)<<5 ;}

static void decode_operand(Decode *s, word_t *dest, word_t *src1, word_t *src2, int type) {
  uint32_t i = s->isa.inst.val;
  int rd  = BITS(i, 11, 7);
  int rs1 = BITS(i, 19, 15);
  int rs2 = BITS(i, 24, 20);
  destR(rd);
  switch (type) {
    case TYPE_I:   src1R(rs1);    src2I(immI(i)); break;
    case TYPE_U:   src1I(immU(i)); break;
    case TYPE_S:   destI(immS(i)); src1R(rs1); src2R(rs2); break;
    case TYPE_SB:  destI(immSB(i));src1R(rs1); src2R(rs2); break;
    case TYPE_RR:  src1R(rs1); src2R(rs2); break;
    case TYPE_II:  src1I(rs1); src2I(immI(i));break;
  }
}
uint64_t sum_time_decoder = 0;
static int decode_exec(Decode *s) {
  // uint64_t start_time_sum = get_time();
  word_t dest = 0, src1 = 0, src2 = 0;
  s->dnpc = s->snpc;
//  printf("%d\n",0111);

#define INSTPAT_INST(s) ((s)->isa.inst.val)
#define INSTPAT_MATCH(s, name, type, ... /* body */ ) { \
  decode_operand(s, &dest, &src1, &src2, concat(TYPE_, type)); \
  __VA_ARGS__ ; \
}

  INSTPAT_START(); 
  INSTPAT("??????? ????? ????? ??? ????? 00101 11", auipc  , U, R(dest) = src1 + s->pc);
  INSTPAT("??????? ????? ????? ??? ????? 01101 11", lui    , U, R(dest) = src1);
  INSTPAT("??????? ????? ????? ??? ????? 11011 11", jal    , U, R(dest) = s->pc + 4 ;src1 = src1>>12;s->dnpc = s->pc + immu_jal(src1);
  #ifdef ITRACE_COND 
  get_jal_type(s->pc,s->dnpc,jal_or_jalr,0,src2)
  #endif
  );



  INSTPAT("??????? ????? ????? 000 ????? 11001 11", jalr   , I, R(dest) = s->pc + 4 ;s->dnpc = (src2 + src1)&0xfffffffffffffffe;
  #ifdef ITRACE_COND
  get_jal_type(s->pc,s->dnpc,jal_or_jalr, BITS(s->isa.inst.val, 19, 15),src2)
  #endif
  ); 
  //INSTPAT("??????? ????? ????? 000 ????? 00110 11", addiw  , I, R(dest) = ; 
  INSTPAT("??????? ????? ????? 000 ????? 00100 11", addi   , I, R(dest) = src1  +src2);
  INSTPAT("??????? ????? ????? 000 ????? 00110 11", addiw  , I, R(dest) = SEXT((uint32_t)(src1 + src2),32));
  INSTPAT("??????? ????? ????? 011 ????? 00000 11", ld     , I, R(dest) = Mr(src1 + src2, 8));
  INSTPAT("??????? ????? ????? 100 ????? 00000 11", lbu    , I, R(dest) = Mr(src1 + src2, 1));
  INSTPAT("??????? ????? ????? 000 ????? 00000 11", lb     , I, R(dest) = SEXT((uint8_t)Mr(src1 + src2, 1),8));
  INSTPAT("??????? ????? ????? 101 ????? 00000 11", lhu    , I, R(dest) = Mr(src1 + src2, 2));
  INSTPAT("??????? ????? ????? 001 ????? 00000 11", lh     , I, R(dest) = SEXT((uint16_t)Mr(src1 + src2, 2),16));
  INSTPAT("??????? ????? ????? 110 ????? 00000 11", lwu    , I, R(dest) = Mr(src1 + src2, 4));
  INSTPAT("??????? ????? ????? 010 ????? 00000 11", lw     , I, R(dest) = SEXT((uint32_t)Mr(src1 + src2, 4),32));
  INSTPAT("??????? ????? ????? 100 ????? 00000 11", lbu    , I, R(dest) = Mr(src1 + src2, 1));
  INSTPAT("??????? ????? ????? 101 ????? 00000 11", lhu    , I, R(dest) = Mr(src1 + src2, 2));
  INSTPAT("??????? ????? ????? 010 ????? 00100 11", slti   , I, R(dest) = (int64_t)src1<(int64_t)src2?1:0);
  INSTPAT("??????? ????? ????? 011 ????? 00100 11", sltiu  , I, R(dest) = src1<src2?1:0);
  INSTPAT("??????? ????? ????? 001 ????? 00100 11", slli   , I, R(dest) = src1<<(src2&0x3f));
  INSTPAT("??????? ????? ????? 001 ????? 00110 11", slliw  , I, R(dest) = SEXT((uint32_t)src1<<(src2&0x3f),32));
  INSTPAT("00????? ????? ????? 101 ????? 00110 11", srliw  , I, R(dest) = SEXT((uint32_t)src1>>(src2&0x3f),32));
  INSTPAT("01????? ????? ????? 101 ????? 00110 11", sraiw  , I, R(dest) = SEXT((int32_t)src1>>(src2&0x3f),32));  
  
  INSTPAT("?0????? ????? ????? 101 ????? 00100 11", srli   , I, R(dest) = src1>>(src2&0x3f));
  INSTPAT("?1????? ????? ????? 101 ????? 00100 11", srai   , I, R(dest) = ((int64_t)src1)>>(src2&0x3f));
  INSTPAT("??????? ????? ????? 111 ????? 00100 11", andi   , I, R(dest) = src1 & src2);
  INSTPAT("??????? ????? ????? 110 ????? 00100 11", ori    , I, R(dest) = src1 | src2);
  INSTPAT("??????? ????? ????? 100 ????? 00100 11", xori   , I, R(dest) = src1 ^ src2);


  
  INSTPAT("??????? ????? ????? 000 ????? 01000 11", sb     , S, Mw(src1 + dest, 1 ,(uint8_t)src2));
  INSTPAT("??????? ????? ????? 001 ????? 01000 11", sh     , S, Mw(src1 + dest, 2 ,(uint16_t)src2));
  INSTPAT("??????? ????? ????? 010 ????? 01000 11", sw     , S, Mw(src1 + dest, 4 ,(uint32_t)src2));
  INSTPAT("??????? ????? ????? 011 ????? 01000 11", sd     , S, Mw(src1 + dest, 8, src2));  
  
  INSTPAT("??????? ????? ????? 000 ????? 11000 11", beq    , SB, s->dnpc = src2==src1?s->pc+dest :s->dnpc);
  INSTPAT("??????? ????? ????? 001 ????? 11000 11", bne    , SB, s->dnpc = src2!=src1?s->pc+dest :s->dnpc);
  INSTPAT("??????? ????? ????? 101 ????? 11000 11", bge    , SB, s->dnpc = (int64_t)src1>=(int64_t)src2?s->pc+dest :s->dnpc);
  INSTPAT("??????? ????? ????? 111 ????? 11000 11", bgeu   , SB, s->dnpc = src1>=src2?s->pc+dest :s->dnpc);  
  INSTPAT("??????? ????? ????? 100 ????? 11000 11", blt    , SB, s->dnpc = (int64_t)src1<(int64_t)src2?s->pc+dest :s->dnpc);  
  INSTPAT("??????? ????? ????? 110 ????? 11000 11", bltu   , SB, s->dnpc = src1<src2?s->pc+dest :s->dnpc);  
//  INSTPAT("??????? ????? ????? 011 ????? 00000 11", beq    , SB, R(dest) = Mr(src1 + src2, 8));

  INSTPAT("0000001 ????? ????? 101 ????? 01100 11", divu   ,  RR, R(dest) = src1/src2);
  INSTPAT("0000001 ????? ????? 100 ????? 01100 11", div_tt ,  RR, R(dest) = (int64_t)src1/(int64_t)src2);
  INSTPAT("0000001 ????? ????? 111 ????? 01100 11", remu   ,  RR, R(dest) = src1%src2);
  INSTPAT("0000001 ????? ????? 110 ????? 01100 11", rem    ,  RR, R(dest) = (int64_t)src1%(int64_t)src2);
  INSTPAT("0000001 ????? ????? 100 ????? 01110 11", divw   ,  RR, R(dest) = SEXT((int32_t)src1/(int32_t)src2,32));
  INSTPAT("0000001 ????? ????? 101 ????? 01110 11", divuw  ,  RR, R(dest) = SEXT((uint32_t)src1/(uint32_t)src2,32));
  INSTPAT("0000001 ????? ????? 110 ????? 01110 11", remw   ,  RR, R(dest) = SEXT((int32_t)src1%(int32_t)src2,32));
  INSTPAT("0000001 ????? ????? 111 ????? 01110 11", remuw  ,  RR, R(dest) = SEXT((uint32_t)src1%(uint32_t)src2,32));
        
  INSTPAT("0000001 ????? ????? 000 ????? 01110 11", mulw  ,  RR, R(dest) = SEXT((uint32_t)src1*(uint32_t)src2,32)); 
  INSTPAT("0000001 ????? ????? 000 ????? 01100 11", mul   ,  RR, R(dest) = src1*src2);
  INSTPAT("0000001 ????? ????? 001 ????? 01100 11", mulh  ,  RR, R(dest) = (__uint128_t)((int64_t)src1*(int64_t)src2)>>64);
  INSTPAT("0000001 ????? ????? 011 ????? 01100 11", mulhu ,  RR, R(dest) = (__uint128_t)(src1*src2)>>64);
  INSTPAT("0000001 ????? ????? 010 ????? 01100 11", mulhsu,  RR, R(dest) = (__uint128_t)((int64_t)src1*src2)>>64);
  INSTPAT("0000001 ????? ????? 000 ????? 01110 11", mulw  ,  RR, R(dest) = SEXT((uint32_t)src1*(uint32_t)src2,32));   
  INSTPAT("0000000 ????? ????? 000 ????? 01100 11", add   ,  RR, R(dest) = src1 + src2);
  INSTPAT("0000000 ????? ????? 001 ????? 01100 11", sll   ,  RR, R(dest) = src1 << (src2&0x3f)); 
  INSTPAT("0000000 ????? ????? 101 ????? 01100 11", srl   ,  RR, R(dest) = src1 >> (src2&0x3f));
  INSTPAT("0100000 ????? ????? 101 ????? 01100 11", sra   ,  RR, R(dest) = ((int64_t)src1) >> (src2&0x3f));  
  INSTPAT("0000000 ????? ????? 010 ????? 01100 11", slt   ,  RR, R(dest) = (int64_t)src1<(int64_t)src2?1:0);
  INSTPAT("0000000 ????? ????? 011 ????? 01100 11", sltu  ,  RR, R(dest) = src1 < src2?1:0);
  INSTPAT("0100000 ????? ????? 000 ????? 01100 11", sub   ,  RR, R(dest) = src1 - src2);
  INSTPAT("0000000 ????? ????? 111 ????? 01100 11", and   ,  RR, R(dest) = src1 & src2);
  INSTPAT("0000000 ????? ????? 110 ????? 01100 11", or    ,  RR, R(dest) = src1 | src2);
  INSTPAT("0000000 ????? ????? 001 ????? 01110 11", sllw  ,  RR, R(dest) = SEXT(((uint32_t)src1)<<(src2&0x1f),32)) ;
  INSTPAT("0000000 ????? ????? 101 ????? 01110 11", srlw  ,  RR, R(dest) = SEXT(((uint32_t)src1)>>(src2&0x1f),32)) ;
  INSTPAT("0100000 ????? ????? 101 ????? 01110 11", sraw  ,  RR, R(dest) = SEXT(((int32_t)src1)>>(src2&0x1f),32)) ;  

  INSTPAT("0000000 ????? ????? 000 ????? 01110 11", addw  ,  RR, R(dest) = SEXT((uint32_t)src1+(uint32_t)src2,32)) ;
  INSTPAT("0100000 ????? ????? 000 ????? 01110 11", subw  ,  RR, R(dest) = SEXT((uint32_t)src1-(uint32_t)src2,32)) ;
  INSTPAT("0000000 ????? ????? 100 ????? 01100 11", xor   ,  RR, R(dest) = src1 ^ src2) ; 
  
  //异常有关的所有指令
  INSTPAT("??????? ????? ????? 111 ????? 11100 11", csrrci , II , R(dest) = CSR(src2) ; CSR(src2) = CSR(src2) & ( ~ src1);) ;
  INSTPAT("??????? ????? ????? 110 ????? 11100 11", csrrsi , II , R(dest) = CSR(src2) ; CSR(src2) = CSR(src2) | src1;) ;
  INSTPAT("??????? ????? ????? 101 ????? 11100 11", csrrwi , II , R(dest) = CSR(src2) ; CSR(src2) = src1;) ;
  INSTPAT("??????? ????? ????? 011 ????? 11100 11", csrrc  , I  , R(dest) = CSR(src2) ; CSR(src2) = CSR(src2) & ( ~ src1);) ;
  INSTPAT("??????? ????? ????? 010 ????? 11100 11", csrrs  , I  , R(dest) = CSR(src2) ; CSR(src2) = CSR(src2) | src1;) ;
  INSTPAT("??????? ????? ????? 001 ????? 11100 11", csrrw  , I  , R(dest) = CSR(src2) ; CSR(src2) = src1 ; ) ;
  
  INSTPAT("0000000 00000 00000 000 00000 11100 11", ecall  , N, s->dnpc = isa_raise_intr(0x000000000000000b,s->pc)) ; 
  INSTPAT("0011000 00010 00000 000 00000 11100 11", mret   , N, s->dnpc = CSR(MEPC)) ;
  INSTPAT("0000000 00001 00000 000 00000 11100 11", ebreak , N, NEMUTRAP(s->pc, R(10))); // R(10) is $a0
  INSTPAT("??????? ????? ????? ??? ????? ????? ??", inv    , N, INV(s->pc));

  INSTPAT_END();


  // get_jal_type
  
 // printf("src1 = %lx and jali = %lx\n",src1,immu_jal(src1));
  R(0) = 0; // reset $zero to 0
// printf("answer= %x\n",(uint32_t)(-100)>>1);
  //assert(s->pc>=0x80000000 && s->pc<=0x88000000);

 
  return 0;
}

int isa_exec_once(Decode *s) {
  s->isa.inst.val = inst_fetch(&s->snpc, 4);
  return decode_exec(s);
}