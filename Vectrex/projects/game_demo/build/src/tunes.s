;;; gcc for m6809 : Mar 17 2019 13:25:32
;;; 4.3.6 (gcc6809)
;;; ABI version 1
;;; -mabi=bx -mint8 -fomit-frame-pointer -O0
	.module	tunes.c
	.globl	_bing
	.area	.text
_bing:
	.word	_Vec_ADSR_FADE4
	.word	_Vec_TWANG_VIBEHL
	.byte	0
	.byte	12
	.byte	0
	.byte	-128
	.globl	_bang
_bang:
	.byte	42
	.byte	0
	.byte	0
	.byte	1
