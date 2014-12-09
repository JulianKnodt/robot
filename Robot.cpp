#include <WPILib.h>
#include "humanController.h"
#include "Command.h"
#include "DriveTrain.h"
class robot: public IterativeRobot
{
	private:
		Drivetrain drivetrain;
		HumanController humanController;
		Command command;
	
	public:
		robot();
		void RobotInit();
		void AutonomousInit();
		void AutonomousPeriodic();
		void AutonomousDisabled();
		void DisabledInit();
		void DisabledPeriodic();
		void TeleopInit();
		void TeleopPeriodic();
		void TeleopDisabled();
		void TestInit();
		void TestPeriodic();
};
robot::robot():
	Drivetrain(),
	HumanController(),
	command(&drivetrain, &humanController) 
{

}

void Robot::RobotInit() {
}

void Robot::AutonomousInit() {
}

void Robot::AutonomousPeriodic() {
}

void Robot::AutonomousDisabled() {
}

void Robot::DisabledInit() {
}

void Robot::DisabledPeriodic() {
}

void Robot::TeleopInit() {
}

void Robot::TeleopPeriodic() {
	cout << "This program is working" << endl;
	humanController.update();
	Command.transferAll();
	drivetrain.update();
}

void Robot::TeleopDisabled() {

}

void Robot::TestInit() {
}

void Robot::TestPeriodic() {
}

START_ROBOT_CLASS(Robot);
