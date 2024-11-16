#include <cstdio>
#include "lemlib/api.hpp"
#include "main.h"
#include "pros/rtos.hpp"
#include "globals.hpp"

void move_drivetrain(int power, int timeout) {
    left_motors.move(power);
    right_motors.move(power);
    pros::delay(timeout);
    left_motors.brake();
    right_motors.brake();
}

void turn_drivetrain(int power, int timeout) {
    left_motors.move(-power);
    right_motors.move(power);
    pros::delay(timeout);
    left_motors.brake();
    right_motors.brake();
}

void autonomous() {
 //printf("offensive side\n"); FIGURE OUT WHAT SIDE THIS IS
//Left Corner Auton
    pros::delay(500);
    move_drivetrain(-100, 400);
    pros::delay(500);
    tipper_piston.toggle();
    pros::delay(1000);
    intake_motor.move(127);
    pros::delay(2000);
    intake_motor.move(0);
    turn_drivetrain(-100, 300);
    intake_motor.move(127);
    move_drivetrain(100, 300);
    pros::delay(1500);
    turn_drivetrain(100, 350);
    move_drivetrain(100, 500);

//Testing Auton
/*
    move_drivetrain(100, 426);
    pros::delay(1500);
    tipper_piston.toggle();
    pros::delay(1000);
    intake_motor.move(127);
    pros::delay(2000);
    turn_drivetrain(70, 300);
    pros::delay(1000);
    move_drivetrain(-80, 400);
    pros::delay(1000);
    intake_motor.move(127);
    pros::delay(2000);
    chassis.setPose(122, -91, 0);
    tipper_piston.toggle(); //extend piston
    pros::delay(100);
    chassis.waitUntilDone();


    chassis.moveToPoint(150, 0, 1500, {.forwards = false}); //move backwards to goal
    chassis.waitUntilDone();
    tipper_piston.toggle(); //clasp the goal
    chassis.waitUntilDone();
    chassis.turnToPoint(147, -2, 800); //turn to donut above
    chassis.waitUntilDone();
    intake_motor.move(127); //turn on motor
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
    chassis.moveToPoint(26, -51, 1500); //move to  bar and touch it
    chassis.waitUntilDone();
*/

/*
//Skills Auton
    //lady_brown_motor.set_state();
    chassis.turnToPoint(15, 10, 1000);
    chassis.waitUntilDone();
    tipper_piston.toggle();
    chassis.moveToPoint(-20, -8, 1500, {.forwards = false});
    chassis.waitUntilDone();
    tipper_piston.toggle();
    chassis.turnToPoint(-20, -40, 1000);
*/
}
