#include "globalvariables.h"

// ---------------------------------------------------------------------------
// Global Variables
// ---------------------------------------------------------------------------
unsigned int buttonspressedcounter = 0;
unsigned int DisplayDurationForCross = 50;
unsigned int NumberOfCrossesToBeDisplayed = 1;

unsigned int counter = 3;
unsigned int temppass = 0;

//Controller
int joy_x = 0;
int joy_y = 0;

//Highscores
unsigned int HighscoreNormal = 0;
unsigned int HighscoreHard = 0;
unsigned int HighscoreExtrem = 0;
unsigned int* CurrentHighscore = 0;

unsigned int sneakyoffset = 0;
unsigned int is_the_same = 1;