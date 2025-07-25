;;; gcc for m6809 : Mar 17 2019 13:25:32
;;; 4.3.6 (gcc6809)
;;; ABI version 1
;;; -mabi=bx -mint8 -fomit-frame-pointer -O3
	.module	print_long_binary.c
	.area	.text
	.globl	_print_long_binary
_print_long_binary:
	leas	-48,s
	stb	2,s
	stx	,s
	ldb	#-128
	stb	47,s
	tfr	x,d	;movlsbqihi: R:x -> R:b
	andb	#1
	addb	#48
	stb	46,s
	tfr	x,d
	lsra
	rorb
	std	3,s
		;movlsbqihi: D->B
	andb	#1
	addb	#48
	stb	45,s
	ldd	3,s
	lsra
	rorb
	std	5,s
		;movlsbqihi: D->B
	andb	#1
	addb	#48
	stb	44,s
	ldd	5,s
	lsra
	rorb
	std	7,s
		;movlsbqihi: D->B
	andb	#1
	addb	#48
	stb	43,s
	ldd	7,s
	lsra
	rorb
	std	9,s
		;movlsbqihi: D->B
	andb	#1
	addb	#48
	stb	42,s
	ldd	9,s
	lsra
	rorb
	std	11,s
		;movlsbqihi: D->B
	andb	#1
	addb	#48
	stb	41,s
	ldd	11,s
	lsra
	rorb
	std	13,s
		;movlsbqihi: D->B
	andb	#1
	addb	#48
	stb	40,s
	ldd	13,s
	lsra
	rorb
	std	15,s
		;movlsbqihi: D->B
	andb	#1
	addb	#48
	stb	39,s
	ldd	15,s
	lsra
	rorb
	std	17,s
		;movlsbqihi: D->B
	andb	#1
	addb	#48
	stb	38,s
	ldd	17,s
	lsra
	rorb
	std	19,s
		;movlsbqihi: D->B
	andb	#1
	addb	#48
	stb	37,s
	ldd	19,s
	lsra
	rorb
	std	21,s
		;movlsbqihi: D->B
	andb	#1
	addb	#48
	stb	36,s
	ldd	21,s
	lsra
	rorb
	std	23,s
		;movlsbqihi: D->B
	andb	#1
	addb	#48
	stb	35,s
	ldd	23,s
	lsra
	rorb
	std	25,s
		;movlsbqihi: D->B
	andb	#1
	addb	#48
	stb	34,s
	ldd	25,s
	lsra
	rorb
	std	27,s
		;movlsbqihi: D->B
	andb	#1
	addb	#48
	stb	33,s
	ldd	27,s
	lsra
	rorb
	std	29,s
		;movlsbqihi: D->B
	andb	#1
	addb	#48
	stb	32,s
	ldd	29,s
	lsra
	rorb
	addb	#48
	stb	31,s
	ldb	#-52
	stb	*_dp_VIA_cntl
	ldb	#127
	stb	*_dp_VIA_t1_cnt_lo
	ldb	2,s
	pshs	b
	leax	32,s
	ldb	51,s
	jsr	__Print_Str_d
	leas	49,s
	rts
