                              1 ;;; gcc for m6809 : Mar 17 2019 13:25:32
                              2 ;;; 4.3.6 (gcc6809)
                              3 ;;; ABI version 1
                              4 ;;; -mabi=bx -mint8 -fomit-frame-pointer -O0
                              5 	.module	boot_loader.c
                              6 	.area	.boot
                              7 	.globl	_boot
   001C                       8 _boot:
                              9 ;----- asm -----
                             10 ; 21 "source\config\boot_loader.c" 1
   001C                      11 	_crt0:							
   001C                      12 	_crt0_data:					
   001C 8E 00 31      [ 3]   13 		ldx		#l_.data			
   001F 27 1B         [ 3]   14 		beq		_crt0_data_done		
   0021 CE 00 5B      [ 3]   15 		ldu		#a_.text			
   0024 33 C9 08 6E   [ 8]   16 		leau	l_.text,u			
   0028 33 C9 00 00   [ 8]   17 		leau	l_.text.hot,u		
   002C 33 C9 00 00   [ 8]   18 		leau	l_.text.unlikely,u	
   0030 10 8E C8 80   [ 4]   19 		ldy		#a_.data			
   0034                      20 	_crt0_data_copy:				
   0034 A6 C0         [ 6]   21 		lda		,u+					
   0036 A7 A0         [ 6]   22 		sta		,y+					
   0038 30 1F         [ 5]   23 		leax	-1,x				
   003A 26 F8         [ 3]   24 		bne		_crt0_data_copy		
   003C                      25 	_crt0_data_done:				
   003C                      26 	_crt0_bss:						
   003C 8E 00 00      [ 3]   27 		ldx		#l_.bss				
   003F 27 0A         [ 3]   28 		beq		_crt0_bss_done		
   0041 10 8E C8 B1   [ 4]   29 		ldy		#a_.bss				
   0045                      30 	_crt0_bss_zero:				
   0045 6F A0         [ 8]   31 		clr		,y+					
   0047 30 1F         [ 5]   32 		leax	-1,x				
   0049 26 FA         [ 3]   33 		bne		_crt0_bss_zero		
   004B                      34 	_crt0_bss_done:				
                             35 	
                             36 ;--- end asm ---
   004B BD 06 4C      [ 8]   37 	jsr	_main
   004E 5D            [ 2]   38 	tstb
   004F 27 06         [ 3]   39 	beq	L2
   0051 8E 00 00      [ 3]   40 	ldx	#0
   0054 BF CB FE      [ 6]   41 	stx	_Vec_Cold_Flag
   0057                      42 L2:
   0057 BD F0 00      [ 8]   43 	jsr	___Reset
   005A 39            [ 5]   44 	rts
ASxxxx Assembler V05.50  (Motorola 6809)                                Page 1
Hexadecimal [16-Bits]                                 Sun Apr  6 13:16:31 2025

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
Hexadecimal [16-Bits]                                 Sun Apr  6 13:16:31 2025

Area Table

[_CSEG]
   0 _CODE            size    0   flags C080
   2 .boot            size   3F   flags  100
[_DSEG]
   1 _DATA            size    0   flags C0C0

