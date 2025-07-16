                              1 ;;; gcc for m6809 : Mar 17 2019 13:25:32
                              2 ;;; 4.3.6 (gcc6809)
                              3 ;;; ABI version 1
                              4 ;;; -mabi=bx -mint8 -fomit-frame-pointer -O2
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
                            158 	.globl	_Lifelinestruct
   00E6                     159 _Lifelinestruct:
   00E6 FF                  160 	.byte	-1
   00E7 00                  161 	.byte	0
   00E8 1E                  162 	.byte	30
   00E9 FF                  163 	.byte	-1
   00EA 0F                  164 	.byte	15
   00EB 0A                  165 	.byte	10
   00EC FF                  166 	.byte	-1
   00ED F1                  167 	.byte	-15
   00EE 0A                  168 	.byte	10
   00EF FF                  169 	.byte	-1
   00F0 00                  170 	.byte	0
   00F1 0F                  171 	.byte	15
   00F2 FF                  172 	.byte	-1
   00F3 F1                  173 	.byte	-15
   00F4 0A                  174 	.byte	10
   00F5 FF                  175 	.byte	-1
   00F6 2D                  176 	.byte	45
   00F7 0F                  177 	.byte	15
   00F8 FF                  178 	.byte	-1
   00F9 C9                  179 	.byte	-55
   00FA 0F                  180 	.byte	15
   00FB FF                  181 	.byte	-1
   00FC 19                  182 	.byte	25
   00FD 0F                  183 	.byte	15
   00FE FF                  184 	.byte	-1
   00FF 00                  185 	.byte	0
   0100 0F                  186 	.byte	15
   0101 01                  187 	.byte	1
   0102 00                  188 	.byte	0
   0103 00                  189 	.byte	0
                            190 	.globl	_Brainright
   0104                     191 _Brainright:
   0104 00                  192 	.byte	0
   0105 88                  193 	.byte	-120
   0106 78                  194 	.byte	120
   0107 00                  195 	.byte	0
   0108 88                  196 	.byte	-120
   0109 00                  197 	.byte	0
   010A 00                  198 	.byte	0
   010B 88                  199 	.byte	-120
   010C 00                  200 	.byte	0
   010D 00                  201 	.byte	0
   010E 88                  202 	.byte	-120
   010F 00                  203 	.byte	0
   0110 00                  204 	.byte	0
   0111 EC                  205 	.byte	-20
   0112 9C                  206 	.byte	-100
   0113 00                  207 	.byte	0
   0114 EC                  208 	.byte	-20
   0115 9C                  209 	.byte	-100
   0116 00                  210 	.byte	0
   0117 EC                  211 	.byte	-20
   0118 BA                  212 	.byte	-70
   0119 FF                  213 	.byte	-1
   011A 00                  214 	.byte	0
   011B 64                  215 	.byte	100
   011C FF                  216 	.byte	-1
   011D 00                  217 	.byte	0
   011E 64                  218 	.byte	100
   011F FF                  219 	.byte	-1
   0120 00                  220 	.byte	0
   0121 5A                  221 	.byte	90
   0122 00                  222 	.byte	0
   0123 3C                  223 	.byte	60
   0124 E2                  224 	.byte	-30
   0125 FF                  225 	.byte	-1
   0126 9C                  226 	.byte	-100
   0127 32                  227 	.byte	50
   0128 FF                  228 	.byte	-1
   0129 00                  229 	.byte	0
   012A 3C                  230 	.byte	60
   012B FF                  231 	.byte	-1
   012C 00                  232 	.byte	0
   012D 4B                  233 	.byte	75
   012E FF                  234 	.byte	-1
   012F 32                  235 	.byte	50
   0130 4B                  236 	.byte	75
   0131 FF                  237 	.byte	-1
   0132 32                  238 	.byte	50
   0133 4B                  239 	.byte	75
   0134 FF                  240 	.byte	-1
   0135 32                  241 	.byte	50
   0136 00                  242 	.byte	0
   0137 FF                  243 	.byte	-1
   0138 1E                  244 	.byte	30
   0139 3C                  245 	.byte	60
   013A FF                  246 	.byte	-1
   013B 50                  247 	.byte	80
   013C 28                  248 	.byte	40
   013D FF                  249 	.byte	-1
   013E 3C                  250 	.byte	60
   013F 00                  251 	.byte	0
   0140 FF                  252 	.byte	-1
   0141 14                  253 	.byte	20
   0142 EC                  254 	.byte	-20
   0143 FF                  255 	.byte	-1
   0144 0F                  256 	.byte	15
   0145 E2                  257 	.byte	-30
   0146 FF                  258 	.byte	-1
   0147 EC                  259 	.byte	-20
   0148 CE                  260 	.byte	-50
   0149 00                  261 	.byte	0
   014A 14                  262 	.byte	20
   014B 32                  263 	.byte	50
   014C FF                  264 	.byte	-1
   014D 1E                  265 	.byte	30
   014E 1E                  266 	.byte	30
   014F FF                  267 	.byte	-1
   0150 46                  268 	.byte	70
   0151 00                  269 	.byte	0
   0152 FF                  270 	.byte	-1
   0153 1E                  271 	.byte	30
   0154 F6                  272 	.byte	-10
   0155 FF                  273 	.byte	-1
   0156 D8                  274 	.byte	-40
   0157 BA                  275 	.byte	-70
   0158 00                  276 	.byte	0
   0159 28                  277 	.byte	40
   015A 46                  278 	.byte	70
   015B FF                  279 	.byte	-1
   015C 46                  280 	.byte	70
   015D 00                  281 	.byte	0
   015E FF                  282 	.byte	-1
   015F 32                  283 	.byte	50
   0160 E7                  284 	.byte	-25
   0161 FF                  285 	.byte	-1
   0162 00                  286 	.byte	0
   0163 C4                  287 	.byte	-60
   0164 FF                  288 	.byte	-1
   0165 CE                  289 	.byte	-50
   0166 E7                  290 	.byte	-25
   0167 FF                  291 	.byte	-1
   0168 E7                  292 	.byte	-25
   0169 CE                  293 	.byte	-50
   016A 00                  294 	.byte	0
   016B 4B                  295 	.byte	75
   016C 4B                  296 	.byte	75
   016D FF                  297 	.byte	-1
   016E 3C                  298 	.byte	60
   016F E2                  299 	.byte	-30
   0170 FF                  300 	.byte	-1
   0171 3C                  301 	.byte	60
   0172 E2                  302 	.byte	-30
   0173 FF                  303 	.byte	-1
   0174 3C                  304 	.byte	60
   0175 CE                  305 	.byte	-50
   0176 FF                  306 	.byte	-1
   0177 00                  307 	.byte	0
   0178 CE                  308 	.byte	-50
   0179 FF                  309 	.byte	-1
   017A 28                  310 	.byte	40
   017B CE                  311 	.byte	-50
   017C FF                  312 	.byte	-1
   017D 1E                  313 	.byte	30
   017E 9C                  314 	.byte	-100
   017F FF                  315 	.byte	-1
   0180 E2                  316 	.byte	-30
   0181 C4                  317 	.byte	-60
   0182 FF                  318 	.byte	-1
   0183 E2                  319 	.byte	-30
   0184 BF                  320 	.byte	-65
   0185 01                  321 	.byte	1
   0186 00                  322 	.byte	0
   0187 00                  323 	.byte	0
                            324 	.globl	_Brainleft
   0188                     325 _Brainleft:
   0188 00                  326 	.byte	0
   0189 88                  327 	.byte	-120
   018A 88                  328 	.byte	-120
   018B 00                  329 	.byte	0
   018C 88                  330 	.byte	-120
   018D 00                  331 	.byte	0
   018E 00                  332 	.byte	0
   018F 88                  333 	.byte	-120
   0190 00                  334 	.byte	0
   0191 00                  335 	.byte	0
   0192 88                  336 	.byte	-120
   0193 00                  337 	.byte	0
   0194 FF                  338 	.byte	-1
   0195 9C                  339 	.byte	-100
   0196 CE                  340 	.byte	-50
   0197 FF                  341 	.byte	-1
   0198 00                  342 	.byte	0
   0199 C4                  343 	.byte	-60
   019A FF                  344 	.byte	-1
   019B 00                  345 	.byte	0
   019C B5                  346 	.byte	-75
   019D FF                  347 	.byte	-1
   019E 32                  348 	.byte	50
   019F B5                  349 	.byte	-75
   01A0 FF                  350 	.byte	-1
   01A1 32                  351 	.byte	50
   01A2 B5                  352 	.byte	-75
   01A3 FF                  353 	.byte	-1
   01A4 32                  354 	.byte	50
   01A5 00                  355 	.byte	0
   01A6 FF                  356 	.byte	-1
   01A7 1E                  357 	.byte	30
   01A8 C4                  358 	.byte	-60
   01A9 FF                  359 	.byte	-1
   01AA 50                  360 	.byte	80
   01AB D8                  361 	.byte	-40
   01AC FF                  362 	.byte	-1
   01AD 3C                  363 	.byte	60
   01AE 00                  364 	.byte	0
   01AF FF                  365 	.byte	-1
   01B0 14                  366 	.byte	20
   01B1 14                  367 	.byte	20
   01B2 FF                  368 	.byte	-1
   01B3 0F                  369 	.byte	15
   01B4 1E                  370 	.byte	30
   01B5 FF                  371 	.byte	-1
   01B6 EC                  372 	.byte	-20
   01B7 32                  373 	.byte	50
   01B8 00                  374 	.byte	0
   01B9 14                  375 	.byte	20
   01BA CE                  376 	.byte	-50
   01BB FF                  377 	.byte	-1
   01BC 1E                  378 	.byte	30
   01BD E2                  379 	.byte	-30
   01BE FF                  380 	.byte	-1
   01BF 46                  381 	.byte	70
   01C0 00                  382 	.byte	0
   01C1 FF                  383 	.byte	-1
   01C2 1E                  384 	.byte	30
   01C3 0A                  385 	.byte	10
   01C4 FF                  386 	.byte	-1
   01C5 D8                  387 	.byte	-40
   01C6 46                  388 	.byte	70
   01C7 00                  389 	.byte	0
   01C8 28                  390 	.byte	40
   01C9 BA                  391 	.byte	-70
   01CA FF                  392 	.byte	-1
   01CB 46                  393 	.byte	70
   01CC 00                  394 	.byte	0
   01CD FF                  395 	.byte	-1
   01CE 32                  396 	.byte	50
   01CF 19                  397 	.byte	25
   01D0 FF                  398 	.byte	-1
   01D1 00                  399 	.byte	0
   01D2 3C                  400 	.byte	60
   01D3 FF                  401 	.byte	-1
   01D4 CE                  402 	.byte	-50
   01D5 19                  403 	.byte	25
   01D6 FF                  404 	.byte	-1
   01D7 E7                  405 	.byte	-25
   01D8 32                  406 	.byte	50
   01D9 00                  407 	.byte	0
   01DA 4B                  408 	.byte	75
   01DB B5                  409 	.byte	-75
   01DC FF                  410 	.byte	-1
   01DD 3C                  411 	.byte	60
   01DE 1E                  412 	.byte	30
   01DF FF                  413 	.byte	-1
   01E0 3C                  414 	.byte	60
   01E1 1E                  415 	.byte	30
   01E2 FF                  416 	.byte	-1
   01E3 3C                  417 	.byte	60
   01E4 32                  418 	.byte	50
   01E5 FF                  419 	.byte	-1
   01E6 00                  420 	.byte	0
   01E7 32                  421 	.byte	50
   01E8 FF                  422 	.byte	-1
   01E9 28                  423 	.byte	40
   01EA 32                  424 	.byte	50
   01EB FF                  425 	.byte	-1
   01EC 1E                  426 	.byte	30
   01ED 64                  427 	.byte	100
   01EE FF                  428 	.byte	-1
   01EF E2                  429 	.byte	-30
   01F0 3C                  430 	.byte	60
   01F1 FF                  431 	.byte	-1
   01F2 E2                  432 	.byte	-30
   01F3 41                  433 	.byte	65
   01F4 01                  434 	.byte	1
   01F5 00                  435 	.byte	0
   01F6 00                  436 	.byte	0
                            437 	.globl	_position_arrows
   01F7                     438 _position_arrows:
   01F7 00                  439 	.byte	0
   01F8 00                  440 	.byte	0
   01F9 3C                  441 	.byte	60
   01FA AB                  442 	.byte	-85
   01FB 28                  443 	.byte	40
   01FC AB                  444 	.byte	-85
   01FD 14                  445 	.byte	20
   01FE AB                  446 	.byte	-85
                            447 	.globl	_arrow
   01FF                     448 _arrow:
   01FF 00                  449 	.byte	0
   0200 04                  450 	.byte	4
   0201 00                  451 	.byte	0
   0202 FF                  452 	.byte	-1
   0203 F6                  453 	.byte	-10
   0204 0A                  454 	.byte	10
   0205 FF                  455 	.byte	-1
   0206 F6                  456 	.byte	-10
   0207 F6                  457 	.byte	-10
   0208 00                  458 	.byte	0
   0209 0A                  459 	.byte	10
   020A 0A                  460 	.byte	10
   020B FF                  461 	.byte	-1
   020C 00                  462 	.byte	0
   020D EC                  463 	.byte	-20
   020E 01                  464 	.byte	1
   020F 00                  465 	.byte	0
   0210 00                  466 	.byte	0
                            467 	.area	.bss
                            468 	.globl	_display_execute_game_over_state_state
   C949                     469 _display_execute_game_over_state_state:	.blkb	2
                            470 	.globl	_level_specific_action
   C94B                     471 _level_specific_action:	.blkb	2
                            472 	.globl	_execute_game_playing_state
   C94D                     473 _execute_game_playing_state:	.blkb	2
                            474 	.area	.text
                            475 	.globl	_main
   0211                     476 _main:
   0211 BD 04 EF      [ 8]  477 	jsr	_execute_menu_state
   0214                     478 L2:
   0214 BD 07 6F      [ 8]  479 	jsr	_level_play
   0217 20 FB         [ 3]  480 	bra	L2
