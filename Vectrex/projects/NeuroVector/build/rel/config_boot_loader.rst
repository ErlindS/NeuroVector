                              1 ;;; gcc for m6809 : Mar 17 2019 13:25:32
                              2 ;;; 4.3.6 (gcc6809)
                              3 ;;; ABI version 1
                              4 ;;; -mabi=bx -mint8 -fomit-frame-pointer -O3
                              5 	.module	boot_loader.c
                              6 	.area	.boot
                              7 	.globl	_boot
   001F                       8 _boot:
                              9 ;----- asm -----
                             10 ; 21 "source\config\boot_loader.c" 1
   001F                      11 	_crt0:							
   001F                      12 	_crt0_data:					
   001F 8E 00 CB      [ 3]   13 		ldx		#l_.data			
   0022 27 1B         [ 3]   14 		beq		_crt0_data_done		
   0024 CE 00 5D      [ 3]   15 		ldu		#a_.text			
   0027 33 C9 33 87   [ 8]   16 		leau	l_.text,u			
   002B 33 C9 00 00   [ 8]   17 		leau	l_.text.hot,u		
   002F 33 C9 00 00   [ 8]   18 		leau	l_.text.unlikely,u	
   0033 10 8E C8 80   [ 4]   19 		ldy		#a_.data			
   0037                      20 	_crt0_data_copy:				
   0037 A6 C0         [ 6]   21 		lda		,u+					
   0039 A7 A0         [ 6]   22 		sta		,y+					
   003B 30 1F         [ 5]   23 		leax	-1,x				
   003D 26 F8         [ 3]   24 		bne		_crt0_data_copy		
   003F                      25 	_crt0_data_done:				
   003F                      26 	_crt0_bss:						
   003F 8E 00 0F      [ 3]   27 		ldx		#l_.bss				
   0042 27 0A         [ 3]   28 		beq		_crt0_bss_done		
   0044 10 8E C9 4B   [ 4]   29 		ldy		#a_.bss				
   0048                      30 	_crt0_bss_zero:				
   0048 6F A0         [ 8]   31 		clr		,y+					
   004A 30 1F         [ 5]   32 		leax	-1,x				
   004C 26 FA         [ 3]   33 		bne		_crt0_bss_zero		
   004E                      34 	_crt0_bss_done:				
                             35 	
                             36 ;--- end asm ---
   004E BD 04 19      [ 8]   37 	jsr	_main
   0051 5D            [ 2]   38 	tstb
   0052 27 06         [ 3]   39 	beq	L2
   0054 CC 00 00      [ 3]   40 	ldd	#0
   0057 FD CB FE      [ 6]   41 	std	_Vec_Cold_Flag
   005A                      42 L2:
   005A 7E F0 00      [ 4]   43 	jmp	___Reset
ASxxxx Assembler V05.50  (Motorola 6809)                                Page 1
Hexadecimal [16-Bits]                                 Wed Jul 30 10:10:25 2025

Symbol Table

    .__.$$$.       =   2710 L   |     .__.ABS.       =   0000 G
    .__.CPU.       =   0000 L   |     .__.H$L.       =   0001 L
  2 L2                 003B R   |     _Vec_Cold_Flag     **** GX
    ___Reset           **** GX  |   2 _boot              0000 GR
  2 _crt0              0000 R   |   2 _crt0_bss          0020 R
  2 _crt0_bss_done     002F R   |   2 _crt0_bss_zero     0029 R
  2 _crt0_data         0000 R   |   2 _crt0_data_cop     0018 R
  2 _crt0_data_don     0020 R   |     _main              **** GX
    a_.bss             **** GX  |     a_.data            **** GX
    a_.text            **** GX  |     l_.bss             **** GX
    l_.data            **** GX  |     l_.text            **** GX
    l_.text.hot        **** GX  |     l_.text.unlike     **** GX

ASxxxx Assembler V05.50  (Motorola 6809)                                Page 2
Hexadecimal [16-Bits]                                 Wed Jul 30 10:10:25 2025

Area Table

[_CSEG]
   0 _CODE            size    0   flags C080
   2 .boot            size   3E   flags  100
[_DSEG]
   1 _DATA            size    0   flags C0C0

