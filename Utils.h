#ifndef UTILS_H
#define UTILS_H

// enum to help branch menu selection
enum int MENUS{
	main = 1;
	user = 2;
	surveyEnd = 4;
	database = 8;
	userSettings = 16;
};

// menu options const declarations
extern const char mainMenu[200];
extern const char userMenu[200];
extern const char surveyEnd[200];
extern const char database[200];
extern const char userSettings[200];

// function declarations
void readOption(char prompt[], int& num); // reads int menu choice
void displayMenu(int menuSwitch); // displats menu based off enum flag
void banner(); // prints bookend for program open and close
void pause(); // pauses program for UX
//void encrypt();
//void decrypt();

#endif
