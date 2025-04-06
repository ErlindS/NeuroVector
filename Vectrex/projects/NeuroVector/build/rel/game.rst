                              1 ;;; gcc for m6809 : Mar 17 2019 13:25:32
                              2 ;;; 4.3.6 (gcc6809)
                              3 ;;; ABI version 1
                              4 ;;; -mabi=bx -mint8 -fomit-frame-pointer -O0
                              5 	.module	game.c
                              6 	.globl	_current_game
                              7 	.area	.data
   C880                       8 _current_game:
   C880 00 00 00 00 00 00     9 	.word	0,0,0,0
        00 00
   C888 00                   10 	.byte	0
                             11 	.area	.text
                             12 	.globl	_game_init
   005E                      13 _game_init:
   005E C6 01         [ 2]   14 	ldb	#1
   0060 F7 C8 1F      [ 5]   15 	stb	_Vec_Joy_Mux_1_X
   0063 C6 03         [ 2]   16 	ldb	#3
   0065 F7 C8 20      [ 5]   17 	stb	_Vec_Joy_Mux_1_Y
   0068 7F C8 21      [ 7]   18 	clr	_Vec_Joy_Mux_2_X
   006B 7F C8 22      [ 7]   19 	clr	_Vec_Joy_Mux_2_Y
   006E C6 03         [ 2]   20 	ldb	#3
   0070 F7 C8 82      [ 5]   21 	stb	_current_game+2
   0073 C6 01         [ 2]   22 	ldb	#1
   0075 F7 C8 84      [ 5]   23 	stb	_current_game+4
   0078 7F C8 86      [ 7]   24 	clr	_current_game+6
   007B 7F C8 87      [ 7]   25 	clr	_current_game+7
   007E F6 C8 80      [ 5]   26 	ldb	_current_game
   0081 C1 02         [ 2]   27 	cmpb	#2	;cmpqi:
   0083 26 0C         [ 3]   28 	bne	L2
   0085 C6 03         [ 2]   29 	ldb	#3
   0087 F7 C8 83      [ 5]   30 	stb	_current_game+3
   008A C6 01         [ 2]   31 	ldb	#1
   008C F7 C8 85      [ 5]   32 	stb	_current_game+5
   008F 20 06         [ 3]   33 	bra	L3
   0091                      34 L2:
   0091 7F C8 83      [ 7]   35 	clr	_current_game+3
   0094 7F C8 85      [ 7]   36 	clr	_current_game+5
   0097                      37 L3:
   0097 7F C8 88      [ 7]   38 	clr	_current_game+8
   009A 39            [ 5]   39 	rts
                             40 	.globl	_game_play
   009B                      41 _game_play:
   009B BD 01 94      [ 8]   42 	jsr	_level_init
   009E BD 02 0F      [ 8]   43 	jsr	_level_play
   00A1 39            [ 5]   44 	rts
   00A2                      45 LC0:
   00A2 47 41 4D 45 20 4F    46 	.byte	71,65,77,69,32,79,86,69
        56 45
   00AA 52 80 00             47 	.byte	82,-128,0
   00AD                      48 LC1:
   00AD 50 4C 41 59 45 52    49 	.byte	80,76,65,89,69,82,-128,0
        80 00
                             50 	.globl	_game_over
   00B5                      51 _game_over:
   00B5 34 20         [ 6]   52 	pshs	y
   00B7 32 72         [ 5]   53 	leas	-14,s
   00B9 30 E4         [ 4]   54 	leax	,s
   00BB BD F8 4F      [ 8]   55 	jsr	___Clear_Score
   00BE F6 C8 88      [ 5]   56 	ldb	_current_game+8
   00C1 4F            [ 2]   57 	clra		;zero_extendqihi: R:b -> R:d
   00C2 1F 01         [ 6]   58 	tfr	d,x
   00C4 E6 89 C8 86   [ 8]   59 	ldb	_current_game+6,x
   00C8 E7 68         [ 5]   60 	stb	8,s
   00CA 30 E4         [ 4]   61 	leax	,s
   00CC E6 68         [ 5]   62 	ldb	8,s
   00CE BD 03 65      [ 8]   63 	jsr	__Add_Score_a
   00D1 31 E4         [ 4]   64 	leay	,s
   00D3 8E CB EB      [ 3]   65 	ldx	#_Vec_High_Score
   00D6 34 10         [ 6]   66 	pshs	x
   00D8 30 A4         [ 4]   67 	leax	,y
   00DA BD 03 6E      [ 8]   68 	jsr	__New_High_Score
   00DD 32 62         [ 5]   69 	leas	2,s
   00DF C6 96         [ 2]   70 	ldb	#-106
   00E1 E7 67         [ 5]   71 	stb	7,s
   00E3                      72 L9:
   00E3 BD F1 AF      [ 8]   73 	jsr	___DP_to_C8
   00E6 BE C8 CB      [ 6]   74 	ldx	_current_explosion
   00E9 AF 69         [ 6]   75 	stx	9,s
   00EB AE 69         [ 6]   76 	ldx	9,s
   00ED BD 03 35      [ 8]   77 	jsr	__Explosion_Snd
   00F0 BE C8 CD      [ 6]   78 	ldx	_current_music
   00F3 AF 6B         [ 6]   79 	stx	11,s
   00F5 AE 6B         [ 6]   80 	ldx	11,s
   00F7 BD 03 3E      [ 8]   81 	jsr	__Init_Music_chk
   00FA BD F1 92      [ 8]   82 	jsr	___Wait_Recal
   00FD BD 03 58      [ 8]   83 	jsr	__Do_Sound
   0100 BD F2 A5      [ 8]   84 	jsr	___Intensity_5F
   0103 C6 C0         [ 2]   85 	ldb	#-64
   0105 E7 E2         [ 6]   86 	stb	,-s
   0107 8E 00 A2      [ 3]   87 	ldx	#LC0
   010A 5F            [ 2]   88 	clrb
   010B BD 03 0B      [ 8]   89 	jsr	_print_string
   010E 32 61         [ 5]   90 	leas	1,s
   0110 C6 9C         [ 2]   91 	ldb	#-100
   0112 E7 E2         [ 6]   92 	stb	,-s
   0114 8E 00 AD      [ 3]   93 	ldx	#LC1
   0117 C6 14         [ 2]   94 	ldb	#20
   0119 BD 03 0B      [ 8]   95 	jsr	_print_string
   011C 32 61         [ 5]   96 	leas	1,s
   011E F6 C8 88      [ 5]   97 	ldb	_current_game+8
   0121 5C            [ 2]   98 	incb
   0122 34 04         [ 6]   99 	pshs	b
   0124 C6 28         [ 2]  100 	ldb	#40
   0126 E7 E2         [ 6]  101 	stb	,-s
   0128 C6 14         [ 2]  102 	ldb	#20
   012A BD 03 8B      [ 8]  103 	jsr	_print_unsigned_int
   012D 32 62         [ 5]  104 	leas	2,s
   012F F6 C8 88      [ 5]  105 	ldb	_current_game+8
   0132 4F            [ 2]  106 	clra		;zero_extendqihi: R:b -> R:d
   0133 1F 01         [ 6]  107 	tfr	d,x
   0135 E6 89 C8 82   [ 8]  108 	ldb	_current_game+2,x
   0139 E7 6D         [ 5]  109 	stb	13,s
   013B C6 69         [ 2]  110 	ldb	#105
   013D E7 E2         [ 6]  111 	stb	,-s
   013F 8E C0 E2      [ 3]  112 	ldx	#-16158
   0142 E6 6E         [ 5]  113 	ldb	14,s
   0144 BD 03 82      [ 8]  114 	jsr	__Print_Ships
   0147 32 61         [ 5]  115 	leas	1,s
   0149 BD F1 BA      [ 8]  116 	jsr	___Read_Btns
   014C 6A 67         [ 7]  117 	dec	7,s
   014E 6D 67         [ 7]  118 	tst	7,s
   0150 27 0A         [ 3]  119 	beq	L10
   0152 F6 C8 11      [ 5]  120 	ldb	_Vec_Buttons
   0155 C4 08         [ 2]  121 	andb	#8
   0157 5D            [ 2]  122 	tstb
   0158 10 27 FF 87   [ 6]  123 	lbeq	L9
   015C                     124 L10:
   015C 32 6E         [ 5]  125 	leas	14,s
   015E 35 A0         [ 7]  126 	puls	y,pc
                            127 	.globl	_game
   0160                     128 _game:
   0160 32 7F         [ 5]  129 	leas	-1,s
   0162 C6 01         [ 2]  130 	ldb	#1
   0164 E7 E2         [ 6]  131 	stb	,-s
   0166 C6 03         [ 2]  132 	ldb	#3
   0168 BD 03 E7      [ 8]  133 	jsr	__Select_Game
   016B 32 61         [ 5]  134 	leas	1,s
   016D F6 C8 79      [ 5]  135 	ldb	_Vec_Num_Players
   0170 F7 C8 80      [ 5]  136 	stb	_current_game
   0173 F6 C8 7A      [ 5]  137 	ldb	_Vec_Num_Game
   0176 F7 C8 81      [ 5]  138 	stb	_current_game+1
   0179 F6 C8 0F      [ 5]  139 	ldb	_Vec_Btn_State
   017C C4 08         [ 2]  140 	andb	#8
   017E 5D            [ 2]  141 	tstb
   017F 27 0A         [ 3]  142 	beq	L12
   0181 BD 00 5E      [ 8]  143 	jsr	_game_init
   0184 BD 00 9B      [ 8]  144 	jsr	_game_play
   0187 6F E4         [ 6]  145 	clr	,s
   0189 20 04         [ 3]  146 	bra	L13
   018B                     147 L12:
   018B C6 FF         [ 2]  148 	ldb	#-1
   018D E7 E4         [ 4]  149 	stb	,s
   018F                     150 L13:
   018F E6 E4         [ 4]  151 	ldb	,s
   0191 32 61         [ 5]  152 	leas	1,s
   0193 39            [ 5]  153 	rts
