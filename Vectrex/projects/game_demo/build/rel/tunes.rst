                              1 ;;; gcc for m6809 : Mar 17 2019 13:25:32
                              2 ;;; 4.3.6 (gcc6809)
                              3 ;;; ABI version 1
                              4 ;;; -mabi=bx -mint8 -fomit-frame-pointer -O0
                              5 	.module	tunes.c
                              6 	.globl	_bing
                              7 	.area	.text
   0790                       8 _bing:
   0790 FE E8                 9 	.word	_Vec_ADSR_FADE4
   0792 FE B6                10 	.word	_Vec_TWANG_VIBEHL
   0794 00                   11 	.byte	0
   0795 0C                   12 	.byte	12
   0796 00                   13 	.byte	0
   0797 80                   14 	.byte	-128
                             15 	.globl	_bang
   0798                      16 _bang:
   0798 2A                   17 	.byte	42
   0799 00                   18 	.byte	0
   079A 00                   19 	.byte	0
   079B 01                   20 	.byte	1
ASxxxx Assembler V05.50  (Motorola 6809)                                Page 1
Hexadecimal [16-Bits]                                 Sun Apr  6 13:16:31 2025

Symbol Table

    .__.$$$.       =   2710 L   |     .__.ABS.       =   0000 G
    .__.CPU.       =   0000 L   |     .__.H$L.       =   0001 L
    _Vec_ADSR_FADE     **** GX  |     _Vec_TWANG_VIB     **** GX
  2 _bang              0008 GR  |   2 _bing              0000 GR

ASxxxx Assembler V05.50  (Motorola 6809)                                Page 2
Hexadecimal [16-Bits]                                 Sun Apr  6 13:16:31 2025

Area Table

[_CSEG]
   0 _CODE            size    0   flags C080
   2 .text            size    C   flags  100
[_DSEG]
   1 _DATA            size    0   flags C0C0