ASxxxx Assembler V05.50  (Motorola 6809)                                Page 1
Hexadecimal [16-Bits]                                 Thu Jul 17 00:50:15 2025

Symbol Table

    .__.$$$.       =   2710 L   |     .__.ABS.       =   0000 G
    .__.CPU.       =   0000 L   |     .__.H$L.       =   0001 L
  2 L2                 01B7 R   |   2 _Brainleft         012B GR
  2 _Brainright        00A7 GR  |   2 _Gamefield         007A GR
  2 _Level_advance     0000 GR  |   2 _Lifelinestruc     0089 GR
  2 _advancement_c     005C GR  |   2 _advancement_p     006B GR
  2 _arrow             01A2 GR  |   2 _cross             0020 GR
  3 _display_execu     0000 GR  |   3 _execute_game_     0004 GR
    _execute_menu_     **** GX  |     _level_play        **** GX
  3 _level_specifi     0002 GR  |   2 _main              01B4 GR
  2 _position_arro     019A GR  |   2 _square            002F GR
  2 _square_filled     0041 GR

ASxxxx Assembler V05.50  (Motorola 6809)                                Page 2
Hexadecimal [16-Bits]                                 Thu Jul 17 00:50:15 2025

Area Table

[_CSEG]
   0 _CODE            size    0   flags C080
   2 .text            size  1BC   flags  100
   3 .bss             size    6   flags    0
[_DSEG]
   1 _DATA            size    0   flags C0C0

