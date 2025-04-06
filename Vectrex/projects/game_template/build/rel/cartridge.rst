                              1 ;;; gcc for m6809 : Mar 17 2019 13:25:32
                              2 ;;; 4.3.6 (gcc6809)
                              3 ;;; ABI version 1
                              4 ;;; -mabi=bx -mint8 -fomit-frame-pointer -O0
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
   0010 AA                   15 	.byte	-86
   0011 45 72 6C 69 6E 64    16 	.byte	69,114,108,105,110,100,32,83
        20 53
   0019 65 6A 64 69 75 80    17 	.byte	101,106,100,105,117,-128,0
        00
ASxxxx Assembler V05.50  (Motorola 6809)                                Page 1
Hexadecimal [16-Bits]                                 Sat Apr  5 01:51:59 2025

Symbol Table

    .__.$$$.       =   2710 L   |     .__.ABS.       =   0000 G
    .__.CPU.       =   0000 L   |     .__.H$L.       =   0001 L
    _Vec_Music_1       **** GX  |   2 _game_header       0000 GR

ASxxxx Assembler V05.50  (Motorola 6809)                                Page 2
Hexadecimal [16-Bits]                                 Sat Apr  5 01:51:59 2025

Area Table

[_CSEG]
   0 _CODE            size    0   flags C080
   2 .cartridge       size   20   flags  100
[_DSEG]
   1 _DATA            size    0   flags C0C0