ASxxxx Assembler V05.50  (Motorola 6809)                                Page 1
Hexadecimal [16-Bits]                                 Sun Apr  6 21:29:21 2025

Symbol Table

    .__.$$$.       =   2710 L   |     .__.ABS.       =   0000 G
    .__.CPU.       =   0000 L   |     .__.H$L.       =   0001 L
  3 L10                00FE R   |   3 L12                012D R
  3 L13                0131 R   |   3 L2                 0033 R
  3 L3                 0039 R   |   3 L9                 0085 R
  3 LC0                0044 R   |   3 LC1                004F R
    _Vec_Btn_State     **** GX  |     _Vec_Buttons       **** GX
    _Vec_High_Scor     **** GX  |     _Vec_Joy_Mux_1     **** GX
    _Vec_Joy_Mux_1     **** GX  |     _Vec_Joy_Mux_2     **** GX
    _Vec_Joy_Mux_2     **** GX  |     _Vec_Num_Game      **** GX
    _Vec_Num_Playe     **** GX  |     __Add_Score_a      **** GX
    __Do_Sound         **** GX  |     __Explosion_Sn     **** GX
    __Init_Music_c     **** GX  |     __New_High_Sco     **** GX
    __Print_Ships      **** GX  |     __Select_Game      **** GX
    ___Clear_Score     **** GX  |     ___DP_to_C8        **** GX
    ___Intensity_5     **** GX  |     ___Read_Btns       **** GX
    ___Wait_Recal      **** GX  |     _current_explo     **** GX
  2 _current_game      0000 GR  |     _current_music     **** GX
  3 _game              0102 GR  |   3 _game_init         0000 GR
  3 _game_over         0057 GR  |   3 _game_play         003D GR
    _level_init        **** GX  |     _level_play        **** GX
    _print_string      **** GX  |     _print_unsigne     **** GX

ASxxxx Assembler V05.50  (Motorola 6809)                                Page 2
Hexadecimal [16-Bits]                                 Sun Apr  6 21:29:21 2025

Area Table

[_CSEG]
   0 _CODE            size    0   flags C080
   2 .data            size    9   flags  100
   3 .text            size  136   flags  100
[_DSEG]
   1 _DATA            size    0   flags C0C0

