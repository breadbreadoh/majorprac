#include "Employee.h"
#include "Cleaner.h"
#include "Movie.h"
#include "Theatre.h"
#ifndef PROJECTIONIST_H
#define PROJECTIONIST_H

#include <string>
using namespace std;

class Projectionist : public Person{
private:
	//schedule of movies that will be run
	Movie schedule[];
public:
	Projectionist();

	//include theatre.setRunning()
	void startFilm();

	void stopFilm();

	Movie *getSchedule();

	~Projectionist();
};

#endif;