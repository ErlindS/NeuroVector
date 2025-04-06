                              1 ;;; gcc for m6809 : Mar 17 2019 13:25:32
                              2 ;;; 4.3.6 (gcc6809)
                              3 ;;; ABI version 1
                              4 ;;; -mabi=bx -mint8 -fomit-frame-pointer -O0
                              5 	.module	level.c
                              6 	.globl	_current_level
                              7 	.area	.data
   C889                       8 _current_level:
   C889 01                    9 	.byte	1
                             10 	.globl	_Display_pattern
   C88A                      11 _Display_pattern:
   C88A 00 00 00 00 00 00    12 	.word	0,0,0,0,0,0,0,0,0,0
        00 00 00 00 00 00
        00 00 00 00 00 00
        00 00
                             13 	.area	.text
                             14 	.globl	_level_init
   0194                      15 _level_init:
   0194 32 7D         [ 5]   16 	leas	-3,s
   0196 6F 62         [ 7]   17 	clr	2,s
   0198 20 2A         [ 3]   18 	bra	L2
   019A                      19 L3:
   019A E6 62         [ 5]   20 	ldb	2,s
   019C E7 61         [ 5]   21 	stb	1,s
   019E BD 03 5F      [ 8]   22 	jsr	__Random
   01A1 4F            [ 2]   23 	clra		;zero_extendqihi: R:b -> R:d
   01A2 8E 00 09      [ 3]   24 	ldx	#9
   01A5 34 10         [ 6]   25 	pshs	x
   01A7 1F 01         [ 6]   26 	tfr	d,x
   01A9 BD 03 47      [ 8]   27 	jsr	_umodhi3
   01AC 32 62         [ 5]   28 	leas	2,s
   01AE 1F 10         [ 6]   29 	tfr	x,d	;movlsbqihi: R:x -> R:b
   01B0 E7 E4         [ 4]   30 	stb	,s
   01B2 E6 E4         [ 4]   31 	ldb	,s
   01B4 5C            [ 2]   32 	incb
   01B5 E7 E4         [ 4]   33 	stb	,s
   01B7 E6 61         [ 5]   34 	ldb	1,s
   01B9 1D            [ 2]   35 	sex		;extendqihi2: R:b -> R:d
   01BA 1F 01         [ 6]   36 	tfr	d,x
   01BC E6 E4         [ 4]   37 	ldb	,s
   01BE E7 89 C8 8A   [ 8]   38 	stb	_Display_pattern,x
   01C2 6C 62         [ 7]   39 	inc	2,s
   01C4                      40 L2:
   01C4 E6 62         [ 5]   41 	ldb	2,s
   01C6 C1 13         [ 2]   42 	cmpb	#19	;cmpqi:
   01C8 2F D0         [ 3]   43 	ble	L3
   01CA 7F C8 89      [ 7]   44 	clr	_current_level
   01CD 32 63         [ 5]   45 	leas	3,s
   01CF 39            [ 5]   46 	rts
                             47 	.globl	_Gamefield
                             48 	.area	.data
   C89E                      49 _Gamefield:
   C89E 01                   50 	.byte	1
   C89F 00                   51 	.byte	0
   C8A0 00                   52 	.byte	0
   C8A1 00                   53 	.byte	0
   C8A2 00                   54 	.byte	0
   C8A3 01                   55 	.byte	1
   C8A4 1E                   56 	.byte	30
   C8A5 00                   57 	.byte	0
   C8A6 00                   58 	.byte	0
   C8A7 00                   59 	.byte	0
   C8A8 01                   60 	.byte	1
   C8A9 00                   61 	.byte	0
   C8AA 1E                   62 	.byte	30
   C8AB 00                   63 	.byte	0
   C8AC 00                   64 	.byte	0
   C8AD 01                   65 	.byte	1
   C8AE 1E                   66 	.byte	30
   C8AF 1E                   67 	.byte	30
   C8B0 00                   68 	.byte	0
   C8B1 00                   69 	.byte	0
   C8B2 01                   70 	.byte	1
   C8B3 E2                   71 	.byte	-30
   C8B4 00                   72 	.byte	0
   C8B5 00                   73 	.byte	0
   C8B6 00                   74 	.byte	0
   C8B7 01                   75 	.byte	1
   C8B8 00                   76 	.byte	0
   C8B9 E2                   77 	.byte	-30
   C8BA 00                   78 	.byte	0
   C8BB 00                   79 	.byte	0
   C8BC 01                   80 	.byte	1
   C8BD E2                   81 	.byte	-30
   C8BE E2                   82 	.byte	-30
   C8BF 00                   83 	.byte	0
   C8C0 00                   84 	.byte	0
   C8C1 01                   85 	.byte	1
   C8C2 1E                   86 	.byte	30
   C8C3 E2                   87 	.byte	-30
   C8C4 00                   88 	.byte	0
   C8C5 00                   89 	.byte	0
   C8C6 01                   90 	.byte	1
   C8C7 E2                   91 	.byte	-30
   C8C8 1E                   92 	.byte	30
   C8C9 00                   93 	.byte	0
   C8CA 00                   94 	.byte	0
                             95 	.area	.text
                             96 	.globl	_Generate_Gamefield
   01D0                      97 _Generate_Gamefield:
   01D0 32 7D         [ 5]   98 	leas	-3,s
   01D2 6F 62         [ 7]   99 	clr	2,s
   01D4 20 1E         [ 3]  100 	bra	L6
   01D6                     101 L7:
   01D6 E6 62         [ 5]  102 	ldb	2,s
   01D8 1D            [ 2]  103 	sex		;extendqihi2: R:b -> R:d
   01D9 1F 01         [ 6]  104 	tfr	d,x
   01DB AF E4         [ 5]  105 	stx	,s
   01DD EC E4         [ 5]  106 	ldd	,s
   01DF 58            [ 2]  107 	aslb
   01E0 49            [ 2]  108 	rola
   01E1 58            [ 2]  109 	aslb
   01E2 49            [ 2]  110 	rola
   01E3 ED E4         [ 5]  111 	std	,s
   01E5 1E 01         [ 8]  112 	exg	d,x
   01E7 E3 E4         [ 6]  113 	addd	,s; addhi3,3
   01E9 1E 01         [ 8]  114 	exg	d,x
   01EB 30 89 C8 9E   [ 8]  115 	leax	_Gamefield,x
   01EF BD 02 B8      [ 8]  116 	jsr	_handle_objects
   01F2 6C 62         [ 7]  117 	inc	2,s
   01F4                     118 L6:
   01F4 E6 62         [ 5]  119 	ldb	2,s
   01F6 C1 08         [ 2]  120 	cmpb	#8	;cmpqi:
   01F8 2F DC         [ 3]  121 	ble	L7
   01FA 32 63         [ 5]  122 	leas	3,s
   01FC 39            [ 5]  123 	rts
                            124 	.globl	_Display_Pattern
   01FD                     125 _Display_Pattern:
   01FD 32 7F         [ 5]  126 	leas	-1,s
   01FF C6 03         [ 2]  127 	ldb	#3
   0201 E7 E4         [ 4]  128 	stb	,s
   0203 32 61         [ 5]  129 	leas	1,s
   0205 39            [ 5]  130 	rts
                            131 	.globl	_Repeat_Pattern
   0206                     132 _Repeat_Pattern:
   0206 32 7F         [ 5]  133 	leas	-1,s
   0208 C6 04         [ 2]  134 	ldb	#4
   020A E7 E4         [ 4]  135 	stb	,s
   020C 32 61         [ 5]  136 	leas	1,s
   020E 39            [ 5]  137 	rts
                            138 	.globl	_level_play
   020F                     139 _level_play:
   020F 32 7C         [ 5]  140 	leas	-4,s
   0211 20 29         [ 3]  141 	bra	L14
   0213                     142 L15:
   0213 BD F1 AF      [ 8]  143 	jsr	___DP_to_C8
   0216 BE C8 CB      [ 6]  144 	ldx	_current_explosion
   0219 AF E4         [ 5]  145 	stx	,s
   021B AE E4         [ 5]  146 	ldx	,s
   021D BD 03 35      [ 8]  147 	jsr	__Explosion_Snd
   0220 BE C8 CD      [ 6]  148 	ldx	_current_music
   0223 AF 62         [ 6]  149 	stx	2,s
   0225 AE 62         [ 6]  150 	ldx	2,s
   0227 BD 03 3E      [ 8]  151 	jsr	__Init_Music_chk
   022A BD F1 92      [ 8]  152 	jsr	___Wait_Recal
   022D BD 03 58      [ 8]  153 	jsr	__Do_Sound
   0230 BD F2 A5      [ 8]  154 	jsr	___Intensity_5F
   0233 BD 01 D0      [ 8]  155 	jsr	_Generate_Gamefield
   0236 BD 01 FD      [ 8]  156 	jsr	_Display_Pattern
   0239 BD 02 06      [ 8]  157 	jsr	_Repeat_Pattern
   023C                     158 L14:
   023C F6 C8 89      [ 5]  159 	ldb	_current_level
   023F 5D            [ 2]  160 	tstb
   0240 27 D1         [ 3]  161 	beq	L15
   0242 32 64         [ 5]  162 	leas	4,s
   0244 39            [ 5]  163 	rts
