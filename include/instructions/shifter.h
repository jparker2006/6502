#ifndef SHIFTER_H
#define SHIFTER_H

#include "../alu_logic.h"
#include "../byte.h"

byte arithmetic_shift_left(byte b, int nShift);
byte arithmetic_shift_right(byte b, int nShift);

byte rotate_left(byte b, int nShift);
byte rotate_right(byte b, int nShift);

#endif // SHIFTER_H