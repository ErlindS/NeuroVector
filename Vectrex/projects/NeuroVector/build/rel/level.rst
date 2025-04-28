                              1 ;;; gcc for m6809 : Mar 17 2019 13:25:32
                              2 ;;; 4.3.6 (gcc6809)
                              3 ;;; ABI version 1
                              4 ;;; -mabi=bx -mint8 -fomit-frame-pointer -O0
                              5 	.module	level.c
                              6 	.globl	_current_level
                              7 	.area	.data
   C889                       8 _current_level:
   C889 01                    9 	.byte	1
                             10 	.area	.text
                             11 	.globl	_level_init
   0194                      12 _level_init:
   0194 7F C8 89      [ 7]   13 	clr	_current_level
   0197 39            [ 5]   14 	rts
                             15 	.globl	_counter
                             16 	.area	.data
   C88A                      17 _counter:
   C88A 00                   18 	.byte	0
                             19 	.area	.text
   0198                      20 LC0:
   0198 54 49 4D 45 20 4C    21 	.byte	84,73,77,69,32,76,69,70
        45 46
   01A0 54 80 00             22 	.byte	84,-128,0
                             23 	.globl	_Display_TimeLeft
   01A3                      24 _Display_TimeLeft:
   01A3 C6 C4         [ 2]   25 	ldb	#-60
   01A5 E7 E2         [ 6]   26 	stb	,-s
   01A7 8E 01 98      [ 3]   27 	ldx	#LC0
   01AA C6 64         [ 2]   28 	ldb	#100
   01AC BD 04 20      [ 8]   29 	jsr	_print_string
   01AF 32 61         [ 5]   30 	leas	1,s
   01B1 F6 C8 8A      [ 5]   31 	ldb	_counter
   01B4 BD 03 85      [ 8]   32 	jsr	_Loadingbar
   01B7 F6 C8 8A      [ 5]   33 	ldb	_counter
   01BA CB FC         [ 2]   34 	addb	#-4
   01BC F7 C8 8A      [ 5]   35 	stb	_counter
   01BF F6 C8 8A      [ 5]   36 	ldb	_counter
   01C2 5D            [ 2]   37 	tstb
   01C3 26 05         [ 3]   38 	bne	L5
   01C5 C6 C8         [ 2]   39 	ldb	#-56
   01C7 F7 C8 8A      [ 5]   40 	stb	_counter
   01CA                      41 L5:
   01CA 39            [ 5]   42 	rts
                             43 	.globl	_nibby_vl_style_0
   01CB                      44 _nibby_vl_style_0:
   01CB 82                   45 	.byte	-126
   01CC C3                   46 	.byte	-61
   01CD 60                   47 	.byte	96
   01CE 82                   48 	.byte	-126
   01CF 02                   49 	.byte	2
   01D0 A0                   50 	.byte	-96
   01D1 82                   51 	.byte	-126
   01D2 22                   52 	.byte	34
   01D3 0A                   53 	.byte	10
   01D4 A2                   54 	.byte	-94
   01D5 20                   55 	.byte	32
   01D6 06                   56 	.byte	6
                             57 	.globl	_Generate_Gamefield
   01D7                      58 _Generate_Gamefield:
   01D7 BD F3 54      [ 8]   59 	jsr	___Reset0Ref
   01DA C6 0A         [ 2]   60 	ldb	#10
   01DC E7 E2         [ 6]   61 	stb	,-s
   01DE C6 E2         [ 2]   62 	ldb	#-30
   01E0 BD 05 6E      [ 8]   63 	jsr	__Moveto_d
   01E3 32 61         [ 5]   64 	leas	1,s
   01E5 8E FF A1      [ 3]   65 	ldx	#-95
   01E8 E6 84         [ 4]   66 	ldb	,x
   01EA C1 20         [ 2]   67 	cmpb	#32	;cmpqi:
   01EC 26 13         [ 3]   68 	bne	L7
   01EE C6 FF         [ 2]   69 	ldb	#-1
   01F0 D7 04         [ 4]   70 	stb	*_dp_VIA_t1_cnt_lo
   01F2 8E 01 CB      [ 3]   71 	ldx	#_nibby_vl_style_0
   01F5 34 10         [ 6]   72 	pshs	x
   01F7 8E 00 00      [ 3]   73 	ldx	#0
   01FA BD 04 FA      [ 8]   74 	jsr	__Draw_Grid_VL
   01FD 32 62         [ 5]   75 	leas	2,s
   01FF 20 11         [ 3]   76 	bra	L9
   0201                      77 L7:
   0201 C6 FF         [ 2]   78 	ldb	#-1
   0203 D7 04         [ 4]   79 	stb	*_dp_VIA_t1_cnt_lo
   0205 8E 01 CB      [ 3]   80 	ldx	#_nibby_vl_style_0
   0208 34 10         [ 6]   81 	pshs	x
   020A 8E 00 00      [ 3]   82 	ldx	#0
   020D BD 04 FA      [ 8]   83 	jsr	__Draw_Grid_VL
   0210 32 62         [ 5]   84 	leas	2,s
   0212                      85 L9:
   0212 39            [ 5]   86 	rts
                             87 	.area	.bss
   C8A5                      88 _joy_x:	.blkb	1
   C8A6                      89 _joy_y:	.blkb	1
                             90 	.area	.text
                             91 	.globl	_move_cursor
   0213                      92 _move_cursor:
   0213 BD F1 F8      [ 8]   93 	jsr	___Joy_Digital
   0216 F6 C8 1B      [ 5]   94 	ldb	_Vec_Joy_1_X
   0219 34 04         [ 6]   95 	pshs	b
   021B C6 A6         [ 2]   96 	ldb	#-90
   021D E7 E2         [ 6]   97 	stb	,-s
   021F C6 A6         [ 2]   98 	ldb	#-90
   0221 BD 04 5C      [ 8]   99 	jsr	_print_signed_int
   0224 32 62         [ 5]  100 	leas	2,s
   0226 F6 C8 1C      [ 5]  101 	ldb	_Vec_Joy_1_Y
   0229 34 04         [ 6]  102 	pshs	b
   022B C6 CE         [ 2]  103 	ldb	#-50
   022D E7 E2         [ 6]  104 	stb	,-s
   022F C6 A6         [ 2]  105 	ldb	#-90
   0231 BD 04 5C      [ 8]  106 	jsr	_print_signed_int
   0234 32 62         [ 5]  107 	leas	2,s
   0236 F6 C8 A5      [ 5]  108 	ldb	_joy_x
   0239 34 04         [ 6]  109 	pshs	b
   023B C6 A6         [ 2]  110 	ldb	#-90
   023D E7 E2         [ 6]  111 	stb	,-s
   023F C6 BA         [ 2]  112 	ldb	#-70
   0241 BD 04 5C      [ 8]  113 	jsr	_print_signed_int
   0244 32 62         [ 5]  114 	leas	2,s
   0246 F6 C8 A6      [ 5]  115 	ldb	_joy_y
   0249 34 04         [ 6]  116 	pshs	b
   024B C6 CE         [ 2]  117 	ldb	#-50
   024D E7 E2         [ 6]  118 	stb	,-s
   024F C6 BA         [ 2]  119 	ldb	#-70
   0251 BD 04 5C      [ 8]  120 	jsr	_print_signed_int
   0254 32 62         [ 5]  121 	leas	2,s
   0256 F6 C8 1B      [ 5]  122 	ldb	_Vec_Joy_1_X
   0259 F7 C8 A5      [ 5]  123 	stb	_joy_x
   025C F6 C8 1C      [ 5]  124 	ldb	_Vec_Joy_1_Y
   025F F7 C8 A6      [ 5]  125 	stb	_joy_y
   0262 F6 C8 A5      [ 5]  126 	ldb	_joy_x
   0265 5D            [ 2]  127 	tstb
   0266 2C 0B         [ 3]  128 	bge	L11
   0268 F6 C8 A6      [ 5]  129 	ldb	_joy_y
   026B 5D            [ 2]  130 	tstb
   026C 2F 05         [ 3]  131 	ble	L11
   026E C6 01         [ 2]  132 	ldb	#1
   0270 BD 03 DA      [ 8]  133 	jsr	_draw_cross
   0273                     134 L11:
   0273 F6 C8 A5      [ 5]  135 	ldb	_joy_x
   0276 5D            [ 2]  136 	tstb
   0277 26 0B         [ 3]  137 	bne	L12
   0279 F6 C8 A6      [ 5]  138 	ldb	_joy_y
   027C 5D            [ 2]  139 	tstb
   027D 2F 05         [ 3]  140 	ble	L12
   027F C6 02         [ 2]  141 	ldb	#2
   0281 BD 03 DA      [ 8]  142 	jsr	_draw_cross
   0284                     143 L12:
   0284 F6 C8 1B      [ 5]  144 	ldb	_Vec_Joy_1_X
   0287 5D            [ 2]  145 	tstb
   0288 2F 0B         [ 3]  146 	ble	L13
   028A F6 C8 1C      [ 5]  147 	ldb	_Vec_Joy_1_Y
   028D 5D            [ 2]  148 	tstb
   028E 2F 05         [ 3]  149 	ble	L13
   0290 C6 03         [ 2]  150 	ldb	#3
   0292 BD 03 DA      [ 8]  151 	jsr	_draw_cross
   0295                     152 L13:
   0295 F6 C8 A5      [ 5]  153 	ldb	_joy_x
   0298 5D            [ 2]  154 	tstb
   0299 2C 0B         [ 3]  155 	bge	L14
   029B F6 C8 A6      [ 5]  156 	ldb	_joy_y
   029E 5D            [ 2]  157 	tstb
   029F 26 05         [ 3]  158 	bne	L14
   02A1 C6 04         [ 2]  159 	ldb	#4
   02A3 BD 03 DA      [ 8]  160 	jsr	_draw_cross
   02A6                     161 L14:
   02A6 F6 C8 A5      [ 5]  162 	ldb	_joy_x
   02A9 5D            [ 2]  163 	tstb
   02AA 26 0B         [ 3]  164 	bne	L15
   02AC F6 C8 A6      [ 5]  165 	ldb	_joy_y
   02AF 5D            [ 2]  166 	tstb
   02B0 26 05         [ 3]  167 	bne	L15
   02B2 C6 05         [ 2]  168 	ldb	#5
   02B4 BD 03 DA      [ 8]  169 	jsr	_draw_cross
   02B7                     170 L15:
   02B7 F6 C8 A5      [ 5]  171 	ldb	_joy_x
   02BA 5D            [ 2]  172 	tstb
   02BB 2F 0B         [ 3]  173 	ble	L16
   02BD F6 C8 A6      [ 5]  174 	ldb	_joy_y
   02C0 5D            [ 2]  175 	tstb
   02C1 26 05         [ 3]  176 	bne	L16
   02C3 C6 06         [ 2]  177 	ldb	#6
   02C5 BD 03 DA      [ 8]  178 	jsr	_draw_cross
   02C8                     179 L16:
   02C8 F6 C8 A5      [ 5]  180 	ldb	_joy_x
   02CB 5D            [ 2]  181 	tstb
   02CC 2C 0B         [ 3]  182 	bge	L17
   02CE F6 C8 A6      [ 5]  183 	ldb	_joy_y
   02D1 5D            [ 2]  184 	tstb
   02D2 2C 05         [ 3]  185 	bge	L17
   02D4 C6 07         [ 2]  186 	ldb	#7
   02D6 BD 03 DA      [ 8]  187 	jsr	_draw_cross
   02D9                     188 L17:
   02D9 F6 C8 A5      [ 5]  189 	ldb	_joy_x
   02DC 5D            [ 2]  190 	tstb
   02DD 26 0B         [ 3]  191 	bne	L18
   02DF F6 C8 A6      [ 5]  192 	ldb	_joy_y
   02E2 5D            [ 2]  193 	tstb
   02E3 2C 05         [ 3]  194 	bge	L18
   02E5 C6 08         [ 2]  195 	ldb	#8
   02E7 BD 03 DA      [ 8]  196 	jsr	_draw_cross
   02EA                     197 L18:
   02EA F6 C8 A5      [ 5]  198 	ldb	_joy_x
   02ED 5D            [ 2]  199 	tstb
   02EE 2F 0B         [ 3]  200 	ble	L20
   02F0 F6 C8 A6      [ 5]  201 	ldb	_joy_y
   02F3 5D            [ 2]  202 	tstb
   02F4 2C 05         [ 3]  203 	bge	L20
   02F6 C6 09         [ 2]  204 	ldb	#9
   02F8 BD 03 DA      [ 8]  205 	jsr	_draw_cross
   02FB                     206 L20:
   02FB 39            [ 5]  207 	rts
                            208 	.globl	_level_play
   02FC                     209 _level_play:
   02FC 32 7C         [ 5]  210 	leas	-4,s
   02FE 20 29         [ 3]  211 	bra	L22
   0300                     212 L23:
   0300 BD F1 AF      [ 8]  213 	jsr	___DP_to_C8
   0303 BE C8 A1      [ 6]  214 	ldx	_current_explosion
   0306 AF E4         [ 5]  215 	stx	,s
   0308 AE E4         [ 5]  216 	ldx	,s
   030A BD 04 4A      [ 8]  217 	jsr	__Explosion_Snd
   030D BE C8 A3      [ 6]  218 	ldx	_current_music
   0310 AF 62         [ 6]  219 	stx	2,s
   0312 AE 62         [ 6]  220 	ldx	2,s
   0314 BD 04 53      [ 8]  221 	jsr	__Init_Music_chk
   0317 BD F1 92      [ 8]  222 	jsr	___Wait_Recal
   031A BD 04 C7      [ 8]  223 	jsr	__Do_Sound
   031D BD F2 A5      [ 8]  224 	jsr	___Intensity_5F
   0320 BD 01 A3      [ 8]  225 	jsr	_Display_TimeLeft
   0323 BD 01 D7      [ 8]  226 	jsr	_Generate_Gamefield
   0326 BD 02 13      [ 8]  227 	jsr	_move_cursor
   0329                     228 L22:
   0329 F6 C8 89      [ 5]  229 	ldb	_current_level
   032C 5D            [ 2]  230 	tstb
   032D 27 D1         [ 3]  231 	beq	L23
   032F 32 64         [ 5]  232 	leas	4,s
   0331 39            [ 5]  233 	rts
