;;; gcc for m6809 : Mar 17 2019 13:25:32
;;; 4.3.6 (gcc6809)
;;; ABI version 1
;;; -mabi=bx -mint8 -fomit-frame-pointer -O0
	.module	level.c
	.globl	_Level_advancement
	.area	.text
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
	.globl	_square
_square:
	.byte	0
	.byte	60
	.byte	-60
	.byte	-1
	.byte	0
	.byte	120
	.byte	-1
	.byte	-120
	.byte	0
	.byte	-1
	.byte	0
	.byte	-120
	.byte	-1
	.byte	120
	.byte	0
	.byte	1
	.byte	0
	.byte	0
	.globl	_square_filled
_square_filled:
	.byte	0
	.byte	60
	.byte	-60
	.byte	-1
	.byte	0
	.byte	120
	.byte	-1
	.byte	-120
	.byte	0
	.byte	-1
	.byte	0
	.byte	-120
	.byte	-1
	.byte	120
	.byte	0
	.byte	-1
	.byte	-120
	.byte	120
	.byte	0
	.byte	120
	.byte	0
	.byte	-1
	.byte	-120
	.byte	-120
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
	.byte	-1
	.byte	-120
	.byte	0
	.byte	-1
	.byte	0
	.byte	120
	.byte	-1
	.byte	120
	.byte	0
	.byte	-1
	.byte	0
	.byte	-120
	.byte	1
	.byte	0
	.byte	0
	.globl	_Lifelinestruct
_Lifelinestruct:
	.byte	-1
	.byte	0
	.byte	30
	.byte	-1
	.byte	15
	.byte	10
	.byte	-1
	.byte	-15
	.byte	10
	.byte	-1
	.byte	0
	.byte	15
	.byte	-1
	.byte	-15
	.byte	10
	.byte	-1
	.byte	45
	.byte	15
	.byte	-1
	.byte	-55
	.byte	15
	.byte	-1
	.byte	25
	.byte	15
	.byte	-1
	.byte	0
	.byte	15
	.byte	1
	.byte	0
	.byte	0
	.globl	_Brainright
_Brainright:
	.byte	0
	.byte	-120
	.byte	120
	.byte	0
	.byte	-120
	.byte	0
	.byte	0
	.byte	-120
	.byte	0
	.byte	0
	.byte	-120
	.byte	0
	.byte	0
	.byte	-20
	.byte	-100
	.byte	0
	.byte	-20
	.byte	-100
	.byte	0
	.byte	-20
	.byte	-70
	.byte	-1
	.byte	0
	.byte	100
	.byte	-1
	.byte	0
	.byte	100
	.byte	-1
	.byte	0
	.byte	90
	.byte	0
	.byte	60
	.byte	-30
	.byte	-1
	.byte	-100
	.byte	50
	.byte	-1
	.byte	0
	.byte	60
	.byte	-1
	.byte	0
	.byte	75
	.byte	-1
	.byte	50
	.byte	75
	.byte	-1
	.byte	50
	.byte	75
	.byte	-1
	.byte	50
	.byte	0
	.byte	-1
	.byte	30
	.byte	60
	.byte	-1
	.byte	80
	.byte	40
	.byte	-1
	.byte	60
	.byte	0
	.byte	-1
	.byte	20
	.byte	-20
	.byte	-1
	.byte	15
	.byte	-30
	.byte	-1
	.byte	-20
	.byte	-50
	.byte	0
	.byte	20
	.byte	50
	.byte	-1
	.byte	30
	.byte	30
	.byte	-1
	.byte	70
	.byte	0
	.byte	-1
	.byte	30
	.byte	-10
	.byte	-1
	.byte	-40
	.byte	-70
	.byte	0
	.byte	40
	.byte	70
	.byte	-1
	.byte	70
	.byte	0
	.byte	-1
	.byte	50
	.byte	-25
	.byte	-1
	.byte	0
	.byte	-60
	.byte	-1
	.byte	-50
	.byte	-25
	.byte	-1
	.byte	-25
	.byte	-50
	.byte	0
	.byte	75
	.byte	75
	.byte	-1
	.byte	60
	.byte	-30
	.byte	-1
	.byte	60
	.byte	-30
	.byte	-1
	.byte	60
	.byte	-50
	.byte	-1
	.byte	0
	.byte	-50
	.byte	-1
	.byte	40
	.byte	-50
	.byte	-1
	.byte	30
	.byte	-100
	.byte	-1
	.byte	-30
	.byte	-60
	.byte	-1
	.byte	-30
	.byte	-65
	.byte	1
	.byte	0
	.byte	0
	.globl	_Brainleft
_Brainleft:
	.byte	0
	.byte	-120
	.byte	-120
	.byte	0
	.byte	-120
	.byte	0
	.byte	0
	.byte	-120
	.byte	0
	.byte	0
	.byte	-120
	.byte	0
	.byte	-1
	.byte	-100
	.byte	-50
	.byte	-1
	.byte	0
	.byte	-60
	.byte	-1
	.byte	0
	.byte	-75
	.byte	-1
	.byte	50
	.byte	-75
	.byte	-1
	.byte	50
	.byte	-75
	.byte	-1
	.byte	50
	.byte	0
	.byte	-1
	.byte	30
	.byte	-60
	.byte	-1
	.byte	80
	.byte	-40
	.byte	-1
	.byte	60
	.byte	0
	.byte	-1
	.byte	20
	.byte	20
	.byte	-1
	.byte	15
	.byte	30
	.byte	-1
	.byte	-20
	.byte	50
	.byte	0
	.byte	20
	.byte	-50
	.byte	-1
	.byte	30
	.byte	-30
	.byte	-1
	.byte	70
	.byte	0
	.byte	-1
	.byte	30
	.byte	10
	.byte	-1
	.byte	-40
	.byte	70
	.byte	0
	.byte	40
	.byte	-70
	.byte	-1
	.byte	70
	.byte	0
	.byte	-1
	.byte	50
	.byte	25
	.byte	-1
	.byte	0
	.byte	60
	.byte	-1
	.byte	-50
	.byte	25
	.byte	-1
	.byte	-25
	.byte	50
	.byte	0
	.byte	75
	.byte	-75
	.byte	-1
	.byte	60
	.byte	30
	.byte	-1
	.byte	60
	.byte	30
	.byte	-1
	.byte	60
	.byte	50
	.byte	-1
	.byte	0
	.byte	50
	.byte	-1
	.byte	40
	.byte	50
	.byte	-1
	.byte	30
	.byte	100
	.byte	-1
	.byte	-30
	.byte	60
	.byte	-1
	.byte	-30
	.byte	65
	.byte	1
	.byte	0
	.byte	0
	.globl	_Positions_Arrow
_Positions_Arrow:
	.byte	60
	.byte	-55
	.byte	40
	.byte	-55
	.byte	20
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
	.globl	_buttonspressedcounter
	.area	.data
_buttonspressedcounter:
	.byte	0
	.globl	_sneakyoffset
_sneakyoffset:
	.byte	0
	.globl	_b
_b:
	.byte	1
	.globl	_RandomSequenceCounter
_RandomSequenceCounter:
	.byte	50
	.globl	_RandomSequenceCounterDisplay
_RandomSequenceCounterDisplay:
	.byte	1
	.globl	_HighscoreNormal
_HighscoreNormal:
	.byte	0
	.globl	_HighscoreHard
_HighscoreHard:
	.byte	0
	.globl	_HighscoreExtrem
_HighscoreExtrem:
	.byte	0
	.globl	_Random_Number_for_random_things
_Random_Number_for_random_things:
	.byte	0
	.globl	_SequenceTime
