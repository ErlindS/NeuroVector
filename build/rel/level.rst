                              1 ;;; gcc for m6809 : Mar 17 2019 13:25:32
                              2 ;;; 4.3.6 (gcc6809)
                              3 ;;; ABI version 1
                              4 ;;; -mabi=bx -mint8 -fomit-frame-pointer -O0
                              5 	.module	level.c
                              6 	.globl	_counter
                              7 	.area	.data
   C8A1                       8 _counter:
   C8A1 00                    9 	.byte	0
                             10 	.globl	_counterw
   C8A2                      11 _counterw:
   C8A2 03                   12 	.byte	3
                             13 	.globl	_a_random
   C8A3                      14 _a_random:
   C8A3 03                   15 	.byte	3
   C8A4 09                   16 	.byte	9
   C8A5 07                   17 	.byte	7
   C8A6 05                   18 	.byte	5
   C8A7 05                   19 	.byte	5
   C8A8 08                   20 	.byte	8
   C8A9 04                   21 	.byte	4
   C8AA 05                   22 	.byte	5
   C8AB 09                   23 	.byte	9
   C8AC 08                   24 	.byte	8
   C8AD 01                   25 	.byte	1
   C8AE 05                   26 	.byte	5
   C8AF 09                   27 	.byte	9
   C8B0 02                   28 	.byte	2
   C8B1 09                   29 	.byte	9
   C8B2 06                   30 	.byte	6
   C8B3 03                   31 	.byte	3
   C8B4 01                   32 	.byte	1
   C8B5 06                   33 	.byte	6
   C8B6 03                   34 	.byte	3
                             35 	.globl	_a_random_compare
   C8B7                      36 _a_random_compare:
   C8B7 00 00 00 00 00 00    37 	.word	0,0,0,0,0,0,0,0,0,0
        00 00 00 00 00 00
        00 00 00 00 00 00
        00 00
                             38 	.globl	_RandomSequenceCounter
   C8CB                      39 _RandomSequenceCounter:
   C8CB C8                   40 	.byte	-56
                             41 	.globl	_RandomSequenceCounterDisplay
   C8CC                      42 _RandomSequenceCounterDisplay:
   C8CC 00                   43 	.byte	0
                             44 	.area	.text
                             45 	.globl	_RandomNumberGenerator
   02CF                      46 _RandomNumberGenerator:
   02CF 32 7D         [ 5]   47 	leas	-3,s
   02D1 6F 62         [ 7]   48 	clr	2,s
   02D3 20 2B         [ 3]   49 	bra	L2
   02D5                      50 L3:
   02D5 E6 62         [ 5]   51 	ldb	2,s
   02D7 E7 61         [ 5]   52 	stb	1,s
   02D9 E6 62         [ 5]   53 	ldb	2,s
   02DB 1D            [ 2]   54 	sex		;extendqihi2: R:b -> R:d
   02DC 1F 01         [ 6]   55 	tfr	d,x
   02DE E6 89 C8 A3   [ 8]   56 	ldb	_a_random,x
   02E2 4F            [ 2]   57 	clra		;zero_extendqihi: R:b -> R:d
   02E3 8E 00 0A      [ 3]   58 	ldx	#10
   02E6 34 10         [ 6]   59 	pshs	x
   02E8 1F 01         [ 6]   60 	tfr	d,x
   02EA BD 06 24      [ 8]   61 	jsr	_umodhi3
   02ED 32 62         [ 5]   62 	leas	2,s
   02EF 1F 10         [ 6]   63 	tfr	x,d	;movlsbqihi: R:x -> R:b
   02F1 E7 E4         [ 4]   64 	stb	,s
   02F3 E6 61         [ 5]   65 	ldb	1,s
   02F5 1D            [ 2]   66 	sex		;extendqihi2: R:b -> R:d
   02F6 1F 01         [ 6]   67 	tfr	d,x
   02F8 E6 E4         [ 4]   68 	ldb	,s
   02FA E7 89 C8 A3   [ 8]   69 	stb	_a_random,x
   02FE 6C 62         [ 7]   70 	inc	2,s
   0300                      71 L2:
   0300 E6 62         [ 5]   72 	ldb	2,s
   0302 C1 13         [ 2]   73 	cmpb	#19	;cmpqi:
   0304 2F CF         [ 3]   74 	ble	L3
   0306 32 63         [ 5]   75 	leas	3,s
   0308 39            [ 5]   76 	rts
                             77 	.globl	_current_level
                             78 	.area	.data
   C8CD                      79 _current_level:
   C8CD 00                   80 	.byte	0
                             81 	.area	.text
                             82 	.globl	_level_init
   0309                      83 _level_init:
   0309 BD 02 CF      [ 8]   84 	jsr	_RandomNumberGenerator
   030C 7F C8 CD      [ 7]   85 	clr	_current_level
   030F 39            [ 5]   86 	rts
                             87 	.globl	_SequenceTime
                             88 	.area	.data
   C8CE                      89 _SequenceTime:
   C8CE 01                   90 	.byte	1
                             91 	.area	.text
   0310                      92 LC0:
   0310 54 49 4D 45 20 4C    93 	.byte	84,73,77,69,32,76,69,70
        45 46
   0318 54 80 00             94 	.byte	84,-128,0
   031B                      95 LC1:
   031B 47 41 4D 45 20 4F    96 	.byte	71,65,77,69,32,79,86,69
        56 45
   0323 52 80 00             97 	.byte	82,-128,0
                             98 	.globl	_Display_TimeLeft
   0326                      99 _Display_TimeLeft:
   0326 C6 C4         [ 2]  100 	ldb	#-60
   0328 E7 E2         [ 6]  101 	stb	,-s
   032A 8E 03 10      [ 3]  102 	ldx	#LC0
   032D C6 64         [ 2]  103 	ldb	#100
   032F BD 05 E8      [ 8]  104 	jsr	_print_string
   0332 32 61         [ 5]  105 	leas	1,s
   0334 F6 C8 A1      [ 5]  106 	ldb	_counter
   0337 BD 01 4F      [ 8]  107 	jsr	_Loadingbar
   033A F6 C8 A2      [ 5]  108 	ldb	_counterw
   033D 5A            [ 2]  109 	decb
   033E F7 C8 A2      [ 5]  110 	stb	_counterw
   0341 F6 C8 A2      [ 5]  111 	ldb	_counterw
   0344 5D            [ 2]  112 	tstb
   0345 26 0C         [ 3]  113 	bne	L8
   0347 F6 C8 A1      [ 5]  114 	ldb	_counter
   034A 5A            [ 2]  115 	decb
   034B F7 C8 A1      [ 5]  116 	stb	_counter
   034E C6 03         [ 2]  117 	ldb	#3
   0350 F7 C8 A2      [ 5]  118 	stb	_counterw
   0353                     119 L8:
   0353 F6 C8 A1      [ 5]  120 	ldb	_counter
   0356 5D            [ 2]  121 	tstb
   0357 26 10         [ 3]  122 	bne	L11
   0359                     123 L10:
   0359 C6 C4         [ 2]  124 	ldb	#-60
   035B E7 E2         [ 6]  125 	stb	,-s
   035D 8E 03 1B      [ 3]  126 	ldx	#LC1
   0360 C6 64         [ 2]  127 	ldb	#100
   0362 BD 05 E8      [ 8]  128 	jsr	_print_string
   0365 32 61         [ 5]  129 	leas	1,s
   0367 20 F0         [ 3]  130 	bra	L10
   0369                     131 L11:
   0369 39            [ 5]  132 	rts
   036A                     133 LC2:
   036A 52 45 4D 45 4D 42   134 	.byte	82,69,77,69,77,66,69,82
        45 52
   0372 20 54 48 45 80 00   135 	.byte	32,84,72,69,-128,0
   0378                     136 LC3:
   0378 53 45 51 55 45 4E   137 	.byte	83,69,81,85,69,78,67,69
        43 45
   0380 80 00               138 	.byte	-128,0
                            139 	.globl	_Display_RandomSequence
   0382                     140 _Display_RandomSequence:
   0382 32 7D         [ 5]  141 	leas	-3,s
   0384 6F 62         [ 7]  142 	clr	2,s
   0386 16 00 8B      [ 5]  143 	lbra	L13
   0389                     144 L15:
   0389 C6 C8         [ 2]  145 	ldb	#-56
   038B F7 C8 A1      [ 5]  146 	stb	_counter
   038E BD F1 92      [ 8]  147 	jsr	___Wait_Recal
   0391 BD 01 15      [ 8]  148 	jsr	_Display_Gamefield
   0394 C6 B5         [ 2]  149 	ldb	#-75
   0396 E7 E2         [ 6]  150 	stb	,-s
   0398 8E 03 6A      [ 3]  151 	ldx	#LC2
   039B C6 64         [ 2]  152 	ldb	#100
   039D BD 05 E8      [ 8]  153 	jsr	_print_string
   03A0 32 61         [ 5]  154 	leas	1,s
   03A2 C6 CE         [ 2]  155 	ldb	#-50
   03A4 E7 E2         [ 6]  156 	stb	,-s
   03A6 8E 03 78      [ 3]  157 	ldx	#LC3
   03A9 C6 50         [ 2]  158 	ldb	#80
   03AB BD 05 E8      [ 8]  159 	jsr	_print_string
   03AE 32 61         [ 5]  160 	leas	1,s
   03B0 E6 62         [ 5]  161 	ldb	2,s
   03B2 4F            [ 2]  162 	clra		;zero_extendqihi: R:b -> R:d
   03B3 1F 01         [ 6]  163 	tfr	d,x
   03B5 E6 89 C8 A3   [ 8]  164 	ldb	_a_random,x
   03B9 BD 00 6D      [ 8]  165 	jsr	_draw_cross
   03BC E6 62         [ 5]  166 	ldb	2,s
   03BE 5C            [ 2]  167 	incb
   03BF 86 64         [ 2]  168 	lda	#100	;umulqihi3
   03C1 3D            [11]  169 	mul
                            170 		;movlsbqihi: D->B
   03C2 4F            [ 2]  171 	clra		;zero_extendqihi: R:b -> R:d
   03C3 ED E4         [ 5]  172 	std	,s
   03C5 C6 C8         [ 2]  173 	ldb	#-56
   03C7 E7 E2         [ 6]  174 	stb	,-s
   03C9 AE 61         [ 6]  175 	ldx	1,s
   03CB C6 01         [ 2]  176 	ldb	#1
   03CD BD 06 59      [ 8]  177 	jsr	_play_tune
   03D0 32 61         [ 5]  178 	leas	1,s
   03D2 E6 62         [ 5]  179 	ldb	2,s
   03D4 5C            [ 2]  180 	incb
   03D5 86 64         [ 2]  181 	lda	#100	;umulqihi3
   03D7 3D            [11]  182 	mul
                            183 		;movlsbqihi: D->B
   03D8 4F            [ 2]  184 	clra		;zero_extendqihi: R:b -> R:d
   03D9 ED E4         [ 5]  185 	std	,s
   03DB C6 C8         [ 2]  186 	ldb	#-56
   03DD E7 E2         [ 6]  187 	stb	,-s
   03DF AE 61         [ 6]  188 	ldx	1,s
   03E1 C6 02         [ 2]  189 	ldb	#2
   03E3 BD 06 59      [ 8]  190 	jsr	_play_tune
   03E6 32 61         [ 5]  191 	leas	1,s
   03E8 E6 62         [ 5]  192 	ldb	2,s
   03EA 5C            [ 2]  193 	incb
   03EB 86 64         [ 2]  194 	lda	#100	;umulqihi3
   03ED 3D            [11]  195 	mul
                            196 		;movlsbqihi: D->B
   03EE 4F            [ 2]  197 	clra		;zero_extendqihi: R:b -> R:d
   03EF ED E4         [ 5]  198 	std	,s
   03F1 C6 C8         [ 2]  199 	ldb	#-56
   03F3 E7 E2         [ 6]  200 	stb	,-s
   03F5 AE 61         [ 6]  201 	ldx	1,s
   03F7 C6 03         [ 2]  202 	ldb	#3
   03F9 BD 06 59      [ 8]  203 	jsr	_play_tune
   03FC 32 61         [ 5]  204 	leas	1,s
   03FE                     205 L14:
   03FE F6 C8 CB      [ 5]  206 	ldb	_RandomSequenceCounter
   0401 5A            [ 2]  207 	decb
   0402 F7 C8 CB      [ 5]  208 	stb	_RandomSequenceCounter
   0405 F6 C8 CB      [ 5]  209 	ldb	_RandomSequenceCounter
   0408 5D            [ 2]  210 	tstb
   0409 10 26 FF 7C   [ 6]  211 	lbne	L15
   040D C6 1E         [ 2]  212 	ldb	#30
   040F F7 C8 CB      [ 5]  213 	stb	_RandomSequenceCounter
   0412 6C 62         [ 7]  214 	inc	2,s
   0414                     215 L13:
   0414 F6 C8 CC      [ 5]  216 	ldb	_RandomSequenceCounterDisplay
   0417 5C            [ 2]  217 	incb
   0418 E1 62         [ 5]  218 	cmpb	2,s	;cmpqi:
   041A 22 E2         [ 3]  219 	bhi	L14
   041C 7F C8 CE      [ 7]  220 	clr	_SequenceTime
   041F 32 63         [ 5]  221 	leas	3,s
   0421 39            [ 5]  222 	rts
                            223 	.globl	_buttonspressedcounter
                            224 	.area	.data
   C8CF                     225 _buttonspressedcounter:
   C8CF 00                  226 	.byte	0
                            227 	.area	.text
                            228 	.globl	_is_pattern_succesfull
   0422                     229 _is_pattern_succesfull:
   0422 32 7E         [ 5]  230 	leas	-2,s
   0424 6F 61         [ 7]  231 	clr	1,s
   0426 16 00 5F      [ 5]  232 	lbra	L19
   0429                     233 L22:
   0429 E6 61         [ 5]  234 	ldb	1,s
   042B 4F            [ 2]  235 	clra		;zero_extendqihi: R:b -> R:d
   042C 1F 01         [ 6]  236 	tfr	d,x
   042E E6 89 C8 A3   [ 8]  237 	ldb	_a_random,x
   0432 E7 E4         [ 4]  238 	stb	,s
   0434 E6 61         [ 5]  239 	ldb	1,s
   0436 4F            [ 2]  240 	clra		;zero_extendqihi: R:b -> R:d
   0437 1F 01         [ 6]  241 	tfr	d,x
   0439 E6 89 C8 B7   [ 8]  242 	ldb	_a_random_compare,x
   043D E1 E4         [ 4]  243 	cmpb	,s	;cmpqi:(R)
   043F 27 3C         [ 3]  244 	beq	L20
   0441                     245 L21:
   0441 C6 C4         [ 2]  246 	ldb	#-60
   0443 E7 E2         [ 6]  247 	stb	,-s
   0445 8E 03 1B      [ 3]  248 	ldx	#LC1
   0448 C6 64         [ 2]  249 	ldb	#100
   044A BD 05 E8      [ 8]  250 	jsr	_print_string
   044D 32 61         [ 5]  251 	leas	1,s
   044F E6 61         [ 5]  252 	ldb	1,s
   0451 4F            [ 2]  253 	clra		;zero_extendqihi: R:b -> R:d
   0452 1F 01         [ 6]  254 	tfr	d,x
   0454 E6 89 C8 A3   [ 8]  255 	ldb	_a_random,x
   0458 34 04         [ 6]  256 	pshs	b
   045A C6 CE         [ 2]  257 	ldb	#-50
   045C E7 E2         [ 6]  258 	stb	,-s
   045E C6 BA         [ 2]  259 	ldb	#-70
   0460 BD 06 C7      [ 8]  260 	jsr	_print_unsigned_int
   0463 32 62         [ 5]  261 	leas	2,s
   0465 E6 61         [ 5]  262 	ldb	1,s
   0467 4F            [ 2]  263 	clra		;zero_extendqihi: R:b -> R:d
   0468 1F 01         [ 6]  264 	tfr	d,x
   046A E6 89 C8 B7   [ 8]  265 	ldb	_a_random_compare,x
   046E 34 04         [ 6]  266 	pshs	b
   0470 C6 CE         [ 2]  267 	ldb	#-50
   0472 E7 E2         [ 6]  268 	stb	,-s
   0474 C6 CE         [ 2]  269 	ldb	#-50
   0476 BD 06 C7      [ 8]  270 	jsr	_print_unsigned_int
   0479 32 62         [ 5]  271 	leas	2,s
   047B 20 C4         [ 3]  272 	bra	L21
   047D                     273 L20:
   047D E6 61         [ 5]  274 	ldb	1,s
   047F 4F            [ 2]  275 	clra		;zero_extendqihi: R:b -> R:d
   0480 1F 01         [ 6]  276 	tfr	d,x
   0482 6F 89 C8 B7   [10]  277 	clr	_a_random_compare,x
   0486 6C 61         [ 7]  278 	inc	1,s
   0488                     279 L19:
   0488 F6 C8 CC      [ 5]  280 	ldb	_RandomSequenceCounterDisplay
   048B 5C            [ 2]  281 	incb
   048C E1 61         [ 5]  282 	cmpb	1,s	;cmpqi:
   048E 10 22 FF 97   [ 6]  283 	lbhi	L22
   0492 C6 01         [ 2]  284 	ldb	#1
   0494 F7 C8 CE      [ 5]  285 	stb	_SequenceTime
   0497 F6 C8 CC      [ 5]  286 	ldb	_RandomSequenceCounterDisplay
   049A 5C            [ 2]  287 	incb
   049B F7 C8 CC      [ 5]  288 	stb	_RandomSequenceCounterDisplay
   049E 7F C8 CF      [ 7]  289 	clr	_buttonspressedcounter
   04A1 C6 C8         [ 2]  290 	ldb	#-56
   04A3 F7 C8 A1      [ 5]  291 	stb	_counter
   04A6 32 62         [ 5]  292 	leas	2,s
   04A8 39            [ 5]  293 	rts
                            294 	.area	.bss
   C8D5                     295 _joy_x:	.blkb	1
   C8D6                     296 _joy_y:	.blkb	1
                            297 	.globl	_temppass
                            298 	.area	.data
   C8D0                     299 _temppass:
   C8D0 00                  300 	.byte	0
                            301 	.area	.text
                            302 	.globl	_move_player
   04A9                     303 _move_player:
   04A9 32 7D         [ 5]  304 	leas	-3,s
   04AB BD F1 F8      [ 8]  305 	jsr	___Joy_Digital
   04AE F6 C8 1B      [ 5]  306 	ldb	_Vec_Joy_1_X
   04B1 F7 C8 D5      [ 5]  307 	stb	_joy_x
   04B4 F6 C8 1C      [ 5]  308 	ldb	_Vec_Joy_1_Y
   04B7 F7 C8 D6      [ 5]  309 	stb	_joy_y
   04BA F6 C8 D5      [ 5]  310 	ldb	_joy_x
   04BD 5D            [ 2]  311 	tstb
   04BE 2C 0B         [ 3]  312 	bge	L25
   04C0 F6 C8 D6      [ 5]  313 	ldb	_joy_y
   04C3 5D            [ 2]  314 	tstb
   04C4 2F 05         [ 3]  315 	ble	L25
   04C6 C6 01         [ 2]  316 	ldb	#1
   04C8 F7 C8 D0      [ 5]  317 	stb	_temppass
   04CB                     318 L25:
   04CB F6 C8 D5      [ 5]  319 	ldb	_joy_x
   04CE 5D            [ 2]  320 	tstb
   04CF 26 0B         [ 3]  321 	bne	L26
   04D1 F6 C8 D6      [ 5]  322 	ldb	_joy_y
   04D4 5D            [ 2]  323 	tstb
   04D5 2F 05         [ 3]  324 	ble	L26
   04D7 C6 02         [ 2]  325 	ldb	#2
   04D9 F7 C8 D0      [ 5]  326 	stb	_temppass
   04DC                     327 L26:
   04DC F6 C8 D5      [ 5]  328 	ldb	_joy_x
   04DF 5D            [ 2]  329 	tstb
   04E0 2F 0B         [ 3]  330 	ble	L27
   04E2 F6 C8 D6      [ 5]  331 	ldb	_joy_y
   04E5 5D            [ 2]  332 	tstb
   04E6 2F 05         [ 3]  333 	ble	L27
   04E8 C6 03         [ 2]  334 	ldb	#3
   04EA F7 C8 D0      [ 5]  335 	stb	_temppass
   04ED                     336 L27:
   04ED F6 C8 D5      [ 5]  337 	ldb	_joy_x
   04F0 5D            [ 2]  338 	tstb
   04F1 2C 0B         [ 3]  339 	bge	L28
   04F3 F6 C8 D6      [ 5]  340 	ldb	_joy_y
   04F6 5D            [ 2]  341 	tstb
   04F7 26 05         [ 3]  342 	bne	L28
   04F9 C6 04         [ 2]  343 	ldb	#4
   04FB F7 C8 D0      [ 5]  344 	stb	_temppass
   04FE                     345 L28:
   04FE F6 C8 D5      [ 5]  346 	ldb	_joy_x
   0501 5D            [ 2]  347 	tstb
   0502 26 0B         [ 3]  348 	bne	L29
   0504 F6 C8 D6      [ 5]  349 	ldb	_joy_y
   0507 5D            [ 2]  350 	tstb
   0508 26 05         [ 3]  351 	bne	L29
   050A C6 05         [ 2]  352 	ldb	#5
   050C F7 C8 D0      [ 5]  353 	stb	_temppass
   050F                     354 L29:
   050F F6 C8 D5      [ 5]  355 	ldb	_joy_x
   0512 5D            [ 2]  356 	tstb
   0513 2F 0B         [ 3]  357 	ble	L30
   0515 F6 C8 D6      [ 5]  358 	ldb	_joy_y
   0518 5D            [ 2]  359 	tstb
   0519 26 05         [ 3]  360 	bne	L30
   051B C6 06         [ 2]  361 	ldb	#6
   051D F7 C8 D0      [ 5]  362 	stb	_temppass
   0520                     363 L30:
   0520 F6 C8 D5      [ 5]  364 	ldb	_joy_x
   0523 5D            [ 2]  365 	tstb
   0524 2C 0B         [ 3]  366 	bge	L31
   0526 F6 C8 D6      [ 5]  367 	ldb	_joy_y
   0529 5D            [ 2]  368 	tstb
   052A 2C 05         [ 3]  369 	bge	L31
   052C C6 07         [ 2]  370 	ldb	#7
   052E F7 C8 D0      [ 5]  371 	stb	_temppass
   0531                     372 L31:
   0531 F6 C8 D5      [ 5]  373 	ldb	_joy_x
   0534 5D            [ 2]  374 	tstb
   0535 26 0B         [ 3]  375 	bne	L32
   0537 F6 C8 D6      [ 5]  376 	ldb	_joy_y
   053A 5D            [ 2]  377 	tstb
   053B 2C 05         [ 3]  378 	bge	L32
   053D C6 08         [ 2]  379 	ldb	#8
   053F F7 C8 D0      [ 5]  380 	stb	_temppass
   0542                     381 L32:
   0542 F6 C8 D5      [ 5]  382 	ldb	_joy_x
   0545 5D            [ 2]  383 	tstb
   0546 2F 0B         [ 3]  384 	ble	L33
   0548 F6 C8 D6      [ 5]  385 	ldb	_joy_y
   054B 5D            [ 2]  386 	tstb
   054C 2C 05         [ 3]  387 	bge	L33
   054E C6 09         [ 2]  388 	ldb	#9
   0550 F7 C8 D0      [ 5]  389 	stb	_temppass
   0553                     390 L33:
   0553 F6 C8 D0      [ 5]  391 	ldb	_temppass
   0556 BD 00 6D      [ 8]  392 	jsr	_draw_cross
   0559 BD F1 BA      [ 8]  393 	jsr	___Read_Btns
   055C F6 C8 11      [ 5]  394 	ldb	_Vec_Buttons
   055F C4 01         [ 2]  395 	andb	#1
   0561 5D            [ 2]  396 	tstb
   0562 27 30         [ 3]  397 	beq	L35
   0564 F6 C8 CF      [ 5]  398 	ldb	_buttonspressedcounter
   0567 E7 E4         [ 4]  399 	stb	,s
   0569 F6 C8 D0      [ 5]  400 	ldb	_temppass
   056C E7 61         [ 5]  401 	stb	1,s
   056E E6 E4         [ 4]  402 	ldb	,s
   0570 4F            [ 2]  403 	clra		;zero_extendqihi: R:b -> R:d
   0571 1F 01         [ 6]  404 	tfr	d,x
   0573 E6 61         [ 5]  405 	ldb	1,s
   0575 E7 89 C8 B7   [ 8]  406 	stb	_a_random_compare,x
   0579 F6 C8 CF      [ 5]  407 	ldb	_buttonspressedcounter
   057C 5C            [ 2]  408 	incb
   057D F7 C8 CF      [ 5]  409 	stb	_buttonspressedcounter
   0580 F6 C8 CC      [ 5]  410 	ldb	_RandomSequenceCounterDisplay
   0583 E7 E4         [ 4]  411 	stb	,s
   0585 E6 E4         [ 4]  412 	ldb	,s
   0587 5C            [ 2]  413 	incb
   0588 E7 62         [ 5]  414 	stb	2,s
   058A F6 C8 CF      [ 5]  415 	ldb	_buttonspressedcounter
   058D E1 62         [ 5]  416 	cmpb	2,s	;cmpqi:(R)
   058F 26 03         [ 3]  417 	bne	L35
   0591 BD 04 22      [ 8]  418 	jsr	_is_pattern_succesfull
   0594                     419 L35:
   0594 32 63         [ 5]  420 	leas	3,s
   0596 39            [ 5]  421 	rts
                            422 	.globl	_level_play
   0597                     423 _level_play:
   0597 32 7C         [ 5]  424 	leas	-4,s
   0599 20 34         [ 3]  425 	bra	L37
   059B                     426 L39:
   059B BD F1 AF      [ 8]  427 	jsr	___DP_to_C8
   059E BE C8 D1      [ 6]  428 	ldx	_current_explosion
   05A1 AF E4         [ 5]  429 	stx	,s
   05A3 AE E4         [ 5]  430 	ldx	,s
   05A5 BD 06 12      [ 8]  431 	jsr	__Explosion_Snd
   05A8 BE C8 D3      [ 6]  432 	ldx	_current_music
   05AB AF 62         [ 6]  433 	stx	2,s
   05AD AE 62         [ 6]  434 	ldx	2,s
   05AF BD 06 1B      [ 8]  435 	jsr	__Init_Music_chk
   05B2 BD F1 92      [ 8]  436 	jsr	___Wait_Recal
   05B5 BD 06 35      [ 8]  437 	jsr	__Do_Sound
   05B8 BD F2 A5      [ 8]  438 	jsr	___Intensity_5F
   05BB BD 01 15      [ 8]  439 	jsr	_Display_Gamefield
   05BE F6 C8 CE      [ 5]  440 	ldb	_SequenceTime
   05C1 5D            [ 2]  441 	tstb
   05C2 27 05         [ 3]  442 	beq	L38
   05C4 BD 03 82      [ 8]  443 	jsr	_Display_RandomSequence
   05C7 20 06         [ 3]  444 	bra	L37
   05C9                     445 L38:
   05C9 BD 03 26      [ 8]  446 	jsr	_Display_TimeLeft
   05CC BD 04 A9      [ 8]  447 	jsr	_move_player
   05CF                     448 L37:
   05CF F6 C8 CD      [ 5]  449 	ldb	_current_level
   05D2 5D            [ 2]  450 	tstb
   05D3 27 C6         [ 3]  451 	beq	L39
   05D5 32 64         [ 5]  452 	leas	4,s
   05D7 39            [ 5]  453 	rts
