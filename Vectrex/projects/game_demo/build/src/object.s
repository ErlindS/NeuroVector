;;; gcc for m6809 : Mar 17 2019 13:25:32
;;; 4.3.6 (gcc6809)
;;; ABI version 1
;;; -mabi=bx -mint8 -fomit-frame-pointer -O0
	.module	object.c
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
	.globl	_move_object
_move_object:
	leas	-4,s
	stx	2,s
	ldb	_current_level+2
	tstb
	beq	L5
	ldx	2,s
	ldb	1,x
	stb	,s
	ldx	2,s
	ldb	3,x
	addb	,s
	ldx	2,s
	stb	1,x
	ldx	2,s
	ldb	2,x
	stb	1,s
	ldx	2,s
	ldb	4,x
	addb	1,s
	ldx	2,s
	stb	2,x
L5:
	leas	4,s
	rts
