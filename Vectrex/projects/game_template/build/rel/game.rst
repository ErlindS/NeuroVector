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
   005F                      13 _game_init:
   005F C6 01         [ 2]   14 	ldb	#1
   0061 F7 C8 1F      [ 5]   15 	stb	_Vec_Joy_Mux_1_X
   0064 C6 03         [ 2]   16 	ldb	#3
   0066 F7 C8 20      [ 5]   17 	stb	_Vec_Joy_Mux_1_Y
   0069 7F C8 21      [ 7]   18 	clr	_Vec_Joy_Mux_2_X
   006C 7F C8 22      [ 7]   19 	clr	_Vec_Joy_Mux_2_Y
   006F C6 03         [ 2]   20 	ldb	#3
   0071 F7 C8 82      [ 5]   21 	stb	_current_game+2
   0074 C6 01         [ 2]   22 	ldb	#1
   0076 F7 C8 84      [ 5]   23 	stb	_current_game+4
   0079 7F C8 86      [ 7]   24 	clr	_current_game+6
   007C 7F C8 87      [ 7]   25 	clr	_current_game+7
   007F F6 C8 80      [ 5]   26 	ldb	_current_game
   0082 C1 02         [ 2]   27 	cmpb	#2	;cmpqi:
   0084 26 0C         [ 3]   28 	bne	L2
   0086 C6 03         [ 2]   29 	ldb	#3
   0088 F7 C8 83      [ 5]   30 	stb	_current_game+3
   008B C6 01         [ 2]   31 	ldb	#1
   008D F7 C8 85      [ 5]   32 	stb	_current_game+5
   0090 20 06         [ 3]   33 	bra	L3
   0092                      34 L2:
   0092 7F C8 83      [ 7]   35 	clr	_current_game+3
   0095 7F C8 85      [ 7]   36 	clr	_current_game+5
   0098                      37 L3:
   0098 7F C8 88      [ 7]   38 	clr	_current_game+8
   009B 39            [ 5]   39 	rts
                             40 	.globl	_game_play
   009C                      41 _game_play:
   009C 32 7B         [ 5]   42 	leas	-5,s
   009E 16 00 6D      [ 5]   43 	lbra	L6
   00A1                      44 L9:
   00A1 BD 02 16      [ 8]   45 	jsr	_level_init
   00A4 BD 02 1A      [ 8]   46 	jsr	_level_play
   00A7 F6 C8 89      [ 5]   47 	ldb	_current_level
   00AA C1 02         [ 2]   48 	cmpb	#2	;cmpqi:
   00AC 26 22         [ 3]   49 	bne	L7
   00AE F6 C8 88      [ 5]   50 	ldb	_current_game+8
   00B1 E7 61         [ 5]   51 	stb	1,s
   00B3 E6 61         [ 5]   52 	ldb	1,s
   00B5 4F            [ 2]   53 	clra		;zero_extendqihi: R:b -> R:d
   00B6 1F 01         [ 6]   54 	tfr	d,x
   00B8 E6 89 C8 84   [ 8]   55 	ldb	_current_game+4,x
   00BC E7 E4         [ 4]   56 	stb	,s
   00BE E6 E4         [ 4]   57 	ldb	,s
   00C0 5C            [ 2]   58 	incb
   00C1 E7 E4         [ 4]   59 	stb	,s
   00C3 E6 61         [ 5]   60 	ldb	1,s
   00C5 4F            [ 2]   61 	clra		;zero_extendqihi: R:b -> R:d
   00C6 1F 01         [ 6]   62 	tfr	d,x
   00C8 E6 E4         [ 4]   63 	ldb	,s
   00CA E7 89 C8 84   [ 8]   64 	stb	_current_game+4,x
   00CE 20 3E         [ 3]   65 	bra	L6
   00D0                      66 L7:
   00D0 F6 C8 88      [ 5]   67 	ldb	_current_game+8
   00D3 E7 62         [ 5]   68 	stb	2,s
   00D5 E6 62         [ 5]   69 	ldb	2,s
   00D7 4F            [ 2]   70 	clra		;zero_extendqihi: R:b -> R:d
   00D8 1F 01         [ 6]   71 	tfr	d,x
   00DA E6 89 C8 82   [ 8]   72 	ldb	_current_game+2,x
   00DE E7 E4         [ 4]   73 	stb	,s
   00E0 E6 E4         [ 4]   74 	ldb	,s
   00E2 5A            [ 2]   75 	decb
   00E3 E7 E4         [ 4]   76 	stb	,s
   00E5 E6 62         [ 5]   77 	ldb	2,s
   00E7 4F            [ 2]   78 	clra		;zero_extendqihi: R:b -> R:d
   00E8 1F 01         [ 6]   79 	tfr	d,x
   00EA E6 E4         [ 4]   80 	ldb	,s
   00EC E7 89 C8 82   [ 8]   81 	stb	_current_game+2,x
   00F0 E6 62         [ 5]   82 	ldb	2,s
   00F2 4F            [ 2]   83 	clra		;zero_extendqihi: R:b -> R:d
   00F3 1F 01         [ 6]   84 	tfr	d,x
   00F5 E6 89 C8 82   [ 8]   85 	ldb	_current_game+2,x
   00F9 5D            [ 2]   86 	tstb
   00FA 26 03         [ 3]   87 	bne	L8
   00FC BD 01 37      [ 8]   88 	jsr	_game_over
   00FF                      89 L8:
   00FF F6 C8 80      [ 5]   90 	ldb	_current_game
   0102 E7 63         [ 5]   91 	stb	3,s
   0104 F6 C8 88      [ 5]   92 	ldb	_current_game+8
   0107 E0 63         [ 5]   93 	subb	3,s
   0109 50            [ 2]   94 	negb
   010A 5A            [ 2]   95 	decb
   010B F7 C8 88      [ 5]   96 	stb	_current_game+8
   010E                      97 L6:
   010E F6 C8 82      [ 5]   98 	ldb	_current_game+2
   0111 E7 E4         [ 4]   99 	stb	,s
   0113 F6 C8 83      [ 5]  100 	ldb	_current_game+3
   0116 E7 64         [ 5]  101 	stb	4,s
   0118 E6 E4         [ 4]  102 	ldb	,s
   011A EB 64         [ 5]  103 	addb	4,s
   011C 5D            [ 2]  104 	tstb
   011D 10 26 FF 80   [ 6]  105 	lbne	L9
   0121 32 65         [ 5]  106 	leas	5,s
   0123 39            [ 5]  107 	rts
   0124                     108 LC0:
   0124 47 41 4D 45 20 4F   109 	.byte	71,65,77,69,32,79,86,69
        56 45
   012C 52 80 00            110 	.byte	82,-128,0
   012F                     111 LC1:
   012F 50 4C 41 59 45 52   112 	.byte	80,76,65,89,69,82,-128,0
        80 00
                            113 	.globl	_game_over
   0137                     114 _game_over:
   0137 34 20         [ 6]  115 	pshs	y
   0139 32 72         [ 5]  116 	leas	-14,s
   013B 30 E4         [ 4]  117 	leax	,s
   013D BD F8 4F      [ 8]  118 	jsr	___Clear_Score
   0140 F6 C8 88      [ 5]  119 	ldb	_current_game+8
   0143 4F            [ 2]  120 	clra		;zero_extendqihi: R:b -> R:d
   0144 1F 01         [ 6]  121 	tfr	d,x
   0146 E6 89 C8 86   [ 8]  122 	ldb	_current_game+6,x
   014A E7 68         [ 5]  123 	stb	8,s
   014C 30 E4         [ 4]  124 	leax	,s
   014E E6 68         [ 5]  125 	ldb	8,s
   0150 BD 02 9A      [ 8]  126 	jsr	__Add_Score_a
   0153 31 E4         [ 4]  127 	leay	,s
   0155 8E CB EB      [ 3]  128 	ldx	#_Vec_High_Score
   0158 34 10         [ 6]  129 	pshs	x
   015A 30 A4         [ 4]  130 	leax	,y
   015C BD 02 A3      [ 8]  131 	jsr	__New_High_Score
   015F 32 62         [ 5]  132 	leas	2,s
   0161 C6 96         [ 2]  133 	ldb	#-106
   0163 E7 67         [ 5]  134 	stb	7,s
   0165                     135 L13:
   0165 BD F1 AF      [ 8]  136 	jsr	___DP_to_C8
   0168 BE C8 8A      [ 6]  137 	ldx	_current_explosion
   016B AF 69         [ 6]  138 	stx	9,s
   016D AE 69         [ 6]  139 	ldx	9,s
   016F BD 02 81      [ 8]  140 	jsr	__Explosion_Snd
   0172 BE C8 8C      [ 6]  141 	ldx	_current_music
   0175 AF 6B         [ 6]  142 	stx	11,s
   0177 AE 6B         [ 6]  143 	ldx	11,s
   0179 BD 02 8A      [ 8]  144 	jsr	__Init_Music_chk
   017C BD F1 92      [ 8]  145 	jsr	___Wait_Recal
   017F BD 02 93      [ 8]  146 	jsr	__Do_Sound
   0182 BD F2 A5      [ 8]  147 	jsr	___Intensity_5F
   0185 C6 C0         [ 2]  148 	ldb	#-64
   0187 E7 E2         [ 6]  149 	stb	,-s
   0189 8E 01 24      [ 3]  150 	ldx	#LC0
   018C 5F            [ 2]  151 	clrb
   018D BD 02 57      [ 8]  152 	jsr	_print_string
   0190 32 61         [ 5]  153 	leas	1,s
   0192 C6 9C         [ 2]  154 	ldb	#-100
   0194 E7 E2         [ 6]  155 	stb	,-s
   0196 8E 01 2F      [ 3]  156 	ldx	#LC1
   0199 C6 14         [ 2]  157 	ldb	#20
   019B BD 02 57      [ 8]  158 	jsr	_print_string
   019E 32 61         [ 5]  159 	leas	1,s
   01A0 F6 C8 88      [ 5]  160 	ldb	_current_game+8
   01A3 5C            [ 2]  161 	incb
   01A4 34 04         [ 6]  162 	pshs	b
   01A6 C6 28         [ 2]  163 	ldb	#40
   01A8 E7 E2         [ 6]  164 	stb	,-s
   01AA C6 14         [ 2]  165 	ldb	#20
   01AC BD 02 C0      [ 8]  166 	jsr	_print_unsigned_int
   01AF 32 62         [ 5]  167 	leas	2,s
   01B1 F6 C8 88      [ 5]  168 	ldb	_current_game+8
   01B4 4F            [ 2]  169 	clra		;zero_extendqihi: R:b -> R:d
   01B5 1F 01         [ 6]  170 	tfr	d,x
   01B7 E6 89 C8 82   [ 8]  171 	ldb	_current_game+2,x
   01BB E7 6D         [ 5]  172 	stb	13,s
   01BD C6 69         [ 2]  173 	ldb	#105
   01BF E7 E2         [ 6]  174 	stb	,-s
   01C1 8E C0 E2      [ 3]  175 	ldx	#-16158
   01C4 E6 6E         [ 5]  176 	ldb	14,s
   01C6 BD 02 B7      [ 8]  177 	jsr	__Print_Ships
   01C9 32 61         [ 5]  178 	leas	1,s
   01CB BD F1 BA      [ 8]  179 	jsr	___Read_Btns
   01CE 6A 67         [ 7]  180 	dec	7,s
   01D0 6D 67         [ 7]  181 	tst	7,s
   01D2 27 0A         [ 3]  182 	beq	L14
   01D4 F6 C8 11      [ 5]  183 	ldb	_Vec_Buttons
   01D7 C4 08         [ 2]  184 	andb	#8
   01D9 5D            [ 2]  185 	tstb
   01DA 10 27 FF 87   [ 6]  186 	lbeq	L13
   01DE                     187 L14:
   01DE 32 6E         [ 5]  188 	leas	14,s
   01E0 35 A0         [ 7]  189 	puls	y,pc
                            190 	.globl	_game
   01E2                     191 _game:
   01E2 32 7F         [ 5]  192 	leas	-1,s
   01E4 C6 02         [ 2]  193 	ldb	#2
   01E6 E7 E2         [ 6]  194 	stb	,-s
   01E8 C6 05         [ 2]  195 	ldb	#5
   01EA BD 03 1C      [ 8]  196 	jsr	__Select_Game
   01ED 32 61         [ 5]  197 	leas	1,s
   01EF F6 C8 79      [ 5]  198 	ldb	_Vec_Num_Players
   01F2 F7 C8 80      [ 5]  199 	stb	_current_game
   01F5 F6 C8 7A      [ 5]  200 	ldb	_Vec_Num_Game
   01F8 F7 C8 81      [ 5]  201 	stb	_current_game+1
   01FB F6 C8 0F      [ 5]  202 	ldb	_Vec_Btn_State
   01FE C4 08         [ 2]  203 	andb	#8
   0200 5D            [ 2]  204 	tstb
   0201 27 0A         [ 3]  205 	beq	L16
   0203 BD 00 5F      [ 8]  206 	jsr	_game_init
   0206 BD 00 9C      [ 8]  207 	jsr	_game_play
   0209 6F E4         [ 6]  208 	clr	,s
   020B 20 04         [ 3]  209 	bra	L17
   020D                     210 L16:
   020D C6 FF         [ 2]  211 	ldb	#-1
   020F E7 E4         [ 4]  212 	stb	,s
   0211                     213 L17:
   0211 E6 E4         [ 4]  214 	ldb	,s
   0213 32 61         [ 5]  215 	leas	1,s
   0215 39            [ 5]  216 	rts
