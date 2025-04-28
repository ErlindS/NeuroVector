                              1 ;;; gcc for m6809 : Mar 17 2019 13:25:32
                              2 ;;; 4.3.6 (gcc6809)
                              3 ;;; ABI version 1
                              4 ;;; -mabi=bx -mint8 -fomit-frame-pointer -O0
                              5 	.module	objects.c
                              6 	.area	.text
                              7 	.globl	_init_object
   0342                       8 _init_object:
   0342 32 7E         [ 5]    9 	leas	-2,s
   0344 AF E4         [ 5]   10 	stx	,s
   0346 6F F4         [ 9]   11 	clr	[,s]
   0348 BD 04 CE      [ 8]   12 	jsr	__Random
   034B C4 7F         [ 2]   13 	andb	#127
   034D CB 40         [ 2]   14 	addb	#64
   034F AE E4         [ 5]   15 	ldx	,s
   0351 E7 01         [ 5]   16 	stb	1,x
   0353 BD 04 CE      [ 8]   17 	jsr	__Random
   0356 C4 7F         [ 2]   18 	andb	#127
   0358 CB 40         [ 2]   19 	addb	#64
   035A AE E4         [ 5]   20 	ldx	,s
   035C E7 02         [ 5]   21 	stb	2,x
   035E BD 04 CE      [ 8]   22 	jsr	__Random
   0361 C4 03         [ 2]   23 	andb	#3
   0363 CB FE         [ 2]   24 	addb	#-2
   0365 AE E4         [ 5]   25 	ldx	,s
   0367 E7 03         [ 5]   26 	stb	3,x
   0369 BD 04 CE      [ 8]   27 	jsr	__Random
   036C C4 03         [ 2]   28 	andb	#3
   036E 5A            [ 2]   29 	decb
   036F AE E4         [ 5]   30 	ldx	,s
   0371 E7 04         [ 5]   31 	stb	4,x
   0373 32 62         [ 5]   32 	leas	2,s
   0375 39            [ 5]   33 	rts
                             34 	.globl	_Positions_Cursor
                             35 	.area	.data
   C88B                      36 _Positions_Cursor:
   C88B 00                   37 	.byte	0
   C88C 00                   38 	.byte	0
   C88D 20                   39 	.byte	32
   C88E E0                   40 	.byte	-32
   C88F 20                   41 	.byte	32
   C890 00                   42 	.byte	0
   C891 20                   43 	.byte	32
   C892 20                   44 	.byte	32
   C893 00                   45 	.byte	0
   C894 E0                   46 	.byte	-32
   C895 00                   47 	.byte	0
   C896 00                   48 	.byte	0
   C897 00                   49 	.byte	0
   C898 20                   50 	.byte	32
   C899 E0                   51 	.byte	-32
   C89A E0                   52 	.byte	-32
   C89B E0                   53 	.byte	-32
   C89C 00                   54 	.byte	0
   C89D E0                   55 	.byte	-32
   C89E 20                   56 	.byte	32
                             57 	.globl	_cross
                             58 	.area	.text
   0376                      59 _cross:
   0376 00                   60 	.byte	0
   0377 20                   61 	.byte	32
   0378 20                   62 	.byte	32
   0379 FF                   63 	.byte	-1
   037A E0                   64 	.byte	-32
   037B E0                   65 	.byte	-32
   037C 00                   66 	.byte	0
   037D 20                   67 	.byte	32
   037E 00                   68 	.byte	0
   037F FF                   69 	.byte	-1
   0380 E0                   70 	.byte	-32
   0381 20                   71 	.byte	32
   0382 01                   72 	.byte	1
   0383 00                   73 	.byte	0
   0384 00                   74 	.byte	0
                             75 	.globl	_cross_y
                             76 	.area	.data
   C89F                      77 _cross_y:
   C89F 46                   78 	.byte	70
                             79 	.globl	_cross_x
   C8A0                      80 _cross_x:
   C8A0 C4                   81 	.byte	-60
                             82 	.area	.text
                             83 	.globl	_Loadingbar
   0385                      84 _Loadingbar:
   0385 32 79         [ 5]   85 	leas	-7,s
   0387 E7 63         [ 5]   86 	stb	3,s
   0389 6F 64         [ 7]   87 	clr	4,s
   038B 20 40         [ 3]   88 	bra	L4
   038D                      89 L5:
   038D BD F3 54      [ 8]   90 	jsr	___Reset0Ref
   0390 C6 7F         [ 2]   91 	ldb	#127
   0392 D7 04         [ 4]   92 	stb	*_dp_VIA_t1_cnt_lo
   0394 F6 C8 A0      [ 5]   93 	ldb	_cross_x
   0397 E7 61         [ 5]   94 	stb	1,s
   0399 E6 64         [ 5]   95 	ldb	4,s
   039B E7 E4         [ 4]   96 	stb	,s
   039D E6 E4         [ 4]   97 	ldb	,s
   039F 58            [ 2]   98 	aslb
   03A0 58            [ 2]   99 	aslb
   03A1 E7 E4         [ 4]  100 	stb	,s
   03A3 E6 E4         [ 4]  101 	ldb	,s
   03A5 50            [ 2]  102 	negb
   03A6 E7 62         [ 5]  103 	stb	2,s
   03A8 F6 C8 9F      [ 5]  104 	ldb	_cross_y
   03AB EB 62         [ 5]  105 	addb	2,s
   03AD E7 66         [ 5]  106 	stb	6,s
   03AF E6 61         [ 5]  107 	ldb	1,s
   03B1 E7 65         [ 5]  108 	stb	5,s
   03B3 E6 66         [ 5]  109 	ldb	6,s
   03B5 E7 E2         [ 6]  110 	stb	,-s
   03B7 E6 66         [ 5]  111 	ldb	6,s
   03B9 BD 05 6E      [ 8]  112 	jsr	__Moveto_d
   03BC 32 61         [ 5]  113 	leas	1,s
   03BE E6 63         [ 5]  114 	ldb	3,s
   03C0 D7 04         [ 4]  115 	stb	*_dp_VIA_t1_cnt_lo
   03C2 6F E2         [ 8]  116 	clr	,-s
   03C4 C6 64         [ 2]  117 	ldb	#100
   03C6 BD 05 60      [ 8]  118 	jsr	__Draw_Line_d
   03C9 32 61         [ 5]  119 	leas	1,s
   03CB 6C 64         [ 7]  120 	inc	4,s
   03CD                     121 L4:
   03CD E6 64         [ 5]  122 	ldb	4,s
   03CF C1 02         [ 2]  123 	cmpb	#2	;cmpqi:
   03D1 2F BA         [ 3]  124 	ble	L5
   03D3 C6 FF         [ 2]  125 	ldb	#-1
   03D5 D7 04         [ 4]  126 	stb	*_dp_VIA_t1_cnt_lo
   03D7 32 67         [ 5]  127 	leas	7,s
   03D9 39            [ 5]  128 	rts
                            129 	.globl	_draw_cross
   03DA                     130 _draw_cross:
   03DA 34 40         [ 6]  131 	pshs	u
   03DC 32 7C         [ 5]  132 	leas	-4,s
   03DE E7 61         [ 5]  133 	stb	1,s
   03E0 BD F3 54      [ 8]  134 	jsr	___Reset0Ref
   03E3 C6 7F         [ 2]  135 	ldb	#127
   03E5 D7 04         [ 4]  136 	stb	*_dp_VIA_t1_cnt_lo
   03E7 E6 61         [ 5]  137 	ldb	1,s
   03E9 1D            [ 2]  138 	sex		;extendqihi2: R:b -> R:d
   03EA 58            [ 2]  139 	aslb
   03EB 49            [ 2]  140 	rola
   03EC CE C8 8C      [ 3]  141 	ldu	#_Positions_Cursor+1
   03EF 30 CB         [ 8]  142 	leax	d,u
   03F1 E6 84         [ 4]  143 	ldb	,x
   03F3 E7 E4         [ 4]  144 	stb	,s
   03F5 E6 61         [ 5]  145 	ldb	1,s
   03F7 1D            [ 2]  146 	sex		;extendqihi2: R:b -> R:d
   03F8 58            [ 2]  147 	aslb
   03F9 49            [ 2]  148 	rola
   03FA CE C8 8B      [ 3]  149 	ldu	#_Positions_Cursor
   03FD 30 CB         [ 8]  150 	leax	d,u
   03FF E6 84         [ 4]  151 	ldb	,x
   0401 E7 63         [ 5]  152 	stb	3,s
   0403 E6 E4         [ 4]  153 	ldb	,s
   0405 E7 62         [ 5]  154 	stb	2,s
   0407 E6 63         [ 5]  155 	ldb	3,s
   0409 E7 E2         [ 6]  156 	stb	,-s
   040B E6 63         [ 5]  157 	ldb	3,s
   040D BD 05 6E      [ 8]  158 	jsr	__Moveto_d
   0410 32 61         [ 5]  159 	leas	1,s
   0412 C6 22         [ 2]  160 	ldb	#34
   0414 D7 04         [ 4]  161 	stb	*_dp_VIA_t1_cnt_lo
   0416 8E 03 76      [ 3]  162 	ldx	#_cross
   0419 BD F4 10      [ 8]  163 	jsr	___Draw_VLp
   041C 32 64         [ 5]  164 	leas	4,s
   041E 35 C0         [ 7]  165 	puls	u,pc
