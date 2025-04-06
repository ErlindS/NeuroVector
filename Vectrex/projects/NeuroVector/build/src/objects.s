;;; gcc for m6809 : Mar 17 2019 13:25:32
;;; 4.3.6 (gcc6809)
;;; ABI version 1
;;; -mabi=bx -mint8 -fomit-frame-pointer -O0
	.module	objects.c
	.area	.text
	.globl	_init_object
_init_object:
	leas	-2,s
	stx	,s
	clr	[,s]
	jsr	__Random
	andb	#127
	addb	#64
	ldx	,s
	stb	1,x
	jsr	__Random
	andb	#127
	addb	#64
	ldx	,s
	stb	2,x
	jsr	__Random
	andb	#3
	addb	#-2
	ldx	,s
	stb	3,x
	jsr	__Random
	andb	#3
	decb
	ldx	,s
	stb	4,x
	leas	2,s
	rts
	.globl	_vectors_player
_vectors_player:
	.byte	0
	.byte	32
	.byte	-32
	.byte	-1
	.byte	0
	.byte	64
	.byte	-1
	.byte	-64
	.byte	0
	.byte	-1
	.byte	0
	.byte	-64
	.byte	-1
	.byte	64
	.byte	0
	.byte	1
	.byte	0
	.byte	0
	.globl	_draw_player
_draw_player:
	jsr	___Reset0Ref
	ldb	#127
	stb	*_dp_VIA_t1_cnt_lo
	ldb	#5
	stb	,-s
	ldb	#5
	jsr	__Moveto_d
	leas	1,s
	ldb	#34
	stb	*_dp_VIA_t1_cnt_lo
	ldx	#_vectors_player
	jsr	___Draw_VLp
	rts
	.globl	_handle_objects
_handle_objects:
	leas	-7,s
	stx	3,s
	jsr	___Reset0Ref
	ldb	#127
	stb	*_dp_VIA_t1_cnt_lo
	ldx	3,s
	ldb	1,x
	stb	,s
	ldx	3,s
	ldb	2,x
	stb	6,s
	ldb	,s
	stb	5,s
	ldb	6,s
	stb	,-s
	ldb	6,s
	jsr	__Moveto_d
	leas	1,s
	ldb	#34
	stb	*_dp_VIA_t1_cnt_lo
	ldx	#_vectors_player
	jsr	___Draw_VLp
	ldx	3,s
	ldb	1,x
	stb	1,s
	ldx	3,s
	ldb	3,x
	addb	1,s
	ldx	3,s
	stb	1,x
	ldx	3,s
	ldb	2,x
	stb	2,s
	ldx	3,s
	ldb	4,x
	addb	2,s
	ldx	3,s
	stb	2,x
	leas	7,s
	rts
