                              1 ;;; gcc for m6809 : Mar 17 2019 13:25:32
                              2 ;;; 4.3.6 (gcc6809)
                              3 ;;; ABI version 1
                              4 ;;; -mabi=bx -mint8 -fomit-frame-pointer -O0
                              5 	.module	game.c
                              6 	.globl	_Positions_Cursor
                              7 	.area	.text
   0475                       8 _Positions_Cursor:
   0475 10                    9 	.byte	16
   0476 F0                   10 	.byte	-16
   0477 10                   11 	.byte	16
   0478 00                   12 	.byte	0
   0479 10                   13 	.byte	16
   047A 10                   14 	.byte	16
   047B 00                   15 	.byte	0
   047C F0                   16 	.byte	-16
   047D 00                   17 	.byte	0
   047E 00                   18 	.byte	0
   047F 00                   19 	.byte	0
   0480 10                   20 	.byte	16
   0481 F0                   21 	.byte	-16
   0482 F0                   22 	.byte	-16
   0483 F0                   23 	.byte	-16
   0484 00                   24 	.byte	0
   0485 F0                   25 	.byte	-16
   0486 10                   26 	.byte	16
                             27 	.globl	_Level_advancement
   0487                      28 _Level_advancement:
   0487 C4                   29 	.byte	-60
   0488 DD                   30 	.byte	-35
   0489 C4                   31 	.byte	-60
   048A E7                   32 	.byte	-25
   048B C4                   33 	.byte	-60
   048C F1                   34 	.byte	-15
   048D C4                   35 	.byte	-60
   048E FB                   36 	.byte	-5
   048F C4                   37 	.byte	-60
   0490 05                   38 	.byte	5
   0491 C4                   39 	.byte	-60
   0492 0F                   40 	.byte	15
   0493 C4                   41 	.byte	-60
   0494 19                   42 	.byte	25
   0495 C4                   43 	.byte	-60
   0496 23                   44 	.byte	35
   0497 BA                   45 	.byte	-70
   0498 DD                   46 	.byte	-35
   0499 BA                   47 	.byte	-70
   049A E7                   48 	.byte	-25
   049B BA                   49 	.byte	-70
   049C F1                   50 	.byte	-15
   049D BA                   51 	.byte	-70
   049E FB                   52 	.byte	-5
   049F BA                   53 	.byte	-70
   04A0 05                   54 	.byte	5
   04A1 BA                   55 	.byte	-70
   04A2 0F                   56 	.byte	15
   04A3 BA                   57 	.byte	-70
   04A4 19                   58 	.byte	25
   04A5 BA                   59 	.byte	-70
   04A6 23                   60 	.byte	35
                             61 	.globl	_cross
   04A7                      62 _cross:
   04A7 00                   63 	.byte	0
   04A8 20                   64 	.byte	32
   04A9 20                   65 	.byte	32
   04AA FF                   66 	.byte	-1
   04AB E0                   67 	.byte	-32
   04AC E0                   68 	.byte	-32
   04AD 00                   69 	.byte	0
   04AE 20                   70 	.byte	32
   04AF 00                   71 	.byte	0
   04B0 FF                   72 	.byte	-1
   04B1 E0                   73 	.byte	-32
   04B2 20                   74 	.byte	32
   04B3 01                   75 	.byte	1
   04B4 00                   76 	.byte	0
   04B5 00                   77 	.byte	0
                             78 	.globl	_square
   04B6                      79 _square:
   04B6 00                   80 	.byte	0
   04B7 3C                   81 	.byte	60
   04B8 C4                   82 	.byte	-60
   04B9 FF                   83 	.byte	-1
   04BA 00                   84 	.byte	0
   04BB 78                   85 	.byte	120
   04BC FF                   86 	.byte	-1
   04BD 88                   87 	.byte	-120
   04BE 00                   88 	.byte	0
   04BF FF                   89 	.byte	-1
   04C0 00                   90 	.byte	0
   04C1 88                   91 	.byte	-120
   04C2 FF                   92 	.byte	-1
   04C3 78                   93 	.byte	120
   04C4 00                   94 	.byte	0
   04C5 01                   95 	.byte	1
   04C6 00                   96 	.byte	0
   04C7 00                   97 	.byte	0
                             98 	.globl	_square_filled
   04C8                      99 _square_filled:
   04C8 00                  100 	.byte	0
   04C9 3C                  101 	.byte	60
   04CA C4                  102 	.byte	-60
   04CB FF                  103 	.byte	-1
   04CC 00                  104 	.byte	0
   04CD 78                  105 	.byte	120
   04CE FF                  106 	.byte	-1
   04CF 88                  107 	.byte	-120
   04D0 00                  108 	.byte	0
   04D1 FF                  109 	.byte	-1
   04D2 00                  110 	.byte	0
   04D3 88                  111 	.byte	-120
   04D4 FF                  112 	.byte	-1
   04D5 78                  113 	.byte	120
   04D6 00                  114 	.byte	0
   04D7 FF                  115 	.byte	-1
   04D8 88                  116 	.byte	-120
   04D9 78                  117 	.byte	120
   04DA FF                  118 	.byte	-1
   04DB 78                  119 	.byte	120
   04DC 00                  120 	.byte	0
   04DD FF                  121 	.byte	-1
   04DE 88                  122 	.byte	-120
   04DF 88                  123 	.byte	-120
   04E0 01                  124 	.byte	1
   04E1 00                  125 	.byte	0
   04E2 00                  126 	.byte	0
                            127 	.globl	_advancement_cross
   04E3                     128 _advancement_cross:
   04E3 00                  129 	.byte	0
   04E4 10                  130 	.byte	16
   04E5 20                  131 	.byte	32
   04E6 FF                  132 	.byte	-1
   04E7 E0                  133 	.byte	-32
   04E8 E0                  134 	.byte	-32
   04E9 00                  135 	.byte	0
   04EA 20                  136 	.byte	32
   04EB 00                  137 	.byte	0
   04EC FF                  138 	.byte	-1
   04ED E0                  139 	.byte	-32
   04EE 20                  140 	.byte	32
   04EF 01                  141 	.byte	1
   04F0 00                  142 	.byte	0
   04F1 00                  143 	.byte	0
                            144 	.globl	_advancement_plus
   04F2                     145 _advancement_plus:
   04F2 00                  146 	.byte	0
   04F3 20                  147 	.byte	32
   04F4 10                  148 	.byte	16
   04F5 FF                  149 	.byte	-1
   04F6 E0                  150 	.byte	-32
   04F7 00                  151 	.byte	0
   04F8 00                  152 	.byte	0
   04F9 10                  153 	.byte	16
   04FA 10                  154 	.byte	16
   04FB FF                  155 	.byte	-1
   04FC 00                  156 	.byte	0
   04FD E0                  157 	.byte	-32
   04FE 01                  158 	.byte	1
   04FF 00                  159 	.byte	0
   0500 00                  160 	.byte	0
                            161 	.globl	_Gamefield
   0501                     162 _Gamefield:
   0501 FF                  163 	.byte	-1
   0502 88                  164 	.byte	-120
   0503 00                  165 	.byte	0
   0504 FF                  166 	.byte	-1
   0505 00                  167 	.byte	0
   0506 78                  168 	.byte	120
   0507 FF                  169 	.byte	-1
   0508 78                  170 	.byte	120
   0509 00                  171 	.byte	0
   050A FF                  172 	.byte	-1
   050B 00                  173 	.byte	0
   050C 88                  174 	.byte	-120
   050D 01                  175 	.byte	1
   050E 00                  176 	.byte	0
   050F 00                  177 	.byte	0
                            178 	.globl	_sf
                            179 	.area	.data
   C8A5                     180 _sf:
   C8A5 08                  181 	.byte	8
                            182 	.globl	_Brainright
                            183 	.area	.text
   0510                     184 _Brainright:
   0510 00                  185 	.byte	0
   0511 88                  186 	.byte	-120
   0512 78                  187 	.byte	120
   0513 00                  188 	.byte	0
   0514 88                  189 	.byte	-120
   0515 00                  190 	.byte	0
   0516 00                  191 	.byte	0
   0517 88                  192 	.byte	-120
   0518 00                  193 	.byte	0
   0519 00                  194 	.byte	0
   051A 88                  195 	.byte	-120
   051B 00                  196 	.byte	0
   051C FF                  197 	.byte	-1
   051D 9C                  198 	.byte	-100
   051E 32                  199 	.byte	50
   051F FF                  200 	.byte	-1
   0520 00                  201 	.byte	0
   0521 3C                  202 	.byte	60
   0522 FF                  203 	.byte	-1
   0523 00                  204 	.byte	0
   0524 4B                  205 	.byte	75
   0525 FF                  206 	.byte	-1
   0526 32                  207 	.byte	50
   0527 4B                  208 	.byte	75
   0528 FF                  209 	.byte	-1
   0529 32                  210 	.byte	50
   052A 4B                  211 	.byte	75
   052B FF                  212 	.byte	-1
   052C 32                  213 	.byte	50
   052D 00                  214 	.byte	0
   052E FF                  215 	.byte	-1
   052F 1E                  216 	.byte	30
   0530 3C                  217 	.byte	60
   0531 FF                  218 	.byte	-1
   0532 50                  219 	.byte	80
   0533 28                  220 	.byte	40
   0534 FF                  221 	.byte	-1
   0535 3C                  222 	.byte	60
   0536 00                  223 	.byte	0
   0537 FF                  224 	.byte	-1
   0538 14                  225 	.byte	20
   0539 EC                  226 	.byte	-20
   053A FF                  227 	.byte	-1
   053B 0F                  228 	.byte	15
   053C E2                  229 	.byte	-30
   053D FF                  230 	.byte	-1
   053E EC                  231 	.byte	-20
   053F CE                  232 	.byte	-50
   0540 00                  233 	.byte	0
   0541 14                  234 	.byte	20
   0542 32                  235 	.byte	50
   0543 FF                  236 	.byte	-1
   0544 1E                  237 	.byte	30
   0545 1E                  238 	.byte	30
   0546 FF                  239 	.byte	-1
   0547 46                  240 	.byte	70
   0548 00                  241 	.byte	0
   0549 FF                  242 	.byte	-1
   054A 1E                  243 	.byte	30
   054B F6                  244 	.byte	-10
   054C FF                  245 	.byte	-1
   054D D8                  246 	.byte	-40
   054E BA                  247 	.byte	-70
   054F 00                  248 	.byte	0
   0550 28                  249 	.byte	40
   0551 46                  250 	.byte	70
   0552 FF                  251 	.byte	-1
   0553 46                  252 	.byte	70
   0554 00                  253 	.byte	0
   0555 FF                  254 	.byte	-1
   0556 32                  255 	.byte	50
   0557 E7                  256 	.byte	-25
   0558 FF                  257 	.byte	-1
   0559 00                  258 	.byte	0
   055A C4                  259 	.byte	-60
   055B FF                  260 	.byte	-1
   055C CE                  261 	.byte	-50
   055D E7                  262 	.byte	-25
   055E FF                  263 	.byte	-1
   055F E7                  264 	.byte	-25
   0560 CE                  265 	.byte	-50
   0561 00                  266 	.byte	0
   0562 4B                  267 	.byte	75
   0563 4B                  268 	.byte	75
   0564 FF                  269 	.byte	-1
   0565 3C                  270 	.byte	60
   0566 E2                  271 	.byte	-30
   0567 FF                  272 	.byte	-1
   0568 3C                  273 	.byte	60
   0569 E2                  274 	.byte	-30
   056A FF                  275 	.byte	-1
   056B 3C                  276 	.byte	60
   056C CE                  277 	.byte	-50
   056D FF                  278 	.byte	-1
   056E 00                  279 	.byte	0
   056F CE                  280 	.byte	-50
   0570 FF                  281 	.byte	-1
   0571 28                  282 	.byte	40
   0572 CE                  283 	.byte	-50
   0573 FF                  284 	.byte	-1
   0574 1E                  285 	.byte	30
   0575 9C                  286 	.byte	-100
   0576 FF                  287 	.byte	-1
   0577 E2                  288 	.byte	-30
   0578 C4                  289 	.byte	-60
   0579 FF                  290 	.byte	-1
   057A E2                  291 	.byte	-30
   057B CE                  292 	.byte	-50
   057C 01                  293 	.byte	1
   057D 00                  294 	.byte	0
   057E 00                  295 	.byte	0
                            296 	.globl	_BrainrightDetailed
   057F                     297 _BrainrightDetailed:
   057F 00                  298 	.byte	0
   0580 00                  299 	.byte	0
   0581 78                  300 	.byte	120
   0582 FF                  301 	.byte	-1
   0583 78                  302 	.byte	120
   0584 78                  303 	.byte	120
   0585 FF                  304 	.byte	-1
   0586 3C                  305 	.byte	60
   0587 00                  306 	.byte	0
   0588 FF                  307 	.byte	-1
   0589 78                  308 	.byte	120
   058A 78                  309 	.byte	120
   058B FF                  310 	.byte	-1
   058C 10                  311 	.byte	16
   058D 08                  312 	.byte	8
   058E FF                  313 	.byte	-1
   058F 2D                  314 	.byte	45
   0590 FF                  315 	.byte	-1
   0591 FF                  316 	.byte	-1
   0592 05                  317 	.byte	5
   0593 F6                  318 	.byte	-10
   0594 FF                  319 	.byte	-1
   0595 00                  320 	.byte	0
   0596 F6                  321 	.byte	-10
   0597 FF                  322 	.byte	-1
   0598 FB                  323 	.byte	-5
   0599 F6                  324 	.byte	-10
   059A 01                  325 	.byte	1
   059B 00                  326 	.byte	0
   059C 00                  327 	.byte	0
                            328 	.globl	_Brainleft
   059D                     329 _Brainleft:
   059D 00                  330 	.byte	0
   059E 88                  331 	.byte	-120
   059F 88                  332 	.byte	-120
   05A0 00                  333 	.byte	0
   05A1 88                  334 	.byte	-120
   05A2 00                  335 	.byte	0
   05A3 00                  336 	.byte	0
   05A4 88                  337 	.byte	-120
   05A5 00                  338 	.byte	0
   05A6 00                  339 	.byte	0
   05A7 88                  340 	.byte	-120
   05A8 00                  341 	.byte	0
   05A9 FF                  342 	.byte	-1
   05AA 9C                  343 	.byte	-100
   05AB CE                  344 	.byte	-50
   05AC FF                  345 	.byte	-1
   05AD 00                  346 	.byte	0
   05AE C4                  347 	.byte	-60
   05AF FF                  348 	.byte	-1
   05B0 00                  349 	.byte	0
   05B1 B5                  350 	.byte	-75
   05B2 FF                  351 	.byte	-1
   05B3 32                  352 	.byte	50
   05B4 B5                  353 	.byte	-75
   05B5 FF                  354 	.byte	-1
   05B6 32                  355 	.byte	50
   05B7 B5                  356 	.byte	-75
   05B8 FF                  357 	.byte	-1
   05B9 32                  358 	.byte	50
   05BA 00                  359 	.byte	0
   05BB FF                  360 	.byte	-1
   05BC 1E                  361 	.byte	30
   05BD C4                  362 	.byte	-60
   05BE FF                  363 	.byte	-1
   05BF 50                  364 	.byte	80
   05C0 D8                  365 	.byte	-40
   05C1 FF                  366 	.byte	-1
   05C2 3C                  367 	.byte	60
   05C3 00                  368 	.byte	0
   05C4 FF                  369 	.byte	-1
   05C5 14                  370 	.byte	20
   05C6 14                  371 	.byte	20
   05C7 FF                  372 	.byte	-1
   05C8 0F                  373 	.byte	15
   05C9 1E                  374 	.byte	30
   05CA FF                  375 	.byte	-1
   05CB EC                  376 	.byte	-20
   05CC 32                  377 	.byte	50
   05CD 00                  378 	.byte	0
   05CE 14                  379 	.byte	20
   05CF CE                  380 	.byte	-50
   05D0 FF                  381 	.byte	-1
   05D1 1E                  382 	.byte	30
   05D2 E2                  383 	.byte	-30
   05D3 FF                  384 	.byte	-1
   05D4 46                  385 	.byte	70
   05D5 00                  386 	.byte	0
   05D6 FF                  387 	.byte	-1
   05D7 1E                  388 	.byte	30
   05D8 0A                  389 	.byte	10
   05D9 FF                  390 	.byte	-1
   05DA D8                  391 	.byte	-40
   05DB 46                  392 	.byte	70
   05DC 00                  393 	.byte	0
   05DD 28                  394 	.byte	40
   05DE BA                  395 	.byte	-70
   05DF FF                  396 	.byte	-1
   05E0 46                  397 	.byte	70
   05E1 00                  398 	.byte	0
   05E2 FF                  399 	.byte	-1
   05E3 32                  400 	.byte	50
   05E4 19                  401 	.byte	25
   05E5 FF                  402 	.byte	-1
   05E6 00                  403 	.byte	0
   05E7 3C                  404 	.byte	60
   05E8 FF                  405 	.byte	-1
   05E9 CE                  406 	.byte	-50
   05EA 19                  407 	.byte	25
   05EB FF                  408 	.byte	-1
   05EC E7                  409 	.byte	-25
   05ED 32                  410 	.byte	50
   05EE 00                  411 	.byte	0
   05EF 4B                  412 	.byte	75
   05F0 B5                  413 	.byte	-75
   05F1 FF                  414 	.byte	-1
   05F2 3C                  415 	.byte	60
   05F3 1E                  416 	.byte	30
   05F4 FF                  417 	.byte	-1
   05F5 3C                  418 	.byte	60
   05F6 1E                  419 	.byte	30
   05F7 FF                  420 	.byte	-1
   05F8 3C                  421 	.byte	60
   05F9 32                  422 	.byte	50
   05FA FF                  423 	.byte	-1
   05FB 00                  424 	.byte	0
   05FC 32                  425 	.byte	50
   05FD FF                  426 	.byte	-1
   05FE 28                  427 	.byte	40
   05FF 32                  428 	.byte	50
   0600 FF                  429 	.byte	-1
   0601 1E                  430 	.byte	30
   0602 64                  431 	.byte	100
   0603 FF                  432 	.byte	-1
   0604 E2                  433 	.byte	-30
   0605 3C                  434 	.byte	60
   0606 FF                  435 	.byte	-1
   0607 E2                  436 	.byte	-30
   0608 32                  437 	.byte	50
   0609 01                  438 	.byte	1
   060A 00                  439 	.byte	0
   060B 00                  440 	.byte	0
                            441 	.globl	_Positions_Arrow
   060C                     442 _Positions_Arrow:
   060C 3C                  443 	.byte	60
   060D C9                  444 	.byte	-55
   060E 28                  445 	.byte	40
   060F C9                  446 	.byte	-55
                            447 	.globl	_arrow
   0610                     448 _arrow:
   0610 00                  449 	.byte	0
   0611 04                  450 	.byte	4
   0612 00                  451 	.byte	0
   0613 FF                  452 	.byte	-1
   0614 F6                  453 	.byte	-10
   0615 0A                  454 	.byte	10
   0616 FF                  455 	.byte	-1
   0617 F6                  456 	.byte	-10
   0618 F6                  457 	.byte	-10
   0619 00                  458 	.byte	0
   061A 0A                  459 	.byte	10
   061B 0A                  460 	.byte	10
   061C FF                  461 	.byte	-1
   061D 00                  462 	.byte	0
   061E EC                  463 	.byte	-20
   061F 01                  464 	.byte	1
   0620 00                  465 	.byte	0
   0621 00                  466 	.byte	0
                            467 	.globl	_Displayed_Squares
                            468 	.area	.data
   C8A6                     469 _Displayed_Squares:
   C8A6 10                  470 	.byte	16
   C8A7 F0                  471 	.byte	-16
   C8A8 02 5C               472 	.word	_draw_square
   C8AA 10                  473 	.byte	16
   C8AB 00                  474 	.byte	0
   C8AC 02 5C               475 	.word	_draw_square
   C8AE 10                  476 	.byte	16
   C8AF 10                  477 	.byte	16
   C8B0 02 5C               478 	.word	_draw_square
   C8B2 00                  479 	.byte	0
   C8B3 F0                  480 	.byte	-16
   C8B4 02 5C               481 	.word	_draw_square
   C8B6 00                  482 	.byte	0
   C8B7 00                  483 	.byte	0
   C8B8 02 5C               484 	.word	_draw_square
   C8BA 00                  485 	.byte	0
   C8BB 10                  486 	.byte	16
   C8BC 02 5C               487 	.word	_draw_square
   C8BE F0                  488 	.byte	-16
   C8BF F0                  489 	.byte	-16
   C8C0 02 5C               490 	.word	_draw_square
   C8C2 F0                  491 	.byte	-16
   C8C3 00                  492 	.byte	0
   C8C4 02 5C               493 	.word	_draw_square
   C8C6 F0                  494 	.byte	-16
   C8C7 10                  495 	.byte	16
   C8C8 02 5C               496 	.word	_draw_square
                            497 	.globl	_current_game
   C8CA                     498 _current_game:
   C8CA 00 00 00 00 00 00   499 	.word	0,0,0,0
        00 00
   C8D2 00                  500 	.byte	0
                            501 	.area	.text
                            502 	.globl	_game
   0622                     503 _game:
   0622 BD 0D C5      [ 8]  504 	jsr	_level_init
   0625 BD 0E 6A      [ 8]  505 	jsr	_level_play
   0628 5F            [ 2]  506 	clrb
   0629 39            [ 5]  507 	rts
