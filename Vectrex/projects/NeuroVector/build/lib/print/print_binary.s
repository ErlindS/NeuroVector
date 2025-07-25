;;; gcc for m6809 : Mar 17 2019 13:25:32
;;; 4.3.6 (gcc6809)
;;; ABI version 1
;;; -mabi=bx -mint8 -fomit-frame-pointer -O3
	.module	print_binary.c
	.area	.text
	.globl	_print_binary
_print_binary:
	leas	-16,s
	stb	,s
	ldb	#-128
	stb	15,s
	ldb	#1
	andb	19,s
	addb	#48
	stb	14,s
	ldb	19,s
	lsrb
	stb	1,s
	ldb	#1
	andb	1,s
	addb	#48
	stb	13,s
	ldb	1,s
	lsrb
	stb	2,s
	ldb	#1
	andb	2,s
	addb	#48
	stb	12,s
	ldb	2,s
	lsrb
	stb	3,s
	ldb	#1
	andb	3,s
	addb	#48
	stb	11,s
	ldb	3,s
	lsrb
	stb	4,s
	ldb	#1
	andb	4,s
	addb	#48
	stb	10,s
	ldb	4,s
	lsrb
	stb	5,s
	ldb	#1
	andb	5,s
	addb	#48
	stb	9,s
	ldb	5,s
	lsrb
	stb	6,s
	ldb	#1
	andb	6,s
	addb	#48
	stb	8,s
	lsr	6,s
	ldb	6,s
	addb	#48
	stb	7,s
	ldb	#-52
	stb	*_dp_VIA_cntl
	ldb	#127
	stb	*_dp_VIA_t1_cnt_lo
	ldb	,s
	pshs	b
	leax	8,s
	ldb	19,s
	jsr	__Print_Str_d
	leas	17,s
	rts
