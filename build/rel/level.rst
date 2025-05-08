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
   02E2 BD 06 1C      [ 8]  188 	jsr	_umodhi3
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
                            208 	.area	.text
                            209 	.globl	_level_init
   0301                     210 _level_init:
   0301 BD 02 C7      [ 8]  211 	jsr	_RandomNumberGenerator
   0304 7F C8 B3      [ 7]  212 	clr	_current_level
   0307 39            [ 5]  213 	rts
                            214 	.globl	_SequenceTime
                            215 	.area	.data
   C8B4                     216 _SequenceTime:
   C8B4 01                  217 	.byte	1
                            218 	.globl	_counter
   C8B5                     219 _counter:
   C8B5 00                  220 	.byte	0
                            221 	.globl	_counterw
   C8B6                     222 _counterw:
   C8B6 03                  223 	.byte	3
                            224 	.area	.text
   0308                     225 LC0:
   0308 54 49 4D 45 20 4C   226 	.byte	84,73,77,69,32,76,69,70
        45 46
   0310 54 80 00            227 	.byte	84,-128,0
   0313                     228 LC1:
   0313 47 41 4D 45 20 4F   229 	.byte	71,65,77,69,32,79,86,69
        56 45
   031B 52 80 00            230 	.byte	82,-128,0
                            231 	.globl	_Display_TimeLeft
   031E                     232 _Display_TimeLeft:
   031E C6 C4         [ 2]  233 	ldb	#-60
   0320 E7 E2         [ 6]  234 	stb	,-s
   0322 8E 03 08      [ 3]  235 	ldx	#LC0
   0325 C6 64         [ 2]  236 	ldb	#100
   0327 BD 05 E0      [ 8]  237 	jsr	_print_string
   032A 32 61         [ 5]  238 	leas	1,s
   032C F6 C8 B5      [ 5]  239 	ldb	_counter
   032F BD 01 63      [ 8]  240 	jsr	_Loadingbar
   0332 F6 C8 B6      [ 5]  241 	ldb	_counterw
   0335 5A            [ 2]  242 	decb
   0336 F7 C8 B6      [ 5]  243 	stb	_counterw
   0339 F6 C8 B6      [ 5]  244 	ldb	_counterw
   033C 5D            [ 2]  245 	tstb
   033D 26 0C         [ 3]  246 	bne	L8
   033F F6 C8 B5      [ 5]  247 	ldb	_counter
   0342 5A            [ 2]  248 	decb
   0343 F7 C8 B5      [ 5]  249 	stb	_counter
   0346 C6 03         [ 2]  250 	ldb	#3
   0348 F7 C8 B6      [ 5]  251 	stb	_counterw
   034B                     252 L8:
   034B F6 C8 B5      [ 5]  253 	ldb	_counter
   034E 5D            [ 2]  254 	tstb
   034F 26 10         [ 3]  255 	bne	L11
   0351                     256 L10:
   0351 C6 C4         [ 2]  257 	ldb	#-60
   0353 E7 E2         [ 6]  258 	stb	,-s
   0355 8E 03 13      [ 3]  259 	ldx	#LC1
   0358 C6 64         [ 2]  260 	ldb	#100
   035A BD 05 E0      [ 8]  261 	jsr	_print_string
   035D 32 61         [ 5]  262 	leas	1,s
   035F 20 F0         [ 3]  263 	bra	L10
   0361                     264 L11:
   0361 39            [ 5]  265 	rts
   0362                     266 LC2:
   0362 52 45 4D 45 4D 42   267 	.byte	82,69,77,69,77,66,69,82
        45 52
   036A 20 54 48 45 80 00   268 	.byte	32,84,72,69,-128,0
   0370                     269 LC3:
   0370 53 45 51 55 45 4E   270 	.byte	83,69,81,85,69,78,67,69
        43 45
   0378 80 00               271 	.byte	-128,0
                            272 	.globl	_Display_RandomSequence
   037A                     273 _Display_RandomSequence:
   037A 32 7D         [ 5]  274 	leas	-3,s
   037C 6F 62         [ 7]  275 	clr	2,s
   037E 16 00 8B      [ 5]  276 	lbra	L13
   0381                     277 L15:
   0381 C6 C8         [ 2]  278 	ldb	#-56
   0383 F7 C8 B5      [ 5]  279 	stb	_counter
   0386 BD F1 92      [ 8]  280 	jsr	___Wait_Recal
   0389 BD 01 29      [ 8]  281 	jsr	_Display_Gamefield
   038C C6 B5         [ 2]  282 	ldb	#-75
   038E E7 E2         [ 6]  283 	stb	,-s
   0390 8E 03 62      [ 3]  284 	ldx	#LC2
   0393 C6 64         [ 2]  285 	ldb	#100
   0395 BD 05 E0      [ 8]  286 	jsr	_print_string
   0398 32 61         [ 5]  287 	leas	1,s
   039A C6 CE         [ 2]  288 	ldb	#-50
   039C E7 E2         [ 6]  289 	stb	,-s
   039E 8E 03 70      [ 3]  290 	ldx	#LC3
   03A1 C6 50         [ 2]  291 	ldb	#80
   03A3 BD 05 E0      [ 8]  292 	jsr	_print_string
   03A6 32 61         [ 5]  293 	leas	1,s
   03A8 E6 62         [ 5]  294 	ldb	2,s
   03AA 4F            [ 2]  295 	clra		;zero_extendqihi: R:b -> R:d
   03AB 1F 01         [ 6]  296 	tfr	d,x
   03AD E6 89 C8 89   [ 8]  297 	ldb	_a_random,x
   03B1 BD 00 D8      [ 8]  298 	jsr	_draw_cross
   03B4 E6 62         [ 5]  299 	ldb	2,s
   03B6 5C            [ 2]  300 	incb
   03B7 86 64         [ 2]  301 	lda	#100	;umulqihi3
   03B9 3D            [11]  302 	mul
                            303 		;movlsbqihi: D->B
   03BA 4F            [ 2]  304 	clra		;zero_extendqihi: R:b -> R:d
   03BB ED E4         [ 5]  305 	std	,s
   03BD C6 C8         [ 2]  306 	ldb	#-56
   03BF E7 E2         [ 6]  307 	stb	,-s
   03C1 AE 61         [ 6]  308 	ldx	1,s
   03C3 C6 01         [ 2]  309 	ldb	#1
   03C5 BD 06 3F      [ 8]  310 	jsr	_play_tune
   03C8 32 61         [ 5]  311 	leas	1,s
   03CA E6 62         [ 5]  312 	ldb	2,s
   03CC 5C            [ 2]  313 	incb
   03CD 86 64         [ 2]  314 	lda	#100	;umulqihi3
   03CF 3D            [11]  315 	mul
                            316 		;movlsbqihi: D->B
   03D0 4F            [ 2]  317 	clra		;zero_extendqihi: R:b -> R:d
   03D1 ED E4         [ 5]  318 	std	,s
   03D3 C6 C8         [ 2]  319 	ldb	#-56
   03D5 E7 E2         [ 6]  320 	stb	,-s
   03D7 AE 61         [ 6]  321 	ldx	1,s
   03D9 C6 02         [ 2]  322 	ldb	#2
   03DB BD 06 3F      [ 8]  323 	jsr	_play_tune
   03DE 32 61         [ 5]  324 	leas	1,s
   03E0 E6 62         [ 5]  325 	ldb	2,s
   03E2 5C            [ 2]  326 	incb
   03E3 86 64         [ 2]  327 	lda	#100	;umulqihi3
   03E5 3D            [11]  328 	mul
                            329 		;movlsbqihi: D->B
   03E6 4F            [ 2]  330 	clra		;zero_extendqihi: R:b -> R:d
   03E7 ED E4         [ 5]  331 	std	,s
   03E9 C6 C8         [ 2]  332 	ldb	#-56
   03EB E7 E2         [ 6]  333 	stb	,-s
   03ED AE 61         [ 6]  334 	ldx	1,s
   03EF C6 03         [ 2]  335 	ldb	#3
   03F1 BD 06 3F      [ 8]  336 	jsr	_play_tune
   03F4 32 61         [ 5]  337 	leas	1,s
   03F6                     338 L14:
   03F6 F6 C8 B1      [ 5]  339 	ldb	_RandomSequenceCounter
   03F9 5A            [ 2]  340 	decb
   03FA F7 C8 B1      [ 5]  341 	stb	_RandomSequenceCounter
   03FD F6 C8 B1      [ 5]  342 	ldb	_RandomSequenceCounter
   0400 5D            [ 2]  343 	tstb
   0401 10 26 FF 7C   [ 6]  344 	lbne	L15
   0405 C6 1E         [ 2]  345 	ldb	#30
   0407 F7 C8 B1      [ 5]  346 	stb	_RandomSequenceCounter
   040A 6C 62         [ 7]  347 	inc	2,s
   040C                     348 L13:
   040C F6 C8 B2      [ 5]  349 	ldb	_RandomSequenceCounterDisplay
   040F 5C            [ 2]  350 	incb
   0410 E1 62         [ 5]  351 	cmpb	2,s	;cmpqi:
   0412 22 E2         [ 3]  352 	bhi	L14
   0414 7F C8 B4      [ 7]  353 	clr	_SequenceTime
   0417 32 63         [ 5]  354 	leas	3,s
   0419 39            [ 5]  355 	rts
                            356 	.globl	_buttonspressedcounter
                            357 	.area	.data
   C8B7                     358 _buttonspressedcounter:
   C8B7 00                  359 	.byte	0
                            360 	.area	.text
                            361 	.globl	_is_pattern_succesfull
   041A                     362 _is_pattern_succesfull:
   041A 32 7E         [ 5]  363 	leas	-2,s
   041C 6F 61         [ 7]  364 	clr	1,s
   041E 16 00 5F      [ 5]  365 	lbra	L19
   0421                     366 L22:
   0421 E6 61         [ 5]  367 	ldb	1,s
   0423 4F            [ 2]  368 	clra		;zero_extendqihi: R:b -> R:d
   0424 1F 01         [ 6]  369 	tfr	d,x
   0426 E6 89 C8 89   [ 8]  370 	ldb	_a_random,x
   042A E7 E4         [ 4]  371 	stb	,s
   042C E6 61         [ 5]  372 	ldb	1,s
   042E 4F            [ 2]  373 	clra		;zero_extendqihi: R:b -> R:d
   042F 1F 01         [ 6]  374 	tfr	d,x
   0431 E6 89 C8 9D   [ 8]  375 	ldb	_a_random_compare,x
   0435 E1 E4         [ 4]  376 	cmpb	,s	;cmpqi:(R)
   0437 27 3C         [ 3]  377 	beq	L20
   0439                     378 L21:
   0439 C6 C4         [ 2]  379 	ldb	#-60
   043B E7 E2         [ 6]  380 	stb	,-s
   043D 8E 03 13      [ 3]  381 	ldx	#LC1
   0440 C6 64         [ 2]  382 	ldb	#100
   0442 BD 05 E0      [ 8]  383 	jsr	_print_string
   0445 32 61         [ 5]  384 	leas	1,s
   0447 E6 61         [ 5]  385 	ldb	1,s
   0449 4F            [ 2]  386 	clra		;zero_extendqihi: R:b -> R:d
   044A 1F 01         [ 6]  387 	tfr	d,x
   044C E6 89 C8 89   [ 8]  388 	ldb	_a_random,x
   0450 34 04         [ 6]  389 	pshs	b
   0452 C6 CE         [ 2]  390 	ldb	#-50
   0454 E7 E2         [ 6]  391 	stb	,-s
   0456 C6 BA         [ 2]  392 	ldb	#-70
   0458 BD 06 A4      [ 8]  393 	jsr	_print_unsigned_int
   045B 32 62         [ 5]  394 	leas	2,s
   045D E6 61         [ 5]  395 	ldb	1,s
   045F 4F            [ 2]  396 	clra		;zero_extendqihi: R:b -> R:d
   0460 1F 01         [ 6]  397 	tfr	d,x
   0462 E6 89 C8 9D   [ 8]  398 	ldb	_a_random_compare,x
   0466 34 04         [ 6]  399 	pshs	b
   0468 C6 CE         [ 2]  400 	ldb	#-50
   046A E7 E2         [ 6]  401 	stb	,-s
   046C C6 CE         [ 2]  402 	ldb	#-50
   046E BD 06 A4      [ 8]  403 	jsr	_print_unsigned_int
   0471 32 62         [ 5]  404 	leas	2,s
   0473 20 C4         [ 3]  405 	bra	L21
   0475                     406 L20:
   0475 E6 61         [ 5]  407 	ldb	1,s
   0477 4F            [ 2]  408 	clra		;zero_extendqihi: R:b -> R:d
   0478 1F 01         [ 6]  409 	tfr	d,x
   047A 6F 89 C8 9D   [10]  410 	clr	_a_random_compare,x
   047E 6C 61         [ 7]  411 	inc	1,s
   0480                     412 L19:
   0480 F6 C8 B2      [ 5]  413 	ldb	_RandomSequenceCounterDisplay
   0483 5C            [ 2]  414 	incb
   0484 E1 61         [ 5]  415 	cmpb	1,s	;cmpqi:
   0486 10 22 FF 97   [ 6]  416 	lbhi	L22
   048A C6 01         [ 2]  417 	ldb	#1
   048C F7 C8 B4      [ 5]  418 	stb	_SequenceTime
   048F F6 C8 B2      [ 5]  419 	ldb	_RandomSequenceCounterDisplay
   0492 5C            [ 2]  420 	incb
   0493 F7 C8 B2      [ 5]  421 	stb	_RandomSequenceCounterDisplay
   0496 7F C8 B7      [ 7]  422 	clr	_buttonspressedcounter
   0499 C6 C8         [ 2]  423 	ldb	#-56
   049B F7 C8 B5      [ 5]  424 	stb	_counter
   049E 32 62         [ 5]  425 	leas	2,s
   04A0 39            [ 5]  426 	rts
                            427 	.area	.bss
   C8BD                     428 _joy_x:	.blkb	1
   C8BE                     429 _joy_y:	.blkb	1
                            430 	.globl	_temppass
                            431 	.area	.data
   C8B8                     432 _temppass:
   C8B8 00                  433 	.byte	0
                            434 	.area	.text
                            435 	.globl	_move_player
   04A1                     436 _move_player:
   04A1 32 7D         [ 5]  437 	leas	-3,s
   04A3 BD F1 F8      [ 8]  438 	jsr	___Joy_Digital
   04A6 F6 C8 1B      [ 5]  439 	ldb	_Vec_Joy_1_X
   04A9 F7 C8 BD      [ 5]  440 	stb	_joy_x
   04AC F6 C8 1C      [ 5]  441 	ldb	_Vec_Joy_1_Y
   04AF F7 C8 BE      [ 5]  442 	stb	_joy_y
   04B2 F6 C8 BD      [ 5]  443 	ldb	_joy_x
   04B5 5D            [ 2]  444 	tstb
   04B6 2C 0B         [ 3]  445 	bge	L25
   04B8 F6 C8 BE      [ 5]  446 	ldb	_joy_y
   04BB 5D            [ 2]  447 	tstb
   04BC 2F 05         [ 3]  448 	ble	L25
   04BE C6 01         [ 2]  449 	ldb	#1
   04C0 F7 C8 B8      [ 5]  450 	stb	_temppass
   04C3                     451 L25:
   04C3 F6 C8 BD      [ 5]  452 	ldb	_joy_x
   04C6 5D            [ 2]  453 	tstb
   04C7 26 0B         [ 3]  454 	bne	L26
   04C9 F6 C8 BE      [ 5]  455 	ldb	_joy_y
   04CC 5D            [ 2]  456 	tstb
   04CD 2F 05         [ 3]  457 	ble	L26
   04CF C6 02         [ 2]  458 	ldb	#2
   04D1 F7 C8 B8      [ 5]  459 	stb	_temppass
   04D4                     460 L26:
   04D4 F6 C8 BD      [ 5]  461 	ldb	_joy_x
   04D7 5D            [ 2]  462 	tstb
   04D8 2F 0B         [ 3]  463 	ble	L27
   04DA F6 C8 BE      [ 5]  464 	ldb	_joy_y
   04DD 5D            [ 2]  465 	tstb
   04DE 2F 05         [ 3]  466 	ble	L27
   04E0 C6 03         [ 2]  467 	ldb	#3
   04E2 F7 C8 B8      [ 5]  468 	stb	_temppass
   04E5                     469 L27:
   04E5 F6 C8 BD      [ 5]  470 	ldb	_joy_x
   04E8 5D            [ 2]  471 	tstb
   04E9 2C 0B         [ 3]  472 	bge	L28
   04EB F6 C8 BE      [ 5]  473 	ldb	_joy_y
   04EE 5D            [ 2]  474 	tstb
   04EF 26 05         [ 3]  475 	bne	L28
   04F1 C6 04         [ 2]  476 	ldb	#4
   04F3 F7 C8 B8      [ 5]  477 	stb	_temppass
   04F6                     478 L28:
   04F6 F6 C8 BD      [ 5]  479 	ldb	_joy_x
   04F9 5D            [ 2]  480 	tstb
   04FA 26 0B         [ 3]  481 	bne	L29
   04FC F6 C8 BE      [ 5]  482 	ldb	_joy_y
   04FF 5D            [ 2]  483 	tstb
   0500 26 05         [ 3]  484 	bne	L29
   0502 C6 05         [ 2]  485 	ldb	#5
   0504 F7 C8 B8      [ 5]  486 	stb	_temppass
   0507                     487 L29:
   0507 F6 C8 BD      [ 5]  488 	ldb	_joy_x
   050A 5D            [ 2]  489 	tstb
   050B 2F 0B         [ 3]  490 	ble	L30
   050D F6 C8 BE      [ 5]  491 	ldb	_joy_y
   0510 5D            [ 2]  492 	tstb
   0511 26 05         [ 3]  493 	bne	L30
   0513 C6 06         [ 2]  494 	ldb	#6
   0515 F7 C8 B8      [ 5]  495 	stb	_temppass
   0518                     496 L30:
   0518 F6 C8 BD      [ 5]  497 	ldb	_joy_x
   051B 5D            [ 2]  498 	tstb
   051C 2C 0B         [ 3]  499 	bge	L31
   051E F6 C8 BE      [ 5]  500 	ldb	_joy_y
   0521 5D            [ 2]  501 	tstb
   0522 2C 05         [ 3]  502 	bge	L31
   0524 C6 07         [ 2]  503 	ldb	#7
   0526 F7 C8 B8      [ 5]  504 	stb	_temppass
   0529                     505 L31:
   0529 F6 C8 BD      [ 5]  506 	ldb	_joy_x
   052C 5D            [ 2]  507 	tstb
   052D 26 0B         [ 3]  508 	bne	L32
   052F F6 C8 BE      [ 5]  509 	ldb	_joy_y
   0532 5D            [ 2]  510 	tstb
   0533 2C 05         [ 3]  511 	bge	L32
   0535 C6 08         [ 2]  512 	ldb	#8
   0537 F7 C8 B8      [ 5]  513 	stb	_temppass
   053A                     514 L32:
   053A F6 C8 BD      [ 5]  515 	ldb	_joy_x
   053D 5D            [ 2]  516 	tstb
   053E 2F 0B         [ 3]  517 	ble	L33
   0540 F6 C8 BE      [ 5]  518 	ldb	_joy_y
   0543 5D            [ 2]  519 	tstb
   0544 2C 05         [ 3]  520 	bge	L33
   0546 C6 09         [ 2]  521 	ldb	#9
   0548 F7 C8 B8      [ 5]  522 	stb	_temppass
   054B                     523 L33:
   054B F6 C8 B8      [ 5]  524 	ldb	_temppass
   054E BD 00 D8      [ 8]  525 	jsr	_draw_cross
   0551 BD F1 BA      [ 8]  526 	jsr	___Read_Btns
   0554 F6 C8 11      [ 5]  527 	ldb	_Vec_Buttons
   0557 C4 01         [ 2]  528 	andb	#1
   0559 5D            [ 2]  529 	tstb
   055A 27 30         [ 3]  530 	beq	L35
   055C F6 C8 B7      [ 5]  531 	ldb	_buttonspressedcounter
   055F E7 E4         [ 4]  532 	stb	,s
   0561 F6 C8 B8      [ 5]  533 	ldb	_temppass
   0564 E7 61         [ 5]  534 	stb	1,s
   0566 E6 E4         [ 4]  535 	ldb	,s
   0568 4F            [ 2]  536 	clra		;zero_extendqihi: R:b -> R:d
   0569 1F 01         [ 6]  537 	tfr	d,x
   056B E6 61         [ 5]  538 	ldb	1,s
   056D E7 89 C8 9D   [ 8]  539 	stb	_a_random_compare,x
   0571 F6 C8 B7      [ 5]  540 	ldb	_buttonspressedcounter
   0574 5C            [ 2]  541 	incb
   0575 F7 C8 B7      [ 5]  542 	stb	_buttonspressedcounter
   0578 F6 C8 B2      [ 5]  543 	ldb	_RandomSequenceCounterDisplay
   057B E7 E4         [ 4]  544 	stb	,s
   057D E6 E4         [ 4]  545 	ldb	,s
   057F 5C            [ 2]  546 	incb
   0580 E7 62         [ 5]  547 	stb	2,s
   0582 F6 C8 B7      [ 5]  548 	ldb	_buttonspressedcounter
   0585 E1 62         [ 5]  549 	cmpb	2,s	;cmpqi:(R)
   0587 26 03         [ 3]  550 	bne	L35
   0589 BD 04 1A      [ 8]  551 	jsr	_is_pattern_succesfull
   058C                     552 L35:
   058C 32 63         [ 5]  553 	leas	3,s
   058E 39            [ 5]  554 	rts
                            555 	.globl	_level_play
   058F                     556 _level_play:
   058F 32 7C         [ 5]  557 	leas	-4,s
   0591 20 34         [ 3]  558 	bra	L37
   0593                     559 L39:
   0593 BD F1 AF      [ 8]  560 	jsr	___DP_to_C8
   0596 BE C8 B9      [ 6]  561 	ldx	_current_explosion
   0599 AF E4         [ 5]  562 	stx	,s
   059B AE E4         [ 5]  563 	ldx	,s
   059D BD 06 0A      [ 8]  564 	jsr	__Explosion_Snd
   05A0 BE C8 BB      [ 6]  565 	ldx	_current_music
   05A3 AF 62         [ 6]  566 	stx	2,s
   05A5 AE 62         [ 6]  567 	ldx	2,s
   05A7 BD 06 13      [ 8]  568 	jsr	__Init_Music_chk
   05AA BD F1 92      [ 8]  569 	jsr	___Wait_Recal
   05AD BD 06 2D      [ 8]  570 	jsr	__Do_Sound
   05B0 BD F2 A5      [ 8]  571 	jsr	___Intensity_5F
   05B3 BD 01 29      [ 8]  572 	jsr	_Display_Gamefield
   05B6 F6 C8 B4      [ 5]  573 	ldb	_SequenceTime
   05B9 5D            [ 2]  574 	tstb
   05BA 27 05         [ 3]  575 	beq	L38
   05BC BD 03 7A      [ 8]  576 	jsr	_Display_RandomSequence
   05BF 20 06         [ 3]  577 	bra	L37
   05C1                     578 L38:
   05C1 BD 03 1E      [ 8]  579 	jsr	_Display_TimeLeft
   05C4 BD 04 A1      [ 8]  580 	jsr	_move_player
   05C7                     581 L37:
   05C7 F6 C8 B3      [ 5]  582 	ldb	_current_level
   05CA 5D            [ 2]  583 	tstb
   05CB 27 C6         [ 3]  584 	beq	L39
   05CD 32 64         [ 5]  585 	leas	4,s
   05CF 39            [ 5]  586 	rts
