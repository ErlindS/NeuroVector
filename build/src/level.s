;;; gcc for m6809 : Mar 17 2019 13:25:32
;;; 4.3.6 (gcc6809)
;;; ABI version 1
;;; -mabi=bx -mint8 -fomit-frame-pointer -O0
	.module	level.c
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
	.globl	_a_random
	.area	.data
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
	.globl	_RandomSequenceCounter
_RandomSequenceCounter:
	.byte	-56
	.globl	_RandomSequenceCounterDisplay
_RandomSequenceCounterDisplay:
	.byte	0
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
	.globl	_current_level
	.area	.data
_current_level:
	.byte	0
	.globl	_SequenceTime
_SequenceTime:
	.byte	1
	.globl	_counter
_counter:
	.byte	0
	.area	.text
LC0:
	.byte	84,73,77,69,32,76,69,70
	.byte	84,-128,0
LC1:
	.byte	71,65,77,69,32,79,86,69
	.byte	82,-128,0
	.globl	_Display_TimeLeft
_Display_TimeLeft:
	ldb	#-60
	stb	,-s
	ldx	#LC0
	ldb	#100
	jsr	_print_string
	leas	1,s
	ldb	_counter
	jsr	_Loadingbar
	ldb	_counter
	tstb
	bne	L12
L11:
	ldb	#-60
	stb	,-s
	ldx	#LC1
	ldb	#100
	jsr	_print_string
	leas	1,s
	bra	L11
L12:
	rts
LC2:
	.byte	82,69,77,69,77,66,69,82
	.byte	32,84,72,69,-128,0
LC3:
	.byte	83,69,81,85,69,78,67,69
	.byte	-128,0
	.globl	_Display_RandomSequence
_Display_RandomSequence:
	leas	-3,s
	clr	2,s
	lbra	L14
L16:
	ldb	#-56
	stb	_counter
	jsr	___Wait_Recal
	jsr	_Display_Gamefield
	ldb	#-75
	stb	,-s
	ldx	#LC2
	ldb	#100
	jsr	_print_string
	leas	1,s
	ldb	#-50
	stb	,-s
	ldx	#LC3
	ldb	#80
	jsr	_print_string
	leas	1,s
	ldb	2,s
	clra		;zero_extendqihi: R:b -> R:d
	tfr	d,x
	ldb	_a_random,x
	jsr	_draw_cross
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
L15:
	ldb	_RandomSequenceCounter
	decb
	stb	_RandomSequenceCounter
	ldb	_RandomSequenceCounter
	tstb
	lbne	L16
	ldb	#30
	stb	_RandomSequenceCounter
	inc	2,s
L14:
	ldb	_RandomSequenceCounterDisplay
	incb
	cmpb	2,s	;cmpqi:
	bhi	L15
	clr	_SequenceTime
	leas	3,s
	rts
	.area	.bss
	.globl	_execute_game_playing_state
_execute_game_playing_state:	.blkb	2
	.globl	_buttonspressedcounter
	.area	.data
_buttonspressedcounter:
	.byte	0
	.area	.text
LC4:
	.byte	80,82,69,83,83,32,50,32
	.byte	66,85,84,84,79,78,-128,0
LC5:
	.byte	84,79,32,82,69,83,84,65
	.byte	82,84,-128,0
	.globl	_display_game_over
_display_game_over:
	leas	-1,s
	ldb	#-60
	stb	,-s
	ldx	#LC1
	ldb	#100
	jsr	_print_string
	leas	1,s
	ldb	#-80
	stb	,-s
	ldx	#LC4
	ldb	#80
	jsr	_print_string
	leas	1,s
	ldb	#-60
	stb	,-s
	ldx	#LC5
	ldb	#60
	jsr	_print_string
	leas	1,s
	jsr	___Read_Btns
	ldb	_Vec_Buttons
	andb	#2
	tstb
	beq	L23
	ldx	#_execute_display_sequence_state
	stx	_execute_game_playing_state
	clr	,s
	bra	L21
L22:
	ldb	,s
	sex		;extendqihi2: R:b -> R:d
	tfr	d,x
	clr	_a_random_compare,x
	inc	,s
L21:
	ldb	,s
	cmpb	#19	;cmpqi:
	ble	L22
	ldb	_RandomSequenceCounterDisplay
	jsr	_rand
	clr	_RandomSequenceCounterDisplay
	clr	_buttonspressedcounter
L23:
	leas	1,s
	rts
	.globl	_joy_x
	.area	.data
_joy_x:
	.byte	0
	.globl	_joy_y
_joy_y:
	.byte	0
	.globl	_temppass
_temppass:
	.byte	0
	.area	.text
	.globl	_move_player
_move_player:
	jsr	___Joy_Digital
	ldb	_Vec_Joy_1_X
	stb	_joy_x
	ldb	_Vec_Joy_1_Y
	stb	_joy_y
	ldb	_joy_x
	pshs	b
	ldb	#-90
	stb	,-s
	ldb	#-70
	jsr	_print_signed_int
	leas	2,s
	ldb	_joy_y
	pshs	b
	ldb	#-50
	stb	,-s
	ldb	#-70
	jsr	_print_signed_int
	leas	2,s
	ldb	_joy_x
	tstb
	bge	L25
	ldb	_joy_y
	tstb
	ble	L25
	ldb	#1
	stb	_temppass
L25:
	ldb	_joy_x
	tstb
	bne	L26
	ldb	_joy_y
	tstb
	ble	L26
	ldb	#2
	stb	_temppass
