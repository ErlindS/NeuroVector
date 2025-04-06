;;; gcc for m6809 : Mar 17 2019 13:25:32
;;; 4.3.6 (gcc6809)
;;; ABI version 1
;;; -mabi=bx -mint8 -fomit-frame-pointer -O0
	.module	level.c
	.globl	_current_level
	.area	.data
_current_level:
	.byte	1
	.byte	0
	.byte	0
	.area	.text
LC0:
	.byte	76,69,86,69,76,-128,0
LC1:
	.byte	80,76,65,89,69,82,-128,0
	.globl	_level_init
_level_init:
	leas	-6,s
	jsr	_init_friends
	jsr	_init_enemies
	jsr	_init_player
	ldb	#100
	stb	,s
L3:
	jsr	___DP_to_C8
	ldx	_current_explosion
	stx	1,s
	ldx	1,s
	jsr	__Explosion_Snd
	ldx	_current_music
	stx	3,s
	ldx	3,s
	jsr	__Init_Music_chk
	jsr	___Wait_Recal
	jsr	__Do_Sound
	jsr	___Read_Btns
	jsr	___Intensity_5F
	ldb	#-100
	stb	,-s
	ldx	#LC0
	ldb	#60
	jsr	_print_string
	leas	1,s
	ldb	_current_game+8
	clra		;zero_extendqihi: R:b -> R:d
	tfr	d,x
	ldb	_current_game+4,x
	pshs	b
	ldb	#40
	stb	,-s
	ldb	#60
	jsr	_print_unsigned_int
	leas	2,s
	ldb	#-100
	stb	,-s
	ldx	#LC1
	ldb	#20
	jsr	_print_string
	leas	1,s
	ldb	_current_game+8
	incb
	pshs	b
	ldb	#40
	stb	,-s
	ldb	#20
	jsr	_print_unsigned_int
	leas	2,s
	ldb	_current_game+8
	clra		;zero_extendqihi: R:b -> R:d
	tfr	d,x
	ldb	_current_game+2,x
	stb	5,s
	ldb	#105
	stb	,-s
	ldx	#-16158
	ldb	6,s
	jsr	__Print_Ships
	leas	1,s
	dec	,s
	tst	,s
	beq	L2
	ldb	_Vec_Buttons
	andb	#8
	tstb
	lbeq	L3
L2:
	clr	_current_level
	ldb	#4
	stb	_current_level+1
	clr	_current_level+2
	leas	6,s
	rts
	.globl	_level_play
_level_play:
	leas	-5,s
	bra	L6
L7:
	jsr	___DP_to_C8
	ldx	_current_explosion
	stx	1,s
	ldx	1,s
	jsr	__Explosion_Snd
	ldx	_current_music
	stx	3,s
	ldx	3,s
	jsr	__Init_Music_chk
	jsr	___Wait_Recal
	jsr	__Do_Sound
	jsr	___Intensity_5F
	ldb	_current_game+8
	clra		;zero_extendqihi: R:b -> R:d
	tfr	d,x
	ldb	_current_game+6,x
	pshs	b
	ldb	#-100
	stb	,-s
	ldb	#120
	jsr	_print_unsigned_int
	leas	2,s
	jsr	_handle_friends
	jsr	_handle_enemies
	jsr	_handle_player
	ldb	_current_level+2
	incb
	stb	_current_level+2
	ldb	_current_level+2
	stb	,s
	ldb	_current_game+8
	clra		;zero_extendqihi: R:b -> R:d
	tfr	d,x
	ldb	_current_game+4,x
	cmpb	,s	;cmpqi:(R)
	bne	L6
	clr	_current_level+2
L6:
	ldb	_current_level
	tstb
	beq	L7
	leas	5,s
	rts
