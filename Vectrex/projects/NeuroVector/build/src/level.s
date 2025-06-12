;;; gcc for m6809 : Mar 17 2019 13:25:32
;;; 4.3.6 (gcc6809)
;;; ABI version 1
;;; -mabi=bx -mint8 -fomit-frame-pointer -O0
	.module	level.c
	.globl	_Positions_Cursor
	.area	.text
_Positions_Cursor:
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
	.globl	_Level_advancement
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
	.byte	-1
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
	.globl	_sf
	.area	.data
_sf:
	.byte	8
	.globl	_Brainright
	.area	.text
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
	.byte	-50
	.byte	1
	.byte	0
	.byte	0
	.globl	_BrainrightDetailed
_BrainrightDetailed:
	.byte	0
	.byte	0
	.byte	120
	.byte	-1
	.byte	120
	.byte	120
	.byte	-1
	.byte	60
	.byte	0
	.byte	-1
	.byte	120
	.byte	120
	.byte	-1
	.byte	16
	.byte	8
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
	.byte	50
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
	.globl	_Displayed_Squares
	.area	.data
_Displayed_Squares:
	.byte	16
	.byte	-16
	.word	_draw_square
	.byte	16
	.byte	0
	.word	_draw_square
	.byte	16
	.byte	16
	.word	_draw_square
	.byte	0
	.byte	-16
	.word	_draw_square
	.byte	0
	.byte	0
	.word	_draw_square
	.byte	0
	.byte	16
	.word	_draw_square
	.byte	-16
	.byte	-16
	.word	_draw_square
	.byte	-16
	.byte	0
	.word	_draw_square
	.byte	-16
	.byte	16
	.word	_draw_square
	.globl	_buttonspressedcounter
_buttonspressedcounter:
	.byte	0
	.globl	_sneakyoffset
_sneakyoffset:
	.byte	0
	.globl	_b
_b:
	.byte	1
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
	.globl	_RandomSequenceCounter
_RandomSequenceCounter:
	.byte	50
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
	.globl	_Display_LevelAdvancement
_Display_LevelAdvancement:
	leas	-3,s
	stb	2,s
	bra	L14
L16:
	ldb	_buttonspressedcounter
	addb	2,s
	jsr	_draw_round_advancement_cross
L14:
	ldb	2,s
	stb	1,s
	tst	1,s
	beq	L15
	ldb	#1
	stb	1,s
L15:
	ldb	1,s
	dec	2,s
	tstb
	bne	L16
	bra	L17
L19:
	ldb	5,s
	jsr	_draw_round_advancement_cross_plus
L17:
	ldb	5,s
	stb	,s
	tst	,s
	beq	L18
	ldb	#1
	stb	,s
L18:
	ldb	,s
	dec	5,s
	tstb
	bne	L19
	leas	3,s
	rts
LC2:
	.byte	82,69,77,69,77,66,69,82
	.byte	32,84,72,69,-128,0
LC3:
	.byte	83,69,81,85,69,78,67,69
	.byte	-128,0
	.globl	_Display_RandomSequence
_Display_RandomSequence:
	leas	-1,s
	clr	,s
	bra	L22
L24:
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
	jsr	_Display_Player
	ldb	,s
	clra		;zero_extendqihi: R:b -> R:d
	tfr	d,x
	ldb	_a_random,x
	jsr	_draw_square_filled
	ldb	,s
	incb
	clr	,-s
	jsr	_Display_LevelAdvancement
	leas	1,s
L23:
	ldb	_RandomSequenceCounter
	decb
	stb	_RandomSequenceCounter
	ldb	_RandomSequenceCounter
	tstb
	bne	L24
	ldb	#30
	stb	_RandomSequenceCounter
	inc	,s
L22:
	ldb	_RandomSequenceCounterDisplay
	incb
	cmpb	,s	;cmpqi:
	bhi	L23
	clr	_SequenceTime
	leas	1,s
	rts
	.area	.bss
	.globl	_execute_game_playing_state
