#include "main.cpp"

inline pros::Controller controller(pros::E_CONTROLLER_MASTER)

//Drivetrain
    //Left Side 
inline pros::Motor lF(22, pros::E_MOTOR_GEAR_BLUE);
inline pros::Motor lM(23, pros::E_MOTOR_GEAR_BLUE);
inline pros::Motor lB(24, pros::E_MOTOR_GEAR_BLUE);

    //Right Side
inline pros::Motor rF(25, pros::E_MOTOR_GEAR_BLUE);
inline pros::Motor rM(26, pros::E_MOTOR_GEAR_BLUE);
inline pros::Motor rB(27, pros::E_MOTOR_GEAR_BLUE); 

//Motor Groups
inline pros::MotorGroup left_motors({lF, lM, lB});
inline pros::MotorGroup right_motors({rF, rM, rB});




