                              1 ;;; gcc for m6809 : Mar 17 2019 13:25:32
                              2 ;;; 4.3.6 (gcc6809)
                              3 ;;; ABI version 1
                              4 ;;; -mabi=bx -mint8 -fomit-frame-pointer -O0
                              5 	.module	player.c
                              6 	.globl	_player
                              7 	.area	.data
   C8AA                       8 _player:
   C8AA 00 00                 9 	.word	0
   C8AC 00                   10 	.byte	0
                             11 	.globl	_vectors_player
                             12 	.area	.text
   06BD                      13 _vectors_player:
   06BD 00                   14 	.byte	0
   06BE 20                   15 	.byte	32
   06BF E0                   16 	.byte	-32
   06C0 FF                   17 	.byte	-1
   06C1 00                   18 	.byte	0
   06C2 40                   19 	.byte	64
   06C3 FF                   20 	.byte	-1
   06C4 C0                   21 	.byte	-64
   06C5 00                   22 	.byte	0
   06C6 FF                   23 	.byte	-1
   06C7 00                   24 	.byte	0
   06C8 C0                   25 	.byte	-64
   06C9 FF                   26 	.byte	-1
   06CA 40                   27 	.byte	64
   06CB 00                   28 	.byte	0
   06CC 01                   29 	.byte	1
   06CD 00                   30 	.byte	0
   06CE 00                   31 	.byte	0
                             32 	.globl	_draw_player
   06CF                      33 _draw_player:
   06CF 32 7D         [ 5]   34 	leas	-3,s
   06D1 BD F3 54      [ 8]   35 	jsr	___Reset0Ref
   06D4 C6 7F         [ 2]   36 	ldb	#127
   06D6 D7 04         [ 4]   37 	stb	*_dp_VIA_t1_cnt_lo
   06D8 F6 C8 AC      [ 5]   38 	ldb	_player+2
   06DB E7 E4         [ 4]   39 	stb	,s
   06DD F6 C8 AB      [ 5]   40 	ldb	_player+1
   06E0 E7 62         [ 5]   41 	stb	2,s
   06E2 E6 E4         [ 4]   42 	ldb	,s
   06E4 E7 61         [ 5]   43 	stb	1,s
   06E6 E6 62         [ 5]   44 	ldb	2,s
   06E8 E7 E2         [ 6]   45 	stb	,-s
   06EA E6 62         [ 5]   46 	ldb	2,s
   06EC BD 08 B8      [ 8]   47 	jsr	__Moveto_d
   06EF 32 61         [ 5]   48 	leas	1,s
   06F1 C6 22         [ 2]   49 	ldb	#34
   06F3 D7 04         [ 4]   50 	stb	*_dp_VIA_t1_cnt_lo
   06F5 8E 06 BD      [ 3]   51 	ldx	#_vectors_player
   06F8 BD F4 10      [ 8]   52 	jsr	___Draw_VLp
   06FB 32 63         [ 5]   53 	leas	3,s
   06FD 39            [ 5]   54 	rts
                             55 	.globl	_init_player
   06FE                      56 _init_player:
   06FE C6 01         [ 2]   57 	ldb	#1
   0700 F7 C8 AA      [ 5]   58 	stb	_player
   0703 7F C8 AB      [ 7]   59 	clr	_player+1
   0706 7F C8 AC      [ 7]   60 	clr	_player+2
   0709 39            [ 5]   61 	rts
                             62 	.globl	_move_player
   070A                      63 _move_player:
   070A 32 7B         [ 5]   64 	leas	-5,s
   070C C6 01         [ 2]   65 	ldb	#1
   070E E7 64         [ 5]   66 	stb	4,s
   0710 BD F1 F8      [ 8]   67 	jsr	___Joy_Digital
   0713 F6 C8 1C      [ 5]   68 	ldb	_Vec_Joy_1_Y
   0716 6F E4         [ 6]   69 	clr	,s
   0718 5D            [ 2]   70 	tstb
   0719 2C 04         [ 3]   71 	bge	L6
   071B C6 01         [ 2]   72 	ldb	#1
   071D E7 E4         [ 4]   73 	stb	,s
   071F                      74 L6:
   071F E6 E4         [ 4]   75 	ldb	,s
   0721 5D            [ 2]   76 	tstb
   0722 27 0A         [ 3]   77 	beq	L7
   0724 F6 C8 AB      [ 5]   78 	ldb	_player+1
   0727 E0 64         [ 5]   79 	subb	4,s
   0729 F7 C8 AB      [ 5]   80 	stb	_player+1
   072C 20 19         [ 3]   81 	bra	L8
   072E                      82 L7:
   072E F6 C8 1C      [ 5]   83 	ldb	_Vec_Joy_1_Y
   0731 6F 61         [ 7]   84 	clr	1,s
   0733 5D            [ 2]   85 	tstb
   0734 2F 04         [ 3]   86 	ble	L9
   0736 C6 01         [ 2]   87 	ldb	#1
   0738 E7 61         [ 5]   88 	stb	1,s
   073A                      89 L9:
   073A E6 61         [ 5]   90 	ldb	1,s
   073C 5D            [ 2]   91 	tstb
   073D 27 08         [ 3]   92 	beq	L8
   073F F6 C8 AB      [ 5]   93 	ldb	_player+1
   0742 EB 64         [ 5]   94 	addb	4,s
   0744 F7 C8 AB      [ 5]   95 	stb	_player+1
   0747                      96 L8:
   0747 F6 C8 1B      [ 5]   97 	ldb	_Vec_Joy_1_X
   074A 6F 62         [ 7]   98 	clr	2,s
   074C 5D            [ 2]   99 	tstb
   074D 2C 04         [ 3]  100 	bge	L10
   074F C6 01         [ 2]  101 	ldb	#1
   0751 E7 62         [ 5]  102 	stb	2,s
   0753                     103 L10:
   0753 E6 62         [ 5]  104 	ldb	2,s
   0755 5D            [ 2]  105 	tstb
   0756 27 0A         [ 3]  106 	beq	L11
   0758 F6 C8 AC      [ 5]  107 	ldb	_player+2
   075B E0 64         [ 5]  108 	subb	4,s
   075D F7 C8 AC      [ 5]  109 	stb	_player+2
   0760 20 19         [ 3]  110 	bra	L14
   0762                     111 L11:
   0762 F6 C8 1B      [ 5]  112 	ldb	_Vec_Joy_1_X
   0765 6F 63         [ 7]  113 	clr	3,s
   0767 5D            [ 2]  114 	tstb
   0768 2F 04         [ 3]  115 	ble	L13
   076A C6 01         [ 2]  116 	ldb	#1
   076C E7 63         [ 5]  117 	stb	3,s
   076E                     118 L13:
   076E E6 63         [ 5]  119 	ldb	3,s
   0770 5D            [ 2]  120 	tstb
   0771 27 08         [ 3]  121 	beq	L14
   0773 F6 C8 AC      [ 5]  122 	ldb	_player+2
   0776 EB 64         [ 5]  123 	addb	4,s
   0778 F7 C8 AC      [ 5]  124 	stb	_player+2
   077B                     125 L14:
   077B 32 65         [ 5]  126 	leas	5,s
   077D 39            [ 5]  127 	rts
                            128 	.globl	_handle_player
   077E                     129 _handle_player:
   077E BD 07 0A      [ 8]  130 	jsr	_move_player
   0781 BD 06 CF      [ 8]  131 	jsr	_draw_player
   0784 F6 C8 AA      [ 5]  132 	ldb	_player
   0787 5D            [ 2]  133 	tstb
   0788 26 05         [ 3]  134 	bne	L17
   078A C6 01         [ 2]  135 	ldb	#1
   078C F7 C8 A7      [ 5]  136 	stb	_current_level
   078F                     137 L17:
   078F 39            [ 5]  138 	rts