ASxxxx Assembler V05.50  (Motorola 6809)                                Page 1
Hexadecimal [16-Bits]                                 Sun May  4 00:01:53 2025

Symbol Table

    .__.$$$.       =   2710 L   |     .__.ABS.       =   0000 G
    .__.CPU.       =   0000 L   |     .__.H$L.       =   0001 L
  3 L10                008A R   |   3 L11                009A R
  3 L13                0145 R   |   3 L14                012F R
  3 L15                00BA R   |   3 L19                01B9 R
  3 L2                 0031 R   |   3 L20                01AE R
  3 L21                0172 R   |   3 L22                015A R
  3 L25                01FC R   |   3 L26                020D R
  3 L27                021E R   |   3 L28                022F R
  3 L29                0240 R   |   3 L3                 0006 R
  3 L30                0251 R   |   3 L31                0262 R
  3 L32                0273 R   |   3 L33                0284 R
  3 L35                02C5 R   |   3 L37                0300 R
  3 L38                02FA R   |   3 L39                02CC R
  3 L8                 0084 R   |   3 LC0                0041 R
  3 LC1                004C R   |   3 LC2                009B R
  3 LC3                00A9 R   |     _Display_Gamef     **** GX
  3 _Display_Rando     00B3 GR  |   3 _Display_TimeL     0057 GR
    _Loadingbar        **** GX  |   3 _RandomNumberG     0000 GR
  2 _RandomSequenc     002A GR  |   2 _RandomSequenc     002B GR
  2 _SequenceTime      002D GR  |     _Vec_Buttons       **** GX
    _Vec_Joy_1_X       **** GX  |     _Vec_Joy_1_Y       **** GX
    __Do_Sound         **** GX  |     __Explosion_Sn     **** GX
    __Init_Music_c     **** GX  |     ___DP_to_C8        **** GX
    ___Intensity_5     **** GX  |     ___Joy_Digital     **** GX
    ___Read_Btns       **** GX  |     ___Wait_Recal      **** GX
  2 _a_random          0002 GR  |   2 _a_random_comp     0016 GR
  2 _buttonspresse     002E GR  |   2 _counter           0000 GR
  2 _counterw          0001 GR  |     _current_explo     **** GX
  2 _current_level     002C GR  |     _current_music     **** GX
    _draw_cross        **** GX  |   3 _is_pattern_su     0153 GR
  4 _joy_x             0000 R   |   4 _joy_y             0001 R
  3 _level_init        003A GR  |   3 _level_play        02C8 GR
  3 _move_player       01DA GR  |     _play_tune         **** GX
    _print_string      **** GX  |     _print_unsigne     **** GX
  2 _temppass          002F GR  |     _umodhi3           **** GX

ASxxxx Assembler V05.50  (Motorola 6809)                                Page 2
Hexadecimal [16-Bits]                                 Sun May  4 00:01:53 2025

Area Table

[_CSEG]
   0 _CODE            size    0   flags C080
   2 .data            size   30   flags  100
   3 .text            size  309   flags  100
   4 .bss             size    2   flags    0
[_DSEG]
   1 _DATA            size    0   flags C0C0

