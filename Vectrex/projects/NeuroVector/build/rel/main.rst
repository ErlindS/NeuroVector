                              1 ;;; gcc for m6809 : Mar 17 2019 13:25:32
                              2 ;;; 4.3.6 (gcc6809)
                              3 ;;; ABI version 1
                              4 ;;; -mabi=bx -mint8 -fomit-frame-pointer -O3
                              5 	.module	main.c
                              6 	.globl	_Level_advancement
                              7 	.area	.text
   005D                       8 _Level_advancement:
   005D C4                    9 	.byte	-60
   005E DD                   10 	.byte	-35
   005F C4                   11 	.byte	-60
   0060 E7                   12 	.byte	-25
   0061 C4                   13 	.byte	-60
   0062 F1                   14 	.byte	-15
   0063 C4                   15 	.byte	-60
   0064 FB                   16 	.byte	-5
   0065 C4                   17 	.byte	-60
   0066 05                   18 	.byte	5
   0067 C4                   19 	.byte	-60
   0068 0F                   20 	.byte	15
   0069 C4                   21 	.byte	-60
   006A 19                   22 	.byte	25
   006B C4                   23 	.byte	-60
   006C 23                   24 	.byte	35
   006D BA                   25 	.byte	-70
   006E DD                   26 	.byte	-35
   006F BA                   27 	.byte	-70
   0070 E7                   28 	.byte	-25
   0071 BA                   29 	.byte	-70
   0072 F1                   30 	.byte	-15
   0073 BA                   31 	.byte	-70
   0074 FB                   32 	.byte	-5
   0075 BA                   33 	.byte	-70
   0076 05                   34 	.byte	5
   0077 BA                   35 	.byte	-70
   0078 0F                   36 	.byte	15
   0079 BA                   37 	.byte	-70
   007A 19                   38 	.byte	25
   007B BA                   39 	.byte	-70
   007C 23                   40 	.byte	35
                             41 	.globl	_cross
   007D                      42 _cross:
   007D 00                   43 	.byte	0
   007E 20                   44 	.byte	32
   007F 20                   45 	.byte	32
   0080 FF                   46 	.byte	-1
   0081 E0                   47 	.byte	-32
   0082 E0                   48 	.byte	-32
   0083 00                   49 	.byte	0
   0084 20                   50 	.byte	32
   0085 00                   51 	.byte	0
   0086 FF                   52 	.byte	-1
   0087 E0                   53 	.byte	-32
   0088 20                   54 	.byte	32
   0089 01                   55 	.byte	1
   008A 00                   56 	.byte	0
   008B 00                   57 	.byte	0
                             58 	.globl	_square
   008C                      59 _square:
   008C 00                   60 	.byte	0
   008D 3C                   61 	.byte	60
   008E C4                   62 	.byte	-60
   008F FF                   63 	.byte	-1
   0090 00                   64 	.byte	0
   0091 78                   65 	.byte	120
   0092 FF                   66 	.byte	-1
   0093 88                   67 	.byte	-120
   0094 00                   68 	.byte	0
   0095 FF                   69 	.byte	-1
   0096 00                   70 	.byte	0
   0097 88                   71 	.byte	-120
   0098 FF                   72 	.byte	-1
   0099 78                   73 	.byte	120
   009A 00                   74 	.byte	0
   009B 01                   75 	.byte	1
   009C 00                   76 	.byte	0
   009D 00                   77 	.byte	0
                             78 	.globl	_square_filled
   009E                      79 _square_filled:
   009E 00                   80 	.byte	0
   009F 3C                   81 	.byte	60
   00A0 C4                   82 	.byte	-60
   00A1 FF                   83 	.byte	-1
   00A2 00                   84 	.byte	0
   00A3 78                   85 	.byte	120
   00A4 FF                   86 	.byte	-1
   00A5 88                   87 	.byte	-120
   00A6 00                   88 	.byte	0
   00A7 FF                   89 	.byte	-1
   00A8 00                   90 	.byte	0
   00A9 88                   91 	.byte	-120
   00AA FF                   92 	.byte	-1
   00AB 78                   93 	.byte	120
   00AC 00                   94 	.byte	0
   00AD FF                   95 	.byte	-1
   00AE 88                   96 	.byte	-120
   00AF 78                   97 	.byte	120
   00B0 00                   98 	.byte	0
   00B1 78                   99 	.byte	120
   00B2 00                  100 	.byte	0
   00B3 FF                  101 	.byte	-1
   00B4 88                  102 	.byte	-120
   00B5 88                  103 	.byte	-120
   00B6 01                  104 	.byte	1
   00B7 00                  105 	.byte	0
   00B8 00                  106 	.byte	0
                            107 	.globl	_advancement_cross
   00B9                     108 _advancement_cross:
   00B9 00                  109 	.byte	0
   00BA 10                  110 	.byte	16
   00BB 20                  111 	.byte	32
   00BC FF                  112 	.byte	-1
   00BD E0                  113 	.byte	-32
   00BE E0                  114 	.byte	-32
   00BF 00                  115 	.byte	0
   00C0 20                  116 	.byte	32
   00C1 00                  117 	.byte	0
   00C2 FF                  118 	.byte	-1
   00C3 E0                  119 	.byte	-32
   00C4 20                  120 	.byte	32
   00C5 01                  121 	.byte	1
   00C6 00                  122 	.byte	0
   00C7 00                  123 	.byte	0
                            124 	.globl	_advancement_plus
   00C8                     125 _advancement_plus:
   00C8 00                  126 	.byte	0
   00C9 20                  127 	.byte	32
   00CA 10                  128 	.byte	16
   00CB FF                  129 	.byte	-1
   00CC E0                  130 	.byte	-32
   00CD 00                  131 	.byte	0
   00CE 00                  132 	.byte	0
   00CF 10                  133 	.byte	16
   00D0 10                  134 	.byte	16
   00D1 FF                  135 	.byte	-1
   00D2 00                  136 	.byte	0
   00D3 E0                  137 	.byte	-32
   00D4 01                  138 	.byte	1
   00D5 00                  139 	.byte	0
   00D6 00                  140 	.byte	0
                            141 	.globl	_Gamefield
   00D7                     142 _Gamefield:
   00D7 FF                  143 	.byte	-1
   00D8 88                  144 	.byte	-120
   00D9 00                  145 	.byte	0
   00DA FF                  146 	.byte	-1
   00DB 00                  147 	.byte	0
   00DC 78                  148 	.byte	120
   00DD FF                  149 	.byte	-1
   00DE 78                  150 	.byte	120
   00DF 00                  151 	.byte	0
   00E0 FF                  152 	.byte	-1
   00E1 00                  153 	.byte	0
   00E2 88                  154 	.byte	-120
   00E3 01                  155 	.byte	1
   00E4 00                  156 	.byte	0
   00E5 00                  157 	.byte	0
                            158 	.globl	_Brainright
   00E6                     159 _Brainright:
   00E6 00                  160 	.byte	0
   00E7 88                  161 	.byte	-120
   00E8 78                  162 	.byte	120
   00E9 00                  163 	.byte	0
   00EA 88                  164 	.byte	-120
   00EB 00                  165 	.byte	0
   00EC 00                  166 	.byte	0
   00ED 88                  167 	.byte	-120
   00EE 00                  168 	.byte	0
   00EF 00                  169 	.byte	0
   00F0 88                  170 	.byte	-120
   00F1 00                  171 	.byte	0
   00F2 00                  172 	.byte	0
   00F3 EC                  173 	.byte	-20
   00F4 9C                  174 	.byte	-100
   00F5 00                  175 	.byte	0
   00F6 EC                  176 	.byte	-20
   00F7 9C                  177 	.byte	-100
   00F8 00                  178 	.byte	0
   00F9 EC                  179 	.byte	-20
   00FA BA                  180 	.byte	-70
   00FB FF                  181 	.byte	-1
   00FC 00                  182 	.byte	0
   00FD 64                  183 	.byte	100
   00FE FF                  184 	.byte	-1
   00FF 00                  185 	.byte	0
   0100 64                  186 	.byte	100
   0101 FF                  187 	.byte	-1
   0102 00                  188 	.byte	0
   0103 5A                  189 	.byte	90
   0104 00                  190 	.byte	0
   0105 3C                  191 	.byte	60
   0106 E2                  192 	.byte	-30
   0107 FF                  193 	.byte	-1
   0108 9C                  194 	.byte	-100
   0109 32                  195 	.byte	50
   010A FF                  196 	.byte	-1
   010B 00                  197 	.byte	0
   010C 3C                  198 	.byte	60
   010D FF                  199 	.byte	-1
   010E 00                  200 	.byte	0
   010F 4B                  201 	.byte	75
   0110 FF                  202 	.byte	-1
   0111 32                  203 	.byte	50
   0112 4B                  204 	.byte	75
   0113 FF                  205 	.byte	-1
   0114 32                  206 	.byte	50
   0115 4B                  207 	.byte	75
   0116 FF                  208 	.byte	-1
   0117 32                  209 	.byte	50
   0118 00                  210 	.byte	0
   0119 FF                  211 	.byte	-1
   011A 1E                  212 	.byte	30
   011B 3C                  213 	.byte	60
   011C FF                  214 	.byte	-1
   011D 50                  215 	.byte	80
   011E 28                  216 	.byte	40
   011F FF                  217 	.byte	-1
   0120 3C                  218 	.byte	60
   0121 00                  219 	.byte	0
   0122 FF                  220 	.byte	-1
   0123 14                  221 	.byte	20
   0124 EC                  222 	.byte	-20
   0125 FF                  223 	.byte	-1
   0126 0F                  224 	.byte	15
   0127 E2                  225 	.byte	-30
   0128 FF                  226 	.byte	-1
   0129 EC                  227 	.byte	-20
   012A CE                  228 	.byte	-50
   012B 00                  229 	.byte	0
   012C 14                  230 	.byte	20
   012D 32                  231 	.byte	50
   012E FF                  232 	.byte	-1
   012F 1E                  233 	.byte	30
   0130 1E                  234 	.byte	30
   0131 FF                  235 	.byte	-1
   0132 46                  236 	.byte	70
   0133 00                  237 	.byte	0
   0134 FF                  238 	.byte	-1
   0135 1E                  239 	.byte	30
   0136 F6                  240 	.byte	-10
   0137 FF                  241 	.byte	-1
   0138 D8                  242 	.byte	-40
   0139 BA                  243 	.byte	-70
   013A 00                  244 	.byte	0
   013B 28                  245 	.byte	40
   013C 46                  246 	.byte	70
   013D FF                  247 	.byte	-1
   013E 46                  248 	.byte	70
   013F 00                  249 	.byte	0
   0140 FF                  250 	.byte	-1
   0141 32                  251 	.byte	50
   0142 E7                  252 	.byte	-25
   0143 FF                  253 	.byte	-1
   0144 00                  254 	.byte	0
   0145 C4                  255 	.byte	-60
   0146 FF                  256 	.byte	-1
   0147 CE                  257 	.byte	-50
   0148 E7                  258 	.byte	-25
   0149 FF                  259 	.byte	-1
   014A E7                  260 	.byte	-25
   014B CE                  261 	.byte	-50
   014C 00                  262 	.byte	0
   014D 4B                  263 	.byte	75
   014E 4B                  264 	.byte	75
   014F FF                  265 	.byte	-1
   0150 3C                  266 	.byte	60
   0151 E2                  267 	.byte	-30
   0152 FF                  268 	.byte	-1
   0153 3C                  269 	.byte	60
   0154 E2                  270 	.byte	-30
   0155 FF                  271 	.byte	-1
   0156 3C                  272 	.byte	60
   0157 CE                  273 	.byte	-50
   0158 FF                  274 	.byte	-1
   0159 00                  275 	.byte	0
   015A CE                  276 	.byte	-50
   015B FF                  277 	.byte	-1
   015C 28                  278 	.byte	40
   015D CE                  279 	.byte	-50
   015E FF                  280 	.byte	-1
   015F 1E                  281 	.byte	30
   0160 9C                  282 	.byte	-100
   0161 FF                  283 	.byte	-1
   0162 E2                  284 	.byte	-30
   0163 C4                  285 	.byte	-60
   0164 FF                  286 	.byte	-1
   0165 E2                  287 	.byte	-30
   0166 BF                  288 	.byte	-65
   0167 01                  289 	.byte	1
   0168 00                  290 	.byte	0
   0169 00                  291 	.byte	0
                            292 	.globl	_Brainleft
   016A                     293 _Brainleft:
   016A 00                  294 	.byte	0
   016B 88                  295 	.byte	-120
   016C 88                  296 	.byte	-120
   016D 00                  297 	.byte	0
   016E 88                  298 	.byte	-120
   016F 00                  299 	.byte	0
   0170 00                  300 	.byte	0
   0171 88                  301 	.byte	-120
   0172 00                  302 	.byte	0
   0173 00                  303 	.byte	0
   0174 88                  304 	.byte	-120
   0175 00                  305 	.byte	0
   0176 FF                  306 	.byte	-1
   0177 9C                  307 	.byte	-100
   0178 CE                  308 	.byte	-50
   0179 FF                  309 	.byte	-1
   017A 00                  310 	.byte	0
   017B C4                  311 	.byte	-60
   017C FF                  312 	.byte	-1
   017D 00                  313 	.byte	0
   017E B5                  314 	.byte	-75
   017F FF                  315 	.byte	-1
   0180 32                  316 	.byte	50
   0181 B5                  317 	.byte	-75
   0182 FF                  318 	.byte	-1
   0183 32                  319 	.byte	50
   0184 B5                  320 	.byte	-75
   0185 FF                  321 	.byte	-1
   0186 32                  322 	.byte	50
   0187 00                  323 	.byte	0
   0188 FF                  324 	.byte	-1
   0189 1E                  325 	.byte	30
   018A C4                  326 	.byte	-60
   018B FF                  327 	.byte	-1
   018C 50                  328 	.byte	80
   018D D8                  329 	.byte	-40
   018E FF                  330 	.byte	-1
   018F 3C                  331 	.byte	60
   0190 00                  332 	.byte	0
   0191 FF                  333 	.byte	-1
   0192 14                  334 	.byte	20
   0193 14                  335 	.byte	20
   0194 FF                  336 	.byte	-1
   0195 0F                  337 	.byte	15
   0196 1E                  338 	.byte	30
   0197 FF                  339 	.byte	-1
   0198 EC                  340 	.byte	-20
   0199 32                  341 	.byte	50
   019A 00                  342 	.byte	0
   019B 14                  343 	.byte	20
   019C CE                  344 	.byte	-50
   019D FF                  345 	.byte	-1
   019E 1E                  346 	.byte	30
   019F E2                  347 	.byte	-30
   01A0 FF                  348 	.byte	-1
   01A1 46                  349 	.byte	70
   01A2 00                  350 	.byte	0
   01A3 FF                  351 	.byte	-1
   01A4 1E                  352 	.byte	30
   01A5 0A                  353 	.byte	10
   01A6 FF                  354 	.byte	-1
   01A7 D8                  355 	.byte	-40
   01A8 46                  356 	.byte	70
   01A9 00                  357 	.byte	0
   01AA 28                  358 	.byte	40
   01AB BA                  359 	.byte	-70
   01AC FF                  360 	.byte	-1
   01AD 46                  361 	.byte	70
   01AE 00                  362 	.byte	0
   01AF FF                  363 	.byte	-1
   01B0 32                  364 	.byte	50
   01B1 19                  365 	.byte	25
   01B2 FF                  366 	.byte	-1
   01B3 00                  367 	.byte	0
   01B4 3C                  368 	.byte	60
   01B5 FF                  369 	.byte	-1
   01B6 CE                  370 	.byte	-50
   01B7 19                  371 	.byte	25
   01B8 FF                  372 	.byte	-1
   01B9 E7                  373 	.byte	-25
   01BA 32                  374 	.byte	50
   01BB 00                  375 	.byte	0
   01BC 4B                  376 	.byte	75
   01BD B5                  377 	.byte	-75
   01BE FF                  378 	.byte	-1
   01BF 3C                  379 	.byte	60
   01C0 1E                  380 	.byte	30
   01C1 FF                  381 	.byte	-1
   01C2 3C                  382 	.byte	60
   01C3 1E                  383 	.byte	30
   01C4 FF                  384 	.byte	-1
   01C5 3C                  385 	.byte	60
   01C6 32                  386 	.byte	50
   01C7 FF                  387 	.byte	-1
   01C8 00                  388 	.byte	0
   01C9 32                  389 	.byte	50
   01CA FF                  390 	.byte	-1
   01CB 28                  391 	.byte	40
   01CC 32                  392 	.byte	50
   01CD FF                  393 	.byte	-1
   01CE 1E                  394 	.byte	30
   01CF 64                  395 	.byte	100
   01D0 FF                  396 	.byte	-1
   01D1 E2                  397 	.byte	-30
   01D2 3C                  398 	.byte	60
   01D3 FF                  399 	.byte	-1
   01D4 E2                  400 	.byte	-30
   01D5 41                  401 	.byte	65
   01D6 01                  402 	.byte	1
   01D7 00                  403 	.byte	0
   01D8 00                  404 	.byte	0
                            405 	.globl	_fullbrain
   01D9                     406 _fullbrain:
   01D9 00                  407 	.byte	0
   01DA 50                  408 	.byte	80
   01DB 00                  409 	.byte	0
   01DC 00                  410 	.byte	0
   01DD 88                  411 	.byte	-120
   01DE 78                  412 	.byte	120
   01DF 00                  413 	.byte	0
   01E0 88                  414 	.byte	-120
   01E1 00                  415 	.byte	0
   01E2 00                  416 	.byte	0
   01E3 88                  417 	.byte	-120
   01E4 00                  418 	.byte	0
   01E5 00                  419 	.byte	0
   01E6 88                  420 	.byte	-120
   01E7 00                  421 	.byte	0
   01E8 00                  422 	.byte	0
   01E9 EC                  423 	.byte	-20
   01EA 9C                  424 	.byte	-100
   01EB 00                  425 	.byte	0
   01EC EC                  426 	.byte	-20
   01ED 9C                  427 	.byte	-100
   01EE 00                  428 	.byte	0
   01EF EC                  429 	.byte	-20
   01F0 BA                  430 	.byte	-70
   01F1 FF                  431 	.byte	-1
   01F2 00                  432 	.byte	0
   01F3 64                  433 	.byte	100
   01F4 FF                  434 	.byte	-1
   01F5 00                  435 	.byte	0
   01F6 64                  436 	.byte	100
   01F7 FF                  437 	.byte	-1
   01F8 00                  438 	.byte	0
   01F9 5A                  439 	.byte	90
   01FA 00                  440 	.byte	0
   01FB 3C                  441 	.byte	60
   01FC E2                  442 	.byte	-30
   01FD FF                  443 	.byte	-1
   01FE 9C                  444 	.byte	-100
   01FF 32                  445 	.byte	50
   0200 FF                  446 	.byte	-1
   0201 00                  447 	.byte	0
   0202 3C                  448 	.byte	60
   0203 FF                  449 	.byte	-1
   0204 00                  450 	.byte	0
   0205 4B                  451 	.byte	75
   0206 FF                  452 	.byte	-1
   0207 32                  453 	.byte	50
   0208 4B                  454 	.byte	75
   0209 FF                  455 	.byte	-1
   020A 32                  456 	.byte	50
   020B 4B                  457 	.byte	75
   020C FF                  458 	.byte	-1
   020D 32                  459 	.byte	50
   020E 00                  460 	.byte	0
   020F FF                  461 	.byte	-1
   0210 1E                  462 	.byte	30
   0211 3C                  463 	.byte	60
   0212 FF                  464 	.byte	-1
   0213 50                  465 	.byte	80
   0214 28                  466 	.byte	40
   0215 FF                  467 	.byte	-1
   0216 3C                  468 	.byte	60
   0217 00                  469 	.byte	0
   0218 FF                  470 	.byte	-1
   0219 14                  471 	.byte	20
   021A EC                  472 	.byte	-20
   021B FF                  473 	.byte	-1
   021C 0F                  474 	.byte	15
   021D E2                  475 	.byte	-30
   021E FF                  476 	.byte	-1
   021F EC                  477 	.byte	-20
   0220 CE                  478 	.byte	-50
   0221 00                  479 	.byte	0
   0222 14                  480 	.byte	20
   0223 32                  481 	.byte	50
   0224 FF                  482 	.byte	-1
   0225 1E                  483 	.byte	30
   0226 1E                  484 	.byte	30
   0227 FF                  485 	.byte	-1
   0228 46                  486 	.byte	70
   0229 00                  487 	.byte	0
   022A FF                  488 	.byte	-1
   022B 1E                  489 	.byte	30
   022C F6                  490 	.byte	-10
   022D FF                  491 	.byte	-1
   022E D8                  492 	.byte	-40
   022F BA                  493 	.byte	-70
   0230 00                  494 	.byte	0
   0231 28                  495 	.byte	40
   0232 46                  496 	.byte	70
   0233 FF                  497 	.byte	-1
   0234 46                  498 	.byte	70
   0235 00                  499 	.byte	0
   0236 FF                  500 	.byte	-1
   0237 32                  501 	.byte	50
   0238 E7                  502 	.byte	-25
   0239 FF                  503 	.byte	-1
   023A 00                  504 	.byte	0
   023B C4                  505 	.byte	-60
   023C FF                  506 	.byte	-1
   023D CE                  507 	.byte	-50
   023E E7                  508 	.byte	-25
   023F FF                  509 	.byte	-1
   0240 E7                  510 	.byte	-25
   0241 CE                  511 	.byte	-50
   0242 00                  512 	.byte	0
   0243 4B                  513 	.byte	75
   0244 4B                  514 	.byte	75
   0245 FF                  515 	.byte	-1
   0246 3C                  516 	.byte	60
   0247 E2                  517 	.byte	-30
   0248 FF                  518 	.byte	-1
   0249 3C                  519 	.byte	60
   024A E2                  520 	.byte	-30
   024B FF                  521 	.byte	-1
   024C 3C                  522 	.byte	60
   024D CE                  523 	.byte	-50
   024E FF                  524 	.byte	-1
   024F 00                  525 	.byte	0
   0250 CE                  526 	.byte	-50
   0251 FF                  527 	.byte	-1
   0252 28                  528 	.byte	40
   0253 CE                  529 	.byte	-50
   0254 FF                  530 	.byte	-1
   0255 1E                  531 	.byte	30
   0256 9C                  532 	.byte	-100
   0257 FF                  533 	.byte	-1
   0258 E2                  534 	.byte	-30
   0259 C4                  535 	.byte	-60
   025A FF                  536 	.byte	-1
   025B E2                  537 	.byte	-30
   025C BF                  538 	.byte	-65
   025D FF                  539 	.byte	-1
   025E 1E                  540 	.byte	30
   025F BF                  541 	.byte	-65
   0260 FF                  542 	.byte	-1
   0261 1E                  543 	.byte	30
   0262 C4                  544 	.byte	-60
   0263 FF                  545 	.byte	-1
   0264 E2                  546 	.byte	-30
   0265 9C                  547 	.byte	-100
   0266 FF                  548 	.byte	-1
   0267 D8                  549 	.byte	-40
   0268 CE                  550 	.byte	-50
   0269 FF                  551 	.byte	-1
   026A 00                  552 	.byte	0
   026B CE                  553 	.byte	-50
   026C FF                  554 	.byte	-1
   026D C4                  555 	.byte	-60
   026E CE                  556 	.byte	-50
   026F FF                  557 	.byte	-1
   0270 C4                  558 	.byte	-60
   0271 E2                  559 	.byte	-30
   0272 FF                  560 	.byte	-1
   0273 C4                  561 	.byte	-60
   0274 E2                  562 	.byte	-30
   0275 00                  563 	.byte	0
   0276 B5                  564 	.byte	-75
   0277 4B                  565 	.byte	75
   0278 FF                  566 	.byte	-1
   0279 19                  567 	.byte	25
   027A CE                  568 	.byte	-50
   027B FF                  569 	.byte	-1
   027C 32                  570 	.byte	50
   027D E7                  571 	.byte	-25
   027E FF                  572 	.byte	-1
   027F 00                  573 	.byte	0
   0280 C4                  574 	.byte	-60
   0281 FF                  575 	.byte	-1
   0282 CE                  576 	.byte	-50
   0283 E7                  577 	.byte	-25
   0284 FF                  578 	.byte	-1
   0285 BA                  579 	.byte	-70
   0286 00                  580 	.byte	0
   0287 00                  581 	.byte	0
   0288 D8                  582 	.byte	-40
   0289 46                  583 	.byte	70
   028A FF                  584 	.byte	-1
   028B 28                  585 	.byte	40
   028C BA                  586 	.byte	-70
   028D FF                  587 	.byte	-1
   028E E2                  588 	.byte	-30
   028F F6                  589 	.byte	-10
   0290 FF                  590 	.byte	-1
   0291 BA                  591 	.byte	-70
   0292 00                  592 	.byte	0
   0293 FF                  593 	.byte	-1
   0294 E2                  594 	.byte	-30
   0295 1E                  595 	.byte	30
   0296 00                  596 	.byte	0
   0297 EC                  597 	.byte	-20
   0298 32                  598 	.byte	50
   0299 FF                  599 	.byte	-1
   029A 14                  600 	.byte	20
   029B CE                  601 	.byte	-50
   029C FF                  602 	.byte	-1
   029D F1                  603 	.byte	-15
   029E E2                  604 	.byte	-30
   029F FF                  605 	.byte	-1
   02A0 EC                  606 	.byte	-20
   02A1 EC                  607 	.byte	-20
   02A2 FF                  608 	.byte	-1
   02A3 C4                  609 	.byte	-60
   02A4 00                  610 	.byte	0
   02A5 FF                  611 	.byte	-1
   02A6 B0                  612 	.byte	-80
   02A7 28                  613 	.byte	40
   02A8 FF                  614 	.byte	-1
   02A9 E2                  615 	.byte	-30
   02AA 3C                  616 	.byte	60
   02AB FF                  617 	.byte	-1
   02AC CE                  618 	.byte	-50
   02AD 00                  619 	.byte	0
   02AE FF                  620 	.byte	-1
   02AF CE                  621 	.byte	-50
   02B0 4B                  622 	.byte	75
   02B1 FF                  623 	.byte	-1
   02B2 CE                  624 	.byte	-50
   02B3 4B                  625 	.byte	75
   02B4 FF                  626 	.byte	-1
   02B5 00                  627 	.byte	0
   02B6 4B                  628 	.byte	75
   02B7 FF                  629 	.byte	-1
   02B8 00                  630 	.byte	0
   02B9 3C                  631 	.byte	60
   02BA FF                  632 	.byte	-1
   02BB 64                  633 	.byte	100
   02BC 32                  634 	.byte	50
   02BD 00                  635 	.byte	0
   02BE 78                  636 	.byte	120
   02BF 00                  637 	.byte	0
   02C0 00                  638 	.byte	0
   02C1 78                  639 	.byte	120
   02C2 00                  640 	.byte	0
   02C3 00                  641 	.byte	0
   02C4 78                  642 	.byte	120
   02C5 00                  643 	.byte	0
   02C6 00                  644 	.byte	0
   02C7 78                  645 	.byte	120
   02C8 78                  646 	.byte	120
   02C9 01                  647 	.byte	1
   02CA 00                  648 	.byte	0
   02CB 00                  649 	.byte	0
                            650 	.globl	_position_arrows
   02CC                     651 _position_arrows:
   02CC 00                  652 	.byte	0
   02CD 00                  653 	.byte	0
   02CE 3C                  654 	.byte	60
   02CF AB                  655 	.byte	-85
   02D0 28                  656 	.byte	40
   02D1 AB                  657 	.byte	-85
   02D2 14                  658 	.byte	20
   02D3 AB                  659 	.byte	-85
                            660 	.globl	_arrow
   02D4                     661 _arrow:
   02D4 00                  662 	.byte	0
   02D5 04                  663 	.byte	4
   02D6 00                  664 	.byte	0
   02D7 FF                  665 	.byte	-1
   02D8 F6                  666 	.byte	-10
   02D9 0A                  667 	.byte	10
   02DA FF                  668 	.byte	-1
   02DB F6                  669 	.byte	-10
   02DC F6                  670 	.byte	-10
   02DD 00                  671 	.byte	0
   02DE 0A                  672 	.byte	10
   02DF 0A                  673 	.byte	10
   02E0 FF                  674 	.byte	-1
   02E1 00                  675 	.byte	0
   02E2 EC                  676 	.byte	-20
   02E3 01                  677 	.byte	1
   02E4 00                  678 	.byte	0
   02E5 00                  679 	.byte	0
                            680 	.area	.bss
                            681 	.globl	_display_execute_game_over_state_state
   C939                     682 _display_execute_game_over_state_state:	.blkb	2
                            683 	.globl	_level_specific_action
   C93B                     684 _level_specific_action:	.blkb	2
                            685 	.globl	_execute_game_playing_state
   C93D                     686 _execute_game_playing_state:	.blkb	2
                            687 	.area	.text
                            688 	.globl	_main
   02E6                     689 _main:
   02E6 BD 08 CE      [ 8]  690 	jsr	_execute_menu_state
   02E9                     691 L2:
   02E9 BD 0B 03      [ 8]  692 	jsr	_level_play
   02EC 20 FB         [ 3]  693 	bra	L2
