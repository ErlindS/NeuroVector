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
                             28 	.globl	_Generate_Gamefield
   01A0                      29 _Generate_Gamefield:
   01A0 BD F3 54      [ 8]   30 	jsr	___Reset0Ref
   01A3 C6 0A         [ 2]   31 	ldb	#10
   01A5 E7 E2         [ 6]   32 	stb	,-s
   01A7 C6 E2         [ 2]   33 	ldb	#-30
   01A9 BD 07 08      [ 8]   34 	jsr	__Moveto_d
   01AC 32 61         [ 5]   35 	leas	1,s
   01AE 8E FF A1      [ 3]   36 	ldx	#-95
   01B1 E6 84         [ 4]   37 	ldb	,x
   01B3 C1 20         [ 2]   38 	cmpb	#32	;cmpqi:
   01B5 26 13         [ 3]   39 	bne	L2
   01B7 C6 FF         [ 2]   40 	ldb	#-1
   01B9 D7 04         [ 4]   41 	stb	*_dp_VIA_t1_cnt_lo
   01BB 8E 01 94      [ 3]   42 	ldx	#_nibby_vl_style_0
   01BE 34 10         [ 6]   43 	pshs	x
   01C0 8E 00 00      [ 3]   44 	ldx	#0
   01C3 BD 06 8F      [ 8]   45 	jsr	__Draw_Grid_VL
   01C6 32 62         [ 5]   46 	leas	2,s
   01C8 20 11         [ 3]   47 	bra	L4
   01CA                      48 L2:
   01CA C6 FF         [ 2]   49 	ldb	#-1
   01CC D7 04         [ 4]   50 	stb	*_dp_VIA_t1_cnt_lo
   01CE 8E 01 94      [ 3]   51 	ldx	#_nibby_vl_style_0
   01D1 34 10         [ 6]   52 	pshs	x
   01D3 8E 00 00      [ 3]   53 	ldx	#0
   01D6 BD 06 8F      [ 8]   54 	jsr	__Draw_Grid_VL
   01D9 32 62         [ 5]   55 	leas	2,s
   01DB                      56 L4:
   01DB 39            [ 5]   57 	rts
                             58 	.globl	_counter
                             59 	.area	.data
   C88B                      60 _counter:
   C88B 00                   61 	.byte	0
                             62 	.globl	_counterw
   C88C                      63 _counterw:
   C88C 03                   64 	.byte	3
                             65 	.area	.text
                             66 	.globl	_decrementCounter
   01DC                      67 _decrementCounter:
   01DC F6 C8 8B      [ 5]   68 	ldb	_counter
   01DF 5A            [ 2]   69 	decb
   01E0 F7 C8 8B      [ 5]   70 	stb	_counter
   01E3 39            [ 5]   71 	rts
   01E4                      72 LC0:
   01E4 54 49 4D 45 20 4C    73 	.byte	84,73,77,69,32,76,69,70
        45 46
   01EC 54 80 00             74 	.byte	84,-128,0
   01EF                      75 LC1:
   01EF 47 41 4D 45 20 4F    76 	.byte	71,65,77,69,32,79,86,69
        56 45
   01F7 52 80 00             77 	.byte	82,-128,0
                             78 	.globl	_Display_TimeLeft
   01FA                      79 _Display_TimeLeft:
   01FA C6 C4         [ 2]   80 	ldb	#-60
   01FC E7 E2         [ 6]   81 	stb	,-s
   01FE 8E 01 E4      [ 3]   82 	ldx	#LC0
   0201 C6 64         [ 2]   83 	ldb	#100
   0203 BD 05 AA      [ 8]   84 	jsr	_print_string
   0206 32 61         [ 5]   85 	leas	1,s
   0208 F6 C8 8B      [ 5]   86 	ldb	_counter
   020B BD 05 0F      [ 8]   87 	jsr	_Loadingbar
   020E F6 C8 8C      [ 5]   88 	ldb	_counterw
   0211 5A            [ 2]   89 	decb
   0212 F7 C8 8C      [ 5]   90 	stb	_counterw
   0215 F6 C8 8C      [ 5]   91 	ldb	_counterw
   0218 5D            [ 2]   92 	tstb
   0219 26 08         [ 3]   93 	bne	L8
   021B BD 01 DC      [ 8]   94 	jsr	_decrementCounter
   021E C6 03         [ 2]   95 	ldb	#3
   0220 F7 C8 8C      [ 5]   96 	stb	_counterw
   0223                      97 L8:
   0223 F6 C8 8B      [ 5]   98 	ldb	_counter
   0226 5D            [ 2]   99 	tstb
   0227 26 10         [ 3]  100 	bne	L11
   0229                     101 L10:
   0229 C6 C4         [ 2]  102 	ldb	#-60
   022B E7 E2         [ 6]  103 	stb	,-s
   022D 8E 01 EF      [ 3]  104 	ldx	#LC1
   0230 C6 64         [ 2]  105 	ldb	#100
   0232 BD 05 AA      [ 8]  106 	jsr	_print_string
   0235 32 61         [ 5]  107 	leas	1,s
   0237 20 F0         [ 3]  108 	bra	L10
   0239                     109 L11:
   0239 39            [ 5]  110 	rts
                            111 	.globl	_a_random
                            112 	.area	.data
   C88D                     113 _a_random:
   C88D 03                  114 	.byte	3
   C88E 09                  115 	.byte	9
   C88F 07                  116 	.byte	7
   C890 05                  117 	.byte	5
   C891 05                  118 	.byte	5
   C892 08                  119 	.byte	8
   C893 04                  120 	.byte	4
   C894 05                  121 	.byte	5
   C895 09                  122 	.byte	9
   C896 08                  123 	.byte	8
   C897 01                  124 	.byte	1
   C898 05                  125 	.byte	5
   C899 09                  126 	.byte	9
   C89A 02                  127 	.byte	2
   C89B 09                  128 	.byte	9
   C89C 06                  129 	.byte	6
   C89D 03                  130 	.byte	3
   C89E 01                  131 	.byte	1
   C89F 06                  132 	.byte	6
   C8A0 03                  133 	.byte	3
                            134 	.globl	_a_random_compare
   C8A1                     135 _a_random_compare:
   C8A1 00 00 00 00 00 00   136 	.word	0,0,0,0,0,0,0,0,0,0
        00 00 00 00 00 00
        00 00 00 00 00 00
        00 00
                            137 	.area	.text
                            138 	.globl	_RandomNumberGenerator
   023A                     139 _RandomNumberGenerator:
   023A 32 7C         [ 5]  140 	leas	-4,s
   023C 6F 63         [ 7]  141 	clr	3,s
   023E 20 32         [ 3]  142 	bra	L13
   0240                     143 L14:
   0240 E6 63         [ 5]  144 	ldb	3,s
   0242 E7 61         [ 5]  145 	stb	1,s
   0244 E6 63         [ 5]  146 	ldb	3,s
   0246 1D            [ 2]  147 	sex		;extendqihi2: R:b -> R:d
   0247 1F 01         [ 6]  148 	tfr	d,x
   0249 E6 89 C8 8D   [ 8]  149 	ldb	_a_random,x
   024D E7 62         [ 5]  150 	stb	2,s
   024F BD 05 FE      [ 8]  151 	jsr	__Random
   0252 EB 62         [ 5]  152 	addb	2,s
   0254 4F            [ 2]  153 	clra		;zero_extendqihi: R:b -> R:d
   0255 8E 00 0A      [ 3]  154 	ldx	#10
   0258 34 10         [ 6]  155 	pshs	x
   025A 1F 01         [ 6]  156 	tfr	d,x
   025C BD 05 E6      [ 8]  157 	jsr	_umodhi3
   025F 32 62         [ 5]  158 	leas	2,s
   0261 1F 10         [ 6]  159 	tfr	x,d	;movlsbqihi: R:x -> R:b
   0263 E7 E4         [ 4]  160 	stb	,s
   0265 E6 61         [ 5]  161 	ldb	1,s
   0267 1D            [ 2]  162 	sex		;extendqihi2: R:b -> R:d
   0268 1F 01         [ 6]  163 	tfr	d,x
   026A E6 E4         [ 4]  164 	ldb	,s
   026C E7 89 C8 8D   [ 8]  165 	stb	_a_random,x
   0270 6C 63         [ 7]  166 	inc	3,s
   0272                     167 L13:
   0272 E6 63         [ 5]  168 	ldb	3,s
   0274 C1 13         [ 2]  169 	cmpb	#19	;cmpqi:
   0276 2F C8         [ 3]  170 	ble	L14
   0278 32 64         [ 5]  171 	leas	4,s
   027A 39            [ 5]  172 	rts
                            173 	.globl	_RandomSequenceCounter
                            174 	.area	.data
   C8B5                     175 _RandomSequenceCounter:
   C8B5 C8                  176 	.byte	-56
                            177 	.globl	_RandomSequenceCounterDisplay
   C8B6                     178 _RandomSequenceCounterDisplay:
   C8B6 00                  179 	.byte	0
                            180 	.area	.text
   027B                     181 LC2:
   027B 52 45 4D 45 4D 42   182 	.byte	82,69,77,69,77,66,69,82
        45 52
   0283 20 54 48 45 80 00   183 	.byte	32,84,72,69,-128,0
   0289                     184 LC3:
   0289 53 45 51 55 45 4E   185 	.byte	83,69,81,85,69,78,67,69
        43 45
   0291 80 00               186 	.byte	-128,0
                            187 	.globl	_Display_RandomSequence
   0293                     188 _Display_RandomSequence:
   0293 32 7D         [ 5]  189 	leas	-3,s
   0295 6F 62         [ 7]  190 	clr	2,s
   0297 16 00 8B      [ 5]  191 	lbra	L17
   029A                     192 L19:
   029A C6 C8         [ 2]  193 	ldb	#-56
   029C F7 C8 8B      [ 5]  194 	stb	_counter
   029F BD F1 92      [ 8]  195 	jsr	___Wait_Recal
   02A2 BD 01 A0      [ 8]  196 	jsr	_Generate_Gamefield
   02A5 C6 B5         [ 2]  197 	ldb	#-75
   02A7 E7 E2         [ 6]  198 	stb	,-s
   02A9 8E 02 7B      [ 3]  199 	ldx	#LC2
   02AC C6 64         [ 2]  200 	ldb	#100
   02AE BD 05 AA      [ 8]  201 	jsr	_print_string
   02B1 32 61         [ 5]  202 	leas	1,s
   02B3 C6 CE         [ 2]  203 	ldb	#-50
   02B5 E7 E2         [ 6]  204 	stb	,-s
   02B7 8E 02 89      [ 3]  205 	ldx	#LC3
   02BA C6 50         [ 2]  206 	ldb	#80
   02BC BD 05 AA      [ 8]  207 	jsr	_print_string
   02BF 32 61         [ 5]  208 	leas	1,s
   02C1 E6 62         [ 5]  209 	ldb	2,s
   02C3 4F            [ 2]  210 	clra		;zero_extendqihi: R:b -> R:d
   02C4 1F 01         [ 6]  211 	tfr	d,x
   02C6 E6 89 C8 8D   [ 8]  212 	ldb	_a_random,x
   02CA BD 05 64      [ 8]  213 	jsr	_draw_cross
   02CD E6 62         [ 5]  214 	ldb	2,s
   02CF 5C            [ 2]  215 	incb
   02D0 86 64         [ 2]  216 	lda	#100	;umulqihi3
   02D2 3D            [11]  217 	mul
                            218 		;movlsbqihi: D->B
   02D3 4F            [ 2]  219 	clra		;zero_extendqihi: R:b -> R:d
   02D4 ED E4         [ 5]  220 	std	,s
   02D6 C6 C8         [ 2]  221 	ldb	#-56
   02D8 E7 E2         [ 6]  222 	stb	,-s
   02DA AE 61         [ 6]  223 	ldx	1,s
   02DC C6 01         [ 2]  224 	ldb	#1
   02DE BD 06 21      [ 8]  225 	jsr	_play_tune
   02E1 32 61         [ 5]  226 	leas	1,s
   02E3 E6 62         [ 5]  227 	ldb	2,s
   02E5 5C            [ 2]  228 	incb
   02E6 86 64         [ 2]  229 	lda	#100	;umulqihi3
   02E8 3D            [11]  230 	mul
                            231 		;movlsbqihi: D->B
   02E9 4F            [ 2]  232 	clra		;zero_extendqihi: R:b -> R:d
   02EA ED E4         [ 5]  233 	std	,s
   02EC C6 C8         [ 2]  234 	ldb	#-56
   02EE E7 E2         [ 6]  235 	stb	,-s
   02F0 AE 61         [ 6]  236 	ldx	1,s
   02F2 C6 02         [ 2]  237 	ldb	#2
   02F4 BD 06 21      [ 8]  238 	jsr	_play_tune
   02F7 32 61         [ 5]  239 	leas	1,s
   02F9 E6 62         [ 5]  240 	ldb	2,s
   02FB 5C            [ 2]  241 	incb
   02FC 86 64         [ 2]  242 	lda	#100	;umulqihi3
   02FE 3D            [11]  243 	mul
                            244 		;movlsbqihi: D->B
   02FF 4F            [ 2]  245 	clra		;zero_extendqihi: R:b -> R:d
   0300 ED E4         [ 5]  246 	std	,s
   0302 C6 C8         [ 2]  247 	ldb	#-56
   0304 E7 E2         [ 6]  248 	stb	,-s
   0306 AE 61         [ 6]  249 	ldx	1,s
   0308 C6 03         [ 2]  250 	ldb	#3
   030A BD 06 21      [ 8]  251 	jsr	_play_tune
   030D 32 61         [ 5]  252 	leas	1,s
   030F                     253 L18:
   030F F6 C8 B5      [ 5]  254 	ldb	_RandomSequenceCounter
   0312 5A            [ 2]  255 	decb
   0313 F7 C8 B5      [ 5]  256 	stb	_RandomSequenceCounter
   0316 F6 C8 B5      [ 5]  257 	ldb	_RandomSequenceCounter
   0319 5D            [ 2]  258 	tstb
   031A 10 26 FF 7C   [ 6]  259 	lbne	L19
   031E C6 1E         [ 2]  260 	ldb	#30
   0320 F7 C8 B5      [ 5]  261 	stb	_RandomSequenceCounter
   0323 6C 62         [ 7]  262 	inc	2,s
   0325                     263 L17:
   0325 F6 C8 B6      [ 5]  264 	ldb	_RandomSequenceCounterDisplay
   0328 5C            [ 2]  265 	incb
   0329 E1 62         [ 5]  266 	cmpb	2,s	;cmpqi:
   032B 22 E2         [ 3]  267 	bhi	L18
   032D 7F C8 89      [ 7]  268 	clr	_SequenceTime
   0330 32 63         [ 5]  269 	leas	3,s
   0332 39            [ 5]  270 	rts
                            271 	.globl	_level_init
   0333                     272 _level_init:
   0333 7F C8 8A      [ 7]  273 	clr	_current_level
   0336 BD 02 3A      [ 8]  274 	jsr	_RandomNumberGenerator
   0339 39            [ 5]  275 	rts
                            276 	.globl	_buttonspressedcounter
                            277 	.area	.data
   C8B7                     278 _buttonspressedcounter:
   C8B7 00                  279 	.byte	0
                            280 	.area	.text
                            281 	.globl	_Check_if_succesfull
   033A                     282 _Check_if_succesfull:
   033A 32 7E         [ 5]  283 	leas	-2,s
   033C 6F 61         [ 7]  284 	clr	1,s
   033E 16 00 5F      [ 5]  285 	lbra	L25
   0341                     286 L28:
   0341 E6 61         [ 5]  287 	ldb	1,s
   0343 4F            [ 2]  288 	clra		;zero_extendqihi: R:b -> R:d
   0344 1F 01         [ 6]  289 	tfr	d,x
   0346 E6 89 C8 8D   [ 8]  290 	ldb	_a_random,x
   034A E7 E4         [ 4]  291 	stb	,s
   034C E6 61         [ 5]  292 	ldb	1,s
   034E 4F            [ 2]  293 	clra		;zero_extendqihi: R:b -> R:d
   034F 1F 01         [ 6]  294 	tfr	d,x
   0351 E6 89 C8 A1   [ 8]  295 	ldb	_a_random_compare,x
   0355 E1 E4         [ 4]  296 	cmpb	,s	;cmpqi:(R)
   0357 27 3C         [ 3]  297 	beq	L26
   0359                     298 L27:
   0359 C6 C4         [ 2]  299 	ldb	#-60
   035B E7 E2         [ 6]  300 	stb	,-s
   035D 8E 01 EF      [ 3]  301 	ldx	#LC1
   0360 C6 64         [ 2]  302 	ldb	#100
   0362 BD 05 AA      [ 8]  303 	jsr	_print_string
   0365 32 61         [ 5]  304 	leas	1,s
   0367 E6 61         [ 5]  305 	ldb	1,s
   0369 4F            [ 2]  306 	clra		;zero_extendqihi: R:b -> R:d
   036A 1F 01         [ 6]  307 	tfr	d,x
   036C E6 89 C8 8D   [ 8]  308 	ldb	_a_random,x
   0370 34 04         [ 6]  309 	pshs	b
   0372 C6 CE         [ 2]  310 	ldb	#-50
   0374 E7 E2         [ 6]  311 	stb	,-s
   0376 C6 BA         [ 2]  312 	ldb	#-70
   0378 BD 06 99      [ 8]  313 	jsr	_print_unsigned_int
   037B 32 62         [ 5]  314 	leas	2,s
   037D E6 61         [ 5]  315 	ldb	1,s
   037F 4F            [ 2]  316 	clra		;zero_extendqihi: R:b -> R:d
   0380 1F 01         [ 6]  317 	tfr	d,x
   0382 E6 89 C8 A1   [ 8]  318 	ldb	_a_random_compare,x
   0386 34 04         [ 6]  319 	pshs	b
   0388 C6 CE         [ 2]  320 	ldb	#-50
   038A E7 E2         [ 6]  321 	stb	,-s
   038C C6 CE         [ 2]  322 	ldb	#-50
   038E BD 06 99      [ 8]  323 	jsr	_print_unsigned_int
   0391 32 62         [ 5]  324 	leas	2,s
   0393 20 C4         [ 3]  325 	bra	L27
   0395                     326 L26:
   0395 E6 61         [ 5]  327 	ldb	1,s
   0397 4F            [ 2]  328 	clra		;zero_extendqihi: R:b -> R:d
   0398 1F 01         [ 6]  329 	tfr	d,x
   039A 6F 89 C8 A1   [10]  330 	clr	_a_random_compare,x
   039E 6C 61         [ 7]  331 	inc	1,s
   03A0                     332 L25:
   03A0 F6 C8 B6      [ 5]  333 	ldb	_RandomSequenceCounterDisplay
   03A3 5C            [ 2]  334 	incb
   03A4 E1 61         [ 5]  335 	cmpb	1,s	;cmpqi:
   03A6 10 22 FF 97   [ 6]  336 	lbhi	L28
   03AA C6 01         [ 2]  337 	ldb	#1
   03AC F7 C8 89      [ 5]  338 	stb	_SequenceTime
   03AF F6 C8 B6      [ 5]  339 	ldb	_RandomSequenceCounterDisplay
   03B2 5C            [ 2]  340 	incb
   03B3 F7 C8 B6      [ 5]  341 	stb	_RandomSequenceCounterDisplay
   03B6 7F C8 B7      [ 7]  342 	clr	_buttonspressedcounter
   03B9 C6 C8         [ 2]  343 	ldb	#-56
   03BB F7 C8 8B      [ 5]  344 	stb	_counter
   03BE 32 62         [ 5]  345 	leas	2,s
   03C0 39            [ 5]  346 	rts
                            347 	.area	.bss
   C8D3                     348 _joy_x:	.blkb	1
   C8D4                     349 _joy_y:	.blkb	1
                            350 	.globl	_temppass
                            351 	.area	.data
   C8B8                     352 _temppass:
   C8B8 00                  353 	.byte	0
                            354 	.area	.text
                            355 	.globl	_move_cursor
   03C1                     356 _move_cursor:
   03C1 32 7D         [ 5]  357 	leas	-3,s
   03C3 BD F1 F8      [ 8]  358 	jsr	___Joy_Digital
   03C6 F6 C8 1B      [ 5]  359 	ldb	_Vec_Joy_1_X
   03C9 F7 C8 D3      [ 5]  360 	stb	_joy_x
   03CC F6 C8 1C      [ 5]  361 	ldb	_Vec_Joy_1_Y
   03CF F7 C8 D4      [ 5]  362 	stb	_joy_y
   03D2 F6 C8 D3      [ 5]  363 	ldb	_joy_x
   03D5 5D            [ 2]  364 	tstb
   03D6 2C 0B         [ 3]  365 	bge	L31
   03D8 F6 C8 D4      [ 5]  366 	ldb	_joy_y
   03DB 5D            [ 2]  367 	tstb
   03DC 2F 05         [ 3]  368 	ble	L31
   03DE C6 01         [ 2]  369 	ldb	#1
   03E0 F7 C8 B8      [ 5]  370 	stb	_temppass
   03E3                     371 L31:
   03E3 F6 C8 D3      [ 5]  372 	ldb	_joy_x
   03E6 5D            [ 2]  373 	tstb
   03E7 26 0B         [ 3]  374 	bne	L32
   03E9 F6 C8 D4      [ 5]  375 	ldb	_joy_y
   03EC 5D            [ 2]  376 	tstb
   03ED 2F 05         [ 3]  377 	ble	L32
   03EF C6 02         [ 2]  378 	ldb	#2
   03F1 F7 C8 B8      [ 5]  379 	stb	_temppass
   03F4                     380 L32:
   03F4 F6 C8 D3      [ 5]  381 	ldb	_joy_x
   03F7 5D            [ 2]  382 	tstb
   03F8 2F 0B         [ 3]  383 	ble	L33
   03FA F6 C8 D4      [ 5]  384 	ldb	_joy_y
   03FD 5D            [ 2]  385 	tstb
   03FE 2F 05         [ 3]  386 	ble	L33
   0400 C6 03         [ 2]  387 	ldb	#3
   0402 F7 C8 B8      [ 5]  388 	stb	_temppass
   0405                     389 L33:
   0405 F6 C8 D3      [ 5]  390 	ldb	_joy_x
   0408 5D            [ 2]  391 	tstb
   0409 2C 0B         [ 3]  392 	bge	L34
   040B F6 C8 D4      [ 5]  393 	ldb	_joy_y
   040E 5D            [ 2]  394 	tstb
   040F 26 05         [ 3]  395 	bne	L34
   0411 C6 04         [ 2]  396 	ldb	#4
   0413 F7 C8 B8      [ 5]  397 	stb	_temppass
   0416                     398 L34:
   0416 F6 C8 D3      [ 5]  399 	ldb	_joy_x
   0419 5D            [ 2]  400 	tstb
   041A 26 0B         [ 3]  401 	bne	L35
   041C F6 C8 D4      [ 5]  402 	ldb	_joy_y
   041F 5D            [ 2]  403 	tstb
   0420 26 05         [ 3]  404 	bne	L35
   0422 C6 05         [ 2]  405 	ldb	#5
   0424 F7 C8 B8      [ 5]  406 	stb	_temppass
   0427                     407 L35:
   0427 F6 C8 D3      [ 5]  408 	ldb	_joy_x
   042A 5D            [ 2]  409 	tstb
   042B 2F 0B         [ 3]  410 	ble	L36
   042D F6 C8 D4      [ 5]  411 	ldb	_joy_y
   0430 5D            [ 2]  412 	tstb
   0431 26 05         [ 3]  413 	bne	L36
   0433 C6 06         [ 2]  414 	ldb	#6
   0435 F7 C8 B8      [ 5]  415 	stb	_temppass
   0438                     416 L36:
   0438 F6 C8 D3      [ 5]  417 	ldb	_joy_x
   043B 5D            [ 2]  418 	tstb
   043C 2C 0B         [ 3]  419 	bge	L37
   043E F6 C8 D4      [ 5]  420 	ldb	_joy_y
   0441 5D            [ 2]  421 	tstb
   0442 2C 05         [ 3]  422 	bge	L37
   0444 C6 07         [ 2]  423 	ldb	#7
   0446 F7 C8 B8      [ 5]  424 	stb	_temppass
   0449                     425 L37:
   0449 F6 C8 D3      [ 5]  426 	ldb	_joy_x
   044C 5D            [ 2]  427 	tstb
   044D 26 0B         [ 3]  428 	bne	L38
   044F F6 C8 D4      [ 5]  429 	ldb	_joy_y
   0452 5D            [ 2]  430 	tstb
   0453 2C 05         [ 3]  431 	bge	L38
   0455 C6 08         [ 2]  432 	ldb	#8
   0457 F7 C8 B8      [ 5]  433 	stb	_temppass
   045A                     434 L38:
   045A F6 C8 D3      [ 5]  435 	ldb	_joy_x
   045D 5D            [ 2]  436 	tstb
   045E 2F 0B         [ 3]  437 	ble	L39
   0460 F6 C8 D4      [ 5]  438 	ldb	_joy_y
   0463 5D            [ 2]  439 	tstb
   0464 2C 05         [ 3]  440 	bge	L39
   0466 C6 09         [ 2]  441 	ldb	#9
   0468 F7 C8 B8      [ 5]  442 	stb	_temppass
   046B                     443 L39:
   046B F6 C8 B8      [ 5]  444 	ldb	_temppass
   046E BD 05 64      [ 8]  445 	jsr	_draw_cross
   0471 BD F1 BA      [ 8]  446 	jsr	___Read_Btns
   0474 F6 C8 11      [ 5]  447 	ldb	_Vec_Buttons
   0477 C4 01         [ 2]  448 	andb	#1
   0479 5D            [ 2]  449 	tstb
   047A 27 30         [ 3]  450 	beq	L41
   047C F6 C8 B7      [ 5]  451 	ldb	_buttonspressedcounter
   047F E7 E4         [ 4]  452 	stb	,s
   0481 F6 C8 B8      [ 5]  453 	ldb	_temppass
   0484 E7 61         [ 5]  454 	stb	1,s
   0486 E6 E4         [ 4]  455 	ldb	,s
   0488 4F            [ 2]  456 	clra		;zero_extendqihi: R:b -> R:d
   0489 1F 01         [ 6]  457 	tfr	d,x
   048B E6 61         [ 5]  458 	ldb	1,s
   048D E7 89 C8 A1   [ 8]  459 	stb	_a_random_compare,x
   0491 F6 C8 B7      [ 5]  460 	ldb	_buttonspressedcounter
   0494 5C            [ 2]  461 	incb
   0495 F7 C8 B7      [ 5]  462 	stb	_buttonspressedcounter
   0498 F6 C8 B6      [ 5]  463 	ldb	_RandomSequenceCounterDisplay
   049B E7 E4         [ 4]  464 	stb	,s
   049D E6 E4         [ 4]  465 	ldb	,s
   049F 5C            [ 2]  466 	incb
   04A0 E7 62         [ 5]  467 	stb	2,s
   04A2 F6 C8 B7      [ 5]  468 	ldb	_buttonspressedcounter
   04A5 E1 62         [ 5]  469 	cmpb	2,s	;cmpqi:(R)
   04A7 26 03         [ 3]  470 	bne	L41
   04A9 BD 03 3A      [ 8]  471 	jsr	_Check_if_succesfull
   04AC                     472 L41:
   04AC 32 63         [ 5]  473 	leas	3,s
   04AE 39            [ 5]  474 	rts
                            475 	.globl	_level_play
   04AF                     476 _level_play:
   04AF 32 7C         [ 5]  477 	leas	-4,s
   04B1 20 34         [ 3]  478 	bra	L43
   04B3                     479 L45:
   04B3 BD F1 AF      [ 8]  480 	jsr	___DP_to_C8
   04B6 BE C8 CF      [ 6]  481 	ldx	_current_explosion
   04B9 AF E4         [ 5]  482 	stx	,s
   04BB AE E4         [ 5]  483 	ldx	,s
   04BD BD 05 D4      [ 8]  484 	jsr	__Explosion_Snd
   04C0 BE C8 D1      [ 6]  485 	ldx	_current_music
   04C3 AF 62         [ 6]  486 	stx	2,s
   04C5 AE 62         [ 6]  487 	ldx	2,s
   04C7 BD 05 DD      [ 8]  488 	jsr	__Init_Music_chk
   04CA BD F1 92      [ 8]  489 	jsr	___Wait_Recal
   04CD BD 05 F7      [ 8]  490 	jsr	__Do_Sound
   04D0 BD F2 A5      [ 8]  491 	jsr	___Intensity_5F
   04D3 BD 01 A0      [ 8]  492 	jsr	_Generate_Gamefield
   04D6 F6 C8 89      [ 5]  493 	ldb	_SequenceTime
   04D9 5D            [ 2]  494 	tstb
   04DA 27 05         [ 3]  495 	beq	L44
   04DC BD 02 93      [ 8]  496 	jsr	_Display_RandomSequence
   04DF 20 06         [ 3]  497 	bra	L43
   04E1                     498 L44:
   04E1 BD 01 FA      [ 8]  499 	jsr	_Display_TimeLeft
   04E4 BD 03 C1      [ 8]  500 	jsr	_move_cursor
   04E7                     501 L43:
   04E7 F6 C8 8A      [ 5]  502 	ldb	_current_level
   04EA 5D            [ 2]  503 	tstb
   04EB 27 C6         [ 3]  504 	beq	L45
   04ED 32 64         [ 5]  505 	leas	4,s
   04EF 39            [ 5]  506 	rts