_SequenceTime:
	.byte	1
	.globl	_counter
_counter:
	.byte	3
	.globl	_joy_x
_joy_x:
	.byte	0
	.globl	_joy_y
_joy_y:
	.byte	0
	.globl	_temppass
_temppass:
	.byte	0
	.area	.bss
	.globl	_execute_game_playing_state
_execute_game_playing_state:	.blkb	2
	.globl	_current_level
	.area	.data
_current_level:
	.byte	0
	.globl	_Displayed_Squares
_Displayed_Squares:
	.byte	16
	.byte	-16
	.word	_draw_square
	.word	_add_square_x
	.word	_add_square_y
	.byte	0
	.byte	0
	.byte	16
	.byte	0
	.word	_draw_square
	.word	_add_square_x
	.word	_add_square_y
	.byte	0
	.byte	0
	.byte	16
	.byte	16
	.word	_draw_square
	.word	_add_square_x
	.word	_add_square_y
	.byte	0
	.byte	0
	.byte	0
	.byte	-16
	.word	_draw_square
	.word	_add_square_x
	.word	_add_square_y
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.word	_draw_square
	.word	_add_square_x
	.word	_add_square_y
	.byte	0
	.byte	0
	.byte	0
	.byte	16
	.word	_draw_square
	.word	_add_square_x
	.word	_add_square_y
	.byte	0
	.byte	0
	.byte	-16
	.byte	-16
	.word	_draw_square
	.word	_add_square_x
	.word	_add_square_y
	.byte	0
	.byte	0
	.byte	-16
	.byte	0
	.word	_draw_square
	.word	_add_square_x
	.word	_add_square_y
	.byte	0
	.byte	0
	.byte	-16
	.byte	16
	.word	_draw_square
	.word	_add_square_x
	.word	_add_square_y
	.byte	0
	.byte	0
	.globl	_a_random
_a_random:
	.byte	3
	.byte	9
	.byte	7
	.byte	5
	.byte	5
	.byte	8
	.byte	4
	.byte	5
	.byte	9
	.byte	8
	.byte	1
	.byte	5
	.byte	9
	.byte	2
	.byte	9
	.byte	6
	.byte	3
	.byte	1
	.byte	6
	.byte	3
	.globl	_a_random_compare
_a_random_compare:
	.word	0,0,0,0,0,0,0,0,0,0
	.area	.text
	.globl	_RandomNumberGenerator
_RandomNumberGenerator:
	leas	-3,s
	clr	2,s
	bra	L2
L3:
	ldb	2,s
	stb	1,s
	ldb	2,s
	sex		;extendqihi2: R:b -> R:d
	tfr	d,x
	ldb	_a_random,x
	clra		;zero_extendqihi: R:b -> R:d
	ldx	#10
	pshs	x
	tfr	d,x
	jsr	_umodhi3
	leas	2,s
	tfr	x,d	;movlsbqihi: R:x -> R:b
	stb	,s
	ldb	1,s
	sex		;extendqihi2: R:b -> R:d
	tfr	d,x
	ldb	,s
	stb	_a_random,x
	inc	2,s
L2:
	ldb	2,s
	cmpb	#19	;cmpqi:
	ble	L3
	leas	3,s
	rts
	.globl	_rand
_rand:
	leas	-7,s
	stb	5,s
	clr	6,s
	lbra	L6
L7:
	ldb	5,s
	lsrb
	lsrb
	lsrb
	lsrb
	stb	1,s
	ldb	5,s
	eorb	1,s
	stb	5,s
	ldb	5,s
	aslb
	aslb
	aslb
	stb	,s
	ldb	,s
	addb	5,s
	stb	5,s
	ldb	5,s
	rolb
	rolb
	rolb
	andb	#3
	stb	2,s
	ldb	5,s
	eorb	2,s
	stb	5,s
	ldb	5,s
	aslb
	aslb
	stb	,s
	ldb	,s
	addb	5,s
	stb	5,s
	ldb	5,s
	lsrb
	lsrb
	lsrb
	lsrb
	lsrb
	stb	3,s
	ldb	5,s
	eorb	3,s
	stb	5,s
	ldb	6,s
	stb	4,s
	ldb	6,s
	sex		;extendqihi2: R:b -> R:d
	tfr	d,x
	ldb	_a_random,x
	addb	5,s
	clra		;zero_extendqihi: R:b -> R:d
	ldx	#10
	pshs	x
	tfr	d,x
	jsr	_umodhi3
	leas	2,s
	tfr	x,d	;movlsbqihi: R:x -> R:b
	stb	,s
	ldb	4,s
	sex		;extendqihi2: R:b -> R:d
	tfr	d,x
	ldb	,s
	stb	_a_random,x
	inc	6,s
L6:
	ldb	6,s
	cmpb	#19	;cmpqi:
	lble	L7
	leas	7,s
	rts
	.globl	_rand2
_rand2:
	leas	-6,s
	stb	4,s
	clr	5,s
	bra	L10
L11:
	ldb	4,s
	asrb
	asrb
	asrb
	asrb
	stb	1,s
	ldb	4,s
	eorb	1,s
	stb	4,s
	ldb	4,s
	aslb
	aslb
	aslb
	stb	,s
	ldb	,s
	addb	4,s
	stb	4,s
	ldb	4,s
	asrb
	asrb
	asrb
	asrb
	asrb
	asrb
	stb	2,s
	ldb	4,s
	eorb	2,s
	stb	4,s
	ldb	4,s
	aslb
	aslb
	stb	,s
	ldb	,s
	addb	4,s
	stb	4,s
	ldb	4,s
	asrb
	asrb
	asrb
	asrb
	asrb
	stb	3,s
	ldb	4,s
	eorb	3,s
	stb	4,s
	inc	5,s
L10:
	ldb	5,s
	cmpb	#19	;cmpqi:
	ble	L11
	ldb	4,s
	leas	6,s
	rts
	.globl	_Display_TimeLeft
_Display_TimeLeft:
	ldb	_counter
	jsr	_Lifeline
	ldb	_counter
	tstb
	bne	L14
	ldb	#-56
	stb	_counter
L14:
	ldb	_counter
	decb
	stb	_counter
	rts
	.globl	_Display_LevelAdvancement
_Display_LevelAdvancement:
	leas	-3,s
	stb	2,s
	bra	L17
L19:
	ldb	_buttonspressedcounter
	addb	2,s
	jsr	_draw_round_advancement_cross
L17:
	ldb	2,s
	stb	1,s
	tst	1,s
	beq	L18
	ldb	#1
	stb	1,s
L18:
	ldb	1,s
	dec	2,s
	tstb
	bne	L19
	bra	L20
L22:
	ldb	5,s
	jsr	_draw_round_advancement_cross_plus
L20:
	ldb	5,s
	stb	,s
	tst	,s
	beq	L21
	ldb	#1
	stb	,s
L21:
	ldb	,s
	dec	5,s
	tstb
	bne	L22
	leas	3,s
	rts
LC0:
	.byte	82,69,77,69,77,66,69,82
	.byte	32,84,72,69,-128,0
LC1:
	.byte	83,69,81,85,69,78,67,69
	.byte	-128,0
	.globl	_Display_RandomSequence
_Display_RandomSequence:
	leas	-3,s
	clr	2,s
	lbra	L25
