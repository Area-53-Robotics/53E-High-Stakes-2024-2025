#include "lemlib/api.hpp"
#include "main.h"
#include "globals.hpp"

/**
 * A callback function for LLEMU's center button.
 *
 * When this callback is fired, it will toggle line 2 of the LCD text between
 * "I was pressed!" and nothing.
 */
void on_center_button() {
	static bool pressed = false;
	pressed = !pressed;
	if (pressed) {
		pros::lcd::set_text(2, "I was pressed!");
	} else {
		pros::lcd::clear_line(2);
	}
}

/**
 * Runs initialization code. This occurs as soon as the program is started.
 *
 * All other competition modes are blocked by initialize; it is recommended
 * to keep execution time for this mode under a few seconds.
 */
void initialize() {
	 pros::lcd::initialize(); // initialize brain screen
	 lady_brown_motor.set_brake_mode(pros::E_MOTOR_BRAKE_HOLD);
    chassis.calibrate(); // calibrate sensors
    // print position to brain screen
    pros::Task screen_task([&]() {
        while (true) {
            // print robot location to the brain screen
            pros::lcd::print(0, "X: %f", chassis.getPose().x); // x
            pros::lcd::print(1, "Y: %f", chassis.getPose().y); // y
            pros::lcd::print(2, "Theta: %f", chassis.getPose().theta); // heading
            // delay to save resources
            pros::delay(20);
        }
    });
}

/**
 * Runs while the robot is in the disabled state of Field Management System or
 * the VEX Competition Switch, following either autonomous or opcontrol. When
 * the robot is enabled, this task will exit.
 */
void disabled() {}

/**
 * Runs after initialize(), and before autonomous when connected to the Field
 * Management System or the VEX Competition Switch. This is intended for
 * competition-specific initialization routines, such as an autonomous selector
 * on the LCD.
 *
 * This task will exit when the robot is enabled and autonomous or opcontrol
 * starts.
 */
void competition_initialize() {}

/**
 * Runs the user autonomous code. This function will be started in its own task
 * with the default priority and stack size whenever the robot is enabled via
 * the Field Management System or the VEX Competition Switch in the autonomous
 * mode. Alternatively, this function may be called in initialize or opcontrol
 * for non-competition testing purposes.
 *
 * If the robot is disabled or communications is lost, the autonomous task
 * will be stopped. Re-enabling the robot will restart the task, not re-start it
 * from where it left off.
 */

void opcontrol() {
	led.set_all(#f76560);
	led.set_all(#88f760);
	bool is_drive_reversed = false;
	bool is_eject_blue = false;
	bool is_lift_reversed = true;
	while (true) {
		//friction
		std::vector<double> left_powers = left_motors.get_power_all();
		std::vector<double> right_powers = right_motors.get_power_all();

		//printf("%f,%f,%f,%f,%f,%f\n",left_powers[0],left_powers[1],left_powers[2],right_powers[0],right_powers[1],right_powers[2]);
	//Drivetrain


		if (controller.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_A)) {
			controller.rumble(".");
			is_drive_reversed = !is_drive_reversed;
		}
		int left = (controller.get_analog(pros::E_CONTROLLER_ANALOG_LEFT_Y));
		int right = (controller.get_analog(pros::E_CONTROLLER_ANALOG_RIGHT_Y));

		if (!is_drive_reversed) {
			left_motors.move(left);
			right_motors.move(right);
		} else {
			left_motors.move(-right);
			right_motors.move(-left);
		}

	//Tipper 
	  if (controller.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_L1)) {
		controller.rumble(".");
		tipper_piston.toggle();
	  }
	if (tipper_piston.get_value()){
		led.set_all(0x88f760);
	} else {
		led.set_all(0xf76560);
	}

	//Intake
	  if (controller.get_digital(pros::E_CONTROLLER_DIGITAL_R1)) {
		intake_motor.move(127);
	  } else if (controller.get_digital(pros::E_CONTROLLER_DIGITAL_R2)) {
		intake_motor.move(-127); 
	  } else {
		intake_motor.move(0);
	  }

	//Lady Brown Mech
	rotation_sensor.set_position(0);
	  if (controller.get_digital(pros::E_CONTROLLER_DIGITAL_L2)) {
		rotation_sensor.set_position(0);
			if (rotation_sensor.get_position() == 0) {
				lady_brown_motor.move_absolute(60, 127);
			} else {
				lady_brown_motor.move(0);
			}
	  } else if (controller.get_digital(pros::E_CONTROLLER_DIGITAL_LEFT)) {
			is_lift_reversed = !is_lift_reversed;
			while (controller.get_digital(pros::E_CONTROLLER_DIGITAL_LEFT)) {
	 			if (!is_lift_reversed) {
					lady_brown_motor.move(127);
	 			} else {
					lady_brown_motor.move(-70);
	  			}
			}	
	  } else {
		lady_brown_motor.move(0);
	  } 
	
	
/*
	//Color Sensor
	if (controller.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_B)) {
		controller.rumble(".");
		is_eject_blue = !is_eject_blue;
	}

	if (!is_eject_blue && (optical_sensor.get_hue > 65 && optical_sensor.get_hue < 80)) { //or red depending on match
		intake_motor.move(0);
	} else if (is_eject_blue && (optical_sensor.get_hue > 65 && optical_sensor.get_hue < 80)){
		intake_motor.move(0);
	} else if (controller.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_RIGHT)) {

	}
*/
	}
	pros::delay(20);                         // Run for 20 ms then update

	}

