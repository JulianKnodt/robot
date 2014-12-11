#include "Drivetrain.h"
Drivetrain::Drivetrain():
	leftFrontVic((uint32_t) PORT_DRIVE_VIC_LEFT_FRONT),
	leftBackVic((uint32_t) PORT_DRIVE_VIC_LEFT_BACK),
	rightFrontVic((uint32_t) PORT_DRIVE_VIC_RIGHT_FRONT),
	rightBackVic((uint32_t) PORT_DRIVE_VIC_RIGHT_BACK)
	{
	 setSpeed(0);
	 setRotate(0);
	}
void Drivetrain::update(){
	leftFrontVic.set(-currentSpeed - currentRotate);
	leftBackVic.set(-currentSpeed - currentRotate);
	rightFrontVic.set(currentSpeed - currentRotate);
	rightBackVic.set(currentSpeed - currentRotate);
	}
void Drivetrain::speedSet(double speed){
	currentSpeed = speed;
	}
void Drivetrain::rotate(double angle){
	currentRotate = rotate;
}
void Drivetrain::stop(){
	setSpeed(0);
	setRotate(0);
}
