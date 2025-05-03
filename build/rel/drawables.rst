                              1 ;;; gcc for m6809 : Mar 17 2019 13:25:32
                              2 ;;; 4.3.6 (gcc6809)
                              3 ;;; ABI version 1
                              4 ;;; -mabi=bx -mint8 -fomit-frame-pointer -O0
                              5 	.module	drawables.c
                              6 	.globl	_counter
                              7 	.area	.data
   C880                       8 _counter:
   C880 00                    9 	.byte	0
                             10 	.globl	_counterw
   C881                      11 _counterw:
   C881 03                   12 	.byte	3
                             13 	.globl	_Positions_Cursor
   C882                      14 _Positions_Cursor:
   C882 00                   15 	.byte	0
   C883 00                   16 	.byte	0
   C884 10                   17 	.byte	16
   C885 F0                   18 	.byte	-16
   C886 10                   19 	.byte	16
   C887 00                   20 	.byte	0
   C888 10                   21 	.byte	16
   C889 10                   22 	.byte	16
   C88A 00                   23 	.byte	0
   C88B F0                   24 	.byte	-16
   C88C 00                   25 	.byte	0
   C88D 00                   26 	.byte	0
   C88E 00                   27 	.byte	0
   C88F 10                   28 	.byte	16
   C890 F0                   29 	.byte	-16
   C891 F0                   30 	.byte	-16
   C892 F0                   31 	.byte	-16
   C893 00                   32 	.byte	0
   C894 F0                   33 	.byte	-16
   C895 10                   34 	.byte	16
                             35 	.globl	_cross
                             36 	.area	.text
   005E                      37 _cross:
   005E 00                   38 	.byte	0
   005F 20                   39 	.byte	32
   0060 20                   40 	.byte	32
   0061 FF                   41 	.byte	-1
   0062 E0                   42 	.byte	-32
   0063 E0                   43 	.byte	-32
   0064 00                   44 	.byte	0
   0065 20                   45 	.byte	32
   0066 00                   46 	.byte	0
   0067 FF                   47 	.byte	-1
   0068 E0                   48 	.byte	-32
   0069 20                   49 	.byte	32
   006A 01                   50 	.byte	1
   006B 00                   51 	.byte	0
   006C 00                   52 	.byte	0
                             53 	.globl	_draw_cross
   006D                      54 _draw_cross:
   006D 34 40         [ 6]   55 	pshs	u
   006F 32 7C         [ 5]   56 	leas	-4,s
   0071 E7 61         [ 5]   57 	stb	1,s
   0073 BD F3 54      [ 8]   58 	jsr	___Reset0Ref
   0076 C6 FF         [ 2]   59 	ldb	#-1
   0078 D7 04         [ 4]   60 	stb	*_dp_VIA_t1_cnt_lo
   007A C6 EB         [ 2]   61 	ldb	#-21
   007C E7 E2         [ 6]   62 	stb	,-s
   007E C6 FA         [ 2]   63 	ldb	#-6
   0080 BD 07 36      [ 8]   64 	jsr	__Moveto_d
   0083 32 61         [ 5]   65 	leas	1,s
   0085 E6 61         [ 5]   66 	ldb	1,s
   0087 4F            [ 2]   67 	clra		;zero_extendqihi: R:b -> R:d
   0088 58            [ 2]   68 	aslb
   0089 49            [ 2]   69 	rola
   008A CE C8 82      [ 3]   70 	ldu	#_Positions_Cursor
   008D 30 CB         [ 8]   71 	leax	d,u
   008F E6 84         [ 4]   72 	ldb	,x
   0091 E7 E4         [ 4]   73 	stb	,s
   0093 E6 61         [ 5]   74 	ldb	1,s
   0095 4F            [ 2]   75 	clra		;zero_extendqihi: R:b -> R:d
   0096 58            [ 2]   76 	aslb
   0097 49            [ 2]   77 	rola
   0098 CE C8 83      [ 3]   78 	ldu	#_Positions_Cursor+1
   009B 30 CB         [ 8]   79 	leax	d,u
   009D E6 84         [ 4]   80 	ldb	,x
   009F E7 63         [ 5]   81 	stb	3,s
   00A1 E6 E4         [ 4]   82 	ldb	,s
   00A3 E7 62         [ 5]   83 	stb	2,s
   00A5 E6 63         [ 5]   84 	ldb	3,s
   00A7 E7 E2         [ 6]   85 	stb	,-s
   00A9 E6 63         [ 5]   86 	ldb	3,s
   00AB BD 07 36      [ 8]   87 	jsr	__Moveto_d
   00AE 32 61         [ 5]   88 	leas	1,s
   00B0 C6 60         [ 2]   89 	ldb	#96
   00B2 D7 04         [ 4]   90 	stb	*_dp_VIA_t1_cnt_lo
   00B4 8E 00 5E      [ 3]   91 	ldx	#_cross
   00B7 BD F4 10      [ 8]   92 	jsr	___Draw_VLp
   00BA 32 64         [ 5]   93 	leas	4,s
   00BC 35 C0         [ 7]   94 	puls	u,pc
                             95 	.globl	_Gamefield
   00BE                      96 _Gamefield:
   00BE 00                   97 	.byte	0
   00BF 18                   98 	.byte	24
   00C0 F8                   99 	.byte	-8
   00C1 FF                  100 	.byte	-1
   00C2 D0                  101 	.byte	-48
   00C3 00                  102 	.byte	0
   00C4 00                  103 	.byte	0
   00C5 00                  104 	.byte	0
   00C6 10                  105 	.byte	16
   00C7 FF                  106 	.byte	-1
   00C8 30                  107 	.byte	48
   00C9 00                  108 	.byte	0
   00CA 00                  109 	.byte	0
   00CB F0                  110 	.byte	-16
   00CC 10                  111 	.byte	16
   00CD FF                  112 	.byte	-1
   00CE 00                  113 	.byte	0
   00CF D0                  114 	.byte	-48
   00D0 00                  115 	.byte	0
   00D1 F0                  116 	.byte	-16
   00D2 00                  117 	.byte	0
   00D3 FF                  118 	.byte	-1
   00D4 00                  119 	.byte	0
   00D5 30                  120 	.byte	48
   00D6 01                  121 	.byte	1
   00D7 00                  122 	.byte	0
   00D8 00                  123 	.byte	0
                            124 	.globl	_Brainright
   00D9                     125 _Brainright:
   00D9 00                  126 	.byte	0
   00DA D3                  127 	.byte	-45
   00DB 00                  128 	.byte	0
   00DC FF                  129 	.byte	-1
   00DD FB                  130 	.byte	-5
   00DE 05                  131 	.byte	5
   00DF FF                  132 	.byte	-1
   00E0 01                  133 	.byte	1
   00E1 0F                  134 	.byte	15
   00E2 FF                  135 	.byte	-1
   00E3 0A                  136 	.byte	10
   00E4 07                  137 	.byte	7
   00E5 FF                  138 	.byte	-1
   00E6 0A                  139 	.byte	10
   00E7 05                  140 	.byte	5
   00E8 FF                  141 	.byte	-1
   00E9 2D                  142 	.byte	45
   00EA FF                  143 	.byte	-1
   00EB FF                  144 	.byte	-1
   00EC 05                  145 	.byte	5
   00ED F6                  146 	.byte	-10
   00EE FF                  147 	.byte	-1
   00EF 00                  148 	.byte	0
   00F0 F6                  149 	.byte	-10
   00F1 FF                  150 	.byte	-1
   00F2 FB                  151 	.byte	-5
   00F3 F6                  152 	.byte	-10
   00F4 01                  153 	.byte	1
   00F5 00                  154 	.byte	0
   00F6 00                  155 	.byte	0
                            156 	.globl	_Brainleft
   00F7                     157 _Brainleft:
   00F7 00                  158 	.byte	0
   00F8 D3                  159 	.byte	-45
   00F9 00                  160 	.byte	0
   00FA FF                  161 	.byte	-1
   00FB FB                  162 	.byte	-5
   00FC FB                  163 	.byte	-5
   00FD FF                  164 	.byte	-1
   00FE 01                  165 	.byte	1
   00FF F1                  166 	.byte	-15
   0100 FF                  167 	.byte	-1
   0101 0A                  168 	.byte	10
   0102 F9                  169 	.byte	-7
   0103 FF                  170 	.byte	-1
   0104 0A                  171 	.byte	10
   0105 FB                  172 	.byte	-5
   0106 FF                  173 	.byte	-1
   0107 2D                  174 	.byte	45
   0108 01                  175 	.byte	1
   0109 FF                  176 	.byte	-1
   010A 05                  177 	.byte	5
   010B 0A                  178 	.byte	10
   010C FF                  179 	.byte	-1
   010D 00                  180 	.byte	0
   010E 0A                  181 	.byte	10
   010F FF                  182 	.byte	-1
   0110 FB                  183 	.byte	-5
   0111 0A                  184 	.byte	10
   0112 01                  185 	.byte	1
   0113 00                  186 	.byte	0
   0114 00                  187 	.byte	0
                            188 	.globl	_Display_Gamefield
   0115                     189 _Display_Gamefield:
   0115 BD F3 54      [ 8]  190 	jsr	___Reset0Ref
   0118 C6 FF         [ 2]  191 	ldb	#-1
   011A D7 04         [ 4]  192 	stb	*_dp_VIA_t1_cnt_lo
   011C C6 F1         [ 2]  193 	ldb	#-15
   011E E7 E2         [ 6]  194 	stb	,-s
   0120 5F            [ 2]  195 	clrb
   0121 BD 07 36      [ 8]  196 	jsr	__Moveto_d
   0124 32 61         [ 5]  197 	leas	1,s
   0126 8E 00 BE      [ 3]  198 	ldx	#_Gamefield
   0129 BD F4 10      [ 8]  199 	jsr	___Draw_VLp
   012C BD F3 54      [ 8]  200 	jsr	___Reset0Ref
   012F 6F E2         [ 8]  201 	clr	,-s
   0131 5F            [ 2]  202 	clrb
   0132 BD 07 36      [ 8]  203 	jsr	__Moveto_d
   0135 32 61         [ 5]  204 	leas	1,s
   0137 8E 00 D9      [ 3]  205 	ldx	#_Brainright
   013A BD F4 10      [ 8]  206 	jsr	___Draw_VLp
   013D BD F3 54      [ 8]  207 	jsr	___Reset0Ref
   0140 6F E2         [ 8]  208 	clr	,-s
   0142 5F            [ 2]  209 	clrb
   0143 BD 07 36      [ 8]  210 	jsr	__Moveto_d
   0146 32 61         [ 5]  211 	leas	1,s
   0148 8E 00 F7      [ 3]  212 	ldx	#_Brainleft
   014B BD F4 10      [ 8]  213 	jsr	___Draw_VLp
   014E 39            [ 5]  214 	rts
                            215 	.globl	_Loadingbar
   014F                     216 _Loadingbar:
   014F 32 7C         [ 5]  217 	leas	-4,s
   0151 E7 61         [ 5]  218 	stb	1,s
   0153 6F 62         [ 7]  219 	clr	2,s
   0155 20 32         [ 3]  220 	bra	L6
   0157                     221 L7:
   0157 BD F3 54      [ 8]  222 	jsr	___Reset0Ref
   015A C6 7F         [ 2]  223 	ldb	#127
   015C D7 04         [ 4]  224 	stb	*_dp_VIA_t1_cnt_lo
   015E E6 62         [ 5]  225 	ldb	2,s
   0160 E7 E4         [ 4]  226 	stb	,s
   0162 E6 E4         [ 4]  227 	ldb	,s
   0164 58            [ 2]  228 	aslb
   0165 58            [ 2]  229 	aslb
   0166 E7 E4         [ 4]  230 	stb	,s
   0168 E6 E4         [ 4]  231 	ldb	,s
   016A 50            [ 2]  232 	negb
   016B CB 46         [ 2]  233 	addb	#70
   016D E7 63         [ 5]  234 	stb	3,s
   016F E6 63         [ 5]  235 	ldb	3,s
   0171 E7 E2         [ 6]  236 	stb	,-s
   0173 C6 C4         [ 2]  237 	ldb	#-60
   0175 BD 07 36      [ 8]  238 	jsr	__Moveto_d
   0178 32 61         [ 5]  239 	leas	1,s
   017A E6 61         [ 5]  240 	ldb	1,s
   017C D7 04         [ 4]  241 	stb	*_dp_VIA_t1_cnt_lo
   017E 6F E2         [ 8]  242 	clr	,-s
   0180 C6 50         [ 2]  243 	ldb	#80
   0182 BD 07 23      [ 8]  244 	jsr	__Draw_Line_d
   0185 32 61         [ 5]  245 	leas	1,s
   0187 6C 62         [ 7]  246 	inc	2,s
   0189                     247 L6:
   0189 E6 62         [ 5]  248 	ldb	2,s
   018B C1 02         [ 2]  249 	cmpb	#2	;cmpqi:
   018D 2F C8         [ 3]  250 	ble	L7
   018F C6 FF         [ 2]  251 	ldb	#-1
   0191 D7 04         [ 4]  252 	stb	*_dp_VIA_t1_cnt_lo
   0193 32 64         [ 5]  253 	leas	4,s
   0195 39            [ 5]  254 	rts
