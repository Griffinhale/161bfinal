#include "User.h"
//#include "Results.h"
#include "Utils.h"

using namespace std;


// initializs new user, inits dateCreated/Refreshed and stores user/pin
User createUser(){
    char username[25];
    int pin = 0;

    // grab today's date	
    const time_t now = time(nullptr);
    const struct tm *localTimePtr = localtime(&now);
    
    // format for date
    char todayDate[10];
    strftime(todayDate, 10, "%b-%d-%y", localTimePtr);
    cout << todayDate << endl;

    // initiale newUser properties
    User newUser;
    
    cout << "Enter a username for login, 25 chars max:\n\t>>";
    cin.getline(username, 25, '\n');
    strcpy(newUser.username, username);

    cout << "Enter a pin. Use a number no more than 4 digits long:\n\t>>";
    cin >> pin;
    newUser.pin = pin;
    
    strcpy(newUser.dateCreated, todayDate); 
    strcpy(newUser.dateRefreshed, todayDate);

    return newUser;
}

// Removes all date associated with user
void deleteUser(User& user, int pinCheck){
    // reset user's datafile
    // call writeResults with delete flag
    // update user registry
}

// wipes user prefs and refreses user results dile
void resetUser(User& user, int pinCheck){
    // wipe user results file
    // call writeResults with reset flag

    // grab today's date
    const time_t now = time(nullptr);
    const struct tm *localTimePtr = localtime(&now);
	
    // format for date file
    char todayDate[10];
    strftime(todayDate, 10, "%b-%d-%y", localTimePtr);
    cout << todayDate << endl;

    // update user dateRefreshed
    strcpy(user.dateRefreshed, todayDate);

    // add branch for conditional arg re: deleting users
    // that doesnt add header before refreshing datafile's csv
    // belong here or in writeResults?
}

// changes user pin
void changePassword(User user, int& currentPin, int newPin){
    if (currentPin == user.pin){
	user.pin = newPin;
    }
    else{
	cout << "Wrong pin." << endl;
    }
}

// initialized program memory with user's data file
User logIn(LOGIN_OPT login_opt){
    User user;
    //Results results;
    fstream userFile;
    char username[25];
    int pin = 0;
    char temp[50];
    bool userFound = false;
    char dir[50] = "data/users.txt";    
    userFile.open(dir, fstream::in);

    
    switch (login_opt){
	case 1: getLoginDetails(username, pin);
		break;
	case 2: strcpy(username, "Guest");
		pin = 0;
		break;
	case 4: strcpy(username, "Sample");
		pin = 1;
		break;
    }

    while (!userFound && !userFile.eof()){
	userFile.getline(temp, 50, '\n');
	
	if (strcmp(temp, username) == 0){
	    userFound = true;
	}

    }
    
    userFile.close();
    
    if (userFound){
	strcpy(dir, "data/");
	strcat(dir, temp);
	strcat(dir, ".txt");
	userFile.open(dir);
	//loadResults(userFile);
    }
    else{
	cout << "user not found" << endl;
	cout << "back to main menu" << endl;
	displayMenu(MENUS::mainMenu);
    }

    return user;
}

void getLoginDetails(char username[], int& pin){
    cout << "Enter username: ";
    cin.getline(username, 25, '\n');
    cout << "Enter pin: ";
    cin >> pin;

}

// removes user's data file from program memory
void logOut(){
    // unloads user data
}
