                              1 ;;; gcc for m6809 : Mar 17 2019 13:25:32
                              2 ;;; 4.3.6 (gcc6809)
                              3 ;;; ABI version 1
                              4 ;;; -mabi=bx -mint8 -fomit-frame-pointer -O0
                              5 	.module	drawables.c
                              6 	.globl	_Positions_Cursor
                              7 	.area	.text
   005E                       8 _Positions_Cursor:
   005E 00                    9 	.byte	0
   005F 00                   10 	.byte	0
   0060 10                   11 	.byte	16
   0061 F0                   12 	.byte	-16
   0062 10                   13 	.byte	16
   0063 00                   14 	.byte	0
   0064 10                   15 	.byte	16
   0065 10                   16 	.byte	16
   0066 00                   17 	.byte	0
   0067 F0                   18 	.byte	-16
   0068 00                   19 	.byte	0
   0069 00                   20 	.byte	0
   006A 00                   21 	.byte	0
   006B 10                   22 	.byte	16
   006C F0                   23 	.byte	-16
   006D F0                   24 	.byte	-16
   006E F0                   25 	.byte	-16
   006F 00                   26 	.byte	0
   0070 F0                   27 	.byte	-16
   0071 10                   28 	.byte	16
                             29 	.globl	_cross
   0072                      30 _cross:
   0072 00                   31 	.byte	0
   0073 20                   32 	.byte	32
   0074 20                   33 	.byte	32
   0075 FF                   34 	.byte	-1
   0076 E0                   35 	.byte	-32
   0077 E0                   36 	.byte	-32
   0078 00                   37 	.byte	0
   0079 20                   38 	.byte	32
   007A 00                   39 	.byte	0
   007B FF                   40 	.byte	-1
   007C E0                   41 	.byte	-32
   007D 20                   42 	.byte	32
   007E 01                   43 	.byte	1
   007F 00                   44 	.byte	0
   0080 00                   45 	.byte	0
                             46 	.globl	_Gamefield
   0081                      47 _Gamefield:
   0081 00                   48 	.byte	0
   0082 18                   49 	.byte	24
   0083 F8                   50 	.byte	-8
   0084 FF                   51 	.byte	-1
   0085 D0                   52 	.byte	-48
   0086 00                   53 	.byte	0
   0087 00                   54 	.byte	0
   0088 00                   55 	.byte	0
   0089 10                   56 	.byte	16
   008A FF                   57 	.byte	-1
   008B 30                   58 	.byte	48
   008C 00                   59 	.byte	0
   008D 00                   60 	.byte	0
   008E F0                   61 	.byte	-16
   008F 10                   62 	.byte	16
   0090 FF                   63 	.byte	-1
   0091 00                   64 	.byte	0
   0092 D0                   65 	.byte	-48
   0093 00                   66 	.byte	0
   0094 F0                   67 	.byte	-16
   0095 00                   68 	.byte	0
   0096 FF                   69 	.byte	-1
   0097 00                   70 	.byte	0
   0098 30                   71 	.byte	48
   0099 01                   72 	.byte	1
   009A 00                   73 	.byte	0
   009B 00                   74 	.byte	0
                             75 	.globl	_Brainright
   009C                      76 _Brainright:
   009C 00                   77 	.byte	0
   009D D3                   78 	.byte	-45
   009E 00                   79 	.byte	0
   009F FF                   80 	.byte	-1
   00A0 FB                   81 	.byte	-5
   00A1 05                   82 	.byte	5
   00A2 FF                   83 	.byte	-1
   00A3 01                   84 	.byte	1
   00A4 0F                   85 	.byte	15
   00A5 FF                   86 	.byte	-1
   00A6 0A                   87 	.byte	10
   00A7 07                   88 	.byte	7
   00A8 FF                   89 	.byte	-1
   00A9 0A                   90 	.byte	10
   00AA 05                   91 	.byte	5
   00AB FF                   92 	.byte	-1
   00AC 2D                   93 	.byte	45
   00AD FF                   94 	.byte	-1
   00AE FF                   95 	.byte	-1
   00AF 05                   96 	.byte	5
   00B0 F6                   97 	.byte	-10
   00B1 FF                   98 	.byte	-1
   00B2 00                   99 	.byte	0
   00B3 F6                  100 	.byte	-10
   00B4 FF                  101 	.byte	-1
   00B5 FB                  102 	.byte	-5
   00B6 F6                  103 	.byte	-10
   00B7 01                  104 	.byte	1
   00B8 00                  105 	.byte	0
   00B9 00                  106 	.byte	0
                            107 	.globl	_Brainleft
   00BA                     108 _Brainleft:
   00BA 00                  109 	.byte	0
   00BB D3                  110 	.byte	-45
   00BC 00                  111 	.byte	0
   00BD FF                  112 	.byte	-1
   00BE FB                  113 	.byte	-5
   00BF FB                  114 	.byte	-5
   00C0 FF                  115 	.byte	-1
   00C1 01                  116 	.byte	1
   00C2 F1                  117 	.byte	-15
   00C3 FF                  118 	.byte	-1
   00C4 0A                  119 	.byte	10
   00C5 F9                  120 	.byte	-7
   00C6 FF                  121 	.byte	-1
   00C7 0A                  122 	.byte	10
   00C8 FB                  123 	.byte	-5
   00C9 FF                  124 	.byte	-1
   00CA 2D                  125 	.byte	45
   00CB 01                  126 	.byte	1
   00CC FF                  127 	.byte	-1
   00CD 05                  128 	.byte	5
   00CE 0A                  129 	.byte	10
   00CF FF                  130 	.byte	-1
   00D0 00                  131 	.byte	0
   00D1 0A                  132 	.byte	10
   00D2 FF                  133 	.byte	-1
   00D3 FB                  134 	.byte	-5
   00D4 0A                  135 	.byte	10
   00D5 01                  136 	.byte	1
   00D6 00                  137 	.byte	0
   00D7 00                  138 	.byte	0
                            139 	.globl	_Positions_Arrow
   00D8                     140 _Positions_Arrow:
   00D8 3C                  141 	.byte	60
   00D9 C9                  142 	.byte	-55
   00DA 28                  143 	.byte	40
   00DB C9                  144 	.byte	-55
                            145 	.globl	_arrow
   00DC                     146 _arrow:
   00DC 00                  147 	.byte	0
   00DD 04                  148 	.byte	4
   00DE 00                  149 	.byte	0
   00DF FF                  150 	.byte	-1
   00E0 F6                  151 	.byte	-10
   00E1 0A                  152 	.byte	10
   00E2 FF                  153 	.byte	-1
   00E3 F6                  154 	.byte	-10
   00E4 F6                  155 	.byte	-10
   00E5 00                  156 	.byte	0
   00E6 0A                  157 	.byte	10
   00E7 0A                  158 	.byte	10
   00E8 FF                  159 	.byte	-1
   00E9 00                  160 	.byte	0
   00EA EC                  161 	.byte	-20
   00EB 01                  162 	.byte	1
   00EC 00                  163 	.byte	0
   00ED 00                  164 	.byte	0
                            165 	.globl	_draw_cross
   00EE                     166 _draw_cross:
   00EE 34 40         [ 6]  167 	pshs	u
   00F0 32 7C         [ 5]  168 	leas	-4,s
   00F2 E7 61         [ 5]  169 	stb	1,s
   00F4 BD F3 54      [ 8]  170 	jsr	___Reset0Ref
   00F7 C6 FF         [ 2]  171 	ldb	#-1
   00F9 D7 04         [ 4]  172 	stb	*_dp_VIA_t1_cnt_lo
   00FB C6 EB         [ 2]  173 	ldb	#-21
   00FD E7 E2         [ 6]  174 	stb	,-s
   00FF C6 FA         [ 2]  175 	ldb	#-6
   0101 BD 09 30      [ 8]  176 	jsr	__Moveto_d
   0104 32 61         [ 5]  177 	leas	1,s
   0106 E6 61         [ 5]  178 	ldb	1,s
   0108 4F            [ 2]  179 	clra		;zero_extendqihi: R:b -> R:d
   0109 58            [ 2]  180 	aslb
   010A 49            [ 2]  181 	rola
   010B CE 00 5F      [ 3]  182 	ldu	#_Positions_Cursor+1
   010E 30 CB         [ 8]  183 	leax	d,u
   0110 E6 84         [ 4]  184 	ldb	,x
   0112 E7 E4         [ 4]  185 	stb	,s
   0114 E6 61         [ 5]  186 	ldb	1,s
   0116 4F            [ 2]  187 	clra		;zero_extendqihi: R:b -> R:d
   0117 58            [ 2]  188 	aslb
   0118 49            [ 2]  189 	rola
   0119 CE 00 5E      [ 3]  190 	ldu	#_Positions_Cursor
   011C 30 CB         [ 8]  191 	leax	d,u
   011E E6 84         [ 4]  192 	ldb	,x
   0120 E7 63         [ 5]  193 	stb	3,s
   0122 E6 E4         [ 4]  194 	ldb	,s
   0124 E7 62         [ 5]  195 	stb	2,s
   0126 E6 63         [ 5]  196 	ldb	3,s
   0128 E7 E2         [ 6]  197 	stb	,-s
   012A E6 63         [ 5]  198 	ldb	3,s
   012C BD 09 30      [ 8]  199 	jsr	__Moveto_d
   012F 32 61         [ 5]  200 	leas	1,s
   0131 C6 60         [ 2]  201 	ldb	#96
   0133 D7 04         [ 4]  202 	stb	*_dp_VIA_t1_cnt_lo
   0135 8E 00 72      [ 3]  203 	ldx	#_cross
   0138 BD F4 10      [ 8]  204 	jsr	___Draw_VLp
   013B 32 64         [ 5]  205 	leas	4,s
   013D 35 C0         [ 7]  206 	puls	u,pc
                            207 	.globl	_Display_Gamefield
   013F                     208 _Display_Gamefield:
   013F BD F3 54      [ 8]  209 	jsr	___Reset0Ref
   0142 C6 FF         [ 2]  210 	ldb	#-1
   0144 D7 04         [ 4]  211 	stb	*_dp_VIA_t1_cnt_lo
   0146 C6 F1         [ 2]  212 	ldb	#-15
   0148 E7 E2         [ 6]  213 	stb	,-s
   014A 5F            [ 2]  214 	clrb
   014B BD 09 30      [ 8]  215 	jsr	__Moveto_d
   014E 32 61         [ 5]  216 	leas	1,s
   0150 8E 00 81      [ 3]  217 	ldx	#_Gamefield
   0153 BD F4 10      [ 8]  218 	jsr	___Draw_VLp
   0156 BD F3 54      [ 8]  219 	jsr	___Reset0Ref
   0159 6F E2         [ 8]  220 	clr	,-s
   015B 5F            [ 2]  221 	clrb
   015C BD 09 30      [ 8]  222 	jsr	__Moveto_d
   015F 32 61         [ 5]  223 	leas	1,s
   0161 8E 00 9C      [ 3]  224 	ldx	#_Brainright
   0164 BD F4 10      [ 8]  225 	jsr	___Draw_VLp
   0167 BD F3 54      [ 8]  226 	jsr	___Reset0Ref
   016A 6F E2         [ 8]  227 	clr	,-s
   016C 5F            [ 2]  228 	clrb
   016D BD 09 30      [ 8]  229 	jsr	__Moveto_d
   0170 32 61         [ 5]  230 	leas	1,s
   0172 8E 00 BA      [ 3]  231 	ldx	#_Brainleft
   0175 BD F4 10      [ 8]  232 	jsr	___Draw_VLp
   0178 39            [ 5]  233 	rts
                            234 	.globl	_Loadingbar
   0179                     235 _Loadingbar:
   0179 32 7F         [ 5]  236 	leas	-1,s
   017B E7 E4         [ 4]  237 	stb	,s
   017D BD F3 54      [ 8]  238 	jsr	___Reset0Ref
   0180 C6 7F         [ 2]  239 	ldb	#127
   0182 D7 04         [ 4]  240 	stb	*_dp_VIA_t1_cnt_lo
   0184 C6 46         [ 2]  241 	ldb	#70
   0186 E7 E2         [ 6]  242 	stb	,-s
   0188 C6 C4         [ 2]  243 	ldb	#-60
   018A BD 09 30      [ 8]  244 	jsr	__Moveto_d
   018D 32 61         [ 5]  245 	leas	1,s
   018F E6 E4         [ 4]  246 	ldb	,s
   0191 D7 04         [ 4]  247 	stb	*_dp_VIA_t1_cnt_lo
   0193 6F E2         [ 8]  248 	clr	,-s
   0195 C6 50         [ 2]  249 	ldb	#80
   0197 BD 09 26      [ 8]  250 	jsr	__Draw_Line_d
   019A 32 61         [ 5]  251 	leas	1,s
   019C BD F3 54      [ 8]  252 	jsr	___Reset0Ref
   019F C6 7F         [ 2]  253 	ldb	#127
   01A1 D7 04         [ 4]  254 	stb	*_dp_VIA_t1_cnt_lo
   01A3 C6 42         [ 2]  255 	ldb	#66
   01A5 E7 E2         [ 6]  256 	stb	,-s
   01A7 C6 C4         [ 2]  257 	ldb	#-60
   01A9 BD 09 30      [ 8]  258 	jsr	__Moveto_d
   01AC 32 61         [ 5]  259 	leas	1,s
   01AE E6 E4         [ 4]  260 	ldb	,s
   01B0 D7 04         [ 4]  261 	stb	*_dp_VIA_t1_cnt_lo
   01B2 6F E2         [ 8]  262 	clr	,-s
   01B4 C6 50         [ 2]  263 	ldb	#80
   01B6 BD 09 26      [ 8]  264 	jsr	__Draw_Line_d
   01B9 32 61         [ 5]  265 	leas	1,s
   01BB BD F3 54      [ 8]  266 	jsr	___Reset0Ref
   01BE C6 7F         [ 2]  267 	ldb	#127
   01C0 D7 04         [ 4]  268 	stb	*_dp_VIA_t1_cnt_lo
   01C2 C6 3E         [ 2]  269 	ldb	#62
   01C4 E7 E2         [ 6]  270 	stb	,-s
   01C6 C6 C4         [ 2]  271 	ldb	#-60
   01C8 BD 09 30      [ 8]  272 	jsr	__Moveto_d
   01CB 32 61         [ 5]  273 	leas	1,s
   01CD E6 E4         [ 4]  274 	ldb	,s
   01CF D7 04         [ 4]  275 	stb	*_dp_VIA_t1_cnt_lo
   01D1 6F E2         [ 8]  276 	clr	,-s
   01D3 C6 50         [ 2]  277 	ldb	#80
   01D5 BD 09 26      [ 8]  278 	jsr	__Draw_Line_d
   01D8 32 61         [ 5]  279 	leas	1,s
   01DA C6 FF         [ 2]  280 	ldb	#-1
   01DC D7 04         [ 4]  281 	stb	*_dp_VIA_t1_cnt_lo
   01DE 32 61         [ 5]  282 	leas	1,s
   01E0 39            [ 5]  283 	rts
                            284 	.globl	_draw_menu_arrow
   01E1                     285 _draw_menu_arrow:
   01E1 34 40         [ 6]  286 	pshs	u
   01E3 32 7C         [ 5]  287 	leas	-4,s
   01E5 E7 61         [ 5]  288 	stb	1,s
   01E7 BD F3 54      [ 8]  289 	jsr	___Reset0Ref
   01EA C6 7F         [ 2]  290 	ldb	#127
   01EC D7 04         [ 4]  291 	stb	*_dp_VIA_t1_cnt_lo
   01EE E6 61         [ 5]  292 	ldb	1,s
   01F0 1D            [ 2]  293 	sex		;extendqihi2: R:b -> R:d
   01F1 58            [ 2]  294 	aslb
   01F2 49            [ 2]  295 	rola
   01F3 CE 00 D9      [ 3]  296 	ldu	#_Positions_Arrow+1
   01F6 30 CB         [ 8]  297 	leax	d,u
   01F8 E6 84         [ 4]  298 	ldb	,x
   01FA E7 E4         [ 4]  299 	stb	,s
   01FC E6 61         [ 5]  300 	ldb	1,s
   01FE 1D            [ 2]  301 	sex		;extendqihi2: R:b -> R:d
   01FF 58            [ 2]  302 	aslb
   0200 49            [ 2]  303 	rola
   0201 CE 00 D8      [ 3]  304 	ldu	#_Positions_Arrow
   0204 30 CB         [ 8]  305 	leax	d,u
   0206 E6 84         [ 4]  306 	ldb	,x
   0208 E7 63         [ 5]  307 	stb	3,s
   020A E6 E4         [ 4]  308 	ldb	,s
   020C E7 62         [ 5]  309 	stb	2,s
   020E E6 63         [ 5]  310 	ldb	3,s
   0210 E7 E2         [ 6]  311 	stb	,-s
   0212 E6 63         [ 5]  312 	ldb	3,s
   0214 BD 09 30      [ 8]  313 	jsr	__Moveto_d
   0217 32 61         [ 5]  314 	leas	1,s
   0219 C6 60         [ 2]  315 	ldb	#96
   021B D7 04         [ 4]  316 	stb	*_dp_VIA_t1_cnt_lo
   021D 8E 00 DC      [ 3]  317 	ldx	#_arrow
   0220 BD F4 10      [ 8]  318 	jsr	___Draw_VLp
   0223 32 64         [ 5]  319 	leas	4,s
   0225 35 C0         [ 7]  320 	puls	u,pc
