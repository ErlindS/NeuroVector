                              1 ;;; gcc for m6809 : Mar 17 2019 13:25:32
                              2 ;;; 4.3.6 (gcc6809)
                              3 ;;; ABI version 1
                              4 ;;; -mabi=bx -mint8 -fomit-frame-pointer -O0
                              5 	.module	main.c
                              6 	.globl	_Level_advancement
                              7 	.area	.text
   1A2A                       8 _Level_advancement:
   1A2A C4                    9 	.byte	-60
   1A2B DD                   10 	.byte	-35
   1A2C C4                   11 	.byte	-60
   1A2D E7                   12 	.byte	-25
   1A2E C4                   13 	.byte	-60
   1A2F F1                   14 	.byte	-15
   1A30 C4                   15 	.byte	-60
   1A31 FB                   16 	.byte	-5
   1A32 C4                   17 	.byte	-60
   1A33 05                   18 	.byte	5
   1A34 C4                   19 	.byte	-60
   1A35 0F                   20 	.byte	15
   1A36 C4                   21 	.byte	-60
   1A37 19                   22 	.byte	25
   1A38 C4                   23 	.byte	-60
   1A39 23                   24 	.byte	35
   1A3A BA                   25 	.byte	-70
   1A3B DD                   26 	.byte	-35
   1A3C BA                   27 	.byte	-70
   1A3D E7                   28 	.byte	-25
   1A3E BA                   29 	.byte	-70
   1A3F F1                   30 	.byte	-15
   1A40 BA                   31 	.byte	-70
   1A41 FB                   32 	.byte	-5
   1A42 BA                   33 	.byte	-70
   1A43 05                   34 	.byte	5
   1A44 BA                   35 	.byte	-70
   1A45 0F                   36 	.byte	15
   1A46 BA                   37 	.byte	-70
   1A47 19                   38 	.byte	25
   1A48 BA                   39 	.byte	-70
   1A49 23                   40 	.byte	35
                             41 	.globl	_cross
   1A4A                      42 _cross:
   1A4A 00                   43 	.byte	0
   1A4B 20                   44 	.byte	32
   1A4C 20                   45 	.byte	32
   1A4D FF                   46 	.byte	-1
   1A4E E0                   47 	.byte	-32
   1A4F E0                   48 	.byte	-32
   1A50 00                   49 	.byte	0
   1A51 20                   50 	.byte	32
   1A52 00                   51 	.byte	0
   1A53 FF                   52 	.byte	-1
   1A54 E0                   53 	.byte	-32
   1A55 20                   54 	.byte	32
   1A56 01                   55 	.byte	1
   1A57 00                   56 	.byte	0
   1A58 00                   57 	.byte	0
                             58 	.globl	_square
   1A59                      59 _square:
   1A59 00                   60 	.byte	0
   1A5A 3C                   61 	.byte	60
   1A5B C4                   62 	.byte	-60
   1A5C FF                   63 	.byte	-1
   1A5D 00                   64 	.byte	0
   1A5E 78                   65 	.byte	120
   1A5F FF                   66 	.byte	-1
   1A60 88                   67 	.byte	-120
   1A61 00                   68 	.byte	0
   1A62 FF                   69 	.byte	-1
   1A63 00                   70 	.byte	0
   1A64 88                   71 	.byte	-120
   1A65 FF                   72 	.byte	-1
   1A66 78                   73 	.byte	120
   1A67 00                   74 	.byte	0
   1A68 01                   75 	.byte	1
   1A69 00                   76 	.byte	0
   1A6A 00                   77 	.byte	0
                             78 	.globl	_square_filled
   1A6B                      79 _square_filled:
   1A6B 00                   80 	.byte	0
   1A6C 3C                   81 	.byte	60
   1A6D C4                   82 	.byte	-60
   1A6E FF                   83 	.byte	-1
   1A6F 00                   84 	.byte	0
   1A70 78                   85 	.byte	120
   1A71 FF                   86 	.byte	-1
   1A72 88                   87 	.byte	-120
   1A73 00                   88 	.byte	0
   1A74 FF                   89 	.byte	-1
   1A75 00                   90 	.byte	0
   1A76 88                   91 	.byte	-120
   1A77 FF                   92 	.byte	-1
   1A78 78                   93 	.byte	120
   1A79 00                   94 	.byte	0
   1A7A FF                   95 	.byte	-1
   1A7B 88                   96 	.byte	-120
   1A7C 78                   97 	.byte	120
   1A7D 00                   98 	.byte	0
   1A7E 78                   99 	.byte	120
   1A7F 00                  100 	.byte	0
   1A80 FF                  101 	.byte	-1
   1A81 88                  102 	.byte	-120
   1A82 88                  103 	.byte	-120
   1A83 01                  104 	.byte	1
   1A84 00                  105 	.byte	0
   1A85 00                  106 	.byte	0
                            107 	.globl	_advancement_cross
   1A86                     108 _advancement_cross:
   1A86 00                  109 	.byte	0
   1A87 10                  110 	.byte	16
   1A88 20                  111 	.byte	32
   1A89 FF                  112 	.byte	-1
   1A8A E0                  113 	.byte	-32
   1A8B E0                  114 	.byte	-32
   1A8C 00                  115 	.byte	0
   1A8D 20                  116 	.byte	32
   1A8E 00                  117 	.byte	0
   1A8F FF                  118 	.byte	-1
   1A90 E0                  119 	.byte	-32
   1A91 20                  120 	.byte	32
   1A92 01                  121 	.byte	1
   1A93 00                  122 	.byte	0
   1A94 00                  123 	.byte	0
                            124 	.globl	_advancement_plus
   1A95                     125 _advancement_plus:
   1A95 00                  126 	.byte	0
   1A96 20                  127 	.byte	32
   1A97 10                  128 	.byte	16
   1A98 FF                  129 	.byte	-1
   1A99 E0                  130 	.byte	-32
   1A9A 00                  131 	.byte	0
   1A9B 00                  132 	.byte	0
   1A9C 10                  133 	.byte	16
   1A9D 10                  134 	.byte	16
   1A9E FF                  135 	.byte	-1
   1A9F 00                  136 	.byte	0
   1AA0 E0                  137 	.byte	-32
   1AA1 01                  138 	.byte	1
   1AA2 00                  139 	.byte	0
   1AA3 00                  140 	.byte	0
                            141 	.globl	_Gamefield
   1AA4                     142 _Gamefield:
   1AA4 FF                  143 	.byte	-1
   1AA5 88                  144 	.byte	-120
   1AA6 00                  145 	.byte	0
   1AA7 FF                  146 	.byte	-1
   1AA8 00                  147 	.byte	0
   1AA9 78                  148 	.byte	120
   1AAA FF                  149 	.byte	-1
   1AAB 78                  150 	.byte	120
   1AAC 00                  151 	.byte	0
   1AAD FF                  152 	.byte	-1
   1AAE 00                  153 	.byte	0
   1AAF 88                  154 	.byte	-120
   1AB0 01                  155 	.byte	1
   1AB1 00                  156 	.byte	0
   1AB2 00                  157 	.byte	0
                            158 	.globl	_Lifelinestruct
   1AB3                     159 _Lifelinestruct:
   1AB3 FF                  160 	.byte	-1
   1AB4 00                  161 	.byte	0
   1AB5 1E                  162 	.byte	30
   1AB6 FF                  163 	.byte	-1
   1AB7 0F                  164 	.byte	15
   1AB8 0A                  165 	.byte	10
   1AB9 FF                  166 	.byte	-1
   1ABA F1                  167 	.byte	-15
   1ABB 0A                  168 	.byte	10
   1ABC FF                  169 	.byte	-1
   1ABD 00                  170 	.byte	0
   1ABE 0F                  171 	.byte	15
   1ABF FF                  172 	.byte	-1
   1AC0 F1                  173 	.byte	-15
   1AC1 0A                  174 	.byte	10
   1AC2 FF                  175 	.byte	-1
   1AC3 2D                  176 	.byte	45
   1AC4 0F                  177 	.byte	15
   1AC5 FF                  178 	.byte	-1
   1AC6 C9                  179 	.byte	-55
   1AC7 0F                  180 	.byte	15
   1AC8 FF                  181 	.byte	-1
   1AC9 19                  182 	.byte	25
   1ACA 0F                  183 	.byte	15
   1ACB FF                  184 	.byte	-1
   1ACC 00                  185 	.byte	0
   1ACD 0F                  186 	.byte	15
   1ACE 01                  187 	.byte	1
   1ACF 00                  188 	.byte	0
   1AD0 00                  189 	.byte	0
                            190 	.globl	_Brainright
   1AD1                     191 _Brainright:
   1AD1 00                  192 	.byte	0
   1AD2 88                  193 	.byte	-120
   1AD3 78                  194 	.byte	120
   1AD4 00                  195 	.byte	0
   1AD5 88                  196 	.byte	-120
   1AD6 00                  197 	.byte	0
   1AD7 00                  198 	.byte	0
   1AD8 88                  199 	.byte	-120
   1AD9 00                  200 	.byte	0
   1ADA 00                  201 	.byte	0
   1ADB 88                  202 	.byte	-120
   1ADC 00                  203 	.byte	0
   1ADD 00                  204 	.byte	0
   1ADE EC                  205 	.byte	-20
   1ADF 9C                  206 	.byte	-100
   1AE0 00                  207 	.byte	0
   1AE1 EC                  208 	.byte	-20
   1AE2 9C                  209 	.byte	-100
   1AE3 00                  210 	.byte	0
   1AE4 EC                  211 	.byte	-20
   1AE5 BA                  212 	.byte	-70
   1AE6 FF                  213 	.byte	-1
   1AE7 00                  214 	.byte	0
   1AE8 64                  215 	.byte	100
   1AE9 FF                  216 	.byte	-1
   1AEA 00                  217 	.byte	0
   1AEB 64                  218 	.byte	100
   1AEC FF                  219 	.byte	-1
   1AED 00                  220 	.byte	0
   1AEE 5A                  221 	.byte	90
   1AEF 00                  222 	.byte	0
   1AF0 3C                  223 	.byte	60
   1AF1 E2                  224 	.byte	-30
   1AF2 FF                  225 	.byte	-1
   1AF3 9C                  226 	.byte	-100
   1AF4 32                  227 	.byte	50
   1AF5 FF                  228 	.byte	-1
   1AF6 00                  229 	.byte	0
   1AF7 3C                  230 	.byte	60
   1AF8 FF                  231 	.byte	-1
   1AF9 00                  232 	.byte	0
   1AFA 4B                  233 	.byte	75
   1AFB FF                  234 	.byte	-1
   1AFC 32                  235 	.byte	50
   1AFD 4B                  236 	.byte	75
   1AFE FF                  237 	.byte	-1
   1AFF 32                  238 	.byte	50
   1B00 4B                  239 	.byte	75
   1B01 FF                  240 	.byte	-1
   1B02 32                  241 	.byte	50
   1B03 00                  242 	.byte	0
   1B04 FF                  243 	.byte	-1
   1B05 1E                  244 	.byte	30
   1B06 3C                  245 	.byte	60
   1B07 FF                  246 	.byte	-1
   1B08 50                  247 	.byte	80
   1B09 28                  248 	.byte	40
   1B0A FF                  249 	.byte	-1
   1B0B 3C                  250 	.byte	60
   1B0C 00                  251 	.byte	0
   1B0D FF                  252 	.byte	-1
   1B0E 14                  253 	.byte	20
   1B0F EC                  254 	.byte	-20
   1B10 FF                  255 	.byte	-1
   1B11 0F                  256 	.byte	15
   1B12 E2                  257 	.byte	-30
   1B13 FF                  258 	.byte	-1
   1B14 EC                  259 	.byte	-20
   1B15 CE                  260 	.byte	-50
   1B16 00                  261 	.byte	0
   1B17 14                  262 	.byte	20
   1B18 32                  263 	.byte	50
   1B19 FF                  264 	.byte	-1
   1B1A 1E                  265 	.byte	30
   1B1B 1E                  266 	.byte	30
   1B1C FF                  267 	.byte	-1
   1B1D 46                  268 	.byte	70
   1B1E 00                  269 	.byte	0
   1B1F FF                  270 	.byte	-1
   1B20 1E                  271 	.byte	30
   1B21 F6                  272 	.byte	-10
   1B22 FF                  273 	.byte	-1
   1B23 D8                  274 	.byte	-40
   1B24 BA                  275 	.byte	-70
   1B25 00                  276 	.byte	0
   1B26 28                  277 	.byte	40
   1B27 46                  278 	.byte	70
   1B28 FF                  279 	.byte	-1
   1B29 46                  280 	.byte	70
   1B2A 00                  281 	.byte	0
   1B2B FF                  282 	.byte	-1
   1B2C 32                  283 	.byte	50
   1B2D E7                  284 	.byte	-25
   1B2E FF                  285 	.byte	-1
   1B2F 00                  286 	.byte	0
   1B30 C4                  287 	.byte	-60
   1B31 FF                  288 	.byte	-1
   1B32 CE                  289 	.byte	-50
   1B33 E7                  290 	.byte	-25
   1B34 FF                  291 	.byte	-1
   1B35 E7                  292 	.byte	-25
   1B36 CE                  293 	.byte	-50
   1B37 00                  294 	.byte	0
   1B38 4B                  295 	.byte	75
   1B39 4B                  296 	.byte	75
   1B3A FF                  297 	.byte	-1
   1B3B 3C                  298 	.byte	60
   1B3C E2                  299 	.byte	-30
   1B3D FF                  300 	.byte	-1
   1B3E 3C                  301 	.byte	60
   1B3F E2                  302 	.byte	-30
   1B40 FF                  303 	.byte	-1
   1B41 3C                  304 	.byte	60
   1B42 CE                  305 	.byte	-50
   1B43 FF                  306 	.byte	-1
   1B44 00                  307 	.byte	0
   1B45 CE                  308 	.byte	-50
   1B46 FF                  309 	.byte	-1
   1B47 28                  310 	.byte	40
   1B48 CE                  311 	.byte	-50
   1B49 FF                  312 	.byte	-1
   1B4A 1E                  313 	.byte	30
   1B4B 9C                  314 	.byte	-100
   1B4C FF                  315 	.byte	-1
   1B4D E2                  316 	.byte	-30
   1B4E C4                  317 	.byte	-60
   1B4F FF                  318 	.byte	-1
   1B50 E2                  319 	.byte	-30
   1B51 BF                  320 	.byte	-65
   1B52 01                  321 	.byte	1
   1B53 00                  322 	.byte	0
   1B54 00                  323 	.byte	0
                            324 	.globl	_Brainleft
   1B55                     325 _Brainleft:
   1B55 00                  326 	.byte	0
   1B56 88                  327 	.byte	-120
   1B57 88                  328 	.byte	-120
   1B58 00                  329 	.byte	0
   1B59 88                  330 	.byte	-120
   1B5A 00                  331 	.byte	0
   1B5B 00                  332 	.byte	0
   1B5C 88                  333 	.byte	-120
   1B5D 00                  334 	.byte	0
   1B5E 00                  335 	.byte	0
   1B5F 88                  336 	.byte	-120
   1B60 00                  337 	.byte	0
   1B61 FF                  338 	.byte	-1
   1B62 9C                  339 	.byte	-100
   1B63 CE                  340 	.byte	-50
   1B64 FF                  341 	.byte	-1
   1B65 00                  342 	.byte	0
   1B66 C4                  343 	.byte	-60
   1B67 FF                  344 	.byte	-1
   1B68 00                  345 	.byte	0
   1B69 B5                  346 	.byte	-75
   1B6A FF                  347 	.byte	-1
   1B6B 32                  348 	.byte	50
   1B6C B5                  349 	.byte	-75
   1B6D FF                  350 	.byte	-1
   1B6E 32                  351 	.byte	50
   1B6F B5                  352 	.byte	-75
   1B70 FF                  353 	.byte	-1
   1B71 32                  354 	.byte	50
   1B72 00                  355 	.byte	0
   1B73 FF                  356 	.byte	-1
   1B74 1E                  357 	.byte	30
   1B75 C4                  358 	.byte	-60
   1B76 FF                  359 	.byte	-1
   1B77 50                  360 	.byte	80
   1B78 D8                  361 	.byte	-40
   1B79 FF                  362 	.byte	-1
   1B7A 3C                  363 	.byte	60
   1B7B 00                  364 	.byte	0
   1B7C FF                  365 	.byte	-1
   1B7D 14                  366 	.byte	20
   1B7E 14                  367 	.byte	20
   1B7F FF                  368 	.byte	-1
   1B80 0F                  369 	.byte	15
   1B81 1E                  370 	.byte	30
   1B82 FF                  371 	.byte	-1
   1B83 EC                  372 	.byte	-20
   1B84 32                  373 	.byte	50
   1B85 00                  374 	.byte	0
   1B86 14                  375 	.byte	20
   1B87 CE                  376 	.byte	-50
   1B88 FF                  377 	.byte	-1
   1B89 1E                  378 	.byte	30
   1B8A E2                  379 	.byte	-30
   1B8B FF                  380 	.byte	-1
   1B8C 46                  381 	.byte	70
   1B8D 00                  382 	.byte	0
   1B8E FF                  383 	.byte	-1
   1B8F 1E                  384 	.byte	30
   1B90 0A                  385 	.byte	10
   1B91 FF                  386 	.byte	-1
   1B92 D8                  387 	.byte	-40
   1B93 46                  388 	.byte	70
   1B94 00                  389 	.byte	0
   1B95 28                  390 	.byte	40
   1B96 BA                  391 	.byte	-70
   1B97 FF                  392 	.byte	-1
   1B98 46                  393 	.byte	70
   1B99 00                  394 	.byte	0
   1B9A FF                  395 	.byte	-1
   1B9B 32                  396 	.byte	50
   1B9C 19                  397 	.byte	25
   1B9D FF                  398 	.byte	-1
   1B9E 00                  399 	.byte	0
   1B9F 3C                  400 	.byte	60
   1BA0 FF                  401 	.byte	-1
   1BA1 CE                  402 	.byte	-50
   1BA2 19                  403 	.byte	25
   1BA3 FF                  404 	.byte	-1
   1BA4 E7                  405 	.byte	-25
   1BA5 32                  406 	.byte	50
   1BA6 00                  407 	.byte	0
   1BA7 4B                  408 	.byte	75
   1BA8 B5                  409 	.byte	-75
   1BA9 FF                  410 	.byte	-1
   1BAA 3C                  411 	.byte	60
   1BAB 1E                  412 	.byte	30
   1BAC FF                  413 	.byte	-1
   1BAD 3C                  414 	.byte	60
   1BAE 1E                  415 	.byte	30
   1BAF FF                  416 	.byte	-1
   1BB0 3C                  417 	.byte	60
   1BB1 32                  418 	.byte	50
   1BB2 FF                  419 	.byte	-1
   1BB3 00                  420 	.byte	0
   1BB4 32                  421 	.byte	50
   1BB5 FF                  422 	.byte	-1
   1BB6 28                  423 	.byte	40
   1BB7 32                  424 	.byte	50
   1BB8 FF                  425 	.byte	-1
   1BB9 1E                  426 	.byte	30
   1BBA 64                  427 	.byte	100
   1BBB FF                  428 	.byte	-1
   1BBC E2                  429 	.byte	-30
   1BBD 3C                  430 	.byte	60
   1BBE FF                  431 	.byte	-1
   1BBF E2                  432 	.byte	-30
   1BC0 41                  433 	.byte	65
   1BC1 01                  434 	.byte	1
   1BC2 00                  435 	.byte	0
   1BC3 00                  436 	.byte	0
                            437 	.globl	_Positions_Arrow
   1BC4                     438 _Positions_Arrow:
   1BC4 3C                  439 	.byte	60
   1BC5 C9                  440 	.byte	-55
   1BC6 28                  441 	.byte	40
   1BC7 C9                  442 	.byte	-55
   1BC8 14                  443 	.byte	20
   1BC9 C9                  444 	.byte	-55
                            445 	.globl	_arrow
   1BCA                     446 _arrow:
   1BCA 00                  447 	.byte	0
   1BCB 04                  448 	.byte	4
   1BCC 00                  449 	.byte	0
   1BCD FF                  450 	.byte	-1
   1BCE F6                  451 	.byte	-10
   1BCF 0A                  452 	.byte	10
   1BD0 FF                  453 	.byte	-1
   1BD1 F6                  454 	.byte	-10
   1BD2 F6                  455 	.byte	-10
   1BD3 00                  456 	.byte	0
   1BD4 0A                  457 	.byte	10
   1BD5 0A                  458 	.byte	10
   1BD6 FF                  459 	.byte	-1
   1BD7 00                  460 	.byte	0
   1BD8 EC                  461 	.byte	-20
   1BD9 01                  462 	.byte	1
   1BDA 00                  463 	.byte	0
   1BDB 00                  464 	.byte	0
                            465 	.globl	_main
   1BDC                     466 _main:
   1BDC 32 7F         [ 5]  467 	leas	-1,s
   1BDE                     468 L2:
   1BDE BD 18 DB      [ 8]  469 	jsr	_level_init
   1BE1 BD 19 F8      [ 8]  470 	jsr	_level_play
   1BE4 6D E4         [ 6]  471 	tst	,s
   1BE6 27 F6         [ 3]  472 	beq	L2
   1BE8 E6 E4         [ 4]  473 	ldb	,s
   1BEA 32 61         [ 5]  474 	leas	1,s
   1BEC 39            [ 5]  475 	rts
