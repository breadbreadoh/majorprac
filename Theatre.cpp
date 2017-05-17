#include "Theatre.h"
#include <string>
#include <iostream>

using namespace std;

Theatre::Theatre(int row, int clmn, bool premium){
	this->premium = premium;
	this->row = row;
	this->clmn = clmn;
	this->running = false;
	this->clealiness = 5;
	// this->movieTBP = Projectionist.getSchedule();
	// IDK HOW..
}

void Theatre::setRunning(bool isRunning){
	this->running = isRunning;
}

bool Theatre::getRunning(){
	return this->running;
}

void Theatre::reduceClean(){
	if(this->cleanliness > 1){
		this->cleanliness--;
	}
}

void Theatre::increaseClean(){
	if(this->cleanliness <= 5){
		this->cleanliness = 5;
	}
}

int Theatre::getClean(){
	return this->cleanliness;
}

Theatre::~Theatre(){
	
}