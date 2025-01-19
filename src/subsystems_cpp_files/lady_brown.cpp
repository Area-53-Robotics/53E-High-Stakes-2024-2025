#include "lemlib/api.hpp"
#include "main.h"
#include "globals.hpp"
#include "lady_brown.hpp"

/*
first stage : 0, resting state
second stage : load into first level
third stage : load into second level
And then to score use the toggle button left
*/

LadyBrownStates ladyBrownState = StartingState;

void currentTask(void * param) {
    while (true){
        if (ladyBrownState==StartingState) {
            lady_brown_motor.move(((171*100)-rotation_sensor.get_angle()) * 0.009);
        }
        if (ladyBrownState==SecondState) {
            lady_brown_motor.move(((207.5*100)-rotation_sensor.get_angle()) * 0.025);
        }
        if (ladyBrownState==ForwardState) {
            lady_brown_motor.move(((314*100)-rotation_sensor.get_angle()) * 0.02);
        }
    }

}
