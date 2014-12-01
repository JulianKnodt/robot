#ifndef DRIVETRAIN_H
#ifndef DRIVETRAIN_H
#include <WPILib.h>
#include <stdlib.h>
#include <iostream>

class drivetrain{
  private:
    Victor leftFrontVic;
    Victor leftBackVic;
    Victor rightFrontVic;
    Victor rightBackVic;
  
  public:
    drivetrain():
    void init();
    void disable();
    void setSpeed();
    void stop();
    void update();
}
#endif
