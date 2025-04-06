;;; gcc for m6809 : Mar 17 2019 13:25:32
;;; 4.3.6 (gcc6809)
;;; ABI version 1
;;; -mabi=bx -mint8 -fomit-frame-pointer -O0
	.module	level.c
	.globl	_current_level
	.area	.data
_current_level:
	.byte	1
	.globl	_Display_pattern
_Display_pattern:
	.word	0,0,0,0,0,0,0,0,0,0
	.area	.text
	.globl	_level_init
_level_init:
	leas	-3,s
	clr	2,s
	bra	L2
L3:
	ldb	2,s
	stb	1,s
	jsr	__Random
	clra		;zero_extendqihi: R:b -> R:d
	ldx	#9
	pshs	x
	tfr	d,x
	jsr	_umodhi3
	leas	2,s
	tfr	x,d	;movlsbqihi: R:x -> R:b
	stb	,s
	ldb	,s
	incb
	stb	,s
	ldb	1,s
	sex		;extendqihi2: R:b -> R:d
	tfr	d,x
	ldb	,s
	stb	_Display_pattern,x
	inc	2,s
L2:
	ldb	2,s
	cmpb	#19	;cmpqi:
	ble	L3
	clr	_current_level
	leas	3,s
	rts
	.globl	_Gamefield
	.area	.data
_Gamefield:
	.byte	1
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.byte	1
	.byte	30
	.byte	0
	.byte	0
	.byte	0
	.byte	1
	.byte	0
	.byte	30
	.byte	0
	.byte	0
	.byte	1
	.byte	30
	.byte	30
	.byte	0
	.byte	0
	.byte	1
	.byte	-30
	.byte	0
	.byte	0
	.byte	0
	.byte	1
	.byte	0
	.byte	-30
	.byte	0
	.byte	0
	.byte	1
	.byte	-30
	.byte	-30
	.byte	0
	.byte	0
	.byte	1
	.byte	30
	.byte	-30
	.byte	0
	.byte	0
	.byte	1
	.byte	-30
	.byte	30
	.byte	0
	.byte	0
	.area	.text
	.globl	_Generate_Gamefield
_Generate_Gamefield:
	leas	-3,s
	clr	2,s
	bra	L6
L7:
	ldb	2,s
	sex		;extendqihi2: R:b -> R:d
	tfr	d,x
	stx	,s
	ldd	,s
	aslb
	rola
	aslb
	rola
	std	,s
	exg	d,x
	addd	,s; addhi3,3
	exg	d,x
	leax	_Gamefield,x
	jsr	_handle_objects
	inc	2,s
L6:
	ldb	2,s
	cmpb	#8	;cmpqi:
	ble	L7
	leas	3,s
	rts
	.globl	_Display_Pattern
_Display_Pattern:
	leas	-1,s
	ldb	#3
	stb	,s
	leas	1,s
	rts
	.globl	_Repeat_Pattern
_Repeat_Pattern:
	leas	-1,s
	ldb	#4
	stb	,s
	leas	1,s
	rts
	.globl	_level_play
_level_play:
	leas	-4,s
	bra	L14
L15:
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
	jsr	_Display_Pattern
	jsr	_Repeat_Pattern
L14:
	ldb	_current_level
	tstb
	beq	L15
	leas	4,s
	rts
