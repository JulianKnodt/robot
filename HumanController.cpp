#include "HumanController.h"
#include "Constants.h"
HumanController::HumanController():
X((uint32_t)2),
Y((uint32_t)1),
drivetrain()
{
horizontalValue = 0;
verticalValue = 0;

}
double HumanController::getHorizontalValue() {
  horizontalValue = X.GetX();
  return horizontalValue;
}
double HumanController::getVerticalValue() {
	verticalValue = Y.GetY();
	return verticalValue;
}

void HumanController::update() {
	drivetrain->speedSet(getVerticalValue());
	drivetrain->rotate(getHorizontalValue());
}
