;;; gcc for m6809 : Mar 17 2019 13:25:32
;;; 4.3.6 (gcc6809)
;;; ABI version 1
;;; -mabi=bx -mint8 -fomit-frame-pointer -O0
	.module	level.c
	.globl	_SequenceTime
	.area	.data
_SequenceTime:
	.byte	1
	.globl	_current_level
_current_level:
	.byte	1
	.globl	_nibby_vl_style_0
	.area	.text
_nibby_vl_style_0:
	.byte	-126
	.byte	-61
	.byte	96
	.byte	-126
	.byte	2
	.byte	-96
	.byte	-126
	.byte	34
	.byte	10
	.byte	-94
	.byte	32
	.byte	6
	.globl	_offset
_offset:
	.byte	-30
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
	.globl	_Generate_Gamefield
_Generate_Gamefield:
	jsr	___Reset0Ref
	ldb	#-1
	stb	*_dp_VIA_t1_cnt_lo
	ldb	#-15
	stb	,-s
	clrb
	jsr	__Moveto_d
	leas	1,s
	ldx	#_Gamefield
	jsr	___Draw_VLp
	jsr	___Reset0Ref
	clr	,-s
	clrb
	jsr	__Moveto_d
	leas	1,s
	ldx	#_Brainright
	jsr	___Draw_VLp
	jsr	___Reset0Ref
	clr	,-s
	clrb
	jsr	__Moveto_d
	leas	1,s
	ldx	#_Brainleft
	jsr	___Draw_VLp
	rts
	.globl	_counter
	.area	.data
_counter:
	.byte	0
	.globl	_counterw
_counterw:
	.byte	3
	.area	.text
	.globl	_decrementCounter
_decrementCounter:
	ldb	_counter
	decb
	stb	_counter
	rts
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
	bne	L6
	jsr	_decrementCounter
	ldb	#3
	stb	_counterw
L6:
	ldb	_counter
	tstb
	bne	L9
L8:
	ldb	#-60
	stb	,-s
	ldx	#LC1
	ldb	#100
	jsr	_print_string
	leas	1,s
	bra	L8
L9:
	rts
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
	.area	.text
	.globl	_RandomNumberGenerator
_RandomNumberGenerator:
	leas	-4,s
	clr	3,s
	bra	L11
L12:
	ldb	3,s
	stb	1,s
	ldb	3,s
	sex		;extendqihi2: R:b -> R:d
	tfr	d,x
	ldb	_a_random,x
	stb	2,s
	jsr	__Random
	addb	2,s
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
	inc	3,s
L11:
	ldb	3,s
	cmpb	#19	;cmpqi:
	ble	L12
	leas	4,s
	rts
	.globl	_RandomSequenceCounter
	.area	.data
_RandomSequenceCounter:
	.byte	-56
	.globl	_RandomSequenceCounterDisplay
_RandomSequenceCounterDisplay:
	.byte	0
	.area	.text
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
	lbra	L15
L17:
	ldb	#-56
	stb	_counter
	jsr	___Wait_Recal
	jsr	_Generate_Gamefield
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
L16:
	ldb	_RandomSequenceCounter
	decb
	stb	_RandomSequenceCounter
	ldb	_RandomSequenceCounter
	tstb
	lbne	L17
	ldb	#30
	stb	_RandomSequenceCounter
	inc	2,s
L15:
	ldb	_RandomSequenceCounterDisplay
	incb
	cmpb	2,s	;cmpqi:
	bhi	L16
	clr	_SequenceTime
	leas	3,s
	rts
	.globl	_level_init
_level_init:
	clr	_current_level
	jsr	_RandomNumberGenerator
	rts
	.globl	_buttonspressedcounter
	.area	.data
_buttonspressedcounter:
	.byte	0
	.area	.text
	.globl	_Check_if_succesfull
_Check_if_succesfull:
	leas	-2,s
	clr	1,s
	lbra	L23
L26:
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
	beq	L24
L25:
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
	bra	L25
L24:
	ldb	1,s
	clra		;zero_extendqihi: R:b -> R:d
	tfr	d,x
	clr	_a_random_compare,x
	inc	1,s
L23:
	ldb	_RandomSequenceCounterDisplay
	incb
	cmpb	1,s	;cmpqi:
	lbhi	L26
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
	.globl	_move_cursor
_move_cursor:
	leas	-3,s
	jsr	___Joy_Digital
	ldb	_Vec_Joy_1_X
	stb	_joy_x
	ldb	_Vec_Joy_1_Y
	stb	_joy_y
	ldb	_joy_x
	tstb
	bge	L29
	ldb	_joy_y
	tstb
	ble	L29
	ldb	#1
	stb	_temppass
L29:
	ldb	_joy_x
	tstb
	bne	L30
	ldb	_joy_y
	tstb
	ble	L30
	ldb	#2
	stb	_temppass
L30:
	ldb	_joy_x
	tstb
	ble	L31
	ldb	_joy_y
	tstb
	ble	L31
	ldb	#3
	stb	_temppass
L31:
	ldb	_joy_x
	tstb
	bge	L32
	ldb	_joy_y
	tstb
	bne	L32
	ldb	#4
	stb	_temppass
L32:
	ldb	_joy_x
	tstb
	bne	L33
	ldb	_joy_y
	tstb
	bne	L33
	ldb	#5
	stb	_temppass
L33:
	ldb	_joy_x
	tstb
	ble	L34
	ldb	_joy_y
	tstb
	bne	L34
	ldb	#6
	stb	_temppass
L34:
	ldb	_joy_x
	tstb
	bge	L35
	ldb	_joy_y
	tstb
	bge	L35
	ldb	#7
	stb	_temppass
L35:
	ldb	_joy_x
	tstb
	bne	L36
	ldb	_joy_y
	tstb
	bge	L36
	ldb	#8
	stb	_temppass
L36:
	ldb	_joy_x
	tstb
	ble	L37
	ldb	_joy_y
	tstb
	bge	L37
	ldb	#9
	stb	_temppass
L37:
	ldb	_temppass
	jsr	_draw_cross
	jsr	___Read_Btns
	ldb	_Vec_Buttons
	andb	#1
	tstb
	beq	L39
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
	bne	L39
	jsr	_Check_if_succesfull
L39:
	leas	3,s
	rts
	.globl	_level_play
_level_play:
	leas	-4,s
	bra	L41
L43:
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
	jsr	_Generate_Gamefield
	ldb	_SequenceTime
	tstb
	beq	L42
	jsr	_Display_RandomSequence
	bra	L41
L42:
	jsr	_Display_TimeLeft
	jsr	_move_cursor
L41:
	ldb	_current_level
	tstb
	beq	L43
	leas	4,s
	rts