ASxxxx Assembler V05.50  (Motorola 6809)                                Page 1
Hexadecimal [16-Bits]                                 Tue Apr 29 00:53:09 2025

Symbol Table

    .__.$$$.       =   2710 L   |     .__.ABS.       =   0000 G
    .__.CPU.       =   0000 L   |     .__.H$L.       =   0001 L
  2 L4                 008B R   |   2 L5                 004B R
  2 _Loadingbar        0043 GR  |   3 _Positions_Cur     0000 GR
    __Draw_Line_d      **** GX  |     __Moveto_d         **** GX
    __Random           **** GX  |     ___Draw_VLp        **** GX
    ___Reset0Ref       **** GX  |   2 _cross             0034 GR
  3 _cross_x           0015 GR  |   3 _cross_y           0014 GR
    _dp_VIA_t1_cnt     **** GX  |   2 _draw_cross        0098 GR
  2 _init_object       0000 GR

ASxxxx Assembler V05.50  (Motorola 6809)                                Page 2
Hexadecimal [16-Bits]                                 Tue Apr 29 00:53:09 2025

Area Table

[_CSEG]
   0 _CODE            size    0   flags C080
   2 .text            size   DE   flags  100
   3 .data            size   16   flags  100
[_DSEG]
   1 _DATA            size    0   flags C0C0

