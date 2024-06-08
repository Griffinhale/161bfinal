#ifndef UTILS_H
#define UTILS_H

#include <iostream>
#include <cstring>
#include "User.h"
//#include "Survey.h"

// enum to help branch menu selection
enum MENUS{
    mainMenu = 1,
    userMenu = 2,
    surveyStartMenu = 4,
    nextSurveyMenu = 8,
    databaseMenu = 16,
    userSettingsMenu = 32,
};

// menu options const declarations
extern const char mainMenuContents[200];
extern const char userMenuContents[200];
extern const char surveyStartMenuContents[200];
extern const char databaseMenuContents[200];
extern const char userSettingsMenuContents[200];

// function declarations
void readOption(const char prompt[], int& num); // reads int menu choice
void displayMenu(MENUS menu); // displays menu based off enum flag while no user logged in
void displayMenu(MENUS menu, User user); // overload, keeps User in memory for easy pass to other functions
//void displayMenu(MENUS menu, User user, ResultsEntry todayResults); // overload, keeps ResultEntry in memory for easy pass
void banner(); // prints bookend for program open and close
void pause(); // pauses program for UX
//void encrypt();
//void decrypt();

#endif
