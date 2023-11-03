#ifndef SHIFTER_H
#define SHIFTER_H

#include "../ALU/logic_gates.h"
#include "../byte.h"

byte arithmetic_shift_left(byte b);
byte logical_shift_right(byte b);

byte rotate_left(byte b);
byte rotate_right(byte b);

#endif // SHIFTER_H