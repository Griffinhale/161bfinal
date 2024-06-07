#include <iostream>
#include <cstring>
#include <ctime>
#include <fstream>
#include "User.h"
#include "Results.h"
#include "Utils.h"

using namespace std;


// initializs new user, inits dateCreated/Refreshed and stores user/pin
User createUser(char username[], int pin){
    // grab today's date	
    time_t now = time(nullptr);
    tm localTime = *localtime(&now);
    
    // format for date
    char todayDate[10];
    strcpy(todayDate, localTime.tm_mon+1);
    strcat(todayDate, "-");
    strcat(todayDate, localTime.tm_mday);
    strcat(todayDate, "-");
    strcat(todayDate, localTime.tm_year + 1990);
    
    // initiale newUser properties
    User newUser = new User;
    strcpy(newUser.username, username);
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
    time_t now = time(nullptr);
    tm localTime = *localTime(&now);
	
    // format for date file
    char todayDate[10];
    strcpy(todayDate, localTime.tm_mon+1);
    strcat(todayDate, "-");
    strcat(todayDate, localTime.tm_mday);
    strcat(todayDate, "-");
    strcat(todayDate, localTime.tm_year + 1990);
	
    // update user dateRefreshed
    strcpy(user.dateRefreshed, todayDate);

    // add branch for conditional arg re: deleting users
    // that doesnt add header before refreshing datafile's csv
    // belong here or in writeResults?
}

// changes user pin
void changePassword(User user, int& currentPin, int newPin){
    if (strcmp(currentPin, user.pin) == 0){
	user.pin = newPin;
    }
    else{
	cout << "Wrong pin." << endl;
    }
}

// initialized program memory with user's data file
User logIn(char username[], int pin){
    User user = new User;
    Results results = new Results;
    fstream userFile;
    char temp[50];
    bool userFound = false;
    char dir[50] = "data/users.txt";    
    userFile.open(dir, fstream::in);
    
    while (!userFound && !userFile.eof()){
	getline(temp, 50, '\n');
	
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
	loadResults(userFile);
    }
    else{
	cout << "user not found" << endl;
	cout << "back to main menu" << endl;
	displayMenu(1);
    }
    return user;
}


// removes user's data file from program memory
void logOut(){
    // unloads user data
}
