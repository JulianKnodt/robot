#include HumanController.h
HumanController::HumanController():
X((uint32_t)2),
Y((uint32_t)1)
{
horizontalValue = 0;
verticalValue = 0;

}
double HumanController::getHorizontalValue()
{
  horizontalValue = X.getX();
  return horizontalValue;
}
double HumanController::getVerticalValue()
{
	verticalValue = Y.GetY();
	return verticalValue;
}

void HumanController::update()
{
	getVerticalValue();
	getHorizontalValue();
}
