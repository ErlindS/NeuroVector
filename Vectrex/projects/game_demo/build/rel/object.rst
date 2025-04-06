                              1 ;;; gcc for m6809 : Mar 17 2019 13:25:32
                              2 ;;; 4.3.6 (gcc6809)
                              3 ;;; ABI version 1
                              4 ;;; -mabi=bx -mint8 -fomit-frame-pointer -O0
                              5 	.module	object.c
                              6 	.area	.text
                              7 	.globl	_init_object
   065C                       8 _init_object:
   065C 32 7E         [ 5]    9 	leas	-2,s
   065E AF E4         [ 5]   10 	stx	,s
   0660 6F F4         [ 9]   11 	clr	[,s]
   0662 BD 08 0A      [ 8]   12 	jsr	__Random
   0665 C4 7F         [ 2]   13 	andb	#127
   0667 CB 40         [ 2]   14 	addb	#64
   0669 AE E4         [ 5]   15 	ldx	,s
   066B E7 01         [ 5]   16 	stb	1,x
   066D BD 08 0A      [ 8]   17 	jsr	__Random
   0670 C4 7F         [ 2]   18 	andb	#127
   0672 CB 40         [ 2]   19 	addb	#64
   0674 AE E4         [ 5]   20 	ldx	,s
   0676 E7 02         [ 5]   21 	stb	2,x
   0678 BD 08 0A      [ 8]   22 	jsr	__Random
   067B C4 03         [ 2]   23 	andb	#3
   067D CB FE         [ 2]   24 	addb	#-2
   067F AE E4         [ 5]   25 	ldx	,s
   0681 E7 03         [ 5]   26 	stb	3,x
   0683 BD 08 0A      [ 8]   27 	jsr	__Random
   0686 C4 03         [ 2]   28 	andb	#3
   0688 5A            [ 2]   29 	decb
   0689 AE E4         [ 5]   30 	ldx	,s
   068B E7 04         [ 5]   31 	stb	4,x
   068D 32 62         [ 5]   32 	leas	2,s
   068F 39            [ 5]   33 	rts
                             34 	.globl	_move_object
   0690                      35 _move_object:
   0690 32 7C         [ 5]   36 	leas	-4,s
   0692 AF 62         [ 6]   37 	stx	2,s
   0694 F6 C8 A9      [ 5]   38 	ldb	_current_level+2
   0697 5D            [ 2]   39 	tstb
   0698 27 20         [ 3]   40 	beq	L5
   069A AE 62         [ 6]   41 	ldx	2,s
   069C E6 01         [ 5]   42 	ldb	1,x
   069E E7 E4         [ 4]   43 	stb	,s
   06A0 AE 62         [ 6]   44 	ldx	2,s
   06A2 E6 03         [ 5]   45 	ldb	3,x
   06A4 EB E4         [ 4]   46 	addb	,s
   06A6 AE 62         [ 6]   47 	ldx	2,s
   06A8 E7 01         [ 5]   48 	stb	1,x
   06AA AE 62         [ 6]   49 	ldx	2,s
   06AC E6 02         [ 5]   50 	ldb	2,x
   06AE E7 61         [ 5]   51 	stb	1,s
   06B0 AE 62         [ 6]   52 	ldx	2,s
   06B2 E6 04         [ 5]   53 	ldb	4,x
   06B4 EB 61         [ 5]   54 	addb	1,s
   06B6 AE 62         [ 6]   55 	ldx	2,s
   06B8 E7 02         [ 5]   56 	stb	2,x
   06BA                      57 L5:
   06BA 32 64         [ 5]   58 	leas	4,s
   06BC 39            [ 5]   59 	rts
ASxxxx Assembler V05.50  (Motorola 6809)                                Page 1
Hexadecimal [16-Bits]                                 Sun Apr  6 13:16:31 2025

Symbol Table

    .__.$$$.       =   2710 L   |     .__.ABS.       =   0000 G
    .__.CPU.       =   0000 L   |     .__.H$L.       =   0001 L
  2 L5                 005E R   |     __Random           **** GX
    _current_level     **** GX  |   2 _init_object       0000 GR
  2 _move_object       0034 GR

ASxxxx Assembler V05.50  (Motorola 6809)                                Page 2
Hexadecimal [16-Bits]                                 Sun Apr  6 13:16:31 2025

Area Table

[_CSEG]
   0 _CODE            size    0   flags C080
   2 .text            size   61   flags  100
[_DSEG]
   1 _DATA            size    0   flags C0C0

