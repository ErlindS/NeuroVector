                              1 ;;; gcc for m6809 : Mar 17 2019 13:25:32
                              2 ;;; 4.3.6 (gcc6809)
                              3 ;;; ABI version 1
                              4 ;;; -mabi=bx -mint8 -fomit-frame-pointer -O0
                              5 	.module	vec_ram_dpcb_1.c
                              6 ;----- asm -----
                              7 	.bank page_00 (BASE=0x0000,SIZE=0x0100)
                              8 	.area .direct (OVR,BANK=page_00)
                              9 	
                             10 ;--- end asm ---
                             11 	.globl	_dp_Vec_Snd_shadow
                             12 	.area	.direct
   0000                      13 _dp_Vec_Snd_shadow:
   0000 00 00 00 00 00 00    14 	.word	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        00 00 00 00 00 00
        00 00 00 00 00 00
        00 00 00 00 00 00
        00 00 00 00 00 00
        00 00
   0020 00 00 00 00 00 00    15 	.word	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        00 00 00 00 00 00
        00 00 00 00 00 00
        00 00 00 00 00 00
        00 00 00 00 00 00
        00 00
   0040 00 00 00 00 00 00    16 	.word	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        00 00 00 00 00 00
        00 00 00 00 00 00
        00 00 00 00 00 00
        00 00 00 00 00 00
        00 00
   0060 00 00 00 00 00 00    17 	.word	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        00 00 00 00 00 00
        00 00 00 00 00 00
        00 00 00 00 00 00
        00 00 00 00 00 00
        00 00
   0080 00 00 00 00 00 00    18 	.word	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        00 00 00 00 00 00
        00 00 00 00 00 00
        00 00 00 00 00 00
        00 00 00 00 00 00
        00 00
   00A0 00 00 00 00 00 00    19 	.word	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        00 00 00 00 00 00
        00 00 00 00 00 00
        00 00 00 00 00 00
        00 00 00 00 00 00
        00 00
   00C0 00 00 00 00 00 00    20 	.word	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        00 00 00 00 00 00
        00 00 00 00 00 00
        00 00 00 00 00 00
        00 00 00 00 00 00
        00 00
   00E0 00 00 00 00 00 00    21 	.word	0,0,0,0,0
        00 00 00 00
   00EA 00                   22 	.byte	0
                             23 	.globl	_dp_Vec_High_score
   00EB                      24 _dp_Vec_High_score:
   00EB 00 00 00 00 00 00    25 	.word	0,0,0
   00F1 00                   26 	.byte	0
                             27 	.globl	_dp_Vec_SWI3_vector
   00F2                      28 _dp_Vec_SWI3_vector:
   00F2 00 00                29 	.word	0
   00F4 00                   30 	.byte	0
                             31 	.globl	_dp_Vec_FIRQ_vector
   00F5                      32 _dp_Vec_FIRQ_vector:
   00F5 00 00                33 	.word	0
   00F7 00                   34 	.byte	0
                             35 	.globl	_dp_Vec_IRQ_vector
   00F8                      36 _dp_Vec_IRQ_vector:
   00F8 00 00                37 	.word	0
   00FA 00                   38 	.byte	0
                             39 	.globl	_dp_Vec_SWI_vector
   00FB                      40 _dp_Vec_SWI_vector:
   00FB 00 00                41 	.word	0
   00FD 00                   42 	.byte	0
ASxxxx Assembler V05.31  (Motorola 6809)                                Page 1
Hexadecimal [16-Bits]                                 Fri Sep 16 13:25:44 2022

Symbol Table

    .__.$$$.       =   2710 L   |     .__.ABS.       =   0000 G
    .__.CPU.       =   0000 L   |     .__.H$L.       =   0001 L
  2 _dp_Vec_FIRQ_v     00F5 GR  |   2 _dp_Vec_High_s     00EB GR
  2 _dp_Vec_IRQ_ve     00F8 GR  |   2 _dp_Vec_SWI3_v     00F2 GR
  2 _dp_Vec_SWI_ve     00FB GR  |   2 _dp_Vec_Snd_sh     0000 GR

ASxxxx Assembler V05.31  (Motorola 6809)                                Page 2
Hexadecimal [16-Bits]                                 Fri Sep 16 13:25:44 2022

Area Table

[_CSEG]
   0 _CODE            size    0   flags C080
[_DSEG]
   1 _DATA            size    0   flags C0C0
[page_00]
   2 .direct          size   FE   flags 8584

