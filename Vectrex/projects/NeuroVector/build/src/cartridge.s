;;; gcc for m6809 : Mar 17 2019 13:25:32
;;; 4.3.6 (gcc6809)
;;; ABI version 1
;;; -mabi=bx -mint8 -fomit-frame-pointer -O0
	.module	cartridge.c
	.globl	_game_header
	.area	.cartridge
_game_header:
	.byte	103,32,71,67,69,32,50,48
	.byte	50,53,-128
	.word	_Vec_Music_1
	.byte	-8
	.byte	80
	.byte	24
	.byte	-86
	.byte	78,101,117,114,111,32,86,101
	.byte	99,116,111,114,-128,0
