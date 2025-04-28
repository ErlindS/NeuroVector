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
	.area	.bss
	.globl	_Positions
_Positions:	.blkb	40
	.globl	_Time_Positions
	.area	.data
_Time_Positions:
	.byte	-50
	.byte	60
	.byte	-40
	.byte	60
	.byte	-30
	.byte	60
	.byte	-20
	.byte	60
	.byte	-10
	.byte	60
	.byte	0
	.byte	60
	.byte	10
	.byte	60
	.byte	20
	.byte	60
	.byte	30
	.byte	60
	.byte	40
	.byte	60
	.byte	50
	.byte	60
	.area	.text
	.globl	_level_init
_level_init:
	pshs	u
	leas	-17,s
	clr	15,s
	bra	L2
L3:
	ldb	15,s
	stb	3,s
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
	stb	2,s
	ldb	3,s
	sex		;extendqihi2: R:b -> R:d
	tfr	d,x
	ldb	2,s
	stb	_Display_pattern,x
	inc	15,s
L2:
	ldb	15,s
	cmpb	#19	;cmpqi:
	ble	L3
	clr	16,s
	lbra	L4
L17:
	ldb	16,s
	sex		;extendqihi2: R:b -> R:d
	tfr	d,x
	ldb	_Display_pattern,x
	stb	4,s
	ldb	4,s
	cmpb	#9	;cmpqi:
	lbhi	L5
	ldb	4,s
	clra		;zero_extendqihi: R:b -> R:d
	std	,s
	ldd	,s
	aslb
	rola
	ldu	#L15
	leax	d,u
	ldx	,x
	jmp	,x
L15:
	.word	L5
	.word	L6
	.word	L7
	.word	L8
	.word	L9
	.word	L10
	.word	L11
	.word	L12
	.word	L13
	.word	L14
L6:
	ldb	16,s
	stb	5,s
	ldb	5,s
	sex		;extendqihi2: R:b -> R:d
	std	,s
	ldd	,s
	aslb
	rola
	ldu	#_Positions
	leax	d,u
	ldb	#-30
	stb	,x
	ldb	5,s
	sex		;extendqihi2: R:b -> R:d
	std	,s
	ldd	,s
	aslb
	rola
	ldu	#_Positions+1
	leax	d,u
	ldb	#30
	stb	,x
	lbra	L16
L7:
	ldb	16,s
	stb	6,s
	ldb	6,s
	sex		;extendqihi2: R:b -> R:d
	std	,s
	ldd	,s
	aslb
	rola
	ldu	#_Positions
	leax	d,u
	clr	,x
	ldb	6,s
	sex		;extendqihi2: R:b -> R:d
	std	,s
	ldd	,s
	aslb
	rola
	ldu	#_Positions+1
	leax	d,u
	ldb	#30
	stb	,x
	lbra	L16
L8:
	ldb	16,s
	stb	7,s
	ldb	7,s
	sex		;extendqihi2: R:b -> R:d
	std	,s
	ldd	,s
	aslb
	rola
	ldu	#_Positions
	leax	d,u
	ldb	#30
	stb	,x
	ldb	7,s
	sex		;extendqihi2: R:b -> R:d
	std	,s
	ldd	,s
	aslb
	rola
	ldu	#_Positions+1
	leax	d,u
	ldb	#30
	stb	,x
	lbra	L16
L9:
	ldb	16,s
	stb	8,s
	ldb	8,s
	sex		;extendqihi2: R:b -> R:d
	std	,s
	ldd	,s
	aslb
	rola
	ldu	#_Positions
	leax	d,u
	ldb	#-30
	stb	,x
	ldb	8,s
	sex		;extendqihi2: R:b -> R:d
	std	,s
	ldd	,s
	aslb
	rola
	ldu	#_Positions+1
	leax	d,u
	clr	,x
	lbra	L16
L10:
	ldb	16,s
	stb	9,s
	ldb	9,s
	sex		;extendqihi2: R:b -> R:d
	std	,s
	ldd	,s
	aslb
	rola
	ldu	#_Positions
	leax	d,u
	clr	,x
	ldb	9,s
	sex		;extendqihi2: R:b -> R:d
	std	,s
	ldd	,s
	aslb
	rola
	ldu	#_Positions+1
	leax	d,u
	clr	,x
	lbra	L16
