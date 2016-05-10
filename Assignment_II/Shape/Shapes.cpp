#include <iostream>
#include <string>
#include "Shape.h"
#include "Triangle.h"

using namespace std;

int main(){

Triangle tria;
float a, b;

cout<<"Input base:\n";
cin>>a;
cout<<"Input height:\n\n";
cin>>b;
tria.setArea(a,b);

cout<<"Area is:" <<tria.getArea()<<endl;
cout << tria.getName() << endl;

return 0;

}
