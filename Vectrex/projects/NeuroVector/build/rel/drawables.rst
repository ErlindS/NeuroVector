                              1 ;;; gcc for m6809 : Mar 17 2019 13:25:32
                              2 ;;; 4.3.6 (gcc6809)
                              3 ;;; ABI version 1
                              4 ;;; -mabi=bx -mint8 -fomit-frame-pointer -O0
                              5 	.module	drawables.c
                              6 	.globl	_Level_advancement
                              7 	.area	.text
   005E                       8 _Level_advancement:
   005E C4                    9 	.byte	-60
   005F DD                   10 	.byte	-35
   0060 C4                   11 	.byte	-60
   0061 E7                   12 	.byte	-25
   0062 C4                   13 	.byte	-60
   0063 F1                   14 	.byte	-15
   0064 C4                   15 	.byte	-60
   0065 FB                   16 	.byte	-5
   0066 C4                   17 	.byte	-60
   0067 05                   18 	.byte	5
   0068 C4                   19 	.byte	-60
   0069 0F                   20 	.byte	15
   006A C4                   21 	.byte	-60
   006B 19                   22 	.byte	25
   006C C4                   23 	.byte	-60
   006D 23                   24 	.byte	35
   006E BA                   25 	.byte	-70
   006F DD                   26 	.byte	-35
   0070 BA                   27 	.byte	-70
   0071 E7                   28 	.byte	-25
   0072 BA                   29 	.byte	-70
   0073 F1                   30 	.byte	-15
   0074 BA                   31 	.byte	-70
   0075 FB                   32 	.byte	-5
   0076 BA                   33 	.byte	-70
   0077 05                   34 	.byte	5
   0078 BA                   35 	.byte	-70
   0079 0F                   36 	.byte	15
   007A BA                   37 	.byte	-70
   007B 19                   38 	.byte	25
   007C BA                   39 	.byte	-70
   007D 23                   40 	.byte	35
                             41 	.globl	_cross
   007E                      42 _cross:
   007E 00                   43 	.byte	0
   007F 20                   44 	.byte	32
   0080 20                   45 	.byte	32
   0081 FF                   46 	.byte	-1
   0082 E0                   47 	.byte	-32
   0083 E0                   48 	.byte	-32
   0084 00                   49 	.byte	0
   0085 20                   50 	.byte	32
   0086 00                   51 	.byte	0
   0087 FF                   52 	.byte	-1
   0088 E0                   53 	.byte	-32
   0089 20                   54 	.byte	32
   008A 01                   55 	.byte	1
   008B 00                   56 	.byte	0
   008C 00                   57 	.byte	0
                             58 	.globl	_square
   008D                      59 _square:
   008D 00                   60 	.byte	0
   008E 3C                   61 	.byte	60
   008F C4                   62 	.byte	-60
   0090 FF                   63 	.byte	-1
   0091 00                   64 	.byte	0
   0092 78                   65 	.byte	120
   0093 FF                   66 	.byte	-1
   0094 88                   67 	.byte	-120
   0095 00                   68 	.byte	0
   0096 FF                   69 	.byte	-1
   0097 00                   70 	.byte	0
   0098 88                   71 	.byte	-120
   0099 FF                   72 	.byte	-1
   009A 78                   73 	.byte	120
   009B 00                   74 	.byte	0
   009C 01                   75 	.byte	1
   009D 00                   76 	.byte	0
   009E 00                   77 	.byte	0
                             78 	.globl	_square_filled
   009F                      79 _square_filled:
   009F 00                   80 	.byte	0
   00A0 3C                   81 	.byte	60
   00A1 C4                   82 	.byte	-60
   00A2 FF                   83 	.byte	-1
   00A3 00                   84 	.byte	0
   00A4 78                   85 	.byte	120
   00A5 FF                   86 	.byte	-1
   00A6 88                   87 	.byte	-120
   00A7 00                   88 	.byte	0
   00A8 FF                   89 	.byte	-1
   00A9 00                   90 	.byte	0
   00AA 88                   91 	.byte	-120
   00AB FF                   92 	.byte	-1
   00AC 78                   93 	.byte	120
   00AD 00                   94 	.byte	0
   00AE FF                   95 	.byte	-1
   00AF 88                   96 	.byte	-120
   00B0 78                   97 	.byte	120
   00B1 00                   98 	.byte	0
   00B2 78                   99 	.byte	120
   00B3 00                  100 	.byte	0
   00B4 FF                  101 	.byte	-1
   00B5 88                  102 	.byte	-120
   00B6 88                  103 	.byte	-120
   00B7 01                  104 	.byte	1
   00B8 00                  105 	.byte	0
   00B9 00                  106 	.byte	0
                            107 	.globl	_advancement_cross
   00BA                     108 _advancement_cross:
   00BA 00                  109 	.byte	0
   00BB 10                  110 	.byte	16
   00BC 20                  111 	.byte	32
   00BD FF                  112 	.byte	-1
   00BE E0                  113 	.byte	-32
   00BF E0                  114 	.byte	-32
   00C0 00                  115 	.byte	0
   00C1 20                  116 	.byte	32
   00C2 00                  117 	.byte	0
   00C3 FF                  118 	.byte	-1
   00C4 E0                  119 	.byte	-32
   00C5 20                  120 	.byte	32
   00C6 01                  121 	.byte	1
   00C7 00                  122 	.byte	0
   00C8 00                  123 	.byte	0
                            124 	.globl	_advancement_plus
   00C9                     125 _advancement_plus:
   00C9 00                  126 	.byte	0
   00CA 20                  127 	.byte	32
   00CB 10                  128 	.byte	16
   00CC FF                  129 	.byte	-1
   00CD E0                  130 	.byte	-32
   00CE 00                  131 	.byte	0
   00CF 00                  132 	.byte	0
   00D0 10                  133 	.byte	16
   00D1 10                  134 	.byte	16
   00D2 FF                  135 	.byte	-1
   00D3 00                  136 	.byte	0
   00D4 E0                  137 	.byte	-32
   00D5 01                  138 	.byte	1
   00D6 00                  139 	.byte	0
   00D7 00                  140 	.byte	0
                            141 	.globl	_Gamefield
   00D8                     142 _Gamefield:
   00D8 FF                  143 	.byte	-1
   00D9 88                  144 	.byte	-120
   00DA 00                  145 	.byte	0
   00DB FF                  146 	.byte	-1
   00DC 00                  147 	.byte	0
   00DD 78                  148 	.byte	120
   00DE FF                  149 	.byte	-1
   00DF 78                  150 	.byte	120
   00E0 00                  151 	.byte	0
   00E1 FF                  152 	.byte	-1
   00E2 00                  153 	.byte	0
   00E3 88                  154 	.byte	-120
   00E4 01                  155 	.byte	1
   00E5 00                  156 	.byte	0
   00E6 00                  157 	.byte	0
                            158 	.globl	_Lifelinestruct
   00E7                     159 _Lifelinestruct:
   00E7 FF                  160 	.byte	-1
   00E8 00                  161 	.byte	0
   00E9 1E                  162 	.byte	30
   00EA FF                  163 	.byte	-1
   00EB 0F                  164 	.byte	15
   00EC 0A                  165 	.byte	10
   00ED FF                  166 	.byte	-1
   00EE F1                  167 	.byte	-15
   00EF 0A                  168 	.byte	10
   00F0 FF                  169 	.byte	-1
   00F1 00                  170 	.byte	0
   00F2 0F                  171 	.byte	15
   00F3 FF                  172 	.byte	-1
   00F4 F1                  173 	.byte	-15
   00F5 0A                  174 	.byte	10
   00F6 FF                  175 	.byte	-1
   00F7 2D                  176 	.byte	45
   00F8 0F                  177 	.byte	15
   00F9 FF                  178 	.byte	-1
   00FA C9                  179 	.byte	-55
   00FB 0F                  180 	.byte	15
   00FC FF                  181 	.byte	-1
   00FD 19                  182 	.byte	25
   00FE 0F                  183 	.byte	15
   00FF FF                  184 	.byte	-1
   0100 00                  185 	.byte	0
   0101 0F                  186 	.byte	15
   0102 01                  187 	.byte	1
   0103 00                  188 	.byte	0
   0104 00                  189 	.byte	0
                            190 	.globl	_Brainright
   0105                     191 _Brainright:
   0105 00                  192 	.byte	0
   0106 88                  193 	.byte	-120
   0107 78                  194 	.byte	120
   0108 00                  195 	.byte	0
   0109 88                  196 	.byte	-120
   010A 00                  197 	.byte	0
   010B 00                  198 	.byte	0
   010C 88                  199 	.byte	-120
   010D 00                  200 	.byte	0
   010E 00                  201 	.byte	0
   010F 88                  202 	.byte	-120
   0110 00                  203 	.byte	0
   0111 00                  204 	.byte	0
   0112 EC                  205 	.byte	-20
   0113 9C                  206 	.byte	-100
   0114 00                  207 	.byte	0
   0115 EC                  208 	.byte	-20
   0116 9C                  209 	.byte	-100
   0117 00                  210 	.byte	0
   0118 EC                  211 	.byte	-20
   0119 BA                  212 	.byte	-70
   011A FF                  213 	.byte	-1
   011B 00                  214 	.byte	0
   011C 64                  215 	.byte	100
   011D FF                  216 	.byte	-1
   011E 00                  217 	.byte	0
   011F 64                  218 	.byte	100
   0120 FF                  219 	.byte	-1
   0121 00                  220 	.byte	0
   0122 5A                  221 	.byte	90
   0123 00                  222 	.byte	0
   0124 3C                  223 	.byte	60
   0125 E2                  224 	.byte	-30
   0126 FF                  225 	.byte	-1
   0127 9C                  226 	.byte	-100
   0128 32                  227 	.byte	50
   0129 FF                  228 	.byte	-1
   012A 00                  229 	.byte	0
   012B 3C                  230 	.byte	60
   012C FF                  231 	.byte	-1
   012D 00                  232 	.byte	0
   012E 4B                  233 	.byte	75
   012F FF                  234 	.byte	-1
   0130 32                  235 	.byte	50
   0131 4B                  236 	.byte	75
   0132 FF                  237 	.byte	-1
   0133 32                  238 	.byte	50
   0134 4B                  239 	.byte	75
   0135 FF                  240 	.byte	-1
   0136 32                  241 	.byte	50
   0137 00                  242 	.byte	0
   0138 FF                  243 	.byte	-1
   0139 1E                  244 	.byte	30
   013A 3C                  245 	.byte	60
   013B FF                  246 	.byte	-1
   013C 50                  247 	.byte	80
   013D 28                  248 	.byte	40
   013E FF                  249 	.byte	-1
   013F 3C                  250 	.byte	60
   0140 00                  251 	.byte	0
   0141 FF                  252 	.byte	-1
   0142 14                  253 	.byte	20
   0143 EC                  254 	.byte	-20
   0144 FF                  255 	.byte	-1
   0145 0F                  256 	.byte	15
   0146 E2                  257 	.byte	-30
   0147 FF                  258 	.byte	-1
   0148 EC                  259 	.byte	-20
   0149 CE                  260 	.byte	-50
   014A 00                  261 	.byte	0
   014B 14                  262 	.byte	20
   014C 32                  263 	.byte	50
   014D FF                  264 	.byte	-1
   014E 1E                  265 	.byte	30
   014F 1E                  266 	.byte	30
   0150 FF                  267 	.byte	-1
   0151 46                  268 	.byte	70
   0152 00                  269 	.byte	0
   0153 FF                  270 	.byte	-1
   0154 1E                  271 	.byte	30
   0155 F6                  272 	.byte	-10
   0156 FF                  273 	.byte	-1
   0157 D8                  274 	.byte	-40
   0158 BA                  275 	.byte	-70
   0159 00                  276 	.byte	0
   015A 28                  277 	.byte	40
   015B 46                  278 	.byte	70
   015C FF                  279 	.byte	-1
   015D 46                  280 	.byte	70
   015E 00                  281 	.byte	0
   015F FF                  282 	.byte	-1
   0160 32                  283 	.byte	50
   0161 E7                  284 	.byte	-25
   0162 FF                  285 	.byte	-1
   0163 00                  286 	.byte	0
   0164 C4                  287 	.byte	-60
   0165 FF                  288 	.byte	-1
   0166 CE                  289 	.byte	-50
   0167 E7                  290 	.byte	-25
   0168 FF                  291 	.byte	-1
   0169 E7                  292 	.byte	-25
   016A CE                  293 	.byte	-50
   016B 00                  294 	.byte	0
   016C 4B                  295 	.byte	75
   016D 4B                  296 	.byte	75
   016E FF                  297 	.byte	-1
   016F 3C                  298 	.byte	60
   0170 E2                  299 	.byte	-30
   0171 FF                  300 	.byte	-1
   0172 3C                  301 	.byte	60
   0173 E2                  302 	.byte	-30
   0174 FF                  303 	.byte	-1
   0175 3C                  304 	.byte	60
   0176 CE                  305 	.byte	-50
   0177 FF                  306 	.byte	-1
   0178 00                  307 	.byte	0
   0179 CE                  308 	.byte	-50
   017A FF                  309 	.byte	-1
   017B 28                  310 	.byte	40
   017C CE                  311 	.byte	-50
   017D FF                  312 	.byte	-1
   017E 1E                  313 	.byte	30
   017F 9C                  314 	.byte	-100
   0180 FF                  315 	.byte	-1
   0181 E2                  316 	.byte	-30
   0182 C4                  317 	.byte	-60
   0183 FF                  318 	.byte	-1
   0184 E2                  319 	.byte	-30
   0185 BF                  320 	.byte	-65
   0186 01                  321 	.byte	1
   0187 00                  322 	.byte	0
   0188 00                  323 	.byte	0
                            324 	.globl	_Brainleft
   0189                     325 _Brainleft:
   0189 00                  326 	.byte	0
   018A 88                  327 	.byte	-120
   018B 88                  328 	.byte	-120
   018C 00                  329 	.byte	0
   018D 88                  330 	.byte	-120
   018E 00                  331 	.byte	0
   018F 00                  332 	.byte	0
   0190 88                  333 	.byte	-120
   0191 00                  334 	.byte	0
   0192 00                  335 	.byte	0
   0193 88                  336 	.byte	-120
   0194 00                  337 	.byte	0
   0195 FF                  338 	.byte	-1
   0196 9C                  339 	.byte	-100
   0197 CE                  340 	.byte	-50
   0198 FF                  341 	.byte	-1
   0199 00                  342 	.byte	0
   019A C4                  343 	.byte	-60
   019B FF                  344 	.byte	-1
   019C 00                  345 	.byte	0
   019D B5                  346 	.byte	-75
   019E FF                  347 	.byte	-1
   019F 32                  348 	.byte	50
   01A0 B5                  349 	.byte	-75
   01A1 FF                  350 	.byte	-1
   01A2 32                  351 	.byte	50
   01A3 B5                  352 	.byte	-75
   01A4 FF                  353 	.byte	-1
   01A5 32                  354 	.byte	50
   01A6 00                  355 	.byte	0
   01A7 FF                  356 	.byte	-1
   01A8 1E                  357 	.byte	30
   01A9 C4                  358 	.byte	-60
   01AA FF                  359 	.byte	-1
   01AB 50                  360 	.byte	80
   01AC D8                  361 	.byte	-40
   01AD FF                  362 	.byte	-1
   01AE 3C                  363 	.byte	60
   01AF 00                  364 	.byte	0
   01B0 FF                  365 	.byte	-1
   01B1 14                  366 	.byte	20
   01B2 14                  367 	.byte	20
   01B3 FF                  368 	.byte	-1
   01B4 0F                  369 	.byte	15
   01B5 1E                  370 	.byte	30
   01B6 FF                  371 	.byte	-1
   01B7 EC                  372 	.byte	-20
   01B8 32                  373 	.byte	50
   01B9 00                  374 	.byte	0
   01BA 14                  375 	.byte	20
   01BB CE                  376 	.byte	-50
   01BC FF                  377 	.byte	-1
   01BD 1E                  378 	.byte	30
   01BE E2                  379 	.byte	-30
   01BF FF                  380 	.byte	-1
   01C0 46                  381 	.byte	70
   01C1 00                  382 	.byte	0
   01C2 FF                  383 	.byte	-1
   01C3 1E                  384 	.byte	30
   01C4 0A                  385 	.byte	10
   01C5 FF                  386 	.byte	-1
   01C6 D8                  387 	.byte	-40
   01C7 46                  388 	.byte	70
   01C8 00                  389 	.byte	0
   01C9 28                  390 	.byte	40
   01CA BA                  391 	.byte	-70
   01CB FF                  392 	.byte	-1
   01CC 46                  393 	.byte	70
   01CD 00                  394 	.byte	0
   01CE FF                  395 	.byte	-1
   01CF 32                  396 	.byte	50
   01D0 19                  397 	.byte	25
   01D1 FF                  398 	.byte	-1
   01D2 00                  399 	.byte	0
   01D3 3C                  400 	.byte	60
   01D4 FF                  401 	.byte	-1
   01D5 CE                  402 	.byte	-50
   01D6 19                  403 	.byte	25
   01D7 FF                  404 	.byte	-1
   01D8 E7                  405 	.byte	-25
   01D9 32                  406 	.byte	50
   01DA 00                  407 	.byte	0
   01DB 4B                  408 	.byte	75
   01DC B5                  409 	.byte	-75
   01DD FF                  410 	.byte	-1
   01DE 3C                  411 	.byte	60
   01DF 1E                  412 	.byte	30
   01E0 FF                  413 	.byte	-1
   01E1 3C                  414 	.byte	60
   01E2 1E                  415 	.byte	30
   01E3 FF                  416 	.byte	-1
   01E4 3C                  417 	.byte	60
   01E5 32                  418 	.byte	50
   01E6 FF                  419 	.byte	-1
   01E7 00                  420 	.byte	0
   01E8 32                  421 	.byte	50
   01E9 FF                  422 	.byte	-1
   01EA 28                  423 	.byte	40
   01EB 32                  424 	.byte	50
   01EC FF                  425 	.byte	-1
   01ED 1E                  426 	.byte	30
   01EE 64                  427 	.byte	100
   01EF FF                  428 	.byte	-1
   01F0 E2                  429 	.byte	-30
   01F1 3C                  430 	.byte	60
   01F2 FF                  431 	.byte	-1
   01F3 E2                  432 	.byte	-30
   01F4 41                  433 	.byte	65
   01F5 01                  434 	.byte	1
   01F6 00                  435 	.byte	0
   01F7 00                  436 	.byte	0
                            437 	.globl	_Positions_Arrow
   01F8                     438 _Positions_Arrow:
   01F8 3C                  439 	.byte	60
   01F9 C9                  440 	.byte	-55
   01FA 28                  441 	.byte	40
   01FB C9                  442 	.byte	-55
   01FC 14                  443 	.byte	20
   01FD C9                  444 	.byte	-55
                            445 	.globl	_arrow
   01FE                     446 _arrow:
   01FE 00                  447 	.byte	0
   01FF 04                  448 	.byte	4
   0200 00                  449 	.byte	0
   0201 FF                  450 	.byte	-1
   0202 F6                  451 	.byte	-10
   0203 0A                  452 	.byte	10
   0204 FF                  453 	.byte	-1
   0205 F6                  454 	.byte	-10
   0206 F6                  455 	.byte	-10
   0207 00                  456 	.byte	0
   0208 0A                  457 	.byte	10
   0209 0A                  458 	.byte	10
   020A FF                  459 	.byte	-1
   020B 00                  460 	.byte	0
   020C EC                  461 	.byte	-20
   020D 01                  462 	.byte	1
   020E 00                  463 	.byte	0
   020F 00                  464 	.byte	0
                            465 	.globl	_draw_square
   0210                     466 _draw_square:
   0210 34 40         [ 6]  467 	pshs	u
   0212 32 78         [ 5]  468 	leas	-8,s
   0214 E7 65         [ 5]  469 	stb	5,s
   0216 BD F3 54      [ 8]  470 	jsr	___Reset0Ref
   0219 C6 FF         [ 2]  471 	ldb	#-1
   021B D7 04         [ 4]  472 	stb	*_dp_VIA_t1_cnt_lo
   021D C6 F9         [ 2]  473 	ldb	#-7
   021F E7 E2         [ 6]  474 	stb	,-s
   0221 5F            [ 2]  475 	clrb
   0222 BD 1D 04      [ 8]  476 	jsr	__Moveto_d
   0225 32 61         [ 5]  477 	leas	1,s
   0227 E6 65         [ 5]  478 	ldb	5,s
   0229 4F            [ 2]  479 	clra		;zero_extendqihi: R:b -> R:d
   022A ED 62         [ 6]  480 	std	2,s
   022C EC 62         [ 6]  481 	ldd	2,s
   022E 58            [ 2]  482 	aslb
   022F 49            [ 2]  483 	rola
   0230 ED 62         [ 6]  484 	std	2,s
   0232 EC 62         [ 6]  485 	ldd	2,s
   0234 58            [ 2]  486 	aslb
   0235 49            [ 2]  487 	rola
   0236 58            [ 2]  488 	aslb
   0237 49            [ 2]  489 	rola
   0238 AE 62         [ 6]  490 	ldx	2,s
   023A 30 8B         [ 8]  491 	leax	d,x
   023C AF 62         [ 6]  492 	stx	2,s
   023E EE 62         [ 6]  493 	ldu	2,s
   0240 30 C9 C8 90   [ 8]  494 	leax	_Displayed_Squares+1,u
   0244 E6 84         [ 4]  495 	ldb	,x
   0246 E7 64         [ 5]  496 	stb	4,s
   0248 E6 65         [ 5]  497 	ldb	5,s
   024A 4F            [ 2]  498 	clra		;zero_extendqihi: R:b -> R:d
   024B ED E4         [ 5]  499 	std	,s
   024D EC E4         [ 5]  500 	ldd	,s
   024F 58            [ 2]  501 	aslb
   0250 49            [ 2]  502 	rola
   0251 ED E4         [ 5]  503 	std	,s
   0253 EC E4         [ 5]  504 	ldd	,s
   0255 58            [ 2]  505 	aslb
   0256 49            [ 2]  506 	rola
   0257 58            [ 2]  507 	aslb
   0258 49            [ 2]  508 	rola
   0259 AE E4         [ 5]  509 	ldx	,s
   025B 30 8B         [ 8]  510 	leax	d,x
   025D AF E4         [ 5]  511 	stx	,s
   025F EE E4         [ 5]  512 	ldu	,s
   0261 30 C9 C8 8F   [ 8]  513 	leax	_Displayed_Squares,u
   0265 E6 84         [ 4]  514 	ldb	,x
   0267 E7 67         [ 5]  515 	stb	7,s
   0269 E6 64         [ 5]  516 	ldb	4,s
   026B E7 66         [ 5]  517 	stb	6,s
   026D E6 67         [ 5]  518 	ldb	7,s
   026F E7 E2         [ 6]  519 	stb	,-s
   0271 E6 67         [ 5]  520 	ldb	7,s
   0273 BD 1D 04      [ 8]  521 	jsr	__Moveto_d
   0276 32 61         [ 5]  522 	leas	1,s
   0278 C6 10         [ 2]  523 	ldb	#16
   027A D7 04         [ 4]  524 	stb	*_dp_VIA_t1_cnt_lo
   027C 8E 00 8D      [ 3]  525 	ldx	#_square
   027F BD F4 10      [ 8]  526 	jsr	___Draw_VLp
   0282 32 68         [ 5]  527 	leas	8,s
   0284 35 C0         [ 7]  528 	puls	u,pc
                            529 	.globl	_draw_square_filled
   0286                     530 _draw_square_filled:
   0286 34 40         [ 6]  531 	pshs	u
   0288 32 78         [ 5]  532 	leas	-8,s
   028A E7 65         [ 5]  533 	stb	5,s
   028C BD F3 54      [ 8]  534 	jsr	___Reset0Ref
   028F C6 FF         [ 2]  535 	ldb	#-1
   0291 D7 04         [ 4]  536 	stb	*_dp_VIA_t1_cnt_lo
   0293 C6 F9         [ 2]  537 	ldb	#-7
   0295 E7 E2         [ 6]  538 	stb	,-s
   0297 5F            [ 2]  539 	clrb
   0298 BD 1D 04      [ 8]  540 	jsr	__Moveto_d
   029B 32 61         [ 5]  541 	leas	1,s
   029D E6 65         [ 5]  542 	ldb	5,s
   029F 4F            [ 2]  543 	clra		;zero_extendqihi: R:b -> R:d
   02A0 ED 62         [ 6]  544 	std	2,s
   02A2 EC 62         [ 6]  545 	ldd	2,s
   02A4 58            [ 2]  546 	aslb
   02A5 49            [ 2]  547 	rola
   02A6 ED 62         [ 6]  548 	std	2,s
   02A8 EC 62         [ 6]  549 	ldd	2,s
   02AA 58            [ 2]  550 	aslb
   02AB 49            [ 2]  551 	rola
   02AC 58            [ 2]  552 	aslb
   02AD 49            [ 2]  553 	rola
   02AE AE 62         [ 6]  554 	ldx	2,s
   02B0 30 8B         [ 8]  555 	leax	d,x
   02B2 AF 62         [ 6]  556 	stx	2,s
   02B4 EE 62         [ 6]  557 	ldu	2,s
   02B6 30 C9 C8 90   [ 8]  558 	leax	_Displayed_Squares+1,u
   02BA E6 84         [ 4]  559 	ldb	,x
   02BC E7 64         [ 5]  560 	stb	4,s
   02BE E6 65         [ 5]  561 	ldb	5,s
   02C0 4F            [ 2]  562 	clra		;zero_extendqihi: R:b -> R:d
   02C1 ED E4         [ 5]  563 	std	,s
   02C3 EC E4         [ 5]  564 	ldd	,s
   02C5 58            [ 2]  565 	aslb
   02C6 49            [ 2]  566 	rola
   02C7 ED E4         [ 5]  567 	std	,s
   02C9 EC E4         [ 5]  568 	ldd	,s
   02CB 58            [ 2]  569 	aslb
   02CC 49            [ 2]  570 	rola
   02CD 58            [ 2]  571 	aslb
   02CE 49            [ 2]  572 	rola
   02CF AE E4         [ 5]  573 	ldx	,s
   02D1 30 8B         [ 8]  574 	leax	d,x
   02D3 AF E4         [ 5]  575 	stx	,s
   02D5 EE E4         [ 5]  576 	ldu	,s
   02D7 30 C9 C8 8F   [ 8]  577 	leax	_Displayed_Squares,u
   02DB E6 84         [ 4]  578 	ldb	,x
   02DD E7 67         [ 5]  579 	stb	7,s
   02DF E6 64         [ 5]  580 	ldb	4,s
   02E1 E7 66         [ 5]  581 	stb	6,s
   02E3 E6 67         [ 5]  582 	ldb	7,s
   02E5 E7 E2         [ 6]  583 	stb	,-s
   02E7 E6 67         [ 5]  584 	ldb	7,s
   02E9 BD 1D 04      [ 8]  585 	jsr	__Moveto_d
   02EC 32 61         [ 5]  586 	leas	1,s
   02EE C6 10         [ 2]  587 	ldb	#16
   02F0 D7 04         [ 4]  588 	stb	*_dp_VIA_t1_cnt_lo
   02F2 8E 00 9F      [ 3]  589 	ldx	#_square_filled
   02F5 BD F4 10      [ 8]  590 	jsr	___Draw_VLp
   02F8 32 68         [ 5]  591 	leas	8,s
   02FA 35 C0         [ 7]  592 	puls	u,pc
                            593 	.globl	_draw_round_advancement_cross
   02FC                     594 _draw_round_advancement_cross:
   02FC 34 40         [ 6]  595 	pshs	u
   02FE 32 7C         [ 5]  596 	leas	-4,s
   0300 E7 61         [ 5]  597 	stb	1,s
   0302 BD F3 54      [ 8]  598 	jsr	___Reset0Ref
   0305 C6 FF         [ 2]  599 	ldb	#-1
   0307 D7 04         [ 4]  600 	stb	*_dp_VIA_t1_cnt_lo
   0309 E6 61         [ 5]  601 	ldb	1,s
   030B 4F            [ 2]  602 	clra		;zero_extendqihi: R:b -> R:d
   030C 58            [ 2]  603 	aslb
   030D 49            [ 2]  604 	rola
   030E CE 00 5F      [ 3]  605 	ldu	#_Level_advancement+1
   0311 30 CB         [ 8]  606 	leax	d,u
   0313 E6 84         [ 4]  607 	ldb	,x
   0315 E7 E4         [ 4]  608 	stb	,s
   0317 E6 61         [ 5]  609 	ldb	1,s
   0319 4F            [ 2]  610 	clra		;zero_extendqihi: R:b -> R:d
   031A 58            [ 2]  611 	aslb
   031B 49            [ 2]  612 	rola
   031C CE 00 5E      [ 3]  613 	ldu	#_Level_advancement
   031F 30 CB         [ 8]  614 	leax	d,u
   0321 E6 84         [ 4]  615 	ldb	,x
   0323 E7 63         [ 5]  616 	stb	3,s
   0325 E6 E4         [ 4]  617 	ldb	,s
   0327 E7 62         [ 5]  618 	stb	2,s
   0329 E6 63         [ 5]  619 	ldb	3,s
   032B E7 E2         [ 6]  620 	stb	,-s
   032D E6 63         [ 5]  621 	ldb	3,s
   032F BD 1D 04      [ 8]  622 	jsr	__Moveto_d
   0332 32 61         [ 5]  623 	leas	1,s
   0334 C6 20         [ 2]  624 	ldb	#32
   0336 D7 04         [ 4]  625 	stb	*_dp_VIA_t1_cnt_lo
   0338 8E 00 7E      [ 3]  626 	ldx	#_cross
   033B BD F4 10      [ 8]  627 	jsr	___Draw_VLp
   033E 32 64         [ 5]  628 	leas	4,s
   0340 35 C0         [ 7]  629 	puls	u,pc
                            630 	.globl	_draw_round_advancement_cross_plus
   0342                     631 _draw_round_advancement_cross_plus:
   0342 34 40         [ 6]  632 	pshs	u
   0344 32 7C         [ 5]  633 	leas	-4,s
   0346 E7 61         [ 5]  634 	stb	1,s
   0348 BD F3 54      [ 8]  635 	jsr	___Reset0Ref
   034B C6 FF         [ 2]  636 	ldb	#-1
   034D D7 04         [ 4]  637 	stb	*_dp_VIA_t1_cnt_lo
   034F E6 61         [ 5]  638 	ldb	1,s
   0351 4F            [ 2]  639 	clra		;zero_extendqihi: R:b -> R:d
   0352 58            [ 2]  640 	aslb
   0353 49            [ 2]  641 	rola
   0354 CE 00 5F      [ 3]  642 	ldu	#_Level_advancement+1
   0357 30 CB         [ 8]  643 	leax	d,u
   0359 E6 84         [ 4]  644 	ldb	,x
   035B E7 E4         [ 4]  645 	stb	,s
   035D E6 61         [ 5]  646 	ldb	1,s
   035F 4F            [ 2]  647 	clra		;zero_extendqihi: R:b -> R:d
   0360 58            [ 2]  648 	aslb
   0361 49            [ 2]  649 	rola
   0362 CE 00 5E      [ 3]  650 	ldu	#_Level_advancement
   0365 30 CB         [ 8]  651 	leax	d,u
   0367 E6 84         [ 4]  652 	ldb	,x
   0369 E7 63         [ 5]  653 	stb	3,s
   036B E6 E4         [ 4]  654 	ldb	,s
   036D E7 62         [ 5]  655 	stb	2,s
   036F E6 63         [ 5]  656 	ldb	3,s
   0371 E7 E2         [ 6]  657 	stb	,-s
   0373 E6 63         [ 5]  658 	ldb	3,s
   0375 BD 1D 04      [ 8]  659 	jsr	__Moveto_d
   0378 32 61         [ 5]  660 	leas	1,s
   037A C6 20         [ 2]  661 	ldb	#32
   037C D7 04         [ 4]  662 	stb	*_dp_VIA_t1_cnt_lo
   037E 8E 00 C9      [ 3]  663 	ldx	#_advancement_plus
   0381 BD F4 10      [ 8]  664 	jsr	___Draw_VLp
   0384 32 64         [ 5]  665 	leas	4,s
   0386 35 C0         [ 7]  666 	puls	u,pc
                            667 	.globl	_Display_Gamefield
   0388                     668 _Display_Gamefield:
   0388 BD F3 54      [ 8]  669 	jsr	___Reset0Ref
   038B C6 80         [ 2]  670 	ldb	#-128
   038D D7 04         [ 4]  671 	stb	*_dp_VIA_t1_cnt_lo
   038F C6 2D         [ 2]  672 	ldb	#45
   0391 E7 E2         [ 6]  673 	stb	,-s
   0393 C6 C4         [ 2]  674 	ldb	#-60
   0395 BD 1D 04      [ 8]  675 	jsr	__Moveto_d
   0398 32 61         [ 5]  676 	leas	1,s
   039A 8E 00 D8      [ 3]  677 	ldx	#_Gamefield
   039D BD F4 10      [ 8]  678 	jsr	___Draw_VLp
   03A0 BD F3 54      [ 8]  679 	jsr	___Reset0Ref
   03A3 C6 18         [ 2]  680 	ldb	#24
   03A5 D7 04         [ 4]  681 	stb	*_dp_VIA_t1_cnt_lo
   03A7 C6 50         [ 2]  682 	ldb	#80
   03A9 E7 E2         [ 6]  683 	stb	,-s
   03AB 5F            [ 2]  684 	clrb
   03AC BD 1D 04      [ 8]  685 	jsr	__Moveto_d
   03AF 32 61         [ 5]  686 	leas	1,s
   03B1 8E 01 05      [ 3]  687 	ldx	#_Brainright
   03B4 BD F4 10      [ 8]  688 	jsr	___Draw_VLp
   03B7 BD F3 54      [ 8]  689 	jsr	___Reset0Ref
   03BA C6 50         [ 2]  690 	ldb	#80
   03BC E7 E2         [ 6]  691 	stb	,-s
   03BE 5F            [ 2]  692 	clrb
   03BF BD 1D 04      [ 8]  693 	jsr	__Moveto_d
   03C2 32 61         [ 5]  694 	leas	1,s
   03C4 8E 01 89      [ 3]  695 	ldx	#_Brainleft
   03C7 BD F4 10      [ 8]  696 	jsr	___Draw_VLp
   03CA 39            [ 5]  697 	rts
                            698 	.globl	_Loadingbar
   03CB                     699 _Loadingbar:
   03CB 32 7F         [ 5]  700 	leas	-1,s
   03CD E7 E4         [ 4]  701 	stb	,s
   03CF BD F3 54      [ 8]  702 	jsr	___Reset0Ref
   03D2 C6 7F         [ 2]  703 	ldb	#127
   03D4 D7 04         [ 4]  704 	stb	*_dp_VIA_t1_cnt_lo
   03D6 C6 46         [ 2]  705 	ldb	#70
   03D8 E7 E2         [ 6]  706 	stb	,-s
   03DA C6 C4         [ 2]  707 	ldb	#-60
   03DC BD 1D 04      [ 8]  708 	jsr	__Moveto_d
   03DF 32 61         [ 5]  709 	leas	1,s
   03E1 E6 E4         [ 4]  710 	ldb	,s
   03E3 D7 04         [ 4]  711 	stb	*_dp_VIA_t1_cnt_lo
   03E5 6F E2         [ 8]  712 	clr	,-s
   03E7 C6 50         [ 2]  713 	ldb	#80
   03E9 BD 1C FA      [ 8]  714 	jsr	__Draw_Line_d
   03EC 32 61         [ 5]  715 	leas	1,s
   03EE BD F3 54      [ 8]  716 	jsr	___Reset0Ref
   03F1 C6 7F         [ 2]  717 	ldb	#127
   03F3 D7 04         [ 4]  718 	stb	*_dp_VIA_t1_cnt_lo
   03F5 C6 42         [ 2]  719 	ldb	#66
   03F7 E7 E2         [ 6]  720 	stb	,-s
   03F9 C6 C4         [ 2]  721 	ldb	#-60
   03FB BD 1D 04      [ 8]  722 	jsr	__Moveto_d
   03FE 32 61         [ 5]  723 	leas	1,s
   0400 E6 E4         [ 4]  724 	ldb	,s
   0402 D7 04         [ 4]  725 	stb	*_dp_VIA_t1_cnt_lo
   0404 6F E2         [ 8]  726 	clr	,-s
   0406 C6 50         [ 2]  727 	ldb	#80
   0408 BD 1C FA      [ 8]  728 	jsr	__Draw_Line_d
   040B 32 61         [ 5]  729 	leas	1,s
   040D BD F3 54      [ 8]  730 	jsr	___Reset0Ref
   0410 C6 7F         [ 2]  731 	ldb	#127
   0412 D7 04         [ 4]  732 	stb	*_dp_VIA_t1_cnt_lo
   0414 C6 3E         [ 2]  733 	ldb	#62
   0416 E7 E2         [ 6]  734 	stb	,-s
   0418 C6 C4         [ 2]  735 	ldb	#-60
   041A BD 1D 04      [ 8]  736 	jsr	__Moveto_d
   041D 32 61         [ 5]  737 	leas	1,s
   041F E6 E4         [ 4]  738 	ldb	,s
   0421 D7 04         [ 4]  739 	stb	*_dp_VIA_t1_cnt_lo
   0423 6F E2         [ 8]  740 	clr	,-s
   0425 C6 50         [ 2]  741 	ldb	#80
   0427 BD 1C FA      [ 8]  742 	jsr	__Draw_Line_d
   042A 32 61         [ 5]  743 	leas	1,s
   042C C6 FF         [ 2]  744 	ldb	#-1
   042E D7 04         [ 4]  745 	stb	*_dp_VIA_t1_cnt_lo
   0430 32 61         [ 5]  746 	leas	1,s
   0432 39            [ 5]  747 	rts
                            748 	.globl	_Lifeline
   0433                     749 _Lifeline:
   0433 32 7E         [ 5]  750 	leas	-2,s
   0435 E7 E4         [ 4]  751 	stb	,s
   0437 BD F3 54      [ 8]  752 	jsr	___Reset0Ref
   043A E6 E4         [ 4]  753 	ldb	,s
   043C E7 61         [ 5]  754 	stb	1,s
   043E E6 61         [ 5]  755 	ldb	1,s
   0440 E7 E4         [ 4]  756 	stb	,s
   0442 C6 26         [ 2]  757 	ldb	#38
   0444 D7 04         [ 4]  758 	stb	*_dp_VIA_t1_cnt_lo
   0446 C6 78         [ 2]  759 	ldb	#120
   0448 E7 E2         [ 6]  760 	stb	,-s
   044A C6 88         [ 2]  761 	ldb	#-120
   044C BD 1D 04      [ 8]  762 	jsr	__Moveto_d
   044F 32 61         [ 5]  763 	leas	1,s
   0451 C6 78         [ 2]  764 	ldb	#120
   0453 E7 E2         [ 6]  765 	stb	,-s
   0455 C6 88         [ 2]  766 	ldb	#-120
   0457 BD 1D 04      [ 8]  767 	jsr	__Moveto_d
   045A 32 61         [ 5]  768 	leas	1,s
   045C C6 78         [ 2]  769 	ldb	#120
   045E E7 E2         [ 6]  770 	stb	,-s
   0460 C6 88         [ 2]  771 	ldb	#-120
   0462 BD 1D 04      [ 8]  772 	jsr	__Moveto_d
   0465 32 61         [ 5]  773 	leas	1,s
   0467 E6 E4         [ 4]  774 	ldb	,s
   0469 D7 04         [ 4]  775 	stb	*_dp_VIA_t1_cnt_lo
   046B 6F E2         [ 8]  776 	clr	,-s
   046D C6 50         [ 2]  777 	ldb	#80
   046F BD 1C FA      [ 8]  778 	jsr	__Draw_Line_d
   0472 32 61         [ 5]  779 	leas	1,s
   0474 C6 30         [ 2]  780 	ldb	#48
   0476 D7 04         [ 4]  781 	stb	*_dp_VIA_t1_cnt_lo
   0478 8E 00 E7      [ 3]  782 	ldx	#_Lifelinestruct
   047B BD F4 10      [ 8]  783 	jsr	___Draw_VLp
   047E E6 E4         [ 4]  784 	ldb	,s
   0480 D7 04         [ 4]  785 	stb	*_dp_VIA_t1_cnt_lo
   0482 6F E2         [ 8]  786 	clr	,-s
   0484 C6 50         [ 2]  787 	ldb	#80
   0486 BD 1C FA      [ 8]  788 	jsr	__Draw_Line_d
   0489 32 61         [ 5]  789 	leas	1,s
   048B C6 30         [ 2]  790 	ldb	#48
   048D D7 04         [ 4]  791 	stb	*_dp_VIA_t1_cnt_lo
   048F 8E 00 E7      [ 3]  792 	ldx	#_Lifelinestruct
   0492 BD F4 10      [ 8]  793 	jsr	___Draw_VLp
   0495 E6 E4         [ 4]  794 	ldb	,s
   0497 D7 04         [ 4]  795 	stb	*_dp_VIA_t1_cnt_lo
   0499 6F E2         [ 8]  796 	clr	,-s
   049B C6 50         [ 2]  797 	ldb	#80
   049D BD 1C FA      [ 8]  798 	jsr	__Draw_Line_d
   04A0 32 61         [ 5]  799 	leas	1,s
   04A2 C6 30         [ 2]  800 	ldb	#48
   04A4 D7 04         [ 4]  801 	stb	*_dp_VIA_t1_cnt_lo
   04A6 8E 00 E7      [ 3]  802 	ldx	#_Lifelinestruct
   04A9 BD F4 10      [ 8]  803 	jsr	___Draw_VLp
   04AC E6 E4         [ 4]  804 	ldb	,s
   04AE D7 04         [ 4]  805 	stb	*_dp_VIA_t1_cnt_lo
   04B0 6F E2         [ 8]  806 	clr	,-s
   04B2 C6 50         [ 2]  807 	ldb	#80
   04B4 BD 1C FA      [ 8]  808 	jsr	__Draw_Line_d
   04B7 32 61         [ 5]  809 	leas	1,s
   04B9 C6 30         [ 2]  810 	ldb	#48
   04BB D7 04         [ 4]  811 	stb	*_dp_VIA_t1_cnt_lo
   04BD 8E 00 E7      [ 3]  812 	ldx	#_Lifelinestruct
   04C0 BD F4 10      [ 8]  813 	jsr	___Draw_VLp
   04C3 E6 E4         [ 4]  814 	ldb	,s
   04C5 D7 04         [ 4]  815 	stb	*_dp_VIA_t1_cnt_lo
   04C7 6F E2         [ 8]  816 	clr	,-s
   04C9 C6 50         [ 2]  817 	ldb	#80
   04CB BD 1C FA      [ 8]  818 	jsr	__Draw_Line_d
   04CE 32 61         [ 5]  819 	leas	1,s
   04D0 C6 30         [ 2]  820 	ldb	#48
   04D2 D7 04         [ 4]  821 	stb	*_dp_VIA_t1_cnt_lo
   04D4 8E 00 E7      [ 3]  822 	ldx	#_Lifelinestruct
   04D7 BD F4 10      [ 8]  823 	jsr	___Draw_VLp
   04DA 32 62         [ 5]  824 	leas	2,s
   04DC 39            [ 5]  825 	rts
                            826 	.globl	_draw_menu_arrow
   04DD                     827 _draw_menu_arrow:
   04DD 34 40         [ 6]  828 	pshs	u
   04DF 32 7C         [ 5]  829 	leas	-4,s
   04E1 E7 61         [ 5]  830 	stb	1,s
   04E3 BD F3 54      [ 8]  831 	jsr	___Reset0Ref
   04E6 C6 7F         [ 2]  832 	ldb	#127
   04E8 D7 04         [ 4]  833 	stb	*_dp_VIA_t1_cnt_lo
   04EA E6 61         [ 5]  834 	ldb	1,s
   04EC 4F            [ 2]  835 	clra		;zero_extendqihi: R:b -> R:d
   04ED 58            [ 2]  836 	aslb
   04EE 49            [ 2]  837 	rola
   04EF CE 01 F9      [ 3]  838 	ldu	#_Positions_Arrow+1
   04F2 30 CB         [ 8]  839 	leax	d,u
   04F4 E6 84         [ 4]  840 	ldb	,x
   04F6 E7 E4         [ 4]  841 	stb	,s
   04F8 E6 61         [ 5]  842 	ldb	1,s
   04FA 4F            [ 2]  843 	clra		;zero_extendqihi: R:b -> R:d
   04FB 58            [ 2]  844 	aslb
   04FC 49            [ 2]  845 	rola
   04FD CE 01 F8      [ 3]  846 	ldu	#_Positions_Arrow
   0500 30 CB         [ 8]  847 	leax	d,u
   0502 E6 84         [ 4]  848 	ldb	,x
   0504 E7 63         [ 5]  849 	stb	3,s
   0506 E6 E4         [ 4]  850 	ldb	,s
   0508 E7 62         [ 5]  851 	stb	2,s
   050A E6 63         [ 5]  852 	ldb	3,s
   050C E7 E2         [ 6]  853 	stb	,-s
   050E E6 63         [ 5]  854 	ldb	3,s
   0510 BD 1D 04      [ 8]  855 	jsr	__Moveto_d
   0513 32 61         [ 5]  856 	leas	1,s
   0515 C6 60         [ 2]  857 	ldb	#96
   0517 D7 04         [ 4]  858 	stb	*_dp_VIA_t1_cnt_lo
   0519 8E 01 FE      [ 3]  859 	ldx	#_arrow
   051C BD F4 10      [ 8]  860 	jsr	___Draw_VLp
   051F 32 64         [ 5]  861 	leas	4,s
   0521 35 C0         [ 7]  862 	puls	u,pc
