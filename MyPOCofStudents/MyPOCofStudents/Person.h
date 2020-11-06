#pragma once

#include <string>
#include <vector>
class Person
{
public:
	Person(std::string aName, std::string aSurName, std::string aDateOfBirth);
	~Person();

	void SetPersonalData(std::string aName, std::string aSurName, std::string aDateOfBirth);

	std::string GetName();
	std::string GetSurName();
	std::string GetDateOfBirth();
	std::string GetGender();

	void SetName(std::string aName);
	void SetSurName(std::string aSurName);
	void SetDateOfBirth(std::string aDoB);
	void SetGender(std::string aGender);

	Person* GetFather();

	void SetFather(Person& aFather);

private:
	std::string name;
	std::string surName;
	std::string dateOfBirth;
	std::string gender;
	int age;

	Person* father;
	//Person* mother;
	//std::vector<Person*> siblings;
	
protected:

};

