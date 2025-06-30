                              1 ;;; gcc for m6809 : Mar 17 2019 13:25:32
                              2 ;;; 4.3.6 (gcc6809)
                              3 ;;; ABI version 1
                              4 ;;; -mabi=bx -mint8 -fomit-frame-pointer -O0
                              5 	.module	main.c
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
                            190 	.globl	_Lifelinestruct2
   0105                     191 _Lifelinestruct2:
   0105 20                  192 	.byte	32
   0106 00                  193 	.byte	0
   0107 1E                  194 	.byte	30
   0108 0F                  195 	.byte	15
   0109 0A                  196 	.byte	10
   010A F1                  197 	.byte	-15
   010B 0A                  198 	.byte	10
   010C 00                  199 	.byte	0
   010D 0F                  200 	.byte	15
   010E F1                  201 	.byte	-15
   010F 0A                  202 	.byte	10
   0110 2D                  203 	.byte	45
   0111 0F                  204 	.byte	15
   0112 C9                  205 	.byte	-55
   0113 0F                  206 	.byte	15
   0114 19                  207 	.byte	25
   0115 0F                  208 	.byte	15
   0116 00                  209 	.byte	0
   0117 0F                  210 	.byte	15
   0118 00                  211 	.byte	0
   0119 1E                  212 	.byte	30
   011A 00                  213 	.byte	0
   011B 1E                  214 	.byte	30
   011C 00                  215 	.byte	0
   011D 1E                  216 	.byte	30
   011E 0F                  217 	.byte	15
   011F 0A                  218 	.byte	10
   0120 F1                  219 	.byte	-15
   0121 0A                  220 	.byte	10
   0122 00                  221 	.byte	0
   0123 0F                  222 	.byte	15
   0124 F1                  223 	.byte	-15
   0125 0A                  224 	.byte	10
   0126 2D                  225 	.byte	45
   0127 0F                  226 	.byte	15
   0128 C9                  227 	.byte	-55
   0129 0F                  228 	.byte	15
   012A 19                  229 	.byte	25
   012B 0F                  230 	.byte	15
   012C 00                  231 	.byte	0
   012D 0F                  232 	.byte	15
   012E 00                  233 	.byte	0
   012F 1E                  234 	.byte	30
   0130 00                  235 	.byte	0
   0131 1E                  236 	.byte	30
   0132 00                  237 	.byte	0
   0133 1E                  238 	.byte	30
   0134 0F                  239 	.byte	15
   0135 0A                  240 	.byte	10
   0136 F1                  241 	.byte	-15
   0137 0A                  242 	.byte	10
   0138 00                  243 	.byte	0
   0139 0F                  244 	.byte	15
   013A F1                  245 	.byte	-15
   013B 0A                  246 	.byte	10
   013C 2D                  247 	.byte	45
   013D 0F                  248 	.byte	15
   013E C9                  249 	.byte	-55
   013F 0F                  250 	.byte	15
   0140 19                  251 	.byte	25
   0141 0F                  252 	.byte	15
   0142 00                  253 	.byte	0
   0143 0F                  254 	.byte	15
   0144 00                  255 	.byte	0
   0145 1E                  256 	.byte	30
   0146 00                  257 	.byte	0
   0147 1E                  258 	.byte	30
                            259 	.globl	_Brainright
   0148                     260 _Brainright:
   0148 00                  261 	.byte	0
   0149 88                  262 	.byte	-120
   014A 78                  263 	.byte	120
   014B 00                  264 	.byte	0
   014C 88                  265 	.byte	-120
   014D 00                  266 	.byte	0
   014E 00                  267 	.byte	0
   014F 88                  268 	.byte	-120
   0150 00                  269 	.byte	0
   0151 00                  270 	.byte	0
   0152 88                  271 	.byte	-120
   0153 00                  272 	.byte	0
   0154 00                  273 	.byte	0
   0155 EC                  274 	.byte	-20
   0156 9C                  275 	.byte	-100
   0157 00                  276 	.byte	0
   0158 EC                  277 	.byte	-20
   0159 9C                  278 	.byte	-100
   015A 00                  279 	.byte	0
   015B EC                  280 	.byte	-20
   015C BA                  281 	.byte	-70
   015D FF                  282 	.byte	-1
   015E 00                  283 	.byte	0
   015F 64                  284 	.byte	100
   0160 FF                  285 	.byte	-1
   0161 00                  286 	.byte	0
   0162 64                  287 	.byte	100
   0163 FF                  288 	.byte	-1
   0164 00                  289 	.byte	0
   0165 5A                  290 	.byte	90
   0166 00                  291 	.byte	0
   0167 3C                  292 	.byte	60
   0168 E2                  293 	.byte	-30
   0169 FF                  294 	.byte	-1
   016A 9C                  295 	.byte	-100
   016B 32                  296 	.byte	50
   016C FF                  297 	.byte	-1
   016D 00                  298 	.byte	0
   016E 3C                  299 	.byte	60
   016F FF                  300 	.byte	-1
   0170 00                  301 	.byte	0
   0171 4B                  302 	.byte	75
   0172 FF                  303 	.byte	-1
   0173 32                  304 	.byte	50
   0174 4B                  305 	.byte	75
   0175 FF                  306 	.byte	-1
   0176 32                  307 	.byte	50
   0177 4B                  308 	.byte	75
   0178 FF                  309 	.byte	-1
   0179 32                  310 	.byte	50
   017A 00                  311 	.byte	0
   017B FF                  312 	.byte	-1
   017C 1E                  313 	.byte	30
   017D 3C                  314 	.byte	60
   017E FF                  315 	.byte	-1
   017F 50                  316 	.byte	80
   0180 28                  317 	.byte	40
   0181 FF                  318 	.byte	-1
   0182 3C                  319 	.byte	60
   0183 00                  320 	.byte	0
   0184 FF                  321 	.byte	-1
   0185 14                  322 	.byte	20
   0186 EC                  323 	.byte	-20
   0187 FF                  324 	.byte	-1
   0188 0F                  325 	.byte	15
   0189 E2                  326 	.byte	-30
   018A FF                  327 	.byte	-1
   018B EC                  328 	.byte	-20
   018C CE                  329 	.byte	-50
   018D 00                  330 	.byte	0
   018E 14                  331 	.byte	20
   018F 32                  332 	.byte	50
   0190 FF                  333 	.byte	-1
   0191 1E                  334 	.byte	30
   0192 1E                  335 	.byte	30
   0193 FF                  336 	.byte	-1
   0194 46                  337 	.byte	70
   0195 00                  338 	.byte	0
   0196 FF                  339 	.byte	-1
   0197 1E                  340 	.byte	30
   0198 F6                  341 	.byte	-10
   0199 FF                  342 	.byte	-1
   019A D8                  343 	.byte	-40
   019B BA                  344 	.byte	-70
   019C 00                  345 	.byte	0
   019D 28                  346 	.byte	40
   019E 46                  347 	.byte	70
   019F FF                  348 	.byte	-1
   01A0 46                  349 	.byte	70
   01A1 00                  350 	.byte	0
   01A2 FF                  351 	.byte	-1
   01A3 32                  352 	.byte	50
   01A4 E7                  353 	.byte	-25
   01A5 FF                  354 	.byte	-1
   01A6 00                  355 	.byte	0
   01A7 C4                  356 	.byte	-60
   01A8 FF                  357 	.byte	-1
   01A9 CE                  358 	.byte	-50
   01AA E7                  359 	.byte	-25
   01AB FF                  360 	.byte	-1
   01AC E7                  361 	.byte	-25
   01AD CE                  362 	.byte	-50
   01AE 00                  363 	.byte	0
   01AF 4B                  364 	.byte	75
   01B0 4B                  365 	.byte	75
   01B1 FF                  366 	.byte	-1
   01B2 3C                  367 	.byte	60
   01B3 E2                  368 	.byte	-30
   01B4 FF                  369 	.byte	-1
   01B5 3C                  370 	.byte	60
   01B6 E2                  371 	.byte	-30
   01B7 FF                  372 	.byte	-1
   01B8 3C                  373 	.byte	60
   01B9 CE                  374 	.byte	-50
   01BA FF                  375 	.byte	-1
   01BB 00                  376 	.byte	0
   01BC CE                  377 	.byte	-50
   01BD FF                  378 	.byte	-1
   01BE 28                  379 	.byte	40
   01BF CE                  380 	.byte	-50
   01C0 FF                  381 	.byte	-1
   01C1 1E                  382 	.byte	30
   01C2 9C                  383 	.byte	-100
   01C3 FF                  384 	.byte	-1
   01C4 E2                  385 	.byte	-30
   01C5 C4                  386 	.byte	-60
   01C6 FF                  387 	.byte	-1
   01C7 E2                  388 	.byte	-30
   01C8 BF                  389 	.byte	-65
   01C9 01                  390 	.byte	1
   01CA 00                  391 	.byte	0
   01CB 00                  392 	.byte	0
                            393 	.globl	_Brainleft
   01CC                     394 _Brainleft:
   01CC 00                  395 	.byte	0
   01CD 88                  396 	.byte	-120
   01CE 88                  397 	.byte	-120
   01CF 00                  398 	.byte	0
   01D0 88                  399 	.byte	-120
   01D1 00                  400 	.byte	0
   01D2 00                  401 	.byte	0
   01D3 88                  402 	.byte	-120
   01D4 00                  403 	.byte	0
   01D5 00                  404 	.byte	0
   01D6 88                  405 	.byte	-120
   01D7 00                  406 	.byte	0
   01D8 FF                  407 	.byte	-1
   01D9 9C                  408 	.byte	-100
   01DA CE                  409 	.byte	-50
   01DB FF                  410 	.byte	-1
   01DC 00                  411 	.byte	0
   01DD C4                  412 	.byte	-60
   01DE FF                  413 	.byte	-1
   01DF 00                  414 	.byte	0
   01E0 B5                  415 	.byte	-75
   01E1 FF                  416 	.byte	-1
   01E2 32                  417 	.byte	50
   01E3 B5                  418 	.byte	-75
   01E4 FF                  419 	.byte	-1
   01E5 32                  420 	.byte	50
   01E6 B5                  421 	.byte	-75
   01E7 FF                  422 	.byte	-1
   01E8 32                  423 	.byte	50
   01E9 00                  424 	.byte	0
   01EA FF                  425 	.byte	-1
   01EB 1E                  426 	.byte	30
   01EC C4                  427 	.byte	-60
   01ED FF                  428 	.byte	-1
   01EE 50                  429 	.byte	80
   01EF D8                  430 	.byte	-40
   01F0 FF                  431 	.byte	-1
   01F1 3C                  432 	.byte	60
   01F2 00                  433 	.byte	0
   01F3 FF                  434 	.byte	-1
   01F4 14                  435 	.byte	20
   01F5 14                  436 	.byte	20
   01F6 FF                  437 	.byte	-1
   01F7 0F                  438 	.byte	15
   01F8 1E                  439 	.byte	30
   01F9 FF                  440 	.byte	-1
   01FA EC                  441 	.byte	-20
   01FB 32                  442 	.byte	50
   01FC 00                  443 	.byte	0
   01FD 14                  444 	.byte	20
   01FE CE                  445 	.byte	-50
   01FF FF                  446 	.byte	-1
   0200 1E                  447 	.byte	30
   0201 E2                  448 	.byte	-30
   0202 FF                  449 	.byte	-1
   0203 46                  450 	.byte	70
   0204 00                  451 	.byte	0
   0205 FF                  452 	.byte	-1
   0206 1E                  453 	.byte	30
   0207 0A                  454 	.byte	10
   0208 FF                  455 	.byte	-1
   0209 D8                  456 	.byte	-40
   020A 46                  457 	.byte	70
   020B 00                  458 	.byte	0
   020C 28                  459 	.byte	40
   020D BA                  460 	.byte	-70
   020E FF                  461 	.byte	-1
   020F 46                  462 	.byte	70
   0210 00                  463 	.byte	0
   0211 FF                  464 	.byte	-1
   0212 32                  465 	.byte	50
   0213 19                  466 	.byte	25
   0214 FF                  467 	.byte	-1
   0215 00                  468 	.byte	0
   0216 3C                  469 	.byte	60
   0217 FF                  470 	.byte	-1
   0218 CE                  471 	.byte	-50
   0219 19                  472 	.byte	25
   021A FF                  473 	.byte	-1
   021B E7                  474 	.byte	-25
   021C 32                  475 	.byte	50
   021D 00                  476 	.byte	0
   021E 4B                  477 	.byte	75
   021F B5                  478 	.byte	-75
   0220 FF                  479 	.byte	-1
   0221 3C                  480 	.byte	60
   0222 1E                  481 	.byte	30
   0223 FF                  482 	.byte	-1
   0224 3C                  483 	.byte	60
   0225 1E                  484 	.byte	30
   0226 FF                  485 	.byte	-1
   0227 3C                  486 	.byte	60
   0228 32                  487 	.byte	50
   0229 FF                  488 	.byte	-1
   022A 00                  489 	.byte	0
   022B 32                  490 	.byte	50
   022C FF                  491 	.byte	-1
   022D 28                  492 	.byte	40
   022E 32                  493 	.byte	50
   022F FF                  494 	.byte	-1
   0230 1E                  495 	.byte	30
   0231 64                  496 	.byte	100
   0232 FF                  497 	.byte	-1
   0233 E2                  498 	.byte	-30
   0234 3C                  499 	.byte	60
   0235 FF                  500 	.byte	-1
   0236 E2                  501 	.byte	-30
   0237 41                  502 	.byte	65
   0238 01                  503 	.byte	1
   0239 00                  504 	.byte	0
   023A 00                  505 	.byte	0
                            506 	.globl	_Positions_Arrow
   023B                     507 _Positions_Arrow:
   023B 00                  508 	.byte	0
   023C 00                  509 	.byte	0
   023D 3C                  510 	.byte	60
   023E AB                  511 	.byte	-85
   023F 28                  512 	.byte	40
   0240 AB                  513 	.byte	-85
   0241 14                  514 	.byte	20
   0242 AB                  515 	.byte	-85
                            516 	.globl	_arrow
   0243                     517 _arrow:
   0243 00                  518 	.byte	0
   0244 04                  519 	.byte	4
   0245 00                  520 	.byte	0
   0246 FF                  521 	.byte	-1
   0247 F6                  522 	.byte	-10
   0248 0A                  523 	.byte	10
   0249 FF                  524 	.byte	-1
   024A F6                  525 	.byte	-10
   024B F6                  526 	.byte	-10
   024C 00                  527 	.byte	0
   024D 0A                  528 	.byte	10
   024E 0A                  529 	.byte	10
   024F FF                  530 	.byte	-1
   0250 00                  531 	.byte	0
   0251 EC                  532 	.byte	-20
   0252 01                  533 	.byte	1
   0253 00                  534 	.byte	0
   0254 00                  535 	.byte	0
                            536 	.globl	_lifeline3
                            537 	.area	.data
   C880                     538 _lifeline3:
   C880 00                  539 	.byte	0
   C881 00                  540 	.byte	0
   C882 1E                  541 	.byte	30
   C883 0F                  542 	.byte	15
   C884 0A                  543 	.byte	10
   C885 F1                  544 	.byte	-15
   C886 0A                  545 	.byte	10
   C887 00                  546 	.byte	0
   C888 0F                  547 	.byte	15
   C889 F1                  548 	.byte	-15
   C88A 0A                  549 	.byte	10
   C88B 2D                  550 	.byte	45
   C88C 0F                  551 	.byte	15
   C88D C9                  552 	.byte	-55
   C88E 0F                  553 	.byte	15
   C88F 19                  554 	.byte	25
   C890 0F                  555 	.byte	15
   C891 00                  556 	.byte	0
   C892 0F                  557 	.byte	15
   C893 00                  558 	.byte	0
   C894 1E                  559 	.byte	30
   C895 00                  560 	.byte	0
   C896 1E                  561 	.byte	30
   C897 00                  562 	.byte	0
   C898 1E                  563 	.byte	30
   C899 0F                  564 	.byte	15
   C89A 0A                  565 	.byte	10
   C89B F1                  566 	.byte	-15
   C89C 0A                  567 	.byte	10
   C89D 00                  568 	.byte	0
   C89E 0F                  569 	.byte	15
   C89F F1                  570 	.byte	-15
   C8A0 0A                  571 	.byte	10
   C8A1 2D                  572 	.byte	45
   C8A2 0F                  573 	.byte	15
   C8A3 C9                  574 	.byte	-55
   C8A4 0F                  575 	.byte	15
   C8A5 19                  576 	.byte	25
   C8A6 0F                  577 	.byte	15
   C8A7 00                  578 	.byte	0
   C8A8 0F                  579 	.byte	15
   C8A9 00                  580 	.byte	0
   C8AA 1E                  581 	.byte	30
   C8AB 00                  582 	.byte	0
   C8AC 1E                  583 	.byte	30
   C8AD 00                  584 	.byte	0
   C8AE 1E                  585 	.byte	30
   C8AF 0F                  586 	.byte	15
   C8B0 0A                  587 	.byte	10
   C8B1 F1                  588 	.byte	-15
   C8B2 0A                  589 	.byte	10
   C8B3 00                  590 	.byte	0
   C8B4 0F                  591 	.byte	15
   C8B5 F1                  592 	.byte	-15
   C8B6 0A                  593 	.byte	10
   C8B7 2D                  594 	.byte	45
   C8B8 0F                  595 	.byte	15
   C8B9 C9                  596 	.byte	-55
   C8BA 0F                  597 	.byte	15
   C8BB 19                  598 	.byte	25
   C8BC 0F                  599 	.byte	15
   C8BD 00                  600 	.byte	0
   C8BE 0F                  601 	.byte	15
   C8BF 00                  602 	.byte	0
   C8C0 1E                  603 	.byte	30
   C8C1 00                  604 	.byte	0
   C8C2 1E                  605 	.byte	30
   C8C3 00 00               606 	.word	0
   C8C5 00                  607 	.byte	0
                            608 	.area	.bss
                            609 	.globl	_display_game_over_state
   CADC                     610 _display_game_over_state:	.blkb	2
                            611 	.globl	_levelselection
                            612 	.area	.data
   C8C6                     613 _levelselection:
   C8C6 01                  614 	.byte	1
                            615 	.area	.bss
                            616 	.globl	_Level_specific_action
   CADE                     617 _Level_specific_action:	.blkb	2
                            618 	.globl	_execute_game_playing_state
   CAE0                     619 _execute_game_playing_state:	.blkb	2
                            620 	.globl	_move_player
   CAE2                     621 _move_player:	.blkb	2
                            622 	.area	.text
                            623 	.globl	_main
   0255                     624 _main:
   0255 32 7F         [ 5]  625 	leas	-1,s
   0257 6F E4         [ 6]  626 	clr	,s
   0259                     627 L2:
   0259 BD 05 65      [ 8]  628 	jsr	_level_init
   025C BD 06 FE      [ 8]  629 	jsr	_level_play
   025F 6D E4         [ 6]  630 	tst	,s
   0261 27 F6         [ 3]  631 	beq	L2
   0263 E6 E4         [ 4]  632 	ldb	,s
   0265 32 61         [ 5]  633 	leas	1,s
   0267 39            [ 5]  634 	rts
