#pragma once

//maakt string bruikbaar
#include <string>
class Student
{
public:
	//Student = constructor | ~Student = destructor
	//schroevendraaier en dan ééna laatste optie om definitie van 'Students' te creëren
	Student(std::string aName);
	~Student();

	void SetName(std::string aName);
	std::string GetName();

private:
	std::string name;

protected:
};