ASxxxx Assembler V05.50  (Motorola 6809)                                Page 1
Hexadecimal [16-Bits]                                 Tue Apr 29 00:53:09 2025

Symbol Table

    .__.$$$.       =   2710 L   |     .__.ABS.       =   0000 G
    .__.CPU.       =   0000 L   |     .__.H$L.       =   0001 L
  3 L11                00DF R   |   3 L12                00F0 R
  3 L13                0101 R   |   3 L14                0112 R
  3 L15                0123 R   |   3 L16                0134 R
  3 L17                0145 R   |   3 L18                0156 R
  3 L20                0167 R   |   3 L22                0195 R
  3 L23                016C R   |   3 L5                 0036 R
  3 L7                 006D R   |   3 L9                 007E R
  3 LC0                0004 R   |   3 _Display_TimeL     000F GR
  3 _Generate_Game     0043 GR  |     _Loadingbar        **** GX
    _Vec_Joy_1_X       **** GX  |     _Vec_Joy_1_Y       **** GX
    __Do_Sound         **** GX  |     __Draw_Grid_VL     **** GX
    __Explosion_Sn     **** GX  |     __Init_Music_c     **** GX
    __Moveto_d         **** GX  |     ___DP_to_C8        **** GX
    ___Intensity_5     **** GX  |     ___Joy_Digital     **** GX
    ___Reset0Ref       **** GX  |     ___Wait_Recal      **** GX
  2 _counter           0001 GR  |     _current_explo     **** GX
  2 _current_level     0000 GR  |     _current_music     **** GX
    _dp_VIA_t1_cnt     **** GX  |     _draw_cross        **** GX
  4 _joy_x             0000 R   |   4 _joy_y             0001 R
  3 _level_init        0000 GR  |   3 _level_play        0168 GR
  3 _move_cursor       007F GR  |   3 _nibby_vl_styl     0037 GR
    _print_signed_     **** GX  |     _print_string      **** GX

ASxxxx Assembler V05.50  (Motorola 6809)                                Page 2
Hexadecimal [16-Bits]                                 Tue Apr 29 00:53:09 2025

Area Table

[_CSEG]
   0 _CODE            size    0   flags C080
   2 .data            size    2   flags  100
   3 .text            size  19E   flags  100
   4 .bss             size    2   flags    0
[_DSEG]
   1 _DATA            size    0   flags C0C0

