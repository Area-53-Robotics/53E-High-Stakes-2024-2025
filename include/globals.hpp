#include "api.h"
inline pros::Controller controller(pros::E_CONTROLLER_MASTER);

//Drivetrain
//Motor Groups
inline pros::MotorGroup left_motors({-20, -15, -11}, pros::v5::MotorGears::blue);
inline pros::MotorGroup right_motors({10, 5, 1}, pros::v5::MotorGears::blue);

//Tipper
pros::adi::Pneumatics tipper_piston('A', false); 

