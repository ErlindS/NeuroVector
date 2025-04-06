                              1 ;;; gcc for m6809 : Mar 17 2019 13:25:32
                              2 ;;; 4.3.6 (gcc6809)
                              3 ;;; ABI version 1
                              4 ;;; -mabi=bx -mint8 -fomit-frame-pointer -O0
                              5 	.module	enemy.c
                              6 	.globl	_enemies
                              7 	.area	.data
   C880                       8 _enemies:
   C880 01                    9 	.byte	1
   C881 00                   10 	.byte	0
   C882 00                   11 	.byte	0
   C883 00                   12 	.byte	0
   C884 00                   13 	.byte	0
   C885 01                   14 	.byte	1
   C886 00                   15 	.byte	0
   C887 00                   16 	.byte	0
   C888 00                   17 	.byte	0
   C889 00                   18 	.byte	0
                             19 	.globl	_vectors_enemy
                             20 	.area	.text
   00AA                      21 _vectors_enemy:
   00AA 00                   22 	.byte	0
   00AB 10                   23 	.byte	16
   00AC F0                   24 	.byte	-16
   00AD FF                   25 	.byte	-1
   00AE 20                   26 	.byte	32
   00AF 10                   27 	.byte	16
   00B0 FF                   28 	.byte	-1
   00B1 E0                   29 	.byte	-32
   00B2 10                   30 	.byte	16
   00B3 FF                   31 	.byte	-1
   00B4 F0                   32 	.byte	-16
   00B5 20                   33 	.byte	32
   00B6 FF                   34 	.byte	-1
   00B7 F0                   35 	.byte	-16
   00B8 E0                   36 	.byte	-32
   00B9 FF                   37 	.byte	-1
   00BA E0                   38 	.byte	-32
   00BB F0                   39 	.byte	-16
   00BC FF                   40 	.byte	-1
   00BD 20                   41 	.byte	32
   00BE F0                   42 	.byte	-16
   00BF FF                   43 	.byte	-1
   00C0 10                   44 	.byte	16
   00C1 E0                   45 	.byte	-32
   00C2 FF                   46 	.byte	-1
   00C3 10                   47 	.byte	16
   00C4 20                   48 	.byte	32
   00C5 01                   49 	.byte	1
   00C6 00                   50 	.byte	0
   00C7 00                   51 	.byte	0
                             52 	.globl	_draw_enemy
   00C8                      53 _draw_enemy:
   00C8 32 7B         [ 5]   54 	leas	-5,s
   00CA AF 61         [ 6]   55 	stx	1,s
   00CC BD F3 54      [ 8]   56 	jsr	___Reset0Ref
   00CF C6 7F         [ 2]   57 	ldb	#127
   00D1 D7 04         [ 4]   58 	stb	*_dp_VIA_t1_cnt_lo
   00D3 AE 61         [ 6]   59 	ldx	1,s
   00D5 E6 02         [ 5]   60 	ldb	2,x
   00D7 E7 E4         [ 4]   61 	stb	,s
   00D9 AE 61         [ 6]   62 	ldx	1,s
   00DB E6 01         [ 5]   63 	ldb	1,x
   00DD E7 64         [ 5]   64 	stb	4,s
   00DF E6 E4         [ 4]   65 	ldb	,s
   00E1 E7 63         [ 5]   66 	stb	3,s
   00E3 E6 64         [ 5]   67 	ldb	4,s
   00E5 E7 E2         [ 6]   68 	stb	,-s
   00E7 E6 64         [ 5]   69 	ldb	4,s
   00E9 BD 08 B8      [ 8]   70 	jsr	__Moveto_d
   00EC 32 61         [ 5]   71 	leas	1,s
   00EE C6 22         [ 2]   72 	ldb	#34
   00F0 D7 04         [ 4]   73 	stb	*_dp_VIA_t1_cnt_lo
   00F2 8E 00 AA      [ 3]   74 	ldx	#_vectors_enemy
   00F5 BD F4 10      [ 8]   75 	jsr	___Draw_VLp
   00F8 32 65         [ 5]   76 	leas	5,s
   00FA 39            [ 5]   77 	rts
                             78 	.globl	_check_enemy
   00FB                      79 _check_enemy:
   00FB 32 7A         [ 5]   80 	leas	-6,s
   00FD AF 64         [ 6]   81 	stx	4,s
   00FF AE 64         [ 6]   82 	ldx	4,s
   0101 E6 02         [ 5]   83 	ldb	2,x
   0103 E7 E4         [ 4]   84 	stb	,s
   0105 AE 64         [ 6]   85 	ldx	4,s
   0107 E6 01         [ 5]   86 	ldb	1,x
   0109 E7 61         [ 5]   87 	stb	1,s
   010B F6 C8 AC      [ 5]   88 	ldb	_player+2
   010E E7 62         [ 5]   89 	stb	2,s
   0110 F6 C8 AB      [ 5]   90 	ldb	_player+1
   0113 E7 63         [ 5]   91 	stb	3,s
   0115 C6 08         [ 2]   92 	ldb	#8
   0117 E7 E2         [ 6]   93 	stb	,-s
   0119 C6 08         [ 2]   94 	ldb	#8
   011B E7 E2         [ 6]   95 	stb	,-s
   011D E6 62         [ 5]   96 	ldb	2,s
   011F 34 04         [ 6]   97 	pshs	b
   0121 E6 64         [ 5]   98 	ldb	4,s
   0123 34 04         [ 6]   99 	pshs	b
   0125 E6 66         [ 5]  100 	ldb	6,s
   0127 34 04         [ 6]  101 	pshs	b
   0129 E6 68         [ 5]  102 	ldb	8,s
   012B BD 00 5B      [ 8]  103 	jsr	_check_collision
   012E 32 65         [ 5]  104 	leas	5,s
   0130 5D            [ 2]  105 	tstb
   0131 27 09         [ 3]  106 	beq	L5
   0133 8E 07 98      [ 3]  107 	ldx	#_bang
   0136 BD 07 EC      [ 8]  108 	jsr	_play_explosion
   0139 7F C8 AA      [ 7]  109 	clr	_player
   013C                     110 L5:
   013C 32 66         [ 5]  111 	leas	6,s
   013E 39            [ 5]  112 	rts
                            113 	.globl	_init_enemies
   013F                     114 _init_enemies:
   013F 32 7D         [ 5]  115 	leas	-3,s
   0141 6F 62         [ 7]  116 	clr	2,s
   0143 20 1E         [ 3]  117 	bra	L7
   0145                     118 L8:
   0145 E6 62         [ 5]  119 	ldb	2,s
   0147 4F            [ 2]  120 	clra		;zero_extendqihi: R:b -> R:d
   0148 1F 01         [ 6]  121 	tfr	d,x
   014A AF E4         [ 5]  122 	stx	,s
   014C EC E4         [ 5]  123 	ldd	,s
   014E 58            [ 2]  124 	aslb
   014F 49            [ 2]  125 	rola
   0150 58            [ 2]  126 	aslb
   0151 49            [ 2]  127 	rola
   0152 ED E4         [ 5]  128 	std	,s
   0154 1E 01         [ 8]  129 	exg	d,x
   0156 E3 E4         [ 6]  130 	addd	,s; addhi3,3
   0158 1E 01         [ 8]  131 	exg	d,x
   015A 30 89 C8 80   [ 8]  132 	leax	_enemies,x
   015E BD 06 5C      [ 8]  133 	jsr	_init_object
   0161 6C 62         [ 7]  134 	inc	2,s
   0163                     135 L7:
   0163 E6 62         [ 5]  136 	ldb	2,s
   0165 C1 01         [ 2]  137 	cmpb	#1	;cmpqi:
   0167 23 DC         [ 3]  138 	bls	L8
   0169 32 63         [ 5]  139 	leas	3,s
   016B 39            [ 5]  140 	rts
                            141 	.globl	_handle_enemies
   016C                     142 _handle_enemies:
   016C 34 40         [ 6]  143 	pshs	u
   016E 32 77         [ 5]  144 	leas	-9,s
   0170 6F 68         [ 7]  145 	clr	8,s
   0172 16 00 76      [ 5]  146 	lbra	L11
   0175                     147 L13:
   0175 E6 68         [ 5]  148 	ldb	8,s
   0177 4F            [ 2]  149 	clra		;zero_extendqihi: R:b -> R:d
   0178 1F 01         [ 6]  150 	tfr	d,x
   017A AF 66         [ 6]  151 	stx	6,s
   017C EC 66         [ 6]  152 	ldd	6,s
   017E 58            [ 2]  153 	aslb
   017F 49            [ 2]  154 	rola
   0180 58            [ 2]  155 	aslb
   0181 49            [ 2]  156 	rola
   0182 ED 66         [ 6]  157 	std	6,s
   0184 EC 66         [ 6]  158 	ldd	6,s
   0186 30 8B         [ 8]  159 	leax	d,x
   0188 AF 66         [ 6]  160 	stx	6,s
   018A EE 66         [ 6]  161 	ldu	6,s
   018C 30 C9 C8 80   [ 8]  162 	leax	_enemies,u
   0190 E6 84         [ 4]  163 	ldb	,x
   0192 5D            [ 2]  164 	tstb
   0193 26 54         [ 3]  165 	bne	L12
   0195 E6 68         [ 5]  166 	ldb	8,s
   0197 4F            [ 2]  167 	clra		;zero_extendqihi: R:b -> R:d
   0198 1F 01         [ 6]  168 	tfr	d,x
   019A AF 64         [ 6]  169 	stx	4,s
   019C EC 64         [ 6]  170 	ldd	4,s
   019E 58            [ 2]  171 	aslb
   019F 49            [ 2]  172 	rola
   01A0 58            [ 2]  173 	aslb
   01A1 49            [ 2]  174 	rola
   01A2 ED 64         [ 6]  175 	std	4,s
   01A4 1E 01         [ 8]  176 	exg	d,x
   01A6 E3 64         [ 7]  177 	addd	4,s; addhi3,3
   01A8 1E 01         [ 8]  178 	exg	d,x
   01AA 30 89 C8 80   [ 8]  179 	leax	_enemies,x
   01AE BD 06 90      [ 8]  180 	jsr	_move_object
   01B1 E6 68         [ 5]  181 	ldb	8,s
   01B3 4F            [ 2]  182 	clra		;zero_extendqihi: R:b -> R:d
   01B4 1F 01         [ 6]  183 	tfr	d,x
   01B6 AF 62         [ 6]  184 	stx	2,s
   01B8 EC 62         [ 6]  185 	ldd	2,s
   01BA 58            [ 2]  186 	aslb
   01BB 49            [ 2]  187 	rola
   01BC 58            [ 2]  188 	aslb
   01BD 49            [ 2]  189 	rola
   01BE ED 62         [ 6]  190 	std	2,s
   01C0 1E 01         [ 8]  191 	exg	d,x
   01C2 E3 62         [ 7]  192 	addd	2,s; addhi3,3
   01C4 1E 01         [ 8]  193 	exg	d,x
   01C6 30 89 C8 80   [ 8]  194 	leax	_enemies,x
   01CA BD 00 C8      [ 8]  195 	jsr	_draw_enemy
   01CD E6 68         [ 5]  196 	ldb	8,s
   01CF 4F            [ 2]  197 	clra		;zero_extendqihi: R:b -> R:d
   01D0 1F 01         [ 6]  198 	tfr	d,x
   01D2 AF E4         [ 5]  199 	stx	,s
   01D4 EC E4         [ 5]  200 	ldd	,s
   01D6 58            [ 2]  201 	aslb
   01D7 49            [ 2]  202 	rola
   01D8 58            [ 2]  203 	aslb
   01D9 49            [ 2]  204 	rola
   01DA ED E4         [ 5]  205 	std	,s
   01DC 1E 01         [ 8]  206 	exg	d,x
   01DE E3 E4         [ 6]  207 	addd	,s; addhi3,3
   01E0 1E 01         [ 8]  208 	exg	d,x
   01E2 30 89 C8 80   [ 8]  209 	leax	_enemies,x
   01E6 BD 00 FB      [ 8]  210 	jsr	_check_enemy
   01E9                     211 L12:
   01E9 6C 68         [ 7]  212 	inc	8,s
   01EB                     213 L11:
   01EB E6 68         [ 5]  214 	ldb	8,s
   01ED C1 01         [ 2]  215 	cmpb	#1	;cmpqi:
   01EF 10 23 FF 82   [ 6]  216 	lbls	L13
   01F3 32 69         [ 5]  217 	leas	9,s
   01F5 35 C0         [ 7]  218 	puls	u,pc
