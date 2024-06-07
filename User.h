#ifndef USER_H
#define USER_H

struct User{
	char username[25];
	int pin;
	char dateCreated[10];
	char dateRefreshed[10];
	bool encrypted = false;
};



// initializs new user, inits dateCreated/Refreshed and stores user/pin
void createUser(char username[], int pin);


// Removes all date associated with user
void deleteUser(User& user, int pinCheck);


// wipes user prefs and refreses user results file
void resetUser(User& user, int pinCheck);


// changes user pin
void changePassword(int& currentPin, int newPin);

// initialized program memory with user's data file
void logIn(char username[], int pin);


// removes user's data file from program memory
void logOut();

#endif