ASxxxx Assembler V05.50  (Motorola 6809)                                Page 1
Hexadecimal [16-Bits]                                 Sat Apr  5 01:51:59 2025

Symbol Table

    .__.$$$.       =   2710 L   |     .__.ABS.       =   0000 G
    .__.CPU.       =   0000 L   |     .__.H$L.       =   0001 L
  3 L13                0106 R   |   3 L14                017F R
  3 L16                01AE R   |   3 L17                01B2 R
  3 L2                 0033 R   |   3 L3                 0039 R
  3 L6                 00AF R   |   3 L7                 0071 R
  3 L8                 00A0 R   |   3 L9                 0042 R
  3 LC0                00C5 R   |   3 LC1                00D0 R
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
    _current_music     **** GX  |   3 _game              0183 GR
  3 _game_init         0000 GR  |   3 _game_over         00D8 GR
  3 _game_play         003D GR  |     _level_init        **** GX
    _level_play        **** GX  |     _print_string      **** GX
    _print_unsigne     **** GX

ASxxxx Assembler V05.50  (Motorola 6809)                                Page 2
Hexadecimal [16-Bits]                                 Sat Apr  5 01:51:59 2025

Area Table

[_CSEG]
   0 _CODE            size    0   flags C080
   2 .data            size    9   flags  100
   3 .text            size  1B7   flags  100
[_DSEG]
   1 _DATA            size    0   flags C0C0