ASxxxx Assembler V05.50  (Motorola 6809)                                Page 1
Hexadecimal [16-Bits]                                 Thu May  8 20:41:17 2025

Symbol Table

    .__.$$$.       =   2710 L   |     .__.ABS.       =   0000 G
    .__.CPU.       =   0000 L   |     .__.H$L.       =   0001 L
  2 L10                0104 R   |   2 L11                0114 R
  2 L13                01BF R   |   2 L14                01A9 R
  2 L15                0134 R   |   2 L19                0233 R
  2 L2                 00AB R   |   2 L20                0228 R
  2 L21                01EC R   |   2 L22                01D4 R
  2 L25                0276 R   |   2 L26                0287 R
  2 L27                0298 R   |   2 L28                02A9 R
  2 L29                02BA R   |   2 L3                 0080 R
  2 L30                02CB R   |   2 L31                02DC R
  2 L32                02ED R   |   2 L33                02FE R
  2 L35                033F R   |   2 L37                037A R
  2 L38                0374 R   |   2 L39                0346 R
  2 L8                 00FE R   |   2 LC0                00BB R
  2 LC1                00C6 R   |   2 LC2                0115 R
  2 LC3                0123 R   |   2 _Brainleft         005C GR
  2 _Brainright        003E GR  |     _Display_Gamef     **** GX
  2 _Display_Rando     012D GR  |   2 _Display_TimeL     00D1 GR
  2 _Gamefield         0023 GR  |     _Loadingbar        **** GX
  2 _Positions_Cur     0000 GR  |   2 _RandomNumberG     007A GR
  3 _RandomSequenc     0028 GR  |   3 _RandomSequenc     0029 GR
  3 _SequenceTime      002B GR  |     _Vec_Buttons       **** GX
    _Vec_Joy_1_X       **** GX  |     _Vec_Joy_1_Y       **** GX
    __Do_Sound         **** GX  |     __Explosion_Sn     **** GX
    __Init_Music_c     **** GX  |     ___DP_to_C8        **** GX
    ___Intensity_5     **** GX  |     ___Joy_Digital     **** GX
    ___Read_Btns       **** GX  |     ___Wait_Recal      **** GX
  3 _a_random          0000 GR  |   3 _a_random_comp     0014 GR
  3 _buttonspresse     002E GR  |   3 _counter           002C GR
  3 _counterw          002D GR  |   2 _cross             0014 GR
    _current_explo     **** GX  |   3 _current_level     002A GR
    _current_music     **** GX  |     _draw_cross        **** GX
  2 _is_pattern_su     01CD GR  |   4 _joy_x             0000 R
  4 _joy_y             0001 R   |   2 _level_init        00B4 GR
  2 _level_play        0342 GR  |   2 _move_player       0254 GR
    _play_tune         **** GX  |     _print_string      **** GX
    _print_unsigne     **** GX  |   3 _temppass          002F GR
    _umodhi3           **** GX

ASxxxx Assembler V05.50  (Motorola 6809)                                Page 2
Hexadecimal [16-Bits]                                 Thu May  8 20:41:17 2025

Area Table

[_CSEG]
   0 _CODE            size    0   flags C080
   2 .text            size  383   flags  100
   3 .data            size   30   flags  100
   4 .bss             size    2   flags    0
[_DSEG]
   1 _DATA            size    0   flags C0C0

