                              1 ;;; gcc for m6809 : Mar 17 2019 13:25:32
                              2 ;;; 4.3.6 (gcc6809)
                              3 ;;; ABI version 1
                              4 ;;; -mabi=bx -mint8 -fomit-frame-pointer -O0
                              5 	.module	level.c
                              6 	.globl	_SequenceTime
                              7 	.area	.data
   C889                       8 _SequenceTime:
   C889 01                    9 	.byte	1
                             10 	.globl	_current_level
   C88A                      11 _current_level:
   C88A 01                   12 	.byte	1
                             13 	.globl	_nibby_vl_style_0
                             14 	.area	.text
   0194                      15 _nibby_vl_style_0:
   0194 82                   16 	.byte	-126
   0195 C3                   17 	.byte	-61
   0196 60                   18 	.byte	96
   0197 82                   19 	.byte	-126
   0198 02                   20 	.byte	2
   0199 A0                   21 	.byte	-96
   019A 82                   22 	.byte	-126
   019B 22                   23 	.byte	34
   019C 0A                   24 	.byte	10
   019D A2                   25 	.byte	-94
   019E 20                   26 	.byte	32
   019F 06                   27 	.byte	6
                             28 	.globl	_offset
   01A0                      29 _offset:
   01A0 E2                   30 	.byte	-30
                             31 	.globl	_Gamefield
   01A1                      32 _Gamefield:
   01A1 00                   33 	.byte	0
   01A2 18                   34 	.byte	24
   01A3 F8                   35 	.byte	-8
   01A4 FF                   36 	.byte	-1
   01A5 D0                   37 	.byte	-48
   01A6 00                   38 	.byte	0
   01A7 00                   39 	.byte	0
   01A8 00                   40 	.byte	0
   01A9 10                   41 	.byte	16
   01AA FF                   42 	.byte	-1
   01AB 30                   43 	.byte	48
   01AC 00                   44 	.byte	0
   01AD 00                   45 	.byte	0
   01AE F0                   46 	.byte	-16
   01AF 10                   47 	.byte	16
   01B0 FF                   48 	.byte	-1
   01B1 00                   49 	.byte	0
   01B2 D0                   50 	.byte	-48
   01B3 00                   51 	.byte	0
   01B4 F0                   52 	.byte	-16
   01B5 00                   53 	.byte	0
   01B6 FF                   54 	.byte	-1
   01B7 00                   55 	.byte	0
   01B8 30                   56 	.byte	48
   01B9 01                   57 	.byte	1
   01BA 00                   58 	.byte	0
   01BB 00                   59 	.byte	0
                             60 	.globl	_Brainright
   01BC                      61 _Brainright:
   01BC 00                   62 	.byte	0
   01BD D3                   63 	.byte	-45
   01BE 00                   64 	.byte	0
   01BF FF                   65 	.byte	-1
   01C0 FB                   66 	.byte	-5
   01C1 05                   67 	.byte	5
   01C2 FF                   68 	.byte	-1
   01C3 01                   69 	.byte	1
   01C4 0F                   70 	.byte	15
   01C5 FF                   71 	.byte	-1
   01C6 0A                   72 	.byte	10
   01C7 07                   73 	.byte	7
   01C8 FF                   74 	.byte	-1
   01C9 0A                   75 	.byte	10
   01CA 05                   76 	.byte	5
   01CB FF                   77 	.byte	-1
   01CC 2D                   78 	.byte	45
   01CD FF                   79 	.byte	-1
   01CE FF                   80 	.byte	-1
   01CF 05                   81 	.byte	5
   01D0 F6                   82 	.byte	-10
   01D1 FF                   83 	.byte	-1
   01D2 00                   84 	.byte	0
   01D3 F6                   85 	.byte	-10
   01D4 FF                   86 	.byte	-1
   01D5 FB                   87 	.byte	-5
   01D6 F6                   88 	.byte	-10
   01D7 01                   89 	.byte	1
   01D8 00                   90 	.byte	0
   01D9 00                   91 	.byte	0
                             92 	.globl	_Brainleft
   01DA                      93 _Brainleft:
   01DA 00                   94 	.byte	0
   01DB D3                   95 	.byte	-45
   01DC 00                   96 	.byte	0
   01DD FF                   97 	.byte	-1
   01DE FB                   98 	.byte	-5
   01DF FB                   99 	.byte	-5
   01E0 FF                  100 	.byte	-1
   01E1 01                  101 	.byte	1
   01E2 F1                  102 	.byte	-15
   01E3 FF                  103 	.byte	-1
   01E4 0A                  104 	.byte	10
   01E5 F9                  105 	.byte	-7
   01E6 FF                  106 	.byte	-1
   01E7 0A                  107 	.byte	10
   01E8 FB                  108 	.byte	-5
   01E9 FF                  109 	.byte	-1
   01EA 2D                  110 	.byte	45
   01EB 01                  111 	.byte	1
   01EC FF                  112 	.byte	-1
   01ED 05                  113 	.byte	5
   01EE 0A                  114 	.byte	10
   01EF FF                  115 	.byte	-1
   01F0 00                  116 	.byte	0
   01F1 0A                  117 	.byte	10
   01F2 FF                  118 	.byte	-1
   01F3 FB                  119 	.byte	-5
   01F4 0A                  120 	.byte	10
   01F5 01                  121 	.byte	1
   01F6 00                  122 	.byte	0
   01F7 00                  123 	.byte	0
                            124 	.globl	_Generate_Gamefield
   01F8                     125 _Generate_Gamefield:
   01F8 BD F3 54      [ 8]  126 	jsr	___Reset0Ref
   01FB C6 FF         [ 2]  127 	ldb	#-1
   01FD D7 04         [ 4]  128 	stb	*_dp_VIA_t1_cnt_lo
   01FF C6 F1         [ 2]  129 	ldb	#-15
   0201 E7 E2         [ 6]  130 	stb	,-s
   0203 5F            [ 2]  131 	clrb
   0204 BD 07 5F      [ 8]  132 	jsr	__Moveto_d
   0207 32 61         [ 5]  133 	leas	1,s
   0209 8E 01 A1      [ 3]  134 	ldx	#_Gamefield
   020C BD F4 10      [ 8]  135 	jsr	___Draw_VLp
   020F BD F3 54      [ 8]  136 	jsr	___Reset0Ref
   0212 6F E2         [ 8]  137 	clr	,-s
   0214 5F            [ 2]  138 	clrb
   0215 BD 07 5F      [ 8]  139 	jsr	__Moveto_d
   0218 32 61         [ 5]  140 	leas	1,s
   021A 8E 01 BC      [ 3]  141 	ldx	#_Brainright
   021D BD F4 10      [ 8]  142 	jsr	___Draw_VLp
   0220 BD F3 54      [ 8]  143 	jsr	___Reset0Ref
   0223 6F E2         [ 8]  144 	clr	,-s
   0225 5F            [ 2]  145 	clrb
   0226 BD 07 5F      [ 8]  146 	jsr	__Moveto_d
   0229 32 61         [ 5]  147 	leas	1,s
   022B 8E 01 DA      [ 3]  148 	ldx	#_Brainleft
   022E BD F4 10      [ 8]  149 	jsr	___Draw_VLp
   0231 39            [ 5]  150 	rts
                            151 	.globl	_counter
                            152 	.area	.data
   C88B                     153 _counter:
   C88B 00                  154 	.byte	0
                            155 	.globl	_counterw
   C88C                     156 _counterw:
   C88C 03                  157 	.byte	3
                            158 	.area	.text
                            159 	.globl	_decrementCounter
   0232                     160 _decrementCounter:
   0232 F6 C8 8B      [ 5]  161 	ldb	_counter
   0235 5A            [ 2]  162 	decb
   0236 F7 C8 8B      [ 5]  163 	stb	_counter
   0239 39            [ 5]  164 	rts
   023A                     165 LC0:
   023A 54 49 4D 45 20 4C   166 	.byte	84,73,77,69,32,76,69,70
        45 46
   0242 54 80 00            167 	.byte	84,-128,0
   0245                     168 LC1:
   0245 47 41 4D 45 20 4F   169 	.byte	71,65,77,69,32,79,86,69
        56 45
   024D 52 80 00            170 	.byte	82,-128,0
                            171 	.globl	_Display_TimeLeft
   0250                     172 _Display_TimeLeft:
   0250 C6 C4         [ 2]  173 	ldb	#-60
   0252 E7 E2         [ 6]  174 	stb	,-s
   0254 8E 02 3A      [ 3]  175 	ldx	#LC0
   0257 C6 64         [ 2]  176 	ldb	#100
   0259 BD 06 0B      [ 8]  177 	jsr	_print_string
   025C 32 61         [ 5]  178 	leas	1,s
   025E F6 C8 8B      [ 5]  179 	ldb	_counter
   0261 BD 05 65      [ 8]  180 	jsr	_Loadingbar
   0264 F6 C8 8C      [ 5]  181 	ldb	_counterw
   0267 5A            [ 2]  182 	decb
   0268 F7 C8 8C      [ 5]  183 	stb	_counterw
   026B F6 C8 8C      [ 5]  184 	ldb	_counterw
   026E 5D            [ 2]  185 	tstb
   026F 26 08         [ 3]  186 	bne	L6
   0271 BD 02 32      [ 8]  187 	jsr	_decrementCounter
   0274 C6 03         [ 2]  188 	ldb	#3
   0276 F7 C8 8C      [ 5]  189 	stb	_counterw
   0279                     190 L6:
   0279 F6 C8 8B      [ 5]  191 	ldb	_counter
   027C 5D            [ 2]  192 	tstb
   027D 26 10         [ 3]  193 	bne	L9
   027F                     194 L8:
   027F C6 C4         [ 2]  195 	ldb	#-60
   0281 E7 E2         [ 6]  196 	stb	,-s
   0283 8E 02 45      [ 3]  197 	ldx	#LC1
   0286 C6 64         [ 2]  198 	ldb	#100
   0288 BD 06 0B      [ 8]  199 	jsr	_print_string
   028B 32 61         [ 5]  200 	leas	1,s
   028D 20 F0         [ 3]  201 	bra	L8
   028F                     202 L9:
   028F 39            [ 5]  203 	rts
                            204 	.globl	_a_random
                            205 	.area	.data
   C88D                     206 _a_random:
   C88D 03                  207 	.byte	3
   C88E 09                  208 	.byte	9
   C88F 07                  209 	.byte	7
   C890 05                  210 	.byte	5
   C891 05                  211 	.byte	5
   C892 08                  212 	.byte	8
   C893 04                  213 	.byte	4
   C894 05                  214 	.byte	5
   C895 09                  215 	.byte	9
   C896 08                  216 	.byte	8
   C897 01                  217 	.byte	1
   C898 05                  218 	.byte	5
   C899 09                  219 	.byte	9
   C89A 02                  220 	.byte	2
   C89B 09                  221 	.byte	9
   C89C 06                  222 	.byte	6
   C89D 03                  223 	.byte	3
   C89E 01                  224 	.byte	1
   C89F 06                  225 	.byte	6
   C8A0 03                  226 	.byte	3
                            227 	.globl	_a_random_compare
   C8A1                     228 _a_random_compare:
   C8A1 00 00 00 00 00 00   229 	.word	0,0,0,0,0,0,0,0,0,0
        00 00 00 00 00 00
        00 00 00 00 00 00
        00 00
                            230 	.area	.text
                            231 	.globl	_RandomNumberGenerator
   0290                     232 _RandomNumberGenerator:
   0290 32 7C         [ 5]  233 	leas	-4,s
   0292 6F 63         [ 7]  234 	clr	3,s
   0294 20 32         [ 3]  235 	bra	L11
   0296                     236 L12:
   0296 E6 63         [ 5]  237 	ldb	3,s
   0298 E7 61         [ 5]  238 	stb	1,s
   029A E6 63         [ 5]  239 	ldb	3,s
   029C 1D            [ 2]  240 	sex		;extendqihi2: R:b -> R:d
   029D 1F 01         [ 6]  241 	tfr	d,x
   029F E6 89 C8 8D   [ 8]  242 	ldb	_a_random,x
   02A3 E7 62         [ 5]  243 	stb	2,s
   02A5 BD 06 5F      [ 8]  244 	jsr	__Random
   02A8 EB 62         [ 5]  245 	addb	2,s
   02AA 4F            [ 2]  246 	clra		;zero_extendqihi: R:b -> R:d
   02AB 8E 00 0A      [ 3]  247 	ldx	#10
   02AE 34 10         [ 6]  248 	pshs	x
   02B0 1F 01         [ 6]  249 	tfr	d,x
   02B2 BD 06 47      [ 8]  250 	jsr	_umodhi3
   02B5 32 62         [ 5]  251 	leas	2,s
   02B7 1F 10         [ 6]  252 	tfr	x,d	;movlsbqihi: R:x -> R:b
   02B9 E7 E4         [ 4]  253 	stb	,s
   02BB E6 61         [ 5]  254 	ldb	1,s
   02BD 1D            [ 2]  255 	sex		;extendqihi2: R:b -> R:d
   02BE 1F 01         [ 6]  256 	tfr	d,x
   02C0 E6 E4         [ 4]  257 	ldb	,s
   02C2 E7 89 C8 8D   [ 8]  258 	stb	_a_random,x
   02C6 6C 63         [ 7]  259 	inc	3,s
   02C8                     260 L11:
   02C8 E6 63         [ 5]  261 	ldb	3,s
   02CA C1 13         [ 2]  262 	cmpb	#19	;cmpqi:
   02CC 2F C8         [ 3]  263 	ble	L12
   02CE 32 64         [ 5]  264 	leas	4,s
   02D0 39            [ 5]  265 	rts
                            266 	.globl	_RandomSequenceCounter
                            267 	.area	.data
   C8B5                     268 _RandomSequenceCounter:
   C8B5 C8                  269 	.byte	-56
                            270 	.globl	_RandomSequenceCounterDisplay
   C8B6                     271 _RandomSequenceCounterDisplay:
   C8B6 00                  272 	.byte	0
                            273 	.area	.text
   02D1                     274 LC2:
   02D1 52 45 4D 45 4D 42   275 	.byte	82,69,77,69,77,66,69,82
        45 52
   02D9 20 54 48 45 80 00   276 	.byte	32,84,72,69,-128,0
   02DF                     277 LC3:
   02DF 53 45 51 55 45 4E   278 	.byte	83,69,81,85,69,78,67,69
        43 45
   02E7 80 00               279 	.byte	-128,0
                            280 	.globl	_Display_RandomSequence
   02E9                     281 _Display_RandomSequence:
   02E9 32 7D         [ 5]  282 	leas	-3,s
   02EB 6F 62         [ 7]  283 	clr	2,s
   02ED 16 00 8B      [ 5]  284 	lbra	L15
   02F0                     285 L17:
   02F0 C6 C8         [ 2]  286 	ldb	#-56
   02F2 F7 C8 8B      [ 5]  287 	stb	_counter
   02F5 BD F1 92      [ 8]  288 	jsr	___Wait_Recal
   02F8 BD 01 F8      [ 8]  289 	jsr	_Generate_Gamefield
   02FB C6 B5         [ 2]  290 	ldb	#-75
   02FD E7 E2         [ 6]  291 	stb	,-s
   02FF 8E 02 D1      [ 3]  292 	ldx	#LC2
   0302 C6 64         [ 2]  293 	ldb	#100
   0304 BD 06 0B      [ 8]  294 	jsr	_print_string
   0307 32 61         [ 5]  295 	leas	1,s
   0309 C6 CE         [ 2]  296 	ldb	#-50
   030B E7 E2         [ 6]  297 	stb	,-s
   030D 8E 02 DF      [ 3]  298 	ldx	#LC3
   0310 C6 50         [ 2]  299 	ldb	#80
   0312 BD 06 0B      [ 8]  300 	jsr	_print_string
   0315 32 61         [ 5]  301 	leas	1,s
   0317 E6 62         [ 5]  302 	ldb	2,s
   0319 4F            [ 2]  303 	clra		;zero_extendqihi: R:b -> R:d
   031A 1F 01         [ 6]  304 	tfr	d,x
   031C E6 89 C8 8D   [ 8]  305 	ldb	_a_random,x
   0320 BD 05 BA      [ 8]  306 	jsr	_draw_cross
   0323 E6 62         [ 5]  307 	ldb	2,s
   0325 5C            [ 2]  308 	incb
   0326 86 64         [ 2]  309 	lda	#100	;umulqihi3
   0328 3D            [11]  310 	mul
                            311 		;movlsbqihi: D->B
   0329 4F            [ 2]  312 	clra		;zero_extendqihi: R:b -> R:d
   032A ED E4         [ 5]  313 	std	,s
   032C C6 C8         [ 2]  314 	ldb	#-56
   032E E7 E2         [ 6]  315 	stb	,-s
   0330 AE 61         [ 6]  316 	ldx	1,s
   0332 C6 01         [ 2]  317 	ldb	#1
   0334 BD 06 82      [ 8]  318 	jsr	_play_tune
   0337 32 61         [ 5]  319 	leas	1,s
   0339 E6 62         [ 5]  320 	ldb	2,s
   033B 5C            [ 2]  321 	incb
   033C 86 64         [ 2]  322 	lda	#100	;umulqihi3
   033E 3D            [11]  323 	mul
                            324 		;movlsbqihi: D->B
   033F 4F            [ 2]  325 	clra		;zero_extendqihi: R:b -> R:d
   0340 ED E4         [ 5]  326 	std	,s
   0342 C6 C8         [ 2]  327 	ldb	#-56
   0344 E7 E2         [ 6]  328 	stb	,-s
   0346 AE 61         [ 6]  329 	ldx	1,s
   0348 C6 02         [ 2]  330 	ldb	#2
   034A BD 06 82      [ 8]  331 	jsr	_play_tune
   034D 32 61         [ 5]  332 	leas	1,s
   034F E6 62         [ 5]  333 	ldb	2,s
   0351 5C            [ 2]  334 	incb
   0352 86 64         [ 2]  335 	lda	#100	;umulqihi3
   0354 3D            [11]  336 	mul
                            337 		;movlsbqihi: D->B
   0355 4F            [ 2]  338 	clra		;zero_extendqihi: R:b -> R:d
   0356 ED E4         [ 5]  339 	std	,s
   0358 C6 C8         [ 2]  340 	ldb	#-56
   035A E7 E2         [ 6]  341 	stb	,-s
   035C AE 61         [ 6]  342 	ldx	1,s
   035E C6 03         [ 2]  343 	ldb	#3
   0360 BD 06 82      [ 8]  344 	jsr	_play_tune
   0363 32 61         [ 5]  345 	leas	1,s
   0365                     346 L16:
   0365 F6 C8 B5      [ 5]  347 	ldb	_RandomSequenceCounter
   0368 5A            [ 2]  348 	decb
   0369 F7 C8 B5      [ 5]  349 	stb	_RandomSequenceCounter
   036C F6 C8 B5      [ 5]  350 	ldb	_RandomSequenceCounter
   036F 5D            [ 2]  351 	tstb
   0370 10 26 FF 7C   [ 6]  352 	lbne	L17
   0374 C6 1E         [ 2]  353 	ldb	#30
   0376 F7 C8 B5      [ 5]  354 	stb	_RandomSequenceCounter
   0379 6C 62         [ 7]  355 	inc	2,s
   037B                     356 L15:
   037B F6 C8 B6      [ 5]  357 	ldb	_RandomSequenceCounterDisplay
   037E 5C            [ 2]  358 	incb
   037F E1 62         [ 5]  359 	cmpb	2,s	;cmpqi:
   0381 22 E2         [ 3]  360 	bhi	L16
   0383 7F C8 89      [ 7]  361 	clr	_SequenceTime
   0386 32 63         [ 5]  362 	leas	3,s
   0388 39            [ 5]  363 	rts
                            364 	.globl	_level_init
   0389                     365 _level_init:
   0389 7F C8 8A      [ 7]  366 	clr	_current_level
   038C BD 02 90      [ 8]  367 	jsr	_RandomNumberGenerator
   038F 39            [ 5]  368 	rts
                            369 	.globl	_buttonspressedcounter
                            370 	.area	.data
   C8B7                     371 _buttonspressedcounter:
   C8B7 00                  372 	.byte	0
                            373 	.area	.text
                            374 	.globl	_Check_if_succesfull
   0390                     375 _Check_if_succesfull:
   0390 32 7E         [ 5]  376 	leas	-2,s
   0392 6F 61         [ 7]  377 	clr	1,s
   0394 16 00 5F      [ 5]  378 	lbra	L23
   0397                     379 L26:
   0397 E6 61         [ 5]  380 	ldb	1,s
   0399 4F            [ 2]  381 	clra		;zero_extendqihi: R:b -> R:d
   039A 1F 01         [ 6]  382 	tfr	d,x
   039C E6 89 C8 8D   [ 8]  383 	ldb	_a_random,x
   03A0 E7 E4         [ 4]  384 	stb	,s
   03A2 E6 61         [ 5]  385 	ldb	1,s
   03A4 4F            [ 2]  386 	clra		;zero_extendqihi: R:b -> R:d
   03A5 1F 01         [ 6]  387 	tfr	d,x
   03A7 E6 89 C8 A1   [ 8]  388 	ldb	_a_random_compare,x
   03AB E1 E4         [ 4]  389 	cmpb	,s	;cmpqi:(R)
   03AD 27 3C         [ 3]  390 	beq	L24
   03AF                     391 L25:
   03AF C6 C4         [ 2]  392 	ldb	#-60
   03B1 E7 E2         [ 6]  393 	stb	,-s
   03B3 8E 02 45      [ 3]  394 	ldx	#LC1
   03B6 C6 64         [ 2]  395 	ldb	#100
   03B8 BD 06 0B      [ 8]  396 	jsr	_print_string
   03BB 32 61         [ 5]  397 	leas	1,s
   03BD E6 61         [ 5]  398 	ldb	1,s
   03BF 4F            [ 2]  399 	clra		;zero_extendqihi: R:b -> R:d
   03C0 1F 01         [ 6]  400 	tfr	d,x
   03C2 E6 89 C8 8D   [ 8]  401 	ldb	_a_random,x
   03C6 34 04         [ 6]  402 	pshs	b
   03C8 C6 CE         [ 2]  403 	ldb	#-50
   03CA E7 E2         [ 6]  404 	stb	,-s
   03CC C6 BA         [ 2]  405 	ldb	#-70
   03CE BD 06 F0      [ 8]  406 	jsr	_print_unsigned_int
   03D1 32 62         [ 5]  407 	leas	2,s
   03D3 E6 61         [ 5]  408 	ldb	1,s
   03D5 4F            [ 2]  409 	clra		;zero_extendqihi: R:b -> R:d
   03D6 1F 01         [ 6]  410 	tfr	d,x
   03D8 E6 89 C8 A1   [ 8]  411 	ldb	_a_random_compare,x
   03DC 34 04         [ 6]  412 	pshs	b
   03DE C6 CE         [ 2]  413 	ldb	#-50
   03E0 E7 E2         [ 6]  414 	stb	,-s
   03E2 C6 CE         [ 2]  415 	ldb	#-50
   03E4 BD 06 F0      [ 8]  416 	jsr	_print_unsigned_int
   03E7 32 62         [ 5]  417 	leas	2,s
   03E9 20 C4         [ 3]  418 	bra	L25
   03EB                     419 L24:
   03EB E6 61         [ 5]  420 	ldb	1,s
   03ED 4F            [ 2]  421 	clra		;zero_extendqihi: R:b -> R:d
   03EE 1F 01         [ 6]  422 	tfr	d,x
   03F0 6F 89 C8 A1   [10]  423 	clr	_a_random_compare,x
   03F4 6C 61         [ 7]  424 	inc	1,s
   03F6                     425 L23:
   03F6 F6 C8 B6      [ 5]  426 	ldb	_RandomSequenceCounterDisplay
   03F9 5C            [ 2]  427 	incb
   03FA E1 61         [ 5]  428 	cmpb	1,s	;cmpqi:
   03FC 10 22 FF 97   [ 6]  429 	lbhi	L26
   0400 C6 01         [ 2]  430 	ldb	#1
   0402 F7 C8 89      [ 5]  431 	stb	_SequenceTime
   0405 F6 C8 B6      [ 5]  432 	ldb	_RandomSequenceCounterDisplay
   0408 5C            [ 2]  433 	incb
   0409 F7 C8 B6      [ 5]  434 	stb	_RandomSequenceCounterDisplay
   040C 7F C8 B7      [ 7]  435 	clr	_buttonspressedcounter
   040F C6 C8         [ 2]  436 	ldb	#-56
   0411 F7 C8 8B      [ 5]  437 	stb	_counter
   0414 32 62         [ 5]  438 	leas	2,s
   0416 39            [ 5]  439 	rts
                            440 	.area	.bss
   C8D3                     441 _joy_x:	.blkb	1
   C8D4                     442 _joy_y:	.blkb	1
                            443 	.globl	_temppass
                            444 	.area	.data
   C8B8                     445 _temppass:
   C8B8 00                  446 	.byte	0
                            447 	.area	.text
                            448 	.globl	_move_cursor
   0417                     449 _move_cursor:
   0417 32 7D         [ 5]  450 	leas	-3,s
   0419 BD F1 F8      [ 8]  451 	jsr	___Joy_Digital
   041C F6 C8 1B      [ 5]  452 	ldb	_Vec_Joy_1_X
   041F F7 C8 D3      [ 5]  453 	stb	_joy_x
   0422 F6 C8 1C      [ 5]  454 	ldb	_Vec_Joy_1_Y
   0425 F7 C8 D4      [ 5]  455 	stb	_joy_y
   0428 F6 C8 D3      [ 5]  456 	ldb	_joy_x
   042B 5D            [ 2]  457 	tstb
   042C 2C 0B         [ 3]  458 	bge	L29
   042E F6 C8 D4      [ 5]  459 	ldb	_joy_y
   0431 5D            [ 2]  460 	tstb
   0432 2F 05         [ 3]  461 	ble	L29
   0434 C6 01         [ 2]  462 	ldb	#1
   0436 F7 C8 B8      [ 5]  463 	stb	_temppass
   0439                     464 L29:
   0439 F6 C8 D3      [ 5]  465 	ldb	_joy_x
   043C 5D            [ 2]  466 	tstb
   043D 26 0B         [ 3]  467 	bne	L30
   043F F6 C8 D4      [ 5]  468 	ldb	_joy_y
   0442 5D            [ 2]  469 	tstb
   0443 2F 05         [ 3]  470 	ble	L30
   0445 C6 02         [ 2]  471 	ldb	#2
   0447 F7 C8 B8      [ 5]  472 	stb	_temppass
   044A                     473 L30:
   044A F6 C8 D3      [ 5]  474 	ldb	_joy_x
   044D 5D            [ 2]  475 	tstb
   044E 2F 0B         [ 3]  476 	ble	L31
   0450 F6 C8 D4      [ 5]  477 	ldb	_joy_y
   0453 5D            [ 2]  478 	tstb
   0454 2F 05         [ 3]  479 	ble	L31
   0456 C6 03         [ 2]  480 	ldb	#3
   0458 F7 C8 B8      [ 5]  481 	stb	_temppass
   045B                     482 L31:
   045B F6 C8 D3      [ 5]  483 	ldb	_joy_x
   045E 5D            [ 2]  484 	tstb
   045F 2C 0B         [ 3]  485 	bge	L32
   0461 F6 C8 D4      [ 5]  486 	ldb	_joy_y
   0464 5D            [ 2]  487 	tstb
   0465 26 05         [ 3]  488 	bne	L32
   0467 C6 04         [ 2]  489 	ldb	#4
   0469 F7 C8 B8      [ 5]  490 	stb	_temppass
   046C                     491 L32:
   046C F6 C8 D3      [ 5]  492 	ldb	_joy_x
   046F 5D            [ 2]  493 	tstb
   0470 26 0B         [ 3]  494 	bne	L33
   0472 F6 C8 D4      [ 5]  495 	ldb	_joy_y
   0475 5D            [ 2]  496 	tstb
   0476 26 05         [ 3]  497 	bne	L33
   0478 C6 05         [ 2]  498 	ldb	#5
   047A F7 C8 B8      [ 5]  499 	stb	_temppass
   047D                     500 L33:
   047D F6 C8 D3      [ 5]  501 	ldb	_joy_x
   0480 5D            [ 2]  502 	tstb
   0481 2F 0B         [ 3]  503 	ble	L34
   0483 F6 C8 D4      [ 5]  504 	ldb	_joy_y
   0486 5D            [ 2]  505 	tstb
   0487 26 05         [ 3]  506 	bne	L34
   0489 C6 06         [ 2]  507 	ldb	#6
   048B F7 C8 B8      [ 5]  508 	stb	_temppass
   048E                     509 L34:
   048E F6 C8 D3      [ 5]  510 	ldb	_joy_x
   0491 5D            [ 2]  511 	tstb
   0492 2C 0B         [ 3]  512 	bge	L35
   0494 F6 C8 D4      [ 5]  513 	ldb	_joy_y
   0497 5D            [ 2]  514 	tstb
   0498 2C 05         [ 3]  515 	bge	L35
   049A C6 07         [ 2]  516 	ldb	#7
   049C F7 C8 B8      [ 5]  517 	stb	_temppass
   049F                     518 L35:
   049F F6 C8 D3      [ 5]  519 	ldb	_joy_x
   04A2 5D            [ 2]  520 	tstb
   04A3 26 0B         [ 3]  521 	bne	L36
   04A5 F6 C8 D4      [ 5]  522 	ldb	_joy_y
   04A8 5D            [ 2]  523 	tstb
   04A9 2C 05         [ 3]  524 	bge	L36
   04AB C6 08         [ 2]  525 	ldb	#8
   04AD F7 C8 B8      [ 5]  526 	stb	_temppass
   04B0                     527 L36:
   04B0 F6 C8 D3      [ 5]  528 	ldb	_joy_x
   04B3 5D            [ 2]  529 	tstb
   04B4 2F 0B         [ 3]  530 	ble	L37
   04B6 F6 C8 D4      [ 5]  531 	ldb	_joy_y
   04B9 5D            [ 2]  532 	tstb
   04BA 2C 05         [ 3]  533 	bge	L37
   04BC C6 09         [ 2]  534 	ldb	#9
   04BE F7 C8 B8      [ 5]  535 	stb	_temppass
   04C1                     536 L37:
   04C1 F6 C8 B8      [ 5]  537 	ldb	_temppass
   04C4 BD 05 BA      [ 8]  538 	jsr	_draw_cross
   04C7 BD F1 BA      [ 8]  539 	jsr	___Read_Btns
   04CA F6 C8 11      [ 5]  540 	ldb	_Vec_Buttons
   04CD C4 01         [ 2]  541 	andb	#1
   04CF 5D            [ 2]  542 	tstb
   04D0 27 30         [ 3]  543 	beq	L39
   04D2 F6 C8 B7      [ 5]  544 	ldb	_buttonspressedcounter
   04D5 E7 E4         [ 4]  545 	stb	,s
   04D7 F6 C8 B8      [ 5]  546 	ldb	_temppass
   04DA E7 61         [ 5]  547 	stb	1,s
   04DC E6 E4         [ 4]  548 	ldb	,s
   04DE 4F            [ 2]  549 	clra		;zero_extendqihi: R:b -> R:d
   04DF 1F 01         [ 6]  550 	tfr	d,x
   04E1 E6 61         [ 5]  551 	ldb	1,s
   04E3 E7 89 C8 A1   [ 8]  552 	stb	_a_random_compare,x
   04E7 F6 C8 B7      [ 5]  553 	ldb	_buttonspressedcounter
   04EA 5C            [ 2]  554 	incb
   04EB F7 C8 B7      [ 5]  555 	stb	_buttonspressedcounter
   04EE F6 C8 B6      [ 5]  556 	ldb	_RandomSequenceCounterDisplay
   04F1 E7 E4         [ 4]  557 	stb	,s
   04F3 E6 E4         [ 4]  558 	ldb	,s
   04F5 5C            [ 2]  559 	incb
   04F6 E7 62         [ 5]  560 	stb	2,s
   04F8 F6 C8 B7      [ 5]  561 	ldb	_buttonspressedcounter
   04FB E1 62         [ 5]  562 	cmpb	2,s	;cmpqi:(R)
   04FD 26 03         [ 3]  563 	bne	L39
   04FF BD 03 90      [ 8]  564 	jsr	_Check_if_succesfull
   0502                     565 L39:
   0502 32 63         [ 5]  566 	leas	3,s
   0504 39            [ 5]  567 	rts
                            568 	.globl	_level_play
   0505                     569 _level_play:
   0505 32 7C         [ 5]  570 	leas	-4,s
   0507 20 34         [ 3]  571 	bra	L41
   0509                     572 L43:
   0509 BD F1 AF      [ 8]  573 	jsr	___DP_to_C8
   050C BE C8 CF      [ 6]  574 	ldx	_current_explosion
   050F AF E4         [ 5]  575 	stx	,s
   0511 AE E4         [ 5]  576 	ldx	,s
   0513 BD 06 35      [ 8]  577 	jsr	__Explosion_Snd
   0516 BE C8 D1      [ 6]  578 	ldx	_current_music
   0519 AF 62         [ 6]  579 	stx	2,s
   051B AE 62         [ 6]  580 	ldx	2,s
   051D BD 06 3E      [ 8]  581 	jsr	__Init_Music_chk
   0520 BD F1 92      [ 8]  582 	jsr	___Wait_Recal
   0523 BD 06 58      [ 8]  583 	jsr	__Do_Sound
   0526 BD F2 A5      [ 8]  584 	jsr	___Intensity_5F
   0529 BD 01 F8      [ 8]  585 	jsr	_Generate_Gamefield
   052C F6 C8 89      [ 5]  586 	ldb	_SequenceTime
   052F 5D            [ 2]  587 	tstb
   0530 27 05         [ 3]  588 	beq	L42
   0532 BD 02 E9      [ 8]  589 	jsr	_Display_RandomSequence
   0535 20 06         [ 3]  590 	bra	L41
   0537                     591 L42:
   0537 BD 02 50      [ 8]  592 	jsr	_Display_TimeLeft
   053A BD 04 17      [ 8]  593 	jsr	_move_cursor
   053D                     594 L41:
   053D F6 C8 8A      [ 5]  595 	ldb	_current_level
   0540 5D            [ 2]  596 	tstb
   0541 27 C6         [ 3]  597 	beq	L43
   0543 32 64         [ 5]  598 	leas	4,s
   0545 39            [ 5]  599 	rts
