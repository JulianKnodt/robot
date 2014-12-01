#include "drivetrain.h"
drivetrain::drivetrain():
	leftFrontVic((uint32_t) PORT_DRIVE_VIC_LEFT_FRONT),
	leftBackVic((uint32_t) PORT_DRIVE_VIC_LEFT_BACK),
	rightFrontVic((uint32_t) PORT_DRIVE_VIC_RIGHT_FRONT),
	rightBackVic((uint32_t) PORT_DRIVE_VIC_RIGHT_BACK)
	{
	 setSpeed(0);
	 setRotate(0);
	}
void drivetrain::update(){
	leftFrontVic.set(-currentSpeed - currentRotate);
	leftBackVic.set(-currentSpeed - currentRotate);
	rightFrontVic.set(currentSpeed - currentRotate);
	rightBackVic.set(currentSpeed-currentRotate);
	}
void drivetrain::setSpeed(double speed){
	currentSpeed = speed;
	}
void drivetrain::rotate(double angle){
	currentRotate = rotate;
}
void drivetrain::stop(){
	setSpeed(0);
	setRotate(0);
}
