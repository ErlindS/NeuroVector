                              1 ;;; gcc for m6809 : Mar 17 2019 13:25:32
                              2 ;;; 4.3.6 (gcc6809)
                              3 ;;; ABI version 1
                              4 ;;; -mabi=bx -mint8 -fomit-frame-pointer -O0
                              5 	.module	vec_rom_0xed_0.c
                              6 ;----- asm -----
                              7 	.bank page_ed (BASE=0xed77,SIZE=0x0100)
                              8 	.area .dped (OVR,BANK=page_ed)
                              9 	
                             10 ;--- end asm ---
                             11 	.globl	_Vec_Music_0
                             12 	.area	.dped
   ED77                      13 _Vec_Music_0:
   ED77 00 00 00 00 00 00    14 	.word	0,0,0,0,0,0,0,0,0,0,0,0
        00 00 00 00 00 00
        00 00 00 00 00 00
        00 00 00 00 00 00
                             15 	.globl	_Vec_ADSR_FADE66
   ED8F                      16 _Vec_ADSR_FADE66:
   ED8F 00                   17 	.byte	0
ASxxxx Assembler V05.31  (Motorola 6809)                                Page 1
Hexadecimal [16-Bits]                                 Fri Sep 16 13:25:44 2022

Symbol Table

    .__.$$$.       =   2710 L   |     .__.ABS.       =   0000 G
    .__.CPU.       =   0000 L   |     .__.H$L.       =   0001 L
  2 _Vec_ADSR_FADE     0018 GR  |   2 _Vec_Music_0       0000 GR

ASxxxx Assembler V05.31  (Motorola 6809)                                Page 2
Hexadecimal [16-Bits]                                 Fri Sep 16 13:25:44 2022

Area Table

[_CSEG]
   0 _CODE            size    0   flags C080
[_DSEG]
   1 _DATA            size    0   flags C0C0
[page_ed]
   2 .dped            size   19   flags 8584

