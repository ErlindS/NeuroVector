                              1 ;;; gcc for m6809 : Mar 17 2019 13:25:32
                              2 ;;; 4.3.6 (gcc6809)
                              3 ;;; ABI version 1
                              4 ;;; -mabi=bx -mint8 -fomit-frame-pointer -O0
                              5 	.module	drawables.c
                              6 	.globl	_Positions_Cursor
                              7 	.area	.text
   005E                       8 _Positions_Cursor:
   005E 00                    9 	.byte	0
   005F 00                   10 	.byte	0
   0060 10                   11 	.byte	16
   0061 F0                   12 	.byte	-16
   0062 10                   13 	.byte	16
   0063 00                   14 	.byte	0
   0064 10                   15 	.byte	16
   0065 10                   16 	.byte	16
   0066 00                   17 	.byte	0
   0067 F0                   18 	.byte	-16
   0068 00                   19 	.byte	0
   0069 00                   20 	.byte	0
   006A 00                   21 	.byte	0
   006B 10                   22 	.byte	16
   006C F0                   23 	.byte	-16
   006D F0                   24 	.byte	-16
   006E F0                   25 	.byte	-16
   006F 00                   26 	.byte	0
   0070 F0                   27 	.byte	-16
   0071 10                   28 	.byte	16
                             29 	.globl	_Level_advancement
   0072                      30 _Level_advancement:
   0072 C4                   31 	.byte	-60
   0073 DD                   32 	.byte	-35
   0074 C4                   33 	.byte	-60
   0075 E7                   34 	.byte	-25
   0076 C4                   35 	.byte	-60
   0077 F1                   36 	.byte	-15
   0078 C4                   37 	.byte	-60
   0079 FB                   38 	.byte	-5
   007A C4                   39 	.byte	-60
   007B 05                   40 	.byte	5
   007C C4                   41 	.byte	-60
   007D 0F                   42 	.byte	15
   007E C4                   43 	.byte	-60
   007F 19                   44 	.byte	25
   0080 C4                   45 	.byte	-60
   0081 23                   46 	.byte	35
   0082 BA                   47 	.byte	-70
   0083 DD                   48 	.byte	-35
   0084 BA                   49 	.byte	-70
   0085 E7                   50 	.byte	-25
   0086 BA                   51 	.byte	-70
   0087 F1                   52 	.byte	-15
   0088 BA                   53 	.byte	-70
   0089 FB                   54 	.byte	-5
   008A BA                   55 	.byte	-70
   008B 05                   56 	.byte	5
   008C BA                   57 	.byte	-70
   008D 0F                   58 	.byte	15
   008E BA                   59 	.byte	-70
   008F 19                   60 	.byte	25
   0090 BA                   61 	.byte	-70
   0091 23                   62 	.byte	35
                             63 	.globl	_cross
   0092                      64 _cross:
   0092 00                   65 	.byte	0
   0093 20                   66 	.byte	32
   0094 20                   67 	.byte	32
   0095 FF                   68 	.byte	-1
   0096 E0                   69 	.byte	-32
   0097 E0                   70 	.byte	-32
   0098 00                   71 	.byte	0
   0099 20                   72 	.byte	32
   009A 00                   73 	.byte	0
   009B FF                   74 	.byte	-1
   009C E0                   75 	.byte	-32
   009D 20                   76 	.byte	32
   009E 01                   77 	.byte	1
   009F 00                   78 	.byte	0
   00A0 00                   79 	.byte	0
                             80 	.globl	_advancement_cross
   00A1                      81 _advancement_cross:
   00A1 00                   82 	.byte	0
   00A2 10                   83 	.byte	16
   00A3 20                   84 	.byte	32
   00A4 FF                   85 	.byte	-1
   00A5 E0                   86 	.byte	-32
   00A6 E0                   87 	.byte	-32
   00A7 00                   88 	.byte	0
   00A8 20                   89 	.byte	32
   00A9 00                   90 	.byte	0
   00AA FF                   91 	.byte	-1
   00AB E0                   92 	.byte	-32
   00AC 20                   93 	.byte	32
   00AD 01                   94 	.byte	1
   00AE 00                   95 	.byte	0
   00AF 00                   96 	.byte	0
                             97 	.globl	_advancement_plus
   00B0                      98 _advancement_plus:
   00B0 00                   99 	.byte	0
   00B1 20                  100 	.byte	32
   00B2 10                  101 	.byte	16
   00B3 FF                  102 	.byte	-1
   00B4 E0                  103 	.byte	-32
   00B5 00                  104 	.byte	0
   00B6 00                  105 	.byte	0
   00B7 10                  106 	.byte	16
   00B8 10                  107 	.byte	16
   00B9 FF                  108 	.byte	-1
   00BA 00                  109 	.byte	0
   00BB E0                  110 	.byte	-32
   00BC 01                  111 	.byte	1
   00BD 00                  112 	.byte	0
   00BE 00                  113 	.byte	0
                            114 	.globl	_Gamefield
   00BF                     115 _Gamefield:
   00BF 00                  116 	.byte	0
   00C0 18                  117 	.byte	24
   00C1 F8                  118 	.byte	-8
   00C2 FF                  119 	.byte	-1
   00C3 D0                  120 	.byte	-48
   00C4 00                  121 	.byte	0
   00C5 00                  122 	.byte	0
   00C6 00                  123 	.byte	0
   00C7 10                  124 	.byte	16
   00C8 FF                  125 	.byte	-1
   00C9 30                  126 	.byte	48
   00CA 00                  127 	.byte	0
   00CB 00                  128 	.byte	0
   00CC F0                  129 	.byte	-16
   00CD 10                  130 	.byte	16
   00CE FF                  131 	.byte	-1
   00CF 00                  132 	.byte	0
   00D0 D0                  133 	.byte	-48
   00D1 00                  134 	.byte	0
   00D2 F0                  135 	.byte	-16
   00D3 00                  136 	.byte	0
   00D4 FF                  137 	.byte	-1
   00D5 00                  138 	.byte	0
   00D6 30                  139 	.byte	48
   00D7 01                  140 	.byte	1
   00D8 00                  141 	.byte	0
   00D9 00                  142 	.byte	0
                            143 	.globl	_Brainright
   00DA                     144 _Brainright:
   00DA 00                  145 	.byte	0
   00DB D3                  146 	.byte	-45
   00DC 00                  147 	.byte	0
   00DD FF                  148 	.byte	-1
   00DE FB                  149 	.byte	-5
   00DF 05                  150 	.byte	5
   00E0 FF                  151 	.byte	-1
   00E1 01                  152 	.byte	1
   00E2 0F                  153 	.byte	15
   00E3 FF                  154 	.byte	-1
   00E4 0A                  155 	.byte	10
   00E5 07                  156 	.byte	7
   00E6 FF                  157 	.byte	-1
   00E7 0A                  158 	.byte	10
   00E8 05                  159 	.byte	5
   00E9 FF                  160 	.byte	-1
   00EA 2D                  161 	.byte	45
   00EB FF                  162 	.byte	-1
   00EC FF                  163 	.byte	-1
   00ED 05                  164 	.byte	5
   00EE F6                  165 	.byte	-10
   00EF FF                  166 	.byte	-1
   00F0 00                  167 	.byte	0
   00F1 F6                  168 	.byte	-10
   00F2 FF                  169 	.byte	-1
   00F3 FB                  170 	.byte	-5
   00F4 F6                  171 	.byte	-10
   00F5 01                  172 	.byte	1
   00F6 00                  173 	.byte	0
   00F7 00                  174 	.byte	0
                            175 	.globl	_Brainleft
   00F8                     176 _Brainleft:
   00F8 00                  177 	.byte	0
   00F9 D3                  178 	.byte	-45
   00FA 00                  179 	.byte	0
   00FB FF                  180 	.byte	-1
   00FC FB                  181 	.byte	-5
   00FD FB                  182 	.byte	-5
   00FE FF                  183 	.byte	-1
   00FF 01                  184 	.byte	1
   0100 F1                  185 	.byte	-15
   0101 FF                  186 	.byte	-1
   0102 0A                  187 	.byte	10
   0103 F9                  188 	.byte	-7
   0104 FF                  189 	.byte	-1
   0105 0A                  190 	.byte	10
   0106 FB                  191 	.byte	-5
   0107 FF                  192 	.byte	-1
   0108 2D                  193 	.byte	45
   0109 01                  194 	.byte	1
   010A FF                  195 	.byte	-1
   010B 05                  196 	.byte	5
   010C 0A                  197 	.byte	10
   010D FF                  198 	.byte	-1
   010E 00                  199 	.byte	0
   010F 0A                  200 	.byte	10
   0110 FF                  201 	.byte	-1
   0111 FB                  202 	.byte	-5
   0112 0A                  203 	.byte	10
   0113 01                  204 	.byte	1
   0114 00                  205 	.byte	0
   0115 00                  206 	.byte	0
                            207 	.globl	_Positions_Arrow
   0116                     208 _Positions_Arrow:
   0116 3C                  209 	.byte	60
   0117 C9                  210 	.byte	-55
   0118 28                  211 	.byte	40
   0119 C9                  212 	.byte	-55
                            213 	.globl	_arrow
   011A                     214 _arrow:
   011A 00                  215 	.byte	0
   011B 04                  216 	.byte	4
   011C 00                  217 	.byte	0
   011D FF                  218 	.byte	-1
   011E F6                  219 	.byte	-10
   011F 0A                  220 	.byte	10
   0120 FF                  221 	.byte	-1
   0121 F6                  222 	.byte	-10
   0122 F6                  223 	.byte	-10
   0123 00                  224 	.byte	0
   0124 0A                  225 	.byte	10
   0125 0A                  226 	.byte	10
   0126 FF                  227 	.byte	-1
   0127 00                  228 	.byte	0
   0128 EC                  229 	.byte	-20
   0129 01                  230 	.byte	1
   012A 00                  231 	.byte	0
   012B 00                  232 	.byte	0
                            233 	.globl	_draw_cross
   012C                     234 _draw_cross:
   012C 34 40         [ 6]  235 	pshs	u
   012E 32 7C         [ 5]  236 	leas	-4,s
   0130 E7 61         [ 5]  237 	stb	1,s
   0132 BD F3 54      [ 8]  238 	jsr	___Reset0Ref
   0135 C6 FF         [ 2]  239 	ldb	#-1
   0137 D7 04         [ 4]  240 	stb	*_dp_VIA_t1_cnt_lo
   0139 C6 EB         [ 2]  241 	ldb	#-21
   013B E7 E2         [ 6]  242 	stb	,-s
   013D C6 FA         [ 2]  243 	ldb	#-6
   013F BD 0A F8      [ 8]  244 	jsr	__Moveto_d
   0142 32 61         [ 5]  245 	leas	1,s
   0144 E6 61         [ 5]  246 	ldb	1,s
   0146 4F            [ 2]  247 	clra		;zero_extendqihi: R:b -> R:d
   0147 58            [ 2]  248 	aslb
   0148 49            [ 2]  249 	rola
   0149 CE 00 5F      [ 3]  250 	ldu	#_Positions_Cursor+1
   014C 30 CB         [ 8]  251 	leax	d,u
   014E E6 84         [ 4]  252 	ldb	,x
   0150 E7 E4         [ 4]  253 	stb	,s
   0152 E6 61         [ 5]  254 	ldb	1,s
   0154 4F            [ 2]  255 	clra		;zero_extendqihi: R:b -> R:d
   0155 58            [ 2]  256 	aslb
   0156 49            [ 2]  257 	rola
   0157 CE 00 5E      [ 3]  258 	ldu	#_Positions_Cursor
   015A 30 CB         [ 8]  259 	leax	d,u
   015C E6 84         [ 4]  260 	ldb	,x
   015E E7 63         [ 5]  261 	stb	3,s
   0160 E6 E4         [ 4]  262 	ldb	,s
   0162 E7 62         [ 5]  263 	stb	2,s
   0164 E6 63         [ 5]  264 	ldb	3,s
   0166 E7 E2         [ 6]  265 	stb	,-s
   0168 E6 63         [ 5]  266 	ldb	3,s
   016A BD 0A F8      [ 8]  267 	jsr	__Moveto_d
   016D 32 61         [ 5]  268 	leas	1,s
   016F C6 60         [ 2]  269 	ldb	#96
   0171 D7 04         [ 4]  270 	stb	*_dp_VIA_t1_cnt_lo
   0173 8E 00 92      [ 3]  271 	ldx	#_cross
   0176 BD F4 10      [ 8]  272 	jsr	___Draw_VLp
   0179 32 64         [ 5]  273 	leas	4,s
   017B 35 C0         [ 7]  274 	puls	u,pc
                            275 	.globl	_draw_round_advancement_cross
   017D                     276 _draw_round_advancement_cross:
   017D 34 40         [ 6]  277 	pshs	u
   017F 32 7C         [ 5]  278 	leas	-4,s
   0181 E7 61         [ 5]  279 	stb	1,s
   0183 BD F3 54      [ 8]  280 	jsr	___Reset0Ref
   0186 C6 FF         [ 2]  281 	ldb	#-1
   0188 D7 04         [ 4]  282 	stb	*_dp_VIA_t1_cnt_lo
   018A E6 61         [ 5]  283 	ldb	1,s
   018C 4F            [ 2]  284 	clra		;zero_extendqihi: R:b -> R:d
   018D 58            [ 2]  285 	aslb
   018E 49            [ 2]  286 	rola
   018F CE 00 73      [ 3]  287 	ldu	#_Level_advancement+1
   0192 30 CB         [ 8]  288 	leax	d,u
   0194 E6 84         [ 4]  289 	ldb	,x
   0196 E7 E4         [ 4]  290 	stb	,s
   0198 E6 61         [ 5]  291 	ldb	1,s
   019A 4F            [ 2]  292 	clra		;zero_extendqihi: R:b -> R:d
   019B 58            [ 2]  293 	aslb
   019C 49            [ 2]  294 	rola
   019D CE 00 72      [ 3]  295 	ldu	#_Level_advancement
   01A0 30 CB         [ 8]  296 	leax	d,u
   01A2 E6 84         [ 4]  297 	ldb	,x
   01A4 E7 63         [ 5]  298 	stb	3,s
   01A6 E6 E4         [ 4]  299 	ldb	,s
   01A8 E7 62         [ 5]  300 	stb	2,s
   01AA E6 63         [ 5]  301 	ldb	3,s
   01AC E7 E2         [ 6]  302 	stb	,-s
   01AE E6 63         [ 5]  303 	ldb	3,s
   01B0 BD 0A F8      [ 8]  304 	jsr	__Moveto_d
   01B3 32 61         [ 5]  305 	leas	1,s
   01B5 C6 20         [ 2]  306 	ldb	#32
   01B7 D7 04         [ 4]  307 	stb	*_dp_VIA_t1_cnt_lo
   01B9 8E 00 92      [ 3]  308 	ldx	#_cross
   01BC BD F4 10      [ 8]  309 	jsr	___Draw_VLp
   01BF 32 64         [ 5]  310 	leas	4,s
   01C1 35 C0         [ 7]  311 	puls	u,pc
                            312 	.globl	_draw_round_advancement_cross_plus
   01C3                     313 _draw_round_advancement_cross_plus:
   01C3 34 40         [ 6]  314 	pshs	u
   01C5 32 7C         [ 5]  315 	leas	-4,s
   01C7 E7 61         [ 5]  316 	stb	1,s
   01C9 BD F3 54      [ 8]  317 	jsr	___Reset0Ref
   01CC C6 FF         [ 2]  318 	ldb	#-1
   01CE D7 04         [ 4]  319 	stb	*_dp_VIA_t1_cnt_lo
   01D0 E6 61         [ 5]  320 	ldb	1,s
   01D2 4F            [ 2]  321 	clra		;zero_extendqihi: R:b -> R:d
   01D3 58            [ 2]  322 	aslb
   01D4 49            [ 2]  323 	rola
   01D5 CE 00 73      [ 3]  324 	ldu	#_Level_advancement+1
   01D8 30 CB         [ 8]  325 	leax	d,u
   01DA E6 84         [ 4]  326 	ldb	,x
   01DC E7 E4         [ 4]  327 	stb	,s
   01DE E6 61         [ 5]  328 	ldb	1,s
   01E0 4F            [ 2]  329 	clra		;zero_extendqihi: R:b -> R:d
   01E1 58            [ 2]  330 	aslb
   01E2 49            [ 2]  331 	rola
   01E3 CE 00 72      [ 3]  332 	ldu	#_Level_advancement
   01E6 30 CB         [ 8]  333 	leax	d,u
   01E8 E6 84         [ 4]  334 	ldb	,x
   01EA E7 63         [ 5]  335 	stb	3,s
   01EC E6 E4         [ 4]  336 	ldb	,s
   01EE E7 62         [ 5]  337 	stb	2,s
   01F0 E6 63         [ 5]  338 	ldb	3,s
   01F2 E7 E2         [ 6]  339 	stb	,-s
   01F4 E6 63         [ 5]  340 	ldb	3,s
   01F6 BD 0A F8      [ 8]  341 	jsr	__Moveto_d
   01F9 32 61         [ 5]  342 	leas	1,s
   01FB C6 20         [ 2]  343 	ldb	#32
   01FD D7 04         [ 4]  344 	stb	*_dp_VIA_t1_cnt_lo
   01FF 8E 00 B0      [ 3]  345 	ldx	#_advancement_plus
   0202 BD F4 10      [ 8]  346 	jsr	___Draw_VLp
   0205 32 64         [ 5]  347 	leas	4,s
   0207 35 C0         [ 7]  348 	puls	u,pc
                            349 	.globl	_Display_Gamefield
   0209                     350 _Display_Gamefield:
   0209 BD F3 54      [ 8]  351 	jsr	___Reset0Ref
   020C C6 FF         [ 2]  352 	ldb	#-1
   020E D7 04         [ 4]  353 	stb	*_dp_VIA_t1_cnt_lo
   0210 C6 F1         [ 2]  354 	ldb	#-15
   0212 E7 E2         [ 6]  355 	stb	,-s
   0214 5F            [ 2]  356 	clrb
   0215 BD 0A F8      [ 8]  357 	jsr	__Moveto_d
   0218 32 61         [ 5]  358 	leas	1,s
   021A 8E 00 BF      [ 3]  359 	ldx	#_Gamefield
   021D BD F4 10      [ 8]  360 	jsr	___Draw_VLp
   0220 BD F3 54      [ 8]  361 	jsr	___Reset0Ref
   0223 6F E2         [ 8]  362 	clr	,-s
   0225 5F            [ 2]  363 	clrb
   0226 BD 0A F8      [ 8]  364 	jsr	__Moveto_d
   0229 32 61         [ 5]  365 	leas	1,s
   022B 8E 00 DA      [ 3]  366 	ldx	#_Brainright
   022E BD F4 10      [ 8]  367 	jsr	___Draw_VLp
   0231 BD F3 54      [ 8]  368 	jsr	___Reset0Ref
   0234 6F E2         [ 8]  369 	clr	,-s
   0236 5F            [ 2]  370 	clrb
   0237 BD 0A F8      [ 8]  371 	jsr	__Moveto_d
   023A 32 61         [ 5]  372 	leas	1,s
   023C 8E 00 F8      [ 3]  373 	ldx	#_Brainleft
   023F BD F4 10      [ 8]  374 	jsr	___Draw_VLp
   0242 39            [ 5]  375 	rts
                            376 	.globl	_Loadingbar
   0243                     377 _Loadingbar:
   0243 32 7F         [ 5]  378 	leas	-1,s
   0245 E7 E4         [ 4]  379 	stb	,s
   0247 BD F3 54      [ 8]  380 	jsr	___Reset0Ref
   024A C6 7F         [ 2]  381 	ldb	#127
   024C D7 04         [ 4]  382 	stb	*_dp_VIA_t1_cnt_lo
   024E C6 46         [ 2]  383 	ldb	#70
   0250 E7 E2         [ 6]  384 	stb	,-s
   0252 C6 C4         [ 2]  385 	ldb	#-60
   0254 BD 0A F8      [ 8]  386 	jsr	__Moveto_d
   0257 32 61         [ 5]  387 	leas	1,s
   0259 E6 E4         [ 4]  388 	ldb	,s
   025B D7 04         [ 4]  389 	stb	*_dp_VIA_t1_cnt_lo
   025D 6F E2         [ 8]  390 	clr	,-s
   025F C6 50         [ 2]  391 	ldb	#80
   0261 BD 0A EE      [ 8]  392 	jsr	__Draw_Line_d
   0264 32 61         [ 5]  393 	leas	1,s
   0266 BD F3 54      [ 8]  394 	jsr	___Reset0Ref
   0269 C6 7F         [ 2]  395 	ldb	#127
   026B D7 04         [ 4]  396 	stb	*_dp_VIA_t1_cnt_lo
   026D C6 42         [ 2]  397 	ldb	#66
   026F E7 E2         [ 6]  398 	stb	,-s
   0271 C6 C4         [ 2]  399 	ldb	#-60
   0273 BD 0A F8      [ 8]  400 	jsr	__Moveto_d
   0276 32 61         [ 5]  401 	leas	1,s
   0278 E6 E4         [ 4]  402 	ldb	,s
   027A D7 04         [ 4]  403 	stb	*_dp_VIA_t1_cnt_lo
   027C 6F E2         [ 8]  404 	clr	,-s
   027E C6 50         [ 2]  405 	ldb	#80
   0280 BD 0A EE      [ 8]  406 	jsr	__Draw_Line_d
   0283 32 61         [ 5]  407 	leas	1,s
   0285 BD F3 54      [ 8]  408 	jsr	___Reset0Ref
   0288 C6 7F         [ 2]  409 	ldb	#127
   028A D7 04         [ 4]  410 	stb	*_dp_VIA_t1_cnt_lo
   028C C6 3E         [ 2]  411 	ldb	#62
   028E E7 E2         [ 6]  412 	stb	,-s
   0290 C6 C4         [ 2]  413 	ldb	#-60
   0292 BD 0A F8      [ 8]  414 	jsr	__Moveto_d
   0295 32 61         [ 5]  415 	leas	1,s
   0297 E6 E4         [ 4]  416 	ldb	,s
   0299 D7 04         [ 4]  417 	stb	*_dp_VIA_t1_cnt_lo
   029B 6F E2         [ 8]  418 	clr	,-s
   029D C6 50         [ 2]  419 	ldb	#80
   029F BD 0A EE      [ 8]  420 	jsr	__Draw_Line_d
   02A2 32 61         [ 5]  421 	leas	1,s
   02A4 C6 FF         [ 2]  422 	ldb	#-1
   02A6 D7 04         [ 4]  423 	stb	*_dp_VIA_t1_cnt_lo
   02A8 32 61         [ 5]  424 	leas	1,s
   02AA 39            [ 5]  425 	rts
                            426 	.globl	_draw_menu_arrow
   02AB                     427 _draw_menu_arrow:
   02AB 34 40         [ 6]  428 	pshs	u
   02AD 32 7C         [ 5]  429 	leas	-4,s
   02AF E7 61         [ 5]  430 	stb	1,s
   02B1 BD F3 54      [ 8]  431 	jsr	___Reset0Ref
   02B4 C6 7F         [ 2]  432 	ldb	#127
   02B6 D7 04         [ 4]  433 	stb	*_dp_VIA_t1_cnt_lo
   02B8 E6 61         [ 5]  434 	ldb	1,s
   02BA 1D            [ 2]  435 	sex		;extendqihi2: R:b -> R:d
   02BB 58            [ 2]  436 	aslb
   02BC 49            [ 2]  437 	rola
   02BD CE 01 17      [ 3]  438 	ldu	#_Positions_Arrow+1
   02C0 30 CB         [ 8]  439 	leax	d,u
   02C2 E6 84         [ 4]  440 	ldb	,x
   02C4 E7 E4         [ 4]  441 	stb	,s
   02C6 E6 61         [ 5]  442 	ldb	1,s
   02C8 1D            [ 2]  443 	sex		;extendqihi2: R:b -> R:d
   02C9 58            [ 2]  444 	aslb
   02CA 49            [ 2]  445 	rola
   02CB CE 01 16      [ 3]  446 	ldu	#_Positions_Arrow
   02CE 30 CB         [ 8]  447 	leax	d,u
   02D0 E6 84         [ 4]  448 	ldb	,x
   02D2 E7 63         [ 5]  449 	stb	3,s
   02D4 E6 E4         [ 4]  450 	ldb	,s
   02D6 E7 62         [ 5]  451 	stb	2,s
   02D8 E6 63         [ 5]  452 	ldb	3,s
   02DA E7 E2         [ 6]  453 	stb	,-s
   02DC E6 63         [ 5]  454 	ldb	3,s
   02DE BD 0A F8      [ 8]  455 	jsr	__Moveto_d
   02E1 32 61         [ 5]  456 	leas	1,s
   02E3 C6 60         [ 2]  457 	ldb	#96
   02E5 D7 04         [ 4]  458 	stb	*_dp_VIA_t1_cnt_lo
   02E7 8E 01 1A      [ 3]  459 	ldx	#_arrow
   02EA BD F4 10      [ 8]  460 	jsr	___Draw_VLp
   02ED 32 64         [ 5]  461 	leas	4,s
   02EF 35 C0         [ 7]  462 	puls	u,pc
