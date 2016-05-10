#ifndef TRIANGLE_H
#define TRAINGLE_H

class Triangle : public Shape{

protected:
float area;

public:

Triangle(std::string name = "Nice Triangle!") : Shape(name), area(area){}
void setArea(float a, float b){area=(a*b)/2;}
float getArea(){ return area;}

};

#endif