ASxxxx Assembler V05.50  (Motorola 6809)                                Page 1
Hexadecimal [16-Bits]                                 Tue Apr 29 05:37:36 2025

Symbol Table

    .__.$$$.       =   2710 L   |     .__.ABS.       =   0000 G
    .__.CPU.       =   0000 L   |     .__.H$L.       =   0001 L
  3 L10                0095 R   |   3 L11                00A5 R
  3 L13                00DE R   |   3 L14                00AC R
  3 L17                0191 R   |   3 L18                017B R
  3 L19                0106 R   |   3 L2                 0036 R
  3 L25                020C R   |   3 L26                0201 R
  3 L27                01C5 R   |   3 L28                01AD R
  3 L31                024F R   |   3 L32                0260 R
  3 L33                0271 R   |   3 L34                0282 R
  3 L35                0293 R   |   3 L36                02A4 R
  3 L37                02B5 R   |   3 L38                02C6 R
  3 L39                02D7 R   |   3 L4                 0047 R
  3 L41                0318 R   |   3 L43                0353 R
  3 L44                034D R   |   3 L45                031F R
  3 L8                 008F R   |   3 LC0                0050 R
  3 LC1                005B R   |   3 LC2                00E7 R
  3 LC3                00F5 R   |   3 _Check_if_succ     01A6 GR
  3 _Display_Rando     00FF GR  |   3 _Display_TimeL     0066 GR
  3 _Generate_Game     000C GR  |     _Loadingbar        **** GX
  3 _RandomNumberG     00A6 GR  |   2 _RandomSequenc     002C GR
  2 _RandomSequenc     002D GR  |   2 _SequenceTime      0000 GR
    _Vec_Buttons       **** GX  |     _Vec_Joy_1_X       **** GX
    _Vec_Joy_1_Y       **** GX  |     __Do_Sound         **** GX
    __Draw_Grid_VL     **** GX  |     __Explosion_Sn     **** GX
    __Init_Music_c     **** GX  |     __Moveto_d         **** GX
    __Random           **** GX  |     ___DP_to_C8        **** GX
    ___Intensity_5     **** GX  |     ___Joy_Digital     **** GX
    ___Read_Btns       **** GX  |     ___Reset0Ref       **** GX
    ___Wait_Recal      **** GX  |   2 _a_random          0004 GR
  2 _a_random_comp     0018 GR  |   2 _buttonspresse     002E GR
  2 _counter           0002 GR  |   2 _counterw          0003 GR
    _current_explo     **** GX  |   2 _current_level     0001 GR
    _current_music     **** GX  |   3 _decrementCoun     0048 GR
    _dp_VIA_t1_cnt     **** GX  |     _draw_cross        **** GX
  4 _joy_x             0000 R   |   4 _joy_y             0001 R
  3 _level_init        019F GR  |   3 _level_play        031B GR
  3 _move_cursor       022D GR  |   3 _nibby_vl_styl     0000 GR
    _play_tune         **** GX  |     _print_string      **** GX
    _print_unsigne     **** GX  |   2 _temppass          002F GR
    _umodhi3           **** GX

ASxxxx Assembler V05.50  (Motorola 6809)                                Page 2
Hexadecimal [16-Bits]                                 Tue Apr 29 05:37:36 2025

Area Table

[_CSEG]
   0 _CODE            size    0   flags C080
   2 .data            size   30   flags  100
   3 .text            size  35C   flags  100
   4 .bss             size    2   flags    0
[_DSEG]
   1 _DATA            size    0   flags C0C0

