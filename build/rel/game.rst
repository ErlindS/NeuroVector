                              1 ;;; gcc for m6809 : Mar 17 2019 13:25:32
                              2 ;;; 4.3.6 (gcc6809)
                              3 ;;; ABI version 1
                              4 ;;; -mabi=bx -mint8 -fomit-frame-pointer -O0
                              5 	.module	game.c
                              6 	.globl	_Positions_Cursor
                              7 	.area	.text
   0227                       8 _Positions_Cursor:
   0227 00                    9 	.byte	0
   0228 00                   10 	.byte	0
   0229 10                   11 	.byte	16
   022A F0                   12 	.byte	-16
   022B 10                   13 	.byte	16
   022C 00                   14 	.byte	0
   022D 10                   15 	.byte	16
   022E 10                   16 	.byte	16
   022F 00                   17 	.byte	0
   0230 F0                   18 	.byte	-16
   0231 00                   19 	.byte	0
   0232 00                   20 	.byte	0
   0233 00                   21 	.byte	0
   0234 10                   22 	.byte	16
   0235 F0                   23 	.byte	-16
   0236 F0                   24 	.byte	-16
   0237 F0                   25 	.byte	-16
   0238 00                   26 	.byte	0
   0239 F0                   27 	.byte	-16
   023A 10                   28 	.byte	16
                             29 	.globl	_cross
   023B                      30 _cross:
   023B 00                   31 	.byte	0
   023C 20                   32 	.byte	32
   023D 20                   33 	.byte	32
   023E FF                   34 	.byte	-1
   023F E0                   35 	.byte	-32
   0240 E0                   36 	.byte	-32
   0241 00                   37 	.byte	0
   0242 20                   38 	.byte	32
   0243 00                   39 	.byte	0
   0244 FF                   40 	.byte	-1
   0245 E0                   41 	.byte	-32
   0246 20                   42 	.byte	32
   0247 01                   43 	.byte	1
   0248 00                   44 	.byte	0
   0249 00                   45 	.byte	0
                             46 	.globl	_Gamefield
   024A                      47 _Gamefield:
   024A 00                   48 	.byte	0
   024B 18                   49 	.byte	24
   024C F8                   50 	.byte	-8
   024D FF                   51 	.byte	-1
   024E D0                   52 	.byte	-48
   024F 00                   53 	.byte	0
   0250 00                   54 	.byte	0
   0251 00                   55 	.byte	0
   0252 10                   56 	.byte	16
   0253 FF                   57 	.byte	-1
   0254 30                   58 	.byte	48
   0255 00                   59 	.byte	0
   0256 00                   60 	.byte	0
   0257 F0                   61 	.byte	-16
   0258 10                   62 	.byte	16
   0259 FF                   63 	.byte	-1
   025A 00                   64 	.byte	0
   025B D0                   65 	.byte	-48
   025C 00                   66 	.byte	0
   025D F0                   67 	.byte	-16
   025E 00                   68 	.byte	0
   025F FF                   69 	.byte	-1
   0260 00                   70 	.byte	0
   0261 30                   71 	.byte	48
   0262 01                   72 	.byte	1
   0263 00                   73 	.byte	0
   0264 00                   74 	.byte	0
                             75 	.globl	_Brainright
   0265                      76 _Brainright:
   0265 00                   77 	.byte	0
   0266 D3                   78 	.byte	-45
   0267 00                   79 	.byte	0
   0268 FF                   80 	.byte	-1
   0269 FB                   81 	.byte	-5
   026A 05                   82 	.byte	5
   026B FF                   83 	.byte	-1
   026C 01                   84 	.byte	1
   026D 0F                   85 	.byte	15
   026E FF                   86 	.byte	-1
   026F 0A                   87 	.byte	10
   0270 07                   88 	.byte	7
   0271 FF                   89 	.byte	-1
   0272 0A                   90 	.byte	10
   0273 05                   91 	.byte	5
   0274 FF                   92 	.byte	-1
   0275 2D                   93 	.byte	45
   0276 FF                   94 	.byte	-1
   0277 FF                   95 	.byte	-1
   0278 05                   96 	.byte	5
   0279 F6                   97 	.byte	-10
   027A FF                   98 	.byte	-1
   027B 00                   99 	.byte	0
   027C F6                  100 	.byte	-10
   027D FF                  101 	.byte	-1
   027E FB                  102 	.byte	-5
   027F F6                  103 	.byte	-10
   0280 01                  104 	.byte	1
   0281 00                  105 	.byte	0
   0282 00                  106 	.byte	0
                            107 	.globl	_Brainleft
   0283                     108 _Brainleft:
   0283 00                  109 	.byte	0
   0284 D3                  110 	.byte	-45
   0285 00                  111 	.byte	0
   0286 FF                  112 	.byte	-1
   0287 FB                  113 	.byte	-5
   0288 FB                  114 	.byte	-5
   0289 FF                  115 	.byte	-1
   028A 01                  116 	.byte	1
   028B F1                  117 	.byte	-15
   028C FF                  118 	.byte	-1
   028D 0A                  119 	.byte	10
   028E F9                  120 	.byte	-7
   028F FF                  121 	.byte	-1
   0290 0A                  122 	.byte	10
   0291 FB                  123 	.byte	-5
   0292 FF                  124 	.byte	-1
   0293 2D                  125 	.byte	45
   0294 01                  126 	.byte	1
   0295 FF                  127 	.byte	-1
   0296 05                  128 	.byte	5
   0297 0A                  129 	.byte	10
   0298 FF                  130 	.byte	-1
   0299 00                  131 	.byte	0
   029A 0A                  132 	.byte	10
   029B FF                  133 	.byte	-1
   029C FB                  134 	.byte	-5
   029D 0A                  135 	.byte	10
   029E 01                  136 	.byte	1
   029F 00                  137 	.byte	0
   02A0 00                  138 	.byte	0
                            139 	.globl	_Positions_Arrow
   02A1                     140 _Positions_Arrow:
   02A1 3C                  141 	.byte	60
   02A2 C9                  142 	.byte	-55
   02A3 28                  143 	.byte	40
   02A4 C9                  144 	.byte	-55
                            145 	.globl	_arrow
   02A5                     146 _arrow:
   02A5 00                  147 	.byte	0
   02A6 04                  148 	.byte	4
   02A7 00                  149 	.byte	0
   02A8 FF                  150 	.byte	-1
   02A9 F6                  151 	.byte	-10
   02AA 0A                  152 	.byte	10
   02AB FF                  153 	.byte	-1
   02AC F6                  154 	.byte	-10
   02AD F6                  155 	.byte	-10
   02AE 00                  156 	.byte	0
   02AF 0A                  157 	.byte	10
   02B0 0A                  158 	.byte	10
   02B1 FF                  159 	.byte	-1
   02B2 00                  160 	.byte	0
   02B3 EC                  161 	.byte	-20
   02B4 01                  162 	.byte	1
   02B5 00                  163 	.byte	0
   02B6 00                  164 	.byte	0
                            165 	.globl	_current_game
                            166 	.area	.data
   C880                     167 _current_game:
   C880 00 00 00 00 00 00   168 	.word	0,0,0,0
        00 00
   C888 00                  169 	.byte	0
                            170 	.area	.text
                            171 	.globl	_game
   02B7                     172 _game:
   02B7 BD 07 23      [ 8]  173 	jsr	_level_init
   02BA BD 07 B5      [ 8]  174 	jsr	_level_play
   02BD 5F            [ 2]  175 	clrb
   02BE 39            [ 5]  176 	rts
ASxxxx Assembler V05.50  (Motorola 6809)                                Page 1
Hexadecimal [16-Bits]                                 Tue May 13 04:43:08 2025

Symbol Table

    .__.$$$.       =   2710 L   |     .__.ABS.       =   0000 G
    .__.CPU.       =   0000 L   |     .__.H$L.       =   0001 L
  2 _Brainleft         005C GR  |   2 _Brainright        003E GR
  2 _Gamefield         0023 GR  |   2 _Positions_Arr     007A GR
  2 _Positions_Cur     0000 GR  |   2 _arrow             007E GR
  2 _cross             0014 GR  |   3 _current_game      0000 GR
  2 _game              0090 GR  |     _level_init        **** GX
    _level_play        **** GX

ASxxxx Assembler V05.50  (Motorola 6809)                                Page 2
Hexadecimal [16-Bits]                                 Tue May 13 04:43:08 2025

Area Table

[_CSEG]
   0 _CODE            size    0   flags C080
   2 .text            size   98   flags  100
   3 .data            size    9   flags  100
[_DSEG]
   1 _DATA            size    0   flags C0C0

