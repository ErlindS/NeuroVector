                              1 ;;; gcc for m6809 : Mar 17 2019 13:25:32
                              2 ;;; 4.3.6 (gcc6809)
                              3 ;;; ABI version 1
                              4 ;;; -mabi=bx -mint8 -fomit-frame-pointer -O0
                              5 	.module	vec_rum_0xf0.c
                              6 ;----- asm -----
                              7 	.bank page_f0 (BASE=0xf000,SIZE=0x0100)
                              8 	.area .0xf0 (OVR,BANK=page_f0)
                              9 	
                             10 ;--- end asm ---
                             11 	.globl	___Reset
                             12 	.area	.0xf0
   F000                      13 ___Reset:
   F000 00                   14 	.byte	0
ASxxxx Assembler V05.31  (Motorola 6809)                                Page 1
Hexadecimal [16-Bits]                                 Fri Sep 16 13:25:44 2022

Symbol Table

    .__.$$$.       =   2710 L   |     .__.ABS.       =   0000 G
    .__.CPU.       =   0000 L   |     .__.H$L.       =   0001 L
  2 ___Reset           0000 GR

ASxxxx Assembler V05.31  (Motorola 6809)                                Page 2
Hexadecimal [16-Bits]                                 Fri Sep 16 13:25:44 2022

Area Table

[_CSEG]
   0 _CODE            size    0   flags C080
[_DSEG]
   1 _DATA            size    0   flags C0C0
[page_f0]
   2 .0xf0            size    1   flags 8584

