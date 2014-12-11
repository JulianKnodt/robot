#ifndef HUMANCONTROLLER_H
#define HUMANCONTROLLER_H
#include "WPILib.h"
#include "Drivetrain.h"
class HumanController{
    private:
      double horizontalValue;
      double verticalValue;
      Joystick X;
      Joystick Y;
      Drivetrain *drivetrain;
    public:
      HumanController();
      double getHorizontalValue();
      double getVerticalValue();
      void update();
    };
#endif
