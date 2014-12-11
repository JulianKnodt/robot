#include "Drivetrain.h"
#include "Constants.h"

Drivetrain::Drivetrain():
	leftFrontVic((uint32_t) PORT_DRIVE_VIC_LEFT_FRONT),
	leftBackVic((uint32_t) PORT_DRIVE_VIC_LEFT_BACK),
	rightFrontVic((uint32_t) PORT_DRIVE_VIC_RIGHT_FRONT),
	rightBackVic((uint32_t) PORT_DRIVE_VIC_RIGHT_BACK)
	{
	 speedSet(0);
	 rotate(0);
	}
void Drivetrain::update(){
	leftFrontVic.Set(-currentSpeed - currentRotate);
	leftBackVic.Set(-currentSpeed - currentRotate);
	rightFrontVic.Set(currentSpeed - currentRotate);
	rightBackVic.Set(currentSpeed - currentRotate);
	}
void Drivetrain::speedSet(double speed){
	currentSpeed = speed;
	}
void Drivetrain::rotate(double angle){
	currentRotate = angle;
}
void Drivetrain::stop(){
	speedSet(0);
	rotate(0);
}
