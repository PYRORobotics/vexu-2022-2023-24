#include "api.h"
#include "pros/adi.h"
#include "pros/adi.hpp"
#include "pros/imu.hpp"
#include <type_traits>

inline pros::Motor leftf_mtr(13);
inline pros::Motor rightf_mtr(18);
inline pros::Motor rightb_mtr(20);
inline pros::Motor leftb_mtr(12);