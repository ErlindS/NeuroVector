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
	.globl	_counter
	.area	.data
_counter:
	.byte	0
	.area	.text
LC0:
	.byte	84,73,77,69,32,76,69,70
	.byte	84,-128,0
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
	addb	#-4
	stb	_counter
	ldb	_counter
	tstb
	bne	L5
	ldb	#-56
	stb	_counter
L5:
	rts
	.globl	_nibby_vl_style_0
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
	.globl	_Generate_Gamefield
_Generate_Gamefield:
	jsr	___Reset0Ref
	ldb	#10
	stb	,-s
	ldb	#-30
	jsr	__Moveto_d
	leas	1,s
	ldx	#-95
	ldb	,x
	cmpb	#32	;cmpqi:
	bne	L7
	ldb	#-1
	stb	*_dp_VIA_t1_cnt_lo
	ldx	#_nibby_vl_style_0
	pshs	x
	ldx	#0
	jsr	__Draw_Grid_VL
	leas	2,s
	bra	L9
L7:
	ldb	#-1
	stb	*_dp_VIA_t1_cnt_lo
	ldx	#_nibby_vl_style_0
	pshs	x
	ldx	#0
	jsr	__Draw_Grid_VL
	leas	2,s
L9:
	rts
	.area	.bss
_joy_x:	.blkb	1
_joy_y:	.blkb	1
	.area	.text
	.globl	_move_cursor
_move_cursor:
	jsr	___Joy_Digital
	ldb	_Vec_Joy_1_X
	pshs	b
	ldb	#-90
	stb	,-s
	ldb	#-90
	jsr	_print_signed_int
	leas	2,s
	ldb	_Vec_Joy_1_Y
	pshs	b
	ldb	#-50
	stb	,-s
	ldb	#-90
	jsr	_print_signed_int
	leas	2,s
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
	ldb	_Vec_Joy_1_X
	stb	_joy_x
	ldb	_Vec_Joy_1_Y
	stb	_joy_y
	ldb	_joy_x
	tstb
	bge	L11
	ldb	_joy_y
	tstb
	ble	L11
	ldb	#1
	jsr	_draw_cross
L11:
	ldb	_joy_x
	tstb
	bne	L12
	ldb	_joy_y
	tstb
	ble	L12
	ldb	#2
	jsr	_draw_cross
L12:
	ldb	_Vec_Joy_1_X
	tstb
	ble	L13
	ldb	_Vec_Joy_1_Y
	tstb
	ble	L13
	ldb	#3
	jsr	_draw_cross
L13:
	ldb	_joy_x
	tstb
	bge	L14
	ldb	_joy_y
	tstb
	bne	L14
	ldb	#4
	jsr	_draw_cross
L14:
	ldb	_joy_x
	tstb
	bne	L15
	ldb	_joy_y
	tstb
	bne	L15
	ldb	#5
	jsr	_draw_cross
L15:
	ldb	_joy_x
	tstb
	ble	L16
	ldb	_joy_y
	tstb
	bne	L16
	ldb	#6
	jsr	_draw_cross
L16:
	ldb	_joy_x
	tstb
	bge	L17
	ldb	_joy_y
	tstb
	bge	L17
	ldb	#7
	jsr	_draw_cross
L17:
	ldb	_joy_x
	tstb
	bne	L18
	ldb	_joy_y
	tstb
	bge	L18
	ldb	#8
	jsr	_draw_cross
L18:
	ldb	_joy_x
	tstb
	ble	L20
	ldb	_joy_y
	tstb
	bge	L20
	ldb	#9
	jsr	_draw_cross
L20:
	rts
	.globl	_level_play
_level_play:
	leas	-4,s
	bra	L22
L23:
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
	jsr	_move_cursor
L22:
	ldb	_current_level
	tstb
	beq	L23
	leas	4,s
	rts
