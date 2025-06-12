                              1 ;;; gcc for m6809 : Mar 17 2019 13:25:32
                              2 ;;; 4.3.6 (gcc6809)
                              3 ;;; ABI version 1
                              4 ;;; -mabi=bx -mint8 -fomit-frame-pointer -O0
                              5 	.module	drawables.c
                              6 	.globl	_Positions_Cursor
                              7 	.area	.text
   005E                       8 _Positions_Cursor:
   005E 10                    9 	.byte	16
   005F F0                   10 	.byte	-16
   0060 10                   11 	.byte	16
   0061 00                   12 	.byte	0
   0062 10                   13 	.byte	16
   0063 10                   14 	.byte	16
   0064 00                   15 	.byte	0
   0065 F0                   16 	.byte	-16
   0066 00                   17 	.byte	0
   0067 00                   18 	.byte	0
   0068 00                   19 	.byte	0
   0069 10                   20 	.byte	16
   006A F0                   21 	.byte	-16
   006B F0                   22 	.byte	-16
   006C F0                   23 	.byte	-16
   006D 00                   24 	.byte	0
   006E F0                   25 	.byte	-16
   006F 10                   26 	.byte	16
                             27 	.globl	_Level_advancement
   0070                      28 _Level_advancement:
   0070 C4                   29 	.byte	-60
   0071 DD                   30 	.byte	-35
   0072 C4                   31 	.byte	-60
   0073 E7                   32 	.byte	-25
   0074 C4                   33 	.byte	-60
   0075 F1                   34 	.byte	-15
   0076 C4                   35 	.byte	-60
   0077 FB                   36 	.byte	-5
   0078 C4                   37 	.byte	-60
   0079 05                   38 	.byte	5
   007A C4                   39 	.byte	-60
   007B 0F                   40 	.byte	15
   007C C4                   41 	.byte	-60
   007D 19                   42 	.byte	25
   007E C4                   43 	.byte	-60
   007F 23                   44 	.byte	35
   0080 BA                   45 	.byte	-70
   0081 DD                   46 	.byte	-35
   0082 BA                   47 	.byte	-70
   0083 E7                   48 	.byte	-25
   0084 BA                   49 	.byte	-70
   0085 F1                   50 	.byte	-15
   0086 BA                   51 	.byte	-70
   0087 FB                   52 	.byte	-5
   0088 BA                   53 	.byte	-70
   0089 05                   54 	.byte	5
   008A BA                   55 	.byte	-70
   008B 0F                   56 	.byte	15
   008C BA                   57 	.byte	-70
   008D 19                   58 	.byte	25
   008E BA                   59 	.byte	-70
   008F 23                   60 	.byte	35
                             61 	.globl	_cross
   0090                      62 _cross:
   0090 00                   63 	.byte	0
   0091 20                   64 	.byte	32
   0092 20                   65 	.byte	32
   0093 FF                   66 	.byte	-1
   0094 E0                   67 	.byte	-32
   0095 E0                   68 	.byte	-32
   0096 00                   69 	.byte	0
   0097 20                   70 	.byte	32
   0098 00                   71 	.byte	0
   0099 FF                   72 	.byte	-1
   009A E0                   73 	.byte	-32
   009B 20                   74 	.byte	32
   009C 01                   75 	.byte	1
   009D 00                   76 	.byte	0
   009E 00                   77 	.byte	0
                             78 	.globl	_square
   009F                      79 _square:
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
   00AE 01                   95 	.byte	1
   00AF 00                   96 	.byte	0
   00B0 00                   97 	.byte	0
                             98 	.globl	_square_filled
   00B1                      99 _square_filled:
   00B1 00                  100 	.byte	0
   00B2 3C                  101 	.byte	60
   00B3 C4                  102 	.byte	-60
   00B4 FF                  103 	.byte	-1
   00B5 00                  104 	.byte	0
   00B6 78                  105 	.byte	120
   00B7 FF                  106 	.byte	-1
   00B8 88                  107 	.byte	-120
   00B9 00                  108 	.byte	0
   00BA FF                  109 	.byte	-1
   00BB 00                  110 	.byte	0
   00BC 88                  111 	.byte	-120
   00BD FF                  112 	.byte	-1
   00BE 78                  113 	.byte	120
   00BF 00                  114 	.byte	0
   00C0 FF                  115 	.byte	-1
   00C1 88                  116 	.byte	-120
   00C2 78                  117 	.byte	120
   00C3 FF                  118 	.byte	-1
   00C4 78                  119 	.byte	120
   00C5 00                  120 	.byte	0
   00C6 FF                  121 	.byte	-1
   00C7 88                  122 	.byte	-120
   00C8 88                  123 	.byte	-120
   00C9 01                  124 	.byte	1
   00CA 00                  125 	.byte	0
   00CB 00                  126 	.byte	0
                            127 	.globl	_advancement_cross
   00CC                     128 _advancement_cross:
   00CC 00                  129 	.byte	0
   00CD 10                  130 	.byte	16
   00CE 20                  131 	.byte	32
   00CF FF                  132 	.byte	-1
   00D0 E0                  133 	.byte	-32
   00D1 E0                  134 	.byte	-32
   00D2 00                  135 	.byte	0
   00D3 20                  136 	.byte	32
   00D4 00                  137 	.byte	0
   00D5 FF                  138 	.byte	-1
   00D6 E0                  139 	.byte	-32
   00D7 20                  140 	.byte	32
   00D8 01                  141 	.byte	1
   00D9 00                  142 	.byte	0
   00DA 00                  143 	.byte	0
                            144 	.globl	_advancement_plus
   00DB                     145 _advancement_plus:
   00DB 00                  146 	.byte	0
   00DC 20                  147 	.byte	32
   00DD 10                  148 	.byte	16
   00DE FF                  149 	.byte	-1
   00DF E0                  150 	.byte	-32
   00E0 00                  151 	.byte	0
   00E1 00                  152 	.byte	0
   00E2 10                  153 	.byte	16
   00E3 10                  154 	.byte	16
   00E4 FF                  155 	.byte	-1
   00E5 00                  156 	.byte	0
   00E6 E0                  157 	.byte	-32
   00E7 01                  158 	.byte	1
   00E8 00                  159 	.byte	0
   00E9 00                  160 	.byte	0
                            161 	.globl	_Gamefield
   00EA                     162 _Gamefield:
   00EA FF                  163 	.byte	-1
   00EB 88                  164 	.byte	-120
   00EC 00                  165 	.byte	0
   00ED FF                  166 	.byte	-1
   00EE 00                  167 	.byte	0
   00EF 78                  168 	.byte	120
   00F0 FF                  169 	.byte	-1
   00F1 78                  170 	.byte	120
   00F2 00                  171 	.byte	0
   00F3 FF                  172 	.byte	-1
   00F4 00                  173 	.byte	0
   00F5 88                  174 	.byte	-120
   00F6 01                  175 	.byte	1
   00F7 00                  176 	.byte	0
   00F8 00                  177 	.byte	0
                            178 	.globl	_sf
                            179 	.area	.data
   C880                     180 _sf:
   C880 08                  181 	.byte	8
                            182 	.globl	_Brainright
                            183 	.area	.text
   00F9                     184 _Brainright:
   00F9 00                  185 	.byte	0
   00FA 88                  186 	.byte	-120
   00FB 78                  187 	.byte	120
   00FC 00                  188 	.byte	0
   00FD 88                  189 	.byte	-120
   00FE 00                  190 	.byte	0
   00FF 00                  191 	.byte	0
   0100 88                  192 	.byte	-120
   0101 00                  193 	.byte	0
   0102 00                  194 	.byte	0
   0103 88                  195 	.byte	-120
   0104 00                  196 	.byte	0
   0105 FF                  197 	.byte	-1
   0106 9C                  198 	.byte	-100
   0107 32                  199 	.byte	50
   0108 FF                  200 	.byte	-1
   0109 00                  201 	.byte	0
   010A 3C                  202 	.byte	60
   010B FF                  203 	.byte	-1
   010C 00                  204 	.byte	0
   010D 4B                  205 	.byte	75
   010E FF                  206 	.byte	-1
   010F 32                  207 	.byte	50
   0110 4B                  208 	.byte	75
   0111 FF                  209 	.byte	-1
   0112 32                  210 	.byte	50
   0113 4B                  211 	.byte	75
   0114 FF                  212 	.byte	-1
   0115 32                  213 	.byte	50
   0116 00                  214 	.byte	0
   0117 FF                  215 	.byte	-1
   0118 1E                  216 	.byte	30
   0119 3C                  217 	.byte	60
   011A FF                  218 	.byte	-1
   011B 50                  219 	.byte	80
   011C 28                  220 	.byte	40
   011D FF                  221 	.byte	-1
   011E 3C                  222 	.byte	60
   011F 00                  223 	.byte	0
   0120 FF                  224 	.byte	-1
   0121 14                  225 	.byte	20
   0122 EC                  226 	.byte	-20
   0123 FF                  227 	.byte	-1
   0124 0F                  228 	.byte	15
   0125 E2                  229 	.byte	-30
   0126 FF                  230 	.byte	-1
   0127 EC                  231 	.byte	-20
   0128 CE                  232 	.byte	-50
   0129 00                  233 	.byte	0
   012A 14                  234 	.byte	20
   012B 32                  235 	.byte	50
   012C FF                  236 	.byte	-1
   012D 1E                  237 	.byte	30
   012E 1E                  238 	.byte	30
   012F FF                  239 	.byte	-1
   0130 46                  240 	.byte	70
   0131 00                  241 	.byte	0
   0132 FF                  242 	.byte	-1
   0133 1E                  243 	.byte	30
   0134 F6                  244 	.byte	-10
   0135 FF                  245 	.byte	-1
   0136 D8                  246 	.byte	-40
   0137 BA                  247 	.byte	-70
   0138 00                  248 	.byte	0
   0139 28                  249 	.byte	40
   013A 46                  250 	.byte	70
   013B FF                  251 	.byte	-1
   013C 46                  252 	.byte	70
   013D 00                  253 	.byte	0
   013E FF                  254 	.byte	-1
   013F 32                  255 	.byte	50
   0140 E7                  256 	.byte	-25
   0141 FF                  257 	.byte	-1
   0142 00                  258 	.byte	0
   0143 C4                  259 	.byte	-60
   0144 FF                  260 	.byte	-1
   0145 CE                  261 	.byte	-50
   0146 E7                  262 	.byte	-25
   0147 FF                  263 	.byte	-1
   0148 E7                  264 	.byte	-25
   0149 CE                  265 	.byte	-50
   014A 00                  266 	.byte	0
   014B 4B                  267 	.byte	75
   014C 4B                  268 	.byte	75
   014D FF                  269 	.byte	-1
   014E 3C                  270 	.byte	60
   014F E2                  271 	.byte	-30
   0150 FF                  272 	.byte	-1
   0151 3C                  273 	.byte	60
   0152 E2                  274 	.byte	-30
   0153 FF                  275 	.byte	-1
   0154 3C                  276 	.byte	60
   0155 CE                  277 	.byte	-50
   0156 FF                  278 	.byte	-1
   0157 00                  279 	.byte	0
   0158 CE                  280 	.byte	-50
   0159 FF                  281 	.byte	-1
   015A 28                  282 	.byte	40
   015B CE                  283 	.byte	-50
   015C FF                  284 	.byte	-1
   015D 1E                  285 	.byte	30
   015E 9C                  286 	.byte	-100
   015F FF                  287 	.byte	-1
   0160 E2                  288 	.byte	-30
   0161 C4                  289 	.byte	-60
   0162 FF                  290 	.byte	-1
   0163 E2                  291 	.byte	-30
   0164 CE                  292 	.byte	-50
   0165 01                  293 	.byte	1
   0166 00                  294 	.byte	0
   0167 00                  295 	.byte	0
                            296 	.globl	_BrainrightDetailed
   0168                     297 _BrainrightDetailed:
   0168 00                  298 	.byte	0
   0169 00                  299 	.byte	0
   016A 78                  300 	.byte	120
   016B FF                  301 	.byte	-1
   016C 78                  302 	.byte	120
   016D 78                  303 	.byte	120
   016E FF                  304 	.byte	-1
   016F 3C                  305 	.byte	60
   0170 00                  306 	.byte	0
   0171 FF                  307 	.byte	-1
   0172 78                  308 	.byte	120
   0173 78                  309 	.byte	120
   0174 FF                  310 	.byte	-1
   0175 10                  311 	.byte	16
   0176 08                  312 	.byte	8
   0177 FF                  313 	.byte	-1
   0178 2D                  314 	.byte	45
   0179 FF                  315 	.byte	-1
   017A FF                  316 	.byte	-1
   017B 05                  317 	.byte	5
   017C F6                  318 	.byte	-10
   017D FF                  319 	.byte	-1
   017E 00                  320 	.byte	0
   017F F6                  321 	.byte	-10
   0180 FF                  322 	.byte	-1
   0181 FB                  323 	.byte	-5
   0182 F6                  324 	.byte	-10
   0183 01                  325 	.byte	1
   0184 00                  326 	.byte	0
   0185 00                  327 	.byte	0
                            328 	.globl	_Brainleft
   0186                     329 _Brainleft:
   0186 00                  330 	.byte	0
   0187 88                  331 	.byte	-120
   0188 88                  332 	.byte	-120
   0189 00                  333 	.byte	0
   018A 88                  334 	.byte	-120
   018B 00                  335 	.byte	0
   018C 00                  336 	.byte	0
   018D 88                  337 	.byte	-120
   018E 00                  338 	.byte	0
   018F 00                  339 	.byte	0
   0190 88                  340 	.byte	-120
   0191 00                  341 	.byte	0
   0192 FF                  342 	.byte	-1
   0193 9C                  343 	.byte	-100
   0194 CE                  344 	.byte	-50
   0195 FF                  345 	.byte	-1
   0196 00                  346 	.byte	0
   0197 C4                  347 	.byte	-60
   0198 FF                  348 	.byte	-1
   0199 00                  349 	.byte	0
   019A B5                  350 	.byte	-75
   019B FF                  351 	.byte	-1
   019C 32                  352 	.byte	50
   019D B5                  353 	.byte	-75
   019E FF                  354 	.byte	-1
   019F 32                  355 	.byte	50
   01A0 B5                  356 	.byte	-75
   01A1 FF                  357 	.byte	-1
   01A2 32                  358 	.byte	50
   01A3 00                  359 	.byte	0
   01A4 FF                  360 	.byte	-1
   01A5 1E                  361 	.byte	30
   01A6 C4                  362 	.byte	-60
   01A7 FF                  363 	.byte	-1
   01A8 50                  364 	.byte	80
   01A9 D8                  365 	.byte	-40
   01AA FF                  366 	.byte	-1
   01AB 3C                  367 	.byte	60
   01AC 00                  368 	.byte	0
   01AD FF                  369 	.byte	-1
   01AE 14                  370 	.byte	20
   01AF 14                  371 	.byte	20
   01B0 FF                  372 	.byte	-1
   01B1 0F                  373 	.byte	15
   01B2 1E                  374 	.byte	30
   01B3 FF                  375 	.byte	-1
   01B4 EC                  376 	.byte	-20
   01B5 32                  377 	.byte	50
   01B6 00                  378 	.byte	0
   01B7 14                  379 	.byte	20
   01B8 CE                  380 	.byte	-50
   01B9 FF                  381 	.byte	-1
   01BA 1E                  382 	.byte	30
   01BB E2                  383 	.byte	-30
   01BC FF                  384 	.byte	-1
   01BD 46                  385 	.byte	70
   01BE 00                  386 	.byte	0
   01BF FF                  387 	.byte	-1
   01C0 1E                  388 	.byte	30
   01C1 0A                  389 	.byte	10
   01C2 FF                  390 	.byte	-1
   01C3 D8                  391 	.byte	-40
   01C4 46                  392 	.byte	70
   01C5 00                  393 	.byte	0
   01C6 28                  394 	.byte	40
   01C7 BA                  395 	.byte	-70
   01C8 FF                  396 	.byte	-1
   01C9 46                  397 	.byte	70
   01CA 00                  398 	.byte	0
   01CB FF                  399 	.byte	-1
   01CC 32                  400 	.byte	50
   01CD 19                  401 	.byte	25
   01CE FF                  402 	.byte	-1
   01CF 00                  403 	.byte	0
   01D0 3C                  404 	.byte	60
   01D1 FF                  405 	.byte	-1
   01D2 CE                  406 	.byte	-50
   01D3 19                  407 	.byte	25
   01D4 FF                  408 	.byte	-1
   01D5 E7                  409 	.byte	-25
   01D6 32                  410 	.byte	50
   01D7 00                  411 	.byte	0
   01D8 4B                  412 	.byte	75
   01D9 B5                  413 	.byte	-75
   01DA FF                  414 	.byte	-1
   01DB 3C                  415 	.byte	60
   01DC 1E                  416 	.byte	30
   01DD FF                  417 	.byte	-1
   01DE 3C                  418 	.byte	60
   01DF 1E                  419 	.byte	30
   01E0 FF                  420 	.byte	-1
   01E1 3C                  421 	.byte	60
   01E2 32                  422 	.byte	50
   01E3 FF                  423 	.byte	-1
   01E4 00                  424 	.byte	0
   01E5 32                  425 	.byte	50
   01E6 FF                  426 	.byte	-1
   01E7 28                  427 	.byte	40
   01E8 32                  428 	.byte	50
   01E9 FF                  429 	.byte	-1
   01EA 1E                  430 	.byte	30
   01EB 64                  431 	.byte	100
   01EC FF                  432 	.byte	-1
   01ED E2                  433 	.byte	-30
   01EE 3C                  434 	.byte	60
   01EF FF                  435 	.byte	-1
   01F0 E2                  436 	.byte	-30
   01F1 32                  437 	.byte	50
   01F2 01                  438 	.byte	1
   01F3 00                  439 	.byte	0
   01F4 00                  440 	.byte	0
                            441 	.globl	_Positions_Arrow
   01F5                     442 _Positions_Arrow:
   01F5 3C                  443 	.byte	60
   01F6 C9                  444 	.byte	-55
   01F7 28                  445 	.byte	40
   01F8 C9                  446 	.byte	-55
                            447 	.globl	_arrow
   01F9                     448 _arrow:
   01F9 00                  449 	.byte	0
   01FA 04                  450 	.byte	4
   01FB 00                  451 	.byte	0
   01FC FF                  452 	.byte	-1
   01FD F6                  453 	.byte	-10
   01FE 0A                  454 	.byte	10
   01FF FF                  455 	.byte	-1
   0200 F6                  456 	.byte	-10
   0201 F6                  457 	.byte	-10
   0202 00                  458 	.byte	0
   0203 0A                  459 	.byte	10
   0204 0A                  460 	.byte	10
   0205 FF                  461 	.byte	-1
   0206 00                  462 	.byte	0
   0207 EC                  463 	.byte	-20
   0208 01                  464 	.byte	1
   0209 00                  465 	.byte	0
   020A 00                  466 	.byte	0
                            467 	.globl	_Displayed_Squares
                            468 	.area	.data
   C881                     469 _Displayed_Squares:
   C881 10                  470 	.byte	16
   C882 F0                  471 	.byte	-16
   C883 02 5C               472 	.word	_draw_square
   C885 10                  473 	.byte	16
   C886 00                  474 	.byte	0
   C887 02 5C               475 	.word	_draw_square
   C889 10                  476 	.byte	16
   C88A 10                  477 	.byte	16
   C88B 02 5C               478 	.word	_draw_square
   C88D 00                  479 	.byte	0
   C88E F0                  480 	.byte	-16
   C88F 02 5C               481 	.word	_draw_square
   C891 00                  482 	.byte	0
   C892 00                  483 	.byte	0
   C893 02 5C               484 	.word	_draw_square
   C895 00                  485 	.byte	0
   C896 10                  486 	.byte	16
   C897 02 5C               487 	.word	_draw_square
   C899 F0                  488 	.byte	-16
   C89A F0                  489 	.byte	-16
   C89B 02 5C               490 	.word	_draw_square
   C89D F0                  491 	.byte	-16
   C89E 00                  492 	.byte	0
   C89F 02 5C               493 	.word	_draw_square
   C8A1 F0                  494 	.byte	-16
   C8A2 10                  495 	.byte	16
   C8A3 02 5C               496 	.word	_draw_square
                            497 	.area	.text
                            498 	.globl	_draw_cross
   020B                     499 _draw_cross:
   020B 34 40         [ 6]  500 	pshs	u
   020D 32 7C         [ 5]  501 	leas	-4,s
   020F E7 61         [ 5]  502 	stb	1,s
   0211 BD F3 54      [ 8]  503 	jsr	___Reset0Ref
   0214 C6 FF         [ 2]  504 	ldb	#-1
   0216 D7 04         [ 4]  505 	stb	*_dp_VIA_t1_cnt_lo
   0218 C6 EB         [ 2]  506 	ldb	#-21
   021A E7 E2         [ 6]  507 	stb	,-s
   021C C6 FA         [ 2]  508 	ldb	#-6
   021E BD 0F 7A      [ 8]  509 	jsr	__Moveto_d
   0221 32 61         [ 5]  510 	leas	1,s
   0223 E6 61         [ 5]  511 	ldb	1,s
   0225 4F            [ 2]  512 	clra		;zero_extendqihi: R:b -> R:d
   0226 58            [ 2]  513 	aslb
   0227 49            [ 2]  514 	rola
   0228 CE 00 5F      [ 3]  515 	ldu	#_Positions_Cursor+1
   022B 30 CB         [ 8]  516 	leax	d,u
   022D E6 84         [ 4]  517 	ldb	,x
   022F E7 E4         [ 4]  518 	stb	,s
   0231 E6 61         [ 5]  519 	ldb	1,s
   0233 4F            [ 2]  520 	clra		;zero_extendqihi: R:b -> R:d
   0234 58            [ 2]  521 	aslb
   0235 49            [ 2]  522 	rola
   0236 CE 00 5E      [ 3]  523 	ldu	#_Positions_Cursor
   0239 30 CB         [ 8]  524 	leax	d,u
   023B E6 84         [ 4]  525 	ldb	,x
   023D E7 63         [ 5]  526 	stb	3,s
   023F E6 E4         [ 4]  527 	ldb	,s
   0241 E7 62         [ 5]  528 	stb	2,s
   0243 E6 63         [ 5]  529 	ldb	3,s
   0245 E7 E2         [ 6]  530 	stb	,-s
   0247 E6 63         [ 5]  531 	ldb	3,s
   0249 BD 0F 7A      [ 8]  532 	jsr	__Moveto_d
   024C 32 61         [ 5]  533 	leas	1,s
   024E C6 60         [ 2]  534 	ldb	#96
   0250 D7 04         [ 4]  535 	stb	*_dp_VIA_t1_cnt_lo
   0252 8E 00 90      [ 3]  536 	ldx	#_cross
   0255 BD F4 10      [ 8]  537 	jsr	___Draw_VLp
   0258 32 64         [ 5]  538 	leas	4,s
   025A 35 C0         [ 7]  539 	puls	u,pc
                            540 	.globl	_draw_square
   025C                     541 _draw_square:
   025C 34 40         [ 6]  542 	pshs	u
   025E 32 7C         [ 5]  543 	leas	-4,s
   0260 E7 61         [ 5]  544 	stb	1,s
   0262 BD F3 54      [ 8]  545 	jsr	___Reset0Ref
   0265 C6 FF         [ 2]  546 	ldb	#-1
   0267 D7 04         [ 4]  547 	stb	*_dp_VIA_t1_cnt_lo
   0269 C6 EE         [ 2]  548 	ldb	#-18
   026B E7 E2         [ 6]  549 	stb	,-s
   026D 5F            [ 2]  550 	clrb
   026E BD 0F 7A      [ 8]  551 	jsr	__Moveto_d
   0271 32 61         [ 5]  552 	leas	1,s
   0273 E6 61         [ 5]  553 	ldb	1,s
   0275 4F            [ 2]  554 	clra		;zero_extendqihi: R:b -> R:d
   0276 58            [ 2]  555 	aslb
   0277 49            [ 2]  556 	rola
   0278 CE 00 5F      [ 3]  557 	ldu	#_Positions_Cursor+1
   027B 30 CB         [ 8]  558 	leax	d,u
   027D E6 84         [ 4]  559 	ldb	,x
   027F E7 E4         [ 4]  560 	stb	,s
   0281 E6 61         [ 5]  561 	ldb	1,s
   0283 4F            [ 2]  562 	clra		;zero_extendqihi: R:b -> R:d
   0284 58            [ 2]  563 	aslb
   0285 49            [ 2]  564 	rola
   0286 CE 00 5E      [ 3]  565 	ldu	#_Positions_Cursor
   0289 30 CB         [ 8]  566 	leax	d,u
   028B E6 84         [ 4]  567 	ldb	,x
   028D E7 63         [ 5]  568 	stb	3,s
   028F E6 E4         [ 4]  569 	ldb	,s
   0291 E7 62         [ 5]  570 	stb	2,s
   0293 E6 63         [ 5]  571 	ldb	3,s
   0295 E7 E2         [ 6]  572 	stb	,-s
   0297 E6 63         [ 5]  573 	ldb	3,s
   0299 BD 0F 7A      [ 8]  574 	jsr	__Moveto_d
   029C 32 61         [ 5]  575 	leas	1,s
   029E C6 10         [ 2]  576 	ldb	#16
   02A0 D7 04         [ 4]  577 	stb	*_dp_VIA_t1_cnt_lo
   02A2 8E 00 9F      [ 3]  578 	ldx	#_square
   02A5 BD F4 10      [ 8]  579 	jsr	___Draw_VLp
   02A8 32 64         [ 5]  580 	leas	4,s
   02AA 35 C0         [ 7]  581 	puls	u,pc
                            582 	.globl	_draw_square_filled
   02AC                     583 _draw_square_filled:
   02AC 34 40         [ 6]  584 	pshs	u
   02AE 32 7C         [ 5]  585 	leas	-4,s
   02B0 E7 61         [ 5]  586 	stb	1,s
   02B2 BD F3 54      [ 8]  587 	jsr	___Reset0Ref
   02B5 C6 FF         [ 2]  588 	ldb	#-1
   02B7 D7 04         [ 4]  589 	stb	*_dp_VIA_t1_cnt_lo
   02B9 C6 EE         [ 2]  590 	ldb	#-18
   02BB E7 E2         [ 6]  591 	stb	,-s
   02BD 5F            [ 2]  592 	clrb
   02BE BD 0F 7A      [ 8]  593 	jsr	__Moveto_d
   02C1 32 61         [ 5]  594 	leas	1,s
   02C3 E6 61         [ 5]  595 	ldb	1,s
   02C5 4F            [ 2]  596 	clra		;zero_extendqihi: R:b -> R:d
   02C6 58            [ 2]  597 	aslb
   02C7 49            [ 2]  598 	rola
   02C8 CE 00 5F      [ 3]  599 	ldu	#_Positions_Cursor+1
   02CB 30 CB         [ 8]  600 	leax	d,u
   02CD E6 84         [ 4]  601 	ldb	,x
   02CF E7 E4         [ 4]  602 	stb	,s
   02D1 E6 61         [ 5]  603 	ldb	1,s
   02D3 4F            [ 2]  604 	clra		;zero_extendqihi: R:b -> R:d
   02D4 58            [ 2]  605 	aslb
   02D5 49            [ 2]  606 	rola
   02D6 CE 00 5E      [ 3]  607 	ldu	#_Positions_Cursor
   02D9 30 CB         [ 8]  608 	leax	d,u
   02DB E6 84         [ 4]  609 	ldb	,x
   02DD E7 63         [ 5]  610 	stb	3,s
   02DF E6 E4         [ 4]  611 	ldb	,s
   02E1 E7 62         [ 5]  612 	stb	2,s
   02E3 E6 63         [ 5]  613 	ldb	3,s
   02E5 E7 E2         [ 6]  614 	stb	,-s
   02E7 E6 63         [ 5]  615 	ldb	3,s
   02E9 BD 0F 7A      [ 8]  616 	jsr	__Moveto_d
   02EC 32 61         [ 5]  617 	leas	1,s
   02EE C6 10         [ 2]  618 	ldb	#16
   02F0 D7 04         [ 4]  619 	stb	*_dp_VIA_t1_cnt_lo
   02F2 8E 00 B1      [ 3]  620 	ldx	#_square_filled
   02F5 BD F4 10      [ 8]  621 	jsr	___Draw_VLp
   02F8 32 64         [ 5]  622 	leas	4,s
   02FA 35 C0         [ 7]  623 	puls	u,pc
                            624 	.globl	_draw_round_advancement_cross
   02FC                     625 _draw_round_advancement_cross:
   02FC 34 40         [ 6]  626 	pshs	u
   02FE 32 7C         [ 5]  627 	leas	-4,s
   0300 E7 61         [ 5]  628 	stb	1,s
   0302 BD F3 54      [ 8]  629 	jsr	___Reset0Ref
   0305 C6 FF         [ 2]  630 	ldb	#-1
   0307 D7 04         [ 4]  631 	stb	*_dp_VIA_t1_cnt_lo
   0309 E6 61         [ 5]  632 	ldb	1,s
   030B 4F            [ 2]  633 	clra		;zero_extendqihi: R:b -> R:d
   030C 58            [ 2]  634 	aslb
   030D 49            [ 2]  635 	rola
   030E CE 00 71      [ 3]  636 	ldu	#_Level_advancement+1
   0311 30 CB         [ 8]  637 	leax	d,u
   0313 E6 84         [ 4]  638 	ldb	,x
   0315 E7 E4         [ 4]  639 	stb	,s
   0317 E6 61         [ 5]  640 	ldb	1,s
   0319 4F            [ 2]  641 	clra		;zero_extendqihi: R:b -> R:d
   031A 58            [ 2]  642 	aslb
   031B 49            [ 2]  643 	rola
   031C CE 00 70      [ 3]  644 	ldu	#_Level_advancement
   031F 30 CB         [ 8]  645 	leax	d,u
   0321 E6 84         [ 4]  646 	ldb	,x
   0323 E7 63         [ 5]  647 	stb	3,s
   0325 E6 E4         [ 4]  648 	ldb	,s
   0327 E7 62         [ 5]  649 	stb	2,s
   0329 E6 63         [ 5]  650 	ldb	3,s
   032B E7 E2         [ 6]  651 	stb	,-s
   032D E6 63         [ 5]  652 	ldb	3,s
   032F BD 0F 7A      [ 8]  653 	jsr	__Moveto_d
   0332 32 61         [ 5]  654 	leas	1,s
   0334 C6 20         [ 2]  655 	ldb	#32
   0336 D7 04         [ 4]  656 	stb	*_dp_VIA_t1_cnt_lo
   0338 8E 00 90      [ 3]  657 	ldx	#_cross
   033B BD F4 10      [ 8]  658 	jsr	___Draw_VLp
   033E 32 64         [ 5]  659 	leas	4,s
   0340 35 C0         [ 7]  660 	puls	u,pc
                            661 	.globl	_draw_round_advancement_cross_plus
   0342                     662 _draw_round_advancement_cross_plus:
   0342 34 40         [ 6]  663 	pshs	u
   0344 32 7C         [ 5]  664 	leas	-4,s
   0346 E7 61         [ 5]  665 	stb	1,s
   0348 BD F3 54      [ 8]  666 	jsr	___Reset0Ref
   034B C6 FF         [ 2]  667 	ldb	#-1
   034D D7 04         [ 4]  668 	stb	*_dp_VIA_t1_cnt_lo
   034F E6 61         [ 5]  669 	ldb	1,s
   0351 4F            [ 2]  670 	clra		;zero_extendqihi: R:b -> R:d
   0352 58            [ 2]  671 	aslb
   0353 49            [ 2]  672 	rola
   0354 CE 00 71      [ 3]  673 	ldu	#_Level_advancement+1
   0357 30 CB         [ 8]  674 	leax	d,u
   0359 E6 84         [ 4]  675 	ldb	,x
   035B E7 E4         [ 4]  676 	stb	,s
   035D E6 61         [ 5]  677 	ldb	1,s
   035F 4F            [ 2]  678 	clra		;zero_extendqihi: R:b -> R:d
   0360 58            [ 2]  679 	aslb
   0361 49            [ 2]  680 	rola
   0362 CE 00 70      [ 3]  681 	ldu	#_Level_advancement
   0365 30 CB         [ 8]  682 	leax	d,u
   0367 E6 84         [ 4]  683 	ldb	,x
   0369 E7 63         [ 5]  684 	stb	3,s
   036B E6 E4         [ 4]  685 	ldb	,s
   036D E7 62         [ 5]  686 	stb	2,s
   036F E6 63         [ 5]  687 	ldb	3,s
   0371 E7 E2         [ 6]  688 	stb	,-s
   0373 E6 63         [ 5]  689 	ldb	3,s
   0375 BD 0F 7A      [ 8]  690 	jsr	__Moveto_d
   0378 32 61         [ 5]  691 	leas	1,s
   037A C6 20         [ 2]  692 	ldb	#32
   037C D7 04         [ 4]  693 	stb	*_dp_VIA_t1_cnt_lo
   037E 8E 00 DB      [ 3]  694 	ldx	#_advancement_plus
   0381 BD F4 10      [ 8]  695 	jsr	___Draw_VLp
   0384 32 64         [ 5]  696 	leas	4,s
   0386 35 C0         [ 7]  697 	puls	u,pc
                            698 	.globl	_Display_Gamefield
   0388                     699 _Display_Gamefield:
   0388 BD F3 54      [ 8]  700 	jsr	___Reset0Ref
   038B C6 80         [ 2]  701 	ldb	#-128
   038D D7 04         [ 4]  702 	stb	*_dp_VIA_t1_cnt_lo
   038F C6 19         [ 2]  703 	ldb	#25
   0391 E7 E2         [ 6]  704 	stb	,-s
   0393 C6 C4         [ 2]  705 	ldb	#-60
   0395 BD 0F 7A      [ 8]  706 	jsr	__Moveto_d
   0398 32 61         [ 5]  707 	leas	1,s
   039A 8E 00 EA      [ 3]  708 	ldx	#_Gamefield
   039D BD F4 10      [ 8]  709 	jsr	___Draw_VLp
   03A0 BD F3 54      [ 8]  710 	jsr	___Reset0Ref
   03A3 C6 18         [ 2]  711 	ldb	#24
   03A5 D7 04         [ 4]  712 	stb	*_dp_VIA_t1_cnt_lo
   03A7 6F E2         [ 8]  713 	clr	,-s
   03A9 5F            [ 2]  714 	clrb
   03AA BD 0F 7A      [ 8]  715 	jsr	__Moveto_d
   03AD 32 61         [ 5]  716 	leas	1,s
   03AF 8E 00 F9      [ 3]  717 	ldx	#_Brainright
   03B2 BD F4 10      [ 8]  718 	jsr	___Draw_VLp
   03B5 BD F3 54      [ 8]  719 	jsr	___Reset0Ref
   03B8 6F E2         [ 8]  720 	clr	,-s
   03BA 5F            [ 2]  721 	clrb
   03BB BD 0F 7A      [ 8]  722 	jsr	__Moveto_d
   03BE 32 61         [ 5]  723 	leas	1,s
   03C0 8E 01 86      [ 3]  724 	ldx	#_Brainleft
   03C3 BD F4 10      [ 8]  725 	jsr	___Draw_VLp
   03C6 39            [ 5]  726 	rts
                            727 	.globl	_Loadingbar
   03C7                     728 _Loadingbar:
   03C7 32 7F         [ 5]  729 	leas	-1,s
   03C9 E7 E4         [ 4]  730 	stb	,s
   03CB BD F3 54      [ 8]  731 	jsr	___Reset0Ref
   03CE C6 7F         [ 2]  732 	ldb	#127
   03D0 D7 04         [ 4]  733 	stb	*_dp_VIA_t1_cnt_lo
   03D2 C6 46         [ 2]  734 	ldb	#70
   03D4 E7 E2         [ 6]  735 	stb	,-s
   03D6 C6 C4         [ 2]  736 	ldb	#-60
   03D8 BD 0F 7A      [ 8]  737 	jsr	__Moveto_d
   03DB 32 61         [ 5]  738 	leas	1,s
   03DD E6 E4         [ 4]  739 	ldb	,s
   03DF D7 04         [ 4]  740 	stb	*_dp_VIA_t1_cnt_lo
   03E1 6F E2         [ 8]  741 	clr	,-s
   03E3 C6 50         [ 2]  742 	ldb	#80
   03E5 BD 0F 70      [ 8]  743 	jsr	__Draw_Line_d
   03E8 32 61         [ 5]  744 	leas	1,s
   03EA BD F3 54      [ 8]  745 	jsr	___Reset0Ref
   03ED C6 7F         [ 2]  746 	ldb	#127
   03EF D7 04         [ 4]  747 	stb	*_dp_VIA_t1_cnt_lo
   03F1 C6 42         [ 2]  748 	ldb	#66
   03F3 E7 E2         [ 6]  749 	stb	,-s
   03F5 C6 C4         [ 2]  750 	ldb	#-60
   03F7 BD 0F 7A      [ 8]  751 	jsr	__Moveto_d
   03FA 32 61         [ 5]  752 	leas	1,s
   03FC E6 E4         [ 4]  753 	ldb	,s
   03FE D7 04         [ 4]  754 	stb	*_dp_VIA_t1_cnt_lo
   0400 6F E2         [ 8]  755 	clr	,-s
   0402 C6 50         [ 2]  756 	ldb	#80
   0404 BD 0F 70      [ 8]  757 	jsr	__Draw_Line_d
   0407 32 61         [ 5]  758 	leas	1,s
   0409 BD F3 54      [ 8]  759 	jsr	___Reset0Ref
   040C C6 7F         [ 2]  760 	ldb	#127
   040E D7 04         [ 4]  761 	stb	*_dp_VIA_t1_cnt_lo
   0410 C6 3E         [ 2]  762 	ldb	#62
   0412 E7 E2         [ 6]  763 	stb	,-s
   0414 C6 C4         [ 2]  764 	ldb	#-60
   0416 BD 0F 7A      [ 8]  765 	jsr	__Moveto_d
   0419 32 61         [ 5]  766 	leas	1,s
   041B E6 E4         [ 4]  767 	ldb	,s
   041D D7 04         [ 4]  768 	stb	*_dp_VIA_t1_cnt_lo
   041F 6F E2         [ 8]  769 	clr	,-s
   0421 C6 50         [ 2]  770 	ldb	#80
   0423 BD 0F 70      [ 8]  771 	jsr	__Draw_Line_d
   0426 32 61         [ 5]  772 	leas	1,s
   0428 C6 FF         [ 2]  773 	ldb	#-1
   042A D7 04         [ 4]  774 	stb	*_dp_VIA_t1_cnt_lo
   042C 32 61         [ 5]  775 	leas	1,s
   042E 39            [ 5]  776 	rts
                            777 	.globl	_draw_menu_arrow
   042F                     778 _draw_menu_arrow:
   042F 34 40         [ 6]  779 	pshs	u
   0431 32 7C         [ 5]  780 	leas	-4,s
   0433 E7 61         [ 5]  781 	stb	1,s
   0435 BD F3 54      [ 8]  782 	jsr	___Reset0Ref
   0438 C6 7F         [ 2]  783 	ldb	#127
   043A D7 04         [ 4]  784 	stb	*_dp_VIA_t1_cnt_lo
   043C E6 61         [ 5]  785 	ldb	1,s
   043E 1D            [ 2]  786 	sex		;extendqihi2: R:b -> R:d
   043F 58            [ 2]  787 	aslb
   0440 49            [ 2]  788 	rola
   0441 CE 01 F6      [ 3]  789 	ldu	#_Positions_Arrow+1
   0444 30 CB         [ 8]  790 	leax	d,u
   0446 E6 84         [ 4]  791 	ldb	,x
   0448 E7 E4         [ 4]  792 	stb	,s
   044A E6 61         [ 5]  793 	ldb	1,s
   044C 1D            [ 2]  794 	sex		;extendqihi2: R:b -> R:d
   044D 58            [ 2]  795 	aslb
   044E 49            [ 2]  796 	rola
   044F CE 01 F5      [ 3]  797 	ldu	#_Positions_Arrow
   0452 30 CB         [ 8]  798 	leax	d,u
   0454 E6 84         [ 4]  799 	ldb	,x
   0456 E7 63         [ 5]  800 	stb	3,s
   0458 E6 E4         [ 4]  801 	ldb	,s
   045A E7 62         [ 5]  802 	stb	2,s
   045C E6 63         [ 5]  803 	ldb	3,s
   045E E7 E2         [ 6]  804 	stb	,-s
   0460 E6 63         [ 5]  805 	ldb	3,s
   0462 BD 0F 7A      [ 8]  806 	jsr	__Moveto_d
   0465 32 61         [ 5]  807 	leas	1,s
   0467 C6 60         [ 2]  808 	ldb	#96
   0469 D7 04         [ 4]  809 	stb	*_dp_VIA_t1_cnt_lo
   046B 8E 01 F9      [ 3]  810 	ldx	#_arrow
   046E BD F4 10      [ 8]  811 	jsr	___Draw_VLp
   0471 32 64         [ 5]  812 	leas	4,s
   0473 35 C0         [ 7]  813 	puls	u,pc