ASxxxx Assembler V05.50  (Motorola 6809)                                Page 1
Hexadecimal [16-Bits]                                 Sun May  4 00:01:53 2025

Symbol Table

    .__.$$$.       =   2710 L   |     .__.ABS.       =   0000 G
    .__.CPU.       =   0000 L   |     .__.H$L.       =   0001 L
  3 L6                 012B R   |   3 L7                 00F9 R
  3 _Brainleft         0099 GR  |   3 _Brainright        007B GR
  3 _Display_Gamef     00B7 GR  |   3 _Gamefield         0060 GR
  3 _Loadingbar        00F1 GR  |   2 _Positions_Cur     0002 GR
    __Draw_Line_d      **** GX  |     __Moveto_d         **** GX
    ___Draw_VLp        **** GX  |     ___Reset0Ref       **** GX
  2 _counter           0000 GR  |   2 _counterw          0001 GR
  3 _cross             0000 GR  |     _dp_VIA_t1_cnt     **** GX
  3 _draw_cross        000F GR

ASxxxx Assembler V05.50  (Motorola 6809)                                Page 2
Hexadecimal [16-Bits]                                 Sun May  4 00:01:53 2025

Area Table

[_CSEG]
   0 _CODE            size    0   flags C080
   2 .data            size   16   flags  100
   3 .text            size  138   flags  100
[_DSEG]
   1 _DATA            size    0   flags C0C0