ASxxxx Assembler V05.50  (Motorola 6809)                                Page 1
Hexadecimal [16-Bits]                                 Mon Jul 28 12:20:57 2025

Symbol Table

    .__.$$$.       =   2710 L   |     .__.ABS.       =   0000 G
    .__.CPU.       =   0000 L   |     .__.H$L.       =   0001 L
  2 L2                 028C R   |   2 _Brainleft         010D GR
  2 _Brainright        0089 GR  |   2 _Gamefield         007A GR
  2 _Level_advance     0000 GR  |   2 _advancement_c     005C GR
  2 _advancement_p     006B GR  |   2 _arrow             0277 GR
  2 _cross             0020 GR  |   3 _display_execu     0000 GR
  3 _execute_game_     0004 GR  |     _execute_menu_     **** GX
  2 _fullbrain         017C GR  |     _level_play        **** GX
  3 _level_specifi     0002 GR  |   2 _main              0289 GR
  2 _position_arro     026F GR  |   2 _square            002F GR
  2 _square_filled     0041 GR

ASxxxx Assembler V05.50  (Motorola 6809)                                Page 2
Hexadecimal [16-Bits]                                 Mon Jul 28 12:20:57 2025

Area Table

[_CSEG]
   0 _CODE            size    0   flags C080
   2 .text            size  291   flags  100
   3 .bss             size    6   flags    0
[_DSEG]
   1 _DATA            size    0   flags C0C0

