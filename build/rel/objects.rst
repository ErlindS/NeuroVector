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
   C8BB 20                   11 	.byte	32
   C8BC E0                   12 	.byte	-32
   C8BD 20                   13 	.byte	32
   C8BE 00                   14 	.byte	0
   C8BF 20                   15 	.byte	32
   C8C0 20                   16 	.byte	32
   C8C1 00                   17 	.byte	0
   C8C2 E0                   18 	.byte	-32
   C8C3 00                   19 	.byte	0
   C8C4 00                   20 	.byte	0
   C8C5 00                   21 	.byte	0
   C8C6 20                   22 	.byte	32
   C8C7 E0                   23 	.byte	-32
   C8C8 E0                   24 	.byte	-32
   C8C9 E0                   25 	.byte	-32
   C8CA 00                   26 	.byte	0
   C8CB E0                   27 	.byte	-32
   C8CC 20                   28 	.byte	32
                             29 	.globl	_cross
                             30 	.area	.text
   0500                      31 _cross:
   0500 00                   32 	.byte	0
   0501 20                   33 	.byte	32
   0502 20                   34 	.byte	32
   0503 FF                   35 	.byte	-1
   0504 E0                   36 	.byte	-32
   0505 E0                   37 	.byte	-32
   0506 00                   38 	.byte	0
   0507 20                   39 	.byte	32
   0508 00                   40 	.byte	0
   0509 FF                   41 	.byte	-1
   050A E0                   42 	.byte	-32
   050B 20                   43 	.byte	32
   050C 01                   44 	.byte	1
   050D 00                   45 	.byte	0
   050E 00                   46 	.byte	0
                             47 	.globl	_cross_y
                             48 	.area	.data
   C8CD                      49 _cross_y:
   C8CD 46                   50 	.byte	70
                             51 	.globl	_cross_x
   C8CE                      52 _cross_x:
   C8CE C4                   53 	.byte	-60
                             54 	.area	.text
                             55 	.globl	_Loadingbar
   050F                      56 _Loadingbar:
   050F 32 79         [ 5]   57 	leas	-7,s
   0511 E7 63         [ 5]   58 	stb	3,s
   0513 6F 64         [ 7]   59 	clr	4,s
   0515 20 40         [ 3]   60 	bra	L2
   0517                      61 L3:
   0517 BD F3 54      [ 8]   62 	jsr	___Reset0Ref
   051A C6 7F         [ 2]   63 	ldb	#127
   051C D7 04         [ 4]   64 	stb	*_dp_VIA_t1_cnt_lo
   051E F6 C8 CE      [ 5]   65 	ldb	_cross_x
   0521 E7 61         [ 5]   66 	stb	1,s
   0523 E6 64         [ 5]   67 	ldb	4,s
   0525 E7 E4         [ 4]   68 	stb	,s
   0527 E6 E4         [ 4]   69 	ldb	,s
   0529 58            [ 2]   70 	aslb
   052A 58            [ 2]   71 	aslb
   052B E7 E4         [ 4]   72 	stb	,s
   052D E6 E4         [ 4]   73 	ldb	,s
   052F 50            [ 2]   74 	negb
   0530 E7 62         [ 5]   75 	stb	2,s
   0532 F6 C8 CD      [ 5]   76 	ldb	_cross_y
   0535 EB 62         [ 5]   77 	addb	2,s
   0537 E7 66         [ 5]   78 	stb	6,s
   0539 E6 61         [ 5]   79 	ldb	1,s
   053B E7 65         [ 5]   80 	stb	5,s
   053D E6 66         [ 5]   81 	ldb	6,s
   053F E7 E2         [ 6]   82 	stb	,-s
   0541 E6 66         [ 5]   83 	ldb	6,s
   0543 BD 07 08      [ 8]   84 	jsr	__Moveto_d
   0546 32 61         [ 5]   85 	leas	1,s
   0548 E6 63         [ 5]   86 	ldb	3,s
   054A D7 04         [ 4]   87 	stb	*_dp_VIA_t1_cnt_lo
   054C 6F E2         [ 8]   88 	clr	,-s
   054E C6 50         [ 2]   89 	ldb	#80
   0550 BD 06 F5      [ 8]   90 	jsr	__Draw_Line_d
   0553 32 61         [ 5]   91 	leas	1,s
   0555 6C 64         [ 7]   92 	inc	4,s
   0557                      93 L2:
   0557 E6 64         [ 5]   94 	ldb	4,s
   0559 C1 02         [ 2]   95 	cmpb	#2	;cmpqi:
   055B 2F BA         [ 3]   96 	ble	L3
   055D C6 FF         [ 2]   97 	ldb	#-1
   055F D7 04         [ 4]   98 	stb	*_dp_VIA_t1_cnt_lo
   0561 32 67         [ 5]   99 	leas	7,s
   0563 39            [ 5]  100 	rts
                            101 	.globl	_draw_cross
   0564                     102 _draw_cross:
   0564 34 40         [ 6]  103 	pshs	u
   0566 32 7C         [ 5]  104 	leas	-4,s
   0568 E7 61         [ 5]  105 	stb	1,s
   056A BD F3 54      [ 8]  106 	jsr	___Reset0Ref
   056D C6 7F         [ 2]  107 	ldb	#127
   056F D7 04         [ 4]  108 	stb	*_dp_VIA_t1_cnt_lo
   0571 E6 61         [ 5]  109 	ldb	1,s
   0573 4F            [ 2]  110 	clra		;zero_extendqihi: R:b -> R:d
   0574 58            [ 2]  111 	aslb
   0575 49            [ 2]  112 	rola
   0576 CE C8 BA      [ 3]  113 	ldu	#_Positions_Cursor+1
   0579 30 CB         [ 8]  114 	leax	d,u
   057B E6 84         [ 4]  115 	ldb	,x
   057D E7 E4         [ 4]  116 	stb	,s
   057F E6 61         [ 5]  117 	ldb	1,s
   0581 4F            [ 2]  118 	clra		;zero_extendqihi: R:b -> R:d
   0582 58            [ 2]  119 	aslb
   0583 49            [ 2]  120 	rola
   0584 CE C8 B9      [ 3]  121 	ldu	#_Positions_Cursor
   0587 30 CB         [ 8]  122 	leax	d,u
   0589 E6 84         [ 4]  123 	ldb	,x
   058B E7 63         [ 5]  124 	stb	3,s
   058D E6 E4         [ 4]  125 	ldb	,s
   058F E7 62         [ 5]  126 	stb	2,s
   0591 E6 63         [ 5]  127 	ldb	3,s
   0593 E7 E2         [ 6]  128 	stb	,-s
   0595 E6 63         [ 5]  129 	ldb	3,s
   0597 BD 07 08      [ 8]  130 	jsr	__Moveto_d
   059A 32 61         [ 5]  131 	leas	1,s
   059C C6 22         [ 2]  132 	ldb	#34
   059E D7 04         [ 4]  133 	stb	*_dp_VIA_t1_cnt_lo
   05A0 8E 05 00      [ 3]  134 	ldx	#_cross
   05A3 BD F4 10      [ 8]  135 	jsr	___Draw_VLp
   05A6 32 64         [ 5]  136 	leas	4,s
   05A8 35 C0         [ 7]  137 	puls	u,pc
ASxxxx Assembler V05.50  (Motorola 6809)                                Page 1
Hexadecimal [16-Bits]                                 Tue Apr 29 05:37:36 2025

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
Hexadecimal [16-Bits]                                 Tue Apr 29 05:37:36 2025

Area Table

[_CSEG]
   0 _CODE            size    0   flags C080
   2 .data            size   16   flags  100
   3 .text            size   AA   flags  100
[_DSEG]
   1 _DATA            size    0   flags C0C0

