;;; gcc for m6809 : Mar 17 2019 13:25:32
;;; 4.3.6 (gcc6809)
;;; ABI version 1
;;; -mabi=bx -mint8 -fomit-frame-pointer -O3
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
	.byte	-77
	.byte	78,69,85,82,79,32,86,69
	.byte	67,84,79,82,-128,0
