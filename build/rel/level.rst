                              1 ;;; gcc for m6809 : Mar 17 2019 13:25:32
                              2 ;;; 4.3.6 (gcc6809)
                              3 ;;; ABI version 1
                              4 ;;; -mabi=bx -mint8 -fomit-frame-pointer -O0
                              5 	.module	level.c
                              6 	.globl	_Positions_Cursor
                              7 	.area	.text
   03C7                       8 _Positions_Cursor:
   03C7 00                    9 	.byte	0
   03C8 00                   10 	.byte	0
   03C9 10                   11 	.byte	16
   03CA F0                   12 	.byte	-16
   03CB 10                   13 	.byte	16
   03CC 00                   14 	.byte	0
   03CD 10                   15 	.byte	16
   03CE 10                   16 	.byte	16
   03CF 00                   17 	.byte	0
   03D0 F0                   18 	.byte	-16
   03D1 00                   19 	.byte	0
   03D2 00                   20 	.byte	0
   03D3 00                   21 	.byte	0
   03D4 10                   22 	.byte	16
   03D5 F0                   23 	.byte	-16
   03D6 F0                   24 	.byte	-16
   03D7 F0                   25 	.byte	-16
   03D8 00                   26 	.byte	0
   03D9 F0                   27 	.byte	-16
   03DA 10                   28 	.byte	16
                             29 	.globl	_Level_advancement
   03DB                      30 _Level_advancement:
   03DB C4                   31 	.byte	-60
   03DC DD                   32 	.byte	-35
   03DD C4                   33 	.byte	-60
   03DE E7                   34 	.byte	-25
   03DF C4                   35 	.byte	-60
   03E0 F1                   36 	.byte	-15
   03E1 C4                   37 	.byte	-60
   03E2 FB                   38 	.byte	-5
   03E3 C4                   39 	.byte	-60
   03E4 05                   40 	.byte	5
   03E5 C4                   41 	.byte	-60
   03E6 0F                   42 	.byte	15
   03E7 C4                   43 	.byte	-60
   03E8 19                   44 	.byte	25
   03E9 C4                   45 	.byte	-60
   03EA 23                   46 	.byte	35
   03EB BA                   47 	.byte	-70
   03EC DD                   48 	.byte	-35
   03ED BA                   49 	.byte	-70
   03EE E7                   50 	.byte	-25
   03EF BA                   51 	.byte	-70
   03F0 F1                   52 	.byte	-15
   03F1 BA                   53 	.byte	-70
   03F2 FB                   54 	.byte	-5
   03F3 BA                   55 	.byte	-70
   03F4 05                   56 	.byte	5
   03F5 BA                   57 	.byte	-70
   03F6 0F                   58 	.byte	15
   03F7 BA                   59 	.byte	-70
   03F8 19                   60 	.byte	25
   03F9 BA                   61 	.byte	-70
   03FA 23                   62 	.byte	35
                             63 	.globl	_cross
   03FB                      64 _cross:
   03FB 00                   65 	.byte	0
   03FC 20                   66 	.byte	32
   03FD 20                   67 	.byte	32
   03FE FF                   68 	.byte	-1
   03FF E0                   69 	.byte	-32
   0400 E0                   70 	.byte	-32
   0401 00                   71 	.byte	0
   0402 20                   72 	.byte	32
   0403 00                   73 	.byte	0
   0404 FF                   74 	.byte	-1
   0405 E0                   75 	.byte	-32
   0406 20                   76 	.byte	32
   0407 01                   77 	.byte	1
   0408 00                   78 	.byte	0
   0409 00                   79 	.byte	0
                             80 	.globl	_advancement_cross
   040A                      81 _advancement_cross:
   040A 00                   82 	.byte	0
   040B 10                   83 	.byte	16
   040C 20                   84 	.byte	32
   040D FF                   85 	.byte	-1
   040E E0                   86 	.byte	-32
   040F E0                   87 	.byte	-32
   0410 00                   88 	.byte	0
   0411 20                   89 	.byte	32
   0412 00                   90 	.byte	0
   0413 FF                   91 	.byte	-1
   0414 E0                   92 	.byte	-32
   0415 20                   93 	.byte	32
   0416 01                   94 	.byte	1
   0417 00                   95 	.byte	0
   0418 00                   96 	.byte	0
                             97 	.globl	_advancement_plus
   0419                      98 _advancement_plus:
   0419 00                   99 	.byte	0
   041A 20                  100 	.byte	32
   041B 10                  101 	.byte	16
   041C FF                  102 	.byte	-1
   041D E0                  103 	.byte	-32
   041E 00                  104 	.byte	0
   041F 00                  105 	.byte	0
   0420 10                  106 	.byte	16
   0421 10                  107 	.byte	16
   0422 FF                  108 	.byte	-1
   0423 00                  109 	.byte	0
   0424 E0                  110 	.byte	-32
   0425 01                  111 	.byte	1
   0426 00                  112 	.byte	0
   0427 00                  113 	.byte	0
                            114 	.globl	_Gamefield
   0428                     115 _Gamefield:
   0428 00                  116 	.byte	0
   0429 18                  117 	.byte	24
   042A F8                  118 	.byte	-8
   042B FF                  119 	.byte	-1
   042C D0                  120 	.byte	-48
   042D 00                  121 	.byte	0
   042E 00                  122 	.byte	0
   042F 00                  123 	.byte	0
   0430 10                  124 	.byte	16
   0431 FF                  125 	.byte	-1
   0432 30                  126 	.byte	48
   0433 00                  127 	.byte	0
   0434 00                  128 	.byte	0
   0435 F0                  129 	.byte	-16
   0436 10                  130 	.byte	16
   0437 FF                  131 	.byte	-1
   0438 00                  132 	.byte	0
   0439 D0                  133 	.byte	-48
   043A 00                  134 	.byte	0
   043B F0                  135 	.byte	-16
   043C 00                  136 	.byte	0
   043D FF                  137 	.byte	-1
   043E 00                  138 	.byte	0
   043F 30                  139 	.byte	48
   0440 01                  140 	.byte	1
   0441 00                  141 	.byte	0
   0442 00                  142 	.byte	0
                            143 	.globl	_Brainright
   0443                     144 _Brainright:
   0443 00                  145 	.byte	0
   0444 D3                  146 	.byte	-45
   0445 00                  147 	.byte	0
   0446 FF                  148 	.byte	-1
   0447 FB                  149 	.byte	-5
   0448 05                  150 	.byte	5
   0449 FF                  151 	.byte	-1
   044A 01                  152 	.byte	1
   044B 0F                  153 	.byte	15
   044C FF                  154 	.byte	-1
   044D 0A                  155 	.byte	10
   044E 07                  156 	.byte	7
   044F FF                  157 	.byte	-1
   0450 0A                  158 	.byte	10
   0451 05                  159 	.byte	5
   0452 FF                  160 	.byte	-1
   0453 2D                  161 	.byte	45
   0454 FF                  162 	.byte	-1
   0455 FF                  163 	.byte	-1
   0456 05                  164 	.byte	5
   0457 F6                  165 	.byte	-10
   0458 FF                  166 	.byte	-1
   0459 00                  167 	.byte	0
   045A F6                  168 	.byte	-10
   045B FF                  169 	.byte	-1
   045C FB                  170 	.byte	-5
   045D F6                  171 	.byte	-10
   045E 01                  172 	.byte	1
   045F 00                  173 	.byte	0
   0460 00                  174 	.byte	0
                            175 	.globl	_Brainleft
   0461                     176 _Brainleft:
   0461 00                  177 	.byte	0
   0462 D3                  178 	.byte	-45
   0463 00                  179 	.byte	0
   0464 FF                  180 	.byte	-1
   0465 FB                  181 	.byte	-5
   0466 FB                  182 	.byte	-5
   0467 FF                  183 	.byte	-1
   0468 01                  184 	.byte	1
   0469 F1                  185 	.byte	-15
   046A FF                  186 	.byte	-1
   046B 0A                  187 	.byte	10
   046C F9                  188 	.byte	-7
   046D FF                  189 	.byte	-1
   046E 0A                  190 	.byte	10
   046F FB                  191 	.byte	-5
   0470 FF                  192 	.byte	-1
   0471 2D                  193 	.byte	45
   0472 01                  194 	.byte	1
   0473 FF                  195 	.byte	-1
   0474 05                  196 	.byte	5
   0475 0A                  197 	.byte	10
   0476 FF                  198 	.byte	-1
   0477 00                  199 	.byte	0
   0478 0A                  200 	.byte	10
   0479 FF                  201 	.byte	-1
   047A FB                  202 	.byte	-5
   047B 0A                  203 	.byte	10
   047C 01                  204 	.byte	1
   047D 00                  205 	.byte	0
   047E 00                  206 	.byte	0
                            207 	.globl	_Positions_Arrow
   047F                     208 _Positions_Arrow:
   047F 3C                  209 	.byte	60
   0480 C9                  210 	.byte	-55
   0481 28                  211 	.byte	40
   0482 C9                  212 	.byte	-55
                            213 	.globl	_arrow
   0483                     214 _arrow:
   0483 00                  215 	.byte	0
   0484 04                  216 	.byte	4
   0485 00                  217 	.byte	0
   0486 FF                  218 	.byte	-1
   0487 F6                  219 	.byte	-10
   0488 0A                  220 	.byte	10
   0489 FF                  221 	.byte	-1
   048A F6                  222 	.byte	-10
   048B F6                  223 	.byte	-10
   048C 00                  224 	.byte	0
   048D 0A                  225 	.byte	10
   048E 0A                  226 	.byte	10
   048F FF                  227 	.byte	-1
   0490 00                  228 	.byte	0
   0491 EC                  229 	.byte	-20
   0492 01                  230 	.byte	1
   0493 00                  231 	.byte	0
   0494 00                  232 	.byte	0
                            233 	.globl	_buttonspressedcounter
                            234 	.area	.data
   C889                     235 _buttonspressedcounter:
   C889 00                  236 	.byte	0
                            237 	.globl	_sneakyoffset
   C88A                     238 _sneakyoffset:
   C88A 00                  239 	.byte	0
                            240 	.globl	_b
   C88B                     241 _b:
   C88B 01                  242 	.byte	1
                            243 	.globl	_a_random
   C88C                     244 _a_random:
   C88C 03                  245 	.byte	3
   C88D 09                  246 	.byte	9
   C88E 07                  247 	.byte	7
   C88F 05                  248 	.byte	5
   C890 05                  249 	.byte	5
   C891 08                  250 	.byte	8
   C892 04                  251 	.byte	4
   C893 05                  252 	.byte	5
   C894 09                  253 	.byte	9
   C895 08                  254 	.byte	8
   C896 01                  255 	.byte	1
   C897 05                  256 	.byte	5
   C898 09                  257 	.byte	9
   C899 02                  258 	.byte	2
   C89A 09                  259 	.byte	9
   C89B 06                  260 	.byte	6
   C89C 03                  261 	.byte	3
   C89D 01                  262 	.byte	1
   C89E 06                  263 	.byte	6
   C89F 03                  264 	.byte	3
                            265 	.globl	_a_random_compare
   C8A0                     266 _a_random_compare:
   C8A0 00 00 00 00 00 00   267 	.word	0,0,0,0,0,0,0,0,0,0
        00 00 00 00 00 00
        00 00 00 00 00 00
        00 00
                            268 	.globl	_RandomSequenceCounter
   C8B4                     269 _RandomSequenceCounter:
   C8B4 32                  270 	.byte	50
                            271 	.globl	_RandomSequenceCounterDisplay
   C8B5                     272 _RandomSequenceCounterDisplay:
   C8B5 00                  273 	.byte	0
                            274 	.area	.text
                            275 	.globl	_RandomNumberGenerator
   0495                     276 _RandomNumberGenerator:
   0495 32 7D         [ 5]  277 	leas	-3,s
   0497 6F 62         [ 7]  278 	clr	2,s
   0499 20 2B         [ 3]  279 	bra	L2
   049B                     280 L3:
   049B E6 62         [ 5]  281 	ldb	2,s
   049D E7 61         [ 5]  282 	stb	1,s
   049F E6 62         [ 5]  283 	ldb	2,s
   04A1 1D            [ 2]  284 	sex		;extendqihi2: R:b -> R:d
   04A2 1F 01         [ 6]  285 	tfr	d,x
   04A4 E6 89 C8 8C   [ 8]  286 	ldb	_a_random,x
   04A8 4F            [ 2]  287 	clra		;zero_extendqihi: R:b -> R:d
   04A9 8E 00 0A      [ 3]  288 	ldx	#10
   04AC 34 10         [ 6]  289 	pshs	x
   04AE 1F 01         [ 6]  290 	tfr	d,x
   04B0 BD 0A 66      [ 8]  291 	jsr	_umodhi3
   04B3 32 62         [ 5]  292 	leas	2,s
   04B5 1F 10         [ 6]  293 	tfr	x,d	;movlsbqihi: R:x -> R:b
   04B7 E7 E4         [ 4]  294 	stb	,s
   04B9 E6 61         [ 5]  295 	ldb	1,s
   04BB 1D            [ 2]  296 	sex		;extendqihi2: R:b -> R:d
   04BC 1F 01         [ 6]  297 	tfr	d,x
   04BE E6 E4         [ 4]  298 	ldb	,s
   04C0 E7 89 C8 8C   [ 8]  299 	stb	_a_random,x
   04C4 6C 62         [ 7]  300 	inc	2,s
   04C6                     301 L2:
   04C6 E6 62         [ 5]  302 	ldb	2,s
   04C8 C1 13         [ 2]  303 	cmpb	#19	;cmpqi:
   04CA 2F CF         [ 3]  304 	ble	L3
   04CC 32 63         [ 5]  305 	leas	3,s
   04CE 39            [ 5]  306 	rts
                            307 	.globl	_rand
   04CF                     308 _rand:
   04CF 32 79         [ 5]  309 	leas	-7,s
   04D1 E7 65         [ 5]  310 	stb	5,s
   04D3 6F 66         [ 7]  311 	clr	6,s
   04D5 16 00 72      [ 5]  312 	lbra	L6
   04D8                     313 L7:
   04D8 E6 65         [ 5]  314 	ldb	5,s
   04DA 54            [ 2]  315 	lsrb
   04DB 54            [ 2]  316 	lsrb
   04DC 54            [ 2]  317 	lsrb
   04DD 54            [ 2]  318 	lsrb
   04DE E7 61         [ 5]  319 	stb	1,s
   04E0 E6 65         [ 5]  320 	ldb	5,s
   04E2 E8 61         [ 5]  321 	eorb	1,s
   04E4 E7 65         [ 5]  322 	stb	5,s
   04E6 E6 65         [ 5]  323 	ldb	5,s
   04E8 58            [ 2]  324 	aslb
   04E9 58            [ 2]  325 	aslb
   04EA 58            [ 2]  326 	aslb
   04EB E7 E4         [ 4]  327 	stb	,s
   04ED E6 E4         [ 4]  328 	ldb	,s
   04EF EB 65         [ 5]  329 	addb	5,s
   04F1 E7 65         [ 5]  330 	stb	5,s
   04F3 E6 65         [ 5]  331 	ldb	5,s
   04F5 59            [ 2]  332 	rolb
   04F6 59            [ 2]  333 	rolb
   04F7 59            [ 2]  334 	rolb
   04F8 C4 03         [ 2]  335 	andb	#3
   04FA E7 62         [ 5]  336 	stb	2,s
   04FC E6 65         [ 5]  337 	ldb	5,s
   04FE E8 62         [ 5]  338 	eorb	2,s
   0500 E7 65         [ 5]  339 	stb	5,s
   0502 E6 65         [ 5]  340 	ldb	5,s
   0504 58            [ 2]  341 	aslb
   0505 58            [ 2]  342 	aslb
   0506 E7 E4         [ 4]  343 	stb	,s
   0508 E6 E4         [ 4]  344 	ldb	,s
   050A EB 65         [ 5]  345 	addb	5,s
   050C E7 65         [ 5]  346 	stb	5,s
   050E E6 65         [ 5]  347 	ldb	5,s
   0510 54            [ 2]  348 	lsrb
   0511 54            [ 2]  349 	lsrb
   0512 54            [ 2]  350 	lsrb
   0513 54            [ 2]  351 	lsrb
   0514 54            [ 2]  352 	lsrb
   0515 E7 63         [ 5]  353 	stb	3,s
   0517 E6 65         [ 5]  354 	ldb	5,s
   0519 E8 63         [ 5]  355 	eorb	3,s
   051B E7 65         [ 5]  356 	stb	5,s
   051D E6 66         [ 5]  357 	ldb	6,s
   051F E7 64         [ 5]  358 	stb	4,s
   0521 E6 66         [ 5]  359 	ldb	6,s
   0523 1D            [ 2]  360 	sex		;extendqihi2: R:b -> R:d
   0524 1F 01         [ 6]  361 	tfr	d,x
   0526 E6 89 C8 8C   [ 8]  362 	ldb	_a_random,x
   052A EB 65         [ 5]  363 	addb	5,s
   052C 4F            [ 2]  364 	clra		;zero_extendqihi: R:b -> R:d
   052D 8E 00 0A      [ 3]  365 	ldx	#10
   0530 34 10         [ 6]  366 	pshs	x
   0532 1F 01         [ 6]  367 	tfr	d,x
   0534 BD 0A 66      [ 8]  368 	jsr	_umodhi3
   0537 32 62         [ 5]  369 	leas	2,s
   0539 1F 10         [ 6]  370 	tfr	x,d	;movlsbqihi: R:x -> R:b
   053B E7 E4         [ 4]  371 	stb	,s
   053D E6 64         [ 5]  372 	ldb	4,s
   053F 1D            [ 2]  373 	sex		;extendqihi2: R:b -> R:d
   0540 1F 01         [ 6]  374 	tfr	d,x
   0542 E6 E4         [ 4]  375 	ldb	,s
   0544 E7 89 C8 8C   [ 8]  376 	stb	_a_random,x
   0548 6C 66         [ 7]  377 	inc	6,s
   054A                     378 L6:
   054A E6 66         [ 5]  379 	ldb	6,s
   054C C1 13         [ 2]  380 	cmpb	#19	;cmpqi:
   054E 10 2F FF 86   [ 6]  381 	lble	L7
   0552 32 67         [ 5]  382 	leas	7,s
   0554 39            [ 5]  383 	rts
                            384 	.globl	_current_level
                            385 	.area	.data
   C8B6                     386 _current_level:
   C8B6 00                  387 	.byte	0
                            388 	.globl	_SequenceTime
   C8B7                     389 _SequenceTime:
   C8B7 01                  390 	.byte	1
                            391 	.globl	_counter
   C8B8                     392 _counter:
   C8B8 00                  393 	.byte	0
                            394 	.area	.text
   0555                     395 LC0:
   0555 54 49 4D 45 20 4C   396 	.byte	84,73,77,69,32,76,69,70
        45 46
   055D 54 80 00            397 	.byte	84,-128,0
   0560                     398 LC1:
   0560 47 41 4D 45 20 4F   399 	.byte	71,65,77,69,32,79,86,69
        56 45
   0568 52 80 00            400 	.byte	82,-128,0
                            401 	.globl	_Display_TimeLeft
   056B                     402 _Display_TimeLeft:
   056B C6 C4         [ 2]  403 	ldb	#-60
   056D E7 E2         [ 6]  404 	stb	,-s
   056F 8E 05 55      [ 3]  405 	ldx	#LC0
   0572 C6 64         [ 2]  406 	ldb	#100
   0574 BD 0A 2A      [ 8]  407 	jsr	_print_string
   0577 32 61         [ 5]  408 	leas	1,s
   0579 F6 C8 B8      [ 5]  409 	ldb	_counter
   057C BD 02 43      [ 8]  410 	jsr	_Loadingbar
   057F F6 C8 B8      [ 5]  411 	ldb	_counter
   0582 5D            [ 2]  412 	tstb
   0583 26 10         [ 3]  413 	bne	L12
   0585                     414 L11:
   0585 C6 C4         [ 2]  415 	ldb	#-60
   0587 E7 E2         [ 6]  416 	stb	,-s
   0589 8E 05 60      [ 3]  417 	ldx	#LC1
   058C C6 64         [ 2]  418 	ldb	#100
   058E BD 0A 2A      [ 8]  419 	jsr	_print_string
   0591 32 61         [ 5]  420 	leas	1,s
   0593 20 F0         [ 3]  421 	bra	L11
   0595                     422 L12:
   0595 39            [ 5]  423 	rts
                            424 	.globl	_Display_LevelAdvancement
   0596                     425 _Display_LevelAdvancement:
   0596 32 7D         [ 5]  426 	leas	-3,s
   0598 E7 62         [ 5]  427 	stb	2,s
   059A 20 08         [ 3]  428 	bra	L14
   059C                     429 L16:
   059C F6 C8 89      [ 5]  430 	ldb	_buttonspressedcounter
   059F EB 62         [ 5]  431 	addb	2,s
   05A1 BD 01 7D      [ 8]  432 	jsr	_draw_round_advancement_cross
   05A4                     433 L14:
   05A4 E6 62         [ 5]  434 	ldb	2,s
   05A6 E7 61         [ 5]  435 	stb	1,s
   05A8 6D 61         [ 7]  436 	tst	1,s
   05AA 27 04         [ 3]  437 	beq	L15
   05AC C6 01         [ 2]  438 	ldb	#1
   05AE E7 61         [ 5]  439 	stb	1,s
   05B0                     440 L15:
   05B0 E6 61         [ 5]  441 	ldb	1,s
   05B2 6A 62         [ 7]  442 	dec	2,s
   05B4 5D            [ 2]  443 	tstb
   05B5 26 E5         [ 3]  444 	bne	L16
   05B7 20 05         [ 3]  445 	bra	L17
   05B9                     446 L19:
   05B9 E6 65         [ 5]  447 	ldb	5,s
   05BB BD 01 C3      [ 8]  448 	jsr	_draw_round_advancement_cross_plus
   05BE                     449 L17:
   05BE E6 65         [ 5]  450 	ldb	5,s
   05C0 E7 E4         [ 4]  451 	stb	,s
   05C2 6D E4         [ 6]  452 	tst	,s
   05C4 27 04         [ 3]  453 	beq	L18
   05C6 C6 01         [ 2]  454 	ldb	#1
   05C8 E7 E4         [ 4]  455 	stb	,s
   05CA                     456 L18:
   05CA E6 E4         [ 4]  457 	ldb	,s
   05CC 6A 65         [ 7]  458 	dec	5,s
   05CE 5D            [ 2]  459 	tstb
   05CF 26 E8         [ 3]  460 	bne	L19
   05D1 32 63         [ 5]  461 	leas	3,s
   05D3 39            [ 5]  462 	rts
   05D4                     463 LC2:
   05D4 52 45 4D 45 4D 42   464 	.byte	82,69,77,69,77,66,69,82
        45 52
   05DC 20 54 48 45 80 00   465 	.byte	32,84,72,69,-128,0
   05E2                     466 LC3:
   05E2 53 45 51 55 45 4E   467 	.byte	83,69,81,85,69,78,67,69
        43 45
   05EA 80 00               468 	.byte	-128,0
                            469 	.globl	_Display_RandomSequence
   05EC                     470 _Display_RandomSequence:
   05EC 32 7D         [ 5]  471 	leas	-3,s
   05EE 6F 62         [ 7]  472 	clr	2,s
   05F0 16 00 95      [ 5]  473 	lbra	L22
   05F3                     474 L24:
   05F3 C6 C8         [ 2]  475 	ldb	#-56
   05F5 F7 C8 B8      [ 5]  476 	stb	_counter
   05F8 BD F1 92      [ 8]  477 	jsr	___Wait_Recal
   05FB BD 02 09      [ 8]  478 	jsr	_Display_Gamefield
   05FE C6 B5         [ 2]  479 	ldb	#-75
   0600 E7 E2         [ 6]  480 	stb	,-s
   0602 8E 05 D4      [ 3]  481 	ldx	#LC2
   0605 C6 64         [ 2]  482 	ldb	#100
   0607 BD 0A 2A      [ 8]  483 	jsr	_print_string
   060A 32 61         [ 5]  484 	leas	1,s
   060C C6 CE         [ 2]  485 	ldb	#-50
   060E E7 E2         [ 6]  486 	stb	,-s
   0610 8E 05 E2      [ 3]  487 	ldx	#LC3
   0613 C6 50         [ 2]  488 	ldb	#80
   0615 BD 0A 2A      [ 8]  489 	jsr	_print_string
   0618 32 61         [ 5]  490 	leas	1,s
   061A E6 62         [ 5]  491 	ldb	2,s
   061C 4F            [ 2]  492 	clra		;zero_extendqihi: R:b -> R:d
   061D 1F 01         [ 6]  493 	tfr	d,x
   061F E6 89 C8 8C   [ 8]  494 	ldb	_a_random,x
   0623 BD 01 2C      [ 8]  495 	jsr	_draw_cross
   0626 E6 62         [ 5]  496 	ldb	2,s
   0628 5C            [ 2]  497 	incb
   0629 86 64         [ 2]  498 	lda	#100	;umulqihi3
   062B 3D            [11]  499 	mul
                            500 		;movlsbqihi: D->B
   062C 4F            [ 2]  501 	clra		;zero_extendqihi: R:b -> R:d
   062D ED E4         [ 5]  502 	std	,s
   062F C6 C8         [ 2]  503 	ldb	#-56
   0631 E7 E2         [ 6]  504 	stb	,-s
   0633 AE 61         [ 6]  505 	ldx	1,s
   0635 C6 01         [ 2]  506 	ldb	#1
   0637 BD 0A 89      [ 8]  507 	jsr	_play_tune
   063A 32 61         [ 5]  508 	leas	1,s
   063C E6 62         [ 5]  509 	ldb	2,s
   063E 5C            [ 2]  510 	incb
   063F 86 64         [ 2]  511 	lda	#100	;umulqihi3
   0641 3D            [11]  512 	mul
                            513 		;movlsbqihi: D->B
   0642 4F            [ 2]  514 	clra		;zero_extendqihi: R:b -> R:d
   0643 ED E4         [ 5]  515 	std	,s
   0645 C6 C8         [ 2]  516 	ldb	#-56
   0647 E7 E2         [ 6]  517 	stb	,-s
   0649 AE 61         [ 6]  518 	ldx	1,s
   064B C6 02         [ 2]  519 	ldb	#2
   064D BD 0A 89      [ 8]  520 	jsr	_play_tune
   0650 32 61         [ 5]  521 	leas	1,s
   0652 E6 62         [ 5]  522 	ldb	2,s
   0654 5C            [ 2]  523 	incb
   0655 86 64         [ 2]  524 	lda	#100	;umulqihi3
   0657 3D            [11]  525 	mul
                            526 		;movlsbqihi: D->B
   0658 4F            [ 2]  527 	clra		;zero_extendqihi: R:b -> R:d
   0659 ED E4         [ 5]  528 	std	,s
   065B C6 C8         [ 2]  529 	ldb	#-56
   065D E7 E2         [ 6]  530 	stb	,-s
   065F AE 61         [ 6]  531 	ldx	1,s
   0661 C6 03         [ 2]  532 	ldb	#3
   0663 BD 0A 89      [ 8]  533 	jsr	_play_tune
   0666 32 61         [ 5]  534 	leas	1,s
   0668 E6 62         [ 5]  535 	ldb	2,s
   066A 5C            [ 2]  536 	incb
   066B 6F E2         [ 8]  537 	clr	,-s
   066D BD 05 96      [ 8]  538 	jsr	_Display_LevelAdvancement
   0670 32 61         [ 5]  539 	leas	1,s
   0672                     540 L23:
   0672 F6 C8 B4      [ 5]  541 	ldb	_RandomSequenceCounter
   0675 5A            [ 2]  542 	decb
   0676 F7 C8 B4      [ 5]  543 	stb	_RandomSequenceCounter
   0679 F6 C8 B4      [ 5]  544 	ldb	_RandomSequenceCounter
   067C 5D            [ 2]  545 	tstb
   067D 10 26 FF 72   [ 6]  546 	lbne	L24
   0681 C6 1E         [ 2]  547 	ldb	#30
   0683 F7 C8 B4      [ 5]  548 	stb	_RandomSequenceCounter
   0686 6C 62         [ 7]  549 	inc	2,s
   0688                     550 L22:
   0688 F6 C8 B5      [ 5]  551 	ldb	_RandomSequenceCounterDisplay
   068B 5C            [ 2]  552 	incb
   068C E1 62         [ 5]  553 	cmpb	2,s	;cmpqi:
   068E 22 E2         [ 3]  554 	bhi	L23
   0690 7F C8 B7      [ 7]  555 	clr	_SequenceTime
   0693 32 63         [ 5]  556 	leas	3,s
   0695 39            [ 5]  557 	rts
                            558 	.area	.bss
                            559 	.globl	_execute_game_playing_state
   C8C0                     560 _execute_game_playing_state:	.blkb	2
                            561 	.area	.text
   0696                     562 LC4:
   0696 50 52 45 53 53 20   563 	.byte	80,82,69,83,83,32,50,32
        32 20
   069E 42 55 54 54 4F 4E   564 	.byte	66,85,84,84,79,78,-128,0
        80 00
   06A6                     565 LC5:
   06A6 54 4F 20 52 45 53   566 	.byte	84,79,32,82,69,83,84,65
        54 41
   06AE 52 54 80 00         567 	.byte	82,84,-128,0
                            568 	.globl	_display_game_over
   06B2                     569 _display_game_over:
   06B2 32 7F         [ 5]  570 	leas	-1,s
   06B4 C6 C4         [ 2]  571 	ldb	#-60
   06B6 E7 E2         [ 6]  572 	stb	,-s
   06B8 8E 05 60      [ 3]  573 	ldx	#LC1
   06BB C6 64         [ 2]  574 	ldb	#100
   06BD BD 0A 2A      [ 8]  575 	jsr	_print_string
   06C0 32 61         [ 5]  576 	leas	1,s
   06C2 C6 B0         [ 2]  577 	ldb	#-80
   06C4 E7 E2         [ 6]  578 	stb	,-s
   06C6 8E 06 96      [ 3]  579 	ldx	#LC4
   06C9 C6 50         [ 2]  580 	ldb	#80
   06CB BD 0A 2A      [ 8]  581 	jsr	_print_string
   06CE 32 61         [ 5]  582 	leas	1,s
   06D0 C6 C4         [ 2]  583 	ldb	#-60
   06D2 E7 E2         [ 6]  584 	stb	,-s
   06D4 8E 06 A6      [ 3]  585 	ldx	#LC5
   06D7 C6 3C         [ 2]  586 	ldb	#60
   06D9 BD 0A 2A      [ 8]  587 	jsr	_print_string
   06DC 32 61         [ 5]  588 	leas	1,s
   06DE BD F1 BA      [ 8]  589 	jsr	___Read_Btns
   06E1 F6 C8 11      [ 5]  590 	ldb	_Vec_Buttons
   06E4 C4 02         [ 2]  591 	andb	#2
   06E6 5D            [ 2]  592 	tstb
   06E7 27 27         [ 3]  593 	beq	L31
   06E9 8E 08 B0      [ 3]  594 	ldx	#_execute_display_sequence_state
   06EC BF C8 C0      [ 6]  595 	stx	_execute_game_playing_state
   06EF 6F E4         [ 6]  596 	clr	,s
   06F1 20 0B         [ 3]  597 	bra	L29
   06F3                     598 L30:
   06F3 E6 E4         [ 4]  599 	ldb	,s
   06F5 1D            [ 2]  600 	sex		;extendqihi2: R:b -> R:d
   06F6 1F 01         [ 6]  601 	tfr	d,x
   06F8 6F 89 C8 A0   [10]  602 	clr	_a_random_compare,x
   06FC 6C E4         [ 6]  603 	inc	,s
   06FE                     604 L29:
   06FE E6 E4         [ 4]  605 	ldb	,s
   0700 C1 13         [ 2]  606 	cmpb	#19	;cmpqi:
   0702 2F EF         [ 3]  607 	ble	L30
   0704 F6 C8 B5      [ 5]  608 	ldb	_RandomSequenceCounterDisplay
   0707 BD 04 CF      [ 8]  609 	jsr	_rand
   070A 7F C8 B5      [ 7]  610 	clr	_RandomSequenceCounterDisplay
   070D 7F C8 89      [ 7]  611 	clr	_buttonspressedcounter
   0710                     612 L31:
   0710 32 61         [ 5]  613 	leas	1,s
   0712 39            [ 5]  614 	rts
                            615 	.globl	_joy_x
                            616 	.area	.data
   C8B9                     617 _joy_x:
   C8B9 00                  618 	.byte	0
                            619 	.globl	_joy_y
   C8BA                     620 _joy_y:
   C8BA 00                  621 	.byte	0
                            622 	.globl	_temppass
   C8BB                     623 _temppass:
   C8BB 00                  624 	.byte	0
                            625 	.area	.text
                            626 	.globl	_move_player
   0713                     627 _move_player:
   0713 BD F1 F8      [ 8]  628 	jsr	___Joy_Digital
   0716 F6 C8 1B      [ 5]  629 	ldb	_Vec_Joy_1_X
   0719 F7 C8 B9      [ 5]  630 	stb	_joy_x
   071C F6 C8 1C      [ 5]  631 	ldb	_Vec_Joy_1_Y
   071F F7 C8 BA      [ 5]  632 	stb	_joy_y
   0722 F6 C8 B9      [ 5]  633 	ldb	_joy_x
   0725 5D            [ 2]  634 	tstb
   0726 2C 0D         [ 3]  635 	bge	L33
   0728 F6 C8 BA      [ 5]  636 	ldb	_joy_y
   072B 5D            [ 2]  637 	tstb
   072C 2F 07         [ 3]  638 	ble	L33
   072E F6 C8 8A      [ 5]  639 	ldb	_sneakyoffset
   0731 5C            [ 2]  640 	incb
   0732 F7 C8 BB      [ 5]  641 	stb	_temppass
   0735                     642 L33:
   0735 F6 C8 B9      [ 5]  643 	ldb	_joy_x
   0738 5D            [ 2]  644 	tstb
   0739 26 0E         [ 3]  645 	bne	L34
   073B F6 C8 BA      [ 5]  646 	ldb	_joy_y
   073E 5D            [ 2]  647 	tstb
   073F 2F 08         [ 3]  648 	ble	L34
   0741 F6 C8 8A      [ 5]  649 	ldb	_sneakyoffset
   0744 CB 02         [ 2]  650 	addb	#2
   0746 F7 C8 BB      [ 5]  651 	stb	_temppass
   0749                     652 L34:
   0749 F6 C8 B9      [ 5]  653 	ldb	_joy_x
   074C 5D            [ 2]  654 	tstb
   074D 2F 0E         [ 3]  655 	ble	L35
   074F F6 C8 BA      [ 5]  656 	ldb	_joy_y
   0752 5D            [ 2]  657 	tstb
   0753 2F 08         [ 3]  658 	ble	L35
   0755 F6 C8 8A      [ 5]  659 	ldb	_sneakyoffset
   0758 CB 03         [ 2]  660 	addb	#3
   075A F7 C8 BB      [ 5]  661 	stb	_temppass
   075D                     662 L35:
   075D F6 C8 B9      [ 5]  663 	ldb	_joy_x
   0760 5D            [ 2]  664 	tstb
   0761 2C 0E         [ 3]  665 	bge	L36
   0763 F6 C8 BA      [ 5]  666 	ldb	_joy_y
   0766 5D            [ 2]  667 	tstb
   0767 26 08         [ 3]  668 	bne	L36
   0769 F6 C8 8A      [ 5]  669 	ldb	_sneakyoffset
   076C CB 04         [ 2]  670 	addb	#4
   076E F7 C8 BB      [ 5]  671 	stb	_temppass
   0771                     672 L36:
   0771 F6 C8 B9      [ 5]  673 	ldb	_joy_x
   0774 5D            [ 2]  674 	tstb
   0775 26 0E         [ 3]  675 	bne	L37
   0777 F6 C8 BA      [ 5]  676 	ldb	_joy_y
   077A 5D            [ 2]  677 	tstb
   077B 26 08         [ 3]  678 	bne	L37
   077D F6 C8 8A      [ 5]  679 	ldb	_sneakyoffset
   0780 CB 05         [ 2]  680 	addb	#5
   0782 F7 C8 BB      [ 5]  681 	stb	_temppass
   0785                     682 L37:
   0785 F6 C8 B9      [ 5]  683 	ldb	_joy_x
   0788 5D            [ 2]  684 	tstb
   0789 2F 0E         [ 3]  685 	ble	L38
   078B F6 C8 BA      [ 5]  686 	ldb	_joy_y
   078E 5D            [ 2]  687 	tstb
   078F 26 08         [ 3]  688 	bne	L38
   0791 F6 C8 8A      [ 5]  689 	ldb	_sneakyoffset
   0794 CB 06         [ 2]  690 	addb	#6
   0796 F7 C8 BB      [ 5]  691 	stb	_temppass
   0799                     692 L38:
   0799 F6 C8 B9      [ 5]  693 	ldb	_joy_x
   079C 5D            [ 2]  694 	tstb
   079D 2C 19         [ 3]  695 	bge	L39
   079F F6 C8 BA      [ 5]  696 	ldb	_joy_y
   07A2 5D            [ 2]  697 	tstb
   07A3 2C 13         [ 3]  698 	bge	L39
   07A5 F6 C8 8A      [ 5]  699 	ldb	_sneakyoffset
   07A8 C1 03         [ 2]  700 	cmpb	#3	;cmpqi:
   07AA 26 07         [ 3]  701 	bne	L40
   07AC C6 01         [ 2]  702 	ldb	#1
   07AE F7 C8 BB      [ 5]  703 	stb	_temppass
   07B1 20 05         [ 3]  704 	bra	L39
   07B3                     705 L40:
   07B3 C6 07         [ 2]  706 	ldb	#7
   07B5 F7 C8 BB      [ 5]  707 	stb	_temppass
   07B8                     708 L39:
   07B8 F6 C8 B9      [ 5]  709 	ldb	_joy_x
   07BB 5D            [ 2]  710 	tstb
   07BC 26 19         [ 3]  711 	bne	L41
   07BE F6 C8 BA      [ 5]  712 	ldb	_joy_y
   07C1 5D            [ 2]  713 	tstb
   07C2 2C 13         [ 3]  714 	bge	L41
   07C4 F6 C8 8A      [ 5]  715 	ldb	_sneakyoffset
   07C7 C1 03         [ 2]  716 	cmpb	#3	;cmpqi:
   07C9 26 07         [ 3]  717 	bne	L42
   07CB C6 02         [ 2]  718 	ldb	#2
   07CD F7 C8 BB      [ 5]  719 	stb	_temppass
   07D0 20 05         [ 3]  720 	bra	L41
   07D2                     721 L42:
   07D2 C6 08         [ 2]  722 	ldb	#8
   07D4 F7 C8 BB      [ 5]  723 	stb	_temppass
   07D7                     724 L41:
   07D7 F6 C8 B9      [ 5]  725 	ldb	_joy_x
   07DA 5D            [ 2]  726 	tstb
   07DB 2F 19         [ 3]  727 	ble	L43
   07DD F6 C8 BA      [ 5]  728 	ldb	_joy_y
   07E0 5D            [ 2]  729 	tstb
   07E1 2C 13         [ 3]  730 	bge	L43
   07E3 F6 C8 8A      [ 5]  731 	ldb	_sneakyoffset
   07E6 C1 03         [ 2]  732 	cmpb	#3	;cmpqi:
   07E8 26 07         [ 3]  733 	bne	L44
   07EA C6 03         [ 2]  734 	ldb	#3
   07EC F7 C8 BB      [ 5]  735 	stb	_temppass
   07EF 20 05         [ 3]  736 	bra	L43
   07F1                     737 L44:
   07F1 C6 09         [ 2]  738 	ldb	#9
   07F3 F7 C8 BB      [ 5]  739 	stb	_temppass
   07F6                     740 L43:
   07F6 F6 C8 BB      [ 5]  741 	ldb	_temppass
   07F9 BD 01 2C      [ 8]  742 	jsr	_draw_cross
   07FC 39            [ 5]  743 	rts
                            744 	.globl	_read_player_input
   07FD                     745 _read_player_input:
   07FD 32 7E         [ 5]  746 	leas	-2,s
   07FF BD F1 BA      [ 8]  747 	jsr	___Read_Btns
   0802 F6 C8 11      [ 5]  748 	ldb	_Vec_Buttons
   0805 C4 01         [ 2]  749 	andb	#1
   0807 5D            [ 2]  750 	tstb
   0808 27 1C         [ 3]  751 	beq	L48
   080A F6 C8 89      [ 5]  752 	ldb	_buttonspressedcounter
   080D E7 E4         [ 4]  753 	stb	,s
   080F F6 C8 BB      [ 5]  754 	ldb	_temppass
   0812 E7 61         [ 5]  755 	stb	1,s
   0814 E6 E4         [ 4]  756 	ldb	,s
   0816 4F            [ 2]  757 	clra		;zero_extendqihi: R:b -> R:d
   0817 1F 01         [ 6]  758 	tfr	d,x
   0819 E6 61         [ 5]  759 	ldb	1,s
   081B E7 89 C8 A0   [ 8]  760 	stb	_a_random_compare,x
   081F F6 C8 89      [ 5]  761 	ldb	_buttonspressedcounter
   0822 5C            [ 2]  762 	incb
   0823 F7 C8 89      [ 5]  763 	stb	_buttonspressedcounter
   0826                     764 L48:
   0826 32 62         [ 5]  765 	leas	2,s
   0828 39            [ 5]  766 	rts
   0829                     767 LC6:
   0829 21 53 4E 45 41 4B   768 	.byte	33,83,78,69,65,75,89,32
        59 20
   0831 4F 46 46 53 45 54   769 	.byte	79,70,70,83,69,84,33,-128
        21 80
   0839 00                  770 	.byte	0
                            771 	.globl	_Set_traps
   083A                     772 _Set_traps:
   083A 7F C8 8A      [ 7]  773 	clr	_sneakyoffset
   083D F6 C8 B5      [ 5]  774 	ldb	_RandomSequenceCounterDisplay
   0840 C1 03         [ 2]  775 	cmpb	#3	;cmpqi:
   0842 23 28         [ 3]  776 	bls	L51
   0844 F6 C8 B5      [ 5]  777 	ldb	_RandomSequenceCounterDisplay
   0847 C1 07         [ 2]  778 	cmpb	#7	;cmpqi:
   0849 22 21         [ 3]  779 	bhi	L51
   084B C6 C8         [ 2]  780 	ldb	#-56
   084D E7 E2         [ 6]  781 	stb	,-s
   084F 8E 01 90      [ 3]  782 	ldx	#400
   0852 C6 03         [ 2]  783 	ldb	#3
   0854 BD 0A 89      [ 8]  784 	jsr	_play_tune
   0857 32 61         [ 5]  785 	leas	1,s
   0859 C6 9C         [ 2]  786 	ldb	#-100
   085B E7 E2         [ 6]  787 	stb	,-s
   085D 8E 08 29      [ 3]  788 	ldx	#LC6
   0860 C6 73         [ 2]  789 	ldb	#115
   0862 BD 0A 2A      [ 8]  790 	jsr	_print_string
   0865 32 61         [ 5]  791 	leas	1,s
   0867 C6 03         [ 2]  792 	ldb	#3
   0869 F7 C8 8A      [ 5]  793 	stb	_sneakyoffset
   086C                     794 L51:
   086C 39            [ 5]  795 	rts
                            796 	.globl	_execute_repeat_sequence_state
   086D                     797 _execute_repeat_sequence_state:
   086D 32 7D         [ 5]  798 	leas	-3,s
   086F BD 02 09      [ 8]  799 	jsr	_Display_Gamefield
   0872 BD 05 6B      [ 8]  800 	jsr	_Display_TimeLeft
   0875 F6 C8 89      [ 5]  801 	ldb	_buttonspressedcounter
   0878 E7 61         [ 5]  802 	stb	1,s
   087A F6 C8 B5      [ 5]  803 	ldb	_RandomSequenceCounterDisplay
   087D E7 62         [ 5]  804 	stb	2,s
   087F F6 C8 89      [ 5]  805 	ldb	_buttonspressedcounter
   0882 E7 E4         [ 4]  806 	stb	,s
   0884 E6 62         [ 5]  807 	ldb	2,s
   0886 E0 E4         [ 4]  808 	subb	,s
   0888 E7 E4         [ 4]  809 	stb	,s
   088A E6 E4         [ 4]  810 	ldb	,s
   088C 5C            [ 2]  811 	incb
   088D E7 E4         [ 4]  812 	stb	,s
   088F E6 61         [ 5]  813 	ldb	1,s
   0891 34 04         [ 6]  814 	pshs	b
   0893 E6 61         [ 5]  815 	ldb	1,s
   0895 BD 05 96      [ 8]  816 	jsr	_Display_LevelAdvancement
   0898 32 61         [ 5]  817 	leas	1,s
   089A F6 C8 8B      [ 5]  818 	ldb	_b
   089D C1 03         [ 2]  819 	cmpb	#3	;cmpqi:
   089F 26 03         [ 3]  820 	bne	L53
   08A1 BD 08 3A      [ 8]  821 	jsr	_Set_traps
   08A4                     822 L53:
   08A4 BD 07 13      [ 8]  823 	jsr	_move_player
   08A7 BD 07 FD      [ 8]  824 	jsr	_read_player_input
   08AA BD 08 BD      [ 8]  825 	jsr	_check_successfully_repeated
   08AD 32 63         [ 5]  826 	leas	3,s
   08AF 39            [ 5]  827 	rts
                            828 	.globl	_execute_display_sequence_state
   08B0                     829 _execute_display_sequence_state:
   08B0 BD 02 09      [ 8]  830 	jsr	_Display_Gamefield
   08B3 BD 05 EC      [ 8]  831 	jsr	_Display_RandomSequence
   08B6 8E 08 6D      [ 3]  832 	ldx	#_execute_repeat_sequence_state
   08B9 BF C8 C0      [ 6]  833 	stx	_execute_game_playing_state
   08BC 39            [ 5]  834 	rts
                            835 	.globl	_check_successfully_repeated
   08BD                     836 _check_successfully_repeated:
   08BD 32 7B         [ 5]  837 	leas	-5,s
   08BF F6 C8 89      [ 5]  838 	ldb	_buttonspressedcounter
   08C2 E7 64         [ 5]  839 	stb	4,s
   08C4 20 1E         [ 3]  840 	bra	L58
   08C6                     841 L60:
   08C6 E6 64         [ 5]  842 	ldb	4,s
   08C8 4F            [ 2]  843 	clra		;zero_extendqihi: R:b -> R:d
   08C9 1F 01         [ 6]  844 	tfr	d,x
   08CB E6 89 C8 8C   [ 8]  845 	ldb	_a_random,x
   08CF E7 62         [ 5]  846 	stb	2,s
   08D1 E6 64         [ 5]  847 	ldb	4,s
   08D3 4F            [ 2]  848 	clra		;zero_extendqihi: R:b -> R:d
   08D4 1F 01         [ 6]  849 	tfr	d,x
   08D6 E6 89 C8 A0   [ 8]  850 	ldb	_a_random_compare,x
   08DA E1 62         [ 5]  851 	cmpb	2,s	;cmpqi:(R)
   08DC 27 06         [ 3]  852 	beq	L58
   08DE 8E 06 B2      [ 3]  853 	ldx	#_display_game_over
   08E1 BF C8 C0      [ 6]  854 	stx	_execute_game_playing_state
   08E4                     855 L58:
   08E4 E6 64         [ 5]  856 	ldb	4,s
   08E6 E7 61         [ 5]  857 	stb	1,s
   08E8 6D 61         [ 7]  858 	tst	1,s
   08EA 27 04         [ 3]  859 	beq	L59
   08EC C6 01         [ 2]  860 	ldb	#1
   08EE E7 61         [ 5]  861 	stb	1,s
   08F0                     862 L59:
   08F0 E6 61         [ 5]  863 	ldb	1,s
   08F2 6A 64         [ 7]  864 	dec	4,s
   08F4 5D            [ 2]  865 	tstb
   08F5 26 CF         [ 3]  866 	bne	L60
   08F7 F6 C8 B5      [ 5]  867 	ldb	_RandomSequenceCounterDisplay
   08FA E7 E4         [ 4]  868 	stb	,s
   08FC E6 E4         [ 4]  869 	ldb	,s
   08FE 5C            [ 2]  870 	incb
   08FF E7 63         [ 5]  871 	stb	3,s
   0901 F6 C8 89      [ 5]  872 	ldb	_buttonspressedcounter
   0904 E1 63         [ 5]  873 	cmpb	3,s	;cmpqi:(R)
   0906 26 15         [ 3]  874 	bne	L62
   0908 F6 C8 B5      [ 5]  875 	ldb	_RandomSequenceCounterDisplay
   090B 5C            [ 2]  876 	incb
   090C F7 C8 B5      [ 5]  877 	stb	_RandomSequenceCounterDisplay
   090F 7F C8 89      [ 7]  878 	clr	_buttonspressedcounter
   0912 C6 C8         [ 2]  879 	ldb	#-56
   0914 F7 C8 B8      [ 5]  880 	stb	_counter
   0917 8E 08 B0      [ 3]  881 	ldx	#_execute_display_sequence_state
   091A BF C8 C0      [ 6]  882 	stx	_execute_game_playing_state
   091D                     883 L62:
   091D 32 65         [ 5]  884 	leas	5,s
   091F 39            [ 5]  885 	rts
   0920                     886 LC7:
   0920 53 45 4C 45 43 54   887 	.byte	83,69,76,69,67,84,32,84
        20 54
   0928 48 45 20 47 41 4D   888 	.byte	72,69,32,71,65,77,69,77
        45 4D
   0930 4F 44 45 80 00      889 	.byte	79,68,69,-128,0
   0935                     890 LC8:
   0935 4E 4F 52 4D 41 4C   891 	.byte	78,79,82,77,65,76,-128,0
        80 00
   093D                     892 LC9:
   093D 48 41 52 44 80 00   893 	.byte	72,65,82,68,-128,0
                            894 	.globl	_level_init
   0943                     895 _level_init:
   0943 32 7F         [ 5]  896 	leas	-1,s
   0945 C6 01         [ 2]  897 	ldb	#1
   0947 F7 C8 1F      [ 5]  898 	stb	_Vec_Joy_Mux_1_X
   094A C6 03         [ 2]  899 	ldb	#3
   094C F7 C8 20      [ 5]  900 	stb	_Vec_Joy_Mux_1_Y
   094F 7F C8 21      [ 7]  901 	clr	_Vec_Joy_Mux_2_X
   0952 7F C8 22      [ 7]  902 	clr	_Vec_Joy_Mux_2_Y
   0955 6F E4         [ 6]  903 	clr	,s
   0957 16 00 74      [ 5]  904 	lbra	L64
   095A                     905 L69:
   095A BD F1 BA      [ 8]  906 	jsr	___Read_Btns
   095D 6C E4         [ 6]  907 	inc	,s
   095F C6 88         [ 2]  908 	ldb	#-120
   0961 E7 E2         [ 6]  909 	stb	,-s
   0963 8E 09 20      [ 3]  910 	ldx	#LC7
   0966 C6 64         [ 2]  911 	ldb	#100
   0968 BD 0A 2A      [ 8]  912 	jsr	_print_string
   096B 32 61         [ 5]  913 	leas	1,s
   096D C6 CE         [ 2]  914 	ldb	#-50
   096F E7 E2         [ 6]  915 	stb	,-s
   0971 8E 09 35      [ 3]  916 	ldx	#LC8
   0974 C6 3C         [ 2]  917 	ldb	#60
   0976 BD 0A 2A      [ 8]  918 	jsr	_print_string
   0979 32 61         [ 5]  919 	leas	1,s
   097B C6 CE         [ 2]  920 	ldb	#-50
   097D E7 E2         [ 6]  921 	stb	,-s
   097F 8E 09 3D      [ 3]  922 	ldx	#LC9
   0982 C6 28         [ 2]  923 	ldb	#40
   0984 BD 0A 2A      [ 8]  924 	jsr	_print_string
   0987 32 61         [ 5]  925 	leas	1,s
   0989 BD F1 BA      [ 8]  926 	jsr	___Read_Btns
   098C BD F1 F8      [ 8]  927 	jsr	___Joy_Digital
   098F F6 C8 1C      [ 5]  928 	ldb	_Vec_Joy_1_Y
   0992 5D            [ 2]  929 	tstb
   0993 27 06         [ 3]  930 	beq	L65
   0995 F6 C8 1C      [ 5]  931 	ldb	_Vec_Joy_1_Y
   0998 F7 C8 BA      [ 5]  932 	stb	_joy_y
   099B                     933 L65:
   099B F6 C8 BA      [ 5]  934 	ldb	_joy_y
   099E 5D            [ 2]  935 	tstb
   099F 2F 04         [ 3]  936 	ble	L66
   09A1 5F            [ 2]  937 	clrb
   09A2 BD 02 AB      [ 8]  938 	jsr	_draw_menu_arrow
   09A5                     939 L66:
   09A5 F6 C8 BA      [ 5]  940 	ldb	_joy_y
   09A8 5D            [ 2]  941 	tstb
   09A9 2C 05         [ 3]  942 	bge	L67
   09AB C6 01         [ 2]  943 	ldb	#1
   09AD BD 02 AB      [ 8]  944 	jsr	_draw_menu_arrow
   09B0                     945 L67:
   09B0 F6 C8 11      [ 5]  946 	ldb	_Vec_Buttons
   09B3 C4 01         [ 2]  947 	andb	#1
   09B5 5D            [ 2]  948 	tstb
   09B6 27 16         [ 3]  949 	beq	L64
   09B8 F6 C8 BA      [ 5]  950 	ldb	_joy_y
   09BB 5D            [ 2]  951 	tstb
   09BC 2F 05         [ 3]  952 	ble	L68
   09BE C6 02         [ 2]  953 	ldb	#2
   09C0 F7 C8 8B      [ 5]  954 	stb	_b
   09C3                     955 L68:
   09C3 F6 C8 BA      [ 5]  956 	ldb	_joy_y
   09C6 5D            [ 2]  957 	tstb
   09C7 2C 05         [ 3]  958 	bge	L64
   09C9 C6 03         [ 2]  959 	ldb	#3
   09CB F7 C8 8B      [ 5]  960 	stb	_b
   09CE                     961 L64:
   09CE F6 C8 8B      [ 5]  962 	ldb	_b
   09D1 C1 01         [ 2]  963 	cmpb	#1	;cmpqi:
   09D3 10 2F FF 83   [ 6]  964 	lble	L69
   09D7 E6 E4         [ 4]  965 	ldb	,s
   09D9 BD 04 CF      [ 8]  966 	jsr	_rand
   09DC 7F C8 B6      [ 7]  967 	clr	_current_level
   09DF 8E 08 B0      [ 3]  968 	ldx	#_execute_display_sequence_state
   09E2 BF C8 C0      [ 6]  969 	stx	_execute_game_playing_state
   09E5 32 61         [ 5]  970 	leas	1,s
   09E7 39            [ 5]  971 	rts
                            972 	.globl	_level_play
   09E8                     973 _level_play:
   09E8 32 7C         [ 5]  974 	leas	-4,s
   09EA 20 25         [ 3]  975 	bra	L72
   09EC                     976 L73:
   09EC BD F1 AF      [ 8]  977 	jsr	___DP_to_C8
   09EF BE C8 BC      [ 6]  978 	ldx	_current_explosion
   09F2 AF E4         [ 5]  979 	stx	,s
   09F4 AE E4         [ 5]  980 	ldx	,s
   09F6 BD 0A 54      [ 8]  981 	jsr	__Explosion_Snd
   09F9 BE C8 BE      [ 6]  982 	ldx	_current_music
   09FC AF 62         [ 6]  983 	stx	2,s
   09FE AE 62         [ 6]  984 	ldx	2,s
   0A00 BD 0A 5D      [ 8]  985 	jsr	__Init_Music_chk
   0A03 BD F1 92      [ 8]  986 	jsr	___Wait_Recal
   0A06 BD 0A 77      [ 8]  987 	jsr	__Do_Sound
   0A09 BD F2 A5      [ 8]  988 	jsr	___Intensity_5F
   0A0C BE C8 C0      [ 6]  989 	ldx	_execute_game_playing_state
   0A0F AD 84         [ 7]  990 	jsr	,x
   0A11                     991 L72:
   0A11 F6 C8 B6      [ 5]  992 	ldb	_current_level
   0A14 5D            [ 2]  993 	tstb
   0A15 27 D5         [ 3]  994 	beq	L73
   0A17 32 64         [ 5]  995 	leas	4,s
   0A19 39            [ 5]  996 	rts
