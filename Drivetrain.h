
#ifndef DRIVETRAIN_H
#include <WPILib.h>
#include <stdlib.h>
#include <iostream>

class Drivetrain{
  private:
    Victor leftFrontVic;
    Victor leftBackVic;
    Victor rightFrontVic;
    Victor rightBackVic;
  
  public:
    Drivetrain();
    void init();
    void rotate(double angle);
    void setSpeed(double speed);
    void stop();
    void update();
};
#endif
