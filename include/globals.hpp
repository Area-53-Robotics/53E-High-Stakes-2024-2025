#include "api.h"
#include "main.h"
#include "lemlib/api.hpp"

inline pros::Controller controller(pros::E_CONTROLLER_MASTER);

//Drivetrain
//Motor Groups
inline pros::MotorGroup left_motors({-20, -15, -11}, pros::v5::MotorGears::blue);
inline pros::MotorGroup right_motors({10, 5, 1}, pros::v5::MotorGears::blue);

//Intake
inline pros::Motor intake_motor (6);

//Tipper  
inline pros::adi::Pneumatics tipper_piston('A', false); 

//Limit Switches For Four Bar
//inline pros::adi::DigitalIn four_bar_sensor_forwards ('B');
//inline pros::adi::DigitalIn four_bar_sensor_backwards ('D');

//Four Bar Descore 
inline pros::Motor four_bar_motor(18);


inline lemlib::Drivetrain drivetrain(&left_motors, // left motor group
                              &right_motors, // right motor group
                              14.5, // 14.5 inch track width
                              lemlib::Omniwheel::NEW_4.25, // using new 4" omnis
                              450, // drivetrain rpm is 360
                              2 // horizontal drift is 2 (for now)
                              );
	
// odometry settings
inline lemlib::OdomSensors sensors(nullptr, // vertical tracking wheel 1, set to null
                            nullptr, // vertical tracking wheel 2, set to nullptr as we are using IMEs
                            nullptr, // horizontal tracking wheel 1
                            nullptr, // horizontal tracking wheel 2, set to nullptr as we don't have a second one
                            &imu // inertial sensor
                            );

inline lemlib::Chassis chassis(drivetrain,
                        lateral_controller,
                        angular_controller,
                        sensors,
                        nullptr,
                        nullptr
                        );


// lateral PID controller
inline lemlib::ControllerSettings lateral_controller(10, // proportional gain (kP)
                                              0, // integral gain (kI)
                                              3, // derivative gain (kD)
                                              3, // anti windup
                                              1, // small error range, in inches
                                              100, // small error range timeout, in milliseconds
                                              3, // large error range, in inches
                                              500, // large error range timeout, in milliseconds
                                              20 // maximum acceleration (slew)
                                              );

// angular PID controller
inline lemlib::ControllerSettings angular_controller(2, // proportional gain (kP)
                                              0, // integral gain (kI)
                                              10, // derivative gain (kD)
                                              3, // anti windup
                                              1, // small error range, in degrees
                                              100, // small error range timeout, in milliseconds
                                              3, // large error range, in degrees
                                              500, // large error range timeout, in milliseconds
                                              0 // maximum acceleration (slew)
                                              );

