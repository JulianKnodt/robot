#ifndef COMMAND_H
#define COMMAND_H
#include "WPILib.h"
#include "humanController.h"
#include "drivetrain.h"
class command
{
    private:
        drivetrain *trainPointer;
        HumanController *humanPointer;
	      typedef enum TransferType
	      {
			DRIVETRAIN,
			SHOOTER,
			ACCUMULATOR
	  	} transferType;
	  public:
	    void transfer(TransferType transferType);
	  CommandSys(DriveTrain *trainPointer, HumanController *humanPointer);
		CommandSys(Accumulator *accumulatorPointer, HumanController *humanPointer);
		CommandSys(Shooter *shooterPointer, HumanController *humanPointer);
};
