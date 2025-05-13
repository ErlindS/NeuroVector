                              1 ;;; gcc for m6809 : Mar 17 2019 13:25:32
                              2 ;;; 4.3.6 (gcc6809)
                              3 ;;; ABI version 1
                              4 ;;; -mabi=bx -mint8 -fomit-frame-pointer -O0
                              5 	.module	level.c
                              6 	.globl	_Positions_Cursor
                              7 	.area	.text
   02BF                       8 _Positions_Cursor:
   02BF 00                    9 	.byte	0
   02C0 00                   10 	.byte	0
   02C1 10                   11 	.byte	16
   02C2 F0                   12 	.byte	-16
   02C3 10                   13 	.byte	16
   02C4 00                   14 	.byte	0
   02C5 10                   15 	.byte	16
   02C6 10                   16 	.byte	16
   02C7 00                   17 	.byte	0
   02C8 F0                   18 	.byte	-16
   02C9 00                   19 	.byte	0
   02CA 00                   20 	.byte	0
   02CB 00                   21 	.byte	0
   02CC 10                   22 	.byte	16
   02CD F0                   23 	.byte	-16
   02CE F0                   24 	.byte	-16
   02CF F0                   25 	.byte	-16
   02D0 00                   26 	.byte	0
   02D1 F0                   27 	.byte	-16
   02D2 10                   28 	.byte	16
                             29 	.globl	_cross
   02D3                      30 _cross:
   02D3 00                   31 	.byte	0
   02D4 20                   32 	.byte	32
   02D5 20                   33 	.byte	32
   02D6 FF                   34 	.byte	-1
   02D7 E0                   35 	.byte	-32
   02D8 E0                   36 	.byte	-32
   02D9 00                   37 	.byte	0
   02DA 20                   38 	.byte	32
   02DB 00                   39 	.byte	0
   02DC FF                   40 	.byte	-1
   02DD E0                   41 	.byte	-32
   02DE 20                   42 	.byte	32
   02DF 01                   43 	.byte	1
   02E0 00                   44 	.byte	0
   02E1 00                   45 	.byte	0
                             46 	.globl	_Gamefield
   02E2                      47 _Gamefield:
   02E2 00                   48 	.byte	0
   02E3 18                   49 	.byte	24
   02E4 F8                   50 	.byte	-8
   02E5 FF                   51 	.byte	-1
   02E6 D0                   52 	.byte	-48
   02E7 00                   53 	.byte	0
   02E8 00                   54 	.byte	0
   02E9 00                   55 	.byte	0
   02EA 10                   56 	.byte	16
   02EB FF                   57 	.byte	-1
   02EC 30                   58 	.byte	48
   02ED 00                   59 	.byte	0
   02EE 00                   60 	.byte	0
   02EF F0                   61 	.byte	-16
   02F0 10                   62 	.byte	16
   02F1 FF                   63 	.byte	-1
   02F2 00                   64 	.byte	0
   02F3 D0                   65 	.byte	-48
   02F4 00                   66 	.byte	0
   02F5 F0                   67 	.byte	-16
   02F6 00                   68 	.byte	0
   02F7 FF                   69 	.byte	-1
   02F8 00                   70 	.byte	0
   02F9 30                   71 	.byte	48
   02FA 01                   72 	.byte	1
   02FB 00                   73 	.byte	0
   02FC 00                   74 	.byte	0
                             75 	.globl	_Brainright
   02FD                      76 _Brainright:
   02FD 00                   77 	.byte	0
   02FE D3                   78 	.byte	-45
   02FF 00                   79 	.byte	0
   0300 FF                   80 	.byte	-1
   0301 FB                   81 	.byte	-5
   0302 05                   82 	.byte	5
   0303 FF                   83 	.byte	-1
   0304 01                   84 	.byte	1
   0305 0F                   85 	.byte	15
   0306 FF                   86 	.byte	-1
   0307 0A                   87 	.byte	10
   0308 07                   88 	.byte	7
   0309 FF                   89 	.byte	-1
   030A 0A                   90 	.byte	10
   030B 05                   91 	.byte	5
   030C FF                   92 	.byte	-1
   030D 2D                   93 	.byte	45
   030E FF                   94 	.byte	-1
   030F FF                   95 	.byte	-1
   0310 05                   96 	.byte	5
   0311 F6                   97 	.byte	-10
   0312 FF                   98 	.byte	-1
   0313 00                   99 	.byte	0
   0314 F6                  100 	.byte	-10
   0315 FF                  101 	.byte	-1
   0316 FB                  102 	.byte	-5
   0317 F6                  103 	.byte	-10
   0318 01                  104 	.byte	1
   0319 00                  105 	.byte	0
   031A 00                  106 	.byte	0
                            107 	.globl	_Brainleft
   031B                     108 _Brainleft:
   031B 00                  109 	.byte	0
   031C D3                  110 	.byte	-45
   031D 00                  111 	.byte	0
   031E FF                  112 	.byte	-1
   031F FB                  113 	.byte	-5
   0320 FB                  114 	.byte	-5
   0321 FF                  115 	.byte	-1
   0322 01                  116 	.byte	1
   0323 F1                  117 	.byte	-15
   0324 FF                  118 	.byte	-1
   0325 0A                  119 	.byte	10
   0326 F9                  120 	.byte	-7
   0327 FF                  121 	.byte	-1
   0328 0A                  122 	.byte	10
   0329 FB                  123 	.byte	-5
   032A FF                  124 	.byte	-1
   032B 2D                  125 	.byte	45
   032C 01                  126 	.byte	1
   032D FF                  127 	.byte	-1
   032E 05                  128 	.byte	5
   032F 0A                  129 	.byte	10
   0330 FF                  130 	.byte	-1
   0331 00                  131 	.byte	0
   0332 0A                  132 	.byte	10
   0333 FF                  133 	.byte	-1
   0334 FB                  134 	.byte	-5
   0335 0A                  135 	.byte	10
   0336 01                  136 	.byte	1
   0337 00                  137 	.byte	0
   0338 00                  138 	.byte	0
                            139 	.globl	_Positions_Arrow
   0339                     140 _Positions_Arrow:
   0339 3C                  141 	.byte	60
   033A C9                  142 	.byte	-55
   033B 28                  143 	.byte	40
   033C C9                  144 	.byte	-55
                            145 	.globl	_arrow
   033D                     146 _arrow:
   033D 00                  147 	.byte	0
   033E 04                  148 	.byte	4
   033F 00                  149 	.byte	0
   0340 FF                  150 	.byte	-1
   0341 F6                  151 	.byte	-10
   0342 0A                  152 	.byte	10
   0343 FF                  153 	.byte	-1
   0344 F6                  154 	.byte	-10
   0345 F6                  155 	.byte	-10
   0346 00                  156 	.byte	0
   0347 0A                  157 	.byte	10
   0348 0A                  158 	.byte	10
   0349 FF                  159 	.byte	-1
   034A 00                  160 	.byte	0
   034B EC                  161 	.byte	-20
   034C 01                  162 	.byte	1
   034D 00                  163 	.byte	0
   034E 00                  164 	.byte	0
                            165 	.globl	_a_random
                            166 	.area	.data
   C889                     167 _a_random:
   C889 03                  168 	.byte	3
   C88A 09                  169 	.byte	9
   C88B 07                  170 	.byte	7
   C88C 05                  171 	.byte	5
   C88D 05                  172 	.byte	5
   C88E 08                  173 	.byte	8
   C88F 04                  174 	.byte	4
   C890 05                  175 	.byte	5
   C891 09                  176 	.byte	9
   C892 08                  177 	.byte	8
   C893 01                  178 	.byte	1
   C894 05                  179 	.byte	5
   C895 09                  180 	.byte	9
   C896 02                  181 	.byte	2
   C897 09                  182 	.byte	9
   C898 06                  183 	.byte	6
   C899 03                  184 	.byte	3
   C89A 01                  185 	.byte	1
   C89B 06                  186 	.byte	6
   C89C 03                  187 	.byte	3
                            188 	.globl	_a_random_compare
   C89D                     189 _a_random_compare:
   C89D 00 00 00 00 00 00   190 	.word	0,0,0,0,0,0,0,0,0,0
        00 00 00 00 00 00
        00 00 00 00 00 00
        00 00
                            191 	.globl	_RandomSequenceCounter
   C8B1                     192 _RandomSequenceCounter:
   C8B1 C8                  193 	.byte	-56
                            194 	.globl	_RandomSequenceCounterDisplay
   C8B2                     195 _RandomSequenceCounterDisplay:
   C8B2 00                  196 	.byte	0
                            197 	.area	.text
                            198 	.globl	_RandomNumberGenerator
   034F                     199 _RandomNumberGenerator:
   034F 32 7D         [ 5]  200 	leas	-3,s
   0351 6F 62         [ 7]  201 	clr	2,s
   0353 20 2B         [ 3]  202 	bra	L2
   0355                     203 L3:
   0355 E6 62         [ 5]  204 	ldb	2,s
   0357 E7 61         [ 5]  205 	stb	1,s
   0359 E6 62         [ 5]  206 	ldb	2,s
   035B 1D            [ 2]  207 	sex		;extendqihi2: R:b -> R:d
   035C 1F 01         [ 6]  208 	tfr	d,x
   035E E6 89 C8 89   [ 8]  209 	ldb	_a_random,x
   0362 4F            [ 2]  210 	clra		;zero_extendqihi: R:b -> R:d
   0363 8E 00 0A      [ 3]  211 	ldx	#10
   0366 34 10         [ 6]  212 	pshs	x
   0368 1F 01         [ 6]  213 	tfr	d,x
   036A BD 08 9E      [ 8]  214 	jsr	_umodhi3
   036D 32 62         [ 5]  215 	leas	2,s
   036F 1F 10         [ 6]  216 	tfr	x,d	;movlsbqihi: R:x -> R:b
   0371 E7 E4         [ 4]  217 	stb	,s
   0373 E6 61         [ 5]  218 	ldb	1,s
   0375 1D            [ 2]  219 	sex		;extendqihi2: R:b -> R:d
   0376 1F 01         [ 6]  220 	tfr	d,x
   0378 E6 E4         [ 4]  221 	ldb	,s
   037A E7 89 C8 89   [ 8]  222 	stb	_a_random,x
   037E 6C 62         [ 7]  223 	inc	2,s
   0380                     224 L2:
   0380 E6 62         [ 5]  225 	ldb	2,s
   0382 C1 13         [ 2]  226 	cmpb	#19	;cmpqi:
   0384 2F CF         [ 3]  227 	ble	L3
   0386 32 63         [ 5]  228 	leas	3,s
   0388 39            [ 5]  229 	rts
                            230 	.globl	_rand
   0389                     231 _rand:
   0389 32 79         [ 5]  232 	leas	-7,s
   038B E7 65         [ 5]  233 	stb	5,s
   038D 6F 66         [ 7]  234 	clr	6,s
   038F 16 00 72      [ 5]  235 	lbra	L6
   0392                     236 L7:
   0392 E6 65         [ 5]  237 	ldb	5,s
   0394 54            [ 2]  238 	lsrb
   0395 54            [ 2]  239 	lsrb
   0396 54            [ 2]  240 	lsrb
   0397 54            [ 2]  241 	lsrb
   0398 E7 61         [ 5]  242 	stb	1,s
   039A E6 65         [ 5]  243 	ldb	5,s
   039C E8 61         [ 5]  244 	eorb	1,s
   039E E7 65         [ 5]  245 	stb	5,s
   03A0 E6 65         [ 5]  246 	ldb	5,s
   03A2 58            [ 2]  247 	aslb
   03A3 58            [ 2]  248 	aslb
   03A4 58            [ 2]  249 	aslb
   03A5 E7 E4         [ 4]  250 	stb	,s
   03A7 E6 E4         [ 4]  251 	ldb	,s
   03A9 EB 65         [ 5]  252 	addb	5,s
   03AB E7 65         [ 5]  253 	stb	5,s
   03AD E6 65         [ 5]  254 	ldb	5,s
   03AF 59            [ 2]  255 	rolb
   03B0 59            [ 2]  256 	rolb
   03B1 59            [ 2]  257 	rolb
   03B2 C4 03         [ 2]  258 	andb	#3
   03B4 E7 62         [ 5]  259 	stb	2,s
   03B6 E6 65         [ 5]  260 	ldb	5,s
   03B8 E8 62         [ 5]  261 	eorb	2,s
   03BA E7 65         [ 5]  262 	stb	5,s
   03BC E6 65         [ 5]  263 	ldb	5,s
   03BE 58            [ 2]  264 	aslb
   03BF 58            [ 2]  265 	aslb
   03C0 E7 E4         [ 4]  266 	stb	,s
   03C2 E6 E4         [ 4]  267 	ldb	,s
   03C4 EB 65         [ 5]  268 	addb	5,s
   03C6 E7 65         [ 5]  269 	stb	5,s
   03C8 E6 65         [ 5]  270 	ldb	5,s
   03CA 54            [ 2]  271 	lsrb
   03CB 54            [ 2]  272 	lsrb
   03CC 54            [ 2]  273 	lsrb
   03CD 54            [ 2]  274 	lsrb
   03CE 54            [ 2]  275 	lsrb
   03CF E7 63         [ 5]  276 	stb	3,s
   03D1 E6 65         [ 5]  277 	ldb	5,s
   03D3 E8 63         [ 5]  278 	eorb	3,s
   03D5 E7 65         [ 5]  279 	stb	5,s
   03D7 E6 66         [ 5]  280 	ldb	6,s
   03D9 E7 64         [ 5]  281 	stb	4,s
   03DB E6 66         [ 5]  282 	ldb	6,s
   03DD 1D            [ 2]  283 	sex		;extendqihi2: R:b -> R:d
   03DE 1F 01         [ 6]  284 	tfr	d,x
   03E0 E6 89 C8 89   [ 8]  285 	ldb	_a_random,x
   03E4 EB 65         [ 5]  286 	addb	5,s
   03E6 4F            [ 2]  287 	clra		;zero_extendqihi: R:b -> R:d
   03E7 8E 00 0A      [ 3]  288 	ldx	#10
   03EA 34 10         [ 6]  289 	pshs	x
   03EC 1F 01         [ 6]  290 	tfr	d,x
   03EE BD 08 9E      [ 8]  291 	jsr	_umodhi3
   03F1 32 62         [ 5]  292 	leas	2,s
   03F3 1F 10         [ 6]  293 	tfr	x,d	;movlsbqihi: R:x -> R:b
   03F5 E7 E4         [ 4]  294 	stb	,s
   03F7 E6 64         [ 5]  295 	ldb	4,s
   03F9 1D            [ 2]  296 	sex		;extendqihi2: R:b -> R:d
   03FA 1F 01         [ 6]  297 	tfr	d,x
   03FC E6 E4         [ 4]  298 	ldb	,s
   03FE E7 89 C8 89   [ 8]  299 	stb	_a_random,x
   0402 6C 66         [ 7]  300 	inc	6,s
   0404                     301 L6:
   0404 E6 66         [ 5]  302 	ldb	6,s
   0406 C1 13         [ 2]  303 	cmpb	#19	;cmpqi:
   0408 10 2F FF 86   [ 6]  304 	lble	L7
   040C 32 67         [ 5]  305 	leas	7,s
   040E 39            [ 5]  306 	rts
                            307 	.globl	_current_level
                            308 	.area	.data
   C8B3                     309 _current_level:
   C8B3 00                  310 	.byte	0
                            311 	.globl	_SequenceTime
   C8B4                     312 _SequenceTime:
   C8B4 01                  313 	.byte	1
                            314 	.globl	_counter
   C8B5                     315 _counter:
   C8B5 00                  316 	.byte	0
                            317 	.area	.text
   040F                     318 LC0:
   040F 54 49 4D 45 20 4C   319 	.byte	84,73,77,69,32,76,69,70
        45 46
   0417 54 80 00            320 	.byte	84,-128,0
   041A                     321 LC1:
   041A 47 41 4D 45 20 4F   322 	.byte	71,65,77,69,32,79,86,69
        56 45
   0422 52 80 00            323 	.byte	82,-128,0
                            324 	.globl	_Display_TimeLeft
   0425                     325 _Display_TimeLeft:
   0425 C6 C4         [ 2]  326 	ldb	#-60
   0427 E7 E2         [ 6]  327 	stb	,-s
   0429 8E 04 0F      [ 3]  328 	ldx	#LC0
   042C C6 64         [ 2]  329 	ldb	#100
   042E BD 07 F7      [ 8]  330 	jsr	_print_string
   0431 32 61         [ 5]  331 	leas	1,s
   0433 F6 C8 B5      [ 5]  332 	ldb	_counter
   0436 BD 01 79      [ 8]  333 	jsr	_Loadingbar
   0439 F6 C8 B5      [ 5]  334 	ldb	_counter
   043C 5D            [ 2]  335 	tstb
   043D 26 10         [ 3]  336 	bne	L12
   043F                     337 L11:
   043F C6 C4         [ 2]  338 	ldb	#-60
   0441 E7 E2         [ 6]  339 	stb	,-s
   0443 8E 04 1A      [ 3]  340 	ldx	#LC1
   0446 C6 64         [ 2]  341 	ldb	#100
   0448 BD 07 F7      [ 8]  342 	jsr	_print_string
   044B 32 61         [ 5]  343 	leas	1,s
   044D 20 F0         [ 3]  344 	bra	L11
   044F                     345 L12:
   044F 39            [ 5]  346 	rts
   0450                     347 LC2:
   0450 52 45 4D 45 4D 42   348 	.byte	82,69,77,69,77,66,69,82
        45 52
   0458 20 54 48 45 80 00   349 	.byte	32,84,72,69,-128,0
   045E                     350 LC3:
   045E 53 45 51 55 45 4E   351 	.byte	83,69,81,85,69,78,67,69
        43 45
   0466 80 00               352 	.byte	-128,0
                            353 	.globl	_Display_RandomSequence
   0468                     354 _Display_RandomSequence:
   0468 32 7D         [ 5]  355 	leas	-3,s
   046A 6F 62         [ 7]  356 	clr	2,s
   046C 16 00 8B      [ 5]  357 	lbra	L14
   046F                     358 L16:
   046F C6 C8         [ 2]  359 	ldb	#-56
   0471 F7 C8 B5      [ 5]  360 	stb	_counter
   0474 BD F1 92      [ 8]  361 	jsr	___Wait_Recal
   0477 BD 01 3F      [ 8]  362 	jsr	_Display_Gamefield
   047A C6 B5         [ 2]  363 	ldb	#-75
   047C E7 E2         [ 6]  364 	stb	,-s
   047E 8E 04 50      [ 3]  365 	ldx	#LC2
   0481 C6 64         [ 2]  366 	ldb	#100
   0483 BD 07 F7      [ 8]  367 	jsr	_print_string
   0486 32 61         [ 5]  368 	leas	1,s
   0488 C6 CE         [ 2]  369 	ldb	#-50
   048A E7 E2         [ 6]  370 	stb	,-s
   048C 8E 04 5E      [ 3]  371 	ldx	#LC3
   048F C6 50         [ 2]  372 	ldb	#80
   0491 BD 07 F7      [ 8]  373 	jsr	_print_string
   0494 32 61         [ 5]  374 	leas	1,s
   0496 E6 62         [ 5]  375 	ldb	2,s
   0498 4F            [ 2]  376 	clra		;zero_extendqihi: R:b -> R:d
   0499 1F 01         [ 6]  377 	tfr	d,x
   049B E6 89 C8 89   [ 8]  378 	ldb	_a_random,x
   049F BD 00 EE      [ 8]  379 	jsr	_draw_cross
   04A2 E6 62         [ 5]  380 	ldb	2,s
   04A4 5C            [ 2]  381 	incb
   04A5 86 64         [ 2]  382 	lda	#100	;umulqihi3
   04A7 3D            [11]  383 	mul
                            384 		;movlsbqihi: D->B
   04A8 4F            [ 2]  385 	clra		;zero_extendqihi: R:b -> R:d
   04A9 ED E4         [ 5]  386 	std	,s
   04AB C6 C8         [ 2]  387 	ldb	#-56
   04AD E7 E2         [ 6]  388 	stb	,-s
   04AF AE 61         [ 6]  389 	ldx	1,s
   04B1 C6 01         [ 2]  390 	ldb	#1
   04B3 BD 08 C1      [ 8]  391 	jsr	_play_tune
   04B6 32 61         [ 5]  392 	leas	1,s
   04B8 E6 62         [ 5]  393 	ldb	2,s
   04BA 5C            [ 2]  394 	incb
   04BB 86 64         [ 2]  395 	lda	#100	;umulqihi3
   04BD 3D            [11]  396 	mul
                            397 		;movlsbqihi: D->B
   04BE 4F            [ 2]  398 	clra		;zero_extendqihi: R:b -> R:d
   04BF ED E4         [ 5]  399 	std	,s
   04C1 C6 C8         [ 2]  400 	ldb	#-56
   04C3 E7 E2         [ 6]  401 	stb	,-s
   04C5 AE 61         [ 6]  402 	ldx	1,s
   04C7 C6 02         [ 2]  403 	ldb	#2
   04C9 BD 08 C1      [ 8]  404 	jsr	_play_tune
   04CC 32 61         [ 5]  405 	leas	1,s
   04CE E6 62         [ 5]  406 	ldb	2,s
   04D0 5C            [ 2]  407 	incb
   04D1 86 64         [ 2]  408 	lda	#100	;umulqihi3
   04D3 3D            [11]  409 	mul
                            410 		;movlsbqihi: D->B
   04D4 4F            [ 2]  411 	clra		;zero_extendqihi: R:b -> R:d
   04D5 ED E4         [ 5]  412 	std	,s
   04D7 C6 C8         [ 2]  413 	ldb	#-56
   04D9 E7 E2         [ 6]  414 	stb	,-s
   04DB AE 61         [ 6]  415 	ldx	1,s
   04DD C6 03         [ 2]  416 	ldb	#3
   04DF BD 08 C1      [ 8]  417 	jsr	_play_tune
   04E2 32 61         [ 5]  418 	leas	1,s
   04E4                     419 L15:
   04E4 F6 C8 B1      [ 5]  420 	ldb	_RandomSequenceCounter
   04E7 5A            [ 2]  421 	decb
   04E8 F7 C8 B1      [ 5]  422 	stb	_RandomSequenceCounter
   04EB F6 C8 B1      [ 5]  423 	ldb	_RandomSequenceCounter
   04EE 5D            [ 2]  424 	tstb
   04EF 10 26 FF 7C   [ 6]  425 	lbne	L16
   04F3 C6 1E         [ 2]  426 	ldb	#30
   04F5 F7 C8 B1      [ 5]  427 	stb	_RandomSequenceCounter
   04F8 6C 62         [ 7]  428 	inc	2,s
   04FA                     429 L14:
   04FA F6 C8 B2      [ 5]  430 	ldb	_RandomSequenceCounterDisplay
   04FD 5C            [ 2]  431 	incb
   04FE E1 62         [ 5]  432 	cmpb	2,s	;cmpqi:
   0500 22 E2         [ 3]  433 	bhi	L15
   0502 7F C8 B4      [ 7]  434 	clr	_SequenceTime
   0505 32 63         [ 5]  435 	leas	3,s
   0507 39            [ 5]  436 	rts
                            437 	.area	.bss
                            438 	.globl	_execute_game_playing_state
   C8BE                     439 _execute_game_playing_state:	.blkb	2
                            440 	.globl	_buttonspressedcounter
                            441 	.area	.data
   C8B6                     442 _buttonspressedcounter:
   C8B6 00                  443 	.byte	0
                            444 	.area	.text
   0508                     445 LC4:
   0508 50 52 45 53 53 20   446 	.byte	80,82,69,83,83,32,50,32
        32 20
   0510 42 55 54 54 4F 4E   447 	.byte	66,85,84,84,79,78,-128,0
        80 00
   0518                     448 LC5:
   0518 54 4F 20 52 45 53   449 	.byte	84,79,32,82,69,83,84,65
        54 41
   0520 52 54 80 00         450 	.byte	82,84,-128,0
                            451 	.globl	_display_game_over
   0524                     452 _display_game_over:
   0524 32 7F         [ 5]  453 	leas	-1,s
   0526 C6 C4         [ 2]  454 	ldb	#-60
   0528 E7 E2         [ 6]  455 	stb	,-s
   052A 8E 04 1A      [ 3]  456 	ldx	#LC1
   052D C6 64         [ 2]  457 	ldb	#100
   052F BD 07 F7      [ 8]  458 	jsr	_print_string
   0532 32 61         [ 5]  459 	leas	1,s
   0534 C6 B0         [ 2]  460 	ldb	#-80
   0536 E7 E2         [ 6]  461 	stb	,-s
   0538 8E 05 08      [ 3]  462 	ldx	#LC4
   053B C6 50         [ 2]  463 	ldb	#80
   053D BD 07 F7      [ 8]  464 	jsr	_print_string
   0540 32 61         [ 5]  465 	leas	1,s
   0542 C6 C4         [ 2]  466 	ldb	#-60
   0544 E7 E2         [ 6]  467 	stb	,-s
   0546 8E 05 18      [ 3]  468 	ldx	#LC5
   0549 C6 3C         [ 2]  469 	ldb	#60
   054B BD 07 F7      [ 8]  470 	jsr	_print_string
   054E 32 61         [ 5]  471 	leas	1,s
   0550 BD F1 BA      [ 8]  472 	jsr	___Read_Btns
   0553 F6 C8 11      [ 5]  473 	ldb	_Vec_Buttons
   0556 C4 02         [ 2]  474 	andb	#2
   0558 5D            [ 2]  475 	tstb
   0559 27 27         [ 3]  476 	beq	L23
   055B 8E 06 90      [ 3]  477 	ldx	#_execute_display_sequence_state
   055E BF C8 BE      [ 6]  478 	stx	_execute_game_playing_state
   0561 6F E4         [ 6]  479 	clr	,s
   0563 20 0B         [ 3]  480 	bra	L21
   0565                     481 L22:
   0565 E6 E4         [ 4]  482 	ldb	,s
   0567 1D            [ 2]  483 	sex		;extendqihi2: R:b -> R:d
   0568 1F 01         [ 6]  484 	tfr	d,x
   056A 6F 89 C8 9D   [10]  485 	clr	_a_random_compare,x
   056E 6C E4         [ 6]  486 	inc	,s
   0570                     487 L21:
   0570 E6 E4         [ 4]  488 	ldb	,s
   0572 C1 13         [ 2]  489 	cmpb	#19	;cmpqi:
   0574 2F EF         [ 3]  490 	ble	L22
   0576 F6 C8 B2      [ 5]  491 	ldb	_RandomSequenceCounterDisplay
   0579 BD 03 89      [ 8]  492 	jsr	_rand
   057C 7F C8 B2      [ 7]  493 	clr	_RandomSequenceCounterDisplay
   057F 7F C8 B6      [ 7]  494 	clr	_buttonspressedcounter
   0582                     495 L23:
   0582 32 61         [ 5]  496 	leas	1,s
   0584 39            [ 5]  497 	rts
                            498 	.globl	_joy_x
                            499 	.area	.data
   C8B7                     500 _joy_x:
   C8B7 00                  501 	.byte	0
                            502 	.globl	_joy_y
   C8B8                     503 _joy_y:
   C8B8 00                  504 	.byte	0
                            505 	.globl	_temppass
   C8B9                     506 _temppass:
   C8B9 00                  507 	.byte	0
                            508 	.area	.text
                            509 	.globl	_move_player
   0585                     510 _move_player:
   0585 BD F1 F8      [ 8]  511 	jsr	___Joy_Digital
   0588 F6 C8 1B      [ 5]  512 	ldb	_Vec_Joy_1_X
   058B F7 C8 B7      [ 5]  513 	stb	_joy_x
   058E F6 C8 1C      [ 5]  514 	ldb	_Vec_Joy_1_Y
   0591 F7 C8 B8      [ 5]  515 	stb	_joy_y
   0594 F6 C8 B7      [ 5]  516 	ldb	_joy_x
   0597 34 04         [ 6]  517 	pshs	b
   0599 C6 A6         [ 2]  518 	ldb	#-90
   059B E7 E2         [ 6]  519 	stb	,-s
   059D C6 BA         [ 2]  520 	ldb	#-70
   059F BD 08 33      [ 8]  521 	jsr	_print_signed_int
   05A2 32 62         [ 5]  522 	leas	2,s
   05A4 F6 C8 B8      [ 5]  523 	ldb	_joy_y
   05A7 34 04         [ 6]  524 	pshs	b
   05A9 C6 CE         [ 2]  525 	ldb	#-50
   05AB E7 E2         [ 6]  526 	stb	,-s
   05AD C6 BA         [ 2]  527 	ldb	#-70
   05AF BD 08 33      [ 8]  528 	jsr	_print_signed_int
   05B2 32 62         [ 5]  529 	leas	2,s
   05B4 F6 C8 B7      [ 5]  530 	ldb	_joy_x
   05B7 5D            [ 2]  531 	tstb
   05B8 2C 0B         [ 3]  532 	bge	L25
   05BA F6 C8 B8      [ 5]  533 	ldb	_joy_y
   05BD 5D            [ 2]  534 	tstb
   05BE 2F 05         [ 3]  535 	ble	L25
   05C0 C6 01         [ 2]  536 	ldb	#1
   05C2 F7 C8 B9      [ 5]  537 	stb	_temppass
   05C5                     538 L25:
   05C5 F6 C8 B7      [ 5]  539 	ldb	_joy_x
   05C8 5D            [ 2]  540 	tstb
   05C9 26 0B         [ 3]  541 	bne	L26
   05CB F6 C8 B8      [ 5]  542 	ldb	_joy_y
   05CE 5D            [ 2]  543 	tstb
   05CF 2F 05         [ 3]  544 	ble	L26
   05D1 C6 02         [ 2]  545 	ldb	#2
   05D3 F7 C8 B9      [ 5]  546 	stb	_temppass
   05D6                     547 L26:
   05D6 F6 C8 B7      [ 5]  548 	ldb	_joy_x
   05D9 5D            [ 2]  549 	tstb
   05DA 2F 0B         [ 3]  550 	ble	L27
   05DC F6 C8 B8      [ 5]  551 	ldb	_joy_y
   05DF 5D            [ 2]  552 	tstb
   05E0 2F 05         [ 3]  553 	ble	L27
   05E2 C6 03         [ 2]  554 	ldb	#3
   05E4 F7 C8 B9      [ 5]  555 	stb	_temppass
   05E7                     556 L27:
   05E7 F6 C8 B7      [ 5]  557 	ldb	_joy_x
   05EA 5D            [ 2]  558 	tstb
   05EB 2C 0B         [ 3]  559 	bge	L28
   05ED F6 C8 B8      [ 5]  560 	ldb	_joy_y
   05F0 5D            [ 2]  561 	tstb
   05F1 26 05         [ 3]  562 	bne	L28
   05F3 C6 04         [ 2]  563 	ldb	#4
   05F5 F7 C8 B9      [ 5]  564 	stb	_temppass
   05F8                     565 L28:
   05F8 F6 C8 B7      [ 5]  566 	ldb	_joy_x
   05FB 5D            [ 2]  567 	tstb
   05FC 26 0B         [ 3]  568 	bne	L29
   05FE F6 C8 B8      [ 5]  569 	ldb	_joy_y
   0601 5D            [ 2]  570 	tstb
   0602 26 05         [ 3]  571 	bne	L29
   0604 C6 05         [ 2]  572 	ldb	#5
   0606 F7 C8 B9      [ 5]  573 	stb	_temppass
   0609                     574 L29:
   0609 F6 C8 B7      [ 5]  575 	ldb	_joy_x
   060C 5D            [ 2]  576 	tstb
   060D 2F 0B         [ 3]  577 	ble	L30
   060F F6 C8 B8      [ 5]  578 	ldb	_joy_y
   0612 5D            [ 2]  579 	tstb
   0613 26 05         [ 3]  580 	bne	L30
   0615 C6 06         [ 2]  581 	ldb	#6
   0617 F7 C8 B9      [ 5]  582 	stb	_temppass
   061A                     583 L30:
   061A F6 C8 B7      [ 5]  584 	ldb	_joy_x
   061D 5D            [ 2]  585 	tstb
   061E 2C 0B         [ 3]  586 	bge	L31
   0620 F6 C8 B8      [ 5]  587 	ldb	_joy_y
   0623 5D            [ 2]  588 	tstb
   0624 2C 05         [ 3]  589 	bge	L31
   0626 C6 07         [ 2]  590 	ldb	#7
   0628 F7 C8 B9      [ 5]  591 	stb	_temppass
   062B                     592 L31:
   062B F6 C8 B7      [ 5]  593 	ldb	_joy_x
   062E 5D            [ 2]  594 	tstb
   062F 26 0B         [ 3]  595 	bne	L32
   0631 F6 C8 B8      [ 5]  596 	ldb	_joy_y
   0634 5D            [ 2]  597 	tstb
   0635 2C 05         [ 3]  598 	bge	L32
   0637 C6 08         [ 2]  599 	ldb	#8
   0639 F7 C8 B9      [ 5]  600 	stb	_temppass
   063C                     601 L32:
   063C F6 C8 B7      [ 5]  602 	ldb	_joy_x
   063F 5D            [ 2]  603 	tstb
   0640 2F 0B         [ 3]  604 	ble	L33
   0642 F6 C8 B8      [ 5]  605 	ldb	_joy_y
   0645 5D            [ 2]  606 	tstb
   0646 2C 05         [ 3]  607 	bge	L33
   0648 C6 09         [ 2]  608 	ldb	#9
   064A F7 C8 B9      [ 5]  609 	stb	_temppass
   064D                     610 L33:
   064D F6 C8 B9      [ 5]  611 	ldb	_temppass
   0650 BD 00 EE      [ 8]  612 	jsr	_draw_cross
   0653 39            [ 5]  613 	rts
                            614 	.globl	_read_player_input
   0654                     615 _read_player_input:
   0654 32 7E         [ 5]  616 	leas	-2,s
   0656 BD F1 BA      [ 8]  617 	jsr	___Read_Btns
   0659 F6 C8 11      [ 5]  618 	ldb	_Vec_Buttons
   065C C4 01         [ 2]  619 	andb	#1
   065E 5D            [ 2]  620 	tstb
   065F 27 1C         [ 3]  621 	beq	L37
   0661 F6 C8 B6      [ 5]  622 	ldb	_buttonspressedcounter
   0664 E7 E4         [ 4]  623 	stb	,s
   0666 F6 C8 B9      [ 5]  624 	ldb	_temppass
   0669 E7 61         [ 5]  625 	stb	1,s
   066B E6 E4         [ 4]  626 	ldb	,s
   066D 4F            [ 2]  627 	clra		;zero_extendqihi: R:b -> R:d
   066E 1F 01         [ 6]  628 	tfr	d,x
   0670 E6 61         [ 5]  629 	ldb	1,s
   0672 E7 89 C8 9D   [ 8]  630 	stb	_a_random_compare,x
   0676 F6 C8 B6      [ 5]  631 	ldb	_buttonspressedcounter
   0679 5C            [ 2]  632 	incb
   067A F7 C8 B6      [ 5]  633 	stb	_buttonspressedcounter
   067D                     634 L37:
   067D 32 62         [ 5]  635 	leas	2,s
   067F 39            [ 5]  636 	rts
                            637 	.globl	_execute_repeat_sequence_state
   0680                     638 _execute_repeat_sequence_state:
   0680 BD 01 3F      [ 8]  639 	jsr	_Display_Gamefield
   0683 BD 04 25      [ 8]  640 	jsr	_Display_TimeLeft
   0686 BD 05 85      [ 8]  641 	jsr	_move_player
   0689 BD 06 54      [ 8]  642 	jsr	_read_player_input
   068C BD 06 9D      [ 8]  643 	jsr	_check_successfully_repeated
   068F 39            [ 5]  644 	rts
                            645 	.globl	_execute_display_sequence_state
   0690                     646 _execute_display_sequence_state:
   0690 BD 01 3F      [ 8]  647 	jsr	_Display_Gamefield
   0693 BD 04 68      [ 8]  648 	jsr	_Display_RandomSequence
   0696 8E 06 80      [ 3]  649 	ldx	#_execute_repeat_sequence_state
   0699 BF C8 BE      [ 6]  650 	stx	_execute_game_playing_state
   069C 39            [ 5]  651 	rts
                            652 	.globl	_check_successfully_repeated
   069D                     653 _check_successfully_repeated:
   069D 32 7B         [ 5]  654 	leas	-5,s
   069F F6 C8 B6      [ 5]  655 	ldb	_buttonspressedcounter
   06A2 E7 64         [ 5]  656 	stb	4,s
   06A4 20 1E         [ 3]  657 	bra	L43
   06A6                     658 L45:
   06A6 E6 64         [ 5]  659 	ldb	4,s
   06A8 4F            [ 2]  660 	clra		;zero_extendqihi: R:b -> R:d
   06A9 1F 01         [ 6]  661 	tfr	d,x
   06AB E6 89 C8 89   [ 8]  662 	ldb	_a_random,x
   06AF E7 62         [ 5]  663 	stb	2,s
   06B1 E6 64         [ 5]  664 	ldb	4,s
   06B3 4F            [ 2]  665 	clra		;zero_extendqihi: R:b -> R:d
   06B4 1F 01         [ 6]  666 	tfr	d,x
   06B6 E6 89 C8 9D   [ 8]  667 	ldb	_a_random_compare,x
   06BA E1 62         [ 5]  668 	cmpb	2,s	;cmpqi:(R)
   06BC 27 06         [ 3]  669 	beq	L43
   06BE 8E 05 24      [ 3]  670 	ldx	#_display_game_over
   06C1 BF C8 BE      [ 6]  671 	stx	_execute_game_playing_state
   06C4                     672 L43:
   06C4 E6 64         [ 5]  673 	ldb	4,s
   06C6 E7 61         [ 5]  674 	stb	1,s
   06C8 6D 61         [ 7]  675 	tst	1,s
   06CA 27 04         [ 3]  676 	beq	L44
   06CC C6 01         [ 2]  677 	ldb	#1
   06CE E7 61         [ 5]  678 	stb	1,s
   06D0                     679 L44:
   06D0 E6 61         [ 5]  680 	ldb	1,s
   06D2 6A 64         [ 7]  681 	dec	4,s
   06D4 5D            [ 2]  682 	tstb
   06D5 26 CF         [ 3]  683 	bne	L45
   06D7 F6 C8 B2      [ 5]  684 	ldb	_RandomSequenceCounterDisplay
   06DA E7 E4         [ 4]  685 	stb	,s
   06DC E6 E4         [ 4]  686 	ldb	,s
   06DE 5C            [ 2]  687 	incb
   06DF E7 63         [ 5]  688 	stb	3,s
   06E1 F6 C8 B6      [ 5]  689 	ldb	_buttonspressedcounter
   06E4 E1 63         [ 5]  690 	cmpb	3,s	;cmpqi:(R)
   06E6 26 15         [ 3]  691 	bne	L47
   06E8 F6 C8 B2      [ 5]  692 	ldb	_RandomSequenceCounterDisplay
   06EB 5C            [ 2]  693 	incb
   06EC F7 C8 B2      [ 5]  694 	stb	_RandomSequenceCounterDisplay
   06EF 7F C8 B6      [ 7]  695 	clr	_buttonspressedcounter
   06F2 C6 C8         [ 2]  696 	ldb	#-56
   06F4 F7 C8 B5      [ 5]  697 	stb	_counter
   06F7 8E 06 90      [ 3]  698 	ldx	#_execute_display_sequence_state
   06FA BF C8 BE      [ 6]  699 	stx	_execute_game_playing_state
   06FD                     700 L47:
   06FD 32 65         [ 5]  701 	leas	5,s
   06FF 39            [ 5]  702 	rts
   0700                     703 LC6:
   0700 53 45 4C 45 43 54   704 	.byte	83,69,76,69,67,84,32,84
        20 54
   0708 48 45 20 47 41 4D   705 	.byte	72,69,32,71,65,77,69,77
        45 4D
   0710 4F 44 45 80 00      706 	.byte	79,68,69,-128,0
   0715                     707 LC7:
   0715 4E 4F 52 4D 41 4C   708 	.byte	78,79,82,77,65,76,-128,0
        80 00
   071D                     709 LC8:
   071D 48 41 52 44 80 00   710 	.byte	72,65,82,68,-128,0
                            711 	.globl	_level_init
   0723                     712 _level_init:
   0723 32 7E         [ 5]  713 	leas	-2,s
   0725 C6 01         [ 2]  714 	ldb	#1
   0727 F7 C8 1F      [ 5]  715 	stb	_Vec_Joy_Mux_1_X
   072A C6 03         [ 2]  716 	ldb	#3
   072C F7 C8 20      [ 5]  717 	stb	_Vec_Joy_Mux_1_Y
   072F 7F C8 21      [ 7]  718 	clr	_Vec_Joy_Mux_2_X
   0732 7F C8 22      [ 7]  719 	clr	_Vec_Joy_Mux_2_Y
   0735 6F E4         [ 6]  720 	clr	,s
   0737 C6 01         [ 2]  721 	ldb	#1
   0739 E7 61         [ 5]  722 	stb	1,s
   073B 16 00 60      [ 5]  723 	lbra	L49
   073E                     724 L53:
   073E BD F1 BA      [ 8]  725 	jsr	___Read_Btns
   0741 6C E4         [ 6]  726 	inc	,s
   0743 C6 88         [ 2]  727 	ldb	#-120
   0745 E7 E2         [ 6]  728 	stb	,-s
   0747 8E 07 00      [ 3]  729 	ldx	#LC6
   074A C6 64         [ 2]  730 	ldb	#100
   074C BD 07 F7      [ 8]  731 	jsr	_print_string
   074F 32 61         [ 5]  732 	leas	1,s
   0751 C6 CE         [ 2]  733 	ldb	#-50
   0753 E7 E2         [ 6]  734 	stb	,-s
   0755 8E 07 15      [ 3]  735 	ldx	#LC7
   0758 C6 3C         [ 2]  736 	ldb	#60
   075A BD 07 F7      [ 8]  737 	jsr	_print_string
   075D 32 61         [ 5]  738 	leas	1,s
   075F C6 CE         [ 2]  739 	ldb	#-50
   0761 E7 E2         [ 6]  740 	stb	,-s
   0763 8E 07 1D      [ 3]  741 	ldx	#LC8
   0766 C6 28         [ 2]  742 	ldb	#40
   0768 BD 07 F7      [ 8]  743 	jsr	_print_string
   076B 32 61         [ 5]  744 	leas	1,s
   076D BD F1 BA      [ 8]  745 	jsr	___Read_Btns
   0770 BD F1 F8      [ 8]  746 	jsr	___Joy_Digital
   0773 F6 C8 1C      [ 5]  747 	ldb	_Vec_Joy_1_Y
   0776 5D            [ 2]  748 	tstb
   0777 27 06         [ 3]  749 	beq	L50
   0779 F6 C8 1C      [ 5]  750 	ldb	_Vec_Joy_1_Y
   077C F7 C8 B8      [ 5]  751 	stb	_joy_y
   077F                     752 L50:
   077F F6 C8 B8      [ 5]  753 	ldb	_joy_y
   0782 5D            [ 2]  754 	tstb
   0783 2F 04         [ 3]  755 	ble	L51
   0785 5F            [ 2]  756 	clrb
   0786 BD 01 E1      [ 8]  757 	jsr	_draw_menu_arrow
   0789                     758 L51:
   0789 F6 C8 B8      [ 5]  759 	ldb	_joy_y
   078C 5D            [ 2]  760 	tstb
   078D 2C 05         [ 3]  761 	bge	L52
   078F C6 01         [ 2]  762 	ldb	#1
   0791 BD 01 E1      [ 8]  763 	jsr	_draw_menu_arrow
   0794                     764 L52:
   0794 F6 C8 11      [ 5]  765 	ldb	_Vec_Buttons
   0797 C4 01         [ 2]  766 	andb	#1
   0799 5D            [ 2]  767 	tstb
   079A 27 02         [ 3]  768 	beq	L49
   079C 6F 61         [ 7]  769 	clr	1,s
   079E                     770 L49:
   079E 6D 61         [ 7]  771 	tst	1,s
   07A0 10 26 FF 9A   [ 6]  772 	lbne	L53
   07A4 E6 E4         [ 4]  773 	ldb	,s
   07A6 BD 03 89      [ 8]  774 	jsr	_rand
   07A9 7F C8 B3      [ 7]  775 	clr	_current_level
   07AC 8E 06 90      [ 3]  776 	ldx	#_execute_display_sequence_state
   07AF BF C8 BE      [ 6]  777 	stx	_execute_game_playing_state
   07B2 32 62         [ 5]  778 	leas	2,s
   07B4 39            [ 5]  779 	rts
                            780 	.globl	_level_play
   07B5                     781 _level_play:
   07B5 32 7C         [ 5]  782 	leas	-4,s
   07B7 20 25         [ 3]  783 	bra	L56
   07B9                     784 L57:
   07B9 BD F1 AF      [ 8]  785 	jsr	___DP_to_C8
   07BC BE C8 BA      [ 6]  786 	ldx	_current_explosion
   07BF AF E4         [ 5]  787 	stx	,s
   07C1 AE E4         [ 5]  788 	ldx	,s
   07C3 BD 08 21      [ 8]  789 	jsr	__Explosion_Snd
   07C6 BE C8 BC      [ 6]  790 	ldx	_current_music
   07C9 AF 62         [ 6]  791 	stx	2,s
   07CB AE 62         [ 6]  792 	ldx	2,s
   07CD BD 08 2A      [ 8]  793 	jsr	__Init_Music_chk
   07D0 BD F1 92      [ 8]  794 	jsr	___Wait_Recal
   07D3 BD 08 AF      [ 8]  795 	jsr	__Do_Sound
   07D6 BD F2 A5      [ 8]  796 	jsr	___Intensity_5F
   07D9 BE C8 BE      [ 6]  797 	ldx	_execute_game_playing_state
   07DC AD 84         [ 7]  798 	jsr	,x
   07DE                     799 L56:
   07DE F6 C8 B3      [ 5]  800 	ldb	_current_level
   07E1 5D            [ 2]  801 	tstb
   07E2 27 D5         [ 3]  802 	beq	L57
   07E4 32 64         [ 5]  803 	leas	4,s
   07E6 39            [ 5]  804 	rts
