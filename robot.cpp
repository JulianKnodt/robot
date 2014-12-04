#include <WPILib.h>
#include "humanController.h"
#include "Command.h"
#include "DriveTrain.h"
class robot: public IterativeRobot
{
	private:
		DriveTrain drivetrain;
		HumanController humanController;
		CommandSys commandSys;
	
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
	drivetrain(),
	humanController(),
	command(&drivetrain, &humanController) 
{

}

void robot::RobotInit() {
}

void robot::AutonomousInit() {
}

void robot::AutonomousPeriodic() {
}

void robot::AutonomousDisabled() {
}

void robot::DisabledInit() {
}

void robot::DisabledPeriodic() {
}

void robot::TeleopInit() {
}

void robot::TeleopPeriodic() {
	cout << "This program is working" << endl;
	humanController.update();
	commandSys.transferAll();
	drivetrain.update();
}

void robot::TeleopDisabled() {

}

void robot::TestInit() {
}

void EricBot::TestPeriodic() {
}

START_ROBOT_CLASS(EricBot);
