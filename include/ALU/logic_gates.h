#ifndef LOGIC_GATES_H
#define LOGIC_GATES_H

#include "../bit.h"

// Logic gates
bit and(bit a, bit b);
bit not (bit a);
bit or(bit a, bit b);
bit xor(bit a, bit b);

// Logic macros
bit nand(bit a, bit b);
bit nor(bit a, bit b);

#endif // LOGIC_GATES_H