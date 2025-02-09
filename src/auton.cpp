#include <cstdio>
#include "lemlib/api.hpp"
#include "main.h"
#include "pros/rtos.hpp"
#include "globals.hpp"
#include "subsystems_cpp_files/lady_brown.hpp"

void autonomous() {
    /*
    //Skills Auton
    intake_motor.move(127);
    pros::delay(135);
    intake_motor.move(0);
    pros::delay(500);
    chassis.moveToPoint(0, 14, 1700);
    chassis.waitUntilDone();
    chassis.turnToHeading(-85, 2000);
    chassis.waitUntilDone();
    chassis.moveToPoint(16, 11.5, 2000, {.forwards=false, .maxSpeed = 40});
    chassis.waitUntilDone();
    tipper_piston.toggle();
    chassis.waitUntilDone();
    chassis.moveToPoint(28.642, 12, 1500, {.forwards=false});
    chassis.turnToHeading(0, 1500);
    chassis.waitUntilDone();
    intake_motor.move(127);
    chassis.moveToPoint(28, 31, 2500);
    chassis.waitUntilDone();
    chassis.moveToPoint(28, 42, 1200);
    chassis.waitUntilDone();
    chassis.turnToHeading(54.8, 1500);
    chassis.waitUntilDone();
    chassis.moveToPoint(67, 70, 2000);
    chassis.waitUntilDone();
    chassis.turnToHeading(195, 1500); //turn to first ring in three row
    chassis.waitUntilDone();
    chassis.moveToPoint(62, 44, 1000);
    chassis.waitUntilDone();
    chassis.turnToHeading(176, 1500);
    chassis.moveToPoint(62.5, 4, 4500, {.maxSpeed=50});
    chassis.waitUntilDone();
    chassis.turnToHeading(-309.27, 1500);
    chassis.waitUntilDone();
    chassis.moveToPoint(72.29, 11,2500);
    chassis.waitUntilDone();
    chassis.turnToHeading(295, 2000);
    chassis.waitUntilDone();
    chassis.moveToPoint(65, -6, 4000, {.forwards=false});
    chassis.waitUntilDone();
    tipper_piston.toggle();
    pros::delay(1000);
    chassis.waitUntilDone();
    chassis.moveToPoint(0, 15, 4000);
    chassis.waitUntilDone();
    chassis.turnToHeading(92, 2000);
    chassis.waitUntilDone();
    chassis.moveToPoint(-21, 16, 2000, {.forwards=false, .maxSpeed = 40});
    chassis.waitUntilDone();
    tipper_piston.toggle();
    pros::delay(500);
    chassis.waitUntilDone();
    chassis.turnToHeading(0, 1000);
    chassis.waitUntilDone();
    chassis.moveToPoint(-31, 43, 3000);
    chassis.waitUntilDone();
    chassis.turnToHeading(39.7, 1000); 
    chassis.waitUntilDone();
    chassis.moveToPoint(-6, 74, 2500);
    chassis.waitUntilDone();
    */

    //New Blue Left Match Auton (Goal Rush)
    /*
    chassis.moveToPoint(-0.190, 13.58, 1000);
    chassis.waitUntilDone();
    ladyBrownState=ForwardState;
    pros::delay(900);
    ladyBrownState=StartingState;
    pros::delay(500);
    chassis.waitUntilDone();
    chassis.moveToPoint(0.566, -21.986, 2000, {.forwards=false, .maxSpeed=50});
    chassis.waitUntilDone();
    intake_motor.move(127);
    tipper_piston.toggle();
    pros::delay(500);
    chassis.waitUntilDone();
    chassis.turnToHeading(126, 1500);
    chassis.waitUntilDone();
    chassis.moveToPoint(25.05, -39.3, 8000);
    chassis.waitUntilDone();
    intake_motor.move(0);
    */
    
    /*
    intake_motor.move(127);
    chassis.turnToHeading(-198.77, 900);
    chassis.waitUntilDone();
    chassis.moveToPoint(30, -45.097, 1400);
    chassis.waitUntilDone();
    intake_motor.move(0);
    chassis.moveToPoint(39.11, -63.5, 1400);
    chassis.waitUntilDone();
    chassis.turnToHeading(-302.93, 1000);
    chassis.waitUntilDone();
    chassis.moveToPoint(30.02, -69.865, 1500, {.forwards=false});
    chassis.waitUntilDone();
    tipper_piston.toggle();
    pros::delay(200);
    chassis.waitUntilDone();
    intake_motor.move(127);
    chassis.moveToPoint(37.34, -64.95, 1000);
    chassis.waitUntilDone();
    tipper_piston.toggle();
    //Match Auton Blue left
    */
    /*
    pros::delay(3000);
    chassis.waitUntilDone();
    chassis.moveToPoint(-0.167, 13.58, 1000);
    chassis.waitUntilDone();
    ladyBrownState=ForwardState;
    pros::delay(900);
    ladyBrownState=StartingState;
    pros::delay(500);
    chassis.waitUntilDone();
    chassis.moveToPoint(0, -22.24, 1000, {.forwards=false});
    chassis.waitUntilDone();
    chassis.turnToPoint(-7.45, -34, 1000, {.forwards=false});
    chassis.waitUntilDone();
    chassis.moveToPoint(-7.45, -34, 1000, {.forwards=false, .maxSpeed=40});//move to first goal
    chassis.waitUntilDone();
    tipper_piston.toggle();
    pros::delay(300);
    intake_motor.move(127);
    chassis.turnToHeading(-63.68, 800);//turn to colored stake
    chassis.waitUntilDone();
    intake_piston.toggle();
    intake_motor.move(127);
    pros::delay(200);
    chassis.waitUntilDone();
    chassis.moveToPoint(-34.3, -24.9, 1500, {.maxSpeed=100});//move to colored stake
    chassis.waitUntilDone();
    intake_piston.toggle();
    chassis.moveToPoint(-27, -26, 1400, {.forwards=false});//move back to intake better
    chassis.waitUntilDone();
    intake_motor.move(127);
    pros::delay(1000);
    chassis.waitUntilDone();
    intake_motor.move(0);
    tipper_piston.toggle();
    pros::delay(400);
    chassis.waitUntilDone();
    chassis.turnToHeading(-247.4, 800);//turn to neutral stake
    chassis.moveToPoint(11, -41.46, 1600, {.maxSpeed=100});//move to stack of two rings
    intake_motor.move(127);
    pros::delay(1500);
    chassis.waitUntilDone();
    intake_motor.move(0);
    chassis.waitUntilDone();
    chassis.turnToHeading(-89.6, 800);
    chassis.waitUntilDone();
    chassis.moveToPoint(-2.14, -41.47, 1100);
    chassis.waitUntilDone();
    chassis.turnToHeading(336, 900);
    chassis.waitUntilDone();
    chassis.moveToPoint(7.2666, -65.54, 1200, {.forwards=false, .maxSpeed=50});//move to second goal
    chassis.waitUntilDone();
    tipper_piston.toggle();
    pros::delay(200);
    intake_motor.move(127);
    chassis.moveToPoint(-7.394, -40.83, 1200);//move back
    chassis.waitUntilDone();
    chassis.turnToHeading(410.64, 700);
    chassis.waitUntilDone();
    chassis.moveToPoint(-25.171, -61.16, 1500, {.forwards=false});//touch bar
    chassis.waitUntilDone();
*/
/*
//Match Auton Blue Right
chassis.moveToPoint(-0.08, 14, 1400); //move forward to colored stake
chassis.waitUntilDone();
ladyBrownState=ForwardState;
pros::delay(1000);
ladyBrownState=StartingState;
chassis.moveToPoint(3, 0, 1300, {.forwards=false});
chassis.waitUntilDone();
chassis.turnToHeading(3.4, 800);
chassis.waitUntilDone();
chassis.moveToPoint(0.32, -21.79, 1300, {.forwards=false, .maxSpeed=50});//move to goal and tip it
chassis.waitUntilDone();
tipper_piston.toggle();
pros::delay(400);
chassis.waitUntilDone();
chassis.moveToPoint(-1.03, -34.5, 1000, {.forwards=false}); 
chassis.waitUntilDone();
intake_motor.move(127);
chassis.turnToHeading(-112.5, 1000);//turn towards rings on right
chassis.waitUntilDone();
chassis.moveToPoint(-24.5, -50, 1500, {.maxSpeed=90});//move to ring and intake it
chassis.waitUntilDone();
pros::delay(1000);
chassis.waitUntilDone();
chassis.turnToHeading(-210.4, 1200);//turn to stack of four
chassis.waitUntilDone();
chassis.moveToPoint(-18.5, -61.8, 2000);//move to stack
chassis.waitUntilDone();
pros::delay(1000);
chassis.waitUntilDone();
chassis.turnToHeading(-156.3, 1000);//turn to gt right ring
chassis.waitUntilDone();
chassis.moveToPoint(-22.6, -63.4, 1500);
chassis.waitUntilDone();
pros::delay(800);
chassis.waitUntilDone();
chassis.moveToPoint(-6.782, -40.2, 1500, {.forwards=false});//move back
chassis.waitUntilDone();
chassis.turnToHeading(-63.35, 1000);
chassis.waitUntilDone();
chassis.moveToPoint(13.64, -51.99, 1500, {.forwards=false});//touch bar
*/

  //Match Auton Red Left Not Official
  /*
  pros::delay(3000);
  chassis.waitUntilDone();
  chassis.moveToPoint(0, -26.6, 2000, {.forwards=false});
  chassis.waitUntilDone();
  chassis.moveToPoint(0, -36.6, 1500, {.forwards=false, .maxSpeed=40});
  chassis.waitUntilDone();
  tipper_piston.toggle();
  pros::delay(500);
  chassis.waitUntilDone();
  intake_motor.move(127);
  chassis.turnToHeading(89, 1500);
  chassis.waitUntilDone();
  chassis.moveToPoint(20.8, -36, 1500);
  chassis.waitUntilDone();
  chassis.turnToHeading(177, 1500);
  chassis.waitUntilDone();
  chassis.moveToPoint(21.27, -51.7, 1500);
  chassis.waitUntilDone();
  chassis.turnToHeading(125, 900);
  chassis.waitUntilDone();
  chassis.moveToPoint(25.78, -55.43, 1000);
  chassis.waitUntilDone();
  chassis.moveToPoint(22, -53, 1000, {.forwards=false});
  chassis.waitUntilDone();
  chassis.turnToHeading(100.2, 1000);
  chassis.waitUntilDone();
  chassis.moveToPoint(32.3, -54.8, 1000);
  chassis.waitUntilDone();
  chassis.moveToPoint(6.9, -48.42, 1000, {.forwards=false});
*/
  //Match Auton Red Right Not Official
  /*
  chassis.moveToPoint(0, -19.46, 1000, {.forwards=false});
    chassis.waitUntilDone();
    chassis.turnToHeading(-32.36, 700);
    chassis.waitUntilDone();
    chassis.moveToPoint(7.45, -36.18, 1200, {.forwards=false, .maxSpeed=40});//move to first goal
    chassis.waitUntilDone();
    tipper_piston.toggle();
    pros::delay(300);
    intake_motor.move(127);
    chassis.turnToHeading(61.56, 800);//turn to colored stake
    chassis.waitUntilDone();
    intake_piston.toggle();
    intake_motor.move(127);
    chassis.moveToPoint(33.82, -22.055, 1500, {.maxSpeed=80});//move to colored stake
    chassis.waitUntilDone();
    intake_piston.toggle();
    chassis.moveToPoint(27.068, -24.85, 1500, {.forwards=false});//move back to intake better    intake_piston.toggle();
    chassis.waitUntilDone();
    chassis.turnToHeading(-124.3, 800);//turn to neutral stake
    chassis.moveToPoint(-6.77, -44.95, 1800, {.maxSpeed=100});//move to stack of two rings
    intake_motor.move(127);
    pros::delay(1200);
    chassis.waitUntilDone();
    */
/*
    intake_motor.move(0);
    pros::delay(300);
    chassis.waitUntilDone();
    chassis.turnToHeading(-53.85, 900);
    chassis.waitUntilDone();
    chassis.moveToPoint(3.29, -56, 1500, {.forwards=false});
    chassis.waitUntilDone();
    chassis.turnToHeading(29.56, 900);
    chassis.waitUntilDone();
    chassis.moveToPoint(-3.497, -61.98, 1600, {.forwards=false, .maxSpeed=50});//move to second goal
    chassis.waitUntilDone();
    tipper_piston.toggle();
    pros::delay(200);
    intake_motor.move(127);
    chassis.moveToPoint(7.46, -40, 1300);//move back
    chassis.waitUntilDone();
    chassis.turnToHeading(-43, 800);
    chassis.waitUntilDone();
    chassis.moveToPoint(23.88, -56.68, 1500, {.forwards=false});//touch bar
    chassis.waitUntilDone();
    */
}