ASxxxx Assembler V05.50  (Motorola 6809)                                Page 1
Hexadecimal [16-Bits]                                 Tue May 13 04:43:08 2025

Symbol Table

    .__.$$$.       =   2710 L   |     .__.ABS.       =   0000 G
    .__.CPU.       =   0000 L   |     .__.H$L.       =   0001 L
  2 _Brainleft         005C GR  |   2 _Brainright        003E GR
  2 _Display_Gamef     00E1 GR  |   2 _Gamefield         0023 GR
  2 _Loadingbar        011B GR  |   2 _Positions_Arr     007A GR
  2 _Positions_Cur     0000 GR  |     __Draw_Line_d      **** GX
    __Moveto_d         **** GX  |     ___Draw_VLp        **** GX
    ___Reset0Ref       **** GX  |   2 _arrow             007E GR
  2 _cross             0014 GR  |     _dp_VIA_t1_cnt     **** GX
  2 _draw_cross        0090 GR  |   2 _draw_menu_arr     0183 GR

ASxxxx Assembler V05.50  (Motorola 6809)                                Page 2
Hexadecimal [16-Bits]                                 Tue May 13 04:43:08 2025

Area Table

[_CSEG]
   0 _CODE            size    0   flags C080
   2 .text            size  1C9   flags  100
[_DSEG]
   1 _DATA            size    0   flags C0C0

