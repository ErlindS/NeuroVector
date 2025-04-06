;;; gcc for m6809 : Mar 17 2019 13:25:32
;;; 4.3.6 (gcc6809)
;;; ABI version 1
;;; -mabi=bx -mint8 -fomit-frame-pointer -O0
	.module	player.c
	.globl	_player
	.area	.data
_player:
	.word	0
	.byte	0
	.globl	_vectors_player
	.area	.text
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
	leas	-3,s
	jsr	___Reset0Ref
	ldb	#127
	stb	*_dp_VIA_t1_cnt_lo
	ldb	_player+2
	stb	,s
	ldb	_player+1
	stb	2,s
	ldb	,s
	stb	1,s
	ldb	2,s
	stb	,-s
	ldb	2,s
	jsr	__Moveto_d
	leas	1,s
	ldb	#34
	stb	*_dp_VIA_t1_cnt_lo
	ldx	#_vectors_player
	jsr	___Draw_VLp
	leas	3,s
	rts
	.globl	_init_player
_init_player:
	ldb	#1
	stb	_player
	clr	_player+1
	clr	_player+2
	rts
	.globl	_move_player
_move_player:
	leas	-5,s
	ldb	#1
	stb	4,s
	jsr	___Joy_Digital
	ldb	_Vec_Joy_1_Y
	clr	,s
	tstb
	bge	L6
	ldb	#1
	stb	,s
L6:
	ldb	,s
	tstb
	beq	L7
	ldb	_player+1
	subb	4,s
	stb	_player+1
	bra	L8
L7:
	ldb	_Vec_Joy_1_Y
	clr	1,s
	tstb
	ble	L9
	ldb	#1
	stb	1,s
L9:
	ldb	1,s
	tstb
	beq	L8
	ldb	_player+1
	addb	4,s
	stb	_player+1
L8:
	ldb	_Vec_Joy_1_X
	clr	2,s
	tstb
	bge	L10
	ldb	#1
	stb	2,s
L10:
	ldb	2,s
	tstb
	beq	L11
	ldb	_player+2
	subb	4,s
	stb	_player+2
	bra	L14
L11:
	ldb	_Vec_Joy_1_X
	clr	3,s
	tstb
	ble	L13
	ldb	#1
	stb	3,s
L13:
	ldb	3,s
	tstb
	beq	L14
	ldb	_player+2
	addb	4,s
	stb	_player+2
L14:
	leas	5,s
	rts
	.globl	_handle_player
_handle_player:
	jsr	_move_player
	jsr	_draw_player
	ldb	_player
	tstb
	bne	L17
	ldb	#1
	stb	_current_level
L17:
	rts
