#include "Utils.h"
#include "User.h"

using namespace std;

// menu option const definitions
const char mainMenuContents[200] = "\t1. Login\n\t2. Guest\n\t3. Test User\n\t4. New User\n\t5. Quit\n";
const char userMenuContents[200] = "\t1. Take Surveys\n\t2. View Data\n\t3. User Settings\n\t4. Logout\n\t5. Quit and Logout\n";
const char surveyStartMenuContents[200] = "\t1. Physical Wellness\n\t2. Mental Wellness\n\t3. Social Wellness\n\t4. General Wellness\n\t5. Back to User Menu\n";
//char nextSurveyMenuContents[200]; // construct in displayMenu based off current user's resulti, declare there?
const char databaseMenuContents[200] = "\t1. View Data\n\t2. Add Data\n\t3. Remove Data\n\t4. Filter Data\n\t5. Back to User Menu\n";
const char userSettingsMenuContents[200] = "\t1. Change Password\n\t2. Encryption settings\n\t3. Reset User\n\t4. Delete User\n\t5. Back to User Menu\n";

// reads ints
void readOption(const char prompt[], int& num){
    cout << prompt << ">>"; 
    cin >> num;
    
    if (!cin){
	cin.clear();
	cin.ignore();
	cin >> num;
    }

    cin.ignore();
    cout << endl;
}

// TODO displays appropriate menu, handles branching.
void displayMenu(MENUS menu){
    int branchSelect;
    User user;
    
    // switch for menu to display
    switch (menu){
	case 1: cout << "\n\t-.-.-MAIN-.-.-\n\n";
		readOption(mainMenuContents, branchSelect);
		// switch for user selection
		switch (branchSelect){
		    case 1: user = logIn(); // regular login flag
			    break;
		    case 2: user = logIn(LOGIN_OPT::guest); // guest user flag
			    break;
		    case 3: user = logIn(LOGIN_OPT::sample); // sample user flag
			    break;
		    case 4: user = createUser();
			    break;
		    case 5: break;
		}
		cout << "Welcome, " << user.username << "!\n\n";
		displayMenu(MENUS::userMenu, user);
		break;
	case 2: cout << "\n\t-.-.-USER-.-.-\n\n";
		readOption(userMenuContents, branchSelect);
		switch (branchSelect){
		    case 1: displayMenu(MENUS::surveyStartMenu);
			    break;
		    case 2: cout << "veiw";
			    break;
		    case 3: cout << "sett";
			    break;
		    case 4: displayMenu(MENUS::mainMenu);
			    break;
		    case 5: break;
		
		};
		break;	
	case 4: cout << "\n\t.-.-SURVEY-.-.\n\n";
		readOption(surveyStartMenuContents, branchSelect);
		switch (branchSelect){
		    case 1: //loadSurvey(SURVEYS::phys);
			    break;
		    case 2: //loadSurvey(SURVEYS::psych);
			    break;
		    case 3: //loadSurvey(SURVEYS::soc);
			    break;
		    case 4: //loadSurvey(SURVEYS::gen);
			    break;
		    case 5: displayMenu(MENUS::userMenu);
			    break;
		}
		break;
    }
}

void displayMenu(MENUS menu, User user){
    int branchSelect;
    
    // switch for menu to display
    switch (menu){
	case 1: cout << "\n\t-.-.-MAIN-.-.-\n\n";
		readOption(mainMenuContents, branchSelect);
		// switch for user selection
		switch (branchSelect){
		    case 1: user = logIn(); // regular login flag
			    break;
		    case 2: user = logIn(LOGIN_OPT::guest); // guest user flag
			    break;
		    case 3: user = logIn(LOGIN_OPT::sample); // sample user flag
			    break;
		    case 4: user = createUser();
			    break;
		    case 5: break;
		}
		cout << "Welcome, " << user.username << "!\n\n";
		displayMenu(MENUS::userMenu, user);
		break;
	case 2: cout << "\n\t-.-.-USER-.-.-\n\n";
		readOption(userMenuContents, branchSelect);
		switch (branchSelect){
		    case 1: displayMenu(MENUS::surveyStartMenu);
			    break;
		    case 2: cout << "veiw";
			    break;
		    case 3: cout << "sett";
			    break;
		    case 4: displayMenu(MENUS::mainMenu);
			    break;
		    case 5: break;
		
		};
		break;	
	case 4: cout << "\n\t.-.-SURVEY-.-.\n\n";
		readOption(surveyStartMenuContents, branchSelect);
		switch (branchSelect){
		    case 1: //loadSurvey(SURVEYS::phys);
			    break;
		    case 2: //loadSurvey(SURVEYS::psych);
			    break;
		    case 3: //loadSurvey(SURVEYS::soc);
			    break;
		    case 4: //loadSurvey(SURVEYS::gen);
			    break;
		    case 5: displayMenu(MENUS::userMenu);
			    break;
		}
		break;
    }
}

// start/end program banner
void banner(){
    for (int i = 0; i < 80; ++i){
	cout << "*";
    }

    cout << endl;
}

// pause for UX
void pause(){
	cin.get();
}

// if time add a cute splash screen that clears the screen and gives a bit of info 
// about the program. Namely explain navigation and that all inputs besides login should be
// number
// void splashScreen();


//void encrypt();


//void decrypt();
