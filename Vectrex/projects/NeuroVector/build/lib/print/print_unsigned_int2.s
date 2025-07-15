;;; gcc for m6809 : Mar 17 2019 13:25:32
;;; 4.3.6 (gcc6809)
;;; ABI version 1
;;; -mabi=bx -mint8 -fomit-frame-pointer -O2
	.module	print_unsigned_int2.c
	.area	.text
	.globl	_print_unsigned_int2
_print_unsigned_int2:
	leas	-4,s
	stb	,s
	ldb	#-128
	stb	3,s
	ldb	#48
	stb	2,s
	stb	1,s
	ldb	7,s
	cmpb	#9	;cmpqi:
	bls	L2
L5:
	inc	1,s
	ldb	1,s
	ldb	7,s
	addb	#-10
	stb	7,s
	cmpb	#9	;cmpqi:
	bhi	L5
L2:
	ldb	7,s
	addb	#48
	stb	2,s
	ldb	#-52
	stb	*_dp_VIA_cntl
	ldb	#127
	stb	*_dp_VIA_t1_cnt_lo
	ldb	,s
	pshs	b
	leax	2,s
	ldb	7,s
	jsr	__Print_Str_d
	leas	5,s
	rts
