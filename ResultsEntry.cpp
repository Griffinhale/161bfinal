#include 'ResultsEntry.h'

// inserts resultsEntry into results
void insertEntry(Results& results, ResultsEntry entry){
    // add check for if getting close to limit for data
    // if close check userSettings about data wiping
    // if not valid show message saying database getting full!
    // with call to action
    
    // add check for empty entries so they can get tossed
    
    // simple append
}


// prints individual entry formatted
void printEntry(ResultsEntry entry){
    // print each property of the ResultsEntry with proper formatting
}


// Adds score to resultsEntry based on column
void addToEntry(ResultsEntry& entry, int newScore, int column){
    // assigns newScore to property off entry based on column flag
}


// resets all scores in entry, keep date recorded
void resetEntry(ResultsEntry& entry){
    // resets all scores in entry so it can get tossed in normal
    // insert process
}