_execute_game_playing_state:	.blkb	2
	.area	.text
LC4:
	.byte	80,82,69,83,83,32,66,85
	.byte	84,84,79,78,32,50,-128,0
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
	beq	L31
	ldx	#_execute_display_sequence_state
	stx	_execute_game_playing_state
	clr	,s
	bra	L29
L30:
	ldb	,s
	sex		;extendqihi2: R:b -> R:d
	tfr	d,x
	clr	_a_random_compare,x
	inc	,s
L29:
	ldb	,s
	cmpb	#19	;cmpqi:
	ble	L30
	ldb	_RandomSequenceCounterDisplay
	jsr	_rand
	clr	_RandomSequenceCounterDisplay
	clr	_buttonspressedcounter
L31:
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
	tstb
	bge	L33
	ldb	_joy_y
	tstb
	ble	L33
	ldx	#_draw_square_filled
	stx	_Displayed_Squares+2
	bra	L34
L33:
	ldx	#_draw_square
	stx	_Displayed_Squares+2
L34:
	ldb	_joy_x
	tstb
	bne	L35
	ldb	_joy_y
	tstb
	ble	L35
	ldx	#_draw_square_filled
	stx	_Displayed_Squares+6
	bra	L36
L35:
	ldx	#_draw_square
	stx	_Displayed_Squares+6
L36:
	ldb	_joy_x
	tstb
	ble	L37
	ldb	_joy_y
	tstb
	ble	L37
	ldx	#_draw_square_filled
	stx	_Displayed_Squares+10
	bra	L38
L37:
	ldx	#_draw_square
	stx	_Displayed_Squares+10
L38:
	ldb	_joy_x
	tstb
	bge	L39
	ldb	_joy_y
	tstb
	bne	L39
	ldx	#_draw_square_filled
	stx	_Displayed_Squares+14
	bra	L40
L39:
	ldx	#_draw_square
	stx	_Displayed_Squares+14
L40:
	ldb	_joy_x
	tstb
	bne	L41
	ldb	_joy_y
	tstb
	bne	L41
	ldx	#_draw_square_filled
	stx	_Displayed_Squares+18
	bra	L42
L41:
	ldx	#_draw_square
	stx	_Displayed_Squares+18
L42:
	ldb	_joy_x
	tstb
	ble	L43
	ldb	_joy_y
	tstb
	bne	L43
	ldx	#_draw_square_filled
	stx	_Displayed_Squares+22
	bra	L44
L43:
	ldx	#_draw_square
	stx	_Displayed_Squares+22
L44:
	ldb	_joy_x
	tstb
	bge	L45
	ldb	_joy_y
	tstb
	bge	L45
	ldx	#_draw_square_filled
	stx	_Displayed_Squares+26
	bra	L46
L45:
	ldx	#_draw_square
	stx	_Displayed_Squares+26
L46:
	ldb	_joy_x
	tstb
	bne	L47
	ldb	_joy_y
	tstb
	bge	L47
	ldx	#_draw_square_filled
	stx	_Displayed_Squares+30
	bra	L48
L47:
	ldx	#_draw_square
	stx	_Displayed_Squares+30
L48:
	ldb	_joy_x
	tstb
	ble	L49
	ldb	_joy_y
	tstb
	bge	L49
	ldx	#_draw_square_filled
	stx	_Displayed_Squares+34
	bra	L51
L49:
	ldx	#_draw_square
	stx	_Displayed_Squares+34
L51:
	rts
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
	bge	L53
	ldb	_joy_y
	tstb
	ble	L53
	clr	_temppass
	bra	L54
L53:
	ldb	_temppass
	stb	_temppass
L54:
	ldb	_joy_x
	tstb
	bne	L55
	ldb	_joy_y
	tstb
	ble	L55
	ldb	#1
	stb	_temppass
	bra	L56
