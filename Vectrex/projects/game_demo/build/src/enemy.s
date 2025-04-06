;;; gcc for m6809 : Mar 17 2019 13:25:32
;;; 4.3.6 (gcc6809)
;;; ABI version 1
;;; -mabi=bx -mint8 -fomit-frame-pointer -O0
	.module	enemy.c
	.globl	_enemies
	.area	.data
_enemies:
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
	.globl	_vectors_enemy
	.area	.text
_vectors_enemy:
	.byte	0
	.byte	16
	.byte	-16
	.byte	-1
	.byte	32
	.byte	16
	.byte	-1
	.byte	-32
	.byte	16
	.byte	-1
	.byte	-16
	.byte	32
	.byte	-1
	.byte	-16
	.byte	-32
	.byte	-1
	.byte	-32
	.byte	-16
	.byte	-1
	.byte	32
	.byte	-16
	.byte	-1
	.byte	16
	.byte	-32
	.byte	-1
	.byte	16
	.byte	32
	.byte	1
	.byte	0
	.byte	0
	.globl	_draw_enemy
_draw_enemy:
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
	ldx	#_vectors_enemy
	jsr	___Draw_VLp
	leas	5,s
	rts
	.globl	_check_enemy
_check_enemy:
	leas	-6,s
	stx	4,s
	ldx	4,s
	ldb	2,x
	stb	,s
	ldx	4,s
	ldb	1,x
	stb	1,s
	ldb	_player+2
	stb	2,s
	ldb	_player+1
	stb	3,s
	ldb	#8
	stb	,-s
	ldb	#8
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
	ldx	#_bang
	jsr	_play_explosion
	clr	_player
L5:
	leas	6,s
	rts
	.globl	_init_enemies
_init_enemies:
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
	leax	_enemies,x
	jsr	_init_object
	inc	2,s
L7:
	ldb	2,s
	cmpb	#1	;cmpqi:
	bls	L8
	leas	3,s
	rts
	.globl	_handle_enemies
_handle_enemies:
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
	leax	_enemies,u
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
	leax	_enemies,x
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
	leax	_enemies,x
	jsr	_draw_enemy
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
	leax	_enemies,x
	jsr	_check_enemy
L12:
	inc	8,s
L11:
	ldb	8,s
	cmpb	#1	;cmpqi:
	lbls	L13
	leas	9,s
	puls	u,pc