ASxxxx Assembler V05.50  (Motorola 6809)                                Page 1
Hexadecimal [16-Bits]                                 Tue May 13 04:43:08 2025

Symbol Table

    .__.$$$.       =   2710 L   |     .__.ABS.       =   0000 G
    .__.CPU.       =   0000 L   |     .__.H$L.       =   0001 L
  2 L11                0180 R   |   2 L12                0190 R
  2 L14                023B R   |   2 L15                0225 R
  2 L16                01B0 R   |   2 L2                 00C1 R
  2 L21                02B1 R   |   2 L22                02A6 R
  2 L23                02C3 R   |   2 L25                0306 R
  2 L26                0317 R   |   2 L27                0328 R
  2 L28                0339 R   |   2 L29                034A R
  2 L3                 0096 R   |   2 L30                035B R
  2 L31                036C R   |   2 L32                037D R
  2 L33                038E R   |   2 L37                03BE R
  2 L43                0405 R   |   2 L44                0411 R
  2 L45                03E7 R   |   2 L47                043E R
  2 L49                04DF R   |   2 L50                04C0 R
  2 L51                04CA R   |   2 L52                04D5 R
  2 L53                047F R   |   2 L56                051F R
  2 L57                04FA R   |   2 L6                 0145 R
  2 L7                 00D3 R   |   2 LC0                0150 R
  2 LC1                015B R   |   2 LC2                0191 R
  2 LC3                019F R   |   2 LC4                0249 R
  2 LC5                0259 R   |   2 LC6                0441 R
  2 LC7                0456 R   |   2 LC8                045E R
  2 _Brainleft         005C GR  |   2 _Brainright        003E GR
    _Display_Gamef     **** GX  |   2 _Display_Rando     01A9 GR
  2 _Display_TimeL     0166 GR  |   2 _Gamefield         0023 GR
    _Loadingbar        **** GX  |   2 _Positions_Arr     007A GR
  2 _Positions_Cur     0000 GR  |   2 _RandomNumberG     0090 GR
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
  2 _arrow             007E GR  |   3 _buttonspresse     002D GR
  2 _check_success     03DE GR  |   3 _counter           002C GR
  2 _cross             0014 GR  |     _current_explo     **** GX
  3 _current_level     002A GR  |     _current_music     **** GX
  2 _display_game_     0265 GR  |     _draw_cross        **** GX
    _draw_menu_arr     **** GX  |   2 _execute_displ     03D1 GR
  4 _execute_game_     0000 GR  |   2 _execute_repea     03C1 GR
  3 _joy_x             002E GR  |   3 _joy_y             002F GR
  2 _level_init        0464 GR  |   2 _level_play        04F6 GR
  2 _move_player       02C6 GR  |     _play_tune         **** GX
    _print_signed_     **** GX  |     _print_string      **** GX
  2 _rand              00CA GR  |   2 _read_player_i     0395 GR
  3 _temppass          0030 GR  |     _umodhi3           **** GX

ASxxxx Assembler V05.50  (Motorola 6809)                                Page 2
Hexadecimal [16-Bits]                                 Tue May 13 04:43:08 2025

Area Table

[_CSEG]
   0 _CODE            size    0   flags C080
   2 .text            size  528   flags  100
   3 .data            size   31   flags  100
   4 .bss             size    2   flags    0
[_DSEG]
   1 _DATA            size    0   flags C0C0

