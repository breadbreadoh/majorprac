#ifndef USHER_H
#define USHER_H

#include <string>
#include "Employee.h"
#include "Theatre.h"
#include "Customer.h"

class Usher : public Employee
{
public:
	//creates Usher employee with name and age
	Usher(std::string empName, int empAge);

	//if customer paid true, add customer to array
	//else send to cashier
	bool checkTicket();

	//deconstructor
	~Usher();
	
private:
	int sat;
};
#endif //USHER_H