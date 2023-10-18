#include "RobotMove.h"
#include "RobotConfig.h"

void RobotMove::raw_tank_holo(double strait_Power, double turn_Power, double strafe_power , double scalar, bool reversed){
    int pow0 = (strait_Power + strafe_power) * scalar;
    int pow1 = (strait_Power - strafe_power) * scalar;
    if (reversed) {
        pow0 = pow0 * -1;
        pow1 = pow1 * -1;
    }
    leftf_mtr = pow1 + turn_Power;
	leftb_mtr = pow1 + turn_Power;
    leftfc_mtr = pow1 + turn_Power;
    leftbc_mtr = pow1 + turn_Power;
    rightfc_mtr = -pow0 + turn_Power;
    rightbc_mtr = -pow0 + turn_Power;
    rightf_mtr = -pow0 + turn_Power;
	rightb_mtr = -pow0 + turn_Power;
}
void RobotMove::raw_tank_holo(double strait_Power, double turn_Power, double strafe_power, bool reversed){
    int pow0 = (strait_Power + strafe_power);
    int pow1 = (strait_Power - strafe_power);
    if(reversed) {
        pow0 = pow0 * -1;
        pow1 = pow1 * -1;
    }
    leftf_mtr = pow1 + turn_Power;
    leftb_mtr = pow1 + turn_Power;
    leftfc_mtr = -pow1 + turn_Power;
    leftbc_mtr = -pow1 + turn_Power;
    rightfc_mtr = -pow0 + turn_Power;
    rightbc_mtr = -pow0 + turn_Power;
    rightf_mtr = pow0 + turn_Power;
    rightb_mtr = pow0 + turn_Power;
}
void RobotMove::raw_tank(double strait_Power, double turn_Power, bool reversed){
    if(reversed){
        strait_Power = -strait_Power;
    }
    leftf_mtr =  strait_Power + turn_Power;
    leftb_mtr =  strait_Power + turn_Power;
    leftfc_mtr = -strait_Power - turn_Power;
    leftbc_mtr = -strait_Power - turn_Power;
    rightfc_mtr = -strait_Power + turn_Power;
    rightbc_mtr = -strait_Power + turn_Power;
    rightf_mtr =  strait_Power - turn_Power;
    rightb_mtr =  strait_Power - turn_Power;
}