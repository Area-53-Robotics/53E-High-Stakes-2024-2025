#include <cstdio>
#include "lemlib/api.hpp"
#include "main.h"
#include "pros/rtos.hpp"
#include "globals.hpp"

void autonomous() {
    //Skills Auton
  
    intake_motor.move(127);
    pros::delay(130);
    intake_motor.move(0);
    pros::delay(500);
    chassis.moveToPoint(0, 14, 1500);
    chassis.waitUntilDone();
    chassis.turnToHeading(-85, 2000);
    chassis.waitUntilDone();
    chassis.moveToPoint(16, 10, 2000, {.forwards=false, .maxSpeed = 40});
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

    //Match Auton Blue left
    /*
    chassis.moveToPoint(0, -16, 2500, {.forwards=false});
    chassis.waitUntilDone();
    chassis.turnToHeading(30, 1000);
    chassis.waitUntilDone();
    chassis.moveToPoint(-12, -35, 1500, {.forwards=false, .maxSpeed=50});
    chassis.waitUntilDone();
    tipper_piston.toggle();
    pros::delay(1000);
    intake_motor.move(127);
    pros::delay(1500);
    intake_motor.move(0);
    tipper_piston.toggle();
    pros::delay(500);
    chassis.turnToHeading(111, 1000);
    chassis.moveToPoint(1, -40.69, 2000);
    intake_motor.move(127);
    pros::delay(1000);
    chassis.waitUntilDone();
    intake_motor.move(0);
    chassis.waitUntilDone();
    chassis.turnToHeading(43.8, 1000);
    chassis.moveToPoint(-8.33, -48.97, 1500, {.forwards=false});
    chassis.turnToHeading(-25.16, 1000);
    chassis.waitUntilDone();
    chassis.moveToPoint(-1.43, -61.59, 1000, {.forwards=false, .maxSpeed=50});
    chassis.waitUntilDone();
    tipper_piston.toggle();
    pros::delay(800);
    chassis.waitUntilDone();
    chassis.moveToPoint(-0.5, -50.5, 1000);
    intake_motor.move(127);
    chassis.turnToHeading(-70, 1000);
    chassis.moveToPoint(-24.41, -56.65, 1000, {.forwards=false});
  */

  //Match Auton Blue Right
  /*
  chassis.moveToPoint(0.9, -25.57, 2000, {.forwards=false});
  chassis.waitUntilDone();
  chassis.moveToPoint(1.299, -37.77, 2500, {.forwards=false, .maxSpeed=50});
  chassis.waitUntilDone();
  tipper_piston.toggle();
  pros::delay(500);
  chassis.waitUntilDone();
  intake_motor.move(127);
  chassis.turnToHeading(-74, 1500);
  chassis.waitUntilDone();
  chassis.moveToPoint(-17, -38.77, 3000);
  chassis.waitUntilDone();
  chassis.turnToHeading(-145, 1500);
  chassis.waitUntilDone();
  chassis.moveToPoint(-25, -54, 2000);
  chassis.waitUntilDone();
  chassis.moveToPoint(0, -40, 1500, {.forwards=false});
  chassis.waitUntilDone();
  chassis.turnToHeading(-114, 1500);
  chassis.waitUntilDone();
  chassis.moveToPoint(-22, -54, 1000);
  chassis.waitUntilDone();
  chassis.moveToPoint(0, -40, 1500, {.forwards=false});
*/

  //Match Auton Red Left
  /*
  chassis.moveToPoint(0, -26.6, 2000, {.forwards=false});
  chassis.waitUntilDone();
  chassis.moveToPoint(0, -36.6, 1500, {.forwards=false, .maxSpeed=50});
  chassis.waitUntilDone();
  tipper_piston.toggle();
  pros::delay(500);
  chassis.waitUntilDone();
  intake_motor.move(127);
  chassis.turnToHeading(74, 1500);
  chassis.waitUntilDone();
  chassis.moveToPoint(17.5, -36, 1500);
  chassis.waitUntilDone();
  chassis.turnToHeading(152.94, 1500);
  chassis.waitUntilDone();
  chassis.moveToPoint(27.56, -49, 1500);
  chassis.waitUntilDone();
  chassis.moveToPoint(26.6, -35, 2000, {.forwards=false});
  chassis.waitUntilDone();
  chassis.turnToPoint(37, -35.49, 1500);
  chassis.waitUntilDone();
  chassis.moveToPoint(37, -35, 1500);
  chassis.waitUntilDone();
  chassis.turnToPoint(37, -52.49, 1500);
  chassis.waitUntilDone();
  chassis.moveToPoint(40, -52.49, 1500);
  chassis.waitUntilDone();
  chassis.moveToPoint(43, -51.9, 1500, {.forwards=false});
  */

  //Match Auton Red Right
  /*                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv
    chassis.moveToPoint(0, -16, 2500, {.forwards=false});
    chassis.waitUntilDone();
    chassis.turnToHeading(-30, 1000);
    chassis.waitUntilDone();
    chassis.moveToPoint(10, -35, 1500, {.forwards=false, .maxSpeed=50});
    chassis.waitUntilDone();
    tipper_piston.toggle();
    pros::delay(1000);
    chassis.waitUntilDone();
    intake_motor.move(127);
    pros::delay(1500);
    chassis.turnToHeading(-111, 1000);
    chassis.moveToPoint(-1, -38, 2000);
    chassis.waitUntilDone();
    */


}