ASxxxx Assembler V05.50  (Motorola 6809)                                Page 1
Hexadecimal [16-Bits]                                 Tue May 13 06:51:06 2025

Symbol Table

    .__.$$$.       =   2710 L   |     .__.ABS.       =   0000 G
    .__.CPU.       =   0000 L   |     .__.H$L.       =   0001 L
  2 L11                01BE R   |   2 L12                01CE R
  2 L14                01DD R   |   2 L15                01E9 R
  2 L16                01D5 R   |   2 L17                01F7 R
  2 L18                0203 R   |   2 L19                01F2 R
  2 L2                 00FF R   |   2 L22                02C1 R
  2 L23                02AB R   |   2 L24                022C R
  2 L29                0337 R   |   2 L3                 00D4 R
  2 L30                032C R   |   2 L31                0349 R
  2 L33                036E R   |   2 L34                0382 R
  2 L35                0396 R   |   2 L36                03AA R
  2 L37                03BE R   |   2 L38                03D2 R
  2 L39                03F1 R   |   2 L40                03EC R
  2 L41                0410 R   |   2 L42                040B R
  2 L43                042F R   |   2 L44                042A R
  2 L48                045F R   |   2 L51                04A5 R
  2 L53                04DD R   |   2 L58                051D R
  2 L59                0529 R   |   2 L6                 0183 R
  2 L60                04FF R   |   2 L62                0556 R
  2 L64                0607 R   |   2 L65                05D4 R
  2 L66                05DE R   |   2 L67                05E9 R
  2 L68                05FC R   |   2 L69                0593 R
  2 L7                 0111 R   |   2 L72                064A R
  2 L73                0625 R   |   2 LC0                018E R
  2 LC1                0199 R   |   2 LC2                020D R
  2 LC3                021B R   |   2 LC4                02CF R
  2 LC5                02DF R   |   2 LC6                0462 R
  2 LC7                0559 R   |   2 LC8                056E R
  2 LC9                0576 R   |   2 _Brainleft         009A GR
  2 _Brainright        007C GR  |     _Display_Gamef     **** GX
  2 _Display_Level     01CF GR  |   2 _Display_Rando     0225 GR
  2 _Display_TimeL     01A4 GR  |   2 _Gamefield         0061 GR
  2 _Level_advance     0014 GR  |     _Loadingbar        **** GX
  2 _Positions_Arr     00B8 GR  |   2 _Positions_Cur     0000 GR
  2 _RandomNumberG     00CE GR  |   3 _RandomSequenc     002B GR
  3 _RandomSequenc     002C GR  |   3 _SequenceTime      002E GR
  2 _Set_traps         0473 GR  |     _Vec_Buttons       **** GX
    _Vec_Joy_1_X       **** GX  |     _Vec_Joy_1_Y       **** GX
    _Vec_Joy_Mux_1     **** GX  |     _Vec_Joy_Mux_1     **** GX
    _Vec_Joy_Mux_2     **** GX  |     _Vec_Joy_Mux_2     **** GX
    __Do_Sound         **** GX  |     __Explosion_Sn     **** GX
    __Init_Music_c     **** GX  |     ___DP_to_C8        **** GX
    ___Intensity_5     **** GX  |     ___Joy_Digital     **** GX
    ___Read_Btns       **** GX  |     ___Wait_Recal      **** GX
  3 _a_random          0003 GR  |   3 _a_random_comp     0017 GR
  2 _advancement_c     0043 GR  |   2 _advancement_p     0052 GR
  2 _arrow             00BC GR  |   3 _b                 0002 GR
  3 _buttonspresse     0000 GR  |   2 _check_success     04F6 GR
  3 _counter           002F GR  |   2 _cross             0034 GR
    _current_explo     **** GX  |   3 _current_level     002D GR
    _current_music     **** GX  |   2 _display_game_     02EB GR
    _draw_cross        **** GX  |     _draw_menu_arr     **** GX
    _draw_round_ad     **** GX  |     _draw_round_ad     **** GX
  2 _execute_displ     04E9 GR  |   4 _execute_game_     0000 GR
  2 _execute_repea     04A6 GR  |   3 _joy_x             0030 GR
  3 _joy_y             0031 GR  |   2 _level_init        057C GR
  2 _level_play        0621 GR  |   2 _move_player       034C GR
    _play_tune         **** GX  |     _print_string      **** GX
  2 _rand              0108 GR  |   2 _read_player_i     0436 GR
  3 _sneakyoffset      0001 GR  |   3 _temppass          0032 GR
    _umodhi3           **** GX

ASxxxx Assembler V05.50  (Motorola 6809)                                Page 2
Hexadecimal [16-Bits]                                 Tue May 13 06:51:06 2025

Area Table

[_CSEG]
   0 _CODE            size    0   flags C080
   2 .text            size  653   flags  100
   3 .data            size   33   flags  100
   4 .bss             size    2   flags    0
[_DSEG]
   1 _DATA            size    0   flags C0C0