ASxxxx Assembler V05.50  (Motorola 6809)                                Page 1
Hexadecimal [16-Bits]                                 Sat Jun 28 00:20:38 2025

Symbol Table

    .__.$$$.       =   2710 L   |     .__.ABS.       =   0000 G
    .__.CPU.       =   0000 L   |     .__.H$L.       =   0001 L
  2 L2                 01B4 R   |   2 _Brainleft         012B GR
  2 _Brainright        00A7 GR  |   2 _Gamefield         007A GR
  2 _Level_advance     0000 GR  |   2 _Lifelinestruc     0089 GR
  2 _Positions_Arr     019A GR  |   2 _advancement_c     005C GR
  2 _advancement_p     006B GR  |   2 _arrow             01A0 GR
  2 _cross             0020 GR  |     _level_init        **** GX
    _level_play        **** GX  |   2 _main              01B2 GR
  2 _square            002F GR  |   2 _square_filled     0041 GR

ASxxxx Assembler V05.50  (Motorola 6809)                                Page 2
Hexadecimal [16-Bits]                                 Sat Jun 28 00:20:38 2025

Area Table

[_CSEG]
   0 _CODE            size    0   flags C080
   2 .text            size  1C3   flags  100
[_DSEG]
   1 _DATA            size    0   flags C0C0

