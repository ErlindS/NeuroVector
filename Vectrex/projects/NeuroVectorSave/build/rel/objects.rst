                              1 ;;; gcc for m6809 : Mar 17 2019 13:25:32
                              2 ;;; 4.3.6 (gcc6809)
                              3 ;;; ABI version 1
                              4 ;;; -mabi=bx -mint8 -fomit-frame-pointer -O0
                              5 	.module	objects.c
                              6 	.area	.text
                              7 	.globl	_init_object
   049B                       8 _init_object:
   049B 32 7E         [ 5]    9 	leas	-2,s
   049D AF E4         [ 5]   10 	stx	,s
   049F 6F F4         [ 9]   11 	clr	[,s]
   04A1 BD 05 EE      [ 8]   12 	jsr	__Random
   04A4 C4 7F         [ 2]   13 	andb	#127
   04A6 CB 40         [ 2]   14 	addb	#64
   04A8 AE E4         [ 5]   15 	ldx	,s
   04AA E7 01         [ 5]   16 	stb	1,x
   04AC BD 05 EE      [ 8]   17 	jsr	__Random
   04AF C4 7F         [ 2]   18 	andb	#127
   04B1 CB 40         [ 2]   19 	addb	#64
   04B3 AE E4         [ 5]   20 	ldx	,s
   04B5 E7 02         [ 5]   21 	stb	2,x
   04B7 BD 05 EE      [ 8]   22 	jsr	__Random
   04BA C4 03         [ 2]   23 	andb	#3
   04BC CB FE         [ 2]   24 	addb	#-2
   04BE AE E4         [ 5]   25 	ldx	,s
   04C0 E7 03         [ 5]   26 	stb	3,x
   04C2 BD 05 EE      [ 8]   27 	jsr	__Random
   04C5 C4 03         [ 2]   28 	andb	#3
   04C7 5A            [ 2]   29 	decb
   04C8 AE E4         [ 5]   30 	ldx	,s
   04CA E7 04         [ 5]   31 	stb	4,x
   04CC 32 62         [ 5]   32 	leas	2,s
   04CE 39            [ 5]   33 	rts
                             34 	.globl	_vectors_player
   04CF                      35 _vectors_player:
   04CF 00                   36 	.byte	0
   04D0 30                   37 	.byte	48
   04D1 D0                   38 	.byte	-48
   04D2 FF                   39 	.byte	-1
   04D3 00                   40 	.byte	0
   04D4 60                   41 	.byte	96
   04D5 FF                   42 	.byte	-1
   04D6 A0                   43 	.byte	-96
   04D7 00                   44 	.byte	0
   04D8 FF                   45 	.byte	-1
   04D9 00                   46 	.byte	0
   04DA A0                   47 	.byte	-96
   04DB FF                   48 	.byte	-1
   04DC 60                   49 	.byte	96
   04DD 00                   50 	.byte	0
   04DE 01                   51 	.byte	1
   04DF 00                   52 	.byte	0
   04E0 00                   53 	.byte	0
                             54 	.globl	_cross
   04E1                      55 _cross:
   04E1 00                   56 	.byte	0
   04E2 20                   57 	.byte	32
   04E3 20                   58 	.byte	32
   04E4 FF                   59 	.byte	-1
   04E5 E0                   60 	.byte	-32
   04E6 E0                   61 	.byte	-32
   04E7 00                   62 	.byte	0
   04E8 20                   63 	.byte	32
   04E9 00                   64 	.byte	0
   04EA FF                   65 	.byte	-1
   04EB E0                   66 	.byte	-32
   04EC 20                   67 	.byte	32
   04ED 01                   68 	.byte	1
   04EE 00                   69 	.byte	0
   04EF 00                   70 	.byte	0
                             71 	.globl	_draw_player
   04F0                      72 _draw_player:
   04F0 BD F3 54      [ 8]   73 	jsr	___Reset0Ref
   04F3 C6 7F         [ 2]   74 	ldb	#127
   04F5 D7 04         [ 4]   75 	stb	*_dp_VIA_t1_cnt_lo
   04F7 C6 05         [ 2]   76 	ldb	#5
   04F9 E7 E2         [ 6]   77 	stb	,-s
   04FB C6 05         [ 2]   78 	ldb	#5
   04FD BD 06 7F      [ 8]   79 	jsr	__Moveto_d
   0500 32 61         [ 5]   80 	leas	1,s
   0502 C6 22         [ 2]   81 	ldb	#34
   0504 D7 04         [ 4]   82 	stb	*_dp_VIA_t1_cnt_lo
   0506 8E 04 CF      [ 3]   83 	ldx	#_vectors_player
   0509 BD F4 10      [ 8]   84 	jsr	___Draw_VLp
   050C 39            [ 5]   85 	rts
                             86 	.globl	_handle_objects
   050D                      87 _handle_objects:
   050D 32 79         [ 5]   88 	leas	-7,s
   050F AF 63         [ 6]   89 	stx	3,s
   0511 BD F3 54      [ 8]   90 	jsr	___Reset0Ref
   0514 C6 7F         [ 2]   91 	ldb	#127
   0516 D7 04         [ 4]   92 	stb	*_dp_VIA_t1_cnt_lo
   0518 AE 63         [ 6]   93 	ldx	3,s
   051A E6 01         [ 5]   94 	ldb	1,x
   051C E7 E4         [ 4]   95 	stb	,s
   051E AE 63         [ 6]   96 	ldx	3,s
   0520 E6 02         [ 5]   97 	ldb	2,x
   0522 E7 66         [ 5]   98 	stb	6,s
   0524 E6 E4         [ 4]   99 	ldb	,s
   0526 E7 65         [ 5]  100 	stb	5,s
   0528 E6 66         [ 5]  101 	ldb	6,s
   052A E7 E2         [ 6]  102 	stb	,-s
   052C E6 66         [ 5]  103 	ldb	6,s
   052E BD 06 7F      [ 8]  104 	jsr	__Moveto_d
   0531 32 61         [ 5]  105 	leas	1,s
   0533 C6 22         [ 2]  106 	ldb	#34
   0535 D7 04         [ 4]  107 	stb	*_dp_VIA_t1_cnt_lo
   0537 8E 04 CF      [ 3]  108 	ldx	#_vectors_player
   053A BD F4 10      [ 8]  109 	jsr	___Draw_VLp
   053D AE 63         [ 6]  110 	ldx	3,s
   053F E6 01         [ 5]  111 	ldb	1,x
   0541 E7 61         [ 5]  112 	stb	1,s
   0543 AE 63         [ 6]  113 	ldx	3,s
   0545 E6 03         [ 5]  114 	ldb	3,x
   0547 EB 61         [ 5]  115 	addb	1,s
   0549 AE 63         [ 6]  116 	ldx	3,s
   054B E7 01         [ 5]  117 	stb	1,x
   054D AE 63         [ 6]  118 	ldx	3,s
   054F E6 02         [ 5]  119 	ldb	2,x
   0551 E7 62         [ 5]  120 	stb	2,s
   0553 AE 63         [ 6]  121 	ldx	3,s
   0555 E6 04         [ 5]  122 	ldb	4,x
   0557 EB 62         [ 5]  123 	addb	2,s
   0559 AE 63         [ 6]  124 	ldx	3,s
   055B E7 02         [ 5]  125 	stb	2,x
   055D 32 67         [ 5]  126 	leas	7,s
   055F 39            [ 5]  127 	rts
                            128 	.globl	_draw_cross
   0560                     129 _draw_cross:
   0560 32 7A         [ 5]  130 	leas	-6,s
   0562 AF 62         [ 6]  131 	stx	2,s
   0564 BD F3 54      [ 8]  132 	jsr	___Reset0Ref
   0567 C6 7F         [ 2]  133 	ldb	#127
   0569 D7 04         [ 4]  134 	stb	*_dp_VIA_t1_cnt_lo
   056B E6 F8 02      [ 8]  135 	ldb	[2,s]
   056E E7 E4         [ 4]  136 	stb	,s
   0570 E6 E4         [ 4]  137 	ldb	,s
   0572 CB FC         [ 2]  138 	addb	#-4
   0574 E7 61         [ 5]  139 	stb	1,s
   0576 AE 62         [ 6]  140 	ldx	2,s
   0578 E6 01         [ 5]  141 	ldb	1,x
   057A CB FC         [ 2]  142 	addb	#-4
   057C E7 65         [ 5]  143 	stb	5,s
   057E E6 61         [ 5]  144 	ldb	1,s
   0580 E7 64         [ 5]  145 	stb	4,s
   0582 E6 65         [ 5]  146 	ldb	5,s
   0584 E7 E2         [ 6]  147 	stb	,-s
   0586 E6 65         [ 5]  148 	ldb	5,s
   0588 BD 06 7F      [ 8]  149 	jsr	__Moveto_d
   058B 32 61         [ 5]  150 	leas	1,s
   058D C6 22         [ 2]  151 	ldb	#34
   058F D7 04         [ 4]  152 	stb	*_dp_VIA_t1_cnt_lo
   0591 8E 04 E1      [ 3]  153 	ldx	#_cross
   0594 BD F4 10      [ 8]  154 	jsr	___Draw_VLp
   0597 32 66         [ 5]  155 	leas	6,s
   0599 39            [ 5]  156 	rts
ASxxxx Assembler V05.50  (Motorola 6809)                                Page 1
Hexadecimal [16-Bits]                                 Sun Apr  6 23:20:57 2025

Symbol Table

    .__.$$$.       =   2710 L   |     .__.ABS.       =   0000 G
    .__.CPU.       =   0000 L   |     .__.H$L.       =   0001 L
    __Moveto_d         **** GX  |     __Random           **** GX
    ___Draw_VLp        **** GX  |     ___Reset0Ref       **** GX
  2 _cross             0046 GR  |     _dp_VIA_t1_cnt     **** GX
  2 _draw_cross        00C5 GR  |   2 _draw_player       0055 GR
  2 _handle_object     0072 GR  |   2 _init_object       0000 GR
  2 _vectors_playe     0034 GR

ASxxxx Assembler V05.50  (Motorola 6809)                                Page 2
Hexadecimal [16-Bits]                                 Sun Apr  6 23:20:57 2025

Area Table

[_CSEG]
   0 _CODE            size    0   flags C080
   2 .text            size   FF   flags  100
[_DSEG]
   1 _DATA            size    0   flags C0C0

