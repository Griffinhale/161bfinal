#include "Utils.h"
#include <iostream>

// menu option const definitions
const char mainMenu[200] = "\t1. Login\n\t2. Guest\n\t 3. Test User\n\t4. New User\n\t5. Quit\n";
const char userMenu[200] = "\t1. Take Surveys\n\t2. View Data\n\t 3. User Settings\n\t4. Logout\n\t5. Quit and Logout";
const char surveyEnd[200] = "\t1. Login\n\t2. Guest\n\t 3. Test User\n\t4. New User\n\t5. Quit";
const char database[200] = "\t1. Login\n\t2. Guest\n\t 3. Test User\n\t4. New User\n\t5. Quit";
const char userSettings[200] = "\t1. Login\n\t2. Guest\n\t 3. Test User\n\t4. New User\n\t5. Quit";

void readOption(char prompt[], int& num){
    
    cin >> int;
    
    if (!cin){
	cin.clear();
	cin.ignore();
	cin >> int;
    }

    cin.ignore();
}

void displayMenu(int menuSwitch){
    switch (menuSwitch){
	case 1: cout << mainMenu;
		break;
	case 2: 
	case 4:
	case 8:
    }
}

void banner(){
    for (int i = 0; i < 80; ++i){
	cout << "*";
    }

    cout << endl;
}

void pause(){
	cin.get();
}

//void encrypt();
//void decrypt();
