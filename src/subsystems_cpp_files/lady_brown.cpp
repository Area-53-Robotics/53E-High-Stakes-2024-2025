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
int ladyBrownState;

void ladyBrownSwitchState (bool increase) {
    if (increase) {
        if (ladyBrownState < 3) ladyBrownState++;
        else ladyBrownState = 1;
    } else {
        if (ladyBrownState > 1) ladyBrownState--;
        else ladyBrownState = 3;
    } 
}