L27:
	ldb	#-56
	stb	_counter
	jsr	___Wait_Recal
	jsr	_Display_Gamefield
	ldb	#-75
	stb	,-s
	ldx	#LC0
	ldb	#100
	jsr	_print_string
	leas	1,s
	ldb	#-50
	stb	,-s
	ldx	#LC1
	ldb	#80
	jsr	_print_string
	leas	1,s
	jsr	_Display_Player
	ldb	2,s
	clra		;zero_extendqihi: R:b -> R:d
	tfr	d,x
	ldb	_a_random,x
	jsr	_draw_square_filled
	ldb	2,s
	incb
	lda	#100	;umulqihi3
	mul
		;movlsbqihi: D->B
	clra		;zero_extendqihi: R:b -> R:d
	std	,s
	ldb	#-56
	stb	,-s
	ldx	1,s
	ldb	#1
	jsr	_play_tune
	leas	1,s
	ldb	2,s
	incb
	lda	#100	;umulqihi3
	mul
		;movlsbqihi: D->B
	clra		;zero_extendqihi: R:b -> R:d
	std	,s
	ldb	#-56
	stb	,-s
	ldx	1,s
	ldb	#2
	jsr	_play_tune
	leas	1,s
	ldb	2,s
	incb
	lda	#100	;umulqihi3
	mul
		;movlsbqihi: D->B
	clra		;zero_extendqihi: R:b -> R:d
	std	,s
	ldb	#-56
	stb	,-s
	ldx	1,s
	ldb	#3
	jsr	_play_tune
	leas	1,s
	clr	,-s
	ldb	3,s
	jsr	_Display_LevelAdvancement
	leas	1,s
L26:
	ldb	_RandomSequenceCounter
	decb
	stb	_RandomSequenceCounter
	ldb	_RandomSequenceCounter
	tstb
	lbne	L27
	ldb	#30
	stb	_RandomSequenceCounter
	inc	2,s
L25:
	ldb	_RandomSequenceCounterDisplay
	cmpb	2,s	;cmpqi:(R)
	bhi	L26
	clr	_SequenceTime
	leas	3,s
	rts
	.globl	_Display_Player
_Display_Player:
	ldx	_Displayed_Squares+2
	clrb
	jsr	,x
	ldx	_Displayed_Squares+12
	ldb	#1
	jsr	,x
	ldx	_Displayed_Squares+22
	ldb	#2
	jsr	,x
	ldx	_Displayed_Squares+32
	ldb	#3
	jsr	,x
	ldx	_Displayed_Squares+42
	ldb	#4
	jsr	,x
	ldx	_Displayed_Squares+52
	ldb	#5
	jsr	,x
	ldx	_Displayed_Squares+62
	ldb	#6
	jsr	,x
	ldx	_Displayed_Squares+72
	ldb	#7
	jsr	,x
	ldx	_Displayed_Squares+82
	ldb	#8
	jsr	,x
	rts
LC2:
	.byte	71,65,77,69,32,79,86,69
	.byte	82,-128,0
LC3:
	.byte	80,82,69,83,83,32,66,85
	.byte	84,84,79,78,32,50,-128,0
LC4:
	.byte	84,79,32,82,69,83,84,65
	.byte	82,84,-128,0
LC5:
	.byte	80,82,69,83,83,32,66,85
	.byte	84,84,79,78,32,51,-128,0
LC6:
	.byte	84,79,32,71,79,32,84,79
	.byte	32,84,72,69,32,77,69,78
	.byte	85,-128,0
	.globl	_display_game_over
_display_game_over:
	leas	-2,s
	ldb	#-60
	stb	,-s
	ldx	#LC2
	ldb	#100
	jsr	_print_string
	leas	1,s
	ldb	#-80
	stb	,-s
	ldx	#LC3
	ldb	#70
	jsr	_print_string
	leas	1,s
	ldb	#-60
	stb	,-s
	ldx	#LC4
	ldb	#50
	jsr	_print_string
	leas	1,s
	ldb	#-80
	stb	,-s
	ldx	#LC5
	ldb	#20
	jsr	_print_string
	leas	1,s
	ldb	#-100
	stb	,-s
	ldx	#LC6
	clrb
	jsr	_print_string
	leas	1,s
	ldb	_b
	cmpb	#2	;cmpqi:
	bne	L33
	ldb	_buttonspressedcounter
	stb	_HighscoreNormal
L33:
	ldb	_b
	cmpb	#3	;cmpqi:
	bne	L34
	ldb	_buttonspressedcounter
	stb	_HighscoreHard
L34:
	ldb	_b
	cmpb	#4	;cmpqi:
	bne	L35
	ldb	_buttonspressedcounter
	stb	_HighscoreExtrem
L35:
	jsr	___Read_Btns
	ldb	_Vec_Buttons
	andb	#2
	tstb
	beq	L36
	ldx	#_execute_display_sequence_state
	stx	_execute_game_playing_state
	clr	,s
	bra	L37
L38:
	ldb	,s
	sex		;extendqihi2: R:b -> R:d
	tfr	d,x
	clr	_a_random_compare,x
	inc	,s
L37:
	ldb	,s
	cmpb	#19	;cmpqi:
	ble	L38
	ldb	_RandomSequenceCounterDisplay
	jsr	_rand
	clr	_buttonspressedcounter
	ldb	#1
	stb	_RandomSequenceCounterDisplay
L36:
	ldb	_Vec_Buttons
	andb	#4
	tstb
	beq	L42
	ldx	#_level_init
	stx	_execute_game_playing_state
	clr	_b
	clr	1,s
	bra	L40
L41:
	ldb	1,s
	sex		;extendqihi2: R:b -> R:d
	tfr	d,x
	clr	_a_random_compare,x
	inc	1,s
L40:
	ldb	1,s
	cmpb	#19	;cmpqi:
	ble	L41
	ldb	_RandomSequenceCounterDisplay
	jsr	_rand
	clr	_buttonspressedcounter
	ldb	#1
	stb	_RandomSequenceCounterDisplay
L42:
	leas	2,s
	rts
	.globl	_move_player
_move_player:
	pshs	y
	leas	-57,s
	jsr	___Joy_Digital
	ldb	_Vec_Joy_1_X
	stb	_joy_x
	ldb	_Vec_Joy_1_Y
	stb	_joy_y
	ldb	_joy_x
	tstb
	bge	L44
	ldb	_joy_y
	tstb
	ble	L44
	ldb	_sneakyoffset
	stb	39,s
	ldb	39,s
	clra		;zero_extendqihi: R:b -> R:d
	tfr	d,x
	stx	37,s
	ldd	37,s
	aslb
	rola
	aslb
	rola
	std	37,s
	ldd	37,s
	leax	d,x
	stx	37,s
	ldd	37,s
	addd	#1; addhi3,3
	aslb
	rola
	ldx	#_Displayed_Squares
	leay	d,x
	ldx	#_draw_square_filled
	stx	,y
	ldb	39,s
	clra		;zero_extendqihi: R:b -> R:d
	tfr	d,y
	sty	,s
	ldd	,s
	aslb
	rola
	aslb
	rola
	tfr	d,x
	stx	,s
	ldd	,s
	leay	d,y
	bra	L45
L44:
	ldb	_sneakyoffset
	stb	40,s
	ldb	40,s
	clra		;zero_extendqihi: R:b -> R:d
	tfr	d,x
	stx	35,s
	ldd	35,s
	aslb
	rola
	aslb
	rola
	std	35,s
	ldd	35,s
	leax	d,x
	stx	35,s
	ldd	35,s
	addd	#1; addhi3,3
	aslb
	rola
	ldx	#_Displayed_Squares
	leay	d,x
	ldx	#_draw_square
	stx	,y
	ldb	40,s
	clra		;zero_extendqihi: R:b -> R:d
	tfr	d,y
	sty	,s
	ldd	,s
	aslb
	rola
	aslb
	rola
	tfr	d,x
	stx	,s
	ldd	,s
	leay	d,y
