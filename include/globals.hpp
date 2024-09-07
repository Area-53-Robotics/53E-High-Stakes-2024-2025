#include "api.h"
#include "main.h"

inline pros::Controller controller(pros::E_CONTROLLER_MASTER);

//Drivetrain
//Motor Groups
inline pros::MotorGroup left_motors({-20, -15, -11}, pros::v5::MotorGears::blue);
inline pros::MotorGroup right_motors({10, 5, 1}, pros::v5::MotorGears::blue);

//Intake
pros::Motor intake_motor ({2});

//Tipper  
pros::adi::Pneumatics tipper_piston('A', false); 

//Limit Switches For Four Bar
pros::adi::DigitalIn four_bar_sensor_forwards ('A');
pros::adi::DigitalIn four_bar_sensor_backwards ('C');

//Four Bar Descore 
pros::Motor four_bar_motor({19});
	