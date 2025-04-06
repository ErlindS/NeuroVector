// ***************************************************************************
// Vectrex BIOS interface header file
// ***************************************************************************
//
// Vectrex C for gcc6809 - extended adresses (BIOS rom locations)
// (c) Vectrex Academy 2016 - 2025
// contact: vectrex@pforzheim-university.de
//
// ---------------------------------------------------------------------------

#pragma once

// ---------------------------------------------------------------------------
// Frequency Table

extern const int Vec_Sine_Table	  __attribute__((section(".dpfc"))); // 0xFC6D, sine table
extern const int Vec_Cosine_Table __attribute__((section(".dpfc"))); // 0xFC7D, cosine table
extern const int Vec_Note_Table	  __attribute__((section(".dpfc"))); // 0xFC8D, frequency table

// ---------------------------------------------------------------------------
// Built in Melodies

extern const unsigned int Vec_Music_0 __attribute__((section(".dped")));	// 0xED77, melody, minestorm
extern const unsigned int Vec_Music_1 __attribute__((section(".dpfd")));	// 0xFD0D, melody, vectrex opening tune
extern const unsigned int Vec_Music_2 __attribute__((section(".dpfd")));	// 0xFD1D, melody, berzerk
extern const unsigned int Vec_Music_3 __attribute__((section(".dpfd")));	// 0xFD81, melody, armor attack
extern const unsigned int Vec_Music_4 __attribute__((section(".dpfd")));	// 0xFDD3, melody, scramble
extern const unsigned int Vec_Music_5 __attribute__((section(".dpfe")));	// 0xFE38, melody, solar quest
extern const unsigned int Vec_Music_6 __attribute__((section(".dpfe")));	// 0xFE76, melody, clean sweep
extern const unsigned int Vec_Music_7 __attribute__((section(".dpfc")));	// 0xFEC6, melody, star trek
extern const unsigned int Vec_Music_8 __attribute__((section(".dpf8")));	// 0xFEF8, melody, fanfare 1
extern const unsigned int Vec_Music_9 __attribute__((section(".dpff")));	// 0xFF26, melody, fanfare 2
extern const unsigned int Vec_Music_a __attribute__((section(".dpff")));	// 0xFF44, melody, fanfare 3 (berzerk)
extern const unsigned int Vec_Music_b __attribute__((section(".dpff")));	// 0xFF62, melody, fanfare 3a
extern const unsigned int Vec_Music_c __attribute__((section(".dpff")));	// 0xFF7A, melody, fanfare 4
extern const unsigned int Vec_Music_d __attribute__((section(".dpff")));	// 0xFF8F, melody, fanfare 5

// ---------------------------------------------------------------------------
// Adsr Tables

extern const unsigned int Vec_ADSR_FADE66 __attribute__((section(".dped")));	// 0xED8F, adsr table, minestorm
extern const unsigned int Vec_ADSR_FADE0  __attribute__((section(".dpfd")));	// 0xFD69, adsr table
extern const unsigned int Vec_ADSR_FADE1  __attribute__((section(".dpfe")));	// 0xFE28, adsr table
extern const unsigned int Vec_ADSR_FADE2  __attribute__((section(".dpfe")));	// 0xFE66, adsr table
extern const unsigned int Vec_ADSR_FADE3  __attribute__((section(".dpfe")));	// 0xFEB2, adsr table
extern const unsigned int Vec_ADSR_FADE4  __attribute__((section(".dpfe")));	// 0xFEE8, adsr table
extern const unsigned int Vec_ADSR_FADE8  __attribute__((section(".dpff")));	// 0xFF16, adsr table
extern const unsigned int Vec_ADSR_FADE12 __attribute__((section(".dpfd")));	// 0xFDC3, adsr table

// ---------------------------------------------------------------------------
// Twang Tables

extern const unsigned int Vec_TWANG_VIBE0  __attribute__((section(".dpfd")));	// 0xFD79, twang table
extern const unsigned int Vec_TWANG_VIBEHL __attribute__((section(".dpfe")));	// 0xFEB6, twang table, minestorm
extern const unsigned int Vec_TWANG_VIBENL __attribute__((section(".dpfe")));	// 0xFEB6, twang table, minestorm

// ***************************************************************************
// end of file
// ***************************************************************************