L45:
	ldb	_joy_x
	tstb
	bne	L46
	ldb	_joy_y
	tstb
	ble	L46
	ldb	_sneakyoffset
	stb	2,s
	ldb	2,s
	incb
	stb	41,s
	ldb	41,s
	clra		;zero_extendqihi: R:b -> R:d
	tfr	d,x
	stx	33,s
	ldd	33,s
	aslb
	rola
	aslb
	rola
	std	33,s
	ldd	33,s
	leax	d,x
	stx	33,s
	ldd	33,s
	addd	#1; addhi3,3
	aslb
	rola
	ldx	#_Displayed_Squares
	leay	d,x
	ldx	#_draw_square_filled
	stx	,y
	ldb	41,s
	clra		;zero_extendqihi: R:b -> R:d
	tfr	d,y
	sty	,s
	ldd	,s
	aslb
	rola
	aslb
	rola
	tfr	d,x
	stx	,s
	ldd	,s
	leay	d,y
	bra	L47
L46:
	ldb	_sneakyoffset
	stb	2,s
	ldb	2,s
	incb
	stb	42,s
	ldb	42,s
	clra		;zero_extendqihi: R:b -> R:d
	tfr	d,x
	stx	31,s
	ldd	31,s
	aslb
	rola
	aslb
	rola
	std	31,s
	ldd	31,s
	leax	d,x
	stx	31,s
	ldd	31,s
	addd	#1; addhi3,3
	aslb
	rola
	ldx	#_Displayed_Squares
	leay	d,x
	ldx	#_draw_square
	stx	,y
	ldb	42,s
	clra		;zero_extendqihi: R:b -> R:d
	tfr	d,y
	sty	,s
	ldd	,s
	aslb
	rola
	aslb
	rola
	tfr	d,x
	stx	,s
	ldd	,s
	leay	d,y
L47:
	ldb	_joy_x
	tstb
	ble	L48
	ldb	_joy_y
	tstb
	ble	L48
	ldb	_sneakyoffset
	stb	2,s
	ldb	2,s
	addb	#2
	stb	43,s
	ldb	43,s
	clra		;zero_extendqihi: R:b -> R:d
	tfr	d,x
	stx	29,s
	ldd	29,s
	aslb
	rola
	aslb
	rola
	std	29,s
	ldd	29,s
	leax	d,x
	stx	29,s
	ldd	29,s
	addd	#1; addhi3,3
	aslb
	rola
	ldx	#_Displayed_Squares
	leay	d,x
	ldx	#_draw_square_filled
	stx	,y
	ldb	43,s
	clra		;zero_extendqihi: R:b -> R:d
	tfr	d,y
	sty	,s
	ldd	,s
	aslb
	rola
	aslb
	rola
	tfr	d,x
	stx	,s
	ldd	,s
	leay	d,y
	bra	L49
L48:
	ldb	_sneakyoffset
	stb	2,s
	ldb	2,s
	addb	#2
	stb	44,s
	ldb	44,s
	clra		;zero_extendqihi: R:b -> R:d
	tfr	d,x
	stx	27,s
	ldd	27,s
	aslb
	rola
	aslb
	rola
	std	27,s
	ldd	27,s
	leax	d,x
	stx	27,s
	ldd	27,s
	addd	#1; addhi3,3
	aslb
	rola
	ldx	#_Displayed_Squares
	leay	d,x
	ldx	#_draw_square
	stx	,y
	ldb	44,s
	clra		;zero_extendqihi: R:b -> R:d
	tfr	d,y
	sty	,s
	ldd	,s
	aslb
	rola
	aslb
	rola
	tfr	d,x
	stx	,s
	ldd	,s
	leay	d,y
L49:
	ldb	_joy_x
	tstb
	bge	L50
	ldb	_joy_y
	tstb
	bne	L50
	ldb	_sneakyoffset
	stb	2,s
	ldb	2,s
	addb	#3
	stb	45,s
	ldb	45,s
	clra		;zero_extendqihi: R:b -> R:d
	tfr	d,x
	stx	25,s
	ldd	25,s
	aslb
	rola
	aslb
	rola
	std	25,s
	ldd	25,s
	leax	d,x
	stx	25,s
	ldd	25,s
	addd	#1; addhi3,3
	aslb
	rola
	ldx	#_Displayed_Squares
	leay	d,x
	ldx	#_draw_square_filled
	stx	,y
	ldb	45,s
	clra		;zero_extendqihi: R:b -> R:d
	tfr	d,y
	sty	,s
	ldd	,s
	aslb
	rola
	aslb
	rola
	tfr	d,x
	stx	,s
	ldd	,s
	leay	d,y
	bra	L51
L50:
	ldb	_sneakyoffset
	stb	2,s
	ldb	2,s
	addb	#3
	stb	46,s
	ldb	46,s
	clra		;zero_extendqihi: R:b -> R:d
	tfr	d,x
	stx	23,s
	ldd	23,s
	aslb
	rola
	aslb
	rola
	std	23,s
	ldd	23,s
	leax	d,x
	stx	23,s
	ldd	23,s
	addd	#1; addhi3,3
	aslb
	rola
	ldx	#_Displayed_Squares
	leay	d,x
	ldx	#_draw_square
	stx	,y
	ldb	46,s
	clra		;zero_extendqihi: R:b -> R:d
	tfr	d,y
	sty	,s
	ldd	,s
	aslb
	rola
	aslb
	rola
	tfr	d,x
	stx	,s
	ldd	,s
	leay	d,y
L51:
	ldb	_joy_x
	tstb
	bne	L52
	ldb	_joy_y
	tstb
	bne	L52
	ldb	_sneakyoffset
	stb	2,s
	ldb	2,s
	addb	#4
	stb	47,s
	ldb	47,s
	clra		;zero_extendqihi: R:b -> R:d
	tfr	d,x
	stx	21,s
	ldd	21,s
	aslb
	rola
	aslb
	rola
	std	21,s
	ldd	21,s
	leax	d,x
	stx	21,s
	ldd	21,s
	addd	#1; addhi3,3
	aslb
	rola
	ldx	#_Displayed_Squares
	leay	d,x
	ldx	#_draw_square_filled
	stx	,y
	ldb	47,s
	clra		;zero_extendqihi: R:b -> R:d
	tfr	d,y
	sty	,s
	ldd	,s
	aslb
	rola
	aslb
	rola
	tfr	d,x
	stx	,s
	ldd	,s
	leay	d,y
	bra	L53
L52:
	ldb	_sneakyoffset
	stb	2,s
	ldb	2,s
	addb	#4
	stb	48,s
	ldb	48,s
	clra		;zero_extendqihi: R:b -> R:d
	tfr	d,x
	stx	19,s
	ldd	19,s
	aslb
	rola
	aslb
	rola
	std	19,s
	ldd	19,s
	leax	d,x
	stx	19,s
	ldd	19,s
	addd	#1; addhi3,3
	aslb
	rola
	ldx	#_Displayed_Squares
	leay	d,x
	ldx	#_draw_square
	stx	,y
	ldb	48,s
	clra		;zero_extendqihi: R:b -> R:d
	tfr	d,y
	sty	,s
	ldd	,s
	aslb
	rola
	aslb
	rola
	tfr	d,x
	stx	,s
	ldd	,s
	leay	d,y