L26:
	ldb	_joy_x
	tstb
	ble	L27
	ldb	_joy_y
	tstb
	ble	L27
	ldb	#3
	stb	_temppass
L27:
	ldb	_joy_x
	tstb
	bge	L28
	ldb	_joy_y
	tstb
	bne	L28
	ldb	#4
	stb	_temppass
L28:
	ldb	_joy_x
	tstb
	bne	L29
	ldb	_joy_y
	tstb
	bne	L29
	ldb	#5
	stb	_temppass
L29:
	ldb	_joy_x
	tstb
	ble	L30
	ldb	_joy_y
	tstb
	bne	L30
	ldb	#6
	stb	_temppass
L30:
	ldb	_joy_x
	tstb
	bge	L31
	ldb	_joy_y
	tstb
	bge	L31
	ldb	#7
	stb	_temppass
L31:
	ldb	_joy_x
	tstb
	bne	L32
	ldb	_joy_y
	tstb
	bge	L32
	ldb	#8
	stb	_temppass
L32:
	ldb	_joy_x
	tstb
	ble	L33
	ldb	_joy_y
	tstb
	bge	L33
	ldb	#9
	stb	_temppass
L33:
	ldb	_temppass
	jsr	_draw_cross
	rts
	.globl	_read_player_input
_read_player_input:
	leas	-2,s
	jsr	___Read_Btns
	ldb	_Vec_Buttons
	andb	#1
	tstb
	beq	L37
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
L37:
	leas	2,s
	rts
	.globl	_execute_repeat_sequence_state
_execute_repeat_sequence_state:
	jsr	_Display_Gamefield
	jsr	_Display_TimeLeft
	jsr	_move_player
	jsr	_read_player_input
	jsr	_check_successfully_repeated
	rts
	.globl	_execute_display_sequence_state
_execute_display_sequence_state:
	jsr	_Display_Gamefield
	jsr	_Display_RandomSequence
	ldx	#_execute_repeat_sequence_state
	stx	_execute_game_playing_state
	rts
	.globl	_check_successfully_repeated
_check_successfully_repeated:
	leas	-5,s
	ldb	_buttonspressedcounter
	stb	4,s
	bra	L43
L45:
	ldb	4,s
	clra		;zero_extendqihi: R:b -> R:d
	tfr	d,x
	ldb	_a_random,x
	stb	2,s
	ldb	4,s
	clra		;zero_extendqihi: R:b -> R:d
	tfr	d,x
	ldb	_a_random_compare,x
	cmpb	2,s	;cmpqi:(R)
	beq	L43
	ldx	#_display_game_over
	stx	_execute_game_playing_state
L43:
	ldb	4,s
	stb	1,s
	tst	1,s
	beq	L44
	ldb	#1
	stb	1,s
L44:
	ldb	1,s
	dec	4,s
	tstb
	bne	L45
	ldb	_RandomSequenceCounterDisplay
	stb	,s
	ldb	,s
	incb
	stb	3,s
	ldb	_buttonspressedcounter
	cmpb	3,s	;cmpqi:(R)
	bne	L47
	ldb	_RandomSequenceCounterDisplay
	incb
	stb	_RandomSequenceCounterDisplay
	clr	_buttonspressedcounter
	ldb	#-56
	stb	_counter
	ldx	#_execute_display_sequence_state
	stx	_execute_game_playing_state
L47:
	leas	5,s
	rts
LC6:
	.byte	83,69,76,69,67,84,32,84
	.byte	72,69,32,71,65,77,69,77
	.byte	79,68,69,-128,0
LC7:
	.byte	78,79,82,77,65,76,-128,0
LC8:
	.byte	72,65,82,68,-128,0
	.globl	_level_init
_level_init:
	leas	-2,s
	ldb	#1
	stb	_Vec_Joy_Mux_1_X
	ldb	#3
	stb	_Vec_Joy_Mux_1_Y
	clr	_Vec_Joy_Mux_2_X
	clr	_Vec_Joy_Mux_2_Y
	clr	,s
	ldb	#1
	stb	1,s
	lbra	L49
L53:
	jsr	___Read_Btns
	inc	,s
	ldb	#-120
	stb	,-s
	ldx	#LC6
	ldb	#100
	jsr	_print_string
	leas	1,s
	ldb	#-50
	stb	,-s
	ldx	#LC7
	ldb	#60
	jsr	_print_string
	leas	1,s
	ldb	#-50
	stb	,-s
	ldx	#LC8
	ldb	#40
	jsr	_print_string
	leas	1,s
	jsr	___Read_Btns
	jsr	___Joy_Digital
	ldb	_Vec_Joy_1_Y
	tstb
	beq	L50
	ldb	_Vec_Joy_1_Y
	stb	_joy_y
L50:
	ldb	_joy_y
	tstb
	ble	L51
	clrb
	jsr	_draw_menu_arrow
L51:
	ldb	_joy_y
	tstb
	bge	L52
	ldb	#1
	jsr	_draw_menu_arrow
L52:
	ldb	_Vec_Buttons
	andb	#1
	tstb
	beq	L49
	clr	1,s
L49:
	tst	1,s
	lbne	L53
	ldb	,s
	jsr	_rand
	clr	_current_level
	ldx	#_execute_display_sequence_state
	stx	_execute_game_playing_state
	leas	2,s
	rts
	.globl	_level_play
_level_play:
	leas	-4,s
	bra	L56
L57:
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
L56:
	ldb	_current_level
	tstb
	beq	L57
	leas	4,s
	rts