ASxxxx Assembler V05.50  (Motorola 6809)                                Page 1
Hexadecimal [16-Bits]                                 Tue Jul  1 00:49:57 2025

Symbol Table

    .__.$$$.       =   2710 L   |     .__.ABS.       =   0000 G
    .__.CPU.       =   0000 L   |     .__.H$L.       =   0001 L
  2 L2                 01FB R   |   2 _Brainleft         016E GR
  2 _Brainright        00EA GR  |   2 _Gamefield         007A GR
  2 _Level_advance     0000 GR  |   4 _Level_specifi     0002 GR
  2 _Lifelinestruc     0089 GR  |   2 _Lifelinestruc     00A7 GR
  2 _Positions_Arr     01DD GR  |   2 _advancement_c     005C GR
  2 _advancement_p     006B GR  |   2 _arrow             01E5 GR
  2 _cross             0020 GR  |   4 _display_game_     0000 GR
  4 _execute_game_     0004 GR  |     _level_init        **** GX
    _level_play        **** GX  |   3 _levelselectio     0046 GR
  3 _lifeline3         0000 GR  |   2 _main              01F7 GR
  4 _move_player       0006 GR  |   2 _square            002F GR
  2 _square_filled     0041 GR

ASxxxx Assembler V05.50  (Motorola 6809)                                Page 2
Hexadecimal [16-Bits]                                 Tue Jul  1 00:49:57 2025

Area Table

[_CSEG]
   0 _CODE            size    0   flags C080
   2 .text            size  20A   flags  100
   3 .data            size   47   flags  100
   4 .bss             size    8   flags    0
[_DSEG]
   1 _DATA            size    0   flags C0C0

