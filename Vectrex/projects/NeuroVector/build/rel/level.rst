                              1 ;;; gcc for m6809 : Mar 17 2019 13:25:32
                              2 ;;; 4.3.6 (gcc6809)
                              3 ;;; ABI version 1
                              4 ;;; -mabi=bx -mint8 -fomit-frame-pointer -O0
                              5 	.module	level.c
                              6 	.globl	_Level_advancement
                              7 	.area	.text
   06DD                       8 _Level_advancement:
   06DD C4                    9 	.byte	-60
   06DE DD                   10 	.byte	-35
   06DF C4                   11 	.byte	-60
   06E0 E7                   12 	.byte	-25
   06E1 C4                   13 	.byte	-60
   06E2 F1                   14 	.byte	-15
   06E3 C4                   15 	.byte	-60
   06E4 FB                   16 	.byte	-5
   06E5 C4                   17 	.byte	-60
   06E6 05                   18 	.byte	5
   06E7 C4                   19 	.byte	-60
   06E8 0F                   20 	.byte	15
   06E9 C4                   21 	.byte	-60
   06EA 19                   22 	.byte	25
   06EB C4                   23 	.byte	-60
   06EC 23                   24 	.byte	35
   06ED BA                   25 	.byte	-70
   06EE DD                   26 	.byte	-35
   06EF BA                   27 	.byte	-70
   06F0 E7                   28 	.byte	-25
   06F1 BA                   29 	.byte	-70
   06F2 F1                   30 	.byte	-15
   06F3 BA                   31 	.byte	-70
   06F4 FB                   32 	.byte	-5
   06F5 BA                   33 	.byte	-70
   06F6 05                   34 	.byte	5
   06F7 BA                   35 	.byte	-70
   06F8 0F                   36 	.byte	15
   06F9 BA                   37 	.byte	-70
   06FA 19                   38 	.byte	25
   06FB BA                   39 	.byte	-70
   06FC 23                   40 	.byte	35
                             41 	.globl	_cross
   06FD                      42 _cross:
   06FD 00                   43 	.byte	0
   06FE 20                   44 	.byte	32
   06FF 20                   45 	.byte	32
   0700 FF                   46 	.byte	-1
   0701 E0                   47 	.byte	-32
   0702 E0                   48 	.byte	-32
   0703 00                   49 	.byte	0
   0704 20                   50 	.byte	32
   0705 00                   51 	.byte	0
   0706 FF                   52 	.byte	-1
   0707 E0                   53 	.byte	-32
   0708 20                   54 	.byte	32
   0709 01                   55 	.byte	1
   070A 00                   56 	.byte	0
   070B 00                   57 	.byte	0
                             58 	.globl	_square
   070C                      59 _square:
   070C 00                   60 	.byte	0
   070D 3C                   61 	.byte	60
   070E C4                   62 	.byte	-60
   070F FF                   63 	.byte	-1
   0710 00                   64 	.byte	0
   0711 78                   65 	.byte	120
   0712 FF                   66 	.byte	-1
   0713 88                   67 	.byte	-120
   0714 00                   68 	.byte	0
   0715 FF                   69 	.byte	-1
   0716 00                   70 	.byte	0
   0717 88                   71 	.byte	-120
   0718 FF                   72 	.byte	-1
   0719 78                   73 	.byte	120
   071A 00                   74 	.byte	0
   071B 01                   75 	.byte	1
   071C 00                   76 	.byte	0
   071D 00                   77 	.byte	0
                             78 	.globl	_square_filled
   071E                      79 _square_filled:
   071E 00                   80 	.byte	0
   071F 3C                   81 	.byte	60
   0720 C4                   82 	.byte	-60
   0721 FF                   83 	.byte	-1
   0722 00                   84 	.byte	0
   0723 78                   85 	.byte	120
   0724 FF                   86 	.byte	-1
   0725 88                   87 	.byte	-120
   0726 00                   88 	.byte	0
   0727 FF                   89 	.byte	-1
   0728 00                   90 	.byte	0
   0729 88                   91 	.byte	-120
   072A FF                   92 	.byte	-1
   072B 78                   93 	.byte	120
   072C 00                   94 	.byte	0
   072D FF                   95 	.byte	-1
   072E 88                   96 	.byte	-120
   072F 78                   97 	.byte	120
   0730 00                   98 	.byte	0
   0731 78                   99 	.byte	120
   0732 00                  100 	.byte	0
   0733 FF                  101 	.byte	-1
   0734 88                  102 	.byte	-120
   0735 88                  103 	.byte	-120
   0736 01                  104 	.byte	1
   0737 00                  105 	.byte	0
   0738 00                  106 	.byte	0
                            107 	.globl	_advancement_cross
   0739                     108 _advancement_cross:
   0739 00                  109 	.byte	0
   073A 10                  110 	.byte	16
   073B 20                  111 	.byte	32
   073C FF                  112 	.byte	-1
   073D E0                  113 	.byte	-32
   073E E0                  114 	.byte	-32
   073F 00                  115 	.byte	0
   0740 20                  116 	.byte	32
   0741 00                  117 	.byte	0
   0742 FF                  118 	.byte	-1
   0743 E0                  119 	.byte	-32
   0744 20                  120 	.byte	32
   0745 01                  121 	.byte	1
   0746 00                  122 	.byte	0
   0747 00                  123 	.byte	0
                            124 	.globl	_advancement_plus
   0748                     125 _advancement_plus:
   0748 00                  126 	.byte	0
   0749 20                  127 	.byte	32
   074A 10                  128 	.byte	16
   074B FF                  129 	.byte	-1
   074C E0                  130 	.byte	-32
   074D 00                  131 	.byte	0
   074E 00                  132 	.byte	0
   074F 10                  133 	.byte	16
   0750 10                  134 	.byte	16
   0751 FF                  135 	.byte	-1
   0752 00                  136 	.byte	0
   0753 E0                  137 	.byte	-32
   0754 01                  138 	.byte	1
   0755 00                  139 	.byte	0
   0756 00                  140 	.byte	0
                            141 	.globl	_Gamefield
   0757                     142 _Gamefield:
   0757 FF                  143 	.byte	-1
   0758 88                  144 	.byte	-120
   0759 00                  145 	.byte	0
   075A FF                  146 	.byte	-1
   075B 00                  147 	.byte	0
   075C 78                  148 	.byte	120
   075D FF                  149 	.byte	-1
   075E 78                  150 	.byte	120
   075F 00                  151 	.byte	0
   0760 FF                  152 	.byte	-1
   0761 00                  153 	.byte	0
   0762 88                  154 	.byte	-120
   0763 01                  155 	.byte	1
   0764 00                  156 	.byte	0
   0765 00                  157 	.byte	0
                            158 	.globl	_Lifelinestruct
   0766                     159 _Lifelinestruct:
   0766 FF                  160 	.byte	-1
   0767 00                  161 	.byte	0
   0768 1E                  162 	.byte	30
   0769 FF                  163 	.byte	-1
   076A 0F                  164 	.byte	15
   076B 0A                  165 	.byte	10
   076C FF                  166 	.byte	-1
   076D F1                  167 	.byte	-15
   076E 0A                  168 	.byte	10
   076F FF                  169 	.byte	-1
   0770 00                  170 	.byte	0
   0771 0F                  171 	.byte	15
   0772 FF                  172 	.byte	-1
   0773 F1                  173 	.byte	-15
   0774 0A                  174 	.byte	10
   0775 FF                  175 	.byte	-1
   0776 2D                  176 	.byte	45
   0777 0F                  177 	.byte	15
   0778 FF                  178 	.byte	-1
   0779 C9                  179 	.byte	-55
   077A 0F                  180 	.byte	15
   077B FF                  181 	.byte	-1
   077C 19                  182 	.byte	25
   077D 0F                  183 	.byte	15
   077E FF                  184 	.byte	-1
   077F 00                  185 	.byte	0
   0780 0F                  186 	.byte	15
   0781 01                  187 	.byte	1
   0782 00                  188 	.byte	0
   0783 00                  189 	.byte	0
                            190 	.globl	_Brainright
   0784                     191 _Brainright:
   0784 00                  192 	.byte	0
   0785 88                  193 	.byte	-120
   0786 78                  194 	.byte	120
   0787 00                  195 	.byte	0
   0788 88                  196 	.byte	-120
   0789 00                  197 	.byte	0
   078A 00                  198 	.byte	0
   078B 88                  199 	.byte	-120
   078C 00                  200 	.byte	0
   078D 00                  201 	.byte	0
   078E 88                  202 	.byte	-120
   078F 00                  203 	.byte	0
   0790 00                  204 	.byte	0
   0791 EC                  205 	.byte	-20
   0792 9C                  206 	.byte	-100
   0793 00                  207 	.byte	0
   0794 EC                  208 	.byte	-20
   0795 9C                  209 	.byte	-100
   0796 00                  210 	.byte	0
   0797 EC                  211 	.byte	-20
   0798 BA                  212 	.byte	-70
   0799 FF                  213 	.byte	-1
   079A 00                  214 	.byte	0
   079B 64                  215 	.byte	100
   079C FF                  216 	.byte	-1
   079D 00                  217 	.byte	0
   079E 64                  218 	.byte	100
   079F FF                  219 	.byte	-1
   07A0 00                  220 	.byte	0
   07A1 5A                  221 	.byte	90
   07A2 00                  222 	.byte	0
   07A3 3C                  223 	.byte	60
   07A4 E2                  224 	.byte	-30
   07A5 FF                  225 	.byte	-1
   07A6 9C                  226 	.byte	-100
   07A7 32                  227 	.byte	50
   07A8 FF                  228 	.byte	-1
   07A9 00                  229 	.byte	0
   07AA 3C                  230 	.byte	60
   07AB FF                  231 	.byte	-1
   07AC 00                  232 	.byte	0
   07AD 4B                  233 	.byte	75
   07AE FF                  234 	.byte	-1
   07AF 32                  235 	.byte	50
   07B0 4B                  236 	.byte	75
   07B1 FF                  237 	.byte	-1
   07B2 32                  238 	.byte	50
   07B3 4B                  239 	.byte	75
   07B4 FF                  240 	.byte	-1
   07B5 32                  241 	.byte	50
   07B6 00                  242 	.byte	0
   07B7 FF                  243 	.byte	-1
   07B8 1E                  244 	.byte	30
   07B9 3C                  245 	.byte	60
   07BA FF                  246 	.byte	-1
   07BB 50                  247 	.byte	80
   07BC 28                  248 	.byte	40
   07BD FF                  249 	.byte	-1
   07BE 3C                  250 	.byte	60
   07BF 00                  251 	.byte	0
   07C0 FF                  252 	.byte	-1
   07C1 14                  253 	.byte	20
   07C2 EC                  254 	.byte	-20
   07C3 FF                  255 	.byte	-1
   07C4 0F                  256 	.byte	15
   07C5 E2                  257 	.byte	-30
   07C6 FF                  258 	.byte	-1
   07C7 EC                  259 	.byte	-20
   07C8 CE                  260 	.byte	-50
   07C9 00                  261 	.byte	0
   07CA 14                  262 	.byte	20
   07CB 32                  263 	.byte	50
   07CC FF                  264 	.byte	-1
   07CD 1E                  265 	.byte	30
   07CE 1E                  266 	.byte	30
   07CF FF                  267 	.byte	-1
   07D0 46                  268 	.byte	70
   07D1 00                  269 	.byte	0
   07D2 FF                  270 	.byte	-1
   07D3 1E                  271 	.byte	30
   07D4 F6                  272 	.byte	-10
   07D5 FF                  273 	.byte	-1
   07D6 D8                  274 	.byte	-40
   07D7 BA                  275 	.byte	-70
   07D8 00                  276 	.byte	0
   07D9 28                  277 	.byte	40
   07DA 46                  278 	.byte	70
   07DB FF                  279 	.byte	-1
   07DC 46                  280 	.byte	70
   07DD 00                  281 	.byte	0
   07DE FF                  282 	.byte	-1
   07DF 32                  283 	.byte	50
   07E0 E7                  284 	.byte	-25
   07E1 FF                  285 	.byte	-1
   07E2 00                  286 	.byte	0
   07E3 C4                  287 	.byte	-60
   07E4 FF                  288 	.byte	-1
   07E5 CE                  289 	.byte	-50
   07E6 E7                  290 	.byte	-25
   07E7 FF                  291 	.byte	-1
   07E8 E7                  292 	.byte	-25
   07E9 CE                  293 	.byte	-50
   07EA 00                  294 	.byte	0
   07EB 4B                  295 	.byte	75
   07EC 4B                  296 	.byte	75
   07ED FF                  297 	.byte	-1
   07EE 3C                  298 	.byte	60
   07EF E2                  299 	.byte	-30
   07F0 FF                  300 	.byte	-1
   07F1 3C                  301 	.byte	60
   07F2 E2                  302 	.byte	-30
   07F3 FF                  303 	.byte	-1
   07F4 3C                  304 	.byte	60
   07F5 CE                  305 	.byte	-50
   07F6 FF                  306 	.byte	-1
   07F7 00                  307 	.byte	0
   07F8 CE                  308 	.byte	-50
   07F9 FF                  309 	.byte	-1
   07FA 28                  310 	.byte	40
   07FB CE                  311 	.byte	-50
   07FC FF                  312 	.byte	-1
   07FD 1E                  313 	.byte	30
   07FE 9C                  314 	.byte	-100
   07FF FF                  315 	.byte	-1
   0800 E2                  316 	.byte	-30
   0801 C4                  317 	.byte	-60
   0802 FF                  318 	.byte	-1
   0803 E2                  319 	.byte	-30
   0804 BF                  320 	.byte	-65
   0805 01                  321 	.byte	1
   0806 00                  322 	.byte	0
   0807 00                  323 	.byte	0
                            324 	.globl	_Brainleft
   0808                     325 _Brainleft:
   0808 00                  326 	.byte	0
   0809 88                  327 	.byte	-120
   080A 88                  328 	.byte	-120
   080B 00                  329 	.byte	0
   080C 88                  330 	.byte	-120
   080D 00                  331 	.byte	0
   080E 00                  332 	.byte	0
   080F 88                  333 	.byte	-120
   0810 00                  334 	.byte	0
   0811 00                  335 	.byte	0
   0812 88                  336 	.byte	-120
   0813 00                  337 	.byte	0
   0814 FF                  338 	.byte	-1
   0815 9C                  339 	.byte	-100
   0816 CE                  340 	.byte	-50
   0817 FF                  341 	.byte	-1
   0818 00                  342 	.byte	0
   0819 C4                  343 	.byte	-60
   081A FF                  344 	.byte	-1
   081B 00                  345 	.byte	0
   081C B5                  346 	.byte	-75
   081D FF                  347 	.byte	-1
   081E 32                  348 	.byte	50
   081F B5                  349 	.byte	-75
   0820 FF                  350 	.byte	-1
   0821 32                  351 	.byte	50
   0822 B5                  352 	.byte	-75
   0823 FF                  353 	.byte	-1
   0824 32                  354 	.byte	50
   0825 00                  355 	.byte	0
   0826 FF                  356 	.byte	-1
   0827 1E                  357 	.byte	30
   0828 C4                  358 	.byte	-60
   0829 FF                  359 	.byte	-1
   082A 50                  360 	.byte	80
   082B D8                  361 	.byte	-40
   082C FF                  362 	.byte	-1
   082D 3C                  363 	.byte	60
   082E 00                  364 	.byte	0
   082F FF                  365 	.byte	-1
   0830 14                  366 	.byte	20
   0831 14                  367 	.byte	20
   0832 FF                  368 	.byte	-1
   0833 0F                  369 	.byte	15
   0834 1E                  370 	.byte	30
   0835 FF                  371 	.byte	-1
   0836 EC                  372 	.byte	-20
   0837 32                  373 	.byte	50
   0838 00                  374 	.byte	0
   0839 14                  375 	.byte	20
   083A CE                  376 	.byte	-50
   083B FF                  377 	.byte	-1
   083C 1E                  378 	.byte	30
   083D E2                  379 	.byte	-30
   083E FF                  380 	.byte	-1
   083F 46                  381 	.byte	70
   0840 00                  382 	.byte	0
   0841 FF                  383 	.byte	-1
   0842 1E                  384 	.byte	30
   0843 0A                  385 	.byte	10
   0844 FF                  386 	.byte	-1
   0845 D8                  387 	.byte	-40
   0846 46                  388 	.byte	70
   0847 00                  389 	.byte	0
   0848 28                  390 	.byte	40
   0849 BA                  391 	.byte	-70
   084A FF                  392 	.byte	-1
   084B 46                  393 	.byte	70
   084C 00                  394 	.byte	0
   084D FF                  395 	.byte	-1
   084E 32                  396 	.byte	50
   084F 19                  397 	.byte	25
   0850 FF                  398 	.byte	-1
   0851 00                  399 	.byte	0
   0852 3C                  400 	.byte	60
   0853 FF                  401 	.byte	-1
   0854 CE                  402 	.byte	-50
   0855 19                  403 	.byte	25
   0856 FF                  404 	.byte	-1
   0857 E7                  405 	.byte	-25
   0858 32                  406 	.byte	50
   0859 00                  407 	.byte	0
   085A 4B                  408 	.byte	75
   085B B5                  409 	.byte	-75
   085C FF                  410 	.byte	-1
   085D 3C                  411 	.byte	60
   085E 1E                  412 	.byte	30
   085F FF                  413 	.byte	-1
   0860 3C                  414 	.byte	60
   0861 1E                  415 	.byte	30
   0862 FF                  416 	.byte	-1
   0863 3C                  417 	.byte	60
   0864 32                  418 	.byte	50
   0865 FF                  419 	.byte	-1
   0866 00                  420 	.byte	0
   0867 32                  421 	.byte	50
   0868 FF                  422 	.byte	-1
   0869 28                  423 	.byte	40
   086A 32                  424 	.byte	50
   086B FF                  425 	.byte	-1
   086C 1E                  426 	.byte	30
   086D 64                  427 	.byte	100
   086E FF                  428 	.byte	-1
   086F E2                  429 	.byte	-30
   0870 3C                  430 	.byte	60
   0871 FF                  431 	.byte	-1
   0872 E2                  432 	.byte	-30
   0873 41                  433 	.byte	65
   0874 01                  434 	.byte	1
   0875 00                  435 	.byte	0
   0876 00                  436 	.byte	0
                            437 	.globl	_Positions_Arrow
   0877                     438 _Positions_Arrow:
   0877 3C                  439 	.byte	60
   0878 C9                  440 	.byte	-55
   0879 28                  441 	.byte	40
   087A C9                  442 	.byte	-55
   087B 14                  443 	.byte	20
   087C C9                  444 	.byte	-55
                            445 	.globl	_arrow
   087D                     446 _arrow:
   087D 00                  447 	.byte	0
   087E 04                  448 	.byte	4
   087F 00                  449 	.byte	0
   0880 FF                  450 	.byte	-1
   0881 F6                  451 	.byte	-10
   0882 0A                  452 	.byte	10
   0883 FF                  453 	.byte	-1
   0884 F6                  454 	.byte	-10
   0885 F6                  455 	.byte	-10
   0886 00                  456 	.byte	0
   0887 0A                  457 	.byte	10
   0888 0A                  458 	.byte	10
   0889 FF                  459 	.byte	-1
   088A 00                  460 	.byte	0
   088B EC                  461 	.byte	-20
   088C 01                  462 	.byte	1
   088D 00                  463 	.byte	0
   088E 00                  464 	.byte	0
                            465 	.globl	_buttonspressedcounter
                            466 	.area	.data
   C889                     467 _buttonspressedcounter:
   C889 00                  468 	.byte	0
                            469 	.globl	_sneakyoffset
   C88A                     470 _sneakyoffset:
   C88A 00                  471 	.byte	0
                            472 	.globl	_b
   C88B                     473 _b:
   C88B 01                  474 	.byte	1
                            475 	.globl	_RandomSequenceCounter
   C88C                     476 _RandomSequenceCounter:
   C88C 32                  477 	.byte	50
                            478 	.globl	_RandomSequenceCounterDisplay
   C88D                     479 _RandomSequenceCounterDisplay:
   C88D 01                  480 	.byte	1
                            481 	.globl	_HighscoreNormal
   C88E                     482 _HighscoreNormal:
   C88E 00                  483 	.byte	0
                            484 	.globl	_HighscoreHard
   C88F                     485 _HighscoreHard:
   C88F 00                  486 	.byte	0
                            487 	.globl	_HighscoreExtrem
   C890                     488 _HighscoreExtrem:
   C890 00                  489 	.byte	0
                            490 	.globl	_Random_Number_for_random_things
   C891                     491 _Random_Number_for_random_things:
   C891 00                  492 	.byte	0
                            493 	.globl	_SequenceTime
   C892                     494 _SequenceTime:
   C892 01                  495 	.byte	1
                            496 	.globl	_counter
   C893                     497 _counter:
   C893 03                  498 	.byte	3
                            499 	.globl	_joy_x
   C894                     500 _joy_x:
   C894 00                  501 	.byte	0
                            502 	.globl	_joy_y
   C895                     503 _joy_y:
   C895 00                  504 	.byte	0
                            505 	.globl	_temppass
   C896                     506 _temppass:
   C896 00                  507 	.byte	0
                            508 	.area	.bss
                            509 	.globl	_execute_game_playing_state
   C91E                     510 _execute_game_playing_state:	.blkb	2
                            511 	.globl	_current_level
                            512 	.area	.data
   C897                     513 _current_level:
   C897 00                  514 	.byte	0
                            515 	.globl	_Displayed_Squares
   C898                     516 _Displayed_Squares:
   C898 10                  517 	.byte	16
   C899 F0                  518 	.byte	-16
   C89A 02 10               519 	.word	_draw_square
   C89C 13 BE               520 	.word	_add_square_x
   C89E 14 5C               521 	.word	_add_square_y
   C8A0 00                  522 	.byte	0
   C8A1 00                  523 	.byte	0
   C8A2 10                  524 	.byte	16
   C8A3 00                  525 	.byte	0
   C8A4 02 10               526 	.word	_draw_square
   C8A6 13 BE               527 	.word	_add_square_x
   C8A8 14 5C               528 	.word	_add_square_y
   C8AA 00                  529 	.byte	0
   C8AB 00                  530 	.byte	0
   C8AC 10                  531 	.byte	16
   C8AD 10                  532 	.byte	16
   C8AE 02 10               533 	.word	_draw_square
   C8B0 13 BE               534 	.word	_add_square_x
   C8B2 14 5C               535 	.word	_add_square_y
   C8B4 00                  536 	.byte	0
   C8B5 00                  537 	.byte	0
   C8B6 00                  538 	.byte	0
   C8B7 F0                  539 	.byte	-16
   C8B8 02 10               540 	.word	_draw_square
   C8BA 13 BE               541 	.word	_add_square_x
   C8BC 14 5C               542 	.word	_add_square_y
   C8BE 00                  543 	.byte	0
   C8BF 00                  544 	.byte	0
   C8C0 00                  545 	.byte	0
   C8C1 00                  546 	.byte	0
   C8C2 02 10               547 	.word	_draw_square
   C8C4 13 BE               548 	.word	_add_square_x
   C8C6 14 5C               549 	.word	_add_square_y
   C8C8 00                  550 	.byte	0
   C8C9 00                  551 	.byte	0
   C8CA 00                  552 	.byte	0
   C8CB 10                  553 	.byte	16
   C8CC 02 10               554 	.word	_draw_square
   C8CE 13 BE               555 	.word	_add_square_x
   C8D0 14 5C               556 	.word	_add_square_y
   C8D2 00                  557 	.byte	0
   C8D3 00                  558 	.byte	0
   C8D4 F0                  559 	.byte	-16
   C8D5 F0                  560 	.byte	-16
   C8D6 02 10               561 	.word	_draw_square
   C8D8 13 BE               562 	.word	_add_square_x
   C8DA 14 5C               563 	.word	_add_square_y
   C8DC 00                  564 	.byte	0
   C8DD 00                  565 	.byte	0
   C8DE F0                  566 	.byte	-16
   C8DF 00                  567 	.byte	0
   C8E0 02 10               568 	.word	_draw_square
   C8E2 13 BE               569 	.word	_add_square_x
   C8E4 14 5C               570 	.word	_add_square_y
   C8E6 00                  571 	.byte	0
   C8E7 00                  572 	.byte	0
   C8E8 F0                  573 	.byte	-16
   C8E9 10                  574 	.byte	16
   C8EA 02 10               575 	.word	_draw_square
   C8EC 13 BE               576 	.word	_add_square_x
   C8EE 14 5C               577 	.word	_add_square_y
   C8F0 00                  578 	.byte	0
   C8F1 00                  579 	.byte	0
                            580 	.globl	_a_random
   C8F2                     581 _a_random:
   C8F2 03                  582 	.byte	3
   C8F3 09                  583 	.byte	9
   C8F4 07                  584 	.byte	7
   C8F5 05                  585 	.byte	5
   C8F6 05                  586 	.byte	5
   C8F7 08                  587 	.byte	8
   C8F8 04                  588 	.byte	4
   C8F9 05                  589 	.byte	5
   C8FA 09                  590 	.byte	9
   C8FB 08                  591 	.byte	8
   C8FC 01                  592 	.byte	1
   C8FD 05                  593 	.byte	5
   C8FE 09                  594 	.byte	9
   C8FF 02                  595 	.byte	2
   C900 09                  596 	.byte	9
   C901 06                  597 	.byte	6
   C902 03                  598 	.byte	3
   C903 01                  599 	.byte	1
   C904 06                  600 	.byte	6
   C905 03                  601 	.byte	3
                            602 	.globl	_a_random_compare
   C906                     603 _a_random_compare:
   C906 00 00 00 00 00 00   604 	.word	0,0,0,0,0,0,0,0,0,0
        00 00 00 00 00 00
        00 00 00 00 00 00
        00 00
                            605 	.area	.text
                            606 	.globl	_RandomNumberGenerator
   088F                     607 _RandomNumberGenerator:
   088F 32 7D         [ 5]  608 	leas	-3,s
   0891 6F 62         [ 7]  609 	clr	2,s
   0893 20 2B         [ 3]  610 	bra	L2
   0895                     611 L3:
   0895 E6 62         [ 5]  612 	ldb	2,s
   0897 E7 61         [ 5]  613 	stb	1,s
   0899 E6 62         [ 5]  614 	ldb	2,s
   089B 1D            [ 2]  615 	sex		;extendqihi2: R:b -> R:d
   089C 1F 01         [ 6]  616 	tfr	d,x
   089E E6 89 C8 F2   [ 8]  617 	ldb	_a_random,x
   08A2 4F            [ 2]  618 	clra		;zero_extendqihi: R:b -> R:d
   08A3 8E 00 0A      [ 3]  619 	ldx	#10
   08A6 34 10         [ 6]  620 	pshs	x
   08A8 1F 01         [ 6]  621 	tfr	d,x
   08AA BD 1A 76      [ 8]  622 	jsr	_umodhi3
   08AD 32 62         [ 5]  623 	leas	2,s
   08AF 1F 10         [ 6]  624 	tfr	x,d	;movlsbqihi: R:x -> R:b
   08B1 E7 E4         [ 4]  625 	stb	,s
   08B3 E6 61         [ 5]  626 	ldb	1,s
   08B5 1D            [ 2]  627 	sex		;extendqihi2: R:b -> R:d
   08B6 1F 01         [ 6]  628 	tfr	d,x
   08B8 E6 E4         [ 4]  629 	ldb	,s
   08BA E7 89 C8 F2   [ 8]  630 	stb	_a_random,x
   08BE 6C 62         [ 7]  631 	inc	2,s
   08C0                     632 L2:
   08C0 E6 62         [ 5]  633 	ldb	2,s
   08C2 C1 13         [ 2]  634 	cmpb	#19	;cmpqi:
   08C4 2F CF         [ 3]  635 	ble	L3
   08C6 32 63         [ 5]  636 	leas	3,s
   08C8 39            [ 5]  637 	rts
                            638 	.globl	_rand
   08C9                     639 _rand:
   08C9 32 79         [ 5]  640 	leas	-7,s
   08CB E7 65         [ 5]  641 	stb	5,s
   08CD 6F 66         [ 7]  642 	clr	6,s
   08CF 16 00 72      [ 5]  643 	lbra	L6
   08D2                     644 L7:
   08D2 E6 65         [ 5]  645 	ldb	5,s
   08D4 54            [ 2]  646 	lsrb
   08D5 54            [ 2]  647 	lsrb
   08D6 54            [ 2]  648 	lsrb
   08D7 54            [ 2]  649 	lsrb
   08D8 E7 61         [ 5]  650 	stb	1,s
   08DA E6 65         [ 5]  651 	ldb	5,s
   08DC E8 61         [ 5]  652 	eorb	1,s
   08DE E7 65         [ 5]  653 	stb	5,s
   08E0 E6 65         [ 5]  654 	ldb	5,s
   08E2 58            [ 2]  655 	aslb
   08E3 58            [ 2]  656 	aslb
   08E4 58            [ 2]  657 	aslb
   08E5 E7 E4         [ 4]  658 	stb	,s
   08E7 E6 E4         [ 4]  659 	ldb	,s
   08E9 EB 65         [ 5]  660 	addb	5,s
   08EB E7 65         [ 5]  661 	stb	5,s
   08ED E6 65         [ 5]  662 	ldb	5,s
   08EF 59            [ 2]  663 	rolb
   08F0 59            [ 2]  664 	rolb
   08F1 59            [ 2]  665 	rolb
   08F2 C4 03         [ 2]  666 	andb	#3
   08F4 E7 62         [ 5]  667 	stb	2,s
   08F6 E6 65         [ 5]  668 	ldb	5,s
   08F8 E8 62         [ 5]  669 	eorb	2,s
   08FA E7 65         [ 5]  670 	stb	5,s
   08FC E6 65         [ 5]  671 	ldb	5,s
   08FE 58            [ 2]  672 	aslb
   08FF 58            [ 2]  673 	aslb
   0900 E7 E4         [ 4]  674 	stb	,s
   0902 E6 E4         [ 4]  675 	ldb	,s
   0904 EB 65         [ 5]  676 	addb	5,s
   0906 E7 65         [ 5]  677 	stb	5,s
   0908 E6 65         [ 5]  678 	ldb	5,s
   090A 54            [ 2]  679 	lsrb
   090B 54            [ 2]  680 	lsrb
   090C 54            [ 2]  681 	lsrb
   090D 54            [ 2]  682 	lsrb
   090E 54            [ 2]  683 	lsrb
   090F E7 63         [ 5]  684 	stb	3,s
   0911 E6 65         [ 5]  685 	ldb	5,s
   0913 E8 63         [ 5]  686 	eorb	3,s
   0915 E7 65         [ 5]  687 	stb	5,s
   0917 E6 66         [ 5]  688 	ldb	6,s
   0919 E7 64         [ 5]  689 	stb	4,s
   091B E6 66         [ 5]  690 	ldb	6,s
   091D 1D            [ 2]  691 	sex		;extendqihi2: R:b -> R:d
   091E 1F 01         [ 6]  692 	tfr	d,x
   0920 E6 89 C8 F2   [ 8]  693 	ldb	_a_random,x
   0924 EB 65         [ 5]  694 	addb	5,s
   0926 4F            [ 2]  695 	clra		;zero_extendqihi: R:b -> R:d
   0927 8E 00 0A      [ 3]  696 	ldx	#10
   092A 34 10         [ 6]  697 	pshs	x
   092C 1F 01         [ 6]  698 	tfr	d,x
   092E BD 1A 76      [ 8]  699 	jsr	_umodhi3
   0931 32 62         [ 5]  700 	leas	2,s
   0933 1F 10         [ 6]  701 	tfr	x,d	;movlsbqihi: R:x -> R:b
   0935 E7 E4         [ 4]  702 	stb	,s
   0937 E6 64         [ 5]  703 	ldb	4,s
   0939 1D            [ 2]  704 	sex		;extendqihi2: R:b -> R:d
   093A 1F 01         [ 6]  705 	tfr	d,x
   093C E6 E4         [ 4]  706 	ldb	,s
   093E E7 89 C8 F2   [ 8]  707 	stb	_a_random,x
   0942 6C 66         [ 7]  708 	inc	6,s
   0944                     709 L6:
   0944 E6 66         [ 5]  710 	ldb	6,s
   0946 C1 13         [ 2]  711 	cmpb	#19	;cmpqi:
   0948 10 2F FF 86   [ 6]  712 	lble	L7
   094C 32 67         [ 5]  713 	leas	7,s
   094E 39            [ 5]  714 	rts
                            715 	.globl	_rand2
   094F                     716 _rand2:
   094F 32 7A         [ 5]  717 	leas	-6,s
   0951 E7 64         [ 5]  718 	stb	4,s
   0953 6F 65         [ 7]  719 	clr	5,s
   0955 20 48         [ 3]  720 	bra	L10
   0957                     721 L11:
   0957 E6 64         [ 5]  722 	ldb	4,s
   0959 57            [ 2]  723 	asrb
   095A 57            [ 2]  724 	asrb
   095B 57            [ 2]  725 	asrb
   095C 57            [ 2]  726 	asrb
   095D E7 61         [ 5]  727 	stb	1,s
   095F E6 64         [ 5]  728 	ldb	4,s
   0961 E8 61         [ 5]  729 	eorb	1,s
   0963 E7 64         [ 5]  730 	stb	4,s
   0965 E6 64         [ 5]  731 	ldb	4,s
   0967 58            [ 2]  732 	aslb
   0968 58            [ 2]  733 	aslb
   0969 58            [ 2]  734 	aslb
   096A E7 E4         [ 4]  735 	stb	,s
   096C E6 E4         [ 4]  736 	ldb	,s
   096E EB 64         [ 5]  737 	addb	4,s
   0970 E7 64         [ 5]  738 	stb	4,s
   0972 E6 64         [ 5]  739 	ldb	4,s
   0974 57            [ 2]  740 	asrb
   0975 57            [ 2]  741 	asrb
   0976 57            [ 2]  742 	asrb
   0977 57            [ 2]  743 	asrb
   0978 57            [ 2]  744 	asrb
   0979 57            [ 2]  745 	asrb
   097A E7 62         [ 5]  746 	stb	2,s
   097C E6 64         [ 5]  747 	ldb	4,s
   097E E8 62         [ 5]  748 	eorb	2,s
   0980 E7 64         [ 5]  749 	stb	4,s
   0982 E6 64         [ 5]  750 	ldb	4,s
   0984 58            [ 2]  751 	aslb
   0985 58            [ 2]  752 	aslb
   0986 E7 E4         [ 4]  753 	stb	,s
   0988 E6 E4         [ 4]  754 	ldb	,s
   098A EB 64         [ 5]  755 	addb	4,s
   098C E7 64         [ 5]  756 	stb	4,s
   098E E6 64         [ 5]  757 	ldb	4,s
   0990 57            [ 2]  758 	asrb
   0991 57            [ 2]  759 	asrb
   0992 57            [ 2]  760 	asrb
   0993 57            [ 2]  761 	asrb
   0994 57            [ 2]  762 	asrb
   0995 E7 63         [ 5]  763 	stb	3,s
   0997 E6 64         [ 5]  764 	ldb	4,s
   0999 E8 63         [ 5]  765 	eorb	3,s
   099B E7 64         [ 5]  766 	stb	4,s
   099D 6C 65         [ 7]  767 	inc	5,s
   099F                     768 L10:
   099F E6 65         [ 5]  769 	ldb	5,s
   09A1 C1 13         [ 2]  770 	cmpb	#19	;cmpqi:
   09A3 2F B2         [ 3]  771 	ble	L11
   09A5 E6 64         [ 5]  772 	ldb	4,s
   09A7 32 66         [ 5]  773 	leas	6,s
   09A9 39            [ 5]  774 	rts
                            775 	.globl	_Display_TimeLeft
   09AA                     776 _Display_TimeLeft:
   09AA F6 C8 93      [ 5]  777 	ldb	_counter
   09AD BD 04 33      [ 8]  778 	jsr	_Lifeline
   09B0 F6 C8 93      [ 5]  779 	ldb	_counter
   09B3 5D            [ 2]  780 	tstb
   09B4 26 05         [ 3]  781 	bne	L14
   09B6 C6 C8         [ 2]  782 	ldb	#-56
   09B8 F7 C8 93      [ 5]  783 	stb	_counter
   09BB                     784 L14:
   09BB F6 C8 93      [ 5]  785 	ldb	_counter
   09BE 5A            [ 2]  786 	decb
   09BF F7 C8 93      [ 5]  787 	stb	_counter
   09C2 39            [ 5]  788 	rts
                            789 	.globl	_Display_LevelAdvancement
   09C3                     790 _Display_LevelAdvancement:
   09C3 32 7D         [ 5]  791 	leas	-3,s
   09C5 E7 62         [ 5]  792 	stb	2,s
   09C7 20 08         [ 3]  793 	bra	L17
   09C9                     794 L19:
   09C9 F6 C8 89      [ 5]  795 	ldb	_buttonspressedcounter
   09CC EB 62         [ 5]  796 	addb	2,s
   09CE BD 02 FC      [ 8]  797 	jsr	_draw_round_advancement_cross
   09D1                     798 L17:
   09D1 E6 62         [ 5]  799 	ldb	2,s
   09D3 E7 61         [ 5]  800 	stb	1,s
   09D5 6D 61         [ 7]  801 	tst	1,s
   09D7 27 04         [ 3]  802 	beq	L18
   09D9 C6 01         [ 2]  803 	ldb	#1
   09DB E7 61         [ 5]  804 	stb	1,s
   09DD                     805 L18:
   09DD E6 61         [ 5]  806 	ldb	1,s
   09DF 6A 62         [ 7]  807 	dec	2,s
   09E1 5D            [ 2]  808 	tstb
   09E2 26 E5         [ 3]  809 	bne	L19
   09E4 20 05         [ 3]  810 	bra	L20
   09E6                     811 L22:
   09E6 E6 65         [ 5]  812 	ldb	5,s
   09E8 BD 03 42      [ 8]  813 	jsr	_draw_round_advancement_cross_plus
   09EB                     814 L20:
   09EB E6 65         [ 5]  815 	ldb	5,s
   09ED E7 E4         [ 4]  816 	stb	,s
   09EF 6D E4         [ 6]  817 	tst	,s
   09F1 27 04         [ 3]  818 	beq	L21
   09F3 C6 01         [ 2]  819 	ldb	#1
   09F5 E7 E4         [ 4]  820 	stb	,s
   09F7                     821 L21:
   09F7 E6 E4         [ 4]  822 	ldb	,s
   09F9 6A 65         [ 7]  823 	dec	5,s
   09FB 5D            [ 2]  824 	tstb
   09FC 26 E8         [ 3]  825 	bne	L22
   09FE 32 63         [ 5]  826 	leas	3,s
   0A00 39            [ 5]  827 	rts
   0A01                     828 LC0:
   0A01 52 45 4D 45 4D 42   829 	.byte	82,69,77,69,77,66,69,82
        45 52
   0A09 20 54 48 45 80 00   830 	.byte	32,84,72,69,-128,0
   0A0F                     831 LC1:
   0A0F 53 45 51 55 45 4E   832 	.byte	83,69,81,85,69,78,67,69
        43 45
   0A17 80 00               833 	.byte	-128,0
                            834 	.globl	_Display_RandomSequence
   0A19                     835 _Display_RandomSequence:
   0A19 32 7D         [ 5]  836 	leas	-3,s
   0A1B 6F 62         [ 7]  837 	clr	2,s
   0A1D 16 00 97      [ 5]  838 	lbra	L25
   0A20                     839 L27:
   0A20 C6 C8         [ 2]  840 	ldb	#-56
   0A22 F7 C8 93      [ 5]  841 	stb	_counter
   0A25 BD F1 92      [ 8]  842 	jsr	___Wait_Recal
   0A28 BD 03 88      [ 8]  843 	jsr	_Display_Gamefield
   0A2B C6 B5         [ 2]  844 	ldb	#-75
   0A2D E7 E2         [ 6]  845 	stb	,-s
   0A2F 8E 0A 01      [ 3]  846 	ldx	#LC0
   0A32 C6 64         [ 2]  847 	ldb	#100
   0A34 BD 1A 3A      [ 8]  848 	jsr	_print_string
   0A37 32 61         [ 5]  849 	leas	1,s
   0A39 C6 CE         [ 2]  850 	ldb	#-50
   0A3B E7 E2         [ 6]  851 	stb	,-s
   0A3D 8E 0A 0F      [ 3]  852 	ldx	#LC1
   0A40 C6 50         [ 2]  853 	ldb	#80
   0A42 BD 1A 3A      [ 8]  854 	jsr	_print_string
   0A45 32 61         [ 5]  855 	leas	1,s
   0A47 BD 0A C4      [ 8]  856 	jsr	_Display_Player
   0A4A E6 62         [ 5]  857 	ldb	2,s
   0A4C 4F            [ 2]  858 	clra		;zero_extendqihi: R:b -> R:d
   0A4D 1F 01         [ 6]  859 	tfr	d,x
   0A4F E6 89 C8 F2   [ 8]  860 	ldb	_a_random,x
   0A53 BD 02 86      [ 8]  861 	jsr	_draw_square_filled
   0A56 E6 62         [ 5]  862 	ldb	2,s
   0A58 5C            [ 2]  863 	incb
   0A59 86 64         [ 2]  864 	lda	#100	;umulqihi3
   0A5B 3D            [11]  865 	mul
                            866 		;movlsbqihi: D->B
   0A5C 4F            [ 2]  867 	clra		;zero_extendqihi: R:b -> R:d
   0A5D ED E4         [ 5]  868 	std	,s
   0A5F C6 C8         [ 2]  869 	ldb	#-56
   0A61 E7 E2         [ 6]  870 	stb	,-s
   0A63 AE 61         [ 6]  871 	ldx	1,s
   0A65 C6 01         [ 2]  872 	ldb	#1
   0A67 BD 1A E2      [ 8]  873 	jsr	_play_tune
   0A6A 32 61         [ 5]  874 	leas	1,s
   0A6C E6 62         [ 5]  875 	ldb	2,s
   0A6E 5C            [ 2]  876 	incb
   0A6F 86 64         [ 2]  877 	lda	#100	;umulqihi3
   0A71 3D            [11]  878 	mul
                            879 		;movlsbqihi: D->B
   0A72 4F            [ 2]  880 	clra		;zero_extendqihi: R:b -> R:d
   0A73 ED E4         [ 5]  881 	std	,s
   0A75 C6 C8         [ 2]  882 	ldb	#-56
   0A77 E7 E2         [ 6]  883 	stb	,-s
   0A79 AE 61         [ 6]  884 	ldx	1,s
   0A7B C6 02         [ 2]  885 	ldb	#2
   0A7D BD 1A E2      [ 8]  886 	jsr	_play_tune
   0A80 32 61         [ 5]  887 	leas	1,s
   0A82 E6 62         [ 5]  888 	ldb	2,s
   0A84 5C            [ 2]  889 	incb
   0A85 86 64         [ 2]  890 	lda	#100	;umulqihi3
   0A87 3D            [11]  891 	mul
                            892 		;movlsbqihi: D->B
   0A88 4F            [ 2]  893 	clra		;zero_extendqihi: R:b -> R:d
   0A89 ED E4         [ 5]  894 	std	,s
   0A8B C6 C8         [ 2]  895 	ldb	#-56
   0A8D E7 E2         [ 6]  896 	stb	,-s
   0A8F AE 61         [ 6]  897 	ldx	1,s
   0A91 C6 03         [ 2]  898 	ldb	#3
   0A93 BD 1A E2      [ 8]  899 	jsr	_play_tune
   0A96 32 61         [ 5]  900 	leas	1,s
   0A98 6F E2         [ 8]  901 	clr	,-s
   0A9A E6 63         [ 5]  902 	ldb	3,s
   0A9C BD 09 C3      [ 8]  903 	jsr	_Display_LevelAdvancement
   0A9F 32 61         [ 5]  904 	leas	1,s
   0AA1                     905 L26:
   0AA1 F6 C8 8C      [ 5]  906 	ldb	_RandomSequenceCounter
   0AA4 5A            [ 2]  907 	decb
   0AA5 F7 C8 8C      [ 5]  908 	stb	_RandomSequenceCounter
   0AA8 F6 C8 8C      [ 5]  909 	ldb	_RandomSequenceCounter
   0AAB 5D            [ 2]  910 	tstb
   0AAC 10 26 FF 70   [ 6]  911 	lbne	L27
   0AB0 C6 1E         [ 2]  912 	ldb	#30
   0AB2 F7 C8 8C      [ 5]  913 	stb	_RandomSequenceCounter
   0AB5 6C 62         [ 7]  914 	inc	2,s
   0AB7                     915 L25:
   0AB7 F6 C8 8D      [ 5]  916 	ldb	_RandomSequenceCounterDisplay
   0ABA E1 62         [ 5]  917 	cmpb	2,s	;cmpqi:(R)
   0ABC 22 E3         [ 3]  918 	bhi	L26
   0ABE 7F C8 92      [ 7]  919 	clr	_SequenceTime
   0AC1 32 63         [ 5]  920 	leas	3,s
   0AC3 39            [ 5]  921 	rts
                            922 	.globl	_Display_Player
   0AC4                     923 _Display_Player:
   0AC4 BE C8 9A      [ 6]  924 	ldx	_Displayed_Squares+2
   0AC7 5F            [ 2]  925 	clrb
   0AC8 AD 84         [ 7]  926 	jsr	,x
   0ACA BE C8 A4      [ 6]  927 	ldx	_Displayed_Squares+12
   0ACD C6 01         [ 2]  928 	ldb	#1
   0ACF AD 84         [ 7]  929 	jsr	,x
   0AD1 BE C8 AE      [ 6]  930 	ldx	_Displayed_Squares+22
   0AD4 C6 02         [ 2]  931 	ldb	#2
   0AD6 AD 84         [ 7]  932 	jsr	,x
   0AD8 BE C8 B8      [ 6]  933 	ldx	_Displayed_Squares+32
   0ADB C6 03         [ 2]  934 	ldb	#3
   0ADD AD 84         [ 7]  935 	jsr	,x
   0ADF BE C8 C2      [ 6]  936 	ldx	_Displayed_Squares+42
   0AE2 C6 04         [ 2]  937 	ldb	#4
   0AE4 AD 84         [ 7]  938 	jsr	,x
   0AE6 BE C8 CC      [ 6]  939 	ldx	_Displayed_Squares+52
   0AE9 C6 05         [ 2]  940 	ldb	#5
   0AEB AD 84         [ 7]  941 	jsr	,x
   0AED BE C8 D6      [ 6]  942 	ldx	_Displayed_Squares+62
   0AF0 C6 06         [ 2]  943 	ldb	#6
   0AF2 AD 84         [ 7]  944 	jsr	,x
   0AF4 BE C8 E0      [ 6]  945 	ldx	_Displayed_Squares+72
   0AF7 C6 07         [ 2]  946 	ldb	#7
   0AF9 AD 84         [ 7]  947 	jsr	,x
   0AFB BE C8 EA      [ 6]  948 	ldx	_Displayed_Squares+82
   0AFE C6 08         [ 2]  949 	ldb	#8
   0B00 AD 84         [ 7]  950 	jsr	,x
   0B02 39            [ 5]  951 	rts
   0B03                     952 LC2:
   0B03 47 41 4D 45 20 4F   953 	.byte	71,65,77,69,32,79,86,69
        56 45
   0B0B 52 80 00            954 	.byte	82,-128,0
   0B0E                     955 LC3:
   0B0E 50 52 45 53 53 20   956 	.byte	80,82,69,83,83,32,66,85
        42 55
   0B16 54 54 4F 4E 20 32   957 	.byte	84,84,79,78,32,50,-128,0
        80 00
   0B1E                     958 LC4:
   0B1E 54 4F 20 52 45 53   959 	.byte	84,79,32,82,69,83,84,65
        54 41
   0B26 52 54 80 00         960 	.byte	82,84,-128,0
   0B2A                     961 LC5:
   0B2A 50 52 45 53 53 20   962 	.byte	80,82,69,83,83,32,66,85
        42 55
   0B32 54 54 4F 4E 20 33   963 	.byte	84,84,79,78,32,51,-128,0
        80 00
   0B3A                     964 LC6:
   0B3A 54 4F 20 47 4F 20   965 	.byte	84,79,32,71,79,32,84,79
        54 4F
   0B42 20 54 48 45 20 4D   966 	.byte	32,84,72,69,32,77,69,78
        45 4E
   0B4A 55 80 00            967 	.byte	85,-128,0
                            968 	.globl	_display_game_over
   0B4D                     969 _display_game_over:
   0B4D 32 7E         [ 5]  970 	leas	-2,s
   0B4F C6 C4         [ 2]  971 	ldb	#-60
   0B51 E7 E2         [ 6]  972 	stb	,-s
   0B53 8E 0B 03      [ 3]  973 	ldx	#LC2
   0B56 C6 64         [ 2]  974 	ldb	#100
   0B58 BD 1A 3A      [ 8]  975 	jsr	_print_string
   0B5B 32 61         [ 5]  976 	leas	1,s
   0B5D C6 B0         [ 2]  977 	ldb	#-80
   0B5F E7 E2         [ 6]  978 	stb	,-s
   0B61 8E 0B 0E      [ 3]  979 	ldx	#LC3
   0B64 C6 46         [ 2]  980 	ldb	#70
   0B66 BD 1A 3A      [ 8]  981 	jsr	_print_string
   0B69 32 61         [ 5]  982 	leas	1,s
   0B6B C6 C4         [ 2]  983 	ldb	#-60
   0B6D E7 E2         [ 6]  984 	stb	,-s
   0B6F 8E 0B 1E      [ 3]  985 	ldx	#LC4
   0B72 C6 32         [ 2]  986 	ldb	#50
   0B74 BD 1A 3A      [ 8]  987 	jsr	_print_string
   0B77 32 61         [ 5]  988 	leas	1,s
   0B79 C6 B0         [ 2]  989 	ldb	#-80
   0B7B E7 E2         [ 6]  990 	stb	,-s
   0B7D 8E 0B 2A      [ 3]  991 	ldx	#LC5
   0B80 C6 14         [ 2]  992 	ldb	#20
   0B82 BD 1A 3A      [ 8]  993 	jsr	_print_string
   0B85 32 61         [ 5]  994 	leas	1,s
   0B87 C6 9C         [ 2]  995 	ldb	#-100
   0B89 E7 E2         [ 6]  996 	stb	,-s
   0B8B 8E 0B 3A      [ 3]  997 	ldx	#LC6
   0B8E 5F            [ 2]  998 	clrb
   0B8F BD 1A 3A      [ 8]  999 	jsr	_print_string
   0B92 32 61         [ 5] 1000 	leas	1,s
   0B94 F6 C8 8B      [ 5] 1001 	ldb	_b
   0B97 C1 02         [ 2] 1002 	cmpb	#2	;cmpqi:
   0B99 26 06         [ 3] 1003 	bne	L33
   0B9B F6 C8 89      [ 5] 1004 	ldb	_buttonspressedcounter
   0B9E F7 C8 8E      [ 5] 1005 	stb	_HighscoreNormal
   0BA1                    1006 L33:
   0BA1 F6 C8 8B      [ 5] 1007 	ldb	_b
   0BA4 C1 03         [ 2] 1008 	cmpb	#3	;cmpqi:
   0BA6 26 06         [ 3] 1009 	bne	L34
   0BA8 F6 C8 89      [ 5] 1010 	ldb	_buttonspressedcounter
   0BAB F7 C8 8F      [ 5] 1011 	stb	_HighscoreHard
   0BAE                    1012 L34:
   0BAE F6 C8 8B      [ 5] 1013 	ldb	_b
   0BB1 C1 04         [ 2] 1014 	cmpb	#4	;cmpqi:
   0BB3 26 06         [ 3] 1015 	bne	L35
   0BB5 F6 C8 89      [ 5] 1016 	ldb	_buttonspressedcounter
   0BB8 F7 C8 90      [ 5] 1017 	stb	_HighscoreExtrem
   0BBB                    1018 L35:
   0BBB BD F1 BA      [ 8] 1019 	jsr	___Read_Btns
   0BBE F6 C8 11      [ 5] 1020 	ldb	_Vec_Buttons
   0BC1 C4 02         [ 2] 1021 	andb	#2
   0BC3 5D            [ 2] 1022 	tstb
   0BC4 27 29         [ 3] 1023 	beq	L36
   0BC6 8E 18 95      [ 3] 1024 	ldx	#_execute_display_sequence_state
   0BC9 BF C9 1E      [ 6] 1025 	stx	_execute_game_playing_state
   0BCC 6F E4         [ 6] 1026 	clr	,s
   0BCE 20 0B         [ 3] 1027 	bra	L37
   0BD0                    1028 L38:
   0BD0 E6 E4         [ 4] 1029 	ldb	,s
   0BD2 1D            [ 2] 1030 	sex		;extendqihi2: R:b -> R:d
   0BD3 1F 01         [ 6] 1031 	tfr	d,x
   0BD5 6F 89 C9 06   [10] 1032 	clr	_a_random_compare,x
   0BD9 6C E4         [ 6] 1033 	inc	,s
   0BDB                    1034 L37:
   0BDB E6 E4         [ 4] 1035 	ldb	,s
   0BDD C1 13         [ 2] 1036 	cmpb	#19	;cmpqi:
   0BDF 2F EF         [ 3] 1037 	ble	L38
   0BE1 F6 C8 8D      [ 5] 1038 	ldb	_RandomSequenceCounterDisplay
   0BE4 BD 08 C9      [ 8] 1039 	jsr	_rand
   0BE7 7F C8 89      [ 7] 1040 	clr	_buttonspressedcounter
   0BEA C6 01         [ 2] 1041 	ldb	#1
   0BEC F7 C8 8D      [ 5] 1042 	stb	_RandomSequenceCounterDisplay
   0BEF                    1043 L36:
   0BEF F6 C8 11      [ 5] 1044 	ldb	_Vec_Buttons
   0BF2 C4 04         [ 2] 1045 	andb	#4
   0BF4 5D            [ 2] 1046 	tstb
   0BF5 27 2C         [ 3] 1047 	beq	L42
   0BF7 8E 18 DB      [ 3] 1048 	ldx	#_level_init
   0BFA BF C9 1E      [ 6] 1049 	stx	_execute_game_playing_state
   0BFD 7F C8 8B      [ 7] 1050 	clr	_b
   0C00 6F 61         [ 7] 1051 	clr	1,s
   0C02 20 0B         [ 3] 1052 	bra	L40
   0C04                    1053 L41:
   0C04 E6 61         [ 5] 1054 	ldb	1,s
   0C06 1D            [ 2] 1055 	sex		;extendqihi2: R:b -> R:d
   0C07 1F 01         [ 6] 1056 	tfr	d,x
   0C09 6F 89 C9 06   [10] 1057 	clr	_a_random_compare,x
   0C0D 6C 61         [ 7] 1058 	inc	1,s
   0C0F                    1059 L40:
   0C0F E6 61         [ 5] 1060 	ldb	1,s
   0C11 C1 13         [ 2] 1061 	cmpb	#19	;cmpqi:
   0C13 2F EF         [ 3] 1062 	ble	L41
   0C15 F6 C8 8D      [ 5] 1063 	ldb	_RandomSequenceCounterDisplay
   0C18 BD 08 C9      [ 8] 1064 	jsr	_rand
   0C1B 7F C8 89      [ 7] 1065 	clr	_buttonspressedcounter
   0C1E C6 01         [ 2] 1066 	ldb	#1
   0C20 F7 C8 8D      [ 5] 1067 	stb	_RandomSequenceCounterDisplay
   0C23                    1068 L42:
   0C23 32 62         [ 5] 1069 	leas	2,s
   0C25 39            [ 5] 1070 	rts
                           1071 	.globl	_move_player
   0C26                    1072 _move_player:
   0C26 34 20         [ 6] 1073 	pshs	y
   0C28 32 E8 C7      [ 5] 1074 	leas	-57,s
   0C2B BD F1 F8      [ 8] 1075 	jsr	___Joy_Digital
   0C2E F6 C8 1B      [ 5] 1076 	ldb	_Vec_Joy_1_X
   0C31 F7 C8 94      [ 5] 1077 	stb	_joy_x
   0C34 F6 C8 1C      [ 5] 1078 	ldb	_Vec_Joy_1_Y
   0C37 F7 C8 95      [ 5] 1079 	stb	_joy_y
   0C3A F6 C8 94      [ 5] 1080 	ldb	_joy_x
   0C3D 5D            [ 2] 1081 	tstb
   0C3E 2C 52         [ 3] 1082 	bge	L44
   0C40 F6 C8 95      [ 5] 1083 	ldb	_joy_y
   0C43 5D            [ 2] 1084 	tstb
   0C44 2F 4C         [ 3] 1085 	ble	L44
   0C46 F6 C8 8A      [ 5] 1086 	ldb	_sneakyoffset
   0C49 E7 E8 27      [ 5] 1087 	stb	39,s
   0C4C E6 E8 27      [ 5] 1088 	ldb	39,s
   0C4F 4F            [ 2] 1089 	clra		;zero_extendqihi: R:b -> R:d
   0C50 1F 01         [ 6] 1090 	tfr	d,x
   0C52 AF E8 25      [ 6] 1091 	stx	37,s
   0C55 EC E8 25      [ 6] 1092 	ldd	37,s
   0C58 58            [ 2] 1093 	aslb
   0C59 49            [ 2] 1094 	rola
   0C5A 58            [ 2] 1095 	aslb
   0C5B 49            [ 2] 1096 	rola
   0C5C ED E8 25      [ 6] 1097 	std	37,s
   0C5F EC E8 25      [ 6] 1098 	ldd	37,s
   0C62 30 8B         [ 8] 1099 	leax	d,x
   0C64 AF E8 25      [ 6] 1100 	stx	37,s
   0C67 EC E8 25      [ 6] 1101 	ldd	37,s
   0C6A C3 00 01      [ 4] 1102 	addd	#1; addhi3,3
   0C6D 58            [ 2] 1103 	aslb
   0C6E 49            [ 2] 1104 	rola
   0C6F 8E C8 98      [ 3] 1105 	ldx	#_Displayed_Squares
   0C72 31 8B         [ 8] 1106 	leay	d,x
   0C74 8E 02 86      [ 3] 1107 	ldx	#_draw_square_filled
   0C77 AF A4         [ 5] 1108 	stx	,y
   0C79 E6 E8 27      [ 5] 1109 	ldb	39,s
   0C7C 4F            [ 2] 1110 	clra		;zero_extendqihi: R:b -> R:d
   0C7D 1F 02         [ 6] 1111 	tfr	d,y
   0C7F 10 AF E4      [ 6] 1112 	sty	,s
   0C82 EC E4         [ 5] 1113 	ldd	,s
   0C84 58            [ 2] 1114 	aslb
   0C85 49            [ 2] 1115 	rola
   0C86 58            [ 2] 1116 	aslb
   0C87 49            [ 2] 1117 	rola
   0C88 1F 01         [ 6] 1118 	tfr	d,x
   0C8A AF E4         [ 5] 1119 	stx	,s
   0C8C EC E4         [ 5] 1120 	ldd	,s
   0C8E 31 AB         [ 8] 1121 	leay	d,y
   0C90 20 4A         [ 3] 1122 	bra	L45
   0C92                    1123 L44:
   0C92 F6 C8 8A      [ 5] 1124 	ldb	_sneakyoffset
   0C95 E7 E8 28      [ 5] 1125 	stb	40,s
   0C98 E6 E8 28      [ 5] 1126 	ldb	40,s
   0C9B 4F            [ 2] 1127 	clra		;zero_extendqihi: R:b -> R:d
   0C9C 1F 01         [ 6] 1128 	tfr	d,x
   0C9E AF E8 23      [ 6] 1129 	stx	35,s
   0CA1 EC E8 23      [ 6] 1130 	ldd	35,s
   0CA4 58            [ 2] 1131 	aslb
   0CA5 49            [ 2] 1132 	rola
   0CA6 58            [ 2] 1133 	aslb
   0CA7 49            [ 2] 1134 	rola
   0CA8 ED E8 23      [ 6] 1135 	std	35,s
   0CAB EC E8 23      [ 6] 1136 	ldd	35,s
   0CAE 30 8B         [ 8] 1137 	leax	d,x
   0CB0 AF E8 23      [ 6] 1138 	stx	35,s
   0CB3 EC E8 23      [ 6] 1139 	ldd	35,s
   0CB6 C3 00 01      [ 4] 1140 	addd	#1; addhi3,3
   0CB9 58            [ 2] 1141 	aslb
   0CBA 49            [ 2] 1142 	rola
   0CBB 8E C8 98      [ 3] 1143 	ldx	#_Displayed_Squares
   0CBE 31 8B         [ 8] 1144 	leay	d,x
   0CC0 8E 02 10      [ 3] 1145 	ldx	#_draw_square
   0CC3 AF A4         [ 5] 1146 	stx	,y
   0CC5 E6 E8 28      [ 5] 1147 	ldb	40,s
   0CC8 4F            [ 2] 1148 	clra		;zero_extendqihi: R:b -> R:d
   0CC9 1F 02         [ 6] 1149 	tfr	d,y
   0CCB 10 AF E4      [ 6] 1150 	sty	,s
   0CCE EC E4         [ 5] 1151 	ldd	,s
   0CD0 58            [ 2] 1152 	aslb
   0CD1 49            [ 2] 1153 	rola
   0CD2 58            [ 2] 1154 	aslb
   0CD3 49            [ 2] 1155 	rola
   0CD4 1F 01         [ 6] 1156 	tfr	d,x
   0CD6 AF E4         [ 5] 1157 	stx	,s
   0CD8 EC E4         [ 5] 1158 	ldd	,s
   0CDA 31 AB         [ 8] 1159 	leay	d,y
   0CDC                    1160 L45:
   0CDC F6 C8 94      [ 5] 1161 	ldb	_joy_x
   0CDF 5D            [ 2] 1162 	tstb
   0CE0 26 57         [ 3] 1163 	bne	L46
   0CE2 F6 C8 95      [ 5] 1164 	ldb	_joy_y
   0CE5 5D            [ 2] 1165 	tstb
   0CE6 2F 51         [ 3] 1166 	ble	L46
   0CE8 F6 C8 8A      [ 5] 1167 	ldb	_sneakyoffset
   0CEB E7 62         [ 5] 1168 	stb	2,s
   0CED E6 62         [ 5] 1169 	ldb	2,s
   0CEF 5C            [ 2] 1170 	incb
   0CF0 E7 E8 29      [ 5] 1171 	stb	41,s
   0CF3 E6 E8 29      [ 5] 1172 	ldb	41,s
   0CF6 4F            [ 2] 1173 	clra		;zero_extendqihi: R:b -> R:d
   0CF7 1F 01         [ 6] 1174 	tfr	d,x
   0CF9 AF E8 21      [ 6] 1175 	stx	33,s
   0CFC EC E8 21      [ 6] 1176 	ldd	33,s
   0CFF 58            [ 2] 1177 	aslb
   0D00 49            [ 2] 1178 	rola
   0D01 58            [ 2] 1179 	aslb
   0D02 49            [ 2] 1180 	rola
   0D03 ED E8 21      [ 6] 1181 	std	33,s
   0D06 EC E8 21      [ 6] 1182 	ldd	33,s
   0D09 30 8B         [ 8] 1183 	leax	d,x
   0D0B AF E8 21      [ 6] 1184 	stx	33,s
   0D0E EC E8 21      [ 6] 1185 	ldd	33,s
   0D11 C3 00 01      [ 4] 1186 	addd	#1; addhi3,3
   0D14 58            [ 2] 1187 	aslb
   0D15 49            [ 2] 1188 	rola
   0D16 8E C8 98      [ 3] 1189 	ldx	#_Displayed_Squares
   0D19 31 8B         [ 8] 1190 	leay	d,x
   0D1B 8E 02 86      [ 3] 1191 	ldx	#_draw_square_filled
   0D1E AF A4         [ 5] 1192 	stx	,y
   0D20 E6 E8 29      [ 5] 1193 	ldb	41,s
   0D23 4F            [ 2] 1194 	clra		;zero_extendqihi: R:b -> R:d
   0D24 1F 02         [ 6] 1195 	tfr	d,y
   0D26 10 AF E4      [ 6] 1196 	sty	,s
   0D29 EC E4         [ 5] 1197 	ldd	,s
   0D2B 58            [ 2] 1198 	aslb
   0D2C 49            [ 2] 1199 	rola
   0D2D 58            [ 2] 1200 	aslb
   0D2E 49            [ 2] 1201 	rola
   0D2F 1F 01         [ 6] 1202 	tfr	d,x
   0D31 AF E4         [ 5] 1203 	stx	,s
   0D33 EC E4         [ 5] 1204 	ldd	,s
   0D35 31 AB         [ 8] 1205 	leay	d,y
   0D37 20 4F         [ 3] 1206 	bra	L47
   0D39                    1207 L46:
   0D39 F6 C8 8A      [ 5] 1208 	ldb	_sneakyoffset
   0D3C E7 62         [ 5] 1209 	stb	2,s
   0D3E E6 62         [ 5] 1210 	ldb	2,s
   0D40 5C            [ 2] 1211 	incb
   0D41 E7 E8 2A      [ 5] 1212 	stb	42,s
   0D44 E6 E8 2A      [ 5] 1213 	ldb	42,s
   0D47 4F            [ 2] 1214 	clra		;zero_extendqihi: R:b -> R:d
   0D48 1F 01         [ 6] 1215 	tfr	d,x
   0D4A AF E8 1F      [ 6] 1216 	stx	31,s
   0D4D EC E8 1F      [ 6] 1217 	ldd	31,s
   0D50 58            [ 2] 1218 	aslb
   0D51 49            [ 2] 1219 	rola
   0D52 58            [ 2] 1220 	aslb
   0D53 49            [ 2] 1221 	rola
   0D54 ED E8 1F      [ 6] 1222 	std	31,s
   0D57 EC E8 1F      [ 6] 1223 	ldd	31,s
   0D5A 30 8B         [ 8] 1224 	leax	d,x
   0D5C AF E8 1F      [ 6] 1225 	stx	31,s
   0D5F EC E8 1F      [ 6] 1226 	ldd	31,s
   0D62 C3 00 01      [ 4] 1227 	addd	#1; addhi3,3
   0D65 58            [ 2] 1228 	aslb
   0D66 49            [ 2] 1229 	rola
   0D67 8E C8 98      [ 3] 1230 	ldx	#_Displayed_Squares
   0D6A 31 8B         [ 8] 1231 	leay	d,x
   0D6C 8E 02 10      [ 3] 1232 	ldx	#_draw_square
   0D6F AF A4         [ 5] 1233 	stx	,y
   0D71 E6 E8 2A      [ 5] 1234 	ldb	42,s
   0D74 4F            [ 2] 1235 	clra		;zero_extendqihi: R:b -> R:d
   0D75 1F 02         [ 6] 1236 	tfr	d,y
   0D77 10 AF E4      [ 6] 1237 	sty	,s
   0D7A EC E4         [ 5] 1238 	ldd	,s
   0D7C 58            [ 2] 1239 	aslb
   0D7D 49            [ 2] 1240 	rola
   0D7E 58            [ 2] 1241 	aslb
   0D7F 49            [ 2] 1242 	rola
   0D80 1F 01         [ 6] 1243 	tfr	d,x
   0D82 AF E4         [ 5] 1244 	stx	,s
   0D84 EC E4         [ 5] 1245 	ldd	,s
   0D86 31 AB         [ 8] 1246 	leay	d,y
   0D88                    1247 L47:
   0D88 F6 C8 94      [ 5] 1248 	ldb	_joy_x
   0D8B 5D            [ 2] 1249 	tstb
   0D8C 2F 58         [ 3] 1250 	ble	L48
   0D8E F6 C8 95      [ 5] 1251 	ldb	_joy_y
   0D91 5D            [ 2] 1252 	tstb
   0D92 2F 52         [ 3] 1253 	ble	L48
   0D94 F6 C8 8A      [ 5] 1254 	ldb	_sneakyoffset
   0D97 E7 62         [ 5] 1255 	stb	2,s
   0D99 E6 62         [ 5] 1256 	ldb	2,s
   0D9B CB 02         [ 2] 1257 	addb	#2
   0D9D E7 E8 2B      [ 5] 1258 	stb	43,s
   0DA0 E6 E8 2B      [ 5] 1259 	ldb	43,s
   0DA3 4F            [ 2] 1260 	clra		;zero_extendqihi: R:b -> R:d
   0DA4 1F 01         [ 6] 1261 	tfr	d,x
   0DA6 AF E8 1D      [ 6] 1262 	stx	29,s
   0DA9 EC E8 1D      [ 6] 1263 	ldd	29,s
   0DAC 58            [ 2] 1264 	aslb
   0DAD 49            [ 2] 1265 	rola
   0DAE 58            [ 2] 1266 	aslb
   0DAF 49            [ 2] 1267 	rola
   0DB0 ED E8 1D      [ 6] 1268 	std	29,s
   0DB3 EC E8 1D      [ 6] 1269 	ldd	29,s
   0DB6 30 8B         [ 8] 1270 	leax	d,x
   0DB8 AF E8 1D      [ 6] 1271 	stx	29,s
   0DBB EC E8 1D      [ 6] 1272 	ldd	29,s
   0DBE C3 00 01      [ 4] 1273 	addd	#1; addhi3,3
   0DC1 58            [ 2] 1274 	aslb
   0DC2 49            [ 2] 1275 	rola
   0DC3 8E C8 98      [ 3] 1276 	ldx	#_Displayed_Squares
   0DC6 31 8B         [ 8] 1277 	leay	d,x
   0DC8 8E 02 86      [ 3] 1278 	ldx	#_draw_square_filled
   0DCB AF A4         [ 5] 1279 	stx	,y
   0DCD E6 E8 2B      [ 5] 1280 	ldb	43,s
   0DD0 4F            [ 2] 1281 	clra		;zero_extendqihi: R:b -> R:d
   0DD1 1F 02         [ 6] 1282 	tfr	d,y
   0DD3 10 AF E4      [ 6] 1283 	sty	,s
   0DD6 EC E4         [ 5] 1284 	ldd	,s
   0DD8 58            [ 2] 1285 	aslb
   0DD9 49            [ 2] 1286 	rola
   0DDA 58            [ 2] 1287 	aslb
   0DDB 49            [ 2] 1288 	rola
   0DDC 1F 01         [ 6] 1289 	tfr	d,x
   0DDE AF E4         [ 5] 1290 	stx	,s
   0DE0 EC E4         [ 5] 1291 	ldd	,s
   0DE2 31 AB         [ 8] 1292 	leay	d,y
   0DE4 20 50         [ 3] 1293 	bra	L49
   0DE6                    1294 L48:
   0DE6 F6 C8 8A      [ 5] 1295 	ldb	_sneakyoffset
   0DE9 E7 62         [ 5] 1296 	stb	2,s
   0DEB E6 62         [ 5] 1297 	ldb	2,s
   0DED CB 02         [ 2] 1298 	addb	#2
   0DEF E7 E8 2C      [ 5] 1299 	stb	44,s
   0DF2 E6 E8 2C      [ 5] 1300 	ldb	44,s
   0DF5 4F            [ 2] 1301 	clra		;zero_extendqihi: R:b -> R:d
   0DF6 1F 01         [ 6] 1302 	tfr	d,x
   0DF8 AF E8 1B      [ 6] 1303 	stx	27,s
   0DFB EC E8 1B      [ 6] 1304 	ldd	27,s
   0DFE 58            [ 2] 1305 	aslb
   0DFF 49            [ 2] 1306 	rola
   0E00 58            [ 2] 1307 	aslb
   0E01 49            [ 2] 1308 	rola
   0E02 ED E8 1B      [ 6] 1309 	std	27,s
   0E05 EC E8 1B      [ 6] 1310 	ldd	27,s
   0E08 30 8B         [ 8] 1311 	leax	d,x
   0E0A AF E8 1B      [ 6] 1312 	stx	27,s
   0E0D EC E8 1B      [ 6] 1313 	ldd	27,s
   0E10 C3 00 01      [ 4] 1314 	addd	#1; addhi3,3
   0E13 58            [ 2] 1315 	aslb
   0E14 49            [ 2] 1316 	rola
   0E15 8E C8 98      [ 3] 1317 	ldx	#_Displayed_Squares
   0E18 31 8B         [ 8] 1318 	leay	d,x
   0E1A 8E 02 10      [ 3] 1319 	ldx	#_draw_square
   0E1D AF A4         [ 5] 1320 	stx	,y
   0E1F E6 E8 2C      [ 5] 1321 	ldb	44,s
   0E22 4F            [ 2] 1322 	clra		;zero_extendqihi: R:b -> R:d
   0E23 1F 02         [ 6] 1323 	tfr	d,y
   0E25 10 AF E4      [ 6] 1324 	sty	,s
   0E28 EC E4         [ 5] 1325 	ldd	,s
   0E2A 58            [ 2] 1326 	aslb
   0E2B 49            [ 2] 1327 	rola
   0E2C 58            [ 2] 1328 	aslb
   0E2D 49            [ 2] 1329 	rola
   0E2E 1F 01         [ 6] 1330 	tfr	d,x
   0E30 AF E4         [ 5] 1331 	stx	,s
   0E32 EC E4         [ 5] 1332 	ldd	,s
   0E34 31 AB         [ 8] 1333 	leay	d,y
   0E36                    1334 L49:
   0E36 F6 C8 94      [ 5] 1335 	ldb	_joy_x
   0E39 5D            [ 2] 1336 	tstb
   0E3A 2C 58         [ 3] 1337 	bge	L50
   0E3C F6 C8 95      [ 5] 1338 	ldb	_joy_y
   0E3F 5D            [ 2] 1339 	tstb
   0E40 26 52         [ 3] 1340 	bne	L50
   0E42 F6 C8 8A      [ 5] 1341 	ldb	_sneakyoffset
   0E45 E7 62         [ 5] 1342 	stb	2,s
   0E47 E6 62         [ 5] 1343 	ldb	2,s
   0E49 CB 03         [ 2] 1344 	addb	#3
   0E4B E7 E8 2D      [ 5] 1345 	stb	45,s
   0E4E E6 E8 2D      [ 5] 1346 	ldb	45,s
   0E51 4F            [ 2] 1347 	clra		;zero_extendqihi: R:b -> R:d
   0E52 1F 01         [ 6] 1348 	tfr	d,x
   0E54 AF E8 19      [ 6] 1349 	stx	25,s
   0E57 EC E8 19      [ 6] 1350 	ldd	25,s
   0E5A 58            [ 2] 1351 	aslb
   0E5B 49            [ 2] 1352 	rola
   0E5C 58            [ 2] 1353 	aslb
   0E5D 49            [ 2] 1354 	rola
   0E5E ED E8 19      [ 6] 1355 	std	25,s
   0E61 EC E8 19      [ 6] 1356 	ldd	25,s
   0E64 30 8B         [ 8] 1357 	leax	d,x
   0E66 AF E8 19      [ 6] 1358 	stx	25,s
   0E69 EC E8 19      [ 6] 1359 	ldd	25,s
   0E6C C3 00 01      [ 4] 1360 	addd	#1; addhi3,3
   0E6F 58            [ 2] 1361 	aslb
   0E70 49            [ 2] 1362 	rola
   0E71 8E C8 98      [ 3] 1363 	ldx	#_Displayed_Squares
   0E74 31 8B         [ 8] 1364 	leay	d,x
   0E76 8E 02 86      [ 3] 1365 	ldx	#_draw_square_filled
   0E79 AF A4         [ 5] 1366 	stx	,y
   0E7B E6 E8 2D      [ 5] 1367 	ldb	45,s
   0E7E 4F            [ 2] 1368 	clra		;zero_extendqihi: R:b -> R:d
   0E7F 1F 02         [ 6] 1369 	tfr	d,y
   0E81 10 AF E4      [ 6] 1370 	sty	,s
   0E84 EC E4         [ 5] 1371 	ldd	,s
   0E86 58            [ 2] 1372 	aslb
   0E87 49            [ 2] 1373 	rola
   0E88 58            [ 2] 1374 	aslb
   0E89 49            [ 2] 1375 	rola
   0E8A 1F 01         [ 6] 1376 	tfr	d,x
   0E8C AF E4         [ 5] 1377 	stx	,s
   0E8E EC E4         [ 5] 1378 	ldd	,s
   0E90 31 AB         [ 8] 1379 	leay	d,y
   0E92 20 50         [ 3] 1380 	bra	L51
   0E94                    1381 L50:
   0E94 F6 C8 8A      [ 5] 1382 	ldb	_sneakyoffset
   0E97 E7 62         [ 5] 1383 	stb	2,s
   0E99 E6 62         [ 5] 1384 	ldb	2,s
   0E9B CB 03         [ 2] 1385 	addb	#3
   0E9D E7 E8 2E      [ 5] 1386 	stb	46,s
   0EA0 E6 E8 2E      [ 5] 1387 	ldb	46,s
   0EA3 4F            [ 2] 1388 	clra		;zero_extendqihi: R:b -> R:d
   0EA4 1F 01         [ 6] 1389 	tfr	d,x
   0EA6 AF E8 17      [ 6] 1390 	stx	23,s
   0EA9 EC E8 17      [ 6] 1391 	ldd	23,s
   0EAC 58            [ 2] 1392 	aslb
   0EAD 49            [ 2] 1393 	rola
   0EAE 58            [ 2] 1394 	aslb
   0EAF 49            [ 2] 1395 	rola
   0EB0 ED E8 17      [ 6] 1396 	std	23,s
   0EB3 EC E8 17      [ 6] 1397 	ldd	23,s
   0EB6 30 8B         [ 8] 1398 	leax	d,x
   0EB8 AF E8 17      [ 6] 1399 	stx	23,s
   0EBB EC E8 17      [ 6] 1400 	ldd	23,s
   0EBE C3 00 01      [ 4] 1401 	addd	#1; addhi3,3
   0EC1 58            [ 2] 1402 	aslb
   0EC2 49            [ 2] 1403 	rola
   0EC3 8E C8 98      [ 3] 1404 	ldx	#_Displayed_Squares
   0EC6 31 8B         [ 8] 1405 	leay	d,x
   0EC8 8E 02 10      [ 3] 1406 	ldx	#_draw_square
   0ECB AF A4         [ 5] 1407 	stx	,y
   0ECD E6 E8 2E      [ 5] 1408 	ldb	46,s
   0ED0 4F            [ 2] 1409 	clra		;zero_extendqihi: R:b -> R:d
   0ED1 1F 02         [ 6] 1410 	tfr	d,y
   0ED3 10 AF E4      [ 6] 1411 	sty	,s
   0ED6 EC E4         [ 5] 1412 	ldd	,s
   0ED8 58            [ 2] 1413 	aslb
   0ED9 49            [ 2] 1414 	rola
   0EDA 58            [ 2] 1415 	aslb
   0EDB 49            [ 2] 1416 	rola
   0EDC 1F 01         [ 6] 1417 	tfr	d,x
   0EDE AF E4         [ 5] 1418 	stx	,s
   0EE0 EC E4         [ 5] 1419 	ldd	,s
   0EE2 31 AB         [ 8] 1420 	leay	d,y
   0EE4                    1421 L51:
   0EE4 F6 C8 94      [ 5] 1422 	ldb	_joy_x
   0EE7 5D            [ 2] 1423 	tstb
   0EE8 26 58         [ 3] 1424 	bne	L52
   0EEA F6 C8 95      [ 5] 1425 	ldb	_joy_y
   0EED 5D            [ 2] 1426 	tstb
   0EEE 26 52         [ 3] 1427 	bne	L52
   0EF0 F6 C8 8A      [ 5] 1428 	ldb	_sneakyoffset
   0EF3 E7 62         [ 5] 1429 	stb	2,s
   0EF5 E6 62         [ 5] 1430 	ldb	2,s
   0EF7 CB 04         [ 2] 1431 	addb	#4
   0EF9 E7 E8 2F      [ 5] 1432 	stb	47,s
   0EFC E6 E8 2F      [ 5] 1433 	ldb	47,s
   0EFF 4F            [ 2] 1434 	clra		;zero_extendqihi: R:b -> R:d
   0F00 1F 01         [ 6] 1435 	tfr	d,x
   0F02 AF E8 15      [ 6] 1436 	stx	21,s
   0F05 EC E8 15      [ 6] 1437 	ldd	21,s
   0F08 58            [ 2] 1438 	aslb
   0F09 49            [ 2] 1439 	rola
   0F0A 58            [ 2] 1440 	aslb
   0F0B 49            [ 2] 1441 	rola
   0F0C ED E8 15      [ 6] 1442 	std	21,s
   0F0F EC E8 15      [ 6] 1443 	ldd	21,s
   0F12 30 8B         [ 8] 1444 	leax	d,x
   0F14 AF E8 15      [ 6] 1445 	stx	21,s
   0F17 EC E8 15      [ 6] 1446 	ldd	21,s
   0F1A C3 00 01      [ 4] 1447 	addd	#1; addhi3,3
   0F1D 58            [ 2] 1448 	aslb
   0F1E 49            [ 2] 1449 	rola
   0F1F 8E C8 98      [ 3] 1450 	ldx	#_Displayed_Squares
   0F22 31 8B         [ 8] 1451 	leay	d,x
   0F24 8E 02 86      [ 3] 1452 	ldx	#_draw_square_filled
   0F27 AF A4         [ 5] 1453 	stx	,y
   0F29 E6 E8 2F      [ 5] 1454 	ldb	47,s
   0F2C 4F            [ 2] 1455 	clra		;zero_extendqihi: R:b -> R:d
   0F2D 1F 02         [ 6] 1456 	tfr	d,y
   0F2F 10 AF E4      [ 6] 1457 	sty	,s
   0F32 EC E4         [ 5] 1458 	ldd	,s
   0F34 58            [ 2] 1459 	aslb
   0F35 49            [ 2] 1460 	rola
   0F36 58            [ 2] 1461 	aslb
   0F37 49            [ 2] 1462 	rola
   0F38 1F 01         [ 6] 1463 	tfr	d,x
   0F3A AF E4         [ 5] 1464 	stx	,s
   0F3C EC E4         [ 5] 1465 	ldd	,s
   0F3E 31 AB         [ 8] 1466 	leay	d,y
   0F40 20 50         [ 3] 1467 	bra	L53
   0F42                    1468 L52:
   0F42 F6 C8 8A      [ 5] 1469 	ldb	_sneakyoffset
   0F45 E7 62         [ 5] 1470 	stb	2,s
   0F47 E6 62         [ 5] 1471 	ldb	2,s
   0F49 CB 04         [ 2] 1472 	addb	#4
   0F4B E7 E8 30      [ 5] 1473 	stb	48,s
   0F4E E6 E8 30      [ 5] 1474 	ldb	48,s
   0F51 4F            [ 2] 1475 	clra		;zero_extendqihi: R:b -> R:d
   0F52 1F 01         [ 6] 1476 	tfr	d,x
   0F54 AF E8 13      [ 6] 1477 	stx	19,s
   0F57 EC E8 13      [ 6] 1478 	ldd	19,s
   0F5A 58            [ 2] 1479 	aslb
   0F5B 49            [ 2] 1480 	rola
   0F5C 58            [ 2] 1481 	aslb
   0F5D 49            [ 2] 1482 	rola
   0F5E ED E8 13      [ 6] 1483 	std	19,s
   0F61 EC E8 13      [ 6] 1484 	ldd	19,s
   0F64 30 8B         [ 8] 1485 	leax	d,x
   0F66 AF E8 13      [ 6] 1486 	stx	19,s
   0F69 EC E8 13      [ 6] 1487 	ldd	19,s
   0F6C C3 00 01      [ 4] 1488 	addd	#1; addhi3,3
   0F6F 58            [ 2] 1489 	aslb
   0F70 49            [ 2] 1490 	rola
   0F71 8E C8 98      [ 3] 1491 	ldx	#_Displayed_Squares
   0F74 31 8B         [ 8] 1492 	leay	d,x
   0F76 8E 02 10      [ 3] 1493 	ldx	#_draw_square
   0F79 AF A4         [ 5] 1494 	stx	,y
   0F7B E6 E8 30      [ 5] 1495 	ldb	48,s
   0F7E 4F            [ 2] 1496 	clra		;zero_extendqihi: R:b -> R:d
   0F7F 1F 02         [ 6] 1497 	tfr	d,y
   0F81 10 AF E4      [ 6] 1498 	sty	,s
   0F84 EC E4         [ 5] 1499 	ldd	,s
   0F86 58            [ 2] 1500 	aslb
   0F87 49            [ 2] 1501 	rola
   0F88 58            [ 2] 1502 	aslb
   0F89 49            [ 2] 1503 	rola
   0F8A 1F 01         [ 6] 1504 	tfr	d,x
   0F8C AF E4         [ 5] 1505 	stx	,s
   0F8E EC E4         [ 5] 1506 	ldd	,s
   0F90 31 AB         [ 8] 1507 	leay	d,y
   0F92                    1508 L53:
   0F92 F6 C8 94      [ 5] 1509 	ldb	_joy_x
   0F95 5D            [ 2] 1510 	tstb
   0F96 2F 58         [ 3] 1511 	ble	L54
   0F98 F6 C8 95      [ 5] 1512 	ldb	_joy_y
   0F9B 5D            [ 2] 1513 	tstb
   0F9C 26 52         [ 3] 1514 	bne	L54
   0F9E F6 C8 8A      [ 5] 1515 	ldb	_sneakyoffset
   0FA1 E7 62         [ 5] 1516 	stb	2,s
   0FA3 E6 62         [ 5] 1517 	ldb	2,s
   0FA5 CB 05         [ 2] 1518 	addb	#5
   0FA7 E7 E8 31      [ 5] 1519 	stb	49,s
   0FAA E6 E8 31      [ 5] 1520 	ldb	49,s
   0FAD 4F            [ 2] 1521 	clra		;zero_extendqihi: R:b -> R:d
   0FAE 1F 01         [ 6] 1522 	tfr	d,x
   0FB0 AF E8 11      [ 6] 1523 	stx	17,s
   0FB3 EC E8 11      [ 6] 1524 	ldd	17,s
   0FB6 58            [ 2] 1525 	aslb
   0FB7 49            [ 2] 1526 	rola
   0FB8 58            [ 2] 1527 	aslb
   0FB9 49            [ 2] 1528 	rola
   0FBA ED E8 11      [ 6] 1529 	std	17,s
   0FBD EC E8 11      [ 6] 1530 	ldd	17,s
   0FC0 30 8B         [ 8] 1531 	leax	d,x
   0FC2 AF E8 11      [ 6] 1532 	stx	17,s
   0FC5 EC E8 11      [ 6] 1533 	ldd	17,s
   0FC8 C3 00 01      [ 4] 1534 	addd	#1; addhi3,3
   0FCB 58            [ 2] 1535 	aslb
   0FCC 49            [ 2] 1536 	rola
   0FCD 8E C8 98      [ 3] 1537 	ldx	#_Displayed_Squares
   0FD0 31 8B         [ 8] 1538 	leay	d,x
   0FD2 8E 02 86      [ 3] 1539 	ldx	#_draw_square_filled
   0FD5 AF A4         [ 5] 1540 	stx	,y
   0FD7 E6 E8 31      [ 5] 1541 	ldb	49,s
   0FDA 4F            [ 2] 1542 	clra		;zero_extendqihi: R:b -> R:d
   0FDB 1F 02         [ 6] 1543 	tfr	d,y
   0FDD 10 AF E4      [ 6] 1544 	sty	,s
   0FE0 EC E4         [ 5] 1545 	ldd	,s
   0FE2 58            [ 2] 1546 	aslb
   0FE3 49            [ 2] 1547 	rola
   0FE4 58            [ 2] 1548 	aslb
   0FE5 49            [ 2] 1549 	rola
   0FE6 1F 01         [ 6] 1550 	tfr	d,x
   0FE8 AF E4         [ 5] 1551 	stx	,s
   0FEA EC E4         [ 5] 1552 	ldd	,s
   0FEC 31 AB         [ 8] 1553 	leay	d,y
   0FEE 20 4A         [ 3] 1554 	bra	L55
   0FF0                    1555 L54:
   0FF0 F6 C8 8A      [ 5] 1556 	ldb	_sneakyoffset
   0FF3 E7 62         [ 5] 1557 	stb	2,s
   0FF5 E6 62         [ 5] 1558 	ldb	2,s
   0FF7 CB 05         [ 2] 1559 	addb	#5
   0FF9 E7 E8 32      [ 5] 1560 	stb	50,s
   0FFC E6 E8 32      [ 5] 1561 	ldb	50,s
   0FFF 4F            [ 2] 1562 	clra		;zero_extendqihi: R:b -> R:d
   1000 1F 01         [ 6] 1563 	tfr	d,x
   1002 AF 6F         [ 6] 1564 	stx	15,s
   1004 EC 6F         [ 6] 1565 	ldd	15,s
   1006 58            [ 2] 1566 	aslb
   1007 49            [ 2] 1567 	rola
   1008 58            [ 2] 1568 	aslb
   1009 49            [ 2] 1569 	rola
   100A ED 6F         [ 6] 1570 	std	15,s
   100C EC 6F         [ 6] 1571 	ldd	15,s
   100E 30 8B         [ 8] 1572 	leax	d,x
   1010 AF 6F         [ 6] 1573 	stx	15,s
   1012 EC 6F         [ 6] 1574 	ldd	15,s
   1014 C3 00 01      [ 4] 1575 	addd	#1; addhi3,3
   1017 58            [ 2] 1576 	aslb
   1018 49            [ 2] 1577 	rola
   1019 8E C8 98      [ 3] 1578 	ldx	#_Displayed_Squares
   101C 31 8B         [ 8] 1579 	leay	d,x
   101E 8E 02 10      [ 3] 1580 	ldx	#_draw_square
   1021 AF A4         [ 5] 1581 	stx	,y
   1023 E6 E8 32      [ 5] 1582 	ldb	50,s
   1026 4F            [ 2] 1583 	clra		;zero_extendqihi: R:b -> R:d
   1027 1F 02         [ 6] 1584 	tfr	d,y
   1029 10 AF E4      [ 6] 1585 	sty	,s
   102C EC E4         [ 5] 1586 	ldd	,s
   102E 58            [ 2] 1587 	aslb
   102F 49            [ 2] 1588 	rola
   1030 58            [ 2] 1589 	aslb
   1031 49            [ 2] 1590 	rola
   1032 1F 01         [ 6] 1591 	tfr	d,x
   1034 AF E4         [ 5] 1592 	stx	,s
   1036 EC E4         [ 5] 1593 	ldd	,s
   1038 31 AB         [ 8] 1594 	leay	d,y
   103A                    1595 L55:
   103A F6 C8 94      [ 5] 1596 	ldb	_joy_x
   103D 5D            [ 2] 1597 	tstb
   103E 2C 52         [ 3] 1598 	bge	L56
   1040 F6 C8 95      [ 5] 1599 	ldb	_joy_y
   1043 5D            [ 2] 1600 	tstb
   1044 2C 4C         [ 3] 1601 	bge	L56
   1046 F6 C8 8A      [ 5] 1602 	ldb	_sneakyoffset
   1049 E7 62         [ 5] 1603 	stb	2,s
   104B E6 62         [ 5] 1604 	ldb	2,s
   104D CB 06         [ 2] 1605 	addb	#6
   104F E7 E8 33      [ 5] 1606 	stb	51,s
   1052 E6 E8 33      [ 5] 1607 	ldb	51,s
   1055 4F            [ 2] 1608 	clra		;zero_extendqihi: R:b -> R:d
   1056 1F 01         [ 6] 1609 	tfr	d,x
   1058 AF 6D         [ 6] 1610 	stx	13,s
   105A EC 6D         [ 6] 1611 	ldd	13,s
   105C 58            [ 2] 1612 	aslb
   105D 49            [ 2] 1613 	rola
   105E 58            [ 2] 1614 	aslb
   105F 49            [ 2] 1615 	rola
   1060 ED 6D         [ 6] 1616 	std	13,s
   1062 EC 6D         [ 6] 1617 	ldd	13,s
   1064 30 8B         [ 8] 1618 	leax	d,x
   1066 AF 6D         [ 6] 1619 	stx	13,s
   1068 EC 6D         [ 6] 1620 	ldd	13,s
   106A C3 00 01      [ 4] 1621 	addd	#1; addhi3,3
   106D 58            [ 2] 1622 	aslb
   106E 49            [ 2] 1623 	rola
   106F 8E C8 98      [ 3] 1624 	ldx	#_Displayed_Squares
   1072 31 8B         [ 8] 1625 	leay	d,x
   1074 8E 02 86      [ 3] 1626 	ldx	#_draw_square_filled
   1077 AF A4         [ 5] 1627 	stx	,y
   1079 E6 E8 33      [ 5] 1628 	ldb	51,s
   107C 4F            [ 2] 1629 	clra		;zero_extendqihi: R:b -> R:d
   107D 1F 02         [ 6] 1630 	tfr	d,y
   107F 10 AF E4      [ 6] 1631 	sty	,s
   1082 EC E4         [ 5] 1632 	ldd	,s
   1084 58            [ 2] 1633 	aslb
   1085 49            [ 2] 1634 	rola
   1086 58            [ 2] 1635 	aslb
   1087 49            [ 2] 1636 	rola
   1088 1F 01         [ 6] 1637 	tfr	d,x
   108A AF E4         [ 5] 1638 	stx	,s
   108C EC E4         [ 5] 1639 	ldd	,s
   108E 31 AB         [ 8] 1640 	leay	d,y
   1090 20 4A         [ 3] 1641 	bra	L57
   1092                    1642 L56:
   1092 F6 C8 8A      [ 5] 1643 	ldb	_sneakyoffset
   1095 E7 62         [ 5] 1644 	stb	2,s
   1097 E6 62         [ 5] 1645 	ldb	2,s
   1099 CB 06         [ 2] 1646 	addb	#6
   109B E7 E8 34      [ 5] 1647 	stb	52,s
   109E E6 E8 34      [ 5] 1648 	ldb	52,s
   10A1 4F            [ 2] 1649 	clra		;zero_extendqihi: R:b -> R:d
   10A2 1F 01         [ 6] 1650 	tfr	d,x
   10A4 AF 6B         [ 6] 1651 	stx	11,s
   10A6 EC 6B         [ 6] 1652 	ldd	11,s
   10A8 58            [ 2] 1653 	aslb
   10A9 49            [ 2] 1654 	rola
   10AA 58            [ 2] 1655 	aslb
   10AB 49            [ 2] 1656 	rola
   10AC ED 6B         [ 6] 1657 	std	11,s
   10AE EC 6B         [ 6] 1658 	ldd	11,s
   10B0 30 8B         [ 8] 1659 	leax	d,x
   10B2 AF 6B         [ 6] 1660 	stx	11,s
   10B4 EC 6B         [ 6] 1661 	ldd	11,s
   10B6 C3 00 01      [ 4] 1662 	addd	#1; addhi3,3
   10B9 58            [ 2] 1663 	aslb
   10BA 49            [ 2] 1664 	rola
   10BB 8E C8 98      [ 3] 1665 	ldx	#_Displayed_Squares
   10BE 31 8B         [ 8] 1666 	leay	d,x
   10C0 8E 02 10      [ 3] 1667 	ldx	#_draw_square
   10C3 AF A4         [ 5] 1668 	stx	,y
   10C5 E6 E8 34      [ 5] 1669 	ldb	52,s
   10C8 4F            [ 2] 1670 	clra		;zero_extendqihi: R:b -> R:d
   10C9 1F 02         [ 6] 1671 	tfr	d,y
   10CB 10 AF E4      [ 6] 1672 	sty	,s
   10CE EC E4         [ 5] 1673 	ldd	,s
   10D0 58            [ 2] 1674 	aslb
   10D1 49            [ 2] 1675 	rola
   10D2 58            [ 2] 1676 	aslb
   10D3 49            [ 2] 1677 	rola
   10D4 1F 01         [ 6] 1678 	tfr	d,x
   10D6 AF E4         [ 5] 1679 	stx	,s
   10D8 EC E4         [ 5] 1680 	ldd	,s
   10DA 31 AB         [ 8] 1681 	leay	d,y
   10DC                    1682 L57:
   10DC F6 C8 94      [ 5] 1683 	ldb	_joy_x
   10DF 5D            [ 2] 1684 	tstb
   10E0 26 52         [ 3] 1685 	bne	L58
   10E2 F6 C8 95      [ 5] 1686 	ldb	_joy_y
   10E5 5D            [ 2] 1687 	tstb
   10E6 2C 4C         [ 3] 1688 	bge	L58
   10E8 F6 C8 8A      [ 5] 1689 	ldb	_sneakyoffset
   10EB E7 62         [ 5] 1690 	stb	2,s
   10ED E6 62         [ 5] 1691 	ldb	2,s
   10EF CB 07         [ 2] 1692 	addb	#7
   10F1 E7 E8 35      [ 5] 1693 	stb	53,s
   10F4 E6 E8 35      [ 5] 1694 	ldb	53,s
   10F7 4F            [ 2] 1695 	clra		;zero_extendqihi: R:b -> R:d
   10F8 1F 01         [ 6] 1696 	tfr	d,x
   10FA AF 69         [ 6] 1697 	stx	9,s
   10FC EC 69         [ 6] 1698 	ldd	9,s
   10FE 58            [ 2] 1699 	aslb
   10FF 49            [ 2] 1700 	rola
   1100 58            [ 2] 1701 	aslb
   1101 49            [ 2] 1702 	rola
   1102 ED 69         [ 6] 1703 	std	9,s
   1104 EC 69         [ 6] 1704 	ldd	9,s
   1106 30 8B         [ 8] 1705 	leax	d,x
   1108 AF 69         [ 6] 1706 	stx	9,s
   110A EC 69         [ 6] 1707 	ldd	9,s
   110C C3 00 01      [ 4] 1708 	addd	#1; addhi3,3
   110F 58            [ 2] 1709 	aslb
   1110 49            [ 2] 1710 	rola
   1111 8E C8 98      [ 3] 1711 	ldx	#_Displayed_Squares
   1114 31 8B         [ 8] 1712 	leay	d,x
   1116 8E 02 86      [ 3] 1713 	ldx	#_draw_square_filled
   1119 AF A4         [ 5] 1714 	stx	,y
   111B E6 E8 35      [ 5] 1715 	ldb	53,s
   111E 4F            [ 2] 1716 	clra		;zero_extendqihi: R:b -> R:d
   111F 1F 02         [ 6] 1717 	tfr	d,y
   1121 10 AF E4      [ 6] 1718 	sty	,s
   1124 EC E4         [ 5] 1719 	ldd	,s
   1126 58            [ 2] 1720 	aslb
   1127 49            [ 2] 1721 	rola
   1128 58            [ 2] 1722 	aslb
   1129 49            [ 2] 1723 	rola
   112A 1F 01         [ 6] 1724 	tfr	d,x
   112C AF E4         [ 5] 1725 	stx	,s
   112E EC E4         [ 5] 1726 	ldd	,s
   1130 31 AB         [ 8] 1727 	leay	d,y
   1132 20 4A         [ 3] 1728 	bra	L59
   1134                    1729 L58:
   1134 F6 C8 8A      [ 5] 1730 	ldb	_sneakyoffset
   1137 E7 62         [ 5] 1731 	stb	2,s
   1139 E6 62         [ 5] 1732 	ldb	2,s
   113B CB 07         [ 2] 1733 	addb	#7
   113D E7 E8 36      [ 5] 1734 	stb	54,s
   1140 E6 E8 36      [ 5] 1735 	ldb	54,s
   1143 4F            [ 2] 1736 	clra		;zero_extendqihi: R:b -> R:d
   1144 1F 01         [ 6] 1737 	tfr	d,x
   1146 AF 67         [ 6] 1738 	stx	7,s
   1148 EC 67         [ 6] 1739 	ldd	7,s
   114A 58            [ 2] 1740 	aslb
   114B 49            [ 2] 1741 	rola
   114C 58            [ 2] 1742 	aslb
   114D 49            [ 2] 1743 	rola
   114E ED 67         [ 6] 1744 	std	7,s
   1150 EC 67         [ 6] 1745 	ldd	7,s
   1152 30 8B         [ 8] 1746 	leax	d,x
   1154 AF 67         [ 6] 1747 	stx	7,s
   1156 EC 67         [ 6] 1748 	ldd	7,s
   1158 C3 00 01      [ 4] 1749 	addd	#1; addhi3,3
   115B 58            [ 2] 1750 	aslb
   115C 49            [ 2] 1751 	rola
   115D 8E C8 98      [ 3] 1752 	ldx	#_Displayed_Squares
   1160 31 8B         [ 8] 1753 	leay	d,x
   1162 8E 02 10      [ 3] 1754 	ldx	#_draw_square
   1165 AF A4         [ 5] 1755 	stx	,y
   1167 E6 E8 36      [ 5] 1756 	ldb	54,s
   116A 4F            [ 2] 1757 	clra		;zero_extendqihi: R:b -> R:d
   116B 1F 02         [ 6] 1758 	tfr	d,y
   116D 10 AF E4      [ 6] 1759 	sty	,s
   1170 EC E4         [ 5] 1760 	ldd	,s
   1172 58            [ 2] 1761 	aslb
   1173 49            [ 2] 1762 	rola
   1174 58            [ 2] 1763 	aslb
   1175 49            [ 2] 1764 	rola
   1176 1F 01         [ 6] 1765 	tfr	d,x
   1178 AF E4         [ 5] 1766 	stx	,s
   117A EC E4         [ 5] 1767 	ldd	,s
   117C 31 AB         [ 8] 1768 	leay	d,y
   117E                    1769 L59:
   117E F6 C8 94      [ 5] 1770 	ldb	_joy_x
   1181 5D            [ 2] 1771 	tstb
   1182 2F 52         [ 3] 1772 	ble	L60
   1184 F6 C8 95      [ 5] 1773 	ldb	_joy_y
   1187 5D            [ 2] 1774 	tstb
   1188 2C 4C         [ 3] 1775 	bge	L60
   118A F6 C8 8A      [ 5] 1776 	ldb	_sneakyoffset
   118D E7 62         [ 5] 1777 	stb	2,s
   118F E6 62         [ 5] 1778 	ldb	2,s
   1191 CB 08         [ 2] 1779 	addb	#8
   1193 E7 E8 37      [ 5] 1780 	stb	55,s
   1196 E6 E8 37      [ 5] 1781 	ldb	55,s
   1199 4F            [ 2] 1782 	clra		;zero_extendqihi: R:b -> R:d
   119A 1F 01         [ 6] 1783 	tfr	d,x
   119C AF 65         [ 6] 1784 	stx	5,s
   119E EC 65         [ 6] 1785 	ldd	5,s
   11A0 58            [ 2] 1786 	aslb
   11A1 49            [ 2] 1787 	rola
   11A2 58            [ 2] 1788 	aslb
   11A3 49            [ 2] 1789 	rola
   11A4 ED 65         [ 6] 1790 	std	5,s
   11A6 EC 65         [ 6] 1791 	ldd	5,s
   11A8 30 8B         [ 8] 1792 	leax	d,x
   11AA AF 65         [ 6] 1793 	stx	5,s
   11AC EC 65         [ 6] 1794 	ldd	5,s
   11AE C3 00 01      [ 4] 1795 	addd	#1; addhi3,3
   11B1 58            [ 2] 1796 	aslb
   11B2 49            [ 2] 1797 	rola
   11B3 8E C8 98      [ 3] 1798 	ldx	#_Displayed_Squares
   11B6 31 8B         [ 8] 1799 	leay	d,x
   11B8 8E 02 86      [ 3] 1800 	ldx	#_draw_square_filled
   11BB AF A4         [ 5] 1801 	stx	,y
   11BD E6 E8 37      [ 5] 1802 	ldb	55,s
   11C0 4F            [ 2] 1803 	clra		;zero_extendqihi: R:b -> R:d
   11C1 1F 02         [ 6] 1804 	tfr	d,y
   11C3 10 AF E4      [ 6] 1805 	sty	,s
   11C6 EC E4         [ 5] 1806 	ldd	,s
   11C8 58            [ 2] 1807 	aslb
   11C9 49            [ 2] 1808 	rola
   11CA 58            [ 2] 1809 	aslb
   11CB 49            [ 2] 1810 	rola
   11CC 1F 01         [ 6] 1811 	tfr	d,x
   11CE AF E4         [ 5] 1812 	stx	,s
   11D0 EC E4         [ 5] 1813 	ldd	,s
   11D2 31 AB         [ 8] 1814 	leay	d,y
   11D4 20 4A         [ 3] 1815 	bra	L62
   11D6                    1816 L60:
   11D6 F6 C8 8A      [ 5] 1817 	ldb	_sneakyoffset
   11D9 E7 62         [ 5] 1818 	stb	2,s
   11DB E6 62         [ 5] 1819 	ldb	2,s
   11DD CB 08         [ 2] 1820 	addb	#8
   11DF E7 E8 38      [ 5] 1821 	stb	56,s
   11E2 E6 E8 38      [ 5] 1822 	ldb	56,s
   11E5 4F            [ 2] 1823 	clra		;zero_extendqihi: R:b -> R:d
   11E6 1F 01         [ 6] 1824 	tfr	d,x
   11E8 AF 63         [ 6] 1825 	stx	3,s
   11EA EC 63         [ 6] 1826 	ldd	3,s
   11EC 58            [ 2] 1827 	aslb
   11ED 49            [ 2] 1828 	rola
   11EE 58            [ 2] 1829 	aslb
   11EF 49            [ 2] 1830 	rola
   11F0 ED 63         [ 6] 1831 	std	3,s
   11F2 EC 63         [ 6] 1832 	ldd	3,s
   11F4 30 8B         [ 8] 1833 	leax	d,x
   11F6 AF 63         [ 6] 1834 	stx	3,s
   11F8 EC 63         [ 6] 1835 	ldd	3,s
   11FA C3 00 01      [ 4] 1836 	addd	#1; addhi3,3
   11FD 58            [ 2] 1837 	aslb
   11FE 49            [ 2] 1838 	rola
   11FF 8E C8 98      [ 3] 1839 	ldx	#_Displayed_Squares
   1202 31 8B         [ 8] 1840 	leay	d,x
   1204 8E 02 10      [ 3] 1841 	ldx	#_draw_square
   1207 AF A4         [ 5] 1842 	stx	,y
   1209 E6 E8 38      [ 5] 1843 	ldb	56,s
   120C 4F            [ 2] 1844 	clra		;zero_extendqihi: R:b -> R:d
   120D 1F 02         [ 6] 1845 	tfr	d,y
   120F 10 AF E4      [ 6] 1846 	sty	,s
   1212 EC E4         [ 5] 1847 	ldd	,s
   1214 58            [ 2] 1848 	aslb
   1215 49            [ 2] 1849 	rola
   1216 58            [ 2] 1850 	aslb
   1217 49            [ 2] 1851 	rola
   1218 1F 01         [ 6] 1852 	tfr	d,x
   121A AF E4         [ 5] 1853 	stx	,s
   121C EC E4         [ 5] 1854 	ldd	,s
   121E 31 AB         [ 8] 1855 	leay	d,y
   1220                    1856 L62:
   1220 32 E8 39      [ 5] 1857 	leas	57,s
   1223 35 A0         [ 7] 1858 	puls	y,pc
                           1859 	.globl	_read_player_input
   1225                    1860 _read_player_input:
   1225 32 7E         [ 5] 1861 	leas	-2,s
   1227 BD F1 BA      [ 8] 1862 	jsr	___Read_Btns
   122A BD F1 F8      [ 8] 1863 	jsr	___Joy_Digital
   122D F6 C8 1B      [ 5] 1864 	ldb	_Vec_Joy_1_X
   1230 F7 C8 94      [ 5] 1865 	stb	_joy_x
   1233 F6 C8 1C      [ 5] 1866 	ldb	_Vec_Joy_1_Y
   1236 F7 C8 95      [ 5] 1867 	stb	_joy_y
   1239 F6 C8 1B      [ 5] 1868 	ldb	_Vec_Joy_1_X
   123C F7 C8 94      [ 5] 1869 	stb	_joy_x
   123F F6 C8 1C      [ 5] 1870 	ldb	_Vec_Joy_1_Y
   1242 F7 C8 95      [ 5] 1871 	stb	_joy_y
   1245 F6 C8 94      [ 5] 1872 	ldb	_joy_x
   1248 5D            [ 2] 1873 	tstb
   1249 2C 0B         [ 3] 1874 	bge	L64
   124B F6 C8 95      [ 5] 1875 	ldb	_joy_y
   124E 5D            [ 2] 1876 	tstb
   124F 2F 05         [ 3] 1877 	ble	L64
   1251 7F C8 96      [ 7] 1878 	clr	_temppass
   1254 20 06         [ 3] 1879 	bra	L65
   1256                    1880 L64:
   1256 F6 C8 96      [ 5] 1881 	ldb	_temppass
   1259 F7 C8 96      [ 5] 1882 	stb	_temppass
   125C                    1883 L65:
   125C F6 C8 94      [ 5] 1884 	ldb	_joy_x
   125F 5D            [ 2] 1885 	tstb
   1260 26 0D         [ 3] 1886 	bne	L66
   1262 F6 C8 95      [ 5] 1887 	ldb	_joy_y
   1265 5D            [ 2] 1888 	tstb
   1266 2F 07         [ 3] 1889 	ble	L66
   1268 C6 01         [ 2] 1890 	ldb	#1
   126A F7 C8 96      [ 5] 1891 	stb	_temppass
   126D 20 06         [ 3] 1892 	bra	L67
   126F                    1893 L66:
   126F F6 C8 96      [ 5] 1894 	ldb	_temppass
   1272 F7 C8 96      [ 5] 1895 	stb	_temppass
   1275                    1896 L67:
   1275 F6 C8 94      [ 5] 1897 	ldb	_joy_x
   1278 5D            [ 2] 1898 	tstb
   1279 2F 0D         [ 3] 1899 	ble	L68
   127B F6 C8 95      [ 5] 1900 	ldb	_joy_y
   127E 5D            [ 2] 1901 	tstb
   127F 2F 07         [ 3] 1902 	ble	L68
   1281 C6 02         [ 2] 1903 	ldb	#2
   1283 F7 C8 96      [ 5] 1904 	stb	_temppass
   1286 20 06         [ 3] 1905 	bra	L69
   1288                    1906 L68:
   1288 F6 C8 96      [ 5] 1907 	ldb	_temppass
   128B F7 C8 96      [ 5] 1908 	stb	_temppass
   128E                    1909 L69:
   128E F6 C8 94      [ 5] 1910 	ldb	_joy_x
   1291 5D            [ 2] 1911 	tstb
   1292 2C 0D         [ 3] 1912 	bge	L70
   1294 F6 C8 95      [ 5] 1913 	ldb	_joy_y
   1297 5D            [ 2] 1914 	tstb
   1298 26 07         [ 3] 1915 	bne	L70
   129A C6 03         [ 2] 1916 	ldb	#3
   129C F7 C8 96      [ 5] 1917 	stb	_temppass
   129F 20 06         [ 3] 1918 	bra	L71
   12A1                    1919 L70:
   12A1 F6 C8 96      [ 5] 1920 	ldb	_temppass
   12A4 F7 C8 96      [ 5] 1921 	stb	_temppass
   12A7                    1922 L71:
   12A7 F6 C8 94      [ 5] 1923 	ldb	_joy_x
   12AA 5D            [ 2] 1924 	tstb
   12AB 26 0D         [ 3] 1925 	bne	L72
   12AD F6 C8 95      [ 5] 1926 	ldb	_joy_y
   12B0 5D            [ 2] 1927 	tstb
   12B1 26 07         [ 3] 1928 	bne	L72
   12B3 C6 04         [ 2] 1929 	ldb	#4
   12B5 F7 C8 96      [ 5] 1930 	stb	_temppass
   12B8 20 06         [ 3] 1931 	bra	L73
   12BA                    1932 L72:
   12BA F6 C8 96      [ 5] 1933 	ldb	_temppass
   12BD F7 C8 96      [ 5] 1934 	stb	_temppass
   12C0                    1935 L73:
   12C0 F6 C8 94      [ 5] 1936 	ldb	_joy_x
   12C3 5D            [ 2] 1937 	tstb
   12C4 2F 0D         [ 3] 1938 	ble	L74
   12C6 F6 C8 95      [ 5] 1939 	ldb	_joy_y
   12C9 5D            [ 2] 1940 	tstb
   12CA 26 07         [ 3] 1941 	bne	L74
   12CC C6 05         [ 2] 1942 	ldb	#5
   12CE F7 C8 96      [ 5] 1943 	stb	_temppass
   12D1 20 06         [ 3] 1944 	bra	L75
   12D3                    1945 L74:
   12D3 F6 C8 96      [ 5] 1946 	ldb	_temppass
   12D6 F7 C8 96      [ 5] 1947 	stb	_temppass
   12D9                    1948 L75:
   12D9 F6 C8 94      [ 5] 1949 	ldb	_joy_x
   12DC 5D            [ 2] 1950 	tstb
   12DD 2C 0D         [ 3] 1951 	bge	L76
   12DF F6 C8 95      [ 5] 1952 	ldb	_joy_y
   12E2 5D            [ 2] 1953 	tstb
   12E3 2C 07         [ 3] 1954 	bge	L76
   12E5 C6 06         [ 2] 1955 	ldb	#6
   12E7 F7 C8 96      [ 5] 1956 	stb	_temppass
   12EA 20 06         [ 3] 1957 	bra	L77
   12EC                    1958 L76:
   12EC F6 C8 96      [ 5] 1959 	ldb	_temppass
   12EF F7 C8 96      [ 5] 1960 	stb	_temppass
   12F2                    1961 L77:
   12F2 F6 C8 94      [ 5] 1962 	ldb	_joy_x
   12F5 5D            [ 2] 1963 	tstb
   12F6 26 0D         [ 3] 1964 	bne	L78
   12F8 F6 C8 95      [ 5] 1965 	ldb	_joy_y
   12FB 5D            [ 2] 1966 	tstb
   12FC 2C 07         [ 3] 1967 	bge	L78
   12FE C6 07         [ 2] 1968 	ldb	#7
   1300 F7 C8 96      [ 5] 1969 	stb	_temppass
   1303 20 06         [ 3] 1970 	bra	L79
   1305                    1971 L78:
   1305 F6 C8 96      [ 5] 1972 	ldb	_temppass
   1308 F7 C8 96      [ 5] 1973 	stb	_temppass
   130B                    1974 L79:
   130B F6 C8 94      [ 5] 1975 	ldb	_joy_x
   130E 5D            [ 2] 1976 	tstb
   130F 2F 0D         [ 3] 1977 	ble	L80
   1311 F6 C8 95      [ 5] 1978 	ldb	_joy_y
   1314 5D            [ 2] 1979 	tstb
   1315 2C 07         [ 3] 1980 	bge	L80
   1317 C6 08         [ 2] 1981 	ldb	#8
   1319 F7 C8 96      [ 5] 1982 	stb	_temppass
   131C 20 06         [ 3] 1983 	bra	L81
   131E                    1984 L80:
   131E F6 C8 96      [ 5] 1985 	ldb	_temppass
   1321 F7 C8 96      [ 5] 1986 	stb	_temppass
   1324                    1987 L81:
   1324 F6 C8 11      [ 5] 1988 	ldb	_Vec_Buttons
   1327 C4 01         [ 2] 1989 	andb	#1
   1329 5D            [ 2] 1990 	tstb
   132A 27 1C         [ 3] 1991 	beq	L83
   132C F6 C8 89      [ 5] 1992 	ldb	_buttonspressedcounter
   132F E7 E4         [ 4] 1993 	stb	,s
   1331 F6 C8 96      [ 5] 1994 	ldb	_temppass
   1334 E7 61         [ 5] 1995 	stb	1,s
   1336 E6 E4         [ 4] 1996 	ldb	,s
   1338 4F            [ 2] 1997 	clra		;zero_extendqihi: R:b -> R:d
   1339 1F 01         [ 6] 1998 	tfr	d,x
   133B E6 61         [ 5] 1999 	ldb	1,s
   133D E7 89 C9 06   [ 8] 2000 	stb	_a_random_compare,x
   1341 F6 C8 89      [ 5] 2001 	ldb	_buttonspressedcounter
   1344 5C            [ 2] 2002 	incb
   1345 F7 C8 89      [ 5] 2003 	stb	_buttonspressedcounter
   1348                    2004 L83:
   1348 32 62         [ 5] 2005 	leas	2,s
   134A 39            [ 5] 2006 	rts
   134B                    2007 LC7:
   134B 21 53 4E 45 41 4B  2008 	.byte	33,83,78,69,65,75,89,32
        59 20
   1353 4F 46 46 53 45 54  2009 	.byte	79,70,70,83,69,84,33,-128
        21 80
   135B 00                 2010 	.byte	0
                           2011 	.globl	_Set_traps
   135C                    2012 _Set_traps:
   135C 7F C8 8A      [ 7] 2013 	clr	_sneakyoffset
   135F F6 C8 8D      [ 5] 2014 	ldb	_RandomSequenceCounterDisplay
   1362 C1 03         [ 2] 2015 	cmpb	#3	;cmpqi:
   1364 23 28         [ 3] 2016 	bls	L85
   1366 F6 C8 8D      [ 5] 2017 	ldb	_RandomSequenceCounterDisplay
   1369 C1 07         [ 2] 2018 	cmpb	#7	;cmpqi:
   136B 22 21         [ 3] 2019 	bhi	L85
   136D C6 C8         [ 2] 2020 	ldb	#-56
   136F E7 E2         [ 6] 2021 	stb	,-s
   1371 8E 01 90      [ 3] 2022 	ldx	#400
   1374 C6 03         [ 2] 2023 	ldb	#3
   1376 BD 1A E2      [ 8] 2024 	jsr	_play_tune
   1379 32 61         [ 5] 2025 	leas	1,s
   137B C6 A6         [ 2] 2026 	ldb	#-90
   137D E7 E2         [ 6] 2027 	stb	,-s
   137F 8E 13 4B      [ 3] 2028 	ldx	#LC7
   1382 C6 73         [ 2] 2029 	ldb	#115
   1384 BD 1A 3A      [ 8] 2030 	jsr	_print_string
   1387 32 61         [ 5] 2031 	leas	1,s
   1389 C6 03         [ 2] 2032 	ldb	#3
   138B F7 C8 8A      [ 5] 2033 	stb	_sneakyoffset
   138E                    2034 L85:
   138E F6 C8 8D      [ 5] 2035 	ldb	_RandomSequenceCounterDisplay
   1391 C1 0A         [ 2] 2036 	cmpb	#10	;cmpqi:
   1393 23 28         [ 3] 2037 	bls	L87
   1395 F6 C8 8D      [ 5] 2038 	ldb	_RandomSequenceCounterDisplay
   1398 C1 0D         [ 2] 2039 	cmpb	#13	;cmpqi:
   139A 22 21         [ 3] 2040 	bhi	L87
   139C C6 C8         [ 2] 2041 	ldb	#-56
   139E E7 E2         [ 6] 2042 	stb	,-s
   13A0 8E 01 90      [ 3] 2043 	ldx	#400
   13A3 C6 03         [ 2] 2044 	ldb	#3
   13A5 BD 1A E2      [ 8] 2045 	jsr	_play_tune
   13A8 32 61         [ 5] 2046 	leas	1,s
   13AA C6 A6         [ 2] 2047 	ldb	#-90
   13AC E7 E2         [ 6] 2048 	stb	,-s
   13AE 8E 13 4B      [ 3] 2049 	ldx	#LC7
   13B1 C6 73         [ 2] 2050 	ldb	#115
   13B3 BD 1A 3A      [ 8] 2051 	jsr	_print_string
   13B6 32 61         [ 5] 2052 	leas	1,s
   13B8 C6 02         [ 2] 2053 	ldb	#2
   13BA F7 C8 8A      [ 5] 2054 	stb	_sneakyoffset
   13BD                    2055 L87:
   13BD 39            [ 5] 2056 	rts
                           2057 	.globl	_add_square_x
   13BE                    2058 _add_square_x:
   13BE 34 60         [ 7] 2059 	pshs	y,u
   13C0 32 72         [ 5] 2060 	leas	-14,s
   13C2 E7 6D         [ 5] 2061 	stb	13,s
   13C4 E6 6D         [ 5] 2062 	ldb	13,s
   13C6 E7 6B         [ 5] 2063 	stb	11,s
   13C8 E6 6D         [ 5] 2064 	ldb	13,s
   13CA 1D            [ 2] 2065 	sex		;extendqihi2: R:b -> R:d
   13CB ED 69         [ 6] 2066 	std	9,s
   13CD EC 69         [ 6] 2067 	ldd	9,s
   13CF 58            [ 2] 2068 	aslb
   13D0 49            [ 2] 2069 	rola
   13D1 ED 69         [ 6] 2070 	std	9,s
   13D3 EC 69         [ 6] 2071 	ldd	9,s
   13D5 58            [ 2] 2072 	aslb
   13D6 49            [ 2] 2073 	rola
   13D7 58            [ 2] 2074 	aslb
   13D8 49            [ 2] 2075 	rola
   13D9 AE 69         [ 6] 2076 	ldx	9,s
   13DB 30 8B         [ 8] 2077 	leax	d,x
   13DD AF 69         [ 6] 2078 	stx	9,s
   13DF EE 69         [ 6] 2079 	ldu	9,s
   13E1 30 C9 C8 98   [ 8] 2080 	leax	_Displayed_Squares,u
   13E5 E6 84         [ 4] 2081 	ldb	,x
   13E7 E7 62         [ 5] 2082 	stb	2,s
   13E9 E6 62         [ 5] 2083 	ldb	2,s
   13EB 5C            [ 2] 2084 	incb
   13EC E7 6C         [ 5] 2085 	stb	12,s
   13EE E6 6B         [ 5] 2086 	ldb	11,s
   13F0 1D            [ 2] 2087 	sex		;extendqihi2: R:b -> R:d
   13F1 ED E4         [ 5] 2088 	std	,s
   13F3 AE E4         [ 5] 2089 	ldx	,s
   13F5 AF 67         [ 6] 2090 	stx	7,s
   13F7 EC 67         [ 6] 2091 	ldd	7,s
   13F9 58            [ 2] 2092 	aslb
   13FA 49            [ 2] 2093 	rola
   13FB ED 67         [ 6] 2094 	std	7,s
   13FD EC 67         [ 6] 2095 	ldd	7,s
   13FF 58            [ 2] 2096 	aslb
   1400 49            [ 2] 2097 	rola
   1401 58            [ 2] 2098 	aslb
   1402 49            [ 2] 2099 	rola
   1403 EE 67         [ 6] 2100 	ldu	7,s
   1405 33 CB         [ 8] 2101 	leau	d,u
   1407 EF 67         [ 6] 2102 	stu	7,s
   1409 EE 67         [ 6] 2103 	ldu	7,s
   140B 30 C9 C8 98   [ 8] 2104 	leax	_Displayed_Squares,u
   140F E6 6C         [ 5] 2105 	ldb	12,s
   1411 E7 84         [ 4] 2106 	stb	,x
   1413 E6 6D         [ 5] 2107 	ldb	13,s
   1415 1D            [ 2] 2108 	sex		;extendqihi2: R:b -> R:d
   1416 ED 65         [ 6] 2109 	std	5,s
   1418 EC 65         [ 6] 2110 	ldd	5,s
   141A 58            [ 2] 2111 	aslb
   141B 49            [ 2] 2112 	rola
   141C ED 65         [ 6] 2113 	std	5,s
   141E EC 65         [ 6] 2114 	ldd	5,s
   1420 58            [ 2] 2115 	aslb
   1421 49            [ 2] 2116 	rola
   1422 58            [ 2] 2117 	aslb
   1423 49            [ 2] 2118 	rola
   1424 AE 65         [ 6] 2119 	ldx	5,s
   1426 30 8B         [ 8] 2120 	leax	d,x
   1428 AF 65         [ 6] 2121 	stx	5,s
   142A EE 65         [ 6] 2122 	ldu	5,s
   142C 30 C9 C8 98   [ 8] 2123 	leax	_Displayed_Squares,u
   1430 E6 84         [ 4] 2124 	ldb	,x
   1432 C1 19         [ 2] 2125 	cmpb	#25	;cmpqi:
   1434 2F 22         [ 3] 2126 	ble	L90
   1436 E6 6D         [ 5] 2127 	ldb	13,s
   1438 1D            [ 2] 2128 	sex		;extendqihi2: R:b -> R:d
   1439 ED 63         [ 6] 2129 	std	3,s
   143B EC 63         [ 6] 2130 	ldd	3,s
   143D 58            [ 2] 2131 	aslb
   143E 49            [ 2] 2132 	rola
   143F ED 63         [ 6] 2133 	std	3,s
   1441 EC 63         [ 6] 2134 	ldd	3,s
   1443 58            [ 2] 2135 	aslb
   1444 49            [ 2] 2136 	rola
   1445 58            [ 2] 2137 	aslb
   1446 49            [ 2] 2138 	rola
   1447 AE 63         [ 6] 2139 	ldx	3,s
   1449 30 8B         [ 8] 2140 	leax	d,x
   144B AF 63         [ 6] 2141 	stx	3,s
   144D EE 63         [ 6] 2142 	ldu	3,s
   144F 31 C9 C8 9C   [ 8] 2143 	leay	_Displayed_Squares+4,u
   1453 8E 14 FA      [ 3] 2144 	ldx	#_sub_square_x
   1456 AF A4         [ 5] 2145 	stx	,y
   1458                    2146 L90:
   1458 32 6E         [ 5] 2147 	leas	14,s
   145A 35 E0         [ 8] 2148 	puls	y,u,pc
                           2149 	.globl	_add_square_y
   145C                    2150 _add_square_y:
   145C 34 60         [ 7] 2151 	pshs	y,u
   145E 32 72         [ 5] 2152 	leas	-14,s
   1460 E7 6D         [ 5] 2153 	stb	13,s
   1462 E6 6D         [ 5] 2154 	ldb	13,s
   1464 E7 6B         [ 5] 2155 	stb	11,s
   1466 E6 6D         [ 5] 2156 	ldb	13,s
   1468 1D            [ 2] 2157 	sex		;extendqihi2: R:b -> R:d
   1469 ED 69         [ 6] 2158 	std	9,s
   146B EC 69         [ 6] 2159 	ldd	9,s
   146D 58            [ 2] 2160 	aslb
   146E 49            [ 2] 2161 	rola
   146F ED 69         [ 6] 2162 	std	9,s
   1471 EC 69         [ 6] 2163 	ldd	9,s
   1473 58            [ 2] 2164 	aslb
   1474 49            [ 2] 2165 	rola
   1475 58            [ 2] 2166 	aslb
   1476 49            [ 2] 2167 	rola
   1477 AE 69         [ 6] 2168 	ldx	9,s
   1479 30 8B         [ 8] 2169 	leax	d,x
   147B AF 69         [ 6] 2170 	stx	9,s
   147D EE 69         [ 6] 2171 	ldu	9,s
   147F 30 C9 C8 99   [ 8] 2172 	leax	_Displayed_Squares+1,u
   1483 E6 84         [ 4] 2173 	ldb	,x
   1485 E7 62         [ 5] 2174 	stb	2,s
   1487 E6 62         [ 5] 2175 	ldb	2,s
   1489 5C            [ 2] 2176 	incb
   148A E7 6C         [ 5] 2177 	stb	12,s
   148C E6 6B         [ 5] 2178 	ldb	11,s
   148E 1D            [ 2] 2179 	sex		;extendqihi2: R:b -> R:d
   148F ED E4         [ 5] 2180 	std	,s
   1491 AE E4         [ 5] 2181 	ldx	,s
   1493 AF 67         [ 6] 2182 	stx	7,s
   1495 EC 67         [ 6] 2183 	ldd	7,s
   1497 58            [ 2] 2184 	aslb
   1498 49            [ 2] 2185 	rola
   1499 ED 67         [ 6] 2186 	std	7,s
   149B EC 67         [ 6] 2187 	ldd	7,s
   149D 58            [ 2] 2188 	aslb
   149E 49            [ 2] 2189 	rola
   149F 58            [ 2] 2190 	aslb
   14A0 49            [ 2] 2191 	rola
   14A1 EE 67         [ 6] 2192 	ldu	7,s
   14A3 33 CB         [ 8] 2193 	leau	d,u
   14A5 EF 67         [ 6] 2194 	stu	7,s
   14A7 EE 67         [ 6] 2195 	ldu	7,s
   14A9 30 C9 C8 99   [ 8] 2196 	leax	_Displayed_Squares+1,u
   14AD E6 6C         [ 5] 2197 	ldb	12,s
   14AF E7 84         [ 4] 2198 	stb	,x
   14B1 E6 6D         [ 5] 2199 	ldb	13,s
   14B3 1D            [ 2] 2200 	sex		;extendqihi2: R:b -> R:d
   14B4 ED 65         [ 6] 2201 	std	5,s
   14B6 EC 65         [ 6] 2202 	ldd	5,s
   14B8 58            [ 2] 2203 	aslb
   14B9 49            [ 2] 2204 	rola
   14BA ED 65         [ 6] 2205 	std	5,s
   14BC EC 65         [ 6] 2206 	ldd	5,s
   14BE 58            [ 2] 2207 	aslb
   14BF 49            [ 2] 2208 	rola
   14C0 58            [ 2] 2209 	aslb
   14C1 49            [ 2] 2210 	rola
   14C2 AE 65         [ 6] 2211 	ldx	5,s
   14C4 30 8B         [ 8] 2212 	leax	d,x
   14C6 AF 65         [ 6] 2213 	stx	5,s
   14C8 EE 65         [ 6] 2214 	ldu	5,s
   14CA 30 C9 C8 99   [ 8] 2215 	leax	_Displayed_Squares+1,u
   14CE E6 84         [ 4] 2216 	ldb	,x
   14D0 C1 19         [ 2] 2217 	cmpb	#25	;cmpqi:
   14D2 2F 22         [ 3] 2218 	ble	L93
   14D4 E6 6D         [ 5] 2219 	ldb	13,s
   14D6 1D            [ 2] 2220 	sex		;extendqihi2: R:b -> R:d
   14D7 ED 63         [ 6] 2221 	std	3,s
   14D9 EC 63         [ 6] 2222 	ldd	3,s
   14DB 58            [ 2] 2223 	aslb
   14DC 49            [ 2] 2224 	rola
   14DD ED 63         [ 6] 2225 	std	3,s
   14DF EC 63         [ 6] 2226 	ldd	3,s
   14E1 58            [ 2] 2227 	aslb
   14E2 49            [ 2] 2228 	rola
   14E3 58            [ 2] 2229 	aslb
   14E4 49            [ 2] 2230 	rola
   14E5 AE 63         [ 6] 2231 	ldx	3,s
   14E7 30 8B         [ 8] 2232 	leax	d,x
   14E9 AF 63         [ 6] 2233 	stx	3,s
   14EB EE 63         [ 6] 2234 	ldu	3,s
   14ED 31 C9 C8 9E   [ 8] 2235 	leay	_Displayed_Squares+6,u
   14F1 8E 15 98      [ 3] 2236 	ldx	#_sub_square_y
   14F4 AF A4         [ 5] 2237 	stx	,y
   14F6                    2238 L93:
   14F6 32 6E         [ 5] 2239 	leas	14,s
   14F8 35 E0         [ 8] 2240 	puls	y,u,pc
                           2241 	.globl	_sub_square_x
   14FA                    2242 _sub_square_x:
   14FA 34 60         [ 7] 2243 	pshs	y,u
   14FC 32 72         [ 5] 2244 	leas	-14,s
   14FE E7 6D         [ 5] 2245 	stb	13,s
   1500 E6 6D         [ 5] 2246 	ldb	13,s
   1502 E7 6B         [ 5] 2247 	stb	11,s
   1504 E6 6D         [ 5] 2248 	ldb	13,s
   1506 1D            [ 2] 2249 	sex		;extendqihi2: R:b -> R:d
   1507 ED 69         [ 6] 2250 	std	9,s
   1509 EC 69         [ 6] 2251 	ldd	9,s
   150B 58            [ 2] 2252 	aslb
   150C 49            [ 2] 2253 	rola
   150D ED 69         [ 6] 2254 	std	9,s
   150F EC 69         [ 6] 2255 	ldd	9,s
   1511 58            [ 2] 2256 	aslb
   1512 49            [ 2] 2257 	rola
   1513 58            [ 2] 2258 	aslb
   1514 49            [ 2] 2259 	rola
   1515 AE 69         [ 6] 2260 	ldx	9,s
   1517 30 8B         [ 8] 2261 	leax	d,x
   1519 AF 69         [ 6] 2262 	stx	9,s
   151B EE 69         [ 6] 2263 	ldu	9,s
   151D 30 C9 C8 98   [ 8] 2264 	leax	_Displayed_Squares,u
   1521 E6 84         [ 4] 2265 	ldb	,x
   1523 E7 62         [ 5] 2266 	stb	2,s
   1525 E6 62         [ 5] 2267 	ldb	2,s
   1527 5A            [ 2] 2268 	decb
   1528 E7 6C         [ 5] 2269 	stb	12,s
   152A E6 6B         [ 5] 2270 	ldb	11,s
   152C 1D            [ 2] 2271 	sex		;extendqihi2: R:b -> R:d
   152D ED E4         [ 5] 2272 	std	,s
   152F AE E4         [ 5] 2273 	ldx	,s
   1531 AF 67         [ 6] 2274 	stx	7,s
   1533 EC 67         [ 6] 2275 	ldd	7,s
   1535 58            [ 2] 2276 	aslb
   1536 49            [ 2] 2277 	rola
   1537 ED 67         [ 6] 2278 	std	7,s
   1539 EC 67         [ 6] 2279 	ldd	7,s
   153B 58            [ 2] 2280 	aslb
   153C 49            [ 2] 2281 	rola
   153D 58            [ 2] 2282 	aslb
   153E 49            [ 2] 2283 	rola
   153F EE 67         [ 6] 2284 	ldu	7,s
   1541 33 CB         [ 8] 2285 	leau	d,u
   1543 EF 67         [ 6] 2286 	stu	7,s
   1545 EE 67         [ 6] 2287 	ldu	7,s
   1547 30 C9 C8 98   [ 8] 2288 	leax	_Displayed_Squares,u
   154B E6 6C         [ 5] 2289 	ldb	12,s
   154D E7 84         [ 4] 2290 	stb	,x
   154F E6 6D         [ 5] 2291 	ldb	13,s
   1551 1D            [ 2] 2292 	sex		;extendqihi2: R:b -> R:d
   1552 ED 65         [ 6] 2293 	std	5,s
   1554 EC 65         [ 6] 2294 	ldd	5,s
   1556 58            [ 2] 2295 	aslb
   1557 49            [ 2] 2296 	rola
   1558 ED 65         [ 6] 2297 	std	5,s
   155A EC 65         [ 6] 2298 	ldd	5,s
   155C 58            [ 2] 2299 	aslb
   155D 49            [ 2] 2300 	rola
   155E 58            [ 2] 2301 	aslb
   155F 49            [ 2] 2302 	rola
   1560 AE 65         [ 6] 2303 	ldx	5,s
   1562 30 8B         [ 8] 2304 	leax	d,x
   1564 AF 65         [ 6] 2305 	stx	5,s
   1566 EE 65         [ 6] 2306 	ldu	5,s
   1568 30 C9 C8 98   [ 8] 2307 	leax	_Displayed_Squares,u
   156C E6 84         [ 4] 2308 	ldb	,x
   156E C1 E7         [ 2] 2309 	cmpb	#-25	;cmpqi:
   1570 2C 22         [ 3] 2310 	bge	L96
   1572 E6 6D         [ 5] 2311 	ldb	13,s
   1574 1D            [ 2] 2312 	sex		;extendqihi2: R:b -> R:d
   1575 ED 63         [ 6] 2313 	std	3,s
   1577 EC 63         [ 6] 2314 	ldd	3,s
   1579 58            [ 2] 2315 	aslb
   157A 49            [ 2] 2316 	rola
   157B ED 63         [ 6] 2317 	std	3,s
   157D EC 63         [ 6] 2318 	ldd	3,s
   157F 58            [ 2] 2319 	aslb
   1580 49            [ 2] 2320 	rola
   1581 58            [ 2] 2321 	aslb
   1582 49            [ 2] 2322 	rola
   1583 AE 63         [ 6] 2323 	ldx	3,s
   1585 30 8B         [ 8] 2324 	leax	d,x
   1587 AF 63         [ 6] 2325 	stx	3,s
   1589 EE 63         [ 6] 2326 	ldu	3,s
   158B 31 C9 C8 9C   [ 8] 2327 	leay	_Displayed_Squares+4,u
   158F 8E 13 BE      [ 3] 2328 	ldx	#_add_square_x
   1592 AF A4         [ 5] 2329 	stx	,y
   1594                    2330 L96:
   1594 32 6E         [ 5] 2331 	leas	14,s
   1596 35 E0         [ 8] 2332 	puls	y,u,pc
                           2333 	.globl	_sub_square_y
   1598                    2334 _sub_square_y:
   1598 34 60         [ 7] 2335 	pshs	y,u
   159A 32 72         [ 5] 2336 	leas	-14,s
   159C E7 6D         [ 5] 2337 	stb	13,s
   159E E6 6D         [ 5] 2338 	ldb	13,s
   15A0 E7 6B         [ 5] 2339 	stb	11,s
   15A2 E6 6D         [ 5] 2340 	ldb	13,s
   15A4 1D            [ 2] 2341 	sex		;extendqihi2: R:b -> R:d
   15A5 ED 69         [ 6] 2342 	std	9,s
   15A7 EC 69         [ 6] 2343 	ldd	9,s
   15A9 58            [ 2] 2344 	aslb
   15AA 49            [ 2] 2345 	rola
   15AB ED 69         [ 6] 2346 	std	9,s
   15AD EC 69         [ 6] 2347 	ldd	9,s
   15AF 58            [ 2] 2348 	aslb
   15B0 49            [ 2] 2349 	rola
   15B1 58            [ 2] 2350 	aslb
   15B2 49            [ 2] 2351 	rola
   15B3 AE 69         [ 6] 2352 	ldx	9,s
   15B5 30 8B         [ 8] 2353 	leax	d,x
   15B7 AF 69         [ 6] 2354 	stx	9,s
   15B9 EE 69         [ 6] 2355 	ldu	9,s
   15BB 30 C9 C8 99   [ 8] 2356 	leax	_Displayed_Squares+1,u
   15BF E6 84         [ 4] 2357 	ldb	,x
   15C1 E7 62         [ 5] 2358 	stb	2,s
   15C3 E6 62         [ 5] 2359 	ldb	2,s
   15C5 5A            [ 2] 2360 	decb
   15C6 E7 6C         [ 5] 2361 	stb	12,s
   15C8 E6 6B         [ 5] 2362 	ldb	11,s
   15CA 1D            [ 2] 2363 	sex		;extendqihi2: R:b -> R:d
   15CB ED E4         [ 5] 2364 	std	,s
   15CD AE E4         [ 5] 2365 	ldx	,s
   15CF AF 67         [ 6] 2366 	stx	7,s
   15D1 EC 67         [ 6] 2367 	ldd	7,s
   15D3 58            [ 2] 2368 	aslb
   15D4 49            [ 2] 2369 	rola
   15D5 ED 67         [ 6] 2370 	std	7,s
   15D7 EC 67         [ 6] 2371 	ldd	7,s
   15D9 58            [ 2] 2372 	aslb
   15DA 49            [ 2] 2373 	rola
   15DB 58            [ 2] 2374 	aslb
   15DC 49            [ 2] 2375 	rola
   15DD EE 67         [ 6] 2376 	ldu	7,s
   15DF 33 CB         [ 8] 2377 	leau	d,u
   15E1 EF 67         [ 6] 2378 	stu	7,s
   15E3 EE 67         [ 6] 2379 	ldu	7,s
   15E5 30 C9 C8 99   [ 8] 2380 	leax	_Displayed_Squares+1,u
   15E9 E6 6C         [ 5] 2381 	ldb	12,s
   15EB E7 84         [ 4] 2382 	stb	,x
   15ED E6 6D         [ 5] 2383 	ldb	13,s
   15EF 1D            [ 2] 2384 	sex		;extendqihi2: R:b -> R:d
   15F0 ED 65         [ 6] 2385 	std	5,s
   15F2 EC 65         [ 6] 2386 	ldd	5,s
   15F4 58            [ 2] 2387 	aslb
   15F5 49            [ 2] 2388 	rola
   15F6 ED 65         [ 6] 2389 	std	5,s
   15F8 EC 65         [ 6] 2390 	ldd	5,s
   15FA 58            [ 2] 2391 	aslb
   15FB 49            [ 2] 2392 	rola
   15FC 58            [ 2] 2393 	aslb
   15FD 49            [ 2] 2394 	rola
   15FE AE 65         [ 6] 2395 	ldx	5,s
   1600 30 8B         [ 8] 2396 	leax	d,x
   1602 AF 65         [ 6] 2397 	stx	5,s
   1604 EE 65         [ 6] 2398 	ldu	5,s
   1606 30 C9 C8 99   [ 8] 2399 	leax	_Displayed_Squares+1,u
   160A E6 84         [ 4] 2400 	ldb	,x
   160C C1 E7         [ 2] 2401 	cmpb	#-25	;cmpqi:
   160E 2C 22         [ 3] 2402 	bge	L99
   1610 E6 6D         [ 5] 2403 	ldb	13,s
   1612 1D            [ 2] 2404 	sex		;extendqihi2: R:b -> R:d
   1613 ED 63         [ 6] 2405 	std	3,s
   1615 EC 63         [ 6] 2406 	ldd	3,s
   1617 58            [ 2] 2407 	aslb
   1618 49            [ 2] 2408 	rola
   1619 ED 63         [ 6] 2409 	std	3,s
   161B EC 63         [ 6] 2410 	ldd	3,s
   161D 58            [ 2] 2411 	aslb
   161E 49            [ 2] 2412 	rola
   161F 58            [ 2] 2413 	aslb
   1620 49            [ 2] 2414 	rola
   1621 AE 63         [ 6] 2415 	ldx	3,s
   1623 30 8B         [ 8] 2416 	leax	d,x
   1625 AF 63         [ 6] 2417 	stx	3,s
   1627 EE 63         [ 6] 2418 	ldu	3,s
   1629 31 C9 C8 9E   [ 8] 2419 	leay	_Displayed_Squares+6,u
   162D 8E 14 5C      [ 3] 2420 	ldx	#_add_square_y
   1630 AF A4         [ 5] 2421 	stx	,y
   1632                    2422 L99:
   1632 32 6E         [ 5] 2423 	leas	14,s
   1634 35 E0         [ 8] 2424 	puls	y,u,pc
                           2425 	.globl	_Add_Movement
   1636                    2426 _Add_Movement:
   1636 BE C8 9C      [ 6] 2427 	ldx	_Displayed_Squares+4
   1639 5F            [ 2] 2428 	clrb
   163A AD 84         [ 7] 2429 	jsr	,x
   163C BE C8 A6      [ 6] 2430 	ldx	_Displayed_Squares+14
   163F C6 01         [ 2] 2431 	ldb	#1
   1641 AD 84         [ 7] 2432 	jsr	,x
   1643 BE C8 B0      [ 6] 2433 	ldx	_Displayed_Squares+24
   1646 C6 02         [ 2] 2434 	ldb	#2
   1648 AD 84         [ 7] 2435 	jsr	,x
   164A BE C8 BA      [ 6] 2436 	ldx	_Displayed_Squares+34
   164D C6 03         [ 2] 2437 	ldb	#3
   164F AD 84         [ 7] 2438 	jsr	,x
   1651 BE C8 C4      [ 6] 2439 	ldx	_Displayed_Squares+44
   1654 C6 04         [ 2] 2440 	ldb	#4
   1656 AD 84         [ 7] 2441 	jsr	,x
   1658 BE C8 CE      [ 6] 2442 	ldx	_Displayed_Squares+54
   165B C6 05         [ 2] 2443 	ldb	#5
   165D AD 84         [ 7] 2444 	jsr	,x
   165F BE C8 D8      [ 6] 2445 	ldx	_Displayed_Squares+64
   1662 C6 06         [ 2] 2446 	ldb	#6
   1664 AD 84         [ 7] 2447 	jsr	,x
   1666 BE C8 E2      [ 6] 2448 	ldx	_Displayed_Squares+74
   1669 C6 07         [ 2] 2449 	ldb	#7
   166B AD 84         [ 7] 2450 	jsr	,x
   166D BE C8 EC      [ 6] 2451 	ldx	_Displayed_Squares+84
   1670 C6 08         [ 2] 2452 	ldb	#8
   1672 AD 84         [ 7] 2453 	jsr	,x
   1674 BE C8 9E      [ 6] 2454 	ldx	_Displayed_Squares+6
   1677 5F            [ 2] 2455 	clrb
   1678 AD 84         [ 7] 2456 	jsr	,x
   167A BE C8 A8      [ 6] 2457 	ldx	_Displayed_Squares+16
   167D C6 01         [ 2] 2458 	ldb	#1
   167F AD 84         [ 7] 2459 	jsr	,x
   1681 BE C8 B2      [ 6] 2460 	ldx	_Displayed_Squares+26
   1684 C6 02         [ 2] 2461 	ldb	#2
   1686 AD 84         [ 7] 2462 	jsr	,x
   1688 BE C8 BC      [ 6] 2463 	ldx	_Displayed_Squares+36
   168B C6 03         [ 2] 2464 	ldb	#3
   168D AD 84         [ 7] 2465 	jsr	,x
   168F BE C8 C6      [ 6] 2466 	ldx	_Displayed_Squares+46
   1692 C6 04         [ 2] 2467 	ldb	#4
   1694 AD 84         [ 7] 2468 	jsr	,x
   1696 BE C8 D0      [ 6] 2469 	ldx	_Displayed_Squares+56
   1699 C6 05         [ 2] 2470 	ldb	#5
   169B AD 84         [ 7] 2471 	jsr	,x
   169D BE C8 DA      [ 6] 2472 	ldx	_Displayed_Squares+66
   16A0 C6 06         [ 2] 2473 	ldb	#6
   16A2 AD 84         [ 7] 2474 	jsr	,x
   16A4 BE C8 E4      [ 6] 2475 	ldx	_Displayed_Squares+76
   16A7 C6 07         [ 2] 2476 	ldb	#7
   16A9 AD 84         [ 7] 2477 	jsr	,x
   16AB BE C8 EE      [ 6] 2478 	ldx	_Displayed_Squares+86
   16AE C6 08         [ 2] 2479 	ldb	#8
   16B0 AD 84         [ 7] 2480 	jsr	,x
   16B2 39            [ 5] 2481 	rts
   16B3                    2482 LC8:
   16B3 59 4F 55 20 43 4F  2483 	.byte	89,79,85,32,67,79,77,80
        4D 50
   16BB 4C 45 54 45 44 20  2484 	.byte	76,69,84,69,68,32,84,72
        54 48
   16C3 49 53 20 4C 45 56  2485 	.byte	73,83,32,76,69,86,69,76
        45 4C
   16CB 80 00              2486 	.byte	-128,0
                           2487 	.globl	_SaveHighscore
   16CD                    2488 _SaveHighscore:
   16CD 32 7E         [ 5] 2489 	leas	-2,s
   16CF F6 C8 8B      [ 5] 2490 	ldb	_b
   16D2 C1 02         [ 2] 2491 	cmpb	#2	;cmpqi:
   16D4 26 06         [ 3] 2492 	bne	L103
   16D6 F6 C8 8D      [ 5] 2493 	ldb	_RandomSequenceCounterDisplay
   16D9 F7 C8 8E      [ 5] 2494 	stb	_HighscoreNormal
   16DC                    2495 L103:
   16DC F6 C8 8B      [ 5] 2496 	ldb	_b
   16DF C1 03         [ 2] 2497 	cmpb	#3	;cmpqi:
   16E1 26 06         [ 3] 2498 	bne	L104
   16E3 F6 C8 8D      [ 5] 2499 	ldb	_RandomSequenceCounterDisplay
   16E6 F7 C8 8F      [ 5] 2500 	stb	_HighscoreHard
   16E9                    2501 L104:
   16E9 F6 C8 8B      [ 5] 2502 	ldb	_b
   16EC C1 04         [ 2] 2503 	cmpb	#4	;cmpqi:
   16EE 26 06         [ 3] 2504 	bne	L105
   16F0 F6 C8 8D      [ 5] 2505 	ldb	_RandomSequenceCounterDisplay
   16F3 F7 C8 90      [ 5] 2506 	stb	_HighscoreExtrem
   16F6                    2507 L105:
   16F6 F6 C8 89      [ 5] 2508 	ldb	_buttonspressedcounter
   16F9 C1 10         [ 2] 2509 	cmpb	#16	;cmpqi:
   16FB 10 26 00 AD   [ 6] 2510 	lbne	L112
   16FF C6 88         [ 2] 2511 	ldb	#-120
   1701 E7 E2         [ 6] 2512 	stb	,-s
   1703 8E 16 B3      [ 3] 2513 	ldx	#LC8
   1706 C6 64         [ 2] 2514 	ldb	#100
   1708 BD 1A 3A      [ 8] 2515 	jsr	_print_string
   170B 32 61         [ 5] 2516 	leas	1,s
   170D C6 B0         [ 2] 2517 	ldb	#-80
   170F E7 E2         [ 6] 2518 	stb	,-s
   1711 8E 0B 0E      [ 3] 2519 	ldx	#LC3
   1714 C6 46         [ 2] 2520 	ldb	#70
   1716 BD 1A 3A      [ 8] 2521 	jsr	_print_string
   1719 32 61         [ 5] 2522 	leas	1,s
   171B C6 C4         [ 2] 2523 	ldb	#-60
   171D E7 E2         [ 6] 2524 	stb	,-s
   171F 8E 0B 1E      [ 3] 2525 	ldx	#LC4
   1722 C6 32         [ 2] 2526 	ldb	#50
   1724 BD 1A 3A      [ 8] 2527 	jsr	_print_string
   1727 32 61         [ 5] 2528 	leas	1,s
   1729 C6 B0         [ 2] 2529 	ldb	#-80
   172B E7 E2         [ 6] 2530 	stb	,-s
   172D 8E 0B 2A      [ 3] 2531 	ldx	#LC5
   1730 C6 14         [ 2] 2532 	ldb	#20
   1732 BD 1A 3A      [ 8] 2533 	jsr	_print_string
   1735 32 61         [ 5] 2534 	leas	1,s
   1737 C6 9C         [ 2] 2535 	ldb	#-100
   1739 E7 E2         [ 6] 2536 	stb	,-s
   173B 8E 0B 3A      [ 3] 2537 	ldx	#LC6
   173E 5F            [ 2] 2538 	clrb
   173F BD 1A 3A      [ 8] 2539 	jsr	_print_string
   1742 32 61         [ 5] 2540 	leas	1,s
   1744 BD F1 BA      [ 8] 2541 	jsr	___Read_Btns
   1747 F6 C8 11      [ 5] 2542 	ldb	_Vec_Buttons
   174A C4 02         [ 2] 2543 	andb	#2
   174C 5D            [ 2] 2544 	tstb
   174D 27 29         [ 3] 2545 	beq	L107
   174F 8E 18 95      [ 3] 2546 	ldx	#_execute_display_sequence_state
   1752 BF C9 1E      [ 6] 2547 	stx	_execute_game_playing_state
   1755 6F E4         [ 6] 2548 	clr	,s
   1757 20 0B         [ 3] 2549 	bra	L108
   1759                    2550 L109:
   1759 E6 E4         [ 4] 2551 	ldb	,s
   175B 1D            [ 2] 2552 	sex		;extendqihi2: R:b -> R:d
   175C 1F 01         [ 6] 2553 	tfr	d,x
   175E 6F 89 C9 06   [10] 2554 	clr	_a_random_compare,x
   1762 6C E4         [ 6] 2555 	inc	,s
   1764                    2556 L108:
   1764 E6 E4         [ 4] 2557 	ldb	,s
   1766 C1 13         [ 2] 2558 	cmpb	#19	;cmpqi:
   1768 2F EF         [ 3] 2559 	ble	L109
   176A F6 C8 8D      [ 5] 2560 	ldb	_RandomSequenceCounterDisplay
   176D BD 08 C9      [ 8] 2561 	jsr	_rand
   1770 C6 01         [ 2] 2562 	ldb	#1
   1772 F7 C8 8D      [ 5] 2563 	stb	_RandomSequenceCounterDisplay
   1775 7F C8 89      [ 7] 2564 	clr	_buttonspressedcounter
   1778                    2565 L107:
   1778 F6 C8 11      [ 5] 2566 	ldb	_Vec_Buttons
   177B C4 04         [ 2] 2567 	andb	#4
   177D 5D            [ 2] 2568 	tstb
   177E 27 2C         [ 3] 2569 	beq	L112
   1780 8E 18 DB      [ 3] 2570 	ldx	#_level_init
   1783 BF C9 1E      [ 6] 2571 	stx	_execute_game_playing_state
   1786 7F C8 8B      [ 7] 2572 	clr	_b
   1789 6F 61         [ 7] 2573 	clr	1,s
   178B 20 0B         [ 3] 2574 	bra	L110
   178D                    2575 L111:
   178D E6 61         [ 5] 2576 	ldb	1,s
   178F 1D            [ 2] 2577 	sex		;extendqihi2: R:b -> R:d
   1790 1F 01         [ 6] 2578 	tfr	d,x
   1792 6F 89 C9 06   [10] 2579 	clr	_a_random_compare,x
   1796 6C 61         [ 7] 2580 	inc	1,s
   1798                    2581 L110:
   1798 E6 61         [ 5] 2582 	ldb	1,s
   179A C1 13         [ 2] 2583 	cmpb	#19	;cmpqi:
   179C 2F EF         [ 3] 2584 	ble	L111
   179E F6 C8 8D      [ 5] 2585 	ldb	_RandomSequenceCounterDisplay
   17A1 BD 08 C9      [ 8] 2586 	jsr	_rand
   17A4 C6 01         [ 2] 2587 	ldb	#1
   17A6 F7 C8 8D      [ 5] 2588 	stb	_RandomSequenceCounterDisplay
   17A9 7F C8 89      [ 7] 2589 	clr	_buttonspressedcounter
   17AC                    2590 L112:
   17AC 32 62         [ 5] 2591 	leas	2,s
   17AE 39            [ 5] 2592 	rts
                           2593 	.globl	_check_successfully_repeated
   17AF                    2594 _check_successfully_repeated:
   17AF 32 7C         [ 5] 2595 	leas	-4,s
   17B1 F6 C8 89      [ 5] 2596 	ldb	_buttonspressedcounter
   17B4 E7 63         [ 5] 2597 	stb	3,s
   17B6 20 1E         [ 3] 2598 	bra	L114
   17B8                    2599 L116:
   17B8 E6 63         [ 5] 2600 	ldb	3,s
   17BA 4F            [ 2] 2601 	clra		;zero_extendqihi: R:b -> R:d
   17BB 1F 01         [ 6] 2602 	tfr	d,x
   17BD E6 89 C8 F2   [ 8] 2603 	ldb	_a_random,x
   17C1 E7 61         [ 5] 2604 	stb	1,s
   17C3 E6 63         [ 5] 2605 	ldb	3,s
   17C5 4F            [ 2] 2606 	clra		;zero_extendqihi: R:b -> R:d
   17C6 1F 01         [ 6] 2607 	tfr	d,x
   17C8 E6 89 C9 06   [ 8] 2608 	ldb	_a_random_compare,x
   17CC E1 61         [ 5] 2609 	cmpb	1,s	;cmpqi:(R)
   17CE 27 06         [ 3] 2610 	beq	L114
   17D0 8E 0B 4D      [ 3] 2611 	ldx	#_display_game_over
   17D3 BF C9 1E      [ 6] 2612 	stx	_execute_game_playing_state
   17D6                    2613 L114:
   17D6 E6 63         [ 5] 2614 	ldb	3,s
   17D8 E7 E4         [ 4] 2615 	stb	,s
   17DA 6D E4         [ 6] 2616 	tst	,s
   17DC 27 04         [ 3] 2617 	beq	L115
   17DE C6 01         [ 2] 2618 	ldb	#1
   17E0 E7 E4         [ 4] 2619 	stb	,s
   17E2                    2620 L115:
   17E2 E6 E4         [ 4] 2621 	ldb	,s
   17E4 6A 63         [ 7] 2622 	dec	3,s
   17E6 5D            [ 2] 2623 	tstb
   17E7 26 CF         [ 3] 2624 	bne	L116
   17E9 F6 C8 8D      [ 5] 2625 	ldb	_RandomSequenceCounterDisplay
   17EC E7 62         [ 5] 2626 	stb	2,s
   17EE F6 C8 89      [ 5] 2627 	ldb	_buttonspressedcounter
   17F1 E1 62         [ 5] 2628 	cmpb	2,s	;cmpqi:(R)
   17F3 26 4B         [ 3] 2629 	bne	L118
   17F5 8E 02 10      [ 3] 2630 	ldx	#_draw_square
   17F8 BF C8 9A      [ 6] 2631 	stx	_Displayed_Squares+2
   17FB 8E 02 10      [ 3] 2632 	ldx	#_draw_square
   17FE BF C8 A4      [ 6] 2633 	stx	_Displayed_Squares+12
   1801 8E 02 10      [ 3] 2634 	ldx	#_draw_square
   1804 BF C8 AE      [ 6] 2635 	stx	_Displayed_Squares+22
   1807 8E 02 10      [ 3] 2636 	ldx	#_draw_square
   180A BF C8 B8      [ 6] 2637 	stx	_Displayed_Squares+32
   180D 8E 02 10      [ 3] 2638 	ldx	#_draw_square
   1810 BF C8 C2      [ 6] 2639 	stx	_Displayed_Squares+42
   1813 8E 02 10      [ 3] 2640 	ldx	#_draw_square
   1816 BF C8 CC      [ 6] 2641 	stx	_Displayed_Squares+52
   1819 8E 02 10      [ 3] 2642 	ldx	#_draw_square
   181C BF C8 D6      [ 6] 2643 	stx	_Displayed_Squares+62
   181F 8E 02 10      [ 3] 2644 	ldx	#_draw_square
   1822 BF C8 E0      [ 6] 2645 	stx	_Displayed_Squares+72
   1825 8E 02 10      [ 3] 2646 	ldx	#_draw_square
   1828 BF C8 EA      [ 6] 2647 	stx	_Displayed_Squares+82
   182B F6 C8 8D      [ 5] 2648 	ldb	_RandomSequenceCounterDisplay
   182E 5C            [ 2] 2649 	incb
   182F F7 C8 8D      [ 5] 2650 	stb	_RandomSequenceCounterDisplay
   1832 7F C8 89      [ 7] 2651 	clr	_buttonspressedcounter
   1835 C6 C8         [ 2] 2652 	ldb	#-56
   1837 F7 C8 93      [ 5] 2653 	stb	_counter
   183A 8E 18 95      [ 3] 2654 	ldx	#_execute_display_sequence_state
   183D BF C9 1E      [ 6] 2655 	stx	_execute_game_playing_state
   1840                    2656 L118:
   1840 32 64         [ 5] 2657 	leas	4,s
   1842 39            [ 5] 2658 	rts
                           2659 	.globl	_execute_repeat_sequence_state
   1843                    2660 _execute_repeat_sequence_state:
   1843 32 7D         [ 5] 2661 	leas	-3,s
   1845 BD 03 88      [ 8] 2662 	jsr	_Display_Gamefield
   1848 BD 09 AA      [ 8] 2663 	jsr	_Display_TimeLeft
   184B BD 0A C4      [ 8] 2664 	jsr	_Display_Player
   184E F6 C8 89      [ 5] 2665 	ldb	_buttonspressedcounter
   1851 E7 61         [ 5] 2666 	stb	1,s
   1853 F6 C8 8D      [ 5] 2667 	ldb	_RandomSequenceCounterDisplay
   1856 E7 62         [ 5] 2668 	stb	2,s
   1858 F6 C8 89      [ 5] 2669 	ldb	_buttonspressedcounter
   185B E7 E4         [ 4] 2670 	stb	,s
   185D E6 62         [ 5] 2671 	ldb	2,s
   185F E0 E4         [ 4] 2672 	subb	,s
   1861 E7 E4         [ 4] 2673 	stb	,s
   1863 E6 61         [ 5] 2674 	ldb	1,s
   1865 34 04         [ 6] 2675 	pshs	b
   1867 E6 61         [ 5] 2676 	ldb	1,s
   1869 BD 09 C3      [ 8] 2677 	jsr	_Display_LevelAdvancement
   186C 32 61         [ 5] 2678 	leas	1,s
   186E F6 C8 8B      [ 5] 2679 	ldb	_b
   1871 C1 03         [ 2] 2680 	cmpb	#3	;cmpqi:
   1873 26 03         [ 3] 2681 	bne	L120
   1875 BD 13 5C      [ 8] 2682 	jsr	_Set_traps
   1878                    2683 L120:
   1878 F6 C8 8B      [ 5] 2684 	ldb	_b
   187B C1 04         [ 2] 2685 	cmpb	#4	;cmpqi:
   187D 26 03         [ 3] 2686 	bne	L121
   187F BD 16 36      [ 8] 2687 	jsr	_Add_Movement
   1882                    2688 L121:
   1882 F6 C8 91      [ 5] 2689 	ldb	_Random_Number_for_random_things
   1885 5C            [ 2] 2690 	incb
   1886 F7 C8 91      [ 5] 2691 	stb	_Random_Number_for_random_things
   1889 BD 0C 26      [ 8] 2692 	jsr	_move_player
   188C BD 12 25      [ 8] 2693 	jsr	_read_player_input
   188F BD 17 AF      [ 8] 2694 	jsr	_check_successfully_repeated
   1892 32 63         [ 5] 2695 	leas	3,s
   1894 39            [ 5] 2696 	rts
                           2697 	.globl	_execute_display_sequence_state
   1895                    2698 _execute_display_sequence_state:
   1895 BD 03 88      [ 8] 2699 	jsr	_Display_Gamefield
   1898 BD 0A 19      [ 8] 2700 	jsr	_Display_RandomSequence
   189B 8E 18 43      [ 3] 2701 	ldx	#_execute_repeat_sequence_state
   189E BF C9 1E      [ 6] 2702 	stx	_execute_game_playing_state
   18A1 39            [ 5] 2703 	rts
   18A2                    2704 LC9:
   18A2 53 45 4C 45 43 54  2705 	.byte	83,69,76,69,67,84,32,84
        20 54
   18AA 48 45 20 47 41 4D  2706 	.byte	72,69,32,71,65,77,69,77
        45 4D
   18B2 4F 44 45 80 00     2707 	.byte	79,68,69,-128,0
   18B7                    2708 LC10:
   18B7 4E 4F 52 4D 41 4C  2709 	.byte	78,79,82,77,65,76,32,49
        20 31
   18BF 36 2F 80 00        2710 	.byte	54,47,-128,0
   18C3                    2711 LC11:
   18C3 48 41 52 44 20 20  2712 	.byte	72,65,82,68,32,32,32,49
        20 31
   18CB 36 2F 80 00        2713 	.byte	54,47,-128,0
   18CF                    2714 LC12:
   18CF 45 58 54 52 45 4D  2715 	.byte	69,88,84,82,69,77,32,49
        20 31
   18D7 36 2F 80 00        2716 	.byte	54,47,-128,0
                           2717 	.globl	_level_init
   18DB                    2718 _level_init:
   18DB 32 7D         [ 5] 2719 	leas	-3,s
   18DD C6 01         [ 2] 2720 	ldb	#1
   18DF F7 C8 1F      [ 5] 2721 	stb	_Vec_Joy_Mux_1_X
   18E2 C6 03         [ 2] 2722 	ldb	#3
   18E4 F7 C8 20      [ 5] 2723 	stb	_Vec_Joy_Mux_1_Y
   18E7 7F C8 21      [ 7] 2724 	clr	_Vec_Joy_Mux_2_X
   18EA 7F C8 22      [ 7] 2725 	clr	_Vec_Joy_Mux_2_Y
   18ED 6F E4         [ 6] 2726 	clr	,s
   18EF C6 01         [ 2] 2727 	ldb	#1
   18F1 E7 61         [ 5] 2728 	stb	1,s
   18F3 C6 01         [ 2] 2729 	ldb	#1
   18F5 E7 62         [ 5] 2730 	stb	2,s
   18F7 16 00 E4      [ 5] 2731 	lbra	L126
   18FA                    2732 L133:
   18FA BD F1 BA      [ 8] 2733 	jsr	___Read_Btns
   18FD 6C E4         [ 6] 2734 	inc	,s
   18FF BD F3 54      [ 8] 2735 	jsr	___Reset0Ref
   1902 C6 88         [ 2] 2736 	ldb	#-120
   1904 E7 E2         [ 6] 2737 	stb	,-s
   1906 8E 18 A2      [ 3] 2738 	ldx	#LC9
   1909 C6 64         [ 2] 2739 	ldb	#100
   190B BD 1A 3A      [ 8] 2740 	jsr	_print_string
   190E 32 61         [ 5] 2741 	leas	1,s
   1910 C6 CE         [ 2] 2742 	ldb	#-50
   1912 E7 E2         [ 6] 2743 	stb	,-s
   1914 8E 18 B7      [ 3] 2744 	ldx	#LC10
   1917 C6 3C         [ 2] 2745 	ldb	#60
   1919 BD 1A 3A      [ 8] 2746 	jsr	_print_string
   191C 32 61         [ 5] 2747 	leas	1,s
   191E C6 CE         [ 2] 2748 	ldb	#-50
   1920 E7 E2         [ 6] 2749 	stb	,-s
   1922 8E 18 C3      [ 3] 2750 	ldx	#LC11
   1925 C6 28         [ 2] 2751 	ldb	#40
   1927 BD 1A 3A      [ 8] 2752 	jsr	_print_string
   192A 32 61         [ 5] 2753 	leas	1,s
   192C C6 CE         [ 2] 2754 	ldb	#-50
   192E E7 E2         [ 6] 2755 	stb	,-s
   1930 8E 18 CF      [ 3] 2756 	ldx	#LC12
   1933 C6 14         [ 2] 2757 	ldb	#20
   1935 BD 1A 3A      [ 8] 2758 	jsr	_print_string
   1938 32 61         [ 5] 2759 	leas	1,s
   193A BD F3 54      [ 8] 2760 	jsr	___Reset0Ref
   193D F6 C8 8E      [ 5] 2761 	ldb	_HighscoreNormal
   1940 34 04         [ 6] 2762 	pshs	b
   1942 C6 3C         [ 2] 2763 	ldb	#60
   1944 E7 E2         [ 6] 2764 	stb	,-s
   1946 C6 3C         [ 2] 2765 	ldb	#60
   1948 BD 1A 8E      [ 8] 2766 	jsr	_print_unsigned_int2
   194B 32 62         [ 5] 2767 	leas	2,s
   194D F6 C8 8F      [ 5] 2768 	ldb	_HighscoreHard
   1950 34 04         [ 6] 2769 	pshs	b
   1952 C6 3C         [ 2] 2770 	ldb	#60
   1954 E7 E2         [ 6] 2771 	stb	,-s
   1956 C6 28         [ 2] 2772 	ldb	#40
   1958 BD 1A 8E      [ 8] 2773 	jsr	_print_unsigned_int2
   195B 32 62         [ 5] 2774 	leas	2,s
   195D F6 C8 90      [ 5] 2775 	ldb	_HighscoreExtrem
   1960 34 04         [ 6] 2776 	pshs	b
   1962 C6 3C         [ 2] 2777 	ldb	#60
   1964 E7 E2         [ 6] 2778 	stb	,-s
   1966 C6 14         [ 2] 2779 	ldb	#20
   1968 BD 1A 8E      [ 8] 2780 	jsr	_print_unsigned_int2
   196B 32 62         [ 5] 2781 	leas	2,s
   196D BD F1 BA      [ 8] 2782 	jsr	___Read_Btns
   1970 BD F1 F8      [ 8] 2783 	jsr	___Joy_Digital
   1973 F6 C8 1C      [ 5] 2784 	ldb	_Vec_Joy_1_Y
   1976 5D            [ 2] 2785 	tstb
   1977 26 04         [ 3] 2786 	bne	L127
   1979 C6 01         [ 2] 2787 	ldb	#1
   197B E7 62         [ 5] 2788 	stb	2,s
   197D                    2789 L127:
   197D F6 C8 1C      [ 5] 2790 	ldb	_Vec_Joy_1_Y
   1980 5D            [ 2] 2791 	tstb
   1981 2F 0E         [ 3] 2792 	ble	L128
   1983 6D 61         [ 7] 2793 	tst	1,s
   1985 27 0A         [ 3] 2794 	beq	L128
   1987 E6 62         [ 5] 2795 	ldb	2,s
   1989 C1 01         [ 2] 2796 	cmpb	#1	;cmpqi:
   198B 26 04         [ 3] 2797 	bne	L128
   198D 6A 62         [ 7] 2798 	dec	2,s
   198F 6A 61         [ 7] 2799 	dec	1,s
   1991                    2800 L128:
   1991 F6 C8 1C      [ 5] 2801 	ldb	_Vec_Joy_1_Y
   1994 5D            [ 2] 2802 	tstb
   1995 2C 10         [ 3] 2803 	bge	L129
   1997 E6 61         [ 5] 2804 	ldb	1,s
   1999 C1 01         [ 2] 2805 	cmpb	#1	;cmpqi:
   199B 22 0A         [ 3] 2806 	bhi	L129
   199D E6 62         [ 5] 2807 	ldb	2,s
   199F C1 01         [ 2] 2808 	cmpb	#1	;cmpqi:
   19A1 26 04         [ 3] 2809 	bne	L129
   19A3 6A 62         [ 7] 2810 	dec	2,s
   19A5 6C 61         [ 7] 2811 	inc	1,s
   19A7                    2812 L129:
   19A7 E6 61         [ 5] 2813 	ldb	1,s
   19A9 BD 04 DD      [ 8] 2814 	jsr	_draw_menu_arrow
   19AC F6 C8 11      [ 5] 2815 	ldb	_Vec_Buttons
   19AF C4 01         [ 2] 2816 	andb	#1
   19B1 5D            [ 2] 2817 	tstb
   19B2 27 2A         [ 3] 2818 	beq	L126
   19B4 6D 61         [ 7] 2819 	tst	1,s
   19B6 26 07         [ 3] 2820 	bne	L130
   19B8 C6 02         [ 2] 2821 	ldb	#2
   19BA F7 C8 8B      [ 5] 2822 	stb	_b
   19BD 20 1F         [ 3] 2823 	bra	L126
   19BF                    2824 L130:
   19BF E6 61         [ 5] 2825 	ldb	1,s
   19C1 C1 01         [ 2] 2826 	cmpb	#1	;cmpqi:
   19C3 26 07         [ 3] 2827 	bne	L131
   19C5 C6 03         [ 2] 2828 	ldb	#3
   19C7 F7 C8 8B      [ 5] 2829 	stb	_b
   19CA 20 12         [ 3] 2830 	bra	L126
   19CC                    2831 L131:
   19CC E6 61         [ 5] 2832 	ldb	1,s
   19CE C1 02         [ 2] 2833 	cmpb	#2	;cmpqi:
   19D0 26 07         [ 3] 2834 	bne	L132
   19D2 C6 04         [ 2] 2835 	ldb	#4
   19D4 F7 C8 8B      [ 5] 2836 	stb	_b
   19D7 20 05         [ 3] 2837 	bra	L126
   19D9                    2838 L132:
   19D9 C6 02         [ 2] 2839 	ldb	#2
   19DB F7 C8 8B      [ 5] 2840 	stb	_b
   19DE                    2841 L126:
   19DE F6 C8 8B      [ 5] 2842 	ldb	_b
   19E1 C1 01         [ 2] 2843 	cmpb	#1	;cmpqi:
   19E3 10 2F FF 13   [ 6] 2844 	lble	L133
   19E7 E6 E4         [ 4] 2845 	ldb	,s
   19E9 BD 08 C9      [ 8] 2846 	jsr	_rand
   19EC 7F C8 97      [ 7] 2847 	clr	_current_level
   19EF 8E 18 95      [ 3] 2848 	ldx	#_execute_display_sequence_state
   19F2 BF C9 1E      [ 6] 2849 	stx	_execute_game_playing_state
   19F5 32 63         [ 5] 2850 	leas	3,s
   19F7 39            [ 5] 2851 	rts
                           2852 	.globl	_level_play
   19F8                    2853 _level_play:
   19F8 32 7C         [ 5] 2854 	leas	-4,s
   19FA 20 25         [ 3] 2855 	bra	L136
   19FC                    2856 L137:
   19FC BD F1 AF      [ 8] 2857 	jsr	___DP_to_C8
   19FF BE C9 1A      [ 6] 2858 	ldx	_current_explosion
   1A02 AF E4         [ 5] 2859 	stx	,s
   1A04 AE E4         [ 5] 2860 	ldx	,s
   1A06 BD 1A 64      [ 8] 2861 	jsr	__Explosion_Snd
   1A09 BE C9 1C      [ 6] 2862 	ldx	_current_music
   1A0C AF 62         [ 6] 2863 	stx	2,s
   1A0E AE 62         [ 6] 2864 	ldx	2,s
   1A10 BD 1A 6D      [ 8] 2865 	jsr	__Init_Music_chk
   1A13 BD F1 92      [ 8] 2866 	jsr	___Wait_Recal
   1A16 BD 1A 87      [ 8] 2867 	jsr	__Do_Sound
   1A19 BD F2 A5      [ 8] 2868 	jsr	___Intensity_5F
   1A1C BE C9 1E      [ 6] 2869 	ldx	_execute_game_playing_state
   1A1F AD 84         [ 7] 2870 	jsr	,x
   1A21                    2871 L136:
   1A21 F6 C8 97      [ 5] 2872 	ldb	_current_level
   1A24 5D            [ 2] 2873 	tstb
   1A25 27 D5         [ 3] 2874 	beq	L137
   1A27 32 64         [ 5] 2875 	leas	4,s
   1A29 39            [ 5] 2876 	rts
