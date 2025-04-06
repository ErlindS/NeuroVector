                              1 ;;; gcc for m6809 : Mar 17 2019 13:25:32
                              2 ;;; 4.3.6 (gcc6809)
                              3 ;;; ABI version 1
                              4 ;;; -mabi=bx -mint8 -fomit-frame-pointer -O0
                              5 	.module	game.c
                              6 	.globl	_current_game
                              7 	.area	.data
   C89E                       8 _current_game:
   C89E 00 00 00 00 00 00     9 	.word	0,0,0,0
        00 00
   C8A6 00                   10 	.byte	0
                             11 	.area	.text
                             12 	.globl	_game_init
   036C                      13 _game_init:
   036C C6 01         [ 2]   14 	ldb	#1
   036E F7 C8 1F      [ 5]   15 	stb	_Vec_Joy_Mux_1_X
   0371 C6 03         [ 2]   16 	ldb	#3
   0373 F7 C8 20      [ 5]   17 	stb	_Vec_Joy_Mux_1_Y
   0376 7F C8 21      [ 7]   18 	clr	_Vec_Joy_Mux_2_X
   0379 7F C8 22      [ 7]   19 	clr	_Vec_Joy_Mux_2_Y
   037C C6 03         [ 2]   20 	ldb	#3
   037E F7 C8 A0      [ 5]   21 	stb	_current_game+2
   0381 F6 C8 9F      [ 5]   22 	ldb	_current_game+1
   0384 F7 C8 A2      [ 5]   23 	stb	_current_game+4
   0387 7F C8 A4      [ 7]   24 	clr	_current_game+6
   038A 7F C8 A5      [ 7]   25 	clr	_current_game+7
   038D F6 C8 9E      [ 5]   26 	ldb	_current_game
   0390 C1 02         [ 2]   27 	cmpb	#2	;cmpqi:
   0392 26 0D         [ 3]   28 	bne	L2
   0394 C6 03         [ 2]   29 	ldb	#3
   0396 F7 C8 A1      [ 5]   30 	stb	_current_game+3
   0399 F6 C8 9F      [ 5]   31 	ldb	_current_game+1
   039C F7 C8 A3      [ 5]   32 	stb	_current_game+5
   039F 20 06         [ 3]   33 	bra	L3
   03A1                      34 L2:
   03A1 7F C8 A1      [ 7]   35 	clr	_current_game+3
   03A4 7F C8 A3      [ 7]   36 	clr	_current_game+5
   03A7                      37 L3:
   03A7 7F C8 A6      [ 7]   38 	clr	_current_game+8
   03AA 39            [ 5]   39 	rts
                             40 	.globl	_game_play
   03AB                      41 _game_play:
   03AB 32 7B         [ 5]   42 	leas	-5,s
   03AD 16 00 6D      [ 5]   43 	lbra	L6
   03B0                      44 L9:
   03B0 BD 05 34      [ 8]   45 	jsr	_level_init
   03B3 BD 05 E2      [ 8]   46 	jsr	_level_play
   03B6 F6 C8 A7      [ 5]   47 	ldb	_current_level
   03B9 C1 02         [ 2]   48 	cmpb	#2	;cmpqi:
   03BB 26 22         [ 3]   49 	bne	L7
   03BD F6 C8 A6      [ 5]   50 	ldb	_current_game+8
   03C0 E7 61         [ 5]   51 	stb	1,s
   03C2 E6 61         [ 5]   52 	ldb	1,s
   03C4 4F            [ 2]   53 	clra		;zero_extendqihi: R:b -> R:d
   03C5 1F 01         [ 6]   54 	tfr	d,x
   03C7 E6 89 C8 A2   [ 8]   55 	ldb	_current_game+4,x
   03CB E7 E4         [ 4]   56 	stb	,s
   03CD E6 E4         [ 4]   57 	ldb	,s
   03CF 5C            [ 2]   58 	incb
   03D0 E7 E4         [ 4]   59 	stb	,s
   03D2 E6 61         [ 5]   60 	ldb	1,s
   03D4 4F            [ 2]   61 	clra		;zero_extendqihi: R:b -> R:d
   03D5 1F 01         [ 6]   62 	tfr	d,x
   03D7 E6 E4         [ 4]   63 	ldb	,s
   03D9 E7 89 C8 A2   [ 8]   64 	stb	_current_game+4,x
   03DD 20 3E         [ 3]   65 	bra	L6
   03DF                      66 L7:
   03DF F6 C8 A6      [ 5]   67 	ldb	_current_game+8
   03E2 E7 62         [ 5]   68 	stb	2,s
   03E4 E6 62         [ 5]   69 	ldb	2,s
   03E6 4F            [ 2]   70 	clra		;zero_extendqihi: R:b -> R:d
   03E7 1F 01         [ 6]   71 	tfr	d,x
   03E9 E6 89 C8 A0   [ 8]   72 	ldb	_current_game+2,x
   03ED E7 E4         [ 4]   73 	stb	,s
   03EF E6 E4         [ 4]   74 	ldb	,s
   03F1 5A            [ 2]   75 	decb
   03F2 E7 E4         [ 4]   76 	stb	,s
   03F4 E6 62         [ 5]   77 	ldb	2,s
   03F6 4F            [ 2]   78 	clra		;zero_extendqihi: R:b -> R:d
   03F7 1F 01         [ 6]   79 	tfr	d,x
   03F9 E6 E4         [ 4]   80 	ldb	,s
   03FB E7 89 C8 A0   [ 8]   81 	stb	_current_game+2,x
   03FF E6 62         [ 5]   82 	ldb	2,s
   0401 4F            [ 2]   83 	clra		;zero_extendqihi: R:b -> R:d
   0402 1F 01         [ 6]   84 	tfr	d,x
   0404 E6 89 C8 A0   [ 8]   85 	ldb	_current_game+2,x
   0408 5D            [ 2]   86 	tstb
   0409 26 03         [ 3]   87 	bne	L8
   040B BD 04 46      [ 8]   88 	jsr	_game_over
   040E                      89 L8:
   040E F6 C8 9E      [ 5]   90 	ldb	_current_game
   0411 E7 63         [ 5]   91 	stb	3,s
   0413 F6 C8 A6      [ 5]   92 	ldb	_current_game+8
   0416 E0 63         [ 5]   93 	subb	3,s
   0418 50            [ 2]   94 	negb
   0419 5A            [ 2]   95 	decb
   041A F7 C8 A6      [ 5]   96 	stb	_current_game+8
   041D                      97 L6:
   041D F6 C8 A0      [ 5]   98 	ldb	_current_game+2
   0420 E7 E4         [ 4]   99 	stb	,s
   0422 F6 C8 A1      [ 5]  100 	ldb	_current_game+3
   0425 E7 64         [ 5]  101 	stb	4,s
   0427 E6 E4         [ 4]  102 	ldb	,s
   0429 EB 64         [ 5]  103 	addb	4,s
   042B 5D            [ 2]  104 	tstb
   042C 10 26 FF 80   [ 6]  105 	lbne	L9
   0430 32 65         [ 5]  106 	leas	5,s
   0432 39            [ 5]  107 	rts
   0433                     108 LC0:
   0433 47 41 4D 45 20 4F   109 	.byte	71,65,77,69,32,79,86,69
        56 45
   043B 52 80 00            110 	.byte	82,-128,0
   043E                     111 LC1:
   043E 50 4C 41 59 45 52   112 	.byte	80,76,65,89,69,82,-128,0
        80 00
                            113 	.globl	_game_over
   0446                     114 _game_over:
   0446 34 20         [ 6]  115 	pshs	y
   0448 32 72         [ 5]  116 	leas	-14,s
   044A 30 E4         [ 4]  117 	leax	,s
   044C BD F8 4F      [ 8]  118 	jsr	___Clear_Score
   044F F6 C8 A6      [ 5]  119 	ldb	_current_game+8
   0452 4F            [ 2]  120 	clra		;zero_extendqihi: R:b -> R:d
   0453 1F 01         [ 6]  121 	tfr	d,x
   0455 E6 89 C8 A4   [ 8]  122 	ldb	_current_game+6,x
   0459 E7 68         [ 5]  123 	stb	8,s
   045B 30 E4         [ 4]  124 	leax	,s
   045D E6 68         [ 5]  125 	ldb	8,s
   045F BD 08 10      [ 8]  126 	jsr	__Add_Score_a
   0462 31 E4         [ 4]  127 	leay	,s
   0464 8E CB EB      [ 3]  128 	ldx	#_Vec_High_Score
   0467 34 10         [ 6]  129 	pshs	x
   0469 30 A4         [ 4]  130 	leax	,y
   046B BD 08 19      [ 8]  131 	jsr	__New_High_Score
   046E 32 62         [ 5]  132 	leas	2,s
   0470 C6 96         [ 2]  133 	ldb	#-106
   0472 E7 67         [ 5]  134 	stb	7,s
   0474                     135 L13:
   0474 BD F1 AF      [ 8]  136 	jsr	___DP_to_C8
   0477 BE C8 AD      [ 6]  137 	ldx	_current_explosion
   047A AF 69         [ 6]  138 	stx	9,s
   047C AE 69         [ 6]  139 	ldx	9,s
   047E BD 07 C6      [ 8]  140 	jsr	__Explosion_Snd
   0481 BE C8 AF      [ 6]  141 	ldx	_current_music
   0484 AF 6B         [ 6]  142 	stx	11,s
   0486 AE 6B         [ 6]  143 	ldx	11,s
   0488 BD 07 CF      [ 8]  144 	jsr	__Init_Music_chk
   048B BD F1 92      [ 8]  145 	jsr	___Wait_Recal
   048E BD 08 03      [ 8]  146 	jsr	__Do_Sound
   0491 BD F2 A5      [ 8]  147 	jsr	___Intensity_5F
   0494 C6 C0         [ 2]  148 	ldb	#-64
   0496 E7 E2         [ 6]  149 	stb	,-s
   0498 8E 04 33      [ 3]  150 	ldx	#LC0
   049B 5F            [ 2]  151 	clrb
   049C BD 07 9C      [ 8]  152 	jsr	_print_string
   049F 32 61         [ 5]  153 	leas	1,s
   04A1 C6 9C         [ 2]  154 	ldb	#-100
   04A3 E7 E2         [ 6]  155 	stb	,-s
   04A5 8E 04 3E      [ 3]  156 	ldx	#LC1
   04A8 C6 14         [ 2]  157 	ldb	#20
   04AA BD 07 9C      [ 8]  158 	jsr	_print_string
   04AD 32 61         [ 5]  159 	leas	1,s
   04AF F6 C8 A6      [ 5]  160 	ldb	_current_game+8
   04B2 5C            [ 2]  161 	incb
   04B3 34 04         [ 6]  162 	pshs	b
   04B5 C6 28         [ 2]  163 	ldb	#40
   04B7 E7 E2         [ 6]  164 	stb	,-s
   04B9 C6 14         [ 2]  165 	ldb	#20
   04BB BD 08 53      [ 8]  166 	jsr	_print_unsigned_int
   04BE 32 62         [ 5]  167 	leas	2,s
   04C0 F6 C8 A6      [ 5]  168 	ldb	_current_game+8
   04C3 4F            [ 2]  169 	clra		;zero_extendqihi: R:b -> R:d
   04C4 1F 01         [ 6]  170 	tfr	d,x
   04C6 E6 89 C8 A0   [ 8]  171 	ldb	_current_game+2,x
   04CA E7 6D         [ 5]  172 	stb	13,s
   04CC C6 69         [ 2]  173 	ldb	#105
   04CE E7 E2         [ 6]  174 	stb	,-s
   04D0 8E C0 E2      [ 3]  175 	ldx	#-16158
   04D3 E6 6E         [ 5]  176 	ldb	14,s
   04D5 BD 08 4A      [ 8]  177 	jsr	__Print_Ships
   04D8 32 61         [ 5]  178 	leas	1,s
   04DA BD F1 BA      [ 8]  179 	jsr	___Read_Btns
   04DD 6A 67         [ 7]  180 	dec	7,s
   04DF 6D 67         [ 7]  181 	tst	7,s
   04E1 27 0A         [ 3]  182 	beq	L14
   04E3 F6 C8 11      [ 5]  183 	ldb	_Vec_Buttons
   04E6 C4 08         [ 2]  184 	andb	#8
   04E8 5D            [ 2]  185 	tstb
   04E9 10 27 FF 87   [ 6]  186 	lbeq	L13
   04ED                     187 L14:
   04ED 32 6E         [ 5]  188 	leas	14,s
   04EF 35 A0         [ 7]  189 	puls	y,pc
                            190 	.globl	_game
   04F1                     191 _game:
   04F1 32 7F         [ 5]  192 	leas	-1,s
   04F3 C6 02         [ 2]  193 	ldb	#2
   04F5 E7 E2         [ 6]  194 	stb	,-s
   04F7 C6 05         [ 2]  195 	ldb	#5
   04F9 BD 08 AF      [ 8]  196 	jsr	__Select_Game
   04FC 32 61         [ 5]  197 	leas	1,s
   04FE F6 C8 79      [ 5]  198 	ldb	_Vec_Num_Players
   0501 F7 C8 9E      [ 5]  199 	stb	_current_game
   0504 F6 C8 7A      [ 5]  200 	ldb	_Vec_Num_Game
   0507 F7 C8 9F      [ 5]  201 	stb	_current_game+1
   050A F6 C8 0F      [ 5]  202 	ldb	_Vec_Btn_State
   050D C4 08         [ 2]  203 	andb	#8
   050F 5D            [ 2]  204 	tstb
   0510 27 0A         [ 3]  205 	beq	L16
   0512 BD 03 6C      [ 8]  206 	jsr	_game_init
   0515 BD 03 AB      [ 8]  207 	jsr	_game_play
   0518 6F E4         [ 6]  208 	clr	,s
   051A 20 04         [ 3]  209 	bra	L17
   051C                     210 L16:
   051C C6 FF         [ 2]  211 	ldb	#-1
   051E E7 E4         [ 4]  212 	stb	,s
   0520                     213 L17:
   0520 E6 E4         [ 4]  214 	ldb	,s
   0522 32 61         [ 5]  215 	leas	1,s
   0524 39            [ 5]  216 	rts
