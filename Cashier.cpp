#include <iostream>
#include <vector>
#include "Employee.h"
#include "Theatre.h"
#include "Movie.h"

Cashier::Cashier(std::string empName, int empAge) :
	Employee(empName, empAge, "cashier")
{}

int Cashier::assignTicket()
{
	if (premium==false)
	{
		int row = 14;
		int clmn = 20;

		theatreSeats[row][clmn];

		for (int i=row-1; i<)
	}

	else
	{
		int row = 7;
		int clmn = 10;

		theatreSeats[row][clmn];
	}
}

Cashier::~Cashier(){}