ASxxxx Assembler V05.50  (Motorola 6809)                                Page 1
Hexadecimal [16-Bits]                                 Mon Jun 16 04:11:00 2025

Symbol Table

    .__.$$$.       =   2710 L   |     .__.ABS.       =   0000 G
    .__.CPU.       =   0000 L   |     .__.H$L.       =   0001 L
  2 L10                02C2 R   |   2 L103               0FFF R
  2 L104               100C R   |   2 L105               1019 R
  2 L107               109B R   |   2 L108               1087 R
  2 L109               107C R   |   2 L11                027A R
  2 L110               10BB R   |   2 L111               10B0 R
  2 L112               10CF R   |   2 L114               10F9 R
  2 L115               1105 R   |   2 L116               10DB R
  2 L118               1163 R   |   2 L120               119B R
  2 L121               11A5 R   |   2 L126               1301 R
  2 L127               12A0 R   |   2 L128               12B4 R
  2 L129               12CA R   |   2 L130               12E2 R
  2 L131               12EF R   |   2 L132               12FC R
  2 L133               121D R   |   2 L136               1344 R
  2 L137               131F R   |   2 L14                02DE R
  2 L17                02F4 R   |   2 L18                0300 R
  2 L19                02EC R   |   2 L2                 01E3 R
  2 L20                030E R   |   2 L21                031A R
  2 L22                0309 R   |   2 L25                03DA R
  2 L26                03C4 R   |   2 L27                0343 R
  2 L3                 01B8 R   |   2 L33                04C4 R
  2 L34                04D1 R   |   2 L35                04DE R
  2 L36                0512 R   |   2 L37                04FE R
  2 L38                04F3 R   |   2 L40                0532 R
  2 L41                0527 R   |   2 L42                0546 R
  2 L44                05B5 R   |   2 L45                05FF R
  2 L46                065C R   |   2 L47                06AB R
  2 L48                0709 R   |   2 L49                0759 R
  2 L50                07B7 R   |   2 L51                0807 R
  2 L52                0865 R   |   2 L53                08B5 R
  2 L54                0913 R   |   2 L55                095D R
  2 L56                09B5 R   |   2 L57                09FF R
  2 L58                0A57 R   |   2 L59                0AA1 R
  2 L6                 0267 R   |   2 L60                0AF9 R
  2 L62                0B43 R   |   2 L64                0B79 R
  2 L65                0B7F R   |   2 L66                0B92 R
  2 L67                0B98 R   |   2 L68                0BAB R
  2 L69                0BB1 R   |   2 L7                 01F5 R
  2 L70                0BC4 R   |   2 L71                0BCA R
  2 L72                0BDD R   |   2 L73                0BE3 R
  2 L74                0BF6 R   |   2 L75                0BFC R
  2 L76                0C0F R   |   2 L77                0C15 R
  2 L78                0C28 R   |   2 L79                0C2E R
  2 L80                0C41 R   |   2 L81                0C47 R
  2 L83                0C6B R   |   2 L85                0CB1 R
  2 L87                0CE0 R   |   2 L90                0D7B R
  2 L93                0E19 R   |   2 L96                0EB7 R
  2 L99                0F55 R   |   2 LC0                0324 R
  2 LC1                0332 R   |   2 LC10               11DA R
  2 LC11               11E6 R   |   2 LC12               11F2 R
  2 LC2                0426 R   |   2 LC3                0431 R
  2 LC4                0441 R   |   2 LC5                044D R
  2 LC6                045D R   |   2 LC7                0C6E R
  2 LC8                0FD6 R   |   2 LC9                11C5 R
  2 _Add_Movement      0F59 GR  |   2 _Brainleft         012B GR
  2 _Brainright        00A7 GR  |     _Display_Gamef     **** GX
  2 _Display_Level     02E6 GR  |   2 _Display_Playe     03E7 GR
  2 _Display_Rando     033C GR  |   2 _Display_TimeL     02CD GR
  3 _Displayed_Squ     000F GR  |   2 _Gamefield         007A GR
  3 _HighscoreExtr     0007 GR  |   3 _HighscoreHard     0006 GR
  3 _HighscoreNorm     0005 GR  |   2 _Level_advance     0000 GR
    _Lifeline          **** GX  |   2 _Lifelinestruc     0089 GR
  2 _Positions_Arr     019A GR  |   2 _RandomNumberG     01B2 GR
  3 _RandomSequenc     0003 GR  |   3 _RandomSequenc     0004 GR
  3 _Random_Number     0008 GR  |   2 _SaveHighscore     0FF0 GR
  3 _SequenceTime      0009 GR  |   2 _Set_traps         0C7F GR
    _Vec_Buttons       **** GX  |     _Vec_Joy_1_X       **** GX
    _Vec_Joy_1_Y       **** GX  |     _Vec_Joy_Mux_1     **** GX
    _Vec_Joy_Mux_1     **** GX  |     _Vec_Joy_Mux_2     **** GX
    _Vec_Joy_Mux_2     **** GX  |     __Do_Sound         **** GX
    __Explosion_Sn     **** GX  |     __Init_Music_c     **** GX
    ___DP_to_C8        **** GX  |     ___Intensity_5     **** GX
    ___Joy_Digital     **** GX  |     ___Read_Btns       **** GX
    ___Reset0Ref       **** GX  |     ___Wait_Recal      **** GX
  3 _a_random          0069 GR  |   3 _a_random_comp     007D GR
  2 _add_square_x      0CE1 GR  |   2 _add_square_y      0D7F GR
  2 _advancement_c     005C GR  |   2 _advancement_p     006B GR
  2 _arrow             01A0 GR  |   3 _b                 0002 GR
  3 _buttonspresse     0000 GR  |   2 _check_success     10D2 GR
  3 _counter           000A GR  |   2 _cross             0020 GR
    _current_explo     **** GX  |   3 _current_level     000E GR
    _current_music     **** GX  |   2 _display_game_     0470 GR
    _draw_menu_arr     **** GX  |     _draw_round_ad     **** GX
    _draw_round_ad     **** GX  |     _draw_square       **** GX
    _draw_square_f     **** GX  |   2 _execute_displ     11B8 GR
  4 _execute_game_     0000 GR  |   2 _execute_repea     1166 GR
  3 _joy_x             000B GR  |   3 _joy_y             000C GR
  2 _level_init        11FE GR  |   2 _level_play        131B GR
  2 _move_player       0549 GR  |     _play_tune         **** GX
    _print_string      **** GX  |     _print_unsigne     **** GX
  2 _rand              01EC GR  |   2 _rand2             0272 GR
  2 _read_player_i     0B48 GR  |   3 _sneakyoffset      0001 GR
  2 _square            002F GR  |   2 _square_filled     0041 GR
  2 _sub_square_x      0E1D GR  |   2 _sub_square_y      0EBB GR
  3 _temppass          000D GR  |     _umodhi3           **** GX

ASxxxx Assembler V05.50  (Motorola 6809)                                Page 2
Hexadecimal [16-Bits]                                 Mon Jun 16 04:11:00 2025

Area Table

[_CSEG]
   0 _CODE            size    0   flags C080
   2 .text            size 134D   flags  100
   3 .data            size   91   flags  100
   4 .bss             size    2   flags    0
[_DSEG]
   1 _DATA            size    0   flags C0C0