ASxxxx Assembler V05.50  (Motorola 6809)                                Page 1
Hexadecimal [16-Bits]                                 Sun Apr  6 13:16:31 2025

Symbol Table

    .__.$$$.       =   2710 L   |     .__.ABS.       =   0000 G
    .__.CPU.       =   0000 L   |     .__.H$L.       =   0001 L
  3 L11                0141 R   |   3 L12                013F R
  3 L13                00CB R   |   3 L5                 0092 R
  3 L7                 00B9 R   |   3 L8                 009B R
    __Moveto_d         **** GX  |     ___Draw_VLp        **** GX
    ___Reset0Ref       **** GX  |     _bang              **** GX
    _check_collisi     **** GX  |   3 _check_enemy       0051 GR
    _dp_VIA_t1_cnt     **** GX  |   3 _draw_enemy        001E GR
  2 _enemies           0000 GR  |   3 _handle_enemie     00C2 GR
  3 _init_enemies      0095 GR  |     _init_object       **** GX
    _move_object       **** GX  |     _play_explosio     **** GX
    _player            **** GX  |   3 _vectors_enemy     0000 GR

ASxxxx Assembler V05.50  (Motorola 6809)                                Page 2
Hexadecimal [16-Bits]                                 Sun Apr  6 13:16:31 2025

Area Table

[_CSEG]
   0 _CODE            size    0   flags C080
   2 .data            size    A   flags  100
   3 .text            size  14D   flags  100
[_DSEG]
   1 _DATA            size    0   flags C0C0