ASxxxx Assembler V05.50  (Motorola 6809)                                Page 1
Hexadecimal [16-Bits]                                 Sun Apr  6 13:16:31 2025

Symbol Table

    .__.$$$.       =   2710 L   |     .__.ABS.       =   0000 G
    .__.CPU.       =   0000 L   |     .__.H$L.       =   0001 L
  3 L10                0096 R   |   3 L11                00A5 R
  3 L13                00B1 R   |   3 L14                00BE R
  3 L17                00D2 R   |   3 L6                 0062 R
  3 L7                 0071 R   |   3 L8                 008A R
  3 L9                 007D R   |     _Vec_Joy_1_X       **** GX
    _Vec_Joy_1_Y       **** GX  |     __Moveto_d         **** GX
    ___Draw_VLp        **** GX  |     ___Joy_Digital     **** GX
    ___Reset0Ref       **** GX  |     _current_level     **** GX
    _dp_VIA_t1_cnt     **** GX  |   3 _draw_player       0012 GR
  3 _handle_player     00C1 GR  |   3 _init_player       0041 GR
  3 _move_player       004D GR  |   2 _player            0000 GR
  3 _vectors_playe     0000 GR

ASxxxx Assembler V05.50  (Motorola 6809)                                Page 2
Hexadecimal [16-Bits]                                 Sun Apr  6 13:16:31 2025

Area Table

[_CSEG]
   0 _CODE            size    0   flags C080
   2 .data            size    3   flags  100
   3 .text            size   D3   flags  100
[_DSEG]
   1 _DATA            size    0   flags C0C0