L55:
	ldb	_temppass
	stb	_temppass
L56:
	ldb	_joy_x
	tstb
	ble	L57
	ldb	_joy_y
	tstb
	ble	L57
	ldb	#2
	stb	_temppass
	bra	L58
L57:
	ldb	_temppass
	stb	_temppass
L58:
	ldb	_joy_x
	tstb
	bge	L59
	ldb	_joy_y
	tstb
	bne	L59
	ldb	#3
	stb	_temppass
	bra	L60
L59:
	ldb	_temppass
	stb	_temppass
L60:
	ldb	_joy_x
	tstb
	bne	L61
	ldb	_joy_y
	tstb
	bne	L61
	ldb	#4
	stb	_temppass
	bra	L62
L61:
	ldb	_temppass
	stb	_temppass
L62:
	ldb	_joy_x
	tstb
	ble	L63
	ldb	_joy_y
	tstb
	bne	L63
	ldb	#5
	stb	_temppass
	bra	L64
L63:
	ldb	_temppass
	stb	_temppass
L64:
	ldb	_joy_x
	tstb
	bge	L65
	ldb	_joy_y
	tstb
	bge	L65
	ldb	#6
	stb	_temppass
	bra	L66
L65:
	ldb	_temppass
	stb	_temppass
L66:
	ldb	_joy_x
	tstb
	bne	L67
	ldb	_joy_y
	tstb
	bge	L67
	ldb	#7
	stb	_temppass
	bra	L68
L67:
	ldb	_temppass
	stb	_temppass
L68:
	ldb	_joy_x
	tstb
	ble	L69
	ldb	_joy_y
	tstb
	bge	L69
	ldb	#8
	stb	_temppass
	bra	L70
L69:
	ldb	_temppass
	stb	_temppass
L70:
	ldb	_Vec_Buttons
	andb	#1
	tstb
	beq	L72
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
L72:
	leas	2,s
	rts
LC6:
	.byte	33,83,78,69,65,75,89,32
	.byte	79,70,70,83,69,84,33,-128
	.byte	0
	.globl	_Set_traps
_Set_traps:
	clr	_sneakyoffset
	ldb	_RandomSequenceCounterDisplay
	cmpb	#3	;cmpqi:
	bls	L75
	ldb	_RandomSequenceCounterDisplay
	cmpb	#7	;cmpqi:
	bhi	L75
	ldb	#-56
	stb	,-s
	ldx	#400
	ldb	#3
	jsr	_play_tune
	leas	1,s
	ldb	#-90
	stb	,-s
	ldx	#LC6
	ldb	#115
	jsr	_print_string
	leas	1,s
	ldb	#3
	stb	_sneakyoffset
L75:
	rts
	.globl	_Display_Player
_Display_Player:
	ldx	_Displayed_Squares+2
	clrb
	jsr	,x
	ldx	_Displayed_Squares+6
	ldb	#1
	jsr	,x
	ldx	_Displayed_Squares+10
	ldb	#2
	jsr	,x
	ldx	_Displayed_Squares+14
	ldb	#3
	jsr	,x
	ldx	_Displayed_Squares+18
	ldb	#4
	jsr	,x
	ldx	_Displayed_Squares+22
	ldb	#5
	jsr	,x
	ldx	_Displayed_Squares+26
	ldb	#6
	jsr	,x
	ldx	_Displayed_Squares+30
	ldb	#7
	jsr	,x
	ldx	_Displayed_Squares+34
	ldb	#8
	jsr	,x
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
	ldb	,s
	incb
	stb	,s
	ldb	1,s
	pshs	b
	ldb	1,s
	jsr	_Display_LevelAdvancement
	leas	1,s
	ldb	_b
	cmpb	#3	;cmpqi:
	bne	L79
	jsr	_Set_traps
L79:
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
	.globl	_check_successfully_repeated
