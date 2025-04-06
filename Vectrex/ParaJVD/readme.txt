___________________________________________________________________________________________________

README for ParaJVD BETA 2 - preview 6 - 20th October 2015
___________________________________________________________________________________________________

This is an update to the readme for version BETA2 preview 5 ; 
be sure to read the history (especially the ALPHA1 entry which explains how to setup/use ParaJVD).


CHANGE LOG :

- FIX: the project creation dialog did not save the specified 'tabs size' 
- ADD: a new "Skip all breakpoints" command (in Toolbar and Breakpoints view's menu). 
- Optimized the handling of inactive memory breakpoints.
- ADD: extraction of symbols (variable/constants names) from source files: at the moment, only 
  the AS09 .DBG and .LST files parser can load variable names
- ADD: new SYMBOLS view to list the available symbols name/value
- Added support for variable names in the Watch View expressions
- Better handling of common errors during watch evaluation (Illegal memory accesses are correctly 
  reported into the console/watch table, same for the "unknown symbol" error).
- Removed warning message from JInput about Win7+ being an unknown OS
- (internal) Major refactoring of ParaJVE/ParaJVD java packages


___________________________________________________________________________________________________

README for ParaJVD BETA 2 - preview 5 - 26th May 2015
___________________________________________________________________________________________________

This is an update to the readme for version BETA2 preview 4


CHANGE LOG :

- Fixed several graphical glitches in the "Find" action's highlighted text area
- Fixed program syntax highlighting breaking in some cases


___________________________________________________________________________________________________

README for ParaJVD BETA 2 - preview 4 - 20th April 2015
___________________________________________________________________________________________________

This is an update to the readme for version BETA2 preview 3


CHANGE LOG :

- Added highlight of the text area that matched the Find / Find All search.
- The Search options are now persistent (if the "Save Project" option is checked on exit).
- The Seach dialogs position/size is now persistent (if the "Save Layout" option is checked on exit).
- Upon startup, ParaJVD checks that the native libraries can be loaded, and displays a warning
  message if this failed (=> points out an installation problem to the user).


___________________________________________________________________________________________________

README for ParaJVD BETA 2 - preview 3 - 15th April 2015
___________________________________________________________________________________________________

This is an update to the readme for version BETA2 preview 2


CHANGE LOG :

- Added the "Find" and "Find All" actions on the Program view (Ctrl+F).


___________________________________________________________________________________________________

README for ParaJVD BETA 2 - preview 2 - 25th February 2015
___________________________________________________________________________________________________

This is an update to the readme for version BETA2 preview 1


CHANGE LOG :

- The File selectors always had the generic filter selected by default (instead of ParaJVD's specific filters).
- The shortcut text of the BackTrace Recording toolbar button (F12) was not displayed using a special style
  anymore, once it had been activated at least once.


___________________________________________________________________________________________________

README for ParaJVD BETA 2 - preview 1 - 18th February 2015
README for ParaJVD BETA 1 - release - 6th June 2014
___________________________________________________________________________________________________

CHANGE LOG :

- The desktop layout can now be automatically saved upon exit, and restored the next time ParaJVE starts.
- Most view now support a configurable Font. Some fonts are embedded, but you can add your own (cf. /data/fonts/readme.txt)
- Added a new "Backtrace" view that records the executed instructions along with the register values.
  With this view, you can review the execution of a part of your program (very useful to track bugs).
- Added support for ParaJVE memory plugins (useful for special cartridge devs)
- The CPU core now emulates even more undocumented instructions (instruction behaviour checked against a real Vectrex)
- Added support for more assembler listing files : AS6809 (.lst .rel .rst) and ASLink (.map)
- Converting TABs to spaces in the "Sources" view (TAB size configurable in the project's creation dialog)
- Now bundled with the native libraries packages for Windows/Linux/MacOS (32 and 64bits)
- Numerous stability & bug fixes
- Removed some debug code

INSTALL :

- Copy your license file (ParaJVE.beta) into the root folder
- Go to "/libs/natives", select the archive matching your Operating System, and extract it directly into this folder.
- On Windows, run "/ParaJVD.bat" (on other platforms, you will have to write your own bash, based on ParaJVE.bat).

KNOWN BUGS :

- When debugging using the "AS09 .DBG" sources mode, stepping on a macro will execute one instruction of
  the expanded macro at a time (if the macros generates N instructions, you will have to step N times before
  the source line advances). In LST sources mode, this does not happen because the sources show the expanded 
  macro (so each instruction in the original macro has its own line).
  In a future version, stepping on a macro in AS09/DBG mode will execute the whole content of the macro (as if 
  it was made of a single instruction).
- The sound is still looping when the debugger enters the 'paused' state. Your are advised to debug with sound off... :)
- On some computers, ParaJVD might log an exception and/or freeze upon startup
  *** IF THIS HAPPENS ON YOUR COMPUTER, PLEASE SEND ME THE LOG ... THANKS! ***


___________________________________________________________________________________________________

README for ParaJVD ALPHA 1 - release - 8th March 2010
___________________________________________________________________________________________________

I'm short on time so I'll just throw together the things that comes to my mind to help you get started with ParaJVD


First, don't forget to copy your ParaJVE.beta key file in the root folder of ParaJVD


Next, I've included an example project (THRUST by Ville Krumlinde), so that you can load it and play around with the debugger
  - The project definition is located under "data/projects/Example (Thrust)"
  - The project source files and binary files are located uneder "data/sources/Example (Thrust)"
  
In THRUST's source folder, I put a "build.bat" batch file as an example on how to generate the .DBG debug file with AS09.

But you can also use an AS09 .LST listing file as a source for thr project.

When you create your own project, in the second page of the creation wizard, select the right mode (.DBG or .LST mode), then choose the associated file.


One in the debugger, you can play as usual when the ParaJVE view has the focus.
You can use its menus too (for defining the keymaping for instance), turn the sound off (since the sounds tends too loop when the emulator core is suspended - a bug I'll have to fix).
Be aware that invoking the emulator menus when the core is suspended (paused) may still cause deadlocks (debugger frozen). So as a rule, use these menus only when the core is running...


When you switch to another view (the program view for instance), the toolbar shortcut are then active (use tooltips over the buttons to know about the shortcuts : F4 for suspend, etc...)


Each view can be draged around by clicking its title bar and moving it on a drop site (if a drop site is another view, this will create a tabbed view).
The views can also be resized by clicking/moving the mouse over the spare pixels between views.


Most of the debugger actions are available through contextual menus, so you can try the right mouse button over every view/control, you will discover features that might be interresting (for instance, "Cycles view" settings).

- The program view is where you follow the source being debugged (double-clicks on the left margin lets you switch bkpts on/off)
- The registers can be modified when the program is suspended (there are menus available for 16bits registers too, btw).
- The RAM memory can also be modified when in pause mode.
- The Frame Buffer view lets you see the current "frame" as it is constructed by the program, as if in "real time" (you can see the vectors drawing advance at each step).


The registers, memories, breakpoints, cycles, frame buffer and program views have no bug that I am aware of.


In the debugger, when you see a yellow background behind a value, it means that this value changed during the last executed snapshot (in automatic mode, a snapshot is taken whenever execution resumes, be it with a STEP or RUN action).


The watches view works but there are still some problems, mainly with the "area" watches :
- the yellow "change" flag simply doesn't work in these areas, so don't rely on this information
- editing the watches properties may sometime not refresh the watch correctly. It should be updated as soon as one resume/suspend cyle occurs, though.


Saving & restoring the views layout (through the main menu) usually works, but I've had occurences of strange bugs from time to time when restoring a layout (windows disapearing, etc...)


Well, That's all I think of at the moment, so I'll end it here... :)

Feel free to contact me if you have any questions, comment, idea, etc...

Franck.