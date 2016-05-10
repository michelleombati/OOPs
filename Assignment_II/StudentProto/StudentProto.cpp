#include <iostream>
#include <string>
#include "StudentProto.h"

int main() {

struct student stud;

// you have to press enter for every value

std::cout << "What is the student’s name & ID?: ";

std::cin >> stud.name >> stud.id;

std::cout << "Grades: assignments midterm fin: ";

std::cin >> stud.assig >> stud.midt >> stud.fin;

// Print out the results

std::cout <<"Name: " << stud.name << std::endl

<<"Student ID: " << stud.id << " Average Grade: "

<< (stud.midt + stud.fin + stud.assig)/3 << "%"

<< std::endl;

}
