                              1 ;;; gcc for m6809 : Mar 17 2019 13:25:32
                              2 ;;; 4.3.6 (gcc6809)
                              3 ;;; ABI version 1
                              4 ;;; -mabi=bx -mint8 -fomit-frame-pointer -O0
                              5 	.module	vec_rum_0xf7.c
                              6 ;----- asm -----
                              7 	.bank page_f7 (BASE=0xf742,SIZE=0x00be)
                              8 	.area .0xf7 (OVR,BANK=page_f7)
                              9 	
                             10 ;--- end asm ---
                             11 	.globl	___Stop_Sound
                             12 	.area	.0xf7
   F742                      13 ___Stop_Sound:
   F742 00 00 00 00 00 00    14 	.word	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        00 00 00 00 00 00
        00 00 00 00 00 00
        00 00 00 00 00 00
        00 00 00 00 00 00
        00 00
   F762 00 00 00 00 00 00    15 	.word	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        00 00 00 00 00 00
        00 00 00 00 00 00
        00 00 00 00 00 00
        00 00 00 00 00 00
        00 00
   F782 00 00 00 00 00 00    16 	.word	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
        00 00 00 00 00 00
        00 00 00 00 00 00
        00 00 00 00 00 00
        00 00 00 00 00 00
        00 00
   F7A2 00 00 00 00 00 00    17 	.word	0,0,0
   F7A8 00                   18 	.byte	0
                             19 	.globl	___Select_Game
   F7A9                      20 ___Select_Game:
   F7A9 00                   21 	.byte	0
ASxxxx Assembler V05.31  (Motorola 6809)                                Page 1
Hexadecimal [16-Bits]                                 Fri Sep 16 13:25:45 2022

Symbol Table

    .__.$$$.       =   2710 L   |     .__.ABS.       =   0000 G
    .__.CPU.       =   0000 L   |     .__.H$L.       =   0001 L
  2 ___Select_Game     0067 GR  |   2 ___Stop_Sound      0000 GR

ASxxxx Assembler V05.31  (Motorola 6809)                                Page 2
Hexadecimal [16-Bits]                                 Fri Sep 16 13:25:45 2022

Area Table

[_CSEG]
   0 _CODE            size    0   flags C080
[_DSEG]
   1 _DATA            size    0   flags C0C0
[page_f7]
   2 .0xf7            size   68   flags 8584

