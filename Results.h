#ifndef RESULTS_H
#define RESULTS_H

// data structure
struct Results{
	ResultsEntry data[];
	int size;
	char user[25];
	char dateStarted[10];
	int streak;
	ResultsEntry avgOverStreak;
};

// print range based off index, defaults to print whole results
void printEntriesRange(Results results, int rangeStart = 0, 
	rangeEnd = null, bool showStats = false); 


// removes a range of entries and shifts results to match
void removeEntriesRange(Results& results, int rangeStart, 
	int rangeEnd);


// parses operator to filter results based off column values
Results filterEntries(Results results, int column, 
	char operation, int value);


// writes current results to user's data file
void writeResults(Results results, ifstream& outFile);


// reads through user's data file to load data into results array
void loadResults(Results& results, ifstream& infile);


//void analyzeResults();
//// looks for data trends

#endif
