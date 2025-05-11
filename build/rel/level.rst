                              1 ;;; gcc for m6809 : Mar 17 2019 13:25:32
                              2 ;;; 4.3.6 (gcc6809)
                              3 ;;; ABI version 1
                              4 ;;; -mabi=bx -mint8 -fomit-frame-pointer -O0
                              5 	.module	level.c
                              6 	.globl	_Positions_Cursor
                              7 	.area	.text
   024D                       8 _Positions_Cursor:
   024D 00                    9 	.byte	0
   024E 00                   10 	.byte	0
   024F 10                   11 	.byte	16
   0250 F0                   12 	.byte	-16
   0251 10                   13 	.byte	16
   0252 00                   14 	.byte	0
   0253 10                   15 	.byte	16
   0254 10                   16 	.byte	16
   0255 00                   17 	.byte	0
   0256 F0                   18 	.byte	-16
   0257 00                   19 	.byte	0
   0258 00                   20 	.byte	0
   0259 00                   21 	.byte	0
   025A 10                   22 	.byte	16
   025B F0                   23 	.byte	-16
   025C F0                   24 	.byte	-16
   025D F0                   25 	.byte	-16
   025E 00                   26 	.byte	0
   025F F0                   27 	.byte	-16
   0260 10                   28 	.byte	16
                             29 	.globl	_cross
   0261                      30 _cross:
   0261 00                   31 	.byte	0
   0262 20                   32 	.byte	32
   0263 20                   33 	.byte	32
   0264 FF                   34 	.byte	-1
   0265 E0                   35 	.byte	-32
   0266 E0                   36 	.byte	-32
   0267 00                   37 	.byte	0
   0268 20                   38 	.byte	32
   0269 00                   39 	.byte	0
   026A FF                   40 	.byte	-1
   026B E0                   41 	.byte	-32
   026C 20                   42 	.byte	32
   026D 01                   43 	.byte	1
   026E 00                   44 	.byte	0
   026F 00                   45 	.byte	0
                             46 	.globl	_Gamefield
   0270                      47 _Gamefield:
   0270 00                   48 	.byte	0
   0271 18                   49 	.byte	24
   0272 F8                   50 	.byte	-8
   0273 FF                   51 	.byte	-1
   0274 D0                   52 	.byte	-48
   0275 00                   53 	.byte	0
   0276 00                   54 	.byte	0
   0277 00                   55 	.byte	0
   0278 10                   56 	.byte	16
   0279 FF                   57 	.byte	-1
   027A 30                   58 	.byte	48
   027B 00                   59 	.byte	0
   027C 00                   60 	.byte	0
   027D F0                   61 	.byte	-16
   027E 10                   62 	.byte	16
   027F FF                   63 	.byte	-1
   0280 00                   64 	.byte	0
   0281 D0                   65 	.byte	-48
   0282 00                   66 	.byte	0
   0283 F0                   67 	.byte	-16
   0284 00                   68 	.byte	0
   0285 FF                   69 	.byte	-1
   0286 00                   70 	.byte	0
   0287 30                   71 	.byte	48
   0288 01                   72 	.byte	1
   0289 00                   73 	.byte	0
   028A 00                   74 	.byte	0
                             75 	.globl	_Brainright
   028B                      76 _Brainright:
   028B 00                   77 	.byte	0
   028C D3                   78 	.byte	-45
   028D 00                   79 	.byte	0
   028E FF                   80 	.byte	-1
   028F FB                   81 	.byte	-5
   0290 05                   82 	.byte	5
   0291 FF                   83 	.byte	-1
   0292 01                   84 	.byte	1
   0293 0F                   85 	.byte	15
   0294 FF                   86 	.byte	-1
   0295 0A                   87 	.byte	10
   0296 07                   88 	.byte	7
   0297 FF                   89 	.byte	-1
   0298 0A                   90 	.byte	10
   0299 05                   91 	.byte	5
   029A FF                   92 	.byte	-1
   029B 2D                   93 	.byte	45
   029C FF                   94 	.byte	-1
   029D FF                   95 	.byte	-1
   029E 05                   96 	.byte	5
   029F F6                   97 	.byte	-10
   02A0 FF                   98 	.byte	-1
   02A1 00                   99 	.byte	0
   02A2 F6                  100 	.byte	-10
   02A3 FF                  101 	.byte	-1
   02A4 FB                  102 	.byte	-5
   02A5 F6                  103 	.byte	-10
   02A6 01                  104 	.byte	1
   02A7 00                  105 	.byte	0
   02A8 00                  106 	.byte	0
                            107 	.globl	_Brainleft
   02A9                     108 _Brainleft:
   02A9 00                  109 	.byte	0
   02AA D3                  110 	.byte	-45
   02AB 00                  111 	.byte	0
   02AC FF                  112 	.byte	-1
   02AD FB                  113 	.byte	-5
   02AE FB                  114 	.byte	-5
   02AF FF                  115 	.byte	-1
   02B0 01                  116 	.byte	1
   02B1 F1                  117 	.byte	-15
   02B2 FF                  118 	.byte	-1
   02B3 0A                  119 	.byte	10
   02B4 F9                  120 	.byte	-7
   02B5 FF                  121 	.byte	-1
   02B6 0A                  122 	.byte	10
   02B7 FB                  123 	.byte	-5
   02B8 FF                  124 	.byte	-1
   02B9 2D                  125 	.byte	45
   02BA 01                  126 	.byte	1
   02BB FF                  127 	.byte	-1
   02BC 05                  128 	.byte	5
   02BD 0A                  129 	.byte	10
   02BE FF                  130 	.byte	-1
   02BF 00                  131 	.byte	0
   02C0 0A                  132 	.byte	10
   02C1 FF                  133 	.byte	-1
   02C2 FB                  134 	.byte	-5
   02C3 0A                  135 	.byte	10
   02C4 01                  136 	.byte	1
   02C5 00                  137 	.byte	0
   02C6 00                  138 	.byte	0
                            139 	.globl	_a_random
                            140 	.area	.data
   C889                     141 _a_random:
   C889 03                  142 	.byte	3
   C88A 09                  143 	.byte	9
   C88B 07                  144 	.byte	7
   C88C 05                  145 	.byte	5
   C88D 05                  146 	.byte	5
   C88E 08                  147 	.byte	8
   C88F 04                  148 	.byte	4
   C890 05                  149 	.byte	5
   C891 09                  150 	.byte	9
   C892 08                  151 	.byte	8
   C893 01                  152 	.byte	1
   C894 05                  153 	.byte	5
   C895 09                  154 	.byte	9
   C896 02                  155 	.byte	2
   C897 09                  156 	.byte	9
   C898 06                  157 	.byte	6
   C899 03                  158 	.byte	3
   C89A 01                  159 	.byte	1
   C89B 06                  160 	.byte	6
   C89C 03                  161 	.byte	3
                            162 	.globl	_a_random_compare
   C89D                     163 _a_random_compare:
   C89D 00 00 00 00 00 00   164 	.word	0,0,0,0,0,0,0,0,0,0
        00 00 00 00 00 00
        00 00 00 00 00 00
        00 00
                            165 	.globl	_RandomSequenceCounter
   C8B1                     166 _RandomSequenceCounter:
   C8B1 C8                  167 	.byte	-56
                            168 	.globl	_RandomSequenceCounterDisplay
   C8B2                     169 _RandomSequenceCounterDisplay:
   C8B2 00                  170 	.byte	0
                            171 	.area	.text
                            172 	.globl	_RandomNumberGenerator
   02C7                     173 _RandomNumberGenerator:
   02C7 32 7D         [ 5]  174 	leas	-3,s
   02C9 6F 62         [ 7]  175 	clr	2,s
   02CB 20 2B         [ 3]  176 	bra	L2
   02CD                     177 L3:
   02CD E6 62         [ 5]  178 	ldb	2,s
   02CF E7 61         [ 5]  179 	stb	1,s
   02D1 E6 62         [ 5]  180 	ldb	2,s
   02D3 1D            [ 2]  181 	sex		;extendqihi2: R:b -> R:d
   02D4 1F 01         [ 6]  182 	tfr	d,x
   02D6 E6 89 C8 89   [ 8]  183 	ldb	_a_random,x
   02DA 4F            [ 2]  184 	clra		;zero_extendqihi: R:b -> R:d
   02DB 8E 00 0A      [ 3]  185 	ldx	#10
   02DE 34 10         [ 6]  186 	pshs	x
   02E0 1F 01         [ 6]  187 	tfr	d,x
   02E2 BD 07 23      [ 8]  188 	jsr	_umodhi3
   02E5 32 62         [ 5]  189 	leas	2,s
   02E7 1F 10         [ 6]  190 	tfr	x,d	;movlsbqihi: R:x -> R:b
   02E9 E7 E4         [ 4]  191 	stb	,s
   02EB E6 61         [ 5]  192 	ldb	1,s
   02ED 1D            [ 2]  193 	sex		;extendqihi2: R:b -> R:d
   02EE 1F 01         [ 6]  194 	tfr	d,x
   02F0 E6 E4         [ 4]  195 	ldb	,s
   02F2 E7 89 C8 89   [ 8]  196 	stb	_a_random,x
   02F6 6C 62         [ 7]  197 	inc	2,s
   02F8                     198 L2:
   02F8 E6 62         [ 5]  199 	ldb	2,s
   02FA C1 13         [ 2]  200 	cmpb	#19	;cmpqi:
   02FC 2F CF         [ 3]  201 	ble	L3
   02FE 32 63         [ 5]  202 	leas	3,s
   0300 39            [ 5]  203 	rts
                            204 	.globl	_current_level
                            205 	.area	.data
   C8B3                     206 _current_level:
   C8B3 00                  207 	.byte	0
                            208 	.globl	_SequenceTime
   C8B4                     209 _SequenceTime:
   C8B4 01                  210 	.byte	1
                            211 	.globl	_counter
   C8B5                     212 _counter:
   C8B5 00                  213 	.byte	0
                            214 	.area	.text
   0301                     215 LC0:
   0301 54 49 4D 45 20 4C   216 	.byte	84,73,77,69,32,76,69,70
        45 46
   0309 54 80 00            217 	.byte	84,-128,0
   030C                     218 LC1:
   030C 47 41 4D 45 20 4F   219 	.byte	71,65,77,69,32,79,86,69
        56 45
   0314 52 80 00            220 	.byte	82,-128,0
                            221 	.globl	_Display_TimeLeft
   0317                     222 _Display_TimeLeft:
   0317 C6 C4         [ 2]  223 	ldb	#-60
   0319 E7 E2         [ 6]  224 	stb	,-s
   031B 8E 03 01      [ 3]  225 	ldx	#LC0
   031E C6 64         [ 2]  226 	ldb	#100
   0320 BD 06 7C      [ 8]  227 	jsr	_print_string
   0323 32 61         [ 5]  228 	leas	1,s
   0325 F6 C8 B5      [ 5]  229 	ldb	_counter
   0328 BD 01 63      [ 8]  230 	jsr	_Loadingbar
   032B F6 C8 B5      [ 5]  231 	ldb	_counter
   032E 5D            [ 2]  232 	tstb
   032F 26 10         [ 3]  233 	bne	L8
   0331                     234 L7:
   0331 C6 C4         [ 2]  235 	ldb	#-60
   0333 E7 E2         [ 6]  236 	stb	,-s
   0335 8E 03 0C      [ 3]  237 	ldx	#LC1
   0338 C6 64         [ 2]  238 	ldb	#100
   033A BD 06 7C      [ 8]  239 	jsr	_print_string
   033D 32 61         [ 5]  240 	leas	1,s
   033F 20 F0         [ 3]  241 	bra	L7
   0341                     242 L8:
   0341 39            [ 5]  243 	rts
   0342                     244 LC2:
   0342 52 45 4D 45 4D 42   245 	.byte	82,69,77,69,77,66,69,82
        45 52
   034A 20 54 48 45 80 00   246 	.byte	32,84,72,69,-128,0
   0350                     247 LC3:
   0350 53 45 51 55 45 4E   248 	.byte	83,69,81,85,69,78,67,69
        43 45
   0358 80 00               249 	.byte	-128,0
                            250 	.globl	_Display_RandomSequence
   035A                     251 _Display_RandomSequence:
   035A 32 7D         [ 5]  252 	leas	-3,s
   035C 6F 62         [ 7]  253 	clr	2,s
   035E 16 00 8B      [ 5]  254 	lbra	L10
   0361                     255 L12:
   0361 C6 C8         [ 2]  256 	ldb	#-56
   0363 F7 C8 B5      [ 5]  257 	stb	_counter
   0366 BD F1 92      [ 8]  258 	jsr	___Wait_Recal
   0369 BD 01 29      [ 8]  259 	jsr	_Display_Gamefield
   036C C6 B5         [ 2]  260 	ldb	#-75
   036E E7 E2         [ 6]  261 	stb	,-s
   0370 8E 03 42      [ 3]  262 	ldx	#LC2
   0373 C6 64         [ 2]  263 	ldb	#100
   0375 BD 06 7C      [ 8]  264 	jsr	_print_string
   0378 32 61         [ 5]  265 	leas	1,s
   037A C6 CE         [ 2]  266 	ldb	#-50
   037C E7 E2         [ 6]  267 	stb	,-s
   037E 8E 03 50      [ 3]  268 	ldx	#LC3
   0381 C6 50         [ 2]  269 	ldb	#80
   0383 BD 06 7C      [ 8]  270 	jsr	_print_string
   0386 32 61         [ 5]  271 	leas	1,s
   0388 E6 62         [ 5]  272 	ldb	2,s
   038A 4F            [ 2]  273 	clra		;zero_extendqihi: R:b -> R:d
   038B 1F 01         [ 6]  274 	tfr	d,x
   038D E6 89 C8 89   [ 8]  275 	ldb	_a_random,x
   0391 BD 00 D8      [ 8]  276 	jsr	_draw_cross
   0394 E6 62         [ 5]  277 	ldb	2,s
   0396 5C            [ 2]  278 	incb
   0397 86 64         [ 2]  279 	lda	#100	;umulqihi3
   0399 3D            [11]  280 	mul
                            281 		;movlsbqihi: D->B
   039A 4F            [ 2]  282 	clra		;zero_extendqihi: R:b -> R:d
   039B ED E4         [ 5]  283 	std	,s
   039D C6 C8         [ 2]  284 	ldb	#-56
   039F E7 E2         [ 6]  285 	stb	,-s
   03A1 AE 61         [ 6]  286 	ldx	1,s
   03A3 C6 01         [ 2]  287 	ldb	#1
   03A5 BD 07 46      [ 8]  288 	jsr	_play_tune
   03A8 32 61         [ 5]  289 	leas	1,s
   03AA E6 62         [ 5]  290 	ldb	2,s
   03AC 5C            [ 2]  291 	incb
   03AD 86 64         [ 2]  292 	lda	#100	;umulqihi3
   03AF 3D            [11]  293 	mul
                            294 		;movlsbqihi: D->B
   03B0 4F            [ 2]  295 	clra		;zero_extendqihi: R:b -> R:d
   03B1 ED E4         [ 5]  296 	std	,s
   03B3 C6 C8         [ 2]  297 	ldb	#-56
   03B5 E7 E2         [ 6]  298 	stb	,-s
   03B7 AE 61         [ 6]  299 	ldx	1,s
   03B9 C6 02         [ 2]  300 	ldb	#2
   03BB BD 07 46      [ 8]  301 	jsr	_play_tune
   03BE 32 61         [ 5]  302 	leas	1,s
   03C0 E6 62         [ 5]  303 	ldb	2,s
   03C2 5C            [ 2]  304 	incb
   03C3 86 64         [ 2]  305 	lda	#100	;umulqihi3
   03C5 3D            [11]  306 	mul
                            307 		;movlsbqihi: D->B
   03C6 4F            [ 2]  308 	clra		;zero_extendqihi: R:b -> R:d
   03C7 ED E4         [ 5]  309 	std	,s
   03C9 C6 C8         [ 2]  310 	ldb	#-56
   03CB E7 E2         [ 6]  311 	stb	,-s
   03CD AE 61         [ 6]  312 	ldx	1,s
   03CF C6 03         [ 2]  313 	ldb	#3
   03D1 BD 07 46      [ 8]  314 	jsr	_play_tune
   03D4 32 61         [ 5]  315 	leas	1,s
   03D6                     316 L11:
   03D6 F6 C8 B1      [ 5]  317 	ldb	_RandomSequenceCounter
   03D9 5A            [ 2]  318 	decb
   03DA F7 C8 B1      [ 5]  319 	stb	_RandomSequenceCounter
   03DD F6 C8 B1      [ 5]  320 	ldb	_RandomSequenceCounter
   03E0 5D            [ 2]  321 	tstb
   03E1 10 26 FF 7C   [ 6]  322 	lbne	L12
   03E5 C6 1E         [ 2]  323 	ldb	#30
   03E7 F7 C8 B1      [ 5]  324 	stb	_RandomSequenceCounter
   03EA 6C 62         [ 7]  325 	inc	2,s
   03EC                     326 L10:
   03EC F6 C8 B2      [ 5]  327 	ldb	_RandomSequenceCounterDisplay
   03EF 5C            [ 2]  328 	incb
   03F0 E1 62         [ 5]  329 	cmpb	2,s	;cmpqi:
   03F2 22 E2         [ 3]  330 	bhi	L11
   03F4 7F C8 B4      [ 7]  331 	clr	_SequenceTime
   03F7 32 63         [ 5]  332 	leas	3,s
   03F9 39            [ 5]  333 	rts
                            334 	.area	.bss
                            335 	.globl	_execute_game_playing_state
   C8BE                     336 _execute_game_playing_state:	.blkb	2
                            337 	.area	.text
   03FA                     338 LC4:
   03FA 50 52 45 53 53 20   339 	.byte	80,82,69,83,83,32,50,32
        32 20
   0402 42 55 54 54 4F 4E   340 	.byte	66,85,84,84,79,78,32,84
        20 54
   040A 4F 20 52 45 53 54   341 	.byte	79,32,82,69,83,84,65,82
        41 52
   0412 54 80 00            342 	.byte	84,-128,0
                            343 	.globl	_display_game_over
   0415                     344 _display_game_over:
   0415 32 7F         [ 5]  345 	leas	-1,s
   0417 C6 01         [ 2]  346 	ldb	#1
   0419 E7 E4         [ 4]  347 	stb	,s
   041B 20 33         [ 3]  348 	bra	L16
   041D                     349 L17:
   041D C6 C4         [ 2]  350 	ldb	#-60
   041F E7 E2         [ 6]  351 	stb	,-s
   0421 8E 03 0C      [ 3]  352 	ldx	#LC1
   0424 C6 64         [ 2]  353 	ldb	#100
   0426 BD 06 7C      [ 8]  354 	jsr	_print_string
   0429 32 61         [ 5]  355 	leas	1,s
   042B C6 C4         [ 2]  356 	ldb	#-60
   042D E7 E2         [ 6]  357 	stb	,-s
   042F 8E 03 FA      [ 3]  358 	ldx	#LC4
   0432 C6 50         [ 2]  359 	ldb	#80
   0434 BD 06 7C      [ 8]  360 	jsr	_print_string
   0437 32 61         [ 5]  361 	leas	1,s
   0439 BD F1 BA      [ 8]  362 	jsr	___Read_Btns
   043C F6 C8 11      [ 5]  363 	ldb	_Vec_Buttons
   043F C4 02         [ 2]  364 	andb	#2
   0441 5D            [ 2]  365 	tstb
   0442 27 0C         [ 3]  366 	beq	L16
   0444 8E 05 AD      [ 3]  367 	ldx	#_execute_display_sequence_state
   0447 BF C8 BE      [ 6]  368 	stx	_execute_game_playing_state
   044A 7F C8 B2      [ 7]  369 	clr	_RandomSequenceCounterDisplay
   044D BD 06 3A      [ 8]  370 	jsr	_level_play
   0450                     371 L16:
   0450 6D E4         [ 6]  372 	tst	,s
   0452 26 C9         [ 3]  373 	bne	L17
   0454 32 61         [ 5]  374 	leas	1,s
   0456 39            [ 5]  375 	rts
                            376 	.globl	_buttonspressedcounter
                            377 	.area	.data
   C8B6                     378 _buttonspressedcounter:
   C8B6 00                  379 	.byte	0
                            380 	.area	.text
                            381 	.globl	_is_pattern_succesfull
   0457                     382 _is_pattern_succesfull:
   0457 32 7E         [ 5]  383 	leas	-2,s
   0459 6F 61         [ 7]  384 	clr	1,s
   045B 20 26         [ 3]  385 	bra	L20
   045D                     386 L22:
   045D E6 61         [ 5]  387 	ldb	1,s
   045F 4F            [ 2]  388 	clra		;zero_extendqihi: R:b -> R:d
   0460 1F 01         [ 6]  389 	tfr	d,x
   0462 E6 89 C8 89   [ 8]  390 	ldb	_a_random,x
   0466 E7 E4         [ 4]  391 	stb	,s
   0468 E6 61         [ 5]  392 	ldb	1,s
   046A 4F            [ 2]  393 	clra		;zero_extendqihi: R:b -> R:d
   046B 1F 01         [ 6]  394 	tfr	d,x
   046D E6 89 C8 9D   [ 8]  395 	ldb	_a_random_compare,x
   0471 E1 E4         [ 4]  396 	cmpb	,s	;cmpqi:(R)
   0473 27 03         [ 3]  397 	beq	L21
   0475 BD 04 15      [ 8]  398 	jsr	_display_game_over
   0478                     399 L21:
   0478 E6 61         [ 5]  400 	ldb	1,s
   047A 4F            [ 2]  401 	clra		;zero_extendqihi: R:b -> R:d
   047B 1F 01         [ 6]  402 	tfr	d,x
   047D 6F 89 C8 9D   [10]  403 	clr	_a_random_compare,x
   0481 6C 61         [ 7]  404 	inc	1,s
   0483                     405 L20:
   0483 F6 C8 B2      [ 5]  406 	ldb	_RandomSequenceCounterDisplay
   0486 5C            [ 2]  407 	incb
   0487 E1 61         [ 5]  408 	cmpb	1,s	;cmpqi:
   0489 22 D2         [ 3]  409 	bhi	L22
   048B C6 01         [ 2]  410 	ldb	#1
   048D F7 C8 B4      [ 5]  411 	stb	_SequenceTime
   0490 F6 C8 B2      [ 5]  412 	ldb	_RandomSequenceCounterDisplay
   0493 5C            [ 2]  413 	incb
   0494 F7 C8 B2      [ 5]  414 	stb	_RandomSequenceCounterDisplay
   0497 7F C8 B6      [ 7]  415 	clr	_buttonspressedcounter
   049A C6 C8         [ 2]  416 	ldb	#-56
   049C F7 C8 B5      [ 5]  417 	stb	_counter
   049F 32 62         [ 5]  418 	leas	2,s
   04A1 39            [ 5]  419 	rts
                            420 	.globl	_joy_x
                            421 	.area	.data
   C8B7                     422 _joy_x:
   C8B7 00                  423 	.byte	0
                            424 	.globl	_joy_y
   C8B8                     425 _joy_y:
   C8B8 00                  426 	.byte	0
                            427 	.globl	_temppass
   C8B9                     428 _temppass:
   C8B9 00                  429 	.byte	0
                            430 	.area	.text
                            431 	.globl	_move_player
   04A2                     432 _move_player:
   04A2 BD F1 F8      [ 8]  433 	jsr	___Joy_Digital
   04A5 F6 C8 1B      [ 5]  434 	ldb	_Vec_Joy_1_X
   04A8 F7 C8 B7      [ 5]  435 	stb	_joy_x
   04AB F6 C8 1C      [ 5]  436 	ldb	_Vec_Joy_1_Y
   04AE F7 C8 B8      [ 5]  437 	stb	_joy_y
   04B1 F6 C8 B7      [ 5]  438 	ldb	_joy_x
   04B4 34 04         [ 6]  439 	pshs	b
   04B6 C6 A6         [ 2]  440 	ldb	#-90
   04B8 E7 E2         [ 6]  441 	stb	,-s
   04BA C6 BA         [ 2]  442 	ldb	#-70
   04BC BD 06 B8      [ 8]  443 	jsr	_print_signed_int
   04BF 32 62         [ 5]  444 	leas	2,s
   04C1 F6 C8 B8      [ 5]  445 	ldb	_joy_y
   04C4 34 04         [ 6]  446 	pshs	b
   04C6 C6 CE         [ 2]  447 	ldb	#-50
   04C8 E7 E2         [ 6]  448 	stb	,-s
   04CA C6 BA         [ 2]  449 	ldb	#-70
   04CC BD 06 B8      [ 8]  450 	jsr	_print_signed_int
   04CF 32 62         [ 5]  451 	leas	2,s
   04D1 F6 C8 B7      [ 5]  452 	ldb	_joy_x
   04D4 5D            [ 2]  453 	tstb
   04D5 2C 0B         [ 3]  454 	bge	L25
   04D7 F6 C8 B8      [ 5]  455 	ldb	_joy_y
   04DA 5D            [ 2]  456 	tstb
   04DB 2F 05         [ 3]  457 	ble	L25
   04DD C6 01         [ 2]  458 	ldb	#1
   04DF F7 C8 B9      [ 5]  459 	stb	_temppass
   04E2                     460 L25:
   04E2 F6 C8 B7      [ 5]  461 	ldb	_joy_x
   04E5 5D            [ 2]  462 	tstb
   04E6 26 0B         [ 3]  463 	bne	L26
   04E8 F6 C8 B8      [ 5]  464 	ldb	_joy_y
   04EB 5D            [ 2]  465 	tstb
   04EC 2F 05         [ 3]  466 	ble	L26
   04EE C6 02         [ 2]  467 	ldb	#2
   04F0 F7 C8 B9      [ 5]  468 	stb	_temppass
   04F3                     469 L26:
   04F3 F6 C8 B7      [ 5]  470 	ldb	_joy_x
   04F6 5D            [ 2]  471 	tstb
   04F7 2F 0B         [ 3]  472 	ble	L27
   04F9 F6 C8 B8      [ 5]  473 	ldb	_joy_y
   04FC 5D            [ 2]  474 	tstb
   04FD 2F 05         [ 3]  475 	ble	L27
   04FF C6 03         [ 2]  476 	ldb	#3
   0501 F7 C8 B9      [ 5]  477 	stb	_temppass
   0504                     478 L27:
   0504 F6 C8 B7      [ 5]  479 	ldb	_joy_x
   0507 5D            [ 2]  480 	tstb
   0508 2C 0B         [ 3]  481 	bge	L28
   050A F6 C8 B8      [ 5]  482 	ldb	_joy_y
   050D 5D            [ 2]  483 	tstb
   050E 26 05         [ 3]  484 	bne	L28
   0510 C6 04         [ 2]  485 	ldb	#4
   0512 F7 C8 B9      [ 5]  486 	stb	_temppass
   0515                     487 L28:
   0515 F6 C8 B7      [ 5]  488 	ldb	_joy_x
   0518 5D            [ 2]  489 	tstb
   0519 26 0B         [ 3]  490 	bne	L29
   051B F6 C8 B8      [ 5]  491 	ldb	_joy_y
   051E 5D            [ 2]  492 	tstb
   051F 26 05         [ 3]  493 	bne	L29
   0521 C6 05         [ 2]  494 	ldb	#5
   0523 F7 C8 B9      [ 5]  495 	stb	_temppass
   0526                     496 L29:
   0526 F6 C8 B7      [ 5]  497 	ldb	_joy_x
   0529 5D            [ 2]  498 	tstb
   052A 2F 0B         [ 3]  499 	ble	L30
   052C F6 C8 B8      [ 5]  500 	ldb	_joy_y
   052F 5D            [ 2]  501 	tstb
   0530 26 05         [ 3]  502 	bne	L30
   0532 C6 06         [ 2]  503 	ldb	#6
   0534 F7 C8 B9      [ 5]  504 	stb	_temppass
   0537                     505 L30:
   0537 F6 C8 B7      [ 5]  506 	ldb	_joy_x
   053A 5D            [ 2]  507 	tstb
   053B 2C 0B         [ 3]  508 	bge	L31
   053D F6 C8 B8      [ 5]  509 	ldb	_joy_y
   0540 5D            [ 2]  510 	tstb
   0541 2C 05         [ 3]  511 	bge	L31
   0543 C6 07         [ 2]  512 	ldb	#7
   0545 F7 C8 B9      [ 5]  513 	stb	_temppass
   0548                     514 L31:
   0548 F6 C8 B7      [ 5]  515 	ldb	_joy_x
   054B 5D            [ 2]  516 	tstb
   054C 26 0B         [ 3]  517 	bne	L32
   054E F6 C8 B8      [ 5]  518 	ldb	_joy_y
   0551 5D            [ 2]  519 	tstb
   0552 2C 05         [ 3]  520 	bge	L32
   0554 C6 08         [ 2]  521 	ldb	#8
   0556 F7 C8 B9      [ 5]  522 	stb	_temppass
   0559                     523 L32:
   0559 F6 C8 B7      [ 5]  524 	ldb	_joy_x
   055C 5D            [ 2]  525 	tstb
   055D 2F 0B         [ 3]  526 	ble	L33
   055F F6 C8 B8      [ 5]  527 	ldb	_joy_y
   0562 5D            [ 2]  528 	tstb
   0563 2C 05         [ 3]  529 	bge	L33
   0565 C6 09         [ 2]  530 	ldb	#9
   0567 F7 C8 B9      [ 5]  531 	stb	_temppass
   056A                     532 L33:
   056A F6 C8 B9      [ 5]  533 	ldb	_temppass
   056D BD 00 D8      [ 8]  534 	jsr	_draw_cross
   0570 39            [ 5]  535 	rts
                            536 	.globl	_read_player_input
   0571                     537 _read_player_input:
   0571 32 7E         [ 5]  538 	leas	-2,s
   0573 BD F1 BA      [ 8]  539 	jsr	___Read_Btns
   0576 F6 C8 11      [ 5]  540 	ldb	_Vec_Buttons
   0579 C4 01         [ 2]  541 	andb	#1
   057B 5D            [ 2]  542 	tstb
   057C 27 1C         [ 3]  543 	beq	L37
   057E F6 C8 B6      [ 5]  544 	ldb	_buttonspressedcounter
   0581 E7 E4         [ 4]  545 	stb	,s
   0583 F6 C8 B9      [ 5]  546 	ldb	_temppass
   0586 E7 61         [ 5]  547 	stb	1,s
   0588 E6 E4         [ 4]  548 	ldb	,s
   058A 4F            [ 2]  549 	clra		;zero_extendqihi: R:b -> R:d
   058B 1F 01         [ 6]  550 	tfr	d,x
   058D E6 61         [ 5]  551 	ldb	1,s
   058F E7 89 C8 9D   [ 8]  552 	stb	_a_random_compare,x
   0593 F6 C8 B6      [ 5]  553 	ldb	_buttonspressedcounter
   0596 5C            [ 2]  554 	incb
   0597 F7 C8 B6      [ 5]  555 	stb	_buttonspressedcounter
   059A                     556 L37:
   059A 32 62         [ 5]  557 	leas	2,s
   059C 39            [ 5]  558 	rts
                            559 	.globl	_execute_repeat_sequence_state
   059D                     560 _execute_repeat_sequence_state:
   059D BD 01 29      [ 8]  561 	jsr	_Display_Gamefield
   05A0 BD 03 17      [ 8]  562 	jsr	_Display_TimeLeft
   05A3 BD 04 A2      [ 8]  563 	jsr	_move_player
   05A6 BD 05 71      [ 8]  564 	jsr	_read_player_input
   05A9 BD 05 BA      [ 8]  565 	jsr	_check_successfully_repeated
   05AC 39            [ 5]  566 	rts
                            567 	.globl	_execute_display_sequence_state
   05AD                     568 _execute_display_sequence_state:
   05AD BD 01 29      [ 8]  569 	jsr	_Display_Gamefield
   05B0 BD 03 5A      [ 8]  570 	jsr	_Display_RandomSequence
   05B3 8E 05 9D      [ 3]  571 	ldx	#_execute_repeat_sequence_state
   05B6 BF C8 BE      [ 6]  572 	stx	_execute_game_playing_state
   05B9 39            [ 5]  573 	rts
                            574 	.globl	_check_successfully_repeated
   05BA                     575 _check_successfully_repeated:
   05BA 32 7B         [ 5]  576 	leas	-5,s
   05BC F6 C8 B6      [ 5]  577 	ldb	_buttonspressedcounter
   05BF E7 64         [ 5]  578 	stb	4,s
   05C1 20 1E         [ 3]  579 	bra	L43
   05C3                     580 L45:
   05C3 E6 64         [ 5]  581 	ldb	4,s
   05C5 4F            [ 2]  582 	clra		;zero_extendqihi: R:b -> R:d
   05C6 1F 01         [ 6]  583 	tfr	d,x
   05C8 E6 89 C8 89   [ 8]  584 	ldb	_a_random,x
   05CC E7 62         [ 5]  585 	stb	2,s
   05CE E6 64         [ 5]  586 	ldb	4,s
   05D0 4F            [ 2]  587 	clra		;zero_extendqihi: R:b -> R:d
   05D1 1F 01         [ 6]  588 	tfr	d,x
   05D3 E6 89 C8 9D   [ 8]  589 	ldb	_a_random_compare,x
   05D7 E1 62         [ 5]  590 	cmpb	2,s	;cmpqi:(R)
   05D9 27 06         [ 3]  591 	beq	L43
   05DB 8E 04 15      [ 3]  592 	ldx	#_display_game_over
   05DE BF C8 BE      [ 6]  593 	stx	_execute_game_playing_state
   05E1                     594 L43:
   05E1 E6 64         [ 5]  595 	ldb	4,s
   05E3 E7 61         [ 5]  596 	stb	1,s
   05E5 6D 61         [ 7]  597 	tst	1,s
   05E7 27 04         [ 3]  598 	beq	L44
   05E9 C6 01         [ 2]  599 	ldb	#1
   05EB E7 61         [ 5]  600 	stb	1,s
   05ED                     601 L44:
   05ED E6 61         [ 5]  602 	ldb	1,s
   05EF 6A 64         [ 7]  603 	dec	4,s
   05F1 5D            [ 2]  604 	tstb
   05F2 26 CF         [ 3]  605 	bne	L45
   05F4 F6 C8 B2      [ 5]  606 	ldb	_RandomSequenceCounterDisplay
   05F7 E7 E4         [ 4]  607 	stb	,s
   05F9 E6 E4         [ 4]  608 	ldb	,s
   05FB 5C            [ 2]  609 	incb
   05FC E7 63         [ 5]  610 	stb	3,s
   05FE F6 C8 B6      [ 5]  611 	ldb	_buttonspressedcounter
   0601 E1 63         [ 5]  612 	cmpb	3,s	;cmpqi:(R)
   0603 26 15         [ 3]  613 	bne	L47
   0605 F6 C8 B2      [ 5]  614 	ldb	_RandomSequenceCounterDisplay
   0608 5C            [ 2]  615 	incb
   0609 F7 C8 B2      [ 5]  616 	stb	_RandomSequenceCounterDisplay
   060C 7F C8 B6      [ 7]  617 	clr	_buttonspressedcounter
   060F C6 C8         [ 2]  618 	ldb	#-56
   0611 F7 C8 B5      [ 5]  619 	stb	_counter
   0614 8E 05 AD      [ 3]  620 	ldx	#_execute_display_sequence_state
   0617 BF C8 BE      [ 6]  621 	stx	_execute_game_playing_state
   061A                     622 L47:
   061A 32 65         [ 5]  623 	leas	5,s
   061C 39            [ 5]  624 	rts
                            625 	.globl	_level_init
   061D                     626 _level_init:
   061D C6 01         [ 2]  627 	ldb	#1
   061F F7 C8 1F      [ 5]  628 	stb	_Vec_Joy_Mux_1_X
   0622 C6 03         [ 2]  629 	ldb	#3
   0624 F7 C8 20      [ 5]  630 	stb	_Vec_Joy_Mux_1_Y
   0627 7F C8 21      [ 7]  631 	clr	_Vec_Joy_Mux_2_X
   062A 7F C8 22      [ 7]  632 	clr	_Vec_Joy_Mux_2_Y
   062D BD 02 C7      [ 8]  633 	jsr	_RandomNumberGenerator
   0630 7F C8 B3      [ 7]  634 	clr	_current_level
   0633 8E 05 AD      [ 3]  635 	ldx	#_execute_display_sequence_state
   0636 BF C8 BE      [ 6]  636 	stx	_execute_game_playing_state
   0639 39            [ 5]  637 	rts
                            638 	.globl	_level_play
   063A                     639 _level_play:
   063A 32 7C         [ 5]  640 	leas	-4,s
   063C 20 25         [ 3]  641 	bra	L51
   063E                     642 L52:
   063E BD F1 AF      [ 8]  643 	jsr	___DP_to_C8
   0641 BE C8 BA      [ 6]  644 	ldx	_current_explosion
   0644 AF E4         [ 5]  645 	stx	,s
   0646 AE E4         [ 5]  646 	ldx	,s
   0648 BD 06 A6      [ 8]  647 	jsr	__Explosion_Snd
   064B BE C8 BC      [ 6]  648 	ldx	_current_music
   064E AF 62         [ 6]  649 	stx	2,s
   0650 AE 62         [ 6]  650 	ldx	2,s
   0652 BD 06 AF      [ 8]  651 	jsr	__Init_Music_chk
   0655 BD F1 92      [ 8]  652 	jsr	___Wait_Recal
   0658 BD 07 34      [ 8]  653 	jsr	__Do_Sound
   065B BD F2 A5      [ 8]  654 	jsr	___Intensity_5F
   065E BE C8 BE      [ 6]  655 	ldx	_execute_game_playing_state
   0661 AD 84         [ 7]  656 	jsr	,x
   0663                     657 L51:
   0663 F6 C8 B3      [ 5]  658 	ldb	_current_level
   0666 5D            [ 2]  659 	tstb
   0667 27 D5         [ 3]  660 	beq	L52
   0669 32 64         [ 5]  661 	leas	4,s
   066B 39            [ 5]  662 	rts
