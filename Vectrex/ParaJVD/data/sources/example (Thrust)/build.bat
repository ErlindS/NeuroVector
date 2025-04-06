@REM SET AS=AS09_132
@REM SET AS=AS09_140
@REM SET AS=AS09_141_win
@REM SET AS=AS09_141_dos

SET AS=AS09_140

@REM -- Delete old output files
@del Thrust.bin 2>nul
@del Thrust.lst 2>nul
@del Thrust.dbg 2>nul

@echo -------------------------------------
@echo  Assembling binary file : Thrust.bin
@echo -------------------------------------
@%AS% -i Thrust.asm
@echo.
@echo.

@echo -------------------------------------
@echo  Creating debug file : Thrust.dbg
@echo -------------------------------------
@%AS% -ig -h0 -w200 -l -m Thrust.asm
@echo.
