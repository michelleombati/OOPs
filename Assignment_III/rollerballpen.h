#ifndef ROLLERBALLPEN_H
#define ROLLERBALLPEN_H

class RollerBallPen : public Pen{

public:

RollerBallPen(std::string pen_name)

: Pen(pen_name) {}

RollerBallPen() : Pen(std::string("RollerBallPen")){}

virtual std::string drawLine() {

return getName().append(" draws a line.");

}

virtual std::string drawCircle(){

return getName().append(" draws a circle.");

}

};

#endif
