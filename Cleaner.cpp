#include <iostream>
#include "Employee.h"
#include "Theatre.h"

//creates cleaner employee with name and age
Cleaner::Cleaner(std::string cleanName, int cleanAge) :
	Employee(empName, empAge, "cleaner")
{}

//only cleans when theatre is empty
void Cleaner::clean()
{
	if (running==false)
	{
		theatre.setCleanliness(-2);
	}
}

//deconstructor
Cleaner::~Cleaner(){}