                              1 ;;; gcc for m6809 : Mar 17 2019 13:25:32
                              2 ;;; 4.3.6 (gcc6809)
                              3 ;;; ABI version 1
                              4 ;;; -mabi=bx -mint8 -fomit-frame-pointer -O0
                              5 	.module	game.c
                              6 	.globl	_Positions_Cursor
                              7 	.area	.text
   02F1                       8 _Positions_Cursor:
   02F1 00                    9 	.byte	0
   02F2 00                   10 	.byte	0
   02F3 10                   11 	.byte	16
   02F4 F0                   12 	.byte	-16
   02F5 10                   13 	.byte	16
   02F6 00                   14 	.byte	0
   02F7 10                   15 	.byte	16
   02F8 10                   16 	.byte	16
   02F9 00                   17 	.byte	0
   02FA F0                   18 	.byte	-16
   02FB 00                   19 	.byte	0
   02FC 00                   20 	.byte	0
   02FD 00                   21 	.byte	0
   02FE 10                   22 	.byte	16
   02FF F0                   23 	.byte	-16
   0300 F0                   24 	.byte	-16
   0301 F0                   25 	.byte	-16
   0302 00                   26 	.byte	0
   0303 F0                   27 	.byte	-16
   0304 10                   28 	.byte	16
                             29 	.globl	_Level_advancement
   0305                      30 _Level_advancement:
   0305 C4                   31 	.byte	-60
   0306 DD                   32 	.byte	-35
   0307 C4                   33 	.byte	-60
   0308 E7                   34 	.byte	-25
   0309 C4                   35 	.byte	-60
   030A F1                   36 	.byte	-15
   030B C4                   37 	.byte	-60
   030C FB                   38 	.byte	-5
   030D C4                   39 	.byte	-60
   030E 05                   40 	.byte	5
   030F C4                   41 	.byte	-60
   0310 0F                   42 	.byte	15
   0311 C4                   43 	.byte	-60
   0312 19                   44 	.byte	25
   0313 C4                   45 	.byte	-60
   0314 23                   46 	.byte	35
   0315 BA                   47 	.byte	-70
   0316 DD                   48 	.byte	-35
   0317 BA                   49 	.byte	-70
   0318 E7                   50 	.byte	-25
   0319 BA                   51 	.byte	-70
   031A F1                   52 	.byte	-15
   031B BA                   53 	.byte	-70
   031C FB                   54 	.byte	-5
   031D BA                   55 	.byte	-70
   031E 05                   56 	.byte	5
   031F BA                   57 	.byte	-70
   0320 0F                   58 	.byte	15
   0321 BA                   59 	.byte	-70
   0322 19                   60 	.byte	25
   0323 BA                   61 	.byte	-70
   0324 23                   62 	.byte	35
                             63 	.globl	_cross
   0325                      64 _cross:
   0325 00                   65 	.byte	0
   0326 20                   66 	.byte	32
   0327 20                   67 	.byte	32
   0328 FF                   68 	.byte	-1
   0329 E0                   69 	.byte	-32
   032A E0                   70 	.byte	-32
   032B 00                   71 	.byte	0
   032C 20                   72 	.byte	32
   032D 00                   73 	.byte	0
   032E FF                   74 	.byte	-1
   032F E0                   75 	.byte	-32
   0330 20                   76 	.byte	32
   0331 01                   77 	.byte	1
   0332 00                   78 	.byte	0
   0333 00                   79 	.byte	0
                             80 	.globl	_advancement_cross
   0334                      81 _advancement_cross:
   0334 00                   82 	.byte	0
   0335 10                   83 	.byte	16
   0336 20                   84 	.byte	32
   0337 FF                   85 	.byte	-1
   0338 E0                   86 	.byte	-32
   0339 E0                   87 	.byte	-32
   033A 00                   88 	.byte	0
   033B 20                   89 	.byte	32
   033C 00                   90 	.byte	0
   033D FF                   91 	.byte	-1
   033E E0                   92 	.byte	-32
   033F 20                   93 	.byte	32
   0340 01                   94 	.byte	1
   0341 00                   95 	.byte	0
   0342 00                   96 	.byte	0
                             97 	.globl	_advancement_plus
   0343                      98 _advancement_plus:
   0343 00                   99 	.byte	0
   0344 20                  100 	.byte	32
   0345 10                  101 	.byte	16
   0346 FF                  102 	.byte	-1
   0347 E0                  103 	.byte	-32
   0348 00                  104 	.byte	0
   0349 00                  105 	.byte	0
   034A 10                  106 	.byte	16
   034B 10                  107 	.byte	16
   034C FF                  108 	.byte	-1
   034D 00                  109 	.byte	0
   034E E0                  110 	.byte	-32
   034F 01                  111 	.byte	1
   0350 00                  112 	.byte	0
   0351 00                  113 	.byte	0
                            114 	.globl	_Gamefield
   0352                     115 _Gamefield:
   0352 00                  116 	.byte	0
   0353 18                  117 	.byte	24
   0354 F8                  118 	.byte	-8
   0355 FF                  119 	.byte	-1
   0356 D0                  120 	.byte	-48
   0357 00                  121 	.byte	0
   0358 00                  122 	.byte	0
   0359 00                  123 	.byte	0
   035A 10                  124 	.byte	16
   035B FF                  125 	.byte	-1
   035C 30                  126 	.byte	48
   035D 00                  127 	.byte	0
   035E 00                  128 	.byte	0
   035F F0                  129 	.byte	-16
   0360 10                  130 	.byte	16
   0361 FF                  131 	.byte	-1
   0362 00                  132 	.byte	0
   0363 D0                  133 	.byte	-48
   0364 00                  134 	.byte	0
   0365 F0                  135 	.byte	-16
   0366 00                  136 	.byte	0
   0367 FF                  137 	.byte	-1
   0368 00                  138 	.byte	0
   0369 30                  139 	.byte	48
   036A 01                  140 	.byte	1
   036B 00                  141 	.byte	0
   036C 00                  142 	.byte	0
                            143 	.globl	_Brainright
   036D                     144 _Brainright:
   036D 00                  145 	.byte	0
   036E D3                  146 	.byte	-45
   036F 00                  147 	.byte	0
   0370 FF                  148 	.byte	-1
   0371 FB                  149 	.byte	-5
   0372 05                  150 	.byte	5
   0373 FF                  151 	.byte	-1
   0374 01                  152 	.byte	1
   0375 0F                  153 	.byte	15
   0376 FF                  154 	.byte	-1
   0377 0A                  155 	.byte	10
   0378 07                  156 	.byte	7
   0379 FF                  157 	.byte	-1
   037A 0A                  158 	.byte	10
   037B 05                  159 	.byte	5
   037C FF                  160 	.byte	-1
   037D 2D                  161 	.byte	45
   037E FF                  162 	.byte	-1
   037F FF                  163 	.byte	-1
   0380 05                  164 	.byte	5
   0381 F6                  165 	.byte	-10
   0382 FF                  166 	.byte	-1
   0383 00                  167 	.byte	0
   0384 F6                  168 	.byte	-10
   0385 FF                  169 	.byte	-1
   0386 FB                  170 	.byte	-5
   0387 F6                  171 	.byte	-10
   0388 01                  172 	.byte	1
   0389 00                  173 	.byte	0
   038A 00                  174 	.byte	0
                            175 	.globl	_Brainleft
   038B                     176 _Brainleft:
   038B 00                  177 	.byte	0
   038C D3                  178 	.byte	-45
   038D 00                  179 	.byte	0
   038E FF                  180 	.byte	-1
   038F FB                  181 	.byte	-5
   0390 FB                  182 	.byte	-5
   0391 FF                  183 	.byte	-1
   0392 01                  184 	.byte	1
   0393 F1                  185 	.byte	-15
   0394 FF                  186 	.byte	-1
   0395 0A                  187 	.byte	10
   0396 F9                  188 	.byte	-7
   0397 FF                  189 	.byte	-1
   0398 0A                  190 	.byte	10
   0399 FB                  191 	.byte	-5
   039A FF                  192 	.byte	-1
   039B 2D                  193 	.byte	45
   039C 01                  194 	.byte	1
   039D FF                  195 	.byte	-1
   039E 05                  196 	.byte	5
   039F 0A                  197 	.byte	10
   03A0 FF                  198 	.byte	-1
   03A1 00                  199 	.byte	0
   03A2 0A                  200 	.byte	10
   03A3 FF                  201 	.byte	-1
   03A4 FB                  202 	.byte	-5
   03A5 0A                  203 	.byte	10
   03A6 01                  204 	.byte	1
   03A7 00                  205 	.byte	0
   03A8 00                  206 	.byte	0
                            207 	.globl	_Positions_Arrow
   03A9                     208 _Positions_Arrow:
   03A9 3C                  209 	.byte	60
   03AA C9                  210 	.byte	-55
   03AB 28                  211 	.byte	40
   03AC C9                  212 	.byte	-55
                            213 	.globl	_arrow
   03AD                     214 _arrow:
   03AD 00                  215 	.byte	0
   03AE 04                  216 	.byte	4
   03AF 00                  217 	.byte	0
   03B0 FF                  218 	.byte	-1
   03B1 F6                  219 	.byte	-10
   03B2 0A                  220 	.byte	10
   03B3 FF                  221 	.byte	-1
   03B4 F6                  222 	.byte	-10
   03B5 F6                  223 	.byte	-10
   03B6 00                  224 	.byte	0
   03B7 0A                  225 	.byte	10
   03B8 0A                  226 	.byte	10
   03B9 FF                  227 	.byte	-1
   03BA 00                  228 	.byte	0
   03BB EC                  229 	.byte	-20
   03BC 01                  230 	.byte	1
   03BD 00                  231 	.byte	0
   03BE 00                  232 	.byte	0
                            233 	.globl	_current_game
                            234 	.area	.data
   C880                     235 _current_game:
   C880 00 00 00 00 00 00   236 	.word	0,0,0,0
        00 00
   C888 00                  237 	.byte	0
                            238 	.area	.text
                            239 	.globl	_game
   03BF                     240 _game:
   03BF BD 09 43      [ 8]  241 	jsr	_level_init
   03C2 BD 09 E8      [ 8]  242 	jsr	_level_play
   03C5 5F            [ 2]  243 	clrb
   03C6 39            [ 5]  244 	rts
ASxxxx Assembler V05.50  (Motorola 6809)                                Page 1
Hexadecimal [16-Bits]                                 Tue May 13 06:51:06 2025

Symbol Table

    .__.$$$.       =   2710 L   |     .__.ABS.       =   0000 G
    .__.CPU.       =   0000 L   |     .__.H$L.       =   0001 L
  2 _Brainleft         009A GR  |   2 _Brainright        007C GR
  2 _Gamefield         0061 GR  |   2 _Level_advance     0014 GR
  2 _Positions_Arr     00B8 GR  |   2 _Positions_Cur     0000 GR
  2 _advancement_c     0043 GR  |   2 _advancement_p     0052 GR
  2 _arrow             00BC GR  |   2 _cross             0034 GR
  3 _current_game      0000 GR  |   2 _game              00CE GR
    _level_init        **** GX  |     _level_play        **** GX

ASxxxx Assembler V05.50  (Motorola 6809)                                Page 2
Hexadecimal [16-Bits]                                 Tue May 13 06:51:06 2025

Area Table

[_CSEG]
   0 _CODE            size    0   flags C080
   2 .text            size   D6   flags  100
   3 .data            size    9   flags  100
[_DSEG]
   1 _DATA            size    0   flags C0C0