ASxxxx Assembler V05.50  (Motorola 6809)                                Page 1
Hexadecimal [16-Bits]                                 Sun Apr  6 13:16:31 2025

Symbol Table

    .__.$$$.       =   2710 L   |     .__.ABS.       =   0000 G
    .__.CPU.       =   0000 L   |     .__.H$L.       =   0001 L
  3 L13                0108 R   |   3 L14                0181 R
  3 L16                01B0 R   |   3 L17                01B4 R
  3 L2                 0035 R   |   3 L3                 003B R
  3 L6                 00B1 R   |   3 L7                 0073 R
  3 L8                 00A2 R   |   3 L9                 0044 R
  3 LC0                00C7 R   |   3 LC1                00D2 R
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
  2 _current_game      0000 GR  |     _current_level     **** GX
    _current_music     **** GX  |   3 _game              0185 GR
  3 _game_init         0000 GR  |   3 _game_over         00DA GR
  3 _game_play         003F GR  |     _level_init        **** GX
    _level_play        **** GX  |     _print_string      **** GX
    _print_unsigne     **** GX

ASxxxx Assembler V05.50  (Motorola 6809)                                Page 2
Hexadecimal [16-Bits]                                 Sun Apr  6 13:16:31 2025

Area Table

[_CSEG]
   0 _CODE            size    0   flags C080
   2 .data            size    9   flags  100
   3 .text            size  1B9   flags  100
[_DSEG]
   1 _DATA            size    0   flags C0C0

