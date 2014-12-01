#ifndef HUMANCONTROLLER_H
#define HUMANCONTROLLER_H
#include "WPILib.h"
class humanController{
    private:
      double horizontalValue;
      double verticalValue;
      Joystick X;
      Joystick Y;
    public:
      Human Controller();
      double getHorizontal();
      double getVertical();
      void update();
    };
#endif
