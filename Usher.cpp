#include <string>
#include "Employee.h"
#include "Theatre.h"
#include "Customer.h"

Usher::Usher(std::string empName, int empAge) :
	Employee(empName, empAge, "usher")
{}

bool Usher::checkTicket()
{

}

Usher::~Usher(){}