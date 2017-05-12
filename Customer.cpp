#include "Customer.h"
#include <iostream>
#include <string>

using namespace std;

int Customer::uniqueID = 0;

Customer::Customer(int age, double wallet, string favGenre){
	this->age = randint;
	this->wallet = wallet;
	this->price = 0;
}

void Customer::setMember(){
	this->member = true;
}

void setPaid(){
	this->paid = true;
}

double getWallet(){
	return this->wallet;
}

bool pay(){
	if(getWallet() > getPrice()){
		setPaid();
		return true;
	}	
	return false;
}

double getPrice(){
	return this->price;
}

void setPrice(){
	if(age < 12){
		price +=
	}

	switch(age){
		case 
	}
}