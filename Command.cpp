#include "Command.h"
#include "WPILib.h"
Command::Command(DriveTrain *trainPointer, HumanController *humanPointer){
  this->trainPointer = trainPointer;
  this->humanPointer = humanPointer;
}
void Command::transfer(){
  switch(transferType){
  case DRIVETRAIN:
    double xVal = humanPointer->getHorizontalValue();
		double yVal = humanPointer->getVerticalValue();
		trainPointer->setSpeed(yVal, xVal);
  break;
  case ACCUMULATOR:
  
  break;
  case SHOOTER:
  
  break;
    }
}
