                              1 ;;; gcc for m6809 : Mar 17 2019 13:25:32
                              2 ;;; 4.3.6 (gcc6809)
                              3 ;;; ABI version 1
                              4 ;;; -mabi=bx -mint8 -fomit-frame-pointer -O0
                              5 	.module	game.c
                              6 	.globl	_Level_advancement
                              7 	.area	.text
   0523                       8 _Level_advancement:
   0523 C4                    9 	.byte	-60
   0524 DD                   10 	.byte	-35
   0525 C4                   11 	.byte	-60
   0526 E7                   12 	.byte	-25
   0527 C4                   13 	.byte	-60
   0528 F1                   14 	.byte	-15
   0529 C4                   15 	.byte	-60
   052A FB                   16 	.byte	-5
   052B C4                   17 	.byte	-60
   052C 05                   18 	.byte	5
   052D C4                   19 	.byte	-60
   052E 0F                   20 	.byte	15
   052F C4                   21 	.byte	-60
   0530 19                   22 	.byte	25
   0531 C4                   23 	.byte	-60
   0532 23                   24 	.byte	35
   0533 BA                   25 	.byte	-70
   0534 DD                   26 	.byte	-35
   0535 BA                   27 	.byte	-70
   0536 E7                   28 	.byte	-25
   0537 BA                   29 	.byte	-70
   0538 F1                   30 	.byte	-15
   0539 BA                   31 	.byte	-70
   053A FB                   32 	.byte	-5
   053B BA                   33 	.byte	-70
   053C 05                   34 	.byte	5
   053D BA                   35 	.byte	-70
   053E 0F                   36 	.byte	15
   053F BA                   37 	.byte	-70
   0540 19                   38 	.byte	25
   0541 BA                   39 	.byte	-70
   0542 23                   40 	.byte	35
                             41 	.globl	_cross
   0543                      42 _cross:
   0543 00                   43 	.byte	0
   0544 20                   44 	.byte	32
   0545 20                   45 	.byte	32
   0546 FF                   46 	.byte	-1
   0547 E0                   47 	.byte	-32
   0548 E0                   48 	.byte	-32
   0549 00                   49 	.byte	0
   054A 20                   50 	.byte	32
   054B 00                   51 	.byte	0
   054C FF                   52 	.byte	-1
   054D E0                   53 	.byte	-32
   054E 20                   54 	.byte	32
   054F 01                   55 	.byte	1
   0550 00                   56 	.byte	0
   0551 00                   57 	.byte	0
                             58 	.globl	_square
   0552                      59 _square:
   0552 00                   60 	.byte	0
   0553 3C                   61 	.byte	60
   0554 C4                   62 	.byte	-60
   0555 FF                   63 	.byte	-1
   0556 00                   64 	.byte	0
   0557 78                   65 	.byte	120
   0558 FF                   66 	.byte	-1
   0559 88                   67 	.byte	-120
   055A 00                   68 	.byte	0
   055B FF                   69 	.byte	-1
   055C 00                   70 	.byte	0
   055D 88                   71 	.byte	-120
   055E FF                   72 	.byte	-1
   055F 78                   73 	.byte	120
   0560 00                   74 	.byte	0
   0561 01                   75 	.byte	1
   0562 00                   76 	.byte	0
   0563 00                   77 	.byte	0
                             78 	.globl	_square_filled
   0564                      79 _square_filled:
   0564 00                   80 	.byte	0
   0565 3C                   81 	.byte	60
   0566 C4                   82 	.byte	-60
   0567 FF                   83 	.byte	-1
   0568 00                   84 	.byte	0
   0569 78                   85 	.byte	120
   056A FF                   86 	.byte	-1
   056B 88                   87 	.byte	-120
   056C 00                   88 	.byte	0
   056D FF                   89 	.byte	-1
   056E 00                   90 	.byte	0
   056F 88                   91 	.byte	-120
   0570 FF                   92 	.byte	-1
   0571 78                   93 	.byte	120
   0572 00                   94 	.byte	0
   0573 FF                   95 	.byte	-1
   0574 88                   96 	.byte	-120
   0575 78                   97 	.byte	120
   0576 00                   98 	.byte	0
   0577 78                   99 	.byte	120
   0578 00                  100 	.byte	0
   0579 FF                  101 	.byte	-1
   057A 88                  102 	.byte	-120
   057B 88                  103 	.byte	-120
   057C 01                  104 	.byte	1
   057D 00                  105 	.byte	0
   057E 00                  106 	.byte	0
                            107 	.globl	_advancement_cross
   057F                     108 _advancement_cross:
   057F 00                  109 	.byte	0
   0580 10                  110 	.byte	16
   0581 20                  111 	.byte	32
   0582 FF                  112 	.byte	-1
   0583 E0                  113 	.byte	-32
   0584 E0                  114 	.byte	-32
   0585 00                  115 	.byte	0
   0586 20                  116 	.byte	32
   0587 00                  117 	.byte	0
   0588 FF                  118 	.byte	-1
   0589 E0                  119 	.byte	-32
   058A 20                  120 	.byte	32
   058B 01                  121 	.byte	1
   058C 00                  122 	.byte	0
   058D 00                  123 	.byte	0
                            124 	.globl	_advancement_plus
   058E                     125 _advancement_plus:
   058E 00                  126 	.byte	0
   058F 20                  127 	.byte	32
   0590 10                  128 	.byte	16
   0591 FF                  129 	.byte	-1
   0592 E0                  130 	.byte	-32
   0593 00                  131 	.byte	0
   0594 00                  132 	.byte	0
   0595 10                  133 	.byte	16
   0596 10                  134 	.byte	16
   0597 FF                  135 	.byte	-1
   0598 00                  136 	.byte	0
   0599 E0                  137 	.byte	-32
   059A 01                  138 	.byte	1
   059B 00                  139 	.byte	0
   059C 00                  140 	.byte	0
                            141 	.globl	_Gamefield
   059D                     142 _Gamefield:
   059D FF                  143 	.byte	-1
   059E 88                  144 	.byte	-120
   059F 00                  145 	.byte	0
   05A0 FF                  146 	.byte	-1
   05A1 00                  147 	.byte	0
   05A2 78                  148 	.byte	120
   05A3 FF                  149 	.byte	-1
   05A4 78                  150 	.byte	120
   05A5 00                  151 	.byte	0
   05A6 FF                  152 	.byte	-1
   05A7 00                  153 	.byte	0
   05A8 88                  154 	.byte	-120
   05A9 01                  155 	.byte	1
   05AA 00                  156 	.byte	0
   05AB 00                  157 	.byte	0
                            158 	.globl	_Lifelinestruct
   05AC                     159 _Lifelinestruct:
   05AC FF                  160 	.byte	-1
   05AD 00                  161 	.byte	0
   05AE 1E                  162 	.byte	30
   05AF FF                  163 	.byte	-1
   05B0 0F                  164 	.byte	15
   05B1 0A                  165 	.byte	10
   05B2 FF                  166 	.byte	-1
   05B3 F1                  167 	.byte	-15
   05B4 0A                  168 	.byte	10
   05B5 FF                  169 	.byte	-1
   05B6 00                  170 	.byte	0
   05B7 0F                  171 	.byte	15
   05B8 FF                  172 	.byte	-1
   05B9 F1                  173 	.byte	-15
   05BA 0A                  174 	.byte	10
   05BB FF                  175 	.byte	-1
   05BC 2D                  176 	.byte	45
   05BD 0F                  177 	.byte	15
   05BE FF                  178 	.byte	-1
   05BF C9                  179 	.byte	-55
   05C0 0F                  180 	.byte	15
   05C1 FF                  181 	.byte	-1
   05C2 19                  182 	.byte	25
   05C3 0F                  183 	.byte	15
   05C4 FF                  184 	.byte	-1
   05C5 00                  185 	.byte	0
   05C6 0F                  186 	.byte	15
   05C7 01                  187 	.byte	1
   05C8 00                  188 	.byte	0
   05C9 00                  189 	.byte	0
                            190 	.globl	_Brainright
   05CA                     191 _Brainright:
   05CA 00                  192 	.byte	0
   05CB 88                  193 	.byte	-120
   05CC 78                  194 	.byte	120
   05CD 00                  195 	.byte	0
   05CE 88                  196 	.byte	-120
   05CF 00                  197 	.byte	0
   05D0 00                  198 	.byte	0
   05D1 88                  199 	.byte	-120
   05D2 00                  200 	.byte	0
   05D3 00                  201 	.byte	0
   05D4 88                  202 	.byte	-120
   05D5 00                  203 	.byte	0
   05D6 00                  204 	.byte	0
   05D7 EC                  205 	.byte	-20
   05D8 9C                  206 	.byte	-100
   05D9 00                  207 	.byte	0
   05DA EC                  208 	.byte	-20
   05DB 9C                  209 	.byte	-100
   05DC 00                  210 	.byte	0
   05DD EC                  211 	.byte	-20
   05DE BA                  212 	.byte	-70
   05DF FF                  213 	.byte	-1
   05E0 00                  214 	.byte	0
   05E1 64                  215 	.byte	100
   05E2 FF                  216 	.byte	-1
   05E3 00                  217 	.byte	0
   05E4 64                  218 	.byte	100
   05E5 FF                  219 	.byte	-1
   05E6 00                  220 	.byte	0
   05E7 5A                  221 	.byte	90
   05E8 00                  222 	.byte	0
   05E9 3C                  223 	.byte	60
   05EA E2                  224 	.byte	-30
   05EB FF                  225 	.byte	-1
   05EC 9C                  226 	.byte	-100
   05ED 32                  227 	.byte	50
   05EE FF                  228 	.byte	-1
   05EF 00                  229 	.byte	0
   05F0 3C                  230 	.byte	60
   05F1 FF                  231 	.byte	-1
   05F2 00                  232 	.byte	0
   05F3 4B                  233 	.byte	75
   05F4 FF                  234 	.byte	-1
   05F5 32                  235 	.byte	50
   05F6 4B                  236 	.byte	75
   05F7 FF                  237 	.byte	-1
   05F8 32                  238 	.byte	50
   05F9 4B                  239 	.byte	75
   05FA FF                  240 	.byte	-1
   05FB 32                  241 	.byte	50
   05FC 00                  242 	.byte	0
   05FD FF                  243 	.byte	-1
   05FE 1E                  244 	.byte	30
   05FF 3C                  245 	.byte	60
   0600 FF                  246 	.byte	-1
   0601 50                  247 	.byte	80
   0602 28                  248 	.byte	40
   0603 FF                  249 	.byte	-1
   0604 3C                  250 	.byte	60
   0605 00                  251 	.byte	0
   0606 FF                  252 	.byte	-1
   0607 14                  253 	.byte	20
   0608 EC                  254 	.byte	-20
   0609 FF                  255 	.byte	-1
   060A 0F                  256 	.byte	15
   060B E2                  257 	.byte	-30
   060C FF                  258 	.byte	-1
   060D EC                  259 	.byte	-20
   060E CE                  260 	.byte	-50
   060F 00                  261 	.byte	0
   0610 14                  262 	.byte	20
   0611 32                  263 	.byte	50
   0612 FF                  264 	.byte	-1
   0613 1E                  265 	.byte	30
   0614 1E                  266 	.byte	30
   0615 FF                  267 	.byte	-1
   0616 46                  268 	.byte	70
   0617 00                  269 	.byte	0
   0618 FF                  270 	.byte	-1
   0619 1E                  271 	.byte	30
   061A F6                  272 	.byte	-10
   061B FF                  273 	.byte	-1
   061C D8                  274 	.byte	-40
   061D BA                  275 	.byte	-70
   061E 00                  276 	.byte	0
   061F 28                  277 	.byte	40
   0620 46                  278 	.byte	70
   0621 FF                  279 	.byte	-1
   0622 46                  280 	.byte	70
   0623 00                  281 	.byte	0
   0624 FF                  282 	.byte	-1
   0625 32                  283 	.byte	50
   0626 E7                  284 	.byte	-25
   0627 FF                  285 	.byte	-1
   0628 00                  286 	.byte	0
   0629 C4                  287 	.byte	-60
   062A FF                  288 	.byte	-1
   062B CE                  289 	.byte	-50
   062C E7                  290 	.byte	-25
   062D FF                  291 	.byte	-1
   062E E7                  292 	.byte	-25
   062F CE                  293 	.byte	-50
   0630 00                  294 	.byte	0
   0631 4B                  295 	.byte	75
   0632 4B                  296 	.byte	75
   0633 FF                  297 	.byte	-1
   0634 3C                  298 	.byte	60
   0635 E2                  299 	.byte	-30
   0636 FF                  300 	.byte	-1
   0637 3C                  301 	.byte	60
   0638 E2                  302 	.byte	-30
   0639 FF                  303 	.byte	-1
   063A 3C                  304 	.byte	60
   063B CE                  305 	.byte	-50
   063C FF                  306 	.byte	-1
   063D 00                  307 	.byte	0
   063E CE                  308 	.byte	-50
   063F FF                  309 	.byte	-1
   0640 28                  310 	.byte	40
   0641 CE                  311 	.byte	-50
   0642 FF                  312 	.byte	-1
   0643 1E                  313 	.byte	30
   0644 9C                  314 	.byte	-100
   0645 FF                  315 	.byte	-1
   0646 E2                  316 	.byte	-30
   0647 C4                  317 	.byte	-60
   0648 FF                  318 	.byte	-1
   0649 E2                  319 	.byte	-30
   064A BF                  320 	.byte	-65
   064B 01                  321 	.byte	1
   064C 00                  322 	.byte	0
   064D 00                  323 	.byte	0
                            324 	.globl	_Brainleft
   064E                     325 _Brainleft:
   064E 00                  326 	.byte	0
   064F 88                  327 	.byte	-120
   0650 88                  328 	.byte	-120
   0651 00                  329 	.byte	0
   0652 88                  330 	.byte	-120
   0653 00                  331 	.byte	0
   0654 00                  332 	.byte	0
   0655 88                  333 	.byte	-120
   0656 00                  334 	.byte	0
   0657 00                  335 	.byte	0
   0658 88                  336 	.byte	-120
   0659 00                  337 	.byte	0
   065A FF                  338 	.byte	-1
   065B 9C                  339 	.byte	-100
   065C CE                  340 	.byte	-50
   065D FF                  341 	.byte	-1
   065E 00                  342 	.byte	0
   065F C4                  343 	.byte	-60
   0660 FF                  344 	.byte	-1
   0661 00                  345 	.byte	0
   0662 B5                  346 	.byte	-75
   0663 FF                  347 	.byte	-1
   0664 32                  348 	.byte	50
   0665 B5                  349 	.byte	-75
   0666 FF                  350 	.byte	-1
   0667 32                  351 	.byte	50
   0668 B5                  352 	.byte	-75
   0669 FF                  353 	.byte	-1
   066A 32                  354 	.byte	50
   066B 00                  355 	.byte	0
   066C FF                  356 	.byte	-1
   066D 1E                  357 	.byte	30
   066E C4                  358 	.byte	-60
   066F FF                  359 	.byte	-1
   0670 50                  360 	.byte	80
   0671 D8                  361 	.byte	-40
   0672 FF                  362 	.byte	-1
   0673 3C                  363 	.byte	60
   0674 00                  364 	.byte	0
   0675 FF                  365 	.byte	-1
   0676 14                  366 	.byte	20
   0677 14                  367 	.byte	20
   0678 FF                  368 	.byte	-1
   0679 0F                  369 	.byte	15
   067A 1E                  370 	.byte	30
   067B FF                  371 	.byte	-1
   067C EC                  372 	.byte	-20
   067D 32                  373 	.byte	50
   067E 00                  374 	.byte	0
   067F 14                  375 	.byte	20
   0680 CE                  376 	.byte	-50
   0681 FF                  377 	.byte	-1
   0682 1E                  378 	.byte	30
   0683 E2                  379 	.byte	-30
   0684 FF                  380 	.byte	-1
   0685 46                  381 	.byte	70
   0686 00                  382 	.byte	0
   0687 FF                  383 	.byte	-1
   0688 1E                  384 	.byte	30
   0689 0A                  385 	.byte	10
   068A FF                  386 	.byte	-1
   068B D8                  387 	.byte	-40
   068C 46                  388 	.byte	70
   068D 00                  389 	.byte	0
   068E 28                  390 	.byte	40
   068F BA                  391 	.byte	-70
   0690 FF                  392 	.byte	-1
   0691 46                  393 	.byte	70
   0692 00                  394 	.byte	0
   0693 FF                  395 	.byte	-1
   0694 32                  396 	.byte	50
   0695 19                  397 	.byte	25
   0696 FF                  398 	.byte	-1
   0697 00                  399 	.byte	0
   0698 3C                  400 	.byte	60
   0699 FF                  401 	.byte	-1
   069A CE                  402 	.byte	-50
   069B 19                  403 	.byte	25
   069C FF                  404 	.byte	-1
   069D E7                  405 	.byte	-25
   069E 32                  406 	.byte	50
   069F 00                  407 	.byte	0
   06A0 4B                  408 	.byte	75
   06A1 B5                  409 	.byte	-75
   06A2 FF                  410 	.byte	-1
   06A3 3C                  411 	.byte	60
   06A4 1E                  412 	.byte	30
   06A5 FF                  413 	.byte	-1
   06A6 3C                  414 	.byte	60
   06A7 1E                  415 	.byte	30
   06A8 FF                  416 	.byte	-1
   06A9 3C                  417 	.byte	60
   06AA 32                  418 	.byte	50
   06AB FF                  419 	.byte	-1
   06AC 00                  420 	.byte	0
   06AD 32                  421 	.byte	50
   06AE FF                  422 	.byte	-1
   06AF 28                  423 	.byte	40
   06B0 32                  424 	.byte	50
   06B1 FF                  425 	.byte	-1
   06B2 1E                  426 	.byte	30
   06B3 64                  427 	.byte	100
   06B4 FF                  428 	.byte	-1
   06B5 E2                  429 	.byte	-30
   06B6 3C                  430 	.byte	60
   06B7 FF                  431 	.byte	-1
   06B8 E2                  432 	.byte	-30
   06B9 41                  433 	.byte	65
   06BA 01                  434 	.byte	1
   06BB 00                  435 	.byte	0
   06BC 00                  436 	.byte	0
                            437 	.globl	_Positions_Arrow
   06BD                     438 _Positions_Arrow:
   06BD 3C                  439 	.byte	60
   06BE C9                  440 	.byte	-55
   06BF 28                  441 	.byte	40
   06C0 C9                  442 	.byte	-55
   06C1 14                  443 	.byte	20
   06C2 C9                  444 	.byte	-55
                            445 	.globl	_arrow
   06C3                     446 _arrow:
   06C3 00                  447 	.byte	0
   06C4 04                  448 	.byte	4
   06C5 00                  449 	.byte	0
   06C6 FF                  450 	.byte	-1
   06C7 F6                  451 	.byte	-10
   06C8 0A                  452 	.byte	10
   06C9 FF                  453 	.byte	-1
   06CA F6                  454 	.byte	-10
   06CB F6                  455 	.byte	-10
   06CC 00                  456 	.byte	0
   06CD 0A                  457 	.byte	10
   06CE 0A                  458 	.byte	10
   06CF FF                  459 	.byte	-1
   06D0 00                  460 	.byte	0
   06D1 EC                  461 	.byte	-20
   06D2 01                  462 	.byte	1
   06D3 00                  463 	.byte	0
   06D4 00                  464 	.byte	0
                            465 	.globl	_game
   06D5                     466 _game:
   06D5 BD 18 DB      [ 8]  467 	jsr	_level_init
   06D8 BD 19 F8      [ 8]  468 	jsr	_level_play
   06DB 5F            [ 2]  469 	clrb
   06DC 39            [ 5]  470 	rts
ASxxxx Assembler V05.50  (Motorola 6809)                                Page 1
Hexadecimal [16-Bits]                                 Sat Jun 28 00:20:38 2025

Symbol Table

    .__.$$$.       =   2710 L   |     .__.ABS.       =   0000 G
    .__.CPU.       =   0000 L   |     .__.H$L.       =   0001 L
  2 _Brainleft         012B GR  |   2 _Brainright        00A7 GR
  2 _Gamefield         007A GR  |   2 _Level_advance     0000 GR
  2 _Lifelinestruc     0089 GR  |   2 _Positions_Arr     019A GR
  2 _advancement_c     005C GR  |   2 _advancement_p     006B GR
  2 _arrow             01A0 GR  |   2 _cross             0020 GR
  2 _game              01B2 GR  |     _level_init        **** GX
    _level_play        **** GX  |   2 _square            002F GR
  2 _square_filled     0041 GR

ASxxxx Assembler V05.50  (Motorola 6809)                                Page 2
Hexadecimal [16-Bits]                                 Sat Jun 28 00:20:38 2025

Area Table

[_CSEG]
   0 _CODE            size    0   flags C080
   2 .text            size  1BA   flags  100
[_DSEG]
   1 _DATA            size    0   flags C0C0

