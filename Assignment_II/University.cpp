#include <iostream>
#include <string>
#include "Student.h"
#include "University.h"

using namespace std;

int main(){

Student *stud= new Student("Mr. Smart Student", "00001");
cout<< "Student name: " << stud->getName()
<< "has Student ID: " <<stud->getId() <<endl;

{ 
	University uni (stud);
	uni.getAllStudents();
}

cout<<stud->getName()<<" ID: "<<stud->getId()
<<" will be out of school soon"<<endl;

return 0;

}
