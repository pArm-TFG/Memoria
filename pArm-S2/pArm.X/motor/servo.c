/*
 * 2020 | pArm-S2 by Javinator9889
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see https://www.gnu.org/licenses/.
 *
 * Created by Javinator9889 on 2020 - pArm-S1.
 */

#include "servo.h"
#include "../utils/defs.h"
#include "../utils/utils.h"

//volatile uint_fast8_t limit_switch_map[4] = {0U};

void SERVO_write_angle(const servo_t *servo, double64_t angle_rad) {
    double64_t time = SERVO_from_angle_to_ms(angle_rad);
    SERVO_write_milliseconds(servo, time);
}

inline void SERVO_write_milliseconds(const servo_t *servo, double64_t ms) {
    *servo->dutyCycleRegister = (uint16_t) (FOSC / ((1 / ms) * 1000 * 64));
}

inline void SERVO_write_value(const servo_t *servo, uint16_t dutyCycleValue) {
    *servo->dutyCycleRegister = dutyCycleValue;
}

inline double64_t SERVO_from_angle_to_ms(double64_t angle_rad) {
    return mapf(angle_rad, .0F, MATH_PI, MIN_PULSE_MS, MAX_PULSE_MS);
}
