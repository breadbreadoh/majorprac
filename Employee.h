#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include "Person.h"

class Employee : public Person
{
public:
	//creates employee with name, age and job
	Employee(std::string empName, int empAge, std::string empJob);

	//returns employee ID
	int getID();

	//change wage
	void setWage(int empWage);

	//change shift hours
	void setHours(int empHours);

	//returns employee ID
	int getWage();

	//returns employee ID
	int getHours();

	//salary earned by employee after working shift hours
	int calcTotalPay();

	//print name, age, ID number, job
	void printDetails();

	//deconstructor
	~Employee();

private:
	static bool onBreak;
	static int ID;
	int shiftHours;
	int wage;
};
#endif //EMPLOYEE_H