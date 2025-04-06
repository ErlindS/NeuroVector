                              1 ;;; gcc for m6809 : Mar 17 2019 13:25:32
                              2 ;;; 4.3.6 (gcc6809)
                              3 ;;; ABI version 1
                              4 ;;; -mabi=bx -mint8 -fomit-frame-pointer -O0
                              5 	.module	level.c
                              6 	.globl	_current_level
                              7 	.area	.data
   C889                       8 _current_level:
   C889 01                    9 	.byte	1
                             10 	.area	.text
                             11 	.globl	_level_init
   0216                      12 _level_init:
   0216 7F C8 89      [ 7]   13 	clr	_current_level
   0219 39            [ 5]   14 	rts
                             15 	.globl	_level_play
   021A                      16 _level_play:
   021A 32 7C         [ 5]   17 	leas	-4,s
   021C 20 20         [ 3]   18 	bra	L4
   021E                      19 L5:
   021E BD F1 AF      [ 8]   20 	jsr	___DP_to_C8
   0221 BE C8 8A      [ 6]   21 	ldx	_current_explosion
   0224 AF E4         [ 5]   22 	stx	,s
   0226 AE E4         [ 5]   23 	ldx	,s
   0228 BD 02 81      [ 8]   24 	jsr	__Explosion_Snd
   022B BE C8 8C      [ 6]   25 	ldx	_current_music
   022E AF 62         [ 6]   26 	stx	2,s
   0230 AE 62         [ 6]   27 	ldx	2,s
   0232 BD 02 8A      [ 8]   28 	jsr	__Init_Music_chk
   0235 BD F1 92      [ 8]   29 	jsr	___Wait_Recal
   0238 BD 02 93      [ 8]   30 	jsr	__Do_Sound
   023B BD F2 A5      [ 8]   31 	jsr	___Intensity_5F
   023E                      32 L4:
   023E F6 C8 89      [ 5]   33 	ldb	_current_level
   0241 5D            [ 2]   34 	tstb
   0242 27 DA         [ 3]   35 	beq	L5
   0244 32 64         [ 5]   36 	leas	4,s
   0246 39            [ 5]   37 	rts
ASxxxx Assembler V05.50  (Motorola 6809)                                Page 1
Hexadecimal [16-Bits]                                 Sat Apr  5 01:51:59 2025

Symbol Table

    .__.$$$.       =   2710 L   |     .__.ABS.       =   0000 G
    .__.CPU.       =   0000 L   |     .__.H$L.       =   0001 L
  3 L4                 0028 R   |   3 L5                 0008 R
    __Do_Sound         **** GX  |     __Explosion_Sn     **** GX
    __Init_Music_c     **** GX  |     ___DP_to_C8        **** GX
    ___Intensity_5     **** GX  |     ___Wait_Recal      **** GX
    _current_explo     **** GX  |   2 _current_level     0000 GR
    _current_music     **** GX  |   3 _level_init        0000 GR
  3 _level_play        0004 GR

ASxxxx Assembler V05.50  (Motorola 6809)                                Page 2
Hexadecimal [16-Bits]                                 Sat Apr  5 01:51:59 2025

Area Table

[_CSEG]
   0 _CODE            size    0   flags C080
   2 .data            size    1   flags  100
   3 .text            size   31   flags  100
[_DSEG]
   1 _DATA            size    0   flags C0C0

