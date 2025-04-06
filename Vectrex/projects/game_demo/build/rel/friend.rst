                              1 ;;; gcc for m6809 : Mar 17 2019 13:25:32
                              2 ;;; 4.3.6 (gcc6809)
                              3 ;;; ABI version 1
                              4 ;;; -mabi=bx -mint8 -fomit-frame-pointer -O0
                              5 	.module	friend.c
                              6 	.globl	_friends
                              7 	.area	.data
   C88A                       8 _friends:
   C88A 01                    9 	.byte	1
   C88B 00                   10 	.byte	0
   C88C 00                   11 	.byte	0
   C88D 00                   12 	.byte	0
   C88E 00                   13 	.byte	0
   C88F 01                   14 	.byte	1
   C890 00                   15 	.byte	0
   C891 00                   16 	.byte	0
   C892 00                   17 	.byte	0
   C893 00                   18 	.byte	0
   C894 01                   19 	.byte	1
   C895 00                   20 	.byte	0
   C896 00                   21 	.byte	0
   C897 00                   22 	.byte	0
   C898 00                   23 	.byte	0
   C899 01                   24 	.byte	1
   C89A 00                   25 	.byte	0
   C89B 00                   26 	.byte	0
   C89C 00                   27 	.byte	0
   C89D 00                   28 	.byte	0
                             29 	.globl	_vectors_friend
                             30 	.area	.text
   01F7                      31 _vectors_friend:
   01F7 00                   32 	.byte	0
   01F8 E8                   33 	.byte	-24
   01F9 00                   34 	.byte	0
   01FA FF                   35 	.byte	-1
   01FB 18                   36 	.byte	24
   01FC E8                   37 	.byte	-24
   01FD FF                   38 	.byte	-1
   01FE 18                   39 	.byte	24
   01FF 18                   40 	.byte	24
   0200 FF                   41 	.byte	-1
   0201 E8                   42 	.byte	-24
   0202 18                   43 	.byte	24
   0203 FF                   44 	.byte	-1
   0204 E8                   45 	.byte	-24
   0205 E8                   46 	.byte	-24
   0206 01                   47 	.byte	1
   0207 00                   48 	.byte	0
   0208 00                   49 	.byte	0
                             50 	.globl	_draw_friend
   0209                      51 _draw_friend:
   0209 32 7B         [ 5]   52 	leas	-5,s
   020B AF 61         [ 6]   53 	stx	1,s
   020D BD F3 54      [ 8]   54 	jsr	___Reset0Ref
   0210 C6 7F         [ 2]   55 	ldb	#127
   0212 D7 04         [ 4]   56 	stb	*_dp_VIA_t1_cnt_lo
   0214 AE 61         [ 6]   57 	ldx	1,s
   0216 E6 02         [ 5]   58 	ldb	2,x
   0218 E7 E4         [ 4]   59 	stb	,s
   021A AE 61         [ 6]   60 	ldx	1,s
   021C E6 01         [ 5]   61 	ldb	1,x
   021E E7 64         [ 5]   62 	stb	4,s
   0220 E6 E4         [ 4]   63 	ldb	,s
   0222 E7 63         [ 5]   64 	stb	3,s
   0224 E6 64         [ 5]   65 	ldb	4,s
   0226 E7 E2         [ 6]   66 	stb	,-s
   0228 E6 64         [ 5]   67 	ldb	4,s
   022A BD 08 B8      [ 8]   68 	jsr	__Moveto_d
   022D 32 61         [ 5]   69 	leas	1,s
   022F C6 22         [ 2]   70 	ldb	#34
   0231 D7 04         [ 4]   71 	stb	*_dp_VIA_t1_cnt_lo
   0233 8E 01 F7      [ 3]   72 	ldx	#_vectors_friend
   0236 BD F4 10      [ 8]   73 	jsr	___Draw_VLp
   0239 32 65         [ 5]   74 	leas	5,s
   023B 39            [ 5]   75 	rts
                             76 	.globl	_check_friend
   023C                      77 _check_friend:
   023C 32 79         [ 5]   78 	leas	-7,s
   023E AF 65         [ 6]   79 	stx	5,s
   0240 AE 65         [ 6]   80 	ldx	5,s
   0242 E6 02         [ 5]   81 	ldb	2,x
   0244 E7 E4         [ 4]   82 	stb	,s
   0246 AE 65         [ 6]   83 	ldx	5,s
   0248 E6 01         [ 5]   84 	ldb	1,x
   024A E7 61         [ 5]   85 	stb	1,s
   024C F6 C8 AC      [ 5]   86 	ldb	_player+2
   024F E7 62         [ 5]   87 	stb	2,s
   0251 F6 C8 AB      [ 5]   88 	ldb	_player+1
   0254 E7 63         [ 5]   89 	stb	3,s
   0256 C6 04         [ 2]   90 	ldb	#4
   0258 E7 E2         [ 6]   91 	stb	,-s
   025A C6 04         [ 2]   92 	ldb	#4
   025C E7 E2         [ 6]   93 	stb	,-s
   025E E6 62         [ 5]   94 	ldb	2,s
   0260 34 04         [ 6]   95 	pshs	b
   0262 E6 64         [ 5]   96 	ldb	4,s
   0264 34 04         [ 6]   97 	pshs	b
   0266 E6 66         [ 5]   98 	ldb	6,s
   0268 34 04         [ 6]   99 	pshs	b
   026A E6 68         [ 5]  100 	ldb	8,s
   026C BD 00 5B      [ 8]  101 	jsr	_check_collision
   026F 32 65         [ 5]  102 	leas	5,s
   0271 5D            [ 2]  103 	tstb
   0272 27 3D         [ 3]  104 	beq	L5
   0274 8E 07 90      [ 3]  105 	ldx	#_bing
   0277 BD 07 D8      [ 8]  106 	jsr	_play_music
   027A C6 01         [ 2]  107 	ldb	#1
   027C E7 F8 05      [ 8]  108 	stb	[5,s]
   027F F6 C8 A6      [ 5]  109 	ldb	_current_game+8
   0282 E7 64         [ 5]  110 	stb	4,s
   0284 E6 64         [ 5]  111 	ldb	4,s
   0286 4F            [ 2]  112 	clra		;zero_extendqihi: R:b -> R:d
   0287 1F 01         [ 6]  113 	tfr	d,x
   0289 E6 89 C8 A4   [ 8]  114 	ldb	_current_game+6,x
   028D E7 E4         [ 4]  115 	stb	,s
   028F E6 E4         [ 4]  116 	ldb	,s
   0291 5C            [ 2]  117 	incb
   0292 E7 E4         [ 4]  118 	stb	,s
   0294 E6 64         [ 5]  119 	ldb	4,s
   0296 4F            [ 2]  120 	clra		;zero_extendqihi: R:b -> R:d
   0297 1F 01         [ 6]  121 	tfr	d,x
   0299 E6 E4         [ 4]  122 	ldb	,s
   029B E7 89 C8 A4   [ 8]  123 	stb	_current_game+6,x
   029F F6 C8 A8      [ 5]  124 	ldb	_current_level+1
   02A2 5A            [ 2]  125 	decb
   02A3 F7 C8 A8      [ 5]  126 	stb	_current_level+1
   02A6 F6 C8 A8      [ 5]  127 	ldb	_current_level+1
   02A9 5D            [ 2]  128 	tstb
   02AA 26 05         [ 3]  129 	bne	L5
   02AC C6 02         [ 2]  130 	ldb	#2
   02AE F7 C8 A7      [ 5]  131 	stb	_current_level
   02B1                     132 L5:
   02B1 32 67         [ 5]  133 	leas	7,s
   02B3 39            [ 5]  134 	rts
                            135 	.globl	_init_friends
   02B4                     136 _init_friends:
   02B4 32 7D         [ 5]  137 	leas	-3,s
   02B6 6F 62         [ 7]  138 	clr	2,s
   02B8 20 1E         [ 3]  139 	bra	L7
   02BA                     140 L8:
   02BA E6 62         [ 5]  141 	ldb	2,s
   02BC 4F            [ 2]  142 	clra		;zero_extendqihi: R:b -> R:d
   02BD 1F 01         [ 6]  143 	tfr	d,x
   02BF AF E4         [ 5]  144 	stx	,s
   02C1 EC E4         [ 5]  145 	ldd	,s
   02C3 58            [ 2]  146 	aslb
   02C4 49            [ 2]  147 	rola
   02C5 58            [ 2]  148 	aslb
   02C6 49            [ 2]  149 	rola
   02C7 ED E4         [ 5]  150 	std	,s
   02C9 1E 01         [ 8]  151 	exg	d,x
   02CB E3 E4         [ 6]  152 	addd	,s; addhi3,3
   02CD 1E 01         [ 8]  153 	exg	d,x
   02CF 30 89 C8 8A   [ 8]  154 	leax	_friends,x
   02D3 BD 06 5C      [ 8]  155 	jsr	_init_object
   02D6 6C 62         [ 7]  156 	inc	2,s
   02D8                     157 L7:
   02D8 E6 62         [ 5]  158 	ldb	2,s
   02DA C1 03         [ 2]  159 	cmpb	#3	;cmpqi:
   02DC 23 DC         [ 3]  160 	bls	L8
   02DE 32 63         [ 5]  161 	leas	3,s
   02E0 39            [ 5]  162 	rts
                            163 	.globl	_handle_friends
   02E1                     164 _handle_friends:
   02E1 34 40         [ 6]  165 	pshs	u
   02E3 32 77         [ 5]  166 	leas	-9,s
   02E5 6F 68         [ 7]  167 	clr	8,s
   02E7 16 00 76      [ 5]  168 	lbra	L11
   02EA                     169 L13:
   02EA E6 68         [ 5]  170 	ldb	8,s
   02EC 4F            [ 2]  171 	clra		;zero_extendqihi: R:b -> R:d
   02ED 1F 01         [ 6]  172 	tfr	d,x
   02EF AF 66         [ 6]  173 	stx	6,s
   02F1 EC 66         [ 6]  174 	ldd	6,s
   02F3 58            [ 2]  175 	aslb
   02F4 49            [ 2]  176 	rola
   02F5 58            [ 2]  177 	aslb
   02F6 49            [ 2]  178 	rola
   02F7 ED 66         [ 6]  179 	std	6,s
   02F9 EC 66         [ 6]  180 	ldd	6,s
   02FB 30 8B         [ 8]  181 	leax	d,x
   02FD AF 66         [ 6]  182 	stx	6,s
   02FF EE 66         [ 6]  183 	ldu	6,s
   0301 30 C9 C8 8A   [ 8]  184 	leax	_friends,u
   0305 E6 84         [ 4]  185 	ldb	,x
   0307 5D            [ 2]  186 	tstb
   0308 26 54         [ 3]  187 	bne	L12
   030A E6 68         [ 5]  188 	ldb	8,s
   030C 4F            [ 2]  189 	clra		;zero_extendqihi: R:b -> R:d
   030D 1F 01         [ 6]  190 	tfr	d,x
   030F AF 64         [ 6]  191 	stx	4,s
   0311 EC 64         [ 6]  192 	ldd	4,s
   0313 58            [ 2]  193 	aslb
   0314 49            [ 2]  194 	rola
   0315 58            [ 2]  195 	aslb
   0316 49            [ 2]  196 	rola
   0317 ED 64         [ 6]  197 	std	4,s
   0319 1E 01         [ 8]  198 	exg	d,x
   031B E3 64         [ 7]  199 	addd	4,s; addhi3,3
   031D 1E 01         [ 8]  200 	exg	d,x
   031F 30 89 C8 8A   [ 8]  201 	leax	_friends,x
   0323 BD 06 90      [ 8]  202 	jsr	_move_object
   0326 E6 68         [ 5]  203 	ldb	8,s
   0328 4F            [ 2]  204 	clra		;zero_extendqihi: R:b -> R:d
   0329 1F 01         [ 6]  205 	tfr	d,x
   032B AF 62         [ 6]  206 	stx	2,s
   032D EC 62         [ 6]  207 	ldd	2,s
   032F 58            [ 2]  208 	aslb
   0330 49            [ 2]  209 	rola
   0331 58            [ 2]  210 	aslb
   0332 49            [ 2]  211 	rola
   0333 ED 62         [ 6]  212 	std	2,s
   0335 1E 01         [ 8]  213 	exg	d,x
   0337 E3 62         [ 7]  214 	addd	2,s; addhi3,3
   0339 1E 01         [ 8]  215 	exg	d,x
   033B 30 89 C8 8A   [ 8]  216 	leax	_friends,x
   033F BD 02 09      [ 8]  217 	jsr	_draw_friend
   0342 E6 68         [ 5]  218 	ldb	8,s
   0344 4F            [ 2]  219 	clra		;zero_extendqihi: R:b -> R:d
   0345 1F 01         [ 6]  220 	tfr	d,x
   0347 AF E4         [ 5]  221 	stx	,s
   0349 EC E4         [ 5]  222 	ldd	,s
   034B 58            [ 2]  223 	aslb
   034C 49            [ 2]  224 	rola
   034D 58            [ 2]  225 	aslb
   034E 49            [ 2]  226 	rola
   034F ED E4         [ 5]  227 	std	,s
   0351 1E 01         [ 8]  228 	exg	d,x
   0353 E3 E4         [ 6]  229 	addd	,s; addhi3,3
   0355 1E 01         [ 8]  230 	exg	d,x
   0357 30 89 C8 8A   [ 8]  231 	leax	_friends,x
   035B BD 02 3C      [ 8]  232 	jsr	_check_friend
   035E                     233 L12:
   035E 6C 68         [ 7]  234 	inc	8,s
   0360                     235 L11:
   0360 E6 68         [ 5]  236 	ldb	8,s
   0362 C1 03         [ 2]  237 	cmpb	#3	;cmpqi:
   0364 10 23 FF 82   [ 6]  238 	lbls	L13
   0368 32 69         [ 5]  239 	leas	9,s
   036A 35 C0         [ 7]  240 	puls	u,pc
