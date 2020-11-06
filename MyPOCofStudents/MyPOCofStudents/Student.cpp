#include "Student.h"
#include <iostream>
//#include <vector>

Student::Student(std::string aName)
{
	name = aName;
}

Student::~Student()
{
}


void Student::SetName(std::string aName) {
	if (aName.size() < 50) {
		name = aName;
	}
	else
	{
		std::cout << "Input is too long" << std::endl;
	}
}

std::string Student::GetName() {
	return name;
}