#include <iostream>
#include "Person.h"
#include "Employee.h"

int Employee::ID = 0;
bool Employee::onBreak = false;

Employee::Employee(std::string empName, int empAge, std::string empJob) :
	Person(empName, empAge, empJob)
{
	ID++;

	//hourly wage depends on age and occupation of employee
	if (age<18)
	{
			if (job=="cashier" || job=="usher")
			{
				wage = 16;
			}

			else if (job=="cleaner")
			{
				wage = 12;
			}

			else if (job=="projectionist")
			{
				wage = 18;
			}
	}

	else if (age>18)
	{
			if (job=="cashier" || job=="usher")
			{
				wage = 18;
			}

			else if (job=="cleaner")
			{
				wage = 14;
			}

			else if (job=="projectionist")
			{
				wage = 20;
			}
	}
}

int Employee::getID()
{
	return ID;
}


void Employee::setWage(int empWage)
{
	if (empWage>=0)
	{
		wage = empWage;
	}
}

void Employee::setHours(int empHours)
{
	if (empHours>=0)
	{
		shiftHours = empHours;
	}
}

int Employee::getWage()
{
	return wage;
}

int Employee::getHours()
{
	return shiftHours;
}

int Employee::calcTotalPay()
{
	return (wage*shiftHours);
}

void Employee::printDetails()
{
	cout << getName() << endl;
	cout << getAge() << endl;
	cout << getID() << endl;
	cout << getJob() << endl;
	cout << getWage() << endl;
	cout << getHours() << endl;
	cout << this->calcTotalPay() << endl;
}

Employee::~Employee(){}
