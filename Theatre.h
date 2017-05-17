#include "Movie.h"
#ifndef THEATRE_H
#define THEATRE_H

#include <string>
using namespace std;

class Theatre{
private:
	//movie that is set to be played
	Movie scheduledMovie;

	//no limit 
	int row;
	//no limit
	int clmn;
	
	int seat[][];

	//premium costs more
	bool premium;

	//true if running
	bool running;

	//5-clean 1-dirty
	int cleanliness;

public:
	//cleanliness will start at 5
	Theatre(int row, int clmn, bool premium);

	//sets running to true or false 
	void setRunning(bool isRunning);

	//return whether a movie is running or not
	bool getRunning();

	//reduce cleanliness rating to by 1
	void reduceClean();

	//increase cleanliness to full, 5
	void increaseClean();

	//returns clean level
	int getClean();

	~Theatre();
};

#endif
