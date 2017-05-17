#include "Employee.h"
#include "Cleaner.h"
#include "Movie.h"
#include "Theatre.h"
#include <iostream>
#include <string>

using namespace std;

Projectionist::Projectionist() : Person(){
	int noMovies;
	cout << "Enter no of movies scheduled: " << endl;
	cin >> noMovies >> endl;
	Movie schedule = new Movie[noMovies];
}

void Projectionist::startFilm(){
	Theatre.setRunning(true);
	cout << "Theatre running" << endl;
}

void Projectionist::stopFilm(){
	Theatre.setRunning(false);
	cout << "Theatre stopped" << endl;
	cout << "Cleaner is now allowed to clean" << endl:

}

// Movie *Projectionist::getSchedule(){
// 	return *movie;
// } 
// idk how..

Projectionist::~Projectionist(){

}