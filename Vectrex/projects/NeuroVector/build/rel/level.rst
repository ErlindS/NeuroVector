                              1 ;;; gcc for m6809 : Mar 17 2019 13:25:32
                              2 ;;; 4.3.6 (gcc6809)
                              3 ;;; ABI version 1
                              4 ;;; -mabi=bx -mint8 -fomit-frame-pointer -O0
                              5 	.module	level.c
                              6 	.globl	_Positions_Cursor
                              7 	.area	.text
   062A                       8 _Positions_Cursor:
   062A 10                    9 	.byte	16
   062B F0                   10 	.byte	-16
   062C 10                   11 	.byte	16
   062D 00                   12 	.byte	0
   062E 10                   13 	.byte	16
   062F 10                   14 	.byte	16
   0630 00                   15 	.byte	0
   0631 F0                   16 	.byte	-16
   0632 00                   17 	.byte	0
   0633 00                   18 	.byte	0
   0634 00                   19 	.byte	0
   0635 10                   20 	.byte	16
   0636 F0                   21 	.byte	-16
   0637 F0                   22 	.byte	-16
   0638 F0                   23 	.byte	-16
   0639 00                   24 	.byte	0
   063A F0                   25 	.byte	-16
   063B 10                   26 	.byte	16
                             27 	.globl	_Level_advancement
   063C                      28 _Level_advancement:
   063C C4                   29 	.byte	-60
   063D DD                   30 	.byte	-35
   063E C4                   31 	.byte	-60
   063F E7                   32 	.byte	-25
   0640 C4                   33 	.byte	-60
   0641 F1                   34 	.byte	-15
   0642 C4                   35 	.byte	-60
   0643 FB                   36 	.byte	-5
   0644 C4                   37 	.byte	-60
   0645 05                   38 	.byte	5
   0646 C4                   39 	.byte	-60
   0647 0F                   40 	.byte	15
   0648 C4                   41 	.byte	-60
   0649 19                   42 	.byte	25
   064A C4                   43 	.byte	-60
   064B 23                   44 	.byte	35
   064C BA                   45 	.byte	-70
   064D DD                   46 	.byte	-35
   064E BA                   47 	.byte	-70
   064F E7                   48 	.byte	-25
   0650 BA                   49 	.byte	-70
   0651 F1                   50 	.byte	-15
   0652 BA                   51 	.byte	-70
   0653 FB                   52 	.byte	-5
   0654 BA                   53 	.byte	-70
   0655 05                   54 	.byte	5
   0656 BA                   55 	.byte	-70
   0657 0F                   56 	.byte	15
   0658 BA                   57 	.byte	-70
   0659 19                   58 	.byte	25
   065A BA                   59 	.byte	-70
   065B 23                   60 	.byte	35
                             61 	.globl	_cross
   065C                      62 _cross:
   065C 00                   63 	.byte	0
   065D 20                   64 	.byte	32
   065E 20                   65 	.byte	32
   065F FF                   66 	.byte	-1
   0660 E0                   67 	.byte	-32
   0661 E0                   68 	.byte	-32
   0662 00                   69 	.byte	0
   0663 20                   70 	.byte	32
   0664 00                   71 	.byte	0
   0665 FF                   72 	.byte	-1
   0666 E0                   73 	.byte	-32
   0667 20                   74 	.byte	32
   0668 01                   75 	.byte	1
   0669 00                   76 	.byte	0
   066A 00                   77 	.byte	0
                             78 	.globl	_square
   066B                      79 _square:
   066B 00                   80 	.byte	0
   066C 3C                   81 	.byte	60
   066D C4                   82 	.byte	-60
   066E FF                   83 	.byte	-1
   066F 00                   84 	.byte	0
   0670 78                   85 	.byte	120
   0671 FF                   86 	.byte	-1
   0672 88                   87 	.byte	-120
   0673 00                   88 	.byte	0
   0674 FF                   89 	.byte	-1
   0675 00                   90 	.byte	0
   0676 88                   91 	.byte	-120
   0677 FF                   92 	.byte	-1
   0678 78                   93 	.byte	120
   0679 00                   94 	.byte	0
   067A 01                   95 	.byte	1
   067B 00                   96 	.byte	0
   067C 00                   97 	.byte	0
                             98 	.globl	_square_filled
   067D                      99 _square_filled:
   067D 00                  100 	.byte	0
   067E 3C                  101 	.byte	60
   067F C4                  102 	.byte	-60
   0680 FF                  103 	.byte	-1
   0681 00                  104 	.byte	0
   0682 78                  105 	.byte	120
   0683 FF                  106 	.byte	-1
   0684 88                  107 	.byte	-120
   0685 00                  108 	.byte	0
   0686 FF                  109 	.byte	-1
   0687 00                  110 	.byte	0
   0688 88                  111 	.byte	-120
   0689 FF                  112 	.byte	-1
   068A 78                  113 	.byte	120
   068B 00                  114 	.byte	0
   068C FF                  115 	.byte	-1
   068D 88                  116 	.byte	-120
   068E 78                  117 	.byte	120
   068F FF                  118 	.byte	-1
   0690 78                  119 	.byte	120
   0691 00                  120 	.byte	0
   0692 FF                  121 	.byte	-1
   0693 88                  122 	.byte	-120
   0694 88                  123 	.byte	-120
   0695 01                  124 	.byte	1
   0696 00                  125 	.byte	0
   0697 00                  126 	.byte	0
                            127 	.globl	_advancement_cross
   0698                     128 _advancement_cross:
   0698 00                  129 	.byte	0
   0699 10                  130 	.byte	16
   069A 20                  131 	.byte	32
   069B FF                  132 	.byte	-1
   069C E0                  133 	.byte	-32
   069D E0                  134 	.byte	-32
   069E 00                  135 	.byte	0
   069F 20                  136 	.byte	32
   06A0 00                  137 	.byte	0
   06A1 FF                  138 	.byte	-1
   06A2 E0                  139 	.byte	-32
   06A3 20                  140 	.byte	32
   06A4 01                  141 	.byte	1
   06A5 00                  142 	.byte	0
   06A6 00                  143 	.byte	0
                            144 	.globl	_advancement_plus
   06A7                     145 _advancement_plus:
   06A7 00                  146 	.byte	0
   06A8 20                  147 	.byte	32
   06A9 10                  148 	.byte	16
   06AA FF                  149 	.byte	-1
   06AB E0                  150 	.byte	-32
   06AC 00                  151 	.byte	0
   06AD 00                  152 	.byte	0
   06AE 10                  153 	.byte	16
   06AF 10                  154 	.byte	16
   06B0 FF                  155 	.byte	-1
   06B1 00                  156 	.byte	0
   06B2 E0                  157 	.byte	-32
   06B3 01                  158 	.byte	1
   06B4 00                  159 	.byte	0
   06B5 00                  160 	.byte	0
                            161 	.globl	_Gamefield
   06B6                     162 _Gamefield:
   06B6 FF                  163 	.byte	-1
   06B7 88                  164 	.byte	-120
   06B8 00                  165 	.byte	0
   06B9 FF                  166 	.byte	-1
   06BA 00                  167 	.byte	0
   06BB 78                  168 	.byte	120
   06BC FF                  169 	.byte	-1
   06BD 78                  170 	.byte	120
   06BE 00                  171 	.byte	0
   06BF FF                  172 	.byte	-1
   06C0 00                  173 	.byte	0
   06C1 88                  174 	.byte	-120
   06C2 01                  175 	.byte	1
   06C3 00                  176 	.byte	0
   06C4 00                  177 	.byte	0
                            178 	.globl	_sf
                            179 	.area	.data
   C8D3                     180 _sf:
   C8D3 08                  181 	.byte	8
                            182 	.globl	_Brainright
                            183 	.area	.text
   06C5                     184 _Brainright:
   06C5 00                  185 	.byte	0
   06C6 88                  186 	.byte	-120
   06C7 78                  187 	.byte	120
   06C8 00                  188 	.byte	0
   06C9 88                  189 	.byte	-120
   06CA 00                  190 	.byte	0
   06CB 00                  191 	.byte	0
   06CC 88                  192 	.byte	-120
   06CD 00                  193 	.byte	0
   06CE 00                  194 	.byte	0
   06CF 88                  195 	.byte	-120
   06D0 00                  196 	.byte	0
   06D1 FF                  197 	.byte	-1
   06D2 9C                  198 	.byte	-100
   06D3 32                  199 	.byte	50
   06D4 FF                  200 	.byte	-1
   06D5 00                  201 	.byte	0
   06D6 3C                  202 	.byte	60
   06D7 FF                  203 	.byte	-1
   06D8 00                  204 	.byte	0
   06D9 4B                  205 	.byte	75
   06DA FF                  206 	.byte	-1
   06DB 32                  207 	.byte	50
   06DC 4B                  208 	.byte	75
   06DD FF                  209 	.byte	-1
   06DE 32                  210 	.byte	50
   06DF 4B                  211 	.byte	75
   06E0 FF                  212 	.byte	-1
   06E1 32                  213 	.byte	50
   06E2 00                  214 	.byte	0
   06E3 FF                  215 	.byte	-1
   06E4 1E                  216 	.byte	30
   06E5 3C                  217 	.byte	60
   06E6 FF                  218 	.byte	-1
   06E7 50                  219 	.byte	80
   06E8 28                  220 	.byte	40
   06E9 FF                  221 	.byte	-1
   06EA 3C                  222 	.byte	60
   06EB 00                  223 	.byte	0
   06EC FF                  224 	.byte	-1
   06ED 14                  225 	.byte	20
   06EE EC                  226 	.byte	-20
   06EF FF                  227 	.byte	-1
   06F0 0F                  228 	.byte	15
   06F1 E2                  229 	.byte	-30
   06F2 FF                  230 	.byte	-1
   06F3 EC                  231 	.byte	-20
   06F4 CE                  232 	.byte	-50
   06F5 00                  233 	.byte	0
   06F6 14                  234 	.byte	20
   06F7 32                  235 	.byte	50
   06F8 FF                  236 	.byte	-1
   06F9 1E                  237 	.byte	30
   06FA 1E                  238 	.byte	30
   06FB FF                  239 	.byte	-1
   06FC 46                  240 	.byte	70
   06FD 00                  241 	.byte	0
   06FE FF                  242 	.byte	-1
   06FF 1E                  243 	.byte	30
   0700 F6                  244 	.byte	-10
   0701 FF                  245 	.byte	-1
   0702 D8                  246 	.byte	-40
   0703 BA                  247 	.byte	-70
   0704 00                  248 	.byte	0
   0705 28                  249 	.byte	40
   0706 46                  250 	.byte	70
   0707 FF                  251 	.byte	-1
   0708 46                  252 	.byte	70
   0709 00                  253 	.byte	0
   070A FF                  254 	.byte	-1
   070B 32                  255 	.byte	50
   070C E7                  256 	.byte	-25
   070D FF                  257 	.byte	-1
   070E 00                  258 	.byte	0
   070F C4                  259 	.byte	-60
   0710 FF                  260 	.byte	-1
   0711 CE                  261 	.byte	-50
   0712 E7                  262 	.byte	-25
   0713 FF                  263 	.byte	-1
   0714 E7                  264 	.byte	-25
   0715 CE                  265 	.byte	-50
   0716 00                  266 	.byte	0
   0717 4B                  267 	.byte	75
   0718 4B                  268 	.byte	75
   0719 FF                  269 	.byte	-1
   071A 3C                  270 	.byte	60
   071B E2                  271 	.byte	-30
   071C FF                  272 	.byte	-1
   071D 3C                  273 	.byte	60
   071E E2                  274 	.byte	-30
   071F FF                  275 	.byte	-1
   0720 3C                  276 	.byte	60
   0721 CE                  277 	.byte	-50
   0722 FF                  278 	.byte	-1
   0723 00                  279 	.byte	0
   0724 CE                  280 	.byte	-50
   0725 FF                  281 	.byte	-1
   0726 28                  282 	.byte	40
   0727 CE                  283 	.byte	-50
   0728 FF                  284 	.byte	-1
   0729 1E                  285 	.byte	30
   072A 9C                  286 	.byte	-100
   072B FF                  287 	.byte	-1
   072C E2                  288 	.byte	-30
   072D C4                  289 	.byte	-60
   072E FF                  290 	.byte	-1
   072F E2                  291 	.byte	-30
   0730 CE                  292 	.byte	-50
   0731 01                  293 	.byte	1
   0732 00                  294 	.byte	0
   0733 00                  295 	.byte	0
                            296 	.globl	_BrainrightDetailed
   0734                     297 _BrainrightDetailed:
   0734 00                  298 	.byte	0
   0735 00                  299 	.byte	0
   0736 78                  300 	.byte	120
   0737 FF                  301 	.byte	-1
   0738 78                  302 	.byte	120
   0739 78                  303 	.byte	120
   073A FF                  304 	.byte	-1
   073B 3C                  305 	.byte	60
   073C 00                  306 	.byte	0
   073D FF                  307 	.byte	-1
   073E 78                  308 	.byte	120
   073F 78                  309 	.byte	120
   0740 FF                  310 	.byte	-1
   0741 10                  311 	.byte	16
   0742 08                  312 	.byte	8
   0743 FF                  313 	.byte	-1
   0744 2D                  314 	.byte	45
   0745 FF                  315 	.byte	-1
   0746 FF                  316 	.byte	-1
   0747 05                  317 	.byte	5
   0748 F6                  318 	.byte	-10
   0749 FF                  319 	.byte	-1
   074A 00                  320 	.byte	0
   074B F6                  321 	.byte	-10
   074C FF                  322 	.byte	-1
   074D FB                  323 	.byte	-5
   074E F6                  324 	.byte	-10
   074F 01                  325 	.byte	1
   0750 00                  326 	.byte	0
   0751 00                  327 	.byte	0
                            328 	.globl	_Brainleft
   0752                     329 _Brainleft:
   0752 00                  330 	.byte	0
   0753 88                  331 	.byte	-120
   0754 88                  332 	.byte	-120
   0755 00                  333 	.byte	0
   0756 88                  334 	.byte	-120
   0757 00                  335 	.byte	0
   0758 00                  336 	.byte	0
   0759 88                  337 	.byte	-120
   075A 00                  338 	.byte	0
   075B 00                  339 	.byte	0
   075C 88                  340 	.byte	-120
   075D 00                  341 	.byte	0
   075E FF                  342 	.byte	-1
   075F 9C                  343 	.byte	-100
   0760 CE                  344 	.byte	-50
   0761 FF                  345 	.byte	-1
   0762 00                  346 	.byte	0
   0763 C4                  347 	.byte	-60
   0764 FF                  348 	.byte	-1
   0765 00                  349 	.byte	0
   0766 B5                  350 	.byte	-75
   0767 FF                  351 	.byte	-1
   0768 32                  352 	.byte	50
   0769 B5                  353 	.byte	-75
   076A FF                  354 	.byte	-1
   076B 32                  355 	.byte	50
   076C B5                  356 	.byte	-75
   076D FF                  357 	.byte	-1
   076E 32                  358 	.byte	50
   076F 00                  359 	.byte	0
   0770 FF                  360 	.byte	-1
   0771 1E                  361 	.byte	30
   0772 C4                  362 	.byte	-60
   0773 FF                  363 	.byte	-1
   0774 50                  364 	.byte	80
   0775 D8                  365 	.byte	-40
   0776 FF                  366 	.byte	-1
   0777 3C                  367 	.byte	60
   0778 00                  368 	.byte	0
   0779 FF                  369 	.byte	-1
   077A 14                  370 	.byte	20
   077B 14                  371 	.byte	20
   077C FF                  372 	.byte	-1
   077D 0F                  373 	.byte	15
   077E 1E                  374 	.byte	30
   077F FF                  375 	.byte	-1
   0780 EC                  376 	.byte	-20
   0781 32                  377 	.byte	50
   0782 00                  378 	.byte	0
   0783 14                  379 	.byte	20
   0784 CE                  380 	.byte	-50
   0785 FF                  381 	.byte	-1
   0786 1E                  382 	.byte	30
   0787 E2                  383 	.byte	-30
   0788 FF                  384 	.byte	-1
   0789 46                  385 	.byte	70
   078A 00                  386 	.byte	0
   078B FF                  387 	.byte	-1
   078C 1E                  388 	.byte	30
   078D 0A                  389 	.byte	10
   078E FF                  390 	.byte	-1
   078F D8                  391 	.byte	-40
   0790 46                  392 	.byte	70
   0791 00                  393 	.byte	0
   0792 28                  394 	.byte	40
   0793 BA                  395 	.byte	-70
   0794 FF                  396 	.byte	-1
   0795 46                  397 	.byte	70
   0796 00                  398 	.byte	0
   0797 FF                  399 	.byte	-1
   0798 32                  400 	.byte	50
   0799 19                  401 	.byte	25
   079A FF                  402 	.byte	-1
   079B 00                  403 	.byte	0
   079C 3C                  404 	.byte	60
   079D FF                  405 	.byte	-1
   079E CE                  406 	.byte	-50
   079F 19                  407 	.byte	25
   07A0 FF                  408 	.byte	-1
   07A1 E7                  409 	.byte	-25
   07A2 32                  410 	.byte	50
   07A3 00                  411 	.byte	0
   07A4 4B                  412 	.byte	75
   07A5 B5                  413 	.byte	-75
   07A6 FF                  414 	.byte	-1
   07A7 3C                  415 	.byte	60
   07A8 1E                  416 	.byte	30
   07A9 FF                  417 	.byte	-1
   07AA 3C                  418 	.byte	60
   07AB 1E                  419 	.byte	30
   07AC FF                  420 	.byte	-1
   07AD 3C                  421 	.byte	60
   07AE 32                  422 	.byte	50
   07AF FF                  423 	.byte	-1
   07B0 00                  424 	.byte	0
   07B1 32                  425 	.byte	50
   07B2 FF                  426 	.byte	-1
   07B3 28                  427 	.byte	40
   07B4 32                  428 	.byte	50
   07B5 FF                  429 	.byte	-1
   07B6 1E                  430 	.byte	30
   07B7 64                  431 	.byte	100
   07B8 FF                  432 	.byte	-1
   07B9 E2                  433 	.byte	-30
   07BA 3C                  434 	.byte	60
   07BB FF                  435 	.byte	-1
   07BC E2                  436 	.byte	-30
   07BD 32                  437 	.byte	50
   07BE 01                  438 	.byte	1
   07BF 00                  439 	.byte	0
   07C0 00                  440 	.byte	0
                            441 	.globl	_Positions_Arrow
   07C1                     442 _Positions_Arrow:
   07C1 3C                  443 	.byte	60
   07C2 C9                  444 	.byte	-55
   07C3 28                  445 	.byte	40
   07C4 C9                  446 	.byte	-55
                            447 	.globl	_arrow
   07C5                     448 _arrow:
   07C5 00                  449 	.byte	0
   07C6 04                  450 	.byte	4
   07C7 00                  451 	.byte	0
   07C8 FF                  452 	.byte	-1
   07C9 F6                  453 	.byte	-10
   07CA 0A                  454 	.byte	10
   07CB FF                  455 	.byte	-1
   07CC F6                  456 	.byte	-10
   07CD F6                  457 	.byte	-10
   07CE 00                  458 	.byte	0
   07CF 0A                  459 	.byte	10
   07D0 0A                  460 	.byte	10
   07D1 FF                  461 	.byte	-1
   07D2 00                  462 	.byte	0
   07D3 EC                  463 	.byte	-20
   07D4 01                  464 	.byte	1
   07D5 00                  465 	.byte	0
   07D6 00                  466 	.byte	0
                            467 	.globl	_Displayed_Squares
                            468 	.area	.data
   C8D4                     469 _Displayed_Squares:
   C8D4 10                  470 	.byte	16
   C8D5 F0                  471 	.byte	-16
   C8D6 02 5C               472 	.word	_draw_square
   C8D8 10                  473 	.byte	16
   C8D9 00                  474 	.byte	0
   C8DA 02 5C               475 	.word	_draw_square
   C8DC 10                  476 	.byte	16
   C8DD 10                  477 	.byte	16
   C8DE 02 5C               478 	.word	_draw_square
   C8E0 00                  479 	.byte	0
   C8E1 F0                  480 	.byte	-16
   C8E2 02 5C               481 	.word	_draw_square
   C8E4 00                  482 	.byte	0
   C8E5 00                  483 	.byte	0
   C8E6 02 5C               484 	.word	_draw_square
   C8E8 00                  485 	.byte	0
   C8E9 10                  486 	.byte	16
   C8EA 02 5C               487 	.word	_draw_square
   C8EC F0                  488 	.byte	-16
   C8ED F0                  489 	.byte	-16
   C8EE 02 5C               490 	.word	_draw_square
   C8F0 F0                  491 	.byte	-16
   C8F1 00                  492 	.byte	0
   C8F2 02 5C               493 	.word	_draw_square
   C8F4 F0                  494 	.byte	-16
   C8F5 10                  495 	.byte	16
   C8F6 02 5C               496 	.word	_draw_square
                            497 	.globl	_buttonspressedcounter
   C8F8                     498 _buttonspressedcounter:
   C8F8 00                  499 	.byte	0
                            500 	.globl	_sneakyoffset
   C8F9                     501 _sneakyoffset:
   C8F9 00                  502 	.byte	0
                            503 	.globl	_b
   C8FA                     504 _b:
   C8FA 01                  505 	.byte	1
                            506 	.globl	_a_random
   C8FB                     507 _a_random:
   C8FB 03                  508 	.byte	3
   C8FC 09                  509 	.byte	9
   C8FD 07                  510 	.byte	7
   C8FE 05                  511 	.byte	5
   C8FF 05                  512 	.byte	5
   C900 08                  513 	.byte	8
   C901 04                  514 	.byte	4
   C902 05                  515 	.byte	5
   C903 09                  516 	.byte	9
   C904 08                  517 	.byte	8
   C905 01                  518 	.byte	1
   C906 05                  519 	.byte	5
   C907 09                  520 	.byte	9
   C908 02                  521 	.byte	2
   C909 09                  522 	.byte	9
   C90A 06                  523 	.byte	6
   C90B 03                  524 	.byte	3
   C90C 01                  525 	.byte	1
   C90D 06                  526 	.byte	6
   C90E 03                  527 	.byte	3
                            528 	.globl	_a_random_compare
   C90F                     529 _a_random_compare:
   C90F 00 00 00 00 00 00   530 	.word	0,0,0,0,0,0,0,0,0,0
        00 00 00 00 00 00
        00 00 00 00 00 00
        00 00
                            531 	.globl	_RandomSequenceCounter
   C923                     532 _RandomSequenceCounter:
   C923 32                  533 	.byte	50
                            534 	.globl	_RandomSequenceCounterDisplay
   C924                     535 _RandomSequenceCounterDisplay:
   C924 00                  536 	.byte	0
                            537 	.area	.text
                            538 	.globl	_RandomNumberGenerator
   07D7                     539 _RandomNumberGenerator:
   07D7 32 7D         [ 5]  540 	leas	-3,s
   07D9 6F 62         [ 7]  541 	clr	2,s
   07DB 20 2B         [ 3]  542 	bra	L2
   07DD                     543 L3:
   07DD E6 62         [ 5]  544 	ldb	2,s
   07DF E7 61         [ 5]  545 	stb	1,s
   07E1 E6 62         [ 5]  546 	ldb	2,s
   07E3 1D            [ 2]  547 	sex		;extendqihi2: R:b -> R:d
   07E4 1F 01         [ 6]  548 	tfr	d,x
   07E6 E6 89 C8 FB   [ 8]  549 	ldb	_a_random,x
   07EA 4F            [ 2]  550 	clra		;zero_extendqihi: R:b -> R:d
   07EB 8E 00 0A      [ 3]  551 	ldx	#10
   07EE 34 10         [ 6]  552 	pshs	x
   07F0 1F 01         [ 6]  553 	tfr	d,x
   07F2 BD 0E E8      [ 8]  554 	jsr	_umodhi3
   07F5 32 62         [ 5]  555 	leas	2,s
   07F7 1F 10         [ 6]  556 	tfr	x,d	;movlsbqihi: R:x -> R:b
   07F9 E7 E4         [ 4]  557 	stb	,s
   07FB E6 61         [ 5]  558 	ldb	1,s
   07FD 1D            [ 2]  559 	sex		;extendqihi2: R:b -> R:d
   07FE 1F 01         [ 6]  560 	tfr	d,x
   0800 E6 E4         [ 4]  561 	ldb	,s
   0802 E7 89 C8 FB   [ 8]  562 	stb	_a_random,x
   0806 6C 62         [ 7]  563 	inc	2,s
   0808                     564 L2:
   0808 E6 62         [ 5]  565 	ldb	2,s
   080A C1 13         [ 2]  566 	cmpb	#19	;cmpqi:
   080C 2F CF         [ 3]  567 	ble	L3
   080E 32 63         [ 5]  568 	leas	3,s
   0810 39            [ 5]  569 	rts
                            570 	.globl	_rand
   0811                     571 _rand:
   0811 32 79         [ 5]  572 	leas	-7,s
   0813 E7 65         [ 5]  573 	stb	5,s
   0815 6F 66         [ 7]  574 	clr	6,s
   0817 16 00 72      [ 5]  575 	lbra	L6
   081A                     576 L7:
   081A E6 65         [ 5]  577 	ldb	5,s
   081C 54            [ 2]  578 	lsrb
   081D 54            [ 2]  579 	lsrb
   081E 54            [ 2]  580 	lsrb
   081F 54            [ 2]  581 	lsrb
   0820 E7 61         [ 5]  582 	stb	1,s
   0822 E6 65         [ 5]  583 	ldb	5,s
   0824 E8 61         [ 5]  584 	eorb	1,s
   0826 E7 65         [ 5]  585 	stb	5,s
   0828 E6 65         [ 5]  586 	ldb	5,s
   082A 58            [ 2]  587 	aslb
   082B 58            [ 2]  588 	aslb
   082C 58            [ 2]  589 	aslb
   082D E7 E4         [ 4]  590 	stb	,s
   082F E6 E4         [ 4]  591 	ldb	,s
   0831 EB 65         [ 5]  592 	addb	5,s
   0833 E7 65         [ 5]  593 	stb	5,s
   0835 E6 65         [ 5]  594 	ldb	5,s
   0837 59            [ 2]  595 	rolb
   0838 59            [ 2]  596 	rolb
   0839 59            [ 2]  597 	rolb
   083A C4 03         [ 2]  598 	andb	#3
   083C E7 62         [ 5]  599 	stb	2,s
   083E E6 65         [ 5]  600 	ldb	5,s
   0840 E8 62         [ 5]  601 	eorb	2,s
   0842 E7 65         [ 5]  602 	stb	5,s
   0844 E6 65         [ 5]  603 	ldb	5,s
   0846 58            [ 2]  604 	aslb
   0847 58            [ 2]  605 	aslb
   0848 E7 E4         [ 4]  606 	stb	,s
   084A E6 E4         [ 4]  607 	ldb	,s
   084C EB 65         [ 5]  608 	addb	5,s
   084E E7 65         [ 5]  609 	stb	5,s
   0850 E6 65         [ 5]  610 	ldb	5,s
   0852 54            [ 2]  611 	lsrb
   0853 54            [ 2]  612 	lsrb
   0854 54            [ 2]  613 	lsrb
   0855 54            [ 2]  614 	lsrb
   0856 54            [ 2]  615 	lsrb
   0857 E7 63         [ 5]  616 	stb	3,s
   0859 E6 65         [ 5]  617 	ldb	5,s
   085B E8 63         [ 5]  618 	eorb	3,s
   085D E7 65         [ 5]  619 	stb	5,s
   085F E6 66         [ 5]  620 	ldb	6,s
   0861 E7 64         [ 5]  621 	stb	4,s
   0863 E6 66         [ 5]  622 	ldb	6,s
   0865 1D            [ 2]  623 	sex		;extendqihi2: R:b -> R:d
   0866 1F 01         [ 6]  624 	tfr	d,x
   0868 E6 89 C8 FB   [ 8]  625 	ldb	_a_random,x
   086C EB 65         [ 5]  626 	addb	5,s
   086E 4F            [ 2]  627 	clra		;zero_extendqihi: R:b -> R:d
   086F 8E 00 0A      [ 3]  628 	ldx	#10
   0872 34 10         [ 6]  629 	pshs	x
   0874 1F 01         [ 6]  630 	tfr	d,x
   0876 BD 0E E8      [ 8]  631 	jsr	_umodhi3
   0879 32 62         [ 5]  632 	leas	2,s
   087B 1F 10         [ 6]  633 	tfr	x,d	;movlsbqihi: R:x -> R:b
   087D E7 E4         [ 4]  634 	stb	,s
   087F E6 64         [ 5]  635 	ldb	4,s
   0881 1D            [ 2]  636 	sex		;extendqihi2: R:b -> R:d
   0882 1F 01         [ 6]  637 	tfr	d,x
   0884 E6 E4         [ 4]  638 	ldb	,s
   0886 E7 89 C8 FB   [ 8]  639 	stb	_a_random,x
   088A 6C 66         [ 7]  640 	inc	6,s
   088C                     641 L6:
   088C E6 66         [ 5]  642 	ldb	6,s
   088E C1 13         [ 2]  643 	cmpb	#19	;cmpqi:
   0890 10 2F FF 86   [ 6]  644 	lble	L7
   0894 32 67         [ 5]  645 	leas	7,s
   0896 39            [ 5]  646 	rts
                            647 	.globl	_current_level
                            648 	.area	.data
   C925                     649 _current_level:
   C925 00                  650 	.byte	0
                            651 	.globl	_SequenceTime
   C926                     652 _SequenceTime:
   C926 01                  653 	.byte	1
                            654 	.globl	_counter
   C927                     655 _counter:
   C927 00                  656 	.byte	0
                            657 	.area	.text
   0897                     658 LC0:
   0897 54 49 4D 45 20 4C   659 	.byte	84,73,77,69,32,76,69,70
        45 46
   089F 54 80 00            660 	.byte	84,-128,0
   08A2                     661 LC1:
   08A2 47 41 4D 45 20 4F   662 	.byte	71,65,77,69,32,79,86,69
        56 45
   08AA 52 80 00            663 	.byte	82,-128,0
                            664 	.globl	_Display_TimeLeft
   08AD                     665 _Display_TimeLeft:
   08AD C6 C4         [ 2]  666 	ldb	#-60
   08AF E7 E2         [ 6]  667 	stb	,-s
   08B1 8E 08 97      [ 3]  668 	ldx	#LC0
   08B4 C6 64         [ 2]  669 	ldb	#100
   08B6 BD 0E AC      [ 8]  670 	jsr	_print_string
   08B9 32 61         [ 5]  671 	leas	1,s
   08BB F6 C9 27      [ 5]  672 	ldb	_counter
   08BE BD 03 C7      [ 8]  673 	jsr	_Loadingbar
   08C1 F6 C9 27      [ 5]  674 	ldb	_counter
   08C4 5D            [ 2]  675 	tstb
   08C5 26 10         [ 3]  676 	bne	L12
   08C7                     677 L11:
   08C7 C6 C4         [ 2]  678 	ldb	#-60
   08C9 E7 E2         [ 6]  679 	stb	,-s
   08CB 8E 08 A2      [ 3]  680 	ldx	#LC1
   08CE C6 64         [ 2]  681 	ldb	#100
   08D0 BD 0E AC      [ 8]  682 	jsr	_print_string
   08D3 32 61         [ 5]  683 	leas	1,s
   08D5 20 F0         [ 3]  684 	bra	L11
   08D7                     685 L12:
   08D7 39            [ 5]  686 	rts
                            687 	.globl	_Display_LevelAdvancement
   08D8                     688 _Display_LevelAdvancement:
   08D8 32 7D         [ 5]  689 	leas	-3,s
   08DA E7 62         [ 5]  690 	stb	2,s
   08DC 20 08         [ 3]  691 	bra	L14
   08DE                     692 L16:
   08DE F6 C8 F8      [ 5]  693 	ldb	_buttonspressedcounter
   08E1 EB 62         [ 5]  694 	addb	2,s
   08E3 BD 02 FC      [ 8]  695 	jsr	_draw_round_advancement_cross
   08E6                     696 L14:
   08E6 E6 62         [ 5]  697 	ldb	2,s
   08E8 E7 61         [ 5]  698 	stb	1,s
   08EA 6D 61         [ 7]  699 	tst	1,s
   08EC 27 04         [ 3]  700 	beq	L15
   08EE C6 01         [ 2]  701 	ldb	#1
   08F0 E7 61         [ 5]  702 	stb	1,s
   08F2                     703 L15:
   08F2 E6 61         [ 5]  704 	ldb	1,s
   08F4 6A 62         [ 7]  705 	dec	2,s
   08F6 5D            [ 2]  706 	tstb
   08F7 26 E5         [ 3]  707 	bne	L16
   08F9 20 05         [ 3]  708 	bra	L17
   08FB                     709 L19:
   08FB E6 65         [ 5]  710 	ldb	5,s
   08FD BD 03 42      [ 8]  711 	jsr	_draw_round_advancement_cross_plus
   0900                     712 L17:
   0900 E6 65         [ 5]  713 	ldb	5,s
   0902 E7 E4         [ 4]  714 	stb	,s
   0904 6D E4         [ 6]  715 	tst	,s
   0906 27 04         [ 3]  716 	beq	L18
   0908 C6 01         [ 2]  717 	ldb	#1
   090A E7 E4         [ 4]  718 	stb	,s
   090C                     719 L18:
   090C E6 E4         [ 4]  720 	ldb	,s
   090E 6A 65         [ 7]  721 	dec	5,s
   0910 5D            [ 2]  722 	tstb
   0911 26 E8         [ 3]  723 	bne	L19
   0913 32 63         [ 5]  724 	leas	3,s
   0915 39            [ 5]  725 	rts
   0916                     726 LC2:
   0916 52 45 4D 45 4D 42   727 	.byte	82,69,77,69,77,66,69,82
        45 52
   091E 20 54 48 45 80 00   728 	.byte	32,84,72,69,-128,0
   0924                     729 LC3:
   0924 53 45 51 55 45 4E   730 	.byte	83,69,81,85,69,78,67,69
        43 45
   092C 80 00               731 	.byte	-128,0
                            732 	.globl	_Display_RandomSequence
   092E                     733 _Display_RandomSequence:
   092E 32 7F         [ 5]  734 	leas	-1,s
   0930 6F E4         [ 6]  735 	clr	,s
   0932 20 54         [ 3]  736 	bra	L22
   0934                     737 L24:
   0934 C6 C8         [ 2]  738 	ldb	#-56
   0936 F7 C9 27      [ 5]  739 	stb	_counter
   0939 BD F1 92      [ 8]  740 	jsr	___Wait_Recal
   093C BD 03 88      [ 8]  741 	jsr	_Display_Gamefield
   093F C6 B5         [ 2]  742 	ldb	#-75
   0941 E7 E2         [ 6]  743 	stb	,-s
   0943 8E 09 16      [ 3]  744 	ldx	#LC2
   0946 C6 64         [ 2]  745 	ldb	#100
   0948 BD 0E AC      [ 8]  746 	jsr	_print_string
   094B 32 61         [ 5]  747 	leas	1,s
   094D C6 CE         [ 2]  748 	ldb	#-50
   094F E7 E2         [ 6]  749 	stb	,-s
   0951 8E 09 24      [ 3]  750 	ldx	#LC3
   0954 C6 50         [ 2]  751 	ldb	#80
   0956 BD 0E AC      [ 8]  752 	jsr	_print_string
   0959 32 61         [ 5]  753 	leas	1,s
   095B BD 0C 77      [ 8]  754 	jsr	_Display_Player
   095E E6 E4         [ 4]  755 	ldb	,s
   0960 4F            [ 2]  756 	clra		;zero_extendqihi: R:b -> R:d
   0961 1F 01         [ 6]  757 	tfr	d,x
   0963 E6 89 C8 FB   [ 8]  758 	ldb	_a_random,x
   0967 BD 02 AC      [ 8]  759 	jsr	_draw_square_filled
   096A E6 E4         [ 4]  760 	ldb	,s
   096C 5C            [ 2]  761 	incb
   096D 6F E2         [ 8]  762 	clr	,-s
   096F BD 08 D8      [ 8]  763 	jsr	_Display_LevelAdvancement
   0972 32 61         [ 5]  764 	leas	1,s
   0974                     765 L23:
   0974 F6 C9 23      [ 5]  766 	ldb	_RandomSequenceCounter
   0977 5A            [ 2]  767 	decb
   0978 F7 C9 23      [ 5]  768 	stb	_RandomSequenceCounter
   097B F6 C9 23      [ 5]  769 	ldb	_RandomSequenceCounter
   097E 5D            [ 2]  770 	tstb
   097F 26 B3         [ 3]  771 	bne	L24
   0981 C6 1E         [ 2]  772 	ldb	#30
   0983 F7 C9 23      [ 5]  773 	stb	_RandomSequenceCounter
   0986 6C E4         [ 6]  774 	inc	,s
   0988                     775 L22:
   0988 F6 C9 24      [ 5]  776 	ldb	_RandomSequenceCounterDisplay
   098B 5C            [ 2]  777 	incb
   098C E1 E4         [ 4]  778 	cmpb	,s	;cmpqi:
   098E 22 E4         [ 3]  779 	bhi	L23
   0990 7F C9 26      [ 7]  780 	clr	_SequenceTime
   0993 32 61         [ 5]  781 	leas	1,s
   0995 39            [ 5]  782 	rts
                            783 	.area	.bss
                            784 	.globl	_execute_game_playing_state
   C92F                     785 _execute_game_playing_state:	.blkb	2
                            786 	.area	.text
   0996                     787 LC4:
   0996 50 52 45 53 53 20   788 	.byte	80,82,69,83,83,32,66,85
        42 55
   099E 54 54 4F 4E 20 32   789 	.byte	84,84,79,78,32,50,-128,0
        80 00
   09A6                     790 LC5:
   09A6 54 4F 20 52 45 53   791 	.byte	84,79,32,82,69,83,84,65
        54 41
   09AE 52 54 80 00         792 	.byte	82,84,-128,0
                            793 	.globl	_display_game_over
   09B2                     794 _display_game_over:
   09B2 32 7F         [ 5]  795 	leas	-1,s
   09B4 C6 C4         [ 2]  796 	ldb	#-60
   09B6 E7 E2         [ 6]  797 	stb	,-s
   09B8 8E 08 A2      [ 3]  798 	ldx	#LC1
   09BB C6 64         [ 2]  799 	ldb	#100
   09BD BD 0E AC      [ 8]  800 	jsr	_print_string
   09C0 32 61         [ 5]  801 	leas	1,s
   09C2 C6 B0         [ 2]  802 	ldb	#-80
   09C4 E7 E2         [ 6]  803 	stb	,-s
   09C6 8E 09 96      [ 3]  804 	ldx	#LC4
   09C9 C6 50         [ 2]  805 	ldb	#80
   09CB BD 0E AC      [ 8]  806 	jsr	_print_string
   09CE 32 61         [ 5]  807 	leas	1,s
   09D0 C6 C4         [ 2]  808 	ldb	#-60
   09D2 E7 E2         [ 6]  809 	stb	,-s
   09D4 8E 09 A6      [ 3]  810 	ldx	#LC5
   09D7 C6 3C         [ 2]  811 	ldb	#60
   09D9 BD 0E AC      [ 8]  812 	jsr	_print_string
   09DC 32 61         [ 5]  813 	leas	1,s
   09DE BD F1 BA      [ 8]  814 	jsr	___Read_Btns
   09E1 F6 C8 11      [ 5]  815 	ldb	_Vec_Buttons
   09E4 C4 02         [ 2]  816 	andb	#2
   09E6 5D            [ 2]  817 	tstb
   09E7 27 27         [ 3]  818 	beq	L31
   09E9 8E 0C FC      [ 3]  819 	ldx	#_execute_display_sequence_state
   09EC BF C9 2F      [ 6]  820 	stx	_execute_game_playing_state
   09EF 6F E4         [ 6]  821 	clr	,s
   09F1 20 0B         [ 3]  822 	bra	L29
   09F3                     823 L30:
   09F3 E6 E4         [ 4]  824 	ldb	,s
   09F5 1D            [ 2]  825 	sex		;extendqihi2: R:b -> R:d
   09F6 1F 01         [ 6]  826 	tfr	d,x
   09F8 6F 89 C9 0F   [10]  827 	clr	_a_random_compare,x
   09FC 6C E4         [ 6]  828 	inc	,s
   09FE                     829 L29:
   09FE E6 E4         [ 4]  830 	ldb	,s
   0A00 C1 13         [ 2]  831 	cmpb	#19	;cmpqi:
   0A02 2F EF         [ 3]  832 	ble	L30
   0A04 F6 C9 24      [ 5]  833 	ldb	_RandomSequenceCounterDisplay
   0A07 BD 08 11      [ 8]  834 	jsr	_rand
   0A0A 7F C9 24      [ 7]  835 	clr	_RandomSequenceCounterDisplay
   0A0D 7F C8 F8      [ 7]  836 	clr	_buttonspressedcounter
   0A10                     837 L31:
   0A10 32 61         [ 5]  838 	leas	1,s
   0A12 39            [ 5]  839 	rts
                            840 	.globl	_joy_x
                            841 	.area	.data
   C928                     842 _joy_x:
   C928 00                  843 	.byte	0
                            844 	.globl	_joy_y
   C929                     845 _joy_y:
   C929 00                  846 	.byte	0
                            847 	.globl	_temppass
   C92A                     848 _temppass:
   C92A 00                  849 	.byte	0
                            850 	.area	.text
                            851 	.globl	_move_player
   0A13                     852 _move_player:
   0A13 BD F1 F8      [ 8]  853 	jsr	___Joy_Digital
   0A16 F6 C8 1B      [ 5]  854 	ldb	_Vec_Joy_1_X
   0A19 F7 C9 28      [ 5]  855 	stb	_joy_x
   0A1C F6 C8 1C      [ 5]  856 	ldb	_Vec_Joy_1_Y
   0A1F F7 C9 29      [ 5]  857 	stb	_joy_y
   0A22 F6 C9 28      [ 5]  858 	ldb	_joy_x
   0A25 5D            [ 2]  859 	tstb
   0A26 2C 0E         [ 3]  860 	bge	L33
   0A28 F6 C9 29      [ 5]  861 	ldb	_joy_y
   0A2B 5D            [ 2]  862 	tstb
   0A2C 2F 08         [ 3]  863 	ble	L33
   0A2E 8E 02 AC      [ 3]  864 	ldx	#_draw_square_filled
   0A31 BF C8 D6      [ 6]  865 	stx	_Displayed_Squares+2
   0A34 20 06         [ 3]  866 	bra	L34
   0A36                     867 L33:
   0A36 8E 02 5C      [ 3]  868 	ldx	#_draw_square
   0A39 BF C8 D6      [ 6]  869 	stx	_Displayed_Squares+2
   0A3C                     870 L34:
   0A3C F6 C9 28      [ 5]  871 	ldb	_joy_x
   0A3F 5D            [ 2]  872 	tstb
   0A40 26 0E         [ 3]  873 	bne	L35
   0A42 F6 C9 29      [ 5]  874 	ldb	_joy_y
   0A45 5D            [ 2]  875 	tstb
   0A46 2F 08         [ 3]  876 	ble	L35
   0A48 8E 02 AC      [ 3]  877 	ldx	#_draw_square_filled
   0A4B BF C8 DA      [ 6]  878 	stx	_Displayed_Squares+6
   0A4E 20 06         [ 3]  879 	bra	L36
   0A50                     880 L35:
   0A50 8E 02 5C      [ 3]  881 	ldx	#_draw_square
   0A53 BF C8 DA      [ 6]  882 	stx	_Displayed_Squares+6
   0A56                     883 L36:
   0A56 F6 C9 28      [ 5]  884 	ldb	_joy_x
   0A59 5D            [ 2]  885 	tstb
   0A5A 2F 0E         [ 3]  886 	ble	L37
   0A5C F6 C9 29      [ 5]  887 	ldb	_joy_y
   0A5F 5D            [ 2]  888 	tstb
   0A60 2F 08         [ 3]  889 	ble	L37
   0A62 8E 02 AC      [ 3]  890 	ldx	#_draw_square_filled
   0A65 BF C8 DE      [ 6]  891 	stx	_Displayed_Squares+10
   0A68 20 06         [ 3]  892 	bra	L38
   0A6A                     893 L37:
   0A6A 8E 02 5C      [ 3]  894 	ldx	#_draw_square
   0A6D BF C8 DE      [ 6]  895 	stx	_Displayed_Squares+10
   0A70                     896 L38:
   0A70 F6 C9 28      [ 5]  897 	ldb	_joy_x
   0A73 5D            [ 2]  898 	tstb
   0A74 2C 0E         [ 3]  899 	bge	L39
   0A76 F6 C9 29      [ 5]  900 	ldb	_joy_y
   0A79 5D            [ 2]  901 	tstb
   0A7A 26 08         [ 3]  902 	bne	L39
   0A7C 8E 02 AC      [ 3]  903 	ldx	#_draw_square_filled
   0A7F BF C8 E2      [ 6]  904 	stx	_Displayed_Squares+14
   0A82 20 06         [ 3]  905 	bra	L40
   0A84                     906 L39:
   0A84 8E 02 5C      [ 3]  907 	ldx	#_draw_square
   0A87 BF C8 E2      [ 6]  908 	stx	_Displayed_Squares+14
   0A8A                     909 L40:
   0A8A F6 C9 28      [ 5]  910 	ldb	_joy_x
   0A8D 5D            [ 2]  911 	tstb
   0A8E 26 0E         [ 3]  912 	bne	L41
   0A90 F6 C9 29      [ 5]  913 	ldb	_joy_y
   0A93 5D            [ 2]  914 	tstb
   0A94 26 08         [ 3]  915 	bne	L41
   0A96 8E 02 AC      [ 3]  916 	ldx	#_draw_square_filled
   0A99 BF C8 E6      [ 6]  917 	stx	_Displayed_Squares+18
   0A9C 20 06         [ 3]  918 	bra	L42
   0A9E                     919 L41:
   0A9E 8E 02 5C      [ 3]  920 	ldx	#_draw_square
   0AA1 BF C8 E6      [ 6]  921 	stx	_Displayed_Squares+18
   0AA4                     922 L42:
   0AA4 F6 C9 28      [ 5]  923 	ldb	_joy_x
   0AA7 5D            [ 2]  924 	tstb
   0AA8 2F 0E         [ 3]  925 	ble	L43
   0AAA F6 C9 29      [ 5]  926 	ldb	_joy_y
   0AAD 5D            [ 2]  927 	tstb
   0AAE 26 08         [ 3]  928 	bne	L43
   0AB0 8E 02 AC      [ 3]  929 	ldx	#_draw_square_filled
   0AB3 BF C8 EA      [ 6]  930 	stx	_Displayed_Squares+22
   0AB6 20 06         [ 3]  931 	bra	L44
   0AB8                     932 L43:
   0AB8 8E 02 5C      [ 3]  933 	ldx	#_draw_square
   0ABB BF C8 EA      [ 6]  934 	stx	_Displayed_Squares+22
   0ABE                     935 L44:
   0ABE F6 C9 28      [ 5]  936 	ldb	_joy_x
   0AC1 5D            [ 2]  937 	tstb
   0AC2 2C 0E         [ 3]  938 	bge	L45
   0AC4 F6 C9 29      [ 5]  939 	ldb	_joy_y
   0AC7 5D            [ 2]  940 	tstb
   0AC8 2C 08         [ 3]  941 	bge	L45
   0ACA 8E 02 AC      [ 3]  942 	ldx	#_draw_square_filled
   0ACD BF C8 EE      [ 6]  943 	stx	_Displayed_Squares+26
   0AD0 20 06         [ 3]  944 	bra	L46
   0AD2                     945 L45:
   0AD2 8E 02 5C      [ 3]  946 	ldx	#_draw_square
   0AD5 BF C8 EE      [ 6]  947 	stx	_Displayed_Squares+26
   0AD8                     948 L46:
   0AD8 F6 C9 28      [ 5]  949 	ldb	_joy_x
   0ADB 5D            [ 2]  950 	tstb
   0ADC 26 0E         [ 3]  951 	bne	L47
   0ADE F6 C9 29      [ 5]  952 	ldb	_joy_y
   0AE1 5D            [ 2]  953 	tstb
   0AE2 2C 08         [ 3]  954 	bge	L47
   0AE4 8E 02 AC      [ 3]  955 	ldx	#_draw_square_filled
   0AE7 BF C8 F2      [ 6]  956 	stx	_Displayed_Squares+30
   0AEA 20 06         [ 3]  957 	bra	L48
   0AEC                     958 L47:
   0AEC 8E 02 5C      [ 3]  959 	ldx	#_draw_square
   0AEF BF C8 F2      [ 6]  960 	stx	_Displayed_Squares+30
   0AF2                     961 L48:
   0AF2 F6 C9 28      [ 5]  962 	ldb	_joy_x
   0AF5 5D            [ 2]  963 	tstb
   0AF6 2F 0E         [ 3]  964 	ble	L49
   0AF8 F6 C9 29      [ 5]  965 	ldb	_joy_y
   0AFB 5D            [ 2]  966 	tstb
   0AFC 2C 08         [ 3]  967 	bge	L49
   0AFE 8E 02 AC      [ 3]  968 	ldx	#_draw_square_filled
   0B01 BF C8 F6      [ 6]  969 	stx	_Displayed_Squares+34
   0B04 20 06         [ 3]  970 	bra	L51
   0B06                     971 L49:
   0B06 8E 02 5C      [ 3]  972 	ldx	#_draw_square
   0B09 BF C8 F6      [ 6]  973 	stx	_Displayed_Squares+34
   0B0C                     974 L51:
   0B0C 39            [ 5]  975 	rts
                            976 	.globl	_read_player_input
   0B0D                     977 _read_player_input:
   0B0D 32 7E         [ 5]  978 	leas	-2,s
   0B0F BD F1 BA      [ 8]  979 	jsr	___Read_Btns
   0B12 BD F1 F8      [ 8]  980 	jsr	___Joy_Digital
   0B15 F6 C8 1B      [ 5]  981 	ldb	_Vec_Joy_1_X
   0B18 F7 C9 28      [ 5]  982 	stb	_joy_x
   0B1B F6 C8 1C      [ 5]  983 	ldb	_Vec_Joy_1_Y
   0B1E F7 C9 29      [ 5]  984 	stb	_joy_y
   0B21 F6 C8 1B      [ 5]  985 	ldb	_Vec_Joy_1_X
   0B24 F7 C9 28      [ 5]  986 	stb	_joy_x
   0B27 F6 C8 1C      [ 5]  987 	ldb	_Vec_Joy_1_Y
   0B2A F7 C9 29      [ 5]  988 	stb	_joy_y
   0B2D F6 C9 28      [ 5]  989 	ldb	_joy_x
   0B30 5D            [ 2]  990 	tstb
   0B31 2C 0B         [ 3]  991 	bge	L53
   0B33 F6 C9 29      [ 5]  992 	ldb	_joy_y
   0B36 5D            [ 2]  993 	tstb
   0B37 2F 05         [ 3]  994 	ble	L53
   0B39 7F C9 2A      [ 7]  995 	clr	_temppass
   0B3C 20 06         [ 3]  996 	bra	L54
   0B3E                     997 L53:
   0B3E F6 C9 2A      [ 5]  998 	ldb	_temppass
   0B41 F7 C9 2A      [ 5]  999 	stb	_temppass
   0B44                    1000 L54:
   0B44 F6 C9 28      [ 5] 1001 	ldb	_joy_x
   0B47 5D            [ 2] 1002 	tstb
   0B48 26 0D         [ 3] 1003 	bne	L55
   0B4A F6 C9 29      [ 5] 1004 	ldb	_joy_y
   0B4D 5D            [ 2] 1005 	tstb
   0B4E 2F 07         [ 3] 1006 	ble	L55
   0B50 C6 01         [ 2] 1007 	ldb	#1
   0B52 F7 C9 2A      [ 5] 1008 	stb	_temppass
   0B55 20 06         [ 3] 1009 	bra	L56
   0B57                    1010 L55:
   0B57 F6 C9 2A      [ 5] 1011 	ldb	_temppass
   0B5A F7 C9 2A      [ 5] 1012 	stb	_temppass
   0B5D                    1013 L56:
   0B5D F6 C9 28      [ 5] 1014 	ldb	_joy_x
   0B60 5D            [ 2] 1015 	tstb
   0B61 2F 0D         [ 3] 1016 	ble	L57
   0B63 F6 C9 29      [ 5] 1017 	ldb	_joy_y
   0B66 5D            [ 2] 1018 	tstb
   0B67 2F 07         [ 3] 1019 	ble	L57
   0B69 C6 02         [ 2] 1020 	ldb	#2
   0B6B F7 C9 2A      [ 5] 1021 	stb	_temppass
   0B6E 20 06         [ 3] 1022 	bra	L58
   0B70                    1023 L57:
   0B70 F6 C9 2A      [ 5] 1024 	ldb	_temppass
   0B73 F7 C9 2A      [ 5] 1025 	stb	_temppass
   0B76                    1026 L58:
   0B76 F6 C9 28      [ 5] 1027 	ldb	_joy_x
   0B79 5D            [ 2] 1028 	tstb
   0B7A 2C 0D         [ 3] 1029 	bge	L59
   0B7C F6 C9 29      [ 5] 1030 	ldb	_joy_y
   0B7F 5D            [ 2] 1031 	tstb
   0B80 26 07         [ 3] 1032 	bne	L59
   0B82 C6 03         [ 2] 1033 	ldb	#3
   0B84 F7 C9 2A      [ 5] 1034 	stb	_temppass
   0B87 20 06         [ 3] 1035 	bra	L60
   0B89                    1036 L59:
   0B89 F6 C9 2A      [ 5] 1037 	ldb	_temppass
   0B8C F7 C9 2A      [ 5] 1038 	stb	_temppass
   0B8F                    1039 L60:
   0B8F F6 C9 28      [ 5] 1040 	ldb	_joy_x
   0B92 5D            [ 2] 1041 	tstb
   0B93 26 0D         [ 3] 1042 	bne	L61
   0B95 F6 C9 29      [ 5] 1043 	ldb	_joy_y
   0B98 5D            [ 2] 1044 	tstb
   0B99 26 07         [ 3] 1045 	bne	L61
   0B9B C6 04         [ 2] 1046 	ldb	#4
   0B9D F7 C9 2A      [ 5] 1047 	stb	_temppass
   0BA0 20 06         [ 3] 1048 	bra	L62
   0BA2                    1049 L61:
   0BA2 F6 C9 2A      [ 5] 1050 	ldb	_temppass
   0BA5 F7 C9 2A      [ 5] 1051 	stb	_temppass
   0BA8                    1052 L62:
   0BA8 F6 C9 28      [ 5] 1053 	ldb	_joy_x
   0BAB 5D            [ 2] 1054 	tstb
   0BAC 2F 0D         [ 3] 1055 	ble	L63
   0BAE F6 C9 29      [ 5] 1056 	ldb	_joy_y
   0BB1 5D            [ 2] 1057 	tstb
   0BB2 26 07         [ 3] 1058 	bne	L63
   0BB4 C6 05         [ 2] 1059 	ldb	#5
   0BB6 F7 C9 2A      [ 5] 1060 	stb	_temppass
   0BB9 20 06         [ 3] 1061 	bra	L64
   0BBB                    1062 L63:
   0BBB F6 C9 2A      [ 5] 1063 	ldb	_temppass
   0BBE F7 C9 2A      [ 5] 1064 	stb	_temppass
   0BC1                    1065 L64:
   0BC1 F6 C9 28      [ 5] 1066 	ldb	_joy_x
   0BC4 5D            [ 2] 1067 	tstb
   0BC5 2C 0D         [ 3] 1068 	bge	L65
   0BC7 F6 C9 29      [ 5] 1069 	ldb	_joy_y
   0BCA 5D            [ 2] 1070 	tstb
   0BCB 2C 07         [ 3] 1071 	bge	L65
   0BCD C6 06         [ 2] 1072 	ldb	#6
   0BCF F7 C9 2A      [ 5] 1073 	stb	_temppass
   0BD2 20 06         [ 3] 1074 	bra	L66
   0BD4                    1075 L65:
   0BD4 F6 C9 2A      [ 5] 1076 	ldb	_temppass
   0BD7 F7 C9 2A      [ 5] 1077 	stb	_temppass
   0BDA                    1078 L66:
   0BDA F6 C9 28      [ 5] 1079 	ldb	_joy_x
   0BDD 5D            [ 2] 1080 	tstb
   0BDE 26 0D         [ 3] 1081 	bne	L67
   0BE0 F6 C9 29      [ 5] 1082 	ldb	_joy_y
   0BE3 5D            [ 2] 1083 	tstb
   0BE4 2C 07         [ 3] 1084 	bge	L67
   0BE6 C6 07         [ 2] 1085 	ldb	#7
   0BE8 F7 C9 2A      [ 5] 1086 	stb	_temppass
   0BEB 20 06         [ 3] 1087 	bra	L68
   0BED                    1088 L67:
   0BED F6 C9 2A      [ 5] 1089 	ldb	_temppass
   0BF0 F7 C9 2A      [ 5] 1090 	stb	_temppass
   0BF3                    1091 L68:
   0BF3 F6 C9 28      [ 5] 1092 	ldb	_joy_x
   0BF6 5D            [ 2] 1093 	tstb
   0BF7 2F 0D         [ 3] 1094 	ble	L69
   0BF9 F6 C9 29      [ 5] 1095 	ldb	_joy_y
   0BFC 5D            [ 2] 1096 	tstb
   0BFD 2C 07         [ 3] 1097 	bge	L69
   0BFF C6 08         [ 2] 1098 	ldb	#8
   0C01 F7 C9 2A      [ 5] 1099 	stb	_temppass
   0C04 20 06         [ 3] 1100 	bra	L70
   0C06                    1101 L69:
   0C06 F6 C9 2A      [ 5] 1102 	ldb	_temppass
   0C09 F7 C9 2A      [ 5] 1103 	stb	_temppass
   0C0C                    1104 L70:
   0C0C F6 C8 11      [ 5] 1105 	ldb	_Vec_Buttons
   0C0F C4 01         [ 2] 1106 	andb	#1
   0C11 5D            [ 2] 1107 	tstb
   0C12 27 1C         [ 3] 1108 	beq	L72
   0C14 F6 C8 F8      [ 5] 1109 	ldb	_buttonspressedcounter
   0C17 E7 E4         [ 4] 1110 	stb	,s
   0C19 F6 C9 2A      [ 5] 1111 	ldb	_temppass
   0C1C E7 61         [ 5] 1112 	stb	1,s
   0C1E E6 E4         [ 4] 1113 	ldb	,s
   0C20 4F            [ 2] 1114 	clra		;zero_extendqihi: R:b -> R:d
   0C21 1F 01         [ 6] 1115 	tfr	d,x
   0C23 E6 61         [ 5] 1116 	ldb	1,s
   0C25 E7 89 C9 0F   [ 8] 1117 	stb	_a_random_compare,x
   0C29 F6 C8 F8      [ 5] 1118 	ldb	_buttonspressedcounter
   0C2C 5C            [ 2] 1119 	incb
   0C2D F7 C8 F8      [ 5] 1120 	stb	_buttonspressedcounter
   0C30                    1121 L72:
   0C30 32 62         [ 5] 1122 	leas	2,s
   0C32 39            [ 5] 1123 	rts
   0C33                    1124 LC6:
   0C33 21 53 4E 45 41 4B  1125 	.byte	33,83,78,69,65,75,89,32
        59 20
   0C3B 4F 46 46 53 45 54  1126 	.byte	79,70,70,83,69,84,33,-128
        21 80
   0C43 00                 1127 	.byte	0
                           1128 	.globl	_Set_traps
   0C44                    1129 _Set_traps:
   0C44 7F C8 F9      [ 7] 1130 	clr	_sneakyoffset
   0C47 F6 C9 24      [ 5] 1131 	ldb	_RandomSequenceCounterDisplay
   0C4A C1 03         [ 2] 1132 	cmpb	#3	;cmpqi:
   0C4C 23 28         [ 3] 1133 	bls	L75
   0C4E F6 C9 24      [ 5] 1134 	ldb	_RandomSequenceCounterDisplay
   0C51 C1 07         [ 2] 1135 	cmpb	#7	;cmpqi:
   0C53 22 21         [ 3] 1136 	bhi	L75
   0C55 C6 C8         [ 2] 1137 	ldb	#-56
   0C57 E7 E2         [ 6] 1138 	stb	,-s
   0C59 8E 01 90      [ 3] 1139 	ldx	#400
   0C5C C6 03         [ 2] 1140 	ldb	#3
   0C5E BD 0F 0B      [ 8] 1141 	jsr	_play_tune
   0C61 32 61         [ 5] 1142 	leas	1,s
   0C63 C6 A6         [ 2] 1143 	ldb	#-90
   0C65 E7 E2         [ 6] 1144 	stb	,-s
   0C67 8E 0C 33      [ 3] 1145 	ldx	#LC6
   0C6A C6 73         [ 2] 1146 	ldb	#115
   0C6C BD 0E AC      [ 8] 1147 	jsr	_print_string
   0C6F 32 61         [ 5] 1148 	leas	1,s
   0C71 C6 03         [ 2] 1149 	ldb	#3
   0C73 F7 C8 F9      [ 5] 1150 	stb	_sneakyoffset
   0C76                    1151 L75:
   0C76 39            [ 5] 1152 	rts
                           1153 	.globl	_Display_Player
   0C77                    1154 _Display_Player:
   0C77 BE C8 D6      [ 6] 1155 	ldx	_Displayed_Squares+2
   0C7A 5F            [ 2] 1156 	clrb
   0C7B AD 84         [ 7] 1157 	jsr	,x
   0C7D BE C8 DA      [ 6] 1158 	ldx	_Displayed_Squares+6
   0C80 C6 01         [ 2] 1159 	ldb	#1
   0C82 AD 84         [ 7] 1160 	jsr	,x
   0C84 BE C8 DE      [ 6] 1161 	ldx	_Displayed_Squares+10
   0C87 C6 02         [ 2] 1162 	ldb	#2
   0C89 AD 84         [ 7] 1163 	jsr	,x
   0C8B BE C8 E2      [ 6] 1164 	ldx	_Displayed_Squares+14
   0C8E C6 03         [ 2] 1165 	ldb	#3
   0C90 AD 84         [ 7] 1166 	jsr	,x
   0C92 BE C8 E6      [ 6] 1167 	ldx	_Displayed_Squares+18
   0C95 C6 04         [ 2] 1168 	ldb	#4
   0C97 AD 84         [ 7] 1169 	jsr	,x
   0C99 BE C8 EA      [ 6] 1170 	ldx	_Displayed_Squares+22
   0C9C C6 05         [ 2] 1171 	ldb	#5
   0C9E AD 84         [ 7] 1172 	jsr	,x
   0CA0 BE C8 EE      [ 6] 1173 	ldx	_Displayed_Squares+26
   0CA3 C6 06         [ 2] 1174 	ldb	#6
   0CA5 AD 84         [ 7] 1175 	jsr	,x
   0CA7 BE C8 F2      [ 6] 1176 	ldx	_Displayed_Squares+30
   0CAA C6 07         [ 2] 1177 	ldb	#7
   0CAC AD 84         [ 7] 1178 	jsr	,x
   0CAE BE C8 F6      [ 6] 1179 	ldx	_Displayed_Squares+34
   0CB1 C6 08         [ 2] 1180 	ldb	#8
   0CB3 AD 84         [ 7] 1181 	jsr	,x
   0CB5 39            [ 5] 1182 	rts
                           1183 	.globl	_execute_repeat_sequence_state
   0CB6                    1184 _execute_repeat_sequence_state:
   0CB6 32 7D         [ 5] 1185 	leas	-3,s
   0CB8 BD 03 88      [ 8] 1186 	jsr	_Display_Gamefield
   0CBB BD 08 AD      [ 8] 1187 	jsr	_Display_TimeLeft
   0CBE BD 0C 77      [ 8] 1188 	jsr	_Display_Player
   0CC1 F6 C8 F8      [ 5] 1189 	ldb	_buttonspressedcounter
   0CC4 E7 61         [ 5] 1190 	stb	1,s
   0CC6 F6 C9 24      [ 5] 1191 	ldb	_RandomSequenceCounterDisplay
   0CC9 E7 62         [ 5] 1192 	stb	2,s
   0CCB F6 C8 F8      [ 5] 1193 	ldb	_buttonspressedcounter
   0CCE E7 E4         [ 4] 1194 	stb	,s
   0CD0 E6 62         [ 5] 1195 	ldb	2,s
   0CD2 E0 E4         [ 4] 1196 	subb	,s
   0CD4 E7 E4         [ 4] 1197 	stb	,s
   0CD6 E6 E4         [ 4] 1198 	ldb	,s
   0CD8 5C            [ 2] 1199 	incb
   0CD9 E7 E4         [ 4] 1200 	stb	,s
   0CDB E6 61         [ 5] 1201 	ldb	1,s
   0CDD 34 04         [ 6] 1202 	pshs	b
   0CDF E6 61         [ 5] 1203 	ldb	1,s
   0CE1 BD 08 D8      [ 8] 1204 	jsr	_Display_LevelAdvancement
   0CE4 32 61         [ 5] 1205 	leas	1,s
   0CE6 F6 C8 FA      [ 5] 1206 	ldb	_b
   0CE9 C1 03         [ 2] 1207 	cmpb	#3	;cmpqi:
   0CEB 26 03         [ 3] 1208 	bne	L79
   0CED BD 0C 44      [ 8] 1209 	jsr	_Set_traps
   0CF0                    1210 L79:
   0CF0 BD 0A 13      [ 8] 1211 	jsr	_move_player
   0CF3 BD 0B 0D      [ 8] 1212 	jsr	_read_player_input
   0CF6 BD 0D 09      [ 8] 1213 	jsr	_check_successfully_repeated
   0CF9 32 63         [ 5] 1214 	leas	3,s
   0CFB 39            [ 5] 1215 	rts
                           1216 	.globl	_execute_display_sequence_state
   0CFC                    1217 _execute_display_sequence_state:
   0CFC BD 03 88      [ 8] 1218 	jsr	_Display_Gamefield
   0CFF BD 09 2E      [ 8] 1219 	jsr	_Display_RandomSequence
   0D02 8E 0C B6      [ 3] 1220 	ldx	#_execute_repeat_sequence_state
   0D05 BF C9 2F      [ 6] 1221 	stx	_execute_game_playing_state
   0D08 39            [ 5] 1222 	rts
                           1223 	.globl	_check_successfully_repeated
   0D09                    1224 _check_successfully_repeated:
   0D09 32 7B         [ 5] 1225 	leas	-5,s
   0D0B F6 C8 F8      [ 5] 1226 	ldb	_buttonspressedcounter
   0D0E E7 64         [ 5] 1227 	stb	4,s
   0D10 20 1E         [ 3] 1228 	bra	L84
   0D12                    1229 L86:
   0D12 E6 64         [ 5] 1230 	ldb	4,s
   0D14 4F            [ 2] 1231 	clra		;zero_extendqihi: R:b -> R:d
   0D15 1F 01         [ 6] 1232 	tfr	d,x
   0D17 E6 89 C8 FB   [ 8] 1233 	ldb	_a_random,x
   0D1B E7 62         [ 5] 1234 	stb	2,s
   0D1D E6 64         [ 5] 1235 	ldb	4,s
   0D1F 4F            [ 2] 1236 	clra		;zero_extendqihi: R:b -> R:d
   0D20 1F 01         [ 6] 1237 	tfr	d,x
   0D22 E6 89 C9 0F   [ 8] 1238 	ldb	_a_random_compare,x
   0D26 E1 62         [ 5] 1239 	cmpb	2,s	;cmpqi:(R)
   0D28 27 06         [ 3] 1240 	beq	L84
   0D2A 8E 09 B2      [ 3] 1241 	ldx	#_display_game_over
   0D2D BF C9 2F      [ 6] 1242 	stx	_execute_game_playing_state
   0D30                    1243 L84:
   0D30 E6 64         [ 5] 1244 	ldb	4,s
   0D32 E7 61         [ 5] 1245 	stb	1,s
   0D34 6D 61         [ 7] 1246 	tst	1,s
   0D36 27 04         [ 3] 1247 	beq	L85
   0D38 C6 01         [ 2] 1248 	ldb	#1
   0D3A E7 61         [ 5] 1249 	stb	1,s
   0D3C                    1250 L85:
   0D3C E6 61         [ 5] 1251 	ldb	1,s
   0D3E 6A 64         [ 7] 1252 	dec	4,s
   0D40 5D            [ 2] 1253 	tstb
   0D41 26 CF         [ 3] 1254 	bne	L86
   0D43 F6 C9 24      [ 5] 1255 	ldb	_RandomSequenceCounterDisplay
   0D46 E7 E4         [ 4] 1256 	stb	,s
   0D48 E6 E4         [ 4] 1257 	ldb	,s
   0D4A 5C            [ 2] 1258 	incb
   0D4B E7 63         [ 5] 1259 	stb	3,s
   0D4D F6 C8 F8      [ 5] 1260 	ldb	_buttonspressedcounter
   0D50 E1 63         [ 5] 1261 	cmpb	3,s	;cmpqi:(R)
   0D52 26 4B         [ 3] 1262 	bne	L88
   0D54 8E 02 5C      [ 3] 1263 	ldx	#_draw_square
   0D57 BF C8 D6      [ 6] 1264 	stx	_Displayed_Squares+2
   0D5A 8E 02 5C      [ 3] 1265 	ldx	#_draw_square
   0D5D BF C8 DA      [ 6] 1266 	stx	_Displayed_Squares+6
   0D60 8E 02 5C      [ 3] 1267 	ldx	#_draw_square
   0D63 BF C8 DE      [ 6] 1268 	stx	_Displayed_Squares+10
   0D66 8E 02 5C      [ 3] 1269 	ldx	#_draw_square
   0D69 BF C8 E2      [ 6] 1270 	stx	_Displayed_Squares+14
   0D6C 8E 02 5C      [ 3] 1271 	ldx	#_draw_square
   0D6F BF C8 E6      [ 6] 1272 	stx	_Displayed_Squares+18
   0D72 8E 02 5C      [ 3] 1273 	ldx	#_draw_square
   0D75 BF C8 EA      [ 6] 1274 	stx	_Displayed_Squares+22
   0D78 8E 02 5C      [ 3] 1275 	ldx	#_draw_square
   0D7B BF C8 EE      [ 6] 1276 	stx	_Displayed_Squares+26
   0D7E 8E 02 5C      [ 3] 1277 	ldx	#_draw_square
   0D81 BF C8 F2      [ 6] 1278 	stx	_Displayed_Squares+30
   0D84 8E 02 5C      [ 3] 1279 	ldx	#_draw_square
   0D87 BF C8 F6      [ 6] 1280 	stx	_Displayed_Squares+34
   0D8A F6 C9 24      [ 5] 1281 	ldb	_RandomSequenceCounterDisplay
   0D8D 5C            [ 2] 1282 	incb
   0D8E F7 C9 24      [ 5] 1283 	stb	_RandomSequenceCounterDisplay
   0D91 7F C8 F8      [ 7] 1284 	clr	_buttonspressedcounter
   0D94 C6 C8         [ 2] 1285 	ldb	#-56
   0D96 F7 C9 27      [ 5] 1286 	stb	_counter
   0D99 8E 0C FC      [ 3] 1287 	ldx	#_execute_display_sequence_state
   0D9C BF C9 2F      [ 6] 1288 	stx	_execute_game_playing_state
   0D9F                    1289 L88:
   0D9F 32 65         [ 5] 1290 	leas	5,s
   0DA1 39            [ 5] 1291 	rts
   0DA2                    1292 LC7:
   0DA2 53 45 4C 45 43 54  1293 	.byte	83,69,76,69,67,84,32,84
        20 54
   0DAA 48 45 20 47 41 4D  1294 	.byte	72,69,32,71,65,77,69,77
        45 4D
   0DB2 4F 44 45 80 00     1295 	.byte	79,68,69,-128,0
   0DB7                    1296 LC8:
   0DB7 4E 4F 52 4D 41 4C  1297 	.byte	78,79,82,77,65,76,-128,0
        80 00
   0DBF                    1298 LC9:
   0DBF 48 41 52 44 80 00  1299 	.byte	72,65,82,68,-128,0
                           1300 	.globl	_level_init
   0DC5                    1301 _level_init:
   0DC5 32 7F         [ 5] 1302 	leas	-1,s
   0DC7 C6 01         [ 2] 1303 	ldb	#1
   0DC9 F7 C8 1F      [ 5] 1304 	stb	_Vec_Joy_Mux_1_X
   0DCC C6 03         [ 2] 1305 	ldb	#3
   0DCE F7 C8 20      [ 5] 1306 	stb	_Vec_Joy_Mux_1_Y
   0DD1 7F C8 21      [ 7] 1307 	clr	_Vec_Joy_Mux_2_X
   0DD4 7F C8 22      [ 7] 1308 	clr	_Vec_Joy_Mux_2_Y
   0DD7 6F E4         [ 6] 1309 	clr	,s
   0DD9 16 00 74      [ 5] 1310 	lbra	L90
   0DDC                    1311 L95:
   0DDC BD F1 BA      [ 8] 1312 	jsr	___Read_Btns
   0DDF 6C E4         [ 6] 1313 	inc	,s
   0DE1 C6 88         [ 2] 1314 	ldb	#-120
   0DE3 E7 E2         [ 6] 1315 	stb	,-s
   0DE5 8E 0D A2      [ 3] 1316 	ldx	#LC7
   0DE8 C6 64         [ 2] 1317 	ldb	#100
   0DEA BD 0E AC      [ 8] 1318 	jsr	_print_string
   0DED 32 61         [ 5] 1319 	leas	1,s
   0DEF C6 CE         [ 2] 1320 	ldb	#-50
   0DF1 E7 E2         [ 6] 1321 	stb	,-s
   0DF3 8E 0D B7      [ 3] 1322 	ldx	#LC8
   0DF6 C6 3C         [ 2] 1323 	ldb	#60
   0DF8 BD 0E AC      [ 8] 1324 	jsr	_print_string
   0DFB 32 61         [ 5] 1325 	leas	1,s
   0DFD C6 CE         [ 2] 1326 	ldb	#-50
   0DFF E7 E2         [ 6] 1327 	stb	,-s
   0E01 8E 0D BF      [ 3] 1328 	ldx	#LC9
   0E04 C6 28         [ 2] 1329 	ldb	#40
   0E06 BD 0E AC      [ 8] 1330 	jsr	_print_string
   0E09 32 61         [ 5] 1331 	leas	1,s
   0E0B BD F1 BA      [ 8] 1332 	jsr	___Read_Btns
   0E0E BD F1 F8      [ 8] 1333 	jsr	___Joy_Digital
   0E11 F6 C8 1C      [ 5] 1334 	ldb	_Vec_Joy_1_Y
   0E14 5D            [ 2] 1335 	tstb
   0E15 27 06         [ 3] 1336 	beq	L91
   0E17 F6 C8 1C      [ 5] 1337 	ldb	_Vec_Joy_1_Y
   0E1A F7 C9 29      [ 5] 1338 	stb	_joy_y
   0E1D                    1339 L91:
   0E1D F6 C9 29      [ 5] 1340 	ldb	_joy_y
   0E20 5D            [ 2] 1341 	tstb
   0E21 2F 04         [ 3] 1342 	ble	L92
   0E23 5F            [ 2] 1343 	clrb
   0E24 BD 04 2F      [ 8] 1344 	jsr	_draw_menu_arrow
   0E27                    1345 L92:
   0E27 F6 C9 29      [ 5] 1346 	ldb	_joy_y
   0E2A 5D            [ 2] 1347 	tstb
   0E2B 2C 05         [ 3] 1348 	bge	L93
   0E2D C6 01         [ 2] 1349 	ldb	#1
   0E2F BD 04 2F      [ 8] 1350 	jsr	_draw_menu_arrow
   0E32                    1351 L93:
   0E32 F6 C8 11      [ 5] 1352 	ldb	_Vec_Buttons
   0E35 C4 01         [ 2] 1353 	andb	#1
   0E37 5D            [ 2] 1354 	tstb
   0E38 27 16         [ 3] 1355 	beq	L90
   0E3A F6 C9 29      [ 5] 1356 	ldb	_joy_y
   0E3D 5D            [ 2] 1357 	tstb
   0E3E 2F 05         [ 3] 1358 	ble	L94
   0E40 C6 02         [ 2] 1359 	ldb	#2
   0E42 F7 C8 FA      [ 5] 1360 	stb	_b
   0E45                    1361 L94:
   0E45 F6 C9 29      [ 5] 1362 	ldb	_joy_y
   0E48 5D            [ 2] 1363 	tstb
   0E49 2C 05         [ 3] 1364 	bge	L90
   0E4B C6 03         [ 2] 1365 	ldb	#3
   0E4D F7 C8 FA      [ 5] 1366 	stb	_b
   0E50                    1367 L90:
   0E50 F6 C8 FA      [ 5] 1368 	ldb	_b
   0E53 C1 01         [ 2] 1369 	cmpb	#1	;cmpqi:
   0E55 10 2F FF 83   [ 6] 1370 	lble	L95
   0E59 E6 E4         [ 4] 1371 	ldb	,s
   0E5B BD 08 11      [ 8] 1372 	jsr	_rand
   0E5E 7F C9 25      [ 7] 1373 	clr	_current_level
   0E61 8E 0C FC      [ 3] 1374 	ldx	#_execute_display_sequence_state
   0E64 BF C9 2F      [ 6] 1375 	stx	_execute_game_playing_state
   0E67 32 61         [ 5] 1376 	leas	1,s
   0E69 39            [ 5] 1377 	rts
                           1378 	.globl	_level_play
   0E6A                    1379 _level_play:
   0E6A 32 7C         [ 5] 1380 	leas	-4,s
   0E6C 20 25         [ 3] 1381 	bra	L98
   0E6E                    1382 L99:
   0E6E BD F1 AF      [ 8] 1383 	jsr	___DP_to_C8
   0E71 BE C9 2B      [ 6] 1384 	ldx	_current_explosion
   0E74 AF E4         [ 5] 1385 	stx	,s
   0E76 AE E4         [ 5] 1386 	ldx	,s
   0E78 BD 0E D6      [ 8] 1387 	jsr	__Explosion_Snd
   0E7B BE C9 2D      [ 6] 1388 	ldx	_current_music
   0E7E AF 62         [ 6] 1389 	stx	2,s
   0E80 AE 62         [ 6] 1390 	ldx	2,s
   0E82 BD 0E DF      [ 8] 1391 	jsr	__Init_Music_chk
   0E85 BD F1 92      [ 8] 1392 	jsr	___Wait_Recal
   0E88 BD 0E F9      [ 8] 1393 	jsr	__Do_Sound
   0E8B BD F2 A5      [ 8] 1394 	jsr	___Intensity_5F
   0E8E BE C9 2F      [ 6] 1395 	ldx	_execute_game_playing_state
   0E91 AD 84         [ 7] 1396 	jsr	,x
   0E93                    1397 L98:
   0E93 F6 C9 25      [ 5] 1398 	ldb	_current_level
   0E96 5D            [ 2] 1399 	tstb
   0E97 27 D5         [ 3] 1400 	beq	L99
   0E99 32 64         [ 5] 1401 	leas	4,s
   0E9B 39            [ 5] 1402 	rts
