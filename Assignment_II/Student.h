#ifndef STUDENT_H
#define STUDENT_H

class Student {

std::string name;
std::string id;

public:

Student(std::string name, std::string id): name(name), id(id){}
std::string getName(){return name;}
std::string getId(){return id;}

};

#endif