L53:
	ldb	_joy_x
	tstb
	ble	L54
	ldb	_joy_y
	tstb
	bne	L54
	ldb	_sneakyoffset
	stb	2,s
	ldb	2,s
	addb	#5
	stb	49,s
	ldb	49,s
	clra		;zero_extendqihi: R:b -> R:d
	tfr	d,x
	stx	17,s
	ldd	17,s
	aslb
	rola
	aslb
	rola
	std	17,s
	ldd	17,s
	leax	d,x
	stx	17,s
	ldd	17,s
	addd	#1; addhi3,3
	aslb
	rola
	ldx	#_Displayed_Squares
	leay	d,x
	ldx	#_draw_square_filled
	stx	,y
	ldb	49,s
	clra		;zero_extendqihi: R:b -> R:d
	tfr	d,y
	sty	,s
	ldd	,s
	aslb
	rola
	aslb
	rola
	tfr	d,x
	stx	,s
	ldd	,s
	leay	d,y
	bra	L55
L54:
	ldb	_sneakyoffset
	stb	2,s
	ldb	2,s
	addb	#5
	stb	50,s
	ldb	50,s
	clra		;zero_extendqihi: R:b -> R:d
	tfr	d,x
	stx	15,s
	ldd	15,s
	aslb
	rola
	aslb
	rola
	std	15,s
	ldd	15,s
	leax	d,x
	stx	15,s
	ldd	15,s
	addd	#1; addhi3,3
	aslb
	rola
	ldx	#_Displayed_Squares
	leay	d,x
	ldx	#_draw_square
	stx	,y
	ldb	50,s
	clra		;zero_extendqihi: R:b -> R:d
	tfr	d,y
	sty	,s
	ldd	,s
	aslb
	rola
	aslb
	rola
	tfr	d,x
	stx	,s
	ldd	,s
	leay	d,y
L55:
	ldb	_joy_x
	tstb
	bge	L56
	ldb	_joy_y
	tstb
	bge	L56
	ldb	_sneakyoffset
	stb	2,s
	ldb	2,s
	addb	#6
	stb	51,s
	ldb	51,s
	clra		;zero_extendqihi: R:b -> R:d
	tfr	d,x
	stx	13,s
	ldd	13,s
	aslb
	rola
	aslb
	rola
	std	13,s
	ldd	13,s
	leax	d,x
	stx	13,s
	ldd	13,s
	addd	#1; addhi3,3
	aslb
	rola
	ldx	#_Displayed_Squares
	leay	d,x
	ldx	#_draw_square_filled
	stx	,y
	ldb	51,s
	clra		;zero_extendqihi: R:b -> R:d
	tfr	d,y
	sty	,s
	ldd	,s
	aslb
	rola
	aslb
	rola
	tfr	d,x
	stx	,s
	ldd	,s
	leay	d,y
	bra	L57
L56:
	ldb	_sneakyoffset
	stb	2,s
	ldb	2,s
	addb	#6
	stb	52,s
	ldb	52,s
	clra		;zero_extendqihi: R:b -> R:d
	tfr	d,x
	stx	11,s
	ldd	11,s
	aslb
	rola
	aslb
	rola
	std	11,s
	ldd	11,s
	leax	d,x
	stx	11,s
	ldd	11,s
	addd	#1; addhi3,3
	aslb
	rola
	ldx	#_Displayed_Squares
	leay	d,x
	ldx	#_draw_square
	stx	,y
	ldb	52,s
	clra		;zero_extendqihi: R:b -> R:d
	tfr	d,y
	sty	,s
	ldd	,s
	aslb
	rola
	aslb
	rola
	tfr	d,x
	stx	,s
	ldd	,s
	leay	d,y
L57:
	ldb	_joy_x
	tstb
	bne	L58
	ldb	_joy_y
	tstb
	bge	L58
	ldb	_sneakyoffset
	stb	2,s
	ldb	2,s
	addb	#7
	stb	53,s
	ldb	53,s
	clra		;zero_extendqihi: R:b -> R:d
	tfr	d,x
	stx	9,s
	ldd	9,s
	aslb
	rola
	aslb
	rola
	std	9,s
	ldd	9,s
	leax	d,x
	stx	9,s
	ldd	9,s
	addd	#1; addhi3,3
	aslb
	rola
	ldx	#_Displayed_Squares
	leay	d,x
	ldx	#_draw_square_filled
	stx	,y
	ldb	53,s
	clra		;zero_extendqihi: R:b -> R:d
	tfr	d,y
	sty	,s
	ldd	,s
	aslb
	rola
	aslb
	rola
	tfr	d,x
	stx	,s
	ldd	,s
	leay	d,y
	bra	L59
L58:
	ldb	_sneakyoffset
	stb	2,s
	ldb	2,s
	addb	#7
	stb	54,s
	ldb	54,s
	clra		;zero_extendqihi: R:b -> R:d
	tfr	d,x
	stx	7,s
	ldd	7,s
	aslb
	rola
	aslb
	rola
	std	7,s
	ldd	7,s
	leax	d,x
	stx	7,s
	ldd	7,s
	addd	#1; addhi3,3
	aslb
	rola
	ldx	#_Displayed_Squares
	leay	d,x
	ldx	#_draw_square
	stx	,y
	ldb	54,s
	clra		;zero_extendqihi: R:b -> R:d
	tfr	d,y
	sty	,s
	ldd	,s
	aslb
	rola
	aslb
	rola
	tfr	d,x
	stx	,s
	ldd	,s
	leay	d,y
L59:
	ldb	_joy_x
	tstb
	ble	L60
	ldb	_joy_y
	tstb
	bge	L60
	ldb	_sneakyoffset
	stb	2,s
	ldb	2,s
	addb	#8
	stb	55,s
	ldb	55,s
	clra		;zero_extendqihi: R:b -> R:d
	tfr	d,x
	stx	5,s
	ldd	5,s
	aslb
	rola
	aslb
	rola
	std	5,s
	ldd	5,s
	leax	d,x
	stx	5,s
	ldd	5,s
	addd	#1; addhi3,3
	aslb
	rola
	ldx	#_Displayed_Squares
	leay	d,x
	ldx	#_draw_square_filled
	stx	,y
	ldb	55,s
	clra		;zero_extendqihi: R:b -> R:d
	tfr	d,y
	sty	,s
	ldd	,s
	aslb
	rola
	aslb
	rola
	tfr	d,x
	stx	,s
	ldd	,s
	leay	d,y
	bra	L62
L60:
	ldb	_sneakyoffset
	stb	2,s
	ldb	2,s
	addb	#8
	stb	56,s
	ldb	56,s
	clra		;zero_extendqihi: R:b -> R:d
	tfr	d,x
	stx	3,s
	ldd	3,s
	aslb
	rola
	aslb
	rola
	std	3,s
	ldd	3,s
	leax	d,x
	stx	3,s
	ldd	3,s
	addd	#1; addhi3,3
	aslb
	rola
	ldx	#_Displayed_Squares
	leay	d,x
	ldx	#_draw_square
	stx	,y
	ldb	56,s
	clra		;zero_extendqihi: R:b -> R:d
	tfr	d,y
	sty	,s
	ldd	,s
	aslb
	rola
	aslb
	rola
	tfr	d,x
	stx	,s
	ldd	,s
	leay	d,y
L62:
	leas	57,s
	puls	y,pc
	.globl	_read_player_input
_read_player_input:
	leas	-2,s
	jsr	___Read_Btns
	jsr	___Joy_Digital
	ldb	_Vec_Joy_1_X
	stb	_joy_x
	ldb	_Vec_Joy_1_Y
	stb	_joy_y
	ldb	_Vec_Joy_1_X
	stb	_joy_x
	ldb	_Vec_Joy_1_Y
	stb	_joy_y
	ldb	_joy_x
	tstb
	bge	L64
	ldb	_joy_y
	tstb
	ble	L64
	clr	_temppass
	bra	L65
L64:
	ldb	_temppass
	stb	_temppass
