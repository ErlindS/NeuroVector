                              1 ;;; gcc for m6809 : Mar 17 2019 13:25:32
                              2 ;;; 4.3.6 (gcc6809)
                              3 ;;; ABI version 1
                              4 ;;; -mabi=bx -mint8 -fomit-frame-pointer -O0
                              5 	.module	objects.c
                              6 	.globl	_Positions_Cursor
                              7 	.area	.data
   C8B9                       8 _Positions_Cursor:
   C8B9 00                    9 	.byte	0
   C8BA 00                   10 	.byte	0
   C8BB 10                   11 	.byte	16
   C8BC F0                   12 	.byte	-16
   C8BD 10                   13 	.byte	16
   C8BE 00                   14 	.byte	0
   C8BF 10                   15 	.byte	16
   C8C0 10                   16 	.byte	16
   C8C1 00                   17 	.byte	0
   C8C2 F0                   18 	.byte	-16
   C8C3 00                   19 	.byte	0
   C8C4 00                   20 	.byte	0
   C8C5 00                   21 	.byte	0
   C8C6 10                   22 	.byte	16
   C8C7 F0                   23 	.byte	-16
   C8C8 F0                   24 	.byte	-16
   C8C9 F0                   25 	.byte	-16
   C8CA 00                   26 	.byte	0
   C8CB F0                   27 	.byte	-16
   C8CC 10                   28 	.byte	16
                             29 	.globl	_cross
                             30 	.area	.text
   0556                      31 _cross:
   0556 00                   32 	.byte	0
   0557 20                   33 	.byte	32
   0558 20                   34 	.byte	32
   0559 FF                   35 	.byte	-1
   055A E0                   36 	.byte	-32
   055B E0                   37 	.byte	-32
   055C 00                   38 	.byte	0
   055D 20                   39 	.byte	32
   055E 00                   40 	.byte	0
   055F FF                   41 	.byte	-1
   0560 E0                   42 	.byte	-32
   0561 20                   43 	.byte	32
   0562 01                   44 	.byte	1
   0563 00                   45 	.byte	0
   0564 00                   46 	.byte	0
                             47 	.globl	_cross_y
                             48 	.area	.data
   C8CD                      49 _cross_y:
   C8CD 46                   50 	.byte	70
                             51 	.globl	_cross_x
   C8CE                      52 _cross_x:
   C8CE C4                   53 	.byte	-60
                             54 	.area	.text
                             55 	.globl	_Loadingbar
   0565                      56 _Loadingbar:
   0565 32 79         [ 5]   57 	leas	-7,s
   0567 E7 63         [ 5]   58 	stb	3,s
   0569 6F 64         [ 7]   59 	clr	4,s
   056B 20 40         [ 3]   60 	bra	L2
   056D                      61 L3:
   056D BD F3 54      [ 8]   62 	jsr	___Reset0Ref
   0570 C6 7F         [ 2]   63 	ldb	#127
   0572 D7 04         [ 4]   64 	stb	*_dp_VIA_t1_cnt_lo
   0574 F6 C8 CE      [ 5]   65 	ldb	_cross_x
   0577 E7 61         [ 5]   66 	stb	1,s
   0579 E6 64         [ 5]   67 	ldb	4,s
   057B E7 E4         [ 4]   68 	stb	,s
   057D E6 E4         [ 4]   69 	ldb	,s
   057F 58            [ 2]   70 	aslb
   0580 58            [ 2]   71 	aslb
   0581 E7 E4         [ 4]   72 	stb	,s
   0583 E6 E4         [ 4]   73 	ldb	,s
   0585 50            [ 2]   74 	negb
   0586 E7 62         [ 5]   75 	stb	2,s
   0588 F6 C8 CD      [ 5]   76 	ldb	_cross_y
   058B EB 62         [ 5]   77 	addb	2,s
   058D E7 66         [ 5]   78 	stb	6,s
   058F E6 61         [ 5]   79 	ldb	1,s
   0591 E7 65         [ 5]   80 	stb	5,s
   0593 E6 66         [ 5]   81 	ldb	6,s
   0595 E7 E2         [ 6]   82 	stb	,-s
   0597 E6 66         [ 5]   83 	ldb	6,s
   0599 BD 07 5F      [ 8]   84 	jsr	__Moveto_d
   059C 32 61         [ 5]   85 	leas	1,s
   059E E6 63         [ 5]   86 	ldb	3,s
   05A0 D7 04         [ 4]   87 	stb	*_dp_VIA_t1_cnt_lo
   05A2 6F E2         [ 8]   88 	clr	,-s
   05A4 C6 50         [ 2]   89 	ldb	#80
   05A6 BD 07 4C      [ 8]   90 	jsr	__Draw_Line_d
   05A9 32 61         [ 5]   91 	leas	1,s
   05AB 6C 64         [ 7]   92 	inc	4,s
   05AD                      93 L2:
   05AD E6 64         [ 5]   94 	ldb	4,s
   05AF C1 02         [ 2]   95 	cmpb	#2	;cmpqi:
   05B1 2F BA         [ 3]   96 	ble	L3
   05B3 C6 FF         [ 2]   97 	ldb	#-1
   05B5 D7 04         [ 4]   98 	stb	*_dp_VIA_t1_cnt_lo
   05B7 32 67         [ 5]   99 	leas	7,s
   05B9 39            [ 5]  100 	rts
                            101 	.globl	_draw_cross
   05BA                     102 _draw_cross:
   05BA 34 40         [ 6]  103 	pshs	u
   05BC 32 7C         [ 5]  104 	leas	-4,s
   05BE E7 61         [ 5]  105 	stb	1,s
   05C0 BD F3 54      [ 8]  106 	jsr	___Reset0Ref
   05C3 C6 FF         [ 2]  107 	ldb	#-1
   05C5 D7 04         [ 4]  108 	stb	*_dp_VIA_t1_cnt_lo
   05C7 C6 EB         [ 2]  109 	ldb	#-21
   05C9 E7 E2         [ 6]  110 	stb	,-s
   05CB C6 FA         [ 2]  111 	ldb	#-6
   05CD BD 07 5F      [ 8]  112 	jsr	__Moveto_d
   05D0 32 61         [ 5]  113 	leas	1,s
   05D2 E6 61         [ 5]  114 	ldb	1,s
   05D4 4F            [ 2]  115 	clra		;zero_extendqihi: R:b -> R:d
   05D5 58            [ 2]  116 	aslb
   05D6 49            [ 2]  117 	rola
   05D7 CE C8 BA      [ 3]  118 	ldu	#_Positions_Cursor+1
   05DA 30 CB         [ 8]  119 	leax	d,u
   05DC E6 84         [ 4]  120 	ldb	,x
   05DE E7 E4         [ 4]  121 	stb	,s
   05E0 E6 61         [ 5]  122 	ldb	1,s
   05E2 4F            [ 2]  123 	clra		;zero_extendqihi: R:b -> R:d
   05E3 58            [ 2]  124 	aslb
   05E4 49            [ 2]  125 	rola
   05E5 CE C8 B9      [ 3]  126 	ldu	#_Positions_Cursor
   05E8 30 CB         [ 8]  127 	leax	d,u
   05EA E6 84         [ 4]  128 	ldb	,x
   05EC E7 63         [ 5]  129 	stb	3,s
   05EE E6 E4         [ 4]  130 	ldb	,s
   05F0 E7 62         [ 5]  131 	stb	2,s
   05F2 E6 63         [ 5]  132 	ldb	3,s
   05F4 E7 E2         [ 6]  133 	stb	,-s
   05F6 E6 63         [ 5]  134 	ldb	3,s
   05F8 BD 07 5F      [ 8]  135 	jsr	__Moveto_d
   05FB 32 61         [ 5]  136 	leas	1,s
   05FD C6 60         [ 2]  137 	ldb	#96
   05FF D7 04         [ 4]  138 	stb	*_dp_VIA_t1_cnt_lo
   0601 8E 05 56      [ 3]  139 	ldx	#_cross
   0604 BD F4 10      [ 8]  140 	jsr	___Draw_VLp
   0607 32 64         [ 5]  141 	leas	4,s
   0609 35 C0         [ 7]  142 	puls	u,pc
ASxxxx Assembler V05.50  (Motorola 6809)                                Page 1
Hexadecimal [16-Bits]                                 Sat May  3 15:24:22 2025

Symbol Table

    .__.$$$.       =   2710 L   |     .__.ABS.       =   0000 G
    .__.CPU.       =   0000 L   |     .__.H$L.       =   0001 L
  3 L2                 0057 R   |   3 L3                 0017 R
  3 _Loadingbar        000F GR  |   2 _Positions_Cur     0000 GR
    __Draw_Line_d      **** GX  |     __Moveto_d         **** GX
    ___Draw_VLp        **** GX  |     ___Reset0Ref       **** GX
  3 _cross             0000 GR  |   2 _cross_x           0015 GR
  2 _cross_y           0014 GR  |     _dp_VIA_t1_cnt     **** GX
  3 _draw_cross        0064 GR

ASxxxx Assembler V05.50  (Motorola 6809)                                Page 2
Hexadecimal [16-Bits]                                 Sat May  3 15:24:22 2025

Area Table

[_CSEG]
   0 _CODE            size    0   flags C080
   2 .data            size   16   flags  100
   3 .text            size   B5   flags  100
[_DSEG]
   1 _DATA            size    0   flags C0C0

