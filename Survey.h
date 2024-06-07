#ifndef SURVEY_H
#define SURVEY_H

struct Survey{
	enum int surveyType; 
	char questions[20][1000];
	int answers[20];
	int score = 0;
	int questionNum = 0;
};

enum SURVEYS {
	PHYS = 1,
	SOC = 2,
	PSYCH = 4,
	GEN = 8
};

// loads questions array based off surveyType;
void loadSurvey(int surveyType, char questions[][1000]);


// wipes current score and starts back at beginning of survey
void restartSurvey(int& questionNum, int& score);


// add up answers array, score in score
void tabulateSurvey(int& questionNum, int& score);


// deletes current survey var and sends user back to main menu
void exitSurvey(Survey survey);

#endif
