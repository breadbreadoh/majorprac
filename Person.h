#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person
{
public:
	//prints name, age and relevant details specific to type of person
	virtual void printDetails() = 0;
	
	std::void setName(string aName);
	std::string getName();
	
	void setAge(int aAge);
	int getAge();

protected:
	std::string name;
	int age;
};
#endif //PERSON_H