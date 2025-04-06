                              1 ;;; gcc for m6809 : Mar 17 2019 13:25:32
                              2 ;;; 4.3.6 (gcc6809)
                              3 ;;; ABI version 1
                              4 ;;; -mabi=bx -mint8 -fomit-frame-pointer -O0
                              5 	.module	level.c
                              6 	.globl	_current_level
                              7 	.area	.data
   C8A7                       8 _current_level:
   C8A7 01                    9 	.byte	1
   C8A8 00                   10 	.byte	0
   C8A9 00                   11 	.byte	0
                             12 	.area	.text
   0525                      13 LC0:
   0525 4C 45 56 45 4C 80    14 	.byte	76,69,86,69,76,-128,0
        00
   052C                      15 LC1:
   052C 50 4C 41 59 45 52    16 	.byte	80,76,65,89,69,82,-128,0
        80 00
                             17 	.globl	_level_init
   0534                      18 _level_init:
   0534 32 7A         [ 5]   19 	leas	-6,s
   0536 BD 02 B4      [ 8]   20 	jsr	_init_friends
   0539 BD 01 3F      [ 8]   21 	jsr	_init_enemies
   053C BD 06 FE      [ 8]   22 	jsr	_init_player
   053F C6 64         [ 2]   23 	ldb	#100
   0541 E7 E4         [ 4]   24 	stb	,s
   0543                      25 L3:
   0543 BD F1 AF      [ 8]   26 	jsr	___DP_to_C8
   0546 BE C8 AD      [ 6]   27 	ldx	_current_explosion
   0549 AF 61         [ 6]   28 	stx	1,s
   054B AE 61         [ 6]   29 	ldx	1,s
   054D BD 07 C6      [ 8]   30 	jsr	__Explosion_Snd
   0550 BE C8 AF      [ 6]   31 	ldx	_current_music
   0553 AF 63         [ 6]   32 	stx	3,s
   0555 AE 63         [ 6]   33 	ldx	3,s
   0557 BD 07 CF      [ 8]   34 	jsr	__Init_Music_chk
   055A BD F1 92      [ 8]   35 	jsr	___Wait_Recal
   055D BD 08 03      [ 8]   36 	jsr	__Do_Sound
   0560 BD F1 BA      [ 8]   37 	jsr	___Read_Btns
   0563 BD F2 A5      [ 8]   38 	jsr	___Intensity_5F
   0566 C6 9C         [ 2]   39 	ldb	#-100
   0568 E7 E2         [ 6]   40 	stb	,-s
   056A 8E 05 25      [ 3]   41 	ldx	#LC0
   056D C6 3C         [ 2]   42 	ldb	#60
   056F BD 07 9C      [ 8]   43 	jsr	_print_string
   0572 32 61         [ 5]   44 	leas	1,s
   0574 F6 C8 A6      [ 5]   45 	ldb	_current_game+8
   0577 4F            [ 2]   46 	clra		;zero_extendqihi: R:b -> R:d
   0578 1F 01         [ 6]   47 	tfr	d,x
   057A E6 89 C8 A2   [ 8]   48 	ldb	_current_game+4,x
   057E 34 04         [ 6]   49 	pshs	b
   0580 C6 28         [ 2]   50 	ldb	#40
   0582 E7 E2         [ 6]   51 	stb	,-s
   0584 C6 3C         [ 2]   52 	ldb	#60
   0586 BD 08 53      [ 8]   53 	jsr	_print_unsigned_int
   0589 32 62         [ 5]   54 	leas	2,s
   058B C6 9C         [ 2]   55 	ldb	#-100
   058D E7 E2         [ 6]   56 	stb	,-s
   058F 8E 05 2C      [ 3]   57 	ldx	#LC1
   0592 C6 14         [ 2]   58 	ldb	#20
   0594 BD 07 9C      [ 8]   59 	jsr	_print_string
   0597 32 61         [ 5]   60 	leas	1,s
   0599 F6 C8 A6      [ 5]   61 	ldb	_current_game+8
   059C 5C            [ 2]   62 	incb
   059D 34 04         [ 6]   63 	pshs	b
   059F C6 28         [ 2]   64 	ldb	#40
   05A1 E7 E2         [ 6]   65 	stb	,-s
   05A3 C6 14         [ 2]   66 	ldb	#20
   05A5 BD 08 53      [ 8]   67 	jsr	_print_unsigned_int
   05A8 32 62         [ 5]   68 	leas	2,s
   05AA F6 C8 A6      [ 5]   69 	ldb	_current_game+8
   05AD 4F            [ 2]   70 	clra		;zero_extendqihi: R:b -> R:d
   05AE 1F 01         [ 6]   71 	tfr	d,x
   05B0 E6 89 C8 A0   [ 8]   72 	ldb	_current_game+2,x
   05B4 E7 65         [ 5]   73 	stb	5,s
   05B6 C6 69         [ 2]   74 	ldb	#105
   05B8 E7 E2         [ 6]   75 	stb	,-s
   05BA 8E C0 E2      [ 3]   76 	ldx	#-16158
   05BD E6 66         [ 5]   77 	ldb	6,s
   05BF BD 08 4A      [ 8]   78 	jsr	__Print_Ships
   05C2 32 61         [ 5]   79 	leas	1,s
   05C4 6A E4         [ 6]   80 	dec	,s
   05C6 6D E4         [ 6]   81 	tst	,s
   05C8 27 0A         [ 3]   82 	beq	L2
   05CA F6 C8 11      [ 5]   83 	ldb	_Vec_Buttons
   05CD C4 08         [ 2]   84 	andb	#8
   05CF 5D            [ 2]   85 	tstb
   05D0 10 27 FF 6F   [ 6]   86 	lbeq	L3
   05D4                      87 L2:
   05D4 7F C8 A7      [ 7]   88 	clr	_current_level
   05D7 C6 04         [ 2]   89 	ldb	#4
   05D9 F7 C8 A8      [ 5]   90 	stb	_current_level+1
   05DC 7F C8 A9      [ 7]   91 	clr	_current_level+2
   05DF 32 66         [ 5]   92 	leas	6,s
   05E1 39            [ 5]   93 	rts
                             94 	.globl	_level_play
   05E2                      95 _level_play:
   05E2 32 7B         [ 5]   96 	leas	-5,s
   05E4 20 5D         [ 3]   97 	bra	L6
   05E6                      98 L7:
   05E6 BD F1 AF      [ 8]   99 	jsr	___DP_to_C8
   05E9 BE C8 AD      [ 6]  100 	ldx	_current_explosion
   05EC AF 61         [ 6]  101 	stx	1,s
   05EE AE 61         [ 6]  102 	ldx	1,s
   05F0 BD 07 C6      [ 8]  103 	jsr	__Explosion_Snd
   05F3 BE C8 AF      [ 6]  104 	ldx	_current_music
   05F6 AF 63         [ 6]  105 	stx	3,s
   05F8 AE 63         [ 6]  106 	ldx	3,s
   05FA BD 07 CF      [ 8]  107 	jsr	__Init_Music_chk
   05FD BD F1 92      [ 8]  108 	jsr	___Wait_Recal
   0600 BD 08 03      [ 8]  109 	jsr	__Do_Sound
   0603 BD F2 A5      [ 8]  110 	jsr	___Intensity_5F
   0606 F6 C8 A6      [ 5]  111 	ldb	_current_game+8
   0609 4F            [ 2]  112 	clra		;zero_extendqihi: R:b -> R:d
   060A 1F 01         [ 6]  113 	tfr	d,x
   060C E6 89 C8 A4   [ 8]  114 	ldb	_current_game+6,x
   0610 34 04         [ 6]  115 	pshs	b
   0612 C6 9C         [ 2]  116 	ldb	#-100
   0614 E7 E2         [ 6]  117 	stb	,-s
   0616 C6 78         [ 2]  118 	ldb	#120
   0618 BD 08 53      [ 8]  119 	jsr	_print_unsigned_int
   061B 32 62         [ 5]  120 	leas	2,s
   061D BD 02 E1      [ 8]  121 	jsr	_handle_friends
   0620 BD 01 6C      [ 8]  122 	jsr	_handle_enemies
   0623 BD 07 7E      [ 8]  123 	jsr	_handle_player
   0626 F6 C8 A9      [ 5]  124 	ldb	_current_level+2
   0629 5C            [ 2]  125 	incb
   062A F7 C8 A9      [ 5]  126 	stb	_current_level+2
   062D F6 C8 A9      [ 5]  127 	ldb	_current_level+2
   0630 E7 E4         [ 4]  128 	stb	,s
   0632 F6 C8 A6      [ 5]  129 	ldb	_current_game+8
   0635 4F            [ 2]  130 	clra		;zero_extendqihi: R:b -> R:d
   0636 1F 01         [ 6]  131 	tfr	d,x
   0638 E6 89 C8 A2   [ 8]  132 	ldb	_current_game+4,x
   063C E1 E4         [ 4]  133 	cmpb	,s	;cmpqi:(R)
   063E 26 03         [ 3]  134 	bne	L6
   0640 7F C8 A9      [ 7]  135 	clr	_current_level+2
   0643                     136 L6:
   0643 F6 C8 A7      [ 5]  137 	ldb	_current_level
   0646 5D            [ 2]  138 	tstb
   0647 27 9D         [ 3]  139 	beq	L7
   0649 32 65         [ 5]  140 	leas	5,s
   064B 39            [ 5]  141 	rts
