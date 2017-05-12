#include <iostream>
#include "Person.h"

virtual void Person::printDetails(){}
	
void Person::setName(string aName)
{
	if (aName!=NULL)
	{
		name = aName;
	}
}

string Person::getName()
{
	return name;
}
	
void Person::setAge(int aAge)
{
	if (aAge>0)
	{
		age = aAge;
	}
}

int getAge()
{
	return age;
}