L65:
	ldb	_joy_x
	tstb
	bne	L66
	ldb	_joy_y
	tstb
	ble	L66
	ldb	#1
	stb	_temppass
	bra	L67
L66:
	ldb	_temppass
	stb	_temppass
L67:
	ldb	_joy_x
	tstb
	ble	L68
	ldb	_joy_y
	tstb
	ble	L68
	ldb	#2
	stb	_temppass
	bra	L69
L68:
	ldb	_temppass
	stb	_temppass
L69:
	ldb	_joy_x
	tstb
	bge	L70
	ldb	_joy_y
	tstb
	bne	L70
	ldb	#3
	stb	_temppass
	bra	L71
L70:
	ldb	_temppass
	stb	_temppass
L71:
	ldb	_joy_x
	tstb
	bne	L72
	ldb	_joy_y
	tstb
	bne	L72
	ldb	#4
	stb	_temppass
	bra	L73
L72:
	ldb	_temppass
	stb	_temppass
L73:
	ldb	_joy_x
	tstb
	ble	L74
	ldb	_joy_y
	tstb
	bne	L74
	ldb	#5
	stb	_temppass
	bra	L75
L74:
	ldb	_temppass
	stb	_temppass
L75:
	ldb	_joy_x
	tstb
	bge	L76
	ldb	_joy_y
	tstb
	bge	L76
	ldb	#6
	stb	_temppass
	bra	L77
L76:
	ldb	_temppass
	stb	_temppass
L77:
	ldb	_joy_x
	tstb
	bne	L78
	ldb	_joy_y
	tstb
	bge	L78
	ldb	#7
	stb	_temppass
	bra	L79
L78:
	ldb	_temppass
	stb	_temppass
L79:
	ldb	_joy_x
	tstb
	ble	L80
	ldb	_joy_y
	tstb
	bge	L80
	ldb	#8
	stb	_temppass
	bra	L81
L80:
	ldb	_temppass
	stb	_temppass
L81:
	ldb	_Vec_Buttons
	andb	#1
	tstb
	beq	L83
	ldb	_buttonspressedcounter
	stb	,s
	ldb	_temppass
	stb	1,s
	ldb	,s
	clra		;zero_extendqihi: R:b -> R:d
	tfr	d,x
	ldb	1,s
	stb	_a_random_compare,x
	ldb	_buttonspressedcounter
	incb
	stb	_buttonspressedcounter
L83:
	leas	2,s
	rts
LC7:
	.byte	33,83,78,69,65,75,89,32
	.byte	79,70,70,83,69,84,33,-128
	.byte	0
	.globl	_Set_traps
_Set_traps:
	clr	_sneakyoffset
	ldb	_RandomSequenceCounterDisplay
	cmpb	#3	;cmpqi:
	bls	L85
	ldb	_RandomSequenceCounterDisplay
	cmpb	#7	;cmpqi:
	bhi	L85
	ldb	#-56
	stb	,-s
	ldx	#400
	ldb	#3
	jsr	_play_tune
	leas	1,s
	ldb	#-90
	stb	,-s
	ldx	#LC7
	ldb	#115
	jsr	_print_string
	leas	1,s
	ldb	#3
	stb	_sneakyoffset
L85:
	ldb	_RandomSequenceCounterDisplay
	cmpb	#10	;cmpqi:
	bls	L87
	ldb	_RandomSequenceCounterDisplay
	cmpb	#13	;cmpqi:
	bhi	L87
	ldb	#-56
	stb	,-s
	ldx	#400
	ldb	#3
	jsr	_play_tune
	leas	1,s
	ldb	#-90
	stb	,-s
	ldx	#LC7
	ldb	#115
	jsr	_print_string
	leas	1,s
	ldb	#2
	stb	_sneakyoffset
L87:
	rts
	.globl	_add_square_x
_add_square_x:
	pshs	y,u
	leas	-14,s
	stb	13,s
	ldb	13,s
	stb	11,s
	ldb	13,s
	sex		;extendqihi2: R:b -> R:d
	std	9,s
	ldd	9,s
	aslb
	rola
	std	9,s
	ldd	9,s
	aslb
	rola
	aslb
	rola
	ldx	9,s
	leax	d,x
	stx	9,s
	ldu	9,s
	leax	_Displayed_Squares,u
	ldb	,x
	stb	2,s
	ldb	2,s
	incb
	stb	12,s
	ldb	11,s
	sex		;extendqihi2: R:b -> R:d
	std	,s
	ldx	,s
	stx	7,s
	ldd	7,s
	aslb
	rola
	std	7,s
	ldd	7,s
	aslb
	rola
	aslb
	rola
	ldu	7,s
	leau	d,u
	stu	7,s
	ldu	7,s
	leax	_Displayed_Squares,u
	ldb	12,s
	stb	,x
	ldb	13,s
	sex		;extendqihi2: R:b -> R:d
	std	5,s
	ldd	5,s
	aslb
	rola
	std	5,s
	ldd	5,s
	aslb
	rola
	aslb
	rola
	ldx	5,s
	leax	d,x
	stx	5,s
	ldu	5,s
	leax	_Displayed_Squares,u
	ldb	,x
	cmpb	#25	;cmpqi:
	ble	L90
	ldb	13,s
	sex		;extendqihi2: R:b -> R:d
	std	3,s
	ldd	3,s
	aslb
	rola
	std	3,s
	ldd	3,s
	aslb
	rola
	aslb
	rola
	ldx	3,s
	leax	d,x
	stx	3,s
	ldu	3,s
	leay	_Displayed_Squares+4,u
	ldx	#_sub_square_x
	stx	,y
L90:
	leas	14,s
	puls	y,u,pc
	.globl	_add_square_y
_add_square_y:
	pshs	y,u
	leas	-14,s
	stb	13,s
	ldb	13,s
	stb	11,s
	ldb	13,s
	sex		;extendqihi2: R:b -> R:d
	std	9,s
	ldd	9,s
	aslb
	rola
	std	9,s
	ldd	9,s
	aslb
	rola
	aslb
	rola
	ldx	9,s
	leax	d,x
	stx	9,s
	ldu	9,s
	leax	_Displayed_Squares+1,u
	ldb	,x
	stb	2,s
	ldb	2,s
	incb
	stb	12,s
	ldb	11,s
	sex		;extendqihi2: R:b -> R:d
	std	,s
	ldx	,s
	stx	7,s
	ldd	7,s
	aslb
	rola
	std	7,s
	ldd	7,s
	aslb
	rola
	aslb
	rola
	ldu	7,s
	leau	d,u
	stu	7,s
	ldu	7,s
	leax	_Displayed_Squares+1,u
	ldb	12,s
	stb	,x
	ldb	13,s
	sex		;extendqihi2: R:b -> R:d
	std	5,s
	ldd	5,s
	aslb
	rola
	std	5,s
	ldd	5,s
	aslb
	rola
	aslb
	rola
	ldx	5,s
	leax	d,x
	stx	5,s
	ldu	5,s
	leax	_Displayed_Squares+1,u
	ldb	,x
	cmpb	#25	;cmpqi:
	ble	L93
	ldb	13,s
	sex		;extendqihi2: R:b -> R:d
	std	3,s
	ldd	3,s
	aslb
	rola
	std	3,s
	ldd	3,s
	aslb
	rola
	aslb
	rola
	ldx	3,s
	leax	d,x
	stx	3,s
	ldu	3,s
	leay	_Displayed_Squares+6,u
	ldx	#_sub_square_y
	stx	,y
L93:
	leas	14,s
	puls	y,u,pc
	.globl	_sub_square_x