ASxxxx Assembler V05.50  (Motorola 6809)                                Page 1
Hexadecimal [16-Bits]                                 Tue May 13 06:51:06 2025

Symbol Table

    .__.$$$.       =   2710 L   |     .__.ABS.       =   0000 G
    .__.CPU.       =   0000 L   |     .__.H$L.       =   0001 L
  2 _Brainleft         009A GR  |   2 _Brainright        007C GR
  2 _Display_Gamef     01AB GR  |   2 _Gamefield         0061 GR
  2 _Level_advance     0014 GR  |   2 _Loadingbar        01E5 GR
  2 _Positions_Arr     00B8 GR  |   2 _Positions_Cur     0000 GR
    __Draw_Line_d      **** GX  |     __Moveto_d         **** GX
    ___Draw_VLp        **** GX  |     ___Reset0Ref       **** GX
  2 _advancement_c     0043 GR  |   2 _advancement_p     0052 GR
  2 _arrow             00BC GR  |   2 _cross             0034 GR
    _dp_VIA_t1_cnt     **** GX  |   2 _draw_cross        00CE GR
  2 _draw_menu_arr     024D GR  |   2 _draw_round_ad     011F GR
  2 _draw_round_ad     0165 GR

ASxxxx Assembler V05.50  (Motorola 6809)                                Page 2
Hexadecimal [16-Bits]                                 Tue May 13 06:51:06 2025

Area Table

[_CSEG]
   0 _CODE            size    0   flags C080
   2 .text            size  293   flags  100
[_DSEG]
   1 _DATA            size    0   flags C0C0

