// MyPOCofStudents.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "Student.h"
#include "Person.h"

int main()
{
    //std::cout << "Hello World!\n";
    std::vector<int> myIntVector;

    Person p("Jesse", "Wissink", "27-05-1987");
    Person f("Pap", "Wissink", "27-05-1910");

    p.SetFather(f);

    std::cout << p.GetFather()->GetName() << std::endl;

#pragma region Students
    /*
    std::vector<Student> students;

    Student studentJesse("Jesse");
    Student studentHenk("Henk");
    Student studentBert("Bert");

    students.push_back(studentJesse);
    students.push_back(studentHenk);
    students.push_back(studentBert);

    for (int i = 0; i < students.size(); i++) {
        std::cout << students.at(i).GetName() << std::endl;
    }
    for (Student student : students) {
        std::cout << student.GetName() << std::endl;
    }
    */
    /*
    myIntVector.push_back(1);
    myIntVector.push_back(10);
    myIntVector.push_back(100);
    myIntVector.push_back(5000);
    myIntVector.push_back(60000);

    for (int i = 0; i < myIntVector.size(); i++) {
        std::cout << myIntVector.at(i) << std::endl;
    }
    for (int anInt : myIntVector) {
        std::cout << anInt << std::endl;
    }
    */
    
    

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
