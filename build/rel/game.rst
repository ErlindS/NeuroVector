                              1 ;;; gcc for m6809 : Mar 17 2019 13:25:32
                              2 ;;; 4.3.6 (gcc6809)
                              3 ;;; ABI version 1
                              4 ;;; -mabi=bx -mint8 -fomit-frame-pointer -O0
                              5 	.module	game.c
                              6 	.globl	_counter
                              7 	.area	.data
   C896                       8 _counter:
   C896 00                    9 	.byte	0
                             10 	.globl	_counterw
   C897                      11 _counterw:
   C897 03                   12 	.byte	3
                             13 	.globl	_current_game
   C898                      14 _current_game:
   C898 00 00 00 00 00 00    15 	.word	0,0,0,0
        00 00
   C8A0 00                   16 	.byte	0
                             17 	.area	.text
                             18 	.globl	_game_init
   0196                      19 _game_init:
   0196 C6 01         [ 2]   20 	ldb	#1
   0198 F7 C8 1F      [ 5]   21 	stb	_Vec_Joy_Mux_1_X
   019B C6 03         [ 2]   22 	ldb	#3
   019D F7 C8 20      [ 5]   23 	stb	_Vec_Joy_Mux_1_Y
   01A0 7F C8 21      [ 7]   24 	clr	_Vec_Joy_Mux_2_X
   01A3 7F C8 22      [ 7]   25 	clr	_Vec_Joy_Mux_2_Y
   01A6 C6 03         [ 2]   26 	ldb	#3
   01A8 F7 C8 9A      [ 5]   27 	stb	_current_game+2
   01AB C6 01         [ 2]   28 	ldb	#1
   01AD F7 C8 9C      [ 5]   29 	stb	_current_game+4
   01B0 7F C8 9E      [ 7]   30 	clr	_current_game+6
   01B3 7F C8 9F      [ 7]   31 	clr	_current_game+7
   01B6 F6 C8 98      [ 5]   32 	ldb	_current_game
   01B9 C1 02         [ 2]   33 	cmpb	#2	;cmpqi:
   01BB 26 0C         [ 3]   34 	bne	L2
   01BD C6 03         [ 2]   35 	ldb	#3
   01BF F7 C8 9B      [ 5]   36 	stb	_current_game+3
   01C2 C6 01         [ 2]   37 	ldb	#1
   01C4 F7 C8 9D      [ 5]   38 	stb	_current_game+5
   01C7 20 06         [ 3]   39 	bra	L3
   01C9                      40 L2:
   01C9 7F C8 9B      [ 7]   41 	clr	_current_game+3
   01CC 7F C8 9D      [ 7]   42 	clr	_current_game+5
   01CF                      43 L3:
   01CF 7F C8 A0      [ 7]   44 	clr	_current_game+8
   01D2 39            [ 5]   45 	rts
                             46 	.globl	_game_play
   01D3                      47 _game_play:
   01D3 BD 03 09      [ 8]   48 	jsr	_level_init
   01D6 BD 05 97      [ 8]   49 	jsr	_level_play
   01D9 39            [ 5]   50 	rts
   01DA                      51 LC0:
   01DA 47 41 4D 45 20 4F    52 	.byte	71,65,77,69,32,79,86,69
        56 45
   01E2 52 80 00             53 	.byte	82,-128,0
   01E5                      54 LC1:
   01E5 50 4C 41 59 45 52    55 	.byte	80,76,65,89,69,82,-128,0
        80 00
                             56 	.globl	_game_over
   01ED                      57 _game_over:
   01ED 34 20         [ 6]   58 	pshs	y
   01EF 32 72         [ 5]   59 	leas	-14,s
   01F1 30 E4         [ 4]   60 	leax	,s
   01F3 BD F8 4F      [ 8]   61 	jsr	___Clear_Score
   01F6 F6 C8 A0      [ 5]   62 	ldb	_current_game+8
   01F9 4F            [ 2]   63 	clra		;zero_extendqihi: R:b -> R:d
   01FA 1F 01         [ 6]   64 	tfr	d,x
   01FC E6 89 C8 9E   [ 8]   65 	ldb	_current_game+6,x
   0200 E7 68         [ 5]   66 	stb	8,s
   0202 30 E4         [ 4]   67 	leax	,s
   0204 E6 68         [ 5]   68 	ldb	8,s
   0206 BD 06 3C      [ 8]   69 	jsr	__Add_Score_a
   0209 31 E4         [ 4]   70 	leay	,s
   020B 8E CB EB      [ 3]   71 	ldx	#_Vec_High_Score
   020E 34 10         [ 6]   72 	pshs	x
   0210 30 A4         [ 4]   73 	leax	,y
   0212 BD 06 45      [ 8]   74 	jsr	__New_High_Score
   0215 32 62         [ 5]   75 	leas	2,s
   0217 C6 96         [ 2]   76 	ldb	#-106
   0219 E7 67         [ 5]   77 	stb	7,s
   021B                      78 L9:
   021B BD F1 AF      [ 8]   79 	jsr	___DP_to_C8
   021E BE C8 D1      [ 6]   80 	ldx	_current_explosion
   0221 AF 69         [ 6]   81 	stx	9,s
   0223 AE 69         [ 6]   82 	ldx	9,s
   0225 BD 06 12      [ 8]   83 	jsr	__Explosion_Snd
   0228 BE C8 D3      [ 6]   84 	ldx	_current_music
   022B AF 6B         [ 6]   85 	stx	11,s
   022D AE 6B         [ 6]   86 	ldx	11,s
   022F BD 06 1B      [ 8]   87 	jsr	__Init_Music_chk
   0232 BD F1 92      [ 8]   88 	jsr	___Wait_Recal
   0235 BD 06 35      [ 8]   89 	jsr	__Do_Sound
   0238 BD F2 A5      [ 8]   90 	jsr	___Intensity_5F
   023B C6 C0         [ 2]   91 	ldb	#-64
   023D E7 E2         [ 6]   92 	stb	,-s
   023F 8E 01 DA      [ 3]   93 	ldx	#LC0
   0242 5F            [ 2]   94 	clrb
   0243 BD 05 E8      [ 8]   95 	jsr	_print_string
   0246 32 61         [ 5]   96 	leas	1,s
   0248 C6 9C         [ 2]   97 	ldb	#-100
   024A E7 E2         [ 6]   98 	stb	,-s
   024C 8E 01 E5      [ 3]   99 	ldx	#LC1
   024F C6 14         [ 2]  100 	ldb	#20
   0251 BD 05 E8      [ 8]  101 	jsr	_print_string
   0254 32 61         [ 5]  102 	leas	1,s
   0256 F6 C8 A0      [ 5]  103 	ldb	_current_game+8
   0259 5C            [ 2]  104 	incb
   025A 34 04         [ 6]  105 	pshs	b
   025C C6 28         [ 2]  106 	ldb	#40
   025E E7 E2         [ 6]  107 	stb	,-s
   0260 C6 14         [ 2]  108 	ldb	#20
   0262 BD 06 C7      [ 8]  109 	jsr	_print_unsigned_int
   0265 32 62         [ 5]  110 	leas	2,s
   0267 F6 C8 A0      [ 5]  111 	ldb	_current_game+8
   026A 4F            [ 2]  112 	clra		;zero_extendqihi: R:b -> R:d
   026B 1F 01         [ 6]  113 	tfr	d,x
   026D E6 89 C8 9A   [ 8]  114 	ldb	_current_game+2,x
   0271 E7 6D         [ 5]  115 	stb	13,s
   0273 C6 69         [ 2]  116 	ldb	#105
   0275 E7 E2         [ 6]  117 	stb	,-s
   0277 8E C0 E2      [ 3]  118 	ldx	#-16158
   027A E6 6E         [ 5]  119 	ldb	14,s
   027C BD 06 BE      [ 8]  120 	jsr	__Print_Ships
   027F 32 61         [ 5]  121 	leas	1,s
   0281 BD F1 BA      [ 8]  122 	jsr	___Read_Btns
   0284 6A 67         [ 7]  123 	dec	7,s
   0286 6D 67         [ 7]  124 	tst	7,s
   0288 27 0A         [ 3]  125 	beq	L10
   028A F6 C8 11      [ 5]  126 	ldb	_Vec_Buttons
   028D C4 08         [ 2]  127 	andb	#8
   028F 5D            [ 2]  128 	tstb
   0290 10 27 FF 87   [ 6]  129 	lbeq	L9
   0294                     130 L10:
   0294 32 6E         [ 5]  131 	leas	14,s
   0296 35 A0         [ 7]  132 	puls	y,pc
                            133 	.globl	_game
   0298                     134 _game:
   0298 32 7F         [ 5]  135 	leas	-1,s
   029A C6 01         [ 2]  136 	ldb	#1
   029C E7 E2         [ 6]  137 	stb	,-s
   029E C6 03         [ 2]  138 	ldb	#3
   02A0 BD 07 28      [ 8]  139 	jsr	__Select_Game
   02A3 32 61         [ 5]  140 	leas	1,s
   02A5 F6 C8 79      [ 5]  141 	ldb	_Vec_Num_Players
   02A8 F7 C8 98      [ 5]  142 	stb	_current_game
   02AB F6 C8 7A      [ 5]  143 	ldb	_Vec_Num_Game
   02AE F7 C8 99      [ 5]  144 	stb	_current_game+1
   02B1 F6 C8 0F      [ 5]  145 	ldb	_Vec_Btn_State
   02B4 C4 08         [ 2]  146 	andb	#8
   02B6 5D            [ 2]  147 	tstb
   02B7 27 0D         [ 3]  148 	beq	L12
   02B9 BD 01 96      [ 8]  149 	jsr	_game_init
   02BC BD 03 09      [ 8]  150 	jsr	_level_init
   02BF BD 05 97      [ 8]  151 	jsr	_level_play
   02C2 6F E4         [ 6]  152 	clr	,s
   02C4 20 04         [ 3]  153 	bra	L13
   02C6                     154 L12:
   02C6 C6 FF         [ 2]  155 	ldb	#-1
   02C8 E7 E4         [ 4]  156 	stb	,s
   02CA                     157 L13:
   02CA E6 E4         [ 4]  158 	ldb	,s
   02CC 32 61         [ 5]  159 	leas	1,s
   02CE 39            [ 5]  160 	rts
