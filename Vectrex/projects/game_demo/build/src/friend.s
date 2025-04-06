;;; gcc for m6809 : Mar 17 2019 13:25:32
;;; 4.3.6 (gcc6809)
;;; ABI version 1
;;; -mabi=bx -mint8 -fomit-frame-pointer -O0
	.module	friend.c
	.globl	_friends
	.area	.data
_friends:
	.byte	1
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.byte	1
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.byte	1
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.byte	1
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.globl	_vectors_friend
	.area	.text
_vectors_friend:
	.byte	0
	.byte	-24
	.byte	0
	.byte	-1
	.byte	24
	.byte	-24
	.byte	-1
	.byte	24
	.byte	24
	.byte	-1
	.byte	-24
	.byte	24
	.byte	-1
	.byte	-24
	.byte	-24
	.byte	1
	.byte	0
	.byte	0
	.globl	_draw_friend
_draw_friend:
	leas	-5,s
	stx	1,s
	jsr	___Reset0Ref
	ldb	#127
	stb	*_dp_VIA_t1_cnt_lo
	ldx	1,s
	ldb	2,x
	stb	,s
	ldx	1,s
	ldb	1,x
	stb	4,s
	ldb	,s
	stb	3,s
	ldb	4,s
	stb	,-s
	ldb	4,s
	jsr	__Moveto_d
	leas	1,s
	ldb	#34
	stb	*_dp_VIA_t1_cnt_lo
	ldx	#_vectors_friend
	jsr	___Draw_VLp
	leas	5,s
	rts
	.globl	_check_friend
_check_friend:
	leas	-7,s
	stx	5,s
	ldx	5,s
	ldb	2,x
	stb	,s
	ldx	5,s
	ldb	1,x
	stb	1,s
	ldb	_player+2
	stb	2,s
	ldb	_player+1
	stb	3,s
	ldb	#4
	stb	,-s
	ldb	#4
	stb	,-s
	ldb	2,s
	pshs	b
	ldb	4,s
	pshs	b
	ldb	6,s
	pshs	b
	ldb	8,s
	jsr	_check_collision
	leas	5,s
	tstb
	beq	L5
	ldx	#_bing
	jsr	_play_music
	ldb	#1
	stb	[5,s]
	ldb	_current_game+8
	stb	4,s
	ldb	4,s
	clra		;zero_extendqihi: R:b -> R:d
	tfr	d,x
	ldb	_current_game+6,x
	stb	,s
	ldb	,s
	incb
	stb	,s
	ldb	4,s
	clra		;zero_extendqihi: R:b -> R:d
	tfr	d,x
	ldb	,s
	stb	_current_game+6,x
	ldb	_current_level+1
	decb
	stb	_current_level+1
	ldb	_current_level+1
	tstb
	bne	L5
	ldb	#2
	stb	_current_level
L5:
	leas	7,s
	rts
	.globl	_init_friends
_init_friends:
	leas	-3,s
	clr	2,s
	bra	L7
L8:
	ldb	2,s
	clra		;zero_extendqihi: R:b -> R:d
	tfr	d,x
	stx	,s
	ldd	,s
	aslb
	rola
	aslb
	rola
	std	,s
	exg	d,x
	addd	,s; addhi3,3
	exg	d,x
	leax	_friends,x
	jsr	_init_object
	inc	2,s
L7:
	ldb	2,s
	cmpb	#3	;cmpqi:
	bls	L8
	leas	3,s
	rts
	.globl	_handle_friends
_handle_friends:
	pshs	u
	leas	-9,s
	clr	8,s
	lbra	L11
L13:
	ldb	8,s
	clra		;zero_extendqihi: R:b -> R:d
	tfr	d,x
	stx	6,s
	ldd	6,s
	aslb
	rola
	aslb
	rola
	std	6,s
	ldd	6,s
	leax	d,x
	stx	6,s
	ldu	6,s
	leax	_friends,u
	ldb	,x
	tstb
	bne	L12
	ldb	8,s
	clra		;zero_extendqihi: R:b -> R:d
	tfr	d,x
	stx	4,s
	ldd	4,s
	aslb
	rola
	aslb
	rola
	std	4,s
	exg	d,x
	addd	4,s; addhi3,3
	exg	d,x
	leax	_friends,x
	jsr	_move_object
	ldb	8,s
	clra		;zero_extendqihi: R:b -> R:d
	tfr	d,x
	stx	2,s
	ldd	2,s
	aslb
	rola
	aslb
	rola
	std	2,s
	exg	d,x
	addd	2,s; addhi3,3
	exg	d,x
	leax	_friends,x
	jsr	_draw_friend
	ldb	8,s
	clra		;zero_extendqihi: R:b -> R:d
	tfr	d,x
	stx	,s
	ldd	,s
	aslb
	rola
	aslb
	rola
	std	,s
	exg	d,x
	addd	,s; addhi3,3
	exg	d,x
	leax	_friends,x
	jsr	_check_friend
L12:
	inc	8,s
L11:
	ldb	8,s
	cmpb	#3	;cmpqi:
	lbls	L13
	leas	9,s
	puls	u,pc
