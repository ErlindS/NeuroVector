                              1 ;;; gcc for m6809 : Mar 17 2019 13:25:32
                              2 ;;; 4.3.6 (gcc6809)
                              3 ;;; ABI version 1
                              4 ;;; -mabi=bx -mint8 -fomit-frame-pointer -O0
                              5 	.module	collision.c
                              6 	.area	.text
                              7 	.globl	_check_collision
   005B                       8 _check_collision:
   005B 32 7D         [ 5]    9 	leas	-3,s
   005D E7 61         [ 5]   10 	stb	1,s
   005F 6F 62         [ 7]   11 	clr	2,s
   0061 E6 61         [ 5]   12 	ldb	1,s
   0063 E1 66         [ 5]   13 	cmpb	6,s	;cmpqi:
   0065 2C 0C         [ 3]   14 	bge	L2
   0067 E6 66         [ 5]   15 	ldb	6,s
   0069 E0 61         [ 5]   16 	subb	1,s
   006B E1 68         [ 5]   17 	cmpb	8,s	;cmpqi:
   006D 22 0E         [ 3]   18 	bhi	L4
   006F 6C 62         [ 7]   19 	inc	2,s
   0071 20 0A         [ 3]   20 	bra	L4
   0073                      21 L2:
   0073 E6 61         [ 5]   22 	ldb	1,s
   0075 E0 66         [ 5]   23 	subb	6,s
   0077 E1 68         [ 5]   24 	cmpb	8,s	;cmpqi:
   0079 22 02         [ 3]   25 	bhi	L4
   007B 6C 62         [ 7]   26 	inc	2,s
   007D                      27 L4:
   007D E6 65         [ 5]   28 	ldb	5,s
   007F E1 67         [ 5]   29 	cmpb	7,s	;cmpqi:
   0081 2C 0C         [ 3]   30 	bge	L5
   0083 E6 67         [ 5]   31 	ldb	7,s
   0085 E0 65         [ 5]   32 	subb	5,s
   0087 E1 69         [ 5]   33 	cmpb	9,s	;cmpqi:
   0089 22 0E         [ 3]   34 	bhi	L7
   008B 6C 62         [ 7]   35 	inc	2,s
   008D 20 0A         [ 3]   36 	bra	L7
   008F                      37 L5:
   008F E6 65         [ 5]   38 	ldb	5,s
   0091 E0 67         [ 5]   39 	subb	7,s
   0093 E1 69         [ 5]   40 	cmpb	9,s	;cmpqi:
   0095 22 02         [ 3]   41 	bhi	L7
   0097 6C 62         [ 7]   42 	inc	2,s
   0099                      43 L7:
   0099 6F E4         [ 6]   44 	clr	,s
   009B E6 62         [ 5]   45 	ldb	2,s
   009D C1 02         [ 2]   46 	cmpb	#2	;cmpqi:
   009F 26 04         [ 3]   47 	bne	L8
   00A1 C6 01         [ 2]   48 	ldb	#1
   00A3 E7 E4         [ 4]   49 	stb	,s
   00A5                      50 L8:
   00A5 E6 E4         [ 4]   51 	ldb	,s
   00A7 32 63         [ 5]   52 	leas	3,s
   00A9 39            [ 5]   53 	rts
ASxxxx Assembler V05.50  (Motorola 6809)                                Page 1
Hexadecimal [16-Bits]                                 Sun Apr  6 13:16:31 2025

Symbol Table

    .__.$$$.       =   2710 L   |     .__.ABS.       =   0000 G
    .__.CPU.       =   0000 L   |     .__.H$L.       =   0001 L
  2 L2                 0018 R   |   2 L4                 0022 R
  2 L5                 0034 R   |   2 L7                 003E R
  2 L8                 004A R   |   2 _check_collisi     0000 GR

ASxxxx Assembler V05.50  (Motorola 6809)                                Page 2
Hexadecimal [16-Bits]                                 Sun Apr  6 13:16:31 2025

Area Table

[_CSEG]
   0 _CODE            size    0   flags C080
   2 .text            size   4F   flags  100
[_DSEG]
   1 _DATA            size    0   flags C0C0

