#ifndef CASHIER_H
#define CASHIER_H

#include <string>
#include <vector>
#include "Employee.h"
#include "Theatre.h"
#include "Movie.h"

class Cashier : public Employee
{
public:
	//creates Cashier employee with name and age
	Cashier(std::string empName, int empAge);

	//check genre, theatre size,
	//limit number to size of the seat array[]
	int assignTicket();

	//deconstructor
	~Cashier();

private:

	vector <string> theatreSeats;
};
#endif //CASHIER_H