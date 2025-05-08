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
	.globl	_current_level
	.area	.data
_current_level:
	.byte	0
	.area	.text
	.globl	_level_init
_level_init:
	jsr	_RandomNumberGenerator
	clr	_current_level
	rts
	.globl	_SequenceTime
	.area	.data
_SequenceTime:
	.byte	1
	.globl	_counter
_counter:
	.byte	0
	.globl	_counterw
_counterw:
	.byte	3
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
	ldb	_counterw
	decb
	stb	_counterw
	ldb	_counterw
	tstb
	bne	L8
	ldb	_counter
	decb
	stb	_counter
	ldb	#3
	stb	_counterw
L8:
	ldb	_counter
	tstb
	bne	L11
L10:
	ldb	#-60
	stb	,-s
	ldx	#LC1
	ldb	#100
	jsr	_print_string
	leas	1,s
	bra	L10
L11:
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
	lbra	L13
L15:
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
L14:
	ldb	_RandomSequenceCounter
	decb
	stb	_RandomSequenceCounter
	ldb	_RandomSequenceCounter
	tstb
	lbne	L15
	ldb	#30
	stb	_RandomSequenceCounter
	inc	2,s
L13:
	ldb	_RandomSequenceCounterDisplay
	incb
	cmpb	2,s	;cmpqi:
	bhi	L14
	clr	_SequenceTime
	leas	3,s
	rts
	.globl	_buttonspressedcounter
	.area	.data
_buttonspressedcounter:
	.byte	0
	.area	.text
	.globl	_is_pattern_succesfull
_is_pattern_succesfull:
	leas	-2,s
	clr	1,s
	lbra	L19
L22:
	ldb	1,s
	clra		;zero_extendqihi: R:b -> R:d
	tfr	d,x
	ldb	_a_random,x
	stb	,s
	ldb	1,s
	clra		;zero_extendqihi: R:b -> R:d
	tfr	d,x
	ldb	_a_random_compare,x
	cmpb	,s	;cmpqi:(R)
	beq	L20
L21:
	ldb	#-60
	stb	,-s
	ldx	#LC1
	ldb	#100
	jsr	_print_string
	leas	1,s
	ldb	1,s
	clra		;zero_extendqihi: R:b -> R:d
	tfr	d,x
	ldb	_a_random,x
	pshs	b
	ldb	#-50
	stb	,-s
	ldb	#-70
	jsr	_print_unsigned_int
	leas	2,s
	ldb	1,s
	clra		;zero_extendqihi: R:b -> R:d
	tfr	d,x
	ldb	_a_random_compare,x
	pshs	b
	ldb	#-50
	stb	,-s
	ldb	#-50
	jsr	_print_unsigned_int
	leas	2,s
	bra	L21
L20:
	ldb	1,s
	clra		;zero_extendqihi: R:b -> R:d
	tfr	d,x
	clr	_a_random_compare,x
	inc	1,s
L19:
	ldb	_RandomSequenceCounterDisplay
	incb
	cmpb	1,s	;cmpqi:
	lbhi	L22
	ldb	#1
	stb	_SequenceTime
	ldb	_RandomSequenceCounterDisplay
	incb
	stb	_RandomSequenceCounterDisplay
	clr	_buttonspressedcounter
	ldb	#-56
	stb	_counter
	leas	2,s
	rts
	.area	.bss
_joy_x:	.blkb	1
_joy_y:	.blkb	1
	.globl	_temppass
	.area	.data
_temppass:
	.byte	0
	.area	.text
	.globl	_move_player
_move_player:
	leas	-3,s
	jsr	___Joy_Digital
	ldb	_Vec_Joy_1_X
	stb	_joy_x
	ldb	_Vec_Joy_1_Y
	stb	_joy_y
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
	jsr	___Read_Btns
	ldb	_Vec_Buttons
	andb	#1
	tstb
	beq	L35
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
	ldb	_RandomSequenceCounterDisplay
	stb	,s
	ldb	,s
	incb
	stb	2,s
	ldb	_buttonspressedcounter
	cmpb	2,s	;cmpqi:(R)
	bne	L35
	jsr	_is_pattern_succesfull
L35:
	leas	3,s
	rts
	.globl	_level_play
_level_play:
	leas	-4,s
	bra	L37
L39:
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
	jsr	_Display_Gamefield
	ldb	_SequenceTime
	tstb
	beq	L38
	jsr	_Display_RandomSequence
	bra	L37
L38:
	jsr	_Display_TimeLeft
	jsr	_move_player
L37:
	ldb	_current_level
	tstb
	beq	L39
	leas	4,s
	rts