ASxxxx Assembler V05.50  (Motorola 6809)                                Page 1
Hexadecimal [16-Bits]                                 Mon May 12 00:30:09 2025

Symbol Table

    .__.$$$.       =   2710 L   |     .__.ABS.       =   0000 G
    .__.CPU.       =   0000 L   |     .__.H$L.       =   0001 L
  2 L10                019F R   |   2 L11                0189 R
  2 L12                0114 R   |   2 L16                0203 R
  2 L17                01D0 R   |   2 L2                 00AB R
  2 L20                0236 R   |   2 L21                022B R
  2 L22                0210 R   |   2 L25                0295 R
  2 L26                02A6 R   |   2 L27                02B7 R
  2 L28                02C8 R   |   2 L29                02D9 R
  2 L3                 0080 R   |   2 L30                02EA R
  2 L31                02FB R   |   2 L32                030C R
  2 L33                031D R   |   2 L37                034D R
  2 L43                0394 R   |   2 L44                03A0 R
  2 L45                0376 R   |   2 L47                03CD R
  2 L51                0416 R   |   2 L52                03F1 R
  2 L7                 00E4 R   |   2 L8                 00F4 R
  2 LC0                00B4 R   |   2 LC1                00BF R
  2 LC2                00F5 R   |   2 LC3                0103 R
  2 LC4                01AD R   |   2 _Brainleft         005C GR
  2 _Brainright        003E GR  |     _Display_Gamef     **** GX
  2 _Display_Rando     010D GR  |   2 _Display_TimeL     00CA GR
  2 _Gamefield         0023 GR  |     _Loadingbar        **** GX
  2 _Positions_Cur     0000 GR  |   2 _RandomNumberG     007A GR
  3 _RandomSequenc     0028 GR  |   3 _RandomSequenc     0029 GR
  3 _SequenceTime      002B GR  |     _Vec_Buttons       **** GX
    _Vec_Joy_1_X       **** GX  |     _Vec_Joy_1_Y       **** GX
    _Vec_Joy_Mux_1     **** GX  |     _Vec_Joy_Mux_1     **** GX
    _Vec_Joy_Mux_2     **** GX  |     _Vec_Joy_Mux_2     **** GX
    __Do_Sound         **** GX  |     __Explosion_Sn     **** GX
    __Init_Music_c     **** GX  |     ___DP_to_C8        **** GX
    ___Intensity_5     **** GX  |     ___Joy_Digital     **** GX
    ___Read_Btns       **** GX  |     ___Wait_Recal      **** GX
  3 _a_random          0000 GR  |   3 _a_random_comp     0014 GR
  3 _buttonspresse     002D GR  |   2 _check_success     036D GR
  3 _counter           002C GR  |   2 _cross             0014 GR
    _current_explo     **** GX  |   3 _current_level     002A GR
    _current_music     **** GX  |   2 _display_game_     01C8 GR
    _draw_cross        **** GX  |   2 _execute_displ     0360 GR
  4 _execute_game_     0000 GR  |   2 _execute_repea     0350 GR
  2 _is_pattern_su     020A GR  |   3 _joy_x             002E GR
  3 _joy_y             002F GR  |   2 _level_init        03D0 GR
  2 _level_play        03ED GR  |   2 _move_player       0255 GR
    _play_tune         **** GX  |     _print_signed_     **** GX
    _print_string      **** GX  |   2 _read_player_i     0324 GR
  3 _temppass          0030 GR  |     _umodhi3           **** GX

ASxxxx Assembler V05.50  (Motorola 6809)                                Page 2
Hexadecimal [16-Bits]                                 Mon May 12 00:30:09 2025

Area Table

[_CSEG]
   0 _CODE            size    0   flags C080
   2 .text            size  41F   flags  100
   3 .data            size   31   flags  100
   4 .bss             size    2   flags    0
[_DSEG]
   1 _DATA            size    0   flags C0C0