ASxxxx Assembler V05.50  (Motorola 6809)                                Page 1
Hexadecimal [16-Bits]                                 Fri Jun 13 00:53:11 2025

Symbol Table

    .__.$$$.       =   2710 L   |     .__.ABS.       =   0000 G
    .__.CPU.       =   0000 L   |     .__.H$L.       =   0001 L
  2 L11                029D R   |   2 L12                02AD R
  2 L14                02BC R   |   2 L15                02C8 R
  2 L16                02B4 R   |   2 L17                02D6 R
  2 L18                02E2 R   |   2 L19                02D1 R
  2 L2                 01DE R   |   2 L22                035E R
  2 L23                034A R   |   2 L24                030A R
  2 L29                03D4 R   |   2 L3                 01B3 R
  2 L30                03C9 R   |   2 L31                03E6 R
  2 L33                040C R   |   2 L34                0412 R
  2 L35                0426 R   |   2 L36                042C R
  2 L37                0440 R   |   2 L38                0446 R
  2 L39                045A R   |   2 L40                0460 R
  2 L41                0474 R   |   2 L42                047A R
  2 L43                048E R   |   2 L44                0494 R
  2 L45                04A8 R   |   2 L46                04AE R
  2 L47                04C2 R   |   2 L48                04C8 R
  2 L49                04DC R   |   2 L51                04E2 R
  2 L53                0514 R   |   2 L54                051A R
  2 L55                052D R   |   2 L56                0533 R
  2 L57                0546 R   |   2 L58                054C R
  2 L59                055F R   |   2 L6                 0262 R
  2 L60                0565 R   |   2 L61                0578 R
  2 L62                057E R   |   2 L63                0591 R
  2 L64                0597 R   |   2 L65                05AA R
  2 L66                05B0 R   |   2 L67                05C3 R
  2 L68                05C9 R   |   2 L69                05DC R
  2 L7                 01F0 R   |   2 L70                05E2 R
  2 L72                0606 R   |   2 L75                064C R
  2 L79                06C6 R   |   2 L84                0706 R
  2 L85                0712 R   |   2 L86                06E8 R
  2 L88                0775 R   |   2 L90                0826 R
  2 L91                07F3 R   |   2 L92                07FD R
  2 L93                0808 R   |   2 L94                081B R
  2 L95                07B2 R   |   2 L98                0869 R
  2 L99                0844 R   |   2 LC0                026D R
  2 LC1                0278 R   |   2 LC2                02EC R
  2 LC3                02FA R   |   2 LC4                036C R
  2 LC5                037C R   |   2 LC6                0609 R
  2 LC7                0778 R   |   2 LC8                078D R
  2 LC9                0795 R   |   2 _Brainleft         0128 GR
  2 _Brainright        009B GR  |   2 _BrainrightDet     010A GR
    _Display_Gamef     **** GX  |   2 _Display_Level     02AE GR
  2 _Display_Playe     064D GR  |   2 _Display_Rando     0304 GR
  2 _Display_TimeL     0283 GR  |   3 _Displayed_Squ     0001 GR
  2 _Gamefield         008C GR  |   2 _Level_advance     0012 GR
    _Loadingbar        **** GX  |   2 _Positions_Arr     0197 GR
  2 _Positions_Cur     0000 GR  |   2 _RandomNumberG     01AD GR
  3 _RandomSequenc     0050 GR  |   3 _RandomSequenc     0051 GR
  3 _SequenceTime      0053 GR  |   2 _Set_traps         061A GR
    _Vec_Buttons       **** GX  |     _Vec_Joy_1_X       **** GX
    _Vec_Joy_1_Y       **** GX  |     _Vec_Joy_Mux_1     **** GX
    _Vec_Joy_Mux_1     **** GX  |     _Vec_Joy_Mux_2     **** GX
    _Vec_Joy_Mux_2     **** GX  |     __Do_Sound         **** GX
    __Explosion_Sn     **** GX  |     __Init_Music_c     **** GX
    ___DP_to_C8        **** GX  |     ___Intensity_5     **** GX
    ___Joy_Digital     **** GX  |     ___Read_Btns       **** GX
    ___Wait_Recal      **** GX  |   3 _a_random          0028 GR
  3 _a_random_comp     003C GR  |   2 _advancement_c     006E GR
  2 _advancement_p     007D GR  |   2 _arrow             019B GR
  3 _b                 0027 GR  |   3 _buttonspresse     0025 GR
  2 _check_success     06DF GR  |   3 _counter           0054 GR
  2 _cross             0032 GR  |     _current_explo     **** GX
  3 _current_level     0052 GR  |     _current_music     **** GX
  2 _display_game_     0388 GR  |     _draw_menu_arr     **** GX
    _draw_round_ad     **** GX  |     _draw_round_ad     **** GX
    _draw_square       **** GX  |     _draw_square_f     **** GX
  2 _execute_displ     06D2 GR  |   4 _execute_game_     0000 GR
  2 _execute_repea     068C GR  |   3 _joy_x             0055 GR
  3 _joy_y             0056 GR  |   2 _level_init        079B GR
  2 _level_play        0840 GR  |   2 _move_player       03E9 GR
    _play_tune         **** GX  |     _print_string      **** GX
  2 _rand              01E7 GR  |   2 _read_player_i     04E3 GR
  3 _sf                0000 GR  |   3 _sneakyoffset      0026 GR
  2 _square            0041 GR  |   2 _square_filled     0053 GR
  3 _temppass          0057 GR  |     _umodhi3           **** GX

ASxxxx Assembler V05.50  (Motorola 6809)                                Page 2
Hexadecimal [16-Bits]                                 Fri Jun 13 00:53:11 2025

Area Table

[_CSEG]
   0 _CODE            size    0   flags C080
   2 .text            size  872   flags  100
   3 .data            size   58   flags  100
   4 .bss             size    2   flags    0
[_DSEG]
   1 _DATA            size    0   flags C0C0

