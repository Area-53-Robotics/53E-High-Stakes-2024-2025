#include "globals.hpp"

void currentTask(void * param);

enum LadyBrownStates {
    StartingState,
    SecondState,
    ForwardState,
};
extern LadyBrownStates ladyBrownState;
