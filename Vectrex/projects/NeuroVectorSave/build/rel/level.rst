                              1 ;;; gcc for m6809 : Mar 17 2019 13:25:32
                              2 ;;; 4.3.6 (gcc6809)
                              3 ;;; ABI version 1
                              4 ;;; -mabi=bx -mint8 -fomit-frame-pointer -O0
                              5 	.module	level.c
                              6 	.globl	_current_level
                              7 	.area	.data
   C889                       8 _current_level:
   C889 01                    9 	.byte	1
                             10 	.globl	_Display_pattern
   C88A                      11 _Display_pattern:
   C88A 00 00 00 00 00 00    12 	.word	0,0,0,0,0,0,0,0,0,0
        00 00 00 00 00 00
        00 00 00 00 00 00
        00 00
                             13 	.area	.bss
                             14 	.globl	_Positions
   C8E5                      15 _Positions:	.blkb	40
                             16 	.globl	_Time_Positions
                             17 	.area	.data
   C89E                      18 _Time_Positions:
   C89E CE                   19 	.byte	-50
   C89F 3C                   20 	.byte	60
   C8A0 D8                   21 	.byte	-40
   C8A1 3C                   22 	.byte	60
   C8A2 E2                   23 	.byte	-30
   C8A3 3C                   24 	.byte	60
   C8A4 EC                   25 	.byte	-20
   C8A5 3C                   26 	.byte	60
   C8A6 F6                   27 	.byte	-10
   C8A7 3C                   28 	.byte	60
   C8A8 00                   29 	.byte	0
   C8A9 3C                   30 	.byte	60
   C8AA 0A                   31 	.byte	10
   C8AB 3C                   32 	.byte	60
   C8AC 14                   33 	.byte	20
   C8AD 3C                   34 	.byte	60
   C8AE 1E                   35 	.byte	30
   C8AF 3C                   36 	.byte	60
   C8B0 28                   37 	.byte	40
   C8B1 3C                   38 	.byte	60
   C8B2 32                   39 	.byte	50
   C8B3 3C                   40 	.byte	60
                             41 	.area	.text
                             42 	.globl	_level_init
   0194                      43 _level_init:
   0194 34 40         [ 6]   44 	pshs	u
   0196 32 E8 EF      [ 5]   45 	leas	-17,s
   0199 6F 6F         [ 7]   46 	clr	15,s
   019B 20 2A         [ 3]   47 	bra	L2
   019D                      48 L3:
   019D E6 6F         [ 5]   49 	ldb	15,s
   019F E7 63         [ 5]   50 	stb	3,s
   01A1 BD 05 EE      [ 8]   51 	jsr	__Random
   01A4 4F            [ 2]   52 	clra		;zero_extendqihi: R:b -> R:d
   01A5 8E 00 09      [ 3]   53 	ldx	#9
   01A8 34 10         [ 6]   54 	pshs	x
   01AA 1F 01         [ 6]   55 	tfr	d,x
   01AC BD 05 D6      [ 8]   56 	jsr	_umodhi3
   01AF 32 62         [ 5]   57 	leas	2,s
   01B1 1F 10         [ 6]   58 	tfr	x,d	;movlsbqihi: R:x -> R:b
   01B3 E7 E4         [ 4]   59 	stb	,s
   01B5 E6 E4         [ 4]   60 	ldb	,s
   01B7 5C            [ 2]   61 	incb
   01B8 E7 62         [ 5]   62 	stb	2,s
   01BA E6 63         [ 5]   63 	ldb	3,s
   01BC 1D            [ 2]   64 	sex		;extendqihi2: R:b -> R:d
   01BD 1F 01         [ 6]   65 	tfr	d,x
   01BF E6 62         [ 5]   66 	ldb	2,s
   01C1 E7 89 C8 8A   [ 8]   67 	stb	_Display_pattern,x
   01C5 6C 6F         [ 7]   68 	inc	15,s
   01C7                      69 L2:
   01C7 E6 6F         [ 5]   70 	ldb	15,s
   01C9 C1 13         [ 2]   71 	cmpb	#19	;cmpqi:
   01CB 2F D0         [ 3]   72 	ble	L3
   01CD 6F E8 10      [ 7]   73 	clr	16,s
   01D0 16 01 E1      [ 5]   74 	lbra	L4
   01D3                      75 L17:
   01D3 E6 E8 10      [ 5]   76 	ldb	16,s
   01D6 1D            [ 2]   77 	sex		;extendqihi2: R:b -> R:d
   01D7 1F 01         [ 6]   78 	tfr	d,x
   01D9 E6 89 C8 8A   [ 8]   79 	ldb	_Display_pattern,x
   01DD E7 64         [ 5]   80 	stb	4,s
   01DF E6 64         [ 5]   81 	ldb	4,s
   01E1 C1 09         [ 2]   82 	cmpb	#9	;cmpqi:
   01E3 10 22 01 A5   [ 6]   83 	lbhi	L5
   01E7 E6 64         [ 5]   84 	ldb	4,s
   01E9 4F            [ 2]   85 	clra		;zero_extendqihi: R:b -> R:d
   01EA ED E4         [ 5]   86 	std	,s
   01EC EC E4         [ 5]   87 	ldd	,s
   01EE 58            [ 2]   88 	aslb
   01EF 49            [ 2]   89 	rola
   01F0 CE 01 F9      [ 3]   90 	ldu	#L15
   01F3 30 CB         [ 8]   91 	leax	d,u
   01F5 AE 84         [ 5]   92 	ldx	,x
   01F7 6E 84         [ 3]   93 	jmp	,x
   01F9                      94 L15:
   01F9 03 8C                95 	.word	L5
   01FB 02 0D                96 	.word	L6
   01FD 02 39                97 	.word	L7
   01FF 02 63                98 	.word	L8
   0201 02 8F                99 	.word	L9
   0203 02 B9               100 	.word	L10
   0205 02 E1               101 	.word	L11
   0207 03 0B               102 	.word	L12
   0209 03 37               103 	.word	L13
   020B 03 61               104 	.word	L14
   020D                     105 L6:
   020D E6 E8 10      [ 5]  106 	ldb	16,s
   0210 E7 65         [ 5]  107 	stb	5,s
   0212 E6 65         [ 5]  108 	ldb	5,s
   0214 1D            [ 2]  109 	sex		;extendqihi2: R:b -> R:d
   0215 ED E4         [ 5]  110 	std	,s
   0217 EC E4         [ 5]  111 	ldd	,s
   0219 58            [ 2]  112 	aslb
   021A 49            [ 2]  113 	rola
   021B CE C8 E5      [ 3]  114 	ldu	#_Positions
   021E 30 CB         [ 8]  115 	leax	d,u
   0220 C6 E2         [ 2]  116 	ldb	#-30
   0222 E7 84         [ 4]  117 	stb	,x
   0224 E6 65         [ 5]  118 	ldb	5,s
   0226 1D            [ 2]  119 	sex		;extendqihi2: R:b -> R:d
   0227 ED E4         [ 5]  120 	std	,s
   0229 EC E4         [ 5]  121 	ldd	,s
   022B 58            [ 2]  122 	aslb
   022C 49            [ 2]  123 	rola
   022D CE C8 E6      [ 3]  124 	ldu	#_Positions+1
   0230 30 CB         [ 8]  125 	leax	d,u
   0232 C6 1E         [ 2]  126 	ldb	#30
   0234 E7 84         [ 4]  127 	stb	,x
   0236 16 01 78      [ 5]  128 	lbra	L16
   0239                     129 L7:
   0239 E6 E8 10      [ 5]  130 	ldb	16,s
   023C E7 66         [ 5]  131 	stb	6,s
   023E E6 66         [ 5]  132 	ldb	6,s
   0240 1D            [ 2]  133 	sex		;extendqihi2: R:b -> R:d
   0241 ED E4         [ 5]  134 	std	,s
   0243 EC E4         [ 5]  135 	ldd	,s
   0245 58            [ 2]  136 	aslb
   0246 49            [ 2]  137 	rola
   0247 CE C8 E5      [ 3]  138 	ldu	#_Positions
   024A 30 CB         [ 8]  139 	leax	d,u
   024C 6F 84         [ 6]  140 	clr	,x
   024E E6 66         [ 5]  141 	ldb	6,s
   0250 1D            [ 2]  142 	sex		;extendqihi2: R:b -> R:d
   0251 ED E4         [ 5]  143 	std	,s
   0253 EC E4         [ 5]  144 	ldd	,s
   0255 58            [ 2]  145 	aslb
   0256 49            [ 2]  146 	rola
   0257 CE C8 E6      [ 3]  147 	ldu	#_Positions+1
   025A 30 CB         [ 8]  148 	leax	d,u
   025C C6 1E         [ 2]  149 	ldb	#30
   025E E7 84         [ 4]  150 	stb	,x
   0260 16 01 4E      [ 5]  151 	lbra	L16
   0263                     152 L8:
   0263 E6 E8 10      [ 5]  153 	ldb	16,s
   0266 E7 67         [ 5]  154 	stb	7,s
   0268 E6 67         [ 5]  155 	ldb	7,s
   026A 1D            [ 2]  156 	sex		;extendqihi2: R:b -> R:d
   026B ED E4         [ 5]  157 	std	,s
   026D EC E4         [ 5]  158 	ldd	,s
   026F 58            [ 2]  159 	aslb
   0270 49            [ 2]  160 	rola
   0271 CE C8 E5      [ 3]  161 	ldu	#_Positions
   0274 30 CB         [ 8]  162 	leax	d,u
   0276 C6 1E         [ 2]  163 	ldb	#30
   0278 E7 84         [ 4]  164 	stb	,x
   027A E6 67         [ 5]  165 	ldb	7,s
   027C 1D            [ 2]  166 	sex		;extendqihi2: R:b -> R:d
   027D ED E4         [ 5]  167 	std	,s
   027F EC E4         [ 5]  168 	ldd	,s
   0281 58            [ 2]  169 	aslb
   0282 49            [ 2]  170 	rola
   0283 CE C8 E6      [ 3]  171 	ldu	#_Positions+1
   0286 30 CB         [ 8]  172 	leax	d,u
   0288 C6 1E         [ 2]  173 	ldb	#30
   028A E7 84         [ 4]  174 	stb	,x
   028C 16 01 22      [ 5]  175 	lbra	L16
   028F                     176 L9:
   028F E6 E8 10      [ 5]  177 	ldb	16,s
   0292 E7 68         [ 5]  178 	stb	8,s
   0294 E6 68         [ 5]  179 	ldb	8,s
   0296 1D            [ 2]  180 	sex		;extendqihi2: R:b -> R:d
   0297 ED E4         [ 5]  181 	std	,s
   0299 EC E4         [ 5]  182 	ldd	,s
   029B 58            [ 2]  183 	aslb
   029C 49            [ 2]  184 	rola
   029D CE C8 E5      [ 3]  185 	ldu	#_Positions
   02A0 30 CB         [ 8]  186 	leax	d,u
   02A2 C6 E2         [ 2]  187 	ldb	#-30
   02A4 E7 84         [ 4]  188 	stb	,x
   02A6 E6 68         [ 5]  189 	ldb	8,s
   02A8 1D            [ 2]  190 	sex		;extendqihi2: R:b -> R:d
   02A9 ED E4         [ 5]  191 	std	,s
   02AB EC E4         [ 5]  192 	ldd	,s
   02AD 58            [ 2]  193 	aslb
   02AE 49            [ 2]  194 	rola
   02AF CE C8 E6      [ 3]  195 	ldu	#_Positions+1
   02B2 30 CB         [ 8]  196 	leax	d,u
   02B4 6F 84         [ 6]  197 	clr	,x
   02B6 16 00 F8      [ 5]  198 	lbra	L16
   02B9                     199 L10:
   02B9 E6 E8 10      [ 5]  200 	ldb	16,s
   02BC E7 69         [ 5]  201 	stb	9,s
   02BE E6 69         [ 5]  202 	ldb	9,s
   02C0 1D            [ 2]  203 	sex		;extendqihi2: R:b -> R:d
   02C1 ED E4         [ 5]  204 	std	,s
   02C3 EC E4         [ 5]  205 	ldd	,s
   02C5 58            [ 2]  206 	aslb
   02C6 49            [ 2]  207 	rola
   02C7 CE C8 E5      [ 3]  208 	ldu	#_Positions
   02CA 30 CB         [ 8]  209 	leax	d,u
   02CC 6F 84         [ 6]  210 	clr	,x
   02CE E6 69         [ 5]  211 	ldb	9,s
   02D0 1D            [ 2]  212 	sex		;extendqihi2: R:b -> R:d
   02D1 ED E4         [ 5]  213 	std	,s
   02D3 EC E4         [ 5]  214 	ldd	,s
   02D5 58            [ 2]  215 	aslb
   02D6 49            [ 2]  216 	rola
   02D7 CE C8 E6      [ 3]  217 	ldu	#_Positions+1
   02DA 30 CB         [ 8]  218 	leax	d,u
   02DC 6F 84         [ 6]  219 	clr	,x
   02DE 16 00 D0      [ 5]  220 	lbra	L16
   02E1                     221 L11:
   02E1 E6 E8 10      [ 5]  222 	ldb	16,s
   02E4 E7 6A         [ 5]  223 	stb	10,s
   02E6 E6 6A         [ 5]  224 	ldb	10,s
   02E8 1D            [ 2]  225 	sex		;extendqihi2: R:b -> R:d
   02E9 ED E4         [ 5]  226 	std	,s
   02EB EC E4         [ 5]  227 	ldd	,s
   02ED 58            [ 2]  228 	aslb
   02EE 49            [ 2]  229 	rola
   02EF CE C8 E5      [ 3]  230 	ldu	#_Positions
   02F2 30 CB         [ 8]  231 	leax	d,u
   02F4 C6 1E         [ 2]  232 	ldb	#30
   02F6 E7 84         [ 4]  233 	stb	,x
   02F8 E6 6A         [ 5]  234 	ldb	10,s
   02FA 1D            [ 2]  235 	sex		;extendqihi2: R:b -> R:d
   02FB ED E4         [ 5]  236 	std	,s
   02FD EC E4         [ 5]  237 	ldd	,s
   02FF 58            [ 2]  238 	aslb
   0300 49            [ 2]  239 	rola
   0301 CE C8 E6      [ 3]  240 	ldu	#_Positions+1
   0304 30 CB         [ 8]  241 	leax	d,u
   0306 6F 84         [ 6]  242 	clr	,x
   0308 16 00 A6      [ 5]  243 	lbra	L16
   030B                     244 L12:
   030B E6 E8 10      [ 5]  245 	ldb	16,s
   030E E7 6B         [ 5]  246 	stb	11,s
   0310 E6 6B         [ 5]  247 	ldb	11,s
   0312 1D            [ 2]  248 	sex		;extendqihi2: R:b -> R:d
   0313 ED E4         [ 5]  249 	std	,s
   0315 EC E4         [ 5]  250 	ldd	,s
   0317 58            [ 2]  251 	aslb
   0318 49            [ 2]  252 	rola
   0319 CE C8 E5      [ 3]  253 	ldu	#_Positions
   031C 30 CB         [ 8]  254 	leax	d,u
   031E C6 E2         [ 2]  255 	ldb	#-30
   0320 E7 84         [ 4]  256 	stb	,x
   0322 E6 6B         [ 5]  257 	ldb	11,s
   0324 1D            [ 2]  258 	sex		;extendqihi2: R:b -> R:d
   0325 ED E4         [ 5]  259 	std	,s
   0327 EC E4         [ 5]  260 	ldd	,s
   0329 58            [ 2]  261 	aslb
   032A 49            [ 2]  262 	rola
   032B CE C8 E6      [ 3]  263 	ldu	#_Positions+1
   032E 30 CB         [ 8]  264 	leax	d,u
   0330 C6 E2         [ 2]  265 	ldb	#-30
   0332 E7 84         [ 4]  266 	stb	,x
   0334 16 00 7A      [ 5]  267 	lbra	L16
   0337                     268 L13:
   0337 E6 E8 10      [ 5]  269 	ldb	16,s
   033A E7 6C         [ 5]  270 	stb	12,s
   033C E6 6C         [ 5]  271 	ldb	12,s
   033E 1D            [ 2]  272 	sex		;extendqihi2: R:b -> R:d
   033F ED E4         [ 5]  273 	std	,s
   0341 EC E4         [ 5]  274 	ldd	,s
   0343 58            [ 2]  275 	aslb
   0344 49            [ 2]  276 	rola
   0345 CE C8 E5      [ 3]  277 	ldu	#_Positions
   0348 30 CB         [ 8]  278 	leax	d,u
   034A 6F 84         [ 6]  279 	clr	,x
   034C E6 6C         [ 5]  280 	ldb	12,s
   034E 1D            [ 2]  281 	sex		;extendqihi2: R:b -> R:d
   034F ED E4         [ 5]  282 	std	,s
   0351 EC E4         [ 5]  283 	ldd	,s
   0353 58            [ 2]  284 	aslb
   0354 49            [ 2]  285 	rola
   0355 CE C8 E6      [ 3]  286 	ldu	#_Positions+1
   0358 30 CB         [ 8]  287 	leax	d,u
   035A C6 E2         [ 2]  288 	ldb	#-30
   035C E7 84         [ 4]  289 	stb	,x
   035E 16 00 50      [ 5]  290 	lbra	L16
   0361                     291 L14:
   0361 E6 E8 10      [ 5]  292 	ldb	16,s
   0364 E7 6D         [ 5]  293 	stb	13,s
   0366 E6 6D         [ 5]  294 	ldb	13,s
   0368 1D            [ 2]  295 	sex		;extendqihi2: R:b -> R:d
   0369 ED E4         [ 5]  296 	std	,s
   036B EC E4         [ 5]  297 	ldd	,s
   036D 58            [ 2]  298 	aslb
   036E 49            [ 2]  299 	rola
   036F CE C8 E5      [ 3]  300 	ldu	#_Positions
   0372 30 CB         [ 8]  301 	leax	d,u
   0374 C6 1E         [ 2]  302 	ldb	#30
   0376 E7 84         [ 4]  303 	stb	,x
   0378 E6 6D         [ 5]  304 	ldb	13,s
   037A 1D            [ 2]  305 	sex		;extendqihi2: R:b -> R:d
   037B ED E4         [ 5]  306 	std	,s
   037D EC E4         [ 5]  307 	ldd	,s
   037F 58            [ 2]  308 	aslb
   0380 49            [ 2]  309 	rola
   0381 CE C8 E6      [ 3]  310 	ldu	#_Positions+1
   0384 30 CB         [ 8]  311 	leax	d,u
   0386 C6 E2         [ 2]  312 	ldb	#-30
   0388 E7 84         [ 4]  313 	stb	,x
   038A 20 25         [ 3]  314 	bra	L16
   038C                     315 L5:
   038C E6 E8 10      [ 5]  316 	ldb	16,s
   038F E7 6E         [ 5]  317 	stb	14,s
   0391 E6 6E         [ 5]  318 	ldb	14,s
   0393 1D            [ 2]  319 	sex		;extendqihi2: R:b -> R:d
   0394 ED E4         [ 5]  320 	std	,s
   0396 EC E4         [ 5]  321 	ldd	,s
   0398 58            [ 2]  322 	aslb
   0399 49            [ 2]  323 	rola
   039A CE C8 E5      [ 3]  324 	ldu	#_Positions
   039D 30 CB         [ 8]  325 	leax	d,u
   039F 6F 84         [ 6]  326 	clr	,x
   03A1 E6 6E         [ 5]  327 	ldb	14,s
   03A3 1D            [ 2]  328 	sex		;extendqihi2: R:b -> R:d
   03A4 ED E4         [ 5]  329 	std	,s
   03A6 EC E4         [ 5]  330 	ldd	,s
   03A8 58            [ 2]  331 	aslb
   03A9 49            [ 2]  332 	rola
   03AA CE C8 E6      [ 3]  333 	ldu	#_Positions+1
   03AD 30 CB         [ 8]  334 	leax	d,u
   03AF 6F 84         [ 6]  335 	clr	,x
   03B1                     336 L16:
   03B1 6C E8 10      [ 7]  337 	inc	16,s
   03B4                     338 L4:
   03B4 E6 E8 10      [ 5]  339 	ldb	16,s
   03B7 C1 13         [ 2]  340 	cmpb	#19	;cmpqi:
   03B9 10 2F FE 16   [ 6]  341 	lble	L17
   03BD 7F C8 89      [ 7]  342 	clr	_current_level
   03C0 32 E8 11      [ 5]  343 	leas	17,s
   03C3 35 C0         [ 7]  344 	puls	u,pc
                            345 	.globl	_Gamefield
                            346 	.area	.data
   C8B4                     347 _Gamefield:
   C8B4 01                  348 	.byte	1
   C8B5 00                  349 	.byte	0
   C8B6 00                  350 	.byte	0
   C8B7 00                  351 	.byte	0
   C8B8 00                  352 	.byte	0
   C8B9 01                  353 	.byte	1
   C8BA 1E                  354 	.byte	30
   C8BB 00                  355 	.byte	0
   C8BC 00                  356 	.byte	0
   C8BD 00                  357 	.byte	0
   C8BE 01                  358 	.byte	1
   C8BF 00                  359 	.byte	0
   C8C0 1E                  360 	.byte	30
   C8C1 00                  361 	.byte	0
   C8C2 00                  362 	.byte	0
   C8C3 01                  363 	.byte	1
   C8C4 1E                  364 	.byte	30
   C8C5 1E                  365 	.byte	30
   C8C6 00                  366 	.byte	0
   C8C7 00                  367 	.byte	0
   C8C8 01                  368 	.byte	1
   C8C9 E2                  369 	.byte	-30
   C8CA 00                  370 	.byte	0
   C8CB 00                  371 	.byte	0
   C8CC 00                  372 	.byte	0
   C8CD 01                  373 	.byte	1
   C8CE 00                  374 	.byte	0
   C8CF E2                  375 	.byte	-30
   C8D0 00                  376 	.byte	0
   C8D1 00                  377 	.byte	0
   C8D2 01                  378 	.byte	1
   C8D3 E2                  379 	.byte	-30
   C8D4 E2                  380 	.byte	-30
   C8D5 00                  381 	.byte	0
   C8D6 00                  382 	.byte	0
   C8D7 01                  383 	.byte	1
   C8D8 1E                  384 	.byte	30
   C8D9 E2                  385 	.byte	-30
   C8DA 00                  386 	.byte	0
   C8DB 00                  387 	.byte	0
   C8DC 01                  388 	.byte	1
   C8DD E2                  389 	.byte	-30
   C8DE 1E                  390 	.byte	30
   C8DF 00                  391 	.byte	0
   C8E0 00                  392 	.byte	0
                            393 	.area	.text
                            394 	.globl	_Generate_Gamefield
   03C5                     395 _Generate_Gamefield:
   03C5 32 7D         [ 5]  396 	leas	-3,s
   03C7 6F 62         [ 7]  397 	clr	2,s
   03C9 20 1E         [ 3]  398 	bra	L20
   03CB                     399 L21:
   03CB E6 62         [ 5]  400 	ldb	2,s
   03CD 1D            [ 2]  401 	sex		;extendqihi2: R:b -> R:d
   03CE 1F 01         [ 6]  402 	tfr	d,x
   03D0 AF E4         [ 5]  403 	stx	,s
   03D2 EC E4         [ 5]  404 	ldd	,s
   03D4 58            [ 2]  405 	aslb
   03D5 49            [ 2]  406 	rola
   03D6 58            [ 2]  407 	aslb
   03D7 49            [ 2]  408 	rola
   03D8 ED E4         [ 5]  409 	std	,s
   03DA 1E 01         [ 8]  410 	exg	d,x
   03DC E3 E4         [ 6]  411 	addd	,s; addhi3,3
   03DE 1E 01         [ 8]  412 	exg	d,x
   03E0 30 89 C8 B4   [ 8]  413 	leax	_Gamefield,x
   03E4 BD 05 0D      [ 8]  414 	jsr	_handle_objects
   03E7 6C 62         [ 7]  415 	inc	2,s
   03E9                     416 L20:
   03E9 E6 62         [ 5]  417 	ldb	2,s
   03EB C1 08         [ 2]  418 	cmpb	#8	;cmpqi:
   03ED 2F DC         [ 3]  419 	ble	L21
   03EF 32 63         [ 5]  420 	leas	3,s
   03F1 39            [ 5]  421 	rts
                            422 	.globl	_Display_Pattern
   03F2                     423 _Display_Pattern:
   03F2 34 40         [ 6]  424 	pshs	u
   03F4 32 7D         [ 5]  425 	leas	-3,s
   03F6 6F 62         [ 7]  426 	clr	2,s
   03F8 20 13         [ 3]  427 	bra	L24
   03FA                     428 L25:
   03FA E6 62         [ 5]  429 	ldb	2,s
   03FC 1D            [ 2]  430 	sex		;extendqihi2: R:b -> R:d
   03FD ED E4         [ 5]  431 	std	,s
   03FF EC E4         [ 5]  432 	ldd	,s
   0401 58            [ 2]  433 	aslb
   0402 49            [ 2]  434 	rola
   0403 CE C8 E5      [ 3]  435 	ldu	#_Positions
   0406 30 CB         [ 8]  436 	leax	d,u
   0408 BD 05 60      [ 8]  437 	jsr	_draw_cross
   040B 6C 62         [ 7]  438 	inc	2,s
   040D                     439 L24:
   040D E6 62         [ 5]  440 	ldb	2,s
   040F C1 08         [ 2]  441 	cmpb	#8	;cmpqi:
   0411 2F E7         [ 3]  442 	ble	L25
   0413 32 63         [ 5]  443 	leas	3,s
   0415 35 C0         [ 7]  444 	puls	u,pc
   0417                     445 LC0:
   0417 54 49 4D 45 20 4C   446 	.byte	84,73,77,69,32,76,69,70
        45 46
   041F 54 80 00            447 	.byte	84,-128,0
                            448 	.globl	_Display_TimeLeft
   0422                     449 _Display_TimeLeft:
   0422 34 40         [ 6]  450 	pshs	u
   0424 32 7D         [ 5]  451 	leas	-3,s
   0426 C6 C4         [ 2]  452 	ldb	#-60
   0428 E7 E2         [ 6]  453 	stb	,-s
   042A 8E 04 17      [ 3]  454 	ldx	#LC0
   042D C6 50         [ 2]  455 	ldb	#80
   042F BD 05 9A      [ 8]  456 	jsr	_print_string
   0432 32 61         [ 5]  457 	leas	1,s
   0434 6F 62         [ 7]  458 	clr	2,s
   0436 20 13         [ 3]  459 	bra	L28
   0438                     460 L29:
   0438 E6 62         [ 5]  461 	ldb	2,s
   043A 1D            [ 2]  462 	sex		;extendqihi2: R:b -> R:d
   043B ED E4         [ 5]  463 	std	,s
   043D EC E4         [ 5]  464 	ldd	,s
   043F 58            [ 2]  465 	aslb
   0440 49            [ 2]  466 	rola
   0441 CE C8 9E      [ 3]  467 	ldu	#_Time_Positions
   0444 30 CB         [ 8]  468 	leax	d,u
   0446 BD 05 60      [ 8]  469 	jsr	_draw_cross
   0449 6C 62         [ 7]  470 	inc	2,s
   044B                     471 L28:
   044B E6 62         [ 5]  472 	ldb	2,s
   044D C1 0A         [ 2]  473 	cmpb	#10	;cmpqi:
   044F 2F E7         [ 3]  474 	ble	L29
   0451 32 63         [ 5]  475 	leas	3,s
   0453 35 C0         [ 7]  476 	puls	u,pc
                            477 	.globl	_level_play
   0455                     478 _level_play:
   0455 32 7C         [ 5]  479 	leas	-4,s
   0457 20 29         [ 3]  480 	bra	L32
   0459                     481 L33:
   0459 BD F1 AF      [ 8]  482 	jsr	___DP_to_C8
   045C BE C8 E1      [ 6]  483 	ldx	_current_explosion
   045F AF E4         [ 5]  484 	stx	,s
   0461 AE E4         [ 5]  485 	ldx	,s
   0463 BD 05 C4      [ 8]  486 	jsr	__Explosion_Snd
   0466 BE C8 E3      [ 6]  487 	ldx	_current_music
   0469 AF 62         [ 6]  488 	stx	2,s
   046B AE 62         [ 6]  489 	ldx	2,s
   046D BD 05 CD      [ 8]  490 	jsr	__Init_Music_chk
   0470 BD F1 92      [ 8]  491 	jsr	___Wait_Recal
   0473 BD 05 E7      [ 8]  492 	jsr	__Do_Sound
   0476 BD F2 A5      [ 8]  493 	jsr	___Intensity_5F
   0479 BD 04 22      [ 8]  494 	jsr	_Display_TimeLeft
   047C BD 03 C5      [ 8]  495 	jsr	_Generate_Gamefield
   047F BD 03 F2      [ 8]  496 	jsr	_Display_Pattern
   0482                     497 L32:
   0482 F6 C8 89      [ 5]  498 	ldb	_current_level
   0485 5D            [ 2]  499 	tstb
   0486 27 D1         [ 3]  500 	beq	L33
   0488 32 64         [ 5]  501 	leas	4,s
   048A 39            [ 5]  502 	rts
