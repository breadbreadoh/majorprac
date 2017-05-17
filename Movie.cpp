#include "Movie.h"
#include <string>
#include <iostream>

using namespace std;

Movie::Movie(string title, string genre, bool releasedRecently, string classification){
	this->title = title;
	this->genre = genre;
	this->releasedRecently = releasedRecently;
	this->classification = classification;
}

string Movie::getGenre(){
	return this->genre;
}

bool Movie::getReleasedRecently(){
	return this->releasedRecently;
}

void Movie::setReleasedRecently(){
	this->releasedRecently = false;
}

bool Movie::getClassification(){
	return this->classification;
}

Movie::~Movie(){

}