ASxxxx Assembler V05.50  (Motorola 6809)                                Page 1
Hexadecimal [16-Bits]                                 Sat May  3 15:24:22 2025

Symbol Table

    .__.$$$.       =   2710 L   |     .__.ABS.       =   0000 G
    .__.CPU.       =   0000 L   |     .__.H$L.       =   0001 L
  3 L11                0134 R   |   3 L12                0102 R
  3 L15                01E7 R   |   3 L16                01D1 R
  3 L17                015C R   |   3 L23                0262 R
  3 L24                0257 R   |   3 L25                021B R
  3 L26                0203 R   |   3 L29                02A5 R
  3 L30                02B6 R   |   3 L31                02C7 R
  3 L32                02D8 R   |   3 L33                02E9 R
  3 L34                02FA R   |   3 L35                030B R
  3 L36                031C R   |   3 L37                032D R
  3 L39                036E R   |   3 L41                03A9 R
  3 L42                03A3 R   |   3 L43                0375 R
  3 L6                 00E5 R   |   3 L8                 00EB R
  3 L9                 00FB R   |   3 LC0                00A6 R
  3 LC1                00B1 R   |   3 LC2                013D R
  3 LC3                014B R   |   3 _Brainleft         0046 GR
  3 _Brainright        0028 GR  |   3 _Check_if_succ     01FC GR
  3 _Display_Rando     0155 GR  |   3 _Display_TimeL     00BC GR
  3 _Gamefield         000D GR  |   3 _Generate_Game     0064 GR
    _Loadingbar        **** GX  |   3 _RandomNumberG     00FC GR
  2 _RandomSequenc     002C GR  |   2 _RandomSequenc     002D GR
  2 _SequenceTime      0000 GR  |     _Vec_Buttons       **** GX
    _Vec_Joy_1_X       **** GX  |     _Vec_Joy_1_Y       **** GX
    __Do_Sound         **** GX  |     __Explosion_Sn     **** GX
    __Init_Music_c     **** GX  |     __Moveto_d         **** GX
    __Random           **** GX  |     ___DP_to_C8        **** GX
    ___Draw_VLp        **** GX  |     ___Intensity_5     **** GX
    ___Joy_Digital     **** GX  |     ___Read_Btns       **** GX
    ___Reset0Ref       **** GX  |     ___Wait_Recal      **** GX
  2 _a_random          0004 GR  |   2 _a_random_comp     0018 GR
  2 _buttonspresse     002E GR  |   2 _counter           0002 GR
  2 _counterw          0003 GR  |     _current_explo     **** GX
  2 _current_level     0001 GR  |     _current_music     **** GX
  3 _decrementCoun     009E GR  |     _dp_VIA_t1_cnt     **** GX
    _draw_cross        **** GX  |   4 _joy_x             0000 R
  4 _joy_y             0001 R   |   3 _level_init        01F5 GR
  3 _level_play        0371 GR  |   3 _move_cursor       0283 GR
  3 _nibby_vl_styl     0000 GR  |   3 _offset            000C GR
    _play_tune         **** GX  |     _print_string      **** GX
    _print_unsigne     **** GX  |   2 _temppass          002F GR
    _umodhi3           **** GX

ASxxxx Assembler V05.50  (Motorola 6809)                                Page 2
Hexadecimal [16-Bits]                                 Sat May  3 15:24:22 2025

Area Table

[_CSEG]
   0 _CODE            size    0   flags C080
   2 .data            size   30   flags  100
   3 .text            size  3B2   flags  100
   4 .bss             size    2   flags    0
[_DSEG]
   1 _DATA            size    0   flags C0C0

