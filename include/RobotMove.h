#ifndef RobotMove_h
#define RobotMove_h
#include "main.h"
#include "okapi/api/units/QAngle.hpp"
#include "okapi/api/units/QLength.hpp"

class RobotMove {
    public:
    void raw_tank_holo(double strait_Power, double turn_Power, double strafe_power, double scalar, bool reversed);
    void raw_tank_holo(double strait_Power, double turn_Power, double strafe_power, bool reserved);
    void raw_tank(double strait_Power, double turn_Power, bool reversed);

};
#endif