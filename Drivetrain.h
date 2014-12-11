
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
    double currentSpeed;
    double currentRotate;
  
  public:
    Drivetrain();
    void init();
    void rotate(double angle);
    void speedSet(double speed);
    void stop();
    void update();
};
#endif
