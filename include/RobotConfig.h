#include "api.h"
#include "pros/adi.h"
#include "pros/adi.hpp"
#include "pros/imu.hpp"
#include <type_traits>

inline pros::Motor leftf_mtr(12);
inline pros::Motor leftfc_mtr(11);
inline pros::Motor leftbc_mtr(14);
inline pros::Motor leftb_mtr(15);
inline pros::Motor rightf_mtr(20);
inline pros::Motor rightfc_mtr(19);
inline pros::Motor rightbc_mtr(18);
inline pros::Motor rightb_mtr(17);