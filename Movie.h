#ifndef MOVIE_H
#define MOVIE_H

#include <string>
using namespace std;

class Movie{
private:
	//name of movie
	string title;

	//genre associated with the movie
	string genre;

	//if released recently, more people will buy
	bool releasedRecently;

	//PG,M,R
	string classification;

public:
	Movie(string title, string genre, bool releasedRecently, string classification);

	//return genre
	string getGenre();
	
	//return true if released recently
	bool getReleasedRecently();
	
	//sets to false after 2 weeks
	void setReleasedRecently();

	//return classification
	bool getClassification();

	~Movie();
};

#endif