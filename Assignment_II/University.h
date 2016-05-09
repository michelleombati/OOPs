#ifndef UNIVERSITY_H
#define UNIVERSITY_H

class University {

Student *stud;
std::string name;

public:
//Default Constructor
University(std::string name, Student *stud): name(name), stud(stud) {}

//Alt Constructor
University(Student *stud=NULL): name("Strathmore University"), stud(stud) {}

//Delegating constructors aren't allowed in other versions apart from C++ 11 therefore, I had to change the format of the alt constructor to match the initializer list for the default constructor

std::string getAllStudents(){return stud->getName();}
std::string getUniversityName(){return name;}

};

#endif
