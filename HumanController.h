#ifndef HUMANCONTROLLER_H
#define HUMANCONTROLLER_H
#include "WPILib.h"
class HumanController{
    private:
      double horizontalValue;
      double verticalValue;
      Joystick X;
      Joystick Y;
      Robot *robot;
    public:
      HumanController();
      double getHorizontal();
      double getVertical();
      void update();
    };
#endif
