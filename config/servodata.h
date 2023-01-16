#pragma once

#include <Arduino.h>
#include "servoports.h"

// pinNumber, maxAngularVel degree/sec, calibMin, calibMax, angleDegMin, angleDegMax, home position
// minAngle must be less than maxAngle. To flip the direction of rotation do:
// {minFreq <-> maxFreq, minAngle * -1 <-> maxAngle * -1}
const float servoConfig[6][7] = {
    { pin_servo_0,  150 * DEG_TO_RAD,  600.00, 2400.00, -150.00 * DEG_TO_RAD, 150.00 * DEG_TO_RAD, 0 },
    { pin_servo_1,  150 * DEG_TO_RAD, 2400.00, 600.00,   -90.00 * DEG_TO_RAD,  50.00 * DEG_TO_RAD, -45 },
    { pin_servo_2,  150 * DEG_TO_RAD, 1060.00, 2100.00,  -45.00 * DEG_TO_RAD,  45.00 * DEG_TO_RAD, 0 },
    { pin_servo_3,  150 * DEG_TO_RAD,  560.00, 2400.00, -135.00 * DEG_TO_RAD, 135.00 * DEG_TO_RAD, 0 },
    { pin_servo_4,  150 * DEG_TO_RAD,  600.00, 2400.00,  -90.00 * DEG_TO_RAD,  90.00 * DEG_TO_RAD, 0 },
    { pin_servo_5,  150 * DEG_TO_RAD,  600.00, 2400.00,  -90.00 * DEG_TO_RAD,  90.00 * DEG_TO_RAD, 0 }
};