_sub_square_x:
	pshs	y,u
	leas	-14,s
	stb	13,s
	ldb	13,s
	stb	11,s
	ldb	13,s
	sex		;extendqihi2: R:b -> R:d
	std	9,s
	ldd	9,s
	aslb
	rola
	std	9,s
	ldd	9,s
	aslb
	rola
	aslb
	rola
	ldx	9,s
	leax	d,x
	stx	9,s
	ldu	9,s
	leax	_Displayed_Squares,u
	ldb	,x
	stb	2,s
	ldb	2,s
	decb
	stb	12,s
	ldb	11,s
	sex		;extendqihi2: R:b -> R:d
	std	,s
	ldx	,s
	stx	7,s
	ldd	7,s
	aslb
	rola
	std	7,s
	ldd	7,s
	aslb
	rola
	aslb
	rola
	ldu	7,s
	leau	d,u
	stu	7,s
	ldu	7,s
	leax	_Displayed_Squares,u
	ldb	12,s
	stb	,x
	ldb	13,s
	sex		;extendqihi2: R:b -> R:d
	std	5,s
	ldd	5,s
	aslb
	rola
	std	5,s
	ldd	5,s
	aslb
	rola
	aslb
	rola
	ldx	5,s
	leax	d,x
	stx	5,s
	ldu	5,s
	leax	_Displayed_Squares,u
	ldb	,x
	cmpb	#-25	;cmpqi:
	bge	L96
	ldb	13,s
	sex		;extendqihi2: R:b -> R:d
	std	3,s
	ldd	3,s
	aslb
	rola
	std	3,s
	ldd	3,s
	aslb
	rola
	aslb
	rola
	ldx	3,s
	leax	d,x
	stx	3,s
	ldu	3,s
	leay	_Displayed_Squares+4,u
	ldx	#_add_square_x
	stx	,y
L96:
	leas	14,s
	puls	y,u,pc
	.globl	_sub_square_y
_sub_square_y:
	pshs	y,u
	leas	-14,s
	stb	13,s
	ldb	13,s
	stb	11,s
	ldb	13,s
	sex		;extendqihi2: R:b -> R:d
	std	9,s
	ldd	9,s
	aslb
	rola
	std	9,s
	ldd	9,s
	aslb
	rola
	aslb
	rola
	ldx	9,s
	leax	d,x
	stx	9,s
	ldu	9,s
	leax	_Displayed_Squares+1,u
	ldb	,x
	stb	2,s
	ldb	2,s
	decb
	stb	12,s
	ldb	11,s
	sex		;extendqihi2: R:b -> R:d
	std	,s
	ldx	,s
	stx	7,s
	ldd	7,s
	aslb
	rola
	std	7,s
	ldd	7,s
	aslb
	rola
	aslb
	rola
	ldu	7,s
	leau	d,u
	stu	7,s
	ldu	7,s
	leax	_Displayed_Squares+1,u
	ldb	12,s
	stb	,x
	ldb	13,s
	sex		;extendqihi2: R:b -> R:d
	std	5,s
	ldd	5,s
	aslb
	rola
	std	5,s
	ldd	5,s
	aslb
	rola
	aslb
	rola
	ldx	5,s
	leax	d,x
	stx	5,s
	ldu	5,s
	leax	_Displayed_Squares+1,u
	ldb	,x
	cmpb	#-25	;cmpqi:
	bge	L99
	ldb	13,s
	sex		;extendqihi2: R:b -> R:d
	std	3,s
	ldd	3,s
	aslb
	rola
	std	3,s
	ldd	3,s
	aslb
	rola
	aslb
	rola
	ldx	3,s
	leax	d,x
	stx	3,s
	ldu	3,s
	leay	_Displayed_Squares+6,u
	ldx	#_add_square_y
	stx	,y
L99:
	leas	14,s
	puls	y,u,pc
	.globl	_Add_Movement
_Add_Movement:
	ldx	_Displayed_Squares+4
	clrb
	jsr	,x
	ldx	_Displayed_Squares+14
	ldb	#1
	jsr	,x
	ldx	_Displayed_Squares+24
	ldb	#2
	jsr	,x
	ldx	_Displayed_Squares+34
	ldb	#3
	jsr	,x
	ldx	_Displayed_Squares+44
	ldb	#4
	jsr	,x
	ldx	_Displayed_Squares+54
	ldb	#5
	jsr	,x
	ldx	_Displayed_Squares+64
	ldb	#6
	jsr	,x
	ldx	_Displayed_Squares+74
	ldb	#7
	jsr	,x
	ldx	_Displayed_Squares+84
	ldb	#8
	jsr	,x
	ldx	_Displayed_Squares+6
	clrb
	jsr	,x
	ldx	_Displayed_Squares+16
	ldb	#1
	jsr	,x
	ldx	_Displayed_Squares+26
	ldb	#2
	jsr	,x
	ldx	_Displayed_Squares+36
	ldb	#3
	jsr	,x
	ldx	_Displayed_Squares+46
	ldb	#4
	jsr	,x
	ldx	_Displayed_Squares+56
	ldb	#5
	jsr	,x
	ldx	_Displayed_Squares+66
	ldb	#6
	jsr	,x
	ldx	_Displayed_Squares+76
	ldb	#7
	jsr	,x
	ldx	_Displayed_Squares+86
	ldb	#8
	jsr	,x
	rts
LC8:
	.byte	89,79,85,32,67,79,77,80
	.byte	76,69,84,69,68,32,84,72
	.byte	73,83,32,76,69,86,69,76
	.byte	-128,0
	.globl	_SaveHighscore
_SaveHighscore:
	leas	-2,s
	ldb	_b
	cmpb	#2	;cmpqi:
	bne	L103
	ldb	_RandomSequenceCounterDisplay
	stb	_HighscoreNormal
L103:
	ldb	_b
	cmpb	#3	;cmpqi:
	bne	L104
	ldb	_RandomSequenceCounterDisplay
	stb	_HighscoreHard
L104:
	ldb	_b
	cmpb	#4	;cmpqi:
	bne	L105
	ldb	_RandomSequenceCounterDisplay
	stb	_HighscoreExtrem
L105:
	ldb	_buttonspressedcounter
	cmpb	#16	;cmpqi:
	lbne	L112
	ldb	#-120
	stb	,-s
	ldx	#LC8
	ldb	#100
	jsr	_print_string
	leas	1,s
	ldb	#-80
	stb	,-s
	ldx	#LC3
	ldb	#70
	jsr	_print_string
	leas	1,s
	ldb	#-60
	stb	,-s
	ldx	#LC4
	ldb	#50
	jsr	_print_string
	leas	1,s
	ldb	#-80
	stb	,-s
	ldx	#LC5
	ldb	#20
	jsr	_print_string
	leas	1,s
	ldb	#-100
	stb	,-s
	ldx	#LC6
	clrb
	jsr	_print_string
	leas	1,s
	jsr	___Read_Btns
	ldb	_Vec_Buttons
	andb	#2
	tstb
	beq	L107
	ldx	#_execute_display_sequence_state
	stx	_execute_game_playing_state
	clr	,s
	bra	L108
L109:
	ldb	,s
	sex		;extendqihi2: R:b -> R:d
	tfr	d,x
	clr	_a_random_compare,x
	inc	,s
L108:
	ldb	,s
	cmpb	#19	;cmpqi:
	ble	L109
	ldb	_RandomSequenceCounterDisplay
	jsr	_rand
	ldb	#1
	stb	_RandomSequenceCounterDisplay
	clr	_buttonspressedcounter
L107:
	ldb	_Vec_Buttons
	andb	#4
	tstb
	beq	L112
	ldx	#_level_init
	stx	_execute_game_playing_state
	clr	_b
	clr	1,s
	bra	L110