_check_successfully_repeated:
	leas	-5,s
	ldb	_buttonspressedcounter
	stb	4,s
	bra	L84
L86:
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
	beq	L84
	ldx	#_display_game_over
	stx	_execute_game_playing_state
L84:
	ldb	4,s
	stb	1,s
	tst	1,s
	beq	L85
	ldb	#1
	stb	1,s
L85:
	ldb	1,s
	dec	4,s
	tstb
	bne	L86
	ldb	_RandomSequenceCounterDisplay
	stb	,s
	ldb	,s
	incb
	stb	3,s
	ldb	_buttonspressedcounter
	cmpb	3,s	;cmpqi:(R)
	bne	L88
	ldx	#_draw_square
	stx	_Displayed_Squares+2
	ldx	#_draw_square
	stx	_Displayed_Squares+6
	ldx	#_draw_square
	stx	_Displayed_Squares+10
	ldx	#_draw_square
	stx	_Displayed_Squares+14
	ldx	#_draw_square
	stx	_Displayed_Squares+18
	ldx	#_draw_square
	stx	_Displayed_Squares+22
	ldx	#_draw_square
	stx	_Displayed_Squares+26
	ldx	#_draw_square
	stx	_Displayed_Squares+30
	ldx	#_draw_square
	stx	_Displayed_Squares+34
	ldb	_RandomSequenceCounterDisplay
	incb
	stb	_RandomSequenceCounterDisplay
	clr	_buttonspressedcounter
	ldb	#-56
	stb	_counter
	ldx	#_execute_display_sequence_state
	stx	_execute_game_playing_state
L88:
	leas	5,s
	rts
LC7:
	.byte	83,69,76,69,67,84,32,84
	.byte	72,69,32,71,65,77,69,77
	.byte	79,68,69,-128,0
LC8:
	.byte	78,79,82,77,65,76,-128,0
LC9:
	.byte	72,65,82,68,-128,0
	.globl	_level_init
_level_init:
	leas	-1,s
	ldb	#1
	stb	_Vec_Joy_Mux_1_X
	ldb	#3
	stb	_Vec_Joy_Mux_1_Y
	clr	_Vec_Joy_Mux_2_X
	clr	_Vec_Joy_Mux_2_Y
	clr	,s
	lbra	L90
L95:
	jsr	___Read_Btns
	inc	,s
	ldb	#-120
	stb	,-s
	ldx	#LC7
	ldb	#100
	jsr	_print_string
	leas	1,s
	ldb	#-50
	stb	,-s
	ldx	#LC8
	ldb	#60
	jsr	_print_string
	leas	1,s
	ldb	#-50
	stb	,-s
	ldx	#LC9
	ldb	#40
	jsr	_print_string
	leas	1,s
	jsr	___Read_Btns
	jsr	___Joy_Digital
	ldb	_Vec_Joy_1_Y
	tstb
	beq	L91
	ldb	_Vec_Joy_1_Y
	stb	_joy_y
L91:
	ldb	_joy_y
	tstb
	ble	L92
	clrb
	jsr	_draw_menu_arrow
L92:
	ldb	_joy_y
	tstb
	bge	L93
	ldb	#1
	jsr	_draw_menu_arrow
L93:
	ldb	_Vec_Buttons
	andb	#1
	tstb
	beq	L90
	ldb	_joy_y
	tstb
	ble	L94
	ldb	#2
	stb	_b
L94:
	ldb	_joy_y
	tstb
	bge	L90
	ldb	#3
	stb	_b
L90:
	ldb	_b
	cmpb	#1	;cmpqi:
	lble	L95
	ldb	,s
	jsr	_rand
	clr	_current_level
	ldx	#_execute_display_sequence_state
	stx	_execute_game_playing_state
	leas	1,s
	rts
	.globl	_level_play
_level_play:
	leas	-4,s
	bra	L98
L99:
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
L98:
	ldb	_current_level
	tstb
	beq	L99
	leas	4,s
	rts
