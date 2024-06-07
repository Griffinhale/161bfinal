#include <iostream>
#include <cstring>
#include 'Results.h'
#include 'ResultEntry.h'

// print range based off index, defaults to print whole results
void printEntriesRange(Results results, int rangeStart = 0, 
	rangeEnd = null, bool showStats = false){

    // Add a check to default rangeEnd to results.size if null
    // print each entry from rangeStart to rangeEnd    
    for (int i = rangeStart; i < rangeEnd; ++i){
	printEntry();
    }
} 


// removes a range of entries and shifts results to match
void removeEntriesRange(Results& results, int rangeStart, 
	int rangeEnd){

    int countToDelete = rangeStart;
    // while loop to delete a certain number of entries
    // do rangeEnd - rangeStart or pass in that value?
    while (countToDelete > 0){
	//for loop that shifts each element in the array left once,
	//overwriting and deleting that entry
	//decrease countToDelete by 1
    }
}


// parses operator to filter results based off column values
Results filterEntries(Results results, int column, 
	char operation, int value){
    
    Results filteredResults;
    // switch based off operation variable
    // build comparison expression with that and value
    // for loop through results, store in filteredResults if works
    return filteredResults;

}


// writes current results to user's data file
void writeResults(Results results, ifstream& outFile){

    // file will be opened already
    // write each property of user to top of list after encoding checkline
    // then csv of results.data
}


// reads through user's data file to load data into results array
void loadResults(User& user, Results& results, ifstream& infile){
    // file will be open already
    // file will be decoded at this function already
    // load first few properties into results until csv headers
    char username[25];
    int pin; // Maybe shouldn't be stored in the user struct at all?
    char dateCreated[10];
    char dateRefreshed[10];
    bool encrypted;
    // skip csv headers
    // read csv into results.data
}


