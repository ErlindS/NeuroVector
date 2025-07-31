                              1 ;;; gcc for m6809 : Mar 17 2019 13:25:32
                              2 ;;; 4.3.6 (gcc6809)
                              3 ;;; ABI version 1
                              4 ;;; -mabi=bx -mint8 -fomit-frame-pointer -O3
                              5 	.module	cartridge.c
                              6 	.globl	_game_header
                              7 	.area	.cartridge
   0000                       8 _game_header:
   0000 67 20 47 43 45 20     9 	.byte	103,32,71,67,69,32,50,48
        32 30
   0008 32 35 80             10 	.byte	50,53,-128
   000B FD 0D                11 	.word	_Vec_Music_1
   000D F8                   12 	.byte	-8
   000E 50                   13 	.byte	80
   000F 18                   14 	.byte	24
   0010 B3                   15 	.byte	-77
   0011 4E 45 55 52 4F 20    16 	.byte	78,69,85,82,79,32,86,69
        56 45
   0019 43 54 4F 52 80 00    17 	.byte	67,84,79,82,-128,0
ASxxxx Assembler V05.50  (Motorola 6809)                                Page 1
Hexadecimal [16-Bits]                                 Thu Jul 31 17:19:46 2025

Symbol Table

    .__.$$$.       =   2710 L   |     .__.ABS.       =   0000 G
    .__.CPU.       =   0000 L   |     .__.H$L.       =   0001 L
    _Vec_Music_1       **** GX  |   2 _game_header       0000 GR

ASxxxx Assembler V05.50  (Motorola 6809)                                Page 2
Hexadecimal [16-Bits]                                 Thu Jul 31 17:19:46 2025

Area Table

[_CSEG]
   0 _CODE            size    0   flags C080
   2 .cartridge       size   1F   flags  100
[_DSEG]
   1 _DATA            size    0   flags C0C0

