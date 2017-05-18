#ifndef CLEANER_H
#define CLEANER_H

#include <string>
#include "Employee.h"
#include "Theatre.h"

class Cleaner : public Employee
{
public:
	//creates cleaner employee with name and age
	Cleaner(std::string empName, int empAge);

	//only cleans when theatre is empty
	void clean();

	//deconstructor
	~Cleaner();

};
#endif //CLEANER_H