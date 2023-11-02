#ifndef ADDER_H
#define ADDER_H

#include <stdlib.h>

#include "alu_logic.h"

bit* half_adder(bit a, bit b);
bit* full_adder(bit a, bit b, bit carry_in);

#endif // ADDER_H