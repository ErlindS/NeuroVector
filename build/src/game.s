;;; gcc for m6809 : Mar 17 2019 13:25:32
;;; 4.3.6 (gcc6809)
;;; ABI version 1
;;; -mabi=bx -mint8 -fomit-frame-pointer -O0
	.module	game.c
	.globl	_current_game
	.area	.data
_current_game:
	.word	0,0,0,0
	.byte	0
	.area	.text
	.globl	_game_init
_game_init:
	ldb	#1
	stb	_Vec_Joy_Mux_1_X
	ldb	#3
	stb	_Vec_Joy_Mux_1_Y
	clr	_Vec_Joy_Mux_2_X
	clr	_Vec_Joy_Mux_2_Y
	ldb	#3
	stb	_current_game+2
	ldb	#1
	stb	_current_game+4
	clr	_current_game+6
	clr	_current_game+7
	ldb	_current_game
	cmpb	#2	;cmpqi:
	bne	L2
	ldb	#3
	stb	_current_game+3
	ldb	#1
	stb	_current_game+5
	bra	L3
L2:
	clr	_current_game+3
	clr	_current_game+5
L3:
	clr	_current_game+8
	rts
	.globl	_game_play
_game_play:
	jsr	_level_init
	jsr	_level_play
	rts
LC0:
	.byte	71,65,77,69,32,79,86,69
	.byte	82,-128,0
LC1:
	.byte	80,76,65,89,69,82,-128,0
	.globl	_game_over
_game_over:
	pshs	y
	leas	-14,s
	leax	,s
	jsr	___Clear_Score
	ldb	_current_game+8
	clra		;zero_extendqihi: R:b -> R:d
	tfr	d,x
	ldb	_current_game+6,x
	stb	8,s
	leax	,s
	ldb	8,s
	jsr	__Add_Score_a
	leay	,s
	ldx	#_Vec_High_Score
	pshs	x
	leax	,y
	jsr	__New_High_Score
	leas	2,s
	ldb	#-106
	stb	7,s
L9:
	jsr	___DP_to_C8
	ldx	_current_explosion
	stx	9,s
	ldx	9,s
	jsr	__Explosion_Snd
	ldx	_current_music
	stx	11,s
	ldx	11,s
	jsr	__Init_Music_chk
	jsr	___Wait_Recal
	jsr	__Do_Sound
	jsr	___Intensity_5F
	ldb	#-64
	stb	,-s
	ldx	#LC0
	clrb
	jsr	_print_string
	leas	1,s
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
	stb	13,s
	ldb	#105
	stb	,-s
	ldx	#-16158
	ldb	14,s
	jsr	__Print_Ships
	leas	1,s
	jsr	___Read_Btns
	dec	7,s
	tst	7,s
	beq	L10
	ldb	_Vec_Buttons
	andb	#8
	tstb
	lbeq	L9
L10:
	leas	14,s
	puls	y,pc
	.globl	_game
_game:
	leas	-1,s
	ldb	#1
	stb	,-s
	ldb	#3
	jsr	__Select_Game
	leas	1,s
	ldb	_Vec_Num_Players
	stb	_current_game
	ldb	_Vec_Num_Game
	stb	_current_game+1
	ldb	_Vec_Btn_State
	andb	#8
	tstb
	beq	L12
	jsr	_game_init
	jsr	_game_play
	clr	,s
	bra	L13
L12:
	ldb	#-1
	stb	,s
L13:
	ldb	,s
	leas	1,s
	rts
