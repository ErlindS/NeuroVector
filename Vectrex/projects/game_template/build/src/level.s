;;; gcc for m6809 : Mar 17 2019 13:25:32
;;; 4.3.6 (gcc6809)
;;; ABI version 1
;;; -mabi=bx -mint8 -fomit-frame-pointer -O0
	.module	level.c
	.globl	_current_level
	.area	.data
_current_level:
	.byte	1
	.area	.text
	.globl	_level_init
_level_init:
	clr	_current_level
	rts
	.globl	_level_play
_level_play:
	leas	-4,s
	bra	L4
L5:
	jsr	___DP_to_C8
	ldx	_current_explosion
	stx	,s
	ldx	,s
	jsr	__Explosion_Snd
	ldx	_current_music
	stx	2,s
	ldx	2,s
	jsr	__Init_Music_chk
	jsr	___Wait_Recal
	jsr	__Do_Sound
	jsr	___Intensity_5F
L4:
	ldb	_current_level
	tstb
	beq	L5
	leas	4,s
	rts