ASxxxx Assembler V05.50  (Motorola 6809)                                Page 1
Hexadecimal [16-Bits]                                 Sun Apr  6 21:29:21 2025

Symbol Table

    .__.$$$.       =   2710 L   |     .__.ABS.       =   0000 G
    .__.CPU.       =   0000 L   |     .__.H$L.       =   0001 L
  3 L14                00A8 R   |   3 L15                007F R
  3 L2                 0030 R   |   3 L3                 0006 R
  3 L6                 0060 R   |   3 L7                 0042 R
  3 _Display_Patte     0069 GR  |   2 _Display_patte     0001 GR
  2 _Gamefield         0015 GR  |   3 _Generate_Game     003C GR
  3 _Repeat_Patter     0072 GR  |     __Do_Sound         **** GX
    __Explosion_Sn     **** GX  |     __Init_Music_c     **** GX
    __Random           **** GX  |     ___DP_to_C8        **** GX
    ___Intensity_5     **** GX  |     ___Wait_Recal      **** GX
    _current_explo     **** GX  |   2 _current_level     0000 GR
    _current_music     **** GX  |     _handle_object     **** GX
  3 _level_init        0000 GR  |   3 _level_play        007B GR
    _umodhi3           **** GX

ASxxxx Assembler V05.50  (Motorola 6809)                                Page 2
Hexadecimal [16-Bits]                                 Sun Apr  6 21:29:21 2025

Area Table

[_CSEG]
   0 _CODE            size    0   flags C080
   2 .data            size   42   flags  100
   3 .text            size   B1   flags  100
[_DSEG]
   1 _DATA            size    0   flags C0C0

