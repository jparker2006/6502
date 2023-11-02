#ifndef GATES_H
#define GATES_H

#include "bit_def.h"

// Logic gates
bit and(bit a, bit b);
bit not (bit a);
bit or(bit a, bit b);
bit xor(bit a, bit b);

// Logic macros
bit nand(bit a, bit b);
bit nor(bit a, bit b);

#endif // GATES_H