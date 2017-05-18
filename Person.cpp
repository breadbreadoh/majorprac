#include <iostream>
#include "Person.h"

Person::Person(std::string pName, int pAge, std::string pJob) :
	name(pName),
	age(pAge),
	job(pJob)
{}

void Person::printDetails(){}
	
void Person::setName(string pName)
{
	if (pName!=NULL)
	{
		name = pName;
	}
}

string Person::getName()
{
	return name;
}
	
void Person::setAge(int pAge)
{
	if (pAge>0)
	{
		age = pAge;
	}
}

int getAge()
{
	return age;
}

void Person::setJob(std::string pJob)
{
	if (pJob!=NULL)
	{
		job = pJob;
	}
}

std::string getJob()
{
	return job;
}
