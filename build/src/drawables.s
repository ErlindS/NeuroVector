;;; gcc for m6809 : Mar 17 2019 13:25:32
;;; 4.3.6 (gcc6809)
;;; ABI version 1
;;; -mabi=bx -mint8 -fomit-frame-pointer -O0
	.module	drawables.c
	.globl	_Positions_Cursor
	.area	.text
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
	.globl	_Level_advancement
_Level_advancement:
	.byte	-60
	.byte	-35
	.byte	-60
	.byte	-25
	.byte	-60
	.byte	-15
	.byte	-60
	.byte	-5
	.byte	-60
	.byte	5
	.byte	-60
	.byte	15
	.byte	-60
	.byte	25
	.byte	-60
	.byte	35
	.byte	-70
	.byte	-35
	.byte	-70
	.byte	-25
	.byte	-70
	.byte	-15
	.byte	-70
	.byte	-5
	.byte	-70
	.byte	5
	.byte	-70
	.byte	15
	.byte	-70
	.byte	25
	.byte	-70
	.byte	35
	.globl	_cross
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
	.globl	_advancement_cross
_advancement_cross:
	.byte	0
	.byte	16
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
	.globl	_advancement_plus
_advancement_plus:
	.byte	0
	.byte	32
	.byte	16
	.byte	-1
	.byte	-32
	.byte	0
	.byte	0
	.byte	16
	.byte	16
	.byte	-1
	.byte	0
	.byte	-32
	.byte	1
	.byte	0
	.byte	0
	.globl	_Gamefield
_Gamefield:
	.byte	0
	.byte	24
	.byte	-8
	.byte	-1
	.byte	-48
	.byte	0
	.byte	0
	.byte	0
	.byte	16
	.byte	-1
	.byte	48
	.byte	0
	.byte	0
	.byte	-16
	.byte	16
	.byte	-1
	.byte	0
	.byte	-48
	.byte	0
	.byte	-16
	.byte	0
	.byte	-1
	.byte	0
	.byte	48
	.byte	1
	.byte	0
	.byte	0
	.globl	_Brainright
_Brainright:
	.byte	0
	.byte	-45
	.byte	0
	.byte	-1
	.byte	-5
	.byte	5
	.byte	-1
	.byte	1
	.byte	15
	.byte	-1
	.byte	10
	.byte	7
	.byte	-1
	.byte	10
	.byte	5
	.byte	-1
	.byte	45
	.byte	-1
	.byte	-1
	.byte	5
	.byte	-10
	.byte	-1
	.byte	0
	.byte	-10
	.byte	-1
	.byte	-5
	.byte	-10
	.byte	1
	.byte	0
	.byte	0
	.globl	_Brainleft
_Brainleft:
	.byte	0
	.byte	-45
	.byte	0
	.byte	-1
	.byte	-5
	.byte	-5
	.byte	-1
	.byte	1
	.byte	-15
	.byte	-1
	.byte	10
	.byte	-7
	.byte	-1
	.byte	10
	.byte	-5
	.byte	-1
	.byte	45
	.byte	1
	.byte	-1
	.byte	5
	.byte	10
	.byte	-1
	.byte	0
	.byte	10
	.byte	-1
	.byte	-5
	.byte	10
	.byte	1
	.byte	0
	.byte	0
	.globl	_Positions_Arrow
_Positions_Arrow:
	.byte	60
	.byte	-55
	.byte	40
	.byte	-55
	.globl	_arrow
_arrow:
	.byte	0
	.byte	4
	.byte	0
	.byte	-1
	.byte	-10
	.byte	10
	.byte	-1
	.byte	-10
	.byte	-10
	.byte	0
	.byte	10
	.byte	10
	.byte	-1
	.byte	0
	.byte	-20
	.byte	1
	.byte	0
	.byte	0
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
	.globl	_draw_round_advancement_cross