L111:
	ldb	1,s
	sex		;extendqihi2: R:b -> R:d
	tfr	d,x
	clr	_a_random_compare,x
	inc	1,s
L110:
	ldb	1,s
	cmpb	#19	;cmpqi:
	ble	L111
	ldb	_RandomSequenceCounterDisplay
	jsr	_rand
	ldb	#1
	stb	_RandomSequenceCounterDisplay
	clr	_buttonspressedcounter
L112:
	leas	2,s
	rts
	.globl	_check_successfully_repeated
_check_successfully_repeated:
	leas	-4,s
	ldb	_buttonspressedcounter
	stb	3,s
	bra	L114
L116:
	ldb	3,s
	clra		;zero_extendqihi: R:b -> R:d
	tfr	d,x
	ldb	_a_random,x
	stb	1,s
	ldb	3,s
	clra		;zero_extendqihi: R:b -> R:d
	tfr	d,x
	ldb	_a_random_compare,x
	cmpb	1,s	;cmpqi:(R)
	beq	L114
	ldx	#_display_game_over
	stx	_execute_game_playing_state
L114:
	ldb	3,s
	stb	,s
	tst	,s
	beq	L115
	ldb	#1
	stb	,s
L115:
	ldb	,s
	dec	3,s
	tstb
	bne	L116
	ldb	_RandomSequenceCounterDisplay
	stb	2,s
	ldb	_buttonspressedcounter
	cmpb	2,s	;cmpqi:(R)
	bne	L118
	ldx	#_draw_square
	stx	_Displayed_Squares+2
	ldx	#_draw_square
	stx	_Displayed_Squares+12
	ldx	#_draw_square
	stx	_Displayed_Squares+22
	ldx	#_draw_square
	stx	_Displayed_Squares+32
	ldx	#_draw_square
	stx	_Displayed_Squares+42
	ldx	#_draw_square
	stx	_Displayed_Squares+52
	ldx	#_draw_square
	stx	_Displayed_Squares+62
	ldx	#_draw_square
	stx	_Displayed_Squares+72
	ldx	#_draw_square
	stx	_Displayed_Squares+82
	ldb	_RandomSequenceCounterDisplay
	incb
	stb	_RandomSequenceCounterDisplay
	clr	_buttonspressedcounter
	ldb	#-56
	stb	_counter
	ldx	#_execute_display_sequence_state
	stx	_execute_game_playing_state
L118:
	leas	4,s
	rts
	.globl	_execute_repeat_sequence_state
_execute_repeat_sequence_state:
	leas	-3,s
	jsr	_Display_Gamefield
	jsr	_Display_TimeLeft
	jsr	_Display_Player
	ldb	_buttonspressedcounter
	stb	1,s
	ldb	_RandomSequenceCounterDisplay
	stb	2,s
	ldb	_buttonspressedcounter
	stb	,s
	ldb	2,s
	subb	,s
	stb	,s
	ldb	1,s
	pshs	b
	ldb	1,s
	jsr	_Display_LevelAdvancement
	leas	1,s
	ldb	_b
	cmpb	#3	;cmpqi:
	bne	L120
	jsr	_Set_traps
L120:
	ldb	_b
	cmpb	#4	;cmpqi:
	bne	L121
	jsr	_Add_Movement
L121:
	ldb	_Random_Number_for_random_things
	incb
	stb	_Random_Number_for_random_things
	jsr	_move_player
	jsr	_read_player_input
	jsr	_check_successfully_repeated
	leas	3,s
	rts
	.globl	_execute_display_sequence_state
_execute_display_sequence_state:
	jsr	_Display_Gamefield
	jsr	_Display_RandomSequence
	ldx	#_execute_repeat_sequence_state
	stx	_execute_game_playing_state
	rts
LC9:
	.byte	83,69,76,69,67,84,32,84
	.byte	72,69,32,71,65,77,69,77
	.byte	79,68,69,-128,0
LC10:
	.byte	78,79,82,77,65,76,32,49
	.byte	54,47,-128,0
LC11:
	.byte	72,65,82,68,32,32,32,49
	.byte	54,47,-128,0
LC12:
	.byte	69,88,84,82,69,77,32,49
	.byte	54,47,-128,0
	.globl	_level_init
_level_init:
	leas	-3,s
	ldb	#1
	stb	_Vec_Joy_Mux_1_X
	ldb	#3
	stb	_Vec_Joy_Mux_1_Y
	clr	_Vec_Joy_Mux_2_X
	clr	_Vec_Joy_Mux_2_Y
	clr	,s
	ldb	#1
	stb	1,s
	ldb	#1
	stb	2,s
	lbra	L126
L133:
	jsr	___Read_Btns
	inc	,s
	jsr	___Reset0Ref
	ldb	#-120
	stb	,-s
	ldx	#LC9
	ldb	#100
	jsr	_print_string
	leas	1,s
	ldb	#-50
	stb	,-s
	ldx	#LC10
	ldb	#60
	jsr	_print_string
	leas	1,s
	ldb	#-50
	stb	,-s
	ldx	#LC11
	ldb	#40
	jsr	_print_string
	leas	1,s
	ldb	#-50
	stb	,-s
	ldx	#LC12
	ldb	#20
	jsr	_print_string
	leas	1,s
	jsr	___Reset0Ref
	ldb	_HighscoreNormal
	pshs	b
	ldb	#60
	stb	,-s
	ldb	#60
	jsr	_print_unsigned_int2
	leas	2,s
	ldb	_HighscoreHard
	pshs	b
	ldb	#60
	stb	,-s
	ldb	#40
	jsr	_print_unsigned_int2
	leas	2,s
	ldb	_HighscoreExtrem
	pshs	b
	ldb	#60
	stb	,-s
	ldb	#20
	jsr	_print_unsigned_int2
	leas	2,s
	jsr	___Read_Btns
	jsr	___Joy_Digital
	ldb	_Vec_Joy_1_Y
	tstb
	bne	L127
	ldb	#1
	stb	2,s
L127:
	ldb	_Vec_Joy_1_Y
	tstb
	ble	L128
	tst	1,s
	beq	L128
	ldb	2,s
	cmpb	#1	;cmpqi:
	bne	L128
	dec	2,s
	dec	1,s
L128:
	ldb	_Vec_Joy_1_Y
	tstb
	bge	L129
	ldb	1,s
	cmpb	#1	;cmpqi:
	bhi	L129
	ldb	2,s
	cmpb	#1	;cmpqi:
	bne	L129
	dec	2,s
	inc	1,s
L129:
	ldb	1,s
	jsr	_draw_menu_arrow
	ldb	_Vec_Buttons
	andb	#1
	tstb
	beq	L126
	tst	1,s
	bne	L130
	ldb	#2
	stb	_b
	bra	L126
L130:
	ldb	1,s
	cmpb	#1	;cmpqi:
	bne	L131
	ldb	#3
	stb	_b
	bra	L126
L131:
	ldb	1,s
	cmpb	#2	;cmpqi:
	bne	L132
	ldb	#4
	stb	_b
	bra	L126
L132:
	ldb	#2
	stb	_b
L126:
	ldb	_b
	cmpb	#1	;cmpqi:
	lble	L133
	ldb	,s
	jsr	_rand
	clr	_current_level
	ldx	#_execute_display_sequence_state
	stx	_execute_game_playing_state
	leas	3,s
	rts
	.globl	_level_play
_level_play:
	leas	-4,s
	bra	L136
L137:
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
	ldx	_execute_game_playing_state
	jsr	,x
L136:
	ldb	_current_level
	tstb
	beq	L137
	leas	4,s
	rts
