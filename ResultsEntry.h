#ifndef RESULTS_ENTRY_H
#define RESULTS_ENTRY_H

struct ResultsEntry{
	double socScore;
	double physScore;
	double psychScore;
	double genScore;
	double avgTotalEntry;
	char dateRecorded[10];
};

enum COLUMNS{
	soc = 1,
	phys = 2,
	psych = 4,
	genScore = 8,
	avg = 16,
	date = 32
};

// insertes resultsEntry into results
void insertEntry(Results& results, ResultsEntry entry);


// prints individual entry formatted
void printEntry(ResultsEntry entry);


// Adds score to resultsEntry based on column
void addToEntry(ResultsEntry& entry, int newScore, int column);


// resets all scores in entry, keep date recorded
void resetEntry(ResultsEntry& entry);

#endif