ASxxxx Assembler V05.50  (Motorola 6809)                                Page 1
Hexadecimal [16-Bits]                                 Sat Jun 28 00:20:38 2025

Symbol Table

    .__.$$$.       =   2710 L   |     .__.ABS.       =   0000 G
    .__.CPU.       =   0000 L   |     .__.H$L.       =   0001 L
  2 _Brainleft         012B GR  |   2 _Brainright        00A7 GR
  2 _Display_Gamef     032A GR  |     _Displayed_Squ     **** GX
  2 _Gamefield         007A GR  |   2 _Level_advance     0000 GR
  2 _Lifeline          03D5 GR  |   2 _Lifelinestruc     0089 GR
  2 _Loadingbar        036D GR  |   2 _Positions_Arr     019A GR
    __Draw_Line_d      **** GX  |     __Moveto_d         **** GX
    ___Draw_VLp        **** GX  |     ___Reset0Ref       **** GX
  2 _advancement_c     005C GR  |   2 _advancement_p     006B GR
  2 _arrow             01A0 GR  |   2 _cross             0020 GR
    _dp_VIA_t1_cnt     **** GX  |   2 _draw_menu_arr     047F GR
  2 _draw_round_ad     029E GR  |   2 _draw_round_ad     02E4 GR
  2 _draw_square       01B2 GR  |   2 _draw_square_f     0228 GR
  2 _square            002F GR  |   2 _square_filled     0041 GR

ASxxxx Assembler V05.50  (Motorola 6809)                                Page 2
Hexadecimal [16-Bits]                                 Sat Jun 28 00:20:38 2025

Area Table

[_CSEG]
   0 _CODE            size    0   flags C080
   2 .text            size  4C5   flags  100
[_DSEG]
   1 _DATA            size    0   flags C0C0

