#ifndef FOUNTAINPEN_H
#define FOUNTAINPEN_H

#include <iostream>

#include <string>

//!TODO: remove the ’virtual’ keyword from the methods, compile,

// run and take note of the results.


class FountainPen : public Pen {

public: FountainPen(std::string pen_name = "FountainPen"): Pen(pen_name) {}

/*!TODO: what would happen if you used this version of
Constructor in the comment box below

COMPILER error - fuction cannot be overloaded
FountainPen(std::string pen_name) : Pen(pen_name) {}
FountainPen() : Pen(std::string("FountainPen")){}

*/

virtual std::string drawLine();

virtual std::string drawCircle();

};

std::string FountainPen::drawLine(){return getName().append(" draws a line.");}

std::string FountainPen::drawCircle(){return getName().append(" draws a circle.");}

#endif
