                              1 ;;; gcc for m6809 : Mar 17 2019 13:25:32
                              2 ;;; 4.3.6 (gcc6809)
                              3 ;;; ABI version 1
                              4 ;;; -mabi=bx -mint8 -fomit-frame-pointer -O0
                              5 	.module	objects.c
                              6 	.area	.text
                              7 	.globl	_init_object
   0255                       8 _init_object:
   0255 32 7E         [ 5]    9 	leas	-2,s
   0257 AF E4         [ 5]   10 	stx	,s
   0259 6F F4         [ 9]   11 	clr	[,s]
   025B BD 03 5F      [ 8]   12 	jsr	__Random
   025E C4 7F         [ 2]   13 	andb	#127
   0260 CB 40         [ 2]   14 	addb	#64
   0262 AE E4         [ 5]   15 	ldx	,s
   0264 E7 01         [ 5]   16 	stb	1,x
   0266 BD 03 5F      [ 8]   17 	jsr	__Random
   0269 C4 7F         [ 2]   18 	andb	#127
   026B CB 40         [ 2]   19 	addb	#64
   026D AE E4         [ 5]   20 	ldx	,s
   026F E7 02         [ 5]   21 	stb	2,x
   0271 BD 03 5F      [ 8]   22 	jsr	__Random
   0274 C4 03         [ 2]   23 	andb	#3
   0276 CB FE         [ 2]   24 	addb	#-2
   0278 AE E4         [ 5]   25 	ldx	,s
   027A E7 03         [ 5]   26 	stb	3,x
   027C BD 03 5F      [ 8]   27 	jsr	__Random
   027F C4 03         [ 2]   28 	andb	#3
   0281 5A            [ 2]   29 	decb
   0282 AE E4         [ 5]   30 	ldx	,s
   0284 E7 04         [ 5]   31 	stb	4,x
   0286 32 62         [ 5]   32 	leas	2,s
   0288 39            [ 5]   33 	rts
                             34 	.globl	_vectors_player
   0289                      35 _vectors_player:
   0289 00                   36 	.byte	0
   028A 20                   37 	.byte	32
   028B E0                   38 	.byte	-32
   028C FF                   39 	.byte	-1
   028D 00                   40 	.byte	0
   028E 40                   41 	.byte	64
   028F FF                   42 	.byte	-1
   0290 C0                   43 	.byte	-64
   0291 00                   44 	.byte	0
   0292 FF                   45 	.byte	-1
   0293 00                   46 	.byte	0
   0294 C0                   47 	.byte	-64
   0295 FF                   48 	.byte	-1
   0296 40                   49 	.byte	64
   0297 00                   50 	.byte	0
   0298 01                   51 	.byte	1
   0299 00                   52 	.byte	0
   029A 00                   53 	.byte	0
                             54 	.globl	_draw_player
   029B                      55 _draw_player:
   029B BD F3 54      [ 8]   56 	jsr	___Reset0Ref
   029E C6 7F         [ 2]   57 	ldb	#127
   02A0 D7 04         [ 4]   58 	stb	*_dp_VIA_t1_cnt_lo
   02A2 C6 05         [ 2]   59 	ldb	#5
   02A4 E7 E2         [ 6]   60 	stb	,-s
   02A6 C6 05         [ 2]   61 	ldb	#5
   02A8 BD 03 F0      [ 8]   62 	jsr	__Moveto_d
   02AB 32 61         [ 5]   63 	leas	1,s
   02AD C6 22         [ 2]   64 	ldb	#34
   02AF D7 04         [ 4]   65 	stb	*_dp_VIA_t1_cnt_lo
   02B1 8E 02 89      [ 3]   66 	ldx	#_vectors_player
   02B4 BD F4 10      [ 8]   67 	jsr	___Draw_VLp
   02B7 39            [ 5]   68 	rts
                             69 	.globl	_handle_objects
   02B8                      70 _handle_objects:
   02B8 32 79         [ 5]   71 	leas	-7,s
   02BA AF 63         [ 6]   72 	stx	3,s
   02BC BD F3 54      [ 8]   73 	jsr	___Reset0Ref
   02BF C6 7F         [ 2]   74 	ldb	#127
   02C1 D7 04         [ 4]   75 	stb	*_dp_VIA_t1_cnt_lo
   02C3 AE 63         [ 6]   76 	ldx	3,s
   02C5 E6 01         [ 5]   77 	ldb	1,x
   02C7 E7 E4         [ 4]   78 	stb	,s
   02C9 AE 63         [ 6]   79 	ldx	3,s
   02CB E6 02         [ 5]   80 	ldb	2,x
   02CD E7 66         [ 5]   81 	stb	6,s
   02CF E6 E4         [ 4]   82 	ldb	,s
   02D1 E7 65         [ 5]   83 	stb	5,s
   02D3 E6 66         [ 5]   84 	ldb	6,s
   02D5 E7 E2         [ 6]   85 	stb	,-s
   02D7 E6 66         [ 5]   86 	ldb	6,s
   02D9 BD 03 F0      [ 8]   87 	jsr	__Moveto_d
   02DC 32 61         [ 5]   88 	leas	1,s
   02DE C6 22         [ 2]   89 	ldb	#34
   02E0 D7 04         [ 4]   90 	stb	*_dp_VIA_t1_cnt_lo
   02E2 8E 02 89      [ 3]   91 	ldx	#_vectors_player
   02E5 BD F4 10      [ 8]   92 	jsr	___Draw_VLp
   02E8 AE 63         [ 6]   93 	ldx	3,s
   02EA E6 01         [ 5]   94 	ldb	1,x
   02EC E7 61         [ 5]   95 	stb	1,s
   02EE AE 63         [ 6]   96 	ldx	3,s
   02F0 E6 03         [ 5]   97 	ldb	3,x
   02F2 EB 61         [ 5]   98 	addb	1,s
   02F4 AE 63         [ 6]   99 	ldx	3,s
   02F6 E7 01         [ 5]  100 	stb	1,x
   02F8 AE 63         [ 6]  101 	ldx	3,s
   02FA E6 02         [ 5]  102 	ldb	2,x
   02FC E7 62         [ 5]  103 	stb	2,s
   02FE AE 63         [ 6]  104 	ldx	3,s
   0300 E6 04         [ 5]  105 	ldb	4,x
   0302 EB 62         [ 5]  106 	addb	2,s
   0304 AE 63         [ 6]  107 	ldx	3,s
   0306 E7 02         [ 5]  108 	stb	2,x
   0308 32 67         [ 5]  109 	leas	7,s
   030A 39            [ 5]  110 	rts
ASxxxx Assembler V05.50  (Motorola 6809)                                Page 1
Hexadecimal [16-Bits]                                 Sun Apr  6 21:29:21 2025

Symbol Table

    .__.$$$.       =   2710 L   |     .__.ABS.       =   0000 G
    .__.CPU.       =   0000 L   |     .__.H$L.       =   0001 L
    __Moveto_d         **** GX  |     __Random           **** GX
    ___Draw_VLp        **** GX  |     ___Reset0Ref       **** GX
    _dp_VIA_t1_cnt     **** GX  |   2 _draw_player       0046 GR
  2 _handle_object     0063 GR  |   2 _init_object       0000 GR
  2 _vectors_playe     0034 GR

ASxxxx Assembler V05.50  (Motorola 6809)                                Page 2
Hexadecimal [16-Bits]                                 Sun Apr  6 21:29:21 2025

Area Table

[_CSEG]
   0 _CODE            size    0   flags C080
   2 .text            size   B6   flags  100
[_DSEG]
   1 _DATA            size    0   flags C0C0

