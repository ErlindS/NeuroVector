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
                            465 	.area	.bss
                            466 	.globl	_display_game_over_state
   C903                     467 _display_game_over_state:	.blkb	2
                            468 	.globl	_CurrentHighscore
   C905                     469 _CurrentHighscore:	.blkb	2
                            470 	.globl	_GameplaySettingsmode
                            471 	.area	.data
   C880                     472 _GameplaySettingsmode:
   C880 01                  473 	.byte	1
                            474 	.area	.bss
                            475 	.globl	_Level_specific_action
   C907                     476 _Level_specific_action:	.blkb	2
                            477 	.globl	_execute_game_playing_state
   C909                     478 _execute_game_playing_state:	.blkb	2
                            479 	.globl	_move_player
   C90B                     480 _move_player:	.blkb	2
                            481 	.area	.text
                            482 	.globl	_main
   0210                     483 _main:
   0210 32 7F         [ 5]  484 	leas	-1,s
   0212                     485 L2:
   0212 BD 04 BB      [ 8]  486 	jsr	_level_init
   0215 BD 05 F9      [ 8]  487 	jsr	_level_play
   0218 6D E4         [ 6]  488 	tst	,s
   021A 27 F6         [ 3]  489 	beq	L2
   021C E6 E4         [ 4]  490 	ldb	,s
   021E 32 61         [ 5]  491 	leas	1,s
   0220 39            [ 5]  492 	rts
ASxxxx Assembler V05.50  (Motorola 6809)                                Page 1
Hexadecimal [16-Bits]                                 Sun Jun 29 16:55:10 2025

Symbol Table

    .__.$$$.       =   2710 L   |     .__.ABS.       =   0000 G
    .__.CPU.       =   0000 L   |     .__.H$L.       =   0001 L
  2 L2                 01B4 R   |   2 _Brainleft         012B GR
  2 _Brainright        00A7 GR  |   3 _CurrentHighsc     0002 GR
  2 _Gamefield         007A GR  |   4 _GameplaySetti     0000 GR
  2 _Level_advance     0000 GR  |   3 _Level_specifi     0004 GR
  2 _Lifelinestruc     0089 GR  |   2 _Positions_Arr     019A GR
  2 _advancement_c     005C GR  |   2 _advancement_p     006B GR
  2 _arrow             01A0 GR  |   2 _cross             0020 GR
  3 _display_game_     0000 GR  |   3 _execute_game_     0006 GR
    _level_init        **** GX  |     _level_play        **** GX
  2 _main              01B2 GR  |   3 _move_player       0008 GR
  2 _square            002F GR  |   2 _square_filled     0041 GR

ASxxxx Assembler V05.50  (Motorola 6809)                                Page 2
Hexadecimal [16-Bits]                                 Sun Jun 29 16:55:10 2025

Area Table

[_CSEG]
   0 _CODE            size    0   flags C080
   2 .text            size  1C3   flags  100
   3 .bss             size    A   flags    0
   4 .data            size    1   flags  100
[_DSEG]
   1 _DATA            size    0   flags C0C0