L11:
	ldb	16,s
	stb	10,s
	ldb	10,s
	sex		;extendqihi2: R:b -> R:d
	std	,s
	ldd	,s
	aslb
	rola
	ldu	#_Positions
	leax	d,u
	ldb	#30
	stb	,x
	ldb	10,s
	sex		;extendqihi2: R:b -> R:d
	std	,s
	ldd	,s
	aslb
	rola
	ldu	#_Positions+1
	leax	d,u
	clr	,x
	lbra	L16
L12:
	ldb	16,s
	stb	11,s
	ldb	11,s
	sex		;extendqihi2: R:b -> R:d
	std	,s
	ldd	,s
	aslb
	rola
	ldu	#_Positions
	leax	d,u
	ldb	#-30
	stb	,x
	ldb	11,s
	sex		;extendqihi2: R:b -> R:d
	std	,s
	ldd	,s
	aslb
	rola
	ldu	#_Positions+1
	leax	d,u
	ldb	#-30
	stb	,x
	lbra	L16
L13:
	ldb	16,s
	stb	12,s
	ldb	12,s
	sex		;extendqihi2: R:b -> R:d
	std	,s
	ldd	,s
	aslb
	rola
	ldu	#_Positions
	leax	d,u
	clr	,x
	ldb	12,s
	sex		;extendqihi2: R:b -> R:d
	std	,s
	ldd	,s
	aslb
	rola
	ldu	#_Positions+1
	leax	d,u
	ldb	#-30
	stb	,x
	lbra	L16
L14:
	ldb	16,s
	stb	13,s
	ldb	13,s
	sex		;extendqihi2: R:b -> R:d
	std	,s
	ldd	,s
	aslb
	rola
	ldu	#_Positions
	leax	d,u
	ldb	#30
	stb	,x
	ldb	13,s
	sex		;extendqihi2: R:b -> R:d
	std	,s
	ldd	,s
	aslb
	rola
	ldu	#_Positions+1
	leax	d,u
	ldb	#-30
	stb	,x
	bra	L16
L5:
	ldb	16,s
	stb	14,s
	ldb	14,s
	sex		;extendqihi2: R:b -> R:d
	std	,s
	ldd	,s
	aslb
	rola
	ldu	#_Positions
	leax	d,u
	clr	,x
	ldb	14,s
	sex		;extendqihi2: R:b -> R:d
	std	,s
	ldd	,s
	aslb
	rola
	ldu	#_Positions+1
	leax	d,u
	clr	,x
L16:
	inc	16,s
L4:
	ldb	16,s
	cmpb	#19	;cmpqi:
	lble	L17
	clr	_current_level
	leas	17,s
	puls	u,pc
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
	bra	L20
L21:
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
L20:
	ldb	2,s
	cmpb	#8	;cmpqi:
	ble	L21
	leas	3,s
	rts
	.globl	_Display_Pattern
_Display_Pattern:
	pshs	u
	leas	-3,s
	clr	2,s
	bra	L24
L25:
	ldb	2,s
	sex		;extendqihi2: R:b -> R:d
	std	,s
	ldd	,s
	aslb
	rola
	ldu	#_Positions
	leax	d,u
	jsr	_draw_cross
	inc	2,s
L24:
	ldb	2,s
	cmpb	#8	;cmpqi:
	ble	L25
	leas	3,s
	puls	u,pc
LC0:
	.byte	84,73,77,69,32,76,69,70
	.byte	84,-128,0
	.globl	_Display_TimeLeft
_Display_TimeLeft:
	pshs	u
	leas	-3,s
	ldb	#-60
	stb	,-s
	ldx	#LC0
	ldb	#80
	jsr	_print_string
	leas	1,s
	clr	2,s
	bra	L28
L29:
	ldb	2,s
	sex		;extendqihi2: R:b -> R:d
	std	,s
	ldd	,s
	aslb
	rola
	ldu	#_Time_Positions
	leax	d,u
	jsr	_draw_cross
	inc	2,s
L28:
	ldb	2,s
	cmpb	#10	;cmpqi:
	ble	L29
	leas	3,s
	puls	u,pc
	.globl	_level_play
_level_play:
	leas	-4,s
	bra	L32
L33:
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
	jsr	_Display_TimeLeft
	jsr	_Generate_Gamefield
	jsr	_Display_Pattern
L32:
	ldb	_current_level
	tstb
	beq	L33
	leas	4,s
	rts
