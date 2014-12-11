#include <WPILib.h>
#include "humanController.h"
#include "Drivetrain.h"
class Robot: public IterativeRobot
{
	private:
		Drivetrain drivetrain;
		HumanController humanController;
	
	public:
		Robot();
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
Robot::Robot():
	drivetrain(),
	humanController()
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
	drivetrain.update();
}

void Robot::TeleopDisabled() {

}

void Robot::TestInit() {
}

void Robot::TestPeriodic() {
}

START_ROBOT_CLASS(Robot);