ASxxxx Assembler V05.50  (Motorola 6809)                                Page 1
Hexadecimal [16-Bits]                                 Sun May  4 00:01:53 2025

Symbol Table

    .__.$$$.       =   2710 L   |     .__.ABS.       =   0000 G
    .__.CPU.       =   0000 L   |     .__.H$L.       =   0001 L
  3 L10                00FE R   |   3 L12                0130 R
  3 L13                0134 R   |   3 L2                 0033 R
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
    ___Wait_Recal      **** GX  |   2 _counter           0000 GR
  2 _counterw          0001 GR  |     _current_explo     **** GX
  2 _current_game      0002 GR  |     _current_music     **** GX
  3 _game              0102 GR  |   3 _game_init         0000 GR
  3 _game_over         0057 GR  |   3 _game_play         003D GR
    _level_init        **** GX  |     _level_play        **** GX
    _print_string      **** GX  |     _print_unsigne     **** GX

ASxxxx Assembler V05.50  (Motorola 6809)                                Page 2
Hexadecimal [16-Bits]                                 Sun May  4 00:01:53 2025

Area Table

[_CSEG]
   0 _CODE            size    0   flags C080
   2 .data            size    B   flags  100
   3 .text            size  139   flags  100
[_DSEG]
   1 _DATA            size    0   flags C0C0

