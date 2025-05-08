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
                            139 	.globl	_draw_cross
   00D8                     140 _draw_cross:
   00D8 34 40         [ 6]  141 	pshs	u
   00DA 32 7C         [ 5]  142 	leas	-4,s
   00DC E7 61         [ 5]  143 	stb	1,s
   00DE BD F3 54      [ 8]  144 	jsr	___Reset0Ref
   00E1 C6 FF         [ 2]  145 	ldb	#-1
   00E3 D7 04         [ 4]  146 	stb	*_dp_VIA_t1_cnt_lo
   00E5 C6 EB         [ 2]  147 	ldb	#-21
   00E7 E7 E2         [ 6]  148 	stb	,-s
   00E9 C6 FA         [ 2]  149 	ldb	#-6
   00EB BD 07 0A      [ 8]  150 	jsr	__Moveto_d
   00EE 32 61         [ 5]  151 	leas	1,s
   00F0 E6 61         [ 5]  152 	ldb	1,s
   00F2 4F            [ 2]  153 	clra		;zero_extendqihi: R:b -> R:d
   00F3 58            [ 2]  154 	aslb
   00F4 49            [ 2]  155 	rola
   00F5 CE 00 5E      [ 3]  156 	ldu	#_Positions_Cursor
   00F8 30 CB         [ 8]  157 	leax	d,u
   00FA E6 84         [ 4]  158 	ldb	,x
   00FC E7 E4         [ 4]  159 	stb	,s
   00FE E6 61         [ 5]  160 	ldb	1,s
   0100 4F            [ 2]  161 	clra		;zero_extendqihi: R:b -> R:d
   0101 58            [ 2]  162 	aslb
   0102 49            [ 2]  163 	rola
   0103 CE 00 5F      [ 3]  164 	ldu	#_Positions_Cursor+1
   0106 30 CB         [ 8]  165 	leax	d,u
   0108 E6 84         [ 4]  166 	ldb	,x
   010A E7 63         [ 5]  167 	stb	3,s
   010C E6 E4         [ 4]  168 	ldb	,s
   010E E7 62         [ 5]  169 	stb	2,s
   0110 E6 63         [ 5]  170 	ldb	3,s
   0112 E7 E2         [ 6]  171 	stb	,-s
   0114 E6 63         [ 5]  172 	ldb	3,s
   0116 BD 07 0A      [ 8]  173 	jsr	__Moveto_d
   0119 32 61         [ 5]  174 	leas	1,s
   011B C6 60         [ 2]  175 	ldb	#96
   011D D7 04         [ 4]  176 	stb	*_dp_VIA_t1_cnt_lo
   011F 8E 00 72      [ 3]  177 	ldx	#_cross
   0122 BD F4 10      [ 8]  178 	jsr	___Draw_VLp
   0125 32 64         [ 5]  179 	leas	4,s
   0127 35 C0         [ 7]  180 	puls	u,pc
                            181 	.globl	_Display_Gamefield
   0129                     182 _Display_Gamefield:
   0129 BD F3 54      [ 8]  183 	jsr	___Reset0Ref
   012C C6 FF         [ 2]  184 	ldb	#-1
   012E D7 04         [ 4]  185 	stb	*_dp_VIA_t1_cnt_lo
   0130 C6 F1         [ 2]  186 	ldb	#-15
   0132 E7 E2         [ 6]  187 	stb	,-s
   0134 5F            [ 2]  188 	clrb
   0135 BD 07 0A      [ 8]  189 	jsr	__Moveto_d
   0138 32 61         [ 5]  190 	leas	1,s
   013A 8E 00 81      [ 3]  191 	ldx	#_Gamefield
   013D BD F4 10      [ 8]  192 	jsr	___Draw_VLp
   0140 BD F3 54      [ 8]  193 	jsr	___Reset0Ref
   0143 6F E2         [ 8]  194 	clr	,-s
   0145 5F            [ 2]  195 	clrb
   0146 BD 07 0A      [ 8]  196 	jsr	__Moveto_d
   0149 32 61         [ 5]  197 	leas	1,s
   014B 8E 00 9C      [ 3]  198 	ldx	#_Brainright
   014E BD F4 10      [ 8]  199 	jsr	___Draw_VLp
   0151 BD F3 54      [ 8]  200 	jsr	___Reset0Ref
   0154 6F E2         [ 8]  201 	clr	,-s
   0156 5F            [ 2]  202 	clrb
   0157 BD 07 0A      [ 8]  203 	jsr	__Moveto_d
   015A 32 61         [ 5]  204 	leas	1,s
   015C 8E 00 BA      [ 3]  205 	ldx	#_Brainleft
   015F BD F4 10      [ 8]  206 	jsr	___Draw_VLp
   0162 39            [ 5]  207 	rts
                            208 	.globl	_Loadingbar
   0163                     209 _Loadingbar:
   0163 32 7F         [ 5]  210 	leas	-1,s
   0165 E7 E4         [ 4]  211 	stb	,s
   0167 BD F3 54      [ 8]  212 	jsr	___Reset0Ref
   016A C6 7F         [ 2]  213 	ldb	#127
   016C D7 04         [ 4]  214 	stb	*_dp_VIA_t1_cnt_lo
   016E C6 46         [ 2]  215 	ldb	#70
   0170 E7 E2         [ 6]  216 	stb	,-s
   0172 C6 C4         [ 2]  217 	ldb	#-60
   0174 BD 07 0A      [ 8]  218 	jsr	__Moveto_d
   0177 32 61         [ 5]  219 	leas	1,s
   0179 E6 E4         [ 4]  220 	ldb	,s
   017B D7 04         [ 4]  221 	stb	*_dp_VIA_t1_cnt_lo
   017D 6F E2         [ 8]  222 	clr	,-s
   017F C6 50         [ 2]  223 	ldb	#80
   0181 BD 07 00      [ 8]  224 	jsr	__Draw_Line_d
   0184 32 61         [ 5]  225 	leas	1,s
   0186 BD F3 54      [ 8]  226 	jsr	___Reset0Ref
   0189 C6 7F         [ 2]  227 	ldb	#127
   018B D7 04         [ 4]  228 	stb	*_dp_VIA_t1_cnt_lo
   018D C6 42         [ 2]  229 	ldb	#66
   018F E7 E2         [ 6]  230 	stb	,-s
   0191 C6 C4         [ 2]  231 	ldb	#-60
   0193 BD 07 0A      [ 8]  232 	jsr	__Moveto_d
   0196 32 61         [ 5]  233 	leas	1,s
   0198 E6 E4         [ 4]  234 	ldb	,s
   019A D7 04         [ 4]  235 	stb	*_dp_VIA_t1_cnt_lo
   019C 6F E2         [ 8]  236 	clr	,-s
   019E C6 50         [ 2]  237 	ldb	#80
   01A0 BD 07 00      [ 8]  238 	jsr	__Draw_Line_d
   01A3 32 61         [ 5]  239 	leas	1,s
   01A5 BD F3 54      [ 8]  240 	jsr	___Reset0Ref
   01A8 C6 7F         [ 2]  241 	ldb	#127
   01AA D7 04         [ 4]  242 	stb	*_dp_VIA_t1_cnt_lo
   01AC C6 3E         [ 2]  243 	ldb	#62
   01AE E7 E2         [ 6]  244 	stb	,-s
   01B0 C6 C4         [ 2]  245 	ldb	#-60
   01B2 BD 07 0A      [ 8]  246 	jsr	__Moveto_d
   01B5 32 61         [ 5]  247 	leas	1,s
   01B7 E6 E4         [ 4]  248 	ldb	,s
   01B9 D7 04         [ 4]  249 	stb	*_dp_VIA_t1_cnt_lo
   01BB 6F E2         [ 8]  250 	clr	,-s
   01BD C6 50         [ 2]  251 	ldb	#80
   01BF BD 07 00      [ 8]  252 	jsr	__Draw_Line_d
   01C2 32 61         [ 5]  253 	leas	1,s
   01C4 C6 FF         [ 2]  254 	ldb	#-1
   01C6 D7 04         [ 4]  255 	stb	*_dp_VIA_t1_cnt_lo
   01C8 32 61         [ 5]  256 	leas	1,s
   01CA 39            [ 5]  257 	rts
ASxxxx Assembler V05.50  (Motorola 6809)                                Page 1
Hexadecimal [16-Bits]                                 Thu May  8 20:41:17 2025

Symbol Table

    .__.$$$.       =   2710 L   |     .__.ABS.       =   0000 G
    .__.CPU.       =   0000 L   |     .__.H$L.       =   0001 L
  2 _Brainleft         005C GR  |   2 _Brainright        003E GR
  2 _Display_Gamef     00CB GR  |   2 _Gamefield         0023 GR
  2 _Loadingbar        0105 GR  |   2 _Positions_Cur     0000 GR
    __Draw_Line_d      **** GX  |     __Moveto_d         **** GX
    ___Draw_VLp        **** GX  |     ___Reset0Ref       **** GX
  2 _cross             0014 GR  |     _dp_VIA_t1_cnt     **** GX
  2 _draw_cross        007A GR

ASxxxx Assembler V05.50  (Motorola 6809)                                Page 2
Hexadecimal [16-Bits]                                 Thu May  8 20:41:17 2025

Area Table

[_CSEG]
   0 _CODE            size    0   flags C080
   2 .text            size  16D   flags  100
[_DSEG]
   1 _DATA            size    0   flags C0C0