ASxxxx Assembler V05.50  (Motorola 6809)                                Page 1
Hexadecimal [16-Bits]                                 Fri Jun 13 00:53:11 2025

Symbol Table

    .__.$$$.       =   2710 L   |     .__.ABS.       =   0000 G
    .__.CPU.       =   0000 L   |     .__.H$L.       =   0001 L
  2 _Brainleft         0128 GR  |   2 _Brainright        009B GR
  2 _BrainrightDet     010A GR  |   2 _Display_Gamef     032A GR
  3 _Displayed_Squ     0001 GR  |   2 _Gamefield         008C GR
  2 _Level_advance     0012 GR  |   2 _Loadingbar        0369 GR
  2 _Positions_Arr     0197 GR  |   2 _Positions_Cur     0000 GR
    __Draw_Line_d      **** GX  |     __Moveto_d         **** GX
    ___Draw_VLp        **** GX  |     ___Reset0Ref       **** GX
  2 _advancement_c     006E GR  |   2 _advancement_p     007D GR
  2 _arrow             019B GR  |   2 _cross             0032 GR
    _dp_VIA_t1_cnt     **** GX  |   2 _draw_cross        01AD GR
  2 _draw_menu_arr     03D1 GR  |   2 _draw_round_ad     029E GR
  2 _draw_round_ad     02E4 GR  |   2 _draw_square       01FE GR
  2 _draw_square_f     024E GR  |   3 _sf                0000 GR
  2 _square            0041 GR  |   2 _square_filled     0053 GR

ASxxxx Assembler V05.50  (Motorola 6809)                                Page 2
Hexadecimal [16-Bits]                                 Fri Jun 13 00:53:11 2025

Area Table

[_CSEG]
   0 _CODE            size    0   flags C080
   2 .text            size  417   flags  100
   3 .data            size   25   flags  100
[_DSEG]
   1 _DATA            size    0   flags C0C0