ASxxxx Assembler V05.50  (Motorola 6809)                                Page 1
Hexadecimal [16-Bits]                                 Fri Jun 13 00:53:11 2025

Symbol Table

    .__.$$$.       =   2710 L   |     .__.ABS.       =   0000 G
    .__.CPU.       =   0000 L   |     .__.H$L.       =   0001 L
  2 _Brainleft         0128 GR  |   2 _Brainright        009B GR
  2 _BrainrightDet     010A GR  |   3 _Displayed_Squ     0001 GR
  2 _Gamefield         008C GR  |   2 _Level_advance     0012 GR
  2 _Positions_Arr     0197 GR  |   2 _Positions_Cur     0000 GR
  2 _advancement_c     006E GR  |   2 _advancement_p     007D GR
  2 _arrow             019B GR  |   2 _cross             0032 GR
  3 _current_game      0025 GR  |     _draw_square       **** GX
  2 _game              01AD GR  |     _level_init        **** GX
    _level_play        **** GX  |   3 _sf                0000 GR
  2 _square            0041 GR  |   2 _square_filled     0053 GR

ASxxxx Assembler V05.50  (Motorola 6809)                                Page 2
Hexadecimal [16-Bits]                                 Fri Jun 13 00:53:11 2025

Area Table

[_CSEG]
   0 _CODE            size    0   flags C080
   2 .text            size  1B5   flags  100
   3 .data            size   2E   flags  100
[_DSEG]
   1 _DATA            size    0   flags C0C0

