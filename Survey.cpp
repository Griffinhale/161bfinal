#include 'Survey.h'

// loads questions array based off surveyType;
void loadSurvey(int surveyType, char questions[][1000]);


// wipes current score and starts back at beginning of survey
void restartSurvey(int& questionNum, int& score);


// add up answers array, score in score
void tabulateSurvey(int& questionNum, int& score);


// deletes current survey var and sends user back to main menu
void exitSurvey(Survey survey);