_draw_round_advancement_cross:
	pshs	u
	leas	-4,s
	stb	1,s
	jsr	___Reset0Ref
	ldb	#-1
	stb	*_dp_VIA_t1_cnt_lo
	ldb	1,s
	clra		;zero_extendqihi: R:b -> R:d
	aslb
	rola
	ldu	#_Level_advancement+1
	leax	d,u
	ldb	,x
	stb	,s
	ldb	1,s
	clra		;zero_extendqihi: R:b -> R:d
	aslb
	rola
	ldu	#_Level_advancement
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
	ldb	#32
	stb	*_dp_VIA_t1_cnt_lo
	ldx	#_cross
	jsr	___Draw_VLp
	leas	4,s
	puls	u,pc
	.globl	_draw_round_advancement_cross_plus
_draw_round_advancement_cross_plus:
	pshs	u
	leas	-4,s
	stb	1,s
	jsr	___Reset0Ref
	ldb	#-1
	stb	*_dp_VIA_t1_cnt_lo
	ldb	1,s
	clra		;zero_extendqihi: R:b -> R:d
	aslb
	rola
	ldu	#_Level_advancement+1
	leax	d,u
	ldb	,x
	stb	,s
	ldb	1,s
	clra		;zero_extendqihi: R:b -> R:d
	aslb
	rola
	ldu	#_Level_advancement
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
	ldb	#32
	stb	*_dp_VIA_t1_cnt_lo
	ldx	#_advancement_plus
	jsr	___Draw_VLp
	leas	4,s
	puls	u,pc
	.globl	_Display_Gamefield
_Display_Gamefield:
	jsr	___Reset0Ref
	ldb	#-1
	stb	*_dp_VIA_t1_cnt_lo
	ldb	#-15
	stb	,-s
	clrb
	jsr	__Moveto_d
	leas	1,s
	ldx	#_Gamefield
	jsr	___Draw_VLp
	jsr	___Reset0Ref
	clr	,-s
	clrb
	jsr	__Moveto_d
	leas	1,s
	ldx	#_Brainright
	jsr	___Draw_VLp
	jsr	___Reset0Ref
	clr	,-s
	clrb
	jsr	__Moveto_d
	leas	1,s
	ldx	#_Brainleft
	jsr	___Draw_VLp
	rts
	.globl	_Loadingbar
_Loadingbar:
	leas	-1,s
	stb	,s
	jsr	___Reset0Ref
	ldb	#127
	stb	*_dp_VIA_t1_cnt_lo
	ldb	#70
	stb	,-s
	ldb	#-60
	jsr	__Moveto_d
	leas	1,s
	ldb	,s
	stb	*_dp_VIA_t1_cnt_lo
	clr	,-s
	ldb	#80
	jsr	__Draw_Line_d
	leas	1,s
	jsr	___Reset0Ref
	ldb	#127
	stb	*_dp_VIA_t1_cnt_lo
	ldb	#66
	stb	,-s
	ldb	#-60
	jsr	__Moveto_d
	leas	1,s
	ldb	,s
	stb	*_dp_VIA_t1_cnt_lo
	clr	,-s
	ldb	#80
	jsr	__Draw_Line_d
	leas	1,s
	jsr	___Reset0Ref
	ldb	#127
	stb	*_dp_VIA_t1_cnt_lo
	ldb	#62
	stb	,-s
	ldb	#-60
	jsr	__Moveto_d
	leas	1,s
	ldb	,s
	stb	*_dp_VIA_t1_cnt_lo
	clr	,-s
	ldb	#80
	jsr	__Draw_Line_d
	leas	1,s
	ldb	#-1
	stb	*_dp_VIA_t1_cnt_lo
	leas	1,s
	rts
	.globl	_draw_menu_arrow
_draw_menu_arrow:
	pshs	u
	leas	-4,s
	stb	1,s
	jsr	___Reset0Ref
	ldb	#127
	stb	*_dp_VIA_t1_cnt_lo
	ldb	1,s
	sex		;extendqihi2: R:b -> R:d
	aslb
	rola
	ldu	#_Positions_Arrow+1
	leax	d,u
	ldb	,x
	stb	,s
	ldb	1,s
	sex		;extendqihi2: R:b -> R:d
	aslb
	rola
	ldu	#_Positions_Arrow
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
	ldx	#_arrow
	jsr	___Draw_VLp
	leas	4,s
	puls	u,pc
