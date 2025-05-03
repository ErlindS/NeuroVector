;;; gcc for m6809 : Mar 17 2019 13:25:32
;;; 4.3.6 (gcc6809)
;;; ABI version 1
;;; -mabi=bx -mint8 -fomit-frame-pointer -O0
	.module	objects.c
	.globl	_Positions_Cursor
	.area	.data
_Positions_Cursor:
	.byte	0
	.byte	0
	.byte	16
	.byte	-16
	.byte	16
	.byte	0
	.byte	16
	.byte	16
	.byte	0
	.byte	-16
	.byte	0
	.byte	0
	.byte	0
	.byte	16
	.byte	-16
	.byte	-16
	.byte	-16
	.byte	0
	.byte	-16
	.byte	16
	.globl	_cross
	.area	.text
_cross:
	.byte	0
	.byte	32
	.byte	32
	.byte	-1
	.byte	-32
	.byte	-32
	.byte	0
	.byte	32
	.byte	0
	.byte	-1
	.byte	-32
	.byte	32
	.byte	1
	.byte	0
	.byte	0
	.globl	_cross_y
	.area	.data
_cross_y:
	.byte	70
	.globl	_cross_x
_cross_x:
	.byte	-60
	.area	.text
	.globl	_Loadingbar
_Loadingbar:
	leas	-7,s
	stb	3,s
	clr	4,s
	bra	L2
L3:
	jsr	___Reset0Ref
	ldb	#127
	stb	*_dp_VIA_t1_cnt_lo
	ldb	_cross_x
	stb	1,s
	ldb	4,s
	stb	,s
	ldb	,s
	aslb
	aslb
	stb	,s
	ldb	,s
	negb
	stb	2,s
	ldb	_cross_y
	addb	2,s
	stb	6,s
	ldb	1,s
	stb	5,s
	ldb	6,s
	stb	,-s
	ldb	6,s
	jsr	__Moveto_d
	leas	1,s
	ldb	3,s
	stb	*_dp_VIA_t1_cnt_lo
	clr	,-s
	ldb	#80
	jsr	__Draw_Line_d
	leas	1,s
	inc	4,s
L2:
	ldb	4,s
	cmpb	#2	;cmpqi:
	ble	L3
	ldb	#-1
	stb	*_dp_VIA_t1_cnt_lo
	leas	7,s
	rts
	.globl	_draw_cross
_draw_cross:
	pshs	u
	leas	-4,s
	stb	1,s
	jsr	___Reset0Ref
	ldb	#-1
	stb	*_dp_VIA_t1_cnt_lo
	ldb	#-21
	stb	,-s
	ldb	#-6
	jsr	__Moveto_d
	leas	1,s
	ldb	1,s
	clra		;zero_extendqihi: R:b -> R:d
	aslb
	rola
	ldu	#_Positions_Cursor+1
	leax	d,u
	ldb	,x
	stb	,s
	ldb	1,s
	clra		;zero_extendqihi: R:b -> R:d
	aslb
	rola
	ldu	#_Positions_Cursor
	leax	d,u
	ldb	,x
	stb	3,s
	ldb	,s
	stb	2,s
	ldb	3,s
	stb	,-s
	ldb	3,s
	jsr	__Moveto_d
	leas	1,s
	ldb	#96
	stb	*_dp_VIA_t1_cnt_lo
	ldx	#_cross
	jsr	___Draw_VLp
	leas	4,s
	puls	u,pc