ASxxxx Assembler V05.50  (Motorola 6809)                                Page 1
Hexadecimal [16-Bits]                                 Sun Apr  6 23:20:57 2025

Symbol Table

    .__.$$$.       =   2710 L   |     .__.ABS.       =   0000 G
    .__.CPU.       =   0000 L   |     .__.H$L.       =   0001 L
  4 L10                0125 R   |   4 L11                014D R
  4 L12                0177 R   |   4 L13                01A3 R
  4 L14                01CD R   |   4 L15                0065 R
  4 L16                021D R   |   4 L17                003F R
  4 L2                 0033 R   |   4 L20                0255 R
  4 L21                0237 R   |   4 L24                0279 R
  4 L25                0266 R   |   4 L28                02B7 R
  4 L29                02A4 R   |   4 L3                 0009 R
  4 L32                02EE R   |   4 L33                02C5 R
  4 L4                 0220 R   |   4 L5                 01F8 R
  4 L6                 0079 R   |   4 L7                 00A5 R
  4 L8                 00CF R   |   4 L9                 00FB R
  4 LC0                0283 R   |   4 _Display_Patte     025E GR
  4 _Display_TimeL     028E GR  |   2 _Display_patte     0001 GR
  2 _Gamefield         002B GR  |   4 _Generate_Game     0231 GR
  3 _Positions         0000 GR  |   2 _Time_Position     0015 GR
    __Do_Sound         **** GX  |     __Explosion_Sn     **** GX
    __Init_Music_c     **** GX  |     __Random           **** GX
    ___DP_to_C8        **** GX  |     ___Intensity_5     **** GX
    ___Wait_Recal      **** GX  |     _current_explo     **** GX
  2 _current_level     0000 GR  |     _current_music     **** GX
    _draw_cross        **** GX  |     _handle_object     **** GX
  4 _level_init        0000 GR  |   4 _level_play        02C1 GR
    _print_string      **** GX  |     _umodhi3           **** GX

ASxxxx Assembler V05.50  (Motorola 6809)                                Page 2
Hexadecimal [16-Bits]                                 Sun Apr  6 23:20:57 2025

Area Table

[_CSEG]
   0 _CODE            size    0   flags C080
   2 .data            size   58   flags  100
   3 .bss             size   28   flags    0
   4 .text            size  2F7   flags  100
[_DSEG]
   1 _DATA            size    0   flags C0C0