ASxxxx Assembler V05.50  (Motorola 6809)                                Page 1
Hexadecimal [16-Bits]                                 Sun Apr  6 13:16:31 2025

Symbol Table

    .__.$$$.       =   2710 L   |     .__.ABS.       =   0000 G
    .__.CPU.       =   0000 L   |     .__.H$L.       =   0001 L
  3 L2                 00AF R   |   3 L3                 001E R
  3 L6                 011E R   |   3 L7                 00C1 R
  3 LC0                0000 R   |   3 LC1                0007 R
    _Vec_Buttons       **** GX  |     __Do_Sound         **** GX
    __Explosion_Sn     **** GX  |     __Init_Music_c     **** GX
    __Print_Ships      **** GX  |     ___DP_to_C8        **** GX
    ___Intensity_5     **** GX  |     ___Read_Btns       **** GX
    ___Wait_Recal      **** GX  |     _current_explo     **** GX
    _current_game      **** GX  |   2 _current_level     0000 GR
    _current_music     **** GX  |     _handle_enemie     **** GX
    _handle_friend     **** GX  |     _handle_player     **** GX
    _init_enemies      **** GX  |     _init_friends      **** GX
    _init_player       **** GX  |   3 _level_init        000F GR
  3 _level_play        00BD GR  |     _print_string      **** GX
    _print_unsigne     **** GX

ASxxxx Assembler V05.50  (Motorola 6809)                                Page 2
Hexadecimal [16-Bits]                                 Sun Apr  6 13:16:31 2025

Area Table

[_CSEG]
   0 _CODE            size    0   flags C080
   2 .data            size    3   flags  100
   3 .text            size  127   flags  100
[_DSEG]
   1 _DATA            size    0   flags C0C0