ASxxxx Assembler V05.50  (Motorola 6809)                                Page 1
Hexadecimal [16-Bits]                                 Sun Apr  6 13:16:31 2025

Symbol Table

    .__.$$$.       =   2710 L   |     .__.ABS.       =   0000 G
    .__.CPU.       =   0000 L   |     .__.H$L.       =   0001 L
  3 L11                0169 R   |   3 L12                0167 R
  3 L13                00F3 R   |   3 L5                 00BA R
  3 L7                 00E1 R   |   3 L8                 00C3 R
    __Moveto_d         **** GX  |     ___Draw_VLp        **** GX
    ___Reset0Ref       **** GX  |     _bing              **** GX
    _check_collisi     **** GX  |   3 _check_friend      0045 GR
    _current_game      **** GX  |     _current_level     **** GX
    _dp_VIA_t1_cnt     **** GX  |   3 _draw_friend       0012 GR
  2 _friends           0000 GR  |   3 _handle_friend     00EA GR
  3 _init_friends      00BD GR  |     _init_object       **** GX
    _move_object       **** GX  |     _play_music        **** GX
    _player            **** GX  |   3 _vectors_frien     0000 GR

ASxxxx Assembler V05.50  (Motorola 6809)                                Page 2
Hexadecimal [16-Bits]                                 Sun Apr  6 13:16:31 2025

Area Table

[_CSEG]
   0 _CODE            size    0   flags C080
   2 .data            size   14   flags  100
   3 .text            size  175   flags  100
[_DSEG]
   1 _DATA            size    0   flags C0C0

