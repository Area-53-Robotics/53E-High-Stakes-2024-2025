#include <cstdio>


#include "main.cpp"
#include "main.h"
#include "pros/rtos.hpp"

void autonomous() {}
    //printf("offensive side\n"); FIGURE OUT WHAT SIDE THIS IS

/*
    chassis.setPose(122, -91, 500);
    chassis.waitUntilDone();
    tipper_piston.extend(500); //extend piston
    pros::delay(100);
    chassis.waitUntilDone();
    chassis.moveToPoint(150, 0, 1500, {.forwards = false}); //move backwards to goal
    chassis.waitUntilDone();
    tipper_piston.retract(500); //clasp the goal
    chassis.waitUntilDone();
    chassis.turnToPoint(147, -2, 800); //turn to donut above
    chassis.waitUntilDone();
    chassis.intake_motor.set_value(127); //turn on motor
    chassis.moveToPoint(147, -2, 1500); //move to donut above and intake it
    pros::delay(800);
    chassis.waitUntilDone();
    chassis.turnToPoint(61, -123, 800); //turn to donut on the bottom
    chassis.waitUntilDone();
    chassis.moveToPoint(61, -123, 1500); //move to the donut on the bottom and intake it
    pros::delay(800);
    chassis.waitUntilDone();
    chassis.turnToPoint(26, -51, 800); //turn upwards to bar
    chassis.waitUntilDone();
    chassis.moveToPoint(26, -51, 1500); //move to bar and touch it
    chassis.waitUntilDone();
*/
    
    
/**
 * Runs the operator control code. This function will be started in its own task
 * with the default priority and stack size whenever the robot is enabled via
 * the Field Management System or the VEX Competition Switch in the operator
 * control mode.
 *
 * If no competition control is connected, this function will run immediately
 * following initialize().
 *
 * If the robot is disabled or communications is lost, the
 * operator control task will be stopped. Re-enabling the robot will restart the
 * task, not resume it from where it left off.
 */