#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person
{
public:
	Person(std::string pName, int pAge, std::string pJob);

	//prints name, age and relevant details specific to type of person
	virtual void printDetails() = 0;
	
	void setName(std::string pName);
	std::string getName();
	
	void setAge(int pAge);
	int getAge();

	void setJob(std::string pJob);
	std::string getJob(); 

	//deconstructor
	~Person();

protected:
	std::string name;
	int age;
	std::string job;
};
#endif //PERSON_H