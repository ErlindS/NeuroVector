                              1 ;;; gcc for m6809 : Mar 17 2019 13:25:32
                              2 ;;; 4.3.6 (gcc6809)
                              3 ;;; ABI version 1
                              4 ;;; -mabi=bx -mint8 -fomit-frame-pointer -O0
                              5 	.module	game.c
                              6 	.globl	_Positions_Cursor
                              7 	.area	.text
   01CB                       8 _Positions_Cursor:
   01CB 00                    9 	.byte	0
   01CC 00                   10 	.byte	0
   01CD 10                   11 	.byte	16
   01CE F0                   12 	.byte	-16
   01CF 10                   13 	.byte	16
   01D0 00                   14 	.byte	0
   01D1 10                   15 	.byte	16
   01D2 10                   16 	.byte	16
   01D3 00                   17 	.byte	0
   01D4 F0                   18 	.byte	-16
   01D5 00                   19 	.byte	0
   01D6 00                   20 	.byte	0
   01D7 00                   21 	.byte	0
   01D8 10                   22 	.byte	16
   01D9 F0                   23 	.byte	-16
   01DA F0                   24 	.byte	-16
   01DB F0                   25 	.byte	-16
   01DC 00                   26 	.byte	0
   01DD F0                   27 	.byte	-16
   01DE 10                   28 	.byte	16
                             29 	.globl	_cross
   01DF                      30 _cross:
   01DF 00                   31 	.byte	0
   01E0 20                   32 	.byte	32
   01E1 20                   33 	.byte	32
   01E2 FF                   34 	.byte	-1
   01E3 E0                   35 	.byte	-32
   01E4 E0                   36 	.byte	-32
   01E5 00                   37 	.byte	0
   01E6 20                   38 	.byte	32
   01E7 00                   39 	.byte	0
   01E8 FF                   40 	.byte	-1
   01E9 E0                   41 	.byte	-32
   01EA 20                   42 	.byte	32
   01EB 01                   43 	.byte	1
   01EC 00                   44 	.byte	0
   01ED 00                   45 	.byte	0
                             46 	.globl	_Gamefield
   01EE                      47 _Gamefield:
   01EE 00                   48 	.byte	0
   01EF 18                   49 	.byte	24
   01F0 F8                   50 	.byte	-8
   01F1 FF                   51 	.byte	-1
   01F2 D0                   52 	.byte	-48
   01F3 00                   53 	.byte	0
   01F4 00                   54 	.byte	0
   01F5 00                   55 	.byte	0
   01F6 10                   56 	.byte	16
   01F7 FF                   57 	.byte	-1
   01F8 30                   58 	.byte	48
   01F9 00                   59 	.byte	0
   01FA 00                   60 	.byte	0
   01FB F0                   61 	.byte	-16
   01FC 10                   62 	.byte	16
   01FD FF                   63 	.byte	-1
   01FE 00                   64 	.byte	0
   01FF D0                   65 	.byte	-48
   0200 00                   66 	.byte	0
   0201 F0                   67 	.byte	-16
   0202 00                   68 	.byte	0
   0203 FF                   69 	.byte	-1
   0204 00                   70 	.byte	0
   0205 30                   71 	.byte	48
   0206 01                   72 	.byte	1
   0207 00                   73 	.byte	0
   0208 00                   74 	.byte	0
                             75 	.globl	_Brainright
   0209                      76 _Brainright:
   0209 00                   77 	.byte	0
   020A D3                   78 	.byte	-45
   020B 00                   79 	.byte	0
   020C FF                   80 	.byte	-1
   020D FB                   81 	.byte	-5
   020E 05                   82 	.byte	5
   020F FF                   83 	.byte	-1
   0210 01                   84 	.byte	1
   0211 0F                   85 	.byte	15
   0212 FF                   86 	.byte	-1
   0213 0A                   87 	.byte	10
   0214 07                   88 	.byte	7
   0215 FF                   89 	.byte	-1
   0216 0A                   90 	.byte	10
   0217 05                   91 	.byte	5
   0218 FF                   92 	.byte	-1
   0219 2D                   93 	.byte	45
   021A FF                   94 	.byte	-1
   021B FF                   95 	.byte	-1
   021C 05                   96 	.byte	5
   021D F6                   97 	.byte	-10
   021E FF                   98 	.byte	-1
   021F 00                   99 	.byte	0
   0220 F6                  100 	.byte	-10
   0221 FF                  101 	.byte	-1
   0222 FB                  102 	.byte	-5
   0223 F6                  103 	.byte	-10
   0224 01                  104 	.byte	1
   0225 00                  105 	.byte	0
   0226 00                  106 	.byte	0
                            107 	.globl	_Brainleft
   0227                     108 _Brainleft:
   0227 00                  109 	.byte	0
   0228 D3                  110 	.byte	-45
   0229 00                  111 	.byte	0
   022A FF                  112 	.byte	-1
   022B FB                  113 	.byte	-5
   022C FB                  114 	.byte	-5
   022D FF                  115 	.byte	-1
   022E 01                  116 	.byte	1
   022F F1                  117 	.byte	-15
   0230 FF                  118 	.byte	-1
   0231 0A                  119 	.byte	10
   0232 F9                  120 	.byte	-7
   0233 FF                  121 	.byte	-1
   0234 0A                  122 	.byte	10
   0235 FB                  123 	.byte	-5
   0236 FF                  124 	.byte	-1
   0237 2D                  125 	.byte	45
   0238 01                  126 	.byte	1
   0239 FF                  127 	.byte	-1
   023A 05                  128 	.byte	5
   023B 0A                  129 	.byte	10
   023C FF                  130 	.byte	-1
   023D 00                  131 	.byte	0
   023E 0A                  132 	.byte	10
   023F FF                  133 	.byte	-1
   0240 FB                  134 	.byte	-5
   0241 0A                  135 	.byte	10
   0242 01                  136 	.byte	1
   0243 00                  137 	.byte	0
   0244 00                  138 	.byte	0
                            139 	.globl	_current_game
                            140 	.area	.data
   C880                     141 _current_game:
   C880 00 00 00 00 00 00   142 	.word	0,0,0,0
        00 00
   C888 00                  143 	.byte	0
                            144 	.area	.text
                            145 	.globl	_game
   0245                     146 _game:
   0245 BD 03 01      [ 8]  147 	jsr	_level_init
   0248 BD 05 8F      [ 8]  148 	jsr	_level_play
   024B 5F            [ 2]  149 	clrb
   024C 39            [ 5]  150 	rts
ASxxxx Assembler V05.50  (Motorola 6809)                                Page 1
Hexadecimal [16-Bits]                                 Thu May  8 20:41:17 2025

Symbol Table

    .__.$$$.       =   2710 L   |     .__.ABS.       =   0000 G
    .__.CPU.       =   0000 L   |     .__.H$L.       =   0001 L
  2 _Brainleft         005C GR  |   2 _Brainright        003E GR
  2 _Gamefield         0023 GR  |   2 _Positions_Cur     0000 GR
  2 _cross             0014 GR  |   3 _current_game      0000 GR
  2 _game              007A GR  |     _level_init        **** GX
    _level_play        **** GX

ASxxxx Assembler V05.50  (Motorola 6809)                                Page 2
Hexadecimal [16-Bits]                                 Thu May  8 20:41:17 2025

Area Table

[_CSEG]
   0 _CODE            size    0   flags C080
   2 .text            size   82   flags  100
   3 .data            size    9   flags  100
[_DSEG]
   1 _DATA            size    0   flags C0C0

