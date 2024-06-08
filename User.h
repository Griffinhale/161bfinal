#ifndef USER_H
#define USER_H

#include <iostream>
#include <cstring>
#include <ctime>
#include <fstream>

struct User{
	char username[25];
	int pin;
	char dateCreated[10];
	char dateRefreshed[10];
	bool encrypted = false;
};

enum LOGIN_OPT{
    normal = 1,
    guest = 2,
    sample = 4
};


// initializs new user, inits dateCreated/Refreshed and stores user/pin
User createUser();

// reads login details
void getLoginDetails(char username[], int& pin);

// Removes all date associated with user
void deleteUser(User& user, int pinCheck);


// wipes user prefs and refreses user results file
void resetUser(User& user, int pinCheck);


// changes user pin
void changePassword(int& currentPin, int newPin);

// initialized program memory with user's data file
User logIn(LOGIN_OPT login_opt = LOGIN_OPT::normal);


// removes user's data file from program memory
void logOut();

#endif
